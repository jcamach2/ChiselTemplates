#include "DotProductTop.h"

const val_t DotProductTop_t::T16[] = {0x0L, 0x0L, 0x0L, 0x0L};
const val_t DotProductTop_t::T22[] = {0x0L, 0x0L, 0x0L, 0x0L};

void DotProductTop_t::init ( val_t rand_init ) {
  this->__srand(rand_init);
  DotProductTop_counter__currCount.randomize(&__rand_seed);
  DotProductTop_dp_arith__productReg.randomize(&__rand_seed);
  DotProductTop_dp_arith__acc.randomize(&__rand_seed);
  DotProductTop_dp_ram2__reg_raddr.randomize(&__rand_seed);
  DotProductTop_dp_ram2__bRam_rw.randomize(&__rand_seed);
  DotProductTop_dp_ram1__reg_raddr.randomize(&__rand_seed);
  DotProductTop_dp_ram1__bRam_rw.randomize(&__rand_seed);
  DotProductTop_dpBlock__pipe_state.randomize(&__rand_seed);
  DotProductTop__delayReg.randomize(&__rand_seed);
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
  { T0 = DotProductTop_counter__currCount.values[0]+0x1L;}
  T0 = T0 & 0xffffL;
  { DotProductTop_counter__io_max.values[0] = 0x5L;}
  val_t T1;
  { T1 = DotProductTop_counter__io_max.values[0]-0x1L;}
  T1 = T1 & 0xffffL;
  val_t T2;
  { T2 = DotProductTop_counter__io_max.values[0]-0x1L;}
  T2 = T2 & 0xffffL;
  val_t DotProductTop_counter__hitMax;
  DotProductTop_counter__hitMax = T2<=DotProductTop_counter__currCount.values[0];
  val_t T3;
  { T3 = TERNARY_1(DotProductTop_counter__hitMax, T1, T0);}
  val_t T4;
  T4 = DotProductTop_dpBlock__pipe_state.values[0] == 0x1L;
  { DotProductTop_dpBlock__io_run.values[0] = T4;}
  val_t T5;
  T5 = DotProductTop__state.values[0] == 0x1L;
  val_t T6;
  { T6 = T5 & DotProductTop_dpBlock__io_run.values[0];}
  { DotProductTop_counter__io_en_count.values[0] = T6;}
  val_t T7;
  { T7 = TERNARY_1(DotProductTop_counter__io_en_count.values[0], T3, DotProductTop_counter__currCount.values[0]);}
  val_t T8;
  T8 = DotProductTop_dpBlock__pipe_state.values[0] == 0x0L;
  { DotProductTop_dpBlock__io_pipe_reset.values[0] = T8;}
  val_t T9;
  T9 = DotProductTop__state.values[0] == 0x0L;
  val_t T10;
  { T10 = T9 | DotProductTop_dpBlock__io_pipe_reset.values[0];}
  { DotProductTop_counter__io_reset.values[0] = T10;}
  val_t T11;
  { T11 = DotProductTop_counter__io_en_count.values[0] ^ 0x1L;}
  val_t T12;
  { T12 = T11 & DotProductTop_counter__io_reset.values[0];}
  val_t T13;
  { T13 = TERNARY(T12, 0x0L, T7);}
  { DotProductTop_counter__reset.values[0] = reset.values[0];}
  { T14.values[0] = TERNARY(DotProductTop_counter__reset.values[0], 0x0L, T13);}
  { DotProductTop_dp_arith__io_reset.values[0] = 0x0L;}
  val_t T15[4];
  { T15[0] = TERNARY(DotProductTop_dp_arith__io_reset.values[0], T16[0], DotProductTop_dp_arith__productReg.values[0]); T15[1] = TERNARY(DotProductTop_dp_arith__io_reset.values[0], T16[1], DotProductTop_dp_arith__productReg.values[1]); T15[2] = TERNARY(DotProductTop_dp_arith__io_reset.values[0], T16[2], DotProductTop_dp_arith__productReg.values[2]); T15[3] = TERNARY(DotProductTop_dp_arith__io_reset.values[0], T16[3], DotProductTop_dp_arith__productReg.values[3]);}
  val_t T17;
  { T17 = DotProductTop_dp_ram2__reg_raddr.values[0];}
  T17 = T17 & 0x7L;
  val_t T18;
  { T18 = DotProductTop_dp_ram2__bRam_rw.get(T17, 0);}
  { DotProductTop_dp_ram2__io_read_out.values[0] = T18;}
  { DotProductTop_dp_arith__io_v2.values[0] = DotProductTop_dp_ram2__io_read_out.values[0];}
  val_t T19;
  { T19 = DotProductTop_dp_ram1__reg_raddr.values[0];}
  T19 = T19 & 0x7L;
  val_t T20;
  { T20 = DotProductTop_dp_ram1__bRam_rw.get(T19, 0);}
  { DotProductTop_dp_ram1__io_read_out.values[0] = T20;}
  { DotProductTop_dp_arith__io_v1.values[0] = DotProductTop_dp_ram1__io_read_out.values[0];}
  val_t DotProductTop_dp_arith__productV;
  DotProductTop_dp_arith__productV = DotProductTop_dp_arith__io_v1.values[0] * DotProductTop_dp_arith__io_v2.values[0];
  val_t T21[4];
  { T21[0] = DotProductTop_dp_arith__productV | T22[0] << 32; T21[1] = T22[0] >> 32 | T22[1] << 32; T21[2] = T22[1] >> 32 | T22[2] << 32; T21[3] = T22[2] >> 32 | T22[3] << 32;}
  val_t T23;
  { T23 = DotProductTop_dp_arith__io_reset.values[0] ^ 0x1L;}
  val_t T24[4];
  { T24[0] = TERNARY_1(T23, T21[0], T15[0]); T24[1] = TERNARY_1(T23, T21[1], T15[1]); T24[2] = TERNARY_1(T23, T21[2], T15[2]); T24[3] = TERNARY_1(T23, T21[3], T15[3]);}
  { DotProductTop_dp_arith__reset.values[0] = reset.values[0];}
  { T25.values[0] = TERNARY(DotProductTop_dp_arith__reset.values[0], T16[0], T24[0]); T25.values[1] = TERNARY(DotProductTop_dp_arith__reset.values[0], T16[1], T24[1]); T25.values[2] = TERNARY(DotProductTop_dp_arith__reset.values[0], T16[2], T24[2]); T25.values[3] = TERNARY(DotProductTop_dp_arith__reset.values[0], T16[3], T24[3]);}
  val_t T26[4];
  { T26[0] = TERNARY(DotProductTop_dp_arith__io_reset.values[0], T16[0], DotProductTop_dp_arith__acc.values[0]); T26[1] = TERNARY(DotProductTop_dp_arith__io_reset.values[0], T16[1], DotProductTop_dp_arith__acc.values[1]); T26[2] = TERNARY(DotProductTop_dp_arith__io_reset.values[0], T16[2], DotProductTop_dp_arith__acc.values[2]); T26[3] = TERNARY(DotProductTop_dp_arith__io_reset.values[0], T16[3], DotProductTop_dp_arith__acc.values[3]);}
  val_t T27[4];
  { T27[0] = DotProductTop_dp_arith__acc.values[0]+DotProductTop_dp_arith__productReg.values[0]; val_t __c = DotProductTop_dp_arith__acc.values[0]+DotProductTop_dp_arith__productReg.values[0] < DotProductTop_dp_arith__acc.values[0]; T27[1] = DotProductTop_dp_arith__acc.values[1]+DotProductTop_dp_arith__productReg.values[1]+__c; __c = DotProductTop_dp_arith__acc.values[1]+DotProductTop_dp_arith__productReg.values[1] < DotProductTop_dp_arith__acc.values[1] || T27[1] < __c; T27[2] = DotProductTop_dp_arith__acc.values[2]+DotProductTop_dp_arith__productReg.values[2]+__c; __c = DotProductTop_dp_arith__acc.values[2]+DotProductTop_dp_arith__productReg.values[2] < DotProductTop_dp_arith__acc.values[2] || T27[2] < __c; T27[3] = DotProductTop_dp_arith__acc.values[3]+DotProductTop_dp_arith__productReg.values[3]+__c;}
  { DotProductTop_dp_arith__io_en.values[0] = DotProductTop__delayReg.values[0];}
  val_t T28;
  { T28 = DotProductTop_dp_arith__io_reset.values[0] ^ 0x1L;}
  val_t T29;
  { T29 = T28 & DotProductTop_dp_arith__io_en.values[0];}
  val_t T30[4];
  { T30[0] = TERNARY_1(T29, T27[0], T26[0]); T30[1] = TERNARY_1(T29, T27[1], T26[1]); T30[2] = TERNARY_1(T29, T27[2], T26[2]); T30[3] = TERNARY_1(T29, T27[3], T26[3]);}
  { T31.values[0] = TERNARY(DotProductTop_dp_arith__reset.values[0], T16[0], T30[0]); T31.values[1] = TERNARY(DotProductTop_dp_arith__reset.values[0], T16[1], T30[1]); T31.values[2] = TERNARY(DotProductTop_dp_arith__reset.values[0], T16[2], T30[2]); T31.values[3] = TERNARY(DotProductTop_dp_arith__reset.values[0], T16[3], T30[3]);}
  { DotProductTop_counter__io_cout.values[0] = DotProductTop_counter__currCount.values[0];}
  val_t T32;
  { T32 = DotProductTop_counter__io_cout.values[0];}
  T32 = T32 & 0x1fL;
  { DotProductTop_dp_ram2__io_read_addr.values[0] = T32;}
  { DotProductTop_dp_ram2__io_write_data.values[0] = DotProductTop__io_input_data.values[0];}
  { DotProductTop_dp_ram2__io_write_addr.values[0] = DotProductTop__io_input_addr.values[0];}
  val_t T33;
  { T33 = DotProductTop_dp_ram2__io_write_addr.values[0];}
  T33 = T33 & 0x7L;
  val_t T34;
  T34 = T33<0x5L;
  val_t T35;
  T35 = DotProductTop__state.values[0] == 0x0L;
  { DotProductTop_dp_ram2__io_write_en.values[0] = T35;}
  { T36.values[0] = DotProductTop_dp_ram2__io_write_en.values[0] & T34;}
  { T37.values[0] = DotProductTop_dp_ram2__io_write_addr.values[0];}
  T37.values[0] = T37.values[0] & 0x7L;
  val_t T38;
  { T38 = DotProductTop_counter__io_cout.values[0];}
  T38 = T38 & 0x1fL;
  { DotProductTop_dp_ram1__io_read_addr.values[0] = T38;}
  { DotProductTop_dp_ram1__io_write_data.values[0] = DotProductTop__io_input_data.values[0];}
  { DotProductTop_dp_ram1__io_write_addr.values[0] = DotProductTop__io_input_addr.values[0];}
  val_t T39;
  { T39 = DotProductTop_dp_ram1__io_write_addr.values[0];}
  T39 = T39 & 0x7L;
  val_t T40;
  T40 = T39<0x5L;
  val_t T41;
  T41 = DotProductTop__state.values[0] == 0x0L;
  { DotProductTop_dp_ram1__io_write_en.values[0] = T41;}
  { T42.values[0] = DotProductTop_dp_ram1__io_write_en.values[0] & T40;}
  { T43.values[0] = DotProductTop_dp_ram1__io_write_addr.values[0];}
  T43.values[0] = T43.values[0] & 0x7L;
  val_t T44;
  T44 = 0x0L == DotProductTop_dpBlock__pipe_state.values[0];
  val_t T45;
  { T45 = TERNARY(T44, 0x1L, DotProductTop_dpBlock__pipe_state.values[0]);}
  { DotProductTop_counter__io_done.values[0] = DotProductTop_counter__hitMax;}
  { DotProductTop_dpBlock__io_block_done.values[0] = DotProductTop_counter__io_done.values[0];}
  val_t T46;
  T46 = 0x1L == DotProductTop_dpBlock__pipe_state.values[0];
  val_t T47;
  { T47 = T46 & DotProductTop_dpBlock__io_block_done.values[0];}
  val_t T48;
  { T48 = TERNARY(T47, 0x2L, T45);}
  val_t T49;
  T49 = 0x2L == DotProductTop_dpBlock__pipe_state.values[0];
  val_t T50;
  { T50 = TERNARY(T49, 0x3L, T48);}
  val_t T51;
  T51 = DotProductTop__state.values[0] == 0x1L;
  { DotProductTop_dpBlock__io_en.values[0] = T51;}
  val_t T52;
  T52 = 0x3L == DotProductTop_dpBlock__pipe_state.values[0];
  val_t T53;
  { T53 = T52 & DotProductTop_dpBlock__io_en.values[0];}
  val_t T54;
  { T54 = TERNARY(T53, 0x0L, T50);}
  { DotProductTop_dpBlock__reset.values[0] = reset.values[0];}
  { T55.values[0] = TERNARY(DotProductTop_dpBlock__reset.values[0], 0x0L, T54);}
  { DotProductTop__io_status.values[0] = DotProductTop__state.values[0];}
  { DotProductTop_dp_arith__io_dotproduct.values[0] = DotProductTop_dp_arith__acc.values[0]; DotProductTop_dp_arith__io_dotproduct.values[1] = DotProductTop_dp_arith__acc.values[1]; DotProductTop_dp_arith__io_dotproduct.values[2] = DotProductTop_dp_arith__acc.values[2]; DotProductTop_dp_arith__io_dotproduct.values[3] = DotProductTop_dp_arith__acc.values[3];}
  val_t T56;
  { T56 = DotProductTop_dp_arith__io_dotproduct.values[0];}
  T56 = T56 & 0xffffL;
  { DotProductTop__io_result.values[0] = T56;}
  { T57.values[0] = TERNARY(reset.values[0], 0x0L, DotProductTop_dpBlock__io_en.values[0]);}
  val_t T58;
  T58 = 0x0L == DotProductTop__state.values[0];
  val_t T59;
  { T59 = T58 & DotProductTop__io_cmd.values[0];}
  val_t T60;
  { T60 = TERNARY(T59, 0x1L, DotProductTop__state.values[0]);}
  val_t T61;
  T61 = DotProductTop_dpBlock__pipe_state.values[0] == 0x2L;
  { DotProductTop_dpBlock__io_done.values[0] = T61;}
  val_t T62;
  T62 = 0x1L == DotProductTop__state.values[0];
  val_t T63;
  { T63 = T62 & DotProductTop_dpBlock__io_done.values[0];}
  val_t T64;
  { T64 = TERNARY(T63, 0x2L, T60);}
  val_t T65;
  T65 = 0x2L == DotProductTop__state.values[0];
  val_t T66;
  { T66 = TERNARY(T65, 0x3L, T64);}
  val_t T67;
  T67 = 0x3L == DotProductTop__state.values[0];
  val_t T68;
  { T68 = TERNARY(T67, 0x0L, T66);}
  { T69.values[0] = TERNARY(reset.values[0], 0x0L, T68);}
}


