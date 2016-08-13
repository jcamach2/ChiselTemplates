#include "MetaPipe_FSM.h"

void MetaPipe_FSM_t::init ( val_t rand_init ) {
  this->__srand(rand_init);
  MetaPipe_FSM__state.randomize(&__rand_seed);
  clk.len = 1;
  clk.cnt = 0;
  clk.values[0] = 0;
}


int MetaPipe_FSM_t::clock ( dat_t<1> reset ) {
  uint32_t min = ((uint32_t)1<<31)-1;
  if (clk.cnt < min) min = clk.cnt;
  clk.cnt-=min;
  if (clk.cnt == 0) clock_lo( reset );
  if (!reset.to_bool()) print( std::cerr );
  if (clk.cnt == 0) clock_hi( reset );
  if (clk.cnt == 0) clk.cnt = clk.len;
  return min;
}


void MetaPipe_FSM_t::print ( FILE* f ) {
}
void MetaPipe_FSM_t::print ( std::ostream& s ) {
}


void MetaPipe_FSM_t::dump_init ( FILE* f ) {
}


void MetaPipe_FSM_t::dump ( FILE* f, val_t t, dat_t<1> reset ) {
}




void MetaPipe_FSM_t::clock_lo ( dat_t<1> reset, bool assert_fire ) {
  val_t T0;
  T0 = MetaPipe_FSM__state.values[0] == 0x6L;
  val_t T1;
  T1 = MetaPipe_FSM__state.values[0] == 0x5L;
  val_t T2;
  T2 = MetaPipe_FSM__state.values[0] == 0x4L;
  val_t T3;
  { T3 = T2 | T1;}
  val_t T4;
  { T4 = T3 | T0;}
  { MetaPipe_FSM__io_en_mp_stages_2.values[0] = T4;}
  val_t T5;
  T5 = MetaPipe_FSM__state.values[0] == 0x5L;
  val_t T6;
  T6 = MetaPipe_FSM__state.values[0] == 0x4L;
  val_t T7;
  T7 = MetaPipe_FSM__state.values[0] == 0x3L;
  val_t T8;
  { T8 = T7 | T6;}
  val_t T9;
  { T9 = T8 | T5;}
  { MetaPipe_FSM__io_en_mp_stages_1.values[0] = T9;}
  val_t T10;
  T10 = MetaPipe_FSM__state.values[0] == 0x4L;
  val_t T11;
  T11 = MetaPipe_FSM__state.values[0] == 0x3L;
  val_t T12;
  T12 = MetaPipe_FSM__state.values[0] == 0x2L;
  val_t T13;
  { T13 = T12 | T11;}
  val_t T14;
  { T14 = T13 | T10;}
  { MetaPipe_FSM__io_en_mp_stages_0.values[0] = T14;}
  val_t T15;
  T15 = 0x0L == MetaPipe_FSM__state.values[0];
  val_t T16;
  { T16 = T15 & MetaPipe_FSM__io_en.values[0];}
  val_t T17;
  { T17 = TERNARY(T16, 0x1L, MetaPipe_FSM__state.values[0]);}
  val_t T18;
  T18 = 0x1L == MetaPipe_FSM__state.values[0];
  val_t T19;
  { T19 = TERNARY(T18, 0x2L, T17);}
  val_t T20;
  T20 = 0x7L == MetaPipe_FSM__state.values[0];
  val_t T21;
  { T21 = TERNARY(T20, 0x0L, T19);}
  val_t T22;
  T22 = MetaPipe_FSM__state.values[0] == 0x2L;
  val_t T23;
  { T23 = T22 & MetaPipe_FSM__io_done_mp_stages_0.values[0];}
  val_t T24;
  { T24 = TERNARY(T23, 0x3L, T21);}
  val_t T25;
  { T25 = MetaPipe_FSM__io_done_mp_stages_0.values[0] & MetaPipe_FSM__io_done_mp_stages_1.values[0];}
  val_t T26;
  T26 = MetaPipe_FSM__state.values[0] == 0x3L;
  val_t T27;
  { T27 = T26 & T25;}
  val_t T28;
  { T28 = TERNARY(T27, 0x4L, T24);}
  val_t T29;
  { T29 = MetaPipe_FSM__io_done_mp_stages_0.values[0] & MetaPipe_FSM__io_done_mp_stages_1.values[0];}
  val_t T30;
  { T30 = T29 & MetaPipe_FSM__io_done_mp_stages_2.values[0];}
  val_t T31;
  T31 = MetaPipe_FSM__state.values[0] == 0x4L;
  val_t T32;
  { T32 = T31 & T30;}
  val_t T33;
  { T33 = TERNARY(T32, 0x5L, T28);}
  val_t T34;
  { T34 = MetaPipe_FSM__io_done_mp_stages_1.values[0] & MetaPipe_FSM__io_done_mp_stages_2.values[0];}
  val_t T35;
  T35 = MetaPipe_FSM__state.values[0] == 0x5L;
  val_t T36;
  { T36 = T35 & T34;}
  val_t T37;
  { T37 = TERNARY(T36, 0x6L, T33);}
  val_t T38;
  T38 = MetaPipe_FSM__state.values[0] == 0x6L;
  val_t T39;
  { T39 = T38 & MetaPipe_FSM__io_done_mp_stages_2.values[0];}
  val_t T40;
  { T40 = TERNARY(T39, 0x7L, T37);}
  { T41.values[0] = TERNARY(reset.values[0], 0x0L, T40);}
  val_t T42;
  T42 = MetaPipe_FSM__state.values[0] == 0x7L;
  { MetaPipe_FSM__io_done.values[0] = T42;}
}


void MetaPipe_FSM_t::clock_hi ( dat_t<1> reset ) {
  dat_t<3> MetaPipe_FSM__state__shadow = T41;
  MetaPipe_FSM__state = T41;
}


void MetaPipe_FSM_api_t::init_sim_data (  ) {
  sim_data.inputs.clear();
  sim_data.outputs.clear();
  sim_data.signals.clear();
  MetaPipe_FSM_t* mod = dynamic_cast<MetaPipe_FSM_t*>(module);
  assert(mod);
  sim_data.inputs.push_back(new dat_api<1>(&mod->MetaPipe_FSM__io_en));
  sim_data.inputs.push_back(new dat_api<1>(&mod->MetaPipe_FSM__io_done_mp_stages_2));
  sim_data.inputs.push_back(new dat_api<1>(&mod->MetaPipe_FSM__io_done_mp_stages_1));
  sim_data.inputs.push_back(new dat_api<1>(&mod->MetaPipe_FSM__io_done_mp_stages_0));
  sim_data.outputs.push_back(new dat_api<1>(&mod->MetaPipe_FSM__io_en_mp_stages_2));
  sim_data.outputs.push_back(new dat_api<1>(&mod->MetaPipe_FSM__io_en_mp_stages_1));
  sim_data.outputs.push_back(new dat_api<1>(&mod->MetaPipe_FSM__io_en_mp_stages_0));
  sim_data.outputs.push_back(new dat_api<1>(&mod->MetaPipe_FSM__io_done));
  sim_data.signals.push_back(new dat_api<3>(&mod->MetaPipe_FSM__state));
  sim_data.signal_map["MetaPipe_FSM.state"] = 0;
  sim_data.clk_map["clk"] = new clk_api(&mod->clk);
}
