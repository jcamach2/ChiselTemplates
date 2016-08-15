package Templates

import Chisel._

/* Latches in a value, keeping it until the reset signal goes up. Useful when dealing
 * with one-cycle boolean signals 
 */
class Latch_Bool_Value extends Module {
	
	val io = new Bundle {

		val	input_val = Bool(INPUT)
		val rst = Bool(INPUT)

		val latch_val = Bool(OUTPUT)
	}

	val latch_reg = Reg(init = Bool(false))
	val latching_val = latch_reg || io.input_val
	when (io.rst) {
		latch_reg := Bool(false)
	}
	.otherwise {
		latch_reg := latching_val
	}

	io.latch_val := latching_val
}