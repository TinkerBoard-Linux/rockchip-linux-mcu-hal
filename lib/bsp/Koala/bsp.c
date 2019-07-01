/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

#include "bsp.h"

#if defined(HAL_PINCTRL_MODULE_ENABLED)
static struct PINCTRL_BANK_INFO pinBanks[] = {
    PIN_BANK_CFG_FLAGS(GPIO_BANK0, 32, GRF_BASE,
                       0x0040, 2, 8,
                       0x0070, 2, 8,
                       0x00a0, 2, 8,
                       0x0000, 0, 0,
                       0x00d0, 1, 8),
    PIN_BANK_CFG_FLAGS(GPIO_BANK1, 32, GRF_BASE,
                       0x0050, 2, 8,
                       0x0080, 2, 8,
                       0x00b0, 2, 8,
                       0x0000, 0, 0,
                       0x00e0, 1, 8),
    PIN_BANK_CFG_FLAGS(GPIO_BANK2, 32, GRF_BASE,
                       0x0060, 2, 8,
                       0x0090, 2, 8,
                       0x00c0, 2, 8,
                       0x0000, 0, 0,
                       0x00f0, 1, 8),
};

const struct RK_PINCTRL_DEV g_pinDev = {
    .banks = pinBanks,
    .banksNum = HAL_ARRAY_SIZE(pinBanks),
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
