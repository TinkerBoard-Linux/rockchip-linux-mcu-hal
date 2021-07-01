# SPDX-License-Identifier: BSD-3-Clause */

# Copyright (c) 2020 Rockchip Electronics Co., Ltd.

ROOT_PATH	:= ../../..

#############################################################################
# Cross compiler
#############################################################################
ifneq ($(wildcard ${ROOT_PATH}/../prebuilts/gcc/linux-x86/riscv64/riscv64-unknown-elf-gcc-8.2.0-2019.05.3-x86_64-linux/bin),)
CROSS_COMPILE	?= ${ROOT_PATH}/../prebuilts/gcc/linux-x86/riscv64/riscv64-unknown-elf-gcc-8.2.0-2019.05.3-x86_64-linux/bin/riscv64-unknown-elf-
else
CROSS_COMPILE	?= riscv64-unknown-elf-
endif

AS		= $(CROSS_COMPILE)as
LD		= $(CROSS_COMPILE)ld
CC		= $(CROSS_COMPILE)gcc
CPP		= $(CC) -E
AR		= $(CROSS_COMPILE)ar
NM		= $(CROSS_COMPILE)nm
STRIP		= $(CROSS_COMPILE)strip
OBJCOPY		= $(CROSS_COMPILE)objcopy
OBJDUMP		= $(CROSS_COMPILE)objdump

CPU		+= -DUSE_PLIC -DUSE_M_TIME -DNO_INIT -mcmodel=medany -msmall-data-limit=8 -L.  -nostartfiles  -lc
ASFLAGS         += $(CPU) -c -x assembler-with-cpp
CFLAGS		+= $(CPU) -O2 -g
CFLAGS		+= -Wformat=2 -Wall -Wextra -Wno-unused-parameter
CFLAGS		+= -Wstrict-prototypes -Wmissing-prototypes
LDFLAGS		+= $(CPU) -Wl,--gc-sections -Wl,--wrap=memset -Wl,--wrap=puts
OCFLAGS		= -R .note -R .note.gnu.build-id -R .comment -S

HAL_CFLAGS	+= -Werror

LINKER_SCRIPT	:= $(ROOT_PATH)/lib/CMSIS/Device/$(SOC)/Source/Templates/GCC/gcc_riscv.ld

#############################################################################
# Output files
#############################################################################
BIN		:= TestDemo.bin
ELF		:= TestDemo.elf
MAP		:= TestDemo.map

#############################################################################
# Options
#############################################################################
QUIET ?= n

ifeq ($(QUIET), y)
  Q := @
  S := -s
endif

#############################################################################
# Source code and include
#############################################################################
INCLUDES := \
-I"../src" \
-I"$(ROOT_PATH)/lib/CMSIS/RISCV/Include" \


SRC_DIRS := \
    ../src \
    $(ROOT_PATH)/lib/CMSIS/Device/$(SOC)/Source/Templates/GCC \

export HAL_PATH := $(ROOT_PATH)
include $(HAL_PATH)/tools/build_lib.mk
SRC_DIRS += $(HAL_LIB_SRC)
INCLUDES += $(HAL_LIB_INC)
-include $(HAL_PATH)/test/build_test.mk
CFLAGS += -DUNITY_INCLUDE_CONFIG_H

SRCS += $(basename $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.[cS])))
OBJS += $(addsuffix .o,$(basename $(SRCS)))
CFLAGS += $(INCLUDES)
ASFLAGS += $(INCLUDES)

HAL_SRCS += $(basename $(foreach dir,$(HAL_LIB_SRC) $(ROOT_PATH)/lib/CMSIS/Device/$(SOC)/Source/Templates/GCC,$(wildcard $(dir)/*.[cS])))
HAL_OBJS += $(addsuffix .o,$(basename $(HAL_SRCS)))
$(HAL_OBJS): CFLAGS += $(HAL_CFLAGS)

all: $(BIN)

$(ELF): $(OBJS) $(LINKER_SCRIPT)
	$(Q) $(CC) $(OBJS) $(LDFLAGS) $(CFLAGS) -T$(LINKER_SCRIPT) -Wl,-Map=$(MAP),-cref -o $@

$(BIN): $(ELF)
	$(Q) $(OBJCOPY) $(OCFLAGS) -O binary $< $@

clean:
	rm -f $(OBJS)
	rm -f TestDemo*

.PHONY: all clean
