package DP

import Chisel._
import Templates._
import ArithOperations._
import DataPaths._


class DotProductTop(w : Int, p : Int) extends Module {

	val io = new Bundle {

		val cmd = Bool(INPUT)
		val status = UInt(OUTPUT)

	    val input_data = UInt(INPUT, w) /* memory controller holder for now */
	    val input_addr = UInt(INPUT, 16)


	    val result = UInt(OUTPUT, w)

	    val check = UInt(OUTPUT, w)
	}

   val topInit :: topRun :: topIntermediate :: topDone :: Nil = Enum(UInt(), 4)
   val state = Reg(init = topInit)

   val tree_l = 1
   val dp_FSM = Module(new pipe_FSM(tree_l + 2 + 1))
   
   val dp_ram1 = Module(new BRAM_Bank(w, 4, p))
   val dp_ram2 = Module(new BRAM_Bank(w, 4, p))

   val dp_arith = Module(new DotProductArith(w, p))

    /* Memotry Control -- for now */
   dp_ram1.io.write_en := (state === topInit)
   dp_ram1.io.write_addr := io.input_addr
   dp_ram1.io.write_data := io.input_data  

   dp_ram2.io.write_en := (state === topInit)
   dp_ram2.io.write_addr := io.input_addr
   dp_ram2.io.write_data := io.input_data  

   /* Counter */
   val counter = Module(new CounterChain(1, w, p))

   switch (state) {

       /* topInit -> 0x0 */
   	 is (topInit) {
   	 	when (io.cmd) { state := topRun }
   	 }

       /* topRun -> 0x1 */
   	 is (topRun) {
   	 	when (dp_FSM.io.done) { state := topIntermediate }
   	 }

       /* topIntermediate -> 0x2 */
   	 is (topIntermediate) {
   	 	state := topDone
   	 }

       /* topDone -> 0x3 */
   	 is (topDone) {
   	 	state := topInit 
   	 }

   }
   
   counter.io.counters_max := Vec(UInt(3)) 

   counter.io.reset := (state === topInit)
   /* run Counter block when in pipeRun state from pipe FSM */
   counter.io.en := dp_FSM.io.pipe_enabled

   dp_FSM.io.en := (state === topRun)
   dp_FSM.io.counter_done := counter.io.done_complete

   for (i <- 0 until p) {
  	   dp_ram1.io.read_addr(i) := counter.io.counters_cout(0)(i)
   	   dp_ram2.io.read_addr(i) := counter.io.counters_cout(0)(i)

	   dp_arith.io.v1_vec(i) := dp_ram1.io.read_out(i)
  	   dp_arith.io.v2_vec(i) := dp_ram2.io.read_out(i)
	}
	io.check := counter.io.done_complete

	/* delay */
   val pipe_delay = tree_l + 2 + 1
   val total_delays = pipe_delay - 1
   val delay_en_regs = Vec.fill(total_delays) { Reg(init = Bool(false)) }

   delay_en_regs(0) := dp_FSM.io.pipe_enabled
   (1 until total_delays) foreach { k => delay_en_regs(k) := delay_en_regs(k - 1) }

   dp_arith.io.en := delay_en_regs(total_delays - 1)  /* delaying this one cycle just in case */
   dp_arith.io.reset := (state === topInit)

   io.status := state
   io.result := dp_arith.io.dotproduct
}


class DotProductTopTests (c: DotProductTop) extends Tester(c) {

  def input_ramdata(waddr : Int, data : Int) {
    poke(c.io.input_data, data)
    poke(c.io.input_addr, waddr)
    step(1)
  }
  poke(c.io.cmd, 0)
  val n = 4;
  val b = 2;
  for (i <- 0 until 4) {
    input_ramdata(i, i*2)
  }
  /* resulting vector : [2, 2, 6, 6] v1 and v2 */
  step(1)
  step(1)
  poke(c.io.cmd, 1)
  expect(c.io.status, 0)
  step(1)
  expect(c.io.status, 1)
  expect(c.io.result, 0)
  step(1)
  expect(c.io.status, 1) // pipe fsm enabled starting here 
  expect(c.io.check, 0)
  expect(c.io.result, 0)
  step(1)
  expect(c.io.status, 1)
  expect(c.io.check, 1)
  expect(c.io.result, 0)
  step(1)
  expect(c.io.status, 1)
  expect(c.io.result, 0)
  step(1)
  poke(c.io.cmd, 0) 
  expect(c.io.status, 1)
  expect(c.io.result, 0)
  step(1)
  expect(c.io.result, 8)
  step(1)
  expect(c.io.status, 1)
  expect(c.io.result, 80) // until here correct   
  step(1)
  expect(c.io.status, 1)
  expect(c.io.result, 80) 
  step(1)
  expect(c.io.status, 2)
} 