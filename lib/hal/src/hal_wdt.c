/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

/** @addtogroup WDT
 *  @{
 */

/** @defgroup How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The WDT driver can be used as follows:

 @endverbatim
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
static struct WDT_REG *pWDT = (struct WDT_REG *)(WDT_BASE);

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
    pWDT->WDT_TORR = top_Val | top_Val << WDT_WDT_TORR_TIMEOUT_PERIOD_SHIFT;
    HAL_WDT_KeepAlive();
}

/********************* Public Function Definition ****************************/

/** @defgroup WDT_Exported_Functions_Group4 Init and Deinit
  @verbatim

  ===============================================================================
             #### Init and deinit functions ####
  ===============================================================================
  This section provides functions allowing to init and deinit the module:

  @endverbatim
  *  @{
  */

/**
 * @brief  WDT enable
 * @return HAL_Status
 */
HAL_Status HAL_WDT_Init(uint32_t freq)
{
    HAL_ASSERT(freq != 0);

    dwWdt.freq = freq;

    return HAL_OK;
}

/** @} */

/** @defgroup WDT_Exported_Functions_Group5 Other Functions
  @verbatim

  ===============================================================================
             #### Other functions ####
  ===============================================================================
  This section provides functions allowing to other controlling:

  @endverbatim
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
    pWDT->WDT_CRR = WDOG_COUNTER_RESTART_KICK_VALUE;

    return HAL_OK;
}

/**
 * @brief  Start WDT
 * @return HAL_Status
 */
HAL_Status HAL_WDT_Start(void)
{
    pWDT->WDT_CR = WDT_WDT_CR_WDT_EN_MASK;

    return HAL_OK;
}

/** @} */

#endif

/** @} */

/** @} */
