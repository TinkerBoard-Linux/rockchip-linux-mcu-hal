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
#if (ACDCDIG_VERSION_OFFSET == 0x380) /* ACDCDIGv2 */

/********************* Private MACRO Definition ******************************/
/* REG_CON bits */
#define REG_CON_EN         (0x1 << ACDCDIG_I2C_CON0_I2C_EN_SHIFT)
#define REG_CON_MOD_TXONLY (0x0 << I2C_CON_I2C_MODE_SHIFT)
#define REG_CON_START      (0x1 << ACDCDIG_I2C_CON1_START_SETUP_SHIFT)
#define REG_CON_STOP       (0x1 << ACDCDIG_I2C_CON1_STOP_SETUP_SHIFT)
#define REG_CON_ACTACK     (0x1 << ACDCDIG_I2C_CON0_ACT2NAK_SHIFT)/* send NACK after last received byte */

#define REG_CON_TUNING_MASK  (ACDCDIG_I2C_CON1_DATA_UPD_ST_MASK)
#define REG_CON_SDA_CFG(cfg) ((cfg) << ACDCDIG_I2C_CON1_DATA_UPD_ST_SHIFT)
#define REG_CON_STA_CFG(cfg) ((cfg) << ACDCDIG_I2C_CON1_START_SETUP_SHIFT)
#define REG_CON_STO_CFG(cfg) ((cfg) << ACDCDIG_I2C_CON1_STOP_SETUP_SHIFT)

/* SYSCTRL0 */
#define ACDCDIG_SYSCTRL0_GLB_CKE_EN   (0x1U << ACDCDIG_SYSCTRL0_GLB_CKE_SHIFT)
#define ACDCDIG_SYSCTRL0_GLB_CKE_DIS  (0x0U << ACDCDIG_SYSCTRL0_GLB_CKE_SHIFT)
#define ACDCDIG_SYSCTRL0_CLK_SEL_DAC  (0x1U << ACDCDIG_SYSCTRL0_CLK_SEL_SHIFT)
#define ACDCDIG_SYSCTRL0_CLK_SEL_ADC  (0x0U << ACDCDIG_SYSCTRL0_CLK_SEL_SHIFT)
#define ACDCDIG_SYSCTRL0_SYNC_SEL_DAC (0x1U << ACDCDIG_SYSCTRL0_SYNC_SEL_SHIFT)
#define ACDCDIG_SYSCTRL0_SYNC_SEL_ADC (0x0U << ACDCDIG_SYSCTRL0_SYNC_SEL_SHIFT)
/* ADCDIGEN */
#define ACDCDIG_ADCDIGEN_ADC_L0R1_EN  (0x1U << ACDCDIG_ADCDIGEN_ADCEN_L0R1_SHIFT)
#define ACDCDIG_ADCDIGEN_ADC_L0R1_DIS (0x0U << ACDCDIG_ADCDIGEN_ADCEN_L0R1_SHIFT)
#define ACDCDIG_ADCDIGEN_ADC_L2_EN    (0x1U << ACDCDIG_ADCDIGEN_ADCEN_L2_SHIFT)
#define ACDCDIG_ADCDIGEN_ADC_L2_DIS   (0x0U << ACDCDIG_ADCDIGEN_ADCEN_L2_SHIFT)
#define ACDCDIG_ADCDIGEN_ADC_GLB_EN   (0x1U << ACDCDIG_ADCDIGEN_ADC_GLBEN_SHIFT)
#define ACDCDIG_ADCDIGEN_ADC_GLB_DIS  (0x0U << ACDCDIG_ADCDIGEN_ADC_GLBEN_SHIFT)
/* ADCCLKCTRL */
#define ACDCDIG_ADCCLKCTRL_ADC_SYNC_EN     (0x1U << ACDCDIG_ADCCLKCTRL_ADC_SYNC_ENA_SHIFT)
#define ACDCDIG_ADCCLKCTRL_ADC_SYNC_DIS    (0x0U << ACDCDIG_ADCCLKCTRL_ADC_SYNC_ENA_SHIFT)
#define ACDCDIG_ADCCLKCTRL_CIC_DS_RATIO_4  (0x2U << ACDCDIG_ADCCLKCTRL_CIC_DS_RATIO_SHIFT)
#define ACDCDIG_ADCCLKCTRL_CIC_DS_RATIO_8  (0x1U << ACDCDIG_ADCCLKCTRL_CIC_DS_RATIO_SHIFT)
#define ACDCDIG_ADCCLKCTRL_CIC_DS_RATIO_16 (0x0U << ACDCDIG_ADCCLKCTRL_CIC_DS_RATIO_SHIFT)
#define ACDCDIG_ADCCLKCTRL_ADC_CKE_EN      (0x1U << ACDCDIG_ADCCLKCTRL_ADC_CKE_SHIFT)
#define ACDCDIG_ADCCLKCTRL_ADC_CKE_DIS     (0x0U << ACDCDIG_ADCCLKCTRL_ADC_CKE_SHIFT)
#define ACDCDIG_ADCCLKCTRL_I2STX_CKE_EN    (0x1U << ACDCDIG_ADCCLKCTRL_I2STX_CKE_SHIFT)
#define ACDCDIG_ADCCLKCTRL_I2STX_CKE_DIS   (0x0U << ACDCDIG_ADCCLKCTRL_I2STX_CKE_SHIFT)
#define ACDCDIG_ADCCLKCTRL_CKE_BCLKTX_EN   (0x1U << ACDCDIG_ADCCLKCTRL_CKE_BCLKTX_SHIFT)
#define ACDCDIG_ADCCLKCTRL_CKE_BCLKTX_DIS  (0x0U << ACDCDIG_ADCCLKCTRL_CKE_BCLKTX_SHIFT)
#define ACDCDIG_ADCCLKCTRL_FILTER_DIS      (0x1U << ACDCDIG_ADCCLKCTRL_FILTER_GATE_EN_SHIFT)
#define ACDCDIG_ADCCLKCTRL_FILTER_EN       (0x0U << ACDCDIG_ADCCLKCTRL_FILTER_GATE_EN_SHIFT)
/* ADCSCLKTXINT_DIV */
#define ACDCDIG_ADCSCLKTXINT_DIV_SCKTXDIV(x) ((x - 1) << ACDCDIG_ADCSCLKTXINT_DIV_SCKTXDIV_SHIFT)
/* ADCCFG1 */
#define ACDCDIG_ADCCFG1_ADCSRT(x) ((x) << ACDCDIG_ADCCFG1_ADCSRT_SHIFT)
/* DACDIGEN */
#define ACDCDIG_DACDIGEN_DAC_GLB_EN  (0x1U << ACDCDIG_DACDIGEN_DAC_GLBEN_SHIFT)
#define ACDCDIG_DACDIGEN_DAC_GLB_DIS (0x0U << ACDCDIG_DACDIGEN_DAC_GLBEN_SHIFT)
#define ACDCDIG_DACDIGEN_DAC_L0_EN   (0x1U << ACDCDIG_DACDIGEN_DACEN_L0_SHIFT)
#define ACDCDIG_DACDIGEN_DAC_L0_DIS  (0x0U << ACDCDIG_DACDIGEN_DACEN_L0_SHIFT)
/* DACCLKCTRL */
#define ACDCDIG_DACCLKCTRL_DAC_SYNC_EN    (0x1U << ACDCDIG_DACCLKCTRL_DAC_SYNC_ENA_SHIFT)
#define ACDCDIG_DACCLKCTRL_DAC_SYNC_DIS   (0x0U << ACDCDIG_DACCLKCTRL_DAC_SYNC_ENA_SHIFT)
#define ACDCDIG_DACCLKCTRL_DAC_CKE_EN     (0x1U << ACDCDIG_DACCLKCTRL_DAC_CKE_SHIFT)
#define ACDCDIG_DACCLKCTRL_DAC_CKE_DIS    (0x0U << ACDCDIG_DACCLKCTRL_DAC_CKE_SHIFT)
#define ACDCDIG_DACCLKCTRL_I2SRX_CKE_EN   (0x1U << ACDCDIG_DACCLKCTRL_I2SRX_CKE_SHIFT)
#define ACDCDIG_DACCLKCTRL_I2SRX_CKE_DIS  (0x0U << ACDCDIG_DACCLKCTRL_I2SRX_CKE_SHIFT)
#define ACDCDIG_DACCLKCTRL_CKE_BCLKRX_EN  (0x1U << ACDCDIG_DACCLKCTRL_CKE_BCLKRX_SHIFT)
#define ACDCDIG_DACCLKCTRL_CKE_BCLKRX_DIS (0x0U << ACDCDIG_DACCLKCTRL_CKE_BCLKRX_SHIFT)
/* DACSCLKRXINT_DIV */
#define ACDCDIG_DACSCLKRXINT_DIV_SCKRXDIV(x) ((x - 1) << ACDCDIG_DACSCLKRXINT_DIV_SCKRXDIV_SHIFT)
/* DACCFG1 */
#define ACDCDIG_DACCFG1_DACSRT(x) ((x) << ACDCDIG_DACCFG1_DACSRT_SHIFT)

