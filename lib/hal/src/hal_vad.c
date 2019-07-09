/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup VAD
 *  @{
 */

/** @defgroup VAD_How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The VAD driver can be used as follows:

 @endverbatim
 @} */

#include "hal_base.h"

#ifdef HAL_VAD_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/

/********************* Private Structure Definition **************************/

/** audio source index : address mapping */
struct AUDIO_SRC_ADDR_MAP {
    uint32_t id;
    uint32_t addr;
};

/********************* Private Variable Definition ***************************/

static const struct AUDIO_SRC_ADDR_MAP addrMaps[] = {
    { 1, I2S0_BASE + 0x800 }, /* i2s */
    { 2, PDM0_BASE + 0x400 }, /* pdm */
};

/********************* Private Function Definition ***************************/

static HAL_Status VAD_Get_Audio_Src_Info(struct HAL_VAD_DEV *vad, uint32_t addr)
{
    uint32_t i;

    for (i = 0; i < HAL_ARRAY_SIZE(addrMaps); i++) {
        if ((addrMaps[i].addr >> 12) == (addr >> 12)) {
            vad->audioSrc = addrMaps[i].id;
            vad->audioSrcAddr = addrMaps[i].addr;

            return HAL_OK;
        }
    }

    return HAL_ERROR;
}

static int VAD_Ioctl(void *priv, int cmd, void *arg)
{
    struct AUDIO_DAI *dai = (struct AUDIO_DAI *)priv;
    int ret = HAL_OK;

    HAL_ASSERT(dai != NULL);

    switch (cmd) {
    case AUDIO_IOCTL_HW_PARAMS:
    {
        struct AUDIO_PARAMS *params = (struct AUDIO_PARAMS *)arg;

        ret = HAL_VAD_Config(dai, params->stream, params);
    }
    break;
    case AUDIO_IOCTL_START:
    {
        uint8_t stream = *(uint8_t *)arg;

        ret = HAL_VAD_Start(dai, stream);
    }
    break;
    case AUDIO_IOCTL_DROP:
    {
        uint8_t stream = *(uint8_t *)arg;

        ret = HAL_VAD_Stop(dai, stream);
    }
    break;
    case AUDIO_IOCTL_VAD_SET_BUFFER:
    {
        struct AUDIO_BUF *abuf = (struct AUDIO_BUF *)arg;
        uint32_t start = (uint32_t)abuf->buf; /* phy addr */
        uint32_t end = (uint32_t)(abuf->buf + abuf->bufSize);

        ret = HAL_VAD_ConfigRingBuffer(dai, start, end);
    }
    break;
    case AUDIO_IOCTL_VAD_SET_PERIOD:
    {
        uint32_t kBytes = *(uint32_t *)arg;

        ret = HAL_VAD_SetPeriodSize(dai, kBytes);
    }
    break;
    case AUDIO_IOCTL_VAD_SET_AUDIOSRC:
    {
        uint32_t source = *(uint32_t *)arg;

        ret = HAL_VAD_SetAudioSource(dai, source);
    }
    break;
    case AUDIO_IOCTL_VAD_EN_BUSMODE:
    {
        uint8_t en = *(uint8_t *)arg;

        ret = HAL_VAD_EnableBusMode(dai, en);
    }
    break;
    default:

        return HAL_INVAL;
    }

    return ret;
}

static const struct AUDIO_OPS vadOps = {
    .ioctl = VAD_Ioctl,
};

/********************* Public Function Definition ****************************/
/** @defgroup VAD_Exported_Functions_Group1 Suspend and Resume Functions
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
 * @brief  vad suspend.
 * @param  dai: vad dai.
 * @return HAL_Status
 */
HAL_Status HAL_VAD_Supsend(struct AUDIO_DAI *dai)
{
    return HAL_OK;
}

/**
 * @brief  vad resume.
 * @param  dai: vad dai.
 * @return HAL_Status
 */
HAL_Status HAL_VAD_Resume(struct AUDIO_DAI *dai)
{
    return HAL_OK;
}

/** @} */

/** @defgroup VAD_Exported_Functions_Group2 State and Errors Functions
 @verbatim

 ===============================================================================
             #### State and Errors functions ####
 ===============================================================================
 This section provides functions allowing to get the status of the module:

 @endverbatim
 *  @{
 */

/** @} */

/** @defgroup VAD_Exported_Functions_Group3 IO Functions
 @verbatim

 ===============================================================================
             #### IO functions ####
 ===============================================================================
 This section provides functions allowing to IO controlling:

 @endverbatim
 *  @{
 */

/** @} */

/** @defgroup VAD_Exported_Functions_Group4 Init and Deinit Functions
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
 * @brief  Init vad controller.
 * @param  dai: the handle of struct AUDIO_DAI.
 * @param  vad: the handle of struct HAL_VAD_DEV.
 * @return HAL_Status
 */
HAL_Status HAL_VAD_Init(struct AUDIO_DAI *dai, struct HAL_VAD_DEV *vad)
{
    struct VAD_REG *reg = (struct VAD_REG *)vad->base;
    uint32_t val, mask;

    HAL_CRU_ClkEnable(vad->hclk);

    vad->mode = STORE_DATA_ALL;
    vad->audioDetChnl = 0;
    vad->vswitch = 0;

    WRITE_REG(reg->RAM_START_ADDR, vad->ramStartAddr);
    WRITE_REG(reg->RAM_END_ADDR, vad->ramEndAddr);
    vad->vbuf.begin = vad->ramStartAddr;
    WRITE_REG(reg->VS_ADDR, vad->audioSrcAddr);
    val = VAD_DET_CHNL(vad->audioDetChnl);
    val |= AUDIO_SRC_SEL(vad->audioSrc);
    val |= VAD_MODE(vad->mode);
    val |= SRC_ADDR_MODE_INC | SRC_BURST_INCR;
    mask = VAD_DET_CHNL_MASK | AUDIO_SRC_SEL_MASK |
           VAD_MODE_MASK | SRC_ADDR_MODE_MASK | SRC_BURST_MASK;

    MODIFY_REG(reg->CONTROL, mask, val);

    dai->id = vad->base;
    dai->privData = vad;
    dai->ops = &vadOps;

    return HAL_AUDIO_RegisterDai(dai);
}

/**
 * @brief  Deinit vad controller.
 * @param  dai: The handle of struct AUDIO_DAI.
 * @return HAL_Status
 */
HAL_Status HAL_VAD_Deinit(struct AUDIO_DAI *dai)
{
    struct HAL_VAD_DEV *vad = (struct HAL_VAD_DEV *)dai->privData;

    HAL_CRU_ClkDisable(vad->hclk);

    dai->ops = NULL;

    return HAL_AUDIO_UnregisterDai(dai);
}

/** @} */

/** @defgroup VAD_Exported_Functions_Group5 Other Functions
 *  @{
 */

/**
 * @brief  Start VAD.
 * @param  dai: The handle of struct AUDIO_DAI.
 * @param  stream: AUDIO_STREAM_PLAYBACK or AUDIO_STREAM_CAPTURE.
 * @return HAL_Status
 */
HAL_Status HAL_VAD_Start(struct AUDIO_DAI *dai, uint8_t stream)
{
    struct HAL_VAD_DEV *vad = (struct HAL_VAD_DEV *)dai->privData;
    struct VAD_REG *reg = (struct VAD_REG *)vad->base;
    uint32_t val, mask;

    HAL_ASSERT(stream == AUDIO_STREAM_CAPTURE);

    MODIFY_REG(reg->CONTROL, VAD_EN_MASK, VAD_EN);

    val = ERR_INT_EN | VAD_DET_INT_EN;
    mask = ERR_INT_EN_MASK | VAD_DET_INT_EN_MASK;

    MODIFY_REG(reg->INT, mask, val);

    return HAL_OK;
}

/**
 * @brief  Stop VAD.
 * @param  dai: The handle of struct AUDIO_DAI.
 * @param  stream: AUDIO_STREAM_PLAYBACK or AUDIO_STREAM_CAPTURE.
 * @return HAL_Status
 */
HAL_Status HAL_VAD_Stop(struct AUDIO_DAI *dai, uint8_t stream)
{
    struct HAL_VAD_DEV *vad = (struct HAL_VAD_DEV *)dai->privData;
    struct VAD_REG *reg = (struct VAD_REG *)vad->base;
    struct VAD_BUF *vbuf = &vad->vbuf;
    uint32_t val;

    HAL_ASSERT(stream == AUDIO_STREAM_CAPTURE);

    val = READ_REG(reg->CONTROL);
    if ((val & VAD_EN_MASK) == VAD_DISABLE)
        return 0;
    MODIFY_REG(reg->CONTROL, VAD_EN_MASK, VAD_DISABLE);
    val = READ_REG(reg->CONTROL);
    vad->h_16Bit = (val & AUDIO_24BIT_SAT_MASK) == AUDIO_H16B;
    val = READ_REG(reg->RAM_END_ADDR);
    vbuf->end = val + 0x8; /* ram_end_addr means the base of last entry */
    val = READ_REG(reg->INT);
    val &= HAL_BIT(8);
    vbuf->loop = val;
    val = READ_REG(reg->RAM_CUR_ADDR);
    if (!val) {
        vbuf->size = 0;
        vbuf->cur = vbuf->begin;

        return 0;
    }
    vbuf->cur = val;

    if (vbuf->loop) {
        vbuf->size = vbuf->end - vbuf->begin;
        vbuf->pos = vbuf->cur;
    } else {
        vbuf->size = vbuf->cur - vbuf->begin;
        vbuf->end = vbuf->cur;
        vbuf->pos = vbuf->begin;
    }

    return HAL_OK;
}

/**
 * @brief  Config params for VAD.
 * @param  dai: The handle of struct AUDIO_DAI.
 * @param  stream: AUDIO_STREAM_PLAYBACK or AUDIO_STREAM_CAPTURE.
 * @param  params: The audio params.
 * @return HAL_Status
 */
HAL_Status HAL_VAD_Config(struct AUDIO_DAI *dai, uint8_t stream,
                          struct AUDIO_PARAMS *params)
{
    struct HAL_VAD_DEV *vad = (struct HAL_VAD_DEV *)dai->privData;
    struct VAD_REG *reg = (struct VAD_REG *)vad->base;
    uint32_t val, mask, channels;

    HAL_ASSERT(stream == AUDIO_STREAM_CAPTURE);

    switch (params->sampleBits) {
    case AUDIO_SAMPLEBITS_16:
        val = AUDIO_CHNL_16B;
        vad->sampleBytes = 2;
        break;
    case AUDIO_SAMPLEBITS_32:
        val = AUDIO_CHNL_24B;
        vad->sampleBytes = 4;
        break;
    default:

        return HAL_INVAL;
    }

    MODIFY_REG(reg->CONTROL, AUDIO_CHNL_BW_MASK, val);

    channels = params->channels;
    mask = AUDIO_CHNL_NUM_MASK | INCR_BURST_LEN_MASK;
    val = AUDIO_CHNL_NUM(channels) | INCR_BURST_LEN(channels);
    vad->channels = channels;
    MODIFY_REG(reg->CONTROL, mask, val);

    return HAL_OK;
}

/**
 * @brief  Set the audio stream source for VAD.
 * @param  dai: The handle of struct AUDIO_DAI.
 @ @param  source: The audio controllers' base addr.
           depends on bit SOURCE_FIXADDR_EN in register 'VAD_CONTROL'.
 * @return HAL_Status
 */
HAL_Status HAL_VAD_SetAudioSource(struct AUDIO_DAI *dai, uint32_t source)
{
    struct HAL_VAD_DEV *vad = (struct HAL_VAD_DEV *)dai->privData;
    struct VAD_REG *reg = (struct VAD_REG *)vad->base;
    HAL_Status ret;

    ret = VAD_Get_Audio_Src_Info(vad, source);
    HAL_ASSERT(ret == HAL_OK);

    WRITE_REG(reg->VS_ADDR, vad->audioSrcAddr);
    MODIFY_REG(reg->CONTROL, AUDIO_SRC_SEL_MASK, AUDIO_SRC_SEL(vad->audioSrc));

    return ret;
}

/**
 * @brief  Set VAD work mode.
 * @param  dai: The handle of struct AUDIO_DAI.
 * @param  mode: vad work mode, 0~2.
 * @return HAL_Status
 */
HAL_Status HAL_VAD_SetMode(struct AUDIO_DAI *dai, int mode)
{
    struct HAL_VAD_DEV *vad = (struct HAL_VAD_DEV *)dai->privData;
    struct VAD_REG *reg = (struct VAD_REG *)vad->base;

    vad->mode = mode;
    MODIFY_REG(reg->CONTROL, VAD_MODE_MASK, vad->mode << VAD_MODE_SHIFT);

    return HAL_OK;
}

/**
 * @brief  Set the ring buffer time for VAD.
 * @param  dai: The handle of struct AUDIO_DAI.
 * @param  bufferTime: buffer time in msec.
 * @return HAL_Status
 */
HAL_Status HAL_VAD_SetBufferTime(struct AUDIO_DAI *dai, uint32_t bufferTime)
{
    struct HAL_VAD_DEV *vad = (struct HAL_VAD_DEV *)dai->privData;

    vad->bufferTime = bufferTime;

    return HAL_OK;
}

/**
 * @brief  Set detect channel for VAD.
 * @param  dai: The handle of struct AUDIO_DAI.
 * @param  detectChannel: The channel index for detection.
 * @return HAL_Status
 */
HAL_Status HAL_VAD_SetDetectChannel(struct AUDIO_DAI *dai, uint32_t detectChannel)
{
    struct HAL_VAD_DEV *vad = (struct HAL_VAD_DEV *)dai->privData;
    struct VAD_REG *reg = (struct VAD_REG *)vad->base;

    vad->audioDetChnl = detectChannel;

    MODIFY_REG(reg->CONTROL, VAD_DET_CHNL_MASK,
               VAD_DET_CHNL(vad->audioDetChnl));

    return HAL_OK;
}

/**
 * @brief  config ring buffer start and end address for VAD.
 * @param  dai: The handle of struct AUDIO_DAI.
 * @param  start: The begin address.
 * @param  end: The end address.
 * @return HAL_Status
 */
HAL_Status HAL_VAD_ConfigRingBuffer(struct AUDIO_DAI *dai, uint32_t start, uint32_t end)
{
    struct HAL_VAD_DEV *vad = (struct HAL_VAD_DEV *)dai->privData;
    struct VAD_REG *reg = (struct VAD_REG *)vad->base;

    vad->ramStartAddr = start;
    /* ramEndAddr means the last entry address to store data,
     * so need minus 0x8.
     */
    vad->ramEndAddr = end - 0x8;

    WRITE_REG(reg->RAM_START_ADDR, vad->ramStartAddr);
    WRITE_REG(reg->RAM_END_ADDR, vad->ramEndAddr);

    return HAL_OK;
}

/**
 * @brief  The IrqHandler of VAD.
 * @param  vad: The handle of struct HAL_VAD_DEV.
 * @return HAL_Status
 */
HAL_Status HAL_VAD_IrqHandler(struct HAL_VAD_DEV *vad)
{
    struct VAD_REG *reg = (struct VAD_REG *)vad->base;
    uint32_t val;

    val = READ_REG(reg->INT);
    WRITE_REG(reg->INT, val);

    HAL_DBG("%s: irq status: 0x%lx\n", __func__, val);

    return HAL_OK;
}

/**
 * @brief  enable periods data irq.
 * @param  dai: The handle of struct AUDIO_DAI.
 * @param  kbytes: period size in units of kbytes.
 * @return HAL_Status
 */
HAL_Status HAL_VAD_SetPeriodSize(struct AUDIO_DAI *dai, uint32_t kbytes)
{
    struct HAL_VAD_DEV *vad = (struct HAL_VAD_DEV *)dai->privData;
    struct VAD_REG *reg = (struct VAD_REG *)vad->base;

    MODIFY_REG(reg->AUX_CONTROL, DATA_TRANS_KBYTE_THD_MASK,
               DATA_TRANS_KBYTE_THD(kbytes));
    MODIFY_REG(reg->AUX_CONTROL, DATA_TRANS_TRIG_INT_EN_MASK,
               DATA_TRANS_TRIG_INT_EN);
    MODIFY_REG(reg->INT, VAD_DATA_TRANS_INT_EN_MASK,
               VAD_DATA_TRANS_INT_EN);

    return HAL_OK;
}

/**
 * @brief  Enable store data through ahb bus or ram interface.
 * @param  dai: The handle of struct AUDIO_DAI.
 * @param  en: enable flag.
 * @return HAL_Status
 */
HAL_Status HAL_VAD_EnableBusMode(struct AUDIO_DAI *dai, uint8_t en)
{
    struct HAL_VAD_DEV *vad = (struct HAL_VAD_DEV *)dai->privData;
    struct VAD_REG *reg = (struct VAD_REG *)vad->base;

    if (en)
        MODIFY_REG(reg->AUX_CONTROL, RAM_ITF_EN_MASK | BUS_WRITE_EN_MASK,
                   RAM_ITF_DIS | BUS_WRITE_EN);
    else
        MODIFY_REG(reg->AUX_CONTROL, RAM_ITF_EN_MASK | BUS_WRITE_EN_MASK,
                   RAM_ITF_EN | BUS_WRITE_DIS);

    return HAL_OK;
}

/** @} */

#endif

/** @} */

/** @} */
