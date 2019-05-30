/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

#include "bsp.h"

#ifdef HAL_GPIO_MODULE_ENABLED
const struct HAL_GPIO_DEV g_GPIOxDev =
{
    .cnt = GPIO_PORT_NUM,
    .desc[0] = {
        .base = GPIO0_BASE,
        .irqn = GPIO0_IRQn,
        .name = "gpio0",
        .handler = (void *)&HAL_GPIO0_IRQHandler,
        .offset = {
            .mux = PMU_GRF_BASE + 0x0000,
            .pul = PMU_GRF_BASE + 0x0010,
            .drv = PMU_GRF_BASE + 0x0020,
            .smt = PMU_GRF_BASE + 0x0030,
            .slr = PMU_GRF_BASE + 0x0040,
        },
    },
    .desc[1] = {
        .base = GPIO1_BASE,
        .irqn = GPIO1_IRQn,
        .name = "gpio1",
        .handler = (void *)&HAL_GPIO1_IRQHandler,
        .offset = {
            .mux = GRF_BASE + 0x0010,
            .pul = GRF_BASE + 0x0110,
            .drv = GRF_BASE + 0x0210,
            .slr = GRF_BASE + 0x0308,
            .smt = GRF_BASE + 0x0388,
        },
    },
    .desc[2] = {
        .base = GPIO2_BASE,
        .irqn = GPIO2_IRQn,
        .name = "gpio2",
        .handler = (void *)&HAL_GPIO2_IRQHandler,
        .offset = {
            .mux = GRF_BASE + 0x0020,
            .pul = GRF_BASE + 0x0120,
            .drv = GRF_BASE + 0x0220,
            .slr = GRF_BASE + 0x0310,
            .smt = GRF_BASE + 0x0390,
        },
    },
    .desc[3] = {
        .base = GPIO3_BASE,
        .irqn = GPIO3_IRQn,
        .name = "gpio3",
        .handler = (void *)&HAL_GPIO3_IRQHandler,
        .offset = {
            .mux = GRF_BASE + 0x0030,
            .pul = GRF_BASE + 0x0130,
            .drv = GRF_BASE + 0x0230,
            .slr = GRF_BASE + 0x0318,
            .smt = GRF_BASE + 0x0398,
        },
    },
    .muxInfo = {
        .bitsPerPin = 4,
        .pinsPerReg = 8,
    },
    .slrInfo = {
        .bitsPerPin = 1,
        .pinsPerReg = 8,
    },
    .smtInfo = {
        .bitsPerPin = 1,
        .pinsPerReg = 8,
    },
    .pulInfo = {
        .bitsPerPin = 1,
        .pinsPerReg = 8,
    },
    .drvInfo = {
        .bitsPerPin = 2,
        .pinsPerReg = 8,
    }
};
#endif

void BSP_DeInit(void)
{
}

void BSP_Init(void)
{
}
