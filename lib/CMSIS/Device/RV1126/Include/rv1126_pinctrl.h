/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2020 Rockchip Electronics Co., Ltd
 */
#ifndef __RV1126_PINCTRL_H__
#define __RV1126_PINCTRL_H__

#define FUNC_GPIO0A0_FUNC1_CLK_REF             GPIO_BANK0,GPIO_PIN_A0,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO0A1_FUNC1_TSADC_SHUT_M0       GPIO_BANK0,GPIO_PIN_A1,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO0A1_FUNC2_TSADC_SHUTORG       GPIO_BANK0,GPIO_PIN_A1,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO0A2_FUNC1_CLK_32K             GPIO_BANK0,GPIO_PIN_A2,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO0A3_FUNC1_SDMMC0_DET          GPIO_BANK0,GPIO_PIN_A3,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO0A4_FUNC1_SPI0_CS1N_M0        GPIO_BANK0,GPIO_PIN_A4,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO0A5_FUNC1_SPI0_CS0N_M0        GPIO_BANK0,GPIO_PIN_A5,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO0A6_FUNC1_SPI0_MOSI_M0        GPIO_BANK0,GPIO_PIN_A6,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO0A7_FUNC1_SPI0_MISO_M0        GPIO_BANK0,GPIO_PIN_A7,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO0B0_FUNC1_SPI0_CLK_M0         GPIO_BANK0,GPIO_PIN_B0,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO0B1_FUNC1_PMIC_INT            GPIO_BANK0,GPIO_PIN_B1,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO0B1_FUNC3_PWM7_PIN_M0         GPIO_BANK0,GPIO_PIN_B1,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO0B2_FUNC1_PMIC_SLEEP          GPIO_BANK0,GPIO_PIN_B2,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO0B2_FUNC2_TSADC_SHUT_M1       GPIO_BANK0,GPIO_PIN_B2,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO0B2_FUNC3_PWM6_PIN_M0         GPIO_BANK0,GPIO_PIN_B2,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO0B3_FUNC1_FLASH_VOL_SEL       GPIO_BANK0,GPIO_PIN_B3,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO0B4_FUNC1_I2C0_SCL            GPIO_BANK0,GPIO_PIN_B4,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO0B5_FUNC1_I2C0_SDA            GPIO_BANK0,GPIO_PIN_B5,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO0B6_FUNC2_UART1_TX_M0         GPIO_BANK0,GPIO_PIN_B6,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO0B6_FUNC3_PWM0_PIN_M0         GPIO_BANK0,GPIO_PIN_B6,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO0B7_FUNC2_UART1_RX_M0         GPIO_BANK0,GPIO_PIN_B7,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO0B7_FUNC3_PWM1_PIN_M0         GPIO_BANK0,GPIO_PIN_B7,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO0C0_FUNC1_SDMMC0_PWR          GPIO_BANK0,GPIO_PIN_C0,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO0C0_FUNC2_UART1_RTSN_M0       GPIO_BANK0,GPIO_PIN_C0,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO0C0_FUNC3_PWM2_PIN_M0         GPIO_BANK0,GPIO_PIN_C0,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO0C1_FUNC1_PMU_DEBUG           GPIO_BANK0,GPIO_PIN_C1,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO0C1_FUNC2_UART1_CTSN_M0       GPIO_BANK0,GPIO_PIN_C1,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO0C1_FUNC3_PWM3_PIN_M0         GPIO_BANK0,GPIO_PIN_C1,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO0C2_FUNC1_I2C2_SCL            GPIO_BANK0,GPIO_PIN_C2,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO0C2_FUNC3_PWM4_PIN_M0         GPIO_BANK0,GPIO_PIN_C2,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO0C3_FUNC1_I2C2_SDA            GPIO_BANK0,GPIO_PIN_C3,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO0C3_FUNC3_PWM5_PIN_M0         GPIO_BANK0,GPIO_PIN_C3,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO0C4_FUNC1_FLASH_D0            GPIO_BANK0,GPIO_PIN_C4,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO0C4_FUNC2_EMMC_D0             GPIO_BANK0,GPIO_PIN_C4,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO0C5_FUNC1_FLASH_D1            GPIO_BANK0,GPIO_PIN_C5,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO0C5_FUNC2_EMMC_D1             GPIO_BANK0,GPIO_PIN_C5,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO0C6_FUNC1_FLASH_D2            GPIO_BANK0,GPIO_PIN_C6,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO0C6_FUNC2_EMMC_D2             GPIO_BANK0,GPIO_PIN_C6,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO0C7_FUNC1_FLASH_D3            GPIO_BANK0,GPIO_PIN_C7,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO0C7_FUNC2_EMMC_D3             GPIO_BANK0,GPIO_PIN_C7,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO0D0_FUNC1_FLASH_D4            GPIO_BANK0,GPIO_PIN_D0,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO0D0_FUNC2_EMMC_D4             GPIO_BANK0,GPIO_PIN_D0,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO0D1_FUNC1_FLASH_D5            GPIO_BANK0,GPIO_PIN_D1,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO0D1_FUNC2_EMMC_D5             GPIO_BANK0,GPIO_PIN_D1,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO0D1_FUNC3_FSPI_CS1N           GPIO_BANK0,GPIO_PIN_D1,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO0D2_FUNC1_FLASH_D6            GPIO_BANK0,GPIO_PIN_D2,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO0D2_FUNC2_EMMC_D6             GPIO_BANK0,GPIO_PIN_D2,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO0D3_FUNC1_FLASH_D7            GPIO_BANK0,GPIO_PIN_D3,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO0D3_FUNC2_EMMC_D7             GPIO_BANK0,GPIO_PIN_D3,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO0D4_FUNC1_FLASH_CS0N          GPIO_BANK0,GPIO_PIN_D4,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO0D4_FUNC3_FSPI_CS0N           GPIO_BANK0,GPIO_PIN_D4,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO0D4_FUNC4_I2S1_MCLK_M0        GPIO_BANK0,GPIO_PIN_D4,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO0D5_FUNC1_FLASH_WRN           GPIO_BANK0,GPIO_PIN_D5,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO0D5_FUNC2_EMMC_CMD            GPIO_BANK0,GPIO_PIN_D5,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO0D6_FUNC3_FSPI_D2             GPIO_BANK0,GPIO_PIN_D6,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO0D6_FUNC4_I2S1_SDO_M0         GPIO_BANK0,GPIO_PIN_D6,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO0D7_FUNC1_FLASH_CLE           GPIO_BANK0,GPIO_PIN_D7,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO0D7_FUNC2_EMMC_CLKO           GPIO_BANK0,GPIO_PIN_D7,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO1A0_FUNC1_FLASH_ALE           GPIO_BANK1,GPIO_PIN_A0,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO1A0_FUNC3_FSPI_D0             GPIO_BANK1,GPIO_PIN_A0,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO1A0_FUNC4_I2S1_LRCK_M0        GPIO_BANK1,GPIO_PIN_A0,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO1A1_FUNC1_FLASH_RDYN          GPIO_BANK1,GPIO_PIN_A1,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO1A1_FUNC3_FSPI_D1             GPIO_BANK1,GPIO_PIN_A1,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO1A1_FUNC4_I2S1_SCLK_M0        GPIO_BANK1,GPIO_PIN_A1,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO1A2_FUNC1_FLASH_RDN           GPIO_BANK1,GPIO_PIN_A2,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO1A2_FUNC3_FSPI_D3             GPIO_BANK1,GPIO_PIN_A2,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO1A2_FUNC4_I2S1_SDI_M0         GPIO_BANK1,GPIO_PIN_A2,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO1A3_FUNC1_FLASH_WPN           GPIO_BANK1,GPIO_PIN_A3,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO1A3_FUNC2_EMMC_RSTN           GPIO_BANK1,GPIO_PIN_A3,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO1A3_FUNC3_FSPI_CLK            GPIO_BANK1,GPIO_PIN_A3,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO1A4_FUNC1_SDMMC0_D0           GPIO_BANK1,GPIO_PIN_A4,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO1A4_FUNC2_TEST_CLK1_OUT       GPIO_BANK1,GPIO_PIN_A4,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO1A4_FUNC3_UART2_RX_M0         GPIO_BANK1,GPIO_PIN_A4,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO1A5_FUNC1_SDMMC0_D1           GPIO_BANK1,GPIO_PIN_A5,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO1A5_FUNC2_TEST_CLK0_OUT       GPIO_BANK1,GPIO_PIN_A5,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO1A5_FUNC3_UART2_TX_M0         GPIO_BANK1,GPIO_PIN_A5,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO1A5_FUNC4_MCU_JTAG_TRSTN      GPIO_BANK1,GPIO_PIN_A5,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO1A6_FUNC1_SDMMC0_D2           GPIO_BANK1,GPIO_PIN_A6,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO1A6_FUNC2_UART3_RX_M1         GPIO_BANK1,GPIO_PIN_A6,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO1A6_FUNC3_A7_JTAG_TCK_M0      GPIO_BANK1,GPIO_PIN_A6,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO1A6_FUNC4_MCU_JTAG_TCK        GPIO_BANK1,GPIO_PIN_A6,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO1A7_FUNC1_SDMMC0_D3           GPIO_BANK1,GPIO_PIN_A7,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO1A7_FUNC2_UART3_TX_M1         GPIO_BANK1,GPIO_PIN_A7,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO1A7_FUNC3_A7_JTAG_TMS_M0      GPIO_BANK1,GPIO_PIN_A7,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO1A7_FUNC4_MCU_JTAG_TMS        GPIO_BANK1,GPIO_PIN_A7,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO1B0_FUNC1_SDMMC0_CLK          GPIO_BANK1,GPIO_PIN_B0,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO1B0_FUNC2_UART3_RTSN_M1       GPIO_BANK1,GPIO_PIN_B0,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO1B0_FUNC4_MCU_JTAG_TDO        GPIO_BANK1,GPIO_PIN_B0,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO1B1_FUNC1_SDMMC0_CMD          GPIO_BANK1,GPIO_PIN_B1,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO1B1_FUNC2_UART3_CTSN_M1       GPIO_BANK1,GPIO_PIN_B1,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO1B1_FUNC4_MCU_JTAG_TDI        GPIO_BANK1,GPIO_PIN_B1,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO1B2_FUNC1_SDIO_CLK            GPIO_BANK1,GPIO_PIN_B2,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO1B3_FUNC1_SDIO_CMD            GPIO_BANK1,GPIO_PIN_B3,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO1B4_FUNC1_SDIO_D0             GPIO_BANK1,GPIO_PIN_B4,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO1B5_FUNC1_SDIO_D1             GPIO_BANK1,GPIO_PIN_B5,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO1B6_FUNC1_SDIO_D2             GPIO_BANK1,GPIO_PIN_B6,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO1B7_FUNC1_SDIO_D3             GPIO_BANK1,GPIO_PIN_B7,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO1C0_FUNC1_UART0_RTSN          GPIO_BANK1,GPIO_PIN_C0,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO1C1_FUNC1_UART0_CTSN          GPIO_BANK1,GPIO_PIN_C1,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO1C2_FUNC1_UART0_RX            GPIO_BANK1,GPIO_PIN_C2,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO1C3_FUNC1_UART0_TX            GPIO_BANK1,GPIO_PIN_C3,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO1C4_FUNC1_I2S2_SDO_M0         GPIO_BANK1,GPIO_PIN_C4,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO1C4_FUNC3_SPI1_MOSI_M1        GPIO_BANK1,GPIO_PIN_C4,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO1C4_FUNC4_FLASH_TRIG_OUT      GPIO_BANK1,GPIO_PIN_C4,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO1C5_FUNC1_I2S2_SDI_M0         GPIO_BANK1,GPIO_PIN_C5,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO1C5_FUNC3_SPI1_MISO_M1        GPIO_BANK1,GPIO_PIN_C5,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO1C5_FUNC4_FLASH_TRIG_IN       GPIO_BANK1,GPIO_PIN_C5,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO1C6_FUNC1_I2S2_SCLK_M0        GPIO_BANK1,GPIO_PIN_C6,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO1C6_FUNC3_SPI1_CLK_M1         GPIO_BANK1,GPIO_PIN_C6,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO1C6_FUNC4_PRELIGHT_TRIG_OUT   GPIO_BANK1,GPIO_PIN_C6,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO1C6_FUNC5_UART1_RTSN_M1       GPIO_BANK1,GPIO_PIN_C6,PIN_CONFIG_MUX_FUNC5
#define FUNC_GPIO1C7_FUNC1_I2S2_LRCK_M0        GPIO_BANK1,GPIO_PIN_C7,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO1C7_FUNC3_SPI1_CS0N_M1        GPIO_BANK1,GPIO_PIN_C7,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO1C7_FUNC5_UART1_CTSN_M1       GPIO_BANK1,GPIO_PIN_C7,PIN_CONFIG_MUX_FUNC5
#define FUNC_GPIO1D0_FUNC1_I2S2_MCLK_M0        GPIO_BANK1,GPIO_PIN_D0,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO1D0_FUNC2_SDIO_DET            GPIO_BANK1,GPIO_PIN_D0,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO1D0_FUNC3_SPI1_CS1N_M1        GPIO_BANK1,GPIO_PIN_D0,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO1D0_FUNC4_I2C5_SCL_M2         GPIO_BANK1,GPIO_PIN_D0,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO1D0_FUNC5_UART1_TX_M1         GPIO_BANK1,GPIO_PIN_D0,PIN_CONFIG_MUX_FUNC5
#define FUNC_GPIO1D1_FUNC2_SDIO_PWR            GPIO_BANK1,GPIO_PIN_D1,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO1D1_FUNC4_I2C5_SDA_M2         GPIO_BANK1,GPIO_PIN_D1,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO1D1_FUNC5_UART1_RX_M1         GPIO_BANK1,GPIO_PIN_D1,PIN_CONFIG_MUX_FUNC5
#define FUNC_GPIO1D2_FUNC1_I2C1_SDA            GPIO_BANK1,GPIO_PIN_D2,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO1D2_FUNC3_UART4_RTSN_M2       GPIO_BANK1,GPIO_PIN_D2,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO1D3_FUNC1_I2C1_SCL            GPIO_BANK1,GPIO_PIN_D3,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO1D3_FUNC3_UART4_CTSN_M2       GPIO_BANK1,GPIO_PIN_D3,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO1D4_FUNC3_UART4_RX_M2         GPIO_BANK1,GPIO_PIN_D4,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO1D5_FUNC1_SPI0_CS1N_M1        GPIO_BANK1,GPIO_PIN_D5,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO1D5_FUNC2_I2S1_MCLK_M1        GPIO_BANK1,GPIO_PIN_D5,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO1D5_FUNC3_UART4_TX_M2         GPIO_BANK1,GPIO_PIN_D5,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO1D6_FUNC1_SPI0_MOSI_M1        GPIO_BANK1,GPIO_PIN_D6,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO1D6_FUNC2_I2S1_SCLK_M1        GPIO_BANK1,GPIO_PIN_D6,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO1D6_FUNC3_I2C3_SCL_M2         GPIO_BANK1,GPIO_PIN_D6,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO1D7_FUNC1_SPI0_MISO_M1        GPIO_BANK1,GPIO_PIN_D7,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO1D7_FUNC2_I2S1_LRCK_M1        GPIO_BANK1,GPIO_PIN_D7,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO1D7_FUNC3_I2C3_SDA_M2         GPIO_BANK1,GPIO_PIN_D7,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO2A0_FUNC1_SPI0_CS0N_M1        GPIO_BANK2,GPIO_PIN_A0,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO2A0_FUNC2_I2S1_SDI_M1         GPIO_BANK2,GPIO_PIN_A0,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO2A0_FUNC3_UART5_TX_M2         GPIO_BANK2,GPIO_PIN_A0,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO2A1_FUNC1_SPI0_CLK_M1         GPIO_BANK2,GPIO_PIN_A1,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO2A1_FUNC2_I2S1_SDO_M1         GPIO_BANK2,GPIO_PIN_A1,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO2A1_FUNC3_UART5_RX_M2         GPIO_BANK2,GPIO_PIN_A1,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO2A2_FUNC1_MIPICSI_CLK1        GPIO_BANK2,GPIO_PIN_A2,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO2A2_FUNC3_UART5_RTSN_M2       GPIO_BANK2,GPIO_PIN_A2,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO2A3_FUNC1_MIPICSI_CLK0        GPIO_BANK2,GPIO_PIN_A3,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO2A3_FUNC3_UART5_CTSN_M2       GPIO_BANK2,GPIO_PIN_A3,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO2A4_FUNC1_LCDC_D0             GPIO_BANK2,GPIO_PIN_A4,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO2A4_FUNC2_RGMII_TXD3_M1       GPIO_BANK2,GPIO_PIN_A4,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO2A4_FUNC3_CIF_D0_M1           GPIO_BANK2,GPIO_PIN_A4,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO2A4_FUNC4_UART4_RTSN_M1       GPIO_BANK2,GPIO_PIN_A4,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO2A5_FUNC1_LCDC_D1             GPIO_BANK2,GPIO_PIN_A5,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO2A5_FUNC2_RGMII_CRS_M1        GPIO_BANK2,GPIO_PIN_A5,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO2A5_FUNC3_CIF_D1_M1           GPIO_BANK2,GPIO_PIN_A5,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO2A5_FUNC4_UART4_CTSN_M1       GPIO_BANK2,GPIO_PIN_A5,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO2A5_FUNC7_I2C5_SCL_M0         GPIO_BANK2,GPIO_PIN_A5,PIN_CONFIG_MUX_FUNC7
#define FUNC_GPIO2A6_FUNC1_LCDC_D2             GPIO_BANK2,GPIO_PIN_A6,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO2A6_FUNC2_RGMII_COL_M1        GPIO_BANK2,GPIO_PIN_A6,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO2A6_FUNC3_CIF_D2_M1           GPIO_BANK2,GPIO_PIN_A6,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO2A6_FUNC4_UART4_TX_M1         GPIO_BANK2,GPIO_PIN_A6,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO2A6_FUNC5_PWM5_PIN_M1         GPIO_BANK2,GPIO_PIN_A6,PIN_CONFIG_MUX_FUNC5
#define FUNC_GPIO2A7_FUNC1_LCDC_D3             GPIO_BANK2,GPIO_PIN_A7,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO2A7_FUNC2_I2S2_SDO_M1         GPIO_BANK2,GPIO_PIN_A7,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO2A7_FUNC4_UART4_RX_M1         GPIO_BANK2,GPIO_PIN_A7,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO2A7_FUNC5_PWM4_PIN_M1         GPIO_BANK2,GPIO_PIN_A7,PIN_CONFIG_MUX_FUNC5
#define FUNC_GPIO2A7_FUNC6_SPI0_CS0N_M2        GPIO_BANK2,GPIO_PIN_A7,PIN_CONFIG_MUX_FUNC6
#define FUNC_GPIO2B0_FUNC1_LCDC_D4             GPIO_BANK2,GPIO_PIN_B0,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO2B0_FUNC2_I2S2_SDI_M1         GPIO_BANK2,GPIO_PIN_B0,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO2B0_FUNC4_UART5_TX_M1         GPIO_BANK2,GPIO_PIN_B0,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO2B0_FUNC5_PWM3_PIN_M1         GPIO_BANK2,GPIO_PIN_B0,PIN_CONFIG_MUX_FUNC5
#define FUNC_GPIO2B0_FUNC6_SPI0_MOSI_M2        GPIO_BANK2,GPIO_PIN_B0,PIN_CONFIG_MUX_FUNC6
#define FUNC_GPIO2B1_FUNC1_LCDC_D5             GPIO_BANK2,GPIO_PIN_B1,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO2B1_FUNC2_I2S2_SCLK_M1        GPIO_BANK2,GPIO_PIN_B1,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO2B1_FUNC4_UART5_RX_M1         GPIO_BANK2,GPIO_PIN_B1,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO2B1_FUNC5_PWM2_PIN_M1         GPIO_BANK2,GPIO_PIN_B1,PIN_CONFIG_MUX_FUNC5
#define FUNC_GPIO2B1_FUNC6_SPI0_MISO_M2        GPIO_BANK2,GPIO_PIN_B1,PIN_CONFIG_MUX_FUNC6
#define FUNC_GPIO2B2_FUNC1_LCDC_D6             GPIO_BANK2,GPIO_PIN_B2,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO2B2_FUNC2_I2S2_LRCK_M1        GPIO_BANK2,GPIO_PIN_B2,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO2B2_FUNC4_UART5_RTSN_M1       GPIO_BANK2,GPIO_PIN_B2,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO2B2_FUNC5_PWM1_PIN_M1         GPIO_BANK2,GPIO_PIN_B2,PIN_CONFIG_MUX_FUNC5
#define FUNC_GPIO2B2_FUNC6_SPI0_CLK_M2         GPIO_BANK2,GPIO_PIN_B2,PIN_CONFIG_MUX_FUNC6
#define FUNC_GPIO2B3_FUNC1_LCDC_D7             GPIO_BANK2,GPIO_PIN_B3,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO2B3_FUNC2_I2S2_MCLK_M1        GPIO_BANK2,GPIO_PIN_B3,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO2B3_FUNC3_CIF_D3_M1           GPIO_BANK2,GPIO_PIN_B3,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO2B3_FUNC4_UART5_CTSN_M1       GPIO_BANK2,GPIO_PIN_B3,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO2B3_FUNC5_PWM0_PIN_M1         GPIO_BANK2,GPIO_PIN_B3,PIN_CONFIG_MUX_FUNC5
#define FUNC_GPIO2B3_FUNC6_SPI0_CS1N_M2        GPIO_BANK2,GPIO_PIN_B3,PIN_CONFIG_MUX_FUNC6
#define FUNC_GPIO2B3_FUNC7_I2C5_SDA_M0         GPIO_BANK2,GPIO_PIN_B3,PIN_CONFIG_MUX_FUNC7
#define FUNC_GPIO2B4_FUNC1_LCDC_D8             GPIO_BANK2,GPIO_PIN_B4,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO2B4_FUNC2_RGMII_RXDV_M1       GPIO_BANK2,GPIO_PIN_B4,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO2B4_FUNC3_CIF_D4_M1           GPIO_BANK2,GPIO_PIN_B4,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO2B5_FUNC1_LCDC_D9             GPIO_BANK2,GPIO_PIN_B5,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO2B5_FUNC2_RGMII_RXD0_M1       GPIO_BANK2,GPIO_PIN_B5,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO2B5_FUNC3_CIF_D5_M1           GPIO_BANK2,GPIO_PIN_B5,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO2B6_FUNC1_LCDC_D10            GPIO_BANK2,GPIO_PIN_B6,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO2B6_FUNC2_RGMII_RXD1_M1       GPIO_BANK2,GPIO_PIN_B6,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO2B6_FUNC3_CIF_D6_M1           GPIO_BANK2,GPIO_PIN_B6,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO2B7_FUNC1_LCDC_D11            GPIO_BANK2,GPIO_PIN_B7,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO2B7_FUNC2_RGMII_CLK_M1        GPIO_BANK2,GPIO_PIN_B7,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO2B7_FUNC3_CIF_D7_M1           GPIO_BANK2,GPIO_PIN_B7,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO2C0_FUNC1_LCDC_D12            GPIO_BANK2,GPIO_PIN_C0,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO2C0_FUNC2_RGMII_RXER_M1       GPIO_BANK2,GPIO_PIN_C0,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO2C0_FUNC3_CIF_D8_M1           GPIO_BANK2,GPIO_PIN_C0,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO2C1_FUNC1_LCDC_D13            GPIO_BANK2,GPIO_PIN_C1,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO2C1_FUNC2_RGMII_MDIO_M1       GPIO_BANK2,GPIO_PIN_C1,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO2C1_FUNC3_CIF_D9_M1           GPIO_BANK2,GPIO_PIN_C1,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO2C2_FUNC1_LCDC_D14            GPIO_BANK2,GPIO_PIN_C2,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO2C2_FUNC2_RGMII_MDC_M1        GPIO_BANK2,GPIO_PIN_C2,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO2C2_FUNC3_CIF_D10_M1          GPIO_BANK2,GPIO_PIN_C2,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO2C3_FUNC1_LCDC_D15            GPIO_BANK2,GPIO_PIN_C3,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO2C3_FUNC2_RGMII_TXD0_M1       GPIO_BANK2,GPIO_PIN_C3,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO2C3_FUNC3_CIF_D11_M1          GPIO_BANK2,GPIO_PIN_C3,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO2C4_FUNC1_LCDC_D16            GPIO_BANK2,GPIO_PIN_C4,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO2C4_FUNC2_RGMII_TXD1_M1       GPIO_BANK2,GPIO_PIN_C4,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO2C4_FUNC3_CIF_D12_M1          GPIO_BANK2,GPIO_PIN_C4,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO2C5_FUNC1_LCDC_D17            GPIO_BANK2,GPIO_PIN_C5,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO2C5_FUNC2_CLK_OUT_ETHERNET_M1 GPIO_BANK2,GPIO_PIN_C5,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO2C5_FUNC3_CIF_D13_M1          GPIO_BANK2,GPIO_PIN_C5,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO2C6_FUNC1_LCDC_D18            GPIO_BANK2,GPIO_PIN_C6,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO2C6_FUNC2_RGMII_TXEN_M1       GPIO_BANK2,GPIO_PIN_C6,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO2C6_FUNC3_CIF_D14_M1          GPIO_BANK2,GPIO_PIN_C6,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO2C7_FUNC1_LCDC_D19            GPIO_BANK2,GPIO_PIN_C7,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO2C7_FUNC2_RGMII_RXD2_M1       GPIO_BANK2,GPIO_PIN_C7,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO2C7_FUNC3_CIF_D15_M1          GPIO_BANK2,GPIO_PIN_C7,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO2C7_FUNC6_I2S1_MCLK_M2        GPIO_BANK2,GPIO_PIN_C7,PIN_CONFIG_MUX_FUNC6
#define FUNC_GPIO2D0_FUNC1_LCDC_D20            GPIO_BANK2,GPIO_PIN_D0,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO2D0_FUNC2_RGMII_RXD3_M1       GPIO_BANK2,GPIO_PIN_D0,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO2D0_FUNC3_CIF_VSYNC_M1        GPIO_BANK2,GPIO_PIN_D0,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO2D0_FUNC6_I2S1_SDO_M2         GPIO_BANK2,GPIO_PIN_D0,PIN_CONFIG_MUX_FUNC6
#define FUNC_GPIO2D1_FUNC1_LCDC_D21            GPIO_BANK2,GPIO_PIN_D1,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO2D1_FUNC2_RGMII_TXD2_M1       GPIO_BANK2,GPIO_PIN_D1,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO2D1_FUNC3_CIF_CLKOUT_M1       GPIO_BANK2,GPIO_PIN_D1,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO2D1_FUNC6_I2S1_SCLK_M2        GPIO_BANK2,GPIO_PIN_D1,PIN_CONFIG_MUX_FUNC6
#define FUNC_GPIO2D2_FUNC1_LCDC_D22            GPIO_BANK2,GPIO_PIN_D2,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO2D2_FUNC2_RGMII_TXCLK_M1      GPIO_BANK2,GPIO_PIN_D2,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO2D2_FUNC3_CIF_CLKIN_M1        GPIO_BANK2,GPIO_PIN_D2,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO2D2_FUNC6_I2S1_LRCK_M2        GPIO_BANK2,GPIO_PIN_D2,PIN_CONFIG_MUX_FUNC6
#define FUNC_GPIO2D3_FUNC1_LCDC_D23            GPIO_BANK2,GPIO_PIN_D3,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO2D3_FUNC2_RGMII_RXCLK_M1      GPIO_BANK2,GPIO_PIN_D3,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO2D3_FUNC3_CIF_HSYNC_M1        GPIO_BANK2,GPIO_PIN_D3,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO2D3_FUNC6_I2S1_SDI_M2         GPIO_BANK2,GPIO_PIN_D3,PIN_CONFIG_MUX_FUNC6
#define FUNC_GPIO2D4_FUNC1_LCDC_DEN            GPIO_BANK2,GPIO_PIN_D4,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO2D4_FUNC5_PWM6_PIN_M1         GPIO_BANK2,GPIO_PIN_D4,PIN_CONFIG_MUX_FUNC5
#define FUNC_GPIO2D4_FUNC6_SPI1_CS0N_M2        GPIO_BANK2,GPIO_PIN_D4,PIN_CONFIG_MUX_FUNC6
#define FUNC_GPIO2D4_FUNC7_I2C3_SCL_M1         GPIO_BANK2,GPIO_PIN_D4,PIN_CONFIG_MUX_FUNC7
#define FUNC_GPIO2D5_FUNC1_LCDC_HSYNC          GPIO_BANK2,GPIO_PIN_D5,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO2D5_FUNC5_PWM10_PIN_M1        GPIO_BANK2,GPIO_PIN_D5,PIN_CONFIG_MUX_FUNC5
#define FUNC_GPIO2D5_FUNC6_SPI1_CLK_M2         GPIO_BANK2,GPIO_PIN_D5,PIN_CONFIG_MUX_FUNC6
#define FUNC_GPIO2D5_FUNC7_I2C3_SDA_M1         GPIO_BANK2,GPIO_PIN_D5,PIN_CONFIG_MUX_FUNC7
#define FUNC_GPIO2D6_FUNC1_LCDC_VSYNC          GPIO_BANK2,GPIO_PIN_D6,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO2D6_FUNC4_UART3_RTSN_M2       GPIO_BANK2,GPIO_PIN_D6,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO2D6_FUNC5_PWM9_PIN_M1         GPIO_BANK2,GPIO_PIN_D6,PIN_CONFIG_MUX_FUNC5
#define FUNC_GPIO2D6_FUNC6_SPI1_MOSI_M2        GPIO_BANK2,GPIO_PIN_D6,PIN_CONFIG_MUX_FUNC6
#define FUNC_GPIO2D7_FUNC1_LCDC_CLK            GPIO_BANK2,GPIO_PIN_D7,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO2D7_FUNC4_UART3_CTSN_M2       GPIO_BANK2,GPIO_PIN_D7,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO2D7_FUNC5_PWM8_PIN_M1         GPIO_BANK2,GPIO_PIN_D7,PIN_CONFIG_MUX_FUNC5
#define FUNC_GPIO2D7_FUNC6_SPI1_MISO_M2        GPIO_BANK2,GPIO_PIN_D7,PIN_CONFIG_MUX_FUNC6
#define FUNC_GPIO3A0_FUNC3_CAN_RXD_M0          GPIO_BANK3,GPIO_PIN_A0,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO3A0_FUNC4_UART3_TX_M2         GPIO_BANK3,GPIO_PIN_A0,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO3A0_FUNC5_PWM7_PIN_M1         GPIO_BANK3,GPIO_PIN_A0,PIN_CONFIG_MUX_FUNC5
#define FUNC_GPIO3A0_FUNC6_SPI1_CS1N_M2        GPIO_BANK3,GPIO_PIN_A0,PIN_CONFIG_MUX_FUNC6
#define FUNC_GPIO3A0_FUNC7_I2C4_SCL_M0         GPIO_BANK3,GPIO_PIN_A0,PIN_CONFIG_MUX_FUNC7
#define FUNC_GPIO3A1_FUNC3_CAN_TXD_M0          GPIO_BANK3,GPIO_PIN_A1,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO3A1_FUNC4_UART3_RX_M2         GPIO_BANK3,GPIO_PIN_A1,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO3A1_FUNC5_PWM11_PIN_M1        GPIO_BANK3,GPIO_PIN_A1,PIN_CONFIG_MUX_FUNC5
#define FUNC_GPIO3A1_FUNC7_I2C4_SDA_M0         GPIO_BANK3,GPIO_PIN_A1,PIN_CONFIG_MUX_FUNC7
#define FUNC_GPIO3A2_FUNC1_UART2_TX_M1         GPIO_BANK3,GPIO_PIN_A2,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO3A2_FUNC2_A7_JTAG_TCK_M1      GPIO_BANK3,GPIO_PIN_A2,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO3A3_FUNC1_UART2_RX_M1         GPIO_BANK3,GPIO_PIN_A3,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO3A3_FUNC2_A7_JTAG_TMS_M1      GPIO_BANK3,GPIO_PIN_A3,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO3A4_FUNC1_CIF_D0_M0           GPIO_BANK3,GPIO_PIN_A4,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO3A4_FUNC3_I2S0_SCLK_TX_M1     GPIO_BANK3,GPIO_PIN_A4,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO3A4_FUNC4_UART4_TX_M0         GPIO_BANK3,GPIO_PIN_A4,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO3A4_FUNC5_I2C3_SCL_M0         GPIO_BANK3,GPIO_PIN_A4,PIN_CONFIG_MUX_FUNC5
#define FUNC_GPIO3A4_FUNC6_PWM8_PIN_M0         GPIO_BANK3,GPIO_PIN_A4,PIN_CONFIG_MUX_FUNC6
#define FUNC_GPIO3A5_FUNC1_CIF_D1_M0           GPIO_BANK3,GPIO_PIN_A5,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO3A5_FUNC2_RGMII_CRS_M0        GPIO_BANK3,GPIO_PIN_A5,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO3A5_FUNC3_I2S0_LRCK_TX_M1     GPIO_BANK3,GPIO_PIN_A5,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO3A5_FUNC4_UART4_RX_M0         GPIO_BANK3,GPIO_PIN_A5,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO3A5_FUNC5_I2C3_SDA_M0         GPIO_BANK3,GPIO_PIN_A5,PIN_CONFIG_MUX_FUNC5
#define FUNC_GPIO3A5_FUNC6_PWM9_PIN_M0         GPIO_BANK3,GPIO_PIN_A5,PIN_CONFIG_MUX_FUNC6
#define FUNC_GPIO3A6_FUNC1_CIF_D2_M0           GPIO_BANK3,GPIO_PIN_A6,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO3A6_FUNC2_RGMII_COL_M0        GPIO_BANK3,GPIO_PIN_A6,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO3A6_FUNC3_I2S0_SDO0_M1        GPIO_BANK3,GPIO_PIN_A6,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO3A6_FUNC4_UART5_TX_M0         GPIO_BANK3,GPIO_PIN_A6,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO3A6_FUNC5_CAN_RXD_M1          GPIO_BANK3,GPIO_PIN_A6,PIN_CONFIG_MUX_FUNC5
#define FUNC_GPIO3A6_FUNC6_PWM10_PIN_M0        GPIO_BANK3,GPIO_PIN_A6,PIN_CONFIG_MUX_FUNC6
#define FUNC_GPIO3A7_FUNC1_CIF_D3_M0           GPIO_BANK3,GPIO_PIN_A7,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO3A7_FUNC2_RGMII_RXD2_M0       GPIO_BANK3,GPIO_PIN_A7,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO3A7_FUNC3_I2S0_SDI0_M1        GPIO_BANK3,GPIO_PIN_A7,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO3A7_FUNC4_UART5_RX_M0         GPIO_BANK3,GPIO_PIN_A7,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO3A7_FUNC5_CAN_TXD_M1          GPIO_BANK3,GPIO_PIN_A7,PIN_CONFIG_MUX_FUNC5
#define FUNC_GPIO3A7_FUNC6_PWM11_PIN_M0        GPIO_BANK3,GPIO_PIN_A7,PIN_CONFIG_MUX_FUNC6
#define FUNC_GPIO3B0_FUNC1_CIF_D4_M0           GPIO_BANK3,GPIO_PIN_B0,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO3B0_FUNC2_RGMII_RXD3_M0       GPIO_BANK3,GPIO_PIN_B0,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO3B0_FUNC3_I2S0_MCLK_M1        GPIO_BANK3,GPIO_PIN_B0,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO3B0_FUNC4_UART5_RTSN_M0       GPIO_BANK3,GPIO_PIN_B0,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO3B0_FUNC5_I2C5_SCL_M1         GPIO_BANK3,GPIO_PIN_B0,PIN_CONFIG_MUX_FUNC5
#define FUNC_GPIO3B1_FUNC1_CIF_D5_M0           GPIO_BANK3,GPIO_PIN_B1,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO3B1_FUNC2_RGMII_TXD2_M0       GPIO_BANK3,GPIO_PIN_B1,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO3B1_FUNC3_I2S0_SCLK_RX_M1     GPIO_BANK3,GPIO_PIN_B1,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO3B1_FUNC4_UART5_CTSN_M0       GPIO_BANK3,GPIO_PIN_B1,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO3B1_FUNC5_I2C5_SDA_M1         GPIO_BANK3,GPIO_PIN_B1,PIN_CONFIG_MUX_FUNC5
#define FUNC_GPIO3B2_FUNC1_CIF_D6_M0           GPIO_BANK3,GPIO_PIN_B2,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO3B2_FUNC2_RGMII_TXD3_M0       GPIO_BANK3,GPIO_PIN_B2,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO3B2_FUNC3_I2S0_LRCK_RX_M1     GPIO_BANK3,GPIO_PIN_B2,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO3B2_FUNC4_UART4_RTSN_M0       GPIO_BANK3,GPIO_PIN_B2,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO3B3_FUNC1_CIF_D7_M0           GPIO_BANK3,GPIO_PIN_B3,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO3B3_FUNC2_RGMII_TXD0_M0       GPIO_BANK3,GPIO_PIN_B3,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO3B3_FUNC3_I2S0_SDO1_SDI3_M1   GPIO_BANK3,GPIO_PIN_B3,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO3B3_FUNC4_UART4_CTSN_M0       GPIO_BANK3,GPIO_PIN_B3,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO3B4_FUNC1_CIF_D8_M0           GPIO_BANK3,GPIO_PIN_B4,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO3B4_FUNC2_RGMII_TXD1_M0       GPIO_BANK3,GPIO_PIN_B4,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO3B4_FUNC3_I2S0_SDO2_SDI2_M1   GPIO_BANK3,GPIO_PIN_B4,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO3B4_FUNC5_SPI1_CS1N_M0        GPIO_BANK3,GPIO_PIN_B4,PIN_CONFIG_MUX_FUNC5
#define FUNC_GPIO3B5_FUNC1_CIF_D9_M0           GPIO_BANK3,GPIO_PIN_B5,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO3B5_FUNC2_RGMII_TXEN_M0       GPIO_BANK3,GPIO_PIN_B5,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO3B5_FUNC3_I2S0_SDO3_SDI1_M1   GPIO_BANK3,GPIO_PIN_B5,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO3B5_FUNC5_SPI1_CS0N_M0        GPIO_BANK3,GPIO_PIN_B5,PIN_CONFIG_MUX_FUNC5
#define FUNC_GPIO3B6_FUNC1_CIF_D10_M0          GPIO_BANK3,GPIO_PIN_B6,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO3B6_FUNC2_RGMII_RXD0_M0       GPIO_BANK3,GPIO_PIN_B6,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO3B6_FUNC3_PDM_SDI2_M1         GPIO_BANK3,GPIO_PIN_B6,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO3B6_FUNC5_SPI1_MOSI_M0        GPIO_BANK3,GPIO_PIN_B6,PIN_CONFIG_MUX_FUNC5
#define FUNC_GPIO3B7_FUNC1_CIF_D11_M0          GPIO_BANK3,GPIO_PIN_B7,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO3B7_FUNC2_RGMII_RXD1_M0       GPIO_BANK3,GPIO_PIN_B7,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO3B7_FUNC3_PDM_SDI3_M1         GPIO_BANK3,GPIO_PIN_B7,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO3B7_FUNC5_SPI1_MISO_M0        GPIO_BANK3,GPIO_PIN_B7,PIN_CONFIG_MUX_FUNC5
#define FUNC_GPIO3C0_FUNC1_CIF_D12_M0          GPIO_BANK3,GPIO_PIN_C0,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO3C0_FUNC2_RGMII_CLK_M0        GPIO_BANK3,GPIO_PIN_C0,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO3C0_FUNC3_PDM_CLK0_M1         GPIO_BANK3,GPIO_PIN_C0,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO3C0_FUNC5_SPI1_CLK_M0         GPIO_BANK3,GPIO_PIN_C0,PIN_CONFIG_MUX_FUNC5
#define FUNC_GPIO3C1_FUNC1_CIF_D13_M0          GPIO_BANK3,GPIO_PIN_C1,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO3C1_FUNC2_RGMII_RXDV_M0       GPIO_BANK3,GPIO_PIN_C1,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO3C1_FUNC3_PDM_SDI0_M1         GPIO_BANK3,GPIO_PIN_C1,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO3C2_FUNC1_CIF_D14_M0          GPIO_BANK3,GPIO_PIN_C2,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO3C2_FUNC2_RGMII_RXER_M0       GPIO_BANK3,GPIO_PIN_C2,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO3C2_FUNC3_PDM_SDI1_M1         GPIO_BANK3,GPIO_PIN_C2,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO3C3_FUNC1_CIF_D15_M0          GPIO_BANK3,GPIO_PIN_C3,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO3C3_FUNC2_RGMII_MDIO_M0       GPIO_BANK3,GPIO_PIN_C3,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO3C3_FUNC3_PDM_CLK1_M1         GPIO_BANK3,GPIO_PIN_C3,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO3C4_FUNC1_CIF_VSYNC_M0        GPIO_BANK3,GPIO_PIN_C4,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO3C4_FUNC2_RGMII_MDC_M0        GPIO_BANK3,GPIO_PIN_C4,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO3C4_FUNC4_UART3_RTSN_M0       GPIO_BANK3,GPIO_PIN_C4,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO3C5_FUNC1_CIF_CLKIN_M0        GPIO_BANK3,GPIO_PIN_C5,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO3C5_FUNC2_CLK_OUT_ETHERNET_M0 GPIO_BANK3,GPIO_PIN_C5,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO3C5_FUNC4_UART3_CTSN_M0       GPIO_BANK3,GPIO_PIN_C5,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO3C6_FUNC1_CIF_CLKOUT_M0       GPIO_BANK3,GPIO_PIN_C6,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO3C6_FUNC2_RGMII_TXCLK_M0      GPIO_BANK3,GPIO_PIN_C6,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO3C6_FUNC4_UART3_TX_M0         GPIO_BANK3,GPIO_PIN_C6,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO3C7_FUNC1_CIF_HSYNC_M0        GPIO_BANK3,GPIO_PIN_C7,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO3C7_FUNC2_RGMII_RXCLK_M0      GPIO_BANK3,GPIO_PIN_C7,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO3C7_FUNC4_UART3_RX_M0         GPIO_BANK3,GPIO_PIN_C7,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO3D0_FUNC1_I2S0_SCLK_TX_M0     GPIO_BANK3,GPIO_PIN_D0,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO3D0_FUNC3_ACODEC_DAC_CLK      GPIO_BANK3,GPIO_PIN_D0,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO3D1_FUNC1_I2S0_SCLK_RX_M0     GPIO_BANK3,GPIO_PIN_D1,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO3D1_FUNC2_PDM_CLK1_M0         GPIO_BANK3,GPIO_PIN_D1,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO3D1_FUNC3_ACODEC_ADC_CLK      GPIO_BANK3,GPIO_PIN_D1,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO3D2_FUNC1_I2S0_MCLK_M0        GPIO_BANK3,GPIO_PIN_D2,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO3D3_FUNC1_I2S0_LRCK_TX_M0     GPIO_BANK3,GPIO_PIN_D3,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO3D3_FUNC3_ACODEC_DAC_SYNC     GPIO_BANK3,GPIO_PIN_D3,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO3D3_FUNC4_AUDPWM_L_M1         GPIO_BANK3,GPIO_PIN_D3,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO3D3_FUNC5_AUDDSM_LN           GPIO_BANK3,GPIO_PIN_D3,PIN_CONFIG_MUX_FUNC5
#define FUNC_GPIO3D4_FUNC1_I2S0_LRCK_RX_M0     GPIO_BANK3,GPIO_PIN_D4,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO3D4_FUNC2_PDM_CLK0_M0         GPIO_BANK3,GPIO_PIN_D4,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO3D4_FUNC3_ACODEC_ADC_SYNC     GPIO_BANK3,GPIO_PIN_D4,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO3D5_FUNC1_I2S0_SDO0_M0        GPIO_BANK3,GPIO_PIN_D5,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO3D5_FUNC3_ACODEC_DAC_DATAR    GPIO_BANK3,GPIO_PIN_D5,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO3D5_FUNC4_AUDPWM_R_M1         GPIO_BANK3,GPIO_PIN_D5,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO3D5_FUNC5_AUDDSM_LP           GPIO_BANK3,GPIO_PIN_D5,PIN_CONFIG_MUX_FUNC5
#define FUNC_GPIO3D6_FUNC1_I2S0_SDI0_M0        GPIO_BANK3,GPIO_PIN_D6,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO3D6_FUNC2_PDM_SDI0_M0         GPIO_BANK3,GPIO_PIN_D6,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO3D6_FUNC3_ACODEC_DAC_DATAL    GPIO_BANK3,GPIO_PIN_D6,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO3D7_FUNC1_I2S0_SDO1_SDI3_M0   GPIO_BANK3,GPIO_PIN_D7,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO3D7_FUNC2_PDM_SDI3_M0         GPIO_BANK3,GPIO_PIN_D7,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO3D7_FUNC3_ACODEC_ADC_DATA     GPIO_BANK3,GPIO_PIN_D7,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO4A0_FUNC1_I2S0_SDO2_SDI2_M0   GPIO_BANK4,GPIO_PIN_A0,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO4A0_FUNC2_PDM_SDI2_M0         GPIO_BANK4,GPIO_PIN_A0,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO4A0_FUNC3_AUDPWM_L_M0         GPIO_BANK4,GPIO_PIN_A0,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO4A0_FUNC4_I2C4_SCL_M1         GPIO_BANK4,GPIO_PIN_A0,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO4A0_FUNC5_AUDDSM_RN           GPIO_BANK4,GPIO_PIN_A0,PIN_CONFIG_MUX_FUNC5
#define FUNC_GPIO4A1_FUNC1_I2S0_SDO3_SDI1_M0   GPIO_BANK4,GPIO_PIN_A1,PIN_CONFIG_MUX_FUNC1
#define FUNC_GPIO4A1_FUNC2_PDM_SDI1_M0         GPIO_BANK4,GPIO_PIN_A1,PIN_CONFIG_MUX_FUNC2
#define FUNC_GPIO4A1_FUNC3_AUDPWM_R_M0         GPIO_BANK4,GPIO_PIN_A1,PIN_CONFIG_MUX_FUNC3
#define FUNC_GPIO4A1_FUNC4_I2C4_SDA_M1         GPIO_BANK4,GPIO_PIN_A1,PIN_CONFIG_MUX_FUNC4
#define FUNC_GPIO4A1_FUNC5_AUDDSM_RP           GPIO_BANK4,GPIO_PIN_A1,PIN_CONFIG_MUX_FUNC5

#endif
