#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/mghorbani/workspace/git/hls_ci_demo/hls_firmware/Project/hls_ci_demo/solution1/.autopilot/db/a.g.bc ${1+"$@"}
