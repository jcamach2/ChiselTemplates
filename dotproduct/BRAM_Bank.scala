package Templates

import Chisel._
import Templates._
import math._

class BankBundle(bandwidth : Int, stride : Int) extends Bundle {

	val read_addr = (Vec.fill(stride) { UInt(width = 16) }).asInput
	val write_addr = UInt(width = 16).asInput
	val write_data = Bits(width = bandwidth).asInput
	val write_en = Bool().asInput

	val read_out = (Vec.fill(stride) {Bits(width = bandwidth)}).asOutput

}


class BRAM_Bank (bandwidth : Int, n : Int, stride : Int) extends Module {

	/* b -> stride */

	def decode(addr : UInt) : UInt =
	{
		if ((stride & (stride - 1)) == 0) /* is power of 2 */
			addr >> (log10(stride) / log10(2) ).toInt
		else
			addr / UInt(stride)
	}

	val io = new BankBundle(bandwidth, stride)
	val bram_banked_n = n / stride;

	val bram_blocks = for (i <- 0 until stride) yield
					{
						val bram_one = Module(new BRAM_param(bandwidth, bram_banked_n))
						bram_one
					}

	for (i <- 0 until stride)
	{
		bram_blocks(i).io.read_addr := decode (io.read_addr(i))

		bram_blocks(i).io.write_addr := decode (io.write_addr)
		bram_blocks(i).io.write_data := io.write_data
		bram_blocks(i).io.write_en := io.write_en

	 	io.read_out(i) := bram_blocks(i).io.read_out
	}

}