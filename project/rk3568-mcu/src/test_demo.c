/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2023 Rockchip Electronics Co., Ltd.
 */

#include "hal_bsp.h"
#include "hal_base.h"
#include "unity_runner.h"
#include <stdlib.h>

/********************* Private MACRO Definition ******************************/
// #define PERF_TEST
// #define DEVICE_TEST

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

/************************************************/
/*                                              */
/*                  DEVICE_TEST                 */
/*                                              */
/************************************************/
#ifdef DEVICE_TEST
void device_test(void)
{
    int device[] = { 0xF0000000, 0xF2000000, 0xF4000000, 0xF6000000,
                     0xF6400000, 0xF6800000, 0xFC000000, 0xFC400000,
                     0xFC800000, 0xFCC00000, 0xFD000000, 0xFD400000,
                     0xFD800000, 0xFD880000, 0xFD900000, 0xFDA00000,
                     0xFDC00000, 0xFDC20000, 0xFDC30000, 0xFDC40000,
                     0xFDC50000, 0xFDC60000, 0xFDC70000, 0xFDC80000,
                     0xFDC90000, 0xFDCA0000, 0xFDCA8000, 0xFDCB0000,
                     0xFDCB8000, 0xFDCC0000, 0xFDCD0000, 0xFDCF0000,
                     0xFDD00000, 0xFDD10000, 0xFDD18000, 0xFDD1C000,
                     0xFDD20000, 0xFDD30000, 0xFDD40000, 0xFDD50000,
                     0xFDD60000, 0xFDD70000, 0xFDD80000, 0xFDD90000,
                     0xFDDC0000, 0xFDDC8000, 0xFDE00000, 0xFDE30000,
                     0xFDE30000, 0xFDE40000, 0xFDE60000, 0xFDE80000,
                     0xFDE90000, 0xFDEA0000, 0xFDEB0000, 0xFDEC0000,
                     0xFDED0000, 0xFDEE0000, 0xFDEF0000, 0xFDF00000,
                     0xFDF40000, 0xFDF80000, 0xFDFA0000, 0xFDFB0000,
                     0xFDFD0000, 0xFDFE0000, 0xFDFF0000, 0xFE000000,
                     0xFE010000, 0xFE040000, 0xFE050000, 0xFE060000,
                     0xFE070000, 0xFE080000, 0xFE0A0000, 0xFE0C0000,
                     0xFE0D0000, 0xFE200000, 0xFE220000, 0xFE230000,
                     0xFE240000, 0xFE250000, 0xFE260000, 0xFE270000,
                     0xFE280000, 0xFE2A0000, 0xFE2B0000, 0xFE2C0000,
                     0xFE300000, 0xFE310000, 0xFE330000, 0xFE360000,
                     0xFE370000, 0xFE380000, 0xFE388000, 0xFE38C000,
                     0xFE3A0000, 0xFE3A8000, 0xFE3B8000, 0xFE3C0000,
                     0xFE3D0000, 0xFE3E0000, 0xFE3F0000, 0xFE400000,
                     0xFE410000, 0xFE420000, 0xFE430000, 0xFE440000,
                     0xFE450000, 0xFE460000, 0xFE470000, 0xFE478000,
                     0xFE480000, 0xFE490000, 0xFE510000, 0xFE530000,
                     0xFE540000, 0xFE550000, 0xFE560000, 0xFE570000,
                     0xFE580000, 0xFE590000, 0xFE5A0000, 0xFE5B0000,
                     0xFE5C0000, 0xFE5D0000, 0xFE5E0000, 0xFE5F0000,
                     0xFE600000, 0xFE610000, 0xFE620000, 0xFE630000,
                     0xFE640000, 0xFE650000, 0xFE660000, 0xFE670000,
                     0xFE680000, 0xFE690000, 0xFE6A0000, 0xFE6B0000,
                     0xFE6C0000, 0xFE6D0000, 0xFE6E0000, 0xFE6F0000,
                     0xFE700000, 0xFE710000, 0xFE720000, 0xFE740000,
                     0xFE750000, 0xFE760000, 0xFE770000, 0xFE780000,
                     0xFE790000, 0xFE800000, 0xFE820000, 0xFE830000,
                     0xFE840000, 0xFE850000, 0xFE860000, 0xFE870000,
                     0xFE880000, 0xFE890000, 0xFE8A0000, 0xFE8B0000,
                     0xFE8C0000 };
    int data, i;

    for (i = 0; i < sizeof(device) / sizeof(int); i++) {
        data = *((int *)device[i]);
    }

    printf("device test ok.\n");
}
#endif

/************************************************/
/*                                              */
/*                  PERF_TEST                   */
/*                                              */
/************************************************/
#ifdef PERF_TEST
#include "benchmark.h"

uint32_t g_sum = 0;

static void perf_test(void)
{
    uint32_t loop = 1000, size = 64 * 1024;
    uint32_t *ptr;
    uint32_t time_start, time_end, time_ms;

    printf("Perftest Start:\n");
    benchmark_main();

    printf("memset test start:\n");
    ptr = (uint32_t *)malloc(size);
    if (ptr) {
        time_start = HAL_GetTick();
        for (int i = 0; i < loop; i++) {
            memset(ptr, i, size);
        }
        time_end = HAL_GetTick();
        time_ms = time_end - time_start;
        printf("memset bw=%ldKB/s, time_ms=%d\n",
               1000 * (size * loop / 1024) / time_ms, time_ms);

        /* prevent optimization */
        for (int i = 0; i < size / sizeof(uint32_t); i++) {
            g_sum += ptr[i];
        }
        printf("sum=%d\n", g_sum);
        free(ptr);
    }
    printf("memset test end\n");

    printf("Perftest End:\n");
}
#endif

void test_demo(void)
{
#ifdef DEVICE_TEST
    device_test();
#endif

#ifdef PERF_TEST
    perf_test();
#endif
}
