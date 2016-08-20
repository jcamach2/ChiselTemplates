#include "GDA_MetaPipe_FSM.h"

void GDA_MetaPipe_FSM_t::init ( val_t rand_init ) {
  this->__srand(rand_init);
  GDA_MetaPipe_FSM_latch_complete_done__latch_reg.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_latch_pipe0_done__latch_reg.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_latch_pipe1_done__latch_reg.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_sigmaM__reg_raddr.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_sigmaM__bRam_rw.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__currCount.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__currCount.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__done_complete.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_pipe1_block_mtxCounter__currCount.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__prev_state.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__wait_done.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__curr_state.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_pipe1_block__state1_Regs_1.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_pipe1_block__writeaddr_reg.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_pipe1_block__product_reg.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_pipe1_block__state1_Regs_0.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__sub_reg.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_pipe0_block_mu_addr__mult_reg.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_pipe0_block_mu_addr__k_reg.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__mult_reg.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__k_reg.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_pipe0_block_matrix_addr__mult_reg.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_pipe0_block_matrix_addr__k_reg.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__currCount.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__currCount.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_pipe0_block_matrixCounters__done_complete.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__prev_state.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__wait_done.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__curr_state.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_pipe0_block__state0_Regs_0.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_pipe0_block__state0_Regs_1.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_pipe0_block__mu_addr_Regs.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_subT_2_db_bram_w2__reg_raddr.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_subT_2_db_bram_w2__bRam_rw.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_subT_2_db_bram_w1__reg_raddr.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_subT_2_db_bram_w1__bRam_rw.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_subT_2_db__state_read_reg.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_subT_2_db__latch_read_done_vec_0.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_subT_2_db__state.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_subT_db_bram_w2__reg_raddr.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_subT_db_bram_w2__bRam_rw.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_subT_db_bram_w1__reg_raddr.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_subT_db_bram_w1__bRam_rw.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_subT_db__state_read_reg.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_subT_db__latch_read_done_vec_0.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_subT_db__state.randomize(&__rand_seed);
   GDA_MetaPipe_FSM_subT_2__io_read_addr.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_subT_2__reg_raddr.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_subT_2__bRam_rw.randomize(&__rand_seed);
   GDA_MetaPipe_FSM_subT__io_read_addr.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_subT__reg_raddr.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_subT__bRam_rw.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_metaPipeFSM__state.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_mu1__reg_raddr.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_mu1__bRam_rw.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_mu0__reg_raddr.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_mu0__bRam_rw.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_mean_y_vec__reg_raddr.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_mean_y_vec__bRam_rw.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_x_matrix__reg_raddr.randomize(&__rand_seed);
  GDA_MetaPipe_FSM_x_matrix__bRam_rw.randomize(&__rand_seed);
  clk.len = 1;
  clk.cnt = 0;
  clk.values[0] = 0;
}


int GDA_MetaPipe_FSM_t::clock ( dat_t<1> reset ) {
  uint32_t min = ((uint32_t)1<<31)-1;
  if (clk.cnt < min) min = clk.cnt;
  clk.cnt-=min;
  if (clk.cnt == 0) clock_lo( reset );
  if (!reset.to_bool()) print( std::cerr );
  if (clk.cnt == 0) clock_hi( reset );
  if (clk.cnt == 0) clk.cnt = clk.len;
  return min;
}


void GDA_MetaPipe_FSM_t::print ( FILE* f ) {
#if __cplusplus >= 201103L
  if (T263.values[0]) dat_fprintf<112>(f, "x addr: %d\n", T264);
#endif
#if __cplusplus >= 201103L
  if (T265.values[0]) dat_fprintf<168>(f, "pipe 0 output: %d\n", T266);
#endif
#if __cplusplus >= 201103L
  if (T267.values[0]) dat_fprintf<144>(f, "subT d out: %d\n", T268);
#endif
#if __cplusplus >= 201103L
  if (T269.values[0]) dat_fprintf<144>(f, "sigma addr: %d\n", T270);
#endif
#if __cplusplus >= 201103L
  if (T271.values[0]) dat_fprintf<144>(f, "sigma write en: %d\n", T272);
#endif
#if __cplusplus >= 201103L
  if (T273.values[0]) dat_fprintf<168>(f, "sigma write d: %d\n", T274);
#endif
#if __cplusplus >= 201103L
  if (T275.values[0]) dat_fprintf<120>(f, "pipe 1 done: %d\n", T276);
#endif
#if __cplusplus >= 201103L
  if (T277.values[0]) dat_fprintf<184>(f, "MetaPipe Init state: %d\n", T278);
#endif
fflush(f);
}
void GDA_MetaPipe_FSM_t::print ( std::ostream& s ) {
#if __cplusplus >= 201103L
  if (T263.values[0]) dat_prints<112>(s, "x addr: %d\n", T264);
#endif
#if __cplusplus >= 201103L
  if (T265.values[0]) dat_prints<168>(s, "pipe 0 output: %d\n", T266);
#endif
#if __cplusplus >= 201103L
  if (T267.values[0]) dat_prints<144>(s, "subT d out: %d\n", T268);
#endif
#if __cplusplus >= 201103L
  if (T269.values[0]) dat_prints<144>(s, "sigma addr: %d\n", T270);
#endif
#if __cplusplus >= 201103L
  if (T271.values[0]) dat_prints<144>(s, "sigma write en: %d\n", T272);
#endif
#if __cplusplus >= 201103L
  if (T273.values[0]) dat_prints<168>(s, "sigma write d: %d\n", T274);
#endif
#if __cplusplus >= 201103L
  if (T275.values[0]) dat_prints<120>(s, "pipe 1 done: %d\n", T276);
#endif
#if __cplusplus >= 201103L
  if (T277.values[0]) dat_prints<184>(s, "MetaPipe Init state: %d\n", T278);
#endif
s.flush();
}


void GDA_MetaPipe_FSM_t::dump_init ( FILE* f ) {
}


void GDA_MetaPipe_FSM_t::dump ( FILE* f, val_t t, dat_t<1> reset ) {
}




