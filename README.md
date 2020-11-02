Integration of a simple HLS module in GitLab CI/CD.

The C++ algorithm sort an array of ap_uint variables.

The directories are intentionally structured to test HLS build in GitLab CI/CD.

prerequisits:

	- Vivado HLS tools
	- Sourcing settings64.h

To play with the project, use the commands below:

	- Download 'hls_ci_demo' repository. 

		git clone ssh://git@gitlab.cern.ch:7999/mghorban1/hls_ci_demo.git 

	- Set the project-directory in Makefile and hls_script.tcl files, manually.

	- Change directory to build directory.
	
		cd hls_ci_demo/hls_firmware/Project

	- Run Makefile in the build directory.

		make all

A vivado-hls (hls_ci_proj) will be created in the build directory. Modify hls_script.tcl for different build rules and run again.

	- Clear generated contents in build directory.

		make clean

