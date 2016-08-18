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
  { T0 = MetaPipe_FSM__io_done_mp_stages_2.values[0] ^ 0x1L;}
  val_t T1;
  T1 = MetaPipe_FSM__state.values[0] == 0x6L;
  val_t T2;
  T2 = MetaPipe_FSM__state.values[0] == 0x5L;
  val_t T3;
  T3 = MetaPipe_FSM__state.values[0] == 0x4L;
  val_t T4;
  { T4 = T3 | T2;}
  val_t T5;
  { T5 = T4 | T1;}
  val_t T6;
  { T6 = T5 & T0;}
  { MetaPipe_FSM__io_en_mp_stages_2.values[0] = T6;}
  val_t T7;
  { T7 = MetaPipe_FSM__io_done_mp_stages_1.values[0] ^ 0x1L;}
  val_t T8;
  T8 = MetaPipe_FSM__state.values[0] == 0x5L;
  val_t T9;
  T9 = MetaPipe_FSM__state.values[0] == 0x4L;
  val_t T10;
  T10 = MetaPipe_FSM__state.values[0] == 0x3L;
  val_t T11;
  { T11 = T10 | T9;}
  val_t T12;
  { T12 = T11 | T8;}
  val_t T13;
  { T13 = T12 & T7;}
  { MetaPipe_FSM__io_en_mp_stages_1.values[0] = T13;}
  val_t T14;
  { T14 = MetaPipe_FSM__io_done_mp_stages_0.values[0] ^ 0x1L;}
  val_t T15;
  T15 = MetaPipe_FSM__state.values[0] == 0x4L;
  val_t T16;
  T16 = MetaPipe_FSM__state.values[0] == 0x3L;
  val_t T17;
  T17 = MetaPipe_FSM__state.values[0] == 0x2L;
  val_t T18;
  { T18 = T17 | T16;}
  val_t T19;
  { T19 = T18 | T15;}
  val_t T20;
  { T20 = T19 & T14;}
  { MetaPipe_FSM__io_en_mp_stages_0.values[0] = T20;}
  val_t T21;
  T21 = MetaPipe_FSM__state.values[0] == 0x7L;
  { MetaPipe_FSM__io_done.values[0] = T21;}
  val_t T22;
  T22 = MetaPipe_FSM__state.values[0] == 0x1L;
  { MetaPipe_FSM__io_reset.values[0] = T22;}
  val_t T23;
  T23 = 0x0L == MetaPipe_FSM__state.values[0];
  val_t T24;
  { T24 = T23 & MetaPipe_FSM__io_en.values[0];}
  val_t T25;
  { T25 = TERNARY(T24, 0x1L, MetaPipe_FSM__state.values[0]);}
  val_t T26;
  T26 = 0x1L == MetaPipe_FSM__state.values[0];
  val_t T27;
  { T27 = TERNARY(T26, 0x2L, T25);}
  val_t T28;
  T28 = 0x7L == MetaPipe_FSM__state.values[0];
  val_t T29;
  { T29 = TERNARY(T28, 0x0L, T27);}
  val_t T30;
  T30 = MetaPipe_FSM__state.values[0] == 0x2L;
  val_t T31;
  { T31 = T30 & MetaPipe_FSM__io_done_mp_stages_0.values[0];}
  val_t T32;
  { T32 = TERNARY(T31, 0x3L, T29);}
  val_t T33;
  { T33 = MetaPipe_FSM__io_done_mp_stages_0.values[0] & MetaPipe_FSM__io_done_mp_stages_1.values[0];}
  val_t T34;
  T34 = MetaPipe_FSM__state.values[0] == 0x3L;
  val_t T35;
  { T35 = T34 & T33;}
  val_t T36;
  { T36 = TERNARY(T35, 0x4L, T32);}
  val_t T37;
  { T37 = MetaPipe_FSM__io_done_mp_stages_0.values[0] & MetaPipe_FSM__io_done_mp_stages_1.values[0];}
  val_t MetaPipe_FSM__all_pipes_done;
  { MetaPipe_FSM__all_pipes_done = T37 & MetaPipe_FSM__io_done_mp_stages_2.values[0];}
  val_t T38;
  { T38 = MetaPipe_FSM__io_done_complete.values[0] & MetaPipe_FSM__all_pipes_done;}
  val_t T39;
  T39 = MetaPipe_FSM__state.values[0] == 0x4L;
  val_t T40;
  { T40 = T39 & T38;}
  val_t T41;
  { T41 = TERNARY(T40, 0x5L, T36);}
  val_t T42;
  { T42 = MetaPipe_FSM__io_done_mp_stages_1.values[0] & MetaPipe_FSM__io_done_mp_stages_2.values[0];}
  val_t T43;
  T43 = MetaPipe_FSM__state.values[0] == 0x5L;
  val_t T44;
  { T44 = T43 & T42;}
  val_t T45;
  { T45 = TERNARY(T44, 0x6L, T41);}
  val_t T46;
  T46 = MetaPipe_FSM__state.values[0] == 0x6L;
  val_t T47;
  { T47 = T46 & MetaPipe_FSM__io_done_mp_stages_2.values[0];}
  val_t T48;
  { T48 = TERNARY(T47, 0x7L, T45);}
  { T49.values[0] = TERNARY(reset.values[0], 0x0L, T48);}
  val_t T50;
  T50 = MetaPipe_FSM__state.values[0] == 0x0L;
  { MetaPipe_FSM__io_complete_reset.values[0] = T50;}
}


void MetaPipe_FSM_t::clock_hi ( dat_t<1> reset ) {
  dat_t<3> MetaPipe_FSM__state__shadow = T49;
  MetaPipe_FSM__state = T49;
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
  sim_data.inputs.push_back(new dat_api<1>(&mod->MetaPipe_FSM__io_done_complete));
  sim_data.outputs.push_back(new dat_api<1>(&mod->MetaPipe_FSM__io_en_mp_stages_2));
  sim_data.outputs.push_back(new dat_api<1>(&mod->MetaPipe_FSM__io_en_mp_stages_1));
  sim_data.outputs.push_back(new dat_api<1>(&mod->MetaPipe_FSM__io_en_mp_stages_0));
  sim_data.outputs.push_back(new dat_api<1>(&mod->MetaPipe_FSM__io_done));
  sim_data.outputs.push_back(new dat_api<1>(&mod->MetaPipe_FSM__io_reset));
  sim_data.outputs.push_back(new dat_api<1>(&mod->MetaPipe_FSM__io_complete_reset));
  sim_data.signals.push_back(new dat_api<3>(&mod->MetaPipe_FSM__state));
  sim_data.signal_map["MetaPipe_FSM.state"] = 0;
  sim_data.clk_map["clk"] = new clk_api(&mod->clk);
}
