# SPDX-License-Identifier: BSD-3-Clause */

# Copyright (c) 2018 Rockchip Electronic Co.,Ltd

ROOT_PATH	:= ../../..

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
#CFLAGS		+= $(CPU) -std=c99 -Os -g -DOS_VERSION=FREERTOS_V7_4_2 -include compiler-gcc.h -finput-charset=gbk --specs=nano.specs
#LDFLAGS	+= $(CPU) -Wl,--gc-sections --specs=nano.specs -u _scanf_float -u _printf_float
CFLAGS		+= $(CPU) -std=c99 -Os -g -DOS_VERSION=FREERTOS_V7_4_2 -include compiler-gcc.h -finput-charset=gbk
LDFLAGS		+= $(CPU) -Wl,--gc-sections -lm -lgcc
OCFLAGS		= -R .note -R .note.gnu.build-id -R .comment -S

LINKER_SCRIPT	:= ./gcc_arm.ld

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
-I"../../../lib/hal/inc" \
-I"../../../lib/CMSIS/Device/RK2106/Include" \
-I"../../../lib/CMSIS/Device/RK2106/Include/hw" \
-I"../../../lib/CMSIS/Include" \
-I"../src" \
-I"../Scatter" \

#############################################################################
# Source Files
#############################################################################
SRCS += \
../../../lib/hal/src/hal_base.c \
../../../lib/hal/src/hal_uart.c \
../../../lib/hal/src/hal_nvic.c \
../../../lib/hal/src/hal_gpio.c \
../../../lib/hal/src/hal_grf.c \
../../../lib/hal/src/hal_cru.c \
../Scatter/ScatterLoader.c \
../src/main.c \
../src/bsp.c \
../src/interrupt.c \
./newlib_hooks.c \
./startup_rk2106.S \
../../../lib/CMSIS/Device/RK2106/Source/system_rk2106.c

OBJS := $(addsuffix .o,$(basename $(SRCS)))

CFLAGS	+= $(INCLUDES)

all: $(BIN)

$(ELF): $(OBJS) $(LINKER_SCRIPT)
	$(Q) $(CC) $(OBJS) $(LDFLAGS) -T$(LINKER_SCRIPT) -Wl,-Map=$(MAP),-cref -o $@

$(BIN): $(ELF)
	$(Q) $(OBJCOPY) $(OCFLAGS) -O binary $< $@

clean:
	rm -f $(OBJS)
	rm -f TestDemo*

.PHONY: all clean
