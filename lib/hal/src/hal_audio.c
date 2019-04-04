/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

/** @addtogroup AUDIO
 *  @{
 */

/** @defgroup How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The AUDIO driver can be used as follows:

 @endverbatim
 @} */

#include "hal_base.h"

#ifdef HAL_AUDIO_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

static HAL_LIST_HEAD(sAudioDaiList);
static HAL_LIST_HEAD(sAudioPcmList);
static HAL_LIST_HEAD(sAudioCodecList);
static HAL_LIST_HEAD(sAudioCardList);

/********************* Private Function Definition ***************************/

static int AUDIO_CARD_CommonIoctl(void *priv, int cmd, void *arg)
{
    struct AUDIO_CARD *card = (struct AUDIO_CARD *)priv;
    struct AUDIO_DAI *dai = card->dai;
    struct AUDIO_DAI *vadDai = card->vadDai;
    struct AUDIO_CODEC *codec = card->codec;
    HAL_Status ret;

    HAL_ASSERT(dai != NULL);

    /* vad dai: optional */
    if (vadDai) {
        ret = vadDai->ops->ioctl(vadDai, cmd, arg);
        HAL_ASSERT(ret = HAL_OK);
    }

    ret = dai->ops->ioctl(dai, cmd, arg);
    HAL_ASSERT(ret == HAL_OK);

    /* optional */
    if (codec) {
        if (cmd == AUDIO_IOCTL_HW_PARAMS) {
            struct AUDIO_PARAMS cparams = *(struct AUDIO_PARAMS *)arg;

            /* dai-codec: master-slave or slave-master */
            cparams.daiMaster = AUDIO_DAI_LAST - cparams.daiMaster;
            ret = codec->ops->ioctl(codec, cmd, &cparams);
        } else {
            ret = codec->ops->ioctl(codec, cmd, arg);
        }

        HAL_ASSERT(ret == HAL_OK);
    }

    return ret;
}

static int AUDIO_CARD_Ioctl(void *priv, int cmd, void *arg)
{
    struct AUDIO_CARD *card = (struct AUDIO_CARD *)priv;
    HAL_Status ret = HAL_OK;

    HAL_ASSERT(card != NULL);

    switch (cmd) {
    case AUDIO_IOCTL_VAD_SET_BUFFER: /* fall through */
    case AUDIO_IOCTL_VAD_SET_PERIOD: /* fall through */
    case AUDIO_IOCTL_VAD_SET_AUDIOSRC: /* fall through */
    case AUDIO_IOCTL_VAD_EN_BUSMODE:
    {
        struct AUDIO_DAI *vadDai = card->vadDai;

        ret = vadDai->ops->ioctl(vadDai, cmd, arg);
    }
    break;
    case AUDIO_IOCTL_PCM_PREPARE: /* fall through */
    case AUDIO_IOCTL_PCM_RELEASE:
    {
        struct AUDIO_BUF *abuf = (struct AUDIO_BUF *)arg;
        uint8_t stream = abuf->stream;
        struct AUDIO_PCM *pcm = card->pcm[stream];

        ret = pcm->ops->ioctl(pcm, cmd, arg);
    }
    break;
    case AUDIO_IOCTL_PCM_BUFFER_STATUS: /* fall through */
    case AUDIO_IOCTL_PCM_START: /* fall through */
    case AUDIO_IOCTL_PCM_STOP:
    {
        uint32_t stream = *(uint32_t *)arg;
        struct AUDIO_PCM *pcm = card->pcm[stream];

        ret = pcm->ops->ioctl(pcm, cmd, arg);
    }
    break;
    case AUDIO_IOCTL_PATH_DMA:
    {
        /* switch path to 'dai-->dmac-->sram' */
        uint32_t stream = AUDIO_STREAM_CAPTURE;
        struct AUDIO_PCM *pcm = card->pcm[stream];
        struct AUDIO_DAI *vadDai = card->vadDai;

        ret = pcm->ops->ioctl(pcm, AUDIO_IOCTL_PCM_START, &stream);
        HAL_ASSERT(ret == HAL_OK);
        ret = vadDai->ops->ioctl(vadDai, AUDIO_IOCTL_DROP, &stream);
        HAL_ASSERT(ret == HAL_OK);
    }
    break;
    case AUDIO_IOCTL_PATH_BYPASS:
    {
        /* switch path to 'dai-->io-->ap' */
    }
    break;
    default:
    {
        ret = AUDIO_CARD_CommonIoctl(priv, cmd, arg);
    }
    break;
    }

    return ret;
}

static const struct AUDIO_OPS card_ops = {
    .ioctl = AUDIO_CARD_Ioctl,
};

/********************* Public Function Definition ****************************/
/** @defgroup AUDIO_Exported_Functions_Group1 Suspend and Resume Functions
 @verbatim

 ===============================================================================
             #### Suspend and Resume functions ####
 ===============================================================================
 This section provides functions allowing to suspend and resume the module:

 ...to do or delete this row

 @endverbatim
 *  @{
 */

/** @} */

/** @defgroup AUDIO_Exported_Functions_Group2 State and Errors Functions
 @verbatim

 ===============================================================================
             #### State and Errors functions ####
 ===============================================================================
 This section provides functions allowing to get the status of the module:

 @endverbatim
 *  @{
 */

