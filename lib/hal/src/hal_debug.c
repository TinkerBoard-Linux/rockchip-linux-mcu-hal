/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup DEBUG
 *  @{
 */

/** @defgroup How_To_Use How To Use
 *  @{
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The DEBUG driver can be used as follows:

 @endverbatim
 @} */

#include "hal_base.h"

/********************* Private MACRO Definition ******************************/

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

__weak void AssertFailed(const char *file, uint32_t line)
{
    HAL_DBG_ERR("assert failed at %s %lu\n", file, line);
    while (1)
        ;
}

/********************* Public Function Definition ****************************/

/** @defgroup TIMER_Exported_Functions_Group4 Init and Deinit Functions
 @verbatim

 ===============================================================================
             #### Init and deinit functions ####
 ===============================================================================
 This section provides functions allowing to init and deinit module as follows:

 @endverbatim
 *  @{
 */

/**
 * @brief  format hex print.
 * @param  s: head tag for every new line.
 * @param  buf: buffer for printing.
 * @param  width: every single printed object width.
 * @param  len: the number of printed objects.
 * @return HAL_Status: HAL_OK.
 * sum = width * len (BYTE).
 */
HAL_Status HAL_DBG_HEX(char *s, void *buf, uint32_t width, uint32_t len)
{
#if HAL_DBG_ON
    uint32_t i, j;
    unsigned char *p8 = (unsigned char *)buf;
    unsigned short *p16 = (unsigned short *)buf;
    uint32_t *p32 = (uint32_t *)buf;

    j = 0;
    for (i = 0; i < len; i++) {
        if (j == 0) {
            HAL_SYSLOG("[HAL_DBG_HEX] %s %p + 0x%lx:", s, buf, i * width);
        }

        if (width == 4)
            HAL_SYSLOG("0x%08lx,", p32[i]);
        else if (width == 2)
            HAL_SYSLOG("0x%04x,", p16[i]);
        else
            HAL_SYSLOG("0x%02x,", p8[i]);

        if (++j >= 16) {
            j = 0;
            HAL_SYSLOG("\n");
        }
    }
    HAL_SYSLOG("\n");
#endif

    return HAL_OK;
}

/** @} */

/** @} */

/** @} */
