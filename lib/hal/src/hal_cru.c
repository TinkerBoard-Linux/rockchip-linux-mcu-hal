/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

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

#include "hal_base.h"

#ifdef HAL_CRU_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/
#define MHZ 1000000
#define KHZ 1000

#define PLL_INPUT_OSC_RATE       (24 * MHZ)
#define MIN_FOUTVCO_FREQ         (800 * MHZ)
#define MAX_FOUTVCO_FREQ         (2000 * MHZ)
#define MIN_FOUT_FREQ            (24 * MHZ)
#define MAX_FOUT_FREQ            (1400 * MHZ)
#define DCLK_LCDC_PLL_LIMIT_FREQ 800 * 1000000

#define CLK_RESET_GET_REG_OFFSET(x) ((uint32_t)(x / 16))
#define CLK_RESET_GET_BITS_SHIFT(x) ((uint32_t)(x % 16))

#define CLK_GATE_GET_REG_OFFSET(x) ((uint32_t)(x / 16))
#define CLK_GATE_GET_BITS_SHIFT(x) ((uint32_t)(x % 16))

#define CLK_GET_MUX(x) (x & 0x0F0F00FFU)
#define CLK_GET_DIV(x) (((x & 0xFF00U) >> 8) | ((x & 0xF0F00000U) >> 4))

#define WIDTH_TO_MASK(width) ((1 << (width)) - 1)

#define CLK_MUX_REG_OFFSET_SHIFT 0U
#define CLK_MUX_REG_OFFSET_MASK  0x0000FFFFU
#define CLK_MUX_SHIFT_SHIFT      16U
#define CLK_MUX_SHIFT_MASK       0x00FF0000U
#define CLK_MUX_WIDTH_SHIFT      24U
#define CLK_MUX_WIDTH_MASK       0xFF000000U

#define CLK_MUX_GET_REG_OFFSET(x) \
    (((uint32_t)(x)&CLK_MUX_REG_OFFSET_MASK) >> CLK_MUX_REG_OFFSET_SHIFT)
#define CLK_MUX_GET_BITS_SHIFT(x) \
    (((uint32_t)(x)&CLK_MUX_SHIFT_MASK) >> CLK_MUX_SHIFT_SHIFT)
#define CLK_MUX_GET_MASK(x)                                                    \
    WIDTH_TO_MASK((((uint32_t)(x)&CLK_MUX_WIDTH_MASK) >> CLK_MUX_WIDTH_SHIFT)) \
        << CLK_MUX_GET_BITS_SHIFT(x)

#define CLK_DIV_REG_OFFSET_SHIFT 0U
#define CLK_DIV_REG_OFFSET_MASK  0x0000FFFFU
#define CLK_DIV_SHIFT_SHIFT      16U
#define CLK_DIV_SHIFT_MASK       0x00FF0000U
#define CLK_DIV_WIDTH_SHIFT      24U
#define CLK_DIV_WIDTH_MASK       0xFF000000U

#define CLK_DIV_GET_REG_OFFSET(x) \
    (((uint32_t)(x)&CLK_DIV_REG_OFFSET_MASK) >> CLK_DIV_REG_OFFSET_SHIFT)
#define CLK_DIV_GET_BITS_SHIFT(x) \
    (((uint32_t)(x)&CLK_DIV_SHIFT_MASK) >> CLK_DIV_SHIFT_SHIFT)
#define CLK_DIV_GET_MASK(x)                                                    \
    WIDTH_TO_MASK((((uint32_t)(x)&CLK_DIV_WIDTH_MASK) >> CLK_DIV_WIDTH_SHIFT)) \
        << CLK_DIV_GET_BITS_SHIFT(x)

#define RK_PLL_MODE_SLOW   0
#define RK_PLL_MODE_NORMAL 1
#define RK_PLL_MODE_DEEP   2
#define PLL_GET_PLLMODE(val, shift, mask) (((uint32_t)(val)&mask) >> shift)

#define PLL_GET_FBDIV(x) (((uint32_t)(x) & (PLL_FBDIV_MASK)) >> PLL_FBDIV_SHIFT)
#define PLL_GET_REFDIV(x) \
    (((uint32_t)(x) & (PLL_REFDIV_MASK)) >> PLL_REFDIV_SHIFT)
