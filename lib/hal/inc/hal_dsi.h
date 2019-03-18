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
enum {
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

/** @} */
/***************************** Function Declare ******************************/
HAL_Status HAL_DSI_ClearErr(struct DSI_REG *pReg);
HAL_Status HAL_DSI_M31DphySetPll(uint32_t Lanembps);
HAL_Status HAL_DSI_M31DphyInit(struct DSI_REG *pReg);
HAL_Status HAL_DSI_DphyTimingConfig(struct DSI_REG *pReg);
HAL_Status HAL_DSI_PacketHandlerConfig(struct DSI_REG *pReg);
HAL_Status HAL_DSI_Init(struct DSI_REG *pReg, uint32_t Lanembps);
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


