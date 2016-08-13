package Templates

import Chisel._


object Templates {
  def main(args: Array[String]): Unit = { 
    val tutArgs = args.slice(1, args.length) 
    val res = 
    args(0) match {
        case "Bram_DB" =>
           chiselMainTest(tutArgs, () => Module(new Bram_DoubleBuffer(16, 4, 1))) {
            c => new Bram_DoubleBufferTesting(c)
        }
        case "MP_FSM" =>
          chiselMainTest(tutArgs, () => Module(new MetaPipe_FSM(16, 3))) {
            c => new MetaPipe_FSM_Testing(c)
        }
    }
  }
}