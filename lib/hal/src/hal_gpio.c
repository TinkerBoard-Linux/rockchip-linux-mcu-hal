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

/** @defgroup How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The GPIO driver can be used as follows:
 (A) User can read/write level by IO functions:
       1) Get pin level by HAL_GPIO_GetPinLevel / HAL_GPIO_GetPinData;
       2) Set pin level by HAL_GPIO_SetPinLevel;
 (B) User can set IOMUX by HAL_GPIO_SetIOMUX pin by pin;
 (C) User can set pin configure by HAL_GPIO_Config, REMEMBER that the
       Pin is actually 1 << pin, so it can support several pins to configure.
       It's useful for driver to set IOs onetime.

 @endverbatim
 @} */

#include "hal_base.h"

#ifdef HAL_GPIO_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/

static struct HAL_GPIO_DEV s_GPIODev;

#define GPIO_MUX_BPP (s_GPIODev.muxInfo.bitsPerPin)
#define GPIO_MUX_PPR (s_GPIODev.muxInfo.pinsPerReg)
#define GPIO_SLR_BPP (s_GPIODev.slrInfo.bitsPerPin)
#define GPIO_SLR_PPR (s_GPIODev.slrInfo.pinsPerReg)
#define GPIO_SMT_BPP (s_GPIODev.smtInfo.bitsPerPin)
#define GPIO_SMT_PPR (s_GPIODev.smtInfo.pinsPerReg)
#define GPIO_PUL_BPP (s_GPIODev.pulInfo.bitsPerPin)
#define GPIO_PUL_PPR (s_GPIODev.pulInfo.pinsPerReg)
#define GPIO_DRV_BPP (s_GPIODev.drvInfo.bitsPerPin)
#define GPIO_DRV_PPR (s_GPIODev.drvInfo.pinsPerReg)

#define GPIO_BPP(x) (GPIO_##x##_BPP)
#define GPIO_PPR(x) (GPIO_##x##_PPR)

#define GPIOn_MUX_ADDR(n) (s_GPIODev.desc[n].offset.mux)
#define GPIOn_SLR_ADDR(n) (s_GPIODev.desc[n].offset.slr)
#define GPIOn_SMT_ADDR(n) (s_GPIODev.desc[n].offset.smt)
#define GPIOn_PUL_ADDR(n) (s_GPIODev.desc[n].offset.pul)
#define GPIOn_DRV_ADDR(n) (s_GPIODev.desc[n].offset.drv)

#define SET_VAL(v, p)         (v ? RK_SET_BITS(1 << (p - 16)) : RK_CLR_BITS(1 << (p - 16)))
#define IS_HIGH_16BITS_PIN(p) (p > 15 && p <= 31)

#define GPIO_READ(a)           (*(volatile uint32_t *)(a))
#define GPIO_WRITE(a, w, r, v) (*(volatile uint32_t *)(a) = ((((1 << w) - 1) << (16) | (v)) << (r)))

#define UNUSED(X) (void)(X)      /* To avoid gcc/g++ warnings */

/********************* Private Variable Definition ***************************/
/********************* Private Function Definition ***************************/

/**
 * @brief  Set GPIO function.
 * @param  bank: The bank number defined in eGPIO_BankNum.
 * @param  pin: The pin number defined in eGPIO_PinNum.
 * @param  value: The function value.
 * @return HAL_Status
 * Set GPIO pin mux to different functions.
 */
HAL_Status GPIO_SetFunc(uint32_t bank, uint32_t pin, uint32_t value)
{
    uint32_t pinsPerReg = GPIO_BPP(MUX);
    uint32_t bitsPerPin = GPIO_PPR(MUX);
    uint32_t addr, offset;
    uint32_t mask;

#if defined(SOC_RK1808)
    if (bank == 0) {
        pinsPerReg = 8;
        bitsPerPin = 2;
    }
#endif
    mask = bitsPerPin;

    if (pinsPerReg == 0 || bitsPerPin == 0)
        return HAL_OK;

    if (value >= HAL_BIT(bitsPerPin) || pin >= 32 || pin < 0)
        return HAL_ERROR;

    addr = GPIOn_MUX_ADDR(bank) + (pin / pinsPerReg) * 4;
    offset = (pin % pinsPerReg) * bitsPerPin;

    if (pinsPerReg * bitsPerPin == 32)
        mask = 0;

    GPIO_WRITE(addr, mask, offset, value);

    return HAL_OK;
}

