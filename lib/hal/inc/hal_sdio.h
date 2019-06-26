/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup SDIO
 *  @{
 */

#ifndef _HAL_SDIO_H_
#define _HAL_SDIO_H_

#include "hal_def.h"

/***************************** MACRO Definition ******************************/
/** @defgroup DEMO_Exported_Definition_Group1 Basic Definition
 *  @{
 */

/** Use internal DMA */
#define MMC_USE_DMA
/** Buffer size for internal DMA */
#define MMC_DMA_DESC_BUFF_SIZE (0x1f00)

#ifdef MMC_USE_DMA
#define MMC_INT_STATUS_DATA \
    (MMC_INT_STATUS_TRANSFER_OVER | MMC_INIT_STATUS_DATA_ERROR)
#else
#define MMC_INT_STATUS_DATA                                      \
    (MMC_INT_STATUS_TRANSFER_OVER | MMC_INIT_STATUS_DATA_ERROR | \
     MMC_INT_STATUS_TX_REQUEST | MMC_INT_STATUS_RX_REQUEST)
#endif

#define BIT(nr)        (1UL << (nr))
#define MMC_FIFO_DEPTH (16)
#define MMC_CLOCK_IN   (50000000)

#define MMC_CARD_WIDTH_1BIT (0)
#define MMC_CARD_WIDTH_4BIT (1)
#define MMC_CARD_DETECT_N   (1)

#define MMC_CMD_FLAG_RESPONSE_EXPECTED BIT(6)
#define MMC_CMD_FLAG_LONG_RESPONSE     BIT(7)
#define MMC_CMD_FLAG_CHECK_RESP_CRC    BIT(8)
#define MMC_CMD_FLAG_DATA_EXPECTED     BIT(9)
#define MMC_CMD_FLAG_WRITE_TO_CARD     BIT(10)
#define MMC_CMD_FLAG_DATA_STREAM       BIT(11)
#define MMC_CMD_FLAG_AUTO_STOP         BIT(12)
#define MMC_CMD_FLAG_WAIT_PREV_DATA    BIT(13)
#define MMC_CMD_FLAG_STOP_TRANSFER     BIT(14)
#define MMC_CMD_FLAG_SEND_INIT         BIT(15)
#define MMC_CMD_FLAG_SWITCH_VOLTAGE    BIT(28)
#define MMC_CMD_USE_HOLD_REG           BIT(29)
#define MMC_CMD_START_CMD              BIT(31)

#define MMC_CTRL_CONTROLLER_RESET BIT(0)
#define MMC_CTRL_FIFO_RESET       BIT(1)
#define MMC_CTRL_DMA_RESET        BIT(2)
#define MMC_CTRL_INT_ENABLE       BIT(4)
#define MMC_CTRL_USE_DMA          BIT(25)

#define MMC_BMOD_RESET BIT(0)

#define MMC_INT_STATUS_CARD_DETECT        BIT(0)
#define MMC_INT_STATUS_RESPONSE_ERROR     BIT(1)
#define MMC_INT_STATUS_CMD_DONE           BIT(2)
#define MMC_INT_STATUS_TRANSFER_OVER      BIT(3)
#define MMC_INT_STATUS_TX_REQUEST         BIT(4)
#define MMC_INT_STATUS_RX_REQUEST         BIT(5)
#define MMC_INT_STATUS_RESP_CRC_ERROR     BIT(6)
#define MMC_INT_STATUS_DATA_CRC_ERROR     BIT(7)
#define MMC_INT_STATUS_RESPONSE_TIMEOUT   BIT(8)
#define MMC_INT_STATUS_READ_TIMEOUT       BIT(9)
#define MMC_INT_STATUS_STARVATION_TIMEOUT BIT(10)
#define MMC_INT_STATUS_OVERRUN_UNDERRUN   BIT(11)
#define MMC_INT_STATUS_HARDWARE_LOCKED    BIT(12)
#define MMC_INT_STATUS_START_BIT_ERROR    BIT(13)
#define MMC_INT_STATUS_AUTO_CMD_DONE      BIT(14)
#define MMC_INT_STATUS_END_BIT_ERROR      BIT(15)
#define MMC_INT_STATUS_SDIO               BIT(24)
#define MMC_INT_STATUS_ALL                (~0)

#define MMC_INIT_STATUS_DATA_ERROR                                    \
    (MMC_INT_STATUS_DATA_CRC_ERROR | MMC_INT_STATUS_START_BIT_ERROR | \
     MMC_INT_STATUS_END_BIT_ERROR)

#define MMC_STATUS_DATA_BUSY BIT(9)

/***************************** Structure Definition **************************/

/* Data map for DMA descriptor 0 */
typedef union {
    struct {
        uint32_t reserved : 1;
        uint32_t disableInterruptOnCompletion : 1;
        uint32_t lastDescriptor : 1;
        uint32_t firstDescriptor : 1;
        uint32_t sencondAddressChained : 1;
        uint32_t endOfRing : 1;
        uint32_t reserved_29_6 : 24;
        uint32_t cardErrorSummary : 1;
        uint32_t own : 1;
    } bit;
    uint32_t dw;
} MMC_DMA_DESCRIPTOR0;

/* Data map for DMA descriptor 1 */
typedef union {
    struct {
        uint32_t buffer1Size : 13;
        uint32_t buffer2Size : 13;
        uint32_t reserved_26_31 : 6;
    } bit;
    uint32_t dw;
} MMC_DMA_DESCRIPTOR1;

/* Data map for DMA descriptor 2 */
typedef union {
    struct {
        uint32_t bufferAddr0 : 32;
    } bit;
    uint32_t dw;
} MMC_DMA_DESCRIPTOR2;

/* Data map for DMA descriptor 3 */
typedef union {
    struct {
        uint32_t bufferAddr1 : 32;
    } bit;
    uint32_t dw;
} MMC_DMA_DESCRIPTOR3;

/* Data map for DMA descriptor chain */
typedef struct {
    /* control and status information of descriptor */
    MMC_DMA_DESCRIPTOR0 desc0;
    /* buffer sizes */
    MMC_DMA_DESCRIPTOR1 desc1;
    /* physical address of the buffer 1 */
    MMC_DMA_DESCRIPTOR2 desc2;
    /* physical address of the buffer 2 */
    MMC_DMA_DESCRIPTOR3 desc3;
} MMC_DMA_DESCRIPTORS;

/* Private mmc host data for HAL */
struct HAL_MMC_HOST {
    uint32_t id;
    uint32_t irq;
    uint32_t base;
    uint32_t powerPin;
    uint32_t resetPin;
    uint32_t frequency;
    MMC_DMA_DESCRIPTORS *descriptors;
    void (*MMC_Reset)(struct HAL_MMC_HOST *host);
};

/** @} */

/***************************** Function Declare ******************************/

HAL_Status HAL_MMC_Init(struct HAL_MMC_HOST *host);
HAL_Status HAL_MMC_DeInit(struct HAL_MMC_HOST *host);
HAL_Status HAL_MMC_StartDma(struct HAL_MMC_HOST *host);
HAL_Status HAL_MMC_StopDma(struct HAL_MMC_HOST *host);
HAL_Status HAL_MMC_ResetFifo(struct HAL_MMC_HOST *host);
HAL_Status HAL_MMC_SetCardWidth(struct HAL_MMC_HOST *host, int32_t width);
HAL_Status HAL_MMC_UpdateClockRegister(struct HAL_MMC_HOST *host, int32_t div);
HAL_Status HAL_MMC_SendCommand(struct HAL_MMC_HOST *host, uint32_t cmd,
                               uint32_t arg, uint32_t flags);
HAL_Status HAL_MMC_WriteData(struct HAL_MMC_HOST *host, uint32_t *buf,
                             uint32_t size);
HAL_Status HAL_MMC_ReadData(struct HAL_MMC_HOST *host, uint32_t *buf,
                            uint32_t size);
HAL_Status HAL_MMC_InitDescriptors(struct HAL_MMC_HOST *host, uint32_t *buf,
                                   uint32_t size);
HAL_Status HAL_MMC_SetBlockSize(struct HAL_MMC_HOST *host, uint32_t size);
HAL_Status HAL_MMC_SetByteCount(struct HAL_MMC_HOST *host, uint32_t bytes);
HAL_Status HAL_MMC_SetInterruptMask(struct HAL_MMC_HOST *host, uint32_t mask);
HAL_Status HAL_MMC_ClearRawInterrupt(struct HAL_MMC_HOST *host,
                                     uint32_t interrupts);
uint32_t HAL_MMC_GetCardStatus(struct HAL_MMC_HOST *host);
uint32_t HAL_MMC_GetStatus(struct HAL_MMC_HOST *host);
uint32_t HAL_MMC_GetResponse(struct HAL_MMC_HOST *host, int32_t respNum);
uint32_t HAL_MMC_GetRawInterrupt(struct HAL_MMC_HOST *host);
uint32_t HAL_MMC_GetInterruptMask(struct HAL_MMC_HOST *host);
uint32_t HAL_MMC_GetUnmaskedInterrupt(struct HAL_MMC_HOST *host);

#endif

/** @} */

/** @} */
