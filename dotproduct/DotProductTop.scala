package DP

import Chisel._
import Templates._
import ArithOperations._
import DataPaths._


class DotProductTop(w : Int) extends Module {

	val io = new Bundle {

		val cmd = Bool(INPUT)
		val status = UInt(OUTPUT)

    val input_data = UInt(INPUT, w) /* memory controller holder for now */
    val input_addr = UInt(INPUT, 5)


    val result = UInt(OUTPUT, w)
	}

   val topInit :: topRun :: topIntermediate :: topDone :: Nil = Enum(UInt(), 4)
   val state = Reg(init = topInit)

   val dp_FSM = Module(new pipe_FSM(2))
   
   val dp_ram1 = Module(new BRAM_param(w, 5))
   val dp_ram2 = Module(new BRAM_param(w, 5))

   val dp_arith = Module(new DotProductArith(w))

    /* Memotry Control -- for now */
   dp_ram1.io.write_en := (state === topInit)
   dp_ram1.io.write_addr := io.input_addr
   dp_ram1.io.write_data := io.input_data  

   dp_ram2.io.write_en := (state === topInit)
   dp_ram2.io.write_addr := io.input_addr
   dp_ram2.io.write_data := io.input_data  

   /* Counter */
   val counter = Module(new CounterChain(1, w, 1))

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
   
   counter.io.counters_max := Vec(UInt(4)) 

   counter.io.reset := (state === topInit)
   /* run Counter block when in pipeRun state from pipe FSM */
   counter.io.en := dp_FSM.io.pipe_enabled

   dp_FSM.io.en := (state === topRun)
   dp_FSM.io.counter_done := counter.io.done_complete

   dp_ram1.io.read_addr := counter.io.counters_cout(0)(0)
   dp_ram2.io.read_addr := counter.io.counters_cout(0)(0)

   /* delay */
   dp_arith.io.v1 := dp_ram1.io.read_out
   dp_arith.io.v2 := dp_ram2.io.read_out

   val delayReg = Reg(init = Bool(false))
   val delayReg2 = Reg(init = Bool(false))
   delayReg := dp_FSM.io.pipe_enabled
   delayReg2 := delayReg

   dp_arith.io.en := delayReg2  /* delaying this one cycle just in case */
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
  for (i <- 0 until 5) {
    input_ramdata(i, i*2)
  }
  step(1)
  step(1)
	poke(c.io.cmd, 1)
	expect(c.io.status, 0)
	step(1)
  expect(c.io.status, 1)
  expect(c.io.result, 0)
  step(1)
	expect(c.io.status, 1)
  expect(c.io.result, 0)
  step(1)
  expect(c.io.status, 1)
  expect(c.io.result, 0)
  step(1)
  poke(c.io.cmd, 0)
  expect(c.io.status, 1)
  expect(c.io.result, 0)
  step(1)
  poke(c.io.cmd, 1) 
  expect(c.io.status, 1)
  expect(c.io.result, 0)
  step(1)
  expect(c.io.status, 1)
  expect(c.io.result, 4) // until here correct   
  step(1)
  expect(c.io.status, 1)
  expect(c.io.result, 20) 
  step(1)
  expect(c.io.status, 1)
  expect(c.io.result, 56) 
  step(1)
  poke(c.io.cmd, 0)
  expect(c.io.status, 1)
  expect(c.io.result, 120) 
  step(1)
  expect(c.io.status, 2)
  expect(c.io.result, 120) 
  step(1)
  expect(c.io.status, 3)
  expect(c.io.result, 120)   
} 