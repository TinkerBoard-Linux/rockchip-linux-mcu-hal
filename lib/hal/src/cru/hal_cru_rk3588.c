/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2022 Rockchip Electronics Co., Ltd.
 */
#include "hal_base.h"

#if defined(SOC_RK3588) && defined(HAL_CRU_MODULE_ENABLED)

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

static struct PLL_CONFIG PLL_TABLE[] =
{
    /* _mhz, _p, _m, _s, _k */
    RK3588_PLL_RATE(1680000000, 2, 280, 1, 0),
    RK3588_PLL_RATE(1512000000, 2, 252, 1, 0),
    RK3588_PLL_RATE(1416000000, 2, 236, 1, 0),
    RK3588_PLL_RATE(1188000000, 2, 198, 1, 0),
    RK3588_PLL_RATE(1008000000, 2, 336, 2, 0),
    RK3588_PLL_RATE(1000000000, 3, 500, 2, 0),
    RK3588_PLL_RATE(983040000, 4, 655, 2, 23592),
    RK3588_PLL_RATE(816000000, 2, 272, 2, 0),
    RK3588_PLL_RATE(100000000, 3, 400, 5, 0),
    { /* sentinel */ },
};

static struct PLL_SETUP LPLL =
{
    .conOffset0 = &(DSUCRU->LPLL_CON[0]),
    .conOffset1 = &(DSUCRU->LPLL_CON[1]),
    .conOffset2 = &(DSUCRU->LPLL_CON[2]),
    .conOffset3 = &(DSUCRU->LPLL_CON[3]),
    .conOffset6 = &(DSUCRU->LPLL_CON[6]),
    .modeOffset = &(DSUCRU->MODE_CON[0]),
    .modeShift = 0,
    .lockShift = 15,
    .modeMask = 0x3,
    .rateTable = PLL_TABLE,
};

static struct PLL_SETUP B0PLL =
{
    .conOffset0 = &(BIGCORE0CRU->B0PLL_CON[0]),
    .conOffset1 = &(BIGCORE0CRU->B0PLL_CON[1]),
    .conOffset2 = &(BIGCORE0CRU->B0PLL_CON[2]),
    .conOffset3 = &(BIGCORE0CRU->B0PLL_CON[3]),
    .conOffset6 = &(BIGCORE0CRU->B0PLL_CON[6]),
    .modeOffset = &(BIGCORE0CRU->MODE_CON[0]),
    .modeShift = 0,
    .lockShift = 15,
    .modeMask = 0x3,
    .rateTable = PLL_TABLE,
};

static struct PLL_SETUP B1PLL =
{
    .conOffset0 = &(BIGCORE1CRU->B1PLL_CON[0]),
    .conOffset1 = &(BIGCORE1CRU->B1PLL_CON[1]),
    .conOffset2 = &(BIGCORE1CRU->B1PLL_CON[2]),
    .conOffset3 = &(BIGCORE1CRU->B1PLL_CON[3]),
    .conOffset6 = &(BIGCORE1CRU->B1PLL_CON[6]),
    .modeOffset = &(BIGCORE1CRU->MODE_CON[0]),
    .modeShift = 0,
    .lockShift = 15,
    .modeMask = 0x3,
    .rateTable = PLL_TABLE,
};

static struct PLL_SETUP CPLL =
{
    .conOffset0 = &(CRU->CPLL_CON[0]),
    .conOffset1 = &(CRU->CPLL_CON[1]),
    .conOffset2 = &(CRU->CPLL_CON[2]),
    .conOffset3 = &(CRU->CPLL_CON[3]),
    .conOffset6 = &(CRU->CPLL_CON[6]),
    .modeOffset = &(CRU->MODE_CON[0]),
    .modeShift = 8,
    .lockShift = 15,
    .modeMask = 0x3 << 8,
    .rateTable = PLL_TABLE,
};

static struct PLL_SETUP GPLL =
{
    .conOffset0 = &(CRU->GPLL_CON[0]),
    .conOffset1 = &(CRU->GPLL_CON[1]),
    .conOffset2 = &(CRU->GPLL_CON[2]),
    .conOffset3 = &(CRU->GPLL_CON[3]),
    .conOffset6 = &(CRU->GPLL_CON[6]),
    .modeOffset = &(CRU->MODE_CON[0]),
    .modeShift = 2,
    .lockShift = 15,
    .modeMask = 0x3 << 2,
    .rateTable = PLL_TABLE,
};

