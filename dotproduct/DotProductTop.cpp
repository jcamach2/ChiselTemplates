#include "DotProductTop.h"

const val_t DotProductTop_t::T20[] = {0x0L, 0x0L, 0x0L, 0x0L};
const val_t DotProductTop_t::T26[] = {0x0L, 0x0L, 0x0L, 0x0L};

void DotProductTop_t::init ( val_t rand_init ) {
  this->__srand(rand_init);
  DotProductTop_counter_ItrCounter__currCount.randomize(&__rand_seed);
  DotProductTop_counter__done_complete.randomize(&__rand_seed);
  DotProductTop_dp_arith__productReg.randomize(&__rand_seed);
  DotProductTop_dp_arith__acc.randomize(&__rand_seed);
  DotProductTop_dp_ram2_BRAM_param_1__reg_raddr.randomize(&__rand_seed);
  DotProductTop_dp_ram2_BRAM_param_1__bRam_rw.randomize(&__rand_seed);
  DotProductTop_dp_ram2_BRAM_param__reg_raddr.randomize(&__rand_seed);
  DotProductTop_dp_ram2_BRAM_param__bRam_rw.randomize(&__rand_seed);
  DotProductTop_dp_ram1_BRAM_param_1__reg_raddr.randomize(&__rand_seed);
  DotProductTop_dp_ram1_BRAM_param_1__bRam_rw.randomize(&__rand_seed);
  DotProductTop_dp_ram1_BRAM_param__reg_raddr.randomize(&__rand_seed);
  DotProductTop_dp_ram1_BRAM_param__bRam_rw.randomize(&__rand_seed);
  DotProductTop_dp_FSM__prev_state.randomize(&__rand_seed);
  DotProductTop_dp_FSM__wait_done.randomize(&__rand_seed);
  DotProductTop_dp_FSM__curr_state.randomize(&__rand_seed);
  DotProductTop__delayReg.randomize(&__rand_seed);
  DotProductTop__delayReg2.randomize(&__rand_seed);
  DotProductTop__state.randomize(&__rand_seed);
  clk.len = 1;
  clk.cnt = 0;
  clk.values[0] = 0;
}


int DotProductTop_t::clock ( dat_t<1> reset ) {
  uint32_t min = ((uint32_t)1<<31)-1;
  if (clk.cnt < min) min = clk.cnt;
  clk.cnt-=min;
  if (clk.cnt == 0) clock_lo( reset );
  if (!reset.to_bool()) print( std::cerr );
  if (clk.cnt == 0) clock_hi( reset );
  if (clk.cnt == 0) clk.cnt = clk.len;
  return min;
}


void DotProductTop_t::print ( FILE* f ) {
}
void DotProductTop_t::print ( std::ostream& s ) {
}


void DotProductTop_t::dump_init ( FILE* f ) {
}


void DotProductTop_t::dump ( FILE* f, val_t t, dat_t<1> reset ) {
}




