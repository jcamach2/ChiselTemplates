#include "MatrixMultiplyPipe.h"

const val_t MatrixMultiplyPipe_t::T24[] = {0x0L, 0x0L, 0x0L, 0x0L};
const val_t MatrixMultiplyPipe_t::T30[] = {0x0L, 0x0L, 0x0L, 0x0L};

void MatrixMultiplyPipe_t::init ( val_t rand_init ) {
  this->__srand(rand_init);
   MatrixMultiplyPipe_matrix_output_addr__io_reset.randomize(&__rand_seed);
  MatrixMultiplyPipe_matrix_output_addr__mult_reg.randomize(&__rand_seed);
  MatrixMultiplyPipe_matrix_output_addr__k_reg.randomize(&__rand_seed);
   MatrixMultiplyPipe_matrix_column_addr__io_reset.randomize(&__rand_seed);
  MatrixMultiplyPipe_matrix_column_addr__mult_reg.randomize(&__rand_seed);
  MatrixMultiplyPipe_matrix_column_addr__k_reg.randomize(&__rand_seed);
  MatrixMultiplyPipe_matrix_row_addr__mult_reg.randomize(&__rand_seed);
  MatrixMultiplyPipe_matrix_row_addr__k_reg.randomize(&__rand_seed);
  MatrixMultiplyPipe_dp_arith_block__productReg.randomize(&__rand_seed);
  MatrixMultiplyPipe_dp_arith_block__acc.randomize(&__rand_seed);
  MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__currCount.randomize(&__rand_seed);
  MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__currCount.randomize(&__rand_seed);
  MatrixMultiplyPipe_counterchain_matrix_ItrCounter__currCount.randomize(&__rand_seed);
  MatrixMultiplyPipe_matrix_output__reg_raddr.randomize(&__rand_seed);
  MatrixMultiplyPipe_matrix_output__bRam_rw.randomize(&__rand_seed);
  MatrixMultiplyPipe_matrix_ram2__reg_raddr.randomize(&__rand_seed);
  MatrixMultiplyPipe_matrix_ram2__bRam_rw.randomize(&__rand_seed);
  MatrixMultiplyPipe_matrix_ram1__reg_raddr.randomize(&__rand_seed);
  MatrixMultiplyPipe_matrix_ram1__bRam_rw.randomize(&__rand_seed);
  MatrixMultiplyPipe__reg_addr_delay_0.randomize(&__rand_seed);
  MatrixMultiplyPipe__reg_addr_delay_1.randomize(&__rand_seed);
  MatrixMultiplyPipe__reg_addr_delay_2.randomize(&__rand_seed);
  MatrixMultiplyPipe__reg_en_delay_3.randomize(&__rand_seed);
  MatrixMultiplyPipe__reg_reset_delay_0.randomize(&__rand_seed);
  MatrixMultiplyPipe__reg_reset_delay_1.randomize(&__rand_seed);
  MatrixMultiplyPipe__reg_reset_delay_2.randomize(&__rand_seed);
  MatrixMultiplyPipe__reg_reset_delay_3.randomize(&__rand_seed);
  MatrixMultiplyPipe__reg_en_delay_0.randomize(&__rand_seed);
  MatrixMultiplyPipe__reg_en_delay_1.randomize(&__rand_seed);
  MatrixMultiplyPipe__reg_en_delay_2.randomize(&__rand_seed);
  MatrixMultiplyPipe__state.randomize(&__rand_seed);
  clk.len = 1;
  clk.cnt = 0;
  clk.values[0] = 0;
}


int MatrixMultiplyPipe_t::clock ( dat_t<1> reset ) {
  uint32_t min = ((uint32_t)1<<31)-1;
  if (clk.cnt < min) min = clk.cnt;
  clk.cnt-=min;
  if (clk.cnt == 0) clock_lo( reset );
  if (!reset.to_bool()) print( std::cerr );
  if (clk.cnt == 0) clock_hi( reset );
  if (clk.cnt == 0) clk.cnt = clk.len;
  return min;
}


void MatrixMultiplyPipe_t::print ( FILE* f ) {
}
void MatrixMultiplyPipe_t::print ( std::ostream& s ) {
}


void MatrixMultiplyPipe_t::dump_init ( FILE* f ) {
}


void MatrixMultiplyPipe_t::dump ( FILE* f, val_t t, dat_t<1> reset ) {
}




