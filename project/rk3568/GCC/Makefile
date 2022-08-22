# SPDX -License-Identifier: BSD-3-Clause */

# Copyright (c) 2022 Rockchip Electronics Co., Ltd.

PROJECT := RK3568
SOC := RK3568
CPU = -mcpu=cortex-a55+crypto -mfloat-abi=hard

FIRMWARE_CPU_BASE ?= 0x12000000
DRAM_SIZE ?= 0x02000000
SHMEM_BASE ?= 0x07800000
SHMEM_SIZE ?= 0x02000000
CFLAGS += -DFIRMWARE_BASE=$(FIRMWARE_CPU_BASE) -DDRAM_SIZE=$(DRAM_SIZE) -DSHMEM_BASE=$(SHMEM_BASE) -DSHMEM_SIZE=$(SHMEM_SIZE)
# The shared memory is initialized by cpu1.
ifeq ($(CUR_CPU), 1)
        CFLAGS += -DPRIMARY_CPU
endif
ifeq ($(CUR_CPU), 0)
        CFLAGS += -DCPU0
endif
ifeq ($(CUR_CPU), 2)
        CFLAGS += -DCPU2
endif
ifeq ($(CUR_CPU), 3)
        CFLAGS += -DCPU3
endif
LINKER_SCRIPT := gcc_arm.ld
CLEAN_FILES += $(LINKER_SCRIPT)

include ../../../middleware/coremark/coremark.mk
-include ../../../middleware/rpmsg-lite/rpmsg-lite.mk
-include ../../../middleware/sdhci/sdhci.mk
include ../../common/GCC/Cortex-A.mk
