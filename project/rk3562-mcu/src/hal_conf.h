/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2022 Rockchip Electronics Co., Ltd.
 */

#ifndef _HAL_CONF_H_
#define _HAL_CONF_H_

/* CPU config */
#define SOC_RK3562
#define HAL_MCU_CORE

#define RKMCU_RK3562_BUS
//#define RKMCU_RK3562_PMU

#if defined(RKMCU_RK3562_BUS)

/* Cache maintain need the decoded addr, it must be matched with pre-loader */
#define HAL_CACHE_DECODED_ADDR_BASE 0x100000
/* System timer designation (RK TIMER) */
#define SYS_TIMER TIMER5

#define HAL_DBG_ON

#endif /* RKMCU_RK3562_BUS */

/* HAL Driver Config */
#define HAL_NVIC_MODULE_ENABLED
#define HAL_SYSTICK_MODULE_ENABLED
#define HAL_UART_MODULE_ENABLED

#if defined(RKMCU_RK3562_BUS)

#define HAL_DCACHE_MODULE_ENABLED
#define HAL_ICACHE_MODULE_ENABLED
#define HAL_INTMUX_MODULE_ENABLED
#define HAL_TIMER_MODULE_ENABLED

#ifdef HAL_INTMUX_MODULE_ENABLED
//#define HAL_INTMUX_CUSTOM_DISTRIBUTION_FEATURE_ENABLED
#endif

#endif /* RKMCU_RK3562_BUS */

/* HAL_DBG SUB CONFIG */

#ifdef HAL_DBG_ON
#define HAL_DBG_USING_LIBC_PRINTF
#define HAL_DBG_ON
#define HAL_DBG_INFO_ON
#define HAL_DBG_WRN_ON
#define HAL_DBG_ERR_ON
#endif

#endif