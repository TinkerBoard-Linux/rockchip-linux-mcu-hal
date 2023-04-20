/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2023 Rockchip Electronics Co., Ltd.
 */
#include <stdio.h>
#include "hal_base.h"
#include "simple_console.h"
#include "command_gpio.h"

#define BIT(x) (1U << (x))

#define FLAG_GPIO_DIR BIT(31)
#define FLAG_GPIO_OUT BIT(30)
#define FLAG_GPIO_GET BIT(29)

#define SHIFT_GPIO_DIR 0
#define SHIFT_GPIO_OUT 1

#define STR_IS_TARGET(str, target) \
        (!strncmp((char *)(str), target, strlen(target)))

enum gpio_configs {
    GPIO_CONFIG_DIR_IN  = (0 << SHIFT_GPIO_DIR | FLAG_GPIO_DIR),
    GPIO_CONFIG_DIR_OUT = (1 << SHIFT_GPIO_DIR | FLAG_GPIO_DIR),

    GPIO_CONFIG_OUT_L = (0 << SHIFT_GPIO_OUT | FLAG_GPIO_OUT),
    GPIO_CONFIG_OUT_H = (1 << SHIFT_GPIO_OUT | FLAG_GPIO_OUT),
};

struct command_gpio_info {
    eGPIO_bankId bank;
    ePINCTRL_GPIO_PINS pin;
    ePINCTRL_configParam param;

    struct GPIO_REG *reg;

    uint32_t gpio_flag;
};

static void command_gpio_help(void)
{
    printf("GPIO utility\n");
    printf("\ngpio <pin> <set <option...> | getvar>\n");
    printf("Options: \n");
    printf("\n    <pin>                   <bank>_<group><num> like \"0_a7\"\n");
    printf("                            <bank> range \"0-3\"\n");
    printf("                            <group> ranage \"a-d\"\n");
    printf("                            <num> range \"0-7\"\n");
    printf("    <option...>\n");
    printf("        -dir <var>          Direction: 0 for input, 1 for output\n");
    printf("        -pul <pull>         Pull: can be: 0 for normal, 1 for up, 2 for down>\n");
    printf("        -drv <drv>          Driver: can be 0-5\n");
    printf("        -srt <srt>          Slew rate: can be 0-3, 0 is lowest SRT\n");
    printf("        -smt <smt>          SMT: <smt> can be 0 for disable, 1 for enable\n");
    printf("        -out <out>          Out: work with -dir 1, init gpio out status\n");
    /* printf("        -raw <raw>          Advance function: Set RAW paramter for pinctrl\n"); */
    printf("    <getvar>                Get pin level\n");
}

static int command_gpio_get_parameter(uint8_t * *start, uint8_t *input,
                                      uint8_t * *next, int *len)
{
    *start = console_get_paramter(input, len, next);
    if (!(*start)) {
        return -1;
    }

    return 0;
}

static struct GPIO_REG *gpio_get_reg(int bank)
{
    switch (bank) {
    case 0:
        return GPIO0;
    case 1:
        return GPIO1;
    case 2:
        return GPIO2;
    case 3:
        return GPIO3;
    case 4:
        return GPIO4;
    default:
        return NULL;
    }
}

static int command_gpio_get_pin(uint8_t *input,
                                struct command_gpio_info *command)
{
    int group;

    if (input[1] != '_') {
        return -1;
    }

    command->bank = input[0] - '0';
    if (command->bank > 4 || command->bank < 0) {
        return -1;
    }
    group = input[2] >= 'a' ? input[2] - 'a' : input[2] - 'A';
    if (group > 4 || group < 0) {
        return -1;
    }
    command->pin = input[3] - '0';
    if (command->pin > 7 || command->pin < 0) {
        return -1;
    }
    command->reg = gpio_get_reg(command->bank);
    if (!command->reg) {
        return -1;
    }
    command->pin = BIT((group << 3) + command->pin);

    return 0;
}

static int command_gpio_param_value(uint8_t *input, int len,
                                    uint8_t * *next,
                                    uint32_t *value)
{
    uint8_t *str, *tmp_val, *tmp_next;

    if (command_gpio_get_parameter(&str, input, &tmp_next, &len)) {
        return -1;
    }

    *value = strtoul((char *)input, (char * *)&tmp_val, 0);
    if (input == tmp_val) {
        return -1;
    }

    *next = tmp_next;

    return len;
}

static int command_gpio_param_parse(uint8_t *input, int len,
                                    struct command_gpio_info *command)
{
    uint32_t val;
    bool is_raw = false;
    uint8_t *next = input;

