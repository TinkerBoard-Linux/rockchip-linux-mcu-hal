/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2020-2021 Rockchip Electronics Co., Ltd.
 */

#ifndef __BSP_H__
#define __BSP_H__

#include "hal_base.h"

/***************************** MACRO Definition ******************************/

/***************************** Structure Definition **************************/

#ifdef HAL_UART_MODULE_ENABLED
extern const struct HAL_UART_DEV g_uart0Dev;
extern const struct HAL_UART_DEV g_uart2Dev;
#endif

#ifdef HAL_PCIE_MODULE_ENABLED
extern struct HAL_PCIE_DEV g_pcieDev;
#endif

#ifdef HAL_PDM_MODULE_ENABLED
extern struct HAL_PDM_DEV g_pdm0Dev;
#endif

#ifdef HAL_VAD_MODULE_ENABLED
extern struct HAL_VAD_DEV g_vadDev;
#endif

/***************************** Function Declare ******************************/
void BSP_Init(void);
void BSP_SetLoaderFlag(void);

#endif
