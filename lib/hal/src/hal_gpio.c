/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018 Rockchip Electronic Co.,Ltd
 */

#include "hal_base.h"

#ifdef HAL_GPIO_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/
const uint32_t GPIO_GROUP[3] = {
    GPIO0_BASE,
    GPIO1_BASE,
    GPIO2_BASE,
};

#define GPIO_PORT(n) ((struct GPIO_REG *)(GPIO_GROUP[n]))

/********************* Private Structure Definition **************************/
/********************* Private Variable Definition ***************************/
/********************* Private Function Definition ***************************/
/********************* Public Function Definition ****************************/

/**
 * @brief  Set gpio pin direction.
 * @param  gpioPort: gpio channel.
 * @param  gpioPinNum: gpio pin num.
 * @param  direction: gpio direction.
 * @return None.
 */
void HAL_GPIO_SetPinDirection(eGPIO_CHANNEL gpioPort, eGPIOPinNum gpioPinNum,
                              eGPIOPinDirection direction)
{
    uint8_t pin;
    struct GPIO_REG *pgpio;

    pgpio = GPIO_PORT(gpioPort);

    pin = gpioPinNum % 32;

    if (direction) {
        pgpio->GPIO_SWPORT_DDR |= (1 << pin);
    } else {
        pgpio->GPIO_SWPORT_DDR &= ~(1 << pin);
    }
}

/**
 * @brief  Get gpio pin direction.
 * @param  gpioPort: gpio channel.
 * @param  gpioPinNum: gpio pin num.
 * @return uint8_t: direction; value 1 for output, 0 for input.
 */
uint8_t HAL_GPIO_GetPinDirection(eGPIO_CHANNEL gpioPort, eGPIOPinNum gpioPinNum)
{
    uint8_t pin;
    struct GPIO_REG *pgpio;

    pgpio = GPIO_PORT(gpioPort);

    pin = gpioPinNum % 32;

    return (((pgpio->GPIO_SWPORT_DDR) & (0x1 << pin)) >> pin);
}

/**
 * @brief  Set gpio pin voltage.
 * @param  gpioPort: gpio channel.
 * @param  gpioPinNum: gpio pin num.
 * @param  level: voltage.
 * @return None.
 */
void HAL_GPIO_SetPinLevel(eGPIO_CHANNEL gpioPort, eGPIOPinNum gpioPinNum,
                          eGPIOPinLevel level)
{
    uint8_t pin;
    struct GPIO_REG *pgpio;

    pgpio = GPIO_PORT(gpioPort);

    pin = gpioPinNum % 32;

    if (level) {
        pgpio->GPIO_SWPORT_DR |= (1 << pin);
    } else {
        pgpio->GPIO_SWPORT_DR &= ~(1 << pin);
    }
}

/**
 * @brief  Get gpio pin voltage.
 * @param  gpioPort: gpio channel.
 * @param  gpioPinNum: gpio pin num.
 * @return uint8_t: voltage level; value 1 for high voltage, 0 for low voltage.
 */
uint8_t HAL_GPIO_GetPinLevel(eGPIO_CHANNEL gpioPort, eGPIOPinNum gpioPinNum)
{
    uint8_t pin;
    struct GPIO_REG *pgpio;

    pgpio = GPIO_PORT(gpioPort);

    pin = gpioPinNum % 32;

    return (((pgpio->GPIO_EXT_PORT) & (0x1 << pin)) >> pin);
}

#endif
