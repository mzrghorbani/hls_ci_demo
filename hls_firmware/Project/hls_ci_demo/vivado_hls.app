<AutoPilot:project xmlns:AutoPilot="com.autoesl.autopilot.project" projectType="C/C++" name="hls_ci_demo" top="Sort_top">
    <files>
        <file name="../../../TestBench/sort_test.cc" sc="0" tb="1" cflags=" -I../../../TestBench -std=c++11  -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="../../../TestBench/result.golden.dat" sc="0" tb="1" cflags=" -Wno-unknown-pragmas" csimflags=" -Wno-unknown-pragmas" blackbox="false"/>
        <file name="../Algorithm/sort_types.h" sc="0" tb="false" cflags="-std=c++11 -I../TestBench" csimflags="" blackbox="false"/>
        <file name="../Algorithm/sort_top.h" sc="0" tb="false" cflags="-std=c++11 -I../TestBench" csimflags="" blackbox="false"/>
        <file name="../Algorithm/sort_top.cc" sc="0" tb="false" cflags="-std=c++11 -I../TestBench" csimflags="" blackbox="false"/>
        <file name="../Algorithm/sort.h" sc="0" tb="false" cflags="-std=c++11 -I../TestBench" csimflags="" blackbox="false"/>
        <file name="../Algorithm/sort.cc" sc="0" tb="false" cflags="-std=c++11 -I../TestBench" csimflags="" blackbox="false"/>
    </files>
    <solutions>
        <solution name="solution1" status=""/>
    </solutions>
    <Simulation argv="">
        <SimFlow name="csim" setup="false" optimizeCompile="false" clean="false" ldflags="" mflags="-j4"/>
    </Simulation>
</AutoPilot:project>

