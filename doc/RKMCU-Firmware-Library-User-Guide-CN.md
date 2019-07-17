------

**Rockchip**

# **RKMCU-Firmware-Library-User-Guide-CN**

发布版本:1.1

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
| 2019.03 | V1.1     | Kever Yang | 新增和完善目录结构，代码规范，单元测试 |
| 2019.04 | V2.0     | Jon Lin | 新增代码兼容性规范 |
| 2019.05 | V2.1     | Jon Lin | 新增BSP库规范 |

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
│   │   │       │   ├── soc.h
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
│   ├── bsp
│   │   └── RK2106
│   │       ├── bsp.c
│   │       └── bsp.h
│   └── hal
│       ├── inc
│       │   ├── hal_base.h
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
    └── rk2106
        ├── GCC
        └── src
            ├── hal_conf.h
            ├── rk2106_bsp.c
            ├── rk2106_bsp.h
            ├── main.c
            └── main.h

```

| 目录    | 内容     |
| -------- | ---- |
| doc     | 项目相关文档     |
| lib     | 用于集成到rt-thread, zephyr等RTOS的lib目录     |
| lib/CMSIS     | 以ARM CMSIS5为base, 加上Rockchip SoC定义    |
| lib/hal     | MCU的HAL驱动库代码     |
| lib/bsp     | MCU的芯片公共BSP配置的代码     |
| test     | HAL驱动的驱动测试代码     |

## 1.2 库组成预览

以RK2106为例：

![5](RKMCU-Firmware-Library-User-Guide-CN\5.jpg)

## 1.3 SOC目录文件

lib/CMSIS/Device目录存放SoC相关的硬件信息,寄存器定义文件以及芯片启动相关代码.

| 文件                 | 描述                                                         |
| -------------------- | ------------------------------------------------------------ |
| *startup_rk2106.S*   | 包含重置处理程序和异常向量的工具链特定文件,根据需求调整堆栈大小。 |
| *system_rk2106.c/.h* | 包含：系统start up汇编文件中在跳转main前调用的SystemInit()。 |
| *gcc_arm.ld*         | 链接脚本                                                     |
| *soc.h*      | 存放中断号、模块基地址、寄存器结构体、位宏信息的头文件，HAL库统一引用 |

## 1.4 HAL目录文件

lib/hal目录包含HAL库的代码主体, 其中src目录直接包含所有模块的C代码, inc目录包含对外API函数声明, 由于模块寄存器结构体和BIT定义都已包含在SOC头文件中, 各模块不再使用私有头文件, 如需要定义私有的宏或结构体, 可在C文件中直接定义。

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

##1.5 BSP目录文件

bsp库用来存放某个芯片公共的板级配置和dev资源，代码路径为./lib/bsp/project_name/bsp.c/h。

| 文件  | 描述                                                         |
| ----- | ------------------------------------------------------------ |
| bsp.c | 某个芯片公共的板级配置、HAL驱动需求的可抽象化的相关模块资源（如i2c_dev）。 |
| bsp.h | bsp.c头文件                                                  |

## 1.6 test目录文件

test目录用于存放HAL的unit test相关实现，其中：
test/unity:　测试框架Unity的代码实现，　来源于https://github.com/ThrowTheSwitch/Unity.git
test/hal: HAL驱动的测试代码
test_runner.c: 测试骨架程序，用于用户主程序调用

## 1.7 project目录文件

project目录基于板子或者项目建立工程，包含可运行的用户代码, 主要用于提供main函数调用各模块接口. 如rk2106-evb是针对该板子的工程，里面需要实现所有板子特有的软硬件初始化和模块定义。

| 文件       | 描述                                                         |
| ---------- | ------------------------------------------------------------ |
| hal_conf.h | 通过重定义该文件可以裁剪HAL库。                              |
| rkxx_bsp.c | 包含BSP初始化。                                              |
| main.c/.h  | 系统初始化：包括HAL_Init()，系统时钟初始化，外设初始化，用户应用。 |

# 2 如何使用固件库

## 2.1 直接裸系统运行

## 2.2 与RTOS集成

### 2.2.1 集成到rt-thread OS

## 2.3 Power Management

# 3 编程规范

本章提供必要的编程规范.

## 3.1 命名规则

芯片相关的以芯片型号为关键字标识,如start up汇编“*startup_rk2106.S*”，驱动相关的硬件抽象层文件以模块简写开头，如“*hal_uart.c*”.

### 3.1.1 函数命名

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

/* Module internal function */
HAL_Status USB_Reset(void);
HAL_Status USB_StartTransfer();
```

