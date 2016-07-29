package pipes

import Chisel._


class pipe_subT(w : Int) extends Module {
	
	val  io = new Bundle {

		val en = Bool(INPUT)
		val reset = Bool(INPUT)

		val x = UInt(INPUT, w)
		val y = Bool(INPUT)
		val mu0 = UInt(INPUT, w)
		val mu1 = UInt(INPUT, w)

		val output_float = UInt(OUTPUT, w)
	}


	val sub = Mux(io.y, io.mu1, io.mu0)
	val vec_sub = io.x - sub 

	val sub_reg = Reg(init = UInt(0))

	when (io.reset) {
		sub_reg := UInt(0)
	}
	.elsewhen (io.en) {
		sub_reg := vec_sub
	}

	io.output_float := sub_reg /* will need to use floats eventually */
}