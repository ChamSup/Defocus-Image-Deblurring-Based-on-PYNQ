// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "operator_div_assign_float.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic operator_div_assign_float::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic operator_div_assign_float::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<26> operator_div_assign_float::ap_ST_fsm_state1 = "1";
const sc_lv<26> operator_div_assign_float::ap_ST_fsm_state2 = "10";
const sc_lv<26> operator_div_assign_float::ap_ST_fsm_state3 = "100";
const sc_lv<26> operator_div_assign_float::ap_ST_fsm_state4 = "1000";
const sc_lv<26> operator_div_assign_float::ap_ST_fsm_state5 = "10000";
const sc_lv<26> operator_div_assign_float::ap_ST_fsm_state6 = "100000";
const sc_lv<26> operator_div_assign_float::ap_ST_fsm_state7 = "1000000";
const sc_lv<26> operator_div_assign_float::ap_ST_fsm_state8 = "10000000";
const sc_lv<26> operator_div_assign_float::ap_ST_fsm_state9 = "100000000";
const sc_lv<26> operator_div_assign_float::ap_ST_fsm_state10 = "1000000000";
const sc_lv<26> operator_div_assign_float::ap_ST_fsm_state11 = "10000000000";
const sc_lv<26> operator_div_assign_float::ap_ST_fsm_state12 = "100000000000";
const sc_lv<26> operator_div_assign_float::ap_ST_fsm_state13 = "1000000000000";
const sc_lv<26> operator_div_assign_float::ap_ST_fsm_state14 = "10000000000000";
const sc_lv<26> operator_div_assign_float::ap_ST_fsm_state15 = "100000000000000";
const sc_lv<26> operator_div_assign_float::ap_ST_fsm_state16 = "1000000000000000";
const sc_lv<26> operator_div_assign_float::ap_ST_fsm_state17 = "10000000000000000";
const sc_lv<26> operator_div_assign_float::ap_ST_fsm_state18 = "100000000000000000";
const sc_lv<26> operator_div_assign_float::ap_ST_fsm_state19 = "1000000000000000000";
const sc_lv<26> operator_div_assign_float::ap_ST_fsm_state20 = "10000000000000000000";
const sc_lv<26> operator_div_assign_float::ap_ST_fsm_state21 = "100000000000000000000";
const sc_lv<26> operator_div_assign_float::ap_ST_fsm_state22 = "1000000000000000000000";
const sc_lv<26> operator_div_assign_float::ap_ST_fsm_state23 = "10000000000000000000000";
const sc_lv<26> operator_div_assign_float::ap_ST_fsm_state24 = "100000000000000000000000";
const sc_lv<26> operator_div_assign_float::ap_ST_fsm_state25 = "1000000000000000000000000";
const sc_lv<26> operator_div_assign_float::ap_ST_fsm_state26 = "10000000000000000000000000";
const sc_lv<32> operator_div_assign_float::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> operator_div_assign_float::ap_const_lv32_1 = "1";
const sc_lv<32> operator_div_assign_float::ap_const_lv32_4 = "100";
const sc_lv<32> operator_div_assign_float::ap_const_lv32_9 = "1001";
const sc_lv<32> operator_div_assign_float::ap_const_lv32_5 = "101";
const sc_lv<32> operator_div_assign_float::ap_const_lv32_A = "1010";
const sc_lv<32> operator_div_assign_float::ap_const_lv32_19 = "11001";
const bool operator_div_assign_float::ap_const_boolean_1 = true;