### 3.1.2 变量命名

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

### 3.1.3 宏定义, 枚举类型命名

所有宏定义及枚举类型使用全大写，下划线分隔单词．

### 3.1.4 寄存器命名

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
 * Copyright (c) 2018 Fuzhou Rockchip Electronics Co., Ltd
 */
```

## 3.3 排版

项目使用uncrustify工具辅助排版, 整体排版风格包括空行，空格，括号等的使用参考Linux kernel的coding style, 本文档仅单独说明不一样的部分.

```shell
# Ubuntu/Debian下面直接安装
sudo apt-get install uncrustify

# 建议使用0.66.1以上版本，如果版本过低，可以使用源码安装
git clone https://github.com/uncrustify/uncrustify.git

cd uncrustify
git checkout uncrustify-0.68.1
mkdir build
cd build

cmake -DCMAKE_BUILD_TYPE=Release ..
make
sudo make install

# 检查版本号
uncrustify --version

# 运行命令检查coding style合法性
uncrustify -c .uncrustify.cfg --replace --no-backup files
```

Jenkins也会使用以上命令进行校验，原则上需要通过校验才合并代码。

### 缩进

全文不使用TAB分隔, 默认使用4个空格取代TAB.

## 3.4 注释及文档

项目将使用Doxygen工具来自动化生成文档, 文件及HAL API函数的注释需要按照Doxygen的要求来写.

所有需要详细注释的内容，应出现在定义处，如函数API注释在C文件内，宏API注释在头文件内，两边都出现的只需要定义处详细注释即可。

### 3.4.1 Doxygen注释及其布局

#### Doxygen关键字

| 关键字       | 简介                                                         |
| ------------ | ------------------------------------------------------------ |
| @defgroup    | 指示注释块包含一组类、文件或命名空间的文档。可用于对类、文件或命名空间进行分类，并记录这些类别。还可以将组用作其他组的成员，从而构建组的层次结构。与@}成组使用。 |
| @addtogroup  | 定义组与@defgroup相同，但不同的是，使用相同名字的命令，多次将不会导致警告，而是一组文档合并。与@}成组使用。 |
| @verbatim    | 块注释且doxygen关键字无效，与@endverbatim配合使用。          |
| @endverbatim | 与@verbatim配合使用。                                        |
| @brief       | 简要描述                                                     |
| @parm        | 函数参数定义                                                 |
| @return      | 函数返回值定义                                               |
| @attention   | 需要注意的信息                                               |

#### RK_HAL_Driver库

文件注释统一输出到RK_HAL_Driver库，用法如下：

```
/** @addtogroup RK_HAL_Driver
 *  @{
 */

...

/** @} */
```

#### 定义外设模块

```
/** @addtogroup DEMO
 *  @{
 */

/** @} */
```

#### HOW-TO-USE

每个模块都应有完整、简明的介绍，用以说明如何使用该模块。

```
/** @defgroup How_To_Use How To Use
 @verbatim

 ==============================================================================
                    #### How to use ####
 ==============================================================================
 The DEMO driver can be used as follows:

 @endverbatim
 */
```

#### 外设驱动公共定义

所有公共的枚举、宏定义、宏定义函数、定义类型、结构体都添加到该组。

```
/** @defgroup DEMO_Exported_Definition_Group1 Basic Definition
 *  @{
 */

/** @} */
```

#### 外设驱动函数子模块

驱动文件接口如果属于以下分组，需添加到相应的子模块：

- 休眠唤醒接口

```
/** @defgroup DEMO_Exported_Functions_Group1 Suspend and Resume Functions
 @verbatim

 ===============================================================================
             #### Suspend and Resume functions ####
 ===============================================================================
 This section provides functions allowing to suspend and resume the module:

 ...to do or delete this row

 @endverbatim
 *  @{
 */

