/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RKMCU_HAL_Driver
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

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/
static int DSP_Ioctl(void *priv, int cmd, void *arg)
{
    return HAL_OK;
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
 * @return HAL_Status
 */
HAL_Status HAL_DSP_Enable(struct DSP_DEV *dsp)
{
    /* Set dsp stall */
    RK_CLRSET_REG_BITS(dsp->grfReg->DSP_CON[0], GRF_DSP_CON0_RUNSTALL_MASK,
                       GRF_DSP_CON0_RUNSTALL_MASK);
    /* Set dsp reset */
    *((uint32_t *)0x40050200) = 0x00070007;
    *((uint32_t *)0x40050200) = 0x00070000;

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
 * @param  sel_addr: alternate reset vector address.
 * @return HAL_Status
 */
HAL_Status HAL_DSP_START(struct DSP_DEV *dsp, uint32_t altAddr)
{
    if (altAddr) {
        RK_CLRSET_REG_BITS(dsp->grfReg->DSP_CON[0], GRF_DSP_CON0_STATVECTORSEL_MASK,
                           GRF_DSP_CON0_STATVECTORSEL_MASK);
        WRITE_REG(dsp->grfReg->DSP_CON[1], altAddr);
    }
    RK_CLRSET_REG_BITS(dsp->grfReg->DSP_CON[0], GRF_DSP_CON0_RUNSTALL_MASK, 0);

    return HAL_OK;
}

/**
 * @brief  Stop dsp.
 * @param  dsp: the handle of dsp.
 * @return HAL_Status
 */
HAL_Status HAL_DSP_STOP(struct DSP_DEV *dsp)
{
    RK_CLRSET_REG_BITS(dsp->grfReg->DSP_CON[0], GRF_DSP_CON0_RUNSTALL_MASK,
                       GRF_DSP_CON0_RUNSTALL_MASK);

    return HAL_OK;
}

/** @} */

#endif

/** @} */

/** @} */