void MatrixMultiplyPipe_t::clock_lo ( dat_t<1> reset, bool assert_fire ) {
  { val_t __r = this->__rand_val(); MatrixMultiplyPipe_matrix_output_addr__io_reset.values[0] = __r;}
  MatrixMultiplyPipe_matrix_output_addr__io_reset.values[0] = MatrixMultiplyPipe_matrix_output_addr__io_reset.values[0] & 0x1L;
  val_t T0;
  { T0 = TERNARY(MatrixMultiplyPipe_matrix_output_addr__io_reset.values[0], 0x0L, MatrixMultiplyPipe_matrix_output_addr__mult_reg.values[0]);}
  { MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__io_cout.values[0] = MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__currCount.values[0];}
  { MatrixMultiplyPipe_counterchain_matrix__io_counters_cout_2.values[0] = MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__io_cout.values[0];}
  { MatrixMultiplyPipe_matrix_output_addr__io_in.values[0] = MatrixMultiplyPipe_counterchain_matrix__io_counters_cout_2.values[0];}
  { MatrixMultiplyPipe_matrix_output_addr__io_const_dim.values[0] = 0x3L;}
  val_t MatrixMultiplyPipe_matrix_output_addr__mult_block;
  MatrixMultiplyPipe_matrix_output_addr__mult_block = MatrixMultiplyPipe_matrix_output_addr__io_const_dim.values[0] * MatrixMultiplyPipe_matrix_output_addr__io_in.values[0];
  val_t T1;
  { T1 = MatrixMultiplyPipe_matrix_output_addr__io_reset.values[0] ^ 0x1L;}
  val_t T2;
  { T2 = TERNARY_1(T1, MatrixMultiplyPipe_matrix_output_addr__mult_block, T0);}
  val_t MatrixMultiplyPipe__to_reset;
  MatrixMultiplyPipe__to_reset = MatrixMultiplyPipe__state.values[0] == 0x0L;
  { MatrixMultiplyPipe_matrix_output_addr__reset.values[0] = MatrixMultiplyPipe__to_reset;}
  { T3.values[0] = TERNARY(MatrixMultiplyPipe_matrix_output_addr__reset.values[0], 0x0L, T2);}
  val_t T4;
  { T4 = TERNARY(MatrixMultiplyPipe_matrix_output_addr__io_reset.values[0], 0x0L, MatrixMultiplyPipe_matrix_output_addr__k_reg.values[0]);}
  { MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__io_cout.values[0] = MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__currCount.values[0];}
  { MatrixMultiplyPipe_counterchain_matrix__io_counters_cout_1.values[0] = MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__io_cout.values[0];}
  { MatrixMultiplyPipe_matrix_output_addr__io_k.values[0] = MatrixMultiplyPipe_counterchain_matrix__io_counters_cout_1.values[0];}
  val_t T5;
  { T5 = TERNARY_1(T1, MatrixMultiplyPipe_matrix_output_addr__io_k.values[0], T4);}
  { T6.values[0] = TERNARY(MatrixMultiplyPipe_matrix_output_addr__reset.values[0], 0x0L, T5);}
  { val_t __r = this->__rand_val(); MatrixMultiplyPipe_matrix_column_addr__io_reset.values[0] = __r;}
  MatrixMultiplyPipe_matrix_column_addr__io_reset.values[0] = MatrixMultiplyPipe_matrix_column_addr__io_reset.values[0] & 0x1L;
  val_t T7;
  { T7 = TERNARY(MatrixMultiplyPipe_matrix_column_addr__io_reset.values[0], 0x0L, MatrixMultiplyPipe_matrix_column_addr__mult_reg.values[0]);}
  { MatrixMultiplyPipe_counterchain_matrix_ItrCounter__io_cout.values[0] = MatrixMultiplyPipe_counterchain_matrix_ItrCounter__currCount.values[0];}
  { MatrixMultiplyPipe_counterchain_matrix__io_counters_cout_0.values[0] = MatrixMultiplyPipe_counterchain_matrix_ItrCounter__io_cout.values[0];}
  { MatrixMultiplyPipe_matrix_column_addr__io_in.values[0] = MatrixMultiplyPipe_counterchain_matrix__io_counters_cout_0.values[0];}
  { MatrixMultiplyPipe_matrix_column_addr__io_const_dim.values[0] = 0x3L;}
  val_t MatrixMultiplyPipe_matrix_column_addr__mult_block;
  MatrixMultiplyPipe_matrix_column_addr__mult_block = MatrixMultiplyPipe_matrix_column_addr__io_const_dim.values[0] * MatrixMultiplyPipe_matrix_column_addr__io_in.values[0];
  val_t T8;
  { T8 = MatrixMultiplyPipe_matrix_column_addr__io_reset.values[0] ^ 0x1L;}
  val_t T9;
  { T9 = TERNARY_1(T8, MatrixMultiplyPipe_matrix_column_addr__mult_block, T7);}
  { MatrixMultiplyPipe_matrix_column_addr__reset.values[0] = MatrixMultiplyPipe__to_reset;}
  { T10.values[0] = TERNARY(MatrixMultiplyPipe_matrix_column_addr__reset.values[0], 0x0L, T9);}
  val_t T11;
  { T11 = TERNARY(MatrixMultiplyPipe_matrix_column_addr__io_reset.values[0], 0x0L, MatrixMultiplyPipe_matrix_column_addr__k_reg.values[0]);}
  { MatrixMultiplyPipe_matrix_column_addr__io_k.values[0] = MatrixMultiplyPipe_counterchain_matrix__io_counters_cout_1.values[0];}
  val_t T12;
  { T12 = TERNARY_1(T8, MatrixMultiplyPipe_matrix_column_addr__io_k.values[0], T11);}
  { T13.values[0] = TERNARY(MatrixMultiplyPipe_matrix_column_addr__reset.values[0], 0x0L, T12);}
  { MatrixMultiplyPipe_matrix_row_addr__io_reset.values[0] = MatrixMultiplyPipe__to_reset;}
  val_t T14;
  { T14 = TERNARY(MatrixMultiplyPipe_matrix_row_addr__io_reset.values[0], 0x0L, MatrixMultiplyPipe_matrix_row_addr__mult_reg.values[0]);}
  { MatrixMultiplyPipe_matrix_row_addr__io_in.values[0] = MatrixMultiplyPipe_counterchain_matrix__io_counters_cout_2.values[0];}
  { MatrixMultiplyPipe_matrix_row_addr__io_const_dim.values[0] = 0x2L;}
  val_t MatrixMultiplyPipe_matrix_row_addr__mult_block;
  MatrixMultiplyPipe_matrix_row_addr__mult_block = MatrixMultiplyPipe_matrix_row_addr__io_const_dim.values[0] * MatrixMultiplyPipe_matrix_row_addr__io_in.values[0];
  val_t T15;
  { T15 = MatrixMultiplyPipe_matrix_row_addr__io_reset.values[0] ^ 0x1L;}
  val_t T16;
  { T16 = TERNARY_1(T15, MatrixMultiplyPipe_matrix_row_addr__mult_block, T14);}
  { MatrixMultiplyPipe_matrix_row_addr__reset.values[0] = reset.values[0];}
  { T17.values[0] = TERNARY(MatrixMultiplyPipe_matrix_row_addr__reset.values[0], 0x0L, T16);}
  val_t T18;
  { T18 = TERNARY(MatrixMultiplyPipe_matrix_row_addr__io_reset.values[0], 0x0L, MatrixMultiplyPipe_matrix_row_addr__k_reg.values[0]);}
  { MatrixMultiplyPipe_matrix_row_addr__io_k.values[0] = MatrixMultiplyPipe_counterchain_matrix__io_counters_cout_0.values[0];}
  val_t T19;
  { T19 = TERNARY_1(T15, MatrixMultiplyPipe_matrix_row_addr__io_k.values[0], T18);}
  { T20.values[0] = TERNARY(MatrixMultiplyPipe_matrix_row_addr__reset.values[0], 0x0L, T19);}
  { MatrixMultiplyPipe_dp_arith_block__io_en.values[0] = MatrixMultiplyPipe__reg_en_delay_2.values[0];}
  val_t T21;
  { T21 = MatrixMultiplyPipe_dp_arith_block__io_en.values[0] ^ 0x1L;}
  { MatrixMultiplyPipe_dp_arith_block__io_reset.values[0] = MatrixMultiplyPipe__reg_reset_delay_3.values[0];}
  val_t T22;
  { T22 = MatrixMultiplyPipe_dp_arith_block__io_reset.values[0] & T21;}
  val_t T23[4];
  { T23[0] = TERNARY(T22, T24[0], MatrixMultiplyPipe_dp_arith_block__productReg.values[0]); T23[1] = TERNARY(T22, T24[1], MatrixMultiplyPipe_dp_arith_block__productReg.values[1]); T23[2] = TERNARY(T22, T24[2], MatrixMultiplyPipe_dp_arith_block__productReg.values[2]); T23[3] = TERNARY(T22, T24[3], MatrixMultiplyPipe_dp_arith_block__productReg.values[3]);}
  val_t T25;
  { T25 = MatrixMultiplyPipe_matrix_ram2__reg_raddr.values[0];}
  T25 = T25 & 0x7L;
  val_t T26;
  { T26 = MatrixMultiplyPipe_matrix_ram2__bRam_rw.get(T25, 0);}
  { MatrixMultiplyPipe_matrix_ram2__io_read_out.values[0] = T26;}
  { MatrixMultiplyPipe_dp_arith_block__io_v2.values[0] = MatrixMultiplyPipe_matrix_ram2__io_read_out.values[0];}
  val_t T27;
  { T27 = MatrixMultiplyPipe_matrix_ram1__reg_raddr.values[0];}
  T27 = T27 & 0x7L;
  val_t T28;
  { T28 = MatrixMultiplyPipe_matrix_ram1__bRam_rw.get(T27, 0);}
  { MatrixMultiplyPipe_matrix_ram1__io_read_out.values[0] = T28;}
  { MatrixMultiplyPipe_dp_arith_block__io_v1.values[0] = MatrixMultiplyPipe_matrix_ram1__io_read_out.values[0];}
  val_t MatrixMultiplyPipe_dp_arith_block__productV;
  MatrixMultiplyPipe_dp_arith_block__productV = MatrixMultiplyPipe_dp_arith_block__io_v1.values[0] * MatrixMultiplyPipe_dp_arith_block__io_v2.values[0];
  val_t T29[4];
  { T29[0] = MatrixMultiplyPipe_dp_arith_block__productV | T30[0] << 32; T29[1] = T30[0] >> 32 | T30[1] << 32; T29[2] = T30[1] >> 32 | T30[2] << 32; T29[3] = T30[2] >> 32 | T30[3] << 32;}
  val_t T31;
  { T31 = T22 ^ 0x1L;}
  val_t T32[4];
  { T32[0] = TERNARY_1(T31, T29[0], T23[0]); T32[1] = TERNARY_1(T31, T29[1], T23[1]); T32[2] = TERNARY_1(T31, T29[2], T23[2]); T32[3] = TERNARY_1(T31, T29[3], T23[3]);}
  { MatrixMultiplyPipe_dp_arith_block__reset.values[0] = reset.values[0];}
  { T33.values[0] = TERNARY(MatrixMultiplyPipe_dp_arith_block__reset.values[0], T24[0], T32[0]); T33.values[1] = TERNARY(MatrixMultiplyPipe_dp_arith_block__reset.values[0], T24[1], T32[1]); T33.values[2] = TERNARY(MatrixMultiplyPipe_dp_arith_block__reset.values[0], T24[2], T32[2]); T33.values[3] = TERNARY(MatrixMultiplyPipe_dp_arith_block__reset.values[0], T24[3], T32[3]);}
  val_t T34[4];
  { T34[0] = TERNARY_1(MatrixMultiplyPipe_dp_arith_block__io_reset.values[0], MatrixMultiplyPipe_dp_arith_block__productReg.values[0], MatrixMultiplyPipe_dp_arith_block__acc.values[0]); T34[1] = TERNARY_1(MatrixMultiplyPipe_dp_arith_block__io_reset.values[0], MatrixMultiplyPipe_dp_arith_block__productReg.values[1], MatrixMultiplyPipe_dp_arith_block__acc.values[1]); T34[2] = TERNARY_1(MatrixMultiplyPipe_dp_arith_block__io_reset.values[0], MatrixMultiplyPipe_dp_arith_block__productReg.values[2], MatrixMultiplyPipe_dp_arith_block__acc.values[2]); T34[3] = TERNARY_1(MatrixMultiplyPipe_dp_arith_block__io_reset.values[0], MatrixMultiplyPipe_dp_arith_block__productReg.values[3], MatrixMultiplyPipe_dp_arith_block__acc.values[3]);}
  val_t T35[4];
  { T35[0] = MatrixMultiplyPipe_dp_arith_block__acc.values[0]+MatrixMultiplyPipe_dp_arith_block__productReg.values[0]; val_t __c = MatrixMultiplyPipe_dp_arith_block__acc.values[0]+MatrixMultiplyPipe_dp_arith_block__productReg.values[0] < MatrixMultiplyPipe_dp_arith_block__acc.values[0]; T35[1] = MatrixMultiplyPipe_dp_arith_block__acc.values[1]+MatrixMultiplyPipe_dp_arith_block__productReg.values[1]+__c; __c = MatrixMultiplyPipe_dp_arith_block__acc.values[1]+MatrixMultiplyPipe_dp_arith_block__productReg.values[1] < MatrixMultiplyPipe_dp_arith_block__acc.values[1] || T35[1] < __c; T35[2] = MatrixMultiplyPipe_dp_arith_block__acc.values[2]+MatrixMultiplyPipe_dp_arith_block__productReg.values[2]+__c; __c = MatrixMultiplyPipe_dp_arith_block__acc.values[2]+MatrixMultiplyPipe_dp_arith_block__productReg.values[2] < MatrixMultiplyPipe_dp_arith_block__acc.values[2] || T35[2] < __c; T35[3] = MatrixMultiplyPipe_dp_arith_block__acc.values[3]+MatrixMultiplyPipe_dp_arith_block__productReg.values[3]+__c;}
  val_t T36;
  { T36 = MatrixMultiplyPipe_dp_arith_block__io_reset.values[0] ^ 0x1L;}
  val_t T37;
  { T37 = T36 & MatrixMultiplyPipe_dp_arith_block__io_en.values[0];}
  val_t T38[4];
  { T38[0] = TERNARY_1(T37, T35[0], T34[0]); T38[1] = TERNARY_1(T37, T35[1], T34[1]); T38[2] = TERNARY_1(T37, T35[2], T34[2]); T38[3] = TERNARY_1(T37, T35[3], T34[3]);}
  { T39.values[0] = TERNARY(MatrixMultiplyPipe_dp_arith_block__reset.values[0], T24[0], T38[0]); T39.values[1] = TERNARY(MatrixMultiplyPipe_dp_arith_block__reset.values[0], T24[1], T38[1]); T39.values[2] = TERNARY(MatrixMultiplyPipe_dp_arith_block__reset.values[0], T24[2], T38[2]); T39.values[3] = TERNARY(MatrixMultiplyPipe_dp_arith_block__reset.values[0], T24[3], T38[3]);}
  val_t T40;
  { T40 = MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__currCount.values[0]+0x1L;}
  T40 = T40 & 0xffffL;
  { MatrixMultiplyPipe_counterchain_matrix__io_counters_max_2.values[0] = 0x3L;}
  { MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__io_max.values[0] = MatrixMultiplyPipe_counterchain_matrix__io_counters_max_2.values[0];}
  val_t MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__hitMax;
  MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__hitMax = MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__io_max.values[0]<=MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__currCount.values[0];
  val_t T41;
  { T41 = TERNARY(MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__hitMax, 0x0L, T40);}
  { MatrixMultiplyPipe_counterchain_matrix__io_counters_max_1.values[0] = 0x2L;}
  { MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__io_max.values[0] = MatrixMultiplyPipe_counterchain_matrix__io_counters_max_1.values[0];}
  val_t MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__hitMax;
  MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__hitMax = MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__io_max.values[0]<=MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__currCount.values[0];
  { MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__io_done.values[0] = MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__hitMax;}
  { MatrixMultiplyPipe_counterchain_matrix__io_counters_max_0.values[0] = 0x1L;}
  { MatrixMultiplyPipe_counterchain_matrix_ItrCounter__io_max.values[0] = MatrixMultiplyPipe_counterchain_matrix__io_counters_max_0.values[0];}
  val_t MatrixMultiplyPipe_counterchain_matrix_ItrCounter__hitMax;
  MatrixMultiplyPipe_counterchain_matrix_ItrCounter__hitMax = MatrixMultiplyPipe_counterchain_matrix_ItrCounter__io_max.values[0]<=MatrixMultiplyPipe_counterchain_matrix_ItrCounter__currCount.values[0];
  { MatrixMultiplyPipe_counterchain_matrix_ItrCounter__io_done.values[0] = MatrixMultiplyPipe_counterchain_matrix_ItrCounter__hitMax;}
  val_t T42;
  { T42 = MatrixMultiplyPipe_counterchain_matrix_ItrCounter__io_done.values[0] & MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__io_done.values[0];}
  { MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__io_en_count.values[0] = T42;}
  val_t T43;
  { T43 = TERNARY_1(MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__io_en_count.values[0], T41, MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__currCount.values[0]);}
  { MatrixMultiplyPipe_counterchain_matrix__io_reset.values[0] = MatrixMultiplyPipe__to_reset;}
  { MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__io_reset.values[0] = MatrixMultiplyPipe_counterchain_matrix__io_reset.values[0];}
  val_t T44;
  { T44 = MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__io_en_count.values[0] ^ 0x1L;}
  val_t T45;
  { T45 = T44 & MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__io_reset.values[0];}
  val_t T46;
  { T46 = TERNARY(T45, 0x0L, T43);}
  { MatrixMultiplyPipe_counterchain_matrix__reset.values[0] = reset.values[0];}
  { MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__reset.values[0] = MatrixMultiplyPipe_counterchain_matrix__reset.values[0];}
  { T47.values[0] = TERNARY(MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__reset.values[0], 0x0L, T46);}
  val_t T48;
  { T48 = MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__currCount.values[0]+0x1L;}
  T48 = T48 & 0xffffL;
  val_t T49;
  { T49 = TERNARY(MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__hitMax, 0x0L, T48);}
  { MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__io_en_count.values[0] = MatrixMultiplyPipe_counterchain_matrix_ItrCounter__io_done.values[0];}
  val_t T50;
  { T50 = TERNARY_1(MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__io_en_count.values[0], T49, MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__currCount.values[0]);}
  { MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__io_reset.values[0] = MatrixMultiplyPipe_counterchain_matrix__io_reset.values[0];}
  val_t T51;
  { T51 = MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__io_en_count.values[0] ^ 0x1L;}
  val_t T52;
  { T52 = T51 & MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__io_reset.values[0];}
  val_t T53;
  { T53 = TERNARY(T52, 0x0L, T50);}
  { MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__reset.values[0] = MatrixMultiplyPipe_counterchain_matrix__reset.values[0];}
  { T54.values[0] = TERNARY(MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__reset.values[0], 0x0L, T53);}
  val_t T55;
  { T55 = MatrixMultiplyPipe_counterchain_matrix_ItrCounter__currCount.values[0]+0x1L;}
  T55 = T55 & 0xffffL;
  val_t T56;
  { T56 = TERNARY(MatrixMultiplyPipe_counterchain_matrix_ItrCounter__hitMax, 0x0L, T55);}
  val_t MatrixMultiplyPipe__enabled;
  MatrixMultiplyPipe__enabled = MatrixMultiplyPipe__state.values[0] == 0x1L;
  { MatrixMultiplyPipe_counterchain_matrix__io_en.values[0] = MatrixMultiplyPipe__enabled;}
  { MatrixMultiplyPipe_counterchain_matrix_ItrCounter__io_en_count.values[0] = MatrixMultiplyPipe_counterchain_matrix__io_en.values[0];}
  val_t T57;
  { T57 = TERNARY_1(MatrixMultiplyPipe_counterchain_matrix_ItrCounter__io_en_count.values[0], T56, MatrixMultiplyPipe_counterchain_matrix_ItrCounter__currCount.values[0]);}
  { MatrixMultiplyPipe_counterchain_matrix_ItrCounter__io_reset.values[0] = MatrixMultiplyPipe_counterchain_matrix__io_reset.values[0];}
  val_t T58;
  { T58 = MatrixMultiplyPipe_counterchain_matrix_ItrCounter__io_en_count.values[0] ^ 0x1L;}
  val_t T59;
  { T59 = T58 & MatrixMultiplyPipe_counterchain_matrix_ItrCounter__io_reset.values[0];}
  val_t T60;
  { T60 = TERNARY(T59, 0x0L, T57);}
  { MatrixMultiplyPipe_counterchain_matrix_ItrCounter__reset.values[0] = MatrixMultiplyPipe_counterchain_matrix__reset.values[0];}
  { T61.values[0] = TERNARY(MatrixMultiplyPipe_counterchain_matrix_ItrCounter__reset.values[0], 0x0L, T60);}
  { MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__io_done.values[0] = MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__hitMax;}
  { MatrixMultiplyPipe_counterchain_matrix__io_counters_done_2.values[0] = MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__io_done.values[0];}
  { MatrixMultiplyPipe_counterchain_matrix__io_counters_done_1.values[0] = MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__io_done.values[0];}
  { MatrixMultiplyPipe_matrix_output__io_read_addr.values[0] = MatrixMultiplyPipe__io_data_in.values[0];}
  { MatrixMultiplyPipe_dp_arith_block__io_dotproduct.values[0] = MatrixMultiplyPipe_dp_arith_block__acc.values[0]; MatrixMultiplyPipe_dp_arith_block__io_dotproduct.values[1] = MatrixMultiplyPipe_dp_arith_block__acc.values[1]; MatrixMultiplyPipe_dp_arith_block__io_dotproduct.values[2] = MatrixMultiplyPipe_dp_arith_block__acc.values[2]; MatrixMultiplyPipe_dp_arith_block__io_dotproduct.values[3] = MatrixMultiplyPipe_dp_arith_block__acc.values[3];}
  val_t T62;
  { T62 = MatrixMultiplyPipe_dp_arith_block__io_dotproduct.values[0];}
  T62 = T62 & 0xffffL;
  { MatrixMultiplyPipe_matrix_output__io_write_data.values[0] = T62;}
  { MatrixMultiplyPipe_matrix_output__io_write_addr.values[0] = MatrixMultiplyPipe__reg_addr_delay_2.values[0];}
  val_t T63;
  { T63 = MatrixMultiplyPipe_matrix_output__io_write_addr.values[0];}
  T63 = T63 & 0xfL;
  val_t T64;
  T64 = T63<0xcL;
  { MatrixMultiplyPipe_matrix_output__io_write_en.values[0] = MatrixMultiplyPipe__reg_en_delay_3.values[0];}
  { T65.values[0] = MatrixMultiplyPipe_matrix_output__io_write_en.values[0] & T64;}
  { T66.values[0] = MatrixMultiplyPipe_matrix_output__io_write_addr.values[0];}
  T66.values[0] = T66.values[0] & 0xfL;
  val_t T67;
  { T67 = MatrixMultiplyPipe_matrix_column_addr__k_reg.values[0] | 0x0L << 16;}
  val_t T68;
  { T68 = MatrixMultiplyPipe_matrix_column_addr__mult_reg.values[0]+T67;}
  T68 = T68 & 0xffffffffL;
  { MatrixMultiplyPipe_matrix_column_addr__io_out.values[0] = T68;}
  val_t T69;
  { T69 = MatrixMultiplyPipe_matrix_column_addr__io_out.values[0];}
  T69 = T69 & 0x3fL;
  { MatrixMultiplyPipe_matrix_ram2__io_read_addr.values[0] = T69;}
  val_t T70;
  { T70 = MatrixMultiplyPipe__io_input_addr2.values[0]+0x2L;}
  T70 = T70 & 0xffffL;
  { MatrixMultiplyPipe_matrix_ram2__io_write_data.values[0] = T70;}
  val_t T71;
  { T71 = MatrixMultiplyPipe__io_input_addr2.values[0];}
  T71 = T71 & 0x3fL;
  { MatrixMultiplyPipe_matrix_ram2__io_write_addr.values[0] = T71;}
  val_t T72;
  { T72 = MatrixMultiplyPipe_matrix_ram2__io_write_addr.values[0];}
  T72 = T72 & 0x7L;
  val_t T73;
  T73 = T72<0x6L;
  val_t T74;
  T74 = MatrixMultiplyPipe__state.values[0] == 0x0L;
  { MatrixMultiplyPipe_matrix_ram2__io_write_en.values[0] = T74;}
  { T75.values[0] = MatrixMultiplyPipe_matrix_ram2__io_write_en.values[0] & T73;}
  { T76.values[0] = MatrixMultiplyPipe_matrix_ram2__io_write_addr.values[0];}
  T76.values[0] = T76.values[0] & 0x7L;
  val_t T77;
  { T77 = MatrixMultiplyPipe_matrix_row_addr__k_reg.values[0] | 0x0L << 16;}
  val_t T78;
  { T78 = MatrixMultiplyPipe_matrix_row_addr__mult_reg.values[0]+T77;}
  T78 = T78 & 0xffffffffL;
  { MatrixMultiplyPipe_matrix_row_addr__io_out.values[0] = T78;}
  val_t T79;
  { T79 = MatrixMultiplyPipe_matrix_row_addr__io_out.values[0];}
  T79 = T79 & 0xffL;
  { MatrixMultiplyPipe_matrix_ram1__io_read_addr.values[0] = T79;}
  val_t T80;
  { T80 = MatrixMultiplyPipe__io_input_addr.values[0]+0x1L;}
  T80 = T80 & 0xffffL;
  { MatrixMultiplyPipe_matrix_ram1__io_write_data.values[0] = T80;}
  val_t T81;
  T81 = MatrixMultiplyPipe__state.values[0] == 0x0L;
  { MatrixMultiplyPipe_matrix_ram1__io_write_en.values[0] = T81;}
  val_t T82;
  { T82 = MatrixMultiplyPipe__io_input_addr.values[0];}
  T82 = T82 & 0xffL;
  { MatrixMultiplyPipe_matrix_ram1__io_write_addr.values[0] = T82;}
  { T83.values[0] = MatrixMultiplyPipe_matrix_ram1__io_write_addr.values[0];}
  T83.values[0] = T83.values[0] & 0x7L;
  val_t T84;
  T84 = MatrixMultiplyPipe__state.values[0] == 0x3L;
  { MatrixMultiplyPipe__io_done.values[0] = T84;}
  val_t T85;
  { T85 = MatrixMultiplyPipe_matrix_output__reg_raddr.values[0];}
  T85 = T85 & 0xfL;
  val_t T86;
  { T86 = MatrixMultiplyPipe_matrix_output__bRam_rw.get(T85, 0);}
  { MatrixMultiplyPipe_matrix_output__io_read_out.values[0] = T86;}
  { MatrixMultiplyPipe__io_data_out.values[0] = MatrixMultiplyPipe_matrix_output__io_read_out.values[0];}
  val_t T87;
  { T87 = MatrixMultiplyPipe_dp_arith_block__io_dotproduct.values[0];}
  T87 = T87 & 0xffffL;
  { MatrixMultiplyPipe__io_check_data.values[0] = T87;}
  val_t T88;
  { T88 = MatrixMultiplyPipe_matrix_output_addr__k_reg.values[0] | 0x0L << 16;}
  val_t T89;
  { T89 = MatrixMultiplyPipe_matrix_output_addr__mult_reg.values[0]+T88;}
  T89 = T89 & 0xffffffffL;
  { MatrixMultiplyPipe_matrix_output_addr__io_out.values[0] = T89;}
  val_t T90;
  { T90 = TERNARY(reset.values[0], 0x0L, MatrixMultiplyPipe_matrix_output_addr__io_out.values[0]);}
  { T91.values[0] = T90;}
  T91.values[0] = T91.values[0] & 0xfffL;
  { T92.values[0] = TERNARY(reset.values[0], 0x0L, MatrixMultiplyPipe__reg_addr_delay_0.values[0]);}
  { T93.values[0] = TERNARY(reset.values[0], 0x0L, MatrixMultiplyPipe__reg_addr_delay_1.values[0]);}
  { T94.values[0] = TERNARY(reset.values[0], 0x0L, MatrixMultiplyPipe__reg_en_delay_2.values[0]);}
  { MatrixMultiplyPipe_counterchain_matrix__io_counters_done_0.values[0] = MatrixMultiplyPipe_counterchain_matrix_ItrCounter__io_done.values[0];}
  { T95.values[0] = TERNARY(reset.values[0], 0x0L, MatrixMultiplyPipe_counterchain_matrix__io_counters_done_0.values[0]);}
  { T96.values[0] = TERNARY(reset.values[0], 0x0L, MatrixMultiplyPipe__reg_reset_delay_0.values[0]);}
  { T97.values[0] = TERNARY(reset.values[0], 0x0L, MatrixMultiplyPipe__reg_reset_delay_1.values[0]);}
  { T98.values[0] = TERNARY(reset.values[0], 0x0L, MatrixMultiplyPipe__reg_reset_delay_2.values[0]);}
  { T99.values[0] = TERNARY(reset.values[0], 0x0L, MatrixMultiplyPipe__enabled);}
  { T100.values[0] = TERNARY(reset.values[0], 0x0L, MatrixMultiplyPipe__reg_en_delay_0.values[0]);}
  { T101.values[0] = TERNARY(reset.values[0], 0x0L, MatrixMultiplyPipe__reg_en_delay_1.values[0]);}
  val_t T102;
  T102 = 0x0L == MatrixMultiplyPipe__state.values[0];
  val_t T103;
  { T103 = T102 & MatrixMultiplyPipe__io_en.values[0];}
  val_t T104;
  { T104 = TERNARY(T103, 0x1L, MatrixMultiplyPipe__state.values[0]);}
  val_t T105;
  { T105 = MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__io_en_count.values[0] & MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__io_done.values[0];}
  { MatrixMultiplyPipe_counterchain_matrix__io_done_complete.values[0] = T105;}
  val_t T106;
  T106 = 0x1L == MatrixMultiplyPipe__state.values[0];
  val_t T107;
  { T107 = T106 & MatrixMultiplyPipe_counterchain_matrix__io_done_complete.values[0];}
  val_t T108;
  { T108 = TERNARY(T107, 0x2L, T104);}
  val_t T109;
  T109 = 0x2L == MatrixMultiplyPipe__state.values[0];
  val_t T110;
  { T110 = TERNARY(T109, 0x3L, T108);}
  val_t T111;
  T111 = 0x3L == MatrixMultiplyPipe__state.values[0];
  val_t T112;
  { T112 = TERNARY(T111, 0x0L, T110);}
  { T113.values[0] = TERNARY(reset.values[0], 0x0L, T112);}
}