/* I2S_TXCR0 */
#define ACDCDIG_I2S_TXCR0_VDW(x)         ((x - 1) << ACDCDIG_I2S_TXCR0_VDW_SHIFT)
#define ACDCDIG_I2S_TXCR0_TFS_I2S        (0x0U << ACDCDIG_I2S_TXCR0_TFS_SHIFT)
#define ACDCDIG_I2S_TXCR0_TFS_PCM        (0x1U << ACDCDIG_I2S_TXCR0_TFS_SHIFT)
#define ACDCDIG_I2S_TXCR0_PBM_PCM        (0x0U << ACDCDIG_I2S_TXCR1_IBM_SHIFT)
#define ACDCDIG_I2S_TXCR0_PBM_PCM_DELAY1 (0x1U << ACDCDIG_I2S_TXCR1_IBM_SHIFT)
#define ACDCDIG_I2S_TXCR0_PBM_PCM_DELAY2 (0x2U << ACDCDIG_I2S_TXCR1_IBM_SHIFT)
#define ACDCDIG_I2S_TXCR0_PBM_PCM_DELAY3 (0x3U << ACDCDIG_I2S_TXCR1_IBM_SHIFT)

/* I2S_TXCR1 */
#define ACDCDIG_I2S_TXCR1_TCSR(x)         ((x) << ACDCDIG_I2S_TXCR1_TCSR_SHIFT)
#define ACDCDIG_I2S_TXCR1_IBM_I2S_NORMAL  (0x0U << ACDCDIG_I2S_TXCR1_IBM_SHIFT)
#define ACDCDIG_I2S_TXCR1_IBM_I2S_L_AJUST (0x1U << ACDCDIG_I2S_TXCR1_IBM_SHIFT)
#define ACDCDIG_I2S_TXCR1_IBM_I2S_R_AJUST (0x2U << ACDCDIG_I2S_TXCR1_IBM_SHIFT)

