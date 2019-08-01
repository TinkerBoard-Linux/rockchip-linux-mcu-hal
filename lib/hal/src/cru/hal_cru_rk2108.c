/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

#include "hal_base.h"

#if defined(RKMCU_RK2108) && defined(HAL_CRU_MODULE_ENABLED)

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup CRU
 *  @{
 */

/********************* Private MACRO Definition ******************************/
#define DCLK_LCDC_PLL_LIMIT_FREQ 800 * 1000000

/********************* Private Structure Definition **************************/

static struct PLL_CONFIG PLL_TABLE[] = {
    /* _mhz, _refDiv, _fbDiv, _postdDv1, _postDiv2, _dsmpd, _frac */
    RK_PLL_RATE(1188000000, 2, 99, 1, 1, 1, 0),
    RK_PLL_RATE(600000000, 3, 75, 1, 1, 1, 0),
    { /* sentinel */ },
};

static uint32_t s_gpllFreq;
static uint32_t s_cpllFreq;

static struct PLL_SETUP GPLL = {
    .conOffset0 = &(CRU->GPLL_CON[0]),
    .conOffset1 = &(CRU->GPLL_CON[1]),
    .conOffset2 = &(CRU->GPLL_CON[2]),
    .modeOffset = &(CRU->CRU_MODE_CON00),
    .modeShift = 0,
    .lockShift = 10,
    .modeMask = 0x3 << 0,
    .rateTable = PLL_TABLE,
};

static struct PLL_SETUP CPLL = {
    .conOffset0 = &(CRU->CPLL_CON[0]),
    .conOffset1 = &(CRU->CPLL_CON[1]),
    .conOffset2 = &(CRU->CPLL_CON[2]),
    .modeOffset = &(CRU->CRU_MODE_CON00),
    .modeShift = 2,
    .lockShift = 10,
    .modeMask = 0x3 << 2,
    .rateTable = PLL_TABLE,
};
/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

/********************* Public Function Definition ****************************/

/** @defgroup CRU_Exported_Functions_Group5 Other Functions
 *  @{
 */

/**
 * @brief Get frac clk freq.
 * @param  clockName: CLOCK_Name id
 * @return clk rate.
 * How to calculate the Frac clk divider:
 *     numerator is frac register[31:16]
 *     denominator is frac register[15:0]
 *     clk rate = pRate * numerator / denominator
 *     for a better jitter, pRate > 20 * rate
 */
uint32_t HAL_CRU_ClkFracGetFreq(eCLOCK_Name clockName)
{
    uint32_t freq = 0;
    uint32_t muxSrc, mux = CLK_GET_MUX(clockName);
    uint32_t divSrc, divFrac;
    uint32_t n, m, pRate;

    switch (clockName) {
    case CLK_UART0:
        muxSrc = CLK_GET_MUX(CLK_UART0_SRC);
        divSrc = CLK_GET_DIV(CLK_UART0_SRC);
        divFrac = CLK_GET_DIV(CLK_UART0_FRAC);
        break;
    case CLK_UART1:
        muxSrc = CLK_GET_MUX(CLK_UART1_SRC);
        divSrc = CLK_GET_DIV(CLK_UART1_SRC);
        divFrac = CLK_GET_DIV(CLK_UART1_FRAC);
        break;
    case CLK_UART2:
        muxSrc = CLK_GET_MUX(CLK_UART2_SRC);
        divSrc = CLK_GET_DIV(CLK_UART2_SRC);
        divFrac = CLK_GET_DIV(CLK_UART2_FRAC);
        break;
    case I2S_MCLKOUT:
        muxSrc = CLK_GET_MUX(CLK_I2S8CH_SRC);
        divSrc = CLK_GET_DIV(CLK_I2S8CH_SRC);
        divFrac = CLK_GET_DIV(CLK_I2S8CH_FRAC);
        mux = CLK_GET_MUX(MCLK_I2S8CH);
        break;
    case I2S1_MCLKOUT:
        muxSrc = CLK_GET_MUX(CLK_I2S1_8CH_SRC);
        divSrc = CLK_GET_DIV(CLK_I2S1_8CH_SRC);
        divFrac = CLK_GET_DIV(CLK_I2S1_8CH_FRAC);
        mux = CLK_GET_MUX(MCLK_I2S1_8CH);
        break;
    case CLK_AUDPWM:
        muxSrc = CLK_GET_MUX(CLK_AUDPWM_SRC);
        divSrc = CLK_GET_DIV(CLK_AUDPWM_SRC);
        divFrac = CLK_GET_DIV(CLK_AUDPWM_FRAC);
        break;
    case CLK_32K:
        divFrac = CLK_GET_DIV(CLK_32K);
        break;
    default:

        return HAL_INVAL;
    }

    n = (CRU->CRU_CLKSEL_CON[CLK_DIV_GET_REG_OFFSET(divFrac)] & 0xffff0000) >> 16;
    m = CRU->CRU_CLKSEL_CON[CLK_DIV_GET_REG_OFFSET(divFrac)] & 0x0000ffff;

    switch (clockName) {
    case CLK_32K:
        pRate = PLL_INPUT_OSC_RATE;
        freq = (pRate / m) * n;
        break;
    case CLK_AUDPWM:
        if (HAL_CRU_ClkGetMux(mux) == 0)
            freq = s_gpllFreq / HAL_CRU_ClkGetDiv(divSrc);
        else if (HAL_CRU_ClkGetMux(mux) == 1)
            freq = (s_gpllFreq / m) * n;
        break;
    default:
        if (HAL_CRU_ClkGetMux(muxSrc))
            pRate = s_cpllFreq / HAL_CRU_ClkGetDiv(divSrc);
        else
            pRate = s_gpllFreq / HAL_CRU_ClkGetDiv(divSrc);

        if (HAL_CRU_ClkGetMux(mux) == 0)
            freq = pRate;
        else if (HAL_CRU_ClkGetMux(mux) == 1)
            freq = (pRate / m) * n;
        else if (HAL_CRU_ClkGetMux(mux) == 2)
            freq = PLL_INPUT_OSC_RATE;
        break;
    }

    return freq;
}

/**
 * @brief Set frac clk freq.
 * @param  clockName: CLOCK_Name id.
 * @param  rate: clk set rate
 * @return HAL_Status.
 * How to calculate the Frac clk divider:
 *     if pRate > 20 * rate, select frac divider
 *     else select normal divider, but the clk rate may be not accurate
 */
HAL_Status HAL_CRU_ClkFracSetFreq(eCLOCK_Name clockName, uint32_t rate)
{
    uint32_t muxSrc, mux = CLK_GET_MUX(clockName), muxOut = 0;
    uint32_t divSrc, divFrac;
    uint32_t n = 0, m = 0, pRate = s_gpllFreq / 2;

    switch (clockName) {
    case CLK_UART0:
        muxSrc = CLK_GET_MUX(CLK_UART0_SRC);
        divSrc = CLK_GET_DIV(CLK_UART0_SRC);
        divFrac = CLK_GET_DIV(CLK_UART0_FRAC);
        break;
    case CLK_UART1:
        muxSrc = CLK_GET_MUX(CLK_UART1_SRC);
        divSrc = CLK_GET_DIV(CLK_UART1_SRC);
        divFrac = CLK_GET_DIV(CLK_UART1_FRAC);
        break;
    case CLK_UART2:
        muxSrc = CLK_GET_MUX(CLK_UART2_SRC);
        divSrc = CLK_GET_DIV(CLK_UART2_SRC);
        divFrac = CLK_GET_DIV(CLK_UART2_FRAC);
        break;
    case I2S_MCLKOUT:
        muxSrc = CLK_GET_MUX(CLK_I2S8CH_SRC);
        divSrc = CLK_GET_DIV(CLK_I2S8CH_SRC);
        divFrac = CLK_GET_DIV(CLK_I2S8CH_FRAC);
        mux = CLK_GET_MUX(MCLK_I2S8CH);
        break;
    case I2S1_MCLKOUT:
        muxSrc = CLK_GET_MUX(CLK_I2S1_8CH_SRC);
        divSrc = CLK_GET_DIV(CLK_I2S1_8CH_SRC);
        divFrac = CLK_GET_DIV(CLK_I2S1_8CH_FRAC);
        mux = CLK_GET_MUX(MCLK_I2S1_8CH);
        break;
    case CLK_AUDPWM:
        muxSrc = CLK_GET_MUX(CLK_AUDPWM_SRC);
        divSrc = CLK_GET_DIV(CLK_AUDPWM_SRC);
        divFrac = CLK_GET_DIV(CLK_AUDPWM_FRAC);
        pRate = s_gpllFreq;
        break;
    case CLK_32K:
        divFrac = CLK_GET_DIV(CLK_32K);
        pRate = PLL_INPUT_OSC_RATE;
        break;
    default:

        return HAL_INVAL;
    }

    if (clockName == CLK_32K) {
        HAL_CRU_FracdivGetConfig(rate, PLL_INPUT_OSC_RATE, &n, &m);
        CRU->CRU_CLKSEL_CON[CLK_DIV_GET_REG_OFFSET(divFrac)] = (n << 16) | m;

        return HAL_OK;
    }

    if ((!(s_gpllFreq % rate)) && ((s_gpllFreq / rate) < 31)) {
        HAL_CRU_ClkSetDiv(divSrc, s_gpllFreq / rate);
        HAL_CRU_ClkSetMux(muxSrc, 0);
        HAL_CRU_ClkSetMux(mux, 0);
    } else {
        HAL_CRU_FracdivGetConfig(rate, pRate, &n, &m);
        HAL_CRU_ClkSetDiv(divSrc, 2);
        HAL_CRU_ClkSetMux(muxSrc, 0);
        CRU->CRU_CLKSEL_CON[CLK_DIV_GET_REG_OFFSET(divFrac)] = (n << 16) | m;
        HAL_CRU_ClkSetMux(mux, 1);
    }

    if (muxOut)
        HAL_CRU_ClkSetMux(muxOut, 0);

    return HAL_OK;
}

/**
 * @brief Get Usb clk freq.
 * @param  clockName: CLOCK_Name id
 * @return clk rate.
 * How to calculate the Frac clk divider:
 *     numerator is frac register[31:16]
 *     denominator is frac register[15:0]
 *     clk rate = pRate * numerator / denominator
 */
uint32_t HAL_CRU_ClkUsbGetFreq(eCLOCK_Name clockName)
{
    uint32_t freq = 0;
    uint32_t muxSrc, mux = CLK_GET_MUX(clockName);
    uint32_t divFrac;
    uint32_t n, m, pRate;

    switch (clockName) {
    case CLK_USB2PHY_REF:
        muxSrc = CLK_GET_MUX(CLK_USB2PHY_REF_FRAC);
        divFrac = CLK_GET_DIV(CLK_USB2PHY_REF_FRAC);
        break;
    case CLK_DPHY_REF:
        muxSrc = CLK_GET_MUX(CLK_DPHY_REF_FRAC);
        divFrac = CLK_GET_DIV(CLK_DPHY_REF_FRAC);
        break;
    default:

        return HAL_INVAL;
    }
    n = (CRU->CRU_CLKSEL_CON[CLK_DIV_GET_REG_OFFSET(divFrac)] & 0xffff0000) >> 16;
    m = CRU->CRU_CLKSEL_CON[CLK_DIV_GET_REG_OFFSET(divFrac)] & 0x0000ffff;

    if (HAL_CRU_ClkGetMux(muxSrc))
        pRate = s_cpllFreq;
    else
        pRate = s_gpllFreq;

    if (HAL_CRU_ClkGetMux(mux) == 0)
        freq = PLL_INPUT_OSC_RATE;
    else if (HAL_CRU_ClkGetMux(mux) == 1)
        freq = (pRate / m) * n;

    return freq;
}

/**
 * @brief Set usb clk freq.
 * @param  clockName: CLOCK_Name id.
 * @param  rate: clk set rate
 * @return HAL_Status.
 * How to calculate the Frac clk divider:
 *     if rate is inpust osc rate, select input osc
 *     else select ifrac divider
 */
HAL_Status HAL_CRU_ClkUsbSetFreq(eCLOCK_Name clockName, uint32_t rate)
{
    uint32_t muxSrc, mux = CLK_GET_MUX(clockName);
    uint32_t divFrac;
    uint32_t n = 0, m = 0, pRate = s_gpllFreq;

    switch (clockName) {
    case CLK_USB2PHY_REF:
        muxSrc = CLK_GET_MUX(CLK_USB2PHY_REF_FRAC);
        divFrac = CLK_GET_DIV(CLK_USB2PHY_REF_FRAC);
        break;
    case CLK_DPHY_REF:
        muxSrc = CLK_GET_MUX(CLK_DPHY_REF_FRAC);
        divFrac = CLK_GET_DIV(CLK_DPHY_REF_FRAC);
        break;
    default:

        return HAL_INVAL;
    }

    if (rate == PLL_INPUT_OSC_RATE) {
        HAL_CRU_ClkSetMux(mux, 0);
    } else {
        HAL_CRU_FracdivGetConfig(rate, pRate, &n, &m);
        HAL_CRU_ClkSetMux(muxSrc, 0);
        CRU->CRU_CLKSEL_CON[CLK_DIV_GET_REG_OFFSET(divFrac)] = (n << 16) | m;
        HAL_CRU_ClkSetMux(mux, 1);
    }

    return HAL_OK;
}

/**
 * @brief Get clk freq.
 * @param  clockName: CLOCK_Name id.
 * @return rate.
 */
uint32_t HAL_CRU_ClkGetFreq(eCLOCK_Name clockName)
{
    uint32_t freq;
    uint32_t clkMux = CLK_GET_MUX(clockName), mux = 0;
    uint32_t clkDiv = CLK_GET_DIV(clockName);
    uint32_t pRate = s_gpllFreq;

    if (!s_gpllFreq)
        s_gpllFreq = HAL_CRU_GetPllFreq(&GPLL);
    if (!s_cpllFreq)
        s_cpllFreq = HAL_CRU_GetPllFreq(&CPLL);

    switch (clockName) {
    case PLL_GPLL:
        freq = HAL_CRU_GetPllFreq(&GPLL);
        s_gpllFreq = freq;

        return freq;
    case PLL_CPLL:
        freq = HAL_CRU_GetPllFreq(&CPLL);
        s_cpllFreq = freq;

        return freq;
    case DCLK_VOP_S:
        if (HAL_CRU_ClkGetMux(clkMux))
            pRate = s_cpllFreq;

        freq = pRate / HAL_CRU_ClkGetDiv(clkDiv);

        return freq;
    case CLK_UART0:
    case CLK_UART1:
    case CLK_UART2:
    case I2S_MCLKOUT:
    case I2S1_MCLKOUT:
    case CLK_AUDPWM:
    case CLK_32K:
        freq = HAL_CRU_ClkFracGetFreq(clockName);

        return freq;
    case CLK_PWM:
        mux = HAL_CRU_ClkGetMux(clkMux);
        if (mux)
            pRate = PLL_INPUT_OSC_RATE;
        break;
    case CLK_GPIO_DBG0:
    case CLK_GPIO_DBG1:
        pRate = PLL_INPUT_OSC_RATE;
        break;
    case CLK_USB2PHY_REF:
    case CLK_DPHY_REF:
        freq = HAL_CRU_ClkUsbGetFreq(clockName);

        return freq;
    case CLK_CIFOUT:
        mux = HAL_CRU_ClkGetMux(clkMux);
        if (mux == 2)
            pRate = PLL_INPUT_OSC_RATE;
        break;
    default:
        break;
    }

    if ((clkMux == 0) && (clkDiv == 0))
        return 0;

    if (clkDiv)
        freq = pRate / (HAL_CRU_ClkGetDiv(clkDiv));
    else
        freq = pRate;

    return freq;
}

/**
 * @brief Set clk freq.
 * @param  clockName: CLOCK_Name id.
 * @param  rate: clk rate.
 * @return HAL_Status.
 */
HAL_Status HAL_CRU_ClkSetFreq(eCLOCK_Name clockName, uint32_t rate)
{
    HAL_Status error = HAL_OK;
    uint32_t clkMux = CLK_GET_MUX(clockName), mux = 0;
    uint32_t clkDiv = CLK_GET_DIV(clockName), div = 0;
    uint32_t pRate = s_gpllFreq;

    if (!s_gpllFreq)
        s_gpllFreq = HAL_CRU_GetPllFreq(&GPLL);
    if (!s_cpllFreq)
        s_cpllFreq = HAL_CRU_GetPllFreq(&CPLL);

    switch (clockName) {
    case PLL_GPLL:
        error = HAL_CRU_SetPllFreq(&GPLL, rate);
        s_gpllFreq = HAL_CRU_GetPllFreq(&GPLL);

        return error;
    case PLL_CPLL:
        error = HAL_CRU_SetPllFreq(&CPLL, rate);
        s_cpllFreq = HAL_CRU_GetPllFreq(&CPLL);

        return error;
    case DCLK_VOP_S:
        if (s_gpllFreq % rate) {
            div = HAL_DIV_ROUND_UP(DCLK_LCDC_PLL_LIMIT_FREQ, rate);
            error = HAL_CRU_SetPllFreq(&CPLL, rate * div);
            s_cpllFreq = HAL_CRU_GetPllFreq(&CPLL);
            HAL_CRU_ClkSetMux(clkMux, 1);
            HAL_CRU_ClkSetDiv(clkDiv, div);
        } else {
            div = HAL_DIV_ROUND_UP(s_gpllFreq, rate);
            HAL_CRU_ClkSetMux(clkMux, 0);
            HAL_CRU_ClkSetDiv(clkDiv, div);
        }

        return error;
    case CLK_UART0:
    case CLK_UART1:
    case CLK_UART2:
    case I2S_MCLKOUT:
    case I2S1_MCLKOUT:
    case CLK_AUDPWM:
    case CLK_32K:
        error = HAL_CRU_ClkFracSetFreq(clockName, rate);

        return error;
    case CLK_PWM:
        if (rate == PLL_INPUT_OSC_RATE) {
            mux = 1;
            pRate = PLL_INPUT_OSC_RATE;
        }
        break;
    case CLK_GPIO_DBG0:
    case CLK_GPIO_DBG1:
        pRate = PLL_INPUT_OSC_RATE;
        break;
    case CLK_USB2PHY_REF:
    case CLK_DPHY_REF:
        error = HAL_CRU_ClkUsbSetFreq(clockName, rate);

        return error;
    case CLK_CIFOUT:
        if (rate == PLL_INPUT_OSC_RATE) {
            mux = 2;
            pRate = PLL_INPUT_OSC_RATE;
        }
        break;
    default:
        break;
    }

    if ((clkMux == 0) && (clkDiv == 0))
        return HAL_INVAL;

    div = HAL_DIV_ROUND_UP(pRate, rate);
    if (clkMux)
        HAL_CRU_ClkSetMux(clkMux, mux);
    if (clkDiv)
        HAL_CRU_ClkSetDiv(clkDiv, div);

    return HAL_OK;
}

/** @} */

/** @} */

/** @} */

#endif
