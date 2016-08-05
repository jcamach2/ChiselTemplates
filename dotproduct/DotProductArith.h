#ifndef __DotProductArith__
#define __DotProductArith__

#include "emulator.h"

class DotProductArith_t : public mod_t {
 private:
  val_t __rand_seed;
  void __srand(val_t seed) { __rand_seed = seed; }
  val_t __rand_val() { return ::__rand_val(&__rand_seed); }
 public:
  dat_t<1> DotProductArith__io_en;
  dat_t<1> DotProductArith__io_reset;
  dat_t<1> reset;
  dat_t<1> DotProductArith__io_full_reset;
  dat_t<16> DotProductArith__io_v2_vec_3;
  dat_t<16> DotProductArith__io_v1_vec_3;
  dat_t<16> DotProductArith__io_v2_vec_2;
  dat_t<16> DotProductArith__io_v1_vec_2;
  dat_t<16> DotProductArith__io_v2_vec_1;
  dat_t<16> DotProductArith__io_v1_vec_1;
  dat_t<16> DotProductArith__io_v2_vec_0;
  dat_t<16> DotProductArith__io_v1_vec_0;
  dat_t<16> DotProductArith__io_out;
    static const val_t T6[4];
    static const val_t T3[4];
  dat_t<256> T8;
  dat_t<256> DotProductArith__rtree_vec_0_3;
  dat_t<256> T15;
  dat_t<256> DotProductArith__rtree_vec_0_2;
  dat_t<256> T16;
  dat_t<256> DotProductArith__rtree_vec_1_1;
  dat_t<256> T23;
  dat_t<256> DotProductArith__rtree_vec_0_1;
  dat_t<256> T30;
  dat_t<256> DotProductArith__rtree_vec_0_0;
  dat_t<256> T31;
  dat_t<256> DotProductArith__rtree_vec_1_0;
  dat_t<256> T32;
  dat_t<256> DotProductArith__rtree_vec_2_0;
  dat_t<256> T38;
  dat_t<256> DotProductArith__acc;
  dat_t<256> DotProductArith__io_dotproduct;
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
class DotProductArith_api_t : public emul_api_t {
 public:
  DotProductArith_api_t(mod_t* m) : emul_api_t(m) { }
  void init_sim_data();
};

#endif
