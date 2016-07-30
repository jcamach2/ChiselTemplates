package Templates

import Chisel._
import Templates._

class BankBundle(bandwidth : Int, b : Int) extends Bundle {

	val read_addr = UInt(width = 16).asInput
	val write_addr = UInt(width = 16).asInput
	val write_data = Bits(width = bandwidth).asInput
	val write_en = Bool().asInput

	val read_out = (Vec.fill(b) {Bits(width = bandwidth)}).asOutput

}


class BRAM_Bank (bandwidth : Int, n : Int, b : Int) extends Module {

	val io = new BankBundle(bandwidth, b)

	val bram_blocks = for (i <- 0 until b) yield
					{
						val bram_one = Module(new BRAM_param(bandwidth, n))
						bram_one
					}

	for (i <- 0 until b)
	{
		bram_blocks(i).io.read_addr := io.read_addr
		bram_blocks(i).io.write_addr := io.write_addr
		bram_blocks(i).io.write_data := io.write_data
		bram_blocks(i).io.write_en := io.write_en

	 	io.read_out(i) := bram_blocks(i).io.read_out
	}

}