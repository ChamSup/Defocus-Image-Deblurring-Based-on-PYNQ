// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _dummy_proc_middle_1394_HH_
#define _dummy_proc_middle_1394_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "WienerDeblur_fsubbkb.h"
#include "WienerDeblur_sitocud.h"
#include "WienerDeblur_fcmpdEe.h"

namespace ap_rtl {

struct dummy_proc_middle_1394 : public sc_module {
    // Port declarations 13
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<8> > st_in_data_V_read;
    sc_out< sc_lv<64> > out_r_din;
    sc_in< sc_logic > out_r_full_n;
    sc_out< sc_logic > out_r_write;
    sc_in< sc_lv<64> > xk1_dout;
    sc_in< sc_logic > xk1_empty_n;
    sc_out< sc_logic > xk1_read;
    sc_signal< sc_logic > ap_var_for_const0;
    sc_signal< sc_lv<32> > ap_var_for_const1;
    sc_signal< sc_lv<32> > ap_var_for_const3;
    sc_signal< sc_lv<5> > ap_var_for_const2;
    sc_signal< sc_lv<5> > ap_var_for_const4;


    // Module declarations
    dummy_proc_middle_1394(sc_module_name name);
    SC_HAS_PROCESS(dummy_proc_middle_1394);

    ~dummy_proc_middle_1394();

    sc_trace_file* mVcdFile;

