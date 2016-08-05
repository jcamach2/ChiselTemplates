#include "DotProductTop.h"

const val_t DotProductTop_t::T34[] = {0x0L, 0x0L, 0x0L, 0x0L};
const val_t DotProductTop_t::T24[] = {0x0L, 0x0L, 0x0L, 0x0L};

void DotProductTop_t::init ( val_t rand_init ) {
  this->__srand(rand_init);
  DotProductTop_counter_ItrCounter__currCount.randomize(&__rand_seed);
  DotProductTop_counter__done_complete.randomize(&__rand_seed);
  DotProductTop_dp_arith_rTree_adder__rtree_vec_0_1.randomize(&__rand_seed);
  DotProductTop_dp_arith_rTree_adder__rtree_vec_0_0.randomize(&__rand_seed);
  DotProductTop_dp_arith_rTree_adder__rtree_vec_1_0.randomize(&__rand_seed);
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
  DotProductTop_dp_FSM__wait_regs_0.randomize(&__rand_seed);
  DotProductTop_dp_FSM__wait_regs_1.randomize(&__rand_seed);
  DotProductTop_dp_FSM__wait_done.randomize(&__rand_seed);
  DotProductTop_dp_FSM__curr_state.randomize(&__rand_seed);
  DotProductTop__delay_en_regs_0.randomize(&__rand_seed);
  DotProductTop__delay_en_regs_1.randomize(&__rand_seed);
  DotProductTop__delay_en_regs_2.randomize(&__rand_seed);
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
  { DotProductTop_counter_ItrCounter__io_vec_cout_0.values[0] = DotProductTop_counter_ItrCounter__currCount.values[0];}
  val_t T1;
  { T1 = 0x1L+DotProductTop_counter_ItrCounter__io_vec_cout_0.values[0];}
  T1 = T1 & 0xffffL;
  { DotProductTop_counter_ItrCounter__io_vec_cout_1.values[0] = T1;}
  { DotProductTop_counter__io_counters_max_0.values[0] = 0x3L;}
  { DotProductTop_counter_ItrCounter__io_max.values[0] = DotProductTop_counter__io_counters_max_0.values[0];}
  val_t DotProductTop_counter_ItrCounter__hitMax;
  DotProductTop_counter_ItrCounter__hitMax = DotProductTop_counter_ItrCounter__io_max.values[0]<=DotProductTop_counter_ItrCounter__io_vec_cout_1.values[0];
  val_t T2;
  { T2 = TERNARY(DotProductTop_counter_ItrCounter__hitMax, 0x0L, T0);}
  val_t T3;
  T3 = DotProductTop_dp_FSM__curr_state.values[0] == 0x1L;
  { DotProductTop_dp_FSM__io_pipe_enabled.values[0] = T3;}
  { DotProductTop_counter__io_en.values[0] = DotProductTop_dp_FSM__io_pipe_enabled.values[0];}
  { DotProductTop_counter_ItrCounter__io_en_count.values[0] = DotProductTop_counter__io_en.values[0];}
  val_t T4;
  { T4 = TERNARY_1(DotProductTop_counter_ItrCounter__io_en_count.values[0], T2, DotProductTop_counter_ItrCounter__currCount.values[0]);}
  val_t T5;
  T5 = DotProductTop__state.values[0] == 0x0L;
  { DotProductTop_counter__io_reset.values[0] = T5;}
  { DotProductTop_counter_ItrCounter__io_reset.values[0] = DotProductTop_counter__io_reset.values[0];}
  val_t T6;
  { T6 = DotProductTop_counter_ItrCounter__io_en_count.values[0] ^ 0x1L;}
  val_t T7;
  { T7 = T6 & DotProductTop_counter_ItrCounter__io_reset.values[0];}
  val_t T8;
  { T8 = TERNARY(T7, 0x0L, T4);}
  { DotProductTop_counter__reset.values[0] = reset.values[0];}
  { DotProductTop_counter_ItrCounter__reset.values[0] = DotProductTop_counter__reset.values[0];}
  { T9.values[0] = TERNARY(DotProductTop_counter_ItrCounter__reset.values[0], 0x0L, T8);}
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
  val_t T16;
  T16 = (DotProductTop_dp_ram2_BRAM_param_1__reg_raddr.values[0] >> 0) & 1;
  val_t T17;
  { T17 = DotProductTop_dp_ram2_BRAM_param_1__bRam_rw.get(T16, 0);}
  { DotProductTop_dp_ram2_BRAM_param_1__io_read_out.values[0] = T17;}
  { DotProductTop_dp_ram2__io_read_out_1.values[0] = DotProductTop_dp_ram2_BRAM_param_1__io_read_out.values[0];}
  { DotProductTop_dp_arith__io_v2_vec_1.values[0] = DotProductTop_dp_ram2__io_read_out_1.values[0];}
  val_t T18;
  T18 = (DotProductTop_dp_ram1_BRAM_param_1__reg_raddr.values[0] >> 0) & 1;
  val_t T19;
  { T19 = DotProductTop_dp_ram1_BRAM_param_1__bRam_rw.get(T18, 0);}
  { DotProductTop_dp_ram1_BRAM_param_1__io_read_out.values[0] = T19;}
  { DotProductTop_dp_ram1__io_read_out_1.values[0] = DotProductTop_dp_ram1_BRAM_param_1__io_read_out.values[0];}
  { DotProductTop_dp_arith__io_v1_vec_1.values[0] = DotProductTop_dp_ram1__io_read_out_1.values[0];}
  val_t T20;
  T20 = DotProductTop_dp_arith__io_v1_vec_1.values[0] * DotProductTop_dp_arith__io_v2_vec_1.values[0];
  val_t T21;
  T21 = DotProductTop__state.values[0] == 0x0L;
  { DotProductTop_dp_arith__io_reset.values[0] = T21;}
  val_t T22;
  { T22 = TERNARY(DotProductTop_dp_arith__io_reset.values[0], 0x0L, T20);}
  val_t T23[4];
  { T23[0] = T22 | T24[0] << 32; T23[1] = T24[0] >> 32 | T24[1] << 32; T23[2] = T24[1] >> 32 | T24[2] << 32; T23[3] = T24[2] >> 32 | T24[3] << 32;}
  { DotProductTop_dp_arith_rTree_adder__io_data_vec_1.values[0] = T23[0]; DotProductTop_dp_arith_rTree_adder__io_data_vec_1.values[1] = T23[1]; DotProductTop_dp_arith_rTree_adder__io_data_vec_1.values[2] = T23[2]; DotProductTop_dp_arith_rTree_adder__io_data_vec_1.values[3] = T23[3];}
  val_t T25;
  T25 = (DotProductTop_dp_ram2_BRAM_param__reg_raddr.values[0] >> 0) & 1;
  val_t T26;
  { T26 = DotProductTop_dp_ram2_BRAM_param__bRam_rw.get(T25, 0);}
  { DotProductTop_dp_ram2_BRAM_param__io_read_out.values[0] = T26;}
  { DotProductTop_dp_ram2__io_read_out_0.values[0] = DotProductTop_dp_ram2_BRAM_param__io_read_out.values[0];}
  { DotProductTop_dp_arith__io_v2_vec_0.values[0] = DotProductTop_dp_ram2__io_read_out_0.values[0];}
  val_t T27;
  T27 = (DotProductTop_dp_ram1_BRAM_param__reg_raddr.values[0] >> 0) & 1;
  val_t T28;
  { T28 = DotProductTop_dp_ram1_BRAM_param__bRam_rw.get(T27, 0);}
  { DotProductTop_dp_ram1_BRAM_param__io_read_out.values[0] = T28;}
  { DotProductTop_dp_ram1__io_read_out_0.values[0] = DotProductTop_dp_ram1_BRAM_param__io_read_out.values[0];}
  { DotProductTop_dp_arith__io_v1_vec_0.values[0] = DotProductTop_dp_ram1__io_read_out_0.values[0];}
  val_t T29;
  T29 = DotProductTop_dp_arith__io_v1_vec_0.values[0] * DotProductTop_dp_arith__io_v2_vec_0.values[0];
  val_t T30;
  { T30 = TERNARY(DotProductTop_dp_arith__io_reset.values[0], 0x0L, T29);}
  val_t T31[4];
  { T31[0] = T30 | T24[0] << 32; T31[1] = T24[0] >> 32 | T24[1] << 32; T31[2] = T24[1] >> 32 | T24[2] << 32; T31[3] = T24[2] >> 32 | T24[3] << 32;}
  { DotProductTop_dp_arith_rTree_adder__io_data_vec_0.values[0] = T31[0]; DotProductTop_dp_arith_rTree_adder__io_data_vec_0.values[1] = T31[1]; DotProductTop_dp_arith_rTree_adder__io_data_vec_0.values[2] = T31[2]; DotProductTop_dp_arith_rTree_adder__io_data_vec_0.values[3] = T31[3];}
  { T32.values[0] = DotProductTop_dp_arith_rTree_adder__rtree_vec_0_1.values[0]+DotProductTop_dp_arith_rTree_adder__rtree_vec_0_0.values[0]; val_t __c = DotProductTop_dp_arith_rTree_adder__rtree_vec_0_1.values[0]+DotProductTop_dp_arith_rTree_adder__rtree_vec_0_0.values[0] < DotProductTop_dp_arith_rTree_adder__rtree_vec_0_1.values[0]; T32.values[1] = DotProductTop_dp_arith_rTree_adder__rtree_vec_0_1.values[1]+DotProductTop_dp_arith_rTree_adder__rtree_vec_0_0.values[1]+__c; __c = DotProductTop_dp_arith_rTree_adder__rtree_vec_0_1.values[1]+DotProductTop_dp_arith_rTree_adder__rtree_vec_0_0.values[1] < DotProductTop_dp_arith_rTree_adder__rtree_vec_0_1.values[1] || T32.values[1] < __c; T32.values[2] = DotProductTop_dp_arith_rTree_adder__rtree_vec_0_1.values[2]+DotProductTop_dp_arith_rTree_adder__rtree_vec_0_0.values[2]+__c; __c = DotProductTop_dp_arith_rTree_adder__rtree_vec_0_1.values[2]+DotProductTop_dp_arith_rTree_adder__rtree_vec_0_0.values[2] < DotProductTop_dp_arith_rTree_adder__rtree_vec_0_1.values[2] || T32.values[2] < __c; T32.values[3] = DotProductTop_dp_arith_rTree_adder__rtree_vec_0_1.values[3]+DotProductTop_dp_arith_rTree_adder__rtree_vec_0_0.values[3]+__c;}
  val_t T33[4];
  { T33[0] = TERNARY(DotProductTop_dp_arith__io_reset.values[0], T34[0], DotProductTop_dp_arith__acc.values[0]); T33[1] = TERNARY(DotProductTop_dp_arith__io_reset.values[0], T34[1], DotProductTop_dp_arith__acc.values[1]); T33[2] = TERNARY(DotProductTop_dp_arith__io_reset.values[0], T34[2], DotProductTop_dp_arith__acc.values[2]); T33[3] = TERNARY(DotProductTop_dp_arith__io_reset.values[0], T34[3], DotProductTop_dp_arith__acc.values[3]);}
  { DotProductTop_dp_arith_rTree_adder__io_tree_output.values[0] = DotProductTop_dp_arith_rTree_adder__rtree_vec_1_0.values[0]; DotProductTop_dp_arith_rTree_adder__io_tree_output.values[1] = DotProductTop_dp_arith_rTree_adder__rtree_vec_1_0.values[1]; DotProductTop_dp_arith_rTree_adder__io_tree_output.values[2] = DotProductTop_dp_arith_rTree_adder__rtree_vec_1_0.values[2]; DotProductTop_dp_arith_rTree_adder__io_tree_output.values[3] = DotProductTop_dp_arith_rTree_adder__rtree_vec_1_0.values[3];}
  val_t T35[4];
  { T35[0] = DotProductTop_dp_arith__acc.values[0]+DotProductTop_dp_arith_rTree_adder__io_tree_output.values[0]; val_t __c = DotProductTop_dp_arith__acc.values[0]+DotProductTop_dp_arith_rTree_adder__io_tree_output.values[0] < DotProductTop_dp_arith__acc.values[0]; T35[1] = DotProductTop_dp_arith__acc.values[1]+DotProductTop_dp_arith_rTree_adder__io_tree_output.values[1]+__c; __c = DotProductTop_dp_arith__acc.values[1]+DotProductTop_dp_arith_rTree_adder__io_tree_output.values[1] < DotProductTop_dp_arith__acc.values[1] || T35[1] < __c; T35[2] = DotProductTop_dp_arith__acc.values[2]+DotProductTop_dp_arith_rTree_adder__io_tree_output.values[2]+__c; __c = DotProductTop_dp_arith__acc.values[2]+DotProductTop_dp_arith_rTree_adder__io_tree_output.values[2] < DotProductTop_dp_arith__acc.values[2] || T35[2] < __c; T35[3] = DotProductTop_dp_arith__acc.values[3]+DotProductTop_dp_arith_rTree_adder__io_tree_output.values[3]+__c;}
  { DotProductTop_dp_arith__io_en.values[0] = DotProductTop__delay_en_regs_2.values[0];}
  val_t T36;
  { T36 = DotProductTop_dp_arith__io_reset.values[0] ^ 0x1L;}
  val_t T37;
  { T37 = T36 & DotProductTop_dp_arith__io_en.values[0];}
  val_t T38[4];
  { T38[0] = TERNARY_1(T37, T35[0], T33[0]); T38[1] = TERNARY_1(T37, T35[1], T33[1]); T38[2] = TERNARY_1(T37, T35[2], T33[2]); T38[3] = TERNARY_1(T37, T35[3], T33[3]);}
  { DotProductTop_dp_arith__reset.values[0] = reset.values[0];}
  { T39.values[0] = TERNARY(DotProductTop_dp_arith__reset.values[0], T34[0], T38[0]); T39.values[1] = TERNARY(DotProductTop_dp_arith__reset.values[0], T34[1], T38[1]); T39.values[2] = TERNARY(DotProductTop_dp_arith__reset.values[0], T34[2], T38[2]); T39.values[3] = TERNARY(DotProductTop_dp_arith__reset.values[0], T34[3], T38[3]);}
  { val_t __r = this->__rand_val(); DotProductTop_dp_arith__io_out.values[0] = __r;}
  DotProductTop_dp_arith__io_out.values[0] = DotProductTop_dp_arith__io_out.values[0] & 0xffffL;
  { DotProductTop_counter__io_counters_cout_0_1.values[0] = DotProductTop_counter_ItrCounter__io_vec_cout_1.values[0];}
  { DotProductTop_dp_ram2__io_read_addr_1.values[0] = DotProductTop_counter__io_counters_cout_0_1.values[0];}
  val_t T40;
  T40 = DotProductTop_dp_ram2__io_read_addr_1.values[0] >> 0x1L;
  val_t T41;
  { T41 = T40 | 0x0L << 15;}
  { DotProductTop_dp_ram2_BRAM_param_1__io_read_addr.values[0] = T41;}
  { DotProductTop_dp_ram2__io_write_data.values[0] = DotProductTop__io_input_data.values[0];}
  { DotProductTop_dp_ram2_BRAM_param_1__io_write_data.values[0] = DotProductTop_dp_ram2__io_write_data.values[0];}
  val_t T42;
  T42 = DotProductTop__state.values[0] == 0x0L;
  { DotProductTop_dp_ram2__io_write_en.values[0] = T42;}
  { DotProductTop_dp_ram2_BRAM_param_1__io_write_en.values[0] = DotProductTop_dp_ram2__io_write_en.values[0];}
  { DotProductTop_dp_ram2__io_write_addr.values[0] = DotProductTop__io_input_addr.values[0];}
  val_t T43;
  T43 = DotProductTop_dp_ram2__io_write_addr.values[0] >> 0x1L;
  val_t T44;
  { T44 = T43 | 0x0L << 15;}
  { DotProductTop_dp_ram2_BRAM_param_1__io_write_addr.values[0] = T44;}
  T45.values[0] = (DotProductTop_dp_ram2_BRAM_param_1__io_write_addr.values[0] >> 0) & 1;
  { DotProductTop_counter__io_counters_cout_0_0.values[0] = DotProductTop_counter_ItrCounter__io_vec_cout_0.values[0];}
  { DotProductTop_dp_ram2__io_read_addr_0.values[0] = DotProductTop_counter__io_counters_cout_0_0.values[0];}
  val_t T46;
  T46 = DotProductTop_dp_ram2__io_read_addr_0.values[0] >> 0x1L;
  val_t T47;
  { T47 = T46 | 0x0L << 15;}
  { DotProductTop_dp_ram2_BRAM_param__io_read_addr.values[0] = T47;}
  { DotProductTop_dp_ram2_BRAM_param__io_write_data.values[0] = DotProductTop_dp_ram2__io_write_data.values[0];}
  { DotProductTop_dp_ram2_BRAM_param__io_write_en.values[0] = DotProductTop_dp_ram2__io_write_en.values[0];}
  val_t T48;
  T48 = DotProductTop_dp_ram2__io_write_addr.values[0] >> 0x1L;
  val_t T49;
  { T49 = T48 | 0x0L << 15;}
  { DotProductTop_dp_ram2_BRAM_param__io_write_addr.values[0] = T49;}
  T50.values[0] = (DotProductTop_dp_ram2_BRAM_param__io_write_addr.values[0] >> 0) & 1;
  { DotProductTop_dp_ram1__io_read_addr_1.values[0] = DotProductTop_counter__io_counters_cout_0_1.values[0];}
  val_t T51;
  T51 = DotProductTop_dp_ram1__io_read_addr_1.values[0] >> 0x1L;
  val_t T52;
  { T52 = T51 | 0x0L << 15;}
  { DotProductTop_dp_ram1_BRAM_param_1__io_read_addr.values[0] = T52;}
  { DotProductTop_dp_ram1__io_write_data.values[0] = DotProductTop__io_input_data.values[0];}
  { DotProductTop_dp_ram1_BRAM_param_1__io_write_data.values[0] = DotProductTop_dp_ram1__io_write_data.values[0];}
  val_t T53;
  T53 = DotProductTop__state.values[0] == 0x0L;
  { DotProductTop_dp_ram1__io_write_en.values[0] = T53;}
  { DotProductTop_dp_ram1_BRAM_param_1__io_write_en.values[0] = DotProductTop_dp_ram1__io_write_en.values[0];}
  { DotProductTop_dp_ram1__io_write_addr.values[0] = DotProductTop__io_input_addr.values[0];}
  val_t T54;
  T54 = DotProductTop_dp_ram1__io_write_addr.values[0] >> 0x1L;
  val_t T55;
  { T55 = T54 | 0x0L << 15;}
  { DotProductTop_dp_ram1_BRAM_param_1__io_write_addr.values[0] = T55;}
  T56.values[0] = (DotProductTop_dp_ram1_BRAM_param_1__io_write_addr.values[0] >> 0) & 1;
  { DotProductTop_dp_ram1__io_read_addr_0.values[0] = DotProductTop_counter__io_counters_cout_0_0.values[0];}
  val_t T57;
  T57 = DotProductTop_dp_ram1__io_read_addr_0.values[0] >> 0x1L;
  val_t T58;
  { T58 = T57 | 0x0L << 15;}
  { DotProductTop_dp_ram1_BRAM_param__io_read_addr.values[0] = T58;}
  { DotProductTop_dp_ram1_BRAM_param__io_write_data.values[0] = DotProductTop_dp_ram1__io_write_data.values[0];}
  { DotProductTop_dp_ram1_BRAM_param__io_write_en.values[0] = DotProductTop_dp_ram1__io_write_en.values[0];}
  val_t T59;
  T59 = DotProductTop_dp_ram1__io_write_addr.values[0] >> 0x1L;
  val_t T60;
  { T60 = T59 | 0x0L << 15;}
  { DotProductTop_dp_ram1_BRAM_param__io_write_addr.values[0] = T60;}
  T61.values[0] = (DotProductTop_dp_ram1_BRAM_param__io_write_addr.values[0] >> 0) & 1;
  val_t DotProductTop_dp_FSM__state_wait;
  DotProductTop_dp_FSM__state_wait = DotProductTop_dp_FSM__curr_state.values[0] == 0x2L;
  val_t DotProductTop_dp_FSM__state_en;
  DotProductTop_dp_FSM__state_en = DotProductTop_dp_FSM__prev_state.values[0] == 0x1L;
  val_t DotProductTop_dp_FSM__pipe_pulse;
  { DotProductTop_dp_FSM__pipe_pulse = DotProductTop_dp_FSM__state_en & DotProductTop_dp_FSM__state_wait;}
  { DotProductTop_dp_FSM__reset.values[0] = reset.values[0];}
  { T62.values[0] = TERNARY(DotProductTop_dp_FSM__reset.values[0], 0x0L, DotProductTop_dp_FSM__pipe_pulse);}
  { T63.values[0] = TERNARY(DotProductTop_dp_FSM__reset.values[0], 0x0L, DotProductTop_dp_FSM__wait_regs_0.values[0]);}
  { T64.values[0] = TERNARY(DotProductTop_dp_FSM__reset.values[0], 0x0L, DotProductTop_dp_FSM__wait_regs_1.values[0]);}
  val_t T65;
  T65 = DotProductTop__state.values[0] == 0x1L;
  { DotProductTop_dp_FSM__io_en.values[0] = T65;}
  val_t T66;
  T66 = 0x0L == DotProductTop_dp_FSM__curr_state.values[0];
  val_t T67;
  { T67 = T66 & DotProductTop_dp_FSM__io_en.values[0];}
  val_t T68;
  { T68 = TERNARY(T67, 0x1L, DotProductTop_dp_FSM__curr_state.values[0]);}
  val_t T69;
  { T69 = DotProductTop_counter_ItrCounter__io_en_count.values[0] & DotProductTop_counter_ItrCounter__io_done.values[0];}
  val_t T70;
  { T70 = T69 | DotProductTop_counter__done_complete.values[0];}
  { DotProductTop_counter__io_done_complete.values[0] = T70;}
  { DotProductTop_dp_FSM__io_counter_done.values[0] = DotProductTop_counter__io_done_complete.values[0];}
  val_t T71;
  T71 = 0x1L == DotProductTop_dp_FSM__curr_state.values[0];
  val_t T72;
  { T72 = T71 & DotProductTop_dp_FSM__io_counter_done.values[0];}
  val_t T73;
  { T73 = TERNARY(T72, 0x2L, T68);}
  val_t T74;
  T74 = 0x2L == DotProductTop_dp_FSM__curr_state.values[0];
  val_t T75;
  { T75 = T74 & DotProductTop_dp_FSM__wait_done.values[0];}
  val_t T76;
  { T76 = TERNARY(T75, 0x3L, T73);}
  val_t T77;
  T77 = 0x3L == DotProductTop_dp_FSM__curr_state.values[0];
  val_t T78;
  { T78 = TERNARY(T77, 0x0L, T76);}
  { T79.values[0] = TERNARY(DotProductTop_dp_FSM__reset.values[0], 0x0L, T78);}
  { DotProductTop__io_status.values[0] = DotProductTop__state.values[0];}
  { DotProductTop_dp_arith__io_dotproduct.values[0] = DotProductTop_dp_arith__acc.values[0]; DotProductTop_dp_arith__io_dotproduct.values[1] = DotProductTop_dp_arith__acc.values[1]; DotProductTop_dp_arith__io_dotproduct.values[2] = DotProductTop_dp_arith__acc.values[2]; DotProductTop_dp_arith__io_dotproduct.values[3] = DotProductTop_dp_arith__acc.values[3];}
  val_t T80;
  { T80 = DotProductTop_dp_arith__io_dotproduct.values[0];}
  T80 = T80 & 0xffffL;
  { DotProductTop__io_result.values[0] = T80;}
  val_t T81;
  { T81 = DotProductTop_counter__io_done_complete.values[0] | 0x0L << 1;}
  { DotProductTop__io_check.values[0] = T81;}
  { T82.values[0] = TERNARY(reset.values[0], 0x0L, DotProductTop_dp_FSM__io_pipe_enabled.values[0]);}
  { T83.values[0] = TERNARY(reset.values[0], 0x0L, DotProductTop__delay_en_regs_0.values[0]);}
  { T84.values[0] = TERNARY(reset.values[0], 0x0L, DotProductTop__delay_en_regs_1.values[0]);}
  val_t T85;
  T85 = 0x0L == DotProductTop__state.values[0];
  val_t T86;
  { T86 = T85 & DotProductTop__io_cmd.values[0];}
  val_t T87;
  { T87 = TERNARY(T86, 0x1L, DotProductTop__state.values[0]);}
  val_t T88;
  T88 = DotProductTop_dp_FSM__curr_state.values[0] == 0x3L;
  { DotProductTop_dp_FSM__io_done.values[0] = T88;}
  val_t T89;
  T89 = 0x1L == DotProductTop__state.values[0];
  val_t T90;
  { T90 = T89 & DotProductTop_dp_FSM__io_done.values[0];}
  val_t T91;
  { T91 = TERNARY(T90, 0x2L, T87);}
  val_t T92;
  T92 = 0x2L == DotProductTop__state.values[0];
  val_t T93;
  { T93 = TERNARY(T92, 0x3L, T91);}
  val_t T94;
  T94 = 0x3L == DotProductTop__state.values[0];
  val_t T95;
  { T95 = TERNARY(T94, 0x0L, T93);}
  { T96.values[0] = TERNARY(reset.values[0], 0x0L, T95);}
}


