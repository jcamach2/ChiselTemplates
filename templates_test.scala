package Templates

import Chisel._  

object Templates {
  def main(args: Array[String]): Unit = { 
    val tutArgs = args.slice(1, args.length) 
    val res = 
    args(0) match {
        case "CounterChain" =>
           chiselMainTest(tutArgs, () => Module(new CounterChain(3, 16))) {
        	  c => new CounterChainTests(c)
        }
    }
  }
}