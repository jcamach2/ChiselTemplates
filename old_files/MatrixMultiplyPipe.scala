package MM

import Chisel._
import Templates._
import ArithOperations._

import scala.collection.mutable.ArrayBuffer

class MatrixMultiplyPipe(row1 : Int, col1 : Int, row2 : Int, col2 : Int, w : Int) extends Module {
	
	val io = new Bundle {

		val input_addr = UInt(INPUT, width = 16)
		val input_addr2 = UInt(INPUT, width = 16)

		val en = Bool(INPUT)
		val done = Bool(OUTPUT)

		val data_in = UInt(INPUT, width = row1 * col2)
		val data_out = UInt(OUTPUT, width = w)

		/* testing purposes */
		val check_data = UInt(OUTPUT, width = w)
	}

   val pipeInit :: pipeRun :: pipeCycle :: pipeDone :: Nil = Enum(UInt(), 4)
   val state = Reg(init = pipeInit)


   val matrix_ram1 = Module(new BRAM(w, row1 * col1))
   val matrix_ram2 = Module(new BRAM(w, row2 * col2))

   val matrix_output = Module(new BRAM(w, row1 * col2))

   val counterchain_matrix = Module(new CounterChain(3, w))
   val done = counterchain_matrix.io.done_complete

   switch (state) {
   	 
   	 is (pipeInit) {
   	 	when (io.en) { state := pipeRun }
   	 }

   	 is (pipeRun) {
   	 	when (done) { state := pipeCycle }
   	 }

   	 is (pipeCycle) {
   	 	state := pipeDone
   	 }

   	 is (pipeDone) {
   	 	state := pipeInit
   	 } 

   }
   io.done := (state === pipeDone)

   /* */
   
   matrix_ram1.io.write_addr := io.input_addr
   matrix_ram1.io.write_data := io.input_addr + UInt(1)
   matrix_ram1.io.write_en := (state === pipeInit)

   matrix_ram2.io.write_addr := io.input_addr2
   matrix_ram2.io.write_data := io.input_addr2 + UInt(2)
   matrix_ram2.io.write_en := (state === pipeInit)
   
   /* */
 	

   val enabled = (state === pipeRun)
   val to_reset = (state === pipeInit)

   /* k = col1 = row2, j = col2, i = row1 */
   counterchain_matrix.io.counters_max := Vec(UInt(row2) - UInt(1), UInt(col2)  - UInt(1), UInt(row1) - UInt(1))

   val k = counterchain_matrix.io.counters_cout(0)
   val j = counterchain_matrix.io.counters_cout(1)
   val i = counterchain_matrix.io.counters_cout(2)

   counterchain_matrix.io.en := enabled
   counterchain_matrix.io.reset := to_reset

   val dp_arith_block = Module(new DotProductArith(w))
   
   val matrix_row_addr 		= Module(new MatrixAddrRam(w))
   val matrix_column_addr   = Module(new MatrixAddrRam(w))

   dp_arith_block.io.full_reset := to_reset

   /* sequential - per row */
   matrix_row_addr.io.in := i
   matrix_row_addr.io.const_dim := UInt(col1)
   matrix_row_addr.io.k := k

   matrix_row_addr.io.reset := to_reset

   /* sequential - per column */
   matrix_column_addr.io.in := k
   matrix_column_addr.io.const_dim := UInt(col2)
   matrix_column_addr.io.k := j

   matrix_column_addr.reset := to_reset

 
   matrix_ram1.io.read_addr := matrix_row_addr.io.out
   matrix_ram2.io.read_addr := matrix_column_addr.io.out 

   dp_arith_block.io.v1 := matrix_ram1.io.read_out
   dp_arith_block.io.v2 := matrix_ram2.io.read_out



   /* delay for enabled signal */
   val reg_en_delay = Vec.fill(4) { Reg(init = Bool(false)) }
   reg_en_delay(0) := enabled
   for (i <- 1 until 4) {
   		reg_en_delay(i) := reg_en_delay(i - 1)
   }
   dp_arith_block.io.en := reg_en_delay(2) 

   /* delays for address values */
   val matrix_output_addr   = Module(new MatrixAddrRam(w))
   matrix_output_addr.io.in := i
   matrix_output_addr.io.const_dim := UInt(col2)
   matrix_output_addr.io.k := j

   matrix_output_addr.reset := to_reset

   val reg_addr_delay = Vec.fill(3) { Reg(init = UInt(0, width = row1 * col2)) }
   /* 1 delay already taken care of in matrix_output_addr block */
   reg_addr_delay(0) := matrix_output_addr.io.out
   for (i <- 1 until 3) {
   		reg_addr_delay(i) := reg_addr_delay(i - 1)
   } 

   matrix_output.io.write_addr := reg_addr_delay(2) 
   matrix_output.io.write_data := dp_arith_block.io.dotproduct
  
   matrix_output.io.write_en := reg_en_delay(3) 
   io.check_data := dp_arith_block.io.dotproduct

   /* delays for reseting dot product block */
   val reg_reset_delay = Vec.fill(4) { Reg(init = Bool(false))}
   reg_reset_delay(0) := counterchain_matrix.io.counters_done(0)
   for (i <- 1 until 4) {
   		reg_reset_delay(i) := reg_reset_delay(i - 1)
   }

   dp_arith_block.io.reset := reg_reset_delay(3)

   matrix_output.io.read_addr := io.data_in
   io.data_out := matrix_output.io.read_out

}

class MatrixMultiplyPipeTests (c: MatrixMultiplyPipe) extends Tester(c) {
	poke(c.io.en, 0)
	step(1)
	0 until 8 foreach { q => { poke(c.io.input_addr, q)
							   step(1) } }
	0 until 6 foreach { q => { poke(c.io.input_addr2, q)
							   step(1) } }
	step(1)
	step(1)
	poke(c.io.en, 1)
	val ListMatrix1 : List[Int] = (Range(0, 8) map {i => i + 1}).toList
	val ListMatrix2 : List[Int] = (Range(0, 6) map {i => i + 2}).toList
	var OutputMatrix = ArrayBuffer.fill[Int](12)(0)

	for (i <- 0 until 4)
		for (j <- 0 until 3)
			for (k <- 0 until 2) {
				OutputMatrix(i*3 + j) = ListMatrix1(i*2 + k) * ListMatrix2(k*3 + j)	+ OutputMatrix(i*3 + j) 		
			}
	step(1)
	/* matrix multiplication */ 
	for (i <- 0 until 4)
		for (j <- 0 until 3)
			for (k <- 0 until 2) {
				step(1)				
			}
	poke(c.io.en, 0)
	step(1)
	step(1) 
	step(1)
	step(1)
	for (l <- 0 until 12) {
		poke(c.io.data_in, l)
		step(1)
		expect(c.io.data_out, OutputMatrix(l))
	}
	step(1)
} 