/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RKMCU_HAL_Driver
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

 @endverbatim
 @} */

#include "hal_base.h"

#ifdef HAL_GPIO_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/

#define MASK(v)                ((1 << v) - 1)
#define GPIO_READ(a)           (*(volatile unsigned int *)(a))
#define GPIO_WRITE(a, w, r, v) (*(volatile unsigned int *)(a) = ((MASK(w) << (16) | (v)) << (r)))

#if defined(PMUGRF_MUX_OFFSET) && defined(PMUGRF_PUL_OFFSET) && defined(PMUGRF_DRV_OFFSET) && defined(PMUGRF_SLW_OFFSET) && defined(PMUGRF_SMT_OFFSET)
#define GPIOn_MUX_ADDR(n) (((n) == 0) ? (PMU_GRF + PMUGRF_MUX_OFFSET) : (GRF_BASE + (n) * GPIO_MUX_BANK_STRIDE + GRF_MUX_OFFSET))
#define GPIOn_SLW_ADDR(n) (((n) == 0) ? (PMU_GRF + PMUGRF_SLW_OFFSET) : (GRF_BASE + (n) * GPIO_SLW_BANK_STRIDE + GRF_SLW_OFFSET))
#define GPIOn_SMT_ADDR(n) (((n) == 0) ? (PMU_GRF + PMUGRF_SMT_OFFSET) : (GRF_BASE + (n) * GPIO_SMT_BANK_STRIDE + GRF_SMT_OFFSET))
#define GPIOn_PUL_ADDR(n) (((n) == 0) ? (PMU_GRF + PMUGRF_PUL_OFFSET) : (GRF_BASE + (n) * GPIO_PUL_BANK_STRIDE + GRF_PUL_OFFSET))
#define GPIOn_DRV_ADDR(n) (((n) == 0) ? (PMU_GRF + PMUGRF_DRV_OFFSET) : (GRF_BASE + (n) * GPIO_DRV_BANK_STRIDE + GRF_DRV_OFFSET))
#else
#define GPIOn_MUX_ADDR(n) (GRF_BASE + (n) * GPIO_MUX_BANK_STRIDE + GRF_MUX_OFFSET)
#define GPIOn_SLW_ADDR(n) (GRF_BASE + (n) * GPIO_SLW_BANK_STRIDE + GRF_SLW_OFFSET)
#define GPIOn_SMT_ADDR(n) (GRF_BASE + (n) * GPIO_SMT_BANK_STRIDE + GRF_SMT_OFFSET)
#define GPIOn_PUL_ADDR(n) (GRF_BASE + (n) * GPIO_PUL_BANK_STRIDE + GRF_PUL_OFFSET)
#define GPIOn_DRV_ADDR(n) (GRF_BASE + (n) * GPIO_DRV_BANK_STRIDE + GRF_DRV_OFFSET)
#endif

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

eGPIO_PinGroup GPIO_GetPinGroup(struct GPIO_REG *GPIOx)
{
#ifdef GPIO0
    if (GPIOx == GPIO0)
        return GPIO_GROUP0;
#endif
#ifdef GPIO1
    if (GPIOx == GPIO1)
        return GPIO_GROUP1;
#endif
#ifdef GPIO2
    if (GPIOx == GPIO2)
        return GPIO_GROUP2;
#endif
#ifdef GPIO3
    if (GPIOx == GPIO3)
        return GPIO_GROUP3;
#endif
#ifdef GPIO4
    if (GPIOx == GPIO4)
        return GPIO_GROUP4;
#endif
#ifdef GPIO5
    if (GPIOx == GPIO5)
        return GPIO_GROUP5;
#endif

    return GPIO_GROUP_NUM;
}

/********************* Public Function Definition ****************************/

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
 * @brief  Set GPIO function.
 * @param  GPIOx: the GPIO struct.
 * @param  pin: gpio pin num.
 * @param  func: iomux value.
 * @return HAL_Status: HAL_OK if success.
 */
HAL_Status HAL_GPIO_SetFunc(struct GPIO_REG *GPIOx, eGPIO_PinNum pin, eGPIO_PinFunc func)
{
    uint32_t pinsPerReg = GPIO_MUX_PINS_PER_REG;
    uint32_t bitsPerPin = GPIO_MUX_BITS_PER_PIN;
    uint32_t grp = GPIO_GetPinGroup(GPIOx);
    uint32_t addr, offset;

    HAL_ASSERT(IS_GPIO_INSTANCE(GPIOx));

    if (func >= HAL_BIT(bitsPerPin)) {
        HAL_DBG_ERR("[line]:%d, parameter error\n", __LINE__);

        return HAL_ERROR;
    }

    addr = GPIOn_MUX_ADDR(grp);
    addr += (pin / pinsPerReg) * 4;
    offset = (pin % pinsPerReg) * bitsPerPin;

    if (pinsPerReg * bitsPerPin == 32)
        GPIO_WRITE(addr, 0, offset, func);
    else
        GPIO_WRITE(addr, bitsPerPin, offset, func);

    HAL_DBG("[line]:%d(%lx+%lx)=%x\n", __LINE__, addr, offset, GPIO_READ(addr));

    return HAL_OK;
}

