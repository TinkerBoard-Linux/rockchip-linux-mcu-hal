/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2021 Rockchip Electronics Co., Ltd.
 */

#include "hal_base.h"
#include "hal_bsp.h"

#ifdef HAL_DDR_ECC_MODULE_ENABLED

#include "hal_ddr_ecc.h"

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup DDR_ECC
 *  @{
 */

/** @defgroup DDR_ECC_How_To_Use How To Use
 *  @{

 The DDR_ECC driver can be used as follows:

  - Initialize the DDR ECC info (HAL_DDR_ECC_Init()).
  - Get the numbers of DDR ECC errors (HAL_DDR_ECC_GetInfo()).
 @} */
/** @defgroup DDR_ECC_Private_Definition Private Definition
 *  @{
 */
/********************* Private MACRO Definition ******************************/

/********************* Private Structure Definition **************************/
/**
 * @brief  DDR_ECC error log information definition
 */
struct ECC_ERR_INFO {
    uint32_t errCnt; /**< error count */
    uint32_t rank; /**< Rank number */
    uint32_t row; /**< Row number */
    uint32_t chipID; /**< Chip id number */
    uint32_t bankGroup; /**< Bank Group number */
    uint32_t bank; /**< Bank number */
    uint32_t col; /**< Column number */
    uint32_t bitPos; /**< Bit position */
};

/**
 * @brief  DDR_ECC share memory for ECC status
 */
struct DDR_ECC_SHARE_MEM {
    struct ECC_ERR_INFO ceInfo; /**< Correctable error log information */
    struct ECC_ERR_INFO ueInfo; /**< Uncorrectable error log information */
};

static struct DDR_ECC_SHARE_MEM *pShareMem;
/********************* Private Function Definition ***************************/
static void DDR_ECC_GetCEInfo(struct DDR_ECC_SHARE_MEM *p,
                              struct DDR_ECC_CNT *priv)
{
    if (!p->ceInfo.errCnt) {
        return;
    }
    HAL_DBG_WRN("DDR ECC error: %s, %d errors, the last is in DDR cs %d, "
                "Row 0x%x, ChipID 0x%x, BankGroup 0x%x, Bank 0x%x, "
                "Col 0x%x, Bit position 0x%x\n",
                "CE", p->ceInfo.errCnt, p->ceInfo.rank, p->ceInfo.row,
                p->ceInfo.chipID, p->ceInfo.bankGroup, p->ceInfo.bank,
                p->ceInfo.col, p->ceInfo.bitPos);
    priv->ceCnt += p->ceInfo.errCnt;
}

static void DDR_ECC_GetUEInfo(struct DDR_ECC_SHARE_MEM *p,
                              struct DDR_ECC_CNT *priv)
{
    if (!p->ueInfo.errCnt) {
        return;
    }
    HAL_DBG_ERR("DDR ECC error: %s, %d errors, the last is in DDR cs %d, "
                "Row 0x%x, ChipID 0x%x, bankGroup 0x%x, Bank 0x%x, "
                "Col 0x%x\n",
                "UE", p->ueInfo.errCnt, p->ueInfo.rank, p->ueInfo.row,
                p->ueInfo.chipID, p->ueInfo.bankGroup, p->ueInfo.bank,
                p->ueInfo.col);
    priv->ueCnt += p->ueInfo.errCnt;
}

static HAL_Status DDR_ECC_SMCInitMem(void)
{
    struct SMCCC_PARAM smcArgs = { 0 };

    /* smc request share mem */
    smcArgs.a0 = SIP_SHARE_MEM;
    smcArgs.a1 = 1;
    smcArgs.a2 = SIP_SHARE_PAGE_TYPE_DDRECC;
    HAL_SMCCC_Call(&smcArgs);
    if (smcArgs.a0 != 0) {
        HAL_DBG_ERR("no ATF memory for init, ret 0x%lx\n", smcArgs.a0);

        return HAL_ERROR;
    }

    pShareMem = (struct DDR_ECC_SHARE_MEM *)smcArgs.a1;

    return HAL_OK;
}

static HAL_Status DDR_ECC_SMCGetInfo(void)
{
    struct SMCCC_PARAM smcArgs = { 0 };

    smcArgs.a0 = SIP_DRAM_CONFIG;
    smcArgs.a1 = SIP_SHARE_PAGE_TYPE_DDRECC;
    smcArgs.a3 = ROCKCHIP_SIP_CONFIG_DRAM_ECC;
    HAL_SMCCC_Call(&smcArgs);
    if (smcArgs.a0) {
        HAL_DBG_ERR("rockchip_sip_config_dram_ecc not support: 0x%lx\n",
                    smcArgs.a0);

        return HAL_ERROR;
    }
    if (smcArgs.a1) {
        HAL_DBG_ERR("DDR ECC Not support!\n");

        return HAL_ERROR;
    }

    return HAL_OK;
}

static HAL_Status DDR_ECC_SMCInit(void)
{
    if (DDR_ECC_SMCInitMem()) {
        return HAL_ERROR;
    }
    if (DDR_ECC_SMCGetInfo()) {
        return HAL_ERROR;
    }

    return HAL_OK;
}

/** @} */
/********************* Public Function Definition ****************************/

/** @defgroup DDR_ECC_Exported_Functions_Group4 Init and DeInit Functions

 This section provides functions allowing to init and deinit the module:

 *  @{
 */

/**
 * @brief  DDR ECC init info.
 * @param  p:  Count the numbers of DDR ECC errors.
 * @return HAL_Status.
 */
HAL_Status HAL_DDR_ECC_Init(struct DDR_ECC_CNT *p)
{
    HAL_ASSERT(p != NULL);

    memset(p, 0, sizeof(struct DDR_ECC_CNT));
    if (DDR_ECC_SMCInit()) {
        return HAL_ERROR;
    }

    DDR_ECC_GetCEInfo(pShareMem, p);
    DDR_ECC_GetUEInfo(pShareMem, p);

    return HAL_OK;
}

/**
 * @brief  Get DDR ECC info.
 * @param  p:  Count the numbers of DDR ECC errors.
 * @return HAL_Status.
 */
HAL_Status HAL_DDR_ECC_GetInfo(struct DDR_ECC_CNT *p)
{
    HAL_ASSERT(p != NULL);

    if (DDR_ECC_SMCGetInfo()) {
        return HAL_ERROR;
    }

    DDR_ECC_GetCEInfo(pShareMem, p);
    DDR_ECC_GetUEInfo(pShareMem, p);

    return HAL_OK;
}

/** @} */

/** @} */

/** @} */

#endif /* HAL_DDR_ECC_MODULE_ENABLED */
