#ifndef __GDA_MetaPipe_FSM__
#define __GDA_MetaPipe_FSM__

#include "emulator.h"

class GDA_MetaPipe_FSM_t : public mod_t {
 private:
  val_t __rand_seed;
  void __srand(val_t seed) { __rand_seed = seed; }
  val_t __rand_val() { return ::__rand_val(&__rand_seed); }
 public:
  dat_t<1> GDA_MetaPipe_FSM_metaPipeFSM__io_complete_reset;
  dat_t<1> GDA_MetaPipe_FSM_latch_complete_done__io_rst;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_done;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__io_done;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_en_count;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_done_complete;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block__io_done_complete;
  dat_t<1> GDA_MetaPipe_FSM_latch_complete_done__io_input_val;
  dat_t<1> reset;
  dat_t<1> GDA_MetaPipe_FSM_latch_complete_done__reset;
  dat_t<1> T6;
  dat_t<1> GDA_MetaPipe_FSM_latch_complete_done__latch_reg;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__io_done;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block__io_done;
  dat_t<1> GDA_MetaPipe_FSM_latch_pipe1_done__io_input_val;
  dat_t<1> GDA_MetaPipe_FSM_latch_pipe1_done__io_latch_val;
  dat_t<1> GDA_MetaPipe_FSM_metaPipeFSM__io_done_mp_stages_1;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__io_done;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block__io_done;
  dat_t<1> GDA_MetaPipe_FSM_latch_pipe0_done__io_input_val;
  dat_t<1> GDA_MetaPipe_FSM_latch_pipe0_done__io_latch_val;
  dat_t<1> GDA_MetaPipe_FSM_metaPipeFSM__io_done_mp_stages_0;
  dat_t<1> GDA_MetaPipe_FSM_metaPipeFSM__io_reset;
  dat_t<1> GDA_MetaPipe_FSM_latch_pipe0_done__io_rst;
  dat_t<1> GDA_MetaPipe_FSM_latch_pipe0_done__reset;
  dat_t<1> T21;
  dat_t<1> GDA_MetaPipe_FSM_latch_pipe0_done__latch_reg;
  dat_t<1> GDA_MetaPipe_FSM_latch_pipe1_done__io_rst;
  dat_t<1> GDA_MetaPipe_FSM_latch_pipe1_done__reset;
  dat_t<1> T25;
  dat_t<1> GDA_MetaPipe_FSM_latch_pipe1_done__latch_reg;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block__io_sigma_addr_en;
  dat_t<1> GDA_MetaPipe_FSM_sigmaM__io_write_en;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__io_done;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_en_count;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block__io_reset;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_reset;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_reset;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block__reset;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__reset;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__reset;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__io_pipe_enabled;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_en;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__io_en_count;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__io_reset;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__reset;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_done;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_counters_done_1;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_counters_done_0;
  dat_t<1> T50;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__done_complete;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block_mtxCounter__io_en_count;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block_mtxCounter__io_reset;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block_mtxCounter__reset;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block_mtxCounter__io_done;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__reset;
  dat_t<1> T58;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__wait_done;
  dat_t<1> GDA_MetaPipe_FSM_metaPipeFSM__io_en_mp_stages_1;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block__io_pipe_en;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__io_en;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_done_complete;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__io_counter_done;
  dat_t<1> T78;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block__state1_Regs_1;
  dat_t<1> T95;
  dat_t<1> GDA_MetaPipe_FSM_pipe1_block__state1_Regs_0;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block__io_reset;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__io_reset;
  dat_t<1> GDA_MetaPipe_FSM_mean_y_vec__io_read_out;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block__io_y_out;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__io_y;
  dat_t<1> GDA_MetaPipe_FSM_metaPipeFSM__io_en_mp_stages_0;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block__io_pipe_en;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__io_en;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block__reset;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__reset;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block_mu_addr__io_reset;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block_mu_addr__reset;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__io_reset;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__reset;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block_matrix_addr__io_reset;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block_matrix_addr__reset;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block__io_complete_reset;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_reset;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_reset;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block_matrixCounters__reset;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__reset;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__io_pipe_enabled;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_en;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__io_en_count;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__io_reset;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__reset;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_counters_done_1;
  dat_t<1> T155;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block_matrixCounters__done_complete;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__reset;
  dat_t<1> T156;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__wait_done;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__io_en;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_counters_done_0;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__io_counter_done;
  dat_t<1> T169;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block__state0_Regs_0;
  dat_t<1> T170;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block__state0_Regs_1;
  dat_t<1> GDA_MetaPipe_FSM_pipe0_block__io_addr_en;
  dat_t<1> GDA_MetaPipe_FSM_subT_2_db__io_write_en;
  dat_t<1> GDA_MetaPipe_FSM_subT_2_db_bram_w2__io_write_en;
  dat_t<1> GDA_MetaPipe_FSM_subT_2_db_bram_w1__io_write_en;
  dat_t<1> GDA_MetaPipe_FSM_subT_2_db__reset;
  dat_t<1> GDA_MetaPipe_FSM_subT_2_db__io_write_done;
  dat_t<1> GDA_MetaPipe_FSM_subT_2_db__io_read_done_vec_0;
  dat_t<1> T190;
  dat_t<1> GDA_MetaPipe_FSM_subT_2_db__latch_read_done_vec_0;
  dat_t<1> GDA_MetaPipe_FSM_subT_db__io_write_en;
  dat_t<1> GDA_MetaPipe_FSM_subT_db_bram_w2__io_write_en;
  dat_t<1> GDA_MetaPipe_FSM_subT_db_bram_w1__io_write_en;
  dat_t<1> GDA_MetaPipe_FSM_subT_db__reset;
  dat_t<1> GDA_MetaPipe_FSM_subT_db__io_write_done;
  dat_t<1> GDA_MetaPipe_FSM_subT_db__io_read_done_vec_0;
  dat_t<1> T215;
  dat_t<1> GDA_MetaPipe_FSM_subT_db__latch_read_done_vec_0;
  dat_t<1> GDA_MetaPipe_FSM_subT_2__io_write_en;
  dat_t<1> GDA_MetaPipe_FSM_subT__io_write_en;
  dat_t<1> GDA_MetaPipe_FSM__io_en;
  dat_t<1> GDA_MetaPipe_FSM_metaPipeFSM__io_en;
  dat_t<1> GDA_MetaPipe_FSM_latch_complete_done__io_latch_val;
  dat_t<1> GDA_MetaPipe_FSM_metaPipeFSM__io_done_complete;
  dat_t<1> GDA_MetaPipe_FSM_metaPipeFSM__reset;
  dat_t<1> GDA_MetaPipe_FSM_mu1__io_write_en;
  dat_t<1> GDA_MetaPipe_FSM_mu0__io_write_en;
  dat_t<1> GDA_MetaPipe_FSM_mean_y_vec__io_write_data;
  dat_t<1> GDA_MetaPipe_FSM_mean_y_vec__io_write_en;
  dat_t<1> GDA_MetaPipe_FSM_x_matrix__io_write_en;
  dat_t<1> GDA_MetaPipe_FSM_metaPipeFSM__io_done;
  dat_t<1> GDA_MetaPipe_FSM__io_done;
  dat_t<1> GDA_MetaPipe_FSM__io_y;
  dat_t<1> GDA_MetaPipe_FSM__io_d0;
  dat_t<1> GDA_MetaPipe_FSM__io_y1;
  dat_t<1> GDA_MetaPipe_FSM__io_d1;
  dat_t<1> GDA_MetaPipe_FSM__io_state1;
  dat_t<1> GDA_MetaPipe_FSM__io_state0;
  dat_t<1> T263;
  dat_t<1> T265;
  dat_t<1> T267;
  dat_t<1> T269;
  dat_t<1> T271;
  dat_t<1> T272;
  dat_t<1> T273;
  dat_t<1> T275;
  dat_t<1> T276;
  dat_t<1> T277;
  dat_t<1> T278;
  dat_t<2> GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__prev_state;
  dat_t<2> T77;
  dat_t<2> GDA_MetaPipe_FSM_pipe1_block_pipe1_FSM__curr_state;
  dat_t<2> GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__prev_state;
  dat_t<2> T168;
  dat_t<2> GDA_MetaPipe_FSM_pipe0_block_pipe0_FSM__curr_state;
  dat_t<2> T177;
  dat_t<2> T180;
  dat_t<2> T181;
  dat_t<2> GDA_MetaPipe_FSM_subT_2_db__state_read_reg;
  dat_t<2> T199;
  dat_t<2> GDA_MetaPipe_FSM_subT_2_db__state;
  dat_t<2> T202;
  dat_t<2> T205;
  dat_t<2> T206;
  dat_t<2> GDA_MetaPipe_FSM_subT_db__state_read_reg;
  dat_t<2> T224;
  dat_t<2> GDA_MetaPipe_FSM_subT_db__state;
  dat_t<2> T225;
  dat_t<2> T228;
  dat_t<2> T251;
  dat_t<2> T252;
  dat_t<2> T256;
  dat_t<3> T248;
  dat_t<3> GDA_MetaPipe_FSM_metaPipeFSM__state;
  dat_t<4> T29;
  dat_t<4> T261;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_counters_max_1;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_max;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_counters_max_0;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__io_max;
  dat_t<16> GDA_MetaPipe_FSM_pipe1_block_mtxCounter__io_vec_cout_0;
  dat_t<16> GDA_MetaPipe_FSM_pipe1_block__io_sigma_read_addr;
  dat_t<16> GDA_MetaPipe_FSM_sigmaM__io_read_addr;
  dat_t<16> GDA_MetaPipe_FSM_sigmaM__reg_raddr;
  dat_t<16> GDA_MetaPipe_FSM_sigmaM__io_read_out;
  dat_t<16> GDA_MetaPipe_FSM_pipe1_block__io_sigma_read_out;
  dat_t<16> GDA_MetaPipe_FSM_pipe1_block__io_sigma_write_data;
  dat_t<16> GDA_MetaPipe_FSM_sigmaM__io_write_data;
  dat_t<16> GDA_MetaPipe_FSM_pipe1_block__io_sigma_write_addr;
  dat_t<16> GDA_MetaPipe_FSM_sigmaM__io_write_addr;
  dat_t<16> GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_counters_max_1;
  dat_t<16> GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_max;
  dat_t<16> GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_counters_max_0;
  dat_t<16> GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__io_max;
  dat_t<16> T36;
  dat_t<16> GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__currCount;
  dat_t<16> T44;
  dat_t<16> GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__currCount;
  dat_t<16> GDA_MetaPipe_FSM_pipe1_block_mtxCounter__io_max;
  dat_t<16> T57;
  dat_t<16> GDA_MetaPipe_FSM_pipe1_block_mtxCounter__currCount;
  dat_t<16> T79;
  dat_t<16> GDA_MetaPipe_FSM_pipe1_block__writeaddr_reg;
  dat_t<16> GDA_MetaPipe_FSM_subT_2_db_bram_w1__io_read_out;
  dat_t<16> GDA_MetaPipe_FSM_subT_2_db_bram_w2__io_read_out;
  dat_t<16> GDA_MetaPipe_FSM_subT_2_db__io_read_out;
  dat_t<16> GDA_MetaPipe_FSM_pipe1_block__io_subT_2_out;
  dat_t<16> GDA_MetaPipe_FSM_subT_db_bram_w1__io_read_out;
  dat_t<16> GDA_MetaPipe_FSM_subT_db_bram_w2__io_read_out;
  dat_t<16> GDA_MetaPipe_FSM_subT_db__io_read_out;
  dat_t<16> GDA_MetaPipe_FSM_pipe1_block__io_subT_out;
  dat_t<16> T94;
  dat_t<16> GDA_MetaPipe_FSM_pipe1_block__product_reg;
  dat_t<16> GDA_MetaPipe_FSM_mu0__io_read_out;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block__io_mu0_out;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__io_mu0;
  dat_t<16> GDA_MetaPipe_FSM_mu1__io_read_out;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block__io_mu1_out;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__io_mu1;
  dat_t<16> GDA_MetaPipe_FSM_x_matrix__io_read_out;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block__io_x_out;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__io_x;
  dat_t<16> T113;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__sub_reg;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block_mu_addr__io_in;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block_mu_addr__io_const_dim;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__io_vec_cout_0;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_counters_cout_0_0;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block_mu_addr__io_k;
  dat_t<16> T120;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block_mu_addr__k_reg;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__io_in;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__io_const_dim;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__io_vec_cout_0;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block_matrixCounters__io_counters_cout_1_0;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__io_k;
  dat_t<16> T127;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__k_reg;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block_matrix_addr__io_in;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block_matrix_addr__io_const_dim;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block_matrix_addr__io_k;
  dat_t<16> T134;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block_matrix_addr__k_reg;
  dat_t<16> T141;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter_1__currCount;
  dat_t<16> T149;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block_matrixCounters_ItrCounter__currCount;
  dat_t<16> T174;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block__mu_addr_Regs;
  dat_t<16> GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter_1__io_vec_cout_0;
  dat_t<16> GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_counters_cout_1_0;
  dat_t<16> GDA_MetaPipe_FSM_pipe1_block__io_subT_2_addr;
  dat_t<16> GDA_MetaPipe_FSM_subT_2_db__io_read_addr_vec_0;
  dat_t<16> GDA_MetaPipe_FSM_subT_2_db_bram_w2__io_read_addr;
  dat_t<16> GDA_MetaPipe_FSM_subT_2_db_bram_w2__reg_raddr;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block_pipe0_datapath__io_output_float;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block__io_output_float;
  dat_t<16> GDA_MetaPipe_FSM_subT_2_db__io_write_data;
  dat_t<16> GDA_MetaPipe_FSM_subT_2_db_bram_w2__io_write_data;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block__io_subT_addr;
  dat_t<16> GDA_MetaPipe_FSM_subT_2_db__io_write_addr;
  dat_t<16> GDA_MetaPipe_FSM_subT_2_db_bram_w2__io_write_addr;
  dat_t<16> GDA_MetaPipe_FSM_subT_2_db_bram_w1__io_read_addr;
  dat_t<16> GDA_MetaPipe_FSM_subT_2_db_bram_w1__reg_raddr;
  dat_t<16> GDA_MetaPipe_FSM_subT_2_db_bram_w1__io_write_data;
  dat_t<16> GDA_MetaPipe_FSM_subT_2_db_bram_w1__io_write_addr;
  dat_t<16> GDA_MetaPipe_FSM_pipe1_block_sigmaCounters_ItrCounter__io_vec_cout_0;
  dat_t<16> GDA_MetaPipe_FSM_pipe1_block_sigmaCounters__io_counters_cout_0_0;
  dat_t<16> GDA_MetaPipe_FSM_pipe1_block__io_subT_addr;
  dat_t<16> GDA_MetaPipe_FSM_subT_db__io_read_addr_vec_0;
  dat_t<16> GDA_MetaPipe_FSM_subT_db_bram_w2__io_read_addr;
  dat_t<16> GDA_MetaPipe_FSM_subT_db_bram_w2__reg_raddr;
  dat_t<16> GDA_MetaPipe_FSM_subT_db__io_write_data;
  dat_t<16> GDA_MetaPipe_FSM_subT_db_bram_w2__io_write_data;
  dat_t<16> GDA_MetaPipe_FSM_subT_db__io_write_addr;
  dat_t<16> GDA_MetaPipe_FSM_subT_db_bram_w2__io_write_addr;
  dat_t<16> GDA_MetaPipe_FSM_subT_db_bram_w1__io_read_addr;
  dat_t<16> GDA_MetaPipe_FSM_subT_db_bram_w1__reg_raddr;
  dat_t<16> GDA_MetaPipe_FSM_subT_db_bram_w1__io_write_data;
  dat_t<16> GDA_MetaPipe_FSM_subT_db_bram_w1__io_write_addr;
  dat_t<16> GDA_MetaPipe_FSM_subT_2__io_read_addr;
  dat_t<16> GDA_MetaPipe_FSM_subT_2__reg_raddr;
  dat_t<16> GDA_MetaPipe_FSM_subT_2__io_write_data;
  dat_t<16> GDA_MetaPipe_FSM_subT_2__io_write_addr;
  dat_t<16> GDA_MetaPipe_FSM_subT_2__io_read_out;
  dat_t<16> GDA_MetaPipe_FSM_subT__io_read_addr;
  dat_t<16> GDA_MetaPipe_FSM_subT__reg_raddr;
  dat_t<16> GDA_MetaPipe_FSM_subT__io_write_data;
  dat_t<16> GDA_MetaPipe_FSM_subT__io_write_addr;
  dat_t<16> GDA_MetaPipe_FSM_subT__io_read_out;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block__io_mu_addr;
  dat_t<16> GDA_MetaPipe_FSM_mu1__io_read_addr;
  dat_t<16> GDA_MetaPipe_FSM_mu1__reg_raddr;
  dat_t<16> GDA_MetaPipe_FSM__io_data_in;
  dat_t<16> GDA_MetaPipe_FSM_mu1__io_write_data;
  dat_t<16> GDA_MetaPipe_FSM_mu1__io_write_addr;
  dat_t<16> GDA_MetaPipe_FSM_mu0__io_read_addr;
  dat_t<16> GDA_MetaPipe_FSM_mu0__reg_raddr;
  dat_t<16> GDA_MetaPipe_FSM_mu0__io_write_data;
  dat_t<16> GDA_MetaPipe_FSM_mu0__io_write_addr;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block__io_y_addr;
  dat_t<16> GDA_MetaPipe_FSM_mean_y_vec__io_read_addr;
  dat_t<16> GDA_MetaPipe_FSM_mean_y_vec__reg_raddr;
  dat_t<16> GDA_MetaPipe_FSM_mean_y_vec__io_write_addr;
  dat_t<16> GDA_MetaPipe_FSM_pipe0_block__io_x_addr;
  dat_t<16> GDA_MetaPipe_FSM_x_matrix__io_read_addr;
  dat_t<16> GDA_MetaPipe_FSM_x_matrix__reg_raddr;
  dat_t<16> GDA_MetaPipe_FSM__io_data_inx;
  dat_t<16> GDA_MetaPipe_FSM_x_matrix__io_write_data;
  dat_t<16> GDA_MetaPipe_FSM_x_matrix__io_write_addr;
  dat_t<16> GDA_MetaPipe_FSM__io_output;
  dat_t<16> GDA_MetaPipe_FSM__io_rd;
  dat_t<16> GDA_MetaPipe_FSM__io_wdata;
  dat_t<16> GDA_MetaPipe_FSM__io_output1;
  dat_t<16> GDA_MetaPipe_FSM__io_rd1;
  dat_t<16> GDA_MetaPipe_FSM__io_wdata1;
  dat_t<16> T264;
  dat_t<16> T266;
  dat_t<16> T268;
  dat_t<16> T270;
  dat_t<16> T274;
  dat_t<32> T117;
  dat_t<32> GDA_MetaPipe_FSM_pipe0_block_mu_addr__mult_reg;
  dat_t<32> T124;
  dat_t<32> GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__mult_reg;
  dat_t<32> T131;
  dat_t<32> GDA_MetaPipe_FSM_pipe0_block_matrix_addr__mult_reg;
  dat_t<32> GDA_MetaPipe_FSM_pipe0_block_mu_addr__io_out;
  dat_t<32> GDA_MetaPipe_FSM_pipe0_block_bool_vec_addr__io_out;
  dat_t<32> GDA_MetaPipe_FSM_pipe0_block_matrix_addr__io_out;
  dat_t<112> T279;
  dat_t<120> T280;
  dat_t<144> T281;
  dat_t<144> T282;
  dat_t<144> T283;
  dat_t<168> T284;
  dat_t<168> T285;
  dat_t<184> T286;
  mem_t<1,4> GDA_MetaPipe_FSM_mean_y_vec__bRam_rw;
  mem_t<16,16> GDA_MetaPipe_FSM_sigmaM__bRam_rw;
  mem_t<16,4> GDA_MetaPipe_FSM_subT_2_db_bram_w2__bRam_rw;
  mem_t<16,4> GDA_MetaPipe_FSM_subT_2_db_bram_w1__bRam_rw;
  mem_t<16,4> GDA_MetaPipe_FSM_subT_db_bram_w2__bRam_rw;
  mem_t<16,4> GDA_MetaPipe_FSM_subT_db_bram_w1__bRam_rw;
  mem_t<16,4> GDA_MetaPipe_FSM_subT_2__bRam_rw;
  mem_t<16,4> GDA_MetaPipe_FSM_subT__bRam_rw;
  mem_t<16,4> GDA_MetaPipe_FSM_mu1__bRam_rw;
  mem_t<16,4> GDA_MetaPipe_FSM_mu0__bRam_rw;
  mem_t<16,16> GDA_MetaPipe_FSM_x_matrix__bRam_rw;
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
class GDA_MetaPipe_FSM_api_t : public emul_api_t {
 public:
  GDA_MetaPipe_FSM_api_t(mod_t* m) : emul_api_t(m) { }
  void init_sim_data();
};

#endif
