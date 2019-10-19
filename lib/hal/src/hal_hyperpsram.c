/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup HYPERPSRAM
 *  @{
 */

/** @defgroup HYPERPSRAM_How_To_Use How To Use
 *  @{

 The HYPERPSRAM driver can be used as follows:

  - Initialize the HYPERPSRAM (HAL_HYPERPSRAM_Init()):

 @} */

#include "hal_base.h"

#ifdef HAL_HYPERPSRAM_MODULE_ENABLED

/********************* Private MACRO Definition ******************************/
/** Memory Base Address  */
#define HYPERBUS_MBR0_BASE_ADDR_MASK (0xFF000000UL)

/** Memory Configuration Register0 */
#define HYPERBUS_MCR0_MAXEN_CONF_LOW   (0x1 << HYPERBUS_MCR0_MAXEN_SHIFT)
#define HYPERBUS_MCR0_MAXLEN_MAX       (0x1FF << HYPERBUS_MCR0_MAXLEN_SHIFT)
#define HYPERBUS_MCR0_CRT_CR_SPACE     (0x1 << HYPERBUS_MCR0_CRT_SHIFT)
#define HYPERBUS_MCR0_CRT_MEM_SPACE    (0x0 << HYPERBUS_MCR0_CRT_SHIFT)
#define HYPERBUS_MCR0_DEVTYPE_HYPERRAM (0x1 << HYPERBUS_MCR0_DEVTYPE_SHIFT)
#define HYPERBUS_MCR0_WRAPSIZE_32BYTE  (0x3 << HYPERBUS_MCR0_WRAPSIZE_SHIFT)

/** Memory Timing Register0 */
#define HYPERBUS_MTR0_LTCY_6_CLK (0x1)

#define PSRAM_MCR_TIMER(rcshi, wcshi, rcss, WCSS, RCSH, WCSH, LTCY) ((rcshi << HYPERBUS_MTR0_RCSHI_SHIFT) | \
    (wcshi << HYPERBUS_MTR0_WCSHI_SHIFT) |                                                                  \
    (rcss << HYPERBUS_MTR0_RCSS_SHIFT) |                                                                    \
    (WCSS << HYPERBUS_MTR0_WCSS_SHIFT) |                                                                    \
    (RCSH << HYPERBUS_MTR0_RCSH_SHIFT) |                                                                    \
    (WCSH << HYPERBUS_MTR0_WCSH_SHIFT) |                                                                    \
    (LTCY << HYPERBUS_MTR0_LTCY_SHIFT))
/** Loopback Register  */
#define HYPERBUS_LBR_DIS_LOOPBACK (0x0 << HYPERBUS_LBR_LOOPBACK_SHIFT)

/** Special Control Register  */
#define HYPERBUS_SPCSR_IS_W955D8  (0x3 << HYPERBUS_SPCSR_W955D8_CON_SHIFT)
#define HYPERBUS_SPCSR_NOT_W955D8 (0x0 << HYPERBUS_SPCSR_W955D8_CON_SHIFT)

/* device id bit mask */
#define HYPERBUS_DEV_ID_MASK (0xf)

/* TCSM */
#define HYPERBUS_DEV_TCSM_4U (4000)
#define HYPERBUS_DEV_TCSM_1U (1000)

/* Hyper psram register */
#define HYPERBUS_IR0_ADDR_OFFSET       (0x00)
#define HYPERBUS_IR1_ADDR_OFFSET       (0x01)
#define HYPERBUS_CR0_ADDR_OFFSET       (0x1000)
#define HYPERBUS_CR1_ADDR_OFFSET       (0x2000)
#define CR0_INITIAL_LATENCY_SHIFT      (0x4)
#define CR0_INITIAL_LATENCY_MASK       (0xf << CR0_INITIAL_LATENCY_SHIFT)
#define CR0_INITIAL_LATENCY_5_CLK      (0x0 << CR0_INITIAL_LATENCY_SHIFT)
#define CR0_INITIAL_LATENCY_6_CLK      (0x1 << CR0_INITIAL_LATENCY_SHIFT)
#define CR0_INITIAL_LATENCY_7_CLK      (0x2 << CR0_INITIAL_LATENCY_SHIFT)
#define CR0_FIXED_LATENCY_ENABLE_SHIFT (0x3)
#define CR0_FIXED_LATENCY_ENABLE_MASK  (0x1 << CR0_FIXED_LATENCY_ENABLE_SHIFT)
#define CR0_FIXED_LATENCY_ENABLE_VARIABLE_LATENCY \
    (0x0 << CR0_FIXED_LATENCY_ENABLE_SHIFT)
#define CR0_FIXED_LATENCY_ENABLE_FIXED_LATENCY \
    (0x1 << CR0_FIXED_LATENCY_ENABLE_SHIFT)

