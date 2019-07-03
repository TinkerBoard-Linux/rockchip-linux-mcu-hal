/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

#ifndef __BSP_H__
#define __BSP_H__

#include "hal_base.h"

/***************************** MACRO Definition ******************************/

/***************************** Structure Definition **************************/
#ifdef HAL_DWDMA_MODULE_ENABLED
extern struct HAL_DWDMA_DEV g_dwDmaDev;
#endif

#if defined(HAL_PINCTRL_MODULE_ENABLED)
extern const struct RK_PINCTRL_DEV g_pinDev;
#endif

#ifdef HAL_UART_MODULE_ENABLED
extern const struct HAL_UART_DEV g_uart0Dev;
extern const struct HAL_UART_DEV g_uart1Dev;
extern const struct HAL_UART_DEV g_uart2Dev;
#endif

/***************************** Function Declare ******************************/

void BSP_Init(void);

#endif
