/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

#ifndef __BSP_H__
#define __BSP_H__

#include "hal_base.h"

/***************************** MACRO Definition ******************************/

/***************************** Structure Definition **************************/
#if defined(HAL_PINCTRL_MODULE_ENABLED)
extern const struct RK_PINCTRL_DEV g_pinDev;
#endif

/***************************** Function Declare ******************************/

void BSP_Init(void);

#endif
