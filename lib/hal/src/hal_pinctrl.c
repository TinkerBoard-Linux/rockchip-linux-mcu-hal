/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup PINCTRL
 *  @{
 */

/** @defgroup How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The pinctrl setting registers actually is bus grf registers, which include
 iomux, drive strength, pull mode, slew rate and schmitt trigger.

 The pinctrl driver provides APIs:
   - HAL_PINCTRL_SetPinIOMUX to set pin iomux
   - HAL_PINCTRL_SetPinParam to set pin drive/pull/slewrate/schmitt

Example:
     HAL_PINCTRL_SetIOMUX(GPIO_BANK0,
                          GPIO_PIN_A0 | // I2S_IN_SCLK
                          GPIO_PIN_A1 | // I2S_IN_LRCK
                          GPIO_PIN_A2 | // I2S_IN_SDI0
                          GPIO_PIN_A3,  // I2S_IN_SDI1
                          PIN_CONFIG_MUX_FUNC2);

     HAL_PINCTRL_SetParam(GPIO_BANK0,
                          GPIO_PIN_A0 | // I2S_IN_SCLK
                          GPIO_PIN_A1 | // I2S_IN_LRCK
                          GPIO_PIN_A2 | // I2S_IN_SDI0
                          GPIO_PIN_A3,  // I2S_IN_SDI1
                          PIN_CONFIG_PUL_DOWN |
                          PIN_CONFIG_DRV_LEVEL2 |
                          PIN_CONFIG_SRT_FAST |
                          PIN_CONFIG_SMT_ENABLE);
 @endverbatim
 @} */

#include "hal_base.h"

#ifdef HAL_PINCTRL_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/
#define PIN_READ(r)           (*(volatile uint32_t *)(r))
#define PIN_WRITE(r, b, w, v) (*(volatile uint32_t *)(r) = ((((1 << w) - 1) << (16) | (v)) << (b)))

/********************* Private Variable Definition ***************************/
__WEAK const struct RK_PINCTRL_DEV g_pinDev;

/********************* Private Function Definition ***************************/

static const struct RK_PINCTRL_DEV *PINCTRL_GetInfo(void)
{
    return &g_pinDev;
}

/**
 * @brief  Acquire params for iomux setting.
 * @param  pBank: point to pin bank info.
 * @param  pin: pin index, 0~31.
 * @param  mux: func data.
 * @param  reg: reg offset of the pin.
 * @param  value: to get route value.
 * @return HAL_Status.
 */
static HAL_Status PINCTRL_AcquireMuxRoute(struct PINCTRL_BANK_INFO *pBank, uint8_t pin,
                                          uint32_t mux, uint32_t *reg, uint8_t *value)
{
    const struct RK_PINCTRL_DEV *ctrl = PINCTRL_GetInfo();
    struct PINCTRL_MUX_ROUTE_DATA *data;
    uint32_t i;
    HAL_Status rc = HAL_OK;

    if (ctrl->muxRouteDataNum == 0) {
        rc = HAL_ERROR;
        goto exit;
    }

    for (i = 0; i < ctrl->muxRouteDataNum; i++) {
        data = &ctrl->muxRouteData[i];
        if (data->bank == pBank->channel &&
            data->pin == pin && data->func == mux)
            break;
    }

    if (i >= ctrl->muxRouteDataNum) {
        rc = HAL_ERROR;
        goto exit;
    }

    *reg = data->routeReg;
    *value = data->routeVal;
exit:

    return rc;
}

/**
 * @brief  Rectify params for iomux setting.
 * @param  pBank: point to pin bank info.
 * @param  pin: pin index, 0~31.
 * @param  reg: to get reg offset of the pin.
 * @param  bit: to get bit offset of the pin.
 * @param  mask: to get mask bits of the pin.
 * @return HAL_Status.
 */
static HAL_Status PINCTRL_RectifyMuxParams(struct PINCTRL_BANK_INFO *pBank, uint8_t pin,
                                           uint32_t *reg, uint8_t *bit, uint32_t *mask)
{
    const struct RK_PINCTRL_DEV *ctrl = PINCTRL_GetInfo();
    struct PINCTRL_MUX_RECAL_DATA *data;
    uint32_t i;
    HAL_Status rc = HAL_OK;

    if (ctrl->muxRecalDataNum == 0) {
        rc = HAL_ERROR;
        goto exit;
    }

    for (i = 0; i < ctrl->muxRecalDataNum; i++) {
        data = &ctrl->muxRecalData[i];
        if (data->bank == pBank->channel &&
            data->pin == pin)
            break;
    }

    if (i >= ctrl->muxRecalDataNum) {
        rc = HAL_ERROR;
        goto exit;
    }

    *reg = data->reg;
    *mask = data->mask;
    *bit = data->bit;
exit:

    return rc;
}

/**
 * @brief  Core function to get params.
 * @param  pBank: point to pin bank info.
 * @param  pin: pin index, 0~31.
 * @param  id: get params for @ref ePIN_GRF_INFO_ID.
 * @param  reg: to get reg offset of the pin.
 * @param  bit: to get bit offset of the pin.
 * @param  mask: to get mask bits of the pin.
 * @return HAL_Status: HAL_OK for success to get param.
 */
static HAL_Status PINCTRL_AcquireParam(struct PINCTRL_BANK_INFO *pBank, uint8_t pin,
                                       ePIN_GRF_INFO_ID id,
                                       uint32_t *reg, uint8_t *bit, uint32_t *mask)
{
    uint8_t paramBit = pBank->GRFInfo[id].bitsPerPin;
    uint8_t paramPin = pBank->GRFInfo[id].pinsPerReg;
    uint32_t regVal, mskVal;
    uint8_t bitVal;

    /* The '0' value means nothing to set */
    if (paramBit <= 0)
        return HAL_ERROR;

    /* GRF(PMUGRF) address + mux offset + pin offset */
    regVal = pBank->grfBase;
    regVal += pBank->GRFInfo[id].offset;
    regVal += (pin / paramPin) * 4;

    bitVal = (pin % paramPin) * paramBit;
    mskVal = (0x1U << paramBit) - 0x1U;

    *reg = regVal;
    *bit = bitVal;
    *mask = mskVal;

    return HAL_OK;
}

/**
 * @brief  Private function to set iomux for one pin.
 * @param  pBank: point to pin bank info.
 * @param  pin: pin index, 0~31.
 * @param  param: mux value  to set.
 * @return HAL_Status.
 */
static HAL_Status PINCTRL_SetMux(struct PINCTRL_BANK_INFO *pBank,
                                 uint8_t pin, uint8_t param)
{
    uint32_t reg = 0, mask = 0;
    uint8_t bit = 0;
    uint8_t param2;
    HAL_Status rc = HAL_OK;

    HAL_DBG("setting GPIO%d-%d to %d\n", pBank->channel, pin, param);

    rc = PINCTRL_AcquireParam(pBank, pin, GRF_MUX_INFO, &reg, &bit, &mask);
    if (rc)
        HAL_DBG("Warning: Acquire Mux Param failed\n");

    rc = PINCTRL_AcquireMuxRoute(pBank, pin, param, &reg, &param2);
    if (rc == HAL_OK)
        param = param2;

    rc = PINCTRL_RectifyMuxParams(pBank, pin, &reg, &bit, &mask);
    if (rc == HAL_OK)
        HAL_DBG("Warning: Param is rectified\n");

    PIN_WRITE(reg, bit, mask, param);

    return HAL_OK;
}

/**
 * @brief  Set a new drive strength for a pin.
 * @param  pBank: point to pin bank info.
 * @param  pin: pin index, 0~31.
 * @param  param: drive strength to set.
 * @return HAL_Status.
 */
static uint32_t PINCTRL_SetDrive(struct PINCTRL_BANK_INFO *pBank,
                                 uint8_t pin, uint8_t param)
{
    uint32_t reg = 0, mask = 0;
    uint8_t bit = 0;
    HAL_Status rc = HAL_OK;

    HAL_DBG("setting GPIO%d-%d to %d\n", pBank->channel, pin, param);

    rc = PINCTRL_AcquireParam(pBank, pin, GRF_DRV_INFO, &reg, &bit, &mask);
    if (rc)
        goto exit;

    PIN_WRITE(reg, bit, mask, param);
exit:

    return rc;
}

/**
 * @brief  Set a new pull mode for a pin.
 * @param  pBank: point to pin bank info.
 * @param  pin: pin index, 0~31.
 * @param  param: pull mode to set.
 * @return HAL_Status.
 */
static HAL_Status PINCTRL_SetPull(struct PINCTRL_BANK_INFO *pBank,
                                  uint8_t pin, uint8_t param)
{
    uint32_t reg = 0, mask = 0;
    uint8_t bit = 0;
    HAL_Status rc = HAL_OK;

    HAL_DBG("setting GPIO%d-%d to %d\n", pBank->channel, pin, param);

    rc = PINCTRL_AcquireParam(pBank, pin, GRF_PUL_INFO, &reg, &bit, &mask);
    if (rc)
        goto exit;

    PIN_WRITE(reg, bit, mask, param);
exit:

    return rc;
}

/**
 * @brief  Enable schmitt trigger for a pin.
 * @param  pBank: point to pin bank info.
 * @param  pin: pin index, 0~31.
 * @param  param: schmitt trigger enable or not.
 * @return HAL_Status.
 */
static HAL_Status PINCTRL_SetSchmitt(struct PINCTRL_BANK_INFO *pBank,
                                     uint8_t pin, uint8_t param)
{
    uint32_t reg = 0, mask = 0;
    uint8_t bit = 0;
    HAL_Status rc = HAL_OK;

    HAL_DBG("setting GPIO%d-%d to %d\n", pBank->channel, pin, param);

    rc = PINCTRL_AcquireParam(pBank, pin, GRF_SMT_INFO, &reg, &bit, &mask);
    if (rc)
        goto exit;

    PIN_WRITE(reg, bit, mask, param);
exit:

    return rc;
}

/**
 * @brief  Change slew rate for a pin.
 * @param  pBank: point to pin bank info.
 * @param  pin: pin index, 0~31.
 * @param  param: slew rate fast or slow
 * @return HAL_Status.
 */
static HAL_Status PINCTRL_SetSlewRate(struct PINCTRL_BANK_INFO *pBank,
                                      uint8_t pin, uint8_t param)
{
    uint32_t reg = 0, mask = 0;
    uint8_t bit = 0;
    HAL_Status rc = HAL_OK;

    HAL_DBG("setting GPIO%d-%d to %d\n", pBank->channel, pin, param);

    rc = PINCTRL_AcquireParam(pBank, pin, GRF_SRT_INFO, &reg, &bit, &mask);
    if (rc)
        goto exit;

    PIN_WRITE(reg, bit, mask, param);
exit:

    return rc;
}

/**
 * @brief  Private function to configure one pin.
 * @param  bank: pin bank channel defined in @ref eGPIO_bankId.
 * @param  pin: pin index, 0~31.
 * @param  param: multi params defined in @ref ePINCTRL_configParam,
 * @return HAL_Status.
 */
static HAL_Status PINCTRL_SetParam(struct PINCTRL_BANK_INFO *pBank,
                                   uint8_t pin, uint32_t param)
{
    HAL_Status rc = HAL_OK;

    if (param & FLAG_PUL)
        rc |= PINCTRL_SetPull(pBank, pin, (uint8_t)((param & MASK_PUL) >> SHIFT_PUL));

    if (param & FLAG_DRV)
        rc |= PINCTRL_SetDrive(pBank, pin, (uint8_t)((param & MASK_DRV) >> SHIFT_DRV));

    if (param & FLAG_SMT)
        rc |= PINCTRL_SetSchmitt(pBank, pin, (uint8_t)((param & MASK_SMT) >> SHIFT_SMT));

    if (param & FLAG_SRT)
        rc |= PINCTRL_SetSlewRate(pBank, pin, (uint8_t)((param & MASK_SRT) >> SHIFT_SRT));

    return rc;
}

/**
 * @brief  Private function to configure one pin.
 * @param  bank: pin bank channel defined in @ref eGPIO_bankId.
 * @param  pin: pin index, 0~31.
 * @param  param: multi params defined in @ref ePINCTRL_configParam,
 * @return HAL_Status.
 */
static HAL_Status PINCTRL_SetPinParam(eGPIO_bankId bank, uint8_t pin, uint32_t param)
{
    const struct RK_PINCTRL_DEV *ctrl = PINCTRL_GetInfo();

    return PINCTRL_SetParam(&ctrl->banks[bank], pin, param);
}

/**
 * @brief  Private function to set iomux for one pin.
 * @param  bank: pin bank channel defined in @ref eGPIO_bankId.
 * @param  pin: pin index, 0~31.
 * @param  param: PIN_CONFIG_MUX_* defined in @ref ePINCTRL_configParam.
 * @return HAL_Status.
 */
static HAL_Status PINCTRL_SetPinIOMUX(eGPIO_bankId bank, uint8_t pin, uint32_t param)
{
    const struct RK_PINCTRL_DEV *ctrl = PINCTRL_GetInfo();

    return PINCTRL_SetMux(&ctrl->banks[bank], pin, (uint8_t)((param & MASK_MUX) >> SHIFT_MUX));
}

/********************* Public Function Definition ****************************/

/** @defgroup PINCTRL_Exported_Functions_Group1 Suspend and Resume Functions
 @verbatim

 ===============================================================================
             #### Suspend and Resume functions ####
 ===============================================================================
 This section provides functions allowing to suspend and resume the module:

 @endverbatim
 *  @{
 */

HAL_Status HAL_PINCTRL_Suspend(void)
{
    return HAL_OK;
}

HAL_Status HAL_PINCTRL_Resume(void)
{
    return HAL_OK;
}
/** @} */

/** @defgroup PINCTRL_Exported_Functions_Group2 Init and Deinit Functions
 @verbatim

 ===============================================================================
             #### Init and deinit functions ####
 ===============================================================================
 This section provides functions allowing to init and deinit the module:

 @endverbatim
 *  @{
 */

HAL_Status HAL_PINCTRL_Init(void)
{
    return HAL_OK;
}

HAL_Status HAL_PINCTRL_Deinit(void)
{
    return HAL_OK;
}
/** @} */

/** @defgroup PINCTRL_Exported_Functions_Group3 State and Errors Functions
 @verbatim

 ===============================================================================
             #### State and Errors functions ####
 ===============================================================================
 This section provides functions allowing to get the status of the module:

 @endverbatim
 *  @{
 */

/**
 * @brief  Public function to configure for multi pins.
 * @param  bank: pin bank channel defined in ref eGPIO_bankId.
 * @param  mPins: multi pins defined in @ref PINCTRL_GPIO_pins.
 * @param  param: multi params defined in @ref ePINCTRL_configParam,
 * @return HAL_Status.
 */
HAL_Status HAL_PINCTRL_SetParam(eGPIO_bankId bank, uint32_t mPins, ePINCTRL_configParam param)
{
    uint8_t pin;
    HAL_Status rc = HAL_OK;

    HAL_ASSERT(bank < GPIO_BANK_NUM);
    HAL_ASSERT(IS_GPIO_PIN(mPins));

    for (pin = 0; pin < 32; pin++) {
        if (mPins & (1 << pin)) {
            rc = PINCTRL_SetPinParam(bank, pin, param);
            if (rc)
                return rc;
        }
    }

    return rc;
}

/**
 * @brief  Public function to set iomux for multi pins.
 * @param  bank: pin bank channel defined in ref eGPIO_bankId.
 * @param  mPins: multi pins defined in @ref PINCTRL_GPIO_pins.
 * @param  param: param PIN_CONFIG_MUX_* defined in @ref ePINCTRL_configParam.
 * @return HAL_Status.
 */
HAL_Status HAL_PINCTRL_SetIOMUX(eGPIO_bankId bank, uint32_t mPins, ePINCTRL_configParam param)
{
    uint8_t pin;
    HAL_Status rc;

    HAL_ASSERT(bank < GPIO_BANK_NUM);
    HAL_ASSERT(IS_GPIO_PIN(mPins));

    for (pin = 0; pin < 32; pin++) {
        if (mPins & (1 << pin)) {
            rc = PINCTRL_SetPinIOMUX(bank, pin, param);
            if (rc)
                return rc;
        }
    }

    return HAL_OK;
}
/** @} */

/** @defgroup PINCTRL_Exported_Functions_Group4 IO Functions
 @verbatim

 ===============================================================================
             #### IO functions ####
 ===============================================================================
 This section provides functions allowing to IO controlling:

 @endverbatim
 *  @{
 */

/** @} */

#endif

/** @} */

/** @} */