#define PLL_GET_POSTDIV1(x) \
    (((uint32_t)(x) & (PLL_POSTDIV1_MASK)) >> PLL_POSTDIV1_SHIFT)
#define PLL_GET_POSTDIV2(x) \
    (((uint32_t)(x) & (PLL_POSTDIV2_MASK)) >> PLL_POSTDIV2_SHIFT)
#define PLL_GET_DSMPD(x) (((uint32_t)(x) & (PLL_DSMPD_MASK)) >> PLL_DSMPD_SHIFT)
#define PLL_GET_FRAC(x)  (((uint32_t)(x) & (PLL_FRAC_MASK)) >> PLL_FRAC_SHIFT)

/********************* Private Structure Definition **************************/
static struct PLL_CONFIG g_rockchipAutoTable;

static uint32_t s_gpllFreq;
static uint32_t s_cpllFreq;

struct PLL_CONFIG PLL_RATE[4] = {
    /* _mhz, _refDiv, _fbDiv, _postdDv1, _postDiv2, _dsmpd, _frac */
    RK_PLL_RATE(1200000000, 1, 50, 1, 1, 1, 0),
    RK_PLL_RATE(1008000000, 1, 84, 2, 1, 1, 0),
    RK_PLL_RATE(816000000, 1, 68, 2, 1, 1, 0),
    RK_PLL_RATE(600000000, 1, 75, 3, 1, 1, 0),
};

struct PLL_SETUP GPLL = {
    .conOffset0 = (uint32_t)(&(CRU->CRU_GPLL_CON0)),
    .conOffset1 = (uint32_t)(&(CRU->CRU_GPLL_CON1)),
    .conOffset2 = (uint32_t)(&(CRU->CRU_GPLL_CON2)),
    .modeOffset = (uint32_t)(&(CRU->CRU_MODE_CON00)),
    .modeShift = 2,
    .lockShift = 10,
    .modeMask = 0x3 << 2,
    .rateTable = PLL_RATE,
};

struct PLL_SETUP CPLL = {
    .conOffset0 = (uint32_t)(&(CRU->CRU_CPLL_CON0)),
    .conOffset1 = (uint32_t)(&(CRU->CRU_CPLL_CON1)),
    .conOffset2 = (uint32_t)(&(CRU->CRU_CPLL_CON2)),
    .modeOffset = (uint32_t)(&(CRU->CRU_MODE_CON00)),
    .modeShift = 0,
    .lockShift = 10,
    .modeMask = 0x3 << 0,
    .rateTable = PLL_RATE,
};

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

/** Calculate the greatest common divisor */
static uint32_t CRU_Gcd(uint32_t m, uint32_t n)
{
    int t;

    while (m > 0) {
        if (n > m) {
            t = m;
            m = n;
            n = t;
        }
        m -= n;
    }

    return n;
}

/**
 * @brief Rockchip pll clk set postdiv.
 * @param  foutHz: output freq
 * @param  *postDiv1: pll postDiv1
 * @param  *postDiv2: pll postDiv2
 * @param  *foutVco: pll vco
 * @return HAL_Status.
 * How to calculate the PLL:
 *     Formulas also embedded within the fractional PLL Verilog model:
 *     If DSMPD = 1 (DSM is disabled, "integer mode")
 *     FOUTVCO = FREF / REFDIV * FBDIV
 *     FOUTPOSTDIV = FOUTVCO / POSTDIV1 / POSTDIV2
 *     Where:
 *     FOUTVCO = fractional PLL non-divided output frequency
 *     FOUTPOSTDIV = fractional PLL divided output frequency
 *               (output of second post divider)
 */
static HAL_Status CRU_PllSetPostDiv(uint32_t foutHz, uint32_t *postDiv1,
                                    uint32_t *postDiv2, uint32_t *foutVco)
{
    uint32_t freq;

    if (foutHz < MIN_FOUTVCO_FREQ) {
        for (*postDiv1 = 1; *postDiv1 <= 7; (*postDiv1)++) {
            for (*postDiv2 = 1; *postDiv2 <= 7; (*postDiv2)++) {
                freq = foutHz * (*postDiv1) * (*postDiv2);
                if (freq >= MIN_FOUTVCO_FREQ && freq <= MAX_FOUTVCO_FREQ) {
                    *foutVco = freq;

                    return HAL_OK;
                }
            }
        }

        return HAL_ERROR;
    } else {
        *postDiv1 = 1;
        *postDiv2 = 1;

        return HAL_OK;
    }
}

