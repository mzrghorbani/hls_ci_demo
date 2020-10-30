
log_wave -r /
set designtopgroup [add_wave_group "Design Top Signals"]
set coutputgroup [add_wave_group "C Outputs" -into $designtopgroup]
set b_group [add_wave_group b(wire) -into $coutputgroup]
add_wave /apatb_Sort_top_top/AESL_inst_Sort_top/b_4_ap_vld -into $b_group -color #ffff00 -radix hex
add_wave /apatb_Sort_top_top/AESL_inst_Sort_top/b_4 -into $b_group -radix hex
add_wave /apatb_Sort_top_top/AESL_inst_Sort_top/b_3_ap_vld -into $b_group -color #ffff00 -radix hex
add_wave /apatb_Sort_top_top/AESL_inst_Sort_top/b_3 -into $b_group -radix hex
add_wave /apatb_Sort_top_top/AESL_inst_Sort_top/b_2_ap_vld -into $b_group -color #ffff00 -radix hex
add_wave /apatb_Sort_top_top/AESL_inst_Sort_top/b_2 -into $b_group -radix hex
add_wave /apatb_Sort_top_top/AESL_inst_Sort_top/b_1_ap_vld -into $b_group -color #ffff00 -radix hex
add_wave /apatb_Sort_top_top/AESL_inst_Sort_top/b_1 -into $b_group -radix hex
add_wave /apatb_Sort_top_top/AESL_inst_Sort_top/b_0_ap_vld -into $b_group -color #ffff00 -radix hex
add_wave /apatb_Sort_top_top/AESL_inst_Sort_top/b_0 -into $b_group -radix hex
set cinputgroup [add_wave_group "C Inputs" -into $designtopgroup]
set a_group [add_wave_group a(wire) -into $cinputgroup]
add_wave /apatb_Sort_top_top/AESL_inst_Sort_top/a_4 -into $a_group -radix hex
add_wave /apatb_Sort_top_top/AESL_inst_Sort_top/a_3 -into $a_group -radix hex
add_wave /apatb_Sort_top_top/AESL_inst_Sort_top/a_2 -into $a_group -radix hex
add_wave /apatb_Sort_top_top/AESL_inst_Sort_top/a_1 -into $a_group -radix hex
add_wave /apatb_Sort_top_top/AESL_inst_Sort_top/a_0 -into $a_group -radix hex
set blocksiggroup [add_wave_group "Block-level IO Handshake" -into $designtopgroup]
add_wave /apatb_Sort_top_top/AESL_inst_Sort_top/ap_start -into $blocksiggroup
add_wave /apatb_Sort_top_top/AESL_inst_Sort_top/ap_done -into $blocksiggroup
add_wave /apatb_Sort_top_top/AESL_inst_Sort_top/ap_idle -into $blocksiggroup
add_wave /apatb_Sort_top_top/AESL_inst_Sort_top/ap_ready -into $blocksiggroup
set resetgroup [add_wave_group "Reset" -into $designtopgroup]
add_wave /apatb_Sort_top_top/AESL_inst_Sort_top/ap_rst -into $resetgroup
set clockgroup [add_wave_group "Clock" -into $designtopgroup]
add_wave /apatb_Sort_top_top/AESL_inst_Sort_top/ap_clk -into $clockgroup
set testbenchgroup [add_wave_group "Test Bench Signals"]
set tbinternalsiggroup [add_wave_group "Internal Signals" -into $testbenchgroup]
set tb_simstatus_group [add_wave_group "Simulation Status" -into $tbinternalsiggroup]
set tb_portdepth_group [add_wave_group "Port Depth" -into $tbinternalsiggroup]
add_wave /apatb_Sort_top_top/AUTOTB_TRANSACTION_NUM -into $tb_simstatus_group -radix hex
add_wave /apatb_Sort_top_top/ready_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_Sort_top_top/done_cnt -into $tb_simstatus_group -radix hex
add_wave /apatb_Sort_top_top/LENGTH_a_0 -into $tb_portdepth_group -radix hex
add_wave /apatb_Sort_top_top/LENGTH_a_1 -into $tb_portdepth_group -radix hex
add_wave /apatb_Sort_top_top/LENGTH_a_2 -into $tb_portdepth_group -radix hex
add_wave /apatb_Sort_top_top/LENGTH_a_3 -into $tb_portdepth_group -radix hex
add_wave /apatb_Sort_top_top/LENGTH_a_4 -into $tb_portdepth_group -radix hex
add_wave /apatb_Sort_top_top/LENGTH_b_0 -into $tb_portdepth_group -radix hex
add_wave /apatb_Sort_top_top/LENGTH_b_1 -into $tb_portdepth_group -radix hex
add_wave /apatb_Sort_top_top/LENGTH_b_2 -into $tb_portdepth_group -radix hex
add_wave /apatb_Sort_top_top/LENGTH_b_3 -into $tb_portdepth_group -radix hex
add_wave /apatb_Sort_top_top/LENGTH_b_4 -into $tb_portdepth_group -radix hex
set tbcoutputgroup [add_wave_group "C Outputs" -into $testbenchgroup]
set tb_b_group [add_wave_group b(wire) -into $tbcoutputgroup]
add_wave /apatb_Sort_top_top/b_4_ap_vld -into $tb_b_group -color #ffff00 -radix hex
add_wave /apatb_Sort_top_top/b_4 -into $tb_b_group -radix hex
add_wave /apatb_Sort_top_top/b_3_ap_vld -into $tb_b_group -color #ffff00 -radix hex
add_wave /apatb_Sort_top_top/b_3 -into $tb_b_group -radix hex
add_wave /apatb_Sort_top_top/b_2_ap_vld -into $tb_b_group -color #ffff00 -radix hex
add_wave /apatb_Sort_top_top/b_2 -into $tb_b_group -radix hex
add_wave /apatb_Sort_top_top/b_1_ap_vld -into $tb_b_group -color #ffff00 -radix hex
add_wave /apatb_Sort_top_top/b_1 -into $tb_b_group -radix hex
add_wave /apatb_Sort_top_top/b_0_ap_vld -into $tb_b_group -color #ffff00 -radix hex
add_wave /apatb_Sort_top_top/b_0 -into $tb_b_group -radix hex
set tbcinputgroup [add_wave_group "C Inputs" -into $testbenchgroup]
set tb_a_group [add_wave_group a(wire) -into $tbcinputgroup]
add_wave /apatb_Sort_top_top/a_4 -into $tb_a_group -radix hex
add_wave /apatb_Sort_top_top/a_3 -into $tb_a_group -radix hex
add_wave /apatb_Sort_top_top/a_2 -into $tb_a_group -radix hex
add_wave /apatb_Sort_top_top/a_1 -into $tb_a_group -radix hex
add_wave /apatb_Sort_top_top/a_0 -into $tb_a_group -radix hex
save_wave_config Sort_top.wcfg
run all
quit

