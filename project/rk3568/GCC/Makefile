# SPDX -License-Identifier: BSD-3-Clause */

# Copyright (c) 2021 Rockchip Electronics Co., Ltd.

PROJECT := RK3568
SOC := RK3568
CPU = -mcpu=cortex-a55+crypto -mfloat-abi=hard

include ../../../middleware/OpenAMP/openamp.mk
CFLAGS += -DMETAL_INTERNAL -DMETAL_MAX_DEVICE_REGIONS=2

include ../../../middleware/sdhci/sdhci.mk
include ../../../middleware/coremark/coremark.mk

FIRMWARE_CPU_BASE ?= 0x12000000
CFLAGS += -DFIRMWARE_BASE=$(FIRMWARE_CPU_BASE)
LINKER_SCRIPT := gcc_arm.ld
CLEAN_FILES += $(LINKER_SCRIPT)

include ../../common/GCC/Cortex-A.mk
