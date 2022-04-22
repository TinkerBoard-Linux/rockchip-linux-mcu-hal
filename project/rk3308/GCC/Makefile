# SPDX -License-Identifier: BSD-3-Clause */

# Copyright (c) 2022 Rockchip Electronics Co., Ltd.

PROJECT := RK3308
SOC := RK3308
CPU = -mcpu=cortex-a35+crypto -mfloat-abi=hard

FIRMWARE_CPU_BASE ?= 0x02600000
CFLAGS += -DFIRMWARE_BASE=$(FIRMWARE_CPU_BASE)
LINKER_SCRIPT := gcc_arm.ld
CLEAN_FILES += $(LINKER_SCRIPT)

include ../../common/GCC/Cortex-A.mk
