------

**Rockchip**

# **RKMCU_Firmware_Library_User_Guide**

发布版本:1.0

日期:2018.11

Copyright 2018 @Fuzhou Rockchip Electronics Co., Ltd.

**读者对象**

本文档（本指南）主要适用于以下工程师:

技术支持工程师

软件开发工程师

**修订记录**

| **日期** | **版本** | **作者** | **修改说明** |
| -------- | -------- | -------- | ------------ |
| 2018.11 | V0.1     | Jon Lin  | 提供基础代码结构说明和基本规范 |
| 2018.11 | V1.0     | Kever Yang | 重构文档并确定编程规范 |

------

[TOC]

------
# 术语/缩写

| 缩写    | 详细描述   |
| ------- | ---- |
| ADC     | Analog-to-digital converter |
| CAN     | Controller area network　|
| CPAL  | Core Peripheral Access Layer |
| CRU     | Clock and Reset Unit |
| DMA     | Direct Memory Access |
| GPIO    | General purpose I/Os |
| GRF     | General Register File |
| HAL   | Hardware Abstract Layer |
| I2C     | Inter-integrated circuit |
| I2S    | Inter-integrated sound |
| NVIC    | Nested Vectored Interrupt Controller |
| PWM     | Pulse Width Modulation |
| RTC     | Real-time clock |
| SFC     | Serial Flash Controller |
| SPI     | Serial Peripheral interface |
| SysTick | System tick timer |
| UART   | Universal asynchronous receiver/transmitter |
| USB     | Universal Serial Bus |
| VOP     | Video Output Processor |
| WDG   | watchdog |

------
# 前言

该文档主要介绍Rockchip MCU HAL(Hardware Abstract Layer)固件库的源码编程规范、结构体和宏定义规范、固件库文档目录结构、固件库涉及的核内访问、固件库提供的所有的设备驱动模块的接口，编程示例介绍。驱动开发人员需要详细阅读规范，并按照规范开发和维护相应驱动模块，使用该文档能够有效的提供开发效率，降低开发难度。

HAL 固件库中涉及核内外设访问层—CPAL(Core Peripheral Access Layer)使用MISRA-C标准。所有的外设驱动部分都有一组外设接口，所有的代码结构、函数名和参数命名都是按照规范设定。编程按照ANSI-C标准.

------

# 1 固件库概述

## 1.1 目录结构

```
.
├── doc
│   └── RKMCU_Firmware_Library_User_Guide_V1.0.md
├── lib
│   ├── CMSIS
│   │   ├── Device
│   │   │   └── RK2106
│   │   │       ├── Include
│   │   │       │   ├── rk2106.h
│   │   │       │   └── system_rk2106.h
│   │   │       └── Source
│   │   │           ├── GCC
│   │   │           │   ├── gcc_arm.ld
│   │   │           │   └── startup_rk2106.S
│   │   │           └── system_rk2106.c
│   │   └── Include
│   │       ├── cmsis_compiler.h
│   │       ├── cmsis_gcc.h
│   │       ├── core_cm4.h
│   │        ...
│   └── hal
│       ├── inc
│       │   ├── hal_base.h
│       │   ├── hal_conf_template.h
│       │   ├── hal_def.h
│       │   ├── hal_nvic.h
│       │   ├── hal_uart.h
│       │   ...
│       └── src
│           ├── hal_base.c
│           ├── hal_nvic.c
│           ├── hal_uart.c
│           ...
└── test
    └── rk2106_nanod
        ├── GCC
        ├── Scatter
        └── src
            ├── bsp.c
            ├── bsp.h
            ├── hal_conf.h
            ├── main.c
            └── main.h

```

| 目录    | 内容     |
| -------- | ---- |
| doc     | 项目相关文档     |
| lib     | 用于集成到rt-thread, zephyr等RTOS的lib目录     |
| lib/CMSIS     | 以ARM CMSIS5为base, 加上Rockchip SoC定义    |
| lib/hal     | MCU的HAL驱动库代码     |
| test     | HAL驱动的驱动测试代码     |

## 1.2 模块组成预览

下图大概描述了代码组成, 运行顺序, 以及头文件包含关系.

