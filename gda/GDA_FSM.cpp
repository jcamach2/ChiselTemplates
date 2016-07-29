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
  GDA_FSM_subT_2__reg_raddr.randomize(&__rand_seed);
  GDA_FSM_subT_2__bRam_rw.randomize(&__rand_seed);
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
  { GDA_FSM_pipe1_block_mtxCounter__io_cout.values[0] = GDA_FSM_pipe1_block_mtxCounter__currCount.values[0];}
  { GDA_FSM_pipe1_block__io_sigma_read_addr.values[0] = GDA_FSM_pipe1_block_mtxCounter__io_cout.values[0];}
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
  { GDA_FSM_pipe1_block_mtxCounter__io_max.values[0] = 0xfL;}
  val_t GDA_FSM_pipe1_block_mtxCounter__hitMax;
  GDA_FSM_pipe1_block_mtxCounter__hitMax = GDA_FSM_pipe1_block_mtxCounter__io_max.values[0]<=GDA_FSM_pipe1_block_mtxCounter__currCount.values[0];
  { GDA_FSM_pipe1_block_mtxCounter__io_done.values[0] = GDA_FSM_pipe1_block_mtxCounter__hitMax;}
  val_t T26;
  { T26 = GDA_FSM_pipe1_block_mtxCounter__currCount.values[0]+0x1L;}
  T26 = T26 & 0xffffL;
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
  { T51.values[0] = TERNARY(GDA_FSM_pipe1_block__reset.values[0], 0x0L, GDA_FSM_pipe1_block_mtxCounter__io_cout.values[0]);}
  val_t T52;
  { T52 = GDA_FSM_subT_2__reg_raddr.values[0];}
  T52 = T52 & 0x3L;
  val_t T53;
  { T53 = GDA_FSM_subT_2__bRam_rw.get(T52, 0);}
  { GDA_FSM_subT_2__io_read_out.values[0] = T53;}
  { GDA_FSM_pipe1_block__io_subT_2_out.values[0] = GDA_FSM_subT_2__io_read_out.values[0];}
  val_t T54;
  { T54 = GDA_FSM_subT__reg_raddr.values[0];}
  T54 = T54 & 0x3L;
  val_t T55;
  { T55 = GDA_FSM_subT__bRam_rw.get(T54, 0);}
  { GDA_FSM_subT__io_read_out.values[0] = T55;}
  { GDA_FSM_pipe1_block__io_subT_out.values[0] = GDA_FSM_subT__io_read_out.values[0];}
  val_t T56;
  T56 = GDA_FSM_pipe1_block__io_subT_out.values[0] * GDA_FSM_pipe1_block__io_subT_2_out.values[0];
  val_t T57;
  { T57 = TERNARY(GDA_FSM_pipe1_block__reset.values[0], 0x0L, T56);}
  { T58.values[0] = T57;}
  T58.values[0] = T58.values[0] & 0xffffL;
  { GDA_FSM_pipe1_block__io_b.values[0] = GDA_FSM_pipe1_block_pipe1_FSM__io_pipe_enabled.values[0];}
  { T59.values[0] = TERNARY(GDA_FSM_pipe1_block__reset.values[0], 0x0L, GDA_FSM_pipe1_block_pipe1_FSM__io_pipe_enabled.values[0]);}
  { GDA_FSM_pipe0_block__io_reset.values[0] = GDA_FSM_seqFSM__io_state_reset.values[0];}
  { GDA_FSM_pipe0_block_pipe0_datapath__io_reset.values[0] = GDA_FSM_pipe0_block__io_reset.values[0];}
  val_t T60;
  { T60 = TERNARY(GDA_FSM_pipe0_block_pipe0_datapath__io_reset.values[0], 0x0L, GDA_FSM_pipe0_block_pipe0_datapath__sub_reg.values[0]);}
  val_t T61;
  { T61 = GDA_FSM_mu0__reg_raddr.values[0];}
  T61 = T61 & 0x3L;
  val_t T62;
  { T62 = GDA_FSM_mu0__bRam_rw.get(T61, 0);}
  { GDA_FSM_mu0__io_read_out.values[0] = T62;}
  { GDA_FSM_pipe0_block__io_mu0_out.values[0] = GDA_FSM_mu0__io_read_out.values[0];}
  { GDA_FSM_pipe0_block_pipe0_datapath__io_mu0.values[0] = GDA_FSM_pipe0_block__io_mu0_out.values[0];}
  val_t T63;
  { T63 = GDA_FSM_mu1__reg_raddr.values[0];}
  T63 = T63 & 0x3L;
  val_t T64;
  { T64 = GDA_FSM_mu1__bRam_rw.get(T63, 0);}
  { GDA_FSM_mu1__io_read_out.values[0] = T64;}
  { GDA_FSM_pipe0_block__io_mu1_out.values[0] = GDA_FSM_mu1__io_read_out.values[0];}
  { GDA_FSM_pipe0_block_pipe0_datapath__io_mu1.values[0] = GDA_FSM_pipe0_block__io_mu1_out.values[0];}
  val_t T65;
  { T65 = GDA_FSM_mean_y_vec__reg_raddr.values[0];}
  T65 = T65 & 0x3L;
  val_t T66;
  { T66 = GDA_FSM_mean_y_vec__bRam_rw.get(T65, 0);}
  { GDA_FSM_mean_y_vec__io_read_out.values[0] = T66;}
  { GDA_FSM_pipe0_block__io_y_out.values[0] = GDA_FSM_mean_y_vec__io_read_out.values[0];}
  { GDA_FSM_pipe0_block_pipe0_datapath__io_y.values[0] = GDA_FSM_pipe0_block__io_y_out.values[0];}
  val_t GDA_FSM_pipe0_block_pipe0_datapath__sub;
  { GDA_FSM_pipe0_block_pipe0_datapath__sub = TERNARY_1(GDA_FSM_pipe0_block_pipe0_datapath__io_y.values[0], GDA_FSM_pipe0_block_pipe0_datapath__io_mu1.values[0], GDA_FSM_pipe0_block_pipe0_datapath__io_mu0.values[0]);}
  val_t T67;
  { T67 = GDA_FSM_x_matrix__reg_raddr.values[0];}
  T67 = T67 & 0xfL;
  val_t T68;
  { T68 = GDA_FSM_x_matrix__bRam_rw.get(T67, 0);}
  { GDA_FSM_x_matrix__io_read_out.values[0] = T68;}
  { GDA_FSM_pipe0_block__io_x_out.values[0] = GDA_FSM_x_matrix__io_read_out.values[0];}
  { GDA_FSM_pipe0_block_pipe0_datapath__io_x.values[0] = GDA_FSM_pipe0_block__io_x_out.values[0];}
  val_t GDA_FSM_pipe0_block_pipe0_datapath__vec_sub;
  { GDA_FSM_pipe0_block_pipe0_datapath__vec_sub = GDA_FSM_pipe0_block_pipe0_datapath__io_x.values[0]-GDA_FSM_pipe0_block_pipe0_datapath__sub;}
  GDA_FSM_pipe0_block_pipe0_datapath__vec_sub = GDA_FSM_pipe0_block_pipe0_datapath__vec_sub & 0xffffL;
  val_t T69;
  T69 = GDA_FSM_seqFSM__state.values[0] == 0x2L;
  { GDA_FSM_seqFSM__io_pipe_en_0.values[0] = T69;}
  { GDA_FSM_pipe0_block__io_pipe_en.values[0] = GDA_FSM_seqFSM__io_pipe_en_0.values[0];}
  { GDA_FSM_pipe0_block_pipe0_datapath__io_en.values[0] = GDA_FSM_pipe0_block__io_pipe_en.values[0];}
  val_t T70;
  { T70 = GDA_FSM_pipe0_block_pipe0_datapath__io_reset.values[0] ^ 0x1L;}
  val_t T71;
  { T71 = T70 & GDA_FSM_pipe0_block_pipe0_datapath__io_en.values[0];}
  val_t T72;
  { T72 = TERNARY_1(T71, GDA_FSM_pipe0_block_pipe0_datapath__vec_sub, T60);}
  { GDA_FSM_pipe0_block__reset.values[0] = reset.values[0];}
  { GDA_FSM_pipe0_block_pipe0_datapath__reset.values[0] = GDA_FSM_pipe0_block__reset.values[0];}
  { T73.values[0] = TERNARY(GDA_FSM_pipe0_block_pipe0_datapath__reset.values[0], 0x0L, T72);}
  { GDA_FSM_pipe0_block_mu_addr__io_reset.values[0] = GDA_FSM_pipe0_block__io_reset.values[0];}
  val_t T74;
  { T74 = TERNARY(GDA_FSM_pipe0_block_mu_addr__io_reset.values[0], 0x0L, GDA_FSM_pipe0_block_mu_addr__mult_reg.values[0]);}
  { GDA_FSM_pipe0_block_mu_addr__io_in.values[0] = 0x0L;}
  { GDA_FSM_pipe0_block_mu_addr__io_const_dim.values[0] = 0x0L;}
  val_t GDA_FSM_pipe0_block_mu_addr__mult_block;
  GDA_FSM_pipe0_block_mu_addr__mult_block = GDA_FSM_pipe0_block_mu_addr__io_const_dim.values[0] * GDA_FSM_pipe0_block_mu_addr__io_in.values[0];
  val_t T75;
  { T75 = GDA_FSM_pipe0_block_mu_addr__io_reset.values[0] ^ 0x1L;}
  val_t T76;
  { T76 = TERNARY_1(T75, GDA_FSM_pipe0_block_mu_addr__mult_block, T74);}
  { GDA_FSM_pipe0_block_mu_addr__reset.values[0] = GDA_FSM_pipe0_block__reset.values[0];}
  { T77.values[0] = TERNARY(GDA_FSM_pipe0_block_mu_addr__reset.values[0], 0x0L, T76);}
  val_t T78;
  { T78 = TERNARY(GDA_FSM_pipe0_block_mu_addr__io_reset.values[0], 0x0L, GDA_FSM_pipe0_block_mu_addr__k_reg.values[0]);}
  { GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_cout.values[0] = GDA_FSM_pipe0_block_matrixCounters_ItrCounter__currCount.values[0];}
  { GDA_FSM_pipe0_block_matrixCounters__io_counters_cout_0.values[0] = GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_cout.values[0];}
  { GDA_FSM_pipe0_block_mu_addr__io_k.values[0] = GDA_FSM_pipe0_block_matrixCounters__io_counters_cout_0.values[0];}
  val_t T79;
  { T79 = TERNARY_1(T75, GDA_FSM_pipe0_block_mu_addr__io_k.values[0], T78);}
  { T80.values[0] = TERNARY(GDA_FSM_pipe0_block_mu_addr__reset.values[0], 0x0L, T79);}
  { GDA_FSM_pipe0_block_bool_vec_addr__io_reset.values[0] = GDA_FSM_pipe0_block__io_reset.values[0];}
  val_t T81;
  { T81 = TERNARY(GDA_FSM_pipe0_block_bool_vec_addr__io_reset.values[0], 0x0L, GDA_FSM_pipe0_block_bool_vec_addr__mult_reg.values[0]);}
  { GDA_FSM_pipe0_block_bool_vec_addr__io_in.values[0] = 0x0L;}
  { GDA_FSM_pipe0_block_bool_vec_addr__io_const_dim.values[0] = 0x0L;}
  val_t GDA_FSM_pipe0_block_bool_vec_addr__mult_block;
  GDA_FSM_pipe0_block_bool_vec_addr__mult_block = GDA_FSM_pipe0_block_bool_vec_addr__io_const_dim.values[0] * GDA_FSM_pipe0_block_bool_vec_addr__io_in.values[0];
  val_t T82;
  { T82 = GDA_FSM_pipe0_block_bool_vec_addr__io_reset.values[0] ^ 0x1L;}
  val_t T83;
  { T83 = TERNARY_1(T82, GDA_FSM_pipe0_block_bool_vec_addr__mult_block, T81);}
  { GDA_FSM_pipe0_block_bool_vec_addr__reset.values[0] = GDA_FSM_pipe0_block__reset.values[0];}
  { T84.values[0] = TERNARY(GDA_FSM_pipe0_block_bool_vec_addr__reset.values[0], 0x0L, T83);}
  val_t T85;
  { T85 = TERNARY(GDA_FSM_pipe0_block_bool_vec_addr__io_reset.values[0], 0x0L, GDA_FSM_pipe0_block_bool_vec_addr__k_reg.values[0]);}
  { GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_cout.values[0] = GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__currCount.values[0];}
  { GDA_FSM_pipe0_block_matrixCounters__io_counters_cout_1.values[0] = GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_cout.values[0];}
  { GDA_FSM_pipe0_block_bool_vec_addr__io_k.values[0] = GDA_FSM_pipe0_block_matrixCounters__io_counters_cout_1.values[0];}
  val_t T86;
  { T86 = TERNARY_1(T82, GDA_FSM_pipe0_block_bool_vec_addr__io_k.values[0], T85);}
  { T87.values[0] = TERNARY(GDA_FSM_pipe0_block_bool_vec_addr__reset.values[0], 0x0L, T86);}
  { GDA_FSM_pipe0_block_matrix_addr__io_reset.values[0] = GDA_FSM_pipe0_block__io_reset.values[0];}
  val_t T88;
  { T88 = TERNARY(GDA_FSM_pipe0_block_matrix_addr__io_reset.values[0], 0x0L, GDA_FSM_pipe0_block_matrix_addr__mult_reg.values[0]);}
  { GDA_FSM_pipe0_block_matrix_addr__io_in.values[0] = GDA_FSM_pipe0_block_matrixCounters__io_counters_cout_1.values[0];}
  { GDA_FSM_pipe0_block_matrix_addr__io_const_dim.values[0] = 0x4L;}
  val_t GDA_FSM_pipe0_block_matrix_addr__mult_block;
  GDA_FSM_pipe0_block_matrix_addr__mult_block = GDA_FSM_pipe0_block_matrix_addr__io_const_dim.values[0] * GDA_FSM_pipe0_block_matrix_addr__io_in.values[0];
  val_t T89;
  { T89 = GDA_FSM_pipe0_block_matrix_addr__io_reset.values[0] ^ 0x1L;}
  val_t T90;
  { T90 = TERNARY_1(T89, GDA_FSM_pipe0_block_matrix_addr__mult_block, T88);}
  { GDA_FSM_pipe0_block_matrix_addr__reset.values[0] = GDA_FSM_pipe0_block__reset.values[0];}
  { T91.values[0] = TERNARY(GDA_FSM_pipe0_block_matrix_addr__reset.values[0], 0x0L, T90);}
  val_t T92;
  { T92 = TERNARY(GDA_FSM_pipe0_block_matrix_addr__io_reset.values[0], 0x0L, GDA_FSM_pipe0_block_matrix_addr__k_reg.values[0]);}
  { GDA_FSM_pipe0_block_matrix_addr__io_k.values[0] = GDA_FSM_pipe0_block_matrixCounters__io_counters_cout_0.values[0];}
  val_t T93;
  { T93 = TERNARY_1(T89, GDA_FSM_pipe0_block_matrix_addr__io_k.values[0], T92);}
  { T94.values[0] = TERNARY(GDA_FSM_pipe0_block_matrix_addr__reset.values[0], 0x0L, T93);}
  val_t T95;
  { T95 = GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__currCount.values[0]+0x1L;}
  T95 = T95 & 0xffffL;
  { GDA_FSM_pipe0_block_matrixCounters__io_counters_max_1.values[0] = 0x3L;}
  { GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_max.values[0] = GDA_FSM_pipe0_block_matrixCounters__io_counters_max_1.values[0];}
  val_t GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__hitMax;
  GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__hitMax = GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_max.values[0]<=GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__currCount.values[0];
  val_t T96;
  { T96 = TERNARY(GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__hitMax, 0x0L, T95);}
  { GDA_FSM_pipe0_block_matrixCounters__io_counters_max_0.values[0] = 0x3L;}
  { GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_max.values[0] = GDA_FSM_pipe0_block_matrixCounters__io_counters_max_0.values[0];}
  val_t GDA_FSM_pipe0_block_matrixCounters_ItrCounter__hitMax;
  GDA_FSM_pipe0_block_matrixCounters_ItrCounter__hitMax = GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_max.values[0]<=GDA_FSM_pipe0_block_matrixCounters_ItrCounter__currCount.values[0];
  { GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_done.values[0] = GDA_FSM_pipe0_block_matrixCounters_ItrCounter__hitMax;}
  { GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_en_count.values[0] = GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_done.values[0];}
  val_t T97;
  { T97 = TERNARY_1(GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_en_count.values[0], T96, GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__currCount.values[0]);}
  val_t T98;
  T98 = GDA_FSM_seqFSM__state.values[0] == 0x0L;
  { GDA_FSM_seqFSM__io_complete_reset.values[0] = T98;}
  { GDA_FSM_pipe0_block__io_complete_reset.values[0] = GDA_FSM_seqFSM__io_complete_reset.values[0];}
  { GDA_FSM_pipe0_block_matrixCounters__io_reset.values[0] = GDA_FSM_pipe0_block__io_complete_reset.values[0];}
  { GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_reset.values[0] = GDA_FSM_pipe0_block_matrixCounters__io_reset.values[0];}
  val_t T99;
  { T99 = GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_en_count.values[0] ^ 0x1L;}
  val_t T100;
  { T100 = T99 & GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_reset.values[0];}
  val_t T101;
  { T101 = TERNARY(T100, 0x0L, T97);}
  { GDA_FSM_pipe0_block_matrixCounters__reset.values[0] = GDA_FSM_pipe0_block__reset.values[0];}
  { GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__reset.values[0] = GDA_FSM_pipe0_block_matrixCounters__reset.values[0];}
  { T102.values[0] = TERNARY(GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__reset.values[0], 0x0L, T101);}
  val_t T103;
  { T103 = GDA_FSM_pipe0_block_matrixCounters_ItrCounter__currCount.values[0]+0x1L;}
  T103 = T103 & 0xffffL;
  val_t T104;
  { T104 = TERNARY(GDA_FSM_pipe0_block_matrixCounters_ItrCounter__hitMax, 0x0L, T103);}
  val_t T105;
  T105 = GDA_FSM_pipe0_block_pipe0_FSM__curr_state.values[0] == 0x1L;
  { GDA_FSM_pipe0_block_pipe0_FSM__io_pipe_enabled.values[0] = T105;}
  { GDA_FSM_pipe0_block_matrixCounters__io_en.values[0] = GDA_FSM_pipe0_block_pipe0_FSM__io_pipe_enabled.values[0];}
  { GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_en_count.values[0] = GDA_FSM_pipe0_block_matrixCounters__io_en.values[0];}
  val_t T106;
  { T106 = TERNARY_1(GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_en_count.values[0], T104, GDA_FSM_pipe0_block_matrixCounters_ItrCounter__currCount.values[0]);}
  { GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_reset.values[0] = GDA_FSM_pipe0_block_matrixCounters__io_reset.values[0];}
  val_t T107;
  { T107 = GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_en_count.values[0] ^ 0x1L;}
  val_t T108;
  { T108 = T107 & GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_reset.values[0];}
  val_t T109;
  { T109 = TERNARY(T108, 0x0L, T106);}
  { GDA_FSM_pipe0_block_matrixCounters_ItrCounter__reset.values[0] = GDA_FSM_pipe0_block_matrixCounters__reset.values[0];}
  { T110.values[0] = TERNARY(GDA_FSM_pipe0_block_matrixCounters_ItrCounter__reset.values[0], 0x0L, T109);}
  { GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_done.values[0] = GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__hitMax;}
  { GDA_FSM_pipe0_block_matrixCounters__io_counters_done_1.values[0] = GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_done.values[0];}
  val_t T111;
  { T111 = TERNARY(GDA_FSM_pipe0_block_matrixCounters__io_reset.values[0], 0x0L, GDA_FSM_pipe0_block_matrixCounters__done_complete.values[0]);}
  val_t T112;
  { T112 = GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_en_count.values[0] & GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_done.values[0];}
  val_t T113;
  { T113 = T112 | GDA_FSM_pipe0_block_matrixCounters__done_complete.values[0];}
  val_t T114;
  { T114 = GDA_FSM_pipe0_block_matrixCounters__io_reset.values[0] ^ 0x1L;}
  val_t T115;
  { T115 = TERNARY_1(T114, T113, T111);}
  { T116.values[0] = TERNARY(GDA_FSM_pipe0_block_matrixCounters__reset.values[0], 0x0L, T115);}
  val_t GDA_FSM_pipe0_block_pipe0_FSM__state_wait;
  GDA_FSM_pipe0_block_pipe0_FSM__state_wait = GDA_FSM_pipe0_block_pipe0_FSM__curr_state.values[0] == 0x2L;
  val_t GDA_FSM_pipe0_block_pipe0_FSM__state_en;
  GDA_FSM_pipe0_block_pipe0_FSM__state_en = GDA_FSM_pipe0_block_pipe0_FSM__prev_state.values[0] == 0x1L;
  val_t GDA_FSM_pipe0_block_pipe0_FSM__pipe_pulse;
  { GDA_FSM_pipe0_block_pipe0_FSM__pipe_pulse = GDA_FSM_pipe0_block_pipe0_FSM__state_en & GDA_FSM_pipe0_block_pipe0_FSM__state_wait;}
  { GDA_FSM_pipe0_block_pipe0_FSM__reset.values[0] = GDA_FSM_pipe0_block__reset.values[0];}
  { T117.values[0] = TERNARY(GDA_FSM_pipe0_block_pipe0_FSM__reset.values[0], 0x0L, GDA_FSM_pipe0_block_pipe0_FSM__pipe_pulse);}
  { T118.values[0] = TERNARY(GDA_FSM_pipe0_block_pipe0_FSM__reset.values[0], 0x0L, GDA_FSM_pipe0_block_pipe0_FSM__wait_regs_0.values[0]);}
  { GDA_FSM_pipe0_block_pipe0_FSM__io_en.values[0] = GDA_FSM_pipe0_block__io_pipe_en.values[0];}
  val_t T119;
  T119 = 0x0L == GDA_FSM_pipe0_block_pipe0_FSM__curr_state.values[0];
  val_t T120;
  { T120 = T119 & GDA_FSM_pipe0_block_pipe0_FSM__io_en.values[0];}
  val_t T121;
  { T121 = TERNARY(T120, 0x1L, GDA_FSM_pipe0_block_pipe0_FSM__curr_state.values[0]);}
  { GDA_FSM_pipe0_block_matrixCounters__io_counters_done_0.values[0] = GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_done.values[0];}
  { GDA_FSM_pipe0_block_pipe0_FSM__io_counter_done.values[0] = GDA_FSM_pipe0_block_matrixCounters__io_counters_done_0.values[0];}
  val_t T122;
  T122 = 0x1L == GDA_FSM_pipe0_block_pipe0_FSM__curr_state.values[0];
  val_t T123;
  { T123 = T122 & GDA_FSM_pipe0_block_pipe0_FSM__io_counter_done.values[0];}
  val_t T124;
  { T124 = TERNARY(T123, 0x2L, T121);}
  val_t T125;
  T125 = 0x2L == GDA_FSM_pipe0_block_pipe0_FSM__curr_state.values[0];
  val_t T126;
  { T126 = T125 & GDA_FSM_pipe0_block_pipe0_FSM__wait_done.values[0];}
  val_t T127;
  { T127 = TERNARY(T126, 0x3L, T124);}
  val_t T128;
  T128 = 0x3L == GDA_FSM_pipe0_block_pipe0_FSM__curr_state.values[0];
  val_t T129;
  { T129 = TERNARY(T128, 0x0L, T127);}
  { T130.values[0] = TERNARY(GDA_FSM_pipe0_block_pipe0_FSM__reset.values[0], 0x0L, T129);}
  { T131.values[0] = TERNARY(GDA_FSM_pipe0_block__reset.values[0], 0x0L, GDA_FSM_pipe0_block_pipe0_FSM__io_pipe_enabled.values[0]);}
  { T132.values[0] = TERNARY(GDA_FSM_pipe0_block__reset.values[0], 0x0L, GDA_FSM_pipe0_block__state0_Regs_0.values[0]);}
  val_t T133;
  { T133 = GDA_FSM_pipe0_block_mu_addr__k_reg.values[0] | 0x0L << 16;}
  val_t T134;
  { T134 = GDA_FSM_pipe0_block_mu_addr__mult_reg.values[0]+T133;}
  T134 = T134 & 0xffffffffL;
  { GDA_FSM_pipe0_block_mu_addr__io_out.values[0] = T134;}
  val_t T135;
  { T135 = TERNARY(GDA_FSM_pipe0_block__reset.values[0], 0x0L, GDA_FSM_pipe0_block_mu_addr__io_out.values[0]);}
  { T136.values[0] = T135;}
  T136.values[0] = T136.values[0] & 0xffffL;
  { GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_cout.values[0] = GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__currCount.values[0];}
  { GDA_FSM_pipe1_block_sigmaCounters__io_counters_cout_1.values[0] = GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_cout.values[0];}
  { GDA_FSM_pipe1_block__io_subT_2_addr.values[0] = GDA_FSM_pipe1_block_sigmaCounters__io_counters_cout_1.values[0];}
  { GDA_FSM_subT_2__io_read_addr.values[0] = GDA_FSM_pipe1_block__io_subT_2_addr.values[0];}
  { GDA_FSM_pipe0_block_pipe0_datapath__io_output_float.values[0] = GDA_FSM_pipe0_block_pipe0_datapath__sub_reg.values[0];}
  { GDA_FSM_pipe0_block__io_output_float.values[0] = GDA_FSM_pipe0_block_pipe0_datapath__io_output_float.values[0];}
  { GDA_FSM_subT_2__io_write_data.values[0] = GDA_FSM_pipe0_block__io_output_float.values[0];}
  { GDA_FSM_pipe0_block__io_addr_en.values[0] = GDA_FSM_pipe0_block__state0_Regs_1.values[0];}
  { GDA_FSM_subT_2__io_write_en.values[0] = GDA_FSM_pipe0_block__io_addr_en.values[0];}
  { GDA_FSM_pipe0_block__io_subT_addr.values[0] = GDA_FSM_pipe0_block__mu_addr_Regs.values[0];}
  { GDA_FSM_subT_2__io_write_addr.values[0] = GDA_FSM_pipe0_block__io_subT_addr.values[0];}
  { T137.values[0] = GDA_FSM_subT_2__io_write_addr.values[0];}
  T137.values[0] = T137.values[0] & 0x3L;
  { GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__io_cout.values[0] = GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__currCount.values[0];}
  { GDA_FSM_pipe1_block_sigmaCounters__io_counters_cout_0.values[0] = GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__io_cout.values[0];}
  { GDA_FSM_pipe1_block__io_subT_addr.values[0] = GDA_FSM_pipe1_block_sigmaCounters__io_counters_cout_0.values[0];}
  { GDA_FSM_subT__io_read_addr.values[0] = GDA_FSM_pipe1_block__io_subT_addr.values[0];}
  { GDA_FSM_subT__io_write_data.values[0] = GDA_FSM_pipe0_block__io_output_float.values[0];}
  { GDA_FSM_subT__io_write_en.values[0] = GDA_FSM_pipe0_block__io_addr_en.values[0];}
  { GDA_FSM_subT__io_write_addr.values[0] = GDA_FSM_pipe0_block__io_subT_addr.values[0];}
  { T138.values[0] = GDA_FSM_subT__io_write_addr.values[0];}
  T138.values[0] = T138.values[0] & 0x3L;
  { GDA_FSM_seqFSM__io_en.values[0] = GDA_FSM__io_en.values[0];}
  val_t T139;
  T139 = 0x0L == GDA_FSM_seqFSM__state.values[0];
  val_t T140;
  { T140 = T139 & GDA_FSM_seqFSM__io_en.values[0];}
  val_t T141;
  { T141 = TERNARY(T140, 0x1L, GDA_FSM_seqFSM__state.values[0]);}
  val_t T142;
  T142 = 0x1L == GDA_FSM_seqFSM__state.values[0];
  val_t T143;
  { T143 = TERNARY(T142, 0x2L, T141);}
  val_t T144;
  { T144 = GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_en_count.values[0] & GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_done.values[0];}
  val_t T145;
  { T145 = T144 | GDA_FSM_pipe0_block_matrixCounters__done_complete.values[0];}
  { GDA_FSM_pipe0_block_matrixCounters__io_done_complete.values[0] = T145;}
  { GDA_FSM_pipe0_block__io_done_complete.values[0] = GDA_FSM_pipe0_block_matrixCounters__io_done_complete.values[0];}
  { GDA_FSM_seqFSM__io_complete_done.values[0] = GDA_FSM_pipe0_block__io_done_complete.values[0];}
  val_t T146;
  { T146 = TERNARY(GDA_FSM_seqFSM__io_complete_done.values[0], 0x4L, 0x1L);}
  val_t T147;
  T147 = GDA_FSM_pipe1_block_pipe1_FSM__curr_state.values[0] == 0x3L;
  { GDA_FSM_pipe1_block_pipe1_FSM__io_done.values[0] = T147;}
  { GDA_FSM_pipe1_block__io_done.values[0] = GDA_FSM_pipe1_block_pipe1_FSM__io_done.values[0];}
  { GDA_FSM_seqFSM__io_pipe_done_1.values[0] = GDA_FSM_pipe1_block__io_done.values[0];}
  val_t T148;
  T148 = 0x3L == GDA_FSM_seqFSM__state.values[0];
  val_t T149;
  { T149 = T148 & GDA_FSM_seqFSM__io_pipe_done_1.values[0];}
  val_t T150;
  { T150 = TERNARY_1(T149, T146, T143);}
  val_t T151;
  T151 = 0x4L == GDA_FSM_seqFSM__state.values[0];
  val_t T152;
  { T152 = TERNARY(T151, 0x0L, T150);}
  val_t T153;
  T153 = GDA_FSM_pipe0_block_pipe0_FSM__curr_state.values[0] == 0x3L;
  { GDA_FSM_pipe0_block_pipe0_FSM__io_done.values[0] = T153;}
  { GDA_FSM_pipe0_block__io_done.values[0] = GDA_FSM_pipe0_block_pipe0_FSM__io_done.values[0];}
  { GDA_FSM_seqFSM__io_pipe_done_0.values[0] = GDA_FSM_pipe0_block__io_done.values[0];}
  val_t T154;
  T154 = GDA_FSM_seqFSM__state.values[0] == 0x2L;
  val_t T155;
  { T155 = T154 & GDA_FSM_seqFSM__io_pipe_done_0.values[0];}
  val_t T156;
  { T156 = TERNARY(T155, 0x3L, T152);}
  { GDA_FSM_seqFSM__reset.values[0] = reset.values[0];}
  { T157.values[0] = TERNARY(GDA_FSM_seqFSM__reset.values[0], 0x0L, T156);}
  val_t T158;
  { T158 = GDA_FSM_pipe0_block_mu_addr__io_out.values[0];}
  T158 = T158 & 0xffffL;
  { GDA_FSM_pipe0_block__io_mu_addr.values[0] = T158;}
  { GDA_FSM_mu1__io_read_addr.values[0] = GDA_FSM_pipe0_block__io_mu_addr.values[0];}
  val_t T159;
  { T159 = GDA_FSM__io_data_in.values[0]+0x2L;}
  T159 = T159 & 0xffffL;
  { GDA_FSM_mu1__io_write_data.values[0] = T159;}
  { GDA_FSM_mu1__io_write_en.values[0] = GDA_FSM_seqFSM__io_complete_reset.values[0];}
  { GDA_FSM_mu1__io_write_addr.values[0] = GDA_FSM__io_data_in.values[0];}
  { T160.values[0] = GDA_FSM_mu1__io_write_addr.values[0];}
  T160.values[0] = T160.values[0] & 0x3L;
  { GDA_FSM_mu0__io_read_addr.values[0] = GDA_FSM_pipe0_block__io_mu_addr.values[0];}
  { GDA_FSM_mu0__io_write_data.values[0] = GDA_FSM__io_data_in.values[0];}
  { GDA_FSM_mu0__io_write_en.values[0] = GDA_FSM_seqFSM__io_complete_reset.values[0];}
  { GDA_FSM_mu0__io_write_addr.values[0] = GDA_FSM__io_data_in.values[0];}
  { T161.values[0] = GDA_FSM_mu0__io_write_addr.values[0];}
  T161.values[0] = T161.values[0] & 0x3L;
  val_t T162;
  { T162 = GDA_FSM_pipe0_block_bool_vec_addr__k_reg.values[0] | 0x0L << 16;}
  val_t T163;
  { T163 = GDA_FSM_pipe0_block_bool_vec_addr__mult_reg.values[0]+T162;}
  T163 = T163 & 0xffffffffL;
  { GDA_FSM_pipe0_block_bool_vec_addr__io_out.values[0] = T163;}
  val_t T164;
  { T164 = GDA_FSM_pipe0_block_bool_vec_addr__io_out.values[0];}
  T164 = T164 & 0xffffL;
  { GDA_FSM_pipe0_block__io_y_addr.values[0] = T164;}
  { GDA_FSM_mean_y_vec__io_read_addr.values[0] = GDA_FSM_pipe0_block__io_y_addr.values[0];}
  { GDA_FSM_mean_y_vec__io_write_data.values[0] = 0x1L;}
  { GDA_FSM_mean_y_vec__io_write_en.values[0] = GDA_FSM_seqFSM__io_complete_reset.values[0];}
  { GDA_FSM_mean_y_vec__io_write_addr.values[0] = GDA_FSM__io_data_in.values[0];}
  { T165.values[0] = GDA_FSM_mean_y_vec__io_write_addr.values[0];}
  T165.values[0] = T165.values[0] & 0x3L;
  val_t T166;
  { T166 = GDA_FSM_pipe0_block_matrix_addr__k_reg.values[0] | 0x0L << 16;}
  val_t T167;
  { T167 = GDA_FSM_pipe0_block_matrix_addr__mult_reg.values[0]+T166;}
  T167 = T167 & 0xffffffffL;
  { GDA_FSM_pipe0_block_matrix_addr__io_out.values[0] = T167;}
  val_t T168;
  { T168 = GDA_FSM_pipe0_block_matrix_addr__io_out.values[0];}
  T168 = T168 & 0xffffL;
  { GDA_FSM_pipe0_block__io_x_addr.values[0] = T168;}
  { GDA_FSM_x_matrix__io_read_addr.values[0] = GDA_FSM_pipe0_block__io_x_addr.values[0];}
  val_t T169;
  { T169 = GDA_FSM__io_data_inx.values[0]+0x6L;}
  T169 = T169 & 0xffffL;
  { GDA_FSM_x_matrix__io_write_data.values[0] = T169;}
  { GDA_FSM_x_matrix__io_write_en.values[0] = GDA_FSM_seqFSM__io_complete_reset.values[0];}
  { GDA_FSM_x_matrix__io_write_addr.values[0] = GDA_FSM__io_data_inx.values[0];}
  { T170.values[0] = GDA_FSM_x_matrix__io_write_addr.values[0];}
  T170.values[0] = T170.values[0] & 0xfL;
  val_t T171;
  T171 = GDA_FSM_seqFSM__state.values[0] == 0x4L;
  { GDA_FSM_seqFSM__io_done.values[0] = T171;}
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
  dat_t<16> GDA_FSM_pipe1_block__product_reg__shadow = T58;
  dat_t<1> GDA_FSM_pipe1_block__state1_Regs_0__shadow = T59;
  dat_t<16> GDA_FSM_pipe0_block_pipe0_datapath__sub_reg__shadow = T73;
  dat_t<32> GDA_FSM_pipe0_block_mu_addr__mult_reg__shadow = T77;
  dat_t<16> GDA_FSM_pipe0_block_mu_addr__k_reg__shadow = T80;
  dat_t<32> GDA_FSM_pipe0_block_bool_vec_addr__mult_reg__shadow = T84;
  dat_t<16> GDA_FSM_pipe0_block_bool_vec_addr__k_reg__shadow = T87;
  dat_t<32> GDA_FSM_pipe0_block_matrix_addr__mult_reg__shadow = T91;
  dat_t<16> GDA_FSM_pipe0_block_matrix_addr__k_reg__shadow = T94;
  dat_t<16> GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__currCount__shadow = T102;
  dat_t<16> GDA_FSM_pipe0_block_matrixCounters_ItrCounter__currCount__shadow = T110;
  dat_t<1> GDA_FSM_pipe0_block_matrixCounters__done_complete__shadow = T116;
  dat_t<2> GDA_FSM_pipe0_block_pipe0_FSM__prev_state__shadow = GDA_FSM_pipe0_block_pipe0_FSM__curr_state;
  dat_t<1> GDA_FSM_pipe0_block_pipe0_FSM__wait_regs_0__shadow = T117;
  dat_t<1> GDA_FSM_pipe0_block_pipe0_FSM__wait_done__shadow = T118;
  dat_t<2> GDA_FSM_pipe0_block_pipe0_FSM__curr_state__shadow = T130;
  dat_t<1> GDA_FSM_pipe0_block__state0_Regs_0__shadow = T131;
  dat_t<1> GDA_FSM_pipe0_block__state0_Regs_1__shadow = T132;
  dat_t<16> GDA_FSM_pipe0_block__mu_addr_Regs__shadow = T136;
  dat_t<16> GDA_FSM_subT_2__reg_raddr__shadow = GDA_FSM_subT_2__io_read_addr;
  { if (GDA_FSM_subT_2__io_write_en.values[0]) GDA_FSM_subT_2__bRam_rw.put(T137.values[0], 0, GDA_FSM_subT_2__io_write_data.values[0]);}
  dat_t<16> GDA_FSM_subT__reg_raddr__shadow = GDA_FSM_subT__io_read_addr;
  { if (GDA_FSM_subT__io_write_en.values[0]) GDA_FSM_subT__bRam_rw.put(T138.values[0], 0, GDA_FSM_subT__io_write_data.values[0]);}
  dat_t<3> GDA_FSM_seqFSM__state__shadow = T157;
  dat_t<16> GDA_FSM_mu1__reg_raddr__shadow = GDA_FSM_mu1__io_read_addr;
  { if (GDA_FSM_mu1__io_write_en.values[0]) GDA_FSM_mu1__bRam_rw.put(T160.values[0], 0, GDA_FSM_mu1__io_write_data.values[0]);}
  dat_t<16> GDA_FSM_mu0__reg_raddr__shadow = GDA_FSM_mu0__io_read_addr;
  { if (GDA_FSM_mu0__io_write_en.values[0]) GDA_FSM_mu0__bRam_rw.put(T161.values[0], 0, GDA_FSM_mu0__io_write_data.values[0]);}
  dat_t<16> GDA_FSM_mean_y_vec__reg_raddr__shadow = GDA_FSM_mean_y_vec__io_read_addr;
  { if (GDA_FSM_mean_y_vec__io_write_en.values[0]) GDA_FSM_mean_y_vec__bRam_rw.put(T165.values[0], 0, GDA_FSM_mean_y_vec__io_write_data.values[0]);}
  dat_t<16> GDA_FSM_x_matrix__reg_raddr__shadow = GDA_FSM_x_matrix__io_read_addr;
  { if (GDA_FSM_x_matrix__io_write_en.values[0]) GDA_FSM_x_matrix__bRam_rw.put(T170.values[0], 0, GDA_FSM_x_matrix__io_write_data.values[0]);}
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
  GDA_FSM_pipe1_block__product_reg = T58;
  GDA_FSM_pipe1_block__state1_Regs_0 = T59;
  GDA_FSM_pipe0_block_pipe0_datapath__sub_reg = T73;
  GDA_FSM_pipe0_block_mu_addr__mult_reg = T77;
  GDA_FSM_pipe0_block_mu_addr__k_reg = T80;
  GDA_FSM_pipe0_block_bool_vec_addr__mult_reg = T84;
  GDA_FSM_pipe0_block_bool_vec_addr__k_reg = T87;
  GDA_FSM_pipe0_block_matrix_addr__mult_reg = T91;
  GDA_FSM_pipe0_block_matrix_addr__k_reg = T94;
  GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__currCount = T102;
  GDA_FSM_pipe0_block_matrixCounters_ItrCounter__currCount = T110;
  GDA_FSM_pipe0_block_matrixCounters__done_complete = T116;
  GDA_FSM_pipe0_block_pipe0_FSM__prev_state = GDA_FSM_pipe0_block_pipe0_FSM__prev_state__shadow;
  GDA_FSM_pipe0_block_pipe0_FSM__wait_regs_0 = T117;
  GDA_FSM_pipe0_block_pipe0_FSM__wait_done = T118;
  GDA_FSM_pipe0_block_pipe0_FSM__curr_state = T130;
  GDA_FSM_pipe0_block__state0_Regs_0 = T131;
  GDA_FSM_pipe0_block__state0_Regs_1 = T132;
  GDA_FSM_pipe0_block__mu_addr_Regs = T136;
  GDA_FSM_subT_2__reg_raddr = GDA_FSM_subT_2__io_read_addr;
  GDA_FSM_subT__reg_raddr = GDA_FSM_subT__io_read_addr;
  GDA_FSM_seqFSM__state = T157;
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
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block_mtxCounter__io_cout));
  sim_data.signal_map["GDA_FSM.pipe1_block.mtxCounter.io_cout"] = 0;
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
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block_mtxCounter__io_done));
  sim_data.signal_map["GDA_FSM.pipe1_block.mtxCounter.io_done"] = 53;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block_mtxCounter__io_en_count));
  sim_data.signal_map["GDA_FSM.pipe1_block.mtxCounter.io_en_count"] = 54;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block_mtxCounter__io_reset));
  sim_data.signal_map["GDA_FSM.pipe1_block.mtxCounter.io_reset"] = 55;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block_mtxCounter__reset));
  sim_data.signal_map["GDA_FSM.pipe1_block.mtxCounter.reset"] = 56;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block_mtxCounter__currCount));
  sim_data.signal_map["GDA_FSM.pipe1_block.mtxCounter.currCount"] = 57;
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
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_2__io_read_out));
  sim_data.signal_map["GDA_FSM.subT_2.io_read_out"] = 70;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block__io_subT_2_out));
  sim_data.signal_map["GDA_FSM.pipe1_block.io_subT_2_out"] = 71;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT__io_read_out));
  sim_data.signal_map["GDA_FSM.subT.io_read_out"] = 72;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block__io_subT_out));
  sim_data.signal_map["GDA_FSM.pipe1_block.io_subT_out"] = 73;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block__product_reg));
  sim_data.signal_map["GDA_FSM.pipe1_block.product_reg"] = 74;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block__io_b));
  sim_data.signal_map["GDA_FSM.pipe1_block.io_b"] = 75;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block__state1_Regs_0));
  sim_data.signal_map["GDA_FSM.pipe1_block.state1_Regs_0"] = 76;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block__io_reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.io_reset"] = 77;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_pipe0_datapath__io_reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_datapath.io_reset"] = 78;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_mu0__io_read_out));
  sim_data.signal_map["GDA_FSM.mu0.io_read_out"] = 79;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block__io_mu0_out));
  sim_data.signal_map["GDA_FSM.pipe0_block.io_mu0_out"] = 80;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_pipe0_datapath__io_mu0));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_datapath.io_mu0"] = 81;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_mu1__io_read_out));
  sim_data.signal_map["GDA_FSM.mu1.io_read_out"] = 82;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block__io_mu1_out));
  sim_data.signal_map["GDA_FSM.pipe0_block.io_mu1_out"] = 83;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_pipe0_datapath__io_mu1));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_datapath.io_mu1"] = 84;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_mean_y_vec__io_read_out));
  sim_data.signal_map["GDA_FSM.mean_y_vec.io_read_out"] = 85;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block__io_y_out));
  sim_data.signal_map["GDA_FSM.pipe0_block.io_y_out"] = 86;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_pipe0_datapath__io_y));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_datapath.io_y"] = 87;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_x_matrix__io_read_out));
  sim_data.signal_map["GDA_FSM.x_matrix.io_read_out"] = 88;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block__io_x_out));
  sim_data.signal_map["GDA_FSM.pipe0_block.io_x_out"] = 89;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_pipe0_datapath__io_x));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_datapath.io_x"] = 90;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_seqFSM__io_pipe_en_0));
  sim_data.signal_map["GDA_FSM.seqFSM.io_pipe_en_0"] = 91;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block__io_pipe_en));
  sim_data.signal_map["GDA_FSM.pipe0_block.io_pipe_en"] = 92;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_pipe0_datapath__io_en));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_datapath.io_en"] = 93;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block__reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.reset"] = 94;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_pipe0_datapath__reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_datapath.reset"] = 95;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_pipe0_datapath__sub_reg));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_datapath.sub_reg"] = 96;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_mu_addr__io_reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.mu_addr.io_reset"] = 97;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_mu_addr__io_in));
  sim_data.signal_map["GDA_FSM.pipe0_block.mu_addr.io_in"] = 98;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_mu_addr__io_const_dim));
  sim_data.signal_map["GDA_FSM.pipe0_block.mu_addr.io_const_dim"] = 99;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_mu_addr__reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.mu_addr.reset"] = 100;
  sim_data.signals.push_back(new dat_api<32>(&mod->GDA_FSM_pipe0_block_mu_addr__mult_reg));
  sim_data.signal_map["GDA_FSM.pipe0_block.mu_addr.mult_reg"] = 101;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_cout));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.ItrCounter.io_cout"] = 102;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_matrixCounters__io_counters_cout_0));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.io_counters_cout_0"] = 103;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_mu_addr__io_k));
  sim_data.signal_map["GDA_FSM.pipe0_block.mu_addr.io_k"] = 104;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_mu_addr__k_reg));
  sim_data.signal_map["GDA_FSM.pipe0_block.mu_addr.k_reg"] = 105;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_bool_vec_addr__io_reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.bool_vec_addr.io_reset"] = 106;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_bool_vec_addr__io_in));
  sim_data.signal_map["GDA_FSM.pipe0_block.bool_vec_addr.io_in"] = 107;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_bool_vec_addr__io_const_dim));
  sim_data.signal_map["GDA_FSM.pipe0_block.bool_vec_addr.io_const_dim"] = 108;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_bool_vec_addr__reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.bool_vec_addr.reset"] = 109;
  sim_data.signals.push_back(new dat_api<32>(&mod->GDA_FSM_pipe0_block_bool_vec_addr__mult_reg));
  sim_data.signal_map["GDA_FSM.pipe0_block.bool_vec_addr.mult_reg"] = 110;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_cout));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.ItrCounter_1.io_cout"] = 111;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_matrixCounters__io_counters_cout_1));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.io_counters_cout_1"] = 112;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_bool_vec_addr__io_k));
  sim_data.signal_map["GDA_FSM.pipe0_block.bool_vec_addr.io_k"] = 113;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_bool_vec_addr__k_reg));
  sim_data.signal_map["GDA_FSM.pipe0_block.bool_vec_addr.k_reg"] = 114;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrix_addr__io_reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrix_addr.io_reset"] = 115;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_matrix_addr__io_in));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrix_addr.io_in"] = 116;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_matrix_addr__io_const_dim));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrix_addr.io_const_dim"] = 117;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrix_addr__reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrix_addr.reset"] = 118;
  sim_data.signals.push_back(new dat_api<32>(&mod->GDA_FSM_pipe0_block_matrix_addr__mult_reg));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrix_addr.mult_reg"] = 119;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_matrix_addr__io_k));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrix_addr.io_k"] = 120;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_matrix_addr__k_reg));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrix_addr.k_reg"] = 121;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_matrixCounters__io_counters_max_1));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.io_counters_max_1"] = 122;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_max));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.ItrCounter_1.io_max"] = 123;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_matrixCounters__io_counters_max_0));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.io_counters_max_0"] = 124;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_max));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.ItrCounter.io_max"] = 125;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_done));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.ItrCounter.io_done"] = 126;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_en_count));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.ItrCounter_1.io_en_count"] = 127;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_seqFSM__io_complete_reset));
  sim_data.signal_map["GDA_FSM.seqFSM.io_complete_reset"] = 128;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block__io_complete_reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.io_complete_reset"] = 129;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrixCounters__io_reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.io_reset"] = 130;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.ItrCounter_1.io_reset"] = 131;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrixCounters__reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.reset"] = 132;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.ItrCounter_1.reset"] = 133;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__currCount));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.ItrCounter_1.currCount"] = 134;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_pipe0_FSM__io_pipe_enabled));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_FSM.io_pipe_enabled"] = 135;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrixCounters__io_en));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.io_en"] = 136;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_en_count));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.ItrCounter.io_en_count"] = 137;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrixCounters_ItrCounter__io_reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.ItrCounter.io_reset"] = 138;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrixCounters_ItrCounter__reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.ItrCounter.reset"] = 139;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_matrixCounters_ItrCounter__currCount));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.ItrCounter.currCount"] = 140;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_done));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.ItrCounter_1.io_done"] = 141;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrixCounters__io_counters_done_1));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.io_counters_done_1"] = 142;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrixCounters__done_complete));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.done_complete"] = 143;
  sim_data.signals.push_back(new dat_api<2>(&mod->GDA_FSM_pipe0_block_pipe0_FSM__prev_state));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_FSM.prev_state"] = 144;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_pipe0_FSM__reset));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_FSM.reset"] = 145;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_pipe0_FSM__wait_regs_0));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_FSM.wait_regs_0"] = 146;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_pipe0_FSM__wait_done));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_FSM.wait_done"] = 147;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_pipe0_FSM__io_en));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_FSM.io_en"] = 148;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrixCounters__io_counters_done_0));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.io_counters_done_0"] = 149;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_pipe0_FSM__io_counter_done));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_FSM.io_counter_done"] = 150;
  sim_data.signals.push_back(new dat_api<2>(&mod->GDA_FSM_pipe0_block_pipe0_FSM__curr_state));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_FSM.curr_state"] = 151;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block__state0_Regs_0));
  sim_data.signal_map["GDA_FSM.pipe0_block.state0_Regs_0"] = 152;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block__state0_Regs_1));
  sim_data.signal_map["GDA_FSM.pipe0_block.state0_Regs_1"] = 153;
  sim_data.signals.push_back(new dat_api<32>(&mod->GDA_FSM_pipe0_block_mu_addr__io_out));
  sim_data.signal_map["GDA_FSM.pipe0_block.mu_addr.io_out"] = 154;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block__mu_addr_Regs));
  sim_data.signal_map["GDA_FSM.pipe0_block.mu_addr_Regs"] = 155;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_cout));
  sim_data.signal_map["GDA_FSM.pipe1_block.sigmaCounters.ItrCounter_1.io_cout"] = 156;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block_sigmaCounters__io_counters_cout_1));
  sim_data.signal_map["GDA_FSM.pipe1_block.sigmaCounters.io_counters_cout_1"] = 157;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block__io_subT_2_addr));
  sim_data.signal_map["GDA_FSM.pipe1_block.io_subT_2_addr"] = 158;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_2__io_read_addr));
  sim_data.signal_map["GDA_FSM.subT_2.io_read_addr"] = 159;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_2__reg_raddr));
  sim_data.signal_map["GDA_FSM.subT_2.reg_raddr"] = 160;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block_pipe0_datapath__io_output_float));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_datapath.io_output_float"] = 161;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block__io_output_float));
  sim_data.signal_map["GDA_FSM.pipe0_block.io_output_float"] = 162;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_2__io_write_data));
  sim_data.signal_map["GDA_FSM.subT_2.io_write_data"] = 163;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block__io_addr_en));
  sim_data.signal_map["GDA_FSM.pipe0_block.io_addr_en"] = 164;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_subT_2__io_write_en));
  sim_data.signal_map["GDA_FSM.subT_2.io_write_en"] = 165;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block__io_subT_addr));
  sim_data.signal_map["GDA_FSM.pipe0_block.io_subT_addr"] = 166;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_2__io_write_addr));
  sim_data.signal_map["GDA_FSM.subT_2.io_write_addr"] = 167;
  std::string GDA_FSM_subT_2__bRam_rw_path = "GDA_FSM.subT_2.bRam_rw";
  for (size_t i = 0 ; i < 4 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT_2__bRam_rw.contents[i]));
    sim_data.signal_map[GDA_FSM_subT_2__bRam_rw_path+"["+itos(i,false)+"]"] = 168+i;
  }
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block_sigmaCounters_ItrCounter__io_cout));
  sim_data.signal_map["GDA_FSM.pipe1_block.sigmaCounters.ItrCounter.io_cout"] = 172;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block_sigmaCounters__io_counters_cout_0));
  sim_data.signal_map["GDA_FSM.pipe1_block.sigmaCounters.io_counters_cout_0"] = 173;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe1_block__io_subT_addr));
  sim_data.signal_map["GDA_FSM.pipe1_block.io_subT_addr"] = 174;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT__io_read_addr));
  sim_data.signal_map["GDA_FSM.subT.io_read_addr"] = 175;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT__reg_raddr));
  sim_data.signal_map["GDA_FSM.subT.reg_raddr"] = 176;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT__io_write_data));
  sim_data.signal_map["GDA_FSM.subT.io_write_data"] = 177;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_subT__io_write_en));
  sim_data.signal_map["GDA_FSM.subT.io_write_en"] = 178;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT__io_write_addr));
  sim_data.signal_map["GDA_FSM.subT.io_write_addr"] = 179;
  std::string GDA_FSM_subT__bRam_rw_path = "GDA_FSM.subT.bRam_rw";
  for (size_t i = 0 ; i < 4 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_subT__bRam_rw.contents[i]));
    sim_data.signal_map[GDA_FSM_subT__bRam_rw_path+"["+itos(i,false)+"]"] = 180+i;
  }
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_seqFSM__io_en));
  sim_data.signal_map["GDA_FSM.seqFSM.io_en"] = 184;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_matrixCounters__io_done_complete));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrixCounters.io_done_complete"] = 185;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block__io_done_complete));
  sim_data.signal_map["GDA_FSM.pipe0_block.io_done_complete"] = 186;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_seqFSM__io_complete_done));
  sim_data.signal_map["GDA_FSM.seqFSM.io_complete_done"] = 187;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block_pipe1_FSM__io_done));
  sim_data.signal_map["GDA_FSM.pipe1_block.pipe1_FSM.io_done"] = 188;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe1_block__io_done));
  sim_data.signal_map["GDA_FSM.pipe1_block.io_done"] = 189;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_seqFSM__io_pipe_done_1));
  sim_data.signal_map["GDA_FSM.seqFSM.io_pipe_done_1"] = 190;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block_pipe0_FSM__io_done));
  sim_data.signal_map["GDA_FSM.pipe0_block.pipe0_FSM.io_done"] = 191;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_pipe0_block__io_done));
  sim_data.signal_map["GDA_FSM.pipe0_block.io_done"] = 192;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_seqFSM__io_pipe_done_0));
  sim_data.signal_map["GDA_FSM.seqFSM.io_pipe_done_0"] = 193;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_seqFSM__reset));
  sim_data.signal_map["GDA_FSM.seqFSM.reset"] = 194;
  sim_data.signals.push_back(new dat_api<3>(&mod->GDA_FSM_seqFSM__state));
  sim_data.signal_map["GDA_FSM.seqFSM.state"] = 195;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block__io_mu_addr));
  sim_data.signal_map["GDA_FSM.pipe0_block.io_mu_addr"] = 196;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_mu1__io_read_addr));
  sim_data.signal_map["GDA_FSM.mu1.io_read_addr"] = 197;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_mu1__reg_raddr));
  sim_data.signal_map["GDA_FSM.mu1.reg_raddr"] = 198;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_mu1__io_write_data));
  sim_data.signal_map["GDA_FSM.mu1.io_write_data"] = 199;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_mu1__io_write_en));
  sim_data.signal_map["GDA_FSM.mu1.io_write_en"] = 200;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_mu1__io_write_addr));
  sim_data.signal_map["GDA_FSM.mu1.io_write_addr"] = 201;
  std::string GDA_FSM_mu1__bRam_rw_path = "GDA_FSM.mu1.bRam_rw";
  for (size_t i = 0 ; i < 4 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_mu1__bRam_rw.contents[i]));
    sim_data.signal_map[GDA_FSM_mu1__bRam_rw_path+"["+itos(i,false)+"]"] = 202+i;
  }
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_mu0__io_read_addr));
  sim_data.signal_map["GDA_FSM.mu0.io_read_addr"] = 206;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_mu0__reg_raddr));
  sim_data.signal_map["GDA_FSM.mu0.reg_raddr"] = 207;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_mu0__io_write_data));
  sim_data.signal_map["GDA_FSM.mu0.io_write_data"] = 208;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_mu0__io_write_en));
  sim_data.signal_map["GDA_FSM.mu0.io_write_en"] = 209;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_mu0__io_write_addr));
  sim_data.signal_map["GDA_FSM.mu0.io_write_addr"] = 210;
  std::string GDA_FSM_mu0__bRam_rw_path = "GDA_FSM.mu0.bRam_rw";
  for (size_t i = 0 ; i < 4 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_mu0__bRam_rw.contents[i]));
    sim_data.signal_map[GDA_FSM_mu0__bRam_rw_path+"["+itos(i,false)+"]"] = 211+i;
  }
  sim_data.signals.push_back(new dat_api<32>(&mod->GDA_FSM_pipe0_block_bool_vec_addr__io_out));
  sim_data.signal_map["GDA_FSM.pipe0_block.bool_vec_addr.io_out"] = 215;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block__io_y_addr));
  sim_data.signal_map["GDA_FSM.pipe0_block.io_y_addr"] = 216;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_mean_y_vec__io_read_addr));
  sim_data.signal_map["GDA_FSM.mean_y_vec.io_read_addr"] = 217;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_mean_y_vec__reg_raddr));
  sim_data.signal_map["GDA_FSM.mean_y_vec.reg_raddr"] = 218;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_mean_y_vec__io_write_data));
  sim_data.signal_map["GDA_FSM.mean_y_vec.io_write_data"] = 219;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_mean_y_vec__io_write_en));
  sim_data.signal_map["GDA_FSM.mean_y_vec.io_write_en"] = 220;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_mean_y_vec__io_write_addr));
  sim_data.signal_map["GDA_FSM.mean_y_vec.io_write_addr"] = 221;
  std::string GDA_FSM_mean_y_vec__bRam_rw_path = "GDA_FSM.mean_y_vec.bRam_rw";
  for (size_t i = 0 ; i < 4 ; i++) {
    sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_mean_y_vec__bRam_rw.contents[i]));
    sim_data.signal_map[GDA_FSM_mean_y_vec__bRam_rw_path+"["+itos(i,false)+"]"] = 222+i;
  }
  sim_data.signals.push_back(new dat_api<32>(&mod->GDA_FSM_pipe0_block_matrix_addr__io_out));
  sim_data.signal_map["GDA_FSM.pipe0_block.matrix_addr.io_out"] = 226;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_pipe0_block__io_x_addr));
  sim_data.signal_map["GDA_FSM.pipe0_block.io_x_addr"] = 227;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_x_matrix__io_read_addr));
  sim_data.signal_map["GDA_FSM.x_matrix.io_read_addr"] = 228;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_x_matrix__reg_raddr));
  sim_data.signal_map["GDA_FSM.x_matrix.reg_raddr"] = 229;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_x_matrix__io_write_data));
  sim_data.signal_map["GDA_FSM.x_matrix.io_write_data"] = 230;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_x_matrix__io_write_en));
  sim_data.signal_map["GDA_FSM.x_matrix.io_write_en"] = 231;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_x_matrix__io_write_addr));
  sim_data.signal_map["GDA_FSM.x_matrix.io_write_addr"] = 232;
  std::string GDA_FSM_x_matrix__bRam_rw_path = "GDA_FSM.x_matrix.bRam_rw";
  for (size_t i = 0 ; i < 16 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->GDA_FSM_x_matrix__bRam_rw.contents[i]));
    sim_data.signal_map[GDA_FSM_x_matrix__bRam_rw_path+"["+itos(i,false)+"]"] = 233+i;
  }
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_FSM_seqFSM__io_done));
  sim_data.signal_map["GDA_FSM.seqFSM.io_done"] = 249;
  sim_data.clk_map["clk"] = new clk_api(&mod->clk);
}
