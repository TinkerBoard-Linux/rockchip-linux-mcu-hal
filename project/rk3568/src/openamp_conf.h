/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2021 Rockchip Electronics Co., Ltd.
 */

#ifndef __OPENAMP_CONF__H__
#define __OPENAMP_CONF__H__

#ifdef __cplusplus
extern "C" {
#endif

#include "openamp_log.h"
#include "mbox.h"

#define __OPENAMP_region_start__ 0x10000000
#define __OPENAMP_region_end__   0x10010000

#define SHM_START_ADDRESS ((metal_phys_addr_t)__OPENAMP_region_start__)
#define SHM_SIZE          (size_t)((void *)__OPENAMP_region_end__ - (void *) __OPENAMP_region_start__)

#define VRING_RX_ADDRESS   0x10000000
#define VRING_TX_ADDRESS   0x10004000
#define VRING_BUFF_ADDRESS 0x10008000
#define RSC_TABLE_ADDR     0x1000c000
#define VRING_ALIGNMENT    16                /* fixed to match with linux constraint */
#define VRING_NUM_BUFFS    16                /* number of rpmsg buffer */

/* Fixed parameter */
#define NUM_RESOURCE_ENTRIES 2
#define VRING_COUNT          2
#define VDEV_ID              0xFF
#define VRING0_ID            0              /* VRING0 ID (master to remote) */
#define VRING1_ID            1              /* VRING1 ID (remote to master) */
/* The macros virtio channel */
#define MASTER_CHANNEL1_SRC  0
#define MASTER_CHANNEL1_DEST 1
#define SLAVE_CHANNEL1_SRC   1
#define SLAVE_CHANNEL1_DEST  0

/* DEBUG macros */
#if defined(__LOG_TRACE_IO_) || defined(__LOG_UART_IO_)
    #define OPENAMP_log_dbg  log_dbg
    #define OPENAMP_log_info log_info
    #define OPENAMP_log_warn log_warn
    #define OPENAMP_log_err  log_err
#else
    #define OPENAMP_log_dbg(...)
    #define OPENAMP_log_info(...)
    #define OPENAMP_log_warn(...)
    #define OPENAMP_log_err(...)
#endif

#ifdef __cplusplus
}
#endif

#endif