void MatrixMultiplyPipe_t::clock_hi ( dat_t<1> reset ) {
  dat_t<32> MatrixMultiplyPipe_matrix_output_addr__mult_reg__shadow = T3;
  dat_t<16> MatrixMultiplyPipe_matrix_output_addr__k_reg__shadow = T6;
  dat_t<32> MatrixMultiplyPipe_matrix_column_addr__mult_reg__shadow = T10;
  dat_t<16> MatrixMultiplyPipe_matrix_column_addr__k_reg__shadow = T13;
  dat_t<32> MatrixMultiplyPipe_matrix_row_addr__mult_reg__shadow = T17;
  dat_t<16> MatrixMultiplyPipe_matrix_row_addr__k_reg__shadow = T20;
  dat_t<256> MatrixMultiplyPipe_dp_arith_block__productReg__shadow = T33;
  dat_t<256> MatrixMultiplyPipe_dp_arith_block__acc__shadow = T39;
  dat_t<16> MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__currCount__shadow = T47;
  dat_t<16> MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__currCount__shadow = T54;
  dat_t<16> MatrixMultiplyPipe_counterchain_matrix_ItrCounter__currCount__shadow = T61;
  dat_t<12> MatrixMultiplyPipe_matrix_output__reg_raddr__shadow = MatrixMultiplyPipe_matrix_output__io_read_addr;
  { if (T65.values[0]) MatrixMultiplyPipe_matrix_output__bRam_rw.put(T66.values[0], 0, MatrixMultiplyPipe_matrix_output__io_write_data.values[0]);}
  dat_t<6> MatrixMultiplyPipe_matrix_ram2__reg_raddr__shadow = MatrixMultiplyPipe_matrix_ram2__io_read_addr;
  { if (T75.values[0]) MatrixMultiplyPipe_matrix_ram2__bRam_rw.put(T76.values[0], 0, MatrixMultiplyPipe_matrix_ram2__io_write_data.values[0]);}
  dat_t<8> MatrixMultiplyPipe_matrix_ram1__reg_raddr__shadow = MatrixMultiplyPipe_matrix_ram1__io_read_addr;
  { if (MatrixMultiplyPipe_matrix_ram1__io_write_en.values[0]) MatrixMultiplyPipe_matrix_ram1__bRam_rw.put(T83.values[0], 0, MatrixMultiplyPipe_matrix_ram1__io_write_data.values[0]);}
  dat_t<12> MatrixMultiplyPipe__reg_addr_delay_0__shadow = T91;
  dat_t<12> MatrixMultiplyPipe__reg_addr_delay_1__shadow = T92;
  dat_t<12> MatrixMultiplyPipe__reg_addr_delay_2__shadow = T93;
  dat_t<1> MatrixMultiplyPipe__reg_en_delay_3__shadow = T94;
  dat_t<1> MatrixMultiplyPipe__reg_reset_delay_0__shadow = T95;
  dat_t<1> MatrixMultiplyPipe__reg_reset_delay_1__shadow = T96;
  dat_t<1> MatrixMultiplyPipe__reg_reset_delay_2__shadow = T97;
  dat_t<1> MatrixMultiplyPipe__reg_reset_delay_3__shadow = T98;
  dat_t<1> MatrixMultiplyPipe__reg_en_delay_0__shadow = T99;
  dat_t<1> MatrixMultiplyPipe__reg_en_delay_1__shadow = T100;
  dat_t<1> MatrixMultiplyPipe__reg_en_delay_2__shadow = T101;
  dat_t<2> MatrixMultiplyPipe__state__shadow = T113;
  MatrixMultiplyPipe_matrix_output_addr__mult_reg = T3;
  MatrixMultiplyPipe_matrix_output_addr__k_reg = T6;
  MatrixMultiplyPipe_matrix_column_addr__mult_reg = T10;
  MatrixMultiplyPipe_matrix_column_addr__k_reg = T13;
  MatrixMultiplyPipe_matrix_row_addr__mult_reg = T17;
  MatrixMultiplyPipe_matrix_row_addr__k_reg = T20;
  MatrixMultiplyPipe_dp_arith_block__productReg = T33;
  MatrixMultiplyPipe_dp_arith_block__acc = T39;
  MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__currCount = T47;
  MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__currCount = T54;
  MatrixMultiplyPipe_counterchain_matrix_ItrCounter__currCount = T61;
  MatrixMultiplyPipe_matrix_output__reg_raddr = MatrixMultiplyPipe_matrix_output__io_read_addr;
  MatrixMultiplyPipe_matrix_ram2__reg_raddr = MatrixMultiplyPipe_matrix_ram2__io_read_addr;
  MatrixMultiplyPipe_matrix_ram1__reg_raddr = MatrixMultiplyPipe_matrix_ram1__io_read_addr;
  MatrixMultiplyPipe__reg_addr_delay_0 = T91;
  MatrixMultiplyPipe__reg_addr_delay_1 = T92;
  MatrixMultiplyPipe__reg_addr_delay_2 = T93;
  MatrixMultiplyPipe__reg_en_delay_3 = T94;
  MatrixMultiplyPipe__reg_reset_delay_0 = T95;
  MatrixMultiplyPipe__reg_reset_delay_1 = T96;
  MatrixMultiplyPipe__reg_reset_delay_2 = T97;
  MatrixMultiplyPipe__reg_reset_delay_3 = T98;
  MatrixMultiplyPipe__reg_en_delay_0 = T99;
  MatrixMultiplyPipe__reg_en_delay_1 = T100;
  MatrixMultiplyPipe__reg_en_delay_2 = T101;
  MatrixMultiplyPipe__state = T113;
}


