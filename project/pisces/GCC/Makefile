# SPDX-License-Identifier: BSD-3-Clause */

# Copyright (c) 2019 Rockchip Electronic Co.,Ltd

ROOT_PATH	:= ../../..
PROJECT		:= Pisces

#############################################################################
# Cross compiler
#############################################################################
ifneq ($(wildcard ${ROOT_PATH}/../prebuilts/gcc-arm-none-eabi-7-2018-q2-update/bin),)
CROSS_COMPILE	?= ${ROOT_PATH}/../prebuilts/gcc-arm-none-eabi-7-2018-q2-update/bin/arm-none-eabi-
else
CROSS_COMPILE	?= arm-none-eabi-
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

CPU		= -mcpu=cortex-m3 -mthumb

ASFLAGS         += $(CPU)
#CFLAGS		+= $(CPU) -std=c99 -Os -g -DOS_VERSION=FREERTOS_V7_4_2 -finput-charset=gbk --specs=nano.specs
#LDFLAGS	+= $(CPU) -Wl,--gc-sections --specs=nano.specs -u _scanf_float -u _printf_float
CFLAGS		+= $(CPU) -std=c99 -Os -g -DOS_VERSION=FREERTOS_V7_4_2 -finput-charset=gbk -Wunused-variable -Wformat=2
LDFLAGS		+= $(CPU) -Wl,--gc-sections --specs=nosys.specs -lm -lgcc
OCFLAGS		= -R .note -R .note.gnu.build-id -R .comment -S

LINKER_SCRIPT	:= $(ROOT_PATH)/lib/CMSIS/Device/$(PROJECT)/Source/Templates/GCC/gcc_arm.ld

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
-I"$(ROOT_PATH)/lib/CMSIS/Device/$(PROJECT)/Include" \
-I"$(ROOT_PATH)/lib/CMSIS/Include" \
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
DIRS := $(ROOT_PATH)/lib/hal/src \
	$(ROOT_PATH)/lib/CMSIS/Device/$(PROJECT)/Source/Templates/GCC \
	$(ROOT_PATH)/lib/CMSIS/Device/$(PROJECT)/Source/Templates \
	$(ROOT_PATH)/test/unity/extras/fixture/src \
	$(ROOT_PATH)/test/unity/src \
	$(ROOT_PATH)/test/hal \
	$(ROOT_PATH)/test \
	$(ROOT_PATH)/test/coremark \
	$(ROOT_PATH)/test/coremark/barebones \
	../src \
	. \

SRCS += $(basename $(foreach dir,$(DIRS),$(wildcard $(dir)/*.[cS])))

OBJS := $(addsuffix .o,$(basename $(SRCS)))

CFLAGS	+= $(INCLUDES)

all: $(BIN)

$(ELF): $(OBJS) $(LINKER_SCRIPT)
	$(Q) $(CC) $(OBJS) $(LDFLAGS) $(CFLAGS) -T$(LINKER_SCRIPT) -Wl,-Map=$(MAP),-cref -o $@

$(BIN): $(ELF)
	$(Q) $(OBJCOPY) $(OCFLAGS) -O binary $< $@

clean:
	rm -f $(OBJS)
	rm -f TestDemo*

.PHONY: all clean
