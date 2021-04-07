/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2020-2021 Rockchip Electronics Co., Ltd.
 */

#include "hal_base.h"

#ifdef HAL_GIC_MODULE_ENABLED

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup GIC
 *  @{
 */

/** @defgroup GIC_How_To_Use How To Use
 *  @{

 The GIC driver can be used as follows:
 - Invoke HAL_GIC_Init() to initialize GIC base address and config GIC.
 - Invoke HAL_GIC_Disable() to disable a IRQ.
 - Invoke HAL_GIC_Enable() to enable a IRQ.
 - Invoke HAL_GIC_GetEnableState() to get the enable state of a IRQ.
 - Invoke HAL_GIC_GetActiveIRQ() to get the IRQ ID of the active IRQ.
 - Invoke HAL_GIC_EndOfInterrupt() to end the active IRQ.
 - Invoke HAL_GIC_SetPending() to make a IRQ PENDING.
 - Invoke HAL_GIC_GetPending() to get the Pending state of a IRQ.
 - Invoke HAL_GIC_GetIRQStatus() to get the Pending and active status of a IRQ.
 - Invoke HAL_GIC_ClearPending() to clear the Pending state of a IRQ.
 - Invoke HAL_GIC_SetPriority() to set priority for a IRQ.
 - Invoke HAL_GIC_SetPriorityMask() to set the priority mask.
 - Invoke HAL_GIC_GetPriorityMask() to get the priority mask.
 - Invoke HAL_GIC_GetPriority() to get the priority value of a IRQ.
 - Invoke HAL_GIC_SetIRouter() to set the routting affinity value of a IRQ.
 - Invoke HAL_GIC_SetHandler() to set the irq handler callback for a IRQ.
 - Invoke HAL_GIC_GetHandler() to get the irq handler callback for a IRQ.

 @} */

/** @defgroup GIC_Private_Definition Private Definition
 *  @{
 */
/********************* Private MACRO Definition ******************************/
#define RESERVED(N, T)         T RESERVED##N;
#define GICR_CPU_BASE(cpu)     (GIC_REDISTRIBUTOR_BASE + (0x20000 * (cpu)))
#define GICR_SGI_CPU_BASE(cpu) (GICR_CPU_BASE(cpu) + 0x10000)

/********************* Private Structure Definition **************************/
struct  GIC_DISTRIBUTOR_REG {
    __IO uint32_t CTLR;               /* brief  Offset: 0x000 (R/W) Distributor Control Register */
    __I uint32_t TYPER;               /* brief  Offset: 0x004 (R/ ) Interrupt Controller Type Register */
    __I uint32_t IIDR;                /* brief  Offset: 0x008 (R/ ) Distributor Implementer Identification Register */
    RESERVED(0, uint32_t)
    __IO uint32_t STATUSR;            /* brief  Offset: 0x010 (R/W) Error Reporting Status Register, optional */
    RESERVED(1[11], uint32_t)
    __O uint32_t SETSPI_NSR;          /* brief  Offset: 0x040 ( /W) Set SPI Register */
    RESERVED(2, uint32_t)
    __O uint32_t CLRSPI_NSR;          /* brief  Offset: 0x048 ( /W) Clear SPI Register */
    RESERVED(3, uint32_t)
    __O uint32_t SETSPI_SR;           /* brief  Offset: 0x050 ( /W) Set SPI, Secure Register */
    RESERVED(4, uint32_t)
    __O uint32_t CLRSPI_SR;           /* brief  Offset: 0x058 ( /W) Clear SPI, Secure Register */
    RESERVED(5[9], uint32_t)
    __IO uint32_t IGROUPR[32];        /* brief  Offset: 0x080 (R/W) Interrupt Group Registers */
    __IO uint32_t ISENABLER[32];      /* brief  Offset: 0x100 (R/W) Interrupt Set-Enable Registers */
    __IO uint32_t ICENABLER[32];      /* brief  Offset: 0x180 (R/W) Interrupt Clear-Enable Registers */
    __IO uint32_t ISPENDR[32];        /* brief  Offset: 0x200 (R/W) Interrupt Set-Pending Registers */
    __IO uint32_t ICPENDR[32];        /* brief  Offset: 0x280 (R/W) Interrupt Clear-Pending Registers */
    __IO uint32_t ISACTIVER[32];      /* brief  Offset: 0x300 (R/W) Interrupt Set-Active Registers */
    __IO uint32_t ICACTIVER[32];      /* brief  Offset: 0x380 (R/W) Interrupt Clear-Active Registers */
    __IO uint32_t IPRIORITYR[255];    /* brief  Offset: 0x400 (R/W) Interrupt Priority Registers */
    RESERVED(6, uint32_t)
    __IO uint32_t ITARGETSR[255];     /* brief  Offset: 0x800 (R/W) Interrupt Targets Registers */
    RESERVED(7, uint32_t)
    __IO uint32_t ICFGR[64];          /* brief  Offset: 0xC00 (R/W) Interrupt Configuration Registers */
    __IO uint32_t IGRPMODR[32];       /* brief  Offset: 0xD00 (R/W) Interrupt Group Modifier Registers */
    RESERVED(8[32], uint32_t)
    __IO uint32_t NSACR[64];          /* brief  Offset: 0xE00 (R/W) Non-secure Access Control Registers */
    __O uint32_t SGIR;                /* brief  Offset: 0xF00 ( /W) Software Generated Interrupt Register */
    RESERVED(9[3], uint32_t)
    __IO uint32_t CPENDSGIR[4];       /* brief  Offset: 0xF10 (R/W) SGI Clear-Pending Registers */
    __IO uint32_t SPENDSGIR[4];       /* brief  Offset: 0xF20 (R/W) SGI Set-Pending Registers */
    RESERVED(10[5236], uint32_t)
    __IO uint64_t IROUTER[988];       /* brief  Offset: 0x6100(R/W) Interrupt Routing Registers */
};

struct GIC_REDISTRIBUTOR_REG {
    __IO uint32_t CTLR;            /* brief  Offset: 0x0 (R/W) Redistributor Control Register */
    __IO uint32_t IIDR;            /* brief  Offset: 0x4 (RO) Implementer Identification Register */
    __IO uint32_t TYPER;           /* brief  Offset: 0x8 (RO) Redistributor Type Register */
    __IO uint32_t STATUSR;         /* brief  Offset: 0x10 (R/W) Error Reporting Status Register */
    __IO uint32_t WAKER;           /* brief  Offset: 0x14 (R/W) Redistributor Wake Register */
};

struct GIC_REDISTRIBUTOR_SGI_REG {
    RESERVED(0[32], uint32_t)
    __IO uint32_t IGROUPR0;        /* brief  Offset: 0x080 (R/W) Interrupt Group Registers */
    RESERVED(1[31], uint32_t)
    __IO uint32_t ISENABLER0;      /* brief  Offset: 0x100 (R/W) Interrupt Set-Enable Registers */
    RESERVED(2[31], uint32_t)
    __IO uint32_t ICENABLER0;      /* brief  Offset: 0x180 (R/W) Interrupt Clear-Enable Registers */
    RESERVED(3[31], uint32_t)
    __IO uint32_t ISPENDR0;        /* brief  Offset: 0x200 (R/W) Interrupt Set-Pending Registers */
    RESERVED(4[31], uint32_t)
    __IO uint32_t ICPENDR0;        /* brief  Offset: 0x280 (R/W) Interrupt Clear-Pending Registers */
    RESERVED(5[31], uint32_t)
    __IO uint32_t ISACTIVER0;      /* brief  Offset: 0x300 (R/W) Interrupt Set-Active Registers */
    RESERVED(6[31], uint32_t)
    __IO uint32_t ICACTIVER0;      /* brief  Offset: 0x380 (R/W) Interrupt Clear-Active Registers */
    RESERVED(7[31], uint32_t)
    __IO uint32_t IPRIORITYR[256]; /* brief  Offset: 0x400 (R/W) Interrupt Priority Registers */
    RESERVED(8[256], uint32_t)
    __IO uint32_t ICFGR0;          /* brief  Offset: 0xC00 (R/W) Interrupt Configuration Registers */
    __IO uint32_t ICFGR1;          /* brief  Offset: 0xC04 (R/W) Interrupt Configuration Registers */
    RESERVED(9[62], uint32_t)
    __IO uint32_t IGRPMODR0;       /* brief  Offset: 0xD00 (R/W) Interrupt Group Modifier Registers */
    RESERVED(10[63], uint32_t)
    __IO uint32_t NSACR[64];       /* brief  Offset: 0xE00 (R/W) Non-secure Access Control Registers */
};

/********************* Private Variable Definition ***************************/

static struct GIC_IRQ_AMP_CTRL *p_ampCtrl;

static GIC_IRQHandler g_IRQTable[NUM_INTERRUPTS] = { 0 };

static struct GIC_DISTRIBUTOR_REG *pGICD = (struct GIC_DISTRIBUTOR_REG *)GIC_DISTRIBUTOR_BASE;
static struct GIC_REDISTRIBUTOR_REG *pGICR;
static struct GIC_REDISTRIBUTOR_SGI_REG *pGICRSGI;

/********************* Private Function Definition ***************************/
static inline uint32_t GIC_GetIccCtlr(void)
{
    uint32_t val;

    __get_CP(15, 0, val, 12, 12, 4);

    return val;
}

static inline void GIC_SetIccCtlr(uint32_t val)
{
    __set_CP(15, 0, val, 12, 12, 4);
}

static inline uint32_t GIC_GetIccIGrpen1_EL1(void)
{
    uint32_t val;

    __get_CP(15, 0, val, 12, 12, 7);

    return val;
}

static uint32_t GIC_SetIccIGrpen1_EL1(uint32_t val)
{
    __set_CP(15, 0, val, 12, 12, 7);
}

static uint32_t GIC_GetIccIar1_EL1(void)
{
    uint32_t val;

    __get_CP(15, 0, val, 12, 12, 0);

    return val;
}

static uint32_t GIC_SetIccEoir1_EL1(uint32_t val)
{
    __set_CP(15, 0, val, 12, 12, 1);
}

static inline uint32_t GIC_GetIccPmr_EL1(void)
{
    uint32_t val;

    __get_CP(15, 0, val, 4, 6, 0);

    return val;
}

static inline uint32_t GIC_SetIccPmr_EL1(uint32_t val)
{
    __set_CP(15, 0, val, 4, 6, 0);
}

static inline uint32_t GIC_GetIccbpr1(void)
{
    uint32_t val;

    __get_CP(15, 0, val, 12, 12, 3);

    return val;
}
static inline uint32_t GIC_SetIccbpr1(uint32_t val)
{
    __set_CP(15, 0, val, 12, 12, 3);
}

static inline uint32_t GIC_GetIccHppir1_EL1(void)
{
    uint32_t val;

    __get_CP(15, 0, val, 12, 12, 2);

    return val;
}

static inline void GIC_EnableIRQ(uint32_t irq)
{
    if (irq > 31) {
        pGICD->ISENABLER[irq / 32U] = 1U << (irq % 32U);
    } else {
        pGICRSGI->ISENABLER0 = 1U << (irq % 32U);
    }
}

static inline void GIC_DisableIRQ(uint32_t irq)
{
    HAL_ASSERT(irq < NUM_INTERRUPTS);

    if (irq > 31) {
        pGICD->ICENABLER[irq / 32] = 1 << (irq % 32);
    } else {
        pGICRSGI->ICENABLER0 = 1 << (irq % 32);
    }
}

static inline uint32_t GIC_GetEnableState(uint32_t irq)
{
    HAL_ASSERT(irq < NUM_INTERRUPTS);

    if (irq > 31) {
        return (pGICD->ISENABLER[irq / 32] >> (irq % 32)) & 1;
    } else {
        return (pGICRSGI->ISENABLER0 >> (irq % 32)) & 1;
    }
}

static inline uint32_t GIC_GetActiveIRQ(void)
{
    uint32_t irq;

    irq = GIC_GetIccIar1_EL1();
    __DSB();

    return irq;
}

static inline void GIC_EndOfInterrupt(uint32_t irq)
{
    irq &= 0x3FFU;
    HAL_ASSERT(irq < NUM_INTERRUPTS);

    GIC_SetIccEoir1_EL1(irq);
}

static inline void GIC_SetPending(uint32_t irq)
{
    HAL_ASSERT(irq < NUM_INTERRUPTS);

    if (irq > 31) {
        pGICD->ISPENDR[irq / 32] = 1 << (irq % 32);
    } else {
        pGICRSGI->ISPENDR0 = 1 << (irq % 32);
    }
}

static inline uint32_t GIC_GetPending(uint32_t irq)
{
    uint32_t pending;

    if (irq >= NUM_INTERRUPTS) {
        return HAL_INVAL;
    }

    if (irq > 31) {
        pending = (pGICD->ISPENDR[irq / 32] >> (irq % 32)) & 1;
    } else {
        pending = (pGICRSGI->ISPENDR0 >> (irq % 32)) & 1;
    }

    return pending;
}

static inline void GIC_ClearPending(uint32_t irq)
{
    int32_t status;

    HAL_ASSERT(irq < NUM_INTERRUPTS);

    if (irq > 31U) {
        pGICD->ICPENDR[irq / 32] = 1 << (irq % 32);
    } else {
        pGICRSGI->ICPENDR0 = 1 << (irq % 32);
    }
}

static inline uint32_t GIC_GetIRQStatus(uint32_t irq)
{
    uint32_t pending, active;

    if (irq >= NUM_INTERRUPTS) {
        return HAL_INVAL;
    }

    if (irq > 31U) {
        pending = (pGICD->ISPENDR[irq / 32U] >> (irq % 32U)) & 1UL;
        active = (pGICD->ISACTIVER[irq / 32U] >> (irq % 32U)) & 1UL;
    } else {
        pending = (pGICRSGI->ISPENDR0 >> (irq % 32U)) & 1UL;
        active = (pGICRSGI->ISACTIVER0 >> (irq % 32U)) & 1UL;
    }

    return ((active << 1U) | pending);
}

static inline void GIC_SetPriority(uint32_t irq, uint32_t priority)
{
    HAL_ASSERT(irq < NUM_INTERRUPTS);

    if (irq > 31) {
        uint32_t mask = pGICD->IPRIORITYR[irq / 4U] & ~(0xFFUL << ((irq % 4U) * 8U));
        pGICD->IPRIORITYR[irq / 4U] = mask | ((priority & 0xFFUL) << ((irq % 4U) * 8U));
    } else {
        uint32_t mask = pGICRSGI->IPRIORITYR[irq / 4U] & ~(0xFFUL << ((irq % 4U) * 8U));
        pGICRSGI->IPRIORITYR[irq / 4U] = mask | ((priority & 0xFFUL) << ((irq % 4U) * 8U));
    }
}

static inline uint32_t GIC_GetPriority(uint32_t irq)
{
    uint32_t priority;

    HAL_ASSERT(irq < NUM_INTERRUPTS);

    if (irq > 31) {
        return (pGICD->IPRIORITYR[irq / 4] >> ((irq % 4) * 8)) & 0xFF;
    } else {
        return (pGICRSGI->IPRIORITYR[irq / 4] >> ((irq % 4) * 8)) & 0xFF;
    }
}

static inline void GIC_SetPriorityMask(uint32_t priority)
{
    priority = priority & 0xFF;
    GIC_SetIccPmr_EL1(priority);
}

static inline uint32_t GIC_GetPriorityMask(void)
{
    return GIC_GetIccPmr_EL1();
}

static inline int32_t GIC_SetIRouter(uint32_t irq, uint32_t aff)
{
    HAL_ASSERT(irq < NUM_INTERRUPTS);

    pGICD->IROUTER[irq - 32] = aff;
}

static inline void GIC_SetConfiguration(uint32_t irq, uint32_t int_config)
{
    uint32_t icfgr = pGICD->ICFGR[irq / 16];
    uint32_t shift = (irq % 16) << 1;

    icfgr &= (~(3 << shift));
    icfgr |= (int_config << shift);

    if (irq > 31) {
        pGICD->ICFGR[irq / 16] = icfgr;
    } else if (irq > 15) {
        pGICRSGI->ICFGR1 = icfgr;
    } else {
        pGICRSGI->ICFGR0 = icfgr;
    }
}

static inline uint32_t GIC_GetConfiguration(uint32_t irq)
{
    uint32_t icfgr;

    if (irq > 31) {
        icfgr = pGICD->ICFGR[irq / 16];
    } else if (irq > 15) {
        icfgr = pGICRSGI->ICFGR1;
    } else {
        icfgr = pGICRSGI->ICFGR0;
    }

    return icfgr >> ((irq % 16) << 1);
}

static inline void GIC_SetBinaryPoint(uint32_t binary_point)
{
    GIC_SetIccbpr1(binary_point);
}

static inline uint32_t GIC_GetBinaryPoint(void)
{
    return GIC_GetIccbpr1();
}

static inline void GIC_EnableInterface(void)
{
    GIC_SetIccIGrpen1_EL1(1);
}

static inline void GIC_DisableInterface(void)
{
    GIC_SetIccIGrpen1_EL1(0);
}

static inline void GIC_EnableDistributor(void)
{
    pGICD->CTLR |= 1;
}

static inline void GIC_DisableDistributor(void)
{
    pGICD->CTLR &= ~1;
}

static inline uint32_t GIC_DistributorInfo(void)
{
    return pGICD->TYPER;
}

static inline void GIC_RedistInitBase(uint32_t cpu)
{
    pGICR = (struct GIC_REDISTRIBUTOR_REG *)GICR_CPU_BASE(cpu);
    pGICRSGI = (struct GIC_REDISTRIBUTOR_SGI_REG *)GICR_SGI_CPU_BASE(cpu);
}
static void GIC_DistInit(uint32_t initGicd, uint32_t amp, uint32_t priority, uint32_t aff)
{
    uint32_t i;
    uint32_t numIrq = 0U;
    uint32_t priorityField;

    if (!initGicd) {
        GIC_EnableDistributor();

        return;
    }

    GIC_DisableDistributor();
    numIrq = 32 * ((GIC_DistributorInfo() & 0x1F) + 1);

    if (!amp) {
        HAL_GIC_SetPriority(0, 0xFF);
        priorityField = GIC_GetPriority(0);
        priorityField /= 2;
        aff = 0;
    } else {
        priorityField = priority;
    }

    for (i = 32; i < numIrq; i++) {
        GIC_DisableIRQ(i);
        GIC_SetConfiguration(i, 0);
        GIC_SetPriority(i, priorityField);
        GIC_SetIRouter(i, aff);
    }

    GIC_EnableDistributor();
}

static void GIC_CPUInterfaceInit(uint32_t amp, uint32_t priority)
{
    uint32_t i, ctlr;
    uint32_t priorityField;

    GIC_DisableInterface();

    if (!amp) {
        HAL_GIC_SetPriority(0, 0xFF);
        priorityField = GIC_GetPriority(0);
        priorityField /= 2;
    } else {
        priorityField = priority;
    }

    for (i = 0U; i < 32; i++) {
        if (i > 15) {
            GIC_SetConfiguration(i, 0);
        }
        GIC_DisableIRQ(i);
        GIC_SetPriority(i, priorityField);
    }

    ctlr = GIC_GetIccCtlr();
#ifdef HAL_GIC_PREEMPT_FEATURE_ENABLED
    ctlr |= 0x2;
#else
    ctlr &= ~0x2;
#endif
    GIC_SetIccCtlr(ctlr);

    GIC_EnableInterface();
    GIC_SetBinaryPoint(0);
    GIC_SetPriorityMask(0xFF);
}

static void GIC_EnableRedist(uint32_t enable)
{
    if (enable) {
        pGICR->WAKER &= ~GICR_WAKER_PROCESSOR_SLEEP;
        while ((pGICR->WAKER & GICR_WAKER_CHILDREN_ASLEEP) != 0) {
            ;
        }
    } else {
        pGICR->WAKER |= GICR_WAKER_PROCESSOR_SLEEP;
        while ((pGICR->WAKER & GICR_WAKER_CHILDREN_ASLEEP) == 0) {
            ;
        }
    }
}

static void GIC_Enable(uint32_t initGicd, uint32_t amp, uint32_t priority, uint32_t aff)
{
    GIC_DistInit(initGicd, amp, priority, aff);
    GIC_EnableRedist(1);
    GIC_CPUInterfaceInit(amp, priority);
}

static void GIC_AMPConfigIRQs(struct GIC_AMP_IRQ_INIT_CFG *irqsCfg)
{
    struct GIC_AMP_IRQ_INIT_CFG *config;

    if (!p_ampCtrl) {
        return;
    }

    config = irqsCfg;
    if (!config) {
        return;
    }

    while (config->prio) {
        if ((config->irq >= 0) && (config->irq < NUM_INTERRUPTS)) {
            GIC_SetPriority(config->irq, config->prio);
        }
        config++;
    }
    ;
}

/** @} */

/********************* Public Function Definition ****************************/

/** @defgroup GIC_Exported_Functions_Group5 Other Functions
 *  @{
 */

/**
 * @brief  Enable a IRQ.
 * @param  irq: irq id.
 * @return HAL_Status.
 */
HAL_Status HAL_GIC_Enable(uint32_t irq)
{
#ifdef HAL_GIC_AMP_FEATURE_ENABLED
    uint32_t aff = __get_MPIDR() & MPIDR_AFFINITY_MASK;
#endif

    HAL_ASSERT(irq < NUM_INTERRUPTS);

#ifdef HAL_GIC_AMP_FEATURE_ENABLED
    GIC_SetIRouter(irq, aff);
#endif

    GIC_EnableIRQ(irq);

    return HAL_OK;
}

/**
 * @brief  Disable a IRQ.
 * @param  irq: irq id.
 * @return HAL_Status.
 */
HAL_Status HAL_GIC_Disable(uint32_t irq)
{
    GIC_DisableIRQ(irq);

    return HAL_OK;
}

/**
 * @brief  Get the enable state of a IRQ.
 * @param  irq: irq id.
 * @return 1 if enable, 0 if disable.
 */

uint32_t HAL_GIC_GetEnableState(uint32_t irq)
{
    return GIC_GetEnableState(irq);

    return HAL_OK;
}

/**
 * @brief  Get the irq id of the active IRQ.
 * @return irq id.
 */
uint32_t HAL_GIC_GetActiveIRQ(void)
{
    return GIC_GetActiveIRQ();

    return HAL_OK;
}

/**
 * @brief  End the active IRQ.
 * @param  irq: irq id.
 * @return HAL_Status.
 */
HAL_Status HAL_GIC_EndOfInterrupt(uint32_t irq)
{
    GIC_EndOfInterrupt(irq);

    return HAL_OK;
}

/**
 * @brief  Make a IRQ PENDING.
 * @param  irq id.
 * @return HAL_Status.
 */
HAL_Status HAL_GIC_SetPending(uint32_t irq)
{
    GIC_SetPending(irq);

    return HAL_OK;
}

/**
 * @brief  Get the Pending state of a IRQ.
 * @param  irq: irq id.
 * @return 1 if pending, 0 if not pending.
 */
int32_t HAL_GIC_GetPending(uint32_t irq)
{
    return GIC_GetPending(irq);
}

/**
 * @brief  Clear the Pending state of a IRQ.
 * @param  irq id.
 * @return HAL_Status.
 */
HAL_Status HAL_GIC_ClearPending(uint32_t irq)
{
    GIC_ClearPending(irq);

    return HAL_OK;
}

/**
 * @brief  Get the status for a given interrupt.
 * @param  irq: The interrupt to get status for.
 * @return 0 - not pending/active, 1 - pending, 2 - active, 3 - pending and active
 */
uint32_t HAL_GIC_GetIRQStatus(uint32_t irq)
{
    return GIC_GetIRQStatus(irq);
}

/**
 * @brief  Set priority for a IRQ.
 * @param  irq: irq id.
 * @param  priority: priority value.
 * @return HAL_Status.
 */
HAL_Status HAL_GIC_SetPriority(uint32_t irq, uint32_t priority)
{
    int32_t aff;

    aff = __get_MPIDR() & MPIDR_AFFINITY_MASK;
    if (p_ampCtrl->cpuAff != aff) {
        return HAL_INVAL;
    }
    GIC_SetPriority(irq, priority);

    return HAL_OK;
}

/**
 * @brief  Set the priority mask.
 * @param  priority: priority value.
 * @return HAL_Status.
 */
HAL_Status HAL_GIC_SetPriorityMask(uint32_t priority)
{
    GIC_SetPriorityMask(priority);

    return HAL_OK;
}

/**
 * @brief  Get the priority mask.
 * @return priority value.
 */
uint32_t HAL_GIC_GetPriorityMask(void)
{
    return GIC_GetPriorityMask();
}

/**
 * @brief  Get the priority value of a IRQ.
 * @param  irq: irq id.
 * @return priority value.
 */
uint32_t HAL_GIC_GetPriority(uint32_t irq)
{
    return GIC_GetPriority(irq);
}

/**
 * @brief  Set the routting affinity value of a IRQ.
 * @param  irq: irq id.
 * @param  aff: the routting affinity value.
 * @return HAL_Status.
 */
HAL_Status HAL_GIC_SetIRouter(uint32_t irq, uint32_t aff)
{
    GIC_SetIRouter(irq, aff);

    return HAL_OK;
}

/**
 * @brief  Set the irq handler callback for a IRQ.
 * @param  irq: irq id.
 * @param  handler: irq handler callback.
 * @return HAL_Status.
 */
HAL_Status HAL_GIC_SetHandler(uint32_t irq, GIC_IRQHandler handler)
{
    int32_t status;

    if ((irq >= 0) && (irq < NUM_INTERRUPTS)) {
        g_IRQTable[irq] = handler;
        status = HAL_OK;
    } else {
        status = HAL_INVAL;
    }

    return status;
}

/**
 * @brief  Get the irq handler callback for a IRQ.
 * @param  irq: irq id.
 * @return irq handler callback.
 */
GIC_IRQHandler HAL_GIC_GetHandler(uint32_t irq)
{
    GIC_IRQHandler h;

    irq &= 0x3FFU;

    if ((irq >= 0) && (irq < NUM_INTERRUPTS)) {
        h = g_IRQTable[irq];
    } else {
        h = (GIC_IRQHandler)0;
    }

    return h;
}

/** @} */

/** @defgroup GIC_Exported_Functions_Group4 Init and DeInit Functions

 This section provides functions allowing to init and deinit the module:

 *  @{
 */

/**
 * @brief Initialize GIC base address and config GIC.
 * @param cpuID: cpu id.
 * @param ampCtrl: amp system config information.
 * @return HAL_Status.
 */
HAL_Status HAL_GIC_Init(uint32_t cpuID, struct GIC_IRQ_AMP_CTRL *ampCtrl)
{
    uint32_t i, cpu, aff, cpuId, prio;

    p_ampCtrl = ampCtrl;
    GIC_RedistInitBase(cpuID);

    for (i = 0U; i < NUM_INTERRUPTS; i++) {
        g_IRQTable[i] = (GIC_IRQHandler)NULL;
    }

    if (!p_ampCtrl) {
        GIC_Enable(1, 0, 0, 0);

        return HAL_OK;
    }

    aff = __get_MPIDR() & MPIDR_AFFINITY_MASK;

    prio = p_ampCtrl->defPrio;

    if (p_ampCtrl->cpuAff == aff) {
        aff = p_ampCtrl->defRouteAff;
        GIC_Enable(1, 1, prio, aff);
        GIC_AMPConfigIRQs(p_ampCtrl->irqsCfg);
    } else {
        GIC_Enable(0, 1, prio, 0);
    }

    return HAL_OK;
}

/** @} */

/** @} */

/** @} */
#endif
