/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

#ifndef _HAL_CONF_H_
#define _HAL_CONF_H_

/* HAL SOC Config */
#define RKMCU_RK2108
#define SYS_TIMER TIMER5 /* System timer designation (RK TIMER) */

/* HAL Driver Config */
#define HAL_ACDCDIG_MODULE_ENABLED
#define HAL_AUDIOPWM_MODULE_ENABLED
#define HAL_CIF_MODULE_ENABLED
#define HAL_CRU_MODULE_ENABLED
#define HAL_DCACHE_MODULE_ENABLED
#define HAL_DSI_MODULE_ENABLED
#define HAL_DSP_MODULE_ENABLED
#define HAL_FSPI_MODULE_ENABLED
#define HAL_GPIO_MODULE_ENABLED
#define HAL_HCD_MODULE_ENABLED
#define HAL_I2C_MODULE_ENABLED
#define HAL_I2STDM_MODULE_ENABLED
#define HAL_ICACHE_MODULE_ENABLED
#define HAL_MBOX_MODULE_ENABLED
#define HAL_NVIC_MODULE_ENABLED
#define HAL_PCD_MODULE_ENABLED
#define HAL_PDM_MODULE_ENABLED
#define HAL_PINCTRL_MODULE_ENABLED
#define HAL_PL330_MODULE_ENABLED
#define HAL_PM_CPU_SLEEP_MODULE_ENABLED
#define HAL_PM_MODULE_ENABLED
#define HAL_PMU_MODULE_ENABLED
#define HAL_PSRAM_MODULE_ENABLED
#define HAL_PWM_MODULE_ENABLED
#define HAL_PWR_INTBUS_MODULE_ENABLED
#define HAL_SDIO_MODULE_ENABLED
#define HAL_SNOR_MODULE_ENABLED
#define HAL_SPI2APB_MODULE_ENABLED
#define HAL_SPI_MODULE_ENABLED
#define HAL_SYSTICK_MODULE_ENABLED
#define HAL_TIMER_MODULE_ENABLED
#define HAL_UART_MODULE_ENABLED
#define HAL_VAD_MODULE_ENABLED
#define HAL_VOP_MODULE_ENABLED
#define HAL_WDT_MODULE_ENABLED

/* HAL_DEG SUB CONFIG */
#define HAL_SYSLOG      printf
#define HAL_DBG_ON      1
#define HAL_DBG_INFO_ON 1
#define HAL_DBG_WRN_ON  1
#define HAL_DBG_ERR_ON  1
#define USE_FULL_ASSERT 1

#define HAL_CRU_AS_FEATURE_ENABLED

/* UNITY CONFIG */
#define UNITY_INCLUDE_CONFIG_H

#if defined(HAL_SNOR_MODULE_ENABLED)
#define HAL_SNOR_FSPI_HOST
#define HAL_FSPI_XIP_ENABLE
#endif

#endif
