/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2022 Rockchip Electronics Co., Ltd.
 */

#include "hal_bsp.h"
#include "hal_base.h"
#include "task_ipc.h"
#include "unity_runner.h"
#include <stdlib.h>

/********************* Private MACRO Definition ******************************/
//#define GPIO_TEST
//#define GPIO_IRQ_GROUP_TEST
//#define PERF_TEST
//#define SOFTIRQ_TEST
//#define SPINLOCK_TEST
//#define TIMER_TEST
//#define UNITY_TEST

#ifdef GPIO_IRQ_GROUP_TEST

#define LEVEL0_CPU0_GPIO_BITS (0) /* GPIO_PIN_A0 | GPIO_PIN_A1 */
#define LEVEL0_CPU1_GPIO_BITS (0)
#define LEVEL0_CPU2_GPIO_BITS (0)
#define LEVEL0_CPU3_GPIO_BITS (0)

#define LEVEL1_CPU0_GPIO_BITS (0)
#define LEVEL1_CPU1_GPIO_BITS (0)
#define LEVEL1_CPU2_GPIO_BITS (0)
#define LEVEL1_CPU3_GPIO_BITS (0)

#define LEVEL2_CPU0_GPIO_BITS (0)
#define LEVEL2_CPU1_GPIO_BITS (0)
#define LEVEL2_CPU2_GPIO_BITS (0)

#endif

/********************* Private Structure Definition **************************/

static struct GIC_AMP_IRQ_INIT_CFG irqsConfig[] = {
    /* The priority higher than 0x80 is non-secure interrupt. */

#ifdef GPIO_TEST
    GIC_AMP_IRQ_CFG_ROUTE(GPIO3_IRQn, 0xd0, CPU_GET_AFFINITY(1, 0)),
#endif

#ifdef SOFTIRQ_TEST
    GIC_AMP_IRQ_CFG_ROUTE(RSVD0_IRQn, 0xd0, CPU_GET_AFFINITY(1, 0)),
#endif

#ifdef TIMER_TEST
    GIC_AMP_IRQ_CFG_ROUTE(TIMER0_IRQn, 0xd0, CPU_GET_AFFINITY(0, 0)),
    GIC_AMP_IRQ_CFG_ROUTE(TIMER1_IRQn, 0xd0, CPU_GET_AFFINITY(1, 0)),
    GIC_AMP_IRQ_CFG_ROUTE(TIMER2_IRQn, 0xd0, CPU_GET_AFFINITY(2, 0)),
    GIC_AMP_IRQ_CFG_ROUTE(TIMER3_IRQn, 0xd0, CPU_GET_AFFINITY(3, 0)),
#endif

    GIC_AMP_IRQ_CFG_ROUTE(0, 0, CPU_GET_AFFINITY(1, 0)),   /* sentinel */
};

static struct GIC_IRQ_AMP_CTRL irqConfig = {
    .cpuAff = CPU_GET_AFFINITY(1, 0),
    .defPrio = 0xd0,
    .defRouteAff = CPU_GET_AFFINITY(1, 0),
    .irqsCfg = &irqsConfig[0],
};

#ifdef GPIO_IRQ_GROUP_TEST
static const struct GPIO_IRQ_GROUP_CFG gpioIrqCfg[GPIO_BANK_NUM] = {
    [GPIO_BANK0] = {
        GPIO_IRQ_GROUP_GPIO_CFG(GPIO_BANK0, GPIO0_IRQn, GPIO0),
        .groupIrqEn = GPIO_IRQ_GROUP_EN_BANK_TYPE,
        .bankTypeCfg = {
            .hwIrqCpuAff = CPU_GET_AFFINITY(1, 0),
            .prio = 0xd0,
        },
    },
    [GPIO_BANK1] = {
        GPIO_IRQ_GROUP_GPIO_CFG(GPIO_BANK1, GPIO1_IRQn, GPIO1),
        .groupIrqEn = GPIO_IRQ_GROUP_EN_BANK_TYPE,
        .bankTypeCfg = {
            .hwIrqCpuAff = CPU_GET_AFFINITY(1, 0),
            .prio = 0xd0,
        },
    },
    [GPIO_BANK2] = {
        GPIO_IRQ_GROUP_GPIO_CFG(GPIO_BANK2, GPIO2_IRQn, GPIO2),
        .groupIrqEn = GPIO_IRQ_GROUP_EN_BANK_TYPE,
        .bankTypeCfg = {
            .hwIrqCpuAff = CPU_GET_AFFINITY(1, 0),
            .prio = 0xd0,
        },
        .prioGroup[0] = {
            .cpuGroup = { LEVEL0_CPU0_GPIO_BITS, LEVEL0_CPU1_GPIO_BITS,
                          LEVEL0_CPU2_GPIO_BITS, LEVEL0_CPU3_GPIO_BITS },
            .GIRQId = { RSVD_IRQn(39), GPIO2_IRQn,
                        RSVD_IRQn(40), RSVD_IRQn(41) },
            .prio = 0x80,
        },

        .prioGroup[1] = {
            .cpuGroup = { LEVEL1_CPU0_GPIO_BITS, LEVEL1_CPU1_GPIO_BITS,
                          LEVEL1_CPU2_GPIO_BITS, LEVEL1_CPU3_GPIO_BITS },
            .GIRQId = { RSVD_IRQn(42), RSVD_IRQn(43),
                        RSVD_IRQn(44), RSVD_IRQn(45) },
            .prio = 0x90,
        },

        .prioGroup[2] = {
            .cpuGroup = { LEVEL2_CPU0_GPIO_BITS, LEVEL2_CPU1_GPIO_BITS,
                          LEVEL2_CPU2_GPIO_BITS, 0 },
            .GIRQId = { RSVD_IRQn(46), RSVD_IRQn(47),
                        RSVD_IRQn(48), RSVD_IRQn(49) },
            .prio = 0xa0,
        },
    },
    [GPIO_BANK3] = {
        GPIO_IRQ_GROUP_GPIO_CFG(GPIO_BANK3, GPIO3_IRQn, GPIO3),
        .groupIrqEn = GPIO_IRQ_GROUP_EN_BANK_TYPE,
        .bankTypeCfg = {
            .hwIrqCpuAff = CPU_GET_AFFINITY(1, 0),
            .prio = 0xd0,
        },
    },
};
#endif

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
/*                  GPIO_TEST                   */
/*                                              */
/************************************************/
#ifdef GPIO_TEST
static void gpio_isr(int vector, void *param)
{
    printf("Enter GPIO IRQHander!\n");
    HAL_GPIO_IRQHandler(GPIO3, GPIO_BANK3);
    printf("Leave GPIO IRQHandler!\n");
}