/**
 * @brief  Set GPIO pull mode.
 * @param  bank: The bank number defined in eGPIO_BankNum.
 * @param  pin: The pin number defined in eGPIO_PinNum.
 * @param  value: The pull mode value.
 * @return HAL_Status
 * Set GPIO pin pull mode to pullup/pulldown/nopull.
 */
HAL_Status GPIO_SetPull(uint32_t bank, uint32_t pin, uint32_t value)
{
    uint32_t pinsPerReg = GPIO_BPP(PUL);
    uint32_t bitsPerPin = GPIO_PPR(PUL);
    uint32_t addr, offset;
    uint32_t mask = bitsPerPin;

    if (pinsPerReg == 0 || bitsPerPin == 0)
        return HAL_OK;

    if (value >= HAL_BIT(bitsPerPin) || pin >= 32 || pin < 0)
        return HAL_ERROR;

    addr = GPIOn_PUL_ADDR(bank) + (pin / pinsPerReg) * 4;
    offset = (pin % pinsPerReg) * bitsPerPin;

    if (pinsPerReg * bitsPerPin == 32)
        mask = 0;

    GPIO_WRITE(addr, mask, offset, value);

    return HAL_OK;
}

/**
 * @brief  Set GPIO drive level.
 * @param  bank: The bank number defined in eGPIO_BankNum.
 * @param  pin: The pin number defined in eGPIO_PinNum.
 * @param  value: The pull mode value.
 * @return HAL_Status
 * Set GPIO pin drive capacity to different level.
 */
HAL_Status GPIO_SetDrive(uint32_t bank, uint32_t pin, uint32_t value)
{
    uint32_t pinsPerReg = GPIO_BPP(DRV);
    uint32_t bitsPerPin = GPIO_PPR(DRV);
    uint32_t addr, offset;
    uint32_t mask = bitsPerPin;

    if (pinsPerReg == 0 || bitsPerPin == 0)
        return HAL_OK;

    if (value >= HAL_BIT(bitsPerPin) || pin >= 32 || pin < 0)
        return HAL_ERROR;

    addr = GPIOn_DRV_ADDR(bank) + (pin / pinsPerReg) * 4;
    offset = (pin % pinsPerReg) * bitsPerPin;

    if (pinsPerReg * bitsPerPin == 32)
        mask = 0;

    GPIO_WRITE(addr, mask, offset, value);

    return HAL_OK;
}

/**
 * @brief  Set GPIO schmitt feature.
 * @param  bank: The bank number defined in eGPIO_BankNum.
 * @param  pin: The pin number defined in eGPIO_PinNum.
 * @param  value: The schmitt enable value.
 * @return HAL_Status
 * Set GPIO pin schmitt trigger or not.
 */
HAL_Status GPIO_SetSchmitt(uint32_t bank, uint32_t pin, uint32_t value)
{
    uint32_t pinsPerReg = GPIO_BPP(SMT);
    uint32_t bitsPerPin = GPIO_PPR(SMT);
    uint32_t addr, offset;
    uint32_t mask = bitsPerPin;

    if (pinsPerReg == 0 || bitsPerPin == 0)
        return HAL_OK;

    if (value >= HAL_BIT(bitsPerPin) || pin >= 32 || pin < 0)
        return HAL_ERROR;

    addr = GPIOn_SMT_ADDR(bank) + (pin / pinsPerReg) * 4;
    offset = (pin % pinsPerReg) * bitsPerPin;

    if (pinsPerReg * bitsPerPin == 32)
        mask = 0;

    GPIO_WRITE(addr, mask, offset, value);

    return HAL_OK;
}

/**
 * @brief  Set GPIO slewrate feature.
 * @param  bank: The bank number defined in eGPIO_BankNum.
 * @param  pin: The pin number defined in eGPIO_PinNum.
 * @param  value: The slewrate value.
 * @return HAL_Status
 * Set GPIO pin slewrate to slow or fast.
 */
HAL_Status GPIO_SetSlewRate(uint32_t bank, uint32_t pin, uint32_t value)
{
    uint32_t pinsPerReg = GPIO_BPP(SLR);
    uint32_t bitsPerPin = GPIO_PPR(SLR);
    uint32_t addr, offset;
    uint32_t mask = bitsPerPin;

    if (pinsPerReg == 0 || bitsPerPin == 0)
        return HAL_OK;

    if (value >= HAL_BIT(bitsPerPin) || pin >= 32 || pin < 0)
        return HAL_ERROR;

    addr = GPIOn_SLR_ADDR(bank) + (pin / pinsPerReg) * 4;
    offset = (pin % pinsPerReg) * bitsPerPin;

    if (pinsPerReg * bitsPerPin == 32)
        mask = 0;

    GPIO_WRITE(addr, mask, offset, value);

    return HAL_OK;
}

