package Templates

import Chisel._

class SeqBundle(n_states : Int) extends Bundle {

	val pipe_done = (Vec.fill(n_states) { Bool() }).asInput
	val pipe_en = (Vec.fill(n_states) { Bool() }).asOutput

	val en = Bool().asInput
	val done = Bool().asOutput

	val complete_done = Bool().asInput

	val state_reset = Bool().asOutput
	val complete_reset = Bool().asOutput

}


class Sequential_FSM(n_states : Int) extends Module {
	
	val io = new SeqBundle(n_states)

	val totalStates = n_states + 3
	val seqValues = Enum(UInt(), totalStates)

	val seqInit = seqValues(0) 
	val seqReset = seqValues(1)
	val seqDone = seqValues(totalStates - 1)

	val state = Reg(init = seqInit)

	val pipeStages = for (i <- 2 until totalStates - 1) yield seqValues(i)
	 /* sequential FSM */
    switch (state) {

    	is (seqInit) {
    		when (io.en)     			      {  state := seqReset }
    	}

    	is (seqReset) {
    		state := pipeStages(0)
    	}

    	is (pipeStages(n_states - 1)) {
    		when (io.pipe_done(n_states - 1)) { state := Mux(io.complete_done, seqDone, seqReset) }
    	}

    	is (seqDone) {
    		state := seqInit
    	}

    }

    io.state_reset := (state === seqReset)
    io.complete_reset := (state === seqInit)

	pipeStages.zipWithIndex.dropRight(1) foreach { case(pipe, i) => { when (state === pipe) {
										 								when (io.pipe_done(i)) { state := pipeStages(i + 1) }
										  			   		        }
												 } 
								    }

    (0 until n_states) foreach { i => io.pipe_en(i) := (state === pipeStages(i)) }							    

    io.done := (state === seqDone)
}

