/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup AUDIOPWM
 *  @{
 */

/** @defgroup AUDIOPWM_How_To_Use How To Use
 *  @{

 The AUDIOPWM driver can be used as follows:

 @} */

#include "hal_base.h"

#ifdef HAL_AUDIOPWM_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/

#define AUDIOPWM_DMA_BURST_SIZE (8) /* size * width: 8*4 = 32 bytes */

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

/********************* Public Function Definition ****************************/
/** @defgroup AUDIOPWM_Exported_Functions_Group1 Suspend and Resume Functions

 This section provides functions allowing to suspend and resume the module:

 ...to do or delete this row

 *  @{
 */

/**
 * @brief  audioPwm suspend.
 * @param  audioPwm: the handle of audioPwm.
 * @return HAL_Status
 */
HAL_Status HAL_AUDIOPWM_Supsend(struct HAL_AUDIOPWM_DEV *audioPwm)
{
    return HAL_OK;
}

/**
 * @brief  audioPwm resume.
 * @param  audioPwm: the handle of audioPwm.
 * @return HAL_Status
 */
HAL_Status HAL_AUDIOPWM_Resume(struct HAL_AUDIOPWM_DEV *audioPwm)
{
    return HAL_OK;
}

/** @} */

/** @defgroup AUDIOPWM_Exported_Functions_Group2 State and Errors Functions

 This section provides functions allowing to get the status of the module:

 *  @{
 */

/** @} */

/** @defgroup AUDIOPWM_Exported_Functions_Group3 IO Functions

 This section provides functions allowing to IO controlling:

 *  @{
 */

/** @} */

/** @defgroup AUDIOPWM_Exported_Functions_Group4 Init and DeInit Functions

 This section provides functions allowing to init and deinit the module:

 ...to do or delete this row

 *  @{
 */

/**
 * @brief  Init audioPwm controller.
 * @param  audioPwm: the handle of audioPwm.
 * @param  config: init config for audioPwm init.
 * @return HAL_Status
 */
HAL_Status HAL_AUDIOPWM_Init(struct HAL_AUDIOPWM_DEV *audioPwm, struct AUDIO_INIT_CONFIG *config)
{
    HAL_CRU_ClkEnable(audioPwm->hclk);

    return HAL_OK;
}

/**
 * @brief  DeInit audioPwm controller.
 * @param  audioPwm: the handle of audioPwm.
 * @return HAL_Status
 */
HAL_Status HAL_AUDIOPWM_DeInit(struct HAL_AUDIOPWM_DEV *audioPwm)
{
    HAL_CRU_ClkDisable(audioPwm->hclk);

    return HAL_OK;
}

/** @} */

/** @defgroup AUDIOPWM_Exported_Functions_Group5 Other Functions
 *  @{
 */

/**
 * @brief  Enable audioPwm controller.
 * @param  audioPwm: the handle of audioPwm.
 * @return HAL_Status
 */
HAL_Status HAL_AUDIOPWM_Enable(struct HAL_AUDIOPWM_DEV *audioPwm)
{
    struct AUDIOPWM_REG *reg = audioPwm->pReg;

    WRITE_REG(reg->FIFO_CFG, AUDPWM_DMA_EN << 16 | AUDPWM_DMA_EN);
    WRITE_REG(reg->XFER, AUDPWM_START << 16 | AUDPWM_START);

    return HAL_OK;
}

/**
 * @brief  Disable audioPwm controller.
 * @param  audioPwm: the handle of audioPwm.
 * @return HAL_Status
 */
HAL_Status HAL_AUDIOPWM_Disable(struct HAL_AUDIOPWM_DEV *audioPwm)
{
    struct AUDIOPWM_REG *reg = audioPwm->pReg;

    WRITE_REG(reg->FIFO_CFG, AUDPWM_DMA_EN << 16 | AUDPWM_DMA_DIS);
    WRITE_REG(reg->XFER, AUDPWM_START << 16 | AUDPWM_STOP);

    return HAL_OK;
}

/**
 * @brief  Config audioPwm controller.
 * @param  audioPwm: the handle of audioPwm.
 * @param  params: audio params.
 * @return HAL_Status
 */
HAL_Status HAL_AUDIOPWM_Config(struct HAL_AUDIOPWM_DEV *audioPwm,
                               struct AUDIO_PARAMS *params)
{
    struct AUDIOPWM_REG *reg = audioPwm->pReg;

    WRITE_REG(reg->SRC_CFG,
              AUDPWM_WIDTH_MASK << 16 | AUDPWM_WIDTH(params->sampleBits));
    WRITE_REG(reg->PWM_CFG,
              AUDPWM_SAMPLEBIT_MASK << 16 | AUDPWM_SAMPLEBIT(11));
    WRITE_REG(reg->PWM_CFG,
              AUDPWM_LINEAR_INTERPOLATE_EN << 16 | AUDPWM_LINEAR_INTERPOLATE_EN);
    WRITE_REG(reg->PWM_CFG,
              AUDPWM_INTERPOLATE_RATE_MASK << 16 | AUDPWM_INTERPOLATE_RATE(1));
    WRITE_REG(reg->FIFO_CFG,
              AUDPWM_DMA_TDL_MASK << 16 | AUDPWM_DMA_TDL(16));

    return HAL_OK;
}

/** @} */

#endif

/** @} */

/** @} */
