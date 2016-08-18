package pipes_gda

import Chisel._
import Templates._
import pipes._
import ArithOperations._

class pipe0(y_vec_num : Int, x_row : Int, w : Int) extends Module {
	
	val io = new Bundle {

		val pipe_en = Bool(INPUT) /* from control FSM */
		val reset = Bool(INPUT)
		val complete_reset = Bool(INPUT)

		val done = Bool(OUTPUT)
		val addr_en = Bool(OUTPUT)
		val subT_addr = UInt(OUTPUT, w)
		val output_float = UInt(OUTPUT, w)

		val x_addr = UInt(OUTPUT, w)
		val x_out = UInt(INPUT, w)

		val y_addr = UInt(OUTPUT, w)
		val y_out = Bool(INPUT)

		val mu_addr = UInt(OUTPUT, w)
		val mu0_out = UInt(INPUT, w)
		val mu1_out = UInt(INPUT, w)

		val done_complete = Bool(OUTPUT)
	}

	val pipe0_FSM = Module(new pipe_FSM(2))
	pipe0_FSM.io.en := io.pipe_en 

	val pipe_fsm_en = pipe0_FSM.io.pipe_enabled	

	val matrixCounters = Module(new CounterChain(2, w))
    matrixCounters.io.en := pipe_fsm_en
    matrixCounters.io.reset := io.complete_reset

    /* first counter -> col, second counter -> row */
    matrixCounters.io.counters_max := Vec(UInt(y_vec_num) - UInt(1), UInt(x_row) - UInt(1))

    /* x matrix - testing data */
    val matrix_addr = Module(new MatrixAddrRam(w))
   	matrix_addr.io.in := matrixCounters.io.counters_cout(1)(0)
    matrix_addr.io.const_dim := UInt(y_vec_num)
    matrix_addr.io.k := matrixCounters.io.counters_cout(0)(0)
    matrix_addr.io.en := io.pipe_en
    matrix_addr.io.reset := io.reset

    /* y vector */
    val bool_vec_addr = Module(new MatrixAddrRam(w))
    bool_vec_addr.io.in := UInt(0)
    bool_vec_addr.io.const_dim := UInt(0)
    bool_vec_addr.io.k := matrixCounters.io.counters_cout(1)(0)
    bool_vec_addr.io.en := io.pipe_en
    bool_vec_addr.io.reset := io.reset

    /* mu1 and mu0 */
    val mu_addr = Module(new MatrixAddrRam(w))
    mu_addr.io.in := UInt(0)
    mu_addr.io.const_dim := UInt(0)
    mu_addr.io.k := matrixCounters.io.counters_cout(0)(0)
    mu_addr.io.en := io.pipe_en
    mu_addr.io.reset := io.reset

    io.x_addr := matrix_addr.io.out
    val x_val = io.x_out

	io.y_addr := bool_vec_addr.io.out
    val y_val = io.y_out

    io.mu_addr := mu_addr.io.out 
  
    val mu0_val = io.mu0_out
    val mu1_val = io.mu1_out 

    /* delay en write by 3 cycles total */
    val state0_Regs = Vec.fill(2) { Reg(init = Bool(false)) }
    state0_Regs(0) := pipe_fsm_en
    for (i <- 1 until 2) {
    	state0_Regs(i) := state0_Regs(i - 1)
    }

    pipe0_FSM.io.counter_done := matrixCounters.io.counters_done(0)


    val pipe0_datapath = Module(new pipe_subT(w))
    pipe0_datapath.io.x := x_val
    pipe0_datapath.io.y := y_val
    pipe0_datapath.io.mu0 := mu0_val
    pipe0_datapath.io.mu1 := mu1_val
    pipe0_datapath.io.en := io.pipe_en /* from control FSM */
    pipe0_datapath.io.reset := io.reset

    /* delay input address to subT by 3 cycles total */
	val mu_addr_Regs = Reg(init = UInt(0, width = w))
    mu_addr_Regs := mu_addr.io.out 

    io.subT_addr := mu_addr_Regs
    io.done := pipe0_FSM.io.done
    io.addr_en := state0_Regs(1)

	io.output_float := pipe0_datapath.io.output_float
	io.done_complete := matrixCounters.io.done_complete
}