operator_div_assign_float::operator_div_assign_float(sc_module_name name) : sc_module(name), mVcdFile(0) {
    WienerDeblur_faddibs_U141 = new WienerDeblur_faddibs<1,5,32,32,32>("WienerDeblur_faddibs_U141");
    WienerDeblur_faddibs_U141->clk(ap_clk);
    WienerDeblur_faddibs_U141->reset(ap_rst);
    WienerDeblur_faddibs_U141->din0(tmp_reg_136);
    WienerDeblur_faddibs_U141->din1(tmp_1_reg_141);
    WienerDeblur_faddibs_U141->ce(ap_var_for_const0);
    WienerDeblur_faddibs_U141->dout(grp_fu_48_p2);
    WienerDeblur_faddibs_U142 = new WienerDeblur_faddibs<1,5,32,32,32>("WienerDeblur_faddibs_U142");
    WienerDeblur_faddibs_U142->clk(ap_clk);
    WienerDeblur_faddibs_U142->reset(ap_rst);
    WienerDeblur_faddibs_U142->din0(tmp_3_reg_146);
    WienerDeblur_faddibs_U142->din1(tmp_4_reg_151);
    WienerDeblur_faddibs_U142->ce(ap_var_for_const0);
    WienerDeblur_faddibs_U142->dout(grp_fu_52_p2);
    WienerDeblur_fsubbkb_U143 = new WienerDeblur_fsubbkb<1,5,32,32,32>("WienerDeblur_fsubbkb_U143");
    WienerDeblur_fsubbkb_U143->clk(ap_clk);
    WienerDeblur_fsubbkb_U143->reset(ap_rst);
    WienerDeblur_fsubbkb_U143->din0(tmp_6_reg_156);
    WienerDeblur_fsubbkb_U143->din1(tmp_7_reg_161);
    WienerDeblur_fsubbkb_U143->ce(ap_var_for_const0);
    WienerDeblur_fsubbkb_U143->dout(grp_fu_56_p2);
    WienerDeblur_fmuljbC_U144 = new WienerDeblur_fmuljbC<1,4,32,32,32>("WienerDeblur_fmuljbC_U144");
    WienerDeblur_fmuljbC_U144->clk(ap_clk);
    WienerDeblur_fmuljbC_U144->reset(ap_rst);
    WienerDeblur_fmuljbC_U144->din0(p_t_real_reg_108);
    WienerDeblur_fmuljbC_U144->din1(complex_float_M_real_read);
    WienerDeblur_fmuljbC_U144->ce(ap_var_for_const0);
    WienerDeblur_fmuljbC_U144->dout(grp_fu_60_p2);
    WienerDeblur_fmuljbC_U145 = new WienerDeblur_fmuljbC<1,4,32,32,32>("WienerDeblur_fmuljbC_U145");
    WienerDeblur_fmuljbC_U145->clk(ap_clk);
    WienerDeblur_fmuljbC_U145->reset(ap_rst);
    WienerDeblur_fmuljbC_U145->din0(p_t_imag_reg_116);
    WienerDeblur_fmuljbC_U145->din1(complex_float_M_imag_read);
    WienerDeblur_fmuljbC_U145->ce(ap_var_for_const0);
    WienerDeblur_fmuljbC_U145->dout(grp_fu_65_p2);
    WienerDeblur_fmuljbC_U146 = new WienerDeblur_fmuljbC<1,4,32,32,32>("WienerDeblur_fmuljbC_U146");
    WienerDeblur_fmuljbC_U146->clk(ap_clk);
    WienerDeblur_fmuljbC_U146->reset(ap_rst);
    WienerDeblur_fmuljbC_U146->din0(p_t_real_reg_108);
    WienerDeblur_fmuljbC_U146->din1(p_t_real_reg_108);
    WienerDeblur_fmuljbC_U146->ce(ap_var_for_const0);
    WienerDeblur_fmuljbC_U146->dout(grp_fu_70_p2);
    WienerDeblur_fmuljbC_U147 = new WienerDeblur_fmuljbC<1,4,32,32,32>("WienerDeblur_fmuljbC_U147");
    WienerDeblur_fmuljbC_U147->clk(ap_clk);
    WienerDeblur_fmuljbC_U147->reset(ap_rst);
    WienerDeblur_fmuljbC_U147->din0(p_t_imag_reg_116);
    WienerDeblur_fmuljbC_U147->din1(p_t_imag_reg_116);
    WienerDeblur_fmuljbC_U147->ce(ap_var_for_const0);
    WienerDeblur_fmuljbC_U147->dout(grp_fu_74_p2);
    WienerDeblur_fmuljbC_U148 = new WienerDeblur_fmuljbC<1,4,32,32,32>("WienerDeblur_fmuljbC_U148");
    WienerDeblur_fmuljbC_U148->clk(ap_clk);
    WienerDeblur_fmuljbC_U148->reset(ap_rst);
    WienerDeblur_fmuljbC_U148->din0(p_t_real_reg_108);
    WienerDeblur_fmuljbC_U148->din1(complex_float_M_imag_read);
    WienerDeblur_fmuljbC_U148->ce(ap_var_for_const0);
    WienerDeblur_fmuljbC_U148->dout(grp_fu_78_p2);
    WienerDeblur_fmuljbC_U149 = new WienerDeblur_fmuljbC<1,4,32,32,32>("WienerDeblur_fmuljbC_U149");
    WienerDeblur_fmuljbC_U149->clk(ap_clk);
    WienerDeblur_fmuljbC_U149->reset(ap_rst);
    WienerDeblur_fmuljbC_U149->din0(p_t_imag_reg_116);
    WienerDeblur_fmuljbC_U149->din1(complex_float_M_real_read);
    WienerDeblur_fmuljbC_U149->ce(ap_var_for_const0);
    WienerDeblur_fmuljbC_U149->dout(grp_fu_83_p2);
    WienerDeblur_fdivNgs_U150 = new WienerDeblur_fdivNgs<1,16,32,32,32>("WienerDeblur_fdivNgs_U150");
    WienerDeblur_fdivNgs_U150->clk(ap_clk);
    WienerDeblur_fdivNgs_U150->reset(ap_rst);
    WienerDeblur_fdivNgs_U150->din0(tmp_2_reg_166);
    WienerDeblur_fdivNgs_U150->din1(tmp_5_reg_171);
    WienerDeblur_fdivNgs_U150->ce(ap_var_for_const0);
    WienerDeblur_fdivNgs_U150->dout(grp_fu_88_p2);
    WienerDeblur_fdivNgs_U151 = new WienerDeblur_fdivNgs<1,16,32,32,32>("WienerDeblur_fdivNgs_U151");
    WienerDeblur_fdivNgs_U151->clk(ap_clk);
    WienerDeblur_fdivNgs_U151->reset(ap_rst);
    WienerDeblur_fdivNgs_U151->din0(tmp_8_reg_177);
    WienerDeblur_fdivNgs_U151->din1(tmp_5_reg_171);
    WienerDeblur_fdivNgs_U151->ce(ap_var_for_const0);
    WienerDeblur_fdivNgs_U151->dout(grp_fu_92_p2);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state10);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state11);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state26);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_state1);
    sensitive << ( ap_start );
    sensitive << ( p_z_M_real_empty_n );
    sensitive << ( p_z_M_imag_empty_n );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state26 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state26 );

    SC_METHOD(thread_ap_return_0);
    sensitive << ( grp_fu_88_p2 );
    sensitive << ( ap_CS_fsm_state26 );
    sensitive << ( ap_return_0_preg );

    SC_METHOD(thread_ap_return_1);
    sensitive << ( ap_CS_fsm_state26 );
    sensitive << ( grp_fu_92_p2 );
    sensitive << ( ap_return_1_preg );

    SC_METHOD(thread_p_z_M_imag_blk_n);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( p_z_M_imag_empty_n );

    SC_METHOD(thread_p_z_M_imag_read);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( p_z_M_real_empty_n );
    sensitive << ( p_z_M_imag_empty_n );

    SC_METHOD(thread_p_z_M_real_blk_n);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( p_z_M_real_empty_n );

    SC_METHOD(thread_p_z_M_real_read);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( p_z_M_real_empty_n );
    sensitive << ( p_z_M_imag_empty_n );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( p_z_M_real_empty_n );
    sensitive << ( p_z_M_imag_empty_n );

    SC_THREAD(thread_ap_var_for_const0);

    ap_CS_fsm = "00000000000000000000000001";
    ap_return_0_preg = "00000000000000000000000000000000";
    ap_return_1_preg = "00000000000000000000000000000000";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "operator_div_assign_float_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, complex_float_M_real_read, "(port)complex_float_M_real_read");
    sc_trace(mVcdFile, complex_float_M_imag_read, "(port)complex_float_M_imag_read");
    sc_trace(mVcdFile, p_z_M_real_dout, "(port)p_z_M_real_dout");
    sc_trace(mVcdFile, p_z_M_real_empty_n, "(port)p_z_M_real_empty_n");
    sc_trace(mVcdFile, p_z_M_real_read, "(port)p_z_M_real_read");
    sc_trace(mVcdFile, p_z_M_imag_dout, "(port)p_z_M_imag_dout");
    sc_trace(mVcdFile, p_z_M_imag_empty_n, "(port)p_z_M_imag_empty_n");
    sc_trace(mVcdFile, p_z_M_imag_read, "(port)p_z_M_imag_read");
    sc_trace(mVcdFile, ap_return_0, "(port)ap_return_0");
    sc_trace(mVcdFile, ap_return_1, "(port)ap_return_1");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, p_z_M_real_blk_n, "p_z_M_real_blk_n");
    sc_trace(mVcdFile, p_z_M_imag_blk_n, "p_z_M_imag_blk_n");
    sc_trace(mVcdFile, p_t_real_reg_108, "p_t_real_reg_108");
    sc_trace(mVcdFile, ap_block_state1, "ap_block_state1");
    sc_trace(mVcdFile, p_t_imag_reg_116, "p_t_imag_reg_116");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, grp_fu_60_p2, "grp_fu_60_p2");
    sc_trace(mVcdFile, tmp_reg_136, "tmp_reg_136");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, grp_fu_65_p2, "grp_fu_65_p2");
    sc_trace(mVcdFile, tmp_1_reg_141, "tmp_1_reg_141");
    sc_trace(mVcdFile, grp_fu_70_p2, "grp_fu_70_p2");
    sc_trace(mVcdFile, tmp_3_reg_146, "tmp_3_reg_146");
    sc_trace(mVcdFile, grp_fu_74_p2, "grp_fu_74_p2");
    sc_trace(mVcdFile, tmp_4_reg_151, "tmp_4_reg_151");
    sc_trace(mVcdFile, grp_fu_78_p2, "grp_fu_78_p2");
    sc_trace(mVcdFile, tmp_6_reg_156, "tmp_6_reg_156");
    sc_trace(mVcdFile, grp_fu_83_p2, "grp_fu_83_p2");
    sc_trace(mVcdFile, tmp_7_reg_161, "tmp_7_reg_161");
    sc_trace(mVcdFile, grp_fu_48_p2, "grp_fu_48_p2");
    sc_trace(mVcdFile, tmp_2_reg_166, "tmp_2_reg_166");
    sc_trace(mVcdFile, ap_CS_fsm_state10, "ap_CS_fsm_state10");
    sc_trace(mVcdFile, grp_fu_52_p2, "grp_fu_52_p2");
    sc_trace(mVcdFile, tmp_5_reg_171, "tmp_5_reg_171");
    sc_trace(mVcdFile, grp_fu_56_p2, "grp_fu_56_p2");
    sc_trace(mVcdFile, tmp_8_reg_177, "tmp_8_reg_177");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, ap_CS_fsm_state11, "ap_CS_fsm_state11");
    sc_trace(mVcdFile, grp_fu_88_p2, "grp_fu_88_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state26, "ap_CS_fsm_state26");
    sc_trace(mVcdFile, grp_fu_92_p2, "grp_fu_92_p2");
    sc_trace(mVcdFile, ap_return_0_preg, "ap_return_0_preg");
    sc_trace(mVcdFile, ap_return_1_preg, "ap_return_1_preg");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

operator_div_assign_float::~operator_div_assign_float() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete WienerDeblur_faddibs_U141;
    delete WienerDeblur_faddibs_U142;
    delete WienerDeblur_fsubbkb_U143;
    delete WienerDeblur_fmuljbC_U144;
    delete WienerDeblur_fmuljbC_U145;
    delete WienerDeblur_fmuljbC_U146;
    delete WienerDeblur_fmuljbC_U147;
    delete WienerDeblur_fmuljbC_U148;
    delete WienerDeblur_fmuljbC_U149;
    delete WienerDeblur_fdivNgs_U150;
    delete WienerDeblur_fdivNgs_U151;
}

