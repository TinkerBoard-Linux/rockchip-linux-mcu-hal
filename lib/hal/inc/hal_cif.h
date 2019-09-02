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

#ifndef _HAL_CIF_H_
#define _HAL_CIF_H_

#include "hal_base.h"

/***************************** MACRO Definition ******************************/
/** @defgroup CIF_Exported_Definition_Group1 Basic Definition
 *  @{
 */

/***************************** Structure Definition **************************/

/**
 * enum all axiburst type
 */
typedef enum {
    CIF_AXIBURST_TYPE1 = 0x0,
    CIF_AXIBURST_TYPE2,
    CIF_AXIBURST_TYPE3,
    CIF_AXIBURST_TYPE4,
    CIF_AXIBURST_TYPE5,
    CIF_AXIBURST_TYPE6,
    CIF_AXIBURST_TYPE7,
    CIF_AXIBURST_TYPE8,
    CIF_AXIBURST_TYPE9,
    CIF_AXIBURST_TYPE10,
    CIF_AXIBURST_TYPE11,
    CIF_AXIBURST_TYPE12,
    CIF_AXIBURST_TYPE13,
    CIF_AXIBURST_TYPE14,
    CIF_AXIBURST_TYPE15,
    CIF_AXIBURST_TYPE16,
} eCIF_axiBurstType;

/**
 * enum all work mode of cif
 */
typedef enum {
    CIF_WORKMODE_FRAME_ONEFRAME = 0x0,
    CIF_WORKMODE_FRAME_PINGPONG,
    CIF_WORKMODE_BLOCK_PINGPONG,
} eCIF_workMode;

/**
 * enum all uv stored type of cif
 */
typedef enum {
    CIF_UV_STORE_ORDER_UVUV = 0x0,
    CIF_UV_STORE_ORDER_VUVU,
} eCIF_uvStoreOrder;

/**
 * enum all raw end type
 */
typedef enum {
    CIF_RAW_END_LITTLE = 0x0,
    CIF_RAW_END_BIG,
} eCIF_rawEnd;

/**
 * enum yuv420 uv output in even or odd line
 */
typedef enum {
    CIF_OUT_420_ORDER_UV_EVEN = 0x0,
    CIF_OUT_420_ORDER_UV_ODD,
} eCIF_out420Order;

/**
 * enum yuv output data type
 */
typedef enum {
    CIF_OUTPUT_IS_422 = 0x0,
    CIF_OUTPUT_IS_420,
} eCIF_outputFormat;

/**
 * enum raw width type
 */
typedef enum {
    CIF_RAW_WIDTH_8BIT = 0x0,
    CIF_RAW_WIDTH_10BIT,
    CIF_RAW_WIDTH_12BIT,
} eCIF_rawWidth;

/**
 * enum jpeg mode
 */
typedef enum {
    CIF_JPEG_OTHERS = 0x0,
    CIF_JPEG_MODE_1,
} eCIF_jpegMode;

/**
 * enum field order type
 */
typedef enum {
    CIF_FIELD_ORDER_ODD_FIRST = 0x0,
    CIF_FIELD_ORDER_EVEN_FIRST,
} eCIF_fieldOrder;

/**
 * enum yuv input order type
 */
typedef enum {
    CIF_YUV_IN_ORDER_UYVY = 0x0,
    CIF_YUV_IN_ORDER_YVYU,
    CIF_YUV_IN_ORDER_VYUY,
    CIF_YUV_IN_ORDER_YUYV,
} eCIF_yuvInOrder;

/**
 * enum cif input mode type
 */
typedef enum {
    CIF_INPUTMODE_YUV = 0x00,
    CIF_INPUTMODE_PAL = 0x02,
    CIF_INPUTMODE_NTSC,
    CIF_INPUTMODE_RAW,
    CIF_INPUTMODE_JPEG,
    CIF_INPUTMODE_BT1120,
} eCIF_inputMode;

/**
 * enum polarity of cif href
 */
typedef enum {
    CIF_HREF_POL_HIGH_ACTIVE = 0x0,
    CIF_HREF_POL_LOW_ACTIVE,
} eCIF_hrefPol;

/**
 * enum polarity of cif vsync
 */
typedef enum {
    CIF_VSYNC_POL_LOW_ACTIVE = 0x0,
    CIF_VSYNC_POL_HIGH_ACTIVE,
} eCIF_vsyncPol;

/**
 * enum path of cif input data
 */
typedef enum {
    CIF_PATH_SEL_RAW = 0x0,
    CIF_PATH_SEL_YUV,
} eCIF_pathSel;

/**
 * enum water line type of cif
 */
typedef enum {
    CIF_WATER_LINE_75_PERCENT = 0x0,
    CIF_WATER_LINE_50_PERCENT,
    CIF_WATER_LINE_25_PERCENT,
    CIF_WATER_LINE_0_PERCENT,
} eCIF_waterLineLvl;

/**
 * struct CIF_WATERLINE_INFO - the configuration of cif water line.
 */
struct CIF_WATERLINE_INFO {
    bool enable;
    uint8_t hurryValue;
    eCIF_waterLineLvl level;
};

