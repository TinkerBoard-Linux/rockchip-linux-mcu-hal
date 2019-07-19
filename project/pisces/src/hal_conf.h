/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

#ifndef _HAL_CONF_H_
#define _HAL_CONF_H_

/* HAL SOC Config */
#define RKMCU_PISCES

/* HAL Driver Config */
#define HAL_AUDIO_MODULE_ENABLED
#define HAL_CRU_MODULE_ENABLED
#define HAL_DCACHE_MODULE_ENABLED
#define HAL_I2C_MODULE_ENABLED
#define HAL_I2S_MODULE_ENABLED
#define HAL_ICACHE_MODULE_ENABLED
#define HAL_MBOX_MODULE_ENABLED
#define HAL_NVIC_MODULE_ENABLED
#define HAL_PCM_MODULE_ENABLED
#define HAL_PDM_MODULE_ENABLED
#define HAL_PL330_MODULE_ENABLED
#define HAL_PMU_MODULE_ENABLED
#define HAL_PWR_INTBUS_MODULE_ENABLED
#define HAL_PWR_MODULE_ENABLED
#define HAL_SPI2APB_MODULE_ENABLED
#define HAL_SPI_MODULE_ENABLED
#define HAL_TIMER_MODULE_ENABLED
#define HAL_UART_MODULE_ENABLED
#define HAL_VAD_MODULE_ENABLED
#define HAL_WDT_MODULE_ENABLED

/* HAL_DEG SUB CONFIG */
#define HAL_DBG_ON      1
#define HAL_DBG_INFO_ON 1
#define HAL_DBG_WRN_ON  1
#define HAL_DBG_ERR_ON  1
#define USE_FULL_ASSERT 1

/* UNITY CONFIG */
#define UNITY_INCLUDE_CONFIG_H

#endif
