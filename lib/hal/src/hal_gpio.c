/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup GPIO
 *  @{
 */

/** @defgroup GPIO_How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The GPIO driver can be used as follows:
 APIs for GPIO io read write:
   1) HAL_GPIO_GetPinLevel to get EXT port level.
   2) HAL_GPIO_SetPinLevel to set io level.
   3) HAL_GPIO_SetPinDirection to set io direction.

 APIs for GPIO IRQ:
   1) HAL_GPIO_EnableIRQ to enable a GPIO IRQ.
   2) HAL_GPIO_DisableIRQ to disable a GPIO IRQ.
   3) HAL_GPIO_IRQHandler to handle GPIO IRQ isr.
   4) HAL_GPIO_IRQDispatch to dispatch GPIO IRQ, should be implemented by User.

 @endverbatim
 @} */

#include "hal_base.h"

#ifdef HAL_GPIO_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/
#define UNUSED(X) (void)(X)      /* To avoid gcc/g++ warnings */

/********************* Private Function Definition ***************************/

/**
 * @brief  Set the GPIO IRQ end of interrupt(EOI).
 * @param  pGPIO: The pointer of GPIO struct.
 * @param  pin: The pin number defined in @ref PINCTRL_GPIO_PINS.
 */
static void GPIO_SetEOI(struct GPIO_REG *pGPIO, uint32_t pin)
{
    HAL_ASSERT(IS_GET_GPIO_PIN(pin));

#if (GPIO_VER_ID == 0x01000C2BU)
    if (IS_GPIO_HIGH_PIN(pin)) {
        pin &= 0xFFFF0000;
        pGPIO->PORT_EOI_H = pin | (pin >> 16);
    } else {
        pin &= 0x0000FFFF;
        pGPIO->PORT_EOI_L = pin | (pin << 16);
    }
#else
    {
        pGPIO->PORTA_EOI = pin;
    }
#endif
}

/**
 * @brief  Get GPIO all pins irq type.
 * @param  pGPIO: the GPIO struct.
 * @return uint32_t: type value.
 */
static uint32_t GPIO_GetIntType(struct GPIO_REG *pGPIO)
{
    uint32_t type;

#if (GPIO_VER_ID == 0x01000C2BU)
    type = (pGPIO->INT_TYPE_L & 0xffff) | ((pGPIO->INT_TYPE_H & 0xffff) << 16);
#else
    type = pGPIO->INTTYPE_LEVEL;
#endif

    return type;
}

/**
 * @brief  Get GPIO all pins irq status.
 * @param  pGPIO: the GPIO struct.
 * @return uint32_t: status value.
 */
static uint32_t GPIO_GetIntStatus(struct GPIO_REG *pGPIO)
{
    return pGPIO->INT_STATUS;
}

/********************* Public Function Definition ***************************/

/** @defgroup GPIO_Exported_Functions_Group1 State and Errors Functions
 @verbatim

 ===============================================================================
             #### State and Errors functions ####
 ===============================================================================
 This section provides functions allowing to get the status of the module:

 @endverbatim
 *  @{
 */

/**
 * @brief  GPIO Configure IRQ trigger type.
 * @param  pGPIO: The pointer of GPIO struct.
 * @param  pin: The pin number defined in @ref PINCTRL_GPIO_PINS.
 * @param  mode: The value defined in eGPIO_intType.
 * @return HAL_Status.
 */
HAL_Status HAL_GPIO_SetIntType(struct GPIO_REG *pGPIO, uint32_t pin, eGPIO_intType mode)
{
    uint32_t both = 0, type = 0, plar = 0;

    HAL_ASSERT(IS_GET_GPIO_PIN(pin));
    UNUSED(both);

    switch (mode) {
    case GPIO_INT_TYPE_EDGE_RISING:
        type = 1;
        plar = 1;
        both = 0;
        break;
    case GPIO_INT_TYPE_EDGE_FALLING:
        type = 1;
        plar = 0;
        both = 0;
        break;
    case GPIO_INT_TYPE_LEVEL_HIGH:
        type = 0;
        plar = 1;
        both = 0;
        break;
    case GPIO_INT_TYPE_LEVEL_LOW:
        type = 0;
        plar = 0;
        both = 0;
        break;
    case GPIO_INT_TYPE_EDGE_BOTH:
        type = 0;
        plar = 0;
        both = 1;
        break;
    default:

        return HAL_INVAL;
    }

#if (GPIO_VER_ID == 0x01000C2BU)
    if (IS_GPIO_HIGH_PIN(pin)) {
        pin &= 0xFFFF0000;
        pGPIO->INT_TYPE_H = (type) ? (pin | (pin >> 16)) : (pin);
        pGPIO->INT_POLARITY_H = (plar) ? (pin | (pin >> 16)) : (pin);
        pGPIO->INT_BOTHEDGE_H = (both) ? (pin | (pin >> 16)) : (pin);
    } else {
        pin &= 0x0000FFFF;
        pGPIO->INT_TYPE_L = (type) ? (pin | (pin << 16)) : (pin << 16);
        pGPIO->INT_POLARITY_L = (plar) ? (pin | (pin << 16)) : (pin << 16);
        pGPIO->INT_BOTHEDGE_L = (both) ? (pin | (pin << 16)) : (pin << 16);
    }
#else
    {
        pGPIO->INTTYPE_LEVEL = (type) ? (pin) : (pGPIO->INTTYPE_LEVEL & ~(pin));
        pGPIO->INT_POLARITY = (plar) ? (pin) : (pGPIO->INT_POLARITY & ~(pin));
        #ifdef SOC_RK1808
        pGPIO->INT_BOTHEDGE = (both) ? (pin) : (pGPIO->INT_BOTHEDGE & ~(pin));
        #endif
    }
#endif

    return HAL_OK;
}

/**
 * @brief  Set GPIO direction.
 * @param  pGPIO: the GPIO struct.
 * @param  pin: The pin number defined in @ref PINCTRL_GPIO_PINS.
 * @param  pinDir: direction value defined in eGPIO_pinDirection.
 * @return HAL_Status: HAL_OK if success.
 */
HAL_Status HAL_GPIO_SetPinDirection(struct GPIO_REG *pGPIO, uint32_t pin, eGPIO_pinDirection pinDir)
{
    HAL_ASSERT(IS_GET_GPIO_PIN(pin));
    HAL_ASSERT(IS_GPIO_PIN_DIR(pinDir));

#if (GPIO_VER_ID == 0x01000C2BU)
    if (IS_GPIO_HIGH_PIN(pin)) {
        pin &= 0xFFFF0000;
        pGPIO->SWPORT_DDR_H = (pinDir == GPIO_OUT) ? (pin | (pin >> 16)) : (pin);
    } else {
        pin &= 0x0000FFFF;
        pGPIO->SWPORT_DDR_L = (pinDir == GPIO_OUT) ? (pin | (pin << 16)) : (pin << 16);
    }
#else
    {
        pGPIO->SWPORTA_DDR = (pinDir == GPIO_OUT) ? (pin) : (pGPIO->SWPORTA_DDR & ~(pin));
    }
#endif

    return HAL_OK;
}

/**
 * @brief  Set GPIO pin level.
 * @param  pGPIO: The pointer of GPIO struct.
 * @param  pin: The pin number defined in @ref PINCTRL_GPIO_PINS.
 * @param  pinLevel: The level defined in @ref eGPIO_pinLevel.
 * @return HAL_Status.
 */
HAL_Status HAL_GPIO_SetPinLevel(struct GPIO_REG *pGPIO, uint32_t pin, eGPIO_pinLevel pinLevel)
{
    HAL_ASSERT(IS_GET_GPIO_PIN(pin));
    HAL_ASSERT(IS_GPIO_PIN_LEVEL(pinLevel));

#if (GPIO_VER_ID == 0x01000C2BU)
    if (IS_GPIO_HIGH_PIN(pin)) {
        pin &= 0xFFFF0000;
        pGPIO->SWPORT_DR_H = (pinLevel == GPIO_HIGH) ? (pin | (pin >> 16)) : (pin);
    } else {
        pin &= 0x0000FFFF;
        pGPIO->SWPORT_DR_L = (pinLevel == GPIO_HIGH) ? (pin | (pin << 16)) : (pin << 16);
    }
#else
    {
        pGPIO->SWPORTA_DR = (pinLevel == GPIO_HIGH) ? (pin) : (pGPIO->SWPORTA_DR & ~(pin));
    }
#endif

    return HAL_OK;
}

/** @} */

/** @defgroup GPIO_Exported_Functions_Group2 IO Functions
 @verbatim

 ===============================================================================
             #### IO functions ####
 ===============================================================================
 This section provides functions allowing to IO controlling:

 @endverbatim
 *  @{
 */

/**
 * @brief  Get GPIO Pin data value.
 * @param  pGPIO: the GPIO struct.
 * @param  pin: The pin number defined in @ref PINCTRL_GPIO_PINS.
 * @retval eGPIO_pinLevel: data value.
 */
eGPIO_pinLevel HAL_GPIO_GetPinData(struct GPIO_REG *pGPIO, uint32_t pin)
{
    eGPIO_pinLevel pinLevel;
    uint32_t value;

    HAL_ASSERT(IS_GET_GPIO_PIN(pin));

#if (GPIO_VER_ID == 0x01000C2BU)
    value = IS_GPIO_HIGH_PIN(pin) ? (pGPIO->SWPORT_DR_H & (pin >> 16)) : (pGPIO->SWPORT_DR_L & pin);
#else
    value = pGPIO->SWPORTA_DR & pin;
#endif

    if (value != (uint32_t)GPIO_LOW) {
        pinLevel = GPIO_HIGH;
    } else {
        pinLevel = GPIO_LOW;
    }

    return pinLevel;
}

/**
 * @brief  Get GPIO Pin ext bank level.
 * @param  pGPIO: the GPIO struct.
 * @param  pin: The pin number defined in @ref PINCTRL_GPIO_PINS.
 * @retval GPIO_PinState: ext bank value.
 */
eGPIO_pinLevel HAL_GPIO_GetPinLevel(struct GPIO_REG *pGPIO, uint32_t pin)
{
    uint32_t value;

    HAL_ASSERT(IS_GET_GPIO_PIN(pin));

#if (GPIO_VER_ID == 0x01000C2BU)
    value = (pGPIO->EXT_PORT & pin);
#else
    value = (pGPIO->EXT_PORTA & pin);
#endif

    return (value == (uint32_t)GPIO_LOW) ? GPIO_LOW : GPIO_HIGH;
}

/** @} */

/** @defgroup GPIO_Exported_Functions_Group3 Other Functions
 *  @{
 */

/**
 * @brief  Set GPIO irq enable.
 * @param  pGPIO: The pointer of GPIO struct.
 * @param  pin: The pin number defined in @ref PINCTRL_GPIO_PINS.
 */
void HAL_GPIO_EnableIRQ(struct GPIO_REG *pGPIO, uint32_t pin)
{
    HAL_ASSERT(IS_GET_GPIO_PIN(pin));

#if (GPIO_VER_ID == 0x01000C2BU)
    if (IS_GPIO_HIGH_PIN(pin)) {
        pin &= 0xFFFF0000;
        pGPIO->INT_EN_H = pin | (pin >> 16);
        pGPIO->INT_MASK_H = pin;
    } else {
        pin &= 0x0000FFFF;
        pGPIO->INT_EN_L = pin | (pin >> 16);
        pGPIO->INT_MASK_L = pin >> 16;
    }
#else
    {
        pGPIO->INTEN |= pin;
        pGPIO->INTMASK &= ~pin;
    }
#endif
}

/**
 * @brief  Set GPIO irq disable.
 * @param  pGPIO: The pointer of GPIO struct.
 * @param  pin: The pin number defined in @ref PINCTRL_GPIO_PINS.
 */
void HAL_GPIO_DisableIRQ(struct GPIO_REG *pGPIO, uint32_t pin)
{
    HAL_ASSERT(IS_GET_GPIO_PIN(pin));

#if (GPIO_VER_ID == 0x01000C2BU)
    if (IS_GPIO_HIGH_PIN(pin)) {
        pin &= 0xFFFF0000;
        pGPIO->INT_EN_H = pin;
        pGPIO->INT_MASK_H = pin | (pin >> 16);
    } else {
        pin &= 0x0000FFFF;
        pGPIO->INT_EN_L = pin >> 16;
        pGPIO->INT_MASK_L = pin | (pin >> 16);
    }
#else
    {
        pGPIO->INTEN &= ~pin;
        pGPIO->INTMASK |= pin;
    }
#endif
}

/**
 * @brief  GPIO IRQ callbacks.
 * @param  bank: The pointer of GPIO struct.
 * @param  pin: The true pin index.
 * NOTE: This function Should not be modified, when the callback is needed,
 *       the HAL_GPIO_IRQDispatch could be implemented in the user file.
 */
__WEAK void HAL_GPIO_IRQDispatch(eGPIO_bankId bank, uint32_t pin)
{
    UNUSED(bank);
    UNUSED(pin);
}

/**
 * @brief  GPIO IRQ hanlder.
 * @param  pGPIO: The pointer of GPIO struct.
 * @param  bank: The bank id defined in @ref eGPIO_bankId.
 */
void HAL_GPIO_IRQHandler(struct GPIO_REG *pGPIO, eGPIO_bankId bank)
{
    uint32_t stat, type, clear;
    uint32_t i;
    uint32_t pin;

    stat = GPIO_GetIntStatus(pGPIO);
    type = GPIO_GetIntType(pGPIO);

    /* Then process each pending GPIO interrupt */
    for (i = 0x0U; i < PIN_NUMBER_PER_BANK && stat != 0; i++) {
        clear = 0x1U << i;
        pin = HAL_BIT(i);

        if ((stat & clear) != 0x0U) {
            /* If gpio is level triggered, masked it at first */
            if ((type & clear) == 0x0U)
                HAL_GPIO_DisableIRQ(pGPIO, pin);

            GPIO_SetEOI(pGPIO, pin);

            /* Remove the pending interrupt bit from the clear */
            stat &= ~clear;

            /* And disptach the GPIO interrupt to the handler */
            HAL_GPIO_IRQDispatch(bank, i);

            /* If gpio is level triggered, unmasked it at last */
            if ((type & clear) == 0x0U)
                HAL_GPIO_EnableIRQ(pGPIO, pin);
        }
    }
}
/** @} */

#endif
/** @} */

/** @} */