![2](RKMCU_Firmware_Library_User_Guide_CN\2.jpg)

### 1.2.1 RK2106

![5](RKMCU_Firmware_Library_User_Guide_CN\5.jpg)

## 1.3 SOC相关文件

lib/CMSIS/Device目录存放SoC相关的硬件信息,寄存器定义文件以及芯片启动相关代码.

| 文件                 | 描述                                                         |
| -------------------- | ------------------------------------------------------------ |
| *startup_rk2106.S*   | 包含重置处理程序和异常向量的工具链特定文件,根据需求调整堆栈大小。 |
| *system_rk2106.c/.h* | 包含：系统start up汇编文件中在跳转main前调用的SystemInit()。 |
| *gcc_arm.ld*         | 链接脚本                                                     |
| *rkxxxx.h*        | 寄存器结构体及位宏定义总的头文件，HAL库统一引用              |

SOC硬件信息由工具从TRM自动生成为头文件'hw_rkxxxx.h', 包含内容:

- IRQ source;
- SoC memory map, IP base address;
- Module register structure;
- Module register Bit map;

## 1.4 HAL库文件

lib/hal目录包含HAL库的代码主体, 其中src目录直接包含所有模块的C代码, inc目录包含对外API函数声明, 由于模块寄存器结构体和BIT定义都已包含在SOC头文件中, 各模块不在使用私有头文件, 如需要定义私有的宏或结构体, 可在C文件中直接定义.

| 文件           | 描述                                                         |
| -------------- | ------------------------------------------------------------ |
| *hal_ppp.c*    | 主要外设/模块驱动文件,包括所有的RK设备通用的API，例如：hal_adc.c, hal_spi.c。 |
| *hal_ppp.h*    | 主要驱动器C文件的头文件，它包括公共数据、句柄和枚举结构、定义语句和宏，以及导出的通用接口。例如：hal_adc.h, hal_spi.h。 |
| *hal_ppp_ex.c* | 外围设备或模块驱动程序的扩展文件。这组文件中包含特定型号或者系列的芯片的特殊API。以及如果该特定的芯片内部有不同的实现方式，则该文件中的特殊API将覆盖_ppp中的通用API。例如：hal_adc_ex.c, hal_spi_ex.c。 |
| *hal_ppp_ex.h* | 外围设备或模块驱动程序的扩展文件头文件，它包括特定的数据和枚举结构，定义语句和宏，以及导出的设备部分，例如: hal_adc_ex.ah, hal_spi_ex.h。 |
| *hal_base.c*   | HAL库初始化，包含DEBUG接口、基于SysTick接口的Time Delay      |
| *hal_base.h*   | hal_base.c头文件                                             |
| *hal_conf.h*   | 允许通过宏裁剪驱动。                                         |
| *hal_def.h*    | 常见的HAL资源，如通用定义语句、枚举、结构体和宏定义。        |

## 1.5 test目录文件

test目录包含可运行的用户代码, 主要用于提供main函数调用各模块接口, 进行API测试, 同时作为模块使用的sample代码.

| 文件       | 描述                                                         |
| ---------- | ------------------------------------------------------------ |
| hal_conf.h | 通过重定义该文件可以裁剪HAL库。                              |
| bsp.c      | 包含BSP初始化。                                              |
| main.c/.h  | 系统初始化：包括HAL_Init()，系统时钟初始化，外设初始化，用户应用。 |

# 2 如何使用固件库

## 2.1 直接裸系统运行

## 2.2 与RTOS集成

### 2.2.1　集成到rt-thread OS

## 2.3 Power Management

# 3 编程规范

本章提供必要的编程规范.

## 3.1 命名规则

芯片相关的以芯片型号为关键字标识,如start up汇编“*startup_rk2106.S*”，驱动相关的硬件抽象层文件以模块简写开头，如“*hal_uart.c*”.

### 3.1.4 函数命名

**函数名：**每一个函数命名以驼峰式为基础, 加上以下划线分隔的全大写前缀或后缀, 包括以下部分：

```c
int PRE_MODULE_FuncFeature_SUB(void)
```

