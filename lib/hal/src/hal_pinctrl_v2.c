/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2020-2021 Rockchip Electronics Co., Ltd.
 */

#include "hal_base.h"

#if defined(HAL_PINCTRL_MODULE_ENABLED) && (defined(SOC_RV1126) || defined(SOC_SWALLOW) || defined(SOC_RK3568))

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup PINCTRL
 *  @{
 */

/** @defgroup PINCTRL_How_To_Use How To Use
 *  @{

 The pinctrl setting registers actually is bus grf registers, which include
 iomux, drive strength, pull mode, slew rate and schmitt trigger.

 The pinctrl driver provides APIs:
   - HAL_PINCTRL_SetPinIOMUX to set pin iomux
   - HAL_PINCTRL_SetPinParam to set pin iomux/drive/pull/slewrate/schmitt/ie

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
                          PIN_CONFIG_MUX_FUNC2 |
                          PIN_CONFIG_PUL_DOWN |
                          PIN_CONFIG_DRV_LEVEL2 |
                          PIN_CONFIG_SRT_FAST |
                          PIN_CONFIG_SMT_ENABLE);
 @} */

/** @defgroup PINCTRL_Private_Definition Private Definition
 *  @{
 */
/********************* Private MACRO Definition ******************************/

#ifdef GRF_IOMUX_BIT_PER_PIN
#define IOMUX_BIT_PER_PIN GRF_IOMUX_BIT_PER_PIN
#else
#define IOMUX_BIT_PER_PIN (4)
#endif

#ifdef GRF_DS_BIT_PER_PIN
#define DS_BIT_PER_PIN GRF_DS_BIT_PER_PIN
#else
#define DS_BIT_PER_PIN (4)
#endif

#ifdef GRF_PULL_BIT_PER_PIN
#define PULL_BIT_PER_PIN GRF_PULL_BIT_PER_PIN
#else
#define PULL_BIT_PER_PIN (2)
#endif

#ifdef GRF_IOMUX_PIN_PER_REG
#define IOMUX_PIN_PER_REG GRF_IOMUX_PIN_PER_REG
#else
#define IOMUX_PIN_PER_REG (16 / IOMUX_BIT_PER_PIN)
#endif

#ifdef GRF_DS_PIN_PER_REG
#define DS_PIN_PER_REG GRF_DS_PIN_PER_REG
#else
#define DS_PIN_PER_REG (16 / DS_BIT_PER_PIN)
#endif

#ifdef GRF_PULL_PIN_PER_REG
#define PULL_PIN_PER_REG GRF_PULL_PIN_PER_REG
#else
#define PULL_PIN_PER_REG (16 / PULL_BIT_PER_PIN)
#endif

#define _TO_MASK(w)         ((1U << (w)) - 1U)
#define _TO_OFFSET(p, w)    ((p) * (w))
#define RK_GEN_VAL(p, v, w) ((_TO_MASK(w) << (_TO_OFFSET(p, w) + 16)) | (((v) & _TO_MASK(w)) << _TO_OFFSET(p, w)))

#define IOMUX_H(__B, __P) (GRF->GPIO##__B##__P##_IOMUX_H)
#define IOMUX_L(__B, __P) (GRF->GPIO##__B##__P##_IOMUX_L)
#define P_H(__B, __P)     (GRF->GPIO##__B##__P##_P_H)
#define P_L(__B, __P)     (GRF->GPIO##__B##__P##_P_L)
#define P(__B, __P)       (GRF->GPIO##__B##__P##_P)

#define _PINCTRL_WRITE(REG, DATA) \
{                                 \
    HAL_DBG("0x%lx\n", REG);      \
    REG = DATA;                   \
    HAL_DBG("0x%lx\n", REG);      \
}

#define SET_IOMUX_H(_B, _P, p, v, w) _PINCTRL_WRITE(IOMUX_H(_B, _P), RK_GEN_VAL(p, v, w))
#define SET_IOMUX_L(_B, _P, p, v, w) _PINCTRL_WRITE(IOMUX_L(_B, _P), RK_GEN_VAL(p, v, w))
#define SET_P_H(_B, _P, p, v, w)     _PINCTRL_WRITE(P_H(_B, _P), RK_GEN_VAL(p, v, w))
#define SET_P_L(_B, _P, p, v, w)     _PINCTRL_WRITE(P_L(_B, _P), RK_GEN_VAL(p, v, w))
#define SET_P_(_B, _P, p, v, w)      _PINCTRL_WRITE(P(_B, _P), RK_GEN_VAL(p, v, w))

#define RK_SET_IOMUX_H(B, P, p, v) SET_IOMUX_H(B, P, p % IOMUX_PIN_PER_REG, v, IOMUX_BIT_PER_PIN)
#define RK_SET_IOMUX_L(B, P, p, v) SET_IOMUX_L(B, P, p % IOMUX_PIN_PER_REG, v, IOMUX_BIT_PER_PIN)

#if (DS_PIN_PER_REG >= 4)
#define DS_H(__B, __P)            (GRF->GPIO##__B##__P##_DS_H)
#define DS_L(__B, __P)            (GRF->GPIO##__B##__P##_DS_L)
#define SET_DS_H(_B, _P, p, v, w) _PINCTRL_WRITE(DS_H(_B, _P), RK_GEN_VAL(p, v, w))
#define SET_DS_L(_B, _P, p, v, w) _PINCTRL_WRITE(DS_L(_B, _P), RK_GEN_VAL(p, v, w))
#define RK_SET_DS_H(B, P, p, v)   SET_DS_H(B, P, p % DS_PIN_PER_REG, v, DS_BIT_PER_PIN)
#define RK_SET_DS_L(B, P, p, v)   SET_DS_L(B, P, p % DS_PIN_PER_REG, v, DS_BIT_PER_PIN)

#define SET_DS(_GPIO, _PORT, pin, val)       \
{                                            \
    if ((pin % 8) > 3) {                     \
        RK_SET_DS_H(_GPIO, _PORT, pin, val); \
    } else {                                 \
        RK_SET_DS_L(_GPIO, _PORT, pin, val); \
    }                                        \
}
#elif (DS_PIN_PER_REG == 2)

#define DS_0(__B, __P)            (GRF->GPIO##__B##__P##_DS_0)
#define DS_1(__B, __P)            (GRF->GPIO##__B##__P##_DS_1)
#define DS_2(__B, __P)            (GRF->GPIO##__B##__P##_DS_2)
#define DS_3(__B, __P)            (GRF->GPIO##__B##__P##_DS_3)
#define SET_DS_0(_B, _P, p, v, w) _PINCTRL_WRITE(DS_0(_B, _P), RK_GEN_VAL(p, v, w))
#define SET_DS_1(_B, _P, p, v, w) _PINCTRL_WRITE(DS_1(_B, _P), RK_GEN_VAL(p, v, w))
#define SET_DS_2(_B, _P, p, v, w) _PINCTRL_WRITE(DS_2(_B, _P), RK_GEN_VAL(p, v, w))
#define SET_DS_3(_B, _P, p, v, w) _PINCTRL_WRITE(DS_3(_B, _P), RK_GEN_VAL(p, v, w))
#define RK_SET_DS_0(B, P, p, v)   SET_DS_0(B, P, p % DS_PIN_PER_REG, v, DS_BIT_PER_PIN)
#define RK_SET_DS_1(B, P, p, v)   SET_DS_1(B, P, p % DS_PIN_PER_REG, v, DS_BIT_PER_PIN)
#define RK_SET_DS_2(B, P, p, v)   SET_DS_2(B, P, p % DS_PIN_PER_REG, v, DS_BIT_PER_PIN)
#define RK_SET_DS_3(B, P, p, v)   SET_DS_3(B, P, p % DS_PIN_PER_REG, v, DS_BIT_PER_PIN)

#define SET_DS(_GPIO, _PORT, pin, val)       \
{                                            \
    if ((pin % 8) < 2) {                     \
        RK_SET_DS_0(_GPIO, _PORT, pin, val); \
    } else if ((pin % 8) < 4) {              \
        RK_SET_DS_1(_GPIO, _PORT, pin, val); \
    } else if ((pin % 8) < 6) {              \
        RK_SET_DS_2(_GPIO, _PORT, pin, val); \
    } else if ((pin % 8) < 8) {              \
        RK_SET_DS_3(_GPIO, _PORT, pin, val); \
    }                                        \
}
#endif

#define RK_SET_P_H(B, P, p, v) SET_P_H(B, P, p % PULL_PIN_PER_REG, v, PULL_BIT_PER_PIN)
#define RK_SET_P_L(B, P, p, v) SET_P_L(B, P, p % PULL_PIN_PER_REG, v, PULL_BIT_PER_PIN)
#define RK_SET_P(B, P, p, v)   SET_P_(B, P, p % PULL_PIN_PER_REG, v, PULL_BIT_PER_PIN)

#define SET_IOMUX(_GPIO, _PORT, pin, val)       \
{                                               \
    if ((pin % 8) > 3) {                        \
        RK_SET_IOMUX_H(_GPIO, _PORT, pin, val); \
    }else{                                      \
        RK_SET_IOMUX_L(_GPIO, _PORT, pin, val); \
    }                                           \
}

#define SET_P(_GPIO, _PORT, pin, val)     \
{                                         \
        RK_SET_P(_GPIO, _PORT, pin, val); \
}

#define PINCTRL_SET_IOMUX(bank, pin, val) \
{                                         \
    if (pin < 8) {                        \
        SET_IOMUX(bank, A, pin, val);     \
    } else if (pin < 16) {                \
        SET_IOMUX(bank, B, pin, val);     \
    } else if (pin < 24) {                \
        SET_IOMUX(bank, C, pin, val);     \
    } else if (pin < 32) {                \
        SET_IOMUX(bank, D, pin, val);     \
    }                                     \
}

#define PINCTRL_SET_DS(bank, pin, val) \
{                                      \
    if (pin < 8) {                     \
        SET_DS(bank, A, pin, val);     \
    } else if (pin < 16) {             \
        SET_DS(bank, B, pin, val);     \
    } else if (pin < 24) {             \
        SET_DS(bank, C, pin, val);     \
    } else if (pin < 32) {             \
        SET_DS(bank, D, pin, val);     \
    }                                  \
}

#define PINCTRL_SET_P(bank, pin, val) \
{                                     \
    if (pin < 8) {                    \
        SET_P(bank, A, pin, val);     \
    } else if (pin < 16) {            \
        SET_P(bank, B, pin, val);     \
    } else if (pin < 24) {            \
        SET_P(bank, C, pin, val);     \
    } else if (pin < 32) {            \
        SET_P(bank, D, pin, val);     \
    }                                 \
}

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

/**
 * @brief  Private function to set iomux for one pin.
 * @param  bank: pin bank channel.
 * @param  pin: pin index, 0~31.
 * @param  param: value to write.
 * @return HAL_Status.
 */
static HAL_Status PINCTRL_SetIOMUX(eGPIO_bankId bank, uint8_t pin, uint32_t data)
{
    HAL_DBG("func: %-20s: GPIO%d-%d set %lx (%08lx)\n", __func__, bank, pin, data, RK_GEN_VAL(pin % (16 / IOMUX_BIT_PER_PIN), data, IOMUX_BIT_PER_PIN));

    switch (bank) {
#ifdef GPIO0
    case 0:
        PINCTRL_SET_IOMUX(0, pin, data);
        break;
#endif
#ifdef GPIO1
    case 1:
    #ifdef RKMCU_RK2108
        if (pin < 8) {
            SET_IOMUX(1, A, pin, data);
        } else if (pin < 16) {
            SET_IOMUX(1, B, pin, data);
        } else if (pin < 24) {
            SET_IOMUX(1, C, pin, data);
        } else {
            RK_SET_IOMUX_L(1, D, pin, data);
        }
    #else
        PINCTRL_SET_IOMUX(1, pin, data);
    #endif
        break;
#endif
#ifdef GPIO2
    case 2:
        PINCTRL_SET_IOMUX(2, pin, data);
        break;
#endif
#ifdef GPIO3
    case 3:
        PINCTRL_SET_IOMUX(3, pin, data);
        break;
#endif
#ifdef GPIO4
    case 4:
    #ifdef SOC_RV1126
        RK_SET_IOMUX_L(4, A, pin, data);
    #else
        PINCTRL_SET_IOMUX(4, pin, data);
    #endif
        break;
#endif
    default:
        HAL_DBG("unknown gpio%d\n", bank);
        break;
    }

    return HAL_OK;
}

/**
 * @brief  Private function to set drive strength for one pin.
 * @param  bank: pin bank channel.
 * @param  pin: pin index, 0~31.
 * @param  param: value to write.
 * @return HAL_Status.
 */
static HAL_Status PINCTRL_SetDS(eGPIO_bankId bank, uint8_t pin, uint32_t data)
{
#if !defined(RKMCU_RK2108) && !defined(SOC_SWALLOW)
    HAL_DBG("func: %-20s: GPIO%d-%d set %lx (%08lx)\n", __func__, bank, pin, data, RK_GEN_VAL(pin % (16 / DS_BIT_PER_PIN), data, DS_BIT_PER_PIN));

    switch (bank) {
#ifdef GPIO0
    case 0:
        PINCTRL_SET_DS(0, pin, data);
        break;
#endif
#ifdef GPIO1
    case 1:
        PINCTRL_SET_DS(1, pin, data);
        break;
#endif
#ifdef GPIO2
    case 2:
        PINCTRL_SET_DS(2, pin, data);
        break;
#endif
#ifdef GPIO3
    case 3:
        PINCTRL_SET_DS(3, pin, data);
        break;
#endif
#ifdef GPIO4
    case 4:
    #ifdef SOC_RV1126
        RK_SET_DS_L(4, A, pin, data);
    #else
        PINCTRL_SET_DS(4, pin, data);
    #endif
        break;
#endif
    default:
        HAL_DBG("unknown gpio%d\n", bank);
        break;
    }
#endif

    return HAL_OK;
}

#ifdef SOC_RV1126
static void PINCTRL_SetP_RV1126(uint8_t pin, uint32_t data)
{
    if (pin < 8) {
        RK_SET_P(0, A, pin, data);
    } else if (pin < 16) {
        RK_SET_P(0, B, pin, data);
    } else if (pin < 19) {
        RK_SET_P_L(0, C, pin, data);
    } else if (pin < 24) {
        RK_SET_P_H(0, C, pin, data);
    } else {
        RK_SET_P(0, D, pin, data);
    }
}
#endif

/**
 * @brief  Private function to set pupd for one pin.
 * @param  bank: pin bank channel.
 * @param  pin: pin index, 0~31.
 * @param  param: value to write.
 * @return HAL_Status.
 */
static HAL_Status PINCTRL_SetPUPD(eGPIO_bankId bank, uint8_t pin, uint32_t data)
{
    HAL_DBG("func: %-20s: GPIO%d-%d set %lx (%08lx)\n", __func__, bank, pin, data, RK_GEN_VAL(pin % (16 / PULL_BIT_PER_PIN), data, PULL_BIT_PER_PIN));

    switch (bank) {
#ifdef GPIO0
    case 0:
    #ifdef SOC_RV1126
        PINCTRL_SetP_RV1126(pin, data);
    #else
        PINCTRL_SET_P(0, pin, data);
    #endif
        break;
#endif
#ifdef GPIO1
    case 1:
        PINCTRL_SET_P(1, pin, data);
        break;
#endif
#ifdef GPIO2
    case 2:
        PINCTRL_SET_P(2, pin, data);
        break;
#endif
#ifdef GPIO3
    case 3:
        PINCTRL_SET_P(3, pin, data);
        break;
#endif
#ifdef GPIO4
    case 4:
    #ifdef SOC_RV1126
        RK_SET_P(4, A, pin, data);
    #else
        PINCTRL_SET_P(4, pin, data);
    #endif
        break;
#endif
    default:
        HAL_DBG("unknown gpio%d\n", bank);
        break;
    }

    return HAL_OK;
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
    HAL_Status rc = HAL_OK;

    if (param & FLAG_MUX) {
        rc |= PINCTRL_SetIOMUX(bank, pin, (uint8_t)((param & MASK_MUX) >> SHIFT_MUX));
    }

    if (param & FLAG_PUL) {
        rc |= PINCTRL_SetPUPD(bank, pin, (uint8_t)((param & MASK_PUL) >> SHIFT_PUL));
    }

    if (param & FLAG_DRV) {
        rc |= PINCTRL_SetDS(bank, pin, (uint8_t)((param & MASK_DRV) >> SHIFT_DRV));
    }

    return rc;
}
/** @} */

/********************* Public Function Definition ****************************/

/** @defgroup PINCTRL_Exported_Functions_Group1 Suspend and Resume Functions

 This section provides functions allowing to suspend and resume the module:

 *  @{
 */

/** @} */

/** @defgroup PINCTRL_Exported_Functions_Group2 Init and DeInit Functions

 This section provides functions allowing to init and deinit the module:

 *  @{
 */
HAL_Status HAL_PINCTRL_Init(void)
{
    return HAL_OK;
}

HAL_Status HAL_PINCTRL_DeInit(void)
{
    return HAL_OK;
}
/** @} */

/** @defgroup PINCTRL_Exported_Functions_Group3 IO Functions

 *  @{
 */

/**
 * @brief  Public function to configure for multi pins.
 * @param  bank: pin bank channel defined in eGPIO_bankId.
 * @param  mPins: multi pins defined in @ref ePINCTRL_GPIO_PINS.
 * @param  param: multi params defined in @ref ePINCTRL_configParam.
 * @return HAL_Status.
 */
HAL_Status HAL_PINCTRL_SetParam(eGPIO_bankId bank, uint32_t mPins, ePINCTRL_configParam param)
{
    uint8_t pin;
    HAL_Status rc;

    HAL_ASSERT(bank < GPIO_BANK_NUM);

    if (!(param & (FLAG_MUX | FLAG_PUL | FLAG_DRV | FLAG_SRT | FLAG_SMT))) {
        return HAL_OK;
    }

    for (pin = 0; pin < 32; pin++) {
        if (mPins & (1 << pin)) {
            rc = PINCTRL_SetPinParam(bank, pin, param);
            if (rc) {
                return rc;
            }
        }
    }

    return HAL_OK;
}

/**
 * @brief  Public function to set iomux for multi pins.
 * @param  bank: pin bank channel defined in eGPIO_bankId.
 * @param  mPins: multi pins defined in @ref ePINCTRL_GPIO_PINS.
 * @param  param: multi params defined in @ref ePINCTRL_configParam.
 * @return HAL_Status.
 */
HAL_Status HAL_PINCTRL_SetIOMUX(eGPIO_bankId bank, uint32_t mPins, ePINCTRL_configParam param)
{
    return HAL_PINCTRL_SetParam(bank, mPins, param);
}
/** @} */

/** @} */

/** @} */

#endif /* HAL_PINCTRL_MODULE_ENABLED */
