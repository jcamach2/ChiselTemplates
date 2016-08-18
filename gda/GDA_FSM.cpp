#include "GDA_FSM.h"

void GDA_FSM_t::init ( val_t rand_init ) {
  this->__srand(rand_init);
  GDA_FSM_sigmaM__reg_raddr.randomize(&__rand_seed);
  GDA_FSM_sigmaM__bRam_rw.randomize(&__rand_seed);
  GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__currCount.randomize(&__rand_seed);
  GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__currCount.randomize(&__rand_seed);
  GDA_FSM_pipe1_block_sigmaCounters__done_complete.randomize(&__rand_seed);
  GDA_FSM_pipe1_block_mtxCounter__currCount.randomize(&__rand_seed);
  GDA_FSM_pipe1_block_pipe1_FSM__prev_state.randomize(&__rand_seed);
  GDA_FSM_pipe1_block_pipe1_FSM__wait_regs_0.randomize(&__rand_seed);
  GDA_FSM_pipe1_block_pipe1_FSM__wait_done.randomize(&__rand_seed);
  GDA_FSM_pipe1_block_pipe1_FSM__curr_state.randomize(&__rand_seed);
  GDA_FSM_pipe1_block__state1_Regs_1.randomize(&__rand_seed);
  GDA_FSM_pipe1_block__writeaddr_reg.randomize(&__rand_seed);
  GDA_FSM_pipe1_block__product_reg.randomize(&__rand_seed);
  GDA_FSM_pipe1_block__state1_Regs_0.randomize(&__rand_seed);
  GDA_FSM_pipe0_block_pipe0_datapath__sub_reg.randomize(&__rand_seed);
  GDA_FSM_pipe0_block_mu_addr__mult_reg.randomize(&__rand_seed);
  GDA_FSM_pipe0_block_mu_addr__k_reg.randomize(&__rand_seed);
  GDA_FSM_pipe0_block_bool_vec_addr__mult_reg.randomize(&__rand_seed);
  GDA_FSM_pipe0_block_bool_vec_addr__k_reg.randomize(&__rand_seed);
  GDA_FSM_pipe0_block_matrix_addr__mult_reg.randomize(&__rand_seed);
  GDA_FSM_pipe0_block_matrix_addr__k_reg.randomize(&__rand_seed);
  GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__currCount.randomize(&__rand_seed);
  GDA_FSM_pipe0_block_matrixCounters_ItrCounter__currCount.randomize(&__rand_seed);
  GDA_FSM_pipe0_block_matrixCounters__done_complete.randomize(&__rand_seed);
  GDA_FSM_pipe0_block_pipe0_FSM__prev_state.randomize(&__rand_seed);
  GDA_FSM_pipe0_block_pipe0_FSM__wait_regs_0.randomize(&__rand_seed);
  GDA_FSM_pipe0_block_pipe0_FSM__wait_done.randomize(&__rand_seed);
  GDA_FSM_pipe0_block_pipe0_FSM__curr_state.randomize(&__rand_seed);
  GDA_FSM_pipe0_block__state0_Regs_0.randomize(&__rand_seed);
  GDA_FSM_pipe0_block__state0_Regs_1.randomize(&__rand_seed);
  GDA_FSM_pipe0_block__mu_addr_Regs.randomize(&__rand_seed);
  GDA_FSM_subT_2_db_bram_w2__reg_raddr.randomize(&__rand_seed);
  GDA_FSM_subT_2_db_bram_w2__bRam_rw.randomize(&__rand_seed);
  GDA_FSM_subT_2_db_bram_w1__reg_raddr.randomize(&__rand_seed);
  GDA_FSM_subT_2_db_bram_w1__bRam_rw.randomize(&__rand_seed);
  GDA_FSM_subT_2_db__state_read_reg.randomize(&__rand_seed);
  GDA_FSM_subT_2_db__latch_read_done_vec_0.randomize(&__rand_seed);
  GDA_FSM_subT_2_db__state.randomize(&__rand_seed);
  GDA_FSM_subT_db_bram_w2__reg_raddr.randomize(&__rand_seed);
  GDA_FSM_subT_db_bram_w2__bRam_rw.randomize(&__rand_seed);
  GDA_FSM_subT_db_bram_w1__reg_raddr.randomize(&__rand_seed);
  GDA_FSM_subT_db_bram_w1__bRam_rw.randomize(&__rand_seed);
  GDA_FSM_subT_db__state_read_reg.randomize(&__rand_seed);
  GDA_FSM_subT_db__latch_read_done_vec_0.randomize(&__rand_seed);
  GDA_FSM_subT_db__state.randomize(&__rand_seed);
   GDA_FSM_subT_2__io_read_addr.randomize(&__rand_seed);
  GDA_FSM_subT_2__reg_raddr.randomize(&__rand_seed);
  GDA_FSM_subT_2__bRam_rw.randomize(&__rand_seed);
   GDA_FSM_subT__io_read_addr.randomize(&__rand_seed);
  GDA_FSM_subT__reg_raddr.randomize(&__rand_seed);
  GDA_FSM_subT__bRam_rw.randomize(&__rand_seed);
  GDA_FSM_seqFSM__state.randomize(&__rand_seed);
  GDA_FSM_mu1__reg_raddr.randomize(&__rand_seed);
  GDA_FSM_mu1__bRam_rw.randomize(&__rand_seed);
  GDA_FSM_mu0__reg_raddr.randomize(&__rand_seed);
  GDA_FSM_mu0__bRam_rw.randomize(&__rand_seed);
  GDA_FSM_mean_y_vec__reg_raddr.randomize(&__rand_seed);
  GDA_FSM_mean_y_vec__bRam_rw.randomize(&__rand_seed);
  GDA_FSM_x_matrix__reg_raddr.randomize(&__rand_seed);
  GDA_FSM_x_matrix__bRam_rw.randomize(&__rand_seed);
  clk.len = 1;
  clk.cnt = 0;
  clk.values[0] = 0;
}


int GDA_FSM_t::clock ( dat_t<1> reset ) {
  uint32_t min = ((uint32_t)1<<31)-1;
  if (clk.cnt < min) min = clk.cnt;
  clk.cnt-=min;
  if (clk.cnt == 0) clock_lo( reset );
  if (!reset.to_bool()) print( std::cerr );
  if (clk.cnt == 0) clock_hi( reset );
  if (clk.cnt == 0) clk.cnt = clk.len;
  return min;
}


void GDA_FSM_t::print ( FILE* f ) {
}
void GDA_FSM_t::print ( std::ostream& s ) {
}


void GDA_FSM_t::dump_init ( FILE* f ) {
}


void GDA_FSM_t::dump ( FILE* f, val_t t, dat_t<1> reset ) {
}




