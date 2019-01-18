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

typedef uint32_t eCLOCK_Name;
typedef uint32_t eCLOCK_Gate;

/* The maximum TOP (timeout period) value that can be set in the watchdog. */

#define WDT_MAX_TOP 15
#define WDT_DEFAULT_SECONDS 30
#define WDT_TIMEOUT 500 /* ms */

#define WDT_CLOCK_NAME 0x1
#define WDT_CLOCK_GATE 0x2

/********************* Private Structure Definition **************************/

struct DW_WDT
{
    eCLOCK_Name clk_Name;
    eCLOCK_Gate clk_Gate;
    uint32_t in_Use;
} dwWdt;

/********************* Private Variable Definition ***************************/

static struct WDT_REG *pWDT = (struct WDT_REG *)(WDT_BASE);

/********************* Private Function Definition ***************************/

__STATIC_INLINE uint32_t WDT_IsEnabled(void)
{
    return (pWDT->WDT_CR) & WDOG_CONTROL_REG_WDT_EN_MASK;
}

static void WDT_KeepAlive(void)
{
    pWDT->WDT_CRR = WDOG_COUNTER_RESTART_KICK_VALUE;
}

static void HAL_WDT_ClkEnable(eCLOCK_Gate gate)
{
    ;
}

static uint32_t HAL_WDT_ClkGetFreq(eCLOCK_Name name)
{
    return 10000;
}

__STATIC_INLINE uint32_t WDT_TopInSeconds(uint32_t top)
{
    /*
     * There are 16 possible timeout values in 0..15 where the number of
     * cycles is 2 ^ (16 + i) and the watchdog counts down.
     */
    uint32_t cycles = 1 << (16 + top);

    return cycles / HAL_WDT_ClkGetFreq(dwWdt.clk_Name);
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
    pWDT->WDT_TORR = top_Val | top_Val << WDOG_TIMEOUT_RANGE_TOPINIT_SHIFT;
    WDT_KeepAlive();
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
HAL_Status HAL_WDT_Init(void)
{
    if (dwWdt.in_Use)
        return HAL_BUSY;

    dwWdt.clk_Name = WDT_CLOCK_NAME;
    dwWdt.clk_Gate = WDT_CLOCK_GATE;

    HAL_WDT_ClkEnable(dwWdt.clk_Gate);

    if (!WDT_IsEnabled()) {
        WDT_SetTop(WDT_DEFAULT_SECONDS);
        pWDT->WDT_CR = WDOG_CONTROL_REG_WDT_EN_MASK;
    }

    dwWdt.in_Use = 1;

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
 * @param  top: timeout period
 * @return HAL_Status
 */
HAL_Status HAL_WDT_SetTop(uint32_t top)
{
    WDT_SetTop(top);

    return HAL_OK;
}

/** @} */

#endif

/** @} */

/** @} */
