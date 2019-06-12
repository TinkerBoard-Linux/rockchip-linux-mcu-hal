/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

#include "hal_base.h"

#if defined(RKMCU_RK2206) && defined(HAL_CRU_MODULE_ENABLED)

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

/** @addtogroup CRU
 *  @{
 */

/** @defgroup How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The CRU driver can be used as follows:

 (#) Invoke cru functions to set clk rate, enable\disable clk, reset clk in each device.
 (#) The gate and soft reset id is include register offset and shift information:
       con_offset: id /16
       shift: id %16
 (#) The mux and div id is include register offset, shift, mask information:
       [15:0]: con
       [23:16]: shift
       [31:24]: width
 (#) CRU driver is just responsible for passing simple command data, And
 the usecount is the user's responsibility. Protection the usecount at the driver layer.
 (#) More details refer to APIs' descriptions as below.

 @endverbatim
 @} */

/********************* Private MACRO Definition ******************************/

/********************* Private Structure Definition **************************/

static struct PLL_CONFIG PLL_TABLE[5] = {
    /* _mhz, _refDiv, _fbDiv, _postdDv1, _postDiv2, _dsmpd, _frac */
    RK_PLL_RATE(491520000, 12, 983, 4, 1, 0, 671088),
    RK_PLL_RATE(451584000, 4, 301, 4, 1, 0, 939524),
    RK_PLL_RATE(384000000, 1, 96, 3, 2, 1, 0),
    RK_PLL_RATE(297000000, 1, 99, 4, 2, 1, 0),
    RK_PLL_RATE(288000000, 1, 72, 3, 2, 1, 0),
};

static uint32_t s_gpllFreq;
static uint32_t s_vpllFreq;

static struct PLL_SETUP GPLL = {
    .conOffset0 = (uint32_t)(&(CRU->GPLL_CON[0])),
    .conOffset1 = (uint32_t)(&(CRU->GPLL_CON[1])),
    .conOffset2 = (uint32_t)(&(CRU->GPLL_CON[2])),
    .conOffset3 = (uint32_t)(&(CRU->GPLL_CON[3])),
    .modeOffset = (uint32_t)(&(CRU->MODE_CON00)),
    .modeShift = 0,
    .lockShift = 10,
    .modeMask = 0x3 << 0,
    .rateTable = PLL_TABLE,
};

static struct PLL_SETUP VPLL = {
    .conOffset0 = (uint32_t)(&(CRU->VPLL_CON[0])),
    .conOffset1 = (uint32_t)(&(CRU->VPLL_CON[1])),
    .conOffset2 = (uint32_t)(&(CRU->VPLL_CON[2])),
    .conOffset3 = (uint32_t)(&(CRU->VPLL_CON[3])),
    .modeOffset = (uint32_t)(&(CRU->MODE_CON00)),
    .modeShift = 4,
    .lockShift = 10,
    .modeMask = 0x3 << 4,
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
    uint32_t mux = CLK_GET_MUX(clockName);
    uint32_t divSrc = 0, divFrac;
    uint32_t n, m, pRate;

    switch (clockName) {
    case CLK_UART0:
        divSrc = CLK_GET_DIV(CLK_UART0_PLL);
        divFrac = CLK_GET_DIV(CLK_UART0_FRAC);
        break;
    case CLK_UART1:
        divSrc = CLK_GET_DIV(CLK_UART1_PLL);
        divFrac = CLK_GET_DIV(CLK_UART1_FRAC);
        break;
    case CLK_UART2:
        divSrc = CLK_GET_DIV(CLK_UART2_PLL);
        divFrac = CLK_GET_DIV(CLK_UART2_FRAC);
        break;
    case MCLK_I2S8CH_0_TX:
        divSrc = CLK_GET_DIV(CLK_I2S8CH_0_TX_PLL);
        divFrac = CLK_GET_DIV(CLK_I2S8CH_0_TX_FRAC);
        break;
    case MCLK_I2S8CH_0_RX:
        divSrc = CLK_GET_DIV(CLK_I2S8CH_0_RX_PLL);
        divFrac = CLK_GET_DIV(CLK_I2S8CH_0_RX_FRAC);
        break;
    case MCLK_I2S8CH_1_TX:
        divSrc = CLK_GET_DIV(CLK_I2S8CH_1_TX_PLL);
        divFrac = CLK_GET_DIV(CLK_I2S8CH_1_TX_FRAC);
        break;
    case MCLK_I2S8CH_1_RX:
        divSrc = CLK_GET_DIV(CLK_I2S8CH_1_RX_PLL);
        divFrac = CLK_GET_DIV(CLK_I2S8CH_1_RX_FRAC);
        break;
    case CLK_32K:
        divFrac = CLK_GET_DIV(CLK_32K_FRAC);
        break;
    default:

        return HAL_INVAL;
    }

