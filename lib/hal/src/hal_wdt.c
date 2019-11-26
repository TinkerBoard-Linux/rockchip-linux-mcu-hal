/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup WDT
 *  @{
 */

/** @defgroup WDT_How_To_Use How To Use
 *  @{

 The WDT driver can be used as follows:

 @} */

#include "hal_base.h"

#ifdef HAL_WDT_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/

#define WDOG_COUNTER_RESTART_KICK_VALUE 0x76

/* The maximum TOP (timeout period) value that can be set in the watchdog. */

#define WDT_MAX_TOP 15
#define WDT_TIMEOUT 500 /* ms */

/********************* Private Structure Definition **************************/

struct DW_WDT {
    uint32_t freq;
};

/********************* Private Variable Definition ***************************/

static struct DW_WDT dwWdt;
static struct WDT_REG *pWDT = NULL;

/********************* Private Function Definition ***************************/

__STATIC_INLINE uint32_t WDT_TopInSeconds(uint32_t top)
{
    /*
     * There are 16 possible timeout values in 0..15 where the number of
     * cycles is 2 ^ (16 + i) and the watchdog counts down.
     */
    uint32_t cycles = 1 << (16 + top);

    return cycles / dwWdt.freq;
}

static void WDT_SetTop(uint32_t top_s)
{
    uint32_t i, top_Val = WDT_MAX_TOP;

    /*
     * Iterate over the timeout values until we find the closest match. We
     * always look for >=.
     */
    for (i = 0; i <= WDT_MAX_TOP; ++i)
        if (WDT_TopInSeconds(i) >= top_s) {
            top_Val = i;
            break;
        }
    /*
     * Set the new value in the watchdog.  Some versions of dwWdt
     * have have TOPINIT in the TIMEOUT_RANGE register (as per
     * CP_WDT_DUAL_TOP in WDT_COMP_PARAMS_1).  On those we
     * effectively get a pat of the watchdog right here.
     */
    pWDT->TORR = top_Val | top_Val << WDT_TORR_TIMEOUT_PERIOD_SHIFT;
    HAL_WDT_KeepAlive();
}

/********************* Public Function Definition ****************************/

/** @defgroup WDT_Exported_Functions_Group4 Init and DeInit

  This section provides functions allowing to init and deinit the module:

  *  @{
  */

/**
 * @brief  WDT enable
 * @return HAL_Status
 */
HAL_Status HAL_WDT_Init(uint32_t freq, struct WDT_REG *wdt)
{
    HAL_ASSERT(freq != 0);

    HAL_ASSERT(IS_WDT_INSTANCE(wdt));

    pWDT = wdt;

    dwWdt.freq = freq;

    return HAL_OK;
}

/** @} */

/** @defgroup WDT_Exported_Functions_Group5 Other Functions

  This section provides functions allowing to other controlling:

  *  @{
  */

/**
 * @brief  Set WDT timeout period
 * @param  top: timeout period in seconds
 * @return HAL_Status
 */
HAL_Status HAL_WDT_SetTimeout(uint32_t top)
{
    WDT_SetTop(top);

    return HAL_OK;
}

/**
 * @brief  Keep WDT alive
 * @return HAL_Status
 */
HAL_Status HAL_WDT_KeepAlive(void)
{
    pWDT->CRR = WDOG_COUNTER_RESTART_KICK_VALUE;

    return HAL_OK;
}

/**
 * @brief  Start WDT
 * @param  mode: Set WDT resp mode
 * @return HAL_Status
 */
HAL_Status HAL_WDT_Start(enum WDT_RESP_MODE mode)
{
    uint32_t tmp = pWDT->CR;

    if (mode == INDIRECT_SYSTEM_RESET)
        tmp |= WDT_CR_RESP_MODE_MASK;
    else if (mode == DIRECT_SYSTEM_RESET)
        tmp &= ~WDT_CR_RESP_MODE_MASK;

    tmp |= WDT_CR_WDT_EN_MASK;

    pWDT->CR = tmp;

    return HAL_OK;
}

/**
 * @brief  Clear interrupt
 * @return WDT_EOI value
 */
uint32_t HAL_WDT_ClearInterrupt(void)
{
    return pWDT->EOI;
}

/**
 * @brief  Get interrupt status
 * @return Interrupt status
 */
uint32_t HAL_WDT_GetIntStatus(void)
{
    return pWDT->STAT;
}

/** @} */

#endif

/** @} */

/** @} */