/** @} */
```

- 获取状态接口

```
/** @defgroup DEMO_Exported_Functions_Group2 State and Errors Functions
 @verbatim

 ===============================================================================
             #### State and Errors functions ####
 ===============================================================================
 This section provides functions allowing to get the status of the module:

 @endverbatim
 *  @{
 */

/** @} */
```

- IO操作

```
/** @defgroup DEMO_Exported_Functions_Group3 IO Functions
 @verbatim

 ===============================================================================
             #### IO functions ####
 ===============================================================================
 This section provides functions allowing to IO controlling:

 @endverbatim
 *  @{
 */

/** @} */
```

- 初始化反初始化

```
/** @defgroup DEMO_Exported_Functions_Group4 Init and DeInit Functions
 @verbatim

 ===============================================================================
             #### Init and deinit functions ####
 ===============================================================================
 This section provides functions allowing to init and deinit the module:

 ...to do or delete this row

 @endverbatim
 *  @{
 */

/** @} */
```

- 其他接口

```
/** @defgroup DEMO_Exported_Functions_Group5 Other Functions
 *  @{
 */

/** @} */
```

- 自定义子模块

```
/** @defgroup DEMO_Exported_Functions_Group5 XXXX Functions
 *  @{
 */

/** @} */
```

#### 代码注释

单行注释

```
/** This is a multi line comment */
```

多行注释

```
/**
 *  This is a multi line comment;
 *  Comment line 2.
 */
```

#### 函数注释

函数注释在函数定义处，通常为.c文件中，如函数有多处定义处，可将注释置于函数声明处。

```
/**
 * @brief  Stop TIMER counter.
 * @param  timerNum: Choose TIMER.
 * @return HAL_Status.
 * Just disable TIMER, and keep TIMER configuration.
 */
```

#### Doxygen工具使用

该库HAL驱动文件相应文档由doxygen工具生成，所以需要对文档注释检校是否符合doxygen文档规范。

linux

- 安装doxygen，参考链接 <http://www.doxygen.nl/download.html>，ubuntu下可以直接使用命令：sudo apt-get install doxygen，如果出现‘sh: 1: dot: not found’，请安装 sudo apt-get install graphviz。

- 当前最新版本 1.8.15

- 执行命令

  ```
  doxygen ./tools/Doxyfile
  ```

- 检查是否存在warning和error关键字。

### 3.4.2 通用代码注释

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

### 3.4.3 通用函数注释

所有函数按照doxygen标准注释，且所有公共api都应有相应注释。

## 3.5 函数

### 3.5.1 API参数要求

简单IP的API传参可以直接使用结构体指针作为作为控制器ID。
如

```c
/* Define in SoC header */
#define UART0               ((struct UART_REG *) UART0_BASE)

/* hal_uart.c */
HAL_Status HAL_UART_WriteByte(void *pUART, uint8_t *pdata, uint32_t cnt);

/* drv_uart.c or other user code */
HAL_UART_WriteByte(UART0, buf, 1);
```
须使用如下参数合法性检查，因改检查代码占用较多代码，只在Init做常规检查，其他入口以Assert形式检查(release时会关闭)。

```c
#define IS_UART_INSTANCE(INSTANCE) (((INSTANCE) == UART1) || ((INSTANCE) == UART2) || ((INSTANCE) == UART3) || ((INSTANCE) == UART4)
```

I2C/I2S/SPI/UART/PWM/ADC/DMA建议使用这种模式。

如果硬件信息不足，需要额外变量作为状态辅助，可以使用结构体，如MMC的mmc_host结构体形式；

### 3.5.2 参数检查要求

必须在合理范围内对参数做合法性检查，代码使用异常情况使用ASSERT()进行检查，只在debug版本生效，实际使用也可能碰到的出错类型，请使用普通代码检查参数合法性．

### 3.5.3 出错码

所有函数调用, 返回值使用有效出错码, 请不要自定义出错码, 出错码的值和含义参考自Linux kernel.
无特定返回值时使用0表示函数执行成功.

```c
typedef enum
{
    HAL_OK       = 0x00U,
    HAL_ERROR    = (-1),
    HAL_BUSY     = (-16),
    HAL_NODEV    = (-19),
    HAL_INVAL    = (-22),
    HAL_TIMEOUT  = (-110)
} HAL_Status;
```

### 3.5.4 注意点

- 为了降低模块间的耦合性、降低误调用的导致并发问题的可能，HAL库公共函数应被设计为仅由上层调用的结构，即HAL层间不进行相互调用接口；
- 如该接口函数、或该组接口函数可供HAL层互相调用，请在函数接口注释处、或函数分组注释处相应添加@attention关键字，并附上“this API allow direct use in the HAL layer” 或 “these APIs allow direct use in the HAL layer”。

```c
/**
 * @brief Set clk freq.
 * @param  clockName: CLOCK_Name id.
 * @param  rate: clk rate.
 * @return HAL_Status.
 * @attention this API allow direct use in the HAL layer.
 */
