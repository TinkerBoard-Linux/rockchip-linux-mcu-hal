/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup CIF
 *  @{
 */

/** @defgroup CIF_How_To_Use How To Use
 *  @{

 The CIF hal driver interfaces can be called directly by os.

 @} */

#include "hal_base.h"

#if defined(HAL_CIF_MODULE_ENABLED)

/********************* Private MACRO Definition ******************************/
#define CIF_DVP_WATER_LINE_HURRY_VAL_MAX (0x3)

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

/********************* Public Function Definition ****************************/

/** @defgroup CIF_Exported_Functions_Group2 State and Errors Functions
 @verbatim

 This section provides functions allowing to get state of the module:

 @endverbatim
 *  @{
 */

/**
 * @brief  Get the actived irq of cif in running.
 * @param  pReg: CIF reg base.
 * @return the value of interrupt status register.
 * Get CIF irq has happened.
 */
uint32_t HAL_CIF_GetIrqStatus(struct CIF_REG *pReg)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    return READ_REG(pReg->DVP_INTSTAT);
}

/**
* @brief  Get cif virtual line width.
* @param  pReg: CIF reg base.
* @return the width in vir_line_width register.
* Get cif virtual line width.
*/
uint32_t HAL_CIF_GetVirtualLineWidth(struct CIF_REG *pReg)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    return READ_REG(pReg->DVP_VIR_LINE_WIDTH);
}

/**
* @brief  Get cif block line num.
* @param  pReg: CIF reg base.
* @return block line num.
* Get cif block line num.
*/
uint32_t HAL_CIF_GetBlockLineNum(struct CIF_REG *pReg)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    return READ_REG(pReg->DVP_BLOCK_LINE_NUM);
}

/**
* @brief  Get cif block status.
* @param  pReg: CIF reg base.
* @return block status.
* Get cif block status.
*/
uint32_t HAL_CIF_GetBlockStatus(struct CIF_REG *pReg)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    return READ_REG(pReg->DVP_BLOCK_STATUS);
}

/**
* @brief  Get cif line1 interrupt num.
* @param  pReg: CIF reg base.
* @return interrupt num.
* Get cif line1 interrupt num.
*/
uint32_t HAL_CIF_GetLine1IntNum(struct CIF_REG *pReg)
{
    uint32_t regVal;

    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    regVal = READ_REG(pReg->DVP_LINE_INT_NUM);
    regVal &= CIF_DVP_LINE_INT_NUM_LINE1_INT_NUM_MASK;
    regVal >>= CIF_DVP_LINE_INT_NUM_LINE1_INT_NUM_SHIFT;

    return regVal;
}

/**
* @brief  Get cif line0 interrupt num.
* @param  pReg: CIF reg base.
* @return interrupt num.
* Get cif line0 interrupt num.
*/
uint32_t HAL_CIF_GetLine0IntNum(struct CIF_REG *pReg)
{
    uint32_t regVal;

    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    regVal = READ_REG(pReg->DVP_LINE_INT_NUM);
    regVal &= CIF_DVP_LINE_INT_NUM_LINE0_INT_NUM_MASK;
    regVal >>= CIF_DVP_LINE_INT_NUM_LINE0_INT_NUM_SHIFT;

    return regVal;
}

/**
* @brief  Get cif fifo uv entry.
* @param  pReg: CIF reg base.
* @return the value of uv fifo entry
* Get cif fifo uv entry
*/
uint32_t HAL_CIF_GetFifoUvEntry(struct CIF_REG *pReg)
{
    uint32_t regVal;

    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    regVal = READ_REG(pReg->DVP_FIFO_ENTRY);
    regVal &= CIF_DVP_FIFO_ENTRY_UV_FIFO_ENTRY_MASK;
    regVal >>= CIF_DVP_FIFO_ENTRY_UV_FIFO_ENTRY_SHIFT;

    return regVal;
}

/**
* @brief  Get cif fifo y entry.
* @param  pReg: CIF reg base.
* @return the value of y fifo entry
* Get cif fifo y entry
*/
uint32_t HAL_CIF_GetFifoYEntry(struct CIF_REG *pReg)
{
    uint32_t regVal;

    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    regVal = READ_REG(pReg->DVP_FIFO_ENTRY);
    regVal &= CIF_DVP_FIFO_ENTRY_Y_FIFO_ENTRY_MASK;
    regVal >>= CIF_DVP_FIFO_ENTRY_Y_FIFO_ENTRY_SHIFT;

    return regVal;
}