void DotProductTop_t::clock_hi ( dat_t<1> reset ) {
  dat_t<16> DotProductTop_counter_ItrCounter__currCount__shadow = T9;
  dat_t<1> DotProductTop_counter__done_complete__shadow = T15;
  dat_t<256> DotProductTop_dp_arith_rTree_adder__rtree_vec_0_1__shadow = DotProductTop_dp_arith_rTree_adder__io_data_vec_1;
  dat_t<256> DotProductTop_dp_arith_rTree_adder__rtree_vec_0_0__shadow = DotProductTop_dp_arith_rTree_adder__io_data_vec_0;
  dat_t<256> DotProductTop_dp_arith_rTree_adder__rtree_vec_1_0__shadow = T32;
  dat_t<256> DotProductTop_dp_arith__acc__shadow = T39;
  dat_t<16> DotProductTop_dp_ram2_BRAM_param_1__reg_raddr__shadow = DotProductTop_dp_ram2_BRAM_param_1__io_read_addr;
  { if (DotProductTop_dp_ram2_BRAM_param_1__io_write_en.values[0]) DotProductTop_dp_ram2_BRAM_param_1__bRam_rw.put(T45.values[0], 0, DotProductTop_dp_ram2_BRAM_param_1__io_write_data.values[0]);}
  dat_t<16> DotProductTop_dp_ram2_BRAM_param__reg_raddr__shadow = DotProductTop_dp_ram2_BRAM_param__io_read_addr;
  { if (DotProductTop_dp_ram2_BRAM_param__io_write_en.values[0]) DotProductTop_dp_ram2_BRAM_param__bRam_rw.put(T50.values[0], 0, DotProductTop_dp_ram2_BRAM_param__io_write_data.values[0]);}
  dat_t<16> DotProductTop_dp_ram1_BRAM_param_1__reg_raddr__shadow = DotProductTop_dp_ram1_BRAM_param_1__io_read_addr;
  { if (DotProductTop_dp_ram1_BRAM_param_1__io_write_en.values[0]) DotProductTop_dp_ram1_BRAM_param_1__bRam_rw.put(T56.values[0], 0, DotProductTop_dp_ram1_BRAM_param_1__io_write_data.values[0]);}
  dat_t<16> DotProductTop_dp_ram1_BRAM_param__reg_raddr__shadow = DotProductTop_dp_ram1_BRAM_param__io_read_addr;
  { if (DotProductTop_dp_ram1_BRAM_param__io_write_en.values[0]) DotProductTop_dp_ram1_BRAM_param__bRam_rw.put(T61.values[0], 0, DotProductTop_dp_ram1_BRAM_param__io_write_data.values[0]);}
  dat_t<2> DotProductTop_dp_FSM__prev_state__shadow = DotProductTop_dp_FSM__curr_state;
  dat_t<1> DotProductTop_dp_FSM__wait_regs_0__shadow = T62;
  dat_t<1> DotProductTop_dp_FSM__wait_regs_1__shadow = T63;
  dat_t<1> DotProductTop_dp_FSM__wait_done__shadow = T64;
  dat_t<2> DotProductTop_dp_FSM__curr_state__shadow = T79;
  dat_t<1> DotProductTop__delay_en_regs_0__shadow = T82;
  dat_t<1> DotProductTop__delay_en_regs_1__shadow = T83;
  dat_t<1> DotProductTop__delay_en_regs_2__shadow = T84;
  dat_t<2> DotProductTop__state__shadow = T96;
  DotProductTop_counter_ItrCounter__currCount = T9;
  DotProductTop_counter__done_complete = T15;
  DotProductTop_dp_arith_rTree_adder__rtree_vec_0_1 = DotProductTop_dp_arith_rTree_adder__io_data_vec_1;
  DotProductTop_dp_arith_rTree_adder__rtree_vec_0_0 = DotProductTop_dp_arith_rTree_adder__io_data_vec_0;
  DotProductTop_dp_arith_rTree_adder__rtree_vec_1_0 = T32;
  DotProductTop_dp_arith__acc = T39;
  DotProductTop_dp_ram2_BRAM_param_1__reg_raddr = DotProductTop_dp_ram2_BRAM_param_1__io_read_addr;
  DotProductTop_dp_ram2_BRAM_param__reg_raddr = DotProductTop_dp_ram2_BRAM_param__io_read_addr;
  DotProductTop_dp_ram1_BRAM_param_1__reg_raddr = DotProductTop_dp_ram1_BRAM_param_1__io_read_addr;
  DotProductTop_dp_ram1_BRAM_param__reg_raddr = DotProductTop_dp_ram1_BRAM_param__io_read_addr;
  DotProductTop_dp_FSM__prev_state = DotProductTop_dp_FSM__prev_state__shadow;
  DotProductTop_dp_FSM__wait_regs_0 = T62;
  DotProductTop_dp_FSM__wait_regs_1 = T63;
  DotProductTop_dp_FSM__wait_done = T64;
  DotProductTop_dp_FSM__curr_state = T79;
  DotProductTop__delay_en_regs_0 = T82;
  DotProductTop__delay_en_regs_1 = T83;
  DotProductTop__delay_en_regs_2 = T84;
  DotProductTop__state = T96;
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
  sim_data.outputs.push_back(new dat_api<16>(&mod->DotProductTop__io_check));
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_counter_ItrCounter__io_vec_cout_0));
  sim_data.signal_map["DotProductTop.counter.ItrCounter.io_vec_cout_0"] = 0;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_counter_ItrCounter__io_vec_cout_1));
  sim_data.signal_map["DotProductTop.counter.ItrCounter.io_vec_cout_1"] = 1;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_counter__io_counters_max_0));
  sim_data.signal_map["DotProductTop.counter.io_counters_max_0"] = 2;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_counter_ItrCounter__io_max));
  sim_data.signal_map["DotProductTop.counter.ItrCounter.io_max"] = 3;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_FSM__io_pipe_enabled));
  sim_data.signal_map["DotProductTop.dp_FSM.io_pipe_enabled"] = 4;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter__io_en));
  sim_data.signal_map["DotProductTop.counter.io_en"] = 5;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter_ItrCounter__io_en_count));
  sim_data.signal_map["DotProductTop.counter.ItrCounter.io_en_count"] = 6;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter__io_reset));
  sim_data.signal_map["DotProductTop.counter.io_reset"] = 7;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter_ItrCounter__io_reset));
  sim_data.signal_map["DotProductTop.counter.ItrCounter.io_reset"] = 8;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter__reset));
  sim_data.signal_map["DotProductTop.counter.reset"] = 9;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter_ItrCounter__reset));
  sim_data.signal_map["DotProductTop.counter.ItrCounter.reset"] = 10;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_counter_ItrCounter__currCount));
  sim_data.signal_map["DotProductTop.counter.ItrCounter.currCount"] = 11;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter_ItrCounter__io_done));
  sim_data.signal_map["DotProductTop.counter.ItrCounter.io_done"] = 12;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter__io_counters_done_0));
  sim_data.signal_map["DotProductTop.counter.io_counters_done_0"] = 13;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter__done_complete));
  sim_data.signal_map["DotProductTop.counter.done_complete"] = 14;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2_BRAM_param_1__io_read_out));
  sim_data.signal_map["DotProductTop.dp_ram2.BRAM_param_1.io_read_out"] = 15;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2__io_read_out_1));
  sim_data.signal_map["DotProductTop.dp_ram2.io_read_out_1"] = 16;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_arith__io_v2_vec_1));
  sim_data.signal_map["DotProductTop.dp_arith.io_v2_vec_1"] = 17;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1_BRAM_param_1__io_read_out));
  sim_data.signal_map["DotProductTop.dp_ram1.BRAM_param_1.io_read_out"] = 18;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1__io_read_out_1));
  sim_data.signal_map["DotProductTop.dp_ram1.io_read_out_1"] = 19;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_arith__io_v1_vec_1));
  sim_data.signal_map["DotProductTop.dp_arith.io_v1_vec_1"] = 20;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_arith__io_reset));
  sim_data.signal_map["DotProductTop.dp_arith.io_reset"] = 21;
  sim_data.signals.push_back(new dat_api<256>(&mod->DotProductTop_dp_arith_rTree_adder__io_data_vec_1));
  sim_data.signal_map["DotProductTop.dp_arith.rTree_adder.io_data_vec_1"] = 22;
  sim_data.signals.push_back(new dat_api<256>(&mod->DotProductTop_dp_arith_rTree_adder__rtree_vec_0_1));
  sim_data.signal_map["DotProductTop.dp_arith.rTree_adder.rtree_vec_0_1"] = 23;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2_BRAM_param__io_read_out));
  sim_data.signal_map["DotProductTop.dp_ram2.BRAM_param.io_read_out"] = 24;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2__io_read_out_0));
  sim_data.signal_map["DotProductTop.dp_ram2.io_read_out_0"] = 25;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_arith__io_v2_vec_0));
  sim_data.signal_map["DotProductTop.dp_arith.io_v2_vec_0"] = 26;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1_BRAM_param__io_read_out));
  sim_data.signal_map["DotProductTop.dp_ram1.BRAM_param.io_read_out"] = 27;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1__io_read_out_0));
  sim_data.signal_map["DotProductTop.dp_ram1.io_read_out_0"] = 28;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_arith__io_v1_vec_0));
  sim_data.signal_map["DotProductTop.dp_arith.io_v1_vec_0"] = 29;
  sim_data.signals.push_back(new dat_api<256>(&mod->DotProductTop_dp_arith_rTree_adder__io_data_vec_0));
  sim_data.signal_map["DotProductTop.dp_arith.rTree_adder.io_data_vec_0"] = 30;
  sim_data.signals.push_back(new dat_api<256>(&mod->DotProductTop_dp_arith_rTree_adder__rtree_vec_0_0));
  sim_data.signal_map["DotProductTop.dp_arith.rTree_adder.rtree_vec_0_0"] = 31;
  sim_data.signals.push_back(new dat_api<256>(&mod->DotProductTop_dp_arith_rTree_adder__rtree_vec_1_0));
  sim_data.signal_map["DotProductTop.dp_arith.rTree_adder.rtree_vec_1_0"] = 32;
  sim_data.signals.push_back(new dat_api<256>(&mod->DotProductTop_dp_arith_rTree_adder__io_tree_output));
  sim_data.signal_map["DotProductTop.dp_arith.rTree_adder.io_tree_output"] = 33;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_arith__io_en));
  sim_data.signal_map["DotProductTop.dp_arith.io_en"] = 34;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_arith__reset));
  sim_data.signal_map["DotProductTop.dp_arith.reset"] = 35;
  sim_data.signals.push_back(new dat_api<256>(&mod->DotProductTop_dp_arith__acc));
  sim_data.signal_map["DotProductTop.dp_arith.acc"] = 36;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_counter__io_counters_cout_0_1));
  sim_data.signal_map["DotProductTop.counter.io_counters_cout_0_1"] = 37;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2__io_read_addr_1));
  sim_data.signal_map["DotProductTop.dp_ram2.io_read_addr_1"] = 38;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2_BRAM_param_1__io_read_addr));
  sim_data.signal_map["DotProductTop.dp_ram2.BRAM_param_1.io_read_addr"] = 39;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2_BRAM_param_1__reg_raddr));
  sim_data.signal_map["DotProductTop.dp_ram2.BRAM_param_1.reg_raddr"] = 40;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2__io_write_data));
  sim_data.signal_map["DotProductTop.dp_ram2.io_write_data"] = 41;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2_BRAM_param_1__io_write_data));
  sim_data.signal_map["DotProductTop.dp_ram2.BRAM_param_1.io_write_data"] = 42;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_ram2__io_write_en));
  sim_data.signal_map["DotProductTop.dp_ram2.io_write_en"] = 43;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_ram2_BRAM_param_1__io_write_en));
  sim_data.signal_map["DotProductTop.dp_ram2.BRAM_param_1.io_write_en"] = 44;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2__io_write_addr));
  sim_data.signal_map["DotProductTop.dp_ram2.io_write_addr"] = 45;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2_BRAM_param_1__io_write_addr));
  sim_data.signal_map["DotProductTop.dp_ram2.BRAM_param_1.io_write_addr"] = 46;
  std::string DotProductTop_dp_ram2_BRAM_param_1__bRam_rw_path = "DotProductTop.dp_ram2.BRAM_param_1.bRam_rw";
  for (size_t i = 0 ; i < 2 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2_BRAM_param_1__bRam_rw.contents[i]));
    sim_data.signal_map[DotProductTop_dp_ram2_BRAM_param_1__bRam_rw_path+"["+itos(i,false)+"]"] = 47+i;
  }
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_counter__io_counters_cout_0_0));
  sim_data.signal_map["DotProductTop.counter.io_counters_cout_0_0"] = 49;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2__io_read_addr_0));
  sim_data.signal_map["DotProductTop.dp_ram2.io_read_addr_0"] = 50;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2_BRAM_param__io_read_addr));
  sim_data.signal_map["DotProductTop.dp_ram2.BRAM_param.io_read_addr"] = 51;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2_BRAM_param__reg_raddr));
  sim_data.signal_map["DotProductTop.dp_ram2.BRAM_param.reg_raddr"] = 52;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2_BRAM_param__io_write_data));
  sim_data.signal_map["DotProductTop.dp_ram2.BRAM_param.io_write_data"] = 53;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_ram2_BRAM_param__io_write_en));
  sim_data.signal_map["DotProductTop.dp_ram2.BRAM_param.io_write_en"] = 54;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2_BRAM_param__io_write_addr));
  sim_data.signal_map["DotProductTop.dp_ram2.BRAM_param.io_write_addr"] = 55;
  std::string DotProductTop_dp_ram2_BRAM_param__bRam_rw_path = "DotProductTop.dp_ram2.BRAM_param.bRam_rw";
  for (size_t i = 0 ; i < 2 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2_BRAM_param__bRam_rw.contents[i]));
    sim_data.signal_map[DotProductTop_dp_ram2_BRAM_param__bRam_rw_path+"["+itos(i,false)+"]"] = 56+i;
  }
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1__io_read_addr_1));
  sim_data.signal_map["DotProductTop.dp_ram1.io_read_addr_1"] = 58;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1_BRAM_param_1__io_read_addr));
  sim_data.signal_map["DotProductTop.dp_ram1.BRAM_param_1.io_read_addr"] = 59;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1_BRAM_param_1__reg_raddr));
  sim_data.signal_map["DotProductTop.dp_ram1.BRAM_param_1.reg_raddr"] = 60;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1__io_write_data));
  sim_data.signal_map["DotProductTop.dp_ram1.io_write_data"] = 61;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1_BRAM_param_1__io_write_data));
  sim_data.signal_map["DotProductTop.dp_ram1.BRAM_param_1.io_write_data"] = 62;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_ram1__io_write_en));
  sim_data.signal_map["DotProductTop.dp_ram1.io_write_en"] = 63;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_ram1_BRAM_param_1__io_write_en));
  sim_data.signal_map["DotProductTop.dp_ram1.BRAM_param_1.io_write_en"] = 64;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1__io_write_addr));
  sim_data.signal_map["DotProductTop.dp_ram1.io_write_addr"] = 65;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1_BRAM_param_1__io_write_addr));
  sim_data.signal_map["DotProductTop.dp_ram1.BRAM_param_1.io_write_addr"] = 66;
  std::string DotProductTop_dp_ram1_BRAM_param_1__bRam_rw_path = "DotProductTop.dp_ram1.BRAM_param_1.bRam_rw";
  for (size_t i = 0 ; i < 2 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1_BRAM_param_1__bRam_rw.contents[i]));
    sim_data.signal_map[DotProductTop_dp_ram1_BRAM_param_1__bRam_rw_path+"["+itos(i,false)+"]"] = 67+i;
  }
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1__io_read_addr_0));
  sim_data.signal_map["DotProductTop.dp_ram1.io_read_addr_0"] = 69;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1_BRAM_param__io_read_addr));
  sim_data.signal_map["DotProductTop.dp_ram1.BRAM_param.io_read_addr"] = 70;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1_BRAM_param__reg_raddr));
  sim_data.signal_map["DotProductTop.dp_ram1.BRAM_param.reg_raddr"] = 71;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1_BRAM_param__io_write_data));
  sim_data.signal_map["DotProductTop.dp_ram1.BRAM_param.io_write_data"] = 72;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_ram1_BRAM_param__io_write_en));
  sim_data.signal_map["DotProductTop.dp_ram1.BRAM_param.io_write_en"] = 73;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1_BRAM_param__io_write_addr));
  sim_data.signal_map["DotProductTop.dp_ram1.BRAM_param.io_write_addr"] = 74;
  std::string DotProductTop_dp_ram1_BRAM_param__bRam_rw_path = "DotProductTop.dp_ram1.BRAM_param.bRam_rw";
  for (size_t i = 0 ; i < 2 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1_BRAM_param__bRam_rw.contents[i]));
    sim_data.signal_map[DotProductTop_dp_ram1_BRAM_param__bRam_rw_path+"["+itos(i,false)+"]"] = 75+i;
  }
  sim_data.signals.push_back(new dat_api<2>(&mod->DotProductTop_dp_FSM__prev_state));
  sim_data.signal_map["DotProductTop.dp_FSM.prev_state"] = 77;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_FSM__reset));
  sim_data.signal_map["DotProductTop.dp_FSM.reset"] = 78;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_FSM__wait_regs_0));
  sim_data.signal_map["DotProductTop.dp_FSM.wait_regs_0"] = 79;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_FSM__wait_regs_1));
  sim_data.signal_map["DotProductTop.dp_FSM.wait_regs_1"] = 80;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_FSM__wait_done));
  sim_data.signal_map["DotProductTop.dp_FSM.wait_done"] = 81;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_FSM__io_en));
  sim_data.signal_map["DotProductTop.dp_FSM.io_en"] = 82;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter__io_done_complete));
  sim_data.signal_map["DotProductTop.counter.io_done_complete"] = 83;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_FSM__io_counter_done));
  sim_data.signal_map["DotProductTop.dp_FSM.io_counter_done"] = 84;
  sim_data.signals.push_back(new dat_api<2>(&mod->DotProductTop_dp_FSM__curr_state));
  sim_data.signal_map["DotProductTop.dp_FSM.curr_state"] = 85;
  sim_data.signals.push_back(new dat_api<256>(&mod->DotProductTop_dp_arith__io_dotproduct));
  sim_data.signal_map["DotProductTop.dp_arith.io_dotproduct"] = 86;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop__delay_en_regs_0));
  sim_data.signal_map["DotProductTop.delay_en_regs_0"] = 87;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop__delay_en_regs_1));
  sim_data.signal_map["DotProductTop.delay_en_regs_1"] = 88;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop__delay_en_regs_2));
  sim_data.signal_map["DotProductTop.delay_en_regs_2"] = 89;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_FSM__io_done));
  sim_data.signal_map["DotProductTop.dp_FSM.io_done"] = 90;
  sim_data.signals.push_back(new dat_api<2>(&mod->DotProductTop__state));
  sim_data.signal_map["DotProductTop.state"] = 91;
  sim_data.clk_map["clk"] = new clk_api(&mod->clk);
}
