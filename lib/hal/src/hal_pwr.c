/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup PWR
 *  @{
 */

/** @defgroup PWR_How_To_Use How To Use
 *  @{

 The PWR driver can be used as follows:

 - Invoke HAL_PWR_SetVoltage to set voltage value.
 - Invoke HAL_PWR_GetVoltage to Get voltage value.
 - Invoke HAL_PWR_SetVoltageSuspend to set voltage value for suspend mode.
 - Invoke HAL_PWR_GetVoltageSuspend to get voltage value for suspend mode.
 - Invoke HAL_PWR_GetVoltageReal to get voltage value while is in effect.
 - Invoke HAL_PWR_Enable to enable a regulator.
 - Invoke HAL_PWR_Disable to disable a regulator.
 - Invoke HAL_PWR_GetEnableState to get the enable state.

 @} */

#include "hal_base.h"

#ifdef HAL_PWR_INTBUS_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/

#ifndef BIT
#define BIT(nr) (1UL << (nr))
#endif

#define WM_SET_BITS(msk, shift, bits) ((msk <<(shift + 16)) | (bits << shift))
#define WM_SET_BIT(shift)             ((1 << (16 + shift) ) | (1 << shift))
#define WM_CLR_BIT(shift)             (1 << (16 + shift) )

#define LNR_VOLT_BG(volt, min, step) (((volt - min) + (step -1)) / (step))
#define LNR_VOLT_LT(volt, min, step) (((volt - min) + (step -1)) / (step))

/********************* Private Structure Definition **************************/
struct PWR_DESCS_INFO {
    struct PWR_DESC *descs;
    uint32_t cnt;
};

/********************* Private Variable Definition ***************************/

static struct PWR_DESCS_INFO pwrDescs;

/********************* Private Function Definition ***************************/
static int PWR_SetVoltage_Linear(struct PWR_DESC *desc, int volt, PWR_CtrlType ctrlType)
{
    uint32_t val;
    __IO uint32_t *preg;

    HAL_ASSERT(desc->flag & BIT(ctrlType));

    HAL_ASSERT(volt >= desc->minVolt);

    HAL_ASSERT(ctrlType <= PWR_CTRL_VOLT_SSPD);

    val = LNR_VOLT_BG(volt, desc->minVolt, desc->volt_list.stepVolt);

    HAL_ASSERT(val < desc->voltCnt);

    preg = desc->regs.preg[ctrlType];

    val = WM_SET_BITS(desc->voltMask, desc->shift[ctrlType], val);
    WRITE_REG(*preg, val);

    return HAL_OK;
}

static int PWR_GetVoltageLinear(struct PWR_DESC *desc, PWR_CtrlType ctrlType)
{
    uint32_t val;
    __IO uint32_t *preg;

    HAL_ASSERT(desc->flag & BIT(ctrlType));
    HAL_ASSERT(ctrlType <= PWR_CTRL_VOLT_ST);

    preg = desc->regs.preg[ctrlType];

    val = (READ_REG(*preg) >> desc->shift[ctrlType]) & desc->voltMask;

    HAL_ASSERT(val < desc->voltCnt);

    return (desc->minVolt + desc->volt_list.stepVolt * val);
}

int PWR_EnableDisable(struct PWR_DESC *desc, uint32_t enable)
{
    uint32_t val;
    __IO uint32_t *preg;

    HAL_ASSERT(desc->flag & BIT(PWR_CTRL_PWR_EN));

    preg = desc->regs.preg[PWR_CTRL_PWR_EN];

    if (enable)
        val = WM_SET_BIT(desc->shift[PWR_CTRL_PWR_EN]);
    else
        val = WM_CLR_BIT(desc->shift[PWR_CTRL_PWR_EN]);

    WRITE_REG(*preg, val);

    return HAL_OK;
}

/********************* Public Function Definition ****************************/
/** @defgroup PWR_Exported_Functions_Group2 State and Errors Functions

 This section provides functions allowing to get the status of the module:

 *  @{
 */

/**
 * @brief  get enable state for the power regulator.
 * @param  desc: the power regulator description pointer.
 * @return 1 is enable, 0 is disable.
 */
int HAL_PWR_GetEnableState(struct PWR_DESC *desc)
{
    __IO uint32_t *preg;

    HAL_ASSERT(desc->flag & BIT(PWR_CTRL_PWR_EN));

    preg = desc->regs.preg[PWR_CTRL_PWR_EN];

    return (READ_REG(*preg) >> desc->shift[PWR_CTRL_PWR_EN]) & 0x1;
}

/**
 * @brief  get voltage value.
 * @param  desc: the power regulator description pointer.
 * @return the voltage value if support, otherwise return HAL_INVAL.
 */
int HAL_PWR_GetVoltage(struct PWR_DESC *desc)
{
    HAL_ASSERT(desc);
    if (desc->flag & PWR_FLG_LINEAR)
        return PWR_GetVoltageLinear(desc, PWR_CTRL_VOLT_RUN);
    else
        return HAL_INVAL;
}

/**
 * @brief  get voltage value for suspend mode.
 * @param  desc: the power regulator description pointer.
 * @return the voltage value if support, otherwise return HAL_INVAL.
 */
int HAL_PWR_GetVoltageSuspend(struct PWR_DESC *desc)
{
    HAL_ASSERT(desc);
    if (desc->flag & PWR_FLG_LINEAR)
        return PWR_GetVoltageLinear(desc, PWR_CTRL_VOLT_SSPD);
    else
        return HAL_INVAL;
}

/**
 * @brief  get real voltage value.
 * @param  desc: the power regulator description pointer.
 * @return the voltage value if support, otherwise return HAL_INVAL.
 */
int HAL_PWR_GetVoltageReal(struct PWR_DESC *desc)
{
    HAL_ASSERT(desc);
    if (desc->flag & PWR_FLG_LINEAR)
        return PWR_GetVoltageLinear(desc, PWR_CTRL_VOLT_ST);
    else
        return HAL_INVAL;
}

/** @} */

/** @defgroup PWR_Exported_Functions_Group4 Init and Deinit Functions

 This section provides functions allowing to init and deinit the module:
 *  @{
 */

/**
 * @brief  PWR init.
 * @param  descs: the pointer of power regulator descriptions array.
 * @param  cnt: number of power regulator descriptions
 * @return HAL_Status.
 */
int HAL_PWR_Init(struct PWR_DESC *descs, uint32_t cnt)
{
    HAL_ASSERT(descs);
    pwrDescs.descs = descs;
    pwrDescs.cnt = cnt;

    return HAL_OK;
}

/**
 * @brief  PWR deinit.
 */
void HAL_PWR_DeInit(void)
{
    pwrDescs.descs = NULL;
    pwrDescs.cnt = 0;
}

/** @} */

/** @defgroup PWR_Exported_Functions_Group5 Other Functions
 *  @{
 */

/**
 * @brief  set voltage value.
 * @param  desc: the power regulator description pointer.
 * @param  volt: the volt value to be config
 * @return HAL_Status.
 */
int HAL_PWR_SetVoltage(struct PWR_DESC *desc, int volt)
{
    HAL_ASSERT(desc);

    if (desc->flag & PWR_FLG_LINEAR)
        return PWR_SetVoltage_Linear(desc, volt, PWR_CTRL_VOLT_RUN);
    else
        return HAL_INVAL;
}

/**
 * @brief  set voltage value for suspend mode.
 * @param  desc: the power regulator description pointer.
 * @param  volt: the volt value to be config
 * @return HAL_Status.
 */
int HAL_PWR_SetVoltageSuspend(struct PWR_DESC *desc, int volt)
{
    HAL_ASSERT(desc);
    if (desc->flag & PWR_FLG_LINEAR)
        return PWR_SetVoltage_Linear(desc, volt, PWR_CTRL_VOLT_SSPD);
    else
        return HAL_INVAL;
}

/**
 * @brief  enable a power regulator.
 * @param  desc: the power regulator description pointer.
 * @return HAL_Status.
 */
int HAL_PWR_Enable(struct PWR_DESC *desc)
{
    HAL_ASSERT(desc);

    return PWR_EnableDisable(desc, 1);
}

/**
 * @brief  disable a power regulator.
 * @param  desc: the power regulator description pointer.
 * @return HAL_Status.
 */
int HAL_PWR_Disable(struct PWR_DESC *desc)
{
    HAL_ASSERT(desc);

    return PWR_EnableDisable(desc, 0);
}

/**
 * @brief  get a power regulator description.
 * @param  pwrId: a regulator channel id.
 * @return a pointer for struct PWR_DESC.
 */
struct PWR_DESC *HAL_PWR_GetDescByPwrId(ePWR_ID pwrId)
{
    int i;
    struct PWR_DESC *pdescs = pwrDescs.descs;

    for (i = 0; i < pwrDescs.cnt; i++) {
        if (pdescs->info.pwrId == pwrId)
            break;
        pdescs++;
    }

    return pdescs;
}
/** @} */

#endif

/** @} */

/** @} */