/**
 * @brief  Set GPIO pull mode.
 * @param  GPIOx: the GPIO struct.
 * @param  pin: gpio pin num.
 * @param  pull: pull mode.
 * @return HAL_Status: HAL_OK if success.
 */
HAL_Status HAL_GPIO_SetPull(struct GPIO_REG *GPIOx, eGPIO_PinNum pin, eGPIO_PinPull pull)
{
    uint32_t pinsPerReg = GPIO_PUL_PINS_PER_REG;
    uint32_t bitsPerPin = GPIO_PUL_BITS_PER_PIN;
    uint32_t grp = GPIO_GetPinGroup(GPIOx);
    uint32_t addr, offset;

    HAL_ASSERT(IS_GPIO_INSTANCE(GPIOx));

    if (pull >= HAL_BIT(bitsPerPin)) {
        HAL_DBG_ERR("[line]:%d, parameter error\n", __LINE__);

        return HAL_ERROR;
    }

    addr = GPIOn_PUL_ADDR(grp);
    addr += (pin / pinsPerReg) * 4;
    offset = (pin % pinsPerReg) * bitsPerPin;

    if (pinsPerReg * bitsPerPin == 32)
        GPIO_WRITE(addr, 0, offset, pull);
    else
        GPIO_WRITE(addr, bitsPerPin, offset, pull);

    HAL_DBG("[line]:%d(%lx+%lx)=%x\n", __LINE__, addr, offset, GPIO_READ(addr));

    return HAL_OK;
}

/**
 * @brief  Set GPIO drive level.
 * @param  GPIOx: the GPIO struct.
 * @param  pin: gpio pin num.
 * @param  level: drive level.
 * @return HAL_Status: HAL_OK if success.
 */
HAL_Status HAL_GPIO_SetDrive(struct GPIO_REG *GPIOx, eGPIO_PinNum pin, eGPIO_PinDrive level)
{
    uint32_t pinsPerReg = GPIO_DRV_PINS_PER_REG;
    uint32_t bitsPerPin = GPIO_DRV_BITS_PER_PIN;
    uint32_t grp = GPIO_GetPinGroup(GPIOx);
    uint32_t addr, offset;

    HAL_ASSERT(IS_GPIO_INSTANCE(GPIOx));

    if (level >= HAL_BIT(bitsPerPin)) {
        HAL_DBG_ERR("[line]:%d, parameter error\n", __LINE__);

        return HAL_ERROR;
    }

    addr = GPIOn_DRV_ADDR(grp);
    addr += (pin / pinsPerReg) * 4;
    offset = (pin % pinsPerReg) * bitsPerPin;

    if (pinsPerReg * bitsPerPin == 32)
        GPIO_WRITE(addr, 0, offset, level);
    else
        GPIO_WRITE(addr, bitsPerPin, offset, level);

    HAL_DBG("[line]:%d(%lx+%lx)=%x\n", __LINE__, addr, offset, GPIO_READ(addr));

    return HAL_OK;
}

/**
 * @brief  Set GPIO schmitt on.
 * @param  GPIOx: the GPIO struct.
 * @param  pin: gpio pin num.
 * @param  enable: schmitt enable.
 * @return HAL_Status: HAL_OK if success.
 */
HAL_Status HAL_GPIO_SetSchmitt(struct GPIO_REG *GPIOx, eGPIO_PinNum pin, eGPIO_PinSchmitt enable)
{
    uint32_t pinsPerReg = GPIO_SMT_PINS_PER_REG;
    uint32_t bitsPerPin = GPIO_SMT_BITS_PER_PIN;
    uint32_t grp = GPIO_GetPinGroup(GPIOx);
    uint32_t addr, offset;

    HAL_ASSERT(IS_GPIO_INSTANCE(GPIOx));

    if (enable >= HAL_BIT(bitsPerPin)) {
        HAL_DBG_ERR("[line]:%d, parameter error\n", __LINE__);

        return HAL_ERROR;
    }

    addr = GPIOn_SMT_ADDR(grp);
    addr += (pin / pinsPerReg) * 4;
    offset = (pin % pinsPerReg) * bitsPerPin;

    if (pinsPerReg * bitsPerPin == 32)
        GPIO_WRITE(addr, 0, offset, enable);
    else
        GPIO_WRITE(addr, bitsPerPin, offset, enable);

    HAL_DBG("[line]:%d(%lx+%lx)=%x\n", __LINE__, addr, offset, GPIO_READ(addr));

    return HAL_OK;
}

