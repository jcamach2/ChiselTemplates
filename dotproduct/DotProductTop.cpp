#include "DotProductTop.h"

const val_t DotProductTop_t::T19[] = {0x0L, 0x0L, 0x0L, 0x0L};
const val_t DotProductTop_t::T25[] = {0x0L, 0x0L, 0x0L, 0x0L};

void DotProductTop_t::init ( val_t rand_init ) {
  this->__srand(rand_init);
  DotProductTop_counter_ItrCounter__currCount.randomize(&__rand_seed);
  DotProductTop_counter__done_complete.randomize(&__rand_seed);
  DotProductTop_dp_arith__productReg.randomize(&__rand_seed);
  DotProductTop_dp_arith__acc.randomize(&__rand_seed);
  DotProductTop_dp_ram2__reg_raddr.randomize(&__rand_seed);
  DotProductTop_dp_ram2__bRam_rw.randomize(&__rand_seed);
  DotProductTop_dp_ram1__reg_raddr.randomize(&__rand_seed);
  DotProductTop_dp_ram1__bRam_rw.randomize(&__rand_seed);
  DotProductTop_dp_FSM__prev_state.randomize(&__rand_seed);
  DotProductTop_dp_FSM__wait_done.randomize(&__rand_seed);
  DotProductTop_dp_FSM__curr_state.randomize(&__rand_seed);
  DotProductTop__delayReg.randomize(&__rand_seed);
  DotProductTop__delayReg2.randomize(&__rand_seed);
  DotProductTop__state.randomize(&__rand_seed);
  clk.len = 1;
  clk.cnt = 0;
  clk.values[0] = 0;
}


int DotProductTop_t::clock ( dat_t<1> reset ) {
  uint32_t min = ((uint32_t)1<<31)-1;
  if (clk.cnt < min) min = clk.cnt;
  clk.cnt-=min;
  if (clk.cnt == 0) clock_lo( reset );
  if (!reset.to_bool()) print( std::cerr );
  if (clk.cnt == 0) clock_hi( reset );
  if (clk.cnt == 0) clk.cnt = clk.len;
  return min;
}


void DotProductTop_t::print ( FILE* f ) {
}
void DotProductTop_t::print ( std::ostream& s ) {
}


void DotProductTop_t::dump_init ( FILE* f ) {
}


void DotProductTop_t::dump ( FILE* f, val_t t, dat_t<1> reset ) {
}




