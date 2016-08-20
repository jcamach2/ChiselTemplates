package ArithOperations

import Chisel._

class MatrixAddrRam(w : Int) extends Module {
	
	val io = new Bundle {

		val in = UInt(INPUT, width = w)
		val const_dim = UInt(INPUT, width = w)
		val k = UInt(INPUT, width = w)

		val en = Bool(INPUT)
		val reset = Bool(INPUT)

		val out = UInt(OUTPUT, width = 2*w)

	}

	val mult_block = io.const_dim * io.in

	/* pipeline register */
	val mult_reg = Reg(init = UInt(0, width = 2*w))
	val k_reg = Reg(init = UInt(0, width = w))

	when (io.reset) {
		mult_reg := UInt(0)
		k_reg := UInt(0)
	}
	.otherwise {
 		mult_reg := mult_block 
 		k_reg := io.k
	}

	io.out := mult_reg + k_reg
}