/********************* Private Structure Definition **************************/
/** HYPERBUS DEVICE Psram ID definition */
enum {
    S27KX0641 = 0x1,
    W955D8MKY = 0xf,
    W956X8MKY = 0x6,
};

enum HYPER_MTR_TIMING {
    MCR_TIMING_1_1_1_1_2_1_1 = PSRAM_MCR_TIMER(1, 1, 1, 1, 2, 1, 1),
    MCR_TIMING_1_1_1_1_2_1_2 = PSRAM_MCR_TIMER(1, 1, 1, 1, 2, 1, 2),
};

struct HYPER_PSTRAM {
    uint32_t id;
    uint32_t mtrTiming;
    uint32_t spc;
};

/** HYPWEBUS psram chip features */
static const struct HYPER_PSTRAM psramInfo[] =
{
    /**
     * W956X8MKY must init first, or it will report a ahb bus error
     * because of MTR error.
     */
    { W956X8MKY, MCR_TIMING_1_1_1_1_2_1_2, HYPERBUS_SPCSR_NOT_W955D8 },
    { S27KX0641, MCR_TIMING_1_1_1_1_2_1_1, HYPERBUS_SPCSR_NOT_W955D8 },
    { W955D8MKY, MCR_TIMING_1_1_1_1_2_1_1, HYPERBUS_SPCSR_IS_W955D8 },
};
/********************* Private Function Definition ***************************/

/**
 * @brief  Hyperbus psram read psram id.
 * @param  pReg: Choose HYPERBUS.
 * @param  psramBase: Choose psram map base addr.
 * @return PsramID: psram device id
 */
static uint32_t HYPERPSRAM_GetDevId(struct HYPERBUS_REG *pReg, uint32_t psramBase)
{
    uint16_t psramId;

    /* config to CR space */
    MODIFY_REG(pReg->MCR[0], HYPERBUS_MCR0_CRT_MASK,
               HYPERBUS_MCR0_CRT_CR_SPACE);
    psramId = (*(volatile uint16_t *)psramBase);
    /* config to memory space */
    MODIFY_REG(pReg->MCR[0], HYPERBUS_MCR0_CRT_MASK,
               HYPERBUS_MCR0_CRT_MEM_SPACE);

    return (uint32_t)(psramId & HYPERBUS_DEV_ID_MASK);
}

/**
 * @brief  Hyperbus psram modify transaction maximum length/tcsm.
 * @param  pReg: Choose HYPERBUS.
 * @param  psramFreq: HYPERPSRAM io clk frequency.The unit is Hz.
 * @return HAL_Status.
 */
static HAL_Status HYPERPSRAM_ModifyTiming(struct HYPERBUS_REG *pReg, uint32_t psramFreq)
{
    uint32_t tmp;
    uint32_t tcmd, tal;

    psramFreq /= MHZ;
    if (pReg->MCR[0] & HYPERBUS_MCR0_MAXEN_CONF_LOW) {
        tmp = pReg->MTR[0] & HYPERBUS_MTR0_LTCY_MASK;
        if (tmp < 3)
            tal = 5 + tmp;
        else if (tmp == 0xe)
            tal = 3;
        else if (tmp == 0xf)
            tal = 4;
        else
            tal = 7;
        tcmd = 3;

        tmp = (HYPERBUS_DEV_TCSM_1U * psramFreq + 999) / 1000;
        tmp = tmp - tcmd - 2 * tal - 4;

        if (tmp > 511)
            tmp = 511;
        MODIFY_REG(pReg->MCR[0], HYPERBUS_MCR0_MAXLEN_MASK,
                   tmp << HYPERBUS_MCR0_MAXLEN_SHIFT);
    }

    return HAL_OK;
}

static HAL_Status HYPERPSRAM_ModifyCR0(struct HYPERBUS_REG *pReg,
                                       uint32_t psramBase)
{
    uint16_t cr0;

    /* config to CR space */
    MODIFY_REG(pReg->MCR[0], HYPERBUS_MCR0_CRT_MASK,
               HYPERBUS_MCR0_CRT_CR_SPACE);
    cr0 = (*(volatile uint16_t *)(psramBase + HYPERBUS_CR0_ADDR_OFFSET));
    cr0 = (cr0 & (~CR0_INITIAL_LATENCY_MASK)) | CR0_INITIAL_LATENCY_6_CLK;
    cr0 = (cr0 & (~CR0_FIXED_LATENCY_ENABLE_MASK)) |
          CR0_FIXED_LATENCY_ENABLE_VARIABLE_LATENCY;
    (*(volatile uint16_t *)(psramBase + HYPERBUS_CR0_ADDR_OFFSET)) = cr0;
    /* config to memory space */
    MODIFY_REG(pReg->MCR[0], HYPERBUS_MCR0_CRT_MASK,
               HYPERBUS_MCR0_CRT_MEM_SPACE);
    MODIFY_REG(pReg->MTR[0], HYPERBUS_MTR0_LTCY_MASK,
               HYPERBUS_MTR0_LTCY_6_CLK << HYPERBUS_MTR0_LTCY_SHIFT);

    return HAL_OK;
}

