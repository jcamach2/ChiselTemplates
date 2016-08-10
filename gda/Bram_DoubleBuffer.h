#ifndef __Bram_DoubleBuffer__
#define __Bram_DoubleBuffer__

#include "emulator.h"

class Bram_DoubleBuffer_t : public mod_t {
 private:
  val_t __rand_seed;
  void __srand(val_t seed) { __rand_seed = seed; }
  val_t __rand_val() { return ::__rand_val(&__rand_seed); }
 public:
  dat_t<1> Bram_DoubleBuffer__io_write_en;
  dat_t<1> Bram_DoubleBuffer_bram_w2__io_write_en;
  dat_t<1> Bram_DoubleBuffer_bram_w1__io_write_en;
  dat_t<1> reset;
  dat_t<1> Bram_DoubleBuffer__io_write_done;
  dat_t<1> Bram_DoubleBuffer__io_read_done_vec_0;
  dat_t<1> T17;
  dat_t<1> Bram_DoubleBuffer__latch_read_done_vec_0;
  dat_t<2> T2;
  dat_t<2> T5;
  dat_t<2> T6;
  dat_t<2> Bram_DoubleBuffer__state_read_reg;
  dat_t<2> T26;
  dat_t<2> Bram_DoubleBuffer__state;
  dat_t<16> Bram_DoubleBuffer__io_read_addr_vec_0;
  dat_t<16> Bram_DoubleBuffer_bram_w2__io_read_addr;
  dat_t<16> Bram_DoubleBuffer_bram_w2__reg_raddr;
  dat_t<16> Bram_DoubleBuffer__io_write_data;
  dat_t<16> Bram_DoubleBuffer_bram_w2__io_write_data;
  dat_t<16> Bram_DoubleBuffer__io_write_addr;
  dat_t<16> Bram_DoubleBuffer_bram_w2__io_write_addr;
  dat_t<16> Bram_DoubleBuffer_bram_w1__io_read_addr;
  dat_t<16> Bram_DoubleBuffer_bram_w1__reg_raddr;
  dat_t<16> Bram_DoubleBuffer_bram_w1__io_write_data;
  dat_t<16> Bram_DoubleBuffer_bram_w1__io_write_addr;
  dat_t<16> Bram_DoubleBuffer_bram_w1__io_read_out;
  dat_t<16> Bram_DoubleBuffer_bram_w2__io_read_out;
  dat_t<16> Bram_DoubleBuffer__io_read_out;
  mem_t<16,4> Bram_DoubleBuffer_bram_w2__bRam_rw;
  mem_t<16,4> Bram_DoubleBuffer_bram_w1__bRam_rw;
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
class Bram_DoubleBuffer_api_t : public emul_api_t {
 public:
  Bram_DoubleBuffer_api_t(mod_t* m) : emul_api_t(m) { }
  void init_sim_data();
};

#endif