/**
 * @brief  Set GPIO irq ack.
 * @param  GPIOx: the GPIO struct.
 * @param  pin: gpio pin num.
 * @return HAL_Status: HAL_OK if success.
 */
HAL_Status HAL_GPIO_SetIrqAck(struct GPIO_REG *GPIOx, eGPIO_PinNum pin)
{
    HAL_ASSERT(IS_GPIO_INSTANCE(GPIOx));

    GPIOx->PORT_EOI[pin / 16] = (1 << (16 + (pin % 16))) | (1 << (pin % 16));

    return HAL_OK;
}

/**
 * @brief  Set GPIO irq enable.
 * @param  GPIOx: the GPIO struct.
 * @param  pin: gpio pin num.
 * @param  enable: irq enable.
 * @return HAL_Status: HAL_OK if success.
 */
HAL_Status HAL_GPIO_SetIrqEnable(struct GPIO_REG *GPIOx, eGPIO_PinNum pin, eGPIO_IrqEn enable)
{
    HAL_ASSERT(IS_GPIO_INSTANCE(GPIOx));

    if (enable) {
        GPIOx->INT_EN[pin / 16] = (1 << (16 + (pin % 16))) | (1 << (pin % 16));
        GPIOx->INT_MASK[pin / 16] = (1 << (16 + (pin % 16)));
    } else {
        GPIOx->INT_EN[pin / 16] = (1 << (16 + (pin % 16)));
        GPIOx->INT_MASK[pin / 16] = (1 << (16 + (pin % 16))) | (1 << (pin % 16));
    }

    HAL_DBG("[line]:%d INT_EN=%lx\n", __LINE__, GPIOx->INT_EN[pin / 16]);

    return HAL_OK;
}

/**
 * @brief  Set GPIO irq type.
 * @param  GPIOx: the GPIO struct.
 * @param  pin: gpio pin num.
 * @param  type: irq type.
 * @return HAL_Status: HAL_OK if success.
 */
HAL_Status HAL_GPIO_SetIrqType(struct GPIO_REG *GPIOx, eGPIO_PinNum pin, eGPIO_IrqType type)
{
    HAL_ASSERT(IS_GPIO_INSTANCE(GPIOx));

    /* 0: Both Edge NOT active */
    GPIOx->INT_BOTHEDGE[pin / 16] = (1 << (16 + (pin % 16)));

    switch (type) {
    case GPIO_IRQ_TYPE_POSITIVE:
        /* 1: Edge-sensitive */
        GPIOx->INT_TYPE[pin / 16] = (1 << (16 + (pin % 16))) | (1 << (pin % 16));
        /* 1: Active-high */
        GPIOx->INT_POLARITY[pin / 16] = (1 << (16 + (pin % 16))) | (1 << (pin % 16));
        break;

    case GPIO_IRQ_TYPE_NEGATIVE:
        /* 1: Edge-sensitive */
        GPIOx->INT_TYPE[pin / 16] = (1 << (16 + (pin % 16))) | (1 << (pin % 16));
        /* 0: Active-low */
        GPIOx->INT_POLARITY[pin / 16] |= (1 << (16 + (pin % 16)));
        break;

    case GPIO_IRQ_TYPE_HIGH:
        /* 0: Level-sensitive */
        GPIOx->INT_TYPE[pin / 16] = (1 << (16 + (pin % 16)));
        /* 1: Active-high */
        GPIOx->INT_POLARITY[pin / 16] |= (1 << (16 + (pin % 16))) | (1 << (pin % 16));
        break;

    case GPIO_IRQ_TYPE_LOW:
        /* 0: Level-sensitive */
        GPIOx->INT_TYPE[pin / 16] = (1 << (16 + (pin % 16)));
        /* 0: Active-low */
        GPIOx->INT_POLARITY[pin / 16] = (1 << (16 + (pin % 16)));
        break;

    case GPIO_IRQ_TYPE_DOUBLE:
        /* 1: Both Edge active */
        GPIOx->INT_BOTHEDGE[pin / 16] = (1 << (16 + (pin % 16))) | (1 << (pin % 16));
        break;

    default:
        break;
    }

    return HAL_OK;
}

/**
 * @brief  Set GPIO debounce.
 * @param  GPIOx: the GPIO struct.
 * @param  pin: gpio pin num.
 * @param  enable: enable debounce.
 * @return HAL_Status: HAL_OK if success.
 */
HAL_Status HAL_GPIO_SetPinDebounce(struct GPIO_REG *GPIOx, eGPIO_PinNum pin, eGPIO_PinDebounce enable)
{
    HAL_ASSERT(IS_GPIO_INSTANCE(GPIOx));

    if (enable) {
        GPIOx->DEBOUNCE[pin / 16] = (1 << (16 + (pin % 16))) | (1 << (pin % 16));
    } else {
        GPIOx->DEBOUNCE[pin / 16] = (1 << (16 + (pin % 16)));
    }

    return HAL_OK;
}