- 前缀：'PRE_', 全大写
- HAL库对外提供的函数接口，应以"*HAL_*"开头，例如：*HAL_UART_ReadByte()*；
  - HAL库对外提供的宏定义函数接口，应以"\_\__HAL\__"开头，例如："*\_\_HAL_UART_SetIntEnabled*"；
- 模块名缩写：'MODULE_'；
- 功能组合缩写：FuncFeature：按首字母大写区分单词的**驼峰式**组合；
- 后缀：'_SUB()'：如果接口定义相近，但需要区分方式，可以添加后缀，例如，“_IT”中断模式。

合法函数命名示例:

```c
/* HAL API Level function */
HAL_Status HAL_USB_Init(void);
HAL_Status HAL_USB_RequestEnqueue();
HAL_Status HAL_RTC_SetTime(eTIMER HAL_TIMER0, int32 time);

* Module internal function */
HAL_Status USB_Reset(void);
HAL_Status USB_StartTransfer();
```

### 3.1.5 变量命名

变量的命名尽量在有意义的前提下尽量简写，如：
推荐用clk, cnt, msg, 而不推荐clock, count, message．

变量和函数参数使用驼峰式间隔, 但第一个单词仍使用小写, 以便与函数区别,同时便于书写简单变量, 如tmp, ret等.

```c
int i, j;
int tmp;
int ret;
int retValue, varNum;
```

#### 全局变量

全局变量需要以'g_'作为前缀.

#### 静态变量

静态变量需要以's_'作为前缀.

#### 指针

指针变量需要以'p'为前缀。

### 3.1.6 宏定义, 枚举类型命名

所有宏定义及枚举类型使用全大写，下划线分隔单词．

### 3.1.7 寄存器命名

寄存器结构体中命名使用全大写，下划线分隔单词．
寄存器名主体一致，但ID不一致的，合并为数组。

## 3.2 版权及License

版权和License会使用Linux Foundation的ACT工具进行检查.

### 使用SPDX格式License

在所有文件第一行, 加入如下Licnse信息, MCU-HAL主体使用BSD3-Clause授权.

```c
/* SPDX-License-Identifier: BSD-3-Clause */
```

### 版权部分使用如下信息

```c
/*
 * Copyright (c) 2018 Rockchip Electronic Co.,Ltd
 */
```

## 3.3 排版

项目使用clang format工具辅助排版, 整体排版风格包括空行，空格，括号等的使用参考Linux kernel的coding style, 本文档仅单独说明不一样的部分.

### 缩进

全文不使用TAB分隔, 默认使用4个空格取代TAB.

## 3.4 注释及文档

项目将使用Doxygen工具来自动化生成文档, 文件及HAL API函数的注释需要按照Doxygen的要求来写.

所有需要详细注释的内容，应出现在定义处，如函数API注释在C文件内，宏API注释在头文件内，两边都出现的只需要定义处详细注释即可。

### 代码注释

单行注释不接收双斜杠'//'，必须使用如下风格：

```c
/* This is a comment */
```

多行注释请使用如下风格：

```c
/*
 * This is a multi line comment;
 * Comment line 2.
 */
 ```

 需要利用doxygen文档化的多行注释：

```c
/**
 * This is a multi line comment;
 * Comment line 2.
 */
```

### 函数注释

Doxygen compliant function comments that provide:

- brief function overview.
- detailed description of the function.
- detailed parameter explanation.
- detailed information about return values.

Doxygen comment example:

```c
/**
 * @brief  Enable Interrupt in NVIC Interrupt Controller
 * @param  IRQn  interrupt number that specifies the interrupt
 * @return none.
 * Enable the specified interrupt in the NVIC Interrupt Controller.
 * Other settings of the interrupt such as priority are not affected.
 */
```

## 3.5 函数

### API参数要求

参数中用于区分硬件ID的参数，强制使用枚举类型．

### 参数检查

必须在合理范围内对参数做合法性检查，代码使用异常情况使用ASSERT()进行检查，只在debug版本生效，实际使用也可能碰到的出错类型，请使用普通代码检查参数合法性．

### 出错码