    n = (CRU->CRU_CLKSEL_CON[CLK_DIV_GET_REG_OFFSET(divFrac)] & 0xffff0000) >> 16;
    m = CRU->CRU_CLKSEL_CON[CLK_DIV_GET_REG_OFFSET(divFrac)] & 0x0000ffff;

    if (clockName == CLK_32K)
        pRate = PLL_INPUT_OSC_RATE;
    else
        pRate = s_gpllFreq / HAL_CRU_ClkGetDiv(divSrc);

    if (HAL_CRU_ClkGetMux(mux) == 0)
        freq = pRate;
    else if (HAL_CRU_ClkGetMux(mux) == 1)
        freq = (pRate / m) * n;
    else if (HAL_CRU_ClkGetMux(mux) == 2)
        freq = PLL_INPUT_OSC_RATE / 2;

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
    uint32_t muxSrc, mux = CLK_GET_MUX(clockName);
    uint32_t divSrc, divFrac;
    uint32_t n = 0, m = 0, pRate = s_gpllFreq;

    switch (clockName) {
    case CLK_UART0:
        muxSrc = CLK_GET_MUX(CLK_UART0_PLL);
        divSrc = CLK_GET_DIV(CLK_UART0_PLL);
        divFrac = CLK_GET_DIV(CLK_UART0_FRAC);
        break;
    case CLK_UART1:
        muxSrc = CLK_GET_MUX(CLK_UART1_PLL);
        divSrc = CLK_GET_DIV(CLK_UART1_PLL);
        divFrac = CLK_GET_DIV(CLK_UART1_FRAC);
        break;
    case CLK_UART2:
        muxSrc = CLK_GET_MUX(CLK_UART2_PLL);
        divSrc = CLK_GET_DIV(CLK_UART2_PLL);
        divFrac = CLK_GET_DIV(CLK_UART2_FRAC);
        break;
    case MCLK_I2S8CH_0_TX:
        muxSrc = CLK_GET_MUX(CLK_I2S8CH_0_TX_PLL);
        divSrc = CLK_GET_DIV(CLK_I2S8CH_0_TX_PLL);
        divFrac = CLK_GET_DIV(CLK_I2S8CH_0_TX_FRAC);
        break;
    case MCLK_I2S8CH_0_RX:
        muxSrc = CLK_GET_MUX(CLK_I2S8CH_0_RX_PLL);
        divSrc = CLK_GET_DIV(CLK_I2S8CH_0_RX_PLL);
        divFrac = CLK_GET_DIV(CLK_I2S8CH_0_RX_FRAC);
        break;
    case MCLK_I2S8CH_1_TX:
        muxSrc = CLK_GET_MUX(CLK_I2S8CH_1_TX_PLL);
        divSrc = CLK_GET_DIV(CLK_I2S8CH_1_TX_PLL);
        divFrac = CLK_GET_DIV(CLK_I2S8CH_1_TX_FRAC);
        break;
    case MCLK_I2S8CH_1_RX:
        muxSrc = CLK_GET_MUX(CLK_I2S8CH_1_RX_PLL);
        divSrc = CLK_GET_DIV(CLK_I2S8CH_1_RX_PLL);
        divFrac = CLK_GET_DIV(CLK_I2S8CH_1_RX_FRAC);
        break;
    case CLK_32K:
        divFrac = CLK_GET_DIV(CLK_32K_FRAC);
        pRate = PLL_INPUT_OSC_RATE;
        break;
    default:

        return HAL_INVAL;
    }

