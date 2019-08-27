/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup PVTM
 *  @{
 */

/** @defgroup PVTM_How_To_Use How To Use
 *  @{

 The PVTM driver can be used as follows:

 - invoke pvtm functions to get pvtm value with sample channel and time.

 @} */

#include "hal_base.h"

#ifdef HAL_PVTM_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

/********************* Public Function Definition ****************************/
/** @defgroup PVTM_Exported_Functions_Group5 Other Functions
 *  @{
 */

/**
 * @brief  get pvtm value.
 * @param  reg: pvtm base address.
 * @param  chn: pvtm sample channel.
 * @param  timeUs: pvtm sample time.
 * @param  val: store pvtm value.
 * @return HAL_Status.
 */
HAL_Status HAL_PVTM_GetFreqCnt(struct PVTM_REG *reg, uint32_t chn,
                               uint32_t timeUs, uint32_t *val)
{
    HAL_Status ret = HAL_OK;
    uint32_t start, timeoutMs;

    if (!val)
        return HAL_INVAL;

    if (READ_REG(reg->PVTM_CON[0]) & PVTM_PVTM_CON0_PVTM_START_MASK)
        return HAL_BUSY;

    WRITE_REG_MASK_WE(reg->PVTM_CON[0], PVTM_PVTM_CON0_PVTM_OSC_EN_MASK,
                      1 << PVTM_PVTM_CON0_PVTM_OSC_EN_SHIFT);
    WRITE_REG_MASK_WE(reg->PVTM_CON[0], PVTM_PVTM_CON0_PVTM_OSC_SEL_MASK,
                      chn << PVTM_PVTM_CON0_PVTM_OSC_SEL_SHIFT);
    WRITE_REG(reg->PVTM_CON[1], PLL_INPUT_OSC_RATE / MHZ * timeUs);
    WRITE_REG_MASK_WE(reg->PVTM_CON[0], PVTM_PVTM_CON0_PVTM_START_MASK,
                      1 << PVTM_PVTM_CON0_PVTM_START_SHIFT);

    start = HAL_GetTick();
    timeoutMs = (timeUs / 1000) + 1;
    while (!(READ_REG(reg->PVTM_STATUS[0]) & PVTM_PVTM_STATUS0_PVTM_FREQ_DONE_MASK)) {
        if ((HAL_GetTick() - start) > timeoutMs) {
            ret = HAL_TIMEOUT;
            break;
        }
    }

    if (ret == HAL_OK)
        *val = READ_REG(reg->PVTM_STATUS[1]);

    WRITE_REG_MASK_WE(reg->PVTM_CON[0], PVTM_PVTM_CON0_PVTM_START_MASK,
                      0 << PVTM_PVTM_CON0_PVTM_START_SHIFT);
    WRITE_REG_MASK_WE(reg->PVTM_CON[0], PVTM_PVTM_CON0_PVTM_OSC_EN_MASK,
                      0 << PVTM_PVTM_CON0_PVTM_OSC_EN_SHIFT);

    return ret;
}

/** @} */

#endif

/** @} */

/** @} */
