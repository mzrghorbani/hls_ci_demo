## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
############################################################
delete_project hls_ci_demo
open_project hls_ci_demo
set CFLAGS {-std=c++11 -I../Algorithm}
set CFLAGS {-std=c++11 -I../TestBench}
set_top Sort_top
add_files ../Algorithm/sort.cc -cflags "$CFLAGS"
add_files ../Algorithm/sort.h -cflags "$CFLAGS"
add_files ../Algorithm/sort_top.cc -cflags "$CFLAGS"
add_files ../Algorithm/sort_top.h -cflags "$CFLAGS"
add_files ../Algorithm/sort_types.h -cflags "$CFLAGS"
add_files -tb ../TestBench/result.golden.dat
add_files -tb ../TestBench/sort_test.cc -cflags "$CFLAGS"
open_solution "solution1"
set_part {xcvu9p-fsgd2104-2L-e}
create_clock -period 2.78 -name default
config_sdx -optimization_level none -target none
config_export -vivado_optimization_level 2
source "./hls_directives.tcl"
csim_design -compiler gcc -mflags "-j4"
csynth_design
cosim_design -trace_level all -rtl vhdl
export_design -rtl vhdl -format ip_catalog -display_name "SORT_IP"
exit