/**
* @brief  Get cif fifo y entry.
* @param  pReg: CIF reg base.
* @return the value of y frame status
* Get cif frame status
*/
uint32_t HAL_CIF_GetFrameStatus(struct CIF_REG *pReg)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    return READ_REG(pReg->DVP_FRAME_STATUS);
}

/**
* @brief  Get cif dvp current destination address.
* @param  pReg: CIF reg base.
* @return the value of current destination address
* Get cif dvp current destination address
*/
uint32_t HAL_CIF_GetCurDstAddr(struct CIF_REG *pReg)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    return READ_REG(pReg->DVP_CUR_DST);
}

/**
* @brief  Get cif last frame uv line number
* @param  pReg: CIF reg base.
* @return the value of last frame uv line number
* Get UV line number of last frame,only for bt1120 mode
*/
uint32_t HAL_CIF_GetLastFrameUvLineNum(struct CIF_REG *pReg)
{
    uint32_t regVal;

    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    regVal = READ_REG(pReg->DVP_LAST_LINE);
    regVal &= CIF_DVP_LAST_LINE_LAST_UV_NUM_MASK;
    regVal >>= CIF_DVP_LAST_LINE_LAST_UV_NUM_SHIFT;

    return regVal;
}

/**
* @brief  Get cif last frame y line number
* @param  pReg: CIF reg base.
* @return the value of last frame y line number
* Get y line number of last frame
*/
uint32_t HAL_CIF_GetLastFrameYLineNum(struct CIF_REG *pReg)
{
    uint32_t regVal;

    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    regVal = READ_REG(pReg->DVP_LAST_LINE);
    regVal &= CIF_DVP_LAST_LINE_LAST_Y_NUM_MASK;
    regVal >>= CIF_DVP_LAST_LINE_LAST_Y_NUM_SHIFT;

    return regVal;
}

/**
* @brief  Get cif last line uv number
* @param  pReg: CIF reg base.
* @return the value of last line uv number
* Get UV number of last line
*/
uint32_t HAL_CIF_GetLastLineUvNum(struct CIF_REG *pReg)
{
    uint32_t regVal;

    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    regVal = READ_REG(pReg->DVP_LAST_PIX);
    regVal &= CIF_DVP_LAST_PIX_LAST_UV_NUM_MASK;
    regVal >>= CIF_DVP_LAST_PIX_LAST_UV_NUM_SHIFT;

    return regVal;
}

/**
* @brief  Get cif last line y number
* @param  pReg: CIF reg base.
* @return the value of last line y number
* Get y number of last line
*/
uint32_t HAL_CIF_GetLastLineYNum(struct CIF_REG *pReg)
{
    uint32_t regVal;

    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    regVal = READ_REG(pReg->DVP_LAST_PIX);
    regVal &= CIF_DVP_LAST_LINE_LAST_Y_NUM_MASK;
    regVal >>= CIF_DVP_LAST_LINE_LAST_Y_NUM_SHIFT;

    return regVal;
}

/**
* @brief  Get cif dma idle status
* @param  pReg: CIF reg base.
* @return the value of dma idle status
*/
uint32_t HAL_CIF_GetDMAIdleStatus(struct CIF_REG *pReg)
{
    uint32_t regVal;

    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    regVal = READ_REG(pReg->DVP_DMA_IDLE_REQ);
    regVal &= CIF_DVP_DMA_IDLE_REQ_DMA_IDLE_REQ_MASK;
    regVal >>= CIF_DVP_DMA_IDLE_REQ_DMA_IDLE_REQ_SHIFT;

    return regVal;
}

/** @} */

/** @defgroup CIF_Exported_Functions_Group3 IO Functions
 @verbatim

 This section provides functions allowing to IO controlling:

 @endverbatim
 *  @{
 */

/**
 * @brief  Set CIF axi burst type.
 * @param  pReg: CIF reg base.
 * @param  type: axi burst type
 * @return HAL_Status.
 * Just set CIF axi burst type.
 */
