#include "DotProductArith.h"

const val_t DotProductArith_t::T3[] = {0x0L, 0x0L, 0x0L, 0x0L};
const val_t DotProductArith_t::T6[] = {0x0L, 0x0L, 0x0L, 0x0L};

void DotProductArith_t::init ( val_t rand_init ) {
  this->__srand(rand_init);
  DotProductArith__rtree_vec_0_3.randomize(&__rand_seed);
  DotProductArith__rtree_vec_0_2.randomize(&__rand_seed);
  DotProductArith__rtree_vec_1_1.randomize(&__rand_seed);
  DotProductArith__rtree_vec_0_1.randomize(&__rand_seed);
  DotProductArith__rtree_vec_0_0.randomize(&__rand_seed);
  DotProductArith__rtree_vec_1_0.randomize(&__rand_seed);
  DotProductArith__rtree_vec_2_0.randomize(&__rand_seed);
  DotProductArith__acc.randomize(&__rand_seed);
  clk.len = 1;
  clk.cnt = 0;
  clk.values[0] = 0;
}


int DotProductArith_t::clock ( dat_t<1> reset ) {
  uint32_t min = ((uint32_t)1<<31)-1;
  if (clk.cnt < min) min = clk.cnt;
  clk.cnt-=min;
  if (clk.cnt == 0) clock_lo( reset );
  if (!reset.to_bool()) print( std::cerr );
  if (clk.cnt == 0) clock_hi( reset );
  if (clk.cnt == 0) clk.cnt = clk.len;
  return min;
}


void DotProductArith_t::print ( FILE* f ) {
}
void DotProductArith_t::print ( std::ostream& s ) {
}


void DotProductArith_t::dump_init ( FILE* f ) {
}


void DotProductArith_t::dump ( FILE* f, val_t t, dat_t<1> reset ) {
}