void MatrixMultiplyPipe_api_t::init_sim_data (  ) {
  sim_data.inputs.clear();
  sim_data.outputs.clear();
  sim_data.signals.clear();
  MatrixMultiplyPipe_t* mod = dynamic_cast<MatrixMultiplyPipe_t*>(module);
  assert(mod);
  sim_data.inputs.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe__io_input_addr));
  sim_data.inputs.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe__io_input_addr2));
  sim_data.inputs.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe__io_en));
  sim_data.inputs.push_back(new dat_api<12>(&mod->MatrixMultiplyPipe__io_data_in));
  sim_data.outputs.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe__io_done));
  sim_data.outputs.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe__io_data_out));
  sim_data.outputs.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe__io_check_data));
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__io_cout));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.ItrCounter_2.io_cout"] = 0;
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_counterchain_matrix__io_counters_cout_2));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.io_counters_cout_2"] = 1;
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_matrix_output_addr__io_in));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_output_addr.io_in"] = 2;
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_matrix_output_addr__io_const_dim));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_output_addr.io_const_dim"] = 3;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe_matrix_output_addr__reset));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_output_addr.reset"] = 4;
  sim_data.signals.push_back(new dat_api<32>(&mod->MatrixMultiplyPipe_matrix_output_addr__mult_reg));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_output_addr.mult_reg"] = 5;
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__io_cout));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.ItrCounter_1.io_cout"] = 6;
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_counterchain_matrix__io_counters_cout_1));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.io_counters_cout_1"] = 7;
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_matrix_output_addr__io_k));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_output_addr.io_k"] = 8;
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_matrix_output_addr__k_reg));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_output_addr.k_reg"] = 9;
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_counterchain_matrix_ItrCounter__io_cout));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.ItrCounter.io_cout"] = 10;
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_counterchain_matrix__io_counters_cout_0));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.io_counters_cout_0"] = 11;
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_matrix_column_addr__io_in));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_column_addr.io_in"] = 12;
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_matrix_column_addr__io_const_dim));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_column_addr.io_const_dim"] = 13;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe_matrix_column_addr__reset));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_column_addr.reset"] = 14;
  sim_data.signals.push_back(new dat_api<32>(&mod->MatrixMultiplyPipe_matrix_column_addr__mult_reg));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_column_addr.mult_reg"] = 15;
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_matrix_column_addr__io_k));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_column_addr.io_k"] = 16;
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_matrix_column_addr__k_reg));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_column_addr.k_reg"] = 17;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe_matrix_row_addr__io_reset));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_row_addr.io_reset"] = 18;
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_matrix_row_addr__io_in));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_row_addr.io_in"] = 19;
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_matrix_row_addr__io_const_dim));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_row_addr.io_const_dim"] = 20;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe_matrix_row_addr__reset));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_row_addr.reset"] = 21;
  sim_data.signals.push_back(new dat_api<32>(&mod->MatrixMultiplyPipe_matrix_row_addr__mult_reg));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_row_addr.mult_reg"] = 22;
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_matrix_row_addr__io_k));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_row_addr.io_k"] = 23;
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_matrix_row_addr__k_reg));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_row_addr.k_reg"] = 24;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe_dp_arith_block__io_en));
  sim_data.signal_map["MatrixMultiplyPipe.dp_arith_block.io_en"] = 25;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe_dp_arith_block__io_reset));
  sim_data.signal_map["MatrixMultiplyPipe.dp_arith_block.io_reset"] = 26;
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_matrix_ram2__io_read_out));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_ram2.io_read_out"] = 27;
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_dp_arith_block__io_v2));
  sim_data.signal_map["MatrixMultiplyPipe.dp_arith_block.io_v2"] = 28;
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_matrix_ram1__io_read_out));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_ram1.io_read_out"] = 29;
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_dp_arith_block__io_v1));
  sim_data.signal_map["MatrixMultiplyPipe.dp_arith_block.io_v1"] = 30;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe_dp_arith_block__reset));
  sim_data.signal_map["MatrixMultiplyPipe.dp_arith_block.reset"] = 31;
  sim_data.signals.push_back(new dat_api<256>(&mod->MatrixMultiplyPipe_dp_arith_block__productReg));
  sim_data.signal_map["MatrixMultiplyPipe.dp_arith_block.productReg"] = 32;
  sim_data.signals.push_back(new dat_api<256>(&mod->MatrixMultiplyPipe_dp_arith_block__acc));
  sim_data.signal_map["MatrixMultiplyPipe.dp_arith_block.acc"] = 33;
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_counterchain_matrix__io_counters_max_2));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.io_counters_max_2"] = 34;
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__io_max));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.ItrCounter_2.io_max"] = 35;
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_counterchain_matrix__io_counters_max_1));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.io_counters_max_1"] = 36;
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__io_max));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.ItrCounter_1.io_max"] = 37;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__io_done));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.ItrCounter_1.io_done"] = 38;
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_counterchain_matrix__io_counters_max_0));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.io_counters_max_0"] = 39;
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_counterchain_matrix_ItrCounter__io_max));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.ItrCounter.io_max"] = 40;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe_counterchain_matrix_ItrCounter__io_done));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.ItrCounter.io_done"] = 41;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__io_en_count));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.ItrCounter_2.io_en_count"] = 42;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe_counterchain_matrix__io_reset));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.io_reset"] = 43;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__io_reset));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.ItrCounter_2.io_reset"] = 44;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe_counterchain_matrix__reset));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.reset"] = 45;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__reset));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.ItrCounter_2.reset"] = 46;
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__currCount));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.ItrCounter_2.currCount"] = 47;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__io_en_count));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.ItrCounter_1.io_en_count"] = 48;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__io_reset));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.ItrCounter_1.io_reset"] = 49;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__reset));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.ItrCounter_1.reset"] = 50;
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__currCount));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.ItrCounter_1.currCount"] = 51;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe_counterchain_matrix__io_en));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.io_en"] = 52;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe_counterchain_matrix_ItrCounter__io_en_count));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.ItrCounter.io_en_count"] = 53;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe_counterchain_matrix_ItrCounter__io_reset));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.ItrCounter.io_reset"] = 54;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe_counterchain_matrix_ItrCounter__reset));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.ItrCounter.reset"] = 55;
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_counterchain_matrix_ItrCounter__currCount));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.ItrCounter.currCount"] = 56;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__io_done));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.ItrCounter_2.io_done"] = 57;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe_counterchain_matrix__io_counters_done_2));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.io_counters_done_2"] = 58;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe_counterchain_matrix__io_counters_done_1));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.io_counters_done_1"] = 59;
  sim_data.signals.push_back(new dat_api<12>(&mod->MatrixMultiplyPipe_matrix_output__io_read_addr));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_output.io_read_addr"] = 60;
  sim_data.signals.push_back(new dat_api<12>(&mod->MatrixMultiplyPipe_matrix_output__reg_raddr));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_output.reg_raddr"] = 61;
  sim_data.signals.push_back(new dat_api<256>(&mod->MatrixMultiplyPipe_dp_arith_block__io_dotproduct));
  sim_data.signal_map["MatrixMultiplyPipe.dp_arith_block.io_dotproduct"] = 62;
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_matrix_output__io_write_data));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_output.io_write_data"] = 63;
  sim_data.signals.push_back(new dat_api<12>(&mod->MatrixMultiplyPipe_matrix_output__io_write_addr));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_output.io_write_addr"] = 64;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe_matrix_output__io_write_en));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_output.io_write_en"] = 65;
  std::string MatrixMultiplyPipe_matrix_output__bRam_rw_path = "MatrixMultiplyPipe.matrix_output.bRam_rw";
  for (size_t i = 0 ; i < 12 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_matrix_output__bRam_rw.contents[i]));
    sim_data.signal_map[MatrixMultiplyPipe_matrix_output__bRam_rw_path+"["+itos(i,false)+"]"] = 66+i;
  }
  sim_data.signals.push_back(new dat_api<32>(&mod->MatrixMultiplyPipe_matrix_column_addr__io_out));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_column_addr.io_out"] = 78;
  sim_data.signals.push_back(new dat_api<6>(&mod->MatrixMultiplyPipe_matrix_ram2__io_read_addr));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_ram2.io_read_addr"] = 79;
  sim_data.signals.push_back(new dat_api<6>(&mod->MatrixMultiplyPipe_matrix_ram2__reg_raddr));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_ram2.reg_raddr"] = 80;
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_matrix_ram2__io_write_data));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_ram2.io_write_data"] = 81;
  sim_data.signals.push_back(new dat_api<6>(&mod->MatrixMultiplyPipe_matrix_ram2__io_write_addr));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_ram2.io_write_addr"] = 82;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe_matrix_ram2__io_write_en));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_ram2.io_write_en"] = 83;
  std::string MatrixMultiplyPipe_matrix_ram2__bRam_rw_path = "MatrixMultiplyPipe.matrix_ram2.bRam_rw";
  for (size_t i = 0 ; i < 6 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_matrix_ram2__bRam_rw.contents[i]));
    sim_data.signal_map[MatrixMultiplyPipe_matrix_ram2__bRam_rw_path+"["+itos(i,false)+"]"] = 84+i;
  }
  sim_data.signals.push_back(new dat_api<32>(&mod->MatrixMultiplyPipe_matrix_row_addr__io_out));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_row_addr.io_out"] = 90;
  sim_data.signals.push_back(new dat_api<8>(&mod->MatrixMultiplyPipe_matrix_ram1__io_read_addr));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_ram1.io_read_addr"] = 91;
  sim_data.signals.push_back(new dat_api<8>(&mod->MatrixMultiplyPipe_matrix_ram1__reg_raddr));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_ram1.reg_raddr"] = 92;
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_matrix_ram1__io_write_data));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_ram1.io_write_data"] = 93;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe_matrix_ram1__io_write_en));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_ram1.io_write_en"] = 94;
  sim_data.signals.push_back(new dat_api<8>(&mod->MatrixMultiplyPipe_matrix_ram1__io_write_addr));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_ram1.io_write_addr"] = 95;
  std::string MatrixMultiplyPipe_matrix_ram1__bRam_rw_path = "MatrixMultiplyPipe.matrix_ram1.bRam_rw";
  for (size_t i = 0 ; i < 8 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_matrix_ram1__bRam_rw.contents[i]));
    sim_data.signal_map[MatrixMultiplyPipe_matrix_ram1__bRam_rw_path+"["+itos(i,false)+"]"] = 96+i;
  }
  sim_data.signals.push_back(new dat_api<16>(&mod->MatrixMultiplyPipe_matrix_output__io_read_out));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_output.io_read_out"] = 104;
  sim_data.signals.push_back(new dat_api<32>(&mod->MatrixMultiplyPipe_matrix_output_addr__io_out));
  sim_data.signal_map["MatrixMultiplyPipe.matrix_output_addr.io_out"] = 105;
  sim_data.signals.push_back(new dat_api<12>(&mod->MatrixMultiplyPipe__reg_addr_delay_0));
  sim_data.signal_map["MatrixMultiplyPipe.reg_addr_delay_0"] = 106;
  sim_data.signals.push_back(new dat_api<12>(&mod->MatrixMultiplyPipe__reg_addr_delay_1));
  sim_data.signal_map["MatrixMultiplyPipe.reg_addr_delay_1"] = 107;
  sim_data.signals.push_back(new dat_api<12>(&mod->MatrixMultiplyPipe__reg_addr_delay_2));
  sim_data.signal_map["MatrixMultiplyPipe.reg_addr_delay_2"] = 108;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe__reg_en_delay_3));
  sim_data.signal_map["MatrixMultiplyPipe.reg_en_delay_3"] = 109;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe_counterchain_matrix__io_counters_done_0));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.io_counters_done_0"] = 110;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe__reg_reset_delay_0));
  sim_data.signal_map["MatrixMultiplyPipe.reg_reset_delay_0"] = 111;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe__reg_reset_delay_1));
  sim_data.signal_map["MatrixMultiplyPipe.reg_reset_delay_1"] = 112;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe__reg_reset_delay_2));
  sim_data.signal_map["MatrixMultiplyPipe.reg_reset_delay_2"] = 113;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe__reg_reset_delay_3));
  sim_data.signal_map["MatrixMultiplyPipe.reg_reset_delay_3"] = 114;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe__reg_en_delay_0));
  sim_data.signal_map["MatrixMultiplyPipe.reg_en_delay_0"] = 115;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe__reg_en_delay_1));
  sim_data.signal_map["MatrixMultiplyPipe.reg_en_delay_1"] = 116;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe__reg_en_delay_2));
  sim_data.signal_map["MatrixMultiplyPipe.reg_en_delay_2"] = 117;
  sim_data.signals.push_back(new dat_api<1>(&mod->MatrixMultiplyPipe_counterchain_matrix__io_done_complete));
  sim_data.signal_map["MatrixMultiplyPipe.counterchain_matrix.io_done_complete"] = 118;
  sim_data.signals.push_back(new dat_api<2>(&mod->MatrixMultiplyPipe__state));
  sim_data.signal_map["MatrixMultiplyPipe.state"] = 119;
  sim_data.clk_map["clk"] = new clk_api(&mod->clk);
}