void GDA_FSM_t::clock_lo ( dat_t<1> reset, bool assert_fire ) {
  { GDA_FSM_pipe1_block_mtxCounter__io_vec_cout_0.values[0] = GDA_FSM_pipe1_block_mtxCounter__currCount.values[0];}
  { GDA_FSM_pipe1_block__io_sigma_read_addr.values[0] = GDA_FSM_pipe1_block_mtxCounter__io_vec_cout_0.values[0];}
  { GDA_FSM_sigmaM__io_read_addr.values[0] = GDA_FSM_pipe1_block__io_sigma_read_addr.values[0];}
  val_t T0;
  { T0 = GDA_FSM_sigmaM__reg_raddr.values[0];}
  T0 = T0 & 0xfL;
  val_t T1;
  { T1 = GDA_FSM_sigmaM__bRam_rw.get(T0, 0);}
  { GDA_FSM_sigmaM__io_read_out.values[0] = T1;}
  { GDA_FSM_pipe1_block__io_sigma_read_out.values[0] = GDA_FSM_sigmaM__io_read_out.values[0];}
  val_t T2;
  { T2 = GDA_FSM_pipe1_block__io_sigma_read_out.values[0]+GDA_FSM_pipe1_block__product_reg.values[0];}
  T2 = T2 & 0xffffL;
  { GDA_FSM_pipe1_block__io_sigma_write_data.values[0] = T2;}
  { GDA_FSM_sigmaM__io_write_data.values[0] = GDA_FSM_pipe1_block__io_sigma_write_data.values[0];}
  { GDA_FSM_pipe1_block__io_sigma_addr_en.values[0] = GDA_FSM_pipe1_block__state1_Regs_1.values[0];}
  { GDA_FSM_sigmaM__io_write_en.values[0] = GDA_FSM_pipe1_block__io_sigma_addr_en.values[0];}
  { GDA_FSM_pipe1_block__io_sigma_write_addr.values[0] = GDA_FSM_pipe1_block__writeaddr_reg.values[0];}
  { GDA_FSM_sigmaM__io_write_addr.values[0] = GDA_FSM_pipe1_block__io_sigma_write_addr.values[0];}
  { T3.values[0] = GDA_FSM_sigmaM__io_write_addr.values[0];}
  T3.values[0] = T3.values[0] & 0xfL;
  val_t T4;
  { T4 = GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__currCount.values[0]+0x1L;}
  T4 = T4 & 0xffffL;
  { GDA_FSM_pipe1_block_sigmaCounters__io_counters_max_1.values[0] = 0x3L;}
  { GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_max.values[0] = GDA_FSM_pipe1_block_sigmaCounters__io_counters_max_1.values[0];}
  val_t GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__hitMax;
  GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__hitMax = GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_max.values[0]<=GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__currCount.values[0];
  val_t T5;
  { T5 = TERNARY(GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__hitMax, 0x0L, T4);}
  { GDA_FSM_pipe1_block_sigmaCounters__io_counters_max_0.values[0] = 0x3L;}
  { GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__io_max.values[0] = GDA_FSM_pipe1_block_sigmaCounters__io_counters_max_0.values[0];}
  val_t GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__hitMax;
  GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__hitMax = GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__io_max.values[0]<=GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__currCount.values[0];
  { GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__io_done.values[0] = GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__hitMax;}
  { GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_en_count.values[0] = GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__io_done.values[0];}
  val_t T6;
  { T6 = TERNARY_1(GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_en_count.values[0], T5, GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__currCount.values[0]);}
  val_t T7;
  T7 = GDA_FSM_seqFSM__state.values[0] == 0x1L;
  { GDA_FSM_seqFSM__io_state_reset.values[0] = T7;}
  { GDA_FSM_pipe1_block__io_reset.values[0] = GDA_FSM_seqFSM__io_state_reset.values[0];}
  { GDA_FSM_pipe1_block_sigmaCounters__io_reset.values[0] = GDA_FSM_pipe1_block__io_reset.values[0];}
  { GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_reset.values[0] = GDA_FSM_pipe1_block_sigmaCounters__io_reset.values[0];}
  val_t T8;
  { T8 = GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_en_count.values[0] ^ 0x1L;}
  val_t T9;
  { T9 = T8 & GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_reset.values[0];}
  val_t T10;
  { T10 = TERNARY(T9, 0x0L, T6);}
  { GDA_FSM_pipe1_block__reset.values[0] = reset.values[0];}
  { GDA_FSM_pipe1_block_sigmaCounters__reset.values[0] = GDA_FSM_pipe1_block__reset.values[0];}
  { GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__reset.values[0] = GDA_FSM_pipe1_block_sigmaCounters__reset.values[0];}
  { T11.values[0] = TERNARY(GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__reset.values[0], 0x0L, T10);}
  val_t T12;
  { T12 = GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__currCount.values[0]+0x1L;}
  T12 = T12 & 0xffffL;
  val_t T13;
  { T13 = TERNARY(GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__hitMax, 0x0L, T12);}
  val_t T14;
  T14 = GDA_FSM_pipe1_block_pipe1_FSM__curr_state.values[0] == 0x1L;
  { GDA_FSM_pipe1_block_pipe1_FSM__io_pipe_enabled.values[0] = T14;}
  { GDA_FSM_pipe1_block_sigmaCounters__io_en.values[0] = GDA_FSM_pipe1_block_pipe1_FSM__io_pipe_enabled.values[0];}
  { GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__io_en_count.values[0] = GDA_FSM_pipe1_block_sigmaCounters__io_en.values[0];}
  val_t T15;
  { T15 = TERNARY_1(GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__io_en_count.values[0], T13, GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__currCount.values[0]);}
  { GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__io_reset.values[0] = GDA_FSM_pipe1_block_sigmaCounters__io_reset.values[0];}
  val_t T16;
  { T16 = GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__io_en_count.values[0] ^ 0x1L;}
  val_t T17;
  { T17 = T16 & GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__io_reset.values[0];}
  val_t T18;
  { T18 = TERNARY(T17, 0x0L, T15);}
  { GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__reset.values[0] = GDA_FSM_pipe1_block_sigmaCounters__reset.values[0];}
  { T19.values[0] = TERNARY(GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__reset.values[0], 0x0L, T18);}
  { GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_done.values[0] = GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__hitMax;}
  { GDA_FSM_pipe1_block_sigmaCounters__io_counters_done_1.values[0] = GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_done.values[0];}
  { GDA_FSM_pipe1_block_sigmaCounters__io_counters_done_0.values[0] = GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__io_done.values[0];}
  val_t T20;
  { T20 = TERNARY(GDA_FSM_pipe1_block_sigmaCounters__io_reset.values[0], 0x0L, GDA_FSM_pipe1_block_sigmaCounters__done_complete.values[0]);}
  val_t T21;
  { T21 = GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_en_count.values[0] & GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_done.values[0];}
  val_t T22;
  { T22 = T21 | GDA_FSM_pipe1_block_sigmaCounters__done_complete.values[0];}
  val_t T23;
  { T23 = GDA_FSM_pipe1_block_sigmaCounters__io_reset.values[0] ^ 0x1L;}
  val_t T24;
  { T24 = TERNARY_1(T23, T22, T20);}
  { T25.values[0] = TERNARY(GDA_FSM_pipe1_block_sigmaCounters__reset.values[0], 0x0L, T24);}
  val_t T26;
  { T26 = GDA_FSM_pipe1_block_mtxCounter__currCount.values[0]+0x1L;}
  T26 = T26 & 0xffffL;
  { GDA_FSM_pipe1_block_mtxCounter__io_max.values[0] = 0xfL;}
  val_t GDA_FSM_pipe1_block_mtxCounter__hitMax;
  GDA_FSM_pipe1_block_mtxCounter__hitMax = GDA_FSM_pipe1_block_mtxCounter__io_max.values[0]<=GDA_FSM_pipe1_block_mtxCounter__currCount.values[0];
  val_t T27;
  { T27 = TERNARY(GDA_FSM_pipe1_block_mtxCounter__hitMax, 0x0L, T26);}
  { GDA_FSM_pipe1_block_mtxCounter__io_en_count.values[0] = GDA_FSM_pipe1_block__state1_Regs_0.values[0];}
  val_t T28;
  { T28 = TERNARY_1(GDA_FSM_pipe1_block_mtxCounter__io_en_count.values[0], T27, GDA_FSM_pipe1_block_mtxCounter__currCount.values[0]);}
  { GDA_FSM_pipe1_block_mtxCounter__io_reset.values[0] = GDA_FSM_pipe1_block__io_reset.values[0];}
  val_t T29;
  { T29 = GDA_FSM_pipe1_block_mtxCounter__io_en_count.values[0] ^ 0x1L;}
  val_t T30;
  { T30 = T29 & GDA_FSM_pipe1_block_mtxCounter__io_reset.values[0];}
  val_t T31;
  { T31 = TERNARY(T30, 0x0L, T28);}
  { GDA_FSM_pipe1_block_mtxCounter__reset.values[0] = GDA_FSM_pipe1_block__reset.values[0];}
  { T32.values[0] = TERNARY(GDA_FSM_pipe1_block_mtxCounter__reset.values[0], 0x0L, T31);}
  { GDA_FSM_pipe1_block_mtxCounter__io_done.values[0] = GDA_FSM_pipe1_block_mtxCounter__hitMax;}
  val_t GDA_FSM_pipe1_block_pipe1_FSM__state_wait;
  GDA_FSM_pipe1_block_pipe1_FSM__state_wait = GDA_FSM_pipe1_block_pipe1_FSM__curr_state.values[0] == 0x2L;
  val_t GDA_FSM_pipe1_block_pipe1_FSM__state_en;
  GDA_FSM_pipe1_block_pipe1_FSM__state_en = GDA_FSM_pipe1_block_pipe1_FSM__prev_state.values[0] == 0x1L;
  val_t GDA_FSM_pipe1_block_pipe1_FSM__pipe_pulse;
  { GDA_FSM_pipe1_block_pipe1_FSM__pipe_pulse = GDA_FSM_pipe1_block_pipe1_FSM__state_en & GDA_FSM_pipe1_block_pipe1_FSM__state_wait;}
  { GDA_FSM_pipe1_block_pipe1_FSM__reset.values[0] = GDA_FSM_pipe1_block__reset.values[0];}
  { T33.values[0] = TERNARY(GDA_FSM_pipe1_block_pipe1_FSM__reset.values[0], 0x0L, GDA_FSM_pipe1_block_pipe1_FSM__pipe_pulse);}
  { T34.values[0] = TERNARY(GDA_FSM_pipe1_block_pipe1_FSM__reset.values[0], 0x0L, GDA_FSM_pipe1_block_pipe1_FSM__wait_regs_0.values[0]);}
  val_t T35;
  T35 = GDA_FSM_seqFSM__state.values[0] == 0x3L;
  { GDA_FSM_seqFSM__io_pipe_en_1.values[0] = T35;}
  { GDA_FSM_pipe1_block__io_pipe_en.values[0] = GDA_FSM_seqFSM__io_pipe_en_1.values[0];}
  { GDA_FSM_pipe1_block_pipe1_FSM__io_en.values[0] = GDA_FSM_pipe1_block__io_pipe_en.values[0];}
  val_t T36;
  T36 = 0x0L == GDA_FSM_pipe1_block_pipe1_FSM__curr_state.values[0];
  val_t T37;
  { T37 = T36 & GDA_FSM_pipe1_block_pipe1_FSM__io_en.values[0];}
  val_t T38;
  { T38 = TERNARY(T37, 0x1L, GDA_FSM_pipe1_block_pipe1_FSM__curr_state.values[0]);}
  val_t T39;
  { T39 = GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_en_count.values[0] & GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_done.values[0];}
  val_t T40;
  { T40 = T39 | GDA_FSM_pipe1_block_sigmaCounters__done_complete.values[0];}
  { GDA_FSM_pipe1_block_sigmaCounters__io_done_complete.values[0] = T40;}
  { GDA_FSM_pipe1_block_pipe1_FSM__io_counter_done.values[0] = GDA_FSM_pipe1_block_sigmaCounters__io_done_complete.values[0];}
  val_t T41;
  T41 = 0x1L == GDA_FSM_pipe1_block_pipe1_FSM__curr_state.values[0];
  val_t T42;
  { T42 = T41 & GDA_FSM_pipe1_block_pipe1_FSM__io_counter_done.values[0];}
  val_t T43;
  { T43 = TERNARY(T42, 0x2L, T38);}
  val_t T44;
  T44 = 0x2L == GDA_FSM_pipe1_block_pipe1_FSM__curr_state.values[0];
  val_t T45;
  { T45 = T44 & GDA_FSM_pipe1_block_pipe1_FSM__wait_done.values[0];}
  val_t T46;
  { T46 = TERNARY(T45, 0x3L, T43);}
  val_t T47;
  T47 = 0x3L == GDA_FSM_pipe1_block_pipe1_FSM__curr_state.values[0];
  val_t T48;
  { T48 = TERNARY(T47, 0x0L, T46);}
  { T49.values[0] = TERNARY(GDA_FSM_pipe1_block_pipe1_FSM__reset.values[0], 0x0L, T48);}
  { T50.values[0] = TERNARY(GDA_FSM_pipe1_block__reset.values[0], 0x0L, GDA_FSM_pipe1_block__state1_Regs_0.values[0]);}
  { T51.values[0] = TERNARY(GDA_FSM_pipe1_block__reset.values[0], 0x0L, GDA_FSM_pipe1_block_mtxCounter__io_vec_cout_0.values[0]);}
  val_t T52;
  { T52 = GDA_FSM_subT_2_db_bram_w1__reg_raddr.values[0];}
  T52 = T52 & 0x3L;
  val_t T53;
  { T53 = GDA_FSM_subT_2_db_bram_w1__bRam_rw.get(T52, 0);}
  { GDA_FSM_subT_2_db_bram_w1__io_read_out.values[0] = T53;}
  val_t T54;
  { T54 = GDA_FSM_subT_2_db_bram_w2__reg_raddr.values[0];}
  T54 = T54 & 0x3L;
  val_t T55;
  { T55 = GDA_FSM_subT_2_db_bram_w2__bRam_rw.get(T54, 0);}
  { GDA_FSM_subT_2_db_bram_w2__io_read_out.values[0] = T55;}
  val_t T56;
  T56 = GDA_FSM_subT_2_db__state_read_reg.values[0] == 0x1L;
  val_t T57;
  { T57 = TERNARY_1(T56, GDA_FSM_subT_2_db_bram_w2__io_read_out.values[0], GDA_FSM_subT_2_db_bram_w1__io_read_out.values[0]);}
  { GDA_FSM_subT_2_db__io_read_out.values[0] = T57;}
  { GDA_FSM_pipe1_block__io_subT_2_out.values[0] = GDA_FSM_subT_2_db__io_read_out.values[0];}
  val_t T58;
  { T58 = GDA_FSM_subT_db_bram_w1__reg_raddr.values[0];}
  T58 = T58 & 0x3L;
  val_t T59;
  { T59 = GDA_FSM_subT_db_bram_w1__bRam_rw.get(T58, 0);}
  { GDA_FSM_subT_db_bram_w1__io_read_out.values[0] = T59;}
  val_t T60;
  { T60 = GDA_FSM_subT_db_bram_w2__reg_raddr.values[0];}
  T60 = T60 & 0x3L;
  val_t T61;
  { T61 = GDA_FSM_subT_db_bram_w2__bRam_rw.get(T60, 0);}
  { GDA_FSM_subT_db_bram_w2__io_read_out.values[0] = T61;}
  val_t T62;
  T62 = GDA_FSM_subT_db__state_read_reg.values[0] == 0x1L;
  val_t T63;
  { T63 = TERNARY_1(T62, GDA_FSM_subT_db_bram_w2__io_read_out.values[0], GDA_FSM_subT_db_bram_w1__io_read_out.values[0]);}
  { GDA_FSM_subT_db__io_read_out.values[0] = T63;}
  { GDA_FSM_pipe1_block__io_subT_out.values[0] = GDA_FSM_subT_db__io_read_out.values[0];}
  val_t T64;
  T64 = GDA_FSM_pipe1_block__io_subT_out.values[0] * GDA_FSM_pipe1_block__io_subT_2_out.values[0];
  val_t T65;
  { T65 = TERNARY(GDA_FSM_pipe1_block__reset.values[0], 0x0L, T64);}
  { T66.values[0] = T65;}
  T66.values[0] = T66.values[0] & 0xffffL;
  { GDA_FSM_pipe1_block__io_b.values[0] = GDA_FSM_pipe1_block_pipe1_FSM__io_pipe_enabled.values[0];}
  { T67.values[0] = TERNARY(GDA_FSM_pipe1_block__reset.values[0], 0x0L, GDA_FSM_pipe1_block_pipe1_FSM__io_pipe_enabled.values[0]);}
  { GDA_FSM_pipe0_block__io_reset.values[0] = GDA_FSM_seqFSM__io_state_reset.values[0];}
  { GDA_FSM_pipe0_block_pipe0_datapath__io_reset.values[0] = GDA_FSM_pipe0_block__io_reset.values[0];}
  val_t T68;
  { T68 = TERNARY(GDA_FSM_pipe0_block_pipe0_datapath__io_reset.values[0], 0x0L, GDA_FSM_pipe0_block_pipe0_datapath__sub_reg.values[0]);}
  val_t T69;
  { T69 = GDA_FSM_mu0__reg_raddr.values[0];}
  T69 = T69 & 0x3L;
  val_t T70;
  { T70 = GDA_FSM_mu0__bRam_rw.get(T69, 0);}
  { GDA_FSM_mu0__io_read_out.values[0] = T70;}
  { GDA_FSM_pipe0_block__io_mu0_out.values[0] = GDA_FSM_mu0__io_read_out.values[0];}
  { GDA_FSM_pipe0_block_pipe0_datapath__io_mu0.values[0] = GDA_FSM_pipe0_block__io_mu0_out.values[0];}
  val_t T71;
  { T71 = GDA_FSM_mu1__reg_raddr.values[0];}
  T71 = T71 & 0x3L;
  val_t T72;
  { T72 = GDA_FSM_mu1__bRam_rw.get(T71, 0);}
  { GDA_FSM_mu1__io_read_out.values[0] = T72;}
  { GDA_FSM_pipe0_block__io_mu1_out.values[0] = GDA_FSM_mu1__io_read_out.values[0];}
  { GDA_FSM_pipe0_block_pipe0_datapath__io_mu1.values[0] = GDA_FSM_pipe0_block__io_mu1_out.values[0];}
  val_t T73;
  { T73 = GDA_FSM_mean_y_vec__reg_raddr.values[0];}
  T73 = T73 & 0x3L;
  val_t T74;
  { T74 = GDA_FSM_mean_y_vec__bRam_rw.get(T73, 0);}
  { GDA_FSM_mean_y_vec__io_read_out.values[0] = T74;}
  { GDA_FSM_pipe0_block__io_y_out.values[0] = GDA_FSM_mean_y_vec__io_read_out.values[0];}
  { GDA_FSM_pipe0_block_pipe0_datapath__io_y.values[0] = GDA_FSM_pipe0_block__io_y_out.values[0];}
  val_t GDA_FSM_pipe0_block_pipe0_datapath__sub;
  { GDA_FSM_pipe0_block_pipe0_datapath__sub = TERNARY_1(GDA_FSM_pipe0_block_pipe0_datapath__io_y.values[0], GDA_FSM_pipe0_block_pipe0_datapath__io_mu1.values[0], GDA_FSM_pipe0_block_pipe0_datapath__io_mu0.values[0]);}
  val_t T75;
  { T75 = GDA_FSM_x_matrix__reg_raddr.values[0];}
  T75 = T75 & 0xfL;
  val_t T76;
  { T76 = GDA_FSM_x_matrix__bRam_rw.get(T75, 0);}
  { GDA_FSM_x_matrix__io_read_out.values[0] = T76;}
  { GDA_FSM_pipe0_block__io_x_out.values[0] = GDA_FSM_x_matrix__io_read_out.values[0];}
  { GDA_FSM_pipe0_block_pipe0_datapath__io_x.values[0] = GDA_FSM_pipe0_block__io_x_out.values[0];}
  val_t GDA_FSM_pipe0_block_pipe0_datapath__vec_sub;
  { GDA_FSM_pipe0_block_pipe0_datapath__vec_sub = GDA_FSM_pipe0_block_pipe0_datapath__io_x.values[0]-GDA_FSM_pipe0_block_pipe0_datapath__sub;}
  GDA_FSM_pipe0_block_pipe0_datapath__vec_sub = GDA_FSM_pipe0_block_pipe0_datapath__vec_sub & 0xffffL;
  val_t T77;
  T77 = GDA_FSM_seqFSM__state.values[0] == 0x2L;
  { GDA_FSM_seqFSM__io_pipe_en_0.values[0] = T77;}
  { GDA_FSM_pipe0_block__io_pipe_en.values[0] = GDA_FSM_seqFSM__io_pipe_en_0.values[0];}
  { GDA_FSM_pipe0_block_pipe0_datapath__io_en.values[0] = GDA_FSM_pipe0_block__io_pipe_en.values[0];}
  val_t T78;
  { T78 = GDA_FSM_pipe0_block_pipe0_datapath__io_reset.values[0] ^ 0x1L;}
  val_t T79;
  { T79 = T78 & GDA_FSM_pipe0_block_pipe0_datapath__io_en.values[0];}
  val_t T80;
  { T80 = TERNARY_1(T79, GDA_FSM_pipe0_block_pipe0_datapath__vec_sub, T68);}
  { GDA_FSM_pipe0_block__reset.values[0] = reset.values[0];}
  { GDA_FSM_pipe0_block_pipe0_datapath__reset.values[0] = GDA_FSM_pipe0_block__reset.values[0];}
  { T81.values[0] = TERNARY(GDA_FSM_pipe0_block_pipe0_datapath__reset.values[0], 0x0L, T80);}
  { GDA_FSM_pipe0_block_mu_addr__io_reset.values[0] = GDA_FSM_pipe0_block__io_reset.values[0];}
  val_t T82;
  { T82 = TERNARY(GDA_FSM_pipe0_block_mu_addr__io_reset.values[0], 0x0L, GDA_FSM_pipe0_block_mu_addr__mult_reg.values[0]);}
  { GDA_FSM_pipe0_block_mu_addr__io_in.values[0] = 0x0L;}
  { GDA_FSM_pipe0_block_mu_addr__io_const_dim.values[0] = 0x0L;}
  val_t GDA_FSM_pipe0_block_mu_addr__mult_block;
  GDA_FSM_pipe0_block_mu_addr__mult_block = GDA_FSM_pipe0_block_mu_addr__io_const_dim.values[0] * GDA_FSM_pipe0_block_mu_addr__io_in.values[0];
  val_t T83;
  { T83 = GDA_FSM_pipe0_block_mu_addr__io_reset.values[0] ^ 0x1L;}
  val_t T84;
  { T84 = TERNARY_1(T83, GDA_FSM_pipe0_block_mu_addr__mult_block, T82);}
  { GDA_FSM_pipe0_block_mu_addr__reset.values[0] = GDA_FSM_pipe0_block__reset.values[0];}
  { T85.values[0] = TERNARY(GDA_FSM_pipe0_block_mu_addr__reset.values[0], 0x0L, T84);}
  val_t T86;
  { T86 = TERNARY(GDA_FSM_pipe0_block_mu_addr__io_reset.values[0], 0x0L, GDA_FSM_pipe0_block_mu_addr__k_reg.values[0]);}
  { GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_vec_cout_0.values[0] = GDA_FSM_pipe0_block_matrixCounters_ItrCounter__currCount.values[0];}
  { GDA_FSM_pipe0_block_matrixCounters__io_counters_cout_0_0.values[0] = GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_vec_cout_0.values[0];}
  { GDA_FSM_pipe0_block_mu_addr__io_k.values[0] = GDA_FSM_pipe0_block_matrixCounters__io_counters_cout_0_0.values[0];}
  val_t T87;
  { T87 = TERNARY_1(T83, GDA_FSM_pipe0_block_mu_addr__io_k.values[0], T86);}
  { T88.values[0] = TERNARY(GDA_FSM_pipe0_block_mu_addr__reset.values[0], 0x0L, T87);}
  { GDA_FSM_pipe0_block_bool_vec_addr__io_reset.values[0] = GDA_FSM_pipe0_block__io_reset.values[0];}
  val_t T89;
  { T89 = TERNARY(GDA_FSM_pipe0_block_bool_vec_addr__io_reset.values[0], 0x0L, GDA_FSM_pipe0_block_bool_vec_addr__mult_reg.values[0]);}
  { GDA_FSM_pipe0_block_bool_vec_addr__io_in.values[0] = 0x0L;}
  { GDA_FSM_pipe0_block_bool_vec_addr__io_const_dim.values[0] = 0x0L;}
  val_t GDA_FSM_pipe0_block_bool_vec_addr__mult_block;
  GDA_FSM_pipe0_block_bool_vec_addr__mult_block = GDA_FSM_pipe0_block_bool_vec_addr__io_const_dim.values[0] * GDA_FSM_pipe0_block_bool_vec_addr__io_in.values[0];
  val_t T90;
  { T90 = GDA_FSM_pipe0_block_bool_vec_addr__io_reset.values[0] ^ 0x1L;}
  val_t T91;
  { T91 = TERNARY_1(T90, GDA_FSM_pipe0_block_bool_vec_addr__mult_block, T89);}
  { GDA_FSM_pipe0_block_bool_vec_addr__reset.values[0] = GDA_FSM_pipe0_block__reset.values[0];}
  { T92.values[0] = TERNARY(GDA_FSM_pipe0_block_bool_vec_addr__reset.values[0], 0x0L, T91);}
  val_t T93;
  { T93 = TERNARY(GDA_FSM_pipe0_block_bool_vec_addr__io_reset.values[0], 0x0L, GDA_FSM_pipe0_block_bool_vec_addr__k_reg.values[0]);}
  { GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_vec_cout_0.values[0] = GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__currCount.values[0];}
  { GDA_FSM_pipe0_block_matrixCounters__io_counters_cout_1_0.values[0] = GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_vec_cout_0.values[0];}
  { GDA_FSM_pipe0_block_bool_vec_addr__io_k.values[0] = GDA_FSM_pipe0_block_matrixCounters__io_counters_cout_1_0.values[0];}
  val_t T94;
  { T94 = TERNARY_1(T90, GDA_FSM_pipe0_block_bool_vec_addr__io_k.values[0], T93);}
  { T95.values[0] = TERNARY(GDA_FSM_pipe0_block_bool_vec_addr__reset.values[0], 0x0L, T94);}
  { GDA_FSM_pipe0_block_matrix_addr__io_reset.values[0] = GDA_FSM_pipe0_block__io_reset.values[0];}
  val_t T96;
  { T96 = TERNARY(GDA_FSM_pipe0_block_matrix_addr__io_reset.values[0], 0x0L, GDA_FSM_pipe0_block_matrix_addr__mult_reg.values[0]);}
  { GDA_FSM_pipe0_block_matrix_addr__io_in.values[0] = GDA_FSM_pipe0_block_matrixCounters__io_counters_cout_1_0.values[0];}
  { GDA_FSM_pipe0_block_matrix_addr__io_const_dim.values[0] = 0x4L;}
  val_t GDA_FSM_pipe0_block_matrix_addr__mult_block;
  GDA_FSM_pipe0_block_matrix_addr__mult_block = GDA_FSM_pipe0_block_matrix_addr__io_const_dim.values[0] * GDA_FSM_pipe0_block_matrix_addr__io_in.values[0];
  val_t T97;
  { T97 = GDA_FSM_pipe0_block_matrix_addr__io_reset.values[0] ^ 0x1L;}
  val_t T98;
  { T98 = TERNARY_1(T97, GDA_FSM_pipe0_block_matrix_addr__mult_block, T96);}
  { GDA_FSM_pipe0_block_matrix_addr__reset.values[0] = GDA_FSM_pipe0_block__reset.values[0];}
  { T99.values[0] = TERNARY(GDA_FSM_pipe0_block_matrix_addr__reset.values[0], 0x0L, T98);}
  val_t T100;
  { T100 = TERNARY(GDA_FSM_pipe0_block_matrix_addr__io_reset.values[0], 0x0L, GDA_FSM_pipe0_block_matrix_addr__k_reg.values[0]);}
  { GDA_FSM_pipe0_block_matrix_addr__io_k.values[0] = GDA_FSM_pipe0_block_matrixCounters__io_counters_cout_0_0.values[0];}
  val_t T101;
  { T101 = TERNARY_1(T97, GDA_FSM_pipe0_block_matrix_addr__io_k.values[0], T100);}
  { T102.values[0] = TERNARY(GDA_FSM_pipe0_block_matrix_addr__reset.values[0], 0x0L, T101);}
  val_t T103;
  { T103 = GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__currCount.values[0]+0x1L;}
  T103 = T103 & 0xffffL;
  { GDA_FSM_pipe0_block_matrixCounters__io_counters_max_1.values[0] = 0x3L;}
  { GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_max.values[0] = GDA_FSM_pipe0_block_matrixCounters__io_counters_max_1.values[0];}
  val_t GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__hitMax;
  GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__hitMax = GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_max.values[0]<=GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__currCount.values[0];
  val_t T104;
  { T104 = TERNARY(GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__hitMax, 0x0L, T103);}
  { GDA_FSM_pipe0_block_matrixCounters__io_counters_max_0.values[0] = 0x3L;}
  { GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_max.values[0] = GDA_FSM_pipe0_block_matrixCounters__io_counters_max_0.values[0];}
  val_t GDA_FSM_pipe0_block_matrixCounters_ItrCounter__hitMax;
  GDA_FSM_pipe0_block_matrixCounters_ItrCounter__hitMax = GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_max.values[0]<=GDA_FSM_pipe0_block_matrixCounters_ItrCounter__currCount.values[0];
  { GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_done.values[0] = GDA_FSM_pipe0_block_matrixCounters_ItrCounter__hitMax;}
  { GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_en_count.values[0] = GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_done.values[0];}
  val_t T105;
  { T105 = TERNARY_1(GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_en_count.values[0], T104, GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__currCount.values[0]);}
  val_t T106;
  T106 = GDA_FSM_seqFSM__state.values[0] == 0x0L;
  { GDA_FSM_seqFSM__io_complete_reset.values[0] = T106;}
  { GDA_FSM_pipe0_block__io_complete_reset.values[0] = GDA_FSM_seqFSM__io_complete_reset.values[0];}
  { GDA_FSM_pipe0_block_matrixCounters__io_reset.values[0] = GDA_FSM_pipe0_block__io_complete_reset.values[0];}
  { GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_reset.values[0] = GDA_FSM_pipe0_block_matrixCounters__io_reset.values[0];}
  val_t T107;
  { T107 = GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_en_count.values[0] ^ 0x1L;}
  val_t T108;
  { T108 = T107 & GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_reset.values[0];}
  val_t T109;
  { T109 = TERNARY(T108, 0x0L, T105);}
  { GDA_FSM_pipe0_block_matrixCounters__reset.values[0] = GDA_FSM_pipe0_block__reset.values[0];}
  { GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__reset.values[0] = GDA_FSM_pipe0_block_matrixCounters__reset.values[0];}
  { T110.values[0] = TERNARY(GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__reset.values[0], 0x0L, T109);}
  val_t T111;
  { T111 = GDA_FSM_pipe0_block_matrixCounters_ItrCounter__currCount.values[0]+0x1L;}
  T111 = T111 & 0xffffL;
  val_t T112;
  { T112 = TERNARY(GDA_FSM_pipe0_block_matrixCounters_ItrCounter__hitMax, 0x0L, T111);}
  val_t T113;
  T113 = GDA_FSM_pipe0_block_pipe0_FSM__curr_state.values[0] == 0x1L;
  { GDA_FSM_pipe0_block_pipe0_FSM__io_pipe_enabled.values[0] = T113;}
  { GDA_FSM_pipe0_block_matrixCounters__io_en.values[0] = GDA_FSM_pipe0_block_pipe0_FSM__io_pipe_enabled.values[0];}
  { GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_en_count.values[0] = GDA_FSM_pipe0_block_matrixCounters__io_en.values[0];}
  val_t T114;
  { T114 = TERNARY_1(GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_en_count.values[0], T112, GDA_FSM_pipe0_block_matrixCounters_ItrCounter__currCount.values[0]);}
  { GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_reset.values[0] = GDA_FSM_pipe0_block_matrixCounters__io_reset.values[0];}
  val_t T115;
  { T115 = GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_en_count.values[0] ^ 0x1L;}
  val_t T116;
  { T116 = T115 & GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_reset.values[0];}
  val_t T117;
  { T117 = TERNARY(T116, 0x0L, T114);}
  { GDA_FSM_pipe0_block_matrixCounters_ItrCounter__reset.values[0] = GDA_FSM_pipe0_block_matrixCounters__reset.values[0];}
  { T118.values[0] = TERNARY(GDA_FSM_pipe0_block_matrixCounters_ItrCounter__reset.values[0], 0x0L, T117);}
  { GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_done.values[0] = GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__hitMax;}
  { GDA_FSM_pipe0_block_matrixCounters__io_counters_done_1.values[0] = GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_done.values[0];}
  val_t T119;
  { T119 = TERNARY(GDA_FSM_pipe0_block_matrixCounters__io_reset.values[0], 0x0L, GDA_FSM_pipe0_block_matrixCounters__done_complete.values[0]);}
  val_t T120;
  { T120 = GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_en_count.values[0] & GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_done.values[0];}
  val_t T121;
  { T121 = T120 | GDA_FSM_pipe0_block_matrixCounters__done_complete.values[0];}
  val_t T122;
  { T122 = GDA_FSM_pipe0_block_matrixCounters__io_reset.values[0] ^ 0x1L;}
  val_t T123;
  { T123 = TERNARY_1(T122, T121, T119);}
  { T124.values[0] = TERNARY(GDA_FSM_pipe0_block_matrixCounters__reset.values[0], 0x0L, T123);}
  val_t GDA_FSM_pipe0_block_pipe0_FSM__state_wait;
  GDA_FSM_pipe0_block_pipe0_FSM__state_wait = GDA_FSM_pipe0_block_pipe0_FSM__curr_state.values[0] == 0x2L;
  val_t GDA_FSM_pipe0_block_pipe0_FSM__state_en;
  GDA_FSM_pipe0_block_pipe0_FSM__state_en = GDA_FSM_pipe0_block_pipe0_FSM__prev_state.values[0] == 0x1L;
  val_t GDA_FSM_pipe0_block_pipe0_FSM__pipe_pulse;
  { GDA_FSM_pipe0_block_pipe0_FSM__pipe_pulse = GDA_FSM_pipe0_block_pipe0_FSM__state_en & GDA_FSM_pipe0_block_pipe0_FSM__state_wait;}
  { GDA_FSM_pipe0_block_pipe0_FSM__reset.values[0] = GDA_FSM_pipe0_block__reset.values[0];}
  { T125.values[0] = TERNARY(GDA_FSM_pipe0_block_pipe0_FSM__reset.values[0], 0x0L, GDA_FSM_pipe0_block_pipe0_FSM__pipe_pulse);}
  { T126.values[0] = TERNARY(GDA_FSM_pipe0_block_pipe0_FSM__reset.values[0], 0x0L, GDA_FSM_pipe0_block_pipe0_FSM__wait_regs_0.values[0]);}
  { GDA_FSM_pipe0_block_pipe0_FSM__io_en.values[0] = GDA_FSM_pipe0_block__io_pipe_en.values[0];}
  val_t T127;
  T127 = 0x0L == GDA_FSM_pipe0_block_pipe0_FSM__curr_state.values[0];
  val_t T128;
  { T128 = T127 & GDA_FSM_pipe0_block_pipe0_FSM__io_en.values[0];}
  val_t T129;
  { T129 = TERNARY(T128, 0x1L, GDA_FSM_pipe0_block_pipe0_FSM__curr_state.values[0]);}
  { GDA_FSM_pipe0_block_matrixCounters__io_counters_done_0.values[0] = GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_done.values[0];}
  { GDA_FSM_pipe0_block_pipe0_FSM__io_counter_done.values[0] = GDA_FSM_pipe0_block_matrixCounters__io_counters_done_0.values[0];}
  val_t T130;
  T130 = 0x1L == GDA_FSM_pipe0_block_pipe0_FSM__curr_state.values[0];
  val_t T131;
  { T131 = T130 & GDA_FSM_pipe0_block_pipe0_FSM__io_counter_done.values[0];}
  val_t T132;
  { T132 = TERNARY(T131, 0x2L, T129);}
  val_t T133;
  T133 = 0x2L == GDA_FSM_pipe0_block_pipe0_FSM__curr_state.values[0];
  val_t T134;
  { T134 = T133 & GDA_FSM_pipe0_block_pipe0_FSM__wait_done.values[0];}
  val_t T135;
  { T135 = TERNARY(T134, 0x3L, T132);}
  val_t T136;
  T136 = 0x3L == GDA_FSM_pipe0_block_pipe0_FSM__curr_state.values[0];
  val_t T137;
  { T137 = TERNARY(T136, 0x0L, T135);}
  { T138.values[0] = TERNARY(GDA_FSM_pipe0_block_pipe0_FSM__reset.values[0], 0x0L, T137);}
  { T139.values[0] = TERNARY(GDA_FSM_pipe0_block__reset.values[0], 0x0L, GDA_FSM_pipe0_block_pipe0_FSM__io_pipe_enabled.values[0]);}
  { T140.values[0] = TERNARY(GDA_FSM_pipe0_block__reset.values[0], 0x0L, GDA_FSM_pipe0_block__state0_Regs_0.values[0]);}
  val_t T141;
  { T141 = GDA_FSM_pipe0_block_mu_addr__k_reg.values[0] | 0x0L << 16;}
  val_t T142;
  { T142 = GDA_FSM_pipe0_block_mu_addr__mult_reg.values[0]+T141;}
  T142 = T142 & 0xffffffffL;
  { GDA_FSM_pipe0_block_mu_addr__io_out.values[0] = T142;}
  val_t T143;
  { T143 = TERNARY(GDA_FSM_pipe0_block__reset.values[0], 0x0L, GDA_FSM_pipe0_block_mu_addr__io_out.values[0]);}
  { T144.values[0] = T143;}
  T144.values[0] = T144.values[0] & 0xffffL;
  { GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_vec_cout_0.values[0] = GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__currCount.values[0];}
  { GDA_FSM_pipe1_block_sigmaCounters__io_counters_cout_1_0.values[0] = GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_vec_cout_0.values[0];}
  { GDA_FSM_pipe1_block__io_subT_2_addr.values[0] = GDA_FSM_pipe1_block_sigmaCounters__io_counters_cout_1_0.values[0];}
  { GDA_FSM_subT_2_db__io_read_addr_vec_0.values[0] = GDA_FSM_pipe1_block__io_subT_2_addr.values[0];}
  { GDA_FSM_subT_2_db_bram_w2__io_read_addr.values[0] = GDA_FSM_subT_2_db__io_read_addr_vec_0.values[0];}
  { GDA_FSM_pipe0_block_pipe0_datapath__io_output_float.values[0] = GDA_FSM_pipe0_block_pipe0_datapath__sub_reg.values[0];}
  { GDA_FSM_pipe0_block__io_output_float.values[0] = GDA_FSM_pipe0_block_pipe0_datapath__io_output_float.values[0];}
  { GDA_FSM_subT_2_db__io_write_data.values[0] = GDA_FSM_pipe0_block__io_output_float.values[0];}
  { GDA_FSM_subT_2_db_bram_w2__io_write_data.values[0] = GDA_FSM_subT_2_db__io_write_data.values[0];}
  val_t T145;
  T145 = GDA_FSM_subT_2_db__state.values[0] == 0x2L;
  { GDA_FSM_pipe0_block__io_addr_en.values[0] = GDA_FSM_pipe0_block__state0_Regs_1.values[0];}
  { GDA_FSM_subT_2_db__io_write_en.values[0] = GDA_FSM_pipe0_block__io_addr_en.values[0];}
  val_t T146;
  { T146 = GDA_FSM_subT_2_db__io_write_en.values[0] & T145;}
  { GDA_FSM_subT_2_db_bram_w2__io_write_en.values[0] = T146;}
  { GDA_FSM_pipe0_block__io_subT_addr.values[0] = GDA_FSM_pipe0_block__mu_addr_Regs.values[0];}
  { GDA_FSM_subT_2_db__io_write_addr.values[0] = GDA_FSM_pipe0_block__io_subT_addr.values[0];}
  { GDA_FSM_subT_2_db_bram_w2__io_write_addr.values[0] = GDA_FSM_subT_2_db__io_write_addr.values[0];}
  { T147.values[0] = GDA_FSM_subT_2_db_bram_w2__io_write_addr.values[0];}
  T147.values[0] = T147.values[0] & 0x3L;
  { GDA_FSM_subT_2_db_bram_w1__io_read_addr.values[0] = GDA_FSM_subT_2_db__io_read_addr_vec_0.values[0];}
  { GDA_FSM_subT_2_db_bram_w1__io_write_data.values[0] = GDA_FSM_subT_2_db__io_write_data.values[0];}
  val_t T148;
  T148 = GDA_FSM_subT_2_db__state.values[0] == 0x1L;
  val_t T149;
  { T149 = GDA_FSM_subT_2_db__io_write_en.values[0] & T148;}
  { GDA_FSM_subT_2_db_bram_w1__io_write_en.values[0] = T149;}
  { GDA_FSM_subT_2_db_bram_w1__io_write_addr.values[0] = GDA_FSM_subT_2_db__io_write_addr.values[0];}
  { T150.values[0] = GDA_FSM_subT_2_db_bram_w1__io_write_addr.values[0];}
  T150.values[0] = T150.values[0] & 0x3L;
  { GDA_FSM_subT_2_db__reset.values[0] = reset.values[0];}
  { T151.values[0] = TERNARY(GDA_FSM_subT_2_db__reset.values[0], 0x0L, GDA_FSM_subT_2_db__state.values[0]);}
  val_t T152;
  T152 = GDA_FSM_pipe0_block_pipe0_FSM__curr_state.values[0] == 0x3L;
  { GDA_FSM_pipe0_block_pipe0_FSM__io_done.values[0] = T152;}
  { GDA_FSM_pipe0_block__io_done.values[0] = GDA_FSM_pipe0_block_pipe0_FSM__io_done.values[0];}
  val_t T153;
  { T153 = GDA_FSM_pipe0_block__io_done.values[0] | GDA_FSM_seqFSM__io_pipe_en_1.values[0];}
  { GDA_FSM_subT_2_db__io_write_done.values[0] = T153;}
  val_t T154;
  T154 = GDA_FSM_pipe1_block_pipe1_FSM__curr_state.values[0] == 0x3L;
  { GDA_FSM_pipe1_block_pipe1_FSM__io_done.values[0] = T154;}
  { GDA_FSM_pipe1_block__io_done.values[0] = GDA_FSM_pipe1_block_pipe1_FSM__io_done.values[0];}
  val_t T155;
  { T155 = GDA_FSM_pipe1_block__io_done.values[0] | GDA_FSM_seqFSM__io_pipe_en_0.values[0];}
  { GDA_FSM_subT_2_db__io_read_done_vec_0.values[0] = T155;}
  val_t T156;
  { T156 = GDA_FSM_subT_2_db__latch_read_done_vec_0.values[0] | GDA_FSM_subT_2_db__io_read_done_vec_0.values[0];}
  val_t GDA_FSM_subT_2_db__buffering_done;
  { GDA_FSM_subT_2_db__buffering_done = T156 & GDA_FSM_subT_2_db__io_write_done.values[0];}
  val_t T157;
  { T157 = TERNARY(GDA_FSM_subT_2_db__buffering_done, 0x0L, GDA_FSM_subT_2_db__latch_read_done_vec_0.values[0]);}
  val_t T158;
  { T158 = GDA_FSM_subT_2_db__buffering_done ^ 0x1L;}
  val_t T159;
  { T159 = TERNARY_1(T158, T156, T157);}
  { T160.values[0] = TERNARY(GDA_FSM_subT_2_db__reset.values[0], 0x0L, T159);}
  val_t T161;
  T161 = 0x0L == GDA_FSM_subT_2_db__state.values[0];
  val_t T162;
  { T162 = TERNARY(T161, 0x1L, GDA_FSM_subT_2_db__state.values[0]);}
  val_t T163;
  T163 = 0x1L == GDA_FSM_subT_2_db__state.values[0];
  val_t T164;
  { T164 = T163 & GDA_FSM_subT_2_db__buffering_done;}
  val_t T165;
  { T165 = TERNARY(T164, 0x2L, T162);}
  val_t T166;
  T166 = 0x2L == GDA_FSM_subT_2_db__state.values[0];
  val_t T167;
  { T167 = T166 & GDA_FSM_subT_2_db__buffering_done;}
  val_t T168;
  { T168 = TERNARY(T167, 0x1L, T165);}
  { T169.values[0] = TERNARY(GDA_FSM_subT_2_db__reset.values[0], 0x0L, T168);}
  { GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__io_vec_cout_0.values[0] = GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__currCount.values[0];}
  { GDA_FSM_pipe1_block_sigmaCounters__io_counters_cout_0_0.values[0] = GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__io_vec_cout_0.values[0];}
  { GDA_FSM_pipe1_block__io_subT_addr.values[0] = GDA_FSM_pipe1_block_sigmaCounters__io_counters_cout_0_0.values[0];}
  { GDA_FSM_subT_db__io_read_addr_vec_0.values[0] = GDA_FSM_pipe1_block__io_subT_addr.values[0];}
  { GDA_FSM_subT_db_bram_w2__io_read_addr.values[0] = GDA_FSM_subT_db__io_read_addr_vec_0.values[0];}
  { GDA_FSM_subT_db__io_write_data.values[0] = GDA_FSM_pipe0_block__io_output_float.values[0];}
  { GDA_FSM_subT_db_bram_w2__io_write_data.values[0] = GDA_FSM_subT_db__io_write_data.values[0];}
  val_t T170;
  T170 = GDA_FSM_subT_db__state.values[0] == 0x2L;
  { GDA_FSM_subT_db__io_write_en.values[0] = GDA_FSM_pipe0_block__io_addr_en.values[0];}
  val_t T171;
  { T171 = GDA_FSM_subT_db__io_write_en.values[0] & T170;}
  { GDA_FSM_subT_db_bram_w2__io_write_en.values[0] = T171;}
  { GDA_FSM_subT_db__io_write_addr.values[0] = GDA_FSM_pipe0_block__io_subT_addr.values[0];}
  { GDA_FSM_subT_db_bram_w2__io_write_addr.values[0] = GDA_FSM_subT_db__io_write_addr.values[0];}
  { T172.values[0] = GDA_FSM_subT_db_bram_w2__io_write_addr.values[0];}
  T172.values[0] = T172.values[0] & 0x3L;
  { GDA_FSM_subT_db_bram_w1__io_read_addr.values[0] = GDA_FSM_subT_db__io_read_addr_vec_0.values[0];}
  { GDA_FSM_subT_db_bram_w1__io_write_data.values[0] = GDA_FSM_subT_db__io_write_data.values[0];}
  val_t T173;
  T173 = GDA_FSM_subT_db__state.values[0] == 0x1L;
  val_t T174;
  { T174 = GDA_FSM_subT_db__io_write_en.values[0] & T173;}
  { GDA_FSM_subT_db_bram_w1__io_write_en.values[0] = T174;}
  { GDA_FSM_subT_db_bram_w1__io_write_addr.values[0] = GDA_FSM_subT_db__io_write_addr.values[0];}
  { T175.values[0] = GDA_FSM_subT_db_bram_w1__io_write_addr.values[0];}
  T175.values[0] = T175.values[0] & 0x3L;
  { GDA_FSM_subT_db__reset.values[0] = reset.values[0];}
  { T176.values[0] = TERNARY(GDA_FSM_subT_db__reset.values[0], 0x0L, GDA_FSM_subT_db__state.values[0]);}
  val_t T177;
  { T177 = GDA_FSM_pipe0_block__io_done.values[0] | GDA_FSM_seqFSM__io_pipe_en_1.values[0];}
  { GDA_FSM_subT_db__io_write_done.values[0] = T177;}
  val_t T178;
  { T178 = GDA_FSM_pipe1_block__io_done.values[0] | GDA_FSM_seqFSM__io_pipe_en_0.values[0];}
  { GDA_FSM_subT_db__io_read_done_vec_0.values[0] = T178;}
  val_t T179;
  { T179 = GDA_FSM_subT_db__latch_read_done_vec_0.values[0] | GDA_FSM_subT_db__io_read_done_vec_0.values[0];}
  val_t GDA_FSM_subT_db__buffering_done;
  { GDA_FSM_subT_db__buffering_done = T179 & GDA_FSM_subT_db__io_write_done.values[0];}
  val_t T180;
  { T180 = TERNARY(GDA_FSM_subT_db__buffering_done, 0x0L, GDA_FSM_subT_db__latch_read_done_vec_0.values[0]);}
  val_t T181;
  { T181 = GDA_FSM_subT_db__buffering_done ^ 0x1L;}
  val_t T182;
  { T182 = TERNARY_1(T181, T179, T180);}
  { T183.values[0] = TERNARY(GDA_FSM_subT_db__reset.values[0], 0x0L, T182);}
  val_t T184;
  T184 = 0x0L == GDA_FSM_subT_db__state.values[0];
  val_t T185;
  { T185 = TERNARY(T184, 0x1L, GDA_FSM_subT_db__state.values[0]);}
  val_t T186;
  T186 = 0x1L == GDA_FSM_subT_db__state.values[0];
  val_t T187;
  { T187 = T186 & GDA_FSM_subT_db__buffering_done;}
  val_t T188;
  { T188 = TERNARY(T187, 0x2L, T185);}
  val_t T189;
  T189 = 0x2L == GDA_FSM_subT_db__state.values[0];
  val_t T190;
  { T190 = T189 & GDA_FSM_subT_db__buffering_done;}
  val_t T191;
  { T191 = TERNARY(T190, 0x1L, T188);}
  { T192.values[0] = TERNARY(GDA_FSM_subT_db__reset.values[0], 0x0L, T191);}
  { val_t __r = this->__rand_val(); GDA_FSM_subT_2__io_read_addr.values[0] = __r;}
  GDA_FSM_subT_2__io_read_addr.values[0] = GDA_FSM_subT_2__io_read_addr.values[0] & 0xffffL;
  { GDA_FSM_subT_2__io_write_data.values[0] = GDA_FSM_pipe0_block__io_output_float.values[0];}
  { GDA_FSM_subT_2__io_write_en.values[0] = GDA_FSM_pipe0_block__io_addr_en.values[0];}
  { GDA_FSM_subT_2__io_write_addr.values[0] = GDA_FSM_pipe0_block__io_subT_addr.values[0];}
  { T193.values[0] = GDA_FSM_subT_2__io_write_addr.values[0];}
  T193.values[0] = T193.values[0] & 0x3L;
  val_t T194;
  { T194 = GDA_FSM_subT_2__reg_raddr.values[0];}
  T194 = T194 & 0x3L;
  val_t T195;
  { T195 = GDA_FSM_subT_2__bRam_rw.get(T194, 0);}
  { GDA_FSM_subT_2__io_read_out.values[0] = T195;}
  { val_t __r = this->__rand_val(); GDA_FSM_subT__io_read_addr.values[0] = __r;}
  GDA_FSM_subT__io_read_addr.values[0] = GDA_FSM_subT__io_read_addr.values[0] & 0xffffL;
  { GDA_FSM_subT__io_write_data.values[0] = GDA_FSM_pipe0_block__io_output_float.values[0];}
  { GDA_FSM_subT__io_write_en.values[0] = GDA_FSM_pipe0_block__io_addr_en.values[0];}
  { GDA_FSM_subT__io_write_addr.values[0] = GDA_FSM_pipe0_block__io_subT_addr.values[0];}
  { T196.values[0] = GDA_FSM_subT__io_write_addr.values[0];}
  T196.values[0] = T196.values[0] & 0x3L;
  val_t T197;
  { T197 = GDA_FSM_subT__reg_raddr.values[0];}
  T197 = T197 & 0x3L;
  val_t T198;
  { T198 = GDA_FSM_subT__bRam_rw.get(T197, 0);}
  { GDA_FSM_subT__io_read_out.values[0] = T198;}
  { GDA_FSM_seqFSM__io_en.values[0] = GDA_FSM__io_en.values[0];}
  val_t T199;
  T199 = 0x0L == GDA_FSM_seqFSM__state.values[0];
  val_t T200;
  { T200 = T199 & GDA_FSM_seqFSM__io_en.values[0];}
  val_t T201;
  { T201 = TERNARY(T200, 0x1L, GDA_FSM_seqFSM__state.values[0]);}
  val_t T202;
  T202 = 0x1L == GDA_FSM_seqFSM__state.values[0];
  val_t T203;
  { T203 = TERNARY(T202, 0x2L, T201);}
  val_t T204;
  { T204 = GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_en_count.values[0] & GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_done.values[0];}
  val_t T205;
  { T205 = T204 | GDA_FSM_pipe0_block_matrixCounters__done_complete.values[0];}
  { GDA_FSM_pipe0_block_matrixCounters__io_done_complete.values[0] = T205;}
  { GDA_FSM_pipe0_block__io_done_complete.values[0] = GDA_FSM_pipe0_block_matrixCounters__io_done_complete.values[0];}
  { GDA_FSM_seqFSM__io_complete_done.values[0] = GDA_FSM_pipe0_block__io_done_complete.values[0];}
  val_t T206;
  { T206 = TERNARY(GDA_FSM_seqFSM__io_complete_done.values[0], 0x4L, 0x1L);}
  { GDA_FSM_seqFSM__io_pipe_done_1.values[0] = GDA_FSM_pipe1_block__io_done.values[0];}
  val_t T207;
  T207 = 0x3L == GDA_FSM_seqFSM__state.values[0];
  val_t T208;
  { T208 = T207 & GDA_FSM_seqFSM__io_pipe_done_1.values[0];}
  val_t T209;
  { T209 = TERNARY_1(T208, T206, T203);}
  val_t T210;
  T210 = 0x4L == GDA_FSM_seqFSM__state.values[0];
  val_t T211;
  { T211 = TERNARY(T210, 0x0L, T209);}
  { GDA_FSM_seqFSM__io_pipe_done_0.values[0] = GDA_FSM_pipe0_block__io_done.values[0];}
  val_t T212;
  T212 = GDA_FSM_seqFSM__state.values[0] == 0x2L;
  val_t T213;
  { T213 = T212 & GDA_FSM_seqFSM__io_pipe_done_0.values[0];}
  val_t T214;
  { T214 = TERNARY(T213, 0x3L, T211);}
  { GDA_FSM_seqFSM__reset.values[0] = reset.values[0];}
  { T215.values[0] = TERNARY(GDA_FSM_seqFSM__reset.values[0], 0x0L, T214);}
  val_t T216;
  { T216 = GDA_FSM_pipe0_block_mu_addr__io_out.values[0];}
  T216 = T216 & 0xffffL;
  { GDA_FSM_pipe0_block__io_mu_addr.values[0] = T216;}
  { GDA_FSM_mu1__io_read_addr.values[0] = GDA_FSM_pipe0_block__io_mu_addr.values[0];}
  val_t T217;
  { T217 = GDA_FSM__io_data_in.values[0]+0x2L;}
  T217 = T217 & 0xffffL;
  { GDA_FSM_mu1__io_write_data.values[0] = T217;}
  { GDA_FSM_mu1__io_write_en.values[0] = GDA_FSM_seqFSM__io_complete_reset.values[0];}
  { GDA_FSM_mu1__io_write_addr.values[0] = GDA_FSM__io_data_in.values[0];}
  { T218.values[0] = GDA_FSM_mu1__io_write_addr.values[0];}
  T218.values[0] = T218.values[0] & 0x3L;
  { GDA_FSM_mu0__io_read_addr.values[0] = GDA_FSM_pipe0_block__io_mu_addr.values[0];}
  { GDA_FSM_mu0__io_write_data.values[0] = GDA_FSM__io_data_in.values[0];}
  { GDA_FSM_mu0__io_write_en.values[0] = GDA_FSM_seqFSM__io_complete_reset.values[0];}
  { GDA_FSM_mu0__io_write_addr.values[0] = GDA_FSM__io_data_in.values[0];}
  { T219.values[0] = GDA_FSM_mu0__io_write_addr.values[0];}
  T219.values[0] = T219.values[0] & 0x3L;
  val_t T220;
  { T220 = GDA_FSM_pipe0_block_bool_vec_addr__k_reg.values[0] | 0x0L << 16;}
  val_t T221;
  { T221 = GDA_FSM_pipe0_block_bool_vec_addr__mult_reg.values[0]+T220;}
  T221 = T221 & 0xffffffffL;
  { GDA_FSM_pipe0_block_bool_vec_addr__io_out.values[0] = T221;}
  val_t T222;
  { T222 = GDA_FSM_pipe0_block_bool_vec_addr__io_out.values[0];}
  T222 = T222 & 0xffffL;
  { GDA_FSM_pipe0_block__io_y_addr.values[0] = T222;}
  { GDA_FSM_mean_y_vec__io_read_addr.values[0] = GDA_FSM_pipe0_block__io_y_addr.values[0];}
  { GDA_FSM_mean_y_vec__io_write_data.values[0] = 0x1L;}
  { GDA_FSM_mean_y_vec__io_write_en.values[0] = GDA_FSM_seqFSM__io_complete_reset.values[0];}
  { GDA_FSM_mean_y_vec__io_write_addr.values[0] = GDA_FSM__io_data_in.values[0];}
  { T223.values[0] = GDA_FSM_mean_y_vec__io_write_addr.values[0];}
  T223.values[0] = T223.values[0] & 0x3L;
  val_t T224;
  { T224 = GDA_FSM_pipe0_block_matrix_addr__k_reg.values[0] | 0x0L << 16;}
  val_t T225;
  { T225 = GDA_FSM_pipe0_block_matrix_addr__mult_reg.values[0]+T224;}
  T225 = T225 & 0xffffffffL;
  { GDA_FSM_pipe0_block_matrix_addr__io_out.values[0] = T225;}
  val_t T226;
  { T226 = GDA_FSM_pipe0_block_matrix_addr__io_out.values[0];}
  T226 = T226 & 0xffffL;
  { GDA_FSM_pipe0_block__io_x_addr.values[0] = T226;}
  { GDA_FSM_x_matrix__io_read_addr.values[0] = GDA_FSM_pipe0_block__io_x_addr.values[0];}
  val_t T227;
  { T227 = GDA_FSM__io_data_inx.values[0]+0x6L;}
  T227 = T227 & 0xffffL;
  { GDA_FSM_x_matrix__io_write_data.values[0] = T227;}
  { GDA_FSM_x_matrix__io_write_en.values[0] = GDA_FSM_seqFSM__io_complete_reset.values[0];}
  { GDA_FSM_x_matrix__io_write_addr.values[0] = GDA_FSM__io_data_inx.values[0];}
  { T228.values[0] = GDA_FSM_x_matrix__io_write_addr.values[0];}
  T228.values[0] = T228.values[0] & 0xfL;
  val_t T229;
  T229 = GDA_FSM_seqFSM__state.values[0] == 0x4L;
  { GDA_FSM_seqFSM__io_done.values[0] = T229;}
  { GDA_FSM__io_done.values[0] = GDA_FSM_seqFSM__io_done.values[0];}
  { GDA_FSM__io_output.values[0] = GDA_FSM_sigmaM__io_read_out.values[0];}
  { GDA_FSM__io_y.values[0] = GDA_FSM_pipe1_block__io_sigma_addr_en.values[0];}
  { GDA_FSM__io_rd.values[0] = GDA_FSM_pipe1_block__io_sigma_write_addr.values[0];}
  { GDA_FSM__io_wdata.values[0] = GDA_FSM_pipe1_block__io_sigma_write_data.values[0];}
  { GDA_FSM__io_state1.values[0] = GDA_FSM_seqFSM__io_pipe_en_1.values[0];}
  { GDA_FSM__io_state0.values[0] = GDA_FSM_seqFSM__io_pipe_en_0.values[0];}
}