static struct PLL_SETUP NPLL =
{
    .conOffset0 = &(CRU->NPLL_CON[0]),
    .conOffset1 = &(CRU->NPLL_CON[1]),
    .conOffset2 = &(CRU->NPLL_CON[2]),
    .conOffset3 = &(CRU->NPLL_CON[3]),
    .conOffset6 = &(CRU->NPLL_CON[6]),
    .modeOffset = &(CRU->MODE_CON[0]),
    .modeShift = 0,
    .lockShift = 15,
    .modeMask = 0x3 << 0,
    .rateTable = PLL_TABLE,
};

static struct PLL_SETUP V0PLL =
{
    .conOffset0 = &(CRU->V0PLL_CON[0]),
    .conOffset1 = &(CRU->V0PLL_CON[1]),
    .conOffset2 = &(CRU->V0PLL_CON[2]),
    .conOffset3 = &(CRU->V0PLL_CON[3]),
    .conOffset6 = &(CRU->V0PLL_CON[6]),
    .modeOffset = &(CRU->MODE_CON[0]),
    .modeShift = 4,
    .lockShift = 15,
    .modeMask = 0x3 << 4,
    .rateTable = PLL_TABLE,
};

static struct PLL_SETUP AUPLL =
{
    .conOffset0 = &(CRU->AUPLL_CON[0]),
    .conOffset1 = &(CRU->AUPLL_CON[1]),
    .conOffset2 = &(CRU->AUPLL_CON[2]),
    .conOffset3 = &(CRU->AUPLL_CON[3]),
    .conOffset6 = &(CRU->AUPLL_CON[6]),
    .modeOffset = &(CRU->MODE_CON[0]),
    .modeShift = 6,
    .lockShift = 15,
    .modeMask = 0x3 << 6,
    .rateTable = PLL_TABLE,
};

static struct PLL_SETUP PPLL =
{
    .conOffset0 = &(PHPTOPCRU->PPLL_CON[0]),
    .conOffset1 = &(PHPTOPCRU->PPLL_CON[1]),
    .conOffset2 = &(PHPTOPCRU->PPLL_CON[2]),
    .conOffset3 = &(PHPTOPCRU->PPLL_CON[3]),
    .conOffset6 = &(PHPTOPCRU->PPLL_CON[6]),
    .lockShift = 15,
    .rateTable = PLL_TABLE,
};

/********************* Private Variable Definition ***************************/

static uint32_t s_lpllFreq;
static uint32_t s_cpllFreq = 1500 * 1000 * 1000;;
static uint32_t s_gpllFreq = 1188 * 1000 * 1000;
static uint32_t s_npllFreq;
static uint32_t s_v0pllFreq;
static uint32_t s_ppllFreq;
static uint32_t s_aupllFreq;

static uint32_t cru_suspend;

/********************* Private Function Definition ***************************/

/** @} */
/********************* Public Function Definition ****************************/
static uint32_t HAL_CRU_ClkFracGetFreq(eCLOCK_Name clockName)
{
    uint32_t divSrc, divFrac;
    uint32_t n, m, pRate;
    uint32_t freq = 0;
    uint32_t sel;
    uint32_t muxSrc, mux = CLK_GET_MUX(clockName);

    switch (clockName) {
    case CLK_I2S1_8CH_TX:
        divSrc = CLK_GET_DIV(CLK_I2S1_8CH_TX_SRC);
        divFrac = CLK_GET_DIV(CLK_I2S1_8CH_TX_FRAC);
        break;

    case CLK_I2S1_8CH_RX:
        divSrc = CLK_GET_DIV(CLK_I2S1_8CH_RX_SRC);
        divFrac = CLK_GET_DIV(CLK_I2S1_8CH_RX_FRAC);
        break;

    case CLK_UART2:
        muxSrc = CLK_GET_MUX(CLK_UART2_SRC);
        divSrc = CLK_GET_DIV(CLK_UART2_SRC);
        divFrac = CLK_GET_DIV(CLK_UART2_FRAC);
        break;

    default:

        return HAL_INVAL;
    }

    switch (clockName) {
    case CLK_I2S1_8CH_TX:
    case CLK_I2S1_8CH_RX:
        pRate = s_cpllFreq / HAL_CRU_ClkGetDiv(divSrc);

        sel = HAL_CRU_ClkGetMux(CLK_GET_MUX(clockName));
        if (sel == 0) {
            freq = pRate;
        } else if (sel == 1) {
            HAL_CRU_ClkGetFracDiv(divFrac, &n, &m);
            freq = (pRate / m) * n;
        } else if (sel == 2) {
            /* i2s1_mclkin is unknown input freq */
            freq = HAL_INVAL;
        } else {
            freq = PLL_INPUT_OSC_RATE / 2;
        }
        break;

    case CLK_UART2:
        if (HAL_CRU_ClkGetMux(muxSrc)) {
            pRate = s_cpllFreq / HAL_CRU_ClkGetDiv(divSrc);
        } else {
            pRate = s_gpllFreq / HAL_CRU_ClkGetDiv(divSrc);
        }

        if (HAL_CRU_ClkGetMux(mux) == 0) {
            freq = pRate;
        } else if (HAL_CRU_ClkGetMux(mux) == 1) {
            HAL_CRU_ClkGetFracDiv(divFrac, &n, &m);
            freq = (pRate / m) * n;
        } else if (HAL_CRU_ClkGetMux(mux) == 2) {
            freq = PLL_INPUT_OSC_RATE;
        }
        break;

    default:
        break;
    }

    return freq;
}