HAL_Status HAL_CRU_ClkSetFreq(eCLOCK_Name clockName, uint32_t rate)
{
	...
}
```

```c
/** @defgroup HAL_BASE_Exported_Functions_Group5 Other Functions
 *  @attention these APIs allow direct use in the HAL layer.
 *  @{
 */

```

## 3.6 变量，结构

### 3.6.1 数据类型

编码请使用位数明确的数据类型, 不推荐使用long, short等可能产生不同结果的类型, 一律使用stdint的*_t类型，如下:

```c
typedef	unsigned char            uint8_t
typedef	signed char              int8_t
typedef	unsigned short int       uint16_t
typedef	signed short int         int16_t
typedef	unsigned int             uint32_t
typedef	signed int               int32_t
typedef	unsigned long long       uint64_t
typedef	signed long long         int64_t
typedef	unsigned char            bool
```

### 3.6.2 结构体定义

结构体定义推荐使用类linux kernel普通类型，主要有以下规范：

- 不使用typedef以明确具体类型；
- 结构体大写命名；
- 结构体成员命名为小驼峰，包括变量，数组和函数指针，其中函数指针内的参数亦为小驼峰命名

```c
struct STRUCT_A {
uint32_t member1;
uint32_t memberTest;
uint32_t (*memTest)(struct GPIO_REG *pReg, uint32_t pinNum);
};
```

### 3.6.3 枚举类型定义

只用实例好的定义，命名规则"eMODULE_小驼峰":

```c
typedef enum
{
    UART_ONE_STOPBIT,
    UART_ONE_AND_HALF_OR_TWO_STOPBIT
} eUART_stopBit;
```

### 3.6.4 寄存器结构体定义

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

struct CRU_REG * const pCRU = (struct CRU_REG *)CRU_BASE;
```

访问寄存器原则上使用结构体指针访问，如有特殊需求可以使用宏定义。
寄存器设置值使用预定义的宏，不推荐使用立即数；带mask寄存器如CRU, GRF，使用专用接口处理数值:

```c
/* SOC OPS Marco */
#define SET_BIT(REG, BIT)    ((*(volatile uint32_t *)&(REG)) |= (BIT))
#define CLEAR_BIT(REG, MASK) ((*(volatile uint32_t *)&(REG)) &= ~(MASK))
#define READ_BIT(REG, MASK)  ((*(volatile uint32_t *)&(REG)) & (MASK))
#define CLEAR_REG(REG)       ((*(volatile uint32_t *)&(REG)) = (0x0))
#define WRITE_REG(REG, VAL)  ((*(volatile uint32_t *)&(REG)) = (VAL))
#define READ_REG(REG)        ((*(volatile uint32_t *)&(REG)))
#define MODIFY_REG(REG, CLEARMASK, SETMASK) \
        WRITE_REG((REG), (((READ_REG(REG)) & (~(CLEARMASK))) | (SETMASK)))
#define POSITION_VAL(VAL) (__CLZ(__RBIT(VAL)))

#define RK_CLRSET_BITS(CLR, SET) ((((CLR) | ((SET))) << 16) | ((SET)))
#define RK_SET_BITS(SET)         RK_CLRSET_BITS(0, SET)
#define RK_CLR_BITS(CLR)         RK_CLRSET_BITS(CLR, 0)
#define RK_CLRSET_REG_BITS(REG, CLR, SET) \
        WRITE_REG(REG, ((CLR) | (SET)) << 16 | ((SET)))
```

###3.6.5 寄存器位宏定义

