package DataPaths

import Chisel._


class CounterBundle(w : Int, p : Int) extends Bundle {

  val max = UInt(width = w).asInput
  val en_count = Bool().asInput
  val reset = Bool().asInput

  val vec_cout = (Vec.fill(p) {UInt(width = w)} ).asOutput
  val done = Bool().asOutput
}


class ItrCounter(w : Int, stride : Int) extends Module {

  val io = new CounterBundle(w, stride)
       
   val currCount = Reg(init = UInt(0, width = w))

   /* counter should go up to max - 1 --> counters from 0 to max - 1 (max times) */
   val hitMax = (currCount >= io.max)
  
   when (io.en_count) {
      currCount := Mux(hitMax, UInt(0), currCount + UInt(stride))
   }
   .elsewhen (io.reset) {
      currCount := UInt(0)
   }

   io.vec_cout(0) := currCount
   (1 until stride) foreach { i => io.vec_cout(i) := UInt(1) + io.vec_cout(i - 1) }

   io.done := hitMax
}