HAL_Status HAL_CIF_SetAxiBurstType(struct CIF_REG *pReg,
                                   eCIF_axiBurstType type)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    MODIFY_REG(pReg->DVP_CTRL, CIF_DVP_CTRL_AXI_BURST_TYPE_MASK,
               type << CIF_DVP_CTRL_AXI_BURST_TYPE_SHIFT);

    return HAL_OK;
}

/**
 * @brief  Set CIF capture enable bit.
 * @param  pReg: CIF reg base.
 * @param  enable: decide to set enable status
 * @return HAL_Status.
 * Enable or disable CIF controller.
 */
HAL_Status HAL_CIF_SetCaptureEnable(struct CIF_REG *pReg, bool enable)
{
    uint32_t regVal;

    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    regVal = READ_REG(pReg->DVP_CTRL);
    if (enable)
        regVal |= CIF_DVP_CTRL_CAP_EN_MASK;
    else
        regVal &= ~CIF_DVP_CTRL_CAP_EN_MASK;
    WRITE_REG(pReg->DVP_CTRL, regVal);

    return HAL_OK;
}

/**
 * @brief  Set CIF work enable bit.
 * @param  pReg: CIF reg base.
 * @param  workMode: decide which work mode to be selcected
 * @return HAL_Status.
 * Select cif work mode.
 */
HAL_Status HAL_CIF_SetWorkmode(struct CIF_REG *pReg, eCIF_workMode workMode)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    MODIFY_REG(pReg->DVP_CTRL, CIF_DVP_CTRL_WORK_MODE_MASK,
               workMode << CIF_DVP_CTRL_WORK_MODE_SHIFT);

    return HAL_OK;
}

/**
 * @brief  Select uv store order.
 * @param  pReg: CIF reg base.
 * @param  order: the uv store order type
 * @return HAL_Status.
 * Select uv store order.
 */
HAL_Status HAL_CIF_SetUvStoreOrder(struct CIF_REG *pReg,
                                   eCIF_uvStoreOrder order)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    MODIFY_REG(pReg->DVP_FOR, CIF_DVP_FOR_UV_STORE_ORDER_MASK,
               order << CIF_DVP_FOR_UV_STORE_ORDER_SHIFT);

    return HAL_OK;
}

/**
 * @brief  Select raw end type.
 * @param  pReg: CIF reg base.
 * @param  type: the raw end type
 * @return HAL_Status.
 * Select raw end type.
 */
HAL_Status HAL_CIF_SetRawEnd(struct CIF_REG *pReg, eCIF_rawEnd type)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    MODIFY_REG(pReg->DVP_FOR, CIF_DVP_FOR_RAW_END_MASK,
               type << CIF_DVP_FOR_RAW_END_SHIFT);

    return HAL_OK;
}

/**
 * @brief  Select yuv420 output order.
 * @param  pReg: CIF reg base.
 * @param  type: the order type
 * @return HAL_Status.
 * Select yuv420 output order.
 */
HAL_Status HAL_CIF_SetOut420Order(struct CIF_REG *pReg, eCIF_out420Order type)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    MODIFY_REG(pReg->DVP_FOR, CIF_DVP_FOR_OUT_420_ORDER_MASK,
               type << CIF_DVP_FOR_OUT_420_ORDER_SHIFT);

    return HAL_OK;
}

/**
 * @brief  Select cif output format.
 * @param  pReg: CIF reg base.
 * @param  type: the format type
 * @return HAL_Status.
 * Select cif output format.
 */
HAL_Status HAL_CIF_SetOutFormat(struct CIF_REG *pReg, eCIF_outputFormat type)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    MODIFY_REG(pReg->DVP_FOR, CIF_DVP_FOR_OUTPUT_420_MASK,
               type << CIF_DVP_FOR_OUTPUT_420_SHIFT);

    return HAL_OK;
}

/**
 * @brief  Select cif only receive y data for bt601.
 * @param  pReg: CIF reg base.
 * @param  enable: whether to enable only_y_mode
 * @return HAL_Status.
 * Select cif only receive y data for bt601.
 */