void DotProductArith_t::clock_lo ( dat_t<1> reset, bool assert_fire ) {
  val_t T0;
  { T0 = DotProductArith__io_en.values[0] ^ 0x1L;}
  val_t T1;
  { T1 = DotProductArith__io_reset.values[0] & T0;}
  val_t T2[4];
  { T2[0] = TERNARY(T1, T3[0], DotProductArith__rtree_vec_0_3.values[0]); T2[1] = TERNARY(T1, T3[1], DotProductArith__rtree_vec_0_3.values[1]); T2[2] = TERNARY(T1, T3[2], DotProductArith__rtree_vec_0_3.values[2]); T2[3] = TERNARY(T1, T3[3], DotProductArith__rtree_vec_0_3.values[3]);}
  val_t T4;
  T4 = DotProductArith__io_v1_vec_3.values[0] * DotProductArith__io_v2_vec_3.values[0];
  val_t T5[4];
  { T5[0] = T4 | T6[0] << 32; T5[1] = T6[0] >> 32 | T6[1] << 32; T5[2] = T6[1] >> 32 | T6[2] << 32; T5[3] = T6[2] >> 32 | T6[3] << 32;}
  val_t T7;
  { T7 = T1 ^ 0x1L;}
  { T8.values[0] = TERNARY_1(T7, T5[0], T2[0]); T8.values[1] = TERNARY_1(T7, T5[1], T2[1]); T8.values[2] = TERNARY_1(T7, T5[2], T2[2]); T8.values[3] = TERNARY_1(T7, T5[3], T2[3]);}
  val_t T9;
  { T9 = DotProductArith__io_en.values[0] ^ 0x1L;}
  val_t T10;
  { T10 = DotProductArith__io_reset.values[0] & T9;}
  val_t T11[4];
  { T11[0] = TERNARY(T10, T3[0], DotProductArith__rtree_vec_0_2.values[0]); T11[1] = TERNARY(T10, T3[1], DotProductArith__rtree_vec_0_2.values[1]); T11[2] = TERNARY(T10, T3[2], DotProductArith__rtree_vec_0_2.values[2]); T11[3] = TERNARY(T10, T3[3], DotProductArith__rtree_vec_0_2.values[3]);}
  val_t T12;
  T12 = DotProductArith__io_v1_vec_2.values[0] * DotProductArith__io_v2_vec_2.values[0];
  val_t T13[4];
  { T13[0] = T12 | T6[0] << 32; T13[1] = T6[0] >> 32 | T6[1] << 32; T13[2] = T6[1] >> 32 | T6[2] << 32; T13[3] = T6[2] >> 32 | T6[3] << 32;}
  val_t T14;
  { T14 = T10 ^ 0x1L;}
  { T15.values[0] = TERNARY_1(T14, T13[0], T11[0]); T15.values[1] = TERNARY_1(T14, T13[1], T11[1]); T15.values[2] = TERNARY_1(T14, T13[2], T11[2]); T15.values[3] = TERNARY_1(T14, T13[3], T11[3]);}
  { T16.values[0] = DotProductArith__rtree_vec_0_3.values[0]+DotProductArith__rtree_vec_0_2.values[0]; val_t __c = DotProductArith__rtree_vec_0_3.values[0]+DotProductArith__rtree_vec_0_2.values[0] < DotProductArith__rtree_vec_0_3.values[0]; T16.values[1] = DotProductArith__rtree_vec_0_3.values[1]+DotProductArith__rtree_vec_0_2.values[1]+__c; __c = DotProductArith__rtree_vec_0_3.values[1]+DotProductArith__rtree_vec_0_2.values[1] < DotProductArith__rtree_vec_0_3.values[1] || T16.values[1] < __c; T16.values[2] = DotProductArith__rtree_vec_0_3.values[2]+DotProductArith__rtree_vec_0_2.values[2]+__c; __c = DotProductArith__rtree_vec_0_3.values[2]+DotProductArith__rtree_vec_0_2.values[2] < DotProductArith__rtree_vec_0_3.values[2] || T16.values[2] < __c; T16.values[3] = DotProductArith__rtree_vec_0_3.values[3]+DotProductArith__rtree_vec_0_2.values[3]+__c;}
  val_t T17;
  { T17 = DotProductArith__io_en.values[0] ^ 0x1L;}
  val_t T18;
  { T18 = DotProductArith__io_reset.values[0] & T17;}
  val_t T19[4];
  { T19[0] = TERNARY(T18, T3[0], DotProductArith__rtree_vec_0_1.values[0]); T19[1] = TERNARY(T18, T3[1], DotProductArith__rtree_vec_0_1.values[1]); T19[2] = TERNARY(T18, T3[2], DotProductArith__rtree_vec_0_1.values[2]); T19[3] = TERNARY(T18, T3[3], DotProductArith__rtree_vec_0_1.values[3]);}
  val_t T20;
  T20 = DotProductArith__io_v1_vec_1.values[0] * DotProductArith__io_v2_vec_1.values[0];
  val_t T21[4];
  { T21[0] = T20 | T6[0] << 32; T21[1] = T6[0] >> 32 | T6[1] << 32; T21[2] = T6[1] >> 32 | T6[2] << 32; T21[3] = T6[2] >> 32 | T6[3] << 32;}
  val_t T22;
  { T22 = T18 ^ 0x1L;}
  { T23.values[0] = TERNARY_1(T22, T21[0], T19[0]); T23.values[1] = TERNARY_1(T22, T21[1], T19[1]); T23.values[2] = TERNARY_1(T22, T21[2], T19[2]); T23.values[3] = TERNARY_1(T22, T21[3], T19[3]);}
  val_t T24;
  { T24 = DotProductArith__io_en.values[0] ^ 0x1L;}
  val_t T25;
  { T25 = DotProductArith__io_reset.values[0] & T24;}
  val_t T26[4];
  { T26[0] = TERNARY(T25, T3[0], DotProductArith__rtree_vec_0_0.values[0]); T26[1] = TERNARY(T25, T3[1], DotProductArith__rtree_vec_0_0.values[1]); T26[2] = TERNARY(T25, T3[2], DotProductArith__rtree_vec_0_0.values[2]); T26[3] = TERNARY(T25, T3[3], DotProductArith__rtree_vec_0_0.values[3]);}
  val_t T27;
  T27 = DotProductArith__io_v1_vec_0.values[0] * DotProductArith__io_v2_vec_0.values[0];
  val_t T28[4];
  { T28[0] = T27 | T6[0] << 32; T28[1] = T6[0] >> 32 | T6[1] << 32; T28[2] = T6[1] >> 32 | T6[2] << 32; T28[3] = T6[2] >> 32 | T6[3] << 32;}
  val_t T29;
  { T29 = T25 ^ 0x1L;}
  { T30.values[0] = TERNARY_1(T29, T28[0], T26[0]); T30.values[1] = TERNARY_1(T29, T28[1], T26[1]); T30.values[2] = TERNARY_1(T29, T28[2], T26[2]); T30.values[3] = TERNARY_1(T29, T28[3], T26[3]);}
  { T31.values[0] = DotProductArith__rtree_vec_0_1.values[0]+DotProductArith__rtree_vec_0_0.values[0]; val_t __c = DotProductArith__rtree_vec_0_1.values[0]+DotProductArith__rtree_vec_0_0.values[0] < DotProductArith__rtree_vec_0_1.values[0]; T31.values[1] = DotProductArith__rtree_vec_0_1.values[1]+DotProductArith__rtree_vec_0_0.values[1]+__c; __c = DotProductArith__rtree_vec_0_1.values[1]+DotProductArith__rtree_vec_0_0.values[1] < DotProductArith__rtree_vec_0_1.values[1] || T31.values[1] < __c; T31.values[2] = DotProductArith__rtree_vec_0_1.values[2]+DotProductArith__rtree_vec_0_0.values[2]+__c; __c = DotProductArith__rtree_vec_0_1.values[2]+DotProductArith__rtree_vec_0_0.values[2] < DotProductArith__rtree_vec_0_1.values[2] || T31.values[2] < __c; T31.values[3] = DotProductArith__rtree_vec_0_1.values[3]+DotProductArith__rtree_vec_0_0.values[3]+__c;}
  { T32.values[0] = DotProductArith__rtree_vec_1_1.values[0]+DotProductArith__rtree_vec_1_0.values[0]; val_t __c = DotProductArith__rtree_vec_1_1.values[0]+DotProductArith__rtree_vec_1_0.values[0] < DotProductArith__rtree_vec_1_1.values[0]; T32.values[1] = DotProductArith__rtree_vec_1_1.values[1]+DotProductArith__rtree_vec_1_0.values[1]+__c; __c = DotProductArith__rtree_vec_1_1.values[1]+DotProductArith__rtree_vec_1_0.values[1] < DotProductArith__rtree_vec_1_1.values[1] || T32.values[1] < __c; T32.values[2] = DotProductArith__rtree_vec_1_1.values[2]+DotProductArith__rtree_vec_1_0.values[2]+__c; __c = DotProductArith__rtree_vec_1_1.values[2]+DotProductArith__rtree_vec_1_0.values[2] < DotProductArith__rtree_vec_1_1.values[2] || T32.values[2] < __c; T32.values[3] = DotProductArith__rtree_vec_1_1.values[3]+DotProductArith__rtree_vec_1_0.values[3]+__c;}
  val_t T33[4];
  { T33[0] = TERNARY(DotProductArith__io_reset.values[0], T3[0], DotProductArith__acc.values[0]); T33[1] = TERNARY(DotProductArith__io_reset.values[0], T3[1], DotProductArith__acc.values[1]); T33[2] = TERNARY(DotProductArith__io_reset.values[0], T3[2], DotProductArith__acc.values[2]); T33[3] = TERNARY(DotProductArith__io_reset.values[0], T3[3], DotProductArith__acc.values[3]);}
  val_t T34[4];
  { T34[0] = DotProductArith__acc.values[0]+DotProductArith__rtree_vec_2_0.values[0]; val_t __c = DotProductArith__acc.values[0]+DotProductArith__rtree_vec_2_0.values[0] < DotProductArith__acc.values[0]; T34[1] = DotProductArith__acc.values[1]+DotProductArith__rtree_vec_2_0.values[1]+__c; __c = DotProductArith__acc.values[1]+DotProductArith__rtree_vec_2_0.values[1] < DotProductArith__acc.values[1] || T34[1] < __c; T34[2] = DotProductArith__acc.values[2]+DotProductArith__rtree_vec_2_0.values[2]+__c; __c = DotProductArith__acc.values[2]+DotProductArith__rtree_vec_2_0.values[2] < DotProductArith__acc.values[2] || T34[2] < __c; T34[3] = DotProductArith__acc.values[3]+DotProductArith__rtree_vec_2_0.values[3]+__c;}
  val_t T35;
  { T35 = DotProductArith__io_reset.values[0] ^ 0x1L;}
  val_t T36;
  { T36 = T35 & DotProductArith__io_en.values[0];}
  val_t T37[4];
  { T37[0] = TERNARY_1(T36, T34[0], T33[0]); T37[1] = TERNARY_1(T36, T34[1], T33[1]); T37[2] = TERNARY_1(T36, T34[2], T33[2]); T37[3] = TERNARY_1(T36, T34[3], T33[3]);}
  { T38.values[0] = TERNARY(reset.values[0], T3[0], T37[0]); T38.values[1] = TERNARY(reset.values[0], T3[1], T37[1]); T38.values[2] = TERNARY(reset.values[0], T3[2], T37[2]); T38.values[3] = TERNARY(reset.values[0], T3[3], T37[3]);}
  { DotProductArith__io_dotproduct.values[0] = DotProductArith__acc.values[0]; DotProductArith__io_dotproduct.values[1] = DotProductArith__acc.values[1]; DotProductArith__io_dotproduct.values[2] = DotProductArith__acc.values[2]; DotProductArith__io_dotproduct.values[3] = DotProductArith__acc.values[3];}
  { val_t __r = this->__rand_val(); DotProductArith__io_out.values[0] = __r;}
  DotProductArith__io_out.values[0] = DotProductArith__io_out.values[0] & 0xffffL;
}