void DotProductTop_t::clock_lo ( dat_t<1> reset, bool assert_fire ) {
  val_t T0;
  { T0 = DotProductTop_counter_ItrCounter__currCount.values[0]+0x1L;}
  T0 = T0 & 0xffffL;
  { DotProductTop_counter__io_counters_max_0.values[0] = 0x4L;}
  { DotProductTop_counter_ItrCounter__io_max.values[0] = DotProductTop_counter__io_counters_max_0.values[0];}
  val_t DotProductTop_counter_ItrCounter__hitMax;
  DotProductTop_counter_ItrCounter__hitMax = DotProductTop_counter_ItrCounter__io_max.values[0]<=DotProductTop_counter_ItrCounter__currCount.values[0];
  val_t T1;
  { T1 = TERNARY(DotProductTop_counter_ItrCounter__hitMax, 0x0L, T0);}
  val_t T2;
  T2 = DotProductTop_dp_FSM__curr_state.values[0] == 0x1L;
  { DotProductTop_dp_FSM__io_pipe_enabled.values[0] = T2;}
  { DotProductTop_counter__io_en.values[0] = DotProductTop_dp_FSM__io_pipe_enabled.values[0];}
  { DotProductTop_counter_ItrCounter__io_en_count.values[0] = DotProductTop_counter__io_en.values[0];}
  val_t T3;
  { T3 = TERNARY_1(DotProductTop_counter_ItrCounter__io_en_count.values[0], T1, DotProductTop_counter_ItrCounter__currCount.values[0]);}
  val_t T4;
  T4 = DotProductTop__state.values[0] == 0x0L;
  { DotProductTop_counter__io_reset.values[0] = T4;}
  { DotProductTop_counter_ItrCounter__io_reset.values[0] = DotProductTop_counter__io_reset.values[0];}
  val_t T5;
  { T5 = DotProductTop_counter_ItrCounter__io_en_count.values[0] ^ 0x1L;}
  val_t T6;
  { T6 = T5 & DotProductTop_counter_ItrCounter__io_reset.values[0];}
  val_t T7;
  { T7 = TERNARY(T6, 0x0L, T3);}
  { DotProductTop_counter__reset.values[0] = reset.values[0];}
  { DotProductTop_counter_ItrCounter__reset.values[0] = DotProductTop_counter__reset.values[0];}
  { T8.values[0] = TERNARY(DotProductTop_counter_ItrCounter__reset.values[0], 0x0L, T7);}
  { DotProductTop_counter_ItrCounter__io_done.values[0] = DotProductTop_counter_ItrCounter__hitMax;}
  { DotProductTop_counter__io_counters_done_0.values[0] = DotProductTop_counter_ItrCounter__io_done.values[0];}
  val_t T9;
  { T9 = TERNARY(DotProductTop_counter__io_reset.values[0], 0x0L, DotProductTop_counter__done_complete.values[0]);}
  val_t T10;
  { T10 = DotProductTop_counter_ItrCounter__io_en_count.values[0] & DotProductTop_counter_ItrCounter__io_done.values[0];}
  val_t T11;
  { T11 = T10 | DotProductTop_counter__done_complete.values[0];}
  val_t T12;
  { T12 = DotProductTop_counter__io_reset.values[0] ^ 0x1L;}
  val_t T13;
  { T13 = TERNARY_1(T12, T11, T9);}
  { T14.values[0] = TERNARY(DotProductTop_counter__reset.values[0], 0x0L, T13);}
  { DotProductTop_dp_arith__io_en.values[0] = DotProductTop__delayReg2.values[0];}
  val_t T15;
  { T15 = DotProductTop_dp_arith__io_en.values[0] ^ 0x1L;}
  val_t T16;
  T16 = DotProductTop__state.values[0] == 0x0L;
  { DotProductTop_dp_arith__io_reset.values[0] = T16;}
  val_t T17;
  { T17 = DotProductTop_dp_arith__io_reset.values[0] & T15;}
  val_t T18[4];
  { T18[0] = TERNARY(T17, T19[0], DotProductTop_dp_arith__productReg.values[0]); T18[1] = TERNARY(T17, T19[1], DotProductTop_dp_arith__productReg.values[1]); T18[2] = TERNARY(T17, T19[2], DotProductTop_dp_arith__productReg.values[2]); T18[3] = TERNARY(T17, T19[3], DotProductTop_dp_arith__productReg.values[3]);}
  val_t T20;
  { T20 = DotProductTop_dp_ram2__reg_raddr.values[0];}
  T20 = T20 & 0x7L;
  val_t T21;
  { T21 = DotProductTop_dp_ram2__bRam_rw.get(T20, 0);}
  { DotProductTop_dp_ram2__io_read_out.values[0] = T21;}
  { DotProductTop_dp_arith__io_v2.values[0] = DotProductTop_dp_ram2__io_read_out.values[0];}
  val_t T22;
  { T22 = DotProductTop_dp_ram1__reg_raddr.values[0];}
  T22 = T22 & 0x7L;
  val_t T23;
  { T23 = DotProductTop_dp_ram1__bRam_rw.get(T22, 0);}
  { DotProductTop_dp_ram1__io_read_out.values[0] = T23;}
  { DotProductTop_dp_arith__io_v1.values[0] = DotProductTop_dp_ram1__io_read_out.values[0];}
  val_t DotProductTop_dp_arith__productV;
  DotProductTop_dp_arith__productV = DotProductTop_dp_arith__io_v1.values[0] * DotProductTop_dp_arith__io_v2.values[0];
  val_t T24[4];
  { T24[0] = DotProductTop_dp_arith__productV | T25[0] << 32; T24[1] = T25[0] >> 32 | T25[1] << 32; T24[2] = T25[1] >> 32 | T25[2] << 32; T24[3] = T25[2] >> 32 | T25[3] << 32;}
  val_t T26;
  { T26 = T17 ^ 0x1L;}
  val_t T27[4];
  { T27[0] = TERNARY_1(T26, T24[0], T18[0]); T27[1] = TERNARY_1(T26, T24[1], T18[1]); T27[2] = TERNARY_1(T26, T24[2], T18[2]); T27[3] = TERNARY_1(T26, T24[3], T18[3]);}
  { DotProductTop_dp_arith__reset.values[0] = reset.values[0];}
  { T28.values[0] = TERNARY(DotProductTop_dp_arith__reset.values[0], T19[0], T27[0]); T28.values[1] = TERNARY(DotProductTop_dp_arith__reset.values[0], T19[1], T27[1]); T28.values[2] = TERNARY(DotProductTop_dp_arith__reset.values[0], T19[2], T27[2]); T28.values[3] = TERNARY(DotProductTop_dp_arith__reset.values[0], T19[3], T27[3]);}
  val_t T29[4];
  { T29[0] = TERNARY_1(DotProductTop_dp_arith__io_reset.values[0], DotProductTop_dp_arith__productReg.values[0], DotProductTop_dp_arith__acc.values[0]); T29[1] = TERNARY_1(DotProductTop_dp_arith__io_reset.values[0], DotProductTop_dp_arith__productReg.values[1], DotProductTop_dp_arith__acc.values[1]); T29[2] = TERNARY_1(DotProductTop_dp_arith__io_reset.values[0], DotProductTop_dp_arith__productReg.values[2], DotProductTop_dp_arith__acc.values[2]); T29[3] = TERNARY_1(DotProductTop_dp_arith__io_reset.values[0], DotProductTop_dp_arith__productReg.values[3], DotProductTop_dp_arith__acc.values[3]);}
  val_t T30[4];
  { T30[0] = DotProductTop_dp_arith__acc.values[0]+DotProductTop_dp_arith__productReg.values[0]; val_t __c = DotProductTop_dp_arith__acc.values[0]+DotProductTop_dp_arith__productReg.values[0] < DotProductTop_dp_arith__acc.values[0]; T30[1] = DotProductTop_dp_arith__acc.values[1]+DotProductTop_dp_arith__productReg.values[1]+__c; __c = DotProductTop_dp_arith__acc.values[1]+DotProductTop_dp_arith__productReg.values[1] < DotProductTop_dp_arith__acc.values[1] || T30[1] < __c; T30[2] = DotProductTop_dp_arith__acc.values[2]+DotProductTop_dp_arith__productReg.values[2]+__c; __c = DotProductTop_dp_arith__acc.values[2]+DotProductTop_dp_arith__productReg.values[2] < DotProductTop_dp_arith__acc.values[2] || T30[2] < __c; T30[3] = DotProductTop_dp_arith__acc.values[3]+DotProductTop_dp_arith__productReg.values[3]+__c;}
  val_t T31;
  { T31 = DotProductTop_dp_arith__io_reset.values[0] ^ 0x1L;}
  val_t T32;
  { T32 = T31 & DotProductTop_dp_arith__io_en.values[0];}
  val_t T33[4];
  { T33[0] = TERNARY_1(T32, T30[0], T29[0]); T33[1] = TERNARY_1(T32, T30[1], T29[1]); T33[2] = TERNARY_1(T32, T30[2], T29[2]); T33[3] = TERNARY_1(T32, T30[3], T29[3]);}
  { T34.values[0] = TERNARY(DotProductTop_dp_arith__reset.values[0], T19[0], T33[0]); T34.values[1] = TERNARY(DotProductTop_dp_arith__reset.values[0], T19[1], T33[1]); T34.values[2] = TERNARY(DotProductTop_dp_arith__reset.values[0], T19[2], T33[2]); T34.values[3] = TERNARY(DotProductTop_dp_arith__reset.values[0], T19[3], T33[3]);}
  { DotProductTop_counter_ItrCounter__io_vec_cout_0.values[0] = DotProductTop_counter_ItrCounter__currCount.values[0];}
  { DotProductTop_counter__io_counters_cout_0_0.values[0] = DotProductTop_counter_ItrCounter__io_vec_cout_0.values[0];}
  { DotProductTop_dp_ram2__io_read_addr.values[0] = DotProductTop_counter__io_counters_cout_0_0.values[0];}
  { DotProductTop_dp_ram2__io_write_data.values[0] = DotProductTop__io_input_data.values[0];}
  val_t T35;
  { T35 = DotProductTop__io_input_addr.values[0] | 0x0L << 5;}
  { DotProductTop_dp_ram2__io_write_addr.values[0] = T35;}
  val_t T36;
  { T36 = DotProductTop_dp_ram2__io_write_addr.values[0];}
  T36 = T36 & 0x7L;
  val_t T37;
  T37 = T36<0x5L;
  val_t T38;
  T38 = DotProductTop__state.values[0] == 0x0L;
  { DotProductTop_dp_ram2__io_write_en.values[0] = T38;}
  { T39.values[0] = DotProductTop_dp_ram2__io_write_en.values[0] & T37;}
  { T40.values[0] = DotProductTop_dp_ram2__io_write_addr.values[0];}
  T40.values[0] = T40.values[0] & 0x7L;
  { DotProductTop_dp_ram1__io_read_addr.values[0] = DotProductTop_counter__io_counters_cout_0_0.values[0];}
  { DotProductTop_dp_ram1__io_write_data.values[0] = DotProductTop__io_input_data.values[0];}
  val_t T41;
  { T41 = DotProductTop__io_input_addr.values[0] | 0x0L << 5;}
  { DotProductTop_dp_ram1__io_write_addr.values[0] = T41;}
  val_t T42;
  { T42 = DotProductTop_dp_ram1__io_write_addr.values[0];}
  T42 = T42 & 0x7L;
  val_t T43;
  T43 = T42<0x5L;
  val_t T44;
  T44 = DotProductTop__state.values[0] == 0x0L;
  { DotProductTop_dp_ram1__io_write_en.values[0] = T44;}
  { T45.values[0] = DotProductTop_dp_ram1__io_write_en.values[0] & T43;}
  { T46.values[0] = DotProductTop_dp_ram1__io_write_addr.values[0];}
  T46.values[0] = T46.values[0] & 0x7L;
  val_t DotProductTop_dp_FSM__state_wait;
  DotProductTop_dp_FSM__state_wait = DotProductTop_dp_FSM__curr_state.values[0] == 0x2L;
  val_t DotProductTop_dp_FSM__state_en;
  DotProductTop_dp_FSM__state_en = DotProductTop_dp_FSM__prev_state.values[0] == 0x1L;
  val_t DotProductTop_dp_FSM__pipe_pulse;
  { DotProductTop_dp_FSM__pipe_pulse = DotProductTop_dp_FSM__state_en & DotProductTop_dp_FSM__state_wait;}
  { DotProductTop_dp_FSM__reset.values[0] = reset.values[0];}
  { T47.values[0] = TERNARY(DotProductTop_dp_FSM__reset.values[0], 0x0L, DotProductTop_dp_FSM__pipe_pulse);}
  val_t T48;
  T48 = DotProductTop__state.values[0] == 0x1L;
  { DotProductTop_dp_FSM__io_en.values[0] = T48;}
  val_t T49;
  T49 = 0x0L == DotProductTop_dp_FSM__curr_state.values[0];
  val_t T50;
  { T50 = T49 & DotProductTop_dp_FSM__io_en.values[0];}
  val_t T51;
  { T51 = TERNARY(T50, 0x1L, DotProductTop_dp_FSM__curr_state.values[0]);}
  val_t T52;
  { T52 = DotProductTop_counter_ItrCounter__io_en_count.values[0] & DotProductTop_counter_ItrCounter__io_done.values[0];}
  val_t T53;
  { T53 = T52 | DotProductTop_counter__done_complete.values[0];}
  { DotProductTop_counter__io_done_complete.values[0] = T53;}
  { DotProductTop_dp_FSM__io_counter_done.values[0] = DotProductTop_counter__io_done_complete.values[0];}
  val_t T54;
  T54 = 0x1L == DotProductTop_dp_FSM__curr_state.values[0];
  val_t T55;
  { T55 = T54 & DotProductTop_dp_FSM__io_counter_done.values[0];}
  val_t T56;
  { T56 = TERNARY(T55, 0x2L, T51);}
  val_t T57;
  T57 = 0x2L == DotProductTop_dp_FSM__curr_state.values[0];
  val_t T58;
  { T58 = T57 & DotProductTop_dp_FSM__wait_done.values[0];}
  val_t T59;
  { T59 = TERNARY(T58, 0x3L, T56);}
  val_t T60;
  T60 = 0x3L == DotProductTop_dp_FSM__curr_state.values[0];
  val_t T61;
  { T61 = TERNARY(T60, 0x0L, T59);}
  { T62.values[0] = TERNARY(DotProductTop_dp_FSM__reset.values[0], 0x0L, T61);}
  { DotProductTop__io_status.values[0] = DotProductTop__state.values[0];}
  { DotProductTop_dp_arith__io_dotproduct.values[0] = DotProductTop_dp_arith__acc.values[0]; DotProductTop_dp_arith__io_dotproduct.values[1] = DotProductTop_dp_arith__acc.values[1]; DotProductTop_dp_arith__io_dotproduct.values[2] = DotProductTop_dp_arith__acc.values[2]; DotProductTop_dp_arith__io_dotproduct.values[3] = DotProductTop_dp_arith__acc.values[3];}
  val_t T63;
  { T63 = DotProductTop_dp_arith__io_dotproduct.values[0];}
  T63 = T63 & 0xffffL;
  { DotProductTop__io_result.values[0] = T63;}
  { T64.values[0] = TERNARY(reset.values[0], 0x0L, DotProductTop_dp_FSM__io_pipe_enabled.values[0]);}
  { T65.values[0] = TERNARY(reset.values[0], 0x0L, DotProductTop__delayReg.values[0]);}
  val_t T66;
  T66 = 0x0L == DotProductTop__state.values[0];
  val_t T67;
  { T67 = T66 & DotProductTop__io_cmd.values[0];}
  val_t T68;
  { T68 = TERNARY(T67, 0x1L, DotProductTop__state.values[0]);}
  val_t T69;
  T69 = DotProductTop_dp_FSM__curr_state.values[0] == 0x3L;
  { DotProductTop_dp_FSM__io_done.values[0] = T69;}
  val_t T70;
  T70 = 0x1L == DotProductTop__state.values[0];
  val_t T71;
  { T71 = T70 & DotProductTop_dp_FSM__io_done.values[0];}
  val_t T72;
  { T72 = TERNARY(T71, 0x2L, T68);}
  val_t T73;
  T73 = 0x2L == DotProductTop__state.values[0];
  val_t T74;
  { T74 = TERNARY(T73, 0x3L, T72);}
  val_t T75;
  T75 = 0x3L == DotProductTop__state.values[0];
  val_t T76;
  { T76 = TERNARY(T75, 0x0L, T74);}
  { T77.values[0] = TERNARY(reset.values[0], 0x0L, T76);}
}


