#ifndef __DotProductTop__
#define __DotProductTop__

#include "emulator.h"

class DotProductTop_t : public mod_t {
 private:
  val_t __rand_seed;
  void __srand(val_t seed) { __rand_seed = seed; }
  val_t __rand_val() { return ::__rand_val(&__rand_seed); }
 public:
  dat_t<1> DotProductTop_dp_FSM__io_pipe_enabled;
  dat_t<1> DotProductTop_counter__io_en;
  dat_t<1> DotProductTop_counter_ItrCounter__io_en_count;
  dat_t<1> DotProductTop_counter__io_reset;
  dat_t<1> DotProductTop_counter_ItrCounter__io_reset;
  dat_t<1> reset;
  dat_t<1> DotProductTop_counter__reset;
  dat_t<1> DotProductTop_counter_ItrCounter__reset;
  dat_t<1> DotProductTop_counter_ItrCounter__io_done;
  dat_t<1> DotProductTop_counter__io_counters_done_0;
  dat_t<1> T15;
  dat_t<1> DotProductTop_counter__done_complete;
  dat_t<1> DotProductTop_dp_arith__io_en;
  dat_t<1> DotProductTop_dp_arith__io_reset;
  dat_t<1> DotProductTop_dp_arith__reset;
  dat_t<1> DotProductTop_dp_ram2__io_write_en;
  dat_t<1> DotProductTop_dp_ram2_BRAM_param_1__io_write_en;
  dat_t<1> DotProductTop_dp_ram2_BRAM_param__io_write_en;
  dat_t<1> DotProductTop_dp_ram1__io_write_en;
  dat_t<1> DotProductTop_dp_ram1_BRAM_param_1__io_write_en;
  dat_t<1> DotProductTop_dp_ram1_BRAM_param__io_write_en;
  dat_t<1> DotProductTop_dp_FSM__reset;
  dat_t<1> T46;
  dat_t<1> DotProductTop_dp_FSM__wait_done;
  dat_t<1> DotProductTop_dp_FSM__io_en;
  dat_t<1> DotProductTop_counter__io_done_complete;
  dat_t<1> DotProductTop_dp_FSM__io_counter_done;
  dat_t<1> T63;
  dat_t<1> DotProductTop__delayReg;
  dat_t<1> T64;
  dat_t<1> DotProductTop__delayReg2;
  dat_t<1> DotProductTop__io_cmd;
  dat_t<1> DotProductTop_dp_FSM__io_done;
  dat_t<2> T37;
  dat_t<2> T38;
  dat_t<2> T42;
  dat_t<2> T43;
  dat_t<2> DotProductTop_dp_FSM__prev_state;
  dat_t<2> T61;
  dat_t<2> DotProductTop_dp_FSM__curr_state;
  dat_t<2> DotProductTop__io_status;
  dat_t<2> T76;
  dat_t<2> DotProductTop__state;
  dat_t<16> DotProductTop_counter__io_counters_max_0;
  dat_t<16> DotProductTop_counter_ItrCounter__io_max;
  dat_t<16> T8;
  dat_t<16> DotProductTop_counter_ItrCounter__currCount;
  dat_t<16> DotProductTop_counter_ItrCounter__io_vec_cout_0;
  dat_t<16> DotProductTop_counter_ItrCounter__io_vec_cout_1;
  dat_t<16> DotProductTop_counter__io_counters_cout_0_1;
  dat_t<16> DotProductTop_dp_ram2_BRAM_param__io_read_out;
  dat_t<16> DotProductTop_dp_ram2__io_read_out_0;
  dat_t<16> DotProductTop_dp_arith__io_v2;
  dat_t<16> DotProductTop_dp_ram1_BRAM_param__io_read_out;
  dat_t<16> DotProductTop_dp_ram1__io_read_out_0;
  dat_t<16> DotProductTop_dp_arith__io_v1;
  dat_t<16> DotProductTop_counter__io_counters_cout_0_0;
  dat_t<16> DotProductTop_dp_ram2__io_read_addr;
  dat_t<16> DotProductTop_dp_ram2_BRAM_param_1__io_read_addr;
  dat_t<16> DotProductTop_dp_ram2_BRAM_param_1__reg_raddr;
  dat_t<16> DotProductTop__io_input_data;
  dat_t<16> DotProductTop_dp_ram2__io_write_data;
  dat_t<16> DotProductTop_dp_ram2_BRAM_param_1__io_write_data;
  dat_t<16> DotProductTop__io_input_addr;
  dat_t<16> DotProductTop_dp_ram2__io_write_addr;
  dat_t<16> DotProductTop_dp_ram2_BRAM_param_1__io_write_addr;
  dat_t<16> DotProductTop_dp_ram2_BRAM_param__io_read_addr;
  dat_t<16> DotProductTop_dp_ram2_BRAM_param__reg_raddr;
  dat_t<16> DotProductTop_dp_ram2_BRAM_param__io_write_data;
  dat_t<16> DotProductTop_dp_ram2_BRAM_param__io_write_addr;
  dat_t<16> DotProductTop_dp_ram2_BRAM_param_1__io_read_out;
  dat_t<16> DotProductTop_dp_ram2__io_read_out_1;
  dat_t<16> DotProductTop_dp_ram1__io_read_addr;
  dat_t<16> DotProductTop_dp_ram1_BRAM_param_1__io_read_addr;
  dat_t<16> DotProductTop_dp_ram1_BRAM_param_1__reg_raddr;
  dat_t<16> DotProductTop_dp_ram1__io_write_data;
  dat_t<16> DotProductTop_dp_ram1_BRAM_param_1__io_write_data;
  dat_t<16> DotProductTop_dp_ram1__io_write_addr;
  dat_t<16> DotProductTop_dp_ram1_BRAM_param_1__io_write_addr;
  dat_t<16> DotProductTop_dp_ram1_BRAM_param__io_read_addr;
  dat_t<16> DotProductTop_dp_ram1_BRAM_param__reg_raddr;
  dat_t<16> DotProductTop_dp_ram1_BRAM_param__io_write_data;
  dat_t<16> DotProductTop_dp_ram1_BRAM_param__io_write_addr;
  dat_t<16> DotProductTop_dp_ram1_BRAM_param_1__io_read_out;
  dat_t<16> DotProductTop_dp_ram1__io_read_out_1;
  dat_t<16> DotProductTop__io_result;
    static const val_t T26[4];
    static const val_t T20[4];
  dat_t<256> T29;
  dat_t<256> DotProductTop_dp_arith__productReg;
  dat_t<256> T35;
  dat_t<256> DotProductTop_dp_arith__acc;
  dat_t<256> DotProductTop_dp_arith__io_dotproduct;
  mem_t<16,4> DotProductTop_dp_ram2_BRAM_param_1__bRam_rw;
  mem_t<16,4> DotProductTop_dp_ram2_BRAM_param__bRam_rw;
  mem_t<16,4> DotProductTop_dp_ram1_BRAM_param_1__bRam_rw;
  mem_t<16,4> DotProductTop_dp_ram1_BRAM_param__bRam_rw;
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
class DotProductTop_api_t : public emul_api_t {
 public:
  DotProductTop_api_t(mod_t* m) : emul_api_t(m) { }
  void init_sim_data();
};

#endif
