/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2023 Rockchip Electronics Co., Ltd.
 */

#include "hal_base.h"

#ifdef HAL_INTMUX_MODULE_ENABLED

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup INTMUX
 *  @{
 */

/** @defgroup INTMUX_How_To_Use How To Use
 *  @{

 The INTMUX implement can be used as follows:
 - Invoke HAL_INTMUX_EnableIRQ() to enable irq.
 - Invoke HAL_INTMUX_DisableIRQ() to disable irq.
 - Invoke HAL_INTMUX_SetIRQHandler() to set handler for intmux irq.
 - Invoke HAL_INTMUX_Init() to init intmux.

 Use HAL_INTMUX_CUSTOM_DISTRIBUTION_FEATURE_ENABLED to add custom interrupt
 distribution policy. Please define variable g_intmuxFastIrqTable.

 @} */

/** @defgroup INTMUX_Private_Definition Private Definition
 *  @{
 */
/********************* Private MACRO Definition ******************************/
#define _TO_INTMUX_NUM(n)   (n - INTMUX_IRQ_START_NUM - NUM_INTERRUPTS)
#define _TO_INTMUX_GROUP(n) (_TO_INTMUX_NUM(n) / INTMUX_NUM_INT_PER_GROUP)
#define _TO_INTMUX_BIT(n)   (_TO_INTMUX_NUM(n) % INTMUX_NUM_INT_PER_GROUP)
#define _TO_INTMUX_OUT(n)   ((_TO_INTMUX_NUM(n) / INTMUX_NUM_INT_PER_OUT) + \
                            INTMUX_OUT_IRQ_START_NUM)

/********************* Private Structure Definition **************************/
struct HAL_INTMUX_HANDLER_CTRL {
    HAL_INTMUX_HANDLER handler;
    void *args;
};

/********************* Private Variable Definition ***************************/
static struct HAL_INTMUX_HANDLER_CTRL s_intmuxHandler[NUM_EXT_INTERRUPTS];

/********************* Private Function Definition ***************************/

/** @} */

/********************* Public Function Definition ****************************/

/** @defgroup INTMUX_Exported_Functions_Group5 Other Functions
 *  @{
 */

/**
 * @brief  Enable intmux irq.
 * @param  irq number
 * @return HAL_Status.
 */
HAL_Status HAL_INTMUX_EnableIRQ(uint32_t irq)
{
    uint32_t irqGroup, irqBit;

    HAL_ASSERT(irq < TOTAL_INTERRUPTS);
    irqGroup = _TO_INTMUX_GROUP(irq);
    irqBit = _TO_INTMUX_BIT(irq);
    INTMUX->INT_ENABLE_GROUP[irqGroup] |= 0x1U << irqBit;

    return HAL_OK;
}

/**
 * @brief  Disable intmux irq.
 * @param  irq number
 * @return HAL_Status.
 */
HAL_Status HAL_INTMUX_DisableIRQ(uint32_t irq)
{
    uint32_t irqGroup, irqBit;

    HAL_ASSERT(irq < TOTAL_INTERRUPTS);
    irqGroup = _TO_INTMUX_GROUP(irq);
    irqBit = _TO_INTMUX_BIT(irq);
    INTMUX->INT_ENABLE_GROUP[irqGroup] &= ~(0x1U << irqBit);

    return HAL_OK;
}

