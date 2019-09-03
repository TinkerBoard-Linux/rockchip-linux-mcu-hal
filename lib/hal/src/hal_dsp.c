/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup DSP
 *  @{
 */

/** @defgroup DSP_How_To_Use How To Use
 *  @{

 The DSP driver can be used as follows:

 @} */

#include "hal_base.h"

#ifdef HAL_DSP_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/

#define TCM_SEL_ALIGN (64 * 1024)
#define TCM_MAX_NUM   (3)

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

/**
 * @brief  Set tcm work mode for retention or power down.
 * @param  tcmSel: itcm or dtcm "|" combination, such as DSP_DTCM0 | DSP_DTCM1.
 * @param  mode: work mode in eDSP_tcmMode.
 * @return HAL_Status
 */
#if (defined(RKMCU_RK2108) || defined(RKMCU_PISCES))
static HAL_Status DSP_SetTcmMode(uint32_t tcmSel, eDSP_tcmMode mode)
{
    uint32_t mask0 = 0;
    uint32_t mask1 = 0;
    uint32_t value0 = 0;
    uint32_t value1 = 0;

    if (tcmSel == DSP_ITCM) {
        mask1 = PMU_DSPTCM_CON1_DSPITCM_PGEN_SFT_MASK |
                PMU_DSPTCM_CON1_DSPITCM_RET1N_SFT_MASK |
                PMU_DSPTCM_CON1_DSPITCM_RET2N_SFT_MASK;
        switch (mode) {
        case NOR_MODE:
        {
            value1 = PMU_DSPTCM_CON1_DSPITCM_RET1N_SFT_MASK |
                     PMU_DSPTCM_CON1_DSPITCM_RET2N_SFT_MASK;
        }
        break;
        case RET1N_MODE:
        {
            value1 = PMU_DSPTCM_CON1_DSPITCM_PGEN_SFT_MASK |
                     PMU_DSPTCM_CON1_DSPITCM_RET2N_SFT_MASK;
        }
        break;
        case RET2N_MODE:
        {
            value1 = PMU_DSPTCM_CON1_DSPITCM_PGEN_SFT_MASK |
                     PMU_DSPTCM_CON1_DSPITCM_RET1N_SFT_MASK;
        }
        break;
        case PWR_DOWN_MODE:
        {
            value1 = PMU_DSPTCM_CON1_DSPITCM_PGEN_SFT_MASK |
                     PMU_DSPTCM_CON1_DSPITCM_RET1N_SFT_MASK |
                     PMU_DSPTCM_CON1_DSPITCM_RET2N_SFT_MASK;
        }
        break;
        default:
            break;
        }
    } else {
        mask0 = (PMU_DSPTCM_CON0_DSPDTCM_PGEN_SFT_MASK & tcmSel) |
                (PMU_DSPTCM_CON0_DSPDTCM_RET1N_SFT_MASK & (tcmSel << 8));
        mask1 = PMU_DSPTCM_CON1_DSPDTCM_RET2N_SFT_MASK & tcmSel;
        switch (mode) {
        case NOR_MODE:
        {
            value0 = PMU_DSPTCM_CON0_DSPDTCM_RET1N_SFT_MASK & (tcmSel << 8);
            value1 = PMU_DSPTCM_CON1_DSPDTCM_RET2N_SFT_MASK & tcmSel;
        }
        break;
        case RET1N_MODE:
        {
            value0 = PMU_DSPTCM_CON0_DSPDTCM_PGEN_SFT_MASK & tcmSel;
            value1 = PMU_DSPTCM_CON1_DSPDTCM_RET2N_SFT_MASK & tcmSel;
        }
        break;
        case RET2N_MODE:
        {
            value0 = (PMU_DSPTCM_CON0_DSPDTCM_PGEN_SFT_MASK & tcmSel) |
                     (PMU_DSPTCM_CON0_DSPDTCM_RET1N_SFT_MASK & (tcmSel << 8));
        }
        break;
        case PWR_DOWN_MODE:
        {
            value0 = (PMU_DSPTCM_CON0_DSPDTCM_PGEN_SFT_MASK & tcmSel) |
                     (PMU_DSPTCM_CON0_DSPDTCM_RET1N_SFT_MASK & (tcmSel << 8));
            value1 = PMU_DSPTCM_CON1_DSPDTCM_RET2N_SFT_MASK & tcmSel;
        }
        break;
        default:
            break;
        }
    }
    if (mask0)
        WRITE_REG_MASK_WE(PMU->DSPTCM_CON[0], mask0, value0);
    WRITE_REG_MASK_WE(PMU->DSPTCM_CON[1], mask1, value1);

    return HAL_OK;
}
#endif

static int DSP_Ioctl(void *priv, int cmd, void *arg)
{
    HAL_Status ret = HAL_OK;

    switch (cmd) {
#if defined(RKMCU_RK2206)
    case DSP_IOCTL_SET_ITCM_SIZE:
    {
        uint32_t setBit = 0;
        if ((uint32_t)arg > 0)
            setBit = GRF_SOC_CON0_DSP_TCM_SEL0_MASK;
        WRITE_REG_MASK_WE(GRF->SOC_CON0,
                          GRF_SOC_CON0_DSP_TCM_SEL0_MASK, setBit);
        break;
    }
    case DSP_IOCTL_SET_DTCM_SIZE:
    {
        uint32_t sel = 0x7;
        uint32_t setBit = 0;
        uint32_t mask = 0;
        uint32_t num = ((uint32_t)arg + TCM_SEL_ALIGN) / (TCM_SEL_ALIGN + 1);

        if (num > TCM_MAX_NUM)
            num = TCM_MAX_NUM;
        num = TCM_MAX_NUM - num;
        sel = sel >> num;                   /* Get sel */

        if (sel & 0x1)
            setBit |= GRF_SOC_CON0_DSP_TCM_SEL1_MASK;
        if (sel & 0x2)
            setBit |= GRF_SOC_CON0_DSP_TCM_SEL2_MASK;
        if (sel & 0x4)
            setBit |= GRF_SOC_CON0_DSP_TCM_SEL3_MASK;

        mask |= GRF_SOC_CON0_DSP_TCM_SEL1_MASK |
                GRF_SOC_CON0_DSP_TCM_SEL2_MASK |
                GRF_SOC_CON0_DSP_TCM_SEL3_MASK;
        WRITE_REG_MASK_WE(GRF->SOC_CON0, mask, setBit);
        break;
    }
#endif
#if (defined(RKMCU_RK2108) || defined(RKMCU_PISCES) || defined(RKMCU_RK2206))
    case DSP_IOCTL_SET_MEM_GATING:
    {
        uint32_t mask = 0;
        mask |= GRF_DSP_CON2_ICACHE_MEM_AUTO_GATING_EN_MASK |
                GRF_DSP_CON2_ITAG_MEM_AUTO_GATING_EN_MASK |
                GRF_DSP_CON2_DCACHE_MEM_AUTO_GATING_EN_MASK |
                GRF_DSP_CON2_DTAG_MEM_AUTO_GATING_EN_MASK |
                GRF_DSP_CON2_PREFETCH_RAM_AUTO_GATING_EN_MASK |
                GRF_DSP_CON2_DTCM_MEM_AUTO_GATING_EN_MASK |
                GRF_DSP_CON2_ITCM_MEM_AUTO_GATING_EN_MASK;
        if ((uint32_t)arg)
            WRITE_REG_MASK_WE(GRF->DSP_CON2, mask, mask);
        else
            WRITE_REG_MASK_WE(GRF->DSP_CON2, mask, 0);
        break;
    }
#elif defined(RKMCU_KOALA)
    case DSP_IOCTL_SET_MEM_GATING:
    {
        uint32_t mask = 0;
        mask |= GRF_DSP_CON2_ICACHE_MEM_AUTO_GATING_DISABLE_MASK |
                GRF_DSP_CON2_ITAG_MEM_AUTO_GATING_DISABLE_MASK |
                GRF_DSP_CON2_DCACHE_MEM_AUTO_GATING_DISABLE_MASK |
                GRF_DSP_CON2_DTAG_MEM_AUTO_GATING_DISABLE_MASK |
                GRF_DSP_CON2_PREFETCH_RAM_AUTO_GATING_DISABLE_MASK |
                GRF_DSP_CON2_DTCM_MEM_AUTO_GATING_DISABLE_MASK |
                GRF_DSP_CON2_ITCM_MEM_AUTO_GATING_DISABLE_MASK;
        if ((uint32_t)arg) {
            // set value 0 is enable
            WRITE_REG_MASK_WE(GRF->DSP_CON2, mask, 0);
        } else {
            WRITE_REG_MASK_WE(GRF->DSP_CON2, mask, mask);
        }
        break;
    }
#endif
    default:
        break;
    }

    return ret;
}

static const struct DSP_OPS dspOps = {
    .ioctl = DSP_Ioctl,
};

/** @defgroup DSP_Exported_Functions_Group4 Init and DeInit Functions

 This section provides functions allowing to init and deinit the module:

 ...to do or delete this row

 *  @{
 */

#if (defined(RKMCU_RK2108) || defined(RKMCU_PISCES))

/**
 * @brief  Get dsp power state.
 * @return eDSP_powerSt
 */
eDSP_powerSt HAL_DSP_GetPowerSt(void)
{
    uint32_t val = READ_REG(PMU->POWER_ST);

    val = (val & PMU_POWER_ST_DSP_POWER_STATE_MASK) >> PMU_POWER_ST_DSP_POWER_STATE_SHIFT;

    return val;
}

/**
 * @brief  Wait dsp power status be set.
 * @param  st: wait status be set to this value.
 * @param  timeout: timeout valuse, unit is ms.
 * @return HAL_Status
 */
HAL_Status HAL_DSP_WaitForPowerSt(eDSP_powerSt status, uint32_t timeout)
{
    uint32_t start;

    start = HAL_GetTick();
    while (HAL_DSP_GetPowerSt() != status) {
        if ((HAL_GetTick() - start) > timeout)
            return HAL_TIMEOUT;
    }

    return HAL_OK;
}

/**
 * @brief  Soft interrupt wakeup dsp.
 * @return HAL_Status
 */
HAL_Status HAL_DSP_SoftWakeup(void)
{
    WRITE_REG_MASK_WE(PMU->DSPAPM_CON, PMU_DSPAPM_CON_PD_DSP_SFT_WAKEUP_MASK, 0);
    WRITE_REG_MASK_WE(PMU->DSPAPM_CON, PMU_DSPAPM_CON_PD_DSP_SFT_WAKEUP_MASK,
                      PMU_DSPAPM_CON_PD_DSP_SFT_WAKEUP_MASK);

    return HAL_OK;
}

/**
 * @brief  Set tcm work mode for retention or power down.
 * @param  tcmSel: tcm "|" combination, such as DSP_DTCM0 | DSP_ITCM.
 * @param  mode: work mode in eDSP_tCMMODE.
 * @return HAL_Status
 */
HAL_Status HAL_DSP_SetTcmMode(uint32_t tcmSel, eDSP_tcmMode mode)
{
    uint32_t sel;

    HAL_ASSERT(tcmSel);

    /* Check itcm select */
    sel = tcmSel & DSP_ITCM;
    if (sel)
        DSP_SetTcmMode(sel, mode);

    /* Check dtcm select */
    sel = tcmSel & ~sel;
    if (sel)
        DSP_SetTcmMode(sel, mode);

    return HAL_OK;
}
#else
HAL_Status HAL_DSP_SetTcmMode(uint32_t tcmSel, eDSP_tcmMode mode)
{
    return HAL_OK;
}

HAL_Status HAL_DSP_SoftWakeup(void)
{
    return HAL_OK;
}

HAL_Status HAL_DSP_WaitForPowerSt(eDSP_powerSt status, uint32_t timeout)
{
    return HAL_OK;
}
#endif

/**
 * @brief  Init dsp and deassert reset.
 * @param  dsp: the handle of dsp.
 * @return HAL_Status
 */
HAL_Status HAL_DSP_Init(struct DSP_DEV *dsp)
{
    dsp->ops = &dspOps;
    dsp->grfReg = (struct GRF_REG *)(GRF_BASE);
    dsp->resetFlag = DSP_RESET_MODE_RESET_ALL_CLK;

#if defined(RKMCU_KOALA)
    /*
     * check the value of CRU_SOFTRST4_CON,
     * the default value of CRU_SOFTRST4_CON is 0x06,
     * if m3 want use DTCM of dsp, it will reset dsp and
     * reassert reset in startup_koala.S. So here,
     * we check the value of CRU_SOFTRST4_CON to judge
     * whether DTCM is used by m3
     */
    uint32_t setMask = CRU_SOFTRST4_CON_ARESETN_DSP_NOC_REQ_MASK |
                       CRU_SOFTRST4_CON_RESETN_DSP_REQ_MASK |
                       CRU_SOFTRST4_CON_RESETN_DSP_EXTCORE_REQ_MASK;
    int value = READ_BIT(CRU->CRU_SOFTRST_CON[4], setMask);

    /* value 0 means the dsp already be reseted and reasserted reset*/
    if (value == 0) {
        dsp->resetFlag = DSP_RESET_MODE_NOT_RESET;
    }
#endif

    /* Deassert reset */
    HAL_DSP_Enable(dsp, 0);

    return HAL_OK;
}

/**
 * @brief  DeInit dsp.
 * @param  dsp: the handle of dsp.
 * @return HAL_Status
 */
HAL_Status HAL_DSP_DeInit(struct DSP_DEV *dsp)
{
    dsp->ops = NULL;
    dsp->grfReg = NULL;

    return HAL_OK;
}

/** @} */

/** @defgroup DSP_Exported_Functions_Group5 Other Functions
 *  @{
 */

/**
 * @brief  Enable dsp.
 * @param  dsp: the handle of dsp.
 * @param  altAddr: alternate reset vector address.
 * @return HAL_Status
 */
HAL_Status HAL_DSP_Enable(struct DSP_DEV *dsp, uint32_t altAddr)
{
    uint32_t setMask = 0;

    /* Set dsp stall */
    WRITE_REG_MASK_WE(GRF->DSP_CON0, GRF_DSP_CON0_RUNSTALL_MASK,
                      GRF_DSP_CON0_RUNSTALL_MASK);
    /* Set dsp reset */
#if defined(RKMCU_RK2206)
    setMask = CRU_SOFTRST_CON04_DRESETN_HIFI3_MASK |
              CRU_SOFTRST_CON04_BRESETN_HIFI3_MASK |
              CRU_SOFTRST_CON04_ARESETN_HIFI3_NIU_MASK;
    WRITE_REG_MASK_WE(CRU->CRU_SOFTRST_CON[4], setMask, setMask);
#elif (defined(RKMCU_RK2108) || defined(RKMCU_PISCES))
    if (dsp->resetFlag == DSP_RESET_MODE_RESET_ALL_CLK) {
        setMask = CRU_CRU_SOFTRST_CON00_DRESETN_DSP_MASK |
                  CRU_CRU_SOFTRST_CON00_BRESETN_DSP_MASK |
                  CRU_CRU_SOFTRST_CON00_ARESETN_DSP_NIU_MASK;
        dsp->resetFlag = DSP_RESET_MODE_RESET_PART_CLK;
    } else {
        setMask = CRU_CRU_SOFTRST_CON00_DRESETN_DSP_MASK |
                  CRU_CRU_SOFTRST_CON00_BRESETN_DSP_MASK;
    }
    WRITE_REG_MASK_WE(CRU->CRU_SOFTRST_CON[0], setMask, setMask);
#elif defined(RKMCU_KOALA)
    /*
     * dsp->resetFlag == DSP_RESET_MODE_NOT_RESET means the
     * m3 is using the DTCM(the address is 0x30240000U ~ 0x3027ffffU) of dsp,
     * so do not reset dsp here.
     */
    if (dsp->resetFlag != DSP_RESET_MODE_NOT_RESET) {
        if (dsp->resetFlag == DSP_RESET_MODE_RESET_ALL_CLK) {
            setMask = CRU_SOFTRST4_CON_ARESETN_DSP_NOC_REQ_MASK |
                      CRU_SOFTRST4_CON_RESETN_DSP_REQ_MASK |
                      CRU_SOFTRST4_CON_RESETN_DSP_EXTCORE_REQ_MASK;
            dsp->resetFlag = DSP_RESET_MODE_RESET_PART_CLK;
        } else {
            setMask = CRU_SOFTRST4_CON_RESETN_DSP_REQ_MASK |
                      CRU_SOFTRST4_CON_RESETN_DSP_EXTCORE_REQ_MASK;
        }

        // reset dsp
        WRITE_REG_MASK_WE(CRU->CRU_SOFTRST_CON[4], setMask, setMask);
    }
#endif

    if (altAddr) {
        WRITE_REG_MASK_WE(GRF->DSP_CON0, GRF_DSP_CON0_STATVECTORSEL_MASK,
                          GRF_DSP_CON0_STATVECTORSEL_MASK);
        WRITE_REG(GRF->DSP_CON1, altAddr);
    }

    /* Deassert reset */
#if (defined(RKMCU_RK2206) || defined(RKMCU_KOALA))
    WRITE_REG_MASK_WE(CRU->CRU_SOFTRST_CON[4], setMask, 0);
#elif (defined(RKMCU_RK2108) || defined(RKMCU_PISCES))
    WRITE_REG_MASK_WE(CRU->CRU_SOFTRST_CON[0], setMask, 0);
#endif

    return HAL_OK;
}

/**
 * @brief  Disable dsp.
 * @param  dsp: the handle of dsp.
 * @return HAL_Status
 */
HAL_Status HAL_DSP_Disable(struct DSP_DEV *dsp)
{
    return HAL_OK;
}

/**
 * @brief  Start dsp.
 * @param  dsp: the handle of dsp.
 * @return HAL_Status
 */
HAL_Status HAL_DSP_Start(struct DSP_DEV *dsp)
{
    WRITE_REG_MASK_WE(GRF->DSP_CON0, GRF_DSP_CON0_RUNSTALL_MASK, 0);

    return HAL_OK;
}

/**
 * @brief  Stop dsp.
 * @param  dsp: the handle of dsp.
 * @return HAL_Status
 */
HAL_Status HAL_DSP_Stop(struct DSP_DEV *dsp)
{
    WRITE_REG_MASK_WE(GRF->DSP_CON0, GRF_DSP_CON0_RUNSTALL_MASK,
                      GRF_DSP_CON0_RUNSTALL_MASK);

    return HAL_OK;
}

/** @} */

#endif

/** @} */

/** @} */
