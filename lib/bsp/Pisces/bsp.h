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

#ifdef HAL_I2C_MODULE_ENABLED
extern const struct HAL_I2C_DEV g_i2c0Dev;
extern const struct HAL_I2C_DEV g_i2c1Dev;
extern const struct HAL_I2C_DEV g_i2c2Dev;
#endif

#ifdef HAL_I2S_MODULE_ENABLED
extern struct HAL_I2S_DEV g_i2s0Dev;
#endif

#ifdef HAL_PDM_MODULE_ENABLED
extern struct HAL_PDM_DEV g_pdm0Dev;
#endif

#ifdef HAL_PL330_MODULE_ENABLED
extern struct HAL_PL330_DEV g_pl330Dev;
#endif

#ifdef HAL_VAD_MODULE_ENABLED
extern struct HAL_VAD_DEV g_vadDev;
#endif

/***************************** Function Declare ******************************/

void BSP_Init(void);

#endif
