set moduleName operator_div_float
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {operator/<float>}
set C_modelType { int 64 }
set C_modelArgList {
	{ p_x_M_real float 32 regular {fifo 0 volatile }  }
	{ p_x_M_imag float 32 regular {fifo 0 volatile }  }
	{ p_y_M_real float 32 regular {fifo 0 volatile }  }
	{ p_y_M_imag float 32 regular {fifo 0 volatile }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "p_x_M_real", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "p_x_M_imag", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "p_y_M_real", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "p_y_M_imag", "interface" : "fifo", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 64} ]}
# RTL Port declarations: 
set portNum 20
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ p_x_M_real_dout sc_in sc_lv 32 signal 0 } 
	{ p_x_M_real_empty_n sc_in sc_logic 1 signal 0 } 
	{ p_x_M_real_read sc_out sc_logic 1 signal 0 } 
	{ p_x_M_imag_dout sc_in sc_lv 32 signal 1 } 
	{ p_x_M_imag_empty_n sc_in sc_logic 1 signal 1 } 
	{ p_x_M_imag_read sc_out sc_logic 1 signal 1 } 
	{ p_y_M_real_dout sc_in sc_lv 32 signal 2 } 
	{ p_y_M_real_empty_n sc_in sc_logic 1 signal 2 } 
	{ p_y_M_real_read sc_out sc_logic 1 signal 2 } 
	{ p_y_M_imag_dout sc_in sc_lv 32 signal 3 } 
	{ p_y_M_imag_empty_n sc_in sc_logic 1 signal 3 } 
	{ p_y_M_imag_read sc_out sc_logic 1 signal 3 } 
	{ ap_return_0 sc_out sc_lv 32 signal -1 } 
	{ ap_return_1 sc_out sc_lv 32 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "p_x_M_real_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p_x_M_real", "role": "dout" }} , 
 	{ "name": "p_x_M_real_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p_x_M_real", "role": "empty_n" }} , 
 	{ "name": "p_x_M_real_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p_x_M_real", "role": "read" }} , 
 	{ "name": "p_x_M_imag_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p_x_M_imag", "role": "dout" }} , 
 	{ "name": "p_x_M_imag_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p_x_M_imag", "role": "empty_n" }} , 
 	{ "name": "p_x_M_imag_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p_x_M_imag", "role": "read" }} , 
 	{ "name": "p_y_M_real_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p_y_M_real", "role": "dout" }} , 
 	{ "name": "p_y_M_real_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p_y_M_real", "role": "empty_n" }} , 
 	{ "name": "p_y_M_real_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p_y_M_real", "role": "read" }} , 
 	{ "name": "p_y_M_imag_dout", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "p_y_M_imag", "role": "dout" }} , 
 	{ "name": "p_y_M_imag_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p_y_M_imag", "role": "empty_n" }} , 
 	{ "name": "p_y_M_imag_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "p_y_M_imag", "role": "read" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "operator_div_float",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "27", "EstimateLatencyMax" : "27",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_operator_div_assign_float_fu_34"}],
		"Port" : [
			{"Name" : "p_x_M_real", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "p_x_M_real_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p_x_M_imag", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "p_x_M_imag_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p_y_M_real", "Type" : "Fifo", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_operator_div_assign_float_fu_34", "Port" : "p_z_M_real"}]},
			{"Name" : "p_y_M_imag", "Type" : "Fifo", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_operator_div_assign_float_fu_34", "Port" : "p_z_M_imag"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_operator_div_assign_float_fu_34", "Parent" : "0", "Child" : ["2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12"],
		"CDFG" : "operator_div_assign_float",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "25", "EstimateLatencyMax" : "25",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "complex_float_M_real_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "complex_float_M_imag_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "p_z_M_real", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "p_z_M_real_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "p_z_M_imag", "Type" : "Fifo", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "p_z_M_imag_blk_n", "Type" : "RtlSignal"}]}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_div_assign_float_fu_34.WienerDeblur_faddibs_U141", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_div_assign_float_fu_34.WienerDeblur_faddibs_U142", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_div_assign_float_fu_34.WienerDeblur_fsubbkb_U143", "Parent" : "1"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_div_assign_float_fu_34.WienerDeblur_fmuljbC_U144", "Parent" : "1"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_div_assign_float_fu_34.WienerDeblur_fmuljbC_U145", "Parent" : "1"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_div_assign_float_fu_34.WienerDeblur_fmuljbC_U146", "Parent" : "1"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_div_assign_float_fu_34.WienerDeblur_fmuljbC_U147", "Parent" : "1"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_div_assign_float_fu_34.WienerDeblur_fmuljbC_U148", "Parent" : "1"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_div_assign_float_fu_34.WienerDeblur_fmuljbC_U149", "Parent" : "1"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_div_assign_float_fu_34.WienerDeblur_fdivNgs_U150", "Parent" : "1"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_operator_div_assign_float_fu_34.WienerDeblur_fdivNgs_U151", "Parent" : "1"}]}


set ArgLastReadFirstWriteLatency {
	operator_div_float {
		p_x_M_real {Type I LastRead 0 FirstWrite -1}
		p_x_M_imag {Type I LastRead 0 FirstWrite -1}
		p_y_M_real {Type I LastRead 0 FirstWrite -1}
		p_y_M_imag {Type I LastRead 0 FirstWrite -1}}
	operator_div_assign_float {
		complex_float_M_real_read {Type I LastRead 1 FirstWrite -1}
		complex_float_M_imag_read {Type I LastRead 1 FirstWrite -1}
		p_z_M_real {Type I LastRead 0 FirstWrite -1}
		p_z_M_imag {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "27", "Max" : "27"}
	, {"Name" : "Interval", "Min" : "27", "Max" : "27"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	p_x_M_real { ap_fifo {  { p_x_M_real_dout fifo_data 0 32 }  { p_x_M_real_empty_n fifo_status 0 1 }  { p_x_M_real_read fifo_update 1 1 } } }
	p_x_M_imag { ap_fifo {  { p_x_M_imag_dout fifo_data 0 32 }  { p_x_M_imag_empty_n fifo_status 0 1 }  { p_x_M_imag_read fifo_update 1 1 } } }
	p_y_M_real { ap_fifo {  { p_y_M_real_dout fifo_data 0 32 }  { p_y_M_real_empty_n fifo_status 0 1 }  { p_y_M_real_read fifo_update 1 1 } } }
	p_y_M_imag { ap_fifo {  { p_y_M_imag_dout fifo_data 0 32 }  { p_y_M_imag_empty_n fifo_status 0 1 }  { p_y_M_imag_read fifo_update 1 1 } } }
}
