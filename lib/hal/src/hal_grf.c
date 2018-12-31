/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018 Rockchip Electronic Co.,Ltd
 */

/**
 * @file  hal_grf.c
 */

#include "hal_base.h"

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

#ifdef HAL_GRF_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/

/********************* Private Structure Definition **************************/

static struct GRF_REG *pGRF = (struct GRF_REG *)(GRF_BASE);

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

/********************* Public Function Definition ****************************/

/** @defgroup GRF GRF
 *  This is GRF Driver
 *  @{
 */

/**
 * @brief  GRF GPIO IOMUX.
 * @param  gpioPort: gpio port.
 * @param  gpioPinNum: gpio pin num.
 * @param  data: iomux value.
 * @return None.
 */
void HAL_GRF_GPIOMuxSet(eGPIO_CHANNEL gpioPort, eGPIOPinNum gpioPinNum,
                        uint32_t data)
{
    uint8_t Group;
    uint8_t pin;

    if (gpioPort >= GPIO_CH_MAX)
        return;

    Group = gpioPinNum / 8;
    pin = gpioPinNum % 8;

    if (gpioPort == GPIO_CH0) {
        pGRF->GPIO_IO0MUX[Group] = ((0x00030000ul + data) << (pin << 0x01ul));
    } else if (gpioPort == GPIO_CH1) {
        pGRF->GPIO_IO1MUX[Group] = ((0x00030000ul + data) << (pin << 0x01ul));
    } else {
        pGRF->GPIO_IO2MUX[Group] = ((0x00030000ul + data) << (pin << 0x01ul));
    }
}

#endif

/** @} */

/** @} */
