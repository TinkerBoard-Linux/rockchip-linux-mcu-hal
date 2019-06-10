/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RK_HAL_Driver
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
#if defined(RKMCU_RV1108)
#define PWRDOWN_SHIT       0
#define PWRDOWN_MASK       1 << PWRDOWN_SHIT
#define PLL_POSTDIV1_SHIFT 8
#define PLL_POSTDIV1_MASK  0x7 << PLL_POSTDIV1_SHIFT
#define PLL_FBDIV_SHIFT    0
#define PLL_FBDIV_MASK     0xfff << PLL_FBDIV_SHIFT
#define PLL_POSTDIV2_SHIFT 12
#define PLL_POSTDIV2_MASK  0x7 << PLL_POSTDIV2_SHIFT
#define PLL_REFDIV_SHIFT   0
#define PLL_REFDIV_MASK    0x3f << PLL_REFDIV_SHIFT
#define PLL_DSMPD_SHIFT    3
#define PLL_DSMPD_MASK     1 << PLL_DSMPD_SHIFT
#define PLL_FRAC_SHIFT     0
#define PLL_FRAC_MASK      0xffffff << PLL_FRAC_SHIFT
#else
#define PWRDOWN_SHIT       13
#define PWRDOWN_MASK       1 << PWRDOWN_SHIT
#define PLL_POSTDIV1_SHIFT 12
#define PLL_POSTDIV1_MASK  0x7 << PLL_POSTDIV1_SHIFT
#define PLL_FBDIV_SHIFT    0
#define PLL_FBDIV_MASK     0xfff << PLL_FBDIV_SHIFT
#define PLL_POSTDIV2_SHIFT 6
#define PLL_POSTDIV2_MASK  0x7 << PLL_POSTDIV2_SHIFT
#define PLL_REFDIV_SHIFT   0
#define PLL_REFDIV_MASK    0x3f << PLL_REFDIV_SHIFT
#define PLL_DSMPD_SHIFT    12
#define PLL_DSMPD_MASK     1 << PLL_DSMPD_SHIFT
#define PLL_FRAC_SHIFT     0
#define PLL_FRAC_MASK      0xffffff << PLL_FRAC_SHIFT
#endif

#define MIN_FOUTVCO_FREQ (800 * MHZ)
#define MAX_FOUTVCO_FREQ (2000 * MHZ)
#define MIN_FOUT_FREQ    (24 * MHZ)
#define MAX_FOUT_FREQ    (1400 * MHZ)

#define RK_PLL_MODE_SLOW                  0
#define RK_PLL_MODE_NORMAL                1
#define RK_PLL_MODE_DEEP                  2
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
/********************* Public Function Definition ****************************/

/** @defgroup CRU_Exported_Functions_Group5 Other Functions
 *  @{
 */

