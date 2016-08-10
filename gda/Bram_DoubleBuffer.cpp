#include "Bram_DoubleBuffer.h"

void Bram_DoubleBuffer_t::init ( val_t rand_init ) {
  this->__srand(rand_init);
  Bram_DoubleBuffer_bram_w2__reg_raddr.randomize(&__rand_seed);
  Bram_DoubleBuffer_bram_w2__bRam_rw.randomize(&__rand_seed);
  Bram_DoubleBuffer_bram_w1__reg_raddr.randomize(&__rand_seed);
  Bram_DoubleBuffer_bram_w1__bRam_rw.randomize(&__rand_seed);
  Bram_DoubleBuffer__state_read_reg.randomize(&__rand_seed);
  Bram_DoubleBuffer__latch_read_done_vec_0.randomize(&__rand_seed);
  Bram_DoubleBuffer__state.randomize(&__rand_seed);
  clk.len = 1;
  clk.cnt = 0;
  clk.values[0] = 0;
}


int Bram_DoubleBuffer_t::clock ( dat_t<1> reset ) {
  uint32_t min = ((uint32_t)1<<31)-1;
  if (clk.cnt < min) min = clk.cnt;
  clk.cnt-=min;
  if (clk.cnt == 0) clock_lo( reset );
  if (!reset.to_bool()) print( std::cerr );
  if (clk.cnt == 0) clock_hi( reset );
  if (clk.cnt == 0) clk.cnt = clk.len;
  return min;
}


void Bram_DoubleBuffer_t::print ( FILE* f ) {
}
void Bram_DoubleBuffer_t::print ( std::ostream& s ) {
}


void Bram_DoubleBuffer_t::dump_init ( FILE* f ) {
}


void Bram_DoubleBuffer_t::dump ( FILE* f, val_t t, dat_t<1> reset ) {
}




void Bram_DoubleBuffer_t::clock_lo ( dat_t<1> reset, bool assert_fire ) {
  { Bram_DoubleBuffer_bram_w2__io_read_addr.values[0] = Bram_DoubleBuffer__io_read_addr_vec_0.values[0];}
  { Bram_DoubleBuffer_bram_w2__io_write_data.values[0] = Bram_DoubleBuffer__io_write_data.values[0];}
  val_t T0;
  T0 = Bram_DoubleBuffer__state.values[0] == 0x2L;
  val_t T1;
  { T1 = Bram_DoubleBuffer__io_write_en.values[0] & T0;}
  { Bram_DoubleBuffer_bram_w2__io_write_en.values[0] = T1;}
  { Bram_DoubleBuffer_bram_w2__io_write_addr.values[0] = Bram_DoubleBuffer__io_write_addr.values[0];}
  { T2.values[0] = Bram_DoubleBuffer_bram_w2__io_write_addr.values[0];}
  T2.values[0] = T2.values[0] & 0x3L;
  { Bram_DoubleBuffer_bram_w1__io_read_addr.values[0] = Bram_DoubleBuffer__io_read_addr_vec_0.values[0];}
  { Bram_DoubleBuffer_bram_w1__io_write_data.values[0] = Bram_DoubleBuffer__io_write_data.values[0];}
  val_t T3;
  T3 = Bram_DoubleBuffer__state.values[0] == 0x1L;
  val_t T4;
  { T4 = Bram_DoubleBuffer__io_write_en.values[0] & T3;}
  { Bram_DoubleBuffer_bram_w1__io_write_en.values[0] = T4;}
  { Bram_DoubleBuffer_bram_w1__io_write_addr.values[0] = Bram_DoubleBuffer__io_write_addr.values[0];}
  { T5.values[0] = Bram_DoubleBuffer_bram_w1__io_write_addr.values[0];}
  T5.values[0] = T5.values[0] & 0x3L;
  { T6.values[0] = TERNARY(reset.values[0], 0x0L, Bram_DoubleBuffer__state.values[0]);}
  val_t T7;
  { T7 = Bram_DoubleBuffer_bram_w1__reg_raddr.values[0];}
  T7 = T7 & 0x3L;
  val_t T8;
  { T8 = Bram_DoubleBuffer_bram_w1__bRam_rw.get(T7, 0);}
  { Bram_DoubleBuffer_bram_w1__io_read_out.values[0] = T8;}
  val_t T9;
  { T9 = Bram_DoubleBuffer_bram_w2__reg_raddr.values[0];}
  T9 = T9 & 0x3L;
  val_t T10;
  { T10 = Bram_DoubleBuffer_bram_w2__bRam_rw.get(T9, 0);}
  { Bram_DoubleBuffer_bram_w2__io_read_out.values[0] = T10;}
  val_t T11;
  T11 = Bram_DoubleBuffer__state_read_reg.values[0] == 0x1L;
  val_t T12;
  { T12 = TERNARY_1(T11, Bram_DoubleBuffer_bram_w2__io_read_out.values[0], Bram_DoubleBuffer_bram_w1__io_read_out.values[0]);}
  { Bram_DoubleBuffer__io_read_out.values[0] = T12;}
  val_t T13;
  { T13 = Bram_DoubleBuffer__latch_read_done_vec_0.values[0] | Bram_DoubleBuffer__io_read_done_vec_0.values[0];}
  val_t Bram_DoubleBuffer__buffering_done;
  { Bram_DoubleBuffer__buffering_done = T13 & Bram_DoubleBuffer__io_write_done.values[0];}
  val_t T14;
  { T14 = TERNARY(Bram_DoubleBuffer__buffering_done, 0x0L, Bram_DoubleBuffer__latch_read_done_vec_0.values[0]);}
  val_t T15;
  { T15 = Bram_DoubleBuffer__buffering_done ^ 0x1L;}
  val_t T16;
  { T16 = TERNARY_1(T15, T13, T14);}
  { T17.values[0] = TERNARY(reset.values[0], 0x0L, T16);}
  val_t T18;
  T18 = 0x0L == Bram_DoubleBuffer__state.values[0];
  val_t T19;
  { T19 = TERNARY(T18, 0x1L, Bram_DoubleBuffer__state.values[0]);}
  val_t T20;
  T20 = 0x1L == Bram_DoubleBuffer__state.values[0];
  val_t T21;
  { T21 = T20 & Bram_DoubleBuffer__buffering_done;}
  val_t T22;
  { T22 = TERNARY(T21, 0x2L, T19);}
  val_t T23;
  T23 = 0x2L == Bram_DoubleBuffer__state.values[0];
  val_t T24;
  { T24 = T23 & Bram_DoubleBuffer__buffering_done;}
  val_t T25;
  { T25 = TERNARY(T24, 0x1L, T22);}
  { T26.values[0] = TERNARY(reset.values[0], 0x0L, T25);}
}