    WienerDeblur_fsubbkb<1,5,32,32,32>* WienerDeblur_fsubbkb_U13;
    WienerDeblur_fsubbkb<1,5,32,32,32>* WienerDeblur_fsubbkb_U14;
    WienerDeblur_sitocud<1,6,32,32>* WienerDeblur_sitocud_U15;
    WienerDeblur_sitocud<1,6,32,32>* WienerDeblur_sitocud_U16;
    WienerDeblur_fcmpdEe<1,1,32,32,1>* WienerDeblur_fcmpdEe_U17;
    WienerDeblur_fcmpdEe<1,1,32,32,1>* WienerDeblur_fcmpdEe_U18;
    WienerDeblur_fcmpdEe<1,1,32,32,1>* WienerDeblur_fcmpdEe_U19;
    WienerDeblur_fcmpdEe<1,1,32,32,1>* WienerDeblur_fcmpdEe_U20;
    sc_signal< sc_lv<15> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > out_r_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_logic > xk1_blk_n;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > exitcond_fu_160_p2;
    sc_signal< sc_lv<1> > sel_tmp_fu_154_p2;
    sc_signal< sc_lv<1> > sel_tmp_reg_577;
    sc_signal< sc_lv<9> > i_1_fu_166_p2;
    sc_signal< sc_lv<9> > i_1_reg_586;
    sc_signal< bool > ap_block_state2;
    sc_signal< sc_lv<32> > p_Val2_s_fu_172_p1;
    sc_signal< sc_lv<32> > p_Val2_s_reg_591;
    sc_signal< sc_lv<32> > p_Val2_91_reg_596;
    sc_signal< sc_lv<23> > tmp_V_5_fu_196_p1;
    sc_signal< sc_lv<23> > tmp_V_5_reg_601;
    sc_signal< sc_lv<1> > notlhs_fu_200_p2;
    sc_signal< sc_lv<1> > notlhs_reg_607;
    sc_signal< sc_lv<1> > p_Result_s_reg_612;
    sc_signal< sc_lv<1> > isNeg_fu_224_p3;
    sc_signal< sc_lv<1> > isNeg_reg_617;
    sc_signal< sc_lv<9> > ush_fu_242_p3;
    sc_signal< sc_lv<9> > ush_reg_622;
    sc_signal< sc_lv<23> > tmp_V_7_reg_628;
    sc_signal< sc_lv<1> > notlhs2_fu_270_p2;
    sc_signal< sc_lv<1> > notlhs2_reg_634;
    sc_signal< sc_lv<1> > p_Result_27_reg_639;
    sc_signal< sc_lv<1> > isNeg_1_fu_294_p3;
    sc_signal< sc_lv<1> > isNeg_1_reg_644;
    sc_signal< sc_lv<9> > ush_1_fu_312_p3;
    sc_signal< sc_lv<9> > ush_1_reg_649;
    sc_signal< sc_lv<32> > re_1_fu_320_p1;
    sc_signal< sc_lv<32> > re_1_reg_655;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<32> > im_1_fu_325_p1;
    sc_signal< sc_lv<32> > im_1_reg_661;
    sc_signal< sc_lv<32> > p_Val2_97_fu_428_p3;
    sc_signal< sc_lv<32> > p_Val2_97_reg_667;
    sc_signal< sc_lv<1> > sel_tmp1_fu_435_p2;
    sc_signal< sc_lv<1> > sel_tmp1_reg_672;
    sc_signal< sc_lv<32> > p_Val2_99_fu_538_p3;
    sc_signal< sc_lv<32> > p_Val2_99_reg_677;
    sc_signal< sc_lv<1> > sel_tmp4_fu_545_p2;
    sc_signal< sc_lv<1> > sel_tmp4_reg_682;
    sc_signal< sc_lv<32> > grp_fu_124_p1;
    sc_signal< sc_lv<32> > tmp_s_reg_687;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<32> > grp_fu_127_p1;
    sc_signal< sc_lv<32> > tmp_51_reg_692;
    sc_signal< sc_lv<32> > re_2_fu_550_p3;
    sc_signal< sc_lv<32> > re_2_reg_697;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<32> > im_2_fu_556_p3;
    sc_signal< sc_lv<32> > im_2_reg_702;
    sc_signal< sc_lv<9> > i_reg_105;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > ovflw_fu_150_p1;
    sc_signal< sc_lv<8> > tmp_V_fu_186_p4;
    sc_signal< sc_lv<9> > tmp_i_i_i_i_cast3_fu_214_p1;
    sc_signal< sc_lv<9> > sh_assign_fu_218_p2;
    sc_signal< sc_lv<8> > tmp_i_i_i_fu_232_p2;
    sc_signal< sc_lv<9> > tmp_i_i_i_cast_fu_238_p1;
    sc_signal< sc_lv<8> > tmp_V_6_fu_250_p4;
    sc_signal< sc_lv<9> > tmp_i_i_i_i9_cast1_fu_284_p1;
    sc_signal< sc_lv<9> > sh_assign_3_fu_288_p2;
    sc_signal< sc_lv<8> > tmp_i_i_i2_fu_302_p2;
    sc_signal< sc_lv<9> > tmp_i_i_i2_cast_fu_308_p1;
    sc_signal< sc_lv<1> > notrhs_fu_330_p2;
    sc_signal< sc_lv<1> > tmp_34_fu_130_p2;
    sc_signal< sc_lv<1> > tmp_39_fu_135_p2;
    sc_signal< sc_lv<1> > tmp_33_fu_335_p2;
    sc_signal< sc_lv<1> > tmp_45_fu_340_p2;
    sc_signal< sc_lv<1> > or_cond_demorgan_fu_346_p2;
    sc_signal< sc_lv<25> > mantissa_V_fu_358_p4;
    sc_signal< sc_lv<32> > sh_assign_11_cast_fu_371_p1;
    sc_signal< sc_lv<25> > sh_assign_11_cast_ca_fu_374_p1;
    sc_signal< sc_lv<79> > mantissa_V_4_cast4_fu_367_p1;
    sc_signal< sc_lv<79> > tmp_i_i_i_72_fu_377_p1;
    sc_signal< sc_lv<25> > r_V_fu_381_p2;
    sc_signal< sc_lv<1> > tmp_fu_393_p3;
    sc_signal< sc_lv<79> > r_V_39_fu_387_p2;
    sc_signal< sc_lv<32> > tmp_46_fu_401_p1;
    sc_signal< sc_lv<32> > tmp_47_fu_405_p4;
    sc_signal< sc_lv<32> > p_Val2_96_fu_415_p3;
    sc_signal< sc_lv<32> > result_V_1_fu_422_p2;
    sc_signal< sc_lv<1> > or_cond_fu_352_p2;
    sc_signal< sc_lv<1> > notrhs2_fu_440_p2;
    sc_signal< sc_lv<1> > tmp_44_fu_140_p2;
    sc_signal< sc_lv<1> > tmp_48_fu_145_p2;
    sc_signal< sc_lv<1> > tmp_43_fu_445_p2;
    sc_signal< sc_lv<1> > tmp_49_fu_450_p2;
    sc_signal< sc_lv<1> > or_cond2_demorgan_fu_456_p2;
    sc_signal< sc_lv<25> > mantissa_V_1_fu_468_p4;
    sc_signal< sc_lv<32> > sh_assign_14_cast_fu_481_p1;
    sc_signal< sc_lv<25> > sh_assign_14_cast_ca_fu_484_p1;
    sc_signal< sc_lv<79> > mantissa_V_6_cast2_fu_477_p1;
    sc_signal< sc_lv<79> > tmp_i_i_i2_73_fu_487_p1;
    sc_signal< sc_lv<25> > r_V_40_fu_491_p2;
    sc_signal< sc_lv<1> > tmp_57_fu_503_p3;
    sc_signal< sc_lv<79> > r_V_41_fu_497_p2;
    sc_signal< sc_lv<32> > tmp_50_fu_511_p1;
    sc_signal< sc_lv<32> > tmp_52_fu_515_p4;
    sc_signal< sc_lv<32> > p_Val2_98_fu_525_p3;
    sc_signal< sc_lv<32> > result_V_3_fu_532_p2;
    sc_signal< sc_lv<1> > or_cond2_fu_462_p2;
    sc_signal< sc_lv<32> > grp_fu_116_p2;
    sc_signal< sc_lv<32> > grp_fu_120_p2;
    sc_signal< sc_lv<32> > p_i_assign_toint_fu_565_p1;
    sc_signal< sc_lv<32> > p_r_assign_toint_fu_562_p1;
    sc_signal< sc_lv<15> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<15> ap_ST_fsm_state1;
    static const sc_lv<15> ap_ST_fsm_state2;
    static const sc_lv<15> ap_ST_fsm_state3;
    static const sc_lv<15> ap_ST_fsm_state4;
    static const sc_lv<15> ap_ST_fsm_state5;
    static const sc_lv<15> ap_ST_fsm_state6;
    static const sc_lv<15> ap_ST_fsm_state7;
    static const sc_lv<15> ap_ST_fsm_state8;
    static const sc_lv<15> ap_ST_fsm_state9;
    static const sc_lv<15> ap_ST_fsm_state10;
    static const sc_lv<15> ap_ST_fsm_state11;
    static const sc_lv<15> ap_ST_fsm_state12;
    static const sc_lv<15> ap_ST_fsm_state13;
    static const sc_lv<15> ap_ST_fsm_state14;
    static const sc_lv<15> ap_ST_fsm_state15;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_BF800000;
    static const sc_lv<32> ap_const_lv32_3F800000;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<9> ap_const_lv9_100;
    static const sc_lv<9> ap_const_lv9_1;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<9> ap_const_lv9_181;
    static const sc_lv<8> ap_const_lv8_7F;
    static const sc_lv<32> ap_const_lv32_37;
    static const sc_lv<32> ap_const_lv32_3E;
    static const sc_lv<32> ap_const_lv32_36;
    static const sc_lv<23> ap_const_lv23_0;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<5> ap_const_lv5_4;
    static const sc_lv<5> ap_const_lv5_3;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const3();
    void thread_ap_var_for_const2();
    void thread_ap_var_for_const4();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_state2();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_exitcond_fu_160_p2();
    void thread_i_1_fu_166_p2();
    void thread_im_1_fu_325_p1();
    void thread_im_2_fu_556_p3();
    void thread_isNeg_1_fu_294_p3();
    void thread_isNeg_fu_224_p3();
    void thread_mantissa_V_1_fu_468_p4();
    void thread_mantissa_V_4_cast4_fu_367_p1();
    void thread_mantissa_V_6_cast2_fu_477_p1();
    void thread_mantissa_V_fu_358_p4();
    void thread_notlhs2_fu_270_p2();
    void thread_notlhs_fu_200_p2();
    void thread_notrhs2_fu_440_p2();
    void thread_notrhs_fu_330_p2();
    void thread_or_cond2_demorgan_fu_456_p2();
    void thread_or_cond2_fu_462_p2();
    void thread_or_cond_demorgan_fu_346_p2();
    void thread_or_cond_fu_352_p2();
    void thread_out_r_blk_n();
    void thread_out_r_din();
    void thread_out_r_write();
    void thread_ovflw_fu_150_p1();
    void thread_p_Val2_96_fu_415_p3();
    void thread_p_Val2_97_fu_428_p3();
    void thread_p_Val2_98_fu_525_p3();
    void thread_p_Val2_99_fu_538_p3();
    void thread_p_Val2_s_fu_172_p1();
    void thread_p_i_assign_toint_fu_565_p1();
    void thread_p_r_assign_toint_fu_562_p1();
    void thread_r_V_39_fu_387_p2();
    void thread_r_V_40_fu_491_p2();
    void thread_r_V_41_fu_497_p2();
    void thread_r_V_fu_381_p2();
    void thread_re_1_fu_320_p1();
    void thread_re_2_fu_550_p3();
    void thread_result_V_1_fu_422_p2();
    void thread_result_V_3_fu_532_p2();
    void thread_sel_tmp1_fu_435_p2();
    void thread_sel_tmp4_fu_545_p2();
    void thread_sel_tmp_fu_154_p2();
    void thread_sh_assign_11_cast_ca_fu_374_p1();
    void thread_sh_assign_11_cast_fu_371_p1();
    void thread_sh_assign_14_cast_ca_fu_484_p1();
    void thread_sh_assign_14_cast_fu_481_p1();
    void thread_sh_assign_3_fu_288_p2();
    void thread_sh_assign_fu_218_p2();
    void thread_tmp_33_fu_335_p2();
    void thread_tmp_43_fu_445_p2();
    void thread_tmp_45_fu_340_p2();
    void thread_tmp_46_fu_401_p1();
    void thread_tmp_47_fu_405_p4();
    void thread_tmp_49_fu_450_p2();
    void thread_tmp_50_fu_511_p1();
    void thread_tmp_52_fu_515_p4();
    void thread_tmp_57_fu_503_p3();
    void thread_tmp_V_5_fu_196_p1();
    void thread_tmp_V_6_fu_250_p4();
    void thread_tmp_V_fu_186_p4();
    void thread_tmp_fu_393_p3();
    void thread_tmp_i_i_i2_73_fu_487_p1();
    void thread_tmp_i_i_i2_cast_fu_308_p1();
    void thread_tmp_i_i_i2_fu_302_p2();
    void thread_tmp_i_i_i_72_fu_377_p1();
    void thread_tmp_i_i_i_cast_fu_238_p1();
    void thread_tmp_i_i_i_fu_232_p2();
    void thread_tmp_i_i_i_i9_cast1_fu_284_p1();
    void thread_tmp_i_i_i_i_cast3_fu_214_p1();
    void thread_ush_1_fu_312_p3();
    void thread_ush_fu_242_p3();
    void thread_xk1_blk_n();
    void thread_xk1_read();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
