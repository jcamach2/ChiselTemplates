package GDA

import Chisel._  


object GDA {
  def main(args: Array[String]): Unit = { 
    val tutArgs = args.slice(1, args.length) 
    val res = 
    args(0) match {
        case "GDA_FSM" =>
           chiselMainTest(tutArgs, () => Module(new GDA_FSM(4, 4, 16))) {
            c => new GDA_FSM_Tests(c)
        }
    }
  }
}
