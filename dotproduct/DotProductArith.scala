package ArithOperations

import Chisel._
import Templates._
import math._

class dpChain(w : Int, p : Int) extends Bundle {

	val v1_vec = (Vec.fill(p) { UInt(width = w) }).asInput
	val v2_vec = (Vec.fill(p) { UInt(width = w) }).asInput

	val reset = Bool().asInput 
	val full_reset = Bool().asInput /* reset to 0 */
	val en = Bool().asInput

	val dotproduct = UInt(width = w*w).asOutput
	val out = UInt(width = w).asOutput
}


class DotProductArith(w : Int, p : Int) extends Module {
	
	def isEven (n : Int) : Boolean = (n & 1) == 0

	def addNode (a : UInt, b : UInt) : UInt = a + b

	val io = new dpChain(w, p)

	val mult_vec = Vec.fill(p) { UInt(width = w*w) }
	for (i <- 0 until p) {
		when (io.reset) {
			mult_vec(i) := UInt(0)
		}
		.otherwise {
			val productOut = io.v1_vec(i) * io.v2_vec(i)
			mult_vec(i) := productOut
		}
	}

	/* reduction  tree */
	val rTree_adder = Module(new reductionTree_Arith(w*w, p, addNode))
	(0 until p) foreach { i => rTree_adder.io.data_vec(i) := mult_vec(i) }


	/* accumulator flip flop */
	val acc = Reg(init = UInt(0, w*w))
	when (io.reset) {
		acc := UInt(0)
	}
	.elsewhen (io.en) {
 		acc := acc + rTree_adder.io.tree_output
	}

	io.dotproduct := acc 
} 

class DotProductArithTests (c: DotProductArith) extends Tester(c) {

	poke(c.io.reset, 1)
	poke(c.io.en, 0)
	step(1)
	poke(c.io.v1_vec(0), 1)
	poke(c.io.v2_vec(0), 2)
	poke(c.io.v1_vec(1), 1)
	poke(c.io.v2_vec(1), 3)
	poke(c.io.v1_vec(2), 1)
	poke(c.io.v2_vec(2), 4)
	poke(c.io.v1_vec(3), 1)
	poke(c.io.v2_vec(3), 5)
	poke(c.io.reset, 0)
	val tree_l = 2
	step(1)
	poke(c.io.v1_vec(3), 2)
	poke(c.io.v2_vec(3), 2)
	step(tree_l)
	poke(c.io.en, 1)
	step(1) /* acc register */
	expect(c.io.dotproduct, 14)
	step(1)
	expect(c.io.dotproduct, 27)
	poke(c.io.en, 0)
	step(1)
	expect(c.io.dotproduct, 27)
	step(1)
	expect(c.io.dotproduct, 27)
	step(1)
	expect(c.io.dotproduct, 27)	
}