void operator_div_assign_float::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_logic_1;
}

void operator_div_assign_float::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_0_preg = ap_const_lv32_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
            ap_return_0_preg = grp_fu_88_p2.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_return_1_preg = ap_const_lv32_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
            ap_return_1_preg = grp_fu_92_p2.read();
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_const_logic_0, p_z_M_real_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, p_z_M_imag_empty_n.read())))) {
        p_t_imag_reg_116 = p_z_M_imag_dout.read();
        p_t_real_reg_108 = p_z_M_real_dout.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        tmp_1_reg_141 = grp_fu_65_p2.read();
        tmp_3_reg_146 = grp_fu_70_p2.read();
        tmp_4_reg_151 = grp_fu_74_p2.read();
        tmp_6_reg_156 = grp_fu_78_p2.read();
        tmp_7_reg_161 = grp_fu_83_p2.read();
        tmp_reg_136 = grp_fu_60_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state10.read())) {
        tmp_2_reg_166 = grp_fu_48_p2.read();
        tmp_5_reg_171 = grp_fu_52_p2.read();
        tmp_8_reg_177 = grp_fu_56_p2.read();
    }
}

void operator_div_assign_float::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void operator_div_assign_float::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[9];
}

void operator_div_assign_float::thread_ap_CS_fsm_state11() {
    ap_CS_fsm_state11 = ap_CS_fsm.read()[10];
}