HAL_Status HAL_CIF_SetYmodeOnly(struct CIF_REG *pReg, bool enable)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    MODIFY_REG(pReg->DVP_FOR, CIF_DVP_FOR_ONLY_Y_MODE_MASK,
               (uint32_t)enable << CIF_DVP_FOR_ONLY_Y_MODE_SHIFT);

    return HAL_OK;
}

/**
 * @brief  Select cif raw width.
 * @param  pReg: CIF reg base.
 * @param  width: the width of raw type
 * @return HAL_Status.
 * Select cif raw width.
 */
HAL_Status HAL_CIF_SetRawWidth(struct CIF_REG *pReg, eCIF_rawWidth width)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    MODIFY_REG(pReg->DVP_FOR, CIF_DVP_FOR_RAW_WIDTH_MASK,
               width << CIF_DVP_FOR_RAW_WIDTH_SHIFT);

    return HAL_OK;
}

/**
 * @brief  Select cif jpeg mode.
 * @param  pReg: CIF reg base.
 * @param  mode: the mode of jpeg
 * @return HAL_Status.
 * Select cif jpeg mode.
 */
HAL_Status HAL_CIF_SetJpegMode(struct CIF_REG *pReg, eCIF_jpegMode mode)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    MODIFY_REG(pReg->DVP_FOR, CIF_DVP_FOR_JPEG_MODE_MASK,
               mode << CIF_DVP_FOR_JPEG_MODE_SHIFT);

    return HAL_OK;
}

/**
 * @brief  Select cif field order.
 * @param  pReg: CIF reg base.
 * @param  order: the order of cif field
 * @return HAL_Status.
 * Select cif field order.
 */
HAL_Status HAL_CIF_SetFieldOrder(struct CIF_REG *pReg, eCIF_fieldOrder order)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    MODIFY_REG(pReg->DVP_FOR, CIF_DVP_FOR_FIELD_ORDER_MASK,
               order << CIF_DVP_FOR_FIELD_ORDER_SHIFT);

    return HAL_OK;
}

/**
 * @brief  Select cif yuv input order.
 * @param  pReg: CIF reg base.
 * @param  order: the order of cif yuv input
 * @return HAL_Status.
 * Select cif yuv input order.
 */
HAL_Status HAL_CIF_SetYuvInOrder(struct CIF_REG *pReg, eCIF_yuvInOrder order)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    MODIFY_REG(pReg->DVP_FOR, CIF_DVP_FOR_YUV_IN_ORDER_MASK,
               order << CIF_DVP_FOR_YUV_IN_ORDER_SHIFT);

    return HAL_OK;
}

/**
 * @brief  Select cif input mode.
 * @param  pReg: CIF reg base.
 * @param  mode: the mode of cif input
 * @return HAL_Status.
 * Select cif input mode.
 */
HAL_Status HAL_CIF_SetInputMode(struct CIF_REG *pReg, eCIF_inputMode mode)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    MODIFY_REG(pReg->DVP_FOR, CIF_DVP_FOR_INPUT_MODE_MASK,
               mode << CIF_DVP_FOR_INPUT_MODE_SHIFT);

    return HAL_OK;
}

/**
 * @brief  Select cif polarity of href and vsync.
 * @param  pReg: CIF reg base.
 * @param  hpol: the polarity of cif href
 * @param  vpol: the polarity of cif vsync
 * @return HAL_Status.
 * Select cif polarity of href and vsync.
 */
HAL_Status HAL_CIF_SetHrefVsynPol(struct CIF_REG *pReg, eCIF_hrefPol hpol,
                                  eCIF_vsyncPol vpol)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    MODIFY_REG(pReg->DVP_FOR,
               CIF_DVP_FOR_HREF_POL_MASK | CIF_DVP_FOR_VSYNC_POL_MASK,
               hpol << CIF_DVP_FOR_HREF_POL_SHIFT |
               vpol << CIF_DVP_FOR_VSYNC_POL_SHIFT);

    return HAL_OK;
}

