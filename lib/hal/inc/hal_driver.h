/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018-2019 Rockchip Electronic Co.,Ltd
 */

#ifndef _HAL_DRIVER_H_
#define _HAL_DRIVER_H_

#ifdef HAL_CRU_MODULE_ENABLED
#include "hal_cru.h"
#endif

#ifdef HAL_GPIO_MODULE_ENABLED
#include "hal_gpio.h"
#endif

#ifdef HAL_GPIO_MODULE_ENABLED
#include "hal_grf.h"
#endif

#ifdef HAL_INTC_MODULE_ENABLED
#include "hal_intc.h"
#endif

#ifdef HAL_MBOX_MODULE_ENABLED
#include "hal_mbox.h"
#endif

#ifdef HAL_NVIC_MODULE_ENABLED
#include "hal_nvic.h"
#endif

#ifdef HAL_TIMER_MODULE_ENABLED
#include "hal_timer.h"
#endif

#ifdef HAL_UART_MODULE_ENABLED
#include "hal_uart.h"
#endif

#if defined(HAL_ICACHE_MODULE_ENABLED) || defined(HAL_DCACHE_MODULE_ENABLED)
#include "hal_cache.h"
#endif

#endif
