/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2023 Rockchip Electronics Co., Ltd.
 */

#include "hal_bsp.h"
#include "hal_base.h"
#include "task_ipc.h"
#include "test_conf.h"
#include "unity_runner.h"
#include <stdlib.h>

/********************* Private MACRO Definition ******************************/
//#define PERF_TEST
//#define SOFTIRQ_TEST
//#define UNITY_TEST

/********************* Private Structure Definition **************************/

static struct GIC_AMP_IRQ_INIT_CFG irqsConfig[] = {
/* TODO: Config the irqs here.
 * GIC version: GICv2
 * The priority higher than 0x80 is non-secure interrupt.
 */
    GIC_AMP_IRQ_CFG_ROUTE(UART0_IRQn, 0xd0, CPU_GET_AFFINITY(1, 0)),

#ifdef SOFTIRQ_TEST
    GIC_AMP_IRQ_CFG_ROUTE(RSVD0_IRQn, 0xd0, CPU_GET_AFFINITY(0, 0)),
#endif

    GIC_AMP_IRQ_CFG_ROUTE(0, 0, CPU_GET_AFFINITY(1, 0)),   /* sentinel */
};

static struct GIC_IRQ_AMP_CTRL irqConfig = {
    .cpuAff = CPU_GET_AFFINITY(1, 0),
    .defPrio = 0xd0,
    .defRouteAff = CPU_GET_AFFINITY(1, 0),
    .irqsCfg = &irqsConfig[0],
};

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
#include "benchmark.h"

uint32_t g_sum = 0;
static void perf_test(void)
{
    uint32_t cpu_id, loop = 1000, size = 4 * 1024 * 1024;
    uint32_t *ptr;
    uint64_t start, end;
    double time_s;

    cpu_id = HAL_CPU_TOPOLOGY_GetCurrentCpuId();
    printf("perftest: cpu-%ld\n", cpu_id);

    benchmark_main();

    printf("test memset start!\n");
    ptr = (uint32_t *)malloc(size);
    if (ptr) {
        start = HAL_GetSysTimerCount();
        for (int i = 0; i < loop; i++) {
            memset(ptr, i, size);
        }
        end = HAL_GetSysTimerCount();
        time_s = ((end - start) * 1.0) / PLL_INPUT_OSC_RATE;
        printf("\nmemset bw=%.2fMB/s, time_s=%.2f\n", (size * loop) / time_s / 1000000, time_s);

        /* prevent optimization */
        for (int i = 0; i < size / sizeof(uint32_t); i++) {
            g_sum += ptr[i];
        }
        printf("sum=%d\n", g_sum);
        free(ptr);
    }
    printf("test memset end!\n");
}
#endif

/************************************************/
/*                                              */
/*                SOFTIRQ_TEST                  */
/*                                              */
/************************************************/
#ifdef SOFTIRQ_TEST
static void soft_isr(int vector, void *param)
{
    printf("soft_isr, vector = %d\n", vector);
    HAL_GIC_EndOfInterrupt(vector);
}

static void softirq_test(void)
{
    HAL_IRQ_HANDLER_SetIRQHandler(RSVD0_IRQn, soft_isr, NULL);
    HAL_GIC_Enable(RSVD0_IRQn);

    HAL_GIC_SetPending(RSVD0_IRQn);
}
#endif

/********************* Public Function Definition ****************************/

void TEST_DEMO_GIC_Init(void)
{
    HAL_GIC_Init(&irqConfig);
}

void test_demo(void)
{
#if defined(PERF_TEST) && defined(CPU0)
    perf_test();
#endif

#if defined(SOFTIRQ_TEST) && defined(CPU0)
    softirq_test();
#endif

#if defined(UNITY_TEST) && defined(CPU0)
    /* Unity Test */
    test_main();
#endif
}