/**
 * @brief Get pll parameter by auto.
 * @param  finHz: pll intput freq
 * @param  foutHz: pll output freq
 * @return struct PLL_CONFIG.
 * How to calculate the PLL:
 *     Formulas also embedded within the fractional PLL Verilog model:
 *     If DSMPD = 1 (DSM is disabled, "integer mode")
 *     FOUTVCO = FREF / REFDIV * FBDIV
 *     FOUTPOSTDIV = FOUTVCO / POSTDIV1 / POSTDIV2
 *     Where:
 *     FOUTVCO = fractional PLL non-divided output frequency
 *     FOUTPOSTDIV = fractional PLL divided output frequency
 *               (output of second post divider)
 *     FREF = fractional PLL input reference frequency, (the OSC_HZ 24MHz input)
 *     REFDIV = fractional PLL input reference clock divider
 *     FBDIV = Integer value programmed into feedback divide
 */
static const struct PLL_CONFIG *CRU_PllSetByAuto(uint32_t finHz,
                                                 uint32_t foutHz)
{
    struct PLL_CONFIG *rateTable = &g_rockchipAutoTable;
    uint32_t foutVco = foutHz;
    uint32_t fin64, frac64;
    uint32_t fFrac, postDiv1, postDiv2;
    uint32_t clkGcd = 0;
    HAL_Status error;

    if (finHz == 0 || foutHz == 0 || foutHz == finHz)
        return NULL;

    error = CRU_PllSetPostDiv(foutHz, &postDiv1, &postDiv2, &foutVco);
    if (error)
        return NULL;
    rateTable->postDiv1 = postDiv1;
    rateTable->postDiv2 = postDiv2;
    rateTable->dsmpd = 1;

    if (finHz / MHZ * MHZ == finHz && foutHz / MHZ * MHZ == foutHz) {
        finHz /= MHZ;
        foutVco /= MHZ;
        clkGcd = CRU_Gcd(finHz, foutVco);
        rateTable->refDiv = finHz / clkGcd;
        rateTable->fbDiv = foutVco / clkGcd;

        rateTable->frac = 0;
    } else {
        clkGcd = CRU_Gcd(finHz / MHZ, foutVco / MHZ);
        rateTable->refDiv = finHz / MHZ / clkGcd;
        rateTable->fbDiv = foutVco / MHZ / clkGcd;
        rateTable->frac = 0;

        fFrac = (foutVco % MHZ);
        fin64 = finHz;
        fin64 = fin64 / rateTable->refDiv;
        frac64 = fFrac << 24;
        frac64 = frac64 / fin64;
        rateTable->frac = frac64;
        if (rateTable->frac > 0)
            rateTable->dsmpd = 0;
    }

    return rateTable;
}

/**
 * @brief Get pll parameter by rateTable.
 * @param  *pSetup: struct PLL_SETUP struct, Contains PLL register parameters
 * @param  rate: pll target rate.
 * @return struct PLL_CONFIG.
 * How to calculate the PLL:
 *     Look up the rateTable to get the PLL config parameter
 */
static const struct PLL_CONFIG *CRU_PllGetSettings(struct PLL_SETUP *pSetup,
                                                   uint32_t rate)
{
    const struct PLL_CONFIG *rateTable = pSetup->rateTable;

    while (rateTable->rate) {
        if (rateTable->rate == rate)
            break;
        rateTable++;
    }
    if (rateTable->rate != rate)
        return CRU_PllSetByAuto(PLL_INPUT_OSC_RATE, rate);
    else
        return rateTable;
}

/**
 * @brief Get pll freq.
 * @param  *pSetup: struct PLL_SETUP struct,Contains PLL register parameters
 * @return pll rate.
 * How to calculate the PLL:
 *     Formulas also embedded within the fractional PLL Verilog model:
 *     If DSMPD = 1 (DSM is disabled, "integer mode")
 *     FOUTVCO = FREF / REFDIV * FBDIV
 *     FOUT = FOUTVCO / POSTDIV1 / POSTDIV2
 *     If DSMPD = 0 (DSM is enabled, "fractional mode")
 *     FOUTVCO = (FREF / REFDIV) * (FBDIV + FRAC / (2^24))
 *     FOUTPOSTDIV = FOUTVCO / (POSTDIV1*POSTDIV2)
 *     FOUT = FOUTVCO / POSTDIV1 / POSTDIV2
 */
