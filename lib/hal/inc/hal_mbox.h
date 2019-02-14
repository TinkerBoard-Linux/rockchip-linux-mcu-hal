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

HAL_Status HAL_MBOX_IrqHandler(int irq, struct MBOX_REG *base);
HAL_Status HAL_MBOX_Init(struct MBOX_REG *base, uint8_t isA2B);
HAL_Status HAL_MBOX_DeInit(struct MBOX_REG *base);
HAL_Status HAL_MBOX_RecvMsg(struct MBOX_REG *base, eMBOX_CH chan);
HAL_Status HAL_MBOX_SendMsg(struct MBOX_REG *base, eMBOX_CH chan,
                            const struct MBOX_CMD_DAT *msg);
HAL_Status HAL_MBOX_RegisterClient(struct MBOX_REG *base, eMBOX_CH chan,
                                   const struct MBOX_CLIENT *cl);
HAL_Status HAL_MBOX_UnregisterClient(struct MBOX_REG *base, eMBOX_CH chan,
                                     const struct MBOX_CLIENT *cl);
HAL_Status HAL_MBOX_Suspend(struct MBOX_REG *base);
HAL_Status HAL_MBOX_Resume(struct MBOX_REG *base);

#endif

/** @} */

/** @} */
