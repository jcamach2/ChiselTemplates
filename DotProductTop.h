#ifndef __DotProductTop__
#define __DotProductTop__

#include "emulator.h"

class DotProductTop_t : public mod_t {
 private:
  val_t __rand_seed;
  void __srand(val_t seed) { __rand_seed = seed; }
  val_t __rand_val() { return ::__rand_val(&__rand_seed); }
 public:
  dat_t<1> DotProductTop_dpBlock__io_run;
  dat_t<1> DotProductTop_counter__io_en_count;
  dat_t<1> DotProductTop_dpBlock__io_pipe_reset;
  dat_t<1> DotProductTop_counter__io_reset;
  dat_t<1> reset;
  dat_t<1> DotProductTop_counter__reset;
  dat_t<1> DotProductTop_dp_arith__io_reset;
  dat_t<1> DotProductTop_dp_arith__reset;
  dat_t<1> DotProductTop_dp_arith__io_en;
  dat_t<1> DotProductTop_dp_ram2__io_write_en;
  dat_t<1> T36;
  dat_t<1> DotProductTop_dp_ram1__io_write_en;
  dat_t<1> T42;
  dat_t<1> DotProductTop_counter__io_done;
  dat_t<1> DotProductTop_dpBlock__io_block_done;
  dat_t<1> DotProductTop_dpBlock__io_en;
  dat_t<1> DotProductTop_dpBlock__reset;
  dat_t<1> T57;
  dat_t<1> DotProductTop__delayReg;
  dat_t<1> DotProductTop__io_cmd;
  dat_t<1> DotProductTop_dpBlock__io_done;
  dat_t<2> T55;
  dat_t<2> DotProductTop_dpBlock__pipe_state;
  dat_t<2> DotProductTop__io_status;
  dat_t<2> T69;
  dat_t<2> DotProductTop__state;
  dat_t<3> T37;
  dat_t<3> T43;
  dat_t<5> DotProductTop_dp_ram2__io_read_addr;
  dat_t<5> DotProductTop_dp_ram2__reg_raddr;
  dat_t<5> DotProductTop__io_input_addr;
  dat_t<5> DotProductTop_dp_ram2__io_write_addr;
  dat_t<5> DotProductTop_dp_ram1__io_read_addr;
  dat_t<5> DotProductTop_dp_ram1__reg_raddr;
  dat_t<5> DotProductTop_dp_ram1__io_write_addr;
  dat_t<16> DotProductTop_counter__io_max;
  dat_t<16> T14;
  dat_t<16> DotProductTop_counter__currCount;
  dat_t<16> DotProductTop_dp_ram2__io_read_out;
  dat_t<16> DotProductTop_dp_arith__io_v2;
  dat_t<16> DotProductTop_dp_ram1__io_read_out;
  dat_t<16> DotProductTop_dp_arith__io_v1;
  dat_t<16> DotProductTop_counter__io_cout;
  dat_t<16> DotProductTop__io_input_data;
  dat_t<16> DotProductTop_dp_ram2__io_write_data;
  dat_t<16> DotProductTop_dp_ram1__io_write_data;
  dat_t<16> DotProductTop__io_result;
    static const val_t T22[4];
    static const val_t T16[4];
  dat_t<256> T25;
  dat_t<256> DotProductTop_dp_arith__productReg;
  dat_t<256> T31;
  dat_t<256> DotProductTop_dp_arith__acc;
  dat_t<256> DotProductTop_dp_arith__io_dotproduct;
  mem_t<16,5> DotProductTop_dp_ram2__bRam_rw;
  mem_t<16,5> DotProductTop_dp_ram1__bRam_rw;
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