static HAL_Status b2_call_back(eGPIO_bankId bank, uint32_t pin, void *args)
{
    printf("GPIO callback!\n");

    return HAL_OK;
}

static void gpio_test(void)
{
    uint32_t level;

    /* Test GPIO output */
    HAL_GPIO_SetPinDirection(GPIO3, GPIO_PIN_B2, GPIO_OUT);
    level = HAL_GPIO_GetPinLevel(GPIO3, GPIO_PIN_B2);
    printf("test_gpio level = %ld\n", level);
    HAL_DelayMs(5000);
    if (level == GPIO_HIGH) {
        HAL_GPIO_SetPinLevel(GPIO3, GPIO_PIN_B2, GPIO_LOW);
    } else {
        HAL_GPIO_SetPinLevel(GPIO3, GPIO_PIN_B2, GPIO_HIGH);
    }
    level = HAL_GPIO_GetPinLevel(GPIO3, GPIO_PIN_B2);
    printf("test_gpio level = %ld\n", level);
    HAL_DelayMs(5000);

    /* Test GPIO input */
    HAL_GPIO_SetPinDirection(GPIO3, GPIO_PIN_B2, GPIO_IN);
    HAL_IRQ_HANDLER_SetIRQHandler(GPIO3_IRQn, gpio_isr, NULL);
    HAL_IRQ_HANDLER_SetGpioIRQHandler(GPIO_BANK3, GPIO_PIN_B2, b2_call_back, NULL);
    HAL_GIC_Enable(GPIO3_IRQn);
    HAL_GPIO_SetIntType(GPIO3, GPIO_PIN_B2, GPIO_INT_TYPE_EDGE_RISING);
    HAL_GPIO_EnableIRQ(GPIO3, GPIO_PIN_B2);
}
#endif

/************************************************/
/*                                              */
/*             GPIO_IRQ_GROUP_TEST              */
/*                                              */
/************************************************/
#ifdef GPIO_IRQ_GROUP_TEST
static void gpio_irq_group_test(void)
{
    HAL_GPIO_IRQ_GROUP_Init(CPU_GET_AFFINITY(1, 0),
                            gpioIrqCfg,
                            HAL_IRQ_HANDLER_GetGpioIrqGroupOps());
}
#endif