/**
 * @brief  Hyperbus init config.
 * @param  pReg: Choose HYPERBUS.
 * @param  psramBase: Choose psram map base addr.
 * @return HAL_Status.
 */
static HAL_Status HYPERBUS_Init(struct HYPERBUS_REG *pReg, uint32_t psramBase)
{
    WRITE_REG(pReg->MBR[0], psramBase & HYPERBUS_MBR0_BASE_ADDR_MASK);
    WRITE_REG(pReg->RWDSIC, HYPERBUS_RWDSIC_RXEND_CTRL_MASK |
              HYPERBUS_RWDSIC_RXSTART_CTRL_MASK);
    WRITE_REG(pReg->LBR, HYPERBUS_LBR_DIS_LOOPBACK);
    WRITE_REG(pReg->MCR[0], HYPERBUS_MCR0_MAXEN_CONF_LOW |
              HYPERBUS_MCR0_MAXLEN_MAX | HYPERBUS_MCR0_CRT_MEM_SPACE |
              HYPERBUS_MCR0_DEVTYPE_HYPERRAM |
              HYPERBUS_MCR0_WRAPSIZE_32BYTE);

    return HAL_OK;
}

/**
 * @brief  Hyperbus psram check id.
 * @param  pReg: Choose HYPERBUS
 * @param  PsramID: Choose psram device id.
 * @param  psramBase: Choose psram map base addr.
 * @return HAL_Status.
 */
static HAL_Status HYPERPSRAM_CheckId(struct HYPERBUS_REG *pReg,
                                     uint32_t psramId, uint32_t psramBase)
{
    if (HYPERPSRAM_GetDevId(pReg, psramBase) == psramId)
        return HAL_OK;
    else
        return HAL_ERROR;
}

/**
 * @brief  Hyperbus psram init.
 * @param  pReg: Choose HYPERBUS.
 * @param  psramBase: Choose psram map base addr.
 * @return HAL_Status.
 */
static HAL_Status HYPERPSRAM_Init(struct HYPERBUS_REG *pReg, uint32_t psramBase)
{
    uint32_t i;

    for (i = 0; i < HAL_ARRAY_SIZE(psramInfo); i++) {
        WRITE_REG(pReg->SPCSR, psramInfo[i].spc);
        WRITE_REG(pReg->MTR[0], psramInfo[i].mtrTiming);
        if (HYPERPSRAM_CheckId(pReg, psramInfo[i].id, psramBase) == HAL_OK)
            break;
    }

    if (i == HAL_ARRAY_SIZE(psramInfo)) {
        HAL_DBG("HYPERPSRAM: unknow psram device\n");

        return HAL_ERROR;
    } else {
        return HAL_OK;
    }
}

/********************* Public Function Definition ****************************/

/** @defgroup DEMO_Exported_Functions_Group4 Init and DeInit Functions

 This section provides functions allowing to init and deinit the module:

 *  @{
 */

/**
 * @brief  Hyperbus init.
 * @param  pReg: Choose HYPERBUS.
 * @param  psramBase: Choose psram map base addr.
 * @return HAL_Status.
 */
HAL_Status HAL_HYPERPSRAM_Init(struct HYPERBUS_REG *pReg, uint32_t psramBase)
{
    HAL_ASSERT(IS_HYPERBUS_INSTANCE(pReg));

    HYPERBUS_Init(pReg, psramBase);

    if (HYPERPSRAM_Init(pReg, psramBase) == HAL_OK) {
        HYPERPSRAM_ModifyTiming(pReg, PLL_INPUT_OSC_RATE / 2);
        HYPERPSRAM_ModifyCR0(pReg, psramBase);
    } else {
        return HAL_ERROR;
    }

    return HAL_OK;
}

/**
 * @brief  Hyperbus reinit.
 * @param  pReg: Choose HYPERBUS.
 * @return HAL_Status
 */
HAL_Status HAL_HYPERPSRAM_DeInit(struct HYPERBUS_REG *pReg)
{
    /* ...to do */
    return HAL_OK;
}

/**
 * @brief  Hyperbus psram modify transaction maximum length/tcsm.
 * @param  pReg: Choose HYPERBUS.
 * @param  hyperFreq: HYPERBUS frequency.The unit is Hz.
 * @return HAL_Status.
 */
HAL_Status HAL_HYPERPSRAM_ModifyTiming(struct HYPERBUS_REG *pReg, uint32_t hyperFreq)
{
    HAL_ASSERT(IS_HYPERBUS_INSTANCE(pReg));

    return HYPERPSRAM_ModifyTiming(pReg, hyperFreq / 2);
}

/** @} */

#endif

/** @} */

/** @} */
