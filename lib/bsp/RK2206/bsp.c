/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

#include "bsp.h"

#ifdef HAL_GPIO_MODULE_ENABLED
const struct HAL_GPIO_DEV g_GPIOxDev =
{
    .cnt = GPIO_BANK_NUM,
    .desc[0] = {
        .base = GPIO0_BASE,
        .irqn = GPIO0_IRQn,
        .name = "gpio0",
        .handler = (void *)&HAL_GPIO0_IRQHandler,
        .offset = {
            .mux = GRF_BASE + 0x0000,
            .pul = GRF_BASE + 0x0100,
        },
    },
    .desc[1] = {
        .base = GPIO1_BASE,
        .irqn = GPIO1_IRQn,
        .name = "gpio1",
        .handler = (void *)&HAL_GPIO1_IRQHandler,
        .offset = {
            .mux = GRF_BASE + 0x0020,
            .pul = GRF_BASE + 0x0110,
        },
    },
    .muxInfo = {
        .bitsPerPin = 4,
        .pinsPerReg = 4,
    },
    .slrInfo = {
        .bitsPerPin = 0,
        .pinsPerReg = 0,
    },
    .smtInfo = {
        .bitsPerPin = 0,
        .pinsPerReg = 0,
    },
    .pulInfo = {
        .bitsPerPin = 2,
        .pinsPerReg = 8,
    },
    .drvInfo = {
        .bitsPerPin = 0,
        .pinsPerReg = 0,
    }
};
#endif

void BSP_DeInit(void)
{

}

void BSP_Init(void)
{

}
