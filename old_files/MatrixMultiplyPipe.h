#ifndef __MatrixMultiplyPipe__
#define __MatrixMultiplyPipe__

#include "emulator.h"

class MatrixMultiplyPipe_t : public mod_t {
 private:
  val_t __rand_seed;
  void __srand(val_t seed) { __rand_seed = seed; }
  val_t __rand_val() { return ::__rand_val(&__rand_seed); }
 public:
  dat_t<1> MatrixMultiplyPipe_matrix_output_addr__io_reset;
  dat_t<1> MatrixMultiplyPipe_matrix_output_addr__reset;
  dat_t<1> MatrixMultiplyPipe_matrix_column_addr__io_reset;
  dat_t<1> MatrixMultiplyPipe_matrix_column_addr__reset;
  dat_t<1> MatrixMultiplyPipe_matrix_row_addr__io_reset;
  dat_t<1> reset;
  dat_t<1> MatrixMultiplyPipe_matrix_row_addr__reset;
  dat_t<1> MatrixMultiplyPipe_dp_arith_block__io_en;
  dat_t<1> MatrixMultiplyPipe_dp_arith_block__io_reset;
  dat_t<1> MatrixMultiplyPipe_dp_arith_block__reset;
  dat_t<1> MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__io_done;
  dat_t<1> MatrixMultiplyPipe_counterchain_matrix_ItrCounter__io_done;
  dat_t<1> MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__io_en_count;
  dat_t<1> MatrixMultiplyPipe_counterchain_matrix__io_reset;
  dat_t<1> MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__io_reset;
  dat_t<1> MatrixMultiplyPipe_counterchain_matrix__reset;
  dat_t<1> MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__reset;
  dat_t<1> MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__io_en_count;
  dat_t<1> MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__io_reset;
  dat_t<1> MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__reset;
  dat_t<1> MatrixMultiplyPipe_counterchain_matrix__io_en;
  dat_t<1> MatrixMultiplyPipe_counterchain_matrix_ItrCounter__io_en_count;
  dat_t<1> MatrixMultiplyPipe_counterchain_matrix_ItrCounter__io_reset;
  dat_t<1> MatrixMultiplyPipe_counterchain_matrix_ItrCounter__reset;
  dat_t<1> MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__io_done;
  dat_t<1> MatrixMultiplyPipe_counterchain_matrix__io_counters_done_2;
  dat_t<1> MatrixMultiplyPipe_counterchain_matrix__io_counters_done_1;
  dat_t<1> MatrixMultiplyPipe_matrix_output__io_write_en;
  dat_t<1> T65;
  dat_t<1> MatrixMultiplyPipe_matrix_ram2__io_write_en;
  dat_t<1> T75;
  dat_t<1> MatrixMultiplyPipe_matrix_ram1__io_write_en;
  dat_t<1> MatrixMultiplyPipe__io_done;
  dat_t<1> T94;
  dat_t<1> MatrixMultiplyPipe__reg_en_delay_3;
  dat_t<1> MatrixMultiplyPipe_counterchain_matrix__io_counters_done_0;
  dat_t<1> T95;
  dat_t<1> MatrixMultiplyPipe__reg_reset_delay_0;
  dat_t<1> T96;
  dat_t<1> MatrixMultiplyPipe__reg_reset_delay_1;
  dat_t<1> T97;
  dat_t<1> MatrixMultiplyPipe__reg_reset_delay_2;
  dat_t<1> T98;
  dat_t<1> MatrixMultiplyPipe__reg_reset_delay_3;
  dat_t<1> T99;
  dat_t<1> MatrixMultiplyPipe__reg_en_delay_0;
  dat_t<1> T100;
  dat_t<1> MatrixMultiplyPipe__reg_en_delay_1;
  dat_t<1> T101;
  dat_t<1> MatrixMultiplyPipe__reg_en_delay_2;
  dat_t<1> MatrixMultiplyPipe__io_en;
  dat_t<1> MatrixMultiplyPipe_counterchain_matrix__io_done_complete;
  dat_t<2> T113;
  dat_t<2> MatrixMultiplyPipe__state;
  dat_t<3> T76;
  dat_t<3> T83;
  dat_t<4> T66;
  dat_t<6> MatrixMultiplyPipe_matrix_ram2__io_read_addr;
  dat_t<6> MatrixMultiplyPipe_matrix_ram2__reg_raddr;
  dat_t<6> MatrixMultiplyPipe_matrix_ram2__io_write_addr;
  dat_t<8> MatrixMultiplyPipe_matrix_ram1__io_read_addr;
  dat_t<8> MatrixMultiplyPipe_matrix_ram1__reg_raddr;
  dat_t<8> MatrixMultiplyPipe_matrix_ram1__io_write_addr;
  dat_t<12> MatrixMultiplyPipe__io_data_in;
  dat_t<12> MatrixMultiplyPipe_matrix_output__io_read_addr;
  dat_t<12> MatrixMultiplyPipe_matrix_output__reg_raddr;
  dat_t<12> MatrixMultiplyPipe_matrix_output__io_write_addr;
  dat_t<12> T91;
  dat_t<12> MatrixMultiplyPipe__reg_addr_delay_0;
  dat_t<12> T92;
  dat_t<12> MatrixMultiplyPipe__reg_addr_delay_1;
  dat_t<12> T93;
  dat_t<12> MatrixMultiplyPipe__reg_addr_delay_2;
  dat_t<16> MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__io_cout;
  dat_t<16> MatrixMultiplyPipe_counterchain_matrix__io_counters_cout_2;
  dat_t<16> MatrixMultiplyPipe_matrix_output_addr__io_in;
  dat_t<16> MatrixMultiplyPipe_matrix_output_addr__io_const_dim;
  dat_t<16> MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__io_cout;
  dat_t<16> MatrixMultiplyPipe_counterchain_matrix__io_counters_cout_1;
  dat_t<16> MatrixMultiplyPipe_matrix_output_addr__io_k;
  dat_t<16> T6;
  dat_t<16> MatrixMultiplyPipe_matrix_output_addr__k_reg;
  dat_t<16> MatrixMultiplyPipe_counterchain_matrix_ItrCounter__io_cout;
  dat_t<16> MatrixMultiplyPipe_counterchain_matrix__io_counters_cout_0;
  dat_t<16> MatrixMultiplyPipe_matrix_column_addr__io_in;
  dat_t<16> MatrixMultiplyPipe_matrix_column_addr__io_const_dim;
  dat_t<16> MatrixMultiplyPipe_matrix_column_addr__io_k;
  dat_t<16> T13;
  dat_t<16> MatrixMultiplyPipe_matrix_column_addr__k_reg;
  dat_t<16> MatrixMultiplyPipe_matrix_row_addr__io_in;
  dat_t<16> MatrixMultiplyPipe_matrix_row_addr__io_const_dim;
  dat_t<16> MatrixMultiplyPipe_matrix_row_addr__io_k;
  dat_t<16> T20;
  dat_t<16> MatrixMultiplyPipe_matrix_row_addr__k_reg;
  dat_t<16> MatrixMultiplyPipe_matrix_ram2__io_read_out;
  dat_t<16> MatrixMultiplyPipe_dp_arith_block__io_v2;
  dat_t<16> MatrixMultiplyPipe_matrix_ram1__io_read_out;
  dat_t<16> MatrixMultiplyPipe_dp_arith_block__io_v1;
  dat_t<16> MatrixMultiplyPipe_counterchain_matrix__io_counters_max_2;
  dat_t<16> MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__io_max;
  dat_t<16> MatrixMultiplyPipe_counterchain_matrix__io_counters_max_1;
  dat_t<16> MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__io_max;
  dat_t<16> MatrixMultiplyPipe_counterchain_matrix__io_counters_max_0;
  dat_t<16> MatrixMultiplyPipe_counterchain_matrix_ItrCounter__io_max;
  dat_t<16> T47;
  dat_t<16> MatrixMultiplyPipe_counterchain_matrix_ItrCounter_2__currCount;
  dat_t<16> T54;
  dat_t<16> MatrixMultiplyPipe_counterchain_matrix_ItrCounter_1__currCount;
  dat_t<16> T61;
  dat_t<16> MatrixMultiplyPipe_counterchain_matrix_ItrCounter__currCount;
  dat_t<16> MatrixMultiplyPipe_matrix_output__io_write_data;
  dat_t<16> MatrixMultiplyPipe__io_input_addr2;
  dat_t<16> MatrixMultiplyPipe_matrix_ram2__io_write_data;
  dat_t<16> MatrixMultiplyPipe__io_input_addr;
  dat_t<16> MatrixMultiplyPipe_matrix_ram1__io_write_data;
  dat_t<16> MatrixMultiplyPipe_matrix_output__io_read_out;
  dat_t<16> MatrixMultiplyPipe__io_data_out;
  dat_t<16> MatrixMultiplyPipe__io_check_data;
  dat_t<32> T3;
  dat_t<32> MatrixMultiplyPipe_matrix_output_addr__mult_reg;
  dat_t<32> T10;
  dat_t<32> MatrixMultiplyPipe_matrix_column_addr__mult_reg;
  dat_t<32> T17;
  dat_t<32> MatrixMultiplyPipe_matrix_row_addr__mult_reg;
  dat_t<32> MatrixMultiplyPipe_matrix_column_addr__io_out;
  dat_t<32> MatrixMultiplyPipe_matrix_row_addr__io_out;
  dat_t<32> MatrixMultiplyPipe_matrix_output_addr__io_out;
    static const val_t T30[4];
    static const val_t T24[4];
  dat_t<256> T33;
  dat_t<256> MatrixMultiplyPipe_dp_arith_block__productReg;
  dat_t<256> T39;
  dat_t<256> MatrixMultiplyPipe_dp_arith_block__acc;
  dat_t<256> MatrixMultiplyPipe_dp_arith_block__io_dotproduct;
  mem_t<16,12> MatrixMultiplyPipe_matrix_output__bRam_rw;
  mem_t<16,6> MatrixMultiplyPipe_matrix_ram2__bRam_rw;
  mem_t<16,8> MatrixMultiplyPipe_matrix_ram1__bRam_rw;
  clk_t clk;

  void init ( val_t rand_init = 0 );
  void clock_lo ( dat_t<1> reset, bool assert_fire=true );
  void clock_hi ( dat_t<1> reset );
  int clock ( dat_t<1> reset );
  void print ( FILE* f );
  void print ( std::ostream& s );
  void dump ( FILE* f, val_t t, dat_t<1> reset=LIT<1>(0) );
  void dump_init ( FILE* f );

};

#include "emul_api.h"
class MatrixMultiplyPipe_api_t : public emul_api_t {
 public:
  MatrixMultiplyPipe_api_t(mod_t* m) : emul_api_t(m) { }
  void init_sim_data();
};

#endif