void GDA_MetaPipe_FSM_t::clock_lo ( dat_t<1> reset, bool assert_fire ) {
  val_t T0;
  T0 = GDA_MetaPipe_FSM_metaPipeFSM__state.values[0] == 0x0L;
  { GDA_MetaPipe_FSM_metaPipeFSM__io_complete_reset.values[0] = T0;}
  { GDA_MetaPipe_FSM_latch_complete_done__io_rst.values[0] = GDA_MetaPipe_FSM_metaPipeFSM__io_complete_reset.values[0];}
  val_t T1;
  { T1 = TERNARY(GDA_MetaPipe_FSM_latch_complete_done__io_rst.values[0], 0x0L, GDA_MetaPipe_FSM_latch_complete_done__latch_reg.values[0]);}
  { GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_counters_max_1.values[0] = 0x3L;}
  { GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_max.values[0] = GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_counters_max_1.values[0];}
  val_t GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__hitMax;
  GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__hitMax = GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_max.values[0]<=GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__currCount.values[0];
  { GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_done.values[0] = GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__hitMax;}
  { GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_counters_max_0.values[0] = 0x3L;}
  { GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__io_max.values[0] = GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_counters_max_0.values[0];}
  val_t GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__hitMax;
  GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__hitMax = GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__io_max.values[0]<=GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__currCount.values[0];
  { GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__io_done.values[0] = GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__hitMax;}
  { GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_en_count.values[0] = GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__io_done.values[0];}
  val_t T2;
  { T2 = GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_en_count.values[0] & GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_done.values[0];}
  val_t T3;
  { T3 = T2 | GDA_MetaPipe_FSM_pipe0_block_matrixCounters__done_complete.values[0];}
  { GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_done_complete.values[0] = T3;}
  { GDA_MetaPipe_FSM_pipe0_block__io_done_complete.values[0] = GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_done_complete.values[0];}
  { GDA_MetaPipe_FSM_latch_complete_done__io_input_val.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_done_complete.values[0];}
  val_t GDA_MetaPipe_FSM_latch_complete_done__latching_val;
  { GDA_MetaPipe_FSM_latch_complete_done__latching_val = GDA_MetaPipe_FSM_latch_complete_done__latch_reg.values[0] | GDA_MetaPipe_FSM_latch_complete_done__io_input_val.values[0];}
  val_t T4;
  { T4 = GDA_MetaPipe_FSM_latch_complete_done__io_rst.values[0] ^ 0x1L;}
  val_t T5;
  { T5 = TERNARY_1(T4, GDA_MetaPipe_FSM_latch_complete_done__latching_val, T1);}
  { GDA_MetaPipe_FSM_latch_complete_done__reset.values[0] = reset.values[0];}
  { T6.values[0] = TERNARY(GDA_MetaPipe_FSM_latch_complete_done__reset.values[0], 0x0L, T5);}
  val_t T7;
  T7 = GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__curr_state.values[0] == 0x3L;
  { GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__io_done.values[0] = T7;}
  { GDA_MetaPipe_FSM_pipe1_block__io_done.values[0] = GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__io_done.values[0];}
  { GDA_MetaPipe_FSM_latch_pipe1_done__io_input_val.values[0] = GDA_MetaPipe_FSM_pipe1_block__io_done.values[0];}
  val_t GDA_MetaPipe_FSM_latch_pipe1_done__latching_val;
  { GDA_MetaPipe_FSM_latch_pipe1_done__latching_val = GDA_MetaPipe_FSM_latch_pipe1_done__latch_reg.values[0] | GDA_MetaPipe_FSM_latch_pipe1_done__io_input_val.values[0];}
  { GDA_MetaPipe_FSM_latch_pipe1_done__io_latch_val.values[0] = GDA_MetaPipe_FSM_latch_pipe1_done__latching_val;}
  { GDA_MetaPipe_FSM_metaPipeFSM__io_done_mp_stages_1.values[0] = GDA_MetaPipe_FSM_latch_pipe1_done__io_latch_val.values[0];}
  val_t T8;
  T8 = GDA_MetaPipe_FSM_metaPipeFSM__state.values[0] == 0x4L;
  val_t T9;
  { T9 = T8 & GDA_MetaPipe_FSM_metaPipeFSM__io_done_mp_stages_1.values[0];}
  val_t T10;
  T10 = GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__curr_state.values[0] == 0x3L;
  { GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__io_done.values[0] = T10;}
  { GDA_MetaPipe_FSM_pipe0_block__io_done.values[0] = GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__io_done.values[0];}
  { GDA_MetaPipe_FSM_latch_pipe0_done__io_input_val.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_done.values[0];}
  val_t GDA_MetaPipe_FSM_latch_pipe0_done__latching_val;
  { GDA_MetaPipe_FSM_latch_pipe0_done__latching_val = GDA_MetaPipe_FSM_latch_pipe0_done__latch_reg.values[0] | GDA_MetaPipe_FSM_latch_pipe0_done__io_input_val.values[0];}
  { GDA_MetaPipe_FSM_latch_pipe0_done__io_latch_val.values[0] = GDA_MetaPipe_FSM_latch_pipe0_done__latching_val;}
  { GDA_MetaPipe_FSM_metaPipeFSM__io_done_mp_stages_0.values[0] = GDA_MetaPipe_FSM_latch_pipe0_done__io_latch_val.values[0];}
  val_t T11;
  T11 = GDA_MetaPipe_FSM_metaPipeFSM__state.values[0] == 0x2L;
  val_t T12;
  { T12 = T11 & GDA_MetaPipe_FSM_metaPipeFSM__io_done_mp_stages_0.values[0];}
  val_t GDA_MetaPipe_FSM_metaPipeFSM__all_pipes_done;
  { GDA_MetaPipe_FSM_metaPipeFSM__all_pipes_done = GDA_MetaPipe_FSM_metaPipeFSM__io_done_mp_stages_0.values[0] & GDA_MetaPipe_FSM_metaPipeFSM__io_done_mp_stages_1.values[0];}
  val_t T13;
  T13 = GDA_MetaPipe_FSM_metaPipeFSM__state.values[0] == 0x3L;
  val_t T14;
  { T14 = T13 & GDA_MetaPipe_FSM_metaPipeFSM__all_pipes_done;}
  val_t T15;
  { T15 = T14 | T12;}
  val_t GDA_MetaPipe_FSM_metaPipeFSM__rst_ens;
  { GDA_MetaPipe_FSM_metaPipeFSM__rst_ens = T15 | T9;}
  val_t T16;
  T16 = GDA_MetaPipe_FSM_metaPipeFSM__state.values[0] == 0x1L;
  val_t T17;
  { T17 = T16 | GDA_MetaPipe_FSM_metaPipeFSM__rst_ens;}
  { GDA_MetaPipe_FSM_metaPipeFSM__io_reset.values[0] = T17;}
  { GDA_MetaPipe_FSM_latch_pipe0_done__io_rst.values[0] = GDA_MetaPipe_FSM_metaPipeFSM__io_reset.values[0];}
  val_t T18;
  { T18 = TERNARY(GDA_MetaPipe_FSM_latch_pipe0_done__io_rst.values[0], 0x0L, GDA_MetaPipe_FSM_latch_pipe0_done__latch_reg.values[0]);}
  val_t T19;
  { T19 = GDA_MetaPipe_FSM_latch_pipe0_done__io_rst.values[0] ^ 0x1L;}
  val_t T20;
  { T20 = TERNARY_1(T19, GDA_MetaPipe_FSM_latch_pipe0_done__latching_val, T18);}
  { GDA_MetaPipe_FSM_latch_pipe0_done__reset.values[0] = reset.values[0];}
  { T21.values[0] = TERNARY(GDA_MetaPipe_FSM_latch_pipe0_done__reset.values[0], 0x0L, T20);}
  { GDA_MetaPipe_FSM_latch_pipe1_done__io_rst.values[0] = GDA_MetaPipe_FSM_metaPipeFSM__io_reset.values[0];}
  val_t T22;
  { T22 = TERNARY(GDA_MetaPipe_FSM_latch_pipe1_done__io_rst.values[0], 0x0L, GDA_MetaPipe_FSM_latch_pipe1_done__latch_reg.values[0]);}
  val_t T23;
  { T23 = GDA_MetaPipe_FSM_latch_pipe1_done__io_rst.values[0] ^ 0x1L;}
  val_t T24;
  { T24 = TERNARY_1(T23, GDA_MetaPipe_FSM_latch_pipe1_done__latching_val, T22);}
  { GDA_MetaPipe_FSM_latch_pipe1_done__reset.values[0] = reset.values[0];}
  { T25.values[0] = TERNARY(GDA_MetaPipe_FSM_latch_pipe1_done__reset.values[0], 0x0L, T24);}
  { GDA_MetaPipe_FSM_pipe1_block_mtxCounter__io_vec_cout_0.values[0] = GDA_MetaPipe_FSM_pipe1_block_mtxCounter__currCount.values[0];}
  { GDA_MetaPipe_FSM_pipe1_block__io_sigma_read_addr.values[0] = GDA_MetaPipe_FSM_pipe1_block_mtxCounter__io_vec_cout_0.values[0];}
  { GDA_MetaPipe_FSM_sigmaM__io_read_addr.values[0] = GDA_MetaPipe_FSM_pipe1_block__io_sigma_read_addr.values[0];}
  val_t T26;
  { T26 = GDA_MetaPipe_FSM_sigmaM__reg_raddr.values[0];}
  T26 = T26 & 0xfL;
  val_t T27;
  { T27 = GDA_MetaPipe_FSM_sigmaM__bRam_rw.get(T26, 0);}
  { GDA_MetaPipe_FSM_sigmaM__io_read_out.values[0] = T27;}
  { GDA_MetaPipe_FSM_pipe1_block__io_sigma_read_out.values[0] = GDA_MetaPipe_FSM_sigmaM__io_read_out.values[0];}
  val_t T28;
  { T28 = GDA_MetaPipe_FSM_pipe1_block__io_sigma_read_out.values[0]+GDA_MetaPipe_FSM_pipe1_block__product_reg.values[0];}
  T28 = T28 & 0xffffL;
  { GDA_MetaPipe_FSM_pipe1_block__io_sigma_write_data.values[0] = T28;}
  { GDA_MetaPipe_FSM_sigmaM__io_write_data.values[0] = GDA_MetaPipe_FSM_pipe1_block__io_sigma_write_data.values[0];}
  { GDA_MetaPipe_FSM_pipe1_block__io_sigma_addr_en.values[0] = GDA_MetaPipe_FSM_pipe1_block__state1_Regs_1.values[0];}
  { GDA_MetaPipe_FSM_sigmaM__io_write_en.values[0] = GDA_MetaPipe_FSM_pipe1_block__io_sigma_addr_en.values[0];}
  { GDA_MetaPipe_FSM_pipe1_block__io_sigma_write_addr.values[0] = GDA_MetaPipe_FSM_pipe1_block__writeaddr_reg.values[0];}
  { GDA_MetaPipe_FSM_sigmaM__io_write_addr.values[0] = GDA_MetaPipe_FSM_pipe1_block__io_sigma_write_addr.values[0];}
  { T29.values[0] = GDA_MetaPipe_FSM_sigmaM__io_write_addr.values[0];}
  T29.values[0] = T29.values[0] & 0xfL;
  val_t T30;
  { T30 = GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__currCount.values[0]+0x1L;}
  T30 = T30 & 0xffffL;
  { GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_counters_max_1.values[0] = 0x3L;}
  { GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_max.values[0] = GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_counters_max_1.values[0];}
  val_t GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__hitMax;
  GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__hitMax = GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_max.values[0]<=GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__currCount.values[0];
  val_t T31;
  { T31 = TERNARY(GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__hitMax, 0x0L, T30);}
  { GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_counters_max_0.values[0] = 0x3L;}
  { GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__io_max.values[0] = GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_counters_max_0.values[0];}
  val_t GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__hitMax;
  GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__hitMax = GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__io_max.values[0]<=GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__currCount.values[0];
  { GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__io_done.values[0] = GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__hitMax;}
  { GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_en_count.values[0] = GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__io_done.values[0];}
  val_t T32;
  { T32 = TERNARY_1(GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_en_count.values[0], T31, GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__currCount.values[0]);}
  { GDA_MetaPipe_FSM_pipe1_block__io_reset.values[0] = GDA_MetaPipe_FSM_metaPipeFSM__io_reset.values[0];}
  { GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_reset.values[0] = GDA_MetaPipe_FSM_pipe1_block__io_reset.values[0];}
  { GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_reset.values[0] = GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_reset.values[0];}
  val_t T33;
  { T33 = GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_en_count.values[0] ^ 0x1L;}
  val_t T34;
  { T34 = T33 & GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_reset.values[0];}
  val_t T35;
  { T35 = TERNARY(T34, 0x0L, T32);}
  { GDA_MetaPipe_FSM_pipe1_block__reset.values[0] = reset.values[0];}
  { GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__reset.values[0] = GDA_MetaPipe_FSM_pipe1_block__reset.values[0];}
  { GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__reset.values[0] = GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__reset.values[0];}
  { T36.values[0] = TERNARY(GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__reset.values[0], 0x0L, T35);}
  val_t T37;
  { T37 = GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__currCount.values[0]+0x1L;}
  T37 = T37 & 0xffffL;
  val_t T38;
  { T38 = TERNARY(GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__hitMax, 0x0L, T37);}
  val_t T39;
  T39 = GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__curr_state.values[0] == 0x1L;
  { GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__io_pipe_enabled.values[0] = T39;}
  { GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_en.values[0] = GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__io_pipe_enabled.values[0];}
  { GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__io_en_count.values[0] = GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_en.values[0];}
  val_t T40;
  { T40 = TERNARY_1(GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__io_en_count.values[0], T38, GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__currCount.values[0]);}
  { GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__io_reset.values[0] = GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_reset.values[0];}
  val_t T41;
  { T41 = GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__io_en_count.values[0] ^ 0x1L;}
  val_t T42;
  { T42 = T41 & GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__io_reset.values[0];}
  val_t T43;
  { T43 = TERNARY(T42, 0x0L, T40);}
  { GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__reset.values[0] = GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__reset.values[0];}
  { T44.values[0] = TERNARY(GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__reset.values[0], 0x0L, T43);}
  { GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_done.values[0] = GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__hitMax;}
  { GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_counters_done_1.values[0] = GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_done.values[0];}
  { GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_counters_done_0.values[0] = GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__io_done.values[0];}
  val_t T45;
  { T45 = TERNARY(GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_reset.values[0], 0x0L, GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__done_complete.values[0]);}
  val_t T46;
  { T46 = GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_en_count.values[0] & GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_done.values[0];}
  val_t T47;
  { T47 = T46 | GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__done_complete.values[0];}
  val_t T48;
  { T48 = GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_reset.values[0] ^ 0x1L;}
  val_t T49;
  { T49 = TERNARY_1(T48, T47, T45);}
  { T50.values[0] = TERNARY(GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__reset.values[0], 0x0L, T49);}
  val_t T51;
  { T51 = GDA_MetaPipe_FSM_pipe1_block_mtxCounter__currCount.values[0]+0x1L;}
  T51 = T51 & 0xffffL;
  { GDA_MetaPipe_FSM_pipe1_block_mtxCounter__io_max.values[0] = 0xfL;}
  val_t GDA_MetaPipe_FSM_pipe1_block_mtxCounter__hitMax;
  GDA_MetaPipe_FSM_pipe1_block_mtxCounter__hitMax = GDA_MetaPipe_FSM_pipe1_block_mtxCounter__io_max.values[0]<=GDA_MetaPipe_FSM_pipe1_block_mtxCounter__currCount.values[0];
  val_t T52;
  { T52 = TERNARY(GDA_MetaPipe_FSM_pipe1_block_mtxCounter__hitMax, 0x0L, T51);}
  { GDA_MetaPipe_FSM_pipe1_block_mtxCounter__io_en_count.values[0] = GDA_MetaPipe_FSM_pipe1_block__state1_Regs_0.values[0];}
  val_t T53;
  { T53 = TERNARY_1(GDA_MetaPipe_FSM_pipe1_block_mtxCounter__io_en_count.values[0], T52, GDA_MetaPipe_FSM_pipe1_block_mtxCounter__currCount.values[0]);}
  { GDA_MetaPipe_FSM_pipe1_block_mtxCounter__io_reset.values[0] = GDA_MetaPipe_FSM_pipe1_block__io_reset.values[0];}
  val_t T54;
  { T54 = GDA_MetaPipe_FSM_pipe1_block_mtxCounter__io_en_count.values[0] ^ 0x1L;}
  val_t T55;
  { T55 = T54 & GDA_MetaPipe_FSM_pipe1_block_mtxCounter__io_reset.values[0];}
  val_t T56;
  { T56 = TERNARY(T55, 0x0L, T53);}
  { GDA_MetaPipe_FSM_pipe1_block_mtxCounter__reset.values[0] = GDA_MetaPipe_FSM_pipe1_block__reset.values[0];}
  { T57.values[0] = TERNARY(GDA_MetaPipe_FSM_pipe1_block_mtxCounter__reset.values[0], 0x0L, T56);}
  { GDA_MetaPipe_FSM_pipe1_block_mtxCounter__io_done.values[0] = GDA_MetaPipe_FSM_pipe1_block_mtxCounter__hitMax;}
  val_t GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__state_wait;
  GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__state_wait = GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__curr_state.values[0] == 0x2L;
  val_t GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__state_en;
  GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__state_en = GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__prev_state.values[0] == 0x1L;
  val_t GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__pipe_pulse;
  { GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__pipe_pulse = GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__state_en & GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__state_wait;}
  { GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__reset.values[0] = GDA_MetaPipe_FSM_pipe1_block__reset.values[0];}
  { T58.values[0] = TERNARY(GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__reset.values[0], 0x0L, GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__pipe_pulse);}
  val_t T59;
  { T59 = GDA_MetaPipe_FSM_metaPipeFSM__io_done_mp_stages_1.values[0] ^ 0x1L;}
  val_t T60;
  T60 = GDA_MetaPipe_FSM_metaPipeFSM__state.values[0] == 0x4L;
  val_t T61;
  T61 = GDA_MetaPipe_FSM_metaPipeFSM__state.values[0] == 0x3L;
  val_t T62;
  { T62 = T61 | T60;}
  val_t T63;
  { T63 = T62 & T59;}
  { GDA_MetaPipe_FSM_metaPipeFSM__io_en_mp_stages_1.values[0] = T63;}
  { GDA_MetaPipe_FSM_pipe1_block__io_pipe_en.values[0] = GDA_MetaPipe_FSM_metaPipeFSM__io_en_mp_stages_1.values[0];}
  { GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__io_en.values[0] = GDA_MetaPipe_FSM_pipe1_block__io_pipe_en.values[0];}
  val_t T64;
  T64 = 0x0L == GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__curr_state.values[0];
  val_t T65;
  { T65 = T64 & GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__io_en.values[0];}
  val_t T66;
  { T66 = TERNARY(T65, 0x1L, GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__curr_state.values[0]);}
  val_t T67;
  { T67 = GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_en_count.values[0] & GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_done.values[0];}
  val_t T68;
  { T68 = T67 | GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__done_complete.values[0];}
  { GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_done_complete.values[0] = T68;}
  { GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__io_counter_done.values[0] = GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_done_complete.values[0];}
  val_t T69;
  T69 = 0x1L == GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__curr_state.values[0];
  val_t T70;
  { T70 = T69 & GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__io_counter_done.values[0];}
  val_t T71;
  { T71 = TERNARY(T70, 0x2L, T66);}
  val_t T72;
  T72 = 0x2L == GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__curr_state.values[0];
  val_t T73;
  { T73 = T72 & GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__wait_done.values[0];}
  val_t T74;
  { T74 = TERNARY(T73, 0x3L, T71);}
  val_t T75;
  T75 = 0x3L == GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__curr_state.values[0];
  val_t T76;
  { T76 = TERNARY(T75, 0x0L, T74);}
  { T77.values[0] = TERNARY(GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__reset.values[0], 0x0L, T76);}
  { T78.values[0] = TERNARY(GDA_MetaPipe_FSM_pipe1_block__reset.values[0], 0x0L, GDA_MetaPipe_FSM_pipe1_block__state1_Regs_0.values[0]);}
  { T79.values[0] = TERNARY(GDA_MetaPipe_FSM_pipe1_block__reset.values[0], 0x0L, GDA_MetaPipe_FSM_pipe1_block_mtxCounter__io_vec_cout_0.values[0]);}
  val_t T80;
  { T80 = GDA_MetaPipe_FSM_subT_2_db_bram_w1__reg_raddr.values[0];}
  T80 = T80 & 0x3L;
  val_t T81;
  { T81 = GDA_MetaPipe_FSM_subT_2_db_bram_w1__bRam_rw.get(T80, 0);}
  { GDA_MetaPipe_FSM_subT_2_db_bram_w1__io_read_out.values[0] = T81;}
  val_t T82;
  { T82 = GDA_MetaPipe_FSM_subT_2_db_bram_w2__reg_raddr.values[0];}
  T82 = T82 & 0x3L;
  val_t T83;
  { T83 = GDA_MetaPipe_FSM_subT_2_db_bram_w2__bRam_rw.get(T82, 0);}
  { GDA_MetaPipe_FSM_subT_2_db_bram_w2__io_read_out.values[0] = T83;}
  val_t T84;
  T84 = GDA_MetaPipe_FSM_subT_2_db__state_read_reg.values[0] == 0x1L;
  val_t T85;
  { T85 = TERNARY_1(T84, GDA_MetaPipe_FSM_subT_2_db_bram_w2__io_read_out.values[0], GDA_MetaPipe_FSM_subT_2_db_bram_w1__io_read_out.values[0]);}
  { GDA_MetaPipe_FSM_subT_2_db__io_read_out.values[0] = T85;}
  { GDA_MetaPipe_FSM_pipe1_block__io_subT_2_out.values[0] = GDA_MetaPipe_FSM_subT_2_db__io_read_out.values[0];}
  val_t T86;
  { T86 = GDA_MetaPipe_FSM_subT_db_bram_w1__reg_raddr.values[0];}
  T86 = T86 & 0x3L;
  val_t T87;
  { T87 = GDA_MetaPipe_FSM_subT_db_bram_w1__bRam_rw.get(T86, 0);}
  { GDA_MetaPipe_FSM_subT_db_bram_w1__io_read_out.values[0] = T87;}
  val_t T88;
  { T88 = GDA_MetaPipe_FSM_subT_db_bram_w2__reg_raddr.values[0];}
  T88 = T88 & 0x3L;
  val_t T89;
  { T89 = GDA_MetaPipe_FSM_subT_db_bram_w2__bRam_rw.get(T88, 0);}
  { GDA_MetaPipe_FSM_subT_db_bram_w2__io_read_out.values[0] = T89;}
  val_t T90;
  T90 = GDA_MetaPipe_FSM_subT_db__state_read_reg.values[0] == 0x1L;
  val_t T91;
  { T91 = TERNARY_1(T90, GDA_MetaPipe_FSM_subT_db_bram_w2__io_read_out.values[0], GDA_MetaPipe_FSM_subT_db_bram_w1__io_read_out.values[0]);}
  { GDA_MetaPipe_FSM_subT_db__io_read_out.values[0] = T91;}
  { GDA_MetaPipe_FSM_pipe1_block__io_subT_out.values[0] = GDA_MetaPipe_FSM_subT_db__io_read_out.values[0];}
  val_t T92;
  T92 = GDA_MetaPipe_FSM_pipe1_block__io_subT_out.values[0] * GDA_MetaPipe_FSM_pipe1_block__io_subT_2_out.values[0];
  val_t T93;
  { T93 = TERNARY(GDA_MetaPipe_FSM_pipe1_block__reset.values[0], 0x0L, T92);}
  { T94.values[0] = T93;}
  T94.values[0] = T94.values[0] & 0xffffL;
  { T95.values[0] = TERNARY(GDA_MetaPipe_FSM_pipe1_block__reset.values[0], 0x0L, GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__io_pipe_enabled.values[0]);}
  { GDA_MetaPipe_FSM_pipe0_block__io_reset.values[0] = GDA_MetaPipe_FSM_metaPipeFSM__io_reset.values[0];}
  { GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__io_reset.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_reset.values[0];}
  val_t T96;
  { T96 = TERNARY(GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__io_reset.values[0], 0x0L, GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__sub_reg.values[0]);}
  val_t T97;
  { T97 = GDA_MetaPipe_FSM_mu0__reg_raddr.values[0];}
  T97 = T97 & 0x3L;
  val_t T98;
  { T98 = GDA_MetaPipe_FSM_mu0__bRam_rw.get(T97, 0);}
  { GDA_MetaPipe_FSM_mu0__io_read_out.values[0] = T98;}
  { GDA_MetaPipe_FSM_pipe0_block__io_mu0_out.values[0] = GDA_MetaPipe_FSM_mu0__io_read_out.values[0];}
  { GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__io_mu0.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_mu0_out.values[0];}
  val_t T99;
  { T99 = GDA_MetaPipe_FSM_mu1__reg_raddr.values[0];}
  T99 = T99 & 0x3L;
  val_t T100;
  { T100 = GDA_MetaPipe_FSM_mu1__bRam_rw.get(T99, 0);}
  { GDA_MetaPipe_FSM_mu1__io_read_out.values[0] = T100;}
  { GDA_MetaPipe_FSM_pipe0_block__io_mu1_out.values[0] = GDA_MetaPipe_FSM_mu1__io_read_out.values[0];}
  { GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__io_mu1.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_mu1_out.values[0];}
  val_t T101;
  { T101 = GDA_MetaPipe_FSM_mean_y_vec__reg_raddr.values[0];}
  T101 = T101 & 0x3L;
  val_t T102;
  { T102 = GDA_MetaPipe_FSM_mean_y_vec__bRam_rw.get(T101, 0);}
  { GDA_MetaPipe_FSM_mean_y_vec__io_read_out.values[0] = T102;}
  { GDA_MetaPipe_FSM_pipe0_block__io_y_out.values[0] = GDA_MetaPipe_FSM_mean_y_vec__io_read_out.values[0];}
  { GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__io_y.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_y_out.values[0];}
  val_t GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__sub;
  { GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__sub = TERNARY_1(GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__io_y.values[0], GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__io_mu1.values[0], GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__io_mu0.values[0]);}
  val_t T103;
  { T103 = GDA_MetaPipe_FSM_x_matrix__reg_raddr.values[0];}
  T103 = T103 & 0xfL;
  val_t T104;
  { T104 = GDA_MetaPipe_FSM_x_matrix__bRam_rw.get(T103, 0);}
  { GDA_MetaPipe_FSM_x_matrix__io_read_out.values[0] = T104;}
  { GDA_MetaPipe_FSM_pipe0_block__io_x_out.values[0] = GDA_MetaPipe_FSM_x_matrix__io_read_out.values[0];}
  { GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__io_x.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_x_out.values[0];}
  val_t GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__vec_sub;
  { GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__vec_sub = GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__io_x.values[0]-GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__sub;}
  GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__vec_sub = GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__vec_sub & 0xffffL;
  val_t T105;
  { T105 = GDA_MetaPipe_FSM_metaPipeFSM__io_done_mp_stages_0.values[0] ^ 0x1L;}
  val_t T106;
  T106 = GDA_MetaPipe_FSM_metaPipeFSM__state.values[0] == 0x3L;
  val_t T107;
  T107 = GDA_MetaPipe_FSM_metaPipeFSM__state.values[0] == 0x2L;
  val_t T108;
  { T108 = T107 | T106;}
  val_t T109;
  { T109 = T108 & T105;}
  { GDA_MetaPipe_FSM_metaPipeFSM__io_en_mp_stages_0.values[0] = T109;}
  { GDA_MetaPipe_FSM_pipe0_block__io_pipe_en.values[0] = GDA_MetaPipe_FSM_metaPipeFSM__io_en_mp_stages_0.values[0];}
  { GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__io_en.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_pipe_en.values[0];}
  val_t T110;
  { T110 = GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__io_reset.values[0] ^ 0x1L;}
  val_t T111;
  { T111 = T110 & GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__io_en.values[0];}
  val_t T112;
  { T112 = TERNARY_1(T111, GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__vec_sub, T96);}
  { GDA_MetaPipe_FSM_pipe0_block__reset.values[0] = reset.values[0];}
  { GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__reset.values[0] = GDA_MetaPipe_FSM_pipe0_block__reset.values[0];}
  { T113.values[0] = TERNARY(GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__reset.values[0], 0x0L, T112);}
  { GDA_MetaPipe_FSM_pipe0_block_mu_addr__io_reset.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_reset.values[0];}
  val_t T114;
  { T114 = TERNARY(GDA_MetaPipe_FSM_pipe0_block_mu_addr__io_reset.values[0], 0x0L, GDA_MetaPipe_FSM_pipe0_block_mu_addr__mult_reg.values[0]);}
  { GDA_MetaPipe_FSM_pipe0_block_mu_addr__io_in.values[0] = 0x0L;}
  { GDA_MetaPipe_FSM_pipe0_block_mu_addr__io_const_dim.values[0] = 0x0L;}
  val_t GDA_MetaPipe_FSM_pipe0_block_mu_addr__mult_block;
  GDA_MetaPipe_FSM_pipe0_block_mu_addr__mult_block = GDA_MetaPipe_FSM_pipe0_block_mu_addr__io_const_dim.values[0] * GDA_MetaPipe_FSM_pipe0_block_mu_addr__io_in.values[0];
  val_t T115;
  { T115 = GDA_MetaPipe_FSM_pipe0_block_mu_addr__io_reset.values[0] ^ 0x1L;}
  val_t T116;
  { T116 = TERNARY_1(T115, GDA_MetaPipe_FSM_pipe0_block_mu_addr__mult_block, T114);}
  { GDA_MetaPipe_FSM_pipe0_block_mu_addr__reset.values[0] = GDA_MetaPipe_FSM_pipe0_block__reset.values[0];}
  { T117.values[0] = TERNARY(GDA_MetaPipe_FSM_pipe0_block_mu_addr__reset.values[0], 0x0L, T116);}
  val_t T118;
  { T118 = TERNARY(GDA_MetaPipe_FSM_pipe0_block_mu_addr__io_reset.values[0], 0x0L, GDA_MetaPipe_FSM_pipe0_block_mu_addr__k_reg.values[0]);}
  { GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__io_vec_cout_0.values[0] = GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__currCount.values[0];}
  { GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_counters_cout_0_0.values[0] = GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__io_vec_cout_0.values[0];}
  { GDA_MetaPipe_FSM_pipe0_block_mu_addr__io_k.values[0] = GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_counters_cout_0_0.values[0];}
  val_t T119;
  { T119 = TERNARY_1(T115, GDA_MetaPipe_FSM_pipe0_block_mu_addr__io_k.values[0], T118);}
  { T120.values[0] = TERNARY(GDA_MetaPipe_FSM_pipe0_block_mu_addr__reset.values[0], 0x0L, T119);}
  { GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__io_reset.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_reset.values[0];}
  val_t T121;
  { T121 = TERNARY(GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__io_reset.values[0], 0x0L, GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__mult_reg.values[0]);}
  { GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__io_in.values[0] = 0x0L;}
  { GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__io_const_dim.values[0] = 0x0L;}
  val_t GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__mult_block;
  GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__mult_block = GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__io_const_dim.values[0] * GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__io_in.values[0];
  val_t T122;
  { T122 = GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__io_reset.values[0] ^ 0x1L;}
  val_t T123;
  { T123 = TERNARY_1(T122, GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__mult_block, T121);}
  { GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__reset.values[0] = GDA_MetaPipe_FSM_pipe0_block__reset.values[0];}
  { T124.values[0] = TERNARY(GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__reset.values[0], 0x0L, T123);}
  val_t T125;
  { T125 = TERNARY(GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__io_reset.values[0], 0x0L, GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__k_reg.values[0]);}
  { GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_vec_cout_0.values[0] = GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__currCount.values[0];}
  { GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_counters_cout_1_0.values[0] = GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_vec_cout_0.values[0];}
  { GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__io_k.values[0] = GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_counters_cout_1_0.values[0];}
  val_t T126;
  { T126 = TERNARY_1(T122, GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__io_k.values[0], T125);}
  { T127.values[0] = TERNARY(GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__reset.values[0], 0x0L, T126);}
  { GDA_MetaPipe_FSM_pipe0_block_matrix_addr__io_reset.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_reset.values[0];}
  val_t T128;
  { T128 = TERNARY(GDA_MetaPipe_FSM_pipe0_block_matrix_addr__io_reset.values[0], 0x0L, GDA_MetaPipe_FSM_pipe0_block_matrix_addr__mult_reg.values[0]);}
  { GDA_MetaPipe_FSM_pipe0_block_matrix_addr__io_in.values[0] = GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_counters_cout_1_0.values[0];}
  { GDA_MetaPipe_FSM_pipe0_block_matrix_addr__io_const_dim.values[0] = 0x4L;}
  val_t GDA_MetaPipe_FSM_pipe0_block_matrix_addr__mult_block;
  GDA_MetaPipe_FSM_pipe0_block_matrix_addr__mult_block = GDA_MetaPipe_FSM_pipe0_block_matrix_addr__io_const_dim.values[0] * GDA_MetaPipe_FSM_pipe0_block_matrix_addr__io_in.values[0];
  val_t T129;
  { T129 = GDA_MetaPipe_FSM_pipe0_block_matrix_addr__io_reset.values[0] ^ 0x1L;}
  val_t T130;
  { T130 = TERNARY_1(T129, GDA_MetaPipe_FSM_pipe0_block_matrix_addr__mult_block, T128);}
  { GDA_MetaPipe_FSM_pipe0_block_matrix_addr__reset.values[0] = GDA_MetaPipe_FSM_pipe0_block__reset.values[0];}
  { T131.values[0] = TERNARY(GDA_MetaPipe_FSM_pipe0_block_matrix_addr__reset.values[0], 0x0L, T130);}
  val_t T132;
  { T132 = TERNARY(GDA_MetaPipe_FSM_pipe0_block_matrix_addr__io_reset.values[0], 0x0L, GDA_MetaPipe_FSM_pipe0_block_matrix_addr__k_reg.values[0]);}
  { GDA_MetaPipe_FSM_pipe0_block_matrix_addr__io_k.values[0] = GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_counters_cout_0_0.values[0];}
  val_t T133;
  { T133 = TERNARY_1(T129, GDA_MetaPipe_FSM_pipe0_block_matrix_addr__io_k.values[0], T132);}
  { T134.values[0] = TERNARY(GDA_MetaPipe_FSM_pipe0_block_matrix_addr__reset.values[0], 0x0L, T133);}
  val_t T135;
  { T135 = GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__currCount.values[0]+0x1L;}
  T135 = T135 & 0xffffL;
  val_t T136;
  { T136 = TERNARY(GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__hitMax, 0x0L, T135);}
  val_t T137;
  { T137 = TERNARY_1(GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_en_count.values[0], T136, GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__currCount.values[0]);}
  { GDA_MetaPipe_FSM_pipe0_block__io_complete_reset.values[0] = GDA_MetaPipe_FSM_metaPipeFSM__io_complete_reset.values[0];}
  { GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_reset.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_complete_reset.values[0];}
  { GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_reset.values[0] = GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_reset.values[0];}
  val_t T138;
  { T138 = GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_en_count.values[0] ^ 0x1L;}
  val_t T139;
  { T139 = T138 & GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_reset.values[0];}
  val_t T140;
  { T140 = TERNARY(T139, 0x0L, T137);}
  { GDA_MetaPipe_FSM_pipe0_block_matrixCounters__reset.values[0] = GDA_MetaPipe_FSM_pipe0_block__reset.values[0];}
  { GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__reset.values[0] = GDA_MetaPipe_FSM_pipe0_block_matrixCounters__reset.values[0];}
  { T141.values[0] = TERNARY(GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__reset.values[0], 0x0L, T140);}
  val_t T142;
  { T142 = GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__currCount.values[0]+0x1L;}
  T142 = T142 & 0xffffL;
  val_t T143;
  { T143 = TERNARY(GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__hitMax, 0x0L, T142);}
  val_t T144;
  T144 = GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__curr_state.values[0] == 0x1L;
  { GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__io_pipe_enabled.values[0] = T144;}
  { GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_en.values[0] = GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__io_pipe_enabled.values[0];}
  { GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__io_en_count.values[0] = GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_en.values[0];}
  val_t T145;
  { T145 = TERNARY_1(GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__io_en_count.values[0], T143, GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__currCount.values[0]);}
  { GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__io_reset.values[0] = GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_reset.values[0];}
  val_t T146;
  { T146 = GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__io_en_count.values[0] ^ 0x1L;}
  val_t T147;
  { T147 = T146 & GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__io_reset.values[0];}
  val_t T148;
  { T148 = TERNARY(T147, 0x0L, T145);}
  { GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__reset.values[0] = GDA_MetaPipe_FSM_pipe0_block_matrixCounters__reset.values[0];}
  { T149.values[0] = TERNARY(GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__reset.values[0], 0x0L, T148);}
  { GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_counters_done_1.values[0] = GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_done.values[0];}
  val_t T150;
  { T150 = TERNARY(GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_reset.values[0], 0x0L, GDA_MetaPipe_FSM_pipe0_block_matrixCounters__done_complete.values[0]);}
  val_t T151;
  { T151 = GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_en_count.values[0] & GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_done.values[0];}
  val_t T152;
  { T152 = T151 | GDA_MetaPipe_FSM_pipe0_block_matrixCounters__done_complete.values[0];}
  val_t T153;
  { T153 = GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_reset.values[0] ^ 0x1L;}
  val_t T154;
  { T154 = TERNARY_1(T153, T152, T150);}
  { T155.values[0] = TERNARY(GDA_MetaPipe_FSM_pipe0_block_matrixCounters__reset.values[0], 0x0L, T154);}
  val_t GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__state_wait;
  GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__state_wait = GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__curr_state.values[0] == 0x2L;
  val_t GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__state_en;
  GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__state_en = GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__prev_state.values[0] == 0x1L;
  val_t GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__pipe_pulse;
  { GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__pipe_pulse = GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__state_en & GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__state_wait;}
  { GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__reset.values[0] = GDA_MetaPipe_FSM_pipe0_block__reset.values[0];}
  { T156.values[0] = TERNARY(GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__reset.values[0], 0x0L, GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__pipe_pulse);}
  { GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__io_en.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_pipe_en.values[0];}
  val_t T157;
  T157 = 0x0L == GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__curr_state.values[0];
  val_t T158;
  { T158 = T157 & GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__io_en.values[0];}
  val_t T159;
  { T159 = TERNARY(T158, 0x1L, GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__curr_state.values[0]);}
  { GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_counters_done_0.values[0] = GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__io_done.values[0];}
  { GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__io_counter_done.values[0] = GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_counters_done_0.values[0];}
  val_t T160;
  T160 = 0x1L == GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__curr_state.values[0];
  val_t T161;
  { T161 = T160 & GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__io_counter_done.values[0];}
  val_t T162;
  { T162 = TERNARY(T161, 0x2L, T159);}
  val_t T163;
  T163 = 0x2L == GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__curr_state.values[0];
  val_t T164;
  { T164 = T163 & GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__wait_done.values[0];}
  val_t T165;
  { T165 = TERNARY(T164, 0x3L, T162);}
  val_t T166;
  T166 = 0x3L == GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__curr_state.values[0];
  val_t T167;
  { T167 = TERNARY(T166, 0x0L, T165);}
  { T168.values[0] = TERNARY(GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__reset.values[0], 0x0L, T167);}
  { T169.values[0] = TERNARY(GDA_MetaPipe_FSM_pipe0_block__reset.values[0], 0x0L, GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__io_pipe_enabled.values[0]);}
  { T170.values[0] = TERNARY(GDA_MetaPipe_FSM_pipe0_block__reset.values[0], 0x0L, GDA_MetaPipe_FSM_pipe0_block__state0_Regs_0.values[0]);}
  val_t T171;
  { T171 = GDA_MetaPipe_FSM_pipe0_block_mu_addr__k_reg.values[0] | 0x0L << 16;}
  val_t T172;
  { T172 = GDA_MetaPipe_FSM_pipe0_block_mu_addr__mult_reg.values[0]+T171;}
  T172 = T172 & 0xffffffffL;
  { GDA_MetaPipe_FSM_pipe0_block_mu_addr__io_out.values[0] = T172;}
  val_t T173;
  { T173 = TERNARY(GDA_MetaPipe_FSM_pipe0_block__reset.values[0], 0x0L, GDA_MetaPipe_FSM_pipe0_block_mu_addr__io_out.values[0]);}
  { T174.values[0] = T173;}
  T174.values[0] = T174.values[0] & 0xffffL;
  { GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_vec_cout_0.values[0] = GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__currCount.values[0];}
  { GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_counters_cout_1_0.values[0] = GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_vec_cout_0.values[0];}
  { GDA_MetaPipe_FSM_pipe1_block__io_subT_2_addr.values[0] = GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_counters_cout_1_0.values[0];}
  { GDA_MetaPipe_FSM_subT_2_db__io_read_addr_vec_0.values[0] = GDA_MetaPipe_FSM_pipe1_block__io_subT_2_addr.values[0];}
  { GDA_MetaPipe_FSM_subT_2_db_bram_w2__io_read_addr.values[0] = GDA_MetaPipe_FSM_subT_2_db__io_read_addr_vec_0.values[0];}
  { GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__io_output_float.values[0] = GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__sub_reg.values[0];}
  { GDA_MetaPipe_FSM_pipe0_block__io_output_float.values[0] = GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__io_output_float.values[0];}
  { GDA_MetaPipe_FSM_subT_2_db__io_write_data.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_output_float.values[0];}
  { GDA_MetaPipe_FSM_subT_2_db_bram_w2__io_write_data.values[0] = GDA_MetaPipe_FSM_subT_2_db__io_write_data.values[0];}
  val_t T175;
  T175 = GDA_MetaPipe_FSM_subT_2_db__state.values[0] == 0x2L;
  { GDA_MetaPipe_FSM_pipe0_block__io_addr_en.values[0] = GDA_MetaPipe_FSM_pipe0_block__state0_Regs_1.values[0];}
  { GDA_MetaPipe_FSM_subT_2_db__io_write_en.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_addr_en.values[0];}
  val_t T176;
  { T176 = GDA_MetaPipe_FSM_subT_2_db__io_write_en.values[0] & T175;}
  { GDA_MetaPipe_FSM_subT_2_db_bram_w2__io_write_en.values[0] = T176;}
  { GDA_MetaPipe_FSM_pipe0_block__io_subT_addr.values[0] = GDA_MetaPipe_FSM_pipe0_block__mu_addr_Regs.values[0];}
  { GDA_MetaPipe_FSM_subT_2_db__io_write_addr.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_subT_addr.values[0];}
  { GDA_MetaPipe_FSM_subT_2_db_bram_w2__io_write_addr.values[0] = GDA_MetaPipe_FSM_subT_2_db__io_write_addr.values[0];}
  { T177.values[0] = GDA_MetaPipe_FSM_subT_2_db_bram_w2__io_write_addr.values[0];}
  T177.values[0] = T177.values[0] & 0x3L;
  { GDA_MetaPipe_FSM_subT_2_db_bram_w1__io_read_addr.values[0] = GDA_MetaPipe_FSM_subT_2_db__io_read_addr_vec_0.values[0];}
  { GDA_MetaPipe_FSM_subT_2_db_bram_w1__io_write_data.values[0] = GDA_MetaPipe_FSM_subT_2_db__io_write_data.values[0];}
  val_t T178;
  T178 = GDA_MetaPipe_FSM_subT_2_db__state.values[0] == 0x1L;
  val_t T179;
  { T179 = GDA_MetaPipe_FSM_subT_2_db__io_write_en.values[0] & T178;}
  { GDA_MetaPipe_FSM_subT_2_db_bram_w1__io_write_en.values[0] = T179;}
  { GDA_MetaPipe_FSM_subT_2_db_bram_w1__io_write_addr.values[0] = GDA_MetaPipe_FSM_subT_2_db__io_write_addr.values[0];}
  { T180.values[0] = GDA_MetaPipe_FSM_subT_2_db_bram_w1__io_write_addr.values[0];}
  T180.values[0] = T180.values[0] & 0x3L;
  { GDA_MetaPipe_FSM_subT_2_db__reset.values[0] = reset.values[0];}
  { T181.values[0] = TERNARY(GDA_MetaPipe_FSM_subT_2_db__reset.values[0], 0x0L, GDA_MetaPipe_FSM_subT_2_db__state.values[0]);}
  val_t T182;
  { T182 = GDA_MetaPipe_FSM_metaPipeFSM__io_en_mp_stages_0.values[0] ^ 0x1L;}
  val_t T183;
  { T183 = GDA_MetaPipe_FSM_pipe0_block__io_done.values[0] | T182;}
  { GDA_MetaPipe_FSM_subT_2_db__io_write_done.values[0] = T183;}
  val_t T184;
  { T184 = GDA_MetaPipe_FSM_metaPipeFSM__io_en_mp_stages_1.values[0] ^ 0x1L;}
  val_t T185;
  { T185 = GDA_MetaPipe_FSM_pipe1_block__io_done.values[0] | T184;}
  { GDA_MetaPipe_FSM_subT_2_db__io_read_done_vec_0.values[0] = T185;}
  val_t T186;
  { T186 = GDA_MetaPipe_FSM_subT_2_db__latch_read_done_vec_0.values[0] | GDA_MetaPipe_FSM_subT_2_db__io_read_done_vec_0.values[0];}
  val_t GDA_MetaPipe_FSM_subT_2_db__buffering_done;
  { GDA_MetaPipe_FSM_subT_2_db__buffering_done = T186 & GDA_MetaPipe_FSM_subT_2_db__io_write_done.values[0];}
  val_t T187;
  { T187 = TERNARY(GDA_MetaPipe_FSM_subT_2_db__buffering_done, 0x0L, GDA_MetaPipe_FSM_subT_2_db__latch_read_done_vec_0.values[0]);}
  val_t T188;
  { T188 = GDA_MetaPipe_FSM_subT_2_db__buffering_done ^ 0x1L;}
  val_t T189;
  { T189 = TERNARY_1(T188, T186, T187);}
  { T190.values[0] = TERNARY(GDA_MetaPipe_FSM_subT_2_db__reset.values[0], 0x0L, T189);}
  val_t T191;
  T191 = 0x0L == GDA_MetaPipe_FSM_subT_2_db__state.values[0];
  val_t T192;
  { T192 = TERNARY(T191, 0x1L, GDA_MetaPipe_FSM_subT_2_db__state.values[0]);}
  val_t T193;
  T193 = 0x1L == GDA_MetaPipe_FSM_subT_2_db__state.values[0];
  val_t T194;
  { T194 = T193 & GDA_MetaPipe_FSM_subT_2_db__buffering_done;}
  val_t T195;
  { T195 = TERNARY(T194, 0x2L, T192);}
  val_t T196;
  T196 = 0x2L == GDA_MetaPipe_FSM_subT_2_db__state.values[0];
  val_t T197;
  { T197 = T196 & GDA_MetaPipe_FSM_subT_2_db__buffering_done;}
  val_t T198;
  { T198 = TERNARY(T197, 0x1L, T195);}
  { T199.values[0] = TERNARY(GDA_MetaPipe_FSM_subT_2_db__reset.values[0], 0x0L, T198);}
  { GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__io_vec_cout_0.values[0] = GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__currCount.values[0];}
  { GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_counters_cout_0_0.values[0] = GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__io_vec_cout_0.values[0];}
  { GDA_MetaPipe_FSM_pipe1_block__io_subT_addr.values[0] = GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_counters_cout_0_0.values[0];}
  { GDA_MetaPipe_FSM_subT_db__io_read_addr_vec_0.values[0] = GDA_MetaPipe_FSM_pipe1_block__io_subT_addr.values[0];}
  { GDA_MetaPipe_FSM_subT_db_bram_w2__io_read_addr.values[0] = GDA_MetaPipe_FSM_subT_db__io_read_addr_vec_0.values[0];}
  { GDA_MetaPipe_FSM_subT_db__io_write_data.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_output_float.values[0];}
  { GDA_MetaPipe_FSM_subT_db_bram_w2__io_write_data.values[0] = GDA_MetaPipe_FSM_subT_db__io_write_data.values[0];}
  val_t T200;
  T200 = GDA_MetaPipe_FSM_subT_db__state.values[0] == 0x2L;
  { GDA_MetaPipe_FSM_subT_db__io_write_en.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_addr_en.values[0];}
  val_t T201;
  { T201 = GDA_MetaPipe_FSM_subT_db__io_write_en.values[0] & T200;}
  { GDA_MetaPipe_FSM_subT_db_bram_w2__io_write_en.values[0] = T201;}
  { GDA_MetaPipe_FSM_subT_db__io_write_addr.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_subT_addr.values[0];}
  { GDA_MetaPipe_FSM_subT_db_bram_w2__io_write_addr.values[0] = GDA_MetaPipe_FSM_subT_db__io_write_addr.values[0];}
  { T202.values[0] = GDA_MetaPipe_FSM_subT_db_bram_w2__io_write_addr.values[0];}
  T202.values[0] = T202.values[0] & 0x3L;
  { GDA_MetaPipe_FSM_subT_db_bram_w1__io_read_addr.values[0] = GDA_MetaPipe_FSM_subT_db__io_read_addr_vec_0.values[0];}
  { GDA_MetaPipe_FSM_subT_db_bram_w1__io_write_data.values[0] = GDA_MetaPipe_FSM_subT_db__io_write_data.values[0];}
  val_t T203;
  T203 = GDA_MetaPipe_FSM_subT_db__state.values[0] == 0x1L;
  val_t T204;
  { T204 = GDA_MetaPipe_FSM_subT_db__io_write_en.values[0] & T203;}
  { GDA_MetaPipe_FSM_subT_db_bram_w1__io_write_en.values[0] = T204;}
  { GDA_MetaPipe_FSM_subT_db_bram_w1__io_write_addr.values[0] = GDA_MetaPipe_FSM_subT_db__io_write_addr.values[0];}
  { T205.values[0] = GDA_MetaPipe_FSM_subT_db_bram_w1__io_write_addr.values[0];}
  T205.values[0] = T205.values[0] & 0x3L;
  { GDA_MetaPipe_FSM_subT_db__reset.values[0] = reset.values[0];}
  { T206.values[0] = TERNARY(GDA_MetaPipe_FSM_subT_db__reset.values[0], 0x0L, GDA_MetaPipe_FSM_subT_db__state.values[0]);}
  val_t T207;
  { T207 = GDA_MetaPipe_FSM_metaPipeFSM__io_en_mp_stages_0.values[0] ^ 0x1L;}
  val_t T208;
  { T208 = GDA_MetaPipe_FSM_pipe0_block__io_done.values[0] | T207;}
  { GDA_MetaPipe_FSM_subT_db__io_write_done.values[0] = T208;}
  val_t T209;
  { T209 = GDA_MetaPipe_FSM_metaPipeFSM__io_en_mp_stages_1.values[0] ^ 0x1L;}
  val_t T210;
  { T210 = GDA_MetaPipe_FSM_pipe1_block__io_done.values[0] | T209;}
  { GDA_MetaPipe_FSM_subT_db__io_read_done_vec_0.values[0] = T210;}
  val_t T211;
  { T211 = GDA_MetaPipe_FSM_subT_db__latch_read_done_vec_0.values[0] | GDA_MetaPipe_FSM_subT_db__io_read_done_vec_0.values[0];}
  val_t GDA_MetaPipe_FSM_subT_db__buffering_done;
  { GDA_MetaPipe_FSM_subT_db__buffering_done = T211 & GDA_MetaPipe_FSM_subT_db__io_write_done.values[0];}
  val_t T212;
  { T212 = TERNARY(GDA_MetaPipe_FSM_subT_db__buffering_done, 0x0L, GDA_MetaPipe_FSM_subT_db__latch_read_done_vec_0.values[0]);}
  val_t T213;
  { T213 = GDA_MetaPipe_FSM_subT_db__buffering_done ^ 0x1L;}
  val_t T214;
  { T214 = TERNARY_1(T213, T211, T212);}
  { T215.values[0] = TERNARY(GDA_MetaPipe_FSM_subT_db__reset.values[0], 0x0L, T214);}
  val_t T216;
  T216 = 0x0L == GDA_MetaPipe_FSM_subT_db__state.values[0];
  val_t T217;
  { T217 = TERNARY(T216, 0x1L, GDA_MetaPipe_FSM_subT_db__state.values[0]);}
  val_t T218;
  T218 = 0x1L == GDA_MetaPipe_FSM_subT_db__state.values[0];
  val_t T219;
  { T219 = T218 & GDA_MetaPipe_FSM_subT_db__buffering_done;}
  val_t T220;
  { T220 = TERNARY(T219, 0x2L, T217);}
  val_t T221;
  T221 = 0x2L == GDA_MetaPipe_FSM_subT_db__state.values[0];
  val_t T222;
  { T222 = T221 & GDA_MetaPipe_FSM_subT_db__buffering_done;}
  val_t T223;
  { T223 = TERNARY(T222, 0x1L, T220);}
  { T224.values[0] = TERNARY(GDA_MetaPipe_FSM_subT_db__reset.values[0], 0x0L, T223);}
  { val_t __r = this->__rand_val(); GDA_MetaPipe_FSM_subT_2__io_read_addr.values[0] = __r;}
  GDA_MetaPipe_FSM_subT_2__io_read_addr.values[0] = GDA_MetaPipe_FSM_subT_2__io_read_addr.values[0] & 0xffffL;
  { GDA_MetaPipe_FSM_subT_2__io_write_data.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_output_float.values[0];}
  { GDA_MetaPipe_FSM_subT_2__io_write_en.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_addr_en.values[0];}
  { GDA_MetaPipe_FSM_subT_2__io_write_addr.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_subT_addr.values[0];}
  { T225.values[0] = GDA_MetaPipe_FSM_subT_2__io_write_addr.values[0];}
  T225.values[0] = T225.values[0] & 0x3L;
  val_t T226;
  { T226 = GDA_MetaPipe_FSM_subT_2__reg_raddr.values[0];}
  T226 = T226 & 0x3L;
  val_t T227;
  { T227 = GDA_MetaPipe_FSM_subT_2__bRam_rw.get(T226, 0);}
  { GDA_MetaPipe_FSM_subT_2__io_read_out.values[0] = T227;}
  { val_t __r = this->__rand_val(); GDA_MetaPipe_FSM_subT__io_read_addr.values[0] = __r;}
  GDA_MetaPipe_FSM_subT__io_read_addr.values[0] = GDA_MetaPipe_FSM_subT__io_read_addr.values[0] & 0xffffL;
  { GDA_MetaPipe_FSM_subT__io_write_data.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_output_float.values[0];}
  { GDA_MetaPipe_FSM_subT__io_write_en.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_addr_en.values[0];}
  { GDA_MetaPipe_FSM_subT__io_write_addr.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_subT_addr.values[0];}
  { T228.values[0] = GDA_MetaPipe_FSM_subT__io_write_addr.values[0];}
  T228.values[0] = T228.values[0] & 0x3L;
  val_t T229;
  { T229 = GDA_MetaPipe_FSM_subT__reg_raddr.values[0];}
  T229 = T229 & 0x3L;
  val_t T230;
  { T230 = GDA_MetaPipe_FSM_subT__bRam_rw.get(T229, 0);}
  { GDA_MetaPipe_FSM_subT__io_read_out.values[0] = T230;}
  { GDA_MetaPipe_FSM_metaPipeFSM__io_en.values[0] = GDA_MetaPipe_FSM__io_en.values[0];}
  val_t T231;
  T231 = 0x0L == GDA_MetaPipe_FSM_metaPipeFSM__state.values[0];
  val_t T232;
  { T232 = T231 & GDA_MetaPipe_FSM_metaPipeFSM__io_en.values[0];}
  val_t T233;
  { T233 = TERNARY(T232, 0x1L, GDA_MetaPipe_FSM_metaPipeFSM__state.values[0]);}
  val_t T234;
  T234 = 0x1L == GDA_MetaPipe_FSM_metaPipeFSM__state.values[0];
  val_t T235;
  { T235 = TERNARY(T234, 0x2L, T233);}
  val_t T236;
  T236 = 0x5L == GDA_MetaPipe_FSM_metaPipeFSM__state.values[0];
  val_t T237;
  { T237 = TERNARY(T236, 0x0L, T235);}
  val_t T238;
  T238 = GDA_MetaPipe_FSM_metaPipeFSM__state.values[0] == 0x2L;
  val_t T239;
  { T239 = T238 & GDA_MetaPipe_FSM_metaPipeFSM__io_done_mp_stages_0.values[0];}
  val_t T240;
  { T240 = TERNARY(T239, 0x3L, T237);}
  { GDA_MetaPipe_FSM_latch_complete_done__io_latch_val.values[0] = GDA_MetaPipe_FSM_latch_complete_done__latching_val;}
  { GDA_MetaPipe_FSM_metaPipeFSM__io_done_complete.values[0] = GDA_MetaPipe_FSM_latch_complete_done__io_latch_val.values[0];}
  val_t T241;
  { T241 = GDA_MetaPipe_FSM_metaPipeFSM__io_done_complete.values[0] & GDA_MetaPipe_FSM_metaPipeFSM__all_pipes_done;}
  val_t T242;
  T242 = GDA_MetaPipe_FSM_metaPipeFSM__state.values[0] == 0x3L;
  val_t T243;
  { T243 = T242 & T241;}
  val_t T244;
  { T244 = TERNARY(T243, 0x4L, T240);}
  val_t T245;
  T245 = GDA_MetaPipe_FSM_metaPipeFSM__state.values[0] == 0x4L;
  val_t T246;
  { T246 = T245 & GDA_MetaPipe_FSM_metaPipeFSM__io_done_mp_stages_1.values[0];}
  val_t T247;
  { T247 = TERNARY(T246, 0x5L, T244);}
  { GDA_MetaPipe_FSM_metaPipeFSM__reset.values[0] = reset.values[0];}
  { T248.values[0] = TERNARY(GDA_MetaPipe_FSM_metaPipeFSM__reset.values[0], 0x0L, T247);}
  val_t T249;
  { T249 = GDA_MetaPipe_FSM_pipe0_block_mu_addr__io_out.values[0];}
  T249 = T249 & 0xffffL;
  { GDA_MetaPipe_FSM_pipe0_block__io_mu_addr.values[0] = T249;}
  { GDA_MetaPipe_FSM_mu1__io_read_addr.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_mu_addr.values[0];}
  val_t T250;
  { T250 = GDA_MetaPipe_FSM__io_data_in.values[0]+0x2L;}
  T250 = T250 & 0xffffL;
  { GDA_MetaPipe_FSM_mu1__io_write_data.values[0] = T250;}
  { GDA_MetaPipe_FSM_mu1__io_write_en.values[0] = GDA_MetaPipe_FSM_metaPipeFSM__io_complete_reset.values[0];}
  { GDA_MetaPipe_FSM_mu1__io_write_addr.values[0] = GDA_MetaPipe_FSM__io_data_in.values[0];}
  { T251.values[0] = GDA_MetaPipe_FSM_mu1__io_write_addr.values[0];}
  T251.values[0] = T251.values[0] & 0x3L;
  { GDA_MetaPipe_FSM_mu0__io_read_addr.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_mu_addr.values[0];}
  { GDA_MetaPipe_FSM_mu0__io_write_data.values[0] = GDA_MetaPipe_FSM__io_data_in.values[0];}
  { GDA_MetaPipe_FSM_mu0__io_write_en.values[0] = GDA_MetaPipe_FSM_metaPipeFSM__io_complete_reset.values[0];}
  { GDA_MetaPipe_FSM_mu0__io_write_addr.values[0] = GDA_MetaPipe_FSM__io_data_in.values[0];}
  { T252.values[0] = GDA_MetaPipe_FSM_mu0__io_write_addr.values[0];}
  T252.values[0] = T252.values[0] & 0x3L;
  val_t T253;
  { T253 = GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__k_reg.values[0] | 0x0L << 16;}
  val_t T254;
  { T254 = GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__mult_reg.values[0]+T253;}
  T254 = T254 & 0xffffffffL;
  { GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__io_out.values[0] = T254;}
  val_t T255;
  { T255 = GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__io_out.values[0];}
  T255 = T255 & 0xffffL;
  { GDA_MetaPipe_FSM_pipe0_block__io_y_addr.values[0] = T255;}
  { GDA_MetaPipe_FSM_mean_y_vec__io_read_addr.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_y_addr.values[0];}
  { GDA_MetaPipe_FSM_mean_y_vec__io_write_data.values[0] = 0x1L;}
  { GDA_MetaPipe_FSM_mean_y_vec__io_write_en.values[0] = GDA_MetaPipe_FSM_metaPipeFSM__io_complete_reset.values[0];}
  { GDA_MetaPipe_FSM_mean_y_vec__io_write_addr.values[0] = GDA_MetaPipe_FSM__io_data_in.values[0];}
  { T256.values[0] = GDA_MetaPipe_FSM_mean_y_vec__io_write_addr.values[0];}
  T256.values[0] = T256.values[0] & 0x3L;
  val_t T257;
  { T257 = GDA_MetaPipe_FSM_pipe0_block_matrix_addr__k_reg.values[0] | 0x0L << 16;}
  val_t T258;
  { T258 = GDA_MetaPipe_FSM_pipe0_block_matrix_addr__mult_reg.values[0]+T257;}
  T258 = T258 & 0xffffffffL;
  { GDA_MetaPipe_FSM_pipe0_block_matrix_addr__io_out.values[0] = T258;}
  val_t T259;
  { T259 = GDA_MetaPipe_FSM_pipe0_block_matrix_addr__io_out.values[0];}
  T259 = T259 & 0xffffL;
  { GDA_MetaPipe_FSM_pipe0_block__io_x_addr.values[0] = T259;}
  { GDA_MetaPipe_FSM_x_matrix__io_read_addr.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_x_addr.values[0];}
  val_t T260;
  { T260 = GDA_MetaPipe_FSM__io_data_inx.values[0]+0x6L;}
  T260 = T260 & 0xffffL;
  { GDA_MetaPipe_FSM_x_matrix__io_write_data.values[0] = T260;}
  { GDA_MetaPipe_FSM_x_matrix__io_write_en.values[0] = GDA_MetaPipe_FSM_metaPipeFSM__io_complete_reset.values[0];}
  { GDA_MetaPipe_FSM_x_matrix__io_write_addr.values[0] = GDA_MetaPipe_FSM__io_data_inx.values[0];}
  { T261.values[0] = GDA_MetaPipe_FSM_x_matrix__io_write_addr.values[0];}
  T261.values[0] = T261.values[0] & 0xfL;
  val_t T262;
  T262 = GDA_MetaPipe_FSM_metaPipeFSM__state.values[0] == 0x5L;
  { GDA_MetaPipe_FSM_metaPipeFSM__io_done.values[0] = T262;}
  { GDA_MetaPipe_FSM__io_done.values[0] = GDA_MetaPipe_FSM_metaPipeFSM__io_done.values[0];}
  { GDA_MetaPipe_FSM__io_output.values[0] = GDA_MetaPipe_FSM_sigmaM__io_read_out.values[0];}
  { GDA_MetaPipe_FSM__io_y.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_addr_en.values[0];}
  { GDA_MetaPipe_FSM__io_rd.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_mu_addr.values[0];}
  { val_t __r = this->__rand_val(); GDA_MetaPipe_FSM__io_wdata.values[0] = __r;}
  GDA_MetaPipe_FSM__io_wdata.values[0] = GDA_MetaPipe_FSM__io_wdata.values[0] & 0xffffL;
  { GDA_MetaPipe_FSM__io_d0.values[0] = GDA_MetaPipe_FSM_latch_pipe0_done__io_latch_val.values[0];}
  { val_t __r = this->__rand_val(); GDA_MetaPipe_FSM__io_output1.values[0] = __r;}
  GDA_MetaPipe_FSM__io_output1.values[0] = GDA_MetaPipe_FSM__io_output1.values[0] & 0xffffL;
  { GDA_MetaPipe_FSM__io_y1.values[0] = GDA_MetaPipe_FSM_pipe1_block__io_sigma_addr_en.values[0];}
  { GDA_MetaPipe_FSM__io_rd1.values[0] = GDA_MetaPipe_FSM_pipe1_block__io_subT_addr.values[0];}
  { GDA_MetaPipe_FSM__io_wdata1.values[0] = GDA_MetaPipe_FSM_pipe1_block__io_sigma_write_data.values[0];}
  { GDA_MetaPipe_FSM__io_d1.values[0] = GDA_MetaPipe_FSM_latch_pipe1_done__io_latch_val.values[0];}
  { GDA_MetaPipe_FSM__io_state1.values[0] = GDA_MetaPipe_FSM_metaPipeFSM__io_en_mp_stages_1.values[0];}
  { GDA_MetaPipe_FSM__io_state0.values[0] = GDA_MetaPipe_FSM_metaPipeFSM__io_en_mp_stages_0.values[0];}
  { T263.values[0] = reset.values[0] ^ 0x1L;}
  { T264.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_x_addr.values[0];}
  { T265.values[0] = reset.values[0] ^ 0x1L;}
  { T266.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_output_float.values[0];}
  { T267.values[0] = reset.values[0] ^ 0x1L;}
  { T268.values[0] = GDA_MetaPipe_FSM_subT_db__io_read_out.values[0];}
  { T269.values[0] = reset.values[0] ^ 0x1L;}
  { T270.values[0] = GDA_MetaPipe_FSM_pipe0_block__io_subT_addr.values[0];}
  { T271.values[0] = reset.values[0] ^ 0x1L;}
  { T272.values[0] = GDA_MetaPipe_FSM_pipe1_block__io_sigma_addr_en.values[0];}
  { T273.values[0] = reset.values[0] ^ 0x1L;}
  { T274.values[0] = GDA_MetaPipe_FSM_pipe1_block__io_sigma_write_data.values[0];}
  { T275.values[0] = reset.values[0] ^ 0x1L;}
  { T276.values[0] = GDA_MetaPipe_FSM_latch_pipe1_done__io_latch_val.values[0];}
  { T277.values[0] = reset.values[0] ^ 0x1L;}
  { T278.values[0] = GDA_MetaPipe_FSM_metaPipeFSM__io_complete_reset.values[0];}
}