void GDA_FSM_t::clock_hi ( dat_t<1> reset ) {
  dat_t<16> GDA_FSM_sigmaM__reg_raddr__shadow = GDA_FSM_sigmaM__io_read_addr;
  { if (GDA_FSM_sigmaM__io_write_en.values[0]) GDA_FSM_sigmaM__bRam_rw.put(T3.values[0], 0, GDA_FSM_sigmaM__io_write_data.values[0]);}
  dat_t<16> GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__currCount__shadow = T11;
  dat_t<16> GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__currCount__shadow = T19;
  dat_t<1> GDA_FSM_pipe1_block_sigmaCounters__done_complete__shadow = T25;
  dat_t<16> GDA_FSM_pipe1_block_mtxCounter__currCount__shadow = T32;
  dat_t<2> GDA_FSM_pipe1_block_pipe1_FSM__prev_state__shadow = GDA_FSM_pipe1_block_pipe1_FSM__curr_state;
  dat_t<1> GDA_FSM_pipe1_block_pipe1_FSM__wait_regs_0__shadow = T33;
  dat_t<1> GDA_FSM_pipe1_block_pipe1_FSM__wait_done__shadow = T34;
  dat_t<2> GDA_FSM_pipe1_block_pipe1_FSM__curr_state__shadow = T49;
  dat_t<1> GDA_FSM_pipe1_block__state1_Regs_1__shadow = T50;
  dat_t<16> GDA_FSM_pipe1_block__writeaddr_reg__shadow = T51;
  dat_t<16> GDA_FSM_pipe1_block__product_reg__shadow = T66;
  dat_t<1> GDA_FSM_pipe1_block__state1_Regs_0__shadow = T67;
  dat_t<16> GDA_FSM_pipe0_block_pipe0_datapath__sub_reg__shadow = T81;
  dat_t<32> GDA_FSM_pipe0_block_mu_addr__mult_reg__shadow = T85;
  dat_t<16> GDA_FSM_pipe0_block_mu_addr__k_reg__shadow = T88;
  dat_t<32> GDA_FSM_pipe0_block_bool_vec_addr__mult_reg__shadow = T92;
  dat_t<16> GDA_FSM_pipe0_block_bool_vec_addr__k_reg__shadow = T95;
  dat_t<32> GDA_FSM_pipe0_block_matrix_addr__mult_reg__shadow = T99;
  dat_t<16> GDA_FSM_pipe0_block_matrix_addr__k_reg__shadow = T102;
  dat_t<16> GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__currCount__shadow = T110;
  dat_t<16> GDA_FSM_pipe0_block_matrixCounters_ItrCounter__currCount__shadow = T118;
  dat_t<1> GDA_FSM_pipe0_block_matrixCounters__done_complete__shadow = T124;
  dat_t<2> GDA_FSM_pipe0_block_pipe0_FSM__prev_state__shadow = GDA_FSM_pipe0_block_pipe0_FSM__curr_state;
  dat_t<1> GDA_FSM_pipe0_block_pipe0_FSM__wait_regs_0__shadow = T125;
  dat_t<1> GDA_FSM_pipe0_block_pipe0_FSM__wait_done__shadow = T126;
  dat_t<2> GDA_FSM_pipe0_block_pipe0_FSM__curr_state__shadow = T138;
  dat_t<1> GDA_FSM_pipe0_block__state0_Regs_0__shadow = T139;
  dat_t<1> GDA_FSM_pipe0_block__state0_Regs_1__shadow = T140;
  dat_t<16> GDA_FSM_pipe0_block__mu_addr_Regs__shadow = T144;
  dat_t<16> GDA_FSM_subT_2_db_bram_w2__reg_raddr__shadow = GDA_FSM_subT_2_db_bram_w2__io_read_addr;
  { if (GDA_FSM_subT_2_db_bram_w2__io_write_en.values[0]) GDA_FSM_subT_2_db_bram_w2__bRam_rw.put(T147.values[0], 0, GDA_FSM_subT_2_db_bram_w2__io_write_data.values[0]);}
  dat_t<16> GDA_FSM_subT_2_db_bram_w1__reg_raddr__shadow = GDA_FSM_subT_2_db_bram_w1__io_read_addr;
  { if (GDA_FSM_subT_2_db_bram_w1__io_write_en.values[0]) GDA_FSM_subT_2_db_bram_w1__bRam_rw.put(T150.values[0], 0, GDA_FSM_subT_2_db_bram_w1__io_write_data.values[0]);}
  dat_t<2> GDA_FSM_subT_2_db__state_read_reg__shadow = T151;
  dat_t<1> GDA_FSM_subT_2_db__latch_read_done_vec_0__shadow = T160;
  dat_t<2> GDA_FSM_subT_2_db__state__shadow = T169;
  dat_t<16> GDA_FSM_subT_db_bram_w2__reg_raddr__shadow = GDA_FSM_subT_db_bram_w2__io_read_addr;
  { if (GDA_FSM_subT_db_bram_w2__io_write_en.values[0]) GDA_FSM_subT_db_bram_w2__bRam_rw.put(T172.values[0], 0, GDA_FSM_subT_db_bram_w2__io_write_data.values[0]);}
  dat_t<16> GDA_FSM_subT_db_bram_w1__reg_raddr__shadow = GDA_FSM_subT_db_bram_w1__io_read_addr;
  { if (GDA_FSM_subT_db_bram_w1__io_write_en.values[0]) GDA_FSM_subT_db_bram_w1__bRam_rw.put(T175.values[0], 0, GDA_FSM_subT_db_bram_w1__io_write_data.values[0]);}
  dat_t<2> GDA_FSM_subT_db__state_read_reg__shadow = T176;
  dat_t<1> GDA_FSM_subT_db__latch_read_done_vec_0__shadow = T183;
  dat_t<2> GDA_FSM_subT_db__state__shadow = T192;
  dat_t<16> GDA_FSM_subT_2__reg_raddr__shadow = GDA_FSM_subT_2__io_read_addr;
  { if (GDA_FSM_subT_2__io_write_en.values[0]) GDA_FSM_subT_2__bRam_rw.put(T193.values[0], 0, GDA_FSM_subT_2__io_write_data.values[0]);}
  dat_t<16> GDA_FSM_subT__reg_raddr__shadow = GDA_FSM_subT__io_read_addr;
  { if (GDA_FSM_subT__io_write_en.values[0]) GDA_FSM_subT__bRam_rw.put(T196.values[0], 0, GDA_FSM_subT__io_write_data.values[0]);}
  dat_t<3> GDA_FSM_seqFSM__state__shadow = T215;
  dat_t<16> GDA_FSM_mu1__reg_raddr__shadow = GDA_FSM_mu1__io_read_addr;
  { if (GDA_FSM_mu1__io_write_en.values[0]) GDA_FSM_mu1__bRam_rw.put(T218.values[0], 0, GDA_FSM_mu1__io_write_data.values[0]);}
  dat_t<16> GDA_FSM_mu0__reg_raddr__shadow = GDA_FSM_mu0__io_read_addr;
  { if (GDA_FSM_mu0__io_write_en.values[0]) GDA_FSM_mu0__bRam_rw.put(T219.values[0], 0, GDA_FSM_mu0__io_write_data.values[0]);}
  dat_t<16> GDA_FSM_mean_y_vec__reg_raddr__shadow = GDA_FSM_mean_y_vec__io_read_addr;
  { if (GDA_FSM_mean_y_vec__io_write_en.values[0]) GDA_FSM_mean_y_vec__bRam_rw.put(T223.values[0], 0, GDA_FSM_mean_y_vec__io_write_data.values[0]);}
  dat_t<16> GDA_FSM_x_matrix__reg_raddr__shadow = GDA_FSM_x_matrix__io_read_addr;
  { if (GDA_FSM_x_matrix__io_write_en.values[0]) GDA_FSM_x_matrix__bRam_rw.put(T228.values[0], 0, GDA_FSM_x_matrix__io_write_data.values[0]);}
  GDA_FSM_sigmaM__reg_raddr = GDA_FSM_sigmaM__io_read_addr;
  GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__currCount = T11;
  GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__currCount = T19;
  GDA_FSM_pipe1_block_sigmaCounters__done_complete = T25;
  GDA_FSM_pipe1_block_mtxCounter__currCount = T32;
  GDA_FSM_pipe1_block_pipe1_FSM__prev_state = GDA_FSM_pipe1_block_pipe1_FSM__prev_state__shadow;
  GDA_FSM_pipe1_block_pipe1_FSM__wait_regs_0 = T33;
  GDA_FSM_pipe1_block_pipe1_FSM__wait_done = T34;
  GDA_FSM_pipe1_block_pipe1_FSM__curr_state = T49;
  GDA_FSM_pipe1_block__state1_Regs_1 = T50;
  GDA_FSM_pipe1_block__writeaddr_reg = T51;
  GDA_FSM_pipe1_block__product_reg = T66;
  GDA_FSM_pipe1_block__state1_Regs_0 = T67;
  GDA_FSM_pipe0_block_pipe0_datapath__sub_reg = T81;
  GDA_FSM_pipe0_block_mu_addr__mult_reg = T85;
  GDA_FSM_pipe0_block_mu_addr__k_reg = T88;
  GDA_FSM_pipe0_block_bool_vec_addr__mult_reg = T92;
  GDA_FSM_pipe0_block_bool_vec_addr__k_reg = T95;
  GDA_FSM_pipe0_block_matrix_addr__mult_reg = T99;
  GDA_FSM_pipe0_block_matrix_addr__k_reg = T102;
  GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__currCount = T110;
  GDA_FSM_pipe0_block_matrixCounters_ItrCounter__currCount = T118;
  GDA_FSM_pipe0_block_matrixCounters__done_complete = T124;
  GDA_FSM_pipe0_block_pipe0_FSM__prev_state = GDA_FSM_pipe0_block_pipe0_FSM__prev_state__shadow;
  GDA_FSM_pipe0_block_pipe0_FSM__wait_regs_0 = T125;
  GDA_FSM_pipe0_block_pipe0_FSM__wait_done = T126;
  GDA_FSM_pipe0_block_pipe0_FSM__curr_state = T138;
  GDA_FSM_pipe0_block__state0_Regs_0 = T139;
  GDA_FSM_pipe0_block__state0_Regs_1 = T140;
  GDA_FSM_pipe0_block__mu_addr_Regs = T144;
  GDA_FSM_subT_2_db_bram_w2__reg_raddr = GDA_FSM_subT_2_db_bram_w2__io_read_addr;
  GDA_FSM_subT_2_db_bram_w1__reg_raddr = GDA_FSM_subT_2_db_bram_w1__io_read_addr;
  GDA_FSM_subT_2_db__state_read_reg = T151;
  GDA_FSM_subT_2_db__latch_read_done_vec_0 = T160;
  GDA_FSM_subT_2_db__state = T169;
  GDA_FSM_subT_db_bram_w2__reg_raddr = GDA_FSM_subT_db_bram_w2__io_read_addr;
  GDA_FSM_subT_db_bram_w1__reg_raddr = GDA_FSM_subT_db_bram_w1__io_read_addr;
  GDA_FSM_subT_db__state_read_reg = T176;
  GDA_FSM_subT_db__latch_read_done_vec_0 = T183;
  GDA_FSM_subT_db__state = T192;
  GDA_FSM_subT_2__reg_raddr = GDA_FSM_subT_2__io_read_addr;
  GDA_FSM_subT__reg_raddr = GDA_FSM_subT__io_read_addr;
  GDA_FSM_seqFSM__state = T215;
  GDA_FSM_mu1__reg_raddr = GDA_FSM_mu1__io_read_addr;
  GDA_FSM_mu0__reg_raddr = GDA_FSM_mu0__io_read_addr;
  GDA_FSM_mean_y_vec__reg_raddr = GDA_FSM_mean_y_vec__io_read_addr;
  GDA_FSM_x_matrix__reg_raddr = GDA_FSM_x_matrix__io_read_addr;
}


