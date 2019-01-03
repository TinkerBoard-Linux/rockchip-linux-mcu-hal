/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018 Rockchip Electronic Co.,Ltd
 */

/**
 * @file  hal_conf_template.h
 */

#ifndef _HAL_CONF_H_
#define _HAL_CONF_H_

/* DEG LEVEL */
#define HAL_DBG_ON 1
#define HAL_DBG_WRN_ON 1
#define HAL_DBG_ERR_ON 1

/* HAL SOC Config */
#define RKMCU_RK2106

/* HAL Driver Config */
#define HAL_CRU_MODULE_ENABLED
#define HAL_GPIO_MODULE_ENABLED
#define HAL_GRF_MODULE_ENABLED
#define HAL_MBOX_MODULE_ENABLED
#define HAL_NVIC_MODULE_ENABLED
#define HAL_TIMER_MODULE_ENABLED
#define HAL_UART_MODULE_ENABLED

#endif
