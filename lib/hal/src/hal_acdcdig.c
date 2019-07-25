/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup ACDCDIG
 *  @{
 */

/** @defgroup ACDCDIG_How_To_Use How To Use
 *  @{

 The ACDCDIG driver can be used as follows:

 @} */

#include "hal_base.h"

#ifdef HAL_ACDCDIG_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

/********************* Public Function Definition ****************************/
/** @defgroup ACDCDIG_Exported_Functions_Group1 Suspend and Resume Functions

 This section provides functions allowing to suspend and resume the module:

 ...to do or delete this row

 *  @{
 */

/**
 * @brief  acdcDig suspend.
 * @param  acdcDig: the handle of acdcDig.
 * @return HAL_Status
 */
HAL_Status HAL_ACDCDIG_Supsend(struct HAL_ACDCDIG_DEV *acdcDig)
{
    return HAL_OK;
}

/**
 * @brief  acdcDig resume.
 * @param  acdcDig: the handle of acdcDig.
 * @return HAL_Status
 */
HAL_Status HAL_ACDCDIG_Resume(struct HAL_ACDCDIG_DEV *acdcDig)
{
    return HAL_OK;
}

/** @} */

/** @defgroup ACDCDIG_Exported_Functions_Group2 State and Errors Functions

 This section provides functions allowing to get the status of the module:

 *  @{
 */

/** @} */

/** @defgroup ACDCDIG_Exported_Functions_Group3 IO Functions

 This section provides functions allowing to IO controlling:

 *  @{
 */

/** @} */

/** @defgroup ACDCDIG_Exported_Functions_Group4 Init and DeInit Functions

 This section provides functions allowing to init and deinit the module:

 ...to do or delete this row

 *  @{
 */

/**
 * @brief  Init acdcDig controller.
 * @param  acdcDig: the handle of acdcDig.
 * @param  config: init config for i2s init.
 * @return HAL_Status
 */
HAL_Status HAL_ACDCDIG_Init(struct HAL_ACDCDIG_DEV *acdcDig, struct AUDIO_INIT_CONFIG *config)
{
    struct ACDCDIG_REG *reg = acdcDig->reg;
    HAL_Status ret = HAL_OK;

    HAL_CRU_ClkEnable(acdcDig->hclk);

    acdcDig->format = config->format;

    switch (config->format) {
    case AUDIO_FMT_I2S:
        MODIFY_REG(reg->PDMCTRL, ACDCDIG_PDMCTRL_PDM_MODE_MASK,
                   ACDCDIG_PDMCTRL_PDM_MODE_I2S);
        if (config->master)
            MODIFY_REG(reg->I2SCKM, ACDCDIG_I2SCKM_I2SMST_MASK,
                       ACDCDIG_I2SCKM_I2SMST_MASK);
        else
            MODIFY_REG(reg->I2SCKM, ACDCDIG_I2SCKM_I2SMST_MASK,
                       ACDCDIG_I2SCKM_I2SMST_SLAVE);
        break;
    case AUDIO_FMT_PDM:
        MODIFY_REG(reg->PDMCTRL, ACDCDIG_PDMCTRL_PDM_MODE_MASK,
                   ACDCDIG_PDMCTRL_PDM_MODE_PDM);
        break;
    default:
        ret = HAL_INVAL;
        break;
    }

    return ret;
}

/**
 * @brief  DeInit acdcDig controller.
 * @param  acdcDig: the handle of acdcDig.
 * @return HAL_Status
 */
HAL_Status HAL_ACDCDIG_DeInit(struct HAL_ACDCDIG_DEV *acdcDig)
{
    HAL_ACDCDIG_Disable(acdcDig);

    HAL_CRU_ClkDisable(acdcDig->hclk);

    return HAL_OK;
}

/** @} */

/** @defgroup ACDCDIG_Exported_Functions_Group5 Other Functions
 *  @{
 */

/**
 * @brief  Enable acdcDig controller.
 * @param  acdcDig: the handle of acdcDig.
 * @return HAL_Status
 */
HAL_Status HAL_ACDCDIG_Enable(struct HAL_ACDCDIG_DEV *acdcDig)
{
    struct ACDCDIG_REG *reg = acdcDig->reg;
    HAL_Status ret = HAL_OK;

    /* power up */
    MODIFY_REG(reg->REFCFG,
               ACDCDIG_REFCFG_REF_TOP_PWD_MASK, ACDCDIG_REFCFG_REF_TOP_PWU);
    MODIFY_REG(reg->ADCCFG2,
               ACDCDIG_ADCCFG2_CT_ADC_PWD_MASK, ACDCDIG_ADCCFG2_CT_ADC_PWU);
    MODIFY_REG(reg->ADCCFG0,
               ACDCDIG_ADCCFG0_ADC_PWD_L_MASK | ACDCDIG_ADCCFG0_ADC_PWD_R_MASK,
               ACDCDIG_ADCCFG0_ADC_PWU_L | ACDCDIG_ADCCFG0_ADC_PWU_R);
    MODIFY_REG(reg->PGACFG,
               ACDCDIG_PGACFG_PGA_L_PD_MASK | ACDCDIG_PGACFG_PGA_R_PD_MASK,
               ACDCDIG_PGACFG_PGA_L_PU | ACDCDIG_PGACFG_PGA_R_PU);

    switch (acdcDig->format) {
    case AUDIO_FMT_I2S:
        MODIFY_REG(reg->CLKCTRL,
                   ACDCDIG_CLKCTRL_ADC_CKE_MASK |
                   ACDCDIG_CLKCTRL_I2STX_CKE_MASK |
                   ACDCDIG_CLKCTRL_CKE_BCLK_MASK |
                   ACDCDIG_CLKCTRL_FILTER_GATE_EN_MASK,
                   ACDCDIG_CLKCTRL_ADC_CKE_EN |
                   ACDCDIG_CLKCTRL_I2STX_CKE_EN |
                   ACDCDIG_CLKCTRL_CKE_BCLK_EN |
                   ACDCDIG_CLKCTRL_FILTER_GATE_EN);
        MODIFY_REG(reg->DIGEN,
                   ACDCDIG_DIGEN_ADC_EN_MASK |
                   ACDCDIG_DIGEN_I2STX_EN_MASK,
                   ACDCDIG_DIGEN_ADC_EN |
                   ACDCDIG_DIGEN_I2STX_EN);
        MODIFY_REG(reg->I2STXCMD, ACDCDIG_I2STXCMD_TXS_MASK,
                   ACDCDIG_I2STXCMD_TXS_START);
        break;
    case AUDIO_FMT_PDM:
        MODIFY_REG(reg->PDMCTRL, ACDCDIG_PDMCTRL_PDM_EN_MASK,
                   ACDCDIG_PDMCTRL_PDM_EN);
        break;
    default:
        ret = HAL_INVAL;
        break;
    }

    return ret;
}

/**
 * @brief  Disable acdcDig controller.
 * @param  acdcDig: the handle of acdcDig.
 * @return HAL_Status
 */
HAL_Status HAL_ACDCDIG_Disable(struct HAL_ACDCDIG_DEV *acdcDig)
{
    struct ACDCDIG_REG *reg = acdcDig->reg;
    HAL_Status ret = HAL_OK;

    switch (acdcDig->format) {
    case AUDIO_FMT_I2S:
        MODIFY_REG(reg->I2STXCMD, ACDCDIG_I2STXCMD_TXS_MASK,
                   ACDCDIG_I2STXCMD_TXS_STOP);
        MODIFY_REG(reg->I2STXCMD, ACDCDIG_I2STXCMD_TXC_MASK,
                   ACDCDIG_I2STXCMD_TXC);
        MODIFY_REG(reg->DIGEN,
                   ACDCDIG_DIGEN_ADC_EN_MASK |
                   ACDCDIG_DIGEN_I2STX_EN_MASK,
                   ACDCDIG_DIGEN_ADC_DIS |
                   ACDCDIG_DIGEN_I2STX_DIS);
        MODIFY_REG(reg->CLKCTRL,
                   ACDCDIG_CLKCTRL_ADC_CKE_MASK |
                   ACDCDIG_CLKCTRL_I2STX_CKE_MASK |
                   ACDCDIG_CLKCTRL_CKE_BCLK_MASK,
                   ACDCDIG_CLKCTRL_ADC_CKE_DIS |
                   ACDCDIG_CLKCTRL_I2STX_CKE_DIS |
                   ACDCDIG_CLKCTRL_CKE_BCLK_DIS);
        break;
    case AUDIO_FMT_PDM:
        MODIFY_REG(reg->PDMCTRL, ACDCDIG_PDMCTRL_PDM_EN_MASK,
                   ACDCDIG_PDMCTRL_PDM_DIS);
        break;
    default:
        ret = HAL_INVAL;
        break;
    }

    /* power down */
    MODIFY_REG(reg->ADCCFG0,
               ACDCDIG_ADCCFG0_ADC_PWD_L_MASK | ACDCDIG_ADCCFG0_ADC_PWD_R_MASK,
               ACDCDIG_ADCCFG0_ADC_PWD_L | ACDCDIG_ADCCFG0_ADC_PWD_R);
    MODIFY_REG(reg->PGACFG,
               ACDCDIG_PGACFG_PGA_L_PD_MASK | ACDCDIG_PGACFG_PGA_R_PD_MASK,
               ACDCDIG_PGACFG_PGA_L_PD | ACDCDIG_PGACFG_PGA_R_PD);
    MODIFY_REG(reg->ADCCFG2,
               ACDCDIG_ADCCFG2_CT_ADC_PWD_MASK, ACDCDIG_ADCCFG2_CT_ADC_PWD);
    MODIFY_REG(reg->REFCFG,
               ACDCDIG_REFCFG_REF_TOP_PWD_MASK, ACDCDIG_REFCFG_REF_TOP_PWD);

    return ret;
}

/**
 * @brief  Config acdcDig controller.
 * @param  acdcDig: the handle of acdcDig.
 * @param  params: audio params.
 * @return HAL_Status
 */
HAL_Status HAL_ACDCDIG_Config(struct HAL_ACDCDIG_DEV *acdcDig,
                              struct AUDIO_PARAMS *params)
{
    struct ACDCDIG_REG *reg = acdcDig->reg;
    HAL_Status ret = HAL_OK;
    uint32_t srt = 0;

    switch (params->sampleRate) {
    case AUDIO_SAMPLERATE_8000:
    case AUDIO_SAMPLERATE_11025:
        srt = 0;
        break;
    case AUDIO_SAMPLERATE_16000:
    case AUDIO_SAMPLERATE_22050:
        srt = 1;
        break;
    case AUDIO_SAMPLERATE_32000:
        srt = 2;
        break;
    case AUDIO_SAMPLERATE_44100:
    case AUDIO_SAMPLERATE_48000:
        srt = 3;
        break;
    case AUDIO_SAMPLERATE_64000:
    case AUDIO_SAMPLERATE_88200:
    case AUDIO_SAMPLERATE_96000:
        srt = 4;
        break;
    case AUDIO_SAMPLERATE_176400:
    case AUDIO_SAMPLERATE_192000:
        srt = 5;
        break;
    default:
        ret = HAL_INVAL;
        srt = 0;
        break;
    }

    MODIFY_REG(reg->ADCCFG3, ACDCDIG_ADCCFG3_ADCSRT_MASK,
               ACDCDIG_ADCCFG3_ADCSRT(srt));

    switch (params->sampleBits) {
    case AUDIO_SAMPLEBITS_16:
        MODIFY_REG(reg->I2STXCR2, ACDCDIG_I2STXCR2_VDW_MASK,
                   ACDCDIG_I2STXCR2_VDW(16));
        break;
    case AUDIO_SAMPLEBITS_32:
        MODIFY_REG(reg->I2STXCR2, ACDCDIG_I2STXCR2_VDW_MASK,
                   ACDCDIG_I2STXCR2_VDW(24));
        break;
    default:
        ret = HAL_INVAL;
        break;
    }

    return ret;
}

/** @} */

#endif

/** @} */

/** @} */
