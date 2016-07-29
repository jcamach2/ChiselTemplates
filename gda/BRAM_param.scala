package Templates

import Chisel._
 
 class BRAM_param (bandwidth : Int, n : Int) extends Module {

	val io = new Bundle {

		val read_addr = UInt(INPUT, 16)
		val write_addr = UInt(INPUT, 16)
		val write_data = Bits(INPUT, bandwidth)
		val write_en = Bool(INPUT)

		val read_out = Bits(OUTPUT, bandwidth)
	}

	val bRam_rw = Mem(Bits(width = bandwidth), n, seqRead = true)
	val reg_raddr = Reg(UInt()) /* Flip-Flop register for reads */


	when (io.write_en) {
		bRam_rw(io.write_addr) := io.write_data
	}

	/* Sequential Read to block RAM */
	reg_raddr := io.read_addr
	io.read_out := bRam_rw(reg_raddr)

 }