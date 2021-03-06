// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _operator_div_float_HH_
#define _operator_div_float_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "operator_div_assign_float.h"

namespace ap_rtl {

struct operator_div_float : public sc_module {
    // Port declarations 20
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > p_x_M_real_dout;
    sc_in< sc_logic > p_x_M_real_empty_n;
    sc_out< sc_logic > p_x_M_real_read;
    sc_in< sc_lv<32> > p_x_M_imag_dout;
    sc_in< sc_logic > p_x_M_imag_empty_n;
    sc_out< sc_logic > p_x_M_imag_read;
    sc_in< sc_lv<32> > p_y_M_real_dout;
    sc_in< sc_logic > p_y_M_real_empty_n;
    sc_out< sc_logic > p_y_M_real_read;
    sc_in< sc_lv<32> > p_y_M_imag_dout;
    sc_in< sc_logic > p_y_M_imag_empty_n;
    sc_out< sc_logic > p_y_M_imag_read;
    sc_out< sc_lv<32> > ap_return_0;
    sc_out< sc_lv<32> > ap_return_1;


    // Module declarations
    operator_div_float(sc_module_name name);
    SC_HAS_PROCESS(operator_div_float);

    ~operator_div_float();

    sc_trace_file* mVcdFile;

    operator_div_assign_float* grp_operator_div_assign_float_fu_34;
    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > p_x_M_real_blk_n;
    sc_signal< sc_logic > p_x_M_imag_blk_n;
    sc_signal< sc_lv<32> > p_r_M_real_reg_44;
    sc_signal< bool > ap_block_state1;
    sc_signal< sc_lv<32> > p_r_M_imag_reg_49;
    sc_signal< sc_logic > grp_operator_div_assign_float_fu_34_ap_start;
    sc_signal< sc_logic > grp_operator_div_assign_float_fu_34_ap_done;
    sc_signal< sc_logic > grp_operator_div_assign_float_fu_34_ap_idle;
    sc_signal< sc_logic > grp_operator_div_assign_float_fu_34_ap_ready;
    sc_signal< sc_logic > grp_operator_div_assign_float_fu_34_p_z_M_real_read;
    sc_signal< sc_logic > grp_operator_div_assign_float_fu_34_p_z_M_imag_read;
    sc_signal< sc_lv<32> > grp_operator_div_assign_float_fu_34_ap_return_0;
    sc_signal< sc_lv<32> > grp_operator_div_assign_float_fu_34_ap_return_1;
    sc_signal< sc_logic > grp_operator_div_assign_float_fu_34_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<32> > ap_return_0_preg;
    sc_signal< sc_lv<32> > ap_return_1_preg;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_state2;
    static const sc_lv<3> ap_ST_fsm_state3;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_block_state1();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return_0();
    void thread_ap_return_1();
    void thread_grp_operator_div_assign_float_fu_34_ap_start();
    void thread_p_x_M_imag_blk_n();
    void thread_p_x_M_imag_read();
    void thread_p_x_M_real_blk_n();
    void thread_p_x_M_real_read();
    void thread_p_y_M_imag_read();
    void thread_p_y_M_real_read();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
