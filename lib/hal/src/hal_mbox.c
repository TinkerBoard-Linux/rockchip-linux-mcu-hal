/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

#include "hal_base.h"

#ifdef HAL_MBOX_MODULE_ENABLED

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

/** @addtogroup Mailbox
 *  @{
 */

/** @defgroup How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The Mbox driver can be used as follows:

 (#) Invoke HAL_MBOX_Init in driver wrapper file to initialize mailbox.
 (#) Invoke HAL_MBOX_RegisterClient in protocol layer to register mailbox
     client (user).
 (#) Protocol layer call HAL_MBOX_SendMsg to send mailbox message and receive
     message via interrupt handler.
 (#) Using destroy related function to finish resource release work.
 (#) Mailbox driver is just responsible for passing simple command data, and
     the detail data is the user's responsibility.
 (#) More details refer to APIs' descriptions as below.

 @endverbatim
 @} */

/********************* Private MACRO Definition ******************************/

#define MBOX_ID(n) ((struct MBOX_REG *)(MBOX_GROUP[n]))

/********************* Private Structure Definition **************************/

const uint32_t MBOX_GROUP[MBOX_ID_MAX] = {
    MBOX_BASE,
#if MBOX_GROUP_CNT == 2
    MBOX1_BASE,
#endif
};

struct MBOX_CHAN
{
    const struct MBOX_CLIENT *client;
};

struct MBOX_DEV
{
    struct MBOX_REG *pReg;
    struct MBOX_CHAN chans[MBOX_CH_MAX];
};

/********************* Private Variable Definition ***************************/

static struct MBOX_DEV g_MBoxDevs[MBOX_ID_MAX];

/********************* Private Function Definition ***************************/

static uint32_t MBOX_A2BIntStGet(struct MBOX_REG *reg)
{
    return reg->A2B_STATUS & 0x0f;
}

static void MBOX_ChanEnable(struct MBOX_REG *reg, eMBOX_CH chan)
{
    reg->B2A_STATUS = 1UL << chan;
    reg->B2A_INTEN = 1UL << chan;
}

static void MBOX_ChanDisable(struct MBOX_REG *reg, eMBOX_CH chan)
{
    reg->B2A_INTEN = 0UL << chan;
    reg->B2A_STATUS = 1UL << chan;
}

static uint32_t MBOX_ChanIntStGet(struct MBOX_REG *reg, eMBOX_CH chan)
{
    return reg->B2A_STATUS & (1UL << chan);
}

static void MBOX_ChanIntStClear(struct MBOX_REG *reg, eMBOX_CH chan)
{
    reg->B2A_STATUS = 1UL << chan;
}

static void MBOX_ChanSendMsg(struct MBOX_REG *reg, eMBOX_CH chan,
                             const struct MBOX_CMD_DAT *msg)
{
    reg->B2A[chan].cmd = msg->cmd;
    reg->B2A[chan].data = msg->data;
}

static void MBOX_ChanRecvMsg(struct MBOX_CMD_DAT *msg, struct MBOX_REG *reg,
                             eMBOX_CH chan)
{
    msg->cmd = reg->A2B[chan].cmd;
    msg->data = reg->A2B[chan].data;
}

/********************* Public Function Definition ****************************/

/** @defgroup MBox_Exported_Functions_Group1 Suspend and Resume Functions
 @verbatim

===============================================================================
            #### Suspend and Resume functions ####
===============================================================================
This section provides functions allowing to suspend and resume the module:

@endverbatim
*  @{
*/

HAL_Status HAL_MBOX_Suspend(eMBOX_ID mbox, eMBOX_CH chan)
{
    return HAL_OK;
}

HAL_Status HAL_MBOX_Resume(eMBOX_ID mbox, eMBOX_CH chan)
{
    return HAL_OK;
}

/** @} */

/********************* Public Function Definition ****************************/

/** @defgroup MBox_Exported_Functions_Group2 Send and Receive Functions
 @verbatim

===============================================================================
            #### Send and Receive message functions ####
===============================================================================
This section provides functions allowing to send and receive mailbox message:

@endverbatim
*  @{
*/

/**
 * @brief  Mailbox send message API
 * @param  mbox: mailbox id
 * @param  chan: mailbox channel id
 * @param  msg: the message to send
 * @return HAL_Status
 */
HAL_Status HAL_MBOX_SendMsg(eMBOX_ID mbox, eMBOX_CH chan,
                            const struct MBOX_CMD_DAT *msg)
{
    struct MBOX_DEV *pMBox;
    uint32_t status;

    if (!msg || mbox >= MBOX_ID_MAX || chan >= MBOX_CH_MAX)
        return HAL_INVAL;

    pMBox = &g_MBoxDevs[mbox];
    status = MBOX_A2BIntStGet(pMBox->pReg);

    if (!(status & (1UL << chan))) {
        MBOX_ChanSendMsg(pMBox->pReg, chan, msg);
        return HAL_OK;
    }

    /* Previous message has not been consumed. */
    return HAL_BUSY;
}

/**
 * @brief  Mailbox receive message API
 * @param  mbox: mailbox id
 * @param  chan: mailbox channel id
 * @return HAL_Status
 */
HAL_Status HAL_MBOX_RecvMsg(eMBOX_ID mbox, eMBOX_CH chan)
{
    struct MBOX_DEV *pMBox;
    const struct MBOX_CLIENT *cl;
    struct MBOX_CMD_DAT msg = { 0, 0 };

    if (mbox >= MBOX_ID_MAX || chan >= MBOX_CH_MAX)
        return HAL_INVAL;

    pMBox = &g_MBoxDevs[mbox];
    cl = pMBox->chans[chan].client;

    MBOX_ChanRecvMsg(&msg, pMBox->pReg, chan);

    if (cl->RXCallback)
        cl->RXCallback(&msg, cl->callbackData);

    return HAL_OK;
}

