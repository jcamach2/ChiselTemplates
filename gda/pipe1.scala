package pipes_gda

import Chisel._
import Templates._
import pipes._
import ArithOperations._
import DataPaths._

class pipe1(x_row : Int, w : Int) extends Module {
	
	val io = new Bundle {

		val pipe_en = Bool(INPUT) /* from Sequential FSM */
		val reset = Bool(INPUT)
		val complete_reset = Bool(INPUT)

		val done = Bool(OUTPUT)

		val sigma_addr_en = Bool(OUTPUT)
		val sigma_write_addr = UInt(OUTPUT, w)
		val sigma_read_addr = UInt(OUTPUT, w)
		val sigma_write_data = UInt(OUTPUT, w)
		val sigma_read_out = UInt(INPUT, w)


		val subT_addr = UInt(OUTPUT, w)
		val subT_out = UInt(INPUT, w)

		val subT_2_addr = UInt(OUTPUT, w)
		val subT_2_out = UInt(INPUT, w)

		val b = Bool(OUTPUT)
	}

	val pipe1_FSM = Module(new pipe_FSM(2)) /* pipe FSM */
	pipe1_FSM.io.en := io.pipe_en

    val mtxCounter = Module(new ItrCounter(w, 1))

    mtxCounter.io.reset := io.reset
    mtxCounter.io.max := UInt(x_row * x_row) - UInt(1)
    
    /* delay en signal for sigma matrix write by 2 cycles */
	val state1_Regs = Vec.fill(2) { Reg(init = Bool(false)) }
    state1_Regs(0) := pipe1_FSM.io.pipe_enabled
    for (i <- 1 until 2) {
    	state1_Regs(i) := state1_Regs(i - 1)
    }


	val sigmaCounters = Module(new CounterChain(2, w))
	sigmaCounters.io.en := pipe1_FSM.io.pipe_enabled
	sigmaCounters.io.reset := io.reset

	pipe1_FSM.io.counter_done := sigmaCounters.io.done_complete
	io.b := pipe1_FSM.io.pipe_enabled
	sigmaCounters.io.counters_max := Vec(UInt(x_row) - UInt(1), UInt(x_row) - UInt(1))

	val x = sigmaCounters.io.counters_cout(0)(0)
	val y = sigmaCounters.io.counters_cout(1)(0)
	
	io.subT_addr := x
	io.subT_2_addr := y

	/* matrix multiplication */
	val product_reg = Reg(init = Bits(0, width = w))
	product_reg := io.subT_out * io.subT_2_out 

	val readaddr_reg = mtxCounter.io.vec_cout(0)

	val writeaddr_reg = Reg(init = UInt(0, width = w))	
	writeaddr_reg := readaddr_reg 

	io.sigma_read_addr := readaddr_reg
	io.sigma_write_addr := writeaddr_reg 
	io.sigma_addr_en := state1_Regs(1)
    
    mtxCounter.io.en_count := state1_Regs(0)

	io.sigma_write_data := io.sigma_read_out + product_reg
	io.done := pipe1_FSM.io.done 
}