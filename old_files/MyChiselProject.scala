package MM

import Chisel._  

object MM {
  def main(args: Array[String]): Unit = { 
    val tutArgs = args.slice(1, args.length) 
    val res = 
    args(0) match {
        case "MatrixMultiplyPipe" =>
           chiselMainTest(tutArgs, () => Module(new MatrixMultiplyPipe(4, 2, 2, 3, 16))) {
            c => new MatrixMultiplyPipeTests(c)
        }
    }
  }
}