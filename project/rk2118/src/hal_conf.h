/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2023 Rockchip Electronics Co., Ltd.
 */

#ifndef _HAL_CONF_H_
#define _HAL_CONF_H_

/* HAL SOC Config */
#define RKMCU_RK2118
#define HAL_MCU_CORE
#define SYS_TIMER TIMER5 /* System timer designation (RK TIMER) */

/* HAL Driver Config */
#define HAL_ASRC_MODULE_ENABLED
#define HAL_CRU_MODULE_ENABLED
#define HAL_CRYPTO_MODULE_ENABLED
#define HAL_DCACHE_MODULE_ENABLED
#define HAL_FACC_FIR_MODULE_ENABLED
#define HAL_FACC_IIR_MODULE_ENABLED
#define HAL_FSPI_MODULE_ENABLED
#define HAL_GMAC_MODULE_ENABLED
#define HAL_GPIO_MODULE_ENABLED
#define HAL_I2C_MODULE_ENABLED
#define HAL_ICACHE_MODULE_ENABLED
#define HAL_NVIC_MODULE_ENABLED
#define HAL_OTP_MODULE_ENABLED
#define HAL_PDM_MODULE_ENABLED
#define HAL_PINCTRL_MODULE_ENABLED
#define HAL_PL330_MODULE_ENABLED
#define HAL_SAI_MODULE_ENABLED
#define HAL_SNOR_MODULE_ENABLED
#define HAL_SPDIFRX_MODULE_ENABLED
#define HAL_SPDIFTX_MODULE_ENABLED
#define HAL_SYSTICK_MODULE_ENABLED
#define HAL_TRNG_MODULE_ENABLED
#define HAL_TSADC_MODULE_ENABLED
#define HAL_UART_MODULE_ENABLED
#define HAL_VOP_MODULE_ENABLED

/* HAL_DBG SUB CONFIG */
//#define HAL_DBG_USING_LIBC_PRINTF
#define HAL_DBG_USING_HAL_PRINTF
#define HAL_DBG_ON
#define HAL_DBG_INFO_ON
#define HAL_DBG_WRN_ON
#define HAL_DBG_ERR_ON
#define HAL_ASSERT_ON

#endif
