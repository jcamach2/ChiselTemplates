package Templates

import Chisel._
 
 class BRAM (bandwidth : Int, n : Int) extends Module {

	val io = new Bundle {

		val read_addr = UInt(INPUT, n)
		val write_addr = UInt(INPUT, n)
		val write_data = UInt(INPUT, bandwidth)
		val write_en = Bool(INPUT)

		val read_out = UInt(OUTPUT, bandwidth)


	}
	val bRam_rw = Mem(UInt(width = bandwidth), n, seqRead = true)
	val reg_raddr = Reg(UInt()) /* Flip-Flop register for reads */


	when (io.write_en) {
		bRam_rw(io.write_addr) := io.write_data
	}

	/* Sequential Read to block RAM */
	reg_raddr := io.read_addr
	io.read_out := bRam_rw(reg_raddr)

 }