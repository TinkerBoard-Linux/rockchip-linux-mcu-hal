/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup PDM
 *  @{
 */

/** @defgroup PDM_How_To_Use How To Use
 *  @{

 The PDM driver can be used as follows:

 @} */

#include "hal_base.h"

#ifdef HAL_PDM_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/

#define PDM_DMA_BURST_SIZE   (8) /* size * width: 8*4 = 32 bytes */
#define PDM_SIGNOFF_CLK_RATE (100000000)

/********************* Private Structure Definition **************************/

struct RK_PDM_CLKREF {
    uint32_t sr;
    uint32_t clkOut;
};

struct RK_PDM_DS_RATIO {
    uint32_t ratio;
    uint32_t sr;
};

/********************* Private Variable Definition ***************************/

static const struct RK_PDM_CLKREF clkRef[] = {
    { 8000, 1024000 },
    { 11025, 1411200 },
    { 12000, 1536000 },
};

/********************* Private Function Definition ***************************/

static uint32_t PDM_GetClk(struct HAL_PDM_DEV *pdm, uint32_t sr)
{
    uint32_t i, count, div, clk = 0;

    HAL_ASSERT(sr > 0);

    count = HAL_ARRAY_SIZE(clkRef);
    for (i = 0; i < count; i++) {
        if (sr % clkRef[i].sr)
            continue;
        div = sr / clkRef[i].sr;
        if ((div & (div - 1)) == 0) {
            clk = clkRef[i].clkOut;
            break;
        }
    }

    switch (pdm->mode) {
    case PDM_LOW_MODE:
        break;
    case PDM_NORMAL_MODE:
        clk *= 2;
        break;
    case PDM_HIGH_MODE:
        clk *= 4;
        break;
    default:
        clk = 0;
        break;
    }

    return clk;
}

#ifdef PDM_CTRL0_SAMPLE_RATE_SEL_MASK
static int PDM_SampleRate(uint32_t sampleRate)
{
    switch (sampleRate) {
    case AUDIO_SAMPLERATE_8000:
    case AUDIO_SAMPLERATE_11025:

        return 0;
    case AUDIO_SAMPLERATE_16000:
    case AUDIO_SAMPLERATE_22050:

        return 1;
    case AUDIO_SAMPLERATE_32000:

        return 2;
    case AUDIO_SAMPLERATE_44100:
    case AUDIO_SAMPLERATE_48000:

        return 3;
    case AUDIO_SAMPLERATE_64000:
    case AUDIO_SAMPLERATE_88200:
    case AUDIO_SAMPLERATE_96000:

        return 4;
    case AUDIO_SAMPLERATE_176400:
    case AUDIO_SAMPLERATE_192000:

        return 5;
    default:

        return HAL_INVAL;
    }
}
#endif

#ifdef PDM_CLK_CTRL_CIC_DS_RATIO_MASK
static int PDM_GetCicDsRatio(uint32_t clk)
{
    switch (clk) {
    case 4096000:
    case 5644800:
    case 6144000:

        return 0;
    case 2048000:
    case 2822400:
    case 3072000:

        return 1;
    case 1024000:
    case 1411200:
    case 1536000:

        return 2;
    default:

        return HAL_INVAL;
    }
}
#endif

static HAL_Status PDM_ChangeClkFreq(struct HAL_PDM_DEV *pdm,
                                    struct AUDIO_PARAMS *params)
{
    struct PDM_REG *reg = pdm->pReg;

    HAL_Status ret = HAL_OK;
    uint32_t clkOut, clkSrc, n, m, old, val, mask;

    HAL_ASSERT(IS_PDM_INSTANCE(reg));

    clkSrc = pdm->mclkRate;
    clkOut = PDM_GetClk(pdm, params->sampleRate);
    HAL_ASSERT(clkOut);
    HAL_CRU_ClkSetFreq(pdm->mclk, clkSrc);
    HAL_CRU_FracdivGetConfig(clkOut, clkSrc, &n, &m);
    HAL_DBG("%s: n: 0x%lx, m: 0x%lx\n", __func__, n, m);
    old = READ_REG(reg->CTRL[1]);
    val = (n << PDM_FD_NUMERATOR_SFT) |
          (m << PDM_FD_DENOMINATOR_SFT);
    mask = PDM_FD_NUMERATOR_MSK | PDM_FD_DENOMINATOR_MSK;
    MODIFY_REG(reg->CTRL[1], mask, val);

#ifdef PDM_CLK_CTRL_CIC_DS_RATIO_MASK
    {
        int cic = PDM_GetCicDsRatio(clkOut);

        HAL_ASSERT(cic != HAL_INVAL);
        MODIFY_REG(reg->CLK_CTRL, PDM_CLK_CTRL_CIC_DS_RATIO_MASK, cic);
    }
#endif

    if (old != val) {
        /* reset */
        HAL_CRU_ClkResetAssert(pdm->reset);
        HAL_CRU_ClkResetDeassert(pdm->reset);
        HAL_PDM_Disable(pdm);
    }

    return ret;
}

/********************* Public Function Definition ****************************/
/** @defgroup PDM_Exported_Functions_Group1 Suspend and Resume Functions

 This section provides functions allowing to suspend and resume the module:

 ...to do or delete this row

 *  @{
 */

/**
 * @brief  pdm suspend.
 * @param  pdm: the handle of pdm.
 * @return HAL_Status
 */
HAL_Status HAL_PDM_Supsend(struct HAL_PDM_DEV *pdm)
{
    return HAL_OK;
}

/**
 * @brief  pdm resume.
 * @param  pdm: the handle of pdm.
 * @return HAL_Status
 */
HAL_Status HAL_PDM_Resume(struct HAL_PDM_DEV *pdm)
{
    return HAL_OK;
}

/** @} */

/** @defgroup PDM_Exported_Functions_Group2 State and Errors Functions

 This section provides functions allowing to get the status of the module:

 *  @{
 */

/** @} */

/** @defgroup PDM_Exported_Functions_Group3 IO Functions

 This section provides functions allowing to IO controlling:

 *  @{
 */

/** @} */

/** @defgroup PDM_Exported_Functions_Group4 Init and DeInit Functions

 This section provides functions allowing to init and deinit the module:

 ...to do or delete this row

 *  @{
 */

/**
 * @brief  Init pdm controller.
 * @param  pdm: the handle of pdm.
 * @param  config: init config for i2s init.
 * @return HAL_Status
 */
HAL_Status HAL_PDM_Init(struct HAL_PDM_DEV *pdm, struct AUDIO_INIT_CONFIG *config)
{
    struct PDM_REG *reg = pdm->pReg;
    uint32_t val;

    HAL_ASSERT(IS_PDM_INSTANCE(reg));

    HAL_CRU_ClkEnable(pdm->hclk);

    val = config->clkInvert ? PDM_CKP_INVERTED : PDM_CKP_NORMAL;
    MODIFY_REG(reg->CLK_CTRL, PDM_CKP_MSK, val);

    return HAL_OK;
}

/**
 * @brief  DeInit pdm controller.
 * @param  pdm: the handle of pdm.
 * @return HAL_Status
 */
HAL_Status HAL_PDM_DeInit(struct HAL_PDM_DEV *pdm)
{
    HAL_ASSERT(IS_PDM_INSTANCE(pdm->pReg));

    HAL_CRU_ClkDisable(pdm->hclk);

    return HAL_OK;
}

/** @} */

/** @defgroup PDM_Exported_Functions_Group5 Other Functions
 *  @{
 */

/**
 * @brief  Enable pdm controller.
 * @param  pdm: the handle of pdm.
 * @return HAL_Status
 */
HAL_Status HAL_PDM_Enable(struct HAL_PDM_DEV *pdm)
{
    struct PDM_REG *reg = pdm->pReg;

    HAL_ASSERT(IS_PDM_INSTANCE(reg));

    MODIFY_REG(reg->DMA_CTRL,
               PDM_DMA_RD_MSK, PDM_DMA_RD_EN);
    MODIFY_REG(reg->SYSCONFIG,
               PDM_RX_MASK, PDM_RX_START);

    return HAL_OK;
}

/**
 * @brief  Disable pdm controller.
 * @param  pdm: the handle of pdm.
 * @return HAL_Status
 */
HAL_Status HAL_PDM_Disable(struct HAL_PDM_DEV *pdm)
{
    struct PDM_REG *reg = pdm->pReg;

    HAL_ASSERT(IS_PDM_INSTANCE(reg));

    MODIFY_REG(reg->DMA_CTRL,
               PDM_DMA_RD_MSK, PDM_DMA_RD_DIS);
    MODIFY_REG(reg->SYSCONFIG,
               PDM_RX_MASK | PDM_RX_CLR_MASK,
               PDM_RX_STOP | PDM_RX_CLR_WR);

    return HAL_OK;
}

/**
 * @brief  Config pdm controller.
 * @param  pdm: the handle of pdm.
 * @param  params: audio params.
 * @return HAL_Status
 */
HAL_Status HAL_PDM_Config(struct HAL_PDM_DEV *pdm, struct AUDIO_PARAMS *params)
{
    struct PDM_REG *reg = pdm->pReg;
    uint32_t val = 0;
    HAL_Status ret = HAL_OK;

    ret = PDM_ChangeClkFreq(pdm, params);
    HAL_ASSERT(ret == HAL_OK);

#ifdef PDM_CTRL0_SAMPLE_RATE_SEL_MASK
    {
        int rate = PDM_SampleRate(params->sampleRate);

        HAL_ASSERT(rate != HAL_INVAL);
        MODIFY_REG(reg->CTRL[0],
                   PDM_CTRL0_SAMPLE_RATE_SEL_MASK,
                   rate << PDM_CTRL0_SAMPLE_RATE_SEL_SHIFT);
    }
#endif

    MODIFY_REG(reg->CTRL[0],
               PDM_MODE_MSK, PDM_MODE_LJ);
    MODIFY_REG(reg->HPF_CTRL,
               PDM_HPF_CF_MSK, PDM_HPF_60HZ);
    MODIFY_REG(reg->HPF_CTRL,
               PDM_HPF_LE | PDM_HPF_RE, PDM_HPF_LE | PDM_HPF_RE);
    MODIFY_REG(reg->CLK_CTRL, PDM_CLK_EN, PDM_CLK_EN);

    val = PDM_VDW(params->sampleBits);
    switch (params->channels) {
    case 8:
        val |= PDM_PATH3_EN;
    /* fallthrough */
    case 6:
        val |= PDM_PATH2_EN;
    /* fallthrough */
    case 4:
        val |= PDM_PATH1_EN;
    /* fallthrough */
    case 2:
        val |= PDM_PATH0_EN;
        break;
    default:

        return HAL_INVAL;
    }

    MODIFY_REG(reg->CTRL[0],
               PDM_PATH_MSK | PDM_VDW_MSK,
               val);
    /* all channels share the single FIFO */
    MODIFY_REG(reg->DMA_CTRL, PDM_DMA_RDL_MSK,
               PDM_DMA_RDL(8 * params->channels));

    return ret;
}

/** @} */

#endif

/** @} */

/** @} */
