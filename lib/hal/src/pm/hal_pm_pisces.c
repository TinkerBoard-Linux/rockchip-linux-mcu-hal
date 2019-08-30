/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup PM
 *  @{
 */

/** @defgroup PM_How_To_Use How To Use
 *  @{

 The PM driver can be used as follows:

 - Invoke HAL_SYS_Suspend() when system will enter suspend.

 @} */

#include "hal_base.h"

#if defined(RKMCU_PISCES)

/********************* Private MACRO Definition ******************************/
/* for pm_runtime */
#define EXPONENT_OF_FRAC_PLL 24
#define RK_PLL_MODE_SLOW     0
#define RK_PLL_MODE_NORMAL   1
#define RK_PLL_MODE_DEEP     2

#define PLL_POSTDIV1_SHIFT 12
#define PLL_POSTDIV1_MASK  0x7 << PLL_POSTDIV1_SHIFT
#define PLL_POSTDIV2_SHIFT 12
#define PLL_POSTDIV2_MASK  0x7 << PLL_POSTDIV2_SHIFT

#define PLL_GET_POSTDIV1(x) \
        (((uint32_t)(x) & (PLL_POSTDIV1_MASK)) >> PLL_POSTDIV1_SHIFT)
#define PLL_GET_POSTDIV2(x) \
    (((uint32_t)(x) & (PLL_POSTDIV2_MASK)) >> PLL_POSTDIV2_SHIFT)
#define UART_CLK_GET_MUX(clk) HAL_CRU_ClkGetMux(CLK_GET_MUX((clk)))
#define GPLL_RUNTIME_RATE     (PLL_INPUT_OSC_RATE * 2)

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/
#ifdef HAL_PM_RUNTIME_MODULE_ENABLED
static uint32_t PM_GetPllPostDivEven(uint32_t rateIn, uint32_t rateOut, uint32_t *postDiv1, uint32_t *postDiv2)
{
    uint32_t div1, div2, div;

    div = rateIn / rateOut;
    if (div < 7) {
        *postDiv1 = div;
        *postDiv2 = 1;

        return 0;
    }

    for (div2 = 2; div2 <= 6;) {
        div1 = div / div2;
        if (div1 <= 7) {
            break;
        }
        div2 += 2;
    }
    if (div1 < div2)
        return 2;

    *postDiv1 = div1;
    *postDiv2 = div2;

    if ((div1 * div2) != div)
        return 1;
    else
        return 0;
}
#endif

#ifdef HAL_PM_CPU_SLEEP_MODULE_ENABLED
static int SOC_SuspendEnter(uint32_t flag)
{
    HAL_DCACHE_CleanInvalidate();
    HAL_DCACHE_Disable();
    __WFI();

    return HAL_OK;
}
#endif

/** @defgroup PM_Exported_Functions_Group5 Other Functions
 *  @{
 */

#ifdef HAL_PM_RUNTIME_MODULE_ENABLED
static uint32_t PM_RuntimeEnter(ePM_RUNTIME_idleMode idleMode)
{
    uint32_t gpllCon1, gpllDiv2, gpllDiv2New;
    uint32_t gpllCon0 = 0, gpllDiv1, gpllDiv1New;
    uint32_t clkSelCon33, clkSelCon2;
    uint32_t cruMode;
    uint32_t gpllRate, gpllRateNew;
    uint32_t m4Rate, m4Div;

    const struct PM_RUNTIME_INFO *pdata = HAL_PM_RuntimeGetData();

    if (PM_DISPLAY_REQUESTED(pdata)) {
        return HAL_BIT(PM_RUNTIME_TYPE_DISPLAY);
    }

    if (PM_UART_REQUESTED(pdata)) {
        if ((PM_UART_REQUESTED(pdata) & HAL_BIT(0)) &&
            (UART_CLK_GET_MUX(CLK_UART0) != SCLK_UART0_SEL_XIN_OSC0_FUNC)) {
            return HAL_BIT(PM_RUNTIME_TYPE_UART);
        } else if ((PM_UART_REQUESTED(pdata) & HAL_BIT(1)) &&
                   (UART_CLK_GET_MUX(CLK_UART1) != SCLK_UART1_SEL_XIN_OSC0_FUNC)) {
            return HAL_BIT(PM_RUNTIME_TYPE_UART);
        }
    }

    if (PM_I2C_REQUESTED(pdata)) {
        return HAL_BIT(PM_RUNTIME_TYPE_I2C);
    }

    if (idleMode == PM_RUNTIME_IDLE_DEEP) {
        cruMode = CRU->CRU_MODE_CON00 |
                  MASK_TO_WE(CRU_CRU_MODE_CON00_CLK_GPLL_MODE_MASK);
        gpllCon1 = CRU->GPLL_CON[1] |
                   MASK_TO_WE(CRU_GPLL_CON1_PLLPD0_MASK);

        clkSelCon33 = CRU->CRU_CLKSEL_CON[33] |
                      MASK_TO_WE(CRU_CRU_CLKSEL_CON33_HCLK_M4_DIV_MASK);
        clkSelCon2 = CRU->CRU_CLKSEL_CON[33] |
                     MASK_TO_WE(CRU_CRU_CLKSEL_CON02_SCLK_SHRM_DIV_MASK);

        HAL_SYSTICK_CLKSourceConfig(HAL_TICK_CLKSRC_CORE);

        CRU->CRU_MODE_CON00 =
            VAL_MASK_WE(CRU_CRU_MODE_CON00_CLK_GPLL_MODE_MASK,
                        RK_PLL_MODE_SLOW << CRU_CRU_MODE_CON00_CLK_GPLL_MODE_SHIFT);

        CRU->CRU_CLKSEL_CON[33] =
            VAL_MASK_WE(CRU_CRU_CLKSEL_CON33_HCLK_M4_DIV_MASK, 0);
        CRU->CRU_CLKSEL_CON[2] =
            VAL_MASK_WE(CRU_CRU_CLKSEL_CON02_SCLK_SHRM_DIV_MASK, 0);

        HAL_ASSERT(!(CRU->GPLL_CON[1] & CRU_GPLL_CON1_PLLPD0_MASK));
        HAL_ASSERT(!(CRU->GPLL_CON[1] & CRU_GPLL_CON1_PLLPDSEL_SHIFT));

        CRU->GPLL_CON[1] = VAL_MASK_WE(CRU_GPLL_CON1_PLLPD0_MASK,
                                       CRU_GPLL_CON1_PLLPD0_MASK);
    } else if (idleMode == PM_RUNTIME_IDLE_DEEP1) {
        gpllCon1 = 0;
        m4Rate = HAL_CRU_ClkGetFreq(HCLK_M4);
        gpllRate = HAL_CRU_ClkGetFreq(PLL_GPLL);

        gpllCon0 = CRU->GPLL_CON[0] | MASK_TO_WE(CRU_GPLL_CON0_POSTDIV1_MASK);
        gpllDiv1New = 6;

        HAL_ASSERT(PLL_GET_POSTDIV1(gpllCon0) == 1);

        if ((m4Rate / gpllDiv1New) < (PLL_INPUT_OSC_RATE * 2)) {
            m4Div = (gpllRate / gpllDiv1New) / (PLL_INPUT_OSC_RATE * 2);
            HAL_ASSERT((gpllRate / (gpllDiv1New * m4Div)) > (PLL_INPUT_OSC_RATE * 2));
            if (m4Div != HAL_CRU_ClkGetDiv(CLK_GET_DIV(HCLK_M4)))
                clkSelCon33 = CRU->CRU_CLKSEL_CON[33] |
                              MASK_TO_WE(CRU_CRU_CLKSEL_CON33_HCLK_M4_DIV_MASK);
            else
                clkSelCon33 = 0;
        } else {
            clkSelCon33 = 0;
        }

        CRU->GPLL_CON[0] = VAL_MASK_WE(CRU_GPLL_CON0_POSTDIV1_MASK,
                                       gpllDiv1New << CRU_GPLL_CON0_POSTDIV1_SHIFT);
        if (clkSelCon33)
            CRU->CRU_CLKSEL_CON[33] = VAL_MASK_WE(CRU_CRU_CLKSEL_CON33_HCLK_M4_DIV_MASK,
                                                  m4Div << CRU_CRU_CLKSEL_CON33_HCLK_M4_DIV_SHIFT);
    } else if (idleMode == PM_RUNTIME_IDLE_NORMAL) {
        m4Rate = HAL_CRU_ClkGetFreq(HCLK_M4);
        HAL_ASSERT(HAL_CRU_ClkGetDiv(m4Rate > GPLL_RUNTIME_RATE));
        gpllRate = HAL_CRU_ClkGetFreq(PLL_GPLL);

        gpllCon1 = CRU->GPLL_CON[1] |
                   MASK_TO_WE(CRU_GPLL_CON1_POSTDIV2_MASK);
        gpllCon0 = CRU->GPLL_CON[0] |
                   MASK_TO_WE(CRU_GPLL_CON0_POSTDIV1_MASK);

        gpllDiv1 = PLL_GET_POSTDIV1(gpllCon0);
        gpllDiv2 = PLL_GET_POSTDIV2(gpllCon1);

        gpllRate = (gpllRate * gpllDiv1 * gpllDiv2);

        if (PM_GetPllPostDivEven(gpllRate, GPLL_RUNTIME_RATE, &gpllDiv1New, &gpllDiv2New) >= 2)
            return UINT32_MAX;

        gpllRateNew = gpllRate / (gpllDiv1New * gpllDiv2New);
        m4Div = gpllRateNew / GPLL_RUNTIME_RATE;

        HAL_ASSERT((gpllRateNew * m4Div) >= GPLL_RUNTIME_RATE);
        HAL_ASSERT(m4Div > 0);

        clkSelCon33 = CRU->CRU_CLKSEL_CON[33] |
                      MASK_TO_WE(CRU_CRU_CLKSEL_CON33_HCLK_M4_DIV_MASK);

        CRU->GPLL_CON[0] = VAL_MASK_WE(CRU_GPLL_CON0_POSTDIV1_MASK,
                                       gpllDiv1New << CRU_GPLL_CON0_POSTDIV1_SHIFT);

        CRU->GPLL_CON[1] = VAL_MASK_WE(CRU_GPLL_CON1_POSTDIV2_MASK,
                                       gpllDiv2New << CRU_GPLL_CON1_POSTDIV2_SHIFT);

        CRU->CRU_CLKSEL_CON[33] = VAL_MASK_WE(CRU_CRU_CLKSEL_CON33_HCLK_M4_DIV_MASK,
                                              (m4Div - 1) << CRU_CRU_CLKSEL_CON33_HCLK_M4_DIV_SHIFT);
    } else {
        return UINT32_MAX;
    }

    __DSB();
    __WFI();

    if (idleMode == PM_RUNTIME_IDLE_DEEP) {
        CRU->GPLL_CON[1] = gpllCon1;
        CRU->CRU_CLKSEL_CON[33] = clkSelCon33;
        CRU->CRU_CLKSEL_CON[2] = clkSelCon2;

        while ((CRU->GPLL_CON[1] & CRU_CPLL_CON1_PLL_LOCK_MASK) !=
               CRU_CPLL_CON1_PLL_LOCK_MASK)
            ;
        CRU->CRU_MODE_CON00 = cruMode;

        HAL_SYSTICK_CLKSourceConfig(HAL_TICK_CLKSRC_EXT);
    } else if (idleMode == PM_RUNTIME_IDLE_DEEP1) {
        CRU->CRU_CLKSEL_CON[33] = clkSelCon33;
        CRU->GPLL_CON[0] = gpllCon0;
    } else if (idleMode == PM_RUNTIME_IDLE_NORMAL) {
        CRU->CRU_CLKSEL_CON[33] = clkSelCon33;
        CRU->GPLL_CON[1] = gpllCon1;
        CRU->GPLL_CON[0] = gpllCon0;
    }

    return 0;
}

uint32_t HAL_PM_RuntimeEnter(ePM_RUNTIME_idleMode idleMode)
{
    uint32_t ret;

    if (idleMode)
        ret = PM_RuntimeEnter(idleMode);
    else
        ret = UINT32_MAX;

    if (!idleMode || ret) {
        __DSB();
        __WFI();
    }

    return UINT32_MAX;
}

#endif

#ifdef HAL_PM_SLEEP_MODULE_ENABLED
int HAL_SYS_Suspend(uint32_t flag)
{
#ifdef HAL_PM_CPU_SLEEP_MODULE_ENABLED
    HAL_NVIC_SuspendSave();
    HAL_CPU_SuspendEnter(flag, SOC_SuspendEnter);
    HAL_DCACHE_Enable();
    HAL_NVIC_ResumeRestore();
#endif

    return HAL_OK;
}
#endif

/** @} */

#endif

/** @} */

/** @} */