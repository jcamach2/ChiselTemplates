package DataPaths

import Chisel._

class ItrCounter(w : Int) extends Module {

	val io = new Bundle {
    	val en_count = Bool(INPUT)
    	val reset = Bool(INPUT)
    	val done = Bool(OUTPUT)

	  	val max = UInt(INPUT, w)
    	val cout = UInt(OUTPUT, w)
   }
 
   val currCount = Reg(init = UInt(0, width = w))

   /* counter should go up to max - 1 --> counters from 0 to max - 1 (max times) */
   val hitMax = (currCount >= io.max)
  
   when (io.en_count) {
   		currCount := Mux(hitMax, UInt(0), currCount + UInt(1))
   }
   .elsewhen (io.reset) {
   		currCount := UInt(0)
   }

   io.cout := currCount
   io.done := hitMax
}
