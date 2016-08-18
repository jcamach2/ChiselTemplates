package Templates

import Chisel._

class MetaPipeBundle(w : Int, n_pipe_stages : Int) extends Bundle {

	val en = Bool().asInput
	val done_mp_stages = Vec.fill(n_pipe_stages) { Bool () }.asInput

	val en_mp_stages = Vec.fill(n_pipe_stages) { Bool () }.asOutput
	val done = Bool().asOutput

	val done_complete = Bool().asInput /* indicates when pipeline should start draining - when first pipe stage has iterated over all values */
										/* assumes they are already latched by calling module  */
	val reset = Bool().asOutput
	val complete_reset = Bool().asOutput
}


class MetaPipe_FSM(w : Int, n_pipe_stages : Int) extends Module {

	val io = new MetaPipeBundle (w, n_pipe_stages)

	val en_stages = 2 * n_pipe_stages - 1

	val mp_fsm_states = Enum(UInt(), 2 + en_stages + 1)
	val mp_Init = mp_fsm_states(0)
	val mp_Reset = mp_fsm_states(1)
	val mp_Done = mp_fsm_states (mp_fsm_states.size - 1)
	val state = Reg(init = mp_Init)

	switch (state) {

		is (mp_Init) {
			when (io.en) { state := mp_Reset }
 		}

 		is (mp_Reset) {
 			state := mp_fsm_states(2)
 		}

 		is (mp_Done) {
 			state := mp_Init
 		}
	}
	val all_pipes_done = io.done_mp_stages reduceLeft (_ && _) /* indicates when all pipe stages have raised their done signal high - not necessarily when entire pipeline has finished */


	val mp_actual_stages = mp_fsm_states drop (2) /* include all pipe stages plus done stage */
	val steady_state = mp_actual_stages(n_pipe_stages - 1)

	val correct_enable = (state === steady_state) && all_pipes_done

	val n_start_stages = n_pipe_stages - 1
	val start_done = Vec.fill(n_start_stages) { Bool() }
	for (i <- 0 until n_start_stages) {
		start_done(i) := io.done_mp_stages dropRight (n_start_stages - i) reduceLeft (_ && _)
		when (state === mp_actual_stages(i)) {
			when (start_done(i)) 	{ state := mp_actual_stages(i + 1) }
		}
		correct_enable := correct_enable || (state === mp_actual_stages(i) && start_done(i))
	}


	/* stay in this state until the first pipe stage's counter is completely done and all subsequent stages have finished -> start draining */
	when (state === steady_state) {
		when (io.done_complete && all_pipes_done) 	{	state := mp_actual_stages(n_pipe_stages) }
	}



	val n_drain_stages = n_pipe_stages - 1
	val drain_done = Vec.fill(n_drain_stages) { Bool() }
	for (i <- 0 until n_drain_stages) {
		drain_done(i) := io.done_mp_stages drop (i + 1) reduceLeft (_ && _)
		when (state === mp_actual_stages(i + n_pipe_stages)) {
			when (drain_done(i))    { state := mp_actual_stages(i + n_pipe_stages + 1) }
		}
		correct_enable := correct_enable || (state === mp_actual_stages(i + n_pipe_stages) && drain_done(i))
	}


	val pipe_running_in_mp_state = Vec.fill(n_pipe_stages) { Bool() }
	/* if entire pipeline still not done */
	for (i <- 0 until n_pipe_stages) {
	//	io.en_mp_stages(i) := ( for (j <- i until i + n_pipe_stages) yield  Mux(state === steady_state, steady_en_states(i*3 + 1), state === mp_actual_stages(j)) ) reduceLeft (_ || _)
		pipe_running_in_mp_state(i) := ( for (j <- i until i + n_pipe_stages) yield  state === mp_actual_stages(j) )  reduceLeft (_ || _)
		io.en_mp_stages(i) := pipe_running_in_mp_state(i) && !io.done_mp_stages(i)
	}

	io.reset :=  (state === mp_Reset)
	io.complete_reset := (state === mp_Init)
	io.done := (state === mp_Done)

}

class MetaPipe_FSM_Testing(c : MetaPipe_FSM) extends Tester(c) {
	val pipe_n = 3
	poke(c.io.en, 0)
	step(1)
	poke(c.io.en, 1)
	poke(c.io.done_complete, 0)
	step(1)
	step(1)
	for (j <- 0 until pipe_n - 1) {
		(0 until pipe_n) foreach { i => { poke(c.io.done_mp_stages(i), 0);
									     	expect(c.io.en_mp_stages(i), if (i <= j) 1 else 0)} } 
		step(1)
		(0 until pipe_n) foreach { i => { poke(c.io.done_mp_stages(i), if (i <= j) 1 else 0);
									     	expect(c.io.en_mp_stages(i), 0)} } 
 		step(1)
     }