/**
* @brief  Set cif dma to stop or not.
* @param  pReg: CIF reg base.
* @param  stat: decides wheter cif dma stops or not
* @return HAL_Status.
* Set cif dma to stop or not.
*/
HAL_Status HAL_CIF_SetDMAStop(struct CIF_REG *pReg, uint32_t stat)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    MODIFY_REG(pReg->DVP_DMA_IDLE_REQ, CIF_DVP_DMA_IDLE_REQ_DMA_IDLE_REQ_MASK,
               stat << CIF_DVP_DMA_IDLE_REQ_DMA_IDLE_REQ_SHIFT);

    return HAL_OK;
}

/**
* @brief  Set cif frame0 y addr.
* @param  pReg: CIF reg base.
* @param  yAddr: the y address of yuv
* @return HAL_Status.
* Set cif frame0 y addr.
*/
HAL_Status HAL_CIF_SetFrm0YAddr(struct CIF_REG *pReg, uint32_t yAddr)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));
    HAL_ASSERT(yAddr);

    MODIFY_REG(pReg->DVP_FRM0_ADDR_Y, CIF_DVP_FRM0_ADDR_Y_FRM0_ADDR_Y_MASK,
               yAddr << CIF_DVP_FRM0_ADDR_Y_FRM0_ADDR_Y_SHIFT);

    return HAL_OK;
}

/**
* @brief  Set cif frame0 uv addr.
* @param  pReg: CIF reg base.
* @param  uvAddr: the uv address of yuv
* @return HAL_Status.
* Set cif frame0 uv addr.
*/
HAL_Status HAL_CIF_SetFrm0UvAddr(struct CIF_REG *pReg, uint32_t uvAddr)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));
    HAL_ASSERT(uvAddr);

    MODIFY_REG(pReg->DVP_FRM0_ADDR_UV, CIF_DVP_FRM0_ADDR_UV_FRM0_ADDR_UV_MASK,
               uvAddr << CIF_DVP_FRM0_ADDR_UV_FRM0_ADDR_UV_SHIFT);

    return HAL_OK;
}

/**
* @brief  Set cif frame1 y addr.
* @param  pReg: CIF reg base.
* @param  yAddr: the y address of yuv
* @return HAL_Status.
* Set cif frame1 y addr.
*/
HAL_Status HAL_CIF_SetFrm1YAddr(struct CIF_REG *pReg, uint32_t yAddr)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));
    HAL_ASSERT(yAddr);

    MODIFY_REG(pReg->DVP_FRM1_ADDR_Y, CIF_DVP_FRM1_ADDR_Y_FRM1_ADDR_Y_MASK,
               yAddr << CIF_DVP_FRM1_ADDR_Y_FRM1_ADDR_Y_SHIFT);

    return HAL_OK;
}

/**
* @brief  Set cif frame1 uv addr.
* @param  pReg: CIF reg base.
* @param  uvAddr: the uv address of yuv
* @return HAL_Status.
* Set cif frame1 uv addr.
*/
HAL_Status HAL_CIF_SetFrm1UvAddr(struct CIF_REG *pReg, uint32_t uvAddr)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));
    HAL_ASSERT(uvAddr);

    MODIFY_REG(pReg->DVP_FRM1_ADDR_UV, CIF_DVP_FRM1_ADDR_UV_FRM1_ADDR_UV_MASK,
               uvAddr << CIF_DVP_FRM1_ADDR_UV_FRM1_ADDR_UV_SHIFT);

    return HAL_OK;
}

/**
* @brief  Set cif block0 y addr.
* @param  pReg: CIF reg base.
* @param  yAddr: the y address of yuv
* @return HAL_Status.
* Set cif block0 y addr.
*/
HAL_Status HAL_CIF_SetBlock0YAddr(struct CIF_REG *pReg, uint32_t yAddr)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));
    HAL_ASSERT(yAddr);

    MODIFY_REG(pReg->DVP_BLOCK0_ADDR_Y, CIF_DVP_BLOCK0_ADDR_Y_BLOCK0_ADDR_Y_MASK,
               yAddr << CIF_DVP_BLOCK0_ADDR_Y_BLOCK0_ADDR_Y_SHIFT);

    return HAL_OK;
}

