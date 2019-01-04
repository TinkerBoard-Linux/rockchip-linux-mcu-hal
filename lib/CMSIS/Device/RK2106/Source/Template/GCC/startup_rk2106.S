/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018 Rockchip Electronic Co.,Ltd
 */

.syntax	unified
.cpu	cortex-m3
.fpu	softvfp
.thumb

.global	__Vectors
.global	PowerOn_Reset

.extern	Image$$AP_MAIN_STACK$$RW$$Limit
.extern	SystemInit
.extern	main
.extern	ScatterLoader

/**
 * Vector table
 */
	.section .isr_vector,"a",%progbits
	.type __Vectors, %object
	.size __Vectors, .-__Vectors
__Vectors:
        .long    __StackTop						    /*     Top of Stack */
        .long    Reset_Handler                      /*     Reset Handler */
        .long    DefaultHandler						/* -14 NMI Handler */
        .long    DefaultHandler              		/* -13 Hard Fault Handler */
        .long    DefaultHandler                		/* -12 MPU Fault Handler */
        .long    DefaultHandler                   	/* -11 Bus Fault Handler */
        .long    DefaultHandler                 	/* -10 Usage Fault Handler */
        .long    0                                  /*     Reserved */
        .long    0                                  /*     Reserved */
        .long    0                                  /*     Reserved */
        .long    0                                  /*     Reserved */
        .long    DefaultHandler                     /*  -5 SVCall Handler */
        .long    DefaultHandler                   	/*  -4 Debug Monitor Handler */
        .long    0                                  /*     Reserved */
        .long    DefaultHandler                     /*  -2 PendSV Handler */
        .long    DefaultHandler                    	/*  -1 SysTick Handler */

        /* Interrupts */
        .long    DefaultHandler                 /*   0 Interrupt 0 */
        .long    DefaultHandler                 /*   1 Interrupt 1 */
        .long    DefaultHandler                 /*   2 Interrupt 2 */
        .long    DefaultHandler                 /*   3 Interrupt 3 */
        .long    DefaultHandler                 /*   4 Interrupt 4 */
        .long    DefaultHandler                 /*   5 Interrupt 5 */
        .long    DefaultHandler                 /*   6 Interrupt 6 */
        .long    DefaultHandler                 /*   7 Interrupt 7 */
        .long    DefaultHandler                 /*   8 Interrupt 8 */
        .long    DefaultHandler                 /*   9 Interrupt 9 */

       .space   (31 * 4)                          /* Interrupts 10 .. 224 are left out */
__Vectors_End:
        .equ     __Vectors_Size, __Vectors_End - __Vectors
        .size    __Vectors, . - __Vectors


        .thumb
        .section .text
        .align   2

        .thumb_func
        .type    Reset_Handler, %function
        .globl   Reset_Handler
        .fnstart
Reset_Handler:
        bl       SystemInit
        bl		 main

/**
 * DefaultHandler
 */
	.section .text.DefaultHandler,"ax",%progbits
DefaultHandler:
        B       DefaultHandler
.size DefaultHandler, .-DefaultHandler