package GDA

import Chisel._
import Templates._
import DataPaths._
import ArithOperations._
import pipes_gda._

class GDA_MetaPipe_FSM(x_row : Int, y_vec_num : Int, w : Int) extends Module {
	
	val io = new Bundle {

		val en = Bool(INPUT)
		val done = Bool(OUTPUT)

		val data_in = UInt(INPUT, w)
		val data_inx = UInt(INPUT, w)
	

    /* testing */
		val output = UInt(OUTPUT, w) 
		val y = Bool(OUTPUT)
		val rd = UInt(OUTPUT, w)
		val wdata = UInt(OUTPUT, w)
    val d0 = Bool(OUTPUT)

    val output1 = UInt(OUTPUT, w) /* testing */
    val y1 = Bool(OUTPUT)
    val rd1 = UInt(OUTPUT, w)
    val wdata1 = UInt(OUTPUT, w)
    val d1 = Bool(OUTPUT)
	 
  	val state1 = Bool(OUTPUT)
		val state0 = Bool(OUTPUT)

	} 

    val x_matrix = Module(new BRAM_param(w, x_row * y_vec_num))
    val mean_y_vec = Module(new BRAM_param(1, x_row))

    val mu0 = Module(new BRAM_param(w, y_vec_num))
    val mu1 = Module(new BRAM_param(w, y_vec_num))


  
	  /* MetaPipeline FSM */
	  val metaPipeFSM = Module(new MetaPipe_FSM(w, 2))
    /* writing to memory - hardcoded */
   
   	mu0.io.write_addr := io.data_in
   	mu0.io.write_data := io.data_in
   	mu0.io.write_en := metaPipeFSM.io.complete_reset

   	mu1.io.write_addr := io.data_in
   	mu1.io.write_data := io.data_in + UInt(2)
    mu1.io.write_en := metaPipeFSM.io.complete_reset

   	x_matrix.io.write_addr := io.data_inx
   	x_matrix.io.write_data := io.data_inx + UInt(6)
    x_matrix.io.write_en := metaPipeFSM.io.complete_reset

   	mean_y_vec.io.write_addr := io.data_in
   	mean_y_vec.io.write_data := Bool(true) // set all to true for now 
    mean_y_vec.io.write_en := metaPipeFSM.io.complete_reset

    /* end of writing */

  	metaPipeFSM.io.en := io.en /* enable MetaPipe FSM */

    val state0 = metaPipeFSM.io.en_mp_stages(0) /* when pipe 0 should be enabled */
    val state1 = metaPipeFSM.io.en_mp_stages(1) /* when pipe 1 should be enabled */

    val state_reset = metaPipeFSM.io.reset
    val complete_reset = metaPipeFSM.io.complete_reset

    val subT = Module(new BRAM_param(w, y_vec_num))
	  val subT_2 = Module(new BRAM_param(w, y_vec_num))

	  val subT_db = Module(new Bram_DoubleBuffer(w, y_vec_num, 1))
  	val subT_2_db = Module(new Bram_DoubleBuffer(w, y_vec_num, 1))


	  /* first pipe stage */
    val pipe0_block = Module(new pipe0(y_vec_num, x_row, w))
	  val pipe1_block = Module(new pipe1(x_row, w))

    pipe0_block.io.pipe_en := state0
    pipe0_block.io.reset := state_reset
    pipe0_block.io.complete_reset := complete_reset

    x_matrix.io.read_addr := pipe0_block.io.x_addr
    pipe0_block.io.x_out := x_matrix.io.read_out

    mean_y_vec.io.read_addr := pipe0_block.io.y_addr
    pipe0_block.io.y_out := mean_y_vec.io.read_out

    mu0.io.read_addr := pipe0_block.io.mu_addr
    mu1.io.read_addr := pipe0_block.io.mu_addr

    pipe0_block.io.mu0_out := mu0.io.read_out
	  pipe0_block.io.mu1_out := mu1.io.read_out