/**
* @brief  Set cif block0 uv addr.
* @param  pReg: CIF reg base.
* @param  uvAddr: the uv address of yuv
* @return HAL_Status.
* Set cif block0 uv addr.
*/
HAL_Status HAL_CIF_SetBlock0UvAddr(struct CIF_REG *pReg, uint32_t uvAddr)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));
    HAL_ASSERT(uvAddr);

    MODIFY_REG(pReg->DVP_BLOCK0_ADDR_UV, CIF_DVP_BLOCK0_ADDR_UV_BLOCK0_ADDR_UV_MASK,
               uvAddr << CIF_DVP_BLOCK0_ADDR_UV_BLOCK0_ADDR_UV_SHIFT);

    return HAL_OK;
}

/**
* @brief  Set cif block1 y addr.
* @param  pReg: CIF reg base.
* @param  yAddr: the y address of yuv
* @return HAL_Status.
* Set cif block1 y addr.
*/
HAL_Status HAL_CIF_SetBlock1YAddr(struct CIF_REG *pReg, uint32_t yAddr)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));
    HAL_ASSERT(yAddr);

    MODIFY_REG(pReg->DVP_BLOCK1_ADDR_Y, CIF_DVP_BLOCK1_ADDR_Y_BLOCK1_ADDR_Y_MASK,
               yAddr << CIF_DVP_BLOCK1_ADDR_Y_BLOCK1_ADDR_Y_SHIFT);

    return HAL_OK;
}

/**
* @brief  Set cif block0 uv addr.
* @param  pReg: CIF reg base.
* @param  uvAddr: the uv address of yuv
* @return HAL_Status.
* Set cif block1 uv addr.
*/
HAL_Status HAL_CIF_SetBlock1UvAddr(struct CIF_REG *pReg, uint32_t uvAddr)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));
    HAL_ASSERT(uvAddr);

    MODIFY_REG(pReg->DVP_BLOCK1_ADDR_UV, CIF_DVP_BLOCK1_ADDR_UV_BLOCK1_ADDR_UV_MASK,
               uvAddr << CIF_DVP_BLOCK1_ADDR_UV_BLOCK1_ADDR_UV_SHIFT);

    return HAL_OK;
}

/**
* @brief  Set cif virtual line width.
* @param  pReg: CIF reg base.
* @param  width: the width of virtual line
* @return HAL_Status.
* Set cif virtual line width.
*/
HAL_Status HAL_CIF_SetVirtualLineWidth(struct CIF_REG *pReg, uint32_t width)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    MODIFY_REG(pReg->DVP_VIR_LINE_WIDTH, CIF_DVP_VIR_LINE_WIDTH_VIR_LINE_WIDTH_MASK,
               width << CIF_DVP_VIR_LINE_WIDTH_VIR_LINE_WIDTH_SHIFT);

    return HAL_OK;
}

/**
* @brief  Set cif size of window.
* @param  pReg: CIF reg base.
* @param  height: the height size of received image
* @param  width: the width size of received image
* @return HAL_Status.
* Set the expected height and width of received image.
*/
HAL_Status HAL_CIF_SetReceivedSize(struct CIF_REG *pReg, uint32_t height,
                                   uint32_t width)
{
    MODIFY_REG(pReg->DVP_SET_SIZE,
               CIF_DVP_SET_SIZE_SET_HEIGHT_MASK |
               CIF_DVP_SET_SIZE_SET_WIDTH_MASK,
               height << CIF_DVP_SET_SIZE_SET_HEIGHT_SHIFT |
               width << CIF_DVP_SET_SIZE_SET_WIDTH_SHIFT);

    return HAL_OK;
}

/**
* @brief  Set cif block line num.
* @param  pReg: CIF reg base.
* @param  num: the num of block to sample
* @return HAL_Status.
* Set cif block line num.
*/
HAL_Status HAL_CIF_SetBlockLineNum(struct CIF_REG *pReg, uint32_t num)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    MODIFY_REG(pReg->DVP_BLOCK_LINE_NUM, CIF_DVP_BLOCK_LINE_NUM_BLOCK_LINE_NUM_MASK,
               num << CIF_DVP_BLOCK_LINE_NUM_BLOCK_LINE_NUM_SHIFT);

    return HAL_OK;
}

