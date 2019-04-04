/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

/** @addtogroup DSI
 *  @{
 */

#ifndef _HAL_DSI_H_
#define _HAL_DSI_H_

/***************************** MACRO Definition ******************************/
/** @defgroup DEMO_Exported_Definition_Group1 Basic Definition
 *  @{
 */

/** Add brief to here */

/***************************** Structure Definition **************************/
/**
 *  Add multi line brief to here
 *  ...
 */
typedef enum {
    MIPI_DSI_GENERIC_SHORT_WRITE_0_PARAM = 0x03,
    MIPI_DSI_GENERIC_SHORT_WRITE_1_PARAM = 0x13,
    MIPI_DSI_GENERIC_SHORT_WRITE_2_PARAM = 0x23,
    MIPI_DSI_DCS_SHORT_WRITE             = 0x05,
    MIPI_DSI_DCS_SHORT_WRITE_PARAM       = 0x15,
    MIPI_DSI_NULL_PACKET                 = 0x09,
    MIPI_DSI_BLANKING_PACKET             = 0x19,
    MIPI_DSI_GENERIC_LONG_WRITE          = 0x29,
    MIPI_DSI_DCS_LONG_WRITE              = 0x39,
}  eDSI_DataType;

typedef enum {
    MIPI_DCS_NOP                 = 0x00,
    MIPI_DCS_SOFT_RESET          = 0x01,
    MIPI_DCS_GET_DISPLAY_STATUS  = 0x09,
    MIPI_DCS_GET_POWER_MODE      = 0x0A,
    MIPI_DCS_GET_ADDRESS_MODE    = 0x0B,
    MIPI_DCS_GET_PIXEL_FORMAT    = 0x0C,
    MIPI_DCS_GET_DISPLAY_MODE    = 0x0D,
    MIPI_DCS_GET_SIGNAL_MODE     = 0x0E,
    MIPI_DCS_ENTER_SLEEP_MODE    = 0x10,
    MIPI_DCS_EXIT_SLEEP_MODE     = 0x11,
    MIPI_DCS_ENTER_PARTIAL_MODE  = 0x12,
    MIPI_DCS_ENTER_NORMAL_MODE   = 0x13,
    MIPI_DCS_SET_GAMMA_CURVE     = 0x26,
    MIPI_DCS_SET_DISPLAY_OFF     = 0x28,
    MIPI_DCS_SET_DISPLAY_ON      = 0x29,
    MIPI_DCS_SET_COLUMN_ADDRESS  = 0x2A,
    MIPI_DCS_SET_PAGE_ADDRESS    = 0x2B,
    MIPI_DCS_WRITE_MEMORY_START  = 0x2C,
    MIPI_DCS_WRITE_LUT           = 0x2D,
    MIPI_DCS_READ_MEMORY_START   = 0x2E,
    MIPI_DCS_SET_PARTIAL_ROWS    = 0x30,
    MIPI_DCS_SET_PARTIAL_COLUMNS = 0x31,
    MIPI_DCS_SET_SCROLL_AREA     = 0x33,
    MIPI_DCS_SET_TEAR_OFF        = 0x34,
    MIPI_DCS_SET_TEAR_ON         = 0x35,
    MIPI_DCS_SET_ADDRESS_MODE    = 0x36,
    MIPI_DCS_SET_SCROLL_START    = 0x37,
    MIPI_DCS_EXIT_IDLE_MODE      = 0x38,
    MIPI_DCS_ENTER_IDLE_MODE     = 0x39,
    MIPI_DCS_SET_PIXEL_FORMAT    = 0x3A,
    MIPI_DCS_SET_TEAR_SCANLINE   = 0x44,
} eDSI_DcsCommand;

typedef enum {
    MIPI_DSI_DCS_TEAR_MODE_VBLANK,
    MIPI_DSI_DCS_TEAR_MODE_VHBLANK,
} eDSI_DcsTearMode;

/** @} */
/***************************** Function Declare ******************************/
HAL_Status HAL_DSI_ClearErr(struct DSI_REG *pReg);
HAL_Status HAL_DSI_M31DphySetPll(uint32_t Lanembps);
HAL_Status HAL_DSI_M31DphyInit(struct DSI_REG *pReg);
HAL_Status HAL_DSI_DphyTimingConfig(struct DSI_REG *pReg);
HAL_Status HAL_DSI_PacketHandlerConfig(struct DSI_REG *pReg);
HAL_Status HAL_DSI_Init(struct DSI_REG *pReg, uint32_t Lanembps);
HAL_Status HAL_DSI_MsgLpModeConfig(struct DSI_REG *pReg, bool Enable);
HAL_Status HAL_DSI_Enable(struct DSI_REG *pReg,
                          struct DISPLAY_MODE_INFO *pModeInfo);
HAL_Status HAL_DSI_SendPacket(struct DSI_REG *pReg, uint8_t DataType,
                              uint8_t PayloadLen, uint8_t *Payload);
HAL_Status HAL_DSI_ModeConfig(struct DSI_REG *pReg,
                              struct DISPLAY_MODE_INFO *pModeInfo);
HAL_Status HAL_DSI_VerticalTimingConfig(struct DSI_REG *pReg,
                                        struct DISPLAY_MODE_INFO *pModeInfo);
HAL_Status HAL_DSI_DpiConfig(struct DSI_REG *pReg,
                             struct DISPLAY_MODE_INFO *pModeInfo,
                             uint16_t BusFormat);
HAL_Status HAL_DSI_LineTimerConfig(struct DSI_REG *pReg,
                                   uint16_t Lanembps,
                                   struct DISPLAY_MODE_INFO *pModeInfo);
#endif

/** @} */

/** @} */

/** @} */
