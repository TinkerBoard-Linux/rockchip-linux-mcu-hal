/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2020 Rockchip Electronics Co., Ltd.
 */

#ifndef _HAL_CONF_H_
#define _HAL_CONF_H_

/* CPU config */
#define SOC_RK3588
#define HAL_MCU_CORE
#define RKMCU_RK3588_PMU

/* Cache maintain need the decoded addr, it must be matched with pre-loader */
#if defined(RKMCU_RK3588_PMU)
#define HAL_CACHE_DECODED_ADDR_BASE 0x200000
#elif defined(RKMCU_RK3588_DDR)
#define HAL_CACHE_DECODED_ADDR_BASE 0x300000           /* Not really necessary */
#elif defined(RKMCU_RK3588_NPU)
#define HAL_CACHE_DECODED_ADDR_BASE 0x400000
#endif

#define SYS_TIMER TIMER0 /* System timer designation (RK TIMER) */

/* HAL Driver Config */
#define HAL_CRU_MODULE_ENABLED
#define HAL_DCACHE_MODULE_ENABLED
#define HAL_GPIO_MODULE_ENABLED
#define HAL_ICACHE_MODULE_ENABLED
#define HAL_PDM_MODULE_ENABLED
#define HAL_PINCTRL_MODULE_ENABLED
#define HAL_UART_MODULE_ENABLED
#define HAL_VAD_MODULE_ENABLED
#define HAL_SYSTICK_MODULE_ENABLED
#define HAL_TIMER_MODULE_ENABLED
#define HAL_NVIC_MODULE_ENABLED
#define HAL_MBOX_MODULE_ENABLED

/* HAL_DBG SUB CONFIG */
#define HAL_DBG_USING_LIBC_PRINTF
#define HAL_DBG_ON
#define HAL_DBG_INFO_ON
#define HAL_DBG_WRN_ON
#define HAL_DBG_ERR_ON

#endif