/**
* @brief  Clear block status,by write 0x1 for interrelated bit.
* @param  pReg: CIF reg base.
* @param  mask: the block status to be cleared
* @return HAL_Status.
* Clear cif block status.
*/
uint32_t HAL_CIF_ClearBlockStatus(struct CIF_REG *pReg, uint32_t mask)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    WRITE_REG(pReg->DVP_BLOCK_STATUS, mask);

    return HAL_OK;
}

/**
* @brief  Set cif crop ordinate
* @param  pReg: CIF reg base
* @param  startY: the y ordinate to crop
* @param  startX: the x ordinate to crop
* @return HAL_Status
* Set the ordinate to crop.
*/
HAL_Status HAL_CIF_SetCropOrdinate(struct CIF_REG *pReg,
                                   uint32_t startY,
                                   uint32_t startX)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    MODIFY_REG(pReg->DVP_CROP,
               CIF_DVP_CROP_START_X_MASK |
               CIF_DVP_CROP_START_Y_MASK,
               startX << CIF_DVP_CROP_START_X_SHIFT |
               startY << CIF_DVP_CROP_START_Y_SHIFT);

    return HAL_OK;
}

/**
* @brief  select cif path
* @param  pReg: CIF reg base
* @param  path: the y ordinate to crop
* @return HAL_Status
* Set the path to sample.
*/
HAL_Status HAL_CIF_SetPath(struct CIF_REG *pReg, eCIF_pathSel path)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    MODIFY_REG(pReg->DVP_PATH_SEL,
               CIF_DVP_PATH_SEL_RAW_SEL_MASK | CIF_DVP_PATH_SEL_YUV_SEL_MASK,
               path == CIF_PATH_SEL_YUV ? CIF_DVP_PATH_SEL_YUV_SEL_MASK :
                                          CIF_DVP_PATH_SEL_RAW_SEL_MASK);

    return HAL_OK;
}

/**
* @brief  select cif path
* @param  pReg: CIF reg base
* @param  num: the line num of line1 to trigger interrupt
* @return HAL_Status
* Set the line num to line1.
*/
HAL_Status HAL_CIF_SetLine1IntNum(struct CIF_REG *pReg, uint32_t num)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    MODIFY_REG(pReg->DVP_LINE_INT_NUM,
               CIF_DVP_LINE_INT_NUM_LINE1_INT_NUM_MASK,
               (num & 0x1fff) << CIF_DVP_LINE_INT_NUM_LINE1_INT_NUM_SHIFT);

    return HAL_OK;
}

/**
* @brief  select cif path
* @param  pReg: CIF reg base
* @param  num: the line num of line0 to trigger interrupt
* @return HAL_Status
* Set the line num to line0.
*/
HAL_Status HAL_CIF_SetLine0IntNum(struct CIF_REG *pReg, uint32_t num)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    MODIFY_REG(pReg->DVP_LINE_INT_NUM,
               CIF_DVP_LINE_INT_NUM_LINE0_INT_NUM_MASK,
               (num & 0x1fff) << CIF_DVP_LINE_INT_NUM_LINE0_INT_NUM_SHIFT);

    return HAL_OK;
}

/**
* @brief  Set cif water line
* @param  pReg: CIF reg base
* @param  info: the information about cif water line
* @return HAL_Status
* Set cif water line
*/
HAL_Status HAL_CIF_SetWaterLine(struct CIF_REG *pReg,
                                struct CIF_WATERLINE_INFO *info)
{
    uint32_t regVal;

    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    regVal = READ_REG(pReg->DVP_WATER_LINE);
    CLEAR_BIT(regVal, CIF_DVP_WATER_LINE_HURRY_EN_MASK |
              CIF_DVP_WATER_LINE_HURRY_VALUE_MASK |
              CIF_DVP_WATER_LINE_WATER_LINE_MASK);
    if (info->enable)
        SET_BIT(regVal, CIF_DVP_WATER_LINE_HURRY_EN_MASK);
    else
        CLEAR_BIT(regVal, CIF_DVP_WATER_LINE_HURRY_EN_MASK);

    if (info->hurryValue > CIF_DVP_WATER_LINE_HURRY_VAL_MAX)
        info->hurryValue = CIF_DVP_WATER_LINE_HURRY_VAL_MAX;
    regVal |= (info->hurryValue << CIF_DVP_WATER_LINE_HURRY_VALUE_SHIFT);

