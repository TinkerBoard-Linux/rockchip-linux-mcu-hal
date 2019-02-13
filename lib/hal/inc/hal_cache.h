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
#if defined(HAL_ICACHE_MODULE_ENABLED) && defined(ICACHE)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    uint32_t status;

    /* config icache: mpu disable, stb disable, write through, hot buffer enable */
    ICACHE->CACHE_CTRL |=
        (ICACHE_CACHE_CTRL_CACHE_EN_MASK | ICACHE_CACHE_CTRL_CACHE_WT_EN_MASK) &
        (~ICACHE_CACHE_CTRL_CACHE_STB_EN_MASK);

    do {
        status =
            ICACHE->CACHE_STATUS & ICACHE_CACHE_STATUS_CACHE_INIT_FINISH_MASK;
    } while (status == 0);

    ICACHE->CACHE_CTRL &= ~ICACHE_CACHE_CTRL_CACHE_BYPASS_MASK;
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
#if defined(HAL_ICACHE_MODULE_ENABLED) && defined(ICACHE)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    ICACHE->CACHE_CTRL |= ICACHE_CACHE_CTRL_CACHE_BYPASS_MASK;
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
#if defined(HAL_ICACHE_MODULE_ENABLED) && defined(ICACHE)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    uint32_t status = 0;

    ICACHE->CACHE_MAINTAIN[0] =
        CACHE_M_INVALID_ALL | ICACHE_CACHE_MAINTAIN0_CACHE_M_VALID_MASK;

    do {
        status = ICACHE->CACHE_MAINTAIN[0] &
                 ICACHE_CACHE_MAINTAIN0_CACHE_M_VALID_MASK;
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
#if defined(HAL_ICACHE_MODULE_ENABLED) && defined(ICACHE)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    uint32_t value = 0;
    uint32_t offset = 0;
    uint32_t status = 0;

    offset = (sizeByte + CACHE_LINE_SIZE - 1) >> CACHE_LINE_SHIFT;
    value = (address & ICACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_MASK) |
            CACHE_M_INVALID | ICACHE_CACHE_MAINTAIN0_CACHE_M_VALID_MASK;

    ICACHE->CACHE_MAINTAIN[1] = offset;
    ICACHE->CACHE_MAINTAIN[0] = value;

    do {
        status = ICACHE->CACHE_MAINTAIN[0] &
                 ICACHE_CACHE_MAINTAIN0_CACHE_M_VALID_MASK;
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
#if defined(HAL_ICACHE_MODULE_ENABLED) && defined(ICACHE)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    ICACHE->CACHE_CTRL |= ICACHE_CACHE_CTRL_CACHE_PMU_EN_MASK;
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
#if defined(HAL_ICACHE_MODULE_ENABLED) && defined(ICACHE)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    ICACHE->CACHE_CTRL &= (~ICACHE_CACHE_CTRL_CACHE_PMU_EN_MASK);
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
#if defined(HAL_ICACHE_MODULE_ENABLED) && defined(ICACHE)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    HAL_ASSERT(stat != NULL);

    stat->rdNum = ICACHE->PMU_RD_NUM_CNT;
    stat->wrNum = ICACHE->PMU_WR_NUM_CNT;
    stat->sramRdHit = ICACHE->PMU_SRAM_RD_HIT_CNT;
    stat->hbRdHit = ICACHE->PMU_HB_RD_HIT_CNT;
    stat->stbRdHit = ICACHE->PMU_STB_RD_HIT_CNT;
    stat->rdHit = ICACHE->PMU_RD_HIT_CNT;
    stat->wrHit = ICACHE->PMU_WR_HIT_CNT;
    stat->rdMissPenalty = ICACHE->PMU_RD_MISS_PENALTY_CNT;
    stat->wrMissPenalty = ICACHE->PMU_WR_MISS_PENALTY_CNT;
    stat->rdLat = ICACHE->PMU_RD_LAT_CNT;
    stat->wrLat = ICACHE->PMU_WR_LAT_CNT;
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
#if defined(HAL_ICACHE_MODULE_ENABLED) && defined(ICACHE)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    ICACHE->CACHE_CTRL |= ICACHE_CACHE_CTRL_CACHE_MPU_MODE_MASK;
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
#if defined(HAL_ICACHE_MODULE_ENABLED) && defined(ICACHE)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    ICACHE->CACHE_CTRL &= (~ICACHE_CACHE_CTRL_CACHE_MPU_MODE_MASK);
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
#if defined(HAL_DCACHE_MODULE_ENABLED) && defined(DCACHE)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    uint32_t status;

    /* stb enable, stb_entry=7, stb_timeout enable, write back */
    DCACHE->CACHE_CTRL |= DCACHE_CACHE_CTRL_CACHE_EN_MASK |
                          (7U << DCACHE_CACHE_CTRL_CACHE_ENTRY_THRESH_SHIFT) |
                          DCACHE_CACHE_CTRL_STB_TIMEOUT_EN_MASK;
    DCACHE->STB_TIMEOUT_CTRL = 1;

    do {
        status =
            DCACHE->CACHE_STATUS & DCACHE_CACHE_STATUS_CACHE_INIT_FINISH_MASK;
    } while (status == 0);

    DCACHE->CACHE_CTRL &= ~DCACHE_CACHE_CTRL_CACHE_BYPASS_MASK;
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
#if defined(HAL_DCACHE_MODULE_ENABLED) && defined(DCACHE)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    DCACHE->CACHE_CTRL |= DCACHE_CACHE_CTRL_CACHE_BYPASS_MASK;
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
#if defined(HAL_DCACHE_MODULE_ENABLED) && defined(DCACHE)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    uint32_t status = 0;

    DCACHE->CACHE_MAINTAIN[0] =
        CACHE_M_INVALID_ALL | DCACHE_CACHE_MAINTAIN0_CACHE_M_VALID_MASK;

    do {
        status = DCACHE->CACHE_MAINTAIN[0] &
                 DCACHE_CACHE_MAINTAIN0_CACHE_M_VALID_MASK;
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
#if defined(HAL_DCACHE_MODULE_ENABLED) && defined(DCACHE)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    uint32_t value = 0;
    uint32_t offset = 0;
    uint32_t status = 0;

    offset = (sizeByte + CACHE_LINE_SIZE - 1) >> CACHE_LINE_SHIFT;
    value = (address & DCACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_MASK) |
            CACHE_M_INVALID | DCACHE_CACHE_MAINTAIN0_CACHE_M_VALID_MASK;

    DCACHE->CACHE_MAINTAIN[1] = offset;
    DCACHE->CACHE_MAINTAIN[0] = value;

    do {
        status = DCACHE->CACHE_MAINTAIN[0] &
                 DCACHE_CACHE_MAINTAIN0_CACHE_M_VALID_MASK;
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
#if defined(HAL_DCACHE_MODULE_ENABLED) && defined(DCACHE)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    uint32_t value = 0;
    uint32_t offset = 0;
    uint32_t status = 0;

    offset = (sizeByte + CACHE_LINE_SIZE - 1) >> CACHE_LINE_SHIFT;
    value = (address & DCACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_MASK) |
            CACHE_M_CLEAN | DCACHE_CACHE_MAINTAIN0_CACHE_M_VALID_MASK;

    DCACHE->CACHE_MAINTAIN[1] = offset;
    DCACHE->CACHE_MAINTAIN[0] = value;

    do {
        status = DCACHE->CACHE_MAINTAIN[0] &
                 DCACHE_CACHE_MAINTAIN0_CACHE_M_VALID_MASK;
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
#if defined(HAL_DCACHE_MODULE_ENABLED) && defined(DCACHE)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    uint32_t value = 0;
    uint32_t offset = 0;
    uint32_t status = 0;

    offset = (sizeByte + CACHE_LINE_SIZE - 1) >> CACHE_LINE_SHIFT;
    value = (address & DCACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_MASK) |
            CACHE_M_CLEAN_INVALID | DCACHE_CACHE_MAINTAIN0_CACHE_M_VALID_MASK;

    DCACHE->CACHE_MAINTAIN[1] = offset;
    DCACHE->CACHE_MAINTAIN[0] = value;

    do {
        status = DCACHE->CACHE_MAINTAIN[0] &
                 DCACHE_CACHE_MAINTAIN0_CACHE_M_VALID_MASK;
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
#if defined(HAL_DCACHE_MODULE_ENABLED) && defined(DCACHE)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    uint32_t status = 0;

    DCACHE->CACHE_CTRL |= DCACHE_CACHE_CTRL_CACHE_FLUSH_MASK;

    do {
        status =
            DCACHE->CACHE_STATUS & DCACHE_CACHE_STATUS_CACHE_FLUSH_DONE_MASK;
    } while (!status);

    DCACHE->CACHE_CTRL &= ~DCACHE_CACHE_CTRL_CACHE_FLUSH_MASK;
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
#if defined(HAL_DCACHE_MODULE_ENABLED) && defined(DCACHE)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    DCACHE->CACHE_CTRL |= DCACHE_CACHE_CTRL_CACHE_PMU_EN_MASK;
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
#if defined(HAL_DCACHE_MODULE_ENABLED) && defined(DCACHE)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    DCACHE->CACHE_CTRL &= (~DCACHE_CACHE_CTRL_CACHE_PMU_EN_MASK);
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
#if defined(HAL_DCACHE_MODULE_ENABLED) && defined(DCACHE)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    HAL_ASSERT(stat != NULL);

    stat->rdNum = DCACHE->PMU_RD_NUM_CNT;
    stat->wrNum = DCACHE->PMU_WR_NUM_CNT;
    stat->sramRdHit = DCACHE->PMU_SRAM_RD_HIT_CNT;
    stat->hbRdHit = DCACHE->PMU_HB_RD_HIT_CNT;
    stat->stbRdHit = DCACHE->PMU_STB_RD_HIT_CNT;
    stat->rdHit = DCACHE->PMU_RD_HIT_CNT;
    stat->wrHit = DCACHE->PMU_WR_HIT_CNT;
    stat->rdMissPenalty = DCACHE->PMU_RD_MISS_PENALTY_CNT;
    stat->wrMissPenalty = DCACHE->PMU_WR_MISS_PENALTY_CNT;
    stat->rdLat = DCACHE->PMU_RD_LAT_CNT;
    stat->wrLat = DCACHE->PMU_WR_LAT_CNT;
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
#if defined(HAL_DCACHE_MODULE_ENABLED) && defined(DCACHE)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    DCACHE->CACHE_CTRL |= DCACHE_CACHE_CTRL_CACHE_MPU_MODE_MASK;
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
#if defined(HAL_DCACHE_MODULE_ENABLED) && defined(DCACHE)

#if defined(CACHE_REVISION) && (CACHE_REVISION == 0x00000100U)
    DCACHE->CACHE_CTRL &= (~DCACHE_CACHE_CTRL_CACHE_MPU_MODE_MASK);
#endif

#endif

    return HAL_OK;
}

#endif

/** @} */

/** @} */
