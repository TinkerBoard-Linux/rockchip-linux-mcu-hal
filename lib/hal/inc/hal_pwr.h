/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

/** @addtogroup PWR
 *  @{
 */

#ifndef _HAL_PWR_H_
#define _HAL_PWR_H_

#include "hal_def.h"

/** @defgroup PWR_Exported_Definition_Group1 Basic Definition
 *  @{
 */

/***************************** MACRO Definition ******************************/
typedef enum {
    PWR_ID_NULL = 0,
    PWR_ID_CORE,
    PWR_ID_LOG,
    PWR_ID_DSP_CORE,
    PWR_ID_VCC_MIPI,
    PWR_ID_VCC_AUDIO,
    PWR_ID_DSP_VCC_MIPI,
    PWR_ID_MAX,
} ePWR_ID;

typedef enum {
    PWR_CTRL_VOLT_RUN = 0, /* run mode voltage */
    PWR_CTRL_VOLT_SSPD, /* suspend mode voltage */
    PWR_CTRL_PWR_EN, /* enable a regulator */
    PWR_CTRL_VOLT_ST, /* get a regulator state */
    PWR_CTRL_EN_VOLT_END
} PWR_CtrlType;

#define DESC_FLAG_LINEAR(flag) (PWR_FLG_LINEAR |PWR_CTRL_VOLT_RUN | flag)

#define PWR_DESC_REG_SHIFT_RUN(reg, sft) \
    .preg[PWR_CTRL_VOLT_RUN] = (uint32_t *)(reg),\
    .shift[PWR_CTRL_VOLT_RUN] = (sft)

#define PWR_DESC_REG_SHIFT_SSPD(reg, sft) \
    .preg[PWR_CTRL_VOLT_SSPD] = (uint32_t *)(reg),\
    .shift[PWR_CTRL_VOLT_SSPD] = (sft)

#define PWR_DESC_REG_SHIFT_EN(reg, sft) \
    .preg[PWR_CTRL_PWR_EN] = (uint32_t *)(reg),\
    .shift[PWR_CTRL_PWR_EN] = (sft)

#define PWR_DESC_REG_SHIFT_ST(reg, sft) \
    .preg[PWR_CTRL_VOLT_ST] = (uint32_t *)(reg),\
    .shift[PWR_CTRL_VOLT_ST] = (sft)

#define PWR_DESC_LINEAR_VOLT(min, max, step) \
    .voltCnt = (((max)-(min))/(step)) + 1,\
    .minVolt = (min),\
    .volt_list = {\
        .stepVolt = (step)\
    }

#define PWR_FLG_LINEAR   (1 << PWR_CTRL_EN_VOLT_END)
#define PWR_FLG_FIXED    (1 << PWR_FLG_LINEAR)
#define PWR_FLG_ALWAYSON (1 << PWR_FLG_FIXED)
/***************************** Structure Definition **************************/
union U_PWR_VOLT_LIST {
    int stepVolt;
    const uint32_t *voltTable;
};

struct PWR_PREG_LIST {
    uint32_t *preg;
    uint32_t *psspdReg;
    uint32_t *penReg;
    uint32_t *pstReg;
};

struct PWR_SHIFT_LIST {
    uint8_t shift;
    uint8_t sspdShift;
    uint8_t enShift;
    uint8_t stShift;
};

union U_PWR_PREG_LIST {
    uint32_t *preg[PWR_CTRL_EN_VOLT_END];
    struct PWR_PREG_LIST regList;
};

union U_PWR_SHIFT_LIST {
    uint8_t shift[PWR_CTRL_EN_VOLT_END];
    struct PWR_SHIFT_LIST shiftList;
};

struct PWR_CTRL_INFO {
    uint32_t pwrId : 8;
    uint32_t enCnt : 4;
};

struct PWR_DESC {
    uint16_t flag;
    struct PWR_CTRL_INFO info;
    uint8_t voltMask;
    uint8_t voltCnt;
    uint32_t *preg[PWR_CTRL_EN_VOLT_END];
    uint8_t shift[PWR_CTRL_EN_VOLT_END];
    uint32_t minVolt;
    union  U_PWR_VOLT_LIST volt_list;
};

/** @} */

/***************************** Function Declare ******************************/
int HAL_PWR_GetEnableState(struct PWR_DESC *desc);
int HAL_PWR_GetVoltage(struct PWR_DESC *desc);
int HAL_PWR_GetVoltageSuspend(struct PWR_DESC *desc);
int HAL_PWR_GetVoltageReal(struct PWR_DESC *desc);
int HAL_PWR_SetVoltage(struct PWR_DESC *desc, int volt);
int HAL_PWR_SetVoltageSuspend(struct PWR_DESC *desc, int volt);
int HAL_PWR_Enable(struct PWR_DESC *desc);
int HAL_PWR_Disable(struct PWR_DESC *desc);
int HAL_PWR_Init(struct PWR_DESC *descs, uint32_t cnt);
void HAL_PWR_DeInit(void);
struct PWR_DESC *HAL_PWR_GetDescByPwrId(ePWR_ID pwrId);

#endif

/** @} */

/** @} */