/** @} */
/***************************** Function Declare ******************************/
HAL_Status HAL_CIF_SetAxiBurstType(struct CIF_REG *pReg, eCIF_axiBurstType type);
HAL_Status HAL_CIF_SetCaptureEnable(struct CIF_REG *pReg, bool enable);
HAL_Status HAL_CIF_SetWorkmode(struct CIF_REG *pReg, eCIF_workMode workMode);
HAL_Status HAL_CIF_SetIrqEnable(struct CIF_REG *pReg);
HAL_Status HAL_CIF_SetIrqDisable(struct CIF_REG *pReg);
uint32_t HAL_CIF_GetIrqStatus(struct CIF_REG *pReg);
HAL_Status HAL_CIF_ClearIrqStatus(struct CIF_REG *pReg, uint32_t mask);
HAL_Status HAL_CIF_SetUvStoreOrder(struct CIF_REG *pReg, eCIF_uvStoreOrder order);
HAL_Status HAL_CIF_SetRawEnd(struct CIF_REG *pReg, eCIF_rawEnd type);
HAL_Status HAL_CIF_SetOut420Order(struct CIF_REG *pReg, eCIF_out420Order type);
HAL_Status HAL_CIF_SetOutFormat(struct CIF_REG *pReg, eCIF_outputFormat type);
HAL_Status HAL_CIF_SetYmodeOnly(struct CIF_REG *pReg, bool enable);
HAL_Status HAL_CIF_SetRawWidth(struct CIF_REG *pReg, eCIF_rawWidth width);
HAL_Status HAL_CIF_SetJpegMode(struct CIF_REG *pReg, eCIF_jpegMode mode);
HAL_Status HAL_CIF_SetFieldOrder(struct CIF_REG *pReg, eCIF_fieldOrder order);
HAL_Status HAL_CIF_SetYuvInOrder(struct CIF_REG *pReg, eCIF_yuvInOrder order);
HAL_Status HAL_CIF_SetInputMode(struct CIF_REG *pReg, eCIF_inputMode mode);
HAL_Status HAL_CIF_SetHrefVsynPol(struct CIF_REG *pReg, eCIF_hrefPol hpol,
                                  eCIF_vsyncPol vpol);
HAL_Status HAL_CIF_SetDMAStop(struct CIF_REG *pReg, uint32_t stat);
HAL_Status HAL_CIF_SetFrm0YAddr(struct CIF_REG *pReg, uint32_t yAddr);
HAL_Status HAL_CIF_SetFrm0UvAddr(struct CIF_REG *pReg, uint32_t uvAddr);
HAL_Status HAL_CIF_SetFrm1YAddr(struct CIF_REG *pReg, uint32_t yAddr);
HAL_Status HAL_CIF_SetFrm1UvAddr(struct CIF_REG *pReg, uint32_t uvAddr);
HAL_Status HAL_CIF_SetBlock0YAddr(struct CIF_REG *pReg, uint32_t yAddr);
HAL_Status HAL_CIF_SetBlock0UvAddr(struct CIF_REG *pReg, uint32_t uvAddr);
HAL_Status HAL_CIF_SetBlock1YAddr(struct CIF_REG *pReg, uint32_t yAddr);
HAL_Status HAL_CIF_SetBlock1UvAddr(struct CIF_REG *pReg, uint32_t uvAddr);
HAL_Status HAL_CIF_SetVirtualLineWidth(struct CIF_REG *pReg, uint32_t width);
uint32_t HAL_CIF_GetVirtualLineWidth(struct CIF_REG *pReg);
HAL_Status HAL_CIF_SetReceivedSize(struct CIF_REG *pReg, uint32_t height,
                                   uint32_t width);
HAL_Status HAL_CIF_SetBlockLineNum(struct CIF_REG *pReg, uint32_t num);
uint32_t HAL_CIF_GetBlockLineNum(struct CIF_REG *pReg);
uint32_t HAL_CIF_GetBlockStatus(struct CIF_REG *pReg);
uint32_t HAL_CIF_ClearBlockStatus(struct CIF_REG *pReg, uint32_t mask);
HAL_Status HAL_CIF_SetCropOrdinate(struct CIF_REG *pReg, uint32_t startY,
                                   uint32_t startX);
HAL_Status HAL_CIF_SetPath(struct CIF_REG *pReg, eCIF_pathSel path);
HAL_Status HAL_CIF_SetLine1IntNum(struct CIF_REG *pReg, uint32_t num);
HAL_Status HAL_CIF_SetLine0IntNum(struct CIF_REG *pReg, uint32_t num);
uint32_t HAL_CIF_GetLine1IntNum(struct CIF_REG *pReg);
uint32_t HAL_CIF_GetLine0IntNum(struct CIF_REG *pReg);
HAL_Status HAL_CIF_SetWaterLine(struct CIF_REG *pReg,
                                struct CIF_WATERLINE_INFO *info);
uint32_t HAL_CIF_GetFifoUvEntry(struct CIF_REG *pReg);
uint32_t HAL_CIF_GetFifoYEntry(struct CIF_REG *pReg);
uint32_t HAL_CIF_GetFrameStatus(struct CIF_REG *pReg);
uint32_t HAL_CIF_ClearFrameStatus(struct CIF_REG *pReg, uint32_t mask);
uint32_t HAL_CIF_GetCurDstAddr(struct CIF_REG *pReg);
uint32_t HAL_CIF_GetLastFrameUvLineNum(struct CIF_REG *pReg);
uint32_t HAL_CIF_GetLastFrameYLineNum(struct CIF_REG *pReg);
uint32_t HAL_CIF_GetLastLineUvNum(struct CIF_REG *pReg);
uint32_t HAL_CIF_GetLastLineYNum(struct CIF_REG *pReg);
uint32_t HAL_CIF_GetDMAIdleStatus(struct CIF_REG *pReg);
HAL_Status HAL_CIF_IrqHandler(struct CIF_REG *pReg);
HAL_Status HAL_CIF_Init(struct CIF_REG *pReg);
HAL_Status HAL_CIF_DeInit(struct CIF_REG *pReg);

#endif

/** @} */

/** @} */