/* I2S_RXCR0 */
#define ACDCDIG_I2S_RXCR0_VDW(x) ((x - 1) << ACDCDIG_I2S_RXCR0_VDW_SHIFT)
/* I2S_CKR0 */
#define ACDCDIG_I2S_CKR0_RSD(x) (((x / 64) - 1) << ACDCDIG_I2S_CKR0_RSD_SHIFT)
#define ACDCDIG_I2S_CKR0_TSD(x) (((x / 64) - 1) << ACDCDIG_I2S_CKR0_TSD_SHIFT)
/* I2S_CKR1 */
#define ACDCDIG_I2S_CKR1_TLP_NORMAL  (0x0U << ACDCDIG_I2S_CKR1_TLP_SHIFT)
#define ACDCDIG_I2S_CKR1_TLP_OPPSITE (0x1U << ACDCDIG_I2S_CKR1_TLP_SHIFT)
#define ACDCDIG_I2S_CKR1_RLP_NORMAL  (0x0U << ACDCDIG_I2S_CKR1_RLP_SHIFT)
#define ACDCDIG_I2S_CKR1_RLP_OPPSITE (0x1U << ACDCDIG_I2S_CKR1_RLP_SHIFT)
#define ACDCDIG_I2S_CKR1_CKP_POS     (0x0U << ACDCDIG_I2S_CKR1_CKP_SHIFT)
#define ACDCDIG_I2S_CKR1_CKP_NEG     (0x1U << ACDCDIG_I2S_CKR1_CKP_SHIFT)
#define ACDCDIG_I2S_CKR1_MSS_MASTER  (0x0U << ACDCDIG_I2S_CKR1_MSS_SHIFT)
#define ACDCDIG_I2S_CKR1_MSS_SLAVE   (0x1U << ACDCDIG_I2S_CKR1_MSS_SHIFT)

/* I2S_XFER */
#define ACDCDIG_I2S_XFER_TXS_START (0x1U << ACDCDIG_I2S_XFER_TXS_SHIFT)
#define ACDCDIG_I2S_XFER_TXS_STOP  (0x0U << ACDCDIG_I2S_XFER_TXS_SHIFT)
#define ACDCDIG_I2S_XFER_RXS_START (0x1U << ACDCDIG_I2S_XFER_RXS_SHIFT)
#define ACDCDIG_I2S_XFER_RXS_STOP  (0x0U << ACDCDIG_I2S_XFER_RXS_SHIFT)
/* I2S_CLR */
#define ACDCDIG_I2S_CLR_RXC (0x1U << ACDCDIG_I2S_CLR_RXC_SHIFT)
#define ACDCDIG_I2S_CLR_TXC (0x1U << ACDCDIG_I2S_CLR_TXC_SHIFT)

/* The groups of mclk */
#define ACDCDIG_GROUP0_MCLK 49152000
#define ACDCDIG_GROUP1_MCLK 45158400
#define ACDCDIG_GROUP2_MCLK 32768000

/* GRF registers */
#define GRF_CODEC_I2C_TRANS ((GRF_SOC_CON16_GRF_I2C_TRANS_REQ_MASK << 16) | (0 << GRF_SOC_CON16_GRF_I2C_TRANS_REQ_SHIFT))
#define GRF_MCU_I2C_TRANS   ((GRF_SOC_CON16_GRF_I2C_TRANS_REQ_MASK << 16) | (1 << GRF_SOC_CON16_GRF_I2C_TRANS_REQ_SHIFT))

/********************* Private Structure Definition **************************/

/**
  * @brief ACDCDIG I2C transfer mode definition - These definitions are
  * independent of the generic I2C driven.
  */
typedef enum {
    ACDCDIG_I2C_100K = 0,
    ACDCDIG_I2C_400K,
    ACDCDIG_I2C_1000K
} eACDCDIG_I2C_BusSpeed;

struct I2C_SPEC_VALUES {
    uint32_t minLowNS;
    uint32_t minHighNS;
    uint32_t maxRiseNS;
    uint32_t maxFallNS;
};

/**
 * enum Clock Sync Type - indicate which clock sync is.
 */
typedef enum {
    CLOCK_SYNC_ADC = 0,
    CLOCK_SYNC_DAC,
} eClockSyncType;

/********************* Private Variable Definition ***************************/
static const struct I2C_SPEC_VALUES standardModeSpec = {
    .minLowNS = 4700,
    .minHighNS = 4000,
    .maxRiseNS = 1000,
    .maxFallNS = 300,
};

static const struct I2C_SPEC_VALUES fastModeSpec = {
    .minLowNS = 1300,
    .minHighNS = 600,
    .maxRiseNS = 300,
    .maxFallNS = 300,
};

static const struct I2C_SPEC_VALUES fastModePlusSpec = {
    .minLowNS = 500,
    .minHighNS = 260,
    .maxRiseNS = 120,
    .maxFallNS = 120,
};

/********************* Private Function Definition ***************************/

/**
  * @brief  Get the I2C timing specification.
  * @param  speed: desired I2C bus speed.
  * @return matched i2c spec values
  */
static const struct I2C_SPEC_VALUES *I2C_GetSpec(eACDCDIG_I2C_BusSpeed speed)
{
    if (speed == ACDCDIG_I2C_1000K)
        return &fastModePlusSpec;
    else if (speed == ACDCDIG_I2C_400K)
        return &fastModeSpec;
    else
        return &standardModeSpec;
}

/**
  * @brief  Auto adapte the clock div base on input clock rate and desired speed.
  * @param  acdcDig: pointer to a HAL_ACDCDIG_DEV structure that contains
  *               the information for I2C module.
  * @return HAL status
  */
