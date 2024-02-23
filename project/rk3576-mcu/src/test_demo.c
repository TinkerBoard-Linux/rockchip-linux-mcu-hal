/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2023 Rockchip Electronics Co., Ltd.
 */

#include "hal_bsp.h"
#include "hal_base.h"
#include "unity_runner.h"
#include <stdlib.h>

/********************* Private MACRO Definition ******************************/
//#define PERF_TEST
//#define SOFTIRQ_TEST
//#define SYSTICK_TEST
//#define TIMER_TEST
//#define TIMER_INTMUX_TEST

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

/************************************************/
/*                                              */
/*                SOFTIRQ_TEST                  */
/*                                              */
/************************************************/
#ifdef SOFTIRQ_TEST
static void soft_isr(void)
{
    printf("softirq_test: enter isr\n");
}

static void softirq_test(void)
{
    printf("softirq_test start\n");
    HAL_NVIC_SetIRQHandler(31, soft_isr);
    HAL_NVIC_EnableIRQ(31);

    HAL_DelayMs(4000);
    HAL_NVIC_SetPendingIRQ(31);
}
#endif

/************************************************/
/*                                              */
/*                SYSTICK_TEST                  */
/*                                              */
/************************************************/
#ifdef SYSTICK_TEST

#define SYSTICK_CORE_RATE 396000000 /* BUS M0 396MHz */

static int systick_int_count = 0;
static uint32_t systick_latency_sum = 0;
static uint32_t systick_latency_max = 0;

static void systick_isr(void)
{
    uint32_t count_reload, count;
    uint32_t latency;

    count_reload = SysTick->VAL;
    count = SYSTICK_CORE_RATE / 100 - 1 - count_reload;
    latency = 1000 * count / (SYSTICK_CORE_RATE / 1000000);
    systick_int_count++;
    systick_latency_sum += latency;
    systick_latency_max = systick_latency_max > latency ? systick_latency_max : latency;
    if (systick_int_count == 100) {
        printf("systick_test: latency=%ldns(count=%ld)\n", latency, count);
        printf("systick_test: latency avg=%dns,max=%dns\n", systick_latency_sum / systick_int_count, systick_latency_max);
        systick_int_count = 0;
        systick_latency_sum = 0;
        systick_latency_max = 0;
        HAL_SYSTICK_Disable();
    }
}

static void systick_test(void)
{
    printf("softirq_test start\n");
    HAL_NVIC_SetIRQHandler(SysTick_IRQn, systick_isr);
    HAL_NVIC_SetPriority(SysTick_IRQn, 0, 0);
    HAL_SYSTICK_CLKSourceConfig(HAL_SYSTICK_CLKSRC_CORE);
    HAL_SYSTICK_Config((SYSTICK_CORE_RATE / 100) - 1);
    HAL_SYSTICK_Enable();
}
#endif

/************************************************/
/*                                              */
/*                  TIMER_TEST                  */
/*                                              */
/************************************************/
#ifdef TIMER_TEST
static int timer_int_count = 0;
static uint32_t latency_sum = 0;
static uint32_t latency_max = 0;
struct TIMER_REG *test_timer = TIMER10;

static void timer_isr(void)
{
    uint32_t count;
    uint32_t latency;

    count = (uint32_t)HAL_TIMER_GetCount(test_timer);
    /* 24M timer: 41.67ns per count */
    latency = count * 41;
    printf("timer_test: latency=%ldns(count=%ld)\n", latency, count);
    timer_int_count++;
    latency_sum += latency;
    latency_max = latency_max > latency ? latency_max : latency;
    if (timer_int_count == 100) {
        printf("timer_test: latency avg=%dns,max=%dns\n", latency_sum / timer_int_count, latency_max);
        timer_int_count = 0;
        latency_sum = 0;
        latency_max = 0;
        HAL_TIMER_ClrInt(test_timer);
        HAL_TIMER_Stop_IT(test_timer);
    }

    HAL_TIMER_ClrInt(test_timer);
}

