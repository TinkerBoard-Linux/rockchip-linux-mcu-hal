/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018-2019 Rockchip Electronic Co.,Ltd
 */

#ifndef _HAL_CONF_H_
#define _HAL_CONF_H_

/* HAL SOC Config */
#define RKMCU_RK2106

/* HAL Driver Config */
#define HAL_CRU_MODULE_ENABLED
#define HAL_GPIO_MODULE_ENABLED
#define HAL_GRF_MODULE_ENABLED
#define HAL_MBOX_MODULE_ENABLED
#define HAL_NVIC_MODULE_ENABLED
#define HAL_SDIO_MODULE_ENABLED
#define HAL_TIMER_MODULE_ENABLED
#define HAL_UART_MODULE_ENABLED

/* HAL_DEG SUB CONFIG */
#define HAL_DBG_ON 1
#define HAL_DBG_INFO_ON 1
#define HAL_DBG_WRN_ON 1
#define HAL_DBG_ERR_ON 1
#define USE_FULL_ASSERT 1

/* UNITY CONFIG */
#define UNITY_INCLUDE_CONFIG_H

#endif
