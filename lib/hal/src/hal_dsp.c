/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup DSP
 *  @{
 */

/** @defgroup How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The DSP driver can be used as follows:

 @endverbatim
 @} */

#include "hal_base.h"

#ifdef HAL_DSP_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/

#define TCM_SEL_ALIGN (64 * 1024)
#define TCM_MAX_NUM   (3)

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/
static int DSP_Ioctl(void *priv, int cmd, void *arg)
{
    struct DSP_DEV *dev = (struct DSP_DEV *)priv;
    HAL_Status ret = HAL_OK;

    HAL_ASSERT(dev != NULL);

    switch (cmd) {
#ifdef RKMCU_RK2206
    case DSP_IOCTL_SET_ITCM_SIZE:
    {
        uint32_t setBit = 0;
        if ((uint32_t)arg > 0)
            setBit = GRF_SOC_CON0_DSP_TCM_SEL0_MASK;
        RK_CLRSET_REG_BITS(GRF->SOC_CON[0],
                           GRF_SOC_CON0_DSP_TCM_SEL0_MASK, setBit);
    }
    break;
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
        RK_CLRSET_REG_BITS(GRF->SOC_CON[0], mask, setBit);
    }
    break;
#endif
    default:
        break;
    }

    return ret;
}

static const struct DSP_OPS dspOps = {
    .ioctl = DSP_Ioctl,
};

/********************* Public Function Definition ****************************/
/** @defgroup DSP_Exported_Functions_Group1 Suspend and Resume Functions
 @verbatim

 ===============================================================================
             #### Suspend and Resume functions ####
 ===============================================================================
 This section provides functions allowing to suspend and resume the module:

 ...to do or delete this row

 @endverbatim
 *  @{
 */

/**
 * @brief  dsp suspend.
 * @param  dsp: the handle of dsp.
 * @return HAL_Status
 */
HAL_Status HAL_DSP_Supsend(struct DSP_DEV *dsp)
{
    return HAL_OK;
}

/**
 * @brief  dsp resume.
 * @param  dsp: the handle of dsp.
 * @return HAL_Status
 */
HAL_Status HAL_DSP_Resume(struct DSP_DEV *dsp)
{
    return HAL_OK;
}

/** @} */

/** @defgroup DSP_Exported_Functions_Group2 State and Errors Functions
 @verbatim

 ===============================================================================
             #### State and Errors functions ####
 ===============================================================================
 This section provides functions allowing to get the status of the module:

 @endverbatim
 *  @{
 */

/** @} */

/** @defgroup DSP_Exported_Functions_Group3 IO Functions
 @verbatim

 ===============================================================================
             #### IO functions ####
 ===============================================================================
 This section provides functions allowing to IO controlling:

 @endverbatim
 *  @{
 */

/** @} */

/** @defgroup DSP_Exported_Functions_Group4 Init and Deinit Functions
 @verbatim

 ===============================================================================
             #### Init and deinit functions ####
 ===============================================================================
 This section provides functions allowing to init and deinit the module:

 ...to do or delete this row

 @endverbatim
 *  @{
 */

/**
 * @brief  Init dsp.
 * @param  dsp: the handle of dsp.
 * @return HAL_Status
 */
HAL_Status HAL_DSP_Init(struct DSP_DEV *dsp)
{
    dsp->ops = &dspOps;
    dsp->grfReg = (struct GRF_REG *)(GRF_BASE);

    return HAL_OK;
}

/**
 * @brief  Deinit dsp.
 * @param  dsp: the handle of dsp.
 * @return HAL_Status
 */
HAL_Status HAL_DSP_Deinit(struct DSP_DEV *dsp)
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
    RK_CLRSET_REG_BITS(GRF->DSP_CON[0], GRF_DSP_CON0_RUNSTALL_MASK,
                       GRF_DSP_CON0_RUNSTALL_MASK);
    /* Set dsp reset */
#if defined(RKMCU_RK2206)
    setMask = CRU_SOFTRST_CON04_DRESETN_HIFI3_MASK |
              CRU_SOFTRST_CON04_BRESETN_HIFI3_MASK |
              CRU_SOFTRST_CON04_ARESETN_HIFI3_NIU_MASK;
    RK_CLRSET_REG_BITS(CRU->CRU_SOFTRST_CON[4], setMask, setMask);
#elif (defined(RKMCU_RK2108) || defined(RKMCU_PISCES))
    setMask = CRU_CRU_SOFTRST_CON00_DRESETN_DSP_MASK |
              CRU_CRU_SOFTRST_CON00_BRESETN_DSP_MASK |
              CRU_CRU_SOFTRST_CON00_ARESETN_DSP_NIU_MASK;
    RK_CLRSET_REG_BITS(CRU->CRU_SOFTRST_CON[0], setMask, setMask);
#endif

    if (altAddr) {
        RK_CLRSET_REG_BITS(GRF->DSP_CON[0], GRF_DSP_CON0_STATVECTORSEL_MASK,
                           GRF_DSP_CON0_STATVECTORSEL_MASK);
        WRITE_REG(GRF->DSP_CON[1], altAddr);
    }

    /* Repeal reset */
#if defined(RKMCU_RK2206)
    RK_CLRSET_REG_BITS(CRU->CRU_SOFTRST_CON[4], setMask, 0);
#elif (defined(RKMCU_RK2108) || defined(RKMCU_PISCES))
    RK_CLRSET_REG_BITS(CRU->CRU_SOFTRST_CON[0], setMask, 0);
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
HAL_Status HAL_DSP_START(struct DSP_DEV *dsp)
{
    RK_CLRSET_REG_BITS(GRF->DSP_CON[0], GRF_DSP_CON0_RUNSTALL_MASK, 0);

    return HAL_OK;
}

/**
 * @brief  Stop dsp.
 * @param  dsp: the handle of dsp.
 * @return HAL_Status
 */
HAL_Status HAL_DSP_STOP(struct DSP_DEV *dsp)
{
    RK_CLRSET_REG_BITS(GRF->DSP_CON[0], GRF_DSP_CON0_RUNSTALL_MASK,
                       GRF_DSP_CON0_RUNSTALL_MASK);

    return HAL_OK;
}

/** @} */

#endif

/** @} */

/** @} */