void Bram_DoubleBuffer_t::clock_hi ( dat_t<1> reset ) {
  dat_t<16> Bram_DoubleBuffer_bram_w2__reg_raddr__shadow = Bram_DoubleBuffer_bram_w2__io_read_addr;
  { if (Bram_DoubleBuffer_bram_w2__io_write_en.values[0]) Bram_DoubleBuffer_bram_w2__bRam_rw.put(T2.values[0], 0, Bram_DoubleBuffer_bram_w2__io_write_data.values[0]);}
  dat_t<16> Bram_DoubleBuffer_bram_w1__reg_raddr__shadow = Bram_DoubleBuffer_bram_w1__io_read_addr;
  { if (Bram_DoubleBuffer_bram_w1__io_write_en.values[0]) Bram_DoubleBuffer_bram_w1__bRam_rw.put(T5.values[0], 0, Bram_DoubleBuffer_bram_w1__io_write_data.values[0]);}
  dat_t<2> Bram_DoubleBuffer__state_read_reg__shadow = T6;
  dat_t<1> Bram_DoubleBuffer__latch_read_done_vec_0__shadow = T17;
  dat_t<2> Bram_DoubleBuffer__state__shadow = T26;
  Bram_DoubleBuffer_bram_w2__reg_raddr = Bram_DoubleBuffer_bram_w2__io_read_addr;
  Bram_DoubleBuffer_bram_w1__reg_raddr = Bram_DoubleBuffer_bram_w1__io_read_addr;
  Bram_DoubleBuffer__state_read_reg = T6;
  Bram_DoubleBuffer__latch_read_done_vec_0 = T17;
  Bram_DoubleBuffer__state = T26;
}


