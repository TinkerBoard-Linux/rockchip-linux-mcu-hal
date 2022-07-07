/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2020-2022 Rockchip Electronics Co., Ltd.
 */

#ifndef __RV1106_H
#define __RV1106_H
#ifdef __cplusplus
  extern "C" {
#endif
/****************************************************************************************/
/*                                                                                      */
/*                               Module Structure Section                               */
/*                                                                                      */
/****************************************************************************************/
#ifndef __ASSEMBLY__
/* PMUGRF Register Structure Define */
struct PMUGRF_REG {
    __IO uint32_t SOC_CON[6];                         /* Address Offset: 0x0000 */
         uint32_t RESERVED0018[2];                    /* Address Offset: 0x0018 */
    __I  uint32_t SOC_STATUS;                         /* Address Offset: 0x0020 */
         uint32_t RESERVED0024[3];                    /* Address Offset: 0x0024 */
    __IO uint32_t PMUIO_CON;                          /* Address Offset: 0x0030 */
         uint32_t RESERVED0034[3];                    /* Address Offset: 0x0034 */
    __IO uint32_t MEM_CON;                            /* Address Offset: 0x0040 */
         uint32_t RESERVED0044[111];                  /* Address Offset: 0x0044 */
    __IO uint32_t OS_REG[12];                         /* Address Offset: 0x0200 */
    __I  uint32_t RSTFUNC_STATUS;                     /* Address Offset: 0x0230 */
    __O  uint32_t RSTFUNC_CLR;                        /* Address Offset: 0x0234 */
};
/* COREGRF Register Structure Define */
struct COREGRF_REG {
    __IO uint32_t PVTPLL_CON0_L;                      /* Address Offset: 0x0000 */
    __IO uint32_t PVTPLL_CON0_H;                      /* Address Offset: 0x0004 */
    __IO uint32_t PVTPLL_CON[3];                      /* Address Offset: 0x0008 */
         uint32_t RESERVED0014;                       /* Address Offset: 0x0014 */
    __IO uint32_t PVTPLL_OSC_CNT;                     /* Address Offset: 0x0018 */
    __IO uint32_t PVTPLL_OSC_CNT_AVG;                 /* Address Offset: 0x001C */
         uint32_t RESERVED0020;                       /* Address Offset: 0x0020 */
    __IO uint32_t CACHE_PERI_ADDR_START;              /* Address Offset: 0x0024 */
    __IO uint32_t CACHE_PERI_ADDR_END;                /* Address Offset: 0x0028 */
    __IO uint32_t MCU_CACHE_MISC;                     /* Address Offset: 0x002C */
    __IO uint32_t MCU_CACHE_STATUS;                   /* Address Offset: 0x0030 */
    __IO uint32_t CPU_STATUS;                         /* Address Offset: 0x0034 */
    __IO uint32_t CPU_CON0;                           /* Address Offset: 0x0038 */
    __IO uint32_t CORE_MEMCFG_UHDSPRA;                /* Address Offset: 0x003C */
};
/* PMUSGRF Register Structure Define */
struct PMUSGRF_REG {
    __IO uint32_t SOC_CON[2];                         /* Address Offset: 0x0000 */
         uint32_t RESERVED0008[6];                    /* Address Offset: 0x0008 */
    __IO uint32_t LPMCU_BOOT_ADDR;                    /* Address Offset: 0x0020 */
};
/* PVTM Register Structure Define */
struct PVTM_REG {
    __I  uint32_t VERSION;                            /* Address Offset: 0x0000 */
    __IO uint32_t CON[7];                             /* Address Offset: 0x0004 */
         uint32_t RESERVED0020[20];                   /* Address Offset: 0x0020 */
    __IO uint32_t INT_EN;                             /* Address Offset: 0x0070 */
    __IO uint32_t INTSTS;                             /* Address Offset: 0x0074 */
         uint32_t RESERVED0078[2];                    /* Address Offset: 0x0078 */
    __IO uint32_t STATUS[8];                          /* Address Offset: 0x0080 */
};
/* TIMER_HP Register Structure Define */
struct TIMER_HP_REG {
    __IO uint32_t REVISION;                           /* Address Offset: 0x0000 */
    __IO uint32_t CTRL;                               /* Address Offset: 0x0004 */
    __IO uint32_t INTR_EN;                            /* Address Offset: 0x0008 */
    __IO uint32_t T24_GCD;                            /* Address Offset: 0x000C */
    __IO uint32_t T32_GCD;                            /* Address Offset: 0x0010 */
    __IO uint32_t LOAD_COUNT0;                        /* Address Offset: 0x0014 */
    __IO uint32_t LOAD_COUNT1;                        /* Address Offset: 0x0018 */
    __IO uint32_t T24_DELAT_COUNT0;                   /* Address Offset: 0x001C */
    __IO uint32_t T24_DELAT_COUNT1;                   /* Address Offset: 0x0020 */
    __I  uint32_t CURR_32K_VALUE0;                    /* Address Offset: 0x0024 */
    __I  uint32_t CURR_32K_VALUE1;                    /* Address Offset: 0x0028 */
    __I  uint32_t CURR_TIMER_VALUE0;                  /* Address Offset: 0x002C */
    __I  uint32_t CURR_TIMER_VALUE1;                  /* Address Offset: 0x0030 */
    __I  uint32_t T24_32BEGIN0;                       /* Address Offset: 0x0034 */
    __I  uint32_t T24_32BEGIN1;                       /* Address Offset: 0x0038 */
    __I  uint32_t T32_24END0;                         /* Address Offset: 0x003C */
    __I  uint32_t T32_24END1;                         /* Address Offset: 0x0040 */
    __IO uint32_t BEGIN_END_VALID;                    /* Address Offset: 0x0044 */
    __IO uint32_t SYNC_REQ;                           /* Address Offset: 0x0048 */
    __IO uint32_t INTR_STATUS;                        /* Address Offset: 0x004C */
};
/* PMU Register Structure Define */
struct PMU_REG {
    __I  uint32_t VERSION;                            /* Address Offset: 0x0000 */
    __IO uint32_t PWR_CON;                            /* Address Offset: 0x0004 */
    __I  uint32_t GLB_POWER_STS;                      /* Address Offset: 0x0008 */
    __IO uint32_t INT_MASK_CON;                       /* Address Offset: 0x000C */
    __IO uint32_t WAKEUP_INT_CON;                     /* Address Offset: 0x0010 */
    __I  uint32_t WAKEUP_INT_ST;                      /* Address Offset: 0x0014 */
         uint32_t RESERVED0018[3];                    /* Address Offset: 0x0018 */
    __IO uint32_t PMIC_STABLE_CNT;                    /* Address Offset: 0x0024 */
    __IO uint32_t OSC_STABLE_CNT;                     /* Address Offset: 0x0028 */
    __IO uint32_t WAKEUP_RSTCLR_CNT;                  /* Address Offset: 0x002C */
    __IO uint32_t PLL_LOCK_CNT;                       /* Address Offset: 0x0030 */
         uint32_t RESERVED0034[5];                    /* Address Offset: 0x0034 */
    __IO uint32_t WAKEUP_TIMEOUT_CNT;                 /* Address Offset: 0x0048 */
    __IO uint32_t PWM_SWITCH_CNT;                     /* Address Offset: 0x004C */
         uint32_t RESERVED0050[12];                   /* Address Offset: 0x0050 */
    __IO uint32_t SCU_PWR_CON;                        /* Address Offset: 0x0080 */
    __I  uint32_t SCU_STS;                            /* Address Offset: 0x0084 */
         uint32_t RESERVED0088[10];                   /* Address Offset: 0x0088 */
    __IO uint32_t BIU_IDLE_CON;                       /* Address Offset: 0x00B0 */
         uint32_t RESERVED00B4[3];                    /* Address Offset: 0x00B4 */
    __IO uint32_t BIU_IDLE_SFTCON;                    /* Address Offset: 0x00C0 */
         uint32_t RESERVED00C4[3];                    /* Address Offset: 0x00C4 */
    __I  uint32_t BIU_IDLE_ACK;                       /* Address Offset: 0x00D0 */
         uint32_t RESERVED00D4;                       /* Address Offset: 0x00D4 */
    __I  uint32_t BIU_IDLE_ST;                        /* Address Offset: 0x00D8 */
         uint32_t RESERVED00DC;                       /* Address Offset: 0x00DC */
    __IO uint32_t BIU_AUTO_CON;                       /* Address Offset: 0x00E0 */
         uint32_t RESERVED00E4[3];                    /* Address Offset: 0x00E4 */
    __IO uint32_t DDR_PWR_CON;                        /* Address Offset: 0x00F0 */
    __IO uint32_t DDR_PWR_SFTCON;                     /* Address Offset: 0x00F4 */
    __I  uint32_t DDR_POWER_STS;                      /* Address Offset: 0x00F8 */
    __I  uint32_t DDR_STS;                            /* Address Offset: 0x00FC */
         uint32_t RESERVED0100[8];                    /* Address Offset: 0x0100 */
    __IO uint32_t CRU_PWR_CON0;                       /* Address Offset: 0x0120 */
    __IO uint32_t CRU_PWR_SFTCON;                     /* Address Offset: 0x0124 */
    __I  uint32_t CRU_POWER_STS;                      /* Address Offset: 0x0128 */
         uint32_t RESERVED012C;                       /* Address Offset: 0x012C */
    __IO uint32_t PLLPD_CON;                          /* Address Offset: 0x0130 */
    __IO uint32_t PLLPD_SFTCON;                       /* Address Offset: 0x0134 */
         uint32_t RESERVED0138[2];                    /* Address Offset: 0x0138 */
    __IO uint32_t CRU_PWR_CON1;                       /* Address Offset: 0x0140 */
         uint32_t RESERVED0144[3];                    /* Address Offset: 0x0144 */
    __IO uint32_t INFO_TX_CON;                        /* Address Offset: 0x0150 */
         uint32_t RESERVED0154[27];                   /* Address Offset: 0x0154 */
    __IO uint32_t SYS_REG[8];                         /* Address Offset: 0x01C0 */
};
/* I2C Register Structure Define */
struct I2C_REG {
    __IO uint32_t CON;                                /* Address Offset: 0x0000 */
    __IO uint32_t CLKDIV;                             /* Address Offset: 0x0004 */
    __IO uint32_t MRXADDR;                            /* Address Offset: 0x0008 */
    __IO uint32_t MRXRADDR;                           /* Address Offset: 0x000C */
    __IO uint32_t MTXCNT;                             /* Address Offset: 0x0010 */
    __IO uint32_t MRXCNT;                             /* Address Offset: 0x0014 */
    __IO uint32_t IEN;                                /* Address Offset: 0x0018 */
    __IO uint32_t IPD;                                /* Address Offset: 0x001C */
    __I  uint32_t FCNT;                               /* Address Offset: 0x0020 */
    __IO uint32_t SCL_OE_DB;                          /* Address Offset: 0x0024 */
         uint32_t RESERVED0028[54];                   /* Address Offset: 0x0028 */
    __IO uint32_t TXDATA[8];                          /* Address Offset: 0x0100 */
         uint32_t RESERVED0120[56];                   /* Address Offset: 0x0120 */
    __I  uint32_t RXDATA[8];                          /* Address Offset: 0x0200 */
    __I  uint32_t ST;                                 /* Address Offset: 0x0220 */
    __IO uint32_t DBGCTRL;                            /* Address Offset: 0x0224 */
    __IO uint32_t CON1;                               /* Address Offset: 0x0228 */
};
/* PWM Register Structure Define */
struct PWM_CHANNEL {
    __I  uint32_t CNT;
    __IO uint32_t PERIOD_HPR;
    __IO uint32_t DUTY_LPR;
    __IO uint32_t CTRL;
};
struct PWM_REG {
         struct PWM_CHANNEL CHANNELS[4];              /* Address Offset: 0x0000 */
    __IO uint32_t INTSTS;                             /* Address Offset: 0x0040 */
    __IO uint32_t INT_EN;                             /* Address Offset: 0x0044 */
         uint32_t RESERVED0048[2];                    /* Address Offset: 0x0048 */
    __IO uint32_t FIFO_CTRL;                          /* Address Offset: 0x0050 */
    __IO uint32_t FIFO_INTSTS;                        /* Address Offset: 0x0054 */
    __IO uint32_t FIFO_TOUTTHR;                       /* Address Offset: 0x0058 */
    __I  uint32_t VERSION_ID;                         /* Address Offset: 0x005C */
    __I  uint32_t FIFO;                               /* Address Offset: 0x0060 */
         uint32_t RESERVED0064[7];                    /* Address Offset: 0x0064 */
    __IO uint32_t PWRMATCH_CTRL;                      /* Address Offset: 0x0080 */
    __IO uint32_t PWRMATCH_LPRE;                      /* Address Offset: 0x0084 */
    __IO uint32_t PWRMATCH_HPRE;                      /* Address Offset: 0x0088 */
    __IO uint32_t PWRMATCH_LD;                        /* Address Offset: 0x008C */
    __IO uint32_t PWRMATCH_HD_ZERO;                   /* Address Offset: 0x0090 */
    __IO uint32_t PWRMATCH_HD_ONE;                    /* Address Offset: 0x0094 */
    __IO uint32_t PWRMATCH_VALUE[10];                 /* Address Offset: 0x0098 */
         uint32_t RESERVED00C0[3];                    /* Address Offset: 0x00C0 */
    __I  uint32_t PWM3_PWRCAPTURE_VALUE;              /* Address Offset: 0x00CC */
    __IO uint32_t FILTER_CTRL;                        /* Address Offset: 0x00D0 */
         uint32_t RESERVED00D4[3];                    /* Address Offset: 0x00D4 */
    __IO uint32_t PWM0_OFFSET;                        /* Address Offset: 0x00E0 */
    __IO uint32_t PWM1_OFFSET;                        /* Address Offset: 0x00E4 */
    __IO uint32_t PWM2_OFFSET;                        /* Address Offset: 0x00E8 */
    __IO uint32_t PWM3_OFFSET;                        /* Address Offset: 0x00EC */
         uint32_t RESERVED00F0[4];                    /* Address Offset: 0x00F0 */
    __IO uint32_t IR_TRANS_CTRL;                      /* Address Offset: 0x0100 */
    __IO uint32_t IR_TRANS_PRE;                       /* Address Offset: 0x0104 */
    __IO uint32_t IR_TRANS_SPRE;                      /* Address Offset: 0x0108 */
    __IO uint32_t IR_TRANS_LD;                        /* Address Offset: 0x010C */
    __IO uint32_t IR_TRANS_HD;                        /* Address Offset: 0x0110 */
    __IO uint32_t IR_TRANS_BURST_FRAME;               /* Address Offset: 0x0114 */
    __IO uint32_t IR_TRANS_DATA_VALUE;                /* Address Offset: 0x0118 */
};
/* WDT Register Structure Define */
struct WDT_REG {
    __IO uint32_t CR;                                 /* Address Offset: 0x0000 */
    __IO uint32_t TORR;                               /* Address Offset: 0x0004 */
    __I  uint32_t CCVR;                               /* Address Offset: 0x0008 */
    __O  uint32_t CRR;                                /* Address Offset: 0x000C */
    __I  uint32_t STAT;                               /* Address Offset: 0x0010 */
    __I  uint32_t EOI;                                /* Address Offset: 0x0014 */
};
/* GPIO Register Structure Define */
struct GPIO_REG {
    __IO uint32_t SWPORT_DR_L;                        /* Address Offset: 0x0000 */
    __IO uint32_t SWPORT_DR_H;                        /* Address Offset: 0x0004 */
    __IO uint32_t SWPORT_DDR_L;                       /* Address Offset: 0x0008 */
    __IO uint32_t SWPORT_DDR_H;                       /* Address Offset: 0x000C */
    __IO uint32_t INT_EN_L;                           /* Address Offset: 0x0010 */
    __IO uint32_t INT_EN_H;                           /* Address Offset: 0x0014 */
    __IO uint32_t INT_MASK_L;                         /* Address Offset: 0x0018 */
    __IO uint32_t INT_MASK_H;                         /* Address Offset: 0x001C */
    __IO uint32_t INT_TYPE_L;                         /* Address Offset: 0x0020 */
    __IO uint32_t INT_TYPE_H;                         /* Address Offset: 0x0024 */
    __IO uint32_t INT_POLARITY_L;                     /* Address Offset: 0x0028 */
    __IO uint32_t INT_POLARITY_H;                     /* Address Offset: 0x002C */
    __IO uint32_t INT_BOTHEDGE_L;                     /* Address Offset: 0x0030 */
    __IO uint32_t INT_BOTHEDGE_H;                     /* Address Offset: 0x0034 */
    __IO uint32_t DEBOUNCE_L;                         /* Address Offset: 0x0038 */
    __IO uint32_t DEBOUNCE_H;                         /* Address Offset: 0x003C */
    __IO uint32_t DBCLK_DIV_EN_L;                     /* Address Offset: 0x0040 */
    __IO uint32_t DBCLK_DIV_EN_H;                     /* Address Offset: 0x0044 */
    __IO uint32_t DBCLK_DIV_CON;                      /* Address Offset: 0x0048 */
         uint32_t RESERVED004C;                       /* Address Offset: 0x004C */
    __I  uint32_t INT_STATUS;                         /* Address Offset: 0x0050 */
         uint32_t RESERVED0054;                       /* Address Offset: 0x0054 */
    __I  uint32_t INT_RAWSTATUS;                      /* Address Offset: 0x0058 */
         uint32_t RESERVED005C;                       /* Address Offset: 0x005C */
    __IO uint32_t PORT_EOI_L;                         /* Address Offset: 0x0060 */
    __IO uint32_t PORT_EOI_H;                         /* Address Offset: 0x0064 */
         uint32_t RESERVED0068[2];                    /* Address Offset: 0x0068 */
    __I  uint32_t EXT_PORT;                           /* Address Offset: 0x0070 */
         uint32_t RESERVED0074;                       /* Address Offset: 0x0074 */
    __I  uint32_t VER_ID;                             /* Address Offset: 0x0078 */
         uint32_t RESERVED007C[33];                   /* Address Offset: 0x007C */
    __IO uint32_t GPIO_REG_GROUP_L;                   /* Address Offset: 0x0100 */
    __IO uint32_t GPIO_REG_GROUP_H;                   /* Address Offset: 0x0104 */
    __IO uint32_t GPIO_VIRTUAL_EN;                    /* Address Offset: 0x0108 */
};
/* GPIO0_IOC Register Structure Define */
struct GPIO0_IOC_REG {
    __IO uint32_t GPIO0A_IOMUX_SEL_L;                 /* Address Offset: 0x0000 */
    __IO uint32_t GPIO0A_IOMUX_SEL_H;                 /* Address Offset: 0x0004 */
         uint32_t RESERVED0008[2];                    /* Address Offset: 0x0008 */
    __IO uint32_t GPIO0A_DS0;                         /* Address Offset: 0x0010 */
    __IO uint32_t GPIO0A_DS1;                         /* Address Offset: 0x0014 */
    __IO uint32_t GPIO0A_DS2;                         /* Address Offset: 0x0018 */
    __IO uint32_t GPIO0A_DS3;                         /* Address Offset: 0x001C */
         uint32_t RESERVED0020[4];                    /* Address Offset: 0x0020 */
    __IO uint32_t GPIO0A_IE;                          /* Address Offset: 0x0030 */
         uint32_t RESERVED0034;                       /* Address Offset: 0x0034 */
    __IO uint32_t GPIO0A_P;                           /* Address Offset: 0x0038 */
         uint32_t RESERVED003C;                       /* Address Offset: 0x003C */
    __IO uint32_t GPIO0A_SUS;                         /* Address Offset: 0x0040 */
         uint32_t RESERVED0044;                       /* Address Offset: 0x0044 */
    __IO uint32_t GPIO0A_SL;                          /* Address Offset: 0x0048 */
         uint32_t RESERVED004C[3];                    /* Address Offset: 0x004C */
    __IO uint32_t GPIO0A_IE_SMT;                      /* Address Offset: 0x0058 */
         uint32_t RESERVED005C[3];                    /* Address Offset: 0x005C */
    __IO uint32_t GPIO0A_OD;                          /* Address Offset: 0x0068 */
};
/* PMUCRU Register Structure Define */
struct PMUCRU_REG {
         uint32_t RESERVED0000[192];                  /* Address Offset: 0x0000 */
    __IO uint32_t PMUCLKSEL_CON[8];                   /* Address Offset: 0x0300 */
         uint32_t RESERVED0320[312];                  /* Address Offset: 0x0320 */
    __IO uint32_t PMUGATE_CON[3];                     /* Address Offset: 0x0800 */
         uint32_t RESERVED080C[125];                  /* Address Offset: 0x080C */
    __IO uint32_t PMUSOFTRST_CON[3];                  /* Address Offset: 0x0A00 */
};
/* CRU Register Structure Define */
struct CRU_REG {
    __IO uint32_t APLL_CON[5];                        /* Address Offset: 0x0000 */
         uint32_t RESERVED0014[3];                    /* Address Offset: 0x0014 */
    __IO uint32_t CPLL_CON[5];                        /* Address Offset: 0x0020 */
         uint32_t RESERVED0034[3];                    /* Address Offset: 0x0034 */
    __IO uint32_t DPLL_CON[5];                        /* Address Offset: 0x0040 */
         uint32_t RESERVED0054[3];                    /* Address Offset: 0x0054 */
    __IO uint32_t GPLL_CON[5];                        /* Address Offset: 0x0060 */
         uint32_t RESERVED0074[51];                   /* Address Offset: 0x0074 */
    __IO uint32_t SSGTBL0_3;                          /* Address Offset: 0x0140 */
    __IO uint32_t SSGTBL4_7;                          /* Address Offset: 0x0144 */
    __IO uint32_t SSGTBL8_11;                         /* Address Offset: 0x0148 */
    __IO uint32_t SSGTBL12_15;                        /* Address Offset: 0x014C */
    __IO uint32_t SSGTBL16_19;                        /* Address Offset: 0x0150 */
    __IO uint32_t SSGTBL20_23;                        /* Address Offset: 0x0154 */
    __IO uint32_t SSGTBL24_27;                        /* Address Offset: 0x0158 */
    __IO uint32_t SSGTBL28_31;                        /* Address Offset: 0x015C */
    __IO uint32_t SSGTBL32_35;                        /* Address Offset: 0x0160 */
    __IO uint32_t SSGTBL36_39;                        /* Address Offset: 0x0164 */
    __IO uint32_t SSGTBL40_43;                        /* Address Offset: 0x0168 */
    __IO uint32_t SSGTBL44_47;                        /* Address Offset: 0x016C */
    __IO uint32_t SSGTBL48_51;                        /* Address Offset: 0x0170 */
    __IO uint32_t SSGTBL52_55;                        /* Address Offset: 0x0174 */
    __IO uint32_t SSGTBL56_59;                        /* Address Offset: 0x0178 */
    __IO uint32_t SSGTBL60_63;                        /* Address Offset: 0x017C */
    __IO uint32_t SSGTBL64_67;                        /* Address Offset: 0x0180 */
    __IO uint32_t SSGTBL68_71;                        /* Address Offset: 0x0184 */
    __IO uint32_t SSGTBL72_75;                        /* Address Offset: 0x0188 */
    __IO uint32_t SSGTBL76_79;                        /* Address Offset: 0x018C */
    __IO uint32_t SSGTBL80_83;                        /* Address Offset: 0x0190 */
    __IO uint32_t SSGTBL84_87;                        /* Address Offset: 0x0194 */
    __IO uint32_t SSGTBL88_91;                        /* Address Offset: 0x0198 */
    __IO uint32_t SSGTBL92_95;                        /* Address Offset: 0x019C */
    __IO uint32_t SSGTBL96_99;                        /* Address Offset: 0x01A0 */
    __IO uint32_t SSGTBL100_103;                      /* Address Offset: 0x01A4 */
    __IO uint32_t SSGTBL104_107;                      /* Address Offset: 0x01A8 */
    __IO uint32_t SSGTBL108_111;                      /* Address Offset: 0x01AC */
    __IO uint32_t SSGTBL112_115;                      /* Address Offset: 0x01B0 */
    __IO uint32_t SSGTBL116_119;                      /* Address Offset: 0x01B4 */
    __IO uint32_t SSGTBL120_123;                      /* Address Offset: 0x01B8 */
    __IO uint32_t SSGTBL124_127;                      /* Address Offset: 0x01BC */
         uint32_t RESERVED01C0[48];                   /* Address Offset: 0x01C0 */
    __IO uint32_t MODE_CON00;                         /* Address Offset: 0x0280 */
         uint32_t RESERVED0284[31];                   /* Address Offset: 0x0284 */
    __IO uint32_t CRU_CLKSEL_CON[34];                 /* Address Offset: 0x0300 */
         uint32_t RESERVED0388[286];                  /* Address Offset: 0x0388 */
    __IO uint32_t CRU_CLKGATE_CON[4];                 /* Address Offset: 0x0800 */
         uint32_t RESERVED0810[126];                  /* Address Offset: 0x0810 */
    __IO uint32_t CRU_SOFTRST_CON[1];                 /* Address Offset: 0x0A08 */
         uint32_t RESERVED0A0C[125];                  /* Address Offset: 0x0A0C */
    __IO uint32_t GLB_CNT_TH;                         /* Address Offset: 0x0C00 */
    __IO uint32_t GLB_RST_ST;                         /* Address Offset: 0x0C04 */
    __IO uint32_t GLB_SRST_FST;                       /* Address Offset: 0x0C08 */
    __IO uint32_t GLB_SRST_SND;                       /* Address Offset: 0x0C0C */
    __IO uint32_t GLB_RST_CON;                        /* Address Offset: 0x0C10 */
    __IO uint32_t SDIO_CON[2];                        /* Address Offset: 0x0C14 */
    __IO uint32_t SDMMC_CON[2];                       /* Address Offset: 0x0C1C */
    __IO uint32_t EMMC_CON[2];                        /* Address Offset: 0x0C24 */
};
/* PERICRU Register Structure Define */
struct PERICRU_REG {
         uint32_t RESERVED0000[193];                  /* Address Offset: 0x0000 */
    __IO uint32_t PERICLKSEL_CON[11];                 /* Address Offset: 0x0304 */
         uint32_t RESERVED0330[308];                  /* Address Offset: 0x0330 */
    __IO uint32_t PERIGATE_CON[8];                    /* Address Offset: 0x0800 */
         uint32_t RESERVED0820[120];                  /* Address Offset: 0x0820 */
    __IO uint32_t PERISOFTRST_CON[8];                 /* Address Offset: 0x0A00 */
};
/* VICRU Register Structure Define */
struct VICRU_REG {
         uint32_t RESERVED0000[192];                  /* Address Offset: 0x0000 */
    __IO uint32_t VICLKSEL_CON[4];                    /* Address Offset: 0x0300 */
         uint32_t RESERVED0310[316];                  /* Address Offset: 0x0310 */
    __IO uint32_t VIGATE_CON[3];                      /* Address Offset: 0x0800 */
         uint32_t RESERVED080C[125];                  /* Address Offset: 0x080C */
    __IO uint32_t VISOFTRST_CON[3];                   /* Address Offset: 0x0A00 */
};
/* NPUCRU Register Structure Define */
struct NPUCRU_REG {
         uint32_t RESERVED0000[192];                  /* Address Offset: 0x0000 */
    __IO uint32_t NPUCLKSEL_CON[1];                   /* Address Offset: 0x0300 */
         uint32_t RESERVED0304[319];                  /* Address Offset: 0x0304 */
    __IO uint32_t NPUGATE_CON[2];                     /* Address Offset: 0x0800 */
         uint32_t RESERVED0808[126];                  /* Address Offset: 0x0808 */
    __IO uint32_t NPUSOFTRST_CON[1];                  /* Address Offset: 0x0A00 */
};
/* CORECRU Register Structure Define */
struct CORECRU_REG {
         uint32_t RESERVED0000[192];                  /* Address Offset: 0x0000 */
    __IO uint32_t CORECLKSEL_CON[5];                  /* Address Offset: 0x0300 */
         uint32_t RESERVED0314[315];                  /* Address Offset: 0x0314 */
    __IO uint32_t COREGATE_CON[2];                    /* Address Offset: 0x0800 */
         uint32_t RESERVED0808[126];                  /* Address Offset: 0x0808 */
    __IO uint32_t CORESOFTRST_CON[2];                 /* Address Offset: 0x0A00 */
         uint32_t RESERVED0A08[190];                  /* Address Offset: 0x0A08 */
    __IO uint32_t AUTOCS_CORE_SRC_CON[2];             /* Address Offset: 0x0D00 */
};
/* VEPUCRU Register Structure Define */
struct VEPUCRU_REG {
         uint32_t RESERVED0000[192];                  /* Address Offset: 0x0000 */
    __IO uint32_t VEPUCLKSEL_CON[2];                  /* Address Offset: 0x0300 */
         uint32_t RESERVED0308[318];                  /* Address Offset: 0x0308 */
    __IO uint32_t VEPUGATE_CON[3];                    /* Address Offset: 0x0800 */
         uint32_t RESERVED080C[125];                  /* Address Offset: 0x080C */
    __IO uint32_t VEPUSOFTRST_CON[2];                 /* Address Offset: 0x0A00 */
};
/* VOCRU Register Structure Define */
struct VOCRU_REG {
         uint32_t RESERVED0000[192];                  /* Address Offset: 0x0000 */
    __IO uint32_t VOCLKSEL_CON[4];                    /* Address Offset: 0x0300 */
         uint32_t RESERVED0310[316];                  /* Address Offset: 0x0310 */
    __IO uint32_t VOGATE_CON[4];                      /* Address Offset: 0x0800 */
         uint32_t RESERVED0810[124];                  /* Address Offset: 0x0810 */
    __IO uint32_t VOSOFTRST_CON[4];                   /* Address Offset: 0x0A00 */
};
/* DDRCRU Register Structure Define */
struct DDRCRU_REG {
         uint32_t RESERVED0000[192];                  /* Address Offset: 0x0000 */
    __IO uint32_t DDRCLKSEL_CON[1];                   /* Address Offset: 0x0300 */
         uint32_t RESERVED0304[319];                  /* Address Offset: 0x0304 */
    __IO uint32_t DDRGATE_CON[2];                     /* Address Offset: 0x0800 */
         uint32_t RESERVED0808[126];                  /* Address Offset: 0x0808 */
    __IO uint32_t DDRSOFTRST_CON[2];                  /* Address Offset: 0x0A00 */
};
/* SUBDDRCRU Register Structure Define */
struct SUBDDRCRU_REG {
         uint32_t RESERVED0000[160];                  /* Address Offset: 0x0000 */
    __IO uint32_t SUBDDRMODE_CON00;                   /* Address Offset: 0x0280 */
         uint32_t RESERVED0284[31];                   /* Address Offset: 0x0284 */
    __IO uint32_t SUBDDRCLKSEL_CON[1];                /* Address Offset: 0x0300 */
         uint32_t RESERVED0304[319];                  /* Address Offset: 0x0304 */
    __IO uint32_t SUBDDRGATE_CON[1];                  /* Address Offset: 0x0800 */
         uint32_t RESERVED0804[127];                  /* Address Offset: 0x0804 */
    __IO uint32_t SUBDDRSOFTRST_CON[1];               /* Address Offset: 0x0A00 */
};
/* SARADC Register Structure Define */
struct SARADC_REG {
    __IO uint32_t CONV_CON;                           /* Address Offset: 0x0000 */
    __IO uint32_t T_PD_SOC;                           /* Address Offset: 0x0004 */
    __IO uint32_t T_AS_SOC;                           /* Address Offset: 0x0008 */
    __IO uint32_t T_DAS_SOC;                          /* Address Offset: 0x000C */
    __IO uint32_t T_SEL_SOC;                          /* Address Offset: 0x0010 */
    __IO uint32_t HIGH_COMP[2];                       /* Address Offset: 0x0014 */
         uint32_t RESERVED001C[14];                   /* Address Offset: 0x001C */
    __IO uint32_t LOW_COMP[2];                        /* Address Offset: 0x0054 */
         uint32_t RESERVED005C[14];                   /* Address Offset: 0x005C */
    __IO uint32_t DEBOUNCE;                           /* Address Offset: 0x0094 */
    __IO uint32_t HT_INT_EN;                          /* Address Offset: 0x0098 */
    __IO uint32_t LT_INT_EN;                          /* Address Offset: 0x009C */
         uint32_t RESERVED00A0[24];                   /* Address Offset: 0x00A0 */
    __IO uint32_t MT_INT_EN;                          /* Address Offset: 0x0100 */
    __IO uint32_t END_INT_EN;                         /* Address Offset: 0x0104 */
         uint32_t RESERVED0108;                       /* Address Offset: 0x0108 */
    __I  uint32_t STATUS;                             /* Address Offset: 0x010C */
    __IO uint32_t END_INT_ST;                         /* Address Offset: 0x0110 */
    __IO uint32_t HT_INT_ST;                          /* Address Offset: 0x0114 */
    __IO uint32_t LT_INT_ST;                          /* Address Offset: 0x0118 */
    __IO uint32_t MT_INT_ST;                          /* Address Offset: 0x011C */
    __I  uint32_t DATA[2];                            /* Address Offset: 0x0120 */
         uint32_t RESERVED0128[14];                   /* Address Offset: 0x0128 */
    __IO uint32_t AUTO_CH_EN;                         /* Address Offset: 0x0160 */
};
/* UART Register Structure Define */
struct UART_REG {
    union {
        __I  uint32_t RBR;                                /* Address Offset: 0x0000 */
        __IO uint32_t DLL;                                /* Address Offset: 0x0000 */
        __O  uint32_t THR;                                /* Address Offset: 0x0000 */
    };
    union {
        __IO uint32_t DLH;                                /* Address Offset: 0x0004 */
        __IO uint32_t IER;                                /* Address Offset: 0x0004 */
    };
    union {
        __O  uint32_t FCR;                                /* Address Offset: 0x0008 */
        __I  uint32_t IIR;                                /* Address Offset: 0x0008 */
    };
    __IO uint32_t LCR;                                /* Address Offset: 0x000C */
    __IO uint32_t MCR;                                /* Address Offset: 0x0010 */
    __I  uint32_t LSR;                                /* Address Offset: 0x0014 */
    __I  uint32_t MSR;                                /* Address Offset: 0x0018 */
    __IO uint32_t SCR;                                /* Address Offset: 0x001C */
         uint32_t RESERVED0020[4];                    /* Address Offset: 0x0020 */
    union {
        __I  uint32_t SRBR;                               /* Address Offset: 0x0030 */
        __O  uint32_t STHR;                               /* Address Offset: 0x0030 */
    };
         uint32_t RESERVED0034[15];                   /* Address Offset: 0x0034 */
    __IO uint32_t FAR;                                /* Address Offset: 0x0070 */
    __I  uint32_t TFR;                                /* Address Offset: 0x0074 */
    __O  uint32_t RFW;                                /* Address Offset: 0x0078 */
    __I  uint32_t USR;                                /* Address Offset: 0x007C */
    __I  uint32_t TFL;                                /* Address Offset: 0x0080 */
    __I  uint32_t RFL;                                /* Address Offset: 0x0084 */
    __O  uint32_t SRR;                                /* Address Offset: 0x0088 */
    __IO uint32_t SRTS;                               /* Address Offset: 0x008C */
    __IO uint32_t SBCR;                               /* Address Offset: 0x0090 */
    __IO uint32_t SDMAM;                              /* Address Offset: 0x0094 */
    __IO uint32_t SFE;                                /* Address Offset: 0x0098 */
    __IO uint32_t SRT;                                /* Address Offset: 0x009C */
    __IO uint32_t STET;                               /* Address Offset: 0x00A0 */
    __IO uint32_t HTX;                                /* Address Offset: 0x00A4 */
    __O  uint32_t DMASA;                              /* Address Offset: 0x00A8 */
         uint32_t RESERVED00AC[18];                   /* Address Offset: 0x00AC */
    __I  uint32_t CPR;                                /* Address Offset: 0x00F4 */
    __I  uint32_t UCV;                                /* Address Offset: 0x00F8 */
    __I  uint32_t CTR;                                /* Address Offset: 0x00FC */
};
/* GPIO1_IOC Register Structure Define */
struct GPIO1_IOC_REG {
    __IO uint32_t GPIO1A_IOMUX_SEL_L;                 /* Address Offset: 0x0000 */
    __IO uint32_t GPIO1A_IOMUX_SEL_H;                 /* Address Offset: 0x0004 */
    __IO uint32_t GPIO1B_IOMUX_SEL_L;                 /* Address Offset: 0x0008 */
         uint32_t RESERVED000C;                       /* Address Offset: 0x000C */
    __IO uint32_t GPIO1C_IOMUX_SEL_L;                 /* Address Offset: 0x0010 */
    __IO uint32_t GPIO1C_IOMUX_SEL_H;                 /* Address Offset: 0x0014 */
    __IO uint32_t GPIO1D_IOMUX_SEL_L;                 /* Address Offset: 0x0018 */
         uint32_t RESERVED001C[25];                   /* Address Offset: 0x001C */
    __IO uint32_t GPIO1A_DS0;                         /* Address Offset: 0x0080 */
    __IO uint32_t GPIO1A_DS1;                         /* Address Offset: 0x0084 */
    __IO uint32_t GPIO1A_DS2;                         /* Address Offset: 0x0088 */
         uint32_t RESERVED008C;                       /* Address Offset: 0x008C */
    __IO uint32_t GPIO1B_DS0;                         /* Address Offset: 0x0090 */
    __IO uint32_t GPIO1B_DS1;                         /* Address Offset: 0x0094 */
         uint32_t RESERVED0098[2];                    /* Address Offset: 0x0098 */
    __IO uint32_t GPIO1C_DS0;                         /* Address Offset: 0x00A0 */
    __IO uint32_t GPIO1C_DS1;                         /* Address Offset: 0x00A4 */
    __IO uint32_t GPIO1C_DS2;                         /* Address Offset: 0x00A8 */
    __IO uint32_t GPIO1C_DS3;                         /* Address Offset: 0x00AC */
    __IO uint32_t GPIO1D_DS0;                         /* Address Offset: 0x00B0 */
    __IO uint32_t GPIO1D_DS1;                         /* Address Offset: 0x00B4 */
         uint32_t RESERVED00B8[50];                   /* Address Offset: 0x00B8 */
    __IO uint32_t GPIO1A_IE;                          /* Address Offset: 0x0180 */
    __IO uint32_t GPIO1B_IE;                          /* Address Offset: 0x0184 */
    __IO uint32_t GPIO1C_IE;                          /* Address Offset: 0x0188 */
    __IO uint32_t GPIO1D_IE;                          /* Address Offset: 0x018C */
         uint32_t RESERVED0190[12];                   /* Address Offset: 0x0190 */
    __IO uint32_t GPIO1A_P;                           /* Address Offset: 0x01C0 */
    __IO uint32_t GPIO1B_P;                           /* Address Offset: 0x01C4 */
    __IO uint32_t GPIO1C_P;                           /* Address Offset: 0x01C8 */
    __IO uint32_t GPIO1D_P;                           /* Address Offset: 0x01CC */
         uint32_t RESERVED01D0[12];                   /* Address Offset: 0x01D0 */
    __IO uint32_t GPIO1A_SUS;                         /* Address Offset: 0x0200 */
    __IO uint32_t GPIO1B_SUS;                         /* Address Offset: 0x0204 */
    __IO uint32_t GPIO1C_SUS;                         /* Address Offset: 0x0208 */
    __IO uint32_t GPIO1D_SUS;                         /* Address Offset: 0x020C */
         uint32_t RESERVED0210[12];                   /* Address Offset: 0x0210 */
    __IO uint32_t GPIO1A_SL;                          /* Address Offset: 0x0240 */
    __IO uint32_t GPIO1B_SL;                          /* Address Offset: 0x0244 */
    __IO uint32_t GPIO1C_SL;                          /* Address Offset: 0x0248 */
    __IO uint32_t GPIO1D_SL;                          /* Address Offset: 0x024C */
         uint32_t RESERVED0250[12];                   /* Address Offset: 0x0250 */
    __IO uint32_t GPIO1A_IE_SMT;                      /* Address Offset: 0x0280 */
    __IO uint32_t GPIO1B_IE_SMT;                      /* Address Offset: 0x0284 */
    __IO uint32_t GPIO1C_IE_SMT;                      /* Address Offset: 0x0288 */
    __IO uint32_t GPIO1D_IE_SMT;                      /* Address Offset: 0x028C */
         uint32_t RESERVED0290[12];                   /* Address Offset: 0x0290 */
    __IO uint32_t GPIO1A_OD;                          /* Address Offset: 0x02C0 */
    __IO uint32_t GPIO1B_OD;                          /* Address Offset: 0x02C4 */
    __IO uint32_t GPIO1C_OD;                          /* Address Offset: 0x02C8 */
    __IO uint32_t GPIO1D_OD;                          /* Address Offset: 0x02CC */
         uint32_t RESERVED02D0[9];                    /* Address Offset: 0x02D0 */
    __IO uint32_t FORCE_JTAG_UART;                    /* Address Offset: 0x02F4 */
};
/* GPIO2_IOC Register Structure Define */
struct GPIO2_IOC_REG {
         uint32_t RESERVED0000[8];                    /* Address Offset: 0x0000 */
    __IO uint32_t GPIO2A_IOMUX_SEL_L;                 /* Address Offset: 0x0020 */
    __IO uint32_t GPIO2A_IOMUX_SEL_H;                 /* Address Offset: 0x0024 */
    __IO uint32_t GPIO2B_IOMUX_SEL_L;                 /* Address Offset: 0x0028 */
         uint32_t RESERVED002C[37];                   /* Address Offset: 0x002C */
    __IO uint32_t GPIO2A_DS0;                         /* Address Offset: 0x00C0 */
    __IO uint32_t GPIO2A_DS1;                         /* Address Offset: 0x00C4 */
    __IO uint32_t GPIO2A_DS2;                         /* Address Offset: 0x00C8 */
    __IO uint32_t GPIO2A_DS3;                         /* Address Offset: 0x00CC */
    __IO uint32_t GPIO2B_DS0;                         /* Address Offset: 0x00D0 */
         uint32_t RESERVED00D4[47];                   /* Address Offset: 0x00D4 */
    __IO uint32_t GPIO2A_IE;                          /* Address Offset: 0x0190 */
    __IO uint32_t GPIO2B_IE;                          /* Address Offset: 0x0194 */
         uint32_t RESERVED0198[14];                   /* Address Offset: 0x0198 */
    __IO uint32_t GPIO2A_P;                           /* Address Offset: 0x01D0 */
    __IO uint32_t GPIO2B_P;                           /* Address Offset: 0x01D4 */
         uint32_t RESERVED01D8[14];                   /* Address Offset: 0x01D8 */
    __IO uint32_t GPIO2A_SUS;                         /* Address Offset: 0x0210 */
    __IO uint32_t GPIO2B_SUS;                         /* Address Offset: 0x0214 */
         uint32_t RESERVED0218[14];                   /* Address Offset: 0x0218 */
    __IO uint32_t GPIO2A_SL;                          /* Address Offset: 0x0250 */
    __IO uint32_t GPIO2B_SL;                          /* Address Offset: 0x0254 */
         uint32_t RESERVED0258[14];                   /* Address Offset: 0x0258 */
    __IO uint32_t GPIO2A_IE_SMT;                      /* Address Offset: 0x0290 */
    __IO uint32_t GPIO2B_IE_SMT;                      /* Address Offset: 0x0294 */
         uint32_t RESERVED0298[14];                   /* Address Offset: 0x0298 */
    __IO uint32_t GPIO2A_OD;                          /* Address Offset: 0x02D0 */
    __IO uint32_t GPIO2B_OD;                          /* Address Offset: 0x02D4 */
};
/* GPIO3_IOC Register Structure Define */
struct GPIO3_IOC_REG {
         uint32_t RESERVED0000[16];                   /* Address Offset: 0x0000 */
    __IO uint32_t GPIO3A_IOMUX_SEL_L;                 /* Address Offset: 0x0040 */
    __IO uint32_t GPIO3A_IOMUX_SEL_H;                 /* Address Offset: 0x0044 */
    __IO uint32_t GPIO3B_IOMUX_SEL_L;                 /* Address Offset: 0x0048 */
    __IO uint32_t GPIO3B_IOMUX_SEL_H;                 /* Address Offset: 0x004C */
    __IO uint32_t GPIO3C_IOMUX_SEL_L;                 /* Address Offset: 0x0050 */
    __IO uint32_t GPIO3C_IOMUX_SEL_H;                 /* Address Offset: 0x0054 */
    __IO uint32_t GPIO3D_IOMUX_SEL_L;                 /* Address Offset: 0x0058 */
         uint32_t RESERVED005C[41];                   /* Address Offset: 0x005C */
    __IO uint32_t GPIO3A_DS0;                         /* Address Offset: 0x0100 */
    __IO uint32_t GPIO3A_DS1;                         /* Address Offset: 0x0104 */
    __IO uint32_t GPIO3A_DS2;                         /* Address Offset: 0x0108 */
    __IO uint32_t GPIO3A_DS3;                         /* Address Offset: 0x010C */
         uint32_t RESERVED0110[6];                    /* Address Offset: 0x0110 */
    __IO uint32_t GPIO3C_DS2;                         /* Address Offset: 0x0128 */
    __IO uint32_t GPIO3C_DS3;                         /* Address Offset: 0x012C */
    __IO uint32_t GPIO3D_DS0;                         /* Address Offset: 0x0130 */
    __IO uint32_t GPIO3D_DS1;                         /* Address Offset: 0x0134 */
         uint32_t RESERVED0138[26];                   /* Address Offset: 0x0138 */
    __IO uint32_t GPIO3A_IE;                          /* Address Offset: 0x01A0 */
         uint32_t RESERVED01A4;                       /* Address Offset: 0x01A4 */
    __IO uint32_t GPIO3C_IE;                          /* Address Offset: 0x01A8 */
    __IO uint32_t GPIO3D_IE;                          /* Address Offset: 0x01AC */
         uint32_t RESERVED01B0[12];                   /* Address Offset: 0x01B0 */
    __IO uint32_t GPIO3A_P;                           /* Address Offset: 0x01E0 */
         uint32_t RESERVED01E4;                       /* Address Offset: 0x01E4 */
    __IO uint32_t GPIO3C_P;                           /* Address Offset: 0x01E8 */
    __IO uint32_t GPIO3D_P;                           /* Address Offset: 0x01EC */
         uint32_t RESERVED01F0[12];                   /* Address Offset: 0x01F0 */
    __IO uint32_t GPIO3A_SUS;                         /* Address Offset: 0x0220 */
         uint32_t RESERVED0224;                       /* Address Offset: 0x0224 */
    __IO uint32_t GPIO3C_SUS;                         /* Address Offset: 0x0228 */
    __IO uint32_t GPIO3D_SUS;                         /* Address Offset: 0x022C */
         uint32_t RESERVED0230[12];                   /* Address Offset: 0x0230 */
    __IO uint32_t GPIO3A_SL;                          /* Address Offset: 0x0260 */
         uint32_t RESERVED0264;                       /* Address Offset: 0x0264 */
    __IO uint32_t GPIO3C_SL;                          /* Address Offset: 0x0268 */
    __IO uint32_t GPIO3D_SL;                          /* Address Offset: 0x026C */
         uint32_t RESERVED0270[12];                   /* Address Offset: 0x0270 */
    __IO uint32_t GPIO3A_IE_SMT;                      /* Address Offset: 0x02A0 */
         uint32_t RESERVED02A4;                       /* Address Offset: 0x02A4 */
    __IO uint32_t GPIO3C_IE_SMT;                      /* Address Offset: 0x02A8 */
    __IO uint32_t GPIO3D_IE_SMT;                      /* Address Offset: 0x02AC */
         uint32_t RESERVED02B0[12];                   /* Address Offset: 0x02B0 */
    __IO uint32_t GPIO3A_OD;                          /* Address Offset: 0x02E0 */
         uint32_t RESERVED02E4;                       /* Address Offset: 0x02E4 */
    __IO uint32_t GPIO3C_OD;                          /* Address Offset: 0x02E8 */
    __IO uint32_t GPIO3D_OD;                          /* Address Offset: 0x02EC */
         uint32_t RESERVED02F0;                       /* Address Offset: 0x02F0 */
    __IO uint32_t FORCE_JTAG_SDMMC;                   /* Address Offset: 0x02F4 */
};
/* GPIO4_IOC Register Structure Define */
struct GPIO4_IOC_REG {
    __IO uint32_t GPIO4A_IOMUX_SEL_L;                 /* Address Offset: 0x0000 */
    __IO uint32_t GPIO4A_IOMUX_SEL_H;                 /* Address Offset: 0x0004 */
    __IO uint32_t GPIO4B_IOMUX_SEL_L;                 /* Address Offset: 0x0008 */
         uint32_t RESERVED000C;                       /* Address Offset: 0x000C */
    __IO uint32_t GPIO4C_IOMUX_SEL_L;                 /* Address Offset: 0x0010 */
         uint32_t RESERVED0014[3];                    /* Address Offset: 0x0014 */
    __IO uint32_t GPIO4A_DS0;                         /* Address Offset: 0x0020 */
    __IO uint32_t GPIO4A_DS1;                         /* Address Offset: 0x0024 */
    __IO uint32_t GPIO4A_DS2;                         /* Address Offset: 0x0028 */
    __IO uint32_t GPIO4A_DS3;                         /* Address Offset: 0x002C */
    __IO uint32_t GPIO4B_DS0;                         /* Address Offset: 0x0030 */
         uint32_t RESERVED0034[11];                   /* Address Offset: 0x0034 */
    __IO uint32_t GPIO4A_IE;                          /* Address Offset: 0x0060 */
    __IO uint32_t GPIO4B_IE;                          /* Address Offset: 0x0064 */
         uint32_t RESERVED0068[2];                    /* Address Offset: 0x0068 */
    __IO uint32_t GPIO4A_P;                           /* Address Offset: 0x0070 */
    __IO uint32_t GPIO4B_P;                           /* Address Offset: 0x0074 */
         uint32_t RESERVED0078[2];                    /* Address Offset: 0x0078 */
    __IO uint32_t GPIO4A_SUS;                         /* Address Offset: 0x0080 */
    __IO uint32_t GPIO4B_SUS;                         /* Address Offset: 0x0084 */
         uint32_t RESERVED0088[2];                    /* Address Offset: 0x0088 */
    __IO uint32_t GPIO4A_SL;                          /* Address Offset: 0x0090 */
    __IO uint32_t GPIO4B_SL;                          /* Address Offset: 0x0094 */
         uint32_t RESERVED0098[2];                    /* Address Offset: 0x0098 */
    __IO uint32_t GPIO4A_IE_SMT;                      /* Address Offset: 0x00A0 */
    __IO uint32_t GPIO4B_IE_SMT;                      /* Address Offset: 0x00A4 */
         uint32_t RESERVED00A8[2];                    /* Address Offset: 0x00A8 */
    __IO uint32_t GPIO4A_OD;                          /* Address Offset: 0x00B0 */
    __IO uint32_t GPIO4B_OD;                          /* Address Offset: 0x00B4 */
         uint32_t RESERVED00B8[2];                    /* Address Offset: 0x00B8 */
    __IO uint32_t SARADC_IO_CON;                      /* Address Offset: 0x00C0 */
         uint32_t RESERVED00C4[79];                   /* Address Offset: 0x00C4 */
    __IO uint32_t VCCIO3_VOL_CON;                     /* Address Offset: 0x0200 */
};
/* TIMER Register Structure Define */
struct TIMER_REG {
    __IO uint32_t LOAD_COUNT[2];                      /* Address Offset: 0x0000 */
    __I  uint32_t CURRENT_VALUE[2];                   /* Address Offset: 0x0008 */
    __IO uint32_t CONTROLREG;                         /* Address Offset: 0x0010 */
         uint32_t RESERVED0014;                       /* Address Offset: 0x0014 */
    __IO uint32_t INTSTATUS;                          /* Address Offset: 0x0018 */
};
/* MBOX Register Structure Define */
struct MBOX_CMD_DAT {
    __IO uint32_t CMD;
    __IO uint32_t DATA;
};
struct MBOX_REG {
    __IO uint32_t A2B_INTEN;                          /* Address Offset: 0x0000 */
    __IO uint32_t A2B_STATUS;                         /* Address Offset: 0x0004 */
         struct MBOX_CMD_DAT A2B[4];                  /* Address Offset: 0x0008 */
    __IO uint32_t B2A_INTEN;                          /* Address Offset: 0x0028 */
    __IO uint32_t B2A_STATUS;                         /* Address Offset: 0x002C */
         struct MBOX_CMD_DAT B2A[4];                  /* Address Offset: 0x0030 */
         uint32_t RESERVED0050[44];                   /* Address Offset: 0x0050 */
    __IO uint32_t ATOMIC_LOCK[32];                    /* Address Offset: 0x0100 */
};
/* ICACHE Register Structure Define */
struct ICACHE_REG {
    __IO uint32_t CACHE_CTRL;                         /* Address Offset: 0x0000 */
    __IO uint32_t CACHE_MAINTAIN[2];                  /* Address Offset: 0x0004 */
    __IO uint32_t STB_TIMEOUT_CTRL;                   /* Address Offset: 0x000C */
         uint32_t RESERVED0010[4];                    /* Address Offset: 0x0010 */
    __IO uint32_t CACHE_INT_EN;                       /* Address Offset: 0x0020 */
    __IO uint32_t CACHE_INT_ST;                       /* Address Offset: 0x0024 */
    __I  uint32_t CACHE_ERR_HADDR;                    /* Address Offset: 0x0028 */
         uint32_t RESERVED002C;                       /* Address Offset: 0x002C */
    __I  uint32_t CACHE_STATUS;                       /* Address Offset: 0x0030 */
         uint32_t RESERVED0034[3];                    /* Address Offset: 0x0034 */
    __I  uint32_t PMU_RD_NUM_CNT;                     /* Address Offset: 0x0040 */
    __I  uint32_t PMU_WR_NUM_CNT;                     /* Address Offset: 0x0044 */
    __I  uint32_t PMU_SRAM_RD_HIT_CNT;                /* Address Offset: 0x0048 */
    __I  uint32_t PMU_HB_RD_HIT_CNT;                  /* Address Offset: 0x004C */
    __I  uint32_t PMU_STB_RD_HIT_CNT;                 /* Address Offset: 0x0050 */
    __I  uint32_t PMU_RD_HIT_CNT;                     /* Address Offset: 0x0054 */
    __I  uint32_t PMU_WR_HIT_CNT;                     /* Address Offset: 0x0058 */
    __I  uint32_t PMU_RD_MISS_PENALTY_CNT;            /* Address Offset: 0x005C */
    __I  uint32_t PMU_WR_MISS_PENALTY_CNT;            /* Address Offset: 0x0060 */
    __I  uint32_t PMU_RD_LAT_CNT;                     /* Address Offset: 0x0064 */
    __I  uint32_t PMU_WR_LAT_CNT;                     /* Address Offset: 0x0068 */
         uint32_t RESERVED006C[33];                   /* Address Offset: 0x006C */
    __I  uint32_t REVISION;                           /* Address Offset: 0x00F0 */
};
/* DCACHE Register Structure Define */
struct DCACHE_REG {
    __IO uint32_t CACHE_CTRL;                         /* Address Offset: 0x0000 */
    __IO uint32_t CACHE_MAINTAIN[2];                  /* Address Offset: 0x0004 */
    __IO uint32_t STB_TIMEOUT_CTRL;                   /* Address Offset: 0x000C */
         uint32_t RESERVED0010[4];                    /* Address Offset: 0x0010 */
    __IO uint32_t CACHE_INT_EN;                       /* Address Offset: 0x0020 */
    __IO uint32_t CACHE_INT_ST;                       /* Address Offset: 0x0024 */
    __I  uint32_t CACHE_ERR_HADDR;                    /* Address Offset: 0x0028 */
         uint32_t RESERVED002C;                       /* Address Offset: 0x002C */
    __I  uint32_t CACHE_STATUS;                       /* Address Offset: 0x0030 */
         uint32_t RESERVED0034[3];                    /* Address Offset: 0x0034 */
    __I  uint32_t PMU_RD_NUM_CNT;                     /* Address Offset: 0x0040 */
    __I  uint32_t PMU_WR_NUM_CNT;                     /* Address Offset: 0x0044 */
    __I  uint32_t PMU_SRAM_RD_HIT_CNT;                /* Address Offset: 0x0048 */
    __I  uint32_t PMU_HB_RD_HIT_CNT;                  /* Address Offset: 0x004C */
    __I  uint32_t PMU_STB_RD_HIT_CNT;                 /* Address Offset: 0x0050 */
    __I  uint32_t PMU_RD_HIT_CNT;                     /* Address Offset: 0x0054 */
    __I  uint32_t PMU_WR_HIT_CNT;                     /* Address Offset: 0x0058 */
    __I  uint32_t PMU_RD_MISS_PENALTY_CNT;            /* Address Offset: 0x005C */
    __I  uint32_t PMU_WR_MISS_PENALTY_CNT;            /* Address Offset: 0x0060 */
    __I  uint32_t PMU_RD_LAT_CNT;                     /* Address Offset: 0x0064 */
    __I  uint32_t PMU_WR_LAT_CNT;                     /* Address Offset: 0x0068 */
         uint32_t RESERVED006C[33];                   /* Address Offset: 0x006C */
    __I  uint32_t REVISION;                           /* Address Offset: 0x00F0 */
};
#endif /*  __ASSEMBLY__  */
/****************************************************************************************/
/*                                                                                      */
/*                                Module Address Section                                */
/*                                                                                      */
/****************************************************************************************/
/* Memory Base */
#define PMUGRF_BASE                    0xFF020000U /* PMUGRF base address */
#define COREGRF_BASE                   0xFF040000U /* COREGRF base address */
#define PMUSGRF_BASE                   0xFF080000U /* PMUSGRF base address */
#define PVTM0_BASE                     0xFF240000U /* PVTM0 base address */
#define TIMER_HP_BASE                  0xFF2F0000U /* TIMER_HP base address */
#define PMU_BASE                       0xFF300000U /* PMU base address */
#define I2C0_BASE                      0xFF310000U /* I2C0 base address */
#define I2C1_BASE                      0xFF320000U /* I2C1 base address */
#define PWM0_BASE                      0xFF350000U /* PWM0 base address */
#define PWM1_BASE                      0xFF360000U /* PWM1 base address */
#define WDT0_BASE                      0xFF370000U /* WDT0 base address */
#define GPIO0_BASE                     0xFF380000U /* GPIO0 base address */
#define GPIO0_IOC_BASE                 0xFF388000U /* GPIO0_IOC base address */
#define PVTM1_BASE                     0xFF390000U /* PVTM1 base address */
#define PMUCRU_BASE                    0xFF3A0000U /* PMUCRU base address */
#define CRU_BASE                       0xFF3B0000U /* CRU base address */
#define PERICRU_BASE                   0xFF3B2000U /* PERICRU base address */
#define VICRU_BASE                     0xFF3B4000U /* VICRU base address */
#define NPUCRU_BASE                    0xFF3B6000U /* NPUCRU base address */
#define CORECRU_BASE                   0xFF3B8000U /* CORECRU base address */
#define VEPUCRU_BASE                   0xFF3BA000U /* VEPUCRU base address */
#define VOCRU_BASE                     0xFF3BC000U /* VOCRU base address */
#define DDRCRU_BASE                    0xFF3BE000U /* DDRCRU base address */
#define SUBDDRCRU_BASE                 0xFF3BF000U /* SUBDDRCRU base address */
#define SARADC_BASE                    0xFF3C0000U /* SARADC base address */
#define I2C2_BASE                      0xFF450000U /* I2C2 base address */
#define I2C3_BASE                      0xFF460000U /* I2C3 base address */
#define I2C4_BASE                      0xFF470000U /* I2C4 base address */
#define PWM2_BASE                      0xFF490000U /* PWM2 base address */
#define UART0_BASE                     0xFF4A0000U /* UART0 base address */
#define UART1_BASE                     0xFF4B0000U /* UART1 base address */
#define UART2_BASE                     0xFF4C0000U /* UART2 base address */
#define UART3_BASE                     0xFF4D0000U /* UART3 base address */
#define UART4_BASE                     0xFF4E0000U /* UART4 base address */
#define UART5_BASE                     0xFF4F0000U /* UART5 base address */
#define GPIO1_BASE                     0xFF530000U /* GPIO1 base address */
#define GPIO1_IOC_BASE                 0xFF538000U /* GPIO1_IOC base address */
#define GPIO2_BASE                     0xFF540000U /* GPIO2 base address */
#define GPIO2_IOC_BASE                 0xFF548000U /* GPIO2_IOC base address */
#define GPIO3_BASE                     0xFF550000U /* GPIO3 base address */
#define GPIO3_IOC_BASE                 0xFF558000U /* GPIO3_IOC base address */
#define GPIO4_BASE                     0xFF560000U /* GPIO4 base address */
#define GPIO4_IOC_BASE                 0xFF568000U /* GPIO4_IOC base address */
#define TIMER0_BASE                    0xFF580000U /* TIMER0 base address */
#define TIMER1_BASE                    0xFF580020U /* TIMER1 base address */
#define TIMER2_BASE                    0xFF580040U /* TIMER2 base address */
#define TIMER3_BASE                    0xFF580060U /* TIMER3 base address */
#define TIMER4_BASE                    0xFF580080U /* TIMER4 base address */
#define TIMER5_BASE                    0xFF5800A0U /* TIMER5 base address */
#define WDT1_BASE                      0xFF5A0000U /* WDT1 base address */
#define WDT2_BASE                      0xFF5B0000U /* WDT2 base address */
#define MBOX_BASE                      0xFF5C0000U /* MBOX base address */
#define ICACHE_BASE                    0xFF640000U /* ICACHE base address */
#define DCACHE_BASE                    0xFF640000U /* DCACHE base address */
/****************************************************************************************/
/*                                                                                      */
/*                               Module Variable Section                                */
/*                                                                                      */
/****************************************************************************************/
/* Module Variable Define */

#define PMUGRF              ((struct PMUGRF_REG *) PMUGRF_BASE)
#define COREGRF             ((struct COREGRF_REG *) COREGRF_BASE)
#define PMUSGRF             ((struct PMUSGRF_REG *) PMUSGRF_BASE)
#define PVTM0               ((struct PVTM_REG *) PVTM0_BASE)
#define TIMER_HP            ((struct TIMER_HP_REG *) TIMER_HP_BASE)
#define PMU                 ((struct PMU_REG *) PMU_BASE)
#define I2C0                ((struct I2C_REG *) I2C0_BASE)
#define I2C1                ((struct I2C_REG *) I2C1_BASE)
#define PWM0                ((struct PWM_REG *) PWM0_BASE)
#define PWM1                ((struct PWM_REG *) PWM1_BASE)
#define WDT0                ((struct WDT_REG *) WDT0_BASE)
#define GPIO0               ((struct GPIO_REG *) GPIO0_BASE)
#define GPIO0_IOC           ((struct GPIO0_IOC_REG *) GPIO0_IOC_BASE)
#define PVTM1               ((struct PVTM_REG *) PVTM1_BASE)
#define PMUCRU              ((struct PMUCRU_REG *) PMUCRU_BASE)
#define CRU                 ((struct CRU_REG *) CRU_BASE)
#define PERICRU             ((struct PERICRU_REG *) PERICRU_BASE)
#define VICRU               ((struct VICRU_REG *) VICRU_BASE)
#define NPUCRU              ((struct NPUCRU_REG *) NPUCRU_BASE)
#define CORECRU             ((struct CORECRU_REG *) CORECRU_BASE)
#define VEPUCRU             ((struct VEPUCRU_REG *) VEPUCRU_BASE)
#define VOCRU               ((struct VOCRU_REG *) VOCRU_BASE)
#define DDRCRU              ((struct DDRCRU_REG *) DDRCRU_BASE)
#define SUBDDRCRU           ((struct SUBDDRCRU_REG *) SUBDDRCRU_BASE)
#define SARADC              ((struct SARADC_REG *) SARADC_BASE)
#define I2C2                ((struct I2C_REG *) I2C2_BASE)
#define I2C3                ((struct I2C_REG *) I2C3_BASE)
#define I2C4                ((struct I2C_REG *) I2C4_BASE)
#define PWM2                ((struct PWM_REG *) PWM2_BASE)
#define UART0               ((struct UART_REG *) UART0_BASE)
#define UART1               ((struct UART_REG *) UART1_BASE)
#define UART2               ((struct UART_REG *) UART2_BASE)
#define UART3               ((struct UART_REG *) UART3_BASE)
#define UART4               ((struct UART_REG *) UART4_BASE)
#define UART5               ((struct UART_REG *) UART5_BASE)
#define GPIO1               ((struct GPIO_REG *) GPIO1_BASE)
#define GPIO1_IOC           ((struct GPIO1_IOC_REG *) GPIO1_IOC_BASE)
#define GPIO2               ((struct GPIO_REG *) GPIO2_BASE)
#define GPIO2_IOC           ((struct GPIO2_IOC_REG *) GPIO2_IOC_BASE)
#define GPIO3               ((struct GPIO_REG *) GPIO3_BASE)
#define GPIO3_IOC           ((struct GPIO3_IOC_REG *) GPIO3_IOC_BASE)
#define GPIO4               ((struct GPIO_REG *) GPIO4_BASE)
#define GPIO4_IOC           ((struct GPIO4_IOC_REG *) GPIO4_IOC_BASE)
#define TIMER0              ((struct TIMER_REG *) TIMER0_BASE)
#define TIMER1              ((struct TIMER_REG *) TIMER1_BASE)
#define TIMER2              ((struct TIMER_REG *) TIMER2_BASE)
#define TIMER3              ((struct TIMER_REG *) TIMER3_BASE)
#define TIMER4              ((struct TIMER_REG *) TIMER4_BASE)
#define TIMER5              ((struct TIMER_REG *) TIMER5_BASE)
#define WDT1                ((struct WDT_REG *) WDT1_BASE)
#define WDT2                ((struct WDT_REG *) WDT2_BASE)
#define MBOX                ((struct MBOX_REG *) MBOX_BASE)
#define ICACHE              ((struct ICACHE_REG *) ICACHE_BASE)
#define DCACHE              ((struct DCACHE_REG *) DCACHE_BASE)

#define IS_PMUGRF_INSTANCE(instance) ((instance) == PMUGRF)
#define IS_COREGRF_INSTANCE(instance) ((instance) == COREGRF)
#define IS_PMUSGRF_INSTANCE(instance) ((instance) == PMUSGRF)
#define IS_TIMER_HP_INSTANCE(instance) ((instance) == TIMER_HP)
#define IS_PMU_INSTANCE(instance) ((instance) == PMU)
#define IS_GPIO0_IOC_INSTANCE(instance) ((instance) == GPIO0_IOC)
#define IS_PMUCRU_INSTANCE(instance) ((instance) == PMUCRU)
#define IS_CRU_INSTANCE(instance) ((instance) == CRU)
#define IS_PERICRU_INSTANCE(instance) ((instance) == PERICRU)
#define IS_VICRU_INSTANCE(instance) ((instance) == VICRU)
#define IS_NPUCRU_INSTANCE(instance) ((instance) == NPUCRU)
#define IS_CORECRU_INSTANCE(instance) ((instance) == CORECRU)
#define IS_VEPUCRU_INSTANCE(instance) ((instance) == VEPUCRU)
#define IS_VOCRU_INSTANCE(instance) ((instance) == VOCRU)
#define IS_DDRCRU_INSTANCE(instance) ((instance) == DDRCRU)
#define IS_SUBDDRCRU_INSTANCE(instance) ((instance) == SUBDDRCRU)
#define IS_SARADC_INSTANCE(instance) ((instance) == SARADC)
#define IS_GPIO1_IOC_INSTANCE(instance) ((instance) == GPIO1_IOC)
#define IS_GPIO2_IOC_INSTANCE(instance) ((instance) == GPIO2_IOC)
#define IS_GPIO3_IOC_INSTANCE(instance) ((instance) == GPIO3_IOC)
#define IS_GPIO4_IOC_INSTANCE(instance) ((instance) == GPIO4_IOC)
#define IS_MBOX_INSTANCE(instance) ((instance) == MBOX)
#define IS_ICACHE_INSTANCE(instance) ((instance) == ICACHE)
#define IS_DCACHE_INSTANCE(instance) ((instance) == DCACHE)
#define IS_PVTM_INSTANCE(instance) (((instance) == PVTM0) || ((instance) == PVTM1))
#define IS_I2C_INSTANCE(instance) (((instance) == I2C0) || ((instance) == I2C1) || ((instance) == I2C2) || ((instance) == I2C3) || ((instance) == I2C4))
#define IS_PWM_INSTANCE(instance) (((instance) == PWM0) || ((instance) == PWM1) || ((instance) == PWM2))
#define IS_WDT_INSTANCE(instance) (((instance) == WDT0) || ((instance) == WDT1) || ((instance) == WDT2))
#define IS_GPIO_INSTANCE(instance) (((instance) == GPIO0) || ((instance) == GPIO1) || ((instance) == GPIO2) || ((instance) == GPIO3) || ((instance) == GPIO4))
#define IS_UART_INSTANCE(instance) (((instance) == UART0) || ((instance) == UART1) || ((instance) == UART2) || ((instance) == UART3) || ((instance) == UART4) || ((instance) == UART5))
#define IS_TIMER_INSTANCE(instance) (((instance) == TIMER0) || ((instance) == TIMER1) || ((instance) == TIMER2) || ((instance) == TIMER3) || ((instance) == TIMER4) || ((instance) == TIMER5))
/****************************************************************************************/
/*                                                                                      */
/*                               Register Bitmap Section                                */
/*                                                                                      */
/****************************************************************************************/
/*****************************************PMUGRF*****************************************/
/* SOC_CON0 */
#define PMUGRF_SOC_CON0_OFFSET                             (0x0U)
#define PMUGRF_SOC_CON0_TSADC_SHUT_RESET_TRIGGER_EN_SHIFT  (0U)
#define PMUGRF_SOC_CON0_TSADC_SHUT_RESET_TRIGGER_EN_MASK   (0x1U << PMUGRF_SOC_CON0_TSADC_SHUT_RESET_TRIGGER_EN_SHIFT)  /* 0x00000001 */
#define PMUGRF_SOC_CON0_WDT_RESET_TRIGGER_EN_SHIFT         (1U)
#define PMUGRF_SOC_CON0_WDT_RESET_TRIGGER_EN_MASK          (0x1U << PMUGRF_SOC_CON0_WDT_RESET_TRIGGER_EN_SHIFT)         /* 0x00000002 */
#define PMUGRF_SOC_CON0_DDRIO_RET_EN_SHIFT                 (2U)
#define PMUGRF_SOC_CON0_DDRIO_RET_EN_MASK                  (0x1U << PMUGRF_SOC_CON0_DDRIO_RET_EN_SHIFT)                 /* 0x00000004 */
#define PMUGRF_SOC_CON0_SREF_C_ENTER_EN_SHIFT              (3U)
#define PMUGRF_SOC_CON0_SREF_C_ENTER_EN_MASK               (0x1U << PMUGRF_SOC_CON0_SREF_C_ENTER_EN_SHIFT)              /* 0x00000008 */
#define PMUGRF_SOC_CON0_DDRC_C_GATING_EN_SHIFT             (4U)
#define PMUGRF_SOC_CON0_DDRC_C_GATING_EN_MASK              (0x1U << PMUGRF_SOC_CON0_DDRC_C_GATING_EN_SHIFT)             /* 0x00000010 */
#define PMUGRF_SOC_CON0_DDR_IO_RET_DE_REQ_SHIFT            (5U)
#define PMUGRF_SOC_CON0_DDR_IO_RET_DE_REQ_MASK             (0x1U << PMUGRF_SOC_CON0_DDR_IO_RET_DE_REQ_SHIFT)            /* 0x00000020 */
#define PMUGRF_SOC_CON0_DDR_IO_RET_CFG_SHIFT               (6U)
#define PMUGRF_SOC_CON0_DDR_IO_RET_CFG_MASK                (0x1U << PMUGRF_SOC_CON0_DDR_IO_RET_CFG_SHIFT)               /* 0x00000040 */
#define PMUGRF_SOC_CON0_UPCTL_C_SYSREQ_CFG_SHIFT           (8U)
#define PMUGRF_SOC_CON0_UPCTL_C_SYSREQ_CFG_MASK            (0x1U << PMUGRF_SOC_CON0_UPCTL_C_SYSREQ_CFG_SHIFT)           /* 0x00000100 */
#define PMUGRF_SOC_CON0_DDRPHY_BUFFEREN_SEL0_SHIFT         (9U)
#define PMUGRF_SOC_CON0_DDRPHY_BUFFEREN_SEL0_MASK          (0x1U << PMUGRF_SOC_CON0_DDRPHY_BUFFEREN_SEL0_SHIFT)         /* 0x00000200 */
#define PMUGRF_SOC_CON0_DDRPHY_BUFFEREN_CORE_SHIFT         (10U)
#define PMUGRF_SOC_CON0_DDRPHY_BUFFEREN_CORE_MASK          (0x1U << PMUGRF_SOC_CON0_DDRPHY_BUFFEREN_CORE_SHIFT)         /* 0x00000400 */
#define PMUGRF_SOC_CON0_DDRPHY_BUFFEREN_SEL1_SHIFT         (11U)
#define PMUGRF_SOC_CON0_DDRPHY_BUFFEREN_SEL1_MASK          (0x1U << PMUGRF_SOC_CON0_DDRPHY_BUFFEREN_SEL1_SHIFT)         /* 0x00000800 */
#define PMUGRF_SOC_CON0_SREF_A_ENTER_EN_SHIFT              (12U)
#define PMUGRF_SOC_CON0_SREF_A_ENTER_EN_MASK               (0x1U << PMUGRF_SOC_CON0_SREF_A_ENTER_EN_SHIFT)              /* 0x00001000 */
#define PMUGRF_SOC_CON0_DDRC_A_GATING_EN_SHIFT             (13U)
#define PMUGRF_SOC_CON0_DDRC_A_GATING_EN_MASK              (0x1U << PMUGRF_SOC_CON0_DDRC_A_GATING_EN_SHIFT)             /* 0x00002000 */
#define PMUGRF_SOC_CON0_UPCTL_A_SYSREQ_CFG_SHIFT           (14U)
#define PMUGRF_SOC_CON0_UPCTL_A_SYSREQ_CFG_MASK            (0x1U << PMUGRF_SOC_CON0_UPCTL_A_SYSREQ_CFG_SHIFT)           /* 0x00004000 */
/* SOC_CON1 */
#define PMUGRF_SOC_CON1_OFFSET                             (0x4U)
#define PMUGRF_SOC_CON1_PMIC_SLEEP_SEL_SHIFT               (0U)
#define PMUGRF_SOC_CON1_PMIC_SLEEP_SEL_MASK                (0x1U << PMUGRF_SOC_CON1_PMIC_SLEEP_SEL_SHIFT)               /* 0x00000001 */
#define PMUGRF_SOC_CON1_PMIC_SLEEP_M0_POL_SHIFT            (1U)
#define PMUGRF_SOC_CON1_PMIC_SLEEP_M0_POL_MASK             (0x1U << PMUGRF_SOC_CON1_PMIC_SLEEP_M0_POL_SHIFT)            /* 0x00000002 */
#define PMUGRF_SOC_CON1_PMIC_SLEEP_M1_POL_SHIFT            (2U)
#define PMUGRF_SOC_CON1_PMIC_SLEEP_M1_POL_MASK             (0x1U << PMUGRF_SOC_CON1_PMIC_SLEEP_M1_POL_SHIFT)            /* 0x00000004 */
#define PMUGRF_SOC_CON1_PWM1_SWITCH_ENA_SHIFT              (3U)
#define PMUGRF_SOC_CON1_PWM1_SWITCH_ENA_MASK               (0x1U << PMUGRF_SOC_CON1_PWM1_SWITCH_ENA_SHIFT)              /* 0x00000008 */
#define PMUGRF_SOC_CON1_PWM2_SWITCH_ENA_SHIFT              (4U)
#define PMUGRF_SOC_CON1_PWM2_SWITCH_ENA_MASK               (0x1U << PMUGRF_SOC_CON1_PWM2_SWITCH_ENA_SHIFT)              /* 0x00000010 */
#define PMUGRF_SOC_CON1_PWM3_SWITCH_ENA_SHIFT              (5U)
#define PMUGRF_SOC_CON1_PWM3_SWITCH_ENA_MASK               (0x1U << PMUGRF_SOC_CON1_PWM3_SWITCH_ENA_SHIFT)              /* 0x00000020 */
#define PMUGRF_SOC_CON1_PWM5_SWITCH_ENA_SHIFT              (6U)
#define PMUGRF_SOC_CON1_PWM5_SWITCH_ENA_MASK               (0x1U << PMUGRF_SOC_CON1_PWM5_SWITCH_ENA_SHIFT)              /* 0x00000040 */
#define PMUGRF_SOC_CON1_PWM6_SWITCH_ENA_SHIFT              (7U)
#define PMUGRF_SOC_CON1_PWM6_SWITCH_ENA_MASK               (0x1U << PMUGRF_SOC_CON1_PWM6_SWITCH_ENA_SHIFT)              /* 0x00000080 */
#define PMUGRF_SOC_CON1_PMUSRAM_CLKGAT_DISABLE_SHIFT       (8U)
#define PMUGRF_SOC_CON1_PMUSRAM_CLKGAT_DISABLE_MASK        (0x1U << PMUGRF_SOC_CON1_PMUSRAM_CLKGAT_DISABLE_SHIFT)       /* 0x00000100 */
#define PMUGRF_SOC_CON1_LPMCU_SOFT_IRQ_SHIFT               (9U)
#define PMUGRF_SOC_CON1_LPMCU_SOFT_IRQ_MASK                (0x1U << PMUGRF_SOC_CON1_LPMCU_SOFT_IRQ_SHIFT)               /* 0x00000200 */
#define PMUGRF_SOC_CON1_PMUWDT_PAUSE_EN_SHIFT              (11U)
#define PMUGRF_SOC_CON1_PMUWDT_PAUSE_EN_MASK               (0x1U << PMUGRF_SOC_CON1_PMUWDT_PAUSE_EN_SHIFT)              /* 0x00000800 */
#define PMUGRF_SOC_CON1_PMUWDT_GLB_RESET_EN_SHIFT          (12U)
#define PMUGRF_SOC_CON1_PMUWDT_GLB_RESET_EN_MASK           (0x1U << PMUGRF_SOC_CON1_PMUWDT_GLB_RESET_EN_SHIFT)          /* 0x00001000 */
#define PMUGRF_SOC_CON1_PMUWDT_MCU_RESET_EN_SHIFT          (13U)
#define PMUGRF_SOC_CON1_PMUWDT_MCU_RESET_EN_MASK           (0x1U << PMUGRF_SOC_CON1_PMUWDT_MCU_RESET_EN_SHIFT)          /* 0x00002000 */
#define PMUGRF_SOC_CON1_RTC_32K_SEL_SHIFT                  (14U)
#define PMUGRF_SOC_CON1_RTC_32K_SEL_MASK                   (0x1U << PMUGRF_SOC_CON1_RTC_32K_SEL_SHIFT)                  /* 0x00004000 */
#define PMUGRF_SOC_CON1_RTC_CLK_32K_H_CLAMP_N_SHIFT        (15U)
#define PMUGRF_SOC_CON1_RTC_CLK_32K_H_CLAMP_N_MASK         (0x1U << PMUGRF_SOC_CON1_RTC_CLK_32K_H_CLAMP_N_SHIFT)        /* 0x00008000 */
/* SOC_CON2 */
#define PMUGRF_SOC_CON2_OFFSET                             (0x8U)
#define PMUGRF_SOC_CON2_OUT2CHIP_RST_INIT_SHIFT            (0U)
#define PMUGRF_SOC_CON2_OUT2CHIP_RST_INIT_MASK             (0xFFFFU << PMUGRF_SOC_CON2_OUT2CHIP_RST_INIT_SHIFT)         /* 0x0000FFFF */
/* SOC_CON3 */
#define PMUGRF_SOC_CON3_OFFSET                             (0xCU)
#define PMUGRF_SOC_CON3_PMUPVTM_CLKOUT_DIV_SHIFT           (0U)
#define PMUGRF_SOC_CON3_PMUPVTM_CLKOUT_DIV_MASK            (0xFFFU << PMUGRF_SOC_CON3_PMUPVTM_CLKOUT_DIV_SHIFT)         /* 0x00000FFF */
/* SOC_CON4 */
#define PMUGRF_SOC_CON4_OFFSET                             (0x10U)
#define PMUGRF_SOC_CON4_DBRESETN_PMU_GPIO0_HOLD_ENA_SHIFT  (0U)
#define PMUGRF_SOC_CON4_DBRESETN_PMU_GPIO0_HOLD_ENA_MASK   (0x1U << PMUGRF_SOC_CON4_DBRESETN_PMU_GPIO0_HOLD_ENA_SHIFT)  /* 0x00000001 */
#define PMUGRF_SOC_CON4_HRESETN_PMU_BIU_HOLD_ENA_SHIFT     (1U)
#define PMUGRF_SOC_CON4_HRESETN_PMU_BIU_HOLD_ENA_MASK      (0x1U << PMUGRF_SOC_CON4_HRESETN_PMU_BIU_HOLD_ENA_SHIFT)     /* 0x00000002 */
#define PMUGRF_SOC_CON4_HRESETN_PMU_SRAM_HOLD_ENA_SHIFT    (2U)
#define PMUGRF_SOC_CON4_HRESETN_PMU_SRAM_HOLD_ENA_MASK     (0x1U << PMUGRF_SOC_CON4_HRESETN_PMU_SRAM_HOLD_ENA_SHIFT)    /* 0x00000004 */
#define PMUGRF_SOC_CON4_PRESETN_I2C1_HOLD_ENA_SHIFT        (3U)
#define PMUGRF_SOC_CON4_PRESETN_I2C1_HOLD_ENA_MASK         (0x1U << PMUGRF_SOC_CON4_PRESETN_I2C1_HOLD_ENA_SHIFT)        /* 0x00000008 */
#define PMUGRF_SOC_CON4_PRESETN_PMU_BIU_HOLD_ENA_SHIFT     (4U)
#define PMUGRF_SOC_CON4_PRESETN_PMU_BIU_HOLD_ENA_MASK      (0x1U << PMUGRF_SOC_CON4_PRESETN_PMU_BIU_HOLD_ENA_SHIFT)     /* 0x00000010 */
#define PMUGRF_SOC_CON4_PRESETN_PMU_CRU_HOLD_ENA_SHIFT     (7U)
#define PMUGRF_SOC_CON4_PRESETN_PMU_CRU_HOLD_ENA_MASK      (0x1U << PMUGRF_SOC_CON4_PRESETN_PMU_CRU_HOLD_ENA_SHIFT)     /* 0x00000080 */
#define PMUGRF_SOC_CON4_PRESETN_PMU_HPTIMER_HOLD_ENA_SHIFT (8U)
#define PMUGRF_SOC_CON4_PRESETN_PMU_HPTIMER_HOLD_ENA_MASK  (0x1U << PMUGRF_SOC_CON4_PRESETN_PMU_HPTIMER_HOLD_ENA_SHIFT) /* 0x00000100 */
#define PMUGRF_SOC_CON4_PRESETN_PMU_IOC_HOLD_ENA_SHIFT     (9U)
#define PMUGRF_SOC_CON4_PRESETN_PMU_IOC_HOLD_ENA_MASK      (0x1U << PMUGRF_SOC_CON4_PRESETN_PMU_IOC_HOLD_ENA_SHIFT)     /* 0x00000200 */
#define PMUGRF_SOC_CON4_PRESETN_PMU_MAILBOX_HOLD_ENA_SHIFT (10U)
#define PMUGRF_SOC_CON4_PRESETN_PMU_MAILBOX_HOLD_ENA_MASK  (0x1U << PMUGRF_SOC_CON4_PRESETN_PMU_MAILBOX_HOLD_ENA_SHIFT) /* 0x00000400 */
#define PMUGRF_SOC_CON4_PRESETN_PMU_SGRF_REMAP_HOLD_ENA_SHIFT (11U)
#define PMUGRF_SOC_CON4_PRESETN_PMU_SGRF_REMAP_HOLD_ENA_MASK (0x1U << PMUGRF_SOC_CON4_PRESETN_PMU_SGRF_REMAP_HOLD_ENA_SHIFT) /* 0x00000800 */
#define PMUGRF_SOC_CON4_PRESETN_PMU_SGRF_HOLD_ENA_SHIFT    (12U)
#define PMUGRF_SOC_CON4_PRESETN_PMU_SGRF_HOLD_ENA_MASK     (0x1U << PMUGRF_SOC_CON4_PRESETN_PMU_SGRF_HOLD_ENA_SHIFT)    /* 0x00001000 */
#define PMUGRF_SOC_CON4_PRESETN_PMU_WDT_HOLD_ENA_SHIFT     (13U)
#define PMUGRF_SOC_CON4_PRESETN_PMU_WDT_HOLD_ENA_MASK      (0x1U << PMUGRF_SOC_CON4_PRESETN_PMU_WDT_HOLD_ENA_SHIFT)     /* 0x00002000 */
#define PMUGRF_SOC_CON4_PRESETN_PMU_PVTM_HOLD_ENA_SHIFT    (14U)
#define PMUGRF_SOC_CON4_PRESETN_PMU_PVTM_HOLD_ENA_MASK     (0x1U << PMUGRF_SOC_CON4_PRESETN_PMU_PVTM_HOLD_ENA_SHIFT)    /* 0x00004000 */
#define PMUGRF_SOC_CON4_RESETN_DDR_FAIL_SAFE_HOLD_ENA_SHIFT (15U)
#define PMUGRF_SOC_CON4_RESETN_DDR_FAIL_SAFE_HOLD_ENA_MASK (0x1U << PMUGRF_SOC_CON4_RESETN_DDR_FAIL_SAFE_HOLD_ENA_SHIFT) /* 0x00008000 */
/* SOC_CON5 */
#define PMUGRF_SOC_CON5_OFFSET                             (0x14U)
#define PMUGRF_SOC_CON5_RESETN_I2C1_HOLD_ENA_SHIFT         (0U)
#define PMUGRF_SOC_CON5_RESETN_I2C1_HOLD_ENA_MASK          (0x1U << PMUGRF_SOC_CON5_RESETN_I2C1_HOLD_ENA_SHIFT)         /* 0x00000001 */
#define PMUGRF_SOC_CON5_RESETN_PMU_32K_HPTIMER_HOLD_ENA_SHIFT (1U)
#define PMUGRF_SOC_CON5_RESETN_PMU_32K_HPTIMER_HOLD_ENA_MASK (0x1U << PMUGRF_SOC_CON5_RESETN_PMU_32K_HPTIMER_HOLD_ENA_SHIFT) /* 0x00000002 */
#define PMUGRF_SOC_CON5_RESETN_PMU_HPTIMER_HOLD_ENA_SHIFT  (2U)
#define PMUGRF_SOC_CON5_RESETN_PMU_HPTIMER_HOLD_ENA_MASK   (0x1U << PMUGRF_SOC_CON5_RESETN_PMU_HPTIMER_HOLD_ENA_SHIFT)  /* 0x00000004 */
#define PMUGRF_SOC_CON5_RESETN_LPMCU_CPU_HOLD_ENA_SHIFT    (3U)
#define PMUGRF_SOC_CON5_RESETN_LPMCU_CPU_HOLD_ENA_MASK     (0x1U << PMUGRF_SOC_CON5_RESETN_LPMCU_CPU_HOLD_ENA_SHIFT)    /* 0x00000008 */
#define PMUGRF_SOC_CON5_RESETN_LPMCU_PWRUP_HOLD_ENA_SHIFT  (4U)
#define PMUGRF_SOC_CON5_RESETN_LPMCU_PWRUP_HOLD_ENA_MASK   (0x1U << PMUGRF_SOC_CON5_RESETN_LPMCU_PWRUP_HOLD_ENA_SHIFT)  /* 0x00000010 */
#define PMUGRF_SOC_CON5_RESETN_LPMCU_HOLD_ENA_SHIFT        (5U)
#define PMUGRF_SOC_CON5_RESETN_LPMCU_HOLD_ENA_MASK         (0x1U << PMUGRF_SOC_CON5_RESETN_LPMCU_HOLD_ENA_SHIFT)        /* 0x00000020 */
#define PMUGRF_SOC_CON5_RESETN_PMUPVTM_HOLD_ENA_SHIFT      (6U)
#define PMUGRF_SOC_CON5_RESETN_PMUPVTM_HOLD_ENA_MASK       (0x1U << PMUGRF_SOC_CON5_RESETN_PMUPVTM_HOLD_ENA_SHIFT)      /* 0x00000040 */
#define PMUGRF_SOC_CON5_TRESETN_LPMCU_CPU_HOLD_ENA_SHIFT   (7U)
#define PMUGRF_SOC_CON5_TRESETN_LPMCU_CPU_HOLD_ENA_MASK    (0x1U << PMUGRF_SOC_CON5_TRESETN_LPMCU_CPU_HOLD_ENA_SHIFT)   /* 0x00000080 */
#define PMUGRF_SOC_CON5_TRESETN_PMU_WDT_HOLD_ENA_SHIFT     (8U)
#define PMUGRF_SOC_CON5_TRESETN_PMU_WDT_HOLD_ENA_MASK      (0x1U << PMUGRF_SOC_CON5_TRESETN_PMU_WDT_HOLD_ENA_SHIFT)     /* 0x00000100 */
/* SOC_STATUS */
#define PMUGRF_SOC_STATUS_OFFSET                           (0x20U)
#define PMUGRF_SOC_STATUS                                  (0x12U)
#define PMUGRF_SOC_STATUS_LPMCU_WFI_HALTED_SHIFT           (0U)
#define PMUGRF_SOC_STATUS_LPMCU_WFI_HALTED_MASK            (0x1U << PMUGRF_SOC_STATUS_LPMCU_WFI_HALTED_SHIFT)           /* 0x00000001 */
#define PMUGRF_SOC_STATUS_LPMCU_RST_OUT_SHIFT              (1U)
#define PMUGRF_SOC_STATUS_LPMCU_RST_OUT_MASK               (0x1U << PMUGRF_SOC_STATUS_LPMCU_RST_OUT_SHIFT)              /* 0x00000002 */
#define PMUGRF_SOC_STATUS_CORE_STANDBYWFI_SHIFT            (2U)
#define PMUGRF_SOC_STATUS_CORE_STANDBYWFI_MASK             (0x1U << PMUGRF_SOC_STATUS_CORE_STANDBYWFI_SHIFT)            /* 0x00000004 */
#define PMUGRF_SOC_STATUS_CORE_STANDBYWFIL2_SHIFT          (3U)
#define PMUGRF_SOC_STATUS_CORE_STANDBYWFIL2_MASK           (0x1U << PMUGRF_SOC_STATUS_CORE_STANDBYWFIL2_SHIFT)          /* 0x00000008 */
#define PMUGRF_SOC_STATUS_NPOR_POWERGOOD_SHIFT             (4U)
#define PMUGRF_SOC_STATUS_NPOR_POWERGOOD_MASK              (0x1U << PMUGRF_SOC_STATUS_NPOR_POWERGOOD_SHIFT)             /* 0x00000010 */
/* PMUIO_CON */
#define PMUGRF_PMUIO_CON_OFFSET                            (0x30U)
#define PMUGRF_PMUIO_CON_POC_PMUIO_SEL18_SHIFT             (0U)
#define PMUGRF_PMUIO_CON_POC_PMUIO_SEL18_MASK              (0x1U << PMUGRF_PMUIO_CON_POC_PMUIO_SEL18_SHIFT)             /* 0x00000001 */
#define PMUGRF_PMUIO_CON_POC_PMUIO_SEL25_SHIFT             (1U)
#define PMUGRF_PMUIO_CON_POC_PMUIO_SEL25_MASK              (0x1U << PMUGRF_PMUIO_CON_POC_PMUIO_SEL25_SHIFT)             /* 0x00000002 */
#define PMUGRF_PMUIO_CON_POC_PMUIO_CLE_SHIFT               (2U)
#define PMUGRF_PMUIO_CON_POC_PMUIO_CLE_MASK                (0x1U << PMUGRF_PMUIO_CON_POC_PMUIO_CLE_SHIFT)               /* 0x00000004 */
#define PMUGRF_PMUIO_CON_POC_PMUIO_IDDQ_SHIFT              (3U)
#define PMUGRF_PMUIO_CON_POC_PMUIO_IDDQ_MASK               (0x1U << PMUGRF_PMUIO_CON_POC_PMUIO_IDDQ_SHIFT)              /* 0x00000008 */
/* MEM_CON */
#define PMUGRF_MEM_CON_OFFSET                              (0x40U)
#define PMUGRF_MEM_CON_MEM_CFG_UHDSPRA_SHIFT               (0U)
#define PMUGRF_MEM_CON_MEM_CFG_UHDSPRA_MASK                (0xFU << PMUGRF_MEM_CON_MEM_CFG_UHDSPRA_SHIFT)               /* 0x0000000F */
/* OS_REG0 */
#define PMUGRF_OS_REG0_OFFSET                              (0x200U)
#define PMUGRF_OS_REG0_OS_REG_SHIFT                        (0U)
#define PMUGRF_OS_REG0_OS_REG_MASK                         (0xFFFFFFFFU << PMUGRF_OS_REG0_OS_REG_SHIFT)                 /* 0xFFFFFFFF */
/* OS_REG1 */
#define PMUGRF_OS_REG1_OFFSET                              (0x204U)
#define PMUGRF_OS_REG1_OS_REG_SHIFT                        (0U)
#define PMUGRF_OS_REG1_OS_REG_MASK                         (0xFFFFFFFFU << PMUGRF_OS_REG1_OS_REG_SHIFT)                 /* 0xFFFFFFFF */
/* OS_REG2 */
#define PMUGRF_OS_REG2_OFFSET                              (0x208U)
#define PMUGRF_OS_REG2_OS_REG_SHIFT                        (0U)
#define PMUGRF_OS_REG2_OS_REG_MASK                         (0xFFFFFFFFU << PMUGRF_OS_REG2_OS_REG_SHIFT)                 /* 0xFFFFFFFF */
/* OS_REG3 */
#define PMUGRF_OS_REG3_OFFSET                              (0x20CU)
#define PMUGRF_OS_REG3_OS_REG_SHIFT                        (0U)
#define PMUGRF_OS_REG3_OS_REG_MASK                         (0xFFFFFFFFU << PMUGRF_OS_REG3_OS_REG_SHIFT)                 /* 0xFFFFFFFF */
/* OS_REG4 */
#define PMUGRF_OS_REG4_OFFSET                              (0x210U)
#define PMUGRF_OS_REG4_OS_REG_SHIFT                        (0U)
#define PMUGRF_OS_REG4_OS_REG_MASK                         (0xFFFFFFFFU << PMUGRF_OS_REG4_OS_REG_SHIFT)                 /* 0xFFFFFFFF */
/* OS_REG5 */
#define PMUGRF_OS_REG5_OFFSET                              (0x214U)
#define PMUGRF_OS_REG5_OS_REG_SHIFT                        (0U)
#define PMUGRF_OS_REG5_OS_REG_MASK                         (0xFFFFFFFFU << PMUGRF_OS_REG5_OS_REG_SHIFT)                 /* 0xFFFFFFFF */
/* OS_REG6 */
#define PMUGRF_OS_REG6_OFFSET                              (0x218U)
#define PMUGRF_OS_REG6_OS_REG_SHIFT                        (0U)
#define PMUGRF_OS_REG6_OS_REG_MASK                         (0xFFFFFFFFU << PMUGRF_OS_REG6_OS_REG_SHIFT)                 /* 0xFFFFFFFF */
/* OS_REG7 */
#define PMUGRF_OS_REG7_OFFSET                              (0x21CU)
#define PMUGRF_OS_REG7_OS_REG_SHIFT                        (0U)
#define PMUGRF_OS_REG7_OS_REG_MASK                         (0xFFFFFFFFU << PMUGRF_OS_REG7_OS_REG_SHIFT)                 /* 0xFFFFFFFF */
/* OS_REG8 */
#define PMUGRF_OS_REG8_OFFSET                              (0x220U)
#define PMUGRF_OS_REG8_OS_REG_SHIFT                        (0U)
#define PMUGRF_OS_REG8_OS_REG_MASK                         (0xFFFFFFFFU << PMUGRF_OS_REG8_OS_REG_SHIFT)                 /* 0xFFFFFFFF */
/* OS_REG9 */
#define PMUGRF_OS_REG9_OFFSET                              (0x224U)
#define PMUGRF_OS_REG9_OS_REG_SHIFT                        (0U)
#define PMUGRF_OS_REG9_OS_REG_MASK                         (0xFFFFFFFFU << PMUGRF_OS_REG9_OS_REG_SHIFT)                 /* 0xFFFFFFFF */
/* OS_REG10 */
#define PMUGRF_OS_REG10_OFFSET                             (0x228U)
#define PMUGRF_OS_REG10_OS_REG_SHIFT                       (0U)
#define PMUGRF_OS_REG10_OS_REG_MASK                        (0xFFFFFFFFU << PMUGRF_OS_REG10_OS_REG_SHIFT)                /* 0xFFFFFFFF */
/* OS_REG11 */
#define PMUGRF_OS_REG11_OFFSET                             (0x22CU)
#define PMUGRF_OS_REG11_OS_REG_SHIFT                       (0U)
#define PMUGRF_OS_REG11_OS_REG_MASK                        (0xFFFFFFFFU << PMUGRF_OS_REG11_OS_REG_SHIFT)                /* 0xFFFFFFFF */
/* RSTFUNC_STATUS */
#define PMUGRF_RSTFUNC_STATUS_OFFSET                       (0x230U)
#define PMUGRF_RSTFUNC_STATUS                              (0x0U)
#define PMUGRF_RSTFUNC_STATUS_FIRST_RESET_SRC_STAT_SHIFT   (0U)
#define PMUGRF_RSTFUNC_STATUS_FIRST_RESET_SRC_STAT_MASK    (0x1U << PMUGRF_RSTFUNC_STATUS_FIRST_RESET_SRC_STAT_SHIFT)   /* 0x00000001 */
#define PMUGRF_RSTFUNC_STATUS_WDT_RESET_SRC_STAT_SHIFT     (1U)
#define PMUGRF_RSTFUNC_STATUS_WDT_RESET_SRC_STAT_MASK      (0x1U << PMUGRF_RSTFUNC_STATUS_WDT_RESET_SRC_STAT_SHIFT)     /* 0x00000002 */
#define PMUGRF_RSTFUNC_STATUS_TSADC_SHUT_RESET_SRC_STAT_SHIFT (2U)
#define PMUGRF_RSTFUNC_STATUS_TSADC_SHUT_RESET_SRC_STAT_MASK (0x1U << PMUGRF_RSTFUNC_STATUS_TSADC_SHUT_RESET_SRC_STAT_SHIFT) /* 0x00000004 */
#define PMUGRF_RSTFUNC_STATUS_DDR_FAIL_SAFE_SRC_STAT_SHIFT (3U)
#define PMUGRF_RSTFUNC_STATUS_DDR_FAIL_SAFE_SRC_STAT_MASK  (0x1U << PMUGRF_RSTFUNC_STATUS_DDR_FAIL_SAFE_SRC_STAT_SHIFT) /* 0x00000008 */
/* RSTFUNC_CLR */
#define PMUGRF_RSTFUNC_CLR_OFFSET                          (0x234U)
#define PMUGRF_RSTFUNC_CLR_FIRST_RESET_SRC_CLR_SHIFT       (0U)
#define PMUGRF_RSTFUNC_CLR_FIRST_RESET_SRC_CLR_MASK        (0x1U << PMUGRF_RSTFUNC_CLR_FIRST_RESET_SRC_CLR_SHIFT)       /* 0x00000001 */
#define PMUGRF_RSTFUNC_CLR_WDT_RESET_SRC_CLR_SHIFT         (1U)
#define PMUGRF_RSTFUNC_CLR_WDT_RESET_SRC_CLR_MASK          (0x1U << PMUGRF_RSTFUNC_CLR_WDT_RESET_SRC_CLR_SHIFT)         /* 0x00000002 */
#define PMUGRF_RSTFUNC_CLR_TSADC_SHUT_RESET_SRC_CLR_SHIFT  (2U)
#define PMUGRF_RSTFUNC_CLR_TSADC_SHUT_RESET_SRC_CLR_MASK   (0x1U << PMUGRF_RSTFUNC_CLR_TSADC_SHUT_RESET_SRC_CLR_SHIFT)  /* 0x00000004 */
#define PMUGRF_RSTFUNC_CLR_DDR_FAIL_SAFE_SRC_CLR_SHIFT     (3U)
#define PMUGRF_RSTFUNC_CLR_DDR_FAIL_SAFE_SRC_CLR_MASK      (0x1U << PMUGRF_RSTFUNC_CLR_DDR_FAIL_SAFE_SRC_CLR_SHIFT)     /* 0x00000008 */
/****************************************COREGRF*****************************************/
/* PVTPLL_CON0_L */
#define COREGRF_PVTPLL_CON0_L_OFFSET                       (0x0U)
#define COREGRF_PVTPLL_CON0_L_START_SHIFT                  (0U)
#define COREGRF_PVTPLL_CON0_L_START_MASK                   (0x1U << COREGRF_PVTPLL_CON0_L_START_SHIFT)                  /* 0x00000001 */
#define COREGRF_PVTPLL_CON0_L_OSC_EN_SHIFT                 (1U)
#define COREGRF_PVTPLL_CON0_L_OSC_EN_MASK                  (0x1U << COREGRF_PVTPLL_CON0_L_OSC_EN_SHIFT)                 /* 0x00000002 */
#define COREGRF_PVTPLL_CON0_L_OUT_POLAR_SHIFT              (2U)
#define COREGRF_PVTPLL_CON0_L_OUT_POLAR_MASK               (0x1U << COREGRF_PVTPLL_CON0_L_OUT_POLAR_SHIFT)              /* 0x00000004 */
#define COREGRF_PVTPLL_CON0_L_OSC_RING_SEL_SHIFT           (8U)
#define COREGRF_PVTPLL_CON0_L_OSC_RING_SEL_MASK            (0x7U << COREGRF_PVTPLL_CON0_L_OSC_RING_SEL_SHIFT)           /* 0x00000700 */
#define COREGRF_PVTPLL_CON0_L_CLK_DIV_REF_SHIFT            (11U)
#define COREGRF_PVTPLL_CON0_L_CLK_DIV_REF_MASK             (0x3U << COREGRF_PVTPLL_CON0_L_CLK_DIV_REF_SHIFT)            /* 0x00001800 */
#define COREGRF_PVTPLL_CON0_L_CLK_DIV_OSC_SHIFT            (13U)
#define COREGRF_PVTPLL_CON0_L_CLK_DIV_OSC_MASK             (0x3U << COREGRF_PVTPLL_CON0_L_CLK_DIV_OSC_SHIFT)            /* 0x00006000 */
#define COREGRF_PVTPLL_CON0_L_BYPASS_SHIFT                 (15U)
#define COREGRF_PVTPLL_CON0_L_BYPASS_MASK                  (0x1U << COREGRF_PVTPLL_CON0_L_BYPASS_SHIFT)                 /* 0x00008000 */
/* PVTPLL_CON0_H */
#define COREGRF_PVTPLL_CON0_H_OFFSET                       (0x4U)
#define COREGRF_PVTPLL_CON0_H_RING_LENGTH_SEL_SHIFT        (0U)
#define COREGRF_PVTPLL_CON0_H_RING_LENGTH_SEL_MASK         (0x7FU << COREGRF_PVTPLL_CON0_H_RING_LENGTH_SEL_SHIFT)       /* 0x0000007F */
/* PVTPLL_CON1 */
#define COREGRF_PVTPLL_CON1_OFFSET                         (0x8U)
#define COREGRF_PVTPLL_CON1_CAL_CNT_SHIFT                  (0U)
#define COREGRF_PVTPLL_CON1_CAL_CNT_MASK                   (0xFFFFFFFFU << COREGRF_PVTPLL_CON1_CAL_CNT_SHIFT)           /* 0xFFFFFFFF */
/* PVTPLL_CON2 */
#define COREGRF_PVTPLL_CON2_OFFSET                         (0xCU)
#define COREGRF_PVTPLL_CON2_THRESHOLD_SHIFT                (0U)
#define COREGRF_PVTPLL_CON2_THRESHOLD_MASK                 (0xFFFFU << COREGRF_PVTPLL_CON2_THRESHOLD_SHIFT)             /* 0x0000FFFF */
#define COREGRF_PVTPLL_CON2_CKG_VAL_SHIFT                  (16U)
#define COREGRF_PVTPLL_CON2_CKG_VAL_MASK                   (0xFFFFU << COREGRF_PVTPLL_CON2_CKG_VAL_SHIFT)               /* 0xFFFF0000 */
/* PVTPLL_CON3 */
#define COREGRF_PVTPLL_CON3_OFFSET                         (0x10U)
#define COREGRF_PVTPLL_CON3_REF_CNT_SHIFT                  (0U)
#define COREGRF_PVTPLL_CON3_REF_CNT_MASK                   (0xFFFFFFFFU << COREGRF_PVTPLL_CON3_REF_CNT_SHIFT)           /* 0xFFFFFFFF */
/* PVTPLL_OSC_CNT */
#define COREGRF_PVTPLL_OSC_CNT_OFFSET                      (0x18U)
#define COREGRF_PVTPLL_OSC_CNT_OSC_CLK_CNT_VAL_SHIFT       (0U)
#define COREGRF_PVTPLL_OSC_CNT_OSC_CLK_CNT_VAL_MASK        (0xFFFFFFFFU << COREGRF_PVTPLL_OSC_CNT_OSC_CLK_CNT_VAL_SHIFT) /* 0xFFFFFFFF */
/* PVTPLL_OSC_CNT_AVG */
#define COREGRF_PVTPLL_OSC_CNT_AVG_OFFSET                  (0x1CU)
#define COREGRF_PVTPLL_OSC_CNT_AVG_OSC_CLK_CNT_AVE_VALUE_SHIFT (0U)
#define COREGRF_PVTPLL_OSC_CNT_AVG_OSC_CLK_CNT_AVE_VALUE_MASK (0x1U << COREGRF_PVTPLL_OSC_CNT_AVG_OSC_CLK_CNT_AVE_VALUE_SHIFT) /* 0x00000001 */
/* CACHE_PERI_ADDR_START */
#define COREGRF_CACHE_PERI_ADDR_START_OFFSET               (0x24U)
#define COREGRF_CACHE_PERI_ADDR_START_PERI_ADDR_START_SHIFT (0U)
#define COREGRF_CACHE_PERI_ADDR_START_PERI_ADDR_START_MASK (0xFFFFFU << COREGRF_CACHE_PERI_ADDR_START_PERI_ADDR_START_SHIFT) /* 0x000FFFFF */
/* CACHE_PERI_ADDR_END */
#define COREGRF_CACHE_PERI_ADDR_END_OFFSET                 (0x28U)
#define COREGRF_CACHE_PERI_ADDR_END_PERIPHRAL_ADDR_END_SHIFT (0U)
#define COREGRF_CACHE_PERI_ADDR_END_PERIPHRAL_ADDR_END_MASK (0xFFFFFU << COREGRF_CACHE_PERI_ADDR_END_PERIPHRAL_ADDR_END_SHIFT) /* 0x000FFFFF */
/* MCU_CACHE_MISC */
#define COREGRF_MCU_CACHE_MISC_OFFSET                      (0x2CU)
#define COREGRF_MCU_CACHE_MISC_CACHE_FLUSH_REQ_SHIFT       (0U)
#define COREGRF_MCU_CACHE_MISC_CACHE_FLUSH_REQ_MASK        (0x1U << COREGRF_MCU_CACHE_MISC_CACHE_FLUSH_REQ_SHIFT)       /* 0x00000001 */
#define COREGRF_MCU_CACHE_MISC_CACHE_SLV_MEMATTR_SHIFT     (1U)
#define COREGRF_MCU_CACHE_MISC_CACHE_SLV_MEMATTR_MASK      (0x3U << COREGRF_MCU_CACHE_MISC_CACHE_SLV_MEMATTR_SHIFT)     /* 0x00000006 */
#define COREGRF_MCU_CACHE_MISC_SCR1_SOFT_IRQ_SHIFT         (3U)
#define COREGRF_MCU_CACHE_MISC_SCR1_SOFT_IRQ_MASK          (0x1U << COREGRF_MCU_CACHE_MISC_SCR1_SOFT_IRQ_SHIFT)         /* 0x00000008 */
/* MCU_CACHE_STATUS */
#define COREGRF_MCU_CACHE_STATUS_OFFSET                    (0x30U)
#define COREGRF_MCU_CACHE_STATUS_CACHE_IDLE_SHIFT          (0U)
#define COREGRF_MCU_CACHE_STATUS_CACHE_IDLE_MASK           (0x1U << COREGRF_MCU_CACHE_STATUS_CACHE_IDLE_SHIFT)          /* 0x00000001 */
#define COREGRF_MCU_CACHE_STATUS_CACHE_FLUSH_ACK_SHIFT     (1U)
#define COREGRF_MCU_CACHE_STATUS_CACHE_FLUSH_ACK_MASK      (0x1U << COREGRF_MCU_CACHE_STATUS_CACHE_FLUSH_ACK_SHIFT)     /* 0x00000002 */
#define COREGRF_MCU_CACHE_STATUS_WFI_HALTED_SHIFT          (2U)
#define COREGRF_MCU_CACHE_STATUS_WFI_HALTED_MASK           (0x1U << COREGRF_MCU_CACHE_STATUS_WFI_HALTED_SHIFT)          /* 0x00000004 */
#define COREGRF_MCU_CACHE_STATUS_NDM_RST_N_OUT_SHIFT       (3U)
#define COREGRF_MCU_CACHE_STATUS_NDM_RST_N_OUT_MASK        (0x1U << COREGRF_MCU_CACHE_STATUS_NDM_RST_N_OUT_SHIFT)       /* 0x00000008 */
/* CPU_STATUS */
#define COREGRF_CPU_STATUS_OFFSET                          (0x34U)
#define COREGRF_CPU_STATUS_STANDBYWFE_SHIFT                (0U)
#define COREGRF_CPU_STATUS_STANDBYWFE_MASK                 (0x1U << COREGRF_CPU_STATUS_STANDBYWFE_SHIFT)                /* 0x00000001 */
#define COREGRF_CPU_STATUS_STANDBYWFI_SHIFT                (1U)
#define COREGRF_CPU_STATUS_STANDBYWFI_MASK                 (0x1U << COREGRF_CPU_STATUS_STANDBYWFI_SHIFT)                /* 0x00000002 */
#define COREGRF_CPU_STATUS_SMPNAMP_SHIFT                   (2U)
#define COREGRF_CPU_STATUS_SMPNAMP_MASK                    (0x1U << COREGRF_CPU_STATUS_SMPNAMP_SHIFT)                   /* 0x00000004 */
#define COREGRF_CPU_STATUS_STANDBYWFIL2_SHIFT              (3U)
#define COREGRF_CPU_STATUS_STANDBYWFIL2_MASK               (0x1U << COREGRF_CPU_STATUS_STANDBYWFIL2_SHIFT)              /* 0x00000008 */
#define COREGRF_CPU_STATUS_EVENTO_RISING_EDGE_SHIFT        (4U)
#define COREGRF_CPU_STATUS_EVENTO_RISING_EDGE_MASK         (0x1U << COREGRF_CPU_STATUS_EVENTO_RISING_EDGE_SHIFT)        /* 0x00000010 */
#define COREGRF_CPU_STATUS_JTAGTOP_SHIFT                   (5U)
#define COREGRF_CPU_STATUS_JTAGTOP_MASK                    (0x1U << COREGRF_CPU_STATUS_JTAGTOP_SHIFT)                   /* 0x00000020 */
#define COREGRF_CPU_STATUS_JTAGNSW_SHIFT                   (6U)
#define COREGRF_CPU_STATUS_JTAGNSW_MASK                    (0x1U << COREGRF_CPU_STATUS_JTAGNSW_SHIFT)                   /* 0x00000040 */
/* CPU_CON0 */
#define COREGRF_CPU_CON0_OFFSET                            (0x38U)
#define COREGRF_CPU_CON0_VINITHI_SHIFT                     (0U)
#define COREGRF_CPU_CON0_VINITHI_MASK                      (0x1U << COREGRF_CPU_CON0_VINITHI_SHIFT)                     /* 0x00000001 */
#define COREGRF_CPU_CON0_CFGEND_SHIFT                      (1U)
#define COREGRF_CPU_CON0_CFGEND_MASK                       (0x1U << COREGRF_CPU_CON0_CFGEND_SHIFT)                      /* 0x00000002 */
#define COREGRF_CPU_CON0_CFGTE_SHIFT                       (2U)
#define COREGRF_CPU_CON0_CFGTE_MASK                        (0x1U << COREGRF_CPU_CON0_CFGTE_SHIFT)                       /* 0x00000004 */
#define COREGRF_CPU_CON0_L1RSTDISABLE_SHIFT                (7U)
#define COREGRF_CPU_CON0_L1RSTDISABLE_MASK                 (0x1U << COREGRF_CPU_CON0_L1RSTDISABLE_SHIFT)                /* 0x00000080 */
#define COREGRF_CPU_CON0_L2RSTDISABLE_SHIFT                (8U)
#define COREGRF_CPU_CON0_L2RSTDISABLE_MASK                 (0x1U << COREGRF_CPU_CON0_L2RSTDISABLE_SHIFT)                /* 0x00000100 */
#define COREGRF_CPU_CON0_EVENTI_SHIFT                      (9U)
#define COREGRF_CPU_CON0_EVENTI_MASK                       (0x1U << COREGRF_CPU_CON0_EVENTI_SHIFT)                      /* 0x00000200 */
#define COREGRF_CPU_CON0_DBGROMADDRV_SHIFT                 (10U)
#define COREGRF_CPU_CON0_DBGROMADDRV_MASK                  (0x1U << COREGRF_CPU_CON0_DBGROMADDRV_SHIFT)                 /* 0x00000400 */
#define COREGRF_CPU_CON0_DBGSELFADDRV_SHIFT                (11U)
#define COREGRF_CPU_CON0_DBGSELFADDRV_MASK                 (0x1U << COREGRF_CPU_CON0_DBGSELFADDRV_SHIFT)                /* 0x00000800 */
#define COREGRF_CPU_CON0_EVENTO_CLR_SHIFT                  (12U)
#define COREGRF_CPU_CON0_EVENTO_CLR_MASK                   (0x1U << COREGRF_CPU_CON0_EVENTO_CLR_SHIFT)                  /* 0x00001000 */
#define COREGRF_CPU_CON0_SRST_WFIEN_SHIFT                  (13U)
#define COREGRF_CPU_CON0_SRST_WFIEN_MASK                   (0x1U << COREGRF_CPU_CON0_SRST_WFIEN_SHIFT)                  /* 0x00002000 */
#define COREGRF_CPU_CON0_PO_SRST_WFIEN_SHIFT               (14U)
#define COREGRF_CPU_CON0_PO_SRST_WFIEN_MASK                (0x1U << COREGRF_CPU_CON0_PO_SRST_WFIEN_SHIFT)               /* 0x00004000 */
#define COREGRF_CPU_CON0_WAKEUP_INT_PMU_SEL_SHIFT          (15U)
#define COREGRF_CPU_CON0_WAKEUP_INT_PMU_SEL_MASK           (0x1U << COREGRF_CPU_CON0_WAKEUP_INT_PMU_SEL_SHIFT)          /* 0x00008000 */
/* CORE_MEMCFG_UHDSPRA */
#define COREGRF_CORE_MEMCFG_UHDSPRA_OFFSET                 (0x3CU)
#define COREGRF_CORE_MEMCFG_UHDSPRA_RTSEL_SHIFT            (0U)
#define COREGRF_CORE_MEMCFG_UHDSPRA_RTSEL_MASK             (0x3U << COREGRF_CORE_MEMCFG_UHDSPRA_RTSEL_SHIFT)            /* 0x00000003 */
#define COREGRF_CORE_MEMCFG_UHDSPRA_WTSEL_SHIFT            (2U)
#define COREGRF_CORE_MEMCFG_UHDSPRA_WTSEL_MASK             (0x3U << COREGRF_CORE_MEMCFG_UHDSPRA_WTSEL_SHIFT)            /* 0x0000000C */
/****************************************PMUSGRF*****************************************/
/* SOC_CON0 */
#define PMUSGRF_SOC_CON0_OFFSET                            (0x0U)
#define PMUSGRF_SOC_CON0_HCLK_PMUSRAM_EN_SHIFT             (0U)
#define PMUSGRF_SOC_CON0_HCLK_PMUSRAM_EN_MASK              (0x1U << PMUSGRF_SOC_CON0_HCLK_PMUSRAM_EN_SHIFT)             /* 0x00000001 */
#define PMUSGRF_SOC_CON0_HCLK_PMUSRAM_EN_PMU_SHIFT         (1U)
#define PMUSGRF_SOC_CON0_HCLK_PMUSRAM_EN_PMU_MASK          (0x1U << PMUSGRF_SOC_CON0_HCLK_PMUSRAM_EN_PMU_SHIFT)         /* 0x00000002 */
#define PMUSGRF_SOC_CON0_HRESETN_PMUSRAM_REQ_SHIFT         (2U)
#define PMUSGRF_SOC_CON0_HRESETN_PMUSRAM_REQ_MASK          (0x1U << PMUSGRF_SOC_CON0_HRESETN_PMUSRAM_REQ_SHIFT)         /* 0x00000004 */
#define PMUSGRF_SOC_CON0_FIRST_RESET_EN_SHIFT              (10U)
#define PMUSGRF_SOC_CON0_FIRST_RESET_EN_MASK               (0x1U << PMUSGRF_SOC_CON0_FIRST_RESET_EN_SHIFT)              /* 0x00000400 */
#define PMUSGRF_SOC_CON0_TSADC_SHUT_EN_SHIFT               (11U)
#define PMUSGRF_SOC_CON0_TSADC_SHUT_EN_MASK                (0x1U << PMUSGRF_SOC_CON0_TSADC_SHUT_EN_SHIFT)               /* 0x00000800 */
#define PMUSGRF_SOC_CON0_WDT_RESET_EN_SHIFT                (12U)
#define PMUSGRF_SOC_CON0_WDT_RESET_EN_MASK                 (0x1U << PMUSGRF_SOC_CON0_WDT_RESET_EN_SHIFT)                /* 0x00001000 */
#define PMUSGRF_SOC_CON0_LPMCU_HPROT_SECURE_CTRL_SHIFT     (13U)
#define PMUSGRF_SOC_CON0_LPMCU_HPROT_SECURE_CTRL_MASK      (0x1U << PMUSGRF_SOC_CON0_LPMCU_HPROT_SECURE_CTRL_SHIFT)     /* 0x00002000 */
/* SOC_CON1 */
#define PMUSGRF_SOC_CON1_OFFSET                            (0x4U)
#define PMUSGRF_SOC_CON1_CPU_DBGEN_SHIFT                   (0U)
#define PMUSGRF_SOC_CON1_CPU_DBGEN_MASK                    (0x1U << PMUSGRF_SOC_CON1_CPU_DBGEN_SHIFT)                   /* 0x00000001 */
#define PMUSGRF_SOC_CON1_CPU_SPIDEN_SHIFT                  (1U)
#define PMUSGRF_SOC_CON1_CPU_SPIDEN_MASK                   (0x1U << PMUSGRF_SOC_CON1_CPU_SPIDEN_SHIFT)                  /* 0x00000002 */
#define PMUSGRF_SOC_CON1_CPU_NIDEN_SHIFT                   (2U)
#define PMUSGRF_SOC_CON1_CPU_NIDEN_MASK                    (0x1U << PMUSGRF_SOC_CON1_CPU_NIDEN_SHIFT)                   /* 0x00000004 */
#define PMUSGRF_SOC_CON1_CPU_SPNIDEN_SHIFT                 (3U)
#define PMUSGRF_SOC_CON1_CPU_SPNIDEN_MASK                  (0x1U << PMUSGRF_SOC_CON1_CPU_SPNIDEN_SHIFT)                 /* 0x00000008 */
#define PMUSGRF_SOC_CON1_CPU_DAPDEVICEEN_SHIFT             (4U)
#define PMUSGRF_SOC_CON1_CPU_DAPDEVICEEN_MASK              (0x1U << PMUSGRF_SOC_CON1_CPU_DAPDEVICEEN_SHIFT)             /* 0x00000010 */
#define PMUSGRF_SOC_CON1_CPU_CP15SDISABLE_SHIFT            (5U)
#define PMUSGRF_SOC_CON1_CPU_CP15SDISABLE_MASK             (0x1U << PMUSGRF_SOC_CON1_CPU_CP15SDISABLE_SHIFT)            /* 0x00000020 */
#define PMUSGRF_SOC_CON1_CPU_CFGSDISABLE_SHIFT             (6U)
#define PMUSGRF_SOC_CON1_CPU_CFGSDISABLE_MASK              (0x1U << PMUSGRF_SOC_CON1_CPU_CFGSDISABLE_SHIFT)             /* 0x00000040 */
#define PMUSGRF_SOC_CON1_REMAP_SHIFT                       (10U)
#define PMUSGRF_SOC_CON1_REMAP_MASK                        (0x3U << PMUSGRF_SOC_CON1_REMAP_SHIFT)                       /* 0x00000C00 */
#define PMUSGRF_SOC_CON1_REMAP_LOCK_SHIFT                  (15U)
#define PMUSGRF_SOC_CON1_REMAP_LOCK_MASK                   (0x1U << PMUSGRF_SOC_CON1_REMAP_LOCK_SHIFT)                  /* 0x00008000 */
/* LPMCU_BOOT_ADDR */
#define PMUSGRF_LPMCU_BOOT_ADDR_OFFSET                     (0x20U)
#define PMUSGRF_LPMCU_BOOT_ADDR_BOOT_ADDR_SHIFT            (0U)
#define PMUSGRF_LPMCU_BOOT_ADDR_BOOT_ADDR_MASK             (0xFFFFFU << PMUSGRF_LPMCU_BOOT_ADDR_BOOT_ADDR_SHIFT)        /* 0x000FFFFF */
/******************************************PVTM******************************************/
/* VERSION */
#define PVTM_VERSION_OFFSET                                (0x0U)
#define PVTM_VERSION                                       (0x203U)
#define PVTM_VERSION_VERSION_SHIFT                         (0U)
#define PVTM_VERSION_VERSION_MASK                          (0xFFFFU << PVTM_VERSION_VERSION_SHIFT)                      /* 0x0000FFFF */
/* CON0 */
#define PVTM_CON0_OFFSET                                   (0x4U)
#define PVTM_CON0_PVTM_START_SHIFT                         (0U)
#define PVTM_CON0_PVTM_START_MASK                          (0x1U << PVTM_CON0_PVTM_START_SHIFT)                         /* 0x00000001 */
#define PVTM_CON0_PVTM_OSC_EN_SHIFT                        (1U)
#define PVTM_CON0_PVTM_OSC_EN_MASK                         (0x1U << PVTM_CON0_PVTM_OSC_EN_SHIFT)                        /* 0x00000002 */
#define PVTM_CON0_PVTM_OSC_SEL_SHIFT                       (2U)
#define PVTM_CON0_PVTM_OSC_SEL_MASK                        (0x7U << PVTM_CON0_PVTM_OSC_SEL_SHIFT)                       /* 0x0000001C */
#define PVTM_CON0_PVTM_RND_SEED_EN_SHIFT                   (5U)
#define PVTM_CON0_PVTM_RND_SEED_EN_MASK                    (0x1U << PVTM_CON0_PVTM_RND_SEED_EN_SHIFT)                   /* 0x00000020 */
/* CON1 */
#define PVTM_CON1_OFFSET                                   (0x8U)
#define PVTM_CON1_PVTM_CAL_CNT_SHIFT                       (0U)
#define PVTM_CON1_PVTM_CAL_CNT_MASK                        (0xFFFFFFFFU << PVTM_CON1_PVTM_CAL_CNT_SHIFT)                /* 0xFFFFFFFF */
/* CON2 */
#define PVTM_CON2_OFFSET                                   (0xCU)
#define PVTM_CON2_PVTM_START_AUTO_SHIFT                    (0U)
#define PVTM_CON2_PVTM_START_AUTO_MASK                     (0x1U << PVTM_CON2_PVTM_START_AUTO_SHIFT)                    /* 0x00000001 */
#define PVTM_CON2_PVTM_OSC_EN_AUTO_SHIFT                   (1U)
#define PVTM_CON2_PVTM_OSC_EN_AUTO_MASK                    (0x1U << PVTM_CON2_PVTM_OSC_EN_AUTO_SHIFT)                   /* 0x00000002 */
#define PVTM_CON2_PVTM_OSC_SEL_AUTO_SHIFT                  (2U)
#define PVTM_CON2_PVTM_OSC_SEL_AUTO_MASK                   (0x7U << PVTM_CON2_PVTM_OSC_SEL_AUTO_SHIFT)                  /* 0x0000001C */
#define PVTM_CON2_PVTM_START_AUTO_MODE_SHIFT               (5U)
#define PVTM_CON2_PVTM_START_AUTO_MODE_MASK                (0x1U << PVTM_CON2_PVTM_START_AUTO_MODE_SHIFT)               /* 0x00000020 */
#define PVTM_CON2_PVTM_AVR_UPDATE_MODE_SHIFT               (6U)
#define PVTM_CON2_PVTM_AVR_UPDATE_MODE_MASK                (0x1U << PVTM_CON2_PVTM_AVR_UPDATE_MODE_SHIFT)               /* 0x00000040 */
#define PVTM_CON2_PVTM_AVR_CAL_MODE_SHIFT                  (7U)
#define PVTM_CON2_PVTM_AVR_CAL_MODE_MASK                   (0x1U << PVTM_CON2_PVTM_AVR_CAL_MODE_SHIFT)                  /* 0x00000080 */
#define PVTM_CON2_PVTM_OSC_RING_AUTOSEL_EN_SHIFT           (8U)
#define PVTM_CON2_PVTM_OSC_RING_AUTOSEL_EN_MASK            (0xFFU << PVTM_CON2_PVTM_OSC_RING_AUTOSEL_EN_SHIFT)          /* 0x0000FF00 */
/* CON3 */
#define PVTM_CON3_OFFSET                                   (0x10U)
#define PVTM_CON3_PVTM_CAL_CNT_AUTO_SHIFT                  (0U)
#define PVTM_CON3_PVTM_CAL_CNT_AUTO_MASK                   (0xFFFFFFFFU << PVTM_CON3_PVTM_CAL_CNT_AUTO_SHIFT)           /* 0xFFFFFFFF */
/* CON4 */
#define PVTM_CON4_OFFSET                                   (0x14U)
#define PVTM_CON4_PVTM_CAL_PERIOD_SHIFT                    (0U)
#define PVTM_CON4_PVTM_CAL_PERIOD_MASK                     (0xFFFFU << PVTM_CON4_PVTM_CAL_PERIOD_SHIFT)                 /* 0x0000FFFF */
#define PVTM_CON4_PVTM_AVR_PERIOD_SHIFT                    (16U)
#define PVTM_CON4_PVTM_AVR_PERIOD_MASK                     (0xFFFFU << PVTM_CON4_PVTM_AVR_PERIOD_SHIFT)                 /* 0xFFFF0000 */
/* CON5 */
#define PVTM_CON5_OFFSET                                   (0x18U)
#define PVTM_CON5_PVTM_MIN_THRESHOLD_SHIFT                 (0U)
#define PVTM_CON5_PVTM_MIN_THRESHOLD_MASK                  (0xFFFFFFFFU << PVTM_CON5_PVTM_MIN_THRESHOLD_SHIFT)          /* 0xFFFFFFFF */
/* CON6 */
#define PVTM_CON6_OFFSET                                   (0x1CU)
#define PVTM_CON6_PVTM_AVR_THRESHOLD_SHIFT                 (0U)
#define PVTM_CON6_PVTM_AVR_THRESHOLD_MASK                  (0xFFFFFFFFU << PVTM_CON6_PVTM_AVR_THRESHOLD_SHIFT)          /* 0xFFFFFFFF */
/* INT_EN */
#define PVTM_INT_EN_OFFSET                                 (0x70U)
#define PVTM_INT_EN_MIN_VALUE_INT_EN_SHIFT                 (0U)
#define PVTM_INT_EN_MIN_VALUE_INT_EN_MASK                  (0x1U << PVTM_INT_EN_MIN_VALUE_INT_EN_SHIFT)                 /* 0x00000001 */
#define PVTM_INT_EN_AVR_VALUE_INT_EN_SHIFT                 (1U)
#define PVTM_INT_EN_AVR_VALUE_INT_EN_MASK                  (0x1U << PVTM_INT_EN_AVR_VALUE_INT_EN_SHIFT)                 /* 0x00000002 */
#define PVTM_INT_EN_CAL_DONE_INT_EN_SHIFT                  (2U)
#define PVTM_INT_EN_CAL_DONE_INT_EN_MASK                   (0x1U << PVTM_INT_EN_CAL_DONE_INT_EN_SHIFT)                  /* 0x00000004 */
/* INTSTS */
#define PVTM_INTSTS_OFFSET                                 (0x74U)
#define PVTM_INTSTS_MIN_VALUE_INTSTS_SHIFT                 (0U)
#define PVTM_INTSTS_MIN_VALUE_INTSTS_MASK                  (0x1U << PVTM_INTSTS_MIN_VALUE_INTSTS_SHIFT)                 /* 0x00000001 */
#define PVTM_INTSTS_AVR_VALUE_INTSTS_SHIFT                 (1U)
#define PVTM_INTSTS_AVR_VALUE_INTSTS_MASK                  (0x1U << PVTM_INTSTS_AVR_VALUE_INTSTS_SHIFT)                 /* 0x00000002 */
#define PVTM_INTSTS_CAL_DONE_INTSTS_SHIFT                  (2U)
#define PVTM_INTSTS_CAL_DONE_INTSTS_MASK                   (0x1U << PVTM_INTSTS_CAL_DONE_INTSTS_SHIFT)                  /* 0x00000004 */
/* STATUS0 */
#define PVTM_STATUS0_OFFSET                                (0x80U)
#define PVTM_STATUS0                                       (0x0U)
#define PVTM_STATUS0_PVTM_FREQ_DONE_SHIFT                  (0U)
#define PVTM_STATUS0_PVTM_FREQ_DONE_MASK                   (0x1U << PVTM_STATUS0_PVTM_FREQ_DONE_SHIFT)                  /* 0x00000001 */
/* STATUS1 */
#define PVTM_STATUS1_OFFSET                                (0x84U)
#define PVTM_STATUS1                                       (0x0U)
#define PVTM_STATUS1_PVTM_FREQ_CNT_SHIFT                   (0U)
#define PVTM_STATUS1_PVTM_FREQ_CNT_MASK                    (0xFFFFFFFFU << PVTM_STATUS1_PVTM_FREQ_CNT_SHIFT)            /* 0xFFFFFFFF */
/* STATUS2 */
#define PVTM_STATUS2_OFFSET                                (0x88U)
#define PVTM_STATUS2                                       (0x0U)
#define PVTM_STATUS2_PVTM_RND_SEED_LOW_BITS_SHIFT          (0U)
#define PVTM_STATUS2_PVTM_RND_SEED_LOW_BITS_MASK           (0xFFFFFFFFU << PVTM_STATUS2_PVTM_RND_SEED_LOW_BITS_SHIFT)   /* 0xFFFFFFFF */
/* STATUS3 */
#define PVTM_STATUS3_OFFSET                                (0x8CU)
#define PVTM_STATUS3                                       (0x0U)
#define PVTM_STATUS3_PVTM_RND_SEED_HIGH_BITS_SHIFT         (0U)
#define PVTM_STATUS3_PVTM_RND_SEED_HIGH_BITS_MASK          (0xFFFFFFFFU << PVTM_STATUS3_PVTM_RND_SEED_HIGH_BITS_SHIFT)  /* 0xFFFFFFFF */
/* STATUS4 */
#define PVTM_STATUS4_OFFSET                                (0x90U)
#define PVTM_STATUS4                                       (0x0U)
#define PVTM_STATUS4_PVTM_MIN_VALUE_SHIFT                  (0U)
#define PVTM_STATUS4_PVTM_MIN_VALUE_MASK                   (0xFFFFFFFFU << PVTM_STATUS4_PVTM_MIN_VALUE_SHIFT)           /* 0xFFFFFFFF */
/* STATUS5 */
#define PVTM_STATUS5_OFFSET                                (0x94U)
#define PVTM_STATUS5                                       (0x0U)
#define PVTM_STATUS5_PVTM_AVR_VALUE_SHIFT                  (0U)
#define PVTM_STATUS5_PVTM_AVR_VALUE_MASK                   (0xFFFFFFFFU << PVTM_STATUS5_PVTM_AVR_VALUE_SHIFT)           /* 0xFFFFFFFF */
/* STATUS6 */
#define PVTM_STATUS6_OFFSET                                (0x98U)
#define PVTM_STATUS6                                       (0x0U)
#define PVTM_STATUS6_PVTM_MAX_VALUE_SHIFT                  (0U)
#define PVTM_STATUS6_PVTM_MAX_VALUE_MASK                   (0xFFFFFFFFU << PVTM_STATUS6_PVTM_MAX_VALUE_SHIFT)           /* 0xFFFFFFFF */
/* STATUS7 */
#define PVTM_STATUS7_OFFSET                                (0x9CU)
#define PVTM_STATUS7                                       (0x0U)
#define PVTM_STATUS7_PVTM_CAL_CNT_SHIFT                    (0U)
#define PVTM_STATUS7_PVTM_CAL_CNT_MASK                     (0xFFFFU << PVTM_STATUS7_PVTM_CAL_CNT_SHIFT)                 /* 0x0000FFFF */
#define PVTM_STATUS7_PVTM_AVR_CNT_SHIFT                    (16U)
#define PVTM_STATUS7_PVTM_AVR_CNT_MASK                     (0xFFFFU << PVTM_STATUS7_PVTM_AVR_CNT_SHIFT)                 /* 0xFFFF0000 */
/****************************************TIMER_HP****************************************/
/* REVISION */
#define TIMER_HP_REVISION_OFFSET                           (0x0U)
#define TIMER_HP_REVISION_IP_FUNCTION_SHIFT                (0U)
#define TIMER_HP_REVISION_IP_FUNCTION_MASK                 (0xFFU << TIMER_HP_REVISION_IP_FUNCTION_SHIFT)               /* 0x000000FF */
#define TIMER_HP_REVISION_CH_TYPE_SHIFT                    (8U)
#define TIMER_HP_REVISION_CH_TYPE_MASK                     (0x3U << TIMER_HP_REVISION_CH_TYPE_SHIFT)                    /* 0x00000300 */
#define TIMER_HP_REVISION_SVN_REVISION_SHIFT               (16U)
#define TIMER_HP_REVISION_SVN_REVISION_MASK                (0xFFFFU << TIMER_HP_REVISION_SVN_REVISION_SHIFT)            /* 0xFFFF0000 */
/* CTRL */
#define TIMER_HP_CTRL_OFFSET                               (0x4U)
#define TIMER_HP_CTRL_TIMER_EN_SHIFT                       (0U)
#define TIMER_HP_CTRL_TIMER_EN_MASK                        (0x1U << TIMER_HP_CTRL_TIMER_EN_SHIFT)                       /* 0x00000001 */
#define TIMER_HP_CTRL_TIMER_MODE_SHIFT                     (1U)
#define TIMER_HP_CTRL_TIMER_MODE_MASK                      (0x3U << TIMER_HP_CTRL_TIMER_MODE_SHIFT)                     /* 0x00000006 */
#define TIMER_HP_CTRL_COUNT_MODE_SHIFT                     (3U)
#define TIMER_HP_CTRL_COUNT_MODE_MASK                      (0x1U << TIMER_HP_CTRL_COUNT_MODE_SHIFT)                     /* 0x00000008 */
/* INTR_EN */
#define TIMER_HP_INTR_EN_OFFSET                            (0x8U)
#define TIMER_HP_INTR_EN_COUNT_REACH_INTR_EN_SHIFT         (0U)
#define TIMER_HP_INTR_EN_COUNT_REACH_INTR_EN_MASK          (0x1U << TIMER_HP_INTR_EN_COUNT_REACH_INTR_EN_SHIFT)         /* 0x00000001 */
#define TIMER_HP_INTR_EN_INI_ADJ_DONE_INTR_EN_SHIFT        (1U)
#define TIMER_HP_INTR_EN_INI_ADJ_DONE_INTR_EN_MASK         (0x1U << TIMER_HP_INTR_EN_INI_ADJ_DONE_INTR_EN_SHIFT)        /* 0x00000002 */
#define TIMER_HP_INTR_EN_SYNC_DONE_INTR_EN_SHIFT           (2U)
#define TIMER_HP_INTR_EN_SYNC_DONE_INTR_EN_MASK            (0x1U << TIMER_HP_INTR_EN_SYNC_DONE_INTR_EN_SHIFT)           /* 0x00000004 */
/* T24_GCD */
#define TIMER_HP_T24_GCD_OFFSET                            (0xCU)
#define TIMER_HP_T24_GCD_T24_GCD_SHIFT                     (0U)
#define TIMER_HP_T24_GCD_T24_GCD_MASK                      (0xFFFFFFFFU << TIMER_HP_T24_GCD_T24_GCD_SHIFT)              /* 0xFFFFFFFF */
/* T32_GCD */
#define TIMER_HP_T32_GCD_OFFSET                            (0x10U)
#define TIMER_HP_T32_GCD_T32_GCD_SHIFT                     (0U)
#define TIMER_HP_T32_GCD_T32_GCD_MASK                      (0xFFFFFFFFU << TIMER_HP_T32_GCD_T32_GCD_SHIFT)              /* 0xFFFFFFFF */
/* LOAD_COUNT0 */
#define TIMER_HP_LOAD_COUNT0_OFFSET                        (0x14U)
#define TIMER_HP_LOAD_COUNT0_LOAD_COUNT0_SHIFT             (0U)
#define TIMER_HP_LOAD_COUNT0_LOAD_COUNT0_MASK              (0xFFFFFFFFU << TIMER_HP_LOAD_COUNT0_LOAD_COUNT0_SHIFT)      /* 0xFFFFFFFF */
/* LOAD_COUNT1 */
#define TIMER_HP_LOAD_COUNT1_OFFSET                        (0x18U)
#define TIMER_HP_LOAD_COUNT1_LOAD_COUNT1_SHIFT             (0U)
#define TIMER_HP_LOAD_COUNT1_LOAD_COUNT1_MASK              (0xFFFFFFFFU << TIMER_HP_LOAD_COUNT1_LOAD_COUNT1_SHIFT)      /* 0xFFFFFFFF */
/* T24_DELAT_COUNT0 */
#define TIMER_HP_T24_DELAT_COUNT0_OFFSET                   (0x1CU)
#define TIMER_HP_T24_DELAT_COUNT0_T24_DELAY_TIME_COUNT0_SHIFT (0U)
#define TIMER_HP_T24_DELAT_COUNT0_T24_DELAY_TIME_COUNT0_MASK (0xFFFFFFFFU << TIMER_HP_T24_DELAT_COUNT0_T24_DELAY_TIME_COUNT0_SHIFT) /* 0xFFFFFFFF */
/* T24_DELAT_COUNT1 */
#define TIMER_HP_T24_DELAT_COUNT1_OFFSET                   (0x20U)
#define TIMER_HP_T24_DELAT_COUNT1_T24_DELAY_TIME_COUNT1_SHIFT (0U)
#define TIMER_HP_T24_DELAT_COUNT1_T24_DELAY_TIME_COUNT1_MASK (0xFFFFFFFFU << TIMER_HP_T24_DELAT_COUNT1_T24_DELAY_TIME_COUNT1_SHIFT) /* 0xFFFFFFFF */
/* CURR_32K_VALUE0 */
#define TIMER_HP_CURR_32K_VALUE0_OFFSET                    (0x24U)
#define TIMER_HP_CURR_32K_VALUE0                           (0x0U)
#define TIMER_HP_CURR_32K_VALUE0_CURRENT_32K_VALUE0_SHIFT  (0U)
#define TIMER_HP_CURR_32K_VALUE0_CURRENT_32K_VALUE0_MASK   (0xFFFFFFFFU << TIMER_HP_CURR_32K_VALUE0_CURRENT_32K_VALUE0_SHIFT) /* 0xFFFFFFFF */
/* CURR_32K_VALUE1 */
#define TIMER_HP_CURR_32K_VALUE1_OFFSET                    (0x28U)
#define TIMER_HP_CURR_32K_VALUE1                           (0x0U)
#define TIMER_HP_CURR_32K_VALUE1_CURRENT_32K_VALUE1_SHIFT  (0U)
#define TIMER_HP_CURR_32K_VALUE1_CURRENT_32K_VALUE1_MASK   (0xFFFFFFFFU << TIMER_HP_CURR_32K_VALUE1_CURRENT_32K_VALUE1_SHIFT) /* 0xFFFFFFFF */
/* CURR_TIMER_VALUE0 */
#define TIMER_HP_CURR_TIMER_VALUE0_OFFSET                  (0x2CU)
#define TIMER_HP_CURR_TIMER_VALUE0                         (0x0U)
#define TIMER_HP_CURR_TIMER_VALUE0_CURRENT_VALUE0_SHIFT    (0U)
#define TIMER_HP_CURR_TIMER_VALUE0_CURRENT_VALUE0_MASK     (0xFFFFFFFFU << TIMER_HP_CURR_TIMER_VALUE0_CURRENT_VALUE0_SHIFT) /* 0xFFFFFFFF */
/* CURR_TIMER_VALUE1 */
#define TIMER_HP_CURR_TIMER_VALUE1_OFFSET                  (0x30U)
#define TIMER_HP_CURR_TIMER_VALUE1                         (0x0U)
#define TIMER_HP_CURR_TIMER_VALUE1_CURRENT_VALUE1_SHIFT    (0U)
#define TIMER_HP_CURR_TIMER_VALUE1_CURRENT_VALUE1_MASK     (0xFFFFFFFFU << TIMER_HP_CURR_TIMER_VALUE1_CURRENT_VALUE1_SHIFT) /* 0xFFFFFFFF */
/* T24_32BEGIN0 */
#define TIMER_HP_T24_32BEGIN0_OFFSET                       (0x34U)
#define TIMER_HP_T24_32BEGIN0                              (0x0U)
#define TIMER_HP_T24_32BEGIN0_T24_32BEGIN0_SHIFT           (0U)
#define TIMER_HP_T24_32BEGIN0_T24_32BEGIN0_MASK            (0xFFFFFFFFU << TIMER_HP_T24_32BEGIN0_T24_32BEGIN0_SHIFT)    /* 0xFFFFFFFF */
/* T24_32BEGIN1 */
#define TIMER_HP_T24_32BEGIN1_OFFSET                       (0x38U)
#define TIMER_HP_T24_32BEGIN1                              (0x0U)
#define TIMER_HP_T24_32BEGIN1_T24_32BEGIN1_SHIFT           (0U)
#define TIMER_HP_T24_32BEGIN1_T24_32BEGIN1_MASK            (0xFFFFFFFFU << TIMER_HP_T24_32BEGIN1_T24_32BEGIN1_SHIFT)    /* 0xFFFFFFFF */
/* T32_24END0 */
#define TIMER_HP_T32_24END0_OFFSET                         (0x3CU)
#define TIMER_HP_T32_24END0                                (0x0U)
#define TIMER_HP_T32_24END0_T32_24END0_SHIFT               (0U)
#define TIMER_HP_T32_24END0_T32_24END0_MASK                (0xFFFFFFFFU << TIMER_HP_T32_24END0_T32_24END0_SHIFT)        /* 0xFFFFFFFF */
/* T32_24END1 */
#define TIMER_HP_T32_24END1_OFFSET                         (0x40U)
#define TIMER_HP_T32_24END1                                (0x0U)
#define TIMER_HP_T32_24END1_T32_24END1_SHIFT               (0U)
#define TIMER_HP_T32_24END1_T32_24END1_MASK                (0xFFFFFFFFU << TIMER_HP_T32_24END1_T32_24END1_SHIFT)        /* 0xFFFFFFFF */
/* BEGIN_END_VALID */
#define TIMER_HP_BEGIN_END_VALID_OFFSET                    (0x44U)
#define TIMER_HP_BEGIN_END_VALID_T24_32BEGIN_VALID_SHIFT   (0U)
#define TIMER_HP_BEGIN_END_VALID_T24_32BEGIN_VALID_MASK    (0x1U << TIMER_HP_BEGIN_END_VALID_T24_32BEGIN_VALID_SHIFT)   /* 0x00000001 */
#define TIMER_HP_BEGIN_END_VALID_T32_24END_VALID_SHIFT     (1U)
#define TIMER_HP_BEGIN_END_VALID_T32_24END_VALID_MASK      (0x1U << TIMER_HP_BEGIN_END_VALID_T32_24END_VALID_SHIFT)     /* 0x00000002 */
/* SYNC_REQ */
#define TIMER_HP_SYNC_REQ_OFFSET                           (0x48U)
#define TIMER_HP_SYNC_REQ_SYNC_REQUEST_SHIFT               (0U)
#define TIMER_HP_SYNC_REQ_SYNC_REQUEST_MASK                (0x1U << TIMER_HP_SYNC_REQ_SYNC_REQUEST_SHIFT)               /* 0x00000001 */
/* INTR_STATUS */
#define TIMER_HP_INTR_STATUS_OFFSET                        (0x4CU)
#define TIMER_HP_INTR_STATUS_COUNT_REACH_SHIFT             (0U)
#define TIMER_HP_INTR_STATUS_COUNT_REACH_MASK              (0x1U << TIMER_HP_INTR_STATUS_COUNT_REACH_SHIFT)             /* 0x00000001 */
#define TIMER_HP_INTR_STATUS_INI_ADJ_DONE_SHIFT            (1U)
#define TIMER_HP_INTR_STATUS_INI_ADJ_DONE_MASK             (0x1U << TIMER_HP_INTR_STATUS_INI_ADJ_DONE_SHIFT)            /* 0x00000002 */
#define TIMER_HP_INTR_STATUS_SYNC_DONE_SHIFT               (2U)
#define TIMER_HP_INTR_STATUS_SYNC_DONE_MASK                (0x1U << TIMER_HP_INTR_STATUS_SYNC_DONE_SHIFT)               /* 0x00000004 */
/******************************************PMU*******************************************/
/* VERSION */
#define PMU_VERSION_OFFSET                                 (0x0U)
#define PMU_VERSION                                        (0x30A0000U)
#define PMU_VERSION_VERSION_SHIFT                          (0U)
#define PMU_VERSION_VERSION_MASK                           (0xFFFFFFFFU << PMU_VERSION_VERSION_SHIFT)                   /* 0xFFFFFFFF */
/* PWR_CON */
#define PMU_PWR_CON_OFFSET                                 (0x4U)
#define PMU_PWR_CON_POWERMODE_EN_SHIFT                     (0U)
#define PMU_PWR_CON_POWERMODE_EN_MASK                      (0x1U << PMU_PWR_CON_POWERMODE_EN_SHIFT)                     /* 0x00000001 */
#define PMU_PWR_CON_BUS_BYPASS_SHIFT                       (4U)
#define PMU_PWR_CON_BUS_BYPASS_MASK                        (0x1U << PMU_PWR_CON_BUS_BYPASS_SHIFT)                       /* 0x00000010 */
#define PMU_PWR_CON_DDR_BYPASS_SHIFT                       (5U)
#define PMU_PWR_CON_DDR_BYPASS_MASK                        (0x1U << PMU_PWR_CON_DDR_BYPASS_SHIFT)                       /* 0x00000020 */
#define PMU_PWR_CON_CRU_BYPASS_SHIFT                       (7U)
#define PMU_PWR_CON_CRU_BYPASS_MASK                        (0x1U << PMU_PWR_CON_CRU_BYPASS_SHIFT)                       /* 0x00000080 */
/* GLB_POWER_STS */
#define PMU_GLB_POWER_STS_OFFSET                           (0x8U)
#define PMU_GLB_POWER_STS                                  (0x0U)
#define PMU_GLB_POWER_STS_POWER_STATE_SHIFT                (0U)
#define PMU_GLB_POWER_STS_POWER_STATE_MASK                 (0xFU << PMU_GLB_POWER_STS_POWER_STATE_SHIFT)                /* 0x0000000F */
/* INT_MASK_CON */
#define PMU_INT_MASK_CON_OFFSET                            (0xCU)
#define PMU_INT_MASK_CON_GLB_INT_MASK_SHIFT                (0U)
#define PMU_INT_MASK_CON_GLB_INT_MASK_MASK                 (0x1U << PMU_INT_MASK_CON_GLB_INT_MASK_SHIFT)                /* 0x00000001 */
/* WAKEUP_INT_CON */
#define PMU_WAKEUP_INT_CON_OFFSET                          (0x10U)
#define PMU_WAKEUP_INT_CON_WAKEUP_CPU_INT_EN_SHIFT         (0U)
#define PMU_WAKEUP_INT_CON_WAKEUP_CPU_INT_EN_MASK          (0x1U << PMU_WAKEUP_INT_CON_WAKEUP_CPU_INT_EN_SHIFT)         /* 0x00000001 */
#define PMU_WAKEUP_INT_CON_WAKEUP_GPIO_INT_EN_SHIFT        (1U)
#define PMU_WAKEUP_INT_CON_WAKEUP_GPIO_INT_EN_MASK         (0x1U << PMU_WAKEUP_INT_CON_WAKEUP_GPIO_INT_EN_SHIFT)        /* 0x00000002 */
#define PMU_WAKEUP_INT_CON_WAKEUP_SDMMC_EN_SHIFT           (2U)
#define PMU_WAKEUP_INT_CON_WAKEUP_SDMMC_EN_MASK            (0x1U << PMU_WAKEUP_INT_CON_WAKEUP_SDMMC_EN_SHIFT)           /* 0x00000004 */
#define PMU_WAKEUP_INT_CON_WAKEUP_SDIO_EN_SHIFT            (3U)
#define PMU_WAKEUP_INT_CON_WAKEUP_SDIO_EN_MASK             (0x1U << PMU_WAKEUP_INT_CON_WAKEUP_SDIO_EN_SHIFT)            /* 0x00000008 */
#define PMU_WAKEUP_INT_CON_WAKEUP_USBDEV_EN_SHIFT          (4U)
#define PMU_WAKEUP_INT_CON_WAKEUP_USBDEV_EN_MASK           (0x1U << PMU_WAKEUP_INT_CON_WAKEUP_USBDEV_EN_SHIFT)          /* 0x00000010 */
#define PMU_WAKEUP_INT_CON_WAKEUP_TIMER_EN_SHIFT           (5U)
#define PMU_WAKEUP_INT_CON_WAKEUP_TIMER_EN_MASK            (0x1U << PMU_WAKEUP_INT_CON_WAKEUP_TIMER_EN_SHIFT)           /* 0x00000020 */
#define PMU_WAKEUP_INT_CON_WAKEUP_TIMEROUT_EN_SHIFT        (6U)
#define PMU_WAKEUP_INT_CON_WAKEUP_TIMEROUT_EN_MASK         (0x1U << PMU_WAKEUP_INT_CON_WAKEUP_TIMEROUT_EN_SHIFT)        /* 0x00000040 */
#define PMU_WAKEUP_INT_CON_PMU_SFT_WAKEUP_CFG_SHIFT        (7U)
#define PMU_WAKEUP_INT_CON_PMU_SFT_WAKEUP_CFG_MASK         (0x1U << PMU_WAKEUP_INT_CON_PMU_SFT_WAKEUP_CFG_SHIFT)        /* 0x00000080 */
/* WAKEUP_INT_ST */
#define PMU_WAKEUP_INT_ST_OFFSET                           (0x14U)
#define PMU_WAKEUP_INT_ST                                  (0x0U)
#define PMU_WAKEUP_INT_ST_WAKEUP_CPU_INT_ST_SHIFT          (0U)
#define PMU_WAKEUP_INT_ST_WAKEUP_CPU_INT_ST_MASK           (0x1U << PMU_WAKEUP_INT_ST_WAKEUP_CPU_INT_ST_SHIFT)          /* 0x00000001 */
#define PMU_WAKEUP_INT_ST_WAKEUP_GPIO_INT_ST_SHIFT         (1U)
#define PMU_WAKEUP_INT_ST_WAKEUP_GPIO_INT_ST_MASK          (0x1U << PMU_WAKEUP_INT_ST_WAKEUP_GPIO_INT_ST_SHIFT)         /* 0x00000002 */
#define PMU_WAKEUP_INT_ST_WAKEUP_SDMMC_INT_ST_SHIFT        (2U)
#define PMU_WAKEUP_INT_ST_WAKEUP_SDMMC_INT_ST_MASK         (0x1U << PMU_WAKEUP_INT_ST_WAKEUP_SDMMC_INT_ST_SHIFT)        /* 0x00000004 */
#define PMU_WAKEUP_INT_ST_WAKEUP_SDIO_INT_ST_SHIFT         (3U)
#define PMU_WAKEUP_INT_ST_WAKEUP_SDIO_INT_ST_MASK          (0x1U << PMU_WAKEUP_INT_ST_WAKEUP_SDIO_INT_ST_SHIFT)         /* 0x00000008 */
#define PMU_WAKEUP_INT_ST_WAKEUP_USBDEV_INT_ST_SHIFT       (4U)
#define PMU_WAKEUP_INT_ST_WAKEUP_USBDEV_INT_ST_MASK        (0x1U << PMU_WAKEUP_INT_ST_WAKEUP_USBDEV_INT_ST_SHIFT)       /* 0x00000010 */
#define PMU_WAKEUP_INT_ST_WAKEUP_TIMER_INT_ST_SHIFT        (5U)
#define PMU_WAKEUP_INT_ST_WAKEUP_TIMER_INT_ST_MASK         (0x1U << PMU_WAKEUP_INT_ST_WAKEUP_TIMER_INT_ST_SHIFT)        /* 0x00000020 */
#define PMU_WAKEUP_INT_ST_WAKEUP_TIMEROUT_INT_ST_SHIFT     (6U)
#define PMU_WAKEUP_INT_ST_WAKEUP_TIMEROUT_INT_ST_MASK      (0x1U << PMU_WAKEUP_INT_ST_WAKEUP_TIMEROUT_INT_ST_SHIFT)     /* 0x00000040 */
/* PMIC_STABLE_CNT */
#define PMU_PMIC_STABLE_CNT_OFFSET                         (0x24U)
#define PMU_PMIC_STABLE_CNT_STABLE_CNT_SHIFT               (0U)
#define PMU_PMIC_STABLE_CNT_STABLE_CNT_MASK                (0xFFFFFU << PMU_PMIC_STABLE_CNT_STABLE_CNT_SHIFT)           /* 0x000FFFFF */
/* OSC_STABLE_CNT */
#define PMU_OSC_STABLE_CNT_OFFSET                          (0x28U)
#define PMU_OSC_STABLE_CNT_STABLE_CNT_SHIFT                (0U)
#define PMU_OSC_STABLE_CNT_STABLE_CNT_MASK                 (0xFFFFFU << PMU_OSC_STABLE_CNT_STABLE_CNT_SHIFT)            /* 0x000FFFFF */
/* WAKEUP_RSTCLR_CNT */
#define PMU_WAKEUP_RSTCLR_CNT_OFFSET                       (0x2CU)
#define PMU_WAKEUP_RSTCLR_CNT_WAKEUP_RSTCLR_CNT_SHIFT      (0U)
#define PMU_WAKEUP_RSTCLR_CNT_WAKEUP_RSTCLR_CNT_MASK       (0xFFFFFU << PMU_WAKEUP_RSTCLR_CNT_WAKEUP_RSTCLR_CNT_SHIFT)  /* 0x000FFFFF */
/* PLL_LOCK_CNT */
#define PMU_PLL_LOCK_CNT_OFFSET                            (0x30U)
#define PMU_PLL_LOCK_CNT_PLL_LOCK_CNT_SHIFT                (0U)
#define PMU_PLL_LOCK_CNT_PLL_LOCK_CNT_MASK                 (0xFFFFFU << PMU_PLL_LOCK_CNT_PLL_LOCK_CNT_SHIFT)            /* 0x000FFFFF */
/* WAKEUP_TIMEOUT_CNT */
#define PMU_WAKEUP_TIMEOUT_CNT_OFFSET                      (0x48U)
#define PMU_WAKEUP_TIMEOUT_CNT_WAKEUP_TIMEOUT_CNT_SHIFT    (0U)
#define PMU_WAKEUP_TIMEOUT_CNT_WAKEUP_TIMEOUT_CNT_MASK     (0xFFFFFFFFU << PMU_WAKEUP_TIMEOUT_CNT_WAKEUP_TIMEOUT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PWM_SWITCH_CNT */
#define PMU_PWM_SWITCH_CNT_OFFSET                          (0x4CU)
#define PMU_PWM_SWITCH_CNT_STABLE_CNT_SHIFT                (0U)
#define PMU_PWM_SWITCH_CNT_STABLE_CNT_MASK                 (0xFFFFFU << PMU_PWM_SWITCH_CNT_STABLE_CNT_SHIFT)            /* 0x000FFFFF */
/* SCU_PWR_CON */
#define PMU_SCU_PWR_CON_OFFSET                             (0x80U)
#define PMU_SCU_PWR_CON_SCU_INT_MASK_ENA_SHIFT             (0U)
#define PMU_SCU_PWR_CON_SCU_INT_MASK_ENA_MASK              (0x1U << PMU_SCU_PWR_CON_SCU_INT_MASK_ENA_SHIFT)             /* 0x00000001 */
#define PMU_SCU_PWR_CON_CPU_INT_MASK_ENA_SHIFT             (1U)
#define PMU_SCU_PWR_CON_CPU_INT_MASK_ENA_MASK              (0x1U << PMU_SCU_PWR_CON_CPU_INT_MASK_ENA_SHIFT)             /* 0x00000002 */
#define PMU_SCU_PWR_CON_STANDBYWFI_BYASS_SHIFT             (2U)
#define PMU_SCU_PWR_CON_STANDBYWFI_BYASS_MASK              (0x1U << PMU_SCU_PWR_CON_STANDBYWFI_BYASS_SHIFT)             /* 0x00000004 */
/* SCU_STS */
#define PMU_SCU_STS_OFFSET                                 (0x84U)
#define PMU_SCU_STS                                        (0x0U)
#define PMU_SCU_STS_STANDBYWFI_SHIFT                       (0U)
#define PMU_SCU_STS_STANDBYWFI_MASK                        (0x1U << PMU_SCU_STS_STANDBYWFI_SHIFT)                       /* 0x00000001 */
#define PMU_SCU_STS_STANDBYWFIL2_SHIFT                     (1U)
#define PMU_SCU_STS_STANDBYWFIL2_MASK                      (0x1U << PMU_SCU_STS_STANDBYWFIL2_SHIFT)                     /* 0x00000002 */
/* BIU_IDLE_CON */
#define PMU_BIU_IDLE_CON_OFFSET                            (0xB0U)
#define PMU_BIU_IDLE_CON_IDLE_REQ_MSCH_SHIFT               (0U)
#define PMU_BIU_IDLE_CON_IDLE_REQ_MSCH_MASK                (0x1U << PMU_BIU_IDLE_CON_IDLE_REQ_MSCH_SHIFT)               /* 0x00000001 */
#define PMU_BIU_IDLE_CON_IDLE_REQ_DDR_SHIFT                (1U)
#define PMU_BIU_IDLE_CON_IDLE_REQ_DDR_MASK                 (0x1U << PMU_BIU_IDLE_CON_IDLE_REQ_DDR_SHIFT)                /* 0x00000002 */
#define PMU_BIU_IDLE_CON_IDLE_REQ_NPU_SHIFT                (2U)
#define PMU_BIU_IDLE_CON_IDLE_REQ_NPU_MASK                 (0x1U << PMU_BIU_IDLE_CON_IDLE_REQ_NPU_SHIFT)                /* 0x00000004 */
#define PMU_BIU_IDLE_CON_IDLE_REQ_NPU_ACLK_SHIFT           (3U)
#define PMU_BIU_IDLE_CON_IDLE_REQ_NPU_ACLK_MASK            (0x1U << PMU_BIU_IDLE_CON_IDLE_REQ_NPU_ACLK_SHIFT)           /* 0x00000008 */
#define PMU_BIU_IDLE_CON_IDLE_REQ_VI_SHIFT                 (4U)
#define PMU_BIU_IDLE_CON_IDLE_REQ_VI_MASK                  (0x1U << PMU_BIU_IDLE_CON_IDLE_REQ_VI_SHIFT)                 /* 0x00000010 */
#define PMU_BIU_IDLE_CON_IDLE_REQ_VO_SHIFT                 (5U)
#define PMU_BIU_IDLE_CON_IDLE_REQ_VO_MASK                  (0x1U << PMU_BIU_IDLE_CON_IDLE_REQ_VO_SHIFT)                 /* 0x00000020 */
#define PMU_BIU_IDLE_CON_IDLE_REQ_PERI_SHIFT               (6U)
#define PMU_BIU_IDLE_CON_IDLE_REQ_PERI_MASK                (0x1U << PMU_BIU_IDLE_CON_IDLE_REQ_PERI_SHIFT)               /* 0x00000040 */
#define PMU_BIU_IDLE_CON_IDLE_REQ_CRU_SHIFT                (7U)
#define PMU_BIU_IDLE_CON_IDLE_REQ_CRU_MASK                 (0x1U << PMU_BIU_IDLE_CON_IDLE_REQ_CRU_SHIFT)                /* 0x00000080 */
#define PMU_BIU_IDLE_CON_IDLE_REQ_CPU_SHIFT                (8U)
#define PMU_BIU_IDLE_CON_IDLE_REQ_CPU_MASK                 (0x1U << PMU_BIU_IDLE_CON_IDLE_REQ_CPU_SHIFT)                /* 0x00000100 */
#define PMU_BIU_IDLE_CON_IDLE_REQ_VENC_COM_SHIFT           (9U)
#define PMU_BIU_IDLE_CON_IDLE_REQ_VENC_COM_MASK            (0x1U << PMU_BIU_IDLE_CON_IDLE_REQ_VENC_COM_SHIFT)           /* 0x00000200 */
#define PMU_BIU_IDLE_CON_IDLE_REQ_VEPU_SHIFT               (10U)
#define PMU_BIU_IDLE_CON_IDLE_REQ_VEPU_MASK                (0x1U << PMU_BIU_IDLE_CON_IDLE_REQ_VEPU_SHIFT)               /* 0x00000400 */
/* BIU_IDLE_SFTCON */
#define PMU_BIU_IDLE_SFTCON_OFFSET                         (0xC0U)
#define PMU_BIU_IDLE_SFTCON_IDLE_REQ_MSCH_SHIFT            (0U)
#define PMU_BIU_IDLE_SFTCON_IDLE_REQ_MSCH_MASK             (0x1U << PMU_BIU_IDLE_SFTCON_IDLE_REQ_MSCH_SHIFT)            /* 0x00000001 */
#define PMU_BIU_IDLE_SFTCON_IDLE_REQ_DDR_SHIFT             (1U)
#define PMU_BIU_IDLE_SFTCON_IDLE_REQ_DDR_MASK              (0x1U << PMU_BIU_IDLE_SFTCON_IDLE_REQ_DDR_SHIFT)             /* 0x00000002 */
#define PMU_BIU_IDLE_SFTCON_IDLE_REQ_NPU_SHIFT             (2U)
#define PMU_BIU_IDLE_SFTCON_IDLE_REQ_NPU_MASK              (0x1U << PMU_BIU_IDLE_SFTCON_IDLE_REQ_NPU_SHIFT)             /* 0x00000004 */
#define PMU_BIU_IDLE_SFTCON_IDLE_REQ_NPU_ACLK_SHIFT        (3U)
#define PMU_BIU_IDLE_SFTCON_IDLE_REQ_NPU_ACLK_MASK         (0x1U << PMU_BIU_IDLE_SFTCON_IDLE_REQ_NPU_ACLK_SHIFT)        /* 0x00000008 */
#define PMU_BIU_IDLE_SFTCON_IDLE_REQ_VI_SHIFT              (4U)
#define PMU_BIU_IDLE_SFTCON_IDLE_REQ_VI_MASK               (0x1U << PMU_BIU_IDLE_SFTCON_IDLE_REQ_VI_SHIFT)              /* 0x00000010 */
#define PMU_BIU_IDLE_SFTCON_IDLE_REQ_VO_SHIFT              (5U)
#define PMU_BIU_IDLE_SFTCON_IDLE_REQ_VO_MASK               (0x1U << PMU_BIU_IDLE_SFTCON_IDLE_REQ_VO_SHIFT)              /* 0x00000020 */
#define PMU_BIU_IDLE_SFTCON_IDLE_REQ_PERI_SHIFT            (6U)
#define PMU_BIU_IDLE_SFTCON_IDLE_REQ_PERI_MASK             (0x1U << PMU_BIU_IDLE_SFTCON_IDLE_REQ_PERI_SHIFT)            /* 0x00000040 */
#define PMU_BIU_IDLE_SFTCON_IDLE_REQ_CRU_SHIFT             (7U)
#define PMU_BIU_IDLE_SFTCON_IDLE_REQ_CRU_MASK              (0x1U << PMU_BIU_IDLE_SFTCON_IDLE_REQ_CRU_SHIFT)             /* 0x00000080 */
#define PMU_BIU_IDLE_SFTCON_IDLE_REQ_CPU_SHIFT             (8U)
#define PMU_BIU_IDLE_SFTCON_IDLE_REQ_CPU_MASK              (0x1U << PMU_BIU_IDLE_SFTCON_IDLE_REQ_CPU_SHIFT)             /* 0x00000100 */
#define PMU_BIU_IDLE_SFTCON_IDLE_REQ_VENC_COM_SHIFT        (9U)
#define PMU_BIU_IDLE_SFTCON_IDLE_REQ_VENC_COM_MASK         (0x1U << PMU_BIU_IDLE_SFTCON_IDLE_REQ_VENC_COM_SHIFT)        /* 0x00000200 */
#define PMU_BIU_IDLE_SFTCON_IDLE_REQ_VEPU_SHIFT            (10U)
#define PMU_BIU_IDLE_SFTCON_IDLE_REQ_VEPU_MASK             (0x1U << PMU_BIU_IDLE_SFTCON_IDLE_REQ_VEPU_SHIFT)            /* 0x00000400 */
/* BIU_IDLE_ACK */
#define PMU_BIU_IDLE_ACK_OFFSET                            (0xD0U)
#define PMU_BIU_IDLE_ACK                                   (0x0U)
#define PMU_BIU_IDLE_ACK_IDLE_ACK_MSCH_SHIFT               (0U)
#define PMU_BIU_IDLE_ACK_IDLE_ACK_MSCH_MASK                (0x1U << PMU_BIU_IDLE_ACK_IDLE_ACK_MSCH_SHIFT)               /* 0x00000001 */
#define PMU_BIU_IDLE_ACK_IDLE_ACK_DDR_SHIFT                (1U)
#define PMU_BIU_IDLE_ACK_IDLE_ACK_DDR_MASK                 (0x1U << PMU_BIU_IDLE_ACK_IDLE_ACK_DDR_SHIFT)                /* 0x00000002 */
#define PMU_BIU_IDLE_ACK_IDLE_ACK_NPU_SHIFT                (2U)
#define PMU_BIU_IDLE_ACK_IDLE_ACK_NPU_MASK                 (0x1U << PMU_BIU_IDLE_ACK_IDLE_ACK_NPU_SHIFT)                /* 0x00000004 */
#define PMU_BIU_IDLE_ACK_IDLE_ACK_NPU_ACLK_SHIFT           (3U)
#define PMU_BIU_IDLE_ACK_IDLE_ACK_NPU_ACLK_MASK            (0x1U << PMU_BIU_IDLE_ACK_IDLE_ACK_NPU_ACLK_SHIFT)           /* 0x00000008 */
#define PMU_BIU_IDLE_ACK_IDLE_ACK_VI_SHIFT                 (4U)
#define PMU_BIU_IDLE_ACK_IDLE_ACK_VI_MASK                  (0x1U << PMU_BIU_IDLE_ACK_IDLE_ACK_VI_SHIFT)                 /* 0x00000010 */
#define PMU_BIU_IDLE_ACK_IDLE_ACK_VO_SHIFT                 (5U)
#define PMU_BIU_IDLE_ACK_IDLE_ACK_VO_MASK                  (0x1U << PMU_BIU_IDLE_ACK_IDLE_ACK_VO_SHIFT)                 /* 0x00000020 */
#define PMU_BIU_IDLE_ACK_IDLE_ACK_PERI_SHIFT               (6U)
#define PMU_BIU_IDLE_ACK_IDLE_ACK_PERI_MASK                (0x1U << PMU_BIU_IDLE_ACK_IDLE_ACK_PERI_SHIFT)               /* 0x00000040 */
#define PMU_BIU_IDLE_ACK_IDLE_ACK_CRU_SHIFT                (7U)
#define PMU_BIU_IDLE_ACK_IDLE_ACK_CRU_MASK                 (0x1U << PMU_BIU_IDLE_ACK_IDLE_ACK_CRU_SHIFT)                /* 0x00000080 */
#define PMU_BIU_IDLE_ACK_IDLE_ACK_CPU_SHIFT                (8U)
#define PMU_BIU_IDLE_ACK_IDLE_ACK_CPU_MASK                 (0x1U << PMU_BIU_IDLE_ACK_IDLE_ACK_CPU_SHIFT)                /* 0x00000100 */
#define PMU_BIU_IDLE_ACK_IDLE_ACK_VENC_COM_SHIFT           (9U)
#define PMU_BIU_IDLE_ACK_IDLE_ACK_VENC_COM_MASK            (0x1U << PMU_BIU_IDLE_ACK_IDLE_ACK_VENC_COM_SHIFT)           /* 0x00000200 */
#define PMU_BIU_IDLE_ACK_IDLE_ACK_VEPU_SHIFT               (10U)
#define PMU_BIU_IDLE_ACK_IDLE_ACK_VEPU_MASK                (0x1U << PMU_BIU_IDLE_ACK_IDLE_ACK_VEPU_SHIFT)               /* 0x00000400 */
/* BIU_IDLE_ST */
#define PMU_BIU_IDLE_ST_OFFSET                             (0xD8U)
#define PMU_BIU_IDLE_ST                                    (0x0U)
#define PMU_BIU_IDLE_ST_IDLE_MSCH_SHIFT                    (0U)
#define PMU_BIU_IDLE_ST_IDLE_MSCH_MASK                     (0x1U << PMU_BIU_IDLE_ST_IDLE_MSCH_SHIFT)                    /* 0x00000001 */
#define PMU_BIU_IDLE_ST_IDLE_DDR_SHIFT                     (1U)
#define PMU_BIU_IDLE_ST_IDLE_DDR_MASK                      (0x1U << PMU_BIU_IDLE_ST_IDLE_DDR_SHIFT)                     /* 0x00000002 */
#define PMU_BIU_IDLE_ST_IDLE_NPU_SHIFT                     (2U)
#define PMU_BIU_IDLE_ST_IDLE_NPU_MASK                      (0x1U << PMU_BIU_IDLE_ST_IDLE_NPU_SHIFT)                     /* 0x00000004 */
#define PMU_BIU_IDLE_ST_IDLE_NPU_ACLK_SHIFT                (3U)
#define PMU_BIU_IDLE_ST_IDLE_NPU_ACLK_MASK                 (0x1U << PMU_BIU_IDLE_ST_IDLE_NPU_ACLK_SHIFT)                /* 0x00000008 */
#define PMU_BIU_IDLE_ST_IDLE_VI_SHIFT                      (4U)
#define PMU_BIU_IDLE_ST_IDLE_VI_MASK                       (0x1U << PMU_BIU_IDLE_ST_IDLE_VI_SHIFT)                      /* 0x00000010 */
#define PMU_BIU_IDLE_ST_IDLE_VO_SHIFT                      (5U)
#define PMU_BIU_IDLE_ST_IDLE_VO_MASK                       (0x1U << PMU_BIU_IDLE_ST_IDLE_VO_SHIFT)                      /* 0x00000020 */
#define PMU_BIU_IDLE_ST_IDLE_PERI_SHIFT                    (6U)
#define PMU_BIU_IDLE_ST_IDLE_PERI_MASK                     (0x1U << PMU_BIU_IDLE_ST_IDLE_PERI_SHIFT)                    /* 0x00000040 */
#define PMU_BIU_IDLE_ST_IDLE_CRU_SHIFT                     (7U)
#define PMU_BIU_IDLE_ST_IDLE_CRU_MASK                      (0x1U << PMU_BIU_IDLE_ST_IDLE_CRU_SHIFT)                     /* 0x00000080 */
#define PMU_BIU_IDLE_ST_IDLE_CPU_SHIFT                     (8U)
#define PMU_BIU_IDLE_ST_IDLE_CPU_MASK                      (0x1U << PMU_BIU_IDLE_ST_IDLE_CPU_SHIFT)                     /* 0x00000100 */
#define PMU_BIU_IDLE_ST_IDLE_VENC_COM_SHIFT                (9U)
#define PMU_BIU_IDLE_ST_IDLE_VENC_COM_MASK                 (0x1U << PMU_BIU_IDLE_ST_IDLE_VENC_COM_SHIFT)                /* 0x00000200 */
#define PMU_BIU_IDLE_ST_IDLE_VEPU_SHIFT                    (10U)
#define PMU_BIU_IDLE_ST_IDLE_VEPU_MASK                     (0x1U << PMU_BIU_IDLE_ST_IDLE_VEPU_SHIFT)                    /* 0x00000400 */
/* BIU_AUTO_CON */
#define PMU_BIU_AUTO_CON_OFFSET                            (0xE0U)
#define PMU_BIU_AUTO_CON_AUTO_IDLE_MSCH_SHIFT              (0U)
#define PMU_BIU_AUTO_CON_AUTO_IDLE_MSCH_MASK               (0x1U << PMU_BIU_AUTO_CON_AUTO_IDLE_MSCH_SHIFT)              /* 0x00000001 */
#define PMU_BIU_AUTO_CON_AUTO_IDLE_DDR_SHIFT               (1U)
#define PMU_BIU_AUTO_CON_AUTO_IDLE_DDR_MASK                (0x1U << PMU_BIU_AUTO_CON_AUTO_IDLE_DDR_SHIFT)               /* 0x00000002 */
#define PMU_BIU_AUTO_CON_AUTO_IDLE_NPU_SHIFT               (2U)
#define PMU_BIU_AUTO_CON_AUTO_IDLE_NPU_MASK                (0x1U << PMU_BIU_AUTO_CON_AUTO_IDLE_NPU_SHIFT)               /* 0x00000004 */
#define PMU_BIU_AUTO_CON_AUTO_IDLE_NPU_ACLK_SHIFT          (3U)
#define PMU_BIU_AUTO_CON_AUTO_IDLE_NPU_ACLK_MASK           (0x1U << PMU_BIU_AUTO_CON_AUTO_IDLE_NPU_ACLK_SHIFT)          /* 0x00000008 */
#define PMU_BIU_AUTO_CON_AUTO_IDLE_VI_SHIFT                (4U)
#define PMU_BIU_AUTO_CON_AUTO_IDLE_VI_MASK                 (0x1U << PMU_BIU_AUTO_CON_AUTO_IDLE_VI_SHIFT)                /* 0x00000010 */
#define PMU_BIU_AUTO_CON_AUTO_IDLE_VO_SHIFT                (5U)
#define PMU_BIU_AUTO_CON_AUTO_IDLE_VO_MASK                 (0x1U << PMU_BIU_AUTO_CON_AUTO_IDLE_VO_SHIFT)                /* 0x00000020 */
#define PMU_BIU_AUTO_CON_AUTO_IDLE_PERI_SHIFT              (6U)
#define PMU_BIU_AUTO_CON_AUTO_IDLE_PERI_MASK               (0x1U << PMU_BIU_AUTO_CON_AUTO_IDLE_PERI_SHIFT)              /* 0x00000040 */
#define PMU_BIU_AUTO_CON_AUTO_IDLE_CRU_SHIFT               (7U)
#define PMU_BIU_AUTO_CON_AUTO_IDLE_CRU_MASK                (0x1U << PMU_BIU_AUTO_CON_AUTO_IDLE_CRU_SHIFT)               /* 0x00000080 */
#define PMU_BIU_AUTO_CON_AUTO_IDLE_CPU_SHIFT               (8U)
#define PMU_BIU_AUTO_CON_AUTO_IDLE_CPU_MASK                (0x1U << PMU_BIU_AUTO_CON_AUTO_IDLE_CPU_SHIFT)               /* 0x00000100 */
#define PMU_BIU_AUTO_CON_AUTO_IDLE_VENC_COM_SHIFT          (9U)
#define PMU_BIU_AUTO_CON_AUTO_IDLE_VENC_COM_MASK           (0x1U << PMU_BIU_AUTO_CON_AUTO_IDLE_VENC_COM_SHIFT)          /* 0x00000200 */
#define PMU_BIU_AUTO_CON_AUTO_IDLE_VEPU_SHIFT              (10U)
#define PMU_BIU_AUTO_CON_AUTO_IDLE_VEPU_MASK               (0x1U << PMU_BIU_AUTO_CON_AUTO_IDLE_VEPU_SHIFT)              /* 0x00000400 */
/* DDR_PWR_CON */
#define PMU_DDR_PWR_CON_OFFSET                             (0xF0U)
#define PMU_DDR_PWR_CON_DDR_SREF_C_ENA_SHIFT               (0U)
#define PMU_DDR_PWR_CON_DDR_SREF_C_ENA_MASK                (0x1U << PMU_DDR_PWR_CON_DDR_SREF_C_ENA_SHIFT)               /* 0x00000001 */
#define PMU_DDR_PWR_CON_DDRIO_RET_ENA_SHIFT                (1U)
#define PMU_DDR_PWR_CON_DDRIO_RET_ENA_MASK                 (0x1U << PMU_DDR_PWR_CON_DDRIO_RET_ENA_SHIFT)                /* 0x00000002 */
#define PMU_DDR_PWR_CON_DDRIO_RET_EXIT_ENA_SHIFT           (2U)
#define PMU_DDR_PWR_CON_DDRIO_RET_EXIT_ENA_MASK            (0x1U << PMU_DDR_PWR_CON_DDRIO_RET_EXIT_ENA_SHIFT)           /* 0x00000004 */
#define PMU_DDR_PWR_CON_DDRCTL_C_AUTO_GATING_ENA_SHIFT     (3U)
#define PMU_DDR_PWR_CON_DDRCTL_C_AUTO_GATING_ENA_MASK      (0x1U << PMU_DDR_PWR_CON_DDRCTL_C_AUTO_GATING_ENA_SHIFT)     /* 0x00000008 */
#define PMU_DDR_PWR_CON_MSCH_AUTO_GATING_ENA_SHIFT         (5U)
#define PMU_DDR_PWR_CON_MSCH_AUTO_GATING_ENA_MASK          (0x1U << PMU_DDR_PWR_CON_MSCH_AUTO_GATING_ENA_SHIFT)         /* 0x00000020 */
#define PMU_DDR_PWR_CON_DDR_SREF_A_ENA_SHIFT               (6U)
#define PMU_DDR_PWR_CON_DDR_SREF_A_ENA_MASK                (0x1U << PMU_DDR_PWR_CON_DDR_SREF_A_ENA_SHIFT)               /* 0x00000040 */
#define PMU_DDR_PWR_CON_DDRCTL_A_AUTO_GATING_ENA_SHIFT     (7U)
#define PMU_DDR_PWR_CON_DDRCTL_A_AUTO_GATING_ENA_MASK      (0x1U << PMU_DDR_PWR_CON_DDRCTL_A_AUTO_GATING_ENA_SHIFT)     /* 0x00000080 */
/* DDR_PWR_SFTCON */
#define PMU_DDR_PWR_SFTCON_OFFSET                          (0xF4U)
#define PMU_DDR_PWR_SFTCON_SW_DDR_SREF_C_REQ_SHIFT         (0U)
#define PMU_DDR_PWR_SFTCON_SW_DDR_SREF_C_REQ_MASK          (0x1U << PMU_DDR_PWR_SFTCON_SW_DDR_SREF_C_REQ_SHIFT)         /* 0x00000001 */
#define PMU_DDR_PWR_SFTCON_SW_DDRIO_RET_REQ_SHIFT          (1U)
#define PMU_DDR_PWR_SFTCON_SW_DDRIO_RET_REQ_MASK           (0x1U << PMU_DDR_PWR_SFTCON_SW_DDRIO_RET_REQ_SHIFT)          /* 0x00000002 */
#define PMU_DDR_PWR_SFTCON_SW_DDRIO_RET_EXIT_SHIFT         (2U)
#define PMU_DDR_PWR_SFTCON_SW_DDRIO_RET_EXIT_MASK          (0x1U << PMU_DDR_PWR_SFTCON_SW_DDRIO_RET_EXIT_SHIFT)         /* 0x00000004 */
#define PMU_DDR_PWR_SFTCON_DDRCTL_ACTIVE_WAIT_SHIFT        (3U)
#define PMU_DDR_PWR_SFTCON_DDRCTL_ACTIVE_WAIT_MASK         (0x1U << PMU_DDR_PWR_SFTCON_DDRCTL_ACTIVE_WAIT_SHIFT)        /* 0x00000008 */
#define PMU_DDR_PWR_SFTCON_SW_DDR_SREF_A_REQ_SHIFT         (4U)
#define PMU_DDR_PWR_SFTCON_SW_DDR_SREF_A_REQ_MASK          (0x1U << PMU_DDR_PWR_SFTCON_SW_DDR_SREF_A_REQ_SHIFT)         /* 0x00000010 */
/* DDR_POWER_STS */
#define PMU_DDR_POWER_STS_OFFSET                           (0xF8U)
#define PMU_DDR_POWER_STS                                  (0x0U)
#define PMU_DDR_POWER_STS_DDR_POWER_STATE_SHIFT            (0U)
#define PMU_DDR_POWER_STS_DDR_POWER_STATE_MASK             (0x7U << PMU_DDR_POWER_STS_DDR_POWER_STATE_SHIFT)            /* 0x00000007 */
/* DDR_STS */
#define PMU_DDR_STS_OFFSET                                 (0xFCU)
#define PMU_DDR_STS                                        (0x0U)
#define PMU_DDR_STS_DDRCTL_C_SYSACK_SHIFT                  (0U)
#define PMU_DDR_STS_DDRCTL_C_SYSACK_MASK                   (0x1U << PMU_DDR_STS_DDRCTL_C_SYSACK_SHIFT)                  /* 0x00000001 */
#define PMU_DDR_STS_DDRCTL_C_ACTIVE_SHIFT                  (1U)
#define PMU_DDR_STS_DDRCTL_C_ACTIVE_MASK                   (0x1U << PMU_DDR_STS_DDRCTL_C_ACTIVE_SHIFT)                  /* 0x00000002 */
#define PMU_DDR_STS_DDRIO_RET_SHIFT                        (2U)
#define PMU_DDR_STS_DDRIO_RET_MASK                         (0x1U << PMU_DDR_STS_DDRIO_RET_SHIFT)                        /* 0x00000004 */
#define PMU_DDR_STS_DDRCTL_A_SYSACK_SHIFT                  (3U)
#define PMU_DDR_STS_DDRCTL_A_SYSACK_MASK                   (0x1U << PMU_DDR_STS_DDRCTL_A_SYSACK_SHIFT)                  /* 0x00000008 */
#define PMU_DDR_STS_DDRCTL_A_ACTIVE_SHIFT                  (4U)
#define PMU_DDR_STS_DDRCTL_A_ACTIVE_MASK                   (0x1U << PMU_DDR_STS_DDRCTL_A_ACTIVE_SHIFT)                  /* 0x00000010 */
/* CRU_PWR_CON0 */
#define PMU_CRU_PWR_CON0_OFFSET                            (0x120U)
#define PMU_CRU_PWR_CON0_ALIVE_32K_ENA_SHIFT               (0U)
#define PMU_CRU_PWR_CON0_ALIVE_32K_ENA_MASK                (0x1U << PMU_CRU_PWR_CON0_ALIVE_32K_ENA_SHIFT)               /* 0x00000001 */
#define PMU_CRU_PWR_CON0_OSC_DIS_ENA_SHIFT                 (1U)
#define PMU_CRU_PWR_CON0_OSC_DIS_ENA_MASK                  (0x1U << PMU_CRU_PWR_CON0_OSC_DIS_ENA_SHIFT)                 /* 0x00000002 */
#define PMU_CRU_PWR_CON0_WAKEUP_RST_ENA_SHIFT              (2U)
#define PMU_CRU_PWR_CON0_WAKEUP_RST_ENA_MASK               (0x1U << PMU_CRU_PWR_CON0_WAKEUP_RST_ENA_SHIFT)              /* 0x00000004 */
#define PMU_CRU_PWR_CON0_INPUT_CLAMP_ENA_SHIFT             (3U)
#define PMU_CRU_PWR_CON0_INPUT_CLAMP_ENA_MASK              (0x1U << PMU_CRU_PWR_CON0_INPUT_CLAMP_ENA_SHIFT)             /* 0x00000008 */
#define PMU_CRU_PWR_CON0_ALIVE_OSC_ENA_SHIFT               (4U)
#define PMU_CRU_PWR_CON0_ALIVE_OSC_ENA_MASK                (0x1U << PMU_CRU_PWR_CON0_ALIVE_OSC_ENA_SHIFT)               /* 0x00000010 */
#define PMU_CRU_PWR_CON0_POWER_OFF_ENA_SHIFT               (5U)
#define PMU_CRU_PWR_CON0_POWER_OFF_ENA_MASK                (0x1U << PMU_CRU_PWR_CON0_POWER_OFF_ENA_SHIFT)               /* 0x00000020 */
#define PMU_CRU_PWR_CON0_PWM_SWITCH_ENA_SHIFT              (6U)
#define PMU_CRU_PWR_CON0_PWM_SWITCH_ENA_MASK               (0x1U << PMU_CRU_PWR_CON0_PWM_SWITCH_ENA_SHIFT)              /* 0x00000040 */
#define PMU_CRU_PWR_CON0_PWM_GPIO_IOE_ENA_SHIFT            (7U)
#define PMU_CRU_PWR_CON0_PWM_GPIO_IOE_ENA_MASK             (0x1U << PMU_CRU_PWR_CON0_PWM_GPIO_IOE_ENA_SHIFT)            /* 0x00000080 */
#define PMU_CRU_PWR_CON0_PWM_SWITCH_IOUT_SHIFT             (8U)
#define PMU_CRU_PWR_CON0_PWM_SWITCH_IOUT_MASK              (0x1U << PMU_CRU_PWR_CON0_PWM_SWITCH_IOUT_SHIFT)             /* 0x00000100 */
/* CRU_PWR_CON1 */
#define PMU_CRU_PWR_CON1_OFFSET                            (0x140U)
#define PMU_CRU_PWR_CON1_VI_CLK_SRC_GATE_ENA_SHIFT         (0U)
#define PMU_CRU_PWR_CON1_VI_CLK_SRC_GATE_ENA_MASK          (0x1U << PMU_CRU_PWR_CON1_VI_CLK_SRC_GATE_ENA_SHIFT)         /* 0x00000001 */
#define PMU_CRU_PWR_CON1_VO_CLK_SRC_GATE_ENA_SHIFT         (1U)
#define PMU_CRU_PWR_CON1_VO_CLK_SRC_GATE_ENA_MASK          (0x1U << PMU_CRU_PWR_CON1_VO_CLK_SRC_GATE_ENA_SHIFT)         /* 0x00000002 */
#define PMU_CRU_PWR_CON1_VENC_CLK_SRC_GATE_ENA_SHIFT       (2U)
#define PMU_CRU_PWR_CON1_VENC_CLK_SRC_GATE_ENA_MASK        (0x1U << PMU_CRU_PWR_CON1_VENC_CLK_SRC_GATE_ENA_SHIFT)       /* 0x00000004 */
#define PMU_CRU_PWR_CON1_NPU_CLK_SRC_GATE_ENA_SHIFT        (3U)
#define PMU_CRU_PWR_CON1_NPU_CLK_SRC_GATE_ENA_MASK         (0x1U << PMU_CRU_PWR_CON1_NPU_CLK_SRC_GATE_ENA_SHIFT)        /* 0x00000008 */
#define PMU_CRU_PWR_CON1_DDR_CLK_SRC_GATE_ENA_SHIFT        (4U)
#define PMU_CRU_PWR_CON1_DDR_CLK_SRC_GATE_ENA_MASK         (0x1U << PMU_CRU_PWR_CON1_DDR_CLK_SRC_GATE_ENA_SHIFT)        /* 0x00000010 */
#define PMU_CRU_PWR_CON1_PERI_CLK_SRC_GATE_ENA_SHIFT       (5U)
#define PMU_CRU_PWR_CON1_PERI_CLK_SRC_GATE_ENA_MASK        (0x1U << PMU_CRU_PWR_CON1_PERI_CLK_SRC_GATE_ENA_SHIFT)       /* 0x00000020 */
#define PMU_CRU_PWR_CON1_CORE_CLK_SRC_GATE_ENA_SHIFT       (6U)
#define PMU_CRU_PWR_CON1_CORE_CLK_SRC_GATE_ENA_MASK        (0x1U << PMU_CRU_PWR_CON1_CORE_CLK_SRC_GATE_ENA_SHIFT)       /* 0x00000040 */
#define PMU_CRU_PWR_CON1_CRU_CLK_SRC_GATE_ENA_SHIFT        (7U)
#define PMU_CRU_PWR_CON1_CRU_CLK_SRC_GATE_ENA_MASK         (0x1U << PMU_CRU_PWR_CON1_CRU_CLK_SRC_GATE_ENA_SHIFT)        /* 0x00000080 */
/* CRU_PWR_SFTCON */
#define PMU_CRU_PWR_SFTCON_OFFSET                          (0x124U)
#define PMU_CRU_PWR_SFTCON_ALIVE_32K_ENA_SHIFT             (0U)
#define PMU_CRU_PWR_SFTCON_ALIVE_32K_ENA_MASK              (0x1U << PMU_CRU_PWR_SFTCON_ALIVE_32K_ENA_SHIFT)             /* 0x00000001 */
#define PMU_CRU_PWR_SFTCON_OSC_DIS_ENA_SHIFT               (1U)
#define PMU_CRU_PWR_SFTCON_OSC_DIS_ENA_MASK                (0x1U << PMU_CRU_PWR_SFTCON_OSC_DIS_ENA_SHIFT)               /* 0x00000002 */
#define PMU_CRU_PWR_SFTCON_WAKEUP_RST_ENA_SHIFT            (2U)
#define PMU_CRU_PWR_SFTCON_WAKEUP_RST_ENA_MASK             (0x1U << PMU_CRU_PWR_SFTCON_WAKEUP_RST_ENA_SHIFT)            /* 0x00000004 */
#define PMU_CRU_PWR_SFTCON_INPUT_CLAMP_ENA_SHIFT           (3U)
#define PMU_CRU_PWR_SFTCON_INPUT_CLAMP_ENA_MASK            (0x1U << PMU_CRU_PWR_SFTCON_INPUT_CLAMP_ENA_SHIFT)           /* 0x00000008 */
#define PMU_CRU_PWR_SFTCON_ALIVE_OSC_ENA_SHIFT             (4U)
#define PMU_CRU_PWR_SFTCON_ALIVE_OSC_ENA_MASK              (0x1U << PMU_CRU_PWR_SFTCON_ALIVE_OSC_ENA_SHIFT)             /* 0x00000010 */
#define PMU_CRU_PWR_SFTCON_POWER_OFF_ENA_SHIFT             (5U)
#define PMU_CRU_PWR_SFTCON_POWER_OFF_ENA_MASK              (0x1U << PMU_CRU_PWR_SFTCON_POWER_OFF_ENA_SHIFT)             /* 0x00000020 */
/* CRU_POWER_STS */
#define PMU_CRU_POWER_STS_OFFSET                           (0x128U)
#define PMU_CRU_POWER_STS                                  (0x0U)
#define PMU_CRU_POWER_STS_CRU_POWER_STATE_SHIFT            (0U)
#define PMU_CRU_POWER_STS_CRU_POWER_STATE_MASK             (0xFU << PMU_CRU_POWER_STS_CRU_POWER_STATE_SHIFT)            /* 0x0000000F */
/* PLLPD_CON */
#define PMU_PLLPD_CON_OFFSET                               (0x130U)
#define PMU_PLLPD_CON_APLL_PD_ENA_SHIFT                    (0U)
#define PMU_PLLPD_CON_APLL_PD_ENA_MASK                     (0x1U << PMU_PLLPD_CON_APLL_PD_ENA_SHIFT)                    /* 0x00000001 */
#define PMU_PLLPD_CON_DPLL_PD_ENA_SHIFT                    (1U)
#define PMU_PLLPD_CON_DPLL_PD_ENA_MASK                     (0x1U << PMU_PLLPD_CON_DPLL_PD_ENA_SHIFT)                    /* 0x00000002 */
#define PMU_PLLPD_CON_CPLL_PD_ENA_SHIFT                    (2U)
#define PMU_PLLPD_CON_CPLL_PD_ENA_MASK                     (0x1U << PMU_PLLPD_CON_CPLL_PD_ENA_SHIFT)                    /* 0x00000004 */
#define PMU_PLLPD_CON_GPLL_PD_ENA_SHIFT                    (3U)
#define PMU_PLLPD_CON_GPLL_PD_ENA_MASK                     (0x1U << PMU_PLLPD_CON_GPLL_PD_ENA_SHIFT)                    /* 0x00000008 */
/* PLLPD_SFTCON */
#define PMU_PLLPD_SFTCON_OFFSET                            (0x134U)
#define PMU_PLLPD_SFTCON_APLL_PD_ENA_SHIFT                 (0U)
#define PMU_PLLPD_SFTCON_APLL_PD_ENA_MASK                  (0x1U << PMU_PLLPD_SFTCON_APLL_PD_ENA_SHIFT)                 /* 0x00000001 */
#define PMU_PLLPD_SFTCON_DPLL_PD_ENA_SHIFT                 (1U)
#define PMU_PLLPD_SFTCON_DPLL_PD_ENA_MASK                  (0x1U << PMU_PLLPD_SFTCON_DPLL_PD_ENA_SHIFT)                 /* 0x00000002 */
#define PMU_PLLPD_SFTCON_CPLL_PD_ENA_SHIFT                 (2U)
#define PMU_PLLPD_SFTCON_CPLL_PD_ENA_MASK                  (0x1U << PMU_PLLPD_SFTCON_CPLL_PD_ENA_SHIFT)                 /* 0x00000004 */
#define PMU_PLLPD_SFTCON_GPLL_PD_ENA_SHIFT                 (3U)
#define PMU_PLLPD_SFTCON_GPLL_PD_ENA_MASK                  (0x1U << PMU_PLLPD_SFTCON_GPLL_PD_ENA_SHIFT)                 /* 0x00000008 */
/* INFO_TX_CON */
#define PMU_INFO_TX_CON_OFFSET                             (0x150U)
#define PMU_INFO_TX_CON_INFO_TX_EN_SHIFT                   (0U)
#define PMU_INFO_TX_CON_INFO_TX_EN_MASK                    (0x1U << PMU_INFO_TX_CON_INFO_TX_EN_SHIFT)                   /* 0x00000001 */
#define PMU_INFO_TX_CON_INFO_TX_INTV_TIME_SHIFT            (8U)
#define PMU_INFO_TX_CON_INFO_TX_INTV_TIME_MASK             (0xFFU << PMU_INFO_TX_CON_INFO_TX_INTV_TIME_SHIFT)           /* 0x0000FF00 */
/* SYS_REG0 */
#define PMU_SYS_REG0_OFFSET                                (0x1C0U)
#define PMU_SYS_REG0_PMU_SYS_REG_SHIFT                     (0U)
#define PMU_SYS_REG0_PMU_SYS_REG_MASK                      (0xFFFFFFFFU << PMU_SYS_REG0_PMU_SYS_REG_SHIFT)              /* 0xFFFFFFFF */
/* SYS_REG1 */
#define PMU_SYS_REG1_OFFSET                                (0x1C4U)
#define PMU_SYS_REG1_PMU_SYS_REG_SHIFT                     (0U)
#define PMU_SYS_REG1_PMU_SYS_REG_MASK                      (0xFFFFFFFFU << PMU_SYS_REG1_PMU_SYS_REG_SHIFT)              /* 0xFFFFFFFF */
/* SYS_REG2 */
#define PMU_SYS_REG2_OFFSET                                (0x1C8U)
#define PMU_SYS_REG2_PMU_SYS_REG_SHIFT                     (0U)
#define PMU_SYS_REG2_PMU_SYS_REG_MASK                      (0xFFFFFFFFU << PMU_SYS_REG2_PMU_SYS_REG_SHIFT)              /* 0xFFFFFFFF */
/* SYS_REG3 */
#define PMU_SYS_REG3_OFFSET                                (0x1CCU)
#define PMU_SYS_REG3_PMU_SYS_REG_SHIFT                     (0U)
#define PMU_SYS_REG3_PMU_SYS_REG_MASK                      (0xFFFFFFFFU << PMU_SYS_REG3_PMU_SYS_REG_SHIFT)              /* 0xFFFFFFFF */
/* SYS_REG4 */
#define PMU_SYS_REG4_OFFSET                                (0x1D0U)
#define PMU_SYS_REG4_PMU_SYS_REG_SHIFT                     (0U)
#define PMU_SYS_REG4_PMU_SYS_REG_MASK                      (0xFFFFFFFFU << PMU_SYS_REG4_PMU_SYS_REG_SHIFT)              /* 0xFFFFFFFF */
/* SYS_REG5 */
#define PMU_SYS_REG5_OFFSET                                (0x1D4U)
#define PMU_SYS_REG5_PMU_SYS_REG_SHIFT                     (0U)
#define PMU_SYS_REG5_PMU_SYS_REG_MASK                      (0xFFFFFFFFU << PMU_SYS_REG5_PMU_SYS_REG_SHIFT)              /* 0xFFFFFFFF */
/* SYS_REG6 */
#define PMU_SYS_REG6_OFFSET                                (0x1D8U)
#define PMU_SYS_REG6_PMU_SYS_REG_SHIFT                     (0U)
#define PMU_SYS_REG6_PMU_SYS_REG_MASK                      (0xFFFFFFFFU << PMU_SYS_REG6_PMU_SYS_REG_SHIFT)              /* 0xFFFFFFFF */
/* SYS_REG7 */
#define PMU_SYS_REG7_OFFSET                                (0x1DCU)
#define PMU_SYS_REG7_PMU_SYS_REG_SHIFT                     (0U)
#define PMU_SYS_REG7_PMU_SYS_REG_MASK                      (0xFFFFFFFFU << PMU_SYS_REG7_PMU_SYS_REG_SHIFT)              /* 0xFFFFFFFF */
/******************************************I2C*******************************************/
/* CON */
#define I2C_CON_OFFSET                                     (0x0U)
#define I2C_CON_I2C_EN_SHIFT                               (0U)
#define I2C_CON_I2C_EN_MASK                                (0x1U << I2C_CON_I2C_EN_SHIFT)                               /* 0x00000001 */
#define I2C_CON_I2C_MODE_SHIFT                             (1U)
#define I2C_CON_I2C_MODE_MASK                              (0x3U << I2C_CON_I2C_MODE_SHIFT)                             /* 0x00000006 */
#define I2C_CON_START_SHIFT                                (3U)
#define I2C_CON_START_MASK                                 (0x1U << I2C_CON_START_SHIFT)                                /* 0x00000008 */
#define I2C_CON_STOP_SHIFT                                 (4U)
#define I2C_CON_STOP_MASK                                  (0x1U << I2C_CON_STOP_SHIFT)                                 /* 0x00000010 */
#define I2C_CON_ACK_SHIFT                                  (5U)
#define I2C_CON_ACK_MASK                                   (0x1U << I2C_CON_ACK_SHIFT)                                  /* 0x00000020 */
#define I2C_CON_ACT2NAK_SHIFT                              (6U)
#define I2C_CON_ACT2NAK_MASK                               (0x1U << I2C_CON_ACT2NAK_SHIFT)                              /* 0x00000040 */
#define I2C_CON_DATA_UPD_ST_SHIFT                          (8U)
#define I2C_CON_DATA_UPD_ST_MASK                           (0xFU << I2C_CON_DATA_UPD_ST_SHIFT)                          /* 0x00000F00 */
#define I2C_CON_START_SETUP_SHIFT                          (12U)
#define I2C_CON_START_SETUP_MASK                           (0x3U << I2C_CON_START_SETUP_SHIFT)                          /* 0x00003000 */
#define I2C_CON_STOP_SETUP_SHIFT                           (14U)
#define I2C_CON_STOP_SETUP_MASK                            (0x3U << I2C_CON_STOP_SETUP_SHIFT)                           /* 0x0000C000 */
#define I2C_CON_VERSION_SHIFT                              (16U)
#define I2C_CON_VERSION_MASK                               (0xFFFFU << I2C_CON_VERSION_SHIFT)                           /* 0xFFFF0000 */
/* CLKDIV */
#define I2C_CLKDIV_OFFSET                                  (0x4U)
#define I2C_CLKDIV_CLKDIVL_SHIFT                           (0U)
#define I2C_CLKDIV_CLKDIVL_MASK                            (0xFFFFU << I2C_CLKDIV_CLKDIVL_SHIFT)                        /* 0x0000FFFF */
#define I2C_CLKDIV_CLKDIVH_SHIFT                           (16U)
#define I2C_CLKDIV_CLKDIVH_MASK                            (0xFFFFU << I2C_CLKDIV_CLKDIVH_SHIFT)                        /* 0xFFFF0000 */
/* MRXADDR */
#define I2C_MRXADDR_OFFSET                                 (0x8U)
#define I2C_MRXADDR_SADDR_SHIFT                            (0U)
#define I2C_MRXADDR_SADDR_MASK                             (0xFFFFFFU << I2C_MRXADDR_SADDR_SHIFT)                       /* 0x00FFFFFF */
#define I2C_MRXADDR_ADDLVLD_SHIFT                          (24U)
#define I2C_MRXADDR_ADDLVLD_MASK                           (0x1U << I2C_MRXADDR_ADDLVLD_SHIFT)                          /* 0x01000000 */
#define I2C_MRXADDR_ADDMVLD_SHIFT                          (25U)
#define I2C_MRXADDR_ADDMVLD_MASK                           (0x1U << I2C_MRXADDR_ADDMVLD_SHIFT)                          /* 0x02000000 */
#define I2C_MRXADDR_ADDHVLD_SHIFT                          (26U)
#define I2C_MRXADDR_ADDHVLD_MASK                           (0x1U << I2C_MRXADDR_ADDHVLD_SHIFT)                          /* 0x04000000 */
/* MRXRADDR */
#define I2C_MRXRADDR_OFFSET                                (0xCU)
#define I2C_MRXRADDR_SRADDR_SHIFT                          (0U)
#define I2C_MRXRADDR_SRADDR_MASK                           (0xFFFFFFU << I2C_MRXRADDR_SRADDR_SHIFT)                     /* 0x00FFFFFF */
#define I2C_MRXRADDR_SRADDLVLD_SHIFT                       (24U)
#define I2C_MRXRADDR_SRADDLVLD_MASK                        (0x1U << I2C_MRXRADDR_SRADDLVLD_SHIFT)                       /* 0x01000000 */
#define I2C_MRXRADDR_SRADDMVLD_SHIFT                       (25U)
#define I2C_MRXRADDR_SRADDMVLD_MASK                        (0x1U << I2C_MRXRADDR_SRADDMVLD_SHIFT)                       /* 0x02000000 */
#define I2C_MRXRADDR_SRADDHVLD_SHIFT                       (26U)
#define I2C_MRXRADDR_SRADDHVLD_MASK                        (0x1U << I2C_MRXRADDR_SRADDHVLD_SHIFT)                       /* 0x04000000 */
/* MTXCNT */
#define I2C_MTXCNT_OFFSET                                  (0x10U)
#define I2C_MTXCNT_MTXCNT_SHIFT                            (0U)
#define I2C_MTXCNT_MTXCNT_MASK                             (0x3FU << I2C_MTXCNT_MTXCNT_SHIFT)                           /* 0x0000003F */
/* MRXCNT */
#define I2C_MRXCNT_OFFSET                                  (0x14U)
#define I2C_MRXCNT_MRXCNT_SHIFT                            (0U)
#define I2C_MRXCNT_MRXCNT_MASK                             (0x3FU << I2C_MRXCNT_MRXCNT_SHIFT)                           /* 0x0000003F */
/* IEN */
#define I2C_IEN_OFFSET                                     (0x18U)
#define I2C_IEN_BTFIEN_SHIFT                               (0U)
#define I2C_IEN_BTFIEN_MASK                                (0x1U << I2C_IEN_BTFIEN_SHIFT)                               /* 0x00000001 */
#define I2C_IEN_BRFIEN_SHIFT                               (1U)
#define I2C_IEN_BRFIEN_MASK                                (0x1U << I2C_IEN_BRFIEN_SHIFT)                               /* 0x00000002 */
#define I2C_IEN_MBTFIEN_SHIFT                              (2U)
#define I2C_IEN_MBTFIEN_MASK                               (0x1U << I2C_IEN_MBTFIEN_SHIFT)                              /* 0x00000004 */
#define I2C_IEN_MBRFIEN_SHIFT                              (3U)
#define I2C_IEN_MBRFIEN_MASK                               (0x1U << I2C_IEN_MBRFIEN_SHIFT)                              /* 0x00000008 */
#define I2C_IEN_STARTIEN_SHIFT                             (4U)
#define I2C_IEN_STARTIEN_MASK                              (0x1U << I2C_IEN_STARTIEN_SHIFT)                             /* 0x00000010 */
#define I2C_IEN_STOPIEN_SHIFT                              (5U)
#define I2C_IEN_STOPIEN_MASK                               (0x1U << I2C_IEN_STOPIEN_SHIFT)                              /* 0x00000020 */
#define I2C_IEN_NAKRCVIEN_SHIFT                            (6U)
#define I2C_IEN_NAKRCVIEN_MASK                             (0x1U << I2C_IEN_NAKRCVIEN_SHIFT)                            /* 0x00000040 */
#define I2C_IEN_SLAVEHDSCLEN_SHIFT                         (7U)
#define I2C_IEN_SLAVEHDSCLEN_MASK                          (0x1U << I2C_IEN_SLAVEHDSCLEN_SHIFT)                         /* 0x00000080 */
/* IPD */
#define I2C_IPD_OFFSET                                     (0x1CU)
#define I2C_IPD_BTFIPD_SHIFT                               (0U)
#define I2C_IPD_BTFIPD_MASK                                (0x1U << I2C_IPD_BTFIPD_SHIFT)                               /* 0x00000001 */
#define I2C_IPD_BRFIPD_SHIFT                               (1U)
#define I2C_IPD_BRFIPD_MASK                                (0x1U << I2C_IPD_BRFIPD_SHIFT)                               /* 0x00000002 */
#define I2C_IPD_MBTFIPD_SHIFT                              (2U)
#define I2C_IPD_MBTFIPD_MASK                               (0x1U << I2C_IPD_MBTFIPD_SHIFT)                              /* 0x00000004 */
#define I2C_IPD_MBRFIPD_SHIFT                              (3U)
#define I2C_IPD_MBRFIPD_MASK                               (0x1U << I2C_IPD_MBRFIPD_SHIFT)                              /* 0x00000008 */
#define I2C_IPD_STARTIPD_SHIFT                             (4U)
#define I2C_IPD_STARTIPD_MASK                              (0x1U << I2C_IPD_STARTIPD_SHIFT)                             /* 0x00000010 */
#define I2C_IPD_STOPIPD_SHIFT                              (5U)
#define I2C_IPD_STOPIPD_MASK                               (0x1U << I2C_IPD_STOPIPD_SHIFT)                              /* 0x00000020 */
#define I2C_IPD_NAKRCVIPD_SHIFT                            (6U)
#define I2C_IPD_NAKRCVIPD_MASK                             (0x1U << I2C_IPD_NAKRCVIPD_SHIFT)                            /* 0x00000040 */
#define I2C_IPD_SLAVEHDSCLIPD_SHIFT                        (7U)
#define I2C_IPD_SLAVEHDSCLIPD_MASK                         (0x1U << I2C_IPD_SLAVEHDSCLIPD_SHIFT)                        /* 0x00000080 */
/* FCNT */
#define I2C_FCNT_OFFSET                                    (0x20U)
#define I2C_FCNT                                           (0x0U)
#define I2C_FCNT_FCNT_SHIFT                                (0U)
#define I2C_FCNT_FCNT_MASK                                 (0x3FU << I2C_FCNT_FCNT_SHIFT)                               /* 0x0000003F */
/* SCL_OE_DB */
#define I2C_SCL_OE_DB_OFFSET                               (0x24U)
#define I2C_SCL_OE_DB_SCL_OE_DB_SHIFT                      (0U)
#define I2C_SCL_OE_DB_SCL_OE_DB_MASK                       (0xFFU << I2C_SCL_OE_DB_SCL_OE_DB_SHIFT)                     /* 0x000000FF */
/* TXDATA0 */
#define I2C_TXDATA0_OFFSET                                 (0x100U)
#define I2C_TXDATA0_TXDATA0_SHIFT                          (0U)
#define I2C_TXDATA0_TXDATA0_MASK                           (0xFFFFFFFFU << I2C_TXDATA0_TXDATA0_SHIFT)                   /* 0xFFFFFFFF */
/* TXDATA1 */
#define I2C_TXDATA1_OFFSET                                 (0x104U)
#define I2C_TXDATA1_TXDATA1_SHIFT                          (0U)
#define I2C_TXDATA1_TXDATA1_MASK                           (0xFFFFFFFFU << I2C_TXDATA1_TXDATA1_SHIFT)                   /* 0xFFFFFFFF */
/* TXDATA2 */
#define I2C_TXDATA2_OFFSET                                 (0x108U)
#define I2C_TXDATA2_TXDATA2_SHIFT                          (0U)
#define I2C_TXDATA2_TXDATA2_MASK                           (0xFFFFFFFFU << I2C_TXDATA2_TXDATA2_SHIFT)                   /* 0xFFFFFFFF */
/* TXDATA3 */
#define I2C_TXDATA3_OFFSET                                 (0x10CU)
#define I2C_TXDATA3_TXDATA3_SHIFT                          (0U)
#define I2C_TXDATA3_TXDATA3_MASK                           (0xFFFFFFFFU << I2C_TXDATA3_TXDATA3_SHIFT)                   /* 0xFFFFFFFF */
/* TXDATA4 */
#define I2C_TXDATA4_OFFSET                                 (0x110U)
#define I2C_TXDATA4_TXDATA4_SHIFT                          (0U)
#define I2C_TXDATA4_TXDATA4_MASK                           (0xFFFFFFFFU << I2C_TXDATA4_TXDATA4_SHIFT)                   /* 0xFFFFFFFF */
/* TXDATA5 */
#define I2C_TXDATA5_OFFSET                                 (0x114U)
#define I2C_TXDATA5_TXDATA5_SHIFT                          (0U)
#define I2C_TXDATA5_TXDATA5_MASK                           (0xFFFFFFFFU << I2C_TXDATA5_TXDATA5_SHIFT)                   /* 0xFFFFFFFF */
/* TXDATA6 */
#define I2C_TXDATA6_OFFSET                                 (0x118U)
#define I2C_TXDATA6_TXDATA6_SHIFT                          (0U)
#define I2C_TXDATA6_TXDATA6_MASK                           (0xFFFFFFFFU << I2C_TXDATA6_TXDATA6_SHIFT)                   /* 0xFFFFFFFF */
/* TXDATA7 */
#define I2C_TXDATA7_OFFSET                                 (0x11CU)
#define I2C_TXDATA7_TXDATA7_SHIFT                          (0U)
#define I2C_TXDATA7_TXDATA7_MASK                           (0xFFFFFFFFU << I2C_TXDATA7_TXDATA7_SHIFT)                   /* 0xFFFFFFFF */
/* RXDATA0 */
#define I2C_RXDATA0_OFFSET                                 (0x200U)
#define I2C_RXDATA0                                        (0x0U)
#define I2C_RXDATA0_RXDATA0_SHIFT                          (0U)
#define I2C_RXDATA0_RXDATA0_MASK                           (0xFFFFFFFFU << I2C_RXDATA0_RXDATA0_SHIFT)                   /* 0xFFFFFFFF */
/* RXDATA1 */
#define I2C_RXDATA1_OFFSET                                 (0x204U)
#define I2C_RXDATA1                                        (0x0U)
#define I2C_RXDATA1_RXDATA1_SHIFT                          (0U)
#define I2C_RXDATA1_RXDATA1_MASK                           (0xFFFFFFFFU << I2C_RXDATA1_RXDATA1_SHIFT)                   /* 0xFFFFFFFF */
/* RXDATA2 */
#define I2C_RXDATA2_OFFSET                                 (0x208U)
#define I2C_RXDATA2                                        (0x0U)
#define I2C_RXDATA2_RXDATA2_SHIFT                          (0U)
#define I2C_RXDATA2_RXDATA2_MASK                           (0xFFFFFFFFU << I2C_RXDATA2_RXDATA2_SHIFT)                   /* 0xFFFFFFFF */
/* RXDATA3 */
#define I2C_RXDATA3_OFFSET                                 (0x20CU)
#define I2C_RXDATA3                                        (0x0U)
#define I2C_RXDATA3_RXDATA3_SHIFT                          (0U)
#define I2C_RXDATA3_RXDATA3_MASK                           (0xFFFFFFFFU << I2C_RXDATA3_RXDATA3_SHIFT)                   /* 0xFFFFFFFF */
/* RXDATA4 */
#define I2C_RXDATA4_OFFSET                                 (0x210U)
#define I2C_RXDATA4                                        (0x0U)
#define I2C_RXDATA4_RXDATA4_SHIFT                          (0U)
#define I2C_RXDATA4_RXDATA4_MASK                           (0xFFFFFFFFU << I2C_RXDATA4_RXDATA4_SHIFT)                   /* 0xFFFFFFFF */
/* RXDATA5 */
#define I2C_RXDATA5_OFFSET                                 (0x214U)
#define I2C_RXDATA5                                        (0x0U)
#define I2C_RXDATA5_RXDATA5_SHIFT                          (0U)
#define I2C_RXDATA5_RXDATA5_MASK                           (0xFFFFFFFFU << I2C_RXDATA5_RXDATA5_SHIFT)                   /* 0xFFFFFFFF */
/* RXDATA6 */
#define I2C_RXDATA6_OFFSET                                 (0x218U)
#define I2C_RXDATA6                                        (0x0U)
#define I2C_RXDATA6_RXDATA6_SHIFT                          (0U)
#define I2C_RXDATA6_RXDATA6_MASK                           (0xFFFFFFFFU << I2C_RXDATA6_RXDATA6_SHIFT)                   /* 0xFFFFFFFF */
/* RXDATA7 */
#define I2C_RXDATA7_OFFSET                                 (0x21CU)
#define I2C_RXDATA7                                        (0x0U)
#define I2C_RXDATA7_RXDATA7_SHIFT                          (0U)
#define I2C_RXDATA7_RXDATA7_MASK                           (0xFFFFFFFFU << I2C_RXDATA7_RXDATA7_SHIFT)                   /* 0xFFFFFFFF */
/* ST */
#define I2C_ST_OFFSET                                      (0x220U)
#define I2C_ST                                             (0x0U)
#define I2C_ST_SDA_ST_SHIFT                                (0U)
#define I2C_ST_SDA_ST_MASK                                 (0x1U << I2C_ST_SDA_ST_SHIFT)                                /* 0x00000001 */
#define I2C_ST_SCL_ST_SHIFT                                (1U)
#define I2C_ST_SCL_ST_MASK                                 (0x1U << I2C_ST_SCL_ST_SHIFT)                                /* 0x00000002 */
/* DBGCTRL */
#define I2C_DBGCTRL_OFFSET                                 (0x224U)
#define I2C_DBGCTRL_FLT_F_SHIFT                            (0U)
#define I2C_DBGCTRL_FLT_F_MASK                             (0xFU << I2C_DBGCTRL_FLT_F_SHIFT)                            /* 0x0000000F */
#define I2C_DBGCTRL_FLT_R_SHIFT                            (4U)
#define I2C_DBGCTRL_FLT_R_MASK                             (0xFU << I2C_DBGCTRL_FLT_R_SHIFT)                            /* 0x000000F0 */
#define I2C_DBGCTRL_SLV_HOLD_SCL_TH_SHIFT                  (8U)
#define I2C_DBGCTRL_SLV_HOLD_SCL_TH_MASK                   (0xFU << I2C_DBGCTRL_SLV_HOLD_SCL_TH_SHIFT)                  /* 0x00000F00 */
#define I2C_DBGCTRL_FLT_EN_SHIFT                           (12U)
#define I2C_DBGCTRL_FLT_EN_MASK                            (0x1U << I2C_DBGCTRL_FLT_EN_SHIFT)                           /* 0x00001000 */
#define I2C_DBGCTRL_NAK_RELEASE_SCL_SHIFT                  (13U)
#define I2C_DBGCTRL_NAK_RELEASE_SCL_MASK                   (0x1U << I2C_DBGCTRL_NAK_RELEASE_SCL_SHIFT)                  /* 0x00002000 */
#define I2C_DBGCTRL_H0_CHECK_SCL_SHIFT                     (14U)
#define I2C_DBGCTRL_H0_CHECK_SCL_MASK                      (0x1U << I2C_DBGCTRL_H0_CHECK_SCL_SHIFT)                     /* 0x00004000 */
/* CON1 */
#define I2C_CON1_OFFSET                                    (0x228U)
#define I2C_CON1_AUTO_STOP_SHIFT                           (0U)
#define I2C_CON1_AUTO_STOP_MASK                            (0x1U << I2C_CON1_AUTO_STOP_SHIFT)                           /* 0x00000001 */
#define I2C_CON1_AUTO_STOP_TX_END_SHIFT                    (1U)
#define I2C_CON1_AUTO_STOP_TX_END_MASK                     (0x1U << I2C_CON1_AUTO_STOP_TX_END_SHIFT)                    /* 0x00000002 */
#define I2C_CON1_AUTO_STOP_NAK_SHIFT                       (2U)
#define I2C_CON1_AUTO_STOP_NAK_MASK                        (0x1U << I2C_CON1_AUTO_STOP_NAK_SHIFT)                       /* 0x00000004 */
/******************************************PWM*******************************************/
/* PWM0_CNT */
#define PWM_PWM0_CNT_OFFSET                                (0x0U)
#define PWM_PWM0_CNT                                       (0x0U)
#define PWM_PWM0_CNT_CNT_SHIFT                             (0U)
#define PWM_PWM0_CNT_CNT_MASK                              (0xFFFFFFFFU << PWM_PWM0_CNT_CNT_SHIFT)                      /* 0xFFFFFFFF */
/* PWM0_PERIOD_HPR */
#define PWM_PWM0_PERIOD_HPR_OFFSET                         (0x4U)
#define PWM_PWM0_PERIOD_HPR_PERIOD_HPR_SHIFT               (0U)
#define PWM_PWM0_PERIOD_HPR_PERIOD_HPR_MASK                (0xFFFFFFFFU << PWM_PWM0_PERIOD_HPR_PERIOD_HPR_SHIFT)        /* 0xFFFFFFFF */
/* PWM0_DUTY_LPR */
#define PWM_PWM0_DUTY_LPR_OFFSET                           (0x8U)
#define PWM_PWM0_DUTY_LPR_DUTY_LPR_SHIFT                   (0U)
#define PWM_PWM0_DUTY_LPR_DUTY_LPR_MASK                    (0xFFFFFFFFU << PWM_PWM0_DUTY_LPR_DUTY_LPR_SHIFT)            /* 0xFFFFFFFF */
/* PWM0_CTRL */
#define PWM_PWM0_CTRL_OFFSET                               (0xCU)
#define PWM_PWM0_CTRL_PWM_EN_SHIFT                         (0U)
#define PWM_PWM0_CTRL_PWM_EN_MASK                          (0x1U << PWM_PWM0_CTRL_PWM_EN_SHIFT)                         /* 0x00000001 */
#define PWM_PWM0_CTRL_PWM_MODE_SHIFT                       (1U)
#define PWM_PWM0_CTRL_PWM_MODE_MASK                        (0x3U << PWM_PWM0_CTRL_PWM_MODE_SHIFT)                       /* 0x00000006 */
#define PWM_PWM0_CTRL_DUTY_POL_SHIFT                       (3U)
#define PWM_PWM0_CTRL_DUTY_POL_MASK                        (0x1U << PWM_PWM0_CTRL_DUTY_POL_SHIFT)                       /* 0x00000008 */
#define PWM_PWM0_CTRL_INACTIVE_POL_SHIFT                   (4U)
#define PWM_PWM0_CTRL_INACTIVE_POL_MASK                    (0x1U << PWM_PWM0_CTRL_INACTIVE_POL_SHIFT)                   /* 0x00000010 */
#define PWM_PWM0_CTRL_OUTPUT_MODE_SHIFT                    (5U)
#define PWM_PWM0_CTRL_OUTPUT_MODE_MASK                     (0x1U << PWM_PWM0_CTRL_OUTPUT_MODE_SHIFT)                    /* 0x00000020 */
#define PWM_PWM0_CTRL_CONLOCK_SHIFT                        (6U)
#define PWM_PWM0_CTRL_CONLOCK_MASK                         (0x1U << PWM_PWM0_CTRL_CONLOCK_SHIFT)                        /* 0x00000040 */
#define PWM_PWM0_CTRL_CH_CNT_EN_SHIFT                      (7U)
#define PWM_PWM0_CTRL_CH_CNT_EN_MASK                       (0x1U << PWM_PWM0_CTRL_CH_CNT_EN_SHIFT)                      /* 0x00000080 */
#define PWM_PWM0_CTRL_FORCE_CLK_EN_SHIFT                   (8U)
#define PWM_PWM0_CTRL_FORCE_CLK_EN_MASK                    (0x1U << PWM_PWM0_CTRL_FORCE_CLK_EN_SHIFT)                   /* 0x00000100 */
#define PWM_PWM0_CTRL_CLK_SEL_SHIFT                        (9U)
#define PWM_PWM0_CTRL_CLK_SEL_MASK                         (0x1U << PWM_PWM0_CTRL_CLK_SEL_SHIFT)                        /* 0x00000200 */
#define PWM_PWM0_CTRL_CLK_SRC_SEL_SHIFT                    (10U)
#define PWM_PWM0_CTRL_CLK_SRC_SEL_MASK                     (0x1U << PWM_PWM0_CTRL_CLK_SRC_SEL_SHIFT)                    /* 0x00000400 */
#define PWM_PWM0_CTRL_ALIGNED_VLD_N_SHIFT                  (11U)
#define PWM_PWM0_CTRL_ALIGNED_VLD_N_MASK                   (0x1U << PWM_PWM0_CTRL_ALIGNED_VLD_N_SHIFT)                  /* 0x00000800 */
#define PWM_PWM0_CTRL_PRESCALE_SHIFT                       (12U)
#define PWM_PWM0_CTRL_PRESCALE_MASK                        (0x7U << PWM_PWM0_CTRL_PRESCALE_SHIFT)                       /* 0x00007000 */
#define PWM_PWM0_CTRL_SCALE_SHIFT                          (16U)
#define PWM_PWM0_CTRL_SCALE_MASK                           (0xFFU << PWM_PWM0_CTRL_SCALE_SHIFT)                         /* 0x00FF0000 */
#define PWM_PWM0_CTRL_RPT_SHIFT                            (24U)
#define PWM_PWM0_CTRL_RPT_MASK                             (0xFFU << PWM_PWM0_CTRL_RPT_SHIFT)                           /* 0xFF000000 */
/* PWM1_CNT */
#define PWM_PWM1_CNT_OFFSET                                (0x10U)
#define PWM_PWM1_CNT                                       (0x0U)
#define PWM_PWM1_CNT_CNT_SHIFT                             (0U)
#define PWM_PWM1_CNT_CNT_MASK                              (0xFFFFFFFFU << PWM_PWM1_CNT_CNT_SHIFT)                      /* 0xFFFFFFFF */
/* PWM1_PERIOD_HPR */
#define PWM_PWM1_PERIOD_HPR_OFFSET                         (0x14U)
#define PWM_PWM1_PERIOD_HPR_PERIOD_HPR_SHIFT               (0U)
#define PWM_PWM1_PERIOD_HPR_PERIOD_HPR_MASK                (0xFFFFFFFFU << PWM_PWM1_PERIOD_HPR_PERIOD_HPR_SHIFT)        /* 0xFFFFFFFF */
/* PWM1_DUTY_LPR */
#define PWM_PWM1_DUTY_LPR_OFFSET                           (0x18U)
#define PWM_PWM1_DUTY_LPR_DUTY_LPR_SHIFT                   (0U)
#define PWM_PWM1_DUTY_LPR_DUTY_LPR_MASK                    (0xFFFFFFFFU << PWM_PWM1_DUTY_LPR_DUTY_LPR_SHIFT)            /* 0xFFFFFFFF */
/* PWM1_CTRL */
#define PWM_PWM1_CTRL_OFFSET                               (0x1CU)
#define PWM_PWM1_CTRL_PWM_EN_SHIFT                         (0U)
#define PWM_PWM1_CTRL_PWM_EN_MASK                          (0x1U << PWM_PWM1_CTRL_PWM_EN_SHIFT)                         /* 0x00000001 */
#define PWM_PWM1_CTRL_PWM_MODE_SHIFT                       (1U)
#define PWM_PWM1_CTRL_PWM_MODE_MASK                        (0x3U << PWM_PWM1_CTRL_PWM_MODE_SHIFT)                       /* 0x00000006 */
#define PWM_PWM1_CTRL_DUTY_POL_SHIFT                       (3U)
#define PWM_PWM1_CTRL_DUTY_POL_MASK                        (0x1U << PWM_PWM1_CTRL_DUTY_POL_SHIFT)                       /* 0x00000008 */
#define PWM_PWM1_CTRL_INACTIVE_POL_SHIFT                   (4U)
#define PWM_PWM1_CTRL_INACTIVE_POL_MASK                    (0x1U << PWM_PWM1_CTRL_INACTIVE_POL_SHIFT)                   /* 0x00000010 */
#define PWM_PWM1_CTRL_OUTPUT_MODE_SHIFT                    (5U)
#define PWM_PWM1_CTRL_OUTPUT_MODE_MASK                     (0x1U << PWM_PWM1_CTRL_OUTPUT_MODE_SHIFT)                    /* 0x00000020 */
#define PWM_PWM1_CTRL_CONLOCK_SHIFT                        (6U)
#define PWM_PWM1_CTRL_CONLOCK_MASK                         (0x1U << PWM_PWM1_CTRL_CONLOCK_SHIFT)                        /* 0x00000040 */
#define PWM_PWM1_CTRL_CH_CNT_EN_SHIFT                      (7U)
#define PWM_PWM1_CTRL_CH_CNT_EN_MASK                       (0x1U << PWM_PWM1_CTRL_CH_CNT_EN_SHIFT)                      /* 0x00000080 */
#define PWM_PWM1_CTRL_FORCE_CLK_EN_SHIFT                   (8U)
#define PWM_PWM1_CTRL_FORCE_CLK_EN_MASK                    (0x1U << PWM_PWM1_CTRL_FORCE_CLK_EN_SHIFT)                   /* 0x00000100 */
#define PWM_PWM1_CTRL_CLK_SEL_SHIFT                        (9U)
#define PWM_PWM1_CTRL_CLK_SEL_MASK                         (0x1U << PWM_PWM1_CTRL_CLK_SEL_SHIFT)                        /* 0x00000200 */
#define PWM_PWM1_CTRL_CLK_SRC_SEL_SHIFT                    (10U)
#define PWM_PWM1_CTRL_CLK_SRC_SEL_MASK                     (0x1U << PWM_PWM1_CTRL_CLK_SRC_SEL_SHIFT)                    /* 0x00000400 */
#define PWM_PWM1_CTRL_ALIGNED_VLD_N_SHIFT                  (11U)
#define PWM_PWM1_CTRL_ALIGNED_VLD_N_MASK                   (0x1U << PWM_PWM1_CTRL_ALIGNED_VLD_N_SHIFT)                  /* 0x00000800 */
#define PWM_PWM1_CTRL_PRESCALE_SHIFT                       (12U)
#define PWM_PWM1_CTRL_PRESCALE_MASK                        (0x7U << PWM_PWM1_CTRL_PRESCALE_SHIFT)                       /* 0x00007000 */
#define PWM_PWM1_CTRL_SCALE_SHIFT                          (16U)
#define PWM_PWM1_CTRL_SCALE_MASK                           (0xFFU << PWM_PWM1_CTRL_SCALE_SHIFT)                         /* 0x00FF0000 */
#define PWM_PWM1_CTRL_RPT_SHIFT                            (24U)
#define PWM_PWM1_CTRL_RPT_MASK                             (0xFFU << PWM_PWM1_CTRL_RPT_SHIFT)                           /* 0xFF000000 */
/* PWM2_CNT */
#define PWM_PWM2_CNT_OFFSET                                (0x20U)
#define PWM_PWM2_CNT                                       (0x0U)
#define PWM_PWM2_CNT_CNT_SHIFT                             (0U)
#define PWM_PWM2_CNT_CNT_MASK                              (0xFFFFFFFFU << PWM_PWM2_CNT_CNT_SHIFT)                      /* 0xFFFFFFFF */
/* PWM2_PERIOD_HPR */
#define PWM_PWM2_PERIOD_HPR_OFFSET                         (0x24U)
#define PWM_PWM2_PERIOD_HPR_PERIOD_HPR_SHIFT               (0U)
#define PWM_PWM2_PERIOD_HPR_PERIOD_HPR_MASK                (0xFFFFFFFFU << PWM_PWM2_PERIOD_HPR_PERIOD_HPR_SHIFT)        /* 0xFFFFFFFF */
/* PWM2_DUTY_LPR */
#define PWM_PWM2_DUTY_LPR_OFFSET                           (0x28U)
#define PWM_PWM2_DUTY_LPR_DUTY_LPR_SHIFT                   (0U)
#define PWM_PWM2_DUTY_LPR_DUTY_LPR_MASK                    (0xFFFFFFFFU << PWM_PWM2_DUTY_LPR_DUTY_LPR_SHIFT)            /* 0xFFFFFFFF */
/* PWM2_CTRL */
#define PWM_PWM2_CTRL_OFFSET                               (0x2CU)
#define PWM_PWM2_CTRL_PWM_EN_SHIFT                         (0U)
#define PWM_PWM2_CTRL_PWM_EN_MASK                          (0x1U << PWM_PWM2_CTRL_PWM_EN_SHIFT)                         /* 0x00000001 */
#define PWM_PWM2_CTRL_PWM_MODE_SHIFT                       (1U)
#define PWM_PWM2_CTRL_PWM_MODE_MASK                        (0x3U << PWM_PWM2_CTRL_PWM_MODE_SHIFT)                       /* 0x00000006 */
#define PWM_PWM2_CTRL_DUTY_POL_SHIFT                       (3U)
#define PWM_PWM2_CTRL_DUTY_POL_MASK                        (0x1U << PWM_PWM2_CTRL_DUTY_POL_SHIFT)                       /* 0x00000008 */
#define PWM_PWM2_CTRL_INACTIVE_POL_SHIFT                   (4U)
#define PWM_PWM2_CTRL_INACTIVE_POL_MASK                    (0x1U << PWM_PWM2_CTRL_INACTIVE_POL_SHIFT)                   /* 0x00000010 */
#define PWM_PWM2_CTRL_OUTPUT_MODE_SHIFT                    (5U)
#define PWM_PWM2_CTRL_OUTPUT_MODE_MASK                     (0x1U << PWM_PWM2_CTRL_OUTPUT_MODE_SHIFT)                    /* 0x00000020 */
#define PWM_PWM2_CTRL_CONLOCK_SHIFT                        (6U)
#define PWM_PWM2_CTRL_CONLOCK_MASK                         (0x1U << PWM_PWM2_CTRL_CONLOCK_SHIFT)                        /* 0x00000040 */
#define PWM_PWM2_CTRL_CH_CNT_EN_SHIFT                      (7U)
#define PWM_PWM2_CTRL_CH_CNT_EN_MASK                       (0x1U << PWM_PWM2_CTRL_CH_CNT_EN_SHIFT)                      /* 0x00000080 */
#define PWM_PWM2_CTRL_FORCE_CLK_EN_SHIFT                   (8U)
#define PWM_PWM2_CTRL_FORCE_CLK_EN_MASK                    (0x1U << PWM_PWM2_CTRL_FORCE_CLK_EN_SHIFT)                   /* 0x00000100 */
#define PWM_PWM2_CTRL_CLK_SEL_SHIFT                        (9U)
#define PWM_PWM2_CTRL_CLK_SEL_MASK                         (0x1U << PWM_PWM2_CTRL_CLK_SEL_SHIFT)                        /* 0x00000200 */
#define PWM_PWM2_CTRL_CLK_SRC_SEL_SHIFT                    (10U)
#define PWM_PWM2_CTRL_CLK_SRC_SEL_MASK                     (0x1U << PWM_PWM2_CTRL_CLK_SRC_SEL_SHIFT)                    /* 0x00000400 */
#define PWM_PWM2_CTRL_ALIGNED_VLD_N_SHIFT                  (11U)
#define PWM_PWM2_CTRL_ALIGNED_VLD_N_MASK                   (0x1U << PWM_PWM2_CTRL_ALIGNED_VLD_N_SHIFT)                  /* 0x00000800 */
#define PWM_PWM2_CTRL_PRESCALE_SHIFT                       (12U)
#define PWM_PWM2_CTRL_PRESCALE_MASK                        (0x7U << PWM_PWM2_CTRL_PRESCALE_SHIFT)                       /* 0x00007000 */
#define PWM_PWM2_CTRL_SCALE_SHIFT                          (16U)
#define PWM_PWM2_CTRL_SCALE_MASK                           (0xFFU << PWM_PWM2_CTRL_SCALE_SHIFT)                         /* 0x00FF0000 */
#define PWM_PWM2_CTRL_RPT_SHIFT                            (24U)
#define PWM_PWM2_CTRL_RPT_MASK                             (0xFFU << PWM_PWM2_CTRL_RPT_SHIFT)                           /* 0xFF000000 */
/* PWM3_CNT */
#define PWM_PWM3_CNT_OFFSET                                (0x30U)
#define PWM_PWM3_CNT                                       (0x0U)
#define PWM_PWM3_CNT_CNT_SHIFT                             (0U)
#define PWM_PWM3_CNT_CNT_MASK                              (0xFFFFFFFFU << PWM_PWM3_CNT_CNT_SHIFT)                      /* 0xFFFFFFFF */
/* PWM3_PERIOD_HPR */
#define PWM_PWM3_PERIOD_HPR_OFFSET                         (0x34U)
#define PWM_PWM3_PERIOD_HPR_PERIOD_HPR_SHIFT               (0U)
#define PWM_PWM3_PERIOD_HPR_PERIOD_HPR_MASK                (0xFFFFFFFFU << PWM_PWM3_PERIOD_HPR_PERIOD_HPR_SHIFT)        /* 0xFFFFFFFF */
/* PWM3_DUTY_LPR */
#define PWM_PWM3_DUTY_LPR_OFFSET                           (0x38U)
#define PWM_PWM3_DUTY_LPR_DUTY_LPR_SHIFT                   (0U)
#define PWM_PWM3_DUTY_LPR_DUTY_LPR_MASK                    (0xFFFFFFFFU << PWM_PWM3_DUTY_LPR_DUTY_LPR_SHIFT)            /* 0xFFFFFFFF */
/* PWM3_CTRL */
#define PWM_PWM3_CTRL_OFFSET                               (0x3CU)
#define PWM_PWM3_CTRL_PWM_EN_SHIFT                         (0U)
#define PWM_PWM3_CTRL_PWM_EN_MASK                          (0x1U << PWM_PWM3_CTRL_PWM_EN_SHIFT)                         /* 0x00000001 */
#define PWM_PWM3_CTRL_PWM_MODE_SHIFT                       (1U)
#define PWM_PWM3_CTRL_PWM_MODE_MASK                        (0x3U << PWM_PWM3_CTRL_PWM_MODE_SHIFT)                       /* 0x00000006 */
#define PWM_PWM3_CTRL_DUTY_POL_SHIFT                       (3U)
#define PWM_PWM3_CTRL_DUTY_POL_MASK                        (0x1U << PWM_PWM3_CTRL_DUTY_POL_SHIFT)                       /* 0x00000008 */
#define PWM_PWM3_CTRL_INACTIVE_POL_SHIFT                   (4U)
#define PWM_PWM3_CTRL_INACTIVE_POL_MASK                    (0x1U << PWM_PWM3_CTRL_INACTIVE_POL_SHIFT)                   /* 0x00000010 */
#define PWM_PWM3_CTRL_OUTPUT_MODE_SHIFT                    (5U)
#define PWM_PWM3_CTRL_OUTPUT_MODE_MASK                     (0x1U << PWM_PWM3_CTRL_OUTPUT_MODE_SHIFT)                    /* 0x00000020 */
#define PWM_PWM3_CTRL_CONLOCK_SHIFT                        (6U)
#define PWM_PWM3_CTRL_CONLOCK_MASK                         (0x1U << PWM_PWM3_CTRL_CONLOCK_SHIFT)                        /* 0x00000040 */
#define PWM_PWM3_CTRL_CH_CNT_EN_SHIFT                      (7U)
#define PWM_PWM3_CTRL_CH_CNT_EN_MASK                       (0x1U << PWM_PWM3_CTRL_CH_CNT_EN_SHIFT)                      /* 0x00000080 */
#define PWM_PWM3_CTRL_FORCE_CLK_EN_SHIFT                   (8U)
#define PWM_PWM3_CTRL_FORCE_CLK_EN_MASK                    (0x1U << PWM_PWM3_CTRL_FORCE_CLK_EN_SHIFT)                   /* 0x00000100 */
#define PWM_PWM3_CTRL_CLK_SEL_SHIFT                        (9U)
#define PWM_PWM3_CTRL_CLK_SEL_MASK                         (0x1U << PWM_PWM3_CTRL_CLK_SEL_SHIFT)                        /* 0x00000200 */
#define PWM_PWM3_CTRL_CLK_SRC_SEL_SHIFT                    (10U)
#define PWM_PWM3_CTRL_CLK_SRC_SEL_MASK                     (0x1U << PWM_PWM3_CTRL_CLK_SRC_SEL_SHIFT)                    /* 0x00000400 */
#define PWM_PWM3_CTRL_ALIGNED_VLD_N_SHIFT                  (11U)
#define PWM_PWM3_CTRL_ALIGNED_VLD_N_MASK                   (0x1U << PWM_PWM3_CTRL_ALIGNED_VLD_N_SHIFT)                  /* 0x00000800 */
#define PWM_PWM3_CTRL_PRESCALE_SHIFT                       (12U)
#define PWM_PWM3_CTRL_PRESCALE_MASK                        (0x7U << PWM_PWM3_CTRL_PRESCALE_SHIFT)                       /* 0x00007000 */
#define PWM_PWM3_CTRL_SCALE_SHIFT                          (16U)
#define PWM_PWM3_CTRL_SCALE_MASK                           (0xFFU << PWM_PWM3_CTRL_SCALE_SHIFT)                         /* 0x00FF0000 */
#define PWM_PWM3_CTRL_RPT_SHIFT                            (24U)
#define PWM_PWM3_CTRL_RPT_MASK                             (0xFFU << PWM_PWM3_CTRL_RPT_SHIFT)                           /* 0xFF000000 */
/* INTSTS */
#define PWM_INTSTS_OFFSET                                  (0x40U)
#define PWM_INTSTS_CH0_INTSTS_SHIFT                        (0U)
#define PWM_INTSTS_CH0_INTSTS_MASK                         (0x1U << PWM_INTSTS_CH0_INTSTS_SHIFT)                        /* 0x00000001 */
#define PWM_INTSTS_CH1_INTSTS_SHIFT                        (1U)
#define PWM_INTSTS_CH1_INTSTS_MASK                         (0x1U << PWM_INTSTS_CH1_INTSTS_SHIFT)                        /* 0x00000002 */
#define PWM_INTSTS_CH2_INTSTS_SHIFT                        (2U)
#define PWM_INTSTS_CH2_INTSTS_MASK                         (0x1U << PWM_INTSTS_CH2_INTSTS_SHIFT)                        /* 0x00000004 */
#define PWM_INTSTS_CH3_INTSTS_SHIFT                        (3U)
#define PWM_INTSTS_CH3_INTSTS_MASK                         (0x1U << PWM_INTSTS_CH3_INTSTS_SHIFT)                        /* 0x00000008 */
#define PWM_INTSTS_CH0_PWR_INTSTS_SHIFT                    (4U)
#define PWM_INTSTS_CH0_PWR_INTSTS_MASK                     (0x1U << PWM_INTSTS_CH0_PWR_INTSTS_SHIFT)                    /* 0x00000010 */
#define PWM_INTSTS_CH1_PWR_INTSTS_SHIFT                    (5U)
#define PWM_INTSTS_CH1_PWR_INTSTS_MASK                     (0x1U << PWM_INTSTS_CH1_PWR_INTSTS_SHIFT)                    /* 0x00000020 */
#define PWM_INTSTS_CH2_PWR_INTSTS_SHIFT                    (6U)
#define PWM_INTSTS_CH2_PWR_INTSTS_MASK                     (0x1U << PWM_INTSTS_CH2_PWR_INTSTS_SHIFT)                    /* 0x00000040 */
#define PWM_INTSTS_CH3_PWR_INTSTS_SHIFT                    (7U)
#define PWM_INTSTS_CH3_PWR_INTSTS_MASK                     (0x1U << PWM_INTSTS_CH3_PWR_INTSTS_SHIFT)                    /* 0x00000080 */
#define PWM_INTSTS_CH0_POL_SHIFT                           (8U)
#define PWM_INTSTS_CH0_POL_MASK                            (0x1U << PWM_INTSTS_CH0_POL_SHIFT)                           /* 0x00000100 */
#define PWM_INTSTS_CH1_POL_SHIFT                           (9U)
#define PWM_INTSTS_CH1_POL_MASK                            (0x1U << PWM_INTSTS_CH1_POL_SHIFT)                           /* 0x00000200 */
#define PWM_INTSTS_CH2_POL_SHIFT                           (10U)
#define PWM_INTSTS_CH2_POL_MASK                            (0x1U << PWM_INTSTS_CH2_POL_SHIFT)                           /* 0x00000400 */
#define PWM_INTSTS_CH3_POL_SHIFT                           (11U)
#define PWM_INTSTS_CH3_POL_MASK                            (0x1U << PWM_INTSTS_CH3_POL_SHIFT)                           /* 0x00000800 */
/* INT_EN */
#define PWM_INT_EN_OFFSET                                  (0x44U)
#define PWM_INT_EN_CH0_INT_EN_SHIFT                        (0U)
#define PWM_INT_EN_CH0_INT_EN_MASK                         (0x1U << PWM_INT_EN_CH0_INT_EN_SHIFT)                        /* 0x00000001 */
#define PWM_INT_EN_CH1_INT_EN_SHIFT                        (1U)
#define PWM_INT_EN_CH1_INT_EN_MASK                         (0x1U << PWM_INT_EN_CH1_INT_EN_SHIFT)                        /* 0x00000002 */
#define PWM_INT_EN_CH2_INT_EN_SHIFT                        (2U)
#define PWM_INT_EN_CH2_INT_EN_MASK                         (0x1U << PWM_INT_EN_CH2_INT_EN_SHIFT)                        /* 0x00000004 */
#define PWM_INT_EN_CH3_INT_EN_SHIFT                        (3U)
#define PWM_INT_EN_CH3_INT_EN_MASK                         (0x1U << PWM_INT_EN_CH3_INT_EN_SHIFT)                        /* 0x00000008 */
#define PWM_INT_EN_CH0_PWR_INT_EN_SHIFT                    (4U)
#define PWM_INT_EN_CH0_PWR_INT_EN_MASK                     (0x1U << PWM_INT_EN_CH0_PWR_INT_EN_SHIFT)                    /* 0x00000010 */
#define PWM_INT_EN_CH1_PWR_INT_EN_SHIFT                    (5U)
#define PWM_INT_EN_CH1_PWR_INT_EN_MASK                     (0x1U << PWM_INT_EN_CH1_PWR_INT_EN_SHIFT)                    /* 0x00000020 */
#define PWM_INT_EN_CH2_PWR_INT_EN_SHIFT                    (6U)
#define PWM_INT_EN_CH2_PWR_INT_EN_MASK                     (0x1U << PWM_INT_EN_CH2_PWR_INT_EN_SHIFT)                    /* 0x00000040 */
#define PWM_INT_EN_CH3_PWR_INT_EN_SHIFT                    (7U)
#define PWM_INT_EN_CH3_PWR_INT_EN_MASK                     (0x1U << PWM_INT_EN_CH3_PWR_INT_EN_SHIFT)                    /* 0x00000080 */
/* FIFO_CTRL */
#define PWM_FIFO_CTRL_OFFSET                               (0x50U)
#define PWM_FIFO_CTRL_FIFO_MODE_SEL_SHIFT                  (0U)
#define PWM_FIFO_CTRL_FIFO_MODE_SEL_MASK                   (0x1U << PWM_FIFO_CTRL_FIFO_MODE_SEL_SHIFT)                  /* 0x00000001 */
#define PWM_FIFO_CTRL_FULL_INT_EN_SHIFT                    (1U)
#define PWM_FIFO_CTRL_FULL_INT_EN_MASK                     (0x1U << PWM_FIFO_CTRL_FULL_INT_EN_SHIFT)                    /* 0x00000002 */
#define PWM_FIFO_CTRL_OVERFLOW_INT_EN_SHIFT                (2U)
#define PWM_FIFO_CTRL_OVERFLOW_INT_EN_MASK                 (0x1U << PWM_FIFO_CTRL_OVERFLOW_INT_EN_SHIFT)                /* 0x00000004 */
#define PWM_FIFO_CTRL_WATERMARK_INT_EN_SHIFT               (3U)
#define PWM_FIFO_CTRL_WATERMARK_INT_EN_MASK                (0x1U << PWM_FIFO_CTRL_WATERMARK_INT_EN_SHIFT)               /* 0x00000008 */
#define PWM_FIFO_CTRL_ALMOST_FULL_WATERMARK_SHIFT          (4U)
#define PWM_FIFO_CTRL_ALMOST_FULL_WATERMARK_MASK           (0x7U << PWM_FIFO_CTRL_ALMOST_FULL_WATERMARK_SHIFT)          /* 0x00000070 */
#define PWM_FIFO_CTRL_DMA_MODE_EN_SHIFT                    (8U)
#define PWM_FIFO_CTRL_DMA_MODE_EN_MASK                     (0x1U << PWM_FIFO_CTRL_DMA_MODE_EN_SHIFT)                    /* 0x00000100 */
#define PWM_FIFO_CTRL_TIMEOUT_EN_SHIFT                     (9U)
#define PWM_FIFO_CTRL_TIMEOUT_EN_MASK                      (0x1U << PWM_FIFO_CTRL_TIMEOUT_EN_SHIFT)                     /* 0x00000200 */
#define PWM_FIFO_CTRL_DMA_CH_SEL_EN_SHIFT                  (10U)
#define PWM_FIFO_CTRL_DMA_CH_SEL_EN_MASK                   (0x1U << PWM_FIFO_CTRL_DMA_CH_SEL_EN_SHIFT)                  /* 0x00000400 */
#define PWM_FIFO_CTRL_DMA_CH_SEL_SHIFT                     (12U)
#define PWM_FIFO_CTRL_DMA_CH_SEL_MASK                      (0x3U << PWM_FIFO_CTRL_DMA_CH_SEL_SHIFT)                     /* 0x00003000 */
/* FIFO_INTSTS */
#define PWM_FIFO_INTSTS_OFFSET                             (0x54U)
#define PWM_FIFO_INTSTS_FIFO_FULL_INTSTS_SHIFT             (0U)
#define PWM_FIFO_INTSTS_FIFO_FULL_INTSTS_MASK              (0x1U << PWM_FIFO_INTSTS_FIFO_FULL_INTSTS_SHIFT)             /* 0x00000001 */
#define PWM_FIFO_INTSTS_FIFO_OVERFLOW_INTSTS_SHIFT         (1U)
#define PWM_FIFO_INTSTS_FIFO_OVERFLOW_INTSTS_MASK          (0x1U << PWM_FIFO_INTSTS_FIFO_OVERFLOW_INTSTS_SHIFT)         /* 0x00000002 */
#define PWM_FIFO_INTSTS_FIFO_WATERMARK_FULL_INTSTS_SHIFT   (2U)
#define PWM_FIFO_INTSTS_FIFO_WATERMARK_FULL_INTSTS_MASK    (0x1U << PWM_FIFO_INTSTS_FIFO_WATERMARK_FULL_INTSTS_SHIFT)   /* 0x00000004 */
#define PWM_FIFO_INTSTS_TIMIEOUT_INTSTS_SHIFT              (3U)
#define PWM_FIFO_INTSTS_TIMIEOUT_INTSTS_MASK               (0x1U << PWM_FIFO_INTSTS_TIMIEOUT_INTSTS_SHIFT)              /* 0x00000008 */
#define PWM_FIFO_INTSTS_FIFO_EMPTY_STATUS_SHIFT            (4U)
#define PWM_FIFO_INTSTS_FIFO_EMPTY_STATUS_MASK             (0x1U << PWM_FIFO_INTSTS_FIFO_EMPTY_STATUS_SHIFT)            /* 0x00000010 */
/* FIFO_TOUTTHR */
#define PWM_FIFO_TOUTTHR_OFFSET                            (0x58U)
#define PWM_FIFO_TOUTTHR_TIMEOUT_THRESHOLD_SHIFT           (0U)
#define PWM_FIFO_TOUTTHR_TIMEOUT_THRESHOLD_MASK            (0xFFFFFU << PWM_FIFO_TOUTTHR_TIMEOUT_THRESHOLD_SHIFT)       /* 0x000FFFFF */
/* VERSION_ID */
#define PWM_VERSION_ID_OFFSET                              (0x5CU)
#define PWM_VERSION_ID                                     (0x3120B34U)
#define PWM_VERSION_ID_SVN_VERSION_SHIFT                   (0U)
#define PWM_VERSION_ID_SVN_VERSION_MASK                    (0xFFFFU << PWM_VERSION_ID_SVN_VERSION_SHIFT)                /* 0x0000FFFF */
#define PWM_VERSION_ID_MINOR_VERSION_SHIFT                 (16U)
#define PWM_VERSION_ID_MINOR_VERSION_MASK                  (0xFFU << PWM_VERSION_ID_MINOR_VERSION_SHIFT)                /* 0x00FF0000 */
#define PWM_VERSION_ID_MAIN_VERSION_SHIFT                  (24U)
#define PWM_VERSION_ID_MAIN_VERSION_MASK                   (0xFFU << PWM_VERSION_ID_MAIN_VERSION_SHIFT)                 /* 0xFF000000 */
/* FIFO */
#define PWM_FIFO_OFFSET                                    (0x60U)
#define PWM_FIFO                                           (0x0U)
#define PWM_FIFO_CYCLE_CNT_SHIFT                           (0U)
#define PWM_FIFO_CYCLE_CNT_MASK                            (0x7FFFFFFFU << PWM_FIFO_CYCLE_CNT_SHIFT)                    /* 0x7FFFFFFF */
#define PWM_FIFO_POL_SHIFT                                 (31U)
#define PWM_FIFO_POL_MASK                                  (0x1U << PWM_FIFO_POL_SHIFT)                                 /* 0x80000000 */
/* PWRMATCH_CTRL */
#define PWM_PWRMATCH_CTRL_OFFSET                           (0x80U)
#define PWM_PWRMATCH_CTRL_CH3_PWRKEY_ENABLE_SHIFT          (3U)
#define PWM_PWRMATCH_CTRL_CH3_PWRKEY_ENABLE_MASK           (0x1U << PWM_PWRMATCH_CTRL_CH3_PWRKEY_ENABLE_SHIFT)          /* 0x00000008 */
#define PWM_PWRMATCH_CTRL_CH3_PWRKEY_POLARITY_SHIFT        (7U)
#define PWM_PWRMATCH_CTRL_CH3_PWRKEY_POLARITY_MASK         (0x1U << PWM_PWRMATCH_CTRL_CH3_PWRKEY_POLARITY_SHIFT)        /* 0x00000080 */
#define PWM_PWRMATCH_CTRL_CH3_PWRKEY_CAPTURE_CTRL_SHIFT    (11U)
#define PWM_PWRMATCH_CTRL_CH3_PWRKEY_CAPTURE_CTRL_MASK     (0x1U << PWM_PWRMATCH_CTRL_CH3_PWRKEY_CAPTURE_CTRL_SHIFT)    /* 0x00000800 */
#define PWM_PWRMATCH_CTRL_CH3_PWRKEY_INT_CTRL_SHIFT        (15U)
#define PWM_PWRMATCH_CTRL_CH3_PWRKEY_INT_CTRL_MASK         (0x1U << PWM_PWRMATCH_CTRL_CH3_PWRKEY_INT_CTRL_SHIFT)        /* 0x00008000 */
/* PWRMATCH_LPRE */
#define PWM_PWRMATCH_LPRE_OFFSET                           (0x84U)
#define PWM_PWRMATCH_LPRE_CNT_MIN_SHIFT                    (0U)
#define PWM_PWRMATCH_LPRE_CNT_MIN_MASK                     (0xFFFFU << PWM_PWRMATCH_LPRE_CNT_MIN_SHIFT)                 /* 0x0000FFFF */
#define PWM_PWRMATCH_LPRE_CNT_MAX_SHIFT                    (16U)
#define PWM_PWRMATCH_LPRE_CNT_MAX_MASK                     (0xFFFFU << PWM_PWRMATCH_LPRE_CNT_MAX_SHIFT)                 /* 0xFFFF0000 */
/* PWRMATCH_HPRE */
#define PWM_PWRMATCH_HPRE_OFFSET                           (0x88U)
#define PWM_PWRMATCH_HPRE_CNT_MIN_SHIFT                    (0U)
#define PWM_PWRMATCH_HPRE_CNT_MIN_MASK                     (0xFFFFU << PWM_PWRMATCH_HPRE_CNT_MIN_SHIFT)                 /* 0x0000FFFF */
#define PWM_PWRMATCH_HPRE_CNT_MAX_SHIFT                    (16U)
#define PWM_PWRMATCH_HPRE_CNT_MAX_MASK                     (0xFFFFU << PWM_PWRMATCH_HPRE_CNT_MAX_SHIFT)                 /* 0xFFFF0000 */
/* PWRMATCH_LD */
#define PWM_PWRMATCH_LD_OFFSET                             (0x8CU)
#define PWM_PWRMATCH_LD_CNT_MIN_SHIFT                      (0U)
#define PWM_PWRMATCH_LD_CNT_MIN_MASK                       (0xFFFFU << PWM_PWRMATCH_LD_CNT_MIN_SHIFT)                   /* 0x0000FFFF */
#define PWM_PWRMATCH_LD_CNT_MAX_SHIFT                      (16U)
#define PWM_PWRMATCH_LD_CNT_MAX_MASK                       (0xFFFFU << PWM_PWRMATCH_LD_CNT_MAX_SHIFT)                   /* 0xFFFF0000 */
/* PWRMATCH_HD_ZERO */
#define PWM_PWRMATCH_HD_ZERO_OFFSET                        (0x90U)
#define PWM_PWRMATCH_HD_ZERO_CNT_MIN_SHIFT                 (0U)
#define PWM_PWRMATCH_HD_ZERO_CNT_MIN_MASK                  (0xFFFFU << PWM_PWRMATCH_HD_ZERO_CNT_MIN_SHIFT)              /* 0x0000FFFF */
#define PWM_PWRMATCH_HD_ZERO_CNT_MAX_SHIFT                 (16U)
#define PWM_PWRMATCH_HD_ZERO_CNT_MAX_MASK                  (0xFFFFU << PWM_PWRMATCH_HD_ZERO_CNT_MAX_SHIFT)              /* 0xFFFF0000 */
/* PWRMATCH_HD_ONE */
#define PWM_PWRMATCH_HD_ONE_OFFSET                         (0x94U)
#define PWM_PWRMATCH_HD_ONE_CNT_MIN_SHIFT                  (0U)
#define PWM_PWRMATCH_HD_ONE_CNT_MIN_MASK                   (0xFFFFU << PWM_PWRMATCH_HD_ONE_CNT_MIN_SHIFT)               /* 0x0000FFFF */
#define PWM_PWRMATCH_HD_ONE_CNT_MAX_SHIFT                  (16U)
#define PWM_PWRMATCH_HD_ONE_CNT_MAX_MASK                   (0xFFFFU << PWM_PWRMATCH_HD_ONE_CNT_MAX_SHIFT)               /* 0xFFFF0000 */
/* PWRMATCH_VALUE0 */
#define PWM_PWRMATCH_VALUE0_OFFSET                         (0x98U)
#define PWM_PWRMATCH_VALUE0_PWRKEY_MATCH_VALUE0_SHIFT      (0U)
#define PWM_PWRMATCH_VALUE0_PWRKEY_MATCH_VALUE0_MASK       (0xFFFFFFFFU << PWM_PWRMATCH_VALUE0_PWRKEY_MATCH_VALUE0_SHIFT) /* 0xFFFFFFFF */
/* PWRMATCH_VALUE1 */
#define PWM_PWRMATCH_VALUE1_OFFSET                         (0x9CU)
#define PWM_PWRMATCH_VALUE1_PWRKEY_MATCH_VALUE1_SHIFT      (0U)
#define PWM_PWRMATCH_VALUE1_PWRKEY_MATCH_VALUE1_MASK       (0xFFFFFFFFU << PWM_PWRMATCH_VALUE1_PWRKEY_MATCH_VALUE1_SHIFT) /* 0xFFFFFFFF */
/* PWRMATCH_VALUE2 */
#define PWM_PWRMATCH_VALUE2_OFFSET                         (0xA0U)
#define PWM_PWRMATCH_VALUE2_PWRKEY_MATCH_VALUE2_SHIFT      (0U)
#define PWM_PWRMATCH_VALUE2_PWRKEY_MATCH_VALUE2_MASK       (0xFFFFFFFFU << PWM_PWRMATCH_VALUE2_PWRKEY_MATCH_VALUE2_SHIFT) /* 0xFFFFFFFF */
/* PWRMATCH_VALUE3 */
#define PWM_PWRMATCH_VALUE3_OFFSET                         (0xA4U)
#define PWM_PWRMATCH_VALUE3_PWRKEY_MATCH_VALUE3_SHIFT      (0U)
#define PWM_PWRMATCH_VALUE3_PWRKEY_MATCH_VALUE3_MASK       (0xFFFFFFFFU << PWM_PWRMATCH_VALUE3_PWRKEY_MATCH_VALUE3_SHIFT) /* 0xFFFFFFFF */
/* PWRMATCH_VALUE4 */
#define PWM_PWRMATCH_VALUE4_OFFSET                         (0xA8U)
#define PWM_PWRMATCH_VALUE4_PWRKEY_MATCH_VALUE4_SHIFT      (0U)
#define PWM_PWRMATCH_VALUE4_PWRKEY_MATCH_VALUE4_MASK       (0xFFFFFFFFU << PWM_PWRMATCH_VALUE4_PWRKEY_MATCH_VALUE4_SHIFT) /* 0xFFFFFFFF */
/* PWRMATCH_VALUE5 */
#define PWM_PWRMATCH_VALUE5_OFFSET                         (0xACU)
#define PWM_PWRMATCH_VALUE5_PWRKEY_MATCH_VALUE5_SHIFT      (0U)
#define PWM_PWRMATCH_VALUE5_PWRKEY_MATCH_VALUE5_MASK       (0xFFFFFFFFU << PWM_PWRMATCH_VALUE5_PWRKEY_MATCH_VALUE5_SHIFT) /* 0xFFFFFFFF */
/* PWRMATCH_VALUE6 */
#define PWM_PWRMATCH_VALUE6_OFFSET                         (0xB0U)
#define PWM_PWRMATCH_VALUE6_PWRKEY_MATCH_VALUE6_SHIFT      (0U)
#define PWM_PWRMATCH_VALUE6_PWRKEY_MATCH_VALUE6_MASK       (0xFFFFFFFFU << PWM_PWRMATCH_VALUE6_PWRKEY_MATCH_VALUE6_SHIFT) /* 0xFFFFFFFF */
/* PWRMATCH_VALUE7 */
#define PWM_PWRMATCH_VALUE7_OFFSET                         (0xB4U)
#define PWM_PWRMATCH_VALUE7_PWRKEY_MATCH_VALUE7_SHIFT      (0U)
#define PWM_PWRMATCH_VALUE7_PWRKEY_MATCH_VALUE7_MASK       (0xFFFFFFFFU << PWM_PWRMATCH_VALUE7_PWRKEY_MATCH_VALUE7_SHIFT) /* 0xFFFFFFFF */
/* PWRMATCH_VALUE8 */
#define PWM_PWRMATCH_VALUE8_OFFSET                         (0xB8U)
#define PWM_PWRMATCH_VALUE8_PWRKEY_MATCH_VALUE8_SHIFT      (0U)
#define PWM_PWRMATCH_VALUE8_PWRKEY_MATCH_VALUE8_MASK       (0xFFFFFFFFU << PWM_PWRMATCH_VALUE8_PWRKEY_MATCH_VALUE8_SHIFT) /* 0xFFFFFFFF */
/* PWRMATCH_VALUE9 */
#define PWM_PWRMATCH_VALUE9_OFFSET                         (0xBCU)
#define PWM_PWRMATCH_VALUE9_PWRKEY_MATCH_VALUE9_SHIFT      (0U)
#define PWM_PWRMATCH_VALUE9_PWRKEY_MATCH_VALUE9_MASK       (0xFFFFFFFFU << PWM_PWRMATCH_VALUE9_PWRKEY_MATCH_VALUE9_SHIFT) /* 0xFFFFFFFF */
/* PWM3_PWRCAPTURE_VALUE */
#define PWM_PWM3_PWRCAPTURE_VALUE_OFFSET                   (0xCCU)
#define PWM_PWM3_PWRCAPTURE_VALUE                          (0x0U)
#define PWM_PWM3_PWRCAPTURE_VALUE_PWRKEY_CAPTURE_VALUE_SHIFT (0U)
#define PWM_PWM3_PWRCAPTURE_VALUE_PWRKEY_CAPTURE_VALUE_MASK (0xFFFFFFFFU << PWM_PWM3_PWRCAPTURE_VALUE_PWRKEY_CAPTURE_VALUE_SHIFT) /* 0xFFFFFFFF */
/* FILTER_CTRL */
#define PWM_FILTER_CTRL_OFFSET                             (0xD0U)
#define PWM_FILTER_CTRL_CH0_INPUT_FILTER_ENABLE_SHIFT      (0U)
#define PWM_FILTER_CTRL_CH0_INPUT_FILTER_ENABLE_MASK       (0x1U << PWM_FILTER_CTRL_CH0_INPUT_FILTER_ENABLE_SHIFT)      /* 0x00000001 */
#define PWM_FILTER_CTRL_CH1_INPUT_FILTER_ENABLE_SHIFT      (1U)
#define PWM_FILTER_CTRL_CH1_INPUT_FILTER_ENABLE_MASK       (0x1U << PWM_FILTER_CTRL_CH1_INPUT_FILTER_ENABLE_SHIFT)      /* 0x00000002 */
#define PWM_FILTER_CTRL_CH2_INPUT_FILTER_ENABLE_SHIFT      (2U)
#define PWM_FILTER_CTRL_CH2_INPUT_FILTER_ENABLE_MASK       (0x1U << PWM_FILTER_CTRL_CH2_INPUT_FILTER_ENABLE_SHIFT)      /* 0x00000004 */
#define PWM_FILTER_CTRL_CH3_INPUT_FILTER_ENABLE_SHIFT      (3U)
#define PWM_FILTER_CTRL_CH3_INPUT_FILTER_ENABLE_MASK       (0x1U << PWM_FILTER_CTRL_CH3_INPUT_FILTER_ENABLE_SHIFT)      /* 0x00000008 */
#define PWM_FILTER_CTRL_FILTER_NUMBER_SHIFT                (4U)
#define PWM_FILTER_CTRL_FILTER_NUMBER_MASK                 (0x1FFU << PWM_FILTER_CTRL_FILTER_NUMBER_SHIFT)              /* 0x00001FF0 */
#define PWM_FILTER_CTRL_CH0_AND_CH3_SWITCH_EN_SHIFT        (16U)
#define PWM_FILTER_CTRL_CH0_AND_CH3_SWITCH_EN_MASK         (0x1U << PWM_FILTER_CTRL_CH0_AND_CH3_SWITCH_EN_SHIFT)        /* 0x00010000 */
#define PWM_FILTER_CTRL_CH1_AND_CH3_SWITCH_EN_SHIFT        (17U)
#define PWM_FILTER_CTRL_CH1_AND_CH3_SWITCH_EN_MASK         (0x1U << PWM_FILTER_CTRL_CH1_AND_CH3_SWITCH_EN_SHIFT)        /* 0x00020000 */
#define PWM_FILTER_CTRL_CH2_AND_CH3_SWITCH_EN_SHIFT        (18U)
#define PWM_FILTER_CTRL_CH2_AND_CH3_SWITCH_EN_MASK         (0x1U << PWM_FILTER_CTRL_CH2_AND_CH3_SWITCH_EN_SHIFT)        /* 0x00040000 */
#define PWM_FILTER_CTRL_PWM0_GLOBAL_LOCK_SHIFT             (20U)
#define PWM_FILTER_CTRL_PWM0_GLOBAL_LOCK_MASK              (0x1U << PWM_FILTER_CTRL_PWM0_GLOBAL_LOCK_SHIFT)             /* 0x00100000 */
#define PWM_FILTER_CTRL_PWM1_GLOBAL_LOCK_SHIFT             (21U)
#define PWM_FILTER_CTRL_PWM1_GLOBAL_LOCK_MASK              (0x1U << PWM_FILTER_CTRL_PWM1_GLOBAL_LOCK_SHIFT)             /* 0x00200000 */
#define PWM_FILTER_CTRL_PWM2_GLOBAL_LOCK_SHIFT             (22U)
#define PWM_FILTER_CTRL_PWM2_GLOBAL_LOCK_MASK              (0x1U << PWM_FILTER_CTRL_PWM2_GLOBAL_LOCK_SHIFT)             /* 0x00400000 */
#define PWM_FILTER_CTRL_PWM3_GLOBAL_LOCK_SHIFT             (23U)
#define PWM_FILTER_CTRL_PWM3_GLOBAL_LOCK_MASK              (0x1U << PWM_FILTER_CTRL_PWM3_GLOBAL_LOCK_SHIFT)             /* 0x00800000 */
/* PWM0_OFFSET */
#define PWM_PWM0_OFFSET_OFFSET                             (0xE0U)
#define PWM_PWM0_OFFSET_CHANNEL_OUTPUT_OFFSET_SHIFT        (0U)
#define PWM_PWM0_OFFSET_CHANNEL_OUTPUT_OFFSET_MASK         (0xFFFFFFFFU << PWM_PWM0_OFFSET_CHANNEL_OUTPUT_OFFSET_SHIFT) /* 0xFFFFFFFF */
/* PWM1_OFFSET */
#define PWM_PWM1_OFFSET_OFFSET                             (0xE4U)
#define PWM_PWM1_OFFSET_CHANNEL_OUTPUT_OFFSET_SHIFT        (0U)
#define PWM_PWM1_OFFSET_CHANNEL_OUTPUT_OFFSET_MASK         (0xFFFFFFFFU << PWM_PWM1_OFFSET_CHANNEL_OUTPUT_OFFSET_SHIFT) /* 0xFFFFFFFF */
/* PWM2_OFFSET */
#define PWM_PWM2_OFFSET_OFFSET                             (0xE8U)
#define PWM_PWM2_OFFSET_CHANNEL_OUTPUT_OFFSET_SHIFT        (0U)
#define PWM_PWM2_OFFSET_CHANNEL_OUTPUT_OFFSET_MASK         (0xFFFFFFFFU << PWM_PWM2_OFFSET_CHANNEL_OUTPUT_OFFSET_SHIFT) /* 0xFFFFFFFF */
/* PWM3_OFFSET */
#define PWM_PWM3_OFFSET_OFFSET                             (0xECU)
#define PWM_PWM3_OFFSET_CHANNEL_OUTPUT_OFFSET_SHIFT        (0U)
#define PWM_PWM3_OFFSET_CHANNEL_OUTPUT_OFFSET_MASK         (0xFFFFFFFFU << PWM_PWM3_OFFSET_CHANNEL_OUTPUT_OFFSET_SHIFT) /* 0xFFFFFFFF */
/* IR_TRANS_CTRL */
#define PWM_IR_TRANS_CTRL_OFFSET                           (0x100U)
#define PWM_IR_TRANS_CTRL_IR_TRANS_OUT_ENABLE_SHIFT        (0U)
#define PWM_IR_TRANS_CTRL_IR_TRANS_OUT_ENABLE_MASK         (0x1U << PWM_IR_TRANS_CTRL_IR_TRANS_OUT_ENABLE_SHIFT)        /* 0x00000001 */
#define PWM_IR_TRANS_CTRL_IR_STATE_IDLE_SHIFT              (1U)
#define PWM_IR_TRANS_CTRL_IR_STATE_IDLE_MASK               (0x1U << PWM_IR_TRANS_CTRL_IR_STATE_IDLE_SHIFT)              /* 0x00000002 */
#define PWM_IR_TRANS_CTRL_IR_TRANS_FORMAT_SHIFT            (4U)
#define PWM_IR_TRANS_CTRL_IR_TRANS_FORMAT_MASK             (0xFU << PWM_IR_TRANS_CTRL_IR_TRANS_FORMAT_SHIFT)            /* 0x000000F0 */
#define PWM_IR_TRANS_CTRL_IR_TRANS_LENGTH_WITHIN_ONE_FRAME_SHIFT (8U)
#define PWM_IR_TRANS_CTRL_IR_TRANS_LENGTH_WITHIN_ONE_FRAME_MASK (0x1FU << PWM_IR_TRANS_CTRL_IR_TRANS_LENGTH_WITHIN_ONE_FRAME_SHIFT) /* 0x00001F00 */
/* IR_TRANS_PRE */
#define PWM_IR_TRANS_PRE_OFFSET                            (0x104U)
#define PWM_IR_TRANS_PRE_IR_TRANS_OUT_LOW_PRELOAD_SHIFT    (0U)
#define PWM_IR_TRANS_PRE_IR_TRANS_OUT_LOW_PRELOAD_MASK     (0xFFFFU << PWM_IR_TRANS_PRE_IR_TRANS_OUT_LOW_PRELOAD_SHIFT) /* 0x0000FFFF */
#define PWM_IR_TRANS_PRE_IR_TRANS_OUT_HIGH_PRELOAD_SHIFT   (16U)
#define PWM_IR_TRANS_PRE_IR_TRANS_OUT_HIGH_PRELOAD_MASK    (0xFFFFU << PWM_IR_TRANS_PRE_IR_TRANS_OUT_HIGH_PRELOAD_SHIFT) /* 0xFFFF0000 */
/* IR_TRANS_SPRE */
#define PWM_IR_TRANS_SPRE_OFFSET                           (0x108U)
#define PWM_IR_TRANS_SPRE_IR_TRANS_OUT_LOW_SIMPLE_PRELOAD_SHIFT (0U)
#define PWM_IR_TRANS_SPRE_IR_TRANS_OUT_LOW_SIMPLE_PRELOAD_MASK (0xFFFFU << PWM_IR_TRANS_SPRE_IR_TRANS_OUT_LOW_SIMPLE_PRELOAD_SHIFT) /* 0x0000FFFF */
/* IR_TRANS_LD */
#define PWM_IR_TRANS_LD_OFFSET                             (0x10CU)
#define PWM_IR_TRANS_LD_IR_TRANS_OUT_DATA_LOW_PERIOD_SHIFT (0U)
#define PWM_IR_TRANS_LD_IR_TRANS_OUT_DATA_LOW_PERIOD_MASK  (0xFFFFU << PWM_IR_TRANS_LD_IR_TRANS_OUT_DATA_LOW_PERIOD_SHIFT) /* 0x0000FFFF */
/* IR_TRANS_HD */
#define PWM_IR_TRANS_HD_OFFSET                             (0x110U)
#define PWM_IR_TRANS_HD_IR_TRANS_OUT_HIGH_PERIOD_FOR_ZERO_SHIFT (0U)
#define PWM_IR_TRANS_HD_IR_TRANS_OUT_HIGH_PERIOD_FOR_ZERO_MASK (0xFFFFU << PWM_IR_TRANS_HD_IR_TRANS_OUT_HIGH_PERIOD_FOR_ZERO_SHIFT) /* 0x0000FFFF */
#define PWM_IR_TRANS_HD_IR_TRANS_OUT_HIGH_PERIOD_FOR_ONE_SHIFT (16U)
#define PWM_IR_TRANS_HD_IR_TRANS_OUT_HIGH_PERIOD_FOR_ONE_MASK (0xFFFFU << PWM_IR_TRANS_HD_IR_TRANS_OUT_HIGH_PERIOD_FOR_ONE_SHIFT) /* 0xFFFF0000 */
/* IR_TRANS_BURST_FRAME */
#define PWM_IR_TRANS_BURST_FRAME_OFFSET                    (0x114U)
#define PWM_IR_TRANS_BURST_FRAME_IR_TRANS_OUT_FRAME_PERIOD_SHIFT (0U)
#define PWM_IR_TRANS_BURST_FRAME_IR_TRANS_OUT_FRAME_PERIOD_MASK (0x3FFFFU << PWM_IR_TRANS_BURST_FRAME_IR_TRANS_OUT_FRAME_PERIOD_SHIFT) /* 0x0003FFFF */
#define PWM_IR_TRANS_BURST_FRAME_IR_TRANS_OUT_BURST_PERIOD_SHIFT (20U)
#define PWM_IR_TRANS_BURST_FRAME_IR_TRANS_OUT_BURST_PERIOD_MASK (0x3FFU << PWM_IR_TRANS_BURST_FRAME_IR_TRANS_OUT_BURST_PERIOD_SHIFT) /* 0x3FF00000 */
/* IR_TRANS_DATA_VALUE */
#define PWM_IR_TRANS_DATA_VALUE_OFFSET                     (0x118U)
#define PWM_IR_TRANS_DATA_VALUE_IR_TRANS_OUT_VALUE_SHIFT   (0U)
#define PWM_IR_TRANS_DATA_VALUE_IR_TRANS_OUT_VALUE_MASK    (0xFFFFFFFFU << PWM_IR_TRANS_DATA_VALUE_IR_TRANS_OUT_VALUE_SHIFT) /* 0xFFFFFFFF */
/******************************************WDT*******************************************/
/* CR */
#define WDT_CR_OFFSET                                      (0x0U)
#define WDT_CR_EN_SHIFT                                    (0U)
#define WDT_CR_EN_MASK                                     (0x1U << WDT_CR_EN_SHIFT)                                    /* 0x00000001 */
#define WDT_CR_RESP_MODE_SHIFT                             (1U)
#define WDT_CR_RESP_MODE_MASK                              (0x1U << WDT_CR_RESP_MODE_SHIFT)                             /* 0x00000002 */
#define WDT_CR_RST_PLUSE_LENGTH_SHIFT                      (2U)
#define WDT_CR_RST_PLUSE_LENGTH_MASK                       (0x7U << WDT_CR_RST_PLUSE_LENGTH_SHIFT)                      /* 0x0000001C */
/* TORR */
#define WDT_TORR_OFFSET                                    (0x4U)
#define WDT_TORR_TIMEOUT_PERIOD_SHIFT                      (0U)
#define WDT_TORR_TIMEOUT_PERIOD_MASK                       (0xFU << WDT_TORR_TIMEOUT_PERIOD_SHIFT)                      /* 0x0000000F */
/* CCVR */
#define WDT_CCVR_OFFSET                                    (0x8U)
#define WDT_CCVR                                           (0xFFFFU)
#define WDT_CCVR_CUR_CNT_SHIFT                             (0U)
#define WDT_CCVR_CUR_CNT_MASK                              (0xFFFFFFFFU << WDT_CCVR_CUR_CNT_SHIFT)                      /* 0xFFFFFFFF */
/* CRR */
#define WDT_CRR_OFFSET                                     (0xCU)
#define WDT_CRR_CNT_RESTART_SHIFT                          (0U)
#define WDT_CRR_CNT_RESTART_MASK                           (0xFFU << WDT_CRR_CNT_RESTART_SHIFT)                         /* 0x000000FF */
/* STAT */
#define WDT_STAT_OFFSET                                    (0x10U)
#define WDT_STAT                                           (0x0U)
#define WDT_STAT_STATUS_SHIFT                              (0U)
#define WDT_STAT_STATUS_MASK                               (0x1U << WDT_STAT_STATUS_SHIFT)                              /* 0x00000001 */
/* EOI */
#define WDT_EOI_OFFSET                                     (0x14U)
#define WDT_EOI                                            (0x0U)
#define WDT_EOI_INT_CLR_SHIFT                              (0U)
#define WDT_EOI_INT_CLR_MASK                               (0x1U << WDT_EOI_INT_CLR_SHIFT)                              /* 0x00000001 */
/******************************************GPIO******************************************/
/* SWPORT_DR_L */
#define GPIO_SWPORT_DR_L_OFFSET                            (0x0U)
#define GPIO_SWPORT_DR_L_SWPORT_DR_LOW_SHIFT               (0U)
#define GPIO_SWPORT_DR_L_SWPORT_DR_LOW_MASK                (0xFFFFU << GPIO_SWPORT_DR_L_SWPORT_DR_LOW_SHIFT)            /* 0x0000FFFF */
/* SWPORT_DR_H */
#define GPIO_SWPORT_DR_H_OFFSET                            (0x4U)
#define GPIO_SWPORT_DR_H_SWPORT_DR_HIGH_SHIFT              (0U)
#define GPIO_SWPORT_DR_H_SWPORT_DR_HIGH_MASK               (0xFFFFU << GPIO_SWPORT_DR_H_SWPORT_DR_HIGH_SHIFT)           /* 0x0000FFFF */
/* SWPORT_DDR_L */
#define GPIO_SWPORT_DDR_L_OFFSET                           (0x8U)
#define GPIO_SWPORT_DDR_L_SWPORT_DDR_LOW_SHIFT             (0U)
#define GPIO_SWPORT_DDR_L_SWPORT_DDR_LOW_MASK              (0xFFFFU << GPIO_SWPORT_DDR_L_SWPORT_DDR_LOW_SHIFT)          /* 0x0000FFFF */
/* SWPORT_DDR_H */
#define GPIO_SWPORT_DDR_H_OFFSET                           (0xCU)
#define GPIO_SWPORT_DDR_H_SWPORT_DDR_HIGH_SHIFT            (0U)
#define GPIO_SWPORT_DDR_H_SWPORT_DDR_HIGH_MASK             (0xFFFFU << GPIO_SWPORT_DDR_H_SWPORT_DDR_HIGH_SHIFT)         /* 0x0000FFFF */
/* INT_EN_L */
#define GPIO_INT_EN_L_OFFSET                               (0x10U)
#define GPIO_INT_EN_L_INT_EN_LOW_SHIFT                     (0U)
#define GPIO_INT_EN_L_INT_EN_LOW_MASK                      (0xFFFFU << GPIO_INT_EN_L_INT_EN_LOW_SHIFT)                  /* 0x0000FFFF */
/* INT_EN_H */
#define GPIO_INT_EN_H_OFFSET                               (0x14U)
#define GPIO_INT_EN_H_INT_EN_HIGH_SHIFT                    (0U)
#define GPIO_INT_EN_H_INT_EN_HIGH_MASK                     (0xFFFFU << GPIO_INT_EN_H_INT_EN_HIGH_SHIFT)                 /* 0x0000FFFF */
/* INT_MASK_L */
#define GPIO_INT_MASK_L_OFFSET                             (0x18U)
#define GPIO_INT_MASK_L_INT_MASK_LOW_SHIFT                 (0U)
#define GPIO_INT_MASK_L_INT_MASK_LOW_MASK                  (0xFFFFU << GPIO_INT_MASK_L_INT_MASK_LOW_SHIFT)              /* 0x0000FFFF */
/* INT_MASK_H */
#define GPIO_INT_MASK_H_OFFSET                             (0x1CU)
#define GPIO_INT_MASK_H_INT_MASK_HIGH_SHIFT                (0U)
#define GPIO_INT_MASK_H_INT_MASK_HIGH_MASK                 (0xFFFFU << GPIO_INT_MASK_H_INT_MASK_HIGH_SHIFT)             /* 0x0000FFFF */
/* INT_TYPE_L */
#define GPIO_INT_TYPE_L_OFFSET                             (0x20U)
#define GPIO_INT_TYPE_L_INT_TYPE_LOW_SHIFT                 (0U)
#define GPIO_INT_TYPE_L_INT_TYPE_LOW_MASK                  (0xFFFFU << GPIO_INT_TYPE_L_INT_TYPE_LOW_SHIFT)              /* 0x0000FFFF */
/* INT_TYPE_H */
#define GPIO_INT_TYPE_H_OFFSET                             (0x24U)
#define GPIO_INT_TYPE_H_INT_TYPE_HIGH_SHIFT                (0U)
#define GPIO_INT_TYPE_H_INT_TYPE_HIGH_MASK                 (0xFFFFU << GPIO_INT_TYPE_H_INT_TYPE_HIGH_SHIFT)             /* 0x0000FFFF */
/* INT_POLARITY_L */
#define GPIO_INT_POLARITY_L_OFFSET                         (0x28U)
#define GPIO_INT_POLARITY_L_INT_POLARITY_LOW_SHIFT         (0U)
#define GPIO_INT_POLARITY_L_INT_POLARITY_LOW_MASK          (0xFFFFU << GPIO_INT_POLARITY_L_INT_POLARITY_LOW_SHIFT)      /* 0x0000FFFF */
/* INT_POLARITY_H */
#define GPIO_INT_POLARITY_H_OFFSET                         (0x2CU)
#define GPIO_INT_POLARITY_H_INT_POLARITY_HIGH_SHIFT        (0U)
#define GPIO_INT_POLARITY_H_INT_POLARITY_HIGH_MASK         (0xFFFFU << GPIO_INT_POLARITY_H_INT_POLARITY_HIGH_SHIFT)     /* 0x0000FFFF */
/* INT_BOTHEDGE_L */
#define GPIO_INT_BOTHEDGE_L_OFFSET                         (0x30U)
#define GPIO_INT_BOTHEDGE_L_INT_BOTHEDGE_LOW_SHIFT         (0U)
#define GPIO_INT_BOTHEDGE_L_INT_BOTHEDGE_LOW_MASK          (0xFFFFU << GPIO_INT_BOTHEDGE_L_INT_BOTHEDGE_LOW_SHIFT)      /* 0x0000FFFF */
/* INT_BOTHEDGE_H */
#define GPIO_INT_BOTHEDGE_H_OFFSET                         (0x34U)
#define GPIO_INT_BOTHEDGE_H_INT_BOTHEDGE_HIGH_SHIFT        (0U)
#define GPIO_INT_BOTHEDGE_H_INT_BOTHEDGE_HIGH_MASK         (0xFFFFU << GPIO_INT_BOTHEDGE_H_INT_BOTHEDGE_HIGH_SHIFT)     /* 0x0000FFFF */
/* DEBOUNCE_L */
#define GPIO_DEBOUNCE_L_OFFSET                             (0x38U)
#define GPIO_DEBOUNCE_L_DEBOUNCE_LOW_SHIFT                 (0U)
#define GPIO_DEBOUNCE_L_DEBOUNCE_LOW_MASK                  (0xFFFFU << GPIO_DEBOUNCE_L_DEBOUNCE_LOW_SHIFT)              /* 0x0000FFFF */
/* DEBOUNCE_H */
#define GPIO_DEBOUNCE_H_OFFSET                             (0x3CU)
#define GPIO_DEBOUNCE_H_DEBOUNCE_HIGH_SHIFT                (0U)
#define GPIO_DEBOUNCE_H_DEBOUNCE_HIGH_MASK                 (0xFFFFU << GPIO_DEBOUNCE_H_DEBOUNCE_HIGH_SHIFT)             /* 0x0000FFFF */
/* DBCLK_DIV_EN_L */
#define GPIO_DBCLK_DIV_EN_L_OFFSET                         (0x40U)
#define GPIO_DBCLK_DIV_EN_L_DBCLK_DIV_EN_LOW_SHIFT         (0U)
#define GPIO_DBCLK_DIV_EN_L_DBCLK_DIV_EN_LOW_MASK          (0xFFFFU << GPIO_DBCLK_DIV_EN_L_DBCLK_DIV_EN_LOW_SHIFT)      /* 0x0000FFFF */
/* DBCLK_DIV_EN_H */
#define GPIO_DBCLK_DIV_EN_H_OFFSET                         (0x44U)
#define GPIO_DBCLK_DIV_EN_H_DBCLK_DIV_EN_HIGH_SHIFT        (0U)
#define GPIO_DBCLK_DIV_EN_H_DBCLK_DIV_EN_HIGH_MASK         (0xFFFFU << GPIO_DBCLK_DIV_EN_H_DBCLK_DIV_EN_HIGH_SHIFT)     /* 0x0000FFFF */
/* DBCLK_DIV_CON */
#define GPIO_DBCLK_DIV_CON_OFFSET                          (0x48U)
#define GPIO_DBCLK_DIV_CON_DBCLK_DIV_CON_SHIFT             (0U)
#define GPIO_DBCLK_DIV_CON_DBCLK_DIV_CON_MASK              (0xFFFFFFU << GPIO_DBCLK_DIV_CON_DBCLK_DIV_CON_SHIFT)        /* 0x00FFFFFF */
/* INT_STATUS */
#define GPIO_INT_STATUS_OFFSET                             (0x50U)
#define GPIO_INT_STATUS                                    (0x0U)
#define GPIO_INT_STATUS_INT_STATUS_SHIFT                   (0U)
#define GPIO_INT_STATUS_INT_STATUS_MASK                    (0xFFFFFFFFU << GPIO_INT_STATUS_INT_STATUS_SHIFT)            /* 0xFFFFFFFF */
/* INT_RAWSTATUS */
#define GPIO_INT_RAWSTATUS_OFFSET                          (0x58U)
#define GPIO_INT_RAWSTATUS                                 (0x0U)
#define GPIO_INT_RAWSTATUS_INT_RAWSTATUS_SHIFT             (0U)
#define GPIO_INT_RAWSTATUS_INT_RAWSTATUS_MASK              (0xFFFFFFFFU << GPIO_INT_RAWSTATUS_INT_RAWSTATUS_SHIFT)      /* 0xFFFFFFFF */
/* PORT_EOI_L */
#define GPIO_PORT_EOI_L_OFFSET                             (0x60U)
#define GPIO_PORT_EOI_L_PORT_EOI_LOW_SHIFT                 (0U)
#define GPIO_PORT_EOI_L_PORT_EOI_LOW_MASK                  (0xFFFFU << GPIO_PORT_EOI_L_PORT_EOI_LOW_SHIFT)              /* 0x0000FFFF */
/* PORT_EOI_H */
#define GPIO_PORT_EOI_H_OFFSET                             (0x64U)
#define GPIO_PORT_EOI_H_PORT_EOI_HIGH_SHIFT                (0U)
#define GPIO_PORT_EOI_H_PORT_EOI_HIGH_MASK                 (0xFFFFU << GPIO_PORT_EOI_H_PORT_EOI_HIGH_SHIFT)             /* 0x0000FFFF */
/* EXT_PORT */
#define GPIO_EXT_PORT_OFFSET                               (0x70U)
#define GPIO_EXT_PORT                                      (0x0U)
#define GPIO_EXT_PORT_EXT_PORT_SHIFT                       (0U)
#define GPIO_EXT_PORT_EXT_PORT_MASK                        (0xFFFFFFFFU << GPIO_EXT_PORT_EXT_PORT_SHIFT)                /* 0xFFFFFFFF */
/* VER_ID */
#define GPIO_VER_ID_OFFSET                                 (0x78U)
#define GPIO_VER_ID                                        (0x101157CU)
#define GPIO_VER_ID_VER_ID_SHIFT                           (0U)
#define GPIO_VER_ID_VER_ID_MASK                            (0xFFFFFFFFU << GPIO_VER_ID_VER_ID_SHIFT)                    /* 0xFFFFFFFF */
/* GPIO_REG_GROUP_L */
#define GPIO_GPIO_REG_GROUP_L_OFFSET                       (0x100U)
#define GPIO_GPIO_REG_GROUP_L_GPIO_REG_GROUP_LOW_SHIFT     (0U)
#define GPIO_GPIO_REG_GROUP_L_GPIO_REG_GROUP_LOW_MASK      (0xFFFFU << GPIO_GPIO_REG_GROUP_L_GPIO_REG_GROUP_LOW_SHIFT)  /* 0x0000FFFF */
/* GPIO_REG_GROUP_H */
#define GPIO_GPIO_REG_GROUP_H_OFFSET                       (0x104U)
#define GPIO_GPIO_REG_GROUP_H_GPIO_REG_GROUP_HIGH_SHIFT    (0U)
#define GPIO_GPIO_REG_GROUP_H_GPIO_REG_GROUP_HIGH_MASK     (0xFFFFU << GPIO_GPIO_REG_GROUP_H_GPIO_REG_GROUP_HIGH_SHIFT) /* 0x0000FFFF */
/* GPIO_VIRTUAL_EN */
#define GPIO_GPIO_VIRTUAL_EN_OFFSET                        (0x108U)
#define GPIO_GPIO_VIRTUAL_EN_GPIO_VIRTUAL_EN_SHIFT         (0U)
#define GPIO_GPIO_VIRTUAL_EN_GPIO_VIRTUAL_EN_MASK          (0x1U << GPIO_GPIO_VIRTUAL_EN_GPIO_VIRTUAL_EN_SHIFT)         /* 0x00000001 */
/***************************************GPIO0_IOC****************************************/
/* GPIO0A_IOMUX_SEL_L */
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_L_OFFSET                (0x0U)
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A0_SEL_SHIFT     (0U)
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A0_SEL_MASK      (0x7U << GPIO0_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A0_SEL_SHIFT)     /* 0x00000007 */
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A1_SEL_SHIFT     (4U)
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A1_SEL_MASK      (0x7U << GPIO0_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A1_SEL_SHIFT)     /* 0x00000070 */
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A2_SEL_SHIFT     (8U)
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A2_SEL_MASK      (0x7U << GPIO0_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A2_SEL_SHIFT)     /* 0x00000700 */
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A3_SEL_SHIFT     (12U)
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A3_SEL_MASK      (0x7U << GPIO0_IOC_GPIO0A_IOMUX_SEL_L_GPIO0A3_SEL_SHIFT)     /* 0x00007000 */
/* GPIO0A_IOMUX_SEL_H */
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_H_OFFSET                (0x4U)
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A4_SEL_SHIFT     (0U)
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A4_SEL_MASK      (0x7U << GPIO0_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A4_SEL_SHIFT)     /* 0x00000007 */
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A5_SEL_SHIFT     (4U)
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A5_SEL_MASK      (0x7U << GPIO0_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A5_SEL_SHIFT)     /* 0x00000070 */
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A6_SEL_SHIFT     (8U)
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A6_SEL_MASK      (0x7U << GPIO0_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A6_SEL_SHIFT)     /* 0x00000700 */
/* GPIO0A_DS0 */
#define GPIO0_IOC_GPIO0A_DS0_OFFSET                        (0x10U)
#define GPIO0_IOC_GPIO0A_DS0_GPIO0A0_DS_SHIFT              (0U)
#define GPIO0_IOC_GPIO0A_DS0_GPIO0A0_DS_MASK               (0x3FU << GPIO0_IOC_GPIO0A_DS0_GPIO0A0_DS_SHIFT)             /* 0x0000003F */
#define GPIO0_IOC_GPIO0A_DS0_GPIO0A1_DS_SHIFT              (8U)
#define GPIO0_IOC_GPIO0A_DS0_GPIO0A1_DS_MASK               (0x3FU << GPIO0_IOC_GPIO0A_DS0_GPIO0A1_DS_SHIFT)             /* 0x00003F00 */
/* GPIO0A_DS1 */
#define GPIO0_IOC_GPIO0A_DS1_OFFSET                        (0x14U)
#define GPIO0_IOC_GPIO0A_DS1_GPIO0A2_DS_SHIFT              (0U)
#define GPIO0_IOC_GPIO0A_DS1_GPIO0A2_DS_MASK               (0x3FU << GPIO0_IOC_GPIO0A_DS1_GPIO0A2_DS_SHIFT)             /* 0x0000003F */
#define GPIO0_IOC_GPIO0A_DS1_GPIO0A3_DS_SHIFT              (8U)
#define GPIO0_IOC_GPIO0A_DS1_GPIO0A3_DS_MASK               (0x3FU << GPIO0_IOC_GPIO0A_DS1_GPIO0A3_DS_SHIFT)             /* 0x00003F00 */
/* GPIO0A_DS2 */
#define GPIO0_IOC_GPIO0A_DS2_OFFSET                        (0x18U)
#define GPIO0_IOC_GPIO0A_DS2_GPIO0A4_DS_SHIFT              (0U)
#define GPIO0_IOC_GPIO0A_DS2_GPIO0A4_DS_MASK               (0x3FU << GPIO0_IOC_GPIO0A_DS2_GPIO0A4_DS_SHIFT)             /* 0x0000003F */
#define GPIO0_IOC_GPIO0A_DS2_GPIO0A5_DS_SHIFT              (8U)
#define GPIO0_IOC_GPIO0A_DS2_GPIO0A5_DS_MASK               (0x3FU << GPIO0_IOC_GPIO0A_DS2_GPIO0A5_DS_SHIFT)             /* 0x00003F00 */
/* GPIO0A_DS3 */
#define GPIO0_IOC_GPIO0A_DS3_OFFSET                        (0x1CU)
#define GPIO0_IOC_GPIO0A_DS3_GPIO0A6_DS_SHIFT              (0U)
#define GPIO0_IOC_GPIO0A_DS3_GPIO0A6_DS_MASK               (0x3FU << GPIO0_IOC_GPIO0A_DS3_GPIO0A6_DS_SHIFT)             /* 0x0000003F */
/* GPIO0A_IE */
#define GPIO0_IOC_GPIO0A_IE_OFFSET                         (0x30U)
#define GPIO0_IOC_GPIO0A_IE_GPIO0A0_IE_SHIFT               (0U)
#define GPIO0_IOC_GPIO0A_IE_GPIO0A0_IE_MASK                (0x1U << GPIO0_IOC_GPIO0A_IE_GPIO0A0_IE_SHIFT)               /* 0x00000001 */
#define GPIO0_IOC_GPIO0A_IE_GPIO0A1_IE_SHIFT               (1U)
#define GPIO0_IOC_GPIO0A_IE_GPIO0A1_IE_MASK                (0x1U << GPIO0_IOC_GPIO0A_IE_GPIO0A1_IE_SHIFT)               /* 0x00000002 */
#define GPIO0_IOC_GPIO0A_IE_GPIO0A2_IE_SHIFT               (2U)
#define GPIO0_IOC_GPIO0A_IE_GPIO0A2_IE_MASK                (0x1U << GPIO0_IOC_GPIO0A_IE_GPIO0A2_IE_SHIFT)               /* 0x00000004 */
#define GPIO0_IOC_GPIO0A_IE_GPIO0A3_IE_SHIFT               (3U)
#define GPIO0_IOC_GPIO0A_IE_GPIO0A3_IE_MASK                (0x1U << GPIO0_IOC_GPIO0A_IE_GPIO0A3_IE_SHIFT)               /* 0x00000008 */
#define GPIO0_IOC_GPIO0A_IE_GPIO0A4_IE_SHIFT               (4U)
#define GPIO0_IOC_GPIO0A_IE_GPIO0A4_IE_MASK                (0x1U << GPIO0_IOC_GPIO0A_IE_GPIO0A4_IE_SHIFT)               /* 0x00000010 */
#define GPIO0_IOC_GPIO0A_IE_GPIO0A5_IE_SHIFT               (5U)
#define GPIO0_IOC_GPIO0A_IE_GPIO0A5_IE_MASK                (0x1U << GPIO0_IOC_GPIO0A_IE_GPIO0A5_IE_SHIFT)               /* 0x00000020 */
#define GPIO0_IOC_GPIO0A_IE_GPIO0A6_IE_SHIFT               (6U)
#define GPIO0_IOC_GPIO0A_IE_GPIO0A6_IE_MASK                (0x1U << GPIO0_IOC_GPIO0A_IE_GPIO0A6_IE_SHIFT)               /* 0x00000040 */
/* GPIO0A_P */
#define GPIO0_IOC_GPIO0A_P_OFFSET                          (0x38U)
#define GPIO0_IOC_GPIO0A_P_GPIO0A0_PU_SHIFT                (0U)
#define GPIO0_IOC_GPIO0A_P_GPIO0A0_PU_MASK                 (0x1U << GPIO0_IOC_GPIO0A_P_GPIO0A0_PU_SHIFT)                /* 0x00000001 */
#define GPIO0_IOC_GPIO0A_P_GPIO0A0_PD_SHIFT                (1U)
#define GPIO0_IOC_GPIO0A_P_GPIO0A0_PD_MASK                 (0x1U << GPIO0_IOC_GPIO0A_P_GPIO0A0_PD_SHIFT)                /* 0x00000002 */
#define GPIO0_IOC_GPIO0A_P_GPIO0A1_PU_SHIFT                (2U)
#define GPIO0_IOC_GPIO0A_P_GPIO0A1_PU_MASK                 (0x1U << GPIO0_IOC_GPIO0A_P_GPIO0A1_PU_SHIFT)                /* 0x00000004 */
#define GPIO0_IOC_GPIO0A_P_GPIO0A1_PD_SHIFT                (3U)
#define GPIO0_IOC_GPIO0A_P_GPIO0A1_PD_MASK                 (0x1U << GPIO0_IOC_GPIO0A_P_GPIO0A1_PD_SHIFT)                /* 0x00000008 */
#define GPIO0_IOC_GPIO0A_P_GPIO0A2_PU_SHIFT                (4U)
#define GPIO0_IOC_GPIO0A_P_GPIO0A2_PU_MASK                 (0x1U << GPIO0_IOC_GPIO0A_P_GPIO0A2_PU_SHIFT)                /* 0x00000010 */
#define GPIO0_IOC_GPIO0A_P_GPIO0A2_PD_SHIFT                (5U)
#define GPIO0_IOC_GPIO0A_P_GPIO0A2_PD_MASK                 (0x1U << GPIO0_IOC_GPIO0A_P_GPIO0A2_PD_SHIFT)                /* 0x00000020 */
#define GPIO0_IOC_GPIO0A_P_GPIO0A3_PU_SHIFT                (6U)
#define GPIO0_IOC_GPIO0A_P_GPIO0A3_PU_MASK                 (0x1U << GPIO0_IOC_GPIO0A_P_GPIO0A3_PU_SHIFT)                /* 0x00000040 */
#define GPIO0_IOC_GPIO0A_P_GPIO0A3_PD_SHIFT                (7U)
#define GPIO0_IOC_GPIO0A_P_GPIO0A3_PD_MASK                 (0x1U << GPIO0_IOC_GPIO0A_P_GPIO0A3_PD_SHIFT)                /* 0x00000080 */
#define GPIO0_IOC_GPIO0A_P_GPIO0A4_PU_SHIFT                (8U)
#define GPIO0_IOC_GPIO0A_P_GPIO0A4_PU_MASK                 (0x1U << GPIO0_IOC_GPIO0A_P_GPIO0A4_PU_SHIFT)                /* 0x00000100 */
#define GPIO0_IOC_GPIO0A_P_GPIO0A4_PD_SHIFT                (9U)
#define GPIO0_IOC_GPIO0A_P_GPIO0A4_PD_MASK                 (0x1U << GPIO0_IOC_GPIO0A_P_GPIO0A4_PD_SHIFT)                /* 0x00000200 */
#define GPIO0_IOC_GPIO0A_P_GPIO0A5_PU_SHIFT                (10U)
#define GPIO0_IOC_GPIO0A_P_GPIO0A5_PU_MASK                 (0x1U << GPIO0_IOC_GPIO0A_P_GPIO0A5_PU_SHIFT)                /* 0x00000400 */
#define GPIO0_IOC_GPIO0A_P_GPIO0A5_PD_SHIFT                (11U)
#define GPIO0_IOC_GPIO0A_P_GPIO0A5_PD_MASK                 (0x1U << GPIO0_IOC_GPIO0A_P_GPIO0A5_PD_SHIFT)                /* 0x00000800 */
#define GPIO0_IOC_GPIO0A_P_GPIO0A6_PU_SHIFT                (12U)
#define GPIO0_IOC_GPIO0A_P_GPIO0A6_PU_MASK                 (0x1U << GPIO0_IOC_GPIO0A_P_GPIO0A6_PU_SHIFT)                /* 0x00001000 */
#define GPIO0_IOC_GPIO0A_P_GPIO0A6_PD_SHIFT                (13U)
#define GPIO0_IOC_GPIO0A_P_GPIO0A6_PD_MASK                 (0x1U << GPIO0_IOC_GPIO0A_P_GPIO0A6_PD_SHIFT)                /* 0x00002000 */
/* GPIO0A_SUS */
#define GPIO0_IOC_GPIO0A_SUS_OFFSET                        (0x40U)
#define GPIO0_IOC_GPIO0A_SUS_GPIO0A0_SUS_SHIFT             (0U)
#define GPIO0_IOC_GPIO0A_SUS_GPIO0A0_SUS_MASK              (0x1U << GPIO0_IOC_GPIO0A_SUS_GPIO0A0_SUS_SHIFT)             /* 0x00000001 */
#define GPIO0_IOC_GPIO0A_SUS_GPIO0A1_SUS_SHIFT             (1U)
#define GPIO0_IOC_GPIO0A_SUS_GPIO0A1_SUS_MASK              (0x1U << GPIO0_IOC_GPIO0A_SUS_GPIO0A1_SUS_SHIFT)             /* 0x00000002 */
#define GPIO0_IOC_GPIO0A_SUS_GPIO0A2_SUS_SHIFT             (2U)
#define GPIO0_IOC_GPIO0A_SUS_GPIO0A2_SUS_MASK              (0x1U << GPIO0_IOC_GPIO0A_SUS_GPIO0A2_SUS_SHIFT)             /* 0x00000004 */
#define GPIO0_IOC_GPIO0A_SUS_GPIO0A3_SUS_SHIFT             (3U)
#define GPIO0_IOC_GPIO0A_SUS_GPIO0A3_SUS_MASK              (0x1U << GPIO0_IOC_GPIO0A_SUS_GPIO0A3_SUS_SHIFT)             /* 0x00000008 */
#define GPIO0_IOC_GPIO0A_SUS_GPIO0A4_SUS_SHIFT             (4U)
#define GPIO0_IOC_GPIO0A_SUS_GPIO0A4_SUS_MASK              (0x1U << GPIO0_IOC_GPIO0A_SUS_GPIO0A4_SUS_SHIFT)             /* 0x00000010 */
#define GPIO0_IOC_GPIO0A_SUS_GPIO0A5_SUS_SHIFT             (5U)
#define GPIO0_IOC_GPIO0A_SUS_GPIO0A5_SUS_MASK              (0x1U << GPIO0_IOC_GPIO0A_SUS_GPIO0A5_SUS_SHIFT)             /* 0x00000020 */
#define GPIO0_IOC_GPIO0A_SUS_GPIO0A6_SUS_SHIFT             (6U)
#define GPIO0_IOC_GPIO0A_SUS_GPIO0A6_SUS_MASK              (0x1U << GPIO0_IOC_GPIO0A_SUS_GPIO0A6_SUS_SHIFT)             /* 0x00000040 */
/* GPIO0A_SL */
#define GPIO0_IOC_GPIO0A_SL_OFFSET                         (0x48U)
#define GPIO0_IOC_GPIO0A_SL_GPIO0A0_SL_SHIFT               (0U)
#define GPIO0_IOC_GPIO0A_SL_GPIO0A0_SL_MASK                (0x3U << GPIO0_IOC_GPIO0A_SL_GPIO0A0_SL_SHIFT)               /* 0x00000003 */
#define GPIO0_IOC_GPIO0A_SL_GPIO0A1_SL_SHIFT               (2U)
#define GPIO0_IOC_GPIO0A_SL_GPIO0A1_SL_MASK                (0x3U << GPIO0_IOC_GPIO0A_SL_GPIO0A1_SL_SHIFT)               /* 0x0000000C */
#define GPIO0_IOC_GPIO0A_SL_GPIO0A2_SL_SHIFT               (4U)
#define GPIO0_IOC_GPIO0A_SL_GPIO0A2_SL_MASK                (0x3U << GPIO0_IOC_GPIO0A_SL_GPIO0A2_SL_SHIFT)               /* 0x00000030 */
#define GPIO0_IOC_GPIO0A_SL_GPIO0A3_SL_SHIFT               (6U)
#define GPIO0_IOC_GPIO0A_SL_GPIO0A3_SL_MASK                (0x3U << GPIO0_IOC_GPIO0A_SL_GPIO0A3_SL_SHIFT)               /* 0x000000C0 */
#define GPIO0_IOC_GPIO0A_SL_GPIO0A4_SL_SHIFT               (8U)
#define GPIO0_IOC_GPIO0A_SL_GPIO0A4_SL_MASK                (0x3U << GPIO0_IOC_GPIO0A_SL_GPIO0A4_SL_SHIFT)               /* 0x00000300 */
#define GPIO0_IOC_GPIO0A_SL_GPIO0A5_SL_SHIFT               (10U)
#define GPIO0_IOC_GPIO0A_SL_GPIO0A5_SL_MASK                (0x3U << GPIO0_IOC_GPIO0A_SL_GPIO0A5_SL_SHIFT)               /* 0x00000C00 */
#define GPIO0_IOC_GPIO0A_SL_GPIO0A6_SL_SHIFT               (12U)
#define GPIO0_IOC_GPIO0A_SL_GPIO0A6_SL_MASK                (0x3U << GPIO0_IOC_GPIO0A_SL_GPIO0A6_SL_SHIFT)               /* 0x00003000 */
/* GPIO0A_IE_SMT */
#define GPIO0_IOC_GPIO0A_IE_SMT_OFFSET                     (0x58U)
#define GPIO0_IOC_GPIO0A_IE_SMT_GPIO0A0_SMT_SHIFT          (0U)
#define GPIO0_IOC_GPIO0A_IE_SMT_GPIO0A0_SMT_MASK           (0x1U << GPIO0_IOC_GPIO0A_IE_SMT_GPIO0A0_SMT_SHIFT)          /* 0x00000001 */
#define GPIO0_IOC_GPIO0A_IE_SMT_GPIO0A1_SMT_SHIFT          (1U)
#define GPIO0_IOC_GPIO0A_IE_SMT_GPIO0A1_SMT_MASK           (0x1U << GPIO0_IOC_GPIO0A_IE_SMT_GPIO0A1_SMT_SHIFT)          /* 0x00000002 */
#define GPIO0_IOC_GPIO0A_IE_SMT_GPIO0A2_SMT_SHIFT          (2U)
#define GPIO0_IOC_GPIO0A_IE_SMT_GPIO0A2_SMT_MASK           (0x1U << GPIO0_IOC_GPIO0A_IE_SMT_GPIO0A2_SMT_SHIFT)          /* 0x00000004 */
#define GPIO0_IOC_GPIO0A_IE_SMT_GPIO0A3_SMT_SHIFT          (3U)
#define GPIO0_IOC_GPIO0A_IE_SMT_GPIO0A3_SMT_MASK           (0x1U << GPIO0_IOC_GPIO0A_IE_SMT_GPIO0A3_SMT_SHIFT)          /* 0x00000008 */
#define GPIO0_IOC_GPIO0A_IE_SMT_GPIO0A4_SMT_SHIFT          (4U)
#define GPIO0_IOC_GPIO0A_IE_SMT_GPIO0A4_SMT_MASK           (0x1U << GPIO0_IOC_GPIO0A_IE_SMT_GPIO0A4_SMT_SHIFT)          /* 0x00000010 */
#define GPIO0_IOC_GPIO0A_IE_SMT_GPIO0A5_SMT_SHIFT          (5U)
#define GPIO0_IOC_GPIO0A_IE_SMT_GPIO0A5_SMT_MASK           (0x1U << GPIO0_IOC_GPIO0A_IE_SMT_GPIO0A5_SMT_SHIFT)          /* 0x00000020 */
#define GPIO0_IOC_GPIO0A_IE_SMT_GPIO0A6_SMT_SHIFT          (6U)
#define GPIO0_IOC_GPIO0A_IE_SMT_GPIO0A6_SMT_MASK           (0x1U << GPIO0_IOC_GPIO0A_IE_SMT_GPIO0A6_SMT_SHIFT)          /* 0x00000040 */
/* GPIO0A_OD */
#define GPIO0_IOC_GPIO0A_OD_OFFSET                         (0x68U)
#define GPIO0_IOC_GPIO0A_OD_GPIO0A0_OD_SHIFT               (0U)
#define GPIO0_IOC_GPIO0A_OD_GPIO0A0_OD_MASK                (0x1U << GPIO0_IOC_GPIO0A_OD_GPIO0A0_OD_SHIFT)               /* 0x00000001 */
#define GPIO0_IOC_GPIO0A_OD_GPIO0A1_OD_SHIFT               (1U)
#define GPIO0_IOC_GPIO0A_OD_GPIO0A1_OD_MASK                (0x1U << GPIO0_IOC_GPIO0A_OD_GPIO0A1_OD_SHIFT)               /* 0x00000002 */
#define GPIO0_IOC_GPIO0A_OD_GPIO0A2_OD_SHIFT               (2U)
#define GPIO0_IOC_GPIO0A_OD_GPIO0A2_OD_MASK                (0x1U << GPIO0_IOC_GPIO0A_OD_GPIO0A2_OD_SHIFT)               /* 0x00000004 */
#define GPIO0_IOC_GPIO0A_OD_GPIO0A3_OD_SHIFT               (3U)
#define GPIO0_IOC_GPIO0A_OD_GPIO0A3_OD_MASK                (0x1U << GPIO0_IOC_GPIO0A_OD_GPIO0A3_OD_SHIFT)               /* 0x00000008 */
#define GPIO0_IOC_GPIO0A_OD_GPIO0A4_OD_SHIFT               (4U)
#define GPIO0_IOC_GPIO0A_OD_GPIO0A4_OD_MASK                (0x1U << GPIO0_IOC_GPIO0A_OD_GPIO0A4_OD_SHIFT)               /* 0x00000010 */
#define GPIO0_IOC_GPIO0A_OD_GPIO0A5_OD_SHIFT               (5U)
#define GPIO0_IOC_GPIO0A_OD_GPIO0A5_OD_MASK                (0x1U << GPIO0_IOC_GPIO0A_OD_GPIO0A5_OD_SHIFT)               /* 0x00000020 */
#define GPIO0_IOC_GPIO0A_OD_GPIO0A6_OD_SHIFT               (6U)
#define GPIO0_IOC_GPIO0A_OD_GPIO0A6_OD_MASK                (0x1U << GPIO0_IOC_GPIO0A_OD_GPIO0A6_OD_SHIFT)               /* 0x00000040 */
/*****************************************PMUCRU*****************************************/
/* PMUCLKSEL_CON00 */
#define PMUCRU_PMUCLKSEL_CON00_OFFSET                      (0x300U)
#define PMUCRU_PMUCLKSEL_CON00_CLK_MATRIX_100M_PMUSRC_DIV_SHIFT (0U)
#define PMUCRU_PMUCLKSEL_CON00_CLK_MATRIX_100M_PMUSRC_DIV_MASK (0x7U << PMUCRU_PMUCLKSEL_CON00_CLK_MATRIX_100M_PMUSRC_DIV_SHIFT) /* 0x00000007 */
#define PMUCRU_PMUCLKSEL_CON00_PCLK_PMU_ROOT_SEL_SHIFT     (3U)
#define PMUCRU_PMUCLKSEL_CON00_PCLK_PMU_ROOT_SEL_MASK      (0x1U << PMUCRU_PMUCLKSEL_CON00_PCLK_PMU_ROOT_SEL_SHIFT)     /* 0x00000008 */
#define PMUCRU_PMUCLKSEL_CON00_HCLK_PMU_ROOT_SEL_SHIFT     (4U)
#define PMUCRU_PMUCLKSEL_CON00_HCLK_PMU_ROOT_SEL_MASK      (0x3U << PMUCRU_PMUCLKSEL_CON00_HCLK_PMU_ROOT_SEL_SHIFT)     /* 0x00000030 */
#define PMUCRU_PMUCLKSEL_CON00_CLK_I2C1_SEL_SHIFT          (6U)
#define PMUCRU_PMUCLKSEL_CON00_CLK_I2C1_SEL_MASK           (0x3U << PMUCRU_PMUCLKSEL_CON00_CLK_I2C1_SEL_SHIFT)          /* 0x000000C0 */
#define PMUCRU_PMUCLKSEL_CON00_CLK_TESTOUT_PMU_DIV_SHIFT   (8U)
#define PMUCRU_PMUCLKSEL_CON00_CLK_TESTOUT_PMU_DIV_MASK    (0x1FU << PMUCRU_PMUCLKSEL_CON00_CLK_TESTOUT_PMU_DIV_SHIFT)  /* 0x00001F00 */
#define PMUCRU_PMUCLKSEL_CON00_CLK_TESTOUT_PMU_SEL_SHIFT   (13U)
#define PMUCRU_PMUCLKSEL_CON00_CLK_TESTOUT_PMU_SEL_MASK    (0x3U << PMUCRU_PMUCLKSEL_CON00_CLK_TESTOUT_PMU_SEL_SHIFT)   /* 0x00006000 */
#define PMUCRU_PMUCLKSEL_CON00_DBCLK_PMU_GPIO0_SEL_SHIFT   (15U)
#define PMUCRU_PMUCLKSEL_CON00_DBCLK_PMU_GPIO0_SEL_MASK    (0x1U << PMUCRU_PMUCLKSEL_CON00_DBCLK_PMU_GPIO0_SEL_SHIFT)   /* 0x00008000 */
/* PMUCLKSEL_CON01 */
#define PMUCRU_PMUCLKSEL_CON01_OFFSET                      (0x304U)
#define PMUCRU_PMUCLKSEL_CON01_CLK_PVTM_PMU_DIV_SHIFT      (0U)
#define PMUCRU_PMUCLKSEL_CON01_CLK_PVTM_PMU_DIV_MASK       (0x1FU << PMUCRU_PMUCLKSEL_CON01_CLK_PVTM_PMU_DIV_SHIFT)     /* 0x0000001F */
/* PMUCLKSEL_CON06 */
#define PMUCRU_PMUCLKSEL_CON06_OFFSET                      (0x318U)
#define PMUCRU_PMUCLKSEL_CON06_XIN_OSC0_DIV_DIV_SHIFT      (0U)
#define PMUCRU_PMUCLKSEL_CON06_XIN_OSC0_DIV_DIV_MASK       (0xFFFFFFFFU << PMUCRU_PMUCLKSEL_CON06_XIN_OSC0_DIV_DIV_SHIFT) /* 0xFFFFFFFF */
/* PMUCLKSEL_CON07 */
#define PMUCRU_PMUCLKSEL_CON07_OFFSET                      (0x31CU)
#define PMUCRU_PMUCLKSEL_CON07_CLK_DEEPSLOW_SEL_SHIFT      (0U)
#define PMUCRU_PMUCLKSEL_CON07_CLK_DEEPSLOW_SEL_MASK       (0x3U << PMUCRU_PMUCLKSEL_CON07_CLK_DEEPSLOW_SEL_SHIFT)      /* 0x00000003 */
#define PMUCRU_PMUCLKSEL_CON07_TCLK_PMU_WDT_SEL_SHIFT      (2U)
#define PMUCRU_PMUCLKSEL_CON07_TCLK_PMU_WDT_SEL_MASK       (0x1U << PMUCRU_PMUCLKSEL_CON07_TCLK_PMU_WDT_SEL_SHIFT)      /* 0x00000004 */
/* PMUGATE_CON00 */
#define PMUCRU_PMUGATE_CON00_OFFSET                        (0x800U)
#define PMUCRU_PMUGATE_CON00_PCLK_PMU_ROOT_EN_SHIFT        (1U)
#define PMUCRU_PMUGATE_CON00_PCLK_PMU_ROOT_EN_MASK         (0x1U << PMUCRU_PMUGATE_CON00_PCLK_PMU_ROOT_EN_SHIFT)        /* 0x00000002 */
#define PMUCRU_PMUGATE_CON00_HCLK_PMU_ROOT_EN_SHIFT        (2U)
#define PMUCRU_PMUGATE_CON00_HCLK_PMU_ROOT_EN_MASK         (0x1U << PMUCRU_PMUGATE_CON00_HCLK_PMU_ROOT_EN_SHIFT)        /* 0x00000004 */
#define PMUCRU_PMUGATE_CON00_PCLK_I2C1_EN_SHIFT            (3U)
#define PMUCRU_PMUGATE_CON00_PCLK_I2C1_EN_MASK             (0x1U << PMUCRU_PMUGATE_CON00_PCLK_I2C1_EN_SHIFT)            /* 0x00000008 */
#define PMUCRU_PMUGATE_CON00_CLK_I2C1_EN_SHIFT             (4U)
#define PMUCRU_PMUGATE_CON00_CLK_I2C1_EN_MASK              (0x1U << PMUCRU_PMUGATE_CON00_CLK_I2C1_EN_SHIFT)             /* 0x00000010 */
#define PMUCRU_PMUGATE_CON00_CLK_TESTOUT_PMU_EN_SHIFT      (5U)
#define PMUCRU_PMUGATE_CON00_CLK_TESTOUT_PMU_EN_MASK       (0x1U << PMUCRU_PMUGATE_CON00_CLK_TESTOUT_PMU_EN_SHIFT)      /* 0x00000020 */
#define PMUCRU_PMUGATE_CON00_HCLK_PMU_BIU_EN_SHIFT         (6U)
#define PMUCRU_PMUGATE_CON00_HCLK_PMU_BIU_EN_MASK          (0x1U << PMUCRU_PMUGATE_CON00_HCLK_PMU_BIU_EN_SHIFT)         /* 0x00000040 */
#define PMUCRU_PMUGATE_CON00_PCLK_PMU_BIU_EN_SHIFT         (7U)
#define PMUCRU_PMUGATE_CON00_PCLK_PMU_BIU_EN_MASK          (0x1U << PMUCRU_PMUGATE_CON00_PCLK_PMU_BIU_EN_SHIFT)         /* 0x00000080 */
#define PMUCRU_PMUGATE_CON00_HCLK_PMU_SRAM_EN_SHIFT        (8U)
#define PMUCRU_PMUGATE_CON00_HCLK_PMU_SRAM_EN_MASK         (0x1U << PMUCRU_PMUGATE_CON00_HCLK_PMU_SRAM_EN_SHIFT)        /* 0x00000100 */
#define PMUCRU_PMUGATE_CON00_CLK_PMU_MCU_EN_SHIFT          (9U)
#define PMUCRU_PMUGATE_CON00_CLK_PMU_MCU_EN_MASK           (0x1U << PMUCRU_PMUGATE_CON00_CLK_PMU_MCU_EN_SHIFT)          /* 0x00000200 */
#define PMUCRU_PMUGATE_CON00_CLK_PMU_MCU_RTC_EN_SHIFT      (13U)
#define PMUCRU_PMUGATE_CON00_CLK_PMU_MCU_RTC_EN_MASK       (0x1U << PMUCRU_PMUGATE_CON00_CLK_PMU_MCU_RTC_EN_SHIFT)      /* 0x00002000 */
#define PMUCRU_PMUGATE_CON00_CLK_PMU_MCU_JTAG_EN_SHIFT     (14U)
#define PMUCRU_PMUGATE_CON00_CLK_PMU_MCU_JTAG_EN_MASK      (0x1U << PMUCRU_PMUGATE_CON00_CLK_PMU_MCU_JTAG_EN_SHIFT)     /* 0x00004000 */
#define PMUCRU_PMUGATE_CON00_CLK_SCANHS_CLK_PMU_MCU_EN_SHIFT (15U)
#define PMUCRU_PMUGATE_CON00_CLK_SCANHS_CLK_PMU_MCU_EN_MASK (0x1U << PMUCRU_PMUGATE_CON00_CLK_SCANHS_CLK_PMU_MCU_EN_SHIFT) /* 0x00008000 */
/* PMUGATE_CON01 */
#define PMUCRU_PMUGATE_CON01_OFFSET                        (0x804U)
#define PMUCRU_PMUGATE_CON01_CLK_PMU_EN_SHIFT              (0U)
#define PMUCRU_PMUGATE_CON01_CLK_PMU_EN_MASK               (0x1U << PMUCRU_PMUGATE_CON01_CLK_PMU_EN_SHIFT)              /* 0x00000001 */
#define PMUCRU_PMUGATE_CON01_PCLK_PMU_EN_SHIFT             (1U)
#define PMUCRU_PMUGATE_CON01_PCLK_PMU_EN_MASK              (0x1U << PMUCRU_PMUGATE_CON01_PCLK_PMU_EN_SHIFT)             /* 0x00000002 */
#define PMUCRU_PMUGATE_CON01_PCLK_PMU_GPIO0_EN_SHIFT       (2U)
#define PMUCRU_PMUGATE_CON01_PCLK_PMU_GPIO0_EN_MASK        (0x1U << PMUCRU_PMUGATE_CON01_PCLK_PMU_GPIO0_EN_SHIFT)       /* 0x00000004 */
#define PMUCRU_PMUGATE_CON01_DBCLK_PMU_GPIO0_EN_SHIFT      (3U)
#define PMUCRU_PMUGATE_CON01_DBCLK_PMU_GPIO0_EN_MASK       (0x1U << PMUCRU_PMUGATE_CON01_DBCLK_PMU_GPIO0_EN_SHIFT)      /* 0x00000008 */
#define PMUCRU_PMUGATE_CON01_CLK_PVTM_PMU_EN_SHIFT         (4U)
#define PMUCRU_PMUGATE_CON01_CLK_PVTM_PMU_EN_MASK          (0x1U << PMUCRU_PMUGATE_CON01_CLK_PVTM_PMU_EN_SHIFT)         /* 0x00000010 */
#define PMUCRU_PMUGATE_CON01_PCLK_PVTM_PMU_EN_SHIFT        (5U)
#define PMUCRU_PMUGATE_CON01_PCLK_PVTM_PMU_EN_MASK         (0x1U << PMUCRU_PMUGATE_CON01_PCLK_PVTM_PMU_EN_SHIFT)        /* 0x00000020 */
#define PMUCRU_PMUGATE_CON01_XIN_OSC0_DIV_EN_SHIFT         (14U)
#define PMUCRU_PMUGATE_CON01_XIN_OSC0_DIV_EN_MASK          (0x1U << PMUCRU_PMUGATE_CON01_XIN_OSC0_DIV_EN_SHIFT)         /* 0x00004000 */
#define PMUCRU_PMUGATE_CON01_CLK_DDR_FAIL_SAFE_EN_SHIFT    (15U)
#define PMUCRU_PMUGATE_CON01_CLK_DDR_FAIL_SAFE_EN_MASK     (0x1U << PMUCRU_PMUGATE_CON01_CLK_DDR_FAIL_SAFE_EN_SHIFT)    /* 0x00008000 */
/* PMUGATE_CON02 */
#define PMUCRU_PMUGATE_CON02_OFFSET                        (0x808U)
#define PMUCRU_PMUGATE_CON02_PCLK_PMU_HP_TIMER_EN_SHIFT    (0U)
#define PMUCRU_PMUGATE_CON02_PCLK_PMU_HP_TIMER_EN_MASK     (0x1U << PMUCRU_PMUGATE_CON02_PCLK_PMU_HP_TIMER_EN_SHIFT)    /* 0x00000001 */
#define PMUCRU_PMUGATE_CON02_CLK_PMU_HP_TIMER_EN_SHIFT     (1U)
#define PMUCRU_PMUGATE_CON02_CLK_PMU_HP_TIMER_EN_MASK      (0x1U << PMUCRU_PMUGATE_CON02_CLK_PMU_HP_TIMER_EN_SHIFT)     /* 0x00000002 */
#define PMUCRU_PMUGATE_CON02_CLK_PMU_32K_HP_TIMER_EN_SHIFT (2U)
#define PMUCRU_PMUGATE_CON02_CLK_PMU_32K_HP_TIMER_EN_MASK  (0x1U << PMUCRU_PMUGATE_CON02_CLK_PMU_32K_HP_TIMER_EN_SHIFT) /* 0x00000004 */
#define PMUCRU_PMUGATE_CON02_PCLK_PMU_IOC_EN_SHIFT         (3U)
#define PMUCRU_PMUGATE_CON02_PCLK_PMU_IOC_EN_MASK          (0x1U << PMUCRU_PMUGATE_CON02_PCLK_PMU_IOC_EN_SHIFT)         /* 0x00000008 */
#define PMUCRU_PMUGATE_CON02_PCLK_PMU_CRU_EN_SHIFT         (4U)
#define PMUCRU_PMUGATE_CON02_PCLK_PMU_CRU_EN_MASK          (0x1U << PMUCRU_PMUGATE_CON02_PCLK_PMU_CRU_EN_SHIFT)         /* 0x00000010 */
#define PMUCRU_PMUGATE_CON02_PCLK_PMU_GRF_EN_SHIFT         (5U)
#define PMUCRU_PMUGATE_CON02_PCLK_PMU_GRF_EN_MASK          (0x1U << PMUCRU_PMUGATE_CON02_PCLK_PMU_GRF_EN_SHIFT)         /* 0x00000020 */
#define PMUCRU_PMUGATE_CON02_PCLK_PMU_SGRF_EN_SHIFT        (6U)
#define PMUCRU_PMUGATE_CON02_PCLK_PMU_SGRF_EN_MASK         (0x1U << PMUCRU_PMUGATE_CON02_PCLK_PMU_SGRF_EN_SHIFT)        /* 0x00000040 */
#define PMUCRU_PMUGATE_CON02_PCLK_PMU_WDT_EN_SHIFT         (8U)
#define PMUCRU_PMUGATE_CON02_PCLK_PMU_WDT_EN_MASK          (0x1U << PMUCRU_PMUGATE_CON02_PCLK_PMU_WDT_EN_SHIFT)         /* 0x00000100 */
#define PMUCRU_PMUGATE_CON02_TCLK_PMU_WDT_EN_SHIFT         (9U)
#define PMUCRU_PMUGATE_CON02_TCLK_PMU_WDT_EN_MASK          (0x1U << PMUCRU_PMUGATE_CON02_TCLK_PMU_WDT_EN_SHIFT)         /* 0x00000200 */
#define PMUCRU_PMUGATE_CON02_PCLK_PMU_MAILBOX_EN_SHIFT     (10U)
#define PMUCRU_PMUGATE_CON02_PCLK_PMU_MAILBOX_EN_MASK      (0x1U << PMUCRU_PMUGATE_CON02_PCLK_PMU_MAILBOX_EN_SHIFT)     /* 0x00000400 */
#define PMUCRU_PMUGATE_CON02_OCC_SCANCLK_PMU_MCU_JTAG_EN_SHIFT (11U)
#define PMUCRU_PMUGATE_CON02_OCC_SCANCLK_PMU_MCU_JTAG_EN_MASK (0x1U << PMUCRU_PMUGATE_CON02_OCC_SCANCLK_PMU_MCU_JTAG_EN_SHIFT) /* 0x00000800 */
#define PMUCRU_PMUGATE_CON02_OCC_SCANCLK_PMU_GPIO_EN_SHIFT (12U)
#define PMUCRU_PMUGATE_CON02_OCC_SCANCLK_PMU_GPIO_EN_MASK  (0x1U << PMUCRU_PMUGATE_CON02_OCC_SCANCLK_PMU_GPIO_EN_SHIFT) /* 0x00001000 */
#define PMUCRU_PMUGATE_CON02_CLK_REFOUT_EN_SHIFT           (13U)
#define PMUCRU_PMUGATE_CON02_CLK_REFOUT_EN_MASK            (0x1U << PMUCRU_PMUGATE_CON02_CLK_REFOUT_EN_SHIFT)           /* 0x00002000 */
/* PMUSOFTRST_CON00 */
#define PMUCRU_PMUSOFTRST_CON00_OFFSET                     (0xA00U)
#define PMUCRU_PMUSOFTRST_CON00_PRESETN_I2C1_SHIFT         (3U)
#define PMUCRU_PMUSOFTRST_CON00_PRESETN_I2C1_MASK          (0x1U << PMUCRU_PMUSOFTRST_CON00_PRESETN_I2C1_SHIFT)         /* 0x00000008 */
#define PMUCRU_PMUSOFTRST_CON00_RESETN_I2C1_SHIFT          (4U)
#define PMUCRU_PMUSOFTRST_CON00_RESETN_I2C1_MASK           (0x1U << PMUCRU_PMUSOFTRST_CON00_RESETN_I2C1_SHIFT)          /* 0x00000010 */
#define PMUCRU_PMUSOFTRST_CON00_HRESETN_PMU_BIU_SHIFT      (6U)
#define PMUCRU_PMUSOFTRST_CON00_HRESETN_PMU_BIU_MASK       (0x1U << PMUCRU_PMUSOFTRST_CON00_HRESETN_PMU_BIU_SHIFT)      /* 0x00000040 */
#define PMUCRU_PMUSOFTRST_CON00_PRESETN_PMU_BIU_SHIFT      (7U)
#define PMUCRU_PMUSOFTRST_CON00_PRESETN_PMU_BIU_MASK       (0x1U << PMUCRU_PMUSOFTRST_CON00_PRESETN_PMU_BIU_SHIFT)      /* 0x00000080 */
#define PMUCRU_PMUSOFTRST_CON00_HRESETN_PMU_SRAM_SHIFT     (8U)
#define PMUCRU_PMUSOFTRST_CON00_HRESETN_PMU_SRAM_MASK      (0x1U << PMUCRU_PMUSOFTRST_CON00_HRESETN_PMU_SRAM_SHIFT)     /* 0x00000100 */
#define PMUCRU_PMUSOFTRST_CON00_RESETN_PMU_MCU_SHIFT       (9U)
#define PMUCRU_PMUSOFTRST_CON00_RESETN_PMU_MCU_MASK        (0x1U << PMUCRU_PMUSOFTRST_CON00_RESETN_PMU_MCU_SHIFT)       /* 0x00000200 */
#define PMUCRU_PMUSOFTRST_CON00_RESETN_PMU_MCU_PWRUP_SHIFT (10U)
#define PMUCRU_PMUSOFTRST_CON00_RESETN_PMU_MCU_PWRUP_MASK  (0x1U << PMUCRU_PMUSOFTRST_CON00_RESETN_PMU_MCU_PWRUP_SHIFT) /* 0x00000400 */
#define PMUCRU_PMUSOFTRST_CON00_RESETN_PMU_MCU_CPU_SHIFT   (11U)
#define PMUCRU_PMUSOFTRST_CON00_RESETN_PMU_MCU_CPU_MASK    (0x1U << PMUCRU_PMUSOFTRST_CON00_RESETN_PMU_MCU_CPU_SHIFT)   /* 0x00000800 */
#define PMUCRU_PMUSOFTRST_CON00_TRESETN_PMU_MCU_CPU_SHIFT  (12U)
#define PMUCRU_PMUSOFTRST_CON00_TRESETN_PMU_MCU_CPU_MASK   (0x1U << PMUCRU_PMUSOFTRST_CON00_TRESETN_PMU_MCU_CPU_SHIFT)  /* 0x00001000 */
/* PMUSOFTRST_CON01 */
#define PMUCRU_PMUSOFTRST_CON01_OFFSET                     (0xA04U)
#define PMUCRU_PMUSOFTRST_CON01_PRESETN_PMU_GPIO0_SHIFT    (2U)
#define PMUCRU_PMUSOFTRST_CON01_PRESETN_PMU_GPIO0_MASK     (0x1U << PMUCRU_PMUSOFTRST_CON01_PRESETN_PMU_GPIO0_SHIFT)    /* 0x00000004 */
#define PMUCRU_PMUSOFTRST_CON01_DBRESETN_PMU_GPIO0_SHIFT   (3U)
#define PMUCRU_PMUSOFTRST_CON01_DBRESETN_PMU_GPIO0_MASK    (0x1U << PMUCRU_PMUSOFTRST_CON01_DBRESETN_PMU_GPIO0_SHIFT)   /* 0x00000008 */
#define PMUCRU_PMUSOFTRST_CON01_RESETN_PVTM_PMU_SHIFT      (4U)
#define PMUCRU_PMUSOFTRST_CON01_RESETN_PVTM_PMU_MASK       (0x1U << PMUCRU_PMUSOFTRST_CON01_RESETN_PVTM_PMU_SHIFT)      /* 0x00000010 */
#define PMUCRU_PMUSOFTRST_CON01_PRESETN_PVTM_PMU_SHIFT     (5U)
#define PMUCRU_PMUSOFTRST_CON01_PRESETN_PVTM_PMU_MASK      (0x1U << PMUCRU_PMUSOFTRST_CON01_PRESETN_PVTM_PMU_SHIFT)     /* 0x00000020 */
#define PMUCRU_PMUSOFTRST_CON01_RESETN_DDR_FAIL_SAFE_SHIFT (15U)
#define PMUCRU_PMUSOFTRST_CON01_RESETN_DDR_FAIL_SAFE_MASK  (0x1U << PMUCRU_PMUSOFTRST_CON01_RESETN_DDR_FAIL_SAFE_SHIFT) /* 0x00008000 */
/* PMUSOFTRST_CON02 */
#define PMUCRU_PMUSOFTRST_CON02_OFFSET                     (0xA08U)
#define PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_HP_TIMER_SHIFT (0U)
#define PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_HP_TIMER_MASK  (0x1U << PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_HP_TIMER_SHIFT) /* 0x00000001 */
#define PMUCRU_PMUSOFTRST_CON02_RESETN_PMU_HP_TIMER_SHIFT  (1U)
#define PMUCRU_PMUSOFTRST_CON02_RESETN_PMU_HP_TIMER_MASK   (0x1U << PMUCRU_PMUSOFTRST_CON02_RESETN_PMU_HP_TIMER_SHIFT)  /* 0x00000002 */
#define PMUCRU_PMUSOFTRST_CON02_RESETN_PMU_32K_HP_TIMER_SHIFT (2U)
#define PMUCRU_PMUSOFTRST_CON02_RESETN_PMU_32K_HP_TIMER_MASK (0x1U << PMUCRU_PMUSOFTRST_CON02_RESETN_PMU_32K_HP_TIMER_SHIFT) /* 0x00000004 */
#define PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_IOC_SHIFT      (3U)
#define PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_IOC_MASK       (0x1U << PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_IOC_SHIFT)      /* 0x00000008 */
#define PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_CRU_SHIFT      (4U)
#define PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_CRU_MASK       (0x1U << PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_CRU_SHIFT)      /* 0x00000010 */
#define PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_GRF_SHIFT      (5U)
#define PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_GRF_MASK       (0x1U << PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_GRF_SHIFT)      /* 0x00000020 */
#define PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_SGRF_SHIFT     (6U)
#define PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_SGRF_MASK      (0x1U << PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_SGRF_SHIFT)     /* 0x00000040 */
#define PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_SGRF_REMAP_SHIFT (7U)
#define PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_SGRF_REMAP_MASK (0x1U << PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_SGRF_REMAP_SHIFT) /* 0x00000080 */
#define PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_WDT_SHIFT      (8U)
#define PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_WDT_MASK       (0x1U << PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_WDT_SHIFT)      /* 0x00000100 */
#define PMUCRU_PMUSOFTRST_CON02_TRESETN_PMU_WDT_SHIFT      (9U)
#define PMUCRU_PMUSOFTRST_CON02_TRESETN_PMU_WDT_MASK       (0x1U << PMUCRU_PMUSOFTRST_CON02_TRESETN_PMU_WDT_SHIFT)      /* 0x00000200 */
#define PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_MAILBOX_SHIFT  (10U)
#define PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_MAILBOX_MASK   (0x1U << PMUCRU_PMUSOFTRST_CON02_PRESETN_PMU_MAILBOX_SHIFT)  /* 0x00000400 */
/******************************************CRU*******************************************/
/* APLL_CON0 */
#define CRU_APLL_CON0_OFFSET                               (0x0U)
#define CRU_APLL_CON0_FBDIV_SHIFT                          (0U)
#define CRU_APLL_CON0_FBDIV_MASK                           (0xFFFU << CRU_APLL_CON0_FBDIV_SHIFT)                        /* 0x00000FFF */
#define CRU_APLL_CON0_POSTDIV1_SHIFT                       (12U)
#define CRU_APLL_CON0_POSTDIV1_MASK                        (0x7U << CRU_APLL_CON0_POSTDIV1_SHIFT)                       /* 0x00007000 */
#define CRU_APLL_CON0_BYPASS_SHIFT                         (15U)
#define CRU_APLL_CON0_BYPASS_MASK                          (0x1U << CRU_APLL_CON0_BYPASS_SHIFT)                         /* 0x00008000 */
/* APLL_CON1 */
#define CRU_APLL_CON1_OFFSET                               (0x4U)
#define CRU_APLL_CON1_REFDIV_SHIFT                         (0U)
#define CRU_APLL_CON1_REFDIV_MASK                          (0x3FU << CRU_APLL_CON1_REFDIV_SHIFT)                        /* 0x0000003F */
#define CRU_APLL_CON1_POSTDIV2_SHIFT                       (6U)
#define CRU_APLL_CON1_POSTDIV2_MASK                        (0x7U << CRU_APLL_CON1_POSTDIV2_SHIFT)                       /* 0x000001C0 */
#define CRU_APLL_CON1_PLL_LOCK_SHIFT                       (10U)
#define CRU_APLL_CON1_PLL_LOCK_MASK                        (0x1U << CRU_APLL_CON1_PLL_LOCK_SHIFT)                       /* 0x00000400 */
#define CRU_APLL_CON1_DSMPD_SHIFT                          (12U)
#define CRU_APLL_CON1_DSMPD_MASK                           (0x1U << CRU_APLL_CON1_DSMPD_SHIFT)                          /* 0x00001000 */
#define CRU_APLL_CON1_PLLPD0_SHIFT                         (13U)
#define CRU_APLL_CON1_PLLPD0_MASK                          (0x1U << CRU_APLL_CON1_PLLPD0_SHIFT)                         /* 0x00002000 */
#define CRU_APLL_CON1_PLLPD1_SHIFT                         (14U)
#define CRU_APLL_CON1_PLLPD1_MASK                          (0x1U << CRU_APLL_CON1_PLLPD1_SHIFT)                         /* 0x00004000 */
#define CRU_APLL_CON1_PLLPDSEL_SHIFT                       (15U)
#define CRU_APLL_CON1_PLLPDSEL_MASK                        (0x1U << CRU_APLL_CON1_PLLPDSEL_SHIFT)                       /* 0x00008000 */
/* APLL_CON2 */
#define CRU_APLL_CON2_OFFSET                               (0x8U)
#define CRU_APLL_CON2_FRACDIV_SHIFT                        (0U)
#define CRU_APLL_CON2_FRACDIV_MASK                         (0xFFFFFFU << CRU_APLL_CON2_FRACDIV_SHIFT)                   /* 0x00FFFFFF */
#define CRU_APLL_CON2_DACPD_SHIFT                          (24U)
#define CRU_APLL_CON2_DACPD_MASK                           (0x1U << CRU_APLL_CON2_DACPD_SHIFT)                          /* 0x01000000 */
#define CRU_APLL_CON2_FOUTPOSTDIVPD_SHIFT                  (25U)
#define CRU_APLL_CON2_FOUTPOSTDIVPD_MASK                   (0x1U << CRU_APLL_CON2_FOUTPOSTDIVPD_SHIFT)                  /* 0x02000000 */
#define CRU_APLL_CON2_FOUTVCOPD_SHIFT                      (26U)
#define CRU_APLL_CON2_FOUTVCOPD_MASK                       (0x1U << CRU_APLL_CON2_FOUTVCOPD_SHIFT)                      /* 0x04000000 */
#define CRU_APLL_CON2_FOUT4PHASEPD_SHIFT                   (27U)
#define CRU_APLL_CON2_FOUT4PHASEPD_MASK                    (0x1U << CRU_APLL_CON2_FOUT4PHASEPD_SHIFT)                   /* 0x08000000 */
/* APLL_CON3 */
#define CRU_APLL_CON3_OFFSET                               (0xCU)
#define CRU_APLL_CON3_SSMOD_BP_SHIFT                       (0U)
#define CRU_APLL_CON3_SSMOD_BP_MASK                        (0x1U << CRU_APLL_CON3_SSMOD_BP_SHIFT)                       /* 0x00000001 */
#define CRU_APLL_CON3_SSMOD_DISABLE_SSCG_SHIFT             (1U)
#define CRU_APLL_CON3_SSMOD_DISABLE_SSCG_MASK              (0x1U << CRU_APLL_CON3_SSMOD_DISABLE_SSCG_SHIFT)             /* 0x00000002 */
#define CRU_APLL_CON3_SSMOD_RESET_SHIFT                    (2U)
#define CRU_APLL_CON3_SSMOD_RESET_MASK                     (0x1U << CRU_APLL_CON3_SSMOD_RESET_SHIFT)                    /* 0x00000004 */
#define CRU_APLL_CON3_SSMOD_DOWNSPREAD_SHIFT               (3U)
#define CRU_APLL_CON3_SSMOD_DOWNSPREAD_MASK                (0x1U << CRU_APLL_CON3_SSMOD_DOWNSPREAD_SHIFT)               /* 0x00000008 */
#define CRU_APLL_CON3_SSMOD_DIVVAL_SHIFT                   (4U)
#define CRU_APLL_CON3_SSMOD_DIVVAL_MASK                    (0xFU << CRU_APLL_CON3_SSMOD_DIVVAL_SHIFT)                   /* 0x000000F0 */
#define CRU_APLL_CON3_SSMOD_SPREAD_SHIFT                   (8U)
#define CRU_APLL_CON3_SSMOD_SPREAD_MASK                    (0x1FU << CRU_APLL_CON3_SSMOD_SPREAD_SHIFT)                  /* 0x00001F00 */
/* APLL_CON4 */
#define CRU_APLL_CON4_OFFSET                               (0x10U)
#define CRU_APLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT             (0U)
#define CRU_APLL_CON4_SSMOD_SEL_EXT_WAVE_MASK              (0x1U << CRU_APLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT)             /* 0x00000001 */
#define CRU_APLL_CON4_SSMOD_EXT_MAXADDR_SHIFT              (8U)
#define CRU_APLL_CON4_SSMOD_EXT_MAXADDR_MASK               (0xFFU << CRU_APLL_CON4_SSMOD_EXT_MAXADDR_SHIFT)             /* 0x0000FF00 */
/* CPLL_CON0 */
#define CRU_CPLL_CON0_OFFSET                               (0x20U)
#define CRU_CPLL_CON0_FBDIV_SHIFT                          (0U)
#define CRU_CPLL_CON0_FBDIV_MASK                           (0xFFFU << CRU_CPLL_CON0_FBDIV_SHIFT)                        /* 0x00000FFF */
#define CRU_CPLL_CON0_POSTDIV1_SHIFT                       (12U)
#define CRU_CPLL_CON0_POSTDIV1_MASK                        (0x7U << CRU_CPLL_CON0_POSTDIV1_SHIFT)                       /* 0x00007000 */
#define CRU_CPLL_CON0_BYPASS_SHIFT                         (15U)
#define CRU_CPLL_CON0_BYPASS_MASK                          (0x1U << CRU_CPLL_CON0_BYPASS_SHIFT)                         /* 0x00008000 */
/* CPLL_CON1 */
#define CRU_CPLL_CON1_OFFSET                               (0x24U)
#define CRU_CPLL_CON1_REFDIV_SHIFT                         (0U)
#define CRU_CPLL_CON1_REFDIV_MASK                          (0x3FU << CRU_CPLL_CON1_REFDIV_SHIFT)                        /* 0x0000003F */
#define CRU_CPLL_CON1_POSTDIV2_SHIFT                       (6U)
#define CRU_CPLL_CON1_POSTDIV2_MASK                        (0x7U << CRU_CPLL_CON1_POSTDIV2_SHIFT)                       /* 0x000001C0 */
#define CRU_CPLL_CON1_PLL_LOCK_SHIFT                       (10U)
#define CRU_CPLL_CON1_PLL_LOCK_MASK                        (0x1U << CRU_CPLL_CON1_PLL_LOCK_SHIFT)                       /* 0x00000400 */
#define CRU_CPLL_CON1_DSMPD_SHIFT                          (12U)
#define CRU_CPLL_CON1_DSMPD_MASK                           (0x1U << CRU_CPLL_CON1_DSMPD_SHIFT)                          /* 0x00001000 */
#define CRU_CPLL_CON1_PLLPD0_SHIFT                         (13U)
#define CRU_CPLL_CON1_PLLPD0_MASK                          (0x1U << CRU_CPLL_CON1_PLLPD0_SHIFT)                         /* 0x00002000 */
#define CRU_CPLL_CON1_PLLPD1_SHIFT                         (14U)
#define CRU_CPLL_CON1_PLLPD1_MASK                          (0x1U << CRU_CPLL_CON1_PLLPD1_SHIFT)                         /* 0x00004000 */
#define CRU_CPLL_CON1_PLLPDSEL_SHIFT                       (15U)
#define CRU_CPLL_CON1_PLLPDSEL_MASK                        (0x1U << CRU_CPLL_CON1_PLLPDSEL_SHIFT)                       /* 0x00008000 */
/* CPLL_CON2 */
#define CRU_CPLL_CON2_OFFSET                               (0x28U)
#define CRU_CPLL_CON2_FRACDIV_SHIFT                        (0U)
#define CRU_CPLL_CON2_FRACDIV_MASK                         (0xFFFFFFU << CRU_CPLL_CON2_FRACDIV_SHIFT)                   /* 0x00FFFFFF */
#define CRU_CPLL_CON2_DACPD_SHIFT                          (24U)
#define CRU_CPLL_CON2_DACPD_MASK                           (0x1U << CRU_CPLL_CON2_DACPD_SHIFT)                          /* 0x01000000 */
#define CRU_CPLL_CON2_FOUTPOSTDIVPD_SHIFT                  (25U)
#define CRU_CPLL_CON2_FOUTPOSTDIVPD_MASK                   (0x1U << CRU_CPLL_CON2_FOUTPOSTDIVPD_SHIFT)                  /* 0x02000000 */
#define CRU_CPLL_CON2_FOUTVCOPD_SHIFT                      (26U)
#define CRU_CPLL_CON2_FOUTVCOPD_MASK                       (0x1U << CRU_CPLL_CON2_FOUTVCOPD_SHIFT)                      /* 0x04000000 */
#define CRU_CPLL_CON2_FOUT4PHASEPD_SHIFT                   (27U)
#define CRU_CPLL_CON2_FOUT4PHASEPD_MASK                    (0x1U << CRU_CPLL_CON2_FOUT4PHASEPD_SHIFT)                   /* 0x08000000 */
/* CPLL_CON3 */
#define CRU_CPLL_CON3_OFFSET                               (0x2CU)
#define CRU_CPLL_CON3_SSMOD_BP_SHIFT                       (0U)
#define CRU_CPLL_CON3_SSMOD_BP_MASK                        (0x1U << CRU_CPLL_CON3_SSMOD_BP_SHIFT)                       /* 0x00000001 */
#define CRU_CPLL_CON3_SSMOD_DISABLE_SSCG_SHIFT             (1U)
#define CRU_CPLL_CON3_SSMOD_DISABLE_SSCG_MASK              (0x1U << CRU_CPLL_CON3_SSMOD_DISABLE_SSCG_SHIFT)             /* 0x00000002 */
#define CRU_CPLL_CON3_SSMOD_RESET_SHIFT                    (2U)
#define CRU_CPLL_CON3_SSMOD_RESET_MASK                     (0x1U << CRU_CPLL_CON3_SSMOD_RESET_SHIFT)                    /* 0x00000004 */
#define CRU_CPLL_CON3_SSMOD_DOWNSPREAD_SHIFT               (3U)
#define CRU_CPLL_CON3_SSMOD_DOWNSPREAD_MASK                (0x1U << CRU_CPLL_CON3_SSMOD_DOWNSPREAD_SHIFT)               /* 0x00000008 */
#define CRU_CPLL_CON3_SSMOD_DIVVAL_SHIFT                   (4U)
#define CRU_CPLL_CON3_SSMOD_DIVVAL_MASK                    (0xFU << CRU_CPLL_CON3_SSMOD_DIVVAL_SHIFT)                   /* 0x000000F0 */
#define CRU_CPLL_CON3_SSMOD_SPREAD_SHIFT                   (8U)
#define CRU_CPLL_CON3_SSMOD_SPREAD_MASK                    (0x1FU << CRU_CPLL_CON3_SSMOD_SPREAD_SHIFT)                  /* 0x00001F00 */
/* CPLL_CON4 */
#define CRU_CPLL_CON4_OFFSET                               (0x30U)
#define CRU_CPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT             (0U)
#define CRU_CPLL_CON4_SSMOD_SEL_EXT_WAVE_MASK              (0x1U << CRU_CPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT)             /* 0x00000001 */
#define CRU_CPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT              (8U)
#define CRU_CPLL_CON4_SSMOD_EXT_MAXADDR_MASK               (0xFFU << CRU_CPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT)             /* 0x0000FF00 */
/* DPLL_CON0 */
#define CRU_DPLL_CON0_OFFSET                               (0x40U)
#define CRU_DPLL_CON0_FBDIV_SHIFT                          (0U)
#define CRU_DPLL_CON0_FBDIV_MASK                           (0xFFFU << CRU_DPLL_CON0_FBDIV_SHIFT)                        /* 0x00000FFF */
#define CRU_DPLL_CON0_POSTDIV1_SHIFT                       (12U)
#define CRU_DPLL_CON0_POSTDIV1_MASK                        (0x7U << CRU_DPLL_CON0_POSTDIV1_SHIFT)                       /* 0x00007000 */
#define CRU_DPLL_CON0_BYPASS_SHIFT                         (15U)
#define CRU_DPLL_CON0_BYPASS_MASK                          (0x1U << CRU_DPLL_CON0_BYPASS_SHIFT)                         /* 0x00008000 */
/* DPLL_CON1 */
#define CRU_DPLL_CON1_OFFSET                               (0x44U)
#define CRU_DPLL_CON1_REFDIV_SHIFT                         (0U)
#define CRU_DPLL_CON1_REFDIV_MASK                          (0x3FU << CRU_DPLL_CON1_REFDIV_SHIFT)                        /* 0x0000003F */
#define CRU_DPLL_CON1_POSTDIV2_SHIFT                       (6U)
#define CRU_DPLL_CON1_POSTDIV2_MASK                        (0x7U << CRU_DPLL_CON1_POSTDIV2_SHIFT)                       /* 0x000001C0 */
#define CRU_DPLL_CON1_PLL_LOCK_SHIFT                       (10U)
#define CRU_DPLL_CON1_PLL_LOCK_MASK                        (0x1U << CRU_DPLL_CON1_PLL_LOCK_SHIFT)                       /* 0x00000400 */
#define CRU_DPLL_CON1_DSMPD_SHIFT                          (12U)
#define CRU_DPLL_CON1_DSMPD_MASK                           (0x1U << CRU_DPLL_CON1_DSMPD_SHIFT)                          /* 0x00001000 */
#define CRU_DPLL_CON1_PLLPD0_SHIFT                         (13U)
#define CRU_DPLL_CON1_PLLPD0_MASK                          (0x1U << CRU_DPLL_CON1_PLLPD0_SHIFT)                         /* 0x00002000 */
#define CRU_DPLL_CON1_PLLPD1_SHIFT                         (14U)
#define CRU_DPLL_CON1_PLLPD1_MASK                          (0x1U << CRU_DPLL_CON1_PLLPD1_SHIFT)                         /* 0x00004000 */
#define CRU_DPLL_CON1_PLLPDSEL_SHIFT                       (15U)
#define CRU_DPLL_CON1_PLLPDSEL_MASK                        (0x1U << CRU_DPLL_CON1_PLLPDSEL_SHIFT)                       /* 0x00008000 */
/* DPLL_CON2 */
#define CRU_DPLL_CON2_OFFSET                               (0x48U)
#define CRU_DPLL_CON2_FRACDIV_SHIFT                        (0U)
#define CRU_DPLL_CON2_FRACDIV_MASK                         (0xFFFFFFU << CRU_DPLL_CON2_FRACDIV_SHIFT)                   /* 0x00FFFFFF */
#define CRU_DPLL_CON2_DACPD_SHIFT                          (24U)
#define CRU_DPLL_CON2_DACPD_MASK                           (0x1U << CRU_DPLL_CON2_DACPD_SHIFT)                          /* 0x01000000 */
#define CRU_DPLL_CON2_FOUTPOSTDIVPD_SHIFT                  (25U)
#define CRU_DPLL_CON2_FOUTPOSTDIVPD_MASK                   (0x1U << CRU_DPLL_CON2_FOUTPOSTDIVPD_SHIFT)                  /* 0x02000000 */
#define CRU_DPLL_CON2_FOUTVCOPD_SHIFT                      (26U)
#define CRU_DPLL_CON2_FOUTVCOPD_MASK                       (0x1U << CRU_DPLL_CON2_FOUTVCOPD_SHIFT)                      /* 0x04000000 */
#define CRU_DPLL_CON2_FOUT4PHASEPD_SHIFT                   (27U)
#define CRU_DPLL_CON2_FOUT4PHASEPD_MASK                    (0x1U << CRU_DPLL_CON2_FOUT4PHASEPD_SHIFT)                   /* 0x08000000 */
/* DPLL_CON3 */
#define CRU_DPLL_CON3_OFFSET                               (0x4CU)
#define CRU_DPLL_CON3_SSMOD_BP_SHIFT                       (0U)
#define CRU_DPLL_CON3_SSMOD_BP_MASK                        (0x1U << CRU_DPLL_CON3_SSMOD_BP_SHIFT)                       /* 0x00000001 */
#define CRU_DPLL_CON3_SSMOD_DISABLE_SSCG_SHIFT             (1U)
#define CRU_DPLL_CON3_SSMOD_DISABLE_SSCG_MASK              (0x1U << CRU_DPLL_CON3_SSMOD_DISABLE_SSCG_SHIFT)             /* 0x00000002 */
#define CRU_DPLL_CON3_SSMOD_RESET_SHIFT                    (2U)
#define CRU_DPLL_CON3_SSMOD_RESET_MASK                     (0x1U << CRU_DPLL_CON3_SSMOD_RESET_SHIFT)                    /* 0x00000004 */
#define CRU_DPLL_CON3_SSMOD_DOWNSPREAD_SHIFT               (3U)
#define CRU_DPLL_CON3_SSMOD_DOWNSPREAD_MASK                (0x1U << CRU_DPLL_CON3_SSMOD_DOWNSPREAD_SHIFT)               /* 0x00000008 */
#define CRU_DPLL_CON3_SSMOD_DIVVAL_SHIFT                   (4U)
#define CRU_DPLL_CON3_SSMOD_DIVVAL_MASK                    (0xFU << CRU_DPLL_CON3_SSMOD_DIVVAL_SHIFT)                   /* 0x000000F0 */
#define CRU_DPLL_CON3_SSMOD_SPREAD_SHIFT                   (8U)
#define CRU_DPLL_CON3_SSMOD_SPREAD_MASK                    (0x1FU << CRU_DPLL_CON3_SSMOD_SPREAD_SHIFT)                  /* 0x00001F00 */
/* DPLL_CON4 */
#define CRU_DPLL_CON4_OFFSET                               (0x50U)
#define CRU_DPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT             (0U)
#define CRU_DPLL_CON4_SSMOD_SEL_EXT_WAVE_MASK              (0x1U << CRU_DPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT)             /* 0x00000001 */
#define CRU_DPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT              (8U)
#define CRU_DPLL_CON4_SSMOD_EXT_MAXADDR_MASK               (0xFFU << CRU_DPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT)             /* 0x0000FF00 */
/* GPLL_CON0 */
#define CRU_GPLL_CON0_OFFSET                               (0x60U)
#define CRU_GPLL_CON0_FBDIV_SHIFT                          (0U)
#define CRU_GPLL_CON0_FBDIV_MASK                           (0xFFFU << CRU_GPLL_CON0_FBDIV_SHIFT)                        /* 0x00000FFF */
#define CRU_GPLL_CON0_POSTDIV1_SHIFT                       (12U)
#define CRU_GPLL_CON0_POSTDIV1_MASK                        (0x7U << CRU_GPLL_CON0_POSTDIV1_SHIFT)                       /* 0x00007000 */
#define CRU_GPLL_CON0_BYPASS_SHIFT                         (15U)
#define CRU_GPLL_CON0_BYPASS_MASK                          (0x1U << CRU_GPLL_CON0_BYPASS_SHIFT)                         /* 0x00008000 */
/* GPLL_CON1 */
#define CRU_GPLL_CON1_OFFSET                               (0x64U)
#define CRU_GPLL_CON1_REFDIV_SHIFT                         (0U)
#define CRU_GPLL_CON1_REFDIV_MASK                          (0x3FU << CRU_GPLL_CON1_REFDIV_SHIFT)                        /* 0x0000003F */
#define CRU_GPLL_CON1_POSTDIV2_SHIFT                       (6U)
#define CRU_GPLL_CON1_POSTDIV2_MASK                        (0x7U << CRU_GPLL_CON1_POSTDIV2_SHIFT)                       /* 0x000001C0 */
#define CRU_GPLL_CON1_PLL_LOCK_SHIFT                       (10U)
#define CRU_GPLL_CON1_PLL_LOCK_MASK                        (0x1U << CRU_GPLL_CON1_PLL_LOCK_SHIFT)                       /* 0x00000400 */
#define CRU_GPLL_CON1_DSMPD_SHIFT                          (12U)
#define CRU_GPLL_CON1_DSMPD_MASK                           (0x1U << CRU_GPLL_CON1_DSMPD_SHIFT)                          /* 0x00001000 */
#define CRU_GPLL_CON1_PLLPD0_SHIFT                         (13U)
#define CRU_GPLL_CON1_PLLPD0_MASK                          (0x1U << CRU_GPLL_CON1_PLLPD0_SHIFT)                         /* 0x00002000 */
#define CRU_GPLL_CON1_PLLPD1_SHIFT                         (14U)
#define CRU_GPLL_CON1_PLLPD1_MASK                          (0x1U << CRU_GPLL_CON1_PLLPD1_SHIFT)                         /* 0x00004000 */
#define CRU_GPLL_CON1_PLLPDSEL_SHIFT                       (15U)
#define CRU_GPLL_CON1_PLLPDSEL_MASK                        (0x1U << CRU_GPLL_CON1_PLLPDSEL_SHIFT)                       /* 0x00008000 */
/* GPLL_CON2 */
#define CRU_GPLL_CON2_OFFSET                               (0x68U)
#define CRU_GPLL_CON2_FRACDIV_SHIFT                        (0U)
#define CRU_GPLL_CON2_FRACDIV_MASK                         (0xFFFFFFU << CRU_GPLL_CON2_FRACDIV_SHIFT)                   /* 0x00FFFFFF */
#define CRU_GPLL_CON2_DACPD_SHIFT                          (24U)
#define CRU_GPLL_CON2_DACPD_MASK                           (0x1U << CRU_GPLL_CON2_DACPD_SHIFT)                          /* 0x01000000 */
#define CRU_GPLL_CON2_FOUTPOSTDIVPD_SHIFT                  (25U)
#define CRU_GPLL_CON2_FOUTPOSTDIVPD_MASK                   (0x1U << CRU_GPLL_CON2_FOUTPOSTDIVPD_SHIFT)                  /* 0x02000000 */
#define CRU_GPLL_CON2_FOUTVCOPD_SHIFT                      (26U)
#define CRU_GPLL_CON2_FOUTVCOPD_MASK                       (0x1U << CRU_GPLL_CON2_FOUTVCOPD_SHIFT)                      /* 0x04000000 */
#define CRU_GPLL_CON2_FOUT4PHASEPD_SHIFT                   (27U)
#define CRU_GPLL_CON2_FOUT4PHASEPD_MASK                    (0x1U << CRU_GPLL_CON2_FOUT4PHASEPD_SHIFT)                   /* 0x08000000 */
/* GPLL_CON3 */
#define CRU_GPLL_CON3_OFFSET                               (0x6CU)
#define CRU_GPLL_CON3_SSMOD_BP_SHIFT                       (0U)
#define CRU_GPLL_CON3_SSMOD_BP_MASK                        (0x1U << CRU_GPLL_CON3_SSMOD_BP_SHIFT)                       /* 0x00000001 */
#define CRU_GPLL_CON3_SSMOD_DISABLE_SSCG_SHIFT             (1U)
#define CRU_GPLL_CON3_SSMOD_DISABLE_SSCG_MASK              (0x1U << CRU_GPLL_CON3_SSMOD_DISABLE_SSCG_SHIFT)             /* 0x00000002 */
#define CRU_GPLL_CON3_SSMOD_RESET_SHIFT                    (2U)
#define CRU_GPLL_CON3_SSMOD_RESET_MASK                     (0x1U << CRU_GPLL_CON3_SSMOD_RESET_SHIFT)                    /* 0x00000004 */
#define CRU_GPLL_CON3_SSMOD_DOWNSPREAD_SHIFT               (3U)
#define CRU_GPLL_CON3_SSMOD_DOWNSPREAD_MASK                (0x1U << CRU_GPLL_CON3_SSMOD_DOWNSPREAD_SHIFT)               /* 0x00000008 */
#define CRU_GPLL_CON3_SSMOD_DIVVAL_SHIFT                   (4U)
#define CRU_GPLL_CON3_SSMOD_DIVVAL_MASK                    (0xFU << CRU_GPLL_CON3_SSMOD_DIVVAL_SHIFT)                   /* 0x000000F0 */
#define CRU_GPLL_CON3_SSMOD_SPREAD_SHIFT                   (8U)
#define CRU_GPLL_CON3_SSMOD_SPREAD_MASK                    (0x1FU << CRU_GPLL_CON3_SSMOD_SPREAD_SHIFT)                  /* 0x00001F00 */
/* GPLL_CON4 */
#define CRU_GPLL_CON4_OFFSET                               (0x70U)
#define CRU_GPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT             (0U)
#define CRU_GPLL_CON4_SSMOD_SEL_EXT_WAVE_MASK              (0x1U << CRU_GPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT)             /* 0x00000001 */
#define CRU_GPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT              (8U)
#define CRU_GPLL_CON4_SSMOD_EXT_MAXADDR_MASK               (0xFFU << CRU_GPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT)             /* 0x0000FF00 */
/* SSGTBL0_3 */
#define CRU_SSGTBL0_3_OFFSET                               (0x140U)
#define CRU_SSGTBL0_3_SSGTBL0_3_SHIFT                      (0U)
#define CRU_SSGTBL0_3_SSGTBL0_3_MASK                       (0xFFFFFFFFU << CRU_SSGTBL0_3_SSGTBL0_3_SHIFT)               /* 0xFFFFFFFF */
/* SSGTBL4_7 */
#define CRU_SSGTBL4_7_OFFSET                               (0x144U)
#define CRU_SSGTBL4_7_SSGTBL4_7_SHIFT                      (0U)
#define CRU_SSGTBL4_7_SSGTBL4_7_MASK                       (0xFFFFFFFFU << CRU_SSGTBL4_7_SSGTBL4_7_SHIFT)               /* 0xFFFFFFFF */
/* SSGTBL8_11 */
#define CRU_SSGTBL8_11_OFFSET                              (0x148U)
#define CRU_SSGTBL8_11_SSGTBL8_11_SHIFT                    (0U)
#define CRU_SSGTBL8_11_SSGTBL8_11_MASK                     (0xFFFFFFFFU << CRU_SSGTBL8_11_SSGTBL8_11_SHIFT)             /* 0xFFFFFFFF */
/* SSGTBL12_15 */
#define CRU_SSGTBL12_15_OFFSET                             (0x14CU)
#define CRU_SSGTBL12_15_SSGTBL12_15_SHIFT                  (0U)
#define CRU_SSGTBL12_15_SSGTBL12_15_MASK                   (0xFFFFFFFFU << CRU_SSGTBL12_15_SSGTBL12_15_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL16_19 */
#define CRU_SSGTBL16_19_OFFSET                             (0x150U)
#define CRU_SSGTBL16_19_SSGTBL16_19_SHIFT                  (0U)
#define CRU_SSGTBL16_19_SSGTBL16_19_MASK                   (0xFFFFFFFFU << CRU_SSGTBL16_19_SSGTBL16_19_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL20_23 */
#define CRU_SSGTBL20_23_OFFSET                             (0x154U)
#define CRU_SSGTBL20_23_SSGTBL20_23_SHIFT                  (0U)
#define CRU_SSGTBL20_23_SSGTBL20_23_MASK                   (0xFFFFFFFFU << CRU_SSGTBL20_23_SSGTBL20_23_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL24_27 */
#define CRU_SSGTBL24_27_OFFSET                             (0x158U)
#define CRU_SSGTBL24_27_SSGTBL24_27_SHIFT                  (0U)
#define CRU_SSGTBL24_27_SSGTBL24_27_MASK                   (0xFFFFFFFFU << CRU_SSGTBL24_27_SSGTBL24_27_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL28_31 */
#define CRU_SSGTBL28_31_OFFSET                             (0x15CU)
#define CRU_SSGTBL28_31_SSGTBL28_31_SHIFT                  (0U)
#define CRU_SSGTBL28_31_SSGTBL28_31_MASK                   (0xFFFFFFFFU << CRU_SSGTBL28_31_SSGTBL28_31_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL32_35 */
#define CRU_SSGTBL32_35_OFFSET                             (0x160U)
#define CRU_SSGTBL32_35_SSGTBL32_35_SHIFT                  (0U)
#define CRU_SSGTBL32_35_SSGTBL32_35_MASK                   (0xFFFFFFFFU << CRU_SSGTBL32_35_SSGTBL32_35_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL36_39 */
#define CRU_SSGTBL36_39_OFFSET                             (0x164U)
#define CRU_SSGTBL36_39_SSGTBL36_39_SHIFT                  (0U)
#define CRU_SSGTBL36_39_SSGTBL36_39_MASK                   (0xFFFFFFFFU << CRU_SSGTBL36_39_SSGTBL36_39_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL40_43 */
#define CRU_SSGTBL40_43_OFFSET                             (0x168U)
#define CRU_SSGTBL40_43_SSGTBL40_43_SHIFT                  (0U)
#define CRU_SSGTBL40_43_SSGTBL40_43_MASK                   (0xFFFFFFFFU << CRU_SSGTBL40_43_SSGTBL40_43_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL44_47 */
#define CRU_SSGTBL44_47_OFFSET                             (0x16CU)
#define CRU_SSGTBL44_47_SSGTBL44_47_SHIFT                  (0U)
#define CRU_SSGTBL44_47_SSGTBL44_47_MASK                   (0xFFFFFFFFU << CRU_SSGTBL44_47_SSGTBL44_47_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL48_51 */
#define CRU_SSGTBL48_51_OFFSET                             (0x170U)
#define CRU_SSGTBL48_51_SSGTBL48_51_SHIFT                  (0U)
#define CRU_SSGTBL48_51_SSGTBL48_51_MASK                   (0xFFFFFFFFU << CRU_SSGTBL48_51_SSGTBL48_51_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL52_55 */
#define CRU_SSGTBL52_55_OFFSET                             (0x174U)
#define CRU_SSGTBL52_55_SSGTBL52_55_SHIFT                  (0U)
#define CRU_SSGTBL52_55_SSGTBL52_55_MASK                   (0xFFFFFFFFU << CRU_SSGTBL52_55_SSGTBL52_55_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL56_59 */
#define CRU_SSGTBL56_59_OFFSET                             (0x178U)
#define CRU_SSGTBL56_59_SSGTBL56_59_SHIFT                  (0U)
#define CRU_SSGTBL56_59_SSGTBL56_59_MASK                   (0xFFFFFFFFU << CRU_SSGTBL56_59_SSGTBL56_59_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL60_63 */
#define CRU_SSGTBL60_63_OFFSET                             (0x17CU)
#define CRU_SSGTBL60_63_SSGTBL60_63_SHIFT                  (0U)
#define CRU_SSGTBL60_63_SSGTBL60_63_MASK                   (0xFFFFFFFFU << CRU_SSGTBL60_63_SSGTBL60_63_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL64_67 */
#define CRU_SSGTBL64_67_OFFSET                             (0x180U)
#define CRU_SSGTBL64_67_SSGTBL64_67_SHIFT                  (0U)
#define CRU_SSGTBL64_67_SSGTBL64_67_MASK                   (0xFFFFFFFFU << CRU_SSGTBL64_67_SSGTBL64_67_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL68_71 */
#define CRU_SSGTBL68_71_OFFSET                             (0x184U)
#define CRU_SSGTBL68_71_SSGTBL68_71_SHIFT                  (0U)
#define CRU_SSGTBL68_71_SSGTBL68_71_MASK                   (0xFFFFFFFFU << CRU_SSGTBL68_71_SSGTBL68_71_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL72_75 */
#define CRU_SSGTBL72_75_OFFSET                             (0x188U)
#define CRU_SSGTBL72_75_SSGTBL72_75_SHIFT                  (0U)
#define CRU_SSGTBL72_75_SSGTBL72_75_MASK                   (0xFFFFFFFFU << CRU_SSGTBL72_75_SSGTBL72_75_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL76_79 */
#define CRU_SSGTBL76_79_OFFSET                             (0x18CU)
#define CRU_SSGTBL76_79_SSGTBL76_79_SHIFT                  (0U)
#define CRU_SSGTBL76_79_SSGTBL76_79_MASK                   (0xFFFFFFFFU << CRU_SSGTBL76_79_SSGTBL76_79_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL80_83 */
#define CRU_SSGTBL80_83_OFFSET                             (0x190U)
#define CRU_SSGTBL80_83_SSGTBL80_83_SHIFT                  (0U)
#define CRU_SSGTBL80_83_SSGTBL80_83_MASK                   (0xFFFFFFFFU << CRU_SSGTBL80_83_SSGTBL80_83_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL84_87 */
#define CRU_SSGTBL84_87_OFFSET                             (0x194U)
#define CRU_SSGTBL84_87_SSGTBL84_87_SHIFT                  (0U)
#define CRU_SSGTBL84_87_SSGTBL84_87_MASK                   (0xFFFFFFFFU << CRU_SSGTBL84_87_SSGTBL84_87_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL88_91 */
#define CRU_SSGTBL88_91_OFFSET                             (0x198U)
#define CRU_SSGTBL88_91_SSGTBL88_91_SHIFT                  (0U)
#define CRU_SSGTBL88_91_SSGTBL88_91_MASK                   (0xFFFFFFFFU << CRU_SSGTBL88_91_SSGTBL88_91_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL92_95 */
#define CRU_SSGTBL92_95_OFFSET                             (0x19CU)
#define CRU_SSGTBL92_95_SSGTBL92_95_SHIFT                  (0U)
#define CRU_SSGTBL92_95_SSGTBL92_95_MASK                   (0xFFFFFFFFU << CRU_SSGTBL92_95_SSGTBL92_95_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL96_99 */
#define CRU_SSGTBL96_99_OFFSET                             (0x1A0U)
#define CRU_SSGTBL96_99_SSGTBL96_99_SHIFT                  (0U)
#define CRU_SSGTBL96_99_SSGTBL96_99_MASK                   (0xFFFFFFFFU << CRU_SSGTBL96_99_SSGTBL96_99_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL100_103 */
#define CRU_SSGTBL100_103_OFFSET                           (0x1A4U)
#define CRU_SSGTBL100_103_SSGTBL100_103_SHIFT              (0U)
#define CRU_SSGTBL100_103_SSGTBL100_103_MASK               (0xFFFFFFFFU << CRU_SSGTBL100_103_SSGTBL100_103_SHIFT)       /* 0xFFFFFFFF */
/* SSGTBL104_107 */
#define CRU_SSGTBL104_107_OFFSET                           (0x1A8U)
#define CRU_SSGTBL104_107_SSGTBL104_107_SHIFT              (0U)
#define CRU_SSGTBL104_107_SSGTBL104_107_MASK               (0xFFFFFFFFU << CRU_SSGTBL104_107_SSGTBL104_107_SHIFT)       /* 0xFFFFFFFF */
/* SSGTBL108_111 */
#define CRU_SSGTBL108_111_OFFSET                           (0x1ACU)
#define CRU_SSGTBL108_111_SSGTBL108_111_SHIFT              (0U)
#define CRU_SSGTBL108_111_SSGTBL108_111_MASK               (0xFFFFFFFFU << CRU_SSGTBL108_111_SSGTBL108_111_SHIFT)       /* 0xFFFFFFFF */
/* SSGTBL112_115 */
#define CRU_SSGTBL112_115_OFFSET                           (0x1B0U)
#define CRU_SSGTBL112_115_SSGTBL112_115_SHIFT              (0U)
#define CRU_SSGTBL112_115_SSGTBL112_115_MASK               (0xFFFFFFFFU << CRU_SSGTBL112_115_SSGTBL112_115_SHIFT)       /* 0xFFFFFFFF */
/* SSGTBL116_119 */
#define CRU_SSGTBL116_119_OFFSET                           (0x1B4U)
#define CRU_SSGTBL116_119_SSGTBL116_119_SHIFT              (0U)
#define CRU_SSGTBL116_119_SSGTBL116_119_MASK               (0xFFFFFFFFU << CRU_SSGTBL116_119_SSGTBL116_119_SHIFT)       /* 0xFFFFFFFF */
/* SSGTBL120_123 */
#define CRU_SSGTBL120_123_OFFSET                           (0x1B8U)
#define CRU_SSGTBL120_123_SSGTBL120_123_SHIFT              (0U)
#define CRU_SSGTBL120_123_SSGTBL120_123_MASK               (0xFFFFFFFFU << CRU_SSGTBL120_123_SSGTBL120_123_SHIFT)       /* 0xFFFFFFFF */
/* SSGTBL124_127 */
#define CRU_SSGTBL124_127_OFFSET                           (0x1BCU)
#define CRU_SSGTBL124_127_SSGTBL124_127_SHIFT              (0U)
#define CRU_SSGTBL124_127_SSGTBL124_127_MASK               (0xFFFFFFFFU << CRU_SSGTBL124_127_SSGTBL124_127_SHIFT)       /* 0xFFFFFFFF */
/* MODE_CON00 */
#define CRU_MODE_CON00_OFFSET                              (0x280U)
#define CRU_MODE_CON00_CLK_APLL_MODE_SHIFT                 (0U)
#define CRU_MODE_CON00_CLK_APLL_MODE_MASK                  (0x3U << CRU_MODE_CON00_CLK_APLL_MODE_SHIFT)                 /* 0x00000003 */
#define CRU_MODE_CON00_CLK_CPLL_MODE_SHIFT                 (2U)
#define CRU_MODE_CON00_CLK_CPLL_MODE_MASK                  (0x3U << CRU_MODE_CON00_CLK_CPLL_MODE_SHIFT)                 /* 0x0000000C */
#define CRU_MODE_CON00_CLK_GPLL_MODE_SHIFT                 (4U)
#define CRU_MODE_CON00_CLK_GPLL_MODE_MASK                  (0x3U << CRU_MODE_CON00_CLK_GPLL_MODE_SHIFT)                 /* 0x00000030 */
/* CLKSEL_CON00 */
#define CRU_CLKSEL_CON00_OFFSET                            (0x300U)
#define CRU_CLKSEL_CON00_CLK_MATRIX_50M_SRC_DIV_SHIFT      (0U)
#define CRU_CLKSEL_CON00_CLK_MATRIX_50M_SRC_DIV_MASK       (0x1FU << CRU_CLKSEL_CON00_CLK_MATRIX_50M_SRC_DIV_SHIFT)     /* 0x0000001F */
#define CRU_CLKSEL_CON00_CLK_MATRIX_50M_SRC_SEL_SHIFT      (5U)
#define CRU_CLKSEL_CON00_CLK_MATRIX_50M_SRC_SEL_MASK       (0x1U << CRU_CLKSEL_CON00_CLK_MATRIX_50M_SRC_SEL_SHIFT)      /* 0x00000020 */
#define CRU_CLKSEL_CON00_CLK_MATRIX_100M_SRC_DIV_SHIFT     (6U)
#define CRU_CLKSEL_CON00_CLK_MATRIX_100M_SRC_DIV_MASK      (0x1FU << CRU_CLKSEL_CON00_CLK_MATRIX_100M_SRC_DIV_SHIFT)    /* 0x000007C0 */
#define CRU_CLKSEL_CON00_CLK_MATRIX_100M_SRC_SEL_SHIFT     (11U)
#define CRU_CLKSEL_CON00_CLK_MATRIX_100M_SRC_SEL_MASK      (0x1U << CRU_CLKSEL_CON00_CLK_MATRIX_100M_SRC_SEL_SHIFT)     /* 0x00000800 */
/* CLKSEL_CON01 */
#define CRU_CLKSEL_CON01_OFFSET                            (0x304U)
#define CRU_CLKSEL_CON01_CLK_MATRIX_150M_SRC_DIV_SHIFT     (0U)
#define CRU_CLKSEL_CON01_CLK_MATRIX_150M_SRC_DIV_MASK      (0x1FU << CRU_CLKSEL_CON01_CLK_MATRIX_150M_SRC_DIV_SHIFT)    /* 0x0000001F */
#define CRU_CLKSEL_CON01_CLK_MATRIX_150M_SRC_SEL_SHIFT     (5U)
#define CRU_CLKSEL_CON01_CLK_MATRIX_150M_SRC_SEL_MASK      (0x1U << CRU_CLKSEL_CON01_CLK_MATRIX_150M_SRC_SEL_SHIFT)     /* 0x00000020 */
#define CRU_CLKSEL_CON01_CLK_MATRIX_200M_SRC_DIV_SHIFT     (6U)
#define CRU_CLKSEL_CON01_CLK_MATRIX_200M_SRC_DIV_MASK      (0x1FU << CRU_CLKSEL_CON01_CLK_MATRIX_200M_SRC_DIV_SHIFT)    /* 0x000007C0 */
#define CRU_CLKSEL_CON01_CLK_MATRIX_200M_SRC_SEL_SHIFT     (11U)
#define CRU_CLKSEL_CON01_CLK_MATRIX_200M_SRC_SEL_MASK      (0x1U << CRU_CLKSEL_CON01_CLK_MATRIX_200M_SRC_SEL_SHIFT)     /* 0x00000800 */
/* CLKSEL_CON02 */
#define CRU_CLKSEL_CON02_OFFSET                            (0x308U)
#define CRU_CLKSEL_CON02_CLK_MATRIX_250M_SRC_DIV_SHIFT     (0U)
#define CRU_CLKSEL_CON02_CLK_MATRIX_250M_SRC_DIV_MASK      (0x1FU << CRU_CLKSEL_CON02_CLK_MATRIX_250M_SRC_DIV_SHIFT)    /* 0x0000001F */
#define CRU_CLKSEL_CON02_CLK_MATRIX_250M_SRC_SEL_SHIFT     (5U)
#define CRU_CLKSEL_CON02_CLK_MATRIX_250M_SRC_SEL_MASK      (0x1U << CRU_CLKSEL_CON02_CLK_MATRIX_250M_SRC_SEL_SHIFT)     /* 0x00000020 */
#define CRU_CLKSEL_CON02_CLK_MATRIX_300M_SRC_DIV_SHIFT     (6U)
#define CRU_CLKSEL_CON02_CLK_MATRIX_300M_SRC_DIV_MASK      (0x1FU << CRU_CLKSEL_CON02_CLK_MATRIX_300M_SRC_DIV_SHIFT)    /* 0x000007C0 */
#define CRU_CLKSEL_CON02_CLK_MATRIX_300M_SRC_SEL_SHIFT     (11U)
#define CRU_CLKSEL_CON02_CLK_MATRIX_300M_SRC_SEL_MASK      (0x1U << CRU_CLKSEL_CON02_CLK_MATRIX_300M_SRC_SEL_SHIFT)     /* 0x00000800 */
/* CLKSEL_CON03 */
#define CRU_CLKSEL_CON03_OFFSET                            (0x30CU)
#define CRU_CLKSEL_CON03_CLK_MATRIX_339M_SRC_DIV_SHIFT     (0U)
#define CRU_CLKSEL_CON03_CLK_MATRIX_339M_SRC_DIV_MASK      (0x1FU << CRU_CLKSEL_CON03_CLK_MATRIX_339M_SRC_DIV_SHIFT)    /* 0x0000001F */
#define CRU_CLKSEL_CON03_CLK_MATRIX_339M_SRC_SEL_SHIFT     (5U)
#define CRU_CLKSEL_CON03_CLK_MATRIX_339M_SRC_SEL_MASK      (0x1U << CRU_CLKSEL_CON03_CLK_MATRIX_339M_SRC_SEL_SHIFT)     /* 0x00000020 */
#define CRU_CLKSEL_CON03_CLK_MATRIX_400M_SRC_DIV_SHIFT     (6U)
#define CRU_CLKSEL_CON03_CLK_MATRIX_400M_SRC_DIV_MASK      (0x1FU << CRU_CLKSEL_CON03_CLK_MATRIX_400M_SRC_DIV_SHIFT)    /* 0x000007C0 */
#define CRU_CLKSEL_CON03_CLK_MATRIX_400M_SRC_SEL_SHIFT     (11U)
#define CRU_CLKSEL_CON03_CLK_MATRIX_400M_SRC_SEL_MASK      (0x1U << CRU_CLKSEL_CON03_CLK_MATRIX_400M_SRC_SEL_SHIFT)     /* 0x00000800 */
/* CLKSEL_CON04 */
#define CRU_CLKSEL_CON04_OFFSET                            (0x310U)
#define CRU_CLKSEL_CON04_CLK_MATRIX_450M_SRC_DIV_SHIFT     (0U)
#define CRU_CLKSEL_CON04_CLK_MATRIX_450M_SRC_DIV_MASK      (0x1FU << CRU_CLKSEL_CON04_CLK_MATRIX_450M_SRC_DIV_SHIFT)    /* 0x0000001F */
#define CRU_CLKSEL_CON04_CLK_MATRIX_450M_SRC_SEL_SHIFT     (5U)
#define CRU_CLKSEL_CON04_CLK_MATRIX_450M_SRC_SEL_MASK      (0x1U << CRU_CLKSEL_CON04_CLK_MATRIX_450M_SRC_SEL_SHIFT)     /* 0x00000020 */
#define CRU_CLKSEL_CON04_CLK_MATRIX_500M_SRC_DIV_SHIFT     (6U)
#define CRU_CLKSEL_CON04_CLK_MATRIX_500M_SRC_DIV_MASK      (0x1FU << CRU_CLKSEL_CON04_CLK_MATRIX_500M_SRC_DIV_SHIFT)    /* 0x000007C0 */
#define CRU_CLKSEL_CON04_CLK_MATRIX_500M_SRC_SEL_SHIFT     (11U)
#define CRU_CLKSEL_CON04_CLK_MATRIX_500M_SRC_SEL_MASK      (0x1U << CRU_CLKSEL_CON04_CLK_MATRIX_500M_SRC_SEL_SHIFT)     /* 0x00000800 */
/* CLKSEL_CON05 */
#define CRU_CLKSEL_CON05_OFFSET                            (0x314U)
#define CRU_CLKSEL_CON05_CLK_UART0_SRC_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON05_CLK_UART0_SRC_DIV_MASK            (0x1FU << CRU_CLKSEL_CON05_CLK_UART0_SRC_DIV_SHIFT)          /* 0x0000001F */
#define CRU_CLKSEL_CON05_CLK_UART0_SRC_SEL_SHIFT           (5U)
#define CRU_CLKSEL_CON05_CLK_UART0_SRC_SEL_MASK            (0x1U << CRU_CLKSEL_CON05_CLK_UART0_SRC_SEL_SHIFT)           /* 0x00000020 */
/* CLKSEL_CON06 */
#define CRU_CLKSEL_CON06_OFFSET                            (0x318U)
#define CRU_CLKSEL_CON06_CLK_UART0_FRAC_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON06_CLK_UART0_FRAC_DIV_MASK           (0xFFFFFFFFU << CRU_CLKSEL_CON06_CLK_UART0_FRAC_DIV_SHIFT)   /* 0xFFFFFFFF */
/* CLKSEL_CON07 */
#define CRU_CLKSEL_CON07_OFFSET                            (0x31CU)
#define CRU_CLKSEL_CON07_SCLK_UART0_SRC_SEL_SHIFT          (0U)
#define CRU_CLKSEL_CON07_SCLK_UART0_SRC_SEL_MASK           (0x3U << CRU_CLKSEL_CON07_SCLK_UART0_SRC_SEL_SHIFT)          /* 0x00000003 */
#define CRU_CLKSEL_CON07_CLK_UART1_SRC_DIV_SHIFT           (2U)
#define CRU_CLKSEL_CON07_CLK_UART1_SRC_DIV_MASK            (0x1FU << CRU_CLKSEL_CON07_CLK_UART1_SRC_DIV_SHIFT)          /* 0x0000007C */
#define CRU_CLKSEL_CON07_CLK_UART1_SRC_SEL_SHIFT           (7U)
#define CRU_CLKSEL_CON07_CLK_UART1_SRC_SEL_MASK            (0x1U << CRU_CLKSEL_CON07_CLK_UART1_SRC_SEL_SHIFT)           /* 0x00000080 */
/* CLKSEL_CON08 */
#define CRU_CLKSEL_CON08_OFFSET                            (0x320U)
#define CRU_CLKSEL_CON08_CLK_UART1_FRAC_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON08_CLK_UART1_FRAC_DIV_MASK           (0xFFFFFFFFU << CRU_CLKSEL_CON08_CLK_UART1_FRAC_DIV_SHIFT)   /* 0xFFFFFFFF */
/* CLKSEL_CON09 */
#define CRU_CLKSEL_CON09_OFFSET                            (0x324U)
#define CRU_CLKSEL_CON09_SCLK_UART1_SRC_SEL_SHIFT          (0U)
#define CRU_CLKSEL_CON09_SCLK_UART1_SRC_SEL_MASK           (0x3U << CRU_CLKSEL_CON09_SCLK_UART1_SRC_SEL_SHIFT)          /* 0x00000003 */
#define CRU_CLKSEL_CON09_CLK_UART2_SRC_DIV_SHIFT           (2U)
#define CRU_CLKSEL_CON09_CLK_UART2_SRC_DIV_MASK            (0x1FU << CRU_CLKSEL_CON09_CLK_UART2_SRC_DIV_SHIFT)          /* 0x0000007C */
#define CRU_CLKSEL_CON09_CLK_UART2_SRC_SEL_SHIFT           (7U)
#define CRU_CLKSEL_CON09_CLK_UART2_SRC_SEL_MASK            (0x1U << CRU_CLKSEL_CON09_CLK_UART2_SRC_SEL_SHIFT)           /* 0x00000080 */
/* CLKSEL_CON10 */
#define CRU_CLKSEL_CON10_OFFSET                            (0x328U)
#define CRU_CLKSEL_CON10_CLK_UART2_FRAC_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON10_CLK_UART2_FRAC_DIV_MASK           (0xFFFFFFFFU << CRU_CLKSEL_CON10_CLK_UART2_FRAC_DIV_SHIFT)   /* 0xFFFFFFFF */
/* CLKSEL_CON11 */
#define CRU_CLKSEL_CON11_OFFSET                            (0x32CU)
#define CRU_CLKSEL_CON11_SCLK_UART2_SRC_SEL_SHIFT          (0U)
#define CRU_CLKSEL_CON11_SCLK_UART2_SRC_SEL_MASK           (0x3U << CRU_CLKSEL_CON11_SCLK_UART2_SRC_SEL_SHIFT)          /* 0x00000003 */
#define CRU_CLKSEL_CON11_CLK_UART3_SRC_DIV_SHIFT           (2U)
#define CRU_CLKSEL_CON11_CLK_UART3_SRC_DIV_MASK            (0x1FU << CRU_CLKSEL_CON11_CLK_UART3_SRC_DIV_SHIFT)          /* 0x0000007C */
#define CRU_CLKSEL_CON11_CLK_UART3_SRC_SEL_SHIFT           (7U)
#define CRU_CLKSEL_CON11_CLK_UART3_SRC_SEL_MASK            (0x1U << CRU_CLKSEL_CON11_CLK_UART3_SRC_SEL_SHIFT)           /* 0x00000080 */
/* CLKSEL_CON12 */
#define CRU_CLKSEL_CON12_OFFSET                            (0x330U)
#define CRU_CLKSEL_CON12_CLK_UART3_FRAC_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON12_CLK_UART3_FRAC_DIV_MASK           (0xFFFFFFFFU << CRU_CLKSEL_CON12_CLK_UART3_FRAC_DIV_SHIFT)   /* 0xFFFFFFFF */
/* CLKSEL_CON13 */
#define CRU_CLKSEL_CON13_OFFSET                            (0x334U)
#define CRU_CLKSEL_CON13_SCLK_UART3_SRC_SEL_SHIFT          (0U)
#define CRU_CLKSEL_CON13_SCLK_UART3_SRC_SEL_MASK           (0x3U << CRU_CLKSEL_CON13_SCLK_UART3_SRC_SEL_SHIFT)          /* 0x00000003 */
#define CRU_CLKSEL_CON13_CLK_UART4_SRC_DIV_SHIFT           (2U)
#define CRU_CLKSEL_CON13_CLK_UART4_SRC_DIV_MASK            (0x1FU << CRU_CLKSEL_CON13_CLK_UART4_SRC_DIV_SHIFT)          /* 0x0000007C */
#define CRU_CLKSEL_CON13_CLK_UART4_SRC_SEL_SHIFT           (7U)
#define CRU_CLKSEL_CON13_CLK_UART4_SRC_SEL_MASK            (0x1U << CRU_CLKSEL_CON13_CLK_UART4_SRC_SEL_SHIFT)           /* 0x00000080 */
/* CLKSEL_CON14 */
#define CRU_CLKSEL_CON14_OFFSET                            (0x338U)
#define CRU_CLKSEL_CON14_CLK_UART4_FRAC_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON14_CLK_UART4_FRAC_DIV_MASK           (0xFFFFFFFFU << CRU_CLKSEL_CON14_CLK_UART4_FRAC_DIV_SHIFT)   /* 0xFFFFFFFF */
/* CLKSEL_CON15 */
#define CRU_CLKSEL_CON15_OFFSET                            (0x33CU)
#define CRU_CLKSEL_CON15_SCLK_UART4_SRC_SEL_SHIFT          (0U)
#define CRU_CLKSEL_CON15_SCLK_UART4_SRC_SEL_MASK           (0x3U << CRU_CLKSEL_CON15_SCLK_UART4_SRC_SEL_SHIFT)          /* 0x00000003 */
#define CRU_CLKSEL_CON15_CLK_UART5_SRC_DIV_SHIFT           (2U)
#define CRU_CLKSEL_CON15_CLK_UART5_SRC_DIV_MASK            (0x1FU << CRU_CLKSEL_CON15_CLK_UART5_SRC_DIV_SHIFT)          /* 0x0000007C */
#define CRU_CLKSEL_CON15_CLK_UART5_SRC_SEL_SHIFT           (7U)
#define CRU_CLKSEL_CON15_CLK_UART5_SRC_SEL_MASK            (0x1U << CRU_CLKSEL_CON15_CLK_UART5_SRC_SEL_SHIFT)           /* 0x00000080 */
/* CLKSEL_CON16 */
#define CRU_CLKSEL_CON16_OFFSET                            (0x340U)
#define CRU_CLKSEL_CON16_CLK_UART5_FRAC_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON16_CLK_UART5_FRAC_DIV_MASK           (0xFFFFFFFFU << CRU_CLKSEL_CON16_CLK_UART5_FRAC_DIV_SHIFT)   /* 0xFFFFFFFF */
/* CLKSEL_CON17 */
#define CRU_CLKSEL_CON17_OFFSET                            (0x344U)
#define CRU_CLKSEL_CON17_SCLK_UART5_SRC_SEL_SHIFT          (0U)
#define CRU_CLKSEL_CON17_SCLK_UART5_SRC_SEL_MASK           (0x3U << CRU_CLKSEL_CON17_SCLK_UART5_SRC_SEL_SHIFT)          /* 0x00000003 */
#define CRU_CLKSEL_CON17_CLK_I2S0_8CH_TX_SRC_DIV_SHIFT     (2U)
#define CRU_CLKSEL_CON17_CLK_I2S0_8CH_TX_SRC_DIV_MASK      (0x1FU << CRU_CLKSEL_CON17_CLK_I2S0_8CH_TX_SRC_DIV_SHIFT)    /* 0x0000007C */
#define CRU_CLKSEL_CON17_CLK_I2S0_8CH_TX_SRC_SEL_SHIFT     (7U)
#define CRU_CLKSEL_CON17_CLK_I2S0_8CH_TX_SRC_SEL_MASK      (0x1U << CRU_CLKSEL_CON17_CLK_I2S0_8CH_TX_SRC_SEL_SHIFT)     /* 0x00000080 */
/* CLKSEL_CON18 */
#define CRU_CLKSEL_CON18_OFFSET                            (0x348U)
#define CRU_CLKSEL_CON18_CLK_I2S0_8CH_TX_FRAC_DIV_SHIFT    (0U)
#define CRU_CLKSEL_CON18_CLK_I2S0_8CH_TX_FRAC_DIV_MASK     (0xFFFFFFFFU << CRU_CLKSEL_CON18_CLK_I2S0_8CH_TX_FRAC_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON19 */
#define CRU_CLKSEL_CON19_OFFSET                            (0x34CU)
#define CRU_CLKSEL_CON19_MCLK_I2S0_8CH_TX_SRC_PERI_SEL_SHIFT (0U)
#define CRU_CLKSEL_CON19_MCLK_I2S0_8CH_TX_SRC_PERI_SEL_MASK (0x3U << CRU_CLKSEL_CON19_MCLK_I2S0_8CH_TX_SRC_PERI_SEL_SHIFT) /* 0x00000003 */
#define CRU_CLKSEL_CON19_CLK_I2S0_8CH_RX_SRC_DIV_SHIFT     (2U)
#define CRU_CLKSEL_CON19_CLK_I2S0_8CH_RX_SRC_DIV_MASK      (0x1FU << CRU_CLKSEL_CON19_CLK_I2S0_8CH_RX_SRC_DIV_SHIFT)    /* 0x0000007C */
#define CRU_CLKSEL_CON19_CLK_I2S0_8CH_RX_SRC_SEL_SHIFT     (7U)
#define CRU_CLKSEL_CON19_CLK_I2S0_8CH_RX_SRC_SEL_MASK      (0x1U << CRU_CLKSEL_CON19_CLK_I2S0_8CH_RX_SRC_SEL_SHIFT)     /* 0x00000080 */
/* CLKSEL_CON20 */
#define CRU_CLKSEL_CON20_OFFSET                            (0x350U)
#define CRU_CLKSEL_CON20_CLK_I2S0_8CH_RX_FRAC_DIV_SHIFT    (0U)
#define CRU_CLKSEL_CON20_CLK_I2S0_8CH_RX_FRAC_DIV_MASK     (0xFFFFFFFFU << CRU_CLKSEL_CON20_CLK_I2S0_8CH_RX_FRAC_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON21 */
#define CRU_CLKSEL_CON21_OFFSET                            (0x354U)
#define CRU_CLKSEL_CON21_MCLK_I2S0_8CH_RX_SRC_PERI_SEL_SHIFT (0U)
#define CRU_CLKSEL_CON21_MCLK_I2S0_8CH_RX_SRC_PERI_SEL_MASK (0x3U << CRU_CLKSEL_CON21_MCLK_I2S0_8CH_RX_SRC_PERI_SEL_SHIFT) /* 0x00000003 */
#define CRU_CLKSEL_CON21_I2S0_8CH_MCLKOUT_SEL_SHIFT        (2U)
#define CRU_CLKSEL_CON21_I2S0_8CH_MCLKOUT_SEL_MASK         (0x3U << CRU_CLKSEL_CON21_I2S0_8CH_MCLKOUT_SEL_SHIFT)        /* 0x0000000C */
/* CLKSEL_CON23 */
#define CRU_CLKSEL_CON23_OFFSET                            (0x35CU)
#define CRU_CLKSEL_CON23_DCLK_VOP_SRC_DIV_SHIFT            (3U)
#define CRU_CLKSEL_CON23_DCLK_VOP_SRC_DIV_MASK             (0x1FU << CRU_CLKSEL_CON23_DCLK_VOP_SRC_DIV_SHIFT)           /* 0x000000F8 */
#define CRU_CLKSEL_CON23_DCLK_VOP_SRC_SEL_SHIFT            (8U)
#define CRU_CLKSEL_CON23_DCLK_VOP_SRC_SEL_MASK             (0x1U << CRU_CLKSEL_CON23_DCLK_VOP_SRC_SEL_SHIFT)            /* 0x00000100 */
#define CRU_CLKSEL_CON23_CLK_REF_PVTPLL_0_DIV_SHIFT        (9U)
#define CRU_CLKSEL_CON23_CLK_REF_PVTPLL_0_DIV_MASK         (0x1FU << CRU_CLKSEL_CON23_CLK_REF_PVTPLL_0_DIV_SHIFT)       /* 0x00003E00 */
/* CLKSEL_CON24 */
#define CRU_CLKSEL_CON24_OFFSET                            (0x360U)
#define CRU_CLKSEL_CON24_CLK_REF_PVTPLL_1_DIV_SHIFT        (0U)
#define CRU_CLKSEL_CON24_CLK_REF_PVTPLL_1_DIV_MASK         (0x1FU << CRU_CLKSEL_CON24_CLK_REF_PVTPLL_1_DIV_SHIFT)       /* 0x0000001F */
#define CRU_CLKSEL_CON24_PCLK_TOP_ROOT_SEL_SHIFT           (5U)
#define CRU_CLKSEL_CON24_PCLK_TOP_ROOT_SEL_MASK            (0x3U << CRU_CLKSEL_CON24_PCLK_TOP_ROOT_SEL_SHIFT)           /* 0x00000060 */
#define CRU_CLKSEL_CON24_CLK_TESTOUT_TOP2VEPU_DIV_SHIFT    (7U)
#define CRU_CLKSEL_CON24_CLK_TESTOUT_TOP2VEPU_DIV_MASK     (0x1FU << CRU_CLKSEL_CON24_CLK_TESTOUT_TOP2VEPU_DIV_SHIFT)   /* 0x00000F80 */
#define CRU_CLKSEL_CON24_CLK_TESTOUT_TOP2VEPU_SEL_SHIFT    (12U)
#define CRU_CLKSEL_CON24_CLK_TESTOUT_TOP2VEPU_SEL_MASK     (0x3U << CRU_CLKSEL_CON24_CLK_TESTOUT_TOP2VEPU_SEL_SHIFT)    /* 0x00003000 */
/* CLKSEL_CON25 */
#define CRU_CLKSEL_CON25_OFFSET                            (0x364U)
#define CRU_CLKSEL_CON25_CLK_REF_MIPI0_SRC_DIV_SHIFT       (2U)
#define CRU_CLKSEL_CON25_CLK_REF_MIPI0_SRC_DIV_MASK        (0x1FU << CRU_CLKSEL_CON25_CLK_REF_MIPI0_SRC_DIV_SHIFT)      /* 0x0000007C */
#define CRU_CLKSEL_CON25_CLK_REF_MIPI0_SRC_SEL_SHIFT       (7U)
#define CRU_CLKSEL_CON25_CLK_REF_MIPI0_SRC_SEL_MASK        (0x1U << CRU_CLKSEL_CON25_CLK_REF_MIPI0_SRC_SEL_SHIFT)       /* 0x00000080 */
/* CLKSEL_CON26 */
#define CRU_CLKSEL_CON26_OFFSET                            (0x368U)
#define CRU_CLKSEL_CON26_CLK_REF_MIPI0_FRAC_DIV_SHIFT      (0U)
#define CRU_CLKSEL_CON26_CLK_REF_MIPI0_FRAC_DIV_MASK       (0xFFFFFFFFU << CRU_CLKSEL_CON26_CLK_REF_MIPI0_FRAC_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON27 */
#define CRU_CLKSEL_CON27_OFFSET                            (0x36CU)
#define CRU_CLKSEL_CON27_CLK_REF_MIPI0_OUT_SEL_SHIFT       (0U)
#define CRU_CLKSEL_CON27_CLK_REF_MIPI0_OUT_SEL_MASK        (0x3U << CRU_CLKSEL_CON27_CLK_REF_MIPI0_OUT_SEL_SHIFT)       /* 0x00000003 */
#define CRU_CLKSEL_CON27_CLK_REF_MIPI1_SRC_DIV_SHIFT       (2U)
#define CRU_CLKSEL_CON27_CLK_REF_MIPI1_SRC_DIV_MASK        (0x1FU << CRU_CLKSEL_CON27_CLK_REF_MIPI1_SRC_DIV_SHIFT)      /* 0x0000007C */
#define CRU_CLKSEL_CON27_CLK_REF_MIPI1_SRC_SEL_SHIFT       (7U)
#define CRU_CLKSEL_CON27_CLK_REF_MIPI1_SRC_SEL_MASK        (0x1U << CRU_CLKSEL_CON27_CLK_REF_MIPI1_SRC_SEL_SHIFT)       /* 0x00000080 */
/* CLKSEL_CON28 */
#define CRU_CLKSEL_CON28_OFFSET                            (0x370U)
#define CRU_CLKSEL_CON28_CLK_REF_MIPI1_FRAC_DIV_SHIFT      (0U)
#define CRU_CLKSEL_CON28_CLK_REF_MIPI1_FRAC_DIV_MASK       (0xFFFFFFFFU << CRU_CLKSEL_CON28_CLK_REF_MIPI1_FRAC_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON29 */
#define CRU_CLKSEL_CON29_OFFSET                            (0x374U)
#define CRU_CLKSEL_CON29_CLK_REF_MIPI1_OUT_SEL_SHIFT       (0U)
#define CRU_CLKSEL_CON29_CLK_REF_MIPI1_OUT_SEL_MASK        (0x3U << CRU_CLKSEL_CON29_CLK_REF_MIPI1_OUT_SEL_SHIFT)       /* 0x00000003 */
#define CRU_CLKSEL_CON29_CLK_VICAP_M0_SRC_DIV_SHIFT        (2U)
#define CRU_CLKSEL_CON29_CLK_VICAP_M0_SRC_DIV_MASK         (0x1FU << CRU_CLKSEL_CON29_CLK_VICAP_M0_SRC_DIV_SHIFT)       /* 0x0000007C */
#define CRU_CLKSEL_CON29_CLK_VICAP_M0_SRC_SEL_SHIFT        (7U)
#define CRU_CLKSEL_CON29_CLK_VICAP_M0_SRC_SEL_MASK         (0x1U << CRU_CLKSEL_CON29_CLK_VICAP_M0_SRC_SEL_SHIFT)        /* 0x00000080 */
/* CLKSEL_CON30 */
#define CRU_CLKSEL_CON30_OFFSET                            (0x378U)
#define CRU_CLKSEL_CON30_CLK_VICAP_M0_FRAC_DIV_SHIFT       (0U)
#define CRU_CLKSEL_CON30_CLK_VICAP_M0_FRAC_DIV_MASK        (0xFFFFFFFFU << CRU_CLKSEL_CON30_CLK_VICAP_M0_FRAC_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON31 */
#define CRU_CLKSEL_CON31_OFFSET                            (0x37CU)
#define CRU_CLKSEL_CON31_CLK_VICAP_M0_OUT_SEL_SHIFT        (0U)
#define CRU_CLKSEL_CON31_CLK_VICAP_M0_OUT_SEL_MASK         (0x3U << CRU_CLKSEL_CON31_CLK_VICAP_M0_OUT_SEL_SHIFT)        /* 0x00000003 */
#define CRU_CLKSEL_CON31_CLK_VICAP_M1_SRC_DIV_SHIFT        (2U)
#define CRU_CLKSEL_CON31_CLK_VICAP_M1_SRC_DIV_MASK         (0x1FU << CRU_CLKSEL_CON31_CLK_VICAP_M1_SRC_DIV_SHIFT)       /* 0x0000007C */
#define CRU_CLKSEL_CON31_CLK_VICAP_M1_SRC_SEL_SHIFT        (7U)
#define CRU_CLKSEL_CON31_CLK_VICAP_M1_SRC_SEL_MASK         (0x1U << CRU_CLKSEL_CON31_CLK_VICAP_M1_SRC_SEL_SHIFT)        /* 0x00000080 */
/* CLKSEL_CON32 */
#define CRU_CLKSEL_CON32_OFFSET                            (0x380U)
#define CRU_CLKSEL_CON32_CLK_VICAP_M1_FRAC_DIV_SHIFT       (0U)
#define CRU_CLKSEL_CON32_CLK_VICAP_M1_FRAC_DIV_MASK        (0xFFFFFFFFU << CRU_CLKSEL_CON32_CLK_VICAP_M1_FRAC_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON33 */
#define CRU_CLKSEL_CON33_OFFSET                            (0x384U)
#define CRU_CLKSEL_CON33_CLK_VICAP_M1_OUT_SEL_SHIFT        (0U)
#define CRU_CLKSEL_CON33_CLK_VICAP_M1_OUT_SEL_MASK         (0x3U << CRU_CLKSEL_CON33_CLK_VICAP_M1_OUT_SEL_SHIFT)        /* 0x00000003 */
/* GATE_CON00 */
#define CRU_GATE_CON00_OFFSET                              (0x800U)
#define CRU_GATE_CON00_CLK_MATRIX_50M_SRC_EN_SHIFT         (1U)
#define CRU_GATE_CON00_CLK_MATRIX_50M_SRC_EN_MASK          (0x1U << CRU_GATE_CON00_CLK_MATRIX_50M_SRC_EN_SHIFT)         /* 0x00000002 */
#define CRU_GATE_CON00_CLK_MATRIX_100M_SRC_EN_SHIFT        (2U)
#define CRU_GATE_CON00_CLK_MATRIX_100M_SRC_EN_MASK         (0x1U << CRU_GATE_CON00_CLK_MATRIX_100M_SRC_EN_SHIFT)        /* 0x00000004 */
#define CRU_GATE_CON00_CLK_MATRIX_150M_SRC_EN_SHIFT        (3U)
#define CRU_GATE_CON00_CLK_MATRIX_150M_SRC_EN_MASK         (0x1U << CRU_GATE_CON00_CLK_MATRIX_150M_SRC_EN_SHIFT)        /* 0x00000008 */
#define CRU_GATE_CON00_CLK_MATRIX_200M_SRC_EN_SHIFT        (4U)
#define CRU_GATE_CON00_CLK_MATRIX_200M_SRC_EN_MASK         (0x1U << CRU_GATE_CON00_CLK_MATRIX_200M_SRC_EN_SHIFT)        /* 0x00000010 */
#define CRU_GATE_CON00_CLK_MATRIX_250M_SRC_EN_SHIFT        (5U)
#define CRU_GATE_CON00_CLK_MATRIX_250M_SRC_EN_MASK         (0x1U << CRU_GATE_CON00_CLK_MATRIX_250M_SRC_EN_SHIFT)        /* 0x00000020 */
#define CRU_GATE_CON00_CLK_MATRIX_300M_SRC_EN_SHIFT        (6U)
#define CRU_GATE_CON00_CLK_MATRIX_300M_SRC_EN_MASK         (0x1U << CRU_GATE_CON00_CLK_MATRIX_300M_SRC_EN_SHIFT)        /* 0x00000040 */
#define CRU_GATE_CON00_CLK_MATRIX_339M_SRC_EN_SHIFT        (7U)
#define CRU_GATE_CON00_CLK_MATRIX_339M_SRC_EN_MASK         (0x1U << CRU_GATE_CON00_CLK_MATRIX_339M_SRC_EN_SHIFT)        /* 0x00000080 */
#define CRU_GATE_CON00_CLK_MATRIX_400M_SRC_EN_SHIFT        (8U)
#define CRU_GATE_CON00_CLK_MATRIX_400M_SRC_EN_MASK         (0x1U << CRU_GATE_CON00_CLK_MATRIX_400M_SRC_EN_SHIFT)        /* 0x00000100 */
#define CRU_GATE_CON00_CLK_MATRIX_450M_SRC_EN_SHIFT        (9U)
#define CRU_GATE_CON00_CLK_MATRIX_450M_SRC_EN_MASK         (0x1U << CRU_GATE_CON00_CLK_MATRIX_450M_SRC_EN_SHIFT)        /* 0x00000200 */
#define CRU_GATE_CON00_CLK_MATRIX_500M_SRC_EN_SHIFT        (10U)
#define CRU_GATE_CON00_CLK_MATRIX_500M_SRC_EN_MASK         (0x1U << CRU_GATE_CON00_CLK_MATRIX_500M_SRC_EN_SHIFT)        /* 0x00000400 */
#define CRU_GATE_CON00_CLK_UART0_EN_SHIFT                  (11U)
#define CRU_GATE_CON00_CLK_UART0_EN_MASK                   (0x1U << CRU_GATE_CON00_CLK_UART0_EN_SHIFT)                  /* 0x00000800 */
#define CRU_GATE_CON00_CLK_UART0_FRAC_EN_SHIFT             (12U)
#define CRU_GATE_CON00_CLK_UART0_FRAC_EN_MASK              (0x1U << CRU_GATE_CON00_CLK_UART0_FRAC_EN_SHIFT)             /* 0x00001000 */
#define CRU_GATE_CON00_SCLK_UART0_EN_SHIFT                 (13U)
#define CRU_GATE_CON00_SCLK_UART0_EN_MASK                  (0x1U << CRU_GATE_CON00_SCLK_UART0_EN_SHIFT)                 /* 0x00002000 */
#define CRU_GATE_CON00_CLK_UART1_EN_SHIFT                  (14U)
#define CRU_GATE_CON00_CLK_UART1_EN_MASK                   (0x1U << CRU_GATE_CON00_CLK_UART1_EN_SHIFT)                  /* 0x00004000 */
#define CRU_GATE_CON00_CLK_UART1_FRAC_EN_SHIFT             (15U)
#define CRU_GATE_CON00_CLK_UART1_FRAC_EN_MASK              (0x1U << CRU_GATE_CON00_CLK_UART1_FRAC_EN_SHIFT)             /* 0x00008000 */
/* GATE_CON01 */
#define CRU_GATE_CON01_OFFSET                              (0x804U)
#define CRU_GATE_CON01_SCLK_UART1_EN_SHIFT                 (0U)
#define CRU_GATE_CON01_SCLK_UART1_EN_MASK                  (0x1U << CRU_GATE_CON01_SCLK_UART1_EN_SHIFT)                 /* 0x00000001 */
#define CRU_GATE_CON01_CLK_UART2_EN_SHIFT                  (1U)
#define CRU_GATE_CON01_CLK_UART2_EN_MASK                   (0x1U << CRU_GATE_CON01_CLK_UART2_EN_SHIFT)                  /* 0x00000002 */
#define CRU_GATE_CON01_CLK_UART2_FRAC_EN_SHIFT             (2U)
#define CRU_GATE_CON01_CLK_UART2_FRAC_EN_MASK              (0x1U << CRU_GATE_CON01_CLK_UART2_FRAC_EN_SHIFT)             /* 0x00000004 */
#define CRU_GATE_CON01_SCLK_UART2_EN_SHIFT                 (3U)
#define CRU_GATE_CON01_SCLK_UART2_EN_MASK                  (0x1U << CRU_GATE_CON01_SCLK_UART2_EN_SHIFT)                 /* 0x00000008 */
#define CRU_GATE_CON01_CLK_UART3_EN_SHIFT                  (4U)
#define CRU_GATE_CON01_CLK_UART3_EN_MASK                   (0x1U << CRU_GATE_CON01_CLK_UART3_EN_SHIFT)                  /* 0x00000010 */
#define CRU_GATE_CON01_CLK_UART3_FRAC_EN_SHIFT             (5U)
#define CRU_GATE_CON01_CLK_UART3_FRAC_EN_MASK              (0x1U << CRU_GATE_CON01_CLK_UART3_FRAC_EN_SHIFT)             /* 0x00000020 */
#define CRU_GATE_CON01_SCLK_UART3_EN_SHIFT                 (6U)
#define CRU_GATE_CON01_SCLK_UART3_EN_MASK                  (0x1U << CRU_GATE_CON01_SCLK_UART3_EN_SHIFT)                 /* 0x00000040 */
#define CRU_GATE_CON01_CLK_UART4_EN_SHIFT                  (7U)
#define CRU_GATE_CON01_CLK_UART4_EN_MASK                   (0x1U << CRU_GATE_CON01_CLK_UART4_EN_SHIFT)                  /* 0x00000080 */
#define CRU_GATE_CON01_CLK_UART4_FRAC_EN_SHIFT             (8U)
#define CRU_GATE_CON01_CLK_UART4_FRAC_EN_MASK              (0x1U << CRU_GATE_CON01_CLK_UART4_FRAC_EN_SHIFT)             /* 0x00000100 */
#define CRU_GATE_CON01_SCLK_UART4_EN_SHIFT                 (9U)
#define CRU_GATE_CON01_SCLK_UART4_EN_MASK                  (0x1U << CRU_GATE_CON01_SCLK_UART4_EN_SHIFT)                 /* 0x00000200 */
#define CRU_GATE_CON01_CLK_UART5_EN_SHIFT                  (10U)
#define CRU_GATE_CON01_CLK_UART5_EN_MASK                   (0x1U << CRU_GATE_CON01_CLK_UART5_EN_SHIFT)                  /* 0x00000400 */
#define CRU_GATE_CON01_CLK_UART5_FRAC_EN_SHIFT             (11U)
#define CRU_GATE_CON01_CLK_UART5_FRAC_EN_MASK              (0x1U << CRU_GATE_CON01_CLK_UART5_FRAC_EN_SHIFT)             /* 0x00000800 */
#define CRU_GATE_CON01_SCLK_UART5_EN_SHIFT                 (12U)
#define CRU_GATE_CON01_SCLK_UART5_EN_MASK                  (0x1U << CRU_GATE_CON01_SCLK_UART5_EN_SHIFT)                 /* 0x00001000 */
#define CRU_GATE_CON01_CLK_I2S0_8CH_TX_EN_SHIFT            (13U)
#define CRU_GATE_CON01_CLK_I2S0_8CH_TX_EN_MASK             (0x1U << CRU_GATE_CON01_CLK_I2S0_8CH_TX_EN_SHIFT)            /* 0x00002000 */
#define CRU_GATE_CON01_CLK_I2S0_8CH_FRAC_TX_EN_SHIFT       (14U)
#define CRU_GATE_CON01_CLK_I2S0_8CH_FRAC_TX_EN_MASK        (0x1U << CRU_GATE_CON01_CLK_I2S0_8CH_FRAC_TX_EN_SHIFT)       /* 0x00004000 */
#define CRU_GATE_CON01_MCLK_I2S0_8CH_TX_SRC_EN_SHIFT       (15U)
#define CRU_GATE_CON01_MCLK_I2S0_8CH_TX_SRC_EN_MASK        (0x1U << CRU_GATE_CON01_MCLK_I2S0_8CH_TX_SRC_EN_SHIFT)       /* 0x00008000 */
/* GATE_CON02 */
#define CRU_GATE_CON02_OFFSET                              (0x808U)
#define CRU_GATE_CON02_CLK_I2S0_8CH_RX_EN_SHIFT            (0U)
#define CRU_GATE_CON02_CLK_I2S0_8CH_RX_EN_MASK             (0x1U << CRU_GATE_CON02_CLK_I2S0_8CH_RX_EN_SHIFT)            /* 0x00000001 */
#define CRU_GATE_CON02_CLK_I2S0_8CH_FRAC_RX_EN_SHIFT       (1U)
#define CRU_GATE_CON02_CLK_I2S0_8CH_FRAC_RX_EN_MASK        (0x1U << CRU_GATE_CON02_CLK_I2S0_8CH_FRAC_RX_EN_SHIFT)       /* 0x00000002 */
#define CRU_GATE_CON02_MCLK_I2S0_8CH_RX_EN_SHIFT           (2U)
#define CRU_GATE_CON02_MCLK_I2S0_8CH_RX_EN_MASK            (0x1U << CRU_GATE_CON02_MCLK_I2S0_8CH_RX_EN_SHIFT)           /* 0x00000004 */
#define CRU_GATE_CON02_DCLK_VOP_SRC_EN_SHIFT               (6U)
#define CRU_GATE_CON02_DCLK_VOP_SRC_EN_MASK                (0x1U << CRU_GATE_CON02_DCLK_VOP_SRC_EN_SHIFT)               /* 0x00000040 */
#define CRU_GATE_CON02_CLK_REF_PVTPLL_0_EN_SHIFT           (7U)
#define CRU_GATE_CON02_CLK_REF_PVTPLL_0_EN_MASK            (0x1U << CRU_GATE_CON02_CLK_REF_PVTPLL_0_EN_SHIFT)           /* 0x00000080 */
#define CRU_GATE_CON02_CLK_REF_PVTPLL_1_EN_SHIFT           (8U)
#define CRU_GATE_CON02_CLK_REF_PVTPLL_1_EN_MASK            (0x1U << CRU_GATE_CON02_CLK_REF_PVTPLL_1_EN_SHIFT)           /* 0x00000100 */
#define CRU_GATE_CON02_PCLK_TOP_ROOT_EN_SHIFT              (9U)
#define CRU_GATE_CON02_PCLK_TOP_ROOT_EN_MASK               (0x1U << CRU_GATE_CON02_PCLK_TOP_ROOT_EN_SHIFT)              /* 0x00000200 */
#define CRU_GATE_CON02_PCLK_CRU_EN_SHIFT                   (10U)
#define CRU_GATE_CON02_PCLK_CRU_EN_MASK                    (0x1U << CRU_GATE_CON02_PCLK_CRU_EN_SHIFT)                   /* 0x00000400 */
#define CRU_GATE_CON02_PCLK_CRU_BIU_EN_SHIFT               (11U)
#define CRU_GATE_CON02_PCLK_CRU_BIU_EN_MASK                (0x1U << CRU_GATE_CON02_PCLK_CRU_BIU_EN_SHIFT)               /* 0x00000800 */
#define CRU_GATE_CON02_CLK_TESTOUT_EN_SHIFT                (12U)
#define CRU_GATE_CON02_CLK_TESTOUT_EN_MASK                 (0x1U << CRU_GATE_CON02_CLK_TESTOUT_EN_SHIFT)                /* 0x00001000 */
#define CRU_GATE_CON02_CLK_APLLTEST_EN_SHIFT               (13U)
#define CRU_GATE_CON02_CLK_APLLTEST_EN_MASK                (0x1U << CRU_GATE_CON02_CLK_APLLTEST_EN_SHIFT)               /* 0x00002000 */
#define CRU_GATE_CON02_CLK_DPLLTEST_EN_SHIFT               (14U)
#define CRU_GATE_CON02_CLK_DPLLTEST_EN_MASK                (0x1U << CRU_GATE_CON02_CLK_DPLLTEST_EN_SHIFT)               /* 0x00004000 */
#define CRU_GATE_CON02_CLK_CPLLTEST_EN_SHIFT               (15U)
#define CRU_GATE_CON02_CLK_CPLLTEST_EN_MASK                (0x1U << CRU_GATE_CON02_CLK_CPLLTEST_EN_SHIFT)               /* 0x00008000 */
/* GATE_CON03 */
#define CRU_GATE_CON03_OFFSET                              (0x80CU)
#define CRU_GATE_CON03_CLK_GPLLTEST_EN_SHIFT               (0U)
#define CRU_GATE_CON03_CLK_GPLLTEST_EN_MASK                (0x1U << CRU_GATE_CON03_CLK_GPLLTEST_EN_SHIFT)               /* 0x00000001 */
#define CRU_GATE_CON03_CLK_REF_MIPI0_SRC_EN_SHIFT          (4U)
#define CRU_GATE_CON03_CLK_REF_MIPI0_SRC_EN_MASK           (0x1U << CRU_GATE_CON03_CLK_REF_MIPI0_SRC_EN_SHIFT)          /* 0x00000010 */
#define CRU_GATE_CON03_CLK_REF_MIPI0_FRAC_EN_SHIFT         (5U)
#define CRU_GATE_CON03_CLK_REF_MIPI0_FRAC_EN_MASK          (0x1U << CRU_GATE_CON03_CLK_REF_MIPI0_FRAC_EN_SHIFT)         /* 0x00000020 */
#define CRU_GATE_CON03_CLK_REF_MIPI0_OUT_EN_SHIFT          (6U)
#define CRU_GATE_CON03_CLK_REF_MIPI0_OUT_EN_MASK           (0x1U << CRU_GATE_CON03_CLK_REF_MIPI0_OUT_EN_SHIFT)          /* 0x00000040 */
#define CRU_GATE_CON03_CLK_REF_MIPI1_SRC_EN_SHIFT          (7U)
#define CRU_GATE_CON03_CLK_REF_MIPI1_SRC_EN_MASK           (0x1U << CRU_GATE_CON03_CLK_REF_MIPI1_SRC_EN_SHIFT)          /* 0x00000080 */
#define CRU_GATE_CON03_CLK_REF_MIPI1_FRAC_EN_SHIFT         (8U)
#define CRU_GATE_CON03_CLK_REF_MIPI1_FRAC_EN_MASK          (0x1U << CRU_GATE_CON03_CLK_REF_MIPI1_FRAC_EN_SHIFT)         /* 0x00000100 */
#define CRU_GATE_CON03_CLK_REF_MIPI1_OUT_EN_SHIFT          (9U)
#define CRU_GATE_CON03_CLK_REF_MIPI1_OUT_EN_MASK           (0x1U << CRU_GATE_CON03_CLK_REF_MIPI1_OUT_EN_SHIFT)          /* 0x00000200 */
#define CRU_GATE_CON03_CLK_VICAP_M0_SRC_EN_SHIFT           (10U)
#define CRU_GATE_CON03_CLK_VICAP_M0_SRC_EN_MASK            (0x1U << CRU_GATE_CON03_CLK_VICAP_M0_SRC_EN_SHIFT)           /* 0x00000400 */
#define CRU_GATE_CON03_CLK_VICAP_M0_FRAC_EN_SHIFT          (11U)
#define CRU_GATE_CON03_CLK_VICAP_M0_FRAC_EN_MASK           (0x1U << CRU_GATE_CON03_CLK_VICAP_M0_FRAC_EN_SHIFT)          /* 0x00000800 */
#define CRU_GATE_CON03_CLK_VICAP_M0_OUT_EN_SHIFT           (12U)
#define CRU_GATE_CON03_CLK_VICAP_M0_OUT_EN_MASK            (0x1U << CRU_GATE_CON03_CLK_VICAP_M0_OUT_EN_SHIFT)           /* 0x00001000 */
#define CRU_GATE_CON03_CLK_VICAP_M1_SRC_EN_SHIFT           (13U)
#define CRU_GATE_CON03_CLK_VICAP_M1_SRC_EN_MASK            (0x1U << CRU_GATE_CON03_CLK_VICAP_M1_SRC_EN_SHIFT)           /* 0x00002000 */
#define CRU_GATE_CON03_CLK_VICAP_M1_FRAC_EN_SHIFT          (14U)
#define CRU_GATE_CON03_CLK_VICAP_M1_FRAC_EN_MASK           (0x1U << CRU_GATE_CON03_CLK_VICAP_M1_FRAC_EN_SHIFT)          /* 0x00004000 */
#define CRU_GATE_CON03_CLK_VICAP_M1_OUT_EN_SHIFT           (15U)
#define CRU_GATE_CON03_CLK_VICAP_M1_OUT_EN_MASK            (0x1U << CRU_GATE_CON03_CLK_VICAP_M1_OUT_EN_SHIFT)           /* 0x00008000 */
/* SOFTRST_CON02 */
#define CRU_SOFTRST_CON02_OFFSET                           (0xA08U)
#define CRU_SOFTRST_CON02_RESETN_REF_PVTPLL_0_SHIFT        (7U)
#define CRU_SOFTRST_CON02_RESETN_REF_PVTPLL_0_MASK         (0x1U << CRU_SOFTRST_CON02_RESETN_REF_PVTPLL_0_SHIFT)        /* 0x00000080 */
#define CRU_SOFTRST_CON02_RESETN_REF_PVTPLL_1_SHIFT        (8U)
#define CRU_SOFTRST_CON02_RESETN_REF_PVTPLL_1_MASK         (0x1U << CRU_SOFTRST_CON02_RESETN_REF_PVTPLL_1_SHIFT)        /* 0x00000100 */
#define CRU_SOFTRST_CON02_PRESETN_CRU_SHIFT                (10U)
#define CRU_SOFTRST_CON02_PRESETN_CRU_MASK                 (0x1U << CRU_SOFTRST_CON02_PRESETN_CRU_SHIFT)                /* 0x00000400 */
#define CRU_SOFTRST_CON02_PRESETN_CRU_BIU_SHIFT            (11U)
#define CRU_SOFTRST_CON02_PRESETN_CRU_BIU_MASK             (0x1U << CRU_SOFTRST_CON02_PRESETN_CRU_BIU_SHIFT)            /* 0x00000800 */
/* GLB_CNT_TH */
#define CRU_GLB_CNT_TH_OFFSET                              (0xC00U)
#define CRU_GLB_CNT_TH_GLOBAL_RESET_COUNTER_THRESHOLD_SHIFT (0U)
#define CRU_GLB_CNT_TH_GLOBAL_RESET_COUNTER_THRESHOLD_MASK (0xFFFFU << CRU_GLB_CNT_TH_GLOBAL_RESET_COUNTER_THRESHOLD_SHIFT) /* 0x0000FFFF */
#define CRU_GLB_CNT_TH_RESERVED_SHIFT                      (16U)
#define CRU_GLB_CNT_TH_RESERVED_MASK                       (0xFFFFU << CRU_GLB_CNT_TH_RESERVED_SHIFT)                   /* 0xFFFF0000 */
/* GLB_RST_ST */
#define CRU_GLB_RST_ST_OFFSET                              (0xC04U)
#define CRU_GLB_RST_ST_FST_GLB_RST_ST_SHIFT                (0U)
#define CRU_GLB_RST_ST_FST_GLB_RST_ST_MASK                 (0x1U << CRU_GLB_RST_ST_FST_GLB_RST_ST_SHIFT)                /* 0x00000001 */
#define CRU_GLB_RST_ST_SND_GLB_RST_ST_SHIFT                (1U)
#define CRU_GLB_RST_ST_SND_GLB_RST_ST_MASK                 (0x1U << CRU_GLB_RST_ST_SND_GLB_RST_ST_SHIFT)                /* 0x00000002 */
#define CRU_GLB_RST_ST_FST_GLB_TSADC_RST_ST_SHIFT          (2U)
#define CRU_GLB_RST_ST_FST_GLB_TSADC_RST_ST_MASK           (0x1U << CRU_GLB_RST_ST_FST_GLB_TSADC_RST_ST_SHIFT)          /* 0x00000004 */
#define CRU_GLB_RST_ST_SND_GLB_TSADC_RST_ST_SHIFT          (3U)
#define CRU_GLB_RST_ST_SND_GLB_TSADC_RST_ST_MASK           (0x1U << CRU_GLB_RST_ST_SND_GLB_TSADC_RST_ST_SHIFT)          /* 0x00000008 */
#define CRU_GLB_RST_ST_FST_GLB_WDT_RST_ST_SHIFT            (4U)
#define CRU_GLB_RST_ST_FST_GLB_WDT_RST_ST_MASK             (0x1U << CRU_GLB_RST_ST_FST_GLB_WDT_RST_ST_SHIFT)            /* 0x00000010 */
#define CRU_GLB_RST_ST_SND_GLB_WDT_RST_ST_SHIFT            (5U)
#define CRU_GLB_RST_ST_SND_GLB_WDT_RST_ST_MASK             (0x1U << CRU_GLB_RST_ST_SND_GLB_WDT_RST_ST_SHIFT)            /* 0x00000020 */
#define CRU_GLB_RST_ST_GLBRST_WDT_RST_SHIFT                (6U)
#define CRU_GLB_RST_ST_GLBRST_WDT_RST_MASK                 (0x1U << CRU_GLB_RST_ST_GLBRST_WDT_RST_SHIFT)                /* 0x00000040 */
#define CRU_GLB_RST_ST_WDT_SRC_ST_SHIFT                    (11U)
#define CRU_GLB_RST_ST_WDT_SRC_ST_MASK                     (0x1U << CRU_GLB_RST_ST_WDT_SRC_ST_SHIFT)                    /* 0x00000800 */
/* GLB_SRST_FST */
#define CRU_GLB_SRST_FST_OFFSET                            (0xC08U)
#define CRU_GLB_SRST_FST_GLB_SRST_FST_SHIFT                (0U)
#define CRU_GLB_SRST_FST_GLB_SRST_FST_MASK                 (0xFFFFU << CRU_GLB_SRST_FST_GLB_SRST_FST_SHIFT)             /* 0x0000FFFF */
/* GLB_SRST_SND */
#define CRU_GLB_SRST_SND_OFFSET                            (0xC0CU)
#define CRU_GLB_SRST_SND_GLB_SRST_SND_SHIFT                (0U)
#define CRU_GLB_SRST_SND_GLB_SRST_SND_MASK                 (0xFFFFU << CRU_GLB_SRST_SND_GLB_SRST_SND_SHIFT)             /* 0x0000FFFF */
/* GLB_RST_CON */
#define CRU_GLB_RST_CON_OFFSET                             (0xC10U)
#define CRU_GLB_RST_CON_TSADC_GLB_SRST_CTRL_SHIFT          (0U)
#define CRU_GLB_RST_CON_TSADC_GLB_SRST_CTRL_MASK           (0x1U << CRU_GLB_RST_CON_TSADC_GLB_SRST_CTRL_SHIFT)          /* 0x00000001 */
#define CRU_GLB_RST_CON_TSADC_GLB_SRST_EN_SHIFT            (1U)
#define CRU_GLB_RST_CON_TSADC_GLB_SRST_EN_MASK             (0x1U << CRU_GLB_RST_CON_TSADC_GLB_SRST_EN_SHIFT)            /* 0x00000002 */
#define CRU_GLB_RST_CON_PMU_SRST_GLB_CTRL_SHIFT            (2U)
#define CRU_GLB_RST_CON_PMU_SRST_GLB_CTRL_MASK             (0x1U << CRU_GLB_RST_CON_PMU_SRST_GLB_CTRL_SHIFT)            /* 0x00000004 */
#define CRU_GLB_RST_CON_PMU_SRST_GLB_EN_SHIFT              (3U)
#define CRU_GLB_RST_CON_PMU_SRST_GLB_EN_MASK               (0x1U << CRU_GLB_RST_CON_PMU_SRST_GLB_EN_SHIFT)              /* 0x00000008 */
#define CRU_GLB_RST_CON_PMU_SRST_WDT_EN_SHIFT              (4U)
#define CRU_GLB_RST_CON_PMU_SRST_WDT_EN_MASK               (0x1U << CRU_GLB_RST_CON_PMU_SRST_WDT_EN_SHIFT)              /* 0x00000010 */
#define CRU_GLB_RST_CON_CRU_WDT_EN_SHIFT                   (6U)
#define CRU_GLB_RST_CON_CRU_WDT_EN_MASK                    (0x1U << CRU_GLB_RST_CON_CRU_WDT_EN_SHIFT)                   /* 0x00000040 */
#define CRU_GLB_RST_CON_CRU_WDT_CON_SHIFT                  (11U)
#define CRU_GLB_RST_CON_CRU_WDT_CON_MASK                   (0x1U << CRU_GLB_RST_CON_CRU_WDT_CON_SHIFT)                  /* 0x00000800 */
/* SDIO_CON0 */
#define CRU_SDIO_CON0_OFFSET                               (0xC14U)
#define CRU_SDIO_CON0_SDIO_CON0_SHIFT                      (0U)
#define CRU_SDIO_CON0_SDIO_CON0_MASK                       (0xFFFFU << CRU_SDIO_CON0_SDIO_CON0_SHIFT)                   /* 0x0000FFFF */
/* SDIO_CON1 */
#define CRU_SDIO_CON1_OFFSET                               (0xC18U)
#define CRU_SDIO_CON1_SDIO_CON0_SHIFT                      (0U)
#define CRU_SDIO_CON1_SDIO_CON0_MASK                       (0xFFFFU << CRU_SDIO_CON1_SDIO_CON0_SHIFT)                   /* 0x0000FFFF */
/* SDMMC_CON0 */
#define CRU_SDMMC_CON0_OFFSET                              (0xC1CU)
#define CRU_SDMMC_CON0_INIT_STATE_SHIFT                    (0U)
#define CRU_SDMMC_CON0_INIT_STATE_MASK                     (0x1U << CRU_SDMMC_CON0_INIT_STATE_SHIFT)                    /* 0x00000001 */
#define CRU_SDMMC_CON0_DRV_DEGREE_SHIFT                    (1U)
#define CRU_SDMMC_CON0_DRV_DEGREE_MASK                     (0x3U << CRU_SDMMC_CON0_DRV_DEGREE_SHIFT)                    /* 0x00000006 */
#define CRU_SDMMC_CON0_DRV_DELAYNUM_SHIFT                  (3U)
#define CRU_SDMMC_CON0_DRV_DELAYNUM_MASK                   (0xFFU << CRU_SDMMC_CON0_DRV_DELAYNUM_SHIFT)                 /* 0x000007F8 */
#define CRU_SDMMC_CON0_DRV_SEL_SHIFT                       (11U)
#define CRU_SDMMC_CON0_DRV_SEL_MASK                        (0x1U << CRU_SDMMC_CON0_DRV_SEL_SHIFT)                       /* 0x00000800 */
/* SDMMC_CON1 */
#define CRU_SDMMC_CON1_OFFSET                              (0xC20U)
#define CRU_SDMMC_CON1_SAMPLE_DEGREE_SHIFT                 (0U)
#define CRU_SDMMC_CON1_SAMPLE_DEGREE_MASK                  (0x3U << CRU_SDMMC_CON1_SAMPLE_DEGREE_SHIFT)                 /* 0x00000003 */
#define CRU_SDMMC_CON1_SAMPLE_DELAYNUM_SHIFT               (2U)
#define CRU_SDMMC_CON1_SAMPLE_DELAYNUM_MASK                (0xFFU << CRU_SDMMC_CON1_SAMPLE_DELAYNUM_SHIFT)              /* 0x000003FC */
#define CRU_SDMMC_CON1_SAMPLE_SEL_SHIFT                    (10U)
#define CRU_SDMMC_CON1_SAMPLE_SEL_MASK                     (0x1U << CRU_SDMMC_CON1_SAMPLE_SEL_SHIFT)                    /* 0x00000400 */
/* EMMC_CON0 */
#define CRU_EMMC_CON0_OFFSET                               (0xC24U)
#define CRU_EMMC_CON0_INIT_STATE_SHIFT                     (0U)
#define CRU_EMMC_CON0_INIT_STATE_MASK                      (0x1U << CRU_EMMC_CON0_INIT_STATE_SHIFT)                     /* 0x00000001 */
#define CRU_EMMC_CON0_DRV_DEGREE_SHIFT                     (1U)
#define CRU_EMMC_CON0_DRV_DEGREE_MASK                      (0x3U << CRU_EMMC_CON0_DRV_DEGREE_SHIFT)                     /* 0x00000006 */
#define CRU_EMMC_CON0_DRV_DELAYNUM_SHIFT                   (3U)
#define CRU_EMMC_CON0_DRV_DELAYNUM_MASK                    (0xFFU << CRU_EMMC_CON0_DRV_DELAYNUM_SHIFT)                  /* 0x000007F8 */
#define CRU_EMMC_CON0_DRV_SEL_SHIFT                        (11U)
#define CRU_EMMC_CON0_DRV_SEL_MASK                         (0x1U << CRU_EMMC_CON0_DRV_SEL_SHIFT)                        /* 0x00000800 */
/* EMMC_CON1 */
#define CRU_EMMC_CON1_OFFSET                               (0xC28U)
#define CRU_EMMC_CON1_SAMPLE_DEGREE_SHIFT                  (0U)
#define CRU_EMMC_CON1_SAMPLE_DEGREE_MASK                   (0x3U << CRU_EMMC_CON1_SAMPLE_DEGREE_SHIFT)                  /* 0x00000003 */
#define CRU_EMMC_CON1_SAMPLE_DELAYNUM_SHIFT                (2U)
#define CRU_EMMC_CON1_SAMPLE_DELAYNUM_MASK                 (0xFFU << CRU_EMMC_CON1_SAMPLE_DELAYNUM_SHIFT)               /* 0x000003FC */
#define CRU_EMMC_CON1_SAMPLE_SEL_SHIFT                     (10U)
#define CRU_EMMC_CON1_SAMPLE_SEL_MASK                      (0x1U << CRU_EMMC_CON1_SAMPLE_SEL_SHIFT)                     /* 0x00000400 */
/****************************************PERICRU*****************************************/
/* PERICLKSEL_CON01 */
#define PERICRU_PERICLKSEL_CON01_OFFSET                    (0x304U)
#define PERICRU_PERICLKSEL_CON01_PCLK_PERI_ROOT_SEL_SHIFT  (0U)
#define PERICRU_PERICLKSEL_CON01_PCLK_PERI_ROOT_SEL_MASK   (0x3U << PERICRU_PERICLKSEL_CON01_PCLK_PERI_ROOT_SEL_SHIFT)  /* 0x00000003 */
#define PERICRU_PERICLKSEL_CON01_ACLK_PERI_ROOT_SEL_SHIFT  (2U)
#define PERICRU_PERICLKSEL_CON01_ACLK_PERI_ROOT_SEL_MASK   (0x3U << PERICRU_PERICLKSEL_CON01_ACLK_PERI_ROOT_SEL_SHIFT)  /* 0x0000000C */
#define PERICRU_PERICLKSEL_CON01_HCLK_PERI_ROOT_SEL_SHIFT  (4U)
#define PERICRU_PERICLKSEL_CON01_HCLK_PERI_ROOT_SEL_MASK   (0x3U << PERICRU_PERICLKSEL_CON01_HCLK_PERI_ROOT_SEL_SHIFT)  /* 0x00000030 */
#define PERICRU_PERICLKSEL_CON01_CLK_I2C0_SEL_SHIFT        (8U)
#define PERICRU_PERICLKSEL_CON01_CLK_I2C0_SEL_MASK         (0x3U << PERICRU_PERICLKSEL_CON01_CLK_I2C0_SEL_SHIFT)        /* 0x00000300 */
#define PERICRU_PERICLKSEL_CON01_CLK_I2C2_SEL_SHIFT        (12U)
#define PERICRU_PERICLKSEL_CON01_CLK_I2C2_SEL_MASK         (0x3U << PERICRU_PERICLKSEL_CON01_CLK_I2C2_SEL_SHIFT)        /* 0x00003000 */
#define PERICRU_PERICLKSEL_CON01_CLK_I2C3_SEL_SHIFT        (14U)
#define PERICRU_PERICLKSEL_CON01_CLK_I2C3_SEL_MASK         (0x3U << PERICRU_PERICLKSEL_CON01_CLK_I2C3_SEL_SHIFT)        /* 0x0000C000 */
/* PERICLKSEL_CON02 */
#define PERICRU_PERICLKSEL_CON02_OFFSET                    (0x308U)
#define PERICRU_PERICLKSEL_CON02_CLK_I2C4_SEL_SHIFT        (0U)
#define PERICRU_PERICLKSEL_CON02_CLK_I2C4_SEL_MASK         (0x3U << PERICRU_PERICLKSEL_CON02_CLK_I2C4_SEL_SHIFT)        /* 0x00000003 */
/* PERICLKSEL_CON05 */
#define PERICRU_PERICLKSEL_CON05_OFFSET                    (0x314U)
#define PERICRU_PERICLKSEL_CON05_CLK_TESTOUT_PERI2VI_0_DIV_SHIFT (0U)
#define PERICRU_PERICLKSEL_CON05_CLK_TESTOUT_PERI2VI_0_DIV_MASK (0x1FU << PERICRU_PERICLKSEL_CON05_CLK_TESTOUT_PERI2VI_0_DIV_SHIFT) /* 0x0000001F */
#define PERICRU_PERICLKSEL_CON05_CLK_TESTOUT_PERI2VI_0_SEL_SHIFT (5U)
#define PERICRU_PERICLKSEL_CON05_CLK_TESTOUT_PERI2VI_0_SEL_MASK (0x7U << PERICRU_PERICLKSEL_CON05_CLK_TESTOUT_PERI2VI_0_SEL_SHIFT) /* 0x000000E0 */
#define PERICRU_PERICLKSEL_CON05_CLK_TESTOUT_PERI2VI_1_DIV_SHIFT (8U)
#define PERICRU_PERICLKSEL_CON05_CLK_TESTOUT_PERI2VI_1_DIV_MASK (0x1FU << PERICRU_PERICLKSEL_CON05_CLK_TESTOUT_PERI2VI_1_DIV_SHIFT) /* 0x00001F00 */
#define PERICRU_PERICLKSEL_CON05_CLK_TESTOUT_PERI2VI_1_SEL_SHIFT (13U)
#define PERICRU_PERICLKSEL_CON05_CLK_TESTOUT_PERI2VI_1_SEL_MASK (0x7U << PERICRU_PERICLKSEL_CON05_CLK_TESTOUT_PERI2VI_1_SEL_SHIFT) /* 0x0000E000 */
/* PERICLKSEL_CON06 */
#define PERICRU_PERICLKSEL_CON06_OFFSET                    (0x318U)
#define PERICRU_PERICLKSEL_CON06_CLK_SARADC_DIV_SHIFT      (0U)
#define PERICRU_PERICLKSEL_CON06_CLK_SARADC_DIV_MASK       (0x7U << PERICRU_PERICLKSEL_CON06_CLK_SARADC_DIV_SHIFT)      /* 0x00000007 */
#define PERICRU_PERICLKSEL_CON06_CLK_SPI1_SEL_SHIFT        (3U)
#define PERICRU_PERICLKSEL_CON06_CLK_SPI1_SEL_MASK         (0x3U << PERICRU_PERICLKSEL_CON06_CLK_SPI1_SEL_SHIFT)        /* 0x00000018 */
#define PERICRU_PERICLKSEL_CON06_CLK_CORE_CRYPTO_SEL_SHIFT (5U)
#define PERICRU_PERICLKSEL_CON06_CLK_CORE_CRYPTO_SEL_MASK  (0x3U << PERICRU_PERICLKSEL_CON06_CLK_CORE_CRYPTO_SEL_SHIFT) /* 0x00000060 */
#define PERICRU_PERICLKSEL_CON06_CLK_PKA_CRYPTO_SEL_SHIFT  (7U)
#define PERICRU_PERICLKSEL_CON06_CLK_PKA_CRYPTO_SEL_MASK   (0x3U << PERICRU_PERICLKSEL_CON06_CLK_PKA_CRYPTO_SEL_SHIFT)  /* 0x00000180 */
#define PERICRU_PERICLKSEL_CON06_CLK_PWM1_PERI_SEL_SHIFT   (9U)
#define PERICRU_PERICLKSEL_CON06_CLK_PWM1_PERI_SEL_MASK    (0x3U << PERICRU_PERICLKSEL_CON06_CLK_PWM1_PERI_SEL_SHIFT)   /* 0x00000600 */
#define PERICRU_PERICLKSEL_CON06_CLK_PWM2_PERI_SEL_SHIFT   (11U)
#define PERICRU_PERICLKSEL_CON06_CLK_PWM2_PERI_SEL_MASK    (0x3U << PERICRU_PERICLKSEL_CON06_CLK_PWM2_PERI_SEL_SHIFT)   /* 0x00001800 */
/* PERICLKSEL_CON07 */
#define PERICRU_PERICLKSEL_CON07_OFFSET                    (0x31CU)
#define PERICRU_PERICLKSEL_CON07_CCLK_SRC_EMMC_DIV_SHIFT   (0U)
#define PERICRU_PERICLKSEL_CON07_CCLK_SRC_EMMC_DIV_MASK    (0x3FU << PERICRU_PERICLKSEL_CON07_CCLK_SRC_EMMC_DIV_SHIFT)  /* 0x0000003F */
#define PERICRU_PERICLKSEL_CON07_CCLK_SRC_EMMC_SEL_SHIFT   (6U)
#define PERICRU_PERICLKSEL_CON07_CCLK_SRC_EMMC_SEL_MASK    (0x1U << PERICRU_PERICLKSEL_CON07_CCLK_SRC_EMMC_SEL_SHIFT)   /* 0x00000040 */
#define PERICRU_PERICLKSEL_CON07_SCLK_SFC_DIV_SHIFT        (7U)
#define PERICRU_PERICLKSEL_CON07_SCLK_SFC_DIV_MASK         (0x1FU << PERICRU_PERICLKSEL_CON07_SCLK_SFC_DIV_SHIFT)       /* 0x00000F80 */
#define PERICRU_PERICLKSEL_CON07_SCLK_SFC_SEL_SHIFT        (12U)
#define PERICRU_PERICLKSEL_CON07_SCLK_SFC_SEL_MASK         (0x3U << PERICRU_PERICLKSEL_CON07_SCLK_SFC_SEL_SHIFT)        /* 0x00003000 */
#define PERICRU_PERICLKSEL_CON07_DCLK_DECOM_SEL_SHIFT      (14U)
#define PERICRU_PERICLKSEL_CON07_DCLK_DECOM_SEL_MASK       (0x3U << PERICRU_PERICLKSEL_CON07_DCLK_DECOM_SEL_SHIFT)      /* 0x0000C000 */
/* PERICLKSEL_CON08 */
#define PERICRU_PERICLKSEL_CON08_OFFSET                    (0x320U)
#define PERICRU_PERICLKSEL_CON08_MCLK_ACODEC_TX_DIV_SHIFT  (0U)
#define PERICRU_PERICLKSEL_CON08_MCLK_ACODEC_TX_DIV_MASK   (0xFFU << PERICRU_PERICLKSEL_CON08_MCLK_ACODEC_TX_DIV_SHIFT) /* 0x000000FF */
#define PERICRU_PERICLKSEL_CON08_MCLK_ACODEC_RX_DIV_SHIFT  (8U)
#define PERICRU_PERICLKSEL_CON08_MCLK_ACODEC_RX_DIV_MASK   (0xFFU << PERICRU_PERICLKSEL_CON08_MCLK_ACODEC_RX_DIV_SHIFT) /* 0x0000FF00 */
/* PERICLKSEL_CON09 */
#define PERICRU_PERICLKSEL_CON09_OFFSET                    (0x324U)
#define PERICRU_PERICLKSEL_CON09_ACLK_BUS_ROOT_SEL_SHIFT   (0U)
#define PERICRU_PERICLKSEL_CON09_ACLK_BUS_ROOT_SEL_MASK    (0x3U << PERICRU_PERICLKSEL_CON09_ACLK_BUS_ROOT_SEL_SHIFT)   /* 0x00000003 */
/* PERICLKSEL_CON11 */
#define PERICRU_PERICLKSEL_CON11_OFFSET                    (0x32CU)
#define PERICRU_PERICLKSEL_CON11_CLK_PWM0_PERI_SEL_SHIFT   (0U)
#define PERICRU_PERICLKSEL_CON11_CLK_PWM0_PERI_SEL_MASK    (0x3U << PERICRU_PERICLKSEL_CON11_CLK_PWM0_PERI_SEL_SHIFT)   /* 0x00000003 */
/* PERIGATE_CON00 */
#define PERICRU_PERIGATE_CON00_OFFSET                      (0x800U)
#define PERICRU_PERIGATE_CON00_PCLK_PERI_ROOT_EN_SHIFT     (0U)
#define PERICRU_PERIGATE_CON00_PCLK_PERI_ROOT_EN_MASK      (0x1U << PERICRU_PERIGATE_CON00_PCLK_PERI_ROOT_EN_SHIFT)     /* 0x00000001 */
#define PERICRU_PERIGATE_CON00_ACLK_PERI_ROOT_EN_SHIFT     (1U)
#define PERICRU_PERIGATE_CON00_ACLK_PERI_ROOT_EN_MASK      (0x1U << PERICRU_PERIGATE_CON00_ACLK_PERI_ROOT_EN_SHIFT)     /* 0x00000002 */
#define PERICRU_PERIGATE_CON00_HCLK_PERI_ROOT_EN_SHIFT     (2U)
#define PERICRU_PERIGATE_CON00_HCLK_PERI_ROOT_EN_MASK      (0x1U << PERICRU_PERIGATE_CON00_HCLK_PERI_ROOT_EN_SHIFT)     /* 0x00000004 */
#define PERICRU_PERIGATE_CON00_CLK_TIMER_ROOT_EN_SHIFT     (3U)
#define PERICRU_PERIGATE_CON00_CLK_TIMER_ROOT_EN_MASK      (0x1U << PERICRU_PERIGATE_CON00_CLK_TIMER_ROOT_EN_SHIFT)     /* 0x00000008 */
#define PERICRU_PERIGATE_CON00_PCLK_PERI_BIU_EN_SHIFT      (4U)
#define PERICRU_PERIGATE_CON00_PCLK_PERI_BIU_EN_MASK       (0x1U << PERICRU_PERIGATE_CON00_PCLK_PERI_BIU_EN_SHIFT)      /* 0x00000010 */
#define PERICRU_PERIGATE_CON00_ACLK_PERI_BIU_EN_SHIFT      (5U)
#define PERICRU_PERIGATE_CON00_ACLK_PERI_BIU_EN_MASK       (0x1U << PERICRU_PERIGATE_CON00_ACLK_PERI_BIU_EN_SHIFT)      /* 0x00000020 */
#define PERICRU_PERIGATE_CON00_HCLK_PERI_BIU_EN_SHIFT      (6U)
#define PERICRU_PERIGATE_CON00_HCLK_PERI_BIU_EN_MASK       (0x1U << PERICRU_PERIGATE_CON00_HCLK_PERI_BIU_EN_SHIFT)      /* 0x00000040 */
#define PERICRU_PERIGATE_CON00_HCLK_BOOTROM_EN_SHIFT       (7U)
#define PERICRU_PERIGATE_CON00_HCLK_BOOTROM_EN_MASK        (0x1U << PERICRU_PERIGATE_CON00_HCLK_BOOTROM_EN_SHIFT)       /* 0x00000080 */
#define PERICRU_PERIGATE_CON00_PCLK_TIMER_EN_SHIFT         (8U)
#define PERICRU_PERIGATE_CON00_PCLK_TIMER_EN_MASK          (0x1U << PERICRU_PERIGATE_CON00_PCLK_TIMER_EN_SHIFT)         /* 0x00000100 */
#define PERICRU_PERIGATE_CON00_CLK_TIMER0_EN_SHIFT         (9U)
#define PERICRU_PERIGATE_CON00_CLK_TIMER0_EN_MASK          (0x1U << PERICRU_PERIGATE_CON00_CLK_TIMER0_EN_SHIFT)         /* 0x00000200 */
#define PERICRU_PERIGATE_CON00_CLK_TIMER1_EN_SHIFT         (10U)
#define PERICRU_PERIGATE_CON00_CLK_TIMER1_EN_MASK          (0x1U << PERICRU_PERIGATE_CON00_CLK_TIMER1_EN_SHIFT)         /* 0x00000400 */
#define PERICRU_PERIGATE_CON00_CLK_TIMER2_EN_SHIFT         (11U)
#define PERICRU_PERIGATE_CON00_CLK_TIMER2_EN_MASK          (0x1U << PERICRU_PERIGATE_CON00_CLK_TIMER2_EN_SHIFT)         /* 0x00000800 */
#define PERICRU_PERIGATE_CON00_CLK_TIMER3_EN_SHIFT         (12U)
#define PERICRU_PERIGATE_CON00_CLK_TIMER3_EN_MASK          (0x1U << PERICRU_PERIGATE_CON00_CLK_TIMER3_EN_SHIFT)         /* 0x00001000 */
#define PERICRU_PERIGATE_CON00_CLK_TIMER4_EN_SHIFT         (13U)
#define PERICRU_PERIGATE_CON00_CLK_TIMER4_EN_MASK          (0x1U << PERICRU_PERIGATE_CON00_CLK_TIMER4_EN_SHIFT)         /* 0x00002000 */
#define PERICRU_PERIGATE_CON00_CLK_TIMER5_EN_SHIFT         (14U)
#define PERICRU_PERIGATE_CON00_CLK_TIMER5_EN_MASK          (0x1U << PERICRU_PERIGATE_CON00_CLK_TIMER5_EN_SHIFT)         /* 0x00004000 */
#define PERICRU_PERIGATE_CON00_PCLK_STIMER_EN_SHIFT        (15U)
#define PERICRU_PERIGATE_CON00_PCLK_STIMER_EN_MASK         (0x1U << PERICRU_PERIGATE_CON00_PCLK_STIMER_EN_SHIFT)        /* 0x00008000 */
/* PERIGATE_CON01 */
#define PERICRU_PERIGATE_CON01_OFFSET                      (0x804U)
#define PERICRU_PERIGATE_CON01_CLK_STIMER0_EN_SHIFT        (0U)
#define PERICRU_PERIGATE_CON01_CLK_STIMER0_EN_MASK         (0x1U << PERICRU_PERIGATE_CON01_CLK_STIMER0_EN_SHIFT)        /* 0x00000001 */
#define PERICRU_PERIGATE_CON01_CLK_STIMER1_EN_SHIFT        (1U)
#define PERICRU_PERIGATE_CON01_CLK_STIMER1_EN_MASK         (0x1U << PERICRU_PERIGATE_CON01_CLK_STIMER1_EN_SHIFT)        /* 0x00000002 */
#define PERICRU_PERIGATE_CON01_PCLK_WDT_NS_EN_SHIFT        (2U)
#define PERICRU_PERIGATE_CON01_PCLK_WDT_NS_EN_MASK         (0x1U << PERICRU_PERIGATE_CON01_PCLK_WDT_NS_EN_SHIFT)        /* 0x00000004 */
#define PERICRU_PERIGATE_CON01_TCLK_WDT_NS_EN_SHIFT        (3U)
#define PERICRU_PERIGATE_CON01_TCLK_WDT_NS_EN_MASK         (0x1U << PERICRU_PERIGATE_CON01_TCLK_WDT_NS_EN_SHIFT)        /* 0x00000008 */
#define PERICRU_PERIGATE_CON01_PCLK_WDT_S_EN_SHIFT         (4U)
#define PERICRU_PERIGATE_CON01_PCLK_WDT_S_EN_MASK          (0x1U << PERICRU_PERIGATE_CON01_PCLK_WDT_S_EN_SHIFT)         /* 0x00000010 */
#define PERICRU_PERIGATE_CON01_TCLK_WDT_S_EN_SHIFT         (5U)
#define PERICRU_PERIGATE_CON01_TCLK_WDT_S_EN_MASK          (0x1U << PERICRU_PERIGATE_CON01_TCLK_WDT_S_EN_SHIFT)         /* 0x00000020 */
#define PERICRU_PERIGATE_CON01_PCLK_I2C0_EN_SHIFT          (6U)
#define PERICRU_PERIGATE_CON01_PCLK_I2C0_EN_MASK           (0x1U << PERICRU_PERIGATE_CON01_PCLK_I2C0_EN_SHIFT)          /* 0x00000040 */
#define PERICRU_PERIGATE_CON01_CLK_I2C0_EN_SHIFT           (7U)
#define PERICRU_PERIGATE_CON01_CLK_I2C0_EN_MASK            (0x1U << PERICRU_PERIGATE_CON01_CLK_I2C0_EN_SHIFT)           /* 0x00000080 */
#define PERICRU_PERIGATE_CON01_PCLK_I2C2_EN_SHIFT          (10U)
#define PERICRU_PERIGATE_CON01_PCLK_I2C2_EN_MASK           (0x1U << PERICRU_PERIGATE_CON01_PCLK_I2C2_EN_SHIFT)          /* 0x00000400 */
#define PERICRU_PERIGATE_CON01_CLK_I2C2_EN_SHIFT           (11U)
#define PERICRU_PERIGATE_CON01_CLK_I2C2_EN_MASK            (0x1U << PERICRU_PERIGATE_CON01_CLK_I2C2_EN_SHIFT)           /* 0x00000800 */
#define PERICRU_PERIGATE_CON01_PCLK_I2C3_EN_SHIFT          (12U)
#define PERICRU_PERIGATE_CON01_PCLK_I2C3_EN_MASK           (0x1U << PERICRU_PERIGATE_CON01_PCLK_I2C3_EN_SHIFT)          /* 0x00001000 */
#define PERICRU_PERIGATE_CON01_CLK_I2C3_EN_SHIFT           (13U)
#define PERICRU_PERIGATE_CON01_CLK_I2C3_EN_MASK            (0x1U << PERICRU_PERIGATE_CON01_CLK_I2C3_EN_SHIFT)           /* 0x00002000 */
#define PERICRU_PERIGATE_CON01_PCLK_I2C4_EN_SHIFT          (14U)
#define PERICRU_PERIGATE_CON01_PCLK_I2C4_EN_MASK           (0x1U << PERICRU_PERIGATE_CON01_PCLK_I2C4_EN_SHIFT)          /* 0x00004000 */
#define PERICRU_PERIGATE_CON01_CLK_I2C4_EN_SHIFT           (15U)
#define PERICRU_PERIGATE_CON01_CLK_I2C4_EN_MASK            (0x1U << PERICRU_PERIGATE_CON01_CLK_I2C4_EN_SHIFT)           /* 0x00008000 */
/* PERIGATE_CON02 */
#define PERICRU_PERIGATE_CON02_OFFSET                      (0x808U)
#define PERICRU_PERIGATE_CON02_PCLK_GPIO4_EN_SHIFT         (0U)
#define PERICRU_PERIGATE_CON02_PCLK_GPIO4_EN_MASK          (0x1U << PERICRU_PERIGATE_CON02_PCLK_GPIO4_EN_SHIFT)         /* 0x00000001 */
#define PERICRU_PERIGATE_CON02_DBCLK_GPIO4_EN_SHIFT        (1U)
#define PERICRU_PERIGATE_CON02_DBCLK_GPIO4_EN_MASK         (0x1U << PERICRU_PERIGATE_CON02_DBCLK_GPIO4_EN_SHIFT)        /* 0x00000002 */
#define PERICRU_PERIGATE_CON02_PCLK_PERI_IOC_EN_SHIFT      (2U)
#define PERICRU_PERIGATE_CON02_PCLK_PERI_IOC_EN_MASK       (0x1U << PERICRU_PERIGATE_CON02_PCLK_PERI_IOC_EN_SHIFT)      /* 0x00000004 */
#define PERICRU_PERIGATE_CON02_PCLK_UART2_EN_SHIFT         (3U)
#define PERICRU_PERIGATE_CON02_PCLK_UART2_EN_MASK          (0x1U << PERICRU_PERIGATE_CON02_PCLK_UART2_EN_SHIFT)         /* 0x00000008 */
#define PERICRU_PERIGATE_CON02_SCLK_UART2_EN_SHIFT         (6U)
#define PERICRU_PERIGATE_CON02_SCLK_UART2_EN_MASK          (0x1U << PERICRU_PERIGATE_CON02_SCLK_UART2_EN_SHIFT)         /* 0x00000040 */
#define PERICRU_PERIGATE_CON02_PCLK_UART3_EN_SHIFT         (7U)
#define PERICRU_PERIGATE_CON02_PCLK_UART3_EN_MASK          (0x1U << PERICRU_PERIGATE_CON02_PCLK_UART3_EN_SHIFT)         /* 0x00000080 */
#define PERICRU_PERIGATE_CON02_SCLK_UART3_EN_SHIFT         (10U)
#define PERICRU_PERIGATE_CON02_SCLK_UART3_EN_MASK          (0x1U << PERICRU_PERIGATE_CON02_SCLK_UART3_EN_SHIFT)         /* 0x00000400 */
#define PERICRU_PERIGATE_CON02_PCLK_UART4_EN_SHIFT         (11U)
#define PERICRU_PERIGATE_CON02_PCLK_UART4_EN_MASK          (0x1U << PERICRU_PERIGATE_CON02_PCLK_UART4_EN_SHIFT)         /* 0x00000800 */
#define PERICRU_PERIGATE_CON02_SCLK_UART4_EN_SHIFT         (14U)
#define PERICRU_PERIGATE_CON02_SCLK_UART4_EN_MASK          (0x1U << PERICRU_PERIGATE_CON02_SCLK_UART4_EN_SHIFT)         /* 0x00004000 */
#define PERICRU_PERIGATE_CON02_PCLK_UART5_EN_SHIFT         (15U)
#define PERICRU_PERIGATE_CON02_PCLK_UART5_EN_MASK          (0x1U << PERICRU_PERIGATE_CON02_PCLK_UART5_EN_SHIFT)         /* 0x00008000 */
/* PERIGATE_CON03 */
#define PERICRU_PERIGATE_CON03_OFFSET                      (0x80CU)
#define PERICRU_PERIGATE_CON03_CLK_TESTOUT_PERI2VI_0_EN_SHIFT (0U)
#define PERICRU_PERIGATE_CON03_CLK_TESTOUT_PERI2VI_0_EN_MASK (0x1U << PERICRU_PERIGATE_CON03_CLK_TESTOUT_PERI2VI_0_EN_SHIFT) /* 0x00000001 */
#define PERICRU_PERIGATE_CON03_CLK_TESTOUT_PERI2VI_1_EN_SHIFT (1U)
#define PERICRU_PERIGATE_CON03_CLK_TESTOUT_PERI2VI_1_EN_MASK (0x1U << PERICRU_PERIGATE_CON03_CLK_TESTOUT_PERI2VI_1_EN_SHIFT) /* 0x00000002 */
#define PERICRU_PERIGATE_CON03_SCLK_UART5_EN_SHIFT         (2U)
#define PERICRU_PERIGATE_CON03_SCLK_UART5_EN_MASK          (0x1U << PERICRU_PERIGATE_CON03_SCLK_UART5_EN_SHIFT)         /* 0x00000004 */
#define PERICRU_PERIGATE_CON03_PCLK_SARADC_EN_SHIFT        (3U)
#define PERICRU_PERIGATE_CON03_PCLK_SARADC_EN_MASK         (0x1U << PERICRU_PERIGATE_CON03_PCLK_SARADC_EN_SHIFT)        /* 0x00000008 */
#define PERICRU_PERIGATE_CON03_CLK_SARADC_EN_SHIFT         (4U)
#define PERICRU_PERIGATE_CON03_CLK_SARADC_EN_MASK          (0x1U << PERICRU_PERIGATE_CON03_CLK_SARADC_EN_SHIFT)         /* 0x00000010 */
#define PERICRU_PERIGATE_CON03_PCLK_SPI1_EN_SHIFT          (6U)
#define PERICRU_PERIGATE_CON03_PCLK_SPI1_EN_MASK           (0x1U << PERICRU_PERIGATE_CON03_PCLK_SPI1_EN_SHIFT)          /* 0x00000040 */
#define PERICRU_PERIGATE_CON03_CLK_SPI1_EN_SHIFT           (7U)
#define PERICRU_PERIGATE_CON03_CLK_SPI1_EN_MASK            (0x1U << PERICRU_PERIGATE_CON03_CLK_SPI1_EN_SHIFT)           /* 0x00000080 */
#define PERICRU_PERIGATE_CON03_SCLK_IN_SPI1_EN_SHIFT       (8U)
#define PERICRU_PERIGATE_CON03_SCLK_IN_SPI1_EN_MASK        (0x1U << PERICRU_PERIGATE_CON03_SCLK_IN_SPI1_EN_SHIFT)       /* 0x00000100 */
#define PERICRU_PERIGATE_CON03_HCLK_TRNG_NS_EN_SHIFT       (9U)
#define PERICRU_PERIGATE_CON03_HCLK_TRNG_NS_EN_MASK        (0x1U << PERICRU_PERIGATE_CON03_HCLK_TRNG_NS_EN_SHIFT)       /* 0x00000200 */
#define PERICRU_PERIGATE_CON03_HCLK_TRNG_S_EN_SHIFT        (10U)
#define PERICRU_PERIGATE_CON03_HCLK_TRNG_S_EN_MASK         (0x1U << PERICRU_PERIGATE_CON03_HCLK_TRNG_S_EN_SHIFT)        /* 0x00000400 */
#define PERICRU_PERIGATE_CON03_CLK_CORE_CRYPTO_EN_SHIFT    (11U)
#define PERICRU_PERIGATE_CON03_CLK_CORE_CRYPTO_EN_MASK     (0x1U << PERICRU_PERIGATE_CON03_CLK_CORE_CRYPTO_EN_SHIFT)    /* 0x00000800 */
#define PERICRU_PERIGATE_CON03_CLK_PKA_CRYPTO_EN_SHIFT     (12U)
#define PERICRU_PERIGATE_CON03_CLK_PKA_CRYPTO_EN_MASK      (0x1U << PERICRU_PERIGATE_CON03_CLK_PKA_CRYPTO_EN_SHIFT)     /* 0x00001000 */
#define PERICRU_PERIGATE_CON03_ACLK_CRYPTO_EN_SHIFT        (13U)
#define PERICRU_PERIGATE_CON03_ACLK_CRYPTO_EN_MASK         (0x1U << PERICRU_PERIGATE_CON03_ACLK_CRYPTO_EN_SHIFT)        /* 0x00002000 */
#define PERICRU_PERIGATE_CON03_HCLK_CRYPTO_EN_SHIFT        (14U)
#define PERICRU_PERIGATE_CON03_HCLK_CRYPTO_EN_MASK         (0x1U << PERICRU_PERIGATE_CON03_HCLK_CRYPTO_EN_SHIFT)        /* 0x00004000 */
#define PERICRU_PERIGATE_CON03_PCLK_PWM1_PERI_EN_SHIFT     (15U)
#define PERICRU_PERIGATE_CON03_PCLK_PWM1_PERI_EN_MASK      (0x1U << PERICRU_PERIGATE_CON03_PCLK_PWM1_PERI_EN_SHIFT)     /* 0x00008000 */
/* PERIGATE_CON04 */
#define PERICRU_PERIGATE_CON04_OFFSET                      (0x810U)
#define PERICRU_PERIGATE_CON04_CLK_PWM1_PERI_EN_SHIFT      (0U)
#define PERICRU_PERIGATE_CON04_CLK_PWM1_PERI_EN_MASK       (0x1U << PERICRU_PERIGATE_CON04_CLK_PWM1_PERI_EN_SHIFT)      /* 0x00000001 */
#define PERICRU_PERIGATE_CON04_CLK_CAPTURE_PWM1_PERI_EN_SHIFT (1U)
#define PERICRU_PERIGATE_CON04_CLK_CAPTURE_PWM1_PERI_EN_MASK (0x1U << PERICRU_PERIGATE_CON04_CLK_CAPTURE_PWM1_PERI_EN_SHIFT) /* 0x00000002 */
#define PERICRU_PERIGATE_CON04_PCLK_PWM2_PERI_EN_SHIFT     (2U)
#define PERICRU_PERIGATE_CON04_PCLK_PWM2_PERI_EN_MASK      (0x1U << PERICRU_PERIGATE_CON04_PCLK_PWM2_PERI_EN_SHIFT)     /* 0x00000004 */
#define PERICRU_PERIGATE_CON04_CLK_PWM2_PERI_EN_SHIFT      (3U)
#define PERICRU_PERIGATE_CON04_CLK_PWM2_PERI_EN_MASK       (0x1U << PERICRU_PERIGATE_CON04_CLK_PWM2_PERI_EN_SHIFT)      /* 0x00000008 */
#define PERICRU_PERIGATE_CON04_CLK_CAPTURE_PWM2_PERI_EN_SHIFT (4U)
#define PERICRU_PERIGATE_CON04_CLK_CAPTURE_PWM2_PERI_EN_MASK (0x1U << PERICRU_PERIGATE_CON04_CLK_CAPTURE_PWM2_PERI_EN_SHIFT) /* 0x00000010 */
#define PERICRU_PERIGATE_CON04_PCLK_PERI_GRF_EN_SHIFT      (5U)
#define PERICRU_PERIGATE_CON04_PCLK_PERI_GRF_EN_MASK       (0x1U << PERICRU_PERIGATE_CON04_PCLK_PERI_GRF_EN_SHIFT)      /* 0x00000020 */
#define PERICRU_PERIGATE_CON04_PCLK_PERI_CRU_EN_SHIFT      (6U)
#define PERICRU_PERIGATE_CON04_PCLK_PERI_CRU_EN_MASK       (0x1U << PERICRU_PERIGATE_CON04_PCLK_PERI_CRU_EN_SHIFT)      /* 0x00000040 */
#define PERICRU_PERIGATE_CON04_ACLK_USBOTG_EN_SHIFT        (7U)
#define PERICRU_PERIGATE_CON04_ACLK_USBOTG_EN_MASK         (0x1U << PERICRU_PERIGATE_CON04_ACLK_USBOTG_EN_SHIFT)        /* 0x00000080 */
#define PERICRU_PERIGATE_CON04_CLK_REF_USBOTG_EN_SHIFT     (8U)
#define PERICRU_PERIGATE_CON04_CLK_REF_USBOTG_EN_MASK      (0x1U << PERICRU_PERIGATE_CON04_CLK_REF_USBOTG_EN_SHIFT)     /* 0x00000100 */
#define PERICRU_PERIGATE_CON04_CLK_UTMI_USBOTG_EN_SHIFT    (9U)
#define PERICRU_PERIGATE_CON04_CLK_UTMI_USBOTG_EN_MASK     (0x1U << PERICRU_PERIGATE_CON04_CLK_UTMI_USBOTG_EN_SHIFT)    /* 0x00000200 */
#define PERICRU_PERIGATE_CON04_ACLK_BUS_BIU_EN_SHIFT       (10U)
#define PERICRU_PERIGATE_CON04_ACLK_BUS_BIU_EN_MASK        (0x1U << PERICRU_PERIGATE_CON04_ACLK_BUS_BIU_EN_SHIFT)       /* 0x00000400 */
#define PERICRU_PERIGATE_CON04_MBIST_CLK_ACLK_USB_EN_SHIFT (11U)
#define PERICRU_PERIGATE_CON04_MBIST_CLK_ACLK_USB_EN_MASK  (0x1U << PERICRU_PERIGATE_CON04_MBIST_CLK_ACLK_USB_EN_SHIFT) /* 0x00000800 */
#define PERICRU_PERIGATE_CON04_CCLK_SRC_EMMC_EN_SHIFT      (12U)
#define PERICRU_PERIGATE_CON04_CCLK_SRC_EMMC_EN_MASK       (0x1U << PERICRU_PERIGATE_CON04_CCLK_SRC_EMMC_EN_SHIFT)      /* 0x00001000 */
#define PERICRU_PERIGATE_CON04_HCLK_EMMC_EN_SHIFT          (13U)
#define PERICRU_PERIGATE_CON04_HCLK_EMMC_EN_MASK           (0x1U << PERICRU_PERIGATE_CON04_HCLK_EMMC_EN_SHIFT)          /* 0x00002000 */
#define PERICRU_PERIGATE_CON04_HCLK_SFC_EN_SHIFT           (14U)
#define PERICRU_PERIGATE_CON04_HCLK_SFC_EN_MASK            (0x1U << PERICRU_PERIGATE_CON04_HCLK_SFC_EN_SHIFT)           /* 0x00004000 */
/* PERIGATE_CON05 */
#define PERICRU_PERIGATE_CON05_OFFSET                      (0x814U)
#define PERICRU_PERIGATE_CON05_SCLK_SFC_EN_SHIFT           (0U)
#define PERICRU_PERIGATE_CON05_SCLK_SFC_EN_MASK            (0x1U << PERICRU_PERIGATE_CON05_SCLK_SFC_EN_SHIFT)           /* 0x00000001 */
#define PERICRU_PERIGATE_CON05_PCLK_USBPHY_EN_SHIFT        (1U)
#define PERICRU_PERIGATE_CON05_PCLK_USBPHY_EN_MASK         (0x1U << PERICRU_PERIGATE_CON05_PCLK_USBPHY_EN_SHIFT)        /* 0x00000002 */
#define PERICRU_PERIGATE_CON05_CLK_REF_USBPHY_EN_SHIFT     (2U)
#define PERICRU_PERIGATE_CON05_CLK_REF_USBPHY_EN_MASK      (0x1U << PERICRU_PERIGATE_CON05_CLK_REF_USBPHY_EN_SHIFT)     /* 0x00000004 */
#define PERICRU_PERIGATE_CON05_ACLK_DMAC_EN_SHIFT          (8U)
#define PERICRU_PERIGATE_CON05_ACLK_DMAC_EN_MASK           (0x1U << PERICRU_PERIGATE_CON05_ACLK_DMAC_EN_SHIFT)          /* 0x00000100 */
#define PERICRU_PERIGATE_CON05_ACLK_DECOM_EN_SHIFT         (9U)
#define PERICRU_PERIGATE_CON05_ACLK_DECOM_EN_MASK          (0x1U << PERICRU_PERIGATE_CON05_ACLK_DECOM_EN_SHIFT)         /* 0x00000200 */
#define PERICRU_PERIGATE_CON05_PCLK_DECOM_EN_SHIFT         (10U)
#define PERICRU_PERIGATE_CON05_PCLK_DECOM_EN_MASK          (0x1U << PERICRU_PERIGATE_CON05_PCLK_DECOM_EN_SHIFT)         /* 0x00000400 */
#define PERICRU_PERIGATE_CON05_DCLK_DECOM_EN_SHIFT         (11U)
#define PERICRU_PERIGATE_CON05_DCLK_DECOM_EN_MASK          (0x1U << PERICRU_PERIGATE_CON05_DCLK_DECOM_EN_SHIFT)         /* 0x00000800 */
#define PERICRU_PERIGATE_CON05_PCLK_PERI_SGRF_EN_SHIFT     (12U)
#define PERICRU_PERIGATE_CON05_PCLK_PERI_SGRF_EN_MASK      (0x1U << PERICRU_PERIGATE_CON05_PCLK_PERI_SGRF_EN_SHIFT)     /* 0x00001000 */
#define PERICRU_PERIGATE_CON05_HCLK_SAI_EN_SHIFT           (13U)
#define PERICRU_PERIGATE_CON05_HCLK_SAI_EN_MASK            (0x1U << PERICRU_PERIGATE_CON05_HCLK_SAI_EN_SHIFT)           /* 0x00002000 */
#define PERICRU_PERIGATE_CON05_MCLK_SAI_EN_SHIFT           (14U)
#define PERICRU_PERIGATE_CON05_MCLK_SAI_EN_MASK            (0x1U << PERICRU_PERIGATE_CON05_MCLK_SAI_EN_SHIFT)           /* 0x00004000 */
#define PERICRU_PERIGATE_CON05_MCLK_I2S0_8CH_TX_EN_SHIFT   (15U)
#define PERICRU_PERIGATE_CON05_MCLK_I2S0_8CH_TX_EN_MASK    (0x1U << PERICRU_PERIGATE_CON05_MCLK_I2S0_8CH_TX_EN_SHIFT)   /* 0x00008000 */
/* PERIGATE_CON06 */
#define PERICRU_PERIGATE_CON06_OFFSET                      (0x818U)
#define PERICRU_PERIGATE_CON06_HCLK_I2S0_EN_SHIFT          (0U)
#define PERICRU_PERIGATE_CON06_HCLK_I2S0_EN_MASK           (0x1U << PERICRU_PERIGATE_CON06_HCLK_I2S0_EN_SHIFT)          /* 0x00000001 */
#define PERICRU_PERIGATE_CON06_MCLK_DSM_EN_SHIFT           (1U)
#define PERICRU_PERIGATE_CON06_MCLK_DSM_EN_MASK            (0x1U << PERICRU_PERIGATE_CON06_MCLK_DSM_EN_SHIFT)           /* 0x00000002 */
#define PERICRU_PERIGATE_CON06_PCLK_DSM_EN_SHIFT           (2U)
#define PERICRU_PERIGATE_CON06_PCLK_DSM_EN_MASK            (0x1U << PERICRU_PERIGATE_CON06_PCLK_DSM_EN_SHIFT)           /* 0x00000004 */
#define PERICRU_PERIGATE_CON06_PCLK_ACODEC_EN_SHIFT        (3U)
#define PERICRU_PERIGATE_CON06_PCLK_ACODEC_EN_MASK         (0x1U << PERICRU_PERIGATE_CON06_PCLK_ACODEC_EN_SHIFT)        /* 0x00000008 */
#define PERICRU_PERIGATE_CON06_MCLK_ACODEC_TX_EN_SHIFT     (4U)
#define PERICRU_PERIGATE_CON06_MCLK_ACODEC_TX_EN_MASK      (0x1U << PERICRU_PERIGATE_CON06_MCLK_ACODEC_TX_EN_SHIFT)     /* 0x00000010 */
#define PERICRU_PERIGATE_CON06_MCLK_ACODEC_RX_EN_SHIFT     (5U)
#define PERICRU_PERIGATE_CON06_MCLK_ACODEC_RX_EN_MASK      (0x1U << PERICRU_PERIGATE_CON06_MCLK_ACODEC_RX_EN_SHIFT)     /* 0x00000020 */
#define PERICRU_PERIGATE_CON06_MCLK_I2S0_8CH_RX_EN_SHIFT   (6U)
#define PERICRU_PERIGATE_CON06_MCLK_I2S0_8CH_RX_EN_MASK    (0x1U << PERICRU_PERIGATE_CON06_MCLK_I2S0_8CH_RX_EN_SHIFT)   /* 0x00000040 */
#define PERICRU_PERIGATE_CON06_PCLK_DFT2APB_EN_SHIFT       (7U)
#define PERICRU_PERIGATE_CON06_PCLK_DFT2APB_EN_MASK        (0x1U << PERICRU_PERIGATE_CON06_PCLK_DFT2APB_EN_SHIFT)       /* 0x00000080 */
#define PERICRU_PERIGATE_CON06_ACLK_BUS_ROOT_EN_SHIFT      (8U)
#define PERICRU_PERIGATE_CON06_ACLK_BUS_ROOT_EN_MASK       (0x1U << PERICRU_PERIGATE_CON06_ACLK_BUS_ROOT_EN_SHIFT)      /* 0x00000100 */
#define PERICRU_PERIGATE_CON06_HCLK_IVE_EN_SHIFT           (9U)
#define PERICRU_PERIGATE_CON06_HCLK_IVE_EN_MASK            (0x1U << PERICRU_PERIGATE_CON06_HCLK_IVE_EN_SHIFT)           /* 0x00000200 */
#define PERICRU_PERIGATE_CON06_ACLK_IVE_EN_SHIFT           (10U)
#define PERICRU_PERIGATE_CON06_ACLK_IVE_EN_MASK            (0x1U << PERICRU_PERIGATE_CON06_ACLK_IVE_EN_SHIFT)           /* 0x00000400 */
#define PERICRU_PERIGATE_CON06_PCLK_UART0_EN_SHIFT         (11U)
#define PERICRU_PERIGATE_CON06_PCLK_UART0_EN_MASK          (0x1U << PERICRU_PERIGATE_CON06_PCLK_UART0_EN_SHIFT)         /* 0x00000800 */
#define PERICRU_PERIGATE_CON06_SCLK_UART0_EN_SHIFT         (14U)
#define PERICRU_PERIGATE_CON06_SCLK_UART0_EN_MASK          (0x1U << PERICRU_PERIGATE_CON06_SCLK_UART0_EN_SHIFT)         /* 0x00004000 */
#define PERICRU_PERIGATE_CON06_PCLK_UART1_EN_SHIFT         (15U)
#define PERICRU_PERIGATE_CON06_PCLK_UART1_EN_MASK          (0x1U << PERICRU_PERIGATE_CON06_PCLK_UART1_EN_SHIFT)         /* 0x00008000 */
/* PERIGATE_CON07 */
#define PERICRU_PERIGATE_CON07_OFFSET                      (0x81CU)
#define PERICRU_PERIGATE_CON07_SCLK_UART1_EN_SHIFT         (2U)
#define PERICRU_PERIGATE_CON07_SCLK_UART1_EN_MASK          (0x1U << PERICRU_PERIGATE_CON07_SCLK_UART1_EN_SHIFT)         /* 0x00000004 */
#define PERICRU_PERIGATE_CON07_PCLK_PWM0_PERI_EN_SHIFT     (3U)
#define PERICRU_PERIGATE_CON07_PCLK_PWM0_PERI_EN_MASK      (0x1U << PERICRU_PERIGATE_CON07_PCLK_PWM0_PERI_EN_SHIFT)     /* 0x00000008 */
#define PERICRU_PERIGATE_CON07_CLK_PWM0_PERI_EN_SHIFT      (4U)
#define PERICRU_PERIGATE_CON07_CLK_PWM0_PERI_EN_MASK       (0x1U << PERICRU_PERIGATE_CON07_CLK_PWM0_PERI_EN_SHIFT)      /* 0x00000010 */
#define PERICRU_PERIGATE_CON07_CLK_CAPTURE_PWM0_PERI_EN_SHIFT (5U)
#define PERICRU_PERIGATE_CON07_CLK_CAPTURE_PWM0_PERI_EN_MASK (0x1U << PERICRU_PERIGATE_CON07_CLK_CAPTURE_PWM0_PERI_EN_SHIFT) /* 0x00000020 */
#define PERICRU_PERIGATE_CON07_MBIST_CLK_CLK_BOOTROM_EN_SHIFT (6U)
#define PERICRU_PERIGATE_CON07_MBIST_CLK_CLK_BOOTROM_EN_MASK (0x1U << PERICRU_PERIGATE_CON07_MBIST_CLK_CLK_BOOTROM_EN_SHIFT) /* 0x00000040 */
#define PERICRU_PERIGATE_CON07_MBIST_CLK_CLK_PKA_CRYPTO_EN_SHIFT (7U)
#define PERICRU_PERIGATE_CON07_MBIST_CLK_CLK_PKA_CRYPTO_EN_MASK (0x1U << PERICRU_PERIGATE_CON07_MBIST_CLK_CLK_PKA_CRYPTO_EN_SHIFT) /* 0x00000080 */
#define PERICRU_PERIGATE_CON07_MBIST_CLK_ACLK_CRYPTO_EN_SHIFT (8U)
#define PERICRU_PERIGATE_CON07_MBIST_CLK_ACLK_CRYPTO_EN_MASK (0x1U << PERICRU_PERIGATE_CON07_MBIST_CLK_ACLK_CRYPTO_EN_SHIFT) /* 0x00000100 */
#define PERICRU_PERIGATE_CON07_MBIST_CLK_CLK_EMMC_EN_SHIFT (9U)
#define PERICRU_PERIGATE_CON07_MBIST_CLK_CLK_EMMC_EN_MASK  (0x1U << PERICRU_PERIGATE_CON07_MBIST_CLK_CLK_EMMC_EN_SHIFT) /* 0x00000200 */
#define PERICRU_PERIGATE_CON07_MBIST_CLK_IVE_400M_EN_SHIFT (10U)
#define PERICRU_PERIGATE_CON07_MBIST_CLK_IVE_400M_EN_MASK  (0x1U << PERICRU_PERIGATE_CON07_MBIST_CLK_IVE_400M_EN_SHIFT) /* 0x00000400 */
#define PERICRU_PERIGATE_CON07_MBIST_CLK_DECOM_400M_EN_SHIFT (11U)
#define PERICRU_PERIGATE_CON07_MBIST_CLK_DECOM_400M_EN_MASK (0x1U << PERICRU_PERIGATE_CON07_MBIST_CLK_DECOM_400M_EN_SHIFT) /* 0x00000800 */
/* PERISOFTRST_CON00 */
#define PERICRU_PERISOFTRST_CON00_OFFSET                   (0xA00U)
#define PERICRU_PERISOFTRST_CON00_PRESETN_PERI_BIU_SHIFT   (4U)
#define PERICRU_PERISOFTRST_CON00_PRESETN_PERI_BIU_MASK    (0x1U << PERICRU_PERISOFTRST_CON00_PRESETN_PERI_BIU_SHIFT)   /* 0x00000010 */
#define PERICRU_PERISOFTRST_CON00_ARESETN_PERI_BIU_SHIFT   (5U)
#define PERICRU_PERISOFTRST_CON00_ARESETN_PERI_BIU_MASK    (0x1U << PERICRU_PERISOFTRST_CON00_ARESETN_PERI_BIU_SHIFT)   /* 0x00000020 */
#define PERICRU_PERISOFTRST_CON00_HRESETN_PERI_BIU_SHIFT   (6U)
#define PERICRU_PERISOFTRST_CON00_HRESETN_PERI_BIU_MASK    (0x1U << PERICRU_PERISOFTRST_CON00_HRESETN_PERI_BIU_SHIFT)   /* 0x00000040 */
#define PERICRU_PERISOFTRST_CON00_HRESETN_BOOTROM_SHIFT    (7U)
#define PERICRU_PERISOFTRST_CON00_HRESETN_BOOTROM_MASK     (0x1U << PERICRU_PERISOFTRST_CON00_HRESETN_BOOTROM_SHIFT)    /* 0x00000080 */
#define PERICRU_PERISOFTRST_CON00_PRESETN_TIMER_SHIFT      (8U)
#define PERICRU_PERISOFTRST_CON00_PRESETN_TIMER_MASK       (0x1U << PERICRU_PERISOFTRST_CON00_PRESETN_TIMER_SHIFT)      /* 0x00000100 */
#define PERICRU_PERISOFTRST_CON00_RESETN_TIMER0_SHIFT      (9U)
#define PERICRU_PERISOFTRST_CON00_RESETN_TIMER0_MASK       (0x1U << PERICRU_PERISOFTRST_CON00_RESETN_TIMER0_SHIFT)      /* 0x00000200 */
#define PERICRU_PERISOFTRST_CON00_RESETN_TIMER1_SHIFT      (10U)
#define PERICRU_PERISOFTRST_CON00_RESETN_TIMER1_MASK       (0x1U << PERICRU_PERISOFTRST_CON00_RESETN_TIMER1_SHIFT)      /* 0x00000400 */
#define PERICRU_PERISOFTRST_CON00_RESETN_TIMER2_SHIFT      (11U)
#define PERICRU_PERISOFTRST_CON00_RESETN_TIMER2_MASK       (0x1U << PERICRU_PERISOFTRST_CON00_RESETN_TIMER2_SHIFT)      /* 0x00000800 */
#define PERICRU_PERISOFTRST_CON00_RESETN_TIMER3_SHIFT      (12U)
#define PERICRU_PERISOFTRST_CON00_RESETN_TIMER3_MASK       (0x1U << PERICRU_PERISOFTRST_CON00_RESETN_TIMER3_SHIFT)      /* 0x00001000 */
#define PERICRU_PERISOFTRST_CON00_RESETN_TIMER4_SHIFT      (13U)
#define PERICRU_PERISOFTRST_CON00_RESETN_TIMER4_MASK       (0x1U << PERICRU_PERISOFTRST_CON00_RESETN_TIMER4_SHIFT)      /* 0x00002000 */
#define PERICRU_PERISOFTRST_CON00_RESETN_TIMER5_SHIFT      (14U)
#define PERICRU_PERISOFTRST_CON00_RESETN_TIMER5_MASK       (0x1U << PERICRU_PERISOFTRST_CON00_RESETN_TIMER5_SHIFT)      /* 0x00004000 */
#define PERICRU_PERISOFTRST_CON00_PRESETN_STIMER_SHIFT     (15U)
#define PERICRU_PERISOFTRST_CON00_PRESETN_STIMER_MASK      (0x1U << PERICRU_PERISOFTRST_CON00_PRESETN_STIMER_SHIFT)     /* 0x00008000 */
/* PERISOFTRST_CON01 */
#define PERICRU_PERISOFTRST_CON01_OFFSET                   (0xA04U)
#define PERICRU_PERISOFTRST_CON01_RESETN_STIMER0_SHIFT     (0U)
#define PERICRU_PERISOFTRST_CON01_RESETN_STIMER0_MASK      (0x1U << PERICRU_PERISOFTRST_CON01_RESETN_STIMER0_SHIFT)     /* 0x00000001 */
#define PERICRU_PERISOFTRST_CON01_RESETN_STIMER1_SHIFT     (1U)
#define PERICRU_PERISOFTRST_CON01_RESETN_STIMER1_MASK      (0x1U << PERICRU_PERISOFTRST_CON01_RESETN_STIMER1_SHIFT)     /* 0x00000002 */
#define PERICRU_PERISOFTRST_CON01_PRESETN_WDT_NS_SHIFT     (2U)
#define PERICRU_PERISOFTRST_CON01_PRESETN_WDT_NS_MASK      (0x1U << PERICRU_PERISOFTRST_CON01_PRESETN_WDT_NS_SHIFT)     /* 0x00000004 */
#define PERICRU_PERISOFTRST_CON01_TRESETN_WDT_NS_SHIFT     (3U)
#define PERICRU_PERISOFTRST_CON01_TRESETN_WDT_NS_MASK      (0x1U << PERICRU_PERISOFTRST_CON01_TRESETN_WDT_NS_SHIFT)     /* 0x00000008 */
#define PERICRU_PERISOFTRST_CON01_PRESETN_WDT_S_SHIFT      (4U)
#define PERICRU_PERISOFTRST_CON01_PRESETN_WDT_S_MASK       (0x1U << PERICRU_PERISOFTRST_CON01_PRESETN_WDT_S_SHIFT)      /* 0x00000010 */
#define PERICRU_PERISOFTRST_CON01_TRESETN_WDT_S_SHIFT      (5U)
#define PERICRU_PERISOFTRST_CON01_TRESETN_WDT_S_MASK       (0x1U << PERICRU_PERISOFTRST_CON01_TRESETN_WDT_S_SHIFT)      /* 0x00000020 */
#define PERICRU_PERISOFTRST_CON01_PRESETN_I2C0_SHIFT       (6U)
#define PERICRU_PERISOFTRST_CON01_PRESETN_I2C0_MASK        (0x1U << PERICRU_PERISOFTRST_CON01_PRESETN_I2C0_SHIFT)       /* 0x00000040 */
#define PERICRU_PERISOFTRST_CON01_RESETN_I2C0_SHIFT        (7U)
#define PERICRU_PERISOFTRST_CON01_RESETN_I2C0_MASK         (0x1U << PERICRU_PERISOFTRST_CON01_RESETN_I2C0_SHIFT)        /* 0x00000080 */
#define PERICRU_PERISOFTRST_CON01_PRESETN_I2C2_SHIFT       (10U)
#define PERICRU_PERISOFTRST_CON01_PRESETN_I2C2_MASK        (0x1U << PERICRU_PERISOFTRST_CON01_PRESETN_I2C2_SHIFT)       /* 0x00000400 */
#define PERICRU_PERISOFTRST_CON01_RESETN_I2C2_SHIFT        (11U)
#define PERICRU_PERISOFTRST_CON01_RESETN_I2C2_MASK         (0x1U << PERICRU_PERISOFTRST_CON01_RESETN_I2C2_SHIFT)        /* 0x00000800 */
#define PERICRU_PERISOFTRST_CON01_PRESETN_I2C3_SHIFT       (12U)
#define PERICRU_PERISOFTRST_CON01_PRESETN_I2C3_MASK        (0x1U << PERICRU_PERISOFTRST_CON01_PRESETN_I2C3_SHIFT)       /* 0x00001000 */
#define PERICRU_PERISOFTRST_CON01_RESETN_I2C3_SHIFT        (13U)
#define PERICRU_PERISOFTRST_CON01_RESETN_I2C3_MASK         (0x1U << PERICRU_PERISOFTRST_CON01_RESETN_I2C3_SHIFT)        /* 0x00002000 */
#define PERICRU_PERISOFTRST_CON01_PRESETN_I2C4_SHIFT       (14U)
#define PERICRU_PERISOFTRST_CON01_PRESETN_I2C4_MASK        (0x1U << PERICRU_PERISOFTRST_CON01_PRESETN_I2C4_SHIFT)       /* 0x00004000 */
#define PERICRU_PERISOFTRST_CON01_RESETN_I2C4_SHIFT        (15U)
#define PERICRU_PERISOFTRST_CON01_RESETN_I2C4_MASK         (0x1U << PERICRU_PERISOFTRST_CON01_RESETN_I2C4_SHIFT)        /* 0x00008000 */
/* PERISOFTRST_CON02 */
#define PERICRU_PERISOFTRST_CON02_OFFSET                   (0xA08U)
#define PERICRU_PERISOFTRST_CON02_PRESETN_GPIO4_SHIFT      (0U)
#define PERICRU_PERISOFTRST_CON02_PRESETN_GPIO4_MASK       (0x1U << PERICRU_PERISOFTRST_CON02_PRESETN_GPIO4_SHIFT)      /* 0x00000001 */
#define PERICRU_PERISOFTRST_CON02_DBRESETN_GPIO4_SHIFT     (1U)
#define PERICRU_PERISOFTRST_CON02_DBRESETN_GPIO4_MASK      (0x1U << PERICRU_PERISOFTRST_CON02_DBRESETN_GPIO4_SHIFT)     /* 0x00000002 */
#define PERICRU_PERISOFTRST_CON02_PRESETN_PERI_IOC_SHIFT   (2U)
#define PERICRU_PERISOFTRST_CON02_PRESETN_PERI_IOC_MASK    (0x1U << PERICRU_PERISOFTRST_CON02_PRESETN_PERI_IOC_SHIFT)   /* 0x00000004 */
#define PERICRU_PERISOFTRST_CON02_PRESETN_UART2_SHIFT      (3U)
#define PERICRU_PERISOFTRST_CON02_PRESETN_UART2_MASK       (0x1U << PERICRU_PERISOFTRST_CON02_PRESETN_UART2_SHIFT)      /* 0x00000008 */
#define PERICRU_PERISOFTRST_CON02_SRESETN_UART2_SHIFT      (6U)
#define PERICRU_PERISOFTRST_CON02_SRESETN_UART2_MASK       (0x1U << PERICRU_PERISOFTRST_CON02_SRESETN_UART2_SHIFT)      /* 0x00000040 */
#define PERICRU_PERISOFTRST_CON02_PRESETN_UART3_SHIFT      (7U)
#define PERICRU_PERISOFTRST_CON02_PRESETN_UART3_MASK       (0x1U << PERICRU_PERISOFTRST_CON02_PRESETN_UART3_SHIFT)      /* 0x00000080 */
#define PERICRU_PERISOFTRST_CON02_SRESETN_UART3_SHIFT      (10U)
#define PERICRU_PERISOFTRST_CON02_SRESETN_UART3_MASK       (0x1U << PERICRU_PERISOFTRST_CON02_SRESETN_UART3_SHIFT)      /* 0x00000400 */
#define PERICRU_PERISOFTRST_CON02_PRESETN_UART4_SHIFT      (11U)
#define PERICRU_PERISOFTRST_CON02_PRESETN_UART4_MASK       (0x1U << PERICRU_PERISOFTRST_CON02_PRESETN_UART4_SHIFT)      /* 0x00000800 */
#define PERICRU_PERISOFTRST_CON02_SRESETN_UART4_SHIFT      (14U)
#define PERICRU_PERISOFTRST_CON02_SRESETN_UART4_MASK       (0x1U << PERICRU_PERISOFTRST_CON02_SRESETN_UART4_SHIFT)      /* 0x00004000 */
#define PERICRU_PERISOFTRST_CON02_PRESETN_UART5_SHIFT      (15U)
#define PERICRU_PERISOFTRST_CON02_PRESETN_UART5_MASK       (0x1U << PERICRU_PERISOFTRST_CON02_PRESETN_UART5_SHIFT)      /* 0x00008000 */
/* PERISOFTRST_CON03 */
#define PERICRU_PERISOFTRST_CON03_OFFSET                   (0xA0CU)
#define PERICRU_PERISOFTRST_CON03_SRESETN_UART5_SHIFT      (2U)
#define PERICRU_PERISOFTRST_CON03_SRESETN_UART5_MASK       (0x1U << PERICRU_PERISOFTRST_CON03_SRESETN_UART5_SHIFT)      /* 0x00000004 */
#define PERICRU_PERISOFTRST_CON03_PRESETN_SARADC_SHIFT     (3U)
#define PERICRU_PERISOFTRST_CON03_PRESETN_SARADC_MASK      (0x1U << PERICRU_PERISOFTRST_CON03_PRESETN_SARADC_SHIFT)     /* 0x00000008 */
#define PERICRU_PERISOFTRST_CON03_RESETN_SARADC_SHIFT      (4U)
#define PERICRU_PERISOFTRST_CON03_RESETN_SARADC_MASK       (0x1U << PERICRU_PERISOFTRST_CON03_RESETN_SARADC_SHIFT)      /* 0x00000010 */
#define PERICRU_PERISOFTRST_CON03_RESETN_SARADC_PHY_SHIFT  (5U)
#define PERICRU_PERISOFTRST_CON03_RESETN_SARADC_PHY_MASK   (0x1U << PERICRU_PERISOFTRST_CON03_RESETN_SARADC_PHY_SHIFT)  /* 0x00000020 */
#define PERICRU_PERISOFTRST_CON03_PRESETN_SPI1_SHIFT       (6U)
#define PERICRU_PERISOFTRST_CON03_PRESETN_SPI1_MASK        (0x1U << PERICRU_PERISOFTRST_CON03_PRESETN_SPI1_SHIFT)       /* 0x00000040 */
#define PERICRU_PERISOFTRST_CON03_RESETN_SPI1_SHIFT        (7U)
#define PERICRU_PERISOFTRST_CON03_RESETN_SPI1_MASK         (0x1U << PERICRU_PERISOFTRST_CON03_RESETN_SPI1_SHIFT)        /* 0x00000080 */
#define PERICRU_PERISOFTRST_CON03_HRESETN_TRNG_NS_SHIFT    (9U)
#define PERICRU_PERISOFTRST_CON03_HRESETN_TRNG_NS_MASK     (0x1U << PERICRU_PERISOFTRST_CON03_HRESETN_TRNG_NS_SHIFT)    /* 0x00000200 */
#define PERICRU_PERISOFTRST_CON03_HRESETN_TRNG_S_SHIFT     (10U)
#define PERICRU_PERISOFTRST_CON03_HRESETN_TRNG_S_MASK      (0x1U << PERICRU_PERISOFTRST_CON03_HRESETN_TRNG_S_SHIFT)     /* 0x00000400 */
#define PERICRU_PERISOFTRST_CON03_RESETN_CORE_CRYPTO_SHIFT (11U)
#define PERICRU_PERISOFTRST_CON03_RESETN_CORE_CRYPTO_MASK  (0x1U << PERICRU_PERISOFTRST_CON03_RESETN_CORE_CRYPTO_SHIFT) /* 0x00000800 */
#define PERICRU_PERISOFTRST_CON03_RESETN_PKA_CRYPTO_SHIFT  (12U)
#define PERICRU_PERISOFTRST_CON03_RESETN_PKA_CRYPTO_MASK   (0x1U << PERICRU_PERISOFTRST_CON03_RESETN_PKA_CRYPTO_SHIFT)  /* 0x00001000 */
#define PERICRU_PERISOFTRST_CON03_ARESETN_CRYPTO_SHIFT     (13U)
#define PERICRU_PERISOFTRST_CON03_ARESETN_CRYPTO_MASK      (0x1U << PERICRU_PERISOFTRST_CON03_ARESETN_CRYPTO_SHIFT)     /* 0x00002000 */
#define PERICRU_PERISOFTRST_CON03_HRESETN_CRYPTO_SHIFT     (14U)
#define PERICRU_PERISOFTRST_CON03_HRESETN_CRYPTO_MASK      (0x1U << PERICRU_PERISOFTRST_CON03_HRESETN_CRYPTO_SHIFT)     /* 0x00004000 */
#define PERICRU_PERISOFTRST_CON03_PRESETN_PWM1_PERI_SHIFT  (15U)
#define PERICRU_PERISOFTRST_CON03_PRESETN_PWM1_PERI_MASK   (0x1U << PERICRU_PERISOFTRST_CON03_PRESETN_PWM1_PERI_SHIFT)  /* 0x00008000 */
/* PERISOFTRST_CON04 */
#define PERICRU_PERISOFTRST_CON04_OFFSET                   (0xA10U)
#define PERICRU_PERISOFTRST_CON04_RESETN_PWM1_PERI_SHIFT   (0U)
#define PERICRU_PERISOFTRST_CON04_RESETN_PWM1_PERI_MASK    (0x1U << PERICRU_PERISOFTRST_CON04_RESETN_PWM1_PERI_SHIFT)   /* 0x00000001 */
#define PERICRU_PERISOFTRST_CON04_PRESETN_PWM2_PERI_SHIFT  (2U)
#define PERICRU_PERISOFTRST_CON04_PRESETN_PWM2_PERI_MASK   (0x1U << PERICRU_PERISOFTRST_CON04_PRESETN_PWM2_PERI_SHIFT)  /* 0x00000004 */
#define PERICRU_PERISOFTRST_CON04_RESETN_PWM2_PERI_SHIFT   (3U)
#define PERICRU_PERISOFTRST_CON04_RESETN_PWM2_PERI_MASK    (0x1U << PERICRU_PERISOFTRST_CON04_RESETN_PWM2_PERI_SHIFT)   /* 0x00000008 */
#define PERICRU_PERISOFTRST_CON04_PRESETN_PERI_GRF_SHIFT   (5U)
#define PERICRU_PERISOFTRST_CON04_PRESETN_PERI_GRF_MASK    (0x1U << PERICRU_PERISOFTRST_CON04_PRESETN_PERI_GRF_SHIFT)   /* 0x00000020 */
#define PERICRU_PERISOFTRST_CON04_PRESETN_PERI_CRU_SHIFT   (6U)
#define PERICRU_PERISOFTRST_CON04_PRESETN_PERI_CRU_MASK    (0x1U << PERICRU_PERISOFTRST_CON04_PRESETN_PERI_CRU_SHIFT)   /* 0x00000040 */
#define PERICRU_PERISOFTRST_CON04_ARESETN_USBOTG_SHIFT     (7U)
#define PERICRU_PERISOFTRST_CON04_ARESETN_USBOTG_MASK      (0x1U << PERICRU_PERISOFTRST_CON04_ARESETN_USBOTG_SHIFT)     /* 0x00000080 */
#define PERICRU_PERISOFTRST_CON04_ARESETN_BUS_BIU_SHIFT    (10U)
#define PERICRU_PERISOFTRST_CON04_ARESETN_BUS_BIU_MASK     (0x1U << PERICRU_PERISOFTRST_CON04_ARESETN_BUS_BIU_SHIFT)    /* 0x00000400 */
#define PERICRU_PERISOFTRST_CON04_HRESETN_EMMC_SHIFT       (13U)
#define PERICRU_PERISOFTRST_CON04_HRESETN_EMMC_MASK        (0x1U << PERICRU_PERISOFTRST_CON04_HRESETN_EMMC_SHIFT)       /* 0x00002000 */
#define PERICRU_PERISOFTRST_CON04_HRESETN_SFC_SHIFT        (14U)
#define PERICRU_PERISOFTRST_CON04_HRESETN_SFC_MASK         (0x1U << PERICRU_PERISOFTRST_CON04_HRESETN_SFC_SHIFT)        /* 0x00004000 */
/* PERISOFTRST_CON05 */
#define PERICRU_PERISOFTRST_CON05_OFFSET                   (0xA14U)
#define PERICRU_PERISOFTRST_CON05_SRESETN_SFC_SHIFT        (0U)
#define PERICRU_PERISOFTRST_CON05_SRESETN_SFC_MASK         (0x1U << PERICRU_PERISOFTRST_CON05_SRESETN_SFC_SHIFT)        /* 0x00000001 */
#define PERICRU_PERISOFTRST_CON05_PRESETN_USBPHY_SHIFT     (1U)
#define PERICRU_PERISOFTRST_CON05_PRESETN_USBPHY_MASK      (0x1U << PERICRU_PERISOFTRST_CON05_PRESETN_USBPHY_SHIFT)     /* 0x00000002 */
#define PERICRU_PERISOFTRST_CON05_RESETN_USBPHY_POR_SHIFT  (2U)
#define PERICRU_PERISOFTRST_CON05_RESETN_USBPHY_POR_MASK   (0x1U << PERICRU_PERISOFTRST_CON05_RESETN_USBPHY_POR_SHIFT)  /* 0x00000004 */
#define PERICRU_PERISOFTRST_CON05_RESETN_USBPHY_OTG_SHIFT  (3U)
#define PERICRU_PERISOFTRST_CON05_RESETN_USBPHY_OTG_MASK   (0x1U << PERICRU_PERISOFTRST_CON05_RESETN_USBPHY_OTG_SHIFT)  /* 0x00000008 */
#define PERICRU_PERISOFTRST_CON05_ARESETN_DMAC_SHIFT       (8U)
#define PERICRU_PERISOFTRST_CON05_ARESETN_DMAC_MASK        (0x1U << PERICRU_PERISOFTRST_CON05_ARESETN_DMAC_SHIFT)       /* 0x00000100 */
#define PERICRU_PERISOFTRST_CON05_ARESETN_DECOM_SHIFT      (9U)
#define PERICRU_PERISOFTRST_CON05_ARESETN_DECOM_MASK       (0x1U << PERICRU_PERISOFTRST_CON05_ARESETN_DECOM_SHIFT)      /* 0x00000200 */
#define PERICRU_PERISOFTRST_CON05_PRESETN_DECOM_SHIFT      (10U)
#define PERICRU_PERISOFTRST_CON05_PRESETN_DECOM_MASK       (0x1U << PERICRU_PERISOFTRST_CON05_PRESETN_DECOM_SHIFT)      /* 0x00000400 */
#define PERICRU_PERISOFTRST_CON05_DRESETN_DECOM_SHIFT      (11U)
#define PERICRU_PERISOFTRST_CON05_DRESETN_DECOM_MASK       (0x1U << PERICRU_PERISOFTRST_CON05_DRESETN_DECOM_SHIFT)      /* 0x00000800 */
#define PERICRU_PERISOFTRST_CON05_PRESETN_PERI_SGRF_SHIFT  (12U)
#define PERICRU_PERISOFTRST_CON05_PRESETN_PERI_SGRF_MASK   (0x1U << PERICRU_PERISOFTRST_CON05_PRESETN_PERI_SGRF_SHIFT)  /* 0x00001000 */
#define PERICRU_PERISOFTRST_CON05_HRESETN_SAI_SHIFT        (13U)
#define PERICRU_PERISOFTRST_CON05_HRESETN_SAI_MASK         (0x1U << PERICRU_PERISOFTRST_CON05_HRESETN_SAI_SHIFT)        /* 0x00002000 */
#define PERICRU_PERISOFTRST_CON05_MRESETN_SAI_SHIFT        (14U)
#define PERICRU_PERISOFTRST_CON05_MRESETN_SAI_MASK         (0x1U << PERICRU_PERISOFTRST_CON05_MRESETN_SAI_SHIFT)        /* 0x00004000 */
#define PERICRU_PERISOFTRST_CON05_MRESETN_I2S0_8CH_TX_SHIFT (15U)
#define PERICRU_PERISOFTRST_CON05_MRESETN_I2S0_8CH_TX_MASK (0x1U << PERICRU_PERISOFTRST_CON05_MRESETN_I2S0_8CH_TX_SHIFT) /* 0x00008000 */
/* PERISOFTRST_CON06 */
#define PERICRU_PERISOFTRST_CON06_OFFSET                   (0xA18U)
#define PERICRU_PERISOFTRST_CON06_HRESETN_I2S0_SHIFT       (0U)
#define PERICRU_PERISOFTRST_CON06_HRESETN_I2S0_MASK        (0x1U << PERICRU_PERISOFTRST_CON06_HRESETN_I2S0_SHIFT)       /* 0x00000001 */
#define PERICRU_PERISOFTRST_CON06_MRESETN_DSM_SHIFT        (1U)
#define PERICRU_PERISOFTRST_CON06_MRESETN_DSM_MASK         (0x1U << PERICRU_PERISOFTRST_CON06_MRESETN_DSM_SHIFT)        /* 0x00000002 */
#define PERICRU_PERISOFTRST_CON06_PRESETN_DSM_SHIFT        (2U)
#define PERICRU_PERISOFTRST_CON06_PRESETN_DSM_MASK         (0x1U << PERICRU_PERISOFTRST_CON06_PRESETN_DSM_SHIFT)        /* 0x00000004 */
#define PERICRU_PERISOFTRST_CON06_PRESETN_ACODEC_SHIFT     (3U)
#define PERICRU_PERISOFTRST_CON06_PRESETN_ACODEC_MASK      (0x1U << PERICRU_PERISOFTRST_CON06_PRESETN_ACODEC_SHIFT)     /* 0x00000008 */
#define PERICRU_PERISOFTRST_CON06_MRESETN_I2S0_8CH_RX_SHIFT (6U)
#define PERICRU_PERISOFTRST_CON06_MRESETN_I2S0_8CH_RX_MASK (0x1U << PERICRU_PERISOFTRST_CON06_MRESETN_I2S0_8CH_RX_SHIFT) /* 0x00000040 */
#define PERICRU_PERISOFTRST_CON06_PRESETN_DFT2APB_SHIFT    (7U)
#define PERICRU_PERISOFTRST_CON06_PRESETN_DFT2APB_MASK     (0x1U << PERICRU_PERISOFTRST_CON06_PRESETN_DFT2APB_SHIFT)    /* 0x00000080 */
#define PERICRU_PERISOFTRST_CON06_HRESETN_IVE_SHIFT        (9U)
#define PERICRU_PERISOFTRST_CON06_HRESETN_IVE_MASK         (0x1U << PERICRU_PERISOFTRST_CON06_HRESETN_IVE_SHIFT)        /* 0x00000200 */
#define PERICRU_PERISOFTRST_CON06_ARESETN_IVE_SHIFT        (10U)
#define PERICRU_PERISOFTRST_CON06_ARESETN_IVE_MASK         (0x1U << PERICRU_PERISOFTRST_CON06_ARESETN_IVE_SHIFT)        /* 0x00000400 */
#define PERICRU_PERISOFTRST_CON06_PRESETN_UART0_SHIFT      (11U)
#define PERICRU_PERISOFTRST_CON06_PRESETN_UART0_MASK       (0x1U << PERICRU_PERISOFTRST_CON06_PRESETN_UART0_SHIFT)      /* 0x00000800 */
#define PERICRU_PERISOFTRST_CON06_SRESETN_UART0_SHIFT      (14U)
#define PERICRU_PERISOFTRST_CON06_SRESETN_UART0_MASK       (0x1U << PERICRU_PERISOFTRST_CON06_SRESETN_UART0_SHIFT)      /* 0x00004000 */
#define PERICRU_PERISOFTRST_CON06_PRESETN_UART1_SHIFT      (15U)
#define PERICRU_PERISOFTRST_CON06_PRESETN_UART1_MASK       (0x1U << PERICRU_PERISOFTRST_CON06_PRESETN_UART1_SHIFT)      /* 0x00008000 */
/* PERISOFTRST_CON07 */
#define PERICRU_PERISOFTRST_CON07_OFFSET                   (0xA1CU)
#define PERICRU_PERISOFTRST_CON07_SRESETN_UART1_SHIFT      (2U)
#define PERICRU_PERISOFTRST_CON07_SRESETN_UART1_MASK       (0x1U << PERICRU_PERISOFTRST_CON07_SRESETN_UART1_SHIFT)      /* 0x00000004 */
#define PERICRU_PERISOFTRST_CON07_PRESETN_PWM0_PERI_SHIFT  (3U)
#define PERICRU_PERISOFTRST_CON07_PRESETN_PWM0_PERI_MASK   (0x1U << PERICRU_PERISOFTRST_CON07_PRESETN_PWM0_PERI_SHIFT)  /* 0x00000008 */
#define PERICRU_PERISOFTRST_CON07_RESETN_PWM0_PERI_SHIFT   (4U)
#define PERICRU_PERISOFTRST_CON07_RESETN_PWM0_PERI_MASK    (0x1U << PERICRU_PERISOFTRST_CON07_RESETN_PWM0_PERI_SHIFT)   /* 0x00000010 */
/*****************************************VICRU******************************************/
/* VICLKSEL_CON00 */
#define VICRU_VICLKSEL_CON00_OFFSET                        (0x300U)
#define VICRU_VICLKSEL_CON00_HCLK_VI_ROOT_SEL_SHIFT        (0U)
#define VICRU_VICLKSEL_CON00_HCLK_VI_ROOT_SEL_MASK         (0x3U << VICRU_VICLKSEL_CON00_HCLK_VI_ROOT_SEL_SHIFT)        /* 0x00000003 */
#define VICRU_VICLKSEL_CON00_ACLK_VI_ROOT_SEL_SHIFT        (2U)
#define VICRU_VICLKSEL_CON00_ACLK_VI_ROOT_SEL_MASK         (0x3U << VICRU_VICLKSEL_CON00_ACLK_VI_ROOT_SEL_SHIFT)        /* 0x0000000C */
#define VICRU_VICLKSEL_CON00_PCLK_VI_ROOT_SEL_SHIFT        (4U)
#define VICRU_VICLKSEL_CON00_PCLK_VI_ROOT_SEL_MASK         (0x3U << VICRU_VICLKSEL_CON00_PCLK_VI_ROOT_SEL_SHIFT)        /* 0x00000030 */
#define VICRU_VICLKSEL_CON00_PCLK_VI_RTC_ROOT_SEL_SHIFT    (6U)
#define VICRU_VICLKSEL_CON00_PCLK_VI_RTC_ROOT_SEL_MASK     (0x1U << VICRU_VICLKSEL_CON00_PCLK_VI_RTC_ROOT_SEL_SHIFT)    /* 0x00000040 */
#define VICRU_VICLKSEL_CON00_CLK_CORE_ISP3P2_SEL_SHIFT     (7U)
#define VICRU_VICLKSEL_CON00_CLK_CORE_ISP3P2_SEL_MASK      (0x3U << VICRU_VICLKSEL_CON00_CLK_CORE_ISP3P2_SEL_SHIFT)     /* 0x00000180 */
#define VICRU_VICLKSEL_CON00_DCLK_VICAP_SEL_SHIFT          (9U)
#define VICRU_VICLKSEL_CON00_DCLK_VICAP_SEL_MASK           (0x3U << VICRU_VICLKSEL_CON00_DCLK_VICAP_SEL_SHIFT)          /* 0x00000600 */
/* VICLKSEL_CON01 */
#define VICRU_VICLKSEL_CON01_OFFSET                        (0x304U)
#define VICRU_VICLKSEL_CON01_CCLK_SRC_SDMMC_DIV_SHIFT      (8U)
#define VICRU_VICLKSEL_CON01_CCLK_SRC_SDMMC_DIV_MASK       (0x3FU << VICRU_VICLKSEL_CON01_CCLK_SRC_SDMMC_DIV_SHIFT)     /* 0x00003F00 */
#define VICRU_VICLKSEL_CON01_CCLK_SRC_SDMMC_SEL_SHIFT      (14U)
#define VICRU_VICLKSEL_CON01_CCLK_SRC_SDMMC_SEL_MASK       (0x1U << VICRU_VICLKSEL_CON01_CCLK_SRC_SDMMC_SEL_SHIFT)      /* 0x00004000 */
/* VICLKSEL_CON02 */
#define VICRU_VICLKSEL_CON02_OFFSET                        (0x308U)
#define VICRU_VICLKSEL_CON02_CLK_TESTOUT_VI2PERI_0_DIV_SHIFT (1U)
#define VICRU_VICLKSEL_CON02_CLK_TESTOUT_VI2PERI_0_DIV_MASK (0x1FU << VICRU_VICLKSEL_CON02_CLK_TESTOUT_VI2PERI_0_DIV_SHIFT) /* 0x0000003E */
#define VICRU_VICLKSEL_CON02_CLK_TESTOUT_VI2PERI_0_SEL_SHIFT (6U)
#define VICRU_VICLKSEL_CON02_CLK_TESTOUT_VI2PERI_0_SEL_MASK (0x7U << VICRU_VICLKSEL_CON02_CLK_TESTOUT_VI2PERI_0_SEL_SHIFT) /* 0x000001C0 */
/* VICLKSEL_CON03 */
#define VICRU_VICLKSEL_CON03_OFFSET                        (0x30CU)
#define VICRU_VICLKSEL_CON03_CLK_TESTOUT_VI2PERI_1_DIV_SHIFT (0U)
#define VICRU_VICLKSEL_CON03_CLK_TESTOUT_VI2PERI_1_DIV_MASK (0x1FU << VICRU_VICLKSEL_CON03_CLK_TESTOUT_VI2PERI_1_DIV_SHIFT) /* 0x0000001F */
#define VICRU_VICLKSEL_CON03_CLK_TESTOUT_VI2PERI_1_SEL_SHIFT (5U)
#define VICRU_VICLKSEL_CON03_CLK_TESTOUT_VI2PERI_1_SEL_MASK (0x7U << VICRU_VICLKSEL_CON03_CLK_TESTOUT_VI2PERI_1_SEL_SHIFT) /* 0x000000E0 */
/* VIGATE_CON00 */
#define VICRU_VIGATE_CON00_OFFSET                          (0x800U)
#define VICRU_VIGATE_CON00_HCLK_VI_ROOT_EN_SHIFT           (0U)
#define VICRU_VIGATE_CON00_HCLK_VI_ROOT_EN_MASK            (0x1U << VICRU_VIGATE_CON00_HCLK_VI_ROOT_EN_SHIFT)           /* 0x00000001 */
#define VICRU_VIGATE_CON00_ACLK_VI_ROOT_EN_SHIFT           (1U)
#define VICRU_VIGATE_CON00_ACLK_VI_ROOT_EN_MASK            (0x1U << VICRU_VIGATE_CON00_ACLK_VI_ROOT_EN_SHIFT)           /* 0x00000002 */
#define VICRU_VIGATE_CON00_PCLK_VI_ROOT_EN_SHIFT           (2U)
#define VICRU_VIGATE_CON00_PCLK_VI_ROOT_EN_MASK            (0x1U << VICRU_VIGATE_CON00_PCLK_VI_ROOT_EN_SHIFT)           /* 0x00000004 */
#define VICRU_VIGATE_CON00_PCLK_VI_RTC_ROOT_EN_SHIFT       (3U)
#define VICRU_VIGATE_CON00_PCLK_VI_RTC_ROOT_EN_MASK        (0x1U << VICRU_VIGATE_CON00_PCLK_VI_RTC_ROOT_EN_SHIFT)       /* 0x00000008 */
#define VICRU_VIGATE_CON00_HCLK_VI_BIU_EN_SHIFT            (4U)
#define VICRU_VIGATE_CON00_HCLK_VI_BIU_EN_MASK             (0x1U << VICRU_VIGATE_CON00_HCLK_VI_BIU_EN_SHIFT)            /* 0x00000010 */
#define VICRU_VIGATE_CON00_ACLK_VI_BIU_EN_SHIFT            (5U)
#define VICRU_VIGATE_CON00_ACLK_VI_BIU_EN_MASK             (0x1U << VICRU_VIGATE_CON00_ACLK_VI_BIU_EN_SHIFT)            /* 0x00000020 */
#define VICRU_VIGATE_CON00_PCLK_VI_BIU_EN_SHIFT            (6U)
#define VICRU_VIGATE_CON00_PCLK_VI_BIU_EN_MASK             (0x1U << VICRU_VIGATE_CON00_PCLK_VI_BIU_EN_SHIFT)            /* 0x00000040 */
#define VICRU_VIGATE_CON00_HCLK_ISP3P2_EN_SHIFT            (7U)
#define VICRU_VIGATE_CON00_HCLK_ISP3P2_EN_MASK             (0x1U << VICRU_VIGATE_CON00_HCLK_ISP3P2_EN_SHIFT)            /* 0x00000080 */
#define VICRU_VIGATE_CON00_ACLK_ISP3P2_EN_SHIFT            (8U)
#define VICRU_VIGATE_CON00_ACLK_ISP3P2_EN_MASK             (0x1U << VICRU_VIGATE_CON00_ACLK_ISP3P2_EN_SHIFT)            /* 0x00000100 */
#define VICRU_VIGATE_CON00_CLK_CORE_ISP3P2_EN_SHIFT        (9U)
#define VICRU_VIGATE_CON00_CLK_CORE_ISP3P2_EN_MASK         (0x1U << VICRU_VIGATE_CON00_CLK_CORE_ISP3P2_EN_SHIFT)        /* 0x00000200 */
#define VICRU_VIGATE_CON00_DCLK_VICAP_EN_SHIFT             (10U)
#define VICRU_VIGATE_CON00_DCLK_VICAP_EN_MASK              (0x1U << VICRU_VIGATE_CON00_DCLK_VICAP_EN_SHIFT)             /* 0x00000400 */
#define VICRU_VIGATE_CON00_PCLK_VICAP_EN_SHIFT             (11U)
#define VICRU_VIGATE_CON00_PCLK_VICAP_EN_MASK              (0x1U << VICRU_VIGATE_CON00_PCLK_VICAP_EN_SHIFT)             /* 0x00000800 */
#define VICRU_VIGATE_CON00_ACLK_VICAP_EN_SHIFT             (12U)
#define VICRU_VIGATE_CON00_ACLK_VICAP_EN_MASK              (0x1U << VICRU_VIGATE_CON00_ACLK_VICAP_EN_SHIFT)             /* 0x00001000 */
#define VICRU_VIGATE_CON00_HCLK_VICAP_EN_SHIFT             (13U)
#define VICRU_VIGATE_CON00_HCLK_VICAP_EN_MASK              (0x1U << VICRU_VIGATE_CON00_HCLK_VICAP_EN_SHIFT)             /* 0x00002000 */
#define VICRU_VIGATE_CON00_I0CLK_VICAP_EN_SHIFT            (14U)
#define VICRU_VIGATE_CON00_I0CLK_VICAP_EN_MASK             (0x1U << VICRU_VIGATE_CON00_I0CLK_VICAP_EN_SHIFT)            /* 0x00004000 */
#define VICRU_VIGATE_CON00_I1CLK_VICAP_EN_SHIFT            (15U)
#define VICRU_VIGATE_CON00_I1CLK_VICAP_EN_MASK             (0x1U << VICRU_VIGATE_CON00_I1CLK_VICAP_EN_SHIFT)            /* 0x00008000 */
/* VIGATE_CON01 */
#define VICRU_VIGATE_CON01_OFFSET                          (0x804U)
#define VICRU_VIGATE_CON01_RX0PCLK_VICAP_EN_SHIFT          (0U)
#define VICRU_VIGATE_CON01_RX0PCLK_VICAP_EN_MASK           (0x1U << VICRU_VIGATE_CON01_RX0PCLK_VICAP_EN_SHIFT)          /* 0x00000001 */
#define VICRU_VIGATE_CON01_RX1PCLK_VICAP_EN_SHIFT          (1U)
#define VICRU_VIGATE_CON01_RX1PCLK_VICAP_EN_MASK           (0x1U << VICRU_VIGATE_CON01_RX1PCLK_VICAP_EN_SHIFT)          /* 0x00000002 */
#define VICRU_VIGATE_CON01_ISP0CLK_VICAP_EN_SHIFT          (2U)
#define VICRU_VIGATE_CON01_ISP0CLK_VICAP_EN_MASK           (0x1U << VICRU_VIGATE_CON01_ISP0CLK_VICAP_EN_SHIFT)          /* 0x00000004 */
#define VICRU_VIGATE_CON01_PCLK_CSIHOST0_EN_SHIFT          (3U)
#define VICRU_VIGATE_CON01_PCLK_CSIHOST0_EN_MASK           (0x1U << VICRU_VIGATE_CON01_PCLK_CSIHOST0_EN_SHIFT)          /* 0x00000008 */
#define VICRU_VIGATE_CON01_CLK_RXBYTECLKHS_0_EN_SHIFT      (4U)
#define VICRU_VIGATE_CON01_CLK_RXBYTECLKHS_0_EN_MASK       (0x1U << VICRU_VIGATE_CON01_CLK_RXBYTECLKHS_0_EN_SHIFT)      /* 0x00000010 */
#define VICRU_VIGATE_CON01_PCLK_CSIHOST1_EN_SHIFT          (5U)
#define VICRU_VIGATE_CON01_PCLK_CSIHOST1_EN_MASK           (0x1U << VICRU_VIGATE_CON01_PCLK_CSIHOST1_EN_SHIFT)          /* 0x00000020 */
#define VICRU_VIGATE_CON01_CLK_RXBYTECLKHS_1_EN_SHIFT      (6U)
#define VICRU_VIGATE_CON01_CLK_RXBYTECLKHS_1_EN_MASK       (0x1U << VICRU_VIGATE_CON01_CLK_RXBYTECLKHS_1_EN_SHIFT)      /* 0x00000040 */
#define VICRU_VIGATE_CON01_MBIST_CLK_ACLK_VICAP_EN_SHIFT   (7U)
#define VICRU_VIGATE_CON01_MBIST_CLK_ACLK_VICAP_EN_MASK    (0x1U << VICRU_VIGATE_CON01_MBIST_CLK_ACLK_VICAP_EN_SHIFT)   /* 0x00000080 */
#define VICRU_VIGATE_CON01_MBIST_CLK_DCLK_VICAP_EN_SHIFT   (8U)
#define VICRU_VIGATE_CON01_MBIST_CLK_DCLK_VICAP_EN_MASK    (0x1U << VICRU_VIGATE_CON01_MBIST_CLK_DCLK_VICAP_EN_SHIFT)   /* 0x00000100 */
#define VICRU_VIGATE_CON01_MBIST_CLK_ACLK_ISP3P2_EN_SHIFT  (9U)
#define VICRU_VIGATE_CON01_MBIST_CLK_ACLK_ISP3P2_EN_MASK   (0x1U << VICRU_VIGATE_CON01_MBIST_CLK_ACLK_ISP3P2_EN_SHIFT)  /* 0x00000200 */
#define VICRU_VIGATE_CON01_MBIST_CLK_CLK_CORE_ISP3P2_EN_SHIFT (10U)
#define VICRU_VIGATE_CON01_MBIST_CLK_CLK_CORE_ISP3P2_EN_MASK (0x1U << VICRU_VIGATE_CON01_MBIST_CLK_CLK_CORE_ISP3P2_EN_SHIFT) /* 0x00000400 */
#define VICRU_VIGATE_CON01_CCLK_SRC_SDMMC_EN_SHIFT         (11U)
#define VICRU_VIGATE_CON01_CCLK_SRC_SDMMC_EN_MASK          (0x1U << VICRU_VIGATE_CON01_CCLK_SRC_SDMMC_EN_SHIFT)         /* 0x00000800 */
#define VICRU_VIGATE_CON01_HCLK_SDMMC_EN_SHIFT             (12U)
#define VICRU_VIGATE_CON01_HCLK_SDMMC_EN_MASK              (0x1U << VICRU_VIGATE_CON01_HCLK_SDMMC_EN_SHIFT)             /* 0x00001000 */
#define VICRU_VIGATE_CON01_CLK_SDMMC_DETN_FLT_EN_SHIFT     (13U)
#define VICRU_VIGATE_CON01_CLK_SDMMC_DETN_FLT_EN_MASK      (0x1U << VICRU_VIGATE_CON01_CLK_SDMMC_DETN_FLT_EN_SHIFT)     /* 0x00002000 */
#define VICRU_VIGATE_CON01_PCLK_MIPICSIPHY_EN_SHIFT        (14U)
#define VICRU_VIGATE_CON01_PCLK_MIPICSIPHY_EN_MASK         (0x1U << VICRU_VIGATE_CON01_PCLK_MIPICSIPHY_EN_SHIFT)        /* 0x00004000 */
#define VICRU_VIGATE_CON01_PCLK_GPIO3_EN_SHIFT             (15U)
#define VICRU_VIGATE_CON01_PCLK_GPIO3_EN_MASK              (0x1U << VICRU_VIGATE_CON01_PCLK_GPIO3_EN_SHIFT)             /* 0x00008000 */
/* VIGATE_CON02 */
#define VICRU_VIGATE_CON02_OFFSET                          (0x808U)
#define VICRU_VIGATE_CON02_DBCLK_GPIO3_EN_SHIFT            (0U)
#define VICRU_VIGATE_CON02_DBCLK_GPIO3_EN_MASK             (0x1U << VICRU_VIGATE_CON02_DBCLK_GPIO3_EN_SHIFT)            /* 0x00000001 */
#define VICRU_VIGATE_CON02_PCLK_VI_IOC_EN_SHIFT            (1U)
#define VICRU_VIGATE_CON02_PCLK_VI_IOC_EN_MASK             (0x1U << VICRU_VIGATE_CON02_PCLK_VI_IOC_EN_SHIFT)            /* 0x00000002 */
#define VICRU_VIGATE_CON02_PCLK_VI_GRF_EN_SHIFT            (2U)
#define VICRU_VIGATE_CON02_PCLK_VI_GRF_EN_MASK             (0x1U << VICRU_VIGATE_CON02_PCLK_VI_GRF_EN_SHIFT)            /* 0x00000004 */
#define VICRU_VIGATE_CON02_PCLK_VI_SGRF_EN_SHIFT           (3U)
#define VICRU_VIGATE_CON02_PCLK_VI_SGRF_EN_MASK            (0x1U << VICRU_VIGATE_CON02_PCLK_VI_SGRF_EN_SHIFT)           /* 0x00000008 */
#define VICRU_VIGATE_CON02_PCLK_VI_CRU_EN_SHIFT            (4U)
#define VICRU_VIGATE_CON02_PCLK_VI_CRU_EN_MASK             (0x1U << VICRU_VIGATE_CON02_PCLK_VI_CRU_EN_SHIFT)            /* 0x00000010 */
#define VICRU_VIGATE_CON02_PCLK_VI_RTC_TEST_EN_SHIFT       (5U)
#define VICRU_VIGATE_CON02_PCLK_VI_RTC_TEST_EN_MASK        (0x1U << VICRU_VIGATE_CON02_PCLK_VI_RTC_TEST_EN_SHIFT)       /* 0x00000020 */
#define VICRU_VIGATE_CON02_PCLK_VI_RTC_PHY_EN_SHIFT        (6U)
#define VICRU_VIGATE_CON02_PCLK_VI_RTC_PHY_EN_MASK         (0x1U << VICRU_VIGATE_CON02_PCLK_VI_RTC_PHY_EN_SHIFT)        /* 0x00000040 */
#define VICRU_VIGATE_CON02_PCLK_VI_RTC_NIU_EN_SHIFT        (7U)
#define VICRU_VIGATE_CON02_PCLK_VI_RTC_NIU_EN_MASK         (0x1U << VICRU_VIGATE_CON02_PCLK_VI_RTC_NIU_EN_SHIFT)        /* 0x00000080 */
#define VICRU_VIGATE_CON02_CLK_TESTOUT_VI2PERI_0_EN_SHIFT  (10U)
#define VICRU_VIGATE_CON02_CLK_TESTOUT_VI2PERI_0_EN_MASK   (0x1U << VICRU_VIGATE_CON02_CLK_TESTOUT_VI2PERI_0_EN_SHIFT)  /* 0x00000400 */
#define VICRU_VIGATE_CON02_CLK_TESTOUT_VI2PERI_1_EN_SHIFT  (11U)
#define VICRU_VIGATE_CON02_CLK_TESTOUT_VI2PERI_1_EN_MASK   (0x1U << VICRU_VIGATE_CON02_CLK_TESTOUT_VI2PERI_1_EN_SHIFT)  /* 0x00000800 */
/* VISOFTRST_CON00 */
#define VICRU_VISOFTRST_CON00_OFFSET                       (0xA00U)
#define VICRU_VISOFTRST_CON00_HRESETN_VI_BIU_SHIFT         (4U)
#define VICRU_VISOFTRST_CON00_HRESETN_VI_BIU_MASK          (0x1U << VICRU_VISOFTRST_CON00_HRESETN_VI_BIU_SHIFT)         /* 0x00000010 */
#define VICRU_VISOFTRST_CON00_ARESETN_VI_BIU_SHIFT         (5U)
#define VICRU_VISOFTRST_CON00_ARESETN_VI_BIU_MASK          (0x1U << VICRU_VISOFTRST_CON00_ARESETN_VI_BIU_SHIFT)         /* 0x00000020 */
#define VICRU_VISOFTRST_CON00_PRESETN_VI_BIU_SHIFT         (6U)
#define VICRU_VISOFTRST_CON00_PRESETN_VI_BIU_MASK          (0x1U << VICRU_VISOFTRST_CON00_PRESETN_VI_BIU_SHIFT)         /* 0x00000040 */
#define VICRU_VISOFTRST_CON00_RESETN_CORE_ISP3P2_SHIFT     (9U)
#define VICRU_VISOFTRST_CON00_RESETN_CORE_ISP3P2_MASK      (0x1U << VICRU_VISOFTRST_CON00_RESETN_CORE_ISP3P2_SHIFT)     /* 0x00000200 */
#define VICRU_VISOFTRST_CON00_DRESETN_VICAP_SHIFT          (10U)
#define VICRU_VISOFTRST_CON00_DRESETN_VICAP_MASK           (0x1U << VICRU_VISOFTRST_CON00_DRESETN_VICAP_SHIFT)          /* 0x00000400 */
#define VICRU_VISOFTRST_CON00_PRESETN_VICAP_SHIFT          (11U)
#define VICRU_VISOFTRST_CON00_PRESETN_VICAP_MASK           (0x1U << VICRU_VISOFTRST_CON00_PRESETN_VICAP_SHIFT)          /* 0x00000800 */
#define VICRU_VISOFTRST_CON00_ARESETN_VICAP_SHIFT          (12U)
#define VICRU_VISOFTRST_CON00_ARESETN_VICAP_MASK           (0x1U << VICRU_VISOFTRST_CON00_ARESETN_VICAP_SHIFT)          /* 0x00001000 */
#define VICRU_VISOFTRST_CON00_HRESETN_VICAP_SHIFT          (13U)
#define VICRU_VISOFTRST_CON00_HRESETN_VICAP_MASK           (0x1U << VICRU_VISOFTRST_CON00_HRESETN_VICAP_SHIFT)          /* 0x00002000 */
#define VICRU_VISOFTRST_CON00_I0RESETN_VICAP_SHIFT         (14U)
#define VICRU_VISOFTRST_CON00_I0RESETN_VICAP_MASK          (0x1U << VICRU_VISOFTRST_CON00_I0RESETN_VICAP_SHIFT)         /* 0x00004000 */
#define VICRU_VISOFTRST_CON00_I1RESETN_VICAP_SHIFT         (15U)
#define VICRU_VISOFTRST_CON00_I1RESETN_VICAP_MASK          (0x1U << VICRU_VISOFTRST_CON00_I1RESETN_VICAP_SHIFT)         /* 0x00008000 */
/* VISOFTRST_CON01 */
#define VICRU_VISOFTRST_CON01_OFFSET                       (0xA04U)
#define VICRU_VISOFTRST_CON01_RX0PRESETN_VICAP_SHIFT       (0U)
#define VICRU_VISOFTRST_CON01_RX0PRESETN_VICAP_MASK        (0x1U << VICRU_VISOFTRST_CON01_RX0PRESETN_VICAP_SHIFT)       /* 0x00000001 */
#define VICRU_VISOFTRST_CON01_RX1PRESETN_VICAP_SHIFT       (1U)
#define VICRU_VISOFTRST_CON01_RX1PRESETN_VICAP_MASK        (0x1U << VICRU_VISOFTRST_CON01_RX1PRESETN_VICAP_SHIFT)       /* 0x00000002 */
#define VICRU_VISOFTRST_CON01_ISP0RESETN_VICAP_SHIFT       (2U)
#define VICRU_VISOFTRST_CON01_ISP0RESETN_VICAP_MASK        (0x1U << VICRU_VISOFTRST_CON01_ISP0RESETN_VICAP_SHIFT)       /* 0x00000004 */
#define VICRU_VISOFTRST_CON01_PRESETN_CSIHOST0_SHIFT       (4U)
#define VICRU_VISOFTRST_CON01_PRESETN_CSIHOST0_MASK        (0x1U << VICRU_VISOFTRST_CON01_PRESETN_CSIHOST0_SHIFT)       /* 0x00000010 */
#define VICRU_VISOFTRST_CON01_PRESETN_CSIHOST1_SHIFT       (6U)
#define VICRU_VISOFTRST_CON01_PRESETN_CSIHOST1_MASK        (0x1U << VICRU_VISOFTRST_CON01_PRESETN_CSIHOST1_SHIFT)       /* 0x00000040 */
#define VICRU_VISOFTRST_CON01_HRESETN_SDMMC_SHIFT          (12U)
#define VICRU_VISOFTRST_CON01_HRESETN_SDMMC_MASK           (0x1U << VICRU_VISOFTRST_CON01_HRESETN_SDMMC_SHIFT)          /* 0x00001000 */
#define VICRU_VISOFTRST_CON01_RESETN_SDMMC_DETN_FLT_SHIFT  (13U)
#define VICRU_VISOFTRST_CON01_RESETN_SDMMC_DETN_FLT_MASK   (0x1U << VICRU_VISOFTRST_CON01_RESETN_SDMMC_DETN_FLT_SHIFT)  /* 0x00002000 */
#define VICRU_VISOFTRST_CON01_PRESETN_MIPICSIPHY_SHIFT     (14U)
#define VICRU_VISOFTRST_CON01_PRESETN_MIPICSIPHY_MASK      (0x1U << VICRU_VISOFTRST_CON01_PRESETN_MIPICSIPHY_SHIFT)     /* 0x00004000 */
#define VICRU_VISOFTRST_CON01_PRESETN_GPIO3_SHIFT          (15U)
#define VICRU_VISOFTRST_CON01_PRESETN_GPIO3_MASK           (0x1U << VICRU_VISOFTRST_CON01_PRESETN_GPIO3_SHIFT)          /* 0x00008000 */
/* VISOFTRST_CON02 */
#define VICRU_VISOFTRST_CON02_OFFSET                       (0xA08U)
#define VICRU_VISOFTRST_CON02_DBRESETN_GPIO3_SHIFT         (0U)
#define VICRU_VISOFTRST_CON02_DBRESETN_GPIO3_MASK          (0x1U << VICRU_VISOFTRST_CON02_DBRESETN_GPIO3_SHIFT)         /* 0x00000001 */
#define VICRU_VISOFTRST_CON02_PRESETN_VI_IOC_SHIFT         (1U)
#define VICRU_VISOFTRST_CON02_PRESETN_VI_IOC_MASK          (0x1U << VICRU_VISOFTRST_CON02_PRESETN_VI_IOC_SHIFT)         /* 0x00000002 */
#define VICRU_VISOFTRST_CON02_PRESETN_VI_GRF_SHIFT         (2U)
#define VICRU_VISOFTRST_CON02_PRESETN_VI_GRF_MASK          (0x1U << VICRU_VISOFTRST_CON02_PRESETN_VI_GRF_SHIFT)         /* 0x00000004 */
#define VICRU_VISOFTRST_CON02_PRESETN_VI_SGRF_SHIFT        (3U)
#define VICRU_VISOFTRST_CON02_PRESETN_VI_SGRF_MASK         (0x1U << VICRU_VISOFTRST_CON02_PRESETN_VI_SGRF_SHIFT)        /* 0x00000008 */
#define VICRU_VISOFTRST_CON02_PRESETN_VI_CRU_SHIFT         (4U)
#define VICRU_VISOFTRST_CON02_PRESETN_VI_CRU_MASK          (0x1U << VICRU_VISOFTRST_CON02_PRESETN_VI_CRU_SHIFT)         /* 0x00000010 */
#define VICRU_VISOFTRST_CON02_PRESETN_VI_RTC_TEST_SHIFT    (5U)
#define VICRU_VISOFTRST_CON02_PRESETN_VI_RTC_TEST_MASK     (0x1U << VICRU_VISOFTRST_CON02_PRESETN_VI_RTC_TEST_SHIFT)    /* 0x00000020 */
#define VICRU_VISOFTRST_CON02_PRESETN_VI_RTC_NIU_SHIFT     (7U)
#define VICRU_VISOFTRST_CON02_PRESETN_VI_RTC_NIU_MASK      (0x1U << VICRU_VISOFTRST_CON02_PRESETN_VI_RTC_NIU_SHIFT)     /* 0x00000080 */
/*****************************************NPUCRU*****************************************/
/* NPUCLKSEL_CON00 */
#define NPUCRU_NPUCLKSEL_CON00_OFFSET                      (0x300U)
#define NPUCRU_NPUCLKSEL_CON00_HCLK_NPU_ROOT_SEL_SHIFT     (0U)
#define NPUCRU_NPUCLKSEL_CON00_HCLK_NPU_ROOT_SEL_MASK      (0x3U << NPUCRU_NPUCLKSEL_CON00_HCLK_NPU_ROOT_SEL_SHIFT)     /* 0x00000003 */
#define NPUCRU_NPUCLKSEL_CON00_ACLK_NPU_ROOT_SEL_SHIFT     (2U)
#define NPUCRU_NPUCLKSEL_CON00_ACLK_NPU_ROOT_SEL_MASK      (0x3U << NPUCRU_NPUCLKSEL_CON00_ACLK_NPU_ROOT_SEL_SHIFT)     /* 0x0000000C */
#define NPUCRU_NPUCLKSEL_CON00_PCLK_NPU_ROOT_SEL_SHIFT     (4U)
#define NPUCRU_NPUCLKSEL_CON00_PCLK_NPU_ROOT_SEL_MASK      (0x3U << NPUCRU_NPUCLKSEL_CON00_PCLK_NPU_ROOT_SEL_SHIFT)     /* 0x00000030 */
#define NPUCRU_NPUCLKSEL_CON00_CLK_TESTOUT_NPU2VI_DIV_SHIFT (6U)
#define NPUCRU_NPUCLKSEL_CON00_CLK_TESTOUT_NPU2VI_DIV_MASK (0x1FU << NPUCRU_NPUCLKSEL_CON00_CLK_TESTOUT_NPU2VI_DIV_SHIFT) /* 0x000007C0 */
#define NPUCRU_NPUCLKSEL_CON00_CLK_TESTOUT_NPU2VI_SEL_SHIFT (11U)
#define NPUCRU_NPUCLKSEL_CON00_CLK_TESTOUT_NPU2VI_SEL_MASK (0x3U << NPUCRU_NPUCLKSEL_CON00_CLK_TESTOUT_NPU2VI_SEL_SHIFT) /* 0x00001800 */
/* NPUGATE_CON00 */
#define NPUCRU_NPUGATE_CON00_OFFSET                        (0x800U)
#define NPUCRU_NPUGATE_CON00_HCLK_NPU_ROOT_EN_SHIFT        (0U)
#define NPUCRU_NPUGATE_CON00_HCLK_NPU_ROOT_EN_MASK         (0x1U << NPUCRU_NPUGATE_CON00_HCLK_NPU_ROOT_EN_SHIFT)        /* 0x00000001 */
#define NPUCRU_NPUGATE_CON00_ACLK_NPU_ROOT_EN_SHIFT        (1U)
#define NPUCRU_NPUGATE_CON00_ACLK_NPU_ROOT_EN_MASK         (0x1U << NPUCRU_NPUGATE_CON00_ACLK_NPU_ROOT_EN_SHIFT)        /* 0x00000002 */
#define NPUCRU_NPUGATE_CON00_PCLK_NPU_ROOT_EN_SHIFT        (2U)
#define NPUCRU_NPUGATE_CON00_PCLK_NPU_ROOT_EN_MASK         (0x1U << NPUCRU_NPUGATE_CON00_PCLK_NPU_ROOT_EN_SHIFT)        /* 0x00000004 */
#define NPUCRU_NPUGATE_CON00_HCLK_NPU_BIU_EN_SHIFT         (3U)
#define NPUCRU_NPUGATE_CON00_HCLK_NPU_BIU_EN_MASK          (0x1U << NPUCRU_NPUGATE_CON00_HCLK_NPU_BIU_EN_SHIFT)         /* 0x00000008 */
#define NPUCRU_NPUGATE_CON00_ACLK_NPU_BIU_EN_SHIFT         (4U)
#define NPUCRU_NPUGATE_CON00_ACLK_NPU_BIU_EN_MASK          (0x1U << NPUCRU_NPUGATE_CON00_ACLK_NPU_BIU_EN_SHIFT)         /* 0x00000010 */
#define NPUCRU_NPUGATE_CON00_PCLK_NPU_BIU_EN_SHIFT         (5U)
#define NPUCRU_NPUGATE_CON00_PCLK_NPU_BIU_EN_MASK          (0x1U << NPUCRU_NPUGATE_CON00_PCLK_NPU_BIU_EN_SHIFT)         /* 0x00000020 */
#define NPUCRU_NPUGATE_CON00_PCLK_NPU_CRU_EN_SHIFT         (6U)
#define NPUCRU_NPUGATE_CON00_PCLK_NPU_CRU_EN_MASK          (0x1U << NPUCRU_NPUGATE_CON00_PCLK_NPU_CRU_EN_SHIFT)         /* 0x00000040 */
#define NPUCRU_NPUGATE_CON00_PCLK_NPU_SGRF_EN_SHIFT        (7U)
#define NPUCRU_NPUGATE_CON00_PCLK_NPU_SGRF_EN_MASK         (0x1U << NPUCRU_NPUGATE_CON00_PCLK_NPU_SGRF_EN_SHIFT)        /* 0x00000080 */
#define NPUCRU_NPUGATE_CON00_PCLK_NPU_GRF_EN_SHIFT         (8U)
#define NPUCRU_NPUGATE_CON00_PCLK_NPU_GRF_EN_MASK          (0x1U << NPUCRU_NPUGATE_CON00_PCLK_NPU_GRF_EN_SHIFT)         /* 0x00000100 */
#define NPUCRU_NPUGATE_CON00_HCLK_RKNN_EN_SHIFT            (9U)
#define NPUCRU_NPUGATE_CON00_HCLK_RKNN_EN_MASK             (0x1U << NPUCRU_NPUGATE_CON00_HCLK_RKNN_EN_SHIFT)            /* 0x00000200 */
#define NPUCRU_NPUGATE_CON00_ACLK_RKNN_EN_SHIFT            (10U)
#define NPUCRU_NPUGATE_CON00_ACLK_RKNN_EN_MASK             (0x1U << NPUCRU_NPUGATE_CON00_ACLK_RKNN_EN_SHIFT)            /* 0x00000400 */
#define NPUCRU_NPUGATE_CON00_CLK_PVTPLL_0_I2VI_EN_SHIFT    (11U)
#define NPUCRU_NPUGATE_CON00_CLK_PVTPLL_0_I2VI_EN_MASK     (0x1U << NPUCRU_NPUGATE_CON00_CLK_PVTPLL_0_I2VI_EN_SHIFT)    /* 0x00000800 */
#define NPUCRU_NPUGATE_CON00_CLK_PVTPLL_1_I2VI_EN_SHIFT    (12U)
#define NPUCRU_NPUGATE_CON00_CLK_PVTPLL_1_I2VI_EN_MASK     (0x1U << NPUCRU_NPUGATE_CON00_CLK_PVTPLL_1_I2VI_EN_SHIFT)    /* 0x00001000 */
#define NPUCRU_NPUGATE_CON00_CLK_MATRIX_50M_SRC2VI_EN_SHIFT (15U)
#define NPUCRU_NPUGATE_CON00_CLK_MATRIX_50M_SRC2VI_EN_MASK (0x1U << NPUCRU_NPUGATE_CON00_CLK_MATRIX_50M_SRC2VI_EN_SHIFT) /* 0x00008000 */
/* NPUGATE_CON01 */
#define NPUCRU_NPUGATE_CON01_OFFSET                        (0x804U)
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_100M_SRC2VI_EN_SHIFT (0U)
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_100M_SRC2VI_EN_MASK (0x1U << NPUCRU_NPUGATE_CON01_CLK_MATRIX_100M_SRC2VI_EN_SHIFT) /* 0x00000001 */
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_150M_SRC2VI_EN_SHIFT (1U)
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_150M_SRC2VI_EN_MASK (0x1U << NPUCRU_NPUGATE_CON01_CLK_MATRIX_150M_SRC2VI_EN_SHIFT) /* 0x00000002 */
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_200M_SRC2VI_EN_SHIFT (2U)
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_200M_SRC2VI_EN_MASK (0x1U << NPUCRU_NPUGATE_CON01_CLK_MATRIX_200M_SRC2VI_EN_SHIFT) /* 0x00000004 */
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_339M_SRC2VI_EN_SHIFT (3U)
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_339M_SRC2VI_EN_MASK (0x1U << NPUCRU_NPUGATE_CON01_CLK_MATRIX_339M_SRC2VI_EN_SHIFT) /* 0x00000008 */
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_400M_SRC2VI_EN_SHIFT (4U)
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_400M_SRC2VI_EN_MASK (0x1U << NPUCRU_NPUGATE_CON01_CLK_MATRIX_400M_SRC2VI_EN_SHIFT) /* 0x00000010 */
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_50M_SRC2PERI_EN_SHIFT (9U)
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_50M_SRC2PERI_EN_MASK (0x1U << NPUCRU_NPUGATE_CON01_CLK_MATRIX_50M_SRC2PERI_EN_SHIFT) /* 0x00000200 */
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_100M_SRC2PERI_EN_SHIFT (10U)
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_100M_SRC2PERI_EN_MASK (0x1U << NPUCRU_NPUGATE_CON01_CLK_MATRIX_100M_SRC2PERI_EN_SHIFT) /* 0x00000400 */
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_200M_SRC2PERI_EN_SHIFT (11U)
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_200M_SRC2PERI_EN_MASK (0x1U << NPUCRU_NPUGATE_CON01_CLK_MATRIX_200M_SRC2PERI_EN_SHIFT) /* 0x00000800 */
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_300M_SRC2PERI_EN_SHIFT (12U)
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_300M_SRC2PERI_EN_MASK (0x1U << NPUCRU_NPUGATE_CON01_CLK_MATRIX_300M_SRC2PERI_EN_SHIFT) /* 0x00001000 */
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_400M_SRC2PERI_EN_SHIFT (13U)
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_400M_SRC2PERI_EN_MASK (0x1U << NPUCRU_NPUGATE_CON01_CLK_MATRIX_400M_SRC2PERI_EN_SHIFT) /* 0x00002000 */
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_500M_SRC2PERI_EN_SHIFT (14U)
#define NPUCRU_NPUGATE_CON01_CLK_MATRIX_500M_SRC2PERI_EN_MASK (0x1U << NPUCRU_NPUGATE_CON01_CLK_MATRIX_500M_SRC2PERI_EN_SHIFT) /* 0x00004000 */
#define NPUCRU_NPUGATE_CON01_CLK_TESTOUT_NPU_EN_SHIFT      (15U)
#define NPUCRU_NPUGATE_CON01_CLK_TESTOUT_NPU_EN_MASK       (0x1U << NPUCRU_NPUGATE_CON01_CLK_TESTOUT_NPU_EN_SHIFT)      /* 0x00008000 */
/* NPUSOFTRST_CON00 */
#define NPUCRU_NPUSOFTRST_CON00_OFFSET                     (0xA00U)
#define NPUCRU_NPUSOFTRST_CON00_HRESETN_NPU_BIU_SHIFT      (3U)
#define NPUCRU_NPUSOFTRST_CON00_HRESETN_NPU_BIU_MASK       (0x1U << NPUCRU_NPUSOFTRST_CON00_HRESETN_NPU_BIU_SHIFT)      /* 0x00000008 */
#define NPUCRU_NPUSOFTRST_CON00_ARESETN_NPU_BIU_SHIFT      (4U)
#define NPUCRU_NPUSOFTRST_CON00_ARESETN_NPU_BIU_MASK       (0x1U << NPUCRU_NPUSOFTRST_CON00_ARESETN_NPU_BIU_SHIFT)      /* 0x00000010 */
#define NPUCRU_NPUSOFTRST_CON00_PRESETN_NPU_BIU_SHIFT      (5U)
#define NPUCRU_NPUSOFTRST_CON00_PRESETN_NPU_BIU_MASK       (0x1U << NPUCRU_NPUSOFTRST_CON00_PRESETN_NPU_BIU_SHIFT)      /* 0x00000020 */
#define NPUCRU_NPUSOFTRST_CON00_PRESETN_NPU_CRU_SHIFT      (6U)
#define NPUCRU_NPUSOFTRST_CON00_PRESETN_NPU_CRU_MASK       (0x1U << NPUCRU_NPUSOFTRST_CON00_PRESETN_NPU_CRU_SHIFT)      /* 0x00000040 */
#define NPUCRU_NPUSOFTRST_CON00_PRESETN_NPU_SGRF_SHIFT     (7U)
#define NPUCRU_NPUSOFTRST_CON00_PRESETN_NPU_SGRF_MASK      (0x1U << NPUCRU_NPUSOFTRST_CON00_PRESETN_NPU_SGRF_SHIFT)     /* 0x00000080 */
#define NPUCRU_NPUSOFTRST_CON00_PRESETN_NPU_GRF_SHIFT      (8U)
#define NPUCRU_NPUSOFTRST_CON00_PRESETN_NPU_GRF_MASK       (0x1U << NPUCRU_NPUSOFTRST_CON00_PRESETN_NPU_GRF_SHIFT)      /* 0x00000100 */
#define NPUCRU_NPUSOFTRST_CON00_HRESETN_RKNN_SHIFT         (9U)
#define NPUCRU_NPUSOFTRST_CON00_HRESETN_RKNN_MASK          (0x1U << NPUCRU_NPUSOFTRST_CON00_HRESETN_RKNN_SHIFT)         /* 0x00000200 */
#define NPUCRU_NPUSOFTRST_CON00_ARESETN_RKNN_SHIFT         (10U)
#define NPUCRU_NPUSOFTRST_CON00_ARESETN_RKNN_MASK          (0x1U << NPUCRU_NPUSOFTRST_CON00_ARESETN_RKNN_SHIFT)         /* 0x00000400 */
/****************************************CORECRU*****************************************/
/* CORECLKSEL_CON00 */
#define CORECRU_CORECLKSEL_CON00_OFFSET                    (0x300U)
#define CORECRU_CORECLKSEL_CON00_CLK_CORE_GPLL_SRC_DIV_SHIFT (0U)
#define CORECRU_CORECLKSEL_CON00_CLK_CORE_GPLL_SRC_DIV_MASK (0x1FU << CORECRU_CORECLKSEL_CON00_CLK_CORE_GPLL_SRC_DIV_SHIFT) /* 0x0000001F */
#define CORECRU_CORECLKSEL_CON00_CLK_CORE_SRC_SEL_SHIFT    (5U)
#define CORECRU_CORECLKSEL_CON00_CLK_CORE_SRC_SEL_MASK     (0x3U << CORECRU_CORECLKSEL_CON00_CLK_CORE_SRC_SEL_SHIFT)    /* 0x00000060 */
#define CORECRU_CORECLKSEL_CON00_ACLK_M_CORE_BIU_DIV_SHIFT (7U)
#define CORECRU_CORECLKSEL_CON00_ACLK_M_CORE_BIU_DIV_MASK  (0x1FU << CORECRU_CORECLKSEL_CON00_ACLK_M_CORE_BIU_DIV_SHIFT) /* 0x00000F80 */
#define CORECRU_CORECLKSEL_CON00_CLK_CORE_PVTPLL_SRC_SEL_SHIFT (12U)
#define CORECRU_CORECLKSEL_CON00_CLK_CORE_PVTPLL_SRC_SEL_MASK (0x1U << CORECRU_CORECLKSEL_CON00_CLK_CORE_PVTPLL_SRC_SEL_SHIFT) /* 0x00001000 */
/* CORECLKSEL_CON01 */
#define CORECRU_CORECLKSEL_CON01_OFFSET                    (0x304U)
#define CORECRU_CORECLKSEL_CON01_PCLK_DBG_DIV_SHIFT        (0U)
#define CORECRU_CORECLKSEL_CON01_PCLK_DBG_DIV_MASK         (0x1FU << CORECRU_CORECLKSEL_CON01_PCLK_DBG_DIV_SHIFT)       /* 0x0000001F */
#define CORECRU_CORECLKSEL_CON01_CLK_SCANHS_ACLKM_CORE_DIV_SHIFT (6U)
#define CORECRU_CORECLKSEL_CON01_CLK_SCANHS_ACLKM_CORE_DIV_MASK (0x1FU << CORECRU_CORECLKSEL_CON01_CLK_SCANHS_ACLKM_CORE_DIV_SHIFT) /* 0x000007C0 */
#define CORECRU_CORECLKSEL_CON01_CLK_SCANHS_PCLK_DBG_DIV_SHIFT (11U)
#define CORECRU_CORECLKSEL_CON01_CLK_SCANHS_PCLK_DBG_DIV_MASK (0x1FU << CORECRU_CORECLKSEL_CON01_CLK_SCANHS_PCLK_DBG_DIV_SHIFT) /* 0x0000F800 */
/* CORECLKSEL_CON02 */
#define CORECRU_CORECLKSEL_CON02_OFFSET                    (0x308U)
#define CORECRU_CORECLKSEL_CON02_HCLK_CPU_BIU_DIV_SHIFT    (0U)
#define CORECRU_CORECLKSEL_CON02_HCLK_CPU_BIU_DIV_MASK     (0x1FU << CORECRU_CORECLKSEL_CON02_HCLK_CPU_BIU_DIV_SHIFT)   /* 0x0000001F */
#define CORECRU_CORECLKSEL_CON02_HCLK_CPU_BIU_SEL_SHIFT    (5U)
#define CORECRU_CORECLKSEL_CON02_HCLK_CPU_BIU_SEL_MASK     (0x1U << CORECRU_CORECLKSEL_CON02_HCLK_CPU_BIU_SEL_SHIFT)    /* 0x00000020 */
/* CORECLKSEL_CON03 */
#define CORECRU_CORECLKSEL_CON03_OFFSET                    (0x30CU)
#define CORECRU_CORECLKSEL_CON03_CLK_REF_PVTPLL_CORE_DIV_SHIFT (0U)
#define CORECRU_CORECLKSEL_CON03_CLK_REF_PVTPLL_CORE_DIV_MASK (0x1FU << CORECRU_CORECLKSEL_CON03_CLK_REF_PVTPLL_CORE_DIV_SHIFT) /* 0x0000001F */
#define CORECRU_CORECLKSEL_CON03_CLK_REF_PVTPLL_CORE_SEL_SHIFT (5U)
#define CORECRU_CORECLKSEL_CON03_CLK_REF_PVTPLL_CORE_SEL_MASK (0x1U << CORECRU_CORECLKSEL_CON03_CLK_REF_PVTPLL_CORE_SEL_SHIFT) /* 0x00000020 */
#define CORECRU_CORECLKSEL_CON03_CLK_CORE_MCU_DIV_SHIFT    (6U)
#define CORECRU_CORECLKSEL_CON03_CLK_CORE_MCU_DIV_MASK     (0x1FU << CORECRU_CORECLKSEL_CON03_CLK_CORE_MCU_DIV_SHIFT)   /* 0x000007C0 */
#define CORECRU_CORECLKSEL_CON03_CLK_CORE_MCU_SEL_SHIFT    (11U)
#define CORECRU_CORECLKSEL_CON03_CLK_CORE_MCU_SEL_MASK     (0x1U << CORECRU_CORECLKSEL_CON03_CLK_CORE_MCU_SEL_SHIFT)    /* 0x00000800 */
/* CORECLKSEL_CON04 */
#define CORECRU_CORECLKSEL_CON04_OFFSET                    (0x310U)
#define CORECRU_CORECLKSEL_CON04_CLK_TESTOUT_CORE2VI_DIV_SHIFT (0U)
#define CORECRU_CORECLKSEL_CON04_CLK_TESTOUT_CORE2VI_DIV_MASK (0x1FU << CORECRU_CORECLKSEL_CON04_CLK_TESTOUT_CORE2VI_DIV_SHIFT) /* 0x0000001F */
#define CORECRU_CORECLKSEL_CON04_CLK_TESTOUT_CORE2VI_SEL_SHIFT (5U)
#define CORECRU_CORECLKSEL_CON04_CLK_TESTOUT_CORE2VI_SEL_MASK (0x3U << CORECRU_CORECLKSEL_CON04_CLK_TESTOUT_CORE2VI_SEL_SHIFT) /* 0x00000060 */
/* COREGATE_CON00 */
#define CORECRU_COREGATE_CON00_OFFSET                      (0x800U)
#define CORECRU_COREGATE_CON00_CLK_CORE_GPLL_SRC_EN_SHIFT  (0U)
#define CORECRU_COREGATE_CON00_CLK_CORE_GPLL_SRC_EN_MASK   (0x1U << CORECRU_COREGATE_CON00_CLK_CORE_GPLL_SRC_EN_SHIFT)  /* 0x00000001 */
#define CORECRU_COREGATE_CON00_CLK_CORE_SRC_EN_SHIFT       (1U)
#define CORECRU_COREGATE_CON00_CLK_CORE_SRC_EN_MASK        (0x1U << CORECRU_COREGATE_CON00_CLK_CORE_SRC_EN_SHIFT)       /* 0x00000002 */
#define CORECRU_COREGATE_CON00_CLK_CORE_EN_SHIFT           (2U)
#define CORECRU_COREGATE_CON00_CLK_CORE_EN_MASK            (0x1U << CORECRU_COREGATE_CON00_CLK_CORE_EN_SHIFT)           /* 0x00000004 */
#define CORECRU_COREGATE_CON00_ACLK_M_CORE_BIU_EN_SHIFT    (5U)
#define CORECRU_COREGATE_CON00_ACLK_M_CORE_BIU_EN_MASK     (0x1U << CORECRU_COREGATE_CON00_ACLK_M_CORE_BIU_EN_SHIFT)    /* 0x00000020 */
#define CORECRU_COREGATE_CON00_PCLK_DBG_EN_SHIFT           (6U)
#define CORECRU_COREGATE_CON00_PCLK_DBG_EN_MASK            (0x1U << CORECRU_COREGATE_CON00_PCLK_DBG_EN_SHIFT)           /* 0x00000040 */
#define CORECRU_COREGATE_CON00_SWCLKTCK_EN_SHIFT           (8U)
#define CORECRU_COREGATE_CON00_SWCLKTCK_EN_MASK            (0x1U << CORECRU_COREGATE_CON00_SWCLKTCK_EN_SHIFT)           /* 0x00000100 */
#define CORECRU_COREGATE_CON00_CLK_SCANHS_CORE_EN_SHIFT    (9U)
#define CORECRU_COREGATE_CON00_CLK_SCANHS_CORE_EN_MASK     (0x1U << CORECRU_COREGATE_CON00_CLK_SCANHS_CORE_EN_SHIFT)    /* 0x00000200 */
#define CORECRU_COREGATE_CON00_PCLK_CPU_ROOT_EN_SHIFT      (10U)
#define CORECRU_COREGATE_CON00_PCLK_CPU_ROOT_EN_MASK       (0x1U << CORECRU_COREGATE_CON00_PCLK_CPU_ROOT_EN_SHIFT)      /* 0x00000400 */
#define CORECRU_COREGATE_CON00_PCLK_CORE_GRF_EN_SHIFT      (11U)
#define CORECRU_COREGATE_CON00_PCLK_CORE_GRF_EN_MASK       (0x1U << CORECRU_COREGATE_CON00_PCLK_CORE_GRF_EN_SHIFT)      /* 0x00000800 */
#define CORECRU_COREGATE_CON00_HCLK_CPU_BIU_EN_SHIFT       (12U)
#define CORECRU_COREGATE_CON00_HCLK_CPU_BIU_EN_MASK        (0x1U << CORECRU_COREGATE_CON00_HCLK_CPU_BIU_EN_SHIFT)       /* 0x00001000 */
#define CORECRU_COREGATE_CON00_PCLK_CPU_BIU_EN_SHIFT       (13U)
#define CORECRU_COREGATE_CON00_PCLK_CPU_BIU_EN_MASK        (0x1U << CORECRU_COREGATE_CON00_PCLK_CPU_BIU_EN_SHIFT)       /* 0x00002000 */
#define CORECRU_COREGATE_CON00_CLK_PVTM_CORE_EN_SHIFT      (14U)
#define CORECRU_COREGATE_CON00_CLK_PVTM_CORE_EN_MASK       (0x1U << CORECRU_COREGATE_CON00_CLK_PVTM_CORE_EN_SHIFT)      /* 0x00004000 */
#define CORECRU_COREGATE_CON00_PCLK_PVTM_CORE_EN_SHIFT     (15U)
#define CORECRU_COREGATE_CON00_PCLK_PVTM_CORE_EN_MASK      (0x1U << CORECRU_COREGATE_CON00_PCLK_PVTM_CORE_EN_SHIFT)     /* 0x00008000 */
/* COREGATE_CON01 */
#define CORECRU_COREGATE_CON01_OFFSET                      (0x804U)
#define CORECRU_COREGATE_CON01_CLK_REF_PVTPLL_CORE_EN_SHIFT (0U)
#define CORECRU_COREGATE_CON01_CLK_REF_PVTPLL_CORE_EN_MASK (0x1U << CORECRU_COREGATE_CON01_CLK_REF_PVTPLL_CORE_EN_SHIFT) /* 0x00000001 */
#define CORECRU_COREGATE_CON01_CLK_CORE_MCU_EN_SHIFT       (1U)
#define CORECRU_COREGATE_CON01_CLK_CORE_MCU_EN_MASK        (0x1U << CORECRU_COREGATE_CON01_CLK_CORE_MCU_EN_SHIFT)       /* 0x00000002 */
#define CORECRU_COREGATE_CON01_CLK_CORE_MCU_BIU_EN_SHIFT   (5U)
#define CORECRU_COREGATE_CON01_CLK_CORE_MCU_BIU_EN_MASK    (0x1U << CORECRU_COREGATE_CON01_CLK_CORE_MCU_BIU_EN_SHIFT)   /* 0x00000020 */
#define CORECRU_COREGATE_CON01_CLK_CORE_MCU_RTC_EN_SHIFT   (6U)
#define CORECRU_COREGATE_CON01_CLK_CORE_MCU_RTC_EN_MASK    (0x1U << CORECRU_COREGATE_CON01_CLK_CORE_MCU_RTC_EN_SHIFT)   /* 0x00000040 */
#define CORECRU_COREGATE_CON01_CLK_CORE_MCU_JTAG_EN_SHIFT  (7U)
#define CORECRU_COREGATE_CON01_CLK_CORE_MCU_JTAG_EN_MASK   (0x1U << CORECRU_COREGATE_CON01_CLK_CORE_MCU_JTAG_EN_SHIFT)  /* 0x00000080 */
#define CORECRU_COREGATE_CON01_PCLK_MAILBOX_EN_SHIFT       (8U)
#define CORECRU_COREGATE_CON01_PCLK_MAILBOX_EN_MASK        (0x1U << CORECRU_COREGATE_CON01_PCLK_MAILBOX_EN_SHIFT)       /* 0x00000100 */
#define CORECRU_COREGATE_CON01_PCLK_INTMUX_EN_SHIFT        (9U)
#define CORECRU_COREGATE_CON01_PCLK_INTMUX_EN_MASK         (0x1U << CORECRU_COREGATE_CON01_PCLK_INTMUX_EN_SHIFT)        /* 0x00000200 */
#define CORECRU_COREGATE_CON01_PCLK_CORE_CRU_EN_SHIFT      (10U)
#define CORECRU_COREGATE_CON01_PCLK_CORE_CRU_EN_MASK       (0x1U << CORECRU_COREGATE_CON01_PCLK_CORE_CRU_EN_SHIFT)      /* 0x00000400 */
#define CORECRU_COREGATE_CON01_PCLK_CORE_SGRF_EN_SHIFT     (11U)
#define CORECRU_COREGATE_CON01_PCLK_CORE_SGRF_EN_MASK      (0x1U << CORECRU_COREGATE_CON01_PCLK_CORE_SGRF_EN_SHIFT)     /* 0x00000800 */
#define CORECRU_COREGATE_CON01_HCLK_CACHE_EN_SHIFT         (12U)
#define CORECRU_COREGATE_CON01_HCLK_CACHE_EN_MASK          (0x1U << CORECRU_COREGATE_CON01_HCLK_CACHE_EN_SHIFT)         /* 0x00001000 */
#define CORECRU_COREGATE_CON01_CLK_TESTOUT_CORE_EN_SHIFT   (13U)
#define CORECRU_COREGATE_CON01_CLK_TESTOUT_CORE_EN_MASK    (0x1U << CORECRU_COREGATE_CON01_CLK_TESTOUT_CORE_EN_SHIFT)   /* 0x00002000 */
/* CORESOFTRST_CON00 */
#define CORECRU_CORESOFTRST_CON00_OFFSET                   (0xA00U)
#define CORECRU_CORESOFTRST_CON00_NCOREPORESET_SHIFT       (1U)
#define CORECRU_CORESOFTRST_CON00_NCOREPORESET_MASK        (0x1U << CORECRU_CORESOFTRST_CON00_NCOREPORESET_SHIFT)       /* 0x00000002 */
#define CORECRU_CORESOFTRST_CON00_NCORESET_SHIFT           (2U)
#define CORECRU_CORESOFTRST_CON00_NCORESET_MASK            (0x1U << CORECRU_CORESOFTRST_CON00_NCORESET_SHIFT)           /* 0x00000004 */
#define CORECRU_CORESOFTRST_CON00_NDBGRESET_SHIFT          (3U)
#define CORECRU_CORESOFTRST_CON00_NDBGRESET_MASK           (0x1U << CORECRU_CORESOFTRST_CON00_NDBGRESET_SHIFT)          /* 0x00000008 */
#define CORECRU_CORESOFTRST_CON00_NL2RESET_SHIFT           (4U)
#define CORECRU_CORESOFTRST_CON00_NL2RESET_MASK            (0x1U << CORECRU_CORESOFTRST_CON00_NL2RESET_SHIFT)           /* 0x00000010 */
#define CORECRU_CORESOFTRST_CON00_ARESETN_M_CORE_BIU_SHIFT (5U)
#define CORECRU_CORESOFTRST_CON00_ARESETN_M_CORE_BIU_MASK  (0x1U << CORECRU_CORESOFTRST_CON00_ARESETN_M_CORE_BIU_SHIFT) /* 0x00000020 */
#define CORECRU_CORESOFTRST_CON00_PRESETN_DBG_SHIFT        (6U)
#define CORECRU_CORESOFTRST_CON00_PRESETN_DBG_MASK         (0x1U << CORECRU_CORESOFTRST_CON00_PRESETN_DBG_SHIFT)        /* 0x00000040 */
#define CORECRU_CORESOFTRST_CON00_POTRESETN_DBG_SHIFT      (7U)
#define CORECRU_CORESOFTRST_CON00_POTRESETN_DBG_MASK       (0x1U << CORECRU_CORESOFTRST_CON00_POTRESETN_DBG_SHIFT)      /* 0x00000080 */
#define CORECRU_CORESOFTRST_CON00_NTRESETN_DBG_SHIFT       (8U)
#define CORECRU_CORESOFTRST_CON00_NTRESETN_DBG_MASK        (0x1U << CORECRU_CORESOFTRST_CON00_NTRESETN_DBG_SHIFT)       /* 0x00000100 */
#define CORECRU_CORESOFTRST_CON00_PRESETN_CORE_GRF_SHIFT   (11U)
#define CORECRU_CORESOFTRST_CON00_PRESETN_CORE_GRF_MASK    (0x1U << CORECRU_CORESOFTRST_CON00_PRESETN_CORE_GRF_SHIFT)   /* 0x00000800 */
#define CORECRU_CORESOFTRST_CON00_HRESETN_CPU_BIU_SHIFT    (12U)
#define CORECRU_CORESOFTRST_CON00_HRESETN_CPU_BIU_MASK     (0x1U << CORECRU_CORESOFTRST_CON00_HRESETN_CPU_BIU_SHIFT)    /* 0x00001000 */
#define CORECRU_CORESOFTRST_CON00_PRESETN_CPU_BIU_SHIFT    (13U)
#define CORECRU_CORESOFTRST_CON00_PRESETN_CPU_BIU_MASK     (0x1U << CORECRU_CORESOFTRST_CON00_PRESETN_CPU_BIU_SHIFT)    /* 0x00002000 */
#define CORECRU_CORESOFTRST_CON00_RESETN_PVTM_CORE_SHIFT   (14U)
#define CORECRU_CORESOFTRST_CON00_RESETN_PVTM_CORE_MASK    (0x1U << CORECRU_CORESOFTRST_CON00_RESETN_PVTM_CORE_SHIFT)   /* 0x00004000 */
#define CORECRU_CORESOFTRST_CON00_PRESETN_PVTM_CORE_SHIFT  (15U)
#define CORECRU_CORESOFTRST_CON00_PRESETN_PVTM_CORE_MASK   (0x1U << CORECRU_CORESOFTRST_CON00_PRESETN_PVTM_CORE_SHIFT)  /* 0x00008000 */
/* CORESOFTRST_CON01 */
#define CORECRU_CORESOFTRST_CON01_OFFSET                   (0xA04U)
#define CORECRU_CORESOFTRST_CON01_RESETN_REF_PVTPLL_CORE_SHIFT (0U)
#define CORECRU_CORESOFTRST_CON01_RESETN_REF_PVTPLL_CORE_MASK (0x1U << CORECRU_CORESOFTRST_CON01_RESETN_REF_PVTPLL_CORE_SHIFT) /* 0x00000001 */
#define CORECRU_CORESOFTRST_CON01_RESETN_CORE_MCU_SHIFT    (1U)
#define CORECRU_CORESOFTRST_CON01_RESETN_CORE_MCU_MASK     (0x1U << CORECRU_CORESOFTRST_CON01_RESETN_CORE_MCU_SHIFT)    /* 0x00000002 */
#define CORECRU_CORESOFTRST_CON01_RESETN_CORE_MCU_PWRUP_SHIFT (2U)
#define CORECRU_CORESOFTRST_CON01_RESETN_CORE_MCU_PWRUP_MASK (0x1U << CORECRU_CORESOFTRST_CON01_RESETN_CORE_MCU_PWRUP_SHIFT) /* 0x00000004 */
#define CORECRU_CORESOFTRST_CON01_RESETN_CORE_MCU_CPU_SHIFT (3U)
#define CORECRU_CORESOFTRST_CON01_RESETN_CORE_MCU_CPU_MASK (0x1U << CORECRU_CORESOFTRST_CON01_RESETN_CORE_MCU_CPU_SHIFT) /* 0x00000008 */
#define CORECRU_CORESOFTRST_CON01_TRESETN_CORE_MCU_CPU_SHIFT (4U)
#define CORECRU_CORESOFTRST_CON01_TRESETN_CORE_MCU_CPU_MASK (0x1U << CORECRU_CORESOFTRST_CON01_TRESETN_CORE_MCU_CPU_SHIFT) /* 0x00000010 */
#define CORECRU_CORESOFTRST_CON01_RESETN_MCU_BIU_SHIFT     (5U)
#define CORECRU_CORESOFTRST_CON01_RESETN_MCU_BIU_MASK      (0x1U << CORECRU_CORESOFTRST_CON01_RESETN_MCU_BIU_SHIFT)     /* 0x00000020 */
#define CORECRU_CORESOFTRST_CON01_PRESETN_MAILBOX_SHIFT    (8U)
#define CORECRU_CORESOFTRST_CON01_PRESETN_MAILBOX_MASK     (0x1U << CORECRU_CORESOFTRST_CON01_PRESETN_MAILBOX_SHIFT)    /* 0x00000100 */
#define CORECRU_CORESOFTRST_CON01_PRESETN_INTMUX_SHIFT     (9U)
#define CORECRU_CORESOFTRST_CON01_PRESETN_INTMUX_MASK      (0x1U << CORECRU_CORESOFTRST_CON01_PRESETN_INTMUX_SHIFT)     /* 0x00000200 */
#define CORECRU_CORESOFTRST_CON01_PRESETN_CORE_CRU_SHIFT   (10U)
#define CORECRU_CORESOFTRST_CON01_PRESETN_CORE_CRU_MASK    (0x1U << CORECRU_CORESOFTRST_CON01_PRESETN_CORE_CRU_SHIFT)   /* 0x00000400 */
#define CORECRU_CORESOFTRST_CON01_PRESETN_CORE_SGRF_SHIFT  (11U)
#define CORECRU_CORESOFTRST_CON01_PRESETN_CORE_SGRF_MASK   (0x1U << CORECRU_CORESOFTRST_CON01_PRESETN_CORE_SGRF_SHIFT)  /* 0x00000800 */
#define CORECRU_CORESOFTRST_CON01_HRESETN_CACHE_SHIFT      (12U)
#define CORECRU_CORESOFTRST_CON01_HRESETN_CACHE_MASK       (0x1U << CORECRU_CORESOFTRST_CON01_HRESETN_CACHE_SHIFT)      /* 0x00001000 */
/* AUTOCS_CORE_SRC_CON0 */
#define CORECRU_AUTOCS_CORE_SRC_CON0_OFFSET                (0xD00U)
#define CORECRU_AUTOCS_CORE_SRC_CON0_CLK_CORE_SRC_IDLE_TH_SHIFT (0U)
#define CORECRU_AUTOCS_CORE_SRC_CON0_CLK_CORE_SRC_IDLE_TH_MASK (0xFFFFU << CORECRU_AUTOCS_CORE_SRC_CON0_CLK_CORE_SRC_IDLE_TH_SHIFT) /* 0x0000FFFF */
#define CORECRU_AUTOCS_CORE_SRC_CON0_CLK_CORE_SRC_WAIT_TH_SHIFT (16U)
#define CORECRU_AUTOCS_CORE_SRC_CON0_CLK_CORE_SRC_WAIT_TH_MASK (0xFFFFU << CORECRU_AUTOCS_CORE_SRC_CON0_CLK_CORE_SRC_WAIT_TH_SHIFT) /* 0xFFFF0000 */
/* AUTOCS_CORE_SRC_CON1 */
#define CORECRU_AUTOCS_CORE_SRC_CON1_OFFSET                (0xD04U)
#define CORECRU_AUTOCS_CORE_SRC_CON1_CLK_CORE_SRC_AUTOCS_CTRL_SHIFT (0U)
#define CORECRU_AUTOCS_CORE_SRC_CON1_CLK_CORE_SRC_AUTOCS_CTRL_MASK (0xFFFU << CORECRU_AUTOCS_CORE_SRC_CON1_CLK_CORE_SRC_AUTOCS_CTRL_SHIFT) /* 0x00000FFF */
#define CORECRU_AUTOCS_CORE_SRC_CON1_CLK_CORE_SRC_AUTOCS_EN_SHIFT (12U)
#define CORECRU_AUTOCS_CORE_SRC_CON1_CLK_CORE_SRC_AUTOCS_EN_MASK (0x1U << CORECRU_AUTOCS_CORE_SRC_CON1_CLK_CORE_SRC_AUTOCS_EN_SHIFT) /* 0x00001000 */
#define CORECRU_AUTOCS_CORE_SRC_CON1_CLK_CORE_SRC_SWITCH_EN_SHIFT (13U)
#define CORECRU_AUTOCS_CORE_SRC_CON1_CLK_CORE_SRC_SWITCH_EN_MASK (0x1U << CORECRU_AUTOCS_CORE_SRC_CON1_CLK_CORE_SRC_SWITCH_EN_SHIFT) /* 0x00002000 */
#define CORECRU_AUTOCS_CORE_SRC_CON1_CLK_CORE_SRC_CLKSEL_CFG_SHIFT (14U)
#define CORECRU_AUTOCS_CORE_SRC_CON1_CLK_CORE_SRC_CLKSEL_CFG_MASK (0x3U << CORECRU_AUTOCS_CORE_SRC_CON1_CLK_CORE_SRC_CLKSEL_CFG_SHIFT) /* 0x0000C000 */
/****************************************VEPUCRU*****************************************/
/* VEPUCLKSEL_CON00 */
#define VEPUCRU_VEPUCLKSEL_CON00_OFFSET                    (0x300U)
#define VEPUCRU_VEPUCLKSEL_CON00_HCLK_VEPU_ROOT_SEL_SHIFT  (0U)
#define VEPUCRU_VEPUCLKSEL_CON00_HCLK_VEPU_ROOT_SEL_MASK   (0x3U << VEPUCRU_VEPUCLKSEL_CON00_HCLK_VEPU_ROOT_SEL_SHIFT)  /* 0x00000003 */
#define VEPUCRU_VEPUCLKSEL_CON00_ACLK_VEPU_COM_ROOT_SEL_SHIFT (2U)
#define VEPUCRU_VEPUCLKSEL_CON00_ACLK_VEPU_COM_ROOT_SEL_MASK (0x3U << VEPUCRU_VEPUCLKSEL_CON00_ACLK_VEPU_COM_ROOT_SEL_SHIFT) /* 0x0000000C */
#define VEPUCRU_VEPUCLKSEL_CON00_ACLK_VEPU_ROOT_SEL_SHIFT  (4U)
#define VEPUCRU_VEPUCLKSEL_CON00_ACLK_VEPU_ROOT_SEL_MASK   (0x3U << VEPUCRU_VEPUCLKSEL_CON00_ACLK_VEPU_ROOT_SEL_SHIFT)  /* 0x00000030 */
#define VEPUCRU_VEPUCLKSEL_CON00_PCLK_VEPU_ROOT_SEL_SHIFT  (6U)
#define VEPUCRU_VEPUCLKSEL_CON00_PCLK_VEPU_ROOT_SEL_MASK   (0x3U << VEPUCRU_VEPUCLKSEL_CON00_PCLK_VEPU_ROOT_SEL_SHIFT)  /* 0x000000C0 */
#define VEPUCRU_VEPUCLKSEL_CON00_CLK_CORE_VEPU_SEL_SHIFT   (8U)
#define VEPUCRU_VEPUCLKSEL_CON00_CLK_CORE_VEPU_SEL_MASK    (0x3U << VEPUCRU_VEPUCLKSEL_CON00_CLK_CORE_VEPU_SEL_SHIFT)   /* 0x00000300 */
#define VEPUCRU_VEPUCLKSEL_CON00_CLK_CORE_VEPU_DVBM_SEL_SHIFT (10U)
#define VEPUCRU_VEPUCLKSEL_CON00_CLK_CORE_VEPU_DVBM_SEL_MASK (0x3U << VEPUCRU_VEPUCLKSEL_CON00_CLK_CORE_VEPU_DVBM_SEL_SHIFT) /* 0x00000C00 */
#define VEPUCRU_VEPUCLKSEL_CON00_CLK_SPI0_SEL_SHIFT        (12U)
#define VEPUCRU_VEPUCLKSEL_CON00_CLK_SPI0_SEL_MASK         (0x3U << VEPUCRU_VEPUCLKSEL_CON00_CLK_SPI0_SEL_SHIFT)        /* 0x00003000 */
/* VEPUCLKSEL_CON01 */
#define VEPUCRU_VEPUCLKSEL_CON01_OFFSET                    (0x304U)
#define VEPUCRU_VEPUCLKSEL_CON01_CLK_TESTOUT_VEPU2VO_0_DIV_SHIFT (0U)
#define VEPUCRU_VEPUCLKSEL_CON01_CLK_TESTOUT_VEPU2VO_0_DIV_MASK (0x1FU << VEPUCRU_VEPUCLKSEL_CON01_CLK_TESTOUT_VEPU2VO_0_DIV_SHIFT) /* 0x0000001F */
#define VEPUCRU_VEPUCLKSEL_CON01_CLK_TESTOUT_VEPU2VO_0_SEL_SHIFT (5U)
#define VEPUCRU_VEPUCLKSEL_CON01_CLK_TESTOUT_VEPU2VO_0_SEL_MASK (0x3U << VEPUCRU_VEPUCLKSEL_CON01_CLK_TESTOUT_VEPU2VO_0_SEL_SHIFT) /* 0x00000060 */
#define VEPUCRU_VEPUCLKSEL_CON01_CLK_TESTOUT_VEPU2VO_1_DIV_SHIFT (7U)
#define VEPUCRU_VEPUCLKSEL_CON01_CLK_TESTOUT_VEPU2VO_1_DIV_MASK (0x1FU << VEPUCRU_VEPUCLKSEL_CON01_CLK_TESTOUT_VEPU2VO_1_DIV_SHIFT) /* 0x00000F80 */
#define VEPUCRU_VEPUCLKSEL_CON01_CLK_TESTOUT_VEPU2VO_1_SEL_SHIFT (12U)
#define VEPUCRU_VEPUCLKSEL_CON01_CLK_TESTOUT_VEPU2VO_1_SEL_MASK (0x3U << VEPUCRU_VEPUCLKSEL_CON01_CLK_TESTOUT_VEPU2VO_1_SEL_SHIFT) /* 0x00003000 */
/* VEPUGATE_CON00 */
#define VEPUCRU_VEPUGATE_CON00_OFFSET                      (0x800U)
#define VEPUCRU_VEPUGATE_CON00_HCLK_VEPU_ROOT_EN_SHIFT     (0U)
#define VEPUCRU_VEPUGATE_CON00_HCLK_VEPU_ROOT_EN_MASK      (0x1U << VEPUCRU_VEPUGATE_CON00_HCLK_VEPU_ROOT_EN_SHIFT)     /* 0x00000001 */
#define VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_COM_ROOT_EN_SHIFT (1U)
#define VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_COM_ROOT_EN_MASK  (0x1U << VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_COM_ROOT_EN_SHIFT) /* 0x00000002 */
#define VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_ROOT_EN_SHIFT     (2U)
#define VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_ROOT_EN_MASK      (0x1U << VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_ROOT_EN_SHIFT)     /* 0x00000004 */
#define VEPUCRU_VEPUGATE_CON00_PCLK_VEPU_ROOT_EN_SHIFT     (3U)
#define VEPUCRU_VEPUGATE_CON00_PCLK_VEPU_ROOT_EN_MASK      (0x1U << VEPUCRU_VEPUGATE_CON00_PCLK_VEPU_ROOT_EN_SHIFT)     /* 0x00000008 */
#define VEPUCRU_VEPUGATE_CON00_HCLK_VEPU_BIU_EN_SHIFT      (4U)
#define VEPUCRU_VEPUGATE_CON00_HCLK_VEPU_BIU_EN_MASK       (0x1U << VEPUCRU_VEPUGATE_CON00_HCLK_VEPU_BIU_EN_SHIFT)      /* 0x00000010 */
#define VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_BIU_EN_SHIFT      (5U)
#define VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_BIU_EN_MASK       (0x1U << VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_BIU_EN_SHIFT)      /* 0x00000020 */
#define VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_COM_BIU_EN_SHIFT  (6U)
#define VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_COM_BIU_EN_MASK   (0x1U << VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_COM_BIU_EN_SHIFT)  /* 0x00000040 */
#define VEPUCRU_VEPUGATE_CON00_PCLK_VEPU_BIU_EN_SHIFT      (7U)
#define VEPUCRU_VEPUGATE_CON00_PCLK_VEPU_BIU_EN_MASK       (0x1U << VEPUCRU_VEPUGATE_CON00_PCLK_VEPU_BIU_EN_SHIFT)      /* 0x00000080 */
#define VEPUCRU_VEPUGATE_CON00_HCLK_VEPU_EN_SHIFT          (8U)
#define VEPUCRU_VEPUGATE_CON00_HCLK_VEPU_EN_MASK           (0x1U << VEPUCRU_VEPUGATE_CON00_HCLK_VEPU_EN_SHIFT)          /* 0x00000100 */
#define VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_EN_SHIFT          (9U)
#define VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_EN_MASK           (0x1U << VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_EN_SHIFT)          /* 0x00000200 */
#define VEPUCRU_VEPUGATE_CON00_CLK_CORE_VEPU_EN_SHIFT      (10U)
#define VEPUCRU_VEPUGATE_CON00_CLK_CORE_VEPU_EN_MASK       (0x1U << VEPUCRU_VEPUGATE_CON00_CLK_CORE_VEPU_EN_SHIFT)      /* 0x00000400 */
#define VEPUCRU_VEPUGATE_CON00_HCLK_VEPU_PP_EN_SHIFT       (11U)
#define VEPUCRU_VEPUGATE_CON00_HCLK_VEPU_PP_EN_MASK        (0x1U << VEPUCRU_VEPUGATE_CON00_HCLK_VEPU_PP_EN_SHIFT)       /* 0x00000800 */
#define VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_PP_EN_SHIFT       (12U)
#define VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_PP_EN_MASK        (0x1U << VEPUCRU_VEPUGATE_CON00_ACLK_VEPU_PP_EN_SHIFT)       /* 0x00001000 */
#define VEPUCRU_VEPUGATE_CON00_CLK_CORE_VEPU_DVBM_EN_SHIFT (13U)
#define VEPUCRU_VEPUGATE_CON00_CLK_CORE_VEPU_DVBM_EN_MASK  (0x1U << VEPUCRU_VEPUGATE_CON00_CLK_CORE_VEPU_DVBM_EN_SHIFT) /* 0x00002000 */
#define VEPUCRU_VEPUGATE_CON00_PCLK_VICAP_VEPU_EN_SHIFT    (14U)
#define VEPUCRU_VEPUGATE_CON00_PCLK_VICAP_VEPU_EN_MASK     (0x1U << VEPUCRU_VEPUGATE_CON00_PCLK_VICAP_VEPU_EN_SHIFT)    /* 0x00004000 */
#define VEPUCRU_VEPUGATE_CON00_PCLK_GPIO1_EN_SHIFT         (15U)
#define VEPUCRU_VEPUGATE_CON00_PCLK_GPIO1_EN_MASK          (0x1U << VEPUCRU_VEPUGATE_CON00_PCLK_GPIO1_EN_SHIFT)         /* 0x00008000 */
/* VEPUGATE_CON01 */
#define VEPUCRU_VEPUGATE_CON01_OFFSET                      (0x804U)
#define VEPUCRU_VEPUGATE_CON01_DBCLK_GPIO1_EN_SHIFT        (0U)
#define VEPUCRU_VEPUGATE_CON01_DBCLK_GPIO1_EN_MASK         (0x1U << VEPUCRU_VEPUGATE_CON01_DBCLK_GPIO1_EN_SHIFT)        /* 0x00000001 */
#define VEPUCRU_VEPUGATE_CON01_PCLK_VEPU_IOC_EN_SHIFT      (1U)
#define VEPUCRU_VEPUGATE_CON01_PCLK_VEPU_IOC_EN_MASK       (0x1U << VEPUCRU_VEPUGATE_CON01_PCLK_VEPU_IOC_EN_SHIFT)      /* 0x00000002 */
#define VEPUCRU_VEPUGATE_CON01_PCLK_SPI0_EN_SHIFT          (2U)
#define VEPUCRU_VEPUGATE_CON01_PCLK_SPI0_EN_MASK           (0x1U << VEPUCRU_VEPUGATE_CON01_PCLK_SPI0_EN_SHIFT)          /* 0x00000004 */
#define VEPUCRU_VEPUGATE_CON01_CLK_SPI0_EN_SHIFT           (3U)
#define VEPUCRU_VEPUGATE_CON01_CLK_SPI0_EN_MASK            (0x1U << VEPUCRU_VEPUGATE_CON01_CLK_SPI0_EN_SHIFT)           /* 0x00000008 */
#define VEPUCRU_VEPUGATE_CON01_SCLK_IN_SPI0_EN_SHIFT       (4U)
#define VEPUCRU_VEPUGATE_CON01_SCLK_IN_SPI0_EN_MASK        (0x1U << VEPUCRU_VEPUGATE_CON01_SCLK_IN_SPI0_EN_SHIFT)       /* 0x00000010 */
#define VEPUCRU_VEPUGATE_CON01_PCLK_VEPU_CRU_EN_SHIFT      (5U)
#define VEPUCRU_VEPUGATE_CON01_PCLK_VEPU_CRU_EN_MASK       (0x1U << VEPUCRU_VEPUGATE_CON01_PCLK_VEPU_CRU_EN_SHIFT)      /* 0x00000020 */
#define VEPUCRU_VEPUGATE_CON01_PCLK_VEPU_SGRF_EN_SHIFT     (6U)
#define VEPUCRU_VEPUGATE_CON01_PCLK_VEPU_SGRF_EN_MASK      (0x1U << VEPUCRU_VEPUGATE_CON01_PCLK_VEPU_SGRF_EN_SHIFT)     /* 0x00000040 */
#define VEPUCRU_VEPUGATE_CON01_PCLK_VEPU_GRF_EN_SHIFT      (7U)
#define VEPUCRU_VEPUGATE_CON01_PCLK_VEPU_GRF_EN_MASK       (0x1U << VEPUCRU_VEPUGATE_CON01_PCLK_VEPU_GRF_EN_SHIFT)      /* 0x00000080 */
#define VEPUCRU_VEPUGATE_CON01_CLK_UART_DETN_FLT_EN_SHIFT  (8U)
#define VEPUCRU_VEPUGATE_CON01_CLK_UART_DETN_FLT_EN_MASK   (0x1U << VEPUCRU_VEPUGATE_CON01_CLK_UART_DETN_FLT_EN_SHIFT)  /* 0x00000100 */
#define VEPUCRU_VEPUGATE_CON01_CLK_PVTPLL_0_I2NPU_EN_SHIFT (9U)
#define VEPUCRU_VEPUGATE_CON01_CLK_PVTPLL_0_I2NPU_EN_MASK  (0x1U << VEPUCRU_VEPUGATE_CON01_CLK_PVTPLL_0_I2NPU_EN_SHIFT) /* 0x00000200 */
#define VEPUCRU_VEPUGATE_CON01_CLK_PVTPLL_1_I2NPU_EN_SHIFT (10U)
#define VEPUCRU_VEPUGATE_CON01_CLK_PVTPLL_1_I2NPU_EN_MASK  (0x1U << VEPUCRU_VEPUGATE_CON01_CLK_PVTPLL_1_I2NPU_EN_SHIFT) /* 0x00000400 */
#define VEPUCRU_VEPUGATE_CON01_CLK_MATRIX_50M_SRC2NPU_EN_SHIFT (11U)
#define VEPUCRU_VEPUGATE_CON01_CLK_MATRIX_50M_SRC2NPU_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON01_CLK_MATRIX_50M_SRC2NPU_EN_SHIFT) /* 0x00000800 */
#define VEPUCRU_VEPUGATE_CON01_CLK_MATRIX_100M_SRC2NPU_EN_SHIFT (12U)
#define VEPUCRU_VEPUGATE_CON01_CLK_MATRIX_100M_SRC2NPU_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON01_CLK_MATRIX_100M_SRC2NPU_EN_SHIFT) /* 0x00001000 */
#define VEPUCRU_VEPUGATE_CON01_CLK_MATRIX_150M_SRC2NPU_EN_SHIFT (13U)
#define VEPUCRU_VEPUGATE_CON01_CLK_MATRIX_150M_SRC2NPU_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON01_CLK_MATRIX_150M_SRC2NPU_EN_SHIFT) /* 0x00002000 */
#define VEPUCRU_VEPUGATE_CON01_CLK_MATRIX_200M_SRC2NPU_EN_SHIFT (14U)
#define VEPUCRU_VEPUGATE_CON01_CLK_MATRIX_200M_SRC2NPU_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON01_CLK_MATRIX_200M_SRC2NPU_EN_SHIFT) /* 0x00004000 */
#define VEPUCRU_VEPUGATE_CON01_CLK_MATRIX_300M_SRC2NPU_EN_SHIFT (15U)
#define VEPUCRU_VEPUGATE_CON01_CLK_MATRIX_300M_SRC2NPU_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON01_CLK_MATRIX_300M_SRC2NPU_EN_SHIFT) /* 0x00008000 */
/* VEPUGATE_CON02 */
#define VEPUCRU_VEPUGATE_CON02_OFFSET                      (0x808U)
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_339M_SRC2NPU_EN_SHIFT (0U)
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_339M_SRC2NPU_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_339M_SRC2NPU_EN_SHIFT) /* 0x00000001 */
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_400M_SRC2NPU_EN_SHIFT (1U)
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_400M_SRC2NPU_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_400M_SRC2NPU_EN_SHIFT) /* 0x00000002 */
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_500M_SRC2NPU_EN_SHIFT (2U)
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_500M_SRC2NPU_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_500M_SRC2NPU_EN_SHIFT) /* 0x00000004 */
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_50M_SRC2DDR_EN_SHIFT (3U)
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_50M_SRC2DDR_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_50M_SRC2DDR_EN_SHIFT) /* 0x00000008 */
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_100M_SRC2DDR_EN_SHIFT (4U)
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_100M_SRC2DDR_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_100M_SRC2DDR_EN_SHIFT) /* 0x00000010 */
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_300M_SRC2DDR_EN_SHIFT (5U)
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_300M_SRC2DDR_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_300M_SRC2DDR_EN_SHIFT) /* 0x00000020 */
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_500M_SRC2DDR_EN_SHIFT (6U)
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_500M_SRC2DDR_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_500M_SRC2DDR_EN_SHIFT) /* 0x00000040 */
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_50M_SRC2VO_EN_SHIFT (7U)
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_50M_SRC2VO_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_50M_SRC2VO_EN_SHIFT) /* 0x00000080 */
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_100M_SRC2VO_EN_SHIFT (8U)
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_100M_SRC2VO_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_100M_SRC2VO_EN_SHIFT) /* 0x00000100 */
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_150M_SRC2VO_EN_SHIFT (9U)
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_150M_SRC2VO_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_150M_SRC2VO_EN_SHIFT) /* 0x00000200 */
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_200M_SRC2VO_EN_SHIFT (10U)
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_200M_SRC2VO_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_200M_SRC2VO_EN_SHIFT) /* 0x00000400 */
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_300M_SRC2VO_EN_SHIFT (11U)
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_300M_SRC2VO_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_300M_SRC2VO_EN_SHIFT) /* 0x00000800 */
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_400M_SRC2VO_EN_SHIFT (12U)
#define VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_400M_SRC2VO_EN_MASK (0x1U << VEPUCRU_VEPUGATE_CON02_CLK_MATRIX_400M_SRC2VO_EN_SHIFT) /* 0x00001000 */
#define VEPUCRU_VEPUGATE_CON02_CLK_TESTOUT_VEPU_0_EN_SHIFT (13U)
#define VEPUCRU_VEPUGATE_CON02_CLK_TESTOUT_VEPU_0_EN_MASK  (0x1U << VEPUCRU_VEPUGATE_CON02_CLK_TESTOUT_VEPU_0_EN_SHIFT) /* 0x00002000 */
#define VEPUCRU_VEPUGATE_CON02_CLK_TESTOUT_VEPU_1_EN_SHIFT (14U)
#define VEPUCRU_VEPUGATE_CON02_CLK_TESTOUT_VEPU_1_EN_MASK  (0x1U << VEPUCRU_VEPUGATE_CON02_CLK_TESTOUT_VEPU_1_EN_SHIFT) /* 0x00004000 */
/* VEPUSOFTRST_CON00 */
#define VEPUCRU_VEPUSOFTRST_CON00_OFFSET                   (0xA00U)
#define VEPUCRU_VEPUSOFTRST_CON00_HRESETN_VEPU_BIU_SHIFT   (4U)
#define VEPUCRU_VEPUSOFTRST_CON00_HRESETN_VEPU_BIU_MASK    (0x1U << VEPUCRU_VEPUSOFTRST_CON00_HRESETN_VEPU_BIU_SHIFT)   /* 0x00000010 */
#define VEPUCRU_VEPUSOFTRST_CON00_ARESETN_VEPU_BIU_SHIFT   (5U)
#define VEPUCRU_VEPUSOFTRST_CON00_ARESETN_VEPU_BIU_MASK    (0x1U << VEPUCRU_VEPUSOFTRST_CON00_ARESETN_VEPU_BIU_SHIFT)   /* 0x00000020 */
#define VEPUCRU_VEPUSOFTRST_CON00_ARESETN_VEPU_COM_BIU_SHIFT (6U)
#define VEPUCRU_VEPUSOFTRST_CON00_ARESETN_VEPU_COM_BIU_MASK (0x1U << VEPUCRU_VEPUSOFTRST_CON00_ARESETN_VEPU_COM_BIU_SHIFT) /* 0x00000040 */
#define VEPUCRU_VEPUSOFTRST_CON00_PRESETN_VEPU_BIU_SHIFT   (7U)
#define VEPUCRU_VEPUSOFTRST_CON00_PRESETN_VEPU_BIU_MASK    (0x1U << VEPUCRU_VEPUSOFTRST_CON00_PRESETN_VEPU_BIU_SHIFT)   /* 0x00000080 */
#define VEPUCRU_VEPUSOFTRST_CON00_HRESETN_VEPU_SHIFT       (8U)
#define VEPUCRU_VEPUSOFTRST_CON00_HRESETN_VEPU_MASK        (0x1U << VEPUCRU_VEPUSOFTRST_CON00_HRESETN_VEPU_SHIFT)       /* 0x00000100 */
#define VEPUCRU_VEPUSOFTRST_CON00_ARESETN_VEPU_SHIFT       (9U)
#define VEPUCRU_VEPUSOFTRST_CON00_ARESETN_VEPU_MASK        (0x1U << VEPUCRU_VEPUSOFTRST_CON00_ARESETN_VEPU_SHIFT)       /* 0x00000200 */
#define VEPUCRU_VEPUSOFTRST_CON00_RESETN_CORE_VEPU_SHIFT   (10U)
#define VEPUCRU_VEPUSOFTRST_CON00_RESETN_CORE_VEPU_MASK    (0x1U << VEPUCRU_VEPUSOFTRST_CON00_RESETN_CORE_VEPU_SHIFT)   /* 0x00000400 */
#define VEPUCRU_VEPUSOFTRST_CON00_HRESETN_VEPU_PP_SHIFT    (11U)
#define VEPUCRU_VEPUSOFTRST_CON00_HRESETN_VEPU_PP_MASK     (0x1U << VEPUCRU_VEPUSOFTRST_CON00_HRESETN_VEPU_PP_SHIFT)    /* 0x00000800 */
#define VEPUCRU_VEPUSOFTRST_CON00_ARESETN_VEPU_PP_SHIFT    (12U)
#define VEPUCRU_VEPUSOFTRST_CON00_ARESETN_VEPU_PP_MASK     (0x1U << VEPUCRU_VEPUSOFTRST_CON00_ARESETN_VEPU_PP_SHIFT)    /* 0x00001000 */
#define VEPUCRU_VEPUSOFTRST_CON00_RESETN_CORE_VEPU_DVBM_SHIFT (13U)
#define VEPUCRU_VEPUSOFTRST_CON00_RESETN_CORE_VEPU_DVBM_MASK (0x1U << VEPUCRU_VEPUSOFTRST_CON00_RESETN_CORE_VEPU_DVBM_SHIFT) /* 0x00002000 */
#define VEPUCRU_VEPUSOFTRST_CON00_PRESETN_VICAP_VEPU_SHIFT (14U)
#define VEPUCRU_VEPUSOFTRST_CON00_PRESETN_VICAP_VEPU_MASK  (0x1U << VEPUCRU_VEPUSOFTRST_CON00_PRESETN_VICAP_VEPU_SHIFT) /* 0x00004000 */
#define VEPUCRU_VEPUSOFTRST_CON00_PRESETN_GPIO1_SHIFT      (15U)
#define VEPUCRU_VEPUSOFTRST_CON00_PRESETN_GPIO1_MASK       (0x1U << VEPUCRU_VEPUSOFTRST_CON00_PRESETN_GPIO1_SHIFT)      /* 0x00008000 */
/* VEPUSOFTRST_CON01 */
#define VEPUCRU_VEPUSOFTRST_CON01_OFFSET                   (0xA04U)
#define VEPUCRU_VEPUSOFTRST_CON01_DBRESETN_GPIO1_SHIFT     (0U)
#define VEPUCRU_VEPUSOFTRST_CON01_DBRESETN_GPIO1_MASK      (0x1U << VEPUCRU_VEPUSOFTRST_CON01_DBRESETN_GPIO1_SHIFT)     /* 0x00000001 */
#define VEPUCRU_VEPUSOFTRST_CON01_PRESETN_VEPU_IOC_SHIFT   (1U)
#define VEPUCRU_VEPUSOFTRST_CON01_PRESETN_VEPU_IOC_MASK    (0x1U << VEPUCRU_VEPUSOFTRST_CON01_PRESETN_VEPU_IOC_SHIFT)   /* 0x00000002 */
#define VEPUCRU_VEPUSOFTRST_CON01_PRESETN_SPI0_SHIFT       (2U)
#define VEPUCRU_VEPUSOFTRST_CON01_PRESETN_SPI0_MASK        (0x1U << VEPUCRU_VEPUSOFTRST_CON01_PRESETN_SPI0_SHIFT)       /* 0x00000004 */
#define VEPUCRU_VEPUSOFTRST_CON01_RESETN_SPI0_SHIFT        (3U)
#define VEPUCRU_VEPUSOFTRST_CON01_RESETN_SPI0_MASK         (0x1U << VEPUCRU_VEPUSOFTRST_CON01_RESETN_SPI0_SHIFT)        /* 0x00000008 */
#define VEPUCRU_VEPUSOFTRST_CON01_PRESETN_VEPU_CRU_SHIFT   (5U)
#define VEPUCRU_VEPUSOFTRST_CON01_PRESETN_VEPU_CRU_MASK    (0x1U << VEPUCRU_VEPUSOFTRST_CON01_PRESETN_VEPU_CRU_SHIFT)   /* 0x00000020 */
#define VEPUCRU_VEPUSOFTRST_CON01_PRESETN_VEPU_SGRF_SHIFT  (6U)
#define VEPUCRU_VEPUSOFTRST_CON01_PRESETN_VEPU_SGRF_MASK   (0x1U << VEPUCRU_VEPUSOFTRST_CON01_PRESETN_VEPU_SGRF_SHIFT)  /* 0x00000040 */
#define VEPUCRU_VEPUSOFTRST_CON01_PRESETN_VEPU_GRF_SHIFT   (7U)
#define VEPUCRU_VEPUSOFTRST_CON01_PRESETN_VEPU_GRF_MASK    (0x1U << VEPUCRU_VEPUSOFTRST_CON01_PRESETN_VEPU_GRF_SHIFT)   /* 0x00000080 */
#define VEPUCRU_VEPUSOFTRST_CON01_RESETN_UART_DETN_FLT_SHIFT (8U)
#define VEPUCRU_VEPUSOFTRST_CON01_RESETN_UART_DETN_FLT_MASK (0x1U << VEPUCRU_VEPUSOFTRST_CON01_RESETN_UART_DETN_FLT_SHIFT) /* 0x00000100 */
/*****************************************VOCRU******************************************/
/* VOCLKSEL_CON00 */
#define VOCRU_VOCLKSEL_CON00_OFFSET                        (0x300U)
#define VOCRU_VOCLKSEL_CON00_ACLK_VO_ROOT_SEL_SHIFT        (0U)
#define VOCRU_VOCLKSEL_CON00_ACLK_VO_ROOT_SEL_MASK         (0x3U << VOCRU_VOCLKSEL_CON00_ACLK_VO_ROOT_SEL_SHIFT)        /* 0x00000003 */
#define VOCRU_VOCLKSEL_CON00_HCLK_VO_ROOT_SEL_SHIFT        (2U)
#define VOCRU_VOCLKSEL_CON00_HCLK_VO_ROOT_SEL_MASK         (0x3U << VOCRU_VOCLKSEL_CON00_HCLK_VO_ROOT_SEL_SHIFT)        /* 0x0000000C */
#define VOCRU_VOCLKSEL_CON00_PCLK_VO_ROOT_SEL_SHIFT        (4U)
#define VOCRU_VOCLKSEL_CON00_PCLK_VO_ROOT_SEL_MASK         (0x3U << VOCRU_VOCLKSEL_CON00_PCLK_VO_ROOT_SEL_SHIFT)        /* 0x00000030 */
#define VOCRU_VOCLKSEL_CON00_CLK_TESTOUT_VO_0_DIV_SHIFT    (6U)
#define VOCRU_VOCLKSEL_CON00_CLK_TESTOUT_VO_0_DIV_MASK     (0x1FU << VOCRU_VOCLKSEL_CON00_CLK_TESTOUT_VO_0_DIV_SHIFT)   /* 0x000007C0 */
#define VOCRU_VOCLKSEL_CON00_CLK_TESTOUT_VO_0_SEL_SHIFT    (11U)
#define VOCRU_VOCLKSEL_CON00_CLK_TESTOUT_VO_0_SEL_MASK     (0x7U << VOCRU_VOCLKSEL_CON00_CLK_TESTOUT_VO_0_SEL_SHIFT)    /* 0x00003800 */
/* VOCLKSEL_CON01 */
#define VOCRU_VOCLKSEL_CON01_OFFSET                        (0x304U)
#define VOCRU_VOCLKSEL_CON01_CLK_TESTOUT_VO_1_DIV_SHIFT    (0U)
#define VOCRU_VOCLKSEL_CON01_CLK_TESTOUT_VO_1_DIV_MASK     (0x1FU << VOCRU_VOCLKSEL_CON01_CLK_TESTOUT_VO_1_DIV_SHIFT)   /* 0x0000001F */
#define VOCRU_VOCLKSEL_CON01_CLK_TESTOUT_VO_1_SEL_SHIFT    (5U)
#define VOCRU_VOCLKSEL_CON01_CLK_TESTOUT_VO_1_SEL_MASK     (0x7U << VOCRU_VOCLKSEL_CON01_CLK_TESTOUT_VO_1_SEL_SHIFT)    /* 0x000000E0 */
#define VOCRU_VOCLKSEL_CON01_CLK_CORE_RGA2E_SEL_SHIFT      (8U)
#define VOCRU_VOCLKSEL_CON01_CLK_CORE_RGA2E_SEL_MASK       (0x3U << VOCRU_VOCLKSEL_CON01_CLK_CORE_RGA2E_SEL_SHIFT)      /* 0x00000300 */
#define VOCRU_VOCLKSEL_CON01_ACLK_VOP_ROOT_SEL_SHIFT       (10U)
#define VOCRU_VOCLKSEL_CON01_ACLK_VOP_ROOT_SEL_MASK        (0x3U << VOCRU_VOCLKSEL_CON01_ACLK_VOP_ROOT_SEL_SHIFT)       /* 0x00000C00 */
#define VOCRU_VOCLKSEL_CON01_ACLK_MAC_ROOT_SEL_SHIFT       (12U)
#define VOCRU_VOCLKSEL_CON01_ACLK_MAC_ROOT_SEL_MASK        (0x3U << VOCRU_VOCLKSEL_CON01_ACLK_MAC_ROOT_SEL_SHIFT)       /* 0x00003000 */
/* VOCLKSEL_CON02 */
#define VOCRU_VOCLKSEL_CON02_OFFSET                        (0x308U)
#define VOCRU_VOCLKSEL_CON02_CLK_GMAC0_TX_50M_O_DIV_SHIFT  (1U)
#define VOCRU_VOCLKSEL_CON02_CLK_GMAC0_TX_50M_O_DIV_MASK   (0x3FU << VOCRU_VOCLKSEL_CON02_CLK_GMAC0_TX_50M_O_DIV_SHIFT) /* 0x0000007E */
#define VOCRU_VOCLKSEL_CON02_CCLK_SRC_SDIO_DIV_SHIFT       (7U)
#define VOCRU_VOCLKSEL_CON02_CCLK_SRC_SDIO_DIV_MASK        (0x3FU << VOCRU_VOCLKSEL_CON02_CCLK_SRC_SDIO_DIV_SHIFT)      /* 0x00001F80 */
#define VOCRU_VOCLKSEL_CON02_CCLK_SRC_SDIO_SEL_SHIFT       (13U)
#define VOCRU_VOCLKSEL_CON02_CCLK_SRC_SDIO_SEL_MASK        (0x1U << VOCRU_VOCLKSEL_CON02_CCLK_SRC_SDIO_SEL_SHIFT)       /* 0x00002000 */
/* VOCLKSEL_CON03 */
#define VOCRU_VOCLKSEL_CON03_OFFSET                        (0x30CU)
#define VOCRU_VOCLKSEL_CON03_CLK_TSADC_DIV_SHIFT           (0U)
#define VOCRU_VOCLKSEL_CON03_CLK_TSADC_DIV_MASK            (0x1FU << VOCRU_VOCLKSEL_CON03_CLK_TSADC_DIV_SHIFT)          /* 0x0000001F */
#define VOCRU_VOCLKSEL_CON03_CLK_TSADC_TSEN_DIV_SHIFT      (5U)
#define VOCRU_VOCLKSEL_CON03_CLK_TSADC_TSEN_DIV_MASK       (0x1FU << VOCRU_VOCLKSEL_CON03_CLK_TSADC_TSEN_DIV_SHIFT)     /* 0x000003E0 */
#define VOCRU_VOCLKSEL_CON03_CLK_USER_OTPC_NS_DIV_SHIFT    (10U)
#define VOCRU_VOCLKSEL_CON03_CLK_USER_OTPC_NS_DIV_MASK     (0x7U << VOCRU_VOCLKSEL_CON03_CLK_USER_OTPC_NS_DIV_SHIFT)    /* 0x00001C00 */
#define VOCRU_VOCLKSEL_CON03_CLK_USER_OTPC_S_DIV_SHIFT     (13U)
#define VOCRU_VOCLKSEL_CON03_CLK_USER_OTPC_S_DIV_MASK      (0x7U << VOCRU_VOCLKSEL_CON03_CLK_USER_OTPC_S_DIV_SHIFT)     /* 0x0000E000 */
/* VOGATE_CON00 */
#define VOCRU_VOGATE_CON00_OFFSET                          (0x800U)
#define VOCRU_VOGATE_CON00_ACLK_VO_ROOT_EN_SHIFT           (0U)
#define VOCRU_VOGATE_CON00_ACLK_VO_ROOT_EN_MASK            (0x1U << VOCRU_VOGATE_CON00_ACLK_VO_ROOT_EN_SHIFT)           /* 0x00000001 */
#define VOCRU_VOGATE_CON00_HCLK_VO_ROOT_EN_SHIFT           (1U)
#define VOCRU_VOGATE_CON00_HCLK_VO_ROOT_EN_MASK            (0x1U << VOCRU_VOGATE_CON00_HCLK_VO_ROOT_EN_SHIFT)           /* 0x00000002 */
#define VOCRU_VOGATE_CON00_PCLK_VO_ROOT_EN_SHIFT           (2U)
#define VOCRU_VOGATE_CON00_PCLK_VO_ROOT_EN_MASK            (0x1U << VOCRU_VOGATE_CON00_PCLK_VO_ROOT_EN_SHIFT)           /* 0x00000004 */
#define VOCRU_VOGATE_CON00_ACLK_VO_BIU_EN_SHIFT            (3U)
#define VOCRU_VOGATE_CON00_ACLK_VO_BIU_EN_MASK             (0x1U << VOCRU_VOGATE_CON00_ACLK_VO_BIU_EN_SHIFT)            /* 0x00000008 */
#define VOCRU_VOGATE_CON00_HCLK_VO_BIU_EN_SHIFT            (4U)
#define VOCRU_VOGATE_CON00_HCLK_VO_BIU_EN_MASK             (0x1U << VOCRU_VOGATE_CON00_HCLK_VO_BIU_EN_SHIFT)            /* 0x00000010 */
#define VOCRU_VOGATE_CON00_CLK_TESTOUT_VO_0_EN_SHIFT       (5U)
#define VOCRU_VOGATE_CON00_CLK_TESTOUT_VO_0_EN_MASK        (0x1U << VOCRU_VOGATE_CON00_CLK_TESTOUT_VO_0_EN_SHIFT)       /* 0x00000020 */
#define VOCRU_VOGATE_CON00_CLK_TESTOUT_VO_1_EN_SHIFT       (6U)
#define VOCRU_VOGATE_CON00_CLK_TESTOUT_VO_1_EN_MASK        (0x1U << VOCRU_VOGATE_CON00_CLK_TESTOUT_VO_1_EN_SHIFT)       /* 0x00000040 */
#define VOCRU_VOGATE_CON00_HCLK_RGA2E_EN_SHIFT             (7U)
#define VOCRU_VOGATE_CON00_HCLK_RGA2E_EN_MASK              (0x1U << VOCRU_VOGATE_CON00_HCLK_RGA2E_EN_SHIFT)             /* 0x00000080 */
#define VOCRU_VOGATE_CON00_ACLK_RGA2E_EN_SHIFT             (8U)
#define VOCRU_VOGATE_CON00_ACLK_RGA2E_EN_MASK              (0x1U << VOCRU_VOGATE_CON00_ACLK_RGA2E_EN_SHIFT)             /* 0x00000100 */
#define VOCRU_VOGATE_CON00_CLK_CORE_RGA2E_EN_SHIFT         (9U)
#define VOCRU_VOGATE_CON00_CLK_CORE_RGA2E_EN_MASK          (0x1U << VOCRU_VOGATE_CON00_CLK_CORE_RGA2E_EN_SHIFT)         /* 0x00000200 */
#define VOCRU_VOGATE_CON00_PCLK_VO_GRF_EN_SHIFT            (10U)
#define VOCRU_VOGATE_CON00_PCLK_VO_GRF_EN_MASK             (0x1U << VOCRU_VOGATE_CON00_PCLK_VO_GRF_EN_SHIFT)            /* 0x00000400 */
#define VOCRU_VOGATE_CON00_ACLK_VOP_ROOT_EN_SHIFT          (11U)
#define VOCRU_VOGATE_CON00_ACLK_VOP_ROOT_EN_MASK           (0x1U << VOCRU_VOGATE_CON00_ACLK_VOP_ROOT_EN_SHIFT)          /* 0x00000800 */
#define VOCRU_VOGATE_CON00_ACLK_VOP_BIU_EN_SHIFT           (12U)
#define VOCRU_VOGATE_CON00_ACLK_VOP_BIU_EN_MASK            (0x1U << VOCRU_VOGATE_CON00_ACLK_VOP_BIU_EN_SHIFT)           /* 0x00001000 */
#define VOCRU_VOGATE_CON00_HCLK_VOP_EN_SHIFT               (13U)
#define VOCRU_VOGATE_CON00_HCLK_VOP_EN_MASK                (0x1U << VOCRU_VOGATE_CON00_HCLK_VOP_EN_SHIFT)               /* 0x00002000 */
#define VOCRU_VOGATE_CON00_DCLK_VOP_EN_SHIFT               (14U)
#define VOCRU_VOGATE_CON00_DCLK_VOP_EN_MASK                (0x1U << VOCRU_VOGATE_CON00_DCLK_VOP_EN_SHIFT)               /* 0x00004000 */
#define VOCRU_VOGATE_CON00_ACLK_VOP_EN_SHIFT               (15U)
#define VOCRU_VOGATE_CON00_ACLK_VOP_EN_MASK                (0x1U << VOCRU_VOGATE_CON00_ACLK_VOP_EN_SHIFT)               /* 0x00008000 */
/* VOGATE_CON01 */
#define VOCRU_VOGATE_CON01_OFFSET                          (0x804U)
#define VOCRU_VOGATE_CON01_MBIST_CLK_MAC_PHY_EN_SHIFT      (0U)
#define VOCRU_VOGATE_CON01_MBIST_CLK_MAC_PHY_EN_MASK       (0x1U << VOCRU_VOGATE_CON01_MBIST_CLK_MAC_PHY_EN_SHIFT)      /* 0x00000001 */
#define VOCRU_VOGATE_CON01_MBIST_CLK_ACLK_VOP_EN_SHIFT     (1U)
#define VOCRU_VOGATE_CON01_MBIST_CLK_ACLK_VOP_EN_MASK      (0x1U << VOCRU_VOGATE_CON01_MBIST_CLK_ACLK_VOP_EN_SHIFT)     /* 0x00000002 */
#define VOCRU_VOGATE_CON01_MBIST_CLK_ACLK_RGA_EN_SHIFT     (2U)
#define VOCRU_VOGATE_CON01_MBIST_CLK_ACLK_RGA_EN_MASK      (0x1U << VOCRU_VOGATE_CON01_MBIST_CLK_ACLK_RGA_EN_SHIFT)     /* 0x00000004 */
#define VOCRU_VOGATE_CON01_MBIST_CLK_CCLK_RGA_EN_SHIFT     (3U)
#define VOCRU_VOGATE_CON01_MBIST_CLK_CCLK_RGA_EN_MASK      (0x1U << VOCRU_VOGATE_CON01_MBIST_CLK_CCLK_RGA_EN_SHIFT)     /* 0x00000008 */
#define VOCRU_VOGATE_CON01_ACLK_MAC_ROOT_EN_SHIFT          (4U)
#define VOCRU_VOGATE_CON01_ACLK_MAC_ROOT_EN_MASK           (0x1U << VOCRU_VOGATE_CON01_ACLK_MAC_ROOT_EN_SHIFT)          /* 0x00000010 */
#define VOCRU_VOGATE_CON01_PCLK_MAC_BIU_EN_SHIFT           (6U)
#define VOCRU_VOGATE_CON01_PCLK_MAC_BIU_EN_MASK            (0x1U << VOCRU_VOGATE_CON01_PCLK_MAC_BIU_EN_SHIFT)           /* 0x00000040 */
#define VOCRU_VOGATE_CON01_ACLK_MAC_BIU_EN_SHIFT           (7U)
#define VOCRU_VOGATE_CON01_ACLK_MAC_BIU_EN_MASK            (0x1U << VOCRU_VOGATE_CON01_ACLK_MAC_BIU_EN_SHIFT)           /* 0x00000080 */
#define VOCRU_VOGATE_CON01_ACLK_MAC_EN_SHIFT               (8U)
#define VOCRU_VOGATE_CON01_ACLK_MAC_EN_MASK                (0x1U << VOCRU_VOGATE_CON01_ACLK_MAC_EN_SHIFT)               /* 0x00000100 */
#define VOCRU_VOGATE_CON01_PCLK_MAC_EN_SHIFT               (9U)
#define VOCRU_VOGATE_CON01_PCLK_MAC_EN_MASK                (0x1U << VOCRU_VOGATE_CON01_PCLK_MAC_EN_SHIFT)               /* 0x00000200 */
#define VOCRU_VOGATE_CON01_MBIST_CLK_ACLK_MAC_EN_SHIFT     (11U)
#define VOCRU_VOGATE_CON01_MBIST_CLK_ACLK_MAC_EN_MASK      (0x1U << VOCRU_VOGATE_CON01_MBIST_CLK_ACLK_MAC_EN_SHIFT)     /* 0x00000800 */
#define VOCRU_VOGATE_CON01_PCLK_VO_SGRF_EN_SHIFT           (12U)
#define VOCRU_VOGATE_CON01_PCLK_VO_SGRF_EN_MASK            (0x1U << VOCRU_VOGATE_CON01_PCLK_VO_SGRF_EN_SHIFT)           /* 0x00001000 */
#define VOCRU_VOGATE_CON01_PCLK_VO_CRU_EN_SHIFT            (13U)
#define VOCRU_VOGATE_CON01_PCLK_VO_CRU_EN_MASK             (0x1U << VOCRU_VOGATE_CON01_PCLK_VO_CRU_EN_SHIFT)            /* 0x00002000 */
#define VOCRU_VOGATE_CON01_CCLK_SRC_SDIO_EN_SHIFT          (14U)
#define VOCRU_VOGATE_CON01_CCLK_SRC_SDIO_EN_MASK           (0x1U << VOCRU_VOGATE_CON01_CCLK_SRC_SDIO_EN_SHIFT)          /* 0x00004000 */
#define VOCRU_VOGATE_CON01_HCLK_SDIO_EN_SHIFT              (15U)
#define VOCRU_VOGATE_CON01_HCLK_SDIO_EN_MASK               (0x1U << VOCRU_VOGATE_CON01_HCLK_SDIO_EN_SHIFT)              /* 0x00008000 */
/* VOGATE_CON02 */
#define VOCRU_VOGATE_CON02_OFFSET                          (0x808U)
#define VOCRU_VOGATE_CON02_PCLK_TSADC_EN_SHIFT             (0U)
#define VOCRU_VOGATE_CON02_PCLK_TSADC_EN_MASK              (0x1U << VOCRU_VOGATE_CON02_PCLK_TSADC_EN_SHIFT)             /* 0x00000001 */
#define VOCRU_VOGATE_CON02_CLK_TSADC_EN_SHIFT              (1U)
#define VOCRU_VOGATE_CON02_CLK_TSADC_EN_MASK               (0x1U << VOCRU_VOGATE_CON02_CLK_TSADC_EN_SHIFT)              /* 0x00000002 */
#define VOCRU_VOGATE_CON02_CLK_TSADC_TSEN_EN_SHIFT         (2U)
#define VOCRU_VOGATE_CON02_CLK_TSADC_TSEN_EN_MASK          (0x1U << VOCRU_VOGATE_CON02_CLK_TSADC_TSEN_EN_SHIFT)         /* 0x00000004 */
#define VOCRU_VOGATE_CON02_PCLK_OTPC_NS_EN_SHIFT           (3U)
#define VOCRU_VOGATE_CON02_PCLK_OTPC_NS_EN_MASK            (0x1U << VOCRU_VOGATE_CON02_PCLK_OTPC_NS_EN_SHIFT)           /* 0x00000008 */
#define VOCRU_VOGATE_CON02_CLK_SBPI_OTPC_NS_EN_SHIFT       (5U)
#define VOCRU_VOGATE_CON02_CLK_SBPI_OTPC_NS_EN_MASK        (0x1U << VOCRU_VOGATE_CON02_CLK_SBPI_OTPC_NS_EN_SHIFT)       /* 0x00000020 */
#define VOCRU_VOGATE_CON02_CLK_USER_OTPC_NS_EN_SHIFT       (6U)
#define VOCRU_VOGATE_CON02_CLK_USER_OTPC_NS_EN_MASK        (0x1U << VOCRU_VOGATE_CON02_CLK_USER_OTPC_NS_EN_SHIFT)       /* 0x00000040 */
#define VOCRU_VOGATE_CON02_PCLK_OTPC_S_EN_SHIFT            (7U)
#define VOCRU_VOGATE_CON02_PCLK_OTPC_S_EN_MASK             (0x1U << VOCRU_VOGATE_CON02_PCLK_OTPC_S_EN_SHIFT)            /* 0x00000080 */
#define VOCRU_VOGATE_CON02_CLK_SBPI_OTPC_S_EN_SHIFT        (9U)
#define VOCRU_VOGATE_CON02_CLK_SBPI_OTPC_S_EN_MASK         (0x1U << VOCRU_VOGATE_CON02_CLK_SBPI_OTPC_S_EN_SHIFT)        /* 0x00000200 */
#define VOCRU_VOGATE_CON02_CLK_USER_OTPC_S_EN_SHIFT        (10U)
#define VOCRU_VOGATE_CON02_CLK_USER_OTPC_S_EN_MASK         (0x1U << VOCRU_VOGATE_CON02_CLK_USER_OTPC_S_EN_SHIFT)        /* 0x00000400 */
#define VOCRU_VOGATE_CON02_CLK_OTPC_ARB_EN_SHIFT           (11U)
#define VOCRU_VOGATE_CON02_CLK_OTPC_ARB_EN_MASK            (0x1U << VOCRU_VOGATE_CON02_CLK_OTPC_ARB_EN_SHIFT)           /* 0x00000800 */
#define VOCRU_VOGATE_CON02_CLK_MACPHY_EN_SHIFT             (13U)
#define VOCRU_VOGATE_CON02_CLK_MACPHY_EN_MASK              (0x1U << VOCRU_VOGATE_CON02_CLK_MACPHY_EN_SHIFT)             /* 0x00002000 */
#define VOCRU_VOGATE_CON02_PCLK_OTP_MASK_EN_SHIFT          (14U)
#define VOCRU_VOGATE_CON02_PCLK_OTP_MASK_EN_MASK           (0x1U << VOCRU_VOGATE_CON02_PCLK_OTP_MASK_EN_SHIFT)          /* 0x00004000 */
#define VOCRU_VOGATE_CON02_CLK_PMC_OTP_EN_SHIFT            (15U)
#define VOCRU_VOGATE_CON02_CLK_PMC_OTP_EN_MASK             (0x1U << VOCRU_VOGATE_CON02_CLK_PMC_OTP_EN_SHIFT)            /* 0x00008000 */
/* VOGATE_CON03 */
#define VOCRU_VOGATE_CON03_OFFSET                          (0x80CU)
#define VOCRU_VOGATE_CON03_PCLK_GPIO2_EN_SHIFT             (0U)
#define VOCRU_VOGATE_CON03_PCLK_GPIO2_EN_MASK              (0x1U << VOCRU_VOGATE_CON03_PCLK_GPIO2_EN_SHIFT)             /* 0x00000001 */
#define VOCRU_VOGATE_CON03_DBCLK_GPIO2_EN_SHIFT            (1U)
#define VOCRU_VOGATE_CON03_DBCLK_GPIO2_EN_MASK             (0x1U << VOCRU_VOGATE_CON03_DBCLK_GPIO2_EN_SHIFT)            /* 0x00000002 */
#define VOCRU_VOGATE_CON03_PCLK_VO_IOC_EN_SHIFT            (2U)
#define VOCRU_VOGATE_CON03_PCLK_VO_IOC_EN_MASK             (0x1U << VOCRU_VOGATE_CON03_PCLK_VO_IOC_EN_SHIFT)            /* 0x00000004 */
/* VOSOFTRST_CON00 */
#define VOCRU_VOSOFTRST_CON00_OFFSET                       (0xA00U)
#define VOCRU_VOSOFTRST_CON00_ARESETN_VO_BIU_SHIFT         (3U)
#define VOCRU_VOSOFTRST_CON00_ARESETN_VO_BIU_MASK          (0x1U << VOCRU_VOSOFTRST_CON00_ARESETN_VO_BIU_SHIFT)         /* 0x00000008 */
#define VOCRU_VOSOFTRST_CON00_HRESETN_VO_BIU_SHIFT         (4U)
#define VOCRU_VOSOFTRST_CON00_HRESETN_VO_BIU_MASK          (0x1U << VOCRU_VOSOFTRST_CON00_HRESETN_VO_BIU_SHIFT)         /* 0x00000010 */
#define VOCRU_VOSOFTRST_CON00_HRESETN_RGA2E_SHIFT          (7U)
#define VOCRU_VOSOFTRST_CON00_HRESETN_RGA2E_MASK           (0x1U << VOCRU_VOSOFTRST_CON00_HRESETN_RGA2E_SHIFT)          /* 0x00000080 */
#define VOCRU_VOSOFTRST_CON00_ARESETN_RGA2E_SHIFT          (8U)
#define VOCRU_VOSOFTRST_CON00_ARESETN_RGA2E_MASK           (0x1U << VOCRU_VOSOFTRST_CON00_ARESETN_RGA2E_SHIFT)          /* 0x00000100 */
#define VOCRU_VOSOFTRST_CON00_RESETN_CORE_RGA2E_SHIFT      (9U)
#define VOCRU_VOSOFTRST_CON00_RESETN_CORE_RGA2E_MASK       (0x1U << VOCRU_VOSOFTRST_CON00_RESETN_CORE_RGA2E_SHIFT)      /* 0x00000200 */
#define VOCRU_VOSOFTRST_CON00_PRESETN_VO_GRF_SHIFT         (10U)
#define VOCRU_VOSOFTRST_CON00_PRESETN_VO_GRF_MASK          (0x1U << VOCRU_VOSOFTRST_CON00_PRESETN_VO_GRF_SHIFT)         /* 0x00000400 */
#define VOCRU_VOSOFTRST_CON00_ARESETN_VOP_BIU_SHIFT        (12U)
#define VOCRU_VOSOFTRST_CON00_ARESETN_VOP_BIU_MASK         (0x1U << VOCRU_VOSOFTRST_CON00_ARESETN_VOP_BIU_SHIFT)        /* 0x00001000 */
#define VOCRU_VOSOFTRST_CON00_HRESETN_VOP_SHIFT            (13U)
#define VOCRU_VOSOFTRST_CON00_HRESETN_VOP_MASK             (0x1U << VOCRU_VOSOFTRST_CON00_HRESETN_VOP_SHIFT)            /* 0x00002000 */
#define VOCRU_VOSOFTRST_CON00_DRESETN_VOP_SHIFT            (14U)
#define VOCRU_VOSOFTRST_CON00_DRESETN_VOP_MASK             (0x1U << VOCRU_VOSOFTRST_CON00_DRESETN_VOP_SHIFT)            /* 0x00004000 */
#define VOCRU_VOSOFTRST_CON00_ARESETN_VOP_SHIFT            (15U)
#define VOCRU_VOSOFTRST_CON00_ARESETN_VOP_MASK             (0x1U << VOCRU_VOSOFTRST_CON00_ARESETN_VOP_SHIFT)            /* 0x00008000 */
/* VOSOFTRST_CON01 */
#define VOCRU_VOSOFTRST_CON01_OFFSET                       (0xA04U)
#define VOCRU_VOSOFTRST_CON01_PRESETN_MAC_BIU_SHIFT        (6U)
#define VOCRU_VOSOFTRST_CON01_PRESETN_MAC_BIU_MASK         (0x1U << VOCRU_VOSOFTRST_CON01_PRESETN_MAC_BIU_SHIFT)        /* 0x00000040 */
#define VOCRU_VOSOFTRST_CON01_ARESETN_MAC_BIU_SHIFT        (7U)
#define VOCRU_VOSOFTRST_CON01_ARESETN_MAC_BIU_MASK         (0x1U << VOCRU_VOSOFTRST_CON01_ARESETN_MAC_BIU_SHIFT)        /* 0x00000080 */
#define VOCRU_VOSOFTRST_CON01_ARESETN_MAC_SHIFT            (8U)
#define VOCRU_VOSOFTRST_CON01_ARESETN_MAC_MASK             (0x1U << VOCRU_VOSOFTRST_CON01_ARESETN_MAC_SHIFT)            /* 0x00000100 */
#define VOCRU_VOSOFTRST_CON01_PRESETN_VO_SGRF_SHIFT        (12U)
#define VOCRU_VOSOFTRST_CON01_PRESETN_VO_SGRF_MASK         (0x1U << VOCRU_VOSOFTRST_CON01_PRESETN_VO_SGRF_SHIFT)        /* 0x00001000 */
#define VOCRU_VOSOFTRST_CON01_PRESETN_VO_CRU_SHIFT         (13U)
#define VOCRU_VOSOFTRST_CON01_PRESETN_VO_CRU_MASK          (0x1U << VOCRU_VOSOFTRST_CON01_PRESETN_VO_CRU_SHIFT)         /* 0x00002000 */
#define VOCRU_VOSOFTRST_CON01_HRESETN_SDIO_SHIFT           (15U)
#define VOCRU_VOSOFTRST_CON01_HRESETN_SDIO_MASK            (0x1U << VOCRU_VOSOFTRST_CON01_HRESETN_SDIO_SHIFT)           /* 0x00008000 */
/* VOSOFTRST_CON02 */
#define VOCRU_VOSOFTRST_CON02_OFFSET                       (0xA08U)
#define VOCRU_VOSOFTRST_CON02_PRESETN_TSADC_SHIFT          (0U)
#define VOCRU_VOSOFTRST_CON02_PRESETN_TSADC_MASK           (0x1U << VOCRU_VOSOFTRST_CON02_PRESETN_TSADC_SHIFT)          /* 0x00000001 */
#define VOCRU_VOSOFTRST_CON02_RESETN_TSADC_SHIFT           (1U)
#define VOCRU_VOSOFTRST_CON02_RESETN_TSADC_MASK            (0x1U << VOCRU_VOSOFTRST_CON02_RESETN_TSADC_SHIFT)           /* 0x00000002 */
#define VOCRU_VOSOFTRST_CON02_PRESETN_OTPC_NS_SHIFT        (3U)
#define VOCRU_VOSOFTRST_CON02_PRESETN_OTPC_NS_MASK         (0x1U << VOCRU_VOSOFTRST_CON02_PRESETN_OTPC_NS_SHIFT)        /* 0x00000008 */
#define VOCRU_VOSOFTRST_CON02_RESETN_SBPI_OTPC_NS_SHIFT    (5U)
#define VOCRU_VOSOFTRST_CON02_RESETN_SBPI_OTPC_NS_MASK     (0x1U << VOCRU_VOSOFTRST_CON02_RESETN_SBPI_OTPC_NS_SHIFT)    /* 0x00000020 */
#define VOCRU_VOSOFTRST_CON02_RESETN_USER_OTPC_NS_SHIFT    (6U)
#define VOCRU_VOSOFTRST_CON02_RESETN_USER_OTPC_NS_MASK     (0x1U << VOCRU_VOSOFTRST_CON02_RESETN_USER_OTPC_NS_SHIFT)    /* 0x00000040 */
#define VOCRU_VOSOFTRST_CON02_PRESETN_OTPC_S_SHIFT         (7U)
#define VOCRU_VOSOFTRST_CON02_PRESETN_OTPC_S_MASK          (0x1U << VOCRU_VOSOFTRST_CON02_PRESETN_OTPC_S_SHIFT)         /* 0x00000080 */
#define VOCRU_VOSOFTRST_CON02_RESETN_SBPI_OTPC_S_SHIFT     (9U)
#define VOCRU_VOSOFTRST_CON02_RESETN_SBPI_OTPC_S_MASK      (0x1U << VOCRU_VOSOFTRST_CON02_RESETN_SBPI_OTPC_S_SHIFT)     /* 0x00000200 */
#define VOCRU_VOSOFTRST_CON02_RESETN_USER_OTPC_S_SHIFT     (10U)
#define VOCRU_VOSOFTRST_CON02_RESETN_USER_OTPC_S_MASK      (0x1U << VOCRU_VOSOFTRST_CON02_RESETN_USER_OTPC_S_SHIFT)     /* 0x00000400 */
#define VOCRU_VOSOFTRST_CON02_RESETN_OTPC_ARB_SHIFT        (11U)
#define VOCRU_VOSOFTRST_CON02_RESETN_OTPC_ARB_MASK         (0x1U << VOCRU_VOSOFTRST_CON02_RESETN_OTPC_ARB_SHIFT)        /* 0x00000800 */
#define VOCRU_VOSOFTRST_CON02_RESETN_MACPHY_SHIFT          (13U)
#define VOCRU_VOSOFTRST_CON02_RESETN_MACPHY_MASK           (0x1U << VOCRU_VOSOFTRST_CON02_RESETN_MACPHY_SHIFT)          /* 0x00002000 */
#define VOCRU_VOSOFTRST_CON02_PRESETN_OTP_MASK_SHIFT       (14U)
#define VOCRU_VOSOFTRST_CON02_PRESETN_OTP_MASK_MASK        (0x1U << VOCRU_VOSOFTRST_CON02_PRESETN_OTP_MASK_SHIFT)       /* 0x00004000 */
#define VOCRU_VOSOFTRST_CON02_RESETN_PMC_OTP_SHIFT         (15U)
#define VOCRU_VOSOFTRST_CON02_RESETN_PMC_OTP_MASK          (0x1U << VOCRU_VOSOFTRST_CON02_RESETN_PMC_OTP_SHIFT)         /* 0x00008000 */
/* VOSOFTRST_CON03 */
#define VOCRU_VOSOFTRST_CON03_OFFSET                       (0xA0CU)
#define VOCRU_VOSOFTRST_CON03_PRESETN_GPIO2_SHIFT          (0U)
#define VOCRU_VOSOFTRST_CON03_PRESETN_GPIO2_MASK           (0x1U << VOCRU_VOSOFTRST_CON03_PRESETN_GPIO2_SHIFT)          /* 0x00000001 */
#define VOCRU_VOSOFTRST_CON03_DBRESETN_GPIO2_SHIFT         (1U)
#define VOCRU_VOSOFTRST_CON03_DBRESETN_GPIO2_MASK          (0x1U << VOCRU_VOSOFTRST_CON03_DBRESETN_GPIO2_SHIFT)         /* 0x00000002 */
#define VOCRU_VOSOFTRST_CON03_PRESETN_VO_IOC_SHIFT         (2U)
#define VOCRU_VOSOFTRST_CON03_PRESETN_VO_IOC_MASK          (0x1U << VOCRU_VOSOFTRST_CON03_PRESETN_VO_IOC_SHIFT)         /* 0x00000004 */
/*****************************************DDRCRU*****************************************/
/* DDRCLKSEL_CON00 */
#define DDRCRU_DDRCLKSEL_CON00_OFFSET                      (0x300U)
#define DDRCRU_DDRCLKSEL_CON00_PCLK_DDR_ROOT_SEL_SHIFT     (0U)
#define DDRCRU_DDRCLKSEL_CON00_PCLK_DDR_ROOT_SEL_MASK      (0x3U << DDRCRU_DDRCLKSEL_CON00_PCLK_DDR_ROOT_SEL_SHIFT)     /* 0x00000003 */
#define DDRCRU_DDRCLKSEL_CON00_ACLK_DDR_ROOT_SEL_SHIFT     (8U)
#define DDRCRU_DDRCLKSEL_CON00_ACLK_DDR_ROOT_SEL_MASK      (0x3U << DDRCRU_DDRCLKSEL_CON00_ACLK_DDR_ROOT_SEL_SHIFT)     /* 0x00000300 */
#define DDRCRU_DDRCLKSEL_CON00_CLK_TESTOUT_DDR2PERI_DIV_SHIFT (10U)
#define DDRCRU_DDRCLKSEL_CON00_CLK_TESTOUT_DDR2PERI_DIV_MASK (0x1FU << DDRCRU_DDRCLKSEL_CON00_CLK_TESTOUT_DDR2PERI_DIV_SHIFT) /* 0x00007C00 */
#define DDRCRU_DDRCLKSEL_CON00_CLK_TESTOUT_DDR2PERI_SEL_SHIFT (15U)
#define DDRCRU_DDRCLKSEL_CON00_CLK_TESTOUT_DDR2PERI_SEL_MASK (0x1U << DDRCRU_DDRCLKSEL_CON00_CLK_TESTOUT_DDR2PERI_SEL_SHIFT) /* 0x00008000 */
/* DDRGATE_CON00 */
#define DDRCRU_DDRGATE_CON00_OFFSET                        (0x800U)
#define DDRCRU_DDRGATE_CON00_PCLK_DDR_ROOT_EN_SHIFT        (0U)
#define DDRCRU_DDRGATE_CON00_PCLK_DDR_ROOT_EN_MASK         (0x1U << DDRCRU_DDRGATE_CON00_PCLK_DDR_ROOT_EN_SHIFT)        /* 0x00000001 */
#define DDRCRU_DDRGATE_CON00_PCLK_DDR_BIU_EN_SHIFT         (2U)
#define DDRCRU_DDRGATE_CON00_PCLK_DDR_BIU_EN_MASK          (0x1U << DDRCRU_DDRGATE_CON00_PCLK_DDR_BIU_EN_SHIFT)         /* 0x00000004 */
#define DDRCRU_DDRGATE_CON00_PCLK_DDRC_EN_SHIFT            (5U)
#define DDRCRU_DDRGATE_CON00_PCLK_DDRC_EN_MASK             (0x1U << DDRCRU_DDRGATE_CON00_PCLK_DDRC_EN_SHIFT)            /* 0x00000020 */
#define DDRCRU_DDRGATE_CON00_PCLK_DDRMON_EN_SHIFT          (7U)
#define DDRCRU_DDRGATE_CON00_PCLK_DDRMON_EN_MASK           (0x1U << DDRCRU_DDRGATE_CON00_PCLK_DDRMON_EN_SHIFT)          /* 0x00000080 */
#define DDRCRU_DDRGATE_CON00_CLK_TIMER_DDRMON_EN_SHIFT     (8U)
#define DDRCRU_DDRGATE_CON00_CLK_TIMER_DDRMON_EN_MASK      (0x1U << DDRCRU_DDRGATE_CON00_CLK_TIMER_DDRMON_EN_SHIFT)     /* 0x00000100 */
#define DDRCRU_DDRGATE_CON00_PCLK_DFICTRL_EN_SHIFT         (11U)
#define DDRCRU_DDRGATE_CON00_PCLK_DFICTRL_EN_MASK          (0x1U << DDRCRU_DDRGATE_CON00_PCLK_DFICTRL_EN_SHIFT)         /* 0x00000800 */
#define DDRCRU_DDRGATE_CON00_ACLK_DDR_ROOT_EN_SHIFT        (12U)
#define DDRCRU_DDRGATE_CON00_ACLK_DDR_ROOT_EN_MASK         (0x1U << DDRCRU_DDRGATE_CON00_ACLK_DDR_ROOT_EN_SHIFT)        /* 0x00001000 */
#define DDRCRU_DDRGATE_CON00_ACLK_SYS_SHRM_EN_SHIFT        (13U)
#define DDRCRU_DDRGATE_CON00_ACLK_SYS_SHRM_EN_MASK         (0x1U << DDRCRU_DDRGATE_CON00_ACLK_SYS_SHRM_EN_SHIFT)        /* 0x00002000 */
#define DDRCRU_DDRGATE_CON00_ACLK_SHRM_NIU_EN_SHIFT        (14U)
#define DDRCRU_DDRGATE_CON00_ACLK_SHRM_NIU_EN_MASK         (0x1U << DDRCRU_DDRGATE_CON00_ACLK_SHRM_NIU_EN_SHIFT)        /* 0x00004000 */
#define DDRCRU_DDRGATE_CON00_PCLK_DDR_GRF_EN_SHIFT         (15U)
#define DDRCRU_DDRGATE_CON00_PCLK_DDR_GRF_EN_MASK          (0x1U << DDRCRU_DDRGATE_CON00_PCLK_DDR_GRF_EN_SHIFT)         /* 0x00008000 */
/* DDRGATE_CON01 */
#define DDRCRU_DDRGATE_CON01_OFFSET                        (0x804U)
#define DDRCRU_DDRGATE_CON01_PCLK_DDR_CRU_EN_SHIFT         (0U)
#define DDRCRU_DDRGATE_CON01_PCLK_DDR_CRU_EN_MASK          (0x1U << DDRCRU_DDRGATE_CON01_PCLK_DDR_CRU_EN_SHIFT)         /* 0x00000001 */
#define DDRCRU_DDRGATE_CON01_CLK_DDR_TESTOUT_EN_SHIFT      (1U)
#define DDRCRU_DDRGATE_CON01_CLK_DDR_TESTOUT_EN_MASK       (0x1U << DDRCRU_DDRGATE_CON01_CLK_DDR_TESTOUT_EN_SHIFT)      /* 0x00000002 */
#define DDRCRU_DDRGATE_CON01_PCLK_DDR_HWLP_EN_SHIFT        (2U)
#define DDRCRU_DDRGATE_CON01_PCLK_DDR_HWLP_EN_MASK         (0x1U << DDRCRU_DDRGATE_CON01_PCLK_DDR_HWLP_EN_SHIFT)        /* 0x00000004 */
#define DDRCRU_DDRGATE_CON01_PCLK_DDRPHY_EN_SHIFT          (3U)
#define DDRCRU_DDRGATE_CON01_PCLK_DDRPHY_EN_MASK           (0x1U << DDRCRU_DDRGATE_CON01_PCLK_DDRPHY_EN_SHIFT)          /* 0x00000008 */
#define DDRCRU_DDRGATE_CON01_MBIST_CLK_CLK_CORE_DDRC_EN_SHIFT (5U)
#define DDRCRU_DDRGATE_CON01_MBIST_CLK_CLK_CORE_DDRC_EN_MASK (0x1U << DDRCRU_DDRGATE_CON01_MBIST_CLK_CLK_CORE_DDRC_EN_SHIFT) /* 0x00000020 */
#define DDRCRU_DDRGATE_CON01_MBIST_CLK_CLK_DDR_BIUMEM_EN_SHIFT (6U)
#define DDRCRU_DDRGATE_CON01_MBIST_CLK_CLK_DDR_BIUMEM_EN_MASK (0x1U << DDRCRU_DDRGATE_CON01_MBIST_CLK_CLK_DDR_BIUMEM_EN_SHIFT) /* 0x00000040 */
/* DDRSOFTRST_CON00 */
#define DDRCRU_DDRSOFTRST_CON00_OFFSET                     (0xA00U)
#define DDRCRU_DDRSOFTRST_CON00_PRESETN_DDR_BIU_SHIFT      (2U)
#define DDRCRU_DDRSOFTRST_CON00_PRESETN_DDR_BIU_MASK       (0x1U << DDRCRU_DDRSOFTRST_CON00_PRESETN_DDR_BIU_SHIFT)      /* 0x00000004 */
#define DDRCRU_DDRSOFTRST_CON00_PRESETN_DDRC_SHIFT         (5U)
#define DDRCRU_DDRSOFTRST_CON00_PRESETN_DDRC_MASK          (0x1U << DDRCRU_DDRSOFTRST_CON00_PRESETN_DDRC_SHIFT)         /* 0x00000020 */
#define DDRCRU_DDRSOFTRST_CON00_PRESETN_DDRMON_SHIFT       (7U)
#define DDRCRU_DDRSOFTRST_CON00_PRESETN_DDRMON_MASK        (0x1U << DDRCRU_DDRSOFTRST_CON00_PRESETN_DDRMON_SHIFT)       /* 0x00000080 */
#define DDRCRU_DDRSOFTRST_CON00_RESETN_TIMER_DDRMON_SHIFT  (8U)
#define DDRCRU_DDRSOFTRST_CON00_RESETN_TIMER_DDRMON_MASK   (0x1U << DDRCRU_DDRSOFTRST_CON00_RESETN_TIMER_DDRMON_SHIFT)  /* 0x00000100 */
#define DDRCRU_DDRSOFTRST_CON00_PRESETN_DFICTRL_SHIFT      (11U)
#define DDRCRU_DDRSOFTRST_CON00_PRESETN_DFICTRL_MASK       (0x1U << DDRCRU_DDRSOFTRST_CON00_PRESETN_DFICTRL_SHIFT)      /* 0x00000800 */
#define DDRCRU_DDRSOFTRST_CON00_ARESETN_SYS_SHRM_SHIFT     (13U)
#define DDRCRU_DDRSOFTRST_CON00_ARESETN_SYS_SHRM_MASK      (0x1U << DDRCRU_DDRSOFTRST_CON00_ARESETN_SYS_SHRM_SHIFT)     /* 0x00002000 */
#define DDRCRU_DDRSOFTRST_CON00_ARESETN_SHRM_NIU_SHIFT     (14U)
#define DDRCRU_DDRSOFTRST_CON00_ARESETN_SHRM_NIU_MASK      (0x1U << DDRCRU_DDRSOFTRST_CON00_ARESETN_SHRM_NIU_SHIFT)     /* 0x00004000 */
#define DDRCRU_DDRSOFTRST_CON00_PRESETN_DDR_GRF_SHIFT      (15U)
#define DDRCRU_DDRSOFTRST_CON00_PRESETN_DDR_GRF_MASK       (0x1U << DDRCRU_DDRSOFTRST_CON00_PRESETN_DDR_GRF_SHIFT)      /* 0x00008000 */
/* DDRSOFTRST_CON01 */
#define DDRCRU_DDRSOFTRST_CON01_OFFSET                     (0xA04U)
#define DDRCRU_DDRSOFTRST_CON01_PRESETN_DDR_CRU_SHIFT      (0U)
#define DDRCRU_DDRSOFTRST_CON01_PRESETN_DDR_CRU_MASK       (0x1U << DDRCRU_DDRSOFTRST_CON01_PRESETN_DDR_CRU_SHIFT)      /* 0x00000001 */
#define DDRCRU_DDRSOFTRST_CON01_PRESETN_DDR_HWLP_SHIFT     (2U)
#define DDRCRU_DDRSOFTRST_CON01_PRESETN_DDR_HWLP_MASK      (0x1U << DDRCRU_DDRSOFTRST_CON01_PRESETN_DDR_HWLP_SHIFT)     /* 0x00000004 */
#define DDRCRU_DDRSOFTRST_CON01_PRESETN_DDRPHY_SHIFT       (3U)
#define DDRCRU_DDRSOFTRST_CON01_PRESETN_DDRPHY_MASK        (0x1U << DDRCRU_DDRSOFTRST_CON01_PRESETN_DDRPHY_SHIFT)       /* 0x00000008 */
/***************************************SUBDDRCRU****************************************/
/* SUBDDRMODE_CON00 */
#define SUBDDRCRU_SUBDDRMODE_CON00_OFFSET                  (0x280U)
#define SUBDDRCRU_SUBDDRMODE_CON00_CLK_DPLL_MODE_SHIFT     (0U)
#define SUBDDRCRU_SUBDDRMODE_CON00_CLK_DPLL_MODE_MASK      (0x3U << SUBDDRCRU_SUBDDRMODE_CON00_CLK_DPLL_MODE_SHIFT)     /* 0x00000003 */
/* SUBDDRCLKSEL_CON00 */
#define SUBDDRCRU_SUBDDRCLKSEL_CON00_OFFSET                (0x300U)
#define SUBDDRCRU_SUBDDRCLKSEL_CON00_CLK_CORE_DDRC_SRC_DIV_SHIFT (0U)
#define SUBDDRCRU_SUBDDRCLKSEL_CON00_CLK_CORE_DDRC_SRC_DIV_MASK (0x1FU << SUBDDRCRU_SUBDDRCLKSEL_CON00_CLK_CORE_DDRC_SRC_DIV_SHIFT) /* 0x0000001F */
#define SUBDDRCRU_SUBDDRCLKSEL_CON00_CLK_CORE_DDRC_SRC_SEL_SHIFT (5U)
#define SUBDDRCRU_SUBDDRCLKSEL_CON00_CLK_CORE_DDRC_SRC_SEL_MASK (0x1U << SUBDDRCRU_SUBDDRCLKSEL_CON00_CLK_CORE_DDRC_SRC_SEL_SHIFT) /* 0x00000020 */
/* SUBDDRGATE_CON00 */
#define SUBDDRCRU_SUBDDRGATE_CON00_OFFSET                  (0x800U)
#define SUBDDRCRU_SUBDDRGATE_CON00_CLK_MSCH_BIU_EN_SHIFT   (0U)
#define SUBDDRCRU_SUBDDRGATE_CON00_CLK_MSCH_BIU_EN_MASK    (0x1U << SUBDDRCRU_SUBDDRGATE_CON00_CLK_MSCH_BIU_EN_SHIFT)   /* 0x00000001 */
#define SUBDDRCRU_SUBDDRGATE_CON00_ACLK_DDRC_EN_SHIFT      (1U)
#define SUBDDRCRU_SUBDDRGATE_CON00_ACLK_DDRC_EN_MASK       (0x1U << SUBDDRCRU_SUBDDRGATE_CON00_ACLK_DDRC_EN_SHIFT)      /* 0x00000002 */
#define SUBDDRCRU_SUBDDRGATE_CON00_CLK_CORE_DDRC_SRC_EN_SHIFT (2U)
#define SUBDDRCRU_SUBDDRGATE_CON00_CLK_CORE_DDRC_SRC_EN_MASK (0x1U << SUBDDRCRU_SUBDDRGATE_CON00_CLK_CORE_DDRC_SRC_EN_SHIFT) /* 0x00000004 */
#define SUBDDRCRU_SUBDDRGATE_CON00_CLK_CORE_DDRC_EN_SHIFT  (3U)
#define SUBDDRCRU_SUBDDRGATE_CON00_CLK_CORE_DDRC_EN_MASK   (0x1U << SUBDDRCRU_SUBDDRGATE_CON00_CLK_CORE_DDRC_EN_SHIFT)  /* 0x00000008 */
#define SUBDDRCRU_SUBDDRGATE_CON00_CLK_DDRMON_EN_SHIFT     (4U)
#define SUBDDRCRU_SUBDDRGATE_CON00_CLK_DDRMON_EN_MASK      (0x1U << SUBDDRCRU_SUBDDRGATE_CON00_CLK_DDRMON_EN_SHIFT)     /* 0x00000010 */
#define SUBDDRCRU_SUBDDRGATE_CON00_CLK_DFICTRL_EN_SHIFT    (5U)
#define SUBDDRCRU_SUBDDRGATE_CON00_CLK_DFICTRL_EN_MASK     (0x1U << SUBDDRCRU_SUBDDRGATE_CON00_CLK_DFICTRL_EN_SHIFT)    /* 0x00000020 */
#define SUBDDRCRU_SUBDDRGATE_CON00_CLK_DDR_PHY_EN_SHIFT    (6U)
#define SUBDDRCRU_SUBDDRGATE_CON00_CLK_DDR_PHY_EN_MASK     (0x1U << SUBDDRCRU_SUBDDRGATE_CON00_CLK_DDR_PHY_EN_SHIFT)    /* 0x00000040 */
/* SUBDDRSOFTRST_CON00 */
#define SUBDDRCRU_SUBDDRSOFTRST_CON00_OFFSET               (0xA00U)
#define SUBDDRCRU_SUBDDRSOFTRST_CON00_RESETN_MSCH_BIU_SHIFT (0U)
#define SUBDDRCRU_SUBDDRSOFTRST_CON00_RESETN_MSCH_BIU_MASK (0x1U << SUBDDRCRU_SUBDDRSOFTRST_CON00_RESETN_MSCH_BIU_SHIFT) /* 0x00000001 */
#define SUBDDRCRU_SUBDDRSOFTRST_CON00_ARESETN_DDRC_SHIFT   (1U)
#define SUBDDRCRU_SUBDDRSOFTRST_CON00_ARESETN_DDRC_MASK    (0x1U << SUBDDRCRU_SUBDDRSOFTRST_CON00_ARESETN_DDRC_SHIFT)   /* 0x00000002 */
#define SUBDDRCRU_SUBDDRSOFTRST_CON00_RESETN_CORE_DDRC_SHIFT (3U)
#define SUBDDRCRU_SUBDDRSOFTRST_CON00_RESETN_CORE_DDRC_MASK (0x1U << SUBDDRCRU_SUBDDRSOFTRST_CON00_RESETN_CORE_DDRC_SHIFT) /* 0x00000008 */
#define SUBDDRCRU_SUBDDRSOFTRST_CON00_RESETN_DDRMON_SHIFT  (4U)
#define SUBDDRCRU_SUBDDRSOFTRST_CON00_RESETN_DDRMON_MASK   (0x1U << SUBDDRCRU_SUBDDRSOFTRST_CON00_RESETN_DDRMON_SHIFT)  /* 0x00000010 */
#define SUBDDRCRU_SUBDDRSOFTRST_CON00_RESETN_DFICTRL_SHIFT (5U)
#define SUBDDRCRU_SUBDDRSOFTRST_CON00_RESETN_DFICTRL_MASK  (0x1U << SUBDDRCRU_SUBDDRSOFTRST_CON00_RESETN_DFICTRL_SHIFT) /* 0x00000020 */
#define SUBDDRCRU_SUBDDRSOFTRST_CON00_RESETN_DDR_PHY_SHIFT (6U)
#define SUBDDRCRU_SUBDDRSOFTRST_CON00_RESETN_DDR_PHY_MASK  (0x1U << SUBDDRCRU_SUBDDRSOFTRST_CON00_RESETN_DDR_PHY_SHIFT) /* 0x00000040 */
/*****************************************SARADC*****************************************/
/* CONV_CON */
#define SARADC_CONV_CON_OFFSET                             (0x0U)
#define SARADC_CONV_CON_CHANNEL_SEL_SHIFT                  (0U)
#define SARADC_CONV_CON_CHANNEL_SEL_MASK                   (0xFU << SARADC_CONV_CON_CHANNEL_SEL_SHIFT)                  /* 0x0000000F */
#define SARADC_CONV_CON_START_ADC_SHIFT                    (4U)
#define SARADC_CONV_CON_START_ADC_MASK                     (0x1U << SARADC_CONV_CON_START_ADC_SHIFT)                    /* 0x00000010 */
#define SARADC_CONV_CON_SINGLE_PD_MODE_SHIFT               (5U)
#define SARADC_CONV_CON_SINGLE_PD_MODE_MASK                (0x1U << SARADC_CONV_CON_SINGLE_PD_MODE_SHIFT)               /* 0x00000020 */
#define SARADC_CONV_CON_AUTO_CHANNEL_MODE_SHIFT            (6U)
#define SARADC_CONV_CON_AUTO_CHANNEL_MODE_MASK             (0x1U << SARADC_CONV_CON_AUTO_CHANNEL_MODE_SHIFT)            /* 0x00000040 */
#define SARADC_CONV_CON_END_CONV_SHIFT                     (7U)
#define SARADC_CONV_CON_END_CONV_MASK                      (0x1U << SARADC_CONV_CON_END_CONV_SHIFT)                     /* 0x00000080 */
#define SARADC_CONV_CON_AS_PD_MODE_SHIFT                   (8U)
#define SARADC_CONV_CON_AS_PD_MODE_MASK                    (0x1U << SARADC_CONV_CON_AS_PD_MODE_SHIFT)                   /* 0x00000100 */
#define SARADC_CONV_CON_INT_LOCK_SHIFT                     (9U)
#define SARADC_CONV_CON_INT_LOCK_MASK                      (0x1U << SARADC_CONV_CON_INT_LOCK_SHIFT)                     /* 0x00000200 */
/* T_PD_SOC */
#define SARADC_T_PD_SOC_OFFSET                             (0x4U)
#define SARADC_T_PD_SOC_T_PD_SOC_SHIFT                     (13U)
#define SARADC_T_PD_SOC_T_PD_SOC_MASK                      (0xFFU << SARADC_T_PD_SOC_T_PD_SOC_SHIFT)                    /* 0x001FE000 */
/* T_AS_SOC */
#define SARADC_T_AS_SOC_OFFSET                             (0x8U)
#define SARADC_T_AS_SOC_T_AS_SOC_SHIFT                     (0U)
#define SARADC_T_AS_SOC_T_AS_SOC_MASK                      (0xFFFFFFFFU << SARADC_T_AS_SOC_T_AS_SOC_SHIFT)              /* 0xFFFFFFFF */
/* T_DAS_SOC */
#define SARADC_T_DAS_SOC_OFFSET                            (0xCU)
#define SARADC_T_DAS_SOC_T_DAS_SOC_SHIFT                   (0U)
#define SARADC_T_DAS_SOC_T_DAS_SOC_MASK                    (0xFFFFFFFFU << SARADC_T_DAS_SOC_T_DAS_SOC_SHIFT)            /* 0xFFFFFFFF */
/* T_SEL_SOC */
#define SARADC_T_SEL_SOC_OFFSET                            (0x10U)
#define SARADC_T_SEL_SOC_T_SEL_SOC_SHIFT                   (0U)
#define SARADC_T_SEL_SOC_T_SEL_SOC_MASK                    (0xFFFFU << SARADC_T_SEL_SOC_T_SEL_SOC_SHIFT)                /* 0x0000FFFF */
/* HIGH_COMP0 */
#define SARADC_HIGH_COMP0_OFFSET                           (0x14U)
#define SARADC_HIGH_COMP0_HIGH_COMP0_SHIFT                 (0U)
#define SARADC_HIGH_COMP0_HIGH_COMP0_MASK                  (0xFFFU << SARADC_HIGH_COMP0_HIGH_COMP0_SHIFT)               /* 0x00000FFF */
/* HIGH_COMP1 */
#define SARADC_HIGH_COMP1_OFFSET                           (0x18U)
#define SARADC_HIGH_COMP1_HIGH_COMP1_SHIFT                 (0U)
#define SARADC_HIGH_COMP1_HIGH_COMP1_MASK                  (0xFFFU << SARADC_HIGH_COMP1_HIGH_COMP1_SHIFT)               /* 0x00000FFF */
/* LOW_COMP0 */
#define SARADC_LOW_COMP0_OFFSET                            (0x54U)
#define SARADC_LOW_COMP0_LOW_COMP0_SHIFT                   (0U)
#define SARADC_LOW_COMP0_LOW_COMP0_MASK                    (0xFFFU << SARADC_LOW_COMP0_LOW_COMP0_SHIFT)                 /* 0x00000FFF */
/* LOW_COMP1 */
#define SARADC_LOW_COMP1_OFFSET                            (0x58U)
#define SARADC_LOW_COMP1_LOW_COMP1_SHIFT                   (0U)
#define SARADC_LOW_COMP1_LOW_COMP1_MASK                    (0xFFFU << SARADC_LOW_COMP1_LOW_COMP1_SHIFT)                 /* 0x00000FFF */
/* DEBOUNCE */
#define SARADC_DEBOUNCE_OFFSET                             (0x94U)
#define SARADC_DEBOUNCE_DEBOUNCE_SHIFT                     (0U)
#define SARADC_DEBOUNCE_DEBOUNCE_MASK                      (0xFFU << SARADC_DEBOUNCE_DEBOUNCE_SHIFT)                    /* 0x000000FF */
/* HT_INT_EN */
#define SARADC_HT_INT_EN_OFFSET                            (0x98U)
#define SARADC_HT_INT_EN_HT_INT_EN0_SHIFT                  (0U)
#define SARADC_HT_INT_EN_HT_INT_EN0_MASK                   (0x1U << SARADC_HT_INT_EN_HT_INT_EN0_SHIFT)                  /* 0x00000001 */
#define SARADC_HT_INT_EN_HT_INT_EN1_SHIFT                  (1U)
#define SARADC_HT_INT_EN_HT_INT_EN1_MASK                   (0x1U << SARADC_HT_INT_EN_HT_INT_EN1_SHIFT)                  /* 0x00000002 */
/* LT_INT_EN */
#define SARADC_LT_INT_EN_OFFSET                            (0x9CU)
#define SARADC_LT_INT_EN_LT_INT_EN0_SHIFT                  (0U)
#define SARADC_LT_INT_EN_LT_INT_EN0_MASK                   (0x1U << SARADC_LT_INT_EN_LT_INT_EN0_SHIFT)                  /* 0x00000001 */
#define SARADC_LT_INT_EN_LT_INT_EN1_SHIFT                  (1U)
#define SARADC_LT_INT_EN_LT_INT_EN1_MASK                   (0x1U << SARADC_LT_INT_EN_LT_INT_EN1_SHIFT)                  /* 0x00000002 */
/* MT_INT_EN */
#define SARADC_MT_INT_EN_OFFSET                            (0x100U)
#define SARADC_MT_INT_EN_MT_INT_EN0_SHIFT                  (0U)
#define SARADC_MT_INT_EN_MT_INT_EN0_MASK                   (0x1U << SARADC_MT_INT_EN_MT_INT_EN0_SHIFT)                  /* 0x00000001 */
#define SARADC_MT_INT_EN_MT_INT_EN1_SHIFT                  (1U)
#define SARADC_MT_INT_EN_MT_INT_EN1_MASK                   (0x1U << SARADC_MT_INT_EN_MT_INT_EN1_SHIFT)                  /* 0x00000002 */
/* END_INT_EN */
#define SARADC_END_INT_EN_OFFSET                           (0x104U)
#define SARADC_END_INT_EN_END_INT_EN_SHIFT                 (0U)
#define SARADC_END_INT_EN_END_INT_EN_MASK                  (0x1U << SARADC_END_INT_EN_END_INT_EN_SHIFT)                 /* 0x00000001 */
/* STATUS */
#define SARADC_STATUS_OFFSET                               (0x10CU)
#define SARADC_STATUS                                      (0x2U)
#define SARADC_STATUS_CONV_ST_SHIFT                        (0U)
#define SARADC_STATUS_CONV_ST_MASK                         (0x1U << SARADC_STATUS_CONV_ST_SHIFT)                        /* 0x00000001 */
#define SARADC_STATUS_PD_SHIFT                             (1U)
#define SARADC_STATUS_PD_MASK                              (0x1U << SARADC_STATUS_PD_SHIFT)                             /* 0x00000002 */
#define SARADC_STATUS_SEL_SHIFT                            (2U)
#define SARADC_STATUS_SEL_MASK                             (0xFU << SARADC_STATUS_SEL_SHIFT)                            /* 0x0000003C */
/* END_INT_ST */
#define SARADC_END_INT_ST_OFFSET                           (0x110U)
#define SARADC_END_INT_ST_END_INT_ST_SHIFT                 (0U)
#define SARADC_END_INT_ST_END_INT_ST_MASK                  (0x1U << SARADC_END_INT_ST_END_INT_ST_SHIFT)                 /* 0x00000001 */
/* HT_INT_ST */
#define SARADC_HT_INT_ST_OFFSET                            (0x114U)
#define SARADC_HT_INT_ST_HT_INT_ST0_SHIFT                  (0U)
#define SARADC_HT_INT_ST_HT_INT_ST0_MASK                   (0x1U << SARADC_HT_INT_ST_HT_INT_ST0_SHIFT)                  /* 0x00000001 */
#define SARADC_HT_INT_ST_HT_INT_ST1_SHIFT                  (1U)
#define SARADC_HT_INT_ST_HT_INT_ST1_MASK                   (0x1U << SARADC_HT_INT_ST_HT_INT_ST1_SHIFT)                  /* 0x00000002 */
/* LT_INT_ST */
#define SARADC_LT_INT_ST_OFFSET                            (0x118U)
#define SARADC_LT_INT_ST_LT_INT_ST0_SHIFT                  (0U)
#define SARADC_LT_INT_ST_LT_INT_ST0_MASK                   (0x1U << SARADC_LT_INT_ST_LT_INT_ST0_SHIFT)                  /* 0x00000001 */
#define SARADC_LT_INT_ST_LT_INT_ST1_SHIFT                  (1U)
#define SARADC_LT_INT_ST_LT_INT_ST1_MASK                   (0x1U << SARADC_LT_INT_ST_LT_INT_ST1_SHIFT)                  /* 0x00000002 */
/* MT_INT_ST */
#define SARADC_MT_INT_ST_OFFSET                            (0x11CU)
#define SARADC_MT_INT_ST_MT_INT_ST0_SHIFT                  (0U)
#define SARADC_MT_INT_ST_MT_INT_ST0_MASK                   (0x1U << SARADC_MT_INT_ST_MT_INT_ST0_SHIFT)                  /* 0x00000001 */
#define SARADC_MT_INT_ST_MT_INT_ST1_SHIFT                  (1U)
#define SARADC_MT_INT_ST_MT_INT_ST1_MASK                   (0x1U << SARADC_MT_INT_ST_MT_INT_ST1_SHIFT)                  /* 0x00000002 */
/* DATA0 */
#define SARADC_DATA0_OFFSET                                (0x120U)
#define SARADC_DATA0                                       (0x0U)
#define SARADC_DATA0_DATA0_SHIFT                           (0U)
#define SARADC_DATA0_DATA0_MASK                            (0xFFFU << SARADC_DATA0_DATA0_SHIFT)                         /* 0x00000FFF */
/* DATA1 */
#define SARADC_DATA1_OFFSET                                (0x124U)
#define SARADC_DATA1                                       (0x0U)
#define SARADC_DATA1_DATA1_SHIFT                           (0U)
#define SARADC_DATA1_DATA1_MASK                            (0xFFFU << SARADC_DATA1_DATA1_SHIFT)                         /* 0x00000FFF */
/* AUTO_CH_EN */
#define SARADC_AUTO_CH_EN_OFFSET                           (0x160U)
#define SARADC_AUTO_CH_EN_AUTO_CH0_EN_SHIFT                (0U)
#define SARADC_AUTO_CH_EN_AUTO_CH0_EN_MASK                 (0x1U << SARADC_AUTO_CH_EN_AUTO_CH0_EN_SHIFT)                /* 0x00000001 */
#define SARADC_AUTO_CH_EN_AUTO_CH1_EN_SHIFT                (1U)
#define SARADC_AUTO_CH_EN_AUTO_CH1_EN_MASK                 (0x1U << SARADC_AUTO_CH_EN_AUTO_CH1_EN_SHIFT)                /* 0x00000002 */
/******************************************UART******************************************/
/* RBR */
#define UART_RBR_OFFSET                                    (0x0U)
#define UART_RBR                                           (0x0U)
#define UART_RBR_DATA_INPUT_SHIFT                          (0U)
#define UART_RBR_DATA_INPUT_MASK                           (0xFFU << UART_RBR_DATA_INPUT_SHIFT)                         /* 0x000000FF */
/* DLL */
#define UART_DLL_OFFSET                                    (0x0U)
#define UART_DLL_BAUD_RATE_DIVISOR_L_SHIFT                 (0U)
#define UART_DLL_BAUD_RATE_DIVISOR_L_MASK                  (0xFFU << UART_DLL_BAUD_RATE_DIVISOR_L_SHIFT)                /* 0x000000FF */
/* THR */
#define UART_THR_OFFSET                                    (0x0U)
#define UART_THR_DATA_OUTPUT_SHIFT                         (0U)
#define UART_THR_DATA_OUTPUT_MASK                          (0xFFU << UART_THR_DATA_OUTPUT_SHIFT)                        /* 0x000000FF */
/* DLH */
#define UART_DLH_OFFSET                                    (0x4U)
#define UART_DLH_BAUD_RATE_DIVISOR_H_SHIFT                 (0U)
#define UART_DLH_BAUD_RATE_DIVISOR_H_MASK                  (0xFFU << UART_DLH_BAUD_RATE_DIVISOR_H_SHIFT)                /* 0x000000FF */
/* IER */
#define UART_IER_OFFSET                                    (0x4U)
#define UART_IER_RECEIVE_DATA_AVAILABLE_INT_EN_SHIFT       (0U)
#define UART_IER_RECEIVE_DATA_AVAILABLE_INT_EN_MASK        (0x1U << UART_IER_RECEIVE_DATA_AVAILABLE_INT_EN_SHIFT)       /* 0x00000001 */
#define UART_IER_TRANS_HOLD_EMPTY_INT_EN_SHIFT             (1U)
#define UART_IER_TRANS_HOLD_EMPTY_INT_EN_MASK              (0x1U << UART_IER_TRANS_HOLD_EMPTY_INT_EN_SHIFT)             /* 0x00000002 */
#define UART_IER_RECEIVE_LINE_STATUS_INT_EN_SHIFT          (2U)
#define UART_IER_RECEIVE_LINE_STATUS_INT_EN_MASK           (0x1U << UART_IER_RECEIVE_LINE_STATUS_INT_EN_SHIFT)          /* 0x00000004 */
#define UART_IER_MODEM_STATUS_INT_EN_SHIFT                 (3U)
#define UART_IER_MODEM_STATUS_INT_EN_MASK                  (0x1U << UART_IER_MODEM_STATUS_INT_EN_SHIFT)                 /* 0x00000008 */
#define UART_IER_PROG_THRE_INT_EN_SHIFT                    (7U)
#define UART_IER_PROG_THRE_INT_EN_MASK                     (0x1U << UART_IER_PROG_THRE_INT_EN_SHIFT)                    /* 0x00000080 */
/* FCR */
#define UART_FCR_OFFSET                                    (0x8U)
#define UART_FCR_FIFO_EN_SHIFT                             (0U)
#define UART_FCR_FIFO_EN_MASK                              (0x1U << UART_FCR_FIFO_EN_SHIFT)                             /* 0x00000001 */
#define UART_FCR_RCVR_FIFO_RESET_SHIFT                     (1U)
#define UART_FCR_RCVR_FIFO_RESET_MASK                      (0x1U << UART_FCR_RCVR_FIFO_RESET_SHIFT)                     /* 0x00000002 */
#define UART_FCR_XMIT_FIFO_RESET_SHIFT                     (2U)
#define UART_FCR_XMIT_FIFO_RESET_MASK                      (0x1U << UART_FCR_XMIT_FIFO_RESET_SHIFT)                     /* 0x00000004 */
#define UART_FCR_DMA_MODE_SHIFT                            (3U)
#define UART_FCR_DMA_MODE_MASK                             (0x1U << UART_FCR_DMA_MODE_SHIFT)                            /* 0x00000008 */
#define UART_FCR_TX_EMPTY_TRIGGER_SHIFT                    (4U)
#define UART_FCR_TX_EMPTY_TRIGGER_MASK                     (0x3U << UART_FCR_TX_EMPTY_TRIGGER_SHIFT)                    /* 0x00000030 */
#define UART_FCR_RCVR_TRIGGER_SHIFT                        (6U)
#define UART_FCR_RCVR_TRIGGER_MASK                         (0x3U << UART_FCR_RCVR_TRIGGER_SHIFT)                        /* 0x000000C0 */
/* IIR */
#define UART_IIR_OFFSET                                    (0x8U)
#define UART_IIR                                           (0x1U)
#define UART_IIR_INT_ID_SHIFT                              (0U)
#define UART_IIR_INT_ID_MASK                               (0xFU << UART_IIR_INT_ID_SHIFT)                              /* 0x0000000F */
#define UART_IIR_FIFOS_EN_SHIFT                            (6U)
#define UART_IIR_FIFOS_EN_MASK                             (0x3U << UART_IIR_FIFOS_EN_SHIFT)                            /* 0x000000C0 */
/* LCR */
#define UART_LCR_OFFSET                                    (0xCU)
#define UART_LCR_DATA_LENGTH_SEL_SHIFT                     (0U)
#define UART_LCR_DATA_LENGTH_SEL_MASK                      (0x3U << UART_LCR_DATA_LENGTH_SEL_SHIFT)                     /* 0x00000003 */
#define UART_LCR_STOP_BITS_NUM_SHIFT                       (2U)
#define UART_LCR_STOP_BITS_NUM_MASK                        (0x1U << UART_LCR_STOP_BITS_NUM_SHIFT)                       /* 0x00000004 */
#define UART_LCR_PARITY_EN_SHIFT                           (3U)
#define UART_LCR_PARITY_EN_MASK                            (0x1U << UART_LCR_PARITY_EN_SHIFT)                           /* 0x00000008 */
#define UART_LCR_EVEN_PARITY_SEL_SHIFT                     (4U)
#define UART_LCR_EVEN_PARITY_SEL_MASK                      (0x1U << UART_LCR_EVEN_PARITY_SEL_SHIFT)                     /* 0x00000010 */
#define UART_LCR_BREAK_CTRL_SHIFT                          (6U)
#define UART_LCR_BREAK_CTRL_MASK                           (0x1U << UART_LCR_BREAK_CTRL_SHIFT)                          /* 0x00000040 */
#define UART_LCR_DIV_LAT_ACCESS_SHIFT                      (7U)
#define UART_LCR_DIV_LAT_ACCESS_MASK                       (0x1U << UART_LCR_DIV_LAT_ACCESS_SHIFT)                      /* 0x00000080 */
/* MCR */
#define UART_MCR_OFFSET                                    (0x10U)
#define UART_MCR_DATA_TERMINAL_READY_SHIFT                 (0U)
#define UART_MCR_DATA_TERMINAL_READY_MASK                  (0x1U << UART_MCR_DATA_TERMINAL_READY_SHIFT)                 /* 0x00000001 */
#define UART_MCR_REQ_TO_SEND_SHIFT                         (1U)
#define UART_MCR_REQ_TO_SEND_MASK                          (0x1U << UART_MCR_REQ_TO_SEND_SHIFT)                         /* 0x00000002 */
#define UART_MCR_OUT1_SHIFT                                (2U)
#define UART_MCR_OUT1_MASK                                 (0x1U << UART_MCR_OUT1_SHIFT)                                /* 0x00000004 */
#define UART_MCR_OUT2_SHIFT                                (3U)
#define UART_MCR_OUT2_MASK                                 (0x1U << UART_MCR_OUT2_SHIFT)                                /* 0x00000008 */
#define UART_MCR_LOOPBACK_SHIFT                            (4U)
#define UART_MCR_LOOPBACK_MASK                             (0x1U << UART_MCR_LOOPBACK_SHIFT)                            /* 0x00000010 */
#define UART_MCR_AUTO_FLOW_CTRL_EN_SHIFT                   (5U)
#define UART_MCR_AUTO_FLOW_CTRL_EN_MASK                    (0x1U << UART_MCR_AUTO_FLOW_CTRL_EN_SHIFT)                   /* 0x00000020 */
#define UART_MCR_SIR_MODE_EN_SHIFT                         (6U)
#define UART_MCR_SIR_MODE_EN_MASK                          (0x1U << UART_MCR_SIR_MODE_EN_SHIFT)                         /* 0x00000040 */
/* LSR */
#define UART_LSR_OFFSET                                    (0x14U)
#define UART_LSR                                           (0x60U)
#define UART_LSR_DATA_READY_SHIFT                          (0U)
#define UART_LSR_DATA_READY_MASK                           (0x1U << UART_LSR_DATA_READY_SHIFT)                          /* 0x00000001 */
#define UART_LSR_OVERRUN_ERROR_SHIFT                       (1U)
#define UART_LSR_OVERRUN_ERROR_MASK                        (0x1U << UART_LSR_OVERRUN_ERROR_SHIFT)                       /* 0x00000002 */
#define UART_LSR_PARITY_EROR_SHIFT                         (2U)
#define UART_LSR_PARITY_EROR_MASK                          (0x1U << UART_LSR_PARITY_EROR_SHIFT)                         /* 0x00000004 */
#define UART_LSR_FRAMING_ERROR_SHIFT                       (3U)
#define UART_LSR_FRAMING_ERROR_MASK                        (0x1U << UART_LSR_FRAMING_ERROR_SHIFT)                       /* 0x00000008 */
#define UART_LSR_BREAK_INT_SHIFT                           (4U)
#define UART_LSR_BREAK_INT_MASK                            (0x1U << UART_LSR_BREAK_INT_SHIFT)                           /* 0x00000010 */
#define UART_LSR_TRANS_HOLD_REG_EMPTY_SHIFT                (5U)
#define UART_LSR_TRANS_HOLD_REG_EMPTY_MASK                 (0x1U << UART_LSR_TRANS_HOLD_REG_EMPTY_SHIFT)                /* 0x00000020 */
#define UART_LSR_TRANS_EMPTY_SHIFT                         (6U)
#define UART_LSR_TRANS_EMPTY_MASK                          (0x1U << UART_LSR_TRANS_EMPTY_SHIFT)                         /* 0x00000040 */
#define UART_LSR_RECEIVER_FIFO_ERROR_SHIFT                 (7U)
#define UART_LSR_RECEIVER_FIFO_ERROR_MASK                  (0x1U << UART_LSR_RECEIVER_FIFO_ERROR_SHIFT)                 /* 0x00000080 */
/* MSR */
#define UART_MSR_OFFSET                                    (0x18U)
#define UART_MSR                                           (0x0U)
#define UART_MSR_DELTA_CLEAR_TO_SEND_SHIFT                 (0U)
#define UART_MSR_DELTA_CLEAR_TO_SEND_MASK                  (0x1U << UART_MSR_DELTA_CLEAR_TO_SEND_SHIFT)                 /* 0x00000001 */
#define UART_MSR_DELTA_DATA_SET_READY_SHIFT                (1U)
#define UART_MSR_DELTA_DATA_SET_READY_MASK                 (0x1U << UART_MSR_DELTA_DATA_SET_READY_SHIFT)                /* 0x00000002 */
#define UART_MSR_TRAILING_EDGE_RING_INDICATOR_SHIFT        (2U)
#define UART_MSR_TRAILING_EDGE_RING_INDICATOR_MASK         (0x1U << UART_MSR_TRAILING_EDGE_RING_INDICATOR_SHIFT)        /* 0x00000004 */
#define UART_MSR_DELTA_DATA_CARRIER_DETECT_SHIFT           (3U)
#define UART_MSR_DELTA_DATA_CARRIER_DETECT_MASK            (0x1U << UART_MSR_DELTA_DATA_CARRIER_DETECT_SHIFT)           /* 0x00000008 */
#define UART_MSR_CLEAR_TO_SEND_SHIFT                       (4U)
#define UART_MSR_CLEAR_TO_SEND_MASK                        (0x1U << UART_MSR_CLEAR_TO_SEND_SHIFT)                       /* 0x00000010 */
#define UART_MSR_DATA_SET_READY_SHIFT                      (5U)
#define UART_MSR_DATA_SET_READY_MASK                       (0x1U << UART_MSR_DATA_SET_READY_SHIFT)                      /* 0x00000020 */
#define UART_MSR_RING_INDICATOR_SHIFT                      (6U)
#define UART_MSR_RING_INDICATOR_MASK                       (0x1U << UART_MSR_RING_INDICATOR_SHIFT)                      /* 0x00000040 */
#define UART_MSR_DATA_CARRIOR_DETECT_SHIFT                 (7U)
#define UART_MSR_DATA_CARRIOR_DETECT_MASK                  (0x1U << UART_MSR_DATA_CARRIOR_DETECT_SHIFT)                 /* 0x00000080 */
/* SCR */
#define UART_SCR_OFFSET                                    (0x1CU)
#define UART_SCR_TEMP_STORE_SPACE_SHIFT                    (0U)
#define UART_SCR_TEMP_STORE_SPACE_MASK                     (0xFFU << UART_SCR_TEMP_STORE_SPACE_SHIFT)                   /* 0x000000FF */
/* SRBR */
#define UART_SRBR_OFFSET                                   (0x30U)
#define UART_SRBR                                          (0x0U)
#define UART_SRBR_SHADOW_RBR_SHIFT                         (0U)
#define UART_SRBR_SHADOW_RBR_MASK                          (0xFFU << UART_SRBR_SHADOW_RBR_SHIFT)                        /* 0x000000FF */
/* STHR */
#define UART_STHR_OFFSET                                   (0x30U)
#define UART_STHR_SHADOW_THR_SHIFT                         (0U)
#define UART_STHR_SHADOW_THR_MASK                          (0xFFU << UART_STHR_SHADOW_THR_SHIFT)                        /* 0x000000FF */
/* FAR */
#define UART_FAR_OFFSET                                    (0x70U)
#define UART_FAR_FIFO_ACCESS_TEST_EN_SHIFT                 (0U)
#define UART_FAR_FIFO_ACCESS_TEST_EN_MASK                  (0x1U << UART_FAR_FIFO_ACCESS_TEST_EN_SHIFT)                 /* 0x00000001 */
/* TFR */
#define UART_TFR_OFFSET                                    (0x74U)
#define UART_TFR                                           (0x0U)
#define UART_TFR_TRANS_FIFO_READ_SHIFT                     (0U)
#define UART_TFR_TRANS_FIFO_READ_MASK                      (0xFFU << UART_TFR_TRANS_FIFO_READ_SHIFT)                    /* 0x000000FF */
/* RFW */
#define UART_RFW_OFFSET                                    (0x78U)
#define UART_RFW_RECEIVE_FIFO_WRITE_SHIFT                  (0U)
#define UART_RFW_RECEIVE_FIFO_WRITE_MASK                   (0xFFU << UART_RFW_RECEIVE_FIFO_WRITE_SHIFT)                 /* 0x000000FF */
#define UART_RFW_RECEIVE_FIFO_PARITY_ERROR_SHIFT           (8U)
#define UART_RFW_RECEIVE_FIFO_PARITY_ERROR_MASK            (0x1U << UART_RFW_RECEIVE_FIFO_PARITY_ERROR_SHIFT)           /* 0x00000100 */
#define UART_RFW_RECEIVE_FIFO_FRAMING_ERROR_SHIFT          (9U)
#define UART_RFW_RECEIVE_FIFO_FRAMING_ERROR_MASK           (0x1U << UART_RFW_RECEIVE_FIFO_FRAMING_ERROR_SHIFT)          /* 0x00000200 */
/* USR */
#define UART_USR_OFFSET                                    (0x7CU)
#define UART_USR                                           (0x6U)
#define UART_USR_UART_BUSY_SHIFT                           (0U)
#define UART_USR_UART_BUSY_MASK                            (0x1U << UART_USR_UART_BUSY_SHIFT)                           /* 0x00000001 */
#define UART_USR_TRANS_FIFO_NOT_FULL_SHIFT                 (1U)
#define UART_USR_TRANS_FIFO_NOT_FULL_MASK                  (0x1U << UART_USR_TRANS_FIFO_NOT_FULL_SHIFT)                 /* 0x00000002 */
#define UART_USR_TRASN_FIFO_EMPTY_SHIFT                    (2U)
#define UART_USR_TRASN_FIFO_EMPTY_MASK                     (0x1U << UART_USR_TRASN_FIFO_EMPTY_SHIFT)                    /* 0x00000004 */
#define UART_USR_RECEIVE_FIFO_NOT_EMPTY_SHIFT              (3U)
#define UART_USR_RECEIVE_FIFO_NOT_EMPTY_MASK               (0x1U << UART_USR_RECEIVE_FIFO_NOT_EMPTY_SHIFT)              /* 0x00000008 */
#define UART_USR_RECEIVE_FIFO_FULL_SHIFT                   (4U)
#define UART_USR_RECEIVE_FIFO_FULL_MASK                    (0x1U << UART_USR_RECEIVE_FIFO_FULL_SHIFT)                   /* 0x00000010 */
/* TFL */
#define UART_TFL_OFFSET                                    (0x80U)
#define UART_TFL                                           (0x0U)
#define UART_TFL_TRANS_FIFO_LEVEL_SHIFT                    (0U)
#define UART_TFL_TRANS_FIFO_LEVEL_MASK                     (0x3FU << UART_TFL_TRANS_FIFO_LEVEL_SHIFT)                   /* 0x0000003F */
/* RFL */
#define UART_RFL_OFFSET                                    (0x84U)
#define UART_RFL                                           (0x0U)
#define UART_RFL_RECEIVE_FIFO_LEVEL_SHIFT                  (0U)
#define UART_RFL_RECEIVE_FIFO_LEVEL_MASK                   (0x3FU << UART_RFL_RECEIVE_FIFO_LEVEL_SHIFT)                 /* 0x0000003F */
/* SRR */
#define UART_SRR_OFFSET                                    (0x88U)
#define UART_SRR_UART_RESET_SHIFT                          (0U)
#define UART_SRR_UART_RESET_MASK                           (0x1U << UART_SRR_UART_RESET_SHIFT)                          /* 0x00000001 */
#define UART_SRR_RCVR_FIFO_RESET_SHIFT                     (1U)
#define UART_SRR_RCVR_FIFO_RESET_MASK                      (0x1U << UART_SRR_RCVR_FIFO_RESET_SHIFT)                     /* 0x00000002 */
#define UART_SRR_XMIT_FIFO_RESET_SHIFT                     (2U)
#define UART_SRR_XMIT_FIFO_RESET_MASK                      (0x1U << UART_SRR_XMIT_FIFO_RESET_SHIFT)                     /* 0x00000004 */
/* SRTS */
#define UART_SRTS_OFFSET                                   (0x8CU)
#define UART_SRTS_SHADOW_REQ_TO_SEND_SHIFT                 (0U)
#define UART_SRTS_SHADOW_REQ_TO_SEND_MASK                  (0x1U << UART_SRTS_SHADOW_REQ_TO_SEND_SHIFT)                 /* 0x00000001 */
/* SBCR */
#define UART_SBCR_OFFSET                                   (0x90U)
#define UART_SBCR_SHADOW_BREAK_CTRL_SHIFT                  (0U)
#define UART_SBCR_SHADOW_BREAK_CTRL_MASK                   (0x1U << UART_SBCR_SHADOW_BREAK_CTRL_SHIFT)                  /* 0x00000001 */
/* SDMAM */
#define UART_SDMAM_OFFSET                                  (0x94U)
#define UART_SDMAM_SHADOW_DMA_MODE_SHIFT                   (0U)
#define UART_SDMAM_SHADOW_DMA_MODE_MASK                    (0x1U << UART_SDMAM_SHADOW_DMA_MODE_SHIFT)                   /* 0x00000001 */
/* SFE */
#define UART_SFE_OFFSET                                    (0x98U)
#define UART_SFE_SHADOW_FIFO_EN_SHIFT                      (0U)
#define UART_SFE_SHADOW_FIFO_EN_MASK                       (0x1U << UART_SFE_SHADOW_FIFO_EN_SHIFT)                      /* 0x00000001 */
/* SRT */
#define UART_SRT_OFFSET                                    (0x9CU)
#define UART_SRT_SHADOW_RCVR_TRIGGER_SHIFT                 (0U)
#define UART_SRT_SHADOW_RCVR_TRIGGER_MASK                  (0x3U << UART_SRT_SHADOW_RCVR_TRIGGER_SHIFT)                 /* 0x00000003 */
/* STET */
#define UART_STET_OFFSET                                   (0xA0U)
#define UART_STET_SHADOW_TX_EMPTY_TRIGGER_SHIFT            (0U)
#define UART_STET_SHADOW_TX_EMPTY_TRIGGER_MASK             (0x3U << UART_STET_SHADOW_TX_EMPTY_TRIGGER_SHIFT)            /* 0x00000003 */
/* HTX */
#define UART_HTX_OFFSET                                    (0xA4U)
#define UART_HTX_HALT_TX_EN_SHIFT                          (0U)
#define UART_HTX_HALT_TX_EN_MASK                           (0x1U << UART_HTX_HALT_TX_EN_SHIFT)                          /* 0x00000001 */
/* DMASA */
#define UART_DMASA_OFFSET                                  (0xA8U)
#define UART_DMASA_DMA_SOFTWARE_ACK_SHIFT                  (0U)
#define UART_DMASA_DMA_SOFTWARE_ACK_MASK                   (0x1U << UART_DMASA_DMA_SOFTWARE_ACK_SHIFT)                  /* 0x00000001 */
/* CPR */
#define UART_CPR_OFFSET                                    (0xF4U)
#define UART_CPR                                           (0x0U)
#define UART_CPR_APB_DATA_WIDTH_SHIFT                      (0U)
#define UART_CPR_APB_DATA_WIDTH_MASK                       (0x3U << UART_CPR_APB_DATA_WIDTH_SHIFT)                      /* 0x00000003 */
#define UART_CPR_AFCE_MODE_SHIFT                           (4U)
#define UART_CPR_AFCE_MODE_MASK                            (0x1U << UART_CPR_AFCE_MODE_SHIFT)                           /* 0x00000010 */
#define UART_CPR_THRE_MODE_SHIFT                           (5U)
#define UART_CPR_THRE_MODE_MASK                            (0x1U << UART_CPR_THRE_MODE_SHIFT)                           /* 0x00000020 */
#define UART_CPR_SIR_MODE_SHIFT                            (6U)
#define UART_CPR_SIR_MODE_MASK                             (0x1U << UART_CPR_SIR_MODE_SHIFT)                            /* 0x00000040 */
#define UART_CPR_SIR_LP_MODE_SHIFT                         (7U)
#define UART_CPR_SIR_LP_MODE_MASK                          (0x1U << UART_CPR_SIR_LP_MODE_SHIFT)                         /* 0x00000080 */
#define UART_CPR_NEW_FEAT_SHIFT                            (8U)
#define UART_CPR_NEW_FEAT_MASK                             (0x1U << UART_CPR_NEW_FEAT_SHIFT)                            /* 0x00000100 */
#define UART_CPR_FIFO_ACCESS_SHIFT                         (9U)
#define UART_CPR_FIFO_ACCESS_MASK                          (0x1U << UART_CPR_FIFO_ACCESS_SHIFT)                         /* 0x00000200 */
#define UART_CPR_FIFO_STAT_SHIFT                           (10U)
#define UART_CPR_FIFO_STAT_MASK                            (0x1U << UART_CPR_FIFO_STAT_SHIFT)                           /* 0x00000400 */
#define UART_CPR_SHADOW_SHIFT                              (11U)
#define UART_CPR_SHADOW_MASK                               (0x1U << UART_CPR_SHADOW_SHIFT)                              /* 0x00000800 */
#define UART_CPR_UART_ADD_ENCODED_PARAMS_SHIFT             (12U)
#define UART_CPR_UART_ADD_ENCODED_PARAMS_MASK              (0x1U << UART_CPR_UART_ADD_ENCODED_PARAMS_SHIFT)             /* 0x00001000 */
#define UART_CPR_DMA_EXTRA_SHIFT                           (13U)
#define UART_CPR_DMA_EXTRA_MASK                            (0x1U << UART_CPR_DMA_EXTRA_SHIFT)                           /* 0x00002000 */
#define UART_CPR_FIFO_MODE_SHIFT                           (16U)
#define UART_CPR_FIFO_MODE_MASK                            (0xFFU << UART_CPR_FIFO_MODE_SHIFT)                          /* 0x00FF0000 */
/* UCV */
#define UART_UCV_OFFSET                                    (0xF8U)
#define UART_UCV                                           (0x330372AU)
#define UART_UCV_VER_SHIFT                                 (0U)
#define UART_UCV_VER_MASK                                  (0xFFFFFFFFU << UART_UCV_VER_SHIFT)                          /* 0xFFFFFFFF */
/* CTR */
#define UART_CTR_OFFSET                                    (0xFCU)
#define UART_CTR                                           (0x44570110U)
#define UART_CTR_PERIPHERAL_ID_SHIFT                       (0U)
#define UART_CTR_PERIPHERAL_ID_MASK                        (0xFFFFFFFFU << UART_CTR_PERIPHERAL_ID_SHIFT)                /* 0xFFFFFFFF */
/***************************************GPIO1_IOC****************************************/
/* GPIO1A_IOMUX_SEL_L */
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_L_OFFSET                (0x0U)
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A0_SEL_SHIFT     (0U)
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A0_SEL_MASK      (0x7U << GPIO1_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A0_SEL_SHIFT)     /* 0x00000007 */
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A1_SEL_SHIFT     (4U)
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A1_SEL_MASK      (0x7U << GPIO1_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A1_SEL_SHIFT)     /* 0x00000070 */
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A2_SEL_SHIFT     (8U)
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A2_SEL_MASK      (0x7U << GPIO1_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A2_SEL_SHIFT)     /* 0x00000700 */
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A3_SEL_SHIFT     (12U)
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A3_SEL_MASK      (0x7U << GPIO1_IOC_GPIO1A_IOMUX_SEL_L_GPIO1A3_SEL_SHIFT)     /* 0x00007000 */
/* GPIO1A_IOMUX_SEL_H */
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_H_OFFSET                (0x4U)
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A4_SEL_SHIFT     (0U)
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A4_SEL_MASK      (0x7U << GPIO1_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A4_SEL_SHIFT)     /* 0x00000007 */
/* GPIO1B_IOMUX_SEL_L */
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_L_OFFSET                (0x8U)
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B0_SEL_SHIFT     (0U)
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B0_SEL_MASK      (0x7U << GPIO1_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B0_SEL_SHIFT)     /* 0x00000007 */
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B1_SEL_SHIFT     (4U)
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B1_SEL_MASK      (0x7U << GPIO1_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B1_SEL_SHIFT)     /* 0x00000070 */
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B2_SEL_SHIFT     (8U)
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B2_SEL_MASK      (0x7U << GPIO1_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B2_SEL_SHIFT)     /* 0x00000700 */
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B3_SEL_SHIFT     (12U)
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B3_SEL_MASK      (0x7U << GPIO1_IOC_GPIO1B_IOMUX_SEL_L_GPIO1B3_SEL_SHIFT)     /* 0x00007000 */
/* GPIO1C_IOMUX_SEL_L */
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_L_OFFSET                (0x10U)
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C0_SEL_SHIFT     (0U)
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C0_SEL_MASK      (0x7U << GPIO1_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C0_SEL_SHIFT)     /* 0x00000007 */
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C1_SEL_SHIFT     (4U)
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C1_SEL_MASK      (0x7U << GPIO1_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C1_SEL_SHIFT)     /* 0x00000070 */
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C2_SEL_SHIFT     (8U)
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C2_SEL_MASK      (0x7U << GPIO1_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C2_SEL_SHIFT)     /* 0x00000700 */
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C3_SEL_SHIFT     (12U)
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C3_SEL_MASK      (0x7U << GPIO1_IOC_GPIO1C_IOMUX_SEL_L_GPIO1C3_SEL_SHIFT)     /* 0x00007000 */
/* GPIO1C_IOMUX_SEL_H */
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_H_OFFSET                (0x14U)
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C4_SEL_SHIFT     (0U)
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C4_SEL_MASK      (0x7U << GPIO1_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C4_SEL_SHIFT)     /* 0x00000007 */
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C5_SEL_SHIFT     (4U)
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C5_SEL_MASK      (0x7U << GPIO1_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C5_SEL_SHIFT)     /* 0x00000070 */
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C6_SEL_SHIFT     (8U)
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C6_SEL_MASK      (0x7U << GPIO1_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C6_SEL_SHIFT)     /* 0x00000700 */
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C7_SEL_SHIFT     (12U)
#define GPIO1_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C7_SEL_MASK      (0x7U << GPIO1_IOC_GPIO1C_IOMUX_SEL_H_GPIO1C7_SEL_SHIFT)     /* 0x00007000 */
/* GPIO1D_IOMUX_SEL_L */
#define GPIO1_IOC_GPIO1D_IOMUX_SEL_L_OFFSET                (0x18U)
#define GPIO1_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D0_SEL_SHIFT     (0U)
#define GPIO1_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D0_SEL_MASK      (0x7U << GPIO1_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D0_SEL_SHIFT)     /* 0x00000007 */
#define GPIO1_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D1_SEL_SHIFT     (4U)
#define GPIO1_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D1_SEL_MASK      (0x7U << GPIO1_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D1_SEL_SHIFT)     /* 0x00000070 */
#define GPIO1_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D2_SEL_SHIFT     (8U)
#define GPIO1_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D2_SEL_MASK      (0x7U << GPIO1_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D2_SEL_SHIFT)     /* 0x00000700 */
#define GPIO1_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D3_SEL_SHIFT     (12U)
#define GPIO1_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D3_SEL_MASK      (0x7U << GPIO1_IOC_GPIO1D_IOMUX_SEL_L_GPIO1D3_SEL_SHIFT)     /* 0x00007000 */
/* GPIO1A_DS0 */
#define GPIO1_IOC_GPIO1A_DS0_OFFSET                        (0x80U)
#define GPIO1_IOC_GPIO1A_DS0_GPIO1A0_DS_SHIFT              (0U)
#define GPIO1_IOC_GPIO1A_DS0_GPIO1A0_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1A_DS0_GPIO1A0_DS_SHIFT)             /* 0x0000003F */
#define GPIO1_IOC_GPIO1A_DS0_GPIO1A1_DS_SHIFT              (8U)
#define GPIO1_IOC_GPIO1A_DS0_GPIO1A1_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1A_DS0_GPIO1A1_DS_SHIFT)             /* 0x00003F00 */
/* GPIO1A_DS1 */
#define GPIO1_IOC_GPIO1A_DS1_OFFSET                        (0x84U)
#define GPIO1_IOC_GPIO1A_DS1_GPIO1A2_DS_SHIFT              (0U)
#define GPIO1_IOC_GPIO1A_DS1_GPIO1A2_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1A_DS1_GPIO1A2_DS_SHIFT)             /* 0x0000003F */
#define GPIO1_IOC_GPIO1A_DS1_GPIO1A3_DS_SHIFT              (8U)
#define GPIO1_IOC_GPIO1A_DS1_GPIO1A3_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1A_DS1_GPIO1A3_DS_SHIFT)             /* 0x00003F00 */
/* GPIO1A_DS2 */
#define GPIO1_IOC_GPIO1A_DS2_OFFSET                        (0x88U)
#define GPIO1_IOC_GPIO1A_DS2_GPIO1A4_DS_SHIFT              (0U)
#define GPIO1_IOC_GPIO1A_DS2_GPIO1A4_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1A_DS2_GPIO1A4_DS_SHIFT)             /* 0x0000003F */
/* GPIO1B_DS0 */
#define GPIO1_IOC_GPIO1B_DS0_OFFSET                        (0x90U)
#define GPIO1_IOC_GPIO1B_DS0_GPIO1B0_DS_SHIFT              (0U)
#define GPIO1_IOC_GPIO1B_DS0_GPIO1B0_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1B_DS0_GPIO1B0_DS_SHIFT)             /* 0x0000003F */
#define GPIO1_IOC_GPIO1B_DS0_GPIO1B1_DS_SHIFT              (8U)
#define GPIO1_IOC_GPIO1B_DS0_GPIO1B1_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1B_DS0_GPIO1B1_DS_SHIFT)             /* 0x00003F00 */
/* GPIO1B_DS1 */
#define GPIO1_IOC_GPIO1B_DS1_OFFSET                        (0x94U)
#define GPIO1_IOC_GPIO1B_DS1_GPIO1B2_DS_SHIFT              (0U)
#define GPIO1_IOC_GPIO1B_DS1_GPIO1B2_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1B_DS1_GPIO1B2_DS_SHIFT)             /* 0x0000003F */
#define GPIO1_IOC_GPIO1B_DS1_GPIO1B3_DS_SHIFT              (8U)
#define GPIO1_IOC_GPIO1B_DS1_GPIO1B3_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1B_DS1_GPIO1B3_DS_SHIFT)             /* 0x00003F00 */
/* GPIO1C_DS0 */
#define GPIO1_IOC_GPIO1C_DS0_OFFSET                        (0xA0U)
#define GPIO1_IOC_GPIO1C_DS0_GPIO1C0_DS_SHIFT              (0U)
#define GPIO1_IOC_GPIO1C_DS0_GPIO1C0_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1C_DS0_GPIO1C0_DS_SHIFT)             /* 0x0000003F */
#define GPIO1_IOC_GPIO1C_DS0_GPIO1C1_DS_SHIFT              (8U)
#define GPIO1_IOC_GPIO1C_DS0_GPIO1C1_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1C_DS0_GPIO1C1_DS_SHIFT)             /* 0x00003F00 */
/* GPIO1C_DS1 */
#define GPIO1_IOC_GPIO1C_DS1_OFFSET                        (0xA4U)
#define GPIO1_IOC_GPIO1C_DS1_GPIO1C2_DS_SHIFT              (0U)
#define GPIO1_IOC_GPIO1C_DS1_GPIO1C2_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1C_DS1_GPIO1C2_DS_SHIFT)             /* 0x0000003F */
#define GPIO1_IOC_GPIO1C_DS1_GPIO1C3_DS_SHIFT              (8U)
#define GPIO1_IOC_GPIO1C_DS1_GPIO1C3_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1C_DS1_GPIO1C3_DS_SHIFT)             /* 0x00003F00 */
/* GPIO1C_DS2 */
#define GPIO1_IOC_GPIO1C_DS2_OFFSET                        (0xA8U)
#define GPIO1_IOC_GPIO1C_DS2_GPIO1C4_DS_SHIFT              (0U)
#define GPIO1_IOC_GPIO1C_DS2_GPIO1C4_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1C_DS2_GPIO1C4_DS_SHIFT)             /* 0x0000003F */
#define GPIO1_IOC_GPIO1C_DS2_GPIO1C5_DS_SHIFT              (8U)
#define GPIO1_IOC_GPIO1C_DS2_GPIO1C5_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1C_DS2_GPIO1C5_DS_SHIFT)             /* 0x00003F00 */
/* GPIO1C_DS3 */
#define GPIO1_IOC_GPIO1C_DS3_OFFSET                        (0xACU)
#define GPIO1_IOC_GPIO1C_DS3_GPIO1C6_DS_SHIFT              (0U)
#define GPIO1_IOC_GPIO1C_DS3_GPIO1C6_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1C_DS3_GPIO1C6_DS_SHIFT)             /* 0x0000003F */
#define GPIO1_IOC_GPIO1C_DS3_GPIO1C7_DS_SHIFT              (8U)
#define GPIO1_IOC_GPIO1C_DS3_GPIO1C7_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1C_DS3_GPIO1C7_DS_SHIFT)             /* 0x00003F00 */
/* GPIO1D_DS0 */
#define GPIO1_IOC_GPIO1D_DS0_OFFSET                        (0xB0U)
#define GPIO1_IOC_GPIO1D_DS0_GPIO1D0_DS_SHIFT              (0U)
#define GPIO1_IOC_GPIO1D_DS0_GPIO1D0_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1D_DS0_GPIO1D0_DS_SHIFT)             /* 0x0000003F */
#define GPIO1_IOC_GPIO1D_DS0_GPIO1D1_DS_SHIFT              (8U)
#define GPIO1_IOC_GPIO1D_DS0_GPIO1D1_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1D_DS0_GPIO1D1_DS_SHIFT)             /* 0x00003F00 */
/* GPIO1D_DS1 */
#define GPIO1_IOC_GPIO1D_DS1_OFFSET                        (0xB4U)
#define GPIO1_IOC_GPIO1D_DS1_GPIO1D2_DS_SHIFT              (0U)
#define GPIO1_IOC_GPIO1D_DS1_GPIO1D2_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1D_DS1_GPIO1D2_DS_SHIFT)             /* 0x0000003F */
#define GPIO1_IOC_GPIO1D_DS1_GPIO1D3_DS_SHIFT              (8U)
#define GPIO1_IOC_GPIO1D_DS1_GPIO1D3_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1D_DS1_GPIO1D3_DS_SHIFT)             /* 0x00003F00 */
/* GPIO1A_IE */
#define GPIO1_IOC_GPIO1A_IE_OFFSET                         (0x180U)
#define GPIO1_IOC_GPIO1A_IE_GPIO1A0_IE_SHIFT               (0U)
#define GPIO1_IOC_GPIO1A_IE_GPIO1A0_IE_MASK                (0x1U << GPIO1_IOC_GPIO1A_IE_GPIO1A0_IE_SHIFT)               /* 0x00000001 */
#define GPIO1_IOC_GPIO1A_IE_GPIO1A1_IE_SHIFT               (1U)
#define GPIO1_IOC_GPIO1A_IE_GPIO1A1_IE_MASK                (0x1U << GPIO1_IOC_GPIO1A_IE_GPIO1A1_IE_SHIFT)               /* 0x00000002 */
#define GPIO1_IOC_GPIO1A_IE_GPIO1A2_IE_SHIFT               (2U)
#define GPIO1_IOC_GPIO1A_IE_GPIO1A2_IE_MASK                (0x1U << GPIO1_IOC_GPIO1A_IE_GPIO1A2_IE_SHIFT)               /* 0x00000004 */
#define GPIO1_IOC_GPIO1A_IE_GPIO1A3_IE_SHIFT               (3U)
#define GPIO1_IOC_GPIO1A_IE_GPIO1A3_IE_MASK                (0x1U << GPIO1_IOC_GPIO1A_IE_GPIO1A3_IE_SHIFT)               /* 0x00000008 */
#define GPIO1_IOC_GPIO1A_IE_GPIO1A4_IE_SHIFT               (4U)
#define GPIO1_IOC_GPIO1A_IE_GPIO1A4_IE_MASK                (0x1U << GPIO1_IOC_GPIO1A_IE_GPIO1A4_IE_SHIFT)               /* 0x00000010 */
/* GPIO1B_IE */
#define GPIO1_IOC_GPIO1B_IE_OFFSET                         (0x184U)
#define GPIO1_IOC_GPIO1B_IE_GPIO1B0_IE_SHIFT               (0U)
#define GPIO1_IOC_GPIO1B_IE_GPIO1B0_IE_MASK                (0x1U << GPIO1_IOC_GPIO1B_IE_GPIO1B0_IE_SHIFT)               /* 0x00000001 */
#define GPIO1_IOC_GPIO1B_IE_GPIO1B1_IE_SHIFT               (1U)
#define GPIO1_IOC_GPIO1B_IE_GPIO1B1_IE_MASK                (0x1U << GPIO1_IOC_GPIO1B_IE_GPIO1B1_IE_SHIFT)               /* 0x00000002 */
#define GPIO1_IOC_GPIO1B_IE_GPIO1B2_IE_SHIFT               (2U)
#define GPIO1_IOC_GPIO1B_IE_GPIO1B2_IE_MASK                (0x1U << GPIO1_IOC_GPIO1B_IE_GPIO1B2_IE_SHIFT)               /* 0x00000004 */
#define GPIO1_IOC_GPIO1B_IE_GPIO1B3_IE_SHIFT               (3U)
#define GPIO1_IOC_GPIO1B_IE_GPIO1B3_IE_MASK                (0x1U << GPIO1_IOC_GPIO1B_IE_GPIO1B3_IE_SHIFT)               /* 0x00000008 */
/* GPIO1C_IE */
#define GPIO1_IOC_GPIO1C_IE_OFFSET                         (0x188U)
#define GPIO1_IOC_GPIO1C_IE_GPIO1C0_IE_SHIFT               (0U)
#define GPIO1_IOC_GPIO1C_IE_GPIO1C0_IE_MASK                (0x1U << GPIO1_IOC_GPIO1C_IE_GPIO1C0_IE_SHIFT)               /* 0x00000001 */
#define GPIO1_IOC_GPIO1C_IE_GPIO1C1_IE_SHIFT               (1U)
#define GPIO1_IOC_GPIO1C_IE_GPIO1C1_IE_MASK                (0x1U << GPIO1_IOC_GPIO1C_IE_GPIO1C1_IE_SHIFT)               /* 0x00000002 */
#define GPIO1_IOC_GPIO1C_IE_GPIO1C2_IE_SHIFT               (2U)
#define GPIO1_IOC_GPIO1C_IE_GPIO1C2_IE_MASK                (0x1U << GPIO1_IOC_GPIO1C_IE_GPIO1C2_IE_SHIFT)               /* 0x00000004 */
#define GPIO1_IOC_GPIO1C_IE_GPIO1C3_IE_SHIFT               (3U)
#define GPIO1_IOC_GPIO1C_IE_GPIO1C3_IE_MASK                (0x1U << GPIO1_IOC_GPIO1C_IE_GPIO1C3_IE_SHIFT)               /* 0x00000008 */
#define GPIO1_IOC_GPIO1C_IE_GPIO1C4_IE_SHIFT               (4U)
#define GPIO1_IOC_GPIO1C_IE_GPIO1C4_IE_MASK                (0x1U << GPIO1_IOC_GPIO1C_IE_GPIO1C4_IE_SHIFT)               /* 0x00000010 */
#define GPIO1_IOC_GPIO1C_IE_GPIO1C5_IE_SHIFT               (5U)
#define GPIO1_IOC_GPIO1C_IE_GPIO1C5_IE_MASK                (0x1U << GPIO1_IOC_GPIO1C_IE_GPIO1C5_IE_SHIFT)               /* 0x00000020 */
#define GPIO1_IOC_GPIO1C_IE_GPIO1C6_IE_SHIFT               (6U)
#define GPIO1_IOC_GPIO1C_IE_GPIO1C6_IE_MASK                (0x1U << GPIO1_IOC_GPIO1C_IE_GPIO1C6_IE_SHIFT)               /* 0x00000040 */
#define GPIO1_IOC_GPIO1C_IE_GPIO1C7_IE_SHIFT               (7U)
#define GPIO1_IOC_GPIO1C_IE_GPIO1C7_IE_MASK                (0x1U << GPIO1_IOC_GPIO1C_IE_GPIO1C7_IE_SHIFT)               /* 0x00000080 */
/* GPIO1D_IE */
#define GPIO1_IOC_GPIO1D_IE_OFFSET                         (0x18CU)
#define GPIO1_IOC_GPIO1D_IE_GPIO1D0_IE_SHIFT               (0U)
#define GPIO1_IOC_GPIO1D_IE_GPIO1D0_IE_MASK                (0x1U << GPIO1_IOC_GPIO1D_IE_GPIO1D0_IE_SHIFT)               /* 0x00000001 */
#define GPIO1_IOC_GPIO1D_IE_GPIO1D1_IE_SHIFT               (1U)
#define GPIO1_IOC_GPIO1D_IE_GPIO1D1_IE_MASK                (0x1U << GPIO1_IOC_GPIO1D_IE_GPIO1D1_IE_SHIFT)               /* 0x00000002 */
#define GPIO1_IOC_GPIO1D_IE_GPIO1D2_IE_SHIFT               (2U)
#define GPIO1_IOC_GPIO1D_IE_GPIO1D2_IE_MASK                (0x1U << GPIO1_IOC_GPIO1D_IE_GPIO1D2_IE_SHIFT)               /* 0x00000004 */
#define GPIO1_IOC_GPIO1D_IE_GPIO1D3_IE_SHIFT               (3U)
#define GPIO1_IOC_GPIO1D_IE_GPIO1D3_IE_MASK                (0x1U << GPIO1_IOC_GPIO1D_IE_GPIO1D3_IE_SHIFT)               /* 0x00000008 */
/* GPIO1A_P */
#define GPIO1_IOC_GPIO1A_P_OFFSET                          (0x1C0U)
#define GPIO1_IOC_GPIO1A_P_GPIO1A0_PU_SHIFT                (0U)
#define GPIO1_IOC_GPIO1A_P_GPIO1A0_PU_MASK                 (0x1U << GPIO1_IOC_GPIO1A_P_GPIO1A0_PU_SHIFT)                /* 0x00000001 */
#define GPIO1_IOC_GPIO1A_P_GPIO1A0_PD_SHIFT                (1U)
#define GPIO1_IOC_GPIO1A_P_GPIO1A0_PD_MASK                 (0x1U << GPIO1_IOC_GPIO1A_P_GPIO1A0_PD_SHIFT)                /* 0x00000002 */
#define GPIO1_IOC_GPIO1A_P_GPIO1A1_PU_SHIFT                (2U)
#define GPIO1_IOC_GPIO1A_P_GPIO1A1_PU_MASK                 (0x1U << GPIO1_IOC_GPIO1A_P_GPIO1A1_PU_SHIFT)                /* 0x00000004 */
#define GPIO1_IOC_GPIO1A_P_GPIO1A1_PD_SHIFT                (3U)
#define GPIO1_IOC_GPIO1A_P_GPIO1A1_PD_MASK                 (0x1U << GPIO1_IOC_GPIO1A_P_GPIO1A1_PD_SHIFT)                /* 0x00000008 */
#define GPIO1_IOC_GPIO1A_P_GPIO1A2_PU_SHIFT                (4U)
#define GPIO1_IOC_GPIO1A_P_GPIO1A2_PU_MASK                 (0x1U << GPIO1_IOC_GPIO1A_P_GPIO1A2_PU_SHIFT)                /* 0x00000010 */
#define GPIO1_IOC_GPIO1A_P_GPIO1A2_PD_SHIFT                (5U)
#define GPIO1_IOC_GPIO1A_P_GPIO1A2_PD_MASK                 (0x1U << GPIO1_IOC_GPIO1A_P_GPIO1A2_PD_SHIFT)                /* 0x00000020 */
#define GPIO1_IOC_GPIO1A_P_GPIO1A3_PU_SHIFT                (6U)
#define GPIO1_IOC_GPIO1A_P_GPIO1A3_PU_MASK                 (0x1U << GPIO1_IOC_GPIO1A_P_GPIO1A3_PU_SHIFT)                /* 0x00000040 */
#define GPIO1_IOC_GPIO1A_P_GPIO1A3_PD_SHIFT                (7U)
#define GPIO1_IOC_GPIO1A_P_GPIO1A3_PD_MASK                 (0x1U << GPIO1_IOC_GPIO1A_P_GPIO1A3_PD_SHIFT)                /* 0x00000080 */
#define GPIO1_IOC_GPIO1A_P_GPIO1A4_PU_SHIFT                (8U)
#define GPIO1_IOC_GPIO1A_P_GPIO1A4_PU_MASK                 (0x1U << GPIO1_IOC_GPIO1A_P_GPIO1A4_PU_SHIFT)                /* 0x00000100 */
#define GPIO1_IOC_GPIO1A_P_GPIO1A4_PD_SHIFT                (9U)
#define GPIO1_IOC_GPIO1A_P_GPIO1A4_PD_MASK                 (0x1U << GPIO1_IOC_GPIO1A_P_GPIO1A4_PD_SHIFT)                /* 0x00000200 */
/* GPIO1B_P */
#define GPIO1_IOC_GPIO1B_P_OFFSET                          (0x1C4U)
#define GPIO1_IOC_GPIO1B_P_GPIO1B0_PU_SHIFT                (0U)
#define GPIO1_IOC_GPIO1B_P_GPIO1B0_PU_MASK                 (0x1U << GPIO1_IOC_GPIO1B_P_GPIO1B0_PU_SHIFT)                /* 0x00000001 */
#define GPIO1_IOC_GPIO1B_P_GPIO1B0_PD_SHIFT                (1U)
#define GPIO1_IOC_GPIO1B_P_GPIO1B0_PD_MASK                 (0x1U << GPIO1_IOC_GPIO1B_P_GPIO1B0_PD_SHIFT)                /* 0x00000002 */
#define GPIO1_IOC_GPIO1B_P_GPIO1B1_PU_SHIFT                (2U)
#define GPIO1_IOC_GPIO1B_P_GPIO1B1_PU_MASK                 (0x1U << GPIO1_IOC_GPIO1B_P_GPIO1B1_PU_SHIFT)                /* 0x00000004 */
#define GPIO1_IOC_GPIO1B_P_GPIO1B1_PD_SHIFT                (3U)
#define GPIO1_IOC_GPIO1B_P_GPIO1B1_PD_MASK                 (0x1U << GPIO1_IOC_GPIO1B_P_GPIO1B1_PD_SHIFT)                /* 0x00000008 */
#define GPIO1_IOC_GPIO1B_P_GPIO1B2_PU_SHIFT                (4U)
#define GPIO1_IOC_GPIO1B_P_GPIO1B2_PU_MASK                 (0x1U << GPIO1_IOC_GPIO1B_P_GPIO1B2_PU_SHIFT)                /* 0x00000010 */
#define GPIO1_IOC_GPIO1B_P_GPIO1B2_PD_SHIFT                (5U)
#define GPIO1_IOC_GPIO1B_P_GPIO1B2_PD_MASK                 (0x1U << GPIO1_IOC_GPIO1B_P_GPIO1B2_PD_SHIFT)                /* 0x00000020 */
#define GPIO1_IOC_GPIO1B_P_GPIO1B3_PU_SHIFT                (6U)
#define GPIO1_IOC_GPIO1B_P_GPIO1B3_PU_MASK                 (0x1U << GPIO1_IOC_GPIO1B_P_GPIO1B3_PU_SHIFT)                /* 0x00000040 */
#define GPIO1_IOC_GPIO1B_P_GPIO1B3_PD_SHIFT                (7U)
#define GPIO1_IOC_GPIO1B_P_GPIO1B3_PD_MASK                 (0x1U << GPIO1_IOC_GPIO1B_P_GPIO1B3_PD_SHIFT)                /* 0x00000080 */
/* GPIO1C_P */
#define GPIO1_IOC_GPIO1C_P_OFFSET                          (0x1C8U)
#define GPIO1_IOC_GPIO1C_P_GPIO1C0_PU_SHIFT                (0U)
#define GPIO1_IOC_GPIO1C_P_GPIO1C0_PU_MASK                 (0x1U << GPIO1_IOC_GPIO1C_P_GPIO1C0_PU_SHIFT)                /* 0x00000001 */
#define GPIO1_IOC_GPIO1C_P_GPIO1C0_PD_SHIFT                (1U)
#define GPIO1_IOC_GPIO1C_P_GPIO1C0_PD_MASK                 (0x1U << GPIO1_IOC_GPIO1C_P_GPIO1C0_PD_SHIFT)                /* 0x00000002 */
#define GPIO1_IOC_GPIO1C_P_GPIO1C1_PU_SHIFT                (2U)
#define GPIO1_IOC_GPIO1C_P_GPIO1C1_PU_MASK                 (0x1U << GPIO1_IOC_GPIO1C_P_GPIO1C1_PU_SHIFT)                /* 0x00000004 */
#define GPIO1_IOC_GPIO1C_P_GPIO1C1_PD_SHIFT                (3U)
#define GPIO1_IOC_GPIO1C_P_GPIO1C1_PD_MASK                 (0x1U << GPIO1_IOC_GPIO1C_P_GPIO1C1_PD_SHIFT)                /* 0x00000008 */
#define GPIO1_IOC_GPIO1C_P_GPIO1C2_PU_SHIFT                (4U)
#define GPIO1_IOC_GPIO1C_P_GPIO1C2_PU_MASK                 (0x1U << GPIO1_IOC_GPIO1C_P_GPIO1C2_PU_SHIFT)                /* 0x00000010 */
#define GPIO1_IOC_GPIO1C_P_GPIO1C2_PD_SHIFT                (5U)
#define GPIO1_IOC_GPIO1C_P_GPIO1C2_PD_MASK                 (0x1U << GPIO1_IOC_GPIO1C_P_GPIO1C2_PD_SHIFT)                /* 0x00000020 */
#define GPIO1_IOC_GPIO1C_P_GPIO1C3_PU_SHIFT                (6U)
#define GPIO1_IOC_GPIO1C_P_GPIO1C3_PU_MASK                 (0x1U << GPIO1_IOC_GPIO1C_P_GPIO1C3_PU_SHIFT)                /* 0x00000040 */
#define GPIO1_IOC_GPIO1C_P_GPIO1C3_PD_SHIFT                (7U)
#define GPIO1_IOC_GPIO1C_P_GPIO1C3_PD_MASK                 (0x1U << GPIO1_IOC_GPIO1C_P_GPIO1C3_PD_SHIFT)                /* 0x00000080 */
#define GPIO1_IOC_GPIO1C_P_GPIO1C4_PU_SHIFT                (8U)
#define GPIO1_IOC_GPIO1C_P_GPIO1C4_PU_MASK                 (0x1U << GPIO1_IOC_GPIO1C_P_GPIO1C4_PU_SHIFT)                /* 0x00000100 */
#define GPIO1_IOC_GPIO1C_P_GPIO1C4_PD_SHIFT                (9U)
#define GPIO1_IOC_GPIO1C_P_GPIO1C4_PD_MASK                 (0x1U << GPIO1_IOC_GPIO1C_P_GPIO1C4_PD_SHIFT)                /* 0x00000200 */
#define GPIO1_IOC_GPIO1C_P_GPIO1C5_PU_SHIFT                (10U)
#define GPIO1_IOC_GPIO1C_P_GPIO1C5_PU_MASK                 (0x1U << GPIO1_IOC_GPIO1C_P_GPIO1C5_PU_SHIFT)                /* 0x00000400 */
#define GPIO1_IOC_GPIO1C_P_GPIO1C5_PD_SHIFT                (11U)
#define GPIO1_IOC_GPIO1C_P_GPIO1C5_PD_MASK                 (0x1U << GPIO1_IOC_GPIO1C_P_GPIO1C5_PD_SHIFT)                /* 0x00000800 */
#define GPIO1_IOC_GPIO1C_P_GPIO1C6_PU_SHIFT                (12U)
#define GPIO1_IOC_GPIO1C_P_GPIO1C6_PU_MASK                 (0x1U << GPIO1_IOC_GPIO1C_P_GPIO1C6_PU_SHIFT)                /* 0x00001000 */
#define GPIO1_IOC_GPIO1C_P_GPIO1C6_PD_SHIFT                (13U)
#define GPIO1_IOC_GPIO1C_P_GPIO1C6_PD_MASK                 (0x1U << GPIO1_IOC_GPIO1C_P_GPIO1C6_PD_SHIFT)                /* 0x00002000 */
#define GPIO1_IOC_GPIO1C_P_GPIO1C7_PU_SHIFT                (14U)
#define GPIO1_IOC_GPIO1C_P_GPIO1C7_PU_MASK                 (0x1U << GPIO1_IOC_GPIO1C_P_GPIO1C7_PU_SHIFT)                /* 0x00004000 */
#define GPIO1_IOC_GPIO1C_P_GPIO1C7_PD_SHIFT                (15U)
#define GPIO1_IOC_GPIO1C_P_GPIO1C7_PD_MASK                 (0x1U << GPIO1_IOC_GPIO1C_P_GPIO1C7_PD_SHIFT)                /* 0x00008000 */
/* GPIO1D_P */
#define GPIO1_IOC_GPIO1D_P_OFFSET                          (0x1CCU)
#define GPIO1_IOC_GPIO1D_P_GPIO1D0_PU_SHIFT                (0U)
#define GPIO1_IOC_GPIO1D_P_GPIO1D0_PU_MASK                 (0x1U << GPIO1_IOC_GPIO1D_P_GPIO1D0_PU_SHIFT)                /* 0x00000001 */
#define GPIO1_IOC_GPIO1D_P_GPIO1D0_PD_SHIFT                (1U)
#define GPIO1_IOC_GPIO1D_P_GPIO1D0_PD_MASK                 (0x1U << GPIO1_IOC_GPIO1D_P_GPIO1D0_PD_SHIFT)                /* 0x00000002 */
#define GPIO1_IOC_GPIO1D_P_GPIO1D1_PU_SHIFT                (2U)
#define GPIO1_IOC_GPIO1D_P_GPIO1D1_PU_MASK                 (0x1U << GPIO1_IOC_GPIO1D_P_GPIO1D1_PU_SHIFT)                /* 0x00000004 */
#define GPIO1_IOC_GPIO1D_P_GPIO1D1_PD_SHIFT                (3U)
#define GPIO1_IOC_GPIO1D_P_GPIO1D1_PD_MASK                 (0x1U << GPIO1_IOC_GPIO1D_P_GPIO1D1_PD_SHIFT)                /* 0x00000008 */
#define GPIO1_IOC_GPIO1D_P_GPIO1D2_PU_SHIFT                (4U)
#define GPIO1_IOC_GPIO1D_P_GPIO1D2_PU_MASK                 (0x1U << GPIO1_IOC_GPIO1D_P_GPIO1D2_PU_SHIFT)                /* 0x00000010 */
#define GPIO1_IOC_GPIO1D_P_GPIO1D2_PD_SHIFT                (5U)
#define GPIO1_IOC_GPIO1D_P_GPIO1D2_PD_MASK                 (0x1U << GPIO1_IOC_GPIO1D_P_GPIO1D2_PD_SHIFT)                /* 0x00000020 */
#define GPIO1_IOC_GPIO1D_P_GPIO1D3_PU_SHIFT                (6U)
#define GPIO1_IOC_GPIO1D_P_GPIO1D3_PU_MASK                 (0x1U << GPIO1_IOC_GPIO1D_P_GPIO1D3_PU_SHIFT)                /* 0x00000040 */
#define GPIO1_IOC_GPIO1D_P_GPIO1D3_PD_SHIFT                (7U)
#define GPIO1_IOC_GPIO1D_P_GPIO1D3_PD_MASK                 (0x1U << GPIO1_IOC_GPIO1D_P_GPIO1D3_PD_SHIFT)                /* 0x00000080 */
/* GPIO1A_SUS */
#define GPIO1_IOC_GPIO1A_SUS_OFFSET                        (0x200U)
#define GPIO1_IOC_GPIO1A_SUS_GPIO1A0_SUS_SHIFT             (0U)
#define GPIO1_IOC_GPIO1A_SUS_GPIO1A0_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1A_SUS_GPIO1A0_SUS_SHIFT)             /* 0x00000001 */
#define GPIO1_IOC_GPIO1A_SUS_GPIO1A1_SUS_SHIFT             (1U)
#define GPIO1_IOC_GPIO1A_SUS_GPIO1A1_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1A_SUS_GPIO1A1_SUS_SHIFT)             /* 0x00000002 */
#define GPIO1_IOC_GPIO1A_SUS_GPIO1A2_SUS_SHIFT             (2U)
#define GPIO1_IOC_GPIO1A_SUS_GPIO1A2_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1A_SUS_GPIO1A2_SUS_SHIFT)             /* 0x00000004 */
#define GPIO1_IOC_GPIO1A_SUS_GPIO1A3_SUS_SHIFT             (3U)
#define GPIO1_IOC_GPIO1A_SUS_GPIO1A3_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1A_SUS_GPIO1A3_SUS_SHIFT)             /* 0x00000008 */
#define GPIO1_IOC_GPIO1A_SUS_GPIO1A4_SUS_SHIFT             (4U)
#define GPIO1_IOC_GPIO1A_SUS_GPIO1A4_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1A_SUS_GPIO1A4_SUS_SHIFT)             /* 0x00000010 */
/* GPIO1B_SUS */
#define GPIO1_IOC_GPIO1B_SUS_OFFSET                        (0x204U)
#define GPIO1_IOC_GPIO1B_SUS_GPIO1B0_SUS_SHIFT             (0U)
#define GPIO1_IOC_GPIO1B_SUS_GPIO1B0_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1B_SUS_GPIO1B0_SUS_SHIFT)             /* 0x00000001 */
#define GPIO1_IOC_GPIO1B_SUS_GPIO1B1_SUS_SHIFT             (1U)
#define GPIO1_IOC_GPIO1B_SUS_GPIO1B1_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1B_SUS_GPIO1B1_SUS_SHIFT)             /* 0x00000002 */
#define GPIO1_IOC_GPIO1B_SUS_GPIO1B2_SUS_SHIFT             (2U)
#define GPIO1_IOC_GPIO1B_SUS_GPIO1B2_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1B_SUS_GPIO1B2_SUS_SHIFT)             /* 0x00000004 */
#define GPIO1_IOC_GPIO1B_SUS_GPIO1B3_SUS_SHIFT             (3U)
#define GPIO1_IOC_GPIO1B_SUS_GPIO1B3_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1B_SUS_GPIO1B3_SUS_SHIFT)             /* 0x00000008 */
/* GPIO1C_SUS */
#define GPIO1_IOC_GPIO1C_SUS_OFFSET                        (0x208U)
#define GPIO1_IOC_GPIO1C_SUS_GPIO1C0_SUS_SHIFT             (0U)
#define GPIO1_IOC_GPIO1C_SUS_GPIO1C0_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1C_SUS_GPIO1C0_SUS_SHIFT)             /* 0x00000001 */
#define GPIO1_IOC_GPIO1C_SUS_GPIO1C1_SUS_SHIFT             (1U)
#define GPIO1_IOC_GPIO1C_SUS_GPIO1C1_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1C_SUS_GPIO1C1_SUS_SHIFT)             /* 0x00000002 */
#define GPIO1_IOC_GPIO1C_SUS_GPIO1C2_SUS_SHIFT             (2U)
#define GPIO1_IOC_GPIO1C_SUS_GPIO1C2_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1C_SUS_GPIO1C2_SUS_SHIFT)             /* 0x00000004 */
#define GPIO1_IOC_GPIO1C_SUS_GPIO1C3_SUS_SHIFT             (3U)
#define GPIO1_IOC_GPIO1C_SUS_GPIO1C3_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1C_SUS_GPIO1C3_SUS_SHIFT)             /* 0x00000008 */
#define GPIO1_IOC_GPIO1C_SUS_GPIO1C4_SUS_SHIFT             (4U)
#define GPIO1_IOC_GPIO1C_SUS_GPIO1C4_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1C_SUS_GPIO1C4_SUS_SHIFT)             /* 0x00000010 */
#define GPIO1_IOC_GPIO1C_SUS_GPIO1C5_SUS_SHIFT             (5U)
#define GPIO1_IOC_GPIO1C_SUS_GPIO1C5_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1C_SUS_GPIO1C5_SUS_SHIFT)             /* 0x00000020 */
#define GPIO1_IOC_GPIO1C_SUS_GPIO1C6_SUS_SHIFT             (6U)
#define GPIO1_IOC_GPIO1C_SUS_GPIO1C6_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1C_SUS_GPIO1C6_SUS_SHIFT)             /* 0x00000040 */
#define GPIO1_IOC_GPIO1C_SUS_GPIO1C7_SUS_SHIFT             (7U)
#define GPIO1_IOC_GPIO1C_SUS_GPIO1C7_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1C_SUS_GPIO1C7_SUS_SHIFT)             /* 0x00000080 */
/* GPIO1D_SUS */
#define GPIO1_IOC_GPIO1D_SUS_OFFSET                        (0x20CU)
#define GPIO1_IOC_GPIO1D_SUS_GPIO1D0_SUS_SHIFT             (0U)
#define GPIO1_IOC_GPIO1D_SUS_GPIO1D0_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1D_SUS_GPIO1D0_SUS_SHIFT)             /* 0x00000001 */
#define GPIO1_IOC_GPIO1D_SUS_GPIO1D1_SUS_SHIFT             (1U)
#define GPIO1_IOC_GPIO1D_SUS_GPIO1D1_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1D_SUS_GPIO1D1_SUS_SHIFT)             /* 0x00000002 */
#define GPIO1_IOC_GPIO1D_SUS_GPIO1D2_SUS_SHIFT             (2U)
#define GPIO1_IOC_GPIO1D_SUS_GPIO1D2_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1D_SUS_GPIO1D2_SUS_SHIFT)             /* 0x00000004 */
#define GPIO1_IOC_GPIO1D_SUS_GPIO1D3_SUS_SHIFT             (3U)
#define GPIO1_IOC_GPIO1D_SUS_GPIO1D3_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1D_SUS_GPIO1D3_SUS_SHIFT)             /* 0x00000008 */
/* GPIO1A_SL */
#define GPIO1_IOC_GPIO1A_SL_OFFSET                         (0x240U)
#define GPIO1_IOC_GPIO1A_SL_GPIO1A0_SL_SHIFT               (0U)
#define GPIO1_IOC_GPIO1A_SL_GPIO1A0_SL_MASK                (0x3U << GPIO1_IOC_GPIO1A_SL_GPIO1A0_SL_SHIFT)               /* 0x00000003 */
#define GPIO1_IOC_GPIO1A_SL_GPIO1A1_SL_SHIFT               (2U)
#define GPIO1_IOC_GPIO1A_SL_GPIO1A1_SL_MASK                (0x3U << GPIO1_IOC_GPIO1A_SL_GPIO1A1_SL_SHIFT)               /* 0x0000000C */
#define GPIO1_IOC_GPIO1A_SL_GPIO1A2_SL_SHIFT               (4U)
#define GPIO1_IOC_GPIO1A_SL_GPIO1A2_SL_MASK                (0x3U << GPIO1_IOC_GPIO1A_SL_GPIO1A2_SL_SHIFT)               /* 0x00000030 */
#define GPIO1_IOC_GPIO1A_SL_GPIO1A3_SL_SHIFT               (6U)
#define GPIO1_IOC_GPIO1A_SL_GPIO1A3_SL_MASK                (0x3U << GPIO1_IOC_GPIO1A_SL_GPIO1A3_SL_SHIFT)               /* 0x000000C0 */
#define GPIO1_IOC_GPIO1A_SL_GPIO1A4_SL_SHIFT               (8U)
#define GPIO1_IOC_GPIO1A_SL_GPIO1A4_SL_MASK                (0x3U << GPIO1_IOC_GPIO1A_SL_GPIO1A4_SL_SHIFT)               /* 0x00000300 */
/* GPIO1B_SL */
#define GPIO1_IOC_GPIO1B_SL_OFFSET                         (0x244U)
#define GPIO1_IOC_GPIO1B_SL_GPIO1B0_SL_SHIFT               (0U)
#define GPIO1_IOC_GPIO1B_SL_GPIO1B0_SL_MASK                (0x3U << GPIO1_IOC_GPIO1B_SL_GPIO1B0_SL_SHIFT)               /* 0x00000003 */
#define GPIO1_IOC_GPIO1B_SL_GPIO1B1_SL_SHIFT               (2U)
#define GPIO1_IOC_GPIO1B_SL_GPIO1B1_SL_MASK                (0x3U << GPIO1_IOC_GPIO1B_SL_GPIO1B1_SL_SHIFT)               /* 0x0000000C */
#define GPIO1_IOC_GPIO1B_SL_GPIO1B2_SL_SHIFT               (4U)
#define GPIO1_IOC_GPIO1B_SL_GPIO1B2_SL_MASK                (0x3U << GPIO1_IOC_GPIO1B_SL_GPIO1B2_SL_SHIFT)               /* 0x00000030 */
#define GPIO1_IOC_GPIO1B_SL_GPIO1B3_SL_SHIFT               (6U)
#define GPIO1_IOC_GPIO1B_SL_GPIO1B3_SL_MASK                (0x3U << GPIO1_IOC_GPIO1B_SL_GPIO1B3_SL_SHIFT)               /* 0x000000C0 */
/* GPIO1C_SL */
#define GPIO1_IOC_GPIO1C_SL_OFFSET                         (0x248U)
#define GPIO1_IOC_GPIO1C_SL_GPIO1C0_SL_SHIFT               (0U)
#define GPIO1_IOC_GPIO1C_SL_GPIO1C0_SL_MASK                (0x3U << GPIO1_IOC_GPIO1C_SL_GPIO1C0_SL_SHIFT)               /* 0x00000003 */
#define GPIO1_IOC_GPIO1C_SL_GPIO1C1_SL_SHIFT               (2U)
#define GPIO1_IOC_GPIO1C_SL_GPIO1C1_SL_MASK                (0x3U << GPIO1_IOC_GPIO1C_SL_GPIO1C1_SL_SHIFT)               /* 0x0000000C */
#define GPIO1_IOC_GPIO1C_SL_GPIO1C2_SL_SHIFT               (4U)
#define GPIO1_IOC_GPIO1C_SL_GPIO1C2_SL_MASK                (0x3U << GPIO1_IOC_GPIO1C_SL_GPIO1C2_SL_SHIFT)               /* 0x00000030 */
#define GPIO1_IOC_GPIO1C_SL_GPIO1C3_SL_SHIFT               (6U)
#define GPIO1_IOC_GPIO1C_SL_GPIO1C3_SL_MASK                (0x3U << GPIO1_IOC_GPIO1C_SL_GPIO1C3_SL_SHIFT)               /* 0x000000C0 */
#define GPIO1_IOC_GPIO1C_SL_GPIO1C4_SL_SHIFT               (8U)
#define GPIO1_IOC_GPIO1C_SL_GPIO1C4_SL_MASK                (0x3U << GPIO1_IOC_GPIO1C_SL_GPIO1C4_SL_SHIFT)               /* 0x00000300 */
#define GPIO1_IOC_GPIO1C_SL_GPIO1C5_SL_SHIFT               (10U)
#define GPIO1_IOC_GPIO1C_SL_GPIO1C5_SL_MASK                (0x3U << GPIO1_IOC_GPIO1C_SL_GPIO1C5_SL_SHIFT)               /* 0x00000C00 */
#define GPIO1_IOC_GPIO1C_SL_GPIO1C6_SL_SHIFT               (12U)
#define GPIO1_IOC_GPIO1C_SL_GPIO1C6_SL_MASK                (0x3U << GPIO1_IOC_GPIO1C_SL_GPIO1C6_SL_SHIFT)               /* 0x00003000 */
#define GPIO1_IOC_GPIO1C_SL_GPIO1C7_SL_SHIFT               (14U)
#define GPIO1_IOC_GPIO1C_SL_GPIO1C7_SL_MASK                (0x3U << GPIO1_IOC_GPIO1C_SL_GPIO1C7_SL_SHIFT)               /* 0x0000C000 */
/* GPIO1D_SL */
#define GPIO1_IOC_GPIO1D_SL_OFFSET                         (0x24CU)
#define GPIO1_IOC_GPIO1D_SL_GPIO1D0_SL_SHIFT               (0U)
#define GPIO1_IOC_GPIO1D_SL_GPIO1D0_SL_MASK                (0x3U << GPIO1_IOC_GPIO1D_SL_GPIO1D0_SL_SHIFT)               /* 0x00000003 */
#define GPIO1_IOC_GPIO1D_SL_GPIO1D1_SL_SHIFT               (2U)
#define GPIO1_IOC_GPIO1D_SL_GPIO1D1_SL_MASK                (0x3U << GPIO1_IOC_GPIO1D_SL_GPIO1D1_SL_SHIFT)               /* 0x0000000C */
#define GPIO1_IOC_GPIO1D_SL_GPIO1D2_SL_SHIFT               (4U)
#define GPIO1_IOC_GPIO1D_SL_GPIO1D2_SL_MASK                (0x3U << GPIO1_IOC_GPIO1D_SL_GPIO1D2_SL_SHIFT)               /* 0x00000030 */
#define GPIO1_IOC_GPIO1D_SL_GPIO1D3_SL_SHIFT               (6U)
#define GPIO1_IOC_GPIO1D_SL_GPIO1D3_SL_MASK                (0x3U << GPIO1_IOC_GPIO1D_SL_GPIO1D3_SL_SHIFT)               /* 0x000000C0 */
/* GPIO1A_IE_SMT */
#define GPIO1_IOC_GPIO1A_IE_SMT_OFFSET                     (0x280U)
#define GPIO1_IOC_GPIO1A_IE_SMT_GPIO1A0_SMT_SHIFT          (0U)
#define GPIO1_IOC_GPIO1A_IE_SMT_GPIO1A0_SMT_MASK           (0x1U << GPIO1_IOC_GPIO1A_IE_SMT_GPIO1A0_SMT_SHIFT)          /* 0x00000001 */
#define GPIO1_IOC_GPIO1A_IE_SMT_GPIO1A1_SMT_SHIFT          (1U)
#define GPIO1_IOC_GPIO1A_IE_SMT_GPIO1A1_SMT_MASK           (0x1U << GPIO1_IOC_GPIO1A_IE_SMT_GPIO1A1_SMT_SHIFT)          /* 0x00000002 */
#define GPIO1_IOC_GPIO1A_IE_SMT_GPIO1A2_SMT_SHIFT          (2U)
#define GPIO1_IOC_GPIO1A_IE_SMT_GPIO1A2_SMT_MASK           (0x1U << GPIO1_IOC_GPIO1A_IE_SMT_GPIO1A2_SMT_SHIFT)          /* 0x00000004 */
#define GPIO1_IOC_GPIO1A_IE_SMT_GPIO1A3_SMT_SHIFT          (3U)
#define GPIO1_IOC_GPIO1A_IE_SMT_GPIO1A3_SMT_MASK           (0x1U << GPIO1_IOC_GPIO1A_IE_SMT_GPIO1A3_SMT_SHIFT)          /* 0x00000008 */
#define GPIO1_IOC_GPIO1A_IE_SMT_GPIO1A4_SMT_SHIFT          (4U)
#define GPIO1_IOC_GPIO1A_IE_SMT_GPIO1A4_SMT_MASK           (0x1U << GPIO1_IOC_GPIO1A_IE_SMT_GPIO1A4_SMT_SHIFT)          /* 0x00000010 */
/* GPIO1B_IE_SMT */
#define GPIO1_IOC_GPIO1B_IE_SMT_OFFSET                     (0x284U)
#define GPIO1_IOC_GPIO1B_IE_SMT_GPIO1B0_SMT_SHIFT          (0U)
#define GPIO1_IOC_GPIO1B_IE_SMT_GPIO1B0_SMT_MASK           (0x1U << GPIO1_IOC_GPIO1B_IE_SMT_GPIO1B0_SMT_SHIFT)          /* 0x00000001 */
#define GPIO1_IOC_GPIO1B_IE_SMT_GPIO1B1_SMT_SHIFT          (1U)
#define GPIO1_IOC_GPIO1B_IE_SMT_GPIO1B1_SMT_MASK           (0x1U << GPIO1_IOC_GPIO1B_IE_SMT_GPIO1B1_SMT_SHIFT)          /* 0x00000002 */
#define GPIO1_IOC_GPIO1B_IE_SMT_GPIO1B2_SMT_SHIFT          (2U)
#define GPIO1_IOC_GPIO1B_IE_SMT_GPIO1B2_SMT_MASK           (0x1U << GPIO1_IOC_GPIO1B_IE_SMT_GPIO1B2_SMT_SHIFT)          /* 0x00000004 */
#define GPIO1_IOC_GPIO1B_IE_SMT_GPIO1B3_SMT_SHIFT          (3U)
#define GPIO1_IOC_GPIO1B_IE_SMT_GPIO1B3_SMT_MASK           (0x1U << GPIO1_IOC_GPIO1B_IE_SMT_GPIO1B3_SMT_SHIFT)          /* 0x00000008 */
/* GPIO1C_IE_SMT */
#define GPIO1_IOC_GPIO1C_IE_SMT_OFFSET                     (0x288U)
#define GPIO1_IOC_GPIO1C_IE_SMT_GPIO1C0_SMT_SHIFT          (0U)
#define GPIO1_IOC_GPIO1C_IE_SMT_GPIO1C0_SMT_MASK           (0x1U << GPIO1_IOC_GPIO1C_IE_SMT_GPIO1C0_SMT_SHIFT)          /* 0x00000001 */
#define GPIO1_IOC_GPIO1C_IE_SMT_GPIO1C1_SMT_SHIFT          (1U)
#define GPIO1_IOC_GPIO1C_IE_SMT_GPIO1C1_SMT_MASK           (0x1U << GPIO1_IOC_GPIO1C_IE_SMT_GPIO1C1_SMT_SHIFT)          /* 0x00000002 */
#define GPIO1_IOC_GPIO1C_IE_SMT_GPIO1C2_SMT_SHIFT          (2U)
#define GPIO1_IOC_GPIO1C_IE_SMT_GPIO1C2_SMT_MASK           (0x1U << GPIO1_IOC_GPIO1C_IE_SMT_GPIO1C2_SMT_SHIFT)          /* 0x00000004 */
#define GPIO1_IOC_GPIO1C_IE_SMT_GPIO1C3_SMT_SHIFT          (3U)
#define GPIO1_IOC_GPIO1C_IE_SMT_GPIO1C3_SMT_MASK           (0x1U << GPIO1_IOC_GPIO1C_IE_SMT_GPIO1C3_SMT_SHIFT)          /* 0x00000008 */
#define GPIO1_IOC_GPIO1C_IE_SMT_GPIO1C4_SMT_SHIFT          (4U)
#define GPIO1_IOC_GPIO1C_IE_SMT_GPIO1C4_SMT_MASK           (0x1U << GPIO1_IOC_GPIO1C_IE_SMT_GPIO1C4_SMT_SHIFT)          /* 0x00000010 */
#define GPIO1_IOC_GPIO1C_IE_SMT_GPIO1C5_SMT_SHIFT          (5U)
#define GPIO1_IOC_GPIO1C_IE_SMT_GPIO1C5_SMT_MASK           (0x1U << GPIO1_IOC_GPIO1C_IE_SMT_GPIO1C5_SMT_SHIFT)          /* 0x00000020 */
#define GPIO1_IOC_GPIO1C_IE_SMT_GPIO1C6_SMT_SHIFT          (6U)
#define GPIO1_IOC_GPIO1C_IE_SMT_GPIO1C6_SMT_MASK           (0x1U << GPIO1_IOC_GPIO1C_IE_SMT_GPIO1C6_SMT_SHIFT)          /* 0x00000040 */
#define GPIO1_IOC_GPIO1C_IE_SMT_GPIO1C7_SMT_SHIFT          (7U)
#define GPIO1_IOC_GPIO1C_IE_SMT_GPIO1C7_SMT_MASK           (0x1U << GPIO1_IOC_GPIO1C_IE_SMT_GPIO1C7_SMT_SHIFT)          /* 0x00000080 */
/* GPIO1D_IE_SMT */
#define GPIO1_IOC_GPIO1D_IE_SMT_OFFSET                     (0x28CU)
#define GPIO1_IOC_GPIO1D_IE_SMT_GPIO1D0_SMT_SHIFT          (0U)
#define GPIO1_IOC_GPIO1D_IE_SMT_GPIO1D0_SMT_MASK           (0x1U << GPIO1_IOC_GPIO1D_IE_SMT_GPIO1D0_SMT_SHIFT)          /* 0x00000001 */
#define GPIO1_IOC_GPIO1D_IE_SMT_GPIO1D1_SMT_SHIFT          (1U)
#define GPIO1_IOC_GPIO1D_IE_SMT_GPIO1D1_SMT_MASK           (0x1U << GPIO1_IOC_GPIO1D_IE_SMT_GPIO1D1_SMT_SHIFT)          /* 0x00000002 */
#define GPIO1_IOC_GPIO1D_IE_SMT_GPIO1D2_SMT_SHIFT          (2U)
#define GPIO1_IOC_GPIO1D_IE_SMT_GPIO1D2_SMT_MASK           (0x1U << GPIO1_IOC_GPIO1D_IE_SMT_GPIO1D2_SMT_SHIFT)          /* 0x00000004 */
#define GPIO1_IOC_GPIO1D_IE_SMT_GPIO1D3_SMT_SHIFT          (3U)
#define GPIO1_IOC_GPIO1D_IE_SMT_GPIO1D3_SMT_MASK           (0x1U << GPIO1_IOC_GPIO1D_IE_SMT_GPIO1D3_SMT_SHIFT)          /* 0x00000008 */
/* GPIO1A_OD */
#define GPIO1_IOC_GPIO1A_OD_OFFSET                         (0x2C0U)
#define GPIO1_IOC_GPIO1A_OD_GPIO1A0_OD_SHIFT               (0U)
#define GPIO1_IOC_GPIO1A_OD_GPIO1A0_OD_MASK                (0x1U << GPIO1_IOC_GPIO1A_OD_GPIO1A0_OD_SHIFT)               /* 0x00000001 */
#define GPIO1_IOC_GPIO1A_OD_GPIO1A1_OD_SHIFT               (1U)
#define GPIO1_IOC_GPIO1A_OD_GPIO1A1_OD_MASK                (0x1U << GPIO1_IOC_GPIO1A_OD_GPIO1A1_OD_SHIFT)               /* 0x00000002 */
#define GPIO1_IOC_GPIO1A_OD_GPIO1A2_OD_SHIFT               (2U)
#define GPIO1_IOC_GPIO1A_OD_GPIO1A2_OD_MASK                (0x1U << GPIO1_IOC_GPIO1A_OD_GPIO1A2_OD_SHIFT)               /* 0x00000004 */
#define GPIO1_IOC_GPIO1A_OD_GPIO1A3_OD_SHIFT               (3U)
#define GPIO1_IOC_GPIO1A_OD_GPIO1A3_OD_MASK                (0x1U << GPIO1_IOC_GPIO1A_OD_GPIO1A3_OD_SHIFT)               /* 0x00000008 */
#define GPIO1_IOC_GPIO1A_OD_GPIO1A4_OD_SHIFT               (4U)
#define GPIO1_IOC_GPIO1A_OD_GPIO1A4_OD_MASK                (0x1U << GPIO1_IOC_GPIO1A_OD_GPIO1A4_OD_SHIFT)               /* 0x00000010 */
/* GPIO1B_OD */
#define GPIO1_IOC_GPIO1B_OD_OFFSET                         (0x2C4U)
#define GPIO1_IOC_GPIO1B_OD_GPIO1B0_OD_SHIFT               (0U)
#define GPIO1_IOC_GPIO1B_OD_GPIO1B0_OD_MASK                (0x1U << GPIO1_IOC_GPIO1B_OD_GPIO1B0_OD_SHIFT)               /* 0x00000001 */
#define GPIO1_IOC_GPIO1B_OD_GPIO1B1_OD_SHIFT               (1U)
#define GPIO1_IOC_GPIO1B_OD_GPIO1B1_OD_MASK                (0x1U << GPIO1_IOC_GPIO1B_OD_GPIO1B1_OD_SHIFT)               /* 0x00000002 */
#define GPIO1_IOC_GPIO1B_OD_GPIO1B2_OD_SHIFT               (2U)
#define GPIO1_IOC_GPIO1B_OD_GPIO1B2_OD_MASK                (0x1U << GPIO1_IOC_GPIO1B_OD_GPIO1B2_OD_SHIFT)               /* 0x00000004 */
#define GPIO1_IOC_GPIO1B_OD_GPIO1B3_OD_SHIFT               (3U)
#define GPIO1_IOC_GPIO1B_OD_GPIO1B3_OD_MASK                (0x1U << GPIO1_IOC_GPIO1B_OD_GPIO1B3_OD_SHIFT)               /* 0x00000008 */
/* GPIO1C_OD */
#define GPIO1_IOC_GPIO1C_OD_OFFSET                         (0x2C8U)
#define GPIO1_IOC_GPIO1C_OD_GPIO1C0_OD_SHIFT               (0U)
#define GPIO1_IOC_GPIO1C_OD_GPIO1C0_OD_MASK                (0x1U << GPIO1_IOC_GPIO1C_OD_GPIO1C0_OD_SHIFT)               /* 0x00000001 */
#define GPIO1_IOC_GPIO1C_OD_GPIO1C1_OD_SHIFT               (1U)
#define GPIO1_IOC_GPIO1C_OD_GPIO1C1_OD_MASK                (0x1U << GPIO1_IOC_GPIO1C_OD_GPIO1C1_OD_SHIFT)               /* 0x00000002 */
#define GPIO1_IOC_GPIO1C_OD_GPIO1C2_OD_SHIFT               (2U)
#define GPIO1_IOC_GPIO1C_OD_GPIO1C2_OD_MASK                (0x1U << GPIO1_IOC_GPIO1C_OD_GPIO1C2_OD_SHIFT)               /* 0x00000004 */
#define GPIO1_IOC_GPIO1C_OD_GPIO1C3_OD_SHIFT               (3U)
#define GPIO1_IOC_GPIO1C_OD_GPIO1C3_OD_MASK                (0x1U << GPIO1_IOC_GPIO1C_OD_GPIO1C3_OD_SHIFT)               /* 0x00000008 */
#define GPIO1_IOC_GPIO1C_OD_GPIO1C4_OD_SHIFT               (4U)
#define GPIO1_IOC_GPIO1C_OD_GPIO1C4_OD_MASK                (0x1U << GPIO1_IOC_GPIO1C_OD_GPIO1C4_OD_SHIFT)               /* 0x00000010 */
#define GPIO1_IOC_GPIO1C_OD_GPIO1C5_OD_SHIFT               (5U)
#define GPIO1_IOC_GPIO1C_OD_GPIO1C5_OD_MASK                (0x1U << GPIO1_IOC_GPIO1C_OD_GPIO1C5_OD_SHIFT)               /* 0x00000020 */
#define GPIO1_IOC_GPIO1C_OD_GPIO1C6_OD_SHIFT               (6U)
#define GPIO1_IOC_GPIO1C_OD_GPIO1C6_OD_MASK                (0x1U << GPIO1_IOC_GPIO1C_OD_GPIO1C6_OD_SHIFT)               /* 0x00000040 */
#define GPIO1_IOC_GPIO1C_OD_GPIO1C7_OD_SHIFT               (7U)
#define GPIO1_IOC_GPIO1C_OD_GPIO1C7_OD_MASK                (0x1U << GPIO1_IOC_GPIO1C_OD_GPIO1C7_OD_SHIFT)               /* 0x00000080 */
/* GPIO1D_OD */
#define GPIO1_IOC_GPIO1D_OD_OFFSET                         (0x2CCU)
#define GPIO1_IOC_GPIO1D_OD_GPIO1D0_OD_SHIFT               (0U)
#define GPIO1_IOC_GPIO1D_OD_GPIO1D0_OD_MASK                (0x1U << GPIO1_IOC_GPIO1D_OD_GPIO1D0_OD_SHIFT)               /* 0x00000001 */
#define GPIO1_IOC_GPIO1D_OD_GPIO1D1_OD_SHIFT               (1U)
#define GPIO1_IOC_GPIO1D_OD_GPIO1D1_OD_MASK                (0x1U << GPIO1_IOC_GPIO1D_OD_GPIO1D1_OD_SHIFT)               /* 0x00000002 */
#define GPIO1_IOC_GPIO1D_OD_GPIO1D2_OD_SHIFT               (2U)
#define GPIO1_IOC_GPIO1D_OD_GPIO1D2_OD_MASK                (0x1U << GPIO1_IOC_GPIO1D_OD_GPIO1D2_OD_SHIFT)               /* 0x00000004 */
#define GPIO1_IOC_GPIO1D_OD_GPIO1D3_OD_SHIFT               (3U)
#define GPIO1_IOC_GPIO1D_OD_GPIO1D3_OD_MASK                (0x1U << GPIO1_IOC_GPIO1D_OD_GPIO1D3_OD_SHIFT)               /* 0x00000008 */
/* FORCE_JTAG_UART */
#define GPIO1_IOC_FORCE_JTAG_UART_OFFSET                   (0x2F4U)
#define GPIO1_IOC_FORCE_JTAG_UART_JTAG_UART_AUTO_SWITCH_EN_SHIFT (0U)
#define GPIO1_IOC_FORCE_JTAG_UART_JTAG_UART_AUTO_SWITCH_EN_MASK (0x1U << GPIO1_IOC_FORCE_JTAG_UART_JTAG_UART_AUTO_SWITCH_EN_SHIFT) /* 0x00000001 */
/***************************************GPIO2_IOC****************************************/
/* GPIO2A_IOMUX_SEL_L */
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_L_OFFSET                (0x20U)
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A0_SEL_SHIFT     (0U)
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A0_SEL_MASK      (0x7U << GPIO2_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A0_SEL_SHIFT)     /* 0x00000007 */
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A1_SEL_SHIFT     (4U)
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A1_SEL_MASK      (0x7U << GPIO2_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A1_SEL_SHIFT)     /* 0x00000070 */
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A2_SEL_SHIFT     (8U)
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A2_SEL_MASK      (0x7U << GPIO2_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A2_SEL_SHIFT)     /* 0x00000700 */
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A3_SEL_SHIFT     (12U)
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A3_SEL_MASK      (0x7U << GPIO2_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A3_SEL_SHIFT)     /* 0x00007000 */
/* GPIO2A_IOMUX_SEL_H */
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_H_OFFSET                (0x24U)
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_H_GPIO2A4_SEL_SHIFT     (0U)
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_H_GPIO2A4_SEL_MASK      (0x7U << GPIO2_IOC_GPIO2A_IOMUX_SEL_H_GPIO2A4_SEL_SHIFT)     /* 0x00000007 */
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_H_GPIO2A5_SEL_SHIFT     (4U)
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_H_GPIO2A5_SEL_MASK      (0x7U << GPIO2_IOC_GPIO2A_IOMUX_SEL_H_GPIO2A5_SEL_SHIFT)     /* 0x00000070 */
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_H_GPIO2A6_SEL_SHIFT     (8U)
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_H_GPIO2A6_SEL_MASK      (0x7U << GPIO2_IOC_GPIO2A_IOMUX_SEL_H_GPIO2A6_SEL_SHIFT)     /* 0x00000700 */
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_H_GPIO2A7_SEL_SHIFT     (12U)
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_H_GPIO2A7_SEL_MASK      (0x7U << GPIO2_IOC_GPIO2A_IOMUX_SEL_H_GPIO2A7_SEL_SHIFT)     /* 0x00007000 */
/* GPIO2B_IOMUX_SEL_L */
#define GPIO2_IOC_GPIO2B_IOMUX_SEL_L_OFFSET                (0x28U)
#define GPIO2_IOC_GPIO2B_IOMUX_SEL_L_GPIO2B0_SEL_SHIFT     (0U)
#define GPIO2_IOC_GPIO2B_IOMUX_SEL_L_GPIO2B0_SEL_MASK      (0x7U << GPIO2_IOC_GPIO2B_IOMUX_SEL_L_GPIO2B0_SEL_SHIFT)     /* 0x00000007 */
#define GPIO2_IOC_GPIO2B_IOMUX_SEL_L_GPIO2B1_SEL_SHIFT     (4U)
#define GPIO2_IOC_GPIO2B_IOMUX_SEL_L_GPIO2B1_SEL_MASK      (0x7U << GPIO2_IOC_GPIO2B_IOMUX_SEL_L_GPIO2B1_SEL_SHIFT)     /* 0x00000070 */
/* GPIO2A_DS0 */
#define GPIO2_IOC_GPIO2A_DS0_OFFSET                        (0xC0U)
#define GPIO2_IOC_GPIO2A_DS0_GPIO2A0_DS_SHIFT              (0U)
#define GPIO2_IOC_GPIO2A_DS0_GPIO2A0_DS_MASK               (0x3FU << GPIO2_IOC_GPIO2A_DS0_GPIO2A0_DS_SHIFT)             /* 0x0000003F */
#define GPIO2_IOC_GPIO2A_DS0_GPIO2A1_DS_SHIFT              (8U)
#define GPIO2_IOC_GPIO2A_DS0_GPIO2A1_DS_MASK               (0x3FU << GPIO2_IOC_GPIO2A_DS0_GPIO2A1_DS_SHIFT)             /* 0x00003F00 */
/* GPIO2A_DS1 */
#define GPIO2_IOC_GPIO2A_DS1_OFFSET                        (0xC4U)
#define GPIO2_IOC_GPIO2A_DS1_GPIO2A2_DS_SHIFT              (0U)
#define GPIO2_IOC_GPIO2A_DS1_GPIO2A2_DS_MASK               (0x3FU << GPIO2_IOC_GPIO2A_DS1_GPIO2A2_DS_SHIFT)             /* 0x0000003F */
#define GPIO2_IOC_GPIO2A_DS1_GPIO2A3_DS_SHIFT              (8U)
#define GPIO2_IOC_GPIO2A_DS1_GPIO2A3_DS_MASK               (0x3FU << GPIO2_IOC_GPIO2A_DS1_GPIO2A3_DS_SHIFT)             /* 0x00003F00 */
/* GPIO2A_DS2 */
#define GPIO2_IOC_GPIO2A_DS2_OFFSET                        (0xC8U)
#define GPIO2_IOC_GPIO2A_DS2_GPIO2A4_DS_SHIFT              (0U)
#define GPIO2_IOC_GPIO2A_DS2_GPIO2A4_DS_MASK               (0x3FU << GPIO2_IOC_GPIO2A_DS2_GPIO2A4_DS_SHIFT)             /* 0x0000003F */
#define GPIO2_IOC_GPIO2A_DS2_GPIO2A5_DS_SHIFT              (8U)
#define GPIO2_IOC_GPIO2A_DS2_GPIO2A5_DS_MASK               (0x3FU << GPIO2_IOC_GPIO2A_DS2_GPIO2A5_DS_SHIFT)             /* 0x00003F00 */
/* GPIO2A_DS3 */
#define GPIO2_IOC_GPIO2A_DS3_OFFSET                        (0xCCU)
#define GPIO2_IOC_GPIO2A_DS3_GPIO2A6_DS_SHIFT              (0U)
#define GPIO2_IOC_GPIO2A_DS3_GPIO2A6_DS_MASK               (0x3FU << GPIO2_IOC_GPIO2A_DS3_GPIO2A6_DS_SHIFT)             /* 0x0000003F */
#define GPIO2_IOC_GPIO2A_DS3_GPIO2A7_DS_SHIFT              (8U)
#define GPIO2_IOC_GPIO2A_DS3_GPIO2A7_DS_MASK               (0x3FU << GPIO2_IOC_GPIO2A_DS3_GPIO2A7_DS_SHIFT)             /* 0x00003F00 */
/* GPIO2B_DS0 */
#define GPIO2_IOC_GPIO2B_DS0_OFFSET                        (0xD0U)
#define GPIO2_IOC_GPIO2B_DS0_GPIO2B0_DS_SHIFT              (0U)
#define GPIO2_IOC_GPIO2B_DS0_GPIO2B0_DS_MASK               (0x3FU << GPIO2_IOC_GPIO2B_DS0_GPIO2B0_DS_SHIFT)             /* 0x0000003F */
#define GPIO2_IOC_GPIO2B_DS0_GPIO2B1_DS_SHIFT              (8U)
#define GPIO2_IOC_GPIO2B_DS0_GPIO2B1_DS_MASK               (0x3FU << GPIO2_IOC_GPIO2B_DS0_GPIO2B1_DS_SHIFT)             /* 0x00003F00 */
/* GPIO2A_IE */
#define GPIO2_IOC_GPIO2A_IE_OFFSET                         (0x190U)
#define GPIO2_IOC_GPIO2A_IE_GPIO2A0_IE_SHIFT               (0U)
#define GPIO2_IOC_GPIO2A_IE_GPIO2A0_IE_MASK                (0x1U << GPIO2_IOC_GPIO2A_IE_GPIO2A0_IE_SHIFT)               /* 0x00000001 */
#define GPIO2_IOC_GPIO2A_IE_GPIO2A1_IE_SHIFT               (1U)
#define GPIO2_IOC_GPIO2A_IE_GPIO2A1_IE_MASK                (0x1U << GPIO2_IOC_GPIO2A_IE_GPIO2A1_IE_SHIFT)               /* 0x00000002 */
#define GPIO2_IOC_GPIO2A_IE_GPIO2A2_IE_SHIFT               (2U)
#define GPIO2_IOC_GPIO2A_IE_GPIO2A2_IE_MASK                (0x1U << GPIO2_IOC_GPIO2A_IE_GPIO2A2_IE_SHIFT)               /* 0x00000004 */
#define GPIO2_IOC_GPIO2A_IE_GPIO2A3_IE_SHIFT               (3U)
#define GPIO2_IOC_GPIO2A_IE_GPIO2A3_IE_MASK                (0x1U << GPIO2_IOC_GPIO2A_IE_GPIO2A3_IE_SHIFT)               /* 0x00000008 */
#define GPIO2_IOC_GPIO2A_IE_GPIO2A4_IE_SHIFT               (4U)
#define GPIO2_IOC_GPIO2A_IE_GPIO2A4_IE_MASK                (0x1U << GPIO2_IOC_GPIO2A_IE_GPIO2A4_IE_SHIFT)               /* 0x00000010 */
#define GPIO2_IOC_GPIO2A_IE_GPIO2A5_IE_SHIFT               (5U)
#define GPIO2_IOC_GPIO2A_IE_GPIO2A5_IE_MASK                (0x1U << GPIO2_IOC_GPIO2A_IE_GPIO2A5_IE_SHIFT)               /* 0x00000020 */
#define GPIO2_IOC_GPIO2A_IE_GPIO2A6_IE_SHIFT               (6U)
#define GPIO2_IOC_GPIO2A_IE_GPIO2A6_IE_MASK                (0x1U << GPIO2_IOC_GPIO2A_IE_GPIO2A6_IE_SHIFT)               /* 0x00000040 */
#define GPIO2_IOC_GPIO2A_IE_GPIO2A7_IE_SHIFT               (7U)
#define GPIO2_IOC_GPIO2A_IE_GPIO2A7_IE_MASK                (0x1U << GPIO2_IOC_GPIO2A_IE_GPIO2A7_IE_SHIFT)               /* 0x00000080 */
/* GPIO2B_IE */
#define GPIO2_IOC_GPIO2B_IE_OFFSET                         (0x194U)
#define GPIO2_IOC_GPIO2B_IE_GPIO2B0_IE_SHIFT               (0U)
#define GPIO2_IOC_GPIO2B_IE_GPIO2B0_IE_MASK                (0x1U << GPIO2_IOC_GPIO2B_IE_GPIO2B0_IE_SHIFT)               /* 0x00000001 */
#define GPIO2_IOC_GPIO2B_IE_GPIO2B1_IE_SHIFT               (1U)
#define GPIO2_IOC_GPIO2B_IE_GPIO2B1_IE_MASK                (0x1U << GPIO2_IOC_GPIO2B_IE_GPIO2B1_IE_SHIFT)               /* 0x00000002 */
/* GPIO2A_P */
#define GPIO2_IOC_GPIO2A_P_OFFSET                          (0x1D0U)
#define GPIO2_IOC_GPIO2A_P_GPIO2A0_PU_SHIFT                (0U)
#define GPIO2_IOC_GPIO2A_P_GPIO2A0_PU_MASK                 (0x1U << GPIO2_IOC_GPIO2A_P_GPIO2A0_PU_SHIFT)                /* 0x00000001 */
#define GPIO2_IOC_GPIO2A_P_GPIO2A0_PD_SHIFT                (1U)
#define GPIO2_IOC_GPIO2A_P_GPIO2A0_PD_MASK                 (0x1U << GPIO2_IOC_GPIO2A_P_GPIO2A0_PD_SHIFT)                /* 0x00000002 */
#define GPIO2_IOC_GPIO2A_P_GPIO2A1_PU_SHIFT                (2U)
#define GPIO2_IOC_GPIO2A_P_GPIO2A1_PU_MASK                 (0x1U << GPIO2_IOC_GPIO2A_P_GPIO2A1_PU_SHIFT)                /* 0x00000004 */
#define GPIO2_IOC_GPIO2A_P_GPIO2A1_PD_SHIFT                (3U)
#define GPIO2_IOC_GPIO2A_P_GPIO2A1_PD_MASK                 (0x1U << GPIO2_IOC_GPIO2A_P_GPIO2A1_PD_SHIFT)                /* 0x00000008 */
#define GPIO2_IOC_GPIO2A_P_GPIO2A2_PU_SHIFT                (4U)
#define GPIO2_IOC_GPIO2A_P_GPIO2A2_PU_MASK                 (0x1U << GPIO2_IOC_GPIO2A_P_GPIO2A2_PU_SHIFT)                /* 0x00000010 */
#define GPIO2_IOC_GPIO2A_P_GPIO2A2_PD_SHIFT                (5U)
#define GPIO2_IOC_GPIO2A_P_GPIO2A2_PD_MASK                 (0x1U << GPIO2_IOC_GPIO2A_P_GPIO2A2_PD_SHIFT)                /* 0x00000020 */
#define GPIO2_IOC_GPIO2A_P_GPIO2A3_PU_SHIFT                (6U)
#define GPIO2_IOC_GPIO2A_P_GPIO2A3_PU_MASK                 (0x1U << GPIO2_IOC_GPIO2A_P_GPIO2A3_PU_SHIFT)                /* 0x00000040 */
#define GPIO2_IOC_GPIO2A_P_GPIO2A3_PD_SHIFT                (7U)
#define GPIO2_IOC_GPIO2A_P_GPIO2A3_PD_MASK                 (0x1U << GPIO2_IOC_GPIO2A_P_GPIO2A3_PD_SHIFT)                /* 0x00000080 */
#define GPIO2_IOC_GPIO2A_P_GPIO2A4_PU_SHIFT                (8U)
#define GPIO2_IOC_GPIO2A_P_GPIO2A4_PU_MASK                 (0x1U << GPIO2_IOC_GPIO2A_P_GPIO2A4_PU_SHIFT)                /* 0x00000100 */
#define GPIO2_IOC_GPIO2A_P_GPIO2A4_PD_SHIFT                (9U)
#define GPIO2_IOC_GPIO2A_P_GPIO2A4_PD_MASK                 (0x1U << GPIO2_IOC_GPIO2A_P_GPIO2A4_PD_SHIFT)                /* 0x00000200 */
#define GPIO2_IOC_GPIO2A_P_GPIO2A5_PU_SHIFT                (10U)
#define GPIO2_IOC_GPIO2A_P_GPIO2A5_PU_MASK                 (0x1U << GPIO2_IOC_GPIO2A_P_GPIO2A5_PU_SHIFT)                /* 0x00000400 */
#define GPIO2_IOC_GPIO2A_P_GPIO2A5_PD_SHIFT                (11U)
#define GPIO2_IOC_GPIO2A_P_GPIO2A5_PD_MASK                 (0x1U << GPIO2_IOC_GPIO2A_P_GPIO2A5_PD_SHIFT)                /* 0x00000800 */
#define GPIO2_IOC_GPIO2A_P_GPIO2A6_PU_SHIFT                (12U)
#define GPIO2_IOC_GPIO2A_P_GPIO2A6_PU_MASK                 (0x1U << GPIO2_IOC_GPIO2A_P_GPIO2A6_PU_SHIFT)                /* 0x00001000 */
#define GPIO2_IOC_GPIO2A_P_GPIO2A6_PD_SHIFT                (13U)
#define GPIO2_IOC_GPIO2A_P_GPIO2A6_PD_MASK                 (0x1U << GPIO2_IOC_GPIO2A_P_GPIO2A6_PD_SHIFT)                /* 0x00002000 */
#define GPIO2_IOC_GPIO2A_P_GPIO2A7_PU_SHIFT                (14U)
#define GPIO2_IOC_GPIO2A_P_GPIO2A7_PU_MASK                 (0x1U << GPIO2_IOC_GPIO2A_P_GPIO2A7_PU_SHIFT)                /* 0x00004000 */
#define GPIO2_IOC_GPIO2A_P_GPIO2A7_PD_SHIFT                (15U)
#define GPIO2_IOC_GPIO2A_P_GPIO2A7_PD_MASK                 (0x1U << GPIO2_IOC_GPIO2A_P_GPIO2A7_PD_SHIFT)                /* 0x00008000 */
/* GPIO2B_P */
#define GPIO2_IOC_GPIO2B_P_OFFSET                          (0x1D4U)
#define GPIO2_IOC_GPIO2B_P_GPIO2B0_PU_SHIFT                (0U)
#define GPIO2_IOC_GPIO2B_P_GPIO2B0_PU_MASK                 (0x1U << GPIO2_IOC_GPIO2B_P_GPIO2B0_PU_SHIFT)                /* 0x00000001 */
#define GPIO2_IOC_GPIO2B_P_GPIO2B0_PD_SHIFT                (1U)
#define GPIO2_IOC_GPIO2B_P_GPIO2B0_PD_MASK                 (0x1U << GPIO2_IOC_GPIO2B_P_GPIO2B0_PD_SHIFT)                /* 0x00000002 */
#define GPIO2_IOC_GPIO2B_P_GPIO2B1_PU_SHIFT                (2U)
#define GPIO2_IOC_GPIO2B_P_GPIO2B1_PU_MASK                 (0x1U << GPIO2_IOC_GPIO2B_P_GPIO2B1_PU_SHIFT)                /* 0x00000004 */
#define GPIO2_IOC_GPIO2B_P_GPIO2B1_PD_SHIFT                (3U)
#define GPIO2_IOC_GPIO2B_P_GPIO2B1_PD_MASK                 (0x1U << GPIO2_IOC_GPIO2B_P_GPIO2B1_PD_SHIFT)                /* 0x00000008 */
/* GPIO2A_SUS */
#define GPIO2_IOC_GPIO2A_SUS_OFFSET                        (0x210U)
#define GPIO2_IOC_GPIO2A_SUS_GPIO2A0_SUS_SHIFT             (0U)
#define GPIO2_IOC_GPIO2A_SUS_GPIO2A0_SUS_MASK              (0x1U << GPIO2_IOC_GPIO2A_SUS_GPIO2A0_SUS_SHIFT)             /* 0x00000001 */
#define GPIO2_IOC_GPIO2A_SUS_GPIO2A1_SUS_SHIFT             (1U)
#define GPIO2_IOC_GPIO2A_SUS_GPIO2A1_SUS_MASK              (0x1U << GPIO2_IOC_GPIO2A_SUS_GPIO2A1_SUS_SHIFT)             /* 0x00000002 */
#define GPIO2_IOC_GPIO2A_SUS_GPIO2A2_SUS_SHIFT             (2U)
#define GPIO2_IOC_GPIO2A_SUS_GPIO2A2_SUS_MASK              (0x1U << GPIO2_IOC_GPIO2A_SUS_GPIO2A2_SUS_SHIFT)             /* 0x00000004 */
#define GPIO2_IOC_GPIO2A_SUS_GPIO2A3_SUS_SHIFT             (3U)
#define GPIO2_IOC_GPIO2A_SUS_GPIO2A3_SUS_MASK              (0x1U << GPIO2_IOC_GPIO2A_SUS_GPIO2A3_SUS_SHIFT)             /* 0x00000008 */
#define GPIO2_IOC_GPIO2A_SUS_GPIO2A4_SUS_SHIFT             (4U)
#define GPIO2_IOC_GPIO2A_SUS_GPIO2A4_SUS_MASK              (0x1U << GPIO2_IOC_GPIO2A_SUS_GPIO2A4_SUS_SHIFT)             /* 0x00000010 */
#define GPIO2_IOC_GPIO2A_SUS_GPIO2A5_SUS_SHIFT             (5U)
#define GPIO2_IOC_GPIO2A_SUS_GPIO2A5_SUS_MASK              (0x1U << GPIO2_IOC_GPIO2A_SUS_GPIO2A5_SUS_SHIFT)             /* 0x00000020 */
#define GPIO2_IOC_GPIO2A_SUS_GPIO2A6_SUS_SHIFT             (6U)
#define GPIO2_IOC_GPIO2A_SUS_GPIO2A6_SUS_MASK              (0x1U << GPIO2_IOC_GPIO2A_SUS_GPIO2A6_SUS_SHIFT)             /* 0x00000040 */
#define GPIO2_IOC_GPIO2A_SUS_GPIO2A7_SUS_SHIFT             (7U)
#define GPIO2_IOC_GPIO2A_SUS_GPIO2A7_SUS_MASK              (0x1U << GPIO2_IOC_GPIO2A_SUS_GPIO2A7_SUS_SHIFT)             /* 0x00000080 */
/* GPIO2B_SUS */
#define GPIO2_IOC_GPIO2B_SUS_OFFSET                        (0x214U)
#define GPIO2_IOC_GPIO2B_SUS_GPIO2B0_SUS_SHIFT             (0U)
#define GPIO2_IOC_GPIO2B_SUS_GPIO2B0_SUS_MASK              (0x1U << GPIO2_IOC_GPIO2B_SUS_GPIO2B0_SUS_SHIFT)             /* 0x00000001 */
#define GPIO2_IOC_GPIO2B_SUS_GPIO2B1_SUS_SHIFT             (1U)
#define GPIO2_IOC_GPIO2B_SUS_GPIO2B1_SUS_MASK              (0x1U << GPIO2_IOC_GPIO2B_SUS_GPIO2B1_SUS_SHIFT)             /* 0x00000002 */
/* GPIO2A_SL */
#define GPIO2_IOC_GPIO2A_SL_OFFSET                         (0x250U)
#define GPIO2_IOC_GPIO2A_SL_GPIO2A0_SL_SHIFT               (0U)
#define GPIO2_IOC_GPIO2A_SL_GPIO2A0_SL_MASK                (0x3U << GPIO2_IOC_GPIO2A_SL_GPIO2A0_SL_SHIFT)               /* 0x00000003 */
#define GPIO2_IOC_GPIO2A_SL_GPIO2A1_SL_SHIFT               (2U)
#define GPIO2_IOC_GPIO2A_SL_GPIO2A1_SL_MASK                (0x3U << GPIO2_IOC_GPIO2A_SL_GPIO2A1_SL_SHIFT)               /* 0x0000000C */
#define GPIO2_IOC_GPIO2A_SL_GPIO2A2_SL_SHIFT               (4U)
#define GPIO2_IOC_GPIO2A_SL_GPIO2A2_SL_MASK                (0x3U << GPIO2_IOC_GPIO2A_SL_GPIO2A2_SL_SHIFT)               /* 0x00000030 */
#define GPIO2_IOC_GPIO2A_SL_GPIO2A3_SL_SHIFT               (6U)
#define GPIO2_IOC_GPIO2A_SL_GPIO2A3_SL_MASK                (0x3U << GPIO2_IOC_GPIO2A_SL_GPIO2A3_SL_SHIFT)               /* 0x000000C0 */
#define GPIO2_IOC_GPIO2A_SL_GPIO2A4_SL_SHIFT               (8U)
#define GPIO2_IOC_GPIO2A_SL_GPIO2A4_SL_MASK                (0x3U << GPIO2_IOC_GPIO2A_SL_GPIO2A4_SL_SHIFT)               /* 0x00000300 */
#define GPIO2_IOC_GPIO2A_SL_GPIO2A5_SL_SHIFT               (10U)
#define GPIO2_IOC_GPIO2A_SL_GPIO2A5_SL_MASK                (0x3U << GPIO2_IOC_GPIO2A_SL_GPIO2A5_SL_SHIFT)               /* 0x00000C00 */
#define GPIO2_IOC_GPIO2A_SL_GPIO2A6_SL_SHIFT               (12U)
#define GPIO2_IOC_GPIO2A_SL_GPIO2A6_SL_MASK                (0x3U << GPIO2_IOC_GPIO2A_SL_GPIO2A6_SL_SHIFT)               /* 0x00003000 */
#define GPIO2_IOC_GPIO2A_SL_GPIO2A7_SL_SHIFT               (14U)
#define GPIO2_IOC_GPIO2A_SL_GPIO2A7_SL_MASK                (0x3U << GPIO2_IOC_GPIO2A_SL_GPIO2A7_SL_SHIFT)               /* 0x0000C000 */
/* GPIO2B_SL */
#define GPIO2_IOC_GPIO2B_SL_OFFSET                         (0x254U)
#define GPIO2_IOC_GPIO2B_SL_GPIO2B0_SL_SHIFT               (0U)
#define GPIO2_IOC_GPIO2B_SL_GPIO2B0_SL_MASK                (0x3U << GPIO2_IOC_GPIO2B_SL_GPIO2B0_SL_SHIFT)               /* 0x00000003 */
#define GPIO2_IOC_GPIO2B_SL_GPIO2B1_SL_SHIFT               (2U)
#define GPIO2_IOC_GPIO2B_SL_GPIO2B1_SL_MASK                (0x3U << GPIO2_IOC_GPIO2B_SL_GPIO2B1_SL_SHIFT)               /* 0x0000000C */
/* GPIO2A_IE_SMT */
#define GPIO2_IOC_GPIO2A_IE_SMT_OFFSET                     (0x290U)
#define GPIO2_IOC_GPIO2A_IE_SMT_GPIO2A0_SMT_SHIFT          (0U)
#define GPIO2_IOC_GPIO2A_IE_SMT_GPIO2A0_SMT_MASK           (0x1U << GPIO2_IOC_GPIO2A_IE_SMT_GPIO2A0_SMT_SHIFT)          /* 0x00000001 */
#define GPIO2_IOC_GPIO2A_IE_SMT_GPIO2A1_SMT_SHIFT          (1U)
#define GPIO2_IOC_GPIO2A_IE_SMT_GPIO2A1_SMT_MASK           (0x1U << GPIO2_IOC_GPIO2A_IE_SMT_GPIO2A1_SMT_SHIFT)          /* 0x00000002 */
#define GPIO2_IOC_GPIO2A_IE_SMT_GPIO2A2_SMT_SHIFT          (2U)
#define GPIO2_IOC_GPIO2A_IE_SMT_GPIO2A2_SMT_MASK           (0x1U << GPIO2_IOC_GPIO2A_IE_SMT_GPIO2A2_SMT_SHIFT)          /* 0x00000004 */
#define GPIO2_IOC_GPIO2A_IE_SMT_GPIO2A3_SMT_SHIFT          (3U)
#define GPIO2_IOC_GPIO2A_IE_SMT_GPIO2A3_SMT_MASK           (0x1U << GPIO2_IOC_GPIO2A_IE_SMT_GPIO2A3_SMT_SHIFT)          /* 0x00000008 */
#define GPIO2_IOC_GPIO2A_IE_SMT_GPIO2A4_SMT_SHIFT          (4U)
#define GPIO2_IOC_GPIO2A_IE_SMT_GPIO2A4_SMT_MASK           (0x1U << GPIO2_IOC_GPIO2A_IE_SMT_GPIO2A4_SMT_SHIFT)          /* 0x00000010 */
#define GPIO2_IOC_GPIO2A_IE_SMT_GPIO2A5_SMT_SHIFT          (5U)
#define GPIO2_IOC_GPIO2A_IE_SMT_GPIO2A5_SMT_MASK           (0x1U << GPIO2_IOC_GPIO2A_IE_SMT_GPIO2A5_SMT_SHIFT)          /* 0x00000020 */
#define GPIO2_IOC_GPIO2A_IE_SMT_GPIO2A6_SMT_SHIFT          (6U)
#define GPIO2_IOC_GPIO2A_IE_SMT_GPIO2A6_SMT_MASK           (0x1U << GPIO2_IOC_GPIO2A_IE_SMT_GPIO2A6_SMT_SHIFT)          /* 0x00000040 */
#define GPIO2_IOC_GPIO2A_IE_SMT_GPIO2A7_SMT_SHIFT          (7U)
#define GPIO2_IOC_GPIO2A_IE_SMT_GPIO2A7_SMT_MASK           (0x1U << GPIO2_IOC_GPIO2A_IE_SMT_GPIO2A7_SMT_SHIFT)          /* 0x00000080 */
/* GPIO2B_IE_SMT */
#define GPIO2_IOC_GPIO2B_IE_SMT_OFFSET                     (0x294U)
#define GPIO2_IOC_GPIO2B_IE_SMT_GPIO2B0_SMT_SHIFT          (0U)
#define GPIO2_IOC_GPIO2B_IE_SMT_GPIO2B0_SMT_MASK           (0x1U << GPIO2_IOC_GPIO2B_IE_SMT_GPIO2B0_SMT_SHIFT)          /* 0x00000001 */
#define GPIO2_IOC_GPIO2B_IE_SMT_GPIO2B1_SMT_SHIFT          (1U)
#define GPIO2_IOC_GPIO2B_IE_SMT_GPIO2B1_SMT_MASK           (0x1U << GPIO2_IOC_GPIO2B_IE_SMT_GPIO2B1_SMT_SHIFT)          /* 0x00000002 */
/* GPIO2A_OD */
#define GPIO2_IOC_GPIO2A_OD_OFFSET                         (0x2D0U)
#define GPIO2_IOC_GPIO2A_OD_GPIO2A0_OD_SHIFT               (0U)
#define GPIO2_IOC_GPIO2A_OD_GPIO2A0_OD_MASK                (0x1U << GPIO2_IOC_GPIO2A_OD_GPIO2A0_OD_SHIFT)               /* 0x00000001 */
#define GPIO2_IOC_GPIO2A_OD_GPIO2A1_OD_SHIFT               (1U)
#define GPIO2_IOC_GPIO2A_OD_GPIO2A1_OD_MASK                (0x1U << GPIO2_IOC_GPIO2A_OD_GPIO2A1_OD_SHIFT)               /* 0x00000002 */
#define GPIO2_IOC_GPIO2A_OD_GPIO2A2_OD_SHIFT               (2U)
#define GPIO2_IOC_GPIO2A_OD_GPIO2A2_OD_MASK                (0x1U << GPIO2_IOC_GPIO2A_OD_GPIO2A2_OD_SHIFT)               /* 0x00000004 */
#define GPIO2_IOC_GPIO2A_OD_GPIO2A3_OD_SHIFT               (3U)
#define GPIO2_IOC_GPIO2A_OD_GPIO2A3_OD_MASK                (0x1U << GPIO2_IOC_GPIO2A_OD_GPIO2A3_OD_SHIFT)               /* 0x00000008 */
#define GPIO2_IOC_GPIO2A_OD_GPIO2A4_OD_SHIFT               (4U)
#define GPIO2_IOC_GPIO2A_OD_GPIO2A4_OD_MASK                (0x1U << GPIO2_IOC_GPIO2A_OD_GPIO2A4_OD_SHIFT)               /* 0x00000010 */
#define GPIO2_IOC_GPIO2A_OD_GPIO2A5_OD_SHIFT               (5U)
#define GPIO2_IOC_GPIO2A_OD_GPIO2A5_OD_MASK                (0x1U << GPIO2_IOC_GPIO2A_OD_GPIO2A5_OD_SHIFT)               /* 0x00000020 */
#define GPIO2_IOC_GPIO2A_OD_GPIO2A6_OD_SHIFT               (6U)
#define GPIO2_IOC_GPIO2A_OD_GPIO2A6_OD_MASK                (0x1U << GPIO2_IOC_GPIO2A_OD_GPIO2A6_OD_SHIFT)               /* 0x00000040 */
#define GPIO2_IOC_GPIO2A_OD_GPIO2A7_OD_SHIFT               (7U)
#define GPIO2_IOC_GPIO2A_OD_GPIO2A7_OD_MASK                (0x1U << GPIO2_IOC_GPIO2A_OD_GPIO2A7_OD_SHIFT)               /* 0x00000080 */
/* GPIO2B_OD */
#define GPIO2_IOC_GPIO2B_OD_OFFSET                         (0x2D4U)
#define GPIO2_IOC_GPIO2B_OD_GPIO2B0_OD_SHIFT               (0U)
#define GPIO2_IOC_GPIO2B_OD_GPIO2B0_OD_MASK                (0x1U << GPIO2_IOC_GPIO2B_OD_GPIO2B0_OD_SHIFT)               /* 0x00000001 */
#define GPIO2_IOC_GPIO2B_OD_GPIO2B1_OD_SHIFT               (1U)
#define GPIO2_IOC_GPIO2B_OD_GPIO2B1_OD_MASK                (0x1U << GPIO2_IOC_GPIO2B_OD_GPIO2B1_OD_SHIFT)               /* 0x00000002 */
/***************************************GPIO3_IOC****************************************/
/* GPIO3A_IOMUX_SEL_L */
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_L_OFFSET                (0x40U)
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A1_SEL_SHIFT     (4U)
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A1_SEL_MASK      (0x7U << GPIO3_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A1_SEL_SHIFT)     /* 0x00000070 */
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A2_SEL_SHIFT     (8U)
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A2_SEL_MASK      (0x7U << GPIO3_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A2_SEL_SHIFT)     /* 0x00000700 */
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A3_SEL_SHIFT     (12U)
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A3_SEL_MASK      (0x7U << GPIO3_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A3_SEL_SHIFT)     /* 0x00007000 */
/* GPIO3A_IOMUX_SEL_H */
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_H_OFFSET                (0x44U)
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A4_SEL_SHIFT     (0U)
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A4_SEL_MASK      (0x7U << GPIO3_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A4_SEL_SHIFT)     /* 0x00000007 */
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A5_SEL_SHIFT     (4U)
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A5_SEL_MASK      (0x7U << GPIO3_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A5_SEL_SHIFT)     /* 0x00000070 */
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A6_SEL_SHIFT     (8U)
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A6_SEL_MASK      (0x7U << GPIO3_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A6_SEL_SHIFT)     /* 0x00000700 */
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A7_SEL_SHIFT     (12U)
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A7_SEL_MASK      (0x7U << GPIO3_IOC_GPIO3A_IOMUX_SEL_H_GPIO3A7_SEL_SHIFT)     /* 0x00007000 */
/* GPIO3B_IOMUX_SEL_L */
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_L_OFFSET                (0x48U)
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B0_SEL_SHIFT     (0U)
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B0_SEL_MASK      (0x7U << GPIO3_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B0_SEL_SHIFT)     /* 0x00000007 */
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B1_SEL_SHIFT     (4U)
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B1_SEL_MASK      (0x7U << GPIO3_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B1_SEL_SHIFT)     /* 0x00000070 */
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B2_SEL_SHIFT     (8U)
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B2_SEL_MASK      (0x7U << GPIO3_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B2_SEL_SHIFT)     /* 0x00000700 */
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B3_SEL_SHIFT     (12U)
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B3_SEL_MASK      (0x7U << GPIO3_IOC_GPIO3B_IOMUX_SEL_L_GPIO3B3_SEL_SHIFT)     /* 0x00007000 */
/* GPIO3B_IOMUX_SEL_H */
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_H_OFFSET                (0x4CU)
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B4_SEL_SHIFT     (0U)
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B4_SEL_MASK      (0x7U << GPIO3_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B4_SEL_SHIFT)     /* 0x00000007 */
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B5_SEL_SHIFT     (4U)
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B5_SEL_MASK      (0x7U << GPIO3_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B5_SEL_SHIFT)     /* 0x00000070 */
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B6_SEL_SHIFT     (8U)
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B6_SEL_MASK      (0x7U << GPIO3_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B6_SEL_SHIFT)     /* 0x00000700 */
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B7_SEL_SHIFT     (12U)
#define GPIO3_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B7_SEL_MASK      (0x7U << GPIO3_IOC_GPIO3B_IOMUX_SEL_H_GPIO3B7_SEL_SHIFT)     /* 0x00007000 */
/* GPIO3C_IOMUX_SEL_L */
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_L_OFFSET                (0x50U)
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C0_SEL_SHIFT     (0U)
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C0_SEL_MASK      (0x7U << GPIO3_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C0_SEL_SHIFT)     /* 0x00000007 */
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C1_SEL_SHIFT     (4U)
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C1_SEL_MASK      (0x7U << GPIO3_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C1_SEL_SHIFT)     /* 0x00000070 */
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C2_SEL_SHIFT     (8U)
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C2_SEL_MASK      (0x7U << GPIO3_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C2_SEL_SHIFT)     /* 0x00000700 */
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C3_SEL_SHIFT     (12U)
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C3_SEL_MASK      (0x7U << GPIO3_IOC_GPIO3C_IOMUX_SEL_L_GPIO3C3_SEL_SHIFT)     /* 0x00007000 */
/* GPIO3C_IOMUX_SEL_H */
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_H_OFFSET                (0x54U)
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C4_SEL_SHIFT     (0U)
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C4_SEL_MASK      (0x7U << GPIO3_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C4_SEL_SHIFT)     /* 0x00000007 */
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C5_SEL_SHIFT     (4U)
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C5_SEL_MASK      (0x7U << GPIO3_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C5_SEL_SHIFT)     /* 0x00000070 */
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C6_SEL_SHIFT     (8U)
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C6_SEL_MASK      (0x7U << GPIO3_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C6_SEL_SHIFT)     /* 0x00000700 */
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C7_SEL_SHIFT     (12U)
#define GPIO3_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C7_SEL_MASK      (0x7U << GPIO3_IOC_GPIO3C_IOMUX_SEL_H_GPIO3C7_SEL_SHIFT)     /* 0x00007000 */
/* GPIO3D_IOMUX_SEL_L */
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_L_OFFSET                (0x58U)
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D0_SEL_SHIFT     (0U)
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D0_SEL_MASK      (0x7U << GPIO3_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D0_SEL_SHIFT)     /* 0x00000007 */
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D1_SEL_SHIFT     (4U)
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D1_SEL_MASK      (0x7U << GPIO3_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D1_SEL_SHIFT)     /* 0x00000070 */
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D2_SEL_SHIFT     (8U)
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D2_SEL_MASK      (0x7U << GPIO3_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D2_SEL_SHIFT)     /* 0x00000700 */
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D3_SEL_SHIFT     (12U)
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D3_SEL_MASK      (0x7U << GPIO3_IOC_GPIO3D_IOMUX_SEL_L_GPIO3D3_SEL_SHIFT)     /* 0x00007000 */
/* GPIO3A_DS0 */
#define GPIO3_IOC_GPIO3A_DS0_OFFSET                        (0x100U)
#define GPIO3_IOC_GPIO3A_DS0_GPIO3A1_DS_SHIFT              (8U)
#define GPIO3_IOC_GPIO3A_DS0_GPIO3A1_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3A_DS0_GPIO3A1_DS_SHIFT)             /* 0x00003F00 */
/* GPIO3A_DS1 */
#define GPIO3_IOC_GPIO3A_DS1_OFFSET                        (0x104U)
#define GPIO3_IOC_GPIO3A_DS1_GPIO3A2_DS_SHIFT              (0U)
#define GPIO3_IOC_GPIO3A_DS1_GPIO3A2_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3A_DS1_GPIO3A2_DS_SHIFT)             /* 0x0000003F */
#define GPIO3_IOC_GPIO3A_DS1_GPIO3A3_DS_SHIFT              (8U)
#define GPIO3_IOC_GPIO3A_DS1_GPIO3A3_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3A_DS1_GPIO3A3_DS_SHIFT)             /* 0x00003F00 */
/* GPIO3A_DS2 */
#define GPIO3_IOC_GPIO3A_DS2_OFFSET                        (0x108U)
#define GPIO3_IOC_GPIO3A_DS2_GPIO3A4_DS_SHIFT              (0U)
#define GPIO3_IOC_GPIO3A_DS2_GPIO3A4_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3A_DS2_GPIO3A4_DS_SHIFT)             /* 0x0000003F */
#define GPIO3_IOC_GPIO3A_DS2_GPIO3A5_DS_SHIFT              (8U)
#define GPIO3_IOC_GPIO3A_DS2_GPIO3A5_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3A_DS2_GPIO3A5_DS_SHIFT)             /* 0x00003F00 */
/* GPIO3A_DS3 */
#define GPIO3_IOC_GPIO3A_DS3_OFFSET                        (0x10CU)
#define GPIO3_IOC_GPIO3A_DS3_GPIO3A6_DS_SHIFT              (0U)
#define GPIO3_IOC_GPIO3A_DS3_GPIO3A6_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3A_DS3_GPIO3A6_DS_SHIFT)             /* 0x0000003F */
#define GPIO3_IOC_GPIO3A_DS3_GPIO3A7_DS_SHIFT              (8U)
#define GPIO3_IOC_GPIO3A_DS3_GPIO3A7_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3A_DS3_GPIO3A7_DS_SHIFT)             /* 0x00003F00 */
/* GPIO3C_DS2 */
#define GPIO3_IOC_GPIO3C_DS2_OFFSET                        (0x128U)
#define GPIO3_IOC_GPIO3C_DS2_GPIO3C4_DS_SHIFT              (0U)
#define GPIO3_IOC_GPIO3C_DS2_GPIO3C4_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3C_DS2_GPIO3C4_DS_SHIFT)             /* 0x0000003F */
#define GPIO3_IOC_GPIO3C_DS2_GPIO3C5_DS_SHIFT              (8U)
#define GPIO3_IOC_GPIO3C_DS2_GPIO3C5_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3C_DS2_GPIO3C5_DS_SHIFT)             /* 0x00003F00 */
/* GPIO3C_DS3 */
#define GPIO3_IOC_GPIO3C_DS3_OFFSET                        (0x12CU)
#define GPIO3_IOC_GPIO3C_DS3_GPIO3C6_DS_SHIFT              (0U)
#define GPIO3_IOC_GPIO3C_DS3_GPIO3C6_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3C_DS3_GPIO3C6_DS_SHIFT)             /* 0x0000003F */
#define GPIO3_IOC_GPIO3C_DS3_GPIO3C7_DS_SHIFT              (8U)
#define GPIO3_IOC_GPIO3C_DS3_GPIO3C7_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3C_DS3_GPIO3C7_DS_SHIFT)             /* 0x00003F00 */
/* GPIO3D_DS0 */
#define GPIO3_IOC_GPIO3D_DS0_OFFSET                        (0x130U)
#define GPIO3_IOC_GPIO3D_DS0_GPIO3D0_DS_SHIFT              (0U)
#define GPIO3_IOC_GPIO3D_DS0_GPIO3D0_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3D_DS0_GPIO3D0_DS_SHIFT)             /* 0x0000003F */
#define GPIO3_IOC_GPIO3D_DS0_GPIO3D1_DS_SHIFT              (8U)
#define GPIO3_IOC_GPIO3D_DS0_GPIO3D1_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3D_DS0_GPIO3D1_DS_SHIFT)             /* 0x00003F00 */
/* GPIO3D_DS1 */
#define GPIO3_IOC_GPIO3D_DS1_OFFSET                        (0x134U)
#define GPIO3_IOC_GPIO3D_DS1_GPIO3D2_DS_SHIFT              (0U)
#define GPIO3_IOC_GPIO3D_DS1_GPIO3D2_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3D_DS1_GPIO3D2_DS_SHIFT)             /* 0x0000003F */
#define GPIO3_IOC_GPIO3D_DS1_GPIO3D3_DS_SHIFT              (8U)
#define GPIO3_IOC_GPIO3D_DS1_GPIO3D3_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3D_DS1_GPIO3D3_DS_SHIFT)             /* 0x00003F00 */
/* GPIO3A_IE */
#define GPIO3_IOC_GPIO3A_IE_OFFSET                         (0x1A0U)
#define GPIO3_IOC_GPIO3A_IE_GPIO3A1_IE_SHIFT               (1U)
#define GPIO3_IOC_GPIO3A_IE_GPIO3A1_IE_MASK                (0x1U << GPIO3_IOC_GPIO3A_IE_GPIO3A1_IE_SHIFT)               /* 0x00000002 */
#define GPIO3_IOC_GPIO3A_IE_GPIO3A2_IE_SHIFT               (2U)
#define GPIO3_IOC_GPIO3A_IE_GPIO3A2_IE_MASK                (0x1U << GPIO3_IOC_GPIO3A_IE_GPIO3A2_IE_SHIFT)               /* 0x00000004 */
#define GPIO3_IOC_GPIO3A_IE_GPIO3A3_IE_SHIFT               (3U)
#define GPIO3_IOC_GPIO3A_IE_GPIO3A3_IE_MASK                (0x1U << GPIO3_IOC_GPIO3A_IE_GPIO3A3_IE_SHIFT)               /* 0x00000008 */
#define GPIO3_IOC_GPIO3A_IE_GPIO3A4_IE_SHIFT               (4U)
#define GPIO3_IOC_GPIO3A_IE_GPIO3A4_IE_MASK                (0x1U << GPIO3_IOC_GPIO3A_IE_GPIO3A4_IE_SHIFT)               /* 0x00000010 */
#define GPIO3_IOC_GPIO3A_IE_GPIO3A5_IE_SHIFT               (5U)
#define GPIO3_IOC_GPIO3A_IE_GPIO3A5_IE_MASK                (0x1U << GPIO3_IOC_GPIO3A_IE_GPIO3A5_IE_SHIFT)               /* 0x00000020 */
#define GPIO3_IOC_GPIO3A_IE_GPIO3A6_IE_SHIFT               (6U)
#define GPIO3_IOC_GPIO3A_IE_GPIO3A6_IE_MASK                (0x1U << GPIO3_IOC_GPIO3A_IE_GPIO3A6_IE_SHIFT)               /* 0x00000040 */
#define GPIO3_IOC_GPIO3A_IE_GPIO3A7_IE_SHIFT               (7U)
#define GPIO3_IOC_GPIO3A_IE_GPIO3A7_IE_MASK                (0x1U << GPIO3_IOC_GPIO3A_IE_GPIO3A7_IE_SHIFT)               /* 0x00000080 */
/* GPIO3C_IE */
#define GPIO3_IOC_GPIO3C_IE_OFFSET                         (0x1A8U)
#define GPIO3_IOC_GPIO3C_IE_GPIO3C4_IE_SHIFT               (4U)
#define GPIO3_IOC_GPIO3C_IE_GPIO3C4_IE_MASK                (0x1U << GPIO3_IOC_GPIO3C_IE_GPIO3C4_IE_SHIFT)               /* 0x00000010 */
#define GPIO3_IOC_GPIO3C_IE_GPIO3C5_IE_SHIFT               (5U)
#define GPIO3_IOC_GPIO3C_IE_GPIO3C5_IE_MASK                (0x1U << GPIO3_IOC_GPIO3C_IE_GPIO3C5_IE_SHIFT)               /* 0x00000020 */
#define GPIO3_IOC_GPIO3C_IE_GPIO3C6_IE_SHIFT               (6U)
#define GPIO3_IOC_GPIO3C_IE_GPIO3C6_IE_MASK                (0x1U << GPIO3_IOC_GPIO3C_IE_GPIO3C6_IE_SHIFT)               /* 0x00000040 */
#define GPIO3_IOC_GPIO3C_IE_GPIO3C7_IE_SHIFT               (7U)
#define GPIO3_IOC_GPIO3C_IE_GPIO3C7_IE_MASK                (0x1U << GPIO3_IOC_GPIO3C_IE_GPIO3C7_IE_SHIFT)               /* 0x00000080 */
/* GPIO3D_IE */
#define GPIO3_IOC_GPIO3D_IE_OFFSET                         (0x1ACU)
#define GPIO3_IOC_GPIO3D_IE_GPIO3D0_IE_SHIFT               (0U)
#define GPIO3_IOC_GPIO3D_IE_GPIO3D0_IE_MASK                (0x1U << GPIO3_IOC_GPIO3D_IE_GPIO3D0_IE_SHIFT)               /* 0x00000001 */
#define GPIO3_IOC_GPIO3D_IE_GPIO3D1_IE_SHIFT               (1U)
#define GPIO3_IOC_GPIO3D_IE_GPIO3D1_IE_MASK                (0x1U << GPIO3_IOC_GPIO3D_IE_GPIO3D1_IE_SHIFT)               /* 0x00000002 */
#define GPIO3_IOC_GPIO3D_IE_GPIO3D2_IE_SHIFT               (2U)
#define GPIO3_IOC_GPIO3D_IE_GPIO3D2_IE_MASK                (0x1U << GPIO3_IOC_GPIO3D_IE_GPIO3D2_IE_SHIFT)               /* 0x00000004 */
#define GPIO3_IOC_GPIO3D_IE_GPIO3D3_IE_SHIFT               (3U)
#define GPIO3_IOC_GPIO3D_IE_GPIO3D3_IE_MASK                (0x1U << GPIO3_IOC_GPIO3D_IE_GPIO3D3_IE_SHIFT)               /* 0x00000008 */
/* GPIO3A_P */
#define GPIO3_IOC_GPIO3A_P_OFFSET                          (0x1E0U)
#define GPIO3_IOC_GPIO3A_P_GPIO3A1_PU_SHIFT                (2U)
#define GPIO3_IOC_GPIO3A_P_GPIO3A1_PU_MASK                 (0x1U << GPIO3_IOC_GPIO3A_P_GPIO3A1_PU_SHIFT)                /* 0x00000004 */
#define GPIO3_IOC_GPIO3A_P_GPIO3A1_PD_SHIFT                (3U)
#define GPIO3_IOC_GPIO3A_P_GPIO3A1_PD_MASK                 (0x1U << GPIO3_IOC_GPIO3A_P_GPIO3A1_PD_SHIFT)                /* 0x00000008 */
#define GPIO3_IOC_GPIO3A_P_GPIO3A2_PU_SHIFT                (4U)
#define GPIO3_IOC_GPIO3A_P_GPIO3A2_PU_MASK                 (0x1U << GPIO3_IOC_GPIO3A_P_GPIO3A2_PU_SHIFT)                /* 0x00000010 */
#define GPIO3_IOC_GPIO3A_P_GPIO3A2_PD_SHIFT                (5U)
#define GPIO3_IOC_GPIO3A_P_GPIO3A2_PD_MASK                 (0x1U << GPIO3_IOC_GPIO3A_P_GPIO3A2_PD_SHIFT)                /* 0x00000020 */
#define GPIO3_IOC_GPIO3A_P_GPIO3A3_PU_SHIFT                (6U)
#define GPIO3_IOC_GPIO3A_P_GPIO3A3_PU_MASK                 (0x1U << GPIO3_IOC_GPIO3A_P_GPIO3A3_PU_SHIFT)                /* 0x00000040 */
#define GPIO3_IOC_GPIO3A_P_GPIO3A3_PD_SHIFT                (7U)
#define GPIO3_IOC_GPIO3A_P_GPIO3A3_PD_MASK                 (0x1U << GPIO3_IOC_GPIO3A_P_GPIO3A3_PD_SHIFT)                /* 0x00000080 */
#define GPIO3_IOC_GPIO3A_P_GPIO3A4_PU_SHIFT                (8U)
#define GPIO3_IOC_GPIO3A_P_GPIO3A4_PU_MASK                 (0x1U << GPIO3_IOC_GPIO3A_P_GPIO3A4_PU_SHIFT)                /* 0x00000100 */
#define GPIO3_IOC_GPIO3A_P_GPIO3A4_PD_SHIFT                (9U)
#define GPIO3_IOC_GPIO3A_P_GPIO3A4_PD_MASK                 (0x1U << GPIO3_IOC_GPIO3A_P_GPIO3A4_PD_SHIFT)                /* 0x00000200 */
#define GPIO3_IOC_GPIO3A_P_GPIO3A5_PU_SHIFT                (10U)
#define GPIO3_IOC_GPIO3A_P_GPIO3A5_PU_MASK                 (0x1U << GPIO3_IOC_GPIO3A_P_GPIO3A5_PU_SHIFT)                /* 0x00000400 */
#define GPIO3_IOC_GPIO3A_P_GPIO3A5_PD_SHIFT                (11U)
#define GPIO3_IOC_GPIO3A_P_GPIO3A5_PD_MASK                 (0x1U << GPIO3_IOC_GPIO3A_P_GPIO3A5_PD_SHIFT)                /* 0x00000800 */
#define GPIO3_IOC_GPIO3A_P_GPIO3A6_PU_SHIFT                (12U)
#define GPIO3_IOC_GPIO3A_P_GPIO3A6_PU_MASK                 (0x1U << GPIO3_IOC_GPIO3A_P_GPIO3A6_PU_SHIFT)                /* 0x00001000 */
#define GPIO3_IOC_GPIO3A_P_GPIO3A6_PD_SHIFT                (13U)
#define GPIO3_IOC_GPIO3A_P_GPIO3A6_PD_MASK                 (0x1U << GPIO3_IOC_GPIO3A_P_GPIO3A6_PD_SHIFT)                /* 0x00002000 */
#define GPIO3_IOC_GPIO3A_P_GPIO3A7_PU_SHIFT                (14U)
#define GPIO3_IOC_GPIO3A_P_GPIO3A7_PU_MASK                 (0x1U << GPIO3_IOC_GPIO3A_P_GPIO3A7_PU_SHIFT)                /* 0x00004000 */
#define GPIO3_IOC_GPIO3A_P_GPIO3A7_PD_SHIFT                (15U)
#define GPIO3_IOC_GPIO3A_P_GPIO3A7_PD_MASK                 (0x1U << GPIO3_IOC_GPIO3A_P_GPIO3A7_PD_SHIFT)                /* 0x00008000 */
/* GPIO3C_P */
#define GPIO3_IOC_GPIO3C_P_OFFSET                          (0x1E8U)
#define GPIO3_IOC_GPIO3C_P_GPIO3C4_PU_SHIFT                (8U)
#define GPIO3_IOC_GPIO3C_P_GPIO3C4_PU_MASK                 (0x1U << GPIO3_IOC_GPIO3C_P_GPIO3C4_PU_SHIFT)                /* 0x00000100 */
#define GPIO3_IOC_GPIO3C_P_GPIO3C4_PD_SHIFT                (9U)
#define GPIO3_IOC_GPIO3C_P_GPIO3C4_PD_MASK                 (0x1U << GPIO3_IOC_GPIO3C_P_GPIO3C4_PD_SHIFT)                /* 0x00000200 */
#define GPIO3_IOC_GPIO3C_P_GPIO3C5_PU_SHIFT                (10U)
#define GPIO3_IOC_GPIO3C_P_GPIO3C5_PU_MASK                 (0x1U << GPIO3_IOC_GPIO3C_P_GPIO3C5_PU_SHIFT)                /* 0x00000400 */
#define GPIO3_IOC_GPIO3C_P_GPIO3C5_PD_SHIFT                (11U)
#define GPIO3_IOC_GPIO3C_P_GPIO3C5_PD_MASK                 (0x1U << GPIO3_IOC_GPIO3C_P_GPIO3C5_PD_SHIFT)                /* 0x00000800 */
#define GPIO3_IOC_GPIO3C_P_GPIO3C6_PU_SHIFT                (12U)
#define GPIO3_IOC_GPIO3C_P_GPIO3C6_PU_MASK                 (0x1U << GPIO3_IOC_GPIO3C_P_GPIO3C6_PU_SHIFT)                /* 0x00001000 */
#define GPIO3_IOC_GPIO3C_P_GPIO3C6_PD_SHIFT                (13U)
#define GPIO3_IOC_GPIO3C_P_GPIO3C6_PD_MASK                 (0x1U << GPIO3_IOC_GPIO3C_P_GPIO3C6_PD_SHIFT)                /* 0x00002000 */
#define GPIO3_IOC_GPIO3C_P_GPIO3C7_PU_SHIFT                (14U)
#define GPIO3_IOC_GPIO3C_P_GPIO3C7_PU_MASK                 (0x1U << GPIO3_IOC_GPIO3C_P_GPIO3C7_PU_SHIFT)                /* 0x00004000 */
#define GPIO3_IOC_GPIO3C_P_GPIO3C7_PD_SHIFT                (15U)
#define GPIO3_IOC_GPIO3C_P_GPIO3C7_PD_MASK                 (0x1U << GPIO3_IOC_GPIO3C_P_GPIO3C7_PD_SHIFT)                /* 0x00008000 */
/* GPIO3D_P */
#define GPIO3_IOC_GPIO3D_P_OFFSET                          (0x1ECU)
#define GPIO3_IOC_GPIO3D_P_GPIO3D0_PU_SHIFT                (0U)
#define GPIO3_IOC_GPIO3D_P_GPIO3D0_PU_MASK                 (0x1U << GPIO3_IOC_GPIO3D_P_GPIO3D0_PU_SHIFT)                /* 0x00000001 */
#define GPIO3_IOC_GPIO3D_P_GPIO3D0_PD_SHIFT                (1U)
#define GPIO3_IOC_GPIO3D_P_GPIO3D0_PD_MASK                 (0x1U << GPIO3_IOC_GPIO3D_P_GPIO3D0_PD_SHIFT)                /* 0x00000002 */
#define GPIO3_IOC_GPIO3D_P_GPIO3D1_PU_SHIFT                (2U)
#define GPIO3_IOC_GPIO3D_P_GPIO3D1_PU_MASK                 (0x1U << GPIO3_IOC_GPIO3D_P_GPIO3D1_PU_SHIFT)                /* 0x00000004 */
#define GPIO3_IOC_GPIO3D_P_GPIO3D1_PD_SHIFT                (3U)
#define GPIO3_IOC_GPIO3D_P_GPIO3D1_PD_MASK                 (0x1U << GPIO3_IOC_GPIO3D_P_GPIO3D1_PD_SHIFT)                /* 0x00000008 */
#define GPIO3_IOC_GPIO3D_P_GPIO3D2_PU_SHIFT                (4U)
#define GPIO3_IOC_GPIO3D_P_GPIO3D2_PU_MASK                 (0x1U << GPIO3_IOC_GPIO3D_P_GPIO3D2_PU_SHIFT)                /* 0x00000010 */
#define GPIO3_IOC_GPIO3D_P_GPIO3D2_PD_SHIFT                (5U)
#define GPIO3_IOC_GPIO3D_P_GPIO3D2_PD_MASK                 (0x1U << GPIO3_IOC_GPIO3D_P_GPIO3D2_PD_SHIFT)                /* 0x00000020 */
#define GPIO3_IOC_GPIO3D_P_GPIO3D3_PU_SHIFT                (6U)
#define GPIO3_IOC_GPIO3D_P_GPIO3D3_PU_MASK                 (0x1U << GPIO3_IOC_GPIO3D_P_GPIO3D3_PU_SHIFT)                /* 0x00000040 */
#define GPIO3_IOC_GPIO3D_P_GPIO3D3_PD_SHIFT                (7U)
#define GPIO3_IOC_GPIO3D_P_GPIO3D3_PD_MASK                 (0x1U << GPIO3_IOC_GPIO3D_P_GPIO3D3_PD_SHIFT)                /* 0x00000080 */
/* GPIO3A_SUS */
#define GPIO3_IOC_GPIO3A_SUS_OFFSET                        (0x220U)
#define GPIO3_IOC_GPIO3A_SUS_GPIO3A1_SUS_SHIFT             (1U)
#define GPIO3_IOC_GPIO3A_SUS_GPIO3A1_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3A_SUS_GPIO3A1_SUS_SHIFT)             /* 0x00000002 */
#define GPIO3_IOC_GPIO3A_SUS_GPIO3A2_SUS_SHIFT             (2U)
#define GPIO3_IOC_GPIO3A_SUS_GPIO3A2_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3A_SUS_GPIO3A2_SUS_SHIFT)             /* 0x00000004 */
#define GPIO3_IOC_GPIO3A_SUS_GPIO3A3_SUS_SHIFT             (3U)
#define GPIO3_IOC_GPIO3A_SUS_GPIO3A3_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3A_SUS_GPIO3A3_SUS_SHIFT)             /* 0x00000008 */
#define GPIO3_IOC_GPIO3A_SUS_GPIO3A4_SUS_SHIFT             (4U)
#define GPIO3_IOC_GPIO3A_SUS_GPIO3A4_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3A_SUS_GPIO3A4_SUS_SHIFT)             /* 0x00000010 */
#define GPIO3_IOC_GPIO3A_SUS_GPIO3A5_SUS_SHIFT             (5U)
#define GPIO3_IOC_GPIO3A_SUS_GPIO3A5_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3A_SUS_GPIO3A5_SUS_SHIFT)             /* 0x00000020 */
#define GPIO3_IOC_GPIO3A_SUS_GPIO3A6_SUS_SHIFT             (6U)
#define GPIO3_IOC_GPIO3A_SUS_GPIO3A6_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3A_SUS_GPIO3A6_SUS_SHIFT)             /* 0x00000040 */
#define GPIO3_IOC_GPIO3A_SUS_GPIO3A7_SUS_SHIFT             (7U)
#define GPIO3_IOC_GPIO3A_SUS_GPIO3A7_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3A_SUS_GPIO3A7_SUS_SHIFT)             /* 0x00000080 */
/* GPIO3C_SUS */
#define GPIO3_IOC_GPIO3C_SUS_OFFSET                        (0x228U)
#define GPIO3_IOC_GPIO3C_SUS_GPIO3C4_SUS_SHIFT             (0U)
#define GPIO3_IOC_GPIO3C_SUS_GPIO3C4_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3C_SUS_GPIO3C4_SUS_SHIFT)             /* 0x00000001 */
#define GPIO3_IOC_GPIO3C_SUS_GPIO3C5_SUS_SHIFT             (1U)
#define GPIO3_IOC_GPIO3C_SUS_GPIO3C5_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3C_SUS_GPIO3C5_SUS_SHIFT)             /* 0x00000002 */
#define GPIO3_IOC_GPIO3C_SUS_GPIO3C6_SUS_SHIFT             (2U)
#define GPIO3_IOC_GPIO3C_SUS_GPIO3C6_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3C_SUS_GPIO3C6_SUS_SHIFT)             /* 0x00000004 */
#define GPIO3_IOC_GPIO3C_SUS_GPIO3C7_SUS_SHIFT             (3U)
#define GPIO3_IOC_GPIO3C_SUS_GPIO3C7_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3C_SUS_GPIO3C7_SUS_SHIFT)             /* 0x00000008 */
/* GPIO3D_SUS */
#define GPIO3_IOC_GPIO3D_SUS_OFFSET                        (0x22CU)
#define GPIO3_IOC_GPIO3D_SUS_GPIO3D0_SUS_SHIFT             (0U)
#define GPIO3_IOC_GPIO3D_SUS_GPIO3D0_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3D_SUS_GPIO3D0_SUS_SHIFT)             /* 0x00000001 */
#define GPIO3_IOC_GPIO3D_SUS_GPIO3D1_SUS_SHIFT             (1U)
#define GPIO3_IOC_GPIO3D_SUS_GPIO3D1_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3D_SUS_GPIO3D1_SUS_SHIFT)             /* 0x00000002 */
#define GPIO3_IOC_GPIO3D_SUS_GPIO3D2_SUS_SHIFT             (2U)
#define GPIO3_IOC_GPIO3D_SUS_GPIO3D2_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3D_SUS_GPIO3D2_SUS_SHIFT)             /* 0x00000004 */
#define GPIO3_IOC_GPIO3D_SUS_GPIO3D3_SUS_SHIFT             (3U)
#define GPIO3_IOC_GPIO3D_SUS_GPIO3D3_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3D_SUS_GPIO3D3_SUS_SHIFT)             /* 0x00000008 */
/* GPIO3A_SL */
#define GPIO3_IOC_GPIO3A_SL_OFFSET                         (0x260U)
#define GPIO3_IOC_GPIO3A_SL_GPIO3A1_SL_SHIFT               (2U)
#define GPIO3_IOC_GPIO3A_SL_GPIO3A1_SL_MASK                (0x3U << GPIO3_IOC_GPIO3A_SL_GPIO3A1_SL_SHIFT)               /* 0x0000000C */
#define GPIO3_IOC_GPIO3A_SL_GPIO3A2_SL_SHIFT               (4U)
#define GPIO3_IOC_GPIO3A_SL_GPIO3A2_SL_MASK                (0x3U << GPIO3_IOC_GPIO3A_SL_GPIO3A2_SL_SHIFT)               /* 0x00000030 */
#define GPIO3_IOC_GPIO3A_SL_GPIO3A3_SL_SHIFT               (6U)
#define GPIO3_IOC_GPIO3A_SL_GPIO3A3_SL_MASK                (0x3U << GPIO3_IOC_GPIO3A_SL_GPIO3A3_SL_SHIFT)               /* 0x000000C0 */
#define GPIO3_IOC_GPIO3A_SL_GPIO3A4_SL_SHIFT               (8U)
#define GPIO3_IOC_GPIO3A_SL_GPIO3A4_SL_MASK                (0x3U << GPIO3_IOC_GPIO3A_SL_GPIO3A4_SL_SHIFT)               /* 0x00000300 */
#define GPIO3_IOC_GPIO3A_SL_GPIO3A5_SL_SHIFT               (10U)
#define GPIO3_IOC_GPIO3A_SL_GPIO3A5_SL_MASK                (0x3U << GPIO3_IOC_GPIO3A_SL_GPIO3A5_SL_SHIFT)               /* 0x00000C00 */
#define GPIO3_IOC_GPIO3A_SL_GPIO3A6_SL_SHIFT               (12U)
#define GPIO3_IOC_GPIO3A_SL_GPIO3A6_SL_MASK                (0x3U << GPIO3_IOC_GPIO3A_SL_GPIO3A6_SL_SHIFT)               /* 0x00003000 */
#define GPIO3_IOC_GPIO3A_SL_GPIO3A7_SL_SHIFT               (14U)
#define GPIO3_IOC_GPIO3A_SL_GPIO3A7_SL_MASK                (0x3U << GPIO3_IOC_GPIO3A_SL_GPIO3A7_SL_SHIFT)               /* 0x0000C000 */
/* GPIO3C_SL */
#define GPIO3_IOC_GPIO3C_SL_OFFSET                         (0x268U)
#define GPIO3_IOC_GPIO3C_SL_GPIO3C4_SL_SHIFT               (8U)
#define GPIO3_IOC_GPIO3C_SL_GPIO3C4_SL_MASK                (0x3U << GPIO3_IOC_GPIO3C_SL_GPIO3C4_SL_SHIFT)               /* 0x00000300 */
#define GPIO3_IOC_GPIO3C_SL_GPIO3C5_SL_SHIFT               (10U)
#define GPIO3_IOC_GPIO3C_SL_GPIO3C5_SL_MASK                (0x3U << GPIO3_IOC_GPIO3C_SL_GPIO3C5_SL_SHIFT)               /* 0x00000C00 */
#define GPIO3_IOC_GPIO3C_SL_GPIO3C6_SL_SHIFT               (12U)
#define GPIO3_IOC_GPIO3C_SL_GPIO3C6_SL_MASK                (0x3U << GPIO3_IOC_GPIO3C_SL_GPIO3C6_SL_SHIFT)               /* 0x00003000 */
#define GPIO3_IOC_GPIO3C_SL_GPIO3C7_SL_SHIFT               (14U)
#define GPIO3_IOC_GPIO3C_SL_GPIO3C7_SL_MASK                (0x3U << GPIO3_IOC_GPIO3C_SL_GPIO3C7_SL_SHIFT)               /* 0x0000C000 */
/* GPIO3D_SL */
#define GPIO3_IOC_GPIO3D_SL_OFFSET                         (0x26CU)
#define GPIO3_IOC_GPIO3D_SL_GPIO3D0_SL_SHIFT               (0U)
#define GPIO3_IOC_GPIO3D_SL_GPIO3D0_SL_MASK                (0x3U << GPIO3_IOC_GPIO3D_SL_GPIO3D0_SL_SHIFT)               /* 0x00000003 */
#define GPIO3_IOC_GPIO3D_SL_GPIO3D1_SL_SHIFT               (2U)
#define GPIO3_IOC_GPIO3D_SL_GPIO3D1_SL_MASK                (0x3U << GPIO3_IOC_GPIO3D_SL_GPIO3D1_SL_SHIFT)               /* 0x0000000C */
#define GPIO3_IOC_GPIO3D_SL_GPIO3D2_SL_SHIFT               (4U)
#define GPIO3_IOC_GPIO3D_SL_GPIO3D2_SL_MASK                (0x3U << GPIO3_IOC_GPIO3D_SL_GPIO3D2_SL_SHIFT)               /* 0x00000030 */
#define GPIO3_IOC_GPIO3D_SL_GPIO3D3_SL_SHIFT               (6U)
#define GPIO3_IOC_GPIO3D_SL_GPIO3D3_SL_MASK                (0x3U << GPIO3_IOC_GPIO3D_SL_GPIO3D3_SL_SHIFT)               /* 0x000000C0 */
/* GPIO3A_IE_SMT */
#define GPIO3_IOC_GPIO3A_IE_SMT_OFFSET                     (0x2A0U)
#define GPIO3_IOC_GPIO3A_IE_SMT_GPIO3A1_SMT_SHIFT          (1U)
#define GPIO3_IOC_GPIO3A_IE_SMT_GPIO3A1_SMT_MASK           (0x1U << GPIO3_IOC_GPIO3A_IE_SMT_GPIO3A1_SMT_SHIFT)          /* 0x00000002 */
#define GPIO3_IOC_GPIO3A_IE_SMT_GPIO3A2_SMT_SHIFT          (2U)
#define GPIO3_IOC_GPIO3A_IE_SMT_GPIO3A2_SMT_MASK           (0x1U << GPIO3_IOC_GPIO3A_IE_SMT_GPIO3A2_SMT_SHIFT)          /* 0x00000004 */
#define GPIO3_IOC_GPIO3A_IE_SMT_GPIO3A3_SMT_SHIFT          (3U)
#define GPIO3_IOC_GPIO3A_IE_SMT_GPIO3A3_SMT_MASK           (0x1U << GPIO3_IOC_GPIO3A_IE_SMT_GPIO3A3_SMT_SHIFT)          /* 0x00000008 */
#define GPIO3_IOC_GPIO3A_IE_SMT_GPIO3A4_SMT_SHIFT          (4U)
#define GPIO3_IOC_GPIO3A_IE_SMT_GPIO3A4_SMT_MASK           (0x1U << GPIO3_IOC_GPIO3A_IE_SMT_GPIO3A4_SMT_SHIFT)          /* 0x00000010 */
#define GPIO3_IOC_GPIO3A_IE_SMT_GPIO3A5_SMT_SHIFT          (5U)
#define GPIO3_IOC_GPIO3A_IE_SMT_GPIO3A5_SMT_MASK           (0x1U << GPIO3_IOC_GPIO3A_IE_SMT_GPIO3A5_SMT_SHIFT)          /* 0x00000020 */
#define GPIO3_IOC_GPIO3A_IE_SMT_GPIO3A6_SMT_SHIFT          (6U)
#define GPIO3_IOC_GPIO3A_IE_SMT_GPIO3A6_SMT_MASK           (0x1U << GPIO3_IOC_GPIO3A_IE_SMT_GPIO3A6_SMT_SHIFT)          /* 0x00000040 */
#define GPIO3_IOC_GPIO3A_IE_SMT_GPIO3A7_SMT_SHIFT          (7U)
#define GPIO3_IOC_GPIO3A_IE_SMT_GPIO3A7_SMT_MASK           (0x1U << GPIO3_IOC_GPIO3A_IE_SMT_GPIO3A7_SMT_SHIFT)          /* 0x00000080 */
/* GPIO3C_IE_SMT */
#define GPIO3_IOC_GPIO3C_IE_SMT_OFFSET                     (0x2A8U)
#define GPIO3_IOC_GPIO3C_IE_SMT_GPIO3C4_SMT_SHIFT          (4U)
#define GPIO3_IOC_GPIO3C_IE_SMT_GPIO3C4_SMT_MASK           (0x1U << GPIO3_IOC_GPIO3C_IE_SMT_GPIO3C4_SMT_SHIFT)          /* 0x00000010 */
#define GPIO3_IOC_GPIO3C_IE_SMT_GPIO3C5_SMT_SHIFT          (5U)
#define GPIO3_IOC_GPIO3C_IE_SMT_GPIO3C5_SMT_MASK           (0x1U << GPIO3_IOC_GPIO3C_IE_SMT_GPIO3C5_SMT_SHIFT)          /* 0x00000020 */
#define GPIO3_IOC_GPIO3C_IE_SMT_GPIO3C6_SMT_SHIFT          (6U)
#define GPIO3_IOC_GPIO3C_IE_SMT_GPIO3C6_SMT_MASK           (0x1U << GPIO3_IOC_GPIO3C_IE_SMT_GPIO3C6_SMT_SHIFT)          /* 0x00000040 */
#define GPIO3_IOC_GPIO3C_IE_SMT_GPIO3C7_SMT_SHIFT          (7U)
#define GPIO3_IOC_GPIO3C_IE_SMT_GPIO3C7_SMT_MASK           (0x1U << GPIO3_IOC_GPIO3C_IE_SMT_GPIO3C7_SMT_SHIFT)          /* 0x00000080 */
/* GPIO3D_IE_SMT */
#define GPIO3_IOC_GPIO3D_IE_SMT_OFFSET                     (0x2ACU)
#define GPIO3_IOC_GPIO3D_IE_SMT_GPIO3D0_SMT_SHIFT          (0U)
#define GPIO3_IOC_GPIO3D_IE_SMT_GPIO3D0_SMT_MASK           (0x1U << GPIO3_IOC_GPIO3D_IE_SMT_GPIO3D0_SMT_SHIFT)          /* 0x00000001 */
#define GPIO3_IOC_GPIO3D_IE_SMT_GPIO3D1_SMT_SHIFT          (1U)
#define GPIO3_IOC_GPIO3D_IE_SMT_GPIO3D1_SMT_MASK           (0x1U << GPIO3_IOC_GPIO3D_IE_SMT_GPIO3D1_SMT_SHIFT)          /* 0x00000002 */
#define GPIO3_IOC_GPIO3D_IE_SMT_GPIO3D2_SMT_SHIFT          (2U)
#define GPIO3_IOC_GPIO3D_IE_SMT_GPIO3D2_SMT_MASK           (0x1U << GPIO3_IOC_GPIO3D_IE_SMT_GPIO3D2_SMT_SHIFT)          /* 0x00000004 */
#define GPIO3_IOC_GPIO3D_IE_SMT_GPIO3D3_SMT_SHIFT          (3U)
#define GPIO3_IOC_GPIO3D_IE_SMT_GPIO3D3_SMT_MASK           (0x1U << GPIO3_IOC_GPIO3D_IE_SMT_GPIO3D3_SMT_SHIFT)          /* 0x00000008 */
/* GPIO3A_OD */
#define GPIO3_IOC_GPIO3A_OD_OFFSET                         (0x2E0U)
#define GPIO3_IOC_GPIO3A_OD_GPIO3A1_OD_SHIFT               (1U)
#define GPIO3_IOC_GPIO3A_OD_GPIO3A1_OD_MASK                (0x1U << GPIO3_IOC_GPIO3A_OD_GPIO3A1_OD_SHIFT)               /* 0x00000002 */
#define GPIO3_IOC_GPIO3A_OD_GPIO3A2_OD_SHIFT               (2U)
#define GPIO3_IOC_GPIO3A_OD_GPIO3A2_OD_MASK                (0x1U << GPIO3_IOC_GPIO3A_OD_GPIO3A2_OD_SHIFT)               /* 0x00000004 */
#define GPIO3_IOC_GPIO3A_OD_GPIO3A3_OD_SHIFT               (3U)
#define GPIO3_IOC_GPIO3A_OD_GPIO3A3_OD_MASK                (0x1U << GPIO3_IOC_GPIO3A_OD_GPIO3A3_OD_SHIFT)               /* 0x00000008 */
#define GPIO3_IOC_GPIO3A_OD_GPIO3A4_OD_SHIFT               (4U)
#define GPIO3_IOC_GPIO3A_OD_GPIO3A4_OD_MASK                (0x1U << GPIO3_IOC_GPIO3A_OD_GPIO3A4_OD_SHIFT)               /* 0x00000010 */
#define GPIO3_IOC_GPIO3A_OD_GPIO3A5_OD_SHIFT               (5U)
#define GPIO3_IOC_GPIO3A_OD_GPIO3A5_OD_MASK                (0x1U << GPIO3_IOC_GPIO3A_OD_GPIO3A5_OD_SHIFT)               /* 0x00000020 */
#define GPIO3_IOC_GPIO3A_OD_GPIO3A6_OD_SHIFT               (6U)
#define GPIO3_IOC_GPIO3A_OD_GPIO3A6_OD_MASK                (0x1U << GPIO3_IOC_GPIO3A_OD_GPIO3A6_OD_SHIFT)               /* 0x00000040 */
#define GPIO3_IOC_GPIO3A_OD_GPIO3A7_OD_SHIFT               (7U)
#define GPIO3_IOC_GPIO3A_OD_GPIO3A7_OD_MASK                (0x1U << GPIO3_IOC_GPIO3A_OD_GPIO3A7_OD_SHIFT)               /* 0x00000080 */
/* GPIO3C_OD */
#define GPIO3_IOC_GPIO3C_OD_OFFSET                         (0x2E8U)
#define GPIO3_IOC_GPIO3C_OD_GPIO3C4_OD_SHIFT               (4U)
#define GPIO3_IOC_GPIO3C_OD_GPIO3C4_OD_MASK                (0x1U << GPIO3_IOC_GPIO3C_OD_GPIO3C4_OD_SHIFT)               /* 0x00000010 */
#define GPIO3_IOC_GPIO3C_OD_GPIO3C5_OD_SHIFT               (5U)
#define GPIO3_IOC_GPIO3C_OD_GPIO3C5_OD_MASK                (0x1U << GPIO3_IOC_GPIO3C_OD_GPIO3C5_OD_SHIFT)               /* 0x00000020 */
#define GPIO3_IOC_GPIO3C_OD_GPIO3C6_OD_SHIFT               (6U)
#define GPIO3_IOC_GPIO3C_OD_GPIO3C6_OD_MASK                (0x1U << GPIO3_IOC_GPIO3C_OD_GPIO3C6_OD_SHIFT)               /* 0x00000040 */
#define GPIO3_IOC_GPIO3C_OD_GPIO3C7_OD_SHIFT               (7U)
#define GPIO3_IOC_GPIO3C_OD_GPIO3C7_OD_MASK                (0x1U << GPIO3_IOC_GPIO3C_OD_GPIO3C7_OD_SHIFT)               /* 0x00000080 */
/* GPIO3D_OD */
#define GPIO3_IOC_GPIO3D_OD_OFFSET                         (0x2ECU)
#define GPIO3_IOC_GPIO3D_OD_GPIO3D0_OD_SHIFT               (0U)
#define GPIO3_IOC_GPIO3D_OD_GPIO3D0_OD_MASK                (0x1U << GPIO3_IOC_GPIO3D_OD_GPIO3D0_OD_SHIFT)               /* 0x00000001 */
#define GPIO3_IOC_GPIO3D_OD_GPIO3D1_OD_SHIFT               (1U)
#define GPIO3_IOC_GPIO3D_OD_GPIO3D1_OD_MASK                (0x1U << GPIO3_IOC_GPIO3D_OD_GPIO3D1_OD_SHIFT)               /* 0x00000002 */
#define GPIO3_IOC_GPIO3D_OD_GPIO3D2_0D_SHIFT               (2U)
#define GPIO3_IOC_GPIO3D_OD_GPIO3D2_0D_MASK                (0x1U << GPIO3_IOC_GPIO3D_OD_GPIO3D2_0D_SHIFT)               /* 0x00000004 */
#define GPIO3_IOC_GPIO3D_OD_GPIO2D3_OD_SHIFT               (3U)
#define GPIO3_IOC_GPIO3D_OD_GPIO2D3_OD_MASK                (0x1U << GPIO3_IOC_GPIO3D_OD_GPIO2D3_OD_SHIFT)               /* 0x00000008 */
/* FORCE_JTAG_SDMMC */
#define GPIO3_IOC_FORCE_JTAG_SDMMC_OFFSET                  (0x2F4U)
#define GPIO3_IOC_FORCE_JTAG_SDMMC_JTAG_SDMMC_AUTO_SWITCH_EN_SHIFT (0U)
#define GPIO3_IOC_FORCE_JTAG_SDMMC_JTAG_SDMMC_AUTO_SWITCH_EN_MASK (0x1U << GPIO3_IOC_FORCE_JTAG_SDMMC_JTAG_SDMMC_AUTO_SWITCH_EN_SHIFT) /* 0x00000001 */
/***************************************GPIO4_IOC****************************************/
/* GPIO4A_IOMUX_SEL_L */
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_L_OFFSET                (0x0U)
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A0_SEL_SHIFT     (0U)
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A0_SEL_MASK      (0x7U << GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A0_SEL_SHIFT)     /* 0x00000007 */
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A1_SEL_SHIFT     (4U)
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A1_SEL_MASK      (0x7U << GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A1_SEL_SHIFT)     /* 0x00000070 */
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A2_SEL_SHIFT     (8U)
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A2_SEL_MASK      (0x7U << GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A2_SEL_SHIFT)     /* 0x00000700 */
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A3_SEL_SHIFT     (12U)
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A3_SEL_MASK      (0x7U << GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A3_SEL_SHIFT)     /* 0x00007000 */
/* GPIO4A_IOMUX_SEL_H */
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_H_OFFSET                (0x4U)
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A4_SEL_SHIFT     (0U)
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A4_SEL_MASK      (0x7U << GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A4_SEL_SHIFT)     /* 0x00000007 */
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A5_SEL_SHIFT     (4U)
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A5_SEL_MASK      (0x7U << GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A5_SEL_SHIFT)     /* 0x00000070 */
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A6_SEL_SHIFT     (8U)
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A6_SEL_MASK      (0x7U << GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A6_SEL_SHIFT)     /* 0x00000700 */
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A7_SEL_SHIFT     (12U)
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A7_SEL_MASK      (0x7U << GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A7_SEL_SHIFT)     /* 0x00007000 */
/* GPIO4B_IOMUX_SEL_L */
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_L_OFFSET                (0x8U)
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B0_SEL_SHIFT     (0U)
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B0_SEL_MASK      (0x7U << GPIO4_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B0_SEL_SHIFT)     /* 0x00000007 */
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B1_SEL_SHIFT     (4U)
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B1_SEL_MASK      (0x7U << GPIO4_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B1_SEL_SHIFT)     /* 0x00000070 */
/* GPIO4C_IOMUX_SEL_L */
#define GPIO4_IOC_GPIO4C_IOMUX_SEL_L_OFFSET                (0x10U)
#define GPIO4_IOC_GPIO4C_IOMUX_SEL_L_GPIO4C0_SEL_SHIFT     (0U)
#define GPIO4_IOC_GPIO4C_IOMUX_SEL_L_GPIO4C0_SEL_MASK      (0x7U << GPIO4_IOC_GPIO4C_IOMUX_SEL_L_GPIO4C0_SEL_SHIFT)     /* 0x00000007 */
#define GPIO4_IOC_GPIO4C_IOMUX_SEL_L_GPIO4C1_SEL_SHIFT     (4U)
#define GPIO4_IOC_GPIO4C_IOMUX_SEL_L_GPIO4C1_SEL_MASK      (0x7U << GPIO4_IOC_GPIO4C_IOMUX_SEL_L_GPIO4C1_SEL_SHIFT)     /* 0x00000070 */
/* GPIO4A_DS0 */
#define GPIO4_IOC_GPIO4A_DS0_OFFSET                        (0x20U)
#define GPIO4_IOC_GPIO4A_DS0_GPIO4A0_DS_SHIFT              (0U)
#define GPIO4_IOC_GPIO4A_DS0_GPIO4A0_DS_MASK               (0x3FU << GPIO4_IOC_GPIO4A_DS0_GPIO4A0_DS_SHIFT)             /* 0x0000003F */
#define GPIO4_IOC_GPIO4A_DS0_GPIO4A1_DS_SHIFT              (8U)
#define GPIO4_IOC_GPIO4A_DS0_GPIO4A1_DS_MASK               (0x3FU << GPIO4_IOC_GPIO4A_DS0_GPIO4A1_DS_SHIFT)             /* 0x00003F00 */
/* GPIO4A_DS1 */
#define GPIO4_IOC_GPIO4A_DS1_OFFSET                        (0x24U)
#define GPIO4_IOC_GPIO4A_DS1_GPIO4A2_DS_SHIFT              (0U)
#define GPIO4_IOC_GPIO4A_DS1_GPIO4A2_DS_MASK               (0x3FU << GPIO4_IOC_GPIO4A_DS1_GPIO4A2_DS_SHIFT)             /* 0x0000003F */
#define GPIO4_IOC_GPIO4A_DS1_GPIO4A3_DS_SHIFT              (8U)
#define GPIO4_IOC_GPIO4A_DS1_GPIO4A3_DS_MASK               (0x3FU << GPIO4_IOC_GPIO4A_DS1_GPIO4A3_DS_SHIFT)             /* 0x00003F00 */
/* GPIO4A_DS2 */
#define GPIO4_IOC_GPIO4A_DS2_OFFSET                        (0x28U)
#define GPIO4_IOC_GPIO4A_DS2_GPIO4A4_DS_SHIFT              (0U)
#define GPIO4_IOC_GPIO4A_DS2_GPIO4A4_DS_MASK               (0x3FU << GPIO4_IOC_GPIO4A_DS2_GPIO4A4_DS_SHIFT)             /* 0x0000003F */
#define GPIO4_IOC_GPIO4A_DS2_GPIO4A5_DS_SHIFT              (8U)
#define GPIO4_IOC_GPIO4A_DS2_GPIO4A5_DS_MASK               (0x3FU << GPIO4_IOC_GPIO4A_DS2_GPIO4A5_DS_SHIFT)             /* 0x00003F00 */
/* GPIO4A_DS3 */
#define GPIO4_IOC_GPIO4A_DS3_OFFSET                        (0x2CU)
#define GPIO4_IOC_GPIO4A_DS3_GPIO4A6_DS_SHIFT              (0U)
#define GPIO4_IOC_GPIO4A_DS3_GPIO4A6_DS_MASK               (0x3FU << GPIO4_IOC_GPIO4A_DS3_GPIO4A6_DS_SHIFT)             /* 0x0000003F */
#define GPIO4_IOC_GPIO4A_DS3_GPIO4A7_DS_SHIFT              (8U)
#define GPIO4_IOC_GPIO4A_DS3_GPIO4A7_DS_MASK               (0x3FU << GPIO4_IOC_GPIO4A_DS3_GPIO4A7_DS_SHIFT)             /* 0x00003F00 */
/* GPIO4B_DS0 */
#define GPIO4_IOC_GPIO4B_DS0_OFFSET                        (0x30U)
#define GPIO4_IOC_GPIO4B_DS0_GPIO4B0_DS_SHIFT              (0U)
#define GPIO4_IOC_GPIO4B_DS0_GPIO4B0_DS_MASK               (0x3FU << GPIO4_IOC_GPIO4B_DS0_GPIO4B0_DS_SHIFT)             /* 0x0000003F */
#define GPIO4_IOC_GPIO4B_DS0_GPIO4B1_DS_SHIFT              (8U)
#define GPIO4_IOC_GPIO4B_DS0_GPIO4B1_DS_MASK               (0x3FU << GPIO4_IOC_GPIO4B_DS0_GPIO4B1_DS_SHIFT)             /* 0x00003F00 */
/* GPIO4A_IE */
#define GPIO4_IOC_GPIO4A_IE_OFFSET                         (0x60U)
#define GPIO4_IOC_GPIO4A_IE_GPIO4A0_IE_SHIFT               (0U)
#define GPIO4_IOC_GPIO4A_IE_GPIO4A0_IE_MASK                (0x1U << GPIO4_IOC_GPIO4A_IE_GPIO4A0_IE_SHIFT)               /* 0x00000001 */
#define GPIO4_IOC_GPIO4A_IE_GPIO4A1_IE_SHIFT               (1U)
#define GPIO4_IOC_GPIO4A_IE_GPIO4A1_IE_MASK                (0x1U << GPIO4_IOC_GPIO4A_IE_GPIO4A1_IE_SHIFT)               /* 0x00000002 */
#define GPIO4_IOC_GPIO4A_IE_GPIO4A2_IE_SHIFT               (2U)
#define GPIO4_IOC_GPIO4A_IE_GPIO4A2_IE_MASK                (0x1U << GPIO4_IOC_GPIO4A_IE_GPIO4A2_IE_SHIFT)               /* 0x00000004 */
#define GPIO4_IOC_GPIO4A_IE_GPIO4A3_IE_SHIFT               (3U)
#define GPIO4_IOC_GPIO4A_IE_GPIO4A3_IE_MASK                (0x1U << GPIO4_IOC_GPIO4A_IE_GPIO4A3_IE_SHIFT)               /* 0x00000008 */
#define GPIO4_IOC_GPIO4A_IE_GPIO4A4_IE_SHIFT               (4U)
#define GPIO4_IOC_GPIO4A_IE_GPIO4A4_IE_MASK                (0x1U << GPIO4_IOC_GPIO4A_IE_GPIO4A4_IE_SHIFT)               /* 0x00000010 */
#define GPIO4_IOC_GPIO4A_IE_GPIO4A5_IE_SHIFT               (5U)
#define GPIO4_IOC_GPIO4A_IE_GPIO4A5_IE_MASK                (0x1U << GPIO4_IOC_GPIO4A_IE_GPIO4A5_IE_SHIFT)               /* 0x00000020 */
#define GPIO4_IOC_GPIO4A_IE_GPIO4A6_IE_SHIFT               (6U)
#define GPIO4_IOC_GPIO4A_IE_GPIO4A6_IE_MASK                (0x1U << GPIO4_IOC_GPIO4A_IE_GPIO4A6_IE_SHIFT)               /* 0x00000040 */
#define GPIO4_IOC_GPIO4A_IE_GPIO4A7_IE_SHIFT               (7U)
#define GPIO4_IOC_GPIO4A_IE_GPIO4A7_IE_MASK                (0x1U << GPIO4_IOC_GPIO4A_IE_GPIO4A7_IE_SHIFT)               /* 0x00000080 */
/* GPIO4B_IE */
#define GPIO4_IOC_GPIO4B_IE_OFFSET                         (0x64U)
#define GPIO4_IOC_GPIO4B_IE_GPIO4B0_IE_SHIFT               (0U)
#define GPIO4_IOC_GPIO4B_IE_GPIO4B0_IE_MASK                (0x1U << GPIO4_IOC_GPIO4B_IE_GPIO4B0_IE_SHIFT)               /* 0x00000001 */
#define GPIO4_IOC_GPIO4B_IE_GPIO4B1_IE_SHIFT               (1U)
#define GPIO4_IOC_GPIO4B_IE_GPIO4B1_IE_MASK                (0x1U << GPIO4_IOC_GPIO4B_IE_GPIO4B1_IE_SHIFT)               /* 0x00000002 */
/* GPIO4A_P */
#define GPIO4_IOC_GPIO4A_P_OFFSET                          (0x70U)
#define GPIO4_IOC_GPIO4A_P_GPIO4A0_PU_SHIFT                (0U)
#define GPIO4_IOC_GPIO4A_P_GPIO4A0_PU_MASK                 (0x1U << GPIO4_IOC_GPIO4A_P_GPIO4A0_PU_SHIFT)                /* 0x00000001 */
#define GPIO4_IOC_GPIO4A_P_GPIO4A0_PD_SHIFT                (1U)
#define GPIO4_IOC_GPIO4A_P_GPIO4A0_PD_MASK                 (0x1U << GPIO4_IOC_GPIO4A_P_GPIO4A0_PD_SHIFT)                /* 0x00000002 */
#define GPIO4_IOC_GPIO4A_P_GPIO4A1_PU_SHIFT                (2U)
#define GPIO4_IOC_GPIO4A_P_GPIO4A1_PU_MASK                 (0x1U << GPIO4_IOC_GPIO4A_P_GPIO4A1_PU_SHIFT)                /* 0x00000004 */
#define GPIO4_IOC_GPIO4A_P_GPIO4A1_PD_SHIFT                (3U)
#define GPIO4_IOC_GPIO4A_P_GPIO4A1_PD_MASK                 (0x1U << GPIO4_IOC_GPIO4A_P_GPIO4A1_PD_SHIFT)                /* 0x00000008 */
#define GPIO4_IOC_GPIO4A_P_GPIO4A2_PU_SHIFT                (4U)
#define GPIO4_IOC_GPIO4A_P_GPIO4A2_PU_MASK                 (0x1U << GPIO4_IOC_GPIO4A_P_GPIO4A2_PU_SHIFT)                /* 0x00000010 */
#define GPIO4_IOC_GPIO4A_P_GPIO4A2_PD_SHIFT                (5U)
#define GPIO4_IOC_GPIO4A_P_GPIO4A2_PD_MASK                 (0x1U << GPIO4_IOC_GPIO4A_P_GPIO4A2_PD_SHIFT)                /* 0x00000020 */
#define GPIO4_IOC_GPIO4A_P_GPIO4A3_PU_SHIFT                (6U)
#define GPIO4_IOC_GPIO4A_P_GPIO4A3_PU_MASK                 (0x1U << GPIO4_IOC_GPIO4A_P_GPIO4A3_PU_SHIFT)                /* 0x00000040 */
#define GPIO4_IOC_GPIO4A_P_GPIO4A3_PD_SHIFT                (7U)
#define GPIO4_IOC_GPIO4A_P_GPIO4A3_PD_MASK                 (0x1U << GPIO4_IOC_GPIO4A_P_GPIO4A3_PD_SHIFT)                /* 0x00000080 */
#define GPIO4_IOC_GPIO4A_P_GPIO4A4_PU_SHIFT                (8U)
#define GPIO4_IOC_GPIO4A_P_GPIO4A4_PU_MASK                 (0x1U << GPIO4_IOC_GPIO4A_P_GPIO4A4_PU_SHIFT)                /* 0x00000100 */
#define GPIO4_IOC_GPIO4A_P_GPIO4A4_PD_SHIFT                (9U)
#define GPIO4_IOC_GPIO4A_P_GPIO4A4_PD_MASK                 (0x1U << GPIO4_IOC_GPIO4A_P_GPIO4A4_PD_SHIFT)                /* 0x00000200 */
#define GPIO4_IOC_GPIO4A_P_GPIO4A5_PU_SHIFT                (10U)
#define GPIO4_IOC_GPIO4A_P_GPIO4A5_PU_MASK                 (0x1U << GPIO4_IOC_GPIO4A_P_GPIO4A5_PU_SHIFT)                /* 0x00000400 */
#define GPIO4_IOC_GPIO4A_P_GPIO4A5_PD_SHIFT                (11U)
#define GPIO4_IOC_GPIO4A_P_GPIO4A5_PD_MASK                 (0x1U << GPIO4_IOC_GPIO4A_P_GPIO4A5_PD_SHIFT)                /* 0x00000800 */
#define GPIO4_IOC_GPIO4A_P_GPIO4A6_PU_SHIFT                (12U)
#define GPIO4_IOC_GPIO4A_P_GPIO4A6_PU_MASK                 (0x1U << GPIO4_IOC_GPIO4A_P_GPIO4A6_PU_SHIFT)                /* 0x00001000 */
#define GPIO4_IOC_GPIO4A_P_GPIO4A6_PD_SHIFT                (13U)
#define GPIO4_IOC_GPIO4A_P_GPIO4A6_PD_MASK                 (0x1U << GPIO4_IOC_GPIO4A_P_GPIO4A6_PD_SHIFT)                /* 0x00002000 */
#define GPIO4_IOC_GPIO4A_P_GPIO4A7_PU_SHIFT                (14U)
#define GPIO4_IOC_GPIO4A_P_GPIO4A7_PU_MASK                 (0x1U << GPIO4_IOC_GPIO4A_P_GPIO4A7_PU_SHIFT)                /* 0x00004000 */
#define GPIO4_IOC_GPIO4A_P_GPIO4A7_PD_SHIFT                (15U)
#define GPIO4_IOC_GPIO4A_P_GPIO4A7_PD_MASK                 (0x1U << GPIO4_IOC_GPIO4A_P_GPIO4A7_PD_SHIFT)                /* 0x00008000 */
/* GPIO4B_P */
#define GPIO4_IOC_GPIO4B_P_OFFSET                          (0x74U)
#define GPIO4_IOC_GPIO4B_P_GPIO4B0_PU_SHIFT                (0U)
#define GPIO4_IOC_GPIO4B_P_GPIO4B0_PU_MASK                 (0x1U << GPIO4_IOC_GPIO4B_P_GPIO4B0_PU_SHIFT)                /* 0x00000001 */
#define GPIO4_IOC_GPIO4B_P_GPIO4B0_PD_SHIFT                (1U)
#define GPIO4_IOC_GPIO4B_P_GPIO4B0_PD_MASK                 (0x1U << GPIO4_IOC_GPIO4B_P_GPIO4B0_PD_SHIFT)                /* 0x00000002 */
#define GPIO4_IOC_GPIO4B_P_GPIO4B1_PU_SHIFT                (2U)
#define GPIO4_IOC_GPIO4B_P_GPIO4B1_PU_MASK                 (0x1U << GPIO4_IOC_GPIO4B_P_GPIO4B1_PU_SHIFT)                /* 0x00000004 */
#define GPIO4_IOC_GPIO4B_P_GPIO4B1_PD_SHIFT                (3U)
#define GPIO4_IOC_GPIO4B_P_GPIO4B1_PD_MASK                 (0x1U << GPIO4_IOC_GPIO4B_P_GPIO4B1_PD_SHIFT)                /* 0x00000008 */
/* GPIO4A_SUS */
#define GPIO4_IOC_GPIO4A_SUS_OFFSET                        (0x80U)
#define GPIO4_IOC_GPIO4A_SUS_GPIO4A0_SUS_SHIFT             (0U)
#define GPIO4_IOC_GPIO4A_SUS_GPIO4A0_SUS_MASK              (0x1U << GPIO4_IOC_GPIO4A_SUS_GPIO4A0_SUS_SHIFT)             /* 0x00000001 */
#define GPIO4_IOC_GPIO4A_SUS_GPIO4A1_SUS_SHIFT             (1U)
#define GPIO4_IOC_GPIO4A_SUS_GPIO4A1_SUS_MASK              (0x1U << GPIO4_IOC_GPIO4A_SUS_GPIO4A1_SUS_SHIFT)             /* 0x00000002 */
#define GPIO4_IOC_GPIO4A_SUS_GPIO4A2_SUS_SHIFT             (2U)
#define GPIO4_IOC_GPIO4A_SUS_GPIO4A2_SUS_MASK              (0x1U << GPIO4_IOC_GPIO4A_SUS_GPIO4A2_SUS_SHIFT)             /* 0x00000004 */
#define GPIO4_IOC_GPIO4A_SUS_GPIO4A3_SUS_SHIFT             (3U)
#define GPIO4_IOC_GPIO4A_SUS_GPIO4A3_SUS_MASK              (0x1U << GPIO4_IOC_GPIO4A_SUS_GPIO4A3_SUS_SHIFT)             /* 0x00000008 */
#define GPIO4_IOC_GPIO4A_SUS_GPIO4A4_SUS_SHIFT             (4U)
#define GPIO4_IOC_GPIO4A_SUS_GPIO4A4_SUS_MASK              (0x1U << GPIO4_IOC_GPIO4A_SUS_GPIO4A4_SUS_SHIFT)             /* 0x00000010 */
#define GPIO4_IOC_GPIO4A_SUS_GPIO4A5_SUS_SHIFT             (5U)
#define GPIO4_IOC_GPIO4A_SUS_GPIO4A5_SUS_MASK              (0x1U << GPIO4_IOC_GPIO4A_SUS_GPIO4A5_SUS_SHIFT)             /* 0x00000020 */
#define GPIO4_IOC_GPIO4A_SUS_GPIO4A6_SUS_SHIFT             (6U)
#define GPIO4_IOC_GPIO4A_SUS_GPIO4A6_SUS_MASK              (0x1U << GPIO4_IOC_GPIO4A_SUS_GPIO4A6_SUS_SHIFT)             /* 0x00000040 */
#define GPIO4_IOC_GPIO4A_SUS_GPIO4A7_SUS_SHIFT             (7U)
#define GPIO4_IOC_GPIO4A_SUS_GPIO4A7_SUS_MASK              (0x1U << GPIO4_IOC_GPIO4A_SUS_GPIO4A7_SUS_SHIFT)             /* 0x00000080 */
/* GPIO4B_SUS */
#define GPIO4_IOC_GPIO4B_SUS_OFFSET                        (0x84U)
#define GPIO4_IOC_GPIO4B_SUS_GPIO4A0_SUS_SHIFT             (0U)
#define GPIO4_IOC_GPIO4B_SUS_GPIO4A0_SUS_MASK              (0x1U << GPIO4_IOC_GPIO4B_SUS_GPIO4A0_SUS_SHIFT)             /* 0x00000001 */
#define GPIO4_IOC_GPIO4B_SUS_GPIO4A1_SUS_SHIFT             (1U)
#define GPIO4_IOC_GPIO4B_SUS_GPIO4A1_SUS_MASK              (0x1U << GPIO4_IOC_GPIO4B_SUS_GPIO4A1_SUS_SHIFT)             /* 0x00000002 */
/* GPIO4A_SL */
#define GPIO4_IOC_GPIO4A_SL_OFFSET                         (0x90U)
#define GPIO4_IOC_GPIO4A_SL_GPIO4A0_SL_SHIFT               (0U)
#define GPIO4_IOC_GPIO4A_SL_GPIO4A0_SL_MASK                (0x3U << GPIO4_IOC_GPIO4A_SL_GPIO4A0_SL_SHIFT)               /* 0x00000003 */
#define GPIO4_IOC_GPIO4A_SL_GPIO4A1_SL_SHIFT               (2U)
#define GPIO4_IOC_GPIO4A_SL_GPIO4A1_SL_MASK                (0x3U << GPIO4_IOC_GPIO4A_SL_GPIO4A1_SL_SHIFT)               /* 0x0000000C */
#define GPIO4_IOC_GPIO4A_SL_GPIO4A2_SL_SHIFT               (4U)
#define GPIO4_IOC_GPIO4A_SL_GPIO4A2_SL_MASK                (0x3U << GPIO4_IOC_GPIO4A_SL_GPIO4A2_SL_SHIFT)               /* 0x00000030 */
#define GPIO4_IOC_GPIO4A_SL_GPIO4A3_SL_SHIFT               (6U)
#define GPIO4_IOC_GPIO4A_SL_GPIO4A3_SL_MASK                (0x3U << GPIO4_IOC_GPIO4A_SL_GPIO4A3_SL_SHIFT)               /* 0x000000C0 */
#define GPIO4_IOC_GPIO4A_SL_GPIO4A4_SL_SHIFT               (8U)
#define GPIO4_IOC_GPIO4A_SL_GPIO4A4_SL_MASK                (0x3U << GPIO4_IOC_GPIO4A_SL_GPIO4A4_SL_SHIFT)               /* 0x00000300 */
#define GPIO4_IOC_GPIO4A_SL_GPIO4A5_SL_SHIFT               (10U)
#define GPIO4_IOC_GPIO4A_SL_GPIO4A5_SL_MASK                (0x3U << GPIO4_IOC_GPIO4A_SL_GPIO4A5_SL_SHIFT)               /* 0x00000C00 */
#define GPIO4_IOC_GPIO4A_SL_GPIO4A6_SL_SHIFT               (12U)
#define GPIO4_IOC_GPIO4A_SL_GPIO4A6_SL_MASK                (0x3U << GPIO4_IOC_GPIO4A_SL_GPIO4A6_SL_SHIFT)               /* 0x00003000 */
#define GPIO4_IOC_GPIO4A_SL_GPIO4A7_SL_SHIFT               (14U)
#define GPIO4_IOC_GPIO4A_SL_GPIO4A7_SL_MASK                (0x3U << GPIO4_IOC_GPIO4A_SL_GPIO4A7_SL_SHIFT)               /* 0x0000C000 */
/* GPIO4B_SL */
#define GPIO4_IOC_GPIO4B_SL_OFFSET                         (0x94U)
#define GPIO4_IOC_GPIO4B_SL_GPIO4B0_SL_SHIFT               (0U)
#define GPIO4_IOC_GPIO4B_SL_GPIO4B0_SL_MASK                (0x3U << GPIO4_IOC_GPIO4B_SL_GPIO4B0_SL_SHIFT)               /* 0x00000003 */
#define GPIO4_IOC_GPIO4B_SL_GPIO4B1_SL_SHIFT               (2U)
#define GPIO4_IOC_GPIO4B_SL_GPIO4B1_SL_MASK                (0x3U << GPIO4_IOC_GPIO4B_SL_GPIO4B1_SL_SHIFT)               /* 0x0000000C */
/* GPIO4A_IE_SMT */
#define GPIO4_IOC_GPIO4A_IE_SMT_OFFSET                     (0xA0U)
#define GPIO4_IOC_GPIO4A_IE_SMT_GPIO4A0_SMT_SHIFT          (0U)
#define GPIO4_IOC_GPIO4A_IE_SMT_GPIO4A0_SMT_MASK           (0x1U << GPIO4_IOC_GPIO4A_IE_SMT_GPIO4A0_SMT_SHIFT)          /* 0x00000001 */
#define GPIO4_IOC_GPIO4A_IE_SMT_GPIO4A1_SMT_SHIFT          (1U)
#define GPIO4_IOC_GPIO4A_IE_SMT_GPIO4A1_SMT_MASK           (0x1U << GPIO4_IOC_GPIO4A_IE_SMT_GPIO4A1_SMT_SHIFT)          /* 0x00000002 */
#define GPIO4_IOC_GPIO4A_IE_SMT_GPIO4A2_SMT_SHIFT          (2U)
#define GPIO4_IOC_GPIO4A_IE_SMT_GPIO4A2_SMT_MASK           (0x1U << GPIO4_IOC_GPIO4A_IE_SMT_GPIO4A2_SMT_SHIFT)          /* 0x00000004 */
#define GPIO4_IOC_GPIO4A_IE_SMT_GPIO4A3_SMT_SHIFT          (3U)
#define GPIO4_IOC_GPIO4A_IE_SMT_GPIO4A3_SMT_MASK           (0x1U << GPIO4_IOC_GPIO4A_IE_SMT_GPIO4A3_SMT_SHIFT)          /* 0x00000008 */
#define GPIO4_IOC_GPIO4A_IE_SMT_GPIO4A4_SMT_SHIFT          (4U)
#define GPIO4_IOC_GPIO4A_IE_SMT_GPIO4A4_SMT_MASK           (0x1U << GPIO4_IOC_GPIO4A_IE_SMT_GPIO4A4_SMT_SHIFT)          /* 0x00000010 */
#define GPIO4_IOC_GPIO4A_IE_SMT_GPIO4A5_SMT_SHIFT          (5U)
#define GPIO4_IOC_GPIO4A_IE_SMT_GPIO4A5_SMT_MASK           (0x1U << GPIO4_IOC_GPIO4A_IE_SMT_GPIO4A5_SMT_SHIFT)          /* 0x00000020 */
#define GPIO4_IOC_GPIO4A_IE_SMT_GPIO4A6_SMT_SHIFT          (6U)
#define GPIO4_IOC_GPIO4A_IE_SMT_GPIO4A6_SMT_MASK           (0x1U << GPIO4_IOC_GPIO4A_IE_SMT_GPIO4A6_SMT_SHIFT)          /* 0x00000040 */
#define GPIO4_IOC_GPIO4A_IE_SMT_GPIO4A7_SMT_SHIFT          (7U)
#define GPIO4_IOC_GPIO4A_IE_SMT_GPIO4A7_SMT_MASK           (0x1U << GPIO4_IOC_GPIO4A_IE_SMT_GPIO4A7_SMT_SHIFT)          /* 0x00000080 */
/* GPIO4B_IE_SMT */
#define GPIO4_IOC_GPIO4B_IE_SMT_OFFSET                     (0xA4U)
#define GPIO4_IOC_GPIO4B_IE_SMT_GPIO4B0_SMT_SHIFT          (0U)
#define GPIO4_IOC_GPIO4B_IE_SMT_GPIO4B0_SMT_MASK           (0x1U << GPIO4_IOC_GPIO4B_IE_SMT_GPIO4B0_SMT_SHIFT)          /* 0x00000001 */
#define GPIO4_IOC_GPIO4B_IE_SMT_GPIO4B1_SMT_SHIFT          (1U)
#define GPIO4_IOC_GPIO4B_IE_SMT_GPIO4B1_SMT_MASK           (0x1U << GPIO4_IOC_GPIO4B_IE_SMT_GPIO4B1_SMT_SHIFT)          /* 0x00000002 */
/* GPIO4A_OD */
#define GPIO4_IOC_GPIO4A_OD_OFFSET                         (0xB0U)
#define GPIO4_IOC_GPIO4A_OD_GPIO4A0_OD_SHIFT               (0U)
#define GPIO4_IOC_GPIO4A_OD_GPIO4A0_OD_MASK                (0x1U << GPIO4_IOC_GPIO4A_OD_GPIO4A0_OD_SHIFT)               /* 0x00000001 */
#define GPIO4_IOC_GPIO4A_OD_GPIO4A1_OD_SHIFT               (1U)
#define GPIO4_IOC_GPIO4A_OD_GPIO4A1_OD_MASK                (0x1U << GPIO4_IOC_GPIO4A_OD_GPIO4A1_OD_SHIFT)               /* 0x00000002 */
#define GPIO4_IOC_GPIO4A_OD_GPIO4A2_OD_SHIFT               (2U)
#define GPIO4_IOC_GPIO4A_OD_GPIO4A2_OD_MASK                (0x1U << GPIO4_IOC_GPIO4A_OD_GPIO4A2_OD_SHIFT)               /* 0x00000004 */
#define GPIO4_IOC_GPIO4A_OD_GPIO4A3_OD_SHIFT               (3U)
#define GPIO4_IOC_GPIO4A_OD_GPIO4A3_OD_MASK                (0x1U << GPIO4_IOC_GPIO4A_OD_GPIO4A3_OD_SHIFT)               /* 0x00000008 */
#define GPIO4_IOC_GPIO4A_OD_GPIO4A4_OD_SHIFT               (4U)
#define GPIO4_IOC_GPIO4A_OD_GPIO4A4_OD_MASK                (0x1U << GPIO4_IOC_GPIO4A_OD_GPIO4A4_OD_SHIFT)               /* 0x00000010 */
#define GPIO4_IOC_GPIO4A_OD_GPIO4A5_OD_SHIFT               (5U)
#define GPIO4_IOC_GPIO4A_OD_GPIO4A5_OD_MASK                (0x1U << GPIO4_IOC_GPIO4A_OD_GPIO4A5_OD_SHIFT)               /* 0x00000020 */
#define GPIO4_IOC_GPIO4A_OD_GPIO4A6_OD_SHIFT               (6U)
#define GPIO4_IOC_GPIO4A_OD_GPIO4A6_OD_MASK                (0x1U << GPIO4_IOC_GPIO4A_OD_GPIO4A6_OD_SHIFT)               /* 0x00000040 */
#define GPIO4_IOC_GPIO4A_OD_GPIO4A7_OD_SHIFT               (7U)
#define GPIO4_IOC_GPIO4A_OD_GPIO4A7_OD_MASK                (0x1U << GPIO4_IOC_GPIO4A_OD_GPIO4A7_OD_SHIFT)               /* 0x00000080 */
/* GPIO4B_OD */
#define GPIO4_IOC_GPIO4B_OD_OFFSET                         (0xB4U)
#define GPIO4_IOC_GPIO4B_OD_GPIO4B0_OD_SHIFT               (0U)
#define GPIO4_IOC_GPIO4B_OD_GPIO4B0_OD_MASK                (0x1U << GPIO4_IOC_GPIO4B_OD_GPIO4B0_OD_SHIFT)               /* 0x00000001 */
#define GPIO4_IOC_GPIO4B_OD_GPIO4B1_OD_SHIFT               (1U)
#define GPIO4_IOC_GPIO4B_OD_GPIO4B1_OD_MASK                (0x1U << GPIO4_IOC_GPIO4B_OD_GPIO4B1_OD_SHIFT)               /* 0x00000002 */
/* SARADC_IO_CON */
#define GPIO4_IOC_SARADC_IO_CON_OFFSET                     (0xC0U)
#define GPIO4_IOC_SARADC_IO_CON_SARADC_IO_HE0_SHIFT        (0U)
#define GPIO4_IOC_SARADC_IO_CON_SARADC_IO_HE0_MASK         (0x1U << GPIO4_IOC_SARADC_IO_CON_SARADC_IO_HE0_SHIFT)        /* 0x00000001 */
#define GPIO4_IOC_SARADC_IO_CON_SARADC_IO_HE1_SHIFT        (1U)
#define GPIO4_IOC_SARADC_IO_CON_SARADC_IO_HE1_MASK         (0x1U << GPIO4_IOC_SARADC_IO_CON_SARADC_IO_HE1_SHIFT)        /* 0x00000002 */
#define GPIO4_IOC_SARADC_IO_CON_SARADC_IO_IE0_SHIFT        (2U)
#define GPIO4_IOC_SARADC_IO_CON_SARADC_IO_IE0_MASK         (0x1U << GPIO4_IOC_SARADC_IO_CON_SARADC_IO_IE0_SHIFT)        /* 0x00000004 */
#define GPIO4_IOC_SARADC_IO_CON_SARADC_IO_IE1_SHIFT        (3U)
#define GPIO4_IOC_SARADC_IO_CON_SARADC_IO_IE1_MASK         (0x1U << GPIO4_IOC_SARADC_IO_CON_SARADC_IO_IE1_SHIFT)        /* 0x00000008 */
#define GPIO4_IOC_SARADC_IO_CON_SARADC_IO_ST0_SHIFT        (8U)
#define GPIO4_IOC_SARADC_IO_CON_SARADC_IO_ST0_MASK         (0x1U << GPIO4_IOC_SARADC_IO_CON_SARADC_IO_ST0_SHIFT)        /* 0x00000100 */
#define GPIO4_IOC_SARADC_IO_CON_SARADC_IO_ST1_SHIFT        (9U)
#define GPIO4_IOC_SARADC_IO_CON_SARADC_IO_ST1_MASK         (0x1U << GPIO4_IOC_SARADC_IO_CON_SARADC_IO_ST1_SHIFT)        /* 0x00000200 */
#define GPIO4_IOC_SARADC_IO_CON_SARADC_IO_DS0_SHIFT        (10U)
#define GPIO4_IOC_SARADC_IO_CON_SARADC_IO_DS0_MASK         (0x1U << GPIO4_IOC_SARADC_IO_CON_SARADC_IO_DS0_SHIFT)        /* 0x00000400 */
#define GPIO4_IOC_SARADC_IO_CON_SARADC_IO_DS1_SHIFT        (11U)
#define GPIO4_IOC_SARADC_IO_CON_SARADC_IO_DS1_MASK         (0x1U << GPIO4_IOC_SARADC_IO_CON_SARADC_IO_DS1_SHIFT)        /* 0x00000800 */
#define GPIO4_IOC_SARADC_IO_CON_SARADC_IO_SL_SHIFT         (12U)
#define GPIO4_IOC_SARADC_IO_CON_SARADC_IO_SL_MASK          (0x1U << GPIO4_IOC_SARADC_IO_CON_SARADC_IO_SL_SHIFT)         /* 0x00001000 */
#define GPIO4_IOC_SARADC_IO_CON_SARADC_IO_PE_SHIFT         (13U)
#define GPIO4_IOC_SARADC_IO_CON_SARADC_IO_PE_MASK          (0x1U << GPIO4_IOC_SARADC_IO_CON_SARADC_IO_PE_SHIFT)         /* 0x00002000 */
#define GPIO4_IOC_SARADC_IO_CON_SARADC_IO_PS_SHIFT         (14U)
#define GPIO4_IOC_SARADC_IO_CON_SARADC_IO_PS_MASK          (0x1U << GPIO4_IOC_SARADC_IO_CON_SARADC_IO_PS_SHIFT)         /* 0x00004000 */
/* VCCIO3_VOL_CON */
#define GPIO4_IOC_VCCIO3_VOL_CON_OFFSET                    (0x200U)
#define GPIO4_IOC_VCCIO3_VOL_CON_VCCIO3_VSEL_SHIFT         (0U)
#define GPIO4_IOC_VCCIO3_VOL_CON_VCCIO3_VSEL_MASK          (0x1U << GPIO4_IOC_VCCIO3_VOL_CON_VCCIO3_VSEL_SHIFT)         /* 0x00000001 */
#define GPIO4_IOC_VCCIO3_VOL_CON_VCCIO3_V18_SW_SHIFT       (1U)
#define GPIO4_IOC_VCCIO3_VOL_CON_VCCIO3_V18_SW_MASK        (0x1U << GPIO4_IOC_VCCIO3_VOL_CON_VCCIO3_V18_SW_SHIFT)       /* 0x00000002 */
#define GPIO4_IOC_VCCIO3_VOL_CON_VCCIO3_CLE_SW_SHIFT       (2U)
#define GPIO4_IOC_VCCIO3_VOL_CON_VCCIO3_CLE_SW_MASK        (0x1U << GPIO4_IOC_VCCIO3_VOL_CON_VCCIO3_CLE_SW_SHIFT)       /* 0x00000004 */
#define GPIO4_IOC_VCCIO3_VOL_CON_VCCIO3_IDDQ_SW_SHIFT      (3U)
#define GPIO4_IOC_VCCIO3_VOL_CON_VCCIO3_IDDQ_SW_MASK       (0x1U << GPIO4_IOC_VCCIO3_VOL_CON_VCCIO3_IDDQ_SW_SHIFT)      /* 0x00000008 */
#define GPIO4_IOC_VCCIO3_VOL_CON_VCCIO3_VD_SHIFT           (4U)
#define GPIO4_IOC_VCCIO3_VOL_CON_VCCIO3_VD_MASK            (0x1U << GPIO4_IOC_VCCIO3_VOL_CON_VCCIO3_VD_SHIFT)           /* 0x00000010 */
/*****************************************TIMER******************************************/
/* LOAD_COUNT0 */
#define TIMER_LOAD_COUNT0_OFFSET                           (0x0U)
#define TIMER_LOAD_COUNT0_COUNT0_SHIFT                     (0U)
#define TIMER_LOAD_COUNT0_COUNT0_MASK                      (0xFFFFFFFFU << TIMER_LOAD_COUNT0_COUNT0_SHIFT)              /* 0xFFFFFFFF */
/* LOAD_COUNT1 */
#define TIMER_LOAD_COUNT1_OFFSET                           (0x4U)
#define TIMER_LOAD_COUNT1_COUNT1_SHIFT                     (0U)
#define TIMER_LOAD_COUNT1_COUNT1_MASK                      (0xFFFFFFFFU << TIMER_LOAD_COUNT1_COUNT1_SHIFT)              /* 0xFFFFFFFF */
/* CURRENT_VALUE0 */
#define TIMER_CURRENT_VALUE0_OFFSET                        (0x8U)
#define TIMER_CURRENT_VALUE0                               (0x0U)
#define TIMER_CURRENT_VALUE0_CURRENT_VALUE0_SHIFT          (0U)
#define TIMER_CURRENT_VALUE0_CURRENT_VALUE0_MASK           (0xFFFFFFFFU << TIMER_CURRENT_VALUE0_CURRENT_VALUE0_SHIFT)   /* 0xFFFFFFFF */
/* CURRENT_VALUE1 */
#define TIMER_CURRENT_VALUE1_OFFSET                        (0xCU)
#define TIMER_CURRENT_VALUE1                               (0x0U)
#define TIMER_CURRENT_VALUE1_CURRENT_VALUE1_SHIFT          (0U)
#define TIMER_CURRENT_VALUE1_CURRENT_VALUE1_MASK           (0xFFFFFFFFU << TIMER_CURRENT_VALUE1_CURRENT_VALUE1_SHIFT)   /* 0xFFFFFFFF */
/* CONTROLREG */
#define TIMER_CONTROLREG_OFFSET                            (0x10U)
#define TIMER_CONTROLREG_TIMER_ENABLE_SHIFT                (0U)
#define TIMER_CONTROLREG_TIMER_ENABLE_MASK                 (0x1U << TIMER_CONTROLREG_TIMER_ENABLE_SHIFT)                /* 0x00000001 */
#define TIMER_CONTROLREG_TIMER_MODE_SHIFT                  (1U)
#define TIMER_CONTROLREG_TIMER_MODE_MASK                   (0x1U << TIMER_CONTROLREG_TIMER_MODE_SHIFT)                  /* 0x00000002 */
#define TIMER_CONTROLREG_TIMER_INT_MASK_SHIFT              (2U)
#define TIMER_CONTROLREG_TIMER_INT_MASK_MASK               (0x1U << TIMER_CONTROLREG_TIMER_INT_MASK_SHIFT)              /* 0x00000004 */
/* INTSTATUS */
#define TIMER_INTSTATUS_OFFSET                             (0x18U)
#define TIMER_INTSTATUS_INT_PD_SHIFT                       (0U)
#define TIMER_INTSTATUS_INT_PD_MASK                        (0x1U << TIMER_INTSTATUS_INT_PD_SHIFT)                       /* 0x00000001 */
/******************************************MBOX******************************************/
/* A2B_INTEN */
#define MBOX_A2B_INTEN_OFFSET                              (0x0U)
#define MBOX_A2B_INTEN_INT0_SHIFT                          (0U)
#define MBOX_A2B_INTEN_INT0_MASK                           (0x1U << MBOX_A2B_INTEN_INT0_SHIFT)                          /* 0x00000001 */
#define MBOX_A2B_INTEN_INT1_SHIFT                          (1U)
#define MBOX_A2B_INTEN_INT1_MASK                           (0x1U << MBOX_A2B_INTEN_INT1_SHIFT)                          /* 0x00000002 */
#define MBOX_A2B_INTEN_INT2_SHIFT                          (2U)
#define MBOX_A2B_INTEN_INT2_MASK                           (0x1U << MBOX_A2B_INTEN_INT2_SHIFT)                          /* 0x00000004 */
#define MBOX_A2B_INTEN_INT3_SHIFT                          (3U)
#define MBOX_A2B_INTEN_INT3_MASK                           (0x1U << MBOX_A2B_INTEN_INT3_SHIFT)                          /* 0x00000008 */
/* A2B_STATUS */
#define MBOX_A2B_STATUS_OFFSET                             (0x4U)
#define MBOX_A2B_STATUS_INT0_SHIFT                         (0U)
#define MBOX_A2B_STATUS_INT0_MASK                          (0x1U << MBOX_A2B_STATUS_INT0_SHIFT)                         /* 0x00000001 */
#define MBOX_A2B_STATUS_INT1_SHIFT                         (1U)
#define MBOX_A2B_STATUS_INT1_MASK                          (0x1U << MBOX_A2B_STATUS_INT1_SHIFT)                         /* 0x00000002 */
#define MBOX_A2B_STATUS_INT2_SHIFT                         (2U)
#define MBOX_A2B_STATUS_INT2_MASK                          (0x1U << MBOX_A2B_STATUS_INT2_SHIFT)                         /* 0x00000004 */
#define MBOX_A2B_STATUS_INT3_SHIFT                         (3U)
#define MBOX_A2B_STATUS_INT3_MASK                          (0x1U << MBOX_A2B_STATUS_INT3_SHIFT)                         /* 0x00000008 */
/* A2B_CMD_0 */
#define MBOX_A2B_CMD_0_OFFSET                              (0x8U)
#define MBOX_A2B_CMD_0_COMMAND_SHIFT                       (0U)
#define MBOX_A2B_CMD_0_COMMAND_MASK                        (0xFFFFFFFFU << MBOX_A2B_CMD_0_COMMAND_SHIFT)                /* 0xFFFFFFFF */
/* A2B_DAT_0 */
#define MBOX_A2B_DAT_0_OFFSET                              (0xCU)
#define MBOX_A2B_DAT_0_DATA_SHIFT                          (0U)
#define MBOX_A2B_DAT_0_DATA_MASK                           (0xFFFFFFFFU << MBOX_A2B_DAT_0_DATA_SHIFT)                   /* 0xFFFFFFFF */
/* A2B_CMD_1 */
#define MBOX_A2B_CMD_1_OFFSET                              (0x10U)
#define MBOX_A2B_CMD_1_COMMAND_SHIFT                       (0U)
#define MBOX_A2B_CMD_1_COMMAND_MASK                        (0xFFFFFFFFU << MBOX_A2B_CMD_1_COMMAND_SHIFT)                /* 0xFFFFFFFF */
/* A2B_DAT_1 */
#define MBOX_A2B_DAT_1_OFFSET                              (0x14U)
#define MBOX_A2B_DAT_1_DATA_SHIFT                          (0U)
#define MBOX_A2B_DAT_1_DATA_MASK                           (0xFFFFFFFFU << MBOX_A2B_DAT_1_DATA_SHIFT)                   /* 0xFFFFFFFF */
/* A2B_CMD_2 */
#define MBOX_A2B_CMD_2_OFFSET                              (0x18U)
#define MBOX_A2B_CMD_2_COMMAND_SHIFT                       (0U)
#define MBOX_A2B_CMD_2_COMMAND_MASK                        (0xFFFFFFFFU << MBOX_A2B_CMD_2_COMMAND_SHIFT)                /* 0xFFFFFFFF */
/* A2B_DAT_2 */
#define MBOX_A2B_DAT_2_OFFSET                              (0x1CU)
#define MBOX_A2B_DAT_2_DATA_SHIFT                          (0U)
#define MBOX_A2B_DAT_2_DATA_MASK                           (0xFFFFFFFFU << MBOX_A2B_DAT_2_DATA_SHIFT)                   /* 0xFFFFFFFF */
/* A2B_CMD_3 */
#define MBOX_A2B_CMD_3_OFFSET                              (0x20U)
#define MBOX_A2B_CMD_3_COMMAND_SHIFT                       (0U)
#define MBOX_A2B_CMD_3_COMMAND_MASK                        (0xFFFFFFFFU << MBOX_A2B_CMD_3_COMMAND_SHIFT)                /* 0xFFFFFFFF */
/* A2B_DAT_3 */
#define MBOX_A2B_DAT_3_OFFSET                              (0x24U)
#define MBOX_A2B_DAT_3_DATA_SHIFT                          (0U)
#define MBOX_A2B_DAT_3_DATA_MASK                           (0xFFFFFFFFU << MBOX_A2B_DAT_3_DATA_SHIFT)                   /* 0xFFFFFFFF */
/* B2A_INTEN */
#define MBOX_B2A_INTEN_OFFSET                              (0x28U)
#define MBOX_B2A_INTEN_INT0_SHIFT                          (0U)
#define MBOX_B2A_INTEN_INT0_MASK                           (0x1U << MBOX_B2A_INTEN_INT0_SHIFT)                          /* 0x00000001 */
#define MBOX_B2A_INTEN_INT1_SHIFT                          (1U)
#define MBOX_B2A_INTEN_INT1_MASK                           (0x1U << MBOX_B2A_INTEN_INT1_SHIFT)                          /* 0x00000002 */
#define MBOX_B2A_INTEN_INT2_SHIFT                          (2U)
#define MBOX_B2A_INTEN_INT2_MASK                           (0x1U << MBOX_B2A_INTEN_INT2_SHIFT)                          /* 0x00000004 */
#define MBOX_B2A_INTEN_INT3_SHIFT                          (3U)
#define MBOX_B2A_INTEN_INT3_MASK                           (0x1U << MBOX_B2A_INTEN_INT3_SHIFT)                          /* 0x00000008 */
/* B2A_STATUS */
#define MBOX_B2A_STATUS_OFFSET                             (0x2CU)
#define MBOX_B2A_STATUS_INT0_SHIFT                         (0U)
#define MBOX_B2A_STATUS_INT0_MASK                          (0x1U << MBOX_B2A_STATUS_INT0_SHIFT)                         /* 0x00000001 */
#define MBOX_B2A_STATUS_INT1_SHIFT                         (1U)
#define MBOX_B2A_STATUS_INT1_MASK                          (0x1U << MBOX_B2A_STATUS_INT1_SHIFT)                         /* 0x00000002 */
#define MBOX_B2A_STATUS_INT2_SHIFT                         (2U)
#define MBOX_B2A_STATUS_INT2_MASK                          (0x1U << MBOX_B2A_STATUS_INT2_SHIFT)                         /* 0x00000004 */
#define MBOX_B2A_STATUS_INT3_SHIFT                         (3U)
#define MBOX_B2A_STATUS_INT3_MASK                          (0x1U << MBOX_B2A_STATUS_INT3_SHIFT)                         /* 0x00000008 */
/* B2A_CMD_0 */
#define MBOX_B2A_CMD_0_OFFSET                              (0x30U)
#define MBOX_B2A_CMD_0_COMMAND_SHIFT                       (0U)
#define MBOX_B2A_CMD_0_COMMAND_MASK                        (0xFFFFFFFFU << MBOX_B2A_CMD_0_COMMAND_SHIFT)                /* 0xFFFFFFFF */
/* B2A_DAT_0 */
#define MBOX_B2A_DAT_0_OFFSET                              (0x34U)
#define MBOX_B2A_DAT_0_DATA_SHIFT                          (0U)
#define MBOX_B2A_DAT_0_DATA_MASK                           (0xFFFFFFFFU << MBOX_B2A_DAT_0_DATA_SHIFT)                   /* 0xFFFFFFFF */
/* B2A_CMD_1 */
#define MBOX_B2A_CMD_1_OFFSET                              (0x38U)
#define MBOX_B2A_CMD_1_COMMAND_SHIFT                       (0U)
#define MBOX_B2A_CMD_1_COMMAND_MASK                        (0xFFFFFFFFU << MBOX_B2A_CMD_1_COMMAND_SHIFT)                /* 0xFFFFFFFF */
/* B2A_DAT_1 */
#define MBOX_B2A_DAT_1_OFFSET                              (0x3CU)
#define MBOX_B2A_DAT_1_DATA_SHIFT                          (0U)
#define MBOX_B2A_DAT_1_DATA_MASK                           (0xFFFFFFFFU << MBOX_B2A_DAT_1_DATA_SHIFT)                   /* 0xFFFFFFFF */
/* B2A_CMD_2 */
#define MBOX_B2A_CMD_2_OFFSET                              (0x40U)
#define MBOX_B2A_CMD_2_COMMAND_SHIFT                       (0U)
#define MBOX_B2A_CMD_2_COMMAND_MASK                        (0xFFFFFFFFU << MBOX_B2A_CMD_2_COMMAND_SHIFT)                /* 0xFFFFFFFF */
/* B2A_DAT_2 */
#define MBOX_B2A_DAT_2_OFFSET                              (0x44U)
#define MBOX_B2A_DAT_2_DATA_SHIFT                          (0U)
#define MBOX_B2A_DAT_2_DATA_MASK                           (0xFFFFFFFFU << MBOX_B2A_DAT_2_DATA_SHIFT)                   /* 0xFFFFFFFF */
/* B2A_CMD_3 */
#define MBOX_B2A_CMD_3_OFFSET                              (0x48U)
#define MBOX_B2A_CMD_3_COMMAND_SHIFT                       (0U)
#define MBOX_B2A_CMD_3_COMMAND_MASK                        (0xFFFFFFFFU << MBOX_B2A_CMD_3_COMMAND_SHIFT)                /* 0xFFFFFFFF */
/* B2A_DAT_3 */
#define MBOX_B2A_DAT_3_OFFSET                              (0x4CU)
#define MBOX_B2A_DAT_3_DATA_SHIFT                          (0U)
#define MBOX_B2A_DAT_3_DATA_MASK                           (0xFFFFFFFFU << MBOX_B2A_DAT_3_DATA_SHIFT)                   /* 0xFFFFFFFF */
/* ATOMIC_LOCK_00 */
#define MBOX_ATOMIC_LOCK_00_OFFSET                         (0x100U)
#define MBOX_ATOMIC_LOCK_00_ATOMIC_LOCK_00_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_00_ATOMIC_LOCK_00_MASK            (0x1U << MBOX_ATOMIC_LOCK_00_ATOMIC_LOCK_00_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_01 */
#define MBOX_ATOMIC_LOCK_01_OFFSET                         (0x104U)
#define MBOX_ATOMIC_LOCK_01_ATOMIC_LOCK_01_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_01_ATOMIC_LOCK_01_MASK            (0x1U << MBOX_ATOMIC_LOCK_01_ATOMIC_LOCK_01_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_02 */
#define MBOX_ATOMIC_LOCK_02_OFFSET                         (0x108U)
#define MBOX_ATOMIC_LOCK_02_ATOMIC_LOCK_02_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_02_ATOMIC_LOCK_02_MASK            (0x1U << MBOX_ATOMIC_LOCK_02_ATOMIC_LOCK_02_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_03 */
#define MBOX_ATOMIC_LOCK_03_OFFSET                         (0x10CU)
#define MBOX_ATOMIC_LOCK_03_ATOMIC_LOCK_03_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_03_ATOMIC_LOCK_03_MASK            (0x1U << MBOX_ATOMIC_LOCK_03_ATOMIC_LOCK_03_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_04 */
#define MBOX_ATOMIC_LOCK_04_OFFSET                         (0x110U)
#define MBOX_ATOMIC_LOCK_04_ATOMIC_LOCK_04_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_04_ATOMIC_LOCK_04_MASK            (0x1U << MBOX_ATOMIC_LOCK_04_ATOMIC_LOCK_04_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_05 */
#define MBOX_ATOMIC_LOCK_05_OFFSET                         (0x114U)
#define MBOX_ATOMIC_LOCK_05_ATOMIC_LOCK_05_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_05_ATOMIC_LOCK_05_MASK            (0x1U << MBOX_ATOMIC_LOCK_05_ATOMIC_LOCK_05_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_06 */
#define MBOX_ATOMIC_LOCK_06_OFFSET                         (0x118U)
#define MBOX_ATOMIC_LOCK_06_ATOMIC_LOCK_06_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_06_ATOMIC_LOCK_06_MASK            (0x1U << MBOX_ATOMIC_LOCK_06_ATOMIC_LOCK_06_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_07 */
#define MBOX_ATOMIC_LOCK_07_OFFSET                         (0x11CU)
#define MBOX_ATOMIC_LOCK_07_ATOMIC_LOCK_07_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_07_ATOMIC_LOCK_07_MASK            (0x1U << MBOX_ATOMIC_LOCK_07_ATOMIC_LOCK_07_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_08 */
#define MBOX_ATOMIC_LOCK_08_OFFSET                         (0x120U)
#define MBOX_ATOMIC_LOCK_08_ATOMIC_LOCK_08_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_08_ATOMIC_LOCK_08_MASK            (0x1U << MBOX_ATOMIC_LOCK_08_ATOMIC_LOCK_08_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_09 */
#define MBOX_ATOMIC_LOCK_09_OFFSET                         (0x124U)
#define MBOX_ATOMIC_LOCK_09_ATOMIC_LOCK_09_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_09_ATOMIC_LOCK_09_MASK            (0x1U << MBOX_ATOMIC_LOCK_09_ATOMIC_LOCK_09_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_10 */
#define MBOX_ATOMIC_LOCK_10_OFFSET                         (0x128U)
#define MBOX_ATOMIC_LOCK_10_ATOMIC_LOCK_10_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_10_ATOMIC_LOCK_10_MASK            (0x1U << MBOX_ATOMIC_LOCK_10_ATOMIC_LOCK_10_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_11 */
#define MBOX_ATOMIC_LOCK_11_OFFSET                         (0x12CU)
#define MBOX_ATOMIC_LOCK_11_ATOMIC_LOCK_11_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_11_ATOMIC_LOCK_11_MASK            (0x1U << MBOX_ATOMIC_LOCK_11_ATOMIC_LOCK_11_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_12 */
#define MBOX_ATOMIC_LOCK_12_OFFSET                         (0x130U)
#define MBOX_ATOMIC_LOCK_12_ATOMIC_LOCK_12_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_12_ATOMIC_LOCK_12_MASK            (0x1U << MBOX_ATOMIC_LOCK_12_ATOMIC_LOCK_12_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_13 */
#define MBOX_ATOMIC_LOCK_13_OFFSET                         (0x134U)
#define MBOX_ATOMIC_LOCK_13_ATOMIC_LOCK_13_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_13_ATOMIC_LOCK_13_MASK            (0x1U << MBOX_ATOMIC_LOCK_13_ATOMIC_LOCK_13_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_14 */
#define MBOX_ATOMIC_LOCK_14_OFFSET                         (0x138U)
#define MBOX_ATOMIC_LOCK_14_ATOMIC_LOCK_14_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_14_ATOMIC_LOCK_14_MASK            (0x1U << MBOX_ATOMIC_LOCK_14_ATOMIC_LOCK_14_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_15 */
#define MBOX_ATOMIC_LOCK_15_OFFSET                         (0x13CU)
#define MBOX_ATOMIC_LOCK_15_ATOMIC_LOCK_15_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_15_ATOMIC_LOCK_15_MASK            (0x1U << MBOX_ATOMIC_LOCK_15_ATOMIC_LOCK_15_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_16 */
#define MBOX_ATOMIC_LOCK_16_OFFSET                         (0x140U)
#define MBOX_ATOMIC_LOCK_16_ATOMIC_LOCK_16_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_16_ATOMIC_LOCK_16_MASK            (0x1U << MBOX_ATOMIC_LOCK_16_ATOMIC_LOCK_16_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_17 */
#define MBOX_ATOMIC_LOCK_17_OFFSET                         (0x144U)
#define MBOX_ATOMIC_LOCK_17_ATOMIC_LOCK_17_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_17_ATOMIC_LOCK_17_MASK            (0x1U << MBOX_ATOMIC_LOCK_17_ATOMIC_LOCK_17_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_18 */
#define MBOX_ATOMIC_LOCK_18_OFFSET                         (0x148U)
#define MBOX_ATOMIC_LOCK_18_ATOMIC_LOCK_18_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_18_ATOMIC_LOCK_18_MASK            (0x1U << MBOX_ATOMIC_LOCK_18_ATOMIC_LOCK_18_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_19 */
#define MBOX_ATOMIC_LOCK_19_OFFSET                         (0x14CU)
#define MBOX_ATOMIC_LOCK_19_ATOMIC_LOCK_19_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_19_ATOMIC_LOCK_19_MASK            (0x1U << MBOX_ATOMIC_LOCK_19_ATOMIC_LOCK_19_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_20 */
#define MBOX_ATOMIC_LOCK_20_OFFSET                         (0x150U)
#define MBOX_ATOMIC_LOCK_20_ATOMIC_LOCK_20_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_20_ATOMIC_LOCK_20_MASK            (0x1U << MBOX_ATOMIC_LOCK_20_ATOMIC_LOCK_20_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_21 */
#define MBOX_ATOMIC_LOCK_21_OFFSET                         (0x154U)
#define MBOX_ATOMIC_LOCK_21_ATOMIC_LOCK_21_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_21_ATOMIC_LOCK_21_MASK            (0x1U << MBOX_ATOMIC_LOCK_21_ATOMIC_LOCK_21_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_22 */
#define MBOX_ATOMIC_LOCK_22_OFFSET                         (0x158U)
#define MBOX_ATOMIC_LOCK_22_ATOMIC_LOCK_22_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_22_ATOMIC_LOCK_22_MASK            (0x1U << MBOX_ATOMIC_LOCK_22_ATOMIC_LOCK_22_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_23 */
#define MBOX_ATOMIC_LOCK_23_OFFSET                         (0x15CU)
#define MBOX_ATOMIC_LOCK_23_ATOMIC_LOCK_23_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_23_ATOMIC_LOCK_23_MASK            (0x1U << MBOX_ATOMIC_LOCK_23_ATOMIC_LOCK_23_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_24 */
#define MBOX_ATOMIC_LOCK_24_OFFSET                         (0x160U)
#define MBOX_ATOMIC_LOCK_24_ATOMIC_LOCK_24_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_24_ATOMIC_LOCK_24_MASK            (0x1U << MBOX_ATOMIC_LOCK_24_ATOMIC_LOCK_24_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_25 */
#define MBOX_ATOMIC_LOCK_25_OFFSET                         (0x164U)
#define MBOX_ATOMIC_LOCK_25_ATOMIC_LOCK_25_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_25_ATOMIC_LOCK_25_MASK            (0x1U << MBOX_ATOMIC_LOCK_25_ATOMIC_LOCK_25_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_26 */
#define MBOX_ATOMIC_LOCK_26_OFFSET                         (0x168U)
#define MBOX_ATOMIC_LOCK_26_ATOMIC_LOCK_26_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_26_ATOMIC_LOCK_26_MASK            (0x1U << MBOX_ATOMIC_LOCK_26_ATOMIC_LOCK_26_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_27 */
#define MBOX_ATOMIC_LOCK_27_OFFSET                         (0x16CU)
#define MBOX_ATOMIC_LOCK_27_ATOMIC_LOCK_27_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_27_ATOMIC_LOCK_27_MASK            (0x1U << MBOX_ATOMIC_LOCK_27_ATOMIC_LOCK_27_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_28 */
#define MBOX_ATOMIC_LOCK_28_OFFSET                         (0x170U)
#define MBOX_ATOMIC_LOCK_28_ATOMIC_LOCK_28_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_28_ATOMIC_LOCK_28_MASK            (0x1U << MBOX_ATOMIC_LOCK_28_ATOMIC_LOCK_28_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_29 */
#define MBOX_ATOMIC_LOCK_29_OFFSET                         (0x174U)
#define MBOX_ATOMIC_LOCK_29_ATOMIC_LOCK_29_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_29_ATOMIC_LOCK_29_MASK            (0x1U << MBOX_ATOMIC_LOCK_29_ATOMIC_LOCK_29_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_30 */
#define MBOX_ATOMIC_LOCK_30_OFFSET                         (0x178U)
#define MBOX_ATOMIC_LOCK_30_ATOMIC_LOCK_30_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_30_ATOMIC_LOCK_30_MASK            (0x1U << MBOX_ATOMIC_LOCK_30_ATOMIC_LOCK_30_SHIFT)           /* 0x00000001 */
/* ATOMIC_LOCK_31 */
#define MBOX_ATOMIC_LOCK_31_OFFSET                         (0x17CU)
#define MBOX_ATOMIC_LOCK_31_ATOMIC_LOCK_31_SHIFT           (0U)
#define MBOX_ATOMIC_LOCK_31_ATOMIC_LOCK_31_MASK            (0x1U << MBOX_ATOMIC_LOCK_31_ATOMIC_LOCK_31_SHIFT)           /* 0x00000001 */
/*****************************************ICACHE*****************************************/
/* CACHE_CTRL */
#define ICACHE_CACHE_CTRL_OFFSET                           (0x0U)
#define ICACHE_CACHE_CTRL_CACHE_EN_SHIFT                   (0U)
#define ICACHE_CACHE_CTRL_CACHE_EN_MASK                    (0x1U << ICACHE_CACHE_CTRL_CACHE_EN_SHIFT)                   /* 0x00000001 */
#define ICACHE_CACHE_CTRL_CACHE_WT_EN_SHIFT                (1U)
#define ICACHE_CACHE_CTRL_CACHE_WT_EN_MASK                 (0x1U << ICACHE_CACHE_CTRL_CACHE_WT_EN_SHIFT)                /* 0x00000002 */
#define ICACHE_CACHE_CTRL_CACHE_HB_EN_SHIFT                (2U)
#define ICACHE_CACHE_CTRL_CACHE_HB_EN_MASK                 (0x1U << ICACHE_CACHE_CTRL_CACHE_HB_EN_SHIFT)                /* 0x00000004 */
#define ICACHE_CACHE_CTRL_CACHE_STB_EN_SHIFT               (3U)
#define ICACHE_CACHE_CTRL_CACHE_STB_EN_MASK                (0x1U << ICACHE_CACHE_CTRL_CACHE_STB_EN_SHIFT)               /* 0x00000008 */
#define ICACHE_CACHE_CTRL_CACHE_FLUSH_SHIFT                (4U)
#define ICACHE_CACHE_CTRL_CACHE_FLUSH_MASK                 (0x1U << ICACHE_CACHE_CTRL_CACHE_FLUSH_SHIFT)                /* 0x00000010 */
#define ICACHE_CACHE_CTRL_CACHE_PMU_EN_SHIFT               (5U)
#define ICACHE_CACHE_CTRL_CACHE_PMU_EN_MASK                (0x1U << ICACHE_CACHE_CTRL_CACHE_PMU_EN_SHIFT)               /* 0x00000020 */
#define ICACHE_CACHE_CTRL_CACHE_BYPASS_SHIFT               (6U)
#define ICACHE_CACHE_CTRL_CACHE_BYPASS_MASK                (0x1U << ICACHE_CACHE_CTRL_CACHE_BYPASS_SHIFT)               /* 0x00000040 */
#define ICACHE_CACHE_CTRL_STB_TIMEOUT_EN_SHIFT             (7U)
#define ICACHE_CACHE_CTRL_STB_TIMEOUT_EN_MASK              (0x1U << ICACHE_CACHE_CTRL_STB_TIMEOUT_EN_SHIFT)             /* 0x00000080 */
#define ICACHE_CACHE_CTRL_CACHE_ENTRY_THRESH_SHIFT         (8U)
#define ICACHE_CACHE_CTRL_CACHE_ENTRY_THRESH_MASK          (0x7U << ICACHE_CACHE_CTRL_CACHE_ENTRY_THRESH_SHIFT)         /* 0x00000700 */
#define ICACHE_CACHE_CTRL_CACHE_MPU_MODE_SHIFT             (12U)
#define ICACHE_CACHE_CTRL_CACHE_MPU_MODE_MASK              (0x1U << ICACHE_CACHE_CTRL_CACHE_MPU_MODE_SHIFT)             /* 0x00001000 */
#define ICACHE_CACHE_CTRL_CACHE_PF_EN_SHIFT                (13U)
#define ICACHE_CACHE_CTRL_CACHE_PF_EN_MASK                 (0x1U << ICACHE_CACHE_CTRL_CACHE_PF_EN_SHIFT)                /* 0x00002000 */
/* CACHE_MAINTAIN0 */
#define ICACHE_CACHE_MAINTAIN0_OFFSET                      (0x4U)
#define ICACHE_CACHE_MAINTAIN0_CACHE_M_VALID_SHIFT         (0U)
#define ICACHE_CACHE_MAINTAIN0_CACHE_M_VALID_MASK          (0x1U << ICACHE_CACHE_MAINTAIN0_CACHE_M_VALID_SHIFT)         /* 0x00000001 */
#define ICACHE_CACHE_MAINTAIN0_CACHE_M_CMD_SHIFT           (1U)
#define ICACHE_CACHE_MAINTAIN0_CACHE_M_CMD_MASK            (0x3U << ICACHE_CACHE_MAINTAIN0_CACHE_M_CMD_SHIFT)           /* 0x00000006 */
#define ICACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_SHIFT          (5U)
#define ICACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_MASK           (0x7FFFFFFU << ICACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_SHIFT)    /* 0xFFFFFFE0 */
/* CACHE_MAINTAIN1 */
#define ICACHE_CACHE_MAINTAIN1_OFFSET                      (0x8U)
#define ICACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_SHIFT        (0U)
#define ICACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_MASK         (0xFFFFU << ICACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_SHIFT)     /* 0x0000FFFF */
/* STB_TIMEOUT_CTRL */
#define ICACHE_STB_TIMEOUT_CTRL_OFFSET                     (0xCU)
#define ICACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_SHIFT    (0U)
#define ICACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_MASK     (0x7FFFFU << ICACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_SHIFT) /* 0x0007FFFF */
/* CACHE_INT_EN */
#define ICACHE_CACHE_INT_EN_OFFSET                         (0x20U)
#define ICACHE_CACHE_INT_EN_ERR_RECORD_EN_SHIFT            (0U)
#define ICACHE_CACHE_INT_EN_ERR_RECORD_EN_MASK             (0x1U << ICACHE_CACHE_INT_EN_ERR_RECORD_EN_SHIFT)            /* 0x00000001 */
/* CACHE_INT_ST */
#define ICACHE_CACHE_INT_ST_OFFSET                         (0x24U)
#define ICACHE_CACHE_INT_ST_AHB_ERROR_STATUS_SHIFT         (0U)
#define ICACHE_CACHE_INT_ST_AHB_ERROR_STATUS_MASK          (0x1U << ICACHE_CACHE_INT_ST_AHB_ERROR_STATUS_SHIFT)         /* 0x00000001 */
/* CACHE_ERR_HADDR */
#define ICACHE_CACHE_ERR_HADDR_OFFSET                      (0x28U)
#define ICACHE_CACHE_ERR_HADDR                             (0x0U)
#define ICACHE_CACHE_ERR_HADDR_STATUS_HADDR_SHIFT          (0U)
#define ICACHE_CACHE_ERR_HADDR_STATUS_HADDR_MASK           (0x1U << ICACHE_CACHE_ERR_HADDR_STATUS_HADDR_SHIFT)          /* 0x00000001 */
/* CACHE_STATUS */
#define ICACHE_CACHE_STATUS_OFFSET                         (0x30U)
#define ICACHE_CACHE_STATUS                                (0x0U)
#define ICACHE_CACHE_STATUS_CACHE_INIT_FINISH_SHIFT        (0U)
#define ICACHE_CACHE_STATUS_CACHE_INIT_FINISH_MASK         (0x1U << ICACHE_CACHE_STATUS_CACHE_INIT_FINISH_SHIFT)        /* 0x00000001 */
#define ICACHE_CACHE_STATUS_CACHE_M_BUSY_SHIFT             (1U)
#define ICACHE_CACHE_STATUS_CACHE_M_BUSY_MASK              (0x1U << ICACHE_CACHE_STATUS_CACHE_M_BUSY_SHIFT)             /* 0x00000002 */
#define ICACHE_CACHE_STATUS_CACHE_FLUSH_DONE_SHIFT         (2U)
#define ICACHE_CACHE_STATUS_CACHE_FLUSH_DONE_MASK          (0x1U << ICACHE_CACHE_STATUS_CACHE_FLUSH_DONE_SHIFT)         /* 0x00000004 */
/* PMU_RD_NUM_CNT */
#define ICACHE_PMU_RD_NUM_CNT_OFFSET                       (0x40U)
#define ICACHE_PMU_RD_NUM_CNT                              (0x0U)
#define ICACHE_PMU_RD_NUM_CNT_PMU_RD_NUM_CNT_SHIFT         (0U)
#define ICACHE_PMU_RD_NUM_CNT_PMU_RD_NUM_CNT_MASK          (0xFFFFFFFFU << ICACHE_PMU_RD_NUM_CNT_PMU_RD_NUM_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_WR_NUM_CNT */
#define ICACHE_PMU_WR_NUM_CNT_OFFSET                       (0x44U)
#define ICACHE_PMU_WR_NUM_CNT                              (0x0U)
#define ICACHE_PMU_WR_NUM_CNT_PMU_WR_NUM_CNT_SHIFT         (0U)
#define ICACHE_PMU_WR_NUM_CNT_PMU_WR_NUM_CNT_MASK          (0xFFFFFFFFU << ICACHE_PMU_WR_NUM_CNT_PMU_WR_NUM_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_SRAM_RD_HIT_CNT */
#define ICACHE_PMU_SRAM_RD_HIT_CNT_OFFSET                  (0x48U)
#define ICACHE_PMU_SRAM_RD_HIT_CNT                         (0x0U)
#define ICACHE_PMU_SRAM_RD_HIT_CNT_PMU_SRAM_RD_HIT_CNT_SHIFT (0U)
#define ICACHE_PMU_SRAM_RD_HIT_CNT_PMU_SRAM_RD_HIT_CNT_MASK (0xFFFFFFFFU << ICACHE_PMU_SRAM_RD_HIT_CNT_PMU_SRAM_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_HB_RD_HIT_CNT */
#define ICACHE_PMU_HB_RD_HIT_CNT_OFFSET                    (0x4CU)
#define ICACHE_PMU_HB_RD_HIT_CNT                           (0x0U)
#define ICACHE_PMU_HB_RD_HIT_CNT_PMU_HB_RD_HIT_CNT_SHIFT   (0U)
#define ICACHE_PMU_HB_RD_HIT_CNT_PMU_HB_RD_HIT_CNT_MASK    (0xFFFFFFFFU << ICACHE_PMU_HB_RD_HIT_CNT_PMU_HB_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_STB_RD_HIT_CNT */
#define ICACHE_PMU_STB_RD_HIT_CNT_OFFSET                   (0x50U)
#define ICACHE_PMU_STB_RD_HIT_CNT                          (0x0U)
#define ICACHE_PMU_STB_RD_HIT_CNT_PMU_STB_RD_HIT_CNT_SHIFT (0U)
#define ICACHE_PMU_STB_RD_HIT_CNT_PMU_STB_RD_HIT_CNT_MASK  (0xFFFFFFFFU << ICACHE_PMU_STB_RD_HIT_CNT_PMU_STB_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_RD_HIT_CNT */
#define ICACHE_PMU_RD_HIT_CNT_OFFSET                       (0x54U)
#define ICACHE_PMU_RD_HIT_CNT                              (0x0U)
#define ICACHE_PMU_RD_HIT_CNT_PMU_RD_HIT_CNT_SHIFT         (0U)
#define ICACHE_PMU_RD_HIT_CNT_PMU_RD_HIT_CNT_MASK          (0xFFFFFFFFU << ICACHE_PMU_RD_HIT_CNT_PMU_RD_HIT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_WR_HIT_CNT */
#define ICACHE_PMU_WR_HIT_CNT_OFFSET                       (0x58U)
#define ICACHE_PMU_WR_HIT_CNT                              (0x0U)
#define ICACHE_PMU_WR_HIT_CNT_PMU_WR_HIT_CNT_SHIFT         (0U)
#define ICACHE_PMU_WR_HIT_CNT_PMU_WR_HIT_CNT_MASK          (0xFFFFFFFFU << ICACHE_PMU_WR_HIT_CNT_PMU_WR_HIT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_RD_MISS_PENALTY_CNT */
#define ICACHE_PMU_RD_MISS_PENALTY_CNT_OFFSET              (0x5CU)
#define ICACHE_PMU_RD_MISS_PENALTY_CNT                     (0x0U)
#define ICACHE_PMU_RD_MISS_PENALTY_CNT_PMU_RD_MISS_PENALTY_CNT_SHIFT (0U)
#define ICACHE_PMU_RD_MISS_PENALTY_CNT_PMU_RD_MISS_PENALTY_CNT_MASK (0xFFFFFFFFU << ICACHE_PMU_RD_MISS_PENALTY_CNT_PMU_RD_MISS_PENALTY_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_WR_MISS_PENALTY_CNT */
#define ICACHE_PMU_WR_MISS_PENALTY_CNT_OFFSET              (0x60U)
#define ICACHE_PMU_WR_MISS_PENALTY_CNT                     (0x0U)
#define ICACHE_PMU_WR_MISS_PENALTY_CNT_PMU_WR_MISS_PENALTY_CNT_SHIFT (0U)
#define ICACHE_PMU_WR_MISS_PENALTY_CNT_PMU_WR_MISS_PENALTY_CNT_MASK (0xFFFFFFFFU << ICACHE_PMU_WR_MISS_PENALTY_CNT_PMU_WR_MISS_PENALTY_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_RD_LAT_CNT */
#define ICACHE_PMU_RD_LAT_CNT_OFFSET                       (0x64U)
#define ICACHE_PMU_RD_LAT_CNT                              (0x0U)
#define ICACHE_PMU_RD_LAT_CNT_PMU_RD_LAT_CNT_SHIFT         (0U)
#define ICACHE_PMU_RD_LAT_CNT_PMU_RD_LAT_CNT_MASK          (0xFFFFFFFFU << ICACHE_PMU_RD_LAT_CNT_PMU_RD_LAT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_WR_LAT_CNT */
#define ICACHE_PMU_WR_LAT_CNT_OFFSET                       (0x68U)
#define ICACHE_PMU_WR_LAT_CNT                              (0x0U)
#define ICACHE_PMU_WR_LAT_CNT_PMU_RD_LAT_CNT_SHIFT         (0U)
#define ICACHE_PMU_WR_LAT_CNT_PMU_RD_LAT_CNT_MASK          (0xFFFFFFFFU << ICACHE_PMU_WR_LAT_CNT_PMU_RD_LAT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* REVISION */
#define ICACHE_REVISION_OFFSET                             (0xF0U)
#define ICACHE_REVISION                                    (0x100U)
#define ICACHE_REVISION_REVISION_SHIFT                     (0U)
#define ICACHE_REVISION_REVISION_MASK                      (0xFFFFFFFFU << ICACHE_REVISION_REVISION_SHIFT)              /* 0xFFFFFFFF */
/*****************************************DCACHE*****************************************/
/* CACHE_CTRL */
#define DCACHE_CACHE_CTRL_OFFSET                           (0x0U)
#define DCACHE_CACHE_CTRL_CACHE_EN_SHIFT                   (0U)
#define DCACHE_CACHE_CTRL_CACHE_EN_MASK                    (0x1U << DCACHE_CACHE_CTRL_CACHE_EN_SHIFT)                   /* 0x00000001 */
#define DCACHE_CACHE_CTRL_CACHE_WT_EN_SHIFT                (1U)
#define DCACHE_CACHE_CTRL_CACHE_WT_EN_MASK                 (0x1U << DCACHE_CACHE_CTRL_CACHE_WT_EN_SHIFT)                /* 0x00000002 */
#define DCACHE_CACHE_CTRL_CACHE_HB_EN_SHIFT                (2U)
#define DCACHE_CACHE_CTRL_CACHE_HB_EN_MASK                 (0x1U << DCACHE_CACHE_CTRL_CACHE_HB_EN_SHIFT)                /* 0x00000004 */
#define DCACHE_CACHE_CTRL_CACHE_STB_EN_SHIFT               (3U)
#define DCACHE_CACHE_CTRL_CACHE_STB_EN_MASK                (0x1U << DCACHE_CACHE_CTRL_CACHE_STB_EN_SHIFT)               /* 0x00000008 */
#define DCACHE_CACHE_CTRL_CACHE_FLUSH_SHIFT                (4U)
#define DCACHE_CACHE_CTRL_CACHE_FLUSH_MASK                 (0x1U << DCACHE_CACHE_CTRL_CACHE_FLUSH_SHIFT)                /* 0x00000010 */
#define DCACHE_CACHE_CTRL_CACHE_PMU_EN_SHIFT               (5U)
#define DCACHE_CACHE_CTRL_CACHE_PMU_EN_MASK                (0x1U << DCACHE_CACHE_CTRL_CACHE_PMU_EN_SHIFT)               /* 0x00000020 */
#define DCACHE_CACHE_CTRL_CACHE_BYPASS_SHIFT               (6U)
#define DCACHE_CACHE_CTRL_CACHE_BYPASS_MASK                (0x1U << DCACHE_CACHE_CTRL_CACHE_BYPASS_SHIFT)               /* 0x00000040 */
#define DCACHE_CACHE_CTRL_STB_TIMEOUT_EN_SHIFT             (7U)
#define DCACHE_CACHE_CTRL_STB_TIMEOUT_EN_MASK              (0x1U << DCACHE_CACHE_CTRL_STB_TIMEOUT_EN_SHIFT)             /* 0x00000080 */
#define DCACHE_CACHE_CTRL_CACHE_ENTRY_THRESH_SHIFT         (8U)
#define DCACHE_CACHE_CTRL_CACHE_ENTRY_THRESH_MASK          (0x7U << DCACHE_CACHE_CTRL_CACHE_ENTRY_THRESH_SHIFT)         /* 0x00000700 */
#define DCACHE_CACHE_CTRL_CACHE_MPU_MODE_SHIFT             (12U)
#define DCACHE_CACHE_CTRL_CACHE_MPU_MODE_MASK              (0x1U << DCACHE_CACHE_CTRL_CACHE_MPU_MODE_SHIFT)             /* 0x00001000 */
#define DCACHE_CACHE_CTRL_CACHE_PF_EN_SHIFT                (13U)
#define DCACHE_CACHE_CTRL_CACHE_PF_EN_MASK                 (0x1U << DCACHE_CACHE_CTRL_CACHE_PF_EN_SHIFT)                /* 0x00002000 */
/* CACHE_MAINTAIN0 */
#define DCACHE_CACHE_MAINTAIN0_OFFSET                      (0x4U)
#define DCACHE_CACHE_MAINTAIN0_CACHE_M_VALID_SHIFT         (0U)
#define DCACHE_CACHE_MAINTAIN0_CACHE_M_VALID_MASK          (0x1U << DCACHE_CACHE_MAINTAIN0_CACHE_M_VALID_SHIFT)         /* 0x00000001 */
#define DCACHE_CACHE_MAINTAIN0_CACHE_M_CMD_SHIFT           (1U)
#define DCACHE_CACHE_MAINTAIN0_CACHE_M_CMD_MASK            (0x3U << DCACHE_CACHE_MAINTAIN0_CACHE_M_CMD_SHIFT)           /* 0x00000006 */
#define DCACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_SHIFT          (5U)
#define DCACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_MASK           (0x7FFFFFFU << DCACHE_CACHE_MAINTAIN0_CACHE_M_ADDR_SHIFT)    /* 0xFFFFFFE0 */
/* CACHE_MAINTAIN1 */
#define DCACHE_CACHE_MAINTAIN1_OFFSET                      (0x8U)
#define DCACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_SHIFT        (0U)
#define DCACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_MASK         (0xFFFFU << DCACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_SHIFT)     /* 0x0000FFFF */
/* STB_TIMEOUT_CTRL */
#define DCACHE_STB_TIMEOUT_CTRL_OFFSET                     (0xCU)
#define DCACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_SHIFT    (0U)
#define DCACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_MASK     (0x7FFFFU << DCACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_SHIFT) /* 0x0007FFFF */
/* CACHE_INT_EN */
#define DCACHE_CACHE_INT_EN_OFFSET                         (0x20U)
#define DCACHE_CACHE_INT_EN_ERR_RECORD_EN_SHIFT            (0U)
#define DCACHE_CACHE_INT_EN_ERR_RECORD_EN_MASK             (0x1U << DCACHE_CACHE_INT_EN_ERR_RECORD_EN_SHIFT)            /* 0x00000001 */
/* CACHE_INT_ST */
#define DCACHE_CACHE_INT_ST_OFFSET                         (0x24U)
#define DCACHE_CACHE_INT_ST_AHB_ERROR_STATUS_SHIFT         (0U)
#define DCACHE_CACHE_INT_ST_AHB_ERROR_STATUS_MASK          (0x1U << DCACHE_CACHE_INT_ST_AHB_ERROR_STATUS_SHIFT)         /* 0x00000001 */
/* CACHE_ERR_HADDR */
#define DCACHE_CACHE_ERR_HADDR_OFFSET                      (0x28U)
#define DCACHE_CACHE_ERR_HADDR                             (0x0U)
#define DCACHE_CACHE_ERR_HADDR_STATUS_HADDR_SHIFT          (0U)
#define DCACHE_CACHE_ERR_HADDR_STATUS_HADDR_MASK           (0x1U << DCACHE_CACHE_ERR_HADDR_STATUS_HADDR_SHIFT)          /* 0x00000001 */
/* CACHE_STATUS */
#define DCACHE_CACHE_STATUS_OFFSET                         (0x30U)
#define DCACHE_CACHE_STATUS                                (0x0U)
#define DCACHE_CACHE_STATUS_CACHE_INIT_FINISH_SHIFT        (0U)
#define DCACHE_CACHE_STATUS_CACHE_INIT_FINISH_MASK         (0x1U << DCACHE_CACHE_STATUS_CACHE_INIT_FINISH_SHIFT)        /* 0x00000001 */
#define DCACHE_CACHE_STATUS_CACHE_M_BUSY_SHIFT             (1U)
#define DCACHE_CACHE_STATUS_CACHE_M_BUSY_MASK              (0x1U << DCACHE_CACHE_STATUS_CACHE_M_BUSY_SHIFT)             /* 0x00000002 */
#define DCACHE_CACHE_STATUS_CACHE_FLUSH_DONE_SHIFT         (2U)
#define DCACHE_CACHE_STATUS_CACHE_FLUSH_DONE_MASK          (0x1U << DCACHE_CACHE_STATUS_CACHE_FLUSH_DONE_SHIFT)         /* 0x00000004 */
/* PMU_RD_NUM_CNT */
#define DCACHE_PMU_RD_NUM_CNT_OFFSET                       (0x40U)
#define DCACHE_PMU_RD_NUM_CNT                              (0x0U)
#define DCACHE_PMU_RD_NUM_CNT_PMU_RD_NUM_CNT_SHIFT         (0U)
#define DCACHE_PMU_RD_NUM_CNT_PMU_RD_NUM_CNT_MASK          (0xFFFFFFFFU << DCACHE_PMU_RD_NUM_CNT_PMU_RD_NUM_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_WR_NUM_CNT */
#define DCACHE_PMU_WR_NUM_CNT_OFFSET                       (0x44U)
#define DCACHE_PMU_WR_NUM_CNT                              (0x0U)
#define DCACHE_PMU_WR_NUM_CNT_PMU_WR_NUM_CNT_SHIFT         (0U)
#define DCACHE_PMU_WR_NUM_CNT_PMU_WR_NUM_CNT_MASK          (0xFFFFFFFFU << DCACHE_PMU_WR_NUM_CNT_PMU_WR_NUM_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_SRAM_RD_HIT_CNT */
#define DCACHE_PMU_SRAM_RD_HIT_CNT_OFFSET                  (0x48U)
#define DCACHE_PMU_SRAM_RD_HIT_CNT                         (0x0U)
#define DCACHE_PMU_SRAM_RD_HIT_CNT_PMU_SRAM_RD_HIT_CNT_SHIFT (0U)
#define DCACHE_PMU_SRAM_RD_HIT_CNT_PMU_SRAM_RD_HIT_CNT_MASK (0xFFFFFFFFU << DCACHE_PMU_SRAM_RD_HIT_CNT_PMU_SRAM_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_HB_RD_HIT_CNT */
#define DCACHE_PMU_HB_RD_HIT_CNT_OFFSET                    (0x4CU)
#define DCACHE_PMU_HB_RD_HIT_CNT                           (0x0U)
#define DCACHE_PMU_HB_RD_HIT_CNT_PMU_HB_RD_HIT_CNT_SHIFT   (0U)
#define DCACHE_PMU_HB_RD_HIT_CNT_PMU_HB_RD_HIT_CNT_MASK    (0xFFFFFFFFU << DCACHE_PMU_HB_RD_HIT_CNT_PMU_HB_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_STB_RD_HIT_CNT */
#define DCACHE_PMU_STB_RD_HIT_CNT_OFFSET                   (0x50U)
#define DCACHE_PMU_STB_RD_HIT_CNT                          (0x0U)
#define DCACHE_PMU_STB_RD_HIT_CNT_PMU_STB_RD_HIT_CNT_SHIFT (0U)
#define DCACHE_PMU_STB_RD_HIT_CNT_PMU_STB_RD_HIT_CNT_MASK  (0xFFFFFFFFU << DCACHE_PMU_STB_RD_HIT_CNT_PMU_STB_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_RD_HIT_CNT */
#define DCACHE_PMU_RD_HIT_CNT_OFFSET                       (0x54U)
#define DCACHE_PMU_RD_HIT_CNT                              (0x0U)
#define DCACHE_PMU_RD_HIT_CNT_PMU_RD_HIT_CNT_SHIFT         (0U)
#define DCACHE_PMU_RD_HIT_CNT_PMU_RD_HIT_CNT_MASK          (0xFFFFFFFFU << DCACHE_PMU_RD_HIT_CNT_PMU_RD_HIT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_WR_HIT_CNT */
#define DCACHE_PMU_WR_HIT_CNT_OFFSET                       (0x58U)
#define DCACHE_PMU_WR_HIT_CNT                              (0x0U)
#define DCACHE_PMU_WR_HIT_CNT_PMU_WR_HIT_CNT_SHIFT         (0U)
#define DCACHE_PMU_WR_HIT_CNT_PMU_WR_HIT_CNT_MASK          (0xFFFFFFFFU << DCACHE_PMU_WR_HIT_CNT_PMU_WR_HIT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_RD_MISS_PENALTY_CNT */
#define DCACHE_PMU_RD_MISS_PENALTY_CNT_OFFSET              (0x5CU)
#define DCACHE_PMU_RD_MISS_PENALTY_CNT                     (0x0U)
#define DCACHE_PMU_RD_MISS_PENALTY_CNT_PMU_RD_MISS_PENALTY_CNT_SHIFT (0U)
#define DCACHE_PMU_RD_MISS_PENALTY_CNT_PMU_RD_MISS_PENALTY_CNT_MASK (0xFFFFFFFFU << DCACHE_PMU_RD_MISS_PENALTY_CNT_PMU_RD_MISS_PENALTY_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_WR_MISS_PENALTY_CNT */
#define DCACHE_PMU_WR_MISS_PENALTY_CNT_OFFSET              (0x60U)
#define DCACHE_PMU_WR_MISS_PENALTY_CNT                     (0x0U)
#define DCACHE_PMU_WR_MISS_PENALTY_CNT_PMU_WR_MISS_PENALTY_CNT_SHIFT (0U)
#define DCACHE_PMU_WR_MISS_PENALTY_CNT_PMU_WR_MISS_PENALTY_CNT_MASK (0xFFFFFFFFU << DCACHE_PMU_WR_MISS_PENALTY_CNT_PMU_WR_MISS_PENALTY_CNT_SHIFT) /* 0xFFFFFFFF */
/* PMU_RD_LAT_CNT */
#define DCACHE_PMU_RD_LAT_CNT_OFFSET                       (0x64U)
#define DCACHE_PMU_RD_LAT_CNT                              (0x0U)
#define DCACHE_PMU_RD_LAT_CNT_PMU_RD_LAT_CNT_SHIFT         (0U)
#define DCACHE_PMU_RD_LAT_CNT_PMU_RD_LAT_CNT_MASK          (0xFFFFFFFFU << DCACHE_PMU_RD_LAT_CNT_PMU_RD_LAT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* PMU_WR_LAT_CNT */
#define DCACHE_PMU_WR_LAT_CNT_OFFSET                       (0x68U)
#define DCACHE_PMU_WR_LAT_CNT                              (0x0U)
#define DCACHE_PMU_WR_LAT_CNT_PMU_RD_LAT_CNT_SHIFT         (0U)
#define DCACHE_PMU_WR_LAT_CNT_PMU_RD_LAT_CNT_MASK          (0xFFFFFFFFU << DCACHE_PMU_WR_LAT_CNT_PMU_RD_LAT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* REVISION */
#define DCACHE_REVISION_OFFSET                             (0xF0U)
#define DCACHE_REVISION                                    (0x100U)
#define DCACHE_REVISION_REVISION_SHIFT                     (0U)
#define DCACHE_REVISION_REVISION_MASK                      (0xFFFFFFFFU << DCACHE_REVISION_REVISION_SHIFT)              /* 0xFFFFFFFF */
/* TOP CRU */
/********Name=CRU_SOFTRST_CON02,Offset=0xA08********/
#define SRST_REF_PVTPLL_0 39U
#define SRST_REF_PVTPLL_1 40U
#define SRST_P_CRU        42U
#define SRST_P_CRU_BIU    43U

/********Name=GATE_CON00,Offset=0x800********/
#define CLK_MATRIX_50M_SRC_GATE  1U
#define CLK_MATRIX_100M_SRC_GATE 2U
#define CLK_MATRIX_150M_SRC_GATE 3U
#define CLK_MATRIX_200M_SRC_GATE 4U
#define CLK_MATRIX_250M_SRC_GATE 5U
#define CLK_MATRIX_300M_SRC_GATE 6U
#define CLK_MATRIX_339M_SRC_GATE 7U
#define CLK_MATRIX_400M_SRC_GATE 8U
#define CLK_MATRIX_450M_SRC_GATE 9U
#define CLK_MATRIX_500M_SRC_GATE 10U
#define CLK_UART0_GATE           11U
#define CLK_UART0_FRAC_GATE      12U
#define SCLK_UART0_GATE          13U
#define CLK_UART1_GATE           14U
#define CLK_UART1_FRAC_GATE      15U
/********Name=GATE_CON01,Offset=0x804********/
#define SCLK_UART1_GATE           16U
#define CLK_UART2_GATE            17U
#define CLK_UART2_FRAC_GATE       18U
#define SCLK_UART2_GATE           19U
#define CLK_UART3_GATE            20U
#define CLK_UART3_FRAC_GATE       21U
#define SCLK_UART3_GATE           22U
#define CLK_UART4_GATE            23U
#define CLK_UART4_FRAC_GATE       24U
#define SCLK_UART4_GATE           25U
#define CLK_UART5_GATE            26U
#define CLK_UART5_FRAC_GATE       27U
#define SCLK_UART5_GATE           28U
#define CLK_I2S0_8CH_TX_GATE      29U
#define CLK_I2S0_8CH_FRAC_TX_GATE 30U
#define MCLK_I2S0_8CH_TX_SRC_GATE 31U
/********Name=GATE_CON02,Offset=0x808********/
#define CLK_I2S0_8CH_RX_GATE      32U
#define CLK_I2S0_8CH_FRAC_RX_GATE 33U
#define MCLK_I2S0_8CH_RX_GATE     34U
#define DCLK_VOP_SRC_GATE         38U
#define CLK_REF_PVTPLL_0_GATE     39U
#define CLK_REF_PVTPLL_1_GATE     40U
#define PCLK_TOP_ROOT_GATE        41U
#define PCLK_CRU_GATE             42U
#define PCLK_CRU_BIU_GATE         43U
#define CLK_TESTOUT_GATE          44U
#define CLK_APLLTEST_GATE         45U
#define CLK_DPLLTEST_GATE         46U
#define CLK_CPLLTEST_GATE         47U
/********Name=GATE_CON03,Offset=0x80C********/
#define CLK_GPLLTEST_GATE       48U
#define CLK_REF_MIPI0_SRC_GATE  52U
#define CLK_REF_MIPI0_FRAC_GATE 53U
#define CLK_REF_MIPI0_OUT_GATE  54U
#define CLK_REF_MIPI1_SRC_GATE  55U
#define CLK_REF_MIPI1_FRAC_GATE 56U
#define CLK_REF_MIPI1_OUT_GATE  57U
#define CLK_VICAP_M0_SRC_GATE   58U
#define CLK_VICAP_M0_FRAC_GATE  59U
#define CLK_VICAP_M0_OUT_GATE   60U
#define CLK_VICAP_M1_SRC_GATE   61U
#define CLK_VICAP_M1_FRAC_GATE  62U
#define CLK_VICAP_M1_OUT_GATE   63U

/********Name=CRU_CLKSEL_CON00,Offset=0x300********/
#define CLK_MATRIX_50M_SRC_DIV  0x05000000U
#define CLK_MATRIX_100M_SRC_DIV 0x05060000U
/********Name=CRU_CLKSEL_CON01,Offset=0x304********/
#define CLK_MATRIX_150M_SRC_DIV 0x05000001U
#define CLK_MATRIX_200M_SRC_DIV 0x05060001U
/********Name=CRU_CLKSEL_CON02,Offset=0x308********/
#define CLK_MATRIX_250M_SRC_DIV 0x05000002U
#define CLK_MATRIX_300M_SRC_DIV 0x05060002U
/********Name=CRU_CLKSEL_CON03,Offset=0x30C********/
#define CLK_MATRIX_339M_SRC_DIV 0x05000003U
#define CLK_MATRIX_400M_SRC_DIV 0x05060003U
/********Name=CRU_CLKSEL_CON04,Offset=0x310********/
#define CLK_MATRIX_450M_SRC_DIV 0x05000004U
#define CLK_MATRIX_500M_SRC_DIV 0x05060004U
/********Name=CRU_CLKSEL_CON05,Offset=0x314********/
#define CLK_UART0_SRC_DIV 0x05000005U
/********Name=CRU_CLKSEL_CON06,Offset=0x318********/
#define CLK_UART0_FRAC_DIV 0x20000006U
/********Name=CRU_CLKSEL_CON07,Offset=0x31C********/
#define CLK_UART1_SRC_DIV 0x05020007U
/********Name=CRU_CLKSEL_CON08,Offset=0x320********/
#define CLK_UART1_FRAC_DIV 0x20000008U
/********Name=CRU_CLKSEL_CON09,Offset=0x324********/
#define CLK_UART2_SRC_DIV 0x05020009U
/********Name=CRU_CLKSEL_CON10,Offset=0x328********/
#define CLK_UART2_FRAC_DIV 0x2000000AU
/********Name=CRU_CLKSEL_CON11,Offset=0x32C********/
#define CLK_UART3_SRC_DIV 0x0502000BU
/********Name=CRU_CLKSEL_CON12,Offset=0x330********/
#define CLK_UART3_FRAC_DIV 0x2000000CU
/********Name=CRU_CLKSEL_CON13,Offset=0x334********/
#define CLK_UART4_SRC_DIV 0x0502000DU
/********Name=CRU_CLKSEL_CON14,Offset=0x338********/
#define CLK_UART4_FRAC_DIV 0x2000000EU
/********Name=CRU_CLKSEL_CON15,Offset=0x33C********/
#define CLK_UART5_SRC_DIV 0x0502000FU
/********Name=CRU_CLKSEL_CON16,Offset=0x340********/
#define CLK_UART5_FRAC_DIV 0x20000010U
/********Name=CRU_CLKSEL_CON17,Offset=0x344********/
#define CLK_I2S0_8CH_TX_SRC_DIV 0x05020011U
/********Name=CRU_CLKSEL_CON18,Offset=0x348********/
#define CLK_I2S0_8CH_TX_FRAC_DIV 0x20000012U
/********Name=CRU_CLKSEL_CON19,Offset=0x34C********/
#define CLK_I2S0_8CH_RX_SRC_DIV 0x05020013U
/********Name=CRU_CLKSEL_CON20,Offset=0x350********/
#define CLK_I2S0_8CH_RX_FRAC_DIV 0x20000014U
/********Name=CRU_CLKSEL_CON21,Offset=0x354********/
/********Name=CRU_CLKSEL_CON23,Offset=0x35C********/
#define DCLK_VOP_SRC_DIV     0x05030017U
#define CLK_REF_PVTPLL_0_DIV 0x05090017U
/********Name=CRU_CLKSEL_CON24,Offset=0x360********/
#define CLK_REF_PVTPLL_1_DIV     0x05000018U
#define CLK_TESTOUT_TOP2VEPU_DIV 0x05070018U
/********Name=CRU_CLKSEL_CON25,Offset=0x364********/
#define CLK_REF_MIPI0_SRC_DIV 0x05020019U
/********Name=CRU_CLKSEL_CON26,Offset=0x368********/
#define CLK_REF_MIPI0_FRAC_DIV 0x2000001AU
/********Name=CRU_CLKSEL_CON27,Offset=0x36C********/
#define CLK_REF_MIPI1_SRC_DIV 0x0502001BU
/********Name=CRU_CLKSEL_CON28,Offset=0x370********/
#define CLK_REF_MIPI1_FRAC_DIV 0x2000001CU
/********Name=CRU_CLKSEL_CON29,Offset=0x374********/
#define CLK_VICAP_M0_SRC_DIV 0x0502001DU
/********Name=CRU_CLKSEL_CON30,Offset=0x378********/
#define CLK_VICAP_M0_FRAC_DIV 0x2000001EU
/********Name=CRU_CLKSEL_CON31,Offset=0x37C********/
#define CLK_VICAP_M1_SRC_DIV 0x0502001FU
/********Name=CRU_CLKSEL_CON32,Offset=0x380********/
#define CLK_VICAP_M1_FRAC_DIV 0x20000020U
/********Name=CRU_CLKSEL_CON33,Offset=0x384********/

/********Name=CRU_CLKSEL_CON00,Offset=0x300********/
#define CLK_MATRIX_50M_SRC_SEL               0x01050000U
#define CLK_MATRIX_50M_SRC_SEL_CLK_CPLL_MUX  0U
#define CLK_MATRIX_100M_SRC_SEL              0x010B0000U
#define CLK_MATRIX_100M_SRC_SEL_CLK_CPLL_MUX 0U
/********Name=CRU_CLKSEL_CON01,Offset=0x304********/
#define CLK_MATRIX_150M_SRC_SEL              0x01050001U
#define CLK_MATRIX_150M_SRC_SEL_CLK_CPLL_MUX 0U
#define CLK_MATRIX_200M_SRC_SEL              0x010B0001U
#define CLK_MATRIX_200M_SRC_SEL_CLK_CPLL_MUX 0U
/********Name=CRU_CLKSEL_CON02,Offset=0x308********/
#define CLK_MATRIX_250M_SRC_SEL              0x01050002U
#define CLK_MATRIX_250M_SRC_SEL_CLK_CPLL_MUX 0U
#define CLK_MATRIX_300M_SRC_SEL              0x010B0002U
#define CLK_MATRIX_300M_SRC_SEL_CLK_CPLL_MUX 0U
/********Name=CRU_CLKSEL_CON03,Offset=0x30C********/
#define CLK_MATRIX_339M_SRC_SEL              0x01050003U
#define CLK_MATRIX_339M_SRC_SEL_CLK_CPLL_MUX 0U
#define CLK_MATRIX_400M_SRC_SEL              0x010B0003U
#define CLK_MATRIX_400M_SRC_SEL_CLK_CPLL_MUX 0U
/********Name=CRU_CLKSEL_CON04,Offset=0x310********/
#define CLK_MATRIX_450M_SRC_SEL              0x01050004U
#define CLK_MATRIX_450M_SRC_SEL_CLK_CPLL_MUX 0U
#define CLK_MATRIX_500M_SRC_SEL              0x010B0004U
#define CLK_MATRIX_500M_SRC_SEL_CLK_CPLL_MUX 0U
/********Name=CRU_CLKSEL_CON05,Offset=0x314********/
#define CLK_UART0_SRC_SEL              0x01050005U
#define CLK_UART0_SRC_SEL_CLK_CPLL_MUX 0U
/********Name=CRU_CLKSEL_CON06,Offset=0x318********/
/********Name=CRU_CLKSEL_CON07,Offset=0x31C********/
#define SCLK_UART0_SRC_SEL               0x02000007U
#define SCLK_UART0_SRC_SEL_XIN_OSC0_FUNC 0U
#define CLK_UART1_SRC_SEL                0x01070007U
#define CLK_UART1_SRC_SEL_CLK_CPLL_MUX   0U
/********Name=CRU_CLKSEL_CON08,Offset=0x320********/
/********Name=CRU_CLKSEL_CON09,Offset=0x324********/
#define SCLK_UART1_SRC_SEL               0x02000009U
#define SCLK_UART1_SRC_SEL_XIN_OSC0_FUNC 0U
#define CLK_UART2_SRC_SEL                0x01070009U
#define CLK_UART2_SRC_SEL_CLK_CPLL_MUX   0U
/********Name=CRU_CLKSEL_CON10,Offset=0x328********/
/********Name=CRU_CLKSEL_CON11,Offset=0x32C********/
#define SCLK_UART2_SRC_SEL               0x0200000BU
#define SCLK_UART2_SRC_SEL_XIN_OSC0_FUNC 0U
#define CLK_UART3_SRC_SEL                0x0107000BU
#define CLK_UART3_SRC_SEL_CLK_CPLL_MUX   0U
/********Name=CRU_CLKSEL_CON12,Offset=0x330********/
/********Name=CRU_CLKSEL_CON13,Offset=0x334********/
#define SCLK_UART3_SRC_SEL               0x0200000DU
#define SCLK_UART3_SRC_SEL_XIN_OSC0_FUNC 0U
#define CLK_UART4_SRC_SEL                0x0107000DU
#define CLK_UART4_SRC_SEL_CLK_CPLL_MUX   0U
/********Name=CRU_CLKSEL_CON14,Offset=0x338********/
/********Name=CRU_CLKSEL_CON15,Offset=0x33C********/
#define SCLK_UART4_SRC_SEL               0x0200000FU
#define SCLK_UART4_SRC_SEL_XIN_OSC0_FUNC 0U
#define CLK_UART5_SRC_SEL                0x0107000FU
#define CLK_UART5_SRC_SEL_CLK_CPLL_MUX   0U
/********Name=CRU_CLKSEL_CON16,Offset=0x340********/
/********Name=CRU_CLKSEL_CON17,Offset=0x344********/
#define SCLK_UART5_SRC_SEL                   0x02000011U
#define SCLK_UART5_SRC_SEL_XIN_OSC0_FUNC     0U
#define CLK_I2S0_8CH_TX_SRC_SEL              0x01070011U
#define CLK_I2S0_8CH_TX_SRC_SEL_CLK_CPLL_MUX 0U
/********Name=CRU_CLKSEL_CON18,Offset=0x348********/
/********Name=CRU_CLKSEL_CON19,Offset=0x34C********/
#define MCLK_I2S0_8CH_TX_SRC_PERI_SEL               0x02000013U
#define MCLK_I2S0_8CH_TX_SRC_PERI_SEL_XIN_OSC0_HALF 0U
#define CLK_I2S0_8CH_RX_SRC_SEL                     0x01070013U
#define CLK_I2S0_8CH_RX_SRC_SEL_CLK_CPLL_MUX        0U
/********Name=CRU_CLKSEL_CON20,Offset=0x350********/
/********Name=CRU_CLKSEL_CON21,Offset=0x354********/
#define MCLK_I2S0_8CH_RX_SRC_PERI_SEL               0x02000015U
#define MCLK_I2S0_8CH_RX_SRC_PERI_SEL_XIN_OSC0_HALF 0U
#define I2S0_8CH_MCLKOUT_SEL                        0x02020015U
#define I2S0_8CH_MCLKOUT_SEL_XIN_OSC0_HALF          0U
/********Name=CRU_CLKSEL_CON23,Offset=0x35C********/
#define DCLK_VOP_SRC_SEL              0x01080017U
#define DCLK_VOP_SRC_SEL_CLK_CPLL_MUX 0U
/********Name=CRU_CLKSEL_CON24,Offset=0x360********/
#define PCLK_TOP_ROOT_SEL                      0x02050018U
#define PCLK_TOP_ROOT_SEL_XIN_OSC0_FUNC        0U
#define CLK_TESTOUT_TOP2VEPU_SEL               0x020C0018U
#define CLK_TESTOUT_TOP2VEPU_SEL_PCLK_TOP_ROOT 0U
/********Name=CRU_CLKSEL_CON25,Offset=0x364********/
#define CLK_REF_MIPI0_SRC_SEL              0x01070019U
#define CLK_REF_MIPI0_SRC_SEL_CLK_CPLL_MUX 0U
/********Name=CRU_CLKSEL_CON26,Offset=0x368********/
/********Name=CRU_CLKSEL_CON27,Offset=0x36C********/
#define CLK_REF_MIPI0_OUT_SEL               0x0200001BU
#define CLK_REF_MIPI0_OUT_SEL_XIN_OSC0_FUNC 0U
#define CLK_REF_MIPI1_SRC_SEL               0x0107001BU
#define CLK_REF_MIPI1_SRC_SEL_CLK_CPLL_MUX  0U
/********Name=CRU_CLKSEL_CON28,Offset=0x370********/
/********Name=CRU_CLKSEL_CON29,Offset=0x374********/
#define CLK_REF_MIPI1_OUT_SEL               0x0200001DU
#define CLK_REF_MIPI1_OUT_SEL_XIN_OSC0_FUNC 0U
#define CLK_VICAP_M0_SRC_SEL                0x0107001DU
#define CLK_VICAP_M0_SRC_SEL_CLK_CPLL_MUX   0U
/********Name=CRU_CLKSEL_CON30,Offset=0x378********/
/********Name=CRU_CLKSEL_CON31,Offset=0x37C********/
#define CLK_VICAP_M0_OUT_SEL               0x0200001FU
#define CLK_VICAP_M0_OUT_SEL_XIN_OSC0_FUNC 0U
#define CLK_VICAP_M1_SRC_SEL               0x0107001FU
#define CLK_VICAP_M1_SRC_SEL_CLK_CPLL_MUX  0U
/********Name=CRU_CLKSEL_CON32,Offset=0x380********/
/********Name=CRU_CLKSEL_CON33,Offset=0x384********/
#define CLK_VICAP_M1_OUT_SEL               0x02000021U
#define CLK_VICAP_M1_OUT_SEL_XIN_OSC0_FUNC 0U

/*CORE CRU */
#define CORECRU_GATE_SOFT_BANK (0x5U << 24)
#define CORECRU_SEL_BANK       (0x5U << 5)
/********Name=CORECRU_SOFTRST_CON00,Offset=0xA00********/
#define SRST_NCOREPORESET (1U | CORECRU_GATE_SOFT_BANK)
#define SRST_NCORESET     (2U | CORECRU_GATE_SOFT_BANK)
#define SRST_NDBGRESET    (3U | CORECRU_GATE_SOFT_BANK)
#define SRST_NL2RESET     (4U | CORECRU_GATE_SOFT_BANK)
#define SRST_A_M_CORE_BIU (5U | CORECRU_GATE_SOFT_BANK)
#define SRST_P_DBG        (6U | CORECRU_GATE_SOFT_BANK)
#define SRST_POT_DBG      (7U | CORECRU_GATE_SOFT_BANK)
#define SRST_NT_DBG       (8U | CORECRU_GATE_SOFT_BANK)
#define SRST_P_CORE_GRF   (11U | CORECRU_GATE_SOFT_BANK)
#define SRST_H_CPU_BIU    (12U | CORECRU_GATE_SOFT_BANK)
#define SRST_P_CPU_BIU    (13U | CORECRU_GATE_SOFT_BANK)
#define SRST_PVTM_CORE    (14U | CORECRU_GATE_SOFT_BANK)
#define SRST_P_PVTM_CORE  (15U | CORECRU_GATE_SOFT_BANK)
/********Name=CORECRU_SOFTRST_CON01,Offset=0xA04********/
#define SRST_REF_PVTPLL_CORE (16U | CORECRU_GATE_SOFT_BANK)
#define SRST_CORE_MCU        (17U | CORECRU_GATE_SOFT_BANK)
#define SRST_CORE_MCU_PWRUP  (18U | CORECRU_GATE_SOFT_BANK)
#define SRST_CORE_MCU_CPU    (19U | CORECRU_GATE_SOFT_BANK)
#define SRST_T_CORE_MCU_CPU  (20U | CORECRU_GATE_SOFT_BANK)
#define SRST_MCU_BIU         (21U | CORECRU_GATE_SOFT_BANK)
#define SRST_P_MAILBOX       (24U | CORECRU_GATE_SOFT_BANK)
#define SRST_P_INTMUX        (25U | CORECRU_GATE_SOFT_BANK)
#define SRST_P_CORE_CRU      (26U | CORECRU_GATE_SOFT_BANK)
#define SRST_P_CORE_SGRF     (27U | CORECRU_GATE_SOFT_BANK)
#define SRST_H_CACHE         (28U | CORECRU_GATE_SOFT_BANK)

/********Name=COREGATE_CON00,Offset=0x800********/
#define CLK_CORE_GPLL_SRC_GATE (0U | CORECRU_GATE_SOFT_BANK)
#define CLK_CORE_SRC_GATE      (1U | CORECRU_GATE_SOFT_BANK)
#define CLK_CORE_GATE          (2U | CORECRU_GATE_SOFT_BANK)
#define ACLK_M_CORE_BIU_GATE   (5U | CORECRU_GATE_SOFT_BANK)
#define PCLK_DBG_GATE          (6U | CORECRU_GATE_SOFT_BANK)
#define SWCLKTCK_GATE          (8U | CORECRU_GATE_SOFT_BANK)
#define CLK_SCANHS_CORE_GATE   (9U | CORECRU_GATE_SOFT_BANK)
#define PCLK_CPU_ROOT_GATE     (10U | CORECRU_GATE_SOFT_BANK)
#define PCLK_CORE_GRF_GATE     (11U | CORECRU_GATE_SOFT_BANK)
#define HCLK_CPU_BIU_GATE      (12U | CORECRU_GATE_SOFT_BANK)
#define PCLK_CPU_BIU_GATE      (13U | CORECRU_GATE_SOFT_BANK)
#define CLK_PVTM_CORE_GATE     (14U | CORECRU_GATE_SOFT_BANK)
#define PCLK_PVTM_CORE_GATE    (15U | CORECRU_GATE_SOFT_BANK)
/********Name=COREGATE_CON01,Offset=0x804********/
#define CLK_REF_PVTPLL_CORE_GATE (16U | CORECRU_GATE_SOFT_BANK)
#define CLK_CORE_MCU_GATE        (17U | CORECRU_GATE_SOFT_BANK)
#define CLK_CORE_MCU_BIU_GATE    (21U | CORECRU_GATE_SOFT_BANK)
#define CLK_CORE_MCU_RTC_GATE    (22U | CORECRU_GATE_SOFT_BANK)
#define CLK_CORE_MCU_JTAG_GATE   (23U | CORECRU_GATE_SOFT_BANK)
#define PCLK_MAILBOX_GATE        (24U | CORECRU_GATE_SOFT_BANK)
#define PCLK_INTMUX_GATE         (25U | CORECRU_GATE_SOFT_BANK)
#define PCLK_CORE_CRU_GATE       (26U | CORECRU_GATE_SOFT_BANK)
#define PCLK_CORE_SGRF_GATE      (27U | CORECRU_GATE_SOFT_BANK)
#define HCLK_CACHE_GATE          (28U | CORECRU_GATE_SOFT_BANK)
#define CLK_TESTOUT_CORE_GATE    (29U | CORECRU_GATE_SOFT_BANK)

/********Name=CRU_CLKSEL_CON00,Offset=0x300********/
#define CLK_CORE_GPLL_SRC_DIV 0x05000000U
#define ACLK_M_CORE_BIU_DIV   0x05070000U
/********Name=CRU_CLKSEL_CON01,Offset=0x304********/
#define PCLK_DBG_DIV              0x05000001U
#define CLK_SCANHS_ACLKM_CORE_DIV 0x05060001U
#define CLK_SCANHS_PCLK_DBG_DIV   0x050B0001U
/********Name=CRU_CLKSEL_CON02,Offset=0x308********/
#define HCLK_CPU_BIU_DIV 0x05000002U
/********Name=CRU_CLKSEL_CON03,Offset=0x30C********/
#define CLK_REF_PVTPLL_CORE_DIV 0x05000003U
#define CLK_CORE_MCU_DIV        0x05060003U
/********Name=CRU_CLKSEL_CON04,Offset=0x310********/
#define CLK_TESTOUT_CORE2VI_DIV 0x05000004U

/********Name=CRU_CLKSEL_CON00,Offset=0x300********/
#define CLK_CORE_SRC_SEL                        0x02050000U
#define CLK_CORE_SRC_SEL_CLK_CORE_GPLL_SRC      0U
#define CLK_CORE_PVTPLL_SRC_SEL                 0x010C0000U
#define CLK_CORE_PVTPLL_SRC_SEL_CLK_CORE_PVTPLL 0U
/********Name=CRU_CLKSEL_CON01,Offset=0x304********/
/********Name=CRU_CLKSEL_CON02,Offset=0x308********/
#define HCLK_CPU_BIU_SEL               0x01050002U
#define HCLK_CPU_BIU_SEL_XIN_OSC0_FUNC 0U
/********Name=CRU_CLKSEL_CON03,Offset=0x30C********/
#define CLK_REF_PVTPLL_CORE_SEL          0x01050003U
#define CLK_REF_PVTPLL_CORE_SEL_CLK_CORE 0U
#define CLK_CORE_MCU_SEL                 0x010B0003U
#define CLK_CORE_MCU_SEL_XIN_OSC0_FUNC   0U
/********Name=CRU_CLKSEL_CON04,Offset=0x310********/
#define CLK_TESTOUT_CORE2VI_SEL              0x02050004U
#define CLK_TESTOUT_CORE2VI_SEL_HCLK_CPU_BIU 0U

/* DDR CRU */
#define DDRCRU_GATE_SOFT_BANK (0x8U << 24)
/********Name=DDRCRU_SOFTRST_CON00,Offset=0xA00********/
#define SRST_P_DDR_BIU    (2U | DDRCRU_GATE_SOFT_BANK)
#define SRST_P_DDRC       (5U | DDRCRU_GATE_SOFT_BANK)
#define SRST_P_DDRMON     (7U | DDRCRU_GATE_SOFT_BANK)
#define SRST_TIMER_DDRMON (8U | DDRCRU_GATE_SOFT_BANK)
#define SRST_P_DFICTRL    (11U | DDRCRU_GATE_SOFT_BANK)
#define SRST_A_SYS_SHRM   (13U | DDRCRU_GATE_SOFT_BANK)
#define SRST_A_SHRM_NIU   (14U | DDRCRU_GATE_SOFT_BANK)
#define SRST_P_DDR_GRF    (15U | DDRCRU_GATE_SOFT_BANK)
/********Name=DDRCRU_SOFTRST_CON01,Offset=0xA04********/
#define SRST_P_DDR_CRU  (16U | DDRCRU_GATE_SOFT_BANK)
#define SRST_P_DDR_HWLP (18U | DDRCRU_GATE_SOFT_BANK)
#define SRST_P_DDRPHY   (19U | DDRCRU_GATE_SOFT_BANK)

/********Name=DDRGATE_CON00,Offset=0x800********/
#define PCLK_DDR_ROOT_GATE    (0U | DDRCRU_GATE_SOFT_BANK)
#define PCLK_DDR_BIU_GATE     (2U | DDRCRU_GATE_SOFT_BANK)
#define PCLK_DDRC_GATE        (5U | DDRCRU_GATE_SOFT_BANK)
#define PCLK_DDRMON_GATE      (7U | DDRCRU_GATE_SOFT_BANK)
#define CLK_TIMER_DDRMON_GATE (8U | DDRCRU_GATE_SOFT_BANK)
#define PCLK_DFICTRL_GATE     (11U | DDRCRU_GATE_SOFT_BANK)
#define ACLK_DDR_ROOT_GATE    (12U | DDRCRU_GATE_SOFT_BANK)
#define ACLK_SYS_SHRM_GATE    (13U | DDRCRU_GATE_SOFT_BANK)
#define ACLK_SHRM_NIU_GATE    (14U | DDRCRU_GATE_SOFT_BANK)
#define PCLK_DDR_GRF_GATE     (15U | DDRCRU_GATE_SOFT_BANK)
/********Name=DDRGATE_CON01,Offset=0x804********/
#define PCLK_DDR_CRU_GATE    (16U | DDRCRU_GATE_SOFT_BANK)
#define CLK_DDR_TESTOUT_GATE (17U | DDRCRU_GATE_SOFT_BANK)
#define PCLK_DDR_HWLP_GATE   (18U | DDRCRU_GATE_SOFT_BANK)
#define PCLK_DDRPHY_GATE     (19U | DDRCRU_GATE_SOFT_BANK)

/********Name=CRU_CLKSEL_CON00,Offset=0x300********/
#define CLK_TESTOUT_DDR2PERI_DIV 0x050A0000U

/********Name=CRU_CLKSEL_CON00,Offset=0x300********/
#define PCLK_DDR_ROOT_SEL                      0x02000000U
#define PCLK_DDR_ROOT_SEL_XIN_OSC0_FUNC        0U
#define ACLK_DDR_ROOT_SEL                      0x02080000U
#define ACLK_DDR_ROOT_SEL_XIN_OSC0_FUNC        0U
#define CLK_TESTOUT_DDR2PERI_SEL               0x010F0000U
#define CLK_TESTOUT_DDR2PERI_SEL_CLK_CORE_DDRC 0U

/* SUBDDR CRU */
#define SUBDDRCRU_GATE_SOFT_BANK (0x9U << 24)
/********Name=CRU_SOFTRST_CON00,Offset=0xA00********/
#define SRST_MSCH_BIU  (0U | SUBDDRCRU_GATE_SOFT_BANK)
#define SRST_A_DDRC    (1U | SUBDDRCRU_GATE_SOFT_BANK)
#define SRST_CORE_DDRC (3U | SUBDDRCRU_GATE_SOFT_BANK)
#define SRST_DDRMON    (4U | SUBDDRCRU_GATE_SOFT_BANK)
#define SRST_DFICTRL   (5U | SUBDDRCRU_GATE_SOFT_BANK)
#define SRST_DDR_PHY   (6U | SUBDDRCRU_GATE_SOFT_BANK)

/********Name=GATE_CON00,Offset=0x800********/
#define CLK_MSCH_BIU_GATE      (0U | SUBDDRCRU_GATE_SOFT_BANK)
#define ACLK_DDRC_GATE         (1U | SUBDDRCRU_GATE_SOFT_BANK)
#define CLK_CORE_DDRC_SRC_GATE (2U | SUBDDRCRU_GATE_SOFT_BANK)
#define CLK_CORE_DDRC_GATE     (3U | SUBDDRCRU_GATE_SOFT_BANK)
#define CLK_DDRMON_GATE        (4U | SUBDDRCRU_GATE_SOFT_BANK)
#define CLK_DFICTRL_GATE       (5U | SUBDDRCRU_GATE_SOFT_BANK)
#define CLK_DDR_PHY_GATE       (6U | SUBDDRCRU_GATE_SOFT_BANK)

/********Name=CRU_CLKSEL_CON00,Offset=0x300********/
#define CLK_CORE_DDRC_SRC_DIV 0x05000000U

/********Name=CRU_CLKSEL_CON00,Offset=0x300********/
#define CLK_CORE_DDRC_SRC_SEL                     0x01050000U
#define CLK_CORE_DDRC_SRC_SEL_CLK_MATRIX_300M_SRC 0U

/* NPU CRU */
#define NPUCRU_GATE_SOFT_BANK (0x4U << 24)
#define NPUCRU_SEL_BANK       (0x4U << 5)
/********Name=NPUCRU_SOFTRST_CON00,Offset=0xA00********/
#define SRST_H_NPU_BIU  (3U | NPUCRU_GATE_SOFT_BANK)
#define SRST_A_NPU_BIU  (4U | NPUCRU_GATE_SOFT_BANK)
#define SRST_P_NPU_BIU  (5U | NPUCRU_GATE_SOFT_BANK)
#define SRST_P_NPU_CRU  (6U | NPUCRU_GATE_SOFT_BANK)
#define SRST_P_NPU_SGRF (7U | NPUCRU_GATE_SOFT_BANK)
#define SRST_P_NPU_GRF  (8U | NPUCRU_GATE_SOFT_BANK)
#define SRST_H_RKNN     (9U | NPUCRU_GATE_SOFT_BANK)
#define SRST_A_RKNN     (10U | NPUCRU_GATE_SOFT_BANK)

/********Name=NPUGATE_CON00,Offset=0x800********/
#define HCLK_NPU_ROOT_GATE         (0U | NPUCRU_GATE_SOFT_BANK)
#define ACLK_NPU_ROOT_GATE         (1U | NPUCRU_GATE_SOFT_BANK)
#define PCLK_NPU_ROOT_GATE         (2U | NPUCRU_GATE_SOFT_BANK)
#define HCLK_NPU_BIU_GATE          (3U | NPUCRU_GATE_SOFT_BANK)
#define ACLK_NPU_BIU_GATE          (4U | NPUCRU_GATE_SOFT_BANK)
#define PCLK_NPU_BIU_GATE          (5U | NPUCRU_GATE_SOFT_BANK)
#define PCLK_NPU_CRU_GATE          (6U | NPUCRU_GATE_SOFT_BANK)
#define PCLK_NPU_SGRF_GATE         (7U | NPUCRU_GATE_SOFT_BANK)
#define PCLK_NPU_GRF_GATE          (8U | NPUCRU_GATE_SOFT_BANK)
#define HCLK_RKNN_GATE             (9U | NPUCRU_GATE_SOFT_BANK)
#define ACLK_RKNN_GATE             (10U | NPUCRU_GATE_SOFT_BANK)
#define CLK_PVTPLL_0_I2VI_GATE     (11U | NPUCRU_GATE_SOFT_BANK)
#define CLK_PVTPLL_1_I2VI_GATE     (12U | NPUCRU_GATE_SOFT_BANK)
#define CLK_MATRIX_50M_SRC2VI_GATE (15U | NPUCRU_GATE_SOFT_BANK)

/********Name=CRU_CLKSEL_CON00,Offset=0x300********/
#define CLK_TESTOUT_NPU2VI_DIV 0x05060000U

/********Name=CRU_CLKSEL_CON00,Offset=0x300********/
#define HCLK_NPU_ROOT_SEL                    0x02000000U
#define HCLK_NPU_ROOT_SEL_XIN_OSC0_FUNC      0U
#define ACLK_NPU_ROOT_SEL                    0x02020000U
#define ACLK_NPU_ROOT_SEL_CLK_PVTPLL_1       0U
#define PCLK_NPU_ROOT_SEL                    0x02040000U
#define PCLK_NPU_ROOT_SEL_XIN_OSC0_FUNC      0U
#define CLK_TESTOUT_NPU2VI_SEL               0x020B0000U
#define CLK_TESTOUT_NPU2VI_SEL_PCLK_NPU_ROOT 0U

/* PERI CRU */
#define PERICRU_GATE_SOFT_BANK (0x2U << 24)
#define PERICRU_SEL_BANK       (0x2U << 5)
/********Name=PERICRU_SOFTRST_CON00,Offset=0xA00********/
#define SRST_P_PERI_BIU (4U | PERICRU_GATE_SOFT_BANK)
#define SRST_A_PERI_BIU (5U | PERICRU_GATE_SOFT_BANK)
#define SRST_H_PERI_BIU (6U | PERICRU_GATE_SOFT_BANK)
#define SRST_H_BOOTROM  (7U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_TIMER    (8U | PERICRU_GATE_SOFT_BANK)
#define SRST_TIMER0     (9U | PERICRU_GATE_SOFT_BANK)
#define SRST_TIMER1     (10U | PERICRU_GATE_SOFT_BANK)
#define SRST_TIMER2     (11U | PERICRU_GATE_SOFT_BANK)
#define SRST_TIMER3     (12U | PERICRU_GATE_SOFT_BANK)
#define SRST_TIMER4     (13U | PERICRU_GATE_SOFT_BANK)
#define SRST_TIMER5     (14U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_STIMER   (15U | PERICRU_GATE_SOFT_BANK)
/********Name=PERICRU_SOFTRST_CON01,Offset=0xA04********/
#define SRST_STIMER0  (16U | PERICRU_GATE_SOFT_BANK)
#define SRST_STIMER1  (17U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_WDT_NS (18U | PERICRU_GATE_SOFT_BANK)
#define SRST_T_WDT_NS (19U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_WDT_S  (20U | PERICRU_GATE_SOFT_BANK)
#define SRST_T_WDT_S  (21U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_I2C0   (22U | PERICRU_GATE_SOFT_BANK)
#define SRST_I2C0     (23U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_I2C2   (26U | PERICRU_GATE_SOFT_BANK)
#define SRST_I2C2     (27U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_I2C3   (28U | PERICRU_GATE_SOFT_BANK)
#define SRST_I2C3     (29U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_I2C4   (30U | PERICRU_GATE_SOFT_BANK)
#define SRST_I2C4     (31U | PERICRU_GATE_SOFT_BANK)
/********Name=PERICRU_SOFTRST_CON02,Offset=0xA08********/
#define SRST_P_GPIO4    (32U | PERICRU_GATE_SOFT_BANK)
#define SRST_DB_GPIO4   (33U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_PERI_IOC (34U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_UART2    (35U | PERICRU_GATE_SOFT_BANK)
#define SRST_S_UART2    (38U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_UART3    (39U | PERICRU_GATE_SOFT_BANK)
#define SRST_S_UART3    (42U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_UART4    (43U | PERICRU_GATE_SOFT_BANK)
#define SRST_S_UART4    (46U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_UART5    (47U | PERICRU_GATE_SOFT_BANK)
/********Name=PERICRU_SOFTRST_CON03,Offset=0xA0C********/
#define SRST_S_UART5     (50U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_SARADC    (51U | PERICRU_GATE_SOFT_BANK)
#define SRST_SARADC      (52U | PERICRU_GATE_SOFT_BANK)
#define SRST_SARADC_PHY  (53U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_SPI1      (54U | PERICRU_GATE_SOFT_BANK)
#define SRST_SPI1        (55U | PERICRU_GATE_SOFT_BANK)
#define SRST_H_TRNG_NS   (57U | PERICRU_GATE_SOFT_BANK)
#define SRST_H_TRNG_S    (58U | PERICRU_GATE_SOFT_BANK)
#define SRST_CORE_CRYPTO (59U | PERICRU_GATE_SOFT_BANK)
#define SRST_PKA_CRYPTO  (60U | PERICRU_GATE_SOFT_BANK)
#define SRST_A_CRYPTO    (61U | PERICRU_GATE_SOFT_BANK)
#define SRST_H_CRYPTO    (62U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_PWM1_PERI (63U | PERICRU_GATE_SOFT_BANK)
/********Name=PERICRU_SOFTRST_CON04,Offset=0xA10********/
#define SRST_PWM1_PERI   (64U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_PWM2_PERI (66U | PERICRU_GATE_SOFT_BANK)
#define SRST_PWM2_PERI   (67U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_PERI_GRF  (69U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_PERI_CRU  (70U | PERICRU_GATE_SOFT_BANK)
#define SRST_A_USBOTG    (71U | PERICRU_GATE_SOFT_BANK)
#define SRST_A_BUS_BIU   (74U | PERICRU_GATE_SOFT_BANK)
#define SRST_H_EMMC      (77U | PERICRU_GATE_SOFT_BANK)
#define SRST_H_SFC       (78U | PERICRU_GATE_SOFT_BANK)
/********Name=PERICRU_SOFTRST_CON05,Offset=0xA14********/
#define SRST_S_SFC         (80U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_USBPHY      (81U | PERICRU_GATE_SOFT_BANK)
#define SRST_USBPHY_POR    (82U | PERICRU_GATE_SOFT_BANK)
#define SRST_USBPHY_OTG    (83U | PERICRU_GATE_SOFT_BANK)
#define SRST_A_DMAC        (88U | PERICRU_GATE_SOFT_BANK)
#define SRST_A_DECOM       (89U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_DECOM       (90U | PERICRU_GATE_SOFT_BANK)
#define SRST_D_DECOM       (91U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_PERI_SGRF   (92U | PERICRU_GATE_SOFT_BANK)
#define SRST_H_SAI         (93U | PERICRU_GATE_SOFT_BANK)
#define SRST_M_SAI         (94U | PERICRU_GATE_SOFT_BANK)
#define SRST_M_I2S0_8CH_TX (95U | PERICRU_GATE_SOFT_BANK)
/********Name=PERICRU_SOFTRST_CON06,Offset=0xA18********/
#define SRST_H_I2S0        (96U | PERICRU_GATE_SOFT_BANK)
#define SRST_M_DSM         (97U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_DSM         (98U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_ACODEC      (99U | PERICRU_GATE_SOFT_BANK)
#define SRST_M_I2S0_8CH_RX (102U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_DFT2APB     (103U | PERICRU_GATE_SOFT_BANK)
#define SRST_H_IVE         (105U | PERICRU_GATE_SOFT_BANK)
#define SRST_A_IVE         (106U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_UART0       (107U | PERICRU_GATE_SOFT_BANK)
#define SRST_S_UART0       (110U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_UART1       (111U | PERICRU_GATE_SOFT_BANK)
/********Name=PERICRU_SOFTRST_CON07,Offset=0xA1C********/
#define SRST_S_UART1     (114U | PERICRU_GATE_SOFT_BANK)
#define SRST_P_PWM0_PERI (115U | PERICRU_GATE_SOFT_BANK)
#define SRST_PWM0_PERI   (116U | PERICRU_GATE_SOFT_BANK)

/********Name=PERIGATE_CON00,Offset=0x800********/
#define PCLK_PERI_ROOT_GATE (0U | PERICRU_GATE_SOFT_BANK)
#define ACLK_PERI_ROOT_GATE (1U | PERICRU_GATE_SOFT_BANK)
#define HCLK_PERI_ROOT_GATE (2U | PERICRU_GATE_SOFT_BANK)
#define CLK_TIMER_ROOT_GATE (3U | PERICRU_GATE_SOFT_BANK)
#define PCLK_PERI_BIU_GATE  (4U | PERICRU_GATE_SOFT_BANK)
#define ACLK_PERI_BIU_GATE  (5U | PERICRU_GATE_SOFT_BANK)
#define HCLK_PERI_BIU_GATE  (6U | PERICRU_GATE_SOFT_BANK)
#define HCLK_BOOTROM_GATE   (7U | PERICRU_GATE_SOFT_BANK)
#define PCLK_TIMER_GATE     (8U | PERICRU_GATE_SOFT_BANK)
#define CLK_TIMER0_GATE     (9U | PERICRU_GATE_SOFT_BANK)
#define CLK_TIMER1_GATE     (10U | PERICRU_GATE_SOFT_BANK)
#define CLK_TIMER2_GATE     (11U | PERICRU_GATE_SOFT_BANK)
#define CLK_TIMER3_GATE     (12U | PERICRU_GATE_SOFT_BANK)
#define CLK_TIMER4_GATE     (13U | PERICRU_GATE_SOFT_BANK)
#define CLK_TIMER5_GATE     (14U | PERICRU_GATE_SOFT_BANK)
#define PCLK_STIMER_GATE    (15U | PERICRU_GATE_SOFT_BANK)
/********Name=PERIGATE_CON01,Offset=0x804********/
#define CLK_STIMER0_GATE (16U | PERICRU_GATE_SOFT_BANK)
#define CLK_STIMER1_GATE (17U | PERICRU_GATE_SOFT_BANK)
#define PCLK_WDT_NS_GATE (18U | PERICRU_GATE_SOFT_BANK)
#define TCLK_WDT_NS_GATE (19U | PERICRU_GATE_SOFT_BANK)
#define PCLK_WDT_S_GATE  (20U | PERICRU_GATE_SOFT_BANK)
#define TCLK_WDT_S_GATE  (21U | PERICRU_GATE_SOFT_BANK)
#define PCLK_I2C0_GATE   (22U | PERICRU_GATE_SOFT_BANK)
#define CLK_I2C0_GATE    (23U | PERICRU_GATE_SOFT_BANK)
#define PCLK_I2C2_GATE   (26U | PERICRU_GATE_SOFT_BANK)
#define CLK_I2C2_GATE    (27U | PERICRU_GATE_SOFT_BANK)
#define PCLK_I2C3_GATE   (28U | PERICRU_GATE_SOFT_BANK)
#define CLK_I2C3_GATE    (29U | PERICRU_GATE_SOFT_BANK)
#define PCLK_I2C4_GATE   (30U | PERICRU_GATE_SOFT_BANK)
#define CLK_I2C4_GATE    (31U | PERICRU_GATE_SOFT_BANK)
/********Name=PERIGATE_CON02,Offset=0x808********/
#define PCLK_GPIO4_GATE    (32U | PERICRU_GATE_SOFT_BANK)
#define DBCLK_GPIO4_GATE   (33U | PERICRU_GATE_SOFT_BANK)
#define PCLK_PERI_IOC_GATE (34U | PERICRU_GATE_SOFT_BANK)
#define PCLK_UART2_GATE    (35U | PERICRU_GATE_SOFT_BANK)
#define PCLK_UART3_GATE    (39U | PERICRU_GATE_SOFT_BANK)
#define PCLK_UART4_GATE    (43U | PERICRU_GATE_SOFT_BANK)
#define PCLK_UART5_GATE    (47U | PERICRU_GATE_SOFT_BANK)
/********Name=PERIGATE_CON03,Offset=0x80C********/
#define CLK_TESTOUT_PERI2VI_0_GATE (48U | PERICRU_GATE_SOFT_BANK)
#define CLK_TESTOUT_PERI2VI_1_GATE (49U | PERICRU_GATE_SOFT_BANK)
#define PCLK_SARADC_GATE           (51U | PERICRU_GATE_SOFT_BANK)
#define CLK_SARADC_GATE            (52U | PERICRU_GATE_SOFT_BANK)
#define PCLK_SPI1_GATE             (54U | PERICRU_GATE_SOFT_BANK)
#define CLK_SPI1_GATE              (55U | PERICRU_GATE_SOFT_BANK)
#define SCLK_IN_SPI1_GATE          (56U | PERICRU_GATE_SOFT_BANK)
#define HCLK_TRNG_NS_GATE          (57U | PERICRU_GATE_SOFT_BANK)
#define HCLK_TRNG_S_GATE           (58U | PERICRU_GATE_SOFT_BANK)
#define CLK_CORE_CRYPTO_GATE       (59U | PERICRU_GATE_SOFT_BANK)
#define CLK_PKA_CRYPTO_GATE        (60U | PERICRU_GATE_SOFT_BANK)
#define ACLK_CRYPTO_GATE           (61U | PERICRU_GATE_SOFT_BANK)
#define HCLK_CRYPTO_GATE           (62U | PERICRU_GATE_SOFT_BANK)
#define PCLK_PWM1_PERI_GATE        (63U | PERICRU_GATE_SOFT_BANK)
/********Name=PERIGATE_CON04,Offset=0x810********/
#define CLK_PWM1_PERI_GATE         (64U | PERICRU_GATE_SOFT_BANK)
#define CLK_CAPTURE_PWM1_PERI_GATE (65U | PERICRU_GATE_SOFT_BANK)
#define PCLK_PWM2_PERI_GATE        (66U | PERICRU_GATE_SOFT_BANK)
#define CLK_PWM2_PERI_GATE         (67U | PERICRU_GATE_SOFT_BANK)
#define CLK_CAPTURE_PWM2_PERI_GATE (68U | PERICRU_GATE_SOFT_BANK)
#define PCLK_PERI_GRF_GATE         (69U | PERICRU_GATE_SOFT_BANK)
#define PCLK_PERI_CRU_GATE         (70U | PERICRU_GATE_SOFT_BANK)
#define ACLK_USBOTG_GATE           (71U | PERICRU_GATE_SOFT_BANK)
#define CLK_REF_USBOTG_GATE        (72U | PERICRU_GATE_SOFT_BANK)
#define CLK_UTMI_USBOTG_GATE       (73U | PERICRU_GATE_SOFT_BANK)
#define ACLK_BUS_BIU_GATE          (74U | PERICRU_GATE_SOFT_BANK)
#define MBIST_CLK_ACLK_USB_GATE    (75U | PERICRU_GATE_SOFT_BANK)
#define CCLK_SRC_EMMC_GATE         (76U | PERICRU_GATE_SOFT_BANK)
#define HCLK_EMMC_GATE             (77U | PERICRU_GATE_SOFT_BANK)
#define HCLK_SFC_GATE              (78U | PERICRU_GATE_SOFT_BANK)
/********Name=PERIGATE_CON05,Offset=0x814********/
#define SCLK_SFC_GATE       (80U | PERICRU_GATE_SOFT_BANK)
#define PCLK_USBPHY_GATE    (81U | PERICRU_GATE_SOFT_BANK)
#define CLK_REF_USBPHY_GATE (82U | PERICRU_GATE_SOFT_BANK)
#define ACLK_DMAC_GATE      (88U | PERICRU_GATE_SOFT_BANK)
#define ACLK_DECOM_GATE     (89U | PERICRU_GATE_SOFT_BANK)
#define PCLK_DECOM_GATE     (90U | PERICRU_GATE_SOFT_BANK)
#define DCLK_DECOM_GATE     (91U | PERICRU_GATE_SOFT_BANK)
#define PCLK_PERI_SGRF_GATE (92U | PERICRU_GATE_SOFT_BANK)
#define HCLK_SAI_GATE       (93U | PERICRU_GATE_SOFT_BANK)
#define MCLK_SAI_GATE       (94U | PERICRU_GATE_SOFT_BANK)
/********Name=PERIGATE_CON06,Offset=0x818********/
#define HCLK_I2S0_GATE      (96U | PERICRU_GATE_SOFT_BANK)
#define MCLK_DSM_GATE       (97U | PERICRU_GATE_SOFT_BANK)
#define PCLK_DSM_GATE       (98U | PERICRU_GATE_SOFT_BANK)
#define PCLK_ACODEC_GATE    (99U | PERICRU_GATE_SOFT_BANK)
#define MCLK_ACODEC_TX_GATE (100U | PERICRU_GATE_SOFT_BANK)
#define MCLK_ACODEC_RX_GATE (101U | PERICRU_GATE_SOFT_BANK)
#define PCLK_DFT2APB_GATE   (103U | PERICRU_GATE_SOFT_BANK)
#define ACLK_BUS_ROOT_GATE  (104U | PERICRU_GATE_SOFT_BANK)
#define HCLK_IVE_GATE       (105U | PERICRU_GATE_SOFT_BANK)
#define ACLK_IVE_GATE       (106U | PERICRU_GATE_SOFT_BANK)
#define PCLK_UART0_GATE     (107U | PERICRU_GATE_SOFT_BANK)
#define PCLK_UART1_GATE     (111U | PERICRU_GATE_SOFT_BANK)
/********Name=PERIGATE_CON07,Offset=0x81C********/
#define PCLK_PWM0_PERI_GATE        (115U | PERICRU_GATE_SOFT_BANK)
#define CLK_PWM0_PERI_GATE         (116U | PERICRU_GATE_SOFT_BANK)
#define CLK_CAPTURE_PWM0_PERI_GATE (117U | PERICRU_GATE_SOFT_BANK)

/********Name=PERICRU_CLKSEL_CON01,Offset=0x304********/
/********Name=PERICRU_CLKSEL_CON02,Offset=0x308********/
/********Name=PERICRU_CLKSEL_CON05,Offset=0x314********/
#define CLK_TESTOUT_PERI2VI_0_DIV 0x05000005U
#define CLK_TESTOUT_PERI2VI_1_DIV 0x05080005U
/********Name=PERICRU_CLKSEL_CON06,Offset=0x318********/
#define CLK_SARADC_DIV 0x03000006U
/********Name=PERICRU_CLKSEL_CON07,Offset=0x31C********/
#define CCLK_SRC_EMMC_DIV 0x06000007U
#define SCLK_SFC_DIV      0x05070007U
/********Name=PERICRU_CLKSEL_CON08,Offset=0x320********/
#define MCLK_ACODEC_TX_DIV 0x08000008U
#define MCLK_ACODEC_RX_DIV 0x08080008U
/********Name=PERICRU_CLKSEL_CON09,Offset=0x324********/
/********Name=PERICRU_CLKSEL_CON11,Offset=0x32C********/

/********Name=PERICRU_CLKSEL_CON01,Offset=0x304********/
#define PCLK_PERI_ROOT_SEL               0x02000001U
#define PCLK_PERI_ROOT_SEL_XIN_OSC0_FUNC 0U
#define ACLK_PERI_ROOT_SEL               0x02020001U
#define ACLK_PERI_ROOT_SEL_XIN_OSC0_FUNC 0U
#define HCLK_PERI_ROOT_SEL               0x02040001U
#define HCLK_PERI_ROOT_SEL_XIN_OSC0_FUNC 0U
#define CLK_I2C0_SEL                     0x02080001U
#define CLK_I2C0_SEL_XIN_OSC0_FUNC       0U
#define CLK_I2C2_SEL                     0x020C0001U
#define CLK_I2C2_SEL_XIN_OSC0_FUNC       0U
#define CLK_I2C3_SEL                     0x020E0001U
#define CLK_I2C3_SEL_XIN_OSC0_FUNC       0U
/********Name=PERICRU_CLKSEL_CON02,Offset=0x308********/
#define CLK_I2C4_SEL               0x02000002U
#define CLK_I2C4_SEL_XIN_OSC0_FUNC 0U
/********Name=PERICRU_CLKSEL_CON05,Offset=0x314********/
#define CLK_TESTOUT_PERI2VI_0_SEL                      0x03050005U
#define CLK_TESTOUT_PERI2VI_0_SEL_CLK_TESTOUT_DDR2PERI 0U
#define CLK_TESTOUT_PERI2VI_1_SEL                      0x030D0005U
#define CLK_TESTOUT_PERI2VI_1_SEL_MCLK_I2S0_8CH_TX     0U
/********Name=PERICRU_CLKSEL_CON06,Offset=0x318********/
#define CLK_SPI1_SEL                      0x02030006U
#define CLK_SPI1_SEL_XIN_OSC0_FUNC        0U
#define CLK_CORE_CRYPTO_SEL               0x02050006U
#define CLK_CORE_CRYPTO_SEL_XIN_OSC0_FUNC 0U
#define CLK_PKA_CRYPTO_SEL                0x02070006U
#define CLK_PKA_CRYPTO_SEL_XIN_OSC0_FUNC  0U
#define CLK_PWM1_PERI_SEL                 0x02090006U
#define CLK_PWM1_PERI_SEL_XIN_OSC0_FUNC   0U
#define CLK_PWM2_PERI_SEL                 0x020B0006U
#define CLK_PWM2_PERI_SEL_XIN_OSC0_FUNC   0U
/********Name=PERICRU_CLKSEL_CON07,Offset=0x31C********/
#define CCLK_SRC_EMMC_SEL               0x01060007U
#define CCLK_SRC_EMMC_SEL_XIN_OSC0_FUNC 0U
#define SCLK_SFC_SEL                    0x020C0007U
#define SCLK_SFC_SEL_XIN_OSC0_FUNC      0U
#define DCLK_DECOM_SEL                  0x020E0007U
#define DCLK_DECOM_SEL_XIN_OSC0_FUNC    0U
/********Name=PERICRU_CLKSEL_CON08,Offset=0x320********/
/********Name=PERICRU_CLKSEL_CON09,Offset=0x324********/
#define ACLK_BUS_ROOT_SEL               0x02000009U
#define ACLK_BUS_ROOT_SEL_XIN_OSC0_FUNC 0U
/********Name=PERICRU_CLKSEL_CON11,Offset=0x32C********/
#define CLK_PWM0_PERI_SEL               0x0200000BU
#define CLK_PWM0_PERI_SEL_XIN_OSC0_FUNC 0U

/* PMU CRU */
#define PMUCRU_GATE_SOFT_BANK (0x1U << 24)
#define PMUCRU_SEL_BANK       (0x1U << 5)
/********Name=PMUCRU_SOFTRST_CON00,Offset=0xA00********/
#define SRST_P_I2C1        (3U | PMUCRU_GATE_SOFT_BANK)
#define SRST_I2C1          (4U | PMUCRU_GATE_SOFT_BANK)
#define SRST_H_PMU_BIU     (6U | PMUCRU_GATE_SOFT_BANK)
#define SRST_P_PMU_BIU     (7U | PMUCRU_GATE_SOFT_BANK)
#define SRST_H_PMU_SRAM    (8U | PMUCRU_GATE_SOFT_BANK)
#define SRST_PMU_MCU       (9U | PMUCRU_GATE_SOFT_BANK)
#define SRST_PMU_MCU_PWRUP (10U | PMUCRU_GATE_SOFT_BANK)
#define SRST_PMU_MCU_CPU   (11U | PMUCRU_GATE_SOFT_BANK)
#define SRST_T_PMU_MCU_CPU (12U | PMUCRU_GATE_SOFT_BANK)
/********Name=PMUCRU_SOFTRST_CON01,Offset=0xA04********/
#define SRST_P_PMU_GPIO0   (18U | PMUCRU_GATE_SOFT_BANK)
#define SRST_DB_PMU_GPIO0  (19U | PMUCRU_GATE_SOFT_BANK)
#define SRST_PVTM_PMU      (20U | PMUCRU_GATE_SOFT_BANK)
#define SRST_P_PVTM_PMU    (21U | PMUCRU_GATE_SOFT_BANK)
#define SRST_DDR_FAIL_SAFE (31U | PMUCRU_GATE_SOFT_BANK)
/********Name=PMUCRU_SOFTRST_CON02,Offset=0xA08********/
#define SRST_P_PMU_HP_TIMER   (32U | PMUCRU_GATE_SOFT_BANK)
#define SRST_PMU_HP_TIMER     (33U | PMUCRU_GATE_SOFT_BANK)
#define SRST_PMU_32K_HP_TIMER (34U | PMUCRU_GATE_SOFT_BANK)
#define SRST_P_PMU_IOC        (35U | PMUCRU_GATE_SOFT_BANK)
#define SRST_P_PMU_CRU        (36U | PMUCRU_GATE_SOFT_BANK)
#define SRST_P_PMU_GRF        (37U | PMUCRU_GATE_SOFT_BANK)
#define SRST_P_PMU_SGRF       (38U | PMUCRU_GATE_SOFT_BANK)
#define SRST_P_PMU_SGRF_REMAP (39U | PMUCRU_GATE_SOFT_BANK)
#define SRST_P_PMU_WDT        (40U | PMUCRU_GATE_SOFT_BANK)
#define SRST_T_PMU_WDT        (41U | PMUCRU_GATE_SOFT_BANK)
#define SRST_P_PMU_MAILBOX    (42U | PMUCRU_GATE_SOFT_BANK)

/********Name=PMUGATE_CON00,Offset=0x800********/
#define PCLK_PMU_ROOT_GATE          (1U | PMUCRU_GATE_SOFT_BANK)
#define HCLK_PMU_ROOT_GATE          (2U | PMUCRU_GATE_SOFT_BANK)
#define PCLK_I2C1_GATE              (3U | PMUCRU_GATE_SOFT_BANK)
#define CLK_I2C1_GATE               (4U | PMUCRU_GATE_SOFT_BANK)
#define CLK_TESTOUT_PMU_GATE        (5U | PMUCRU_GATE_SOFT_BANK)
#define HCLK_PMU_BIU_GATE           (6U | PMUCRU_GATE_SOFT_BANK)
#define PCLK_PMU_BIU_GATE           (7U | PMUCRU_GATE_SOFT_BANK)
#define HCLK_PMU_SRAM_GATE          (8U | PMUCRU_GATE_SOFT_BANK)
#define CLK_PMU_MCU_GATE            (9U | PMUCRU_GATE_SOFT_BANK)
#define CLK_PMU_MCU_RTC_GATE        (13U | PMUCRU_GATE_SOFT_BANK)
#define CLK_PMU_MCU_JTAG_GATE       (14U | PMUCRU_GATE_SOFT_BANK)
#define CLK_SCANHS_CLK_PMU_MCU_GATE (15U | PMUCRU_GATE_SOFT_BANK)
/********Name=PMUGATE_CON01,Offset=0x804********/
#define CLK_PMU_GATE           (16U | PMUCRU_GATE_SOFT_BANK)
#define PCLK_PMU_GATE          (17U | PMUCRU_GATE_SOFT_BANK)
#define PCLK_PMU_GPIO0_GATE    (18U | PMUCRU_GATE_SOFT_BANK)
#define DBCLK_PMU_GPIO0_GATE   (19U | PMUCRU_GATE_SOFT_BANK)
#define CLK_PVTM_PMU_GATE      (20U | PMUCRU_GATE_SOFT_BANK)
#define PCLK_PVTM_PMU_GATE     (21U | PMUCRU_GATE_SOFT_BANK)
#define XIN_OSC0_DIV_GATE      (30U | PMUCRU_GATE_SOFT_BANK)
#define CLK_DDR_FAIL_SAFE_GATE (31U | PMUCRU_GATE_SOFT_BANK)
/********Name=PMUGATE_CON02,Offset=0x808********/
#define PCLK_PMU_HP_TIMER_GATE        (32U | PMUCRU_GATE_SOFT_BANK)
#define CLK_PMU_HP_TIMER_GATE         (33U | PMUCRU_GATE_SOFT_BANK)
#define CLK_PMU_32K_HP_TIMER_GATE     (34U | PMUCRU_GATE_SOFT_BANK)
#define PCLK_PMU_IOC_GATE             (35U | PMUCRU_GATE_SOFT_BANK)
#define PCLK_PMU_CRU_GATE             (36U | PMUCRU_GATE_SOFT_BANK)
#define PCLK_PMU_GRF_GATE             (37U | PMUCRU_GATE_SOFT_BANK)
#define PCLK_PMU_SGRF_GATE            (38U | PMUCRU_GATE_SOFT_BANK)
#define PCLK_PMU_WDT_GATE             (40U | PMUCRU_GATE_SOFT_BANK)
#define TCLK_PMU_WDT_GATE             (41U | PMUCRU_GATE_SOFT_BANK)
#define PCLK_PMU_MAILBOX_GATE         (42U | PMUCRU_GATE_SOFT_BANK)
#define OCC_SCANCLK_PMU_MCU_JTAG_GATE (43U | PMUCRU_GATE_SOFT_BANK)
#define OCC_SCANCLK_PMU_GPIO_GATE     (44U | PMUCRU_GATE_SOFT_BANK)
#define CLK_REFOUT_GATE               (45U | PMUCRU_GATE_SOFT_BANK)

/********Name=PMUCRU_CLKSEL_CON00,Offset=0x300********/
#define CLK_MATRIX_100M_PMUSRC_DIV 0x03000000U
#define CLK_TESTOUT_PMU_DIV        0x05080000U
/********Name=PMUCRU_CLKSEL_CON01,Offset=0x304********/
#define CLK_PVTM_PMU_DIV 0x05000001U
/********Name=PMUCRU_CLKSEL_CON06,Offset=0x318********/
#define XIN_OSC0_DIV_DIV 0x20000006U
/********Name=PMUCRU_CLKSEL_CON07,Offset=0x31C********/

/********Name=PMUCRU_CLKSEL_CON00,Offset=0x300********/
#define PCLK_PMU_ROOT_SEL                0x01030000U
#define PCLK_PMU_ROOT_SEL_XIN_OSC0_FUNC  0U
#define HCLK_PMU_ROOT_SEL                0x02040000U
#define HCLK_PMU_ROOT_SEL_XIN_OSC0_FUNC  0U
#define CLK_I2C1_SEL                     0x02060000U
#define CLK_I2C1_SEL_CLK_DEEPSLOW        0U
#define CLK_TESTOUT_PMU_SEL              0x020D0000U
#define CLK_TESTOUT_PMU_SEL_XIN_OSC0_DIV 0U
#define DBCLK_PMU_GPIO0_SEL              0x010F0000U
#define DBCLK_PMU_GPIO0_SEL_CLK_DEEPSLOW 0U
/********Name=PMUCRU_CLKSEL_CON01,Offset=0x304********/
/********Name=PMUCRU_CLKSEL_CON06,Offset=0x318********/
/********Name=PMUCRU_CLKSEL_CON07,Offset=0x31C********/
#define CLK_DEEPSLOW_SEL              0x02000007U
#define CLK_DEEPSLOW_SEL_CLK_PVTM_32K 0U
#define TCLK_PMU_WDT_SEL              0x01020007U
#define TCLK_PMU_WDT_SEL_CLK_DEEPSLOW 0U

/* VEPU CRU */
#define VEPUCRU_GATE_SOFT_BANK (0x6U << 24)
#define VEPUCRU_SEL_BANK       (0x6U << 5)
/********Name=VEPUCRU_SOFTRST_CON00,Offset=0xA00********/
#define SRST_H_VEPU_BIU     (4U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_A_VEPU_BIU     (5U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_A_VEPU_COM_BIU (6U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_P_VEPU_BIU     (7U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_H_VEPU         (8U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_A_VEPU         (9U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_CORE_VEPU      (10U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_H_VEPU_PP      (11U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_A_VEPU_PP      (12U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_CORE_VEPU_DVBM (13U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_P_VICAP_VEPU   (14U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_P_GPIO1        (15U | VEPUCRU_GATE_SOFT_BANK)
/********Name=VEPUCRU_SOFTRST_CON01,Offset=0xA04********/
#define SRST_DB_GPIO1      (16U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_P_VEPU_IOC    (17U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_P_SPI0        (18U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_SPI0          (19U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_P_VEPU_CRU    (21U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_P_VEPU_SGRF   (22U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_P_VEPU_GRF    (23U | VEPUCRU_GATE_SOFT_BANK)
#define SRST_UART_DETN_FLT (24U | VEPUCRU_GATE_SOFT_BANK)

/********Name=VEPUGATE_CON00,Offset=0x800********/
#define HCLK_VEPU_ROOT_GATE     (0U | VEPUCRU_GATE_SOFT_BANK)
#define ACLK_VEPU_COM_ROOT_GATE (1U | VEPUCRU_GATE_SOFT_BANK)
#define ACLK_VEPU_ROOT_GATE     (2U | VEPUCRU_GATE_SOFT_BANK)
#define PCLK_VEPU_ROOT_GATE     (3U | VEPUCRU_GATE_SOFT_BANK)
#define HCLK_VEPU_BIU_GATE      (4U | VEPUCRU_GATE_SOFT_BANK)
#define ACLK_VEPU_BIU_GATE      (5U | VEPUCRU_GATE_SOFT_BANK)
#define ACLK_VEPU_COM_BIU_GATE  (6U | VEPUCRU_GATE_SOFT_BANK)
#define PCLK_VEPU_BIU_GATE      (7U | VEPUCRU_GATE_SOFT_BANK)
#define HCLK_VEPU_GATE          (8U | VEPUCRU_GATE_SOFT_BANK)
#define ACLK_VEPU_GATE          (9U | VEPUCRU_GATE_SOFT_BANK)
#define CLK_CORE_VEPU_GATE      (10U | VEPUCRU_GATE_SOFT_BANK)
#define HCLK_VEPU_PP_GATE       (11U | VEPUCRU_GATE_SOFT_BANK)
#define ACLK_VEPU_PP_GATE       (12U | VEPUCRU_GATE_SOFT_BANK)
#define CLK_CORE_VEPU_DVBM_GATE (13U | VEPUCRU_GATE_SOFT_BANK)
#define PCLK_VICAP_VEPU_GATE    (14U | VEPUCRU_GATE_SOFT_BANK)
#define PCLK_GPIO1_GATE         (15U | VEPUCRU_GATE_SOFT_BANK)
/********Name=VEPUGATE_CON01,Offset=0x804********/
#define DBCLK_GPIO1_GATE        (16U | VEPUCRU_GATE_SOFT_BANK)
#define PCLK_VEPU_IOC_GATE      (17U | VEPUCRU_GATE_SOFT_BANK)
#define PCLK_SPI0_GATE          (18U | VEPUCRU_GATE_SOFT_BANK)
#define CLK_SPI0_GATE           (19U | VEPUCRU_GATE_SOFT_BANK)
#define SCLK_IN_SPI0_GATE       (20U | VEPUCRU_GATE_SOFT_BANK)
#define PCLK_VEPU_CRU_GATE      (21U | VEPUCRU_GATE_SOFT_BANK)
#define PCLK_VEPU_SGRF_GATE     (22U | VEPUCRU_GATE_SOFT_BANK)
#define PCLK_VEPU_GRF_GATE      (23U | VEPUCRU_GATE_SOFT_BANK)
#define CLK_UART_DETN_FLT_GATE  (24U | VEPUCRU_GATE_SOFT_BANK)
#define CLK_PVTPLL_0_I2NPU_GATE (25U | VEPUCRU_GATE_SOFT_BANK)
#define CLK_PVTPLL_1_I2NPU_GATE (26U | VEPUCRU_GATE_SOFT_BANK)
/********Name=VEPUGATE_CON02,Offset=0x808********/
#define CLK_TESTOUT_VEPU_0_GATE (45U | VEPUCRU_GATE_SOFT_BANK)
#define CLK_TESTOUT_VEPU_1_GATE (46U | VEPUCRU_GATE_SOFT_BANK)

/********Name=VEPUCRU_CLKSEL_CON00,Offset=0x300********/
/********Name=VEPUCRU_CLKSEL_CON01,Offset=0x304********/
#define CLK_TESTOUT_VEPU2VO_0_DIV 0x05000001U
#define CLK_TESTOUT_VEPU2VO_1_DIV 0x05070001U

/********Name=VEPUCRU_CLKSEL_CON00,Offset=0x300********/
#define HCLK_VEPU_ROOT_SEL                   0x02000000U
#define HCLK_VEPU_ROOT_SEL_XIN_OSC0_FUNC     0U
#define ACLK_VEPU_COM_ROOT_SEL               0x02020000U
#define ACLK_VEPU_COM_ROOT_SEL_XIN_OSC0_FUNC 0U
#define ACLK_VEPU_ROOT_SEL                   0x02040000U
#define ACLK_VEPU_ROOT_SEL_XIN_OSC0_FUNC     0U
#define PCLK_VEPU_ROOT_SEL                   0x02060000U
#define PCLK_VEPU_ROOT_SEL_XIN_OSC0_FUNC     0U
#define CLK_CORE_VEPU_SEL                    0x02080000U
#define CLK_CORE_VEPU_SEL_CLK_PVTPLL_1       0U
#define CLK_CORE_VEPU_DVBM_SEL               0x020A0000U
#define CLK_CORE_VEPU_DVBM_SEL_XIN_OSC0_FUNC 0U
#define CLK_SPI0_SEL                         0x020C0000U
#define CLK_SPI0_SEL_XIN_OSC0_FUNC           0U
/********Name=VEPUCRU_CLKSEL_CON01,Offset=0x304********/
#define CLK_TESTOUT_VEPU2VO_0_SEL                      0x02050001U
#define CLK_TESTOUT_VEPU2VO_0_SEL_PCLK_VEPU_ROOT       0U
#define CLK_TESTOUT_VEPU2VO_1_SEL                      0x020C0001U
#define CLK_TESTOUT_VEPU2VO_1_SEL_CLK_TESTOUT_TOP2VEPU 0U

/* VI CRU */
#define VICRU_GATE_SOFT_BANK (0x3U << 24)
#define VICRU_SEL_BANK       (0x3U << 5)
/********Name=VICRU_SOFTRST_CON00,Offset=0xA00********/
#define SRST_H_VI_BIU    (4U | VICRU_GATE_SOFT_BANK)
#define SRST_A_VI_BIU    (5U | VICRU_GATE_SOFT_BANK)
#define SRST_P_VI_BIU    (6U | VICRU_GATE_SOFT_BANK)
#define SRST_CORE_ISP3P2 (9U | VICRU_GATE_SOFT_BANK)
#define SRST_D_VICAP     (10U | VICRU_GATE_SOFT_BANK)
#define SRST_P_VICAP     (11U | VICRU_GATE_SOFT_BANK)
#define SRST_A_VICAP     (12U | VICRU_GATE_SOFT_BANK)
#define SRST_H_VICAP     (13U | VICRU_GATE_SOFT_BANK)
#define SRST_I0_VICAP    (14U | VICRU_GATE_SOFT_BANK)
#define SRST_I1_VICAP    (15U | VICRU_GATE_SOFT_BANK)
/********Name=VICRU_SOFTRST_CON01,Offset=0xA04********/
#define SRST_RX0P_VICAP     (16U | VICRU_GATE_SOFT_BANK)
#define SRST_RX1P_VICAP     (17U | VICRU_GATE_SOFT_BANK)
#define SRST_ISP0_VICAP     (18U | VICRU_GATE_SOFT_BANK)
#define SRST_P_CSIHOST0     (20U | VICRU_GATE_SOFT_BANK)
#define SRST_P_CSIHOST1     (22U | VICRU_GATE_SOFT_BANK)
#define SRST_H_SDMMC        (28U | VICRU_GATE_SOFT_BANK)
#define SRST_SDMMC_DETN_FLT (29U | VICRU_GATE_SOFT_BANK)
#define SRST_P_MIPICSIPHY   (30U | VICRU_GATE_SOFT_BANK)
#define SRST_P_GPIO3        (31U | VICRU_GATE_SOFT_BANK)
/********Name=VICRU_SOFTRST_CON02,Offset=0xA08********/
#define SRST_DB_GPIO3      (32U | VICRU_GATE_SOFT_BANK)
#define SRST_P_VI_IOC      (33U | VICRU_GATE_SOFT_BANK)
#define SRST_P_VI_GRF      (34U | VICRU_GATE_SOFT_BANK)
#define SRST_P_VI_SGRF     (35U | VICRU_GATE_SOFT_BANK)
#define SRST_P_VI_CRU      (36U | VICRU_GATE_SOFT_BANK)
#define SRST_P_VI_RTC_TEST (37U | VICRU_GATE_SOFT_BANK)
#define SRST_P_VI_RTC_NIU  (39U | VICRU_GATE_SOFT_BANK)

/********Name=VIGATE_CON00,Offset=0x800********/
#define HCLK_VI_ROOT_GATE     (0U | VICRU_GATE_SOFT_BANK)
#define ACLK_VI_ROOT_GATE     (1U | VICRU_GATE_SOFT_BANK)
#define PCLK_VI_ROOT_GATE     (2U | VICRU_GATE_SOFT_BANK)
#define PCLK_VI_RTC_ROOT_GATE (3U | VICRU_GATE_SOFT_BANK)
#define HCLK_VI_BIU_GATE      (4U | VICRU_GATE_SOFT_BANK)
#define ACLK_VI_BIU_GATE      (5U | VICRU_GATE_SOFT_BANK)
#define PCLK_VI_BIU_GATE      (6U | VICRU_GATE_SOFT_BANK)
#define HCLK_ISP3P2_GATE      (7U | VICRU_GATE_SOFT_BANK)
#define ACLK_ISP3P2_GATE      (8U | VICRU_GATE_SOFT_BANK)
#define CLK_CORE_ISP3P2_GATE  (9U | VICRU_GATE_SOFT_BANK)
#define DCLK_VICAP_GATE       (10U | VICRU_GATE_SOFT_BANK)
#define PCLK_VICAP_GATE       (11U | VICRU_GATE_SOFT_BANK)
#define ACLK_VICAP_GATE       (12U | VICRU_GATE_SOFT_BANK)
#define HCLK_VICAP_GATE       (13U | VICRU_GATE_SOFT_BANK)
#define I0CLK_VICAP_GATE      (14U | VICRU_GATE_SOFT_BANK)
#define I1CLK_VICAP_GATE      (15U | VICRU_GATE_SOFT_BANK)
/********Name=VIGATE_CON01,Offset=0x804********/
#define RX0PCLK_VICAP_GATE             (16U | VICRU_GATE_SOFT_BANK)
#define RX1PCLK_VICAP_GATE             (17U | VICRU_GATE_SOFT_BANK)
#define ISP0CLK_VICAP_GATE             (18U | VICRU_GATE_SOFT_BANK)
#define PCLK_CSIHOST0_GATE             (19U | VICRU_GATE_SOFT_BANK)
#define CLK_RXBYTECLKHS_0_GATE         (20U | VICRU_GATE_SOFT_BANK)
#define PCLK_CSIHOST1_GATE             (21U | VICRU_GATE_SOFT_BANK)
#define CLK_RXBYTECLKHS_1_GATE         (22U | VICRU_GATE_SOFT_BANK)
#define MBIST_CLK_ACLK_VICAP_GATE      (23U | VICRU_GATE_SOFT_BANK)
#define MBIST_CLK_DCLK_VICAP_GATE      (24U | VICRU_GATE_SOFT_BANK)
#define MBIST_CLK_ACLK_ISP3P2_GATE     (25U | VICRU_GATE_SOFT_BANK)
#define MBIST_CLK_CLK_CORE_ISP3P2_GATE (26U | VICRU_GATE_SOFT_BANK)
#define CCLK_SRC_SDMMC_GATE            (27U | VICRU_GATE_SOFT_BANK)
#define HCLK_SDMMC_GATE                (28U | VICRU_GATE_SOFT_BANK)
#define CLK_SDMMC_DETN_FLT_GATE        (29U | VICRU_GATE_SOFT_BANK)
#define PCLK_MIPICSIPHY_GATE           (30U | VICRU_GATE_SOFT_BANK)
#define PCLK_GPIO3_GATE                (31U | VICRU_GATE_SOFT_BANK)
/********Name=VIGATE_CON02,Offset=0x808********/
#define DBCLK_GPIO3_GATE           (32U | VICRU_GATE_SOFT_BANK)
#define PCLK_VI_IOC_GATE           (33U | VICRU_GATE_SOFT_BANK)
#define PCLK_VI_GRF_GATE           (34U | VICRU_GATE_SOFT_BANK)
#define PCLK_VI_SGRF_GATE          (35U | VICRU_GATE_SOFT_BANK)
#define PCLK_VI_CRU_GATE           (36U | VICRU_GATE_SOFT_BANK)
#define PCLK_VI_RTC_TEST_GATE      (37U | VICRU_GATE_SOFT_BANK)
#define PCLK_VI_RTC_PHY_GATE       (38U | VICRU_GATE_SOFT_BANK)
#define PCLK_VI_RTC_NIU_GATE       (39U | VICRU_GATE_SOFT_BANK)
#define CLK_TESTOUT_VI2PERI_0_GATE (42U | VICRU_GATE_SOFT_BANK)
#define CLK_TESTOUT_VI2PERI_1_GATE (43U | VICRU_GATE_SOFT_BANK)

/********Name=VICRU_CLKSEL_CON00,Offset=0x300********/
/********Name=VICRU_CLKSEL_CON01,Offset=0x304********/
#define CCLK_SRC_SDMMC_DIV 0x06080001U
/********Name=VICRU_CLKSEL_CON02,Offset=0x308********/
#define CLK_TESTOUT_VI2PERI_0_DIV 0x05010002U
/********Name=VICRU_CLKSEL_CON03,Offset=0x30C********/
#define CLK_TESTOUT_VI2PERI_1_DIV 0x05000003U

/********Name=VICRU_CLKSEL_CON00,Offset=0x300********/
#define HCLK_VI_ROOT_SEL                   0x02000000U
#define HCLK_VI_ROOT_SEL_XIN_OSC0_FUNC     0U
#define ACLK_VI_ROOT_SEL                   0x02020000U
#define ACLK_VI_ROOT_SEL_XIN_OSC0_FUNC     0U
#define PCLK_VI_ROOT_SEL                   0x02040000U
#define PCLK_VI_ROOT_SEL_XIN_OSC0_FUNC     0U
#define PCLK_VI_RTC_ROOT_SEL               0x01060000U
#define PCLK_VI_RTC_ROOT_SEL_XIN_OSC0_FUNC 0U
#define CLK_CORE_ISP3P2_SEL                0x02070000U
#define CLK_CORE_ISP3P2_SEL_CLK_PVTPLL_1   0U
#define DCLK_VICAP_SEL                     0x02090000U
#define DCLK_VICAP_SEL_XIN_OSC0_FUNC       0U
/********Name=VICRU_CLKSEL_CON01,Offset=0x304********/
#define CCLK_SRC_SDMMC_SEL               0x010E0001U
#define CCLK_SRC_SDMMC_SEL_XIN_OSC0_FUNC 0U
/********Name=VICRU_CLKSEL_CON02,Offset=0x308********/
#define CLK_TESTOUT_VI2PERI_0_SEL            0x03060002U
#define CLK_TESTOUT_VI2PERI_0_SEL_DCLK_VICAP 0U
/********Name=VICRU_CLKSEL_CON03,Offset=0x30C********/
#define CLK_TESTOUT_VI2PERI_1_SEL                    0x03050003U
#define CLK_TESTOUT_VI2PERI_1_SEL_CLK_TESTOUT_NPU2VI 0U

/* VO CRU */
#define VOCRU_GATE_SOFT_BANK (0x7U << 24)
#define VOCRU_SEL_BANK       (0x7U << 5)
/********Name=VOCRU_SOFTRST_CON00,Offset=0xA00********/
#define SRST_A_VO_BIU   (3U | VOCRU_GATE_SOFT_BANK)
#define SRST_H_VO_BIU   (4U | VOCRU_GATE_SOFT_BANK)
#define SRST_H_RGA2E    (7U | VOCRU_GATE_SOFT_BANK)
#define SRST_A_RGA2E    (8U | VOCRU_GATE_SOFT_BANK)
#define SRST_CORE_RGA2E (9U | VOCRU_GATE_SOFT_BANK)
#define SRST_P_VO_GRF   (10U | VOCRU_GATE_SOFT_BANK)
#define SRST_A_VOP_BIU  (12U | VOCRU_GATE_SOFT_BANK)
#define SRST_H_VOP      (13U | VOCRU_GATE_SOFT_BANK)
#define SRST_D_VOP      (14U | VOCRU_GATE_SOFT_BANK)
#define SRST_A_VOP      (15U | VOCRU_GATE_SOFT_BANK)
/********Name=VOCRU_SOFTRST_CON01,Offset=0xA04********/
#define SRST_P_MAC_BIU (22U | VOCRU_GATE_SOFT_BANK)
#define SRST_A_MAC_BIU (23U | VOCRU_GATE_SOFT_BANK)
#define SRST_A_MAC     (24U | VOCRU_GATE_SOFT_BANK)
#define SRST_P_VO_SGRF (28U | VOCRU_GATE_SOFT_BANK)
#define SRST_P_VO_CRU  (29U | VOCRU_GATE_SOFT_BANK)
#define SRST_H_SDIO    (31U | VOCRU_GATE_SOFT_BANK)
/********Name=VOCRU_SOFTRST_CON02,Offset=0xA08********/
#define SRST_P_TSADC      (32U | VOCRU_GATE_SOFT_BANK)
#define SRST_TSADC        (33U | VOCRU_GATE_SOFT_BANK)
#define SRST_P_OTPC_NS    (35U | VOCRU_GATE_SOFT_BANK)
#define SRST_SBPI_OTPC_NS (37U | VOCRU_GATE_SOFT_BANK)
#define SRST_USER_OTPC_NS (38U | VOCRU_GATE_SOFT_BANK)
#define SRST_P_OTPC_S     (39U | VOCRU_GATE_SOFT_BANK)
#define SRST_SBPI_OTPC_S  (41U | VOCRU_GATE_SOFT_BANK)
#define SRST_USER_OTPC_S  (42U | VOCRU_GATE_SOFT_BANK)
#define SRST_OTPC_ARB     (43U | VOCRU_GATE_SOFT_BANK)
#define SRST_MACPHY       (45U | VOCRU_GATE_SOFT_BANK)
#define SRST_P_OTP_MASK   (46U | VOCRU_GATE_SOFT_BANK)
#define SRST_PMC_OTP      (47U | VOCRU_GATE_SOFT_BANK)
/********Name=VOCRU_SOFTRST_CON03,Offset=0xA0C********/
#define SRST_P_GPIO2  (48U | VOCRU_GATE_SOFT_BANK)
#define SRST_DB_GPIO2 (49U | VOCRU_GATE_SOFT_BANK)
#define SRST_P_VO_IOC (50U | VOCRU_GATE_SOFT_BANK)

/********Name=VOGATE_CON00,Offset=0x800********/
#define ACLK_VO_ROOT_GATE     (0U | VOCRU_GATE_SOFT_BANK)
#define HCLK_VO_ROOT_GATE     (1U | VOCRU_GATE_SOFT_BANK)
#define PCLK_VO_ROOT_GATE     (2U | VOCRU_GATE_SOFT_BANK)
#define ACLK_VO_BIU_GATE      (3U | VOCRU_GATE_SOFT_BANK)
#define HCLK_VO_BIU_GATE      (4U | VOCRU_GATE_SOFT_BANK)
#define CLK_TESTOUT_VO_0_GATE (5U | VOCRU_GATE_SOFT_BANK)
#define CLK_TESTOUT_VO_1_GATE (6U | VOCRU_GATE_SOFT_BANK)
#define HCLK_RGA2E_GATE       (7U | VOCRU_GATE_SOFT_BANK)
#define ACLK_RGA2E_GATE       (8U | VOCRU_GATE_SOFT_BANK)
#define CLK_CORE_RGA2E_GATE   (9U | VOCRU_GATE_SOFT_BANK)
#define PCLK_VO_GRF_GATE      (10U | VOCRU_GATE_SOFT_BANK)
#define ACLK_VOP_ROOT_GATE    (11U | VOCRU_GATE_SOFT_BANK)
#define ACLK_VOP_BIU_GATE     (12U | VOCRU_GATE_SOFT_BANK)
#define HCLK_VOP_GATE         (13U | VOCRU_GATE_SOFT_BANK)
#define DCLK_VOP_GATE         (14U | VOCRU_GATE_SOFT_BANK)
#define ACLK_VOP_GATE         (15U | VOCRU_GATE_SOFT_BANK)
/********Name=VOGATE_CON01,Offset=0x804********/
#define MBIST_CLK_MAC_PHY_GATE  (16U | VOCRU_GATE_SOFT_BANK)
#define MBIST_CLK_ACLK_VOP_GATE (17U | VOCRU_GATE_SOFT_BANK)
#define MBIST_CLK_ACLK_RGA_GATE (18U | VOCRU_GATE_SOFT_BANK)
#define MBIST_CLK_CCLK_RGA_GATE (19U | VOCRU_GATE_SOFT_BANK)
#define ACLK_MAC_ROOT_GATE      (20U | VOCRU_GATE_SOFT_BANK)
#define PCLK_MAC_BIU_GATE       (22U | VOCRU_GATE_SOFT_BANK)
#define ACLK_MAC_BIU_GATE       (23U | VOCRU_GATE_SOFT_BANK)
#define ACLK_MAC_GATE           (24U | VOCRU_GATE_SOFT_BANK)
#define PCLK_MAC_GATE           (25U | VOCRU_GATE_SOFT_BANK)
#define PCLK_VO_SGRF_GATE       (28U | VOCRU_GATE_SOFT_BANK)
#define PCLK_VO_CRU_GATE        (29U | VOCRU_GATE_SOFT_BANK)
#define CCLK_SRC_SDIO_GATE      (30U | VOCRU_GATE_SOFT_BANK)
#define HCLK_SDIO_GATE          (31U | VOCRU_GATE_SOFT_BANK)
/********Name=VOGATE_CON02,Offset=0x808********/
#define PCLK_TSADC_GATE       (32U | VOCRU_GATE_SOFT_BANK)
#define CLK_TSADC_GATE        (33U | VOCRU_GATE_SOFT_BANK)
#define CLK_TSADC_TSEN_GATE   (34U | VOCRU_GATE_SOFT_BANK)
#define PCLK_OTPC_NS_GATE     (35U | VOCRU_GATE_SOFT_BANK)
#define CLK_SBPI_OTPC_NS_GATE (37U | VOCRU_GATE_SOFT_BANK)
#define CLK_USER_OTPC_NS_GATE (38U | VOCRU_GATE_SOFT_BANK)
#define PCLK_OTPC_S_GATE      (39U | VOCRU_GATE_SOFT_BANK)
#define CLK_SBPI_OTPC_S_GATE  (41U | VOCRU_GATE_SOFT_BANK)
#define CLK_USER_OTPC_S_GATE  (42U | VOCRU_GATE_SOFT_BANK)
#define CLK_OTPC_ARB_GATE     (43U | VOCRU_GATE_SOFT_BANK)
#define CLK_MACPHY_GATE       (45U | VOCRU_GATE_SOFT_BANK)
#define PCLK_OTP_MASK_GATE    (46U | VOCRU_GATE_SOFT_BANK)
#define CLK_PMC_OTP_GATE      (47U | VOCRU_GATE_SOFT_BANK)
/********Name=VOGATE_CON03,Offset=0x80C********/
#define PCLK_GPIO2_GATE  (48U | VOCRU_GATE_SOFT_BANK)
#define DBCLK_GPIO2_GATE (49U | VOCRU_GATE_SOFT_BANK)
#define PCLK_VO_IOC_GATE (50U | VOCRU_GATE_SOFT_BANK)

/********Name=VOCRU_CLKSEL_CON00,Offset=0x300********/
#define CLK_TESTOUT_VO_0_DIV 0x05060000U
/********Name=VOCRU_CLKSEL_CON01,Offset=0x304********/
#define CLK_TESTOUT_VO_1_DIV 0x05000001U
/********Name=VOCRU_CLKSEL_CON02,Offset=0x308********/
#define CLK_GMAC0_TX_50M_O_DIV 0x06010002U
#define CCLK_SRC_SDIO_DIV      0x06070002U
/********Name=VOCRU_CLKSEL_CON03,Offset=0x30C********/
#define CLK_TSADC_DIV        0x05000003U
#define CLK_TSADC_TSEN_DIV   0x05050003U
#define CLK_USER_OTPC_NS_DIV 0x030A0003U
#define CLK_USER_OTPC_S_DIV  0x030D0003U

/********Name=VOCRU_CLKSEL_CON00,Offset=0x300********/
#define ACLK_VO_ROOT_SEL                   0x02000000U
#define ACLK_VO_ROOT_SEL_XIN_OSC0_FUNC     0U
#define HCLK_VO_ROOT_SEL                   0x02020000U
#define HCLK_VO_ROOT_SEL_XIN_OSC0_FUNC     0U
#define PCLK_VO_ROOT_SEL                   0x02040000U
#define PCLK_VO_ROOT_SEL_XIN_OSC0_FUNC     0U
#define CLK_TESTOUT_VO_0_SEL               0x030B0000U
#define CLK_TESTOUT_VO_0_SEL_ACLK_VOP_ROOT 0U
/********Name=VOCRU_CLKSEL_CON01,Offset=0x304********/
#define CLK_TESTOUT_VO_1_SEL             0x03050001U
#define CLK_TESTOUT_VO_1_SEL_DCLK_VOP    0U
#define CLK_CORE_RGA2E_SEL               0x02080001U
#define CLK_CORE_RGA2E_SEL_XIN_OSC0_FUNC 0U
#define ACLK_VOP_ROOT_SEL                0x020A0001U
#define ACLK_VOP_ROOT_SEL_XIN_OSC0_FUNC  0U
#define ACLK_MAC_ROOT_SEL                0x020C0001U
#define ACLK_MAC_ROOT_SEL_XIN_OSC0_FUNC  0U
/********Name=VOCRU_CLKSEL_CON02,Offset=0x308********/
#define CCLK_SRC_SDIO_SEL               0x010D0002U
#define CCLK_SRC_SDIO_SEL_XIN_OSC0_FUNC 0U
/********Name=VOCRU_CLKSEL_CON03,Offset=0x30C********/
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __RV1106_H */
