/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2020 Rockchip Electronics Co., Ltd.
 */

#include "riscv_csr_encoding.h"

.section .init

# define LREG     lw
# define SREG     sw
# define REGBYTES 4

.globl _start
.weak sc_exit, SystemInit, entry, main

_start:
.option push
.option norelax
    la gp, __global_pointer$
.option pop
    la sp, _sp

    /* Load data section */
    la a0, _data_lma
    la a1, _data
    la a2, _edata
    beq a0, a1, 2f
    bgeu a1, a2, 2f
1:
    lw t0, (a0)
    sw t0, (a1)
    addi a0, a0, 4
    addi a1, a1, 4
    bltu a1, a2, 1b
2:

    /* Clear bss section */
    la a0, __bss_start
    la a1, _end
    bgeu a0, a1, 2f
1:
    sw zero, (a0)
    addi a0, a0, 4
    bltu a0, a1, 1b
2:

    li a0, 0
    li a1, 0
    call SystemInit
    call entry
    call main
    j sc_exit

.globl _wfi
.type _wfi, @function
_wfi:
wfi
ret
.globl _fence
.type _fence, @function
_fence:
fence
ret

SystemInit:
entry:
ret

sc_exit:
j sc_exit
