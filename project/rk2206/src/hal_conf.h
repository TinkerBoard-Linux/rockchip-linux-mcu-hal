/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

#ifndef _HAL_CONF_H_
#define _HAL_CONF_H_

/* HAL SOC Config */
#define RKMCU_RK2206

/* HAL Driver Config */
#define HAL_NVIC_MODULE_ENABLED
#define HAL_FSPI_MODULE_ENABLED
#define HAL_SNOR_MODULE_ENABLED
#define HAL_SPI_MODULE_ENABLED
#define HAL_UART_MODULE_ENABLED
#define HAL_DWDMA_MODULE_ENABLED

/* HAL_DEG SUB CONFIG */
#define HAL_DBG_ON      1
#define HAL_DBG_INFO_ON 1
#define HAL_DBG_WRN_ON  1
#define HAL_DBG_ERR_ON  1
#define USE_FULL_ASSERT 1

/* UNITY CONFIG */
#define UNITY_INCLUDE_CONFIG_H

#ifdef HAL_SNOR_MODULE_ENABLED
#define HAL_SNOR_FSPI_HOST
#define HAL_FSPI_XIP_ENABLE
#endif

#endif
