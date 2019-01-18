/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

/** @addtogroup Mailbox
 *  @{
 */

#ifndef _HAL_MBOX_H_
#define _HAL_MBOX_H_

#include "hal_def.h"

/** @defgroup MBox_Exported_Definition_Group1 Basic Definition
 *  @{
 */

/***************************** MACRO Definition ******************************/

typedef enum
{
    MBOX_ID_0 = 0,
#if MBOX_GROUP_CNT == 2
    MBOX_ID_1,
#endif
    MBOX_ID_MAX = MBOX_GROUP_CNT
} eMBOX_ID;

typedef enum
{
    MBOX_CH_0 = 0,
    MBOX_CH_1,
    MBOX_CH_2,
    MBOX_CH_3,
    MBOX_CH_MAX = MBOX_CHAN_CNT
} eMBOX_CH;

/***************************** Structure Definition **************************/

struct MBOX_CLIENT
{
    char name[16];
    void (*RXCallback)(struct MBOX_CMD_DAT *msg, void *cbData);
    void *callbackData;
};

/** @} */

/***************************** Function Declare ******************************/

HAL_Status HAL_MBOX_IrqHandler(int irq, eMBOX_ID mbox);
HAL_Status HAL_MBOX_Init(eMBOX_ID mbox, uint8_t isA2B);
HAL_Status HAL_MBOX_DeInit(eMBOX_ID mbox);
HAL_Status HAL_MBOX_GetStatus(uint32_t *st, eMBOX_ID mbox, eMBOX_CH chan);
HAL_Status HAL_MBOX_RecvMsg(eMBOX_ID mbox, eMBOX_CH chan);
HAL_Status HAL_MBOX_SendMsg(eMBOX_ID mbox, eMBOX_CH chan,
                            const struct MBOX_CMD_DAT *msg);
HAL_Status HAL_MBOX_RegisterClient(eMBOX_ID mbox, eMBOX_CH chan,
                                   const struct MBOX_CLIENT *cl);
HAL_Status HAL_MBOX_UnregisterClient(eMBOX_ID mbox, eMBOX_CH chan,
                                     const struct MBOX_CLIENT *cl);
#endif

/** @} */

/** @} */