	(0 until pipe_n) foreach { i => { poke(c.io.done_mp_stages(i), 0);
									 	expect(c.io.en_mp_stages(i), 1) } } 	
	step(1)								 		

	(0 until pipe_n) foreach { i => { poke(c.io.done_mp_stages(i), if (i == 1) 1 else 0);
									 	expect(c.io.en_mp_stages(i), if (i == 1) 0 else 1) } } 
	step(1)
	(0 until pipe_n) foreach { i => { poke(c.io.done_mp_stages(i), 1);
									 	expect(c.io.en_mp_stages(i), 0) } }
	step(1)
	(0 until pipe_n) foreach { i => { poke(c.io.done_mp_stages(i), 0);
									 	expect(c.io.en_mp_stages(i), 1) } }
    step(1)
   	(0 until pipe_n) foreach { i => { poke(c.io.done_mp_stages(i), 0);
									 	expect(c.io.en_mp_stages(i), 1) } }									 	
    step(1)
   	(0 until pipe_n) foreach { i => { poke(c.io.done_mp_stages(i), 1);
									 	expect(c.io.en_mp_stages(i), 0) } }
    poke(c.io.done_complete, 1) 
    step(1)									 	
 	/* start of drain stages */
	(0 until 4) foreach { _  => { (0 until pipe_n) foreach { i => { poke(c.io.done_mp_stages(i), 0);
									 		expect(c.io.en_mp_stages(i), if (i == 0) 0 else 1) } }; step(1) } }

	(0 until pipe_n) foreach { i => { poke(c.io.done_mp_stages(i), if (i == 2) 1 else 0);
									 	expect(c.io.en_mp_stages(i), if (i == 1) 1 else 0) } }

	step(1)
	(0 until pipe_n) foreach { i => { poke(c.io.done_mp_stages(i), if (i == 2) 1 else 0);
									 	expect(c.io.en_mp_stages(i), if (i == 1) 1 else 0) } }	
    step(1)									 	
	(0 until pipe_n) foreach { i => { poke(c.io.done_mp_stages(i), if (i == 2) 1 else 0);
									 	expect(c.io.en_mp_stages(i), if (i == 1) 1 else 0) } }	

    step(1)									 	
    (0 until pipe_n) foreach { i => { poke(c.io.done_mp_stages(i), if (i == 2) 1 else 0);
									 	expect(c.io.en_mp_stages(i), if (i == 1) 1 else 0) } }	

    step(1)		
    (0 until pipe_n) foreach { i => { poke(c.io.done_mp_stages(i), if (i == 0) 0 else 1);
								 	expect(c.io.en_mp_stages(i), 0) } }	
    step(1)		
    (0 until pipe_n) foreach { i => { poke(c.io.done_mp_stages(i), 0);
								 	expect(c.io.en_mp_stages(i), if (i == 2) 1 else 0) } }	    
	step(1)		
    (0 until pipe_n) foreach { i => { poke(c.io.done_mp_stages(i), if (i == 2) 1 else 0);
								 	expect(c.io.en_mp_stages(i), 0) } }	
    step(1)	
    expect(c.io.done, 1)							 	
/*	(0 until pipe_n) foreach { i => { poke(c.io.done_mp_stages(i), 0);
									 	expect(c.io.en_mp_stages(i), if (i <= 0) 0 else 1)} } 
	step(1)   
	(0 until pipe_n) foreach { i => { poke(c.io.done_mp_stages(i), if (i == 0) 1 else 0);
								 	expect(c.io.en_mp_stages(i), if (i <= 0) 0 else 1)} } 
	step(1)	
	(0 until pipe_n) foreach { i => { poke(c.io.done_mp_stages(i), if (i == 0) 0 else 1);
								 	expect(c.io.en_mp_stages(i), if (i <= 0) 0 else 1)} } 
	step(1)								 	
	(0 until pipe_n) foreach { i => { poke(c.io.done_mp_stages(i), if (i == 0) 1 else 0);
									 	expect(c.io.en_mp_stages(i), if (i <= 1) 0 else 1)} } 
	step(1)
	expect(c.io.done, 0)
	(0 until pipe_n) foreach { i => { poke(c.io.done_mp_stages(i), if (i == 2) 1 else 0);
									 	expect(c.io.en_mp_stages(i), if (i <= 1) 0 else 1)} } 
	step(1)*/

}