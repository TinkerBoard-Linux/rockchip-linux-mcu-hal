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
//#define SOFTIRQ_TEST
//#define SPINLOCK_TEST
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

#if defined(SOFTIRQ_TEST) && defined(PRIMARY_CPU)
    softirq_test();
#endif

#ifdef SPINLOCK_TEST
    spinlock_test();
#endif

#if defined(UNITY_TEST) && defined(PRIMARY_CPU)
    /* Unity Test */
    test_main();
#endif
}
