package Templates

import Chisel._

class MetaPipeBundle(w : Int, n_pipe_stages : Int) extends Bundle {

	val en = Bool().asInput
	val done_mp_stages = Vec.fill(n_pipe_stages) { Bool () }.asInput

	val en_mp_stages = Vec.fill(n_pipe_stages) { Bool () }.asOutput
	val done = Bool().asOutput

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


	val mp_actual_stages = mp_fsm_states drop (2)

	val n_start_stages = n_pipe_stages 
	val start_done = Vec.fill(n_start_stages) { Bool() }
	for (i <- 0 until n_start_stages) {
		start_done(i) := io.done_mp_stages dropRight ((n_start_stages - 1) - i) reduceLeft (_ && _)
		when (state === mp_actual_stages(i)) {
			when (start_done(i)) 	{ state := mp_actual_stages(i + 1) }
		}
	}

	val n_drain_stages = n_pipe_stages - 1
	val drain_done = Vec.fill(n_drain_stages) { Bool() }
	for (i <- 0 until n_drain_stages) {
		drain_done(i) := io.done_mp_stages drop (i + 1) reduceLeft (_ && _)
		when (state === mp_actual_stages(i + n_pipe_stages)) {
			when (drain_done(i))    { state := mp_actual_stages(i + n_pipe_stages + 1) }
		}
	}


	for (i <- 0 until n_pipe_stages) {
		io.en_mp_stages(i) := ( for (j <- i until i + n_pipe_stages) yield  state === mp_actual_stages(j) ) reduceLeft (_ || _)
	}

	io.done := (state === mp_Done)
}

class MetaPipe_FSM_Testing(c : MetaPipe_FSM) extends Tester(c) {
	val pipe_n = 3
	poke(c.io.en, 0)
	step(1)
	poke(c.io.en, 1)
	step(1)
	step(1)
	for (j <- 0 until pipe_n) {
		(0 until pipe_n) foreach { i => { poke(c.io.done_mp_stages(i), 0);
									     	expect(c.io.en_mp_stages(i), if (i <= j) 1 else 0)} } 
		step(1)
		(0 until pipe_n) foreach { i => { poke(c.io.done_mp_stages(i), if (i <= j) 1 else 0);
									     	expect(c.io.en_mp_stages(i), if (i <= j) 1 else 0)} } 
 		step(1)
     }

	(0 until pipe_n) foreach { i => { poke(c.io.done_mp_stages(i), 0);
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
	step(1)
	expect(c.io.done, 1)
}