static HAL_Status HAL_CRU_ClkFracSetFreq(eCLOCK_Name clockName, uint32_t rate)
{
    uint32_t divSrc, divFrac;
    uint32_t gateId, fracGateId;
    uint32_t n, m;
    uint32_t muxSrc, mux = CLK_GET_MUX(clockName);

    switch (clockName) {
    case CLK_I2S1_8CH_TX:
        divSrc = CLK_GET_DIV(CLK_I2S1_8CH_TX_SRC);
        divFrac = CLK_GET_DIV(CLK_I2S1_8CH_TX_FRAC);
        gateId = MCLK_I2S1_8CH_TX_GATE;
        fracGateId = CLK_I2S1_8CH_FRAC_TX_GATE;
        break;

    case CLK_I2S1_8CH_RX:
        divSrc = CLK_GET_DIV(CLK_I2S1_8CH_RX_SRC);
        divFrac = CLK_GET_DIV(CLK_I2S1_8CH_RX_FRAC);
        gateId = MCLK_I2S1_8CH_RX_GATE;
        fracGateId = CLK_I2S1_8CH_FRAC_RX_GATE;
        break;

    case CLK_UART2:
        muxSrc = CLK_GET_MUX(CLK_UART2_SRC);
        divSrc = CLK_GET_DIV(CLK_UART2_SRC);
        divFrac = CLK_GET_DIV(CLK_UART2_FRAC);
        gateId = CLK_UART8_GATE;
        fracGateId = CLK_UART8_FRAC_GATE;
        break;

    default:

        return HAL_INVAL;
    }

    switch (clockName) {
    case CLK_I2S1_8CH_TX:
    case CLK_I2S1_8CH_RX:
        HAL_CRU_ClkEnable(gateId);
        HAL_CRU_ClkEnable(fracGateId);

        if ((!(PLL_INPUT_OSC_RATE % rate))) {
            HAL_CRU_ClkSetMux(mux, 3);
            HAL_CRU_ClkDisable(fracGateId);
        } else if ((!(s_cpllFreq % rate)) && ((s_cpllFreq / rate) < 31)) {
            HAL_CRU_ClkSetDiv(divSrc, s_cpllFreq / rate);
            HAL_CRU_ClkSetMux(mux, 0);
            HAL_CRU_ClkDisable(fracGateId);
        } else {
            HAL_CRU_FracdivGetConfig(rate, s_cpllFreq, &n, &m);
            HAL_CRU_ClkSetDiv(divSrc, 1);
            HAL_CRU_ClkSetFracDiv(divFrac, n, m);
            HAL_CRU_ClkSetMux(mux, 1);
        }
        break;

    case CLK_UART2:
        HAL_CRU_ClkEnable(gateId);
        HAL_CRU_ClkEnable(fracGateId);

        if ((!(PLL_INPUT_OSC_RATE % rate))) {
            HAL_CRU_ClkSetMux(mux, 2);
            HAL_CRU_ClkDisable(fracGateId);
        } else if ((!(s_cpllFreq % rate)) && ((s_cpllFreq / rate) < 31)) {
            HAL_CRU_ClkSetDiv(divSrc, s_cpllFreq / rate);
            HAL_CRU_ClkSetMux(mux, 0);
            HAL_CRU_ClkDisable(fracGateId);
        } else {
            HAL_CRU_FracdivGetConfig(rate, s_gpllFreq, &n, &m);
            HAL_CRU_ClkSetMux(muxSrc, 0);
            HAL_CRU_ClkSetDiv(divSrc, 1);
            HAL_CRU_ClkSetFracDiv(divFrac, n, m);
            HAL_CRU_ClkSetMux(mux, 1);
        }
        break;

    default:

        return HAL_INVAL;
    }

    return HAL_OK;
}

