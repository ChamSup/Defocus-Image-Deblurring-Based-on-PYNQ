-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.3
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity matrix_plus_SNR is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    fft_kernel_modu2_M_s_dout : IN STD_LOGIC_VECTOR (31 downto 0);
    fft_kernel_modu2_M_s_empty_n : IN STD_LOGIC;
    fft_kernel_modu2_M_s_read : OUT STD_LOGIC;
    G1_M_real_din : OUT STD_LOGIC_VECTOR (31 downto 0);
    G1_M_real_full_n : IN STD_LOGIC;
    G1_M_real_write : OUT STD_LOGIC;
    fft_kernel_modu2_M_1_dout : IN STD_LOGIC_VECTOR (31 downto 0);
    fft_kernel_modu2_M_1_empty_n : IN STD_LOGIC;
    fft_kernel_modu2_M_1_read : OUT STD_LOGIC;
    G1_M_imag_din : OUT STD_LOGIC_VECTOR (31 downto 0);
    G1_M_imag_full_n : IN STD_LOGIC;
    G1_M_imag_write : OUT STD_LOGIC );
end;


architecture behav of matrix_plus_SNR is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (7 downto 0) := "00000001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (7 downto 0) := "00000010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (7 downto 0) := "00000100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (7 downto 0) := "00001000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (7 downto 0) := "00010000";
    constant ap_ST_fsm_state6 : STD_LOGIC_VECTOR (7 downto 0) := "00100000";
    constant ap_ST_fsm_state7 : STD_LOGIC_VECTOR (7 downto 0) := "01000000";
    constant ap_ST_fsm_state8 : STD_LOGIC_VECTOR (7 downto 0) := "10000000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv9_0 : STD_LOGIC_VECTOR (8 downto 0) := "000000000";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv9_100 : STD_LOGIC_VECTOR (8 downto 0) := "100000000";
    constant ap_const_lv9_1 : STD_LOGIC_VECTOR (8 downto 0) := "000000001";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv32_5 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000101";
    constant ap_const_lv32_6 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000110";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (7 downto 0) := "00000001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal fft_kernel_modu2_M_s_blk_n : STD_LOGIC;
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal exitcond_fu_102_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal StgValue_33_real379_fu_77_complex_float_M_real_blk_n : STD_LOGIC;
    signal G1_M_real_blk_n : STD_LOGIC;
    signal ap_CS_fsm_state8 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state8 : signal is "none";
    signal fft_kernel_modu2_M_1_blk_n : STD_LOGIC;
    signal StgValue_28_imag380_fu_70_complex_float_M_imag_blk_n : STD_LOGIC;
    signal G1_M_imag_blk_n : STD_LOGIC;
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal r_1_fu_96_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal r_1_reg_117 : STD_LOGIC_VECTOR (8 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal c_1_fu_108_p2 : STD_LOGIC_VECTOR (8 downto 0);
    signal c_1_reg_125 : STD_LOGIC_VECTOR (8 downto 0);
    signal ap_block_state3 : BOOLEAN;
    signal fft_kernel_modu2_M_2_reg_130 : STD_LOGIC_VECTOR (31 downto 0);
    signal fft_kernel_modu2_M_3_reg_135 : STD_LOGIC_VECTOR (31 downto 0);
    signal StgValue_28_imag380_fu_70_ap_start : STD_LOGIC;
    signal StgValue_28_imag380_fu_70_ap_done : STD_LOGIC;
    signal StgValue_28_imag380_fu_70_ap_idle : STD_LOGIC;
    signal StgValue_28_imag380_fu_70_ap_ready : STD_LOGIC;
    signal StgValue_28_imag380_fu_70_complex_float_M_imag_din : STD_LOGIC_VECTOR (31 downto 0);
    signal StgValue_28_imag380_fu_70_complex_float_M_imag_write : STD_LOGIC;
    signal StgValue_33_real379_fu_77_ap_start : STD_LOGIC;
    signal StgValue_33_real379_fu_77_ap_done : STD_LOGIC;
    signal StgValue_33_real379_fu_77_ap_idle : STD_LOGIC;
    signal StgValue_33_real379_fu_77_ap_ready : STD_LOGIC;
    signal StgValue_33_real379_fu_77_complex_float_M_real_din : STD_LOGIC_VECTOR (31 downto 0);
    signal StgValue_33_real379_fu_77_complex_float_M_real_write : STD_LOGIC;
    signal r_reg_48 : STD_LOGIC_VECTOR (8 downto 0);
    signal c_reg_59 : STD_LOGIC_VECTOR (8 downto 0);
    signal exitcond1_fu_90_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal grp_fu_84_p2 : STD_LOGIC_VECTOR (31 downto 0);
    signal grp_fu_84_ce : STD_LOGIC;
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal ap_CS_fsm_state6 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state6 : signal is "none";
    signal ap_CS_fsm_state7 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state7 : signal is "none";
    signal ap_NS_fsm : STD_LOGIC_VECTOR (7 downto 0);

    component imag380 IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_idle : OUT STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
        complex_float_M_imag_din : OUT STD_LOGIC_VECTOR (31 downto 0);
        complex_float_M_imag_full_n : IN STD_LOGIC;
        complex_float_M_imag_write : OUT STD_LOGIC;
        p_val : IN STD_LOGIC_VECTOR (31 downto 0);
        complex_float_M_imag_blk_n : OUT STD_LOGIC );
    end component;


    component real379 IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_idle : OUT STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
        complex_float_M_real_din : OUT STD_LOGIC_VECTOR (31 downto 0);
        complex_float_M_real_full_n : IN STD_LOGIC;
        complex_float_M_real_write : OUT STD_LOGIC;
        p_val : IN STD_LOGIC_VECTOR (31 downto 0);
        complex_float_M_real_blk_n : OUT STD_LOGIC );
    end component;


    component WienerDeblur_faddibs IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        din0 : IN STD_LOGIC_VECTOR (31 downto 0);
        din1 : IN STD_LOGIC_VECTOR (31 downto 0);
        ce : IN STD_LOGIC;
        dout : OUT STD_LOGIC_VECTOR (31 downto 0) );
    end component;



