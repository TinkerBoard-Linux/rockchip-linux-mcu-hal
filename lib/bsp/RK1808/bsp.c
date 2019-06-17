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
            .mux = PMU_GRF_BASE + 0x0000,
            .pul = PMU_GRF_BASE + 0x0010,
            .drv = PMU_GRF_BASE + 0x0020,
            .slr = PMU_GRF_BASE + 0x0030,
            .smt = PMU_GRF_BASE + 0x0040,
        },
    },
    .desc[1] = {
        .base = GPIO1_BASE,
        .irqn = GPIO1_IRQn,
        .name = "gpio1",
        .handler = (void *)&HAL_GPIO1_IRQHandler,
        .offset = {
            .mux = BUS_GRF_BASE + 0x0000,
            .pul = BUS_GRF_BASE + 0x0080,
            .slr = BUS_GRF_BASE + 0x00c0,
            .smt = BUS_GRF_BASE + 0x0100,
            .drv = BUS_GRF_BASE + 0x0140,
        },
    },
    .desc[2] = {
        .base = GPIO2_BASE,
        .irqn = GPIO2_IRQn,
        .name = "gpio2",
        .handler = (void *)&HAL_GPIO2_IRQHandler,
        .offset = {
            .mux = BUS_GRF_BASE + 0x0020,
            .pul = BUS_GRF_BASE + 0x0090,
            .slr = BUS_GRF_BASE + 0x00d0,
            .smt = BUS_GRF_BASE + 0x0110,
            .drv = BUS_GRF_BASE + 0x0150,
        },
    },
    .desc[3] = {
        .base = GPIO3_BASE,
        .irqn = GPIO3_IRQn,
        .name = "gpio3",
        .handler = (void *)&HAL_GPIO3_IRQHandler,
        .offset = {
            .mux = BUS_GRF_BASE + 0x0040,
            .pul = BUS_GRF_BASE + 0x00a0,
            .slr = BUS_GRF_BASE + 0x00e0,
            .smt = BUS_GRF_BASE + 0x0120,
            .drv = BUS_GRF_BASE + 0x0160,
        },
    },
    .desc[4] = {
        .base = GPIO4_BASE,
        .irqn = GPIO4_IRQn,
        .name = "gpio4",
        .handler = (void *)&HAL_GPIO4_IRQHandler,
        .offset = {
            .mux = BUS_GRF_BASE + 0x0060,
            .pul = BUS_GRF_BASE + 0x00b0,
            .slr = BUS_GRF_BASE + 0x00f0,
            .smt = BUS_GRF_BASE + 0x0130,
            .drv = BUS_GRF_BASE + 0x0170,
        },
    },
    .muxInfo = {
        .bitsPerPin = 4,
        .pinsPerReg = 4,
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
        .bitsPerPin = 2,
        .pinsPerReg = 8,
    },
    .drvInfo = {
        .bitsPerPin = 2,
        .pinsPerReg = 8,
    }
};
#endif

#ifdef HAL_PL330_MODULE_ENABLED
struct HAL_PL330_DEV g_pl330Dev =
{
    .reg = DMA,
    .peripReqType = BURST,
    .irq[0] = DMAC_IRQn,
    .irq[1] = DMAC_ABORT_IRQn,
};
#endif

void BSP_DeInit(void)
{
}

void BSP_Init(void)
{
}