uint32_t HAL_CRU_ClkGetFreq(eCLOCK_Name clockName)
{
    uint32_t clkMux = CLK_GET_MUX(clockName);
    uint32_t clkDiv = CLK_GET_DIV(clockName);
    uint32_t pRate = 0, freq;

    if (cru_suspend) {
        return PLL_INPUT_OSC_RATE;
    }

    if (!s_cpllFreq) {
        s_cpllFreq = HAL_CRU_GetPllFreq(&CPLL);
    }

    switch (clockName) {
    case PLL_LPLL:
        freq = HAL_CRU_GetPllFreq(&LPLL);
        s_lpllFreq = freq;

        return freq;

    case PLL_B0PLL:
        freq = HAL_CRU_GetPllFreq(&B0PLL);

        return freq;

    case PLL_B1PLL:
        freq = HAL_CRU_GetPllFreq(&B1PLL);

        return freq;

    case PLL_CPLL:
        freq = HAL_CRU_GetPllFreq(&CPLL);
        s_cpllFreq = freq;

        return freq;

    case PLL_NPLL:
        freq = HAL_CRU_GetPllFreq(&NPLL);
        s_npllFreq = freq;

        return freq;

    case PLL_V0PLL:
        freq = HAL_CRU_GetPllFreq(&V0PLL);
        s_v0pllFreq = freq;

        return freq;

    case PLL_AUPLL:
        freq = HAL_CRU_GetPllFreq(&AUPLL);
        s_aupllFreq = freq;

        return freq;

    case PLL_PPLL:
        freq = HAL_CRU_GetPllFreq(&PPLL);
        s_ppllFreq = freq;

        return freq;

    case PLL_GPLL:
        freq = HAL_CRU_GetPllFreq(&GPLL);
        s_gpllFreq = freq;

        return freq;

    case CCLK_EMMC:
    case SCLK_SFC:
    case CCLK_SRC_SDIO:
        if (HAL_CRU_ClkGetMux(clkMux) == 0) {
            pRate = s_gpllFreq;
        } else if (HAL_CRU_ClkGetMux(clkMux) == 1) {
            pRate = s_cpllFreq;
        } else if (HAL_CRU_ClkGetMux(clkMux) == 2) {
            pRate = PLL_INPUT_OSC_RATE;
        }

        return pRate / HAL_CRU_ClkGetDiv(clkDiv);

    case BCLK_EMMC:
        if (HAL_CRU_ClkGetMux(clkMux) == 0) {
            pRate = s_gpllFreq;
        } else if (HAL_CRU_ClkGetMux(clkMux) == 1) {
            pRate = s_cpllFreq;
        }

        return pRate / HAL_CRU_ClkGetDiv(clkDiv);

    case CLK_REF_PIPE_PHY0:
    case CLK_REF_PIPE_PHY1:
    case CLK_REF_PIPE_PHY2:
        if (HAL_CRU_ClkGetMux(clkMux) == 0) {
            return PLL_INPUT_OSC_RATE;
        } else {
            return s_ppllFreq / HAL_CRU_ClkGetDiv(clkDiv);
        }

    case CLK_HCLK_VAD:
        if (HAL_CRU_ClkGetMux(clkMux) == 0) {
            pRate = 198000000;
        } else if (HAL_CRU_ClkGetMux(clkMux) == 1) {
            pRate = 99000000;
        } else if (HAL_CRU_ClkGetMux(clkMux) == 2) {
            pRate = 49500000;
        } else {
            pRate = PLL_INPUT_OSC_RATE;
        }

        return pRate;

    case CLK_MCLK_PDM0:
        if (HAL_CRU_ClkGetMux(clkMux) == 0) {
            pRate = 300000000;
        } else {
            pRate = 198000000;
        }

        return pRate;

    case HCLK_PMU_CM0:
        if (HAL_CRU_ClkGetMux(clkMux) == 0) {
            pRate = 396000000;
        } else if (HAL_CRU_ClkGetMux(clkMux) == 1) {
            pRate = 198000000;
        } else if (HAL_CRU_ClkGetMux(clkMux) == 2) {
            pRate = 99000000;
        } else {
            pRate = 24000000;
        }

        return pRate;

    case CLK_I2S1_8CH_TX:
    case CLK_I2S1_8CH_RX:
    case CLK_UART2:

        return HAL_CRU_ClkFracGetFreq(clockName);

    default:
        break;
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

HAL_Status HAL_CRU_ClkSetFreq(eCLOCK_Name clockName, uint32_t rate)
{
    HAL_Status error = HAL_OK;
    uint32_t clkMux = CLK_GET_MUX(clockName);
    uint32_t clkDiv = CLK_GET_DIV(clockName);
    uint32_t mux = 0, div = 0, pRate = 0;

    if (cru_suspend) {
        return HAL_OK;
    }

    if (!s_cpllFreq) {
        s_cpllFreq = HAL_CRU_GetPllFreq(&CPLL);
    }

    switch (clockName) {
    case PLL_LPLL:
        error = HAL_CRU_SetPllFreq(&LPLL, rate);
        s_lpllFreq = HAL_CRU_GetPllFreq(&LPLL);

        return error;

    case PLL_B0PLL:
        error = HAL_CRU_SetPllFreq(&B0PLL, rate);

        return error;

    case PLL_B1PLL:
        error = HAL_CRU_SetPllFreq(&B1PLL, rate);

        return error;

    case PLL_CPLL:
        error = HAL_CRU_SetPllFreq(&CPLL, rate);
        s_cpllFreq = HAL_CRU_GetPllFreq(&CPLL);

        return error;

    case PLL_PPLL:
        error = HAL_CRU_SetPllFreq(&PPLL, rate);
        s_ppllFreq = HAL_CRU_GetPllFreq(&PPLL);

        return error;

    case PLL_GPLL:
        error = HAL_CRU_SetPllFreq(&GPLL, rate);
        s_gpllFreq = HAL_CRU_GetPllFreq(&GPLL);

        return error;

    case PLL_NPLL:
        error = HAL_CRU_SetPllFreq(&NPLL, rate);
        s_npllFreq = HAL_CRU_GetPllFreq(&NPLL);

        return error;

    case PLL_AUPLL:
        error = HAL_CRU_SetPllFreq(&AUPLL, rate);
        s_aupllFreq = HAL_CRU_GetPllFreq(&AUPLL);

        return error;

    case PLL_V0PLL:
        error = HAL_CRU_SetPllFreq(&V0PLL, rate);
        s_v0pllFreq = HAL_CRU_GetPllFreq(&V0PLL);

        return error;

    case CCLK_EMMC:
    case SCLK_SFC:
    case CCLK_SRC_SDIO:
        if (PLL_INPUT_OSC_RATE % rate == 0) {
            pRate = PLL_INPUT_OSC_RATE;
            mux = 2;
        } else if (s_cpllFreq % rate == 0) {
            pRate = s_cpllFreq;
            mux = 1;
        } else {
            pRate = s_gpllFreq;
            mux = 0;
        }
        break;

    case BCLK_EMMC:
        if (s_cpllFreq % rate == 0) {
            pRate = s_cpllFreq;
            mux = 1;
        } else {
            pRate = s_gpllFreq;
            mux = 0;
        }
        break;

    case CLK_REF_PIPE_PHY0:
    case CLK_REF_PIPE_PHY1:
    case CLK_REF_PIPE_PHY2:
        if (rate == PLL_INPUT_OSC_RATE) {
            HAL_CRU_ClkSetMux(clkMux, 0);
            HAL_CRU_ClkSetDiv(clkDiv, 0);
        } else {
            div = HAL_DIV_ROUND_UP(s_ppllFreq, rate);
            HAL_CRU_ClkSetDiv(clkDiv, div);
            HAL_CRU_ClkSetMux(clkMux, 1);
        }

        return HAL_OK;

    case CLK_HCLK_VAD:
        if (rate >= 198000000) {
            mux = 0;
        } else if (rate >= 99000000) {
            mux = 1;
        } else if (rate >= 49500000) {
            mux = 2;
        } else {
            mux = 3;
        }
        HAL_CRU_ClkSetMux(clkMux, mux);

        return HAL_OK;

    case CLK_MCLK_PDM0:
        if (rate >= 300000000) {
            mux = 0;
        } else {
            mux = 1;
        }
        HAL_CRU_ClkSetMux(clkMux, mux);

        return HAL_OK;

    case HCLK_PMU_CM0:
        if (rate >= 396000000) {
            mux = 0;
        } else if (rate >= 198000000) {
            mux = 1;
        } else if (rate >= 99000000) {
            mux = 2;
        } else {
            mux = 3; /* 24000000 */
        }
        HAL_CRU_ClkSetMux(clkMux, mux);

        return HAL_OK;

    case CLK_I2S1_8CH_TX:
    case CLK_I2S1_8CH_RX:
    case CLK_UART2:

        return HAL_CRU_ClkFracSetFreq(clockName, rate);

    default:
        break;
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

static uint32_t clk_matrix_300m_src_div;
static uint32_t clk_matrix_pmu1_300m_src_div;
static uint32_t clk_matrix_400m_src_div;
static uint32_t clk_matrix_pmu1_400m_src_div;
static uint32_t clk_matrix_pmu1_200m_src_div;
static uint32_t hclk_pmu1_root_i_sel;

HAL_Status HAL_CRU_Suspend(void)
{
    /*
     * After ATF system suspend, the system clock rate is 24M.
     * Set divider 1:1 to be 24M rate for some modules.
     */
    clk_matrix_300m_src_div = HAL_CRU_ClkGetDiv(CLK_MATRIX_300M_SRC_DIV);
    clk_matrix_pmu1_300m_src_div = HAL_CRU_ClkGetDiv(CLK_MATRIX_PMU1_300M_SRC_DIV);
    clk_matrix_400m_src_div = HAL_CRU_ClkGetDiv(CLK_MATRIX_400M_SRC_DIV);
    clk_matrix_pmu1_400m_src_div = HAL_CRU_ClkGetDiv(CLK_MATRIX_PMU1_400M_SRC_DIV);
    clk_matrix_pmu1_200m_src_div = HAL_CRU_ClkGetDiv(CLK_MATRIX_PMU1_200M_SRC_DIV);
    hclk_pmu1_root_i_sel = HAL_CRU_ClkGetMux(HCLK_PMU1_ROOT_I_SEL);

    /* clk_mclk_pdm0 div 1:1 */
    HAL_CRU_ClkSetDiv(CLK_MATRIX_300M_SRC_DIV, 1);
    HAL_CRU_ClkSetDiv(CLK_MATRIX_PMU1_300M_SRC_DIV, 1);
    HAL_CRU_ClkSetDiv(CLK_MATRIX_400M_SRC_DIV, 1);
    HAL_CRU_ClkSetDiv(CLK_MATRIX_PMU1_400M_SRC_DIV, 1);
    HAL_CRU_ClkSetDiv(CLK_MATRIX_PMU1_200M_SRC_DIV, 1);
    /* hclk_vad div 1:1 */
    HAL_CRU_ClkSetMux(HCLK_PMU1_ROOT_I_SEL, 3);

    cru_suspend = 1;

    return HAL_OK;
}

HAL_Status HAL_CRU_Resume(void)
{
    /* clk_mclk_pdm0 */
    HAL_CRU_ClkSetDiv(CLK_MATRIX_300M_SRC_DIV, clk_matrix_300m_src_div);
    HAL_CRU_ClkSetDiv(CLK_MATRIX_PMU1_300M_SRC_DIV, clk_matrix_pmu1_300m_src_div);
    HAL_CRU_ClkSetDiv(CLK_MATRIX_400M_SRC_DIV, clk_matrix_400m_src_div);
    HAL_CRU_ClkSetDiv(CLK_MATRIX_PMU1_400M_SRC_DIV, clk_matrix_pmu1_400m_src_div);
    HAL_CRU_ClkSetDiv(CLK_MATRIX_PMU1_200M_SRC_DIV, clk_matrix_pmu1_200m_src_div);
    /* hclk_vad */
    HAL_CRU_ClkSetMux(HCLK_PMU1_ROOT_I_SEL, hclk_pmu1_root_i_sel);

    cru_suspend = 0;

    return HAL_OK;
}

/** @} */

/** @} */

/** @} */

#endif /* SOC_RK3588 && HAL_CRU_MODULE_ENABLED */
