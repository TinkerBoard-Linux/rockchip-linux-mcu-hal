/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2023 Rockchip Electronics Co., Ltd.
 */

#ifndef _HAL_CONF_H_
#define _HAL_CONF_H_

/* CPU config */
#define SOC_RK3576
#define HAL_MCU_CORE

#define HAL_BUS_MCU_CORE
//#define HAL_PMU_MCU_CORE

/* TODO: Cache maintain need the decoded addr,
 * it must be matched with pre-loader!
 * default: 0x48200000
 */
#define HAL_CACHE_DECODED_ADDR_BASE 0x48200000
/* System timer designation (RK TIMER) */
#define SYS_TIMER TIMER11

#ifdef HAL_BUS_MCU_CORE
#define HAL_DBG_ON
#endif

/* HAL Driver Config */
#define HAL_CRU_MODULE_ENABLED
#define HAL_DCACHE_MODULE_ENABLED
#define HAL_GPIO_MODULE_ENABLED
#define HAL_ICACHE_MODULE_ENABLED
#define HAL_INTMUX_MODULE_ENABLED
#define HAL_IRQ_HANDLER_MODULE_ENABLED
#define HAL_MBOX_MODULE_ENABLED
#define HAL_NVIC_MODULE_ENABLED
#define HAL_PINCTRL_MODULE_ENABLED
#define HAL_SYSTICK_MODULE_ENABLED
#define HAL_TIMER_MODULE_ENABLED
#define HAL_UART_MODULE_ENABLED
#define HAL_WDT_MODULE_ENABLED

#ifdef HAL_GPIO_MODULE_ENABLED
#define HAL_GPIO_IRQ_DISPATCH_FEATURE_ENABLED
#define HAL_GPIO_VIRTUAL_MODEL_FEATURE_ENABLED
#endif

#ifdef HAL_INTMUX_MODULE_ENABLED
//#define HAL_INTMUX_CUSTOM_DISTRIBUTION_FEATURE_ENABLED
#endif

/* HAL_DBG SUB CONFIG */

#ifdef HAL_DBG_ON
#define HAL_DBG_USING_LIBC_PRINTF
#define HAL_DBG_ON
#define HAL_DBG_INFO_ON
#define HAL_DBG_WRN_ON
#define HAL_DBG_ERR_ON
#endif

#endif
