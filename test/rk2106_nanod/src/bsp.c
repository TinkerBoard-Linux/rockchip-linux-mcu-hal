/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018 Rockchip Electronic Co.,Ltd
 */

#include "bsp.h"
#include "hal_base.h"

/********************* Private MACRO Definition ******************************/

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

/* BSP POWER Init */
static void BSP_POWER_Init(void)
{
    HAL_GRF_GPIOMuxSet(GPIO_CH2, GPIOPortA_Pin6, IOMUX_GPIO2A6_IO);

    HAL_GPIO_SetPinDirection(GPIO_CH2, GPIOPortA_Pin6, GPIO_OUT);
    HAL_GPIO_SetPinLevel(GPIO_CH2, GPIOPortA_Pin6, GPIO_HIGH);
}

/* BSP UART Init */
static void BSP_UART_Init(void)
{
    struct CRU_REG *pCRU = (struct CRU_REG *)(CRU_BASE);
    struct GRF_REG *pGRF = (struct GRF_REG *)(GRF_BASE);

    if (0) {
        /* UART 0 */
        pCRU->CRU_CLKSEL_CON[9] =
            (1 << 15) | (0 << 8) | (((0x1 << 15) | (0x3F << 8)) << 16);
        pGRF->GPIO_IO2MUX[1] = (1 << 10) | ((3 << 10) << 16);
    } else {
        pCRU->CRU_CLKSEL_CON[9] =
            (1 << 6) | (0 << 0) | (((0x3 << 6) | (0x3F << 0)) << 16);
        pGRF->GPIO_IO2MUX[2] = (1 << 0) | (3 << 16);
    }
}

/********************* Public Function Definition ****************************/

void BSP_Init(void)
{
    BSP_POWER_Init();
    BSP_UART_Init();
}
