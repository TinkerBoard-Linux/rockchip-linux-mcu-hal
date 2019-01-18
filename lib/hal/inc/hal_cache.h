/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RKMCU_HAL_Driver
 *  @{
 */

/** @addtogroup CACHE
 *  @{
 */

#ifndef _HAL_CACHE_H_
#define _HAL_CACHE_H_

#include "hal_def.h"
#include "hal_debug.h"

/***************************** MACRO Definition ******************************/
/** @defgroup ICache & DCache Basic Definition
 *  @{
 */

/***************************** Structure Definition **************************/

/**
 *  performance measurement count for icache & dcache
 *
 */
struct CACHE_PMU_CNT
{
    uint32_t rdNum; /* PMU read number counter */
    uint32_t wrNum; /* PMU write number counter */
    uint32_t sramRdHit; /* PMU SRAM hit counter */
    uint32_t hbRdHit; /* PMU hot buffer hit */
    uint32_t stbRdHit; /* PMU store buffer hit */
    uint32_t rdHit; /* PMU read hit counter */
    uint32_t wrHit; /* PMU write hit counter */
    uint32_t rdMissPenalty; /* PMU read miss penalty counter */
    uint32_t wrMissPenalty; /* PMU write miss penalty counter */
    uint32_t rdLat; /* PMU read latency */
    uint32_t wrLat; /* PMU write latency */
};

/** @} */
/***************************** Function Declare ******************************/

/**
 * @brief  enable icache.
 * @return HAL_OK if success.
 */
__STATIC_FORCEINLINE HAL_Status HAL_ICACHE_Enable(void)
{
#if defined(HAL_ICACHE_MODULE_ENABLED) && defined(ICACHE_CTRL)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    uint32_t status;

    /* config icache: mpu disable, stb disable, write through, hot buffer enable */
    ICACHE_CTRL->CTRL |= (CACHE_EN | CACHE_WT_EN) & (~CACHE_STB_EN);

    do {
        status = ICACHE_CTRL->STATUS & CACHE_STATUS_INIT_FINISH_MASK;
    } while (status == 0);

    ICACHE_CTRL->CTRL &= ~CACHE_BYPASS;
#endif

#endif

    return HAL_OK;
}

/**
 * @brief  disable icache.
 * @return HAL_OK if success.
 */
__STATIC_FORCEINLINE HAL_Status HAL_ICACHE_Disable(void)
{
#if defined(HAL_ICACHE_MODULE_ENABLED) && defined(ICACHE_CTRL)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    ICACHE_CTRL->CTRL |= CACHE_BYPASS;
#endif

#endif

    return HAL_OK;
}

/**
 * @brief  invalidate all of the icache.
 * @return HAL_OK if success.
 */
__STATIC_FORCEINLINE HAL_Status HAL_ICACHE_Invalidate(void)
{
#if defined(HAL_ICACHE_MODULE_ENABLED) && defined(ICACHE_CTRL)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    uint32_t status = 0;

    ICACHE_CTRL->MAINTAIN0 = CACHE_M_INVALID_ALL | CACHE_M_VALID;

    do {
        status = ICACHE_CTRL->MAINTAIN0 & CACHE_M_STATUS_MASK;
    } while (status);
#endif

#endif

    return HAL_OK;
}

/**
 * @brief  invalidate the specified region of the icache.
 * @param  address: the start address of specified region which you want invalidate.
 * @param  sizeByte: the length in bytes of invalidate range.
 * @return HAL_OK if success.
 */
__STATIC_FORCEINLINE HAL_Status HAL_ICACHE_InvalidateByRange(uint32_t address,
                                                             uint32_t sizeByte)
{
#if defined(HAL_ICACHE_MODULE_ENABLED) && defined(ICACHE_CTRL)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    uint32_t value = 0;
    uint32_t offset = 0;
    uint32_t status = 0;

    offset = (sizeByte + CACHE_LINE_SIZE - 1) >> CACHE_LINE_SHIFT;
    value = (address & CACHE_M_ADDR_MASK) | CACHE_M_INVALID | CACHE_M_VALID;

    ICACHE_CTRL->MAINTAIN1 = offset;
    ICACHE_CTRL->MAINTAIN0 = value;

    do {
        status = ICACHE_CTRL->MAINTAIN0 & CACHE_M_STATUS_MASK;
    } while (status);
#endif

#endif

    return HAL_OK;
}

/**
 * @brief  enable performance measurement unit of icache.
 * @return HAL_OK if success.
 */
__STATIC_FORCEINLINE HAL_Status HAL_ICACHE_EnablePMU(void)
{
#if defined(HAL_ICACHE_MODULE_ENABLED) && defined(ICACHE_CTRL)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    ICACHE_CTRL->CTRL |= CACHE_PMU_EN;
#endif

#endif

    return HAL_OK;
}

/**
 * @brief  disable performance measurement unit of icache.
 * @return HAL_OK if success.
 */
__STATIC_FORCEINLINE HAL_Status HAL_ICACHE_DisablePMU(void)
{
#if defined(HAL_ICACHE_MODULE_ENABLED) && defined(ICACHE_CTRL)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    ICACHE_CTRL->CTRL &= (~CACHE_PMU_EN);
#endif

#endif

    return HAL_OK;
}

/**
 * @brief  get current state of performance measurement unit in icache.
 * @param  stat: return the current state if success.
 * @return HAL_OK if success.
 */
__STATIC_FORCEINLINE HAL_Status HAL_ICACHE_GetPMU(struct CACHE_PMU_CNT *stat)
{
#if defined(HAL_ICACHE_MODULE_ENABLED) && defined(ICACHE_CTRL)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    HAL_ASSERT(stat != NULL);

    stat->rdNum = ICACHE_PMU->RD_NUM_CNT;
    stat->wrNum = ICACHE_PMU->WR_NUM_CNT;
    stat->sramRdHit = ICACHE_PMU->SRAM_RD_HIT_CNT;
    stat->hbRdHit = ICACHE_PMU->HB_RD_HIT_CNT;
    stat->stbRdHit = ICACHE_PMU->STB_RD_HIT_CNT;
    stat->rdHit = ICACHE_PMU->RD_HIT_CNT;
    stat->wrHit = ICACHE_PMU->WR_HIT_CNT;
    stat->rdMissPenalty = ICACHE_PMU->RD_MISS_PENALTY_CNT;
    stat->wrMissPenalty = ICACHE_PMU->WR_MISS_PENALTY_CNT;
    stat->rdLat = ICACHE_PMU->RD_LAT_CNT;
    stat->wrLat = ICACHE_PMU->WR_LAT_CNT;
#endif

#endif

    return HAL_OK;
}

/**
 * @brief  enable memory protect unit of icache.
 * @return HAL_OK if success.
 */
__STATIC_FORCEINLINE HAL_Status HAL_ICACHE_EnableMPU(void)
{
#if defined(HAL_ICACHE_MODULE_ENABLED) && defined(ICACHE_CTRL)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    ICACHE_CTRL->CTRL |= CACHE_MPU_MODE;
#endif

#endif

    return HAL_OK;
}

/**
 * @brief  disable memory protect unit of icache.
 * @return HAL_OK if success.
 */
__STATIC_FORCEINLINE HAL_Status HAL_ICACHE_DisableMPU(void)
{
#if defined(HAL_ICACHE_MODULE_ENABLED) && defined(ICACHE_CTRL)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    ICACHE_CTRL->CTRL &= (~CACHE_MPU_MODE);
#endif

#endif

    return HAL_OK;
}

/**
 * @brief     enable dcache.
 * @return    HAL_OK if success.
 * @attention cache invalidate must be call if the dcache is not enable for the first
 *            time after power-up.
 */
__STATIC_FORCEINLINE HAL_Status HAL_DCACHE_Enable(void)
{
#if defined(HAL_DCACHE_MODULE_ENABLED) && defined(DCACHE_CTRL)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    uint32_t status;

    /* stb enable, stb_entry=7, stb_timeout enable, write back */
    DCACHE_CTRL->CTRL |=
        CACHE_EN | (7U << CACHE_ENTRY_THRESH_SHIFT) | CACHE_STB_TIMEOUT_EN;
    DCACHE_CTRL->STB_TIMEOUT_CTRL = 1;

    do {
        status = DCACHE_CTRL->STATUS & CACHE_STATUS_INIT_FINISH_MASK;
    } while (status == 0);

    DCACHE_CTRL->CTRL &= ~CACHE_BYPASS;
#endif

#endif

    return HAL_OK;
}

/**
 * @brief  disable dcache.
 * @return HAL_OK if success.
 */
__STATIC_FORCEINLINE HAL_Status HAL_DCACHE_Disable(void)
{
#if defined(HAL_DCACHE_MODULE_ENABLED) && defined(DCACHE_CTRL)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    DCACHE_CTRL->CTRL |= CACHE_BYPASS;
#endif

#endif

    return HAL_OK;
}

/**
 * @brief  invalidate all of the dcache.
 * @return HAL_OK if success.
 */
__STATIC_FORCEINLINE HAL_Status HAL_DCACHE_Invalidate(void)
{
#if defined(HAL_DCACHE_MODULE_ENABLED) && defined(DCACHE_CTRL)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    uint32_t status = 0;

    DCACHE_CTRL->MAINTAIN0 = CACHE_M_INVALID_ALL | CACHE_M_VALID;

    do {
        status = DCACHE_CTRL->MAINTAIN0 & CACHE_M_STATUS_MASK;
    } while (status);
#endif

#endif

    return HAL_OK;
}

/**
 * @brief  invalidate the specified region of the dcache.
 * @param  address: the start address of specified region which you want invalidate.
 * @param  sizeByte: the length in bytes of invalidate range.
 * @return HAL_OK if success.
 */
__STATIC_FORCEINLINE HAL_Status HAL_DCACHE_InvalidateByRange(uint32_t address,
                                                             uint32_t sizeByte)
{
#if defined(HAL_DCACHE_MODULE_ENABLED) && defined(DCACHE_CTRL)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    uint32_t value = 0;
    uint32_t offset = 0;
    uint32_t status = 0;

    offset = (sizeByte + CACHE_LINE_SIZE - 1) >> CACHE_LINE_SHIFT;
    value = (address & CACHE_M_ADDR_MASK) | CACHE_M_INVALID | CACHE_M_VALID;

    DCACHE_CTRL->MAINTAIN1 = offset;
    DCACHE_CTRL->MAINTAIN0 = value;

    do {
        status = DCACHE_CTRL->MAINTAIN0 & CACHE_M_STATUS_MASK;
    } while (status);
#endif

#endif

    return HAL_OK;
}

/**
 * @brief  clean the specified region of the dcache, it will flush the dirty cache in 
 *         the specified region.
 * @param  address: the start address of specified region which you want invalidate.
 * @param  sizeByte: the length in bytes of invalidate range.
 * @return HAL_OK if success.
 */
__STATIC_FORCEINLINE HAL_Status HAL_DCACHE_CleanByRange(uint32_t address,
                                                        uint32_t sizeByte)
{
#if defined(HAL_DCACHE_MODULE_ENABLED) && defined(DCACHE_CTRL)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    uint32_t value = 0;
    uint32_t offset = 0;
    uint32_t status = 0;

    offset = (sizeByte + CACHE_LINE_SIZE - 1) >> CACHE_LINE_SHIFT;
    value = (address & CACHE_M_ADDR_MASK) | CACHE_M_CLEAN | CACHE_M_VALID;

    DCACHE_CTRL->MAINTAIN1 = offset;
    DCACHE_CTRL->MAINTAIN0 = value;

    do {
        status = DCACHE_CTRL->MAINTAIN0 & CACHE_M_STATUS_MASK;
    } while (status);
#endif

#endif

    return HAL_OK;
}

/**
 * @brief  clean and invalidate the specified region of the dcache, it will flush the dirty
 *         cache in the specified region, and set the cache line to invalid state.
 * @param  address: the start address of specified region which you want invalidate.
 * @param  sizeByte: the length in bytes of invalidate range.
 * @return HAL_OK if success.
 */
__STATIC_FORCEINLINE HAL_Status
HAL_DCACHE_CleanInvalidateByRange(uint32_t address, uint32_t sizeByte)
{
#if defined(HAL_DCACHE_MODULE_ENABLED) && defined(DCACHE_CTRL)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    uint32_t value = 0;
    uint32_t offset = 0;
    uint32_t status = 0;

    offset = (sizeByte + CACHE_LINE_SIZE - 1) >> CACHE_LINE_SHIFT;
    value =
        (address & CACHE_M_ADDR_MASK) | CACHE_M_CLEAN_INVALID | CACHE_M_VALID;

    DCACHE_CTRL->MAINTAIN1 = offset;
    DCACHE_CTRL->MAINTAIN0 = value;

    do {
        status = DCACHE_CTRL->MAINTAIN0 & CACHE_M_STATUS_MASK;
    } while (status);
#endif

#endif

    return HAL_OK;
}

/**
 * @brief  clean and invalidate all of the dcache, the dirty cache line will be flush
 *         to external memory, and all of the cache line will be set invalid.
 * @return HAL_OK if success.
 */
__STATIC_FORCEINLINE HAL_Status HAL_DCACHE_CleanInvalidate(void)
{
#if defined(HAL_DCACHE_MODULE_ENABLED) && defined(DCACHE_CTRL)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    uint32_t status = 0;

    DCACHE_CTRL->CTRL |= CACHE_FLUSH;

    do {
        status = DCACHE_CTRL->STATUS & CACHE_STATUS_FLUSH_DONE_MASK;
    } while (!status);

    DCACHE_CTRL->CTRL &= ~CACHE_FLUSH;
#endif

#endif

    return HAL_OK;
}

/**
 * @brief  enable performance measurement unit of dcache.
 * @return HAL_OK if success.
 */
__STATIC_FORCEINLINE HAL_Status HAL_DCACHE_EnablePMU(void)
{
#if defined(HAL_DCACHE_MODULE_ENABLED) && defined(DCACHE_CTRL)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    DCACHE_CTRL->CTRL |= CACHE_PMU_EN;
#endif

#endif

    return HAL_OK;
}

/**
 * @brief  disable performance measurement unit of dcache.
 * @return HAL_OK if success.
 */
__STATIC_FORCEINLINE HAL_Status HAL_DCACHE_DisablePMU(void)
{
#if defined(HAL_DCACHE_MODULE_ENABLED) && defined(DCACHE_CTRL)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    DCACHE_CTRL->CTRL &= (~CACHE_PMU_EN);
#endif

#endif

    return HAL_OK;
}

/**
 * @brief  get current state of performance measurement unit in icache.
 * @param  stat: return the current state if success.
 * @return HAL_OK if success.
 */
__STATIC_FORCEINLINE HAL_Status HAL_DCACHE_GetPMU(struct CACHE_PMU_CNT *stat)
{
#if defined(HAL_DCACHE_MODULE_ENABLED) && defined(DCACHE_CTRL)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    HAL_ASSERT(stat != NULL);

    stat->rdNum = DCACHE_PMU->RD_NUM_CNT;
    stat->wrNum = DCACHE_PMU->WR_NUM_CNT;
    stat->sramRdHit = DCACHE_PMU->SRAM_RD_HIT_CNT;
    stat->hbRdHit = DCACHE_PMU->HB_RD_HIT_CNT;
    stat->stbRdHit = DCACHE_PMU->STB_RD_HIT_CNT;
    stat->rdHit = DCACHE_PMU->RD_HIT_CNT;
    stat->wrHit = DCACHE_PMU->WR_HIT_CNT;
    stat->rdMissPenalty = DCACHE_PMU->RD_MISS_PENALTY_CNT;
    stat->wrMissPenalty = DCACHE_PMU->WR_MISS_PENALTY_CNT;
    stat->rdLat = DCACHE_PMU->RD_LAT_CNT;
    stat->wrLat = DCACHE_PMU->WR_LAT_CNT;
#endif

#endif

    return HAL_OK;
}

/**
 * @brief  enable memory protect unit of dcache.
 * @return HAL_OK if success.
 */
__STATIC_FORCEINLINE HAL_Status HAL_DCACHE_EnableMPU(void)
{
#if defined(HAL_DCACHE_MODULE_ENABLED) && defined(DCACHE_CTRL)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    DCACHE_CTRL->CTRL |= CACHE_MPU_MODE;
#endif

#endif

    return HAL_OK;
}

/**
 * @brief  disable memory protect unit of dcache.
 * @return HAL_OK if success.
 */
__STATIC_FORCEINLINE HAL_Status HAL_DCACHE_DisableMPU(void)
{
#if defined(HAL_DCACHE_MODULE_ENABLED) && defined(DCACHE_CTRL)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    DCACHE_CTRL->CTRL &= (~CACHE_MPU_MODE);
#endif

#endif

    return HAL_OK;
}

#endif

/** @} */

/** @} */