static uint32_t CRU_GetPllFreq(struct PLL_SETUP *pSetup)
{
    uint32_t refDiv, fbDiv, postdDv1, postDiv2, frac, dsmpd;
    uint32_t mode = 0, rate = PLL_INPUT_OSC_RATE;

    mode = PLL_GET_PLLMODE(pSetup->modeOffset, pSetup->modeShift,
                           pSetup->modeMask);

    switch (mode) {
    case RK_PLL_MODE_SLOW:
        rate = PLL_INPUT_OSC_RATE;
        break;
    case RK_PLL_MODE_NORMAL:
        postdDv1 = PLL_GET_POSTDIV1(pSetup->conOffset0);
        fbDiv = PLL_GET_FBDIV(pSetup->conOffset1);
        postDiv2 = PLL_GET_POSTDIV2(pSetup->conOffset1);
        refDiv = PLL_GET_REFDIV(pSetup->conOffset1);
        dsmpd = PLL_GET_DSMPD(pSetup->conOffset1);
        frac = PLL_GET_FRAC(pSetup->conOffset2);
        rate = (rate / refDiv) * fbDiv;
        rate *= fbDiv;
        if (dsmpd == 0) {
            uint32_t fracRate = PLL_INPUT_OSC_RATE;

            fracRate = fracRate >> 12;
            fracRate = fracRate * frac;
            fracRate = fracRate >> 12;
            fracRate = fracRate / refDiv;
            rate += fracRate;
        }
        rate = rate / (postdDv1 * postDiv2);
        break;
    case RK_PLL_MODE_DEEP:
    default:
        rate = 32768;
        break;
    }

    return rate;
}

/**
 * @brief Set pll freq.
 * @param  *pSetup: struct PLL_SETUP struct,Contains PLL register parameters
 * @param  rate: pll set rate
 * @return HAL_Status.
 * How to calculate the PLL:
 *     Force PLL into slow mode
 *     Pll Power down
 *     Pll Config fbDiv\refDiv\postdDv1\postDiv2\dsmpd\frac
 *     Pll Power up
 *     Waiting for pll lock
 *     Force PLL into normal mode
 */
static HAL_Status CRU_SetPllFreq(struct PLL_SETUP *pSetup, uint32_t rate)
{
    const struct PLL_CONFIG *pConfig;
    int delay = 2400;

    if (rate == CRU_GetPllFreq(pSetup))
        return HAL_OK;
    else if (rate < MIN_FOUT_FREQ)
        return HAL_INVAL;
    else if (rate > MAX_FOUT_FREQ)
        return HAL_INVAL;

    pConfig = CRU_PllGetSettings(pSetup, rate);
    if (!pConfig)
        return HAL_ERROR;

    /* Force PLL into slow mode to ensure output stable clock */
    pSetup->modeOffset =
        RK_CLRSET_BITS(pSetup->modeMask, RK_PLL_MODE_SLOW << pSetup->modeShift);

    /* Pll Power down */
    pSetup->conOffset1 = RK_CLRSET_BITS(PWRDOWN_MASK, 1 << PWRDOWN_SHIT);

    /* Pll Config */
    pSetup->conOffset1 = RK_CLRSET_BITS(
        PLL_POSTDIV2_MASK, pConfig->postDiv2 << PLL_POSTDIV2_SHIFT);
    pSetup->conOffset1 =
        RK_CLRSET_BITS(PLL_REFDIV_MASK, pConfig->refDiv << PLL_REFDIV_SHIFT);
    pSetup->conOffset0 = RK_CLRSET_BITS(
        PLL_POSTDIV1_MASK, pConfig->postDiv1 << PLL_POSTDIV1_SHIFT);
    pSetup->conOffset0 =
        RK_CLRSET_BITS(PLL_FBDIV_MASK, pConfig->fbDiv << PLL_FBDIV_SHIFT);
    pSetup->conOffset1 =
        RK_CLRSET_BITS(PLL_DSMPD_MASK, pConfig->dsmpd << PLL_DSMPD_SHIFT);
    pSetup->conOffset2 = (pSetup->conOffset2 & 0xff000000) | pConfig->frac;

    /* Pll Power up */
    pSetup->conOffset1 = RK_CLRSET_BITS(PWRDOWN_MASK, 0 << PWRDOWN_SHIT);

    /* Waiting for pll lock */
    while (delay > 0) {
        if (pSetup->conOffset1 & (1 << pSetup->lockShift))
            break;
        HAL_DelayMs(1);
        delay--;
    }
    if (delay == 0)
        return HAL_TIMEOUT;

    /* Force PLL into normal mode */
    pSetup->modeOffset = RK_CLRSET_BITS(
        pSetup->modeMask, RK_PLL_MODE_NORMAL << pSetup->modeShift);

    return HAL_OK;
}