begin
    StgValue_28_imag380_fu_70 : component imag380
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => StgValue_28_imag380_fu_70_ap_start,
        ap_done => StgValue_28_imag380_fu_70_ap_done,
        ap_idle => StgValue_28_imag380_fu_70_ap_idle,
        ap_ready => StgValue_28_imag380_fu_70_ap_ready,
        complex_float_M_imag_din => StgValue_28_imag380_fu_70_complex_float_M_imag_din,
        complex_float_M_imag_full_n => G1_M_imag_full_n,
        complex_float_M_imag_write => StgValue_28_imag380_fu_70_complex_float_M_imag_write,
        p_val => fft_kernel_modu2_M_3_reg_135,
        complex_float_M_imag_blk_n => StgValue_28_imag380_fu_70_complex_float_M_imag_blk_n);

    StgValue_33_real379_fu_77 : component real379
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => StgValue_33_real379_fu_77_ap_start,
        ap_done => StgValue_33_real379_fu_77_ap_done,
        ap_idle => StgValue_33_real379_fu_77_ap_idle,
        ap_ready => StgValue_33_real379_fu_77_ap_ready,
        complex_float_M_real_din => StgValue_33_real379_fu_77_complex_float_M_real_din,
        complex_float_M_real_full_n => G1_M_real_full_n,
        complex_float_M_real_write => StgValue_33_real379_fu_77_complex_float_M_real_write,
        p_val => grp_fu_84_p2,
        complex_float_M_real_blk_n => StgValue_33_real379_fu_77_complex_float_M_real_blk_n);

    WienerDeblur_faddibs_U136 : component WienerDeblur_faddibs
    generic map (
        ID => 1,
        NUM_STAGE => 5,
        din0_WIDTH => 32,
        din1_WIDTH => 32,
        dout_WIDTH => 32)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => fft_kernel_modu2_M_2_reg_130,
        din1 => ap_const_lv32_0,
        ce => grp_fu_84_ce,
        dout => grp_fu_84_p2);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    c_reg_59_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond1_fu_90_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                c_reg_59 <= ap_const_lv9_0;
            elsif (((ap_const_logic_1 = StgValue_33_real379_fu_77_complex_float_M_real_blk_n) and (ap_const_logic_1 = ap_CS_fsm_state8))) then 
                c_reg_59 <= c_1_reg_125;
            end if; 
        end if;
    end process;

    r_reg_48_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((not((((exitcond_fu_102_p2 = ap_const_lv1_0) and (fft_kernel_modu2_M_1_empty_n = ap_const_logic_0)) or ((exitcond_fu_102_p2 = ap_const_lv1_0) and (fft_kernel_modu2_M_s_empty_n = ap_const_logic_0)))) and (exitcond_fu_102_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                r_reg_48 <= r_1_reg_117;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                r_reg_48 <= ap_const_lv9_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((not((((exitcond_fu_102_p2 = ap_const_lv1_0) and (fft_kernel_modu2_M_1_empty_n = ap_const_logic_0)) or ((exitcond_fu_102_p2 = ap_const_lv1_0) and (fft_kernel_modu2_M_s_empty_n = ap_const_logic_0)))) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                c_1_reg_125 <= c_1_fu_108_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((not((((exitcond_fu_102_p2 = ap_const_lv1_0) and (fft_kernel_modu2_M_1_empty_n = ap_const_logic_0)) or ((exitcond_fu_102_p2 = ap_const_lv1_0) and (fft_kernel_modu2_M_s_empty_n = ap_const_logic_0)))) and (exitcond_fu_102_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                fft_kernel_modu2_M_2_reg_130 <= fft_kernel_modu2_M_s_dout;
                fft_kernel_modu2_M_3_reg_135 <= fft_kernel_modu2_M_1_dout;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                r_1_reg_117 <= r_1_fu_96_p2;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, fft_kernel_modu2_M_s_empty_n, fft_kernel_modu2_M_1_empty_n, ap_CS_fsm_state3, exitcond_fu_102_p2, StgValue_33_real379_fu_77_complex_float_M_real_blk_n, ap_CS_fsm_state8, StgValue_28_imag380_fu_70_complex_float_M_imag_blk_n, ap_CS_fsm_state4, ap_CS_fsm_state2, exitcond1_fu_90_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state2) and (exitcond1_fu_90_p2 = ap_const_lv1_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                if ((not((((exitcond_fu_102_p2 = ap_const_lv1_0) and (fft_kernel_modu2_M_1_empty_n = ap_const_logic_0)) or ((exitcond_fu_102_p2 = ap_const_lv1_0) and (fft_kernel_modu2_M_s_empty_n = ap_const_logic_0)))) and (exitcond_fu_102_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                elsif ((not((((exitcond_fu_102_p2 = ap_const_lv1_0) and (fft_kernel_modu2_M_1_empty_n = ap_const_logic_0)) or ((exitcond_fu_102_p2 = ap_const_lv1_0) and (fft_kernel_modu2_M_s_empty_n = ap_const_logic_0)))) and (exitcond_fu_102_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                    ap_NS_fsm <= ap_ST_fsm_state4;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state4 => 
                if (((ap_const_logic_1 = StgValue_28_imag380_fu_70_complex_float_M_imag_blk_n) and (ap_const_logic_1 = ap_CS_fsm_state4))) then
                    ap_NS_fsm <= ap_ST_fsm_state5;
                else
                    ap_NS_fsm <= ap_ST_fsm_state4;
                end if;
            when ap_ST_fsm_state5 => 
                ap_NS_fsm <= ap_ST_fsm_state6;
            when ap_ST_fsm_state6 => 
                ap_NS_fsm <= ap_ST_fsm_state7;
            when ap_ST_fsm_state7 => 
                ap_NS_fsm <= ap_ST_fsm_state8;
            when ap_ST_fsm_state8 => 
                if (((ap_const_logic_1 = StgValue_33_real379_fu_77_complex_float_M_real_blk_n) and (ap_const_logic_1 = ap_CS_fsm_state8))) then
                    ap_NS_fsm <= ap_ST_fsm_state3;
                else
                    ap_NS_fsm <= ap_ST_fsm_state8;
                end if;
            when others =>  
                ap_NS_fsm <= "XXXXXXXX";
        end case;
    end process;

    G1_M_imag_blk_n_assign_proc : process(StgValue_28_imag380_fu_70_complex_float_M_imag_blk_n, ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            G1_M_imag_blk_n <= StgValue_28_imag380_fu_70_complex_float_M_imag_blk_n;
        else 
            G1_M_imag_blk_n <= ap_const_logic_1;
        end if; 
    end process;

    G1_M_imag_din <= StgValue_28_imag380_fu_70_complex_float_M_imag_din;

    G1_M_imag_write_assign_proc : process(ap_CS_fsm_state4, StgValue_28_imag380_fu_70_complex_float_M_imag_write)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            G1_M_imag_write <= StgValue_28_imag380_fu_70_complex_float_M_imag_write;
        else 
            G1_M_imag_write <= ap_const_logic_0;
        end if; 
    end process;


    G1_M_real_blk_n_assign_proc : process(StgValue_33_real379_fu_77_complex_float_M_real_blk_n, ap_CS_fsm_state8)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            G1_M_real_blk_n <= StgValue_33_real379_fu_77_complex_float_M_real_blk_n;
        else 
            G1_M_real_blk_n <= ap_const_logic_1;
        end if; 
    end process;

    G1_M_real_din <= StgValue_33_real379_fu_77_complex_float_M_real_din;

    G1_M_real_write_assign_proc : process(ap_CS_fsm_state8, StgValue_33_real379_fu_77_complex_float_M_real_write)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            G1_M_real_write <= StgValue_33_real379_fu_77_complex_float_M_real_write;
        else 
            G1_M_real_write <= ap_const_logic_0;
        end if; 
    end process;


    StgValue_28_imag380_fu_70_ap_start_assign_proc : process(ap_CS_fsm_state4)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            StgValue_28_imag380_fu_70_ap_start <= ap_const_logic_1;
        else 
            StgValue_28_imag380_fu_70_ap_start <= ap_const_logic_0;
        end if; 
    end process;


    StgValue_33_real379_fu_77_ap_start_assign_proc : process(ap_CS_fsm_state8)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state8)) then 
            StgValue_33_real379_fu_77_ap_start <= ap_const_logic_1;
        else 
            StgValue_33_real379_fu_77_ap_start <= ap_const_logic_0;
        end if; 
    end process;

    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);
    ap_CS_fsm_state6 <= ap_CS_fsm(5);
    ap_CS_fsm_state7 <= ap_CS_fsm(6);
    ap_CS_fsm_state8 <= ap_CS_fsm(7);

    ap_block_state3_assign_proc : process(fft_kernel_modu2_M_s_empty_n, fft_kernel_modu2_M_1_empty_n, exitcond_fu_102_p2)
    begin
                ap_block_state3 <= (((exitcond_fu_102_p2 = ap_const_lv1_0) and (fft_kernel_modu2_M_1_empty_n = ap_const_logic_0)) or ((exitcond_fu_102_p2 = ap_const_lv1_0) and (fft_kernel_modu2_M_s_empty_n = ap_const_logic_0)));
    end process;


    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state2, exitcond1_fu_90_p2)
    begin
        if ((((ap_const_logic_1 = ap_CS_fsm_state2) and (exitcond1_fu_90_p2 = ap_const_lv1_1)) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state2, exitcond1_fu_90_p2)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state2) and (exitcond1_fu_90_p2 = ap_const_lv1_1))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    c_1_fu_108_p2 <= std_logic_vector(unsigned(c_reg_59) + unsigned(ap_const_lv9_1));
    exitcond1_fu_90_p2 <= "1" when (r_reg_48 = ap_const_lv9_100) else "0";
    exitcond_fu_102_p2 <= "1" when (c_reg_59 = ap_const_lv9_100) else "0";

    fft_kernel_modu2_M_1_blk_n_assign_proc : process(fft_kernel_modu2_M_1_empty_n, ap_CS_fsm_state3, exitcond_fu_102_p2)
    begin
        if (((exitcond_fu_102_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
            fft_kernel_modu2_M_1_blk_n <= fft_kernel_modu2_M_1_empty_n;
        else 
            fft_kernel_modu2_M_1_blk_n <= ap_const_logic_1;
        end if; 
    end process;


    fft_kernel_modu2_M_1_read_assign_proc : process(fft_kernel_modu2_M_s_empty_n, fft_kernel_modu2_M_1_empty_n, ap_CS_fsm_state3, exitcond_fu_102_p2)
    begin
        if ((not((((exitcond_fu_102_p2 = ap_const_lv1_0) and (fft_kernel_modu2_M_1_empty_n = ap_const_logic_0)) or ((exitcond_fu_102_p2 = ap_const_lv1_0) and (fft_kernel_modu2_M_s_empty_n = ap_const_logic_0)))) and (exitcond_fu_102_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
            fft_kernel_modu2_M_1_read <= ap_const_logic_1;
        else 
            fft_kernel_modu2_M_1_read <= ap_const_logic_0;
        end if; 
    end process;


    fft_kernel_modu2_M_s_blk_n_assign_proc : process(fft_kernel_modu2_M_s_empty_n, ap_CS_fsm_state3, exitcond_fu_102_p2)
    begin
        if (((exitcond_fu_102_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
            fft_kernel_modu2_M_s_blk_n <= fft_kernel_modu2_M_s_empty_n;
        else 
            fft_kernel_modu2_M_s_blk_n <= ap_const_logic_1;
        end if; 
    end process;


    fft_kernel_modu2_M_s_read_assign_proc : process(fft_kernel_modu2_M_s_empty_n, fft_kernel_modu2_M_1_empty_n, ap_CS_fsm_state3, exitcond_fu_102_p2)
    begin
        if ((not((((exitcond_fu_102_p2 = ap_const_lv1_0) and (fft_kernel_modu2_M_1_empty_n = ap_const_logic_0)) or ((exitcond_fu_102_p2 = ap_const_lv1_0) and (fft_kernel_modu2_M_s_empty_n = ap_const_logic_0)))) and (exitcond_fu_102_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
            fft_kernel_modu2_M_s_read <= ap_const_logic_1;
        else 
            fft_kernel_modu2_M_s_read <= ap_const_logic_0;
        end if; 
    end process;


    grp_fu_84_ce_assign_proc : process(StgValue_33_real379_fu_77_complex_float_M_real_blk_n, ap_CS_fsm_state8, StgValue_28_imag380_fu_70_complex_float_M_imag_blk_n, ap_CS_fsm_state4, ap_CS_fsm_state5, ap_CS_fsm_state6, ap_CS_fsm_state7)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state7) or (ap_const_logic_1 = ap_CS_fsm_state6) or (ap_const_logic_1 = ap_CS_fsm_state5) or ((ap_const_logic_1 = StgValue_28_imag380_fu_70_complex_float_M_imag_blk_n) and (ap_const_logic_1 = ap_CS_fsm_state4)) or ((ap_const_logic_1 = StgValue_33_real379_fu_77_complex_float_M_real_blk_n) and (ap_const_logic_1 = ap_CS_fsm_state8)))) then 
            grp_fu_84_ce <= ap_const_logic_1;
        else 
            grp_fu_84_ce <= ap_const_logic_0;
        end if; 
    end process;

    r_1_fu_96_p2 <= std_logic_vector(unsigned(r_reg_48) + unsigned(ap_const_lv9_1));
end behav;