	  /* subT block */
    subT.io.write_addr := pipe0_block.io.subT_addr
    subT.io.write_data := pipe0_block.io.output_float
    subT.io.write_en := pipe0_block.io.addr_en

    subT_2.io.write_addr := pipe0_block.io.subT_addr
    subT_2.io.write_data := pipe0_block.io.output_float
    subT_2.io.write_en := pipe0_block.io.addr_en 
 	
	  subT_db.io.write_addr := pipe0_block.io.subT_addr
    subT_db.io.write_data := pipe0_block.io.output_float
    subT_db.io.write_en := pipe0_block.io.addr_en

    subT_2_db.io.write_addr := pipe0_block.io.subT_addr
    subT_2_db.io.write_data := pipe0_block.io.output_float
    subT_2_db.io.write_en := pipe0_block.io.addr_en


    subT_db.io.read_done_vec(0) := pipe1_block.io.done ||  !metaPipeFSM.io.en_mp_stages(1)
    subT_2_db.io.read_done_vec(0) := pipe1_block.io.done ||  !metaPipeFSM.io.en_mp_stages(1)


      /* second pipe stage */
  	val sigmaM = Module(new BRAM_param(w, x_row * x_row))

  	pipe1_block.io.pipe_en := state1
  	pipe1_block.io.reset := state_reset
  	pipe1_block.io.complete_reset := complete_reset 

  	pipe1_block.io.subT_out := subT_db.io.read_out 

  	
  	subT_db.io.read_addr_vec(0) := pipe1_block.io.subT_addr
  	subT_2_db.io.read_addr_vec(0) := pipe1_block.io.subT_2_addr

  	subT_db.io.write_done := pipe0_block.io.done || !metaPipeFSM.io.en_mp_stages(0)
  	subT_2_db.io.write_done := pipe0_block.io.done || !metaPipeFSM.io.en_mp_stages(0)


  	pipe1_block.io.subT_2_out := subT_2_db.io.read_out


  	sigmaM.io.read_addr := pipe1_block.io.sigma_read_addr
  	sigmaM.io.write_addr := pipe1_block.io.sigma_write_addr
  	sigmaM.io.write_en := pipe1_block.io.sigma_addr_en
  	sigmaM.io.write_data := pipe1_block.io.sigma_write_data

  	pipe1_block.io.sigma_read_out := sigmaM.io.read_out

  	val latch_pipe1_done = Module(new Latch_Bool_Value())
   	val latch_pipe0_done = Module(new Latch_Bool_Value())

   	latch_pipe1_done.io.input_val := pipe1_block.io.done
   	latch_pipe1_done.io.rst := metaPipeFSM.io.reset

   	latch_pipe0_done.io.input_val := pipe0_block.io.done
   	latch_pipe0_done.io.rst := metaPipeFSM.io.reset

    metaPipeFSM.io.done_mp_stages(0) := latch_pipe0_done.io.latch_val
   	metaPipeFSM.io.done_mp_stages(1) := latch_pipe1_done.io.latch_val


  	val latch_complete_done = Module(new Latch_Bool_Value())
  	latch_complete_done.io.input_val := pipe0_block.io.done_complete
  	latch_complete_done.io.rst := complete_reset 
    metaPipeFSM.io.done_complete := latch_complete_done.io.latch_val 

    io.done := metaPipeFSM.io.done
    
    /* testing */
    io.output := sigmaM.io.read_out

    io.rd := pipe0_block.io.mu_addr
    io.y :=  pipe0_block.io.addr_en 
    io.d0 := latch_pipe0_done.io.latch_val 

    io.rd1 := pipe1_block.io.subT_addr
    io.y1 :=  pipe1_block.io.sigma_addr_en
    io.d1 := latch_pipe1_done.io.latch_val

    io.state0 := state0
    io.state1 := state1
    io.wdata1 := pipe1_block.io.sigma_write_data
    