/************************************************/
/*                                              */
/*                  PERF_TEST                   */
/*                                              */
/************************************************/
#ifdef PERF_TEST
uint32_t g_sum = 0;
static void perf_test(void)
{
    uint32_t cpu_id, loop = 1000, size = 4 * 1024 * 1024;
    uint32_t *ptr;
    uint64_t start, end;
    double time_s;

    cpu_id = HAL_CPU_TOPOLOGY_GetCurrentCpuId();
    printf("perftest: cpu-%ld\n", cpu_id);
    coremark_main();

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

/************************************************/
/*                                              */
/*                SPINLOCK_TEST                 */
/*                                              */
/************************************************/
#ifdef SPINLOCK_TEST
static void spinlock_test(void)
{
    uint32_t cpu_id, owner;
    HAL_Check ret;

    cpu_id = HAL_CPU_TOPOLOGY_GetCurrentCpuId();
    printf("begin spinlock test: cpu=%ld\n", cpu_id);

    while (1) {
        ret = HAL_SPINLOCK_TryLock(0);
        if (ret) {
            printf("try lock success: %ld\n", cpu_id);
            HAL_SPINLOCK_Unlock(0);
        } else {
            printf("try lock failed: %ld\n", cpu_id);
        }
        HAL_SPINLOCK_Lock(0);
        printf("enter cpu%ld\n", cpu_id);
        HAL_CPUDelayUs(rand() % 2000000);
        owner = HAL_SPINLOCK_GetOwner(0);
        if ((owner >> 1) != cpu_id) {
            printf("owner id is not matched(%ld, %ld)\n", cpu_id, owner);
        }
        printf("leave cpu%ld\n", cpu_id);
        HAL_SPINLOCK_Unlock(0);
        HAL_CPUDelayUs(10);
    }
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
struct TIMER_REG *timer = NULL;
static bool desc_timer = true;
static int fixed_spend = 0;
static uint32_t latency_max = 0;
static struct TIMER_REG *g_timer[4] = { TIMER0, TIMER1, TIMER2, TIMER3 };
static uint32_t g_timer_irq[4] = { TIMER0_IRQn, TIMER1_IRQn, TIMER2_IRQn, TIMER3_IRQn };

static void timer_isr(int vector, void *param)
{
    uint32_t count, cpu_id;
    uint32_t latency;

    cpu_id = HAL_CPU_TOPOLOGY_GetCurrentCpuId();
    count = (uint32_t)HAL_TIMER_GetCount(timer);
    if (desc_timer) {
        count = 24000000 - count;
    }
    if (count > fixed_spend) {
        count -= fixed_spend;
    }
    /* 24M timer: 41.67ns per count */
    latency = count * 41;
    printf("count=%d\n", count);
    printf("cpu_id=%d: latency=%dns(count=%d)\n", cpu_id, latency, count);
    timer_int_count++;
    latency_sum += latency;
    latency_max = latency_max > latency ? latency_max : latency;
    if (timer_int_count == 100) {
        printf("cpu_id=%d: latency avg=%d,max=%d\n", cpu_id, latency_sum / timer_int_count, latency_max);
        timer_int_count = 0;
        latency_sum = 0;
        latency_max = 0;
        HAL_TIMER_ClrInt(timer);
        HAL_GIC_EndOfInterrupt(g_timer_irq[cpu_id]);
        HAL_TIMER_Stop_IT(timer);
    }

    HAL_TIMER_ClrInt(timer);
    HAL_GIC_EndOfInterrupt(g_timer_irq[cpu_id]);
}

static void timer_test(void)
{
    uint64_t start, end;
    uint32_t count, cpu_id;

    cpu_id = HAL_CPU_TOPOLOGY_GetCurrentCpuId();

    start = HAL_GetSysTimerCount();
    HAL_CPUDelayUs(1000000);
    end = HAL_GetSysTimerCount();
    count = (uint32_t)(end - start);
    printf("systimer 1s count: %ld(%lld, %lld)\n", count, start, end);

    printf("\n\ncpu_id=%ld: test internal irq\n", cpu_id);
    timer = g_timer[cpu_id];
    /* Pay attention to the timer type */
    desc_timer = true;
    HAL_TIMER_Init(timer, TIMER_FREE_RUNNING);
    HAL_TIMER_SetCount(timer, 2000000000);
    HAL_TIMER_Start(timer);
    start = HAL_TIMER_GetCount(timer);
    HAL_CPUDelayUs(1000000);
    end = HAL_TIMER_GetCount(timer);
    count = (uint32_t)(end - start);
    fixed_spend = start;
    printf("cpu_id=%ld: internal timer 1s count: %ld(%lld, %lld), fixed_spend=%d\n",
           cpu_id, count, start, end, fixed_spend);
    HAL_TIMER_Stop(timer);

    HAL_IRQ_HANDLER_SetIRQHandler(g_timer_irq[cpu_id], timer_isr, NULL);
    HAL_GIC_Enable(g_timer_irq[cpu_id]);
    HAL_TIMER_Init(timer, TIMER_FREE_RUNNING);
    HAL_TIMER_SetCount(timer, 24000000);
    HAL_TIMER_Start_IT(timer);
}
#endif

/********************* Public Function Definition ****************************/

void TEST_DEMO_GIC_Init(void)
{
    HAL_GIC_Init(&irqConfig);
}

void test_demo(void)
{
#if defined(GPIO_TEST) && defined(PRIMARY_CPU)
    gpio_test();
#endif

#if defined(GPIO_IRQ_GROUP_TEST) && defined(PRIMARY_CPU)
    gpio_irq_group_test();
#endif

#if defined(PERF_TEST) && defined(PRIMARY_CPU)
    perf_test();
#endif

#if defined(SOFTIRQ_TEST) && defined(PRIMARY_CPU)
    softirq_test();
#endif

#ifdef SPINLOCK_TEST
    spinlock_test();
#endif

#ifdef TIMER_TEST
    timer_test();
#endif

#if defined(UNITY_TEST) && defined(PRIMARY_CPU)
    /* Unity Test */
    test_main();
#endif
}
