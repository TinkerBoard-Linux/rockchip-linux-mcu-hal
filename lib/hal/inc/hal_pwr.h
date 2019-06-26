/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RK_HAL_Driver
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
    PWR_CTRL_MAX
} PWR_CtrlType;

#define PWR_FLG_VOLT_RUN  HAL_BIT(PWR_CTRL_VOLT_RUN)
#define PWR_FLG_VOLT_SSPD HAL_BIT(PWR_CTRL_VOLT_SSPD)
#define PWR_FLG_PWR_EN    HAL_BIT(PWR_CTRL_PWR_EN)
#define PWR_FLG_VOLT_ST   HAL_BIT(PWR_CTRL_VOLT_ST)
#define PWR_FLG_LINEAR    HAL_BIT(PWR_CTRL_MAX)
#define PWR_FLG_FIXED     (PWR_FLG_LINEAR << 1)
#define PWR_FLG_ALWAYSON  (PWR_FLG_FIXED << 1)
#define PWR_FLG_INTREG    (PWR_FLG_ALWAYSON << 1)
#define PWR_FLG_I2C8      (PWR_FLG_INTREG << 1)
#define PWR_FLG_I2C16     (PWR_FLG_I2C8 << 1)

#define DESC_FLAG_LINEAR(flag) (PWR_FLG_LINEAR | PWR_FLG_INTREG | flag)

#ifdef HAL_PWR_INTBUS_MODULE_ENABLED
#define PWR_DESC_REG_SHIFT_RUN(reg, sft)               \
    .regs.preg[PWR_CTRL_VOLT_RUN] = (uint32_t *)(reg), \
    .shift[PWR_CTRL_VOLT_RUN] = (sft)

#define PWR_DESC_REG_SHIFT_SSPD(reg, sft)               \
    .regs.preg[PWR_CTRL_VOLT_SSPD] = (uint32_t *)(reg), \
    .shift[PWR_CTRL_VOLT_SSPD] = (sft)

#define PWR_DESC_REG_SHIFT_EN(reg, sft)              \
    .regs.preg[PWR_CTRL_PWR_EN] = (uint32_t *)(reg), \
    .shift[PWR_CTRL_PWR_EN] = (sft)

#define PWR_DESC_REG_SHIFT_ST(reg, sft)               \
    .regs.preg[PWR_CTRL_VOLT_ST] = (uint32_t *)(reg), \
    .shift[PWR_CTRL_VOLT_ST] = (sft)
#endif

#ifdef HAL_PWR_I2C8_MODULE_ENABLED
#define PWR_DESC_I2C8_SHIFT_RUN(reg, sft)                  \
    .regs.i2c8.reg[PWR_CTRL_VOLT_RUN] = (uint32_t *)(reg), \
    .shift[PWR_CTRL_VOLT_RUN] = (sft)

#define PWR_DESC_I2C8_SHIFT_SSPD(reg, sft)                  \
    .regs.i2c8.reg[PWR_CTRL_VOLT_SSPD] = (uint32_t *)(reg), \
    .shift[PWR_CTRL_VOLT_SSPD] = (sft)

#define PWR_DESC_I2C8_SHIFT_EN(reg, sft)                 \
    .regs.i2c8.reg[PWR_CTRL_PWR_EN] = (uint32_t *)(reg), \
    .shift[PWR_CTRL_PWR_EN] = (sft)

#define PWR_DESC_I2C8_SHIFT_ST(reg, sft)             \
    .regs.reg[PWR_CTRL_VOLT_ST] = (uint32_t *)(reg), \
    .shift[PWR_CTRL_VOLT_ST] = (sft)
#endif

#define PWR_DESC_LINEAR_VOLT(min, max, step) \
    .voltCnt = (((max)-(min))/(step)) + 1,   \
    .minVolt = (min),                        \
    .volt_list = {                           \
        .stepVolt = (step)                   \
    }

/***************************** Structure Definition **************************/
union U_PWR_VOLT_LIST {
    int stepVolt;
    const uint32_t *voltTable;
};

struct PWR_REG_DATA_I2C_8 {
    uint8_t i2cAddr;
    uint8_t reg[PWR_CTRL_MAX];
};

struct PWR_REG_DATA_I2C_16 {
    uint16_t i2cAddr;
    uint16_t reg[PWR_CTRL_MAX];
};

union U_PWR_REGS_DATA_CTRL {
#ifdef HAL_PWR_INTBUS_MODULE_ENABLED
    uint32_t *preg[PWR_CTRL_MAX]; /* for internal bus reg */
#endif

#ifdef HAL_PWR_I2C8_MODULE_ENABLED
    struct PWR_REG_DATA_I2C_8 i2c8; /* for 8 bits i2c interface */
#endif
};

struct PWR_CTRL_INFO {
    uint16_t pwrId : 8;
    uint16_t enCnt : 4;
};

struct PWR_DESC {
    struct PWR_CTRL_INFO info;
    uint16_t flag;
    uint8_t voltMask;
    uint8_t voltCnt;
    union U_PWR_REGS_DATA_CTRL regs;
    uint8_t shift[PWR_CTRL_MAX];
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