void DotProductArith_t::clock_hi ( dat_t<1> reset ) {
  dat_t<256> DotProductArith__rtree_vec_0_3__shadow = T8;
  dat_t<256> DotProductArith__rtree_vec_0_2__shadow = T15;
  dat_t<256> DotProductArith__rtree_vec_1_1__shadow = T16;
  dat_t<256> DotProductArith__rtree_vec_0_1__shadow = T23;
  dat_t<256> DotProductArith__rtree_vec_0_0__shadow = T30;
  dat_t<256> DotProductArith__rtree_vec_1_0__shadow = T31;
  dat_t<256> DotProductArith__rtree_vec_2_0__shadow = T32;
  dat_t<256> DotProductArith__acc__shadow = T38;
  DotProductArith__rtree_vec_0_3 = T8;
  DotProductArith__rtree_vec_0_2 = T15;
  DotProductArith__rtree_vec_1_1 = T16;
  DotProductArith__rtree_vec_0_1 = T23;
  DotProductArith__rtree_vec_0_0 = T30;
  DotProductArith__rtree_vec_1_0 = T31;
  DotProductArith__rtree_vec_2_0 = T32;
  DotProductArith__acc = T38;
}


void DotProductArith_api_t::init_sim_data (  ) {
  sim_data.inputs.clear();
  sim_data.outputs.clear();
  sim_data.signals.clear();
  DotProductArith_t* mod = dynamic_cast<DotProductArith_t*>(module);
  assert(mod);
  sim_data.inputs.push_back(new dat_api<16>(&mod->DotProductArith__io_v1_vec_3));
  sim_data.inputs.push_back(new dat_api<16>(&mod->DotProductArith__io_v1_vec_2));
  sim_data.inputs.push_back(new dat_api<16>(&mod->DotProductArith__io_v1_vec_1));
  sim_data.inputs.push_back(new dat_api<16>(&mod->DotProductArith__io_v1_vec_0));
  sim_data.inputs.push_back(new dat_api<16>(&mod->DotProductArith__io_v2_vec_3));
  sim_data.inputs.push_back(new dat_api<16>(&mod->DotProductArith__io_v2_vec_2));
  sim_data.inputs.push_back(new dat_api<16>(&mod->DotProductArith__io_v2_vec_1));
  sim_data.inputs.push_back(new dat_api<16>(&mod->DotProductArith__io_v2_vec_0));
  sim_data.inputs.push_back(new dat_api<1>(&mod->DotProductArith__io_reset));
  sim_data.inputs.push_back(new dat_api<1>(&mod->DotProductArith__io_full_reset));
  sim_data.inputs.push_back(new dat_api<1>(&mod->DotProductArith__io_en));
  sim_data.outputs.push_back(new dat_api<256>(&mod->DotProductArith__io_dotproduct));
  sim_data.outputs.push_back(new dat_api<16>(&mod->DotProductArith__io_out));
  sim_data.signals.push_back(new dat_api<256>(&mod->DotProductArith__rtree_vec_0_3));
  sim_data.signal_map["DotProductArith.rtree_vec_0_3"] = 0;
  sim_data.signals.push_back(new dat_api<256>(&mod->DotProductArith__rtree_vec_0_2));
  sim_data.signal_map["DotProductArith.rtree_vec_0_2"] = 1;
  sim_data.signals.push_back(new dat_api<256>(&mod->DotProductArith__rtree_vec_1_1));
  sim_data.signal_map["DotProductArith.rtree_vec_1_1"] = 2;
  sim_data.signals.push_back(new dat_api<256>(&mod->DotProductArith__rtree_vec_0_1));
  sim_data.signal_map["DotProductArith.rtree_vec_0_1"] = 3;
  sim_data.signals.push_back(new dat_api<256>(&mod->DotProductArith__rtree_vec_0_0));
  sim_data.signal_map["DotProductArith.rtree_vec_0_0"] = 4;
  sim_data.signals.push_back(new dat_api<256>(&mod->DotProductArith__rtree_vec_1_0));
  sim_data.signal_map["DotProductArith.rtree_vec_1_0"] = 5;
  sim_data.signals.push_back(new dat_api<256>(&mod->DotProductArith__rtree_vec_2_0));
  sim_data.signal_map["DotProductArith.rtree_vec_2_0"] = 6;
  sim_data.signals.push_back(new dat_api<256>(&mod->DotProductArith__acc));
  sim_data.signal_map["DotProductArith.acc"] = 7;
  sim_data.clk_map["clk"] = new clk_api(&mod->clk);
}
