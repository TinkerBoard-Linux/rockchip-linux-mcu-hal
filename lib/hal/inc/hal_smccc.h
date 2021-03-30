/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2021 Rockchip Electronics Co., Ltd.
 */

#include "hal_conf.h"

#ifdef HAL_SMCCC_MODULE_ENABLED

/** @addtogroup RK_HAL_Driver
 *  @{
 */

/** @addtogroup SMCCC
 *  @{
 */

#ifndef __HAL_SMCCC_H_
#define __HAL_SMCCC_H_

#include "hal_def.h"

/** @defgroup SMCCC_How_To_Use How To Use
 *  @{

 The ARM SMCCC(SMC Calling Convention) driver can be used as follows:

 - Trap into Secure Monitor mode which is at EL3 or Secure-PL1.

 @} */

/***************************** MACRO Definition ******************************/
/* SMC function IDs for SiP Service queries */
#define SIP_ATF_VERSION               0x82000001
#define SIP_ACCESS_REG                0x82000002
#define SIP_SUSPEND_MODE              0x82000003
#define SIP_PENDING_CPUS              0x82000004
#define SIP_UARTDBG_CFG               0x82000005
#define SIP_UARTDBG_CFG64             0xc2000005
#define SIP_MCU_EL3FIQ_CFG            0x82000006
#define SIP_ACCESS_CHIP_STATE64       0xc2000006
#define SIP_SECURE_MEM_CONFIG         0x82000007
#define SIP_ACCESS_CHIP_EXTRA_STATE64 0xc2000007
#define SIP_DRAM_CONFIG               0x82000008
#define SIP_SHARE_MEM                 0x82000009
#define SIP_VERSION                   0x8200000a
#define SIP_REMOTECTL_CFG             0x8200000b
#define SIP_VPU_RESET                 0x8200000c
#define SIP_BUS_CFG                   0x8200000d
#define SIP_LAST_LOG                  0x8200000e
#define SIP_SCMI_AGENT0               0x82000010
#define SIP_SCMI_AGENT1               0x82000011
#define SIP_SCMI_AGENT2               0x82000012
#define SIP_SCMI_AGENT3               0x82000013
#define SIP_SCMI_AGENT4               0x82000014
#define SIP_SCMI_AGENT5               0x82000015
#define SIP_SCMI_AGENT6               0x82000016
#define SIP_SCMI_AGENT7               0x82000017
#define SIP_SCMI_AGENT8               0x82000018
#define SIP_SCMI_AGENT9               0x82000019
#define SIP_SCMI_AGENT10              0x8200001a
#define SIP_SCMI_AGENT11              0x8200001b
#define SIP_SCMI_AGENT12              0x8200001c
#define SIP_SCMI_AGENT13              0x8200001d
#define SIP_SCMI_AGENT14              0x8200001e
#define SIP_SCMI_AGENT15              0x8200001f
#define SIP_SDEI_FIQ_DBG_SWITCH_CPU   0x82000020
#define SIP_SDEI_FIQ_DBG_GET_EVENT_ID 0x82000021

#define ROCKCHIP_SIP_CONFIG_DRAM_ECC 0x0d

/**
  * @brief  SIP share mem page types definition
  */
typedef enum {
    SIP_SHARE_PAGE_TYPE_INVALID = 0,
    SIP_SHARE_PAGE_TYPE_UARTDBG,
    SIP_SHARE_PAGE_TYPE_DDR,
    SIP_SHARE_PAGE_TYPE_DDRDBG,
    SIP_SHARE_PAGE_TYPE_DDRECC,
    SIP_SHARE_PAGE_TYPE_MAX,
} eSIP_sharePageType;

/***************************** Structure Definition **************************/
/** @defgroup SMCCC_Exported_Definition_Group1 Basic Definition
 *  @{
 */
struct SMCCC_PARAM {
    unsigned long a0;
    unsigned long a1;
    unsigned long a2;
    unsigned long a3;
    unsigned long a4;
    unsigned long a5;
    unsigned long a6;
    unsigned long a7;
};
/** @} */

/***************************** Function Declare ******************************/
/** @defgroup SMCCC_Public_Function_Declare Public Function Declare
 *  @{
 */

/**
* @brief  ARM SMC Calling Convention
* @param  pParam: point to the struct containing args to pass and return
* @attention this API allow direct use in the HAL layer.
*/
void HAL_SMCCC_Call(struct SMCCC_PARAM *pParam);

/** @} */

#endif /* __HAL_SMCCC_H_ */

/** @} */

/** @} */

#endif /* HAL_SMCCC_MODULE_ENABLED */
