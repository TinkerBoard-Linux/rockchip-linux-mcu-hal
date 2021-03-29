/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2021 Rockchip Electronics Co., Ltd.
 */

#ifndef __BSP_H__
#define __BSP_H__

#include "hal_base.h"

/***************************** MACRO Definition ******************************/

/***************************** Structure Definition **************************/
#ifdef HAL_SPI_MODULE_ENABLED
extern const struct HAL_SPI_DEV g_spiDev0;
extern const struct HAL_SPI_DEV g_spiDev1;
extern const struct HAL_SPI_DEV g_spiDev2;
extern const struct HAL_SPI_DEV g_spiDev3;
#endif

#ifdef HAL_UART_MODULE_ENABLED
extern const struct HAL_UART_DEV g_uart2Dev;
#endif

/***************************** Function Declare ******************************/
void BSP_Init(void);

#endif