static HAL_Status CRU_FracdivGetConfig(uint32_t rateOut, uint32_t rate,
                                       uint32_t *numerator,
                                       uint32_t *denominator)
{
    uint32_t gcdVal;

    gcdVal = CRU_Gcd(rate, rateOut);
    if (!gcdVal) {
        return HAL_ERROR;
    }

    *numerator = rateOut / gcdVal;
    *denominator = rate / gcdVal;

    if (*numerator < 4) {
        *numerator *= 4;
        *denominator *= 4;
    }
    if (*numerator > 0xffff || *denominator > 0xffff)
        return HAL_INVAL;

    return HAL_OK;
}

/********************* Public Function Definition ****************************/

/** @defgroup CRU_Exported_Functions_Group5 Other Functions
 *  @{
 */

/**
 * @brief  IP Clock is Enabled API
 * @param  clk: clk gate id
 * @return HAL_Check
 */
HAL_Check HAL_CRU_ClkIsEnabled(uint32_t clk)
{
    uint32_t index = CLK_GATE_GET_REG_OFFSET(clk);
    uint32_t shift = CLK_GATE_GET_BITS_SHIFT(clk);

    return (HAL_Check)(
        !((CRU->CRU_CLKGATE_CON[index] & (1 << shift)) >> shift));
}

/**
 * @brief  IP Clock Enable API
 * @param  clk: clk gate id
 * @return NONE
 */
HAL_Status HAL_CRU_ClkEnable(uint32_t clk)
{
    uint32_t index = CLK_GATE_GET_REG_OFFSET(clk);
    uint32_t shift = CLK_GATE_GET_BITS_SHIFT(clk);

    CRU->CRU_CLKGATE_CON[index] = RK_CLRSET_BITS(1 << shift, 0 << shift);

    return HAL_OK;
}

/**
 * @brief  IP Clock Disabled API
 * @param  clk: clk gate id
 * @return NONE
 */
HAL_Status HAL_CRU_ClkDisable(uint32_t clk)
{
    uint32_t index = CLK_GATE_GET_REG_OFFSET(clk);
    uint32_t shift = CLK_GATE_GET_BITS_SHIFT(clk);

    HAL_ASSERT(shift < 16);
    CRU->CRU_CLKGATE_CON[index] = RK_CLRSET_BITS(1 << shift, 1 << shift);

    return HAL_OK;
}

/**
 * @brief  IP Clock is reset API
 * @param  clk: clk reset id
 * @return HAL_Check
 */
HAL_Check HAL_CRU_ClkIsReset(uint32_t clk)
{
    uint32_t index = CLK_GATE_GET_REG_OFFSET(clk);
    uint32_t shift = CLK_GATE_GET_BITS_SHIFT(clk);

    return (HAL_Check)((CRU->CRU_CLKGATE_CON[index] & (1 << shift)) >> shift);
}

/**
 * @brief  IP Clock Reset Assert API
 * @param  clk: clk reset id
 * @return NONE
 */
HAL_Status HAL_CRU_ClkResetAssert(uint32_t clk)
{
    uint32_t index = CLK_RESET_GET_REG_OFFSET(clk);
    uint32_t shift = CLK_RESET_GET_BITS_SHIFT(clk);

    HAL_ASSERT(shift < 16);
    CRU->CRU_SOFTRST_CON[index] = RK_CLRSET_BITS(1 << shift, 1 << shift);

    return HAL_OK;
}

