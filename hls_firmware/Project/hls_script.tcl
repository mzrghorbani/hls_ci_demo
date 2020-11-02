## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2020 Xilinx, Inc. All Rights Reserved.
############################################################
delete_project hls_ci_proj
# Change project-path according to your local machine
set project_path "/home/mghorbani/workspace/git"
# Workspace is top-level directroy for git project
set workspace "$project_path/hls_ci_demo"
set CFLAGS -std=c++11
open_project hls_ci_proj
set_top Sort_top
add_files $workspace/hls_firmware/Algorithm/sort.cc -cflags "$CFLAGS"
add_files $workspace/hls_firmware/Algorithm/sort.h -cflags "$CFLAGS"
add_files $workspace/hls_firmware/Algorithm/sort_top.cc -cflags "$CFLAGS"
add_files $workspace/hls_firmware/Algorithm/sort_top.h -cflags "$CFLAGS"
add_files $workspace/hls_firmware/Algorithm/sort_types.h -cflags "$CFLAGS"
add_files -tb $workspace/hls_firmware/TestBench/result.golden.dat
add_files -tb $workspace/hls_firmware/TestBench/sort_test.cc -cflags "$CFLAGS"
open_solution "solution1"
set_part {xcvu9p-fsgd2104-2L-e}
create_clock -period 2.78 -name default
config_sdx -optimization_level none -target none
config_export -vivado_optimization_level 2
source "$workspace/hls_firmware/Project/hls_directives.tcl"
csim_design -compiler gcc -mflags "-j4"
csynth_design
cosim_design -trace_level all -rtl vhdl
export_design -rtl vhdl -format ip_catalog -display_name "SORT_IP"
exit