/** @} */

/** @defgroup AUDIO_Exported_Functions_Group3 IO Functions
 @verbatim

 ===============================================================================
             #### IO functions ####
 ===============================================================================
 This section provides functions allowing to IO controlling:

 @endverbatim
 *  @{
 */

/** @} */

/** @defgroup AUDIO_Exported_Functions_Group4 Init and Deinit Functions
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
 * @brief  Register a Dai into audio system.
 * @param  dai: the handle of dai.
 * @return HAL_Status
 */
HAL_Status HAL_AUDIO_RegisterDai(struct AUDIO_DAI *dai)
{
    struct AUDIO_DAI *idai;

    HAL_LIST_FOR_EACH_ENTRY(idai, &sAudioDaiList, list) {
        if (idai->id == dai->id)
            return HAL_ERROR;
    }

    HAL_LIST_InsertAfter(&sAudioDaiList, &dai->list);

    return HAL_OK;
}

/**
 * @brief  Unregister a Dai from audio system.
 * @param  dai: the handle of dai.
 * @return HAL_Status
 */
HAL_Status HAL_AUDIO_UnregisterDai(struct AUDIO_DAI *dai)
{
    HAL_LIST_Remove(&dai->list);

    return HAL_OK;
}

/**
 * @brief  Register a Pcm into audio system.
 * @param  pcm: the handle of pcm.
 * @return HAL_Status
 */
HAL_Status HAL_AUDIO_RegisterPcm(struct AUDIO_PCM *pcm)
{
    HAL_LIST_InsertAfter(&sAudioPcmList, &pcm->list);

    return HAL_OK;
}

/**
 * @brief  Unregister a Pcm from audio system.
 * @param  pcm: the handle of pcm.
 * @return HAL_Status
 */
HAL_Status HAL_AUDIO_UnregisterPcm(struct AUDIO_PCM *pcm)
{
    HAL_LIST_Remove(&pcm->list);

    return HAL_OK;
}

/**
 * @brief  Register a Codec into audio system.
 * @param  codec: the handle of codec.
 * @return HAL_Status
 */
HAL_Status HAL_AUDIO_RegisterCodec(struct AUDIO_CODEC *codec)
{
    struct AUDIO_CODEC *icodec;

    HAL_LIST_FOR_EACH_ENTRY(icodec, &sAudioCodecList, list) {
        if (icodec->id == codec->id)
            return HAL_ERROR;
    }

    HAL_LIST_InsertAfter(&sAudioCodecList, &codec->list);

    return HAL_OK;
}

/**
 * @brief  Unregister a Codec from audio system.
 * @param  codec: the handle of codec.
 * @return HAL_Status
 */
HAL_Status HAL_AUDIO_UnregisterCodec(struct AUDIO_CODEC *codec)
{
    HAL_LIST_Remove(&codec->list);

    return HAL_OK;
}

/**
 * @brief  Register a Card into audio system.
 * @param  card: the handle of card.
 * @return HAL_Status
 */
HAL_Status HAL_AUDIO_RegisterCard(struct AUDIO_CARD *card)
{
    struct AUDIO_CARD *icard;

    HAL_LIST_FOR_EACH_ENTRY(icard, &sAudioCardList, list) {
        if (icard->id == card->id)
            return HAL_ERROR;
    }

    /* assign default card ops */
    if (!card->ops)
        card->ops = &card_ops;

    HAL_LIST_InsertAfter(&sAudioCardList, &card->list);

    return HAL_OK;
}

/**
 * @brief  Unregister a Card from audio system.
 * @param  card: the handle of card.
 * @return HAL_Status
 */
HAL_Status HAL_AUDIO_UnregisterCard(struct AUDIO_CARD *card)
{
    HAL_LIST_Remove(&card->list);

    return HAL_OK;
}

/** @} */

/** @defgroup AUDIO_Exported_Functions_Group5 Other Functions
 *  @{
 */

/**
 * @brief  Find dai via the given id(dai controller phy base).
 * @param  id: dai id.
 * @return AUDIO_DAI
 */
struct AUDIO_DAI *HAL_AUDIO_FindDai(uint32_t id)
{
    struct AUDIO_DAI *dai;

    HAL_LIST_FOR_EACH_ENTRY(dai, &sAudioDaiList, list) {
        if (dai->id == id)
            return dai;
    }

    return NULL;
}

/**
 * @brief  Find codec via the given id.
 * @param  id: codec id.
 * @return AUDIO_CODEC
 */
struct AUDIO_CODEC *HAL_AUDIO_FindCodec(uint32_t id)
{
    struct AUDIO_CODEC *codec;

    HAL_LIST_FOR_EACH_ENTRY(codec, &sAudioCodecList, list) {
        if (codec->id == id)
            return codec;
    }

    return NULL;
}

/**
 * @brief  Find card via the given id.
 * @param  id: card id.
 * @return AUDIO_CARD
 */
struct AUDIO_CARD *HAL_AUDIO_FindCard(uint32_t id)
{
    struct AUDIO_CARD *card;

    HAL_LIST_FOR_EACH_ENTRY(card, &sAudioCardList, list) {
        if (card->id == id)
            return card;
    }

    return NULL;
}

/** @} */

#endif

/** @} */

/** @} */