/**
 * @brief  Set GPIO direction.
 * @param  GPIOx: the GPIO struct.
 * @param  pin: gpio pin num.
 * @param  value: direction value.
 * @return HAL_Status: HAL_OK if success.
 */
HAL_Status GPIO_SetPinDirection(struct GPIO_REG *GPIOx, eGPIO_PinNum pin, eGPIO_PinDirection value)
{
#if (GPIO_VER_ID == 0x01000C2BU)
    if (IS_HIGH_16BITS_PIN(pin))
        GPIOx->SWPORT_DDR_H = SET_VAL(value, pin);
    else
        GPIOx->SWPORT_DDR_L = SET_VAL(value, pin);
#else
    MODIFY_REG(GPIOx->SWPORTA_DDR, 1 << pin, value << pin);
#endif

    return HAL_OK;
}

/**
 * @brief  Set GPIO irq type.
 * @param  GPIOx: The pointer of GPIO struct.
 * @param  pin: The pin number defined in eGPIO_PinNum.
 * @param  IrqType: irq type defined in eGPIO_IrqType.
 */
void GPIO_IRQTypeSet(struct GPIO_REG *GPIOx, eGPIO_PinNum pin, eGPIO_IrqType IrqType)
{
    uint32_t bothEdge = 0, type = 0, polarity = 0;

    UNUSED(bothEdge);
    switch (IrqType) {
    case GPIO_IRQ_TYPE_EDGE_RISING:
        type = 1;
        polarity = 1;
        bothEdge = 0;
        break;
    case GPIO_IRQ_TYPE_EDGE_FALLING:
        type = 1;
        polarity = 0;
        bothEdge = 0;
        break;
    case GPIO_IRQ_TYPE_LEVEL_HIGH:
        type = 0;
        polarity = 1;
        bothEdge = 0;
        break;
    case GPIO_IRQ_TYPE_LEVEL_LOW:
        type = 0;
        polarity = 0;
        bothEdge = 0;
        break;
    case GPIO_IRQ_TYPE_EDGE_BOTH:
        type = 0;
        polarity = 0;
        bothEdge = 1;
        break;
    default:

        return;
    }

#if (GPIO_VER_ID == 0x01000C2BU)
    if (IS_HIGH_16BITS_PIN(pin)) {
        GPIOx->INT_TYPE_H = SET_VAL(type, pin);
        GPIOx->INT_POLARITY_H = SET_VAL(polarity, pin);
        GPIOx->INT_BOTHEDGE_H = SET_VAL(bothEdge, pin);
    } else {
        GPIOx->INT_TYPE_L = SET_VAL(type, pin);
        GPIOx->INT_POLARITY_L = SET_VAL(polarity, pin);
        GPIOx->INT_BOTHEDGE_L = SET_VAL(bothEdge, pin);
    }
#else
    MODIFY_REG(GPIOx->INTTYPE_LEVEL, 1 << pin, type << pin);
    MODIFY_REG(GPIOx->INT_POLARITY, 1 << pin, polarity << pin);
    #ifdef SOC_RK1808
    MODIFY_REG(GPIOx->INT_BOTHEDGE, 1 << pin, bothEdge << pin);
    #endif
#endif
}

/**
 * @brief  Set the GPIO IRQ EOI.
 * @param  GPIOx: The pointer of GPIO struct.
 * @param  pin: The pin number defined in eGPIO_PinNum.
 */
void GPIO_IRQEOISet(struct GPIO_REG *GPIOx, eGPIO_PinNum pin)
{
#if (GPIO_VER_ID == 0x01000C2BU)
    if (IS_HIGH_16BITS_PIN(pin))
        GPIOx->PORT_EOI_H = RK_SET_BITS(1 << (pin - 16));
    else
        GPIOx->PORT_EOI_L = RK_SET_BITS(1 << pin);
#else
    GPIOx->PORTA_EOI = 1 << pin;
#endif
}

/**
 * @brief  Get GPIO all pins irq type.
 * @param  GPIOx: the GPIO struct.
 * @return uint32_t: type value.
 */
