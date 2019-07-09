/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup SARADC
 *  @{
 */

/** @defgroup How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The SARADC driver can be used as follows:

 @endverbatim
 @} */

#include "hal_base.h"

#ifdef HAL_SARADC_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

/********************* Public Function Definition ****************************/

/** @defgroup SARADC_Exported_Functions_Group5 Other Functions
  @verbatim

  ===============================================================================
             #### Other functions ####
  ===============================================================================
  This section provides functions allowing to other controlling:

  @endverbatim
  *  @{
  */

/**
 * @brief  Start adc
 * @param  reg: saradc base address
 * @param  mode: saradc mode
 * @param  chn: saradc channel
 * @return hal status
 */
HAL_Status HAL_SARADC_Start(struct SARADC_REG *reg, eSARADC_mode mode, uint32_t chn)
{
    HAL_ASSERT(IS_SARADC_INSTANCE(reg));
    reg->DLY_PU_SOC = 0x8;
    reg->CTRL = chn & SARADC_CTRL_ADC_INPUT_SRC_SEL_MASK;

    if (mode == SARADC_INT_MOD)
        reg->CTRL |= SARADC_CTRL_INT_EN_MASK;

    reg->CTRL |= SARADC_CTRL_ADC_POWER_CTRL_MASK;

    return HAL_OK;
}

/**
 * @brief  Stop adc
 * @param  reg: saradc base address
 * @return hal status
 */
HAL_Status HAL_SARADC_Stop(struct SARADC_REG *reg)
{
    HAL_ASSERT(IS_SARADC_INSTANCE(reg));
    /* Clear irq & power down adc */
    reg->CTRL = 0x0;

    return HAL_OK;
}

/**
 * @brief  Get adc data
 * @param  reg: saradc base address
 * @return hal status
 */
uint32_t HAL_SARADC_GetRaw(struct SARADC_REG *reg)
{
    HAL_ASSERT(IS_SARADC_INSTANCE(reg));

    return reg->DATA & SARADC_DATA_ADC_DATA_MASK;
}

/**
 * @brief  Poll adc status
 * @param  reg: saradc base address
 * @return HAL_TRUE if end of conversation else HAL_FALSE
 */
HAL_Check HAL_SARADC_PollIsEOC(struct SARADC_REG *reg)
{
    HAL_ASSERT(IS_SARADC_INSTANCE(reg));

    return reg->STAS & SARADC_STAS_ADC_STATUS_MASK ? HAL_FALSE : HAL_TRUE;
}

/**
 * @brief  Common saradc interrupt handler
 * Common interrupt handler is always wrapped by the driver.
 */
void HAL_SARADC_IrqHandler(struct SARADC_REG *reg)
{
    /* nothing to do right now, reserved */
}

/** @} */

#endif

/** @} */

/** @} */