寄存器BIT定义包括SHIFT, MASK, 以及对应的数值定义，格式为：

```c
#define UART_RBR_DATA_INPUT_SHIFT                          (0U)
#define UART_RBR_DATA_INPUT_MASK                           (0xFFU << UART_RBR_DATA_INPUT_SHIFT)
```

## 3.7 文件布局

### C代码源文件

驱动代码要求私有宏, 结构体, 变量等定义放C代码开头部分, 然后是私有函数, 然后是公共的API函数.

```c
/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2018 Fuzhou Rockchip Electronics Co., Ltd
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
 * Copyright (c) 2018 Fuzhou Rockchip Electronics Co., Ltd
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

![header](RKMCU-Firmware-Library-User-Guide-CN\header_call.jpg)

其中芯片的选择和模块选择统一位于hal_conf.h。

## 3.8 模块驱动

### 内容要求

覆盖模块硬件所有功能(以公司发布TRM为准)，如有暂未覆盖内容，请填写todo list；
模块驱动使用的设备ID由外部提供，驱动内部不设定义或限制，仅做合法性检查；
模块本身独立存在，除base内容(delay, 开关中断等)，不依赖任何其他模块
跨模块调用内容，属于OS适配层, 如clock初始化，中断注册，互斥锁等，
OS支持(如RT-Thread)部分，利用控制器状态防重入，原子操作可关中断，锁由OS适配层提供, HAL层不提供。

### API接口内容要求

每个驱动应提供如下接口：

- 模块初始化／反初始化
- IO访问函数
  - 阻塞
  - 非阻塞
- Suspend/Resume
- 状态查询

### 注释

使用doxygen的分组功能，对内容进行分组并分别提供文档, 每个驱动提供以下注释：

- 驱动使用指南(how to use this driver)
- 初始化反初始化流程
- IO访问流程
- Suspend/Resume流程及内容
- 设备状态，错误，模式描述

### 中断callback

由于中断是由上一层代码做注册，所以HAL层不提供callback(需要记录函数指针和参数)，需要callback的实现形式为：
上层(如rt-thread driver)须实现一个IrqHandler, 注册到对应模块中断，该IrqHandler包含HAL的IrqHandler用于硬件相关处理，另外加入软件逻辑完成锁，完成量，重复操作等功能。

### 外部引用HAL代码

hal代码对外的头文件引用是统一的'hal_base.h'，不是各个驱动的头文件如'hal_uart.h'，否则可能会有包含错误出现。
HAL对外的API需出现在各自头文件，如UART对外API出现在hal_uart.h，然后hal_uart.h被hal_base.h包含，参考3.7的包含关系。

## 3.9 模块兼容性处理

HAL设计以工程师自身对模块的理解为出发点，然而部分IP存在差异导致代码存在兼容性的问题，针对该问题提供以下规范（以下直接将os driver调用hal driver的行为具体到rt-thread 和hal之间的调用关系）。

注意：该部分并不包含驱动将本身对soc.h的依赖，如PD模块将PD id差异化的部分直接放在soc.h中。

### 3.9.1 驱动兼容、芯片间有差异

> I2S、PDM

将差异的部分的配置（通常为结构体）放到bsp中定义，实现多os复用bsp中声明的结构体配置。

### 3.9.2 驱动不兼容、芯片间有差异
> GPIO、CRU、PMU

将驱动中公用的部分抽离出来复用，驱动中差异的部分根据芯片不同放在另外一个文件，类似hal_cru.c与hal_cru_pisces.c。

### 3.9.3 子模块
> USB、SFC、SDIO

针对公用部分设计出core、子模块复用core，类似hal_pcd.c <- hal_usb_core.c   hal_hcd.c <- hal_usb_core.c。

### 3.9.4 IP完全不同:
抽象为两个概念的模块。

### 3.9.5 IP小改动的处理

> USB

模块在IP升级上，导致新增了部分功能，出现原有接口的新的组合方式，可以考虑新增extend接口，如hal_pcd_ex.c。

# 4 Common资源

## 4.1 DEBUG相关

代码实现参考lib/hal/inc/hal_debug.h。

### 4.1.1 打印等级

系统提供下面几个级别的宏，用于日常debug使用，在产品阶段可关闭，不占用空间：
HAL_DBG(), 对应普通info级别；
HAL_DBG_WRN()
HAL_DBG_ERR()

### 4.1.2 ASSERT()

API入口及其他需要检查参数合法性的地方使用HAL_ASSERT()进行检查，该接口仅在debug模式启用，非debug模式不占用代码空间．

HAL_ASSERT()使用了weak函数AssertFailed，位于lib/hal/src/hal_debug.c，用户实现代码有不同需求时可以自己实现函数来override.

## 4.2 系统Delay()

HAL base提供基于系统tick的HAL_DelayUs()，可以在HAL driver中直接使用。

## 4.3 Interrupt

## 4.4 Malloc()

# 5 单元测试

## 5.1 框架

使用Unity框架，具体代码可以看test/hal/test_timer.c，可用接口请查看test/unity/extras/fixture/src/unity_fixture.h和test/unity/src/unity.h

## 5.2 提交

驱动需要提交的测试代码位于test/hal/目录，'test_'作为前缀对应驱动测试代码，

每个驱动只要提供对应的一个c文件并把自己的group添加到test_main.c，里面的测试case会被test_main自动包含和调用，test_main()一般由板级流程(如rk2106-evb)调用；

## 5.3 实现

测试代码文件就只需要包含"hal_base.h"和"unity_fixture.h"，测试目标是HAL driver的所有API.

可参考test/hal目录下已有实现。

测试代码同时作为驱动参考代码使用，后续是否作为对外的参考代码再讨论

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

# 7 BSP库

为了提高板级配置的通用性，固件库提供通用的板级配置以针对”同一芯片不同开发板”的通用板级配置，将对同一芯片在不同产品形态或不同的OS上的开发提供便捷，而差异化的板级配置，由应用层自行设计或增加上层BSP：提供以下资源：

- 各个模块通用的硬件初始化函数，如SFC 的IO MUX，CLK，在同一芯片中的不同开发板中的实现是相同；
- 模块驱动中涉及的设备结构体资源，要求仅依赖于具体芯片而实现。

## 7.1 硬件初始化函数

提供函数来完成模块通用的硬件初始化流程，如IOMUX，CLOCK配置等。

内部函数接口为相应的模块初始化的全局函数，且添加weak属性以允许上层重写接口，调用次序则由应用层或上层BSP具体规划，如：

```c
__weak void BSP_SFC_Init(void)
{
    CRU->CRU_CLKSEL_CON[9] = (1 << 15) | (0 << 8) | (((0x1 << 15) | (0x3F << 8)) << 16);
    GRF->GPIO_IO2MUX[1] = (1 << 10) | ((3 << 10) << 16);
}
```

## 7.2 设备结构体

HAL层模块驱动中涉及的设备结构体资源，如AUDIOPWM驱动中使用到的PWM，其配置依赖于具体芯片，如AUDIOPWM_BASE，DMA_BASE，mclk。

**结构体实例**

bsp.c中实现HAL层驱动所需结构体的，需有相应模块宏开关，结构体前缀为g_以提示为全局变量，建议存放寄存器基地址的地方直接使用寄存器结构体实例的指针。

```C
#ifdef HAL_AUDIOPWM_MODULE_ENABLED
const struct HAL_AUDIOPWM_DEV g_audioPwmDev =
{
    .pReg = AUDIOPWM,
    .mclk = CLK_AUDPWM,
    .hclk = HCLK_AUDPWM_GATE,
    .txDmaData =
    {
        .addr = (uint32_t)&(AUDIOPWM->FIFO_ENTRY),
        .addrWidth = DMA_SLAVE_BUSWIDTH_4_BYTES,
        .maxBurst = 8,
        .dmaReqCh = DMA_REQ_AUDIOPWM,
        .dmac = DMA,
    },
};
#endif
```

**结构体引用**

bsp.h中提供结构体声明，需有相应模块宏开关。

```C
#ifdef HAL_AUDIOPWM_MODULE_ENABLED
extern const struct HAL_AUDIOPWM_DEV g_audioPwmDev;
#endif
```

# 8 HAL模块文档

此处填充Doxygen自动生成各模块文档.

# 附录

## doxygen工具使用

<http://doxygen.nl>

## Unity

<http://www.throwtheswitch.org/unityz>