void Bram_DoubleBuffer_api_t::init_sim_data (  ) {
  sim_data.inputs.clear();
  sim_data.outputs.clear();
  sim_data.signals.clear();
  Bram_DoubleBuffer_t* mod = dynamic_cast<Bram_DoubleBuffer_t*>(module);
  assert(mod);
  sim_data.inputs.push_back(new dat_api<16>(&mod->Bram_DoubleBuffer__io_read_addr_vec_0));
  sim_data.inputs.push_back(new dat_api<16>(&mod->Bram_DoubleBuffer__io_write_addr));
  sim_data.inputs.push_back(new dat_api<16>(&mod->Bram_DoubleBuffer__io_write_data));
  sim_data.inputs.push_back(new dat_api<1>(&mod->Bram_DoubleBuffer__io_write_en));
  sim_data.inputs.push_back(new dat_api<1>(&mod->Bram_DoubleBuffer__io_read_done_vec_0));
  sim_data.inputs.push_back(new dat_api<1>(&mod->Bram_DoubleBuffer__io_write_done));
  sim_data.outputs.push_back(new dat_api<16>(&mod->Bram_DoubleBuffer__io_read_out));
  sim_data.signals.push_back(new dat_api<16>(&mod->Bram_DoubleBuffer_bram_w2__io_read_addr));
  sim_data.signal_map["Bram_DoubleBuffer.bram_w2.io_read_addr"] = 0;
  sim_data.signals.push_back(new dat_api<16>(&mod->Bram_DoubleBuffer_bram_w2__reg_raddr));
  sim_data.signal_map["Bram_DoubleBuffer.bram_w2.reg_raddr"] = 1;
  sim_data.signals.push_back(new dat_api<16>(&mod->Bram_DoubleBuffer_bram_w2__io_write_data));
  sim_data.signal_map["Bram_DoubleBuffer.bram_w2.io_write_data"] = 2;
  sim_data.signals.push_back(new dat_api<1>(&mod->Bram_DoubleBuffer_bram_w2__io_write_en));
  sim_data.signal_map["Bram_DoubleBuffer.bram_w2.io_write_en"] = 3;
  sim_data.signals.push_back(new dat_api<16>(&mod->Bram_DoubleBuffer_bram_w2__io_write_addr));
  sim_data.signal_map["Bram_DoubleBuffer.bram_w2.io_write_addr"] = 4;
  std::string Bram_DoubleBuffer_bram_w2__bRam_rw_path = "Bram_DoubleBuffer.bram_w2.bRam_rw";
  for (size_t i = 0 ; i < 4 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->Bram_DoubleBuffer_bram_w2__bRam_rw.contents[i]));
    sim_data.signal_map[Bram_DoubleBuffer_bram_w2__bRam_rw_path+"["+itos(i,false)+"]"] = 5+i;
  }
  sim_data.signals.push_back(new dat_api<16>(&mod->Bram_DoubleBuffer_bram_w1__io_read_addr));
  sim_data.signal_map["Bram_DoubleBuffer.bram_w1.io_read_addr"] = 9;
  sim_data.signals.push_back(new dat_api<16>(&mod->Bram_DoubleBuffer_bram_w1__reg_raddr));
  sim_data.signal_map["Bram_DoubleBuffer.bram_w1.reg_raddr"] = 10;
  sim_data.signals.push_back(new dat_api<16>(&mod->Bram_DoubleBuffer_bram_w1__io_write_data));
  sim_data.signal_map["Bram_DoubleBuffer.bram_w1.io_write_data"] = 11;
  sim_data.signals.push_back(new dat_api<1>(&mod->Bram_DoubleBuffer_bram_w1__io_write_en));
  sim_data.signal_map["Bram_DoubleBuffer.bram_w1.io_write_en"] = 12;
  sim_data.signals.push_back(new dat_api<16>(&mod->Bram_DoubleBuffer_bram_w1__io_write_addr));
  sim_data.signal_map["Bram_DoubleBuffer.bram_w1.io_write_addr"] = 13;
  std::string Bram_DoubleBuffer_bram_w1__bRam_rw_path = "Bram_DoubleBuffer.bram_w1.bRam_rw";
  for (size_t i = 0 ; i < 4 ; i++) {
    sim_data.signals.push_back(new dat_api<16>(&mod->Bram_DoubleBuffer_bram_w1__bRam_rw.contents[i]));
    sim_data.signal_map[Bram_DoubleBuffer_bram_w1__bRam_rw_path+"["+itos(i,false)+"]"] = 14+i;
  }
  sim_data.signals.push_back(new dat_api<2>(&mod->Bram_DoubleBuffer__state_read_reg));
  sim_data.signal_map["Bram_DoubleBuffer.state_read_reg"] = 18;
  sim_data.signals.push_back(new dat_api<16>(&mod->Bram_DoubleBuffer_bram_w1__io_read_out));
  sim_data.signal_map["Bram_DoubleBuffer.bram_w1.io_read_out"] = 19;
  sim_data.signals.push_back(new dat_api<16>(&mod->Bram_DoubleBuffer_bram_w2__io_read_out));
  sim_data.signal_map["Bram_DoubleBuffer.bram_w2.io_read_out"] = 20;
  sim_data.signals.push_back(new dat_api<1>(&mod->Bram_DoubleBuffer__latch_read_done_vec_0));
  sim_data.signal_map["Bram_DoubleBuffer.latch_read_done_vec_0"] = 21;
  sim_data.signals.push_back(new dat_api<2>(&mod->Bram_DoubleBuffer__state));
  sim_data.signal_map["Bram_DoubleBuffer.state"] = 22;
  sim_data.clk_map["clk"] = new clk_api(&mod->clk);
}