void DotProductTop_t::clock_lo ( dat_t<1> reset, bool assert_fire ) {
  val_t T0;
  { T0 = DotProductTop_counter_ItrCounter__currCount.values[0]+0x2L;}
  T0 = T0 & 0xffffL;
  { DotProductTop_counter__io_counters_max_0.values[0] = 0x4L;}
  { DotProductTop_counter_ItrCounter__io_max.values[0] = DotProductTop_counter__io_counters_max_0.values[0];}
  val_t DotProductTop_counter_ItrCounter__hitMax;
  DotProductTop_counter_ItrCounter__hitMax = DotProductTop_counter_ItrCounter__io_max.values[0]<=DotProductTop_counter_ItrCounter__currCount.values[0];
  val_t T1;
  { T1 = TERNARY(DotProductTop_counter_ItrCounter__hitMax, 0x0L, T0);}
  val_t T2;
  T2 = DotProductTop_dp_FSM__curr_state.values[0] == 0x1L;
  { DotProductTop_dp_FSM__io_pipe_enabled.values[0] = T2;}
  { DotProductTop_counter__io_en.values[0] = DotProductTop_dp_FSM__io_pipe_enabled.values[0];}
  { DotProductTop_counter_ItrCounter__io_en_count.values[0] = DotProductTop_counter__io_en.values[0];}
  val_t T3;
  { T3 = TERNARY_1(DotProductTop_counter_ItrCounter__io_en_count.values[0], T1, DotProductTop_counter_ItrCounter__currCount.values[0]);}
  val_t T4;
  T4 = DotProductTop__state.values[0] == 0x0L;
  { DotProductTop_counter__io_reset.values[0] = T4;}
  { DotProductTop_counter_ItrCounter__io_reset.values[0] = DotProductTop_counter__io_reset.values[0];}
  val_t T5;
  { T5 = DotProductTop_counter_ItrCounter__io_en_count.values[0] ^ 0x1L;}
  val_t T6;
  { T6 = T5 & DotProductTop_counter_ItrCounter__io_reset.values[0];}
  val_t T7;
  { T7 = TERNARY(T6, 0x0L, T3);}
  { DotProductTop_counter__reset.values[0] = reset.values[0];}
  { DotProductTop_counter_ItrCounter__reset.values[0] = DotProductTop_counter__reset.values[0];}
  { T8.values[0] = TERNARY(DotProductTop_counter_ItrCounter__reset.values[0], 0x0L, T7);}
  { DotProductTop_counter_ItrCounter__io_vec_cout_0.values[0] = DotProductTop_counter_ItrCounter__currCount.values[0];}
  val_t T9;
  { T9 = 0x1L+DotProductTop_counter_ItrCounter__io_vec_cout_0.values[0];}
  T9 = T9 & 0xffffL;
  { DotProductTop_counter_ItrCounter__io_vec_cout_1.values[0] = T9;}
  { DotProductTop_counter__io_counters_cout_0_1.values[0] = DotProductTop_counter_ItrCounter__io_vec_cout_1.values[0];}
  { DotProductTop_counter_ItrCounter__io_done.values[0] = DotProductTop_counter_ItrCounter__hitMax;}
  { DotProductTop_counter__io_counters_done_0.values[0] = DotProductTop_counter_ItrCounter__io_done.values[0];}
  val_t T10;
  { T10 = TERNARY(DotProductTop_counter__io_reset.values[0], 0x0L, DotProductTop_counter__done_complete.values[0]);}
  val_t T11;
  { T11 = DotProductTop_counter_ItrCounter__io_en_count.values[0] & DotProductTop_counter_ItrCounter__io_done.values[0];}
  val_t T12;
  { T12 = T11 | DotProductTop_counter__done_complete.values[0];}
  val_t T13;
  { T13 = DotProductTop_counter__io_reset.values[0] ^ 0x1L;}
  val_t T14;
  { T14 = TERNARY_1(T13, T12, T10);}
  { T15.values[0] = TERNARY(DotProductTop_counter__reset.values[0], 0x0L, T14);}
  { DotProductTop_dp_arith__io_en.values[0] = DotProductTop__delayReg2.values[0];}
  val_t T16;
  { T16 = DotProductTop_dp_arith__io_en.values[0] ^ 0x1L;}
  val_t T17;
  T17 = DotProductTop__state.values[0] == 0x0L;
  { DotProductTop_dp_arith__io_reset.values[0] = T17;}
  val_t T18;
  { T18 = DotProductTop_dp_arith__io_reset.values[0] & T16;}
  val_t T19[4];
  { T19[0] = TERNARY(T18, T20[0], DotProductTop_dp_arith__productReg.values[0]); T19[1] = TERNARY(T18, T20[1], DotProductTop_dp_arith__productReg.values[1]); T19[2] = TERNARY(T18, T20[2], DotProductTop_dp_arith__productReg.values[2]); T19[3] = TERNARY(T18, T20[3], DotProductTop_dp_arith__productReg.values[3]);}
  val_t T21;
  { T21 = DotProductTop_dp_ram2_BRAM_param__reg_raddr.values[0];}
  T21 = T21 & 0x3L;
  val_t T22;
  { T22 = DotProductTop_dp_ram2_BRAM_param__bRam_rw.get(T21, 0);}
  { DotProductTop_dp_ram2_BRAM_param__io_read_out.values[0] = T22;}
  { DotProductTop_dp_ram2__io_read_out_0.values[0] = DotProductTop_dp_ram2_BRAM_param__io_read_out.values[0];}
  { DotProductTop_dp_arith__io_v2.values[0] = DotProductTop_dp_ram2__io_read_out_0.values[0];}
  val_t T23;
  { T23 = DotProductTop_dp_ram1_BRAM_param__reg_raddr.values[0];}
  T23 = T23 & 0x3L;
  val_t T24;
  { T24 = DotProductTop_dp_ram1_BRAM_param__bRam_rw.get(T23, 0);}
  { DotProductTop_dp_ram1_BRAM_param__io_read_out.values[0] = T24;}
  { DotProductTop_dp_ram1__io_read_out_0.values[0] = DotProductTop_dp_ram1_BRAM_param__io_read_out.values[0];}
  { DotProductTop_dp_arith__io_v1.values[0] = DotProductTop_dp_ram1__io_read_out_0.values[0];}
  val_t DotProductTop_dp_arith__productV;
  DotProductTop_dp_arith__productV = DotProductTop_dp_arith__io_v1.values[0] * DotProductTop_dp_arith__io_v2.values[0];
  val_t T25[4];
  { T25[0] = DotProductTop_dp_arith__productV | T26[0] << 32; T25[1] = T26[0] >> 32 | T26[1] << 32; T25[2] = T26[1] >> 32 | T26[2] << 32; T25[3] = T26[2] >> 32 | T26[3] << 32;}
  val_t T27;
  { T27 = T18 ^ 0x1L;}
  val_t T28[4];
  { T28[0] = TERNARY_1(T27, T25[0], T19[0]); T28[1] = TERNARY_1(T27, T25[1], T19[1]); T28[2] = TERNARY_1(T27, T25[2], T19[2]); T28[3] = TERNARY_1(T27, T25[3], T19[3]);}
  { DotProductTop_dp_arith__reset.values[0] = reset.values[0];}
  { T29.values[0] = TERNARY(DotProductTop_dp_arith__reset.values[0], T20[0], T28[0]); T29.values[1] = TERNARY(DotProductTop_dp_arith__reset.values[0], T20[1], T28[1]); T29.values[2] = TERNARY(DotProductTop_dp_arith__reset.values[0], T20[2], T28[2]); T29.values[3] = TERNARY(DotProductTop_dp_arith__reset.values[0], T20[3], T28[3]);}
  val_t T30[4];
  { T30[0] = TERNARY_1(DotProductTop_dp_arith__io_reset.values[0], DotProductTop_dp_arith__productReg.values[0], DotProductTop_dp_arith__acc.values[0]); T30[1] = TERNARY_1(DotProductTop_dp_arith__io_reset.values[0], DotProductTop_dp_arith__productReg.values[1], DotProductTop_dp_arith__acc.values[1]); T30[2] = TERNARY_1(DotProductTop_dp_arith__io_reset.values[0], DotProductTop_dp_arith__productReg.values[2], DotProductTop_dp_arith__acc.values[2]); T30[3] = TERNARY_1(DotProductTop_dp_arith__io_reset.values[0], DotProductTop_dp_arith__productReg.values[3], DotProductTop_dp_arith__acc.values[3]);}
  val_t T31[4];
  { T31[0] = DotProductTop_dp_arith__acc.values[0]+DotProductTop_dp_arith__productReg.values[0]; val_t __c = DotProductTop_dp_arith__acc.values[0]+DotProductTop_dp_arith__productReg.values[0] < DotProductTop_dp_arith__acc.values[0]; T31[1] = DotProductTop_dp_arith__acc.values[1]+DotProductTop_dp_arith__productReg.values[1]+__c; __c = DotProductTop_dp_arith__acc.values[1]+DotProductTop_dp_arith__productReg.values[1] < DotProductTop_dp_arith__acc.values[1] || T31[1] < __c; T31[2] = DotProductTop_dp_arith__acc.values[2]+DotProductTop_dp_arith__productReg.values[2]+__c; __c = DotProductTop_dp_arith__acc.values[2]+DotProductTop_dp_arith__productReg.values[2] < DotProductTop_dp_arith__acc.values[2] || T31[2] < __c; T31[3] = DotProductTop_dp_arith__acc.values[3]+DotProductTop_dp_arith__productReg.values[3]+__c;}
  val_t T32;
  { T32 = DotProductTop_dp_arith__io_reset.values[0] ^ 0x1L;}
  val_t T33;
  { T33 = T32 & DotProductTop_dp_arith__io_en.values[0];}
  val_t T34[4];
  { T34[0] = TERNARY_1(T33, T31[0], T30[0]); T34[1] = TERNARY_1(T33, T31[1], T30[1]); T34[2] = TERNARY_1(T33, T31[2], T30[2]); T34[3] = TERNARY_1(T33, T31[3], T30[3]);}
  { T35.values[0] = TERNARY(DotProductTop_dp_arith__reset.values[0], T20[0], T34[0]); T35.values[1] = TERNARY(DotProductTop_dp_arith__reset.values[0], T20[1], T34[1]); T35.values[2] = TERNARY(DotProductTop_dp_arith__reset.values[0], T20[2], T34[2]); T35.values[3] = TERNARY(DotProductTop_dp_arith__reset.values[0], T20[3], T34[3]);}
  { DotProductTop_counter__io_counters_cout_0_0.values[0] = DotProductTop_counter_ItrCounter__io_vec_cout_0.values[0];}
  { DotProductTop_dp_ram2__io_read_addr.values[0] = DotProductTop_counter__io_counters_cout_0_0.values[0];}
  { DotProductTop_dp_ram2_BRAM_param_1__io_read_addr.values[0] = DotProductTop_dp_ram2__io_read_addr.values[0];}
  { DotProductTop_dp_ram2__io_write_data.values[0] = DotProductTop__io_input_data.values[0];}
  { DotProductTop_dp_ram2_BRAM_param_1__io_write_data.values[0] = DotProductTop_dp_ram2__io_write_data.values[0];}
  val_t T36;
  T36 = DotProductTop__state.values[0] == 0x0L;
  { DotProductTop_dp_ram2__io_write_en.values[0] = T36;}
  { DotProductTop_dp_ram2_BRAM_param_1__io_write_en.values[0] = DotProductTop_dp_ram2__io_write_en.values[0];}
  { DotProductTop_dp_ram2__io_write_addr.values[0] = DotProductTop__io_input_addr.values[0];}
  { DotProductTop_dp_ram2_BRAM_param_1__io_write_addr.values[0] = DotProductTop_dp_ram2__io_write_addr.values[0];}
  { T37.values[0] = DotProductTop_dp_ram2_BRAM_param_1__io_write_addr.values[0];}
  T37.values[0] = T37.values[0] & 0x3L;
  { DotProductTop_dp_ram2_BRAM_param__io_read_addr.values[0] = DotProductTop_dp_ram2__io_read_addr.values[0];}
  { DotProductTop_dp_ram2_BRAM_param__io_write_data.values[0] = DotProductTop_dp_ram2__io_write_data.values[0];}
  { DotProductTop_dp_ram2_BRAM_param__io_write_en.values[0] = DotProductTop_dp_ram2__io_write_en.values[0];}
  { DotProductTop_dp_ram2_BRAM_param__io_write_addr.values[0] = DotProductTop_dp_ram2__io_write_addr.values[0];}
  { T38.values[0] = DotProductTop_dp_ram2_BRAM_param__io_write_addr.values[0];}
  T38.values[0] = T38.values[0] & 0x3L;
  val_t T39;
  { T39 = DotProductTop_dp_ram2_BRAM_param_1__reg_raddr.values[0];}
  T39 = T39 & 0x3L;
  val_t T40;
  { T40 = DotProductTop_dp_ram2_BRAM_param_1__bRam_rw.get(T39, 0);}
  { DotProductTop_dp_ram2_BRAM_param_1__io_read_out.values[0] = T40;}
  { DotProductTop_dp_ram2__io_read_out_1.values[0] = DotProductTop_dp_ram2_BRAM_param_1__io_read_out.values[0];}
  { DotProductTop_dp_ram1__io_read_addr.values[0] = DotProductTop_counter__io_counters_cout_0_0.values[0];}
  { DotProductTop_dp_ram1_BRAM_param_1__io_read_addr.values[0] = DotProductTop_dp_ram1__io_read_addr.values[0];}
  { DotProductTop_dp_ram1__io_write_data.values[0] = DotProductTop__io_input_data.values[0];}
  { DotProductTop_dp_ram1_BRAM_param_1__io_write_data.values[0] = DotProductTop_dp_ram1__io_write_data.values[0];}
  val_t T41;
  T41 = DotProductTop__state.values[0] == 0x0L;
  { DotProductTop_dp_ram1__io_write_en.values[0] = T41;}
  { DotProductTop_dp_ram1_BRAM_param_1__io_write_en.values[0] = DotProductTop_dp_ram1__io_write_en.values[0];}
  { DotProductTop_dp_ram1__io_write_addr.values[0] = DotProductTop__io_input_addr.values[0];}
  { DotProductTop_dp_ram1_BRAM_param_1__io_write_addr.values[0] = DotProductTop_dp_ram1__io_write_addr.values[0];}
  { T42.values[0] = DotProductTop_dp_ram1_BRAM_param_1__io_write_addr.values[0];}
  T42.values[0] = T42.values[0] & 0x3L;
  { DotProductTop_dp_ram1_BRAM_param__io_read_addr.values[0] = DotProductTop_dp_ram1__io_read_addr.values[0];}
  { DotProductTop_dp_ram1_BRAM_param__io_write_data.values[0] = DotProductTop_dp_ram1__io_write_data.values[0];}
  { DotProductTop_dp_ram1_BRAM_param__io_write_en.values[0] = DotProductTop_dp_ram1__io_write_en.values[0];}
  { DotProductTop_dp_ram1_BRAM_param__io_write_addr.values[0] = DotProductTop_dp_ram1__io_write_addr.values[0];}
  { T43.values[0] = DotProductTop_dp_ram1_BRAM_param__io_write_addr.values[0];}
  T43.values[0] = T43.values[0] & 0x3L;
  val_t T44;
  { T44 = DotProductTop_dp_ram1_BRAM_param_1__reg_raddr.values[0];}
  T44 = T44 & 0x3L;
  val_t T45;
  { T45 = DotProductTop_dp_ram1_BRAM_param_1__bRam_rw.get(T44, 0);}
  { DotProductTop_dp_ram1_BRAM_param_1__io_read_out.values[0] = T45;}
  { DotProductTop_dp_ram1__io_read_out_1.values[0] = DotProductTop_dp_ram1_BRAM_param_1__io_read_out.values[0];}
  val_t DotProductTop_dp_FSM__state_wait;
  DotProductTop_dp_FSM__state_wait = DotProductTop_dp_FSM__curr_state.values[0] == 0x2L;
  val_t DotProductTop_dp_FSM__state_en;
  DotProductTop_dp_FSM__state_en = DotProductTop_dp_FSM__prev_state.values[0] == 0x1L;
  val_t DotProductTop_dp_FSM__pipe_pulse;
  { DotProductTop_dp_FSM__pipe_pulse = DotProductTop_dp_FSM__state_en & DotProductTop_dp_FSM__state_wait;}
  { DotProductTop_dp_FSM__reset.values[0] = reset.values[0];}
  { T46.values[0] = TERNARY(DotProductTop_dp_FSM__reset.values[0], 0x0L, DotProductTop_dp_FSM__pipe_pulse);}
  val_t T47;
  T47 = DotProductTop__state.values[0] == 0x1L;
  { DotProductTop_dp_FSM__io_en.values[0] = T47;}
  val_t T48;
  T48 = 0x0L == DotProductTop_dp_FSM__curr_state.values[0];
  val_t T49;
  { T49 = T48 & DotProductTop_dp_FSM__io_en.values[0];}
  val_t T50;
  { T50 = TERNARY(T49, 0x1L, DotProductTop_dp_FSM__curr_state.values[0]);}
  val_t T51;
  { T51 = DotProductTop_counter_ItrCounter__io_en_count.values[0] & DotProductTop_counter_ItrCounter__io_done.values[0];}
  val_t T52;
  { T52 = T51 | DotProductTop_counter__done_complete.values[0];}
  { DotProductTop_counter__io_done_complete.values[0] = T52;}
  { DotProductTop_dp_FSM__io_counter_done.values[0] = DotProductTop_counter__io_done_complete.values[0];}
  val_t T53;
  T53 = 0x1L == DotProductTop_dp_FSM__curr_state.values[0];
  val_t T54;
  { T54 = T53 & DotProductTop_dp_FSM__io_counter_done.values[0];}
  val_t T55;
  { T55 = TERNARY(T54, 0x2L, T50);}
  val_t T56;
  T56 = 0x2L == DotProductTop_dp_FSM__curr_state.values[0];
  val_t T57;
  { T57 = T56 & DotProductTop_dp_FSM__wait_done.values[0];}
  val_t T58;
  { T58 = TERNARY(T57, 0x3L, T55);}
  val_t T59;
  T59 = 0x3L == DotProductTop_dp_FSM__curr_state.values[0];
  val_t T60;
  { T60 = TERNARY(T59, 0x0L, T58);}
  { T61.values[0] = TERNARY(DotProductTop_dp_FSM__reset.values[0], 0x0L, T60);}
  { DotProductTop__io_status.values[0] = DotProductTop__state.values[0];}
  { DotProductTop_dp_arith__io_dotproduct.values[0] = DotProductTop_dp_arith__acc.values[0]; DotProductTop_dp_arith__io_dotproduct.values[1] = DotProductTop_dp_arith__acc.values[1]; DotProductTop_dp_arith__io_dotproduct.values[2] = DotProductTop_dp_arith__acc.values[2]; DotProductTop_dp_arith__io_dotproduct.values[3] = DotProductTop_dp_arith__acc.values[3];}
  val_t T62;
  { T62 = DotProductTop_dp_arith__io_dotproduct.values[0];}
  T62 = T62 & 0xffffL;
  { DotProductTop__io_result.values[0] = T62;}
  { T63.values[0] = TERNARY(reset.values[0], 0x0L, DotProductTop_dp_FSM__io_pipe_enabled.values[0]);}
  { T64.values[0] = TERNARY(reset.values[0], 0x0L, DotProductTop__delayReg.values[0]);}
  val_t T65;
  T65 = 0x0L == DotProductTop__state.values[0];
  val_t T66;
  { T66 = T65 & DotProductTop__io_cmd.values[0];}
  val_t T67;
  { T67 = TERNARY(T66, 0x1L, DotProductTop__state.values[0]);}
  val_t T68;
  T68 = DotProductTop_dp_FSM__curr_state.values[0] == 0x3L;
  { DotProductTop_dp_FSM__io_done.values[0] = T68;}
  val_t T69;
  T69 = 0x1L == DotProductTop__state.values[0];
  val_t T70;
  { T70 = T69 & DotProductTop_dp_FSM__io_done.values[0];}
  val_t T71;
  { T71 = TERNARY(T70, 0x2L, T67);}
  val_t T72;
  T72 = 0x2L == DotProductTop__state.values[0];
  val_t T73;
  { T73 = TERNARY(T72, 0x3L, T71);}
  val_t T74;
  T74 = 0x3L == DotProductTop__state.values[0];
  val_t T75;
  { T75 = TERNARY(T74, 0x0L, T73);}
  { T76.values[0] = TERNARY(reset.values[0], 0x0L, T75);}
}


