package Templates

import Chisel._


class DotProductPipe(w : Int) extends Module {

	val io = new Bundle {

		val en = Bool(INPUT)
		val reset = Bool(INPUT)
		val block_done = Bool(INPUT)

		val done = Bool(OUTPUT)
		val run = Bool(OUTPUT)
		val pipe_reset = Bool(OUTPUT)
	}

	val pipeReset :: pipeRun :: pipeDone :: pipeWait :: Nil = Enum(UInt(), 4)
	val pipe_state = Reg(init = pipeReset)



	switch (pipe_state) {
		
		is (pipeReset) {
			pipe_state := pipeRun
		}

		is (pipeRun) {
			when (io.block_done) { pipe_state := pipeDone }
		}

		is (pipeDone) {
			pipe_state := pipeWait 
		}

		is (pipeWait) {
			when (io.en) { pipe_state := pipeReset }
		}
	}

	io.run := (pipe_state === pipeRun)
	io.done :=  (pipe_state === pipeDone)
	io.pipe_reset := (pipe_state === pipeReset)
}

