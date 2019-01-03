/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018 Rockchip Electronic Co.,Ltd
 */

#ifndef _HAL_CONF_H_
#define _HAL_CONF_H_

/* DEG LEVEL */
#define HAL_DBG_ON 1
#define HAL_DBG_WRN_ON 1
#define HAL_DBG_ERR_ON 1

#define HAL_CRU_MODULE_ENABLED
#define HAL_GPIO_MODULE_ENABLED
#define HAL_GRF_MODULE_ENABLED
#define HAL_NVIC_MODULE_ENABLED
#define HAL_TIMER_MODULE_ENABLED
#define HAL_UART_MODULE_ENABLED

#ifdef HAL_CRU_MODULE_ENABLED
#include "hal_cru.h"
#endif

#ifdef HAL_GPIO_MODULE_ENABLED
#include "hal_gpio.h"
#endif

#ifdef HAL_GPIO_MODULE_ENABLED
#include "hal_grf.h"
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

#endif
