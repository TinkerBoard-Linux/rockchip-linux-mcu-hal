/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2022 Rockchip Electronics Co., Ltd.
 */

#include "hal_base.h"

#ifdef HAL_PCIE_MODULE_ENABLED

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup PCIE
 *  @{
 */

/** @defgroup PCIE_How_To_Use How To Use
 *  @{

 The PCIE driver can be used as follows:

 The HAL PCIe drivers only support the basically functions, like:
 Using HAL_PCIE_LinkUp to check whether the link has been linked;
 Using HAL_PPCIE_DMAxxxx function to make a PCIe uDMA transmission.

 @} */

/** @defgroup PCIE_Private_Definition Private Definition
 *  @{
 */
/********************* Private MACRO Definition ******************************/
#ifdef PCIE_DEBUG
#define PCIE_DBG(...) rt_kprintf(__VA_ARGS__)
#else
#define PCIE_DBG(...)
#endif

#define PCIE_CLIENT_LTSSM_STATUS 0x300
#define SMLH_LINKUP              BIT(16)
#define RDLH_LINKUP              BIT(17)

#define PCIE_DMA_OFFSET 0x380000

#define PCIE_DMA_WR_ENB        0xc
#define PCIE_DMA_WR_CTRL_LO    0x200
#define PCIE_DMA_WR_CTRL_HI    0x204
#define PCIE_DMA_WR_XFERSIZE   0x208
#define PCIE_DMA_WR_SAR_PTR_LO 0x20c
#define PCIE_DMA_WR_SAR_PTR_HI 0x210
#define PCIE_DMA_WR_DAR_PTR_LO 0x214
#define PCIE_DMA_WR_DAR_PTR_HI 0x218
#define PCIE_DMA_WR_WEILO      0x18
#define PCIE_DMA_WR_WEIHI      0x1c
#define PCIE_DMA_WR_DOORBELL   0x10
#define PCIE_DMA_WR_INT_STATUS 0x4c
#define PCIE_DMA_WR_INT_MASK   0x54
#define PCIE_DMA_WR_INT_CLEAR  0x58

#define PCIE_DMA_RD_ENB        0x2c
#define PCIE_DMA_RD_CTRL_LO    0x300
#define PCIE_DMA_RD_CTRL_HI    0x304
#define PCIE_DMA_RD_XFERSIZE   0x308
#define PCIE_DMA_RD_SAR_PTR_LO 0x30c
#define PCIE_DMA_RD_SAR_PTR_HI 0x310
#define PCIE_DMA_RD_DAR_PTR_LO 0x314
#define PCIE_DMA_RD_DAR_PTR_HI 0x318
#define PCIE_DMA_RD_WEILO      0x38
#define PCIE_DMA_RD_WEIHI      0x3c
#define PCIE_DMA_RD_DOORBELL   0x30
#define PCIE_DMA_RD_INT_STATUS 0xa0
#define PCIE_DMA_RD_INT_MASK   0xa8
#define PCIE_DMA_RD_INT_CLEAR  0xac

#define BIT(nr) (1 << (nr))
/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

static inline void writel(uint32_t address, uint32_t value)
{
    *((volatile uint32_t *)address) = value;
}

static inline uint32_t readl(uint32_t address)
{
    return *((volatile uint32_t *)address);
}

static inline void HAL_PCIE_DbiWritel(struct HAL_PCIE_HANDLE *pcie, uint32_t reg, uint32_t val)
{
    writel(pcie->dbiBase + reg, val);
}

static inline uint32_t HAL_PCIE_DbiReadl(struct HAL_PCIE_HANDLE *pcie, uint32_t reg)
{
    return readl(pcie->dbiBase + reg);
}

static inline void HAL_PCIE_ApbWritel(struct HAL_PCIE_HANDLE *pcie, uint32_t reg, uint32_t val)
{
    writel(pcie->apbBase + reg, val);
}

static inline uint32_t HAL_PCIE_ApbReadl(struct HAL_PCIE_HANDLE *pcie, uint32_t reg)
{
    return readl(pcie->apbBase + reg);
}

static void HAL_PCIE_StartDmaWrite(struct HAL_PCIE_HANDLE *pcie, struct DMA_TABLE *cur, int ctrOffset)
{
    HAL_PCIE_DbiWritel(pcie, PCIE_DMA_OFFSET + PCIE_DMA_RD_ENB, cur->enb.asdword);
    HAL_PCIE_DbiWritel(pcie, ctrOffset + PCIE_DMA_RD_CTRL_LO, cur->ctxReg.ctrllo.asdword);
    HAL_PCIE_DbiWritel(pcie, ctrOffset + PCIE_DMA_RD_CTRL_HI, cur->ctxReg.ctrlhi.asdword);
    HAL_PCIE_DbiWritel(pcie, ctrOffset + PCIE_DMA_RD_XFERSIZE, cur->ctxReg.xfersize);
    HAL_PCIE_DbiWritel(pcie, ctrOffset + PCIE_DMA_RD_SAR_PTR_LO, cur->ctxReg.sarptrlo);
    HAL_PCIE_DbiWritel(pcie, ctrOffset + PCIE_DMA_RD_SAR_PTR_HI, cur->ctxReg.sarptrhi);
    HAL_PCIE_DbiWritel(pcie, ctrOffset + PCIE_DMA_RD_DAR_PTR_LO, cur->ctxReg.darptrlo);
    HAL_PCIE_DbiWritel(pcie, ctrOffset + PCIE_DMA_RD_DAR_PTR_HI, cur->ctxReg.darptrhi);
    HAL_PCIE_DbiWritel(pcie, PCIE_DMA_OFFSET + PCIE_DMA_RD_DOORBELL, cur->start.asdword);
}

static void HAL_PCIE_StartDmaRead(struct HAL_PCIE_HANDLE *pcie, struct DMA_TABLE *cur, int ctrOffset)
{
    HAL_PCIE_DbiWritel(pcie, PCIE_DMA_OFFSET + PCIE_DMA_WR_ENB, cur->enb.asdword);
    HAL_PCIE_DbiWritel(pcie, ctrOffset + PCIE_DMA_WR_CTRL_LO, cur->ctxReg.ctrllo.asdword);
    HAL_PCIE_DbiWritel(pcie, ctrOffset + PCIE_DMA_WR_CTRL_HI, cur->ctxReg.ctrlhi.asdword);
    HAL_PCIE_DbiWritel(pcie, ctrOffset + PCIE_DMA_WR_XFERSIZE, cur->ctxReg.xfersize);
    HAL_PCIE_DbiWritel(pcie, ctrOffset + PCIE_DMA_WR_SAR_PTR_LO, cur->ctxReg.sarptrlo);
    HAL_PCIE_DbiWritel(pcie, ctrOffset + PCIE_DMA_WR_SAR_PTR_HI, cur->ctxReg.sarptrhi);
    HAL_PCIE_DbiWritel(pcie, ctrOffset + PCIE_DMA_WR_DAR_PTR_LO, cur->ctxReg.darptrlo);
    HAL_PCIE_DbiWritel(pcie, ctrOffset + PCIE_DMA_WR_DAR_PTR_HI, cur->ctxReg.darptrhi);
    HAL_PCIE_DbiWritel(pcie, ctrOffset + PCIE_DMA_WR_WEILO, cur->weilo.asdword);
    HAL_PCIE_DbiWritel(pcie, PCIE_DMA_OFFSET + PCIE_DMA_WR_DOORBELL, cur->start.asdword);
}

/** @} */
/********************* Public Function Definition ****************************/
/** @defgroup PCIE_Exported_Functions_Group2 State and Errors Functions
 *  @{
 */

/**
 * @brief  Get DMA status, Clear DMA status when done or abort.
 * @param  pcie: PCIe host.
 * @param  chn: PCIe DMA channal to check.
 * @param  dir: PCIe DMA channal's direction.
 * @return 1: DMA done; 0: No status; -1: DMA abort.
 */
int HAL_PCIE_GetDmaStatus(struct HAL_PCIE_HANDLE *pcie, uint8_t chn, enum HAL_PCIE_DMA_DIR dir)
{
    union PCIE_DMA_INT_STATUS status;
    union PCIE_DMA_INI_CLEAR clears;
    int ret = 0;

    if (dir == DMA_TO_BUS) {
        status.asdword = HAL_PCIE_DbiReadl(pcie, PCIE_DMA_OFFSET + PCIE_DMA_WR_INT_STATUS);
        if (status.donesta & BIT(chn)) {
            clears.doneclr = 0x1 << chn;
            HAL_PCIE_DbiWritel(pcie, PCIE_DMA_OFFSET + PCIE_DMA_WR_INT_CLEAR, clears.asdword);
            ret = 1;
        }

        if (status.abortsta & BIT(chn)) {
            clears.abortclr = 0x1 << chn;
            HAL_PCIE_DbiWritel(pcie, PCIE_DMA_OFFSET + PCIE_DMA_WR_INT_CLEAR, clears.asdword);
            ret = -1;
        }
    } else {
        status.asdword = HAL_PCIE_DbiReadl(pcie, PCIE_DMA_OFFSET + PCIE_DMA_RD_INT_STATUS);

        if (status.donesta & BIT(chn)) {
            clears.doneclr = 0x1 << chn;
            HAL_PCIE_DbiWritel(pcie, PCIE_DMA_OFFSET + PCIE_DMA_RD_INT_CLEAR, clears.asdword);
            ret = 1;
        }

        if (status.abortsta & BIT(chn)) {
            clears.abortclr = 0x1 << chn;
            HAL_PCIE_DbiWritel(pcie, PCIE_DMA_OFFSET + PCIE_DMA_RD_INT_CLEAR, clears.asdword);
            ret = -1;
        }
    }

    return ret;
}

/** @} */

/** @defgroup PCIE_Exported_Functions_Group3 IO Functions

 This section provides functions allowing to IO controlling:

 *  @{
 */

/**
 * @brief  Config DMA table from user configuration to hw parameter.
 * @param  pcie: PCIe host.
 * @param  table: PCIe DMA table.
 * @return HAL_Status.
 */
HAL_Status HAL_PCIE_ConfigDma(struct HAL_PCIE_HANDLE *pcie, struct DMA_TABLE *table)
{
    table->enb.enb = 0x1;
    table->ctxReg.ctrllo.lie = 0x1;
    table->ctxReg.ctrllo.rie = 0x0;
    table->ctxReg.ctrllo.td = 0x1;
    table->ctxReg.ctrlhi.asdword = 0x0;
    table->ctxReg.xfersize = table->bufSize;
    if (table->dir == DMA_FROM_BUS) {
        table->ctxReg.sarptrlo = (uint32_t)(table->bus & 0xffffffff);
        table->ctxReg.sarptrhi = 0;
        table->ctxReg.darptrlo = (uint32_t)(table->local & 0xffffffff);
        table->ctxReg.darptrhi = 0;
    } else if (table->dir == DMA_TO_BUS) {
        table->ctxReg.sarptrlo = (uint32_t)(table->local & 0xffffffff);
        table->ctxReg.sarptrhi = 0;
        table->ctxReg.darptrlo = (uint32_t)(table->bus & 0xffffffff);
        table->ctxReg.darptrhi = 0;
    }
    table->weilo.weight0 = 0x0;
    table->start.stop = 0x0;
    table->start.chnl = table->chn;

    return HAL_OK;
}

/**
 * @brief  Start DMA transmition.
 * @param  pcie: PCIe host.
 * @param  table: PCIe DMA table.
 * @return HAL_Status.
 */
HAL_Status HAL_PCIE_StartDma(struct HAL_PCIE_HANDLE *pcie, struct DMA_TABLE *table)
{
    int dir = table->dir;
    int chn = table->chn;
    int ctrOffset = PCIE_DMA_OFFSET + chn * 0x200;

    if (dir == DMA_FROM_BUS) {
        HAL_PCIE_StartDmaWrite(pcie, table, ctrOffset);
    } else if (dir == DMA_TO_BUS) {
        HAL_PCIE_StartDmaRead(pcie, table, ctrOffset);
    }

    return HAL_OK;
}

/**
 * @brief  Check whether the link has been linked.
 * @param  pcie: PCIe host.
 * @return HAL_Check.
 */
HAL_Check HAL_PCIE_LinkUp(struct HAL_PCIE_HANDLE *pcie)
{
    uint32_t val;

    val = HAL_PCIE_ApbReadl(pcie, PCIE_CLIENT_LTSSM_STATUS);
    if ((val & (RDLH_LINKUP | SMLH_LINKUP)) == 0x30000) {
        return HAL_TRUE;
    }

    return HAL_FALSE;
}

/**
 * @brief  Get PCIe controller LTSSM.
 * @param  pcie: PCIe host.
 * @return uint32_t. LTSSM value.
 */
uint32_t HAL_PCIE_GetLTSSM(struct HAL_PCIE_HANDLE *pcie)
{
    return HAL_PCIE_ApbReadl(pcie, PCIE_CLIENT_LTSSM_STATUS);
}

/** @} */

/** @defgroup PCIE_Exported_Functions_Group4 Init and DeInit Functions
 *  @{
 */

/**
 * @brief  Initialial PCIe host.
 * @param  pcie: PCIe host.
 * @return HAL_Status
 */
HAL_Status HAL_PCIE_Init(struct HAL_PCIE_HANDLE *pcie)
{
    return HAL_OK;
}

/**
 * @brief  De-Initialial PCIe host.
 * @param  pcie: PCIe host.
 * @return HAL_Status
 */
HAL_Status HAL_PCIE_DeInit(struct HAL_PCIE_HANDLE *pcie)
{
    return HAL_OK;
}

/** @} */

/** @} */

/** @} */

#endif /* HAL_PCIE_MODULE_ENABLED */
