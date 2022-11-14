/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2022 Rockchip Electronics Co., Ltd.
 */

#include "hal_bsp.h"
#include "hal_base.h"
#include <stdlib.h>

/********************* Private MACRO Definition ******************************/
//#define SOFTIRQ_TEST
//#define GPIO_TEST

/********************* Private Structure Definition **************************/

static struct GIC_AMP_IRQ_INIT_CFG irqsConfig[] = {
    /* The priority higher than 0x80 is non-secure interrupt. */

#ifdef GPIO_TEST
    GIC_AMP_IRQ_CFG_ROUTE(GPIO3_IRQn, 0xd0, CPU_GET_AFFINITY(0, 0)),
#endif

#ifdef SOFTIRQ_TEST
    GIC_AMP_IRQ_CFG_ROUTE(RSVD0_IRQn, 0xd0, CPU_GET_AFFINITY(0, 0)),
#endif

    GIC_AMP_IRQ_CFG_ROUTE(0, 0, CPU_GET_AFFINITY(1, 0)),   /* sentinel */
};

static struct GIC_IRQ_AMP_CTRL irqConfig = {
    .cpuAff = CPU_GET_AFFINITY(1, 0),
    .defPrio = 0xd0,
    .defRouteAff = CPU_GET_AFFINITY(1, 0),
    .irqsCfg = &irqsConfig[0],
};

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

/************************************************/
/*                                              */
/*                 HW Borad config              */
/*                                              */
/************************************************/

/* TODO: Set Module IOMUX Function Here */

/************************************************/
/*                                              */
/*                  GPIO_TEST                   */
/*                                              */
/************************************************/
#ifdef GPIO_TEST
static void gpio3_isr(int vector, void *param)
{
    HAL_GPIO_IRQHandler(GPIO3, GPIO_BANK3);
}

static HAL_Status b2_call_back(eGPIO_bankId bank, uint32_t pin, void *args)
{
    printf("GPIOB2 callback!\n");

    return HAL_OK;
}

static HAL_Status c0_call_back(eGPIO_bankId bank, uint32_t pin, void *args)
{
    printf("GPIOC0 callback!\n");

    return HAL_OK;
}

