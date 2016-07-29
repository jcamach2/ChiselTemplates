package ArithOperations

import Chisel._

class DotProductArith(w : Int) extends Module {
	
	val io = new Bundle {

		val v1 = UInt(INPUT, w)
		val v2 = UInt(INPUT, w)
		val reset = Bool(INPUT)
		val full_reset = Bool(INPUT) /* reset to 0 */
		val en = Bool(INPUT)

		val dotproduct = UInt(OUTPUT, w*w)

	}

	val productV = io.v1(w -1, 0) * io.v2(w - 1, 0)

	val productReg = Reg(init = UInt(0, w*w)) /* pipeline register */ 
	when (io.reset && !io.en) {
		productReg := UInt(0)
	}
	.otherwise {
 		productReg := productV
	}


	val acc = Reg(init = UInt(0, w*w))
	when (io.reset) {
		acc := productReg
	}
	.elsewhen (io.en) {
 		acc := acc + productReg 
	}

	io.dotproduct := acc
} 

class DotProductArithTests (c: DotProductArith) extends Tester(c) {

	val v1 = 20
	val v2 = 20
	poke(c.io.reset, 1)
	poke(c.io.en, 0)
	step(1)
	poke(c.io.v1, v1)
	poke(c.io.v2, v2)
	poke(c.io.reset, 0)
	poke(c.io.en, 1)
	step(1)
	step(1)
	poke(c.io.v1, 5)
	poke(c.io.v2, 10)
	poke(c.io.en, 0)
	expect(c.io.dotproduct, 400)
	step(1)
	expect(c.io.dotproduct, 400)
	step(1)
	poke(c.io.v1, 5)
	poke(c.io.v2, 10)
	poke(c.io.en, 1)
	expect(c.io.dotproduct, 400)
	step(1)
	expect(c.io.dotproduct, 450)
	step(1)
	expect(c.io.dotproduct, 500)
	step(1)
}