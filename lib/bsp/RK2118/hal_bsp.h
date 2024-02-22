/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2020-2023 Rockchip Electronics Co., Ltd.
 */

#ifndef __BSP_H__
#define __BSP_H__

#include "hal_base.h"
#include "hal_spinlock_id.h"

/***************************** MACRO Definition ******************************/

/***************************** Structure Definition **************************/
#ifdef HAL_FSPI_MODULE_ENABLED
extern struct HAL_FSPI_HOST g_fspi0Dev;
#endif

#ifdef HAL_PDM_MODULE_ENABLED
extern struct HAL_PDM_DEV g_pdm0Dev;
#endif

#ifdef HAL_GMAC_MODULE_ENABLED
extern const struct HAL_GMAC_DEV g_gmac0Dev;
#endif

#ifdef HAL_I2C_MODULE_ENABLED
extern const struct HAL_I2C_DEV g_i2c0Dev;
extern const struct HAL_I2C_DEV g_i2c1Dev;
extern const struct HAL_I2C_DEV g_i2c2Dev;
extern const struct HAL_I2C_DEV g_i2c3Dev;
extern const struct HAL_I2C_DEV g_i2c4Dev;
extern const struct HAL_I2C_DEV g_i2c5Dev;
#endif

#ifdef HAL_PL330_MODULE_ENABLED
extern struct HAL_PL330_DEV g_pl330Dev0;
extern struct HAL_PL330_DEV g_pl330Dev1;
extern struct HAL_PL330_DEV g_pl330Dev2;
extern struct HAL_PL330_DEV g_pl330Dev3;
extern struct HAL_PL330_DEV g_pl330Dev4;
#endif

#ifdef HAL_PWM_MODULE_ENABLED
extern const struct HAL_PWM_DEV g_pwm0Dev;
extern const struct HAL_PWM_DEV g_pwm1Dev;
#endif

#ifdef HAL_SAI_MODULE_ENABLED
extern struct HAL_SAI_DEV g_sai0Dev;
extern struct HAL_SAI_DEV g_sai1Dev;
extern struct HAL_SAI_DEV g_sai2Dev;
extern struct HAL_SAI_DEV g_sai3Dev;
extern struct HAL_SAI_DEV g_sai4Dev;
extern struct HAL_SAI_DEV g_sai5Dev;
extern struct HAL_SAI_DEV g_sai6Dev;
extern struct HAL_SAI_DEV g_sai7Dev;
#endif

#ifdef HAL_UART_MODULE_ENABLED
extern const struct HAL_UART_DEV g_uart0Dev;
extern const struct HAL_UART_DEV g_uart1Dev;
extern const struct HAL_UART_DEV g_uart2Dev;
extern const struct HAL_UART_DEV g_uart3Dev;
#endif

#ifdef HAL_CANFD_MODULE_ENABLED
extern const struct HAL_CANFD_DEV g_can0Dev;
#endif

#if defined(HAL_PCD_MODULE_ENABLED) || defined(HAL_HCD_MODULE_ENABLED)
extern const struct HAL_USB_DEV g_usbdDev;
#endif

/***************************** Function Declare ******************************/

void BSP_MPU_Init(void);
void BSP_Init(void);
void BSP_DeInit(void);
void BSP_SetLoaderFlag(void);

#endif