    printf("x addr: %d\n",pipe0_block.io.x_addr)
    printf("pipe 0 output: %d\n",  pipe0_block.io.output_float)
    printf("subT d out: %d\n", subT_db.io.read_out)
    printf("sigma addr: %d\n",pipe0_block.io.subT_addr)

    printf("sigma write en: %d\n",pipe1_block.io.sigma_addr_en)
    printf("sigma write d: %d\n",pipe1_block.io.sigma_write_data)
    printf("pipe 1 done: %d\n", latch_pipe1_done.io.latch_val)
    printf("MetaPipe Init state: %d\n", metaPipeFSM.io.complete_reset)
} 

class GDA_MP_FSM_Tests(c : GDA_MetaPipe_FSM) extends Tester(c) {

	def testMetaPipe_FSM(x : Int, y : Int) = {
		val total = x * y
		poke(c.io.en, 0)
		step(1)
		0 until x map { i => { poke(c.io.data_in, i) 
							step(1)  }  }
		0 until total map { i => { poke(c.io.data_inx, i) 
							step(1)  }  }						
		step(1)	
		step(1)					
		poke(c.io.en, 1)
		step(1)
		expect(c.io.state0, 0)
    expect(c.io.state1, 0)
    poke(c.io.en, 0)    
		step(1)
		val list_num = List(16, 80, 224,480)
    expect(c.io.state0, 1)
    expect(c.io.state1, 0)
    step(1)
    /* pipe0 FSM in enable mode */
    expect(c.io.state0, 1)
    expect(c.io.state1, 0)
    expect(c.io.rd, 0)
    expect(c.io.y, 0)
    step(1)
    expect(c.io.state0, 1)
    expect(c.io.state1, 0)
    expect(c.io.rd, 0) /* pipe0 starts reading here */
    expect(c.io.y, 0) 
    step(1)
    (1 until x) foreach { i => { 
      expect(c.io.state0, 1)
      expect(c.io.state1, 0)
      expect(c.io.rd, i)    
      expect(c.io.y, 1)
      step(1)
    } }
    expect(c.io.state0, 1)
    expect(c.io.state1, 0)   
    expect(c.io.y, 1) /* write still enabled */
    step(1)
    expect(c.io.d0, 1)
    expect(c.io.y, 0)
    step(1)
    expect(c.io.d0, 0)    
    expect(c.io.state0, 1)
    expect(c.io.state1, 1)
    step(1)
    /* pipe0 and pipe1 FSM in enable mode */
    expect(c.io.state0, 1)
    expect(c.io.state1, 1)
    expect(c.io.rd, 0)
    expect(c.io.y, 0)
    step(1)
    expect(c.io.state0, 1)
    expect(c.io.state1, 1)
    expect(c.io.rd, 0) /* pipe0 continues reading here */
    expect(c.io.y, 0) 
    step(1)
    (1 until x) foreach { i => { 
      expect(c.io.state0, 1)
      expect(c.io.state1, 1)
      expect(c.io.rd, i)    
      expect(c.io.y, 1)
      step(1)
    } }
    expect(c.io.state0, 1)
    expect(c.io.state1, 1)   
    expect(c.io.y, 1) /* write still enabled */
    step(1)
    expect(c.io.y, 0)    
    expect(c.io.state0, 0)
    expect(c.io.state1, 1)   
    step(1)
    (0 until total - x - 2) foreach { i => { 
      expect(c.io.d0, 1)  
      expect(c.io.state0, 0)
      expect(c.io.state1, 1)
      expect(c.io.wdata1, list_num(0)) /* sigma data on first iteration */
      step(1)
    } }  
    step(1)
    expect(c.io.d0, 1)  
    expect(c.io.d1, 1)  
    expect(c.io.state0, 0)
    expect(c.io.state1, 0)   
    step(1)    
    expect(c.io.d0, 0)  
    expect(c.io.d1, 0)  
    expect(c.io.state0, 1)
    expect(c.io.state1, 1)   
    step(16 * 4)
 	}

	val x = 4 // row
	val y = 4 // col / mu size 

  testMetaPipe_FSM(x, y)
}