uint32_t GPIO_IRQTypeGet(struct GPIO_REG *GPIOx)
{
    uint32_t retVal;

#if (GPIO_VER_ID == 0x01000C2BU)
    retVal = (GPIOx->INT_TYPE_L & 0xffff) | ((GPIOx->INT_TYPE_H & 0xffff) << 16);
#else
    retVal = GPIOx->INTTYPE_LEVEL;
#endif

    return retVal;
}

/**
 * @brief  Get GPIO all pins irq status.
 * @param  GPIOx: the GPIO struct.
 * @return uint32_t: status value.
 */
uint32_t GPIO_IRQStatusGet(struct GPIO_REG *GPIOx)
{
    return GPIOx->INT_STATUS;
}

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
 * @brief  IOMUX Set.
 * @param  GPIOx: The pointer of GPIO struct.
 * @param  pin: The pin number defined in eGPIO_PinNum.
 * @param  func: iomux value defined in eGPIO_PinFunc.
 * @return HAL_Status.
 */
HAL_Status HAL_GPIO_SetIOMUX(struct GPIO_REG *GPIOx, eGPIO_PinNum pin, eGPIO_PinFunc func)
{
    uint32_t bank;

    if (IS_GPIO_INSTANCE(GPIOx) == 0)
        return HAL_ERROR;

    if (pin > 31 || pin < 0)
        return HAL_ERROR;

    for (bank = 0; bank < GPIO_BANK_NUM; bank++)
        if (HAL_GPIO_GetBase(bank) == GPIOx)
            break;

    if (bank == GPIO_BANK_NUM)
        return HAL_ERROR;

    return GPIO_SetFunc(bank, pin, func);
}

/**
 * @brief  GPIO Configure Pull/Drive/Slewrate/Schmitt.
 * @param  GPIOx: The pointer of GPIO struct.
 * @param  GPIO_Init: The pointer of GPIO init struct.
 *         NOTE: GPIO_Init->Pin actually is 1 << pin, could has many pins.
 * @return HAL_Status.
 */
HAL_Status HAL_GPIO_Init(struct GPIO_REG *GPIOx, GPIO_InitTypeDef *GPIO_Init)
{
    uint32_t pin, bank;
    uint32_t pinBit = 0U;
    uint32_t pinTmp = 0U;

    for (bank = 0; bank < GPIO_BANK_NUM; bank++)
        if (HAL_GPIO_GetBase(bank) == GPIOx)
            break;

    if (bank == GPIO_BANK_NUM)
        return HAL_ERROR;

    for (pin = 0U; pin < 32; pin++) {
        pinBit = (0x01U << pin);
        pinTmp = (uint32_t)(GPIO_Init->pin) & pinBit;

        if (pinTmp == pinBit) {
            GPIO_SetPull(bank, pin, GPIO_Init->pul);
            GPIO_SetDrive(bank, pin, GPIO_Init->drv);
            GPIO_SetSchmitt(bank, pin, GPIO_Init->smt);
            GPIO_SetSlewRate(bank, pin, GPIO_Init->slr);

            switch (GPIO_Init->mode) {
            case GPIO_MODE_OUTPUT:
                GPIO_SetPinDirection(GPIOx, pin, GPIO_OUT);
                break;
            case GPIO_MODE_INPUT:
                GPIO_SetPinDirection(GPIOx, pin, GPIO_IN);
                break;
            case GPIO_MODE_IT_EDGE_RISING:
                GPIO_IRQTypeSet(GPIOx, pin, GPIO_IRQ_TYPE_EDGE_RISING);
                break;
            case GPIO_MODE_IT_EDGE_FALLING:
                GPIO_IRQTypeSet(GPIOx, pin, GPIO_IRQ_TYPE_EDGE_FALLING);
                break;
            case GPIO_MODE_IT_EDGE_RISING_FALLING:
                GPIO_IRQTypeSet(GPIOx, pin, GPIO_IRQ_TYPE_EDGE_BOTH);
                break;
            case GPIO_MODE_IT_LEVEL_LOW:
                GPIO_IRQTypeSet(GPIOx, pin, GPIO_IRQ_TYPE_LEVEL_LOW);
                break;
            case GPIO_MODE_IT_LEVEL_HIGH:
                GPIO_IRQTypeSet(GPIOx, pin, GPIO_IRQ_TYPE_LEVEL_HIGH);
                break;
            default:
                break;
            }
        }
    }

    return HAL_OK;
}