void DotProductTop_t::clock_hi ( dat_t<1> reset ) {
  dat_t<16> DotProductTop_counter_ItrCounter__currCount__shadow = T8;
  dat_t<1> DotProductTop_counter__done_complete__shadow = T15;
  dat_t<256> DotProductTop_dp_arith__productReg__shadow = T29;
  dat_t<256> DotProductTop_dp_arith__acc__shadow = T35;
  dat_t<16> DotProductTop_dp_ram2_BRAM_param_1__reg_raddr__shadow = DotProductTop_dp_ram2_BRAM_param_1__io_read_addr;
  { if (DotProductTop_dp_ram2_BRAM_param_1__io_write_en.values[0]) DotProductTop_dp_ram2_BRAM_param_1__bRam_rw.put(T37.values[0], 0, DotProductTop_dp_ram2_BRAM_param_1__io_write_data.values[0]);}
  dat_t<16> DotProductTop_dp_ram2_BRAM_param__reg_raddr__shadow = DotProductTop_dp_ram2_BRAM_param__io_read_addr;
  { if (DotProductTop_dp_ram2_BRAM_param__io_write_en.values[0]) DotProductTop_dp_ram2_BRAM_param__bRam_rw.put(T38.values[0], 0, DotProductTop_dp_ram2_BRAM_param__io_write_data.values[0]);}
  dat_t<16> DotProductTop_dp_ram1_BRAM_param_1__reg_raddr__shadow = DotProductTop_dp_ram1_BRAM_param_1__io_read_addr;
  { if (DotProductTop_dp_ram1_BRAM_param_1__io_write_en.values[0]) DotProductTop_dp_ram1_BRAM_param_1__bRam_rw.put(T42.values[0], 0, DotProductTop_dp_ram1_BRAM_param_1__io_write_data.values[0]);}
  dat_t<16> DotProductTop_dp_ram1_BRAM_param__reg_raddr__shadow = DotProductTop_dp_ram1_BRAM_param__io_read_addr;
  { if (DotProductTop_dp_ram1_BRAM_param__io_write_en.values[0]) DotProductTop_dp_ram1_BRAM_param__bRam_rw.put(T43.values[0], 0, DotProductTop_dp_ram1_BRAM_param__io_write_data.values[0]);}
  dat_t<2> DotProductTop_dp_FSM__prev_state__shadow = DotProductTop_dp_FSM__curr_state;
  dat_t<1> DotProductTop_dp_FSM__wait_done__shadow = T46;
  dat_t<2> DotProductTop_dp_FSM__curr_state__shadow = T61;
  dat_t<1> DotProductTop__delayReg__shadow = T63;
  dat_t<1> DotProductTop__delayReg2__shadow = T64;
  dat_t<2> DotProductTop__state__shadow = T76;
  DotProductTop_counter_ItrCounter__currCount = T8;
  DotProductTop_counter__done_complete = T15;
  DotProductTop_dp_arith__productReg = T29;
  DotProductTop_dp_arith__acc = T35;
  DotProductTop_dp_ram2_BRAM_param_1__reg_raddr = DotProductTop_dp_ram2_BRAM_param_1__io_read_addr;
  DotProductTop_dp_ram2_BRAM_param__reg_raddr = DotProductTop_dp_ram2_BRAM_param__io_read_addr;
  DotProductTop_dp_ram1_BRAM_param_1__reg_raddr = DotProductTop_dp_ram1_BRAM_param_1__io_read_addr;
  DotProductTop_dp_ram1_BRAM_param__reg_raddr = DotProductTop_dp_ram1_BRAM_param__io_read_addr;
  DotProductTop_dp_FSM__prev_state = DotProductTop_dp_FSM__prev_state__shadow;
  DotProductTop_dp_FSM__wait_done = T46;
  DotProductTop_dp_FSM__curr_state = T61;
  DotProductTop__delayReg = T63;
  DotProductTop__delayReg2 = T64;
  DotProductTop__state = T76;
}


