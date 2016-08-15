package GDA

import Chisel._
import Templates._
import DataPaths._
import ArithOperations._
import pipes_gda._

class GDA_FSM(x_row : Int, y_vec_num : Int, w : Int) extends Module {
	
	val io = new Bundle {

		val en = Bool(INPUT)
		val done = Bool(OUTPUT)

		val data_in = UInt(INPUT, w)
		val data_inx = UInt(INPUT, w)
	
		val output = UInt(OUTPUT, w) /* testing */
		val y = Bool(OUTPUT)
		val rd = UInt(OUTPUT, w)
		val wdata = UInt(OUTPUT, w)
		val state1 = Bool(OUTPUT)
		val state0 = Bool(OUTPUT)

	} 

    val x_matrix = Module(new BRAM_param(w, x_row * y_vec_num))
    val mean_y_vec = Module(new BRAM_param(1, x_row))

    val mu0 = Module(new BRAM_param(w, y_vec_num))
    val mu1 = Module(new BRAM_param(w, y_vec_num))


    /* sequential FSM */
	val seqFSM = Module(new Sequential_FSM(2))

    /* writing to memory - hardcoded */
   
   	mu0.io.write_addr := io.data_in
   	mu0.io.write_data := io.data_in
   	mu0.io.write_en := seqFSM.io.complete_reset

   	mu1.io.write_addr := io.data_in
   	mu1.io.write_data := io.data_in + UInt(2)
    mu1.io.write_en := seqFSM.io.complete_reset

   	x_matrix.io.write_addr := io.data_inx
   	x_matrix.io.write_data := io.data_inx + UInt(6)
    x_matrix.io.write_en := seqFSM.io.complete_reset

   	mean_y_vec.io.write_addr := io.data_in
   	mean_y_vec.io.write_data := Bool(true)
    mean_y_vec.io.write_en := seqFSM.io.complete_reset

    /* end of writing */

	seqFSM.io.en := io.en /* enable Sequential FSM */

    val state0 = seqFSM.io.pipe_en(0)
    val state1 = seqFSM.io.pipe_en(1)

    val state_reset = seqFSM.io.state_reset
    val complete_reset = seqFSM.io.complete_reset

    val subT = Module(new BRAM_param(w, y_vec_num))
	val subT_2 = Module(new BRAM_param(w, y_vec_num))

	/* first pipe stage */
    val pipe0_block = Module(new pipe0(y_vec_num, x_row, w))
	val pipe1_block = Module(new pipe1(x_row, w))

    pipe0_block.io.pipe_en := state0
    pipe0_block.io.reset := state_reset
    pipe0_block.io.complete_reset := complete_reset

    x_matrix.io.read_addr := pipe0_block.io.x_addr
    pipe0_block.io.x_out := x_matrix.io.read_out

    mean_y_vec.io.read_addr := pipe0_block.io.y_addr
    pipe0_block.io.y_out := mean_y_vec.io.read_out

    mu0.io.read_addr := pipe0_block.io.mu_addr
    mu1.io.read_addr := pipe0_block.io.mu_addr

    pipe0_block.io.mu0_out := mu0.io.read_out
	pipe0_block.io.mu1_out := mu1.io.read_out

	/* subT block */
    subT.io.write_addr := pipe0_block.io.subT_addr
    subT.io.write_data := pipe0_block.io.output_float
    subT.io.write_en := pipe0_block.io.addr_en

    subT_2.io.write_addr := pipe0_block.io.subT_addr
    subT_2.io.write_data := pipe0_block.io.output_float
    subT_2.io.write_en := pipe0_block.io.addr_en 
 	
    seqFSM.io.pipe_done(0) := pipe0_block.io.done
   
    /* second pipe stage */
	val sigmaM = Module(new BRAM_param(w, x_row * x_row))

	pipe1_block.io.pipe_en := state1
	pipe1_block.io.reset := state_reset
	pipe1_block.io.complete_reset := complete_reset 

	subT.io.read_addr := pipe1_block.io.subT_addr 
	pipe1_block.io.subT_out := subT.io.read_out

	subT_2.io.read_addr := pipe1_block.io.subT_2_addr 
	pipe1_block.io.subT_2_out := subT_2.io.read_out

	sigmaM.io.read_addr := pipe1_block.io.sigma_read_addr
	sigmaM.io.write_addr := pipe1_block.io.sigma_write_addr
	sigmaM.io.write_en := pipe1_block.io.sigma_addr_en
	sigmaM.io.write_data := pipe1_block.io.sigma_write_data

	pipe1_block.io.sigma_read_out := sigmaM.io.read_out

	seqFSM.io.pipe_done(1) := pipe1_block.io.done
    seqFSM.io.complete_done := pipe0_block.io.done_complete

    io.done := seqFSM.io.done
    
    /* testing */
    io.output := sigmaM.io.read_out
    io.rd := pipe1_block.io.sigma_write_addr
    io.y :=  pipe1_block.io.sigma_addr_en 

    io.state0 := state0
    io.state1 := state1
    io.wdata := pipe1_block.io.sigma_write_data
    
} 

class GDA_FSM_Tests(c : GDA_FSM) extends Tester(c) {

	val x = 4
	val mu = 16
	poke(c.io.en, 0)
	step(1)
	0 until x map { i => { poke(c.io.data_in, i) 
						step(1)  }  }
	0 until mu map { i => { poke(c.io.data_inx, i) 
						step(1)  }  }						
	step(1)	
	step(1)					
	poke(c.io.en, 1)
	step(1)
	expect(c.io.state0, 0)
	step(1)
	val list_num = List(16, 80, 224,480)
	poke(c.io.en, 0)
	(0 until x) foreach { i => {
		expect(c.io.state0, 1)
		expect(c.io.y, 0)
		1 to 4 map { _ => step(1) } /*first pipe */
		step(1)
		expect(c.io.state0, 1)
		step(1)
		expect(c.io.state0, 1)
		expect(c.io.state1, 0)
		step(1)
		expect(c.io.y, 0)
		expect(c.io.state0, 1)		
		expect(c.io.state1, 0)
		step(1)
		expect(c.io.y, 0)
		step(1)
		expect(c.io.y, 0)
		step(1)
		expect(c.io.y, 0)
		expect(c.io.state1, 1)
		step(1)
		expect(c.io.y, 0)
		expect(c.io.state1, 1)
		step(1)
		1 to 16 map { p => { expect(c.io.wdata, list_num(i)); expect(c.io.y, 1); step(1) } } 
		//expect(c.io.output, 16)
		expect(c.io.y, 0)
		step(1)
		step(1)
		expect(c.io.state0, 0)
		expect(c.io.state1, 0)
		expect(c.io.done, if (i == 3) 1 else 0)
		step(1)
	}}
	step(1)
	step(1)
	step(1)
	step(1)
}