static HAL_Status ACDCDIG_I2C_AdaptDIV(struct HAL_ACDCDIG_DEV *acdcDig,
                                       uint32_t rate,
                                       eACDCDIG_I2C_BusSpeed speed)
{
    const struct I2C_SPEC_VALUES *spec;
    uint32_t rateKHZ, speedKHZ;
    uint32_t minTotalDIV, minLowDIV, minHighDIV, minHoldDIV;
    uint32_t lowDIV, highDIV, extraDIV, extraLowDIV;
    uint32_t minLowNS, minHighNS;
    uint32_t startSetup = 0;

    switch (speed) {
    case ACDCDIG_I2C_1000K:
        speedKHZ = 1000;
        break;
    case ACDCDIG_I2C_400K:
        speedKHZ = 400;
        break;
    default:
        /* default start setup time may not enough for 100K */
        startSetup = 1;
        speedKHZ = 100;
        break;
    }

    rateKHZ = HAL_DIV_ROUND_UP(rate, 1000);
    spec = I2C_GetSpec(speed);

    minTotalDIV = HAL_DIV_ROUND_UP(rateKHZ, speedKHZ * 8);

    minHighNS = spec->maxRiseNS + spec->minHighNS;
    minHighDIV = HAL_DIV_ROUND_UP(rateKHZ * minHighNS, 8 * 1000000);

    minLowNS = spec->maxFallNS + spec->minLowNS;
    minLowDIV = HAL_DIV_ROUND_UP(rateKHZ * minLowNS, 8 * 1000000);

    minHighDIV = (minHighDIV < 1) ? 2 : minHighDIV;
    minLowDIV = (minLowDIV < 1) ? 2 : minLowDIV;

    minHoldDIV = minHighDIV + minLowDIV;

    if (minHoldDIV >= minTotalDIV) {
        highDIV = minHighDIV;
        lowDIV = minLowDIV;
    } else {
        extraDIV = minTotalDIV - minHoldDIV;
        extraLowDIV = HAL_DIV_ROUND_UP(minLowDIV * extraDIV, minHoldDIV);

        lowDIV = minLowDIV + extraLowDIV;
        highDIV = minHighDIV + (extraDIV - extraLowDIV);
    }

    highDIV--;
    lowDIV--;

    if (highDIV > 0xffff || lowDIV > 0xffff)
        return HAL_INVAL;

    WRITE_REG(acdcDig->pReg->I2C_CLKDIVL[0], (lowDIV & 0xff));
    WRITE_REG(acdcDig->pReg->I2C_CLKDIVL[1], ((lowDIV >> 8) & 0xff));
    WRITE_REG(acdcDig->pReg->I2C_CLKDIVH[0], (highDIV & 0xff));
    WRITE_REG(acdcDig->pReg->I2C_CLKDIVH[1], ((highDIV >> 8) & 0xff));
    /* 1 for data hold/setup time is enough */
    WRITE_REG(acdcDig->pReg->I2C_CON[1], REG_CON_SDA_CFG(1) | REG_CON_STA_CFG(startSetup));

    return HAL_OK;
}

/**
  * @brief  Disable the I2C controller.
  * @param  acdcDig: pointer to a HAL_ACDCDIG_DEV structure that contains
  *               the information for I2C module.
  * @return HAL status
  */
static HAL_Status ACDCDIG_I2C_Disable(struct HAL_ACDCDIG_DEV *acdcDig)
{
    uint32_t val = READ_REG(acdcDig->pReg->I2C_CON[1]) & REG_CON_TUNING_MASK;

    WRITE_REG(acdcDig->pReg->I2C_CON[1], val);

    return HAL_OK;
}

/**
  * @brief  Send I2C start signal.
  * @param  acdcDig: pointer to a HAL_ACDCDIG_DEV structure that contains
  *               the information for I2C module.
  * @return HAL status
  */
static HAL_Status ACDCDIG_I2C_Start(struct HAL_ACDCDIG_DEV *acdcDig)
{
    uint32_t val, ret;

    return HAL_OK; /* FIXME: the i2c is used by MCU */

    ret = HAL_ACDCDIG_RequestI2C(acdcDig, CODEC_USE_I2C);
    if (ret != HAL_OK)
        return ret;

    val = READ_REG(acdcDig->pReg->I2C_CON[0]) & REG_CON_TUNING_MASK;

    /* enable adapter with correct mode, send START condition */
    val |= REG_CON_EN | REG_CON_MOD_TXONLY | REG_CON_START;

    /* if we want to react to NACK, set ACTACK bit */
    if (!(acdcDig->i2cFlags & HAL_I2C_M_IGNORE_NAK))
        val |= REG_CON_ACTACK;

    WRITE_REG(acdcDig->pReg->I2C_CON[0], val);

    return HAL_OK;
}

/**
  * @brief  Send I2C stop signal.
  * @param  acdcDig: pointer to a HAL_ACDCDIG_DEV structure that contains
  *               the information for I2C module.
  * @param  error: report the error for the stop.
  * @return HAL status
  */
static HAL_Status ACDCDIG_I2C_Stop(struct HAL_ACDCDIG_DEV *acdcDig)
{
    uint32_t ctrl, ret;

    return HAL_OK; /* FIXME: the i2c is used by MCU */

    ret = HAL_ACDCDIG_RequestI2C(acdcDig, CODEC_USE_I2C);
    if (ret != HAL_OK)
        return ret;

    /*
     * To start the next message. The HW is actually not capable of REPEATED
     * START. But we can get the intended effect by resetting its internal
     * state and issuing an ordinary START.
     */
    ctrl = READ_REG(acdcDig->pReg->I2C_CON[0]) & REG_CON_TUNING_MASK;
    WRITE_REG(acdcDig->pReg->I2C_CON[0], ctrl);

    return HAL_OK;
}

/**
  * @brief  Initialize the I2C according to the specified parameters.
  * @param  acdcDig: pointer to a HAL_ACDCDIG_DEV structure that contains
  *               the information for I2C module.
  * @param  rate: I2C bus input clock rate.
  * @param  speed: I2C bus output speed.
  * @return HAL status
  */
static HAL_Status ACDCDIG_I2C_Init(struct HAL_ACDCDIG_DEV *acdcDig)
{
    uint32_t i2cCodecRate = HAL_CRU_ClkGetFreq(acdcDig->clkI2cCodec);

    /* Init speed */
    return ACDCDIG_I2C_AdaptDIV(acdcDig, i2cCodecRate, 100);
}

/**
  * @brief  De Initialize the I2C peripheral.
  * @param  acdcDig: pointer to a HAL_ACDCDIG_DEV structure that contains
  *               the information for I2C module.
  * @return HAL status
  */
static HAL_Status ACDCDIG_I2C_DeInit(struct HAL_ACDCDIG_DEV *acdcDig)
{
    /* TO-DO */
    return HAL_OK;
}

/**
 * @brief  Enable ACDCDIG DACCLKCTRL.
 * @param  acdcDig: the handle of acdcDig.
 * @return HAL_Status
 */