/**
 * @brief  IP Clock Reset Deassert API
 * @param  clk: clk reset id
 * @return NONE
 */
HAL_Status HAL_CRU_ClkResetDeassert(uint32_t clk)
{
    uint32_t index = CLK_RESET_GET_REG_OFFSET(clk);
    uint32_t shift = CLK_RESET_GET_BITS_SHIFT(clk);

    HAL_ASSERT(shift < 16);
    CRU->CRU_SOFTRST_CON[index] = RK_CLRSET_BITS(1 << shift, 0 << shift);

    return HAL_OK;
}

/**
 * @brief  IP Clock set div API
 * @param  divName: div id(Contains div offset, shift, mask information)
 * @param  divValue: div value
 * @return NONE
 */
HAL_Status HAL_CRU_ClkSetDiv(uint32_t divName, uint32_t divValue)
{
    uint32_t shift, mask, index;

    index = CLK_DIV_GET_REG_OFFSET(divName);
    shift = CLK_DIV_GET_BITS_SHIFT(divName);
    HAL_ASSERT(shift < 16);
    mask = CLK_DIV_GET_MASK(divName);
    HAL_ASSERT(divValue < mask);

    CRU->CRU_CLKSEL_CON[index] = RK_CLRSET_BITS(mask, (divValue - 1U) << shift);

    return HAL_OK;
}

/**
 * @brief  IP Clock get div API
 * @param  divName: div id(Contains div offset, shift, mask information)
 * @return div value
 */
uint32_t HAL_CRU_ClkGetDiv(uint32_t divName)
{
    uint32_t shift, mask, index;

    index = CLK_DIV_GET_REG_OFFSET(divName);
    shift = CLK_DIV_GET_BITS_SHIFT(divName);
    HAL_ASSERT(shift < 16);
    mask = CLK_DIV_GET_MASK(divName);

    return ((((CRU->CRU_CLKSEL_CON[index]) & mask) >> shift) + 1);
}

/**
 * @brief  IP Clock set mux API
 * @param  muxName: mux id(Contains mux offset, shift, mask information)
 * @param  muxValue: mux value
 * @return NONE
 */
HAL_Status HAL_CRU_ClkSetMux(uint32_t muxName, uint32_t muxValue)
{
    uint32_t shift, mask, index;

    index = CLK_MUX_GET_REG_OFFSET(muxName);
    shift = CLK_MUX_GET_BITS_SHIFT(muxName);
    HAL_ASSERT(shift < 16);
    mask = CLK_MUX_GET_MASK(muxName);

    CRU->CRU_CLKSEL_CON[index] = RK_CLRSET_BITS(mask, muxValue << shift);

    return HAL_OK;
}

/**
 * @brief  IP Clock get mux API
 * @param  muxName: mux id(Contains mux offset, shift, mask information)
 * @return mux value
 */
