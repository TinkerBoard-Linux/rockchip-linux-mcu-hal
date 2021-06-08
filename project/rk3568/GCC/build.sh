#! /bin/bash

CUR_DIR=$(pwd)

usage() {
    echo "usage: ./build.sh <cpu_id 0~3 or all>"
}

CPU0_BASE=0x00a00000
CPU1_BASE=0x00b00000
CPU2_BASE=0x00d00000
CPU3_BASE=0x00e00000

make_hal() {
    export FIRMWARE_CPU_BASE=$(eval echo \$CPU$1_BASE)
    make clean
    make -j8
    mv $CUR_DIR/TestDemo.bin $CUR_DIR/hal$1.bin
}

case $1 in
    0|1|2|3) make_hal $1 ;;
    all) make_hal 0; make_hal 1; make_hal 2; make_hal 3 ;;
    *) usage; exit ;;
esac