    regVal |= (info->level << CIF_DVP_WATER_LINE_WATER_LINE_SHIFT);

    WRITE_REG(pReg->DVP_WATER_LINE, regVal);

    return HAL_OK;
}

/**
* @brief  Get cif fifo y entry.
* @param  pReg: CIF reg base.
* @param  mask: frame status to be cleared.
* @return the value of y frame status
* Get cif frame status
*/
uint32_t HAL_CIF_ClearFrameStatus(struct CIF_REG *pReg, uint32_t mask)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    MODIFY_REG(pReg->DVP_FRAME_STATUS, mask, (0U));

    return HAL_OK;
}

/**
 * @brief  CIF interrupt handler.
 * @param  pReg: CIF reg base.
 * @return HAL_Status.
 */
HAL_Status HAL_CIF_IrqHandler(struct CIF_REG *pReg)
{
    /* TODO */
    return HAL_OK;
}

/** @} */

/** @defgroup CIF_Exported_Functions_Group4 Init and DeInit Functions
 @verbatim

 This section provides functions allowing to init and deinit the module:

 @endverbatim
 *  @{
 */

/**
 * @brief  Init CIF control register.
 */
HAL_Status HAL_CIF_Init(struct CIF_REG *pReg)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    WRITE_REG(pReg->DVP_CTRL,
              CIF_AXIBURST_TYPE16 << CIF_DVP_CTRL_AXI_BURST_TYPE_SHIFT);

    return HAL_OK;
}

/**
 * @brief  DeInit CIF control register.
 */
HAL_Status HAL_CIF_DeInit(struct CIF_REG *pReg)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    MODIFY_REG(pReg->DVP_CTRL, CIF_DVP_CTRL_CAP_EN_MASK,
               (0U) << CIF_DVP_CTRL_CAP_EN_SHIFT);

    return HAL_OK;
}

/** @} */

/** @defgroup CIF_Exported_Functions_Group5 Other Functions
 *  @{
 */

/**
 * @brief  Enable irq in cif controller.
 * @param  pReg: CIF reg base.
 * @return HAL_Status.
 * Enable CIF irq.
 */
HAL_Status HAL_CIF_SetIrqEnable(struct CIF_REG *pReg)
{
    uint32_t regVal;

    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    regVal = CIF_DVP_INTEN_BLOCK0_END_EN_MASK | CIF_DVP_INTEN_BLOCK1_END_EN_MASK |
             CIF_DVP_INTEN_BUS_ERR_EN_MASK | CIF_DVP_INTEN_PIX_ERR_EN_MASK |
             CIF_DVP_INTEN_BLOCK_ERR_EN_MASK | CIF_DVP_INTEN_FRAME_START_EN_MASK |
             CIF_DVP_INTEN_DMA_FRAME_END_EN_MASK | CIF_DVP_INTEN_LINE_ERR_EN_MASK |
             CIF_DVP_INTEN_PRE_INF_FRAME_END_EN_MASK |
             CIF_DVP_INTEN_PST_INF_FRAME_END_EN_MASK;

    WRITE_REG(pReg->DVP_INTEN, regVal);

    return HAL_OK;
}

/**
 * @brief  Enable irq in cif controller.
 * @param  pReg: CIF reg base.
 * @return HAL_Status.
 * Disable CIF irq.
 */
HAL_Status HAL_CIF_SetIrqDisable(struct CIF_REG *pReg)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    WRITE_REG(pReg->DVP_INTEN, 0);

    return HAL_OK;
}

/**
 * @brief  Clear the actived irq of cif in running.
 * @param  pReg: CIF reg base.
 * @param  mask: the mask bit of irq
 * @return HAL_Status.
 * Clear CIF irq status has happened.
 */

HAL_Status HAL_CIF_ClearIrqStatus(struct CIF_REG *pReg, uint32_t mask)
{
    HAL_ASSERT(IS_CIF_INSTANCE(pReg));

    WRITE_REG(pReg->DVP_INTSTAT, mask);

    return HAL_OK;
}

/** @} */

#endif

/** @} */

/** @} */