void DotProductTop_t::clock_hi ( dat_t<1> reset ) {
  dat_t<16> DotProductTop_counter_ItrCounter__currCount__shadow = T8;
  dat_t<1> DotProductTop_counter__done_complete__shadow = T14;
  dat_t<256> DotProductTop_dp_arith__productReg__shadow = T28;
  dat_t<256> DotProductTop_dp_arith__acc__shadow = T34;
  dat_t<16> DotProductTop_dp_ram2__reg_raddr__shadow = DotProductTop_dp_ram2__io_read_addr;
  { if (T39.values[0]) DotProductTop_dp_ram2__bRam_rw.put(T40.values[0], 0, DotProductTop_dp_ram2__io_write_data.values[0]);}
  dat_t<16> DotProductTop_dp_ram1__reg_raddr__shadow = DotProductTop_dp_ram1__io_read_addr;
  { if (T45.values[0]) DotProductTop_dp_ram1__bRam_rw.put(T46.values[0], 0, DotProductTop_dp_ram1__io_write_data.values[0]);}
  dat_t<2> DotProductTop_dp_FSM__prev_state__shadow = DotProductTop_dp_FSM__curr_state;
  dat_t<1> DotProductTop_dp_FSM__wait_done__shadow = T47;
  dat_t<2> DotProductTop_dp_FSM__curr_state__shadow = T62;
  dat_t<1> DotProductTop__delayReg__shadow = T64;
  dat_t<1> DotProductTop__delayReg2__shadow = T65;
  dat_t<2> DotProductTop__state__shadow = T77;
  DotProductTop_counter_ItrCounter__currCount = T8;
  DotProductTop_counter__done_complete = T14;
  DotProductTop_dp_arith__productReg = T28;
  DotProductTop_dp_arith__acc = T34;
  DotProductTop_dp_ram2__reg_raddr = DotProductTop_dp_ram2__io_read_addr;
  DotProductTop_dp_ram1__reg_raddr = DotProductTop_dp_ram1__io_read_addr;
  DotProductTop_dp_FSM__prev_state = DotProductTop_dp_FSM__prev_state__shadow;
  DotProductTop_dp_FSM__wait_done = T47;
  DotProductTop_dp_FSM__curr_state = T62;
  DotProductTop__delayReg = T64;
  DotProductTop__delayReg2 = T65;
  DotProductTop__state = T77;
}


