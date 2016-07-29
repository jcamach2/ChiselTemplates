package Templates

import Chisel._

class pipe_FSM(wait_cycles : Int) extends Module {

	val io = new Bundle {

		val en = Bool(INPUT)
		val counter_done = Bool(INPUT)

		val done = Bool(OUTPUT)
		val pipe_enabled = Bool(OUTPUT)
	}

	val	pipeInit :: pipeEnabled :: pipeWait :: pipeDone :: Nil = Enum(UInt(), 4)

	val curr_state = Reg(init = pipeInit)
	val prev_state = Reg(next = curr_state)

	val total_wait_regs = wait_cycles - 1
	val wait_regs = Vec.fill {total_wait_regs} (Reg(init = Bool(false)))

	val state_en = (prev_state === pipeEnabled)
	val state_wait = (curr_state === pipeWait)
	val pipe_pulse = state_en && state_wait /* one-cycle pulse */

	wait_regs(0) := pipe_pulse
	(1 until total_wait_regs) foreach { i => wait_regs(i) := wait_regs(i - 1) }
	val wait_done = wait_regs(total_wait_regs - 1) /* wait for #wait_cycles cycles */

	switch (curr_state)  {

		is (pipeInit) {
			when (io.en) 			{ curr_state := pipeEnabled }
		}

		is (pipeEnabled) {
			when (io.counter_done)  { curr_state := pipeWait }
		}

		is (pipeWait) {
			when (wait_done) 		{ curr_state := pipeDone}
		}

		is (pipeDone) {
			curr_state := pipeInit
		}
	}

	io.pipe_enabled := (curr_state === pipeEnabled)
	io.done := (curr_state === pipeDone)
}