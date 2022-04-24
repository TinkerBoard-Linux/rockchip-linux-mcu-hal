/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2022 Rockchip Electronics Co., Ltd.
 */

/* Program Entry, set to mark it as "used" and avoid gc */

MEMORY
{
    SRAM  (rxw) : ORIGIN = 0xfff80000, LENGTH = 256K            /* SYSTEM SRAM */
    DRAM  (rxw) : ORIGIN = FIRMWARE_BASE, LENGTH = DRAM_SIZE    /* DRAM */
    SHMEM (rxw) : ORIGIN = SHMEM_BASE, LENGTH = SHMEM_SIZE      /* shared memory for all cpu */
}

ENTRY(Reset_Handler)

__STACK_SIZE = 0x400;
__FIQ_STACK_SIZE = 0x400;
__IRQ_STACK_SIZE = 0x400;
__SVC_STACK_SIZE = 0x1000;
__ABT_STACK_SIZE = 0x400;
__UND_STACK_SIZE = 0x400;

__TTB_SIZE = 0x4000;
__SPINLOCK_MEM_SIZE = 0x100;

SECTIONS
{
    .text :
    {
        KEEP(*(RESET))                  /* Startup code */

        . = ALIGN(16);
        *(.text)                        /* remaining code */
        *(.text.*)                      /* remaining code */
        *(.rodata)                      /* read-only data (constants) */
        *(.rodata*)
        *(.glue_7)
        *(.glue_7t)
        *(.gnu.linkonce.t*)

        . = ALIGN(16);
        _etext = .;
    } > DRAM

    .ARM.extab :
    {
        *(.ARM.extab* .gnu.linkonce.armextab.*)
    } > DRAM

    __exidx_start = .;
    .ARM.exidx :
    {
        *(.ARM.exidx* .gnu.linkonce.armexidx.*)

        /* This is used by the startup in order to initialize the .data secion */
        _sidata = .;
    } > DRAM
    __exidx_end = .;

    .zero.table :
    {
        . = ALIGN(4);
        __zero_table_start__ = .;
        LONG (__bss_start__)
        LONG ((__bss_end__ - __bss_start__) / 4)
        LONG (__TTB_start__)
        LONG ((__TTB_end__ - __TTB_start__) / 4)
#ifdef CPU1
        LONG (__spinlock_mem_start__)
        LONG ((__spinlock_mem_end__ - __spinlock_mem_start__) / 4)
#endif
        __zero_table_end__ = .;
    } > DRAM

    . = ALIGN(4);

    .data :
    {
        *(.data)
        *(.data.*)

        . = ALIGN(16);
        *(.sdata)
        *(.sdata.*)
    } > DRAM

    . = ALIGN(16);

    .ctors :
    {
        PROVIDE(__ctors_start__ = .);
        KEEP(*(SORT(.ctors.*)))
        KEEP(*(.ctors))
        PROVIDE(__ctors_end__ = .);
    } > DRAM

    .dtors :
    {
        PROVIDE(__dtors_start__ = .);
        KEEP(*(SORT(.dtors.*)))
        KEEP(*(.dtors))
        PROVIDE(__dtors_end__ = .);
    } > DRAM

    .ttb :
    {
        . = ALIGN(16 * 1024);
        PROVIDE(__TTB_start__ = .);
        PROVIDE(MMUTable  = .);
        . += __TTB_SIZE;
        PROVIDE(__TTB_end__ = .);
        . = ALIGN(16 * 1024);
    } > DRAM

    .share_mem (NOLOAD) :
    {
        . = ALIGN(64);
        PROVIDE(__spinlock_mem_start__ = .);
        . += __SPINLOCK_MEM_SIZE;
        PROVIDE(__spinlock_mem_end__ = .);
        . = ALIGN(64);
    } > SHMEM

    . = ALIGN(16);
    .bss (NOLOAD) :
    {
        PROVIDE(__bss_start__ = .);
        *(.bss)
        *(.bss.*)
        *(.dynbss)
        *(COMMON)
        . = ALIGN(16);
        PROVIDE(__bss_end__ = .);
    } > DRAM
    _end = .;
    PROVIDE(end = .);

    /* The heap is between bss_end and stack_start */
    . = ALIGN(16);
    __ALL_STACK_SIZE = __STACK_SIZE + __FIQ_STACK_SIZE + __IRQ_STACK_SIZE + __SVC_STACK_SIZE + __ABT_STACK_SIZE + __UND_STACK_SIZE;
    __STACK_START = ORIGIN(DRAM) + LENGTH(DRAM) - __ALL_STACK_SIZE;
    __HEAP_SIZE = (__STACK_START - .);
    .heap :
    {
        PROVIDE(__heap_start = .);
        . += __HEAP_SIZE;
        PROVIDE(__heap_end = .);
    } > DRAM

    .stack __STACK_START :
    {
        . = ALIGN(16);

        PROVIDE(__StackTop = .);
        Image$$SYS_STACK$$ZI$$Base = .;
        . += __STACK_SIZE;
        Image$$SYS_STACK$$ZI$$Limit = .;
        __stack = .;

        Image$$FIQ_STACK$$ZI$$Base = .;
        . += __FIQ_STACK_SIZE;
        Image$$FIQ_STACK$$ZI$$Limit = .;

        Image$$IRQ_STACK$$ZI$$Base = .;
        . += __IRQ_STACK_SIZE;
        Image$$IRQ_STACK$$ZI$$Limit = .;

        Image$$SVC_STACK$$ZI$$Base = .;
        . += __SVC_STACK_SIZE;
        Image$$SVC_STACK$$ZI$$Limit = .;

        Image$$ABT_STACK$$ZI$$Base = .;
        . += __ABT_STACK_SIZE;
        Image$$ABT_STACK$$ZI$$Limit = .;

        Image$$UND_STACK$$ZI$$Base = .;
        . += __UND_STACK_SIZE;
        Image$$UND_STACK$$ZI$$Limit = .;

    } > DRAM
}