static HAL_Status ACDCDIG_ADCCLKCTRL_Enable(struct HAL_ACDCDIG_DEV *acdcDig)
{
    struct ACDCDIG_REG *reg = acdcDig->pReg;

    MODIFY_REG(reg->ADCCLKCTRL,
               ACDCDIG_ADCCLKCTRL_CIC_DS_RATIO_MASK |
               ACDCDIG_ADCCLKCTRL_ADC_CKE_MASK |
               ACDCDIG_ADCCLKCTRL_I2STX_CKE_MASK |
               ACDCDIG_ADCCLKCTRL_CKE_BCLKTX_MASK |
               ACDCDIG_ADCCLKCTRL_FILTER_GATE_EN_MASK |
               ACDCDIG_ADCCLKCTRL_ADC_SYNC_ENA_MASK,
               ACDCDIG_ADCCLKCTRL_CIC_DS_RATIO_16 |
               ACDCDIG_ADCCLKCTRL_ADC_CKE_EN |
               ACDCDIG_ADCCLKCTRL_I2STX_CKE_EN |
               ACDCDIG_ADCCLKCTRL_CKE_BCLKTX_EN |
               ACDCDIG_ADCCLKCTRL_FILTER_DIS |
               ACDCDIG_ADCCLKCTRL_ADC_SYNC_EN);

    return HAL_OK;
}

/**
 * @brief  Disable ACDCDIG DACCLKCTRL.
 * @param  acdcDig: the handle of acdcDig.
 * @return HAL_Status
 */
static HAL_Status ACDCDIG_ADCCLKCTRL_Disable(struct HAL_ACDCDIG_DEV *acdcDig)
{
    struct ACDCDIG_REG *reg = acdcDig->pReg;

    MODIFY_REG(reg->ADCCLKCTRL,
               ACDCDIG_ADCCLKCTRL_ADC_CKE_MASK |
               ACDCDIG_ADCCLKCTRL_I2STX_CKE_MASK |
               ACDCDIG_ADCCLKCTRL_CKE_BCLKTX_MASK |
               ACDCDIG_ADCCLKCTRL_FILTER_GATE_EN_MASK,
               ACDCDIG_ADCCLKCTRL_ADC_CKE_DIS |
               ACDCDIG_ADCCLKCTRL_I2STX_CKE_DIS |
               ACDCDIG_ADCCLKCTRL_CKE_BCLKTX_DIS |
               ACDCDIG_ADCCLKCTRL_FILTER_DIS);

    return HAL_OK;
}

/**
 * @brief  Enable ACDCDIG DACCLKCTRL.
 * @param  acdcDig: the handle of acdcDig.
 * @return HAL_Status
 */
static HAL_Status ACDCDIG_DACCLKCTRL_Enable(struct HAL_ACDCDIG_DEV *acdcDig)
{
    struct ACDCDIG_REG *reg = acdcDig->pReg;

    MODIFY_REG(reg->DACCLKCTRL,
               ACDCDIG_DACCLKCTRL_DAC_CKE_MASK |
               ACDCDIG_DACCLKCTRL_I2SRX_CKE_MASK |
               ACDCDIG_DACCLKCTRL_CKE_BCLKRX_MASK |
               ACDCDIG_DACCLKCTRL_DAC_SYNC_ENA_MASK,
               ACDCDIG_DACCLKCTRL_DAC_CKE_EN |
               ACDCDIG_DACCLKCTRL_I2SRX_CKE_EN |
               ACDCDIG_DACCLKCTRL_CKE_BCLKRX_EN |
               ACDCDIG_DACCLKCTRL_DAC_SYNC_EN);

    return HAL_OK;
}

/**
 * @brief  Disable ACDCDIG DACCLKCTRL.
 * @param  acdcDig: the handle of acdcDig.
 * @return HAL_Status
 */
static HAL_Status ACDCDIG_DACCLKCTRL_Disable(struct HAL_ACDCDIG_DEV *acdcDig)
{
    struct ACDCDIG_REG *reg = acdcDig->pReg;

    MODIFY_REG(reg->DACCLKCTRL,
               ACDCDIG_DACCLKCTRL_DAC_CKE_MASK |
               ACDCDIG_DACCLKCTRL_I2SRX_CKE_MASK |
               ACDCDIG_DACCLKCTRL_CKE_BCLKRX_MASK,
               ACDCDIG_DACCLKCTRL_DAC_CKE_DIS |
               ACDCDIG_DACCLKCTRL_I2SRX_CKE_DIS |
               ACDCDIG_DACCLKCTRL_CKE_BCLKRX_DIS);

    return HAL_OK;
}

/**
 * @brief  Match tht fit input mclk for codec during different sample rates.
 * @param  sampleRate: sample rate.
 * @return mclkRate
 */
static uint32_t ACDCDIG_MCLK_Match(eAUDIO_sampleRate sampleRate)
{
    uint32_t mclkRate;

    switch (sampleRate) {
    case AUDIO_SAMPLERATE_12000:
    case AUDIO_SAMPLERATE_24000:
    case AUDIO_SAMPLERATE_48000:
    case AUDIO_SAMPLERATE_96000:
    case AUDIO_SAMPLERATE_192000:
        mclkRate = ACDCDIG_GROUP0_MCLK;
        break;
    case AUDIO_SAMPLERATE_11025:
    case AUDIO_SAMPLERATE_22050:
    case AUDIO_SAMPLERATE_44100:
    case AUDIO_SAMPLERATE_88200:
    case AUDIO_SAMPLERATE_176400:
        mclkRate = ACDCDIG_GROUP1_MCLK;
        break;
    case AUDIO_SAMPLERATE_8000:
    case AUDIO_SAMPLERATE_16000:
    case AUDIO_SAMPLERATE_32000:
    case AUDIO_SAMPLERATE_64000:
    case AUDIO_SAMPLERATE_128000:
        mclkRate = ACDCDIG_GROUP2_MCLK;
        break;
    default:
        mclkRate = 0;
        break;
    }

    return mclkRate;
}

