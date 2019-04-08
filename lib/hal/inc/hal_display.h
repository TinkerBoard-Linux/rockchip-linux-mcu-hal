/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

/** @addtogroup DISPLAY
 *  @{
 */

#ifndef _HAL_DISPLAY_H_
#define _HAL_DISPLAY_H_

/***************************** MACRO Definition ******************************/
/** @defgroup DEMO_Exported_Definition_Group1 Basic Definition
 *  @{
 */

#define BIT(nr) (1UL << (nr))

/* RK display connector type */
#define RK_DISPLAY_CONNECTOR_UNKNOWN 0
#define RK_DISPLAY_CONNECTOR_RGB     1
#define RK_DISPLAY_CONNECTOR_DSI     2

/* video mode flag default polarity is positive */
#define VIDEO_MODE_FLAG_NHSYNC    BIT(0)
#define VIDEO_MODE_FLAG_NVSYNC    BIT(1)
#define VIDEO_MODE_FLAG_NPIXDATA  BIT(2)
#define VIDEO_MODE_FLAG_DEN       BIT(3)
#define DSI_MODE_VIDEO            BIT(4)
#define DSI_MODE_VIDEO_BURST      BIT(5)
#define DSI_MODE_VIDEO_SYNC_PULSE BIT(6)
#define DSI_MODE_VIDEO_AUTO_VERT  BIT(7)
#define DSI_MODE_EOT_PACKET       BIT(8)
#define DSI_CLOCK_NON_CONTINUOUS  BIT(9)
#define DSI_MODE_LPM              BIT(10)

/* media bus format from DRM define */
#define MEDIA_BUS_FMT_RGB565_1X16        0x1017
#define MEDIA_BUS_FMT_BGR565_2X8_BE      0x1005
#define MEDIA_BUS_FMT_BGR565_2X8_LE      0x1006
#define MEDIA_BUS_FMT_RGB565_2X8_BE      0x1007
#define MEDIA_BUS_FMT_RGB565_2X8_LE      0x1008
#define MEDIA_BUS_FMT_RGB666_1X18        0x1009
#define MEDIA_BUS_FMT_RBG888_1X24        0x100e
#define MEDIA_BUS_FMT_RGB666_1X24_CPADHI 0x1015
#define MEDIA_BUS_FMT_RGB666_1X7X3_SPWG  0x1010
#define MEDIA_BUS_FMT_BGR888_1X24        0x1013
#define MEDIA_BUS_FMT_GBR888_1X24        0x1014
#define MEDIA_BUS_FMT_RGB888_1X24        0x100a
#define MEDIA_BUS_FMT_RGB888_2X12_BE     0x100b
#define MEDIA_BUS_FMT_RGB888_2X12_LE     0x100c
#define MEDIA_BUS_FMT_RGB888_1X7X4_SPWG  0x1011
#define MEDIA_BUS_FMT_RGB888_1X7X4_JEIDA 0x1012
#define MEDIA_BUS_FMT_ARGB8888_1X32      0x100d
#define MEDIA_BUS_FMT_RGB888_1X32_PADHI  0x100f

/***************************** Structure Definition **************************/

/**
 *  Add multi line brief to here
 *  ...
 */
struct DISPLAY_MODE_INFO {
    uint16_t crtcClock;
    uint16_t crtcHdisplay;
    uint16_t crtcHsyncStart;
    uint16_t crtcHsyncEnd;
    uint16_t crtcHtotal;
    uint16_t crtcVdisplay;
    uint16_t crtcVsyncStart;
    uint16_t crtcVsyncEnd;
    uint16_t crtcVtotal;
    uint16_t flags;
};

/**
 * struct DISPLAY_RECT
 */
struct DISPLAY_RECT {
    uint16_t x;
    uint16_t y;
    uint16_t w;
    uint16_t h;
};

/** @} */
/***************************** Function Declare ******************************/
#endif

/** @} */

/** @} */

/** @} */