static void timer_test(void)
{
    uint64_t start, end;
    uint32_t count;

    printf("timer_test start\n");
    start = HAL_GetSysTimerCount();
    HAL_DelayUs(1000000);
    end = HAL_GetSysTimerCount();
    count = (uint32_t)(end - start);
    printf("sys_timer 1s count: %ld(%lld, %lld)\n", count, start, end);

    HAL_TIMER_Init(test_timer, TIMER_FREE_RUNNING);
    HAL_TIMER_SetCount(test_timer, 2000000000);
    HAL_TIMER_Start(test_timer);
    start = HAL_TIMER_GetCount(test_timer);
    HAL_DelayUs(1000000);
    end = HAL_TIMER_GetCount(test_timer);
    count = (uint32_t)(end - start);
    printf("test_timer 1s count: %ld(%lld, %lld)\n", count, start, end);
    HAL_TIMER_Stop(test_timer);

    HAL_NVIC_SetIRQHandler(TIMER10_IRQn, timer_isr);
    HAL_NVIC_EnableIRQ(TIMER10_IRQn);
    printf("timer_test: 1s interrupt start\n");
    HAL_TIMER_Init(test_timer, TIMER_FREE_RUNNING);
    HAL_TIMER_SetCount(test_timer, 24000000);
    HAL_TIMER_Start_IT(test_timer);
}
#endif

/************************************************/
/*                                              */
/*              TIMER_INTMUX_TEST               */
/*                                              */
/************************************************/
#ifdef TIMER_INTMUX_TEST
static int timer_int_count = 0;
static uint32_t latency_sum = 0;
static uint32_t latency_max = 0;
struct TIMER_REG *test_timer = TIMER8;

static void timer_isr(uint32_t irq, void *args)
{
    uint32_t count;
    uint32_t latency;

    count = (uint32_t)HAL_TIMER_GetCount(test_timer);
    /* 24M timer: 41.67ns per count */
    latency = count * 41;
    printf("timer_test: latency=%ldns(count=%ld)\n", latency, count);
    timer_int_count++;
    latency_sum += latency;
    latency_max = latency_max > latency ? latency_max : latency;
    if (timer_int_count == 100) {
        printf("timer_test: latency avg=%dns,max=%dns\n", latency_sum / timer_int_count, latency_max);
        timer_int_count = 0;
        latency_sum = 0;
        latency_max = 0;
        HAL_TIMER_ClrInt(test_timer);
        HAL_TIMER_Stop_IT(test_timer);
    }

    HAL_TIMER_ClrInt(test_timer);
}

static void timer_test(void)
{
    uint64_t start, end;
    uint32_t count;

    printf("timer_test start\n");
    start = HAL_GetSysTimerCount();
    HAL_DelayUs(1000000);
    end = HAL_GetSysTimerCount();
    count = (uint32_t)(end - start);
    printf("sys_timer 1s count: %ld(%lld, %lld)\n", count, start, end);

    HAL_TIMER_Init(test_timer, TIMER_FREE_RUNNING);
    HAL_TIMER_SetCount(test_timer, 2000000000);
    HAL_TIMER_Start(test_timer);
    start = HAL_TIMER_GetCount(test_timer);
    HAL_DelayUs(1000000);
    end = HAL_TIMER_GetCount(test_timer);
    count = (uint32_t)(end - start);
    printf("test_timer 1s count: %ld(%lld, %lld)\n", count, start, end);
    HAL_TIMER_Stop(test_timer);

    HAL_INTMUX_SetIRQHandler(TIMER8_IRQn, timer_isr, NULL);
    HAL_INTMUX_EnableIRQ(TIMER8_IRQn);
    printf("timer_test: 1s interrupt start\n");
    HAL_TIMER_Init(test_timer, TIMER_FREE_RUNNING);
    HAL_TIMER_SetCount(test_timer, 24000000);
    HAL_TIMER_Start_IT(test_timer);
}
#endif

void test_demo(void)
{
#ifdef PERF_TEST
    perf_test();
#endif

#ifdef SOFTIRQ_TEST
    softirq_test();
#endif

#ifdef SYSTICK_TEST
    systick_test();
#endif

#ifdef TIMER_TEST
    timer_test();
#endif

#ifdef TIMER_INTMUX_TEST
    timer_test();
#endif
}
