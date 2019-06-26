/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup PM_CPU_SLEEP
 *  @{
 */

/** @defgroup How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The PM_CPU_SLEEP driver can be used as follows:

 (#) Invoke HAL_NVIC_SuspendSave when NVIC needs to be save.
 (#) Invoke HAL_NVIC_ResumeRestore when NVIC needs to be resume.
 (#) Invoke HAL_CPU_SuspendSave when cpu may need save some info.

 @endverbatim
 @} */

#include "hal_base.h"

#if defined(HAL_PM_CPU_SLEEP_MODULE_ENABLED)
#if defined(__CM3_REV) || defined(__CM4_REV)

/********************* Private MACRO Definition ******************************/

#define NVIC_EXT_ISER_NUM (8)
#define NVIC_EXT_IP_NUM   (240)

/********************* Private Structure Definition **************************/

struct NVIC_SAVE_S {
    uint32_t iser[NVIC_EXT_ISER_NUM];/* Interrupt Set Enable Register */
    uint32_t icer[NVIC_EXT_ISER_NUM];/* Interrupt Clear Enable Register */
    uint8_t ip[NVIC_EXT_IP_NUM]; /* Interrupt Priority Register */
    uint32_t pg;  /* Interrupt Priority Group Register */
};

/********************* Private Variable Definition ***************************/

static struct NVIC_SAVE_S nvicSave;
static NVIC_Type *pnvic = NVIC;

/********************* Private Function Definition ***************************/

/** @defgroup PM_CPU_SLEEP_Exported_Functions_Group5 Other Functions
 *  @{
 */

/**
 * @brief  save nvic registers for resume nvic.
 * @return null
 */
void HAL_NVIC_SuspendSave(void)
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
void HAL_NVIC_ResumeRestore(void)
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

/** @} */

#endif /* __CM3_REV || __CM4_REV */
#endif /* HAL_PM_CPU_SLEEP_MODULE_ENABLED */

/** @} */

/** @} */