static void gpio_test(void)
{
    uint32_t level1, level2;

    /* Test GPIO pull */
    printf("test_gpio pull UP\n");
    HAL_PINCTRL_SetParam(GPIO_BANK3,
                         GPIO_PIN_B2 |
                         GPIO_PIN_C0,
                         PIN_CONFIG_MUX_FUNC0 |
                         PIN_CONFIG_PUL_UP);
    printf("GPIO3B_P: %p = 0x%lx\n", &VCCIO3_5_IOC->GPIO3B_P, VCCIO3_5_IOC->GPIO3B_P);
    printf("GPIO3C_P: %p = 0x%lx\n", &VCCIO3_5_IOC->GPIO3C_P, VCCIO3_5_IOC->GPIO3C_P);
    HAL_DelayMs(3000);
    printf("test_gpio pull DOWN\n");
    HAL_PINCTRL_SetParam(GPIO_BANK3,
                         GPIO_PIN_B2 |
                         GPIO_PIN_C0,
                         PIN_CONFIG_MUX_FUNC0 |
                         PIN_CONFIG_PUL_DOWN);
    HAL_DelayMs(3000);
    printf("GPIO3B_P: %p = 0x%lx\n", &VCCIO3_5_IOC->GPIO3B_P, VCCIO3_5_IOC->GPIO3B_P);
    printf("GPIO3C_P: %p = 0x%lx\n", &VCCIO3_5_IOC->GPIO3C_P, VCCIO3_5_IOC->GPIO3C_P);

    /* Test GPIO output */
    HAL_GPIO_SetPinDirection(GPIO3, GPIO_PIN_B2, GPIO_OUT);
    HAL_GPIO_SetPinDirection(GPIO3, GPIO_PIN_C0, GPIO_OUT);
    level1 = HAL_GPIO_GetPinLevel(GPIO3, GPIO_PIN_B2);
    level2 = HAL_GPIO_GetPinLevel(GPIO3, GPIO_PIN_C0);
    printf("test_gpio 3b2 level = %ld\n", level1);
    printf("test_gpio 3c0 level = %ld\n", level2);
    HAL_DelayMs(3000);
    HAL_GPIO_SetPinLevel(GPIO3, GPIO_PIN_B2, GPIO_HIGH);
    HAL_GPIO_SetPinLevel(GPIO3, GPIO_PIN_C0, GPIO_HIGH);
    level1 = HAL_GPIO_GetPinLevel(GPIO3, GPIO_PIN_B2);
    level2 = HAL_GPIO_GetPinLevel(GPIO3, GPIO_PIN_C0);
    printf("test_gpio 3b2 output high level = %ld\n", level1);
    printf("test_gpio 3c0 output high level = %ld\n", level2);
    HAL_DelayMs(3000);
    HAL_GPIO_SetPinLevel(GPIO3, GPIO_PIN_B2, GPIO_LOW);
    HAL_GPIO_SetPinLevel(GPIO3, GPIO_PIN_C0, GPIO_LOW);
    level1 = HAL_GPIO_GetPinLevel(GPIO3, GPIO_PIN_B2);
    level2 = HAL_GPIO_GetPinLevel(GPIO3, GPIO_PIN_C0);
    printf("test_gpio 3b2 output low level = %ld\n", level1);
    printf("test_gpio 3c0 output low level = %ld\n", level2);
    HAL_DelayMs(3000);

    /* Test GPIO interrupt */
    HAL_PINCTRL_SetParam(GPIO_BANK3,
                         GPIO_PIN_B2 |
                         GPIO_PIN_C0,
                         PIN_CONFIG_MUX_FUNC0 |
                         PIN_CONFIG_PUL_UP);
    HAL_GPIO_SetPinDirection(GPIO3, GPIO_PIN_B2, GPIO_IN);
    HAL_GPIO_SetPinDirection(GPIO3, GPIO_PIN_C0, GPIO_IN);
    HAL_IRQ_HANDLER_SetIRQHandler(GPIO3_IRQn, gpio3_isr, NULL);
    HAL_IRQ_HANDLER_SetGpioIRQHandler(GPIO_BANK3, GPIO_PIN_B2, b2_call_back, NULL);
    HAL_IRQ_HANDLER_SetGpioIRQHandler(GPIO_BANK3, GPIO_PIN_C0, c0_call_back, NULL);
    HAL_GIC_Enable(GPIO3_IRQn);
    HAL_GPIO_SetIntType(GPIO3, GPIO_PIN_B2, GPIO_INT_TYPE_EDGE_FALLING);
    HAL_GPIO_SetIntType(GPIO3, GPIO_PIN_C0, GPIO_INT_TYPE_EDGE_FALLING);
    HAL_GPIO_EnableIRQ(GPIO3, GPIO_PIN_B2);
    HAL_GPIO_EnableIRQ(GPIO3, GPIO_PIN_C0);
    printf("test_gpio interrupt ready\n");
}
#endif

/************************************************/
/*                                              */
/*                SOFTIRQ_TEST                  */
/*                                              */
/************************************************/
#ifdef SOFTIRQ_TEST
static void soft_isr(int vector, void *param)
{
    printf("soft_isr, vector = %d\n", vector);
    HAL_GIC_EndOfInterrupt(vector);
}

static void softirq_test(void)
{
    printf("softirq_test:\n");
    HAL_IRQ_HANDLER_SetIRQHandler(RSVD0_IRQn, soft_isr, NULL);
    HAL_GIC_Enable(RSVD0_IRQn);

    HAL_GIC_SetPending(RSVD0_IRQn);
    HAL_DelayMs(2000);
    HAL_GIC_SetPending(RSVD0_IRQn);
}
#endif

/********************* Public Function Definition ****************************/

void TEST_DEMO_GIC_Init(void)
{
    HAL_GIC_Init(&irqConfig);
}

void test_demo(void)
{
#if defined(GPIO_TEST) && defined(CPU0)
    gpio_test();
#endif

#if defined(SOFTIRQ_TEST) && defined(CPU0)
    softirq_test();
#endif
}