void GDA_MetaPipe_FSM_t::clock_hi ( dat_t<1> reset ) {
  dat_t<1> GDA_MetaPipe_FSM_latch_complete_done__latch_reg__shadow = T6;
  dat_t<1> GDA_MetaPipe_FSM_latch_pipe0_done__latch_reg__shadow = T21;
  dat_t<1> GDA_MetaPipe_FSM_latch_pipe1_done__latch_reg__shadow = T25;
  dat_t<16> GDA_MetaPipe_FSM_sigmaM__reg_raddr__shadow = GDA_MetaPipe_FSM_sigmaM__io_read_addr;
  { if (GDA_MetaPipe_FSM_sigmaM__io_write_en.values[0]) GDA_MetaPipe_FSM_sigmaM__bRam_rw.put(T29.values[0], 0, GDA_MetaPipe_FSM_sigmaM__io_write_data.values[0]);}
  dat_t<16> GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__currCount__shadow = T36;
  dat_t<16> GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__currCount__shadow = T44;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__done_complete__shadow = T50;
  dat_t<16> GDA_MetaPipe_FSM_pipe1_block_mtxCounter__currCount__shadow = T57;
  dat_t<2> GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__prev_state__shadow = GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__curr_state;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__wait_done__shadow = T58;
  dat_t<2> GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__curr_state__shadow = T77;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block__state1_Regs_1__shadow = T78;
  dat_t<16> GDA_MetaPipe_FSM_pipe1_block__writeaddr_reg__shadow = T79;
  dat_t<16> GDA_MetaPipe_FSM_pipe1_block__product_reg__shadow = T94;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block__state1_Regs_0__shadow = T95;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__sub_reg__shadow = T113;
  dat_t<32> GDA_MetaPipe_FSM_pipe0_block_mu_addr__mult_reg__shadow = T117;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block_mu_addr__k_reg__shadow = T120;
  dat_t<32> GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__mult_reg__shadow = T124;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__k_reg__shadow = T127;
  dat_t<32> GDA_MetaPipe_FSM_pipe0_block_matrix_addr__mult_reg__shadow = T131;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block_matrix_addr__k_reg__shadow = T134;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__currCount__shadow = T141;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__currCount__shadow = T149;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block_matrixCounters__done_complete__shadow = T155;
  dat_t<2> GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__prev_state__shadow = GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__curr_state;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__wait_done__shadow = T156;
  dat_t<2> GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__curr_state__shadow = T168;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block__state0_Regs_0__shadow = T169;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block__state0_Regs_1__shadow = T170;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block__mu_addr_Regs__shadow = T174;
  dat_t<16> GDA_MetaPipe_FSM_subT_2_db_bram_w2__reg_raddr__shadow = GDA_MetaPipe_FSM_subT_2_db_bram_w2__io_read_addr;
  { if (GDA_MetaPipe_FSM_subT_2_db_bram_w2__io_write_en.values[0]) GDA_MetaPipe_FSM_subT_2_db_bram_w2__bRam_rw.put(T177.values[0], 0, GDA_MetaPipe_FSM_subT_2_db_bram_w2__io_write_data.values[0]);}
  dat_t<16> GDA_MetaPipe_FSM_subT_2_db_bram_w1__reg_raddr__shadow = GDA_MetaPipe_FSM_subT_2_db_bram_w1__io_read_addr;
  { if (GDA_MetaPipe_FSM_subT_2_db_bram_w1__io_write_en.values[0]) GDA_MetaPipe_FSM_subT_2_db_bram_w1__bRam_rw.put(T180.values[0], 0, GDA_MetaPipe_FSM_subT_2_db_bram_w1__io_write_data.values[0]);}
  dat_t<2> GDA_MetaPipe_FSM_subT_2_db__state_read_reg__shadow = T181;
  dat_t<1> GDA_MetaPipe_FSM_subT_2_db__latch_read_done_vec_0__shadow = T190;
  dat_t<2> GDA_MetaPipe_FSM_subT_2_db__state__shadow = T199;
  dat_t<16> GDA_MetaPipe_FSM_subT_db_bram_w2__reg_raddr__shadow = GDA_MetaPipe_FSM_subT_db_bram_w2__io_read_addr;
  { if (GDA_MetaPipe_FSM_subT_db_bram_w2__io_write_en.values[0]) GDA_MetaPipe_FSM_subT_db_bram_w2__bRam_rw.put(T202.values[0], 0, GDA_MetaPipe_FSM_subT_db_bram_w2__io_write_data.values[0]);}
  dat_t<16> GDA_MetaPipe_FSM_subT_db_bram_w1__reg_raddr__shadow = GDA_MetaPipe_FSM_subT_db_bram_w1__io_read_addr;
  { if (GDA_MetaPipe_FSM_subT_db_bram_w1__io_write_en.values[0]) GDA_MetaPipe_FSM_subT_db_bram_w1__bRam_rw.put(T205.values[0], 0, GDA_MetaPipe_FSM_subT_db_bram_w1__io_write_data.values[0]);}
  dat_t<2> GDA_MetaPipe_FSM_subT_db__state_read_reg__shadow = T206;
  dat_t<1> GDA_MetaPipe_FSM_subT_db__latch_read_done_vec_0__shadow = T215;
  dat_t<2> GDA_MetaPipe_FSM_subT_db__state__shadow = T224;
  dat_t<16> GDA_MetaPipe_FSM_subT_2__reg_raddr__shadow = GDA_MetaPipe_FSM_subT_2__io_read_addr;
  { if (GDA_MetaPipe_FSM_subT_2__io_write_en.values[0]) GDA_MetaPipe_FSM_subT_2__bRam_rw.put(T225.values[0], 0, GDA_MetaPipe_FSM_subT_2__io_write_data.values[0]);}
  dat_t<16> GDA_MetaPipe_FSM_subT__reg_raddr__shadow = GDA_MetaPipe_FSM_subT__io_read_addr;
  { if (GDA_MetaPipe_FSM_subT__io_write_en.values[0]) GDA_MetaPipe_FSM_subT__bRam_rw.put(T228.values[0], 0, GDA_MetaPipe_FSM_subT__io_write_data.values[0]);}
  dat_t<3> GDA_MetaPipe_FSM_metaPipeFSM__state__shadow = T248;
  dat_t<16> GDA_MetaPipe_FSM_mu1__reg_raddr__shadow = GDA_MetaPipe_FSM_mu1__io_read_addr;
  { if (GDA_MetaPipe_FSM_mu1__io_write_en.values[0]) GDA_MetaPipe_FSM_mu1__bRam_rw.put(T251.values[0], 0, GDA_MetaPipe_FSM_mu1__io_write_data.values[0]);}
  dat_t<16> GDA_MetaPipe_FSM_mu0__reg_raddr__shadow = GDA_MetaPipe_FSM_mu0__io_read_addr;
  { if (GDA_MetaPipe_FSM_mu0__io_write_en.values[0]) GDA_MetaPipe_FSM_mu0__bRam_rw.put(T252.values[0], 0, GDA_MetaPipe_FSM_mu0__io_write_data.values[0]);}
  dat_t<16> GDA_MetaPipe_FSM_mean_y_vec__reg_raddr__shadow = GDA_MetaPipe_FSM_mean_y_vec__io_read_addr;
  { if (GDA_MetaPipe_FSM_mean_y_vec__io_write_en.values[0]) GDA_MetaPipe_FSM_mean_y_vec__bRam_rw.put(T256.values[0], 0, GDA_MetaPipe_FSM_mean_y_vec__io_write_data.values[0]);}
  dat_t<16> GDA_MetaPipe_FSM_x_matrix__reg_raddr__shadow = GDA_MetaPipe_FSM_x_matrix__io_read_addr;
  { if (GDA_MetaPipe_FSM_x_matrix__io_write_en.values[0]) GDA_MetaPipe_FSM_x_matrix__bRam_rw.put(T261.values[0], 0, GDA_MetaPipe_FSM_x_matrix__io_write_data.values[0]);}
  GDA_MetaPipe_FSM_latch_complete_done__latch_reg = T6;
  GDA_MetaPipe_FSM_latch_pipe0_done__latch_reg = T21;
  GDA_MetaPipe_FSM_latch_pipe1_done__latch_reg = T25;
  GDA_MetaPipe_FSM_sigmaM__reg_raddr = GDA_MetaPipe_FSM_sigmaM__io_read_addr;
  GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__currCount = T36;
  GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__currCount = T44;
  GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__done_complete = T50;
  GDA_MetaPipe_FSM_pipe1_block_mtxCounter__currCount = T57;
  GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__prev_state = GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__prev_state__shadow;
  GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__wait_done = T58;
  GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__curr_state = T77;
  GDA_MetaPipe_FSM_pipe1_block__state1_Regs_1 = T78;
  GDA_MetaPipe_FSM_pipe1_block__writeaddr_reg = T79;
  GDA_MetaPipe_FSM_pipe1_block__product_reg = T94;
  GDA_MetaPipe_FSM_pipe1_block__state1_Regs_0 = T95;
  GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__sub_reg = T113;
  GDA_MetaPipe_FSM_pipe0_block_mu_addr__mult_reg = T117;
  GDA_MetaPipe_FSM_pipe0_block_mu_addr__k_reg = T120;
  GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__mult_reg = T124;
  GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__k_reg = T127;
  GDA_MetaPipe_FSM_pipe0_block_matrix_addr__mult_reg = T131;
  GDA_MetaPipe_FSM_pipe0_block_matrix_addr__k_reg = T134;
  GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__currCount = T141;
  GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__currCount = T149;
  GDA_MetaPipe_FSM_pipe0_block_matrixCounters__done_complete = T155;
  GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__prev_state = GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__prev_state__shadow;
  GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__wait_done = T156;
  GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__curr_state = T168;
  GDA_MetaPipe_FSM_pipe0_block__state0_Regs_0 = T169;
  GDA_MetaPipe_FSM_pipe0_block__state0_Regs_1 = T170;
  GDA_MetaPipe_FSM_pipe0_block__mu_addr_Regs = T174;
  GDA_MetaPipe_FSM_subT_2_db_bram_w2__reg_raddr = GDA_MetaPipe_FSM_subT_2_db_bram_w2__io_read_addr;
  GDA_MetaPipe_FSM_subT_2_db_bram_w1__reg_raddr = GDA_MetaPipe_FSM_subT_2_db_bram_w1__io_read_addr;
  GDA_MetaPipe_FSM_subT_2_db__state_read_reg = T181;
  GDA_MetaPipe_FSM_subT_2_db__latch_read_done_vec_0 = T190;
  GDA_MetaPipe_FSM_subT_2_db__state = T199;
  GDA_MetaPipe_FSM_subT_db_bram_w2__reg_raddr = GDA_MetaPipe_FSM_subT_db_bram_w2__io_read_addr;
  GDA_MetaPipe_FSM_subT_db_bram_w1__reg_raddr = GDA_MetaPipe_FSM_subT_db_bram_w1__io_read_addr;
  GDA_MetaPipe_FSM_subT_db__state_read_reg = T206;
  GDA_MetaPipe_FSM_subT_db__latch_read_done_vec_0 = T215;
  GDA_MetaPipe_FSM_subT_db__state = T224;
  GDA_MetaPipe_FSM_subT_2__reg_raddr = GDA_MetaPipe_FSM_subT_2__io_read_addr;
  GDA_MetaPipe_FSM_subT__reg_raddr = GDA_MetaPipe_FSM_subT__io_read_addr;
  GDA_MetaPipe_FSM_metaPipeFSM__state = T248;
  GDA_MetaPipe_FSM_mu1__reg_raddr = GDA_MetaPipe_FSM_mu1__io_read_addr;
  GDA_MetaPipe_FSM_mu0__reg_raddr = GDA_MetaPipe_FSM_mu0__io_read_addr;
  GDA_MetaPipe_FSM_mean_y_vec__reg_raddr = GDA_MetaPipe_FSM_mean_y_vec__io_read_addr;
  GDA_MetaPipe_FSM_x_matrix__reg_raddr = GDA_MetaPipe_FSM_x_matrix__io_read_addr;
}


