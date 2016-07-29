#include "CounterChain.h"

void CounterChain_t::init ( val_t rand_init ) {
  this->__srand(rand_init);
  CounterChain_ItrCounter_2__currCount.randomize(&__rand_seed);
  CounterChain_ItrCounter_1__currCount.randomize(&__rand_seed);
  CounterChain_ItrCounter__currCount.randomize(&__rand_seed);
  CounterChain__rst.randomize(&__rand_seed);
  clk.len = 1;
  clk.cnt = 0;
  clk.values[0] = 0;
}


int CounterChain_t::clock ( dat_t<1> reset ) {
  uint32_t min = ((uint32_t)1<<31)-1;
  if (clk.cnt < min) min = clk.cnt;
  clk.cnt-=min;
  if (clk.cnt == 0) clock_lo( reset );
  if (!reset.to_bool()) print( std::cerr );
  if (clk.cnt == 0) clock_hi( reset );
  if (clk.cnt == 0) clk.cnt = clk.len;
  return min;
}


void CounterChain_t::print ( FILE* f ) {
}
void CounterChain_t::print ( std::ostream& s ) {
}


void CounterChain_t::dump_init ( FILE* f ) {
}


void CounterChain_t::dump ( FILE* f, val_t t, dat_t<1> reset ) {
}




void CounterChain_t::clock_lo ( dat_t<1> reset, bool assert_fire ) {
  val_t T0;
  { T0 = CounterChain_ItrCounter_2__currCount.values[0]+0x1L;}
  T0 = T0 & 0xffffL;
  { CounterChain_ItrCounter_2__io_max.values[0] = CounterChain__io_counters_max_2.values[0];}
  val_t CounterChain_ItrCounter_2__hitMax;
  CounterChain_ItrCounter_2__hitMax = CounterChain_ItrCounter_2__io_max.values[0]<=CounterChain_ItrCounter_2__currCount.values[0];
  val_t T1;
  { T1 = TERNARY(CounterChain_ItrCounter_2__hitMax, 0x0L, T0);}
  { CounterChain_ItrCounter_1__io_max.values[0] = CounterChain__io_counters_max_1.values[0];}
  val_t CounterChain_ItrCounter_1__hitMax;
  CounterChain_ItrCounter_1__hitMax = CounterChain_ItrCounter_1__io_max.values[0]<=CounterChain_ItrCounter_1__currCount.values[0];
  { CounterChain_ItrCounter_1__io_done.values[0] = CounterChain_ItrCounter_1__hitMax;}
  { CounterChain_ItrCounter__io_max.values[0] = CounterChain__io_counters_max_0.values[0];}
  val_t CounterChain_ItrCounter__hitMax;
  CounterChain_ItrCounter__hitMax = CounterChain_ItrCounter__io_max.values[0]<=CounterChain_ItrCounter__currCount.values[0];
  { CounterChain_ItrCounter__io_done.values[0] = CounterChain_ItrCounter__hitMax;}
  val_t T2;
  { T2 = CounterChain_ItrCounter__io_done.values[0] & CounterChain_ItrCounter_1__io_done.values[0];}
  { CounterChain_ItrCounter_2__io_en_count.values[0] = T2;}
  val_t T3;
  { T3 = TERNARY_1(CounterChain_ItrCounter_2__io_en_count.values[0], T1, CounterChain_ItrCounter_2__currCount.values[0]);}
  { CounterChain_ItrCounter_2__io_reset.values[0] = CounterChain__io_reset.values[0];}
  val_t T4;
  { T4 = CounterChain_ItrCounter_2__io_en_count.values[0] ^ 0x1L;}
  val_t T5;
  { T5 = T4 & CounterChain_ItrCounter_2__io_reset.values[0];}
  val_t T6;
  { T6 = TERNARY(T5, 0x0L, T3);}
  { CounterChain_ItrCounter_2__reset.values[0] = reset.values[0];}
  { T7.values[0] = TERNARY(CounterChain_ItrCounter_2__reset.values[0], 0x0L, T6);}
  val_t T8;
  { T8 = CounterChain_ItrCounter_1__currCount.values[0]+0x1L;}
  T8 = T8 & 0xffffL;
  val_t T9;
  { T9 = TERNARY(CounterChain_ItrCounter_1__hitMax, 0x0L, T8);}
  { CounterChain_ItrCounter_1__io_en_count.values[0] = CounterChain_ItrCounter__io_done.values[0];}
  val_t T10;
  { T10 = TERNARY_1(CounterChain_ItrCounter_1__io_en_count.values[0], T9, CounterChain_ItrCounter_1__currCount.values[0]);}
  { CounterChain_ItrCounter_1__io_reset.values[0] = CounterChain__io_reset.values[0];}
  val_t T11;
  { T11 = CounterChain_ItrCounter_1__io_en_count.values[0] ^ 0x1L;}
  val_t T12;
  { T12 = T11 & CounterChain_ItrCounter_1__io_reset.values[0];}
  val_t T13;
  { T13 = TERNARY(T12, 0x0L, T10);}
  { CounterChain_ItrCounter_1__reset.values[0] = reset.values[0];}
  { T14.values[0] = TERNARY(CounterChain_ItrCounter_1__reset.values[0], 0x0L, T13);}
  val_t T15;
  { T15 = CounterChain_ItrCounter__currCount.values[0]+0x1L;}
  T15 = T15 & 0xffffL;
  val_t T16;
  { T16 = TERNARY(CounterChain_ItrCounter__hitMax, 0x0L, T15);}
  { CounterChain_ItrCounter__io_en_count.values[0] = CounterChain__io_en.values[0];}
  val_t T17;
  { T17 = TERNARY_1(CounterChain_ItrCounter__io_en_count.values[0], T16, CounterChain_ItrCounter__currCount.values[0]);}
  { CounterChain_ItrCounter__io_reset.values[0] = CounterChain__io_reset.values[0];}
  val_t T18;
  { T18 = CounterChain_ItrCounter__io_en_count.values[0] ^ 0x1L;}
  val_t T19;
  { T19 = T18 & CounterChain_ItrCounter__io_reset.values[0];}
  val_t T20;
  { T20 = TERNARY(T19, 0x0L, T17);}
  { CounterChain_ItrCounter__reset.values[0] = reset.values[0];}
  { T21.values[0] = TERNARY(CounterChain_ItrCounter__reset.values[0], 0x0L, T20);}
  { CounterChain_ItrCounter_2__io_cout.values[0] = CounterChain_ItrCounter_2__currCount.values[0];}
  { CounterChain__io_counters_cout_2.values[0] = CounterChain_ItrCounter_2__io_cout.values[0];}
  { CounterChain_ItrCounter_1__io_cout.values[0] = CounterChain_ItrCounter_1__currCount.values[0];}
  { CounterChain__io_counters_cout_1.values[0] = CounterChain_ItrCounter_1__io_cout.values[0];}
  { CounterChain_ItrCounter__io_cout.values[0] = CounterChain_ItrCounter__currCount.values[0];}
  { CounterChain__io_counters_cout_0.values[0] = CounterChain_ItrCounter__io_cout.values[0];}
  { CounterChain_ItrCounter_2__io_done.values[0] = CounterChain_ItrCounter_2__hitMax;}
  { CounterChain__io_counters_done_2.values[0] = CounterChain_ItrCounter_2__io_done.values[0];}
  { CounterChain__io_counters_done_1.values[0] = CounterChain_ItrCounter_1__io_done.values[0];}
  { CounterChain__io_counters_done_0.values[0] = CounterChain_ItrCounter__io_done.values[0];}
  val_t T22;
  { T22 = CounterChain_ItrCounter_2__io_en_count.values[0] & CounterChain_ItrCounter_2__io_done.values[0];}
  { CounterChain__io_done_complete.values[0] = T22;}
  val_t T23;
  { T23 = TERNARY(CounterChain__io_reset.values[0], 0x3L, CounterChain__rst.values[0]);}
  val_t T24;
  { T24 = CounterChain__rst.values[0]+0x2L;}
  T24 = T24 & 0x3ffL;
  val_t T25;
  { T25 = CounterChain__io_reset.values[0] ^ 0x1L;}
  val_t T26;
  { T26 = TERNARY_1(T25, T24, T23);}
  { T27.values[0] = TERNARY(reset.values[0], 0x0L, T26);}
  val_t T28;
  { T28 = CounterChain__rst.values[0] | 0x0L << 10;}
  { CounterChain__io_d.values[0] = T28;}
}


