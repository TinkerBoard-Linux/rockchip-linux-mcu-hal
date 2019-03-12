/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

/** @addtogroup VOP
 *  @{
 */

#ifndef _HAL_VOP_H_
#define _HAL_VOP_H_

/***************************** MACRO Definition ******************************/
/** @defgroup DEMO_Exported_Definition_Group1 Basic Definition
 *  @{
 */

/** Add brief to here */
#define VOP_GAMMA_SIZE        4
#define VOP_COLOR_MATRIX_SIZE 3
/***************************** Structure Definition **************************/
/**
 *  Add multi line brief to here
 *  ...
 */
typedef enum {
    VOP_POST_SCL_MODE_RESEVED = 0,
    VOP_POST_SCL_MODE_X2,
    VOP_POST_SCL_MODE_X3,
    VOP_POST_SCL_MODE_X4,
} eVOP_PostSclMode;

typedef enum {
    VOP_POST_CSC_MPEG = 0,
    VOP_POST_CSC_HD,
    VOP_POST_CSC_JPEG,
} eVOP_PostCSCMode;

typedef enum vop_data_format {
    VOP_FMT_ARGB8888 = 0,
    VOP_FMT_RGB888,
    VOP_FMT_RGB565,
    VOP_FMT_RGB444,
    VOP_FMT_YUV420SP,
    VOP_FMT_YUV422SP,
    VOP_FMT_YUV444SP,
    VOP_FMT_YVYU422,
    VOP_FMT_VYUY422,
    VOP_FMT_YUV420SP_4 = 0x14,
    VOP_FMT_YUV422SP_4,
    VOP_FMT_YUV444SP_4,
    VOP_FMT_YVYU422_4,
    VOP_FMT_VYUY422_4,
    VOP_FMT_1BPP = 0x20,
    VOP_FMT_2BPP,
    VOP_FMT_4BPP,
    VOP_FMT_8BPP,
} eVOP_DataFormat;

struct CRTC_WIN_STATE {
    bool winEn;
    uint8_t winId;
    uint8_t zpos;
    uint8_t format;
    uint32_t yrgbAddr;
    uint32_t cbcrAddr;
    uint8_t rbSwap;
    uint16_t xVir;
    uint16_t crtcX;
    uint16_t crtcY;
    uint16_t crtcW;
    uint16_t crtcH;

    uint16_t xLoopOffset;
    uint16_t yLoopOffset;

    bool alphaEn;
    uint8_t alphaMode;
    uint8_t alphaPreMul;
    uint8_t alphaSatMode;
    uint8_t globalAlphaValue;
    uint32_t *lut;
};

struct VOP_BCSH_INFO {
    uint16_t brightness;
    uint16_t contrast;
    uint16_t satCon;
    uint16_t hueSin;
    uint16_t hueCos;
};

struct VOP_GAMMA_COE_INFO {
    bool gammaCoeEnable;
    uint32_t gammaCoeWord[VOP_GAMMA_SIZE];
};

struct VOP_POST_SCALE_INFO {
    uint16_t srcX;
    uint16_t srcY;
    uint16_t srcW;
    uint16_t srcH;

    uint16_t dstX;
    uint16_t dstY;
    uint16_t dstW;
    uint16_t dstH;
    bool postScaleEn;
    eVOP_PostSclMode postSclHmode;
    eVOP_PostSclMode postSclVmode;
};

struct VOP_POST_CSC_INFO {
    bool postCscEn;
    eVOP_PostCSCMode postCscMode;
};

struct VOP_COLOR_MATRIX_INFO {
    bool colorMatrixEn;
    uint32_t colorMatrixCoe[VOP_COLOR_MATRIX_SIZE];
};

struct VOP_POST_CLIP_INFO {
    bool postClipEn;
    uint8_t postYThres;
};

/** @} */
/***************************** Function Declare ******************************/
HAL_Status HAL_VOP_SetPlane(struct VOP_REG *pReg,
                            struct CRTC_WIN_STATE *pWinState,
                            struct DISPLAY_MODE_INFO *pModeInfo);

uint32_t HAL_VOP_GetScanLine(struct VOP_REG *pReg);
uint8_t HAL_VOP_CommitPrepare(struct VOP_REG *pReg);
HAL_Status HAL_VOP_Commit(struct VOP_REG *pReg);
HAL_Status HAL_VOP_PowerOn(struct VOP_REG *pReg);
HAL_Status HAL_VOP_PowerOff(struct VOP_REG *pReg);
HAL_Status HAL_VOP_EnableFsIrq(struct VOP_REG *pReg);
HAL_Status HAL_VOP_DisableFsIrq(struct VOP_REG *pReg);
HAL_Status HAL_VOP_EnableLineIrq(struct VOP_REG *pReg,
                                 uint32_t lineFlag0, uint32_t lineFlag1);
HAL_Status HAL_VOP_DisableLineIrq(struct VOP_REG *pReg);
HAL_Status HAL_VOP_EnableDebugIrq(struct VOP_REG *pReg);
HAL_Status HAL_VOP_DisableDebugIrq(struct VOP_REG *pReg);
HAL_Status HAL_VOP_IrqHandler(struct VOP_REG *pReg);
HAL_Status HAL_VOP_NocQosInit(struct VOP_REG *pReg, uint32_t nocQosValue);
HAL_Status HAL_VOP_NocHurryInit(struct VOP_REG *pReg, uint32_t hurryValue,
                                uint32_t hurryThreshold);
HAL_Status HAL_VOP_AxiOutstandInit(struct VOP_REG *pReg, uint32_t outStandNum);
HAL_Status HAL_VOP_Init(struct VOP_REG *pReg,
                        struct DISPLAY_MODE_INFO *pModeInfo);
HAL_Status HAL_VOP_DeInit(struct VOP_REG *pReg);
HAL_Status HAL_VOP_ModeInit(struct VOP_REG *pReg,
                            struct DISPLAY_MODE_INFO *pModeInfo,
                            struct VOP_POST_SCALE_INFO *pPostScaleInfo);
HAL_Status HAL_VOP_PostScaleInit(struct VOP_REG *pReg,
                                 struct DISPLAY_MODE_INFO *pModeInfo,
                                 struct VOP_POST_SCALE_INFO *pPostScaleInfo);
HAL_Status HAL_VOP_PostBCSH(struct VOP_REG *pReg,
                            struct VOP_BCSH_INFO *pBCSHInfo);
HAL_Status HAL_VOP_PostGammaInit(struct VOP_REG *pReg,
                                 struct VOP_GAMMA_COE_INFO *pGammaInfo);
HAL_Status HAL_VOP_PostCSCInit(struct VOP_REG *pReg,
                               struct VOP_POST_CSC_INFO *pPostCSCInfo);
HAL_Status HAL_VOP_PostColorMatrixInit(struct VOP_REG *pReg,
                                       struct VOP_COLOR_MATRIX_INFO *pColorMatrixInfo);
HAL_Status HAL_VOP_PostClipInit(struct VOP_REG *pReg,
                                struct VOP_POST_CLIP_INFO *pClipInfo);
HAL_Status HAL_VOP_PolarityInit(struct VOP_REG *pReg,
                                struct DISPLAY_MODE_INFO *pModeInfo,
                                uint16_t ConnectorType);
HAL_Status HAL_VOP_OutputInit(struct VOP_REG *pReg,
                              struct DISPLAY_MODE_INFO *pModeInfo,
                              uint16_t BusFormat);
#endif

/** @} */

/** @} */

/** @} */