void DotProductTop_api_t::init_sim_data (  ) {
  sim_data.inputs.clear();
  sim_data.outputs.clear();
  sim_data.signals.clear();
  DotProductTop_t* mod = dynamic_cast<DotProductTop_t*>(module);
  assert(mod);
  sim_data.inputs.push_back(new dat_api<1>(&mod->DotProductTop__io_cmd));
  sim_data.inputs.push_back(new dat_api<16>(&mod->DotProductTop__io_input_data));
  sim_data.inputs.push_back(new dat_api<5>(&mod->DotProductTop__io_input_addr));
  sim_data.outputs.push_back(new dat_api<2>(&mod->DotProductTop__io_status));
  sim_data.outputs.push_back(new dat_api<16>(&mod->DotProductTop__io_result));
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_counter__io_counters_max_0));
  sim_data.signal_map["DotProductTop.counter.io_counters_max_0"] = 0;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_counter_ItrCounter__io_max));
  sim_data.signal_map["DotProductTop.counter.ItrCounter.io_max"] = 1;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_FSM__io_pipe_enabled));
  sim_data.signal_map["DotProductTop.dp_FSM.io_pipe_enabled"] = 2;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter__io_en));
  sim_data.signal_map["DotProductTop.counter.io_en"] = 3;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter_ItrCounter__io_en_count));
  sim_data.signal_map["DotProductTop.counter.ItrCounter.io_en_count"] = 4;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter__io_reset));
  sim_data.signal_map["DotProductTop.counter.io_reset"] = 5;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter_ItrCounter__io_reset));
  sim_data.signal_map["DotProductTop.counter.ItrCounter.io_reset"] = 6;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter__reset));
  sim_data.signal_map["DotProductTop.counter.reset"] = 7;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter_ItrCounter__reset));
  sim_data.signal_map["DotProductTop.counter.ItrCounter.reset"] = 8;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_counter_ItrCounter__currCount));
  sim_data.signal_map["DotProductTop.counter.ItrCounter.currCount"] = 9;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter_ItrCounter__io_done));
  sim_data.signal_map["DotProductTop.counter.ItrCounter.io_done"] = 10;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter__io_counters_done_0));
  sim_data.signal_map["DotProductTop.counter.io_counters_done_0"] = 11;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter__done_complete));
  sim_data.signal_map["DotProductTop.counter.done_complete"] = 12;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_arith__io_en));
  sim_data.signal_map["DotProductTop.dp_arith.io_en"] = 13;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_arith__io_reset));
  sim_data.signal_map["DotProductTop.dp_arith.io_reset"] = 14;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2__io_read_out));
  sim_data.signal_map["DotProductTop.dp_ram2.io_read_out"] = 15;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_arith__io_v2));
  sim_data.signal_map["DotProductTop.dp_arith.io_v2"] = 16;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1__io_read_out));
  sim_data.signal_map["DotProductTop.dp_ram1.io_read_out"] = 17;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_arith__io_v1));
  sim_data.signal_map["DotProductTop.dp_arith.io_v1"] = 18;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_arith__reset));
  sim_data.signal_map["DotProductTop.dp_arith.reset"] = 19;
  sim_data.signals.push_back(new dat_api<256>(&mod->DotProductTop_dp_arith__productReg));
  sim_data.signal_map["DotProductTop.dp_arith.productReg"] = 20;
  sim_data.signals.push_back(new dat_api<256>(&mod->DotProductTop_dp_arith__acc));
  sim_data.signal_map["DotProductTop.dp_arith.acc"] = 21;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_counter_ItrCounter__io_vec_cout_0));
  sim_data.signal_map["DotProductTop.counter.ItrCounter.io_vec_cout_0"] = 22;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_counter__io_counters_cout_0_0));
  sim_data.signal_map["DotProductTop.counter.io_counters_cout_0_0"] = 23;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2__io_read_addr));
  sim_data.signal_map["DotProductTop.dp_ram2.io_read_addr"] = 24;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2__reg_raddr));
  sim_data.signal_map["DotProductTop.dp_ram2.reg_raddr"] = 25;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2__io_write_data));
  sim_data.signal_map["DotProductTop.dp_ram2.io_write_data"] = 26;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2__io_write_addr));
  sim_data.signal_map["DotProductTop.dp_ram2.io_write_addr"] = 27;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_ram2__io_write_en));
  sim_data.signal_map["DotProductTop.dp_ram2.io_write_en"] = 28;
  std::string DotProductTop_dp_ram2__bRam_rw_path = "DotProductTop.dp_ram2.bRam_rw";
  for (size_t i = 0 ; i < 5 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2__bRam_rw.contents[i]));
    sim_data.signal_map[DotProductTop_dp_ram2__bRam_rw_path+"["+itos(i,false)+"]"] = 29+i;
  }
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1__io_read_addr));
  sim_data.signal_map["DotProductTop.dp_ram1.io_read_addr"] = 34;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1__reg_raddr));
  sim_data.signal_map["DotProductTop.dp_ram1.reg_raddr"] = 35;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1__io_write_data));
  sim_data.signal_map["DotProductTop.dp_ram1.io_write_data"] = 36;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1__io_write_addr));
  sim_data.signal_map["DotProductTop.dp_ram1.io_write_addr"] = 37;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_ram1__io_write_en));
  sim_data.signal_map["DotProductTop.dp_ram1.io_write_en"] = 38;
  std::string DotProductTop_dp_ram1__bRam_rw_path = "DotProductTop.dp_ram1.bRam_rw";
  for (size_t i = 0 ; i < 5 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1__bRam_rw.contents[i]));
    sim_data.signal_map[DotProductTop_dp_ram1__bRam_rw_path+"["+itos(i,false)+"]"] = 39+i;
  }
  sim_data.signals.push_back(new dat_api<2>(&mod->DotProductTop_dp_FSM__prev_state));
  sim_data.signal_map["DotProductTop.dp_FSM.prev_state"] = 44;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_FSM__reset));
  sim_data.signal_map["DotProductTop.dp_FSM.reset"] = 45;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_FSM__wait_done));
  sim_data.signal_map["DotProductTop.dp_FSM.wait_done"] = 46;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_FSM__io_en));
  sim_data.signal_map["DotProductTop.dp_FSM.io_en"] = 47;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter__io_done_complete));
  sim_data.signal_map["DotProductTop.counter.io_done_complete"] = 48;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_FSM__io_counter_done));
  sim_data.signal_map["DotProductTop.dp_FSM.io_counter_done"] = 49;
  sim_data.signals.push_back(new dat_api<2>(&mod->DotProductTop_dp_FSM__curr_state));
  sim_data.signal_map["DotProductTop.dp_FSM.curr_state"] = 50;
  sim_data.signals.push_back(new dat_api<256>(&mod->DotProductTop_dp_arith__io_dotproduct));
  sim_data.signal_map["DotProductTop.dp_arith.io_dotproduct"] = 51;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop__delayReg));
  sim_data.signal_map["DotProductTop.delayReg"] = 52;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop__delayReg2));
  sim_data.signal_map["DotProductTop.delayReg2"] = 53;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_FSM__io_done));
  sim_data.signal_map["DotProductTop.dp_FSM.io_done"] = 54;
  sim_data.signals.push_back(new dat_api<2>(&mod->DotProductTop__state));
  sim_data.signal_map["DotProductTop.state"] = 55;
  sim_data.clk_map["clk"] = new clk_api(&mod->clk);
}
