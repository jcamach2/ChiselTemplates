package Templates

import Chisel._
import DataPaths._ 


class ChainBundle(n : Int, w : Int, p : Int) extends Bundle {

	val counters_max = (Vec.fill(n) { UInt(width = w)}).asInput
//	val counters_cout = (Vec.fill(n) { UInt(width = w)}).asOutput
	val counters_cout = (Vec.fill(n) { Vec.fill(p) { UInt(width = w) } }).asOutput
	val counters_done = (Vec.fill(n) { Bool() }).asOutput

	val en = Bool().asInput
	val reset = Bool().asInput
	val done_complete = Bool().asOutput
}

class CounterChain(n : Int, w : Int, p : Int) extends Module {

	val io = new ChainBundle(n, w, p)

	val counters = for (i <- 0 until n) yield
					{
						val one_counter = Module(new ItrCounter(w, p))
						one_counter
					}

	for (i <- 0 until n) {
		counters(i).io.reset := io.reset 
		counters(i).io.max := io.counters_max(i)

		io.counters_done(i) := counters(i).io.done
		io.counters_cout(i) := counters(i).io.vec_cout
	}

	counters(0).io.en_count := io.en 

	for (j <- 1 until n) {
		/* once a counter reaches max, done goes up 1 for one cycle (with en still enabled) */
		counters(j).io.en_count := counters.dropRight(n - j) map (_.io.done) reduceLeft(_ && _)
		/* AND all previous done signals */
	}

	val done_complete = Reg(init = Bool(false))
	when (io.reset) {
		done_complete := Bool(false)
	}
	.otherwise {
		done_complete := (counters(n - 1).io.en_count && counters(n - 1).io.done) || done_complete
	}
	io.done_complete := (counters(n - 1).io.en_count && counters(n - 1).io.done) || done_complete
}


class CounterChainTests (c: CounterChain) extends Tester(c) {

	def oneCounter(max : Int, itr : Int) =
		0 to max  foreach { p =>  {	expect(c.io.counters_done(itr), p >= max)
									expect(c.io.counters_cout(itr)(0), p)
									step(1) } 
				          }


	poke(c.io.reset, 1)
	poke(c.io.en, 0)
	step(1)
	poke(c.io.reset, 0)
	step(1)
	poke(c.io.reset, 1)
	step(1)
	poke(c.io.reset, 0)
	step(1)
	val maxCount = 3
	val listMax : List[Int] = (Range(0, maxCount) map { i => i + 2 }).toList	
	0 to maxCount - 1 foreach { p => poke(c.io.counters_max(p), listMax(maxCount - 1- p)) }
	step(1)
	step(1)
	poke(c.io.en, 1)
	expect(c.io.counters_done(0), 0)
	for (i <- 0 to listMax(0)) {
		for (j <- 0 to listMax(1)) {
			for (p <- 0 to listMax(2)) {
				expect(c.io.counters_done(2), if (i >= listMax(0)) 1 else 0)
				expect(c.io.counters_cout(2)(0), i)
				expect(c.io.counters_done(1), if (j >= listMax(1)) 1 else 0)
				expect(c.io.counters_cout(1)(0), j)			
				expect(c.io.counters_done(0), if (p >= listMax(2)) 1 else 0)
				expect(c.io.counters_cout(0)(0), p)
				expect(c.io.done_complete, i == listMax(0) &&
										   j == listMax(1) &&
										   p == listMax(2))				
				step(1)
			}
	//		oneCounter(listMax(2), 0)
		}
	}
}