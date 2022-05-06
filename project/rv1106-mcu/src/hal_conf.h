/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2022 Rockchip Electronics Co., Ltd.
 */

#ifndef _HAL_CONF_H_
#define _HAL_CONF_H_

/* CPU config */
#define SOC_RV1106
#define HAL_MCU_CORE
#define SYS_TIMER TIMER5 /* System timer designation (RK TIMER) */

/* HAL Driver Config */
#define HAL_CRU_MODULE_ENABLED
#define HAL_GPIO_MODULE_ENABLED
#define HAL_MBOX_MODULE_ENABLED
#define HAL_PINCTRL_MODULE_ENABLED
#define HAL_TIMER_MODULE_ENABLED
#define HAL_UART_MODULE_ENABLED

#endif