void DotProductTop_t::clock_hi ( dat_t<1> reset ) {
  dat_t<16> DotProductTop_counter__currCount__shadow = T14;
  dat_t<256> DotProductTop_dp_arith__productReg__shadow = T25;
  dat_t<256> DotProductTop_dp_arith__acc__shadow = T31;
  dat_t<5> DotProductTop_dp_ram2__reg_raddr__shadow = DotProductTop_dp_ram2__io_read_addr;
  { if (T36.values[0]) DotProductTop_dp_ram2__bRam_rw.put(T37.values[0], 0, DotProductTop_dp_ram2__io_write_data.values[0]);}
  dat_t<5> DotProductTop_dp_ram1__reg_raddr__shadow = DotProductTop_dp_ram1__io_read_addr;
  { if (T42.values[0]) DotProductTop_dp_ram1__bRam_rw.put(T43.values[0], 0, DotProductTop_dp_ram1__io_write_data.values[0]);}
  dat_t<2> DotProductTop_dpBlock__pipe_state__shadow = T55;
  dat_t<1> DotProductTop__delayReg__shadow = T57;
  dat_t<2> DotProductTop__state__shadow = T69;
  DotProductTop_counter__currCount = T14;
  DotProductTop_dp_arith__productReg = T25;
  DotProductTop_dp_arith__acc = T31;
  DotProductTop_dp_ram2__reg_raddr = DotProductTop_dp_ram2__io_read_addr;
  DotProductTop_dp_ram1__reg_raddr = DotProductTop_dp_ram1__io_read_addr;
  DotProductTop_dpBlock__pipe_state = T55;
  DotProductTop__delayReg = T57;
  DotProductTop__state = T69;
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
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_counter__io_max));
  sim_data.signal_map["DotProductTop.counter.io_max"] = 0;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dpBlock__io_run));
  sim_data.signal_map["DotProductTop.dpBlock.io_run"] = 1;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter__io_en_count));
  sim_data.signal_map["DotProductTop.counter.io_en_count"] = 2;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dpBlock__io_pipe_reset));
  sim_data.signal_map["DotProductTop.dpBlock.io_pipe_reset"] = 3;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter__io_reset));
  sim_data.signal_map["DotProductTop.counter.io_reset"] = 4;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter__reset));
  sim_data.signal_map["DotProductTop.counter.reset"] = 5;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_counter__currCount));
  sim_data.signal_map["DotProductTop.counter.currCount"] = 6;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_arith__io_reset));
  sim_data.signal_map["DotProductTop.dp_arith.io_reset"] = 7;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2__io_read_out));
  sim_data.signal_map["DotProductTop.dp_ram2.io_read_out"] = 8;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_arith__io_v2));
  sim_data.signal_map["DotProductTop.dp_arith.io_v2"] = 9;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1__io_read_out));
  sim_data.signal_map["DotProductTop.dp_ram1.io_read_out"] = 10;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_arith__io_v1));
  sim_data.signal_map["DotProductTop.dp_arith.io_v1"] = 11;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_arith__reset));
  sim_data.signal_map["DotProductTop.dp_arith.reset"] = 12;
  sim_data.signals.push_back(new dat_api<256>(&mod->DotProductTop_dp_arith__productReg));
  sim_data.signal_map["DotProductTop.dp_arith.productReg"] = 13;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_arith__io_en));
  sim_data.signal_map["DotProductTop.dp_arith.io_en"] = 14;
  sim_data.signals.push_back(new dat_api<256>(&mod->DotProductTop_dp_arith__acc));
  sim_data.signal_map["DotProductTop.dp_arith.acc"] = 15;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_counter__io_cout));
  sim_data.signal_map["DotProductTop.counter.io_cout"] = 16;
  sim_data.signals.push_back(new dat_api<5>(&mod->DotProductTop_dp_ram2__io_read_addr));
  sim_data.signal_map["DotProductTop.dp_ram2.io_read_addr"] = 17;
  sim_data.signals.push_back(new dat_api<5>(&mod->DotProductTop_dp_ram2__reg_raddr));
  sim_data.signal_map["DotProductTop.dp_ram2.reg_raddr"] = 18;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2__io_write_data));
  sim_data.signal_map["DotProductTop.dp_ram2.io_write_data"] = 19;
  sim_data.signals.push_back(new dat_api<5>(&mod->DotProductTop_dp_ram2__io_write_addr));
  sim_data.signal_map["DotProductTop.dp_ram2.io_write_addr"] = 20;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_ram2__io_write_en));
  sim_data.signal_map["DotProductTop.dp_ram2.io_write_en"] = 21;
  std::string DotProductTop_dp_ram2__bRam_rw_path = "DotProductTop.dp_ram2.bRam_rw";
  for (size_t i = 0 ; i < 5 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram2__bRam_rw.contents[i]));
    sim_data.signal_map[DotProductTop_dp_ram2__bRam_rw_path+"["+itos(i,false)+"]"] = 22+i;
  }
  sim_data.signals.push_back(new dat_api<5>(&mod->DotProductTop_dp_ram1__io_read_addr));
  sim_data.signal_map["DotProductTop.dp_ram1.io_read_addr"] = 27;
  sim_data.signals.push_back(new dat_api<5>(&mod->DotProductTop_dp_ram1__reg_raddr));
  sim_data.signal_map["DotProductTop.dp_ram1.reg_raddr"] = 28;
  sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1__io_write_data));
  sim_data.signal_map["DotProductTop.dp_ram1.io_write_data"] = 29;
  sim_data.signals.push_back(new dat_api<5>(&mod->DotProductTop_dp_ram1__io_write_addr));
  sim_data.signal_map["DotProductTop.dp_ram1.io_write_addr"] = 30;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dp_ram1__io_write_en));
  sim_data.signal_map["DotProductTop.dp_ram1.io_write_en"] = 31;
  std::string DotProductTop_dp_ram1__bRam_rw_path = "DotProductTop.dp_ram1.bRam_rw";
  for (size_t i = 0 ; i < 5 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->DotProductTop_dp_ram1__bRam_rw.contents[i]));
    sim_data.signal_map[DotProductTop_dp_ram1__bRam_rw_path+"["+itos(i,false)+"]"] = 32+i;
  }
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_counter__io_done));
  sim_data.signal_map["DotProductTop.counter.io_done"] = 37;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dpBlock__io_block_done));
  sim_data.signal_map["DotProductTop.dpBlock.io_block_done"] = 38;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dpBlock__io_en));
  sim_data.signal_map["DotProductTop.dpBlock.io_en"] = 39;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dpBlock__reset));
  sim_data.signal_map["DotProductTop.dpBlock.reset"] = 40;
  sim_data.signals.push_back(new dat_api<2>(&mod->DotProductTop_dpBlock__pipe_state));
  sim_data.signal_map["DotProductTop.dpBlock.pipe_state"] = 41;
  sim_data.signals.push_back(new dat_api<256>(&mod->DotProductTop_dp_arith__io_dotproduct));
  sim_data.signal_map["DotProductTop.dp_arith.io_dotproduct"] = 42;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop__delayReg));
  sim_data.signal_map["DotProductTop.delayReg"] = 43;
  sim_data.signals.push_back(new dat_api<1>(&mod->DotProductTop_dpBlock__io_done));
  sim_data.signal_map["DotProductTop.dpBlock.io_done"] = 44;
  sim_data.signals.push_back(new dat_api<2>(&mod->DotProductTop__state));
  sim_data.signal_map["DotProductTop.state"] = 45;
  sim_data.clk_map["clk"] = new clk_api(&mod->clk);
}
