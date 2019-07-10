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

#ifdef HAL_PL330_MODULE_ENABLED
extern struct HAL_PL330_DEV g_pl330Dev;
#endif

#ifdef HAL_UART_MODULE_ENABLED
extern const struct HAL_UART_DEV g_uart0Dev;
extern const struct HAL_UART_DEV g_uart1Dev;
#endif

#ifdef HAL_I2C_MODULE_ENABLED
extern const struct HAL_I2C_DEV g_i2c0Dev;
extern const struct HAL_I2C_DEV g_i2c1Dev;
extern const struct HAL_I2C_DEV g_i2c2Dev;
#endif

#ifdef HAL_PWM_MODULE_ENABLED
extern const struct HAL_PWM_DEV g_pwm0Dev;
#endif

/***************************** Function Declare ******************************/

void BSP_Init(void);

#endif