    if (clockName == CLK_32K) {
        HAL_CRU_FracdivGetConfig(rate, PLL_INPUT_OSC_RATE, &n, &m);
        CRU->CRU_CLKSEL_CON[CLK_DIV_GET_REG_OFFSET(divFrac)] = (n << 16) | m;
        HAL_CRU_ClkSetMux(mux, 0);

        return HAL_OK;
    }

    if ((!(s_gpllFreq % rate)) && ((s_gpllFreq / rate) < 31)) {
        HAL_CRU_ClkSetDiv(divSrc, s_gpllFreq / rate);
        HAL_CRU_ClkSetMux(muxSrc, 0);
        HAL_CRU_ClkSetMux(mux, 0);
    } else {
        HAL_CRU_FracdivGetConfig(rate, pRate, &n, &m);
        HAL_CRU_ClkSetDiv(divSrc, 1);
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
    uint32_t clkMux = CLK_GET_MUX(clockName);
    uint32_t clkDiv = CLK_GET_DIV(clockName);
    uint32_t pRate = s_gpllFreq;

    if (!s_gpllFreq)
        s_gpllFreq = HAL_CRU_GetPllFreq(&GPLL);
    if (!s_vpllFreq)
        s_vpllFreq = HAL_CRU_GetPllFreq(&VPLL);

    switch (clockName) {
    case PLL_GPLL:
        freq = HAL_CRU_GetPllFreq(&GPLL);
        s_gpllFreq = freq;

        return freq;
    case PLL_VPLL:
        freq = HAL_CRU_GetPllFreq(&VPLL);
        s_vpllFreq = freq;

        return freq;
    case CLK_UART0:
    case CLK_UART1:
    case CLK_UART2:
    case MCLK_I2S8CH_0_TX:
    case MCLK_I2S8CH_0_RX:
    case MCLK_I2S8CH_1_TX:
    case MCLK_I2S8CH_1_RX:
    case CLK_32K:

        return HAL_CRU_ClkFracGetFreq(clockName);
    case CLK_TSADC:
    case CLK_SARADC:
    case CLK_EFUSE:
    case SCLK_M4F0:
    case SCLK_M0:
        pRate = PLL_INPUT_OSC_RATE;
        break;
    case PCLK_MCU_BUS:
        pRate = HAL_CRU_ClkGetFreq(HCLK_MCU_BUS);
        break;
    case CLK_CRYPTO:
    case CLK_CRYPTO_PKA:
        if (HAL_CRU_ClkGetMux(clkMux)) {
            if (HAL_CRU_ClkGetMux(CLK_GET_MUX(CLK_CRYPTO_NP5)))
                pRate = PLL_INPUT_OSC_RATE;
            freq = (pRate * 2) / ((HAL_CRU_ClkGetDiv(CLK_GET_DIV(CLK_CRYPTO_NP5)) - 1) * 2 + 3);
        } else {
            if (HAL_CRU_ClkGetMux(CLK_GET_MUX(CLK_CRYPTO_D)))
                pRate = PLL_INPUT_OSC_RATE;
            freq = pRate / HAL_CRU_ClkGetDiv(CLK_GET_DIV(CLK_CRYPTO_D));
        }

        return freq;
    case CLK_GPLL_MUX_NP5:
        freq = (pRate * 2) / ((HAL_CRU_ClkGetDiv(clkDiv) - 1) * 2 + 3);

        return freq;
    case CLK_HIFI3:
        if (HAL_CRU_ClkGetMux(CLK_GET_MUX(CLK_HIFI3_SRC)))
            freq = s_vpllFreq / HAL_CRU_ClkGetDiv(CLK_GET_DIV(CLK_HIFI3_D));
        else
            freq = s_gpllFreq / HAL_CRU_ClkGetDiv(CLK_GET_DIV(CLK_HIFI3_D));

        return freq;
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
    if (!s_vpllFreq)
        s_vpllFreq = HAL_CRU_GetPllFreq(&VPLL);

    switch (clockName) {
    case PLL_GPLL:
        error = HAL_CRU_SetPllFreq(&GPLL, rate);
        s_gpllFreq = HAL_CRU_GetPllFreq(&GPLL);

        return error;
    case PLL_VPLL:
        error = HAL_CRU_SetPllFreq(&VPLL, rate);
        s_vpllFreq = HAL_CRU_GetPllFreq(&VPLL);

        return error;
    case CLK_UART0:
    case CLK_UART1:
    case CLK_UART2:
    case MCLK_I2S8CH_0_TX:
    case MCLK_I2S8CH_0_RX:
    case MCLK_I2S8CH_1_TX:
    case MCLK_I2S8CH_1_RX:
    case CLK_32K:
        error = HAL_CRU_ClkFracSetFreq(clockName, rate);

        return error;
    case CLK_TSADC:
    case CLK_SARADC:
    case CLK_EFUSE:
    case SCLK_M4F0:
    case SCLK_M0:
        pRate = PLL_INPUT_OSC_RATE;
        break;
    case PCLK_MCU_BUS:
        pRate = HAL_CRU_ClkGetFreq(HCLK_MCU_BUS);
        break;
    case CLK_CRYPTO:
    case CLK_CRYPTO_PKA:
        if (rate == 24) {
            HAL_CRU_ClkSetMux(CLK_GET_MUX(CLK_CRYPTO_D), 1);
            HAL_CRU_ClkSetDiv(CLK_GET_DIV(CLK_CRYPTO_D), 1);
            HAL_CRU_ClkSetMux(clkMux, 0);
        } else if (!s_gpllFreq % rate) {
            HAL_CRU_ClkSetMux(CLK_GET_MUX(CLK_CRYPTO_D), 0);
            HAL_CRU_ClkSetDiv(CLK_GET_DIV(CLK_CRYPTO_D), s_gpllFreq / rate);
            HAL_CRU_ClkSetMux(clkMux, 0);
        } else {
            div = (HAL_DIV_ROUND_UP(pRate * 2, rate) - 3) / 2;
            HAL_CRU_ClkSetMux(CLK_GET_MUX(CLK_CRYPTO_NP5), 0);
            HAL_CRU_ClkSetDiv(CLK_GET_DIV(CLK_CRYPTO_NP5), div + 1);
            HAL_CRU_ClkSetMux(clkMux, 1);
        }

        return HAL_OK;
    case CLK_GPLL_MUX_NP5:
        div = (HAL_DIV_ROUND_UP(pRate * 2, rate) - 3) / 2;
        HAL_CRU_ClkSetDiv(clkDiv, div + 1);

        return HAL_OK;
    case CLK_HIFI3:
        if (!(s_gpllFreq % rate)) {
            div = HAL_DIV_ROUND_UP(s_gpllFreq, rate);
            HAL_CRU_ClkSetMux(CLK_GET_MUX(CLK_HIFI3_SRC), 0);
            HAL_CRU_ClkSetDiv(CLK_GET_DIV(CLK_HIFI3_D), div);
            HAL_CRU_ClkSetMux(clkMux, 0);
        } else {
            div = HAL_DIV_ROUND_UP(s_vpllFreq, rate);
            HAL_CRU_ClkSetMux(CLK_GET_MUX(CLK_HIFI3_SRC), 1);
            HAL_CRU_ClkSetDiv(CLK_GET_DIV(CLK_HIFI3_D), div);
            HAL_CRU_ClkSetMux(clkMux, 0);
        }

        return HAL_OK;
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
