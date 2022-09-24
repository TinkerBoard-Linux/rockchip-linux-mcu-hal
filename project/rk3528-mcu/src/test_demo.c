/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2022 Rockchip Electronics Co., Ltd.
 */

#include "hal_bsp.h"
#include "hal_base.h"
#include "unity_runner.h"
#include <stdlib.h>

/********************* Private MACRO Definition ******************************/
//#define PERF_TEST

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

/************************************************/
/*                                              */
/*                 HW Borad config              */
/*                                              */
/************************************************/

/* TODO: Set Module IOMUX Function Here */

/************************************************/
/*                                              */
/*                  PERF_TEST                   */
/*                                              */
/************************************************/
#ifdef PERF_TEST
static void perf_test(void)
{
    printf("Perftest Start:\n");
    benchmark_main();
    printf("Perftest End:\n");
}
#endif

void test_demo(void)
{
#ifdef PERF_TEST
    perf_test();
#endif
}