所有函数调用, 返回值使用有效出错码, 请不要自定义出错码, 出错码的值和含义参考自Linux kernel.
无特定返回值时使用0表示函数执行成功.

```c
typedef enum
{
    HAL_OK       = 0x00U,
    HAL_ERROR    = (-1),
    HAL_BUSY     = (-16),
    HAL_NODEV     = (-19),
    HAL_INVAL     = (-22),
    HAL_TIMEOUT  = (-110)
} HAL_Status;
```

## 3.6 变量，结构

### 3.6.1 数据类型

编码请使用位数明确的数据类型, 不推荐使用long, short等可能产生不同结果的类型, 一律使用stdint的*_t类型，如下:

```c
typedef	unsigned char			uint8_t
typedef	signed char			int8_t
typedef	unsigned short int		uint16_t
typedef	signed short int		int16_t
typedef	unsigned int			uint32_t
typedef	signed int			int32_t
typedef	unsigned long long		uint64_t
typedef	signed long long		int64_t
typedef	unsigned char			bool
```

### 3.6.2 结构体定义

结构体定义推荐使用类linux kernel普通类型：

```c
struct STRUCT_A {
uint32 member1;
uint32 memberTest;
};
```

结构定义

```c
struct STRUCT_A *pStruct;
```

#### 特殊情况

寄存器结构体中有种特殊情况需要使用typedef，UART的寄存器，同一个offset可能存在多种值，这种情况可以使用如下定义：

```c
typedef struct UART_REG {
    __IO uint32_t UART_RBR;
    __IO uint32_t UART_DLH;
    __IO uint32_t UART_IIR;
    __IO uint32_t UART_LCR;
    __IO uint32_t UART_MCR;
    __IO uint32_t UART_LSR;
    __IO uint32_t UART_MSR;
    __IO uint32_t UART_SCR;
    __IO uint32_t RESERVED1_UART[(0x30 - 0x20) / 4];
    __IO uint32_t UART_SRBR[(0x70 - 0x30) / 4];
    __IO uint32_t UART_FAR;
    __IO uint32_t UART_TFR;
    __IO uint32_t UART_RFW;
    __IO uint32_t UART_USR;
    __IO uint32_t UART_TFL;
    __IO uint32_t UART_RFL;
    __IO uint32_t UART_SRR;
    __IO uint32_t UART_SRTS;
    __IO uint32_t UART_SBCR;
    __IO uint32_t UART_SDMAM;
    __IO uint32_t UART_SFE;
    __IO uint32_t UART_SRT;
    __IO uint32_t UART_STET;
    __IO uint32_t UART_HTX;
    __IO uint32_t UART_DMASA;
    __IO uint32_t RESERVED2_UART[(0xf4 - 0xac) / 4];
    __IO uint32_t UART_CPR;
    __IO uint32_t UART_UCV;
    __IO uint32_t UART_CTR;
} UART_REG_t;

#define UART_THR UART_RBR
#define UART_DLL UART_RBR
#define UART_IER UART_DLH
#define UART_FCR UART_IIR
#define UART_STHR UART_SRBR
```

其中UART_RBR, UART_THR, UART_DLL使用同一个offset，这种类型定义，可以在C代码中根据需求使用如下三种指针：

```c
UART_REG_t *pUART;

pUART->UART_RBR = UART_TEST_BAUDRATE;
pUART->UART_THR = UART_TEST_EN;
pUART->UART_DLL = UART_TEST_DLL_VAL;
```

### 3.6.3 寄存器访问

寄存器结构体使用全局变量，如驱动有私有结构，可以包含在私有结构中。

```c
struct CRU_REG {
    __IO uint32_t CRU_APLL_CON[3];
    __IO uint32_t RESERVED1[1];
    __IO uint32_t CRU_MODE_CON;
    __IO uint32_t CRU_CLKSEL_CON[13];
    __IO uint32_t RESERVED2[2];
    __IO uint32_t CRU_CLK_FRACDIV_CON[2];
    __IO uint32_t RESERVED3[10];
    __IO uint32_t CRU_CLKGATE_CON[10];
    __IO uint32_t RESERVED4[6];
    __IO uint32_t CRU_SOFTRST[4];
    __IO uint32_t RESERVED5[4];
    __IO uint32_t CRU_STCLK_CON[2];
    __IO uint32_t RESERVED6[3];
    __IO uint32_t CRU_GLB_SRST_FST_VALUE;
    __IO uint32_t CRU_GLB_CNT_TH;
};

struct CRU_REG *pCRU = (struct CRU_REG *)CRU_BASE;
```