void operator_div_assign_float::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void operator_div_assign_float::thread_ap_CS_fsm_state26() {
    ap_CS_fsm_state26 = ap_CS_fsm.read()[25];
}

void operator_div_assign_float::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void operator_div_assign_float::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void operator_div_assign_float::thread_ap_block_state1() {
    ap_block_state1 = (esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_const_logic_0, p_z_M_real_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, p_z_M_imag_empty_n.read()));
}

void operator_div_assign_float::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void operator_div_assign_float::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void operator_div_assign_float::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void operator_div_assign_float::thread_ap_return_0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        ap_return_0 = grp_fu_88_p2.read();
    } else {
        ap_return_0 = ap_return_0_preg.read();
    }
}

void operator_div_assign_float::thread_ap_return_1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state26.read())) {
        ap_return_1 = grp_fu_92_p2.read();
    } else {
        ap_return_1 = ap_return_1_preg.read();
    }
}

void operator_div_assign_float::thread_p_z_M_imag_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        p_z_M_imag_blk_n = p_z_M_imag_empty_n.read();
    } else {
        p_z_M_imag_blk_n = ap_const_logic_1;
    }
}

void operator_div_assign_float::thread_p_z_M_imag_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_const_logic_0, p_z_M_real_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, p_z_M_imag_empty_n.read())))) {
        p_z_M_imag_read = ap_const_logic_1;
    } else {
        p_z_M_imag_read = ap_const_logic_0;
    }
}

