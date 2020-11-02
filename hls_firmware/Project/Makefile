# Change project-path according to your local machine
project_path=/home/mghorbani/workspace/git

# Workspace is top-level directroy for git project
workspace=$(project_path)/hls_ci_demo

# Directories containing hls-ci files
algorithm_dir=$(workspace)/hls_firmware/Algorithm
testbench_dir=$(workspace)/hls_firmware/TestBench
project_dir=$(workspace)/hls_firmware/Project

# Everything hls-ci project needs to build
HLS_SRC=$(algorithm_dir)/sort.h \
	$(algorithm_dir)/sort.cc \
	$(algorithm_dir)/sort_top.h \
	$(algorithm_dir)/sort_top.cc \
	$(algorithm_dir)/sort_types.h \
	$(testbench_dir)/sort_test.cc \
	$(testbench_dir)/result.golden.dat \
	$(project_dir)/hls_script.tcl \
	$(project_dir)/hls_directives.tcl

# Specifying 'all' for multiple targets
all: build

# Setup the top level project and build
build: .build.done
.build.done : $(HLS_SRC)
	/bin/sh -c "vivado_hls -f $(project_dir)/hls_script.tcl -l $(project_dir)/vivado_hls.log"

#
# more targets goes here
#

# Remove the generated project and log file
clean:
	rm -rf hls_ci_proj && rm vivado_hls.log
