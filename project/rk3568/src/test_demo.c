/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2022 Rockchip Electronics Co., Ltd.
 */

#include "hal_bsp.h"
#include "hal_base.h"
#include "unity_runner.h"
#include <stdlib.h>

/********************* Private MACRO Definition ******************************/
//#define GPIO_IRQ_GROUP_TEST
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
#ifdef GPIO_IRQ_GROUP_TEST && defined(PRIMARY_CPU)
    gpio_irq_group_test();
#endif

#ifdef SPINLOCK_TEST
    spinlock_test();
#endif

#if defined(UNITY_TEST) && defined(PRIMARY_CPU)
    /* Unity Test */
    test_main();
#endif
}
