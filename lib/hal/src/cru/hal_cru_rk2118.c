/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2023 Rockchip Electronics Co., Ltd.
 */

#include "hal_base.h"

#if defined(RKMCU_RK2118) && defined(HAL_CRU_MODULE_ENABLED)

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup CRU
 *  @{
 */

/** @defgroup CRU_Private_Definition Private Definition
 *  @{
 */
/********************* Private MACRO Definition ******************************/
/********************* Private Structure Definition **************************/

static struct PLL_CONFIG PLL_TABLE_24M[] = {
    /* _mhz, _refDiv, _fbDiv, _postdDv1, _postDiv2, _dsmpd, _frac */
    RK_PLL_RATE(1350000000, 4, 225, 1, 1, 1, 0),
    RK_PLL_RATE(1179648000, 1, 49, 1, 1, 0, 2550137),
    RK_PLL_RATE(1000000000, 3, 125, 1, 1, 1, 0),
    RK_PLL_RATE(903168000, 1, 75, 2, 1, 0, 4429185),
    RK_PLL_RATE(800000000, 3, 200, 2, 1, 1, 0),
    { 0 /* sentinel */ },
};

static struct PLL_CONFIG PLL_TABLE_24P576M[] = {
    /* _mhz, _refDiv, _fbDiv, _postdDv1, _postDiv2, _dsmpd, _frac */
    RK_PLL_RATE(1350000000, 1, 54, 1, 1, 0, 15630336),
    RK_PLL_RATE(1179648000, 1, 48, 1, 1, 1, 0),
    RK_PLL_RATE(1000000000, 1, 40, 1, 1, 0, 11578026),
    RK_PLL_RATE(903168000, 2, 147, 2, 1, 1, 0),
    RK_PLL_RATE(800000000, 1, 65, 2, 1, 0, 1747626),
    { 0 /* sentinel */ },
};

static uint32_t s_gpllFreq;
static uint32_t s_vpll0Freq;
static uint32_t s_vpll1Freq;
static uint32_t s_clkRcFreq = 4000000;
static uint32_t s_fracUart0Freq;
static uint32_t s_fracUart1Freq;
static uint32_t s_fracVoice0Freq;
static uint32_t s_fracVoice1Freq;
static uint32_t s_fracCom0Freq;
static uint32_t s_fracCom1Freq;
static uint32_t s_fracCom2Freq;
static uint32_t s_intVoice0Freq;
static uint32_t s_intVoice1Freq;
static uint32_t s_intVoice2Freq;
static uint32_t s_sai0MclkIoIn;
static uint32_t s_sai1MclkIoIn;
static uint32_t s_sai2MclkIoIn;
static uint32_t s_sai3MclkIoIn;
static uint32_t s_sai4MclkIoIn;
static uint32_t s_sai5MclkIoIn;
static uint32_t s_sai6MclkIoIn;
static uint32_t s_sai7MclkIoIn;

static struct PLL_SETUP GPLL = {
    .conOffset0 = &(PMU_CRU->GPLL_CON[0]),
    .conOffset1 = &(PMU_CRU->GPLL_CON[1]),
    .conOffset2 = &(PMU_CRU->GPLL_CON[2]),
    .modeOffset = &(CRU->MODE_CON[0]),
    .modeShift = 0,
    .lockShift = 10,
    .modeMask = 0x3 << 0,
    .rateTable = PLL_TABLE_24M,
};

static struct PLL_SETUP VPLL0 = {
    .conOffset0 = &(PMU_CRU->VPLL0_CON[0]),
    .conOffset1 = &(PMU_CRU->VPLL0_CON[1]),
    .conOffset2 = &(PMU_CRU->VPLL0_CON[2]),
    .modeOffset = &(CRU->MODE_CON[0]),
    .modeShift = 2,
    .lockShift = 10,
    .modeMask = 0x3 << 2,
    .rateTable = PLL_TABLE_24M,
};

static struct PLL_SETUP VPLL1 = {
    .conOffset0 = &(PMU_CRU->VPLL1_CON[0]),
    .conOffset1 = &(PMU_CRU->VPLL1_CON[1]),
    .conOffset2 = &(PMU_CRU->VPLL1_CON[2]),
    .modeOffset = &(CRU->MODE_CON[0]),
    .modeShift = 4,
    .lockShift = 10,
    .modeMask = 0x3 << 4,
    .rateTable = PLL_TABLE_24M,
};
/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/
/** @} */
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
static uint32_t HAL_CRU_ClkFracGetFreq(eCLOCK_Name clockName)
{
    uint32_t freq = 0;
    uint32_t muxSrc = 0, divFrac = 0;
    uint32_t n, m, pRate, n_h, m_h;

    switch (clockName) {
    case CLK_FRAC_UART0:
        muxSrc = CLK_GET_MUX(CLK_FRAC_UART0);
        divFrac = CLK_GET_DIV(CLK_FRAC_UART0);
        break;
    case CLK_FRAC_UART1:
        muxSrc = CLK_GET_MUX(CLK_FRAC_UART1);
        divFrac = CLK_GET_DIV(CLK_FRAC_UART1);
        break;
    case CLK_FRAC_VOICE0:
        muxSrc = CLK_GET_MUX(CLK_FRAC_VOICE0);
        divFrac = CLK_GET_DIV(CLK_FRAC_VOICE0);
        break;
    case CLK_FRAC_VOICE1:
        muxSrc = CLK_GET_MUX(CLK_FRAC_VOICE1);
        divFrac = CLK_GET_DIV(CLK_FRAC_VOICE1);
        break;
    case CLK_FRAC_COMMON0:
        muxSrc = CLK_GET_MUX(CLK_FRAC_COMMON0);
        divFrac = CLK_GET_DIV(CLK_FRAC_COMMON0);
        break;
    case CLK_FRAC_COMMON1:
        muxSrc = CLK_GET_MUX(CLK_FRAC_COMMON1);
        divFrac = CLK_GET_DIV(CLK_FRAC_COMMON1);
        break;
    case CLK_FRAC_COMMON2:
        muxSrc = CLK_GET_MUX(CLK_FRAC_COMMON2);
        divFrac = CLK_GET_DIV(CLK_FRAC_COMMON2);
        break;
    case CLK_32K_FRAC:
        divFrac = CLK_GET_DIV(CLK_32K_FRAC);
        pRate = PLL_INPUT_OSC_RATE;
        break;
    default:

        return HAL_INVAL;
    }

    switch (clockName) {
    case CLK_FRAC_UART0:
    case CLK_FRAC_UART1:
    case CLK_FRAC_COMMON0:
    case CLK_FRAC_COMMON1:
    case CLK_FRAC_COMMON2:
        pRate = HAL_CRU_MuxGetFreq4(muxSrc, PLL_INPUT_OSC_RATE, s_gpllFreq, s_vpll0Freq, s_vpll1Freq);
        HAL_CRU_ClkGetFracDiv(divFrac, &n, &m);
        freq = pRate / m * n;

        return freq;
    case CLK_FRAC_VOICE0:
    case CLK_FRAC_VOICE1:
        pRate = HAL_CRU_MuxGetFreq4(muxSrc, PLL_INPUT_OSC_RATE, s_gpllFreq, s_vpll0Freq, s_vpll1Freq);
        HAL_CRU_ClkGetFracDiv(divFrac, &n, &m);
        n_h = (CRU->CLKSEL_CON[CLK_DIV_GET_REG_OFFSET(divFrac) + 0x4] & 0xff00) >> 8;
        m_h = (CRU->CLKSEL_CON[CLK_DIV_GET_REG_OFFSET(divFrac) + 0x4] & 0xff);
        n = (n_h << 16) | n;
        m = (m_h << 16) | m;
        freq = pRate / m * n;

        return freq;

        return freq;
    case CLK_32K_FRAC:
        pRate = PLL_INPUT_OSC_RATE;
        n = (PMU_CRU->CLKSEL_CON[3] & 0xffff0000) >> 16;
        m = (PMU_CRU->CLKSEL_CON[3] & 0xffff);
        freq = pRate / m * n;

        return freq;
    default:

        return HAL_INVAL;
    }
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
static HAL_Status HAL_CRU_ClkFracSetFreq(eCLOCK_Name clockName, uint32_t rate)
{
    uint32_t muxSrc, divFrac, mux;
    uint32_t n = 0, m = 0, pRate = s_gpllFreq;

    switch (clockName) {
    case CLK_FRAC_UART0:
        muxSrc = CLK_GET_MUX(CLK_FRAC_UART0);
        divFrac = CLK_GET_DIV(CLK_FRAC_UART0);
        break;
    case CLK_FRAC_UART1:
        muxSrc = CLK_GET_MUX(CLK_FRAC_UART1);
        divFrac = CLK_GET_DIV(CLK_FRAC_UART1);
        break;
    case CLK_FRAC_VOICE0:
        muxSrc = CLK_GET_MUX(CLK_FRAC_VOICE0);
        divFrac = CLK_GET_DIV(CLK_FRAC_VOICE0);
        break;
    case CLK_FRAC_VOICE1:
        muxSrc = CLK_GET_MUX(CLK_FRAC_VOICE1);
        divFrac = CLK_GET_DIV(CLK_FRAC_VOICE1);
        break;
    case CLK_FRAC_COMMON0:
        muxSrc = CLK_GET_MUX(CLK_FRAC_COMMON0);
        divFrac = CLK_GET_DIV(CLK_FRAC_COMMON0);
        break;
    case CLK_FRAC_COMMON1:
        muxSrc = CLK_GET_MUX(CLK_FRAC_COMMON1);
        divFrac = CLK_GET_DIV(CLK_FRAC_COMMON1);
        break;
    case CLK_FRAC_COMMON2:
        muxSrc = CLK_GET_MUX(CLK_FRAC_COMMON2);
        divFrac = CLK_GET_DIV(CLK_FRAC_COMMON2);
        break;
    case CLK_32K_FRAC:
        muxSrc = CLK_GET_MUX(CLK_32K);
        divFrac = CLK_GET_DIV(CLK_32K_FRAC);
        pRate = PLL_INPUT_OSC_RATE;
        break;
    default:

        return HAL_INVAL;
    }

    switch (clockName) {
    case CLK_FRAC_UART0:
    case CLK_FRAC_UART1:
    case CLK_FRAC_COMMON0:
    case CLK_FRAC_COMMON1:
    case CLK_FRAC_COMMON2:
        if ((!(PLL_INPUT_OSC_RATE % rate))) {
            pRate = PLL_INPUT_OSC_RATE;
            mux = 0;
        } else if (!(s_vpll0Freq % rate)) {
            pRate = s_vpll0Freq;
            mux = 2;
        } else if (!(s_vpll1Freq % rate)) {
            pRate = s_vpll1Freq;
            mux = 3;
        } else {
            pRate = s_gpllFreq;
            mux = 1;
        }
        HAL_CRU_FracdivGetConfig(rate, pRate, &n, &m);
        HAL_CRU_ClkSetMux(muxSrc, mux);
        HAL_CRU_ClkSetFracDiv(divFrac, n, m);

        return HAL_OK;
    case CLK_FRAC_VOICE0:
    case CLK_FRAC_VOICE1:
        if ((!(PLL_INPUT_OSC_RATE % rate))) {
            pRate = PLL_INPUT_OSC_RATE;
            mux = 0;
        } else if (!(s_vpll0Freq % rate)) {
            pRate = s_vpll0Freq;
            mux = 2;
        } else if (!(s_vpll1Freq % rate)) {
            pRate = s_vpll1Freq;
            mux = 3;
        } else {
            pRate = s_gpllFreq;
            mux = 1;
        }
        HAL_CRU_FracdivGetConfig(rate, pRate, &n, &m);
        HAL_CRU_ClkSetMux(muxSrc, mux);
        HAL_CRU_ClkSetFracDiv(divFrac, n & 0xffff, m & 0xffff);
        CRU->CLKSEL_CON[CLK_DIV_GET_REG_OFFSET(divFrac) + 0x4] = (((n & 0xff0000) >> 16) << 8) | ((m & 0xff0000) >> 16);

        return HAL_OK;
    case CLK_32K_FRAC:
        HAL_CRU_FracdivGetConfig(rate, PLL_INPUT_OSC_RATE, &n, &m);
        PMU_CRU->CLKSEL_CON[3] = (n << 16) | m;
        HAL_CRU_ClkSetMux(muxSrc, 2);

        return HAL_OK;
    default:

        return HAL_INVAL;
    }
}

static uint32_t HAL_CRU_ClkGetOtherFreq(eCLOCK_Name clockName)
{
    uint32_t clkMux = CLK_GET_MUX(clockName);
    uint32_t clkDiv = CLK_GET_DIV(clockName);
    uint32_t pRate = s_gpllFreq, freq;
    uint32_t table[16];
    uint32_t uartTable[8] = { PLL_INPUT_OSC_RATE, s_gpllFreq, s_vpll0Freq, s_fracUart0Freq, s_fracUart1Freq, s_fracCom0Freq, s_fracCom1Freq, s_fracCom2Freq };
    uint32_t voiceTable0[14] = { PLL_INPUT_OSC_RATE, s_intVoice0Freq, s_intVoice1Freq, s_intVoice2Freq, s_fracVoice0Freq, s_fracVoice1Freq,
                                 s_fracCom0Freq, s_fracCom1Freq, s_fracCom2Freq, s_sai0MclkIoIn, s_sai1MclkIoIn, s_sai2MclkIoIn, s_sai3MclkIoIn };
    uint32_t voiceTable1[14] = { PLL_INPUT_OSC_RATE, s_intVoice0Freq, s_intVoice1Freq, s_intVoice2Freq, s_fracVoice0Freq, s_fracVoice1Freq,
                                 s_fracCom0Freq, s_fracCom1Freq, s_fracCom2Freq, s_sai4MclkIoIn, s_sai5MclkIoIn, s_sai6MclkIoIn, s_sai7MclkIoIn };

    switch (clockName) {
    case CLK_FRAC_UART0:
    case CLK_FRAC_UART1:
    case CLK_FRAC_VOICE0:
    case CLK_FRAC_VOICE1:
    case CLK_FRAC_COMMON0:
    case CLK_FRAC_COMMON1:
    case CLK_FRAC_COMMON2:
    case CLK_32K_FRAC:
        return HAL_CRU_ClkFracGetFreq(clockName);
    case CLK_UART0:
    case CLK_UART1:
    case CLK_UART2:
    case CLK_UART3:
        pRate = HAL_CRU_MuxGetFreqArray(clkMux, uartTable, 8);
        break;
    case MCLK_PDM:
    case CLKOUT_PDM:
        voiceTable0[13] = s_gpllFreq;
        pRate = HAL_CRU_MuxGetFreqArray(clkMux, voiceTable0, 14);
        break;

    case SCLK_SAI0:
        voiceTable0[13] = HAL_CRU_ClkGetOtherFreq(MCLK_OUT_SAI0);
        pRate = HAL_CRU_MuxGetFreqArray(clkMux, voiceTable0, 14);
        break;
    case SCLK_SAI1:
        voiceTable0[13] = HAL_CRU_ClkGetOtherFreq(MCLK_OUT_SAI1);
        pRate = HAL_CRU_MuxGetFreqArray(clkMux, voiceTable0, 14);
        break;
    case SCLK_SAI2:
        voiceTable0[13] = HAL_CRU_ClkGetOtherFreq(MCLK_OUT_SAI2);
        pRate = HAL_CRU_MuxGetFreqArray(clkMux, voiceTable0, 14);
        break;
    case SCLK_SAI3:
        voiceTable0[13] = HAL_CRU_ClkGetOtherFreq(MCLK_OUT_SAI3);
        pRate = HAL_CRU_MuxGetFreqArray(clkMux, voiceTable0, 14);
        break;
    case SCLK_SAI4:
        voiceTable1[13] = HAL_CRU_ClkGetOtherFreq(MCLK_OUT_SAI4);
        pRate = HAL_CRU_MuxGetFreqArray(clkMux, voiceTable1, 14);
        break;
    case SCLK_SAI5:
        voiceTable1[13] = HAL_CRU_ClkGetOtherFreq(MCLK_OUT_SAI5);
        pRate = HAL_CRU_MuxGetFreqArray(clkMux, voiceTable1, 14);
        break;
    case SCLK_SAI6:
        voiceTable1[13] = HAL_CRU_ClkGetOtherFreq(MCLK_OUT_SAI6);
        pRate = HAL_CRU_MuxGetFreqArray(clkMux, voiceTable1, 14);
        break;
    case SCLK_SAI7:
        voiceTable1[13] = HAL_CRU_ClkGetOtherFreq(MCLK_OUT_SAI7);
        pRate = HAL_CRU_MuxGetFreqArray(clkMux, voiceTable1, 14);
        break;
    case MCLK_OUT_SAI0:
    case MCLK_OUT_SAI1:
    case MCLK_OUT_SAI2:
    case MCLK_OUT_SAI3:
    case MCLK_ASRC0:
    case MCLK_ASRC1:
    case MCLK_ASRC2:
    case MCLK_ASRC3:
    case MCLK_ASRC4:
    case MCLK_ASRC5:
    case MCLK_ASRC6:
    case MCLK_ASRC7:
        pRate = HAL_CRU_MuxGetFreqArray(clkMux, voiceTable0, 13);
        break;
    case MCLK_OUT_SAI4:
    case MCLK_OUT_SAI5:
    case MCLK_OUT_SAI6:
    case MCLK_OUT_SAI7:
    case MCLK_SPDIFTX:
        pRate = HAL_CRU_MuxGetFreqArray(clkMux, voiceTable1, 13);
        break;
    case LRCK_ASRC0_SRC:
    case LRCK_ASRC1_SRC:
    case LRCK_ASRC2_SRC:
    case LRCK_ASRC3_SRC:
    case LRCK_ASRC0_DST:
    case LRCK_ASRC1_DST:
    case LRCK_ASRC2_DST:
    case LRCK_ASRC3_DST:
        table[0] = HAL_CRU_ClkGetOtherFreq(MCLK_ASRC0);
        table[1] = HAL_CRU_ClkGetOtherFreq(MCLK_ASRC1);
        table[2] = HAL_CRU_ClkGetOtherFreq(MCLK_ASRC2);
        table[3] = HAL_CRU_ClkGetOtherFreq(MCLK_ASRC3);
        table[4] = HAL_CRU_ClkGetFreq(MCLK_SPDIFRX0);
        table[5] = HAL_CRU_ClkGetOtherFreq(CLKOUT_PDM);
        pRate = HAL_CRU_MuxGetFreqArray(clkMux, table, 11);
        break;
    case LRCK_ASRC4_SRC:
    case LRCK_ASRC5_SRC:
    case LRCK_ASRC6_SRC:
    case LRCK_ASRC7_SRC:
    case LRCK_ASRC4_DST:
    case LRCK_ASRC5_DST:
    case LRCK_ASRC6_DST:
    case LRCK_ASRC7_DST:
        table[0] = HAL_CRU_ClkGetOtherFreq(MCLK_ASRC4);
        table[1] = HAL_CRU_ClkGetOtherFreq(MCLK_ASRC5);
        table[2] = HAL_CRU_ClkGetOtherFreq(MCLK_ASRC6);
        table[3] = HAL_CRU_ClkGetOtherFreq(MCLK_ASRC7);
        table[4] = HAL_CRU_ClkGetOtherFreq(MCLK_SPDIFTX);
        table[5] = HAL_CRU_ClkGetFreq(MCLK_SPDIFRX1);
        pRate = HAL_CRU_MuxGetFreqArray(clkMux, table, 11);
        break;
    default:
        break;
    }
    if (clkDiv) {
        freq = pRate / (HAL_CRU_ClkGetDiv(clkDiv));
    } else {
        freq = pRate;
    }

    return freq;
}

static HAL_Status HAL_CRU_ClkSetOtherFreq(eCLOCK_Name clockName, uint32_t rate)
{
    uint32_t clkMux = CLK_GET_MUX(clockName);
    uint32_t clkDiv = CLK_GET_DIV(clockName);
    uint32_t pRate = s_gpllFreq, mux = 0, div;
    uint32_t table[16];
    uint32_t uartTable[8] = { PLL_INPUT_OSC_RATE, s_gpllFreq, s_vpll0Freq, s_fracUart0Freq, s_fracUart1Freq, s_fracCom0Freq, s_fracCom1Freq, s_fracCom2Freq };
    uint32_t voiceTable0[14] = { PLL_INPUT_OSC_RATE, s_intVoice0Freq, s_intVoice1Freq, s_intVoice2Freq, s_fracVoice0Freq, s_fracVoice1Freq,
                                 s_fracCom0Freq, s_fracCom1Freq, s_fracCom2Freq, s_sai0MclkIoIn, s_sai1MclkIoIn, s_sai2MclkIoIn, s_sai3MclkIoIn };
    uint32_t voiceTable1[14] = { PLL_INPUT_OSC_RATE, s_intVoice0Freq, s_intVoice1Freq, s_intVoice2Freq, s_fracVoice0Freq, s_fracVoice1Freq,
                                 s_fracCom0Freq, s_fracCom1Freq, s_fracCom2Freq, s_sai4MclkIoIn, s_sai5MclkIoIn, s_sai6MclkIoIn, s_sai7MclkIoIn };

    switch (clockName) {
    case CLK_FRAC_UART0:
        HAL_CRU_ClkFracSetFreq(clockName, rate);
        s_fracUart0Freq = HAL_CRU_ClkFracGetFreq(clockName);

        return HAL_OK;
    case CLK_FRAC_UART1:
        HAL_CRU_ClkFracSetFreq(clockName, rate);
        s_fracUart1Freq = HAL_CRU_ClkFracGetFreq(clockName);

        return HAL_OK;
    case CLK_FRAC_VOICE0:
        HAL_CRU_ClkFracSetFreq(clockName, rate);
        s_fracVoice0Freq = HAL_CRU_ClkFracGetFreq(clockName);

        return HAL_OK;
    case CLK_FRAC_VOICE1:
        HAL_CRU_ClkFracSetFreq(clockName, rate);
        s_fracVoice1Freq = HAL_CRU_ClkFracGetFreq(clockName);

        return HAL_OK;
    case CLK_FRAC_COMMON0:
        HAL_CRU_ClkFracSetFreq(clockName, rate);
        s_fracCom0Freq = HAL_CRU_ClkFracGetFreq(clockName);

        return HAL_OK;
    case CLK_FRAC_COMMON1:
        HAL_CRU_ClkFracSetFreq(clockName, rate);
        s_fracCom1Freq = HAL_CRU_ClkFracGetFreq(clockName);

        return HAL_OK;
    case CLK_FRAC_COMMON2:
        HAL_CRU_ClkFracSetFreq(clockName, rate);
        s_fracCom2Freq = HAL_CRU_ClkFracGetFreq(clockName);

        return HAL_OK;
    case CLK_32K_FRAC:
        return HAL_CRU_ClkFracSetFreq(clockName, rate);

    case CLK_UART0:
    case CLK_UART1:
    case CLK_UART2:
    case CLK_UART3:
        mux = HAL_CRU_RoundFreqGetMuxArray(rate, uartTable, 8, &pRate, 1);
        break;
    case MCLK_PDM:
    case CLKOUT_PDM:
        voiceTable0[13] = s_gpllFreq;
        mux = HAL_CRU_RoundFreqGetMuxArray(rate, voiceTable0, 14, &pRate, 1);
        break;

    case SCLK_SAI0:
        voiceTable0[13] = HAL_CRU_ClkGetOtherFreq(MCLK_OUT_SAI0);
        mux = HAL_CRU_RoundFreqGetMuxArray(rate, voiceTable0, 14, &pRate, 0);
        break;
    case SCLK_SAI1:
        voiceTable0[13] = HAL_CRU_ClkGetOtherFreq(MCLK_OUT_SAI1);
        mux = HAL_CRU_RoundFreqGetMuxArray(rate, voiceTable0, 14, &pRate, 0);
        break;
    case SCLK_SAI2:
        voiceTable0[13] = HAL_CRU_ClkGetOtherFreq(MCLK_OUT_SAI2);
        mux = HAL_CRU_RoundFreqGetMuxArray(rate, voiceTable0, 14, &pRate, 0);
        break;
    case SCLK_SAI3:
        voiceTable0[13] = HAL_CRU_ClkGetOtherFreq(MCLK_OUT_SAI3);
        mux = HAL_CRU_RoundFreqGetMuxArray(rate, voiceTable0, 14, &pRate, 0);
        break;
    case SCLK_SAI4:
        voiceTable1[13] = HAL_CRU_ClkGetOtherFreq(MCLK_OUT_SAI4);
        mux = HAL_CRU_RoundFreqGetMuxArray(rate, voiceTable1, 14, &pRate, 0);
        break;
    case SCLK_SAI5:
        voiceTable1[13] = HAL_CRU_ClkGetOtherFreq(MCLK_OUT_SAI5);
        mux = HAL_CRU_RoundFreqGetMuxArray(rate, voiceTable1, 14, &pRate, 0);
        break;
    case SCLK_SAI6:
        voiceTable1[13] = HAL_CRU_ClkGetOtherFreq(MCLK_OUT_SAI6);
        mux = HAL_CRU_RoundFreqGetMuxArray(rate, voiceTable1, 14, &pRate, 0);
        break;
    case SCLK_SAI7:
        voiceTable1[13] = HAL_CRU_ClkGetOtherFreq(MCLK_OUT_SAI7);
        mux = HAL_CRU_RoundFreqGetMuxArray(rate, voiceTable1, 14, &pRate, 0);
        break;
    case MCLK_OUT_SAI0:
    case MCLK_OUT_SAI1:
    case MCLK_OUT_SAI2:
    case MCLK_OUT_SAI3:
        mux = HAL_CRU_RoundFreqGetMuxArray(rate, voiceTable0, 13, &pRate, 1);
        break;
    case MCLK_ASRC0:
    case MCLK_ASRC1:
    case MCLK_ASRC2:
    case MCLK_ASRC3:
    case MCLK_ASRC4:
    case MCLK_ASRC5:
    case MCLK_ASRC6:
    case MCLK_ASRC7:
        mux = HAL_CRU_RoundFreqGetMuxArray(rate, voiceTable0, 13, &pRate, 0);
        break;
    case MCLK_OUT_SAI4:
    case MCLK_OUT_SAI5:
    case MCLK_OUT_SAI6:
    case MCLK_OUT_SAI7:
    case MCLK_SPDIFTX:
        mux = HAL_CRU_RoundFreqGetMuxArray(rate, voiceTable1, 13, &pRate, 1);
        break;
    case LRCK_ASRC0_SRC:
    case LRCK_ASRC1_SRC:
    case LRCK_ASRC2_SRC:
    case LRCK_ASRC3_SRC:
    case LRCK_ASRC0_DST:
    case LRCK_ASRC1_DST:
    case LRCK_ASRC2_DST:
    case LRCK_ASRC3_DST:
        table[0] = HAL_CRU_ClkGetOtherFreq(MCLK_ASRC0);
        table[1] = HAL_CRU_ClkGetOtherFreq(MCLK_ASRC1);
        table[2] = HAL_CRU_ClkGetOtherFreq(MCLK_ASRC2);
        table[3] = HAL_CRU_ClkGetOtherFreq(MCLK_ASRC3);
        table[4] = HAL_CRU_ClkGetFreq(MCLK_SPDIFRX0);
        table[5] = HAL_CRU_ClkGetOtherFreq(CLKOUT_PDM);
        mux = HAL_CRU_RoundFreqGetMuxArray(rate, table, 11, &pRate, 0);
        break;
    case LRCK_ASRC4_SRC:
    case LRCK_ASRC5_SRC:
    case LRCK_ASRC6_SRC:
    case LRCK_ASRC7_SRC:
    case LRCK_ASRC4_DST:
    case LRCK_ASRC5_DST:
    case LRCK_ASRC6_DST:
    case LRCK_ASRC7_DST:
        table[0] = HAL_CRU_ClkGetOtherFreq(MCLK_ASRC4);
        table[1] = HAL_CRU_ClkGetOtherFreq(MCLK_ASRC5);
        table[2] = HAL_CRU_ClkGetOtherFreq(MCLK_ASRC6);
        table[3] = HAL_CRU_ClkGetOtherFreq(MCLK_ASRC7);
        table[4] = HAL_CRU_ClkGetOtherFreq(MCLK_SPDIFTX);
        table[5] = HAL_CRU_ClkGetFreq(MCLK_SPDIFRX1);
        mux = HAL_CRU_RoundFreqGetMuxArray(rate, table, 11, &pRate, 0);
        break;
    default:
        break;
    }

    div = HAL_DIV_ROUND_UP(pRate, rate);
    if (clkMux) {
        HAL_CRU_ClkSetMux(clkMux, mux);
    }
    if (clkDiv) {
        HAL_CRU_ClkSetDiv(clkDiv, div);
    }

    return HAL_OK;
}

static void CRU_Init(void)
{
    s_gpllFreq = HAL_CRU_GetPllFreq(&GPLL);
    s_vpll0Freq = HAL_CRU_GetPllFreq(&VPLL0);
    s_vpll1Freq = HAL_CRU_GetPllFreq(&VPLL1);
    s_fracUart0Freq = HAL_CRU_ClkGetOtherFreq(CLK_FRAC_UART0);
    s_fracUart1Freq = HAL_CRU_ClkGetOtherFreq(CLK_FRAC_UART1);
    s_fracVoice0Freq = HAL_CRU_ClkGetOtherFreq(CLK_FRAC_VOICE0);
    s_fracVoice1Freq = HAL_CRU_ClkGetOtherFreq(CLK_FRAC_VOICE1);
    s_fracCom0Freq = HAL_CRU_ClkGetOtherFreq(CLK_FRAC_COMMON0);
    s_fracCom1Freq = HAL_CRU_ClkGetOtherFreq(CLK_FRAC_COMMON1);
    s_fracCom2Freq = HAL_CRU_ClkGetOtherFreq(CLK_FRAC_COMMON2);
    if (GRF_PMU->OS_REG2 == 0) {
        HAL_CRU_ClkDisable(ACLK_DMA2DDR_GATE);
        HAL_CRU_ClkDisable(PCLK_DMA2DDR_GATE);
        HAL_CRU_ClkDisable(HCLK_DDR_PHY_GATE);
        HAL_CRU_ClkDisable(PCLK_DDRC_GATE);
        HAL_CRU_ClkDisable(PCLK_DDR_MONITOR_GATE);
        HAL_CRU_ClkDisable(CLK_DDR_MONITOR_TIMER_GATE);
        HAL_CRU_ClkDisable(PCLK_DDR_HWLP_GATE);
        HAL_CRU_ClkDisable(ACLK_DDRC_0_GATE);
        HAL_CRU_ClkDisable(ACLK_DDRC_1_GATE);
        HAL_CRU_ClkDisable(ACLK_DDR_NIU_GATE);
        HAL_CRU_ClkDisable(CLK_DDRC_GATE);
        HAL_CRU_ClkDisable(CLK_DDR_MONITOR_GATE);
    }
}

/**
 * @brief Get clk freq.
 * @param  clockName: CLOCK_Name id.
 * @return rate.
 * @attention these APIs allow direct use in the HAL layer.
 */
uint32_t HAL_CRU_ClkGetFreq(eCLOCK_Name clockName)
{
    uint32_t freq;
    uint32_t clkMux = CLK_GET_MUX(clockName);
    uint32_t clkDiv = CLK_GET_DIV(clockName);
    uint32_t pRate = s_gpllFreq;

    if (PLL_INPUT_OSC_RATE == 24576000) {
        GPLL.rateTable = PLL_TABLE_24P576M;
        VPLL0.rateTable = PLL_TABLE_24P576M;
        VPLL1.rateTable = PLL_TABLE_24P576M;
    }
    if (!s_gpllFreq) {
        CRU_Init();
    }
    switch (clockName) {
    case PLL_GPLL:
        freq = HAL_CRU_GetPllFreq(&GPLL);
        s_gpllFreq = freq;

        return freq;
    case PLL_VPLL0:
        freq = HAL_CRU_GetPllFreq(&VPLL0);
        s_vpll0Freq = freq;

        return freq;
    case PLL_VPLL1:
        freq = HAL_CRU_GetPllFreq(&VPLL1);
        s_vpll1Freq = freq;

        return freq;
    case PLL_GPLL_DIV:
    case PLL_GPLL_DIV_100M:
    case CLK_MAC_ROOT:
    case CLK_MAC_OUT:
        pRate = s_gpllFreq;
        break;
    case PLL_VPLL0_DIV:
    case CLK_INT_VOICE0:
    case CLK_INT_VOICE2:
        pRate = s_vpll0Freq;
        break;
    case PLL_VPLL1_DIV:
    case CLK_INT_VOICE1:
        pRate = s_vpll1Freq;
        break;
    case CLK_TSADC:
    case CLK_TSADC_TSEN:
    case CLK_SARADC:
    case SSTCLKEN_STARSE0:
    case SSTCLKEN_STARSE1:
        pRate = PLL_INPUT_OSC_RATE;
        break;

    case CLK_DSP0_SRC:
    case CLK_DSP1:
    case CLK_DSP2:
    case ACLK_NPU:
    case HCLK_NPU:
    case CLK_STARSE0:
    case CLK_STARSE1:
    case ACLK_BUS:
    case HCLK_BUS:
    case PCLK_BUS:
    case CLK_FLEXBUS_TX:
    case CLK_FLEXBUS_RX:
    case CLK_MAC_PTP_ROOT:
    case ACLK_FACC:
    case HCLK_FACC:
    case CLK_DDRPHY:
    case CLK_ASRC0:
    case CLK_ASRC1:
    case CLK_ASRC2:
    case CLK_ASRC3:
    case CLK_ASRC4:
    case CLK_ASRC5:
    case CLK_ASRC6:
    case CLK_ASRC7:
    case MCLK_SPDIFRX0:
    case MCLK_SPDIFRX1:
    case CLK_CORE_CRYPTO:
    case CLK_PKA_CRYPTO:
        pRate = HAL_CRU_MuxGetFreq3(clkMux, s_gpllFreq, s_vpll0Freq, s_vpll1Freq);
        break;
    case CLK_DSP0:
        return HAL_CRU_ClkGetFreq(CLK_DSP0_SRC);
    case ACLK_HSPERI:
    case ACLK_PERIB:
    case HCLK_PERIB:
    case CLK_PWM1:
    case ACLK_AUDIO0:
    case HCLK_AUDIO0:
    case ACLK_AUDIO1:
    case HCLK_AUDIO1:
    case PCLK_PMU:
    case CLK_PWM0:
        pRate = HAL_CRU_MuxGetFreq3(clkMux, HAL_CRU_ClkGetFreq(PLL_GPLL_DIV), HAL_CRU_ClkGetFreq(PLL_VPLL0_DIV), HAL_CRU_ClkGetFreq(PLL_VPLL1_DIV));
        break;

    case CLK_SPI1:
    case CLK_SPI2:
    case CLK_I2C0:
    case CLK_I2C1:
    case CLK_I2C2:
    case CLK_I2C3:
    case CLK_I2C4:
    case CLK_I2C5:
        pRate = HAL_CRU_MuxGetFreq4(clkMux, PLL_INPUT_OSC_RATE, HAL_CRU_ClkGetFreq(PLL_GPLL_DIV), HAL_CRU_ClkGetFreq(PLL_VPLL0_DIV), HAL_CRU_ClkGetFreq(PLL_VPLL1_DIV));
        break;
    case CLK_CAN:
    case CLK_SDMMC:
    case CCLK_SRC_EMMC:
    case SCLK_SFC:
    case DCLK_VOP:
    case CLK_RKFACC:
    case CLK_REF_OUT0:
    case CLK_REF_OUT1:
        pRate = HAL_CRU_MuxGetFreq4(clkMux, PLL_INPUT_OSC_RATE, s_gpllFreq, s_vpll0Freq, s_vpll1Freq);
        break;
    case DBCLK_GPIO0:
    case DBCLK_GPIO1:
    case DBCLK_GPIO2:
    case DBCLK_GPIO3:
    case DBCLK_GPIO4:
        return HAL_CRU_MuxGetFreq3(clkMux, PLL_INPUT_OSC_RATE, s_clkRcFreq, 32768);

    case CLK_WDT0:
    case CLK_WDT1:
    case CLK_WDT2:
    case CLK_WDT3:
    case CLK_WDT4:
        return PLL_INPUT_OSC_RATE;
    default:

        return HAL_CRU_ClkGetOtherFreq(clockName);
    }
    if ((clkMux == 0) && (clkDiv == 0)) {
        return 0;
    }

    if (clkDiv) {
        freq = pRate / (HAL_CRU_ClkGetDiv(clkDiv));
    } else {
        freq = pRate;
    }

    return freq;
}

/**
 * @brief Set clk freq.
 * @param  clockName: CLOCK_Name id.
 * @param  rate: clk rate.
 * @return HAL_Status.
 * @attention these APIs allow direct use in the HAL layer.
 */

HAL_SECTION_SRAM_CODE
HAL_Status HAL_CRU_ClkSetFreq(eCLOCK_Name clockName, uint32_t rate)
{
    HAL_Status error = HAL_OK;
    uint32_t clkMux = CLK_GET_MUX(clockName), mux = 0;
    uint32_t clkDiv = CLK_GET_DIV(clockName), div = 0;
    uint32_t pRate;

    if (PLL_INPUT_OSC_RATE == 24576000) {
        GPLL.rateTable = PLL_TABLE_24P576M;
        VPLL0.rateTable = PLL_TABLE_24P576M;
        VPLL1.rateTable = PLL_TABLE_24P576M;
    }

    if (!s_gpllFreq) {
        CRU_Init();
    }

    switch (clockName) {
    case PLL_GPLL:
        /* if have ddr and ddr parent pll is GPLL, GPLL not allow setting */
        if ((GRF_PMU->OS_REG2 == 0) || (HAL_CRU_ClkGetMux(CLK_DDRPHY_SEL) != 0)) {
            error = HAL_CRU_SetPllFreq(&GPLL, rate);
        }
        s_gpllFreq = HAL_CRU_GetPllFreq(&GPLL);

        return error;
    case PLL_VPLL0:
        /* if have ddr and ddr parent pll is VPLL0, VPLL0 not allow setting */
        if ((GRF_PMU->OS_REG2 == 0) || (HAL_CRU_ClkGetMux(CLK_DDRPHY_SEL) != 1)) {
            error = HAL_CRU_SetPllFreq(&VPLL0, rate);
        }
        s_vpll0Freq = HAL_CRU_GetPllFreq(&VPLL0);

        return error;
    case PLL_VPLL1:
        /* if have ddr and ddr parent pll is vpll1, vpll1 not allow setting */
        if ((GRF_PMU->OS_REG2 == 0) || (HAL_CRU_ClkGetMux(CLK_DDRPHY_SEL) != 2)) {
            error = HAL_CRU_SetPllFreq(&VPLL1, rate);
        }
        s_vpll1Freq = HAL_CRU_GetPllFreq(&VPLL1);

        return error;
    case PLL_GPLL_DIV:
    case PLL_GPLL_DIV_100M:
    case CLK_MAC_ROOT:
    case CLK_MAC_OUT:
        pRate = s_gpllFreq;
        break;
    case PLL_VPLL0_DIV:
        pRate = s_vpll0Freq;
        break;
    case CLK_INT_VOICE0:
        pRate = s_vpll0Freq;
        div = HAL_DIV_ROUND_UP(pRate, rate);
        HAL_CRU_ClkSetDiv(clkDiv, div);
        s_intVoice0Freq = HAL_CRU_ClkGetFreq(clockName);

        return HAL_OK;
    case CLK_INT_VOICE2:
        pRate = s_vpll0Freq;
        div = HAL_DIV_ROUND_UP(pRate, rate);
        HAL_CRU_ClkSetDiv(clkDiv, div);
        s_intVoice2Freq = HAL_CRU_ClkGetFreq(clockName);

        return HAL_OK;
    case PLL_VPLL1_DIV:
        pRate = s_vpll1Freq;
        break;
    case CLK_INT_VOICE1:
        pRate = s_vpll1Freq;
        div = HAL_DIV_ROUND_UP(pRate, rate);
        HAL_CRU_ClkSetDiv(clkDiv, div);
        s_intVoice1Freq = HAL_CRU_ClkGetFreq(clockName);

        return HAL_OK;
    case CLK_TSADC:
    case CLK_TSADC_TSEN:
    case CLK_SARADC:
    case SSTCLKEN_STARSE0:
    case SSTCLKEN_STARSE1:
        pRate = PLL_INPUT_OSC_RATE;
        break;

    case CLK_DSP0_SRC:
    case CLK_DSP1:
    case CLK_DSP2:
    case ACLK_NPU:
    case HCLK_NPU:
    case CLK_STARSE0:
    case CLK_STARSE1:
    case ACLK_BUS:
    case HCLK_BUS:
    case PCLK_BUS:
    case CLK_FLEXBUS_TX:
    case CLK_FLEXBUS_RX:
    case CLK_MAC_PTP_ROOT:
    case ACLK_FACC:
    case HCLK_FACC:
    case CLK_DDRPHY:
    case CLK_ASRC0:
    case CLK_ASRC1:
    case CLK_ASRC2:
    case CLK_ASRC3:
    case CLK_ASRC4:
    case CLK_ASRC5:
    case CLK_ASRC6:
    case CLK_ASRC7:
    case MCLK_SPDIFRX0:
    case MCLK_SPDIFRX1:
    case CLK_CORE_CRYPTO:
    case CLK_PKA_CRYPTO:
        mux = HAL_CRU_RoundFreqGetMux3(rate, s_gpllFreq, s_vpll0Freq, s_vpll1Freq, &pRate);
        break;
    case CLK_DSP0:
        mux = 0;
        break;
    case ACLK_HSPERI:
    case ACLK_PERIB:
    case HCLK_PERIB:
    case CLK_PWM1:
    case ACLK_AUDIO0:
    case HCLK_AUDIO0:
    case ACLK_AUDIO1:
    case HCLK_AUDIO1:
    case PCLK_PMU:
    case CLK_PWM0:
        mux = HAL_CRU_RoundFreqGetMux3(rate, HAL_CRU_ClkGetFreq(PLL_GPLL_DIV), HAL_CRU_ClkGetFreq(PLL_VPLL0_DIV), HAL_CRU_ClkGetFreq(PLL_VPLL1_DIV), &pRate);
        break;

    case CLK_SPI1:
    case CLK_SPI2:
    case CLK_I2C0:
    case CLK_I2C1:
    case CLK_I2C2:
    case CLK_I2C3:
    case CLK_I2C4:
    case CLK_I2C5:
        mux = HAL_CRU_RoundFreqGetMux4(rate, PLL_INPUT_OSC_RATE, HAL_CRU_ClkGetFreq(PLL_GPLL_DIV), HAL_CRU_ClkGetFreq(PLL_VPLL0_DIV), HAL_CRU_ClkGetFreq(PLL_VPLL1_DIV), &pRate);
        break;
    case CLK_CAN:
    case CLK_SDMMC:
    case CCLK_SRC_EMMC:
    case DCLK_VOP:
    case CLK_RKFACC:
    case CLK_REF_OUT0:
    case CLK_REF_OUT1:
        mux = HAL_CRU_RoundFreqGetMux4(rate, PLL_INPUT_OSC_RATE, s_gpllFreq, s_vpll0Freq, s_vpll1Freq, &pRate);
        break;
    case DBCLK_GPIO0:
    case DBCLK_GPIO1:
    case DBCLK_GPIO2:
    case DBCLK_GPIO3:
    case DBCLK_GPIO4:
        mux = HAL_CRU_RoundFreqGetMux3(rate, PLL_INPUT_OSC_RATE, s_clkRcFreq, 32768, &pRate);
        break;
    case SCLK_SFC:
        mux = 2;
        pRate = s_vpll0Freq;
        break;
    default:

        return HAL_CRU_ClkSetOtherFreq(clockName, rate);
    }

    if ((clkMux == 0) && (clkDiv == 0)) {
        return HAL_INVAL;
    }

    div = HAL_DIV_ROUND_UP(pRate, rate);
    if (clkMux) {
        HAL_CRU_ClkSetMux(clkMux, mux);
    }
    if (clkDiv) {
        HAL_CRU_ClkSetDiv(clkDiv, div);
    }

    return HAL_OK;
}

/**
 * @brief wdt glbrst enable.
 * @param  wdtType: wdt reset type.
 * @return HAL_OK.
 * @attention these APIs allow direct use in the HAL layer.
 */
HAL_Status HAL_CRU_WdtGlbRstEnable(eCRU_WdtRstType wdtType)
{
    uint32_t mask = 0, val = 0;

    switch (wdtType) {
    case GLB_RST_FST_WDT0:
        mask = CRU_GLB_RST_CON_CRU_WDT0_CON_MASK | CRU_GLB_RST_CON_CRU_WDT0_EN_MASK;
        val = (1 << CRU_GLB_RST_CON_CRU_WDT0_CON_SHIFT) | (1 << CRU_GLB_RST_CON_CRU_WDT0_EN_SHIFT);
        break;
    case GLB_RST_FST_WDT1:
        mask = CRU_GLB_RST_CON_CRU_WDT1_CON_MASK | CRU_GLB_RST_CON_CRU_WDT1_EN_MASK;
        val = (1 << CRU_GLB_RST_CON_CRU_WDT1_CON_SHIFT) | (1 << CRU_GLB_RST_CON_CRU_WDT1_EN_SHIFT);
        break;
    case GLB_RST_FST_WDT2:
        mask = CRU_GLB_RST_CON_CRU_WDT2_CON_MASK | CRU_GLB_RST_CON_CRU_WDT2_EN_MASK;
        val = (1 << CRU_GLB_RST_CON_CRU_WDT2_CON_SHIFT) | (1 << CRU_GLB_RST_CON_CRU_WDT2_EN_SHIFT);
        break;
    case GLB_RST_FST_WDT3:
        mask = CRU_GLB_RST_CON_CRU_WDT3_CON_MASK | CRU_GLB_RST_CON_CRU_WDT3_EN_MASK;
        val = (1 << CRU_GLB_RST_CON_CRU_WDT3_CON_SHIFT) | (1 << CRU_GLB_RST_CON_CRU_WDT3_EN_SHIFT);
        break;
    case GLB_RST_FST_WDT4:
        mask = CRU_GLB_RST_CON_CRU_WDT4_CON_MASK | CRU_GLB_RST_CON_CRU_WDT4_EN_MASK;
        val = (1 << CRU_GLB_RST_CON_CRU_WDT4_CON_SHIFT) | (1 << CRU_GLB_RST_CON_CRU_WDT4_EN_SHIFT);
        break;
    case GLB_RST_SND_WDT0:
        mask = CRU_GLB_RST_CON_CRU_WDT0_CON_MASK | CRU_GLB_RST_CON_CRU_WDT0_EN_MASK;
        val = (1 << CRU_GLB_RST_CON_CRU_WDT0_EN_SHIFT);
        break;
    case GLB_RST_SND_WDT1:
        mask = CRU_GLB_RST_CON_CRU_WDT1_CON_MASK | CRU_GLB_RST_CON_CRU_WDT1_EN_MASK;
        val = (1 << CRU_GLB_RST_CON_CRU_WDT1_EN_SHIFT);
        break;
    case GLB_RST_SND_WDT2:
        mask = CRU_GLB_RST_CON_CRU_WDT2_CON_MASK | CRU_GLB_RST_CON_CRU_WDT2_EN_MASK;
        val = (1 << CRU_GLB_RST_CON_CRU_WDT2_EN_SHIFT);
        break;
    case GLB_RST_SND_WDT3:
        mask = CRU_GLB_RST_CON_CRU_WDT3_CON_MASK | CRU_GLB_RST_CON_CRU_WDT3_EN_MASK;
        val = (1 << CRU_GLB_RST_CON_CRU_WDT3_EN_SHIFT);
        break;
    case GLB_RST_SND_WDT4:
        mask = CRU_GLB_RST_CON_CRU_WDT4_CON_MASK | CRU_GLB_RST_CON_CRU_WDT4_EN_MASK;
        val = (1 << CRU_GLB_RST_CON_CRU_WDT4_EN_SHIFT);
        break;

    default:

        return HAL_INVAL;
    }

    CRU->GLB_RST_CON = VAL_MASK_WE(mask, val);

    return HAL_OK;
}

/** @} */

/** @} */

/** @} */

#endif /* RKMCU_RK2118 && HAL_CRU_MODULE_ENABLED */