void CounterChain_t::clock_hi ( dat_t<1> reset ) {
  dat_t<16> CounterChain_ItrCounter_2__currCount__shadow = T7;
  dat_t<16> CounterChain_ItrCounter_1__currCount__shadow = T14;
  dat_t<16> CounterChain_ItrCounter__currCount__shadow = T21;
  dat_t<10> CounterChain__rst__shadow = T27;
  CounterChain_ItrCounter_2__currCount = T7;
  CounterChain_ItrCounter_1__currCount = T14;
  CounterChain_ItrCounter__currCount = T21;
  CounterChain__rst = T27;
}


void CounterChain_api_t::init_sim_data (  ) {
  sim_data.inputs.clear();
  sim_data.outputs.clear();
  sim_data.signals.clear();
  CounterChain_t* mod = dynamic_cast<CounterChain_t*>(module);
  assert(mod);
  sim_data.inputs.push_back(new dat_api<16>(&mod->CounterChain__io_counters_max_2));
  sim_data.inputs.push_back(new dat_api<16>(&mod->CounterChain__io_counters_max_1));
  sim_data.inputs.push_back(new dat_api<16>(&mod->CounterChain__io_counters_max_0));
  sim_data.inputs.push_back(new dat_api<1>(&mod->CounterChain__io_en));
  sim_data.inputs.push_back(new dat_api<1>(&mod->CounterChain__io_reset));
  sim_data.outputs.push_back(new dat_api<16>(&mod->CounterChain__io_counters_cout_2));
  sim_data.outputs.push_back(new dat_api<16>(&mod->CounterChain__io_counters_cout_1));
  sim_data.outputs.push_back(new dat_api<16>(&mod->CounterChain__io_counters_cout_0));
  sim_data.outputs.push_back(new dat_api<1>(&mod->CounterChain__io_counters_done_2));
  sim_data.outputs.push_back(new dat_api<1>(&mod->CounterChain__io_counters_done_1));
  sim_data.outputs.push_back(new dat_api<1>(&mod->CounterChain__io_counters_done_0));
  sim_data.outputs.push_back(new dat_api<1>(&mod->CounterChain__io_done_complete));
  sim_data.outputs.push_back(new dat_api<16>(&mod->CounterChain__io_d));
  sim_data.signals.push_back(new dat_api<16>(&mod->CounterChain_ItrCounter_2__io_max));
  sim_data.signal_map["CounterChain.ItrCounter_2.io_max"] = 0;
  sim_data.signals.push_back(new dat_api<16>(&mod->CounterChain_ItrCounter_1__io_max));
  sim_data.signal_map["CounterChain.ItrCounter_1.io_max"] = 1;
  sim_data.signals.push_back(new dat_api<1>(&mod->CounterChain_ItrCounter_1__io_done));
  sim_data.signal_map["CounterChain.ItrCounter_1.io_done"] = 2;
  sim_data.signals.push_back(new dat_api<16>(&mod->CounterChain_ItrCounter__io_max));
  sim_data.signal_map["CounterChain.ItrCounter.io_max"] = 3;
  sim_data.signals.push_back(new dat_api<1>(&mod->CounterChain_ItrCounter__io_done));
  sim_data.signal_map["CounterChain.ItrCounter.io_done"] = 4;
  sim_data.signals.push_back(new dat_api<1>(&mod->CounterChain_ItrCounter_2__io_en_count));
  sim_data.signal_map["CounterChain.ItrCounter_2.io_en_count"] = 5;
  sim_data.signals.push_back(new dat_api<1>(&mod->CounterChain_ItrCounter_2__io_reset));
  sim_data.signal_map["CounterChain.ItrCounter_2.io_reset"] = 6;
  sim_data.signals.push_back(new dat_api<1>(&mod->CounterChain_ItrCounter_2__reset));
  sim_data.signal_map["CounterChain.ItrCounter_2.reset"] = 7;
  sim_data.signals.push_back(new dat_api<16>(&mod->CounterChain_ItrCounter_2__currCount));
  sim_data.signal_map["CounterChain.ItrCounter_2.currCount"] = 8;
  sim_data.signals.push_back(new dat_api<1>(&mod->CounterChain_ItrCounter_1__io_en_count));
  sim_data.signal_map["CounterChain.ItrCounter_1.io_en_count"] = 9;
  sim_data.signals.push_back(new dat_api<1>(&mod->CounterChain_ItrCounter_1__io_reset));
  sim_data.signal_map["CounterChain.ItrCounter_1.io_reset"] = 10;
  sim_data.signals.push_back(new dat_api<1>(&mod->CounterChain_ItrCounter_1__reset));
  sim_data.signal_map["CounterChain.ItrCounter_1.reset"] = 11;
  sim_data.signals.push_back(new dat_api<16>(&mod->CounterChain_ItrCounter_1__currCount));
  sim_data.signal_map["CounterChain.ItrCounter_1.currCount"] = 12;
  sim_data.signals.push_back(new dat_api<1>(&mod->CounterChain_ItrCounter__io_en_count));
  sim_data.signal_map["CounterChain.ItrCounter.io_en_count"] = 13;
  sim_data.signals.push_back(new dat_api<1>(&mod->CounterChain_ItrCounter__io_reset));
  sim_data.signal_map["CounterChain.ItrCounter.io_reset"] = 14;
  sim_data.signals.push_back(new dat_api<1>(&mod->CounterChain_ItrCounter__reset));
  sim_data.signal_map["CounterChain.ItrCounter.reset"] = 15;
  sim_data.signals.push_back(new dat_api<16>(&mod->CounterChain_ItrCounter__currCount));
  sim_data.signal_map["CounterChain.ItrCounter.currCount"] = 16;
  sim_data.signals.push_back(new dat_api<16>(&mod->CounterChain_ItrCounter_2__io_cout));
  sim_data.signal_map["CounterChain.ItrCounter_2.io_cout"] = 17;
  sim_data.signals.push_back(new dat_api<16>(&mod->CounterChain_ItrCounter_1__io_cout));
  sim_data.signal_map["CounterChain.ItrCounter_1.io_cout"] = 18;
  sim_data.signals.push_back(new dat_api<16>(&mod->CounterChain_ItrCounter__io_cout));
  sim_data.signal_map["CounterChain.ItrCounter.io_cout"] = 19;
  sim_data.signals.push_back(new dat_api<1>(&mod->CounterChain_ItrCounter_2__io_done));
  sim_data.signal_map["CounterChain.ItrCounter_2.io_done"] = 20;
  sim_data.signals.push_back(new dat_api<10>(&mod->CounterChain__rst));
  sim_data.signal_map["CounterChain.rst"] = 21;
  sim_data.clk_map["clk"] = new clk_api(&mod->clk);
}