void GDA_MetaPipe_FSM_api_t::init_sim_data (  ) {
  sim_data.inputs.clear();
  sim_data.outputs.clear();
  sim_data.signals.clear();
  GDA_MetaPipe_FSM_t* mod = dynamic_cast<GDA_MetaPipe_FSM_t*>(module);
  assert(mod);
  sim_data.inputs.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM__io_en));
  sim_data.inputs.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM__io_data_in));
  sim_data.inputs.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM__io_data_inx));
  sim_data.outputs.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM__io_done));
  sim_data.outputs.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM__io_output));
  sim_data.outputs.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM__io_y));
  sim_data.outputs.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM__io_rd));
  sim_data.outputs.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM__io_wdata));
  sim_data.outputs.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM__io_d0));
  sim_data.outputs.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM__io_output1));
  sim_data.outputs.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM__io_y1));
  sim_data.outputs.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM__io_rd1));
  sim_data.outputs.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM__io_wdata1));
  sim_data.outputs.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM__io_d1));
  sim_data.outputs.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM__io_state1));
  sim_data.outputs.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM__io_state0));
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_metaPipeFSM__io_complete_reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.metaPipeFSM.io_complete_reset"] = 0;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_latch_complete_done__io_rst));
  sim_data.signal_map["GDA_MetaPipe_FSM.latch_complete_done.io_rst"] = 1;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_counters_max_1));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.matrixCounters.io_counters_max_1"] = 2;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_max));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.matrixCounters.ItrCounter_1.io_max"] = 3;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_done));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.matrixCounters.ItrCounter_1.io_done"] = 4;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_counters_max_0));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.matrixCounters.io_counters_max_0"] = 5;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__io_max));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.matrixCounters.ItrCounter.io_max"] = 6;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__io_done));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.matrixCounters.ItrCounter.io_done"] = 7;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_en_count));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.matrixCounters.ItrCounter_1.io_en_count"] = 8;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_done_complete));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.matrixCounters.io_done_complete"] = 9;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block__io_done_complete));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.io_done_complete"] = 10;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_latch_complete_done__io_input_val));
  sim_data.signal_map["GDA_MetaPipe_FSM.latch_complete_done.io_input_val"] = 11;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_latch_complete_done__reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.latch_complete_done.reset"] = 12;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_latch_complete_done__latch_reg));
  sim_data.signal_map["GDA_MetaPipe_FSM.latch_complete_done.latch_reg"] = 13;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__io_done));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.pipe1_FSM.io_done"] = 14;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe1_block__io_done));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.io_done"] = 15;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_latch_pipe1_done__io_input_val));
  sim_data.signal_map["GDA_MetaPipe_FSM.latch_pipe1_done.io_input_val"] = 16;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_latch_pipe1_done__io_latch_val));
  sim_data.signal_map["GDA_MetaPipe_FSM.latch_pipe1_done.io_latch_val"] = 17;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_metaPipeFSM__io_done_mp_stages_1));
  sim_data.signal_map["GDA_MetaPipe_FSM.metaPipeFSM.io_done_mp_stages_1"] = 18;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__io_done));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.pipe0_FSM.io_done"] = 19;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block__io_done));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.io_done"] = 20;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_latch_pipe0_done__io_input_val));
  sim_data.signal_map["GDA_MetaPipe_FSM.latch_pipe0_done.io_input_val"] = 21;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_latch_pipe0_done__io_latch_val));
  sim_data.signal_map["GDA_MetaPipe_FSM.latch_pipe0_done.io_latch_val"] = 22;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_metaPipeFSM__io_done_mp_stages_0));
  sim_data.signal_map["GDA_MetaPipe_FSM.metaPipeFSM.io_done_mp_stages_0"] = 23;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_metaPipeFSM__io_reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.metaPipeFSM.io_reset"] = 24;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_latch_pipe0_done__io_rst));
  sim_data.signal_map["GDA_MetaPipe_FSM.latch_pipe0_done.io_rst"] = 25;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_latch_pipe0_done__reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.latch_pipe0_done.reset"] = 26;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_latch_pipe0_done__latch_reg));
  sim_data.signal_map["GDA_MetaPipe_FSM.latch_pipe0_done.latch_reg"] = 27;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_latch_pipe1_done__io_rst));
  sim_data.signal_map["GDA_MetaPipe_FSM.latch_pipe1_done.io_rst"] = 28;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_latch_pipe1_done__reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.latch_pipe1_done.reset"] = 29;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_latch_pipe1_done__latch_reg));
  sim_data.signal_map["GDA_MetaPipe_FSM.latch_pipe1_done.latch_reg"] = 30;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe1_block_mtxCounter__io_vec_cout_0));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.mtxCounter.io_vec_cout_0"] = 31;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe1_block__io_sigma_read_addr));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.io_sigma_read_addr"] = 32;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_sigmaM__io_read_addr));
  sim_data.signal_map["GDA_MetaPipe_FSM.sigmaM.io_read_addr"] = 33;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_sigmaM__reg_raddr));
  sim_data.signal_map["GDA_MetaPipe_FSM.sigmaM.reg_raddr"] = 34;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_sigmaM__io_read_out));
  sim_data.signal_map["GDA_MetaPipe_FSM.sigmaM.io_read_out"] = 35;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe1_block__io_sigma_read_out));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.io_sigma_read_out"] = 36;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe1_block__io_sigma_write_data));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.io_sigma_write_data"] = 37;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_sigmaM__io_write_data));
  sim_data.signal_map["GDA_MetaPipe_FSM.sigmaM.io_write_data"] = 38;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe1_block__io_sigma_addr_en));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.io_sigma_addr_en"] = 39;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_sigmaM__io_write_en));
  sim_data.signal_map["GDA_MetaPipe_FSM.sigmaM.io_write_en"] = 40;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe1_block__io_sigma_write_addr));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.io_sigma_write_addr"] = 41;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_sigmaM__io_write_addr));
  sim_data.signal_map["GDA_MetaPipe_FSM.sigmaM.io_write_addr"] = 42;
  std::string GDA_MetaPipe_FSM_sigmaM__bRam_rw_path = "GDA_MetaPipe_FSM.sigmaM.bRam_rw";
  for (size_t i = 0 ; i < 16 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_sigmaM__bRam_rw.contents[i]));
    sim_data.signal_map[GDA_MetaPipe_FSM_sigmaM__bRam_rw_path+"["+itos(i,false)+"]"] = 43+i;
  }
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_counters_max_1));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.sigmaCounters.io_counters_max_1"] = 59;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_max));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.sigmaCounters.ItrCounter_1.io_max"] = 60;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_counters_max_0));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.sigmaCounters.io_counters_max_0"] = 61;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__io_max));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.sigmaCounters.ItrCounter.io_max"] = 62;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__io_done));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.sigmaCounters.ItrCounter.io_done"] = 63;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_en_count));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.sigmaCounters.ItrCounter_1.io_en_count"] = 64;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe1_block__io_reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.io_reset"] = 65;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.sigmaCounters.io_reset"] = 66;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.sigmaCounters.ItrCounter_1.io_reset"] = 67;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe1_block__reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.reset"] = 68;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.sigmaCounters.reset"] = 69;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.sigmaCounters.ItrCounter_1.reset"] = 70;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__currCount));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.sigmaCounters.ItrCounter_1.currCount"] = 71;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__io_pipe_enabled));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.pipe1_FSM.io_pipe_enabled"] = 72;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_en));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.sigmaCounters.io_en"] = 73;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__io_en_count));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.sigmaCounters.ItrCounter.io_en_count"] = 74;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__io_reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.sigmaCounters.ItrCounter.io_reset"] = 75;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.sigmaCounters.ItrCounter.reset"] = 76;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__currCount));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.sigmaCounters.ItrCounter.currCount"] = 77;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_done));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.sigmaCounters.ItrCounter_1.io_done"] = 78;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_counters_done_1));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.sigmaCounters.io_counters_done_1"] = 79;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_counters_done_0));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.sigmaCounters.io_counters_done_0"] = 80;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__done_complete));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.sigmaCounters.done_complete"] = 81;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe1_block_mtxCounter__io_max));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.mtxCounter.io_max"] = 82;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe1_block_mtxCounter__io_en_count));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.mtxCounter.io_en_count"] = 83;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe1_block_mtxCounter__io_reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.mtxCounter.io_reset"] = 84;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe1_block_mtxCounter__reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.mtxCounter.reset"] = 85;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe1_block_mtxCounter__currCount));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.mtxCounter.currCount"] = 86;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe1_block_mtxCounter__io_done));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.mtxCounter.io_done"] = 87;
  sim_data.signals.push_back(new dat_api<2>(&mod->GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__prev_state));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.pipe1_FSM.prev_state"] = 88;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.pipe1_FSM.reset"] = 89;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__wait_done));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.pipe1_FSM.wait_done"] = 90;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_metaPipeFSM__io_en_mp_stages_1));
  sim_data.signal_map["GDA_MetaPipe_FSM.metaPipeFSM.io_en_mp_stages_1"] = 91;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe1_block__io_pipe_en));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.io_pipe_en"] = 92;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__io_en));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.pipe1_FSM.io_en"] = 93;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_done_complete));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.sigmaCounters.io_done_complete"] = 94;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__io_counter_done));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.pipe1_FSM.io_counter_done"] = 95;
  sim_data.signals.push_back(new dat_api<2>(&mod->GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__curr_state));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.pipe1_FSM.curr_state"] = 96;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe1_block__state1_Regs_1));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.state1_Regs_1"] = 97;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe1_block__writeaddr_reg));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.writeaddr_reg"] = 98;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_2_db_bram_w1__io_read_out));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_2_db.bram_w1.io_read_out"] = 99;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_2_db_bram_w2__io_read_out));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_2_db.bram_w2.io_read_out"] = 100;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_2_db__io_read_out));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_2_db.io_read_out"] = 101;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe1_block__io_subT_2_out));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.io_subT_2_out"] = 102;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_db_bram_w1__io_read_out));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_db.bram_w1.io_read_out"] = 103;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_db_bram_w2__io_read_out));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_db.bram_w2.io_read_out"] = 104;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_db__io_read_out));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_db.io_read_out"] = 105;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe1_block__io_subT_out));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.io_subT_out"] = 106;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe1_block__product_reg));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.product_reg"] = 107;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe1_block__state1_Regs_0));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.state1_Regs_0"] = 108;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block__io_reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.io_reset"] = 109;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__io_reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.pipe0_datapath.io_reset"] = 110;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_mu0__io_read_out));
  sim_data.signal_map["GDA_MetaPipe_FSM.mu0.io_read_out"] = 111;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block__io_mu0_out));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.io_mu0_out"] = 112;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__io_mu0));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.pipe0_datapath.io_mu0"] = 113;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_mu1__io_read_out));
  sim_data.signal_map["GDA_MetaPipe_FSM.mu1.io_read_out"] = 114;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block__io_mu1_out));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.io_mu1_out"] = 115;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__io_mu1));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.pipe0_datapath.io_mu1"] = 116;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_mean_y_vec__io_read_out));
  sim_data.signal_map["GDA_MetaPipe_FSM.mean_y_vec.io_read_out"] = 117;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block__io_y_out));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.io_y_out"] = 118;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__io_y));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.pipe0_datapath.io_y"] = 119;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_x_matrix__io_read_out));
  sim_data.signal_map["GDA_MetaPipe_FSM.x_matrix.io_read_out"] = 120;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block__io_x_out));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.io_x_out"] = 121;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__io_x));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.pipe0_datapath.io_x"] = 122;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_metaPipeFSM__io_en_mp_stages_0));
  sim_data.signal_map["GDA_MetaPipe_FSM.metaPipeFSM.io_en_mp_stages_0"] = 123;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block__io_pipe_en));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.io_pipe_en"] = 124;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__io_en));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.pipe0_datapath.io_en"] = 125;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block__reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.reset"] = 126;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.pipe0_datapath.reset"] = 127;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__sub_reg));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.pipe0_datapath.sub_reg"] = 128;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block_mu_addr__io_reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.mu_addr.io_reset"] = 129;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block_mu_addr__io_in));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.mu_addr.io_in"] = 130;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block_mu_addr__io_const_dim));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.mu_addr.io_const_dim"] = 131;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block_mu_addr__reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.mu_addr.reset"] = 132;
  sim_data.signals.push_back(new dat_api<32>(&mod->GDA_MetaPipe_FSM_pipe0_block_mu_addr__mult_reg));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.mu_addr.mult_reg"] = 133;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__io_vec_cout_0));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.matrixCounters.ItrCounter.io_vec_cout_0"] = 134;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_counters_cout_0_0));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.matrixCounters.io_counters_cout_0_0"] = 135;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block_mu_addr__io_k));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.mu_addr.io_k"] = 136;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block_mu_addr__k_reg));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.mu_addr.k_reg"] = 137;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__io_reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.bool_vec_addr.io_reset"] = 138;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__io_in));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.bool_vec_addr.io_in"] = 139;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__io_const_dim));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.bool_vec_addr.io_const_dim"] = 140;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.bool_vec_addr.reset"] = 141;
  sim_data.signals.push_back(new dat_api<32>(&mod->GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__mult_reg));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.bool_vec_addr.mult_reg"] = 142;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_vec_cout_0));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.matrixCounters.ItrCounter_1.io_vec_cout_0"] = 143;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_counters_cout_1_0));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.matrixCounters.io_counters_cout_1_0"] = 144;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__io_k));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.bool_vec_addr.io_k"] = 145;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__k_reg));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.bool_vec_addr.k_reg"] = 146;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block_matrix_addr__io_reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.matrix_addr.io_reset"] = 147;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block_matrix_addr__io_in));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.matrix_addr.io_in"] = 148;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block_matrix_addr__io_const_dim));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.matrix_addr.io_const_dim"] = 149;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block_matrix_addr__reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.matrix_addr.reset"] = 150;
  sim_data.signals.push_back(new dat_api<32>(&mod->GDA_MetaPipe_FSM_pipe0_block_matrix_addr__mult_reg));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.matrix_addr.mult_reg"] = 151;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block_matrix_addr__io_k));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.matrix_addr.io_k"] = 152;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block_matrix_addr__k_reg));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.matrix_addr.k_reg"] = 153;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block__io_complete_reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.io_complete_reset"] = 154;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.matrixCounters.io_reset"] = 155;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.matrixCounters.ItrCounter_1.io_reset"] = 156;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block_matrixCounters__reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.matrixCounters.reset"] = 157;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.matrixCounters.ItrCounter_1.reset"] = 158;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__currCount));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.matrixCounters.ItrCounter_1.currCount"] = 159;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__io_pipe_enabled));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.pipe0_FSM.io_pipe_enabled"] = 160;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_en));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.matrixCounters.io_en"] = 161;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__io_en_count));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.matrixCounters.ItrCounter.io_en_count"] = 162;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__io_reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.matrixCounters.ItrCounter.io_reset"] = 163;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.matrixCounters.ItrCounter.reset"] = 164;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__currCount));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.matrixCounters.ItrCounter.currCount"] = 165;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_counters_done_1));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.matrixCounters.io_counters_done_1"] = 166;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block_matrixCounters__done_complete));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.matrixCounters.done_complete"] = 167;
  sim_data.signals.push_back(new dat_api<2>(&mod->GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__prev_state));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.pipe0_FSM.prev_state"] = 168;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.pipe0_FSM.reset"] = 169;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__wait_done));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.pipe0_FSM.wait_done"] = 170;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__io_en));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.pipe0_FSM.io_en"] = 171;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_counters_done_0));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.matrixCounters.io_counters_done_0"] = 172;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__io_counter_done));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.pipe0_FSM.io_counter_done"] = 173;
  sim_data.signals.push_back(new dat_api<2>(&mod->GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__curr_state));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.pipe0_FSM.curr_state"] = 174;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block__state0_Regs_0));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.state0_Regs_0"] = 175;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block__state0_Regs_1));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.state0_Regs_1"] = 176;
  sim_data.signals.push_back(new dat_api<32>(&mod->GDA_MetaPipe_FSM_pipe0_block_mu_addr__io_out));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.mu_addr.io_out"] = 177;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block__mu_addr_Regs));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.mu_addr_Regs"] = 178;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_vec_cout_0));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.sigmaCounters.ItrCounter_1.io_vec_cout_0"] = 179;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_counters_cout_1_0));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.sigmaCounters.io_counters_cout_1_0"] = 180;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe1_block__io_subT_2_addr));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.io_subT_2_addr"] = 181;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_2_db__io_read_addr_vec_0));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_2_db.io_read_addr_vec_0"] = 182;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_2_db_bram_w2__io_read_addr));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_2_db.bram_w2.io_read_addr"] = 183;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_2_db_bram_w2__reg_raddr));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_2_db.bram_w2.reg_raddr"] = 184;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__io_output_float));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.pipe0_datapath.io_output_float"] = 185;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block__io_output_float));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.io_output_float"] = 186;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_2_db__io_write_data));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_2_db.io_write_data"] = 187;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_2_db_bram_w2__io_write_data));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_2_db.bram_w2.io_write_data"] = 188;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_pipe0_block__io_addr_en));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.io_addr_en"] = 189;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_subT_2_db__io_write_en));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_2_db.io_write_en"] = 190;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_subT_2_db_bram_w2__io_write_en));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_2_db.bram_w2.io_write_en"] = 191;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block__io_subT_addr));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.io_subT_addr"] = 192;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_2_db__io_write_addr));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_2_db.io_write_addr"] = 193;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_2_db_bram_w2__io_write_addr));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_2_db.bram_w2.io_write_addr"] = 194;
  std::string GDA_MetaPipe_FSM_subT_2_db_bram_w2__bRam_rw_path = "GDA_MetaPipe_FSM.subT_2_db.bram_w2.bRam_rw";
  for (size_t i = 0 ; i < 4 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_2_db_bram_w2__bRam_rw.contents[i]));
    sim_data.signal_map[GDA_MetaPipe_FSM_subT_2_db_bram_w2__bRam_rw_path+"["+itos(i,false)+"]"] = 195+i;
  }
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_2_db_bram_w1__io_read_addr));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_2_db.bram_w1.io_read_addr"] = 199;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_2_db_bram_w1__reg_raddr));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_2_db.bram_w1.reg_raddr"] = 200;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_2_db_bram_w1__io_write_data));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_2_db.bram_w1.io_write_data"] = 201;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_subT_2_db_bram_w1__io_write_en));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_2_db.bram_w1.io_write_en"] = 202;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_2_db_bram_w1__io_write_addr));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_2_db.bram_w1.io_write_addr"] = 203;
  std::string GDA_MetaPipe_FSM_subT_2_db_bram_w1__bRam_rw_path = "GDA_MetaPipe_FSM.subT_2_db.bram_w1.bRam_rw";
  for (size_t i = 0 ; i < 4 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_2_db_bram_w1__bRam_rw.contents[i]));
    sim_data.signal_map[GDA_MetaPipe_FSM_subT_2_db_bram_w1__bRam_rw_path+"["+itos(i,false)+"]"] = 204+i;
  }
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_subT_2_db__reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_2_db.reset"] = 208;
  sim_data.signals.push_back(new dat_api<2>(&mod->GDA_MetaPipe_FSM_subT_2_db__state_read_reg));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_2_db.state_read_reg"] = 209;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_subT_2_db__io_write_done));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_2_db.io_write_done"] = 210;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_subT_2_db__io_read_done_vec_0));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_2_db.io_read_done_vec_0"] = 211;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_subT_2_db__latch_read_done_vec_0));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_2_db.latch_read_done_vec_0"] = 212;
  sim_data.signals.push_back(new dat_api<2>(&mod->GDA_MetaPipe_FSM_subT_2_db__state));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_2_db.state"] = 213;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__io_vec_cout_0));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.sigmaCounters.ItrCounter.io_vec_cout_0"] = 214;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_counters_cout_0_0));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.sigmaCounters.io_counters_cout_0_0"] = 215;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe1_block__io_subT_addr));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe1_block.io_subT_addr"] = 216;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_db__io_read_addr_vec_0));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_db.io_read_addr_vec_0"] = 217;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_db_bram_w2__io_read_addr));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_db.bram_w2.io_read_addr"] = 218;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_db_bram_w2__reg_raddr));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_db.bram_w2.reg_raddr"] = 219;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_db__io_write_data));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_db.io_write_data"] = 220;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_db_bram_w2__io_write_data));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_db.bram_w2.io_write_data"] = 221;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_subT_db__io_write_en));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_db.io_write_en"] = 222;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_subT_db_bram_w2__io_write_en));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_db.bram_w2.io_write_en"] = 223;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_db__io_write_addr));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_db.io_write_addr"] = 224;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_db_bram_w2__io_write_addr));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_db.bram_w2.io_write_addr"] = 225;
  std::string GDA_MetaPipe_FSM_subT_db_bram_w2__bRam_rw_path = "GDA_MetaPipe_FSM.subT_db.bram_w2.bRam_rw";
  for (size_t i = 0 ; i < 4 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_db_bram_w2__bRam_rw.contents[i]));
    sim_data.signal_map[GDA_MetaPipe_FSM_subT_db_bram_w2__bRam_rw_path+"["+itos(i,false)+"]"] = 226+i;
  }
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_db_bram_w1__io_read_addr));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_db.bram_w1.io_read_addr"] = 230;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_db_bram_w1__reg_raddr));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_db.bram_w1.reg_raddr"] = 231;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_db_bram_w1__io_write_data));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_db.bram_w1.io_write_data"] = 232;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_subT_db_bram_w1__io_write_en));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_db.bram_w1.io_write_en"] = 233;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_db_bram_w1__io_write_addr));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_db.bram_w1.io_write_addr"] = 234;
  std::string GDA_MetaPipe_FSM_subT_db_bram_w1__bRam_rw_path = "GDA_MetaPipe_FSM.subT_db.bram_w1.bRam_rw";
  for (size_t i = 0 ; i < 4 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_db_bram_w1__bRam_rw.contents[i]));
    sim_data.signal_map[GDA_MetaPipe_FSM_subT_db_bram_w1__bRam_rw_path+"["+itos(i,false)+"]"] = 235+i;
  }
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_subT_db__reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_db.reset"] = 239;
  sim_data.signals.push_back(new dat_api<2>(&mod->GDA_MetaPipe_FSM_subT_db__state_read_reg));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_db.state_read_reg"] = 240;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_subT_db__io_write_done));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_db.io_write_done"] = 241;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_subT_db__io_read_done_vec_0));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_db.io_read_done_vec_0"] = 242;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_subT_db__latch_read_done_vec_0));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_db.latch_read_done_vec_0"] = 243;
  sim_data.signals.push_back(new dat_api<2>(&mod->GDA_MetaPipe_FSM_subT_db__state));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_db.state"] = 244;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_2__reg_raddr));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_2.reg_raddr"] = 245;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_2__io_write_data));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_2.io_write_data"] = 246;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_subT_2__io_write_en));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_2.io_write_en"] = 247;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_2__io_write_addr));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_2.io_write_addr"] = 248;
  std::string GDA_MetaPipe_FSM_subT_2__bRam_rw_path = "GDA_MetaPipe_FSM.subT_2.bRam_rw";
  for (size_t i = 0 ; i < 4 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_2__bRam_rw.contents[i]));
    sim_data.signal_map[GDA_MetaPipe_FSM_subT_2__bRam_rw_path+"["+itos(i,false)+"]"] = 249+i;
  }
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT_2__io_read_out));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT_2.io_read_out"] = 253;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT__reg_raddr));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT.reg_raddr"] = 254;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT__io_write_data));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT.io_write_data"] = 255;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_subT__io_write_en));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT.io_write_en"] = 256;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT__io_write_addr));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT.io_write_addr"] = 257;
  std::string GDA_MetaPipe_FSM_subT__bRam_rw_path = "GDA_MetaPipe_FSM.subT.bRam_rw";
  for (size_t i = 0 ; i < 4 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT__bRam_rw.contents[i]));
    sim_data.signal_map[GDA_MetaPipe_FSM_subT__bRam_rw_path+"["+itos(i,false)+"]"] = 258+i;
  }
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_subT__io_read_out));
  sim_data.signal_map["GDA_MetaPipe_FSM.subT.io_read_out"] = 262;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_metaPipeFSM__io_en));
  sim_data.signal_map["GDA_MetaPipe_FSM.metaPipeFSM.io_en"] = 263;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_latch_complete_done__io_latch_val));
  sim_data.signal_map["GDA_MetaPipe_FSM.latch_complete_done.io_latch_val"] = 264;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_metaPipeFSM__io_done_complete));
  sim_data.signal_map["GDA_MetaPipe_FSM.metaPipeFSM.io_done_complete"] = 265;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_metaPipeFSM__reset));
  sim_data.signal_map["GDA_MetaPipe_FSM.metaPipeFSM.reset"] = 266;
  sim_data.signals.push_back(new dat_api<3>(&mod->GDA_MetaPipe_FSM_metaPipeFSM__state));
  sim_data.signal_map["GDA_MetaPipe_FSM.metaPipeFSM.state"] = 267;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block__io_mu_addr));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.io_mu_addr"] = 268;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_mu1__io_read_addr));
  sim_data.signal_map["GDA_MetaPipe_FSM.mu1.io_read_addr"] = 269;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_mu1__reg_raddr));
  sim_data.signal_map["GDA_MetaPipe_FSM.mu1.reg_raddr"] = 270;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_mu1__io_write_data));
  sim_data.signal_map["GDA_MetaPipe_FSM.mu1.io_write_data"] = 271;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_mu1__io_write_en));
  sim_data.signal_map["GDA_MetaPipe_FSM.mu1.io_write_en"] = 272;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_mu1__io_write_addr));
  sim_data.signal_map["GDA_MetaPipe_FSM.mu1.io_write_addr"] = 273;
  std::string GDA_MetaPipe_FSM_mu1__bRam_rw_path = "GDA_MetaPipe_FSM.mu1.bRam_rw";
  for (size_t i = 0 ; i < 4 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_mu1__bRam_rw.contents[i]));
    sim_data.signal_map[GDA_MetaPipe_FSM_mu1__bRam_rw_path+"["+itos(i,false)+"]"] = 274+i;
  }
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_mu0__io_read_addr));
  sim_data.signal_map["GDA_MetaPipe_FSM.mu0.io_read_addr"] = 278;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_mu0__reg_raddr));
  sim_data.signal_map["GDA_MetaPipe_FSM.mu0.reg_raddr"] = 279;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_mu0__io_write_data));
  sim_data.signal_map["GDA_MetaPipe_FSM.mu0.io_write_data"] = 280;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_mu0__io_write_en));
  sim_data.signal_map["GDA_MetaPipe_FSM.mu0.io_write_en"] = 281;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_mu0__io_write_addr));
  sim_data.signal_map["GDA_MetaPipe_FSM.mu0.io_write_addr"] = 282;
  std::string GDA_MetaPipe_FSM_mu0__bRam_rw_path = "GDA_MetaPipe_FSM.mu0.bRam_rw";
  for (size_t i = 0 ; i < 4 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_mu0__bRam_rw.contents[i]));
    sim_data.signal_map[GDA_MetaPipe_FSM_mu0__bRam_rw_path+"["+itos(i,false)+"]"] = 283+i;
  }
  sim_data.signals.push_back(new dat_api<32>(&mod->GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__io_out));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.bool_vec_addr.io_out"] = 287;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block__io_y_addr));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.io_y_addr"] = 288;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_mean_y_vec__io_read_addr));
  sim_data.signal_map["GDA_MetaPipe_FSM.mean_y_vec.io_read_addr"] = 289;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_mean_y_vec__reg_raddr));
  sim_data.signal_map["GDA_MetaPipe_FSM.mean_y_vec.reg_raddr"] = 290;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_mean_y_vec__io_write_data));
  sim_data.signal_map["GDA_MetaPipe_FSM.mean_y_vec.io_write_data"] = 291;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_mean_y_vec__io_write_en));
  sim_data.signal_map["GDA_MetaPipe_FSM.mean_y_vec.io_write_en"] = 292;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_mean_y_vec__io_write_addr));
  sim_data.signal_map["GDA_MetaPipe_FSM.mean_y_vec.io_write_addr"] = 293;
  std::string GDA_MetaPipe_FSM_mean_y_vec__bRam_rw_path = "GDA_MetaPipe_FSM.mean_y_vec.bRam_rw";
  for (size_t i = 0 ; i < 4 ; i++) {
    sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_mean_y_vec__bRam_rw.contents[i]));
    sim_data.signal_map[GDA_MetaPipe_FSM_mean_y_vec__bRam_rw_path+"["+itos(i,false)+"]"] = 294+i;
  }
  sim_data.signals.push_back(new dat_api<32>(&mod->GDA_MetaPipe_FSM_pipe0_block_matrix_addr__io_out));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.matrix_addr.io_out"] = 298;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_pipe0_block__io_x_addr));
  sim_data.signal_map["GDA_MetaPipe_FSM.pipe0_block.io_x_addr"] = 299;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_x_matrix__io_read_addr));
  sim_data.signal_map["GDA_MetaPipe_FSM.x_matrix.io_read_addr"] = 300;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_x_matrix__reg_raddr));
  sim_data.signal_map["GDA_MetaPipe_FSM.x_matrix.reg_raddr"] = 301;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_x_matrix__io_write_data));
  sim_data.signal_map["GDA_MetaPipe_FSM.x_matrix.io_write_data"] = 302;
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_x_matrix__io_write_en));
  sim_data.signal_map["GDA_MetaPipe_FSM.x_matrix.io_write_en"] = 303;
  sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_x_matrix__io_write_addr));
  sim_data.signal_map["GDA_MetaPipe_FSM.x_matrix.io_write_addr"] = 304;
  std::string GDA_MetaPipe_FSM_x_matrix__bRam_rw_path = "GDA_MetaPipe_FSM.x_matrix.bRam_rw";
  for (size_t i = 0 ; i < 16 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->GDA_MetaPipe_FSM_x_matrix__bRam_rw.contents[i]));
    sim_data.signal_map[GDA_MetaPipe_FSM_x_matrix__bRam_rw_path+"["+itos(i,false)+"]"] = 305+i;
  }
  sim_data.signals.push_back(new dat_api<1>(&mod->GDA_MetaPipe_FSM_metaPipeFSM__io_done));
  sim_data.signal_map["GDA_MetaPipe_FSM.metaPipeFSM.io_done"] = 321;
  sim_data.clk_map["clk"] = new clk_api(&mod->clk);
}
