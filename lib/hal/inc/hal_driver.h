/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018-2019 Rockchip Electronic Co.,Ltd
 */

#ifndef _HAL_DRIVER_H_
#define _HAL_DRIVER_H_

#if defined(HAL_ICACHE_MODULE_ENABLED) || defined(HAL_DCACHE_MODULE_ENABLED)
#include "hal_cache.h"
#endif

#ifdef HAL_CRU_MODULE_ENABLED
#include "hal_cru.h"
#endif

#ifdef HAL_DSI_MODULE_ENABLED
#include "hal_display.h"
#include "hal_dsi.h"
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

#ifdef HAL_PL330_MODULE_ENABLED
#include "hal_pl330.h"
#endif

#ifdef HAL_PMU_MODULE_ENABLED
#include "hal_pd.h"
#endif

#ifdef HAL_PM_MODULE_ENABLED
#include "hal_pm.h"
#endif

#ifdef HAL_SDIO_MODULE_ENABLED
#include "hal_sdio.h"
#endif

#ifdef HAL_SFC_MODULE_ENABLED
#include "hal_sfc.h"
#endif

#ifdef HAL_SNOR_MODULE_ENABLED
#include "hal_snor.h"
#endif

#ifdef HAL_TIMER_MODULE_ENABLED
#include "hal_timer.h"
#endif

#ifdef HAL_UART_MODULE_ENABLED
#include "hal_uart.h"
#endif

#ifdef HAL_VOP_MODULE_ENABLED
#include "hal_display.h"
#include "hal_vop.h"
#endif

#ifdef HAL_WDT_MODULE_ENABLED
#include "hal_wdt.h"
#endif

#endif
