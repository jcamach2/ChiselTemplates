#ifndef __CounterChain__
#define __CounterChain__

#include "emulator.h"

class CounterChain_t : public mod_t {
 private:
  val_t __rand_seed;
  void __srand(val_t seed) { __rand_seed = seed; }
  val_t __rand_val() { return ::__rand_val(&__rand_seed); }
 public:
  dat_t<1> CounterChain_ItrCounter_1__io_done;
  dat_t<1> CounterChain_ItrCounter__io_done;
  dat_t<1> CounterChain_ItrCounter_2__io_en_count;
  dat_t<1> CounterChain__io_reset;
  dat_t<1> CounterChain_ItrCounter_2__io_reset;
  dat_t<1> reset;
  dat_t<1> CounterChain_ItrCounter_2__reset;
  dat_t<1> CounterChain_ItrCounter_1__io_en_count;
  dat_t<1> CounterChain_ItrCounter_1__io_reset;
  dat_t<1> CounterChain_ItrCounter_1__reset;
  dat_t<1> CounterChain__io_en;
  dat_t<1> CounterChain_ItrCounter__io_en_count;
  dat_t<1> CounterChain_ItrCounter__io_reset;
  dat_t<1> CounterChain_ItrCounter__reset;
  dat_t<1> CounterChain_ItrCounter_2__io_done;
  dat_t<1> CounterChain__io_counters_done_2;
  dat_t<1> CounterChain__io_counters_done_1;
  dat_t<1> CounterChain__io_counters_done_0;
  dat_t<1> CounterChain__io_done_complete;
  dat_t<10> T27;
  dat_t<10> CounterChain__rst;
  dat_t<16> CounterChain__io_counters_max_2;
  dat_t<16> CounterChain_ItrCounter_2__io_max;
  dat_t<16> CounterChain__io_counters_max_1;
  dat_t<16> CounterChain_ItrCounter_1__io_max;
  dat_t<16> CounterChain__io_counters_max_0;
  dat_t<16> CounterChain_ItrCounter__io_max;
  dat_t<16> T7;
  dat_t<16> CounterChain_ItrCounter_2__currCount;
  dat_t<16> T14;
  dat_t<16> CounterChain_ItrCounter_1__currCount;
  dat_t<16> T21;
  dat_t<16> CounterChain_ItrCounter__currCount;
  dat_t<16> CounterChain_ItrCounter_2__io_cout;
  dat_t<16> CounterChain__io_counters_cout_2;
  dat_t<16> CounterChain_ItrCounter_1__io_cout;
  dat_t<16> CounterChain__io_counters_cout_1;
  dat_t<16> CounterChain_ItrCounter__io_cout;
  dat_t<16> CounterChain__io_counters_cout_0;
  dat_t<16> CounterChain__io_d;
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
class CounterChain_api_t : public emul_api_t {
 public:
  CounterChain_api_t(mod_t* m) : emul_api_t(m) { }
  void init_sim_data();
};

#endif