uint32_t HAL_CRU_ClkGetMux(uint32_t muxName)
{
    uint32_t shift, mask, index;

    index = CLK_MUX_GET_REG_OFFSET(muxName);
    shift = CLK_MUX_GET_BITS_SHIFT(muxName);
    HAL_ASSERT(shift < 16);
    mask = CLK_MUX_GET_MASK(muxName);

    return ((CRU->CRU_CLKSEL_CON[index] & mask) >> shift);
}

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
    case MCLK_I2S1_8CH:
        muxSrc = CLK_GET_MUX(CLK_I2S1_8CH_SRC);
        divSrc = CLK_GET_DIV(CLK_I2S1_8CH_SRC);
        divFrac = CLK_GET_DIV(CLK_I2S1_8CH_FRAC);
        break;
    case I2S_MCLKOUT:
        muxSrc = CLK_GET_MUX(CLK_I2S8CH_SRC);
        divSrc = CLK_GET_DIV(CLK_I2S8CH_SRC);
        divFrac = CLK_GET_DIV(CLK_I2S8CH_FRAC);
        break;
    default:

        return HAL_INVAL;
    }

    n = CRU->CRU_CLKSEL_CON[CLK_DIV_GET_REG_OFFSET(divFrac)] & 0xffff0000 >> 16;
    m = CRU->CRU_CLKSEL_CON[CLK_DIV_GET_REG_OFFSET(divFrac)] & 0x0000ffff;

    if (HAL_CRU_ClkGetMux(muxSrc))
        pRate = s_cpllFreq / (HAL_CRU_ClkGetDiv(divSrc) + 1);
    else
        pRate = s_gpllFreq / (HAL_CRU_ClkGetDiv(divSrc) + 1);

    if (HAL_CRU_ClkGetMux(mux) == 0)
        freq = pRate;
    else if (HAL_CRU_ClkGetMux(mux) == 1)
        freq = pRate * n / m;
    else if (HAL_CRU_ClkGetMux(mux) == 3)
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
    uint32_t muxSrc, mux = CLK_GET_MUX(clockName), muxOut = 0;
    uint32_t divSrc, divFrac;
    uint32_t n = 0, m = 0, pRate = s_gpllFreq / 2, flag = 0;

    switch (clockName) {
    case CLK_UART0:
        muxSrc = CLK_GET_MUX(CLK_UART0_SRC);
        divSrc = CLK_GET_DIV(CLK_UART0_SRC);
        divFrac = CLK_GET_DIV(CLK_UART0_FRAC);
        flag = 1;
        break;
    case CLK_UART1:
        muxSrc = CLK_GET_MUX(CLK_UART1_SRC);
        divSrc = CLK_GET_DIV(CLK_UART1_SRC);
        divFrac = CLK_GET_DIV(CLK_UART1_FRAC);
        flag = 1;
        break;
    case CLK_UART2:
        muxSrc = CLK_GET_MUX(CLK_UART2_SRC);
        divSrc = CLK_GET_DIV(CLK_UART2_SRC);
        divFrac = CLK_GET_DIV(CLK_UART2_FRAC);
        flag = 1;
        break;
    case MCLK_I2S1_8CH:
        muxSrc = CLK_GET_MUX(CLK_I2S1_8CH_SRC);
        divSrc = CLK_GET_DIV(CLK_I2S1_8CH_SRC);
        divFrac = CLK_GET_DIV(CLK_I2S1_8CH_FRAC);
        mux = CLK_GET_MUX(I2S1_MCLKOUT);
        break;
    case I2S_MCLKOUT:
        muxSrc = CLK_GET_MUX(CLK_I2S8CH_SRC);
        divSrc = CLK_GET_DIV(CLK_I2S8CH_SRC);
        divFrac = CLK_GET_DIV(CLK_I2S8CH_FRAC);
        mux = CLK_GET_MUX(I2S_MCLKOUT);
        break;
    default:

        return HAL_INVAL;
    }

    if (!(s_gpllFreq % rate)) {
        HAL_CRU_ClkSetDiv(divSrc, s_gpllFreq / rate);
        HAL_CRU_ClkSetMux(muxSrc, 0);
        HAL_CRU_ClkSetMux(mux, 0);
    } else if (flag || (pRate > 20 * rate)) {
        CRU_FracdivGetConfig(rate, pRate, &n, &m);
        HAL_CRU_ClkSetDiv(divSrc, 2);
        HAL_CRU_ClkSetMux(muxSrc, 0);
        CRU->CRU_CLKSEL_CON[CLK_DIV_GET_REG_OFFSET(divFrac)] = (n << 16) | m;
        HAL_CRU_ClkSetMux(mux, 1);
    } else {
        HAL_CRU_ClkSetDiv(divSrc, s_gpllFreq / rate);
        HAL_CRU_ClkSetMux(muxSrc, 0);
        HAL_CRU_ClkSetMux(mux, 0);
    }

    if (muxOut)
        HAL_CRU_ClkSetMux(muxOut, 0);

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

    if (s_gpllFreq)
        s_gpllFreq = CRU_GetPllFreq(&GPLL);
    if (s_cpllFreq)
        s_cpllFreq = CRU_GetPllFreq(&CPLL);

    switch (clockName) {
    case PLL_GPLL:
        freq = CRU_GetPllFreq(&GPLL);
        s_gpllFreq = freq;

        return freq;
    case PLL_CPLL:
        freq = CRU_GetPllFreq(&CPLL);
        s_cpllFreq = freq;

        return freq;
    case CLK_UART0:
    case CLK_UART1:
    case CLK_UART2:
    case I2S1_MCLKOUT:
    case I2S_MCLKOUT:
        freq = HAL_CRU_ClkFracGetFreq(clockName);

        return freq;
    case CLK_CIFOUT:
        mux = HAL_CRU_ClkGetMux(clkMux);
        if (mux == 2)
            pRate = PLL_INPUT_OSC_RATE;
        break;
    case CLK_MEMSUBSYS:
        mux = HAL_CRU_ClkGetMux(clkMux);
        if (mux)
            pRate = HAL_CRU_ClkGetFreq(HCLK_AUDIO);
        else
            pRate = HAL_CRU_ClkGetFreq(ACLK_DSP);
        break;
    case CLK_TIMER0:
    case CLK_TIMER1:
    case CLK_TIMER2:
    case CLK_TIMER3:
    case CLK_TIMER4:
    case CLK_TIMER5:
    case CLK_PMU:
    case CLK_PVTM:
        mux = HAL_CRU_ClkGetMux(clkMux);
        if (mux)
            pRate = PLL_INPUT_OSC_RATE;
        break;
    case CLK_GPIO_DBG0:
    case CLK_GPIO_DBG1:
    case CLK_GPIO_DBG2:
        pRate = PLL_INPUT_OSC_RATE;
        break;
    default:
        break;
    }

    if ((clkMux == 0) && (clkDiv == 0))
        return 0;

    if (clkDiv)
        freq = pRate / ((HAL_CRU_ClkGetDiv(clkDiv)) + 1);
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
    HAL_Status error;
    uint32_t clkMux = CLK_GET_MUX(clockName), mux = 0;
    uint32_t clkDiv = CLK_GET_DIV(clockName), div = 0;
    uint32_t pRate = s_gpllFreq;

    if (s_gpllFreq)
        s_gpllFreq = CRU_GetPllFreq(&GPLL);
    if (s_cpllFreq)
        s_cpllFreq = CRU_GetPllFreq(&CPLL);

    switch (clockName) {
    case PLL_GPLL:
        error = CRU_SetPllFreq(&GPLL, rate);
        s_gpllFreq = CRU_GetPllFreq(&GPLL);

        return error;
    case PLL_CPLL:
        error = CRU_SetPllFreq(&CPLL, rate);
        s_cpllFreq = CRU_GetPllFreq(&CPLL);

        return error;
    case DCLK_VOP_S:
        div = DCLK_LCDC_PLL_LIMIT_FREQ / rate;
        error = CRU_SetPllFreq(&CPLL, rate * div);
        s_cpllFreq = CRU_GetPllFreq(&CPLL);
        HAL_CRU_ClkSetMux(clkMux, 1);
        HAL_CRU_ClkSetDiv(clkDiv, div);

        return error;
    case CLK_UART0:
    case CLK_UART1:
    case CLK_UART2:
    case I2S1_MCLKOUT:
    case I2S_MCLKOUT:
        error = HAL_CRU_ClkFracSetFreq(clockName, rate);

        return error;
    case CLK_CIFOUT:
        if (rate == PLL_INPUT_OSC_RATE) {
            mux = 2;
            pRate = PLL_INPUT_OSC_RATE;
        }
        break;
    case CLK_MEMSUBSYS:
        if (!(HAL_CRU_ClkGetFreq(ACLK_DSP) % rate))
            mux = 0;
        else
            mux = 1;
        break;
    case CLK_TIMER0:
    case CLK_TIMER1:
    case CLK_TIMER2:
    case CLK_TIMER3:
    case CLK_TIMER4:
    case CLK_TIMER5:
    case CLK_PMU:
    case CLK_PVTM:
        if (rate == PLL_INPUT_OSC_RATE) {
            mux = 1;
            pRate = PLL_INPUT_OSC_RATE;
        }
        break;
    case CLK_GPIO_DBG0:
    case CLK_GPIO_DBG1:
    case CLK_GPIO_DBG2:
        pRate = PLL_INPUT_OSC_RATE;
        break;
    default:
        break;
    }

    if ((clkMux == 0) && (clkDiv == 0))
        return HAL_INVAL;

    div = pRate / rate;
    if (clkMux)
        HAL_CRU_ClkSetMux(clkMux, mux);
    if (clkDiv)
        HAL_CRU_ClkSetDiv(clkDiv, div);

    return HAL_OK;
}

/** @} */

#endif

/** @} */

/** @} */