/**
 * @brief  Select the type of clock sync from ADC or DAC.
 * @param  acdcDig: the handle of acdcDig.
 * @param  syncType: the type of clock sync.
 * @return HAL_Status
 */
static HAL_Status ACDCDIG_ClockSyncSelect(struct HAL_ACDCDIG_DEV *acdcDig,
                                          eAUDIO_streamType stream,
                                          eAUDIO_sampleRate sampleRate)
{
    struct ACDCDIG_REG *reg = acdcDig->pReg;
    uint32_t mclkRate, bclkRate, divBclk;

    mclkRate = ACDCDIG_MCLK_Match(sampleRate);
    HAL_ASSERT(mclkRate);

    bclkRate = acdcDig->bclkFs * sampleRate;
    HAL_ASSERT(bclkRate);
    divBclk = HAL_DivRoundClosest(mclkRate, bclkRate);

    if (acdcDig->enabled == 0) {
        ACDCDIG_ADCCLKCTRL_Enable(acdcDig);
        ACDCDIG_DACCLKCTRL_Enable(acdcDig);

        /* Only select clock sync once before SYSCTRL0 is enabled. */
        if (stream == AUDIO_STREAM_PLAYBACK) {
            /* Select mclk_i2s1_tx as source. */
            HAL_CRU_ClkSetMux(CLK_GET_MUX(CLK_CODEC), CLK_CODEC_SEL_MCLK_I2S8CH_1_TX_MUX);
            HAL_CRU_ClkSetFreq(MCLK_I2S8CH_1_TX, mclkRate);

            /* It is ignored when in slave mode. */
            MODIFY_REG(reg->DACSCLKRXINT_DIV, ACDCDIG_DACSCLKRXINT_DIV_SCKRXDIV_MASK,
                       ACDCDIG_DACSCLKRXINT_DIV_SCKRXDIV(divBclk));
            MODIFY_REG(reg->I2S_CKR[0], ACDCDIG_I2S_CKR0_RSD_MASK,
                       ACDCDIG_I2S_CKR0_RSD(acdcDig->bclkFs));

            /* Select clock sync is from DAC. */
            MODIFY_REG(reg->SYSCTRL0,
                       ACDCDIG_SYSCTRL0_SYNC_SEL_MASK | ACDCDIG_SYSCTRL0_CLK_SEL_MASK,
                       ACDCDIG_SYSCTRL0_SYNC_SEL_DAC | ACDCDIG_SYSCTRL0_CLK_SEL_DAC);
        } else {
            /* Select mclk_i2s1_rx as source. */
            HAL_CRU_ClkSetMux(CLK_GET_MUX(CLK_CODEC), CLK_CODEC_SEL_MCLK_I2S8CH_1_RX_MUX);
            HAL_CRU_ClkSetFreq(MCLK_I2S8CH_1_RX, mclkRate);

            /* It is ignored when in slave mode. */
            MODIFY_REG(reg->ADCSCLKTXINT_DIV, ACDCDIG_ADCSCLKTXINT_DIV_SCKTXDIV_MASK,
                       ACDCDIG_ADCSCLKTXINT_DIV_SCKTXDIV(divBclk));
            MODIFY_REG(reg->I2S_CKR[0], ACDCDIG_I2S_CKR0_TSD_MASK,
                       ACDCDIG_I2S_CKR0_TSD(acdcDig->bclkFs));

            /* Select clock sync is from ADC. */
            MODIFY_REG(reg->SYSCTRL0,
                       ACDCDIG_SYSCTRL0_SYNC_SEL_MASK | ACDCDIG_SYSCTRL0_CLK_SEL_MASK,
                       ACDCDIG_SYSCTRL0_SYNC_SEL_ADC | ACDCDIG_SYSCTRL0_CLK_SEL_ADC);
        }

        MODIFY_REG(reg->SYSCTRL0,
                   ACDCDIG_SYSCTRL0_GLB_CKE_MASK,
                   ACDCDIG_SYSCTRL0_GLB_CKE_EN);
    }

    acdcDig->enabled++;

    return HAL_OK;
}

/**
 * @brief  Init acdcDig controller.
 * @param  acdcDig: the handle of acdcDig.
 * @param  config: init config for i2s init.
 * @return HAL_Status
 */
HAL_Status HAL_ACDCDIG_Init(struct HAL_ACDCDIG_DEV *acdcDig, struct AUDIO_INIT_CONFIG *config)
{
    struct ACDCDIG_REG *reg = acdcDig->pReg;

    HAL_CRU_ClkEnable(acdcDig->hclk);
    ACDCDIG_I2C_Init(acdcDig);

    MODIFY_REG(reg->I2S_CKR[1],
               ACDCDIG_I2S_CKR1_MSS_MASK, config->master ?
               ACDCDIG_I2S_CKR1_MSS_MASTER : ACDCDIG_I2S_CKR1_MSS_SLAVE);

    MODIFY_REG(reg->I2S_CKR[1],
               ACDCDIG_I2S_CKR1_CKP_MASK, config->clkInvert ?
               ACDCDIG_I2S_CKR1_CKP_NEG : ACDCDIG_I2S_CKR1_CKP_POS);

    switch (config->format) {
    case AUDIO_FMT_I2S:
        MODIFY_REG(reg->I2S_TXCR[0],
                   ACDCDIG_I2S_TXCR0_TFS_MASK,
                   ACDCDIG_I2S_TXCR0_TFS_I2S);
        break;
    case AUDIO_FMT_PCM:
        MODIFY_REG(reg->I2S_TXCR[0],
                   ACDCDIG_I2S_TXCR0_TFS_MASK,
                   ACDCDIG_I2S_TXCR0_TFS_PCM);
        break;
    default:
        break;
    }
    acdcDig->format = config->format;

    return HAL_OK;
}

/**
 * @brief  DeInit acdcDig controller.
 * @param  acdcDig: the handle of acdcDig.
 * @return HAL_Status
 */