    while (len) {
        if (command_gpio_get_parameter(&input, next, &next, &len)) {
            return -1;
        }

raw_next:
        if (STR_IS_TARGET(input, "-pul")) {
            len = command_gpio_param_value(next, len, &next, &val);
            if (len < 0) {
                return -1;
            }

            if (val > 3 || val < 0) {
                printf("Bad PULL param\n");

                return -1;
            }
            command->param |= val << SHIFT_PUL | FLAG_PUL;
        } else if (STR_IS_TARGET(input, "-drv")) {
            len = command_gpio_param_value(next, len, &next, &val);
            if (len < 0) {
                return -1;
            }

            if (val > 5 || val < 0) {
                printf("Bad DRV param\n");

                return -1;
            }

            command->param |= val << SHIFT_DRV | FLAG_DRV;
        } else if (STR_IS_TARGET(input, "-srt")) {
            len = command_gpio_param_value(next, len, &next, &val);
            if (len < 0) {
                return -1;
            }

            if (val > 4 || val < 0) {
                printf("Bad SRT param\n");

                return -1;
            }

            command->param |= val << SHIFT_SRT | FLAG_SRT;
        } else if (STR_IS_TARGET(input, "-smt")) {
            len = command_gpio_param_value(next, len, &next, &val);
            if (len < 0) {
                return -1;
            }

            if (val > 1 || val < 0) {
                printf("Bad SMT param\n");

                return -1;
            }

            command->param |= val << SHIFT_SMT | FLAG_SMT;
        } else if (STR_IS_TARGET(input, "-dir")) {
            len = command_gpio_param_value(next, len, &next, &val);
            if (len < 0) {
                return -1;
            }

            if (val > 1 || val < 0) {
                printf("Bad DIR param\n");

                return -1;
            }

            command->gpio_flag |= val ? GPIO_CONFIG_DIR_OUT : GPIO_CONFIG_DIR_IN;
        } else if (STR_IS_TARGET(input, "-out")) {
            len = command_gpio_param_value(next, len, &next, &val);
            if (len < 0) {
                return -1;
            }

            if (val > 1 || val < 0) {
                printf("Bad OUT param\n");

                return -1;
            }

            command->gpio_flag |= val ? GPIO_CONFIG_OUT_H : GPIO_CONFIG_OUT_L;
        } else if (STR_IS_TARGET(input, "-raw")) {
            if (len && command_gpio_get_parameter(&input, next, &next, &len)) {
                return -1;
            }

            if (input[0] == '-') {
                is_raw = true;
                goto raw_next;
            }

            command->param = strtoul((char *)input, NULL, 0);

            return 0;
        } else {
            return -1;
        }
    }

    /* add default config */
    if (!is_raw) {
        command->param |= PIN_CONFIG_MUX_FUNC0;
    }

    return 0;
}

static int command_gpio_parse(uint8_t *input, int len,
                              struct command_gpio_info *command)
{
    uint8_t *next;

    command->param = 0;

    next = input;

    if (command_gpio_get_parameter(&input, next, &next, &len)) {
        return -1;
    }

    if (command_gpio_get_pin(input, command)) {
        return -1;
    }

    if (command_gpio_get_parameter(&input, next, &next, &len)) {
        return -1;
    }

    if (STR_IS_TARGET(input, "getvar")) {
        command->gpio_flag |= FLAG_GPIO_GET;

        return 0;
    } else {
        return command_gpio_param_parse(next, len, command);
    }
}

static void command_gpio_grf_control(struct command_gpio_info *command)
{
    HAL_PINCTRL_SetParam(command->bank, command->pin, command->param);
}

static void command_gpio_control(struct command_gpio_info *command)
{
    if (command->gpio_flag & FLAG_GPIO_GET) {
        printf("Pin is %s\n",
               HAL_GPIO_GetPinLevel(command->reg, command->pin) ?
               "High" : "Low");
    }

    if (command->gpio_flag & FLAG_GPIO_DIR) {
        HAL_GPIO_SetPinDirection(command->reg, command->pin,
                                 (command->gpio_flag & BIT(SHIFT_GPIO_DIR)) ?
                                 GPIO_OUT : GPIO_IN);
    }

    if (command->gpio_flag & FLAG_GPIO_OUT) {
        HAL_GPIO_SetPinLevel(command->reg, command->pin,
                             (command->gpio_flag & BIT(SHIFT_GPIO_OUT)) ?
                             GPIO_HIGH : GPIO_LOW);
    }
}

static void command_gpio_process(uint8_t *in, int len)
{
    struct command_gpio_info command = { 0 };

    if (command_gpio_parse(in, len, &command)) {
        command_gpio_help();

        return;
    }

    if (!(command.gpio_flag & FLAG_GPIO_GET)) {
        command_gpio_grf_control(&command);
    }
    command_gpio_control(&command);
}

struct console_command command_gpio = {
    .name = "gpio",
    .help = "Set gpio param",
    .process = command_gpio_process,
};