void operator_div_assign_float::thread_p_z_M_real_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        p_z_M_real_blk_n = p_z_M_real_empty_n.read();
    } else {
        p_z_M_real_blk_n = ap_const_logic_1;
    }
}

void operator_div_assign_float::thread_p_z_M_real_read() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_const_logic_0, p_z_M_real_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, p_z_M_imag_empty_n.read())))) {
        p_z_M_real_read = ap_const_logic_1;
    } else {
        p_z_M_real_read = ap_const_logic_0;
    }
}

void operator_div_assign_float::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && !(esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) || esl_seteq<1,1,1>(ap_const_logic_0, p_z_M_real_empty_n.read()) || esl_seteq<1,1,1>(ap_const_logic_0, p_z_M_imag_empty_n.read())))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state9;
            break;
        case 256 : 
            ap_NS_fsm = ap_ST_fsm_state10;
            break;
        case 512 : 
            ap_NS_fsm = ap_ST_fsm_state11;
            break;
        case 1024 : 
            ap_NS_fsm = ap_ST_fsm_state12;
            break;
        case 2048 : 
            ap_NS_fsm = ap_ST_fsm_state13;
            break;
        case 4096 : 
            ap_NS_fsm = ap_ST_fsm_state14;
            break;
        case 8192 : 
            ap_NS_fsm = ap_ST_fsm_state15;
            break;
        case 16384 : 
            ap_NS_fsm = ap_ST_fsm_state16;
            break;
        case 32768 : 
            ap_NS_fsm = ap_ST_fsm_state17;
            break;
        case 65536 : 
            ap_NS_fsm = ap_ST_fsm_state18;
            break;
        case 131072 : 
            ap_NS_fsm = ap_ST_fsm_state19;
            break;
        case 262144 : 
            ap_NS_fsm = ap_ST_fsm_state20;
            break;
        case 524288 : 
            ap_NS_fsm = ap_ST_fsm_state21;
            break;
        case 1048576 : 
            ap_NS_fsm = ap_ST_fsm_state22;
            break;
        case 2097152 : 
            ap_NS_fsm = ap_ST_fsm_state23;
            break;
        case 4194304 : 
            ap_NS_fsm = ap_ST_fsm_state24;
            break;
        case 8388608 : 
            ap_NS_fsm = ap_ST_fsm_state25;
            break;
        case 16777216 : 
            ap_NS_fsm = ap_ST_fsm_state26;
            break;
        case 33554432 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XXXXXXXXXXXXXXXXXXXXXXXXXX";
            break;
    }
}

}

