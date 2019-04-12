/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

#include "hal_base.h"

#ifdef HAL_PM_MODULE_ENABLED

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

/** @addtogroup PM
 *  @{
 */

/** @defgroup How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The PM driver can be used as follows:

 (#) Invoke HAL_SYS_SuspendEnter when system will enter suspend.

 @endverbatim
 @} */

#define NVIC_EXT_ISER_NUM (8)
#define NVIC_EXT_IP_NUM   (240)

struct NVIC_REGS {
    __IO uint32_t ISER[8];
    uint32_t RESERVED0[24];
    __IO uint32_t ICER[8];
    uint32_t RSERVED1[24];
    __IO uint32_t ISPR[8];
    uint32_t RESERVED2[24];
    __IO uint32_t ICPR[8];
    uint32_t RESERVED3[24];
    __IO uint32_t IABR[8];
    uint32_t RESERVED4[56];
    __IO uint8_t IP[240];
    uint32_t RESERVED5[644];
    __IO uint32_t STIR;
};

struct NVIC_SAVE_S {
    uint32_t iser[NVIC_EXT_ISER_NUM];/* Interrupt Set Enable Register */
    uint32_t icer[NVIC_EXT_ISER_NUM];/* Interrupt Clear Enable Register */
    uint8_t ip[NVIC_EXT_IP_NUM]; /* Interrupt Priority Register */
    uint32_t pg;  /* Interrupt Priority Group Register */
};

static struct NVIC_SAVE_S nvicSave;
static struct NVIC_REGS *pnvic = (struct NVIC_REGS *)NVIC_BASE;

/**
 * @brief  save nvic registers for resume nvic.
 * @return null
 */
static void NVIC_SuspendSave(void)
{
    int i;

    for (i = 0; i < NVIC_EXT_ISER_NUM; i++)
        nvicSave.iser[i] = pnvic->ISER[i];

    for (i = 0; i < NVIC_EXT_ISER_NUM; i++)
        nvicSave.icer[i] = pnvic->ICER[i];

    for (i = 0; i < NVIC_EXT_IP_NUM; i++)
        nvicSave.ip[i] = pnvic->IP[i];

    nvicSave.pg = NVIC_GetPriorityGrouping();
}

/**
 * @brief  resume nvic registers.
 * @return null
 */
static void NVIC_SuspendResume(void)
{
    int i;

    NVIC_SetPriorityGrouping(nvicSave.pg);
    for (i = 0; i < NVIC_EXT_IP_NUM; i++)
        pnvic->IP[i] = nvicSave.ip[i];

    for (i = 0; i < NVIC_EXT_ISER_NUM; i++)
        pnvic->ICER[i] = nvicSave.icer[i];

    for (i = 0; i < NVIC_EXT_ISER_NUM; i++)
        pnvic->ISER[i] = nvicSave.iser[i];
}

static int SOC_SuspendEnter(uint32_t flag)
{
    HAL_DCACHE_CleanInvalidate();
    HAL_DCACHE_Disable();
    asm volatile ("wfi");

    return HAL_OK;
}

/** @defgroup PM_Exported_Functions_Group5 Other Functions
 *  @{
 */

/**
 * @brief  it is for saving cpu's register.
 * @param  ptr: base addr for saving
 * @param  ptrsz: size of the mem for saving
 * @param  sp: the system stack needed be saved
 * @param  ptrSave: save the param ptr.
 * @return null
 */
void HAL_CPU_SuspendSave(uint32_t *ptr, uint32_t ptrsz, uint32_t sp, uint32_t *ptrSave)
{
    *ptrSave = (uint32_t)ptr;
    *ptr++ = sp;
    *ptr++ = (uint32_t)HAL_CPU_ArchResume + 1;
    HAL_CPU_ArchSuspend(ptr);
}

/**
 * @brief  it is the enterpoint for suspend invoked by a os's powermanager implement.
 * @param  flag: flag for controlling
 * @return HAL_Status
 */
int HAL_SYS_Suspend(uint32_t flag)
{
    NVIC_SuspendSave();
    HAL_CPU_SuspendEnter(flag, SOC_SuspendEnter);
    HAL_DCACHE_Enable();
    NVIC_SuspendResume();

    return HAL_OK;
}

/** @} */

#endif

/** @} */

/** @} */
