/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup PWM
 *  @{
 */

/** @defgroup How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The PWM driver can be used as follows:

    [..]
      The PWM HAL driver can be used as follows:

      (#) Declare a PWM_Handle handle structure, for example:
          PWM_Handle instance;

      (#) Invoke HAL_PWM_Init() API to initialize base address and clock frequency:
          (++) Base register address;
          (++) Input clock frequency.

      (#) Invoke HAL_PWM_SetConfig() API and HAL_PWM_SetEnable() to start/stop:
          (++) Use HAL_PWM_SetConfig() to configurate the request mode;
          (++) Use HAL_PWM_SetEnable() with true to start PWM;
          (++) Use HAL_PWM_SetEnable() with false to stop PWM.

      (#) Invoke HAL_PWM_DeInit() if necessary.
 @endverbatim
 @} */

#include "hal_base.h"

#ifdef HAL_PWM_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/

#define PWM_CNT_REG(pPWM, ch)    (pPWM->pReg->CHANNELS[ch].CNT)
#define PWM_PERIOD_REG(pPWM, ch) (pPWM->pReg->CHANNELS[ch].PERIOD_HPR)
#define PWM_DUTY_REG(pPWM, ch)   (pPWM->pReg->CHANNELS[ch].DUTY_LPR)
#define PWM_CTRL_REG(pPWM, ch)   (pPWM->pReg->CHANNELS[ch].CTRL)

#define PWM_INT_EN(ch) (1 << ch)

#define PWM_DISABLE (0 << PWM_PWM0_CTRL_PWM_EN_SHIFT)
#define PWM_ENABLE  (1 << PWM_PWM0_CTRL_PWM_EN_SHIFT)

#define PWM_DUTY_POSTIVE  (1 << PWM_PWM0_CTRL_DUTY_POL_SHIFT)
#define PWM_DUTY_NEGATIVE (0 << PWM_PWM0_CTRL_DUTY_POL_SHIFT)
#define PWM_DUTY_MASK     (1 << 3)

#define PWM_INACTIVE_POSTIVE  (1 << PWM_PWM0_CTRL_INACTIVE_POL_SHIFT)
#define PWM_INACTIVE_NEGATIVE (0 << PWM_PWM0_CTRL_INACTIVE_POL_SHIFT)
#define PWM_INACTIVE_MASK     (1 << 4)

#define PWM_OUTPUT_LEFT   (0 << PWM_PWM0_CTRL_OUTPUT_MODE_SHIFT)
#define PWM_OUTPUT_CENTER (1 << PWM_PWM0_CTRL_OUTPUT_MODE_SHIFT)

#define PWM_UNLOCK (0 << PWM_PWM0_CTRL_CONLOCK_SHIFT)
#define PWM_LOCK   (1 << PWM_PWM0_CTRL_CONLOCK_SHIFT)

#define PWM_LP_DISABLE (0 << PWM_PWM0_CTRL_FORCE_CLK_EN_SHIFT)
#define PWM_LP_ENABLE  (1 << PWM_PWM0_CTRL_FORCE_CLK_EN_SHIFT)

#define PWM_SEL_SRC_CLK   (0 << PWM_PWM0_CTRL_CLK_SEL_SHIFT)
#define PWM_SEL_SCALE_CLK (1 << PWM_PWM0_CTRL_CLK_SEL_SHIFT)

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

/********************* Public Function Definition ****************************/

/** @defgroup PWM_Exported_Functions_Group3 IO Functions
 @verbatim

 ===============================================================================
             #### IO functions ####
 ===============================================================================
 This section provides functions allowing to IO controlling:

 @endverbatim
 *  @{
 */

/**
  * @brief  Handle PWM interrupt for capture/oneshot mode.
  * @param  pPWM: pointer to a PWM_HANDLE structure that contains
  *               the information for PWM module.
  * @retval HAL status
  */
HAL_Status HAL_PWM_IRQHandler(struct PWM_HANDLE *pPWM)
{
    uint32_t status = READ_REG(pPWM->pReg->INTSTS);
    uint32_t i;

    /* clean ipd */
    WRITE_REG(pPWM->pReg->INTSTS, status & 0xf);

    if (status & 0xf) {
        for (i = 0; i < HAL_PWM_NUM_CHANNELS; i++) {
            if ((status & (1 << i)) &&
                (pPWM->mode[i] == HAL_PWM_CAPTURE)) {
                pPWM->result[i].active = true;
                pPWM->result[i].pol = status & (1 << (i + 8));
                if (pPWM->result[i].pol)
                    pPWM->result[i].period = READ_REG(PWM_PERIOD_REG(pPWM, i));
                else
                    pPWM->result[i].period = READ_REG(PWM_DUTY_REG(pPWM, i));
            }
        }
    }

    return HAL_OK;
}

/**
 * @brief  Configurate PWM mode.
 * @param  pPWM: pointer to a PWM_HANDLE structure that contains
 *               the information for PWM module.
 * @param  channel: PWM channle(0~3).
 * @param  config: Configuration for PWM.
 * @retval HAL status
 */
HAL_Status HAL_PWM_SetConfig(struct PWM_HANDLE *pPWM, uint32_t channel,
                             const struct HAL_PWM_CONFIG *config)
{
    unsigned long period, duty;
    uint32_t ctrl;

    HAL_ASSERT(pPWM != NULL);
    HAL_ASSERT(channel < HAL_PWM_NUM_CHANNELS);
    HAL_ASSERT(config != NULL);
    HAL_DBG("channe=%ld, period_ns=%ld, duty_ns=%ld\n",
            channel, config->periodNS, config->dutyNS);

    period = (uint64_t)((pPWM->freq / 1000) * config->periodNS) / 1000000;
    duty = (uint64_t)((pPWM->freq / 1000) * config->dutyNS) / 1000000;

    ctrl = READ_REG(PWM_CTRL_REG(pPWM, channel));
    ctrl |= PWM_LOCK;
    WRITE_REG(PWM_CTRL_REG(pPWM, channel), ctrl);

    WRITE_REG(PWM_PERIOD_REG(pPWM, channel), period);
    WRITE_REG(PWM_DUTY_REG(pPWM, channel), duty);

    ctrl &= ~(PWM_DUTY_MASK | PWM_INACTIVE_MASK);
    if (config->polarity)
        ctrl |= PWM_DUTY_NEGATIVE | PWM_INACTIVE_POSTIVE;
    else
        ctrl |= PWM_DUTY_POSTIVE | PWM_INACTIVE_NEGATIVE;

    if (pPWM->mode[channel] == HAL_PWM_ONE_SHOT)
        ctrl |= (config->count << PWM_PWM0_CTRL_RPT_SHIFT) & PWM_PWM0_CTRL_RPT_MASK;

    ctrl &= ~PWM_LOCK;
    WRITE_REG(PWM_CTRL_REG(pPWM, channel), ctrl);

    HAL_DBG("channe=%ld, period=%lu, duty=%lu, polarity=%d\n",
            channel, period, duty, config->polarity);

    return HAL_OK;
}

/**
 * @brief  Enable/Disable PWM.
 * @param  pPWM: pointer to a PWM_HANDLE structure that contains
 *               the information for PWM module.
 * @param  channel: PWM channle(0~3).
 * @param  mode: Current mode on for PWM.
 * @param  enable: Enable PWM yes or not.
 * @retval HAL status
 */
HAL_Status HAL_PWM_SetEnable(struct PWM_HANDLE *pPWM, uint32_t channel,
                             uint32_t mode, bool enable)
{
    uint32_t enable_conf, intEnable;

    HAL_ASSERT(pPWM != NULL);
    HAL_ASSERT(channel < HAL_PWM_NUM_CHANNELS);
    HAL_DBG("channe=%ld, enable:=%d\n", channel, enable);

    pPWM->mode[channel] = mode;
    if (mode != HAL_PWM_CONTINUOUS)
        intEnable = READ_REG(pPWM->pReg->INT_EN);

    enable_conf = READ_REG(PWM_CTRL_REG(pPWM, channel));

    if (enable) {
        enable_conf |= mode | PWM_OUTPUT_LEFT | PWM_LP_DISABLE | PWM_ENABLE;
        /* Enable irq */
        if (mode != HAL_PWM_CONTINUOUS)
            intEnable |= PWM_INT_EN(channel);
    } else {
        enable_conf &= ~PWM_ENABLE;
        /* Disable irq */
        if (mode != HAL_PWM_CONTINUOUS)
            intEnable &= ~PWM_INT_EN(channel);
    }

    if (mode != HAL_PWM_CONTINUOUS)
        WRITE_REG(pPWM->pReg->INT_EN, intEnable);

    WRITE_REG(PWM_CTRL_REG(pPWM, channel), enable_conf);

    return HAL_OK;
}

/** @} */

/** @defgroup PWM_Exported_Functions_Group4 Init and Deinit Functions
 @verbatim

 ===============================================================================
             #### Init and deinit functions ####
 ===============================================================================
 This section provides functions allowing to init and deinit the module:

 @endverbatim
 *  @{
 */

/**
 * @brief  Initialize the PWM according to the specified parameters.
 * @param  pPWM: pointer to a PWM_HANDLE structure that contains
 *               the information for PWM module.
 * @param  base: PWM controller register base address.
 * @param  freq: PWM bus input clock frequency.
 * @return HAL_Status
 */
HAL_Status HAL_PWM_Init(struct PWM_HANDLE *pPWM, struct PWM_REG * base, uint32_t freq)
{
    HAL_ASSERT(pPWM != NULL);

    pPWM->pReg = base;
    HAL_ASSERT(IS_PWM_INSTANCE(pPWM->pReg));

    pPWM->freq = freq;

    return HAL_OK;
}

/**
  * @brief  De Initialize the PWM peripheral.
  * @param  pPWM: pointer to a PWM_HANDLE structure that contains
  *               the information for PWM module.
  * @return HAL status
  */
HAL_Status HAL_PWM_Deinit(struct PWM_HANDLE *pPWM)
{
    /* ...to do */
    return HAL_OK;
}

/** @} */

#endif

/** @} */

/** @} */