/**
 * @brief  Set GPIO pin level.
 * @param  GPIOx: The pointer of GPIO struct.
 * @param  pin: The pin number defined in eGPIO_PinNum.
 * @param  value: level.
 * @return HAL_Status.
 */
HAL_Status HAL_GPIO_SetPinLevel(struct GPIO_REG *GPIOx, eGPIO_PinNum pin, eGPIO_PinLevel value)
{
#if (GPIO_VER_ID == 0x01000C2BU)
    if (IS_HIGH_16BITS_PIN(pin))
        GPIOx->SWPORT_DR_H = SET_VAL(value, pin);
    else
        GPIOx->SWPORT_DR_L = SET_VAL(value, pin);
#else
    MODIFY_REG(GPIOx->SWPORTA_DR, 1 << pin, value << pin);
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
 * @param  GPIOx: the GPIO struct.
 * @param  pin: gpio pin num.
 * @retval eGPIO_PinLevel: data value.
 */
eGPIO_PinLevel HAL_GPIO_GetPinData(struct GPIO_REG *GPIOx, eGPIO_PinNum pin)
{
    uint32_t retVal;

#if (GPIO_VER_ID == 0x01000C2BU)
    if (IS_HIGH_16BITS_PIN(pin)) {
        pin -= 16;
        retVal = (GPIOx->SWPORT_DR_H & (0x1 << pin)) >> pin;
    } else {
        retVal = (GPIOx->SWPORT_DR_L & (0x1 << pin)) >> pin;
    }
#else
    retVal = (GPIOx->SWPORTA_DR & (0x1 << pin)) >> pin;
#endif

    return (eGPIO_PinLevel)retVal;
}

/**
 * @brief  Get GPIO Pin ext bank level.
 * @param  GPIOx: the GPIO struct.
 * @param  pin: gpio pin num.
 * @retval eGPIO_PinLevel: ext bank value.
 */
eGPIO_PinLevel HAL_GPIO_GetPinLevel(struct GPIO_REG *GPIOx, eGPIO_PinNum pin)
{
    uint32_t retVal;

#if (GPIO_VER_ID == 0x01000C2BU)
    retVal = (GPIOx->EXT_PORT & (0x1 << pin)) >> pin;
#else
    retVal = (GPIOx->EXT_PORTA & (0x1 << pin)) >> pin;
#endif

    return retVal;
}

/** @} */

/** @defgroup GPIO_Exported_Functions_Group3 Other Functions
 *  @{
 */

/**
 * @brief  Get GPIO base address.
 * @param  bank: The bank number defined in eGPIO_BankNum.
 * @return struct GPIO_REG
 */
struct GPIO_REG *HAL_GPIO_GetBase(uint32_t bank)
{
    HAL_ASSERT((bank < GPIO_BANK_NUM) && (bank >= 0));

    return (struct GPIO_REG *)(s_GPIODev.desc[bank].base);
}

/**
 * @brief  Probe for GPIO.
 * @param  GPIO_Dev: The GPIO Device struct.
 */
void HAL_GPIO_Probe(const struct HAL_GPIO_DEV GPIO_Dev)
{
    s_GPIODev.cnt = GPIO_Dev.cnt;
    s_GPIODev.muxInfo = GPIO_Dev.muxInfo;
    s_GPIODev.pulInfo = GPIO_Dev.pulInfo;
    s_GPIODev.smtInfo = GPIO_Dev.smtInfo;
    s_GPIODev.drvInfo = GPIO_Dev.drvInfo;
    s_GPIODev.slrInfo = GPIO_Dev.slrInfo;
    for (int i = 0; i < GPIO_Dev.cnt; i++)
        s_GPIODev.desc[i] = GPIO_Dev.desc[i];
}

/**
 * @brief  Set GPIO irq enable.
 * @param  GPIOx: The pointer of GPIO struct.
 * @param  pin: The pin number defined in eGPIO_PinNum.
 */
void HAL_GPIO_EnableIRQ(struct GPIO_REG *GPIOx, eGPIO_PinNum pin)
{
#if (GPIO_VER_ID == 0x01000C2BU)
    if (IS_HIGH_16BITS_PIN(pin)) {
        GPIOx->INT_EN_H = RK_SET_BITS(1 << (pin - 16));
        GPIOx->INT_MASK_H = RK_CLR_BITS(1 << (pin - 16));
    } else {
        GPIOx->INT_EN_L = RK_SET_BITS(1 << (pin));
        GPIOx->INT_MASK_L = RK_CLR_BITS(1 << (pin));
    }
#else
    GPIOx->INTEN |= 1 << pin;
    GPIOx->INTMASK &= ~(1 << pin);
#endif
}

/**
 * @brief  Set GPIO irq disable.
 * @param  GPIOx: The pointer of GPIO struct.
 * @param  pin: The pin number defined in eGPIO_PinNum.
 */
void HAL_GPIO_DisableIRQ(struct GPIO_REG *GPIOx, eGPIO_PinNum pin)
{
#if (GPIO_VER_ID == 0x01000C2BU)
    if (IS_HIGH_16BITS_PIN(pin))
        GPIOx->INT_EN_H = RK_CLR_BITS(1 << (pin - 16));
    else
        GPIOx->INT_EN_L = RK_CLR_BITS(1 << (pin));
#else
    GPIOx->INTEN &= ~(1 << pin);
#endif
}

/**
 * @brief  GPIO IRQ hanlder.
 * @param  bank: The GPIO bank number.
 */
void HAL_GPIOn_IRQHandler(uint32_t bank)
{
    struct GPIO_REG *GPIOx = HAL_GPIO_GetBase(bank);
    uint32_t stat, type, clear;
    uint32_t i;

    HAL_ASSERT(IS_GPIO_INSTANCE(GPIOx));

    stat = GPIO_IRQStatusGet(GPIOx);
    type = GPIO_IRQTypeGet(GPIOx);

    /* Then process each pending GPIO interrupt */
    for (i = 0; i < 32 && stat != 0; i++) {
        clear = (uint32_t)1 << i;

        if ((stat & clear) != 0) {
            /* If gpio is level triggered, masked it at first */
            if ((type & clear) == 0)
                HAL_GPIO_DisableIRQ(GPIOx, i);

            GPIO_IRQEOISet(GPIOx, i);

            /* Remove the pending interrupt bit from the clear */
            stat &= ~clear;

            /* And disptach the GPIO interrupt to the register handler */
            HAL_GPIOn_IRQCallback(bank, i);

            /* If gpio is level triggered, unmasked it at last */
            if ((type & clear) == 0)
                HAL_GPIO_EnableIRQ(GPIOx, i);
        }
    }
}

/**
 * @brief  GPIO IRQ callbacks.
 * @param  bank: The GPIO bank number.
 * @param  pin: The pin number defined in eGPIO_PinNum.
 */
__weak void HAL_GPIOn_IRQCallback(uint32_t bank, uint32_t pin)
{
    /* Prevent unused argument(s) compilation warning */
    UNUSED(bank);
    UNUSED(pin);
    /* NOTE: This function Should not be modified, when the callback is needed,
             the HAL_GPIO_IRQ_Callback could be implemented in the user file
     */
}

__weak void HAL_GPIO0_IRQHandler(void)
{
    /* NOTE: This function Should not be modified, when the callback is needed,
             the HAL_GPIO_IRQ_Callback could be implemented in the user file
     */
}

__weak void HAL_GPIO1_IRQHandler(void)
{
    /* NOTE: This function Should not be modified, when the callback is needed,
             the HAL_GPIO_IRQ_Callback could be implemented in the user file
     */
}

__weak void HAL_GPIO2_IRQHandler(void)
{
    /* NOTE: This function Should not be modified, when the callback is needed,
             the HAL_GPIO_IRQ_Callback could be implemented in the user file
     */
}

__weak void HAL_GPIO3_IRQHandler(void)
{
    /* NOTE: This function Should not be modified, when the callback is needed,
             the HAL_GPIO_IRQ_Callback could be implemented in the user file
     */
}

__weak void HAL_GPIO4_IRQHandler(void)
{
    /* NOTE: This function Should not be modified, when the callback is needed,
             the HAL_GPIO_IRQ_Callback could be implemented in the user file
     */
}

__weak void HAL_GPIO5_IRQHandler(void)
{
    /* NOTE: This function Should not be modified, when the callback is needed,
             the HAL_GPIO_IRQ_Callback could be implemented in the user file
     */
}

__weak void HAL_GPIO6_IRQHandler(void)
{
    /* NOTE: This function Should not be modified, when the callback is needed,
             the HAL_GPIO_IRQ_Callback could be implemented in the user file
     */
}

__weak void HAL_GPIO7_IRQHandler(void)
{
    /* NOTE: This function Should not be modified, when the callback is needed,
             the HAL_GPIO_IRQ_Callback could be implemented in the user file
     */
}

/** @} */

#endif

/** @} */

/** @} */