访问寄存器原则上使用结构体指针访问，如有特殊需求可以使用宏定义.
寄存器设置值使用预定义的宏，不推荐使用立即数；带mask寄存器如CRU, GRF，使用专用接口处理数值:

```c
#define RK_CLRSETBITS(clr, set)         ((((clr) | (set)) << 16) | (set)
#define RK_SETBITS(set)                 RK_CLRSETBITS(0, set)
#define RK_CLRBITS(clr)                 RK_CLRSETBITS(clr, 0)

pCRU->CRU_SOFTRST[0] = RK_SETBITS(CRU_SOFTRST_SPI);
pCRU->CRU_SOFTRST[0] = RK_CLRBITS(CRU_SOFTRST_SPI);
```

#### 寄存器BIT定义

寄存器BIT定义包括SHIFT, MASK, 以及对应的数值定义，格式为：
IPNAME_BITNAME_VAL

```c
enum {
        GPIO4A2_SHIFT		= 4,
        GPIO4A2_MSK		= 3 << GPIO4A2_SHIFT,
        GPIO4A2_GPIO		= 0,
        GPIO4A2_FLASH1_RDN	= 1 << GPIO4A2_SHIFT,
        GPIO4A2_HOST_DOUT8	= 2 << GPIO4A2_SHIFT,
        GPIO4A2_MAC_RXER	= 3 << GPIO4A2_SHIFT,
};
```

## 3.7 文件布局

### C代码源文件

驱动代码要求私有宏, 结构体, 变量等定义放C代码开头部分, 然后是私有函数, 然后是公共的API函数.

```c
/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018 Rockchip Electronic Co.,Ltd
 */
#include "hal_base.h"

/********************* Private MACRO Definition ******************************/

/********************* Private Structure Definition **************************/

/********************* Private Variable Definition ***************************/

/********************* Private Function Definition ***************************/

/********************* Public Function Definition ****************************/
```

### 头文件

模块头文件 lib/hal/inc/hal_ppp.h作为对外API头文件声明, 应包含对外API函数声明, 及其需要使用的结构提和枚举类型，不可包含私有变量，宏或结构体.

```c
/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018 Rockchip Electronic Co.,Ltd
 */

#ifndef _HAL_UART_H_
#define _HAL_UART_H_

#include "hal_base.h"

/***************************** MACRO Definition ******************************/

/***************************** Structure Definition **************************/

/***************************** Function Declare ******************************/

#endif
```

头文件包含关系示例如下：

![header](RKMCU_Firmware_Library_User_Guide_CN\header_call.jpg)

其中芯片的选择位于rksoc.h, 模块选择位于hal_config.h。

## 3.8 模块驱动

### 内容要求

覆盖模块所有功能，如有暂未覆盖内容，请填写todo list；
模块本身独立存在，除base内容(delay, 开关中断等)，不依赖任何其他模块
跨模块调用内容，属于OS适配层, 如clock初始化，中断注册，互斥锁等，
OS支持(如RT-Thread)部分，利用控制器状态防重入，原子操作可关中断，锁由OS适配层提供, HAL层不提供。

### API接口内容要求

每个驱动应提供如下接口：

- 模块初始化／反初始化
- IO访问函数
--阻塞
--非阻塞
- Suspend/Resume
- 状态查询

### 注释

使用doxygen的分组功能，对内容进行分组并分别提供文档, 每个驱动提供以下注释：

- 驱动使用指南(how to use this driver)
- 初始化反初始化流程
- IO访问流程
- Suspend/Resume流程及内容
- 设备状态，错误，模式描述

# 4 Common资源

## 4.1 DEBUG相关

### 4.1.1 打印等级

系统提供分级的PRINTF(), DEBUG()宏，用于日常debug使用，在产品阶段可关闭，不占用空间。

