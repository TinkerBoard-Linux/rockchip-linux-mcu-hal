/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

#ifndef __BSP_H__
#define __BSP_H__

#include "hal_base.h"

/***************************** MACRO Definition ******************************/

/***************************** Structure Definition **************************/

#ifdef HAL_GPIO_MODULE_ENABLED
extern const struct HAL_GPIO_DEV g_GPIOxDev;
#endif

#ifdef HAL_PL330_MODULE_ENABLED
extern struct HAL_PL330_DEV g_pl330Dev;
#endif

/***************************** Function Declare ******************************/

void BSP_Init(void);

#endif