void DotProductTop_api_t::init_sim_data (  ) {
  sim_data.inputs.clear();
  sim_data.outputs.clear();
  sim_data.signals.clear();
  DotProductTop_t* mod = dynamic_cast<DotProductTop_t*>(module);
  assert(mod);
  sim_data.inputs.push_back(new dat_api<1>(&mod->DotProductTop__io_cmd));
  sim_data.inputs.push_back(new dat_api<16>(&mod->DotProductTop__io_input_data));
  sim_data.inputs.push_back(new dat_api<16>(&mod->DotProductTop__io_input_addr));
  sim_data.outputs.push_back(new dat_api<2>(&mod->DotProductTop__io_status));
  sim_data.outputs.push_back(new dat_api<16>(&mod->DotProductTop__io_result));
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_counter__io_counters_max_0));
  sim_data.signal_map["DotProductTop.counter.io_counters_max_0"] = 0;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_counter_ItrCounter__io_max));
  sim_data.signal_map["DotProductTop.counter.ItrCounter.io_max"] = 1;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_FSM__io_pipe_enabled));
  sim_data.signal_map["DotProductTop.dp_FSM.io_pipe_enabled"] = 2;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter__io_en));
  sim_data.signal_map["DotProductTop.counter.io_en"] = 3;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter_ItrCounter__io_en_count));
  sim_data.signal_map["DotProductTop.counter.ItrCounter.io_en_count"] = 4;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter__io_reset));
  sim_data.signal_map["DotProductTop.counter.io_reset"] = 5;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter_ItrCounter__io_reset));
  sim_data.signal_map["DotProductTop.counter.ItrCounter.io_reset"] = 6;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter__reset));
  sim_data.signal_map["DotProductTop.counter.reset"] = 7;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter_ItrCounter__reset));
  sim_data.signal_map["DotProductTop.counter.ItrCounter.reset"] = 8;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_counter_ItrCounter__currCount));
  sim_data.signal_map["DotProductTop.counter.ItrCounter.currCount"] = 9;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_counter_ItrCounter__io_vec_cout_0));
  sim_data.signal_map["DotProductTop.counter.ItrCounter.io_vec_cout_0"] = 10;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_counter_ItrCounter__io_vec_cout_1));
  sim_data.signal_map["DotProductTop.counter.ItrCounter.io_vec_cout_1"] = 11;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_counter__io_counters_cout_0_1));
  sim_data.signal_map["DotProductTop.counter.io_counters_cout_0_1"] = 12;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter_ItrCounter__io_done));
  sim_data.signal_map["DotProductTop.counter.ItrCounter.io_done"] = 13;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter__io_counters_done_0));
  sim_data.signal_map["DotProductTop.counter.io_counters_done_0"] = 14;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter__done_complete));
  sim_data.signal_map["DotProductTop.counter.done_complete"] = 15;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_arith__io_en));
  sim_data.signal_map["DotProductTop.dp_arith.io_en"] = 16;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_arith__io_reset));
  sim_data.signal_map["DotProductTop.dp_arith.io_reset"] = 17;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2_BRAM_param__io_read_out));
  sim_data.signal_map["DotProductTop.dp_ram2.BRAM_param.io_read_out"] = 18;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2__io_read_out_0));
  sim_data.signal_map["DotProductTop.dp_ram2.io_read_out_0"] = 19;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_arith__io_v2));
  sim_data.signal_map["DotProductTop.dp_arith.io_v2"] = 20;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1_BRAM_param__io_read_out));
  sim_data.signal_map["DotProductTop.dp_ram1.BRAM_param.io_read_out"] = 21;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1__io_read_out_0));
  sim_data.signal_map["DotProductTop.dp_ram1.io_read_out_0"] = 22;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_arith__io_v1));
  sim_data.signal_map["DotProductTop.dp_arith.io_v1"] = 23;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_arith__reset));
  sim_data.signal_map["DotProductTop.dp_arith.reset"] = 24;
  sim_data.signals.push_back(new dat_api<256>(&mod->DotProductTop_dp_arith__productReg));
  sim_data.signal_map["DotProductTop.dp_arith.productReg"] = 25;
  sim_data.signals.push_back(new dat_api<256>(&mod->DotProductTop_dp_arith__acc));
  sim_data.signal_map["DotProductTop.dp_arith.acc"] = 26;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_counter__io_counters_cout_0_0));
  sim_data.signal_map["DotProductTop.counter.io_counters_cout_0_0"] = 27;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2__io_read_addr));
  sim_data.signal_map["DotProductTop.dp_ram2.io_read_addr"] = 28;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2_BRAM_param_1__io_read_addr));
  sim_data.signal_map["DotProductTop.dp_ram2.BRAM_param_1.io_read_addr"] = 29;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2_BRAM_param_1__reg_raddr));
  sim_data.signal_map["DotProductTop.dp_ram2.BRAM_param_1.reg_raddr"] = 30;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2__io_write_data));
  sim_data.signal_map["DotProductTop.dp_ram2.io_write_data"] = 31;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2_BRAM_param_1__io_write_data));
  sim_data.signal_map["DotProductTop.dp_ram2.BRAM_param_1.io_write_data"] = 32;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_ram2__io_write_en));
  sim_data.signal_map["DotProductTop.dp_ram2.io_write_en"] = 33;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_ram2_BRAM_param_1__io_write_en));
  sim_data.signal_map["DotProductTop.dp_ram2.BRAM_param_1.io_write_en"] = 34;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2__io_write_addr));
  sim_data.signal_map["DotProductTop.dp_ram2.io_write_addr"] = 35;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2_BRAM_param_1__io_write_addr));
  sim_data.signal_map["DotProductTop.dp_ram2.BRAM_param_1.io_write_addr"] = 36;
  std::string DotProductTop_dp_ram2_BRAM_param_1__bRam_rw_path = "DotProductTop.dp_ram2.BRAM_param_1.bRam_rw";
  for (size_t i = 0 ; i < 4 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2_BRAM_param_1__bRam_rw.contents[i]));
    sim_data.signal_map[DotProductTop_dp_ram2_BRAM_param_1__bRam_rw_path+"["+itos(i,false)+"]"] = 37+i;
  }
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2_BRAM_param__io_read_addr));
  sim_data.signal_map["DotProductTop.dp_ram2.BRAM_param.io_read_addr"] = 41;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2_BRAM_param__reg_raddr));
  sim_data.signal_map["DotProductTop.dp_ram2.BRAM_param.reg_raddr"] = 42;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2_BRAM_param__io_write_data));
  sim_data.signal_map["DotProductTop.dp_ram2.BRAM_param.io_write_data"] = 43;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_ram2_BRAM_param__io_write_en));
  sim_data.signal_map["DotProductTop.dp_ram2.BRAM_param.io_write_en"] = 44;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2_BRAM_param__io_write_addr));
  sim_data.signal_map["DotProductTop.dp_ram2.BRAM_param.io_write_addr"] = 45;
  std::string DotProductTop_dp_ram2_BRAM_param__bRam_rw_path = "DotProductTop.dp_ram2.BRAM_param.bRam_rw";
  for (size_t i = 0 ; i < 4 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2_BRAM_param__bRam_rw.contents[i]));
    sim_data.signal_map[DotProductTop_dp_ram2_BRAM_param__bRam_rw_path+"["+itos(i,false)+"]"] = 46+i;
  }
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2_BRAM_param_1__io_read_out));
  sim_data.signal_map["DotProductTop.dp_ram2.BRAM_param_1.io_read_out"] = 50;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2__io_read_out_1));
  sim_data.signal_map["DotProductTop.dp_ram2.io_read_out_1"] = 51;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1__io_read_addr));
  sim_data.signal_map["DotProductTop.dp_ram1.io_read_addr"] = 52;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1_BRAM_param_1__io_read_addr));
  sim_data.signal_map["DotProductTop.dp_ram1.BRAM_param_1.io_read_addr"] = 53;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1_BRAM_param_1__reg_raddr));
  sim_data.signal_map["DotProductTop.dp_ram1.BRAM_param_1.reg_raddr"] = 54;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1__io_write_data));
  sim_data.signal_map["DotProductTop.dp_ram1.io_write_data"] = 55;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1_BRAM_param_1__io_write_data));
  sim_data.signal_map["DotProductTop.dp_ram1.BRAM_param_1.io_write_data"] = 56;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_ram1__io_write_en));
  sim_data.signal_map["DotProductTop.dp_ram1.io_write_en"] = 57;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_ram1_BRAM_param_1__io_write_en));
  sim_data.signal_map["DotProductTop.dp_ram1.BRAM_param_1.io_write_en"] = 58;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1__io_write_addr));
  sim_data.signal_map["DotProductTop.dp_ram1.io_write_addr"] = 59;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1_BRAM_param_1__io_write_addr));
  sim_data.signal_map["DotProductTop.dp_ram1.BRAM_param_1.io_write_addr"] = 60;
  std::string DotProductTop_dp_ram1_BRAM_param_1__bRam_rw_path = "DotProductTop.dp_ram1.BRAM_param_1.bRam_rw";
  for (size_t i = 0 ; i < 4 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1_BRAM_param_1__bRam_rw.contents[i]));
    sim_data.signal_map[DotProductTop_dp_ram1_BRAM_param_1__bRam_rw_path+"["+itos(i,false)+"]"] = 61+i;
  }
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1_BRAM_param__io_read_addr));
  sim_data.signal_map["DotProductTop.dp_ram1.BRAM_param.io_read_addr"] = 65;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1_BRAM_param__reg_raddr));
  sim_data.signal_map["DotProductTop.dp_ram1.BRAM_param.reg_raddr"] = 66;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1_BRAM_param__io_write_data));
  sim_data.signal_map["DotProductTop.dp_ram1.BRAM_param.io_write_data"] = 67;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_ram1_BRAM_param__io_write_en));
  sim_data.signal_map["DotProductTop.dp_ram1.BRAM_param.io_write_en"] = 68;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1_BRAM_param__io_write_addr));
  sim_data.signal_map["DotProductTop.dp_ram1.BRAM_param.io_write_addr"] = 69;
  std::string DotProductTop_dp_ram1_BRAM_param__bRam_rw_path = "DotProductTop.dp_ram1.BRAM_param.bRam_rw";
  for (size_t i = 0 ; i < 4 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1_BRAM_param__bRam_rw.contents[i]));
    sim_data.signal_map[DotProductTop_dp_ram1_BRAM_param__bRam_rw_path+"["+itos(i,false)+"]"] = 70+i;
  }
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1_BRAM_param_1__io_read_out));
  sim_data.signal_map["DotProductTop.dp_ram1.BRAM_param_1.io_read_out"] = 74;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1__io_read_out_1));
  sim_data.signal_map["DotProductTop.dp_ram1.io_read_out_1"] = 75;
  sim_data.signals.push_back(new dat_api<2>(&mod->DotProductTop_dp_FSM__prev_state));
  sim_data.signal_map["DotProductTop.dp_FSM.prev_state"] = 76;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_FSM__reset));
  sim_data.signal_map["DotProductTop.dp_FSM.reset"] = 77;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_FSM__wait_done));
  sim_data.signal_map["DotProductTop.dp_FSM.wait_done"] = 78;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_FSM__io_en));
  sim_data.signal_map["DotProductTop.dp_FSM.io_en"] = 79;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter__io_done_complete));
  sim_data.signal_map["DotProductTop.counter.io_done_complete"] = 80;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_FSM__io_counter_done));
  sim_data.signal_map["DotProductTop.dp_FSM.io_counter_done"] = 81;
  sim_data.signals.push_back(new dat_api<2>(&mod->DotProductTop_dp_FSM__curr_state));
  sim_data.signal_map["DotProductTop.dp_FSM.curr_state"] = 82;
  sim_data.signals.push_back(new dat_api<256>(&mod->DotProductTop_dp_arith__io_dotproduct));
  sim_data.signal_map["DotProductTop.dp_arith.io_dotproduct"] = 83;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop__delayReg));
  sim_data.signal_map["DotProductTop.delayReg"] = 84;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop__delayReg2));
  sim_data.signal_map["DotProductTop.delayReg2"] = 85;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_FSM__io_done));
  sim_data.signal_map["DotProductTop.dp_FSM.io_done"] = 86;
  sim_data.signals.push_back(new dat_api<2>(&mod->DotProductTop__state));
  sim_data.signal_map["DotProductTop.state"] = 87;
  sim_data.clk_map["clk"] = new clk_api(&mod->clk);
}