#if defined(RKMCU_RV1108)
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
uint32_t HAL_CRU_GetPllFreq(struct PLL_SETUP *pSetup)
{
    uint32_t refDiv, fbDiv, postdDv1, postDiv2, frac, dsmpd;
    uint32_t mode = 0, rate = PLL_INPUT_OSC_RATE;

    mode = PLL_GET_PLLMODE((*(uint32_t *)(pSetup->modeOffset)), pSetup->modeShift,
                           pSetup->modeMask);

    switch (mode) {
    case RK_PLL_MODE_SLOW:
        rate = PLL_INPUT_OSC_RATE;
        break;
    case RK_PLL_MODE_NORMAL:
        fbDiv = PLL_GET_FBDIV((*(uint32_t *)(pSetup->conOffset0)));
        postdDv1 = PLL_GET_POSTDIV1((*(uint32_t *)(pSetup->conOffset1)));
        postDiv2 = PLL_GET_POSTDIV2((*(uint32_t *)(pSetup->conOffset1)));
        refDiv = PLL_GET_REFDIV((*(uint32_t *)(pSetup->conOffset1)));
        dsmpd = PLL_GET_DSMPD((*(uint32_t *)(pSetup->conOffset3)));
        frac = PLL_GET_FRAC((*(uint32_t *)(pSetup->conOffset2)));
        rate = (rate / refDiv) * fbDiv;
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
 *     Pll Config fbDiv, refDiv, postdDv1, postDiv2, dsmpd, frac
 *     Pll Power up
 *     Waiting for pll lock
 *     Force PLL into normal mode
 */
HAL_Status HAL_CRU_SetPllFreq(struct PLL_SETUP *pSetup, uint32_t rate)
{
    const struct PLL_CONFIG *pConfig;
    int delay = 2400;

    if (rate == HAL_CRU_GetPllFreq(pSetup))
        return HAL_OK;
    else if (rate < MIN_FOUT_FREQ)
        return HAL_INVAL;
    else if (rate > MAX_FOUT_FREQ)
        return HAL_INVAL;

    pConfig = CRU_PllGetSettings(pSetup, rate);
    if (!pConfig)
        return HAL_ERROR;

    /* Force PLL into slow mode to ensure output stable clock */
    (*(uint32_t *)(pSetup->modeOffset)) =
        RK_CLRSET_BITS(pSetup->modeMask, RK_PLL_MODE_SLOW << pSetup->modeShift);

    /* Pll Power down */
    (*(uint32_t *)(pSetup->conOffset3)) = RK_CLRSET_BITS(PWRDOWN_MASK, 1 << PWRDOWN_SHIT);

    /* Pll Config */
    (*(uint32_t *)(pSetup->conOffset1)) = RK_CLRSET_BITS(
        PLL_POSTDIV2_MASK, pConfig->postDiv2 << PLL_POSTDIV2_SHIFT);
    (*(uint32_t *)(pSetup->conOffset1)) =
        RK_CLRSET_BITS(PLL_REFDIV_MASK, pConfig->refDiv << PLL_REFDIV_SHIFT);
    (*(uint32_t *)(pSetup->conOffset1)) = RK_CLRSET_BITS(
        PLL_POSTDIV1_MASK, pConfig->postDiv1 << PLL_POSTDIV1_SHIFT);
    (*(uint32_t *)(pSetup->conOffset0)) =
        RK_CLRSET_BITS(PLL_FBDIV_MASK, pConfig->fbDiv << PLL_FBDIV_SHIFT);
    (*(uint32_t *)(pSetup->conOffset3)) =
        RK_CLRSET_BITS(PLL_DSMPD_MASK, pConfig->dsmpd << PLL_DSMPD_SHIFT);
    if (pConfig->frac)
        (*(uint32_t *)(pSetup->conOffset2)) = (pSetup->conOffset2 & 0xff000000) | pConfig->frac;

    /* Pll Power up */
    (*(uint32_t *)(pSetup->conOffset3)) = RK_CLRSET_BITS(PWRDOWN_MASK, 0 << PWRDOWN_SHIT);

    /* Waiting for pll lock */
    while (delay > 0) {
        if ((*(uint32_t *)(pSetup->conOffset2)) & (1 << pSetup->lockShift))
            break;
        HAL_DelayMs(1);
        delay--;
    }
    if (delay == 0)
        return HAL_TIMEOUT;

    /* Force PLL into normal mode */
    (*(uint32_t *)(pSetup->modeOffset)) = RK_CLRSET_BITS(
        pSetup->modeMask, RK_PLL_MODE_NORMAL << pSetup->modeShift);

    return HAL_OK;
}
#else
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
uint32_t HAL_CRU_GetPllFreq(struct PLL_SETUP *pSetup)
{
    uint32_t refDiv, fbDiv, postdDv1, postDiv2, frac, dsmpd;
    uint32_t mode = 0, rate = PLL_INPUT_OSC_RATE;

    mode = PLL_GET_PLLMODE((*(uint32_t *)(pSetup->modeOffset)), pSetup->modeShift,
                           pSetup->modeMask);

    switch (mode) {
    case RK_PLL_MODE_SLOW:
        rate = PLL_INPUT_OSC_RATE;
        break;
    case RK_PLL_MODE_NORMAL:
        postdDv1 = PLL_GET_POSTDIV1((*(uint32_t *)(pSetup->conOffset0)));
        fbDiv = PLL_GET_FBDIV((*(uint32_t *)(pSetup->conOffset0)));
        postDiv2 = PLL_GET_POSTDIV2((*(uint32_t *)(pSetup->conOffset1)));
        refDiv = PLL_GET_REFDIV((*(uint32_t *)(pSetup->conOffset1)));
        dsmpd = PLL_GET_DSMPD((*(uint32_t *)(pSetup->conOffset1)));
        frac = PLL_GET_FRAC((*(uint32_t *)(pSetup->conOffset2)));
        rate = (rate / refDiv) * fbDiv;
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
 *     Pll Config fbDiv, refDiv, postdDv1, postDiv2, dsmpd, frac
 *     Pll Power up
 *     Waiting for pll lock
 *     Force PLL into normal mode
 */
HAL_Status HAL_CRU_SetPllFreq(struct PLL_SETUP *pSetup, uint32_t rate)
{
    const struct PLL_CONFIG *pConfig;
    int delay = 2400;

    if (rate == HAL_CRU_GetPllFreq(pSetup))
        return HAL_OK;
    else if (rate < MIN_FOUT_FREQ)
        return HAL_INVAL;
    else if (rate > MAX_FOUT_FREQ)
        return HAL_INVAL;

    pConfig = CRU_PllGetSettings(pSetup, rate);
    if (!pConfig)
        return HAL_ERROR;

    /* Force PLL into slow mode to ensure output stable clock */
    (*(uint32_t *)(pSetup->modeOffset)) =
        RK_CLRSET_BITS(pSetup->modeMask, RK_PLL_MODE_SLOW << pSetup->modeShift);

    /* Pll Power down */
    (*(uint32_t *)(pSetup->conOffset1)) = RK_CLRSET_BITS(PWRDOWN_MASK, 1 << PWRDOWN_SHIT);

    /* Pll Config */
    (*(uint32_t *)(pSetup->conOffset1)) = RK_CLRSET_BITS(
        PLL_POSTDIV2_MASK, pConfig->postDiv2 << PLL_POSTDIV2_SHIFT);
    (*(uint32_t *)(pSetup->conOffset1)) =
        RK_CLRSET_BITS(PLL_REFDIV_MASK, pConfig->refDiv << PLL_REFDIV_SHIFT);
    (*(uint32_t *)(pSetup->conOffset0)) = RK_CLRSET_BITS(
        PLL_POSTDIV1_MASK, pConfig->postDiv1 << PLL_POSTDIV1_SHIFT);
    (*(uint32_t *)(pSetup->conOffset0)) =
        RK_CLRSET_BITS(PLL_FBDIV_MASK, pConfig->fbDiv << PLL_FBDIV_SHIFT);
    (*(uint32_t *)(pSetup->conOffset1)) =
        RK_CLRSET_BITS(PLL_DSMPD_MASK, pConfig->dsmpd << PLL_DSMPD_SHIFT);
    if (pConfig->frac)
        (*(uint32_t *)(pSetup->conOffset2)) = (pSetup->conOffset2 & 0xff000000) | pConfig->frac;

    /* Pll Power up */
    (*(uint32_t *)(pSetup->conOffset1)) = RK_CLRSET_BITS(PWRDOWN_MASK, 0 << PWRDOWN_SHIT);

    /* Waiting for pll lock */
    while (delay > 0) {
        if (((*(uint32_t *)(pSetup->conOffset1))) & (1 << pSetup->lockShift))
            break;
        HAL_DelayMs(1);
        delay--;
    }
    if (delay == 0)
        return HAL_TIMEOUT;

    /* Force PLL into normal mode */
    (*(uint32_t *)(pSetup->modeOffset)) = RK_CLRSET_BITS(
        pSetup->modeMask, RK_PLL_MODE_NORMAL << pSetup->modeShift);

    return HAL_OK;
}
#endif

/**
 * @brief  IP Clock is Enabled API
 * @param  clk: clk gate id
 * @return HAL_Check
 */
HAL_Check HAL_CRU_ClkIsEnabled(uint32_t clk)
{
    uint32_t index = CLK_GATE_GET_REG_OFFSET(clk);
    uint32_t shift = CLK_GATE_GET_BITS_SHIFT(clk);

#if defined(CRU_PMU_CLKGATE_CON0_OFFSET)
    if (clk >= HAL_ARRAY_SIZE(CRU->CRU_CLKGATE_CON) * 16) {
        index = CLK_GATE_GET_REG_OFFSET(clk - HAL_ARRAY_SIZE(CRU->CRU_CLKGATE_CON) * 16);
        shift = CLK_GATE_GET_BITS_SHIFT(clk - HAL_ARRAY_SIZE(CRU->CRU_CLKGATE_CON) * 16);

        return (HAL_Check)(
            !((CRU->PMU_CLKGATE_CON[index] & (1 << shift)) >> shift));
    } else {
        return (HAL_Check)(
            !((CRU->CRU_CLKGATE_CON[index] & (1 << shift)) >> shift));
    }
#endif

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

#if defined(CRU_PMU_CLKGATE_CON0_OFFSET)
    if (clk >= HAL_ARRAY_SIZE(CRU->CRU_CLKGATE_CON) * 16) {
        index = CLK_GATE_GET_REG_OFFSET(clk - HAL_ARRAY_SIZE(CRU->CRU_CLKGATE_CON) * 16);
        shift = CLK_GATE_GET_BITS_SHIFT(clk - HAL_ARRAY_SIZE(CRU->CRU_CLKGATE_CON) * 16);

        CRU->PMU_CLKGATE_CON[index] = RK_CLRSET_BITS(1 << shift, 0 << shift);
    } else {
        CRU->CRU_CLKGATE_CON[index] = RK_CLRSET_BITS(1 << shift, 0 << shift);
    }

    return HAL_OK;
#endif

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

#if defined(CRU_PMU_CLKGATE_CON0_OFFSET)
    if (clk >= HAL_ARRAY_SIZE(CRU->CRU_CLKGATE_CON) * 16) {
        index = CLK_GATE_GET_REG_OFFSET(clk - HAL_ARRAY_SIZE(CRU->CRU_CLKGATE_CON) * 16);
        shift = CLK_GATE_GET_BITS_SHIFT(clk - HAL_ARRAY_SIZE(CRU->CRU_CLKGATE_CON) * 16);

        CRU->PMU_CLKGATE_CON[index] = RK_CLRSET_BITS(1 << shift, 1 << shift);
    } else {
        CRU->CRU_CLKGATE_CON[index] = RK_CLRSET_BITS(1 << shift, 1 << shift);
    }

    return HAL_OK;
#endif

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
 * @brief  Get frac div config.
 * @param  rateOut: clk out rate.
 * @param  rate: clk src rate.
 * @param  numerator: the returned numerator.
 * @param  denominator: the returned denominator.
 * @return HAL_Status.
 */
HAL_Status HAL_CRU_FracdivGetConfig(uint32_t rateOut, uint32_t rate,
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

/**
 * @brief  Get Np5 best div.
 * @param  clockName: clk id.
 * @param  rate: clk rate.
 * @param  pRate: clk parent rate
 * @param  bestdiv: the returned bestdiv.
 * @return HAL_Status.
 */
HAL_Status HAL_CRU_ClkNp5BestDiv(eCLOCK_Name clockName, uint32_t rate, uint32_t pRate, uint32_t *bestdiv)
{
    uint32_t div = CLK_GET_DIV(clockName);
    uint32_t maxDiv = CLK_DIV_GET_MASK(div);
    uint32_t i;

    for (i = 0; i < maxDiv; i++) {
        if (((pRate * 2) == (rate * (i * 2 + 3)))) {
            *bestdiv = i;

            return HAL_OK;
        }
    }

    return HAL_ERROR;
}

/** @} */

#endif

/** @} */

/** @} */