#ifdef HAL_INTMUX_CUSTOM_DISTRIBUTION_FEATURE_ENABLED
static void INTMUX_Dispatch(uint32_t irqOut)
{
    uint32_t irqn, groupFlag;
    int i, j;
    int fastGroup, fastBit;
    bool fastHit = false;

    for (i = 0; g_intmuxFastIrqTable[i] != 0; i++) {
        if (_TO_INTMUX_OUT(g_intmuxFastIrqTable[i]) == irqOut) {
            fastGroup = _TO_INTMUX_GROUP(g_intmuxFastIrqTable[i]);
            fastBit = _TO_INTMUX_BIT(g_intmuxFastIrqTable[i]);
            if (INTMUX->INT_FLAG_GROUP[fastGroup] & HAL_BIT(fastBit)) {
                irqn = fastGroup * INTMUX_NUM_INT_PER_GROUP + fastBit;
                if (s_intmuxHandler[irqn].handler) {
                    s_intmuxHandler[irqn].handler(irqn, s_intmuxHandler[irqn].args);
                }
                fastHit = true;
            }
        }
    }

    if (fastHit == false) {
        for (i = irqOut * INTMUX_NUM_GROUP_PER_OUT; i < (irqOut + 1) * INTMUX_NUM_GROUP_PER_OUT; i++) {
            groupFlag = INTMUX->INT_FLAG_GROUP[i];
            if (groupFlag) {
                for (j = 0; j < INTMUX_NUM_INT_PER_GROUP; j++) {
                    if (groupFlag & HAL_BIT(j)) {
                        irqn = i * INTMUX_NUM_INT_PER_GROUP + j;
                        if (s_intmuxHandler[irqn].handler) {
                            s_intmuxHandler[irqn].handler(irqn, s_intmuxHandler[irqn].args);
                        }
                        break;
                    }
                }
                break;
            }
        }
    }
}
#else
static void INTMUX_Dispatch(uint32_t irqOut)
{
    uint32_t irqn, groupFlag;
    int i, j;

    for (i = irqOut * INTMUX_NUM_GROUP_PER_OUT; i < (irqOut + 1) * INTMUX_NUM_GROUP_PER_OUT; i++) {
        groupFlag = INTMUX->INT_FLAG_GROUP[i];
        if (groupFlag) {
            for (j = 0; j < INTMUX_NUM_INT_PER_GROUP; j++) {
                if (groupFlag & HAL_BIT(j)) {
                    irqn = i * INTMUX_NUM_INT_PER_GROUP + j;
                    if (s_intmuxHandler[irqn].handler) {
                        s_intmuxHandler[irqn].handler(irqn, s_intmuxHandler[irqn].args);
                    }
                }
            }
        }
    }
}
#endif

#ifdef INTMUX_IRQ_OUT0
static void HAL_INTMUX_OUT0_Handler(void)
{
    INTMUX_Dispatch(0);
}
#endif
#ifdef INTMUX_IRQ_OUT1
static void HAL_INTMUX_OUT1_Handler(void)
{
    INTMUX_Dispatch(1);
}
#endif
#ifdef INTMUX_IRQ_OUT2
static void HAL_INTMUX_OUT2_Handler(void)
{
    INTMUX_Dispatch(2);
}
#endif
#ifdef INTMUX_IRQ_OUT3
static void HAL_INTMUX_OUT3_Handler(void)
{
    INTMUX_Dispatch(3);
}
#endif

/**
 * @brief  Set handler for intmux irq
 * @param  irq: irq id.
 * @param  handler: handler callback
 * @param  args: private parameters
 * @return HAL_Status.
 */
HAL_Status HAL_INTMUX_SetIRQHandler(uint32_t irq, HAL_INTMUX_HANDLER handler, void *args)
{
    uint32_t irqn;

    HAL_ASSERT(irq < TOTAL_INTERRUPTS);
    HAL_ASSERT(handler);

    irqn = _TO_INTMUX_NUM(irq);
    s_intmuxHandler[irqn].handler = handler;
    s_intmuxHandler[irqn].args = args;

    return HAL_OK;
}

/**
 * @brief  Init intmux
 * @return HAL_Status.
 */
HAL_Status HAL_INTMUX_Init(void)
{
#ifdef HAL_NVIC_MODULE_ENABLED
#ifdef INTMUX_IRQ_OUT0
    HAL_NVIC_SetIRQHandler(INTMUX_OUT0_IRQn, HAL_INTMUX_OUT0_Handler);
    HAL_NVIC_EnableIRQ(INTMUX_OUT0_IRQn);
#endif
#ifdef INTMUX_IRQ_OUT1
    HAL_NVIC_SetIRQHandler(INTMUX_OUT1_IRQn, HAL_INTMUX_OUT1_Handler);
    HAL_NVIC_EnableIRQ(INTMUX_OUT1_IRQn);
#endif
#ifdef INTMUX_IRQ_OUT2
    HAL_NVIC_SetIRQHandler(INTMUX_OUT2_IRQn, HAL_INTMUX_OUT2_Handler);
    HAL_NVIC_EnableIRQ(INTMUX_OUT2_IRQn);
#endif
#ifdef INTMUX_IRQ_OUT3
    HAL_NVIC_SetIRQHandler(INTMUX_OUT3_IRQn, HAL_INTMUX_OUT3_Handler);
    HAL_NVIC_EnableIRQ(INTMUX_OUT3_IRQn);
#endif
#endif

    return HAL_OK;
}

/** @} */

/** @} */

/** @} */
#endif /* HAL_INTMUX_MODULE_ENABLED */