package Templates

import Chisel._
import math._

class TreeBundle(w : Int, stride : Int) extends Bundle {

	val data_vec  = Vec.fill(stride) { UInt(width = w)}.asInput
	val tree_output = UInt(width = w ).asOutput
}


class reductionTree_Arith (w : Int, stride : Int, tree_op: (UInt, UInt) => UInt) extends Module {
	def isEven (n : Int) : Boolean = (n & 1) == 0


	val  io = new TreeBundle(w, stride)

	var p_num = stride
	val tree_level : Int = (log10(stride) / log10(2)).ceil.toInt + 1

	val rtree_vec = Vec.fill(tree_level) { Vec.fill(stride) {Reg(UInt(width = w))} }

	(0 until stride) foreach { i => rtree_vec(0)(i) := io.data_vec(i) }

	/* reduction  tree */
	for (l <- 1 until tree_level) {
		
		var data_num = ((p_num + 1) / 2)
		data_num = data_num - 1

		if (isEven(p_num)) {
			for (i <- p_num - 1 to 0 by -2) {
				rtree_vec(l)(data_num) := tree_op (rtree_vec(l - 1)(i), rtree_vec(l - 1)(i - 1))
				data_num = data_num - 1
			}
		}
		else {
			for (i <- p_num - 1 to 1 by -2) {
				rtree_vec(l)(data_num) := tree_op (rtree_vec(l - 1)(i), rtree_vec(l - 1)(i - 1))
				data_num = data_num - 1
			}
			rtree_vec(l)(0) := rtree_vec(l - 1)(0)										
		}
		p_num = ((p_num + 1) / 2)
	}

	io.tree_output := rtree_vec(tree_level - 1)(0)
}

object reductionTree_Op 