void GDA_FSM_api_t::init_sim_data (  ) {
  sim_data.inputs.clear();
  sim_data.outputs.clear();
  sim_data.signals.clear();
  GDA_FSM_t* mod = dynamic_cast<GDA_FSM_t*>(module);
  assert(mod);
  sim_data.inputs.push_back(new dat_api<1>(&mod->GDA_FSM__io_en));
  sim_data.inputs.push_back(new dat_api<16>(&mod->GDA_FSM__io_data_in));
  sim_data.inputs.push_back(new dat_api<16>(&mod->GDA_FSM__io_data_inx));
  sim_data.outputs.push_back(new dat_api<1>(&mod->GDA_FSM__io_done));
  sim_data.outputs.push_back(new dat_api<16>(&mod->GDA_FSM__io_output));
  sim_data.outputs.push_back(new dat_api<1>(&mod->GDA_FSM__io_y));
  sim_data.outputs.push_back(new dat_api<16>(&mod->GDA_FSM__io_rd));
  sim_data.outputs.push_back(new dat_api<16>(&mod->GDA_FSM__io_wdata));
  sim_data.outputs.push_back(new dat_api<1>(&mod->GDA_FSM__io_state1));
  sim_data.outputs.push_back(new dat_api<1>(&mod->GDA_FSM__io_state0));
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block_mtxCounter__io_vec_cout_0));
  sim_data.signal_map["GDA_FSM.pipe1_block.mtxCounter.io_vec_cout_0"] = 0;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block__io_sigma_read_addr));
  sim_data.signal_map["GDA_FSM.pipe1_block.io_sigma_read_addr"] = 1;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_sigmaM__io_read_addr));
  sim_data.signal_map["GDA_FSM.sigmaM.io_read_addr"] = 2;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_sigmaM__reg_raddr));
  sim_data.signal_map["GDA_FSM.sigmaM.reg_raddr"] = 3;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_sigmaM__io_read_out));
  sim_data.signal_map["GDA_FSM.sigmaM.io_read_out"] = 4;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block__io_sigma_read_out));
  sim_data.signal_map["GDA_FSM.pipe1_block.io_sigma_read_out"] = 5;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block__io_sigma_write_data));
  sim_data.signal_map["GDA_FSM.pipe1_block.io_sigma_write_data"] = 6;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_sigmaM__io_write_data));
  sim_data.signal_map["GDA_FSM.sigmaM.io_write_data"] = 7;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block__io_sigma_addr_en));
  sim_data.signal_map["GDA_FSM.pipe1_block.io_sigma_addr_en"] = 8;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_sigmaM__io_write_en));
  sim_data.signal_map["GDA_FSM.sigmaM.io_write_en"] = 9;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block__io_sigma_write_addr));
  sim_data.signal_map["GDA_FSM.pipe1_block.io_sigma_write_addr"] = 10;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_sigmaM__io_write_addr));
  sim_data.signal_map["GDA_FSM.sigmaM.io_write_addr"] = 11;
  std::string GDA_FSM_sigmaM__bRam_rw_path = "GDA_FSM.sigmaM.bRam_rw";
  for (size_t i = 0 ; i < 16 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_sigmaM__bRam_rw.contents[i]));
    sim_data.signal_map[GDA_FSM_sigmaM__bRam_rw_path+"["+itos(i,false)+"]"] = 12+i;
  }
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block_sigmaCounters__io_counters_max_1));
  sim_data.signal_map["GDA_FSM.pipe1_block.sigmaCounters.io_counters_max_1"] = 28;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_max));
  sim_data.signal_map["GDA_FSM.pipe1_block.sigmaCounters.ItrCounter_1.io_max"] = 29;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block_sigmaCounters__io_counters_max_0));
  sim_data.signal_map["GDA_FSM.pipe1_block.sigmaCounters.io_counters_max_0"] = 30;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__io_max));
  sim_data.signal_map["GDA_FSM.pipe1_block.sigmaCounters.ItrCounter.io_max"] = 31;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__io_done));
  sim_data.signal_map["GDA_FSM.pipe1_block.sigmaCounters.ItrCounter.io_done"] = 32;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_en_count));
  sim_data.signal_map["GDA_FSM.pipe1_block.sigmaCounters.ItrCounter_1.io_en_count"] = 33;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_seqFSM__io_state_reset));
  sim_data.signal_map["GDA_FSM.seqFSM.io_state_reset"] = 34;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block__io_reset));
  sim_data.signal_map["GDA_FSM.pipe1_block.io_reset"] = 35;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block_sigmaCounters__io_reset));
  sim_data.signal_map["GDA_FSM.pipe1_block.sigmaCounters.io_reset"] = 36;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_reset));
  sim_data.signal_map["GDA_FSM.pipe1_block.sigmaCounters.ItrCounter_1.io_reset"] = 37;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block__reset));
  sim_data.signal_map["GDA_FSM.pipe1_block.reset"] = 38;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block_sigmaCounters__reset));
  sim_data.signal_map["GDA_FSM.pipe1_block.sigmaCounters.reset"] = 39;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__reset));
  sim_data.signal_map["GDA_FSM.pipe1_block.sigmaCounters.ItrCounter_1.reset"] = 40;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__currCount));
  sim_data.signal_map["GDA_FSM.pipe1_block.sigmaCounters.ItrCounter_1.currCount"] = 41;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block_pipe1_FSM__io_pipe_enabled));
  sim_data.signal_map["GDA_FSM.pipe1_block.pipe1_FSM.io_pipe_enabled"] = 42;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block_sigmaCounters__io_en));
  sim_data.signal_map["GDA_FSM.pipe1_block.sigmaCounters.io_en"] = 43;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__io_en_count));
  sim_data.signal_map["GDA_FSM.pipe1_block.sigmaCounters.ItrCounter.io_en_count"] = 44;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__io_reset));
  sim_data.signal_map["GDA_FSM.pipe1_block.sigmaCounters.ItrCounter.io_reset"] = 45;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__reset));
  sim_data.signal_map["GDA_FSM.pipe1_block.sigmaCounters.ItrCounter.reset"] = 46;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__currCount));
  sim_data.signal_map["GDA_FSM.pipe1_block.sigmaCounters.ItrCounter.currCount"] = 47;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_done));
  sim_data.signal_map["GDA_FSM.pipe1_block.sigmaCounters.ItrCounter_1.io_done"] = 48;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block_sigmaCounters__io_counters_done_1));
  sim_data.signal_map["GDA_FSM.pipe1_block.sigmaCounters.io_counters_done_1"] = 49;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block_sigmaCounters__io_counters_done_0));
  sim_data.signal_map["GDA_FSM.pipe1_block.sigmaCounters.io_counters_done_0"] = 50;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block_sigmaCounters__done_complete));
  sim_data.signal_map["GDA_FSM.pipe1_block.sigmaCounters.done_complete"] = 51;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block_mtxCounter__io_max));
  sim_data.signal_map["GDA_FSM.pipe1_block.mtxCounter.io_max"] = 52;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block_mtxCounter__io_en_count));
  sim_data.signal_map["GDA_FSM.pipe1_block.mtxCounter.io_en_count"] = 53;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block_mtxCounter__io_reset));
  sim_data.signal_map["GDA_FSM.pipe1_block.mtxCounter.io_reset"] = 54;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block_mtxCounter__reset));
  sim_data.signal_map["GDA_FSM.pipe1_block.mtxCounter.reset"] = 55;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block_mtxCounter__currCount));
  sim_data.signal_map["GDA_FSM.pipe1_block.mtxCounter.currCount"] = 56;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block_mtxCounter__io_done));
  sim_data.signal_map["GDA_FSM.pipe1_block.mtxCounter.io_done"] = 57;
  sim_data.signals.push_back(new dat_api<2>(&mod->GDA_FSM_pipe1_block_pipe1_FSM__prev_state));
  sim_data.signal_map["GDA_FSM.pipe1_block.pipe1_FSM.prev_state"] = 58;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block_pipe1_FSM__reset));
  sim_data.signal_map["GDA_FSM.pipe1_block.pipe1_FSM.reset"] = 59;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block_pipe1_FSM__wait_regs_0));
  sim_data.signal_map["GDA_FSM.pipe1_block.pipe1_FSM.wait_regs_0"] = 60;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block_pipe1_FSM__wait_done));
  sim_data.signal_map["GDA_FSM.pipe1_block.pipe1_FSM.wait_done"] = 61;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_seqFSM__io_pipe_en_1));
  sim_data.signal_map["GDA_FSM.seqFSM.io_pipe_en_1"] = 62;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block__io_pipe_en));
  sim_data.signal_map["GDA_FSM.pipe1_block.io_pipe_en"] = 63;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block_pipe1_FSM__io_en));
  sim_data.signal_map["GDA_FSM.pipe1_block.pipe1_FSM.io_en"] = 64;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block_sigmaCounters__io_done_complete));
  sim_data.signal_map["GDA_FSM.pipe1_block.sigmaCounters.io_done_complete"] = 65;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block_pipe1_FSM__io_counter_done));
  sim_data.signal_map["GDA_FSM.pipe1_block.pipe1_FSM.io_counter_done"] = 66;
  sim_data.signals.push_back(new dat_api<2>(&mod->GDA_FSM_pipe1_block_pipe1_FSM__curr_state));
  sim_data.signal_map["GDA_FSM.pipe1_block.pipe1_FSM.curr_state"] = 67;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block__state1_Regs_1));
  sim_data.signal_map["GDA_FSM.pipe1_block.state1_Regs_1"] = 68;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block__writeaddr_reg));
  sim_data.signal_map["GDA_FSM.pipe1_block.writeaddr_reg"] = 69;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_2_db_bram_w1__io_read_out));
  sim_data.signal_map["GDA_FSM.subT_2_db.bram_w1.io_read_out"] = 70;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_2_db_bram_w2__io_read_out));
  sim_data.signal_map["GDA_FSM.subT_2_db.bram_w2.io_read_out"] = 71;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_2_db__io_read_out));
  sim_data.signal_map["GDA_FSM.subT_2_db.io_read_out"] = 72;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block__io_subT_2_out));
  sim_data.signal_map["GDA_FSM.pipe1_block.io_subT_2_out"] = 73;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_db_bram_w1__io_read_out));
  sim_data.signal_map["GDA_FSM.subT_db.bram_w1.io_read_out"] = 74;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_db_bram_w2__io_read_out));
  sim_data.signal_map["GDA_FSM.subT_db.bram_w2.io_read_out"] = 75;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_db__io_read_out));
  sim_data.signal_map["GDA_FSM.subT_db.io_read_out"] = 76;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block__io_subT_out));
  sim_data.signal_map["GDA_FSM.pipe1_block.io_subT_out"] = 77;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block__product_reg));
  sim_data.signal_map["GDA_FSM.pipe1_block.product_reg"] = 78;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block__io_b));
  sim_data.signal_map["GDA_FSM.pipe1_block.io_b"] = 79;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block__state1_Regs_0));
  sim_data.signal_map["GDA_FSM.pipe1_block.state1_Regs_0"] = 80;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block__io_reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.io_reset"] = 81;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_pipe0_datapath__io_reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_datapath.io_reset"] = 82;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_mu0__io_read_out));
  sim_data.signal_map["GDA_FSM.mu0.io_read_out"] = 83;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block__io_mu0_out));
  sim_data.signal_map["GDA_FSM.pipe0_block.io_mu0_out"] = 84;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_pipe0_datapath__io_mu0));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_datapath.io_mu0"] = 85;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_mu1__io_read_out));
  sim_data.signal_map["GDA_FSM.mu1.io_read_out"] = 86;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block__io_mu1_out));
  sim_data.signal_map["GDA_FSM.pipe0_block.io_mu1_out"] = 87;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_pipe0_datapath__io_mu1));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_datapath.io_mu1"] = 88;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_mean_y_vec__io_read_out));
  sim_data.signal_map["GDA_FSM.mean_y_vec.io_read_out"] = 89;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block__io_y_out));
  sim_data.signal_map["GDA_FSM.pipe0_block.io_y_out"] = 90;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_pipe0_datapath__io_y));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_datapath.io_y"] = 91;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_x_matrix__io_read_out));
  sim_data.signal_map["GDA_FSM.x_matrix.io_read_out"] = 92;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block__io_x_out));
  sim_data.signal_map["GDA_FSM.pipe0_block.io_x_out"] = 93;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_pipe0_datapath__io_x));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_datapath.io_x"] = 94;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_seqFSM__io_pipe_en_0));
  sim_data.signal_map["GDA_FSM.seqFSM.io_pipe_en_0"] = 95;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block__io_pipe_en));
  sim_data.signal_map["GDA_FSM.pipe0_block.io_pipe_en"] = 96;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_pipe0_datapath__io_en));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_datapath.io_en"] = 97;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block__reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.reset"] = 98;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_pipe0_datapath__reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_datapath.reset"] = 99;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_pipe0_datapath__sub_reg));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_datapath.sub_reg"] = 100;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_mu_addr__io_reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.mu_addr.io_reset"] = 101;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_mu_addr__io_in));
  sim_data.signal_map["GDA_FSM.pipe0_block.mu_addr.io_in"] = 102;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_mu_addr__io_const_dim));
  sim_data.signal_map["GDA_FSM.pipe0_block.mu_addr.io_const_dim"] = 103;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_mu_addr__reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.mu_addr.reset"] = 104;
  sim_data.signals.push_back(new dat_api<32>(&mod->GDA_FSM_pipe0_block_mu_addr__mult_reg));
  sim_data.signal_map["GDA_FSM.pipe0_block.mu_addr.mult_reg"] = 105;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_vec_cout_0));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.ItrCounter.io_vec_cout_0"] = 106;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_matrixCounters__io_counters_cout_0_0));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.io_counters_cout_0_0"] = 107;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_mu_addr__io_k));
  sim_data.signal_map["GDA_FSM.pipe0_block.mu_addr.io_k"] = 108;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_mu_addr__k_reg));
  sim_data.signal_map["GDA_FSM.pipe0_block.mu_addr.k_reg"] = 109;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_bool_vec_addr__io_reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.bool_vec_addr.io_reset"] = 110;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_bool_vec_addr__io_in));
  sim_data.signal_map["GDA_FSM.pipe0_block.bool_vec_addr.io_in"] = 111;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_bool_vec_addr__io_const_dim));
  sim_data.signal_map["GDA_FSM.pipe0_block.bool_vec_addr.io_const_dim"] = 112;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_bool_vec_addr__reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.bool_vec_addr.reset"] = 113;
  sim_data.signals.push_back(new dat_api<32>(&mod->GDA_FSM_pipe0_block_bool_vec_addr__mult_reg));
  sim_data.signal_map["GDA_FSM.pipe0_block.bool_vec_addr.mult_reg"] = 114;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_vec_cout_0));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.ItrCounter_1.io_vec_cout_0"] = 115;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_matrixCounters__io_counters_cout_1_0));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.io_counters_cout_1_0"] = 116;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_bool_vec_addr__io_k));
  sim_data.signal_map["GDA_FSM.pipe0_block.bool_vec_addr.io_k"] = 117;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_bool_vec_addr__k_reg));
  sim_data.signal_map["GDA_FSM.pipe0_block.bool_vec_addr.k_reg"] = 118;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrix_addr__io_reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrix_addr.io_reset"] = 119;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_matrix_addr__io_in));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrix_addr.io_in"] = 120;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_matrix_addr__io_const_dim));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrix_addr.io_const_dim"] = 121;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrix_addr__reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrix_addr.reset"] = 122;
  sim_data.signals.push_back(new dat_api<32>(&mod->GDA_FSM_pipe0_block_matrix_addr__mult_reg));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrix_addr.mult_reg"] = 123;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_matrix_addr__io_k));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrix_addr.io_k"] = 124;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_matrix_addr__k_reg));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrix_addr.k_reg"] = 125;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_matrixCounters__io_counters_max_1));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.io_counters_max_1"] = 126;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_max));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.ItrCounter_1.io_max"] = 127;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_matrixCounters__io_counters_max_0));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.io_counters_max_0"] = 128;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_max));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.ItrCounter.io_max"] = 129;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_done));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.ItrCounter.io_done"] = 130;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_en_count));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.ItrCounter_1.io_en_count"] = 131;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_seqFSM__io_complete_reset));
  sim_data.signal_map["GDA_FSM.seqFSM.io_complete_reset"] = 132;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block__io_complete_reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.io_complete_reset"] = 133;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrixCounters__io_reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.io_reset"] = 134;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.ItrCounter_1.io_reset"] = 135;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrixCounters__reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.reset"] = 136;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.ItrCounter_1.reset"] = 137;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__currCount));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.ItrCounter_1.currCount"] = 138;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_pipe0_FSM__io_pipe_enabled));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_FSM.io_pipe_enabled"] = 139;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrixCounters__io_en));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.io_en"] = 140;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_en_count));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.ItrCounter.io_en_count"] = 141;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.ItrCounter.io_reset"] = 142;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrixCounters_ItrCounter__reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.ItrCounter.reset"] = 143;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_matrixCounters_ItrCounter__currCount));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.ItrCounter.currCount"] = 144;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_done));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.ItrCounter_1.io_done"] = 145;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrixCounters__io_counters_done_1));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.io_counters_done_1"] = 146;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrixCounters__done_complete));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.done_complete"] = 147;
  sim_data.signals.push_back(new dat_api<2>(&mod->GDA_FSM_pipe0_block_pipe0_FSM__prev_state));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_FSM.prev_state"] = 148;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_pipe0_FSM__reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_FSM.reset"] = 149;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_pipe0_FSM__wait_regs_0));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_FSM.wait_regs_0"] = 150;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_pipe0_FSM__wait_done));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_FSM.wait_done"] = 151;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_pipe0_FSM__io_en));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_FSM.io_en"] = 152;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrixCounters__io_counters_done_0));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.io_counters_done_0"] = 153;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_pipe0_FSM__io_counter_done));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_FSM.io_counter_done"] = 154;
  sim_data.signals.push_back(new dat_api<2>(&mod->GDA_FSM_pipe0_block_pipe0_FSM__curr_state));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_FSM.curr_state"] = 155;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block__state0_Regs_0));
  sim_data.signal_map["GDA_FSM.pipe0_block.state0_Regs_0"] = 156;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block__state0_Regs_1));
  sim_data.signal_map["GDA_FSM.pipe0_block.state0_Regs_1"] = 157;
  sim_data.signals.push_back(new dat_api<32>(&mod->GDA_FSM_pipe0_block_mu_addr__io_out));
  sim_data.signal_map["GDA_FSM.pipe0_block.mu_addr.io_out"] = 158;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block__mu_addr_Regs));
  sim_data.signal_map["GDA_FSM.pipe0_block.mu_addr_Regs"] = 159;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_vec_cout_0));
  sim_data.signal_map["GDA_FSM.pipe1_block.sigmaCounters.ItrCounter_1.io_vec_cout_0"] = 160;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block_sigmaCounters__io_counters_cout_1_0));
  sim_data.signal_map["GDA_FSM.pipe1_block.sigmaCounters.io_counters_cout_1_0"] = 161;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block__io_subT_2_addr));
  sim_data.signal_map["GDA_FSM.pipe1_block.io_subT_2_addr"] = 162;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_2_db__io_read_addr_vec_0));
  sim_data.signal_map["GDA_FSM.subT_2_db.io_read_addr_vec_0"] = 163;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_2_db_bram_w2__io_read_addr));
  sim_data.signal_map["GDA_FSM.subT_2_db.bram_w2.io_read_addr"] = 164;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_2_db_bram_w2__reg_raddr));
  sim_data.signal_map["GDA_FSM.subT_2_db.bram_w2.reg_raddr"] = 165;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_pipe0_datapath__io_output_float));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_datapath.io_output_float"] = 166;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block__io_output_float));
  sim_data.signal_map["GDA_FSM.pipe0_block.io_output_float"] = 167;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_2_db__io_write_data));
  sim_data.signal_map["GDA_FSM.subT_2_db.io_write_data"] = 168;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_2_db_bram_w2__io_write_data));
  sim_data.signal_map["GDA_FSM.subT_2_db.bram_w2.io_write_data"] = 169;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block__io_addr_en));
  sim_data.signal_map["GDA_FSM.pipe0_block.io_addr_en"] = 170;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_subT_2_db__io_write_en));
  sim_data.signal_map["GDA_FSM.subT_2_db.io_write_en"] = 171;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_subT_2_db_bram_w2__io_write_en));
  sim_data.signal_map["GDA_FSM.subT_2_db.bram_w2.io_write_en"] = 172;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block__io_subT_addr));
  sim_data.signal_map["GDA_FSM.pipe0_block.io_subT_addr"] = 173;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_2_db__io_write_addr));
  sim_data.signal_map["GDA_FSM.subT_2_db.io_write_addr"] = 174;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_2_db_bram_w2__io_write_addr));
  sim_data.signal_map["GDA_FSM.subT_2_db.bram_w2.io_write_addr"] = 175;
  std::string GDA_FSM_subT_2_db_bram_w2__bRam_rw_path = "GDA_FSM.subT_2_db.bram_w2.bRam_rw";
  for (size_t i = 0 ; i < 4 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_2_db_bram_w2__bRam_rw.contents[i]));
    sim_data.signal_map[GDA_FSM_subT_2_db_bram_w2__bRam_rw_path+"["+itos(i,false)+"]"] = 176+i;
  }
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_2_db_bram_w1__io_read_addr));
  sim_data.signal_map["GDA_FSM.subT_2_db.bram_w1.io_read_addr"] = 180;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_2_db_bram_w1__reg_raddr));
  sim_data.signal_map["GDA_FSM.subT_2_db.bram_w1.reg_raddr"] = 181;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_2_db_bram_w1__io_write_data));
  sim_data.signal_map["GDA_FSM.subT_2_db.bram_w1.io_write_data"] = 182;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_subT_2_db_bram_w1__io_write_en));
  sim_data.signal_map["GDA_FSM.subT_2_db.bram_w1.io_write_en"] = 183;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_2_db_bram_w1__io_write_addr));
  sim_data.signal_map["GDA_FSM.subT_2_db.bram_w1.io_write_addr"] = 184;
  std::string GDA_FSM_subT_2_db_bram_w1__bRam_rw_path = "GDA_FSM.subT_2_db.bram_w1.bRam_rw";
  for (size_t i = 0 ; i < 4 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_2_db_bram_w1__bRam_rw.contents[i]));
    sim_data.signal_map[GDA_FSM_subT_2_db_bram_w1__bRam_rw_path+"["+itos(i,false)+"]"] = 185+i;
  }
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_subT_2_db__reset));
  sim_data.signal_map["GDA_FSM.subT_2_db.reset"] = 189;
  sim_data.signals.push_back(new dat_api<2>(&mod->GDA_FSM_subT_2_db__state_read_reg));
  sim_data.signal_map["GDA_FSM.subT_2_db.state_read_reg"] = 190;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_pipe0_FSM__io_done));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_FSM.io_done"] = 191;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block__io_done));
  sim_data.signal_map["GDA_FSM.pipe0_block.io_done"] = 192;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_subT_2_db__io_write_done));
  sim_data.signal_map["GDA_FSM.subT_2_db.io_write_done"] = 193;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block_pipe1_FSM__io_done));
  sim_data.signal_map["GDA_FSM.pipe1_block.pipe1_FSM.io_done"] = 194;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block__io_done));
  sim_data.signal_map["GDA_FSM.pipe1_block.io_done"] = 195;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_subT_2_db__io_read_done_vec_0));
  sim_data.signal_map["GDA_FSM.subT_2_db.io_read_done_vec_0"] = 196;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_subT_2_db__latch_read_done_vec_0));
  sim_data.signal_map["GDA_FSM.subT_2_db.latch_read_done_vec_0"] = 197;
  sim_data.signals.push_back(new dat_api<2>(&mod->GDA_FSM_subT_2_db__state));
  sim_data.signal_map["GDA_FSM.subT_2_db.state"] = 198;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__io_vec_cout_0));
  sim_data.signal_map["GDA_FSM.pipe1_block.sigmaCounters.ItrCounter.io_vec_cout_0"] = 199;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block_sigmaCounters__io_counters_cout_0_0));
  sim_data.signal_map["GDA_FSM.pipe1_block.sigmaCounters.io_counters_cout_0_0"] = 200;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block__io_subT_addr));
  sim_data.signal_map["GDA_FSM.pipe1_block.io_subT_addr"] = 201;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_db__io_read_addr_vec_0));
  sim_data.signal_map["GDA_FSM.subT_db.io_read_addr_vec_0"] = 202;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_db_bram_w2__io_read_addr));
  sim_data.signal_map["GDA_FSM.subT_db.bram_w2.io_read_addr"] = 203;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_db_bram_w2__reg_raddr));
  sim_data.signal_map["GDA_FSM.subT_db.bram_w2.reg_raddr"] = 204;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_db__io_write_data));
  sim_data.signal_map["GDA_FSM.subT_db.io_write_data"] = 205;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_db_bram_w2__io_write_data));
  sim_data.signal_map["GDA_FSM.subT_db.bram_w2.io_write_data"] = 206;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_subT_db__io_write_en));
  sim_data.signal_map["GDA_FSM.subT_db.io_write_en"] = 207;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_subT_db_bram_w2__io_write_en));
  sim_data.signal_map["GDA_FSM.subT_db.bram_w2.io_write_en"] = 208;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_db__io_write_addr));
  sim_data.signal_map["GDA_FSM.subT_db.io_write_addr"] = 209;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_db_bram_w2__io_write_addr));
  sim_data.signal_map["GDA_FSM.subT_db.bram_w2.io_write_addr"] = 210;
  std::string GDA_FSM_subT_db_bram_w2__bRam_rw_path = "GDA_FSM.subT_db.bram_w2.bRam_rw";
  for (size_t i = 0 ; i < 4 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_db_bram_w2__bRam_rw.contents[i]));
    sim_data.signal_map[GDA_FSM_subT_db_bram_w2__bRam_rw_path+"["+itos(i,false)+"]"] = 211+i;
  }
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_db_bram_w1__io_read_addr));
  sim_data.signal_map["GDA_FSM.subT_db.bram_w1.io_read_addr"] = 215;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_db_bram_w1__reg_raddr));
  sim_data.signal_map["GDA_FSM.subT_db.bram_w1.reg_raddr"] = 216;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_db_bram_w1__io_write_data));
  sim_data.signal_map["GDA_FSM.subT_db.bram_w1.io_write_data"] = 217;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_subT_db_bram_w1__io_write_en));
  sim_data.signal_map["GDA_FSM.subT_db.bram_w1.io_write_en"] = 218;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_db_bram_w1__io_write_addr));
  sim_data.signal_map["GDA_FSM.subT_db.bram_w1.io_write_addr"] = 219;
  std::string GDA_FSM_subT_db_bram_w1__bRam_rw_path = "GDA_FSM.subT_db.bram_w1.bRam_rw";
  for (size_t i = 0 ; i < 4 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_db_bram_w1__bRam_rw.contents[i]));
    sim_data.signal_map[GDA_FSM_subT_db_bram_w1__bRam_rw_path+"["+itos(i,false)+"]"] = 220+i;
  }
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_subT_db__reset));
  sim_data.signal_map["GDA_FSM.subT_db.reset"] = 224;
  sim_data.signals.push_back(new dat_api<2>(&mod->GDA_FSM_subT_db__state_read_reg));
  sim_data.signal_map["GDA_FSM.subT_db.state_read_reg"] = 225;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_subT_db__io_write_done));
  sim_data.signal_map["GDA_FSM.subT_db.io_write_done"] = 226;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_subT_db__io_read_done_vec_0));
  sim_data.signal_map["GDA_FSM.subT_db.io_read_done_vec_0"] = 227;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_subT_db__latch_read_done_vec_0));
  sim_data.signal_map["GDA_FSM.subT_db.latch_read_done_vec_0"] = 228;
  sim_data.signals.push_back(new dat_api<2>(&mod->GDA_FSM_subT_db__state));
  sim_data.signal_map["GDA_FSM.subT_db.state"] = 229;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_2__reg_raddr));
  sim_data.signal_map["GDA_FSM.subT_2.reg_raddr"] = 230;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_2__io_write_data));
  sim_data.signal_map["GDA_FSM.subT_2.io_write_data"] = 231;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_subT_2__io_write_en));
  sim_data.signal_map["GDA_FSM.subT_2.io_write_en"] = 232;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_2__io_write_addr));
  sim_data.signal_map["GDA_FSM.subT_2.io_write_addr"] = 233;
  std::string GDA_FSM_subT_2__bRam_rw_path = "GDA_FSM.subT_2.bRam_rw";
  for (size_t i = 0 ; i < 4 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_2__bRam_rw.contents[i]));
    sim_data.signal_map[GDA_FSM_subT_2__bRam_rw_path+"["+itos(i,false)+"]"] = 234+i;
  }
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_2__io_read_out));
  sim_data.signal_map["GDA_FSM.subT_2.io_read_out"] = 238;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT__reg_raddr));
  sim_data.signal_map["GDA_FSM.subT.reg_raddr"] = 239;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT__io_write_data));
  sim_data.signal_map["GDA_FSM.subT.io_write_data"] = 240;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_subT__io_write_en));
  sim_data.signal_map["GDA_FSM.subT.io_write_en"] = 241;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT__io_write_addr));
  sim_data.signal_map["GDA_FSM.subT.io_write_addr"] = 242;
  std::string GDA_FSM_subT__bRam_rw_path = "GDA_FSM.subT.bRam_rw";
  for (size_t i = 0 ; i < 4 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT__bRam_rw.contents[i]));
    sim_data.signal_map[GDA_FSM_subT__bRam_rw_path+"["+itos(i,false)+"]"] = 243+i;
  }
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT__io_read_out));
  sim_data.signal_map["GDA_FSM.subT.io_read_out"] = 247;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_seqFSM__io_en));
  sim_data.signal_map["GDA_FSM.seqFSM.io_en"] = 248;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrixCounters__io_done_complete));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.io_done_complete"] = 249;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block__io_done_complete));
  sim_data.signal_map["GDA_FSM.pipe0_block.io_done_complete"] = 250;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_seqFSM__io_complete_done));
  sim_data.signal_map["GDA_FSM.seqFSM.io_complete_done"] = 251;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_seqFSM__io_pipe_done_1));
  sim_data.signal_map["GDA_FSM.seqFSM.io_pipe_done_1"] = 252;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_seqFSM__io_pipe_done_0));
  sim_data.signal_map["GDA_FSM.seqFSM.io_pipe_done_0"] = 253;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_seqFSM__reset));
  sim_data.signal_map["GDA_FSM.seqFSM.reset"] = 254;
  sim_data.signals.push_back(new dat_api<3>(&mod->GDA_FSM_seqFSM__state));
  sim_data.signal_map["GDA_FSM.seqFSM.state"] = 255;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block__io_mu_addr));
  sim_data.signal_map["GDA_FSM.pipe0_block.io_mu_addr"] = 256;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_mu1__io_read_addr));
  sim_data.signal_map["GDA_FSM.mu1.io_read_addr"] = 257;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_mu1__reg_raddr));
  sim_data.signal_map["GDA_FSM.mu1.reg_raddr"] = 258;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_mu1__io_write_data));
  sim_data.signal_map["GDA_FSM.mu1.io_write_data"] = 259;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_mu1__io_write_en));
  sim_data.signal_map["GDA_FSM.mu1.io_write_en"] = 260;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_mu1__io_write_addr));
  sim_data.signal_map["GDA_FSM.mu1.io_write_addr"] = 261;
  std::string GDA_FSM_mu1__bRam_rw_path = "GDA_FSM.mu1.bRam_rw";
  for (size_t i = 0 ; i < 4 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_mu1__bRam_rw.contents[i]));
    sim_data.signal_map[GDA_FSM_mu1__bRam_rw_path+"["+itos(i,false)+"]"] = 262+i;
  }
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_mu0__io_read_addr));
  sim_data.signal_map["GDA_FSM.mu0.io_read_addr"] = 266;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_mu0__reg_raddr));
  sim_data.signal_map["GDA_FSM.mu0.reg_raddr"] = 267;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_mu0__io_write_data));
  sim_data.signal_map["GDA_FSM.mu0.io_write_data"] = 268;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_mu0__io_write_en));
  sim_data.signal_map["GDA_FSM.mu0.io_write_en"] = 269;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_mu0__io_write_addr));
  sim_data.signal_map["GDA_FSM.mu0.io_write_addr"] = 270;
  std::string GDA_FSM_mu0__bRam_rw_path = "GDA_FSM.mu0.bRam_rw";
  for (size_t i = 0 ; i < 4 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_mu0__bRam_rw.contents[i]));
    sim_data.signal_map[GDA_FSM_mu0__bRam_rw_path+"["+itos(i,false)+"]"] = 271+i;
  }
  sim_data.signals.push_back(new dat_api<32>(&mod->GDA_FSM_pipe0_block_bool_vec_addr__io_out));
  sim_data.signal_map["GDA_FSM.pipe0_block.bool_vec_addr.io_out"] = 275;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block__io_y_addr));
  sim_data.signal_map["GDA_FSM.pipe0_block.io_y_addr"] = 276;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_mean_y_vec__io_read_addr));
  sim_data.signal_map["GDA_FSM.mean_y_vec.io_read_addr"] = 277;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_mean_y_vec__reg_raddr));
  sim_data.signal_map["GDA_FSM.mean_y_vec.reg_raddr"] = 278;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_mean_y_vec__io_write_data));
  sim_data.signal_map["GDA_FSM.mean_y_vec.io_write_data"] = 279;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_mean_y_vec__io_write_en));
  sim_data.signal_map["GDA_FSM.mean_y_vec.io_write_en"] = 280;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_mean_y_vec__io_write_addr));
  sim_data.signal_map["GDA_FSM.mean_y_vec.io_write_addr"] = 281;
  std::string GDA_FSM_mean_y_vec__bRam_rw_path = "GDA_FSM.mean_y_vec.bRam_rw";
  for (size_t i = 0 ; i < 4 ; i++) {
    sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_mean_y_vec__bRam_rw.contents[i]));
    sim_data.signal_map[GDA_FSM_mean_y_vec__bRam_rw_path+"["+itos(i,false)+"]"] = 282+i;
  }
  sim_data.signals.push_back(new dat_api<32>(&mod->GDA_FSM_pipe0_block_matrix_addr__io_out));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrix_addr.io_out"] = 286;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block__io_x_addr));
  sim_data.signal_map["GDA_FSM.pipe0_block.io_x_addr"] = 287;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_x_matrix__io_read_addr));
  sim_data.signal_map["GDA_FSM.x_matrix.io_read_addr"] = 288;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_x_matrix__reg_raddr));
  sim_data.signal_map["GDA_FSM.x_matrix.reg_raddr"] = 289;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_x_matrix__io_write_data));
  sim_data.signal_map["GDA_FSM.x_matrix.io_write_data"] = 290;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_x_matrix__io_write_en));
  sim_data.signal_map["GDA_FSM.x_matrix.io_write_en"] = 291;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_x_matrix__io_write_addr));
  sim_data.signal_map["GDA_FSM.x_matrix.io_write_addr"] = 292;
  std::string GDA_FSM_x_matrix__bRam_rw_path = "GDA_FSM.x_matrix.bRam_rw";
  for (size_t i = 0 ; i < 16 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_x_matrix__bRam_rw.contents[i]));
    sim_data.signal_map[GDA_FSM_x_matrix__bRam_rw_path+"["+itos(i,false)+"]"] = 293+i;
  }
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_seqFSM__io_done));
  sim_data.signal_map["GDA_FSM.seqFSM.io_done"] = 309;
  sim_data.clk_map["clk"] = new clk_api(&mod->clk);
}
