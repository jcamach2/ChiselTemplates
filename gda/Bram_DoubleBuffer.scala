package Templates

import Chisel._


class DoubleBufferBundle (bandwidth : Int, n : Int, readers_count : Int) extends Bundle {

		val read_addr_vec = Vec.fill(readers_count) { UInt(width = bandwidth) }.asInput //still need to handle this - once banking is incorporated
		val write_addr = UInt(width = bandwidth).asInput
		val write_data = Bits(width = bandwidth).asInput
		val write_en = Bool().asInput

		val read_done_vec = Vec.fill(readers_count) { Bool() }.asInput
		val write_done = Bool().asInput

		val read_out = Bits(width = bandwidth).asOutput
}

/*  bandwidth : size of data in bits in block RAM
	n : number of elements in block RAM
	readers_counter : number of readers 
*/
class Bram_DoubleBuffer (bandwidth : Int, n : Int, readers_count : Int) extends Module {

	val io = new DoubleBufferBundle(bandwidth, n, readers_count)

	val bram_w1 = Module(new BRAM_param (bandwidth, n))
	val bram_w2 = Module(new BRAM_param (bandwidth, n))

	val	dbInit :: dbR2W1 :: dbR1W2 :: Nil = Enum(UInt(), 3)
	val state = Reg(init = dbInit)

	bram_w1.io.read_addr := io.read_addr_vec(0)
	bram_w1.io.write_addr := io.write_addr
	bram_w1.io.write_data := io.write_data

	bram_w2.io.read_addr := io.read_addr_vec(0)
	bram_w2.io.write_addr := io.write_addr
	bram_w2.io.write_data := io.write_data

	val latch_read_done_vec = Vec.fill(readers_count) { Reg(init = Bool(false)) }
	val read_done_sig = Vec.fill(readers_count) { Bool() }

	val latch_write_done = Reg(init = Bool(false))

	val buffering_done = (read_done_sig reduceLeft (_ && _)) && io.write_done

	val rst = buffering_done /* some form of reset */
	(latch_read_done_vec.zipWithIndex) foreach { case (latch_read_done, i) => 
													{
														read_done_sig(i) := latch_read_done || io.read_done_vec(i)
														when (rst) {
															latch_read_done := Bool(false)
														}
														.otherwise {
															latch_read_done := read_done_sig(i)
														}
													}
	}

	val write_done_sig = latch_write_done || io.write_done
	when (rst) {
		latch_write_done := Bool(false)
	}
	.otherwise {
		latch_write_done := write_done_sig
	}

	
	switch (state) {

		is (dbInit) {	
			state := dbR2W1
		}

		/* read from second BRAM, write to first BRAM */
		is (dbR2W1) {
			when (buffering_done) { state := dbR1W2 }
		}

		/* read from first BRAM, write to second BRAM */
		is (dbR1W2) {
			when (buffering_done) { state := dbR2W1 }
		}

	}

	bram_w1.io.write_en := io.write_en && (state === dbR2W1)
	bram_w2.io.write_en := io.write_en && (state === dbR1W2)

	val state_read_reg = Reg(init = UInt(0))
	state_read_reg := state 

	io.read_out := Mux(state_read_reg === dbR2W1, bram_w2.io.read_out, bram_w1.io.read_out)
}

class Bram_DoubleBufferTesting(c : Bram_DoubleBuffer) extends Tester(c) {


	/* double-buffering BRAM with stride = 1*/
	val n = 4
	val rd = 1
	poke(c.io.read_addr_vec(0), 0)
	poke(c.io.write_en, 1)
	step(1)
	val d = 20
	poke(c.io.read_done_vec(0), 1)
	for (i <- 0 until n) {
		poke(c.io.write_addr, i)
		poke(c.io.write_data, d)
		poke(c.io.write_done, i == n - 1)
		step(1)
	}
	poke(c.io.write_done, 0)
	poke(c.io.read_done_vec(0), 0)
	val d2 = 32
	for (i <- 0 until n) {
			poke(c.io.write_addr, i)
			poke(c.io.write_data, d2)
			poke(c.io.write_done, i == n - 1)

			poke(c.io.read_done_vec(0), i == n - 1)
			poke(c.io.read_addr_vec(0), i)
			step(1)
			expect(c.io.read_out, d)			
		}
	poke(c.io.write_done, 0)
	poke(c.io.read_done_vec(0), 0)
	val d3 =12
	for (i <- 0 until n) {
			poke(c.io.write_addr, i)
			poke(c.io.write_data, d3)
			poke(c.io.write_done, i == n - 1)

			poke(c.io.read_done_vec(0), i == n - 1)
			poke(c.io.read_addr_vec(0), i)
			step(1)
			expect(c.io.read_out, d2)			
		}
	val d4 = 100
	poke(c.io.write_done, 1)
	for (i <- 0 until n) {
		poke(c.io.write_addr, i)
		poke(c.io.write_data, d4)
		poke(c.io.write_done, i == n - 1)

		poke(c.io.read_addr_vec(0), i)
		poke(c.io.read_done_vec(0), i == n - 1)
		step(1)
		expect(c.io.read_out, d3)
	}

	val d5 = 2
	/* check when write_done and read_done are not fired off at the same time */
	poke(c.io.write_done, 0)
	poke(c.io.read_done_vec(0), 0)
	for (i <- 0 until n - 2) {
		poke(c.io.read_addr_vec(0), i)
		poke(c.io.read_done_vec(0), 0)
		step(1)
		expect(c.io.read_out, d4)
	}
	for (i <- 0 until n - 2) {
		poke(c.io.write_addr, i)
		poke(c.io.write_data, d5)

		poke(c.io.read_addr_vec(0), i + 2)
		poke(c.io.read_done_vec(0), i + 2 == n - 1)
		step(1)
		expect(c.io.read_out, d4)
	}
	poke(c.io.read_done_vec(0), 0)
	for (i <- 2 until n) {
		poke(c.io.write_addr, i)
		poke(c.io.write_data, d5)
		poke(c.io.write_done, i == n - 1)

		step(1)
	}
	poke(c.io.write_done, 0)		

	for (i <- 0 until n) {
		poke(c.io.read_addr_vec(0), i)
		poke(c.io.read_done_vec(0), i == n - 1)
		step(1)
		expect(c.io.read_out, d5)
	}
} 