### 4.1.2 ASSERT()

API入口及其他需要检查参数合法性的地方使用Assert()进行检查，改接口仅在debug模式启用，非debug模式不占用代码空间．

## 4.2 HAL_Delay()

## 4.3 Interrupt

## 4.4 Malloc()

# 5 单元测试

每个模块必须按照测试框架要求提交对应的单元测试代码．

# 6 CPAL库

核内访问移植CMSIS-CORE库，按照CMSIS标准移植了启动代码和系统初始化代码，并将外设寄存器置于该级别，核外访问函数使用CMSIS标准库文件，CPASL所有相关文件在CMSIS/文件目录下，包括以下几个内容：

## 6.1 启动代码

该部分代码移植cmsis标准库启动代码。

```c
startup_<device>.c		//：如startup_rk2106.c
```

## 6.2 外设寄存器

```c
<device>.h		//如：rk2106.h, HAL库由hal_bash.h索引。
```

- 外设寄存器基地址

- 外设寄存器结构体

- 位宏

- CPAL库索引，按照CMSIS规范，所有CPAL库接口索引统一在这个文件里：

  ```c
  #include "core_cm3.h"                       /* Processor and core peripherals */
  #include "system_rk2106.h"                  /* System Header */
  ```

## 6.3 系统初始化

该部分代码移植cmsis标准库系统初始化代码。

```c
system_<device>.c/.h
```

例如：

```c
system_rk2106.c/.h
```

主要包括以下部分：

- PLL设置
- 系统时钟更新

## 6.4 CMSIS-CORE库

```c
core_<cpu>.h	//如：core_cm3.h
```

- CMSIS版本信息
- ARM m核寄存器基地址，结构体，位宏

```c
/* Memory mapping of Core Hardware */
#define SCS_BASE            (0xE000E000UL)                            /*!< System Control Space Base Address */
#define ITM_BASE            (0xE0000000UL)                            /*!< ITM Base Address */
#define DWT_BASE            (0xE0001000UL)                            /*!< DWT Base Address */
#define TPI_BASE            (0xE0040000UL)                            /*!< TPI Base Address */
#define CoreDebug_BASE      (0xE000EDF0UL)                            /*!< Core Debug Base Address */
#define SysTick_BASE        (SCS_BASE +  0x0010UL)                    /*!< SysTick Base Address */
#define NVIC_BASE           (SCS_BASE +  0x0100UL)                    /*!< NVIC Base Address */
#define SCB_BASE            (SCS_BASE +  0x0D00UL)                    /*!< System Control Block Base Address */

#define SCnSCB              ((SCnSCB_Type    *)     SCS_BASE      )   /*!< System control Register not in SCB */
#define SCB                 ((SCB_Type       *)     SCB_BASE      )   /*!< SCB configuration struct */
#define SysTick             ((SysTick_Type   *)     SysTick_BASE  )   /*!< SysTick configuration struct */
#define NVIC                ((NVIC_Type      *)     NVIC_BASE     )   /*!< NVIC configuration struct */
#define ITM                 ((ITM_Type       *)     ITM_BASE      )   /*!< ITM configuration struct */
#define DWT                 ((DWT_Type       *)     DWT_BASE      )   /*!< DWT configuration struct */
#define TPI                 ((TPI_Type       *)     TPI_BASE      )   /*!< TPI configuration struct */
#define CoreDebug           ((CoreDebug_Type *)     CoreDebug_BASE)   /*!< Core Debug configuration struct */

#if defined (__MPU_PRESENT) && (__MPU_PRESENT == 1U)
  #define MPU_BASE          (SCS_BASE +  0x0D90UL)                    /*!< Memory Protection Unit */
  #define MPU               ((MPU_Type       *)     MPU_BASE      )   /*!< Memory Protection Unit */
#endif
```

- 核内寄存器访问

# 7 HAL库

此处填充Doxygen自动生成各模块文档.

# 附录

## clang format工具使用

https://clang.llvm.org/docs/ClangFormat.html

## doxygen工具使用

http://doxygen.nl

## CppUTest

https://cpputest.github.io/