HAL_Status HAL_ACDCDIG_DeInit(struct HAL_ACDCDIG_DEV *acdcDig)
{
    ACDCDIG_I2C_Disable(acdcDig);
    ACDCDIG_I2C_DeInit(acdcDig);
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
HAL_Status HAL_ACDCDIG_Enable(struct HAL_ACDCDIG_DEV *acdcDig,
                              eAUDIO_streamType stream)
{
    struct ACDCDIG_REG *reg = acdcDig->pReg;
    HAL_Status ret = HAL_OK;

    /* The format is i2s by default */
    if (stream == AUDIO_STREAM_PLAYBACK) {
        MODIFY_REG(reg->I2S_XFER,
                   ACDCDIG_I2S_XFER_RXS_MASK,
                   ACDCDIG_I2S_XFER_RXS_START);

        /* Just used for playback */
        ACDCDIG_I2C_Start(acdcDig);
    } else {
        MODIFY_REG(reg->I2S_XFER,
                   ACDCDIG_I2S_XFER_TXS_MASK,
                   ACDCDIG_I2S_XFER_TXS_START);
    }

    return ret;
}

/**
 * @brief  Disable acdcDig controller.
 * @param  acdcDig: the handle of acdcDig.
 * @return HAL_Status
 */
HAL_Status HAL_ACDCDIG_Disable(struct HAL_ACDCDIG_DEV *acdcDig,
                               eAUDIO_streamType stream)
{
    struct ACDCDIG_REG *reg = acdcDig->pReg;
    HAL_Status ret = HAL_OK;

    if (stream == AUDIO_STREAM_PLAYBACK) {
        /* Just used for playback */
        ACDCDIG_I2C_Stop(acdcDig);

        MODIFY_REG(reg->I2S_XFER,
                   ACDCDIG_I2S_XFER_TXS_MASK,
                   ACDCDIG_I2S_XFER_TXS_STOP);
        MODIFY_REG(reg->I2S_CLR,
                   ACDCDIG_I2S_CLR_TXC_MASK,
                   ACDCDIG_I2S_CLR_TXC);

        /* There is MONO channel for DAC */
        MODIFY_REG(reg->DACDIGEN,
                   ACDCDIG_DACDIGEN_DAC_GLBEN_MASK |
                   ACDCDIG_DACDIGEN_DACEN_L0_MASK,
                   ACDCDIG_DACDIGEN_DAC_GLB_DIS |
                   ACDCDIG_DACDIGEN_DAC_L0_DIS);
    } else {
        MODIFY_REG(reg->I2S_XFER,
                   ACDCDIG_I2S_XFER_RXS_MASK,
                   ACDCDIG_I2S_XFER_RXS_STOP);
        MODIFY_REG(reg->I2S_CLR,
                   ACDCDIG_I2S_CLR_RXC_MASK,
                   ACDCDIG_I2S_CLR_RXC);

        /* There is max 3 channel for ADC */
        MODIFY_REG(reg->ADCDIGEN,
                   ACDCDIG_ADCDIGEN_ADC_GLBEN_MASK |
                   ACDCDIG_ADCDIGEN_ADCEN_L2_MASK |
                   ACDCDIG_ADCDIGEN_ADCEN_L0R1_MASK,
                   ACDCDIG_ADCDIGEN_ADC_GLB_DIS |
                   ACDCDIG_ADCDIGEN_ADC_L2_DIS |
                   ACDCDIG_ADCDIGEN_ADC_L0R1_DIS);
    }

    MODIFY_REG(reg->SYSCTRL0,
               ACDCDIG_SYSCTRL0_GLB_CKE_MASK,
               ACDCDIG_SYSCTRL0_GLB_CKE_DIS);

    acdcDig->enabled--;
    if (acdcDig->enabled == 0) {
        ACDCDIG_DACCLKCTRL_Disable(acdcDig);
        ACDCDIG_ADCCLKCTRL_Disable(acdcDig);
    }

    return ret;
}

/**
 * @brief  Set acdcDig clock.
 * @param  acdcDig: the handle of acdcDig.
 * @param  params: audio params.
 * @return HAL_Status
 */
HAL_Status HAL_ACDCDIG_SetClock(struct HAL_ACDCDIG_DEV *acdcDig,
                                eAUDIO_streamType stream,
                                uint32_t freq)
{
    return HAL_OK;
}

/**
 * @brief  Config acdcDig controller.
 * @param  acdcDig: the handle of acdcDig.
 * @param  params: audio params.
 * @return HAL_Status
 */
HAL_Status HAL_ACDCDIG_Config(struct HAL_ACDCDIG_DEV *acdcDig,
                              eAUDIO_streamType stream,
                              struct AUDIO_PARAMS *params)
{
    struct ACDCDIG_REG *reg = acdcDig->pReg;
    HAL_Status ret = HAL_OK;
    uint32_t srt = 0, val = 0;

    ACDCDIG_ClockSyncSelect(acdcDig, stream, params->sampleRate);

    if (stream == AUDIO_STREAM_PLAYBACK) {
        switch (params->sampleRate) {
        case AUDIO_SAMPLERATE_8000:
        case AUDIO_SAMPLERATE_11025:
        case AUDIO_SAMPLERATE_12000:
            srt = 0;
            break;
        case AUDIO_SAMPLERATE_16000:
        case AUDIO_SAMPLERATE_22050:
        case AUDIO_SAMPLERATE_24000:
            srt = 1;
            break;
        case AUDIO_SAMPLERATE_32000:
        case AUDIO_SAMPLERATE_44100:
        case AUDIO_SAMPLERATE_48000:
            srt = 2;
            break;
        case AUDIO_SAMPLERATE_64000:
        case AUDIO_SAMPLERATE_88200:
        case AUDIO_SAMPLERATE_96000:
            srt = 3;
            break;
        case AUDIO_SAMPLERATE_128000:
        case AUDIO_SAMPLERATE_176400:
        case AUDIO_SAMPLERATE_192000:
            srt = 4;
            break;
        default:
            ret = HAL_INVAL;
            break;
        }

        MODIFY_REG(reg->DACCFG1, ACDCDIG_DACCFG1_DACSRT_MASK,
                   ACDCDIG_DACCFG1_DACSRT(srt));
        switch (params->sampleBits) {
        case AUDIO_SAMPLEBITS_16:
            MODIFY_REG(reg->I2S_RXCR[0], ACDCDIG_I2S_RXCR0_VDW_MASK,
                       ACDCDIG_I2S_RXCR0_VDW(16));
            break;
        case AUDIO_SAMPLEBITS_24:
        case AUDIO_SAMPLEBITS_32:
            MODIFY_REG(reg->I2S_RXCR[0], ACDCDIG_I2S_RXCR0_VDW_MASK,
                       ACDCDIG_I2S_RXCR0_VDW(24));
            break;
        default:
            ret = HAL_INVAL;
            break;
        }

        /* There is MONO channel for DAC */
        MODIFY_REG(reg->DACDIGEN,
                   ACDCDIG_DACDIGEN_DAC_GLBEN_MASK |
                   ACDCDIG_DACDIGEN_DACEN_L0_MASK,
                   ACDCDIG_DACDIGEN_DAC_GLB_EN |
                   ACDCDIG_DACDIGEN_DAC_L0_EN);
    } else {
        switch (params->sampleRate) {
        case AUDIO_SAMPLERATE_8000:
        case AUDIO_SAMPLERATE_11025:
        case AUDIO_SAMPLERATE_12000:
            srt = 0;
            break;
        case AUDIO_SAMPLERATE_16000:
        case AUDIO_SAMPLERATE_22050:
        case AUDIO_SAMPLERATE_24000:
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
        case AUDIO_SAMPLERATE_128000:
        case AUDIO_SAMPLERATE_176400:
        case AUDIO_SAMPLERATE_192000:
            srt = 5;
            break;
        default:
            ret = HAL_INVAL;
            break;
        }

        MODIFY_REG(reg->ADCCFG1, ACDCDIG_ADCCFG1_ADCSRT_MASK,
                   ACDCDIG_ADCCFG1_ADCSRT(srt));
        switch (params->sampleBits) {
        case AUDIO_SAMPLEBITS_16:
            MODIFY_REG(reg->I2S_TXCR[0], ACDCDIG_I2S_TXCR0_VDW_MASK,
                       ACDCDIG_I2S_TXCR0_VDW(16));
            break;
        case AUDIO_SAMPLEBITS_24:
        case AUDIO_SAMPLEBITS_32:
            MODIFY_REG(reg->I2S_TXCR[0], ACDCDIG_I2S_TXCR0_VDW_MASK,
                       ACDCDIG_I2S_TXCR0_VDW(24));
            break;
        default:
            ret = HAL_INVAL;
            break;
        }

        switch (params->channels) {
        case 4:
            srt = 1;
            val = ACDCDIG_ADCDIGEN_ADC_GLB_EN |
                  ACDCDIG_ADCDIGEN_ADC_L2_EN |
                  ACDCDIG_ADCDIGEN_ADC_L0R1_EN;
            break;
        case 2:
            srt = 0;
            val = ACDCDIG_ADCDIGEN_ADC_GLB_EN |
                  ACDCDIG_ADCDIGEN_ADC_L2_DIS |
                  ACDCDIG_ADCDIGEN_ADC_L0R1_EN;
            break;
        default:

            return HAL_INVAL;
        }

        /* There is max 3 channel for ADC */
        MODIFY_REG(reg->ADCDIGEN,
                   ACDCDIG_ADCDIGEN_ADC_GLBEN_MASK |
                   ACDCDIG_ADCDIGEN_ADCEN_L2_MASK |
                   ACDCDIG_ADCDIGEN_ADCEN_L0R1_MASK,
                   val);

        MODIFY_REG(reg->I2S_TXCR[1], ACDCDIG_I2S_TXCR1_TCSR_MASK,
                   ACDCDIG_I2S_TXCR1_TCSR(srt));
    }

    return ret;
}

/**
 * @brief  Request ACDCDIG to use i2c by codec or MCU.
 * @param  i2cUsed: codec or MCU to use i2c.
 * @return HAL_Status
 */
HAL_Status HAL_ACDCDIG_RequestI2C(struct HAL_ACDCDIG_DEV *acdcDig,
                                  eACDCDIG_i2cUsed i2cUsed)
{
    struct GRF_REG *pGRF = (struct GRF_REG *)(GRF_BASE);
    uint32_t val = GRF_CODEC_I2C_TRANS;

    HAL_ASSERT(acdcDig);
    HAL_ASSERT((i2cUsed == CODEC_USE_I2C) ||
               ((i2cUsed == MCU_USE_I2C)));

    /* Checking the I2C whether is busy */
    if (READ_BIT((acdcDig->pReg->I2C_CON[0]), I2C_CON_START_MASK))
        return HAL_BUSY;

    if (i2cUsed == MCU_USE_I2C)
        val = GRF_MCU_I2C_TRANS;

    WRITE_REG(pGRF->SOC_CON16, val);

    return HAL_OK;
}

/**
 * @brief  Check I2C used by which module.
 * @return eACDCDIG_i2cUsed
 */
eACDCDIG_i2cUsed HAL_ACDCDIG_CheckI2C(struct HAL_ACDCDIG_DEV *acdcDig)
{
    struct GRF_REG *pGRF = (struct GRF_REG *)(GRF_BASE);
    eACDCDIG_i2cUsed i2cUsed = CODEC_USE_I2C;
    uint32_t status;

    HAL_ASSERT(acdcDig);

    status = READ_BIT(pGRF->SOC_STATUS,
                      GRF_SOC_STATUS_GRF_CODEC_I2C_TRANS_ACK_MASK);
    if (status)
        i2cUsed = MCU_USE_I2C;

    return i2cUsed;
}

/** @} */

#endif /* (ACDCDIG_VERSION_OFFSET == 0x380) */
#endif

/** @} */

/** @} */