/**
 * @brief  Get mailbox channel interrupt status
 * @param  st: status that want to get back
 * @param  mbox: mailbox id
 * @param  chan: mailbox channel id
 * @return HAL_Status
 */
HAL_Status HAL_MBOX_GetStatus(uint32_t *st, eMBOX_ID mbox, eMBOX_CH chan)
{
    struct MBOX_DEV *pMBox;

    if (mbox >= MBOX_ID_MAX || chan >= MBOX_CH_MAX)
        return HAL_INVAL;

    pMBox = &g_MBoxDevs[mbox];
    *st = MBOX_ChanIntStGet(pMBox->pReg, chan);

    return HAL_OK;
}

/** @} */

/** @defgroup MBox_Exported_Functions_Group3 Interrupt Handle Functions
 @verbatim

 ===============================================================================
             #### Interrupt Handle functions ####
 ===============================================================================
 This section provides functions allowing to handle interrupt request:

 @endverbatim
 *  @{
 */

/**
 * @brief  Common mailbox interrupt handler
 * @param  irq: mailbox irq number
 * @param  mbox: mailbox id
 * @return result of the interrupt handling
 * Common interrupt handler is always wrapped by the driver.
 */
HAL_Status HAL_MBOX_IrqHandler(int irq, eMBOX_ID mbox)
{
    struct MBOX_DEV *pMBox;
    eMBOX_CH chan;
    int ret;

    if (irq <= 0 || mbox >= MBOX_ID_MAX)
        return HAL_INVAL;

    pMBox = &g_MBoxDevs[mbox];

    for (chan = 0; chan < MBOX_CH_MAX; chan++) {
        if (!MBOX_ChanIntStGet(pMBox->pReg, chan))
            continue;

        ret = HAL_MBOX_RecvMsg(mbox, chan);
        MBOX_ChanIntStClear(pMBox->pReg, chan);

        if (ret)
            break;
    }

    return ret;
}

/** @} */

/** @defgroup MBox_Exported_Functions_Group4 Init and Deinit Functions
 @verbatim

 ===============================================================================
             #### Init and deinit functions ####
 ===============================================================================
 This section provides functions allowing to init and deinit the module:

 @endverbatim
 *  @{
 */

/**
 * @brief  Mailbox init
 * @param  mbox: mailbox id
 * @return HAL_Status
 */
HAL_Status HAL_MBOX_Init(eMBOX_ID mbox)
{
    struct MBOX_DEV *pMBox;
    eMBOX_ID chan;

    if (mbox >= MBOX_ID_MAX)
        return HAL_INVAL;

    pMBox = &g_MBoxDevs[mbox];
    pMBox->pReg = MBOX_ID(mbox);

    for (chan = 0; chan < MBOX_CH_MAX; chan++)
        pMBox->chans[chan].client = NULL;

    return HAL_OK;
}

/**
 * @brief  Mailbox deinit
 * @param  mbox: mailbox id
 * @return HAL_Status
 */
HAL_Status HAL_MBOX_DeInit(eMBOX_ID mbox)
{
    struct MBOX_DEV *pMBox;
    eMBOX_ID chan;

    if (mbox >= MBOX_ID_MAX)
        return HAL_INVAL;

    pMBox = &g_MBoxDevs[mbox];
    pMBox->pReg = NULL;

    for (chan = 0; chan < MBOX_CHAN_CNT; chan++)
        pMBox->chans[chan].client = NULL;

    return HAL_OK;
}

/** @} */

/** @defgroup MBox_Exported_Functions_Group5 Register and Unregister Functions
 @verbatim

 ===============================================================================
             #### Register and Unregister mailbox client functions ####
 ===============================================================================
 This section provides functions allowing to register/unregister mbox client:

 @endverbatim
 *  @{
 */

/**
 * @brief  Register mailbox client to specified mailbox and channel
 * @param  mbox: mailbox id
 * @param  chan: chan id
 * @param  cl: mailbox client wanna register
 * @return HAL_Status
 */
HAL_Status HAL_MBOX_RegisterClient(eMBOX_ID mbox, eMBOX_CH chan,
                                   const struct MBOX_CLIENT *cl)
{
    struct MBOX_DEV *pMBox;

    if (!cl || mbox >= MBOX_ID_MAX || chan >= MBOX_CH_MAX)
        return HAL_INVAL;

    pMBox = &g_MBoxDevs[mbox];

    if (!pMBox->chans[chan].client) {
        pMBox->chans[chan].client = cl;
        MBOX_ChanEnable(pMBox->pReg, chan);
        return HAL_OK;
    }

    return HAL_BUSY;
}

/**
 * @brief  Unregister mailbox client from specified mailbox and channel
 * @param  mbox: mailbox id
 * @param  chan: chan id
 * @param  cl: mailbox client wanna register
 * @return HAL_Status
 */
HAL_Status HAL_MBOX_UnregisterClient(eMBOX_ID mbox, eMBOX_CH chan,
                                     const struct MBOX_CLIENT *cl)
{
    struct MBOX_DEV *pMBox;

    if (!cl || mbox >= MBOX_ID_MAX || chan >= MBOX_CH_MAX)
        return HAL_INVAL;

    pMBox = &g_MBoxDevs[mbox];

    if (cl == pMBox->chans[chan].client) {
        MBOX_ChanDisable(pMBox->pReg, chan);
        pMBox->chans[chan].client = NULL;
        return HAL_OK;
    }

    return HAL_ERROR;
}

/** @} */

#endif

/** @} */

/** @} */
