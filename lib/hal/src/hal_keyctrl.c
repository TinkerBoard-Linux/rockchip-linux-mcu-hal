/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

/** @addtogroup KEYCTRL
 *  @{
 */

/** @defgroup How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The KEYCTRL driver can be used as follows:

 @endverbatim
 @} */

#include "hal_base.h"

#ifdef HAL_KEYCTRL_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

/********************* Public Function Definition ****************************/

/** @defgroup KEYCTRL_Exported_Functions_Group4 Init and Deinit
  @verbatim

  ===============================================================================
             #### Init and deinit functions ####
  ===============================================================================
  This section provides functions allowing to init and deinit the module:

  @endverbatim
  *  @{
  */

/**
 * @brief  Keyctrl Init
 * @param  reg: keyctrl base address
 * @param  keyDetectionTh: key detection threshold (Hz)
 * @param  keyCalculatePeriodTh: key calculate period threshold, sample period = keyCalculatePeriodTh / keyctrl input clock (second)
 * @param  keyFilterIrqTh: ignore first interrupt threshold (Hz)
 * @return HAL_Status
 */
HAL_Status HAL_KeyCtrl_Init(struct KEY_CTRL_REG *reg, uint32_t keyDetectionTh, uint32_t keyCalculatePeriodTh, uint32_t keyFilterIrqTh)
{
    HAL_ASSERT(IS_KEY_CTRL_INSTANCE(reg));

    reg->CAL_TH = 0x0;
    reg->CAL_TH = keyCalculatePeriodTh;

    reg->INT_CON = 0x0;
    reg->INT_CON = (keyFilterIrqTh << KEY_CTRL_INT_CON_KEY_INT_MASK_TH_SHIFT) | KEY_CTRL_INT_CON_KEY_INT_EN_MASK;

    reg->CON = 0x0;
    reg->CON = (keyDetectionTh << KEY_CTRL_CON_KEY_DET_TH_SHIFT) | KEY_CTRL_CON_ENABLE_MASK;

    return HAL_OK;
}

/**
 * @brief  Keyctrl Deinit
 * @param  reg: keyctrl base address
 * @return HAL_Status
 */
HAL_Status HAL_KeyCtrl_DeInit(struct KEY_CTRL_REG *reg)
{
    HAL_ASSERT(IS_KEY_CTRL_INSTANCE(reg));
    reg->CON = 0x0;
    reg->INT_CON = 0x0;
    reg->CAL_TH = 0x0;

    return HAL_OK;
}

/** @} */

/** @defgroup KEYCTRL_Exported_Functions_Group5 Other Functions
  @verbatim

  ===============================================================================
             #### Other functions ####
  ===============================================================================
  This section provides functions allowing to other controlling:

  @endverbatim
  *  @{
  */

/**
 * @brief  Keyctrl clear interrupt
 * @param  reg: keyctrl base address
 */
void HAL_KeyCtrl_ClearInt(struct KEY_CTRL_REG *reg)
{
    HAL_ASSERT(IS_KEY_CTRL_INSTANCE(reg));
    reg->INT_ST = KEY_CTRL_INT_ST_KEY_INT_ST_MASK;
}

/**
 * @brief  Keyctrl get value
 * @param  reg: keyctrl base address
 * @return keyctrl value in a calculate period
 */
uint32_t HAL_KeyCtrl_GetValue(struct KEY_CTRL_REG *reg)
{
    HAL_ASSERT(IS_KEY_CTRL_INSTANCE(reg));

    return reg->DET_REC;
}

/** @} */

#endif

/** @} */

/** @} */
