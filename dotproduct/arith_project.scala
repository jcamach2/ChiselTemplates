package ArithOperations
import Chisel._  

object ArithOperations {
  def main(args: Array[String]): Unit = { 
    val tutArgs = args.slice(1, args.length) 
    val res = 
    args(0) match {
        case "DotProductArith" =>
           chiselMainTest(tutArgs, () => Module(new DotProductArith(16, 4))) {
            c => new DotProductArithTests(c)
        }
    }
  }
}
