/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2022 Rockchip Electronics Co., Ltd.
 */

#ifndef _HAL_CONF_H_
#define _HAL_CONF_H_

/* HAL CPU config */
#define SOC_RK3568
#define HAL_AP_CORE
#define SYS_TIMER TIMER5 /* System timer designation (RK TIMER) */

/* HAL Driver Config */
#define HAL_CACHE_ECC_MODULE_ENABLED
#define HAL_CPU_TOPOLOGY_MODULE_ENABLED
#define HAL_CRU_MODULE_ENABLED
#define HAL_DCACHE_MODULE_ENABLED
#define HAL_DDR_ECC_MODULE_ENABLED
#define HAL_FSPI_MODULE_ENABLED
#define HAL_GIC_MODULE_ENABLED
#define HAL_GMAC_MODULE_ENABLED
#define HAL_GPIO_MODULE_ENABLED
#define HAL_GPIO_IRQ_GROUP_MODULE_ENABLED
#define HAL_SPINLOCK_MODULE_ENABLED
#define HAL_HWSPINLOCK_MODULE_ENABLED
#define HAL_I2C_MODULE_ENABLED
#define HAL_IRQ_HANDLER_MODULE_ENABLED
#define HAL_MBOX_MODULE_ENABLED
#define HAL_PCIE_MODULE_ENABLED
#define HAL_PINCTRL_MODULE_ENABLED
#define HAL_PL330_MODULE_ENABLED
#define HAL_SMCCC_MODULE_ENABLED
#define HAL_SNOR_MODULE_ENABLED
#define HAL_SPI_MODULE_ENABLED
#define HAL_TIMER_MODULE_ENABLED
#define HAL_TSADC_MODULE_ENABLED
#define HAL_UART_MODULE_ENABLED
#define HAL_WDT_MODULE_ENABLED
#define HAL_CANFD_MODULE_ENABLED

/* HAL_DBG SUB CONFIG */
#define HAL_DBG_USING_LIBC_PRINTF
#define HAL_DBG_ON
#define HAL_DBG_INFO_ON
#define HAL_DBG_WRN_ON
#define HAL_DBG_ERR_ON
#define HAL_ASSERT_ON

#ifdef HAL_SNOR_MODULE_ENABLED
#define HAL_SNOR_FSPI_HOST
#endif

#ifdef HAL_GIC_MODULE_ENABLED
#define HAL_GIC_AMP_FEATURE_ENABLED
#define HAL_GIC_PREEMPT_FEATURE_ENABLED
//#define HAL_GIC_WAIT_LINUX_INIT_ENABLED
#endif

#ifdef HAL_GPIO_IRQ_GROUP_MODULE_ENABLED
#define HAL_GPIO_IRQ_GROUP_PRIO_LEVEL_MAX (3)
#endif

#endif
