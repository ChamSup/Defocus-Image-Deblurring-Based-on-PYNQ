// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _operator_float_1_HH_
#define _operator_float_1_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "operator_mul_assign_float.h"

namespace ap_rtl {

struct operator_float_1 : public sc_module {
    // Port declarations 17
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > fft_kernel_modu_M_r_dout;
    sc_in< sc_logic > fft_kernel_modu_M_r_empty_n;
    sc_out< sc_logic > fft_kernel_modu_M_r_read;
    sc_in< sc_lv<32> > fft_kernel_modu_M_i_dout;
    sc_in< sc_logic > fft_kernel_modu_M_i_empty_n;
    sc_out< sc_logic > fft_kernel_modu_M_i_read;
    sc_out< sc_lv<32> > ap_return_0;
    sc_out< sc_lv<32> > ap_return_1;
    sc_out< sc_logic > fft_kernel_modu_M_r_blk_n;
    sc_out< sc_logic > fft_kernel_modu_M_i_blk_n;
    sc_in< sc_logic > ap_ce;


    // Module declarations
    operator_float_1(sc_module_name name);
    SC_HAS_PROCESS(operator_float_1);

    ~operator_float_1();

    sc_trace_file* mVcdFile;

    operator_mul_assign_float* grp_operator_mul_assign_float_fu_30;
    sc_signal< sc_lv<11> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > grp_operator_mul_assign_float_fu_30_p_z_M_real_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > grp_operator_mul_assign_float_fu_30_p_z_M_imag_blk_n;
    sc_signal< sc_lv<32> > p_r_M_real_reg_40;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<32> > p_r_M_imag_reg_45;
    sc_signal< sc_logic > grp_operator_mul_assign_float_fu_30_ap_start;
    sc_signal< sc_logic > grp_operator_mul_assign_float_fu_30_ap_done;
    sc_signal< sc_logic > grp_operator_mul_assign_float_fu_30_ap_idle;
    sc_signal< sc_logic > grp_operator_mul_assign_float_fu_30_ap_ready;
    sc_signal< sc_logic > grp_operator_mul_assign_float_fu_30_p_z_M_real_read;
    sc_signal< sc_logic > grp_operator_mul_assign_float_fu_30_p_z_M_imag_read;
    sc_signal< sc_logic > grp_operator_mul_assign_float_fu_30_ap_ce;
    sc_signal< sc_lv<32> > grp_operator_mul_assign_float_fu_30_ap_return_0;
    sc_signal< sc_lv<32> > grp_operator_mul_assign_float_fu_30_ap_return_1;
    sc_signal< bool > ap_block_state2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_logic > grp_operator_mul_assign_float_fu_30_ap_start_reg;
    sc_signal< sc_lv<11> > ap_NS_fsm;
    sc_signal< sc_logic > ap_NS_fsm_state2;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<11> ap_ST_fsm_state1;
    static const sc_lv<11> ap_ST_fsm_state2;
    static const sc_lv<11> ap_ST_fsm_state3;
    static const sc_lv<11> ap_ST_fsm_state4;
    static const sc_lv<11> ap_ST_fsm_state5;
    static const sc_lv<11> ap_ST_fsm_state6;
    static const sc_lv<11> ap_ST_fsm_state7;
    static const sc_lv<11> ap_ST_fsm_state8;
    static const sc_lv<11> ap_ST_fsm_state9;
    static const sc_lv<11> ap_ST_fsm_state10;
    static const sc_lv<11> ap_ST_fsm_state11;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_NS_fsm_state2();
    void thread_ap_block_state1();
    void thread_ap_block_state2();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return_0();
    void thread_ap_return_1();
    void thread_fft_kernel_modu_M_i_blk_n();
    void thread_fft_kernel_modu_M_i_read();
    void thread_fft_kernel_modu_M_r_blk_n();
    void thread_fft_kernel_modu_M_r_read();
    void thread_grp_operator_mul_assign_float_fu_30_ap_ce();
    void thread_grp_operator_mul_assign_float_fu_30_ap_start();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
