# SPDX-License-Identifier: BSD-3-Clause */

# Copyright (c) 2019 Fuzhou Rockchip Electronics Co., Ltd

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
LDFLAGS		+= $(CPU) -Wl,--gc-sections -Wl,-wrap=memset
OCFLAGS		= -R .note -R .note.gnu.build-id -R .comment -S

HAL_CFLAGS	:= -Wformat=2 -Wall -Wextra -Wno-unused-parameter -Werror
HAL_CFLAGS	+= -Wstrict-prototypes -Wmissing-prototypes

LINKER_SCRIPT	:= $(ROOT_PATH)/lib/CMSIS/Device/$(PROJECT)/Source/Templates/GCC/gcc_riscv.ld

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
# Head files
#############################################################################
INCLUDES += \
-I"$(ROOT_PATH)/lib/hal/inc" \
-I"$(ROOT_PATH)/lib/bsp/$(PROJECT)" \
-I"$(ROOT_PATH)/lib/CMSIS/Device/$(PROJECT)/Include" \
-I"$(ROOT_PATH)/lib/CMSIS/RISCV/Include" \
-I"$(ROOT_PATH)/lib/CMSIS/Device" \
-I"$(ROOT_PATH)/test/unity/src" \
-I"$(ROOT_PATH)/test/unity/extras/fixture/src" \
-I"$(ROOT_PATH)/test" \
-I"$(ROOT_PATH)/test/coremark" \
-I"$(ROOT_PATH)/test/coremark/barebones" \
-I"../src" \

#############################################################################
# Source Files
#############################################################################
DIRS := \
	$(ROOT_PATH)/test/unity/extras/fixture/src \
	$(ROOT_PATH)/test/unity/src \
	$(ROOT_PATH)/test/hal \
	$(ROOT_PATH)/test/hal/psram \
	$(ROOT_PATH)/test \
	$(ROOT_PATH)/test/coremark \
	$(ROOT_PATH)/test/coremark/barebones \
	../src \
	. \

HAL_DIRS := \
	$(ROOT_PATH)/lib/hal/src \
	$(ROOT_PATH)/lib/hal/src/* \
	$(ROOT_PATH)/lib/bsp/$(PROJECT) \
	$(ROOT_PATH)/lib/CMSIS/Device/$(PROJECT)/Source/Templates/GCC \
	$(ROOT_PATH)/lib/CMSIS/Device/$(PROJECT)/Source/Templates \

DIRS += $(HAL_DIRS)

SRCS += $(basename $(foreach dir,$(DIRS),$(wildcard $(dir)/*.[cS])))
OBJS := $(addsuffix .o,$(basename $(SRCS)))

HAL_SRCS := $(basename $(foreach dir,$(HAL_DIRS),$(wildcard $(dir)/*.[cS])))
HAL_OBJS := $(addsuffix .o,$(basename $(HAL_SRCS)))
$(HAL_OBJS): CFLAGS += $(HAL_CFLAGS)

CPPFLAGS += $(INCLUDES)

all: $(BIN)

$(ELF): $(OBJS) $(LINKER_SCRIPT)
	$(Q) $(CC) $(OBJS) $(LDFLAGS) $(CFLAGS) -T$(LINKER_SCRIPT) -Wl,-Map=$(MAP),-cref -o $@

$(BIN): $(ELF)
	$(Q) $(OBJCOPY) $(OCFLAGS) -O binary $< $@

clean:
	rm -f $(OBJS)
	rm -f TestDemo*

.PHONY: all clean