/**
 * @brief  Set GPIO pin level.
 * @param  GPIOx: the GPIO struct.
 * @param  pin: gpio pin num.
 * @param  level: data value.
 * @return HAL_Status: HAL_OK if success.
 */
HAL_Status HAL_GPIO_SetPinLevel(struct GPIO_REG *GPIOx, eGPIO_PinNum pin, eGPIO_PinLevel level)
{
    HAL_ASSERT(IS_GPIO_INSTANCE(GPIOx));

    if (level) {
        GPIOx->SWPORT_DR[pin / 16] = (1 << (16 + (pin % 16))) | (1 << (pin % 16));
    } else {
        GPIOx->SWPORT_DR[pin / 16] = (1 << (16 + (pin % 16)));
    }

    return HAL_OK;
}
/**
 * @brief  Set GPIO direction.
 * @param  GPIOx: the GPIO struct.
 * @param  pin: gpio pin num.
 * @param  direction: direction value.
 * @return HAL_Status: HAL_OK if success.
 */
HAL_Status HAL_GPIO_SetPinDirection(struct GPIO_REG *GPIOx, eGPIO_PinNum pin, eGPIO_PinDirection direction)
{
    HAL_ASSERT(IS_GPIO_INSTANCE(GPIOx));

    if (direction) {
        GPIOx->SWPORT_DDR[pin / 16] = (1 << (16 + (pin % 16))) | (1 << (pin % 16));
    } else {
        GPIOx->SWPORT_DDR[pin / 16] = (1 << (16 + (pin % 16)));
    }

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
 * @brief  Get GPIO Pin direction.
 * @param  GPIOx: the GPIO struct.
 * @param  pin: gpio pin num.
 * @retval GPIO pin direction value.
 */
eGPIO_PinDirection HAL_GPIO_GetPinDirection(struct GPIO_REG *GPIOx, eGPIO_PinNum pin)
{
    HAL_ASSERT(IS_GPIO_INSTANCE(GPIOx));

    return (eGPIO_PinDirection)(((GPIOx->SWPORT_DDR[pin / 16]) & (0x1 << (pin % 16))) >> (pin % 16));
}

/**
 * @brief  Get GPIO Pin data value.
 * @param  GPIOx: the GPIO struct.
 * @param  pin: gpio pin num.
 * @retval GPIO pin data value.
 */
eGPIO_PinLevel HAL_GPIO_GetPinData(struct GPIO_REG * GPIOx, eGPIO_PinNum pin)
{
    HAL_ASSERT(IS_GPIO_INSTANCE(GPIOx));

    return (eGPIO_PinLevel)(((GPIOx->SWPORT_DR[pin / 16]) & (0x1 << (pin % 16))) >> (pin % 16));
}

/**
 * @brief  Get GPIO Pin ext port level.
 * @param  GPIOx: the GPIO struct.
 * @param  pin: gpio pin num.
 * @retval GPIO pin ext port value.
 */
eGPIO_PinLevel HAL_GPIO_GetPinLevel(struct GPIO_REG *GPIOx, eGPIO_PinNum pin)
{
    HAL_ASSERT(IS_GPIO_INSTANCE(GPIOx));

    return (eGPIO_PinLevel)(((GPIOx->EXT_PORT) & (0x1 << pin)) >> pin);
}

/** @} */

/** @defgroup GPIO_Exported_Functions_Group3 Other Functions
 *  @{
 */

/**
 * @brief  Get GPIO irq type.
 * @param  GPIOx: the GPIO struct.
 * @return uint32_t: INT_TYPE value.
 */
uint32_t HAL_GPIO_GetGPIOIrqType(struct GPIO_REG *GPIOx)
{
    HAL_ASSERT(IS_GPIO_INSTANCE(GPIOx));

    if (HAL_ARRAY_SIZE(GPIOx->INT_TYPE) == 2)
        return ((GPIOx->INT_TYPE[0] & 0xffff) | ((GPIOx->INT_TYPE[1] & 0xffff) << 16));
    else
        return (GPIOx->INT_TYPE[0]);
}

/**
 * @brief  Get GPIO irq status.
 * @param  GPIOx: the GPIO struct.
 * @return uint32_t: INT_STATUS value.
 */
uint32_t HAL_GPIO_GetGPIOIrqStatus(struct GPIO_REG *GPIOx)
{
    HAL_ASSERT(IS_GPIO_INSTANCE(GPIOx));

    return (GPIOx->INT_STATUS);
}

/** @} */

#endif

/** @} */

/** @} */
