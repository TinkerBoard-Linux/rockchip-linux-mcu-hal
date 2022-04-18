/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2022 Rockchip Electronics Co., Ltd.
 */

#ifndef _HAL_CONF_H_
#define _HAL_CONF_H_

/* HAL CPU config */
#define SOC_RK3308
#define SYS_TIMER TIMER5 /* System timer designation (RK TIMER) */

/* HAL Driver Config */
#define HAL_CPU_TOPOLOGY_MODULE_ENABLED
#define HAL_CRU_MODULE_ENABLED
#define HAL_PINCTRL_MODULE_ENABLED
#define HAL_TIMER_MODULE_ENABLED
#define HAL_TSADC_MODULE_ENABLED
#define HAL_UART_MODULE_ENABLED

/* HAL_DBG SUB CONFIG */
#define HAL_DBG_USING_LIBC_PRINTF
#define HAL_DBG_ON
#define HAL_DBG_INFO_ON
#define HAL_DBG_WRN_ON
#define HAL_DBG_ERR_ON
#define HAL_ASSERT_ON

#endif
