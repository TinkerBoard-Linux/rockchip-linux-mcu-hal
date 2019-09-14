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
 * @return HAL_Status.
 */
static HAL_Status HYPERPSRAM_ModifyTcsm(struct HYPERBUS_REG *pReg)
{
    uint32_t psramFreq, tmp;

    if (pReg->MCR[0] & HYPERBUS_MCR0_MAXEN_CONF_LOW) {
        psramFreq = HAL_CRU_ClkGetFreq(CLK_XIP_HYPERX8) / MHZ;
        tmp = (HYPERBUS_DEV_TCSM_4U * psramFreq + 999) / 1000 - 1;
        MODIFY_REG(pReg->MCR[0], HYPERBUS_MCR0_MAXLEN_MASK,
                   tmp << HYPERBUS_MCR0_MAXLEN_SHIFT);
    }

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
    WRITE_REG(pReg->RWDSIC, HYPERBUS_RWSDIC_RXEND_CTRL_MASK |
              HYPERBUS_RWSDIC_RXSTART_CTRL_MASK);
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

    if (HYPERPSRAM_Init(pReg, psramBase) == HAL_OK)
        HYPERPSRAM_ModifyTcsm(pReg);
    else
        return HAL_ERROR;

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
/** @} */

#endif

/** @} */

/** @} */
