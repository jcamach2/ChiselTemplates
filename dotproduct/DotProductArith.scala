package ArithOperations

import Chisel._
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

	val io = new dpChain(w, p)

	var p_num = p

	val tree_level : Int = (log10(p) / log10(2)).ceil.toInt

	val rtree_vec = Vec.fill(tree_level + 1) { Vec.fill(p) {Reg(UInt(width = w*w))} }

	for (i <- 0 until p) {
		when (io.reset) {
			rtree_vec(0)(i) := UInt(0)
		}
		.otherwise {
			val productOut = io.v1_vec(i) * io.v2_vec(i)
			rtree_vec(0)(i) := productOut 
		}
	}

	/* reduction  tree */
	for (l <- 1 to tree_level) {
		
		var data_num = ((p_num + 1) / 2)
		data_num = data_num - 1

		if (isEven(p_num)) {
			for (i <- p_num - 1 to 0 by -2) {
				rtree_vec(l)(data_num) := rtree_vec(l - 1)(i) + rtree_vec(l - 1)(i - 1)
				data_num = data_num - 1
			}
		}
		else {
			for (i <- p_num - 1 to 1 by -2) {
				rtree_vec(l)(data_num) := rtree_vec(l - 1)(i) + rtree_vec(l - 1)(i - 1)
				data_num = data_num - 1
			}
			rtree_vec(l)(0) := rtree_vec(l - 1)(0)										
		}
		p_num = ((p_num + 1) / 2)
	}

	/* accumulator flip flop */
	val acc = Reg(init = UInt(0, w*w))
	when (io.reset) {
		acc := UInt(0)
	}
	.elsewhen (io.en) {
 		acc := acc + rtree_vec(tree_level)(0)
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