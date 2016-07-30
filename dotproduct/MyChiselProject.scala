package DP

import Chisel._  

object DP {
  def main(args: Array[String]): Unit = { 
    val tutArgs = args.slice(1, args.length) 
    val res = 
    args(0) match {
        case "DotProduct" =>
           chiselMainTest(tutArgs, () => Module(new DotProductTop(16, 2))) {
            c => new DotProductTopTests(c)
        }
    }
  }
}