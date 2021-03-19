/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2021 Rockchip Electronics Co., Ltd.
 */

#ifndef _HAL_CONF_H_
#define _HAL_CONF_H_

/* CPU config */
#define SOC_RK3568

/* HAL Driver Config */
#define HAL_CPU_TOPOLOGY_MODULE_ENABLED
#define HAL_CRU_MODULE_ENABLED
#define HAL_MBOX_MODULE_ENABLED
#define HAL_TIMER_MODULE_ENABLED
#define HAL_UART_MODULE_ENABLED

/* HAL_DEG SUB CONFIG */
#define HAL_DBG_USING_LIBC_PRINTF
#define HAL_DBG_ON
#define HAL_DBG_INFO_ON
#define HAL_DBG_WRN_ON
#define HAL_DBG_ERR_ON

#endif
