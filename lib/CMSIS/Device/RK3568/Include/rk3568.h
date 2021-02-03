/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2020 Rockchip Electronics Co., Ltd.
 */

#ifndef __RK3568_H
#define __RK3568_H
#ifdef __cplusplus
  extern "C" {
#endif
/****************************************************************************************/
/*                                                                                      */
/*                               Module Structure Section                               */
/*                                                                                      */
/****************************************************************************************/
#ifndef __ASSEMBLY__
/* PMU_GRF Register Structure Define */
struct PMU_GRF_REG {
    __IO uint32_t GPIO0A_IOMUX_L;                     /* Address Offset: 0x0000 */
    __IO uint32_t GPIO0A_IOMUX_H;                     /* Address Offset: 0x0004 */
    __IO uint32_t GPIO0B_IOMUX_L;                     /* Address Offset: 0x0008 */
    __IO uint32_t GPIO0B_IOMUX_H;                     /* Address Offset: 0x000C */
    __IO uint32_t GPIO0C_IOMUX_L;                     /* Address Offset: 0x0010 */
    __IO uint32_t GPIO0C_IOMUX_H;                     /* Address Offset: 0x0014 */
    __IO uint32_t GPIO0D_IOMUX_L;                     /* Address Offset: 0x0018 */
    __IO uint32_t GPIO0D_IOMUX_H;                     /* Address Offset: 0x001C */
    __IO uint32_t GPIO0A_P;                           /* Address Offset: 0x0020 */
    __IO uint32_t GPIO0B_P;                           /* Address Offset: 0x0024 */
    __IO uint32_t GPIO0C_P;                           /* Address Offset: 0x0028 */
    __IO uint32_t GPIO0D_P;                           /* Address Offset: 0x002C */
    __IO uint32_t GPIO0A_IE;                          /* Address Offset: 0x0030 */
    __IO uint32_t GPIO0B_IE;                          /* Address Offset: 0x0034 */
    __IO uint32_t GPIO0C_IE;                          /* Address Offset: 0x0038 */
    __IO uint32_t GPIO0D_IE;                          /* Address Offset: 0x003C */
    __IO uint32_t GPIO0A_OPD;                         /* Address Offset: 0x0040 */
    __IO uint32_t GPIO0B_OPD;                         /* Address Offset: 0x0044 */
    __IO uint32_t GPIO0C_OPD;                         /* Address Offset: 0x0048 */
    __IO uint32_t GPIO0D_OPD;                         /* Address Offset: 0x004C */
    __IO uint32_t GPIO0A_SUS;                         /* Address Offset: 0x0050 */
    __IO uint32_t GPIO0B_SUS;                         /* Address Offset: 0x0054 */
    __IO uint32_t GPIO0C_SUS;                         /* Address Offset: 0x0058 */
    __IO uint32_t GPIO0D_SUS;                         /* Address Offset: 0x005C */
    __IO uint32_t GPIO0A_SL;                          /* Address Offset: 0x0060 */
    __IO uint32_t GPIO0B_SL;                          /* Address Offset: 0x0064 */
    __IO uint32_t GPIO0C_SL;                          /* Address Offset: 0x0068 */
    __IO uint32_t GPIO0D_SL;                          /* Address Offset: 0x006C */
    __IO uint32_t GPIO0A_DS_0;                        /* Address Offset: 0x0070 */
    __IO uint32_t GPIO0A_DS_1;                        /* Address Offset: 0x0074 */
    __IO uint32_t GPIO0A_DS_2;                        /* Address Offset: 0x0078 */
    __IO uint32_t GPIO0A_DS_3;                        /* Address Offset: 0x007C */
    __IO uint32_t GPIO0B_DS_0;                        /* Address Offset: 0x0080 */
    __IO uint32_t GPIO0B_DS_1;                        /* Address Offset: 0x0084 */
    __IO uint32_t GPIO0B_DS_2;                        /* Address Offset: 0x0088 */
    __IO uint32_t GPIO0B_DS_3;                        /* Address Offset: 0x008C */
    __IO uint32_t GPIO0C_DS_0;                        /* Address Offset: 0x0090 */
    __IO uint32_t GPIO0C_DS_1;                        /* Address Offset: 0x0094 */
    __IO uint32_t GPIO0C_DS_2;                        /* Address Offset: 0x0098 */
    __IO uint32_t GPIO0C_DS_3;                        /* Address Offset: 0x009C */
    __IO uint32_t GPIO0D_DS_0;                        /* Address Offset: 0x00A0 */
         uint32_t RESERVED00A4[23];                   /* Address Offset: 0x00A4 */
    __IO uint32_t SOC_CON0;                           /* Address Offset: 0x0100 */
    __IO uint32_t SOC_CON1;                           /* Address Offset: 0x0104 */
    __IO uint32_t SOC_CON2;                           /* Address Offset: 0x0108 */
    __IO uint32_t SOC_CON3;                           /* Address Offset: 0x010C */
    __IO uint32_t SOC_CON4;                           /* Address Offset: 0x0110 */
    __IO uint32_t SOC_CON5;                           /* Address Offset: 0x0114 */
         uint32_t RESERVED0118[2];                    /* Address Offset: 0x0118 */
    __I  uint32_t SOC_STATUS;                         /* Address Offset: 0x0120 */
         uint32_t RESERVED0124[7];                    /* Address Offset: 0x0124 */
    __IO uint32_t IO_VSEL0;                           /* Address Offset: 0x0140 */
    __IO uint32_t IO_VSEL1;                           /* Address Offset: 0x0144 */
    __IO uint32_t IO_VSEL2;                           /* Address Offset: 0x0148 */
         uint32_t RESERVED014C[13];                   /* Address Offset: 0x014C */
    __IO uint32_t DLL_CON0;                           /* Address Offset: 0x0180 */
         uint32_t RESERVED0184[31];                   /* Address Offset: 0x0184 */
    __IO uint32_t OS_REG0;                            /* Address Offset: 0x0200 */
    __IO uint32_t OS_REG1;                            /* Address Offset: 0x0204 */
    __IO uint32_t OS_REG2;                            /* Address Offset: 0x0208 */
    __IO uint32_t OS_REG3;                            /* Address Offset: 0x020C */
    __IO uint32_t OS_REG4;                            /* Address Offset: 0x0210 */
    __IO uint32_t OS_REG5;                            /* Address Offset: 0x0214 */
    __IO uint32_t OS_REG6;                            /* Address Offset: 0x0218 */
    __IO uint32_t OS_REG7;                            /* Address Offset: 0x021C */
    __IO uint32_t OS_REG8;                            /* Address Offset: 0x0220 */
    __IO uint32_t OS_REG9;                            /* Address Offset: 0x0224 */
    __IO uint32_t OS_REG10;                           /* Address Offset: 0x0228 */
    __IO uint32_t OS_REG11;                           /* Address Offset: 0x022C */
    __IO uint32_t RESET_FUNCTION_STATUS;              /* Address Offset: 0x0230 */
    __IO uint32_t RESET_FUNCTION_CLR;                 /* Address Offset: 0x0234 */
         uint32_t RESERVED0238[82];                   /* Address Offset: 0x0238 */
    __IO uint32_t SIG_DETECT_CON;                     /* Address Offset: 0x0380 */
         uint32_t RESERVED0384[3];                    /* Address Offset: 0x0384 */
    __IO uint32_t SIG_DETECT_STATUS;                  /* Address Offset: 0x0390 */
         uint32_t RESERVED0394[3];                    /* Address Offset: 0x0394 */
    __IO uint32_t SIG_DETECT_STATUS_CLEAR;            /* Address Offset: 0x03A0 */
         uint32_t RESERVED03A4[3];                    /* Address Offset: 0x03A4 */
    __IO uint32_t SDMMC_DET_COUNTER;                  /* Address Offset: 0x03B0 */
};
/* PMUCRU Register Structure Define */
struct PMUCRU_REG {
    __IO uint32_t PPLL_CON[5];                        /* Address Offset: 0x0000 */
    uint32_t RESERVED0014[11];                        /* Address Offset: 0x0014 */
    __IO uint32_t HPLL_CON[5];                        /* Address Offset: 0x0040 */
    uint32_t RESERVED0054[11];                        /* Address Offset: 0x0054 */
    __IO uint32_t MODE_CON00;                         /* Address Offset: 0x0080 */
    uint32_t RESERVED0084[31];                        /* Address Offset: 0x0084 */
    __IO uint32_t CRU_CLKSEL_CON[10];                 /* Address Offset: 0x0100 */
    uint32_t RESERVED0128[22];                        /* Address Offset: 0x0128 */
    __IO uint32_t CRU_CLKGATE_CON[3];                 /* Address Offset: 0x0180 */
    uint32_t RESERVED018C[29];                        /* Address Offset: 0x018C */
    __IO uint32_t CRU_SOFTRST_CON[1];                 /* Address Offset: 0x0200 */
};
/* CRU Register Structure Define */
struct CRU_REG {
    __IO uint32_t APLL_CON[5];                        /* Address Offset: 0x0000 */
    uint32_t RESERVED0014[3];                         /* Address Offset: 0x0014 */
    __IO uint32_t DPLL_CON[5];                        /* Address Offset: 0x0020 */
    uint32_t RESERVED0034[3];                         /* Address Offset: 0x0034 */
    __IO uint32_t GPLL_CON[5];                        /* Address Offset: 0x0040 */
    uint32_t RESERVED0054[3];                         /* Address Offset: 0x0054 */
    __IO uint32_t CPLL_CON[5];                        /* Address Offset: 0x0060 */
    uint32_t RESERVED0074[3];                         /* Address Offset: 0x0074 */
    __IO uint32_t NPLL_CON[2];                        /* Address Offset: 0x0080 */
    uint32_t RESERVED0088[6];                         /* Address Offset: 0x0088 */
    __IO uint32_t VPLL_CON[2];                        /* Address Offset: 0x00A0 */
    uint32_t RESERVED00A8[6];                         /* Address Offset: 0x00A8 */
    __IO uint32_t MODE_CON00;                         /* Address Offset: 0x00C0 */
    __IO uint32_t MISC_CON[3];                        /* Address Offset: 0x00C4 */
    __IO uint32_t GLB_CNT_TH;                         /* Address Offset: 0x00D0 */
    __IO uint32_t GLB_SRST_FST;                       /* Address Offset: 0x00D4 */
    __IO uint32_t GLB_SRST_SND;                       /* Address Offset: 0x00D8 */
    __IO uint32_t GLB_RST_CON;                        /* Address Offset: 0x00DC */
    __IO uint32_t GLB_RST_ST;                         /* Address Offset: 0x00E0 */
    uint32_t RESERVED00E4[7];                         /* Address Offset: 0x00E4 */
    __IO uint32_t CRU_CLKSEL_CON[85];                 /* Address Offset: 0x0100 */
    uint32_t RESERVED0254[43];                        /* Address Offset: 0x0254 */
    __IO uint32_t CRU_CLKGATE_CON[36];                /* Address Offset: 0x0300 */
    uint32_t RESERVED0390[28];                        /* Address Offset: 0x0390 */
    __IO uint32_t CRU_SOFTRST_CON[30];                /* Address Offset: 0x0400 */
    uint32_t RESERVED0478[2];                         /* Address Offset: 0x0478 */
    __IO uint32_t SSGTBL0_3;                          /* Address Offset: 0x0480 */
    __IO uint32_t SSGTBL4_7;                          /* Address Offset: 0x0484 */
    __IO uint32_t SSGTBL8_11;                         /* Address Offset: 0x0488 */
    __IO uint32_t SSGTBL12_15;                        /* Address Offset: 0x048C */
    __IO uint32_t SSGTBL16_19;                        /* Address Offset: 0x0490 */
    __IO uint32_t SSGTBL20_23;                        /* Address Offset: 0x0494 */
    __IO uint32_t SSGTBL24_27;                        /* Address Offset: 0x0498 */
    __IO uint32_t SSGTBL28_31;                        /* Address Offset: 0x049C */
    __IO uint32_t SSGTBL32_35;                        /* Address Offset: 0x04A0 */
    __IO uint32_t SSGTBL36_39;                        /* Address Offset: 0x04A4 */
    __IO uint32_t SSGTBL40_43;                        /* Address Offset: 0x04A8 */
    __IO uint32_t SSGTBL44_47;                        /* Address Offset: 0x04AC */
    __IO uint32_t SSGTBL48_51;                        /* Address Offset: 0x04B0 */
    __IO uint32_t SSGTBL52_55;                        /* Address Offset: 0x04B4 */
    __IO uint32_t SSGTBL56_59;                        /* Address Offset: 0x04B8 */
    __IO uint32_t SSGTBL60_63;                        /* Address Offset: 0x04BC */
    __IO uint32_t SSGTBL64_67;                        /* Address Offset: 0x04C0 */
    __IO uint32_t SSGTBL68_71;                        /* Address Offset: 0x04C4 */
    __IO uint32_t SSGTBL72_75;                        /* Address Offset: 0x04C8 */
    __IO uint32_t SSGTBL76_79;                        /* Address Offset: 0x04CC */
    __IO uint32_t SSGTBL80_83;                        /* Address Offset: 0x04D0 */
    __IO uint32_t SSGTBL84_87;                        /* Address Offset: 0x04D4 */
    __IO uint32_t SSGTBL88_91;                        /* Address Offset: 0x04D8 */
    __IO uint32_t SSGTBL92_95;                        /* Address Offset: 0x04DC */
    __IO uint32_t SSGTBL96_99;                        /* Address Offset: 0x04E0 */
    __IO uint32_t SSGTBL100_103;                      /* Address Offset: 0x04E4 */
    __IO uint32_t SSGTBL104_107;                      /* Address Offset: 0x04E8 */
    __IO uint32_t SSGTBL108_111;                      /* Address Offset: 0x04EC */
    __IO uint32_t SSGTBL112_115;                      /* Address Offset: 0x04F0 */
    __IO uint32_t SSGTBL116_119;                      /* Address Offset: 0x04F4 */
    __IO uint32_t SSGTBL120_123;                      /* Address Offset: 0x04F8 */
    __IO uint32_t SSGTBL124_127;                      /* Address Offset: 0x04FC */
    __IO uint32_t AUTOCS_CORE_CON0;                   /* Address Offset: 0x0500 */
    __IO uint32_t AUTOCS_CORE_CON1;                   /* Address Offset: 0x0504 */
    __IO uint32_t AUTOCS_GPU_CON0;                    /* Address Offset: 0x0508 */
    __IO uint32_t AUTOCS_GPU_CON1;                    /* Address Offset: 0x050C */
    __IO uint32_t AUTOCS_BUS_CON0;                    /* Address Offset: 0x0510 */
    __IO uint32_t AUTOCS_BUS_CON1;                    /* Address Offset: 0x0514 */
    __IO uint32_t AUTOCS_TOP_CON0;                    /* Address Offset: 0x0518 */
    __IO uint32_t AUTOCS_TOP_CON1;                    /* Address Offset: 0x051C */
    __IO uint32_t AUTOCS_RKVDEC_CON0;                 /* Address Offset: 0x0520 */
    __IO uint32_t AUTOCS_RKVDEC_CON1;                 /* Address Offset: 0x0524 */
    __IO uint32_t AUTOCS_RKVENC_CON0;                 /* Address Offset: 0x0528 */
    __IO uint32_t AUTOCS_RKVENC_CON1;                 /* Address Offset: 0x052C */
    __IO uint32_t AUTOCS_VPU_CON0;                    /* Address Offset: 0x0530 */
    __IO uint32_t AUTOCS_VPU_CON1;                    /* Address Offset: 0x0534 */
    __IO uint32_t AUTOCS_PERI_CON0;                   /* Address Offset: 0x0538 */
    __IO uint32_t AUTOCS_PERI_CON1;                   /* Address Offset: 0x053C */
    __IO uint32_t AUTOCS_GPLL_CON0;                   /* Address Offset: 0x0540 */
    __IO uint32_t AUTOCS_GPLL_CON1;                   /* Address Offset: 0x0544 */
    __IO uint32_t AUTOCS_CPLL_CON0;                   /* Address Offset: 0x0548 */
    __IO uint32_t AUTOCS_CPLL_CON1;                   /* Address Offset: 0x054C */
    uint32_t RESERVED0550[12];                        /* Address Offset: 0x0550 */
    __IO uint32_t SDMMC0_CON[2];                      /* Address Offset: 0x0580 */
    __IO uint32_t SDMMC1_CON[2];                      /* Address Offset: 0x0588 */
    __IO uint32_t SDMMC2_CON[2];                      /* Address Offset: 0x0590 */
    __IO uint32_t EMMC_CON[2];                        /* Address Offset: 0x0598 */
};
/* PMU Register Structure Define */
struct PMU_REG {
    __I  uint32_t VERSION;                            /* Address Offset: 0x0000 */
    __IO uint32_t PWR_CON;                            /* Address Offset: 0x0004 */
    __I  uint32_t MAIN_PWR_STATE;                     /* Address Offset: 0x0008 */
    __IO uint32_t INT_MASK_CON;                       /* Address Offset: 0x000C */
    __IO uint32_t WAKEUP_INT_CON;                     /* Address Offset: 0x0010 */
    __I  uint32_t WAKEUP_INT_ST;                      /* Address Offset: 0x0014 */
    __IO uint32_t WAKEUP_EDGE_CON;                    /* Address Offset: 0x0018 */
    __IO uint32_t WAKEUP_EDGE_ST;                     /* Address Offset: 0x001C */
         uint32_t RESERVED0020[8];                    /* Address Offset: 0x0020 */
    __IO uint32_t BUS_IDLE_CON0;                      /* Address Offset: 0x0040 */
    __IO uint32_t BUS_IDLE_CON1;                      /* Address Offset: 0x0044 */
         uint32_t RESERVED0048[2];                    /* Address Offset: 0x0048 */
    __IO uint32_t BUS_IDLE_SFTCON0;                   /* Address Offset: 0x0050 */
    __IO uint32_t BUS_IDLE_SFTCON1;                   /* Address Offset: 0x0054 */
         uint32_t RESERVED0058[2];                    /* Address Offset: 0x0058 */
    __I  uint32_t BUS_IDLE_ACK;                       /* Address Offset: 0x0060 */
         uint32_t RESERVED0064;                       /* Address Offset: 0x0064 */
    __I  uint32_t BUS_IDLE_ST;                        /* Address Offset: 0x0068 */
         uint32_t RESERVED006C;                       /* Address Offset: 0x006C */
    __IO uint32_t NOC_AUTO_CON0;                      /* Address Offset: 0x0070 */
    __IO uint32_t NOC_AUTO_CON1;                      /* Address Offset: 0x0074 */
         uint32_t RESERVED0078[2];                    /* Address Offset: 0x0078 */
    __IO uint32_t DDR_PWR_CON;                        /* Address Offset: 0x0080 */
    __IO uint32_t DDR_PWR_SFTCON;                     /* Address Offset: 0x0084 */
    __I  uint32_t DDR_PWR_STATE;                      /* Address Offset: 0x0088 */
    __I  uint32_t DDR_PWR_ST;                         /* Address Offset: 0x008C */
    __IO uint32_t PWR_GATE_CON;                       /* Address Offset: 0x0090 */
    __I  uint32_t PWR_GATE_STATE;                     /* Address Offset: 0x0094 */
    __I  uint32_t PWR_DWN_ST;                         /* Address Offset: 0x0098 */
         uint32_t RESERVED009C;                       /* Address Offset: 0x009C */
    __IO uint32_t PWR_GATE_SFTCON;                    /* Address Offset: 0x00A0 */
         uint32_t RESERVED00A4;                       /* Address Offset: 0x00A4 */
    __IO uint32_t VOL_GATE_SFTCON;                    /* Address Offset: 0x00A8 */
         uint32_t RESERVED00AC;                       /* Address Offset: 0x00AC */
    __IO uint32_t CRU_PWR_CON;                        /* Address Offset: 0x00B0 */
    __IO uint32_t CRU_PWR_SFTCON;                     /* Address Offset: 0x00B4 */
    __I  uint32_t CRU_PWR_STATE;                      /* Address Offset: 0x00B8 */
         uint32_t RESERVED00BC;                       /* Address Offset: 0x00BC */
    __IO uint32_t PLLPD_CON;                          /* Address Offset: 0x00C0 */
    __IO uint32_t PLLPD_SFTCON;                       /* Address Offset: 0x00C4 */
         uint32_t RESERVED00C8[2];                    /* Address Offset: 0x00C8 */
    __IO uint32_t INFO_TX_CON;                        /* Address Offset: 0x00D0 */
         uint32_t RESERVED00D4[11];                   /* Address Offset: 0x00D4 */
    __IO uint32_t DSU_STABLE_CNT;                     /* Address Offset: 0x0100 */
    __IO uint32_t PMIC_STABLE_CNT;                    /* Address Offset: 0x0104 */
    __IO uint32_t OSC_STABLE_CNT;                     /* Address Offset: 0x0108 */
    __IO uint32_t WAKEUP_RSTCLR_CNT;                  /* Address Offset: 0x010C */
    __IO uint32_t PLL_LOCK_CNT;                       /* Address Offset: 0x0110 */
         uint32_t RESERVED0114;                       /* Address Offset: 0x0114 */
    __IO uint32_t DSU_PWRUP_CNT;                      /* Address Offset: 0x0118 */
    __IO uint32_t DSU_PWRDN_CNT;                      /* Address Offset: 0x011C */
    __IO uint32_t GPU_VOLUP_CNT;                      /* Address Offset: 0x0120 */
    __IO uint32_t GPU_VOLDN_CNT;                      /* Address Offset: 0x0124 */
    __IO uint32_t WAKEUP_TIMEOUT_CNT;                 /* Address Offset: 0x0128 */
    __IO uint32_t PWM_SWITCH_CNT;                     /* Address Offset: 0x012C */
    __IO uint32_t DBG_RST_CNT;                        /* Address Offset: 0x0130 */
         uint32_t RESERVED0134[19];                   /* Address Offset: 0x0134 */
    __IO uint32_t SYS_REG0;                           /* Address Offset: 0x0180 */
    __IO uint32_t SYS_REG1;                           /* Address Offset: 0x0184 */
    __IO uint32_t SYS_REG2;                           /* Address Offset: 0x0188 */
    __IO uint32_t SYS_REG3;                           /* Address Offset: 0x018C */
    __IO uint32_t SYS_REG4;                           /* Address Offset: 0x0190 */
    __IO uint32_t SYS_REG5;                           /* Address Offset: 0x0194 */
    __IO uint32_t SYS_REG6;                           /* Address Offset: 0x0198 */
    __IO uint32_t SYS_REG7;                           /* Address Offset: 0x019C */
         uint32_t RESERVED01A0[88];                   /* Address Offset: 0x01A0 */
    __IO uint32_t DSU_PWR_CON;                        /* Address Offset: 0x0300 */
    __IO uint32_t DSU_PWR_SFTCON;                     /* Address Offset: 0x0304 */
    __IO uint32_t DSU_AUTO_CON;                       /* Address Offset: 0x0308 */
    __I  uint32_t DSU_PWR_STATE;                      /* Address Offset: 0x030C */
    __IO uint32_t CPU_AUTO_PWR_CON0;                  /* Address Offset: 0x0310 */
    __IO uint32_t CPU_AUTO_PWR_CON1;                  /* Address Offset: 0x0314 */
    __IO uint32_t CPU_PWR_SFTCON;                     /* Address Offset: 0x0318 */
    __I  uint32_t CLUSTER_PWR_ST;                     /* Address Offset: 0x031C */
    __IO uint32_t CLUSTER_IDLE_CON;                   /* Address Offset: 0x0320 */
    __IO uint32_t CLUSTER_IDLE_SFTCON;                /* Address Offset: 0x0324 */
    __I  uint32_t CLUSTER_IDLE_ACK;                   /* Address Offset: 0x0328 */
    __I  uint32_t CLUSTER_IDLE_ST;                    /* Address Offset: 0x032C */
    __IO uint32_t DBG_PWR_CON;                        /* Address Offset: 0x0330 */
};
/* TIMER Register Structure Define */
struct TIMER_REG {
    __IO uint32_t LOAD_COUNT[2];                      /* Address Offset: 0x0000 */
    __I  uint32_t CURRENT_VALUE[2];                   /* Address Offset: 0x0008 */
    __IO uint32_t CONTROLREG;                         /* Address Offset: 0x0010 */
         uint32_t RESERVED0014;                       /* Address Offset: 0x0014 */
    __IO uint32_t INTSTATUS;                          /* Address Offset: 0x0018 */
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
#endif /*  __ASSEMBLY__  */
/****************************************************************************************/
/*                                                                                      */
/*                                Module Address Section                                */
/*                                                                                      */
/****************************************************************************************/
/* Memory Base */
#define PMU_GRF_BASE        0xFDC20000U /* PMU_GRF base address */
#define PMUCRU_BASE         0xFDD00000U /* PMUCRU base address */
#define CRU_BASE            0xFDD20000U /* CRU base address */
#define PMU_BASE            0xFDD90000U /* PMU base address */
#define PMU_NS_BASE         0xFDD90000U /* PMU_NS base address */
#define TIMER0_BASE         0xFE5F0000U /* TIMER0 base address */
#define TIMER1_BASE         0xFE5F0020U /* TIMER1 base address */
#define TIMER2_BASE         0xFE5F0040U /* TIMER2 base address */
#define TIMER3_BASE         0xFE5F0060U /* TIMER3 base address */
#define TIMER4_BASE         0xFE5F0080U /* TIMER4 base address */
#define TIMER5_BASE         0xFE5F00A0U /* TIMER5 base address */
#define UART2_BASE          0xFE660000U /* UART2 base address */
#define TIMER6_BASE         0xFDD1C000U /* TIMER6 base address */
#define TIMER7_BASE         0xFDD1C020U /* TIMER7 base address */
/****************************************************************************************/
/*                                                                                      */
/*                               Module Variable Section                                */
/*                                                                                      */
/****************************************************************************************/
/* Module Variable Define */

#define PMU_GRF             ((struct PMU_GRF_REG *) PMU_GRF_BASE)
#define PMUCRU              ((struct PMUCRU_REG *) PMUCRU_BASE)
#define CRU                 ((struct CRU_REG *) CRU_BASE)
#define PMU                 ((struct PMU_REG *) PMU_BASE)
#define PMU_NS              ((struct PMU_NS_REG *) PMU_NS_BASE)
#define TIMER0              ((struct TIMER_REG *) TIMER0_BASE)
#define TIMER1              ((struct TIMER_REG *) TIMER1_BASE)
#define TIMER2              ((struct TIMER_REG *) TIMER2_BASE)
#define TIMER3              ((struct TIMER_REG *) TIMER3_BASE)
#define TIMER4              ((struct TIMER_REG *) TIMER4_BASE)
#define TIMER5              ((struct TIMER_REG *) TIMER5_BASE)
#define UART2               ((struct UART_REG *) UART2_BASE)
#define TIMER6              ((struct TIMER_REG *) TIMER6_BASE)
#define TIMER7              ((struct TIMER_REG *) TIMER7_BASE)

#define IS_PMU_GRF_INSTANCE(instance) ((instance) == PMU_GRF)
#define IS_PMUCRU_INSTANCE(instance) ((instance) == PMUCRU)
#define IS_CRU_INSTANCE(instance) ((instance) == CRU)
#define IS_PMU_INSTANCE(instance) ((instance) == PMU)
#define IS_PMU_NS_INSTANCE(instance) ((instance) == PMU_NS)
#define IS_TIMER_INSTANCE(instance) (((instance) == TIMER0) || ((instance) == TIMER1) || ((instance) == TIMER2) || ((instance) == TIMER3) || ((instance) == TIMER4) || ((instance) == TIMER5) || ((instance) == TIMER6) || ((instance) == TIMER7))
#define IS_UART_INSTANCE(instance) ((instance) == UART2)
/****************************************************************************************/
/*                                                                                      */
/*                               Register Bitmap Section                                */
/*                                                                                      */
/****************************************************************************************/
/****************************************PMU_GRF*****************************************/
/* GPIO0A_IOMUX_L */
#define PMU_GRF_GPIO0A_IOMUX_L_OFFSET                      (0x0U)
#define PMU_GRF_GPIO0A_IOMUX_L_GPIO0A0_SEL_SHIFT           (0U)
#define PMU_GRF_GPIO0A_IOMUX_L_GPIO0A0_SEL_MASK            (0x7U << PMU_GRF_GPIO0A_IOMUX_L_GPIO0A0_SEL_SHIFT)           /* 0x00000007 */
#define PMU_GRF_GPIO0A_IOMUX_L_GPIO0A1_SEL_SHIFT           (4U)
#define PMU_GRF_GPIO0A_IOMUX_L_GPIO0A1_SEL_MASK            (0x7U << PMU_GRF_GPIO0A_IOMUX_L_GPIO0A1_SEL_SHIFT)           /* 0x00000070 */
#define PMU_GRF_GPIO0A_IOMUX_L_GPIO0A2_SEL_SHIFT           (8U)
#define PMU_GRF_GPIO0A_IOMUX_L_GPIO0A2_SEL_MASK            (0x7U << PMU_GRF_GPIO0A_IOMUX_L_GPIO0A2_SEL_SHIFT)           /* 0x00000700 */
#define PMU_GRF_GPIO0A_IOMUX_L_GPIO0A3_SEL_SHIFT           (12U)
#define PMU_GRF_GPIO0A_IOMUX_L_GPIO0A3_SEL_MASK            (0x7U << PMU_GRF_GPIO0A_IOMUX_L_GPIO0A3_SEL_SHIFT)           /* 0x00007000 */
/* GPIO0A_IOMUX_H */
#define PMU_GRF_GPIO0A_IOMUX_H_OFFSET                      (0x4U)
#define PMU_GRF_GPIO0A_IOMUX_H_GPIO0A4_SEL_SHIFT           (0U)
#define PMU_GRF_GPIO0A_IOMUX_H_GPIO0A4_SEL_MASK            (0x7U << PMU_GRF_GPIO0A_IOMUX_H_GPIO0A4_SEL_SHIFT)           /* 0x00000007 */
#define PMU_GRF_GPIO0A_IOMUX_H_GPIO0A5_SEL_SHIFT           (4U)
#define PMU_GRF_GPIO0A_IOMUX_H_GPIO0A5_SEL_MASK            (0x7U << PMU_GRF_GPIO0A_IOMUX_H_GPIO0A5_SEL_SHIFT)           /* 0x00000070 */
#define PMU_GRF_GPIO0A_IOMUX_H_GPIO0A6_SEL_SHIFT           (8U)
#define PMU_GRF_GPIO0A_IOMUX_H_GPIO0A6_SEL_MASK            (0x7U << PMU_GRF_GPIO0A_IOMUX_H_GPIO0A6_SEL_SHIFT)           /* 0x00000700 */
#define PMU_GRF_GPIO0A_IOMUX_H_GPIO0A7_SEL_SHIFT           (12U)
#define PMU_GRF_GPIO0A_IOMUX_H_GPIO0A7_SEL_MASK            (0x7U << PMU_GRF_GPIO0A_IOMUX_H_GPIO0A7_SEL_SHIFT)           /* 0x00007000 */
/* GPIO0B_IOMUX_L */
#define PMU_GRF_GPIO0B_IOMUX_L_OFFSET                      (0x8U)
#define PMU_GRF_GPIO0B_IOMUX_L_GPIO0B0_SEL_SHIFT           (0U)
#define PMU_GRF_GPIO0B_IOMUX_L_GPIO0B0_SEL_MASK            (0x7U << PMU_GRF_GPIO0B_IOMUX_L_GPIO0B0_SEL_SHIFT)           /* 0x00000007 */
#define PMU_GRF_GPIO0B_IOMUX_L_GPIO0B1_SEL_SHIFT           (4U)
#define PMU_GRF_GPIO0B_IOMUX_L_GPIO0B1_SEL_MASK            (0x7U << PMU_GRF_GPIO0B_IOMUX_L_GPIO0B1_SEL_SHIFT)           /* 0x00000070 */
#define PMU_GRF_GPIO0B_IOMUX_L_GPIO0B2_SEL_SHIFT           (8U)
#define PMU_GRF_GPIO0B_IOMUX_L_GPIO0B2_SEL_MASK            (0x7U << PMU_GRF_GPIO0B_IOMUX_L_GPIO0B2_SEL_SHIFT)           /* 0x00000700 */
#define PMU_GRF_GPIO0B_IOMUX_L_GPIO0B3_SEL_SHIFT           (12U)
#define PMU_GRF_GPIO0B_IOMUX_L_GPIO0B3_SEL_MASK            (0x7U << PMU_GRF_GPIO0B_IOMUX_L_GPIO0B3_SEL_SHIFT)           /* 0x00007000 */
/* GPIO0B_IOMUX_H */
#define PMU_GRF_GPIO0B_IOMUX_H_OFFSET                      (0xCU)
#define PMU_GRF_GPIO0B_IOMUX_H_GPIO0B4_SEL_SHIFT           (0U)
#define PMU_GRF_GPIO0B_IOMUX_H_GPIO0B4_SEL_MASK            (0x7U << PMU_GRF_GPIO0B_IOMUX_H_GPIO0B4_SEL_SHIFT)           /* 0x00000007 */
#define PMU_GRF_GPIO0B_IOMUX_H_GPIO0B5_SEL_SHIFT           (4U)
#define PMU_GRF_GPIO0B_IOMUX_H_GPIO0B5_SEL_MASK            (0x7U << PMU_GRF_GPIO0B_IOMUX_H_GPIO0B5_SEL_SHIFT)           /* 0x00000070 */
#define PMU_GRF_GPIO0B_IOMUX_H_GPIO0B6_SEL_SHIFT           (8U)
#define PMU_GRF_GPIO0B_IOMUX_H_GPIO0B6_SEL_MASK            (0x7U << PMU_GRF_GPIO0B_IOMUX_H_GPIO0B6_SEL_SHIFT)           /* 0x00000700 */
#define PMU_GRF_GPIO0B_IOMUX_H_GPIO0B7_SEL_SHIFT           (12U)
#define PMU_GRF_GPIO0B_IOMUX_H_GPIO0B7_SEL_MASK            (0x7U << PMU_GRF_GPIO0B_IOMUX_H_GPIO0B7_SEL_SHIFT)           /* 0x00007000 */
/* GPIO0C_IOMUX_L */
#define PMU_GRF_GPIO0C_IOMUX_L_OFFSET                      (0x10U)
#define PMU_GRF_GPIO0C_IOMUX_L_GPIO0C0_SEL_SHIFT           (0U)
#define PMU_GRF_GPIO0C_IOMUX_L_GPIO0C0_SEL_MASK            (0x7U << PMU_GRF_GPIO0C_IOMUX_L_GPIO0C0_SEL_SHIFT)           /* 0x00000007 */
#define PMU_GRF_GPIO0C_IOMUX_L_GPIO0C1_SEL_SHIFT           (4U)
#define PMU_GRF_GPIO0C_IOMUX_L_GPIO0C1_SEL_MASK            (0x7U << PMU_GRF_GPIO0C_IOMUX_L_GPIO0C1_SEL_SHIFT)           /* 0x00000070 */
#define PMU_GRF_GPIO0C_IOMUX_L_GPIO0C2_SEL_SHIFT           (8U)
#define PMU_GRF_GPIO0C_IOMUX_L_GPIO0C2_SEL_MASK            (0x7U << PMU_GRF_GPIO0C_IOMUX_L_GPIO0C2_SEL_SHIFT)           /* 0x00000700 */
#define PMU_GRF_GPIO0C_IOMUX_L_GPIO0C3_SEL_SHIFT           (12U)
#define PMU_GRF_GPIO0C_IOMUX_L_GPIO0C3_SEL_MASK            (0x7U << PMU_GRF_GPIO0C_IOMUX_L_GPIO0C3_SEL_SHIFT)           /* 0x00007000 */
/* GPIO0C_IOMUX_H */
#define PMU_GRF_GPIO0C_IOMUX_H_OFFSET                      (0x14U)
#define PMU_GRF_GPIO0C_IOMUX_H_GPIO0C4_SEL_SHIFT           (0U)
#define PMU_GRF_GPIO0C_IOMUX_H_GPIO0C4_SEL_MASK            (0x7U << PMU_GRF_GPIO0C_IOMUX_H_GPIO0C4_SEL_SHIFT)           /* 0x00000007 */
#define PMU_GRF_GPIO0C_IOMUX_H_GPIO0C5_SEL_SHIFT           (4U)
#define PMU_GRF_GPIO0C_IOMUX_H_GPIO0C5_SEL_MASK            (0x7U << PMU_GRF_GPIO0C_IOMUX_H_GPIO0C5_SEL_SHIFT)           /* 0x00000070 */
#define PMU_GRF_GPIO0C_IOMUX_H_GPIO0C6_SEL_SHIFT           (8U)
#define PMU_GRF_GPIO0C_IOMUX_H_GPIO0C6_SEL_MASK            (0x7U << PMU_GRF_GPIO0C_IOMUX_H_GPIO0C6_SEL_SHIFT)           /* 0x00000700 */
#define PMU_GRF_GPIO0C_IOMUX_H_GPIO0C7_SEL_SHIFT           (12U)
#define PMU_GRF_GPIO0C_IOMUX_H_GPIO0C7_SEL_MASK            (0x7U << PMU_GRF_GPIO0C_IOMUX_H_GPIO0C7_SEL_SHIFT)           /* 0x00007000 */
/* GPIO0D_IOMUX_L */
#define PMU_GRF_GPIO0D_IOMUX_L_OFFSET                      (0x18U)
#define PMU_GRF_GPIO0D_IOMUX_L_GPIO0D0_SEL_SHIFT           (0U)
#define PMU_GRF_GPIO0D_IOMUX_L_GPIO0D0_SEL_MASK            (0x7U << PMU_GRF_GPIO0D_IOMUX_L_GPIO0D0_SEL_SHIFT)           /* 0x00000007 */
#define PMU_GRF_GPIO0D_IOMUX_L_GPIO0D1_SEL_SHIFT           (4U)
#define PMU_GRF_GPIO0D_IOMUX_L_GPIO0D1_SEL_MASK            (0x7U << PMU_GRF_GPIO0D_IOMUX_L_GPIO0D1_SEL_SHIFT)           /* 0x00000070 */
#define PMU_GRF_GPIO0D_IOMUX_L_GPIO0D3_SEL_SHIFT           (12U)
#define PMU_GRF_GPIO0D_IOMUX_L_GPIO0D3_SEL_MASK            (0x7U << PMU_GRF_GPIO0D_IOMUX_L_GPIO0D3_SEL_SHIFT)           /* 0x00007000 */
/* GPIO0D_IOMUX_H */
#define PMU_GRF_GPIO0D_IOMUX_H_OFFSET                      (0x1CU)
#define PMU_GRF_GPIO0D_IOMUX_H_GPIO0D4_SEL_SHIFT           (0U)
#define PMU_GRF_GPIO0D_IOMUX_H_GPIO0D4_SEL_MASK            (0x7U << PMU_GRF_GPIO0D_IOMUX_H_GPIO0D4_SEL_SHIFT)           /* 0x00000007 */
#define PMU_GRF_GPIO0D_IOMUX_H_GPIO0D5_SEL_SHIFT           (4U)
#define PMU_GRF_GPIO0D_IOMUX_H_GPIO0D5_SEL_MASK            (0x7U << PMU_GRF_GPIO0D_IOMUX_H_GPIO0D5_SEL_SHIFT)           /* 0x00000070 */
#define PMU_GRF_GPIO0D_IOMUX_H_GPIO0D6_SEL_SHIFT           (8U)
#define PMU_GRF_GPIO0D_IOMUX_H_GPIO0D6_SEL_MASK            (0x7U << PMU_GRF_GPIO0D_IOMUX_H_GPIO0D6_SEL_SHIFT)           /* 0x00000700 */
/* GPIO0A_P */
#define PMU_GRF_GPIO0A_P_OFFSET                            (0x20U)
#define PMU_GRF_GPIO0A_P_GPIO0A0_P_SHIFT                   (0U)
#define PMU_GRF_GPIO0A_P_GPIO0A0_P_MASK                    (0x3U << PMU_GRF_GPIO0A_P_GPIO0A0_P_SHIFT)                   /* 0x00000003 */
#define PMU_GRF_GPIO0A_P_GPIO0A1_P_SHIFT                   (2U)
#define PMU_GRF_GPIO0A_P_GPIO0A1_P_MASK                    (0x3U << PMU_GRF_GPIO0A_P_GPIO0A1_P_SHIFT)                   /* 0x0000000C */
#define PMU_GRF_GPIO0A_P_GPIO0A2_P_SHIFT                   (4U)
#define PMU_GRF_GPIO0A_P_GPIO0A2_P_MASK                    (0x3U << PMU_GRF_GPIO0A_P_GPIO0A2_P_SHIFT)                   /* 0x00000030 */
#define PMU_GRF_GPIO0A_P_GPIO0A3_P_SHIFT                   (6U)
#define PMU_GRF_GPIO0A_P_GPIO0A3_P_MASK                    (0x3U << PMU_GRF_GPIO0A_P_GPIO0A3_P_SHIFT)                   /* 0x000000C0 */
#define PMU_GRF_GPIO0A_P_GPIO0A4_P_SHIFT                   (8U)
#define PMU_GRF_GPIO0A_P_GPIO0A4_P_MASK                    (0x3U << PMU_GRF_GPIO0A_P_GPIO0A4_P_SHIFT)                   /* 0x00000300 */
#define PMU_GRF_GPIO0A_P_GPIO0A5_P_SHIFT                   (10U)
#define PMU_GRF_GPIO0A_P_GPIO0A5_P_MASK                    (0x3U << PMU_GRF_GPIO0A_P_GPIO0A5_P_SHIFT)                   /* 0x00000C00 */
#define PMU_GRF_GPIO0A_P_GPIO0A6_P_SHIFT                   (12U)
#define PMU_GRF_GPIO0A_P_GPIO0A6_P_MASK                    (0x3U << PMU_GRF_GPIO0A_P_GPIO0A6_P_SHIFT)                   /* 0x00003000 */
#define PMU_GRF_GPIO0A_P_GPIO0A7_P_SHIFT                   (14U)
#define PMU_GRF_GPIO0A_P_GPIO0A7_P_MASK                    (0x3U << PMU_GRF_GPIO0A_P_GPIO0A7_P_SHIFT)                   /* 0x0000C000 */
/* GPIO0B_P */
#define PMU_GRF_GPIO0B_P_OFFSET                            (0x24U)
#define PMU_GRF_GPIO0B_P_GPIO0B0_P_SHIFT                   (0U)
#define PMU_GRF_GPIO0B_P_GPIO0B0_P_MASK                    (0x3U << PMU_GRF_GPIO0B_P_GPIO0B0_P_SHIFT)                   /* 0x00000003 */
#define PMU_GRF_GPIO0B_P_GPIO0B1_P_SHIFT                   (2U)
#define PMU_GRF_GPIO0B_P_GPIO0B1_P_MASK                    (0x3U << PMU_GRF_GPIO0B_P_GPIO0B1_P_SHIFT)                   /* 0x0000000C */
#define PMU_GRF_GPIO0B_P_GPIO0B2_P_SHIFT                   (4U)
#define PMU_GRF_GPIO0B_P_GPIO0B2_P_MASK                    (0x3U << PMU_GRF_GPIO0B_P_GPIO0B2_P_SHIFT)                   /* 0x00000030 */
#define PMU_GRF_GPIO0B_P_GPIO0B3_P_SHIFT                   (6U)
#define PMU_GRF_GPIO0B_P_GPIO0B3_P_MASK                    (0x3U << PMU_GRF_GPIO0B_P_GPIO0B3_P_SHIFT)                   /* 0x000000C0 */
#define PMU_GRF_GPIO0B_P_GPIO0B4_P_SHIFT                   (8U)
#define PMU_GRF_GPIO0B_P_GPIO0B4_P_MASK                    (0x3U << PMU_GRF_GPIO0B_P_GPIO0B4_P_SHIFT)                   /* 0x00000300 */
#define PMU_GRF_GPIO0B_P_GPIO0B5_P_SHIFT                   (10U)
#define PMU_GRF_GPIO0B_P_GPIO0B5_P_MASK                    (0x3U << PMU_GRF_GPIO0B_P_GPIO0B5_P_SHIFT)                   /* 0x00000C00 */
#define PMU_GRF_GPIO0B_P_GPIO0B6_P_SHIFT                   (12U)
#define PMU_GRF_GPIO0B_P_GPIO0B6_P_MASK                    (0x3U << PMU_GRF_GPIO0B_P_GPIO0B6_P_SHIFT)                   /* 0x00003000 */
#define PMU_GRF_GPIO0B_P_GPIO0B7_P_SHIFT                   (14U)
#define PMU_GRF_GPIO0B_P_GPIO0B7_P_MASK                    (0x3U << PMU_GRF_GPIO0B_P_GPIO0B7_P_SHIFT)                   /* 0x0000C000 */
/* GPIO0C_P */
#define PMU_GRF_GPIO0C_P_OFFSET                            (0x28U)
#define PMU_GRF_GPIO0C_P_GPIO0C0_P_SHIFT                   (0U)
#define PMU_GRF_GPIO0C_P_GPIO0C0_P_MASK                    (0x3U << PMU_GRF_GPIO0C_P_GPIO0C0_P_SHIFT)                   /* 0x00000003 */
#define PMU_GRF_GPIO0C_P_GPIO0C1_P_SHIFT                   (2U)
#define PMU_GRF_GPIO0C_P_GPIO0C1_P_MASK                    (0x3U << PMU_GRF_GPIO0C_P_GPIO0C1_P_SHIFT)                   /* 0x0000000C */
#define PMU_GRF_GPIO0C_P_GPIO0C2_P_SHIFT                   (4U)
#define PMU_GRF_GPIO0C_P_GPIO0C2_P_MASK                    (0x3U << PMU_GRF_GPIO0C_P_GPIO0C2_P_SHIFT)                   /* 0x00000030 */
#define PMU_GRF_GPIO0C_P_GPIO0C3_P_SHIFT                   (6U)
#define PMU_GRF_GPIO0C_P_GPIO0C3_P_MASK                    (0x3U << PMU_GRF_GPIO0C_P_GPIO0C3_P_SHIFT)                   /* 0x000000C0 */
#define PMU_GRF_GPIO0C_P_GPIO0C4_P_SHIFT                   (8U)
#define PMU_GRF_GPIO0C_P_GPIO0C4_P_MASK                    (0x3U << PMU_GRF_GPIO0C_P_GPIO0C4_P_SHIFT)                   /* 0x00000300 */
#define PMU_GRF_GPIO0C_P_GPIO0C5_P_SHIFT                   (10U)
#define PMU_GRF_GPIO0C_P_GPIO0C5_P_MASK                    (0x3U << PMU_GRF_GPIO0C_P_GPIO0C5_P_SHIFT)                   /* 0x00000C00 */
#define PMU_GRF_GPIO0C_P_GPIO0C6_P_SHIFT                   (12U)
#define PMU_GRF_GPIO0C_P_GPIO0C6_P_MASK                    (0x3U << PMU_GRF_GPIO0C_P_GPIO0C6_P_SHIFT)                   /* 0x00003000 */
#define PMU_GRF_GPIO0C_P_GPIO0C7_P_SHIFT                   (14U)
#define PMU_GRF_GPIO0C_P_GPIO0C7_P_MASK                    (0x3U << PMU_GRF_GPIO0C_P_GPIO0C7_P_SHIFT)                   /* 0x0000C000 */
/* GPIO0D_P */
#define PMU_GRF_GPIO0D_P_OFFSET                            (0x2CU)
#define PMU_GRF_GPIO0D_P_GPIO0D0_P_SHIFT                   (0U)
#define PMU_GRF_GPIO0D_P_GPIO0D0_P_MASK                    (0x3U << PMU_GRF_GPIO0D_P_GPIO0D0_P_SHIFT)                   /* 0x00000003 */
#define PMU_GRF_GPIO0D_P_GPIO0D1_P_SHIFT                   (2U)
#define PMU_GRF_GPIO0D_P_GPIO0D1_P_MASK                    (0x3U << PMU_GRF_GPIO0D_P_GPIO0D1_P_SHIFT)                   /* 0x0000000C */
#define PMU_GRF_GPIO0D_P_GPIO0D3_P_SHIFT                   (6U)
#define PMU_GRF_GPIO0D_P_GPIO0D3_P_MASK                    (0x3U << PMU_GRF_GPIO0D_P_GPIO0D3_P_SHIFT)                   /* 0x000000C0 */
#define PMU_GRF_GPIO0D_P_GPIO0D4_P_SHIFT                   (8U)
#define PMU_GRF_GPIO0D_P_GPIO0D4_P_MASK                    (0x3U << PMU_GRF_GPIO0D_P_GPIO0D4_P_SHIFT)                   /* 0x00000300 */
#define PMU_GRF_GPIO0D_P_GPIO0D5_P_SHIFT                   (10U)
#define PMU_GRF_GPIO0D_P_GPIO0D5_P_MASK                    (0x3U << PMU_GRF_GPIO0D_P_GPIO0D5_P_SHIFT)                   /* 0x00000C00 */
#define PMU_GRF_GPIO0D_P_GPIO0D6_P_SHIFT                   (12U)
#define PMU_GRF_GPIO0D_P_GPIO0D6_P_MASK                    (0x3U << PMU_GRF_GPIO0D_P_GPIO0D6_P_SHIFT)                   /* 0x00003000 */
/* GPIO0A_IE */
#define PMU_GRF_GPIO0A_IE_OFFSET                           (0x30U)
#define PMU_GRF_GPIO0A_IE_GPIO0A0_IE_SHIFT                 (0U)
#define PMU_GRF_GPIO0A_IE_GPIO0A0_IE_MASK                  (0x3U << PMU_GRF_GPIO0A_IE_GPIO0A0_IE_SHIFT)                 /* 0x00000003 */
#define PMU_GRF_GPIO0A_IE_GPIO0A1_IE_SHIFT                 (2U)
#define PMU_GRF_GPIO0A_IE_GPIO0A1_IE_MASK                  (0x3U << PMU_GRF_GPIO0A_IE_GPIO0A1_IE_SHIFT)                 /* 0x0000000C */
#define PMU_GRF_GPIO0A_IE_GPIO0A2_IE_SHIFT                 (4U)
#define PMU_GRF_GPIO0A_IE_GPIO0A2_IE_MASK                  (0x3U << PMU_GRF_GPIO0A_IE_GPIO0A2_IE_SHIFT)                 /* 0x00000030 */
#define PMU_GRF_GPIO0A_IE_GPIO0A3_IE_SHIFT                 (6U)
#define PMU_GRF_GPIO0A_IE_GPIO0A3_IE_MASK                  (0x3U << PMU_GRF_GPIO0A_IE_GPIO0A3_IE_SHIFT)                 /* 0x000000C0 */
#define PMU_GRF_GPIO0A_IE_GPIO0A4_IE_SHIFT                 (8U)
#define PMU_GRF_GPIO0A_IE_GPIO0A4_IE_MASK                  (0x3U << PMU_GRF_GPIO0A_IE_GPIO0A4_IE_SHIFT)                 /* 0x00000300 */
#define PMU_GRF_GPIO0A_IE_GPIO0A5_IE_SHIFT                 (10U)
#define PMU_GRF_GPIO0A_IE_GPIO0A5_IE_MASK                  (0x3U << PMU_GRF_GPIO0A_IE_GPIO0A5_IE_SHIFT)                 /* 0x00000C00 */
#define PMU_GRF_GPIO0A_IE_GPIO0A6_IE_SHIFT                 (12U)
#define PMU_GRF_GPIO0A_IE_GPIO0A6_IE_MASK                  (0x3U << PMU_GRF_GPIO0A_IE_GPIO0A6_IE_SHIFT)                 /* 0x00003000 */
#define PMU_GRF_GPIO0A_IE_GPIO0A7_IE_SHIFT                 (14U)
#define PMU_GRF_GPIO0A_IE_GPIO0A7_IE_MASK                  (0x3U << PMU_GRF_GPIO0A_IE_GPIO0A7_IE_SHIFT)                 /* 0x0000C000 */
/* GPIO0B_IE */
#define PMU_GRF_GPIO0B_IE_OFFSET                           (0x34U)
#define PMU_GRF_GPIO0B_IE_GPIO0B0_IE_SHIFT                 (0U)
#define PMU_GRF_GPIO0B_IE_GPIO0B0_IE_MASK                  (0x3U << PMU_GRF_GPIO0B_IE_GPIO0B0_IE_SHIFT)                 /* 0x00000003 */
#define PMU_GRF_GPIO0B_IE_GPIO0B1_IE_SHIFT                 (2U)
#define PMU_GRF_GPIO0B_IE_GPIO0B1_IE_MASK                  (0x3U << PMU_GRF_GPIO0B_IE_GPIO0B1_IE_SHIFT)                 /* 0x0000000C */
#define PMU_GRF_GPIO0B_IE_GPIO0B2_IE_SHIFT                 (4U)
#define PMU_GRF_GPIO0B_IE_GPIO0B2_IE_MASK                  (0x3U << PMU_GRF_GPIO0B_IE_GPIO0B2_IE_SHIFT)                 /* 0x00000030 */
#define PMU_GRF_GPIO0B_IE_GPIO0B3_IE_SHIFT                 (6U)
#define PMU_GRF_GPIO0B_IE_GPIO0B3_IE_MASK                  (0x3U << PMU_GRF_GPIO0B_IE_GPIO0B3_IE_SHIFT)                 /* 0x000000C0 */
#define PMU_GRF_GPIO0B_IE_GPIO0B4_IE_SHIFT                 (8U)
#define PMU_GRF_GPIO0B_IE_GPIO0B4_IE_MASK                  (0x3U << PMU_GRF_GPIO0B_IE_GPIO0B4_IE_SHIFT)                 /* 0x00000300 */
#define PMU_GRF_GPIO0B_IE_GPIO0B5_IE_SHIFT                 (10U)
#define PMU_GRF_GPIO0B_IE_GPIO0B5_IE_MASK                  (0x3U << PMU_GRF_GPIO0B_IE_GPIO0B5_IE_SHIFT)                 /* 0x00000C00 */
#define PMU_GRF_GPIO0B_IE_GPIO0B6_IE_SHIFT                 (12U)
#define PMU_GRF_GPIO0B_IE_GPIO0B6_IE_MASK                  (0x3U << PMU_GRF_GPIO0B_IE_GPIO0B6_IE_SHIFT)                 /* 0x00003000 */
#define PMU_GRF_GPIO0B_IE_GPIO0B7_IE_SHIFT                 (14U)
#define PMU_GRF_GPIO0B_IE_GPIO0B7_IE_MASK                  (0x3U << PMU_GRF_GPIO0B_IE_GPIO0B7_IE_SHIFT)                 /* 0x0000C000 */
/* GPIO0C_IE */
#define PMU_GRF_GPIO0C_IE_OFFSET                           (0x38U)
#define PMU_GRF_GPIO0C_IE_GPIO0C0_IE_SHIFT                 (0U)
#define PMU_GRF_GPIO0C_IE_GPIO0C0_IE_MASK                  (0x3U << PMU_GRF_GPIO0C_IE_GPIO0C0_IE_SHIFT)                 /* 0x00000003 */
#define PMU_GRF_GPIO0C_IE_GPIO0C1_IE_SHIFT                 (2U)
#define PMU_GRF_GPIO0C_IE_GPIO0C1_IE_MASK                  (0x3U << PMU_GRF_GPIO0C_IE_GPIO0C1_IE_SHIFT)                 /* 0x0000000C */
#define PMU_GRF_GPIO0C_IE_GPIO0C2_IE_SHIFT                 (4U)
#define PMU_GRF_GPIO0C_IE_GPIO0C2_IE_MASK                  (0x3U << PMU_GRF_GPIO0C_IE_GPIO0C2_IE_SHIFT)                 /* 0x00000030 */
#define PMU_GRF_GPIO0C_IE_GPIO0C3_IE_SHIFT                 (6U)
#define PMU_GRF_GPIO0C_IE_GPIO0C3_IE_MASK                  (0x3U << PMU_GRF_GPIO0C_IE_GPIO0C3_IE_SHIFT)                 /* 0x000000C0 */
#define PMU_GRF_GPIO0C_IE_GPIO0C4_IE_SHIFT                 (8U)
#define PMU_GRF_GPIO0C_IE_GPIO0C4_IE_MASK                  (0x3U << PMU_GRF_GPIO0C_IE_GPIO0C4_IE_SHIFT)                 /* 0x00000300 */
#define PMU_GRF_GPIO0C_IE_GPIO0C5_IE_SHIFT                 (10U)
#define PMU_GRF_GPIO0C_IE_GPIO0C5_IE_MASK                  (0x3U << PMU_GRF_GPIO0C_IE_GPIO0C5_IE_SHIFT)                 /* 0x00000C00 */
#define PMU_GRF_GPIO0C_IE_GPIO0C6_IE_SHIFT                 (12U)
#define PMU_GRF_GPIO0C_IE_GPIO0C6_IE_MASK                  (0x3U << PMU_GRF_GPIO0C_IE_GPIO0C6_IE_SHIFT)                 /* 0x00003000 */
#define PMU_GRF_GPIO0C_IE_GPIO0C7_IE_SHIFT                 (14U)
#define PMU_GRF_GPIO0C_IE_GPIO0C7_IE_MASK                  (0x3U << PMU_GRF_GPIO0C_IE_GPIO0C7_IE_SHIFT)                 /* 0x0000C000 */
/* GPIO0D_IE */
#define PMU_GRF_GPIO0D_IE_OFFSET                           (0x3CU)
#define PMU_GRF_GPIO0D_IE_GPIO0D0_IE_SHIFT                 (0U)
#define PMU_GRF_GPIO0D_IE_GPIO0D0_IE_MASK                  (0x3U << PMU_GRF_GPIO0D_IE_GPIO0D0_IE_SHIFT)                 /* 0x00000003 */
#define PMU_GRF_GPIO0D_IE_GPIO0D1_IE_SHIFT                 (2U)
#define PMU_GRF_GPIO0D_IE_GPIO0D1_IE_MASK                  (0x3U << PMU_GRF_GPIO0D_IE_GPIO0D1_IE_SHIFT)                 /* 0x0000000C */
/* GPIO0A_OPD */
#define PMU_GRF_GPIO0A_OPD_OFFSET                          (0x40U)
#define PMU_GRF_GPIO0A_OPD_GPIO0A0_OPD_SHIFT               (0U)
#define PMU_GRF_GPIO0A_OPD_GPIO0A0_OPD_MASK                (0x1U << PMU_GRF_GPIO0A_OPD_GPIO0A0_OPD_SHIFT)               /* 0x00000001 */
#define PMU_GRF_GPIO0A_OPD_GPIO0A1_OPD_SHIFT               (1U)
#define PMU_GRF_GPIO0A_OPD_GPIO0A1_OPD_MASK                (0x1U << PMU_GRF_GPIO0A_OPD_GPIO0A1_OPD_SHIFT)               /* 0x00000002 */
#define PMU_GRF_GPIO0A_OPD_GPIO0A2_OPD_SHIFT               (2U)
#define PMU_GRF_GPIO0A_OPD_GPIO0A2_OPD_MASK                (0x1U << PMU_GRF_GPIO0A_OPD_GPIO0A2_OPD_SHIFT)               /* 0x00000004 */
#define PMU_GRF_GPIO0A_OPD_GPIO0A3_OPD_SHIFT               (3U)
#define PMU_GRF_GPIO0A_OPD_GPIO0A3_OPD_MASK                (0x1U << PMU_GRF_GPIO0A_OPD_GPIO0A3_OPD_SHIFT)               /* 0x00000008 */
#define PMU_GRF_GPIO0A_OPD_GPIO0A4_OPD_SHIFT               (4U)
#define PMU_GRF_GPIO0A_OPD_GPIO0A4_OPD_MASK                (0x1U << PMU_GRF_GPIO0A_OPD_GPIO0A4_OPD_SHIFT)               /* 0x00000010 */
#define PMU_GRF_GPIO0A_OPD_GPIO0A5_OPD_SHIFT               (5U)
#define PMU_GRF_GPIO0A_OPD_GPIO0A5_OPD_MASK                (0x1U << PMU_GRF_GPIO0A_OPD_GPIO0A5_OPD_SHIFT)               /* 0x00000020 */
#define PMU_GRF_GPIO0A_OPD_GPIO0A6_OPD_SHIFT               (6U)
#define PMU_GRF_GPIO0A_OPD_GPIO0A6_OPD_MASK                (0x1U << PMU_GRF_GPIO0A_OPD_GPIO0A6_OPD_SHIFT)               /* 0x00000040 */
#define PMU_GRF_GPIO0A_OPD_GPIO0A7_OPD_SHIFT               (7U)
#define PMU_GRF_GPIO0A_OPD_GPIO0A7_OPD_MASK                (0x1U << PMU_GRF_GPIO0A_OPD_GPIO0A7_OPD_SHIFT)               /* 0x00000080 */
/* GPIO0B_OPD */
#define PMU_GRF_GPIO0B_OPD_OFFSET                          (0x44U)
#define PMU_GRF_GPIO0B_OPD_GPIO0B0_OPD_SHIFT               (0U)
#define PMU_GRF_GPIO0B_OPD_GPIO0B0_OPD_MASK                (0x1U << PMU_GRF_GPIO0B_OPD_GPIO0B0_OPD_SHIFT)               /* 0x00000001 */
#define PMU_GRF_GPIO0B_OPD_GPIO0B1_OPD_SHIFT               (1U)
#define PMU_GRF_GPIO0B_OPD_GPIO0B1_OPD_MASK                (0x1U << PMU_GRF_GPIO0B_OPD_GPIO0B1_OPD_SHIFT)               /* 0x00000002 */
#define PMU_GRF_GPIO0B_OPD_GPIO0B2_OPD_SHIFT               (2U)
#define PMU_GRF_GPIO0B_OPD_GPIO0B2_OPD_MASK                (0x1U << PMU_GRF_GPIO0B_OPD_GPIO0B2_OPD_SHIFT)               /* 0x00000004 */
#define PMU_GRF_GPIO0B_OPD_GPIO0B3_OPD_SHIFT               (3U)
#define PMU_GRF_GPIO0B_OPD_GPIO0B3_OPD_MASK                (0x1U << PMU_GRF_GPIO0B_OPD_GPIO0B3_OPD_SHIFT)               /* 0x00000008 */
#define PMU_GRF_GPIO0B_OPD_GPIO0B4_OPD_SHIFT               (4U)
#define PMU_GRF_GPIO0B_OPD_GPIO0B4_OPD_MASK                (0x1U << PMU_GRF_GPIO0B_OPD_GPIO0B4_OPD_SHIFT)               /* 0x00000010 */
#define PMU_GRF_GPIO0B_OPD_GPIO0B5_OPD_SHIFT               (5U)
#define PMU_GRF_GPIO0B_OPD_GPIO0B5_OPD_MASK                (0x1U << PMU_GRF_GPIO0B_OPD_GPIO0B5_OPD_SHIFT)               /* 0x00000020 */
#define PMU_GRF_GPIO0B_OPD_GPIO0B6_OPD_SHIFT               (6U)
#define PMU_GRF_GPIO0B_OPD_GPIO0B6_OPD_MASK                (0x1U << PMU_GRF_GPIO0B_OPD_GPIO0B6_OPD_SHIFT)               /* 0x00000040 */
#define PMU_GRF_GPIO0B_OPD_GPIO0B7_OPD_SHIFT               (7U)
#define PMU_GRF_GPIO0B_OPD_GPIO0B7_OPD_MASK                (0x1U << PMU_GRF_GPIO0B_OPD_GPIO0B7_OPD_SHIFT)               /* 0x00000080 */
/* GPIO0C_OPD */
#define PMU_GRF_GPIO0C_OPD_OFFSET                          (0x48U)
#define PMU_GRF_GPIO0C_OPD_GPIO0C0_OPD_SHIFT               (0U)
#define PMU_GRF_GPIO0C_OPD_GPIO0C0_OPD_MASK                (0x1U << PMU_GRF_GPIO0C_OPD_GPIO0C0_OPD_SHIFT)               /* 0x00000001 */
#define PMU_GRF_GPIO0C_OPD_GPIO0C1_OPD_SHIFT               (1U)
#define PMU_GRF_GPIO0C_OPD_GPIO0C1_OPD_MASK                (0x1U << PMU_GRF_GPIO0C_OPD_GPIO0C1_OPD_SHIFT)               /* 0x00000002 */
#define PMU_GRF_GPIO0C_OPD_GPIO0C2_OPD_SHIFT               (2U)
#define PMU_GRF_GPIO0C_OPD_GPIO0C2_OPD_MASK                (0x1U << PMU_GRF_GPIO0C_OPD_GPIO0C2_OPD_SHIFT)               /* 0x00000004 */
#define PMU_GRF_GPIO0C_OPD_GPIO0C3_OPD_SHIFT               (3U)
#define PMU_GRF_GPIO0C_OPD_GPIO0C3_OPD_MASK                (0x1U << PMU_GRF_GPIO0C_OPD_GPIO0C3_OPD_SHIFT)               /* 0x00000008 */
#define PMU_GRF_GPIO0C_OPD_GPIO0C4_OPD_SHIFT               (4U)
#define PMU_GRF_GPIO0C_OPD_GPIO0C4_OPD_MASK                (0x1U << PMU_GRF_GPIO0C_OPD_GPIO0C4_OPD_SHIFT)               /* 0x00000010 */
#define PMU_GRF_GPIO0C_OPD_GPIO0C5_OPD_SHIFT               (5U)
#define PMU_GRF_GPIO0C_OPD_GPIO0C5_OPD_MASK                (0x1U << PMU_GRF_GPIO0C_OPD_GPIO0C5_OPD_SHIFT)               /* 0x00000020 */
#define PMU_GRF_GPIO0C_OPD_GPIO0C6_OPD_SHIFT               (6U)
#define PMU_GRF_GPIO0C_OPD_GPIO0C6_OPD_MASK                (0x1U << PMU_GRF_GPIO0C_OPD_GPIO0C6_OPD_SHIFT)               /* 0x00000040 */
#define PMU_GRF_GPIO0C_OPD_GPIO0C7_OPD_SHIFT               (7U)
#define PMU_GRF_GPIO0C_OPD_GPIO0C7_OPD_MASK                (0x1U << PMU_GRF_GPIO0C_OPD_GPIO0C7_OPD_SHIFT)               /* 0x00000080 */
/* GPIO0D_OPD */
#define PMU_GRF_GPIO0D_OPD_OFFSET                          (0x4CU)
#define PMU_GRF_GPIO0D_OPD_GPIO0D0_OPD_SHIFT               (0U)
#define PMU_GRF_GPIO0D_OPD_GPIO0D0_OPD_MASK                (0x1U << PMU_GRF_GPIO0D_OPD_GPIO0D0_OPD_SHIFT)               /* 0x00000001 */
#define PMU_GRF_GPIO0D_OPD_GPIO0D1_OPD_SHIFT               (1U)
#define PMU_GRF_GPIO0D_OPD_GPIO0D1_OPD_MASK                (0x1U << PMU_GRF_GPIO0D_OPD_GPIO0D1_OPD_SHIFT)               /* 0x00000002 */
/* GPIO0A_SUS */
#define PMU_GRF_GPIO0A_SUS_OFFSET                          (0x50U)
#define PMU_GRF_GPIO0A_SUS_GPIO0A0_SUS_SHIFT               (0U)
#define PMU_GRF_GPIO0A_SUS_GPIO0A0_SUS_MASK                (0x1U << PMU_GRF_GPIO0A_SUS_GPIO0A0_SUS_SHIFT)               /* 0x00000001 */
#define PMU_GRF_GPIO0A_SUS_GPIO0A1_SUS_SHIFT               (1U)
#define PMU_GRF_GPIO0A_SUS_GPIO0A1_SUS_MASK                (0x1U << PMU_GRF_GPIO0A_SUS_GPIO0A1_SUS_SHIFT)               /* 0x00000002 */
#define PMU_GRF_GPIO0A_SUS_GPIO0A2_SUS_SHIFT               (2U)
#define PMU_GRF_GPIO0A_SUS_GPIO0A2_SUS_MASK                (0x1U << PMU_GRF_GPIO0A_SUS_GPIO0A2_SUS_SHIFT)               /* 0x00000004 */
#define PMU_GRF_GPIO0A_SUS_GPIO0A3_SUS_SHIFT               (3U)
#define PMU_GRF_GPIO0A_SUS_GPIO0A3_SUS_MASK                (0x1U << PMU_GRF_GPIO0A_SUS_GPIO0A3_SUS_SHIFT)               /* 0x00000008 */
#define PMU_GRF_GPIO0A_SUS_GPIO0A4_SUS_SHIFT               (4U)
#define PMU_GRF_GPIO0A_SUS_GPIO0A4_SUS_MASK                (0x1U << PMU_GRF_GPIO0A_SUS_GPIO0A4_SUS_SHIFT)               /* 0x00000010 */
#define PMU_GRF_GPIO0A_SUS_GPIO0A5_SUS_SHIFT               (5U)
#define PMU_GRF_GPIO0A_SUS_GPIO0A5_SUS_MASK                (0x1U << PMU_GRF_GPIO0A_SUS_GPIO0A5_SUS_SHIFT)               /* 0x00000020 */
#define PMU_GRF_GPIO0A_SUS_GPIO0A6_SUS_SHIFT               (6U)
#define PMU_GRF_GPIO0A_SUS_GPIO0A6_SUS_MASK                (0x1U << PMU_GRF_GPIO0A_SUS_GPIO0A6_SUS_SHIFT)               /* 0x00000040 */
#define PMU_GRF_GPIO0A_SUS_GPIO0A7_SUS_SHIFT               (7U)
#define PMU_GRF_GPIO0A_SUS_GPIO0A7_SUS_MASK                (0x1U << PMU_GRF_GPIO0A_SUS_GPIO0A7_SUS_SHIFT)               /* 0x00000080 */
/* GPIO0B_SUS */
#define PMU_GRF_GPIO0B_SUS_OFFSET                          (0x54U)
#define PMU_GRF_GPIO0B_SUS_GPIO0B0_SUS_SHIFT               (0U)
#define PMU_GRF_GPIO0B_SUS_GPIO0B0_SUS_MASK                (0x1U << PMU_GRF_GPIO0B_SUS_GPIO0B0_SUS_SHIFT)               /* 0x00000001 */
#define PMU_GRF_GPIO0B_SUS_GPIO0B1_SUS_SHIFT               (1U)
#define PMU_GRF_GPIO0B_SUS_GPIO0B1_SUS_MASK                (0x1U << PMU_GRF_GPIO0B_SUS_GPIO0B1_SUS_SHIFT)               /* 0x00000002 */
#define PMU_GRF_GPIO0B_SUS_GPIO0B2_SUS_SHIFT               (2U)
#define PMU_GRF_GPIO0B_SUS_GPIO0B2_SUS_MASK                (0x1U << PMU_GRF_GPIO0B_SUS_GPIO0B2_SUS_SHIFT)               /* 0x00000004 */
#define PMU_GRF_GPIO0B_SUS_GPIO0B3_SUS_SHIFT               (3U)
#define PMU_GRF_GPIO0B_SUS_GPIO0B3_SUS_MASK                (0x1U << PMU_GRF_GPIO0B_SUS_GPIO0B3_SUS_SHIFT)               /* 0x00000008 */
#define PMU_GRF_GPIO0B_SUS_GPIO0B4_SUS_SHIFT               (4U)
#define PMU_GRF_GPIO0B_SUS_GPIO0B4_SUS_MASK                (0x1U << PMU_GRF_GPIO0B_SUS_GPIO0B4_SUS_SHIFT)               /* 0x00000010 */
#define PMU_GRF_GPIO0B_SUS_GPIO0B5_SUS_SHIFT               (5U)
#define PMU_GRF_GPIO0B_SUS_GPIO0B5_SUS_MASK                (0x1U << PMU_GRF_GPIO0B_SUS_GPIO0B5_SUS_SHIFT)               /* 0x00000020 */
#define PMU_GRF_GPIO0B_SUS_GPIO0B6_SUS_SHIFT               (6U)
#define PMU_GRF_GPIO0B_SUS_GPIO0B6_SUS_MASK                (0x1U << PMU_GRF_GPIO0B_SUS_GPIO0B6_SUS_SHIFT)               /* 0x00000040 */
#define PMU_GRF_GPIO0B_SUS_GPIO0B7_SUS_SHIFT               (7U)
#define PMU_GRF_GPIO0B_SUS_GPIO0B7_SUS_MASK                (0x1U << PMU_GRF_GPIO0B_SUS_GPIO0B7_SUS_SHIFT)               /* 0x00000080 */
/* GPIO0C_SUS */
#define PMU_GRF_GPIO0C_SUS_OFFSET                          (0x58U)
#define PMU_GRF_GPIO0C_SUS_GPIO0C0_SUS_SHIFT               (0U)
#define PMU_GRF_GPIO0C_SUS_GPIO0C0_SUS_MASK                (0x1U << PMU_GRF_GPIO0C_SUS_GPIO0C0_SUS_SHIFT)               /* 0x00000001 */
#define PMU_GRF_GPIO0C_SUS_GPIO0C1_SUS_SHIFT               (1U)
#define PMU_GRF_GPIO0C_SUS_GPIO0C1_SUS_MASK                (0x1U << PMU_GRF_GPIO0C_SUS_GPIO0C1_SUS_SHIFT)               /* 0x00000002 */
#define PMU_GRF_GPIO0C_SUS_GPIO0C2_SUS_SHIFT               (2U)
#define PMU_GRF_GPIO0C_SUS_GPIO0C2_SUS_MASK                (0x1U << PMU_GRF_GPIO0C_SUS_GPIO0C2_SUS_SHIFT)               /* 0x00000004 */
#define PMU_GRF_GPIO0C_SUS_GPIO0C3_SUS_SHIFT               (3U)
#define PMU_GRF_GPIO0C_SUS_GPIO0C3_SUS_MASK                (0x1U << PMU_GRF_GPIO0C_SUS_GPIO0C3_SUS_SHIFT)               /* 0x00000008 */
#define PMU_GRF_GPIO0C_SUS_GPIO0C4_SUS_SHIFT               (4U)
#define PMU_GRF_GPIO0C_SUS_GPIO0C4_SUS_MASK                (0x1U << PMU_GRF_GPIO0C_SUS_GPIO0C4_SUS_SHIFT)               /* 0x00000010 */
#define PMU_GRF_GPIO0C_SUS_GPIO0C5_SUS_SHIFT               (5U)
#define PMU_GRF_GPIO0C_SUS_GPIO0C5_SUS_MASK                (0x1U << PMU_GRF_GPIO0C_SUS_GPIO0C5_SUS_SHIFT)               /* 0x00000020 */
#define PMU_GRF_GPIO0C_SUS_GPIO0C6_SUS_SHIFT               (6U)
#define PMU_GRF_GPIO0C_SUS_GPIO0C6_SUS_MASK                (0x1U << PMU_GRF_GPIO0C_SUS_GPIO0C6_SUS_SHIFT)               /* 0x00000040 */
#define PMU_GRF_GPIO0C_SUS_GPIO0C7_SUS_SHIFT               (7U)
#define PMU_GRF_GPIO0C_SUS_GPIO0C7_SUS_MASK                (0x1U << PMU_GRF_GPIO0C_SUS_GPIO0C7_SUS_SHIFT)               /* 0x00000080 */
/* GPIO0D_SUS */
#define PMU_GRF_GPIO0D_SUS_OFFSET                          (0x5CU)
#define PMU_GRF_GPIO0D_SUS_GPIO0D0_SUS_SHIFT               (0U)
#define PMU_GRF_GPIO0D_SUS_GPIO0D0_SUS_MASK                (0x1U << PMU_GRF_GPIO0D_SUS_GPIO0D0_SUS_SHIFT)               /* 0x00000001 */
#define PMU_GRF_GPIO0D_SUS_GPIO0D1_SUS_SHIFT               (1U)
#define PMU_GRF_GPIO0D_SUS_GPIO0D1_SUS_MASK                (0x1U << PMU_GRF_GPIO0D_SUS_GPIO0D1_SUS_SHIFT)               /* 0x00000002 */
/* GPIO0A_SL */
#define PMU_GRF_GPIO0A_SL_OFFSET                           (0x60U)
#define PMU_GRF_GPIO0A_SL_GPIO0A0_SL_SHIFT                 (0U)
#define PMU_GRF_GPIO0A_SL_GPIO0A0_SL_MASK                  (0x3U << PMU_GRF_GPIO0A_SL_GPIO0A0_SL_SHIFT)                 /* 0x00000003 */
#define PMU_GRF_GPIO0A_SL_GPIO0A1_SL_SHIFT                 (2U)
#define PMU_GRF_GPIO0A_SL_GPIO0A1_SL_MASK                  (0x3U << PMU_GRF_GPIO0A_SL_GPIO0A1_SL_SHIFT)                 /* 0x0000000C */
#define PMU_GRF_GPIO0A_SL_GPIO0A2_SL_SHIFT                 (4U)
#define PMU_GRF_GPIO0A_SL_GPIO0A2_SL_MASK                  (0x3U << PMU_GRF_GPIO0A_SL_GPIO0A2_SL_SHIFT)                 /* 0x00000030 */
#define PMU_GRF_GPIO0A_SL_GPIO0A3_SL_SHIFT                 (6U)
#define PMU_GRF_GPIO0A_SL_GPIO0A3_SL_MASK                  (0x3U << PMU_GRF_GPIO0A_SL_GPIO0A3_SL_SHIFT)                 /* 0x000000C0 */
#define PMU_GRF_GPIO0A_SL_GPIO0A4_SL_SHIFT                 (8U)
#define PMU_GRF_GPIO0A_SL_GPIO0A4_SL_MASK                  (0x3U << PMU_GRF_GPIO0A_SL_GPIO0A4_SL_SHIFT)                 /* 0x00000300 */
#define PMU_GRF_GPIO0A_SL_GPIO0A5_SL_SHIFT                 (10U)
#define PMU_GRF_GPIO0A_SL_GPIO0A5_SL_MASK                  (0x3U << PMU_GRF_GPIO0A_SL_GPIO0A5_SL_SHIFT)                 /* 0x00000C00 */
#define PMU_GRF_GPIO0A_SL_GPIO0A6_SL_SHIFT                 (12U)
#define PMU_GRF_GPIO0A_SL_GPIO0A6_SL_MASK                  (0x3U << PMU_GRF_GPIO0A_SL_GPIO0A6_SL_SHIFT)                 /* 0x00003000 */
#define PMU_GRF_GPIO0A_SL_GPIO0A7_SL_SHIFT                 (14U)
#define PMU_GRF_GPIO0A_SL_GPIO0A7_SL_MASK                  (0x3U << PMU_GRF_GPIO0A_SL_GPIO0A7_SL_SHIFT)                 /* 0x0000C000 */
/* GPIO0B_SL */
#define PMU_GRF_GPIO0B_SL_OFFSET                           (0x64U)
#define PMU_GRF_GPIO0B_SL_GPIO0B0_SL_SHIFT                 (0U)
#define PMU_GRF_GPIO0B_SL_GPIO0B0_SL_MASK                  (0x3U << PMU_GRF_GPIO0B_SL_GPIO0B0_SL_SHIFT)                 /* 0x00000003 */
#define PMU_GRF_GPIO0B_SL_GPIO0B1_SL_SHIFT                 (2U)
#define PMU_GRF_GPIO0B_SL_GPIO0B1_SL_MASK                  (0x3U << PMU_GRF_GPIO0B_SL_GPIO0B1_SL_SHIFT)                 /* 0x0000000C */
#define PMU_GRF_GPIO0B_SL_GPIO0B2_SL_SHIFT                 (4U)
#define PMU_GRF_GPIO0B_SL_GPIO0B2_SL_MASK                  (0x3U << PMU_GRF_GPIO0B_SL_GPIO0B2_SL_SHIFT)                 /* 0x00000030 */
#define PMU_GRF_GPIO0B_SL_GPIO0B3_SL_SHIFT                 (6U)
#define PMU_GRF_GPIO0B_SL_GPIO0B3_SL_MASK                  (0x3U << PMU_GRF_GPIO0B_SL_GPIO0B3_SL_SHIFT)                 /* 0x000000C0 */
#define PMU_GRF_GPIO0B_SL_GPIO0B4_SL_SHIFT                 (8U)
#define PMU_GRF_GPIO0B_SL_GPIO0B4_SL_MASK                  (0x3U << PMU_GRF_GPIO0B_SL_GPIO0B4_SL_SHIFT)                 /* 0x00000300 */
#define PMU_GRF_GPIO0B_SL_GPIO0B5_SL_SHIFT                 (10U)
#define PMU_GRF_GPIO0B_SL_GPIO0B5_SL_MASK                  (0x3U << PMU_GRF_GPIO0B_SL_GPIO0B5_SL_SHIFT)                 /* 0x00000C00 */
#define PMU_GRF_GPIO0B_SL_GPIO0B6_SL_SHIFT                 (12U)
#define PMU_GRF_GPIO0B_SL_GPIO0B6_SL_MASK                  (0x3U << PMU_GRF_GPIO0B_SL_GPIO0B6_SL_SHIFT)                 /* 0x00003000 */
#define PMU_GRF_GPIO0B_SL_GPIO0B7_SL_SHIFT                 (14U)
#define PMU_GRF_GPIO0B_SL_GPIO0B7_SL_MASK                  (0x3U << PMU_GRF_GPIO0B_SL_GPIO0B7_SL_SHIFT)                 /* 0x0000C000 */
/* GPIO0C_SL */
#define PMU_GRF_GPIO0C_SL_OFFSET                           (0x68U)
#define PMU_GRF_GPIO0C_SL_GPIO0C0_SL_SHIFT                 (0U)
#define PMU_GRF_GPIO0C_SL_GPIO0C0_SL_MASK                  (0x3U << PMU_GRF_GPIO0C_SL_GPIO0C0_SL_SHIFT)                 /* 0x00000003 */
#define PMU_GRF_GPIO0C_SL_GPIO0C1_SL_SHIFT                 (2U)
#define PMU_GRF_GPIO0C_SL_GPIO0C1_SL_MASK                  (0x3U << PMU_GRF_GPIO0C_SL_GPIO0C1_SL_SHIFT)                 /* 0x0000000C */
#define PMU_GRF_GPIO0C_SL_GPIO0C2_SL_SHIFT                 (4U)
#define PMU_GRF_GPIO0C_SL_GPIO0C2_SL_MASK                  (0x3U << PMU_GRF_GPIO0C_SL_GPIO0C2_SL_SHIFT)                 /* 0x00000030 */
#define PMU_GRF_GPIO0C_SL_GPIO0C3_SL_SHIFT                 (6U)
#define PMU_GRF_GPIO0C_SL_GPIO0C3_SL_MASK                  (0x3U << PMU_GRF_GPIO0C_SL_GPIO0C3_SL_SHIFT)                 /* 0x000000C0 */
#define PMU_GRF_GPIO0C_SL_GPIO0C4_SL_SHIFT                 (8U)
#define PMU_GRF_GPIO0C_SL_GPIO0C4_SL_MASK                  (0x3U << PMU_GRF_GPIO0C_SL_GPIO0C4_SL_SHIFT)                 /* 0x00000300 */
#define PMU_GRF_GPIO0C_SL_GPIO0C5_SL_SHIFT                 (10U)
#define PMU_GRF_GPIO0C_SL_GPIO0C5_SL_MASK                  (0x3U << PMU_GRF_GPIO0C_SL_GPIO0C5_SL_SHIFT)                 /* 0x00000C00 */
#define PMU_GRF_GPIO0C_SL_GPIO0C6_SL_SHIFT                 (12U)
#define PMU_GRF_GPIO0C_SL_GPIO0C6_SL_MASK                  (0x3U << PMU_GRF_GPIO0C_SL_GPIO0C6_SL_SHIFT)                 /* 0x00003000 */
#define PMU_GRF_GPIO0C_SL_GPIO0C7_SL_SHIFT                 (14U)
#define PMU_GRF_GPIO0C_SL_GPIO0C7_SL_MASK                  (0x3U << PMU_GRF_GPIO0C_SL_GPIO0C7_SL_SHIFT)                 /* 0x0000C000 */
/* GPIO0D_SL */
#define PMU_GRF_GPIO0D_SL_OFFSET                           (0x6CU)
#define PMU_GRF_GPIO0D_SL_GPIO0D0_SL_SHIFT                 (0U)
#define PMU_GRF_GPIO0D_SL_GPIO0D0_SL_MASK                  (0x3U << PMU_GRF_GPIO0D_SL_GPIO0D0_SL_SHIFT)                 /* 0x00000003 */
#define PMU_GRF_GPIO0D_SL_GPIO0D1_SL_SHIFT                 (2U)
#define PMU_GRF_GPIO0D_SL_GPIO0D1_SL_MASK                  (0x3U << PMU_GRF_GPIO0D_SL_GPIO0D1_SL_SHIFT)                 /* 0x0000000C */
#define PMU_GRF_GPIO0D_SL_GPIO0D2_SL_SHIFT                 (4U)
#define PMU_GRF_GPIO0D_SL_GPIO0D2_SL_MASK                  (0x3U << PMU_GRF_GPIO0D_SL_GPIO0D2_SL_SHIFT)                 /* 0x00000030 */
#define PMU_GRF_GPIO0D_SL_GPIO0D3_SL_SHIFT                 (6U)
#define PMU_GRF_GPIO0D_SL_GPIO0D3_SL_MASK                  (0x3U << PMU_GRF_GPIO0D_SL_GPIO0D3_SL_SHIFT)                 /* 0x000000C0 */
#define PMU_GRF_GPIO0D_SL_GPIO0D4_SL_SHIFT                 (8U)
#define PMU_GRF_GPIO0D_SL_GPIO0D4_SL_MASK                  (0x3U << PMU_GRF_GPIO0D_SL_GPIO0D4_SL_SHIFT)                 /* 0x00000300 */
#define PMU_GRF_GPIO0D_SL_GPIO0D5_SL_SHIFT                 (10U)
#define PMU_GRF_GPIO0D_SL_GPIO0D5_SL_MASK                  (0x3U << PMU_GRF_GPIO0D_SL_GPIO0D5_SL_SHIFT)                 /* 0x00000C00 */
#define PMU_GRF_GPIO0D_SL_GPIO0D6_SL_SHIFT                 (12U)
#define PMU_GRF_GPIO0D_SL_GPIO0D6_SL_MASK                  (0x3U << PMU_GRF_GPIO0D_SL_GPIO0D6_SL_SHIFT)                 /* 0x00003000 */
#define PMU_GRF_GPIO0D_SL_GPIO0D7_SL_SHIFT                 (14U)
#define PMU_GRF_GPIO0D_SL_GPIO0D7_SL_MASK                  (0x3U << PMU_GRF_GPIO0D_SL_GPIO0D7_SL_SHIFT)                 /* 0x0000C000 */
/* GPIO0A_DS_0 */
#define PMU_GRF_GPIO0A_DS_0_OFFSET                         (0x70U)
#define PMU_GRF_GPIO0A_DS_0_GPIO0A0_DS_SHIFT               (0U)
#define PMU_GRF_GPIO0A_DS_0_GPIO0A0_DS_MASK                (0x3FU << PMU_GRF_GPIO0A_DS_0_GPIO0A0_DS_SHIFT)              /* 0x0000003F */
#define PMU_GRF_GPIO0A_DS_0_GPIO0A1_DS_SHIFT               (8U)
#define PMU_GRF_GPIO0A_DS_0_GPIO0A1_DS_MASK                (0x3FU << PMU_GRF_GPIO0A_DS_0_GPIO0A1_DS_SHIFT)              /* 0x00003F00 */
/* GPIO0A_DS_1 */
#define PMU_GRF_GPIO0A_DS_1_OFFSET                         (0x74U)
#define PMU_GRF_GPIO0A_DS_1_GPIO0A2_DS_SHIFT               (0U)
#define PMU_GRF_GPIO0A_DS_1_GPIO0A2_DS_MASK                (0x3FU << PMU_GRF_GPIO0A_DS_1_GPIO0A2_DS_SHIFT)              /* 0x0000003F */
#define PMU_GRF_GPIO0A_DS_1_GPIO0A3_DS_SHIFT               (8U)
#define PMU_GRF_GPIO0A_DS_1_GPIO0A3_DS_MASK                (0x3FU << PMU_GRF_GPIO0A_DS_1_GPIO0A3_DS_SHIFT)              /* 0x00003F00 */
/* GPIO0A_DS_2 */
#define PMU_GRF_GPIO0A_DS_2_OFFSET                         (0x78U)
#define PMU_GRF_GPIO0A_DS_2_GPIO0A4_DS_SHIFT               (0U)
#define PMU_GRF_GPIO0A_DS_2_GPIO0A4_DS_MASK                (0x3FU << PMU_GRF_GPIO0A_DS_2_GPIO0A4_DS_SHIFT)              /* 0x0000003F */
#define PMU_GRF_GPIO0A_DS_2_GPIO0A5_DS_SHIFT               (8U)
#define PMU_GRF_GPIO0A_DS_2_GPIO0A5_DS_MASK                (0x3FU << PMU_GRF_GPIO0A_DS_2_GPIO0A5_DS_SHIFT)              /* 0x00003F00 */
/* GPIO0A_DS_3 */
#define PMU_GRF_GPIO0A_DS_3_OFFSET                         (0x7CU)
#define PMU_GRF_GPIO0A_DS_3_GPIO0A6_DS_SHIFT               (0U)
#define PMU_GRF_GPIO0A_DS_3_GPIO0A6_DS_MASK                (0x3FU << PMU_GRF_GPIO0A_DS_3_GPIO0A6_DS_SHIFT)              /* 0x0000003F */
#define PMU_GRF_GPIO0A_DS_3_GPIO0A7_DS_SHIFT               (8U)
#define PMU_GRF_GPIO0A_DS_3_GPIO0A7_DS_MASK                (0x3FU << PMU_GRF_GPIO0A_DS_3_GPIO0A7_DS_SHIFT)              /* 0x00003F00 */
/* GPIO0B_DS_0 */
#define PMU_GRF_GPIO0B_DS_0_OFFSET                         (0x80U)
#define PMU_GRF_GPIO0B_DS_0_GPIO0B0_DS_SHIFT               (0U)
#define PMU_GRF_GPIO0B_DS_0_GPIO0B0_DS_MASK                (0x3FU << PMU_GRF_GPIO0B_DS_0_GPIO0B0_DS_SHIFT)              /* 0x0000003F */
#define PMU_GRF_GPIO0B_DS_0_GPIO0B1_DS_SHIFT               (8U)
#define PMU_GRF_GPIO0B_DS_0_GPIO0B1_DS_MASK                (0x3FU << PMU_GRF_GPIO0B_DS_0_GPIO0B1_DS_SHIFT)              /* 0x00003F00 */
/* GPIO0B_DS_1 */
#define PMU_GRF_GPIO0B_DS_1_OFFSET                         (0x84U)
#define PMU_GRF_GPIO0B_DS_1_GPIO0B2_DS_SHIFT               (0U)
#define PMU_GRF_GPIO0B_DS_1_GPIO0B2_DS_MASK                (0x3FU << PMU_GRF_GPIO0B_DS_1_GPIO0B2_DS_SHIFT)              /* 0x0000003F */
#define PMU_GRF_GPIO0B_DS_1_GPIO0B3_DS_SHIFT               (8U)
#define PMU_GRF_GPIO0B_DS_1_GPIO0B3_DS_MASK                (0x3FU << PMU_GRF_GPIO0B_DS_1_GPIO0B3_DS_SHIFT)              /* 0x00003F00 */
/* GPIO0B_DS_2 */
#define PMU_GRF_GPIO0B_DS_2_OFFSET                         (0x88U)
#define PMU_GRF_GPIO0B_DS_2_GPIO0B4_DS_SHIFT               (0U)
#define PMU_GRF_GPIO0B_DS_2_GPIO0B4_DS_MASK                (0x3FU << PMU_GRF_GPIO0B_DS_2_GPIO0B4_DS_SHIFT)              /* 0x0000003F */
#define PMU_GRF_GPIO0B_DS_2_GPIO0B5_DS_SHIFT               (8U)
#define PMU_GRF_GPIO0B_DS_2_GPIO0B5_DS_MASK                (0x3FU << PMU_GRF_GPIO0B_DS_2_GPIO0B5_DS_SHIFT)              /* 0x00003F00 */
/* GPIO0B_DS_3 */
#define PMU_GRF_GPIO0B_DS_3_OFFSET                         (0x8CU)
#define PMU_GRF_GPIO0B_DS_3_GPIO0B6_DS_SHIFT               (0U)
#define PMU_GRF_GPIO0B_DS_3_GPIO0B6_DS_MASK                (0x3FU << PMU_GRF_GPIO0B_DS_3_GPIO0B6_DS_SHIFT)              /* 0x0000003F */
#define PMU_GRF_GPIO0B_DS_3_GPIO0B7_DS_SHIFT               (8U)
#define PMU_GRF_GPIO0B_DS_3_GPIO0B7_DS_MASK                (0x3FU << PMU_GRF_GPIO0B_DS_3_GPIO0B7_DS_SHIFT)              /* 0x00003F00 */
/* GPIO0C_DS_0 */
#define PMU_GRF_GPIO0C_DS_0_OFFSET                         (0x90U)
#define PMU_GRF_GPIO0C_DS_0_GPIO0C0_DS_SHIFT               (0U)
#define PMU_GRF_GPIO0C_DS_0_GPIO0C0_DS_MASK                (0x3FU << PMU_GRF_GPIO0C_DS_0_GPIO0C0_DS_SHIFT)              /* 0x0000003F */
#define PMU_GRF_GPIO0C_DS_0_GPIO0C1_DS_SHIFT               (8U)
#define PMU_GRF_GPIO0C_DS_0_GPIO0C1_DS_MASK                (0x3FU << PMU_GRF_GPIO0C_DS_0_GPIO0C1_DS_SHIFT)              /* 0x00003F00 */
/* GPIO0C_DS_1 */
#define PMU_GRF_GPIO0C_DS_1_OFFSET                         (0x94U)
#define PMU_GRF_GPIO0C_DS_1_GPIO0C2_DS_SHIFT               (0U)
#define PMU_GRF_GPIO0C_DS_1_GPIO0C2_DS_MASK                (0x3FU << PMU_GRF_GPIO0C_DS_1_GPIO0C2_DS_SHIFT)              /* 0x0000003F */
#define PMU_GRF_GPIO0C_DS_1_GPIO0C3_DS_SHIFT               (8U)
#define PMU_GRF_GPIO0C_DS_1_GPIO0C3_DS_MASK                (0x3FU << PMU_GRF_GPIO0C_DS_1_GPIO0C3_DS_SHIFT)              /* 0x00003F00 */
/* GPIO0C_DS_2 */
#define PMU_GRF_GPIO0C_DS_2_OFFSET                         (0x98U)
#define PMU_GRF_GPIO0C_DS_2_GPIO0C4_DS_SHIFT               (0U)
#define PMU_GRF_GPIO0C_DS_2_GPIO0C4_DS_MASK                (0x3FU << PMU_GRF_GPIO0C_DS_2_GPIO0C4_DS_SHIFT)              /* 0x0000003F */
#define PMU_GRF_GPIO0C_DS_2_GPIO0C5_DS_SHIFT               (8U)
#define PMU_GRF_GPIO0C_DS_2_GPIO0C5_DS_MASK                (0x3FU << PMU_GRF_GPIO0C_DS_2_GPIO0C5_DS_SHIFT)              /* 0x00003F00 */
/* GPIO0C_DS_3 */
#define PMU_GRF_GPIO0C_DS_3_OFFSET                         (0x9CU)
#define PMU_GRF_GPIO0C_DS_3_GPIO0C6_DS_SHIFT               (0U)
#define PMU_GRF_GPIO0C_DS_3_GPIO0C6_DS_MASK                (0x3FU << PMU_GRF_GPIO0C_DS_3_GPIO0C6_DS_SHIFT)              /* 0x0000003F */
#define PMU_GRF_GPIO0C_DS_3_GPIO0C7_DS_SHIFT               (8U)
#define PMU_GRF_GPIO0C_DS_3_GPIO0C7_DS_MASK                (0x3FU << PMU_GRF_GPIO0C_DS_3_GPIO0C7_DS_SHIFT)              /* 0x00003F00 */
/* GPIO0D_DS_0 */
#define PMU_GRF_GPIO0D_DS_0_OFFSET                         (0xA0U)
#define PMU_GRF_GPIO0D_DS_0_GPIO0D0_DS_SHIFT               (0U)
#define PMU_GRF_GPIO0D_DS_0_GPIO0D0_DS_MASK                (0x3FU << PMU_GRF_GPIO0D_DS_0_GPIO0D0_DS_SHIFT)              /* 0x0000003F */
#define PMU_GRF_GPIO0D_DS_0_GPIO0D1_DS_SHIFT               (8U)
#define PMU_GRF_GPIO0D_DS_0_GPIO0D1_DS_MASK                (0x3FU << PMU_GRF_GPIO0D_DS_0_GPIO0D1_DS_SHIFT)              /* 0x00003F00 */
/* SOC_CON0 */
#define PMU_GRF_SOC_CON0_OFFSET                            (0x100U)
#define PMU_GRF_SOC_CON0_CON_32K_IOE_SHIFT                 (0U)
#define PMU_GRF_SOC_CON0_CON_32K_IOE_MASK                  (0x1U << PMU_GRF_SOC_CON0_CON_32K_IOE_SHIFT)                 /* 0x00000001 */
#define PMU_GRF_SOC_CON0_I2C0_IOMUX_SEL_SHIFT              (1U)
#define PMU_GRF_SOC_CON0_I2C0_IOMUX_SEL_MASK               (0x1U << PMU_GRF_SOC_CON0_I2C0_IOMUX_SEL_SHIFT)              /* 0x00000002 */
#define PMU_GRF_SOC_CON0_APLL_OSC_SOURCE_SEL_SHIFT         (2U)
#define PMU_GRF_SOC_CON0_APLL_OSC_SOURCE_SEL_MASK          (0x1U << PMU_GRF_SOC_CON0_APLL_OSC_SOURCE_SEL_SHIFT)         /* 0x00000004 */
#define PMU_GRF_SOC_CON0_DPLL_OSC_SOURCE_SEL_SHIFT         (3U)
#define PMU_GRF_SOC_CON0_DPLL_OSC_SOURCE_SEL_MASK          (0x1U << PMU_GRF_SOC_CON0_DPLL_OSC_SOURCE_SEL_SHIFT)         /* 0x00000008 */
#define PMU_GRF_SOC_CON0_UART0_RTS_SEL_SHIFT               (5U)
#define PMU_GRF_SOC_CON0_UART0_RTS_SEL_MASK                (0x1U << PMU_GRF_SOC_CON0_UART0_RTS_SEL_SHIFT)               /* 0x00000020 */
#define PMU_GRF_SOC_CON0_UART0_CTS_SEL_SHIFT               (6U)
#define PMU_GRF_SOC_CON0_UART0_CTS_SEL_MASK                (0x1U << PMU_GRF_SOC_CON0_UART0_CTS_SEL_SHIFT)               /* 0x00000040 */
#define PMU_GRF_SOC_CON0_GRF_CON_PMIC_SLEEP_SEL_SHIFT      (7U)
#define PMU_GRF_SOC_CON0_GRF_CON_PMIC_SLEEP_SEL_MASK       (0x1U << PMU_GRF_SOC_CON0_GRF_CON_PMIC_SLEEP_SEL_SHIFT)      /* 0x00000080 */
#define PMU_GRF_SOC_CON0_DDRPHY_BUFFEREN_SEL_SHIFT         (12U)
#define PMU_GRF_SOC_CON0_DDRPHY_BUFFEREN_SEL_MASK          (0x1U << PMU_GRF_SOC_CON0_DDRPHY_BUFFEREN_SEL_SHIFT)         /* 0x00001000 */
#define PMU_GRF_SOC_CON0_DDRPHY_BUFFEREN_CORE_SHIFT        (13U)
#define PMU_GRF_SOC_CON0_DDRPHY_BUFFEREN_CORE_MASK         (0x1U << PMU_GRF_SOC_CON0_DDRPHY_BUFFEREN_CORE_SHIFT)        /* 0x00002000 */
#define PMU_GRF_SOC_CON0_PVTM_FRQ_DONE_SHIFT               (14U)
#define PMU_GRF_SOC_CON0_PVTM_FRQ_DONE_MASK                (0x1U << PMU_GRF_SOC_CON0_PVTM_FRQ_DONE_SHIFT)               /* 0x00004000 */
/* SOC_CON1 */
#define PMU_GRF_SOC_CON1_OFFSET                            (0x104U)
#define PMU_GRF_SOC_CON1_RESETN_HOLD_SHIFT                 (0U)
#define PMU_GRF_SOC_CON1_RESETN_HOLD_MASK                  (0xFFFFU << PMU_GRF_SOC_CON1_RESETN_HOLD_SHIFT)              /* 0x0000FFFF */
/* SOC_CON2 */
#define PMU_GRF_SOC_CON2_OFFSET                            (0x108U)
#define PMU_GRF_SOC_CON2_RESETN_HOLD_SHIFT                 (0U)
#define PMU_GRF_SOC_CON2_RESETN_HOLD_MASK                  (0xFFU << PMU_GRF_SOC_CON2_RESETN_HOLD_SHIFT)                /* 0x000000FF */
/* SOC_CON3 */
#define PMU_GRF_SOC_CON3_OFFSET                            (0x10CU)
#define PMU_GRF_SOC_CON3_TSADC_SHUT_RESET_TRIGGER_EN_SHIFT (0U)
#define PMU_GRF_SOC_CON3_TSADC_SHUT_RESET_TRIGGER_EN_MASK  (0x1U << PMU_GRF_SOC_CON3_TSADC_SHUT_RESET_TRIGGER_EN_SHIFT) /* 0x00000001 */
#define PMU_GRF_SOC_CON3_WDT_SHUT_RESET_TRIGGER_EN_SHIFT   (1U)
#define PMU_GRF_SOC_CON3_WDT_SHUT_RESET_TRIGGER_EN_MASK    (0x1U << PMU_GRF_SOC_CON3_WDT_SHUT_RESET_TRIGGER_EN_SHIFT)   /* 0x00000002 */
#define PMU_GRF_SOC_CON3_DDRIO_RET_EN_SHIFT                (2U)
#define PMU_GRF_SOC_CON3_DDRIO_RET_EN_MASK                 (0x1U << PMU_GRF_SOC_CON3_DDRIO_RET_EN_SHIFT)                /* 0x00000004 */
#define PMU_GRF_SOC_CON3_SREF_ENTER_EN_SHIFT               (3U)
#define PMU_GRF_SOC_CON3_SREF_ENTER_EN_MASK                (0x1U << PMU_GRF_SOC_CON3_SREF_ENTER_EN_SHIFT)               /* 0x00000008 */
#define PMU_GRF_SOC_CON3_DDRC_GATING_EN_SHIFT              (4U)
#define PMU_GRF_SOC_CON3_DDRC_GATING_EN_MASK               (0x1U << PMU_GRF_SOC_CON3_DDRC_GATING_EN_SHIFT)              /* 0x00000010 */
#define PMU_GRF_SOC_CON3_DDR_IO_RET_DE_REQ_SHIFT           (5U)
#define PMU_GRF_SOC_CON3_DDR_IO_RET_DE_REQ_MASK            (0x1U << PMU_GRF_SOC_CON3_DDR_IO_RET_DE_REQ_SHIFT)           /* 0x00000020 */
#define PMU_GRF_SOC_CON3_DDR_IO_RET_CFG_SHIFT              (6U)
#define PMU_GRF_SOC_CON3_DDR_IO_RET_CFG_MASK               (0x1U << PMU_GRF_SOC_CON3_DDR_IO_RET_CFG_SHIFT)              /* 0x00000040 */
#define PMU_GRF_SOC_CON3_DDR_IO_RET_OEN_CFG_SHIFT          (7U)
#define PMU_GRF_SOC_CON3_DDR_IO_RET_OEN_CFG_MASK           (0x1U << PMU_GRF_SOC_CON3_DDR_IO_RET_OEN_CFG_SHIFT)          /* 0x00000080 */
#define PMU_GRF_SOC_CON3_UPCTL_C_SYSREQ_CFG_SHIFT          (8U)
#define PMU_GRF_SOC_CON3_UPCTL_C_SYSREQ_CFG_MASK           (0x1U << PMU_GRF_SOC_CON3_UPCTL_C_SYSREQ_CFG_SHIFT)          /* 0x00000100 */
#define PMU_GRF_SOC_CON3_CORE_WFI_EN_SHIFT                 (9U)
#define PMU_GRF_SOC_CON3_CORE_WFI_EN_MASK                  (0x1U << PMU_GRF_SOC_CON3_CORE_WFI_EN_SHIFT)                 /* 0x00000200 */
#define PMU_GRF_SOC_CON3_CORE_OFF_EN_SHIFT                 (10U)
#define PMU_GRF_SOC_CON3_CORE_OFF_EN_MASK                  (0x1U << PMU_GRF_SOC_CON3_CORE_OFF_EN_SHIFT)                 /* 0x00000400 */
#define PMU_GRF_SOC_CON3_CORE_RET_EN_SHIFT                 (11U)
#define PMU_GRF_SOC_CON3_CORE_RET_EN_MASK                  (0x1U << PMU_GRF_SOC_CON3_CORE_RET_EN_SHIFT)                 /* 0x00000800 */
#define PMU_GRF_SOC_CON3_CORE_PACTIVE_EN_SHIFT             (12U)
#define PMU_GRF_SOC_CON3_CORE_PACTIVE_EN_MASK              (0x1U << PMU_GRF_SOC_CON3_CORE_PACTIVE_EN_SHIFT)             /* 0x00001000 */
#define PMU_GRF_SOC_CON3_DSU_OFF_EN_SHIFT                  (13U)
#define PMU_GRF_SOC_CON3_DSU_OFF_EN_MASK                   (0x1U << PMU_GRF_SOC_CON3_DSU_OFF_EN_SHIFT)                  /* 0x00002000 */
#define PMU_GRF_SOC_CON3_DSU_RET_EN_SHIFT                  (14U)
#define PMU_GRF_SOC_CON3_DSU_RET_EN_MASK                   (0x1U << PMU_GRF_SOC_CON3_DSU_RET_EN_SHIFT)                  /* 0x00004000 */
#define PMU_GRF_SOC_CON3_DSU_PACTIVE_EN_SHIFT              (15U)
#define PMU_GRF_SOC_CON3_DSU_PACTIVE_EN_MASK               (0x1U << PMU_GRF_SOC_CON3_DSU_PACTIVE_EN_SHIFT)              /* 0x00008000 */
/* SOC_CON4 */
#define PMU_GRF_SOC_CON4_OFFSET                            (0x110U)
#define PMU_GRF_SOC_CON4_PWM0_IOMUX_SEL_SHIFT              (0U)
#define PMU_GRF_SOC_CON4_PWM0_IOMUX_SEL_MASK               (0x3U << PMU_GRF_SOC_CON4_PWM0_IOMUX_SEL_SHIFT)              /* 0x00000003 */
#define PMU_GRF_SOC_CON4_PWM1_IOMUX_SEL_SHIFT              (2U)
#define PMU_GRF_SOC_CON4_PWM1_IOMUX_SEL_MASK               (0x3U << PMU_GRF_SOC_CON4_PWM1_IOMUX_SEL_SHIFT)              /* 0x0000000C */
#define PMU_GRF_SOC_CON4_PWM2_IOMUX_SEL_SHIFT              (4U)
#define PMU_GRF_SOC_CON4_PWM2_IOMUX_SEL_MASK               (0x3U << PMU_GRF_SOC_CON4_PWM2_IOMUX_SEL_SHIFT)              /* 0x00000030 */
#define PMU_GRF_SOC_CON4_GPU_PWREN_POL_SHIFT               (10U)
#define PMU_GRF_SOC_CON4_GPU_PWREN_POL_MASK                (0x3U << PMU_GRF_SOC_CON4_GPU_PWREN_POL_SHIFT)               /* 0x00000C00 */
#define PMU_GRF_SOC_CON4_SPRA_HD_WTSEL_SHIFT               (12U)
#define PMU_GRF_SOC_CON4_SPRA_HD_WTSEL_MASK                (0x3U << PMU_GRF_SOC_CON4_SPRA_HD_WTSEL_SHIFT)               /* 0x00003000 */
#define PMU_GRF_SOC_CON4_SPRA_HD_RTSEL_SHIFT               (14U)
#define PMU_GRF_SOC_CON4_SPRA_HD_RTSEL_MASK                (0x3U << PMU_GRF_SOC_CON4_SPRA_HD_RTSEL_SHIFT)               /* 0x0000C000 */
/* SOC_CON5 */
#define PMU_GRF_SOC_CON5_OFFSET                            (0x114U)
#define PMU_GRF_SOC_CON5_OUT2CHIP_RST_INIT_SHIFT           (0U)
#define PMU_GRF_SOC_CON5_OUT2CHIP_RST_INIT_MASK            (0x1FFFU << PMU_GRF_SOC_CON5_OUT2CHIP_RST_INIT_SHIFT)        /* 0x00001FFF */
/* SOC_STATUS */
#define PMU_GRF_SOC_STATUS_OFFSET                          (0x120U)
#define PMU_GRF_SOC_STATUS                                 (0x0U)
#define PMU_GRF_SOC_STATUS_WFI_STATUS_SHIFT                (0U)
#define PMU_GRF_SOC_STATUS_WFI_STATUS_MASK                 (0xFU << PMU_GRF_SOC_STATUS_WFI_STATUS_SHIFT)                /* 0x0000000F */
/* IO_VSEL0 */
#define PMU_GRF_IO_VSEL0_OFFSET                            (0x140U)
#define PMU_GRF_IO_VSEL0_VCCIO2_VOLTAGE_CONTROL_SELECT_SHIFT (0U)
#define PMU_GRF_IO_VSEL0_VCCIO2_VOLTAGE_CONTROL_SELECT_MASK (0x1U << PMU_GRF_IO_VSEL0_VCCIO2_VOLTAGE_CONTROL_SELECT_SHIFT) /* 0x00000001 */
#define PMU_GRF_IO_VSEL0_POC_VCCIO1_SEL18_SHIFT            (1U)
#define PMU_GRF_IO_VSEL0_POC_VCCIO1_SEL18_MASK             (0x1U << PMU_GRF_IO_VSEL0_POC_VCCIO1_SEL18_SHIFT)            /* 0x00000002 */
#define PMU_GRF_IO_VSEL0_POC_VCCIO2_SEL18_SHIFT            (2U)
#define PMU_GRF_IO_VSEL0_POC_VCCIO2_SEL18_MASK             (0x1U << PMU_GRF_IO_VSEL0_POC_VCCIO2_SEL18_SHIFT)            /* 0x00000004 */
#define PMU_GRF_IO_VSEL0_POC_VCCIO3_SEL18_SHIFT            (3U)
#define PMU_GRF_IO_VSEL0_POC_VCCIO3_SEL18_MASK             (0x1U << PMU_GRF_IO_VSEL0_POC_VCCIO3_SEL18_SHIFT)            /* 0x00000008 */
#define PMU_GRF_IO_VSEL0_POC_VCCIO4_SEL18_SHIFT            (4U)
#define PMU_GRF_IO_VSEL0_POC_VCCIO4_SEL18_MASK             (0x1U << PMU_GRF_IO_VSEL0_POC_VCCIO4_SEL18_SHIFT)            /* 0x00000010 */
#define PMU_GRF_IO_VSEL0_POC_VCCIO5_SEL18_SHIFT            (5U)
#define PMU_GRF_IO_VSEL0_POC_VCCIO5_SEL18_MASK             (0x1U << PMU_GRF_IO_VSEL0_POC_VCCIO5_SEL18_SHIFT)            /* 0x00000020 */
#define PMU_GRF_IO_VSEL0_POC_VCCIO6_SEL18_SHIFT            (6U)
#define PMU_GRF_IO_VSEL0_POC_VCCIO6_SEL18_MASK             (0x1U << PMU_GRF_IO_VSEL0_POC_VCCIO6_SEL18_SHIFT)            /* 0x00000040 */
#define PMU_GRF_IO_VSEL0_POC_VCCIO7_SEL18_SHIFT            (7U)
#define PMU_GRF_IO_VSEL0_POC_VCCIO7_SEL18_MASK             (0x1U << PMU_GRF_IO_VSEL0_POC_VCCIO7_SEL18_SHIFT)            /* 0x00000080 */
#define PMU_GRF_IO_VSEL0_POC_VCCIO1_SEL25_SHIFT            (8U)
#define PMU_GRF_IO_VSEL0_POC_VCCIO1_SEL25_MASK             (0x1U << PMU_GRF_IO_VSEL0_POC_VCCIO1_SEL25_SHIFT)            /* 0x00000100 */
#define PMU_GRF_IO_VSEL0_POC_VCCIO2_SEL25_SHIFT            (9U)
#define PMU_GRF_IO_VSEL0_POC_VCCIO2_SEL25_MASK             (0x1U << PMU_GRF_IO_VSEL0_POC_VCCIO2_SEL25_SHIFT)            /* 0x00000200 */
#define PMU_GRF_IO_VSEL0_POC_VCCIO3_SEL25_SHIFT            (10U)
#define PMU_GRF_IO_VSEL0_POC_VCCIO3_SEL25_MASK             (0x1U << PMU_GRF_IO_VSEL0_POC_VCCIO3_SEL25_SHIFT)            /* 0x00000400 */
#define PMU_GRF_IO_VSEL0_POC_VCCIO4_SEL25_SHIFT            (11U)
#define PMU_GRF_IO_VSEL0_POC_VCCIO4_SEL25_MASK             (0x1U << PMU_GRF_IO_VSEL0_POC_VCCIO4_SEL25_SHIFT)            /* 0x00000800 */
#define PMU_GRF_IO_VSEL0_POC_VCCIO5_SEL25_SHIFT            (12U)
#define PMU_GRF_IO_VSEL0_POC_VCCIO5_SEL25_MASK             (0x1U << PMU_GRF_IO_VSEL0_POC_VCCIO5_SEL25_SHIFT)            /* 0x00001000 */
#define PMU_GRF_IO_VSEL0_POC_VCCIO6_SEL25_SHIFT            (13U)
#define PMU_GRF_IO_VSEL0_POC_VCCIO6_SEL25_MASK             (0x1U << PMU_GRF_IO_VSEL0_POC_VCCIO6_SEL25_SHIFT)            /* 0x00002000 */
#define PMU_GRF_IO_VSEL0_POC_VCCIO7_SEL25_SHIFT            (14U)
#define PMU_GRF_IO_VSEL0_POC_VCCIO7_SEL25_MASK             (0x1U << PMU_GRF_IO_VSEL0_POC_VCCIO7_SEL25_SHIFT)            /* 0x00004000 */
/* IO_VSEL1 */
#define PMU_GRF_IO_VSEL1_OFFSET                            (0x144U)
#define PMU_GRF_IO_VSEL1_POC_VCCIO1_SEL33_SHIFT            (1U)
#define PMU_GRF_IO_VSEL1_POC_VCCIO1_SEL33_MASK             (0x1U << PMU_GRF_IO_VSEL1_POC_VCCIO1_SEL33_SHIFT)            /* 0x00000002 */
#define PMU_GRF_IO_VSEL1_POC_VCCIO2_SEL33_SHIFT            (2U)
#define PMU_GRF_IO_VSEL1_POC_VCCIO2_SEL33_MASK             (0x1U << PMU_GRF_IO_VSEL1_POC_VCCIO2_SEL33_SHIFT)            /* 0x00000004 */
#define PMU_GRF_IO_VSEL1_POC_VCCIO3_SEL33_SHIFT            (3U)
#define PMU_GRF_IO_VSEL1_POC_VCCIO3_SEL33_MASK             (0x1U << PMU_GRF_IO_VSEL1_POC_VCCIO3_SEL33_SHIFT)            /* 0x00000008 */
#define PMU_GRF_IO_VSEL1_POC_VCCIO4_SEL33_SHIFT            (4U)
#define PMU_GRF_IO_VSEL1_POC_VCCIO4_SEL33_MASK             (0x1U << PMU_GRF_IO_VSEL1_POC_VCCIO4_SEL33_SHIFT)            /* 0x00000010 */
#define PMU_GRF_IO_VSEL1_POC_VCCIO5_SEL33_SHIFT            (5U)
#define PMU_GRF_IO_VSEL1_POC_VCCIO5_SEL33_MASK             (0x1U << PMU_GRF_IO_VSEL1_POC_VCCIO5_SEL33_SHIFT)            /* 0x00000020 */
#define PMU_GRF_IO_VSEL1_POC_VCCIO6_SEL33_SHIFT            (6U)
#define PMU_GRF_IO_VSEL1_POC_VCCIO6_SEL33_MASK             (0x1U << PMU_GRF_IO_VSEL1_POC_VCCIO6_SEL33_SHIFT)            /* 0x00000040 */
#define PMU_GRF_IO_VSEL1_POC_VCCIO7_SEL33_SHIFT            (7U)
#define PMU_GRF_IO_VSEL1_POC_VCCIO7_SEL33_MASK             (0x1U << PMU_GRF_IO_VSEL1_POC_VCCIO7_SEL33_SHIFT)            /* 0x00000080 */
#define PMU_GRF_IO_VSEL1_POC_VCCIO1_IDDQ_SHIFT             (8U)
#define PMU_GRF_IO_VSEL1_POC_VCCIO1_IDDQ_MASK              (0x1U << PMU_GRF_IO_VSEL1_POC_VCCIO1_IDDQ_SHIFT)             /* 0x00000100 */
#define PMU_GRF_IO_VSEL1_POC_VCCIO2_IDDQ_SHIFT             (9U)
#define PMU_GRF_IO_VSEL1_POC_VCCIO2_IDDQ_MASK              (0x1U << PMU_GRF_IO_VSEL1_POC_VCCIO2_IDDQ_SHIFT)             /* 0x00000200 */
#define PMU_GRF_IO_VSEL1_POC_VCCIO3_IDDQ_SHIFT             (10U)
#define PMU_GRF_IO_VSEL1_POC_VCCIO3_IDDQ_MASK              (0x1U << PMU_GRF_IO_VSEL1_POC_VCCIO3_IDDQ_SHIFT)             /* 0x00000400 */
#define PMU_GRF_IO_VSEL1_POC_VCCIO4_IDDQ_SHIFT             (11U)
#define PMU_GRF_IO_VSEL1_POC_VCCIO4_IDDQ_MASK              (0x1U << PMU_GRF_IO_VSEL1_POC_VCCIO4_IDDQ_SHIFT)             /* 0x00000800 */
#define PMU_GRF_IO_VSEL1_POC_VCCIO5_IDDQ_SHIFT             (12U)
#define PMU_GRF_IO_VSEL1_POC_VCCIO5_IDDQ_MASK              (0x1U << PMU_GRF_IO_VSEL1_POC_VCCIO5_IDDQ_SHIFT)             /* 0x00001000 */
#define PMU_GRF_IO_VSEL1_POC_VCCIO6_IDDQ_SHIFT             (13U)
#define PMU_GRF_IO_VSEL1_POC_VCCIO6_IDDQ_MASK              (0x1U << PMU_GRF_IO_VSEL1_POC_VCCIO6_IDDQ_SHIFT)             /* 0x00002000 */
#define PMU_GRF_IO_VSEL1_POC_VCCIO7_IDDQ_SHIFT             (14U)
#define PMU_GRF_IO_VSEL1_POC_VCCIO7_IDDQ_MASK              (0x1U << PMU_GRF_IO_VSEL1_POC_VCCIO7_IDDQ_SHIFT)             /* 0x00004000 */
/* IO_VSEL2 */
#define PMU_GRF_IO_VSEL2_OFFSET                            (0x148U)
#define PMU_GRF_IO_VSEL2_POC_PMUIO2_SEL18_SHIFT            (1U)
#define PMU_GRF_IO_VSEL2_POC_PMUIO2_SEL18_MASK             (0x1U << PMU_GRF_IO_VSEL2_POC_PMUIO2_SEL18_SHIFT)            /* 0x00000002 */
#define PMU_GRF_IO_VSEL2_POC_PMUIO2_SEL25_SHIFT            (3U)
#define PMU_GRF_IO_VSEL2_POC_PMUIO2_SEL25_MASK             (0x1U << PMU_GRF_IO_VSEL2_POC_PMUIO2_SEL25_SHIFT)            /* 0x00000008 */
#define PMU_GRF_IO_VSEL2_POC_PMUIO2_SEL33_SHIFT            (5U)
#define PMU_GRF_IO_VSEL2_POC_PMUIO2_SEL33_MASK             (0x1U << PMU_GRF_IO_VSEL2_POC_PMUIO2_SEL33_SHIFT)            /* 0x00000020 */
#define PMU_GRF_IO_VSEL2_POC_PMUIO1_IDDQ_SHIFT             (6U)
#define PMU_GRF_IO_VSEL2_POC_PMUIO1_IDDQ_MASK              (0x1U << PMU_GRF_IO_VSEL2_POC_PMUIO1_IDDQ_SHIFT)             /* 0x00000040 */
#define PMU_GRF_IO_VSEL2_POC_PMUIO2_IDDQ_SHIFT             (7U)
#define PMU_GRF_IO_VSEL2_POC_PMUIO2_IDDQ_MASK              (0x1U << PMU_GRF_IO_VSEL2_POC_PMUIO2_IDDQ_SHIFT)             /* 0x00000080 */
/* DLL_CON0 */
#define PMU_GRF_DLL_CON0_OFFSET                            (0x180U)
#define PMU_GRF_DLL_CON0_PVTM_CLKOUT_DIV_SHIFT             (0U)
#define PMU_GRF_DLL_CON0_PVTM_CLKOUT_DIV_MASK              (0xFFFU << PMU_GRF_DLL_CON0_PVTM_CLKOUT_DIV_SHIFT)           /* 0x00000FFF */
/* OS_REG0 */
#define PMU_GRF_OS_REG0_OFFSET                             (0x200U)
#define PMU_GRF_OS_REG0_PMU_OS_REG0_SHIFT                  (0U)
#define PMU_GRF_OS_REG0_PMU_OS_REG0_MASK                   (0xFFFFFFFFU << PMU_GRF_OS_REG0_PMU_OS_REG0_SHIFT)           /* 0xFFFFFFFF */
/* OS_REG1 */
#define PMU_GRF_OS_REG1_OFFSET                             (0x204U)
#define PMU_GRF_OS_REG1_PMU_OS_REG1_SHIFT                  (0U)
#define PMU_GRF_OS_REG1_PMU_OS_REG1_MASK                   (0xFFFFFFFFU << PMU_GRF_OS_REG1_PMU_OS_REG1_SHIFT)           /* 0xFFFFFFFF */
/* OS_REG2 */
#define PMU_GRF_OS_REG2_OFFSET                             (0x208U)
#define PMU_GRF_OS_REG2_PMU_OS_REG2_SHIFT                  (0U)
#define PMU_GRF_OS_REG2_PMU_OS_REG2_MASK                   (0xFFFFFFFFU << PMU_GRF_OS_REG2_PMU_OS_REG2_SHIFT)           /* 0xFFFFFFFF */
/* OS_REG3 */
#define PMU_GRF_OS_REG3_OFFSET                             (0x20CU)
#define PMU_GRF_OS_REG3_PMU_OS_REG3_SHIFT                  (0U)
#define PMU_GRF_OS_REG3_PMU_OS_REG3_MASK                   (0xFFFFFFFFU << PMU_GRF_OS_REG3_PMU_OS_REG3_SHIFT)           /* 0xFFFFFFFF */
/* OS_REG4 */
#define PMU_GRF_OS_REG4_OFFSET                             (0x210U)
#define PMU_GRF_OS_REG4_PMU_OS_REG4_SHIFT                  (0U)
#define PMU_GRF_OS_REG4_PMU_OS_REG4_MASK                   (0xFFFFFFFFU << PMU_GRF_OS_REG4_PMU_OS_REG4_SHIFT)           /* 0xFFFFFFFF */
/* OS_REG5 */
#define PMU_GRF_OS_REG5_OFFSET                             (0x214U)
#define PMU_GRF_OS_REG5_PMU_OS_REG5_SHIFT                  (0U)
#define PMU_GRF_OS_REG5_PMU_OS_REG5_MASK                   (0xFFFFFFFFU << PMU_GRF_OS_REG5_PMU_OS_REG5_SHIFT)           /* 0xFFFFFFFF */
/* OS_REG6 */
#define PMU_GRF_OS_REG6_OFFSET                             (0x218U)
#define PMU_GRF_OS_REG6_PMU_OS_REG6_SHIFT                  (0U)
#define PMU_GRF_OS_REG6_PMU_OS_REG6_MASK                   (0xFFFFFFFFU << PMU_GRF_OS_REG6_PMU_OS_REG6_SHIFT)           /* 0xFFFFFFFF */
/* OS_REG7 */
#define PMU_GRF_OS_REG7_OFFSET                             (0x21CU)
#define PMU_GRF_OS_REG7_PMU_OS_REG7_SHIFT                  (0U)
#define PMU_GRF_OS_REG7_PMU_OS_REG7_MASK                   (0xFFFFFFFFU << PMU_GRF_OS_REG7_PMU_OS_REG7_SHIFT)           /* 0xFFFFFFFF */
/* OS_REG8 */
#define PMU_GRF_OS_REG8_OFFSET                             (0x220U)
#define PMU_GRF_OS_REG8_PMU_OS_REG8_SHIFT                  (0U)
#define PMU_GRF_OS_REG8_PMU_OS_REG8_MASK                   (0xFFFFFFFFU << PMU_GRF_OS_REG8_PMU_OS_REG8_SHIFT)           /* 0xFFFFFFFF */
/* OS_REG9 */
#define PMU_GRF_OS_REG9_OFFSET                             (0x224U)
#define PMU_GRF_OS_REG9_PMU_OS_REG9_SHIFT                  (0U)
#define PMU_GRF_OS_REG9_PMU_OS_REG9_MASK                   (0xFFFFFFFFU << PMU_GRF_OS_REG9_PMU_OS_REG9_SHIFT)           /* 0xFFFFFFFF */
/* OS_REG10 */
#define PMU_GRF_OS_REG10_OFFSET                            (0x228U)
#define PMU_GRF_OS_REG10_PMU_OS_REG10_SHIFT                (0U)
#define PMU_GRF_OS_REG10_PMU_OS_REG10_MASK                 (0xFFFFFFFFU << PMU_GRF_OS_REG10_PMU_OS_REG10_SHIFT)         /* 0xFFFFFFFF */
/* OS_REG11 */
#define PMU_GRF_OS_REG11_OFFSET                            (0x22CU)
#define PMU_GRF_OS_REG11_PMU_OS_REG11_SHIFT                (0U)
#define PMU_GRF_OS_REG11_PMU_OS_REG11_MASK                 (0xFFFFFFFFU << PMU_GRF_OS_REG11_PMU_OS_REG11_SHIFT)         /* 0xFFFFFFFF */
/* RESET_FUNCTION_STATUS */
#define PMU_GRF_RESET_FUNCTION_STATUS_OFFSET               (0x230U)
#define PMU_GRF_RESET_FUNCTION_STATUS_FIRST_RESET_SRC_SHIFT (0U)
#define PMU_GRF_RESET_FUNCTION_STATUS_FIRST_RESET_SRC_MASK (0x1U << PMU_GRF_RESET_FUNCTION_STATUS_FIRST_RESET_SRC_SHIFT) /* 0x00000001 */
#define PMU_GRF_RESET_FUNCTION_STATUS_WDT_RESET_SRC_SHIFT  (1U)
#define PMU_GRF_RESET_FUNCTION_STATUS_WDT_RESET_SRC_MASK   (0x1U << PMU_GRF_RESET_FUNCTION_STATUS_WDT_RESET_SRC_SHIFT)  /* 0x00000002 */
#define PMU_GRF_RESET_FUNCTION_STATUS_TSADC_SHUT_RESET_SRC_SHIFT (2U)
#define PMU_GRF_RESET_FUNCTION_STATUS_TSADC_SHUT_RESET_SRC_MASK (0x1U << PMU_GRF_RESET_FUNCTION_STATUS_TSADC_SHUT_RESET_SRC_SHIFT) /* 0x00000004 */
#define PMU_GRF_RESET_FUNCTION_STATUS_DDR_FAIL_SAFE_SRC_SHIFT (3U)
#define PMU_GRF_RESET_FUNCTION_STATUS_DDR_FAIL_SAFE_SRC_MASK (0x1U << PMU_GRF_RESET_FUNCTION_STATUS_DDR_FAIL_SAFE_SRC_SHIFT) /* 0x00000008 */
/* RESET_FUNCTION_CLR */
#define PMU_GRF_RESET_FUNCTION_CLR_OFFSET                  (0x234U)
#define PMU_GRF_RESET_FUNCTION_CLR_FIRST_RESET_SRC_CLR_SHIFT (0U)
#define PMU_GRF_RESET_FUNCTION_CLR_FIRST_RESET_SRC_CLR_MASK (0x1U << PMU_GRF_RESET_FUNCTION_CLR_FIRST_RESET_SRC_CLR_SHIFT) /* 0x00000001 */
#define PMU_GRF_RESET_FUNCTION_CLR_WDT_RESET_SRC_CLR_SHIFT (1U)
#define PMU_GRF_RESET_FUNCTION_CLR_WDT_RESET_SRC_CLR_MASK  (0x1U << PMU_GRF_RESET_FUNCTION_CLR_WDT_RESET_SRC_CLR_SHIFT) /* 0x00000002 */
#define PMU_GRF_RESET_FUNCTION_CLR_TSADC_SHUT_RESET_SRC_CLR_SHIFT (2U)
#define PMU_GRF_RESET_FUNCTION_CLR_TSADC_SHUT_RESET_SRC_CLR_MASK (0x1U << PMU_GRF_RESET_FUNCTION_CLR_TSADC_SHUT_RESET_SRC_CLR_SHIFT) /* 0x00000004 */
#define PMU_GRF_RESET_FUNCTION_CLR_DDR_FAIL_SAFE_SRC_CLR_SHIFT (3U)
#define PMU_GRF_RESET_FUNCTION_CLR_DDR_FAIL_SAFE_SRC_CLR_MASK (0x1U << PMU_GRF_RESET_FUNCTION_CLR_DDR_FAIL_SAFE_SRC_CLR_SHIFT) /* 0x00000008 */
/* SIG_DETECT_CON */
#define PMU_GRF_SIG_DETECT_CON_OFFSET                      (0x380U)
#define PMU_GRF_SIG_DETECT_CON_SDMMC0_DETECTN_POS_IRQ_MSK_SHIFT (0U)
#define PMU_GRF_SIG_DETECT_CON_SDMMC0_DETECTN_POS_IRQ_MSK_MASK (0x1U << PMU_GRF_SIG_DETECT_CON_SDMMC0_DETECTN_POS_IRQ_MSK_SHIFT) /* 0x00000001 */
#define PMU_GRF_SIG_DETECT_CON_SDMMC0_DETECTN_NEG_IRQ_MSK_SHIFT (1U)
#define PMU_GRF_SIG_DETECT_CON_SDMMC0_DETECTN_NEG_IRQ_MSK_MASK (0x1U << PMU_GRF_SIG_DETECT_CON_SDMMC0_DETECTN_NEG_IRQ_MSK_SHIFT) /* 0x00000002 */
#define PMU_GRF_SIG_DETECT_CON_SDMMC1_DETECTN_POS_IRQ_MSK_SHIFT (2U)
#define PMU_GRF_SIG_DETECT_CON_SDMMC1_DETECTN_POS_IRQ_MSK_MASK (0x1U << PMU_GRF_SIG_DETECT_CON_SDMMC1_DETECTN_POS_IRQ_MSK_SHIFT) /* 0x00000004 */
#define PMU_GRF_SIG_DETECT_CON_SDMMC1_DETECTN_NEG_IRQ_MSK_SHIFT (3U)
#define PMU_GRF_SIG_DETECT_CON_SDMMC1_DETECTN_NEG_IRQ_MSK_MASK (0x1U << PMU_GRF_SIG_DETECT_CON_SDMMC1_DETECTN_NEG_IRQ_MSK_SHIFT) /* 0x00000008 */
#define PMU_GRF_SIG_DETECT_CON_SDMMC2_DETECTN_POS_IRQ_MSK_SHIFT (4U)
#define PMU_GRF_SIG_DETECT_CON_SDMMC2_DETECTN_POS_IRQ_MSK_MASK (0x1U << PMU_GRF_SIG_DETECT_CON_SDMMC2_DETECTN_POS_IRQ_MSK_SHIFT) /* 0x00000010 */
#define PMU_GRF_SIG_DETECT_CON_SDMMC2_DETECTN_NEG_IRQ_MSK_SHIFT (5U)
#define PMU_GRF_SIG_DETECT_CON_SDMMC2_DETECTN_NEG_IRQ_MSK_MASK (0x1U << PMU_GRF_SIG_DETECT_CON_SDMMC2_DETECTN_NEG_IRQ_MSK_SHIFT) /* 0x00000020 */
/* SIG_DETECT_STATUS */
#define PMU_GRF_SIG_DETECT_STATUS_OFFSET                   (0x390U)
#define PMU_GRF_SIG_DETECT_STATUS_SDMMC0_DETECTN_POS_IRQ_SHIFT (0U)
#define PMU_GRF_SIG_DETECT_STATUS_SDMMC0_DETECTN_POS_IRQ_MASK (0x1U << PMU_GRF_SIG_DETECT_STATUS_SDMMC0_DETECTN_POS_IRQ_SHIFT) /* 0x00000001 */
#define PMU_GRF_SIG_DETECT_STATUS_SDMMC0_DETECTN_NEG_IRQ_SHIFT (1U)
#define PMU_GRF_SIG_DETECT_STATUS_SDMMC0_DETECTN_NEG_IRQ_MASK (0x1U << PMU_GRF_SIG_DETECT_STATUS_SDMMC0_DETECTN_NEG_IRQ_SHIFT) /* 0x00000002 */
#define PMU_GRF_SIG_DETECT_STATUS_SDMMC1_DETECTN_POS_IRQ_SHIFT (2U)
#define PMU_GRF_SIG_DETECT_STATUS_SDMMC1_DETECTN_POS_IRQ_MASK (0x1U << PMU_GRF_SIG_DETECT_STATUS_SDMMC1_DETECTN_POS_IRQ_SHIFT) /* 0x00000004 */
#define PMU_GRF_SIG_DETECT_STATUS_SDMMC1_DETECTN_NEG_IRQ_SHIFT (3U)
#define PMU_GRF_SIG_DETECT_STATUS_SDMMC1_DETECTN_NEG_IRQ_MASK (0x1U << PMU_GRF_SIG_DETECT_STATUS_SDMMC1_DETECTN_NEG_IRQ_SHIFT) /* 0x00000008 */
#define PMU_GRF_SIG_DETECT_STATUS_SDMMC2_DETECTN_POS_IRQ_SHIFT (4U)
#define PMU_GRF_SIG_DETECT_STATUS_SDMMC2_DETECTN_POS_IRQ_MASK (0x1U << PMU_GRF_SIG_DETECT_STATUS_SDMMC2_DETECTN_POS_IRQ_SHIFT) /* 0x00000010 */
#define PMU_GRF_SIG_DETECT_STATUS_SDMMC2_DETECTN_NEG_IRQ_SHIFT (5U)
#define PMU_GRF_SIG_DETECT_STATUS_SDMMC2_DETECTN_NEG_IRQ_MASK (0x1U << PMU_GRF_SIG_DETECT_STATUS_SDMMC2_DETECTN_NEG_IRQ_SHIFT) /* 0x00000020 */
/* SIG_DETECT_STATUS_CLEAR */
#define PMU_GRF_SIG_DETECT_STATUS_CLEAR_OFFSET             (0x3A0U)
#define PMU_GRF_SIG_DETECT_STATUS_CLEAR_SDMMC0_DETECTN_POS_IRQ_CLR_SHIFT (0U)
#define PMU_GRF_SIG_DETECT_STATUS_CLEAR_SDMMC0_DETECTN_POS_IRQ_CLR_MASK (0x1U << PMU_GRF_SIG_DETECT_STATUS_CLEAR_SDMMC0_DETECTN_POS_IRQ_CLR_SHIFT) /* 0x00000001 */
#define PMU_GRF_SIG_DETECT_STATUS_CLEAR_SDMMC0_DETECTN_NEG_IRQ_CLR_SHIFT (1U)
#define PMU_GRF_SIG_DETECT_STATUS_CLEAR_SDMMC0_DETECTN_NEG_IRQ_CLR_MASK (0x1U << PMU_GRF_SIG_DETECT_STATUS_CLEAR_SDMMC0_DETECTN_NEG_IRQ_CLR_SHIFT) /* 0x00000002 */
#define PMU_GRF_SIG_DETECT_STATUS_CLEAR_SDMMC1_DETECTN_POS_IRQ_CLR_SHIFT (2U)
#define PMU_GRF_SIG_DETECT_STATUS_CLEAR_SDMMC1_DETECTN_POS_IRQ_CLR_MASK (0x1U << PMU_GRF_SIG_DETECT_STATUS_CLEAR_SDMMC1_DETECTN_POS_IRQ_CLR_SHIFT) /* 0x00000004 */
#define PMU_GRF_SIG_DETECT_STATUS_CLEAR_SDMMC1_DETECTN_NEG_IRQ_CLR_SHIFT (3U)
#define PMU_GRF_SIG_DETECT_STATUS_CLEAR_SDMMC1_DETECTN_NEG_IRQ_CLR_MASK (0x1U << PMU_GRF_SIG_DETECT_STATUS_CLEAR_SDMMC1_DETECTN_NEG_IRQ_CLR_SHIFT) /* 0x00000008 */
#define PMU_GRF_SIG_DETECT_STATUS_CLEAR_SDMMC2_DETECTN_POS_IRQ_CLR_SHIFT (4U)
#define PMU_GRF_SIG_DETECT_STATUS_CLEAR_SDMMC2_DETECTN_POS_IRQ_CLR_MASK (0x1U << PMU_GRF_SIG_DETECT_STATUS_CLEAR_SDMMC2_DETECTN_POS_IRQ_CLR_SHIFT) /* 0x00000010 */
#define PMU_GRF_SIG_DETECT_STATUS_CLEAR_SDMMC2_DETECTN_NEG_IRQ_CLR_SHIFT (5U)
#define PMU_GRF_SIG_DETECT_STATUS_CLEAR_SDMMC2_DETECTN_NEG_IRQ_CLR_MASK (0x1U << PMU_GRF_SIG_DETECT_STATUS_CLEAR_SDMMC2_DETECTN_NEG_IRQ_CLR_SHIFT) /* 0x00000020 */
/* SDMMC_DET_COUNTER */
#define PMU_GRF_SDMMC_DET_COUNTER_OFFSET                   (0x3B0U)
#define PMU_GRF_SDMMC_DET_COUNTER_SDMMC_DETECTN_COUNT_SHIFT (0U)
#define PMU_GRF_SDMMC_DET_COUNTER_SDMMC_DETECTN_COUNT_MASK (0xFFFFFU << PMU_GRF_SDMMC_DET_COUNTER_SDMMC_DETECTN_COUNT_SHIFT) /* 0x000FFFFF */
/*****************************************PMUCRU*****************************************/
/* PPLL_CON0 */
#define PMUCRU_PPLL_CON0_OFFSET                            (0x0U)
#define PMUCRU_PPLL_CON0_FBDIV_SHIFT                       (0U)
#define PMUCRU_PPLL_CON0_FBDIV_MASK                        (0xFFFU << PMUCRU_PPLL_CON0_FBDIV_SHIFT)                     /* 0x00000FFF */
#define PMUCRU_PPLL_CON0_POSTDIV1_SHIFT                    (12U)
#define PMUCRU_PPLL_CON0_POSTDIV1_MASK                     (0x7U << PMUCRU_PPLL_CON0_POSTDIV1_SHIFT)                    /* 0x00007000 */
#define PMUCRU_PPLL_CON0_BYPASS_SHIFT                      (15U)
#define PMUCRU_PPLL_CON0_BYPASS_MASK                       (0x1U << PMUCRU_PPLL_CON0_BYPASS_SHIFT)                      /* 0x00008000 */
/* PPLL_CON1 */
#define PMUCRU_PPLL_CON1_OFFSET                            (0x4U)
#define PMUCRU_PPLL_CON1_REFDIV_SHIFT                      (0U)
#define PMUCRU_PPLL_CON1_REFDIV_MASK                       (0x3FU << PMUCRU_PPLL_CON1_REFDIV_SHIFT)                     /* 0x0000003F */
#define PMUCRU_PPLL_CON1_POSTDIV2_SHIFT                    (6U)
#define PMUCRU_PPLL_CON1_POSTDIV2_MASK                     (0x7U << PMUCRU_PPLL_CON1_POSTDIV2_SHIFT)                    /* 0x000001C0 */
#define PMUCRU_PPLL_CON1_PLL_LOCK_SHIFT                    (10U)
#define PMUCRU_PPLL_CON1_PLL_LOCK_MASK                     (0x1U << PMUCRU_PPLL_CON1_PLL_LOCK_SHIFT)                    /* 0x00000400 */
#define PMUCRU_PPLL_CON1_DSMPD_SHIFT                       (12U)
#define PMUCRU_PPLL_CON1_DSMPD_MASK                        (0x1U << PMUCRU_PPLL_CON1_DSMPD_SHIFT)                       /* 0x00001000 */
#define PMUCRU_PPLL_CON1_PLLPD0_SHIFT                      (13U)
#define PMUCRU_PPLL_CON1_PLLPD0_MASK                       (0x1U << PMUCRU_PPLL_CON1_PLLPD0_SHIFT)                      /* 0x00002000 */
#define PMUCRU_PPLL_CON1_PLLPD1_SHIFT                      (14U)
#define PMUCRU_PPLL_CON1_PLLPD1_MASK                       (0x1U << PMUCRU_PPLL_CON1_PLLPD1_SHIFT)                      /* 0x00004000 */
#define PMUCRU_PPLL_CON1_PLLPDSEL_SHIFT                    (15U)
#define PMUCRU_PPLL_CON1_PLLPDSEL_MASK                     (0x1U << PMUCRU_PPLL_CON1_PLLPDSEL_SHIFT)                    /* 0x00008000 */
/* PPLL_CON2 */
#define PMUCRU_PPLL_CON2_OFFSET                            (0x8U)
#define PMUCRU_PPLL_CON2_FRACDIV_SHIFT                     (0U)
#define PMUCRU_PPLL_CON2_FRACDIV_MASK                      (0xFFFFFFU << PMUCRU_PPLL_CON2_FRACDIV_SHIFT)                /* 0x00FFFFFF */
#define PMUCRU_PPLL_CON2_DACPD_SHIFT                       (24U)
#define PMUCRU_PPLL_CON2_DACPD_MASK                        (0x1U << PMUCRU_PPLL_CON2_DACPD_SHIFT)                       /* 0x01000000 */
#define PMUCRU_PPLL_CON2_FOUTPOSTDIVPD_SHIFT               (25U)
#define PMUCRU_PPLL_CON2_FOUTPOSTDIVPD_MASK                (0x1U << PMUCRU_PPLL_CON2_FOUTPOSTDIVPD_SHIFT)               /* 0x02000000 */
#define PMUCRU_PPLL_CON2_FOUTVCOPD_SHIFT                   (26U)
#define PMUCRU_PPLL_CON2_FOUTVCOPD_MASK                    (0x1U << PMUCRU_PPLL_CON2_FOUTVCOPD_SHIFT)                   /* 0x04000000 */
#define PMUCRU_PPLL_CON2_FOUT4PHASEPD_SHIFT                (27U)
#define PMUCRU_PPLL_CON2_FOUT4PHASEPD_MASK                 (0x1U << PMUCRU_PPLL_CON2_FOUT4PHASEPD_SHIFT)                /* 0x08000000 */
/* PPLL_CON3 */
#define PMUCRU_PPLL_CON3_OFFSET                            (0xCU)
#define PMUCRU_PPLL_CON3_SSMOD_BP_SHIFT                    (0U)
#define PMUCRU_PPLL_CON3_SSMOD_BP_MASK                     (0x1U << PMUCRU_PPLL_CON3_SSMOD_BP_SHIFT)                    /* 0x00000001 */
#define PMUCRU_PPLL_CON3_SSMOD_DISABLE_SSCG_SHIFT          (1U)
#define PMUCRU_PPLL_CON3_SSMOD_DISABLE_SSCG_MASK           (0x1U << PMUCRU_PPLL_CON3_SSMOD_DISABLE_SSCG_SHIFT)          /* 0x00000002 */
#define PMUCRU_PPLL_CON3_SSMOD_RESET_SHIFT                 (2U)
#define PMUCRU_PPLL_CON3_SSMOD_RESET_MASK                  (0x1U << PMUCRU_PPLL_CON3_SSMOD_RESET_SHIFT)                 /* 0x00000004 */
#define PMUCRU_PPLL_CON3_SSMOD_DOWNSPREAD_SHIFT            (3U)
#define PMUCRU_PPLL_CON3_SSMOD_DOWNSPREAD_MASK             (0x1U << PMUCRU_PPLL_CON3_SSMOD_DOWNSPREAD_SHIFT)            /* 0x00000008 */
#define PMUCRU_PPLL_CON3_SSMOD_DIVVAL_SHIFT                (4U)
#define PMUCRU_PPLL_CON3_SSMOD_DIVVAL_MASK                 (0xFU << PMUCRU_PPLL_CON3_SSMOD_DIVVAL_SHIFT)                /* 0x000000F0 */
#define PMUCRU_PPLL_CON3_SSMOD_SPREAD_SHIFT                (8U)
#define PMUCRU_PPLL_CON3_SSMOD_SPREAD_MASK                 (0x1FU << PMUCRU_PPLL_CON3_SSMOD_SPREAD_SHIFT)               /* 0x00001F00 */
/* PPLL_CON4 */
#define PMUCRU_PPLL_CON4_OFFSET                            (0x10U)
#define PMUCRU_PPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT          (0U)
#define PMUCRU_PPLL_CON4_SSMOD_SEL_EXT_WAVE_MASK           (0x1U << PMUCRU_PPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT)          /* 0x00000001 */
#define PMUCRU_PPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT           (8U)
#define PMUCRU_PPLL_CON4_SSMOD_EXT_MAXADDR_MASK            (0xFFU << PMUCRU_PPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT)          /* 0x0000FF00 */
/* HPLL_CON0 */
#define PMUCRU_HPLL_CON0_OFFSET                            (0x40U)
#define PMUCRU_HPLL_CON0_FBDIV_SHIFT                       (0U)
#define PMUCRU_HPLL_CON0_FBDIV_MASK                        (0xFFFU << PMUCRU_HPLL_CON0_FBDIV_SHIFT)                     /* 0x00000FFF */
#define PMUCRU_HPLL_CON0_POSTDIV1_SHIFT                    (12U)
#define PMUCRU_HPLL_CON0_POSTDIV1_MASK                     (0x7U << PMUCRU_HPLL_CON0_POSTDIV1_SHIFT)                    /* 0x00007000 */
#define PMUCRU_HPLL_CON0_BYPASS_SHIFT                      (15U)
#define PMUCRU_HPLL_CON0_BYPASS_MASK                       (0x1U << PMUCRU_HPLL_CON0_BYPASS_SHIFT)                      /* 0x00008000 */
/* HPLL_CON1 */
#define PMUCRU_HPLL_CON1_OFFSET                            (0x44U)
#define PMUCRU_HPLL_CON1_REFDIV_SHIFT                      (0U)
#define PMUCRU_HPLL_CON1_REFDIV_MASK                       (0x3FU << PMUCRU_HPLL_CON1_REFDIV_SHIFT)                     /* 0x0000003F */
#define PMUCRU_HPLL_CON1_POSTDIV2_SHIFT                    (6U)
#define PMUCRU_HPLL_CON1_POSTDIV2_MASK                     (0x7U << PMUCRU_HPLL_CON1_POSTDIV2_SHIFT)                    /* 0x000001C0 */
#define PMUCRU_HPLL_CON1_PLL_LOCK_SHIFT                    (10U)
#define PMUCRU_HPLL_CON1_PLL_LOCK_MASK                     (0x1U << PMUCRU_HPLL_CON1_PLL_LOCK_SHIFT)                    /* 0x00000400 */
#define PMUCRU_HPLL_CON1_DSMPD_SHIFT                       (12U)
#define PMUCRU_HPLL_CON1_DSMPD_MASK                        (0x1U << PMUCRU_HPLL_CON1_DSMPD_SHIFT)                       /* 0x00001000 */
#define PMUCRU_HPLL_CON1_PLLPD0_SHIFT                      (13U)
#define PMUCRU_HPLL_CON1_PLLPD0_MASK                       (0x1U << PMUCRU_HPLL_CON1_PLLPD0_SHIFT)                      /* 0x00002000 */
#define PMUCRU_HPLL_CON1_PLLPD1_SHIFT                      (14U)
#define PMUCRU_HPLL_CON1_PLLPD1_MASK                       (0x1U << PMUCRU_HPLL_CON1_PLLPD1_SHIFT)                      /* 0x00004000 */
#define PMUCRU_HPLL_CON1_PLLPDSEL_SHIFT                    (15U)
#define PMUCRU_HPLL_CON1_PLLPDSEL_MASK                     (0x1U << PMUCRU_HPLL_CON1_PLLPDSEL_SHIFT)                    /* 0x00008000 */
/* HPLL_CON2 */
#define PMUCRU_HPLL_CON2_OFFSET                            (0x48U)
#define PMUCRU_HPLL_CON2_FRACDIV_SHIFT                     (0U)
#define PMUCRU_HPLL_CON2_FRACDIV_MASK                      (0xFFFFFFU << PMUCRU_HPLL_CON2_FRACDIV_SHIFT)                /* 0x00FFFFFF */
#define PMUCRU_HPLL_CON2_DACPD_SHIFT                       (24U)
#define PMUCRU_HPLL_CON2_DACPD_MASK                        (0x1U << PMUCRU_HPLL_CON2_DACPD_SHIFT)                       /* 0x01000000 */
#define PMUCRU_HPLL_CON2_FOUTPOSTDIVPD_SHIFT               (25U)
#define PMUCRU_HPLL_CON2_FOUTPOSTDIVPD_MASK                (0x1U << PMUCRU_HPLL_CON2_FOUTPOSTDIVPD_SHIFT)               /* 0x02000000 */
#define PMUCRU_HPLL_CON2_FOUTVCOPD_SHIFT                   (26U)
#define PMUCRU_HPLL_CON2_FOUTVCOPD_MASK                    (0x1U << PMUCRU_HPLL_CON2_FOUTVCOPD_SHIFT)                   /* 0x04000000 */
#define PMUCRU_HPLL_CON2_FOUT4PHASEPD_SHIFT                (27U)
#define PMUCRU_HPLL_CON2_FOUT4PHASEPD_MASK                 (0x1U << PMUCRU_HPLL_CON2_FOUT4PHASEPD_SHIFT)                /* 0x08000000 */
/* HPLL_CON3 */
#define PMUCRU_HPLL_CON3_OFFSET                            (0x4CU)
#define PMUCRU_HPLL_CON3_SSMOD_BP_SHIFT                    (0U)
#define PMUCRU_HPLL_CON3_SSMOD_BP_MASK                     (0x1U << PMUCRU_HPLL_CON3_SSMOD_BP_SHIFT)                    /* 0x00000001 */
#define PMUCRU_HPLL_CON3_SSMOD_DISABLE_SSCG_SHIFT          (1U)
#define PMUCRU_HPLL_CON3_SSMOD_DISABLE_SSCG_MASK           (0x1U << PMUCRU_HPLL_CON3_SSMOD_DISABLE_SSCG_SHIFT)          /* 0x00000002 */
#define PMUCRU_HPLL_CON3_SSMOD_RESET_SHIFT                 (2U)
#define PMUCRU_HPLL_CON3_SSMOD_RESET_MASK                  (0x1U << PMUCRU_HPLL_CON3_SSMOD_RESET_SHIFT)                 /* 0x00000004 */
#define PMUCRU_HPLL_CON3_SSMOD_DOWNSPREAD_SHIFT            (3U)
#define PMUCRU_HPLL_CON3_SSMOD_DOWNSPREAD_MASK             (0x1U << PMUCRU_HPLL_CON3_SSMOD_DOWNSPREAD_SHIFT)            /* 0x00000008 */
#define PMUCRU_HPLL_CON3_SSMOD_DIVVAL_SHIFT                (4U)
#define PMUCRU_HPLL_CON3_SSMOD_DIVVAL_MASK                 (0xFU << PMUCRU_HPLL_CON3_SSMOD_DIVVAL_SHIFT)                /* 0x000000F0 */
#define PMUCRU_HPLL_CON3_SSMOD_SPREAD_SHIFT                (8U)
#define PMUCRU_HPLL_CON3_SSMOD_SPREAD_MASK                 (0x1FU << PMUCRU_HPLL_CON3_SSMOD_SPREAD_SHIFT)               /* 0x00001F00 */
/* HPLL_CON4 */
#define PMUCRU_HPLL_CON4_OFFSET                            (0x50U)
#define PMUCRU_HPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT          (0U)
#define PMUCRU_HPLL_CON4_SSMOD_SEL_EXT_WAVE_MASK           (0x1U << PMUCRU_HPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT)          /* 0x00000001 */
#define PMUCRU_HPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT           (8U)
#define PMUCRU_HPLL_CON4_SSMOD_EXT_MAXADDR_MASK            (0xFFU << PMUCRU_HPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT)          /* 0x0000FF00 */
/* MODE_CON00 */
#define PMUCRU_MODE_CON00_OFFSET                           (0x80U)
#define PMUCRU_MODE_CON00_CLK_PPLL_MODE_SHIFT              (0U)
#define PMUCRU_MODE_CON00_CLK_PPLL_MODE_MASK               (0x3U << PMUCRU_MODE_CON00_CLK_PPLL_MODE_SHIFT)              /* 0x00000003 */
#define PMUCRU_MODE_CON00_CLK_HPLL_MODE_SHIFT              (2U)
#define PMUCRU_MODE_CON00_CLK_HPLL_MODE_MASK               (0x3U << PMUCRU_MODE_CON00_CLK_HPLL_MODE_SHIFT)              /* 0x0000000C */
/* PMUCLKSEL_CON00 */
#define PMUCRU_PMUCLKSEL_CON00_OFFSET                      (0x100U)
#define PMUCRU_PMUCLKSEL_CON00_XIN_OSC0_DIV_DIV_SHIFT      (0U)
#define PMUCRU_PMUCLKSEL_CON00_XIN_OSC0_DIV_DIV_MASK       (0x1FU << PMUCRU_PMUCLKSEL_CON00_XIN_OSC0_DIV_DIV_SHIFT)     /* 0x0000001F */
#define PMUCRU_PMUCLKSEL_CON00_CLK_RTC_32K_SEL_SHIFT       (6U)
#define PMUCRU_PMUCLKSEL_CON00_CLK_RTC_32K_SEL_MASK        (0x3U << PMUCRU_PMUCLKSEL_CON00_CLK_RTC_32K_SEL_SHIFT)       /* 0x000000C0 */
/* PMUCLKSEL_CON01 */
#define PMUCRU_PMUCLKSEL_CON01_OFFSET                      (0x104U)
#define PMUCRU_PMUCLKSEL_CON01_CLK_OSC0_DIV32K_DIV_SHIFT   (0U)
#define PMUCRU_PMUCLKSEL_CON01_CLK_OSC0_DIV32K_DIV_MASK    (0xFFFFFFFFU << PMUCRU_PMUCLKSEL_CON01_CLK_OSC0_DIV32K_DIV_SHIFT) /* 0xFFFFFFFF */
/* PMUCLKSEL_CON02 */
#define PMUCRU_PMUCLKSEL_CON02_OFFSET                      (0x108U)
#define PMUCRU_PMUCLKSEL_CON02_PCLK_PDPMU_PRE_DIV_SHIFT    (0U)
#define PMUCRU_PMUCLKSEL_CON02_PCLK_PDPMU_PRE_DIV_MASK     (0x1FU << PMUCRU_PMUCLKSEL_CON02_PCLK_PDPMU_PRE_DIV_SHIFT)   /* 0x0000001F */
#define PMUCRU_PMUCLKSEL_CON02_CLK_PDPMU_MUX_SEL_SHIFT     (15U)
#define PMUCRU_PMUCLKSEL_CON02_CLK_PDPMU_MUX_SEL_MASK      (0x1U << PMUCRU_PMUCLKSEL_CON02_CLK_PDPMU_MUX_SEL_SHIFT)     /* 0x00008000 */
/* PMUCLKSEL_CON03 */
#define PMUCRU_PMUCLKSEL_CON03_OFFSET                      (0x10CU)
#define PMUCRU_PMUCLKSEL_CON03_CLK_I2C0_DIV_SHIFT          (0U)
#define PMUCRU_PMUCLKSEL_CON03_CLK_I2C0_DIV_MASK           (0x7FU << PMUCRU_PMUCLKSEL_CON03_CLK_I2C0_DIV_SHIFT)         /* 0x0000007F */
/* PMUCLKSEL_CON04 */
#define PMUCRU_PMUCLKSEL_CON04_OFFSET                      (0x110U)
#define PMUCRU_PMUCLKSEL_CON04_SCLK_UART0_DIV_DIV_SHIFT    (0U)
#define PMUCRU_PMUCLKSEL_CON04_SCLK_UART0_DIV_DIV_MASK     (0x7FU << PMUCRU_PMUCLKSEL_CON04_SCLK_UART0_DIV_DIV_SHIFT)   /* 0x0000007F */
#define PMUCRU_PMUCLKSEL_CON04_SCLK_UART0_DIV_SEL_SHIFT    (8U)
#define PMUCRU_PMUCLKSEL_CON04_SCLK_UART0_DIV_SEL_MASK     (0x3U << PMUCRU_PMUCLKSEL_CON04_SCLK_UART0_DIV_SEL_SHIFT)    /* 0x00000300 */
#define PMUCRU_PMUCLKSEL_CON04_SCLK_UART0_SEL_SHIFT        (10U)
#define PMUCRU_PMUCLKSEL_CON04_SCLK_UART0_SEL_MASK         (0x3U << PMUCRU_PMUCLKSEL_CON04_SCLK_UART0_SEL_SHIFT)        /* 0x00000C00 */
/* PMUCLKSEL_CON05 */
#define PMUCRU_PMUCLKSEL_CON05_OFFSET                      (0x114U)
#define PMUCRU_PMUCLKSEL_CON05_SCLK_UART0_FRACDIV_DIV_SHIFT (0U)
#define PMUCRU_PMUCLKSEL_CON05_SCLK_UART0_FRACDIV_DIV_MASK (0xFFFFFFFFU << PMUCRU_PMUCLKSEL_CON05_SCLK_UART0_FRACDIV_DIV_SHIFT) /* 0xFFFFFFFF */
/* PMUCLKSEL_CON06 */
#define PMUCRU_PMUCLKSEL_CON06_OFFSET                      (0x118U)
#define PMUCRU_PMUCLKSEL_CON06_CLK_PWM0_DIV_SHIFT          (0U)
#define PMUCRU_PMUCLKSEL_CON06_CLK_PWM0_DIV_MASK           (0x7FU << PMUCRU_PMUCLKSEL_CON06_CLK_PWM0_DIV_SHIFT)         /* 0x0000007F */
#define PMUCRU_PMUCLKSEL_CON06_CLK_PWM0_SEL_SHIFT          (7U)
#define PMUCRU_PMUCLKSEL_CON06_CLK_PWM0_SEL_MASK           (0x1U << PMUCRU_PMUCLKSEL_CON06_CLK_PWM0_SEL_SHIFT)          /* 0x00000080 */
#define PMUCRU_PMUCLKSEL_CON06_DBCLK_GPIO0_SEL_SHIFT       (15U)
#define PMUCRU_PMUCLKSEL_CON06_DBCLK_GPIO0_SEL_MASK        (0x1U << PMUCRU_PMUCLKSEL_CON06_DBCLK_GPIO0_SEL_SHIFT)       /* 0x00008000 */
/* PMUCLKSEL_CON07 */
#define PMUCRU_PMUCLKSEL_CON07_OFFSET                      (0x11CU)
#define PMUCRU_PMUCLKSEL_CON07_CLK_REF24M_DIV_SHIFT        (0U)
#define PMUCRU_PMUCLKSEL_CON07_CLK_REF24M_DIV_MASK         (0x3FU << PMUCRU_PMUCLKSEL_CON07_CLK_REF24M_DIV_SHIFT)       /* 0x0000003F */
/* PMUCLKSEL_CON08 */
#define PMUCRU_PMUCLKSEL_CON08_OFFSET                      (0x120U)
#define PMUCRU_PMUCLKSEL_CON08_CLK_USBPHY0_REF_SEL_SHIFT   (0U)
#define PMUCRU_PMUCLKSEL_CON08_CLK_USBPHY0_REF_SEL_MASK    (0x1U << PMUCRU_PMUCLKSEL_CON08_CLK_USBPHY0_REF_SEL_SHIFT)   /* 0x00000001 */
#define PMUCRU_PMUCLKSEL_CON08_CLK_USBPHY1_REF_SEL_SHIFT   (1U)
#define PMUCRU_PMUCLKSEL_CON08_CLK_USBPHY1_REF_SEL_MASK    (0x1U << PMUCRU_PMUCLKSEL_CON08_CLK_USBPHY1_REF_SEL_SHIFT)   /* 0x00000002 */
#define PMUCRU_PMUCLKSEL_CON08_CLK_MIPIDSIPHY0_REF_SEL_SHIFT (2U)
#define PMUCRU_PMUCLKSEL_CON08_CLK_MIPIDSIPHY0_REF_SEL_MASK (0x1U << PMUCRU_PMUCLKSEL_CON08_CLK_MIPIDSIPHY0_REF_SEL_SHIFT) /* 0x00000004 */
#define PMUCRU_PMUCLKSEL_CON08_CLK_MIPIDSIPHY1_REF_SEL_SHIFT (3U)
#define PMUCRU_PMUCLKSEL_CON08_CLK_MIPIDSIPHY1_REF_SEL_MASK (0x1U << PMUCRU_PMUCLKSEL_CON08_CLK_MIPIDSIPHY1_REF_SEL_SHIFT) /* 0x00000008 */
#define PMUCRU_PMUCLKSEL_CON08_CLK_HDMIPHY_REF_SEL_SHIFT   (7U)
#define PMUCRU_PMUCLKSEL_CON08_CLK_HDMIPHY_REF_SEL_MASK    (0x1U << PMUCRU_PMUCLKSEL_CON08_CLK_HDMIPHY_REF_SEL_SHIFT)   /* 0x00000080 */
#define PMUCRU_PMUCLKSEL_CON08_CLK_WIFI_DIV_DIV_SHIFT      (8U)
#define PMUCRU_PMUCLKSEL_CON08_CLK_WIFI_DIV_DIV_MASK       (0x3FU << PMUCRU_PMUCLKSEL_CON08_CLK_WIFI_DIV_DIV_SHIFT)     /* 0x00003F00 */
#define PMUCRU_PMUCLKSEL_CON08_CLK_WIFI_SEL_SHIFT          (15U)
#define PMUCRU_PMUCLKSEL_CON08_CLK_WIFI_SEL_MASK           (0x1U << PMUCRU_PMUCLKSEL_CON08_CLK_WIFI_SEL_SHIFT)          /* 0x00008000 */
/* PMUCLKSEL_CON09 */
#define PMUCRU_PMUCLKSEL_CON09_OFFSET                      (0x124U)
#define PMUCRU_PMUCLKSEL_CON09_CLK_PCIEPHY0_DIV_DIV_SHIFT  (0U)
#define PMUCRU_PMUCLKSEL_CON09_CLK_PCIEPHY0_DIV_DIV_MASK   (0x7U << PMUCRU_PMUCLKSEL_CON09_CLK_PCIEPHY0_DIV_DIV_SHIFT)  /* 0x00000007 */
#define PMUCRU_PMUCLKSEL_CON09_CLK_PCIEPHY0_REF_SEL_SHIFT  (3U)
#define PMUCRU_PMUCLKSEL_CON09_CLK_PCIEPHY0_REF_SEL_MASK   (0x1U << PMUCRU_PMUCLKSEL_CON09_CLK_PCIEPHY0_REF_SEL_SHIFT)  /* 0x00000008 */
#define PMUCRU_PMUCLKSEL_CON09_CLK_PCIEPHY1_DIV_DIV_SHIFT  (4U)
#define PMUCRU_PMUCLKSEL_CON09_CLK_PCIEPHY1_DIV_DIV_MASK   (0x7U << PMUCRU_PMUCLKSEL_CON09_CLK_PCIEPHY1_DIV_DIV_SHIFT)  /* 0x00000070 */
#define PMUCRU_PMUCLKSEL_CON09_CLK_PCIEPHY1_REF_SEL_SHIFT  (7U)
#define PMUCRU_PMUCLKSEL_CON09_CLK_PCIEPHY1_REF_SEL_MASK   (0x1U << PMUCRU_PMUCLKSEL_CON09_CLK_PCIEPHY1_REF_SEL_SHIFT)  /* 0x00000080 */
#define PMUCRU_PMUCLKSEL_CON09_CLK_PCIEPHY2_DIV_DIV_SHIFT  (8U)
#define PMUCRU_PMUCLKSEL_CON09_CLK_PCIEPHY2_DIV_DIV_MASK   (0x7U << PMUCRU_PMUCLKSEL_CON09_CLK_PCIEPHY2_DIV_DIV_SHIFT)  /* 0x00000700 */
#define PMUCRU_PMUCLKSEL_CON09_CLK_PCIEPHY2_REF_SEL_SHIFT  (11U)
#define PMUCRU_PMUCLKSEL_CON09_CLK_PCIEPHY2_REF_SEL_MASK   (0x1U << PMUCRU_PMUCLKSEL_CON09_CLK_PCIEPHY2_REF_SEL_SHIFT)  /* 0x00000800 */
/* PMUGATE_CON00 */
#define PMUCRU_PMUGATE_CON00_OFFSET                        (0x180U)
#define PMUCRU_PMUGATE_CON00_XIN_OSC0_DIV_EN_SHIFT         (0U)
#define PMUCRU_PMUGATE_CON00_XIN_OSC0_DIV_EN_MASK          (0x1U << PMUCRU_PMUGATE_CON00_XIN_OSC0_DIV_EN_SHIFT)         /* 0x00000001 */
#define PMUCRU_PMUGATE_CON00_CLK_OSC0_DIV32K_EN_SHIFT      (1U)
#define PMUCRU_PMUGATE_CON00_CLK_OSC0_DIV32K_EN_MASK       (0x1U << PMUCRU_PMUGATE_CON00_CLK_OSC0_DIV32K_EN_SHIFT)      /* 0x00000002 */
#define PMUCRU_PMUGATE_CON00_PCLK_PDPMU_EN_SHIFT           (2U)
#define PMUCRU_PMUGATE_CON00_PCLK_PDPMU_EN_MASK            (0x1U << PMUCRU_PMUGATE_CON00_PCLK_PDPMU_EN_SHIFT)           /* 0x00000004 */
#define PMUCRU_PMUGATE_CON00_PCLK_PDPMU_NIU_EN_SHIFT       (3U)
#define PMUCRU_PMUGATE_CON00_PCLK_PDPMU_NIU_EN_MASK        (0x1U << PMUCRU_PMUGATE_CON00_PCLK_PDPMU_NIU_EN_SHIFT)       /* 0x00000008 */
#define PMUCRU_PMUGATE_CON00_PCLK_PMUCRU_EN_SHIFT          (4U)
#define PMUCRU_PMUGATE_CON00_PCLK_PMUCRU_EN_MASK           (0x1U << PMUCRU_PMUGATE_CON00_PCLK_PMUCRU_EN_SHIFT)          /* 0x00000010 */
#define PMUCRU_PMUGATE_CON00_PCLK_PMUGRF_EN_SHIFT          (5U)
#define PMUCRU_PMUGATE_CON00_PCLK_PMUGRF_EN_MASK           (0x1U << PMUCRU_PMUGATE_CON00_PCLK_PMUGRF_EN_SHIFT)          /* 0x00000020 */
#define PMUCRU_PMUGATE_CON00_PCLK_PMU_EN_SHIFT             (6U)
#define PMUCRU_PMUGATE_CON00_PCLK_PMU_EN_MASK              (0x1U << PMUCRU_PMUGATE_CON00_PCLK_PMU_EN_SHIFT)             /* 0x00000040 */
#define PMUCRU_PMUGATE_CON00_CLK_PMU_EN_SHIFT              (7U)
#define PMUCRU_PMUGATE_CON00_CLK_PMU_EN_MASK               (0x1U << PMUCRU_PMUGATE_CON00_CLK_PMU_EN_SHIFT)              /* 0x00000080 */
/* PMUGATE_CON01 */
#define PMUCRU_PMUGATE_CON01_OFFSET                        (0x184U)
#define PMUCRU_PMUGATE_CON01_PCLK_I2C0_EN_SHIFT            (0U)
#define PMUCRU_PMUGATE_CON01_PCLK_I2C0_EN_MASK             (0x1U << PMUCRU_PMUGATE_CON01_PCLK_I2C0_EN_SHIFT)            /* 0x00000001 */
#define PMUCRU_PMUGATE_CON01_CLK_I2C0_EN_SHIFT             (1U)
#define PMUCRU_PMUGATE_CON01_CLK_I2C0_EN_MASK              (0x1U << PMUCRU_PMUGATE_CON01_CLK_I2C0_EN_SHIFT)             /* 0x00000002 */
#define PMUCRU_PMUGATE_CON01_PCLK_UART0_EN_SHIFT           (2U)
#define PMUCRU_PMUGATE_CON01_PCLK_UART0_EN_MASK            (0x1U << PMUCRU_PMUGATE_CON01_PCLK_UART0_EN_SHIFT)           /* 0x00000004 */
#define PMUCRU_PMUGATE_CON01_SCLK_UART0_DIV_EN_SHIFT       (3U)
#define PMUCRU_PMUGATE_CON01_SCLK_UART0_DIV_EN_MASK        (0x1U << PMUCRU_PMUGATE_CON01_SCLK_UART0_DIV_EN_SHIFT)       /* 0x00000008 */
#define PMUCRU_PMUGATE_CON01_SCLK_UART0_FRACDIV_EN_SHIFT   (4U)
#define PMUCRU_PMUGATE_CON01_SCLK_UART0_FRACDIV_EN_MASK    (0x1U << PMUCRU_PMUGATE_CON01_SCLK_UART0_FRACDIV_EN_SHIFT)   /* 0x00000010 */
#define PMUCRU_PMUGATE_CON01_SCLK_UART0_EN_SHIFT           (5U)
#define PMUCRU_PMUGATE_CON01_SCLK_UART0_EN_MASK            (0x1U << PMUCRU_PMUGATE_CON01_SCLK_UART0_EN_SHIFT)           /* 0x00000020 */
#define PMUCRU_PMUGATE_CON01_PCLK_PWM0_EN_SHIFT            (6U)
#define PMUCRU_PMUGATE_CON01_PCLK_PWM0_EN_MASK             (0x1U << PMUCRU_PMUGATE_CON01_PCLK_PWM0_EN_SHIFT)            /* 0x00000040 */
#define PMUCRU_PMUGATE_CON01_CLK_PWM0_EN_SHIFT             (7U)
#define PMUCRU_PMUGATE_CON01_CLK_PWM0_EN_MASK              (0x1U << PMUCRU_PMUGATE_CON01_CLK_PWM0_EN_SHIFT)             /* 0x00000080 */
#define PMUCRU_PMUGATE_CON01_CLK_CAPTURE_PWM0_EN_SHIFT     (8U)
#define PMUCRU_PMUGATE_CON01_CLK_CAPTURE_PWM0_EN_MASK      (0x1U << PMUCRU_PMUGATE_CON01_CLK_CAPTURE_PWM0_EN_SHIFT)     /* 0x00000100 */
#define PMUCRU_PMUGATE_CON01_PCLK_GPIO0_EN_SHIFT           (9U)
#define PMUCRU_PMUGATE_CON01_PCLK_GPIO0_EN_MASK            (0x1U << PMUCRU_PMUGATE_CON01_PCLK_GPIO0_EN_SHIFT)           /* 0x00000200 */
#define PMUCRU_PMUGATE_CON01_DBCLK_GPIO0_EN_SHIFT          (10U)
#define PMUCRU_PMUGATE_CON01_DBCLK_GPIO0_EN_MASK           (0x1U << PMUCRU_PMUGATE_CON01_DBCLK_GPIO0_EN_SHIFT)          /* 0x00000400 */
#define PMUCRU_PMUGATE_CON01_PCLK_PMUPVTM_EN_SHIFT         (11U)
#define PMUCRU_PMUGATE_CON01_PCLK_PMUPVTM_EN_MASK          (0x1U << PMUCRU_PMUGATE_CON01_PCLK_PMUPVTM_EN_SHIFT)         /* 0x00000800 */
#define PMUCRU_PMUGATE_CON01_CLK_PMUPVTM_EN_SHIFT          (12U)
#define PMUCRU_PMUGATE_CON01_CLK_PMUPVTM_EN_MASK           (0x1U << PMUCRU_PMUGATE_CON01_CLK_PMUPVTM_EN_SHIFT)          /* 0x00001000 */
#define PMUCRU_PMUGATE_CON01_CLK_CORE_PMUPVTM_EN_SHIFT     (13U)
#define PMUCRU_PMUGATE_CON01_CLK_CORE_PMUPVTM_EN_MASK      (0x1U << PMUCRU_PMUGATE_CON01_CLK_CORE_PMUPVTM_EN_SHIFT)     /* 0x00002000 */
/* PMUGATE_CON02 */
#define PMUCRU_PMUGATE_CON02_OFFSET                        (0x188U)
#define PMUCRU_PMUGATE_CON02_CLK_REF24M_EN_SHIFT           (0U)
#define PMUCRU_PMUGATE_CON02_CLK_REF24M_EN_MASK            (0x1U << PMUCRU_PMUGATE_CON02_CLK_REF24M_EN_SHIFT)           /* 0x00000001 */
#define PMUCRU_PMUGATE_CON02_XIN_OSC0_USBPHY0_EN_SHIFT     (1U)
#define PMUCRU_PMUGATE_CON02_XIN_OSC0_USBPHY0_EN_MASK      (0x1U << PMUCRU_PMUGATE_CON02_XIN_OSC0_USBPHY0_EN_SHIFT)     /* 0x00000002 */
#define PMUCRU_PMUGATE_CON02_XIN_OSC0_USBPHY1_EN_SHIFT     (2U)
#define PMUCRU_PMUGATE_CON02_XIN_OSC0_USBPHY1_EN_MASK      (0x1U << PMUCRU_PMUGATE_CON02_XIN_OSC0_USBPHY1_EN_SHIFT)     /* 0x00000004 */
#define PMUCRU_PMUGATE_CON02_XIN_OSC0_MIPIDSIPHY0_EN_SHIFT (3U)
#define PMUCRU_PMUGATE_CON02_XIN_OSC0_MIPIDSIPHY0_EN_MASK  (0x1U << PMUCRU_PMUGATE_CON02_XIN_OSC0_MIPIDSIPHY0_EN_SHIFT) /* 0x00000008 */
#define PMUCRU_PMUGATE_CON02_XIN_OSC0_MIPIDSIPHY1_EN_SHIFT (4U)
#define PMUCRU_PMUGATE_CON02_XIN_OSC0_MIPIDSIPHY1_EN_MASK  (0x1U << PMUCRU_PMUGATE_CON02_XIN_OSC0_MIPIDSIPHY1_EN_SHIFT) /* 0x00000010 */
#define PMUCRU_PMUGATE_CON02_CLK_WIFI_DIV_EN_SHIFT         (5U)
#define PMUCRU_PMUGATE_CON02_CLK_WIFI_DIV_EN_MASK          (0x1U << PMUCRU_PMUGATE_CON02_CLK_WIFI_DIV_EN_SHIFT)         /* 0x00000020 */
#define PMUCRU_PMUGATE_CON02_CLK_WIFI_OSC0_EN_SHIFT        (6U)
#define PMUCRU_PMUGATE_CON02_CLK_WIFI_OSC0_EN_MASK         (0x1U << PMUCRU_PMUGATE_CON02_CLK_WIFI_OSC0_EN_SHIFT)        /* 0x00000040 */
#define PMUCRU_PMUGATE_CON02_CLK_PCIEPHY0_DIV_EN_SHIFT     (7U)
#define PMUCRU_PMUGATE_CON02_CLK_PCIEPHY0_DIV_EN_MASK      (0x1U << PMUCRU_PMUGATE_CON02_CLK_PCIEPHY0_DIV_EN_SHIFT)     /* 0x00000080 */
#define PMUCRU_PMUGATE_CON02_CLK_PCIEPHY0_OSC0_EN_SHIFT    (8U)
#define PMUCRU_PMUGATE_CON02_CLK_PCIEPHY0_OSC0_EN_MASK     (0x1U << PMUCRU_PMUGATE_CON02_CLK_PCIEPHY0_OSC0_EN_SHIFT)    /* 0x00000100 */
#define PMUCRU_PMUGATE_CON02_CLK_PCIEPHY1_DIV_EN_SHIFT     (9U)
#define PMUCRU_PMUGATE_CON02_CLK_PCIEPHY1_DIV_EN_MASK      (0x1U << PMUCRU_PMUGATE_CON02_CLK_PCIEPHY1_DIV_EN_SHIFT)     /* 0x00000200 */
#define PMUCRU_PMUGATE_CON02_CLK_PCIEPHY1_OSC0_EN_SHIFT    (10U)
#define PMUCRU_PMUGATE_CON02_CLK_PCIEPHY1_OSC0_EN_MASK     (0x1U << PMUCRU_PMUGATE_CON02_CLK_PCIEPHY1_OSC0_EN_SHIFT)    /* 0x00000400 */
#define PMUCRU_PMUGATE_CON02_CLK_PCIEPHY2_DIV_EN_SHIFT     (11U)
#define PMUCRU_PMUGATE_CON02_CLK_PCIEPHY2_DIV_EN_MASK      (0x1U << PMUCRU_PMUGATE_CON02_CLK_PCIEPHY2_DIV_EN_SHIFT)     /* 0x00000800 */
#define PMUCRU_PMUGATE_CON02_CLK_PCIEPHY2_OSC0_EN_SHIFT    (12U)
#define PMUCRU_PMUGATE_CON02_CLK_PCIEPHY2_OSC0_EN_MASK     (0x1U << PMUCRU_PMUGATE_CON02_CLK_PCIEPHY2_OSC0_EN_SHIFT)    /* 0x00001000 */
#define PMUCRU_PMUGATE_CON02_CLK_PCIE30PHY_REF_M_EN_SHIFT  (13U)
#define PMUCRU_PMUGATE_CON02_CLK_PCIE30PHY_REF_M_EN_MASK   (0x1U << PMUCRU_PMUGATE_CON02_CLK_PCIE30PHY_REF_M_EN_SHIFT)  /* 0x00002000 */
#define PMUCRU_PMUGATE_CON02_CLK_PCIE30PHY_REF_N_EN_SHIFT  (14U)
#define PMUCRU_PMUGATE_CON02_CLK_PCIE30PHY_REF_N_EN_MASK   (0x1U << PMUCRU_PMUGATE_CON02_CLK_PCIE30PHY_REF_N_EN_SHIFT)  /* 0x00004000 */
#define PMUCRU_PMUGATE_CON02_XIN_OSC0_EDPPHY_EN_SHIFT      (15U)
#define PMUCRU_PMUGATE_CON02_XIN_OSC0_EDPPHY_EN_MASK       (0x1U << PMUCRU_PMUGATE_CON02_XIN_OSC0_EDPPHY_EN_SHIFT)      /* 0x00008000 */
/* PMUSOFTRST_CON00 */
#define PMUCRU_PMUSOFTRST_CON00_OFFSET                     (0x200U)
#define PMUCRU_PMUSOFTRST_CON00_PRESETN_PDPMU_NIU_SHIFT    (0U)
#define PMUCRU_PMUSOFTRST_CON00_PRESETN_PDPMU_NIU_MASK     (0x1U << PMUCRU_PMUSOFTRST_CON00_PRESETN_PDPMU_NIU_SHIFT)    /* 0x00000001 */
#define PMUCRU_PMUSOFTRST_CON00_PRESETN_PMUCRU_SHIFT       (1U)
#define PMUCRU_PMUSOFTRST_CON00_PRESETN_PMUCRU_MASK        (0x1U << PMUCRU_PMUSOFTRST_CON00_PRESETN_PMUCRU_SHIFT)       /* 0x00000002 */
#define PMUCRU_PMUSOFTRST_CON00_PRESETN_PMUGRF_SHIFT       (2U)
#define PMUCRU_PMUSOFTRST_CON00_PRESETN_PMUGRF_MASK        (0x1U << PMUCRU_PMUSOFTRST_CON00_PRESETN_PMUGRF_SHIFT)       /* 0x00000004 */
#define PMUCRU_PMUSOFTRST_CON00_PRESETN_I2C0_SHIFT         (3U)
#define PMUCRU_PMUSOFTRST_CON00_PRESETN_I2C0_MASK          (0x1U << PMUCRU_PMUSOFTRST_CON00_PRESETN_I2C0_SHIFT)         /* 0x00000008 */
#define PMUCRU_PMUSOFTRST_CON00_RESETN_I2C0_SHIFT          (4U)
#define PMUCRU_PMUSOFTRST_CON00_RESETN_I2C0_MASK           (0x1U << PMUCRU_PMUSOFTRST_CON00_RESETN_I2C0_SHIFT)          /* 0x00000010 */
#define PMUCRU_PMUSOFTRST_CON00_PRESETN_UART0_SHIFT        (5U)
#define PMUCRU_PMUSOFTRST_CON00_PRESETN_UART0_MASK         (0x1U << PMUCRU_PMUSOFTRST_CON00_PRESETN_UART0_SHIFT)        /* 0x00000020 */
#define PMUCRU_PMUSOFTRST_CON00_SRESETN_UART0_SHIFT        (6U)
#define PMUCRU_PMUSOFTRST_CON00_SRESETN_UART0_MASK         (0x1U << PMUCRU_PMUSOFTRST_CON00_SRESETN_UART0_SHIFT)        /* 0x00000040 */
#define PMUCRU_PMUSOFTRST_CON00_PRESETN_PWM0_SHIFT         (7U)
#define PMUCRU_PMUSOFTRST_CON00_PRESETN_PWM0_MASK          (0x1U << PMUCRU_PMUSOFTRST_CON00_PRESETN_PWM0_SHIFT)         /* 0x00000080 */
#define PMUCRU_PMUSOFTRST_CON00_RESETN_PWM0_SHIFT          (8U)
#define PMUCRU_PMUSOFTRST_CON00_RESETN_PWM0_MASK           (0x1U << PMUCRU_PMUSOFTRST_CON00_RESETN_PWM0_SHIFT)          /* 0x00000100 */
#define PMUCRU_PMUSOFTRST_CON00_PRESETN_GPIO0_SHIFT        (9U)
#define PMUCRU_PMUSOFTRST_CON00_PRESETN_GPIO0_MASK         (0x1U << PMUCRU_PMUSOFTRST_CON00_PRESETN_GPIO0_SHIFT)        /* 0x00000200 */
#define PMUCRU_PMUSOFTRST_CON00_DBRESETN_GPIO0_SHIFT       (10U)
#define PMUCRU_PMUSOFTRST_CON00_DBRESETN_GPIO0_MASK        (0x1U << PMUCRU_PMUSOFTRST_CON00_DBRESETN_GPIO0_SHIFT)       /* 0x00000400 */
#define PMUCRU_PMUSOFTRST_CON00_PRESETN_PMUPVTM_SHIFT      (11U)
#define PMUCRU_PMUSOFTRST_CON00_PRESETN_PMUPVTM_MASK       (0x1U << PMUCRU_PMUSOFTRST_CON00_PRESETN_PMUPVTM_SHIFT)      /* 0x00000800 */
#define PMUCRU_PMUSOFTRST_CON00_RESETN_PMUPVTM_SHIFT       (12U)
#define PMUCRU_PMUSOFTRST_CON00_RESETN_PMUPVTM_MASK        (0x1U << PMUCRU_PMUSOFTRST_CON00_RESETN_PMUPVTM_SHIFT)       /* 0x00001000 */
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
/* DPLL_CON0 */
#define CRU_DPLL_CON0_OFFSET                               (0x20U)
#define CRU_DPLL_CON0_FBDIV_SHIFT                          (0U)
#define CRU_DPLL_CON0_FBDIV_MASK                           (0xFFFU << CRU_DPLL_CON0_FBDIV_SHIFT)                        /* 0x00000FFF */
#define CRU_DPLL_CON0_POSTDIV1_SHIFT                       (12U)
#define CRU_DPLL_CON0_POSTDIV1_MASK                        (0x7U << CRU_DPLL_CON0_POSTDIV1_SHIFT)                       /* 0x00007000 */
#define CRU_DPLL_CON0_BYPASS_SHIFT                         (15U)
#define CRU_DPLL_CON0_BYPASS_MASK                          (0x1U << CRU_DPLL_CON0_BYPASS_SHIFT)                         /* 0x00008000 */
/* DPLL_CON1 */
#define CRU_DPLL_CON1_OFFSET                               (0x24U)
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
#define CRU_DPLL_CON2_OFFSET                               (0x28U)
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
#define CRU_DPLL_CON3_OFFSET                               (0x2CU)
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
#define CRU_DPLL_CON4_OFFSET                               (0x30U)
#define CRU_DPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT             (0U)
#define CRU_DPLL_CON4_SSMOD_SEL_EXT_WAVE_MASK              (0x1U << CRU_DPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT)             /* 0x00000001 */
#define CRU_DPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT              (8U)
#define CRU_DPLL_CON4_SSMOD_EXT_MAXADDR_MASK               (0xFFU << CRU_DPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT)             /* 0x0000FF00 */
/* GPLL_CON0 */
#define CRU_GPLL_CON0_OFFSET                               (0x40U)
#define CRU_GPLL_CON0_FBDIV_SHIFT                          (0U)
#define CRU_GPLL_CON0_FBDIV_MASK                           (0xFFFU << CRU_GPLL_CON0_FBDIV_SHIFT)                        /* 0x00000FFF */
#define CRU_GPLL_CON0_POSTDIV1_SHIFT                       (12U)
#define CRU_GPLL_CON0_POSTDIV1_MASK                        (0x7U << CRU_GPLL_CON0_POSTDIV1_SHIFT)                       /* 0x00007000 */
#define CRU_GPLL_CON0_BYPASS_SHIFT                         (15U)
#define CRU_GPLL_CON0_BYPASS_MASK                          (0x1U << CRU_GPLL_CON0_BYPASS_SHIFT)                         /* 0x00008000 */
/* GPLL_CON1 */
#define CRU_GPLL_CON1_OFFSET                               (0x44U)
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
#define CRU_GPLL_CON2_OFFSET                               (0x48U)
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
#define CRU_GPLL_CON3_OFFSET                               (0x4CU)
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
#define CRU_GPLL_CON4_OFFSET                               (0x50U)
#define CRU_GPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT             (0U)
#define CRU_GPLL_CON4_SSMOD_SEL_EXT_WAVE_MASK              (0x1U << CRU_GPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT)             /* 0x00000001 */
#define CRU_GPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT              (8U)
#define CRU_GPLL_CON4_SSMOD_EXT_MAXADDR_MASK               (0xFFU << CRU_GPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT)             /* 0x0000FF00 */
/* CPLL_CON0 */
#define CRU_CPLL_CON0_OFFSET                               (0x60U)
#define CRU_CPLL_CON0_FBDIV_SHIFT                          (0U)
#define CRU_CPLL_CON0_FBDIV_MASK                           (0xFFFU << CRU_CPLL_CON0_FBDIV_SHIFT)                        /* 0x00000FFF */
#define CRU_CPLL_CON0_POSTDIV1_SHIFT                       (12U)
#define CRU_CPLL_CON0_POSTDIV1_MASK                        (0x7U << CRU_CPLL_CON0_POSTDIV1_SHIFT)                       /* 0x00007000 */
#define CRU_CPLL_CON0_BYPASS_SHIFT                         (15U)
#define CRU_CPLL_CON0_BYPASS_MASK                          (0x1U << CRU_CPLL_CON0_BYPASS_SHIFT)                         /* 0x00008000 */
/* CPLL_CON1 */
#define CRU_CPLL_CON1_OFFSET                               (0x64U)
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
#define CRU_CPLL_CON2_OFFSET                               (0x68U)
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
#define CRU_CPLL_CON3_OFFSET                               (0x6CU)
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
#define CRU_CPLL_CON4_OFFSET                               (0x70U)
#define CRU_CPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT             (0U)
#define CRU_CPLL_CON4_SSMOD_SEL_EXT_WAVE_MASK              (0x1U << CRU_CPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT)             /* 0x00000001 */
#define CRU_CPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT              (8U)
#define CRU_CPLL_CON4_SSMOD_EXT_MAXADDR_MASK               (0xFFU << CRU_CPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT)             /* 0x0000FF00 */
/* NPLL_CON0 */
#define CRU_NPLL_CON0_OFFSET                               (0x80U)
#define CRU_NPLL_CON0_FBDIV_SHIFT                          (0U)
#define CRU_NPLL_CON0_FBDIV_MASK                           (0xFFFU << CRU_NPLL_CON0_FBDIV_SHIFT)                        /* 0x00000FFF */
#define CRU_NPLL_CON0_POSTDIV1_SHIFT                       (12U)
#define CRU_NPLL_CON0_POSTDIV1_MASK                        (0x7U << CRU_NPLL_CON0_POSTDIV1_SHIFT)                       /* 0x00007000 */
#define CRU_NPLL_CON0_BYPASS_SHIFT                         (15U)
#define CRU_NPLL_CON0_BYPASS_MASK                          (0x1U << CRU_NPLL_CON0_BYPASS_SHIFT)                         /* 0x00008000 */
/* NPLL_CON1 */
#define CRU_NPLL_CON1_OFFSET                               (0x84U)
#define CRU_NPLL_CON1_REFDIV_SHIFT                         (0U)
#define CRU_NPLL_CON1_REFDIV_MASK                          (0x3FU << CRU_NPLL_CON1_REFDIV_SHIFT)                        /* 0x0000003F */
#define CRU_NPLL_CON1_POSTDIV2_SHIFT                       (6U)
#define CRU_NPLL_CON1_POSTDIV2_MASK                        (0x7U << CRU_NPLL_CON1_POSTDIV2_SHIFT)                       /* 0x000001C0 */
#define CRU_NPLL_CON1_FOUTPOSTDIVPD_SHIFT                  (9U)
#define CRU_NPLL_CON1_FOUTPOSTDIVPD_MASK                   (0x1U << CRU_NPLL_CON1_FOUTPOSTDIVPD_SHIFT)                  /* 0x00000200 */
#define CRU_NPLL_CON1_PLL_LOCK_SHIFT                       (10U)
#define CRU_NPLL_CON1_PLL_LOCK_MASK                        (0x1U << CRU_NPLL_CON1_PLL_LOCK_SHIFT)                       /* 0x00000400 */
#define CRU_NPLL_CON1_FOUTVCOPD_SHIFT                      (11U)
#define CRU_NPLL_CON1_FOUTVCOPD_MASK                       (0x1U << CRU_NPLL_CON1_FOUTVCOPD_SHIFT)                      /* 0x00000800 */
#define CRU_NPLL_CON1_DSMPD_SHIFT                          (12U)
#define CRU_NPLL_CON1_DSMPD_MASK                           (0x1U << CRU_NPLL_CON1_DSMPD_SHIFT)                          /* 0x00001000 */
#define CRU_NPLL_CON1_PLLPD0_SHIFT                         (13U)
#define CRU_NPLL_CON1_PLLPD0_MASK                          (0x1U << CRU_NPLL_CON1_PLLPD0_SHIFT)                         /* 0x00002000 */
#define CRU_NPLL_CON1_PLLPD1_SHIFT                         (14U)
#define CRU_NPLL_CON1_PLLPD1_MASK                          (0x1U << CRU_NPLL_CON1_PLLPD1_SHIFT)                         /* 0x00004000 */
#define CRU_NPLL_CON1_PLLPDSEL_SHIFT                       (15U)
#define CRU_NPLL_CON1_PLLPDSEL_MASK                        (0x1U << CRU_NPLL_CON1_PLLPDSEL_SHIFT)                       /* 0x00008000 */
/* VPLL_CON0 */
#define CRU_VPLL_CON0_OFFSET                               (0xA0U)
#define CRU_VPLL_CON0_FBDIV_SHIFT                          (0U)
#define CRU_VPLL_CON0_FBDIV_MASK                           (0xFFFU << CRU_VPLL_CON0_FBDIV_SHIFT)                        /* 0x00000FFF */
#define CRU_VPLL_CON0_POSTDIV1_SHIFT                       (12U)
#define CRU_VPLL_CON0_POSTDIV1_MASK                        (0x7U << CRU_VPLL_CON0_POSTDIV1_SHIFT)                       /* 0x00007000 */
#define CRU_VPLL_CON0_BYPASS_SHIFT                         (15U)
#define CRU_VPLL_CON0_BYPASS_MASK                          (0x1U << CRU_VPLL_CON0_BYPASS_SHIFT)                         /* 0x00008000 */
/* VPLL_CON1 */
#define CRU_VPLL_CON1_OFFSET                               (0xA4U)
#define CRU_VPLL_CON1_REFDIV_SHIFT                         (0U)
#define CRU_VPLL_CON1_REFDIV_MASK                          (0x3FU << CRU_VPLL_CON1_REFDIV_SHIFT)                        /* 0x0000003F */
#define CRU_VPLL_CON1_POSTDIV2_SHIFT                       (6U)
#define CRU_VPLL_CON1_POSTDIV2_MASK                        (0x7U << CRU_VPLL_CON1_POSTDIV2_SHIFT)                       /* 0x000001C0 */
#define CRU_VPLL_CON1_FOUTPOSTDIVPD_SHIFT                  (9U)
#define CRU_VPLL_CON1_FOUTPOSTDIVPD_MASK                   (0x1U << CRU_VPLL_CON1_FOUTPOSTDIVPD_SHIFT)                  /* 0x00000200 */
#define CRU_VPLL_CON1_PLL_LOCK_SHIFT                       (10U)
#define CRU_VPLL_CON1_PLL_LOCK_MASK                        (0x1U << CRU_VPLL_CON1_PLL_LOCK_SHIFT)                       /* 0x00000400 */
#define CRU_VPLL_CON1_FOUTVCOPD_SHIFT                      (11U)
#define CRU_VPLL_CON1_FOUTVCOPD_MASK                       (0x1U << CRU_VPLL_CON1_FOUTVCOPD_SHIFT)                      /* 0x00000800 */
#define CRU_VPLL_CON1_DSMPD_SHIFT                          (12U)
#define CRU_VPLL_CON1_DSMPD_MASK                           (0x1U << CRU_VPLL_CON1_DSMPD_SHIFT)                          /* 0x00001000 */
#define CRU_VPLL_CON1_PLLPD0_SHIFT                         (13U)
#define CRU_VPLL_CON1_PLLPD0_MASK                          (0x1U << CRU_VPLL_CON1_PLLPD0_SHIFT)                         /* 0x00002000 */
#define CRU_VPLL_CON1_PLLPD1_SHIFT                         (14U)
#define CRU_VPLL_CON1_PLLPD1_MASK                          (0x1U << CRU_VPLL_CON1_PLLPD1_SHIFT)                         /* 0x00004000 */
#define CRU_VPLL_CON1_PLLPDSEL_SHIFT                       (15U)
#define CRU_VPLL_CON1_PLLPDSEL_MASK                        (0x1U << CRU_VPLL_CON1_PLLPDSEL_SHIFT)                       /* 0x00008000 */
/* MODE_CON00 */
#define CRU_MODE_CON00_OFFSET                              (0xC0U)
#define CRU_MODE_CON00_CLK_APLL_MODE_SHIFT                 (0U)
#define CRU_MODE_CON00_CLK_APLL_MODE_MASK                  (0x3U << CRU_MODE_CON00_CLK_APLL_MODE_SHIFT)                 /* 0x00000003 */
#define CRU_MODE_CON00_CLK_DPLL_MODE_SHIFT                 (2U)
#define CRU_MODE_CON00_CLK_DPLL_MODE_MASK                  (0x3U << CRU_MODE_CON00_CLK_DPLL_MODE_SHIFT)                 /* 0x0000000C */
#define CRU_MODE_CON00_CLK_CPLL_MODE_SHIFT                 (4U)
#define CRU_MODE_CON00_CLK_CPLL_MODE_MASK                  (0x3U << CRU_MODE_CON00_CLK_CPLL_MODE_SHIFT)                 /* 0x00000030 */
#define CRU_MODE_CON00_CLK_GPLL_MODE_SHIFT                 (6U)
#define CRU_MODE_CON00_CLK_GPLL_MODE_MASK                  (0x3U << CRU_MODE_CON00_CLK_GPLL_MODE_SHIFT)                 /* 0x000000C0 */
#define CRU_MODE_CON00_CLK_NPLL_MODE_SHIFT                 (10U)
#define CRU_MODE_CON00_CLK_NPLL_MODE_MASK                  (0x3U << CRU_MODE_CON00_CLK_NPLL_MODE_SHIFT)                 /* 0x00000C00 */
#define CRU_MODE_CON00_CLK_VPLL_MODE_SHIFT                 (12U)
#define CRU_MODE_CON00_CLK_VPLL_MODE_MASK                  (0x3U << CRU_MODE_CON00_CLK_VPLL_MODE_SHIFT)                 /* 0x00003000 */
#define CRU_MODE_CON00_USBPHY480M_PLL_MODE_SHIFT           (14U)
#define CRU_MODE_CON00_USBPHY480M_PLL_MODE_MASK            (0x3U << CRU_MODE_CON00_USBPHY480M_PLL_MODE_SHIFT)           /* 0x0000C000 */
/* MISC_CON0 */
#define CRU_MISC_CON0_OFFSET                               (0xC4U)
#define CRU_MISC_CON0_QCHANNEL_ENA_SCLK_CORE_SHIFT         (0U)
#define CRU_MISC_CON0_QCHANNEL_ENA_SCLK_CORE_MASK          (0x1U << CRU_MISC_CON0_QCHANNEL_ENA_SCLK_CORE_SHIFT)         /* 0x00000001 */
#define CRU_MISC_CON0_QCHANNEL_ENA_PCLK_CORE_SHIFT         (1U)
#define CRU_MISC_CON0_QCHANNEL_ENA_PCLK_CORE_MASK          (0x1U << CRU_MISC_CON0_QCHANNEL_ENA_PCLK_CORE_SHIFT)         /* 0x00000002 */
#define CRU_MISC_CON0_QCHANNEL_ENA_ATCLK_CORE_SHIFT        (2U)
#define CRU_MISC_CON0_QCHANNEL_ENA_ATCLK_CORE_MASK         (0x1U << CRU_MISC_CON0_QCHANNEL_ENA_ATCLK_CORE_SHIFT)        /* 0x00000004 */
#define CRU_MISC_CON0_QCHANNEL_ENA_GICCLK_CORE_SHIFT       (3U)
#define CRU_MISC_CON0_QCHANNEL_ENA_GICCLK_CORE_MASK        (0x1U << CRU_MISC_CON0_QCHANNEL_ENA_GICCLK_CORE_SHIFT)       /* 0x00000008 */
#define CRU_MISC_CON0_QCHANNEL_ENA_PDBGCLK_CORE_SHIFT      (4U)
#define CRU_MISC_CON0_QCHANNEL_ENA_PDBGCLK_CORE_MASK       (0x1U << CRU_MISC_CON0_QCHANNEL_ENA_PDBGCLK_CORE_SHIFT)      /* 0x00000010 */
#define CRU_MISC_CON0_QCHANNEL_ENA_CLK_GPU_SHIFT           (5U)
#define CRU_MISC_CON0_QCHANNEL_ENA_CLK_GPU_MASK            (0x1U << CRU_MISC_CON0_QCHANNEL_ENA_CLK_GPU_SHIFT)           /* 0x00000020 */
#define CRU_MISC_CON0_QCHANNEL_ENA_CLK_PDCORE_CORE2GIC_SHIFT (6U)
#define CRU_MISC_CON0_QCHANNEL_ENA_CLK_PDCORE_CORE2GIC_MASK (0x1U << CRU_MISC_CON0_QCHANNEL_ENA_CLK_PDCORE_CORE2GIC_SHIFT) /* 0x00000040 */
#define CRU_MISC_CON0_QCHANNEL_ENA_CLK_PDCORE_GIC2CORE_SHIFT (7U)
#define CRU_MISC_CON0_QCHANNEL_ENA_CLK_PDCORE_GIC2CORE_MASK (0x1U << CRU_MISC_CON0_QCHANNEL_ENA_CLK_PDCORE_GIC2CORE_SHIFT) /* 0x00000080 */
#define CRU_MISC_CON0_QCHANNEL_ENA_CLK_PDGIC_CORE2GIC_SHIFT (8U)
#define CRU_MISC_CON0_QCHANNEL_ENA_CLK_PDGIC_CORE2GIC_MASK (0x1U << CRU_MISC_CON0_QCHANNEL_ENA_CLK_PDGIC_CORE2GIC_SHIFT) /* 0x00000100 */
#define CRU_MISC_CON0_QCHANNEL_ENA_CLK_PDGIC_GIC2CORE_SHIFT (9U)
#define CRU_MISC_CON0_QCHANNEL_ENA_CLK_PDGIC_GIC2CORE_MASK (0x1U << CRU_MISC_CON0_QCHANNEL_ENA_CLK_PDGIC_GIC2CORE_SHIFT) /* 0x00000200 */
#define CRU_MISC_CON0_QCHANNEL_ENA_CLK_GIC600_SHIFT        (10U)
#define CRU_MISC_CON0_QCHANNEL_ENA_CLK_GIC600_MASK         (0x1U << CRU_MISC_CON0_QCHANNEL_ENA_CLK_GIC600_SHIFT)        /* 0x00000400 */
#define CRU_MISC_CON0_QCHANNEL_GATING_ENABLE_SHIFT         (11U)
#define CRU_MISC_CON0_QCHANNEL_GATING_ENABLE_MASK          (0x1U << CRU_MISC_CON0_QCHANNEL_GATING_ENABLE_SHIFT)         /* 0x00000800 */
#define CRU_MISC_CON0_DBGRST_EN_SHIFT                      (12U)
#define CRU_MISC_CON0_DBGRST_EN_MASK                       (0x1U << CRU_MISC_CON0_DBGRST_EN_SHIFT)                      /* 0x00001000 */
#define CRU_MISC_CON0_HWFFC_CLK_SWITCH2CRU_ENA_SHIFT       (13U)
#define CRU_MISC_CON0_HWFFC_CLK_SWITCH2CRU_ENA_MASK        (0x1U << CRU_MISC_CON0_HWFFC_CLK_SWITCH2CRU_ENA_SHIFT)       /* 0x00002000 */
#define CRU_MISC_CON0_CPU_CLK_GATE_EMA_ENA_SHIFT           (14U)
#define CRU_MISC_CON0_CPU_CLK_GATE_EMA_ENA_MASK            (0x1U << CRU_MISC_CON0_CPU_CLK_GATE_EMA_ENA_SHIFT)           /* 0x00004000 */
#define CRU_MISC_CON0_GPU_CLK_GATE_EMA_ENA_SHIFT           (15U)
#define CRU_MISC_CON0_GPU_CLK_GATE_EMA_ENA_MASK            (0x1U << CRU_MISC_CON0_GPU_CLK_GATE_EMA_ENA_SHIFT)           /* 0x00008000 */
/* MISC_CON1 */
#define CRU_MISC_CON1_OFFSET                               (0xC8U)
#define CRU_MISC_CON1_PD_CORE_DWN_CLK_EN_MASK_SHIFT        (0U)
#define CRU_MISC_CON1_PD_CORE_DWN_CLK_EN_MASK_MASK         (0x1U << CRU_MISC_CON1_PD_CORE_DWN_CLK_EN_MASK_SHIFT)        /* 0x00000001 */
#define CRU_MISC_CON1_PD_GPU_DWN_CLK_EN_MASK_SHIFT         (1U)
#define CRU_MISC_CON1_PD_GPU_DWN_CLK_EN_MASK_MASK          (0x1U << CRU_MISC_CON1_PD_GPU_DWN_CLK_EN_MASK_SHIFT)         /* 0x00000002 */
#define CRU_MISC_CON1_PD_NPU_DWN_CLK_EN_MASK_SHIFT         (2U)
#define CRU_MISC_CON1_PD_NPU_DWN_CLK_EN_MASK_MASK          (0x1U << CRU_MISC_CON1_PD_NPU_DWN_CLK_EN_MASK_SHIFT)         /* 0x00000004 */
#define CRU_MISC_CON1_PD_DDR_DWN_CLK_EN_MASK_SHIFT         (3U)
#define CRU_MISC_CON1_PD_DDR_DWN_CLK_EN_MASK_MASK          (0x1U << CRU_MISC_CON1_PD_DDR_DWN_CLK_EN_MASK_SHIFT)         /* 0x00000008 */
#define CRU_MISC_CON1_PD_PERI_DWN_CLK_EN_MASK_SHIFT        (4U)
#define CRU_MISC_CON1_PD_PERI_DWN_CLK_EN_MASK_MASK         (0x1U << CRU_MISC_CON1_PD_PERI_DWN_CLK_EN_MASK_SHIFT)        /* 0x00000010 */
#define CRU_MISC_CON1_PD_PIPE_DWN_CLK_EN_MASK_SHIFT        (5U)
#define CRU_MISC_CON1_PD_PIPE_DWN_CLK_EN_MASK_MASK         (0x1U << CRU_MISC_CON1_PD_PIPE_DWN_CLK_EN_MASK_SHIFT)        /* 0x00000020 */
#define CRU_MISC_CON1_PD_USB_DWN_CLK_EN_MASK_SHIFT         (8U)
#define CRU_MISC_CON1_PD_USB_DWN_CLK_EN_MASK_MASK          (0x1U << CRU_MISC_CON1_PD_USB_DWN_CLK_EN_MASK_SHIFT)         /* 0x00000100 */
#define CRU_MISC_CON1_PD_VI_DWN_CLK_EN_MASK_SHIFT          (9U)
#define CRU_MISC_CON1_PD_VI_DWN_CLK_EN_MASK_MASK           (0x1U << CRU_MISC_CON1_PD_VI_DWN_CLK_EN_MASK_SHIFT)          /* 0x00000200 */
#define CRU_MISC_CON1_PD_VO_DWN_CLK_EN_MASK_SHIFT          (10U)
#define CRU_MISC_CON1_PD_VO_DWN_CLK_EN_MASK_MASK           (0x1U << CRU_MISC_CON1_PD_VO_DWN_CLK_EN_MASK_SHIFT)          /* 0x00000400 */
#define CRU_MISC_CON1_PD_RGA_DWN_CLK_EN_MASK_SHIFT         (11U)
#define CRU_MISC_CON1_PD_RGA_DWN_CLK_EN_MASK_MASK          (0x1U << CRU_MISC_CON1_PD_RGA_DWN_CLK_EN_MASK_SHIFT)         /* 0x00000800 */
#define CRU_MISC_CON1_PD_VPU_DWN_CLK_EN_MASK_SHIFT         (12U)
#define CRU_MISC_CON1_PD_VPU_DWN_CLK_EN_MASK_MASK          (0x1U << CRU_MISC_CON1_PD_VPU_DWN_CLK_EN_MASK_SHIFT)         /* 0x00001000 */
#define CRU_MISC_CON1_PD_RKVENC_DWN_CLK_EN_MASK_SHIFT      (13U)
#define CRU_MISC_CON1_PD_RKVENC_DWN_CLK_EN_MASK_MASK       (0x1U << CRU_MISC_CON1_PD_RKVENC_DWN_CLK_EN_MASK_SHIFT)      /* 0x00002000 */
#define CRU_MISC_CON1_PD_RKVDEC_DWN_CLK_EN_MASK_SHIFT      (14U)
#define CRU_MISC_CON1_PD_RKVDEC_DWN_CLK_EN_MASK_MASK       (0x1U << CRU_MISC_CON1_PD_RKVDEC_DWN_CLK_EN_MASK_SHIFT)      /* 0x00004000 */
#define CRU_MISC_CON1_PD_BUS_DWN_CLK_EN_MASK_SHIFT         (15U)
#define CRU_MISC_CON1_PD_BUS_DWN_CLK_EN_MASK_MASK          (0x1U << CRU_MISC_CON1_PD_BUS_DWN_CLK_EN_MASK_SHIFT)         /* 0x00008000 */
/* MISC_CON2 */
#define CRU_MISC_CON2_OFFSET                               (0xCCU)
#define CRU_MISC_CON2_CLK_RGA_CORE_IDLE_ENABLE_SHIFT       (0U)
#define CRU_MISC_CON2_CLK_RGA_CORE_IDLE_ENABLE_MASK        (0x1U << CRU_MISC_CON2_CLK_RGA_CORE_IDLE_ENABLE_SHIFT)       /* 0x00000001 */
#define CRU_MISC_CON2_CLK_IEP_CORE_IDLE_ENABLE_SHIFT       (1U)
#define CRU_MISC_CON2_CLK_IEP_CORE_IDLE_ENABLE_MASK        (0x1U << CRU_MISC_CON2_CLK_IEP_CORE_IDLE_ENABLE_SHIFT)       /* 0x00000002 */
#define CRU_MISC_CON2_ACLK_VPU_IDLE_ENABLE_SHIFT           (2U)
#define CRU_MISC_CON2_ACLK_VPU_IDLE_ENABLE_MASK            (0x1U << CRU_MISC_CON2_ACLK_VPU_IDLE_ENABLE_SHIFT)           /* 0x00000004 */
#define CRU_MISC_CON2_ACLK_RKVENC_IDLE_ENABLE_SHIFT        (3U)
#define CRU_MISC_CON2_ACLK_RKVENC_IDLE_ENABLE_MASK         (0x1U << CRU_MISC_CON2_ACLK_RKVENC_IDLE_ENABLE_SHIFT)        /* 0x00000008 */
#define CRU_MISC_CON2_HCLK_RKVENC_IDLE_ENABLE_SHIFT        (4U)
#define CRU_MISC_CON2_HCLK_RKVENC_IDLE_ENABLE_MASK         (0x1U << CRU_MISC_CON2_HCLK_RKVENC_IDLE_ENABLE_SHIFT)        /* 0x00000010 */
#define CRU_MISC_CON2_CLK_RKVENC_CORE_IDLE_ENABLE_SHIFT    (5U)
#define CRU_MISC_CON2_CLK_RKVENC_CORE_IDLE_ENABLE_MASK     (0x1U << CRU_MISC_CON2_CLK_RKVENC_CORE_IDLE_ENABLE_SHIFT)    /* 0x00000020 */
#define CRU_MISC_CON2_ACLK_RKVDEC_IDLE_ENABLE_SHIFT        (6U)
#define CRU_MISC_CON2_ACLK_RKVDEC_IDLE_ENABLE_MASK         (0x1U << CRU_MISC_CON2_ACLK_RKVDEC_IDLE_ENABLE_SHIFT)        /* 0x00000040 */
#define CRU_MISC_CON2_CLK_RKVDEC_CORE_IDLE_ENABLE_SHIFT    (7U)
#define CRU_MISC_CON2_CLK_RKVDEC_CORE_IDLE_ENABLE_MASK     (0x1U << CRU_MISC_CON2_CLK_RKVDEC_CORE_IDLE_ENABLE_SHIFT)    /* 0x00000080 */
#define CRU_MISC_CON2_CLK_RKVDEC_CA_IDLE_ENABLE_SHIFT      (8U)
#define CRU_MISC_CON2_CLK_RKVDEC_CA_IDLE_ENABLE_MASK       (0x1U << CRU_MISC_CON2_CLK_RKVDEC_CA_IDLE_ENABLE_SHIFT)      /* 0x00000100 */
#define CRU_MISC_CON2_CLK_RKVDEC_HEVC_CA_IDLE_ENABLE_SHIFT (9U)
#define CRU_MISC_CON2_CLK_RKVDEC_HEVC_CA_IDLE_ENABLE_MASK  (0x1U << CRU_MISC_CON2_CLK_RKVDEC_HEVC_CA_IDLE_ENABLE_SHIFT) /* 0x00000200 */
#define CRU_MISC_CON2_USBPHY480M_SRC_SEL_SHIFT             (15U)
#define CRU_MISC_CON2_USBPHY480M_SRC_SEL_MASK              (0x1U << CRU_MISC_CON2_USBPHY480M_SRC_SEL_SHIFT)             /* 0x00008000 */
/* GLB_CNT_TH */
#define CRU_GLB_CNT_TH_OFFSET                              (0xD0U)
#define CRU_GLB_CNT_TH_GLOBAL_RESET_COUNTER_THRESHOLD_SHIFT (0U)
#define CRU_GLB_CNT_TH_GLOBAL_RESET_COUNTER_THRESHOLD_MASK (0xFFFFU << CRU_GLB_CNT_TH_GLOBAL_RESET_COUNTER_THRESHOLD_SHIFT) /* 0x0000FFFF */
#define CRU_GLB_CNT_TH_RESERVED_SHIFT                      (16U)
#define CRU_GLB_CNT_TH_RESERVED_MASK                       (0xFFFFU << CRU_GLB_CNT_TH_RESERVED_SHIFT)                   /* 0xFFFF0000 */
/* GLB_SRST_FST */
#define CRU_GLB_SRST_FST_OFFSET                            (0xD4U)
#define CRU_GLB_SRST_FST_GLB_SRST_FST_SHIFT                (0U)
#define CRU_GLB_SRST_FST_GLB_SRST_FST_MASK                 (0xFFFFU << CRU_GLB_SRST_FST_GLB_SRST_FST_SHIFT)             /* 0x0000FFFF */
/* GLB_SRST_SND */
#define CRU_GLB_SRST_SND_OFFSET                            (0xD8U)
#define CRU_GLB_SRST_SND_GLB_SRST_SND_SHIFT                (0U)
#define CRU_GLB_SRST_SND_GLB_SRST_SND_MASK                 (0xFFFFU << CRU_GLB_SRST_SND_GLB_SRST_SND_SHIFT)             /* 0x0000FFFF */
/* GLB_RST_CON */
#define CRU_GLB_RST_CON_OFFSET                             (0xDCU)
#define CRU_GLB_RST_CON_TSADC_GLB_SRST_CTRL_SHIFT          (0U)
#define CRU_GLB_RST_CON_TSADC_GLB_SRST_CTRL_MASK           (0x1U << CRU_GLB_RST_CON_TSADC_GLB_SRST_CTRL_SHIFT)          /* 0x00000001 */
#define CRU_GLB_RST_CON_WDT_GLB_SRST_CTRL_SHIFT            (1U)
#define CRU_GLB_RST_CON_WDT_GLB_SRST_CTRL_MASK             (0x1U << CRU_GLB_RST_CON_WDT_GLB_SRST_CTRL_SHIFT)            /* 0x00000002 */
#define CRU_GLB_RST_CON_PMU_SRST_GLB_CTRL_SHIFT            (2U)
#define CRU_GLB_RST_CON_PMU_SRST_GLB_CTRL_MASK             (0x1U << CRU_GLB_RST_CON_PMU_SRST_GLB_CTRL_SHIFT)            /* 0x00000004 */
#define CRU_GLB_RST_CON_PMU_SRST_GLB_EN_SHIFT              (3U)
#define CRU_GLB_RST_CON_PMU_SRST_GLB_EN_MASK               (0x1U << CRU_GLB_RST_CON_PMU_SRST_GLB_EN_SHIFT)              /* 0x00000008 */
#define CRU_GLB_RST_CON_PMU_SRST_WDT_EN_SHIFT              (4U)
#define CRU_GLB_RST_CON_PMU_SRST_WDT_EN_MASK               (0x1U << CRU_GLB_RST_CON_PMU_SRST_WDT_EN_SHIFT)              /* 0x00000010 */
#define CRU_GLB_RST_CON_TSADC_SHUT_RESET_EXT_EN_SHIFT      (6U)
#define CRU_GLB_RST_CON_TSADC_SHUT_RESET_EXT_EN_MASK       (0x1U << CRU_GLB_RST_CON_TSADC_SHUT_RESET_EXT_EN_SHIFT)      /* 0x00000040 */
#define CRU_GLB_RST_CON_WDT_RESET_EXT_EN_SHIFT             (7U)
#define CRU_GLB_RST_CON_WDT_RESET_EXT_EN_MASK              (0x1U << CRU_GLB_RST_CON_WDT_RESET_EXT_EN_SHIFT)             /* 0x00000080 */
#define CRU_GLB_RST_CON_JDB_GLB_SRST_CTRL_ENABLE_SHIFT     (8U)
#define CRU_GLB_RST_CON_JDB_GLB_SRST_CTRL_ENABLE_MASK      (0x1U << CRU_GLB_RST_CON_JDB_GLB_SRST_CTRL_ENABLE_SHIFT)     /* 0x00000100 */
#define CRU_GLB_RST_CON_OSC_CHK_GLB_SRST_CTRL_ENABLE_SHIFT (9U)
#define CRU_GLB_RST_CON_OSC_CHK_GLB_SRST_CTRL_ENABLE_MASK  (0x1U << CRU_GLB_RST_CON_OSC_CHK_GLB_SRST_CTRL_ENABLE_SHIFT) /* 0x00000200 */
#define CRU_GLB_RST_CON_SGRF_CRC_CHK_GLB_SRST_CTRL_ENABLE_SHIFT (10U)
#define CRU_GLB_RST_CON_SGRF_CRC_CHK_GLB_SRST_CTRL_ENABLE_MASK (0x1U << CRU_GLB_RST_CON_SGRF_CRC_CHK_GLB_SRST_CTRL_ENABLE_SHIFT) /* 0x00000400 */
#define CRU_GLB_RST_CON_PMUSGRF_CRC_CHK_GLB_SRST_CTRL_ENABLE_SHIFT (11U)
#define CRU_GLB_RST_CON_PMUSGRF_CRC_CHK_GLB_SRST_CTRL_ENABLE_MASK (0x1U << CRU_GLB_RST_CON_PMUSGRF_CRC_CHK_GLB_SRST_CTRL_ENABLE_SHIFT) /* 0x00000800 */
#define CRU_GLB_RST_CON_JDB_GLB_SRST_CTRL_SHIFT            (12U)
#define CRU_GLB_RST_CON_JDB_GLB_SRST_CTRL_MASK             (0x1U << CRU_GLB_RST_CON_JDB_GLB_SRST_CTRL_SHIFT)            /* 0x00001000 */
#define CRU_GLB_RST_CON_OSC_CHK_GLB_SRST_CTRL_SHIFT        (13U)
#define CRU_GLB_RST_CON_OSC_CHK_GLB_SRST_CTRL_MASK         (0x1U << CRU_GLB_RST_CON_OSC_CHK_GLB_SRST_CTRL_SHIFT)        /* 0x00002000 */
#define CRU_GLB_RST_CON_SGRF_CRC_CHK_GLB_SRST_CTRL_SHIFT   (14U)
#define CRU_GLB_RST_CON_SGRF_CRC_CHK_GLB_SRST_CTRL_MASK    (0x1U << CRU_GLB_RST_CON_SGRF_CRC_CHK_GLB_SRST_CTRL_SHIFT)   /* 0x00004000 */
#define CRU_GLB_RST_CON_PMUSGRF_CRC_CHK_GLB_SRST_CTRL_SHIFT (15U)
#define CRU_GLB_RST_CON_PMUSGRF_CRC_CHK_GLB_SRST_CTRL_MASK (0x1U << CRU_GLB_RST_CON_PMUSGRF_CRC_CHK_GLB_SRST_CTRL_SHIFT) /* 0x00008000 */
/* GLB_RST_ST */
#define CRU_GLB_RST_ST_OFFSET                              (0xE0U)
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
#define CRU_GLB_RST_ST_GLB_JDB_RST_ST_SHIFT                (6U)
#define CRU_GLB_RST_ST_GLB_JDB_RST_ST_MASK                 (0x1U << CRU_GLB_RST_ST_GLB_JDB_RST_ST_SHIFT)                /* 0x00000040 */
#define CRU_GLB_RST_ST_GLB_OSC_CHK_RST_ST_SHIFT            (7U)
#define CRU_GLB_RST_ST_GLB_OSC_CHK_RST_ST_MASK             (0x1U << CRU_GLB_RST_ST_GLB_OSC_CHK_RST_ST_SHIFT)            /* 0x00000080 */
#define CRU_GLB_RST_ST_GLB_SGRF_CRC_RST_ST_SHIFT           (8U)
#define CRU_GLB_RST_ST_GLB_SGRF_CRC_RST_ST_MASK            (0x1U << CRU_GLB_RST_ST_GLB_SGRF_CRC_RST_ST_SHIFT)           /* 0x00000100 */
#define CRU_GLB_RST_ST_GLB_PMUSGRF_CRC_RST_ST_SHIFT        (9U)
#define CRU_GLB_RST_ST_GLB_PMUSGRF_CRC_RST_ST_MASK         (0x1U << CRU_GLB_RST_ST_GLB_PMUSGRF_CRC_RST_ST_SHIFT)        /* 0x00000200 */
/* CLKSEL_CON00 */
#define CRU_CLKSEL_CON00_OFFSET                            (0x100U)
#define CRU_CLKSEL_CON00_CLK_CORE0_DIV_SHIFT               (0U)
#define CRU_CLKSEL_CON00_CLK_CORE0_DIV_MASK                (0x1FU << CRU_CLKSEL_CON00_CLK_CORE0_DIV_SHIFT)              /* 0x0000001F */
#define CRU_CLKSEL_CON00_CLK_CORE_I_SEL_SHIFT              (6U)
#define CRU_CLKSEL_CON00_CLK_CORE_I_SEL_MASK               (0x1U << CRU_CLKSEL_CON00_CLK_CORE_I_SEL_SHIFT)              /* 0x00000040 */
#define CRU_CLKSEL_CON00_CLK_CORE_NDFT_SEL_SHIFT           (7U)
#define CRU_CLKSEL_CON00_CLK_CORE_NDFT_SEL_MASK            (0x1U << CRU_CLKSEL_CON00_CLK_CORE_NDFT_SEL_SHIFT)           /* 0x00000080 */
#define CRU_CLKSEL_CON00_CLK_CORE1_DIV_SHIFT               (8U)
#define CRU_CLKSEL_CON00_CLK_CORE1_DIV_MASK                (0x1FU << CRU_CLKSEL_CON00_CLK_CORE1_DIV_SHIFT)              /* 0x00001F00 */
#define CRU_CLKSEL_CON00_CLK_CORE_NDFT_MUX_SEL_SHIFT       (15U)
#define CRU_CLKSEL_CON00_CLK_CORE_NDFT_MUX_SEL_MASK        (0x1U << CRU_CLKSEL_CON00_CLK_CORE_NDFT_MUX_SEL_SHIFT)       /* 0x00008000 */
/* CLKSEL_CON01 */
#define CRU_CLKSEL_CON01_OFFSET                            (0x104U)
#define CRU_CLKSEL_CON01_CLK_CORE2_DIV_SHIFT               (0U)
#define CRU_CLKSEL_CON01_CLK_CORE2_DIV_MASK                (0x1FU << CRU_CLKSEL_CON01_CLK_CORE2_DIV_SHIFT)              /* 0x0000001F */
#define CRU_CLKSEL_CON01_CLK_CORE3_DIV_SHIFT               (8U)
#define CRU_CLKSEL_CON01_CLK_CORE3_DIV_MASK                (0x1FU << CRU_CLKSEL_CON01_CLK_CORE3_DIV_SHIFT)              /* 0x00001F00 */
/* CLKSEL_CON02 */
#define CRU_CLKSEL_CON02_OFFSET                            (0x108U)
#define CRU_CLKSEL_CON02_SCLK_CORE_SRC_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON02_SCLK_CORE_SRC_DIV_MASK            (0xFU << CRU_CLKSEL_CON02_SCLK_CORE_SRC_DIV_SHIFT)           /* 0x0000000F */
#define CRU_CLKSEL_CON02_SCLK_CORE_SRC_SEL_SHIFT           (8U)
#define CRU_CLKSEL_CON02_SCLK_CORE_SRC_SEL_MASK            (0x3U << CRU_CLKSEL_CON02_SCLK_CORE_SRC_SEL_SHIFT)           /* 0x00000300 */
#define CRU_CLKSEL_CON02_SCLK_CORE_PRE_SEL_SHIFT           (15U)
#define CRU_CLKSEL_CON02_SCLK_CORE_PRE_SEL_MASK            (0x1U << CRU_CLKSEL_CON02_SCLK_CORE_PRE_SEL_SHIFT)           /* 0x00008000 */
/* CLKSEL_CON03 */
#define CRU_CLKSEL_CON03_OFFSET                            (0x10CU)
#define CRU_CLKSEL_CON03_ATCLK_CORE_DIV_SHIFT              (0U)
#define CRU_CLKSEL_CON03_ATCLK_CORE_DIV_MASK               (0x1FU << CRU_CLKSEL_CON03_ATCLK_CORE_DIV_SHIFT)             /* 0x0000001F */
#define CRU_CLKSEL_CON03_GICCLK_CORE_DIV_SHIFT             (8U)
#define CRU_CLKSEL_CON03_GICCLK_CORE_DIV_MASK              (0x1FU << CRU_CLKSEL_CON03_GICCLK_CORE_DIV_SHIFT)            /* 0x00001F00 */
/* CLKSEL_CON04 */
#define CRU_CLKSEL_CON04_OFFSET                            (0x110U)
#define CRU_CLKSEL_CON04_PCLK_CORE_PRE_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON04_PCLK_CORE_PRE_DIV_MASK            (0x1FU << CRU_CLKSEL_CON04_PCLK_CORE_PRE_DIV_SHIFT)          /* 0x0000001F */
#define CRU_CLKSEL_CON04_PERIPHCLK_CORE_PRE_DIV_SHIFT      (8U)
#define CRU_CLKSEL_CON04_PERIPHCLK_CORE_PRE_DIV_MASK       (0x1FU << CRU_CLKSEL_CON04_PERIPHCLK_CORE_PRE_DIV_SHIFT)     /* 0x00001F00 */
/* CLKSEL_CON05 */
#define CRU_CLKSEL_CON05_OFFSET                            (0x114U)
#define CRU_CLKSEL_CON05_RESERVED_SHIFT                    (0U)
#define CRU_CLKSEL_CON05_RESERVED_MASK                     (0xFFU << CRU_CLKSEL_CON05_RESERVED_SHIFT)                   /* 0x000000FF */
#define CRU_CLKSEL_CON05_ACLK_CORE_NDFT_DIV_SHIFT          (8U)
#define CRU_CLKSEL_CON05_ACLK_CORE_NDFT_DIV_MASK           (0x1FU << CRU_CLKSEL_CON05_ACLK_CORE_NDFT_DIV_SHIFT)         /* 0x00001F00 */
#define CRU_CLKSEL_CON05_ACLK_CORE_NIU2BUS_SEL_SHIFT       (14U)
#define CRU_CLKSEL_CON05_ACLK_CORE_NIU2BUS_SEL_MASK        (0x3U << CRU_CLKSEL_CON05_ACLK_CORE_NIU2BUS_SEL_SHIFT)       /* 0x0000C000 */
/* CLKSEL_CON06 */
#define CRU_CLKSEL_CON06_OFFSET                            (0x118U)
#define CRU_CLKSEL_CON06_CLK_GPU_PRE_DIV_SHIFT             (0U)
#define CRU_CLKSEL_CON06_CLK_GPU_PRE_DIV_MASK              (0xFU << CRU_CLKSEL_CON06_CLK_GPU_PRE_DIV_SHIFT)             /* 0x0000000F */
#define CRU_CLKSEL_CON06_CLK_GPU_PRE_SEL_SHIFT             (6U)
#define CRU_CLKSEL_CON06_CLK_GPU_PRE_SEL_MASK              (0x3U << CRU_CLKSEL_CON06_CLK_GPU_PRE_SEL_SHIFT)             /* 0x000000C0 */
#define CRU_CLKSEL_CON06_ACLK_GPU_PRE_DIV_SHIFT            (8U)
#define CRU_CLKSEL_CON06_ACLK_GPU_PRE_DIV_MASK             (0x3U << CRU_CLKSEL_CON06_ACLK_GPU_PRE_DIV_SHIFT)            /* 0x00000300 */
#define CRU_CLKSEL_CON06_CLK_GPU_PRE_MUX_SEL_SHIFT         (11U)
#define CRU_CLKSEL_CON06_CLK_GPU_PRE_MUX_SEL_MASK          (0x1U << CRU_CLKSEL_CON06_CLK_GPU_PRE_MUX_SEL_SHIFT)         /* 0x00000800 */
#define CRU_CLKSEL_CON06_PCLK_GPU_PRE_DIV_SHIFT            (12U)
#define CRU_CLKSEL_CON06_PCLK_GPU_PRE_DIV_MASK             (0xFU << CRU_CLKSEL_CON06_PCLK_GPU_PRE_DIV_SHIFT)            /* 0x0000F000 */
/* CLKSEL_CON07 */
#define CRU_CLKSEL_CON07_OFFSET                            (0x11CU)
#define CRU_CLKSEL_CON07_CLK_NPU_SRC_DIV_SHIFT             (0U)
#define CRU_CLKSEL_CON07_CLK_NPU_SRC_DIV_MASK              (0xFU << CRU_CLKSEL_CON07_CLK_NPU_SRC_DIV_SHIFT)             /* 0x0000000F */
#define CRU_CLKSEL_CON07_CLK_NPU_NP5_DIV_SHIFT             (4U)
#define CRU_CLKSEL_CON07_CLK_NPU_NP5_DIV_MASK              (0x3U << CRU_CLKSEL_CON07_CLK_NPU_NP5_DIV_SHIFT)             /* 0x00000030 */
#define CRU_CLKSEL_CON07_CLK_NPU_SRC_SEL_SHIFT             (6U)
#define CRU_CLKSEL_CON07_CLK_NPU_SRC_SEL_MASK              (0x1U << CRU_CLKSEL_CON07_CLK_NPU_SRC_SEL_SHIFT)             /* 0x00000040 */
#define CRU_CLKSEL_CON07_CLK_NPU_NP5_SEL_SHIFT             (7U)
#define CRU_CLKSEL_CON07_CLK_NPU_NP5_SEL_MASK              (0x1U << CRU_CLKSEL_CON07_CLK_NPU_NP5_SEL_SHIFT)             /* 0x00000080 */
#define CRU_CLKSEL_CON07_CLK_NPU_PRE_NDFT_SEL_SHIFT        (8U)
#define CRU_CLKSEL_CON07_CLK_NPU_PRE_NDFT_SEL_MASK         (0x1U << CRU_CLKSEL_CON07_CLK_NPU_PRE_NDFT_SEL_SHIFT)        /* 0x00000100 */
#define CRU_CLKSEL_CON07_CLK_NPU_PRE_MUX_SEL_SHIFT         (15U)
#define CRU_CLKSEL_CON07_CLK_NPU_PRE_MUX_SEL_MASK          (0x1U << CRU_CLKSEL_CON07_CLK_NPU_PRE_MUX_SEL_SHIFT)         /* 0x00008000 */
/* CLKSEL_CON08 */
#define CRU_CLKSEL_CON08_OFFSET                            (0x120U)
#define CRU_CLKSEL_CON08_HCLK_NPU_PRE_DIV_SHIFT            (0U)
#define CRU_CLKSEL_CON08_HCLK_NPU_PRE_DIV_MASK             (0xFU << CRU_CLKSEL_CON08_HCLK_NPU_PRE_DIV_SHIFT)            /* 0x0000000F */
#define CRU_CLKSEL_CON08_PCLK_NPU_PRE_DIV_SHIFT            (4U)
#define CRU_CLKSEL_CON08_PCLK_NPU_PRE_DIV_MASK             (0xFU << CRU_CLKSEL_CON08_PCLK_NPU_PRE_DIV_SHIFT)            /* 0x000000F0 */
/* CLKSEL_CON09 */
#define CRU_CLKSEL_CON09_OFFSET                            (0x124U)
#define CRU_CLKSEL_CON09_CLK_DDRPHY1X_SRC_DIV_SHIFT        (0U)
#define CRU_CLKSEL_CON09_CLK_DDRPHY1X_SRC_DIV_MASK         (0x1FU << CRU_CLKSEL_CON09_CLK_DDRPHY1X_SRC_DIV_SHIFT)       /* 0x0000001F */
#define CRU_CLKSEL_CON09_CLK_DDRPHY1X_SRC_SEL_SHIFT        (6U)
#define CRU_CLKSEL_CON09_CLK_DDRPHY1X_SRC_SEL_MASK         (0x3U << CRU_CLKSEL_CON09_CLK_DDRPHY1X_SRC_SEL_SHIFT)        /* 0x000000C0 */
#define CRU_CLKSEL_CON09_CLK_DDRPHY1X_SEL_SHIFT            (15U)
#define CRU_CLKSEL_CON09_CLK_DDRPHY1X_SEL_MASK             (0x1U << CRU_CLKSEL_CON09_CLK_DDRPHY1X_SEL_SHIFT)            /* 0x00008000 */
/* CLKSEL_CON10 */
#define CRU_CLKSEL_CON10_OFFSET                            (0x128U)
#define CRU_CLKSEL_CON10_CLK_MSCH_DIV_SHIFT                (0U)
#define CRU_CLKSEL_CON10_CLK_MSCH_DIV_MASK                 (0x3U << CRU_CLKSEL_CON10_CLK_MSCH_DIV_SHIFT)                /* 0x00000003 */
#define CRU_CLKSEL_CON10_ACLK_PERIMID_SEL_SHIFT            (4U)
#define CRU_CLKSEL_CON10_ACLK_PERIMID_SEL_MASK             (0x3U << CRU_CLKSEL_CON10_ACLK_PERIMID_SEL_SHIFT)            /* 0x00000030 */
#define CRU_CLKSEL_CON10_HCLK_PERIMID_SEL_SHIFT            (6U)
#define CRU_CLKSEL_CON10_HCLK_PERIMID_SEL_MASK             (0x3U << CRU_CLKSEL_CON10_HCLK_PERIMID_SEL_SHIFT)            /* 0x000000C0 */
#define CRU_CLKSEL_CON10_ACLK_GIC_AUDIO_SEL_SHIFT          (8U)
#define CRU_CLKSEL_CON10_ACLK_GIC_AUDIO_SEL_MASK           (0x3U << CRU_CLKSEL_CON10_ACLK_GIC_AUDIO_SEL_SHIFT)          /* 0x00000300 */
#define CRU_CLKSEL_CON10_HCLK_GIC_AUDIO_SEL_SHIFT          (10U)
#define CRU_CLKSEL_CON10_HCLK_GIC_AUDIO_SEL_MASK           (0x3U << CRU_CLKSEL_CON10_HCLK_GIC_AUDIO_SEL_SHIFT)          /* 0x00000C00 */
#define CRU_CLKSEL_CON10_DCLK_SDMMC_BUFFER_SEL_SHIFT       (12U)
#define CRU_CLKSEL_CON10_DCLK_SDMMC_BUFFER_SEL_MASK        (0x3U << CRU_CLKSEL_CON10_DCLK_SDMMC_BUFFER_SEL_SHIFT)       /* 0x00003000 */
/* CLKSEL_CON11 */
#define CRU_CLKSEL_CON11_OFFSET                            (0x12CU)
#define CRU_CLKSEL_CON11_CLK_I2S0_8CH_TX_SRC_DIV_SHIFT     (0U)
#define CRU_CLKSEL_CON11_CLK_I2S0_8CH_TX_SRC_DIV_MASK      (0x7FU << CRU_CLKSEL_CON11_CLK_I2S0_8CH_TX_SRC_DIV_SHIFT)    /* 0x0000007F */
#define CRU_CLKSEL_CON11_CLK_I2S0_8CH_TX_SRC_SEL_SHIFT     (8U)
#define CRU_CLKSEL_CON11_CLK_I2S0_8CH_TX_SRC_SEL_MASK      (0x3U << CRU_CLKSEL_CON11_CLK_I2S0_8CH_TX_SRC_SEL_SHIFT)     /* 0x00000300 */
#define CRU_CLKSEL_CON11_MCLK_I2S0_8CH_TX_SEL_SHIFT        (10U)
#define CRU_CLKSEL_CON11_MCLK_I2S0_8CH_TX_SEL_MASK         (0x3U << CRU_CLKSEL_CON11_MCLK_I2S0_8CH_TX_SEL_SHIFT)        /* 0x00000C00 */
#define CRU_CLKSEL_CON11_I2S0_MCLKOUT_TX_SEL_SHIFT         (15U)
#define CRU_CLKSEL_CON11_I2S0_MCLKOUT_TX_SEL_MASK          (0x1U << CRU_CLKSEL_CON11_I2S0_MCLKOUT_TX_SEL_SHIFT)         /* 0x00008000 */
/* CLKSEL_CON12 */
#define CRU_CLKSEL_CON12_OFFSET                            (0x130U)
#define CRU_CLKSEL_CON12_CLK_I2S0_8CH_TX_FRAC_DIV_SHIFT    (0U)
#define CRU_CLKSEL_CON12_CLK_I2S0_8CH_TX_FRAC_DIV_MASK     (0xFFFFFFFFU << CRU_CLKSEL_CON12_CLK_I2S0_8CH_TX_FRAC_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON13 */
#define CRU_CLKSEL_CON13_OFFSET                            (0x134U)
#define CRU_CLKSEL_CON13_CLK_I2S0_8CH_RX_SRC_DIV_SHIFT     (0U)
#define CRU_CLKSEL_CON13_CLK_I2S0_8CH_RX_SRC_DIV_MASK      (0x7FU << CRU_CLKSEL_CON13_CLK_I2S0_8CH_RX_SRC_DIV_SHIFT)    /* 0x0000007F */
#define CRU_CLKSEL_CON13_CLK_I2S0_8CH_RX_SRC_SEL_SHIFT     (8U)
#define CRU_CLKSEL_CON13_CLK_I2S0_8CH_RX_SRC_SEL_MASK      (0x3U << CRU_CLKSEL_CON13_CLK_I2S0_8CH_RX_SRC_SEL_SHIFT)     /* 0x00000300 */
#define CRU_CLKSEL_CON13_MCLK_I2S0_8CH_RX_SEL_SHIFT        (10U)
#define CRU_CLKSEL_CON13_MCLK_I2S0_8CH_RX_SEL_MASK         (0x3U << CRU_CLKSEL_CON13_MCLK_I2S0_8CH_RX_SEL_SHIFT)        /* 0x00000C00 */
#define CRU_CLKSEL_CON13_I2S0_MCLKOUT_RX_SEL_SHIFT         (15U)
#define CRU_CLKSEL_CON13_I2S0_MCLKOUT_RX_SEL_MASK          (0x1U << CRU_CLKSEL_CON13_I2S0_MCLKOUT_RX_SEL_SHIFT)         /* 0x00008000 */
/* CLKSEL_CON14 */
#define CRU_CLKSEL_CON14_OFFSET                            (0x138U)
#define CRU_CLKSEL_CON14_CLK_I2S0_8CH_RX_FRAC_DIV_SHIFT    (0U)
#define CRU_CLKSEL_CON14_CLK_I2S0_8CH_RX_FRAC_DIV_MASK     (0xFFFFFFFFU << CRU_CLKSEL_CON14_CLK_I2S0_8CH_RX_FRAC_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON15 */
#define CRU_CLKSEL_CON15_OFFSET                            (0x13CU)
#define CRU_CLKSEL_CON15_CLK_I2S1_8CH_TX_SRC_DIV_SHIFT     (0U)
#define CRU_CLKSEL_CON15_CLK_I2S1_8CH_TX_SRC_DIV_MASK      (0x7FU << CRU_CLKSEL_CON15_CLK_I2S1_8CH_TX_SRC_DIV_SHIFT)    /* 0x0000007F */
#define CRU_CLKSEL_CON15_CLK_I2S1_8CH_TX_SRC_SEL_SHIFT     (8U)
#define CRU_CLKSEL_CON15_CLK_I2S1_8CH_TX_SRC_SEL_MASK      (0x3U << CRU_CLKSEL_CON15_CLK_I2S1_8CH_TX_SRC_SEL_SHIFT)     /* 0x00000300 */
#define CRU_CLKSEL_CON15_MCLK_I2S1_8CH_TX_SEL_SHIFT        (10U)
#define CRU_CLKSEL_CON15_MCLK_I2S1_8CH_TX_SEL_MASK         (0x3U << CRU_CLKSEL_CON15_MCLK_I2S1_8CH_TX_SEL_SHIFT)        /* 0x00000C00 */
#define CRU_CLKSEL_CON15_I2S1_MCLKOUT_TX_SEL_SHIFT         (15U)
#define CRU_CLKSEL_CON15_I2S1_MCLKOUT_TX_SEL_MASK          (0x1U << CRU_CLKSEL_CON15_I2S1_MCLKOUT_TX_SEL_SHIFT)         /* 0x00008000 */
/* CLKSEL_CON16 */
#define CRU_CLKSEL_CON16_OFFSET                            (0x140U)
#define CRU_CLKSEL_CON16_CLK_I2S1_8CH_TX_FRAC_DIV_SHIFT    (0U)
#define CRU_CLKSEL_CON16_CLK_I2S1_8CH_TX_FRAC_DIV_MASK     (0xFFFFFFFFU << CRU_CLKSEL_CON16_CLK_I2S1_8CH_TX_FRAC_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON17 */
#define CRU_CLKSEL_CON17_OFFSET                            (0x144U)
#define CRU_CLKSEL_CON17_CLK_I2S1_8CH_RX_SRC_DIV_SHIFT     (0U)
#define CRU_CLKSEL_CON17_CLK_I2S1_8CH_RX_SRC_DIV_MASK      (0x7FU << CRU_CLKSEL_CON17_CLK_I2S1_8CH_RX_SRC_DIV_SHIFT)    /* 0x0000007F */
#define CRU_CLKSEL_CON17_CLK_I2S1_8CH_RX_SRC_SEL_SHIFT     (8U)
#define CRU_CLKSEL_CON17_CLK_I2S1_8CH_RX_SRC_SEL_MASK      (0x3U << CRU_CLKSEL_CON17_CLK_I2S1_8CH_RX_SRC_SEL_SHIFT)     /* 0x00000300 */
#define CRU_CLKSEL_CON17_MCLK_I2S1_8CH_RX_SEL_SHIFT        (10U)
#define CRU_CLKSEL_CON17_MCLK_I2S1_8CH_RX_SEL_MASK         (0x3U << CRU_CLKSEL_CON17_MCLK_I2S1_8CH_RX_SEL_SHIFT)        /* 0x00000C00 */
#define CRU_CLKSEL_CON17_I2S1_MCLKOUT_RX_SEL_SHIFT         (15U)
#define CRU_CLKSEL_CON17_I2S1_MCLKOUT_RX_SEL_MASK          (0x1U << CRU_CLKSEL_CON17_I2S1_MCLKOUT_RX_SEL_SHIFT)         /* 0x00008000 */
/* CLKSEL_CON18 */
#define CRU_CLKSEL_CON18_OFFSET                            (0x148U)
#define CRU_CLKSEL_CON18_CLK_I2S1_8CH_RX_FRAC_DIV_SHIFT    (0U)
#define CRU_CLKSEL_CON18_CLK_I2S1_8CH_RX_FRAC_DIV_MASK     (0xFFFFFFFFU << CRU_CLKSEL_CON18_CLK_I2S1_8CH_RX_FRAC_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON19 */
#define CRU_CLKSEL_CON19_OFFSET                            (0x14CU)
#define CRU_CLKSEL_CON19_CLK_I2S2_2CH_SRC_DIV_SHIFT        (0U)
#define CRU_CLKSEL_CON19_CLK_I2S2_2CH_SRC_DIV_MASK         (0x7FU << CRU_CLKSEL_CON19_CLK_I2S2_2CH_SRC_DIV_SHIFT)       /* 0x0000007F */
#define CRU_CLKSEL_CON19_CLK_I2S2_2CH_SRC_SEL_SHIFT        (8U)
#define CRU_CLKSEL_CON19_CLK_I2S2_2CH_SRC_SEL_MASK         (0x3U << CRU_CLKSEL_CON19_CLK_I2S2_2CH_SRC_SEL_SHIFT)        /* 0x00000300 */
#define CRU_CLKSEL_CON19_MCLK_I2S2_2CH_SEL_SHIFT           (10U)
#define CRU_CLKSEL_CON19_MCLK_I2S2_2CH_SEL_MASK            (0x3U << CRU_CLKSEL_CON19_MCLK_I2S2_2CH_SEL_SHIFT)           /* 0x00000C00 */
#define CRU_CLKSEL_CON19_I2S2_MCLKOUT_SEL_SHIFT            (15U)
#define CRU_CLKSEL_CON19_I2S2_MCLKOUT_SEL_MASK             (0x1U << CRU_CLKSEL_CON19_I2S2_MCLKOUT_SEL_SHIFT)            /* 0x00008000 */
/* CLKSEL_CON20 */
#define CRU_CLKSEL_CON20_OFFSET                            (0x150U)
#define CRU_CLKSEL_CON20_CLK_I2S2_2CH_FRAC_DIV_SHIFT       (0U)
#define CRU_CLKSEL_CON20_CLK_I2S2_2CH_FRAC_DIV_MASK        (0xFFFFFFFFU << CRU_CLKSEL_CON20_CLK_I2S2_2CH_FRAC_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON21 */
#define CRU_CLKSEL_CON21_OFFSET                            (0x154U)
#define CRU_CLKSEL_CON21_CLK_I2S3_2CH_TX_SRC_DIV_SHIFT     (0U)
#define CRU_CLKSEL_CON21_CLK_I2S3_2CH_TX_SRC_DIV_MASK      (0x7FU << CRU_CLKSEL_CON21_CLK_I2S3_2CH_TX_SRC_DIV_SHIFT)    /* 0x0000007F */
#define CRU_CLKSEL_CON21_CLK_I2S3_2CH_TX_SRC_SEL_SHIFT     (8U)
#define CRU_CLKSEL_CON21_CLK_I2S3_2CH_TX_SRC_SEL_MASK      (0x3U << CRU_CLKSEL_CON21_CLK_I2S3_2CH_TX_SRC_SEL_SHIFT)     /* 0x00000300 */
#define CRU_CLKSEL_CON21_MCLK_I2S3_2CH_TX_SEL_SHIFT        (10U)
#define CRU_CLKSEL_CON21_MCLK_I2S3_2CH_TX_SEL_MASK         (0x3U << CRU_CLKSEL_CON21_MCLK_I2S3_2CH_TX_SEL_SHIFT)        /* 0x00000C00 */
#define CRU_CLKSEL_CON21_I2S3_MCLKOUT_TX_SEL_SHIFT         (15U)
#define CRU_CLKSEL_CON21_I2S3_MCLKOUT_TX_SEL_MASK          (0x1U << CRU_CLKSEL_CON21_I2S3_MCLKOUT_TX_SEL_SHIFT)         /* 0x00008000 */
/* CLKSEL_CON22 */
#define CRU_CLKSEL_CON22_OFFSET                            (0x158U)
#define CRU_CLKSEL_CON22_CLK_I2S3_2CH_TX_FRAC_DIV_SHIFT    (0U)
#define CRU_CLKSEL_CON22_CLK_I2S3_2CH_TX_FRAC_DIV_MASK     (0xFFFFFFFFU << CRU_CLKSEL_CON22_CLK_I2S3_2CH_TX_FRAC_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON23 */
#define CRU_CLKSEL_CON23_OFFSET                            (0x15CU)
#define CRU_CLKSEL_CON23_MCLK_SPDIF_8CH_SRC_DIV_SHIFT      (0U)
#define CRU_CLKSEL_CON23_MCLK_SPDIF_8CH_SRC_DIV_MASK       (0x7FU << CRU_CLKSEL_CON23_MCLK_SPDIF_8CH_SRC_DIV_SHIFT)     /* 0x0000007F */
#define CRU_CLKSEL_CON23_MCLK_PDM_SEL_SHIFT                (8U)
#define CRU_CLKSEL_CON23_MCLK_PDM_SEL_MASK                 (0x3U << CRU_CLKSEL_CON23_MCLK_PDM_SEL_SHIFT)                /* 0x00000300 */
#define CRU_CLKSEL_CON23_CLK_ACDCDIG_I2C_SEL_SHIFT         (10U)
#define CRU_CLKSEL_CON23_CLK_ACDCDIG_I2C_SEL_MASK          (0x3U << CRU_CLKSEL_CON23_CLK_ACDCDIG_I2C_SEL_SHIFT)         /* 0x00000C00 */
#define CRU_CLKSEL_CON23_MCLK_SPDIF_8CH_SRC_SEL_SHIFT      (14U)
#define CRU_CLKSEL_CON23_MCLK_SPDIF_8CH_SRC_SEL_MASK       (0x1U << CRU_CLKSEL_CON23_MCLK_SPDIF_8CH_SRC_SEL_SHIFT)      /* 0x00004000 */
#define CRU_CLKSEL_CON23_MCLK_SPDIF_8CH_SEL_SHIFT          (15U)
#define CRU_CLKSEL_CON23_MCLK_SPDIF_8CH_SEL_MASK           (0x1U << CRU_CLKSEL_CON23_MCLK_SPDIF_8CH_SEL_SHIFT)          /* 0x00008000 */
/* CLKSEL_CON24 */
#define CRU_CLKSEL_CON24_OFFSET                            (0x160U)
#define CRU_CLKSEL_CON24_MCLK_SPDIF_8CH_FRAC_DIV_SHIFT     (0U)
#define CRU_CLKSEL_CON24_MCLK_SPDIF_8CH_FRAC_DIV_MASK      (0xFFFFFFFFU << CRU_CLKSEL_CON24_MCLK_SPDIF_8CH_FRAC_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON25 */
#define CRU_CLKSEL_CON25_OFFSET                            (0x164U)
#define CRU_CLKSEL_CON25_SCLK_AUDPWM_SRC_DIV_SHIFT         (0U)
#define CRU_CLKSEL_CON25_SCLK_AUDPWM_SRC_DIV_MASK          (0x3FU << CRU_CLKSEL_CON25_SCLK_AUDPWM_SRC_DIV_SHIFT)        /* 0x0000003F */
#define CRU_CLKSEL_CON25_SCLK_AUDPWM_SRC_SEL_SHIFT         (14U)
#define CRU_CLKSEL_CON25_SCLK_AUDPWM_SRC_SEL_MASK          (0x1U << CRU_CLKSEL_CON25_SCLK_AUDPWM_SRC_SEL_SHIFT)         /* 0x00004000 */
#define CRU_CLKSEL_CON25_SCLK_AUDPWM_SEL_SHIFT             (15U)
#define CRU_CLKSEL_CON25_SCLK_AUDPWM_SEL_MASK              (0x1U << CRU_CLKSEL_CON25_SCLK_AUDPWM_SEL_SHIFT)             /* 0x00008000 */
/* CLKSEL_CON26 */
#define CRU_CLKSEL_CON26_OFFSET                            (0x168U)
#define CRU_CLKSEL_CON26_SCLK_AUDPWM_FRAC_DIV_SHIFT        (0U)
#define CRU_CLKSEL_CON26_SCLK_AUDPWM_FRAC_DIV_MASK         (0xFFFFFFFFU << CRU_CLKSEL_CON26_SCLK_AUDPWM_FRAC_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON27 */
#define CRU_CLKSEL_CON27_OFFSET                            (0x16CU)
#define CRU_CLKSEL_CON27_ACLK_SECURE_FLASH_SEL_SHIFT       (0U)
#define CRU_CLKSEL_CON27_ACLK_SECURE_FLASH_SEL_MASK        (0x3U << CRU_CLKSEL_CON27_ACLK_SECURE_FLASH_SEL_SHIFT)       /* 0x00000003 */
#define CRU_CLKSEL_CON27_HCLK_SECURE_FLASH_SEL_SHIFT       (2U)
#define CRU_CLKSEL_CON27_HCLK_SECURE_FLASH_SEL_MASK        (0x3U << CRU_CLKSEL_CON27_HCLK_SECURE_FLASH_SEL_SHIFT)       /* 0x0000000C */
#define CRU_CLKSEL_CON27_CLK_CRYPTO_NS_CORE_SEL_SHIFT      (4U)
#define CRU_CLKSEL_CON27_CLK_CRYPTO_NS_CORE_SEL_MASK       (0x3U << CRU_CLKSEL_CON27_CLK_CRYPTO_NS_CORE_SEL_SHIFT)      /* 0x00000030 */
#define CRU_CLKSEL_CON27_CLK_CRYPTO_NS_PKA_SEL_SHIFT       (6U)
#define CRU_CLKSEL_CON27_CLK_CRYPTO_NS_PKA_SEL_MASK        (0x3U << CRU_CLKSEL_CON27_CLK_CRYPTO_NS_PKA_SEL_SHIFT)       /* 0x000000C0 */
/* CLKSEL_CON28 */
#define CRU_CLKSEL_CON28_OFFSET                            (0x170U)
#define CRU_CLKSEL_CON28_NCLK_NANDC_SEL_SHIFT              (0U)
#define CRU_CLKSEL_CON28_NCLK_NANDC_SEL_MASK               (0x3U << CRU_CLKSEL_CON28_NCLK_NANDC_SEL_SHIFT)              /* 0x00000003 */
#define CRU_CLKSEL_CON28_SCLK_SFC_SEL_SHIFT                (4U)
#define CRU_CLKSEL_CON28_SCLK_SFC_SEL_MASK                 (0x7U << CRU_CLKSEL_CON28_SCLK_SFC_SEL_SHIFT)                /* 0x00000070 */
#define CRU_CLKSEL_CON28_BCLK_EMMC_SEL_SHIFT               (8U)
#define CRU_CLKSEL_CON28_BCLK_EMMC_SEL_MASK                (0x3U << CRU_CLKSEL_CON28_BCLK_EMMC_SEL_SHIFT)               /* 0x00000300 */
#define CRU_CLKSEL_CON28_CCLK_EMMC_SEL_SHIFT               (12U)
#define CRU_CLKSEL_CON28_CCLK_EMMC_SEL_MASK                (0x7U << CRU_CLKSEL_CON28_CCLK_EMMC_SEL_SHIFT)               /* 0x00007000 */
/* CLKSEL_CON29 */
#define CRU_CLKSEL_CON29_OFFSET                            (0x174U)
#define CRU_CLKSEL_CON29_ACLK_PIPE_SEL_SHIFT               (0U)
#define CRU_CLKSEL_CON29_ACLK_PIPE_SEL_MASK                (0x3U << CRU_CLKSEL_CON29_ACLK_PIPE_SEL_SHIFT)               /* 0x00000003 */
#define CRU_CLKSEL_CON29_PCLK_PIPE_DIV_SHIFT               (4U)
#define CRU_CLKSEL_CON29_PCLK_PIPE_DIV_MASK                (0xFU << CRU_CLKSEL_CON29_PCLK_PIPE_DIV_SHIFT)               /* 0x000000F0 */
#define CRU_CLKSEL_CON29_CLK_USB3OTG0_SUSPEND_SEL_SHIFT    (8U)
#define CRU_CLKSEL_CON29_CLK_USB3OTG0_SUSPEND_SEL_MASK     (0x1U << CRU_CLKSEL_CON29_CLK_USB3OTG0_SUSPEND_SEL_SHIFT)    /* 0x00000100 */
#define CRU_CLKSEL_CON29_CLK_USB3OTG1_SUSPEND_SEL_SHIFT    (9U)
#define CRU_CLKSEL_CON29_CLK_USB3OTG1_SUSPEND_SEL_MASK     (0x1U << CRU_CLKSEL_CON29_CLK_USB3OTG1_SUSPEND_SEL_SHIFT)    /* 0x00000200 */
#define CRU_CLKSEL_CON29_CLK_XPCS_EEE_SEL_SHIFT            (13U)
#define CRU_CLKSEL_CON29_CLK_XPCS_EEE_SEL_MASK             (0x1U << CRU_CLKSEL_CON29_CLK_XPCS_EEE_SEL_SHIFT)            /* 0x00002000 */
/* CLKSEL_CON30 */
#define CRU_CLKSEL_CON30_OFFSET                            (0x178U)
#define CRU_CLKSEL_CON30_ACLK_PHP_SEL_SHIFT                (0U)
#define CRU_CLKSEL_CON30_ACLK_PHP_SEL_MASK                 (0x3U << CRU_CLKSEL_CON30_ACLK_PHP_SEL_SHIFT)                /* 0x00000003 */
#define CRU_CLKSEL_CON30_HCLK_PHP_SEL_SHIFT                (2U)
#define CRU_CLKSEL_CON30_HCLK_PHP_SEL_MASK                 (0x3U << CRU_CLKSEL_CON30_HCLK_PHP_SEL_SHIFT)                /* 0x0000000C */
#define CRU_CLKSEL_CON30_PCLK_PHP_DIV_SHIFT                (4U)
#define CRU_CLKSEL_CON30_PCLK_PHP_DIV_MASK                 (0xFU << CRU_CLKSEL_CON30_PCLK_PHP_DIV_SHIFT)                /* 0x000000F0 */
#define CRU_CLKSEL_CON30_CLK_SDMMC0_SEL_SHIFT              (8U)
#define CRU_CLKSEL_CON30_CLK_SDMMC0_SEL_MASK               (0x7U << CRU_CLKSEL_CON30_CLK_SDMMC0_SEL_SHIFT)              /* 0x00000700 */
#define CRU_CLKSEL_CON30_CLK_SDMMC1_SEL_SHIFT              (12U)
#define CRU_CLKSEL_CON30_CLK_SDMMC1_SEL_MASK               (0x7U << CRU_CLKSEL_CON30_CLK_SDMMC1_SEL_SHIFT)              /* 0x00007000 */
/* CLKSEL_CON31 */
#define CRU_CLKSEL_CON31_OFFSET                            (0x17CU)
#define CRU_CLKSEL_CON31_RMII0_MODE_SHIFT                  (0U)
#define CRU_CLKSEL_CON31_RMII0_MODE_MASK                   (0x3U << CRU_CLKSEL_CON31_RMII0_MODE_SHIFT)                  /* 0x00000003 */
#define CRU_CLKSEL_CON31_RMII0_EXTCLK_SEL_SHIFT            (2U)
#define CRU_CLKSEL_CON31_RMII0_EXTCLK_SEL_MASK             (0x1U << CRU_CLKSEL_CON31_RMII0_EXTCLK_SEL_SHIFT)            /* 0x00000004 */
#define CRU_CLKSEL_CON31_RMII0_CLK_SEL_SHIFT               (3U)
#define CRU_CLKSEL_CON31_RMII0_CLK_SEL_MASK                (0x1U << CRU_CLKSEL_CON31_RMII0_CLK_SEL_SHIFT)               /* 0x00000008 */
#define CRU_CLKSEL_CON31_RGMII0_CLK_SEL_SHIFT              (4U)
#define CRU_CLKSEL_CON31_RGMII0_CLK_SEL_MASK               (0x3U << CRU_CLKSEL_CON31_RGMII0_CLK_SEL_SHIFT)              /* 0x00000030 */
#define CRU_CLKSEL_CON31_CLK_MAC0_2TOP_SEL_SHIFT           (8U)
#define CRU_CLKSEL_CON31_CLK_MAC0_2TOP_SEL_MASK            (0x3U << CRU_CLKSEL_CON31_CLK_MAC0_2TOP_SEL_SHIFT)           /* 0x00000300 */
#define CRU_CLKSEL_CON31_CLK_GMAC0_PTP_REF_SEL_SHIFT       (12U)
#define CRU_CLKSEL_CON31_CLK_GMAC0_PTP_REF_SEL_MASK        (0x3U << CRU_CLKSEL_CON31_CLK_GMAC0_PTP_REF_SEL_SHIFT)       /* 0x00003000 */
#define CRU_CLKSEL_CON31_CLK_MAC0_OUT_SEL_SHIFT            (14U)
#define CRU_CLKSEL_CON31_CLK_MAC0_OUT_SEL_MASK             (0x3U << CRU_CLKSEL_CON31_CLK_MAC0_OUT_SEL_SHIFT)            /* 0x0000C000 */
/* CLKSEL_CON32 */
#define CRU_CLKSEL_CON32_OFFSET                            (0x180U)
#define CRU_CLKSEL_CON32_ACLK_USB_SEL_SHIFT                (0U)
#define CRU_CLKSEL_CON32_ACLK_USB_SEL_MASK                 (0x3U << CRU_CLKSEL_CON32_ACLK_USB_SEL_SHIFT)                /* 0x00000003 */
#define CRU_CLKSEL_CON32_HCLK_USB_SEL_SHIFT                (2U)
#define CRU_CLKSEL_CON32_HCLK_USB_SEL_MASK                 (0x3U << CRU_CLKSEL_CON32_HCLK_USB_SEL_SHIFT)                /* 0x0000000C */
#define CRU_CLKSEL_CON32_PCLK_USB_DIV_SHIFT                (4U)
#define CRU_CLKSEL_CON32_PCLK_USB_DIV_MASK                 (0xFU << CRU_CLKSEL_CON32_PCLK_USB_DIV_SHIFT)                /* 0x000000F0 */
#define CRU_CLKSEL_CON32_CLK_SDMMC2_SEL_SHIFT              (8U)
#define CRU_CLKSEL_CON32_CLK_SDMMC2_SEL_MASK               (0x7U << CRU_CLKSEL_CON32_CLK_SDMMC2_SEL_SHIFT)              /* 0x00000700 */
/* CLKSEL_CON33 */
#define CRU_CLKSEL_CON33_OFFSET                            (0x184U)
#define CRU_CLKSEL_CON33_RMII1_MODE_SHIFT                  (0U)
#define CRU_CLKSEL_CON33_RMII1_MODE_MASK                   (0x3U << CRU_CLKSEL_CON33_RMII1_MODE_SHIFT)                  /* 0x00000003 */
#define CRU_CLKSEL_CON33_RMII1_EXTCLK_SEL_SHIFT            (2U)
#define CRU_CLKSEL_CON33_RMII1_EXTCLK_SEL_MASK             (0x1U << CRU_CLKSEL_CON33_RMII1_EXTCLK_SEL_SHIFT)            /* 0x00000004 */
#define CRU_CLKSEL_CON33_RMII1_CLK_SEL_SHIFT               (3U)
#define CRU_CLKSEL_CON33_RMII1_CLK_SEL_MASK                (0x1U << CRU_CLKSEL_CON33_RMII1_CLK_SEL_SHIFT)               /* 0x00000008 */
#define CRU_CLKSEL_CON33_RGMII1_CLK_SEL_SHIFT              (4U)
#define CRU_CLKSEL_CON33_RGMII1_CLK_SEL_MASK               (0x3U << CRU_CLKSEL_CON33_RGMII1_CLK_SEL_SHIFT)              /* 0x00000030 */
#define CRU_CLKSEL_CON33_CLK_MAC1_2TOP_SEL_SHIFT           (8U)
#define CRU_CLKSEL_CON33_CLK_MAC1_2TOP_SEL_MASK            (0x3U << CRU_CLKSEL_CON33_CLK_MAC1_2TOP_SEL_SHIFT)           /* 0x00000300 */
#define CRU_CLKSEL_CON33_CLK_GMAC1_PTP_REF_SEL_SHIFT       (12U)
#define CRU_CLKSEL_CON33_CLK_GMAC1_PTP_REF_SEL_MASK        (0x3U << CRU_CLKSEL_CON33_CLK_GMAC1_PTP_REF_SEL_SHIFT)       /* 0x00003000 */
#define CRU_CLKSEL_CON33_CLK_MAC1_OUT_SEL_SHIFT            (14U)
#define CRU_CLKSEL_CON33_CLK_MAC1_OUT_SEL_MASK             (0x3U << CRU_CLKSEL_CON33_CLK_MAC1_OUT_SEL_SHIFT)            /* 0x0000C000 */
/* CLKSEL_CON34 */
#define CRU_CLKSEL_CON34_OFFSET                            (0x188U)
#define CRU_CLKSEL_CON34_ACLK_VI_SEL_SHIFT                 (0U)
#define CRU_CLKSEL_CON34_ACLK_VI_SEL_MASK                  (0x3U << CRU_CLKSEL_CON34_ACLK_VI_SEL_SHIFT)                 /* 0x00000003 */
#define CRU_CLKSEL_CON34_HCLK_VI_DIV_SHIFT                 (4U)
#define CRU_CLKSEL_CON34_HCLK_VI_DIV_MASK                  (0xFU << CRU_CLKSEL_CON34_HCLK_VI_DIV_SHIFT)                 /* 0x000000F0 */
#define CRU_CLKSEL_CON34_PCLK_VI_DIV_SHIFT                 (8U)
#define CRU_CLKSEL_CON34_PCLK_VI_DIV_MASK                  (0xFU << CRU_CLKSEL_CON34_PCLK_VI_DIV_SHIFT)                 /* 0x00000F00 */
#define CRU_CLKSEL_CON34_DCLK_VICAP1_SEL_SHIFT             (14U)
#define CRU_CLKSEL_CON34_DCLK_VICAP1_SEL_MASK              (0x3U << CRU_CLKSEL_CON34_DCLK_VICAP1_SEL_SHIFT)             /* 0x0000C000 */
/* CLKSEL_CON35 */
#define CRU_CLKSEL_CON35_OFFSET                            (0x18CU)
#define CRU_CLKSEL_CON35_CLK_ISP_DIV_SHIFT                 (0U)
#define CRU_CLKSEL_CON35_CLK_ISP_DIV_MASK                  (0x1FU << CRU_CLKSEL_CON35_CLK_ISP_DIV_SHIFT)                /* 0x0000001F */
#define CRU_CLKSEL_CON35_CLK_ISP_SEL_SHIFT                 (6U)
#define CRU_CLKSEL_CON35_CLK_ISP_SEL_MASK                  (0x3U << CRU_CLKSEL_CON35_CLK_ISP_SEL_SHIFT)                 /* 0x000000C0 */
#define CRU_CLKSEL_CON35_CLK_CIF_OUT_DIV_SHIFT             (8U)
#define CRU_CLKSEL_CON35_CLK_CIF_OUT_DIV_MASK              (0x3FU << CRU_CLKSEL_CON35_CLK_CIF_OUT_DIV_SHIFT)            /* 0x00003F00 */
#define CRU_CLKSEL_CON35_CLK_CIF_OUT_SEL_SHIFT             (14U)
#define CRU_CLKSEL_CON35_CLK_CIF_OUT_SEL_MASK              (0x3U << CRU_CLKSEL_CON35_CLK_CIF_OUT_SEL_SHIFT)             /* 0x0000C000 */
/* CLKSEL_CON36 */
#define CRU_CLKSEL_CON36_OFFSET                            (0x190U)
#define CRU_CLKSEL_CON36_CLK_CAM0_OUT_DIV_SHIFT            (0U)
#define CRU_CLKSEL_CON36_CLK_CAM0_OUT_DIV_MASK             (0x3FU << CRU_CLKSEL_CON36_CLK_CAM0_OUT_DIV_SHIFT)           /* 0x0000003F */
#define CRU_CLKSEL_CON36_CLK_CAM0_OUT_SEL_SHIFT            (6U)
#define CRU_CLKSEL_CON36_CLK_CAM0_OUT_SEL_MASK             (0x3U << CRU_CLKSEL_CON36_CLK_CAM0_OUT_SEL_SHIFT)            /* 0x000000C0 */
#define CRU_CLKSEL_CON36_CLK_CAM1_OUT_DIV_SHIFT            (8U)
#define CRU_CLKSEL_CON36_CLK_CAM1_OUT_DIV_MASK             (0x3FU << CRU_CLKSEL_CON36_CLK_CAM1_OUT_DIV_SHIFT)           /* 0x00003F00 */
#define CRU_CLKSEL_CON36_CLK_CAM1_OUT_SEL_SHIFT            (14U)
#define CRU_CLKSEL_CON36_CLK_CAM1_OUT_SEL_MASK             (0x3U << CRU_CLKSEL_CON36_CLK_CAM1_OUT_SEL_SHIFT)            /* 0x0000C000 */
/* CLKSEL_CON37 */
#define CRU_CLKSEL_CON37_OFFSET                            (0x194U)
#define CRU_CLKSEL_CON37_ACLK_VO_SEL_SHIFT                 (0U)
#define CRU_CLKSEL_CON37_ACLK_VO_SEL_MASK                  (0x3U << CRU_CLKSEL_CON37_ACLK_VO_SEL_SHIFT)                 /* 0x00000003 */
#define CRU_CLKSEL_CON37_HCLK_VO_DIV_SHIFT                 (8U)
#define CRU_CLKSEL_CON37_HCLK_VO_DIV_MASK                  (0xFU << CRU_CLKSEL_CON37_HCLK_VO_DIV_SHIFT)                 /* 0x00000F00 */
#define CRU_CLKSEL_CON37_PCLK_VO_DIV_SHIFT                 (12U)
#define CRU_CLKSEL_CON37_PCLK_VO_DIV_MASK                  (0xFU << CRU_CLKSEL_CON37_PCLK_VO_DIV_SHIFT)                 /* 0x0000F000 */
/* CLKSEL_CON38 */
#define CRU_CLKSEL_CON38_OFFSET                            (0x198U)
#define CRU_CLKSEL_CON38_ACLK_VOP_PRE_DIV_SHIFT            (0U)
#define CRU_CLKSEL_CON38_ACLK_VOP_PRE_DIV_MASK             (0x1FU << CRU_CLKSEL_CON38_ACLK_VOP_PRE_DIV_SHIFT)           /* 0x0000001F */
#define CRU_CLKSEL_CON38_ACLK_VOP_PRE_SEL_SHIFT            (6U)
#define CRU_CLKSEL_CON38_ACLK_VOP_PRE_SEL_MASK             (0x3U << CRU_CLKSEL_CON38_ACLK_VOP_PRE_SEL_SHIFT)            /* 0x000000C0 */
#define CRU_CLKSEL_CON38_CLK_EDP_200M_SEL_SHIFT            (8U)
#define CRU_CLKSEL_CON38_CLK_EDP_200M_SEL_MASK             (0x3U << CRU_CLKSEL_CON38_CLK_EDP_200M_SEL_SHIFT)            /* 0x00000300 */
/* CLKSEL_CON39 */
#define CRU_CLKSEL_CON39_OFFSET                            (0x19CU)
#define CRU_CLKSEL_CON39_DCLK0_VOP_DIV_SHIFT               (0U)
#define CRU_CLKSEL_CON39_DCLK0_VOP_DIV_MASK                (0xFFU << CRU_CLKSEL_CON39_DCLK0_VOP_DIV_SHIFT)              /* 0x000000FF */
#define CRU_CLKSEL_CON39_DCLK0_VOP_SEL_SHIFT               (10U)
#define CRU_CLKSEL_CON39_DCLK0_VOP_SEL_MASK                (0x3U << CRU_CLKSEL_CON39_DCLK0_VOP_SEL_SHIFT)               /* 0x00000C00 */
/* CLKSEL_CON40 */
#define CRU_CLKSEL_CON40_OFFSET                            (0x1A0U)
#define CRU_CLKSEL_CON40_DCLK1_VOP_DIV_SHIFT               (0U)
#define CRU_CLKSEL_CON40_DCLK1_VOP_DIV_MASK                (0xFFU << CRU_CLKSEL_CON40_DCLK1_VOP_DIV_SHIFT)              /* 0x000000FF */
#define CRU_CLKSEL_CON40_DCLK1_VOP_SEL_SHIFT               (10U)
#define CRU_CLKSEL_CON40_DCLK1_VOP_SEL_MASK                (0x3U << CRU_CLKSEL_CON40_DCLK1_VOP_SEL_SHIFT)               /* 0x00000C00 */
/* CLKSEL_CON41 */
#define CRU_CLKSEL_CON41_OFFSET                            (0x1A4U)
#define CRU_CLKSEL_CON41_DCLK2_VOP_DIV_SHIFT               (0U)
#define CRU_CLKSEL_CON41_DCLK2_VOP_DIV_MASK                (0xFFU << CRU_CLKSEL_CON41_DCLK2_VOP_DIV_SHIFT)              /* 0x000000FF */
#define CRU_CLKSEL_CON41_DCLK2_VOP_SEL_SHIFT               (10U)
#define CRU_CLKSEL_CON41_DCLK2_VOP_SEL_MASK                (0x3U << CRU_CLKSEL_CON41_DCLK2_VOP_SEL_SHIFT)               /* 0x00000C00 */
/* CLKSEL_CON42 */
#define CRU_CLKSEL_CON42_OFFSET                            (0x1A8U)
#define CRU_CLKSEL_CON42_ACLK_VPU_PRE_DIV_SHIFT            (0U)
#define CRU_CLKSEL_CON42_ACLK_VPU_PRE_DIV_MASK             (0x1FU << CRU_CLKSEL_CON42_ACLK_VPU_PRE_DIV_SHIFT)           /* 0x0000001F */
#define CRU_CLKSEL_CON42_ACLK_VPU_PRE_SEL_SHIFT            (7U)
#define CRU_CLKSEL_CON42_ACLK_VPU_PRE_SEL_MASK             (0x1U << CRU_CLKSEL_CON42_ACLK_VPU_PRE_SEL_SHIFT)            /* 0x00000080 */
#define CRU_CLKSEL_CON42_HCLK_VPU_PRE_DIV_SHIFT            (8U)
#define CRU_CLKSEL_CON42_HCLK_VPU_PRE_DIV_MASK             (0xFU << CRU_CLKSEL_CON42_HCLK_VPU_PRE_DIV_SHIFT)            /* 0x00000F00 */
/* CLKSEL_CON43 */
#define CRU_CLKSEL_CON43_OFFSET                            (0x1ACU)
#define CRU_CLKSEL_CON43_ACLK_RGA_PRE_SEL_SHIFT            (0U)
#define CRU_CLKSEL_CON43_ACLK_RGA_PRE_SEL_MASK             (0x3U << CRU_CLKSEL_CON43_ACLK_RGA_PRE_SEL_SHIFT)            /* 0x00000003 */
#define CRU_CLKSEL_CON43_CLK_RGA_CORE_SEL_SHIFT            (2U)
#define CRU_CLKSEL_CON43_CLK_RGA_CORE_SEL_MASK             (0x3U << CRU_CLKSEL_CON43_CLK_RGA_CORE_SEL_SHIFT)            /* 0x0000000C */
#define CRU_CLKSEL_CON43_CLK_IEP_CORE_SEL_SHIFT            (4U)
#define CRU_CLKSEL_CON43_CLK_IEP_CORE_SEL_MASK             (0x3U << CRU_CLKSEL_CON43_CLK_IEP_CORE_SEL_SHIFT)            /* 0x00000030 */
#define CRU_CLKSEL_CON43_DCLK_EBC_SEL_SHIFT                (6U)
#define CRU_CLKSEL_CON43_DCLK_EBC_SEL_MASK                 (0x3U << CRU_CLKSEL_CON43_DCLK_EBC_SEL_SHIFT)                /* 0x000000C0 */
#define CRU_CLKSEL_CON43_HCLK_RGA_PRE_DIV_SHIFT            (8U)
#define CRU_CLKSEL_CON43_HCLK_RGA_PRE_DIV_MASK             (0xFU << CRU_CLKSEL_CON43_HCLK_RGA_PRE_DIV_SHIFT)            /* 0x00000F00 */
#define CRU_CLKSEL_CON43_PCLK_RGA_PRE_DIV_SHIFT            (12U)
#define CRU_CLKSEL_CON43_PCLK_RGA_PRE_DIV_MASK             (0xFU << CRU_CLKSEL_CON43_PCLK_RGA_PRE_DIV_SHIFT)            /* 0x0000F000 */
/* CLKSEL_CON44 */
#define CRU_CLKSEL_CON44_OFFSET                            (0x1B0U)
#define CRU_CLKSEL_CON44_ACLK_RKVENC_PRE_DIV_SHIFT         (0U)
#define CRU_CLKSEL_CON44_ACLK_RKVENC_PRE_DIV_MASK          (0x1FU << CRU_CLKSEL_CON44_ACLK_RKVENC_PRE_DIV_SHIFT)        /* 0x0000001F */
#define CRU_CLKSEL_CON44_ACLK_RKVENC_PRE_SEL_SHIFT         (6U)
#define CRU_CLKSEL_CON44_ACLK_RKVENC_PRE_SEL_MASK          (0x3U << CRU_CLKSEL_CON44_ACLK_RKVENC_PRE_SEL_SHIFT)         /* 0x000000C0 */
#define CRU_CLKSEL_CON44_HCLK_RKVENC_PRE_DIV_SHIFT         (8U)
#define CRU_CLKSEL_CON44_HCLK_RKVENC_PRE_DIV_MASK          (0xFU << CRU_CLKSEL_CON44_HCLK_RKVENC_PRE_DIV_SHIFT)         /* 0x00000F00 */
/* CLKSEL_CON45 */
#define CRU_CLKSEL_CON45_OFFSET                            (0x1B4U)
#define CRU_CLKSEL_CON45_CLK_RKVENC_CORE_DIV_SHIFT         (0U)
#define CRU_CLKSEL_CON45_CLK_RKVENC_CORE_DIV_MASK          (0x1FU << CRU_CLKSEL_CON45_CLK_RKVENC_CORE_DIV_SHIFT)        /* 0x0000001F */
#define CRU_CLKSEL_CON45_CLK_RKVENC_CORE_SEL_SHIFT         (14U)
#define CRU_CLKSEL_CON45_CLK_RKVENC_CORE_SEL_MASK          (0x3U << CRU_CLKSEL_CON45_CLK_RKVENC_CORE_SEL_SHIFT)         /* 0x0000C000 */
/* CLKSEL_CON47 */
#define CRU_CLKSEL_CON47_OFFSET                            (0x1BCU)
#define CRU_CLKSEL_CON47_ACLK_RKVDEC_PRE_DIV_SHIFT         (0U)
#define CRU_CLKSEL_CON47_ACLK_RKVDEC_PRE_DIV_MASK          (0x1FU << CRU_CLKSEL_CON47_ACLK_RKVDEC_PRE_DIV_SHIFT)        /* 0x0000001F */
#define CRU_CLKSEL_CON47_ACLK_RKVDEC_PRE_SEL_SHIFT         (7U)
#define CRU_CLKSEL_CON47_ACLK_RKVDEC_PRE_SEL_MASK          (0x1U << CRU_CLKSEL_CON47_ACLK_RKVDEC_PRE_SEL_SHIFT)         /* 0x00000080 */
#define CRU_CLKSEL_CON47_HCLK_RKVDEC_PRE_DIV_SHIFT         (8U)
#define CRU_CLKSEL_CON47_HCLK_RKVDEC_PRE_DIV_MASK          (0xFU << CRU_CLKSEL_CON47_HCLK_RKVDEC_PRE_DIV_SHIFT)         /* 0x00000F00 */
/* CLKSEL_CON48 */
#define CRU_CLKSEL_CON48_OFFSET                            (0x1C0U)
#define CRU_CLKSEL_CON48_CLK_RKVDEC_CA_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON48_CLK_RKVDEC_CA_DIV_MASK            (0x1FU << CRU_CLKSEL_CON48_CLK_RKVDEC_CA_DIV_SHIFT)          /* 0x0000001F */
#define CRU_CLKSEL_CON48_CLK_RKVDEC_CA_SEL_SHIFT           (6U)
#define CRU_CLKSEL_CON48_CLK_RKVDEC_CA_SEL_MASK            (0x3U << CRU_CLKSEL_CON48_CLK_RKVDEC_CA_SEL_SHIFT)           /* 0x000000C0 */
/* CLKSEL_CON49 */
#define CRU_CLKSEL_CON49_OFFSET                            (0x1C4U)
#define CRU_CLKSEL_CON49_CLK_RKVDEC_HEVC_CA_DIV_SHIFT      (0U)
#define CRU_CLKSEL_CON49_CLK_RKVDEC_HEVC_CA_DIV_MASK       (0x1FU << CRU_CLKSEL_CON49_CLK_RKVDEC_HEVC_CA_DIV_SHIFT)     /* 0x0000001F */
#define CRU_CLKSEL_CON49_CLK_RKVDEC_HEVC_CA_SEL_SHIFT      (6U)
#define CRU_CLKSEL_CON49_CLK_RKVDEC_HEVC_CA_SEL_MASK       (0x3U << CRU_CLKSEL_CON49_CLK_RKVDEC_HEVC_CA_SEL_SHIFT)      /* 0x000000C0 */
#define CRU_CLKSEL_CON49_CLK_RKVDEC_CORE_DIV_SHIFT         (8U)
#define CRU_CLKSEL_CON49_CLK_RKVDEC_CORE_DIV_MASK          (0x1FU << CRU_CLKSEL_CON49_CLK_RKVDEC_CORE_DIV_SHIFT)        /* 0x00001F00 */
#define CRU_CLKSEL_CON49_CLK_RKVDEC_CORE_SEL_SHIFT         (14U)
#define CRU_CLKSEL_CON49_CLK_RKVDEC_CORE_SEL_MASK          (0x3U << CRU_CLKSEL_CON49_CLK_RKVDEC_CORE_SEL_SHIFT)         /* 0x0000C000 */
/* CLKSEL_CON50 */
#define CRU_CLKSEL_CON50_OFFSET                            (0x1C8U)
#define CRU_CLKSEL_CON50_ACLK_BUS_SEL_SHIFT                (0U)
#define CRU_CLKSEL_CON50_ACLK_BUS_SEL_MASK                 (0x3U << CRU_CLKSEL_CON50_ACLK_BUS_SEL_SHIFT)                /* 0x00000003 */
#define CRU_CLKSEL_CON50_PCLK_BUS_SEL_SHIFT                (4U)
#define CRU_CLKSEL_CON50_PCLK_BUS_SEL_MASK                 (0x3U << CRU_CLKSEL_CON50_PCLK_BUS_SEL_SHIFT)                /* 0x00000030 */
/* CLKSEL_CON51 */
#define CRU_CLKSEL_CON51_OFFSET                            (0x1CCU)
#define CRU_CLKSEL_CON51_CLK_TSADC_TSEN_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON51_CLK_TSADC_TSEN_DIV_MASK           (0x7U << CRU_CLKSEL_CON51_CLK_TSADC_TSEN_DIV_SHIFT)          /* 0x00000007 */
#define CRU_CLKSEL_CON51_CLK_TSADC_TSEN_SEL_SHIFT          (4U)
#define CRU_CLKSEL_CON51_CLK_TSADC_TSEN_SEL_MASK           (0x3U << CRU_CLKSEL_CON51_CLK_TSADC_TSEN_SEL_SHIFT)          /* 0x00000030 */
#define CRU_CLKSEL_CON51_CLK_TSADC_DIV_SHIFT               (8U)
#define CRU_CLKSEL_CON51_CLK_TSADC_DIV_MASK                (0x7FU << CRU_CLKSEL_CON51_CLK_TSADC_DIV_SHIFT)              /* 0x00007F00 */
/* CLKSEL_CON52 */
#define CRU_CLKSEL_CON52_OFFSET                            (0x1D0U)
#define CRU_CLKSEL_CON52_CLK_UART1_SRC_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON52_CLK_UART1_SRC_DIV_MASK            (0x7FU << CRU_CLKSEL_CON52_CLK_UART1_SRC_DIV_SHIFT)          /* 0x0000007F */
#define CRU_CLKSEL_CON52_CLK_UART1_SRC_SEL_SHIFT           (8U)
#define CRU_CLKSEL_CON52_CLK_UART1_SRC_SEL_MASK            (0x3U << CRU_CLKSEL_CON52_CLK_UART1_SRC_SEL_SHIFT)           /* 0x00000300 */
#define CRU_CLKSEL_CON52_SCLK_UART1_SEL_SHIFT              (12U)
#define CRU_CLKSEL_CON52_SCLK_UART1_SEL_MASK               (0x3U << CRU_CLKSEL_CON52_SCLK_UART1_SEL_SHIFT)              /* 0x00003000 */
/* CLKSEL_CON53 */
#define CRU_CLKSEL_CON53_OFFSET                            (0x1D4U)
#define CRU_CLKSEL_CON53_CLK_UART1_FRAC_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON53_CLK_UART1_FRAC_DIV_MASK           (0xFFFFFFFFU << CRU_CLKSEL_CON53_CLK_UART1_FRAC_DIV_SHIFT)   /* 0xFFFFFFFF */
/* CLKSEL_CON54 */
#define CRU_CLKSEL_CON54_OFFSET                            (0x1D8U)
#define CRU_CLKSEL_CON54_CLK_UART2_SRC_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON54_CLK_UART2_SRC_DIV_MASK            (0x7FU << CRU_CLKSEL_CON54_CLK_UART2_SRC_DIV_SHIFT)          /* 0x0000007F */
#define CRU_CLKSEL_CON54_CLK_UART2_SRC_SEL_SHIFT           (8U)
#define CRU_CLKSEL_CON54_CLK_UART2_SRC_SEL_MASK            (0x3U << CRU_CLKSEL_CON54_CLK_UART2_SRC_SEL_SHIFT)           /* 0x00000300 */
#define CRU_CLKSEL_CON54_SCLK_UART2_SEL_SHIFT              (12U)
#define CRU_CLKSEL_CON54_SCLK_UART2_SEL_MASK               (0x3U << CRU_CLKSEL_CON54_SCLK_UART2_SEL_SHIFT)              /* 0x00003000 */
/* CLKSEL_CON55 */
#define CRU_CLKSEL_CON55_OFFSET                            (0x1DCU)
#define CRU_CLKSEL_CON55_CLK_UART2_FRAC_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON55_CLK_UART2_FRAC_DIV_MASK           (0xFFFFFFFFU << CRU_CLKSEL_CON55_CLK_UART2_FRAC_DIV_SHIFT)   /* 0xFFFFFFFF */
/* CLKSEL_CON56 */
#define CRU_CLKSEL_CON56_OFFSET                            (0x1E0U)
#define CRU_CLKSEL_CON56_CLK_UART3_SRC_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON56_CLK_UART3_SRC_DIV_MASK            (0x7FU << CRU_CLKSEL_CON56_CLK_UART3_SRC_DIV_SHIFT)          /* 0x0000007F */
#define CRU_CLKSEL_CON56_CLK_UART3_SRC_SEL_SHIFT           (8U)
#define CRU_CLKSEL_CON56_CLK_UART3_SRC_SEL_MASK            (0x3U << CRU_CLKSEL_CON56_CLK_UART3_SRC_SEL_SHIFT)           /* 0x00000300 */
#define CRU_CLKSEL_CON56_SCLK_UART3_SEL_SHIFT              (12U)
#define CRU_CLKSEL_CON56_SCLK_UART3_SEL_MASK               (0x3U << CRU_CLKSEL_CON56_SCLK_UART3_SEL_SHIFT)              /* 0x00003000 */
/* CLKSEL_CON57 */
#define CRU_CLKSEL_CON57_OFFSET                            (0x1E4U)
#define CRU_CLKSEL_CON57_CLK_UART3_FRAC_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON57_CLK_UART3_FRAC_DIV_MASK           (0xFFFFFFFFU << CRU_CLKSEL_CON57_CLK_UART3_FRAC_DIV_SHIFT)   /* 0xFFFFFFFF */
/* CLKSEL_CON58 */
#define CRU_CLKSEL_CON58_OFFSET                            (0x1E8U)
#define CRU_CLKSEL_CON58_CLK_UART4_SRC_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON58_CLK_UART4_SRC_DIV_MASK            (0x7FU << CRU_CLKSEL_CON58_CLK_UART4_SRC_DIV_SHIFT)          /* 0x0000007F */
#define CRU_CLKSEL_CON58_CLK_UART4_SRC_SEL_SHIFT           (8U)
#define CRU_CLKSEL_CON58_CLK_UART4_SRC_SEL_MASK            (0x3U << CRU_CLKSEL_CON58_CLK_UART4_SRC_SEL_SHIFT)           /* 0x00000300 */
#define CRU_CLKSEL_CON58_SCLK_UART4_SEL_SHIFT              (12U)
#define CRU_CLKSEL_CON58_SCLK_UART4_SEL_MASK               (0x3U << CRU_CLKSEL_CON58_SCLK_UART4_SEL_SHIFT)              /* 0x00003000 */
/* CLKSEL_CON59 */
#define CRU_CLKSEL_CON59_OFFSET                            (0x1ECU)
#define CRU_CLKSEL_CON59_CLK_UART4_FRAC_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON59_CLK_UART4_FRAC_DIV_MASK           (0xFFFFFFFFU << CRU_CLKSEL_CON59_CLK_UART4_FRAC_DIV_SHIFT)   /* 0xFFFFFFFF */
/* CLKSEL_CON60 */
#define CRU_CLKSEL_CON60_OFFSET                            (0x1F0U)
#define CRU_CLKSEL_CON60_CLK_UART5_SRC_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON60_CLK_UART5_SRC_DIV_MASK            (0x7FU << CRU_CLKSEL_CON60_CLK_UART5_SRC_DIV_SHIFT)          /* 0x0000007F */
#define CRU_CLKSEL_CON60_CLK_UART5_SRC_SEL_SHIFT           (8U)
#define CRU_CLKSEL_CON60_CLK_UART5_SRC_SEL_MASK            (0x3U << CRU_CLKSEL_CON60_CLK_UART5_SRC_SEL_SHIFT)           /* 0x00000300 */
#define CRU_CLKSEL_CON60_SCLK_UART5_SEL_SHIFT              (12U)
#define CRU_CLKSEL_CON60_SCLK_UART5_SEL_MASK               (0x3U << CRU_CLKSEL_CON60_SCLK_UART5_SEL_SHIFT)              /* 0x00003000 */
/* CLKSEL_CON61 */
#define CRU_CLKSEL_CON61_OFFSET                            (0x1F4U)
#define CRU_CLKSEL_CON61_CLK_UART5_FRAC_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON61_CLK_UART5_FRAC_DIV_MASK           (0xFFFFFFFFU << CRU_CLKSEL_CON61_CLK_UART5_FRAC_DIV_SHIFT)   /* 0xFFFFFFFF */
/* CLKSEL_CON62 */
#define CRU_CLKSEL_CON62_OFFSET                            (0x1F8U)
#define CRU_CLKSEL_CON62_CLK_UART6_SRC_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON62_CLK_UART6_SRC_DIV_MASK            (0x7FU << CRU_CLKSEL_CON62_CLK_UART6_SRC_DIV_SHIFT)          /* 0x0000007F */
#define CRU_CLKSEL_CON62_CLK_UART6_SRC_SEL_SHIFT           (8U)
#define CRU_CLKSEL_CON62_CLK_UART6_SRC_SEL_MASK            (0x3U << CRU_CLKSEL_CON62_CLK_UART6_SRC_SEL_SHIFT)           /* 0x00000300 */
#define CRU_CLKSEL_CON62_SCLK_UART6_SEL_SHIFT              (12U)
#define CRU_CLKSEL_CON62_SCLK_UART6_SEL_MASK               (0x3U << CRU_CLKSEL_CON62_SCLK_UART6_SEL_SHIFT)              /* 0x00003000 */
/* CLKSEL_CON63 */
#define CRU_CLKSEL_CON63_OFFSET                            (0x1FCU)
#define CRU_CLKSEL_CON63_CLK_UART6_FRAC_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON63_CLK_UART6_FRAC_DIV_MASK           (0xFFFFFFFFU << CRU_CLKSEL_CON63_CLK_UART6_FRAC_DIV_SHIFT)   /* 0xFFFFFFFF */
/* CLKSEL_CON64 */
#define CRU_CLKSEL_CON64_OFFSET                            (0x200U)
#define CRU_CLKSEL_CON64_CLK_UART7_SRC_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON64_CLK_UART7_SRC_DIV_MASK            (0x7FU << CRU_CLKSEL_CON64_CLK_UART7_SRC_DIV_SHIFT)          /* 0x0000007F */
#define CRU_CLKSEL_CON64_CLK_UART7_SRC_SEL_SHIFT           (8U)
#define CRU_CLKSEL_CON64_CLK_UART7_SRC_SEL_MASK            (0x3U << CRU_CLKSEL_CON64_CLK_UART7_SRC_SEL_SHIFT)           /* 0x00000300 */
#define CRU_CLKSEL_CON64_SCLK_UART7_SEL_SHIFT              (12U)
#define CRU_CLKSEL_CON64_SCLK_UART7_SEL_MASK               (0x3U << CRU_CLKSEL_CON64_SCLK_UART7_SEL_SHIFT)              /* 0x00003000 */
/* CLKSEL_CON65 */
#define CRU_CLKSEL_CON65_OFFSET                            (0x204U)
#define CRU_CLKSEL_CON65_CLK_UART7_FRAC_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON65_CLK_UART7_FRAC_DIV_MASK           (0xFFFFFFFFU << CRU_CLKSEL_CON65_CLK_UART7_FRAC_DIV_SHIFT)   /* 0xFFFFFFFF */
/* CLKSEL_CON66 */
#define CRU_CLKSEL_CON66_OFFSET                            (0x208U)
#define CRU_CLKSEL_CON66_CLK_UART8_SRC_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON66_CLK_UART8_SRC_DIV_MASK            (0x7FU << CRU_CLKSEL_CON66_CLK_UART8_SRC_DIV_SHIFT)          /* 0x0000007F */
#define CRU_CLKSEL_CON66_CLK_UART8_SRC_SEL_SHIFT           (8U)
#define CRU_CLKSEL_CON66_CLK_UART8_SRC_SEL_MASK            (0x3U << CRU_CLKSEL_CON66_CLK_UART8_SRC_SEL_SHIFT)           /* 0x00000300 */
#define CRU_CLKSEL_CON66_SCLK_UART8_SEL_SHIFT              (12U)
#define CRU_CLKSEL_CON66_SCLK_UART8_SEL_MASK               (0x3U << CRU_CLKSEL_CON66_SCLK_UART8_SEL_SHIFT)              /* 0x00003000 */
/* CLKSEL_CON67 */
#define CRU_CLKSEL_CON67_OFFSET                            (0x20CU)
#define CRU_CLKSEL_CON67_CLK_UART8_FRAC_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON67_CLK_UART8_FRAC_DIV_MASK           (0xFFFFFFFFU << CRU_CLKSEL_CON67_CLK_UART8_FRAC_DIV_SHIFT)   /* 0xFFFFFFFF */
/* CLKSEL_CON68 */
#define CRU_CLKSEL_CON68_OFFSET                            (0x210U)
#define CRU_CLKSEL_CON68_CLK_UART9_SRC_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON68_CLK_UART9_SRC_DIV_MASK            (0x7FU << CRU_CLKSEL_CON68_CLK_UART9_SRC_DIV_SHIFT)          /* 0x0000007F */
#define CRU_CLKSEL_CON68_CLK_UART9_SRC_SEL_SHIFT           (8U)
#define CRU_CLKSEL_CON68_CLK_UART9_SRC_SEL_MASK            (0x3U << CRU_CLKSEL_CON68_CLK_UART9_SRC_SEL_SHIFT)           /* 0x00000300 */
#define CRU_CLKSEL_CON68_SCLK_UART9_SEL_SHIFT              (12U)
#define CRU_CLKSEL_CON68_SCLK_UART9_SEL_MASK               (0x3U << CRU_CLKSEL_CON68_SCLK_UART9_SEL_SHIFT)              /* 0x00003000 */
/* CLKSEL_CON69 */
#define CRU_CLKSEL_CON69_OFFSET                            (0x214U)
#define CRU_CLKSEL_CON69_CLK_UART9_FRAC_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON69_CLK_UART9_FRAC_DIV_MASK           (0xFFFFFFFFU << CRU_CLKSEL_CON69_CLK_UART9_FRAC_DIV_SHIFT)   /* 0xFFFFFFFF */
/* CLKSEL_CON70 */
#define CRU_CLKSEL_CON70_OFFSET                            (0x218U)
#define CRU_CLKSEL_CON70_CLK_CAN0_DIV_SHIFT                (0U)
#define CRU_CLKSEL_CON70_CLK_CAN0_DIV_MASK                 (0x1FU << CRU_CLKSEL_CON70_CLK_CAN0_DIV_SHIFT)               /* 0x0000001F */
#define CRU_CLKSEL_CON70_CLK_CAN0_SEL_SHIFT                (7U)
#define CRU_CLKSEL_CON70_CLK_CAN0_SEL_MASK                 (0x1U << CRU_CLKSEL_CON70_CLK_CAN0_SEL_SHIFT)                /* 0x00000080 */
#define CRU_CLKSEL_CON70_CLK_CAN1_DIV_SHIFT                (8U)
#define CRU_CLKSEL_CON70_CLK_CAN1_DIV_MASK                 (0x1FU << CRU_CLKSEL_CON70_CLK_CAN1_DIV_SHIFT)               /* 0x00001F00 */
#define CRU_CLKSEL_CON70_CLK_CAN1_SEL_SHIFT                (15U)
#define CRU_CLKSEL_CON70_CLK_CAN1_SEL_MASK                 (0x1U << CRU_CLKSEL_CON70_CLK_CAN1_SEL_SHIFT)                /* 0x00008000 */
/* CLKSEL_CON71 */
#define CRU_CLKSEL_CON71_OFFSET                            (0x21CU)
#define CRU_CLKSEL_CON71_CLK_CAN2_DIV_SHIFT                (0U)
#define CRU_CLKSEL_CON71_CLK_CAN2_DIV_MASK                 (0x1FU << CRU_CLKSEL_CON71_CLK_CAN2_DIV_SHIFT)               /* 0x0000001F */
#define CRU_CLKSEL_CON71_CLK_CAN2_SEL_SHIFT                (7U)
#define CRU_CLKSEL_CON71_CLK_CAN2_SEL_MASK                 (0x1U << CRU_CLKSEL_CON71_CLK_CAN2_SEL_SHIFT)                /* 0x00000080 */
#define CRU_CLKSEL_CON71_CLK_I2C_SEL_SHIFT                 (8U)
#define CRU_CLKSEL_CON71_CLK_I2C_SEL_MASK                  (0x3U << CRU_CLKSEL_CON71_CLK_I2C_SEL_SHIFT)                 /* 0x00000300 */
/* CLKSEL_CON72 */
#define CRU_CLKSEL_CON72_OFFSET                            (0x220U)
#define CRU_CLKSEL_CON72_CLK_SPI0_SEL_SHIFT                (0U)
#define CRU_CLKSEL_CON72_CLK_SPI0_SEL_MASK                 (0x3U << CRU_CLKSEL_CON72_CLK_SPI0_SEL_SHIFT)                /* 0x00000003 */
#define CRU_CLKSEL_CON72_CLK_SPI1_SEL_SHIFT                (2U)
#define CRU_CLKSEL_CON72_CLK_SPI1_SEL_MASK                 (0x3U << CRU_CLKSEL_CON72_CLK_SPI1_SEL_SHIFT)                /* 0x0000000C */
#define CRU_CLKSEL_CON72_CLK_SPI2_SEL_SHIFT                (4U)
#define CRU_CLKSEL_CON72_CLK_SPI2_SEL_MASK                 (0x3U << CRU_CLKSEL_CON72_CLK_SPI2_SEL_SHIFT)                /* 0x00000030 */
#define CRU_CLKSEL_CON72_CLK_SPI3_SEL_SHIFT                (6U)
#define CRU_CLKSEL_CON72_CLK_SPI3_SEL_MASK                 (0x3U << CRU_CLKSEL_CON72_CLK_SPI3_SEL_SHIFT)                /* 0x000000C0 */
#define CRU_CLKSEL_CON72_CLK_PWM1_SEL_SHIFT                (8U)
#define CRU_CLKSEL_CON72_CLK_PWM1_SEL_MASK                 (0x3U << CRU_CLKSEL_CON72_CLK_PWM1_SEL_SHIFT)                /* 0x00000300 */
#define CRU_CLKSEL_CON72_CLK_PWM2_SEL_SHIFT                (10U)
#define CRU_CLKSEL_CON72_CLK_PWM2_SEL_MASK                 (0x3U << CRU_CLKSEL_CON72_CLK_PWM2_SEL_SHIFT)                /* 0x00000C00 */
#define CRU_CLKSEL_CON72_CLK_PWM3_SEL_SHIFT                (12U)
#define CRU_CLKSEL_CON72_CLK_PWM3_SEL_MASK                 (0x3U << CRU_CLKSEL_CON72_CLK_PWM3_SEL_SHIFT)                /* 0x00003000 */
#define CRU_CLKSEL_CON72_DBCLK_GPIO_SEL_SHIFT              (14U)
#define CRU_CLKSEL_CON72_DBCLK_GPIO_SEL_MASK               (0x1U << CRU_CLKSEL_CON72_DBCLK_GPIO_SEL_SHIFT)              /* 0x00004000 */
/* CLKSEL_CON73 */
#define CRU_CLKSEL_CON73_OFFSET                            (0x224U)
#define CRU_CLKSEL_CON73_ACLK_TOP_HIGH_SEL_SHIFT           (0U)
#define CRU_CLKSEL_CON73_ACLK_TOP_HIGH_SEL_MASK            (0x3U << CRU_CLKSEL_CON73_ACLK_TOP_HIGH_SEL_SHIFT)           /* 0x00000003 */
#define CRU_CLKSEL_CON73_ACLK_TOP_LOW_SEL_SHIFT            (4U)
#define CRU_CLKSEL_CON73_ACLK_TOP_LOW_SEL_MASK             (0x3U << CRU_CLKSEL_CON73_ACLK_TOP_LOW_SEL_SHIFT)            /* 0x00000030 */
#define CRU_CLKSEL_CON73_HCLK_TOP_SEL_SHIFT                (8U)
#define CRU_CLKSEL_CON73_HCLK_TOP_SEL_MASK                 (0x3U << CRU_CLKSEL_CON73_HCLK_TOP_SEL_SHIFT)                /* 0x00000300 */
#define CRU_CLKSEL_CON73_PCLK_TOP_SEL_SHIFT                (12U)
#define CRU_CLKSEL_CON73_PCLK_TOP_SEL_MASK                 (0x3U << CRU_CLKSEL_CON73_PCLK_TOP_SEL_SHIFT)                /* 0x00003000 */
#define CRU_CLKSEL_CON73_CLK_OTPC_ARB_SEL_SHIFT            (15U)
#define CRU_CLKSEL_CON73_CLK_OTPC_ARB_SEL_MASK             (0x1U << CRU_CLKSEL_CON73_CLK_OTPC_ARB_SEL_SHIFT)            /* 0x00008000 */
/* CLKSEL_CON74 */
#define CRU_CLKSEL_CON74_OFFSET                            (0x228U)
#define CRU_CLKSEL_CON74_CLK_TESTOUT_DIV_SHIFT             (0U)
#define CRU_CLKSEL_CON74_CLK_TESTOUT_DIV_MASK              (0xFFU << CRU_CLKSEL_CON74_CLK_TESTOUT_DIV_SHIFT)            /* 0x000000FF */
#define CRU_CLKSEL_CON74_CLK_TESTOUT_SEL_SHIFT             (8U)
#define CRU_CLKSEL_CON74_CLK_TESTOUT_SEL_MASK              (0x1FU << CRU_CLKSEL_CON74_CLK_TESTOUT_SEL_SHIFT)            /* 0x00001F00 */
/* CLKSEL_CON75 */
#define CRU_CLKSEL_CON75_OFFSET                            (0x22CU)
#define CRU_CLKSEL_CON75_CLK_GPLL_DIV_400M_DIV_SHIFT       (0U)
#define CRU_CLKSEL_CON75_CLK_GPLL_DIV_400M_DIV_MASK        (0x1FU << CRU_CLKSEL_CON75_CLK_GPLL_DIV_400M_DIV_SHIFT)      /* 0x0000001F */
#define CRU_CLKSEL_CON75_CLK_GPLL_DIV_300M_DIV_SHIFT       (8U)
#define CRU_CLKSEL_CON75_CLK_GPLL_DIV_300M_DIV_MASK        (0x1FU << CRU_CLKSEL_CON75_CLK_GPLL_DIV_300M_DIV_SHIFT)      /* 0x00001F00 */
/* CLKSEL_CON76 */
#define CRU_CLKSEL_CON76_OFFSET                            (0x230U)
#define CRU_CLKSEL_CON76_CLK_GPLL_DIV_200M_DIV_SHIFT       (0U)
#define CRU_CLKSEL_CON76_CLK_GPLL_DIV_200M_DIV_MASK        (0x1FU << CRU_CLKSEL_CON76_CLK_GPLL_DIV_200M_DIV_SHIFT)      /* 0x0000001F */
#define CRU_CLKSEL_CON76_CLK_GPLL_DIV_150M_DIV_SHIFT       (8U)
#define CRU_CLKSEL_CON76_CLK_GPLL_DIV_150M_DIV_MASK        (0x1FU << CRU_CLKSEL_CON76_CLK_GPLL_DIV_150M_DIV_SHIFT)      /* 0x00001F00 */
/* CLKSEL_CON77 */
#define CRU_CLKSEL_CON77_OFFSET                            (0x234U)
#define CRU_CLKSEL_CON77_CLK_GPLL_DIV_100M_DIV_SHIFT       (0U)
#define CRU_CLKSEL_CON77_CLK_GPLL_DIV_100M_DIV_MASK        (0x1FU << CRU_CLKSEL_CON77_CLK_GPLL_DIV_100M_DIV_SHIFT)      /* 0x0000001F */
#define CRU_CLKSEL_CON77_CLK_GPLL_DIV_75M_DIV_SHIFT        (8U)
#define CRU_CLKSEL_CON77_CLK_GPLL_DIV_75M_DIV_MASK         (0x1FU << CRU_CLKSEL_CON77_CLK_GPLL_DIV_75M_DIV_SHIFT)       /* 0x00001F00 */
/* CLKSEL_CON78 */
#define CRU_CLKSEL_CON78_OFFSET                            (0x238U)
#define CRU_CLKSEL_CON78_CLK_GPLL_DIV_20M_DIV_SHIFT        (0U)
#define CRU_CLKSEL_CON78_CLK_GPLL_DIV_20M_DIV_MASK         (0x3FU << CRU_CLKSEL_CON78_CLK_GPLL_DIV_20M_DIV_SHIFT)       /* 0x0000003F */
#define CRU_CLKSEL_CON78_CLK_CPLL_DIV_500M_DIV_SHIFT       (8U)
#define CRU_CLKSEL_CON78_CLK_CPLL_DIV_500M_DIV_MASK        (0x1FU << CRU_CLKSEL_CON78_CLK_CPLL_DIV_500M_DIV_SHIFT)      /* 0x00001F00 */
/* CLKSEL_CON79 */
#define CRU_CLKSEL_CON79_OFFSET                            (0x23CU)
#define CRU_CLKSEL_CON79_CLK_CPLL_DIV_333M_DIV_SHIFT       (0U)
#define CRU_CLKSEL_CON79_CLK_CPLL_DIV_333M_DIV_MASK        (0x1FU << CRU_CLKSEL_CON79_CLK_CPLL_DIV_333M_DIV_SHIFT)      /* 0x0000001F */
#define CRU_CLKSEL_CON79_CLK_CPLL_DIV_250M_DIV_SHIFT       (8U)
#define CRU_CLKSEL_CON79_CLK_CPLL_DIV_250M_DIV_MASK        (0x1FU << CRU_CLKSEL_CON79_CLK_CPLL_DIV_250M_DIV_SHIFT)      /* 0x00001F00 */
/* CLKSEL_CON80 */
#define CRU_CLKSEL_CON80_OFFSET                            (0x240U)
#define CRU_CLKSEL_CON80_CLK_CPLL_DIV_125M_DIV_SHIFT       (0U)
#define CRU_CLKSEL_CON80_CLK_CPLL_DIV_125M_DIV_MASK        (0x1FU << CRU_CLKSEL_CON80_CLK_CPLL_DIV_125M_DIV_SHIFT)      /* 0x0000001F */
#define CRU_CLKSEL_CON80_CLK_CPLL_DIV_62P5_DIV_SHIFT       (8U)
#define CRU_CLKSEL_CON80_CLK_CPLL_DIV_62P5_DIV_MASK        (0x1FU << CRU_CLKSEL_CON80_CLK_CPLL_DIV_62P5_DIV_SHIFT)      /* 0x00001F00 */
/* CLKSEL_CON81 */
#define CRU_CLKSEL_CON81_OFFSET                            (0x244U)
#define CRU_CLKSEL_CON81_CLK_CPLL_DIV_50M_DIV_SHIFT        (0U)
#define CRU_CLKSEL_CON81_CLK_CPLL_DIV_50M_DIV_MASK         (0x1FU << CRU_CLKSEL_CON81_CLK_CPLL_DIV_50M_DIV_SHIFT)       /* 0x0000001F */
#define CRU_CLKSEL_CON81_CLK_CPLL_DIV_25M_DIV_SHIFT        (8U)
#define CRU_CLKSEL_CON81_CLK_CPLL_DIV_25M_DIV_MASK         (0x3FU << CRU_CLKSEL_CON81_CLK_CPLL_DIV_25M_DIV_SHIFT)       /* 0x00003F00 */
/* CLKSEL_CON82 */
#define CRU_CLKSEL_CON82_OFFSET                            (0x248U)
#define CRU_CLKSEL_CON82_CLK_CPLL_DIV_100M_DIV_SHIFT       (0U)
#define CRU_CLKSEL_CON82_CLK_CPLL_DIV_100M_DIV_MASK        (0x1FU << CRU_CLKSEL_CON82_CLK_CPLL_DIV_100M_DIV_SHIFT)      /* 0x0000001F */
#define CRU_CLKSEL_CON82_CLK_OSC0_DIV_750K_DIV_SHIFT       (8U)
#define CRU_CLKSEL_CON82_CLK_OSC0_DIV_750K_DIV_MASK        (0x3FU << CRU_CLKSEL_CON82_CLK_OSC0_DIV_750K_DIV_SHIFT)      /* 0x00003F00 */
/* CLKSEL_CON83 */
#define CRU_CLKSEL_CON83_OFFSET                            (0x24CU)
#define CRU_CLKSEL_CON83_CLK_I2S3_2CH_RX_SRC_DIV_SHIFT     (0U)
#define CRU_CLKSEL_CON83_CLK_I2S3_2CH_RX_SRC_DIV_MASK      (0x7FU << CRU_CLKSEL_CON83_CLK_I2S3_2CH_RX_SRC_DIV_SHIFT)    /* 0x0000007F */
#define CRU_CLKSEL_CON83_CLK_I2S3_2CH_RX_SRC_SEL_SHIFT     (8U)
#define CRU_CLKSEL_CON83_CLK_I2S3_2CH_RX_SRC_SEL_MASK      (0x3U << CRU_CLKSEL_CON83_CLK_I2S3_2CH_RX_SRC_SEL_SHIFT)     /* 0x00000300 */
#define CRU_CLKSEL_CON83_MCLK_I2S3_2CH_RX_SEL_SHIFT        (10U)
#define CRU_CLKSEL_CON83_MCLK_I2S3_2CH_RX_SEL_MASK         (0x3U << CRU_CLKSEL_CON83_MCLK_I2S3_2CH_RX_SEL_SHIFT)        /* 0x00000C00 */
#define CRU_CLKSEL_CON83_I2S3_MCLKOUT_RX_SEL_SHIFT         (15U)
#define CRU_CLKSEL_CON83_I2S3_MCLKOUT_RX_SEL_MASK          (0x1U << CRU_CLKSEL_CON83_I2S3_MCLKOUT_RX_SEL_SHIFT)         /* 0x00008000 */
/* CLKSEL_CON84 */
#define CRU_CLKSEL_CON84_OFFSET                            (0x250U)
#define CRU_CLKSEL_CON84_CLK_I2S3_2CH_RX_FRAC_DIV_SHIFT    (0U)
#define CRU_CLKSEL_CON84_CLK_I2S3_2CH_RX_FRAC_DIV_MASK     (0xFFFFFFFFU << CRU_CLKSEL_CON84_CLK_I2S3_2CH_RX_FRAC_DIV_SHIFT) /* 0xFFFFFFFF */
/* GATE_CON00 */
#define CRU_GATE_CON00_OFFSET                              (0x300U)
#define CRU_GATE_CON00_CLK_CORE_EN_SHIFT                   (0U)
#define CRU_GATE_CON00_CLK_CORE_EN_MASK                    (0x1U << CRU_GATE_CON00_CLK_CORE_EN_SHIFT)                   /* 0x00000001 */
#define CRU_GATE_CON00_CLK_CORE0_EN_SHIFT                  (1U)
#define CRU_GATE_CON00_CLK_CORE0_EN_MASK                   (0x1U << CRU_GATE_CON00_CLK_CORE0_EN_SHIFT)                  /* 0x00000002 */
#define CRU_GATE_CON00_CLK_CORE1_EN_SHIFT                  (2U)
#define CRU_GATE_CON00_CLK_CORE1_EN_MASK                   (0x1U << CRU_GATE_CON00_CLK_CORE1_EN_SHIFT)                  /* 0x00000004 */
#define CRU_GATE_CON00_CLK_CORE2_EN_SHIFT                  (3U)
#define CRU_GATE_CON00_CLK_CORE2_EN_MASK                   (0x1U << CRU_GATE_CON00_CLK_CORE2_EN_SHIFT)                  /* 0x00000008 */
#define CRU_GATE_CON00_CLK_CORE3_EN_SHIFT                  (4U)
#define CRU_GATE_CON00_CLK_CORE3_EN_MASK                   (0x1U << CRU_GATE_CON00_CLK_CORE3_EN_SHIFT)                  /* 0x00000010 */
#define CRU_GATE_CON00_SCLK_CORE_SRC_EN_SHIFT              (5U)
#define CRU_GATE_CON00_SCLK_CORE_SRC_EN_MASK               (0x1U << CRU_GATE_CON00_SCLK_CORE_SRC_EN_SHIFT)              /* 0x00000020 */
#define CRU_GATE_CON00_CLK_NPLL_CORE_EN_SHIFT              (6U)
#define CRU_GATE_CON00_CLK_NPLL_CORE_EN_MASK               (0x1U << CRU_GATE_CON00_CLK_NPLL_CORE_EN_SHIFT)              /* 0x00000040 */
#define CRU_GATE_CON00_SCLK_CORE_EN_SHIFT                  (7U)
#define CRU_GATE_CON00_SCLK_CORE_EN_MASK                   (0x1U << CRU_GATE_CON00_SCLK_CORE_EN_SHIFT)                  /* 0x00000080 */
#define CRU_GATE_CON00_ATCLK_CORE_EN_SHIFT                 (8U)
#define CRU_GATE_CON00_ATCLK_CORE_EN_MASK                  (0x1U << CRU_GATE_CON00_ATCLK_CORE_EN_SHIFT)                 /* 0x00000100 */
#define CRU_GATE_CON00_GICCLK_CORE_EN_SHIFT                (9U)
#define CRU_GATE_CON00_GICCLK_CORE_EN_MASK                 (0x1U << CRU_GATE_CON00_GICCLK_CORE_EN_SHIFT)                /* 0x00000200 */
#define CRU_GATE_CON00_PCLK_CORE_PRE_EN_SHIFT              (10U)
#define CRU_GATE_CON00_PCLK_CORE_PRE_EN_MASK               (0x1U << CRU_GATE_CON00_PCLK_CORE_PRE_EN_SHIFT)              /* 0x00000400 */
#define CRU_GATE_CON00_PERIPHCLK_CORE_PRE_EN_SHIFT         (11U)
#define CRU_GATE_CON00_PERIPHCLK_CORE_PRE_EN_MASK          (0x1U << CRU_GATE_CON00_PERIPHCLK_CORE_PRE_EN_SHIFT)         /* 0x00000800 */
#define CRU_GATE_CON00_PCLK_CORE_EN_SHIFT                  (12U)
#define CRU_GATE_CON00_PCLK_CORE_EN_MASK                   (0x1U << CRU_GATE_CON00_PCLK_CORE_EN_SHIFT)                  /* 0x00001000 */
#define CRU_GATE_CON00_PERIPHCLK_CORE_EN_SHIFT             (13U)
#define CRU_GATE_CON00_PERIPHCLK_CORE_EN_MASK              (0x1U << CRU_GATE_CON00_PERIPHCLK_CORE_EN_SHIFT)             /* 0x00002000 */
#define CRU_GATE_CON00_TSCLK_CORE_EN_SHIFT                 (14U)
#define CRU_GATE_CON00_TSCLK_CORE_EN_MASK                  (0x1U << CRU_GATE_CON00_TSCLK_CORE_EN_SHIFT)                 /* 0x00004000 */
#define CRU_GATE_CON00_CNTCLK_CORE_EN_SHIFT                (15U)
#define CRU_GATE_CON00_CNTCLK_CORE_EN_MASK                 (0x1U << CRU_GATE_CON00_CNTCLK_CORE_EN_SHIFT)                /* 0x00008000 */
/* GATE_CON01 */
#define CRU_GATE_CON01_OFFSET                              (0x304U)
#define CRU_GATE_CON01_ACLK_CORE_EN_SHIFT                  (0U)
#define CRU_GATE_CON01_ACLK_CORE_EN_MASK                   (0x1U << CRU_GATE_CON01_ACLK_CORE_EN_SHIFT)                  /* 0x00000001 */
#define CRU_GATE_CON01_ACLK_CORE_NIU2DDR_EN_SHIFT          (1U)
#define CRU_GATE_CON01_ACLK_CORE_NIU2DDR_EN_MASK           (0x1U << CRU_GATE_CON01_ACLK_CORE_NIU2DDR_EN_SHIFT)          /* 0x00000002 */
#define CRU_GATE_CON01_ACLK_CORE_NIU2BUS_EN_SHIFT          (2U)
#define CRU_GATE_CON01_ACLK_CORE_NIU2BUS_EN_MASK           (0x1U << CRU_GATE_CON01_ACLK_CORE_NIU2BUS_EN_SHIFT)          /* 0x00000004 */
#define CRU_GATE_CON01_PCLK_DBG_NIU_EN_SHIFT               (3U)
#define CRU_GATE_CON01_PCLK_DBG_NIU_EN_MASK                (0x1U << CRU_GATE_CON01_PCLK_DBG_NIU_EN_SHIFT)               /* 0x00000008 */
#define CRU_GATE_CON01_PCLK_DBG_EN_SHIFT                   (4U)
#define CRU_GATE_CON01_PCLK_DBG_EN_MASK                    (0x1U << CRU_GATE_CON01_PCLK_DBG_EN_SHIFT)                   /* 0x00000010 */
#define CRU_GATE_CON01_PCLK_DBG_DAPLITE_EN_SHIFT           (5U)
#define CRU_GATE_CON01_PCLK_DBG_DAPLITE_EN_MASK            (0x1U << CRU_GATE_CON01_PCLK_DBG_DAPLITE_EN_SHIFT)           /* 0x00000020 */
#define CRU_GATE_CON01_ACLK_ADB400_CORE2GIC_EN_SHIFT       (6U)
#define CRU_GATE_CON01_ACLK_ADB400_CORE2GIC_EN_MASK        (0x1U << CRU_GATE_CON01_ACLK_ADB400_CORE2GIC_EN_SHIFT)       /* 0x00000040 */
#define CRU_GATE_CON01_ACLK_ADB400_GIC2CORE_EN_SHIFT       (7U)
#define CRU_GATE_CON01_ACLK_ADB400_GIC2CORE_EN_MASK        (0x1U << CRU_GATE_CON01_ACLK_ADB400_GIC2CORE_EN_SHIFT)       /* 0x00000080 */
#define CRU_GATE_CON01_PCLK_CORE_GRF_EN_SHIFT              (8U)
#define CRU_GATE_CON01_PCLK_CORE_GRF_EN_MASK               (0x1U << CRU_GATE_CON01_PCLK_CORE_GRF_EN_SHIFT)              /* 0x00000100 */
#define CRU_GATE_CON01_PCLK_CORE_PVTM_EN_SHIFT             (9U)
#define CRU_GATE_CON01_PCLK_CORE_PVTM_EN_MASK              (0x1U << CRU_GATE_CON01_PCLK_CORE_PVTM_EN_SHIFT)             /* 0x00000200 */
#define CRU_GATE_CON01_CLK_CORE_PVTM_EN_SHIFT              (10U)
#define CRU_GATE_CON01_CLK_CORE_PVTM_EN_MASK               (0x1U << CRU_GATE_CON01_CLK_CORE_PVTM_EN_SHIFT)              /* 0x00000400 */
#define CRU_GATE_CON01_CLK_CORE_PVTM_CORE_EN_SHIFT         (11U)
#define CRU_GATE_CON01_CLK_CORE_PVTM_CORE_EN_MASK          (0x1U << CRU_GATE_CON01_CLK_CORE_PVTM_CORE_EN_SHIFT)         /* 0x00000800 */
#define CRU_GATE_CON01_CLK_CORE_PVTPLL_EN_SHIFT            (12U)
#define CRU_GATE_CON01_CLK_CORE_PVTPLL_EN_MASK             (0x1U << CRU_GATE_CON01_CLK_CORE_PVTPLL_EN_SHIFT)            /* 0x00001000 */
#define CRU_GATE_CON01_CLK_CORE_DIV2_EN_SHIFT              (13U)
#define CRU_GATE_CON01_CLK_CORE_DIV2_EN_MASK               (0x1U << CRU_GATE_CON01_CLK_CORE_DIV2_EN_SHIFT)              /* 0x00002000 */
#define CRU_GATE_CON01_CLK_APLL_CORE_EN_SHIFT              (14U)
#define CRU_GATE_CON01_CLK_APLL_CORE_EN_MASK               (0x1U << CRU_GATE_CON01_CLK_APLL_CORE_EN_SHIFT)              /* 0x00004000 */
#define CRU_GATE_CON01_CLK_JTAG_EN_SHIFT                   (15U)
#define CRU_GATE_CON01_CLK_JTAG_EN_MASK                    (0x1U << CRU_GATE_CON01_CLK_JTAG_EN_SHIFT)                   /* 0x00008000 */
/* GATE_CON02 */
#define CRU_GATE_CON02_OFFSET                              (0x308U)
#define CRU_GATE_CON02_CLK_GPU_SRC_EN_SHIFT                (0U)
#define CRU_GATE_CON02_CLK_GPU_SRC_EN_MASK                 (0x1U << CRU_GATE_CON02_CLK_GPU_SRC_EN_SHIFT)                /* 0x00000001 */
#define CRU_GATE_CON02_PCLK_GPU_PRE_EN_SHIFT               (2U)
#define CRU_GATE_CON02_PCLK_GPU_PRE_EN_MASK                (0x1U << CRU_GATE_CON02_PCLK_GPU_PRE_EN_SHIFT)               /* 0x00000004 */
#define CRU_GATE_CON02_ACLK_GPU_EN_SHIFT                   (3U)
#define CRU_GATE_CON02_ACLK_GPU_EN_MASK                    (0x1U << CRU_GATE_CON02_ACLK_GPU_EN_SHIFT)                   /* 0x00000008 */
#define CRU_GATE_CON02_ACLK_GPU_NIU_EN_SHIFT               (4U)
#define CRU_GATE_CON02_ACLK_GPU_NIU_EN_MASK                (0x1U << CRU_GATE_CON02_ACLK_GPU_NIU_EN_SHIFT)               /* 0x00000010 */
#define CRU_GATE_CON02_PCLK_GPU_NIU_EN_SHIFT               (5U)
#define CRU_GATE_CON02_PCLK_GPU_NIU_EN_MASK                (0x1U << CRU_GATE_CON02_PCLK_GPU_NIU_EN_SHIFT)               /* 0x00000020 */
#define CRU_GATE_CON02_PCLK_GPU_PVTM_EN_SHIFT              (6U)
#define CRU_GATE_CON02_PCLK_GPU_PVTM_EN_MASK               (0x1U << CRU_GATE_CON02_PCLK_GPU_PVTM_EN_SHIFT)              /* 0x00000040 */
#define CRU_GATE_CON02_CLK_GPU_PVTM_EN_SHIFT               (7U)
#define CRU_GATE_CON02_CLK_GPU_PVTM_EN_MASK                (0x1U << CRU_GATE_CON02_CLK_GPU_PVTM_EN_SHIFT)               /* 0x00000080 */
#define CRU_GATE_CON02_CLK_GPU_PVTM_CORE_EN_SHIFT          (8U)
#define CRU_GATE_CON02_CLK_GPU_PVTM_CORE_EN_MASK           (0x1U << CRU_GATE_CON02_CLK_GPU_PVTM_CORE_EN_SHIFT)          /* 0x00000100 */
#define CRU_GATE_CON02_CLK_GPU_PVTPLL_EN_SHIFT             (9U)
#define CRU_GATE_CON02_CLK_GPU_PVTPLL_EN_MASK              (0x1U << CRU_GATE_CON02_CLK_GPU_PVTPLL_EN_SHIFT)             /* 0x00000200 */
#define CRU_GATE_CON02_CLK_GPU_DIV2_EN_SHIFT               (10U)
#define CRU_GATE_CON02_CLK_GPU_DIV2_EN_MASK                (0x1U << CRU_GATE_CON02_CLK_GPU_DIV2_EN_SHIFT)               /* 0x00000400 */
#define CRU_GATE_CON02_ACLK_GPU_PRE_EN_SHIFT               (11U)
#define CRU_GATE_CON02_ACLK_GPU_PRE_EN_MASK                (0x1U << CRU_GATE_CON02_ACLK_GPU_PRE_EN_SHIFT)               /* 0x00000800 */
/* GATE_CON03 */
#define CRU_GATE_CON03_OFFSET                              (0x30CU)
#define CRU_GATE_CON03_CLK_NPU_SRC_EN_SHIFT                (0U)
#define CRU_GATE_CON03_CLK_NPU_SRC_EN_MASK                 (0x1U << CRU_GATE_CON03_CLK_NPU_SRC_EN_SHIFT)                /* 0x00000001 */
#define CRU_GATE_CON03_CLK_NPU_NP5_EN_SHIFT                (1U)
#define CRU_GATE_CON03_CLK_NPU_NP5_EN_MASK                 (0x1U << CRU_GATE_CON03_CLK_NPU_NP5_EN_SHIFT)                /* 0x00000002 */
#define CRU_GATE_CON03_HCLK_NPU_PRE_EN_SHIFT               (2U)
#define CRU_GATE_CON03_HCLK_NPU_PRE_EN_MASK                (0x1U << CRU_GATE_CON03_HCLK_NPU_PRE_EN_SHIFT)               /* 0x00000004 */
#define CRU_GATE_CON03_PCLK_NPU_PRE_EN_SHIFT               (3U)
#define CRU_GATE_CON03_PCLK_NPU_PRE_EN_MASK                (0x1U << CRU_GATE_CON03_PCLK_NPU_PRE_EN_SHIFT)               /* 0x00000008 */
#define CRU_GATE_CON03_ACLK_NPU_NIU_EN_SHIFT               (4U)
#define CRU_GATE_CON03_ACLK_NPU_NIU_EN_MASK                (0x1U << CRU_GATE_CON03_ACLK_NPU_NIU_EN_SHIFT)               /* 0x00000010 */
#define CRU_GATE_CON03_HCLK_NPU_NIU_EN_SHIFT               (5U)
#define CRU_GATE_CON03_HCLK_NPU_NIU_EN_MASK                (0x1U << CRU_GATE_CON03_HCLK_NPU_NIU_EN_SHIFT)               /* 0x00000020 */
#define CRU_GATE_CON03_PCLK_NPU_NIU_EN_SHIFT               (6U)
#define CRU_GATE_CON03_PCLK_NPU_NIU_EN_MASK                (0x1U << CRU_GATE_CON03_PCLK_NPU_NIU_EN_SHIFT)               /* 0x00000040 */
#define CRU_GATE_CON03_ACLK_RKNN_EN_SHIFT                  (7U)
#define CRU_GATE_CON03_ACLK_RKNN_EN_MASK                   (0x1U << CRU_GATE_CON03_ACLK_RKNN_EN_SHIFT)                  /* 0x00000080 */
#define CRU_GATE_CON03_HCLK_RKNN_EN_SHIFT                  (8U)
#define CRU_GATE_CON03_HCLK_RKNN_EN_MASK                   (0x1U << CRU_GATE_CON03_HCLK_RKNN_EN_SHIFT)                  /* 0x00000100 */
#define CRU_GATE_CON03_PCLK_NPU_PVTM_EN_SHIFT              (9U)
#define CRU_GATE_CON03_PCLK_NPU_PVTM_EN_MASK               (0x1U << CRU_GATE_CON03_PCLK_NPU_PVTM_EN_SHIFT)              /* 0x00000200 */
#define CRU_GATE_CON03_CLK_NPU_PVTM_EN_SHIFT               (10U)
#define CRU_GATE_CON03_CLK_NPU_PVTM_EN_MASK                (0x1U << CRU_GATE_CON03_CLK_NPU_PVTM_EN_SHIFT)               /* 0x00000400 */
#define CRU_GATE_CON03_CLK_NPU_PVTM_CORE_EN_SHIFT          (11U)
#define CRU_GATE_CON03_CLK_NPU_PVTM_CORE_EN_MASK           (0x1U << CRU_GATE_CON03_CLK_NPU_PVTM_CORE_EN_SHIFT)          /* 0x00000800 */
#define CRU_GATE_CON03_CLK_NPU_PVTPLL_EN_SHIFT             (12U)
#define CRU_GATE_CON03_CLK_NPU_PVTPLL_EN_MASK              (0x1U << CRU_GATE_CON03_CLK_NPU_PVTPLL_EN_SHIFT)             /* 0x00001000 */
#define CRU_GATE_CON03_CLK_NPU_DIV2_EN_SHIFT               (13U)
#define CRU_GATE_CON03_CLK_NPU_DIV2_EN_MASK                (0x1U << CRU_GATE_CON03_CLK_NPU_DIV2_EN_SHIFT)               /* 0x00002000 */
/* GATE_CON04 */
#define CRU_GATE_CON04_OFFSET                              (0x310U)
#define CRU_GATE_CON04_CLK_DDRPHY1X_EN_SHIFT               (0U)
#define CRU_GATE_CON04_CLK_DDRPHY1X_EN_MASK                (0x1U << CRU_GATE_CON04_CLK_DDRPHY1X_EN_SHIFT)               /* 0x00000001 */
#define CRU_GATE_CON04_CLK_DPLL_DDR_EN_SHIFT               (1U)
#define CRU_GATE_CON04_CLK_DPLL_DDR_EN_MASK                (0x1U << CRU_GATE_CON04_CLK_DPLL_DDR_EN_SHIFT)               /* 0x00000002 */
#define CRU_GATE_CON04_ACLK_MSCH_DIV2_EN_SHIFT             (2U)
#define CRU_GATE_CON04_ACLK_MSCH_DIV2_EN_MASK              (0x1U << CRU_GATE_CON04_ACLK_MSCH_DIV2_EN_SHIFT)             /* 0x00000004 */
#define CRU_GATE_CON04_CLK_HWFFC_CTRL_EN_SHIFT             (3U)
#define CRU_GATE_CON04_CLK_HWFFC_CTRL_EN_MASK              (0x1U << CRU_GATE_CON04_CLK_HWFFC_CTRL_EN_SHIFT)             /* 0x00000008 */
#define CRU_GATE_CON04_ACLK_DDRSCRAMBLE_EN_SHIFT           (4U)
#define CRU_GATE_CON04_ACLK_DDRSCRAMBLE_EN_MASK            (0x1U << CRU_GATE_CON04_ACLK_DDRSCRAMBLE_EN_SHIFT)           /* 0x00000010 */
#define CRU_GATE_CON04_ACLK_MSCH_EN_SHIFT                  (5U)
#define CRU_GATE_CON04_ACLK_MSCH_EN_MASK                   (0x1U << CRU_GATE_CON04_ACLK_MSCH_EN_SHIFT)                  /* 0x00000020 */
#define CRU_GATE_CON04_CLK_DDR_ALWAYSON_EN_SHIFT           (6U)
#define CRU_GATE_CON04_CLK_DDR_ALWAYSON_EN_MASK            (0x1U << CRU_GATE_CON04_CLK_DDR_ALWAYSON_EN_SHIFT)           /* 0x00000040 */
#define CRU_GATE_CON04_ACLK_DDRSPLIT_EN_SHIFT              (8U)
#define CRU_GATE_CON04_ACLK_DDRSPLIT_EN_MASK               (0x1U << CRU_GATE_CON04_ACLK_DDRSPLIT_EN_SHIFT)              /* 0x00000100 */
#define CRU_GATE_CON04_CLK_DDRDFI_CTL_EN_SHIFT             (9U)
#define CRU_GATE_CON04_CLK_DDRDFI_CTL_EN_MASK              (0x1U << CRU_GATE_CON04_CLK_DDRDFI_CTL_EN_SHIFT)             /* 0x00000200 */
#define CRU_GATE_CON04_ACLK_DMA2DDR_EN_SHIFT               (11U)
#define CRU_GATE_CON04_ACLK_DMA2DDR_EN_MASK                (0x1U << CRU_GATE_CON04_ACLK_DMA2DDR_EN_SHIFT)               /* 0x00000800 */
#define CRU_GATE_CON04_CLK_DDRMON_EN_SHIFT                 (13U)
#define CRU_GATE_CON04_CLK_DDRMON_EN_MASK                  (0x1U << CRU_GATE_CON04_CLK_DDRMON_EN_SHIFT)                 /* 0x00002000 */
#define CRU_GATE_CON04_CLK24_DDRMON_EN_SHIFT               (15U)
#define CRU_GATE_CON04_CLK24_DDRMON_EN_MASK                (0x1U << CRU_GATE_CON04_CLK24_DDRMON_EN_SHIFT)               /* 0x00008000 */
/* GATE_CON05 */
#define CRU_GATE_CON05_OFFSET                              (0x314U)
#define CRU_GATE_CON05_ACLK_GIC_AUDIO_EN_SHIFT             (0U)
#define CRU_GATE_CON05_ACLK_GIC_AUDIO_EN_MASK              (0x1U << CRU_GATE_CON05_ACLK_GIC_AUDIO_EN_SHIFT)             /* 0x00000001 */
#define CRU_GATE_CON05_HCLK_GIC_AUDIO_EN_SHIFT             (1U)
#define CRU_GATE_CON05_HCLK_GIC_AUDIO_EN_MASK              (0x1U << CRU_GATE_CON05_HCLK_GIC_AUDIO_EN_SHIFT)             /* 0x00000002 */
#define CRU_GATE_CON05_ACLK_GIC_AUDIO_NIU_EN_SHIFT         (2U)
#define CRU_GATE_CON05_ACLK_GIC_AUDIO_NIU_EN_MASK          (0x1U << CRU_GATE_CON05_ACLK_GIC_AUDIO_NIU_EN_SHIFT)         /* 0x00000004 */
#define CRU_GATE_CON05_HCLK_GIC_AUDIO_NIU_EN_SHIFT         (3U)
#define CRU_GATE_CON05_HCLK_GIC_AUDIO_NIU_EN_MASK          (0x1U << CRU_GATE_CON05_HCLK_GIC_AUDIO_NIU_EN_SHIFT)         /* 0x00000008 */
#define CRU_GATE_CON05_ACLK_GIC600_EN_SHIFT                (4U)
#define CRU_GATE_CON05_ACLK_GIC600_EN_MASK                 (0x1U << CRU_GATE_CON05_ACLK_GIC600_EN_SHIFT)                /* 0x00000010 */
#define CRU_GATE_CON05_ACLK_GICADB_CORE2GIC_EN_SHIFT       (5U)
#define CRU_GATE_CON05_ACLK_GICADB_CORE2GIC_EN_MASK        (0x1U << CRU_GATE_CON05_ACLK_GICADB_CORE2GIC_EN_SHIFT)       /* 0x00000020 */
#define CRU_GATE_CON05_ACLK_GICADB_GIC2CORE_EN_SHIFT       (6U)
#define CRU_GATE_CON05_ACLK_GICADB_GIC2CORE_EN_MASK        (0x1U << CRU_GATE_CON05_ACLK_GICADB_GIC2CORE_EN_SHIFT)       /* 0x00000040 */
#define CRU_GATE_CON05_ACLK_SPINLOCK_EN_SHIFT              (7U)
#define CRU_GATE_CON05_ACLK_SPINLOCK_EN_MASK               (0x1U << CRU_GATE_CON05_ACLK_SPINLOCK_EN_SHIFT)              /* 0x00000080 */
#define CRU_GATE_CON05_HCLK_SDMMC_BUFFER_EN_SHIFT          (8U)
#define CRU_GATE_CON05_HCLK_SDMMC_BUFFER_EN_MASK           (0x1U << CRU_GATE_CON05_HCLK_SDMMC_BUFFER_EN_SHIFT)          /* 0x00000100 */
#define CRU_GATE_CON05_DCLK_SDMMC_BUFFER_EN_SHIFT          (9U)
#define CRU_GATE_CON05_DCLK_SDMMC_BUFFER_EN_MASK           (0x1U << CRU_GATE_CON05_DCLK_SDMMC_BUFFER_EN_SHIFT)          /* 0x00000200 */
#define CRU_GATE_CON05_HCLK_I2S0_8CH_EN_SHIFT              (10U)
#define CRU_GATE_CON05_HCLK_I2S0_8CH_EN_MASK               (0x1U << CRU_GATE_CON05_HCLK_I2S0_8CH_EN_SHIFT)              /* 0x00000400 */
#define CRU_GATE_CON05_HCLK_I2S1_8CH_EN_SHIFT              (11U)
#define CRU_GATE_CON05_HCLK_I2S1_8CH_EN_MASK               (0x1U << CRU_GATE_CON05_HCLK_I2S1_8CH_EN_SHIFT)              /* 0x00000800 */
#define CRU_GATE_CON05_HCLK_I2S2_2CH_EN_SHIFT              (12U)
#define CRU_GATE_CON05_HCLK_I2S2_2CH_EN_MASK               (0x1U << CRU_GATE_CON05_HCLK_I2S2_2CH_EN_SHIFT)              /* 0x00001000 */
#define CRU_GATE_CON05_HCLK_I2S3_2CH_EN_SHIFT              (13U)
#define CRU_GATE_CON05_HCLK_I2S3_2CH_EN_MASK               (0x1U << CRU_GATE_CON05_HCLK_I2S3_2CH_EN_SHIFT)              /* 0x00002000 */
#define CRU_GATE_CON05_HCLK_PDM_EN_SHIFT                   (14U)
#define CRU_GATE_CON05_HCLK_PDM_EN_MASK                    (0x1U << CRU_GATE_CON05_HCLK_PDM_EN_SHIFT)                   /* 0x00004000 */
#define CRU_GATE_CON05_MCLK_PDM_EN_SHIFT                   (15U)
#define CRU_GATE_CON05_MCLK_PDM_EN_MASK                    (0x1U << CRU_GATE_CON05_MCLK_PDM_EN_SHIFT)                   /* 0x00008000 */
/* GATE_CON06 */
#define CRU_GATE_CON06_OFFSET                              (0x318U)
#define CRU_GATE_CON06_CLK_I2S0_8CH_TX_SRC_EN_SHIFT        (0U)
#define CRU_GATE_CON06_CLK_I2S0_8CH_TX_SRC_EN_MASK         (0x1U << CRU_GATE_CON06_CLK_I2S0_8CH_TX_SRC_EN_SHIFT)        /* 0x00000001 */
#define CRU_GATE_CON06_CLK_I2S0_8CH_TX_FRAC_EN_SHIFT       (1U)
#define CRU_GATE_CON06_CLK_I2S0_8CH_TX_FRAC_EN_MASK        (0x1U << CRU_GATE_CON06_CLK_I2S0_8CH_TX_FRAC_EN_SHIFT)       /* 0x00000002 */
#define CRU_GATE_CON06_MCLK_I2S0_8CH_TX_EN_SHIFT           (2U)
#define CRU_GATE_CON06_MCLK_I2S0_8CH_TX_EN_MASK            (0x1U << CRU_GATE_CON06_MCLK_I2S0_8CH_TX_EN_SHIFT)           /* 0x00000004 */
#define CRU_GATE_CON06_I2S0_MCLKOUT_TX_EN_SHIFT            (3U)
#define CRU_GATE_CON06_I2S0_MCLKOUT_TX_EN_MASK             (0x1U << CRU_GATE_CON06_I2S0_MCLKOUT_TX_EN_SHIFT)            /* 0x00000008 */
#define CRU_GATE_CON06_CLK_I2S0_8CH_RX_SRC_EN_SHIFT        (4U)
#define CRU_GATE_CON06_CLK_I2S0_8CH_RX_SRC_EN_MASK         (0x1U << CRU_GATE_CON06_CLK_I2S0_8CH_RX_SRC_EN_SHIFT)        /* 0x00000010 */
#define CRU_GATE_CON06_CLK_I2S0_8CH_RX_FRAC_EN_SHIFT       (5U)
#define CRU_GATE_CON06_CLK_I2S0_8CH_RX_FRAC_EN_MASK        (0x1U << CRU_GATE_CON06_CLK_I2S0_8CH_RX_FRAC_EN_SHIFT)       /* 0x00000020 */
#define CRU_GATE_CON06_MCLK_I2S0_8CH_RX_EN_SHIFT           (6U)
#define CRU_GATE_CON06_MCLK_I2S0_8CH_RX_EN_MASK            (0x1U << CRU_GATE_CON06_MCLK_I2S0_8CH_RX_EN_SHIFT)           /* 0x00000040 */
#define CRU_GATE_CON06_I2S0_MCLKOUT_RX_EN_SHIFT            (7U)
#define CRU_GATE_CON06_I2S0_MCLKOUT_RX_EN_MASK             (0x1U << CRU_GATE_CON06_I2S0_MCLKOUT_RX_EN_SHIFT)            /* 0x00000080 */
#define CRU_GATE_CON06_CLK_I2S1_8CH_TX_SRC_EN_SHIFT        (8U)
#define CRU_GATE_CON06_CLK_I2S1_8CH_TX_SRC_EN_MASK         (0x1U << CRU_GATE_CON06_CLK_I2S1_8CH_TX_SRC_EN_SHIFT)        /* 0x00000100 */
#define CRU_GATE_CON06_CLK_I2S1_8CH_TX_FRAC_EN_SHIFT       (9U)
#define CRU_GATE_CON06_CLK_I2S1_8CH_TX_FRAC_EN_MASK        (0x1U << CRU_GATE_CON06_CLK_I2S1_8CH_TX_FRAC_EN_SHIFT)       /* 0x00000200 */
#define CRU_GATE_CON06_MCLK_I2S1_8CH_TX_EN_SHIFT           (10U)
#define CRU_GATE_CON06_MCLK_I2S1_8CH_TX_EN_MASK            (0x1U << CRU_GATE_CON06_MCLK_I2S1_8CH_TX_EN_SHIFT)           /* 0x00000400 */
#define CRU_GATE_CON06_I2S1_MCLKOUT_TX_EN_SHIFT            (11U)
#define CRU_GATE_CON06_I2S1_MCLKOUT_TX_EN_MASK             (0x1U << CRU_GATE_CON06_I2S1_MCLKOUT_TX_EN_SHIFT)            /* 0x00000800 */
#define CRU_GATE_CON06_CLK_I2S1_8CH_RX_SRC_EN_SHIFT        (12U)
#define CRU_GATE_CON06_CLK_I2S1_8CH_RX_SRC_EN_MASK         (0x1U << CRU_GATE_CON06_CLK_I2S1_8CH_RX_SRC_EN_SHIFT)        /* 0x00001000 */
#define CRU_GATE_CON06_CLK_I2S1_8CH_RX_FRAC_EN_SHIFT       (13U)
#define CRU_GATE_CON06_CLK_I2S1_8CH_RX_FRAC_EN_MASK        (0x1U << CRU_GATE_CON06_CLK_I2S1_8CH_RX_FRAC_EN_SHIFT)       /* 0x00002000 */
#define CRU_GATE_CON06_MCLK_I2S1_8CH_RX_EN_SHIFT           (14U)
#define CRU_GATE_CON06_MCLK_I2S1_8CH_RX_EN_MASK            (0x1U << CRU_GATE_CON06_MCLK_I2S1_8CH_RX_EN_SHIFT)           /* 0x00004000 */
#define CRU_GATE_CON06_I2S1_MCLKOUT_RX_EN_SHIFT            (15U)
#define CRU_GATE_CON06_I2S1_MCLKOUT_RX_EN_MASK             (0x1U << CRU_GATE_CON06_I2S1_MCLKOUT_RX_EN_SHIFT)            /* 0x00008000 */
/* GATE_CON07 */
#define CRU_GATE_CON07_OFFSET                              (0x31CU)
#define CRU_GATE_CON07_CLK_I2S2_2CH_SRC_EN_SHIFT           (0U)
#define CRU_GATE_CON07_CLK_I2S2_2CH_SRC_EN_MASK            (0x1U << CRU_GATE_CON07_CLK_I2S2_2CH_SRC_EN_SHIFT)           /* 0x00000001 */
#define CRU_GATE_CON07_CLK_I2S2_2CH_FRAC_EN_SHIFT          (1U)
#define CRU_GATE_CON07_CLK_I2S2_2CH_FRAC_EN_MASK           (0x1U << CRU_GATE_CON07_CLK_I2S2_2CH_FRAC_EN_SHIFT)          /* 0x00000002 */
#define CRU_GATE_CON07_MCLK_I2S2_2CH_EN_SHIFT              (2U)
#define CRU_GATE_CON07_MCLK_I2S2_2CH_EN_MASK               (0x1U << CRU_GATE_CON07_MCLK_I2S2_2CH_EN_SHIFT)              /* 0x00000004 */
#define CRU_GATE_CON07_I2S2_MCLKOUT_EN_SHIFT               (3U)
#define CRU_GATE_CON07_I2S2_MCLKOUT_EN_MASK                (0x1U << CRU_GATE_CON07_I2S2_MCLKOUT_EN_SHIFT)               /* 0x00000008 */
#define CRU_GATE_CON07_CLK_I2S3_2CH_TX_SRC_EN_SHIFT        (4U)
#define CRU_GATE_CON07_CLK_I2S3_2CH_TX_SRC_EN_MASK         (0x1U << CRU_GATE_CON07_CLK_I2S3_2CH_TX_SRC_EN_SHIFT)        /* 0x00000010 */
#define CRU_GATE_CON07_CLK_I2S3_2CH_TX_FRAC_EN_SHIFT       (5U)
#define CRU_GATE_CON07_CLK_I2S3_2CH_TX_FRAC_EN_MASK        (0x1U << CRU_GATE_CON07_CLK_I2S3_2CH_TX_FRAC_EN_SHIFT)       /* 0x00000020 */
#define CRU_GATE_CON07_MCLK_I2S3_2CH_TX_EN_SHIFT           (6U)
#define CRU_GATE_CON07_MCLK_I2S3_2CH_TX_EN_MASK            (0x1U << CRU_GATE_CON07_MCLK_I2S3_2CH_TX_EN_SHIFT)           /* 0x00000040 */
#define CRU_GATE_CON07_I2S3_MCLKOUT_TX_EN_SHIFT           (7U)
#define CRU_GATE_CON07_I2S3_MCLKOUT_TX_EN_MASK            (0x1U << CRU_GATE_CON07_I2S3_MCLKOUT_TX_EN_SHIFT)           /* 0x00000080 */
#define CRU_GATE_CON07_CLK_I2S3_2CH_RX_SRC_EN_SHIFT        (8U)
#define CRU_GATE_CON07_CLK_I2S3_2CH_RX_SRC_EN_MASK         (0x1U << CRU_GATE_CON07_CLK_I2S3_2CH_RX_SRC_EN_SHIFT)        /* 0x00000100 */
#define CRU_GATE_CON07_CLK_I2S3_2CH_RX_FRAC_EN_SHIFT       (9U)
#define CRU_GATE_CON07_CLK_I2S3_2CH_RX_FRAC_EN_MASK        (0x1U << CRU_GATE_CON07_CLK_I2S3_2CH_RX_FRAC_EN_SHIFT)       /* 0x00000200 */
#define CRU_GATE_CON07_MCLK_I2S3_2CH_RX_EN_SHIFT           (10U)
#define CRU_GATE_CON07_MCLK_I2S3_2CH_RX_EN_MASK            (0x1U << CRU_GATE_CON07_MCLK_I2S3_2CH_RX_EN_SHIFT)           /* 0x00000400 */
#define CRU_GATE_CON07_I2S3_MCLKOUT_RX_EN_SHIFT           (11U)
#define CRU_GATE_CON07_I2S3_MCLKOUT_RX_EN_MASK            (0x1U << CRU_GATE_CON07_I2S3_MCLKOUT_RX_EN_SHIFT)           /* 0x00000800 */
#define CRU_GATE_CON07_HCLK_VAD_EN_SHIFT                   (12U)
#define CRU_GATE_CON07_HCLK_VAD_EN_MASK                    (0x1U << CRU_GATE_CON07_HCLK_VAD_EN_SHIFT)                   /* 0x00001000 */
#define CRU_GATE_CON07_HCLK_SPDIF_8CH_EN_SHIFT             (13U)
#define CRU_GATE_CON07_HCLK_SPDIF_8CH_EN_MASK              (0x1U << CRU_GATE_CON07_HCLK_SPDIF_8CH_EN_SHIFT)             /* 0x00002000 */
#define CRU_GATE_CON07_MCLK_SPDIF_8CH_SRC_EN_SHIFT         (14U)
#define CRU_GATE_CON07_MCLK_SPDIF_8CH_SRC_EN_MASK          (0x1U << CRU_GATE_CON07_MCLK_SPDIF_8CH_SRC_EN_SHIFT)         /* 0x00004000 */
#define CRU_GATE_CON07_MCLK_SPDIF_8CH_FRAC_EN_SHIFT        (15U)
#define CRU_GATE_CON07_MCLK_SPDIF_8CH_FRAC_EN_MASK         (0x1U << CRU_GATE_CON07_MCLK_SPDIF_8CH_FRAC_EN_SHIFT)        /* 0x00008000 */
/* GATE_CON08 */
#define CRU_GATE_CON08_OFFSET                              (0x320U)
#define CRU_GATE_CON08_HCLK_AUDPWM_EN_SHIFT                (0U)
#define CRU_GATE_CON08_HCLK_AUDPWM_EN_MASK                 (0x1U << CRU_GATE_CON08_HCLK_AUDPWM_EN_SHIFT)                /* 0x00000001 */
#define CRU_GATE_CON08_SCLK_AUDPWM_SRC_EN_SHIFT            (1U)
#define CRU_GATE_CON08_SCLK_AUDPWM_SRC_EN_MASK             (0x1U << CRU_GATE_CON08_SCLK_AUDPWM_SRC_EN_SHIFT)            /* 0x00000002 */
#define CRU_GATE_CON08_SCLK_AUDPWM_FRAC_EN_SHIFT           (2U)
#define CRU_GATE_CON08_SCLK_AUDPWM_FRAC_EN_MASK            (0x1U << CRU_GATE_CON08_SCLK_AUDPWM_FRAC_EN_SHIFT)           /* 0x00000004 */
#define CRU_GATE_CON08_HCLK_ACDCDIG_EN_SHIFT               (3U)
#define CRU_GATE_CON08_HCLK_ACDCDIG_EN_MASK                (0x1U << CRU_GATE_CON08_HCLK_ACDCDIG_EN_SHIFT)               /* 0x00000008 */
#define CRU_GATE_CON08_CLK_ACDCDIG_I2C_EN_SHIFT            (4U)
#define CRU_GATE_CON08_CLK_ACDCDIG_I2C_EN_MASK             (0x1U << CRU_GATE_CON08_CLK_ACDCDIG_I2C_EN_SHIFT)            /* 0x00000010 */
#define CRU_GATE_CON08_CLK_ACDCDIG_DAC_EN_SHIFT            (5U)
#define CRU_GATE_CON08_CLK_ACDCDIG_DAC_EN_MASK             (0x1U << CRU_GATE_CON08_CLK_ACDCDIG_DAC_EN_SHIFT)            /* 0x00000020 */
#define CRU_GATE_CON08_CLK_ACDCDIG_ADC_EN_SHIFT            (6U)
#define CRU_GATE_CON08_CLK_ACDCDIG_ADC_EN_MASK             (0x1U << CRU_GATE_CON08_CLK_ACDCDIG_ADC_EN_SHIFT)            /* 0x00000040 */
#define CRU_GATE_CON08_ACLK_SECURE_FLASH_EN_SHIFT          (7U)
#define CRU_GATE_CON08_ACLK_SECURE_FLASH_EN_MASK           (0x1U << CRU_GATE_CON08_ACLK_SECURE_FLASH_EN_SHIFT)          /* 0x00000080 */
#define CRU_GATE_CON08_HCLK_SECURE_FLASH_EN_SHIFT          (8U)
#define CRU_GATE_CON08_HCLK_SECURE_FLASH_EN_MASK           (0x1U << CRU_GATE_CON08_HCLK_SECURE_FLASH_EN_SHIFT)          /* 0x00000100 */
#define CRU_GATE_CON08_ACLK_SECURE_FLASH_NIU_EN_SHIFT      (9U)
#define CRU_GATE_CON08_ACLK_SECURE_FLASH_NIU_EN_MASK       (0x1U << CRU_GATE_CON08_ACLK_SECURE_FLASH_NIU_EN_SHIFT)      /* 0x00000200 */
#define CRU_GATE_CON08_HCLK_SECURE_FLASH_NIU_EN_SHIFT      (10U)
#define CRU_GATE_CON08_HCLK_SECURE_FLASH_NIU_EN_MASK       (0x1U << CRU_GATE_CON08_HCLK_SECURE_FLASH_NIU_EN_SHIFT)      /* 0x00000400 */
#define CRU_GATE_CON08_ACLK_CRYPTO_NS_EN_SHIFT             (11U)
#define CRU_GATE_CON08_ACLK_CRYPTO_NS_EN_MASK              (0x1U << CRU_GATE_CON08_ACLK_CRYPTO_NS_EN_SHIFT)             /* 0x00000800 */
#define CRU_GATE_CON08_HCLK_CRYPTO_NS_EN_SHIFT             (12U)
#define CRU_GATE_CON08_HCLK_CRYPTO_NS_EN_MASK              (0x1U << CRU_GATE_CON08_HCLK_CRYPTO_NS_EN_SHIFT)             /* 0x00001000 */
#define CRU_GATE_CON08_CLK_CRYPTO_NS_CORE_EN_SHIFT         (13U)
#define CRU_GATE_CON08_CLK_CRYPTO_NS_CORE_EN_MASK          (0x1U << CRU_GATE_CON08_CLK_CRYPTO_NS_CORE_EN_SHIFT)         /* 0x00002000 */
#define CRU_GATE_CON08_CLK_CRYPTO_NS_PKA_EN_SHIFT          (14U)
#define CRU_GATE_CON08_CLK_CRYPTO_NS_PKA_EN_MASK           (0x1U << CRU_GATE_CON08_CLK_CRYPTO_NS_PKA_EN_SHIFT)          /* 0x00004000 */
#define CRU_GATE_CON08_CLK_CRYPTO_NS_RNG_EN_SHIFT          (15U)
#define CRU_GATE_CON08_CLK_CRYPTO_NS_RNG_EN_MASK           (0x1U << CRU_GATE_CON08_CLK_CRYPTO_NS_RNG_EN_SHIFT)          /* 0x00008000 */
/* GATE_CON09 */
#define CRU_GATE_CON09_OFFSET                              (0x324U)
#define CRU_GATE_CON09_HCLK_NANDC_EN_SHIFT                 (0U)
#define CRU_GATE_CON09_HCLK_NANDC_EN_MASK                  (0x1U << CRU_GATE_CON09_HCLK_NANDC_EN_SHIFT)                 /* 0x00000001 */
#define CRU_GATE_CON09_NCLK_NANDC_EN_SHIFT                 (1U)
#define CRU_GATE_CON09_NCLK_NANDC_EN_MASK                  (0x1U << CRU_GATE_CON09_NCLK_NANDC_EN_SHIFT)                 /* 0x00000002 */
#define CRU_GATE_CON09_HCLK_SFC_EN_SHIFT                   (2U)
#define CRU_GATE_CON09_HCLK_SFC_EN_MASK                    (0x1U << CRU_GATE_CON09_HCLK_SFC_EN_SHIFT)                   /* 0x00000004 */
#define CRU_GATE_CON09_HCLK_SFC_XIP_EN_SHIFT               (3U)
#define CRU_GATE_CON09_HCLK_SFC_XIP_EN_MASK                (0x1U << CRU_GATE_CON09_HCLK_SFC_XIP_EN_SHIFT)               /* 0x00000008 */
#define CRU_GATE_CON09_SCLK_SFC_EN_SHIFT                   (4U)
#define CRU_GATE_CON09_SCLK_SFC_EN_MASK                    (0x1U << CRU_GATE_CON09_SCLK_SFC_EN_SHIFT)                   /* 0x00000010 */
#define CRU_GATE_CON09_ACLK_EMMC_EN_SHIFT                  (5U)
#define CRU_GATE_CON09_ACLK_EMMC_EN_MASK                   (0x1U << CRU_GATE_CON09_ACLK_EMMC_EN_SHIFT)                  /* 0x00000020 */
#define CRU_GATE_CON09_HCLK_EMMC_EN_SHIFT                  (6U)
#define CRU_GATE_CON09_HCLK_EMMC_EN_MASK                   (0x1U << CRU_GATE_CON09_HCLK_EMMC_EN_SHIFT)                  /* 0x00000040 */
#define CRU_GATE_CON09_BCLK_EMMC_EN_SHIFT                  (7U)
#define CRU_GATE_CON09_BCLK_EMMC_EN_MASK                   (0x1U << CRU_GATE_CON09_BCLK_EMMC_EN_SHIFT)                  /* 0x00000080 */
#define CRU_GATE_CON09_CCLK_EMMC_EN_SHIFT                  (8U)
#define CRU_GATE_CON09_CCLK_EMMC_EN_MASK                   (0x1U << CRU_GATE_CON09_CCLK_EMMC_EN_SHIFT)                  /* 0x00000100 */
#define CRU_GATE_CON09_TCLK_EMMC_EN_SHIFT                  (9U)
#define CRU_GATE_CON09_TCLK_EMMC_EN_MASK                   (0x1U << CRU_GATE_CON09_TCLK_EMMC_EN_SHIFT)                  /* 0x00000200 */
#define CRU_GATE_CON09_HCLK_TRNG_NS_EN_SHIFT               (10U)
#define CRU_GATE_CON09_HCLK_TRNG_NS_EN_MASK                (0x1U << CRU_GATE_CON09_HCLK_TRNG_NS_EN_SHIFT)               /* 0x00000400 */
#define CRU_GATE_CON09_CLK_TRNG_NS_EN_SHIFT                (11U)
#define CRU_GATE_CON09_CLK_TRNG_NS_EN_MASK                 (0x1U << CRU_GATE_CON09_CLK_TRNG_NS_EN_SHIFT)                /* 0x00000800 */
/* GATE_CON10 */
#define CRU_GATE_CON10_OFFSET                              (0x328U)
#define CRU_GATE_CON10_ACLK_PIPE_EN_SHIFT                  (0U)
#define CRU_GATE_CON10_ACLK_PIPE_EN_MASK                   (0x1U << CRU_GATE_CON10_ACLK_PIPE_EN_SHIFT)                  /* 0x00000001 */
#define CRU_GATE_CON10_PCLK_PIPE_EN_SHIFT                  (1U)
#define CRU_GATE_CON10_PCLK_PIPE_EN_MASK                   (0x1U << CRU_GATE_CON10_PCLK_PIPE_EN_SHIFT)                  /* 0x00000002 */
#define CRU_GATE_CON10_ACLK_PIPE_NIU_EN_SHIFT              (2U)
#define CRU_GATE_CON10_ACLK_PIPE_NIU_EN_MASK               (0x1U << CRU_GATE_CON10_ACLK_PIPE_NIU_EN_SHIFT)              /* 0x00000004 */
#define CRU_GATE_CON10_PCLK_PIPE_NIU_EN_SHIFT              (3U)
#define CRU_GATE_CON10_PCLK_PIPE_NIU_EN_MASK               (0x1U << CRU_GATE_CON10_PCLK_PIPE_NIU_EN_SHIFT)              /* 0x00000008 */
#define CRU_GATE_CON10_CLK_XPCS_EEE_EN_SHIFT               (4U)
#define CRU_GATE_CON10_CLK_XPCS_EEE_EN_MASK                (0x1U << CRU_GATE_CON10_CLK_XPCS_EEE_EN_SHIFT)               /* 0x00000010 */
#define CRU_GATE_CON10_CLK_XPCS_RX_DIV10_EN_SHIFT          (5U)
#define CRU_GATE_CON10_CLK_XPCS_RX_DIV10_EN_MASK           (0x1U << CRU_GATE_CON10_CLK_XPCS_RX_DIV10_EN_SHIFT)          /* 0x00000020 */
#define CRU_GATE_CON10_CLK_XPCS_TX_DIV10_EN_SHIFT          (6U)
#define CRU_GATE_CON10_CLK_XPCS_TX_DIV10_EN_MASK           (0x1U << CRU_GATE_CON10_CLK_XPCS_TX_DIV10_EN_SHIFT)          /* 0x00000040 */
#define CRU_GATE_CON10_PCLK_PIPE_GRF_EN_SHIFT              (7U)
#define CRU_GATE_CON10_PCLK_PIPE_GRF_EN_MASK               (0x1U << CRU_GATE_CON10_PCLK_PIPE_GRF_EN_SHIFT)              /* 0x00000080 */
#define CRU_GATE_CON10_ACLK_USB3OTG0_EN_SHIFT              (8U)
#define CRU_GATE_CON10_ACLK_USB3OTG0_EN_MASK               (0x1U << CRU_GATE_CON10_ACLK_USB3OTG0_EN_SHIFT)              /* 0x00000100 */
#define CRU_GATE_CON10_CLK_USB3OTG0_REF_EN_SHIFT           (9U)
#define CRU_GATE_CON10_CLK_USB3OTG0_REF_EN_MASK            (0x1U << CRU_GATE_CON10_CLK_USB3OTG0_REF_EN_SHIFT)           /* 0x00000200 */
#define CRU_GATE_CON10_CLK_USB3OTG0_SUSPEND_EN_SHIFT       (10U)
#define CRU_GATE_CON10_CLK_USB3OTG0_SUSPEND_EN_MASK        (0x1U << CRU_GATE_CON10_CLK_USB3OTG0_SUSPEND_EN_SHIFT)       /* 0x00000400 */
#define CRU_GATE_CON10_CLK_USB3OTG0_PIPE_EN_SHIFT          (11U)
#define CRU_GATE_CON10_CLK_USB3OTG0_PIPE_EN_MASK           (0x1U << CRU_GATE_CON10_CLK_USB3OTG0_PIPE_EN_SHIFT)          /* 0x00000800 */
#define CRU_GATE_CON10_ACLK_USB3OTG1_EN_SHIFT              (12U)
#define CRU_GATE_CON10_ACLK_USB3OTG1_EN_MASK               (0x1U << CRU_GATE_CON10_ACLK_USB3OTG1_EN_SHIFT)              /* 0x00001000 */
#define CRU_GATE_CON10_CLK_USB3OTG1_REF_EN_SHIFT           (13U)
#define CRU_GATE_CON10_CLK_USB3OTG1_REF_EN_MASK            (0x1U << CRU_GATE_CON10_CLK_USB3OTG1_REF_EN_SHIFT)           /* 0x00002000 */
#define CRU_GATE_CON10_CLK_USB3OTG1_SUSPEND_EN_SHIFT       (14U)
#define CRU_GATE_CON10_CLK_USB3OTG1_SUSPEND_EN_MASK        (0x1U << CRU_GATE_CON10_CLK_USB3OTG1_SUSPEND_EN_SHIFT)       /* 0x00004000 */
#define CRU_GATE_CON10_CLK_USB3OTG1_PIPE_EN_SHIFT          (15U)
#define CRU_GATE_CON10_CLK_USB3OTG1_PIPE_EN_MASK           (0x1U << CRU_GATE_CON10_CLK_USB3OTG1_PIPE_EN_SHIFT)          /* 0x00008000 */
/* GATE_CON11 */
#define CRU_GATE_CON11_OFFSET                              (0x32CU)
#define CRU_GATE_CON11_ACLK_SATA0_EN_SHIFT                 (0U)
#define CRU_GATE_CON11_ACLK_SATA0_EN_MASK                  (0x1U << CRU_GATE_CON11_ACLK_SATA0_EN_SHIFT)                 /* 0x00000001 */
#define CRU_GATE_CON11_CLK_SATA0_PMALIVE_EN_SHIFT          (1U)
#define CRU_GATE_CON11_CLK_SATA0_PMALIVE_EN_MASK           (0x1U << CRU_GATE_CON11_CLK_SATA0_PMALIVE_EN_SHIFT)          /* 0x00000002 */
#define CRU_GATE_CON11_CLK_SATA0_RXOOB_EN_SHIFT            (2U)
#define CRU_GATE_CON11_CLK_SATA0_RXOOB_EN_MASK             (0x1U << CRU_GATE_CON11_CLK_SATA0_RXOOB_EN_SHIFT)            /* 0x00000004 */
#define CRU_GATE_CON11_CLK_SATA0_PIPE_EN_SHIFT             (3U)
#define CRU_GATE_CON11_CLK_SATA0_PIPE_EN_MASK              (0x1U << CRU_GATE_CON11_CLK_SATA0_PIPE_EN_SHIFT)             /* 0x00000008 */
#define CRU_GATE_CON11_ACLK_SATA1_EN_SHIFT                 (4U)
#define CRU_GATE_CON11_ACLK_SATA1_EN_MASK                  (0x1U << CRU_GATE_CON11_ACLK_SATA1_EN_SHIFT)                 /* 0x00000010 */
#define CRU_GATE_CON11_CLK_SATA1_PMALIVE_EN_SHIFT          (5U)
#define CRU_GATE_CON11_CLK_SATA1_PMALIVE_EN_MASK           (0x1U << CRU_GATE_CON11_CLK_SATA1_PMALIVE_EN_SHIFT)          /* 0x00000020 */
#define CRU_GATE_CON11_CLK_SATA1_RXOOB_EN_SHIFT            (6U)
#define CRU_GATE_CON11_CLK_SATA1_RXOOB_EN_MASK             (0x1U << CRU_GATE_CON11_CLK_SATA1_RXOOB_EN_SHIFT)            /* 0x00000040 */
#define CRU_GATE_CON11_CLK_SATA1_PIPE_EN_SHIFT             (7U)
#define CRU_GATE_CON11_CLK_SATA1_PIPE_EN_MASK              (0x1U << CRU_GATE_CON11_CLK_SATA1_PIPE_EN_SHIFT)             /* 0x00000080 */
#define CRU_GATE_CON11_ACLK_SATA2_EN_SHIFT                 (8U)
#define CRU_GATE_CON11_ACLK_SATA2_EN_MASK                  (0x1U << CRU_GATE_CON11_ACLK_SATA2_EN_SHIFT)                 /* 0x00000100 */
#define CRU_GATE_CON11_CLK_SATA2_PMALIVE_EN_SHIFT          (9U)
#define CRU_GATE_CON11_CLK_SATA2_PMALIVE_EN_MASK           (0x1U << CRU_GATE_CON11_CLK_SATA2_PMALIVE_EN_SHIFT)          /* 0x00000200 */
#define CRU_GATE_CON11_CLK_SATA2_RXOOB_EN_SHIFT            (10U)
#define CRU_GATE_CON11_CLK_SATA2_RXOOB_EN_MASK             (0x1U << CRU_GATE_CON11_CLK_SATA2_RXOOB_EN_SHIFT)            /* 0x00000400 */
#define CRU_GATE_CON11_CLK_SATA2_PIPE_EN_SHIFT             (11U)
#define CRU_GATE_CON11_CLK_SATA2_PIPE_EN_MASK              (0x1U << CRU_GATE_CON11_CLK_SATA2_PIPE_EN_SHIFT)             /* 0x00000800 */
/* GATE_CON12 */
#define CRU_GATE_CON12_OFFSET                              (0x330U)
#define CRU_GATE_CON12_ACLK_PCIE20_MST_EN_SHIFT            (0U)
#define CRU_GATE_CON12_ACLK_PCIE20_MST_EN_MASK             (0x1U << CRU_GATE_CON12_ACLK_PCIE20_MST_EN_SHIFT)            /* 0x00000001 */
#define CRU_GATE_CON12_ACLK_PCIE20_SLV_EN_SHIFT            (1U)
#define CRU_GATE_CON12_ACLK_PCIE20_SLV_EN_MASK             (0x1U << CRU_GATE_CON12_ACLK_PCIE20_SLV_EN_SHIFT)            /* 0x00000002 */
#define CRU_GATE_CON12_ACLK_PCIE20_DBI_EN_SHIFT            (2U)
#define CRU_GATE_CON12_ACLK_PCIE20_DBI_EN_MASK             (0x1U << CRU_GATE_CON12_ACLK_PCIE20_DBI_EN_SHIFT)            /* 0x00000004 */
#define CRU_GATE_CON12_PCLK_PCIE20_EN_SHIFT                (3U)
#define CRU_GATE_CON12_PCLK_PCIE20_EN_MASK                 (0x1U << CRU_GATE_CON12_PCLK_PCIE20_EN_SHIFT)                /* 0x00000008 */
#define CRU_GATE_CON12_CLK_PCIE20_AUX_EN_SHIFT             (4U)
#define CRU_GATE_CON12_CLK_PCIE20_AUX_EN_MASK              (0x1U << CRU_GATE_CON12_CLK_PCIE20_AUX_EN_SHIFT)             /* 0x00000010 */
#define CRU_GATE_CON12_CLK_PCIE20_PIPE_EN_SHIFT            (5U)
#define CRU_GATE_CON12_CLK_PCIE20_PIPE_EN_MASK             (0x1U << CRU_GATE_CON12_CLK_PCIE20_PIPE_EN_SHIFT)            /* 0x00000020 */
#define CRU_GATE_CON12_ACLK_PCIE30X1_MST_EN_SHIFT          (8U)
#define CRU_GATE_CON12_ACLK_PCIE30X1_MST_EN_MASK           (0x1U << CRU_GATE_CON12_ACLK_PCIE30X1_MST_EN_SHIFT)          /* 0x00000100 */
#define CRU_GATE_CON12_ACLK_PCIE30X1_SLV_EN_SHIFT          (9U)
#define CRU_GATE_CON12_ACLK_PCIE30X1_SLV_EN_MASK           (0x1U << CRU_GATE_CON12_ACLK_PCIE30X1_SLV_EN_SHIFT)          /* 0x00000200 */
#define CRU_GATE_CON12_ACLK_PCIE30X1_DBI_EN_SHIFT          (10U)
#define CRU_GATE_CON12_ACLK_PCIE30X1_DBI_EN_MASK           (0x1U << CRU_GATE_CON12_ACLK_PCIE30X1_DBI_EN_SHIFT)          /* 0x00000400 */
#define CRU_GATE_CON12_PCLK_PCIE30X1_EN_SHIFT              (11U)
#define CRU_GATE_CON12_PCLK_PCIE30X1_EN_MASK               (0x1U << CRU_GATE_CON12_PCLK_PCIE30X1_EN_SHIFT)              /* 0x00000800 */
#define CRU_GATE_CON12_CLK_PCIE30X1_AUX_EN_SHIFT           (12U)
#define CRU_GATE_CON12_CLK_PCIE30X1_AUX_EN_MASK            (0x1U << CRU_GATE_CON12_CLK_PCIE30X1_AUX_EN_SHIFT)           /* 0x00001000 */
#define CRU_GATE_CON12_CLK_PCIE30X1_PIPE_EN_SHIFT          (13U)
#define CRU_GATE_CON12_CLK_PCIE30X1_PIPE_EN_MASK           (0x1U << CRU_GATE_CON12_CLK_PCIE30X1_PIPE_EN_SHIFT)          /* 0x00002000 */
/* GATE_CON13 */
#define CRU_GATE_CON13_OFFSET                              (0x334U)
#define CRU_GATE_CON13_ACLK_PCIE30X2_MST_EN_SHIFT          (0U)
#define CRU_GATE_CON13_ACLK_PCIE30X2_MST_EN_MASK           (0x1U << CRU_GATE_CON13_ACLK_PCIE30X2_MST_EN_SHIFT)          /* 0x00000001 */
#define CRU_GATE_CON13_ACLK_PCIE30X2_SLV_EN_SHIFT          (1U)
#define CRU_GATE_CON13_ACLK_PCIE30X2_SLV_EN_MASK           (0x1U << CRU_GATE_CON13_ACLK_PCIE30X2_SLV_EN_SHIFT)          /* 0x00000002 */
#define CRU_GATE_CON13_ACLK_PCIE30X2_DBI_EN_SHIFT          (2U)
#define CRU_GATE_CON13_ACLK_PCIE30X2_DBI_EN_MASK           (0x1U << CRU_GATE_CON13_ACLK_PCIE30X2_DBI_EN_SHIFT)          /* 0x00000004 */
#define CRU_GATE_CON13_PCLK_PCIE30X2_EN_SHIFT              (3U)
#define CRU_GATE_CON13_PCLK_PCIE30X2_EN_MASK               (0x1U << CRU_GATE_CON13_PCLK_PCIE30X2_EN_SHIFT)              /* 0x00000008 */
#define CRU_GATE_CON13_CLK_PCIE30X2_AUX_EN_SHIFT           (4U)
#define CRU_GATE_CON13_CLK_PCIE30X2_AUX_EN_MASK            (0x1U << CRU_GATE_CON13_CLK_PCIE30X2_AUX_EN_SHIFT)           /* 0x00000010 */
#define CRU_GATE_CON13_CLK_PCIE30X2_PIPE_EN_SHIFT          (5U)
#define CRU_GATE_CON13_CLK_PCIE30X2_PIPE_EN_MASK           (0x1U << CRU_GATE_CON13_CLK_PCIE30X2_PIPE_EN_SHIFT)          /* 0x00000020 */
#define CRU_GATE_CON13_PCLK_XPCS_EN_SHIFT                  (6U)
#define CRU_GATE_CON13_PCLK_XPCS_EN_MASK                   (0x1U << CRU_GATE_CON13_PCLK_XPCS_EN_SHIFT)                  /* 0x00000040 */
#define CRU_GATE_CON13_CLK_XPCS_QSGMII_TX_EN_SHIFT         (7U)
#define CRU_GATE_CON13_CLK_XPCS_QSGMII_TX_EN_MASK          (0x1U << CRU_GATE_CON13_CLK_XPCS_QSGMII_TX_EN_SHIFT)         /* 0x00000080 */
#define CRU_GATE_CON13_CLK_XPCS_QSGMII_RX_EN_SHIFT         (8U)
#define CRU_GATE_CON13_CLK_XPCS_QSGMII_RX_EN_MASK          (0x1U << CRU_GATE_CON13_CLK_XPCS_QSGMII_RX_EN_SHIFT)         /* 0x00000100 */
#define CRU_GATE_CON13_CLK_XPCS_XGXS_TX_EN_SHIFT           (9U)
#define CRU_GATE_CON13_CLK_XPCS_XGXS_TX_EN_MASK            (0x1U << CRU_GATE_CON13_CLK_XPCS_XGXS_TX_EN_SHIFT)           /* 0x00000200 */
#define CRU_GATE_CON13_CLK_XPCS_XGXS_RX_EN_SHIFT           (11U)
#define CRU_GATE_CON13_CLK_XPCS_XGXS_RX_EN_MASK            (0x1U << CRU_GATE_CON13_CLK_XPCS_XGXS_RX_EN_SHIFT)           /* 0x00000800 */
#define CRU_GATE_CON13_CLK_XPCS_MII0_TX_EN_SHIFT           (12U)
#define CRU_GATE_CON13_CLK_XPCS_MII0_TX_EN_MASK            (0x1U << CRU_GATE_CON13_CLK_XPCS_MII0_TX_EN_SHIFT)           /* 0x00001000 */
#define CRU_GATE_CON13_CLK_XPCS_MII0_RX_EN_SHIFT           (13U)
#define CRU_GATE_CON13_CLK_XPCS_MII0_RX_EN_MASK            (0x1U << CRU_GATE_CON13_CLK_XPCS_MII0_RX_EN_SHIFT)           /* 0x00002000 */
#define CRU_GATE_CON13_CLK_XPCS_MII1_TX_EN_SHIFT           (14U)
#define CRU_GATE_CON13_CLK_XPCS_MII1_TX_EN_MASK            (0x1U << CRU_GATE_CON13_CLK_XPCS_MII1_TX_EN_SHIFT)           /* 0x00004000 */
#define CRU_GATE_CON13_CLK_XPCS_MII1_RX_EN_SHIFT           (15U)
#define CRU_GATE_CON13_CLK_XPCS_MII1_RX_EN_MASK            (0x1U << CRU_GATE_CON13_CLK_XPCS_MII1_RX_EN_SHIFT)           /* 0x00008000 */
/* GATE_CON14 */
#define CRU_GATE_CON14_OFFSET                              (0x338U)
#define CRU_GATE_CON14_ACLK_PERIMID_EN_SHIFT               (0U)
#define CRU_GATE_CON14_ACLK_PERIMID_EN_MASK                (0x1U << CRU_GATE_CON14_ACLK_PERIMID_EN_SHIFT)               /* 0x00000001 */
#define CRU_GATE_CON14_HCLK_PERIMID_EN_SHIFT               (1U)
#define CRU_GATE_CON14_HCLK_PERIMID_EN_MASK                (0x1U << CRU_GATE_CON14_HCLK_PERIMID_EN_SHIFT)               /* 0x00000002 */
#define CRU_GATE_CON14_ACLK_PERIMID_NIU_EN_SHIFT           (2U)
#define CRU_GATE_CON14_ACLK_PERIMID_NIU_EN_MASK            (0x1U << CRU_GATE_CON14_ACLK_PERIMID_NIU_EN_SHIFT)           /* 0x00000004 */
#define CRU_GATE_CON14_HCLK_PERIMID_NIU_EN_SHIFT           (3U)
#define CRU_GATE_CON14_HCLK_PERIMID_NIU_EN_MASK            (0x1U << CRU_GATE_CON14_HCLK_PERIMID_NIU_EN_SHIFT)           /* 0x00000008 */
#define CRU_GATE_CON14_ACLK_PHP_EN_SHIFT                   (8U)
#define CRU_GATE_CON14_ACLK_PHP_EN_MASK                    (0x1U << CRU_GATE_CON14_ACLK_PHP_EN_SHIFT)                   /* 0x00000100 */
#define CRU_GATE_CON14_HCLK_PHP_EN_SHIFT                   (9U)
#define CRU_GATE_CON14_HCLK_PHP_EN_MASK                    (0x1U << CRU_GATE_CON14_HCLK_PHP_EN_SHIFT)                   /* 0x00000200 */
#define CRU_GATE_CON14_PCLK_PHP_EN_SHIFT                   (10U)
#define CRU_GATE_CON14_PCLK_PHP_EN_MASK                    (0x1U << CRU_GATE_CON14_PCLK_PHP_EN_SHIFT)                   /* 0x00000400 */
#define CRU_GATE_CON14_ACLK_PHP_NIU_EN_SHIFT               (11U)
#define CRU_GATE_CON14_ACLK_PHP_NIU_EN_MASK                (0x1U << CRU_GATE_CON14_ACLK_PHP_NIU_EN_SHIFT)               /* 0x00000800 */
#define CRU_GATE_CON14_HCLK_PHP_NIU_EN_SHIFT               (12U)
#define CRU_GATE_CON14_HCLK_PHP_NIU_EN_MASK                (0x1U << CRU_GATE_CON14_HCLK_PHP_NIU_EN_SHIFT)               /* 0x00001000 */
#define CRU_GATE_CON14_PCLK_PHP_NIU_EN_SHIFT               (13U)
#define CRU_GATE_CON14_PCLK_PHP_NIU_EN_MASK                (0x1U << CRU_GATE_CON14_PCLK_PHP_NIU_EN_SHIFT)               /* 0x00002000 */
/* GATE_CON15 */
#define CRU_GATE_CON15_OFFSET                              (0x33CU)
#define CRU_GATE_CON15_HCLK_SDMMC0_EN_SHIFT                (0U)
#define CRU_GATE_CON15_HCLK_SDMMC0_EN_MASK                 (0x1U << CRU_GATE_CON15_HCLK_SDMMC0_EN_SHIFT)                /* 0x00000001 */
#define CRU_GATE_CON15_CLK_SDMMC0_EN_SHIFT                 (1U)
#define CRU_GATE_CON15_CLK_SDMMC0_EN_MASK                  (0x1U << CRU_GATE_CON15_CLK_SDMMC0_EN_SHIFT)                 /* 0x00000002 */
#define CRU_GATE_CON15_HCLK_SDMMC1_EN_SHIFT                (2U)
#define CRU_GATE_CON15_HCLK_SDMMC1_EN_MASK                 (0x1U << CRU_GATE_CON15_HCLK_SDMMC1_EN_SHIFT)                /* 0x00000004 */
#define CRU_GATE_CON15_CLK_SDMMC1_EN_SHIFT                 (3U)
#define CRU_GATE_CON15_CLK_SDMMC1_EN_MASK                  (0x1U << CRU_GATE_CON15_CLK_SDMMC1_EN_SHIFT)                 /* 0x00000008 */
#define CRU_GATE_CON15_CLK_GMAC0_PTP_REF_EN_SHIFT          (4U)
#define CRU_GATE_CON15_CLK_GMAC0_PTP_REF_EN_MASK           (0x1U << CRU_GATE_CON15_CLK_GMAC0_PTP_REF_EN_SHIFT)          /* 0x00000010 */
#define CRU_GATE_CON15_ACLK_GMAC0_EN_SHIFT                 (5U)
#define CRU_GATE_CON15_ACLK_GMAC0_EN_MASK                  (0x1U << CRU_GATE_CON15_ACLK_GMAC0_EN_SHIFT)                 /* 0x00000020 */
#define CRU_GATE_CON15_PCLK_GMAC0_EN_SHIFT                 (6U)
#define CRU_GATE_CON15_PCLK_GMAC0_EN_MASK                  (0x1U << CRU_GATE_CON15_PCLK_GMAC0_EN_SHIFT)                 /* 0x00000040 */
#define CRU_GATE_CON15_CLK_MAC0_2TOP_EN_SHIFT              (7U)
#define CRU_GATE_CON15_CLK_MAC0_2TOP_EN_MASK               (0x1U << CRU_GATE_CON15_CLK_MAC0_2TOP_EN_SHIFT)              /* 0x00000080 */
#define CRU_GATE_CON15_CLK_MAC0_OUT_EN_SHIFT               (8U)
#define CRU_GATE_CON15_CLK_MAC0_OUT_EN_MASK                (0x1U << CRU_GATE_CON15_CLK_MAC0_OUT_EN_SHIFT)               /* 0x00000100 */
#define CRU_GATE_CON15_CLK_MAC0_REFOUT_EN_SHIFT            (12U)
#define CRU_GATE_CON15_CLK_MAC0_REFOUT_EN_MASK             (0x1U << CRU_GATE_CON15_CLK_MAC0_REFOUT_EN_SHIFT)            /* 0x00001000 */
/* GATE_CON16 */
#define CRU_GATE_CON16_OFFSET                              (0x340U)
#define CRU_GATE_CON16_ACLK_USB_EN_SHIFT                   (0U)
#define CRU_GATE_CON16_ACLK_USB_EN_MASK                    (0x1U << CRU_GATE_CON16_ACLK_USB_EN_SHIFT)                   /* 0x00000001 */
#define CRU_GATE_CON16_HCLK_USB_EN_SHIFT                   (1U)
#define CRU_GATE_CON16_HCLK_USB_EN_MASK                    (0x1U << CRU_GATE_CON16_HCLK_USB_EN_SHIFT)                   /* 0x00000002 */
#define CRU_GATE_CON16_PCLK_USB_EN_SHIFT                   (2U)
#define CRU_GATE_CON16_PCLK_USB_EN_MASK                    (0x1U << CRU_GATE_CON16_PCLK_USB_EN_SHIFT)                   /* 0x00000004 */
#define CRU_GATE_CON16_ACLK_USB_NIU_EN_SHIFT               (3U)
#define CRU_GATE_CON16_ACLK_USB_NIU_EN_MASK                (0x1U << CRU_GATE_CON16_ACLK_USB_NIU_EN_SHIFT)               /* 0x00000008 */
#define CRU_GATE_CON16_HCLK_USB_NIU_EN_SHIFT               (4U)
#define CRU_GATE_CON16_HCLK_USB_NIU_EN_MASK                (0x1U << CRU_GATE_CON16_HCLK_USB_NIU_EN_SHIFT)               /* 0x00000010 */
#define CRU_GATE_CON16_PCLK_USB_NIU_EN_SHIFT               (5U)
#define CRU_GATE_CON16_PCLK_USB_NIU_EN_MASK                (0x1U << CRU_GATE_CON16_PCLK_USB_NIU_EN_SHIFT)               /* 0x00000020 */
#define CRU_GATE_CON16_PCLK_USB_GRF_EN_SHIFT               (6U)
#define CRU_GATE_CON16_PCLK_USB_GRF_EN_MASK                (0x1U << CRU_GATE_CON16_PCLK_USB_GRF_EN_SHIFT)               /* 0x00000040 */
#define CRU_GATE_CON16_HCLK_USB2HOST0_EN_SHIFT             (12U)
#define CRU_GATE_CON16_HCLK_USB2HOST0_EN_MASK              (0x1U << CRU_GATE_CON16_HCLK_USB2HOST0_EN_SHIFT)             /* 0x00001000 */
#define CRU_GATE_CON16_HCLK_USB2HOST0_ARB_EN_SHIFT         (13U)
#define CRU_GATE_CON16_HCLK_USB2HOST0_ARB_EN_MASK          (0x1U << CRU_GATE_CON16_HCLK_USB2HOST0_ARB_EN_SHIFT)         /* 0x00002000 */
#define CRU_GATE_CON16_HCLK_USB2HOST1_EN_SHIFT             (14U)
#define CRU_GATE_CON16_HCLK_USB2HOST1_EN_MASK              (0x1U << CRU_GATE_CON16_HCLK_USB2HOST1_EN_SHIFT)             /* 0x00004000 */
#define CRU_GATE_CON16_HCLK_USB2HOST1_ARB_EN_SHIFT         (15U)
#define CRU_GATE_CON16_HCLK_USB2HOST1_ARB_EN_MASK          (0x1U << CRU_GATE_CON16_HCLK_USB2HOST1_ARB_EN_SHIFT)         /* 0x00008000 */
/* GATE_CON17 */
#define CRU_GATE_CON17_OFFSET                              (0x344U)
#define CRU_GATE_CON17_HCLK_SDMMC2_EN_SHIFT                (0U)
#define CRU_GATE_CON17_HCLK_SDMMC2_EN_MASK                 (0x1U << CRU_GATE_CON17_HCLK_SDMMC2_EN_SHIFT)                /* 0x00000001 */
#define CRU_GATE_CON17_CLK_SDMMC2_EN_SHIFT                 (1U)
#define CRU_GATE_CON17_CLK_SDMMC2_EN_MASK                  (0x1U << CRU_GATE_CON17_CLK_SDMMC2_EN_SHIFT)                 /* 0x00000002 */
#define CRU_GATE_CON17_CLK_GMAC1_PTP_REF_EN_SHIFT          (2U)
#define CRU_GATE_CON17_CLK_GMAC1_PTP_REF_EN_MASK           (0x1U << CRU_GATE_CON17_CLK_GMAC1_PTP_REF_EN_SHIFT)          /* 0x00000004 */
#define CRU_GATE_CON17_ACLK_GMAC1_EN_SHIFT                 (3U)
#define CRU_GATE_CON17_ACLK_GMAC1_EN_MASK                  (0x1U << CRU_GATE_CON17_ACLK_GMAC1_EN_SHIFT)                 /* 0x00000008 */
#define CRU_GATE_CON17_PCLK_GMAC1_EN_SHIFT                 (4U)
#define CRU_GATE_CON17_PCLK_GMAC1_EN_MASK                  (0x1U << CRU_GATE_CON17_PCLK_GMAC1_EN_SHIFT)                 /* 0x00000010 */
#define CRU_GATE_CON17_CLK_MAC1_2TOP_EN_SHIFT              (5U)
#define CRU_GATE_CON17_CLK_MAC1_2TOP_EN_MASK               (0x1U << CRU_GATE_CON17_CLK_MAC1_2TOP_EN_SHIFT)              /* 0x00000020 */
#define CRU_GATE_CON17_CLK_MAC1_OUT_EN_SHIFT               (6U)
#define CRU_GATE_CON17_CLK_MAC1_OUT_EN_MASK                (0x1U << CRU_GATE_CON17_CLK_MAC1_OUT_EN_SHIFT)               /* 0x00000040 */
#define CRU_GATE_CON17_CLK_MAC1_REFOUT_EN_SHIFT            (10U)
#define CRU_GATE_CON17_CLK_MAC1_REFOUT_EN_MASK             (0x1U << CRU_GATE_CON17_CLK_MAC1_REFOUT_EN_SHIFT)            /* 0x00000400 */
/* GATE_CON18 */
#define CRU_GATE_CON18_OFFSET                              (0x348U)
#define CRU_GATE_CON18_ACLK_VI_EN_SHIFT                    (0U)
#define CRU_GATE_CON18_ACLK_VI_EN_MASK                     (0x1U << CRU_GATE_CON18_ACLK_VI_EN_SHIFT)                    /* 0x00000001 */
#define CRU_GATE_CON18_HCLK_VI_EN_SHIFT                    (1U)
#define CRU_GATE_CON18_HCLK_VI_EN_MASK                     (0x1U << CRU_GATE_CON18_HCLK_VI_EN_SHIFT)                    /* 0x00000002 */
#define CRU_GATE_CON18_PCLK_VI_EN_SHIFT                    (2U)
#define CRU_GATE_CON18_PCLK_VI_EN_MASK                     (0x1U << CRU_GATE_CON18_PCLK_VI_EN_SHIFT)                    /* 0x00000004 */
#define CRU_GATE_CON18_ACLK_VI_NIU_EN_SHIFT                (3U)
#define CRU_GATE_CON18_ACLK_VI_NIU_EN_MASK                 (0x1U << CRU_GATE_CON18_ACLK_VI_NIU_EN_SHIFT)                /* 0x00000008 */
#define CRU_GATE_CON18_HCLK_VI_NIU_EN_SHIFT                (4U)
#define CRU_GATE_CON18_HCLK_VI_NIU_EN_MASK                 (0x1U << CRU_GATE_CON18_HCLK_VI_NIU_EN_SHIFT)                /* 0x00000010 */
#define CRU_GATE_CON18_PCLK_VI_NIU_EN_SHIFT                (5U)
#define CRU_GATE_CON18_PCLK_VI_NIU_EN_MASK                 (0x1U << CRU_GATE_CON18_PCLK_VI_NIU_EN_SHIFT)                /* 0x00000020 */
#define CRU_GATE_CON18_ACLK_VICAP1_EN_SHIFT                (9U)
#define CRU_GATE_CON18_ACLK_VICAP1_EN_MASK                 (0x1U << CRU_GATE_CON18_ACLK_VICAP1_EN_SHIFT)                /* 0x00000200 */
#define CRU_GATE_CON18_HCLK_VICAP1_EN_SHIFT                (10U)
#define CRU_GATE_CON18_HCLK_VICAP1_EN_MASK                 (0x1U << CRU_GATE_CON18_HCLK_VICAP1_EN_SHIFT)                /* 0x00000400 */
#define CRU_GATE_CON18_DCLK_VICAP1_EN_SHIFT                (11U)
#define CRU_GATE_CON18_DCLK_VICAP1_EN_MASK                 (0x1U << CRU_GATE_CON18_DCLK_VICAP1_EN_SHIFT)                /* 0x00000800 */
/* GATE_CON19 */
#define CRU_GATE_CON19_OFFSET                              (0x34CU)
#define CRU_GATE_CON19_ACLK_ISP_EN_SHIFT                   (0U)
#define CRU_GATE_CON19_ACLK_ISP_EN_MASK                    (0x1U << CRU_GATE_CON19_ACLK_ISP_EN_SHIFT)                   /* 0x00000001 */
#define CRU_GATE_CON19_HCLK_ISP_EN_SHIFT                   (1U)
#define CRU_GATE_CON19_HCLK_ISP_EN_MASK                    (0x1U << CRU_GATE_CON19_HCLK_ISP_EN_SHIFT)                   /* 0x00000002 */
#define CRU_GATE_CON19_CLK_ISP_EN_SHIFT                    (2U)
#define CRU_GATE_CON19_CLK_ISP_EN_MASK                     (0x1U << CRU_GATE_CON19_CLK_ISP_EN_SHIFT)                    /* 0x00000004 */
#define CRU_GATE_CON19_PCLK_CSI2HOST1_EN_SHIFT             (4U)
#define CRU_GATE_CON19_PCLK_CSI2HOST1_EN_MASK              (0x1U << CRU_GATE_CON19_PCLK_CSI2HOST1_EN_SHIFT)             /* 0x00000010 */
#define CRU_GATE_CON19_CLK_CIF_OUT_EN_SHIFT                (8U)
#define CRU_GATE_CON19_CLK_CIF_OUT_EN_MASK                 (0x1U << CRU_GATE_CON19_CLK_CIF_OUT_EN_SHIFT)                /* 0x00000100 */
#define CRU_GATE_CON19_CLK_CAM0_OUT_EN_SHIFT               (9U)
#define CRU_GATE_CON19_CLK_CAM0_OUT_EN_MASK                (0x1U << CRU_GATE_CON19_CLK_CAM0_OUT_EN_SHIFT)               /* 0x00000200 */
#define CRU_GATE_CON19_CLK_CAM1_OUT_EN_SHIFT               (10U)
#define CRU_GATE_CON19_CLK_CAM1_OUT_EN_MASK                (0x1U << CRU_GATE_CON19_CLK_CAM1_OUT_EN_SHIFT)               /* 0x00000400 */
/* GATE_CON20 */
#define CRU_GATE_CON20_OFFSET                              (0x350U)
#define CRU_GATE_CON20_HCLK_VO_EN_SHIFT                    (1U)
#define CRU_GATE_CON20_HCLK_VO_EN_MASK                     (0x1U << CRU_GATE_CON20_HCLK_VO_EN_SHIFT)                    /* 0x00000002 */
#define CRU_GATE_CON20_PCLK_VO_EN_SHIFT                    (2U)
#define CRU_GATE_CON20_PCLK_VO_EN_MASK                     (0x1U << CRU_GATE_CON20_PCLK_VO_EN_SHIFT)                    /* 0x00000004 */
#define CRU_GATE_CON20_ACLK_VO_NIU_EN_SHIFT                (3U)
#define CRU_GATE_CON20_ACLK_VO_NIU_EN_MASK                 (0x1U << CRU_GATE_CON20_ACLK_VO_NIU_EN_SHIFT)                /* 0x00000008 */
#define CRU_GATE_CON20_HCLK_VO_NIU_EN_SHIFT                (4U)
#define CRU_GATE_CON20_HCLK_VO_NIU_EN_MASK                 (0x1U << CRU_GATE_CON20_HCLK_VO_NIU_EN_SHIFT)                /* 0x00000010 */
#define CRU_GATE_CON20_PCLK_VO_NIU_EN_SHIFT                (5U)
#define CRU_GATE_CON20_PCLK_VO_NIU_EN_MASK                 (0x1U << CRU_GATE_CON20_PCLK_VO_NIU_EN_SHIFT)                /* 0x00000020 */
#define CRU_GATE_CON20_ACLK_VOP_PRE_EN_SHIFT               (6U)
#define CRU_GATE_CON20_ACLK_VOP_PRE_EN_MASK                (0x1U << CRU_GATE_CON20_ACLK_VOP_PRE_EN_SHIFT)               /* 0x00000040 */
#define CRU_GATE_CON20_ACLK_VOP_NIU_EN_SHIFT               (7U)
#define CRU_GATE_CON20_ACLK_VOP_NIU_EN_MASK                (0x1U << CRU_GATE_CON20_ACLK_VOP_NIU_EN_SHIFT)               /* 0x00000080 */
#define CRU_GATE_CON20_ACLK_VOP_EN_SHIFT                   (8U)
#define CRU_GATE_CON20_ACLK_VOP_EN_MASK                    (0x1U << CRU_GATE_CON20_ACLK_VOP_EN_SHIFT)                   /* 0x00000100 */
#define CRU_GATE_CON20_HCLK_VOP_EN_SHIFT                   (9U)
#define CRU_GATE_CON20_HCLK_VOP_EN_MASK                    (0x1U << CRU_GATE_CON20_HCLK_VOP_EN_SHIFT)                   /* 0x00000200 */
#define CRU_GATE_CON20_DCLK0_VOP_EN_SHIFT                  (10U)
#define CRU_GATE_CON20_DCLK0_VOP_EN_MASK                   (0x1U << CRU_GATE_CON20_DCLK0_VOP_EN_SHIFT)                  /* 0x00000400 */
#define CRU_GATE_CON20_DCLK1_VOP_EN_SHIFT                  (11U)
#define CRU_GATE_CON20_DCLK1_VOP_EN_MASK                   (0x1U << CRU_GATE_CON20_DCLK1_VOP_EN_SHIFT)                  /* 0x00000800 */
#define CRU_GATE_CON20_DCLK2_VOP_EN_SHIFT                  (12U)
#define CRU_GATE_CON20_DCLK2_VOP_EN_MASK                   (0x1U << CRU_GATE_CON20_DCLK2_VOP_EN_SHIFT)                  /* 0x00001000 */
#define CRU_GATE_CON20_CLK_VOP_PWM_EN_SHIFT                (13U)
#define CRU_GATE_CON20_CLK_VOP_PWM_EN_MASK                 (0x1U << CRU_GATE_CON20_CLK_VOP_PWM_EN_SHIFT)                /* 0x00002000 */
/* GATE_CON21 */
#define CRU_GATE_CON21_OFFSET                              (0x354U)
#define CRU_GATE_CON21_ACLK_HDCP_EN_SHIFT                  (0U)
#define CRU_GATE_CON21_ACLK_HDCP_EN_MASK                   (0x1U << CRU_GATE_CON21_ACLK_HDCP_EN_SHIFT)                  /* 0x00000001 */
#define CRU_GATE_CON21_HCLK_HDCP_EN_SHIFT                  (1U)
#define CRU_GATE_CON21_HCLK_HDCP_EN_MASK                   (0x1U << CRU_GATE_CON21_HCLK_HDCP_EN_SHIFT)                  /* 0x00000002 */
#define CRU_GATE_CON21_PCLK_HDCP_EN_SHIFT                  (2U)
#define CRU_GATE_CON21_PCLK_HDCP_EN_MASK                   (0x1U << CRU_GATE_CON21_PCLK_HDCP_EN_SHIFT)                  /* 0x00000004 */
#define CRU_GATE_CON21_PCLK_HDMI_HOST_EN_SHIFT             (3U)
#define CRU_GATE_CON21_PCLK_HDMI_HOST_EN_MASK              (0x1U << CRU_GATE_CON21_PCLK_HDMI_HOST_EN_SHIFT)             /* 0x00000008 */
#define CRU_GATE_CON21_CLK_HDMI_SFR_EN_SHIFT               (4U)
#define CRU_GATE_CON21_CLK_HDMI_SFR_EN_MASK                (0x1U << CRU_GATE_CON21_CLK_HDMI_SFR_EN_SHIFT)               /* 0x00000010 */
#define CRU_GATE_CON21_CLK_HDMI_CEC_EN_SHIFT               (5U)
#define CRU_GATE_CON21_CLK_HDMI_CEC_EN_MASK                (0x1U << CRU_GATE_CON21_CLK_HDMI_CEC_EN_SHIFT)               /* 0x00000020 */
#define CRU_GATE_CON21_PCLK_DSITX_0_EN_SHIFT               (6U)
#define CRU_GATE_CON21_PCLK_DSITX_0_EN_MASK                (0x1U << CRU_GATE_CON21_PCLK_DSITX_0_EN_SHIFT)               /* 0x00000040 */
#define CRU_GATE_CON21_PCLK_DSITX_1_EN_SHIFT               (7U)
#define CRU_GATE_CON21_PCLK_DSITX_1_EN_MASK                (0x1U << CRU_GATE_CON21_PCLK_DSITX_1_EN_SHIFT)               /* 0x00000080 */
#define CRU_GATE_CON21_PCLK_EDP_CTRL_EN_SHIFT              (8U)
#define CRU_GATE_CON21_PCLK_EDP_CTRL_EN_MASK               (0x1U << CRU_GATE_CON21_PCLK_EDP_CTRL_EN_SHIFT)              /* 0x00000100 */
#define CRU_GATE_CON21_CLK_EDP_200M_EN_SHIFT               (9U)
#define CRU_GATE_CON21_CLK_EDP_200M_EN_MASK                (0x1U << CRU_GATE_CON21_CLK_EDP_200M_EN_SHIFT)               /* 0x00000200 */
/* GATE_CON22 */
#define CRU_GATE_CON22_OFFSET                              (0x358U)
#define CRU_GATE_CON22_ACLK_VPU_PRE_EN_SHIFT               (0U)
#define CRU_GATE_CON22_ACLK_VPU_PRE_EN_MASK                (0x1U << CRU_GATE_CON22_ACLK_VPU_PRE_EN_SHIFT)               /* 0x00000001 */
#define CRU_GATE_CON22_HCLK_VPU_PRE_EN_SHIFT               (1U)
#define CRU_GATE_CON22_HCLK_VPU_PRE_EN_MASK                (0x1U << CRU_GATE_CON22_HCLK_VPU_PRE_EN_SHIFT)               /* 0x00000002 */
#define CRU_GATE_CON22_ACLK_VPU_NIU_EN_SHIFT               (2U)
#define CRU_GATE_CON22_ACLK_VPU_NIU_EN_MASK                (0x1U << CRU_GATE_CON22_ACLK_VPU_NIU_EN_SHIFT)               /* 0x00000004 */
#define CRU_GATE_CON22_HCLK_VPU_NIU_EN_SHIFT               (3U)
#define CRU_GATE_CON22_HCLK_VPU_NIU_EN_MASK                (0x1U << CRU_GATE_CON22_HCLK_VPU_NIU_EN_SHIFT)               /* 0x00000008 */
#define CRU_GATE_CON22_ACLK_VPU_EN_SHIFT                   (4U)
#define CRU_GATE_CON22_ACLK_VPU_EN_MASK                    (0x1U << CRU_GATE_CON22_ACLK_VPU_EN_SHIFT)                   /* 0x00000010 */
#define CRU_GATE_CON22_HCLK_VPU_EN_SHIFT                   (5U)
#define CRU_GATE_CON22_HCLK_VPU_EN_MASK                    (0x1U << CRU_GATE_CON22_HCLK_VPU_EN_SHIFT)                   /* 0x00000020 */
#define CRU_GATE_CON22_PCLK_RGA_PRE_EN_SHIFT               (12U)
#define CRU_GATE_CON22_PCLK_RGA_PRE_EN_MASK                (0x1U << CRU_GATE_CON22_PCLK_RGA_PRE_EN_SHIFT)               /* 0x00001000 */
#define CRU_GATE_CON22_PCLK_RGA_NIU_EN_SHIFT               (13U)
#define CRU_GATE_CON22_PCLK_RGA_NIU_EN_MASK                (0x1U << CRU_GATE_CON22_PCLK_RGA_NIU_EN_SHIFT)               /* 0x00002000 */
#define CRU_GATE_CON22_PCLK_EINK_EN_SHIFT                  (14U)
#define CRU_GATE_CON22_PCLK_EINK_EN_MASK                   (0x1U << CRU_GATE_CON22_PCLK_EINK_EN_SHIFT)                  /* 0x00004000 */
#define CRU_GATE_CON22_HCLK_EINK_EN_SHIFT                  (15U)
#define CRU_GATE_CON22_HCLK_EINK_EN_MASK                   (0x1U << CRU_GATE_CON22_HCLK_EINK_EN_SHIFT)                  /* 0x00008000 */
/* GATE_CON23 */
#define CRU_GATE_CON23_OFFSET                              (0x35CU)
#define CRU_GATE_CON23_ACLK_RGA_PRE_EN_SHIFT               (0U)
#define CRU_GATE_CON23_ACLK_RGA_PRE_EN_MASK                (0x1U << CRU_GATE_CON23_ACLK_RGA_PRE_EN_SHIFT)               /* 0x00000001 */
#define CRU_GATE_CON23_HCLK_RGA_PRE_EN_SHIFT               (1U)
#define CRU_GATE_CON23_HCLK_RGA_PRE_EN_MASK                (0x1U << CRU_GATE_CON23_HCLK_RGA_PRE_EN_SHIFT)               /* 0x00000002 */
#define CRU_GATE_CON23_ACLK_RGA_NIU_EN_SHIFT               (2U)
#define CRU_GATE_CON23_ACLK_RGA_NIU_EN_MASK                (0x1U << CRU_GATE_CON23_ACLK_RGA_NIU_EN_SHIFT)               /* 0x00000004 */
#define CRU_GATE_CON23_HCLK_RGA_NIU_EN_SHIFT               (3U)
#define CRU_GATE_CON23_HCLK_RGA_NIU_EN_MASK                (0x1U << CRU_GATE_CON23_HCLK_RGA_NIU_EN_SHIFT)               /* 0x00000008 */
#define CRU_GATE_CON23_ACLK_RGA_EN_SHIFT                   (4U)
#define CRU_GATE_CON23_ACLK_RGA_EN_MASK                    (0x1U << CRU_GATE_CON23_ACLK_RGA_EN_SHIFT)                   /* 0x00000010 */
#define CRU_GATE_CON23_HCLK_RGA_EN_SHIFT                   (5U)
#define CRU_GATE_CON23_HCLK_RGA_EN_MASK                    (0x1U << CRU_GATE_CON23_HCLK_RGA_EN_SHIFT)                   /* 0x00000020 */
#define CRU_GATE_CON23_CLK_RGA_CORE_EN_SHIFT               (6U)
#define CRU_GATE_CON23_CLK_RGA_CORE_EN_MASK                (0x1U << CRU_GATE_CON23_CLK_RGA_CORE_EN_SHIFT)               /* 0x00000040 */
#define CRU_GATE_CON23_ACLK_IEP_EN_SHIFT                   (7U)
#define CRU_GATE_CON23_ACLK_IEP_EN_MASK                    (0x1U << CRU_GATE_CON23_ACLK_IEP_EN_SHIFT)                   /* 0x00000080 */
#define CRU_GATE_CON23_HCLK_IEP_EN_SHIFT                   (8U)
#define CRU_GATE_CON23_HCLK_IEP_EN_MASK                    (0x1U << CRU_GATE_CON23_HCLK_IEP_EN_SHIFT)                   /* 0x00000100 */
#define CRU_GATE_CON23_CLK_IEP_CORE_EN_SHIFT               (9U)
#define CRU_GATE_CON23_CLK_IEP_CORE_EN_MASK                (0x1U << CRU_GATE_CON23_CLK_IEP_CORE_EN_SHIFT)               /* 0x00000200 */
#define CRU_GATE_CON23_HCLK_EBC_EN_SHIFT                   (10U)
#define CRU_GATE_CON23_HCLK_EBC_EN_MASK                    (0x1U << CRU_GATE_CON23_HCLK_EBC_EN_SHIFT)                   /* 0x00000400 */
#define CRU_GATE_CON23_DCLK_EBC_EN_SHIFT                   (11U)
#define CRU_GATE_CON23_DCLK_EBC_EN_MASK                    (0x1U << CRU_GATE_CON23_DCLK_EBC_EN_SHIFT)                   /* 0x00000800 */
#define CRU_GATE_CON23_ACLK_JDEC_EN_SHIFT                  (12U)
#define CRU_GATE_CON23_ACLK_JDEC_EN_MASK                   (0x1U << CRU_GATE_CON23_ACLK_JDEC_EN_SHIFT)                  /* 0x00001000 */
#define CRU_GATE_CON23_HCLK_JDEC_EN_SHIFT                  (13U)
#define CRU_GATE_CON23_HCLK_JDEC_EN_MASK                   (0x1U << CRU_GATE_CON23_HCLK_JDEC_EN_SHIFT)                  /* 0x00002000 */
#define CRU_GATE_CON23_ACLK_JENC_EN_SHIFT                  (14U)
#define CRU_GATE_CON23_ACLK_JENC_EN_MASK                   (0x1U << CRU_GATE_CON23_ACLK_JENC_EN_SHIFT)                  /* 0x00004000 */
#define CRU_GATE_CON23_HCLK_JENC_EN_SHIFT                  (15U)
#define CRU_GATE_CON23_HCLK_JENC_EN_MASK                   (0x1U << CRU_GATE_CON23_HCLK_JENC_EN_SHIFT)                  /* 0x00008000 */
/* GATE_CON24 */
#define CRU_GATE_CON24_OFFSET                              (0x360U)
#define CRU_GATE_CON24_ACLK_RKVENC_PRE_EN_SHIFT            (0U)
#define CRU_GATE_CON24_ACLK_RKVENC_PRE_EN_MASK             (0x1U << CRU_GATE_CON24_ACLK_RKVENC_PRE_EN_SHIFT)            /* 0x00000001 */
#define CRU_GATE_CON24_HCLK_RKVENC_PRE_EN_SHIFT            (1U)
#define CRU_GATE_CON24_HCLK_RKVENC_PRE_EN_MASK             (0x1U << CRU_GATE_CON24_HCLK_RKVENC_PRE_EN_SHIFT)            /* 0x00000002 */
#define CRU_GATE_CON24_ACLK_RKVENC_NIU_EN_SHIFT            (3U)
#define CRU_GATE_CON24_ACLK_RKVENC_NIU_EN_MASK             (0x1U << CRU_GATE_CON24_ACLK_RKVENC_NIU_EN_SHIFT)            /* 0x00000008 */
#define CRU_GATE_CON24_HCLK_RKVENC_NIU_EN_SHIFT            (4U)
#define CRU_GATE_CON24_HCLK_RKVENC_NIU_EN_MASK             (0x1U << CRU_GATE_CON24_HCLK_RKVENC_NIU_EN_SHIFT)            /* 0x00000010 */
#define CRU_GATE_CON24_ACLK_RKVENC_EN_SHIFT                (6U)
#define CRU_GATE_CON24_ACLK_RKVENC_EN_MASK                 (0x1U << CRU_GATE_CON24_ACLK_RKVENC_EN_SHIFT)                /* 0x00000040 */
#define CRU_GATE_CON24_HCLK_RKVENC_EN_SHIFT                (7U)
#define CRU_GATE_CON24_HCLK_RKVENC_EN_MASK                 (0x1U << CRU_GATE_CON24_HCLK_RKVENC_EN_SHIFT)                /* 0x00000080 */
#define CRU_GATE_CON24_CLK_RKVENC_CORE_EN_SHIFT            (8U)
#define CRU_GATE_CON24_CLK_RKVENC_CORE_EN_MASK             (0x1U << CRU_GATE_CON24_CLK_RKVENC_CORE_EN_SHIFT)            /* 0x00000100 */
/* GATE_CON25 */
#define CRU_GATE_CON25_OFFSET                              (0x364U)
#define CRU_GATE_CON25_ACLK_RKVDEC_PRE_EN_SHIFT            (0U)
#define CRU_GATE_CON25_ACLK_RKVDEC_PRE_EN_MASK             (0x1U << CRU_GATE_CON25_ACLK_RKVDEC_PRE_EN_SHIFT)            /* 0x00000001 */
#define CRU_GATE_CON25_HCLK_RKVDEC_PRE_EN_SHIFT            (1U)
#define CRU_GATE_CON25_HCLK_RKVDEC_PRE_EN_MASK             (0x1U << CRU_GATE_CON25_HCLK_RKVDEC_PRE_EN_SHIFT)            /* 0x00000002 */
#define CRU_GATE_CON25_ACLK_RKVDEC_NIU_EN_SHIFT            (2U)
#define CRU_GATE_CON25_ACLK_RKVDEC_NIU_EN_MASK             (0x1U << CRU_GATE_CON25_ACLK_RKVDEC_NIU_EN_SHIFT)            /* 0x00000004 */
#define CRU_GATE_CON25_HCLK_RKVDEC_NIU_EN_SHIFT            (3U)
#define CRU_GATE_CON25_HCLK_RKVDEC_NIU_EN_MASK             (0x1U << CRU_GATE_CON25_HCLK_RKVDEC_NIU_EN_SHIFT)            /* 0x00000008 */
#define CRU_GATE_CON25_ACLK_RKVDEC_EN_SHIFT                (4U)
#define CRU_GATE_CON25_ACLK_RKVDEC_EN_MASK                 (0x1U << CRU_GATE_CON25_ACLK_RKVDEC_EN_SHIFT)                /* 0x00000010 */
#define CRU_GATE_CON25_HCLK_RKVDEC_EN_SHIFT                (5U)
#define CRU_GATE_CON25_HCLK_RKVDEC_EN_MASK                 (0x1U << CRU_GATE_CON25_HCLK_RKVDEC_EN_SHIFT)                /* 0x00000020 */
#define CRU_GATE_CON25_CLK_RKVDEC_CA_EN_SHIFT              (6U)
#define CRU_GATE_CON25_CLK_RKVDEC_CA_EN_MASK               (0x1U << CRU_GATE_CON25_CLK_RKVDEC_CA_EN_SHIFT)              /* 0x00000040 */
#define CRU_GATE_CON25_CLK_RKVDEC_CORE_EN_SHIFT            (7U)
#define CRU_GATE_CON25_CLK_RKVDEC_CORE_EN_MASK             (0x1U << CRU_GATE_CON25_CLK_RKVDEC_CORE_EN_SHIFT)            /* 0x00000080 */
#define CRU_GATE_CON25_CLK_RKVDEC_HEVC_CA_EN_SHIFT         (8U)
#define CRU_GATE_CON25_CLK_RKVDEC_HEVC_CA_EN_MASK          (0x1U << CRU_GATE_CON25_CLK_RKVDEC_HEVC_CA_EN_SHIFT)         /* 0x00000100 */
/* GATE_CON26 */
#define CRU_GATE_CON26_OFFSET                              (0x368U)
#define CRU_GATE_CON26_ACLK_BUS_EN_SHIFT                   (0U)
#define CRU_GATE_CON26_ACLK_BUS_EN_MASK                    (0x1U << CRU_GATE_CON26_ACLK_BUS_EN_SHIFT)                   /* 0x00000001 */
#define CRU_GATE_CON26_PCLK_BUS_EN_SHIFT                   (1U)
#define CRU_GATE_CON26_PCLK_BUS_EN_MASK                    (0x1U << CRU_GATE_CON26_PCLK_BUS_EN_SHIFT)                   /* 0x00000002 */
#define CRU_GATE_CON26_ACLK_BUS_NIU_EN_SHIFT               (2U)
#define CRU_GATE_CON26_ACLK_BUS_NIU_EN_MASK                (0x1U << CRU_GATE_CON26_ACLK_BUS_NIU_EN_SHIFT)               /* 0x00000004 */
#define CRU_GATE_CON26_PCLK_BUS_NIU_EN_SHIFT               (3U)
#define CRU_GATE_CON26_PCLK_BUS_NIU_EN_MASK                (0x1U << CRU_GATE_CON26_PCLK_BUS_NIU_EN_SHIFT)               /* 0x00000008 */
#define CRU_GATE_CON26_PCLK_TSADC_EN_SHIFT                 (4U)
#define CRU_GATE_CON26_PCLK_TSADC_EN_MASK                  (0x1U << CRU_GATE_CON26_PCLK_TSADC_EN_SHIFT)                 /* 0x00000010 */
#define CRU_GATE_CON26_CLK_TSADC_TSEN_EN_SHIFT             (5U)
#define CRU_GATE_CON26_CLK_TSADC_TSEN_EN_MASK              (0x1U << CRU_GATE_CON26_CLK_TSADC_TSEN_EN_SHIFT)             /* 0x00000020 */
#define CRU_GATE_CON26_CLK_TSADC_EN_SHIFT                  (6U)
#define CRU_GATE_CON26_CLK_TSADC_EN_MASK                   (0x1U << CRU_GATE_CON26_CLK_TSADC_EN_SHIFT)                  /* 0x00000040 */
#define CRU_GATE_CON26_PCLK_SARADC_EN_SHIFT                (7U)
#define CRU_GATE_CON26_PCLK_SARADC_EN_MASK                 (0x1U << CRU_GATE_CON26_PCLK_SARADC_EN_SHIFT)                /* 0x00000080 */
#define CRU_GATE_CON26_CLK_SARADC_EN_SHIFT                 (8U)
#define CRU_GATE_CON26_CLK_SARADC_EN_MASK                  (0x1U << CRU_GATE_CON26_CLK_SARADC_EN_SHIFT)                 /* 0x00000100 */
#define CRU_GATE_CON26_PCLK_OTPC_NS_EN_SHIFT               (9U)
#define CRU_GATE_CON26_PCLK_OTPC_NS_EN_MASK                (0x1U << CRU_GATE_CON26_PCLK_OTPC_NS_EN_SHIFT)               /* 0x00000200 */
#define CRU_GATE_CON26_CLK_OTPC_NS_SBPI_EN_SHIFT           (10U)
#define CRU_GATE_CON26_CLK_OTPC_NS_SBPI_EN_MASK            (0x1U << CRU_GATE_CON26_CLK_OTPC_NS_SBPI_EN_SHIFT)           /* 0x00000400 */
#define CRU_GATE_CON26_CLK_OTPC_NS_USR_EN_SHIFT            (11U)
#define CRU_GATE_CON26_CLK_OTPC_NS_USR_EN_MASK             (0x1U << CRU_GATE_CON26_CLK_OTPC_NS_USR_EN_SHIFT)            /* 0x00000800 */
#define CRU_GATE_CON26_PCLK_SCR_EN_SHIFT                   (12U)
#define CRU_GATE_CON26_PCLK_SCR_EN_MASK                    (0x1U << CRU_GATE_CON26_PCLK_SCR_EN_SHIFT)                   /* 0x00001000 */
#define CRU_GATE_CON26_PCLK_WDT_NS_EN_SHIFT                (13U)
#define CRU_GATE_CON26_PCLK_WDT_NS_EN_MASK                 (0x1U << CRU_GATE_CON26_PCLK_WDT_NS_EN_SHIFT)                /* 0x00002000 */
#define CRU_GATE_CON26_TCLK_WDT_NS_EN_SHIFT                (14U)
#define CRU_GATE_CON26_TCLK_WDT_NS_EN_MASK                 (0x1U << CRU_GATE_CON26_TCLK_WDT_NS_EN_SHIFT)                /* 0x00004000 */
/* GATE_CON27 */
#define CRU_GATE_CON27_OFFSET                              (0x36CU)
#define CRU_GATE_CON27_PCLK_GRF_EN_SHIFT                   (0U)
#define CRU_GATE_CON27_PCLK_GRF_EN_MASK                    (0x1U << CRU_GATE_CON27_PCLK_GRF_EN_SHIFT)                   /* 0x00000001 */
#define CRU_GATE_CON27_PCLK_GRF_VCCIO12_EN_SHIFT           (1U)
#define CRU_GATE_CON27_PCLK_GRF_VCCIO12_EN_MASK            (0x1U << CRU_GATE_CON27_PCLK_GRF_VCCIO12_EN_SHIFT)           /* 0x00000002 */
#define CRU_GATE_CON27_PCLK_GRF_VCCIO34_EN_SHIFT           (2U)
#define CRU_GATE_CON27_PCLK_GRF_VCCIO34_EN_MASK            (0x1U << CRU_GATE_CON27_PCLK_GRF_VCCIO34_EN_SHIFT)           /* 0x00000004 */
#define CRU_GATE_CON27_PCLK_GRF_VCCIO567_EN_SHIFT          (3U)
#define CRU_GATE_CON27_PCLK_GRF_VCCIO567_EN_MASK           (0x1U << CRU_GATE_CON27_PCLK_GRF_VCCIO567_EN_SHIFT)          /* 0x00000008 */
#define CRU_GATE_CON27_PCLK_DFT2APB_EN_SHIFT               (4U)
#define CRU_GATE_CON27_PCLK_DFT2APB_EN_MASK                (0x1U << CRU_GATE_CON27_PCLK_DFT2APB_EN_SHIFT)               /* 0x00000010 */
#define CRU_GATE_CON27_PCLK_CAN0_EN_SHIFT                  (5U)
#define CRU_GATE_CON27_PCLK_CAN0_EN_MASK                   (0x1U << CRU_GATE_CON27_PCLK_CAN0_EN_SHIFT)                  /* 0x00000020 */
#define CRU_GATE_CON27_CLK_CAN0_EN_SHIFT                   (6U)
#define CRU_GATE_CON27_CLK_CAN0_EN_MASK                    (0x1U << CRU_GATE_CON27_CLK_CAN0_EN_SHIFT)                   /* 0x00000040 */
#define CRU_GATE_CON27_PCLK_CAN1_EN_SHIFT                  (7U)
#define CRU_GATE_CON27_PCLK_CAN1_EN_MASK                   (0x1U << CRU_GATE_CON27_PCLK_CAN1_EN_SHIFT)                  /* 0x00000080 */
#define CRU_GATE_CON27_CLK_CAN1_EN_SHIFT                   (8U)
#define CRU_GATE_CON27_CLK_CAN1_EN_MASK                    (0x1U << CRU_GATE_CON27_CLK_CAN1_EN_SHIFT)                   /* 0x00000100 */
#define CRU_GATE_CON27_PCLK_CAN2_EN_SHIFT                  (9U)
#define CRU_GATE_CON27_PCLK_CAN2_EN_MASK                   (0x1U << CRU_GATE_CON27_PCLK_CAN2_EN_SHIFT)                  /* 0x00000200 */
#define CRU_GATE_CON27_CLK_CAN2_EN_SHIFT                   (10U)
#define CRU_GATE_CON27_CLK_CAN2_EN_MASK                    (0x1U << CRU_GATE_CON27_CLK_CAN2_EN_SHIFT)                   /* 0x00000400 */
#define CRU_GATE_CON27_PCLK_UART1_EN_SHIFT                 (12U)
#define CRU_GATE_CON27_PCLK_UART1_EN_MASK                  (0x1U << CRU_GATE_CON27_PCLK_UART1_EN_SHIFT)                 /* 0x00001000 */
#define CRU_GATE_CON27_CLK_UART1_EN_SHIFT                  (13U)
#define CRU_GATE_CON27_CLK_UART1_EN_MASK                   (0x1U << CRU_GATE_CON27_CLK_UART1_EN_SHIFT)                  /* 0x00002000 */
#define CRU_GATE_CON27_CLK_UART1_FRAC_EN_SHIFT             (14U)
#define CRU_GATE_CON27_CLK_UART1_FRAC_EN_MASK              (0x1U << CRU_GATE_CON27_CLK_UART1_FRAC_EN_SHIFT)             /* 0x00004000 */
#define CRU_GATE_CON27_SCLK_UART1_EN_SHIFT                 (15U)
#define CRU_GATE_CON27_SCLK_UART1_EN_MASK                  (0x1U << CRU_GATE_CON27_SCLK_UART1_EN_SHIFT)                 /* 0x00008000 */
/* GATE_CON28 */
#define CRU_GATE_CON28_OFFSET                              (0x370U)
#define CRU_GATE_CON28_PCLK_UART2_EN_SHIFT                 (0U)
#define CRU_GATE_CON28_PCLK_UART2_EN_MASK                  (0x1U << CRU_GATE_CON28_PCLK_UART2_EN_SHIFT)                 /* 0x00000001 */
#define CRU_GATE_CON28_CLK_UART2_EN_SHIFT                  (1U)
#define CRU_GATE_CON28_CLK_UART2_EN_MASK                   (0x1U << CRU_GATE_CON28_CLK_UART2_EN_SHIFT)                  /* 0x00000002 */
#define CRU_GATE_CON28_CLK_UART2_FRAC_EN_SHIFT             (2U)
#define CRU_GATE_CON28_CLK_UART2_FRAC_EN_MASK              (0x1U << CRU_GATE_CON28_CLK_UART2_FRAC_EN_SHIFT)             /* 0x00000004 */
#define CRU_GATE_CON28_SCLK_UART2_EN_SHIFT                 (3U)
#define CRU_GATE_CON28_SCLK_UART2_EN_MASK                  (0x1U << CRU_GATE_CON28_SCLK_UART2_EN_SHIFT)                 /* 0x00000008 */
#define CRU_GATE_CON28_PCLK_UART3_EN_SHIFT                 (4U)
#define CRU_GATE_CON28_PCLK_UART3_EN_MASK                  (0x1U << CRU_GATE_CON28_PCLK_UART3_EN_SHIFT)                 /* 0x00000010 */
#define CRU_GATE_CON28_CLK_UART3_EN_SHIFT                  (5U)
#define CRU_GATE_CON28_CLK_UART3_EN_MASK                   (0x1U << CRU_GATE_CON28_CLK_UART3_EN_SHIFT)                  /* 0x00000020 */
#define CRU_GATE_CON28_CLK_UART3_FRAC_EN_SHIFT             (6U)
#define CRU_GATE_CON28_CLK_UART3_FRAC_EN_MASK              (0x1U << CRU_GATE_CON28_CLK_UART3_FRAC_EN_SHIFT)             /* 0x00000040 */
#define CRU_GATE_CON28_SCLK_UART3_EN_SHIFT                 (7U)
#define CRU_GATE_CON28_SCLK_UART3_EN_MASK                  (0x1U << CRU_GATE_CON28_SCLK_UART3_EN_SHIFT)                 /* 0x00000080 */
#define CRU_GATE_CON28_PCLK_UART4_EN_SHIFT                 (8U)
#define CRU_GATE_CON28_PCLK_UART4_EN_MASK                  (0x1U << CRU_GATE_CON28_PCLK_UART4_EN_SHIFT)                 /* 0x00000100 */
#define CRU_GATE_CON28_CLK_UART4_EN_SHIFT                  (9U)
#define CRU_GATE_CON28_CLK_UART4_EN_MASK                   (0x1U << CRU_GATE_CON28_CLK_UART4_EN_SHIFT)                  /* 0x00000200 */
#define CRU_GATE_CON28_CLK_UART4_FRAC_EN_SHIFT             (10U)
#define CRU_GATE_CON28_CLK_UART4_FRAC_EN_MASK              (0x1U << CRU_GATE_CON28_CLK_UART4_FRAC_EN_SHIFT)             /* 0x00000400 */
#define CRU_GATE_CON28_SCLK_UART4_EN_SHIFT                 (11U)
#define CRU_GATE_CON28_SCLK_UART4_EN_MASK                  (0x1U << CRU_GATE_CON28_SCLK_UART4_EN_SHIFT)                 /* 0x00000800 */
#define CRU_GATE_CON28_PCLK_UART5_EN_SHIFT                 (12U)
#define CRU_GATE_CON28_PCLK_UART5_EN_MASK                  (0x1U << CRU_GATE_CON28_PCLK_UART5_EN_SHIFT)                 /* 0x00001000 */
#define CRU_GATE_CON28_CLK_UART5_EN_SHIFT                  (13U)
#define CRU_GATE_CON28_CLK_UART5_EN_MASK                   (0x1U << CRU_GATE_CON28_CLK_UART5_EN_SHIFT)                  /* 0x00002000 */
#define CRU_GATE_CON28_CLK_UART5_FRAC_EN_SHIFT             (14U)
#define CRU_GATE_CON28_CLK_UART5_FRAC_EN_MASK              (0x1U << CRU_GATE_CON28_CLK_UART5_FRAC_EN_SHIFT)             /* 0x00004000 */
#define CRU_GATE_CON28_SCLK_UART5_EN_SHIFT                 (15U)
#define CRU_GATE_CON28_SCLK_UART5_EN_MASK                  (0x1U << CRU_GATE_CON28_SCLK_UART5_EN_SHIFT)                 /* 0x00008000 */
/* GATE_CON29 */
#define CRU_GATE_CON29_OFFSET                              (0x374U)
#define CRU_GATE_CON29_PCLK_UART6_EN_SHIFT                 (0U)
#define CRU_GATE_CON29_PCLK_UART6_EN_MASK                  (0x1U << CRU_GATE_CON29_PCLK_UART6_EN_SHIFT)                 /* 0x00000001 */
#define CRU_GATE_CON29_CLK_UART6_EN_SHIFT                  (1U)
#define CRU_GATE_CON29_CLK_UART6_EN_MASK                   (0x1U << CRU_GATE_CON29_CLK_UART6_EN_SHIFT)                  /* 0x00000002 */
#define CRU_GATE_CON29_CLK_UART6_FRAC_EN_SHIFT             (2U)
#define CRU_GATE_CON29_CLK_UART6_FRAC_EN_MASK              (0x1U << CRU_GATE_CON29_CLK_UART6_FRAC_EN_SHIFT)             /* 0x00000004 */
#define CRU_GATE_CON29_SCLK_UART6_EN_SHIFT                 (3U)
#define CRU_GATE_CON29_SCLK_UART6_EN_MASK                  (0x1U << CRU_GATE_CON29_SCLK_UART6_EN_SHIFT)                 /* 0x00000008 */
#define CRU_GATE_CON29_PCLK_UART7_EN_SHIFT                 (4U)
#define CRU_GATE_CON29_PCLK_UART7_EN_MASK                  (0x1U << CRU_GATE_CON29_PCLK_UART7_EN_SHIFT)                 /* 0x00000010 */
#define CRU_GATE_CON29_CLK_UART7_EN_SHIFT                  (5U)
#define CRU_GATE_CON29_CLK_UART7_EN_MASK                   (0x1U << CRU_GATE_CON29_CLK_UART7_EN_SHIFT)                  /* 0x00000020 */
#define CRU_GATE_CON29_CLK_UART7_FRAC_EN_SHIFT             (6U)
#define CRU_GATE_CON29_CLK_UART7_FRAC_EN_MASK              (0x1U << CRU_GATE_CON29_CLK_UART7_FRAC_EN_SHIFT)             /* 0x00000040 */
#define CRU_GATE_CON29_SCLK_UART7_EN_SHIFT                 (7U)
#define CRU_GATE_CON29_SCLK_UART7_EN_MASK                  (0x1U << CRU_GATE_CON29_SCLK_UART7_EN_SHIFT)                 /* 0x00000080 */
#define CRU_GATE_CON29_PCLK_UART8_EN_SHIFT                 (8U)
#define CRU_GATE_CON29_PCLK_UART8_EN_MASK                  (0x1U << CRU_GATE_CON29_PCLK_UART8_EN_SHIFT)                 /* 0x00000100 */
#define CRU_GATE_CON29_CLK_UART8_EN_SHIFT                  (9U)
#define CRU_GATE_CON29_CLK_UART8_EN_MASK                   (0x1U << CRU_GATE_CON29_CLK_UART8_EN_SHIFT)                  /* 0x00000200 */
#define CRU_GATE_CON29_CLK_UART8_FRAC_EN_SHIFT             (10U)
#define CRU_GATE_CON29_CLK_UART8_FRAC_EN_MASK              (0x1U << CRU_GATE_CON29_CLK_UART8_FRAC_EN_SHIFT)             /* 0x00000400 */
#define CRU_GATE_CON29_SCLK_UART8_EN_SHIFT                 (11U)
#define CRU_GATE_CON29_SCLK_UART8_EN_MASK                  (0x1U << CRU_GATE_CON29_SCLK_UART8_EN_SHIFT)                 /* 0x00000800 */
#define CRU_GATE_CON29_PCLK_UART9_EN_SHIFT                 (12U)
#define CRU_GATE_CON29_PCLK_UART9_EN_MASK                  (0x1U << CRU_GATE_CON29_PCLK_UART9_EN_SHIFT)                 /* 0x00001000 */
#define CRU_GATE_CON29_CLK_UART9_EN_SHIFT                  (13U)
#define CRU_GATE_CON29_CLK_UART9_EN_MASK                   (0x1U << CRU_GATE_CON29_CLK_UART9_EN_SHIFT)                  /* 0x00002000 */
#define CRU_GATE_CON29_CLK_UART9_FRAC_EN_SHIFT             (14U)
#define CRU_GATE_CON29_CLK_UART9_FRAC_EN_MASK              (0x1U << CRU_GATE_CON29_CLK_UART9_FRAC_EN_SHIFT)             /* 0x00004000 */
#define CRU_GATE_CON29_SCLK_UART9_EN_SHIFT                 (15U)
#define CRU_GATE_CON29_SCLK_UART9_EN_MASK                  (0x1U << CRU_GATE_CON29_SCLK_UART9_EN_SHIFT)                 /* 0x00008000 */
/* GATE_CON30 */
#define CRU_GATE_CON30_OFFSET                              (0x378U)
#define CRU_GATE_CON30_PCLK_I2C1_EN_SHIFT                  (0U)
#define CRU_GATE_CON30_PCLK_I2C1_EN_MASK                   (0x1U << CRU_GATE_CON30_PCLK_I2C1_EN_SHIFT)                  /* 0x00000001 */
#define CRU_GATE_CON30_CLK_I2C1_EN_SHIFT                   (1U)
#define CRU_GATE_CON30_CLK_I2C1_EN_MASK                    (0x1U << CRU_GATE_CON30_CLK_I2C1_EN_SHIFT)                   /* 0x00000002 */
#define CRU_GATE_CON30_PCLK_I2C2_EN_SHIFT                  (2U)
#define CRU_GATE_CON30_PCLK_I2C2_EN_MASK                   (0x1U << CRU_GATE_CON30_PCLK_I2C2_EN_SHIFT)                  /* 0x00000004 */
#define CRU_GATE_CON30_CLK_I2C2_EN_SHIFT                   (3U)
#define CRU_GATE_CON30_CLK_I2C2_EN_MASK                    (0x1U << CRU_GATE_CON30_CLK_I2C2_EN_SHIFT)                   /* 0x00000008 */
#define CRU_GATE_CON30_PCLK_I2C3_EN_SHIFT                  (4U)
#define CRU_GATE_CON30_PCLK_I2C3_EN_MASK                   (0x1U << CRU_GATE_CON30_PCLK_I2C3_EN_SHIFT)                  /* 0x00000010 */
#define CRU_GATE_CON30_CLK_I2C3_EN_SHIFT                   (5U)
#define CRU_GATE_CON30_CLK_I2C3_EN_MASK                    (0x1U << CRU_GATE_CON30_CLK_I2C3_EN_SHIFT)                   /* 0x00000020 */
#define CRU_GATE_CON30_PCLK_I2C4_EN_SHIFT                  (6U)
#define CRU_GATE_CON30_PCLK_I2C4_EN_MASK                   (0x1U << CRU_GATE_CON30_PCLK_I2C4_EN_SHIFT)                  /* 0x00000040 */
#define CRU_GATE_CON30_CLK_I2C4_EN_SHIFT                   (7U)
#define CRU_GATE_CON30_CLK_I2C4_EN_MASK                    (0x1U << CRU_GATE_CON30_CLK_I2C4_EN_SHIFT)                   /* 0x00000080 */
#define CRU_GATE_CON30_PCLK_I2C5_EN_SHIFT                  (8U)
#define CRU_GATE_CON30_PCLK_I2C5_EN_MASK                   (0x1U << CRU_GATE_CON30_PCLK_I2C5_EN_SHIFT)                  /* 0x00000100 */
#define CRU_GATE_CON30_CLK_I2C5_EN_SHIFT                   (9U)
#define CRU_GATE_CON30_CLK_I2C5_EN_MASK                    (0x1U << CRU_GATE_CON30_CLK_I2C5_EN_SHIFT)                   /* 0x00000200 */
#define CRU_GATE_CON30_PCLK_SPI0_EN_SHIFT                  (10U)
#define CRU_GATE_CON30_PCLK_SPI0_EN_MASK                   (0x1U << CRU_GATE_CON30_PCLK_SPI0_EN_SHIFT)                  /* 0x00000400 */
#define CRU_GATE_CON30_CLK_SPI0_EN_SHIFT                   (11U)
#define CRU_GATE_CON30_CLK_SPI0_EN_MASK                    (0x1U << CRU_GATE_CON30_CLK_SPI0_EN_SHIFT)                   /* 0x00000800 */
#define CRU_GATE_CON30_PCLK_SPI1_EN_SHIFT                  (12U)
#define CRU_GATE_CON30_PCLK_SPI1_EN_MASK                   (0x1U << CRU_GATE_CON30_PCLK_SPI1_EN_SHIFT)                  /* 0x00001000 */
#define CRU_GATE_CON30_CLK_SPI1_EN_SHIFT                   (13U)
#define CRU_GATE_CON30_CLK_SPI1_EN_MASK                    (0x1U << CRU_GATE_CON30_CLK_SPI1_EN_SHIFT)                   /* 0x00002000 */
#define CRU_GATE_CON30_PCLK_SPI2_EN_SHIFT                  (14U)
#define CRU_GATE_CON30_PCLK_SPI2_EN_MASK                   (0x1U << CRU_GATE_CON30_PCLK_SPI2_EN_SHIFT)                  /* 0x00004000 */
#define CRU_GATE_CON30_CLK_SPI2_EN_SHIFT                   (15U)
#define CRU_GATE_CON30_CLK_SPI2_EN_MASK                    (0x1U << CRU_GATE_CON30_CLK_SPI2_EN_SHIFT)                   /* 0x00008000 */
/* GATE_CON31 */
#define CRU_GATE_CON31_OFFSET                              (0x37CU)
#define CRU_GATE_CON31_PCLK_SPI3_EN_SHIFT                  (0U)
#define CRU_GATE_CON31_PCLK_SPI3_EN_MASK                   (0x1U << CRU_GATE_CON31_PCLK_SPI3_EN_SHIFT)                  /* 0x00000001 */
#define CRU_GATE_CON31_CLK_SPI3_EN_SHIFT                   (1U)
#define CRU_GATE_CON31_CLK_SPI3_EN_MASK                    (0x1U << CRU_GATE_CON31_CLK_SPI3_EN_SHIFT)                   /* 0x00000002 */
#define CRU_GATE_CON31_PCLK_GPIO1_EN_SHIFT                 (2U)
#define CRU_GATE_CON31_PCLK_GPIO1_EN_MASK                  (0x1U << CRU_GATE_CON31_PCLK_GPIO1_EN_SHIFT)                 /* 0x00000004 */
#define CRU_GATE_CON31_DBCLK_GPIO1_EN_SHIFT                (3U)
#define CRU_GATE_CON31_DBCLK_GPIO1_EN_MASK                 (0x1U << CRU_GATE_CON31_DBCLK_GPIO1_EN_SHIFT)                /* 0x00000008 */
#define CRU_GATE_CON31_PCLK_GPIO2_EN_SHIFT                 (4U)
#define CRU_GATE_CON31_PCLK_GPIO2_EN_MASK                  (0x1U << CRU_GATE_CON31_PCLK_GPIO2_EN_SHIFT)                 /* 0x00000010 */
#define CRU_GATE_CON31_DBCLK_GPIO2_EN_SHIFT                (5U)
#define CRU_GATE_CON31_DBCLK_GPIO2_EN_MASK                 (0x1U << CRU_GATE_CON31_DBCLK_GPIO2_EN_SHIFT)                /* 0x00000020 */
#define CRU_GATE_CON31_PCLK_GPIO3_EN_SHIFT                 (6U)
#define CRU_GATE_CON31_PCLK_GPIO3_EN_MASK                  (0x1U << CRU_GATE_CON31_PCLK_GPIO3_EN_SHIFT)                 /* 0x00000040 */
#define CRU_GATE_CON31_DBCLK_GPIO3_EN_SHIFT                (7U)
#define CRU_GATE_CON31_DBCLK_GPIO3_EN_MASK                 (0x1U << CRU_GATE_CON31_DBCLK_GPIO3_EN_SHIFT)                /* 0x00000080 */
#define CRU_GATE_CON31_PCLK_GPIO4_EN_SHIFT                 (8U)
#define CRU_GATE_CON31_PCLK_GPIO4_EN_MASK                  (0x1U << CRU_GATE_CON31_PCLK_GPIO4_EN_SHIFT)                 /* 0x00000100 */
#define CRU_GATE_CON31_DBCLK_GPIO4_EN_SHIFT                (9U)
#define CRU_GATE_CON31_DBCLK_GPIO4_EN_MASK                 (0x1U << CRU_GATE_CON31_DBCLK_GPIO4_EN_SHIFT)                /* 0x00000200 */
#define CRU_GATE_CON31_PCLK_PWM1_EN_SHIFT                  (10U)
#define CRU_GATE_CON31_PCLK_PWM1_EN_MASK                   (0x1U << CRU_GATE_CON31_PCLK_PWM1_EN_SHIFT)                  /* 0x00000400 */
#define CRU_GATE_CON31_CLK_PWM1_EN_SHIFT                   (11U)
#define CRU_GATE_CON31_CLK_PWM1_EN_MASK                    (0x1U << CRU_GATE_CON31_CLK_PWM1_EN_SHIFT)                   /* 0x00000800 */
#define CRU_GATE_CON31_CLK_PWM1_CAPTURE_EN_SHIFT           (12U)
#define CRU_GATE_CON31_CLK_PWM1_CAPTURE_EN_MASK            (0x1U << CRU_GATE_CON31_CLK_PWM1_CAPTURE_EN_SHIFT)           /* 0x00001000 */
#define CRU_GATE_CON31_PCLK_PWM2_EN_SHIFT                  (13U)
#define CRU_GATE_CON31_PCLK_PWM2_EN_MASK                   (0x1U << CRU_GATE_CON31_PCLK_PWM2_EN_SHIFT)                  /* 0x00002000 */
#define CRU_GATE_CON31_CLK_PWM2_EN_SHIFT                   (14U)
#define CRU_GATE_CON31_CLK_PWM2_EN_MASK                    (0x1U << CRU_GATE_CON31_CLK_PWM2_EN_SHIFT)                   /* 0x00004000 */
#define CRU_GATE_CON31_CLK_PWM2_CAPTURE_EN_SHIFT           (15U)
#define CRU_GATE_CON31_CLK_PWM2_CAPTURE_EN_MASK            (0x1U << CRU_GATE_CON31_CLK_PWM2_CAPTURE_EN_SHIFT)           /* 0x00008000 */
/* GATE_CON32 */
#define CRU_GATE_CON32_OFFSET                              (0x380U)
#define CRU_GATE_CON32_PCLK_PWM3_EN_SHIFT                  (0U)
#define CRU_GATE_CON32_PCLK_PWM3_EN_MASK                   (0x1U << CRU_GATE_CON32_PCLK_PWM3_EN_SHIFT)                  /* 0x00000001 */
#define CRU_GATE_CON32_CLK_PWM3_EN_SHIFT                   (1U)
#define CRU_GATE_CON32_CLK_PWM3_EN_MASK                    (0x1U << CRU_GATE_CON32_CLK_PWM3_EN_SHIFT)                   /* 0x00000002 */
#define CRU_GATE_CON32_CLK_PWM3_CAPTURE_EN_SHIFT           (2U)
#define CRU_GATE_CON32_CLK_PWM3_CAPTURE_EN_MASK            (0x1U << CRU_GATE_CON32_CLK_PWM3_CAPTURE_EN_SHIFT)           /* 0x00000004 */
#define CRU_GATE_CON32_PCLK_TIMER_EN_SHIFT                 (3U)
#define CRU_GATE_CON32_PCLK_TIMER_EN_MASK                  (0x1U << CRU_GATE_CON32_PCLK_TIMER_EN_SHIFT)                 /* 0x00000008 */
#define CRU_GATE_CON32_CLK_TIMER0_EN_SHIFT                 (4U)
#define CRU_GATE_CON32_CLK_TIMER0_EN_MASK                  (0x1U << CRU_GATE_CON32_CLK_TIMER0_EN_SHIFT)                 /* 0x00000010 */
#define CRU_GATE_CON32_CLK_TIMER1_EN_SHIFT                 (5U)
#define CRU_GATE_CON32_CLK_TIMER1_EN_MASK                  (0x1U << CRU_GATE_CON32_CLK_TIMER1_EN_SHIFT)                 /* 0x00000020 */
#define CRU_GATE_CON32_CLK_TIMER2_EN_SHIFT                 (6U)
#define CRU_GATE_CON32_CLK_TIMER2_EN_MASK                  (0x1U << CRU_GATE_CON32_CLK_TIMER2_EN_SHIFT)                 /* 0x00000040 */
#define CRU_GATE_CON32_CLK_TIMER3_EN_SHIFT                 (7U)
#define CRU_GATE_CON32_CLK_TIMER3_EN_MASK                  (0x1U << CRU_GATE_CON32_CLK_TIMER3_EN_SHIFT)                 /* 0x00000080 */
#define CRU_GATE_CON32_CLK_TIMER4_EN_SHIFT                 (8U)
#define CRU_GATE_CON32_CLK_TIMER4_EN_MASK                  (0x1U << CRU_GATE_CON32_CLK_TIMER4_EN_SHIFT)                 /* 0x00000100 */
#define CRU_GATE_CON32_CLK_TIMER5_EN_SHIFT                 (9U)
#define CRU_GATE_CON32_CLK_TIMER5_EN_MASK                  (0x1U << CRU_GATE_CON32_CLK_TIMER5_EN_SHIFT)                 /* 0x00000200 */
#define CRU_GATE_CON32_CLK_I2C_EN_SHIFT                    (10U)
#define CRU_GATE_CON32_CLK_I2C_EN_MASK                     (0x1U << CRU_GATE_CON32_CLK_I2C_EN_SHIFT)                    /* 0x00000400 */
#define CRU_GATE_CON32_DBCLK_GPIO_EN_SHIFT                 (11U)
#define CRU_GATE_CON32_DBCLK_GPIO_EN_MASK                  (0x1U << CRU_GATE_CON32_DBCLK_GPIO_EN_SHIFT)                 /* 0x00000800 */
#define CRU_GATE_CON32_CLK_TIMER_EN_SHIFT                  (12U)
#define CRU_GATE_CON32_CLK_TIMER_EN_MASK                   (0x1U << CRU_GATE_CON32_CLK_TIMER_EN_SHIFT)                  /* 0x00001000 */
#define CRU_GATE_CON32_ACLK_MCU_EN_SHIFT                   (13U)
#define CRU_GATE_CON32_ACLK_MCU_EN_MASK                    (0x1U << CRU_GATE_CON32_ACLK_MCU_EN_SHIFT)                   /* 0x00002000 */
#define CRU_GATE_CON32_PCLK_INTMUX_EN_SHIFT                (14U)
#define CRU_GATE_CON32_PCLK_INTMUX_EN_MASK                 (0x1U << CRU_GATE_CON32_PCLK_INTMUX_EN_SHIFT)                /* 0x00004000 */
#define CRU_GATE_CON32_PCLK_MAILBOX_EN_SHIFT               (15U)
#define CRU_GATE_CON32_PCLK_MAILBOX_EN_MASK                (0x1U << CRU_GATE_CON32_PCLK_MAILBOX_EN_SHIFT)               /* 0x00008000 */
/* GATE_CON33 */
#define CRU_GATE_CON33_OFFSET                              (0x384U)
#define CRU_GATE_CON33_ACLK_TOP_HIGH_EN_SHIFT              (0U)
#define CRU_GATE_CON33_ACLK_TOP_HIGH_EN_MASK               (0x1U << CRU_GATE_CON33_ACLK_TOP_HIGH_EN_SHIFT)              /* 0x00000001 */
#define CRU_GATE_CON33_ACLK_TOP_LOW_EN_SHIFT               (1U)
#define CRU_GATE_CON33_ACLK_TOP_LOW_EN_MASK                (0x1U << CRU_GATE_CON33_ACLK_TOP_LOW_EN_SHIFT)               /* 0x00000002 */
#define CRU_GATE_CON33_HCLK_TOP_EN_SHIFT                   (2U)
#define CRU_GATE_CON33_HCLK_TOP_EN_MASK                    (0x1U << CRU_GATE_CON33_HCLK_TOP_EN_SHIFT)                   /* 0x00000004 */
#define CRU_GATE_CON33_PCLK_TOP_EN_SHIFT                   (3U)
#define CRU_GATE_CON33_PCLK_TOP_EN_MASK                    (0x1U << CRU_GATE_CON33_PCLK_TOP_EN_SHIFT)                   /* 0x00000008 */
#define CRU_GATE_CON33_ACLK_TOP_HIGH_NIU_EN_SHIFT          (4U)
#define CRU_GATE_CON33_ACLK_TOP_HIGH_NIU_EN_MASK           (0x1U << CRU_GATE_CON33_ACLK_TOP_HIGH_NIU_EN_SHIFT)          /* 0x00000010 */
#define CRU_GATE_CON33_ACLK_TOP_LOW_NIU_EN_SHIFT           (5U)
#define CRU_GATE_CON33_ACLK_TOP_LOW_NIU_EN_MASK            (0x1U << CRU_GATE_CON33_ACLK_TOP_LOW_NIU_EN_SHIFT)           /* 0x00000020 */
#define CRU_GATE_CON33_HCLK_TOP_NIU_EN_SHIFT               (6U)
#define CRU_GATE_CON33_HCLK_TOP_NIU_EN_MASK                (0x1U << CRU_GATE_CON33_HCLK_TOP_NIU_EN_SHIFT)               /* 0x00000040 */
#define CRU_GATE_CON33_PCLK_TOP_NIU_EN_SHIFT               (7U)
#define CRU_GATE_CON33_PCLK_TOP_NIU_EN_MASK                (0x1U << CRU_GATE_CON33_PCLK_TOP_NIU_EN_SHIFT)               /* 0x00000080 */
#define CRU_GATE_CON33_PCLK_PCIE30PHY_EN_SHIFT             (8U)
#define CRU_GATE_CON33_PCLK_PCIE30PHY_EN_MASK              (0x1U << CRU_GATE_CON33_PCLK_PCIE30PHY_EN_SHIFT)             /* 0x00000100 */
#define CRU_GATE_CON33_CLK_OTPC_ARB_EN_SHIFT               (9U)
#define CRU_GATE_CON33_CLK_OTPC_ARB_EN_MASK                (0x1U << CRU_GATE_CON33_CLK_OTPC_ARB_EN_SHIFT)               /* 0x00000200 */
#define CRU_GATE_CON33_PCLK_TOP_CRU_EN_SHIFT               (12U)
#define CRU_GATE_CON33_PCLK_TOP_CRU_EN_MASK                (0x1U << CRU_GATE_CON33_PCLK_TOP_CRU_EN_SHIFT)               /* 0x00001000 */
#define CRU_GATE_CON33_PCLK_MIPICSIPHY_EN_SHIFT            (13U)
#define CRU_GATE_CON33_PCLK_MIPICSIPHY_EN_MASK             (0x1U << CRU_GATE_CON33_PCLK_MIPICSIPHY_EN_SHIFT)            /* 0x00002000 */
#define CRU_GATE_CON33_PCLK_MIPIDSIPHY0_EN_SHIFT           (14U)
#define CRU_GATE_CON33_PCLK_MIPIDSIPHY0_EN_MASK            (0x1U << CRU_GATE_CON33_PCLK_MIPIDSIPHY0_EN_SHIFT)           /* 0x00004000 */
#define CRU_GATE_CON33_PCLK_MIPIDSIPHY1_EN_SHIFT           (15U)
#define CRU_GATE_CON33_PCLK_MIPIDSIPHY1_EN_MASK            (0x1U << CRU_GATE_CON33_PCLK_MIPIDSIPHY1_EN_SHIFT)           /* 0x00008000 */
/* GATE_CON34 */
#define CRU_GATE_CON34_OFFSET                              (0x388U)
#define CRU_GATE_CON34_PCLK_APB2ASB_CHIP_LEFT_EN_SHIFT     (0U)
#define CRU_GATE_CON34_PCLK_APB2ASB_CHIP_LEFT_EN_MASK      (0x1U << CRU_GATE_CON34_PCLK_APB2ASB_CHIP_LEFT_EN_SHIFT)     /* 0x00000001 */
#define CRU_GATE_CON34_PCLK_APB2ASB_CHIP_BOTTOM_EN_SHIFT   (1U)
#define CRU_GATE_CON34_PCLK_APB2ASB_CHIP_BOTTOM_EN_MASK    (0x1U << CRU_GATE_CON34_PCLK_APB2ASB_CHIP_BOTTOM_EN_SHIFT)   /* 0x00000002 */
#define CRU_GATE_CON34_PCLK_ASB2APB_CHIP_LEFT_EN_SHIFT     (2U)
#define CRU_GATE_CON34_PCLK_ASB2APB_CHIP_LEFT_EN_MASK      (0x1U << CRU_GATE_CON34_PCLK_ASB2APB_CHIP_LEFT_EN_SHIFT)     /* 0x00000004 */
#define CRU_GATE_CON34_PCLK_ASB2APB_CHIP_BOTTOM_EN_SHIFT   (3U)
#define CRU_GATE_CON34_PCLK_ASB2APB_CHIP_BOTTOM_EN_MASK    (0x1U << CRU_GATE_CON34_PCLK_ASB2APB_CHIP_BOTTOM_EN_SHIFT)   /* 0x00000008 */
#define CRU_GATE_CON34_PCLK_PIPEPHY0_EN_SHIFT              (4U)
#define CRU_GATE_CON34_PCLK_PIPEPHY0_EN_MASK               (0x1U << CRU_GATE_CON34_PCLK_PIPEPHY0_EN_SHIFT)              /* 0x00000010 */
#define CRU_GATE_CON34_PCLK_PIPEPHY1_EN_SHIFT              (5U)
#define CRU_GATE_CON34_PCLK_PIPEPHY1_EN_MASK               (0x1U << CRU_GATE_CON34_PCLK_PIPEPHY1_EN_SHIFT)              /* 0x00000020 */
#define CRU_GATE_CON34_PCLK_PIPEPHY2_EN_SHIFT              (6U)
#define CRU_GATE_CON34_PCLK_PIPEPHY2_EN_MASK               (0x1U << CRU_GATE_CON34_PCLK_PIPEPHY2_EN_SHIFT)              /* 0x00000040 */
#define CRU_GATE_CON34_PCLK_USB2PHY0_GRF_EN_SHIFT          (7U)
#define CRU_GATE_CON34_PCLK_USB2PHY0_GRF_EN_MASK           (0x1U << CRU_GATE_CON34_PCLK_USB2PHY0_GRF_EN_SHIFT)          /* 0x00000080 */
#define CRU_GATE_CON34_PCLK_USB2PHY1_GRF_EN_SHIFT          (8U)
#define CRU_GATE_CON34_PCLK_USB2PHY1_GRF_EN_MASK           (0x1U << CRU_GATE_CON34_PCLK_USB2PHY1_GRF_EN_SHIFT)          /* 0x00000100 */
#define CRU_GATE_CON34_PCLK_DDRPHY_EN_SHIFT                (9U)
#define CRU_GATE_CON34_PCLK_DDRPHY_EN_MASK                 (0x1U << CRU_GATE_CON34_PCLK_DDRPHY_EN_SHIFT)                /* 0x00000200 */
#define CRU_GATE_CON34_CLK_DDRPHY_EN_SHIFT                 (10U)
#define CRU_GATE_CON34_CLK_DDRPHY_EN_MASK                  (0x1U << CRU_GATE_CON34_CLK_DDRPHY_EN_SHIFT)                 /* 0x00000400 */
#define CRU_GATE_CON34_PCLK_CPU_BOOST_EN_SHIFT             (11U)
#define CRU_GATE_CON34_PCLK_CPU_BOOST_EN_MASK              (0x1U << CRU_GATE_CON34_PCLK_CPU_BOOST_EN_SHIFT)             /* 0x00000800 */
#define CRU_GATE_CON34_CLK_CPU_BOOST_EN_SHIFT              (12U)
#define CRU_GATE_CON34_CLK_CPU_BOOST_EN_MASK               (0x1U << CRU_GATE_CON34_CLK_CPU_BOOST_EN_SHIFT)              /* 0x00001000 */
#define CRU_GATE_CON34_PCLK_OTPPHY_EN_SHIFT                (13U)
#define CRU_GATE_CON34_PCLK_OTPPHY_EN_MASK                 (0x1U << CRU_GATE_CON34_PCLK_OTPPHY_EN_SHIFT)                /* 0x00002000 */
#define CRU_GATE_CON34_PCLK_EDPPHY_GRF_EN_SHIFT            (14U)
#define CRU_GATE_CON34_PCLK_EDPPHY_GRF_EN_MASK             (0x1U << CRU_GATE_CON34_PCLK_EDPPHY_GRF_EN_SHIFT)            /* 0x00004000 */
#define CRU_GATE_CON34_CLK_TESTOUT_EN_SHIFT                (15U)
#define CRU_GATE_CON34_CLK_TESTOUT_EN_MASK                 (0x1U << CRU_GATE_CON34_CLK_TESTOUT_EN_SHIFT)                /* 0x00008000 */
/* GATE_CON35 */
#define CRU_GATE_CON35_OFFSET                              (0x38CU)
#define CRU_GATE_CON35_CLK_GPLL_DIV_400M_EN_SHIFT          (0U)
#define CRU_GATE_CON35_CLK_GPLL_DIV_400M_EN_MASK           (0x1U << CRU_GATE_CON35_CLK_GPLL_DIV_400M_EN_SHIFT)          /* 0x00000001 */
#define CRU_GATE_CON35_CLK_GPLL_DIV_300M_EN_SHIFT          (1U)
#define CRU_GATE_CON35_CLK_GPLL_DIV_300M_EN_MASK           (0x1U << CRU_GATE_CON35_CLK_GPLL_DIV_300M_EN_SHIFT)          /* 0x00000002 */
#define CRU_GATE_CON35_CLK_GPLL_DIV_200M_EN_SHIFT          (2U)
#define CRU_GATE_CON35_CLK_GPLL_DIV_200M_EN_MASK           (0x1U << CRU_GATE_CON35_CLK_GPLL_DIV_200M_EN_SHIFT)          /* 0x00000004 */
#define CRU_GATE_CON35_CLK_GPLL_DIV_150M_EN_SHIFT          (3U)
#define CRU_GATE_CON35_CLK_GPLL_DIV_150M_EN_MASK           (0x1U << CRU_GATE_CON35_CLK_GPLL_DIV_150M_EN_SHIFT)          /* 0x00000008 */
#define CRU_GATE_CON35_CLK_GPLL_DIV_100M_EN_SHIFT          (4U)
#define CRU_GATE_CON35_CLK_GPLL_DIV_100M_EN_MASK           (0x1U << CRU_GATE_CON35_CLK_GPLL_DIV_100M_EN_SHIFT)          /* 0x00000010 */
#define CRU_GATE_CON35_CLK_GPLL_DIV_75M_EN_SHIFT           (5U)
#define CRU_GATE_CON35_CLK_GPLL_DIV_75M_EN_MASK            (0x1U << CRU_GATE_CON35_CLK_GPLL_DIV_75M_EN_SHIFT)           /* 0x00000020 */
#define CRU_GATE_CON35_CLK_GPLL_DIV_20M_EN_SHIFT           (6U)
#define CRU_GATE_CON35_CLK_GPLL_DIV_20M_EN_MASK            (0x1U << CRU_GATE_CON35_CLK_GPLL_DIV_20M_EN_SHIFT)           /* 0x00000040 */
#define CRU_GATE_CON35_CLK_CPLL_DIV_500M_EN_SHIFT          (7U)
#define CRU_GATE_CON35_CLK_CPLL_DIV_500M_EN_MASK           (0x1U << CRU_GATE_CON35_CLK_CPLL_DIV_500M_EN_SHIFT)          /* 0x00000080 */
#define CRU_GATE_CON35_CLK_CPLL_DIV_333M_EN_SHIFT          (8U)
#define CRU_GATE_CON35_CLK_CPLL_DIV_333M_EN_MASK           (0x1U << CRU_GATE_CON35_CLK_CPLL_DIV_333M_EN_SHIFT)          /* 0x00000100 */
#define CRU_GATE_CON35_CLK_CPLL_DIV_250M_EN_SHIFT          (9U)
#define CRU_GATE_CON35_CLK_CPLL_DIV_250M_EN_MASK           (0x1U << CRU_GATE_CON35_CLK_CPLL_DIV_250M_EN_SHIFT)          /* 0x00000200 */
#define CRU_GATE_CON35_CLK_CPLL_DIV_125M_EN_SHIFT          (10U)
#define CRU_GATE_CON35_CLK_CPLL_DIV_125M_EN_MASK           (0x1U << CRU_GATE_CON35_CLK_CPLL_DIV_125M_EN_SHIFT)          /* 0x00000400 */
#define CRU_GATE_CON35_CLK_CPLL_DIV_100M_EN_SHIFT          (11U)
#define CRU_GATE_CON35_CLK_CPLL_DIV_100M_EN_MASK           (0x1U << CRU_GATE_CON35_CLK_CPLL_DIV_100M_EN_SHIFT)          /* 0x00000800 */
#define CRU_GATE_CON35_CLK_CPLL_DIV_62P5_EN_SHIFT          (12U)
#define CRU_GATE_CON35_CLK_CPLL_DIV_62P5_EN_MASK           (0x1U << CRU_GATE_CON35_CLK_CPLL_DIV_62P5_EN_SHIFT)          /* 0x00001000 */
#define CRU_GATE_CON35_CLK_CPLL_DIV_50M_EN_SHIFT           (13U)
#define CRU_GATE_CON35_CLK_CPLL_DIV_50M_EN_MASK            (0x1U << CRU_GATE_CON35_CLK_CPLL_DIV_50M_EN_SHIFT)           /* 0x00002000 */
#define CRU_GATE_CON35_CLK_CPLL_DIV_25M_EN_SHIFT           (14U)
#define CRU_GATE_CON35_CLK_CPLL_DIV_25M_EN_MASK            (0x1U << CRU_GATE_CON35_CLK_CPLL_DIV_25M_EN_SHIFT)           /* 0x00004000 */
#define CRU_GATE_CON35_CLK_OSC0_DIV_750K_EN_SHIFT          (15U)
#define CRU_GATE_CON35_CLK_OSC0_DIV_750K_EN_MASK           (0x1U << CRU_GATE_CON35_CLK_OSC0_DIV_750K_EN_SHIFT)          /* 0x00008000 */
/* SOFTRST_CON00 */
#define CRU_SOFTRST_CON00_OFFSET                           (0x400U)
#define CRU_SOFTRST_CON00_NCORERESET0_SHIFT                (0U)
#define CRU_SOFTRST_CON00_NCORERESET0_MASK                 (0x1U << CRU_SOFTRST_CON00_NCORERESET0_SHIFT)                /* 0x00000001 */
#define CRU_SOFTRST_CON00_NCORERESET1_SHIFT                (1U)
#define CRU_SOFTRST_CON00_NCORERESET1_MASK                 (0x1U << CRU_SOFTRST_CON00_NCORERESET1_SHIFT)                /* 0x00000002 */
#define CRU_SOFTRST_CON00_NCORERESET2_SHIFT                (2U)
#define CRU_SOFTRST_CON00_NCORERESET2_MASK                 (0x1U << CRU_SOFTRST_CON00_NCORERESET2_SHIFT)                /* 0x00000004 */
#define CRU_SOFTRST_CON00_NCORERESET3_SHIFT                (3U)
#define CRU_SOFTRST_CON00_NCORERESET3_MASK                 (0x1U << CRU_SOFTRST_CON00_NCORERESET3_SHIFT)                /* 0x00000008 */
#define CRU_SOFTRST_CON00_NCPUPORESET0_SHIFT               (4U)
#define CRU_SOFTRST_CON00_NCPUPORESET0_MASK                (0x1U << CRU_SOFTRST_CON00_NCPUPORESET0_SHIFT)               /* 0x00000010 */
#define CRU_SOFTRST_CON00_NCPUPORESET1_SHIFT               (5U)
#define CRU_SOFTRST_CON00_NCPUPORESET1_MASK                (0x1U << CRU_SOFTRST_CON00_NCPUPORESET1_SHIFT)               /* 0x00000020 */
#define CRU_SOFTRST_CON00_NCPUPORESET2_SHIFT               (6U)
#define CRU_SOFTRST_CON00_NCPUPORESET2_MASK                (0x1U << CRU_SOFTRST_CON00_NCPUPORESET2_SHIFT)               /* 0x00000040 */
#define CRU_SOFTRST_CON00_NCPUPORESET3_SHIFT               (7U)
#define CRU_SOFTRST_CON00_NCPUPORESET3_MASK                (0x1U << CRU_SOFTRST_CON00_NCPUPORESET3_SHIFT)               /* 0x00000080 */
#define CRU_SOFTRST_CON00_NSRESET_SHIFT                    (8U)
#define CRU_SOFTRST_CON00_NSRESET_MASK                     (0x1U << CRU_SOFTRST_CON00_NSRESET_SHIFT)                    /* 0x00000100 */
#define CRU_SOFTRST_CON00_NSPORESET_SHIFT                  (9U)
#define CRU_SOFTRST_CON00_NSPORESET_MASK                   (0x1U << CRU_SOFTRST_CON00_NSPORESET_SHIFT)                  /* 0x00000200 */
#define CRU_SOFTRST_CON00_NATRESET_SHIFT                   (10U)
#define CRU_SOFTRST_CON00_NATRESET_MASK                    (0x1U << CRU_SOFTRST_CON00_NATRESET_SHIFT)                   /* 0x00000400 */
#define CRU_SOFTRST_CON00_NGICRESET_SHIFT                  (11U)
#define CRU_SOFTRST_CON00_NGICRESET_MASK                   (0x1U << CRU_SOFTRST_CON00_NGICRESET_SHIFT)                  /* 0x00000800 */
#define CRU_SOFTRST_CON00_NPRESET_SHIFT                    (12U)
#define CRU_SOFTRST_CON00_NPRESET_MASK                     (0x1U << CRU_SOFTRST_CON00_NPRESET_SHIFT)                    /* 0x00001000 */
#define CRU_SOFTRST_CON00_NPERIPHRESET_SHIFT               (13U)
#define CRU_SOFTRST_CON00_NPERIPHRESET_MASK                (0x1U << CRU_SOFTRST_CON00_NPERIPHRESET_SHIFT)               /* 0x00002000 */
/* SOFTRST_CON01 */
#define CRU_SOFTRST_CON01_OFFSET                           (0x404U)
#define CRU_SOFTRST_CON01_ARESETN_CORE_NIU2DDR_SHIFT       (0U)
#define CRU_SOFTRST_CON01_ARESETN_CORE_NIU2DDR_MASK        (0x1U << CRU_SOFTRST_CON01_ARESETN_CORE_NIU2DDR_SHIFT)       /* 0x00000001 */
#define CRU_SOFTRST_CON01_ARESETN_CORE_NIU2BUS_SHIFT       (1U)
#define CRU_SOFTRST_CON01_ARESETN_CORE_NIU2BUS_MASK        (0x1U << CRU_SOFTRST_CON01_ARESETN_CORE_NIU2BUS_SHIFT)       /* 0x00000002 */
#define CRU_SOFTRST_CON01_PRESETN_DBG_NIU_SHIFT            (2U)
#define CRU_SOFTRST_CON01_PRESETN_DBG_NIU_MASK             (0x1U << CRU_SOFTRST_CON01_PRESETN_DBG_NIU_SHIFT)            /* 0x00000004 */
#define CRU_SOFTRST_CON01_PRESETN_DBG_SHIFT                (3U)
#define CRU_SOFTRST_CON01_PRESETN_DBG_MASK                 (0x1U << CRU_SOFTRST_CON01_PRESETN_DBG_SHIFT)                /* 0x00000008 */
#define CRU_SOFTRST_CON01_PRESETN_DBG_DAPLITE_SHIFT        (4U)
#define CRU_SOFTRST_CON01_PRESETN_DBG_DAPLITE_MASK         (0x1U << CRU_SOFTRST_CON01_PRESETN_DBG_DAPLITE_SHIFT)        /* 0x00000010 */
#define CRU_SOFTRST_CON01_RESETN_DAP_SHIFT                 (5U)
#define CRU_SOFTRST_CON01_RESETN_DAP_MASK                  (0x1U << CRU_SOFTRST_CON01_RESETN_DAP_SHIFT)                 /* 0x00000020 */
#define CRU_SOFTRST_CON01_ARESETN_ADB400_CORE2GIC_SHIFT    (6U)
#define CRU_SOFTRST_CON01_ARESETN_ADB400_CORE2GIC_MASK     (0x1U << CRU_SOFTRST_CON01_ARESETN_ADB400_CORE2GIC_SHIFT)    /* 0x00000040 */
#define CRU_SOFTRST_CON01_ARESETN_ADB400_GIC2CORE_SHIFT    (7U)
#define CRU_SOFTRST_CON01_ARESETN_ADB400_GIC2CORE_MASK     (0x1U << CRU_SOFTRST_CON01_ARESETN_ADB400_GIC2CORE_SHIFT)    /* 0x00000080 */
#define CRU_SOFTRST_CON01_PRESETN_CORE_GRF_SHIFT           (8U)
#define CRU_SOFTRST_CON01_PRESETN_CORE_GRF_MASK            (0x1U << CRU_SOFTRST_CON01_PRESETN_CORE_GRF_SHIFT)           /* 0x00000100 */
#define CRU_SOFTRST_CON01_PRESETN_CORE_PVTM_SHIFT          (9U)
#define CRU_SOFTRST_CON01_PRESETN_CORE_PVTM_MASK           (0x1U << CRU_SOFTRST_CON01_PRESETN_CORE_PVTM_SHIFT)          /* 0x00000200 */
#define CRU_SOFTRST_CON01_RESETN_CORE_PVTM_SHIFT           (10U)
#define CRU_SOFTRST_CON01_RESETN_CORE_PVTM_MASK            (0x1U << CRU_SOFTRST_CON01_RESETN_CORE_PVTM_SHIFT)           /* 0x00000400 */
#define CRU_SOFTRST_CON01_RESETN_CORE_PVTPLL_SHIFT         (11U)
#define CRU_SOFTRST_CON01_RESETN_CORE_PVTPLL_MASK          (0x1U << CRU_SOFTRST_CON01_RESETN_CORE_PVTPLL_SHIFT)         /* 0x00000800 */
/* SOFTRST_CON02 */
#define CRU_SOFTRST_CON02_OFFSET                           (0x408U)
#define CRU_SOFTRST_CON02_RESETN_GPU_SHIFT                 (0U)
#define CRU_SOFTRST_CON02_RESETN_GPU_MASK                  (0x1U << CRU_SOFTRST_CON02_RESETN_GPU_SHIFT)                 /* 0x00000001 */
#define CRU_SOFTRST_CON02_ARESETN_GPU_NIU_SHIFT            (1U)
#define CRU_SOFTRST_CON02_ARESETN_GPU_NIU_MASK             (0x1U << CRU_SOFTRST_CON02_ARESETN_GPU_NIU_SHIFT)            /* 0x00000002 */
#define CRU_SOFTRST_CON02_PRESETN_GPU_NIU_SHIFT            (2U)
#define CRU_SOFTRST_CON02_PRESETN_GPU_NIU_MASK             (0x1U << CRU_SOFTRST_CON02_PRESETN_GPU_NIU_SHIFT)            /* 0x00000004 */
#define CRU_SOFTRST_CON02_PRESETN_GPU_PVTM_SHIFT           (3U)
#define CRU_SOFTRST_CON02_PRESETN_GPU_PVTM_MASK            (0x1U << CRU_SOFTRST_CON02_PRESETN_GPU_PVTM_SHIFT)           /* 0x00000008 */
#define CRU_SOFTRST_CON02_RESETN_GPU_PVTM_SHIFT            (4U)
#define CRU_SOFTRST_CON02_RESETN_GPU_PVTM_MASK             (0x1U << CRU_SOFTRST_CON02_RESETN_GPU_PVTM_SHIFT)            /* 0x00000010 */
#define CRU_SOFTRST_CON02_RESETN_GPU_PVTPLL_SHIFT          (5U)
#define CRU_SOFTRST_CON02_RESETN_GPU_PVTPLL_MASK           (0x1U << CRU_SOFTRST_CON02_RESETN_GPU_PVTPLL_SHIFT)          /* 0x00000020 */
#define CRU_SOFTRST_CON02_ARESETN_NPU_NIU_SHIFT            (8U)
#define CRU_SOFTRST_CON02_ARESETN_NPU_NIU_MASK             (0x1U << CRU_SOFTRST_CON02_ARESETN_NPU_NIU_SHIFT)            /* 0x00000100 */
#define CRU_SOFTRST_CON02_HRESETN_NPU_NIU_SHIFT            (9U)
#define CRU_SOFTRST_CON02_HRESETN_NPU_NIU_MASK             (0x1U << CRU_SOFTRST_CON02_HRESETN_NPU_NIU_SHIFT)            /* 0x00000200 */
#define CRU_SOFTRST_CON02_PRESETN_NPU_NIU_SHIFT            (10U)
#define CRU_SOFTRST_CON02_PRESETN_NPU_NIU_MASK             (0x1U << CRU_SOFTRST_CON02_PRESETN_NPU_NIU_SHIFT)            /* 0x00000400 */
#define CRU_SOFTRST_CON02_ARESETN_RKNN_SHIFT               (11U)
#define CRU_SOFTRST_CON02_ARESETN_RKNN_MASK                (0x1U << CRU_SOFTRST_CON02_ARESETN_RKNN_SHIFT)               /* 0x00000800 */
#define CRU_SOFTRST_CON02_HRESETN_RKNN_SHIFT               (12U)
#define CRU_SOFTRST_CON02_HRESETN_RKNN_MASK                (0x1U << CRU_SOFTRST_CON02_HRESETN_RKNN_SHIFT)               /* 0x00001000 */
#define CRU_SOFTRST_CON02_PRESETN_NPU_PVTM_SHIFT           (13U)
#define CRU_SOFTRST_CON02_PRESETN_NPU_PVTM_MASK            (0x1U << CRU_SOFTRST_CON02_PRESETN_NPU_PVTM_SHIFT)           /* 0x00002000 */
#define CRU_SOFTRST_CON02_RESETN_NPU_PVTM_SHIFT            (14U)
#define CRU_SOFTRST_CON02_RESETN_NPU_PVTM_MASK             (0x1U << CRU_SOFTRST_CON02_RESETN_NPU_PVTM_SHIFT)            /* 0x00004000 */
#define CRU_SOFTRST_CON02_RESETN_NPU_PVTPLL_SHIFT          (15U)
#define CRU_SOFTRST_CON02_RESETN_NPU_PVTPLL_MASK           (0x1U << CRU_SOFTRST_CON02_RESETN_NPU_PVTPLL_SHIFT)          /* 0x00008000 */
/* SOFTRST_CON03 */
#define CRU_SOFTRST_CON03_OFFSET                           (0x40CU)
#define CRU_SOFTRST_CON03_ARESETN_MSCH_SHIFT               (3U)
#define CRU_SOFTRST_CON03_ARESETN_MSCH_MASK                (0x1U << CRU_SOFTRST_CON03_ARESETN_MSCH_SHIFT)               /* 0x00000008 */
#define CRU_SOFTRST_CON03_RESETN_HWFFC_CTRL_SHIFT          (4U)
#define CRU_SOFTRST_CON03_RESETN_HWFFC_CTRL_MASK           (0x1U << CRU_SOFTRST_CON03_RESETN_HWFFC_CTRL_SHIFT)          /* 0x00000010 */
#define CRU_SOFTRST_CON03_RESETN_DDR_ALWAYSON_SHIFT        (5U)
#define CRU_SOFTRST_CON03_RESETN_DDR_ALWAYSON_MASK         (0x1U << CRU_SOFTRST_CON03_RESETN_DDR_ALWAYSON_SHIFT)        /* 0x00000020 */
#define CRU_SOFTRST_CON03_ARESETN_DDRSPLIT_SHIFT           (6U)
#define CRU_SOFTRST_CON03_ARESETN_DDRSPLIT_MASK            (0x1U << CRU_SOFTRST_CON03_ARESETN_DDRSPLIT_SHIFT)           /* 0x00000040 */
#define CRU_SOFTRST_CON03_RESETN_DDRDFI_CTL_SHIFT          (7U)
#define CRU_SOFTRST_CON03_RESETN_DDRDFI_CTL_MASK           (0x1U << CRU_SOFTRST_CON03_RESETN_DDRDFI_CTL_SHIFT)          /* 0x00000080 */
#define CRU_SOFTRST_CON03_ARESETN_DMA2DDR_SHIFT            (9U)
#define CRU_SOFTRST_CON03_ARESETN_DMA2DDR_MASK             (0x1U << CRU_SOFTRST_CON03_ARESETN_DMA2DDR_SHIFT)            /* 0x00000200 */
/* SOFTRST_CON04 */
#define CRU_SOFTRST_CON04_OFFSET                           (0x410U)
#define CRU_SOFTRST_CON04_ARESETN_PERIMID_NIU_SHIFT        (0U)
#define CRU_SOFTRST_CON04_ARESETN_PERIMID_NIU_MASK         (0x1U << CRU_SOFTRST_CON04_ARESETN_PERIMID_NIU_SHIFT)        /* 0x00000001 */
#define CRU_SOFTRST_CON04_HRESETN_PERIMID_NIU_SHIFT        (1U)
#define CRU_SOFTRST_CON04_HRESETN_PERIMID_NIU_MASK         (0x1U << CRU_SOFTRST_CON04_HRESETN_PERIMID_NIU_SHIFT)        /* 0x00000002 */
#define CRU_SOFTRST_CON04_ARESETN_GIC_AUDIO_NIU_SHIFT      (2U)
#define CRU_SOFTRST_CON04_ARESETN_GIC_AUDIO_NIU_MASK       (0x1U << CRU_SOFTRST_CON04_ARESETN_GIC_AUDIO_NIU_SHIFT)      /* 0x00000004 */
#define CRU_SOFTRST_CON04_HRESETN_GIC_AUDIO_NIU_SHIFT      (3U)
#define CRU_SOFTRST_CON04_HRESETN_GIC_AUDIO_NIU_MASK       (0x1U << CRU_SOFTRST_CON04_HRESETN_GIC_AUDIO_NIU_SHIFT)      /* 0x00000008 */
#define CRU_SOFTRST_CON04_ARESETN_GIC600_SHIFT             (4U)
#define CRU_SOFTRST_CON04_ARESETN_GIC600_MASK              (0x1U << CRU_SOFTRST_CON04_ARESETN_GIC600_SHIFT)             /* 0x00000010 */
#define CRU_SOFTRST_CON04_ARESETN_GIC600_DEBUG_SHIFT       (5U)
#define CRU_SOFTRST_CON04_ARESETN_GIC600_DEBUG_MASK        (0x1U << CRU_SOFTRST_CON04_ARESETN_GIC600_DEBUG_SHIFT)       /* 0x00000020 */
#define CRU_SOFTRST_CON04_ARESETN_GICADB_CORE2GIC_SHIFT    (6U)
#define CRU_SOFTRST_CON04_ARESETN_GICADB_CORE2GIC_MASK     (0x1U << CRU_SOFTRST_CON04_ARESETN_GICADB_CORE2GIC_SHIFT)    /* 0x00000040 */
#define CRU_SOFTRST_CON04_ARESETN_GICADB_GIC2CORE_SHIFT    (7U)
#define CRU_SOFTRST_CON04_ARESETN_GICADB_GIC2CORE_MASK     (0x1U << CRU_SOFTRST_CON04_ARESETN_GICADB_GIC2CORE_SHIFT)    /* 0x00000080 */
#define CRU_SOFTRST_CON04_ARESETN_SPINLOCK_SHIFT           (8U)
#define CRU_SOFTRST_CON04_ARESETN_SPINLOCK_MASK            (0x1U << CRU_SOFTRST_CON04_ARESETN_SPINLOCK_SHIFT)           /* 0x00000100 */
#define CRU_SOFTRST_CON04_HRESETN_SDMMC_BUFFER_SHIFT       (9U)
#define CRU_SOFTRST_CON04_HRESETN_SDMMC_BUFFER_MASK        (0x1U << CRU_SOFTRST_CON04_HRESETN_SDMMC_BUFFER_SHIFT)       /* 0x00000200 */
#define CRU_SOFTRST_CON04_DRESETN_SDMMC_BUFFER_SHIFT       (10U)
#define CRU_SOFTRST_CON04_DRESETN_SDMMC_BUFFER_MASK        (0x1U << CRU_SOFTRST_CON04_DRESETN_SDMMC_BUFFER_SHIFT)       /* 0x00000400 */
#define CRU_SOFTRST_CON04_HRESETN_I2S0_8CH_SHIFT           (11U)
#define CRU_SOFTRST_CON04_HRESETN_I2S0_8CH_MASK            (0x1U << CRU_SOFTRST_CON04_HRESETN_I2S0_8CH_SHIFT)           /* 0x00000800 */
#define CRU_SOFTRST_CON04_HRESETN_I2S1_8CH_SHIFT           (12U)
#define CRU_SOFTRST_CON04_HRESETN_I2S1_8CH_MASK            (0x1U << CRU_SOFTRST_CON04_HRESETN_I2S1_8CH_SHIFT)           /* 0x00001000 */
#define CRU_SOFTRST_CON04_HRESETN_I2S2_2CH_SHIFT           (13U)
#define CRU_SOFTRST_CON04_HRESETN_I2S2_2CH_MASK            (0x1U << CRU_SOFTRST_CON04_HRESETN_I2S2_2CH_SHIFT)           /* 0x00002000 */
#define CRU_SOFTRST_CON04_HRESETN_I2S3_2CH_SHIFT           (14U)
#define CRU_SOFTRST_CON04_HRESETN_I2S3_2CH_MASK            (0x1U << CRU_SOFTRST_CON04_HRESETN_I2S3_2CH_SHIFT)           /* 0x00004000 */
/* SOFTRST_CON05 */
#define CRU_SOFTRST_CON05_OFFSET                           (0x414U)
#define CRU_SOFTRST_CON05_MRESETN_I2S0_8CH_TX_SHIFT        (0U)
#define CRU_SOFTRST_CON05_MRESETN_I2S0_8CH_TX_MASK         (0x1U << CRU_SOFTRST_CON05_MRESETN_I2S0_8CH_TX_SHIFT)        /* 0x00000001 */
#define CRU_SOFTRST_CON05_MRESETN_I2S0_8CH_RX_SHIFT        (1U)
#define CRU_SOFTRST_CON05_MRESETN_I2S0_8CH_RX_MASK         (0x1U << CRU_SOFTRST_CON05_MRESETN_I2S0_8CH_RX_SHIFT)        /* 0x00000002 */
#define CRU_SOFTRST_CON05_MRESETN_I2S1_8CH_TX_SHIFT        (2U)
#define CRU_SOFTRST_CON05_MRESETN_I2S1_8CH_TX_MASK         (0x1U << CRU_SOFTRST_CON05_MRESETN_I2S1_8CH_TX_SHIFT)        /* 0x00000004 */
#define CRU_SOFTRST_CON05_MRESETN_I2S1_8CH_RX_SHIFT        (3U)
#define CRU_SOFTRST_CON05_MRESETN_I2S1_8CH_RX_MASK         (0x1U << CRU_SOFTRST_CON05_MRESETN_I2S1_8CH_RX_SHIFT)        /* 0x00000008 */
#define CRU_SOFTRST_CON05_MRESETN_I2S2_2CH_SHIFT           (4U)
#define CRU_SOFTRST_CON05_MRESETN_I2S2_2CH_MASK            (0x1U << CRU_SOFTRST_CON05_MRESETN_I2S2_2CH_SHIFT)           /* 0x00000010 */
#define CRU_SOFTRST_CON05_MRESETN_I2S3_2CH_TX_SHIFT        (5U)
#define CRU_SOFTRST_CON05_MRESETN_I2S3_2CH_TX_MASK         (0x1U << CRU_SOFTRST_CON05_MRESETN_I2S3_2CH_TX_SHIFT)        /* 0x00000020 */
#define CRU_SOFTRST_CON05_MRESETN_I2S3_2CH_RX_SHIFT        (6U)
#define CRU_SOFTRST_CON05_MRESETN_I2S3_2CH_RX_MASK         (0x1U << CRU_SOFTRST_CON05_MRESETN_I2S3_2CH_RX_SHIFT)        /* 0x00000040 */
#define CRU_SOFTRST_CON05_HRESETN_PDM_SHIFT                (7U)
#define CRU_SOFTRST_CON05_HRESETN_PDM_MASK                 (0x1U << CRU_SOFTRST_CON05_HRESETN_PDM_SHIFT)                /* 0x00000080 */
#define CRU_SOFTRST_CON05_MRESETN_PDM_SHIFT                (8U)
#define CRU_SOFTRST_CON05_MRESETN_PDM_MASK                 (0x1U << CRU_SOFTRST_CON05_MRESETN_PDM_SHIFT)                /* 0x00000100 */
#define CRU_SOFTRST_CON05_HRESETN_VAD_SHIFT                (9U)
#define CRU_SOFTRST_CON05_HRESETN_VAD_MASK                 (0x1U << CRU_SOFTRST_CON05_HRESETN_VAD_SHIFT)                /* 0x00000200 */
#define CRU_SOFTRST_CON05_HRESETN_SPDIF_8CH_SHIFT          (10U)
#define CRU_SOFTRST_CON05_HRESETN_SPDIF_8CH_MASK           (0x1U << CRU_SOFTRST_CON05_HRESETN_SPDIF_8CH_SHIFT)          /* 0x00000400 */
#define CRU_SOFTRST_CON05_MRESETN_SPDIF_8CH_SHIFT          (11U)
#define CRU_SOFTRST_CON05_MRESETN_SPDIF_8CH_MASK           (0x1U << CRU_SOFTRST_CON05_MRESETN_SPDIF_8CH_SHIFT)          /* 0x00000800 */
#define CRU_SOFTRST_CON05_HRESETN_AUDPWM_SHIFT             (12U)
#define CRU_SOFTRST_CON05_HRESETN_AUDPWM_MASK              (0x1U << CRU_SOFTRST_CON05_HRESETN_AUDPWM_SHIFT)             /* 0x00001000 */
#define CRU_SOFTRST_CON05_SRESETN_AUDPWM_SHIFT             (13U)
#define CRU_SOFTRST_CON05_SRESETN_AUDPWM_MASK              (0x1U << CRU_SOFTRST_CON05_SRESETN_AUDPWM_SHIFT)             /* 0x00002000 */
#define CRU_SOFTRST_CON05_HRESETN_ACDCDIG_SHIFT            (14U)
#define CRU_SOFTRST_CON05_HRESETN_ACDCDIG_MASK             (0x1U << CRU_SOFTRST_CON05_HRESETN_ACDCDIG_SHIFT)            /* 0x00004000 */
#define CRU_SOFTRST_CON05_RESETN_ACDCDIG_SHIFT             (15U)
#define CRU_SOFTRST_CON05_RESETN_ACDCDIG_MASK              (0x1U << CRU_SOFTRST_CON05_RESETN_ACDCDIG_SHIFT)             /* 0x00008000 */
/* SOFTRST_CON06 */
#define CRU_SOFTRST_CON06_OFFSET                           (0x418U)
#define CRU_SOFTRST_CON06_ARESETN_SECURE_FLASH_NIU_SHIFT   (0U)
#define CRU_SOFTRST_CON06_ARESETN_SECURE_FLASH_NIU_MASK    (0x1U << CRU_SOFTRST_CON06_ARESETN_SECURE_FLASH_NIU_SHIFT)   /* 0x00000001 */
#define CRU_SOFTRST_CON06_HRESETN_SECURE_FLASH_NIU_SHIFT   (1U)
#define CRU_SOFTRST_CON06_HRESETN_SECURE_FLASH_NIU_MASK    (0x1U << CRU_SOFTRST_CON06_HRESETN_SECURE_FLASH_NIU_SHIFT)   /* 0x00000002 */
#define CRU_SOFTRST_CON06_ARESETN_CRYPTO_NS_SHIFT          (7U)
#define CRU_SOFTRST_CON06_ARESETN_CRYPTO_NS_MASK           (0x1U << CRU_SOFTRST_CON06_ARESETN_CRYPTO_NS_SHIFT)          /* 0x00000080 */
#define CRU_SOFTRST_CON06_HRESETN_CRYPTO_NS_SHIFT          (8U)
#define CRU_SOFTRST_CON06_HRESETN_CRYPTO_NS_MASK           (0x1U << CRU_SOFTRST_CON06_HRESETN_CRYPTO_NS_SHIFT)          /* 0x00000100 */
#define CRU_SOFTRST_CON06_RESETN_CRYPTO_NS_CORE_SHIFT      (9U)
#define CRU_SOFTRST_CON06_RESETN_CRYPTO_NS_CORE_MASK       (0x1U << CRU_SOFTRST_CON06_RESETN_CRYPTO_NS_CORE_SHIFT)      /* 0x00000200 */
#define CRU_SOFTRST_CON06_RESETN_CRYPTO_NS_PKA_SHIFT       (10U)
#define CRU_SOFTRST_CON06_RESETN_CRYPTO_NS_PKA_MASK        (0x1U << CRU_SOFTRST_CON06_RESETN_CRYPTO_NS_PKA_SHIFT)       /* 0x00000400 */
#define CRU_SOFTRST_CON06_RESETN_CRYPTO_NS_RNG_SHIFT       (11U)
#define CRU_SOFTRST_CON06_RESETN_CRYPTO_NS_RNG_MASK        (0x1U << CRU_SOFTRST_CON06_RESETN_CRYPTO_NS_RNG_SHIFT)       /* 0x00000800 */
#define CRU_SOFTRST_CON06_HRESETN_TRNG_NS_SHIFT            (12U)
#define CRU_SOFTRST_CON06_HRESETN_TRNG_NS_MASK             (0x1U << CRU_SOFTRST_CON06_HRESETN_TRNG_NS_SHIFT)            /* 0x00001000 */
#define CRU_SOFTRST_CON06_RESETN_TRNG_NS_SHIFT             (13U)
#define CRU_SOFTRST_CON06_RESETN_TRNG_NS_MASK              (0x1U << CRU_SOFTRST_CON06_RESETN_TRNG_NS_SHIFT)             /* 0x00002000 */
/* SOFTRST_CON07 */
#define CRU_SOFTRST_CON07_OFFSET                           (0x41CU)
#define CRU_SOFTRST_CON07_HRESETN_NANDC_SHIFT              (0U)
#define CRU_SOFTRST_CON07_HRESETN_NANDC_MASK               (0x1U << CRU_SOFTRST_CON07_HRESETN_NANDC_SHIFT)              /* 0x00000001 */
#define CRU_SOFTRST_CON07_NRESETN_NANDC_SHIFT              (1U)
#define CRU_SOFTRST_CON07_NRESETN_NANDC_MASK               (0x1U << CRU_SOFTRST_CON07_NRESETN_NANDC_SHIFT)              /* 0x00000002 */
#define CRU_SOFTRST_CON07_HRESETN_SFC_SHIFT                (2U)
#define CRU_SOFTRST_CON07_HRESETN_SFC_MASK                 (0x1U << CRU_SOFTRST_CON07_HRESETN_SFC_SHIFT)                /* 0x00000004 */
#define CRU_SOFTRST_CON07_HRESETN_SFC_XIP_SHIFT            (3U)
#define CRU_SOFTRST_CON07_HRESETN_SFC_XIP_MASK             (0x1U << CRU_SOFTRST_CON07_HRESETN_SFC_XIP_SHIFT)            /* 0x00000008 */
#define CRU_SOFTRST_CON07_SRESETN_SFC_SHIFT                (4U)
#define CRU_SOFTRST_CON07_SRESETN_SFC_MASK                 (0x1U << CRU_SOFTRST_CON07_SRESETN_SFC_SHIFT)                /* 0x00000010 */
#define CRU_SOFTRST_CON07_ARESETN_EMMC_SHIFT               (5U)
#define CRU_SOFTRST_CON07_ARESETN_EMMC_MASK                (0x1U << CRU_SOFTRST_CON07_ARESETN_EMMC_SHIFT)               /* 0x00000020 */
#define CRU_SOFTRST_CON07_HRESETN_EMMC_SHIFT               (6U)
#define CRU_SOFTRST_CON07_HRESETN_EMMC_MASK                (0x1U << CRU_SOFTRST_CON07_HRESETN_EMMC_SHIFT)               /* 0x00000040 */
#define CRU_SOFTRST_CON07_BRESETN_EMMC_SHIFT               (7U)
#define CRU_SOFTRST_CON07_BRESETN_EMMC_MASK                (0x1U << CRU_SOFTRST_CON07_BRESETN_EMMC_SHIFT)               /* 0x00000080 */
#define CRU_SOFTRST_CON07_CRESETN_EMMC_SHIFT               (8U)
#define CRU_SOFTRST_CON07_CRESETN_EMMC_MASK                (0x1U << CRU_SOFTRST_CON07_CRESETN_EMMC_SHIFT)               /* 0x00000100 */
#define CRU_SOFTRST_CON07_TRESETN_EMMC_SHIFT               (9U)
#define CRU_SOFTRST_CON07_TRESETN_EMMC_MASK                (0x1U << CRU_SOFTRST_CON07_TRESETN_EMMC_SHIFT)               /* 0x00000200 */
/* SOFTRST_CON08 */
#define CRU_SOFTRST_CON08_OFFSET                           (0x420U)
#define CRU_SOFTRST_CON08_ARESETN_PIPE_NIU_SHIFT           (0U)
#define CRU_SOFTRST_CON08_ARESETN_PIPE_NIU_MASK            (0x1U << CRU_SOFTRST_CON08_ARESETN_PIPE_NIU_SHIFT)           /* 0x00000001 */
#define CRU_SOFTRST_CON08_PRESETN_PIPE_NIU_SHIFT           (2U)
#define CRU_SOFTRST_CON08_PRESETN_PIPE_NIU_MASK            (0x1U << CRU_SOFTRST_CON08_PRESETN_PIPE_NIU_SHIFT)           /* 0x00000004 */
#define CRU_SOFTRST_CON08_PRESETN_PIPE_GRF_SHIFT           (5U)
#define CRU_SOFTRST_CON08_PRESETN_PIPE_GRF_MASK            (0x1U << CRU_SOFTRST_CON08_PRESETN_PIPE_GRF_SHIFT)           /* 0x00000020 */
#define CRU_SOFTRST_CON08_ARESETN_SATA0_SHIFT              (6U)
#define CRU_SOFTRST_CON08_ARESETN_SATA0_MASK               (0x1U << CRU_SOFTRST_CON08_ARESETN_SATA0_SHIFT)              /* 0x00000040 */
#define CRU_SOFTRST_CON08_RESETN_SATA0_PIPE_SHIFT          (7U)
#define CRU_SOFTRST_CON08_RESETN_SATA0_PIPE_MASK           (0x1U << CRU_SOFTRST_CON08_RESETN_SATA0_PIPE_SHIFT)          /* 0x00000080 */
#define CRU_SOFTRST_CON08_RESETN_SATA0_PMALIVE_SHIFT       (8U)
#define CRU_SOFTRST_CON08_RESETN_SATA0_PMALIVE_MASK        (0x1U << CRU_SOFTRST_CON08_RESETN_SATA0_PMALIVE_SHIFT)       /* 0x00000100 */
#define CRU_SOFTRST_CON08_RESETN_SATA0_RXOOB_SHIFT         (9U)
#define CRU_SOFTRST_CON08_RESETN_SATA0_RXOOB_MASK          (0x1U << CRU_SOFTRST_CON08_RESETN_SATA0_RXOOB_SHIFT)         /* 0x00000200 */
#define CRU_SOFTRST_CON08_ARESETN_SATA1_SHIFT              (10U)
#define CRU_SOFTRST_CON08_ARESETN_SATA1_MASK               (0x1U << CRU_SOFTRST_CON08_ARESETN_SATA1_SHIFT)              /* 0x00000400 */
#define CRU_SOFTRST_CON08_RESETN_SATA1_PIPE_SHIFT          (11U)
#define CRU_SOFTRST_CON08_RESETN_SATA1_PIPE_MASK           (0x1U << CRU_SOFTRST_CON08_RESETN_SATA1_PIPE_SHIFT)          /* 0x00000800 */
#define CRU_SOFTRST_CON08_RESETN_SATA1_PMALIVE_SHIFT       (12U)
#define CRU_SOFTRST_CON08_RESETN_SATA1_PMALIVE_MASK        (0x1U << CRU_SOFTRST_CON08_RESETN_SATA1_PMALIVE_SHIFT)       /* 0x00001000 */
#define CRU_SOFTRST_CON08_RESETN_SATA1_RXOOB_SHIFT         (13U)
#define CRU_SOFTRST_CON08_RESETN_SATA1_RXOOB_MASK          (0x1U << CRU_SOFTRST_CON08_RESETN_SATA1_RXOOB_SHIFT)         /* 0x00002000 */
/* SOFTRST_CON09 */
#define CRU_SOFTRST_CON09_OFFSET                           (0x424U)
#define CRU_SOFTRST_CON09_ARESETN_SATA2_SHIFT              (0U)
#define CRU_SOFTRST_CON09_ARESETN_SATA2_MASK               (0x1U << CRU_SOFTRST_CON09_ARESETN_SATA2_SHIFT)              /* 0x00000001 */
#define CRU_SOFTRST_CON09_RESETN_SATA2_PIPE_SHIFT          (1U)
#define CRU_SOFTRST_CON09_RESETN_SATA2_PIPE_MASK           (0x1U << CRU_SOFTRST_CON09_RESETN_SATA2_PIPE_SHIFT)          /* 0x00000002 */
#define CRU_SOFTRST_CON09_RESETN_SATA2_PMALIVE_SHIFT       (2U)
#define CRU_SOFTRST_CON09_RESETN_SATA2_PMALIVE_MASK        (0x1U << CRU_SOFTRST_CON09_RESETN_SATA2_PMALIVE_SHIFT)       /* 0x00000004 */
#define CRU_SOFTRST_CON09_RESETN_SATA2_RXOOB_SHIFT         (3U)
#define CRU_SOFTRST_CON09_RESETN_SATA2_RXOOB_MASK          (0x1U << CRU_SOFTRST_CON09_RESETN_SATA2_RXOOB_SHIFT)         /* 0x00000008 */
#define CRU_SOFTRST_CON09_RESETN_USB3OTG0_SHIFT            (4U)
#define CRU_SOFTRST_CON09_RESETN_USB3OTG0_MASK             (0x1U << CRU_SOFTRST_CON09_RESETN_USB3OTG0_SHIFT)            /* 0x00000010 */
#define CRU_SOFTRST_CON09_RESETN_USB3OTG1_SHIFT            (5U)
#define CRU_SOFTRST_CON09_RESETN_USB3OTG1_MASK             (0x1U << CRU_SOFTRST_CON09_RESETN_USB3OTG1_SHIFT)            /* 0x00000020 */
#define CRU_SOFTRST_CON09_RESETN_XPCS_SHIFT                (6U)
#define CRU_SOFTRST_CON09_RESETN_XPCS_MASK                 (0x1U << CRU_SOFTRST_CON09_RESETN_XPCS_SHIFT)                /* 0x00000040 */
#define CRU_SOFTRST_CON09_RESETN_XPCS_TX_DIV10_SHIFT       (7U)
#define CRU_SOFTRST_CON09_RESETN_XPCS_TX_DIV10_MASK        (0x1U << CRU_SOFTRST_CON09_RESETN_XPCS_TX_DIV10_SHIFT)       /* 0x00000080 */
#define CRU_SOFTRST_CON09_RESETN_XPCS_RX_DIV10_SHIFT       (8U)
#define CRU_SOFTRST_CON09_RESETN_XPCS_RX_DIV10_MASK        (0x1U << CRU_SOFTRST_CON09_RESETN_XPCS_RX_DIV10_SHIFT)       /* 0x00000100 */
#define CRU_SOFTRST_CON09_RESETN_XPCS_XGXS_RX_SHIFT        (9U)
#define CRU_SOFTRST_CON09_RESETN_XPCS_XGXS_RX_MASK         (0x1U << CRU_SOFTRST_CON09_RESETN_XPCS_XGXS_RX_SHIFT)        /* 0x00000200 */
/* SOFTRST_CON10 */
#define CRU_SOFTRST_CON10_OFFSET                           (0x428U)
#define CRU_SOFTRST_CON10_PRESETN_PCIE20_SHIFT             (0U)
#define CRU_SOFTRST_CON10_PRESETN_PCIE20_MASK              (0x1U << CRU_SOFTRST_CON10_PRESETN_PCIE20_SHIFT)             /* 0x00000001 */
#define CRU_SOFTRST_CON10_RESETN_PCIE20_POWERUP_REQ_SHIFT  (1U)
#define CRU_SOFTRST_CON10_RESETN_PCIE20_POWERUP_REQ_MASK   (0x1U << CRU_SOFTRST_CON10_RESETN_PCIE20_POWERUP_REQ_SHIFT)  /* 0x00000002 */
#define CRU_SOFTRST_CON10_MSTR_ARESET_PCIE20_REQ_SHIFT     (2U)
#define CRU_SOFTRST_CON10_MSTR_ARESET_PCIE20_REQ_MASK      (0x1U << CRU_SOFTRST_CON10_MSTR_ARESET_PCIE20_REQ_SHIFT)     /* 0x00000004 */
#define CRU_SOFTRST_CON10_SLV_ARESET_PCIE20_REQ_SHIFT      (3U)
#define CRU_SOFTRST_CON10_SLV_ARESET_PCIE20_REQ_MASK       (0x1U << CRU_SOFTRST_CON10_SLV_ARESET_PCIE20_REQ_SHIFT)      /* 0x00000008 */
#define CRU_SOFTRST_CON10_DBI_ARESET_PCIE20_REQ_SHIFT      (4U)
#define CRU_SOFTRST_CON10_DBI_ARESET_PCIE20_REQ_MASK       (0x1U << CRU_SOFTRST_CON10_DBI_ARESET_PCIE20_REQ_SHIFT)      /* 0x00000010 */
#define CRU_SOFTRST_CON10_BRESET_PCIE20_REQ_SHIFT          (5U)
#define CRU_SOFTRST_CON10_BRESET_PCIE20_REQ_MASK           (0x1U << CRU_SOFTRST_CON10_BRESET_PCIE20_REQ_SHIFT)          /* 0x00000020 */
#define CRU_SOFTRST_CON10_PERST_PCIE20_REQ_SHIFT           (6U)
#define CRU_SOFTRST_CON10_PERST_PCIE20_REQ_MASK            (0x1U << CRU_SOFTRST_CON10_PERST_PCIE20_REQ_SHIFT)           /* 0x00000040 */
#define CRU_SOFTRST_CON10_CORE_RST_PCIE20_REQ_SHIFT        (7U)
#define CRU_SOFTRST_CON10_CORE_RST_PCIE20_REQ_MASK         (0x1U << CRU_SOFTRST_CON10_CORE_RST_PCIE20_REQ_SHIFT)        /* 0x00000080 */
#define CRU_SOFTRST_CON10_NSTICKY_RST_PCIE20_REQ_SHIFT     (8U)
#define CRU_SOFTRST_CON10_NSTICKY_RST_PCIE20_REQ_MASK      (0x1U << CRU_SOFTRST_CON10_NSTICKY_RST_PCIE20_REQ_SHIFT)     /* 0x00000100 */
#define CRU_SOFTRST_CON10_STICKY_RST_PCIE20_REQ_SHIFT      (9U)
#define CRU_SOFTRST_CON10_STICKY_RST_PCIE20_REQ_MASK       (0x1U << CRU_SOFTRST_CON10_STICKY_RST_PCIE20_REQ_SHIFT)      /* 0x00000200 */
#define CRU_SOFTRST_CON10_PWR_RST_PCIE20_REQ_SHIFT         (10U)
#define CRU_SOFTRST_CON10_PWR_RST_PCIE20_REQ_MASK          (0x1U << CRU_SOFTRST_CON10_PWR_RST_PCIE20_REQ_SHIFT)         /* 0x00000400 */
/* SOFTRST_CON11 */
#define CRU_SOFTRST_CON11_OFFSET                           (0x42CU)
#define CRU_SOFTRST_CON11_PRESETN_PCIE30X1_SHIFT           (0U)
#define CRU_SOFTRST_CON11_PRESETN_PCIE30X1_MASK            (0x1U << CRU_SOFTRST_CON11_PRESETN_PCIE30X1_SHIFT)           /* 0x00000001 */
#define CRU_SOFTRST_CON11_RESETN_PCIE30X1_POWERUP_REQ_SHIFT (1U)
#define CRU_SOFTRST_CON11_RESETN_PCIE30X1_POWERUP_REQ_MASK (0x1U << CRU_SOFTRST_CON11_RESETN_PCIE30X1_POWERUP_REQ_SHIFT) /* 0x00000002 */
#define CRU_SOFTRST_CON11_MSTR_ARESET_PCIE30X1_REQ_SHIFT   (2U)
#define CRU_SOFTRST_CON11_MSTR_ARESET_PCIE30X1_REQ_MASK    (0x1U << CRU_SOFTRST_CON11_MSTR_ARESET_PCIE30X1_REQ_SHIFT)   /* 0x00000004 */
#define CRU_SOFTRST_CON11_SLV_ARESET_PCIE30X1_REQ_SHIFT    (3U)
#define CRU_SOFTRST_CON11_SLV_ARESET_PCIE30X1_REQ_MASK     (0x1U << CRU_SOFTRST_CON11_SLV_ARESET_PCIE30X1_REQ_SHIFT)    /* 0x00000008 */
#define CRU_SOFTRST_CON11_DBI_ARESET_PCIE30X1_REQ_SHIFT    (4U)
#define CRU_SOFTRST_CON11_DBI_ARESET_PCIE30X1_REQ_MASK     (0x1U << CRU_SOFTRST_CON11_DBI_ARESET_PCIE30X1_REQ_SHIFT)    /* 0x00000010 */
#define CRU_SOFTRST_CON11_BRESET_PCIE30X1_REQ_SHIFT        (5U)
#define CRU_SOFTRST_CON11_BRESET_PCIE30X1_REQ_MASK         (0x1U << CRU_SOFTRST_CON11_BRESET_PCIE30X1_REQ_SHIFT)        /* 0x00000020 */
#define CRU_SOFTRST_CON11_PERST_PCIE30X1_REQ_SHIFT         (6U)
#define CRU_SOFTRST_CON11_PERST_PCIE30X1_REQ_MASK          (0x1U << CRU_SOFTRST_CON11_PERST_PCIE30X1_REQ_SHIFT)         /* 0x00000040 */
#define CRU_SOFTRST_CON11_CORE_RST_PCIE30X1_REQ_SHIFT      (7U)
#define CRU_SOFTRST_CON11_CORE_RST_PCIE30X1_REQ_MASK       (0x1U << CRU_SOFTRST_CON11_CORE_RST_PCIE30X1_REQ_SHIFT)      /* 0x00000080 */
#define CRU_SOFTRST_CON11_NSTICKY_RST_PCIE30X1_REQ_SHIFT   (8U)
#define CRU_SOFTRST_CON11_NSTICKY_RST_PCIE30X1_REQ_MASK    (0x1U << CRU_SOFTRST_CON11_NSTICKY_RST_PCIE30X1_REQ_SHIFT)   /* 0x00000100 */
#define CRU_SOFTRST_CON11_STICKY_RST_PCIE30X1_REQ_SHIFT    (9U)
#define CRU_SOFTRST_CON11_STICKY_RST_PCIE30X1_REQ_MASK     (0x1U << CRU_SOFTRST_CON11_STICKY_RST_PCIE30X1_REQ_SHIFT)    /* 0x00000200 */
#define CRU_SOFTRST_CON11_PWR_RST_PCIE30X1_REQ_SHIFT       (10U)
#define CRU_SOFTRST_CON11_PWR_RST_PCIE30X1_REQ_MASK        (0x1U << CRU_SOFTRST_CON11_PWR_RST_PCIE30X1_REQ_SHIFT)       /* 0x00000400 */
/* SOFTRST_CON12 */
#define CRU_SOFTRST_CON12_OFFSET                           (0x430U)
#define CRU_SOFTRST_CON12_PRESETN_PCIE30X2_SHIFT           (0U)
#define CRU_SOFTRST_CON12_PRESETN_PCIE30X2_MASK            (0x1U << CRU_SOFTRST_CON12_PRESETN_PCIE30X2_SHIFT)           /* 0x00000001 */
#define CRU_SOFTRST_CON12_RESETN_PCIE30X2_POWERUP_REQ_SHIFT (1U)
#define CRU_SOFTRST_CON12_RESETN_PCIE30X2_POWERUP_REQ_MASK (0x1U << CRU_SOFTRST_CON12_RESETN_PCIE30X2_POWERUP_REQ_SHIFT) /* 0x00000002 */
#define CRU_SOFTRST_CON12_MSTR_ARESET_PCIE30X2_REQ_SHIFT   (2U)
#define CRU_SOFTRST_CON12_MSTR_ARESET_PCIE30X2_REQ_MASK    (0x1U << CRU_SOFTRST_CON12_MSTR_ARESET_PCIE30X2_REQ_SHIFT)   /* 0x00000004 */
#define CRU_SOFTRST_CON12_SLV_ARESET_PCIE30X2_REQ_SHIFT    (3U)
#define CRU_SOFTRST_CON12_SLV_ARESET_PCIE30X2_REQ_MASK     (0x1U << CRU_SOFTRST_CON12_SLV_ARESET_PCIE30X2_REQ_SHIFT)    /* 0x00000008 */
#define CRU_SOFTRST_CON12_DBI_ARESET_PCIE30X2_REQ_SHIFT    (4U)
#define CRU_SOFTRST_CON12_DBI_ARESET_PCIE30X2_REQ_MASK     (0x1U << CRU_SOFTRST_CON12_DBI_ARESET_PCIE30X2_REQ_SHIFT)    /* 0x00000010 */
#define CRU_SOFTRST_CON12_BRESET_PCIE30X2_REQ_SHIFT        (5U)
#define CRU_SOFTRST_CON12_BRESET_PCIE30X2_REQ_MASK         (0x1U << CRU_SOFTRST_CON12_BRESET_PCIE30X2_REQ_SHIFT)        /* 0x00000020 */
#define CRU_SOFTRST_CON12_PERST_PCIE30X2_REQ_SHIFT         (6U)
#define CRU_SOFTRST_CON12_PERST_PCIE30X2_REQ_MASK          (0x1U << CRU_SOFTRST_CON12_PERST_PCIE30X2_REQ_SHIFT)         /* 0x00000040 */
#define CRU_SOFTRST_CON12_CORE_RST_PCIE30X2_REQ_SHIFT      (7U)
#define CRU_SOFTRST_CON12_CORE_RST_PCIE30X2_REQ_MASK       (0x1U << CRU_SOFTRST_CON12_CORE_RST_PCIE30X2_REQ_SHIFT)      /* 0x00000080 */
#define CRU_SOFTRST_CON12_NSTICKY_RST_PCIE30X2_REQ_SHIFT   (8U)
#define CRU_SOFTRST_CON12_NSTICKY_RST_PCIE30X2_REQ_MASK    (0x1U << CRU_SOFTRST_CON12_NSTICKY_RST_PCIE30X2_REQ_SHIFT)   /* 0x00000100 */
#define CRU_SOFTRST_CON12_STICKY_RST_PCIE30X2_REQ_SHIFT    (9U)
#define CRU_SOFTRST_CON12_STICKY_RST_PCIE30X2_REQ_MASK     (0x1U << CRU_SOFTRST_CON12_STICKY_RST_PCIE30X2_REQ_SHIFT)    /* 0x00000200 */
#define CRU_SOFTRST_CON12_PWR_RST_PCIE30X2_REQ_SHIFT       (10U)
#define CRU_SOFTRST_CON12_PWR_RST_PCIE30X2_REQ_MASK        (0x1U << CRU_SOFTRST_CON12_PWR_RST_PCIE30X2_REQ_SHIFT)       /* 0x00000400 */
/* SOFTRST_CON13 */
#define CRU_SOFTRST_CON13_OFFSET                           (0x434U)
#define CRU_SOFTRST_CON13_ARESETN_PHP_NIU_SHIFT            (0U)
#define CRU_SOFTRST_CON13_ARESETN_PHP_NIU_MASK             (0x1U << CRU_SOFTRST_CON13_ARESETN_PHP_NIU_SHIFT)            /* 0x00000001 */
#define CRU_SOFTRST_CON13_HRESETN_PHP_NIU_SHIFT            (1U)
#define CRU_SOFTRST_CON13_HRESETN_PHP_NIU_MASK             (0x1U << CRU_SOFTRST_CON13_HRESETN_PHP_NIU_SHIFT)            /* 0x00000002 */
#define CRU_SOFTRST_CON13_PRESETN_PHP_NIU_SHIFT            (2U)
#define CRU_SOFTRST_CON13_PRESETN_PHP_NIU_MASK             (0x1U << CRU_SOFTRST_CON13_PRESETN_PHP_NIU_SHIFT)            /* 0x00000004 */
#define CRU_SOFTRST_CON13_HRESETN_SDMMC0_SHIFT             (3U)
#define CRU_SOFTRST_CON13_HRESETN_SDMMC0_MASK              (0x1U << CRU_SOFTRST_CON13_HRESETN_SDMMC0_SHIFT)             /* 0x00000008 */
#define CRU_SOFTRST_CON13_RESETN_SDMMC0_SHIFT              (4U)
#define CRU_SOFTRST_CON13_RESETN_SDMMC0_MASK               (0x1U << CRU_SOFTRST_CON13_RESETN_SDMMC0_SHIFT)              /* 0x00000010 */
#define CRU_SOFTRST_CON13_HRESETN_SDMMC1_SHIFT             (5U)
#define CRU_SOFTRST_CON13_HRESETN_SDMMC1_MASK              (0x1U << CRU_SOFTRST_CON13_HRESETN_SDMMC1_SHIFT)             /* 0x00000020 */
#define CRU_SOFTRST_CON13_RESETN_SDMMC1_SHIFT              (6U)
#define CRU_SOFTRST_CON13_RESETN_SDMMC1_MASK               (0x1U << CRU_SOFTRST_CON13_RESETN_SDMMC1_SHIFT)              /* 0x00000040 */
#define CRU_SOFTRST_CON13_ARESETN_GMAC0_SHIFT              (7U)
#define CRU_SOFTRST_CON13_ARESETN_GMAC0_MASK               (0x1U << CRU_SOFTRST_CON13_ARESETN_GMAC0_SHIFT)              /* 0x00000080 */
#define CRU_SOFTRST_CON13_RESETN_GMAC0_TIMESTAMP_SHIFT     (8U)
#define CRU_SOFTRST_CON13_RESETN_GMAC0_TIMESTAMP_MASK      (0x1U << CRU_SOFTRST_CON13_RESETN_GMAC0_TIMESTAMP_SHIFT)     /* 0x00000100 */
/* SOFTRST_CON14 */
#define CRU_SOFTRST_CON14_OFFSET                           (0x438U)
#define CRU_SOFTRST_CON14_ARESETN_USB_NIU_SHIFT            (0U)
#define CRU_SOFTRST_CON14_ARESETN_USB_NIU_MASK             (0x1U << CRU_SOFTRST_CON14_ARESETN_USB_NIU_SHIFT)            /* 0x00000001 */
#define CRU_SOFTRST_CON14_HRESETN_USB_NIU_SHIFT            (1U)
#define CRU_SOFTRST_CON14_HRESETN_USB_NIU_MASK             (0x1U << CRU_SOFTRST_CON14_HRESETN_USB_NIU_SHIFT)            /* 0x00000002 */
#define CRU_SOFTRST_CON14_PRESETN_USB_NIU_SHIFT            (2U)
#define CRU_SOFTRST_CON14_PRESETN_USB_NIU_MASK             (0x1U << CRU_SOFTRST_CON14_PRESETN_USB_NIU_SHIFT)            /* 0x00000004 */
#define CRU_SOFTRST_CON14_PRESETN_USB_GRF_SHIFT            (3U)
#define CRU_SOFTRST_CON14_PRESETN_USB_GRF_MASK             (0x1U << CRU_SOFTRST_CON14_PRESETN_USB_GRF_SHIFT)            /* 0x00000008 */
#define CRU_SOFTRST_CON14_HRESETN_USB2HOST0_SHIFT          (4U)
#define CRU_SOFTRST_CON14_HRESETN_USB2HOST0_MASK           (0x1U << CRU_SOFTRST_CON14_HRESETN_USB2HOST0_SHIFT)          /* 0x00000010 */
#define CRU_SOFTRST_CON14_HRESETN_USB2HOST0_ARB_SHIFT      (5U)
#define CRU_SOFTRST_CON14_HRESETN_USB2HOST0_ARB_MASK       (0x1U << CRU_SOFTRST_CON14_HRESETN_USB2HOST0_ARB_SHIFT)      /* 0x00000020 */
#define CRU_SOFTRST_CON14_RESETN_USB2HOST0_UTMI_SHIFT      (6U)
#define CRU_SOFTRST_CON14_RESETN_USB2HOST0_UTMI_MASK       (0x1U << CRU_SOFTRST_CON14_RESETN_USB2HOST0_UTMI_SHIFT)      /* 0x00000040 */
#define CRU_SOFTRST_CON14_HRESETN_USB2HOST1_SHIFT          (7U)
#define CRU_SOFTRST_CON14_HRESETN_USB2HOST1_MASK           (0x1U << CRU_SOFTRST_CON14_HRESETN_USB2HOST1_SHIFT)          /* 0x00000080 */
#define CRU_SOFTRST_CON14_HRESETN_USB2HOST1_ARB_SHIFT      (8U)
#define CRU_SOFTRST_CON14_HRESETN_USB2HOST1_ARB_MASK       (0x1U << CRU_SOFTRST_CON14_HRESETN_USB2HOST1_ARB_SHIFT)      /* 0x00000100 */
#define CRU_SOFTRST_CON14_RESETN_USB2HOST1_UTMI_SHIFT      (9U)
#define CRU_SOFTRST_CON14_RESETN_USB2HOST1_UTMI_MASK       (0x1U << CRU_SOFTRST_CON14_RESETN_USB2HOST1_UTMI_SHIFT)      /* 0x00000200 */
#define CRU_SOFTRST_CON14_HRESETN_SDMMC2_SHIFT             (10U)
#define CRU_SOFTRST_CON14_HRESETN_SDMMC2_MASK              (0x1U << CRU_SOFTRST_CON14_HRESETN_SDMMC2_SHIFT)             /* 0x00000400 */
#define CRU_SOFTRST_CON14_RESETN_SDMMC2_SHIFT              (11U)
#define CRU_SOFTRST_CON14_RESETN_SDMMC2_MASK               (0x1U << CRU_SOFTRST_CON14_RESETN_SDMMC2_SHIFT)              /* 0x00000800 */
#define CRU_SOFTRST_CON14_ARESETN_GMAC1_SHIFT              (12U)
#define CRU_SOFTRST_CON14_ARESETN_GMAC1_MASK               (0x1U << CRU_SOFTRST_CON14_ARESETN_GMAC1_SHIFT)              /* 0x00001000 */
#define CRU_SOFTRST_CON14_RESETN_GMAC1_TIMESTAMP_SHIFT     (13U)
#define CRU_SOFTRST_CON14_RESETN_GMAC1_TIMESTAMP_MASK      (0x1U << CRU_SOFTRST_CON14_RESETN_GMAC1_TIMESTAMP_SHIFT)     /* 0x00002000 */
/* SOFTRST_CON15 */
#define CRU_SOFTRST_CON15_OFFSET                           (0x43CU)
#define CRU_SOFTRST_CON15_ARESETN_VI_NIU_SHIFT             (0U)
#define CRU_SOFTRST_CON15_ARESETN_VI_NIU_MASK              (0x1U << CRU_SOFTRST_CON15_ARESETN_VI_NIU_SHIFT)             /* 0x00000001 */
#define CRU_SOFTRST_CON15_HRESETN_VI_NIU_SHIFT             (1U)
#define CRU_SOFTRST_CON15_HRESETN_VI_NIU_MASK              (0x1U << CRU_SOFTRST_CON15_HRESETN_VI_NIU_SHIFT)             /* 0x00000002 */
#define CRU_SOFTRST_CON15_PRESETN_VI_NIU_SHIFT             (2U)
#define CRU_SOFTRST_CON15_PRESETN_VI_NIU_MASK              (0x1U << CRU_SOFTRST_CON15_PRESETN_VI_NIU_SHIFT)             /* 0x00000004 */
#define CRU_SOFTRST_CON15_ARESETN_VICAP1_SHIFT             (7U)
#define CRU_SOFTRST_CON15_ARESETN_VICAP1_MASK              (0x1U << CRU_SOFTRST_CON15_ARESETN_VICAP1_SHIFT)             /* 0x00000080 */
#define CRU_SOFTRST_CON15_HRESETN_VICAP1_SHIFT             (8U)
#define CRU_SOFTRST_CON15_HRESETN_VICAP1_MASK              (0x1U << CRU_SOFTRST_CON15_HRESETN_VICAP1_SHIFT)             /* 0x00000100 */
#define CRU_SOFTRST_CON15_DRESETN_VICAP1_SHIFT             (9U)
#define CRU_SOFTRST_CON15_DRESETN_VICAP1_MASK              (0x1U << CRU_SOFTRST_CON15_DRESETN_VICAP1_SHIFT)             /* 0x00000200 */
#define CRU_SOFTRST_CON15_IRESETN_VICAP1_SHIFT             (10U)
#define CRU_SOFTRST_CON15_IRESETN_VICAP1_MASK              (0x1U << CRU_SOFTRST_CON15_IRESETN_VICAP1_SHIFT)             /* 0x00000400 */
#define CRU_SOFTRST_CON15_PRESETN_VICAP1_SHIFT             (11U)
#define CRU_SOFTRST_CON15_PRESETN_VICAP1_MASK              (0x1U << CRU_SOFTRST_CON15_PRESETN_VICAP1_SHIFT)             /* 0x00000800 */
#define CRU_SOFTRST_CON15_HRESETN_ISP_SHIFT                (12U)
#define CRU_SOFTRST_CON15_HRESETN_ISP_MASK                 (0x1U << CRU_SOFTRST_CON15_HRESETN_ISP_SHIFT)                /* 0x00001000 */
#define CRU_SOFTRST_CON15_RESETN_ISP_SHIFT                 (13U)
#define CRU_SOFTRST_CON15_RESETN_ISP_MASK                  (0x1U << CRU_SOFTRST_CON15_RESETN_ISP_SHIFT)                 /* 0x00002000 */
#define CRU_SOFTRST_CON15_PRESETN_CSI2HOST1_SHIFT          (15U)
#define CRU_SOFTRST_CON15_PRESETN_CSI2HOST1_MASK           (0x1U << CRU_SOFTRST_CON15_PRESETN_CSI2HOST1_SHIFT)          /* 0x00008000 */
/* SOFTRST_CON16 */
#define CRU_SOFTRST_CON16_OFFSET                           (0x440U)
#define CRU_SOFTRST_CON16_ARESETN_VO_NIU_SHIFT             (0U)
#define CRU_SOFTRST_CON16_ARESETN_VO_NIU_MASK              (0x1U << CRU_SOFTRST_CON16_ARESETN_VO_NIU_SHIFT)             /* 0x00000001 */
#define CRU_SOFTRST_CON16_HRESETN_VO_NIU_SHIFT             (1U)
#define CRU_SOFTRST_CON16_HRESETN_VO_NIU_MASK              (0x1U << CRU_SOFTRST_CON16_HRESETN_VO_NIU_SHIFT)             /* 0x00000002 */
#define CRU_SOFTRST_CON16_PRESETN_VO_NIU_SHIFT             (2U)
#define CRU_SOFTRST_CON16_PRESETN_VO_NIU_MASK              (0x1U << CRU_SOFTRST_CON16_PRESETN_VO_NIU_SHIFT)             /* 0x00000004 */
#define CRU_SOFTRST_CON16_ARESETN_VOP_NIU_SHIFT            (3U)
#define CRU_SOFTRST_CON16_ARESETN_VOP_NIU_MASK             (0x1U << CRU_SOFTRST_CON16_ARESETN_VOP_NIU_SHIFT)            /* 0x00000008 */
#define CRU_SOFTRST_CON16_ARESETN_VOP_SHIFT                (4U)
#define CRU_SOFTRST_CON16_ARESETN_VOP_MASK                 (0x1U << CRU_SOFTRST_CON16_ARESETN_VOP_SHIFT)                /* 0x00000010 */
#define CRU_SOFTRST_CON16_HRESETN_VOP_SHIFT                (5U)
#define CRU_SOFTRST_CON16_HRESETN_VOP_MASK                 (0x1U << CRU_SOFTRST_CON16_HRESETN_VOP_SHIFT)                /* 0x00000020 */
#define CRU_SOFTRST_CON16_DRESETN0_VOP_SHIFT               (6U)
#define CRU_SOFTRST_CON16_DRESETN0_VOP_MASK                (0x1U << CRU_SOFTRST_CON16_DRESETN0_VOP_SHIFT)               /* 0x00000040 */
#define CRU_SOFTRST_CON16_DRESETN1_VOP_SHIFT               (7U)
#define CRU_SOFTRST_CON16_DRESETN1_VOP_MASK                (0x1U << CRU_SOFTRST_CON16_DRESETN1_VOP_SHIFT)               /* 0x00000080 */
#define CRU_SOFTRST_CON16_DRESETN2_VOP_SHIFT               (8U)
#define CRU_SOFTRST_CON16_DRESETN2_VOP_MASK                (0x1U << CRU_SOFTRST_CON16_DRESETN2_VOP_SHIFT)               /* 0x00000100 */
#define CRU_SOFTRST_CON16_RESETN_VOP_PWM_SHIFT             (9U)
#define CRU_SOFTRST_CON16_RESETN_VOP_PWM_MASK              (0x1U << CRU_SOFTRST_CON16_RESETN_VOP_PWM_SHIFT)             /* 0x00000200 */
#define CRU_SOFTRST_CON16_ARESETN_HDCP_SHIFT               (10U)
#define CRU_SOFTRST_CON16_ARESETN_HDCP_MASK                (0x1U << CRU_SOFTRST_CON16_ARESETN_HDCP_SHIFT)               /* 0x00000400 */
#define CRU_SOFTRST_CON16_HRESETN_HDCP_SHIFT               (11U)
#define CRU_SOFTRST_CON16_HRESETN_HDCP_MASK                (0x1U << CRU_SOFTRST_CON16_HRESETN_HDCP_SHIFT)               /* 0x00000800 */
#define CRU_SOFTRST_CON16_PRESETN_HDCP_SHIFT               (12U)
#define CRU_SOFTRST_CON16_PRESETN_HDCP_MASK                (0x1U << CRU_SOFTRST_CON16_PRESETN_HDCP_SHIFT)               /* 0x00001000 */
#define CRU_SOFTRST_CON16_PRESETN_HDMI_HOST_SHIFT          (14U)
#define CRU_SOFTRST_CON16_PRESETN_HDMI_HOST_MASK           (0x1U << CRU_SOFTRST_CON16_PRESETN_HDMI_HOST_SHIFT)          /* 0x00004000 */
#define CRU_SOFTRST_CON16_RESETN_HDMI_HOST_SHIFT           (15U)
#define CRU_SOFTRST_CON16_RESETN_HDMI_HOST_MASK            (0x1U << CRU_SOFTRST_CON16_RESETN_HDMI_HOST_SHIFT)           /* 0x00008000 */
/* SOFTRST_CON17 */
#define CRU_SOFTRST_CON17_OFFSET                           (0x444U)
#define CRU_SOFTRST_CON17_PRESETN_DSITX_0_SHIFT            (0U)
#define CRU_SOFTRST_CON17_PRESETN_DSITX_0_MASK             (0x1U << CRU_SOFTRST_CON17_PRESETN_DSITX_0_SHIFT)            /* 0x00000001 */
#define CRU_SOFTRST_CON17_PRESETN_DSITX_1_SHIFT            (1U)
#define CRU_SOFTRST_CON17_PRESETN_DSITX_1_MASK             (0x1U << CRU_SOFTRST_CON17_PRESETN_DSITX_1_SHIFT)            /* 0x00000002 */
#define CRU_SOFTRST_CON17_PRESETN_EDP_CTRL_SHIFT           (2U)
#define CRU_SOFTRST_CON17_PRESETN_EDP_CTRL_MASK            (0x1U << CRU_SOFTRST_CON17_PRESETN_EDP_CTRL_SHIFT)           /* 0x00000004 */
#define CRU_SOFTRST_CON17_RESETN_EDP_24M_SHIFT             (3U)
#define CRU_SOFTRST_CON17_RESETN_EDP_24M_MASK              (0x1U << CRU_SOFTRST_CON17_RESETN_EDP_24M_SHIFT)             /* 0x00000008 */
#define CRU_SOFTRST_CON17_ARESETN_VPU_NIU_SHIFT            (8U)
#define CRU_SOFTRST_CON17_ARESETN_VPU_NIU_MASK             (0x1U << CRU_SOFTRST_CON17_ARESETN_VPU_NIU_SHIFT)            /* 0x00000100 */
#define CRU_SOFTRST_CON17_HRESETN_VPU_NIU_SHIFT            (9U)
#define CRU_SOFTRST_CON17_HRESETN_VPU_NIU_MASK             (0x1U << CRU_SOFTRST_CON17_HRESETN_VPU_NIU_SHIFT)            /* 0x00000200 */
#define CRU_SOFTRST_CON17_ARESETN_VPU_SHIFT                (10U)
#define CRU_SOFTRST_CON17_ARESETN_VPU_MASK                 (0x1U << CRU_SOFTRST_CON17_ARESETN_VPU_SHIFT)                /* 0x00000400 */
#define CRU_SOFTRST_CON17_HRESETN_VPU_SHIFT                (11U)
#define CRU_SOFTRST_CON17_HRESETN_VPU_MASK                 (0x1U << CRU_SOFTRST_CON17_HRESETN_VPU_SHIFT)                /* 0x00000800 */
#define CRU_SOFTRST_CON17_HRESETN_EINK_SHIFT               (14U)
#define CRU_SOFTRST_CON17_HRESETN_EINK_MASK                (0x1U << CRU_SOFTRST_CON17_HRESETN_EINK_SHIFT)               /* 0x00004000 */
#define CRU_SOFTRST_CON17_PRESETN_EINK_SHIFT               (15U)
#define CRU_SOFTRST_CON17_PRESETN_EINK_MASK                (0x1U << CRU_SOFTRST_CON17_PRESETN_EINK_SHIFT)               /* 0x00008000 */
/* SOFTRST_CON18 */
#define CRU_SOFTRST_CON18_OFFSET                           (0x448U)
#define CRU_SOFTRST_CON18_ARESETN_RGA_NIU_SHIFT            (0U)
#define CRU_SOFTRST_CON18_ARESETN_RGA_NIU_MASK             (0x1U << CRU_SOFTRST_CON18_ARESETN_RGA_NIU_SHIFT)            /* 0x00000001 */
#define CRU_SOFTRST_CON18_HRESETN_RGA_NIU_SHIFT            (1U)
#define CRU_SOFTRST_CON18_HRESETN_RGA_NIU_MASK             (0x1U << CRU_SOFTRST_CON18_HRESETN_RGA_NIU_SHIFT)            /* 0x00000002 */
#define CRU_SOFTRST_CON18_PRESETN_RGA_NIU_SHIFT            (2U)
#define CRU_SOFTRST_CON18_PRESETN_RGA_NIU_MASK             (0x1U << CRU_SOFTRST_CON18_PRESETN_RGA_NIU_SHIFT)            /* 0x00000004 */
#define CRU_SOFTRST_CON18_ARESETN_RGA_SHIFT                (4U)
#define CRU_SOFTRST_CON18_ARESETN_RGA_MASK                 (0x1U << CRU_SOFTRST_CON18_ARESETN_RGA_SHIFT)                /* 0x00000010 */
#define CRU_SOFTRST_CON18_HRESETN_RGA_SHIFT                (5U)
#define CRU_SOFTRST_CON18_HRESETN_RGA_MASK                 (0x1U << CRU_SOFTRST_CON18_HRESETN_RGA_SHIFT)                /* 0x00000020 */
#define CRU_SOFTRST_CON18_RESETN_RGA_CORE_SHIFT            (6U)
#define CRU_SOFTRST_CON18_RESETN_RGA_CORE_MASK             (0x1U << CRU_SOFTRST_CON18_RESETN_RGA_CORE_SHIFT)            /* 0x00000040 */
#define CRU_SOFTRST_CON18_ARESETN_IEP_SHIFT                (7U)
#define CRU_SOFTRST_CON18_ARESETN_IEP_MASK                 (0x1U << CRU_SOFTRST_CON18_ARESETN_IEP_SHIFT)                /* 0x00000080 */
#define CRU_SOFTRST_CON18_HRESETN_IEP_SHIFT                (8U)
#define CRU_SOFTRST_CON18_HRESETN_IEP_MASK                 (0x1U << CRU_SOFTRST_CON18_HRESETN_IEP_SHIFT)                /* 0x00000100 */
#define CRU_SOFTRST_CON18_RESETN_IEP_CORE_SHIFT            (9U)
#define CRU_SOFTRST_CON18_RESETN_IEP_CORE_MASK             (0x1U << CRU_SOFTRST_CON18_RESETN_IEP_CORE_SHIFT)            /* 0x00000200 */
#define CRU_SOFTRST_CON18_HRESETN_EBC_SHIFT                (10U)
#define CRU_SOFTRST_CON18_HRESETN_EBC_MASK                 (0x1U << CRU_SOFTRST_CON18_HRESETN_EBC_SHIFT)                /* 0x00000400 */
#define CRU_SOFTRST_CON18_DRESETN_EBC_SHIFT                (11U)
#define CRU_SOFTRST_CON18_DRESETN_EBC_MASK                 (0x1U << CRU_SOFTRST_CON18_DRESETN_EBC_SHIFT)                /* 0x00000800 */
#define CRU_SOFTRST_CON18_ARESETN_JDEC_SHIFT               (12U)
#define CRU_SOFTRST_CON18_ARESETN_JDEC_MASK                (0x1U << CRU_SOFTRST_CON18_ARESETN_JDEC_SHIFT)               /* 0x00001000 */
#define CRU_SOFTRST_CON18_HRESETN_JDEC_SHIFT               (13U)
#define CRU_SOFTRST_CON18_HRESETN_JDEC_MASK                (0x1U << CRU_SOFTRST_CON18_HRESETN_JDEC_SHIFT)               /* 0x00002000 */
#define CRU_SOFTRST_CON18_ARESETN_JENC_SHIFT               (14U)
#define CRU_SOFTRST_CON18_ARESETN_JENC_MASK                (0x1U << CRU_SOFTRST_CON18_ARESETN_JENC_SHIFT)               /* 0x00004000 */
#define CRU_SOFTRST_CON18_HRESETN_JENC_SHIFT               (15U)
#define CRU_SOFTRST_CON18_HRESETN_JENC_MASK                (0x1U << CRU_SOFTRST_CON18_HRESETN_JENC_SHIFT)               /* 0x00008000 */
/* SOFTRST_CON19 */
#define CRU_SOFTRST_CON19_OFFSET                           (0x44CU)
#define CRU_SOFTRST_CON19_ARESETN_VENC_NIU_SHIFT           (0U)
#define CRU_SOFTRST_CON19_ARESETN_VENC_NIU_MASK            (0x1U << CRU_SOFTRST_CON19_ARESETN_VENC_NIU_SHIFT)           /* 0x00000001 */
#define CRU_SOFTRST_CON19_HRESETN_VENC_NIU_SHIFT           (1U)
#define CRU_SOFTRST_CON19_HRESETN_VENC_NIU_MASK            (0x1U << CRU_SOFTRST_CON19_HRESETN_VENC_NIU_SHIFT)           /* 0x00000002 */
#define CRU_SOFTRST_CON19_ARESETN_RKVENC_SHIFT             (3U)
#define CRU_SOFTRST_CON19_ARESETN_RKVENC_MASK              (0x1U << CRU_SOFTRST_CON19_ARESETN_RKVENC_SHIFT)             /* 0x00000008 */
#define CRU_SOFTRST_CON19_HRESETN_RKVENC_SHIFT             (4U)
#define CRU_SOFTRST_CON19_HRESETN_RKVENC_MASK              (0x1U << CRU_SOFTRST_CON19_HRESETN_RKVENC_SHIFT)             /* 0x00000010 */
#define CRU_SOFTRST_CON19_RESETN_RKVENC_CORE_SHIFT         (5U)
#define CRU_SOFTRST_CON19_RESETN_RKVENC_CORE_MASK          (0x1U << CRU_SOFTRST_CON19_RESETN_RKVENC_CORE_SHIFT)         /* 0x00000020 */
/* SOFTRST_CON20 */
#define CRU_SOFTRST_CON20_OFFSET                           (0x450U)
#define CRU_SOFTRST_CON20_ARESETN_RKVDEC_NIU_SHIFT         (0U)
#define CRU_SOFTRST_CON20_ARESETN_RKVDEC_NIU_MASK          (0x1U << CRU_SOFTRST_CON20_ARESETN_RKVDEC_NIU_SHIFT)         /* 0x00000001 */
#define CRU_SOFTRST_CON20_HRESETN_RKVDEC_NIU_SHIFT         (1U)
#define CRU_SOFTRST_CON20_HRESETN_RKVDEC_NIU_MASK          (0x1U << CRU_SOFTRST_CON20_HRESETN_RKVDEC_NIU_SHIFT)         /* 0x00000002 */
#define CRU_SOFTRST_CON20_ARESETN_RKVDEC_SHIFT             (2U)
#define CRU_SOFTRST_CON20_ARESETN_RKVDEC_MASK              (0x1U << CRU_SOFTRST_CON20_ARESETN_RKVDEC_SHIFT)             /* 0x00000004 */
#define CRU_SOFTRST_CON20_HRESETN_RKVDEC_SHIFT             (3U)
#define CRU_SOFTRST_CON20_HRESETN_RKVDEC_MASK              (0x1U << CRU_SOFTRST_CON20_HRESETN_RKVDEC_SHIFT)             /* 0x00000008 */
#define CRU_SOFTRST_CON20_RESETN_RKVDEC_CA_SHIFT           (4U)
#define CRU_SOFTRST_CON20_RESETN_RKVDEC_CA_MASK            (0x1U << CRU_SOFTRST_CON20_RESETN_RKVDEC_CA_SHIFT)           /* 0x00000010 */
#define CRU_SOFTRST_CON20_RESETN_RKVDEC_CORE_SHIFT         (5U)
#define CRU_SOFTRST_CON20_RESETN_RKVDEC_CORE_MASK          (0x1U << CRU_SOFTRST_CON20_RESETN_RKVDEC_CORE_SHIFT)         /* 0x00000020 */
#define CRU_SOFTRST_CON20_RESETN_RKVDEC_HEVC_CA_SHIFT      (6U)
#define CRU_SOFTRST_CON20_RESETN_RKVDEC_HEVC_CA_MASK       (0x1U << CRU_SOFTRST_CON20_RESETN_RKVDEC_HEVC_CA_SHIFT)      /* 0x00000040 */
/* SOFTRST_CON21 */
#define CRU_SOFTRST_CON21_OFFSET                           (0x454U)
#define CRU_SOFTRST_CON21_ARESETN_BUS_NIU_SHIFT            (0U)
#define CRU_SOFTRST_CON21_ARESETN_BUS_NIU_MASK             (0x1U << CRU_SOFTRST_CON21_ARESETN_BUS_NIU_SHIFT)            /* 0x00000001 */
#define CRU_SOFTRST_CON21_PRESETN_BUS_NIU_SHIFT            (2U)
#define CRU_SOFTRST_CON21_PRESETN_BUS_NIU_MASK             (0x1U << CRU_SOFTRST_CON21_PRESETN_BUS_NIU_SHIFT)            /* 0x00000004 */
#define CRU_SOFTRST_CON21_PRESETN_CAN0_SHIFT               (4U)
#define CRU_SOFTRST_CON21_PRESETN_CAN0_MASK                (0x1U << CRU_SOFTRST_CON21_PRESETN_CAN0_SHIFT)               /* 0x00000010 */
#define CRU_SOFTRST_CON21_RESETN_CAN0_SHIFT                (5U)
#define CRU_SOFTRST_CON21_RESETN_CAN0_MASK                 (0x1U << CRU_SOFTRST_CON21_RESETN_CAN0_SHIFT)                /* 0x00000020 */
#define CRU_SOFTRST_CON21_PRESETN_CAN1_SHIFT               (6U)
#define CRU_SOFTRST_CON21_PRESETN_CAN1_MASK                (0x1U << CRU_SOFTRST_CON21_PRESETN_CAN1_SHIFT)               /* 0x00000040 */
#define CRU_SOFTRST_CON21_RESETN_CAN1_SHIFT                (7U)
#define CRU_SOFTRST_CON21_RESETN_CAN1_MASK                 (0x1U << CRU_SOFTRST_CON21_RESETN_CAN1_SHIFT)                /* 0x00000080 */
#define CRU_SOFTRST_CON21_PRESETN_CAN2_SHIFT               (8U)
#define CRU_SOFTRST_CON21_PRESETN_CAN2_MASK                (0x1U << CRU_SOFTRST_CON21_PRESETN_CAN2_SHIFT)               /* 0x00000100 */
#define CRU_SOFTRST_CON21_RESETN_CAN2_SHIFT                (9U)
#define CRU_SOFTRST_CON21_RESETN_CAN2_MASK                 (0x1U << CRU_SOFTRST_CON21_RESETN_CAN2_SHIFT)                /* 0x00000200 */
#define CRU_SOFTRST_CON21_PRESETN_GPIO1_SHIFT              (10U)
#define CRU_SOFTRST_CON21_PRESETN_GPIO1_MASK               (0x1U << CRU_SOFTRST_CON21_PRESETN_GPIO1_SHIFT)              /* 0x00000400 */
#define CRU_SOFTRST_CON21_DBRESETN_GPIO1_SHIFT             (11U)
#define CRU_SOFTRST_CON21_DBRESETN_GPIO1_MASK              (0x1U << CRU_SOFTRST_CON21_DBRESETN_GPIO1_SHIFT)             /* 0x00000800 */
#define CRU_SOFTRST_CON21_PRESETN_GPIO2_SHIFT              (12U)
#define CRU_SOFTRST_CON21_PRESETN_GPIO2_MASK               (0x1U << CRU_SOFTRST_CON21_PRESETN_GPIO2_SHIFT)              /* 0x00001000 */
#define CRU_SOFTRST_CON21_DBRESETN_GPIO2_SHIFT             (13U)
#define CRU_SOFTRST_CON21_DBRESETN_GPIO2_MASK              (0x1U << CRU_SOFTRST_CON21_DBRESETN_GPIO2_SHIFT)             /* 0x00002000 */
#define CRU_SOFTRST_CON21_PRESETN_GPIO3_SHIFT              (14U)
#define CRU_SOFTRST_CON21_PRESETN_GPIO3_MASK               (0x1U << CRU_SOFTRST_CON21_PRESETN_GPIO3_SHIFT)              /* 0x00004000 */
#define CRU_SOFTRST_CON21_DBRESETN_GPIO3_SHIFT             (15U)
#define CRU_SOFTRST_CON21_DBRESETN_GPIO3_MASK              (0x1U << CRU_SOFTRST_CON21_DBRESETN_GPIO3_SHIFT)             /* 0x00008000 */
/* SOFTRST_CON22 */
#define CRU_SOFTRST_CON22_OFFSET                           (0x458U)
#define CRU_SOFTRST_CON22_PRESETN_GPIO4_SHIFT              (0U)
#define CRU_SOFTRST_CON22_PRESETN_GPIO4_MASK               (0x1U << CRU_SOFTRST_CON22_PRESETN_GPIO4_SHIFT)              /* 0x00000001 */
#define CRU_SOFTRST_CON22_DBRESETN_GPIO4_SHIFT             (1U)
#define CRU_SOFTRST_CON22_DBRESETN_GPIO4_MASK              (0x1U << CRU_SOFTRST_CON22_DBRESETN_GPIO4_SHIFT)             /* 0x00000002 */
#define CRU_SOFTRST_CON22_PRESETN_I2C1_SHIFT               (2U)
#define CRU_SOFTRST_CON22_PRESETN_I2C1_MASK                (0x1U << CRU_SOFTRST_CON22_PRESETN_I2C1_SHIFT)               /* 0x00000004 */
#define CRU_SOFTRST_CON22_RESETN_I2C1_SHIFT                (3U)
#define CRU_SOFTRST_CON22_RESETN_I2C1_MASK                 (0x1U << CRU_SOFTRST_CON22_RESETN_I2C1_SHIFT)                /* 0x00000008 */
#define CRU_SOFTRST_CON22_PRESETN_I2C2_SHIFT               (4U)
#define CRU_SOFTRST_CON22_PRESETN_I2C2_MASK                (0x1U << CRU_SOFTRST_CON22_PRESETN_I2C2_SHIFT)               /* 0x00000010 */
#define CRU_SOFTRST_CON22_RESETN_I2C2_SHIFT                (5U)
#define CRU_SOFTRST_CON22_RESETN_I2C2_MASK                 (0x1U << CRU_SOFTRST_CON22_RESETN_I2C2_SHIFT)                /* 0x00000020 */
#define CRU_SOFTRST_CON22_PRESETN_I2C3_SHIFT               (6U)
#define CRU_SOFTRST_CON22_PRESETN_I2C3_MASK                (0x1U << CRU_SOFTRST_CON22_PRESETN_I2C3_SHIFT)               /* 0x00000040 */
#define CRU_SOFTRST_CON22_RESETN_I2C3_SHIFT                (7U)
#define CRU_SOFTRST_CON22_RESETN_I2C3_MASK                 (0x1U << CRU_SOFTRST_CON22_RESETN_I2C3_SHIFT)                /* 0x00000080 */
#define CRU_SOFTRST_CON22_PRESETN_I2C4_SHIFT               (8U)
#define CRU_SOFTRST_CON22_PRESETN_I2C4_MASK                (0x1U << CRU_SOFTRST_CON22_PRESETN_I2C4_SHIFT)               /* 0x00000100 */
#define CRU_SOFTRST_CON22_RESETN_I2C4_SHIFT                (9U)
#define CRU_SOFTRST_CON22_RESETN_I2C4_MASK                 (0x1U << CRU_SOFTRST_CON22_RESETN_I2C4_SHIFT)                /* 0x00000200 */
#define CRU_SOFTRST_CON22_PRESETN_I2C5_SHIFT               (10U)
#define CRU_SOFTRST_CON22_PRESETN_I2C5_MASK                (0x1U << CRU_SOFTRST_CON22_PRESETN_I2C5_SHIFT)               /* 0x00000400 */
#define CRU_SOFTRST_CON22_RESETN_I2C5_SHIFT                (11U)
#define CRU_SOFTRST_CON22_RESETN_I2C5_MASK                 (0x1U << CRU_SOFTRST_CON22_RESETN_I2C5_SHIFT)                /* 0x00000800 */
#define CRU_SOFTRST_CON22_PRESETN_OTPC_NS_SHIFT            (12U)
#define CRU_SOFTRST_CON22_PRESETN_OTPC_NS_MASK             (0x1U << CRU_SOFTRST_CON22_PRESETN_OTPC_NS_SHIFT)            /* 0x00001000 */
#define CRU_SOFTRST_CON22_RESETN_OTPC_NS_SBPI_SHIFT        (13U)
#define CRU_SOFTRST_CON22_RESETN_OTPC_NS_SBPI_MASK         (0x1U << CRU_SOFTRST_CON22_RESETN_OTPC_NS_SBPI_SHIFT)        /* 0x00002000 */
#define CRU_SOFTRST_CON22_RESETN_OTPC_NS_USR_SHIFT         (14U)
#define CRU_SOFTRST_CON22_RESETN_OTPC_NS_USR_MASK          (0x1U << CRU_SOFTRST_CON22_RESETN_OTPC_NS_USR_SHIFT)         /* 0x00004000 */
/* SOFTRST_CON23 */
#define CRU_SOFTRST_CON23_OFFSET                           (0x45CU)
#define CRU_SOFTRST_CON23_PRESETN_PWM1_SHIFT               (0U)
#define CRU_SOFTRST_CON23_PRESETN_PWM1_MASK                (0x1U << CRU_SOFTRST_CON23_PRESETN_PWM1_SHIFT)               /* 0x00000001 */
#define CRU_SOFTRST_CON23_RESETN_PWM1_SHIFT                (1U)
#define CRU_SOFTRST_CON23_RESETN_PWM1_MASK                 (0x1U << CRU_SOFTRST_CON23_RESETN_PWM1_SHIFT)                /* 0x00000002 */
#define CRU_SOFTRST_CON23_PRESETN_PWM2_SHIFT               (2U)
#define CRU_SOFTRST_CON23_PRESETN_PWM2_MASK                (0x1U << CRU_SOFTRST_CON23_PRESETN_PWM2_SHIFT)               /* 0x00000004 */
#define CRU_SOFTRST_CON23_RESETN_PWM2_SHIFT                (3U)
#define CRU_SOFTRST_CON23_RESETN_PWM2_MASK                 (0x1U << CRU_SOFTRST_CON23_RESETN_PWM2_SHIFT)                /* 0x00000008 */
#define CRU_SOFTRST_CON23_PRESETN_PWM3_SHIFT               (4U)
#define CRU_SOFTRST_CON23_PRESETN_PWM3_MASK                (0x1U << CRU_SOFTRST_CON23_PRESETN_PWM3_SHIFT)               /* 0x00000010 */
#define CRU_SOFTRST_CON23_RESETN_PWM3_SHIFT                (5U)
#define CRU_SOFTRST_CON23_RESETN_PWM3_MASK                 (0x1U << CRU_SOFTRST_CON23_RESETN_PWM3_SHIFT)                /* 0x00000020 */
#define CRU_SOFTRST_CON23_PRESETN_SPI0_SHIFT               (6U)
#define CRU_SOFTRST_CON23_PRESETN_SPI0_MASK                (0x1U << CRU_SOFTRST_CON23_PRESETN_SPI0_SHIFT)               /* 0x00000040 */
#define CRU_SOFTRST_CON23_RESETN_SPI0_SHIFT                (7U)
#define CRU_SOFTRST_CON23_RESETN_SPI0_MASK                 (0x1U << CRU_SOFTRST_CON23_RESETN_SPI0_SHIFT)                /* 0x00000080 */
#define CRU_SOFTRST_CON23_PRESETN_SPI1_SHIFT               (8U)
#define CRU_SOFTRST_CON23_PRESETN_SPI1_MASK                (0x1U << CRU_SOFTRST_CON23_PRESETN_SPI1_SHIFT)               /* 0x00000100 */
#define CRU_SOFTRST_CON23_RESETN_SPI1_SHIFT                (9U)
#define CRU_SOFTRST_CON23_RESETN_SPI1_MASK                 (0x1U << CRU_SOFTRST_CON23_RESETN_SPI1_SHIFT)                /* 0x00000200 */
#define CRU_SOFTRST_CON23_PRESETN_SPI2_SHIFT               (10U)
#define CRU_SOFTRST_CON23_PRESETN_SPI2_MASK                (0x1U << CRU_SOFTRST_CON23_PRESETN_SPI2_SHIFT)               /* 0x00000400 */
#define CRU_SOFTRST_CON23_RESETN_SPI2_SHIFT                (11U)
#define CRU_SOFTRST_CON23_RESETN_SPI2_MASK                 (0x1U << CRU_SOFTRST_CON23_RESETN_SPI2_SHIFT)                /* 0x00000800 */
#define CRU_SOFTRST_CON23_PRESETN_SPI3_SHIFT               (12U)
#define CRU_SOFTRST_CON23_PRESETN_SPI3_MASK                (0x1U << CRU_SOFTRST_CON23_PRESETN_SPI3_SHIFT)               /* 0x00001000 */
#define CRU_SOFTRST_CON23_RESETN_SPI3_SHIFT                (13U)
#define CRU_SOFTRST_CON23_RESETN_SPI3_MASK                 (0x1U << CRU_SOFTRST_CON23_RESETN_SPI3_SHIFT)                /* 0x00002000 */
/* SOFTRST_CON24 */
#define CRU_SOFTRST_CON24_OFFSET                           (0x460U)
#define CRU_SOFTRST_CON24_PRESETN_SARADC_SHIFT             (0U)
#define CRU_SOFTRST_CON24_PRESETN_SARADC_MASK              (0x1U << CRU_SOFTRST_CON24_PRESETN_SARADC_SHIFT)             /* 0x00000001 */
#define CRU_SOFTRST_CON24_PRESETN_TSADC_SHIFT              (1U)
#define CRU_SOFTRST_CON24_PRESETN_TSADC_MASK               (0x1U << CRU_SOFTRST_CON24_PRESETN_TSADC_SHIFT)              /* 0x00000002 */
#define CRU_SOFTRST_CON24_RESETN_TSADC_SHIFT               (2U)
#define CRU_SOFTRST_CON24_RESETN_TSADC_MASK                (0x1U << CRU_SOFTRST_CON24_RESETN_TSADC_SHIFT)               /* 0x00000004 */
#define CRU_SOFTRST_CON24_PRESETN_TIMER_SHIFT              (3U)
#define CRU_SOFTRST_CON24_PRESETN_TIMER_MASK               (0x1U << CRU_SOFTRST_CON24_PRESETN_TIMER_SHIFT)              /* 0x00000008 */
#define CRU_SOFTRST_CON24_RESETN_TIMER0_SHIFT              (4U)
#define CRU_SOFTRST_CON24_RESETN_TIMER0_MASK               (0x1U << CRU_SOFTRST_CON24_RESETN_TIMER0_SHIFT)              /* 0x00000010 */
#define CRU_SOFTRST_CON24_RESETN_TIMER1_SHIFT              (5U)
#define CRU_SOFTRST_CON24_RESETN_TIMER1_MASK               (0x1U << CRU_SOFTRST_CON24_RESETN_TIMER1_SHIFT)              /* 0x00000020 */
#define CRU_SOFTRST_CON24_RESETN_TIMER2_SHIFT              (6U)
#define CRU_SOFTRST_CON24_RESETN_TIMER2_MASK               (0x1U << CRU_SOFTRST_CON24_RESETN_TIMER2_SHIFT)              /* 0x00000040 */
#define CRU_SOFTRST_CON24_RESETN_TIMER3_SHIFT              (7U)
#define CRU_SOFTRST_CON24_RESETN_TIMER3_MASK               (0x1U << CRU_SOFTRST_CON24_RESETN_TIMER3_SHIFT)              /* 0x00000080 */
#define CRU_SOFTRST_CON24_RESETN_TIMER4_SHIFT              (8U)
#define CRU_SOFTRST_CON24_RESETN_TIMER4_MASK               (0x1U << CRU_SOFTRST_CON24_RESETN_TIMER4_SHIFT)              /* 0x00000100 */
#define CRU_SOFTRST_CON24_RESETN_TIMER5_SHIFT              (9U)
#define CRU_SOFTRST_CON24_RESETN_TIMER5_MASK               (0x1U << CRU_SOFTRST_CON24_RESETN_TIMER5_SHIFT)              /* 0x00000200 */
#define CRU_SOFTRST_CON24_PRESETN_UART1_SHIFT              (10U)
#define CRU_SOFTRST_CON24_PRESETN_UART1_MASK               (0x1U << CRU_SOFTRST_CON24_PRESETN_UART1_SHIFT)              /* 0x00000400 */
#define CRU_SOFTRST_CON24_SRESETN_UART1_SHIFT              (11U)
#define CRU_SOFTRST_CON24_SRESETN_UART1_MASK               (0x1U << CRU_SOFTRST_CON24_SRESETN_UART1_SHIFT)              /* 0x00000800 */
/* SOFTRST_CON25 */
#define CRU_SOFTRST_CON25_OFFSET                           (0x464U)
#define CRU_SOFTRST_CON25_PRESETN_UART2_SHIFT              (0U)
#define CRU_SOFTRST_CON25_PRESETN_UART2_MASK               (0x1U << CRU_SOFTRST_CON25_PRESETN_UART2_SHIFT)              /* 0x00000001 */
#define CRU_SOFTRST_CON25_SRESETN_UART2_SHIFT              (1U)
#define CRU_SOFTRST_CON25_SRESETN_UART2_MASK               (0x1U << CRU_SOFTRST_CON25_SRESETN_UART2_SHIFT)              /* 0x00000002 */
#define CRU_SOFTRST_CON25_PRESETN_UART3_SHIFT              (2U)
#define CRU_SOFTRST_CON25_PRESETN_UART3_MASK               (0x1U << CRU_SOFTRST_CON25_PRESETN_UART3_SHIFT)              /* 0x00000004 */
#define CRU_SOFTRST_CON25_SRESETN_UART3_SHIFT              (3U)
#define CRU_SOFTRST_CON25_SRESETN_UART3_MASK               (0x1U << CRU_SOFTRST_CON25_SRESETN_UART3_SHIFT)              /* 0x00000008 */
#define CRU_SOFTRST_CON25_PRESETN_UART4_SHIFT              (4U)
#define CRU_SOFTRST_CON25_PRESETN_UART4_MASK               (0x1U << CRU_SOFTRST_CON25_PRESETN_UART4_SHIFT)              /* 0x00000010 */
#define CRU_SOFTRST_CON25_SRESETN_UART4_SHIFT              (5U)
#define CRU_SOFTRST_CON25_SRESETN_UART4_MASK               (0x1U << CRU_SOFTRST_CON25_SRESETN_UART4_SHIFT)              /* 0x00000020 */
#define CRU_SOFTRST_CON25_PRESETN_UART5_SHIFT              (6U)
#define CRU_SOFTRST_CON25_PRESETN_UART5_MASK               (0x1U << CRU_SOFTRST_CON25_PRESETN_UART5_SHIFT)              /* 0x00000040 */
#define CRU_SOFTRST_CON25_SRESETN_UART5_SHIFT              (7U)
#define CRU_SOFTRST_CON25_SRESETN_UART5_MASK               (0x1U << CRU_SOFTRST_CON25_SRESETN_UART5_SHIFT)              /* 0x00000080 */
#define CRU_SOFTRST_CON25_PRESETN_UART6_SHIFT              (8U)
#define CRU_SOFTRST_CON25_PRESETN_UART6_MASK               (0x1U << CRU_SOFTRST_CON25_PRESETN_UART6_SHIFT)              /* 0x00000100 */
#define CRU_SOFTRST_CON25_SRESETN_UART6_SHIFT              (9U)
#define CRU_SOFTRST_CON25_SRESETN_UART6_MASK               (0x1U << CRU_SOFTRST_CON25_SRESETN_UART6_SHIFT)              /* 0x00000200 */
#define CRU_SOFTRST_CON25_PRESETN_UART7_SHIFT              (10U)
#define CRU_SOFTRST_CON25_PRESETN_UART7_MASK               (0x1U << CRU_SOFTRST_CON25_PRESETN_UART7_SHIFT)              /* 0x00000400 */
#define CRU_SOFTRST_CON25_SRESETN_UART7_SHIFT              (11U)
#define CRU_SOFTRST_CON25_SRESETN_UART7_MASK               (0x1U << CRU_SOFTRST_CON25_SRESETN_UART7_SHIFT)              /* 0x00000800 */
#define CRU_SOFTRST_CON25_PRESETN_UART8_SHIFT              (12U)
#define CRU_SOFTRST_CON25_PRESETN_UART8_MASK               (0x1U << CRU_SOFTRST_CON25_PRESETN_UART8_SHIFT)              /* 0x00001000 */
#define CRU_SOFTRST_CON25_SRESETN_UART8_SHIFT              (13U)
#define CRU_SOFTRST_CON25_SRESETN_UART8_MASK               (0x1U << CRU_SOFTRST_CON25_SRESETN_UART8_SHIFT)              /* 0x00002000 */
#define CRU_SOFTRST_CON25_PRESETN_UART9_SHIFT              (14U)
#define CRU_SOFTRST_CON25_PRESETN_UART9_MASK               (0x1U << CRU_SOFTRST_CON25_PRESETN_UART9_SHIFT)              /* 0x00004000 */
#define CRU_SOFTRST_CON25_SRESETN_UART9_SHIFT              (15U)
#define CRU_SOFTRST_CON25_SRESETN_UART9_MASK               (0x1U << CRU_SOFTRST_CON25_SRESETN_UART9_SHIFT)              /* 0x00008000 */
/* SOFTRST_CON26 */
#define CRU_SOFTRST_CON26_OFFSET                           (0x468U)
#define CRU_SOFTRST_CON26_PRESETN_GRF_SHIFT                (0U)
#define CRU_SOFTRST_CON26_PRESETN_GRF_MASK                 (0x1U << CRU_SOFTRST_CON26_PRESETN_GRF_SHIFT)                /* 0x00000001 */
#define CRU_SOFTRST_CON26_PRESETN_GRF_VCCIO12_SHIFT        (1U)
#define CRU_SOFTRST_CON26_PRESETN_GRF_VCCIO12_MASK         (0x1U << CRU_SOFTRST_CON26_PRESETN_GRF_VCCIO12_SHIFT)        /* 0x00000002 */
#define CRU_SOFTRST_CON26_PRESETN_GRF_VCCIO34_SHIFT        (2U)
#define CRU_SOFTRST_CON26_PRESETN_GRF_VCCIO34_MASK         (0x1U << CRU_SOFTRST_CON26_PRESETN_GRF_VCCIO34_SHIFT)        /* 0x00000004 */
#define CRU_SOFTRST_CON26_PRESETN_GRF_VCCIO567_SHIFT       (3U)
#define CRU_SOFTRST_CON26_PRESETN_GRF_VCCIO567_MASK        (0x1U << CRU_SOFTRST_CON26_PRESETN_GRF_VCCIO567_SHIFT)       /* 0x00000008 */
#define CRU_SOFTRST_CON26_PRESETN_SCR_SHIFT                (4U)
#define CRU_SOFTRST_CON26_PRESETN_SCR_MASK                 (0x1U << CRU_SOFTRST_CON26_PRESETN_SCR_SHIFT)                /* 0x00000010 */
#define CRU_SOFTRST_CON26_PRESETN_WDT_NS_SHIFT             (5U)
#define CRU_SOFTRST_CON26_PRESETN_WDT_NS_MASK              (0x1U << CRU_SOFTRST_CON26_PRESETN_WDT_NS_SHIFT)             /* 0x00000020 */
#define CRU_SOFTRST_CON26_TRESETN_WDT_NS_SHIFT             (6U)
#define CRU_SOFTRST_CON26_TRESETN_WDT_NS_MASK              (0x1U << CRU_SOFTRST_CON26_TRESETN_WDT_NS_SHIFT)             /* 0x00000040 */
#define CRU_SOFTRST_CON26_PRESETN_DFT2APB_SHIFT            (7U)
#define CRU_SOFTRST_CON26_PRESETN_DFT2APB_MASK             (0x1U << CRU_SOFTRST_CON26_PRESETN_DFT2APB_SHIFT)            /* 0x00000080 */
#define CRU_SOFTRST_CON26_ARESETN_MCU_SHIFT                (10U)
#define CRU_SOFTRST_CON26_ARESETN_MCU_MASK                 (0x1U << CRU_SOFTRST_CON26_ARESETN_MCU_SHIFT)                /* 0x00000400 */
#define CRU_SOFTRST_CON26_PRESETN_INTMUX_SHIFT             (11U)
#define CRU_SOFTRST_CON26_PRESETN_INTMUX_MASK              (0x1U << CRU_SOFTRST_CON26_PRESETN_INTMUX_SHIFT)             /* 0x00000800 */
#define CRU_SOFTRST_CON26_PRESETN_MAILBOX_SHIFT            (12U)
#define CRU_SOFTRST_CON26_PRESETN_MAILBOX_MASK             (0x1U << CRU_SOFTRST_CON26_PRESETN_MAILBOX_SHIFT)            /* 0x00001000 */
/* SOFTRST_CON27 */
#define CRU_SOFTRST_CON27_OFFSET                           (0x46CU)
#define CRU_SOFTRST_CON27_ARESETN_TOP_HIGH_NIU_SHIFT       (0U)
#define CRU_SOFTRST_CON27_ARESETN_TOP_HIGH_NIU_MASK        (0x1U << CRU_SOFTRST_CON27_ARESETN_TOP_HIGH_NIU_SHIFT)       /* 0x00000001 */
#define CRU_SOFTRST_CON27_ARESETN_TOP_LOW_NIU_SHIFT        (1U)
#define CRU_SOFTRST_CON27_ARESETN_TOP_LOW_NIU_MASK         (0x1U << CRU_SOFTRST_CON27_ARESETN_TOP_LOW_NIU_SHIFT)        /* 0x00000002 */
#define CRU_SOFTRST_CON27_HRESETN_TOP_NIU_SHIFT            (2U)
#define CRU_SOFTRST_CON27_HRESETN_TOP_NIU_MASK             (0x1U << CRU_SOFTRST_CON27_HRESETN_TOP_NIU_SHIFT)            /* 0x00000004 */
#define CRU_SOFTRST_CON27_PRESETN_TOP_NIU_SHIFT            (3U)
#define CRU_SOFTRST_CON27_PRESETN_TOP_NIU_MASK             (0x1U << CRU_SOFTRST_CON27_PRESETN_TOP_NIU_SHIFT)            /* 0x00000008 */
#define CRU_SOFTRST_CON27_PRESETN_TOP_CRU_SHIFT            (6U)
#define CRU_SOFTRST_CON27_PRESETN_TOP_CRU_MASK             (0x1U << CRU_SOFTRST_CON27_PRESETN_TOP_CRU_SHIFT)            /* 0x00000040 */
#define CRU_SOFTRST_CON27_PRESETN_DDRPHY_SHIFT             (7U)
#define CRU_SOFTRST_CON27_PRESETN_DDRPHY_MASK              (0x1U << CRU_SOFTRST_CON27_PRESETN_DDRPHY_SHIFT)             /* 0x00000080 */
#define CRU_SOFTRST_CON27_RESETN_DDRPHY_SHIFT              (8U)
#define CRU_SOFTRST_CON27_RESETN_DDRPHY_MASK               (0x1U << CRU_SOFTRST_CON27_RESETN_DDRPHY_SHIFT)              /* 0x00000100 */
#define CRU_SOFTRST_CON27_PRESETN_MIPICSIPHY_SHIFT         (10U)
#define CRU_SOFTRST_CON27_PRESETN_MIPICSIPHY_MASK          (0x1U << CRU_SOFTRST_CON27_PRESETN_MIPICSIPHY_SHIFT)         /* 0x00000400 */
#define CRU_SOFTRST_CON27_PRESETN_MIPIDSIPHY0_SHIFT        (11U)
#define CRU_SOFTRST_CON27_PRESETN_MIPIDSIPHY0_MASK         (0x1U << CRU_SOFTRST_CON27_PRESETN_MIPIDSIPHY0_SHIFT)        /* 0x00000800 */
#define CRU_SOFTRST_CON27_PRESETN_MIPIDSIPHY1_SHIFT        (12U)
#define CRU_SOFTRST_CON27_PRESETN_MIPIDSIPHY1_MASK         (0x1U << CRU_SOFTRST_CON27_PRESETN_MIPIDSIPHY1_SHIFT)        /* 0x00001000 */
#define CRU_SOFTRST_CON27_PRESETN_PCIE30PHY_SHIFT          (13U)
#define CRU_SOFTRST_CON27_PRESETN_PCIE30PHY_MASK           (0x1U << CRU_SOFTRST_CON27_PRESETN_PCIE30PHY_SHIFT)          /* 0x00002000 */
#define CRU_SOFTRST_CON27_RESETN_PCIE30PHY_SHIFT           (14U)
#define CRU_SOFTRST_CON27_RESETN_PCIE30PHY_MASK            (0x1U << CRU_SOFTRST_CON27_RESETN_PCIE30PHY_SHIFT)           /* 0x00004000 */
#define CRU_SOFTRST_CON27_PRESETN_PCIE30PHY_GRF_SHIFT      (15U)
#define CRU_SOFTRST_CON27_PRESETN_PCIE30PHY_GRF_MASK       (0x1U << CRU_SOFTRST_CON27_PRESETN_PCIE30PHY_GRF_SHIFT)      /* 0x00008000 */
/* SOFTRST_CON28 */
#define CRU_SOFTRST_CON28_OFFSET                           (0x470U)
#define CRU_SOFTRST_CON28_PRESETN_APB2ASB_CHIP_LEFT_SHIFT  (0U)
#define CRU_SOFTRST_CON28_PRESETN_APB2ASB_CHIP_LEFT_MASK   (0x1U << CRU_SOFTRST_CON28_PRESETN_APB2ASB_CHIP_LEFT_SHIFT)  /* 0x00000001 */
#define CRU_SOFTRST_CON28_PRESETN_APB2ASB_CHIP_BOTTOM_SHIFT (1U)
#define CRU_SOFTRST_CON28_PRESETN_APB2ASB_CHIP_BOTTOM_MASK (0x1U << CRU_SOFTRST_CON28_PRESETN_APB2ASB_CHIP_BOTTOM_SHIFT) /* 0x00000002 */
#define CRU_SOFTRST_CON28_PRESETN_ASB2APB_CHIP_LEFT_SHIFT  (2U)
#define CRU_SOFTRST_CON28_PRESETN_ASB2APB_CHIP_LEFT_MASK   (0x1U << CRU_SOFTRST_CON28_PRESETN_ASB2APB_CHIP_LEFT_SHIFT)  /* 0x00000004 */
#define CRU_SOFTRST_CON28_PRESETN_ASB2APB_CHIP_BOTTOM_SHIFT (3U)
#define CRU_SOFTRST_CON28_PRESETN_ASB2APB_CHIP_BOTTOM_MASK (0x1U << CRU_SOFTRST_CON28_PRESETN_ASB2APB_CHIP_BOTTOM_SHIFT) /* 0x00000008 */
#define CRU_SOFTRST_CON28_PRESETN_PIPEPHY0_SHIFT           (4U)
#define CRU_SOFTRST_CON28_PRESETN_PIPEPHY0_MASK            (0x1U << CRU_SOFTRST_CON28_PRESETN_PIPEPHY0_SHIFT)           /* 0x00000010 */
#define CRU_SOFTRST_CON28_RESETN_PIPEPHY0_SHIFT            (5U)
#define CRU_SOFTRST_CON28_RESETN_PIPEPHY0_MASK             (0x1U << CRU_SOFTRST_CON28_RESETN_PIPEPHY0_SHIFT)            /* 0x00000020 */
#define CRU_SOFTRST_CON28_PRESETN_PIPEPHY1_SHIFT           (6U)
#define CRU_SOFTRST_CON28_PRESETN_PIPEPHY1_MASK            (0x1U << CRU_SOFTRST_CON28_PRESETN_PIPEPHY1_SHIFT)           /* 0x00000040 */
#define CRU_SOFTRST_CON28_RESETN_PIPEPHY1_SHIFT            (7U)
#define CRU_SOFTRST_CON28_RESETN_PIPEPHY1_MASK             (0x1U << CRU_SOFTRST_CON28_RESETN_PIPEPHY1_SHIFT)            /* 0x00000080 */
#define CRU_SOFTRST_CON28_PRESETN_PIPEPHY2_SHIFT           (8U)
#define CRU_SOFTRST_CON28_PRESETN_PIPEPHY2_MASK            (0x1U << CRU_SOFTRST_CON28_PRESETN_PIPEPHY2_SHIFT)           /* 0x00000100 */
#define CRU_SOFTRST_CON28_RESETN_PIPEPHY2_SHIFT            (9U)
#define CRU_SOFTRST_CON28_RESETN_PIPEPHY2_MASK             (0x1U << CRU_SOFTRST_CON28_RESETN_PIPEPHY2_SHIFT)            /* 0x00000200 */
#define CRU_SOFTRST_CON28_PRESETN_USB2PHY0_GRF_SHIFT       (10U)
#define CRU_SOFTRST_CON28_PRESETN_USB2PHY0_GRF_MASK        (0x1U << CRU_SOFTRST_CON28_PRESETN_USB2PHY0_GRF_SHIFT)       /* 0x00000400 */
#define CRU_SOFTRST_CON28_PRESETN_USB2PHY1_GRF_SHIFT       (11U)
#define CRU_SOFTRST_CON28_PRESETN_USB2PHY1_GRF_MASK        (0x1U << CRU_SOFTRST_CON28_PRESETN_USB2PHY1_GRF_SHIFT)       /* 0x00000800 */
#define CRU_SOFTRST_CON28_PRESETN_CPU_BOOST_SHIFT          (12U)
#define CRU_SOFTRST_CON28_PRESETN_CPU_BOOST_MASK           (0x1U << CRU_SOFTRST_CON28_PRESETN_CPU_BOOST_SHIFT)          /* 0x00001000 */
#define CRU_SOFTRST_CON28_RESETN_CPU_BOOST_SHIFT           (13U)
#define CRU_SOFTRST_CON28_RESETN_CPU_BOOST_MASK            (0x1U << CRU_SOFTRST_CON28_RESETN_CPU_BOOST_SHIFT)           /* 0x00002000 */
#define CRU_SOFTRST_CON28_PRESETN_OTPPHY_SHIFT             (14U)
#define CRU_SOFTRST_CON28_PRESETN_OTPPHY_MASK              (0x1U << CRU_SOFTRST_CON28_PRESETN_OTPPHY_SHIFT)             /* 0x00004000 */
#define CRU_SOFTRST_CON28_RESETN_OTPPHY_SHIFT              (15U)
#define CRU_SOFTRST_CON28_RESETN_OTPPHY_MASK               (0x1U << CRU_SOFTRST_CON28_RESETN_OTPPHY_SHIFT)              /* 0x00008000 */
/* SOFTRST_CON29 */
#define CRU_SOFTRST_CON29_OFFSET                           (0x474U)
#define CRU_SOFTRST_CON29_RESETN_USB2PHY0_POR_SHIFT        (0U)
#define CRU_SOFTRST_CON29_RESETN_USB2PHY0_POR_MASK         (0x1U << CRU_SOFTRST_CON29_RESETN_USB2PHY0_POR_SHIFT)        /* 0x00000001 */
#define CRU_SOFTRST_CON29_RESETN_USB2PHY0_USB3OTG0_SHIFT   (1U)
#define CRU_SOFTRST_CON29_RESETN_USB2PHY0_USB3OTG0_MASK    (0x1U << CRU_SOFTRST_CON29_RESETN_USB2PHY0_USB3OTG0_SHIFT)   /* 0x00000002 */
#define CRU_SOFTRST_CON29_RESETN_USB2PHY0_USB3OTG1_SHIFT   (2U)
#define CRU_SOFTRST_CON29_RESETN_USB2PHY0_USB3OTG1_MASK    (0x1U << CRU_SOFTRST_CON29_RESETN_USB2PHY0_USB3OTG1_SHIFT)   /* 0x00000004 */
#define CRU_SOFTRST_CON29_RESETN_USB2PHY1_POR_SHIFT        (3U)
#define CRU_SOFTRST_CON29_RESETN_USB2PHY1_POR_MASK         (0x1U << CRU_SOFTRST_CON29_RESETN_USB2PHY1_POR_SHIFT)        /* 0x00000008 */
#define CRU_SOFTRST_CON29_RESETN_USB2PHY1_USB2HOST0_SHIFT  (4U)
#define CRU_SOFTRST_CON29_RESETN_USB2PHY1_USB2HOST0_MASK   (0x1U << CRU_SOFTRST_CON29_RESETN_USB2PHY1_USB2HOST0_SHIFT)  /* 0x00000010 */
#define CRU_SOFTRST_CON29_RESETN_USB2PHY1_USB2HOST1_SHIFT  (5U)
#define CRU_SOFTRST_CON29_RESETN_USB2PHY1_USB2HOST1_MASK   (0x1U << CRU_SOFTRST_CON29_RESETN_USB2PHY1_USB2HOST1_SHIFT)  /* 0x00000020 */
#define CRU_SOFTRST_CON29_PRESETN_EDPPHY_GRF_SHIFT         (6U)
#define CRU_SOFTRST_CON29_PRESETN_EDPPHY_GRF_MASK          (0x1U << CRU_SOFTRST_CON29_PRESETN_EDPPHY_GRF_SHIFT)         /* 0x00000040 */
#define CRU_SOFTRST_CON29_RESETN_TSADCPHY_SHIFT            (7U)
#define CRU_SOFTRST_CON29_RESETN_TSADCPHY_MASK             (0x1U << CRU_SOFTRST_CON29_RESETN_TSADCPHY_SHIFT)            /* 0x00000080 */
#define CRU_SOFTRST_CON29_RESETN_GMAC0_DELAYLINE_SHIFT     (8U)
#define CRU_SOFTRST_CON29_RESETN_GMAC0_DELAYLINE_MASK      (0x1U << CRU_SOFTRST_CON29_RESETN_GMAC0_DELAYLINE_SHIFT)     /* 0x00000100 */
#define CRU_SOFTRST_CON29_RESETN_GMAC1_DELAYLINE_SHIFT     (9U)
#define CRU_SOFTRST_CON29_RESETN_GMAC1_DELAYLINE_MASK      (0x1U << CRU_SOFTRST_CON29_RESETN_GMAC1_DELAYLINE_SHIFT)     /* 0x00000200 */
#define CRU_SOFTRST_CON29_RESETN_OTPC_ARB_SHIFT            (10U)
#define CRU_SOFTRST_CON29_RESETN_OTPC_ARB_MASK             (0x1U << CRU_SOFTRST_CON29_RESETN_OTPC_ARB_SHIFT)            /* 0x00000400 */
#define CRU_SOFTRST_CON29_PRESETN_PIPEPHY0_GRF_SHIFT       (11U)
#define CRU_SOFTRST_CON29_PRESETN_PIPEPHY0_GRF_MASK        (0x1U << CRU_SOFTRST_CON29_PRESETN_PIPEPHY0_GRF_SHIFT)       /* 0x00000800 */
#define CRU_SOFTRST_CON29_PRESETN_PIPEPHY1_GRF_SHIFT       (12U)
#define CRU_SOFTRST_CON29_PRESETN_PIPEPHY1_GRF_MASK        (0x1U << CRU_SOFTRST_CON29_PRESETN_PIPEPHY1_GRF_SHIFT)       /* 0x00001000 */
#define CRU_SOFTRST_CON29_PRESETN_PIPEPHY2_GRF_SHIFT       (13U)
#define CRU_SOFTRST_CON29_PRESETN_PIPEPHY2_GRF_MASK        (0x1U << CRU_SOFTRST_CON29_PRESETN_PIPEPHY2_GRF_SHIFT)       /* 0x00002000 */
/* SSGTBL0_3 */
#define CRU_SSGTBL0_3_OFFSET                               (0x480U)
#define CRU_SSGTBL0_3_SSGTBL0_3_SHIFT                      (0U)
#define CRU_SSGTBL0_3_SSGTBL0_3_MASK                       (0xFFFFFFFFU << CRU_SSGTBL0_3_SSGTBL0_3_SHIFT)               /* 0xFFFFFFFF */
/* SSGTBL4_7 */
#define CRU_SSGTBL4_7_OFFSET                               (0x484U)
#define CRU_SSGTBL4_7_SSGTBL4_7_SHIFT                      (0U)
#define CRU_SSGTBL4_7_SSGTBL4_7_MASK                       (0xFFFFFFFFU << CRU_SSGTBL4_7_SSGTBL4_7_SHIFT)               /* 0xFFFFFFFF */
/* SSGTBL8_11 */
#define CRU_SSGTBL8_11_OFFSET                              (0x488U)
#define CRU_SSGTBL8_11_SSGTBL8_11_SHIFT                    (0U)
#define CRU_SSGTBL8_11_SSGTBL8_11_MASK                     (0xFFFFFFFFU << CRU_SSGTBL8_11_SSGTBL8_11_SHIFT)             /* 0xFFFFFFFF */
/* SSGTBL12_15 */
#define CRU_SSGTBL12_15_OFFSET                             (0x48CU)
#define CRU_SSGTBL12_15_SSGTBL12_15_SHIFT                  (0U)
#define CRU_SSGTBL12_15_SSGTBL12_15_MASK                   (0xFFFFFFFFU << CRU_SSGTBL12_15_SSGTBL12_15_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL16_19 */
#define CRU_SSGTBL16_19_OFFSET                             (0x490U)
#define CRU_SSGTBL16_19_SSGTBL16_19_SHIFT                  (0U)
#define CRU_SSGTBL16_19_SSGTBL16_19_MASK                   (0xFFFFFFFFU << CRU_SSGTBL16_19_SSGTBL16_19_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL20_23 */
#define CRU_SSGTBL20_23_OFFSET                             (0x494U)
#define CRU_SSGTBL20_23_SSGTBL20_23_SHIFT                  (0U)
#define CRU_SSGTBL20_23_SSGTBL20_23_MASK                   (0xFFFFFFFFU << CRU_SSGTBL20_23_SSGTBL20_23_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL24_27 */
#define CRU_SSGTBL24_27_OFFSET                             (0x498U)
#define CRU_SSGTBL24_27_SSGTBL24_27_SHIFT                  (0U)
#define CRU_SSGTBL24_27_SSGTBL24_27_MASK                   (0xFFFFFFFFU << CRU_SSGTBL24_27_SSGTBL24_27_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL28_31 */
#define CRU_SSGTBL28_31_OFFSET                             (0x49CU)
#define CRU_SSGTBL28_31_SSGTBL28_31_SHIFT                  (0U)
#define CRU_SSGTBL28_31_SSGTBL28_31_MASK                   (0xFFFFFFFFU << CRU_SSGTBL28_31_SSGTBL28_31_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL32_35 */
#define CRU_SSGTBL32_35_OFFSET                             (0x4A0U)
#define CRU_SSGTBL32_35_SSGTBL32_35_SHIFT                  (0U)
#define CRU_SSGTBL32_35_SSGTBL32_35_MASK                   (0xFFFFFFFFU << CRU_SSGTBL32_35_SSGTBL32_35_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL36_39 */
#define CRU_SSGTBL36_39_OFFSET                             (0x4A4U)
#define CRU_SSGTBL36_39_SSGTBL36_39_SHIFT                  (0U)
#define CRU_SSGTBL36_39_SSGTBL36_39_MASK                   (0xFFFFFFFFU << CRU_SSGTBL36_39_SSGTBL36_39_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL40_43 */
#define CRU_SSGTBL40_43_OFFSET                             (0x4A8U)
#define CRU_SSGTBL40_43_SSGTBL40_43_SHIFT                  (0U)
#define CRU_SSGTBL40_43_SSGTBL40_43_MASK                   (0xFFFFFFFFU << CRU_SSGTBL40_43_SSGTBL40_43_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL44_47 */
#define CRU_SSGTBL44_47_OFFSET                             (0x4ACU)
#define CRU_SSGTBL44_47_SSGTBL44_47_SHIFT                  (0U)
#define CRU_SSGTBL44_47_SSGTBL44_47_MASK                   (0xFFFFFFFFU << CRU_SSGTBL44_47_SSGTBL44_47_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL48_51 */
#define CRU_SSGTBL48_51_OFFSET                             (0x4B0U)
#define CRU_SSGTBL48_51_SSGTBL48_51_SHIFT                  (0U)
#define CRU_SSGTBL48_51_SSGTBL48_51_MASK                   (0xFFFFFFFFU << CRU_SSGTBL48_51_SSGTBL48_51_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL52_55 */
#define CRU_SSGTBL52_55_OFFSET                             (0x4B4U)
#define CRU_SSGTBL52_55_SSGTBL52_55_SHIFT                  (0U)
#define CRU_SSGTBL52_55_SSGTBL52_55_MASK                   (0xFFFFFFFFU << CRU_SSGTBL52_55_SSGTBL52_55_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL56_59 */
#define CRU_SSGTBL56_59_OFFSET                             (0x4B8U)
#define CRU_SSGTBL56_59_SSGTBL56_59_SHIFT                  (0U)
#define CRU_SSGTBL56_59_SSGTBL56_59_MASK                   (0xFFFFFFFFU << CRU_SSGTBL56_59_SSGTBL56_59_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL60_63 */
#define CRU_SSGTBL60_63_OFFSET                             (0x4BCU)
#define CRU_SSGTBL60_63_SSGTBL60_63_SHIFT                  (0U)
#define CRU_SSGTBL60_63_SSGTBL60_63_MASK                   (0xFFFFFFFFU << CRU_SSGTBL60_63_SSGTBL60_63_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL64_67 */
#define CRU_SSGTBL64_67_OFFSET                             (0x4C0U)
#define CRU_SSGTBL64_67_SSGTBL64_67_SHIFT                  (0U)
#define CRU_SSGTBL64_67_SSGTBL64_67_MASK                   (0xFFFFFFFFU << CRU_SSGTBL64_67_SSGTBL64_67_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL68_71 */
#define CRU_SSGTBL68_71_OFFSET                             (0x4C4U)
#define CRU_SSGTBL68_71_SSGTBL68_71_SHIFT                  (0U)
#define CRU_SSGTBL68_71_SSGTBL68_71_MASK                   (0xFFFFFFFFU << CRU_SSGTBL68_71_SSGTBL68_71_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL72_75 */
#define CRU_SSGTBL72_75_OFFSET                             (0x4C8U)
#define CRU_SSGTBL72_75_SSGTBL72_75_SHIFT                  (0U)
#define CRU_SSGTBL72_75_SSGTBL72_75_MASK                   (0xFFFFFFFFU << CRU_SSGTBL72_75_SSGTBL72_75_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL76_79 */
#define CRU_SSGTBL76_79_OFFSET                             (0x4CCU)
#define CRU_SSGTBL76_79_SSGTBL76_79_SHIFT                  (0U)
#define CRU_SSGTBL76_79_SSGTBL76_79_MASK                   (0xFFFFFFFFU << CRU_SSGTBL76_79_SSGTBL76_79_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL80_83 */
#define CRU_SSGTBL80_83_OFFSET                             (0x4D0U)
#define CRU_SSGTBL80_83_SSGTBL80_83_SHIFT                  (0U)
#define CRU_SSGTBL80_83_SSGTBL80_83_MASK                   (0xFFFFFFFFU << CRU_SSGTBL80_83_SSGTBL80_83_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL84_87 */
#define CRU_SSGTBL84_87_OFFSET                             (0x4D4U)
#define CRU_SSGTBL84_87_SSGTBL84_87_SHIFT                  (0U)
#define CRU_SSGTBL84_87_SSGTBL84_87_MASK                   (0xFFFFFFFFU << CRU_SSGTBL84_87_SSGTBL84_87_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL88_91 */
#define CRU_SSGTBL88_91_OFFSET                             (0x4D8U)
#define CRU_SSGTBL88_91_SSGTBL88_91_SHIFT                  (0U)
#define CRU_SSGTBL88_91_SSGTBL88_91_MASK                   (0xFFFFFFFFU << CRU_SSGTBL88_91_SSGTBL88_91_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL92_95 */
#define CRU_SSGTBL92_95_OFFSET                             (0x4DCU)
#define CRU_SSGTBL92_95_SSGTBL92_95_SHIFT                  (0U)
#define CRU_SSGTBL92_95_SSGTBL92_95_MASK                   (0xFFFFFFFFU << CRU_SSGTBL92_95_SSGTBL92_95_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL96_99 */
#define CRU_SSGTBL96_99_OFFSET                             (0x4E0U)
#define CRU_SSGTBL96_99_SSGTBL96_99_SHIFT                  (0U)
#define CRU_SSGTBL96_99_SSGTBL96_99_MASK                   (0xFFFFFFFFU << CRU_SSGTBL96_99_SSGTBL96_99_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL100_103 */
#define CRU_SSGTBL100_103_OFFSET                           (0x4E4U)
#define CRU_SSGTBL100_103_SSGTBL100_103_SHIFT              (0U)
#define CRU_SSGTBL100_103_SSGTBL100_103_MASK               (0xFFFFFFFFU << CRU_SSGTBL100_103_SSGTBL100_103_SHIFT)       /* 0xFFFFFFFF */
/* SSGTBL104_107 */
#define CRU_SSGTBL104_107_OFFSET                           (0x4E8U)
#define CRU_SSGTBL104_107_SSGTBL104_107_SHIFT              (0U)
#define CRU_SSGTBL104_107_SSGTBL104_107_MASK               (0xFFFFFFFFU << CRU_SSGTBL104_107_SSGTBL104_107_SHIFT)       /* 0xFFFFFFFF */
/* SSGTBL108_111 */
#define CRU_SSGTBL108_111_OFFSET                           (0x4ECU)
#define CRU_SSGTBL108_111_SSGTBL108_111_SHIFT              (0U)
#define CRU_SSGTBL108_111_SSGTBL108_111_MASK               (0xFFFFFFFFU << CRU_SSGTBL108_111_SSGTBL108_111_SHIFT)       /* 0xFFFFFFFF */
/* SSGTBL112_115 */
#define CRU_SSGTBL112_115_OFFSET                           (0x4F0U)
#define CRU_SSGTBL112_115_SSGTBL112_115_SHIFT              (0U)
#define CRU_SSGTBL112_115_SSGTBL112_115_MASK               (0xFFFFFFFFU << CRU_SSGTBL112_115_SSGTBL112_115_SHIFT)       /* 0xFFFFFFFF */
/* SSGTBL116_119 */
#define CRU_SSGTBL116_119_OFFSET                           (0x4F4U)
#define CRU_SSGTBL116_119_SSGTBL116_119_SHIFT              (0U)
#define CRU_SSGTBL116_119_SSGTBL116_119_MASK               (0xFFFFFFFFU << CRU_SSGTBL116_119_SSGTBL116_119_SHIFT)       /* 0xFFFFFFFF */
/* SSGTBL120_123 */
#define CRU_SSGTBL120_123_OFFSET                           (0x4F8U)
#define CRU_SSGTBL120_123_SSGTBL120_123_SHIFT              (0U)
#define CRU_SSGTBL120_123_SSGTBL120_123_MASK               (0xFFFFFFFFU << CRU_SSGTBL120_123_SSGTBL120_123_SHIFT)       /* 0xFFFFFFFF */
/* SSGTBL124_127 */
#define CRU_SSGTBL124_127_OFFSET                           (0x4FCU)
#define CRU_SSGTBL124_127_SSGTBL124_127_SHIFT              (0U)
#define CRU_SSGTBL124_127_SSGTBL124_127_MASK               (0xFFFFFFFFU << CRU_SSGTBL124_127_SSGTBL124_127_SHIFT)       /* 0xFFFFFFFF */
/* AUTOCS_CORE_CON0 */
#define CRU_AUTOCS_CORE_CON0_OFFSET                        (0x500U)
#define CRU_AUTOCS_CORE_CON0_PDCORE_IDLE_TH_SHIFT          (0U)
#define CRU_AUTOCS_CORE_CON0_PDCORE_IDLE_TH_MASK           (0xFFFFU << CRU_AUTOCS_CORE_CON0_PDCORE_IDLE_TH_SHIFT)       /* 0x0000FFFF */
#define CRU_AUTOCS_CORE_CON0_PDCORE_WAIT_TH_SHIFT          (16U)
#define CRU_AUTOCS_CORE_CON0_PDCORE_WAIT_TH_MASK           (0xFFFFU << CRU_AUTOCS_CORE_CON0_PDCORE_WAIT_TH_SHIFT)       /* 0xFFFF0000 */
/* AUTOCS_CORE_CON1 */
#define CRU_AUTOCS_CORE_CON1_OFFSET                        (0x504U)
#define CRU_AUTOCS_CORE_CON1_CPU_SWITCH_EN_SHIFT           (0U)
#define CRU_AUTOCS_CORE_CON1_CPU_SWITCH_EN_MASK            (0x1U << CRU_AUTOCS_CORE_CON1_CPU_SWITCH_EN_SHIFT)           /* 0x00000001 */
#define CRU_AUTOCS_CORE_CON1_DSU_SWITCH_EN_SHIFT           (1U)
#define CRU_AUTOCS_CORE_CON1_DSU_SWITCH_EN_MASK            (0x1U << CRU_AUTOCS_CORE_CON1_DSU_SWITCH_EN_SHIFT)           /* 0x00000002 */
#define CRU_AUTOCS_CORE_CON1_WFI_EN_SHIFT                  (2U)
#define CRU_AUTOCS_CORE_CON1_WFI_EN_MASK                   (0x1U << CRU_AUTOCS_CORE_CON1_WFI_EN_SHIFT)                  /* 0x00000004 */
#define CRU_AUTOCS_CORE_CON1_WFIL3_EN_SHIFT                (3U)
#define CRU_AUTOCS_CORE_CON1_WFIL3_EN_MASK                 (0x1U << CRU_AUTOCS_CORE_CON1_WFIL3_EN_SHIFT)                /* 0x00000008 */
#define CRU_AUTOCS_CORE_CON1_FIQIRQ_EN_SHIFT               (4U)
#define CRU_AUTOCS_CORE_CON1_FIQIRQ_EN_MASK                (0x1U << CRU_AUTOCS_CORE_CON1_FIQIRQ_EN_SHIFT)               /* 0x00000010 */
#define CRU_AUTOCS_CORE_CON1_VFIQIRQ_EN_SHIFT              (5U)
#define CRU_AUTOCS_CORE_CON1_VFIQIRQ_EN_MASK               (0x1U << CRU_AUTOCS_CORE_CON1_VFIQIRQ_EN_SHIFT)              /* 0x00000020 */
#define CRU_AUTOCS_CORE_CON1_NIU_ACTIVE_EN_SHIFT           (6U)
#define CRU_AUTOCS_CORE_CON1_NIU_ACTIVE_EN_MASK            (0x1U << CRU_AUTOCS_CORE_CON1_NIU_ACTIVE_EN_SHIFT)           /* 0x00000040 */
#define CRU_AUTOCS_CORE_CON1_STEP_SHIFT                    (8U)
#define CRU_AUTOCS_CORE_CON1_STEP_MASK                     (0x7U << CRU_AUTOCS_CORE_CON1_STEP_SHIFT)                    /* 0x00000700 */
#define CRU_AUTOCS_CORE_CON1_CLKSEL_CFG_SHIFT              (14U)
#define CRU_AUTOCS_CORE_CON1_CLKSEL_CFG_MASK               (0x3U << CRU_AUTOCS_CORE_CON1_CLKSEL_CFG_SHIFT)              /* 0x0000C000 */
/* AUTOCS_GPU_CON0 */
#define CRU_AUTOCS_GPU_CON0_OFFSET                         (0x508U)
#define CRU_AUTOCS_GPU_CON0_IDLE_TH_SHIFT                  (0U)
#define CRU_AUTOCS_GPU_CON0_IDLE_TH_MASK                   (0xFFFFU << CRU_AUTOCS_GPU_CON0_IDLE_TH_SHIFT)               /* 0x0000FFFF */
#define CRU_AUTOCS_GPU_CON0_WAIT_TH_SHIFT                  (16U)
#define CRU_AUTOCS_GPU_CON0_WAIT_TH_MASK                   (0xFFFFU << CRU_AUTOCS_GPU_CON0_WAIT_TH_SHIFT)               /* 0xFFFF0000 */
/* AUTOCS_GPU_CON1 */
#define CRU_AUTOCS_GPU_CON1_OFFSET                         (0x50CU)
#define CRU_AUTOCS_GPU_CON1_SWITCH_EN_SHIFT                (0U)
#define CRU_AUTOCS_GPU_CON1_SWITCH_EN_MASK                 (0x1U << CRU_AUTOCS_GPU_CON1_SWITCH_EN_SHIFT)                /* 0x00000001 */
#define CRU_AUTOCS_GPU_CON1_CLK_EN_SHIFT                   (1U)
#define CRU_AUTOCS_GPU_CON1_CLK_EN_MASK                    (0x1U << CRU_AUTOCS_GPU_CON1_CLK_EN_SHIFT)                   /* 0x00000002 */
#define CRU_AUTOCS_GPU_CON1_CLKSEL_CFG_SHIFT               (14U)
#define CRU_AUTOCS_GPU_CON1_CLKSEL_CFG_MASK                (0x3U << CRU_AUTOCS_GPU_CON1_CLKSEL_CFG_SHIFT)               /* 0x0000C000 */
/* AUTOCS_BUS_CON0 */
#define CRU_AUTOCS_BUS_CON0_OFFSET                         (0x510U)
#define CRU_AUTOCS_BUS_CON0_IDLE_TH_SHIFT                  (0U)
#define CRU_AUTOCS_BUS_CON0_IDLE_TH_MASK                   (0xFFFFU << CRU_AUTOCS_BUS_CON0_IDLE_TH_SHIFT)               /* 0x0000FFFF */
#define CRU_AUTOCS_BUS_CON0_WAIT_TH_SHIFT                  (16U)
#define CRU_AUTOCS_BUS_CON0_WAIT_TH_MASK                   (0xFFFFU << CRU_AUTOCS_BUS_CON0_WAIT_TH_SHIFT)               /* 0xFFFF0000 */
/* AUTOCS_BUS_CON1 */
#define CRU_AUTOCS_BUS_CON1_OFFSET                         (0x514U)
#define CRU_AUTOCS_BUS_CON1_SWITCH_EN_SHIFT                (0U)
#define CRU_AUTOCS_BUS_CON1_SWITCH_EN_MASK                 (0x1U << CRU_AUTOCS_BUS_CON1_SWITCH_EN_SHIFT)                /* 0x00000001 */
#define CRU_AUTOCS_BUS_CON1_ACLK_EN_SHIFT                  (1U)
#define CRU_AUTOCS_BUS_CON1_ACLK_EN_MASK                   (0x1U << CRU_AUTOCS_BUS_CON1_ACLK_EN_SHIFT)                  /* 0x00000002 */
#define CRU_AUTOCS_BUS_CON1_PCLK_EN_SHIFT                  (3U)
#define CRU_AUTOCS_BUS_CON1_PCLK_EN_MASK                   (0x1U << CRU_AUTOCS_BUS_CON1_PCLK_EN_SHIFT)                  /* 0x00000008 */
#define CRU_AUTOCS_BUS_CON1_MASTER_EN_SHIFT                (4U)
#define CRU_AUTOCS_BUS_CON1_MASTER_EN_MASK                 (0x1U << CRU_AUTOCS_BUS_CON1_MASTER_EN_SHIFT)                /* 0x00000010 */
#define CRU_AUTOCS_BUS_CON1_SLAVE_EN_SHIFT                 (5U)
#define CRU_AUTOCS_BUS_CON1_SLAVE_EN_MASK                  (0x1U << CRU_AUTOCS_BUS_CON1_SLAVE_EN_SHIFT)                 /* 0x00000020 */
#define CRU_AUTOCS_BUS_CON1_DMAC_M_EN_SHIFT                (7U)
#define CRU_AUTOCS_BUS_CON1_DMAC_M_EN_MASK                 (0x1U << CRU_AUTOCS_BUS_CON1_DMAC_M_EN_SHIFT)                /* 0x00000080 */
#define CRU_AUTOCS_BUS_CON1_CLKSEL_CFG_SHIFT               (14U)
#define CRU_AUTOCS_BUS_CON1_CLKSEL_CFG_MASK                (0x3U << CRU_AUTOCS_BUS_CON1_CLKSEL_CFG_SHIFT)               /* 0x0000C000 */
/* AUTOCS_TOP_CON0 */
#define CRU_AUTOCS_TOP_CON0_OFFSET                         (0x518U)
#define CRU_AUTOCS_TOP_CON0_IDLE_TH_SHIFT                  (0U)
#define CRU_AUTOCS_TOP_CON0_IDLE_TH_MASK                   (0xFFFFU << CRU_AUTOCS_TOP_CON0_IDLE_TH_SHIFT)               /* 0x0000FFFF */
#define CRU_AUTOCS_TOP_CON0_WAIT_TH_SHIFT                  (16U)
#define CRU_AUTOCS_TOP_CON0_WAIT_TH_MASK                   (0xFFFFU << CRU_AUTOCS_TOP_CON0_WAIT_TH_SHIFT)               /* 0xFFFF0000 */
/* AUTOCS_TOP_CON1 */
#define CRU_AUTOCS_TOP_CON1_OFFSET                         (0x51CU)
#define CRU_AUTOCS_TOP_CON1_SWITCH_EN_SHIFT                (0U)
#define CRU_AUTOCS_TOP_CON1_SWITCH_EN_MASK                 (0x1U << CRU_AUTOCS_TOP_CON1_SWITCH_EN_SHIFT)                /* 0x00000001 */
#define CRU_AUTOCS_TOP_CON1_ACLK_EN_SHIFT                  (1U)
#define CRU_AUTOCS_TOP_CON1_ACLK_EN_MASK                   (0x1U << CRU_AUTOCS_TOP_CON1_ACLK_EN_SHIFT)                  /* 0x00000002 */
#define CRU_AUTOCS_TOP_CON1_HCLK_EN_SHIFT                  (2U)
#define CRU_AUTOCS_TOP_CON1_HCLK_EN_MASK                   (0x1U << CRU_AUTOCS_TOP_CON1_HCLK_EN_SHIFT)                  /* 0x00000004 */
#define CRU_AUTOCS_TOP_CON1_PCLK_EN_SHIFT                  (3U)
#define CRU_AUTOCS_TOP_CON1_PCLK_EN_MASK                   (0x1U << CRU_AUTOCS_TOP_CON1_PCLK_EN_SHIFT)                  /* 0x00000008 */
#define CRU_AUTOCS_TOP_CON1_MASTER_EN_SHIFT                (4U)
#define CRU_AUTOCS_TOP_CON1_MASTER_EN_MASK                 (0x1U << CRU_AUTOCS_TOP_CON1_MASTER_EN_SHIFT)                /* 0x00000010 */
#define CRU_AUTOCS_TOP_CON1_SLAVE_EN_SHIFT                 (5U)
#define CRU_AUTOCS_TOP_CON1_SLAVE_EN_MASK                  (0x1U << CRU_AUTOCS_TOP_CON1_SLAVE_EN_SHIFT)                 /* 0x00000020 */
#define CRU_AUTOCS_TOP_CON1_DMAC_M_EN_SHIFT                (7U)
#define CRU_AUTOCS_TOP_CON1_DMAC_M_EN_MASK                 (0x1U << CRU_AUTOCS_TOP_CON1_DMAC_M_EN_SHIFT)                /* 0x00000080 */
#define CRU_AUTOCS_TOP_CON1_CLKSEL_CFG_SHIFT               (14U)
#define CRU_AUTOCS_TOP_CON1_CLKSEL_CFG_MASK                (0x3U << CRU_AUTOCS_TOP_CON1_CLKSEL_CFG_SHIFT)               /* 0x0000C000 */
/* AUTOCS_RKVDEC_CON0 */
#define CRU_AUTOCS_RKVDEC_CON0_OFFSET                      (0x520U)
#define CRU_AUTOCS_RKVDEC_CON0_IDLE_TH_SHIFT               (0U)
#define CRU_AUTOCS_RKVDEC_CON0_IDLE_TH_MASK                (0xFFFFU << CRU_AUTOCS_RKVDEC_CON0_IDLE_TH_SHIFT)            /* 0x0000FFFF */
#define CRU_AUTOCS_RKVDEC_CON0_WAIT_TH_SHIFT               (16U)
#define CRU_AUTOCS_RKVDEC_CON0_WAIT_TH_MASK                (0xFFFFU << CRU_AUTOCS_RKVDEC_CON0_WAIT_TH_SHIFT)            /* 0xFFFF0000 */
/* AUTOCS_RKVDEC_CON1 */
#define CRU_AUTOCS_RKVDEC_CON1_OFFSET                      (0x524U)
#define CRU_AUTOCS_RKVDEC_CON1_SWITCH_EN_SHIFT             (0U)
#define CRU_AUTOCS_RKVDEC_CON1_SWITCH_EN_MASK              (0x1U << CRU_AUTOCS_RKVDEC_CON1_SWITCH_EN_SHIFT)             /* 0x00000001 */
#define CRU_AUTOCS_RKVDEC_CON1_RKVDEC_ACLK_EN_SHIFT        (1U)
#define CRU_AUTOCS_RKVDEC_CON1_RKVDEC_ACLK_EN_MASK         (0x1U << CRU_AUTOCS_RKVDEC_CON1_RKVDEC_ACLK_EN_SHIFT)        /* 0x00000002 */
#define CRU_AUTOCS_RKVDEC_CON1_RKVDEC_CLK_CA_EN_SHIFT      (2U)
#define CRU_AUTOCS_RKVDEC_CON1_RKVDEC_CLK_CA_EN_MASK       (0x1U << CRU_AUTOCS_RKVDEC_CON1_RKVDEC_CLK_CA_EN_SHIFT)      /* 0x00000004 */
#define CRU_AUTOCS_RKVDEC_CON1_RKVDEC_CLK_CORE_EN_SHIFT    (3U)
#define CRU_AUTOCS_RKVDEC_CON1_RKVDEC_CLK_CORE_EN_MASK     (0x1U << CRU_AUTOCS_RKVDEC_CON1_RKVDEC_CLK_CORE_EN_SHIFT)    /* 0x00000008 */
#define CRU_AUTOCS_RKVDEC_CON1_RKVDEC_CLK_HEVC_EN_SHIFT    (4U)
#define CRU_AUTOCS_RKVDEC_CON1_RKVDEC_CLK_HEVC_EN_MASK     (0x1U << CRU_AUTOCS_RKVDEC_CON1_RKVDEC_CLK_HEVC_EN_SHIFT)    /* 0x00000010 */
#define CRU_AUTOCS_RKVDEC_CON1_CLK_CA_SEL_CFG_SHIFT        (8U)
#define CRU_AUTOCS_RKVDEC_CON1_CLK_CA_SEL_CFG_MASK         (0x3U << CRU_AUTOCS_RKVDEC_CON1_CLK_CA_SEL_CFG_SHIFT)        /* 0x00000300 */
#define CRU_AUTOCS_RKVDEC_CON1_CLK_CORE_SEL_CFG_SHIFT      (10U)
#define CRU_AUTOCS_RKVDEC_CON1_CLK_CORE_SEL_CFG_MASK       (0x3U << CRU_AUTOCS_RKVDEC_CON1_CLK_CORE_SEL_CFG_SHIFT)      /* 0x00000C00 */
#define CRU_AUTOCS_RKVDEC_CON1_CLK_HEVC_SEL_CFG_SHIFT      (12U)
#define CRU_AUTOCS_RKVDEC_CON1_CLK_HEVC_SEL_CFG_MASK       (0x3U << CRU_AUTOCS_RKVDEC_CON1_CLK_HEVC_SEL_CFG_SHIFT)      /* 0x00003000 */
#define CRU_AUTOCS_RKVDEC_CON1_ACLKSEL_CFG_SHIFT           (14U)
#define CRU_AUTOCS_RKVDEC_CON1_ACLKSEL_CFG_MASK            (0x3U << CRU_AUTOCS_RKVDEC_CON1_ACLKSEL_CFG_SHIFT)           /* 0x0000C000 */
/* AUTOCS_RKVENC_CON0 */
#define CRU_AUTOCS_RKVENC_CON0_OFFSET                      (0x528U)
#define CRU_AUTOCS_RKVENC_CON0_IDLE_TH_SHIFT               (0U)
#define CRU_AUTOCS_RKVENC_CON0_IDLE_TH_MASK                (0xFFFFU << CRU_AUTOCS_RKVENC_CON0_IDLE_TH_SHIFT)            /* 0x0000FFFF */
#define CRU_AUTOCS_RKVENC_CON0_WAIT_TH_SHIFT               (16U)
#define CRU_AUTOCS_RKVENC_CON0_WAIT_TH_MASK                (0xFFFFU << CRU_AUTOCS_RKVENC_CON0_WAIT_TH_SHIFT)            /* 0xFFFF0000 */
/* AUTOCS_RKVENC_CON1 */
#define CRU_AUTOCS_RKVENC_CON1_OFFSET                      (0x52CU)
#define CRU_AUTOCS_RKVENC_CON1_SWITCH_EN_SHIFT             (0U)
#define CRU_AUTOCS_RKVENC_CON1_SWITCH_EN_MASK              (0x1U << CRU_AUTOCS_RKVENC_CON1_SWITCH_EN_SHIFT)             /* 0x00000001 */
#define CRU_AUTOCS_RKVENC_CON1_CLK_EN_SHIFT                (1U)
#define CRU_AUTOCS_RKVENC_CON1_CLK_EN_MASK                 (0x1U << CRU_AUTOCS_RKVENC_CON1_CLK_EN_SHIFT)                /* 0x00000002 */
#define CRU_AUTOCS_RKVENC_CON1_CLKSEL_CFG_SHIFT            (14U)
#define CRU_AUTOCS_RKVENC_CON1_CLKSEL_CFG_MASK             (0x3U << CRU_AUTOCS_RKVENC_CON1_CLKSEL_CFG_SHIFT)            /* 0x0000C000 */
/* AUTOCS_VPU_CON0 */
#define CRU_AUTOCS_VPU_CON0_OFFSET                         (0x530U)
#define CRU_AUTOCS_VPU_CON0_IDLE_TH_SHIFT                  (0U)
#define CRU_AUTOCS_VPU_CON0_IDLE_TH_MASK                   (0xFFFFU << CRU_AUTOCS_VPU_CON0_IDLE_TH_SHIFT)               /* 0x0000FFFF */
#define CRU_AUTOCS_VPU_CON0_WAIT_TH_SHIFT                  (16U)
#define CRU_AUTOCS_VPU_CON0_WAIT_TH_MASK                   (0xFFFFU << CRU_AUTOCS_VPU_CON0_WAIT_TH_SHIFT)               /* 0xFFFF0000 */
/* AUTOCS_VPU_CON1 */
#define CRU_AUTOCS_VPU_CON1_OFFSET                         (0x534U)
#define CRU_AUTOCS_VPU_CON1_SWITCH_EN_SHIFT                (0U)
#define CRU_AUTOCS_VPU_CON1_SWITCH_EN_MASK                 (0x1U << CRU_AUTOCS_VPU_CON1_SWITCH_EN_SHIFT)                /* 0x00000001 */
#define CRU_AUTOCS_VPU_CON1_CLK_EN_SHIFT                   (1U)
#define CRU_AUTOCS_VPU_CON1_CLK_EN_MASK                    (0x1U << CRU_AUTOCS_VPU_CON1_CLK_EN_SHIFT)                   /* 0x00000002 */
#define CRU_AUTOCS_VPU_CON1_CLKSEL_CFG_SHIFT               (14U)
#define CRU_AUTOCS_VPU_CON1_CLKSEL_CFG_MASK                (0x3U << CRU_AUTOCS_VPU_CON1_CLKSEL_CFG_SHIFT)               /* 0x0000C000 */
/* AUTOCS_PERI_CON0 */
#define CRU_AUTOCS_PERI_CON0_OFFSET                        (0x538U)
#define CRU_AUTOCS_PERI_CON0_IDLE_TH_SHIFT                 (0U)
#define CRU_AUTOCS_PERI_CON0_IDLE_TH_MASK                  (0xFFFFU << CRU_AUTOCS_PERI_CON0_IDLE_TH_SHIFT)              /* 0x0000FFFF */
#define CRU_AUTOCS_PERI_CON0_WAIT_TH_SHIFT                 (16U)
#define CRU_AUTOCS_PERI_CON0_WAIT_TH_MASK                  (0xFFFFU << CRU_AUTOCS_PERI_CON0_WAIT_TH_SHIFT)              /* 0xFFFF0000 */
/* AUTOCS_PERI_CON1 */
#define CRU_AUTOCS_PERI_CON1_OFFSET                        (0x53CU)
#define CRU_AUTOCS_PERI_CON1_PERI_SWITCH_EN_SHIFT          (0U)
#define CRU_AUTOCS_PERI_CON1_PERI_SWITCH_EN_MASK           (0x1U << CRU_AUTOCS_PERI_CON1_PERI_SWITCH_EN_SHIFT)          /* 0x00000001 */
#define CRU_AUTOCS_PERI_CON1_PERI_ACLK_EN_SHIFT            (1U)
#define CRU_AUTOCS_PERI_CON1_PERI_ACLK_EN_MASK             (0x1U << CRU_AUTOCS_PERI_CON1_PERI_ACLK_EN_SHIFT)            /* 0x00000002 */
#define CRU_AUTOCS_PERI_CON1_PERI_HCLK_EN_SHIFT            (2U)
#define CRU_AUTOCS_PERI_CON1_PERI_HCLK_EN_MASK             (0x1U << CRU_AUTOCS_PERI_CON1_PERI_HCLK_EN_SHIFT)            /* 0x00000004 */
#define CRU_AUTOCS_PERI_CON1_PHP_SWITCH_EN_SHIFT           (3U)
#define CRU_AUTOCS_PERI_CON1_PHP_SWITCH_EN_MASK            (0x1U << CRU_AUTOCS_PERI_CON1_PHP_SWITCH_EN_SHIFT)           /* 0x00000008 */
#define CRU_AUTOCS_PERI_CON1_PHP_ACLK_EN_SHIFT             (4U)
#define CRU_AUTOCS_PERI_CON1_PHP_ACLK_EN_MASK              (0x1U << CRU_AUTOCS_PERI_CON1_PHP_ACLK_EN_SHIFT)             /* 0x00000010 */
#define CRU_AUTOCS_PERI_CON1_PHP_HCLK_EN_SHIFT             (5U)
#define CRU_AUTOCS_PERI_CON1_PHP_HCLK_EN_MASK              (0x1U << CRU_AUTOCS_PERI_CON1_PHP_HCLK_EN_SHIFT)             /* 0x00000020 */
#define CRU_AUTOCS_PERI_CON1_GA_SWITCH_EN_SHIFT            (6U)
#define CRU_AUTOCS_PERI_CON1_GA_SWITCH_EN_MASK             (0x1U << CRU_AUTOCS_PERI_CON1_GA_SWITCH_EN_SHIFT)            /* 0x00000040 */
#define CRU_AUTOCS_PERI_CON1_GA_ACLK_EN_SHIFT              (7U)
#define CRU_AUTOCS_PERI_CON1_GA_ACLK_EN_MASK               (0x1U << CRU_AUTOCS_PERI_CON1_GA_ACLK_EN_SHIFT)              /* 0x00000080 */
#define CRU_AUTOCS_PERI_CON1_GA_HCLK_EN_SHIFT              (8U)
#define CRU_AUTOCS_PERI_CON1_GA_HCLK_EN_MASK               (0x1U << CRU_AUTOCS_PERI_CON1_GA_HCLK_EN_SHIFT)              /* 0x00000100 */
#define CRU_AUTOCS_PERI_CON1_SF_SWITCH_EN_SHIFT            (9U)
#define CRU_AUTOCS_PERI_CON1_SF_SWITCH_EN_MASK             (0x1U << CRU_AUTOCS_PERI_CON1_SF_SWITCH_EN_SHIFT)            /* 0x00000200 */
#define CRU_AUTOCS_PERI_CON1_SF_ACLK_EN_SHIFT              (10U)
#define CRU_AUTOCS_PERI_CON1_SF_ACLK_EN_MASK               (0x1U << CRU_AUTOCS_PERI_CON1_SF_ACLK_EN_SHIFT)              /* 0x00000400 */
#define CRU_AUTOCS_PERI_CON1_SF_HCLK_EN_SHIFT              (11U)
#define CRU_AUTOCS_PERI_CON1_SF_HCLK_EN_MASK               (0x1U << CRU_AUTOCS_PERI_CON1_SF_HCLK_EN_SHIFT)              /* 0x00000800 */
#define CRU_AUTOCS_PERI_CON1_DCF_M_EN_SHIFT                (12U)
#define CRU_AUTOCS_PERI_CON1_DCF_M_EN_MASK                 (0x1U << CRU_AUTOCS_PERI_CON1_DCF_M_EN_SHIFT)                /* 0x00001000 */
#define CRU_AUTOCS_PERI_CON1_CLKSEL_CFG_SHIFT              (14U)
#define CRU_AUTOCS_PERI_CON1_CLKSEL_CFG_MASK               (0x3U << CRU_AUTOCS_PERI_CON1_CLKSEL_CFG_SHIFT)              /* 0x0000C000 */
/* AUTOCS_GPLL_CON0 */
#define CRU_AUTOCS_GPLL_CON0_OFFSET                        (0x540U)
#define CRU_AUTOCS_GPLL_CON0_IDLE_TH_SHIFT                 (0U)
#define CRU_AUTOCS_GPLL_CON0_IDLE_TH_MASK                  (0xFFFFU << CRU_AUTOCS_GPLL_CON0_IDLE_TH_SHIFT)              /* 0x0000FFFF */
#define CRU_AUTOCS_GPLL_CON0_WAIT_TH_SHIFT                 (16U)
#define CRU_AUTOCS_GPLL_CON0_WAIT_TH_MASK                  (0xFFFFU << CRU_AUTOCS_GPLL_CON0_WAIT_TH_SHIFT)              /* 0xFFFF0000 */
/* AUTOCS_GPLL_CON1 */
#define CRU_AUTOCS_GPLL_CON1_OFFSET                        (0x544U)
#define CRU_AUTOCS_GPLL_CON1_SWITCH_EN_SHIFT               (0U)
#define CRU_AUTOCS_GPLL_CON1_SWITCH_EN_MASK                (0x1U << CRU_AUTOCS_GPLL_CON1_SWITCH_EN_SHIFT)               /* 0x00000001 */
#define CRU_AUTOCS_GPLL_CON1_WFI_EN_SHIFT                  (2U)
#define CRU_AUTOCS_GPLL_CON1_WFI_EN_MASK                   (0x1U << CRU_AUTOCS_GPLL_CON1_WFI_EN_SHIFT)                  /* 0x00000004 */
#define CRU_AUTOCS_GPLL_CON1_WFIL3_EN_SHIFT                (3U)
#define CRU_AUTOCS_GPLL_CON1_WFIL3_EN_MASK                 (0x1U << CRU_AUTOCS_GPLL_CON1_WFIL3_EN_SHIFT)                /* 0x00000008 */
#define CRU_AUTOCS_GPLL_CON1_FIQIRQ_EN_SHIFT               (4U)
#define CRU_AUTOCS_GPLL_CON1_FIQIRQ_EN_MASK                (0x1U << CRU_AUTOCS_GPLL_CON1_FIQIRQ_EN_SHIFT)               /* 0x00000010 */
#define CRU_AUTOCS_GPLL_CON1_VFIQIRQ_EN_SHIFT              (5U)
#define CRU_AUTOCS_GPLL_CON1_VFIQIRQ_EN_MASK               (0x1U << CRU_AUTOCS_GPLL_CON1_VFIQIRQ_EN_SHIFT)              /* 0x00000020 */
/* AUTOCS_CPLL_CON0 */
#define CRU_AUTOCS_CPLL_CON0_OFFSET                        (0x548U)
#define CRU_AUTOCS_CPLL_CON0_IDLE_TH_SHIFT                 (0U)
#define CRU_AUTOCS_CPLL_CON0_IDLE_TH_MASK                  (0xFFFFU << CRU_AUTOCS_CPLL_CON0_IDLE_TH_SHIFT)              /* 0x0000FFFF */
#define CRU_AUTOCS_CPLL_CON0_WAIT_TH_SHIFT                 (16U)
#define CRU_AUTOCS_CPLL_CON0_WAIT_TH_MASK                  (0xFFFFU << CRU_AUTOCS_CPLL_CON0_WAIT_TH_SHIFT)              /* 0xFFFF0000 */
/* AUTOCS_CPLL_CON1 */
#define CRU_AUTOCS_CPLL_CON1_OFFSET                        (0x54CU)
#define CRU_AUTOCS_CPLL_CON1_SWITCH_EN_SHIFT               (0U)
#define CRU_AUTOCS_CPLL_CON1_SWITCH_EN_MASK                (0x1U << CRU_AUTOCS_CPLL_CON1_SWITCH_EN_SHIFT)               /* 0x00000001 */
#define CRU_AUTOCS_CPLL_CON1_WFI_EN_SHIFT                  (2U)
#define CRU_AUTOCS_CPLL_CON1_WFI_EN_MASK                   (0x1U << CRU_AUTOCS_CPLL_CON1_WFI_EN_SHIFT)                  /* 0x00000004 */
#define CRU_AUTOCS_CPLL_CON1_WFIL3_EN_SHIFT                (3U)
#define CRU_AUTOCS_CPLL_CON1_WFIL3_EN_MASK                 (0x1U << CRU_AUTOCS_CPLL_CON1_WFIL3_EN_SHIFT)                /* 0x00000008 */
#define CRU_AUTOCS_CPLL_CON1_FIQIRQ_EN_SHIFT               (4U)
#define CRU_AUTOCS_CPLL_CON1_FIQIRQ_EN_MASK                (0x1U << CRU_AUTOCS_CPLL_CON1_FIQIRQ_EN_SHIFT)               /* 0x00000010 */
#define CRU_AUTOCS_CPLL_CON1_VFIQIRQ_EN_SHIFT              (5U)
#define CRU_AUTOCS_CPLL_CON1_VFIQIRQ_EN_MASK               (0x1U << CRU_AUTOCS_CPLL_CON1_VFIQIRQ_EN_SHIFT)              /* 0x00000020 */
/* SDMMC0_CON0 */
#define CRU_SDMMC0_CON0_OFFSET                             (0x580U)
#define CRU_SDMMC0_CON0_INIT_STATE_SHIFT                   (0U)
#define CRU_SDMMC0_CON0_INIT_STATE_MASK                    (0x1U << CRU_SDMMC0_CON0_INIT_STATE_SHIFT)                   /* 0x00000001 */
#define CRU_SDMMC0_CON0_DRV_DEGREE_SHIFT                   (1U)
#define CRU_SDMMC0_CON0_DRV_DEGREE_MASK                    (0x3U << CRU_SDMMC0_CON0_DRV_DEGREE_SHIFT)                   /* 0x00000006 */
#define CRU_SDMMC0_CON0_DRV_DELAYNUM_SHIFT                 (3U)
#define CRU_SDMMC0_CON0_DRV_DELAYNUM_MASK                  (0xFFU << CRU_SDMMC0_CON0_DRV_DELAYNUM_SHIFT)                /* 0x000007F8 */
#define CRU_SDMMC0_CON0_DRV_SEL_SHIFT                      (11U)
#define CRU_SDMMC0_CON0_DRV_SEL_MASK                       (0x1U << CRU_SDMMC0_CON0_DRV_SEL_SHIFT)                      /* 0x00000800 */
/* SDMMC0_CON1 */
#define CRU_SDMMC0_CON1_OFFSET                             (0x584U)
#define CRU_SDMMC0_CON1_SAMPLE_DEGREE_SHIFT                (0U)
#define CRU_SDMMC0_CON1_SAMPLE_DEGREE_MASK                 (0x3U << CRU_SDMMC0_CON1_SAMPLE_DEGREE_SHIFT)                /* 0x00000003 */
#define CRU_SDMMC0_CON1_SAMPLE_DELAYNUM_SHIFT              (2U)
#define CRU_SDMMC0_CON1_SAMPLE_DELAYNUM_MASK               (0xFFU << CRU_SDMMC0_CON1_SAMPLE_DELAYNUM_SHIFT)             /* 0x000003FC */
#define CRU_SDMMC0_CON1_SAMPLE_SEL_SHIFT                   (10U)
#define CRU_SDMMC0_CON1_SAMPLE_SEL_MASK                    (0x1U << CRU_SDMMC0_CON1_SAMPLE_SEL_SHIFT)                   /* 0x00000400 */
/* SDMMC1_CON0 */
#define CRU_SDMMC1_CON0_OFFSET                             (0x588U)
#define CRU_SDMMC1_CON0_INIT_STATE_SHIFT                   (0U)
#define CRU_SDMMC1_CON0_INIT_STATE_MASK                    (0x1U << CRU_SDMMC1_CON0_INIT_STATE_SHIFT)                   /* 0x00000001 */
#define CRU_SDMMC1_CON0_DRV_DEGREE_SHIFT                   (1U)
#define CRU_SDMMC1_CON0_DRV_DEGREE_MASK                    (0x3U << CRU_SDMMC1_CON0_DRV_DEGREE_SHIFT)                   /* 0x00000006 */
#define CRU_SDMMC1_CON0_DRV_DELAYNUM_SHIFT                 (3U)
#define CRU_SDMMC1_CON0_DRV_DELAYNUM_MASK                  (0xFFU << CRU_SDMMC1_CON0_DRV_DELAYNUM_SHIFT)                /* 0x000007F8 */
#define CRU_SDMMC1_CON0_DRV_SEL_SHIFT                      (11U)
#define CRU_SDMMC1_CON0_DRV_SEL_MASK                       (0x1U << CRU_SDMMC1_CON0_DRV_SEL_SHIFT)                      /* 0x00000800 */
/* SDMMC1_CON1 */
#define CRU_SDMMC1_CON1_OFFSET                             (0x58CU)
#define CRU_SDMMC1_CON1_SAMPLE_DEGREE_SHIFT                (0U)
#define CRU_SDMMC1_CON1_SAMPLE_DEGREE_MASK                 (0x3U << CRU_SDMMC1_CON1_SAMPLE_DEGREE_SHIFT)                /* 0x00000003 */
#define CRU_SDMMC1_CON1_SAMPLE_DELAYNUM_SHIFT              (2U)
#define CRU_SDMMC1_CON1_SAMPLE_DELAYNUM_MASK               (0xFFU << CRU_SDMMC1_CON1_SAMPLE_DELAYNUM_SHIFT)             /* 0x000003FC */
#define CRU_SDMMC1_CON1_SAMPLE_SEL_SHIFT                   (10U)
#define CRU_SDMMC1_CON1_SAMPLE_SEL_MASK                    (0x1U << CRU_SDMMC1_CON1_SAMPLE_SEL_SHIFT)                   /* 0x00000400 */
/* SDMMC2_CON0 */
#define CRU_SDMMC2_CON0_OFFSET                             (0x590U)
#define CRU_SDMMC2_CON0_INIT_STATE_SHIFT                   (0U)
#define CRU_SDMMC2_CON0_INIT_STATE_MASK                    (0x1U << CRU_SDMMC2_CON0_INIT_STATE_SHIFT)                   /* 0x00000001 */
#define CRU_SDMMC2_CON0_DRV_DEGREE_SHIFT                   (1U)
#define CRU_SDMMC2_CON0_DRV_DEGREE_MASK                    (0x3U << CRU_SDMMC2_CON0_DRV_DEGREE_SHIFT)                   /* 0x00000006 */
#define CRU_SDMMC2_CON0_DRV_DELAYNUM_SHIFT                 (3U)
#define CRU_SDMMC2_CON0_DRV_DELAYNUM_MASK                  (0xFFU << CRU_SDMMC2_CON0_DRV_DELAYNUM_SHIFT)                /* 0x000007F8 */
#define CRU_SDMMC2_CON0_DRV_SEL_SHIFT                      (11U)
#define CRU_SDMMC2_CON0_DRV_SEL_MASK                       (0x1U << CRU_SDMMC2_CON0_DRV_SEL_SHIFT)                      /* 0x00000800 */
/* SDMMC2_CON1 */
#define CRU_SDMMC2_CON1_OFFSET                             (0x594U)
#define CRU_SDMMC2_CON1_SAMPLE_DEGREE_SHIFT                (0U)
#define CRU_SDMMC2_CON1_SAMPLE_DEGREE_MASK                 (0x3U << CRU_SDMMC2_CON1_SAMPLE_DEGREE_SHIFT)                /* 0x00000003 */
#define CRU_SDMMC2_CON1_SAMPLE_DELAYNUM_SHIFT              (2U)
#define CRU_SDMMC2_CON1_SAMPLE_DELAYNUM_MASK               (0xFFU << CRU_SDMMC2_CON1_SAMPLE_DELAYNUM_SHIFT)             /* 0x000003FC */
#define CRU_SDMMC2_CON1_SAMPLE_SEL_SHIFT                   (10U)
#define CRU_SDMMC2_CON1_SAMPLE_SEL_MASK                    (0x1U << CRU_SDMMC2_CON1_SAMPLE_SEL_SHIFT)                   /* 0x00000400 */
/* EMMC_CON0 */
#define CRU_EMMC_CON0_OFFSET                               (0x598U)
#define CRU_EMMC_CON0_INIT_STATE_SHIFT                     (0U)
#define CRU_EMMC_CON0_INIT_STATE_MASK                      (0x1U << CRU_EMMC_CON0_INIT_STATE_SHIFT)                     /* 0x00000001 */
#define CRU_EMMC_CON0_DRV_DEGREE_SHIFT                     (1U)
#define CRU_EMMC_CON0_DRV_DEGREE_MASK                      (0x3U << CRU_EMMC_CON0_DRV_DEGREE_SHIFT)                     /* 0x00000006 */
#define CRU_EMMC_CON0_DRV_DELAYNUM_SHIFT                   (3U)
#define CRU_EMMC_CON0_DRV_DELAYNUM_MASK                    (0xFFU << CRU_EMMC_CON0_DRV_DELAYNUM_SHIFT)                  /* 0x000007F8 */
#define CRU_EMMC_CON0_DRV_SEL_SHIFT                        (11U)
#define CRU_EMMC_CON0_DRV_SEL_MASK                         (0x1U << CRU_EMMC_CON0_DRV_SEL_SHIFT)                        /* 0x00000800 */
/* EMMC_CON1 */
#define CRU_EMMC_CON1_OFFSET                               (0x59CU)
#define CRU_EMMC_CON1_SAMPLE_DEGREE_SHIFT                  (0U)
#define CRU_EMMC_CON1_SAMPLE_DEGREE_MASK                   (0x3U << CRU_EMMC_CON1_SAMPLE_DEGREE_SHIFT)                  /* 0x00000003 */
#define CRU_EMMC_CON1_SAMPLE_DELAYNUM_SHIFT                (2U)
#define CRU_EMMC_CON1_SAMPLE_DELAYNUM_MASK                 (0xFFU << CRU_EMMC_CON1_SAMPLE_DELAYNUM_SHIFT)               /* 0x000003FC */
#define CRU_EMMC_CON1_SAMPLE_SEL_SHIFT                     (10U)
#define CRU_EMMC_CON1_SAMPLE_SEL_MASK                      (0x1U << CRU_EMMC_CON1_SAMPLE_SEL_SHIFT)                     /* 0x00000400 */
/******************************************PMU*******************************************/
/* VERSION */
#define PMU_VERSION_OFFSET                                 (0x0U)
#define PMU_VERSION                                        (0x3003566U)
#define PMU_VERSION_VERSION_SHIFT                          (0U)
#define PMU_VERSION_VERSION_MASK                           (0xFFFFFFFFU << PMU_VERSION_VERSION_SHIFT)                   /* 0xFFFFFFFF */
/* PWR_CON */
#define PMU_PWR_CON_OFFSET                                 (0x4U)
#define PMU_PWR_CON_POWERMODE_EN_SHIFT                     (0U)
#define PMU_PWR_CON_POWERMODE_EN_MASK                      (0x1U << PMU_PWR_CON_POWERMODE_EN_SHIFT)                     /* 0x00000001 */
#define PMU_PWR_CON_DSU_BYPASS_SHIFT                       (1U)
#define PMU_PWR_CON_DSU_BYPASS_MASK                        (0x1U << PMU_PWR_CON_DSU_BYPASS_SHIFT)                       /* 0x00000002 */
#define PMU_PWR_CON_RESERVED_SHIFT                         (2U)
#define PMU_PWR_CON_RESERVED_MASK                          (0x3U << PMU_PWR_CON_RESERVED_SHIFT)                         /* 0x0000000C */
#define PMU_PWR_CON_BUS_BYPASS_SHIFT                       (4U)
#define PMU_PWR_CON_BUS_BYPASS_MASK                        (0x1U << PMU_PWR_CON_BUS_BYPASS_SHIFT)                       /* 0x00000010 */
#define PMU_PWR_CON_DDR_BYPASS_SHIFT                       (5U)
#define PMU_PWR_CON_DDR_BYPASS_MASK                        (0x1U << PMU_PWR_CON_DDR_BYPASS_SHIFT)                       /* 0x00000020 */
#define PMU_PWR_CON_PWRDN_BYPASS_SHIFT                     (6U)
#define PMU_PWR_CON_PWRDN_BYPASS_MASK                      (0x1U << PMU_PWR_CON_PWRDN_BYPASS_SHIFT)                     /* 0x00000040 */
#define PMU_PWR_CON_CRU_BYPASS_SHIFT                       (7U)
#define PMU_PWR_CON_CRU_BYPASS_MASK                        (0x1U << PMU_PWR_CON_CRU_BYPASS_SHIFT)                       /* 0x00000080 */
#define PMU_PWR_CON_CPU_BYPASS_SHIFT                       (8U)
#define PMU_PWR_CON_CPU_BYPASS_MASK                        (0xFU << PMU_PWR_CON_CPU_BYPASS_SHIFT)                       /* 0x00000F00 */
#define PMU_PWR_CON_PMU_SLEEP_POL_SHIFT                    (15U)
#define PMU_PWR_CON_PMU_SLEEP_POL_MASK                     (0x1U << PMU_PWR_CON_PMU_SLEEP_POL_SHIFT)                    /* 0x00008000 */
/* MAIN_PWR_STATE */
#define PMU_MAIN_PWR_STATE_OFFSET                          (0x8U)
#define PMU_MAIN_PWR_STATE                                 (0x0U)
#define PMU_MAIN_PWR_STATE_PMU_POWER_STATE_SHIFT           (0U)
#define PMU_MAIN_PWR_STATE_PMU_POWER_STATE_MASK            (0xFU << PMU_MAIN_PWR_STATE_PMU_POWER_STATE_SHIFT)           /* 0x0000000F */
/* INT_MASK_CON */
#define PMU_INT_MASK_CON_OFFSET                            (0xCU)
#define PMU_INT_MASK_CON_GLB_INT_DISABLE_SHIFT             (0U)
#define PMU_INT_MASK_CON_GLB_INT_DISABLE_MASK              (0x1U << PMU_INT_MASK_CON_GLB_INT_DISABLE_SHIFT)             /* 0x00000001 */
#define PMU_INT_MASK_CON_WAKEUP_MCU_SFT_SHIFT              (15U)
#define PMU_INT_MASK_CON_WAKEUP_MCU_SFT_MASK               (0x1U << PMU_INT_MASK_CON_WAKEUP_MCU_SFT_SHIFT)              /* 0x00008000 */
/* WAKEUP_INT_CON */
#define PMU_WAKEUP_INT_CON_OFFSET                          (0x10U)
#define PMU_WAKEUP_INT_CON_WAKEUP_CPU0_INT_EN_SHIFT        (0U)
#define PMU_WAKEUP_INT_CON_WAKEUP_CPU0_INT_EN_MASK         (0x1U << PMU_WAKEUP_INT_CON_WAKEUP_CPU0_INT_EN_SHIFT)        /* 0x00000001 */
#define PMU_WAKEUP_INT_CON_WAKEUP_CPU1_INT_EN_SHIFT        (1U)
#define PMU_WAKEUP_INT_CON_WAKEUP_CPU1_INT_EN_MASK         (0x1U << PMU_WAKEUP_INT_CON_WAKEUP_CPU1_INT_EN_SHIFT)        /* 0x00000002 */
#define PMU_WAKEUP_INT_CON_WAKEUP_CPU2_INT_EN_SHIFT        (2U)
#define PMU_WAKEUP_INT_CON_WAKEUP_CPU2_INT_EN_MASK         (0x1U << PMU_WAKEUP_INT_CON_WAKEUP_CPU2_INT_EN_SHIFT)        /* 0x00000004 */
#define PMU_WAKEUP_INT_CON_WAKEUP_CPU3_INT_EN_SHIFT        (3U)
#define PMU_WAKEUP_INT_CON_WAKEUP_CPU3_INT_EN_MASK         (0x1U << PMU_WAKEUP_INT_CON_WAKEUP_CPU3_INT_EN_SHIFT)        /* 0x00000008 */
#define PMU_WAKEUP_INT_CON_WAKEUP_GPIO0_INT_EN_SHIFT       (4U)
#define PMU_WAKEUP_INT_CON_WAKEUP_GPIO0_INT_EN_MASK        (0x1U << PMU_WAKEUP_INT_CON_WAKEUP_GPIO0_INT_EN_SHIFT)       /* 0x00000010 */
#define PMU_WAKEUP_INT_CON_WAKEUP_UART0_EN_SHIFT           (5U)
#define PMU_WAKEUP_INT_CON_WAKEUP_UART0_EN_MASK            (0x1U << PMU_WAKEUP_INT_CON_WAKEUP_UART0_EN_SHIFT)           /* 0x00000020 */
#define PMU_WAKEUP_INT_CON_WAKEUP_SDMMC0_EN_SHIFT          (6U)
#define PMU_WAKEUP_INT_CON_WAKEUP_SDMMC0_EN_MASK           (0x1U << PMU_WAKEUP_INT_CON_WAKEUP_SDMMC0_EN_SHIFT)          /* 0x00000040 */
#define PMU_WAKEUP_INT_CON_WAKEUP_SDMMC1_EN_SHIFT          (7U)
#define PMU_WAKEUP_INT_CON_WAKEUP_SDMMC1_EN_MASK           (0x1U << PMU_WAKEUP_INT_CON_WAKEUP_SDMMC1_EN_SHIFT)          /* 0x00000080 */
#define PMU_WAKEUP_INT_CON_WAKEUP_SDMMC2_EN_SHIFT          (8U)
#define PMU_WAKEUP_INT_CON_WAKEUP_SDMMC2_EN_MASK           (0x1U << PMU_WAKEUP_INT_CON_WAKEUP_SDMMC2_EN_SHIFT)          /* 0x00000100 */
#define PMU_WAKEUP_INT_CON_WAKEUP_USB_EN_SHIFT             (9U)
#define PMU_WAKEUP_INT_CON_WAKEUP_USB_EN_MASK              (0x1U << PMU_WAKEUP_INT_CON_WAKEUP_USB_EN_SHIFT)             /* 0x00000200 */
#define PMU_WAKEUP_INT_CON_WAKEUP_PCIE_EN_SHIFT            (10U)
#define PMU_WAKEUP_INT_CON_WAKEUP_PCIE_EN_MASK             (0x1U << PMU_WAKEUP_INT_CON_WAKEUP_PCIE_EN_SHIFT)            /* 0x00000400 */
#define PMU_WAKEUP_INT_CON_WAKEUP_VAD_EN_SHIFT             (11U)
#define PMU_WAKEUP_INT_CON_WAKEUP_VAD_EN_MASK              (0x1U << PMU_WAKEUP_INT_CON_WAKEUP_VAD_EN_SHIFT)             /* 0x00000800 */
#define PMU_WAKEUP_INT_CON_WAKEUP_TIMER_EN_SHIFT           (12U)
#define PMU_WAKEUP_INT_CON_WAKEUP_TIMER_EN_MASK            (0x1U << PMU_WAKEUP_INT_CON_WAKEUP_TIMER_EN_SHIFT)           /* 0x00001000 */
#define PMU_WAKEUP_INT_CON_WAKEUP_PWM0_EN_SHIFT            (13U)
#define PMU_WAKEUP_INT_CON_WAKEUP_PWM0_EN_MASK             (0x1U << PMU_WAKEUP_INT_CON_WAKEUP_PWM0_EN_SHIFT)            /* 0x00002000 */
#define PMU_WAKEUP_INT_CON_WAKEUP_TIMEOUT_EN_SHIFT         (14U)
#define PMU_WAKEUP_INT_CON_WAKEUP_TIMEOUT_EN_MASK          (0x1U << PMU_WAKEUP_INT_CON_WAKEUP_TIMEOUT_EN_SHIFT)         /* 0x00004000 */
#define PMU_WAKEUP_INT_CON_WAKEUP_MCU_SFT_EN_SHIFT         (15U)
#define PMU_WAKEUP_INT_CON_WAKEUP_MCU_SFT_EN_MASK          (0x1U << PMU_WAKEUP_INT_CON_WAKEUP_MCU_SFT_EN_SHIFT)         /* 0x00008000 */
/* WAKEUP_INT_ST */
#define PMU_WAKEUP_INT_ST_OFFSET                           (0x14U)
#define PMU_WAKEUP_INT_ST                                  (0x0U)
#define PMU_WAKEUP_INT_ST_WAKEUP_CPU0_INT_ST_SHIFT         (0U)
#define PMU_WAKEUP_INT_ST_WAKEUP_CPU0_INT_ST_MASK          (0x1U << PMU_WAKEUP_INT_ST_WAKEUP_CPU0_INT_ST_SHIFT)         /* 0x00000001 */
#define PMU_WAKEUP_INT_ST_WAKEUP_CPU1_INT_ST_SHIFT         (1U)
#define PMU_WAKEUP_INT_ST_WAKEUP_CPU1_INT_ST_MASK          (0x1U << PMU_WAKEUP_INT_ST_WAKEUP_CPU1_INT_ST_SHIFT)         /* 0x00000002 */
#define PMU_WAKEUP_INT_ST_WAKEUP_CPU2_INT_ST_SHIFT         (2U)
#define PMU_WAKEUP_INT_ST_WAKEUP_CPU2_INT_ST_MASK          (0x1U << PMU_WAKEUP_INT_ST_WAKEUP_CPU2_INT_ST_SHIFT)         /* 0x00000004 */
#define PMU_WAKEUP_INT_ST_WAKEUP_CPU3_INT_ST_SHIFT         (3U)
#define PMU_WAKEUP_INT_ST_WAKEUP_CPU3_INT_ST_MASK          (0x1U << PMU_WAKEUP_INT_ST_WAKEUP_CPU3_INT_ST_SHIFT)         /* 0x00000008 */
#define PMU_WAKEUP_INT_ST_WAKEUP_GPIO0_INT_ST_SHIFT        (4U)
#define PMU_WAKEUP_INT_ST_WAKEUP_GPIO0_INT_ST_MASK         (0x1U << PMU_WAKEUP_INT_ST_WAKEUP_GPIO0_INT_ST_SHIFT)        /* 0x00000010 */
#define PMU_WAKEUP_INT_ST_WAKEUP_UART0_INT_ST_SHIFT        (5U)
#define PMU_WAKEUP_INT_ST_WAKEUP_UART0_INT_ST_MASK         (0x1U << PMU_WAKEUP_INT_ST_WAKEUP_UART0_INT_ST_SHIFT)        /* 0x00000020 */
#define PMU_WAKEUP_INT_ST_WAKEUP_SDMMC0_INT_ST_SHIFT       (6U)
#define PMU_WAKEUP_INT_ST_WAKEUP_SDMMC0_INT_ST_MASK        (0x1U << PMU_WAKEUP_INT_ST_WAKEUP_SDMMC0_INT_ST_SHIFT)       /* 0x00000040 */
#define PMU_WAKEUP_INT_ST_WAKEUP_SDMMC1_INT_ST_SHIFT       (7U)
#define PMU_WAKEUP_INT_ST_WAKEUP_SDMMC1_INT_ST_MASK        (0x1U << PMU_WAKEUP_INT_ST_WAKEUP_SDMMC1_INT_ST_SHIFT)       /* 0x00000080 */
#define PMU_WAKEUP_INT_ST_WAKEUP_SDMMC2_INT_ST_SHIFT       (8U)
#define PMU_WAKEUP_INT_ST_WAKEUP_SDMMC2_INT_ST_MASK        (0x1U << PMU_WAKEUP_INT_ST_WAKEUP_SDMMC2_INT_ST_SHIFT)       /* 0x00000100 */
#define PMU_WAKEUP_INT_ST_WAKEUP_USB_INT_ST_SHIFT          (9U)
#define PMU_WAKEUP_INT_ST_WAKEUP_USB_INT_ST_MASK           (0x1U << PMU_WAKEUP_INT_ST_WAKEUP_USB_INT_ST_SHIFT)          /* 0x00000200 */
#define PMU_WAKEUP_INT_ST_WAKEUP_PCIE_INT_ST_SHIFT         (10U)
#define PMU_WAKEUP_INT_ST_WAKEUP_PCIE_INT_ST_MASK          (0x1U << PMU_WAKEUP_INT_ST_WAKEUP_PCIE_INT_ST_SHIFT)         /* 0x00000400 */
#define PMU_WAKEUP_INT_ST_WAKEUP_VAD_INT_ST_SHIFT          (11U)
#define PMU_WAKEUP_INT_ST_WAKEUP_VAD_INT_ST_MASK           (0x1U << PMU_WAKEUP_INT_ST_WAKEUP_VAD_INT_ST_SHIFT)          /* 0x00000800 */
#define PMU_WAKEUP_INT_ST_WAKEUP_TIMER_INT_ST_SHIFT        (12U)
#define PMU_WAKEUP_INT_ST_WAKEUP_TIMER_INT_ST_MASK         (0x1U << PMU_WAKEUP_INT_ST_WAKEUP_TIMER_INT_ST_SHIFT)        /* 0x00001000 */
#define PMU_WAKEUP_INT_ST_WAKEUP_PWM0_INT_ST_SHIFT         (13U)
#define PMU_WAKEUP_INT_ST_WAKEUP_PWM0_INT_ST_MASK          (0x1U << PMU_WAKEUP_INT_ST_WAKEUP_PWM0_INT_ST_SHIFT)         /* 0x00002000 */
#define PMU_WAKEUP_INT_ST_WAKEUP_TIMEOUT_INT_ST_SHIFT      (14U)
#define PMU_WAKEUP_INT_ST_WAKEUP_TIMEOUT_INT_ST_MASK       (0x1U << PMU_WAKEUP_INT_ST_WAKEUP_TIMEOUT_INT_ST_SHIFT)      /* 0x00004000 */
#define PMU_WAKEUP_INT_ST_WAKEUP_SYS_INT_ST_SHIFT          (15U)
#define PMU_WAKEUP_INT_ST_WAKEUP_SYS_INT_ST_MASK           (0x1U << PMU_WAKEUP_INT_ST_WAKEUP_SYS_INT_ST_SHIFT)          /* 0x00008000 */
/* WAKEUP_EDGE_CON */
#define PMU_WAKEUP_EDGE_CON_OFFSET                         (0x18U)
#define PMU_WAKEUP_EDGE_CON_EDGE_WAKEUP_EN_SHIFT           (0U)
#define PMU_WAKEUP_EDGE_CON_EDGE_WAKEUP_EN_MASK            (0xFFFFFFFFU << PMU_WAKEUP_EDGE_CON_EDGE_WAKEUP_EN_SHIFT)    /* 0xFFFFFFFF */
/* WAKEUP_EDGE_ST */
#define PMU_WAKEUP_EDGE_ST_OFFSET                          (0x1CU)
#define PMU_WAKEUP_EDGE_ST_EDGE_STATUS_SHIFT               (0U)
#define PMU_WAKEUP_EDGE_ST_EDGE_STATUS_MASK                (0xFFFFFFFFU << PMU_WAKEUP_EDGE_ST_EDGE_STATUS_SHIFT)        /* 0xFFFFFFFF */
/* BUS_IDLE_CON0 */
#define PMU_BUS_IDLE_CON0_OFFSET                           (0x40U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_MSCH_SHIFT              (0U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_MSCH_MASK               (0x1U << PMU_BUS_IDLE_CON0_IDLE_REQ_MSCH_SHIFT)              /* 0x00000001 */
#define PMU_BUS_IDLE_CON0_IDLE_REQ_GPU_SHIFT               (1U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_GPU_MASK                (0x1U << PMU_BUS_IDLE_CON0_IDLE_REQ_GPU_SHIFT)               /* 0x00000002 */
#define PMU_BUS_IDLE_CON0_IDLE_REQ_NPU_SHIFT               (2U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_NPU_MASK                (0x1U << PMU_BUS_IDLE_CON0_IDLE_REQ_NPU_SHIFT)               /* 0x00000004 */
#define PMU_BUS_IDLE_CON0_IDLE_REQ_VI_SHIFT                (3U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_VI_MASK                 (0x1U << PMU_BUS_IDLE_CON0_IDLE_REQ_VI_SHIFT)                /* 0x00000008 */
#define PMU_BUS_IDLE_CON0_IDLE_REQ_VO_SHIFT                (4U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_VO_MASK                 (0x1U << PMU_BUS_IDLE_CON0_IDLE_REQ_VO_SHIFT)                /* 0x00000010 */
#define PMU_BUS_IDLE_CON0_IDLE_REQ_RGA_SHIFT               (5U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_RGA_MASK                (0x1U << PMU_BUS_IDLE_CON0_IDLE_REQ_RGA_SHIFT)               /* 0x00000020 */
#define PMU_BUS_IDLE_CON0_IDLE_REQ_VPU_SHIFT               (6U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_VPU_MASK                (0x1U << PMU_BUS_IDLE_CON0_IDLE_REQ_VPU_SHIFT)               /* 0x00000040 */
#define PMU_BUS_IDLE_CON0_IDLE_REQ_RKVENC_SHIFT            (7U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_RKVENC_MASK             (0x1U << PMU_BUS_IDLE_CON0_IDLE_REQ_RKVENC_SHIFT)            /* 0x00000080 */
#define PMU_BUS_IDLE_CON0_IDLE_REQ_RKVDEC_SHIFT            (8U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_RKVDEC_MASK             (0x1U << PMU_BUS_IDLE_CON0_IDLE_REQ_RKVDEC_SHIFT)            /* 0x00000100 */
#define PMU_BUS_IDLE_CON0_IDLE_REQ_GIC_AUDIO_SHIFT         (9U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_GIC_AUDIO_MASK          (0x1U << PMU_BUS_IDLE_CON0_IDLE_REQ_GIC_AUDIO_SHIFT)         /* 0x00000200 */
#define PMU_BUS_IDLE_CON0_IDLE_REQ_PHP_SHIFT               (10U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_PHP_MASK                (0x1U << PMU_BUS_IDLE_CON0_IDLE_REQ_PHP_SHIFT)               /* 0x00000400 */
#define PMU_BUS_IDLE_CON0_IDLE_REQ_PIPE_SHIFT              (11U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_PIPE_MASK               (0x1U << PMU_BUS_IDLE_CON0_IDLE_REQ_PIPE_SHIFT)              /* 0x00000800 */
#define PMU_BUS_IDLE_CON0_IDLE_REQ_SECURE_FLASH_SHIFT      (12U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_SECURE_FLASH_MASK       (0x1U << PMU_BUS_IDLE_CON0_IDLE_REQ_SECURE_FLASH_SHIFT)      /* 0x00001000 */
#define PMU_BUS_IDLE_CON0_IDLE_REQ_PERIMID_SHIFT           (13U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_PERIMID_MASK            (0x1U << PMU_BUS_IDLE_CON0_IDLE_REQ_PERIMID_SHIFT)           /* 0x00002000 */
#define PMU_BUS_IDLE_CON0_IDLE_REQ_USB_SHIFT               (14U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_USB_MASK                (0x1U << PMU_BUS_IDLE_CON0_IDLE_REQ_USB_SHIFT)               /* 0x00004000 */
#define PMU_BUS_IDLE_CON0_IDLE_REQ_BUS_SHIFT               (15U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_BUS_MASK                (0x1U << PMU_BUS_IDLE_CON0_IDLE_REQ_BUS_SHIFT)               /* 0x00008000 */
/* BUS_IDLE_CON1 */
#define PMU_BUS_IDLE_CON1_OFFSET                           (0x44U)
#define PMU_BUS_IDLE_CON1_IDLE_REQ_TOP1_SHIFT              (0U)
#define PMU_BUS_IDLE_CON1_IDLE_REQ_TOP1_MASK               (0x1U << PMU_BUS_IDLE_CON1_IDLE_REQ_TOP1_SHIFT)              /* 0x00000001 */
#define PMU_BUS_IDLE_CON1_IDLE_REQ_TOP2_SHIFT              (1U)
#define PMU_BUS_IDLE_CON1_IDLE_REQ_TOP2_MASK               (0x1U << PMU_BUS_IDLE_CON1_IDLE_REQ_TOP2_SHIFT)              /* 0x00000002 */
#define PMU_BUS_IDLE_CON1_IDLE_REQ_PMU_SHIFT               (2U)
#define PMU_BUS_IDLE_CON1_IDLE_REQ_PMU_MASK                (0x1U << PMU_BUS_IDLE_CON1_IDLE_REQ_PMU_SHIFT)               /* 0x00000004 */
/* BUS_IDLE_SFTCON0 */
#define PMU_BUS_IDLE_SFTCON0_OFFSET                        (0x50U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_MSCH_SHIFT           (0U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_MSCH_MASK            (0x1U << PMU_BUS_IDLE_SFTCON0_IDLE_REQ_MSCH_SHIFT)           /* 0x00000001 */
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_GPU_SHIFT            (1U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_GPU_MASK             (0x1U << PMU_BUS_IDLE_SFTCON0_IDLE_REQ_GPU_SHIFT)            /* 0x00000002 */
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_NPU_SHIFT            (2U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_NPU_MASK             (0x1U << PMU_BUS_IDLE_SFTCON0_IDLE_REQ_NPU_SHIFT)            /* 0x00000004 */
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_VI_SHIFT             (3U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_VI_MASK              (0x1U << PMU_BUS_IDLE_SFTCON0_IDLE_REQ_VI_SHIFT)             /* 0x00000008 */
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_VO_SHIFT             (4U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_VO_MASK              (0x1U << PMU_BUS_IDLE_SFTCON0_IDLE_REQ_VO_SHIFT)             /* 0x00000010 */
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_RGA_SHIFT            (5U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_RGA_MASK             (0x1U << PMU_BUS_IDLE_SFTCON0_IDLE_REQ_RGA_SHIFT)            /* 0x00000020 */
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_VPU_SHIFT            (6U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_VPU_MASK             (0x1U << PMU_BUS_IDLE_SFTCON0_IDLE_REQ_VPU_SHIFT)            /* 0x00000040 */
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_RKVENC_SHIFT         (7U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_RKVENC_MASK          (0x1U << PMU_BUS_IDLE_SFTCON0_IDLE_REQ_RKVENC_SHIFT)         /* 0x00000080 */
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_RKVDEC_SHIFT         (8U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_RKVDEC_MASK          (0x1U << PMU_BUS_IDLE_SFTCON0_IDLE_REQ_RKVDEC_SHIFT)         /* 0x00000100 */
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_GIC_AUDIO_SHIFT      (9U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_GIC_AUDIO_MASK       (0x1U << PMU_BUS_IDLE_SFTCON0_IDLE_REQ_GIC_AUDIO_SHIFT)      /* 0x00000200 */
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_PHP_SHIFT            (10U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_PHP_MASK             (0x1U << PMU_BUS_IDLE_SFTCON0_IDLE_REQ_PHP_SHIFT)            /* 0x00000400 */
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_PIPE_SHIFT           (11U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_PIPE_MASK            (0x1U << PMU_BUS_IDLE_SFTCON0_IDLE_REQ_PIPE_SHIFT)           /* 0x00000800 */
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_SECURE_FLASH_SHIFT   (12U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_SECURE_FLASH_MASK    (0x1U << PMU_BUS_IDLE_SFTCON0_IDLE_REQ_SECURE_FLASH_SHIFT)   /* 0x00001000 */
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_PERIMID_SHIFT        (13U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_PERIMID_MASK         (0x1U << PMU_BUS_IDLE_SFTCON0_IDLE_REQ_PERIMID_SHIFT)        /* 0x00002000 */
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_USB_SHIFT            (14U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_USB_MASK             (0x1U << PMU_BUS_IDLE_SFTCON0_IDLE_REQ_USB_SHIFT)            /* 0x00004000 */
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_BUS_SHIFT            (15U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_BUS_MASK             (0x1U << PMU_BUS_IDLE_SFTCON0_IDLE_REQ_BUS_SHIFT)            /* 0x00008000 */
/* BUS_IDLE_SFTCON1 */
#define PMU_BUS_IDLE_SFTCON1_OFFSET                        (0x54U)
#define PMU_BUS_IDLE_SFTCON1_IDLE_REQ_TOP1_SHIFT           (0U)
#define PMU_BUS_IDLE_SFTCON1_IDLE_REQ_TOP1_MASK            (0x1U << PMU_BUS_IDLE_SFTCON1_IDLE_REQ_TOP1_SHIFT)           /* 0x00000001 */
#define PMU_BUS_IDLE_SFTCON1_IDLE_REQ_TOP2_SHIFT           (1U)
#define PMU_BUS_IDLE_SFTCON1_IDLE_REQ_TOP2_MASK            (0x1U << PMU_BUS_IDLE_SFTCON1_IDLE_REQ_TOP2_SHIFT)           /* 0x00000002 */
#define PMU_BUS_IDLE_SFTCON1_IDLE_REQ_PMU_SHIFT            (2U)
#define PMU_BUS_IDLE_SFTCON1_IDLE_REQ_PMU_MASK             (0x1U << PMU_BUS_IDLE_SFTCON1_IDLE_REQ_PMU_SHIFT)            /* 0x00000004 */
/* BUS_IDLE_ACK */
#define PMU_BUS_IDLE_ACK_OFFSET                            (0x60U)
#define PMU_BUS_IDLE_ACK                                   (0x0U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_MSCH_SHIFT               (0U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_MSCH_MASK                (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_MSCH_SHIFT)               /* 0x00000001 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_GPU_SHIFT                (1U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_GPU_MASK                 (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_GPU_SHIFT)                /* 0x00000002 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_NPU_SHIFT                (2U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_NPU_MASK                 (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_NPU_SHIFT)                /* 0x00000004 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_VI_SHIFT                 (3U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_VI_MASK                  (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_VI_SHIFT)                 /* 0x00000008 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_VO_SHIFT                 (4U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_VO_MASK                  (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_VO_SHIFT)                 /* 0x00000010 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_RGA_SHIFT                (5U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_RGA_MASK                 (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_RGA_SHIFT)                /* 0x00000020 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_VPU_SHIFT                (6U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_VPU_MASK                 (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_VPU_SHIFT)                /* 0x00000040 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_RKVENC_SHIFT             (7U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_RKVENC_MASK              (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_RKVENC_SHIFT)             /* 0x00000080 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_RKVDEC_SHIFT             (8U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_RKVDEC_MASK              (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_RKVDEC_SHIFT)             /* 0x00000100 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_GIC_AUDIO_SHIFT          (9U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_GIC_AUDIO_MASK           (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_GIC_AUDIO_SHIFT)          /* 0x00000200 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_PHP_SHIFT                (10U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_PHP_MASK                 (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_PHP_SHIFT)                /* 0x00000400 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_PIPE_SHIFT               (11U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_PIPE_MASK                (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_PIPE_SHIFT)               /* 0x00000800 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_SECURE_FLASH_SHIFT       (12U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_SECURE_FLASH_MASK        (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_SECURE_FLASH_SHIFT)       /* 0x00001000 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_PERIMID_SHIFT            (13U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_PERIMID_MASK             (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_PERIMID_SHIFT)            /* 0x00002000 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_USB_SHIFT                (14U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_USB_MASK                 (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_USB_SHIFT)                /* 0x00004000 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_BUS_SHIFT                (15U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_BUS_MASK                 (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_BUS_SHIFT)                /* 0x00008000 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_TOP1_SHIFT               (16U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_TOP1_MASK                (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_TOP1_SHIFT)               /* 0x00010000 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_TOP2_SHIFT               (17U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_TOP2_MASK                (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_TOP2_SHIFT)               /* 0x00020000 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_PMU_SHIFT                (18U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_PMU_MASK                 (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_PMU_SHIFT)                /* 0x00040000 */
/* BUS_IDLE_ST */
#define PMU_BUS_IDLE_ST_OFFSET                             (0x68U)
#define PMU_BUS_IDLE_ST                                    (0x0U)
#define PMU_BUS_IDLE_ST_IDLE_MSCH_SHIFT                    (0U)
#define PMU_BUS_IDLE_ST_IDLE_MSCH_MASK                     (0x1U << PMU_BUS_IDLE_ST_IDLE_MSCH_SHIFT)                    /* 0x00000001 */
#define PMU_BUS_IDLE_ST_IDLE_GPU_SHIFT                     (1U)
#define PMU_BUS_IDLE_ST_IDLE_GPU_MASK                      (0x1U << PMU_BUS_IDLE_ST_IDLE_GPU_SHIFT)                     /* 0x00000002 */
#define PMU_BUS_IDLE_ST_IDLE_NPU_SHIFT                     (2U)
#define PMU_BUS_IDLE_ST_IDLE_NPU_MASK                      (0x1U << PMU_BUS_IDLE_ST_IDLE_NPU_SHIFT)                     /* 0x00000004 */
#define PMU_BUS_IDLE_ST_IDLE_VI_SHIFT                      (3U)
#define PMU_BUS_IDLE_ST_IDLE_VI_MASK                       (0x1U << PMU_BUS_IDLE_ST_IDLE_VI_SHIFT)                      /* 0x00000008 */
#define PMU_BUS_IDLE_ST_IDLE_VO_SHIFT                      (4U)
#define PMU_BUS_IDLE_ST_IDLE_VO_MASK                       (0x1U << PMU_BUS_IDLE_ST_IDLE_VO_SHIFT)                      /* 0x00000010 */
#define PMU_BUS_IDLE_ST_IDLE_RGA_SHIFT                     (5U)
#define PMU_BUS_IDLE_ST_IDLE_RGA_MASK                      (0x1U << PMU_BUS_IDLE_ST_IDLE_RGA_SHIFT)                     /* 0x00000020 */
#define PMU_BUS_IDLE_ST_IDLE_VPU_SHIFT                     (6U)
#define PMU_BUS_IDLE_ST_IDLE_VPU_MASK                      (0x1U << PMU_BUS_IDLE_ST_IDLE_VPU_SHIFT)                     /* 0x00000040 */
#define PMU_BUS_IDLE_ST_IDLE_RKVENC_SHIFT                  (7U)
#define PMU_BUS_IDLE_ST_IDLE_RKVENC_MASK                   (0x1U << PMU_BUS_IDLE_ST_IDLE_RKVENC_SHIFT)                  /* 0x00000080 */
#define PMU_BUS_IDLE_ST_IDLE_RKVDEC_SHIFT                  (8U)
#define PMU_BUS_IDLE_ST_IDLE_RKVDEC_MASK                   (0x1U << PMU_BUS_IDLE_ST_IDLE_RKVDEC_SHIFT)                  /* 0x00000100 */
#define PMU_BUS_IDLE_ST_IDLE_GIC_AUDIO_SHIFT               (9U)
#define PMU_BUS_IDLE_ST_IDLE_GIC_AUDIO_MASK                (0x1U << PMU_BUS_IDLE_ST_IDLE_GIC_AUDIO_SHIFT)               /* 0x00000200 */
#define PMU_BUS_IDLE_ST_IDLE_PHP_SHIFT                     (10U)
#define PMU_BUS_IDLE_ST_IDLE_PHP_MASK                      (0x1U << PMU_BUS_IDLE_ST_IDLE_PHP_SHIFT)                     /* 0x00000400 */
#define PMU_BUS_IDLE_ST_IDLE_PIPE_SHIFT                    (11U)
#define PMU_BUS_IDLE_ST_IDLE_PIPE_MASK                     (0x1U << PMU_BUS_IDLE_ST_IDLE_PIPE_SHIFT)                    /* 0x00000800 */
#define PMU_BUS_IDLE_ST_IDLE_SECURE_FLASH_SHIFT            (12U)
#define PMU_BUS_IDLE_ST_IDLE_SECURE_FLASH_MASK             (0x1U << PMU_BUS_IDLE_ST_IDLE_SECURE_FLASH_SHIFT)            /* 0x00001000 */
#define PMU_BUS_IDLE_ST_IDLE_PERIMID_SHIFT                 (13U)
#define PMU_BUS_IDLE_ST_IDLE_PERIMID_MASK                  (0x1U << PMU_BUS_IDLE_ST_IDLE_PERIMID_SHIFT)                 /* 0x00002000 */
#define PMU_BUS_IDLE_ST_IDLE_USB_SHIFT                     (14U)
#define PMU_BUS_IDLE_ST_IDLE_USB_MASK                      (0x1U << PMU_BUS_IDLE_ST_IDLE_USB_SHIFT)                     /* 0x00004000 */
#define PMU_BUS_IDLE_ST_IDLE_BUS_SHIFT                     (15U)
#define PMU_BUS_IDLE_ST_IDLE_BUS_MASK                      (0x1U << PMU_BUS_IDLE_ST_IDLE_BUS_SHIFT)                     /* 0x00008000 */
#define PMU_BUS_IDLE_ST_IDLE_TOP1_SHIFT                    (16U)
#define PMU_BUS_IDLE_ST_IDLE_TOP1_MASK                     (0x1U << PMU_BUS_IDLE_ST_IDLE_TOP1_SHIFT)                    /* 0x00010000 */
#define PMU_BUS_IDLE_ST_IDLE_TOP2_SHIFT                    (17U)
#define PMU_BUS_IDLE_ST_IDLE_TOP2_MASK                     (0x1U << PMU_BUS_IDLE_ST_IDLE_TOP2_SHIFT)                    /* 0x00020000 */
#define PMU_BUS_IDLE_ST_IDLE_PMU_SHIFT                     (18U)
#define PMU_BUS_IDLE_ST_IDLE_PMU_MASK                      (0x1U << PMU_BUS_IDLE_ST_IDLE_PMU_SHIFT)                     /* 0x00040000 */
/* NOC_AUTO_CON0 */
#define PMU_NOC_AUTO_CON0_OFFSET                           (0x70U)
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_MSCH_SHIFT             (0U)
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_MSCH_MASK              (0x1U << PMU_NOC_AUTO_CON0_AUTO_IDLE_MSCH_SHIFT)             /* 0x00000001 */
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_GPU_SHIFT              (1U)
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_GPU_MASK               (0x1U << PMU_NOC_AUTO_CON0_AUTO_IDLE_GPU_SHIFT)              /* 0x00000002 */
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_NPU_SHIFT              (2U)
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_NPU_MASK               (0x1U << PMU_NOC_AUTO_CON0_AUTO_IDLE_NPU_SHIFT)              /* 0x00000004 */
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_VI_SHIFT               (3U)
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_VI_MASK                (0x1U << PMU_NOC_AUTO_CON0_AUTO_IDLE_VI_SHIFT)               /* 0x00000008 */
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_VO_SHIFT               (4U)
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_VO_MASK                (0x1U << PMU_NOC_AUTO_CON0_AUTO_IDLE_VO_SHIFT)               /* 0x00000010 */
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_RGA_SHIFT              (5U)
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_RGA_MASK               (0x1U << PMU_NOC_AUTO_CON0_AUTO_IDLE_RGA_SHIFT)              /* 0x00000020 */
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_VPU_SHIFT              (6U)
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_VPU_MASK               (0x1U << PMU_NOC_AUTO_CON0_AUTO_IDLE_VPU_SHIFT)              /* 0x00000040 */
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_RKVENC_SHIFT           (7U)
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_RKVENC_MASK            (0x1U << PMU_NOC_AUTO_CON0_AUTO_IDLE_RKVENC_SHIFT)           /* 0x00000080 */
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_RKVDEC_SHIFT           (8U)
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_RKVDEC_MASK            (0x1U << PMU_NOC_AUTO_CON0_AUTO_IDLE_RKVDEC_SHIFT)           /* 0x00000100 */
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_GIC_AUDIO_SHIFT        (9U)
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_GIC_AUDIO_MASK         (0x1U << PMU_NOC_AUTO_CON0_AUTO_IDLE_GIC_AUDIO_SHIFT)        /* 0x00000200 */
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_PHP_SHIFT              (10U)
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_PHP_MASK               (0x1U << PMU_NOC_AUTO_CON0_AUTO_IDLE_PHP_SHIFT)              /* 0x00000400 */
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_PIPE_SHIFT             (11U)
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_PIPE_MASK              (0x1U << PMU_NOC_AUTO_CON0_AUTO_IDLE_PIPE_SHIFT)             /* 0x00000800 */
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_SECURE_FLASH_SHIFT     (12U)
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_SECURE_FLASH_MASK      (0x1U << PMU_NOC_AUTO_CON0_AUTO_IDLE_SECURE_FLASH_SHIFT)     /* 0x00001000 */
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_PERIMID_SHIFT          (13U)
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_PERIMID_MASK           (0x1U << PMU_NOC_AUTO_CON0_AUTO_IDLE_PERIMID_SHIFT)          /* 0x00002000 */
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_USB_SHIFT              (14U)
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_USB_MASK               (0x1U << PMU_NOC_AUTO_CON0_AUTO_IDLE_USB_SHIFT)              /* 0x00004000 */
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_BUS_SHIFT              (15U)
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_BUS_MASK               (0x1U << PMU_NOC_AUTO_CON0_AUTO_IDLE_BUS_SHIFT)              /* 0x00008000 */
/* NOC_AUTO_CON1 */
#define PMU_NOC_AUTO_CON1_OFFSET                           (0x74U)
#define PMU_NOC_AUTO_CON1_AUTO_IDLE_TOP1_SHIFT             (0U)
#define PMU_NOC_AUTO_CON1_AUTO_IDLE_TOP1_MASK              (0x1U << PMU_NOC_AUTO_CON1_AUTO_IDLE_TOP1_SHIFT)             /* 0x00000001 */
#define PMU_NOC_AUTO_CON1_AUTO_IDLE_TOP2_SHIFT             (1U)
#define PMU_NOC_AUTO_CON1_AUTO_IDLE_TOP2_MASK              (0x1U << PMU_NOC_AUTO_CON1_AUTO_IDLE_TOP2_SHIFT)             /* 0x00000002 */
#define PMU_NOC_AUTO_CON1_AUTO_IDLE_PMU_SHIFT              (2U)
#define PMU_NOC_AUTO_CON1_AUTO_IDLE_PMU_MASK               (0x1U << PMU_NOC_AUTO_CON1_AUTO_IDLE_PMU_SHIFT)              /* 0x00000004 */
#define PMU_NOC_AUTO_CON1_AUTO_IDLE_CPU_SHIFT              (3U)
#define PMU_NOC_AUTO_CON1_AUTO_IDLE_CPU_MASK               (0x1U << PMU_NOC_AUTO_CON1_AUTO_IDLE_CPU_SHIFT)              /* 0x00000008 */
/* DDR_PWR_CON */
#define PMU_DDR_PWR_CON_OFFSET                             (0x80U)
#define PMU_DDR_PWR_CON_DDR_SREF_ENA_SHIFT                 (0U)
#define PMU_DDR_PWR_CON_DDR_SREF_ENA_MASK                  (0x1U << PMU_DDR_PWR_CON_DDR_SREF_ENA_SHIFT)                 /* 0x00000001 */
#define PMU_DDR_PWR_CON_DDRIO_RET_EXIT_ENA_SHIFT           (2U)
#define PMU_DDR_PWR_CON_DDRIO_RET_EXIT_ENA_MASK            (0x1U << PMU_DDR_PWR_CON_DDRIO_RET_EXIT_ENA_SHIFT)           /* 0x00000004 */
#define PMU_DDR_PWR_CON_DDRPHY_AUTO_GATING_ENA_SHIFT       (4U)
#define PMU_DDR_PWR_CON_DDRPHY_AUTO_GATING_ENA_MASK        (0x1U << PMU_DDR_PWR_CON_DDRPHY_AUTO_GATING_ENA_SHIFT)       /* 0x00000010 */
/* DDR_PWR_SFTCON */
#define PMU_DDR_PWR_SFTCON_OFFSET                          (0x84U)
#define PMU_DDR_PWR_SFTCON_SW_DDR_SREF_REQ_SHIFT           (0U)
#define PMU_DDR_PWR_SFTCON_SW_DDR_SREF_REQ_MASK            (0x1U << PMU_DDR_PWR_SFTCON_SW_DDR_SREF_REQ_SHIFT)           /* 0x00000001 */
#define PMU_DDR_PWR_SFTCON_SW_DDRIO_RET_REQ_SHIFT          (1U)
#define PMU_DDR_PWR_SFTCON_SW_DDRIO_RET_REQ_MASK           (0x1U << PMU_DDR_PWR_SFTCON_SW_DDRIO_RET_REQ_SHIFT)          /* 0x00000002 */
#define PMU_DDR_PWR_SFTCON_SW_DDRIO_RET_EXIT_SHIFT         (2U)
#define PMU_DDR_PWR_SFTCON_SW_DDRIO_RET_EXIT_MASK          (0x1U << PMU_DDR_PWR_SFTCON_SW_DDRIO_RET_EXIT_SHIFT)         /* 0x00000004 */
#define PMU_DDR_PWR_SFTCON_DDRCTL_ACTIVE_WAIT_SHIFT        (3U)
#define PMU_DDR_PWR_SFTCON_DDRCTL_ACTIVE_WAIT_MASK         (0x1U << PMU_DDR_PWR_SFTCON_DDRCTL_ACTIVE_WAIT_SHIFT)        /* 0x00000008 */
/* DDR_PWR_STATE */
#define PMU_DDR_PWR_STATE_OFFSET                           (0x88U)
#define PMU_DDR_PWR_STATE                                  (0x0U)
#define PMU_DDR_PWR_STATE_DDR_POWER_STATE_SHIFT            (0U)
#define PMU_DDR_PWR_STATE_DDR_POWER_STATE_MASK             (0x7U << PMU_DDR_PWR_STATE_DDR_POWER_STATE_SHIFT)            /* 0x00000007 */
/* DDR_PWR_ST */
#define PMU_DDR_PWR_ST_OFFSET                              (0x8CU)
#define PMU_DDR_PWR_ST                                     (0x2U)
#define PMU_DDR_PWR_ST_DDRCTL_C_SYSACK_SHIFT               (0U)
#define PMU_DDR_PWR_ST_DDRCTL_C_SYSACK_MASK                (0x1U << PMU_DDR_PWR_ST_DDRCTL_C_SYSACK_SHIFT)               /* 0x00000001 */
#define PMU_DDR_PWR_ST_DDRCTL_C_ACTIVE_SHIFT               (1U)
#define PMU_DDR_PWR_ST_DDRCTL_C_ACTIVE_MASK                (0x1U << PMU_DDR_PWR_ST_DDRCTL_C_ACTIVE_SHIFT)               /* 0x00000002 */
#define PMU_DDR_PWR_ST_DDRIO_RET_SHIFT                     (2U)
#define PMU_DDR_PWR_ST_DDRIO_RET_MASK                      (0x1U << PMU_DDR_PWR_ST_DDRIO_RET_SHIFT)                     /* 0x00000004 */
/* PWR_GATE_CON */
#define PMU_PWR_GATE_CON_OFFSET                            (0x90U)
#define PMU_PWR_GATE_CON_PD_GPU_DWN_ENA_SHIFT              (0U)
#define PMU_PWR_GATE_CON_PD_GPU_DWN_ENA_MASK               (0x1U << PMU_PWR_GATE_CON_PD_GPU_DWN_ENA_SHIFT)              /* 0x00000001 */
#define PMU_PWR_GATE_CON_PD_NPU_DWN_ENA_SHIFT              (1U)
#define PMU_PWR_GATE_CON_PD_NPU_DWN_ENA_MASK               (0x1U << PMU_PWR_GATE_CON_PD_NPU_DWN_ENA_SHIFT)              /* 0x00000002 */
#define PMU_PWR_GATE_CON_PD_VPU_DWN_ENA_SHIFT              (2U)
#define PMU_PWR_GATE_CON_PD_VPU_DWN_ENA_MASK               (0x1U << PMU_PWR_GATE_CON_PD_VPU_DWN_ENA_SHIFT)              /* 0x00000004 */
#define PMU_PWR_GATE_CON_PD_RKVENC_DWN_ENA_SHIFT           (3U)
#define PMU_PWR_GATE_CON_PD_RKVENC_DWN_ENA_MASK            (0x1U << PMU_PWR_GATE_CON_PD_RKVENC_DWN_ENA_SHIFT)           /* 0x00000008 */
#define PMU_PWR_GATE_CON_PD_RKVDEC_DWN_ENA_SHIFT           (4U)
#define PMU_PWR_GATE_CON_PD_RKVDEC_DWN_ENA_MASK            (0x1U << PMU_PWR_GATE_CON_PD_RKVDEC_DWN_ENA_SHIFT)           /* 0x00000010 */
#define PMU_PWR_GATE_CON_PD_RGA_DWN_ENA_SHIFT              (5U)
#define PMU_PWR_GATE_CON_PD_RGA_DWN_ENA_MASK               (0x1U << PMU_PWR_GATE_CON_PD_RGA_DWN_ENA_SHIFT)              /* 0x00000020 */
#define PMU_PWR_GATE_CON_PD_VI_DWN_ENA_SHIFT               (6U)
#define PMU_PWR_GATE_CON_PD_VI_DWN_ENA_MASK                (0x1U << PMU_PWR_GATE_CON_PD_VI_DWN_ENA_SHIFT)               /* 0x00000040 */
#define PMU_PWR_GATE_CON_PD_VO_DWN_ENA_SHIFT               (7U)
#define PMU_PWR_GATE_CON_PD_VO_DWN_ENA_MASK                (0x1U << PMU_PWR_GATE_CON_PD_VO_DWN_ENA_SHIFT)               /* 0x00000080 */
#define PMU_PWR_GATE_CON_PD_PIPE_DWN_ENA_SHIFT             (8U)
#define PMU_PWR_GATE_CON_PD_PIPE_DWN_ENA_MASK              (0x1U << PMU_PWR_GATE_CON_PD_PIPE_DWN_ENA_SHIFT)             /* 0x00000100 */
#define PMU_PWR_GATE_CON_PD_DDR_DWN_ENA_SHIFT              (9U)
#define PMU_PWR_GATE_CON_PD_DDR_DWN_ENA_MASK               (0x1U << PMU_PWR_GATE_CON_PD_DDR_DWN_ENA_SHIFT)              /* 0x00000200 */
/* PWR_GATE_STATE */
#define PMU_PWR_GATE_STATE_OFFSET                          (0x94U)
#define PMU_PWR_GATE_STATE                                 (0x0U)
#define PMU_PWR_GATE_STATE_POWER_GATE_STATE_SHIFT          (0U)
#define PMU_PWR_GATE_STATE_POWER_GATE_STATE_MASK           (0x7U << PMU_PWR_GATE_STATE_POWER_GATE_STATE_SHIFT)          /* 0x00000007 */
/* PWR_DWN_ST */
#define PMU_PWR_DWN_ST_OFFSET                              (0x98U)
#define PMU_PWR_DWN_ST                                     (0x0U)
#define PMU_PWR_DWN_ST_PD_GPU_DWN_STAT_SHIFT               (0U)
#define PMU_PWR_DWN_ST_PD_GPU_DWN_STAT_MASK                (0x1U << PMU_PWR_DWN_ST_PD_GPU_DWN_STAT_SHIFT)               /* 0x00000001 */
#define PMU_PWR_DWN_ST_PD_NPU_DWN_STAT_SHIFT               (1U)
#define PMU_PWR_DWN_ST_PD_NPU_DWN_STAT_MASK                (0x1U << PMU_PWR_DWN_ST_PD_NPU_DWN_STAT_SHIFT)               /* 0x00000002 */
#define PMU_PWR_DWN_ST_PD_VPU_DWN_STAT_SHIFT               (2U)
#define PMU_PWR_DWN_ST_PD_VPU_DWN_STAT_MASK                (0x1U << PMU_PWR_DWN_ST_PD_VPU_DWN_STAT_SHIFT)               /* 0x00000004 */
#define PMU_PWR_DWN_ST_PD_RKVENC_DWN_STAT_SHIFT            (3U)
#define PMU_PWR_DWN_ST_PD_RKVENC_DWN_STAT_MASK             (0x1U << PMU_PWR_DWN_ST_PD_RKVENC_DWN_STAT_SHIFT)            /* 0x00000008 */
#define PMU_PWR_DWN_ST_PD_RKVDEC_DWN_STAT_SHIFT            (4U)
#define PMU_PWR_DWN_ST_PD_RKVDEC_DWN_STAT_MASK             (0x1U << PMU_PWR_DWN_ST_PD_RKVDEC_DWN_STAT_SHIFT)            /* 0x00000010 */
#define PMU_PWR_DWN_ST_PD_RGA_DWN_STAT_SHIFT               (5U)
#define PMU_PWR_DWN_ST_PD_RGA_DWN_STAT_MASK                (0x1U << PMU_PWR_DWN_ST_PD_RGA_DWN_STAT_SHIFT)               /* 0x00000020 */
#define PMU_PWR_DWN_ST_PD_VI_DWN_STAT_SHIFT                (6U)
#define PMU_PWR_DWN_ST_PD_VI_DWN_STAT_MASK                 (0x1U << PMU_PWR_DWN_ST_PD_VI_DWN_STAT_SHIFT)                /* 0x00000040 */
#define PMU_PWR_DWN_ST_PD_VO_DWN_STAT_SHIFT                (7U)
#define PMU_PWR_DWN_ST_PD_VO_DWN_STAT_MASK                 (0x1U << PMU_PWR_DWN_ST_PD_VO_DWN_STAT_SHIFT)                /* 0x00000080 */
#define PMU_PWR_DWN_ST_PD_PIPE_DWN_STAT_SHIFT              (8U)
#define PMU_PWR_DWN_ST_PD_PIPE_DWN_STAT_MASK               (0x1U << PMU_PWR_DWN_ST_PD_PIPE_DWN_STAT_SHIFT)              /* 0x00000100 */
#define PMU_PWR_DWN_ST_PD_DDR_DWN_STAT_SHIFT               (9U)
#define PMU_PWR_DWN_ST_PD_DDR_DWN_STAT_MASK                (0x1U << PMU_PWR_DWN_ST_PD_DDR_DWN_STAT_SHIFT)               /* 0x00000200 */
/* PWR_GATE_SFTCON */
#define PMU_PWR_GATE_SFTCON_OFFSET                         (0xA0U)
#define PMU_PWR_GATE_SFTCON_PD_GPU_DWN_ENA_SHIFT           (0U)
#define PMU_PWR_GATE_SFTCON_PD_GPU_DWN_ENA_MASK            (0x1U << PMU_PWR_GATE_SFTCON_PD_GPU_DWN_ENA_SHIFT)           /* 0x00000001 */
#define PMU_PWR_GATE_SFTCON_PD_NPU_DWN_ENA_SHIFT           (1U)
#define PMU_PWR_GATE_SFTCON_PD_NPU_DWN_ENA_MASK            (0x1U << PMU_PWR_GATE_SFTCON_PD_NPU_DWN_ENA_SHIFT)           /* 0x00000002 */
#define PMU_PWR_GATE_SFTCON_PD_VPU_DWN_ENA_SHIFT           (2U)
#define PMU_PWR_GATE_SFTCON_PD_VPU_DWN_ENA_MASK            (0x1U << PMU_PWR_GATE_SFTCON_PD_VPU_DWN_ENA_SHIFT)           /* 0x00000004 */
#define PMU_PWR_GATE_SFTCON_PD_RKVENC_DWN_ENA_SHIFT        (3U)
#define PMU_PWR_GATE_SFTCON_PD_RKVENC_DWN_ENA_MASK         (0x1U << PMU_PWR_GATE_SFTCON_PD_RKVENC_DWN_ENA_SHIFT)        /* 0x00000008 */
#define PMU_PWR_GATE_SFTCON_PD_RKVDEC_DWN_ENA_SHIFT        (4U)
#define PMU_PWR_GATE_SFTCON_PD_RKVDEC_DWN_ENA_MASK         (0x1U << PMU_PWR_GATE_SFTCON_PD_RKVDEC_DWN_ENA_SHIFT)        /* 0x00000010 */
#define PMU_PWR_GATE_SFTCON_PD_RGA_DWN_ENA_SHIFT           (5U)
#define PMU_PWR_GATE_SFTCON_PD_RGA_DWN_ENA_MASK            (0x1U << PMU_PWR_GATE_SFTCON_PD_RGA_DWN_ENA_SHIFT)           /* 0x00000020 */
#define PMU_PWR_GATE_SFTCON_PD_VI_DWN_ENA_SHIFT            (6U)
#define PMU_PWR_GATE_SFTCON_PD_VI_DWN_ENA_MASK             (0x1U << PMU_PWR_GATE_SFTCON_PD_VI_DWN_ENA_SHIFT)            /* 0x00000040 */
#define PMU_PWR_GATE_SFTCON_PD_VO_DWN_ENA_SHIFT            (7U)
#define PMU_PWR_GATE_SFTCON_PD_VO_DWN_ENA_MASK             (0x1U << PMU_PWR_GATE_SFTCON_PD_VO_DWN_ENA_SHIFT)            /* 0x00000080 */
#define PMU_PWR_GATE_SFTCON_PD_PIPE_DWN_ENA_SHIFT          (8U)
#define PMU_PWR_GATE_SFTCON_PD_PIPE_DWN_ENA_MASK           (0x1U << PMU_PWR_GATE_SFTCON_PD_PIPE_DWN_ENA_SHIFT)          /* 0x00000100 */
#define PMU_PWR_GATE_SFTCON_PD_DDR_DWN_ENA_SHIFT           (9U)
#define PMU_PWR_GATE_SFTCON_PD_DDR_DWN_ENA_MASK            (0x1U << PMU_PWR_GATE_SFTCON_PD_DDR_DWN_ENA_SHIFT)           /* 0x00000200 */
/* VOL_GATE_SFTCON */
#define PMU_VOL_GATE_SFTCON_OFFSET                         (0xA8U)
#define PMU_VOL_GATE_SFTCON_VD_GPU_ENA_SHIFT               (0U)
#define PMU_VOL_GATE_SFTCON_VD_GPU_ENA_MASK                (0x1U << PMU_VOL_GATE_SFTCON_VD_GPU_ENA_SHIFT)               /* 0x00000001 */
#define PMU_VOL_GATE_SFTCON_VD_NPU_ENA_SHIFT               (1U)
#define PMU_VOL_GATE_SFTCON_VD_NPU_ENA_MASK                (0x1U << PMU_VOL_GATE_SFTCON_VD_NPU_ENA_SHIFT)               /* 0x00000002 */
/* CRU_PWR_CON */
#define PMU_CRU_PWR_CON_OFFSET                             (0xB0U)
#define PMU_CRU_PWR_CON_ALIVE_32K_ENA_SHIFT                (0U)
#define PMU_CRU_PWR_CON_ALIVE_32K_ENA_MASK                 (0x1U << PMU_CRU_PWR_CON_ALIVE_32K_ENA_SHIFT)                /* 0x00000001 */
#define PMU_CRU_PWR_CON_OSC_DIS_ENA_SHIFT                  (1U)
#define PMU_CRU_PWR_CON_OSC_DIS_ENA_MASK                   (0x1U << PMU_CRU_PWR_CON_OSC_DIS_ENA_SHIFT)                  /* 0x00000002 */
#define PMU_CRU_PWR_CON_WAKEUP_RST_ENA_SHIFT               (2U)
#define PMU_CRU_PWR_CON_WAKEUP_RST_ENA_MASK                (0x1U << PMU_CRU_PWR_CON_WAKEUP_RST_ENA_SHIFT)               /* 0x00000004 */
#define PMU_CRU_PWR_CON_INPUT_CLAMP_ENA_SHIFT              (3U)
#define PMU_CRU_PWR_CON_INPUT_CLAMP_ENA_MASK               (0x1U << PMU_CRU_PWR_CON_INPUT_CLAMP_ENA_SHIFT)              /* 0x00000008 */
#define PMU_CRU_PWR_CON_ALIVE_OSC_ENA_SHIFT                (4U)
#define PMU_CRU_PWR_CON_ALIVE_OSC_ENA_MASK                 (0x1U << PMU_CRU_PWR_CON_ALIVE_OSC_ENA_SHIFT)                /* 0x00000010 */
#define PMU_CRU_PWR_CON_POWER_OFF_ENA_SHIFT                (5U)
#define PMU_CRU_PWR_CON_POWER_OFF_ENA_MASK                 (0x1U << PMU_CRU_PWR_CON_POWER_OFF_ENA_SHIFT)                /* 0x00000020 */
#define PMU_CRU_PWR_CON_PWM_SWITCH_ENA_SHIFT               (6U)
#define PMU_CRU_PWR_CON_PWM_SWITCH_ENA_MASK                (0x1U << PMU_CRU_PWR_CON_PWM_SWITCH_ENA_SHIFT)               /* 0x00000040 */
#define PMU_CRU_PWR_CON_PWM_GPIO_IOE_ENA_SHIFT             (7U)
#define PMU_CRU_PWR_CON_PWM_GPIO_IOE_ENA_MASK              (0x1U << PMU_CRU_PWR_CON_PWM_GPIO_IOE_ENA_SHIFT)             /* 0x00000080 */
#define PMU_CRU_PWR_CON_PWM_SWITCH_IOUT_SHIFT              (8U)
#define PMU_CRU_PWR_CON_PWM_SWITCH_IOUT_MASK               (0x1U << PMU_CRU_PWR_CON_PWM_SWITCH_IOUT_SHIFT)              /* 0x00000100 */
#define PMU_CRU_PWR_CON_PD_BUS_CLK_SRC_GATE_ENA_SHIFT      (9U)
#define PMU_CRU_PWR_CON_PD_BUS_CLK_SRC_GATE_ENA_MASK       (0x1U << PMU_CRU_PWR_CON_PD_BUS_CLK_SRC_GATE_ENA_SHIFT)      /* 0x00000200 */
#define PMU_CRU_PWR_CON_PD_PERI_CLK_SRC_GATE_ENA_SHIFT     (10U)
#define PMU_CRU_PWR_CON_PD_PERI_CLK_SRC_GATE_ENA_MASK      (0x1U << PMU_CRU_PWR_CON_PD_PERI_CLK_SRC_GATE_ENA_SHIFT)     /* 0x00000400 */
#define PMU_CRU_PWR_CON_PD_PMU_CLK_SRC_GATE_ENA_SHIFT      (11U)
#define PMU_CRU_PWR_CON_PD_PMU_CLK_SRC_GATE_ENA_MASK       (0x1U << PMU_CRU_PWR_CON_PD_PMU_CLK_SRC_GATE_ENA_SHIFT)      /* 0x00000800 */
#define PMU_CRU_PWR_CON_PMUMEM_CLK_SRC_GATE_ENA_SHIFT      (12U)
#define PMU_CRU_PWR_CON_PMUMEM_CLK_SRC_GATE_ENA_MASK       (0x1U << PMU_CRU_PWR_CON_PMUMEM_CLK_SRC_GATE_ENA_SHIFT)      /* 0x00001000 */
/* CRU_PWR_SFTCON */
#define PMU_CRU_PWR_SFTCON_OFFSET                          (0xB4U)
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
/* CRU_PWR_STATE */
#define PMU_CRU_PWR_STATE_OFFSET                           (0xB8U)
#define PMU_CRU_PWR_STATE                                  (0x0U)
#define PMU_CRU_PWR_STATE_CRU_POWER_STATE_SHIFT            (0U)
#define PMU_CRU_PWR_STATE_CRU_POWER_STATE_MASK             (0xFU << PMU_CRU_PWR_STATE_CRU_POWER_STATE_SHIFT)            /* 0x0000000F */
/* PLLPD_CON */
#define PMU_PLLPD_CON_OFFSET                               (0xC0U)
#define PMU_PLLPD_CON_APLL_PD_ENA_SHIFT                    (0U)
#define PMU_PLLPD_CON_APLL_PD_ENA_MASK                     (0x1U << PMU_PLLPD_CON_APLL_PD_ENA_SHIFT)                    /* 0x00000001 */
#define PMU_PLLPD_CON_DPLL_PD_ENA_SHIFT                    (1U)
#define PMU_PLLPD_CON_DPLL_PD_ENA_MASK                     (0x1U << PMU_PLLPD_CON_DPLL_PD_ENA_SHIFT)                    /* 0x00000002 */
#define PMU_PLLPD_CON_CPLL_PD_ENA_SHIFT                    (2U)
#define PMU_PLLPD_CON_CPLL_PD_ENA_MASK                     (0x1U << PMU_PLLPD_CON_CPLL_PD_ENA_SHIFT)                    /* 0x00000004 */
#define PMU_PLLPD_CON_GPLL_PD_ENA_SHIFT                    (3U)
#define PMU_PLLPD_CON_GPLL_PD_ENA_MASK                     (0x1U << PMU_PLLPD_CON_GPLL_PD_ENA_SHIFT)                    /* 0x00000008 */
#define PMU_PLLPD_CON_MPLL_PD_ENA_SHIFT                    (4U)
#define PMU_PLLPD_CON_MPLL_PD_ENA_MASK                     (0x1U << PMU_PLLPD_CON_MPLL_PD_ENA_SHIFT)                    /* 0x00000010 */
#define PMU_PLLPD_CON_NPLL_PD_ENA_SHIFT                    (5U)
#define PMU_PLLPD_CON_NPLL_PD_ENA_MASK                     (0x1U << PMU_PLLPD_CON_NPLL_PD_ENA_SHIFT)                    /* 0x00000020 */
#define PMU_PLLPD_CON_HPLL_PD_ENA_SHIFT                    (6U)
#define PMU_PLLPD_CON_HPLL_PD_ENA_MASK                     (0x1U << PMU_PLLPD_CON_HPLL_PD_ENA_SHIFT)                    /* 0x00000040 */
#define PMU_PLLPD_CON_PPLL_PD_ENA_SHIFT                    (7U)
#define PMU_PLLPD_CON_PPLL_PD_ENA_MASK                     (0x1U << PMU_PLLPD_CON_PPLL_PD_ENA_SHIFT)                    /* 0x00000080 */
#define PMU_PLLPD_CON_VPLL_PD_ENA_SHIFT                    (8U)
#define PMU_PLLPD_CON_VPLL_PD_ENA_MASK                     (0x1U << PMU_PLLPD_CON_VPLL_PD_ENA_SHIFT)                    /* 0x00000100 */
/* PLLPD_SFTCON */
#define PMU_PLLPD_SFTCON_OFFSET                            (0xC4U)
#define PMU_PLLPD_SFTCON_APLL_PD_ENA_SHIFT                 (0U)
#define PMU_PLLPD_SFTCON_APLL_PD_ENA_MASK                  (0x1U << PMU_PLLPD_SFTCON_APLL_PD_ENA_SHIFT)                 /* 0x00000001 */
#define PMU_PLLPD_SFTCON_DPLL_PD_ENA_SHIFT                 (1U)
#define PMU_PLLPD_SFTCON_DPLL_PD_ENA_MASK                  (0x1U << PMU_PLLPD_SFTCON_DPLL_PD_ENA_SHIFT)                 /* 0x00000002 */
#define PMU_PLLPD_SFTCON_CPLL_PD_ENA_SHIFT                 (2U)
#define PMU_PLLPD_SFTCON_CPLL_PD_ENA_MASK                  (0x1U << PMU_PLLPD_SFTCON_CPLL_PD_ENA_SHIFT)                 /* 0x00000004 */
#define PMU_PLLPD_SFTCON_GPLL_PD_ENA_SHIFT                 (3U)
#define PMU_PLLPD_SFTCON_GPLL_PD_ENA_MASK                  (0x1U << PMU_PLLPD_SFTCON_GPLL_PD_ENA_SHIFT)                 /* 0x00000008 */
#define PMU_PLLPD_SFTCON_MPLL_PD_ENA_SHIFT                 (4U)
#define PMU_PLLPD_SFTCON_MPLL_PD_ENA_MASK                  (0x1U << PMU_PLLPD_SFTCON_MPLL_PD_ENA_SHIFT)                 /* 0x00000010 */
#define PMU_PLLPD_SFTCON_NPLL_PD_ENA_SHIFT                 (5U)
#define PMU_PLLPD_SFTCON_NPLL_PD_ENA_MASK                  (0x1U << PMU_PLLPD_SFTCON_NPLL_PD_ENA_SHIFT)                 /* 0x00000020 */
#define PMU_PLLPD_SFTCON_HPLL_PD_ENA_SHIFT                 (6U)
#define PMU_PLLPD_SFTCON_HPLL_PD_ENA_MASK                  (0x1U << PMU_PLLPD_SFTCON_HPLL_PD_ENA_SHIFT)                 /* 0x00000040 */
#define PMU_PLLPD_SFTCON_PPLL_PD_ENA_SHIFT                 (7U)
#define PMU_PLLPD_SFTCON_PPLL_PD_ENA_MASK                  (0x1U << PMU_PLLPD_SFTCON_PPLL_PD_ENA_SHIFT)                 /* 0x00000080 */
#define PMU_PLLPD_SFTCON_VPLL_PD_ENA_SHIFT                 (8U)
#define PMU_PLLPD_SFTCON_VPLL_PD_ENA_MASK                  (0x1U << PMU_PLLPD_SFTCON_VPLL_PD_ENA_SHIFT)                 /* 0x00000100 */
/* INFO_TX_CON */
#define PMU_INFO_TX_CON_OFFSET                             (0xD0U)
#define PMU_INFO_TX_CON_INFO_TX_EN_SHIFT                   (0U)
#define PMU_INFO_TX_CON_INFO_TX_EN_MASK                    (0x1U << PMU_INFO_TX_CON_INFO_TX_EN_SHIFT)                   /* 0x00000001 */
#define PMU_INFO_TX_CON_INFO_TX_CON_SHIFT                  (4U)
#define PMU_INFO_TX_CON_INFO_TX_CON_MASK                   (0xFU << PMU_INFO_TX_CON_INFO_TX_CON_SHIFT)                  /* 0x000000F0 */
#define PMU_INFO_TX_CON_INFO_TX_INTV_TIME_SHIFT            (8U)
#define PMU_INFO_TX_CON_INFO_TX_INTV_TIME_MASK             (0xFFU << PMU_INFO_TX_CON_INFO_TX_INTV_TIME_SHIFT)           /* 0x0000FF00 */
/* DSU_STABLE_CNT */
#define PMU_DSU_STABLE_CNT_OFFSET                          (0x100U)
#define PMU_DSU_STABLE_CNT_STABLE_CNT_SHIFT                (0U)
#define PMU_DSU_STABLE_CNT_STABLE_CNT_MASK                 (0xFFFFFU << PMU_DSU_STABLE_CNT_STABLE_CNT_SHIFT)            /* 0x000FFFFF */
/* PMIC_STABLE_CNT */
#define PMU_PMIC_STABLE_CNT_OFFSET                         (0x104U)
#define PMU_PMIC_STABLE_CNT_STABLE_CNT_SHIFT               (0U)
#define PMU_PMIC_STABLE_CNT_STABLE_CNT_MASK                (0xFFFFFU << PMU_PMIC_STABLE_CNT_STABLE_CNT_SHIFT)           /* 0x000FFFFF */
/* OSC_STABLE_CNT */
#define PMU_OSC_STABLE_CNT_OFFSET                          (0x108U)
#define PMU_OSC_STABLE_CNT_STABLE_CNT_SHIFT                (0U)
#define PMU_OSC_STABLE_CNT_STABLE_CNT_MASK                 (0xFFFFFU << PMU_OSC_STABLE_CNT_STABLE_CNT_SHIFT)            /* 0x000FFFFF */
/* WAKEUP_RSTCLR_CNT */
#define PMU_WAKEUP_RSTCLR_CNT_OFFSET                       (0x10CU)
#define PMU_WAKEUP_RSTCLR_CNT_WAKEUP_RSTCLR_CNT_SHIFT      (0U)
#define PMU_WAKEUP_RSTCLR_CNT_WAKEUP_RSTCLR_CNT_MASK       (0xFFFFFU << PMU_WAKEUP_RSTCLR_CNT_WAKEUP_RSTCLR_CNT_SHIFT)  /* 0x000FFFFF */
/* PLL_LOCK_CNT */
#define PMU_PLL_LOCK_CNT_OFFSET                            (0x110U)
#define PMU_PLL_LOCK_CNT_PLL_LOCK_CNT_SHIFT                (0U)
#define PMU_PLL_LOCK_CNT_PLL_LOCK_CNT_MASK                 (0xFFFFFU << PMU_PLL_LOCK_CNT_PLL_LOCK_CNT_SHIFT)            /* 0x000FFFFF */
/* DSU_PWRUP_CNT */
#define PMU_DSU_PWRUP_CNT_OFFSET                           (0x118U)
#define PMU_DSU_PWRUP_CNT_STABLE_CNT_SHIFT                 (0U)
#define PMU_DSU_PWRUP_CNT_STABLE_CNT_MASK                  (0xFFFFFU << PMU_DSU_PWRUP_CNT_STABLE_CNT_SHIFT)             /* 0x000FFFFF */
/* DSU_PWRDN_CNT */
#define PMU_DSU_PWRDN_CNT_OFFSET                           (0x11CU)
#define PMU_DSU_PWRDN_CNT_STABLE_CNT_SHIFT                 (0U)
#define PMU_DSU_PWRDN_CNT_STABLE_CNT_MASK                  (0xFFFFFU << PMU_DSU_PWRDN_CNT_STABLE_CNT_SHIFT)             /* 0x000FFFFF */
/* GPU_VOLUP_CNT */
#define PMU_GPU_VOLUP_CNT_OFFSET                           (0x120U)
#define PMU_GPU_VOLUP_CNT_STABLE_CNT_SHIFT                 (0U)
#define PMU_GPU_VOLUP_CNT_STABLE_CNT_MASK                  (0xFFFFFU << PMU_GPU_VOLUP_CNT_STABLE_CNT_SHIFT)             /* 0x000FFFFF */
/* GPU_VOLDN_CNT */
#define PMU_GPU_VOLDN_CNT_OFFSET                           (0x124U)
#define PMU_GPU_VOLDN_CNT_STABLE_CNT_SHIFT                 (0U)
#define PMU_GPU_VOLDN_CNT_STABLE_CNT_MASK                  (0xFFFFFU << PMU_GPU_VOLDN_CNT_STABLE_CNT_SHIFT)             /* 0x000FFFFF */
/* WAKEUP_TIMEOUT_CNT */
#define PMU_WAKEUP_TIMEOUT_CNT_OFFSET                      (0x128U)
#define PMU_WAKEUP_TIMEOUT_CNT_WAKEUP_TIMEOUT_CNT_SHIFT    (0U)
#define PMU_WAKEUP_TIMEOUT_CNT_WAKEUP_TIMEOUT_CNT_MASK     (0xFFFFFFFFU << PMU_WAKEUP_TIMEOUT_CNT_WAKEUP_TIMEOUT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PWM_SWITCH_CNT */
#define PMU_PWM_SWITCH_CNT_OFFSET                          (0x12CU)
#define PMU_PWM_SWITCH_CNT_STABLE_CNT_SHIFT                (0U)
#define PMU_PWM_SWITCH_CNT_STABLE_CNT_MASK                 (0xFFFFFFFFU << PMU_PWM_SWITCH_CNT_STABLE_CNT_SHIFT)         /* 0xFFFFFFFF */
/* DBG_RST_CNT */
#define PMU_DBG_RST_CNT_OFFSET                             (0x130U)
#define PMU_DBG_RST_CNT_DBG_RST_CNT_SHIFT                  (0U)
#define PMU_DBG_RST_CNT_DBG_RST_CNT_MASK                   (0xFFFFFFFFU << PMU_DBG_RST_CNT_DBG_RST_CNT_SHIFT)           /* 0xFFFFFFFF */
/* SYS_REG0 */
#define PMU_SYS_REG0_OFFSET                                (0x180U)
#define PMU_SYS_REG0_PMU_SYS_REG_SHIFT                     (0U)
#define PMU_SYS_REG0_PMU_SYS_REG_MASK                      (0xFFFFFFFFU << PMU_SYS_REG0_PMU_SYS_REG_SHIFT)              /* 0xFFFFFFFF */
/* SYS_REG1 */
#define PMU_SYS_REG1_OFFSET                                (0x184U)
#define PMU_SYS_REG1_PMU_SYS_REG_SHIFT                     (0U)
#define PMU_SYS_REG1_PMU_SYS_REG_MASK                      (0xFFFFFFFFU << PMU_SYS_REG1_PMU_SYS_REG_SHIFT)              /* 0xFFFFFFFF */
/* SYS_REG2 */
#define PMU_SYS_REG2_OFFSET                                (0x188U)
#define PMU_SYS_REG2_PMU_SYS_REG_SHIFT                     (0U)
#define PMU_SYS_REG2_PMU_SYS_REG_MASK                      (0xFFFFFFFFU << PMU_SYS_REG2_PMU_SYS_REG_SHIFT)              /* 0xFFFFFFFF */
/* SYS_REG3 */
#define PMU_SYS_REG3_OFFSET                                (0x18CU)
#define PMU_SYS_REG3_PMU_SYS_REG_SHIFT                     (0U)
#define PMU_SYS_REG3_PMU_SYS_REG_MASK                      (0xFFFFFFFFU << PMU_SYS_REG3_PMU_SYS_REG_SHIFT)              /* 0xFFFFFFFF */
/* SYS_REG4 */
#define PMU_SYS_REG4_OFFSET                                (0x190U)
#define PMU_SYS_REG4_PMU_SYS_REG_SHIFT                     (0U)
#define PMU_SYS_REG4_PMU_SYS_REG_MASK                      (0xFFFFFFFFU << PMU_SYS_REG4_PMU_SYS_REG_SHIFT)              /* 0xFFFFFFFF */
/* SYS_REG5 */
#define PMU_SYS_REG5_OFFSET                                (0x194U)
#define PMU_SYS_REG5_PMU_SYS_REG_SHIFT                     (0U)
#define PMU_SYS_REG5_PMU_SYS_REG_MASK                      (0xFFFFFFFFU << PMU_SYS_REG5_PMU_SYS_REG_SHIFT)              /* 0xFFFFFFFF */
/* SYS_REG6 */
#define PMU_SYS_REG6_OFFSET                                (0x198U)
#define PMU_SYS_REG6_PMU_SYS_REG_SHIFT                     (0U)
#define PMU_SYS_REG6_PMU_SYS_REG_MASK                      (0xFFFFFFFFU << PMU_SYS_REG6_PMU_SYS_REG_SHIFT)              /* 0xFFFFFFFF */
/* SYS_REG7 */
#define PMU_SYS_REG7_OFFSET                                (0x19CU)
#define PMU_SYS_REG7_PMU_SYS_REG_SHIFT                     (0U)
#define PMU_SYS_REG7_PMU_SYS_REG_MASK                      (0xFFFFFFFFU << PMU_SYS_REG7_PMU_SYS_REG_SHIFT)              /* 0xFFFFFFFF */
/* DSU_PWR_CON */
#define PMU_DSU_PWR_CON_OFFSET                             (0x300U)
#define PMU_DSU_PWR_CON_DSU_PWRDN_ENA_SHIFT                (2U)
#define PMU_DSU_PWR_CON_DSU_PWRDN_ENA_MASK                 (0x1U << PMU_DSU_PWR_CON_DSU_PWRDN_ENA_SHIFT)                /* 0x00000004 */
#define PMU_DSU_PWR_CON_DSU_PWROFF_ENA_SHIFT               (3U)
#define PMU_DSU_PWR_CON_DSU_PWROFF_ENA_MASK                (0x1U << PMU_DSU_PWR_CON_DSU_PWROFF_ENA_SHIFT)               /* 0x00000008 */
#define PMU_DSU_PWR_CON_DSU_RET_ENA_SHIFT                  (6U)
#define PMU_DSU_PWR_CON_DSU_RET_ENA_MASK                   (0x1U << PMU_DSU_PWR_CON_DSU_RET_ENA_SHIFT)                  /* 0x00000040 */
#define PMU_DSU_PWR_CON_CLUSTER_CLK_SRC_GATE_ENA_SHIFT     (7U)
#define PMU_DSU_PWR_CON_CLUSTER_CLK_SRC_GATE_ENA_MASK      (0x1U << PMU_DSU_PWR_CON_CLUSTER_CLK_SRC_GATE_ENA_SHIFT)     /* 0x00000080 */
/* DSU_PWR_SFTCON */
#define PMU_DSU_PWR_SFTCON_OFFSET                          (0x304U)
#define PMU_DSU_PWR_SFTCON_DSU_PWRDN_ENA_SHIFT             (0U)
#define PMU_DSU_PWR_SFTCON_DSU_PWRDN_ENA_MASK              (0x1U << PMU_DSU_PWR_SFTCON_DSU_PWRDN_ENA_SHIFT)             /* 0x00000001 */
#define PMU_DSU_PWR_SFTCON_CLUSTER_CLK_SRC_GATE_CFG_SHIFT  (7U)
#define PMU_DSU_PWR_SFTCON_CLUSTER_CLK_SRC_GATE_CFG_MASK   (0x1U << PMU_DSU_PWR_SFTCON_CLUSTER_CLK_SRC_GATE_CFG_SHIFT)  /* 0x00000080 */
/* DSU_AUTO_CON */
#define PMU_DSU_AUTO_CON_OFFSET                            (0x308U)
#define PMU_DSU_AUTO_CON_DSU_LP_ENA_SHIFT                  (0U)
#define PMU_DSU_AUTO_CON_DSU_LP_ENA_MASK                   (0x1U << PMU_DSU_AUTO_CON_DSU_LP_ENA_SHIFT)                  /* 0x00000001 */
#define PMU_DSU_AUTO_CON_DSU_INT_WAKEUP_CLUSTER_ENA_SHIFT  (1U)
#define PMU_DSU_AUTO_CON_DSU_INT_WAKEUP_CLUSTER_ENA_MASK   (0x1U << PMU_DSU_AUTO_CON_DSU_INT_WAKEUP_CLUSTER_ENA_SHIFT)  /* 0x00000002 */
#define PMU_DSU_AUTO_CON_DSU_INT_MASK_ENA_SHIFT            (2U)
#define PMU_DSU_AUTO_CON_DSU_INT_MASK_ENA_MASK             (0x1U << PMU_DSU_AUTO_CON_DSU_INT_MASK_ENA_SHIFT)            /* 0x00000004 */
#define PMU_DSU_AUTO_CON_DSU_SFT_WAKEUP_CLUSTER_ENA_SHIFT  (3U)
#define PMU_DSU_AUTO_CON_DSU_SFT_WAKEUP_CLUSTER_ENA_MASK   (0x1U << PMU_DSU_AUTO_CON_DSU_SFT_WAKEUP_CLUSTER_ENA_SHIFT)  /* 0x00000008 */
#define PMU_DSU_AUTO_CON_DSU_AUTO_RET_ENA_SHIFT            (4U)
#define PMU_DSU_AUTO_CON_DSU_AUTO_RET_ENA_MASK             (0x1U << PMU_DSU_AUTO_CON_DSU_AUTO_RET_ENA_SHIFT)            /* 0x00000010 */
/* DSU_PWR_STATE */
#define PMU_DSU_PWR_STATE_OFFSET                           (0x30CU)
#define PMU_DSU_PWR_STATE                                  (0x0U)
#define PMU_DSU_PWR_STATE_CPU0_POWER_STATE_SHIFT           (0U)
#define PMU_DSU_PWR_STATE_CPU0_POWER_STATE_MASK            (0x7U << PMU_DSU_PWR_STATE_CPU0_POWER_STATE_SHIFT)           /* 0x00000007 */
#define PMU_DSU_PWR_STATE_CPU1_POWER_STATE_SHIFT           (4U)
#define PMU_DSU_PWR_STATE_CPU1_POWER_STATE_MASK            (0x7U << PMU_DSU_PWR_STATE_CPU1_POWER_STATE_SHIFT)           /* 0x00000070 */
#define PMU_DSU_PWR_STATE_CPU2_POWER_STATE_SHIFT           (8U)
#define PMU_DSU_PWR_STATE_CPU2_POWER_STATE_MASK            (0x7U << PMU_DSU_PWR_STATE_CPU2_POWER_STATE_SHIFT)           /* 0x00000700 */
#define PMU_DSU_PWR_STATE_CPU3_POWER_STATE_SHIFT           (12U)
#define PMU_DSU_PWR_STATE_CPU3_POWER_STATE_MASK            (0x7U << PMU_DSU_PWR_STATE_CPU3_POWER_STATE_SHIFT)           /* 0x00007000 */
#define PMU_DSU_PWR_STATE_DSU_POWER_STATE_SHIFT            (16U)
#define PMU_DSU_PWR_STATE_DSU_POWER_STATE_MASK             (0x7U << PMU_DSU_PWR_STATE_DSU_POWER_STATE_SHIFT)            /* 0x00070000 */
/* CPU_AUTO_PWR_CON0 */
#define PMU_CPU_AUTO_PWR_CON0_OFFSET                       (0x310U)
#define PMU_CPU_AUTO_PWR_CON0_CPU0_AUTO_PWRDN_ENA_SHIFT    (0U)
#define PMU_CPU_AUTO_PWR_CON0_CPU0_AUTO_PWRDN_ENA_MASK     (0x1U << PMU_CPU_AUTO_PWR_CON0_CPU0_AUTO_PWRDN_ENA_SHIFT)    /* 0x00000001 */
#define PMU_CPU_AUTO_PWR_CON0_CPU0_INT_WAKEUP_ENA_SHIFT    (1U)
#define PMU_CPU_AUTO_PWR_CON0_CPU0_INT_WAKEUP_ENA_MASK     (0x1U << PMU_CPU_AUTO_PWR_CON0_CPU0_INT_WAKEUP_ENA_SHIFT)    /* 0x00000002 */
#define PMU_CPU_AUTO_PWR_CON0_CPU0_INT_MASK_ENA_SHIFT      (2U)
#define PMU_CPU_AUTO_PWR_CON0_CPU0_INT_MASK_ENA_MASK       (0x1U << PMU_CPU_AUTO_PWR_CON0_CPU0_INT_MASK_ENA_SHIFT)      /* 0x00000004 */
#define PMU_CPU_AUTO_PWR_CON0_CPU0_SFT_WAKEUP_PWRDN_ENA_SHIFT (3U)
#define PMU_CPU_AUTO_PWR_CON0_CPU0_SFT_WAKEUP_PWRDN_ENA_MASK (0x1U << PMU_CPU_AUTO_PWR_CON0_CPU0_SFT_WAKEUP_PWRDN_ENA_SHIFT) /* 0x00000008 */
#define PMU_CPU_AUTO_PWR_CON0_CPU0_AUTO_RET_ENA_SHIFT      (4U)
#define PMU_CPU_AUTO_PWR_CON0_CPU0_AUTO_RET_ENA_MASK       (0x1U << PMU_CPU_AUTO_PWR_CON0_CPU0_AUTO_RET_ENA_SHIFT)      /* 0x00000010 */
#define PMU_CPU_AUTO_PWR_CON0_CPU0_SFT_WAKEUP_RET_ENA_SHIFT (5U)
#define PMU_CPU_AUTO_PWR_CON0_CPU0_SFT_WAKEUP_RET_ENA_MASK (0x1U << PMU_CPU_AUTO_PWR_CON0_CPU0_SFT_WAKEUP_RET_ENA_SHIFT) /* 0x00000020 */
#define PMU_CPU_AUTO_PWR_CON0_CPU0_DBG_RECOV_ENA_SHIFT     (6U)
#define PMU_CPU_AUTO_PWR_CON0_CPU0_DBG_RECOV_ENA_MASK      (0x1U << PMU_CPU_AUTO_PWR_CON0_CPU0_DBG_RECOV_ENA_SHIFT)     /* 0x00000040 */
#define PMU_CPU_AUTO_PWR_CON0_CPU0_DBG_RECOV_RSTSRC_SHIFT  (7U)
#define PMU_CPU_AUTO_PWR_CON0_CPU0_DBG_RECOV_RSTSRC_MASK   (0x1U << PMU_CPU_AUTO_PWR_CON0_CPU0_DBG_RECOV_RSTSRC_SHIFT)  /* 0x00000080 */
#define PMU_CPU_AUTO_PWR_CON0_CPU1_AUTO_PWRDN_ENA_SHIFT    (8U)
#define PMU_CPU_AUTO_PWR_CON0_CPU1_AUTO_PWRDN_ENA_MASK     (0x1U << PMU_CPU_AUTO_PWR_CON0_CPU1_AUTO_PWRDN_ENA_SHIFT)    /* 0x00000100 */
#define PMU_CPU_AUTO_PWR_CON0_CPU1_INT_WAKEUP_ENA_SHIFT    (9U)
#define PMU_CPU_AUTO_PWR_CON0_CPU1_INT_WAKEUP_ENA_MASK     (0x1U << PMU_CPU_AUTO_PWR_CON0_CPU1_INT_WAKEUP_ENA_SHIFT)    /* 0x00000200 */
#define PMU_CPU_AUTO_PWR_CON0_CPU1_INT_MASK_ENA_SHIFT      (10U)
#define PMU_CPU_AUTO_PWR_CON0_CPU1_INT_MASK_ENA_MASK       (0x1U << PMU_CPU_AUTO_PWR_CON0_CPU1_INT_MASK_ENA_SHIFT)      /* 0x00000400 */
#define PMU_CPU_AUTO_PWR_CON0_CPU1_SFT_WAKEUP_PWRDN_ENA_SHIFT (11U)
#define PMU_CPU_AUTO_PWR_CON0_CPU1_SFT_WAKEUP_PWRDN_ENA_MASK (0x1U << PMU_CPU_AUTO_PWR_CON0_CPU1_SFT_WAKEUP_PWRDN_ENA_SHIFT) /* 0x00000800 */
#define PMU_CPU_AUTO_PWR_CON0_CPU1_AUTO_RET_ENA_SHIFT      (12U)
#define PMU_CPU_AUTO_PWR_CON0_CPU1_AUTO_RET_ENA_MASK       (0x1U << PMU_CPU_AUTO_PWR_CON0_CPU1_AUTO_RET_ENA_SHIFT)      /* 0x00001000 */
#define PMU_CPU_AUTO_PWR_CON0_CPU1_SFT_WAKEUP_RET_ENA_SHIFT (13U)
#define PMU_CPU_AUTO_PWR_CON0_CPU1_SFT_WAKEUP_RET_ENA_MASK (0x1U << PMU_CPU_AUTO_PWR_CON0_CPU1_SFT_WAKEUP_RET_ENA_SHIFT) /* 0x00002000 */
#define PMU_CPU_AUTO_PWR_CON0_CPU1_DBG_RECOV_ENA_SHIFT     (14U)
#define PMU_CPU_AUTO_PWR_CON0_CPU1_DBG_RECOV_ENA_MASK      (0x1U << PMU_CPU_AUTO_PWR_CON0_CPU1_DBG_RECOV_ENA_SHIFT)     /* 0x00004000 */
#define PMU_CPU_AUTO_PWR_CON0_CPU1_DBG_RECOV_RSTSRC_SHIFT  (15U)
#define PMU_CPU_AUTO_PWR_CON0_CPU1_DBG_RECOV_RSTSRC_MASK   (0x1U << PMU_CPU_AUTO_PWR_CON0_CPU1_DBG_RECOV_RSTSRC_SHIFT)  /* 0x00008000 */
/* CPU_AUTO_PWR_CON1 */
#define PMU_CPU_AUTO_PWR_CON1_OFFSET                       (0x314U)
#define PMU_CPU_AUTO_PWR_CON1_CPU2_AUTO_PWRDN_ENA_SHIFT    (0U)
#define PMU_CPU_AUTO_PWR_CON1_CPU2_AUTO_PWRDN_ENA_MASK     (0x1U << PMU_CPU_AUTO_PWR_CON1_CPU2_AUTO_PWRDN_ENA_SHIFT)    /* 0x00000001 */
#define PMU_CPU_AUTO_PWR_CON1_CPU2_INT_WAKEUP_ENA_SHIFT    (1U)
#define PMU_CPU_AUTO_PWR_CON1_CPU2_INT_WAKEUP_ENA_MASK     (0x1U << PMU_CPU_AUTO_PWR_CON1_CPU2_INT_WAKEUP_ENA_SHIFT)    /* 0x00000002 */
#define PMU_CPU_AUTO_PWR_CON1_CPU2_INT_MASK_ENA_SHIFT      (2U)
#define PMU_CPU_AUTO_PWR_CON1_CPU2_INT_MASK_ENA_MASK       (0x1U << PMU_CPU_AUTO_PWR_CON1_CPU2_INT_MASK_ENA_SHIFT)      /* 0x00000004 */
#define PMU_CPU_AUTO_PWR_CON1_CPU2_SFT_WAKEUP_PWRDN_ENA_SHIFT (3U)
#define PMU_CPU_AUTO_PWR_CON1_CPU2_SFT_WAKEUP_PWRDN_ENA_MASK (0x1U << PMU_CPU_AUTO_PWR_CON1_CPU2_SFT_WAKEUP_PWRDN_ENA_SHIFT) /* 0x00000008 */
#define PMU_CPU_AUTO_PWR_CON1_CPU2_AUTO_RET_ENA_SHIFT      (4U)
#define PMU_CPU_AUTO_PWR_CON1_CPU2_AUTO_RET_ENA_MASK       (0x1U << PMU_CPU_AUTO_PWR_CON1_CPU2_AUTO_RET_ENA_SHIFT)      /* 0x00000010 */
#define PMU_CPU_AUTO_PWR_CON1_CPU2_SFT_WAKEUP_RET_ENA_SHIFT (5U)
#define PMU_CPU_AUTO_PWR_CON1_CPU2_SFT_WAKEUP_RET_ENA_MASK (0x1U << PMU_CPU_AUTO_PWR_CON1_CPU2_SFT_WAKEUP_RET_ENA_SHIFT) /* 0x00000020 */
#define PMU_CPU_AUTO_PWR_CON1_CPU2_DBG_RECOV_ENA_SHIFT     (6U)
#define PMU_CPU_AUTO_PWR_CON1_CPU2_DBG_RECOV_ENA_MASK      (0x1U << PMU_CPU_AUTO_PWR_CON1_CPU2_DBG_RECOV_ENA_SHIFT)     /* 0x00000040 */
#define PMU_CPU_AUTO_PWR_CON1_CPU2_DBG_RECOV_RSTSRC_SHIFT  (7U)
#define PMU_CPU_AUTO_PWR_CON1_CPU2_DBG_RECOV_RSTSRC_MASK   (0x1U << PMU_CPU_AUTO_PWR_CON1_CPU2_DBG_RECOV_RSTSRC_SHIFT)  /* 0x00000080 */
#define PMU_CPU_AUTO_PWR_CON1_CPU3_AUTO_PWRDN_ENA_SHIFT    (8U)
#define PMU_CPU_AUTO_PWR_CON1_CPU3_AUTO_PWRDN_ENA_MASK     (0x1U << PMU_CPU_AUTO_PWR_CON1_CPU3_AUTO_PWRDN_ENA_SHIFT)    /* 0x00000100 */
#define PMU_CPU_AUTO_PWR_CON1_CPU3_INT_WAKEUP_ENA_SHIFT    (9U)
#define PMU_CPU_AUTO_PWR_CON1_CPU3_INT_WAKEUP_ENA_MASK     (0x1U << PMU_CPU_AUTO_PWR_CON1_CPU3_INT_WAKEUP_ENA_SHIFT)    /* 0x00000200 */
#define PMU_CPU_AUTO_PWR_CON1_CPU3_INT_MASK_ENA_SHIFT      (10U)
#define PMU_CPU_AUTO_PWR_CON1_CPU3_INT_MASK_ENA_MASK       (0x1U << PMU_CPU_AUTO_PWR_CON1_CPU3_INT_MASK_ENA_SHIFT)      /* 0x00000400 */
#define PMU_CPU_AUTO_PWR_CON1_CPU3_SFT_WAKEUP_PWRDN_ENA_SHIFT (11U)
#define PMU_CPU_AUTO_PWR_CON1_CPU3_SFT_WAKEUP_PWRDN_ENA_MASK (0x1U << PMU_CPU_AUTO_PWR_CON1_CPU3_SFT_WAKEUP_PWRDN_ENA_SHIFT) /* 0x00000800 */
#define PMU_CPU_AUTO_PWR_CON1_CPU3_AUTO_RET_ENA_SHIFT      (12U)
#define PMU_CPU_AUTO_PWR_CON1_CPU3_AUTO_RET_ENA_MASK       (0x1U << PMU_CPU_AUTO_PWR_CON1_CPU3_AUTO_RET_ENA_SHIFT)      /* 0x00001000 */
#define PMU_CPU_AUTO_PWR_CON1_CPU3_SFT_WAKEUP_RET_ENA_SHIFT (13U)
#define PMU_CPU_AUTO_PWR_CON1_CPU3_SFT_WAKEUP_RET_ENA_MASK (0x1U << PMU_CPU_AUTO_PWR_CON1_CPU3_SFT_WAKEUP_RET_ENA_SHIFT) /* 0x00002000 */
#define PMU_CPU_AUTO_PWR_CON1_CPU3_DBG_RECOV_ENA_SHIFT     (14U)
#define PMU_CPU_AUTO_PWR_CON1_CPU3_DBG_RECOV_ENA_MASK      (0x1U << PMU_CPU_AUTO_PWR_CON1_CPU3_DBG_RECOV_ENA_SHIFT)     /* 0x00004000 */
#define PMU_CPU_AUTO_PWR_CON1_CPU3_DBG_RECOV_RSTSRC_SHIFT  (15U)
#define PMU_CPU_AUTO_PWR_CON1_CPU3_DBG_RECOV_RSTSRC_MASK   (0x1U << PMU_CPU_AUTO_PWR_CON1_CPU3_DBG_RECOV_RSTSRC_SHIFT)  /* 0x00008000 */
/* CPU_PWR_SFTCON */
#define PMU_CPU_PWR_SFTCON_OFFSET                          (0x318U)
#define PMU_CPU_PWR_SFTCON_CPU0_SFT_PWRDN_ENA_SHIFT        (0U)
#define PMU_CPU_PWR_SFTCON_CPU0_SFT_PWRDN_ENA_MASK         (0x1U << PMU_CPU_PWR_SFTCON_CPU0_SFT_PWRDN_ENA_SHIFT)        /* 0x00000001 */
#define PMU_CPU_PWR_SFTCON_CPU0_SFT_PREQ_OFF_SHIFT         (1U)
#define PMU_CPU_PWR_SFTCON_CPU0_SFT_PREQ_OFF_MASK          (0x1U << PMU_CPU_PWR_SFTCON_CPU0_SFT_PREQ_OFF_SHIFT)         /* 0x00000002 */
#define PMU_CPU_PWR_SFTCON_CPU0_SFT_PREQ_ON_SHIFT          (2U)
#define PMU_CPU_PWR_SFTCON_CPU0_SFT_PREQ_ON_MASK           (0x1U << PMU_CPU_PWR_SFTCON_CPU0_SFT_PREQ_ON_SHIFT)          /* 0x00000004 */
#define PMU_CPU_PWR_SFTCON_CPU0_SFT_PREQ_RET_SHIFT         (3U)
#define PMU_CPU_PWR_SFTCON_CPU0_SFT_PREQ_RET_MASK          (0x1U << PMU_CPU_PWR_SFTCON_CPU0_SFT_PREQ_RET_SHIFT)         /* 0x00000008 */
#define PMU_CPU_PWR_SFTCON_CPU1_SFT_PWRDN_ENA_SHIFT        (4U)
#define PMU_CPU_PWR_SFTCON_CPU1_SFT_PWRDN_ENA_MASK         (0x1U << PMU_CPU_PWR_SFTCON_CPU1_SFT_PWRDN_ENA_SHIFT)        /* 0x00000010 */
#define PMU_CPU_PWR_SFTCON_CPU1_SFT_PREQ_OFF_SHIFT         (5U)
#define PMU_CPU_PWR_SFTCON_CPU1_SFT_PREQ_OFF_MASK          (0x1U << PMU_CPU_PWR_SFTCON_CPU1_SFT_PREQ_OFF_SHIFT)         /* 0x00000020 */
#define PMU_CPU_PWR_SFTCON_CPU1_SFT_PREQ_ON_SHIFT          (6U)
#define PMU_CPU_PWR_SFTCON_CPU1_SFT_PREQ_ON_MASK           (0x1U << PMU_CPU_PWR_SFTCON_CPU1_SFT_PREQ_ON_SHIFT)          /* 0x00000040 */
#define PMU_CPU_PWR_SFTCON_CPU1_SFT_PREQ_RET_SHIFT         (7U)
#define PMU_CPU_PWR_SFTCON_CPU1_SFT_PREQ_RET_MASK          (0x1U << PMU_CPU_PWR_SFTCON_CPU1_SFT_PREQ_RET_SHIFT)         /* 0x00000080 */
#define PMU_CPU_PWR_SFTCON_CPU2_SFT_PWRDN_ENA_SHIFT        (8U)
#define PMU_CPU_PWR_SFTCON_CPU2_SFT_PWRDN_ENA_MASK         (0x1U << PMU_CPU_PWR_SFTCON_CPU2_SFT_PWRDN_ENA_SHIFT)        /* 0x00000100 */
#define PMU_CPU_PWR_SFTCON_CPU2_SFT_PREQ_OFF_SHIFT         (9U)
#define PMU_CPU_PWR_SFTCON_CPU2_SFT_PREQ_OFF_MASK          (0x1U << PMU_CPU_PWR_SFTCON_CPU2_SFT_PREQ_OFF_SHIFT)         /* 0x00000200 */
#define PMU_CPU_PWR_SFTCON_CPU2_SFT_PREQ_ON_SHIFT          (10U)
#define PMU_CPU_PWR_SFTCON_CPU2_SFT_PREQ_ON_MASK           (0x1U << PMU_CPU_PWR_SFTCON_CPU2_SFT_PREQ_ON_SHIFT)          /* 0x00000400 */
#define PMU_CPU_PWR_SFTCON_CPU2_SFT_PREQ_RET_SHIFT         (11U)
#define PMU_CPU_PWR_SFTCON_CPU2_SFT_PREQ_RET_MASK          (0x1U << PMU_CPU_PWR_SFTCON_CPU2_SFT_PREQ_RET_SHIFT)         /* 0x00000800 */
#define PMU_CPU_PWR_SFTCON_CPU3_SFT_PWRDN_ENA_SHIFT        (12U)
#define PMU_CPU_PWR_SFTCON_CPU3_SFT_PWRDN_ENA_MASK         (0x1U << PMU_CPU_PWR_SFTCON_CPU3_SFT_PWRDN_ENA_SHIFT)        /* 0x00001000 */
#define PMU_CPU_PWR_SFTCON_CPU3_SFT_PREQ_OFF_SHIFT         (13U)
#define PMU_CPU_PWR_SFTCON_CPU3_SFT_PREQ_OFF_MASK          (0x1U << PMU_CPU_PWR_SFTCON_CPU3_SFT_PREQ_OFF_SHIFT)         /* 0x00002000 */
#define PMU_CPU_PWR_SFTCON_CPU3_SFT_PREQ_ON_SHIFT          (14U)
#define PMU_CPU_PWR_SFTCON_CPU3_SFT_PREQ_ON_MASK           (0x1U << PMU_CPU_PWR_SFTCON_CPU3_SFT_PREQ_ON_SHIFT)          /* 0x00004000 */
#define PMU_CPU_PWR_SFTCON_CPU3_SFT_PREQ_RET_SHIFT         (15U)
#define PMU_CPU_PWR_SFTCON_CPU3_SFT_PREQ_RET_MASK          (0x1U << PMU_CPU_PWR_SFTCON_CPU3_SFT_PREQ_RET_SHIFT)         /* 0x00008000 */
/* CLUSTER_PWR_ST */
#define PMU_CLUSTER_PWR_ST_OFFSET                          (0x31CU)
#define PMU_CLUSTER_PWR_ST                                 (0x0U)
#define PMU_CLUSTER_PWR_ST_CPU0_DWN_STATE_SHIFT            (0U)
#define PMU_CLUSTER_PWR_ST_CPU0_DWN_STATE_MASK             (0x1U << PMU_CLUSTER_PWR_ST_CPU0_DWN_STATE_SHIFT)            /* 0x00000001 */
#define PMU_CLUSTER_PWR_ST_CPU1_DWN_STATE_SHIFT            (1U)
#define PMU_CLUSTER_PWR_ST_CPU1_DWN_STATE_MASK             (0x1U << PMU_CLUSTER_PWR_ST_CPU1_DWN_STATE_SHIFT)            /* 0x00000002 */
#define PMU_CLUSTER_PWR_ST_CPU2_DWN_STATE_SHIFT            (2U)
#define PMU_CLUSTER_PWR_ST_CPU2_DWN_STATE_MASK             (0x1U << PMU_CLUSTER_PWR_ST_CPU2_DWN_STATE_SHIFT)            /* 0x00000004 */
#define PMU_CLUSTER_PWR_ST_CPU3_DWN_STATE_SHIFT            (3U)
#define PMU_CLUSTER_PWR_ST_CPU3_DWN_STATE_MASK             (0x1U << PMU_CLUSTER_PWR_ST_CPU3_DWN_STATE_SHIFT)            /* 0x00000008 */
#define PMU_CLUSTER_PWR_ST_DSU_DWN_STATE_SHIFT             (4U)
#define PMU_CLUSTER_PWR_ST_DSU_DWN_STATE_MASK              (0x1U << PMU_CLUSTER_PWR_ST_DSU_DWN_STATE_SHIFT)             /* 0x00000010 */
#define PMU_CLUSTER_PWR_ST_CLUSTER_PREQ_ACCEPED_SHIFT      (7U)
#define PMU_CLUSTER_PWR_ST_CLUSTER_PREQ_ACCEPED_MASK       (0x1U << PMU_CLUSTER_PWR_ST_CLUSTER_PREQ_ACCEPED_SHIFT)      /* 0x00000080 */
#define PMU_CLUSTER_PWR_ST_CLUSTERPACTIVE_BIT_MEMRET_SHIFT (8U)
#define PMU_CLUSTER_PWR_ST_CLUSTERPACTIVE_BIT_MEMRET_MASK  (0x1U << PMU_CLUSTER_PWR_ST_CLUSTERPACTIVE_BIT_MEMRET_SHIFT) /* 0x00000100 */
#define PMU_CLUSTER_PWR_ST_CLUSTERPACTIVE_BIT_FUNCRET_SHIFT (9U)
#define PMU_CLUSTER_PWR_ST_CLUSTERPACTIVE_BIT_FUNCRET_MASK (0x1U << PMU_CLUSTER_PWR_ST_CLUSTERPACTIVE_BIT_FUNCRET_SHIFT) /* 0x00000200 */
#define PMU_CLUSTER_PWR_ST_CLUSTERPACTIVE_BIT_ON_SHIFT     (10U)
#define PMU_CLUSTER_PWR_ST_CLUSTERPACTIVE_BIT_ON_MASK      (0x1U << PMU_CLUSTER_PWR_ST_CLUSTERPACTIVE_BIT_ON_SHIFT)     /* 0x00000400 */
#define PMU_CLUSTER_PWR_ST_CLUSTERPACTIVE_BIT_FULL_SHIFT   (11U)
#define PMU_CLUSTER_PWR_ST_CLUSTERPACTIVE_BIT_FULL_MASK    (0x1U << PMU_CLUSTER_PWR_ST_CLUSTERPACTIVE_BIT_FULL_SHIFT)   /* 0x00000800 */
#define PMU_CLUSTER_PWR_ST_CPU0_PREQ_ACCEPED_SHIFT         (12U)
#define PMU_CLUSTER_PWR_ST_CPU0_PREQ_ACCEPED_MASK          (0x1U << PMU_CLUSTER_PWR_ST_CPU0_PREQ_ACCEPED_SHIFT)         /* 0x00001000 */
#define PMU_CLUSTER_PWR_ST_CPU1_PREQ_ACCEPED_SHIFT         (13U)
#define PMU_CLUSTER_PWR_ST_CPU1_PREQ_ACCEPED_MASK          (0x1U << PMU_CLUSTER_PWR_ST_CPU1_PREQ_ACCEPED_SHIFT)         /* 0x00002000 */
#define PMU_CLUSTER_PWR_ST_CPU2_PREQ_ACCEPED_SHIFT         (14U)
#define PMU_CLUSTER_PWR_ST_CPU2_PREQ_ACCEPED_MASK          (0x1U << PMU_CLUSTER_PWR_ST_CPU2_PREQ_ACCEPED_SHIFT)         /* 0x00004000 */
#define PMU_CLUSTER_PWR_ST_CPU3_PREQ_ACCEPED_SHIFT         (15U)
#define PMU_CLUSTER_PWR_ST_CPU3_PREQ_ACCEPED_MASK          (0x1U << PMU_CLUSTER_PWR_ST_CPU3_PREQ_ACCEPED_SHIFT)         /* 0x00008000 */
#define PMU_CLUSTER_PWR_ST_CPU0_BIT_EMUOFF_SHIFT           (16U)
#define PMU_CLUSTER_PWR_ST_CPU0_BIT_EMUOFF_MASK            (0x1U << PMU_CLUSTER_PWR_ST_CPU0_BIT_EMUOFF_SHIFT)           /* 0x00010000 */
#define PMU_CLUSTER_PWR_ST_CPU0_BIT_FULLRET_SHIFT          (17U)
#define PMU_CLUSTER_PWR_ST_CPU0_BIT_FULLRET_MASK           (0x1U << PMU_CLUSTER_PWR_ST_CPU0_BIT_FULLRET_SHIFT)          /* 0x00020000 */
#define PMU_CLUSTER_PWR_ST_CPU0_BIT_FUNCRET_SHIFT          (18U)
#define PMU_CLUSTER_PWR_ST_CPU0_BIT_FUNCRET_MASK           (0x1U << PMU_CLUSTER_PWR_ST_CPU0_BIT_FUNCRET_SHIFT)          /* 0x00040000 */
#define PMU_CLUSTER_PWR_ST_CPU0_BIT_ON_SHIFT               (19U)
#define PMU_CLUSTER_PWR_ST_CPU0_BIT_ON_MASK                (0x1U << PMU_CLUSTER_PWR_ST_CPU0_BIT_ON_SHIFT)               /* 0x00080000 */
#define PMU_CLUSTER_PWR_ST_CPU1_BIT_EMUOFF_SHIFT           (20U)
#define PMU_CLUSTER_PWR_ST_CPU1_BIT_EMUOFF_MASK            (0x1U << PMU_CLUSTER_PWR_ST_CPU1_BIT_EMUOFF_SHIFT)           /* 0x00100000 */
#define PMU_CLUSTER_PWR_ST_CPU1_BIT_FULLRET_SHIFT          (21U)
#define PMU_CLUSTER_PWR_ST_CPU1_BIT_FULLRET_MASK           (0x1U << PMU_CLUSTER_PWR_ST_CPU1_BIT_FULLRET_SHIFT)          /* 0x00200000 */
#define PMU_CLUSTER_PWR_ST_CPU1_BIT_FUNCRET_SHIFT          (22U)
#define PMU_CLUSTER_PWR_ST_CPU1_BIT_FUNCRET_MASK           (0x1U << PMU_CLUSTER_PWR_ST_CPU1_BIT_FUNCRET_SHIFT)          /* 0x00400000 */
#define PMU_CLUSTER_PWR_ST_CPU1_BIT_ON_SHIFT               (23U)
#define PMU_CLUSTER_PWR_ST_CPU1_BIT_ON_MASK                (0x1U << PMU_CLUSTER_PWR_ST_CPU1_BIT_ON_SHIFT)               /* 0x00800000 */
#define PMU_CLUSTER_PWR_ST_CPU2_BIT_EMUOFF_SHIFT           (24U)
#define PMU_CLUSTER_PWR_ST_CPU2_BIT_EMUOFF_MASK            (0x1U << PMU_CLUSTER_PWR_ST_CPU2_BIT_EMUOFF_SHIFT)           /* 0x01000000 */
#define PMU_CLUSTER_PWR_ST_CPU2_BIT_FULLRET_SHIFT          (25U)
#define PMU_CLUSTER_PWR_ST_CPU2_BIT_FULLRET_MASK           (0x1U << PMU_CLUSTER_PWR_ST_CPU2_BIT_FULLRET_SHIFT)          /* 0x02000000 */
#define PMU_CLUSTER_PWR_ST_CPU2_BIT_FUNCRET_SHIFT          (26U)
#define PMU_CLUSTER_PWR_ST_CPU2_BIT_FUNCRET_MASK           (0x1U << PMU_CLUSTER_PWR_ST_CPU2_BIT_FUNCRET_SHIFT)          /* 0x04000000 */
#define PMU_CLUSTER_PWR_ST_CPU2_BIT_ON_SHIFT               (27U)
#define PMU_CLUSTER_PWR_ST_CPU2_BIT_ON_MASK                (0x1U << PMU_CLUSTER_PWR_ST_CPU2_BIT_ON_SHIFT)               /* 0x08000000 */
#define PMU_CLUSTER_PWR_ST_CPU3_BIT_EMUOFF_SHIFT           (28U)
#define PMU_CLUSTER_PWR_ST_CPU3_BIT_EMUOFF_MASK            (0x1U << PMU_CLUSTER_PWR_ST_CPU3_BIT_EMUOFF_SHIFT)           /* 0x10000000 */
#define PMU_CLUSTER_PWR_ST_CPU3_BIT_FULLRET_SHIFT          (29U)
#define PMU_CLUSTER_PWR_ST_CPU3_BIT_FULLRET_MASK           (0x1U << PMU_CLUSTER_PWR_ST_CPU3_BIT_FULLRET_SHIFT)          /* 0x20000000 */
#define PMU_CLUSTER_PWR_ST_CPU3_BIT_FUNCRET_SHIFT          (30U)
#define PMU_CLUSTER_PWR_ST_CPU3_BIT_FUNCRET_MASK           (0x1U << PMU_CLUSTER_PWR_ST_CPU3_BIT_FUNCRET_SHIFT)          /* 0x40000000 */
#define PMU_CLUSTER_PWR_ST_CPU3_BIT_ON_SHIFT               (31U)
#define PMU_CLUSTER_PWR_ST_CPU3_BIT_ON_MASK                (0x1U << PMU_CLUSTER_PWR_ST_CPU3_BIT_ON_SHIFT)               /* 0x80000000 */
/* CLUSTER_IDLE_CON */
#define PMU_CLUSTER_IDLE_CON_OFFSET                        (0x320U)
#define PMU_CLUSTER_IDLE_CON_IDLE_REQ_CPU_SHIFT            (0U)
#define PMU_CLUSTER_IDLE_CON_IDLE_REQ_CPU_MASK             (0x1U << PMU_CLUSTER_IDLE_CON_IDLE_REQ_CPU_SHIFT)            /* 0x00000001 */
#define PMU_CLUSTER_IDLE_CON_DBG_PWRQ_REQ_SHIFT            (1U)
#define PMU_CLUSTER_IDLE_CON_DBG_PWRQ_REQ_MASK             (0x1U << PMU_CLUSTER_IDLE_CON_DBG_PWRQ_REQ_SHIFT)            /* 0x00000002 */
#define PMU_CLUSTER_IDLE_CON_CORE2GIC_PWRQ_REQ_SHIFT       (2U)
#define PMU_CLUSTER_IDLE_CON_CORE2GIC_PWRQ_REQ_MASK        (0x1U << PMU_CLUSTER_IDLE_CON_CORE2GIC_PWRQ_REQ_SHIFT)       /* 0x00000004 */
#define PMU_CLUSTER_IDLE_CON_GIC2CORE_PWRQ_REQ_SHIFT       (3U)
#define PMU_CLUSTER_IDLE_CON_GIC2CORE_PWRQ_REQ_MASK        (0x1U << PMU_CLUSTER_IDLE_CON_GIC2CORE_PWRQ_REQ_SHIFT)       /* 0x00000008 */
/* CLUSTER_IDLE_SFTCON */
#define PMU_CLUSTER_IDLE_SFTCON_OFFSET                     (0x324U)
#define PMU_CLUSTER_IDLE_SFTCON_IDLE_REQ_CPU_SHIFT         (0U)
#define PMU_CLUSTER_IDLE_SFTCON_IDLE_REQ_CPU_MASK          (0x1U << PMU_CLUSTER_IDLE_SFTCON_IDLE_REQ_CPU_SHIFT)         /* 0x00000001 */
#define PMU_CLUSTER_IDLE_SFTCON_DBG_PWRQ_REQ_SHIFT         (1U)
#define PMU_CLUSTER_IDLE_SFTCON_DBG_PWRQ_REQ_MASK          (0x1U << PMU_CLUSTER_IDLE_SFTCON_DBG_PWRQ_REQ_SHIFT)         /* 0x00000002 */
#define PMU_CLUSTER_IDLE_SFTCON_CORE2GIC_PWRQ_REQ_SHIFT    (2U)
#define PMU_CLUSTER_IDLE_SFTCON_CORE2GIC_PWRQ_REQ_MASK     (0x1U << PMU_CLUSTER_IDLE_SFTCON_CORE2GIC_PWRQ_REQ_SHIFT)    /* 0x00000004 */
#define PMU_CLUSTER_IDLE_SFTCON_GIC2CORE_PWRQ_REQ_SHIFT    (3U)
#define PMU_CLUSTER_IDLE_SFTCON_GIC2CORE_PWRQ_REQ_MASK     (0x1U << PMU_CLUSTER_IDLE_SFTCON_GIC2CORE_PWRQ_REQ_SHIFT)    /* 0x00000008 */
/* CLUSTER_IDLE_ACK */
#define PMU_CLUSTER_IDLE_ACK_OFFSET                        (0x328U)
#define PMU_CLUSTER_IDLE_ACK                               (0x0U)
#define PMU_CLUSTER_IDLE_ACK_IDLE_ACK_CPU_SHIFT            (0U)
#define PMU_CLUSTER_IDLE_ACK_IDLE_ACK_CPU_MASK             (0x1U << PMU_CLUSTER_IDLE_ACK_IDLE_ACK_CPU_SHIFT)            /* 0x00000001 */
#define PMU_CLUSTER_IDLE_ACK_DBG_PWRQ_ACCEPT_SHIFT         (1U)
#define PMU_CLUSTER_IDLE_ACK_DBG_PWRQ_ACCEPT_MASK          (0x1U << PMU_CLUSTER_IDLE_ACK_DBG_PWRQ_ACCEPT_SHIFT)         /* 0x00000002 */
#define PMU_CLUSTER_IDLE_ACK_CORE2GIC_PWRQ_ACCEPT_SHIFT    (2U)
#define PMU_CLUSTER_IDLE_ACK_CORE2GIC_PWRQ_ACCEPT_MASK     (0x1U << PMU_CLUSTER_IDLE_ACK_CORE2GIC_PWRQ_ACCEPT_SHIFT)    /* 0x00000004 */
#define PMU_CLUSTER_IDLE_ACK_GIC2CORE_PWRQ_ACCEPT_SHIFT    (3U)
#define PMU_CLUSTER_IDLE_ACK_GIC2CORE_PWRQ_ACCEPT_MASK     (0x1U << PMU_CLUSTER_IDLE_ACK_GIC2CORE_PWRQ_ACCEPT_SHIFT)    /* 0x00000008 */
/* CLUSTER_IDLE_ST */
#define PMU_CLUSTER_IDLE_ST_OFFSET                         (0x32CU)
#define PMU_CLUSTER_IDLE_ST                                (0x0U)
#define PMU_CLUSTER_IDLE_ST_IDLE_CPU_SHIFT                 (0U)
#define PMU_CLUSTER_IDLE_ST_IDLE_CPU_MASK                  (0x1U << PMU_CLUSTER_IDLE_ST_IDLE_CPU_SHIFT)                 /* 0x00000001 */
#define PMU_CLUSTER_IDLE_ST_DBG_PWRQ_ACTIVE_SHIFT          (1U)
#define PMU_CLUSTER_IDLE_ST_DBG_PWRQ_ACTIVE_MASK           (0x1U << PMU_CLUSTER_IDLE_ST_DBG_PWRQ_ACTIVE_SHIFT)          /* 0x00000002 */
#define PMU_CLUSTER_IDLE_ST_CORE2GIC_PWRQ_ACTIVE_SHIFT     (2U)
#define PMU_CLUSTER_IDLE_ST_CORE2GIC_PWRQ_ACTIVE_MASK      (0x1U << PMU_CLUSTER_IDLE_ST_CORE2GIC_PWRQ_ACTIVE_SHIFT)     /* 0x00000004 */
#define PMU_CLUSTER_IDLE_ST_GIC2CORE_PWRQ_ACTIVE_SHIFT     (3U)
#define PMU_CLUSTER_IDLE_ST_GIC2CORE_PWRQ_ACTIVE_MASK      (0x1U << PMU_CLUSTER_IDLE_ST_GIC2CORE_PWRQ_ACTIVE_SHIFT)     /* 0x00000008 */
/* DBG_PWR_CON */
#define PMU_DBG_PWR_CON_OFFSET                             (0x330U)
#define PMU_DBG_PWR_CON_CPU0_DBG_PWRUP_REQ_ENA_SHIFT       (0U)
#define PMU_DBG_PWR_CON_CPU0_DBG_PWRUP_REQ_ENA_MASK        (0x1U << PMU_DBG_PWR_CON_CPU0_DBG_PWRUP_REQ_ENA_SHIFT)       /* 0x00000001 */
#define PMU_DBG_PWR_CON_CPU1_DBG_PWRUP_REQ_ENA_SHIFT       (1U)
#define PMU_DBG_PWR_CON_CPU1_DBG_PWRUP_REQ_ENA_MASK        (0x1U << PMU_DBG_PWR_CON_CPU1_DBG_PWRUP_REQ_ENA_SHIFT)       /* 0x00000002 */
#define PMU_DBG_PWR_CON_CPU2_DBG_PWRUP_REQ_ENA_SHIFT       (2U)
#define PMU_DBG_PWR_CON_CPU2_DBG_PWRUP_REQ_ENA_MASK        (0x1U << PMU_DBG_PWR_CON_CPU2_DBG_PWRUP_REQ_ENA_SHIFT)       /* 0x00000004 */
#define PMU_DBG_PWR_CON_CPU3_DBG_PWRUP_REQ_ENA_SHIFT       (3U)
#define PMU_DBG_PWR_CON_CPU3_DBG_PWRUP_REQ_ENA_MASK        (0x1U << PMU_DBG_PWR_CON_CPU3_DBG_PWRUP_REQ_ENA_SHIFT)       /* 0x00000008 */
#define PMU_DBG_PWR_CON_CLUSTER_DBG_PWRUP_REQ_ENA_SHIFT    (4U)
#define PMU_DBG_PWR_CON_CLUSTER_DBG_PWRUP_REQ_ENA_MASK     (0x1U << PMU_DBG_PWR_CON_CLUSTER_DBG_PWRUP_REQ_ENA_SHIFT)    /* 0x00000010 */
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

/********Name=SOFTRST_CON00,Offset=0x400********/
#define SRST_NCORERESET0  0U
#define SRST_NCORERESET1  1U
#define SRST_NCORERESET2  2U
#define SRST_NCORERESET3  3U
#define SRST_NCPUPORESET0 4U
#define SRST_NCPUPORESET1 5U
#define SRST_NCPUPORESET2 6U
#define SRST_NCPUPORESET3 7U
#define SRST_NSRESET      8U
#define SRST_NSPORESET    9U
#define SRST_NATRESET     10U
#define SRST_NGICRESET    11U
#define SRST_NPRESET      12U
#define SRST_NPERIPHRESET 13U
/********Name=SOFTRST_CON01,Offset=0x404********/
#define SRST_A_CORE_NIU2DDR    16U
#define SRST_A_CORE_NIU2BUS    17U
#define SRST_P_DBG_NIU         18U
#define SRST_P_DBG             19U
#define SRST_P_DBG_DAPLITE     20U
#define SRST_DAP               21U
#define SRST_A_ADB400_CORE2GIC 22U
#define SRST_A_ADB400_GIC2CORE 23U
#define SRST_P_CORE_GRF        24U
#define SRST_P_CORE_PVTM       25U
#define SRST_CORE_PVTM         26U
#define SRST_CORE_PVTPLL       27U
/********Name=SOFTRST_CON02,Offset=0x408********/
#define SRST_GPU        32U
#define SRST_A_GPU_NIU  33U
#define SRST_P_GPU_NIU  34U
#define SRST_P_GPU_PVTM 35U
#define SRST_GPU_PVTM   36U
#define SRST_GPU_PVTPLL 37U
#define SRST_A_NPU_NIU  40U
#define SRST_H_NPU_NIU  41U
#define SRST_P_NPU_NIU  42U
#define SRST_A_RKNN     43U
#define SRST_H_RKNN     44U
#define SRST_P_NPU_PVTM 45U
#define SRST_NPU_PVTM   46U
#define SRST_NPU_PVTPLL 47U
/********Name=SOFTRST_CON03,Offset=0x40C********/
#define SRST_A_MSCH       51U
#define SRST_HWFFC_CTRL   52U
#define SRST_DDR_ALWAYSON 53U
#define SRST_A_DDRSPLIT   54U
#define SRST_DDRDFI_CTL   55U
#define SRST_A_DMA2DDR    57U
/********Name=SOFTRST_CON04,Offset=0x410********/
#define SRST_A_PERIMID_NIU     64U
#define SRST_H_PERIMID_NIU     65U
#define SRST_A_GIC_AUDIO_NIU   66U
#define SRST_H_GIC_AUDIO_NIU   67U
#define SRST_A_GIC600          68U
#define SRST_A_GIC600_DEBUG    69U
#define SRST_A_GICADB_CORE2GIC 70U
#define SRST_A_GICADB_GIC2CORE 71U
#define SRST_A_SPINLOCK        72U
#define SRST_H_SDMMC_BUFFER    73U
#define SRST_D_SDMMC_BUFFER    74U
#define SRST_H_I2S0_8CH        75U
#define SRST_H_I2S1_8CH        76U
#define SRST_H_I2S2_2CH        77U
#define SRST_H_I2S3_2CH        78U
/********Name=SOFTRST_CON05,Offset=0x414********/
#define SRST_M_I2S0_8CH_TX 80U
#define SRST_M_I2S0_8CH_RX 81U
#define SRST_M_I2S1_8CH_TX 82U
#define SRST_M_I2S1_8CH_RX 83U
#define SRST_M_I2S2_2CH    84U
#define SRST_M_I2S3_2CH_TX 85U
#define SRST_M_I2S3_2CH_RX 86U
#define SRST_H_PDM         87U
#define SRST_M_PDM         88U
#define SRST_H_VAD         89U
#define SRST_H_SPDIF_8CH   90U
#define SRST_M_SPDIF_8CH   91U
#define SRST_H_AUDPWM      92U
#define SRST_S_AUDPWM      93U
#define SRST_H_ACDCDIG     94U
#define SRST_ACDCDIG       95U
/********Name=SOFTRST_CON06,Offset=0x418********/
#define SRST_A_SECURE_FLASH_NIU 96U
#define SRST_H_SECURE_FLASH_NIU 97U
#define SRST_A_CRYPTO_NS        103U
#define SRST_H_CRYPTO_NS        104U
#define SRST_CRYPTO_NS_CORE     105U
#define SRST_CRYPTO_NS_PKA      106U
#define SRST_CRYPTO_NS_RNG      107U
#define SRST_H_TRNG_NS          108U
#define SRST_TRNG_NS            109U
/********Name=SOFTRST_CON07,Offset=0x41C********/
#define SRST_H_NANDC   112U
#define SRST_N_NANDC   113U
#define SRST_H_SFC     114U
#define SRST_H_SFC_XIP 115U
#define SRST_S_SFC     116U
#define SRST_A_EMMC    117U
#define SRST_H_EMMC    118U
#define SRST_B_EMMC    119U
#define SRST_C_EMMC    120U
#define SRST_T_EMMC    121U
/********Name=SOFTRST_CON08,Offset=0x420********/
#define SRST_A_PIPE_NIU    128U
#define SRST_P_PIPE_NIU    130U
#define SRST_P_PIPE_GRF    133U
#define SRST_A_SATA0       134U
#define SRST_SATA0_PIPE    135U
#define SRST_SATA0_PMALIVE 136U
#define SRST_SATA0_RXOOB   137U
#define SRST_A_SATA1       138U
#define SRST_SATA1_PIPE    139U
#define SRST_SATA1_PMALIVE 140U
#define SRST_SATA1_RXOOB   141U
/********Name=SOFTRST_CON09,Offset=0x424********/
#define SRST_A_SATA2       144U
#define SRST_SATA2_PIPE    145U
#define SRST_SATA2_PMALIVE 146U
#define SRST_SATA2_RXOOB   147U
#define SRST_USB3OTG0      148U
#define SRST_USB3OTG1      149U
#define SRST_XPCS          150U
#define SRST_XPCS_TX_DIV10 151U
#define SRST_XPCS_RX_DIV10 152U
#define SRST_XPCS_XGXS_RX  153U
/********Name=SOFTRST_CON10,Offset=0x428********/
#define SRST_P_PCIE20           160U
#define SRST_PCIE20_POWERUP     161U
#define SRST_MSTR_ARESET_PCIE20 162U
#define SRST_SLV_ARESET_PCIE20  163U
#define SRST_DBI_ARESET_PCIE20  164U
#define SRST_BRESET_PCIE20      165U
#define SRST_PERST_PCIE20       166U
#define SRST_CORE_RST_PCIE20    167U
#define SRST_NSTICKY_RST_PCIE20 168U
#define SRST_STICKY_RST_PCIE20  169U
#define SRST_PWR_RST_PCIE20     170U
/********Name=SOFTRST_CON11,Offset=0x42C********/
#define SRST_P_PCIE30X1           176U
#define SRST_PCIE30X1_POWERUP     177U
#define SRST_MSTR_ARESET_PCIE30X1 178U
#define SRST_SLV_ARESET_PCIE30X1  179U
#define SRST_DBI_ARESET_PCIE30X1  180U
#define SRST_BRESET_PCIE30X1      181U
#define SRST_PERST_PCIE30X1       182U
#define SRST_CORE_RST_PCIE30X1    183U
#define SRST_NSTICKY_RST_PCIE30X1 184U
#define SRST_STICKY_RST_PCIE30X1  185U
#define SRST_PWR_RST_PCIE30X1     186U
/********Name=SOFTRST_CON12,Offset=0x430********/
#define SRST_P_PCIE30X2           192U
#define SRST_PCIE30X2_POWERUP     193U
#define SRST_MSTR_ARESET_PCIE30X2 194U
#define SRST_SLV_ARESET_PCIE30X2  195U
#define SRST_DBI_ARESET_PCIE30X2  196U
#define SRST_BRESET_PCIE30X2      197U
#define SRST_PERST_PCIE30X2       198U
#define SRST_CORE_RST_PCIE30X2    199U
#define SRST_NSTICKY_RST_PCIE30X2 200U
#define SRST_STICKY_RST_PCIE30X2  201U
#define SRST_PWR_RST_PCIE30X2     202U
/********Name=SOFTRST_CON13,Offset=0x434********/
#define SRST_A_PHP_NIU       208U
#define SRST_H_PHP_NIU       209U
#define SRST_P_PHP_NIU       210U
#define SRST_H_SDMMC0        211U
#define SRST_SDMMC0          212U
#define SRST_H_SDMMC1        213U
#define SRST_SDMMC1          214U
#define SRST_A_GMAC0         215U
#define SRST_GMAC0_TIMESTAMP 216U
/********Name=SOFTRST_CON14,Offset=0x438********/
#define SRST_A_USB_NIU       224U
#define SRST_H_USB_NIU       225U
#define SRST_P_USB_NIU       226U
#define SRST_P_USB_GRF       227U
#define SRST_H_USB2HOST0     228U
#define SRST_H_USB2HOST0_ARB 229U
#define SRST_USB2HOST0_UTMI  230U
#define SRST_H_USB2HOST1     231U
#define SRST_H_USB2HOST1_ARB 232U
#define SRST_USB2HOST1_UTMI  233U
#define SRST_H_SDMMC2        234U
#define SRST_SDMMC2          235U
#define SRST_A_GMAC1         236U
#define SRST_GMAC1_TIMESTAMP 237U
/********Name=SOFTRST_CON15,Offset=0x43C********/
#define SRST_A_VI_NIU    240U
#define SRST_H_VI_NIU    241U
#define SRST_P_VI_NIU    242U
#define SRST_A_VICAP1    247U
#define SRST_H_VICAP1    248U
#define SRST_D_VICAP1    249U
#define SRST_I_VICAP1    250U
#define SRST_P_VICAP1    251U
#define SRST_H_ISP       252U
#define SRST_ISP         253U
#define SRST_P_CSI2HOST1 255U
/********Name=SOFTRST_CON16,Offset=0x440********/
#define SRST_A_VO_NIU    256U
#define SRST_H_VO_NIU    257U
#define SRST_P_VO_NIU    258U
#define SRST_A_VOP_NIU   259U
#define SRST_A_VOP       260U
#define SRST_H_VOP       261U
#define SRST_D0_VOP      262U
#define SRST_D1_VOP      263U
#define SRST_D2_VOP      264U
#define SRST_VOP_PWM     265U
#define SRST_A_HDCP      266U
#define SRST_H_HDCP      267U
#define SRST_P_HDCP      268U
#define SRST_P_HDMI_HOST 270U
#define SRST_HDMI_HOST   271U
/********Name=SOFTRST_CON17,Offset=0x444********/
#define SRST_P_DSITX_0  272U
#define SRST_P_DSITX_1  273U
#define SRST_P_EDP_CTRL 274U
#define SRST_EDP_24M    275U
#define SRST_A_VPU_NIU  280U
#define SRST_H_VPU_NIU  281U
#define SRST_A_VPU      282U
#define SRST_H_VPU      283U
#define SRST_H_EINK     286U
#define SRST_P_EINK     287U
/********Name=SOFTRST_CON18,Offset=0x448********/
#define SRST_A_RGA_NIU 288U
#define SRST_H_RGA_NIU 289U
#define SRST_P_RGA_NIU 290U
#define SRST_A_RGA     292U
#define SRST_H_RGA     293U
#define SRST_RGA_CORE  294U
#define SRST_A_IEP     295U
#define SRST_H_IEP     296U
#define SRST_IEP_CORE  297U
#define SRST_H_EBC     298U
#define SRST_D_EBC     299U
#define SRST_A_JDEC    300U
#define SRST_H_JDEC    301U
#define SRST_A_JENC    302U
#define SRST_H_JENC    303U
/********Name=SOFTRST_CON19,Offset=0x44C********/
#define SRST_A_VENC_NIU  304U
#define SRST_H_VENC_NIU  305U
#define SRST_A_RKVENC    307U
#define SRST_H_RKVENC    308U
#define SRST_RKVENC_CORE 309U
/********Name=SOFTRST_CON20,Offset=0x450********/
#define SRST_A_RKVDEC_NIU   320U
#define SRST_H_RKVDEC_NIU   321U
#define SRST_A_RKVDEC       322U
#define SRST_H_RKVDEC       323U
#define SRST_RKVDEC_CA      324U
#define SRST_RKVDEC_CORE    325U
#define SRST_RKVDEC_HEVC_CA 326U
/********Name=SOFTRST_CON21,Offset=0x454********/
#define SRST_A_BUS_NIU 336U
#define SRST_P_BUS_NIU 338U
#define SRST_P_CAN0    340U
#define SRST_CAN0      341U
#define SRST_P_CAN1    342U
#define SRST_CAN1      343U
#define SRST_P_CAN2    344U
#define SRST_CAN2      345U
#define SRST_P_GPIO1   346U
#define SRST_DB_GPIO1  347U
#define SRST_P_GPIO2   348U
#define SRST_DB_GPIO2  349U
#define SRST_P_GPIO3   350U
#define SRST_DB_GPIO3  351U
/********Name=SOFTRST_CON22,Offset=0x458********/
#define SRST_P_GPIO4      352U
#define SRST_DB_GPIO4     353U
#define SRST_P_I2C1       354U
#define SRST_I2C1         355U
#define SRST_P_I2C2       356U
#define SRST_I2C2         357U
#define SRST_P_I2C3       358U
#define SRST_I2C3         359U
#define SRST_P_I2C4       360U
#define SRST_I2C4         361U
#define SRST_P_I2C5       362U
#define SRST_I2C5         363U
#define SRST_P_OTPC_NS    364U
#define SRST_OTPC_NS_SBPI 365U
#define SRST_OTPC_NS_USR  366U
/********Name=SOFTRST_CON23,Offset=0x45C********/
#define SRST_P_PWM1 368U
#define SRST_PWM1   369U
#define SRST_P_PWM2 370U
#define SRST_PWM2   371U
#define SRST_P_PWM3 372U
#define SRST_PWM3   373U
#define SRST_P_SPI0 374U
#define SRST_SPI0   375U
#define SRST_P_SPI1 376U
#define SRST_SPI1   377U
#define SRST_P_SPI2 378U
#define SRST_SPI2   379U
#define SRST_P_SPI3 380U
#define SRST_SPI3   381U
/********Name=SOFTRST_CON24,Offset=0x460********/
#define SRST_P_SARADC 384U
#define SRST_P_TSADC  385U
#define SRST_TSADC    386U
#define SRST_P_TIMER  387U
#define SRST_TIMER0   388U
#define SRST_TIMER1   389U
#define SRST_TIMER2   390U
#define SRST_TIMER3   391U
#define SRST_TIMER4   392U
#define SRST_TIMER5   393U
#define SRST_P_UART1  394U
#define SRST_S_UART1  395U
/********Name=SOFTRST_CON25,Offset=0x464********/
#define SRST_P_UART2 400U
#define SRST_S_UART2 401U
#define SRST_P_UART3 402U
#define SRST_S_UART3 403U
#define SRST_P_UART4 404U
#define SRST_S_UART4 405U
#define SRST_P_UART5 406U
#define SRST_S_UART5 407U
#define SRST_P_UART6 408U
#define SRST_S_UART6 409U
#define SRST_P_UART7 410U
#define SRST_S_UART7 411U
#define SRST_P_UART8 412U
#define SRST_S_UART8 413U
#define SRST_P_UART9 414U
#define SRST_S_UART9 415U
/********Name=SOFTRST_CON26,Offset=0x468********/
#define SRST_P_GRF          416U
#define SRST_P_GRF_VCCIO12  417U
#define SRST_P_GRF_VCCIO34  418U
#define SRST_P_GRF_VCCIO567 419U
#define SRST_P_SCR          420U
#define SRST_P_WDT_NS       421U
#define SRST_T_WDT_NS       422U
#define SRST_P_DFT2APB      423U
#define SRST_A_MCU          426U
#define SRST_P_INTMUX       427U
#define SRST_P_MAILBOX      428U
/********Name=SOFTRST_CON27,Offset=0x46C********/
#define SRST_A_TOP_HIGH_NIU  432U
#define SRST_A_TOP_LOW_NIU   433U
#define SRST_H_TOP_NIU       434U
#define SRST_P_TOP_NIU       435U
#define SRST_P_TOP_CRU       438U
#define SRST_P_DDRPHY        439U
#define SRST_DDRPHY          440U
#define SRST_P_MIPICSIPHY    442U
#define SRST_P_MIPIDSIPHY0   443U
#define SRST_P_MIPIDSIPHY1   444U
#define SRST_P_PCIE30PHY     445U
#define SRST_PCIE30PHY       446U
#define SRST_P_PCIE30PHY_GRF 447U
/********Name=SOFTRST_CON28,Offset=0x470********/
#define SRST_P_APB2ASB_CHIP_LEFT   448U
#define SRST_P_APB2ASB_CHIP_BOTTOM 449U
#define SRST_P_ASB2APB_CHIP_LEFT   450U
#define SRST_P_ASB2APB_CHIP_BOTTOM 451U
#define SRST_P_PIPEPHY0            452U
#define SRST_PIPEPHY0              453U
#define SRST_P_PIPEPHY1            454U
#define SRST_PIPEPHY1              455U
#define SRST_P_PIPEPHY2            456U
#define SRST_PIPEPHY2              457U
#define SRST_P_USB2PHY0_GRF        458U
#define SRST_P_USB2PHY1_GRF        459U
#define SRST_P_CPU_BOOST           460U
#define SRST_CPU_BOOST             461U
#define SRST_P_OTPPHY              462U
#define SRST_OTPPHY                463U
/********Name=SOFTRST_CON29,Offset=0x474********/
#define SRST_USB2PHY0_POR       464U
#define SRST_USB2PHY0_USB3OTG0  465U
#define SRST_USB2PHY0_USB3OTG1  466U
#define SRST_USB2PHY1_POR       467U
#define SRST_USB2PHY1_USB2HOST0 468U
#define SRST_USB2PHY1_USB2HOST1 469U
#define SRST_P_EDPPHY_GRF       470U
#define SRST_TSADCPHY           471U
#define SRST_GMAC0_DELAYLINE    472U
#define SRST_GMAC1_DELAYLINE    473U
#define SRST_OTPC_ARB           474U
#define SRST_P_PIPEPHY0_GRF     475U
#define SRST_P_PIPEPHY1_GRF     476U
#define SRST_P_PIPEPHY2_GRF     477U
/********Name=PMUSOFTRST_CON00,Offset=0x200********/
#define SRST_P_PDPMU_NIU 480U
#define SRST_P_PMUCRU    481U
#define SRST_P_PMUGRF    482U
#define SRST_P_I2C0      483U
#define SRST_I2C0        484U
#define SRST_P_UART0     485U
#define SRST_S_UART0     486U
#define SRST_P_PWM0      487U
#define SRST_PWM0        488U
#define SRST_P_GPIO0     489U
#define SRST_DB_GPIO0    490U
#define SRST_P_PMUPVTM   491U
#define SRST_PMUPVTM     492U

/********Name=GATE_CON00,Offset=0x300********/
#define CLK_CORE_GATE           0U
#define CLK_CORE0_GATE          1U
#define CLK_CORE1_GATE          2U
#define CLK_CORE2_GATE          3U
#define CLK_CORE3_GATE          4U
#define SCLK_CORE_SRC_GATE      5U
#define CLK_NPLL_CORE_GATE      6U
#define SCLK_CORE_GATE          7U
#define ATCLK_CORE_GATE         8U
#define GICCLK_CORE_GATE        9U
#define PCLK_CORE_PRE_GATE      10U
#define PERIPHCLK_CORE_PRE_GATE 11U
#define PCLK_CORE_GATE          12U
#define PERIPHCLK_CORE_GATE     13U
#define TSCLK_CORE_GATE         14U
#define CNTCLK_CORE_GATE        15U
/********Name=GATE_CON01,Offset=0x304********/
#define ACLK_CORE_GATE            16U
#define ACLK_CORE_NIU2DDR_GATE    17U
#define ACLK_CORE_NIU2BUS_GATE    18U
#define PCLK_DBG_NIU_GATE         19U
#define PCLK_DBG_GATE             20U
#define PCLK_DBG_DAPLITE_GATE     21U
#define ACLK_ADB400_CORE2GIC_GATE 22U
#define ACLK_ADB400_GIC2CORE_GATE 23U
#define PCLK_CORE_GRF_GATE        24U
#define PCLK_CORE_PVTM_GATE       25U
#define CLK_CORE_PVTM_GATE        26U
#define CLK_CORE_PVTM_CORE_GATE   27U
#define CLK_CORE_PVTPLL_GATE      28U
#define CLK_CORE_DIV2_GATE        29U
#define CLK_APLL_CORE_GATE        30U
#define CLK_JTAG_GATE             31U
/********Name=GATE_CON02,Offset=0x308********/
#define CLK_GPU_SRC_GATE       32U
#define PCLK_GPU_PRE_GATE      34U
#define ACLK_GPU_GATE          35U
#define ACLK_GPU_NIU_GATE      36U
#define PCLK_GPU_NIU_GATE      37U
#define PCLK_GPU_PVTM_GATE     38U
#define CLK_GPU_PVTM_GATE      39U
#define CLK_GPU_PVTM_CORE_GATE 40U
#define CLK_GPU_PVTPLL_GATE    41U
#define CLK_GPU_DIV2_GATE      42U
#define ACLK_GPU_PRE_GATE      43U
/********Name=GATE_CON03,Offset=0x30C********/
#define CLK_NPU_SRC_GATE       48U
#define CLK_NPU_NP5_GATE       49U
#define HCLK_NPU_PRE_GATE      50U
#define PCLK_NPU_PRE_GATE      51U
#define ACLK_NPU_NIU_GATE      52U
#define HCLK_NPU_NIU_GATE      53U
#define PCLK_NPU_NIU_GATE      54U
#define ACLK_RKNN_GATE         55U
#define HCLK_RKNN_GATE         56U
#define PCLK_NPU_PVTM_GATE     57U
#define CLK_NPU_PVTM_GATE      58U
#define CLK_NPU_PVTM_CORE_GATE 59U
#define CLK_NPU_PVTPLL_GATE    60U
#define CLK_NPU_DIV2_GATE      61U
/********Name=GATE_CON04,Offset=0x310********/
#define CLK_DDRPHY1X_GATE     64U
#define CLK_DPLL_DDR_GATE     65U
#define ACLK_MSCH_DIV2_GATE   66U
#define CLK_HWFFC_CTRL_GATE   67U
#define ACLK_DDRSCRAMBLE_GATE 68U
#define ACLK_MSCH_GATE        69U
#define CLK_DDR_ALWAYSON_GATE 70U
#define ACLK_DDRSPLIT_GATE    72U
#define CLK_DDRDFI_CTL_GATE   73U
#define ACLK_DMA2DDR_GATE     75U
#define CLK_DDRMON_GATE       77U
#define CLK24_DDRMON_GATE     79U
/********Name=GATE_CON05,Offset=0x314********/
#define ACLK_GIC_AUDIO_GATE       80U
#define HCLK_GIC_AUDIO_GATE       81U
#define ACLK_GIC_AUDIO_NIU_GATE   82U
#define HCLK_GIC_AUDIO_NIU_GATE   83U
#define ACLK_GIC600_GATE          84U
#define ACLK_GICADB_CORE2GIC_GATE 85U
#define ACLK_GICADB_GIC2CORE_GATE 86U
#define ACLK_SPINLOCK_GATE        87U
#define HCLK_SDMMC_BUFFER_GATE    88U
#define DCLK_SDMMC_BUFFER_GATE    89U
#define HCLK_I2S0_8CH_GATE        90U
#define HCLK_I2S1_8CH_GATE        91U
#define HCLK_I2S2_2CH_GATE        92U
#define HCLK_I2S3_2CH_GATE        93U
#define HCLK_PDM_GATE             94U
#define MCLK_PDM_GATE             95U
/********Name=GATE_CON06,Offset=0x318********/
#define CLK_I2S0_8CH_TX_SRC_GATE  96U
#define CLK_I2S0_8CH_TX_FRAC_GATE 97U
#define MCLK_I2S0_8CH_TX_GATE     98U
#define I2S0_MCLKOUT_TX_GATE      99U
#define CLK_I2S0_8CH_RX_SRC_GATE  100U
#define CLK_I2S0_8CH_RX_FRAC_GATE 101U
#define MCLK_I2S0_8CH_RX_GATE     102U
#define I2S0_MCLKOUT_RX_GATE      103U
#define CLK_I2S1_8CH_TX_SRC_GATE  104U
#define CLK_I2S1_8CH_TX_FRAC_GATE 105U
#define MCLK_I2S1_8CH_TX_GATE     106U
#define I2S1_MCLKOUT_TX_GATE      107U
#define CLK_I2S1_8CH_RX_SRC_GATE  108U
#define CLK_I2S1_8CH_RX_FRAC_GATE 109U
#define MCLK_I2S1_8CH_RX_GATE     110U
#define I2S1_MCLKOUT_RX_GATE      111U
/********Name=GATE_CON07,Offset=0x31C********/
#define CLK_I2S2_2CH_SRC_GATE     112U
#define CLK_I2S2_2CH_FRAC_GATE    113U
#define MCLK_I2S2_2CH_GATE        114U
#define I2S2_MCLKOUT_GATE         115U
#define CLK_I2S3_2CH_TX_SRC_GATE  116U
#define CLK_I2S3_2CH_TX_FRAC_GATE 117U
#define MCLK_I2S3_2CH_TX_GATE     118U
#define I2S3_MCLKOUT_TX_GATE      119U
#define CLK_I2S3_2CH_RX_SRC_GATE  120U
#define CLK_I2S3_2CH_RX_FRAC_GATE 121U
#define MCLK_I2S3_2CH_RX_GATE     122U
#define I2S3_MCLKOUT_RX_GATE      123U
#define HCLK_VAD_GATE             124U
#define HCLK_SPDIF_8CH_GATE       125U
#define MCLK_SPDIF_8CH_SRC_GATE   126U
#define MCLK_SPDIF_8CH_FRAC_GATE  127U
/********Name=GATE_CON08,Offset=0x320********/
#define HCLK_AUDPWM_GATE           128U
#define SCLK_AUDPWM_SRC_GATE       129U
#define SCLK_AUDPWM_FRAC_GATE      130U
#define HCLK_ACDCDIG_GATE          131U
#define CLK_ACDCDIG_I2C_GATE       132U
#define CLK_ACDCDIG_DAC_GATE       133U
#define CLK_ACDCDIG_ADC_GATE       134U
#define ACLK_SECURE_FLASH_GATE     135U
#define HCLK_SECURE_FLASH_GATE     136U
#define ACLK_SECURE_FLASH_NIU_GATE 137U
#define HCLK_SECURE_FLASH_NIU_GATE 138U
#define ACLK_CRYPTO_NS_GATE        139U
#define HCLK_CRYPTO_NS_GATE        140U
#define CLK_CRYPTO_NS_CORE_GATE    141U
#define CLK_CRYPTO_NS_PKA_GATE     142U
#define CLK_CRYPTO_NS_RNG_GATE     143U
/********Name=GATE_CON09,Offset=0x324********/
#define HCLK_NANDC_GATE   144U
#define NCLK_NANDC_GATE   145U
#define HCLK_SFC_GATE     146U
#define HCLK_SFC_XIP_GATE 147U
#define SCLK_SFC_GATE     148U
#define ACLK_EMMC_GATE    149U
#define HCLK_EMMC_GATE    150U
#define BCLK_EMMC_GATE    151U
#define CCLK_EMMC_GATE    152U
#define TCLK_EMMC_GATE    153U
#define HCLK_TRNG_NS_GATE 154U
#define CLK_TRNG_NS_GATE  155U
/********Name=GATE_CON10,Offset=0x328********/
#define ACLK_PIPE_GATE            160U
#define PCLK_PIPE_GATE            161U
#define ACLK_PIPE_NIU_GATE        162U
#define PCLK_PIPE_NIU_GATE        163U
#define CLK_XPCS_EEE_GATE         164U
#define CLK_XPCS_RX_DIV10_GATE    165U
#define CLK_XPCS_TX_DIV10_GATE    166U
#define PCLK_PIPE_GRF_GATE        167U
#define ACLK_USB3OTG0_GATE        168U
#define CLK_USB3OTG0_REF_GATE     169U
#define CLK_USB3OTG0_SUSPEND_GATE 170U
#define CLK_USB3OTG0_PIPE_GATE    171U
#define ACLK_USB3OTG1_GATE        172U
#define CLK_USB3OTG1_REF_GATE     173U
#define CLK_USB3OTG1_SUSPEND_GATE 174U
#define CLK_USB3OTG1_PIPE_GATE    175U
/********Name=GATE_CON11,Offset=0x32C********/
#define ACLK_SATA0_GATE        176U
#define CLK_SATA0_PMALIVE_GATE 177U
#define CLK_SATA0_RXOOB_GATE   178U
#define CLK_SATA0_PIPE_GATE    179U
#define ACLK_SATA1_GATE        180U
#define CLK_SATA1_PMALIVE_GATE 181U
#define CLK_SATA1_RXOOB_GATE   182U
#define CLK_SATA1_PIPE_GATE    183U
#define ACLK_SATA2_GATE        184U
#define CLK_SATA2_PMALIVE_GATE 185U
#define CLK_SATA2_RXOOB_GATE   186U
#define CLK_SATA2_PIPE_GATE    187U
/********Name=GATE_CON12,Offset=0x330********/
#define ACLK_PCIE20_MST_GATE   192U
#define ACLK_PCIE20_SLV_GATE   193U
#define ACLK_PCIE20_DBI_GATE   194U
#define PCLK_PCIE20_GATE       195U
#define CLK_PCIE20_AUX_GATE    196U
#define CLK_PCIE20_PIPE_GATE   197U
#define ACLK_PCIE30X1_MST_GATE 200U
#define ACLK_PCIE30X1_SLV_GATE 201U
#define ACLK_PCIE30X1_DBI_GATE 202U
#define PCLK_PCIE30X1_GATE     203U
#define CLK_PCIE30X1_AUX_GATE  204U
#define CLK_PCIE30X1_PIPE_GATE 205U
/********Name=GATE_CON13,Offset=0x334********/
#define ACLK_PCIE30X2_MST_GATE  208U
#define ACLK_PCIE30X2_SLV_GATE  209U
#define ACLK_PCIE30X2_DBI_GATE  210U
#define PCLK_PCIE30X2_GATE      211U
#define CLK_PCIE30X2_AUX_GATE   212U
#define CLK_PCIE30X2_PIPE_GATE  213U
#define PCLK_XPCS_GATE          214U
#define CLK_XPCS_QSGMII_TX_GATE 215U
#define CLK_XPCS_QSGMII_RX_GATE 216U
#define CLK_XPCS_XGXS_TX_GATE   217U
#define CLK_XPCS_XGXS_RX_GATE   219U
#define CLK_XPCS_MII0_TX_GATE   220U
#define CLK_XPCS_MII0_RX_GATE   221U
#define CLK_XPCS_MII1_TX_GATE   222U
#define CLK_XPCS_MII1_RX_GATE   223U
/********Name=GATE_CON14,Offset=0x338********/
#define ACLK_PERIMID_GATE     224U
#define HCLK_PERIMID_GATE     225U
#define ACLK_PERIMID_NIU_GATE 226U
#define HCLK_PERIMID_NIU_GATE 227U
#define ACLK_PHP_GATE         232U
#define HCLK_PHP_GATE         233U
#define PCLK_PHP_GATE         234U
#define ACLK_PHP_NIU_GATE     235U
#define HCLK_PHP_NIU_GATE     236U
#define PCLK_PHP_NIU_GATE     237U
/********Name=GATE_CON15,Offset=0x33C********/
#define HCLK_SDMMC0_GATE       240U
#define CLK_SDMMC0_GATE        241U
#define HCLK_SDMMC1_GATE       242U
#define CLK_SDMMC1_GATE        243U
#define CLK_GMAC0_PTP_REF_GATE 244U
#define ACLK_GMAC0_GATE        245U
#define PCLK_GMAC0_GATE        246U
#define CLK_MAC0_2TOP_GATE     247U
#define CLK_MAC0_OUT_GATE      248U
#define CLK_MAC0_REFOUT_GATE   252U
/********Name=GATE_CON16,Offset=0x340********/
#define ACLK_USB_GATE           256U
#define HCLK_USB_GATE           257U
#define PCLK_USB_GATE           258U
#define ACLK_USB_NIU_GATE       259U
#define HCLK_USB_NIU_GATE       260U
#define PCLK_USB_NIU_GATE       261U
#define PCLK_USB_GRF_GATE       262U
#define HCLK_USB2HOST0_GATE     268U
#define HCLK_USB2HOST0_ARB_GATE 269U
#define HCLK_USB2HOST1_GATE     270U
#define HCLK_USB2HOST1_ARB_GATE 271U
/********Name=GATE_CON17,Offset=0x344********/
#define HCLK_SDMMC2_GATE       272U
#define CLK_SDMMC2_GATE        273U
#define CLK_GMAC1_PTP_REF_GATE 274U
#define ACLK_GMAC1_GATE        275U
#define PCLK_GMAC1_GATE        276U
#define CLK_MAC1_2TOP_GATE     277U
#define CLK_MAC1_OUT_GATE      278U
#define CLK_MAC1_REFOUT_GATE   282U
/********Name=GATE_CON18,Offset=0x348********/
#define ACLK_VI_GATE     288U
#define HCLK_VI_GATE     289U
#define PCLK_VI_GATE     290U
#define ACLK_VI_NIU_GATE 291U
#define HCLK_VI_NIU_GATE 292U
#define PCLK_VI_NIU_GATE 293U
#define ACLK_VICAP1_GATE 297U
#define HCLK_VICAP1_GATE 298U
#define DCLK_VICAP1_GATE 299U
/********Name=GATE_CON19,Offset=0x34C********/
#define ACLK_ISP_GATE       304U
#define HCLK_ISP_GATE       305U
#define CLK_ISP_GATE        306U
#define PCLK_CSI2HOST1_GATE 308U
#define CLK_CIF_OUT_GATE    312U
#define CLK_CAM0_OUT_GATE   313U
#define CLK_CAM1_OUT_GATE   314U
/********Name=GATE_CON20,Offset=0x350********/
#define HCLK_VO_GATE      321U
#define PCLK_VO_GATE      322U
#define ACLK_VO_NIU_GATE  323U
#define HCLK_VO_NIU_GATE  324U
#define PCLK_VO_NIU_GATE  325U
#define ACLK_VOP_PRE_GATE 326U
#define ACLK_VOP_NIU_GATE 327U
#define ACLK_VOP_GATE     328U
#define HCLK_VOP_GATE     329U
#define DCLK0_VOP_GATE    330U
#define DCLK1_VOP_GATE    331U
#define DCLK2_VOP_GATE    332U
#define CLK_VOP_PWM_GATE  333U
/********Name=GATE_CON21,Offset=0x354********/
#define ACLK_HDCP_GATE      336U
#define HCLK_HDCP_GATE      337U
#define PCLK_HDCP_GATE      338U
#define PCLK_HDMI_HOST_GATE 339U
#define CLK_HDMI_SFR_GATE   340U
#define CLK_HDMI_CEC_GATE   341U
#define PCLK_DSITX_0_GATE   342U
#define PCLK_DSITX_1_GATE   343U
#define PCLK_EDP_CTRL_GATE  344U
#define CLK_EDP_200M_GATE   345U
/********Name=GATE_CON22,Offset=0x358********/
#define ACLK_VPU_PRE_GATE 352U
#define HCLK_VPU_PRE_GATE 353U
#define ACLK_VPU_NIU_GATE 354U
#define HCLK_VPU_NIU_GATE 355U
#define ACLK_VPU_GATE     356U
#define HCLK_VPU_GATE     357U
#define PCLK_RGA_PRE_GATE 364U
#define PCLK_RGA_NIU_GATE 365U
#define PCLK_EINK_GATE    366U
#define HCLK_EINK_GATE    367U
/********Name=GATE_CON23,Offset=0x35C********/
#define ACLK_RGA_PRE_GATE 368U
#define HCLK_RGA_PRE_GATE 369U
#define ACLK_RGA_NIU_GATE 370U
#define HCLK_RGA_NIU_GATE 371U
#define ACLK_RGA_GATE     372U
#define HCLK_RGA_GATE     373U
#define CLK_RGA_CORE_GATE 374U
#define ACLK_IEP_GATE     375U
#define HCLK_IEP_GATE     376U
#define CLK_IEP_CORE_GATE 377U
#define HCLK_EBC_GATE     378U
#define DCLK_EBC_GATE     379U
#define ACLK_JDEC_GATE    380U
#define HCLK_JDEC_GATE    381U
#define ACLK_JENC_GATE    382U
#define HCLK_JENC_GATE    383U
/********Name=GATE_CON24,Offset=0x360********/
#define ACLK_RKVENC_PRE_GATE 384U
#define HCLK_RKVENC_PRE_GATE 385U
#define ACLK_RKVENC_NIU_GATE 387U
#define HCLK_RKVENC_NIU_GATE 388U
#define ACLK_RKVENC_GATE     390U
#define HCLK_RKVENC_GATE     391U
#define CLK_RKVENC_CORE_GATE 392U
/********Name=GATE_CON25,Offset=0x364********/
#define ACLK_RKVDEC_PRE_GATE    400U
#define HCLK_RKVDEC_PRE_GATE    401U
#define ACLK_RKVDEC_NIU_GATE    402U
#define HCLK_RKVDEC_NIU_GATE    403U
#define ACLK_RKVDEC_GATE        404U
#define HCLK_RKVDEC_GATE        405U
#define CLK_RKVDEC_CA_GATE      406U
#define CLK_RKVDEC_CORE_GATE    407U
#define CLK_RKVDEC_HEVC_CA_GATE 408U
/********Name=GATE_CON26,Offset=0x368********/
#define ACLK_BUS_GATE         416U
#define PCLK_BUS_GATE         417U
#define ACLK_BUS_NIU_GATE     418U
#define PCLK_BUS_NIU_GATE     419U
#define PCLK_TSADC_GATE       420U
#define CLK_TSADC_TSEN_GATE   421U
#define CLK_TSADC_GATE        422U
#define PCLK_SARADC_GATE      423U
#define CLK_SARADC_GATE       424U
#define PCLK_OTPC_NS_GATE     425U
#define CLK_OTPC_NS_SBPI_GATE 426U
#define CLK_OTPC_NS_USR_GATE  427U
#define PCLK_SCR_GATE         428U
#define PCLK_WDT_NS_GATE      429U
#define TCLK_WDT_NS_GATE      430U
/********Name=GATE_CON27,Offset=0x36C********/
#define PCLK_GRF_GATE          432U
#define PCLK_GRF_VCCIO12_GATE  433U
#define PCLK_GRF_VCCIO34_GATE  434U
#define PCLK_GRF_VCCIO567_GATE 435U
#define PCLK_DFT2APB_GATE      436U
#define PCLK_CAN0_GATE         437U
#define CLK_CAN0_GATE          438U
#define PCLK_CAN1_GATE         439U
#define CLK_CAN1_GATE          440U
#define PCLK_CAN2_GATE         441U
#define CLK_CAN2_GATE          442U
#define PCLK_UART1_GATE        444U
#define CLK_UART1_GATE         445U
#define CLK_UART1_FRAC_GATE    446U
#define SCLK_UART1_GATE        447U
/********Name=GATE_CON28,Offset=0x370********/
#define PCLK_UART2_GATE     448U
#define CLK_UART2_GATE      449U
#define CLK_UART2_FRAC_GATE 450U
#define SCLK_UART2_GATE     451U
#define PCLK_UART3_GATE     452U
#define CLK_UART3_GATE      453U
#define CLK_UART3_FRAC_GATE 454U
#define SCLK_UART3_GATE     455U
#define PCLK_UART4_GATE     456U
#define CLK_UART4_GATE      457U
#define CLK_UART4_FRAC_GATE 458U
#define SCLK_UART4_GATE     459U
#define PCLK_UART5_GATE     460U
#define CLK_UART5_GATE      461U
#define CLK_UART5_FRAC_GATE 462U
#define SCLK_UART5_GATE     463U
/********Name=GATE_CON29,Offset=0x374********/
#define PCLK_UART6_GATE     464U
#define CLK_UART6_GATE      465U
#define CLK_UART6_FRAC_GATE 466U
#define SCLK_UART6_GATE     467U
#define PCLK_UART7_GATE     468U
#define CLK_UART7_GATE      469U
#define CLK_UART7_FRAC_GATE 470U
#define SCLK_UART7_GATE     471U
#define PCLK_UART8_GATE     472U
#define CLK_UART8_GATE      473U
#define CLK_UART8_FRAC_GATE 474U
#define SCLK_UART8_GATE     475U
#define PCLK_UART9_GATE     476U
#define CLK_UART9_GATE      477U
#define CLK_UART9_FRAC_GATE 478U
#define SCLK_UART9_GATE     479U
/********Name=GATE_CON30,Offset=0x378********/
#define PCLK_I2C1_GATE 480U
#define CLK_I2C1_GATE  481U
#define PCLK_I2C2_GATE 482U
#define CLK_I2C2_GATE  483U
#define PCLK_I2C3_GATE 484U
#define CLK_I2C3_GATE  485U
#define PCLK_I2C4_GATE 486U
#define CLK_I2C4_GATE  487U
#define PCLK_I2C5_GATE 488U
#define CLK_I2C5_GATE  489U
#define PCLK_SPI0_GATE 490U
#define CLK_SPI0_GATE  491U
#define PCLK_SPI1_GATE 492U
#define CLK_SPI1_GATE  493U
#define PCLK_SPI2_GATE 494U
#define CLK_SPI2_GATE  495U
/********Name=GATE_CON31,Offset=0x37C********/
#define PCLK_SPI3_GATE        496U
#define CLK_SPI3_GATE         497U
#define PCLK_GPIO1_GATE       498U
#define DBCLK_GPIO1_GATE      499U
#define PCLK_GPIO2_GATE       500U
#define DBCLK_GPIO2_GATE      501U
#define PCLK_GPIO3_GATE       502U
#define DBCLK_GPIO3_GATE      503U
#define PCLK_GPIO4_GATE       504U
#define DBCLK_GPIO4_GATE      505U
#define PCLK_PWM1_GATE        506U
#define CLK_PWM1_GATE         507U
#define CLK_PWM1_CAPTURE_GATE 508U
#define PCLK_PWM2_GATE        509U
#define CLK_PWM2_GATE         510U
#define CLK_PWM2_CAPTURE_GATE 511U
/********Name=GATE_CON32,Offset=0x380********/
#define PCLK_PWM3_GATE        512U
#define CLK_PWM3_GATE         513U
#define CLK_PWM3_CAPTURE_GATE 514U
#define PCLK_TIMER_GATE       515U
#define CLK_TIMER0_GATE       516U
#define CLK_TIMER1_GATE       517U
#define CLK_TIMER2_GATE       518U
#define CLK_TIMER3_GATE       519U
#define CLK_TIMER4_GATE       520U
#define CLK_TIMER5_GATE       521U
#define CLK_I2C_GATE          522U
#define DBCLK_GPIO_GATE       523U
#define CLK_TIMER_GATE        524U
#define ACLK_MCU_GATE         525U
#define PCLK_INTMUX_GATE      526U
#define PCLK_MAILBOX_GATE     527U
/********Name=GATE_CON33,Offset=0x384********/
#define ACLK_TOP_HIGH_GATE     528U
#define ACLK_TOP_LOW_GATE      529U
#define HCLK_TOP_GATE          530U
#define PCLK_TOP_GATE          531U
#define ACLK_TOP_HIGH_NIU_GATE 532U
#define ACLK_TOP_LOW_NIU_GATE  533U
#define HCLK_TOP_NIU_GATE      534U
#define PCLK_TOP_NIU_GATE      535U
#define PCLK_PCIE30PHY_GATE    536U
#define CLK_OTPC_ARB_GATE      537U
#define PCLK_TOP_CRU_GATE      540U
#define PCLK_MIPICSIPHY_GATE   541U
#define PCLK_MIPIDSIPHY0_GATE  542U
#define PCLK_MIPIDSIPHY1_GATE  543U
/********Name=GATE_CON34,Offset=0x388********/
#define PCLK_APB2ASB_CHIP_LEFT_GATE   544U
#define PCLK_APB2ASB_CHIP_BOTTOM_GATE 545U
#define PCLK_ASB2APB_CHIP_LEFT_GATE   546U
#define PCLK_ASB2APB_CHIP_BOTTOM_GATE 547U
#define PCLK_PIPEPHY0_GATE            548U
#define PCLK_PIPEPHY1_GATE            549U
#define PCLK_PIPEPHY2_GATE            550U
#define PCLK_USB2PHY0_GRF_GATE        551U
#define PCLK_USB2PHY1_GRF_GATE        552U
#define PCLK_DDRPHY_GATE              553U
#define CLK_DDRPHY_GATE               554U
#define PCLK_CPU_BOOST_GATE           555U
#define CLK_CPU_BOOST_GATE            556U
#define PCLK_OTPPHY_GATE              557U
#define PCLK_EDPPHY_GRF_GATE          558U
#define CLK_TESTOUT_GATE              559U
/********Name=GATE_CON35,Offset=0x38C********/
#define CLK_GPLL_DIV_400M_GATE 560U
#define CLK_GPLL_DIV_300M_GATE 561U
#define CLK_GPLL_DIV_200M_GATE 562U
#define CLK_GPLL_DIV_150M_GATE 563U
#define CLK_GPLL_DIV_100M_GATE 564U
#define CLK_GPLL_DIV_75M_GATE  565U
#define CLK_GPLL_DIV_20M_GATE  566U
#define CLK_CPLL_DIV_500M_GATE 567U
#define CLK_CPLL_DIV_333M_GATE 568U
#define CLK_CPLL_DIV_250M_GATE 569U
#define CLK_CPLL_DIV_125M_GATE 570U
#define CLK_CPLL_DIV_100M_GATE 571U
#define CLK_CPLL_DIV_62P5_GATE 572U
#define CLK_CPLL_DIV_50M_GATE  573U
#define CLK_CPLL_DIV_25M_GATE  574U
#define CLK_OSC0_DIV_750K_GATE 575U
/********Name=PMUGATE_CON00,Offset=0x180********/
#define XIN_OSC0_DIV_GATE    576U
#define CLK_OSC0_DIV32K_GATE 577U
#define PCLK_PDPMU_GATE      578U
#define PCLK_PDPMU_NIU_GATE  579U
#define PCLK_PMUCRU_GATE     580U
#define PCLK_PMUGRF_GATE     581U
#define PCLK_PMU_GATE        582U
#define CLK_PMU_GATE         583U
/********Name=PMUGATE_CON01,Offset=0x184********/
#define PCLK_I2C0_GATE          592U
#define CLK_I2C0_GATE           593U
#define PCLK_UART0_GATE         594U
#define SCLK_UART0_DIV_GATE     595U
#define SCLK_UART0_FRACDIV_GATE 596U
#define SCLK_UART0_GATE         597U
#define PCLK_PWM0_GATE          598U
#define CLK_PWM0_GATE           599U
#define CLK_CAPTURE_PWM0_GATE   600U
#define PCLK_GPIO0_GATE         601U
#define DBCLK_GPIO0_GATE        602U
#define PCLK_PMUPVTM_GATE       603U
#define CLK_PMUPVTM_GATE        604U
#define CLK_CORE_PMUPVTM_GATE   605U
/********Name=PMUGATE_CON02,Offset=0x188********/
#define CLK_REF24M_GATE           608U
#define XIN_OSC0_USBPHY0_GATE     609U
#define XIN_OSC0_USBPHY1_GATE     610U
#define XIN_OSC0_MIPIDSIPHY0_GATE 611U
#define XIN_OSC0_MIPIDSIPHY1_GATE 612U
#define CLK_WIFI_DIV_GATE         613U
#define CLK_WIFI_OSC0_GATE        614U
#define CLK_PCIEPHY0_DIV_GATE     615U
#define CLK_PCIEPHY0_OSC0_GATE    616U
#define CLK_PCIEPHY1_DIV_GATE     617U
#define CLK_PCIEPHY1_OSC0_GATE    618U
#define CLK_PCIEPHY2_DIV_GATE     619U
#define CLK_PCIEPHY2_OSC0_GATE    620U
#define CLK_PCIE30PHY_REF_M_GATE  621U
#define CLK_PCIE30PHY_REF_N_GATE  622U
#define XIN_OSC0_EDPPHY_GATE      623U

/********Name=CLKSEL_CON00,Offset=0x100********/
#define CLK_CORE0_DIV 0x05000000U
#define CLK_CORE1_DIV 0x05080000U
/********Name=CLKSEL_CON01,Offset=0x104********/
#define CLK_CORE2_DIV 0x05000001U
#define CLK_CORE3_DIV 0x05080001U
/********Name=CLKSEL_CON02,Offset=0x108********/
#define SCLK_CORE_SRC_DIV 0x04000002U
/********Name=CLKSEL_CON03,Offset=0x10C********/
#define ATCLK_CORE_DIV  0x05000003U
#define GICCLK_CORE_DIV 0x05080003U
/********Name=CLKSEL_CON04,Offset=0x110********/
#define PCLK_CORE_PRE_DIV      0x05000004U
#define PERIPHCLK_CORE_PRE_DIV 0x05080004U
/********Name=CLKSEL_CON05,Offset=0x114********/
#define ACLK_CORE_NDFT_DIV 0x05080005U
/********Name=CLKSEL_CON06,Offset=0x118********/
#define CLK_GPU_PRE_DIV  0x04000006U
#define ACLK_GPU_PRE_DIV 0x02080006U
#define PCLK_GPU_PRE_DIV 0x040C0006U
/********Name=CLKSEL_CON07,Offset=0x11C********/
#define CLK_NPU_SRC_DIV 0x04000007U
#define CLK_NPU_NP5_DIV 0x02040007U
/********Name=CLKSEL_CON08,Offset=0x120********/
#define HCLK_NPU_PRE_DIV 0x04000008U
#define PCLK_NPU_PRE_DIV 0x04040008U
/********Name=CLKSEL_CON09,Offset=0x124********/
#define CLK_DDRPHY1X_SRC_DIV 0x05000009U
/********Name=CLKSEL_CON10,Offset=0x128********/
#define CLK_MSCH_DIV 0x0200000AU
/********Name=CLKSEL_CON11,Offset=0x12C********/
#define CLK_I2S0_8CH_TX_SRC_DIV 0x0700000BU
/********Name=CLKSEL_CON12,Offset=0x130********/
#define CLK_I2S0_8CH_TX_FRAC_DIV 0x2000000CU
/********Name=CLKSEL_CON13,Offset=0x134********/
#define CLK_I2S0_8CH_RX_SRC_DIV 0x0700000DU
/********Name=CLKSEL_CON14,Offset=0x138********/
#define CLK_I2S0_8CH_RX_FRAC_DIV 0x2000000EU
/********Name=CLKSEL_CON15,Offset=0x13C********/
#define CLK_I2S1_8CH_TX_SRC_DIV 0x0700000FU
/********Name=CLKSEL_CON16,Offset=0x140********/
#define CLK_I2S1_8CH_TX_FRAC_DIV 0x20000010U
/********Name=CLKSEL_CON17,Offset=0x144********/
#define CLK_I2S1_8CH_RX_SRC_DIV 0x07000011U
/********Name=CLKSEL_CON18,Offset=0x148********/
#define CLK_I2S1_8CH_RX_FRAC_DIV 0x20000012U
/********Name=CLKSEL_CON19,Offset=0x14C********/
#define CLK_I2S2_2CH_SRC_DIV 0x07000013U
/********Name=CLKSEL_CON20,Offset=0x150********/
#define CLK_I2S2_2CH_FRAC_DIV 0x20000014U
/********Name=CLKSEL_CON21,Offset=0x154********/
#define CLK_I2S3_2CH_TX_SRC_DIV 0x07000015U
/********Name=CLKSEL_CON22,Offset=0x158********/
#define CLK_I2S3_2CH_TX_FRAC_DIV 0x20000016U
/********Name=CLKSEL_CON23,Offset=0x15C********/
#define MCLK_SPDIF_8CH_SRC_DIV 0x07000017U
/********Name=CLKSEL_CON24,Offset=0x160********/
#define MCLK_SPDIF_8CH_FRAC_DIV 0x20000018U
/********Name=CLKSEL_CON25,Offset=0x164********/
#define SCLK_AUDPWM_SRC_DIV 0x06000019U
/********Name=CLKSEL_CON26,Offset=0x168********/
#define SCLK_AUDPWM_FRAC_DIV 0x2000001AU
/********Name=CLKSEL_CON27,Offset=0x16C********/
/********Name=CLKSEL_CON28,Offset=0x170********/
/********Name=CLKSEL_CON29,Offset=0x174********/
#define PCLK_PIPE_DIV 0x0404001DU
/********Name=CLKSEL_CON30,Offset=0x178********/
#define PCLK_PHP_DIV 0x0404001EU
/********Name=CLKSEL_CON31,Offset=0x17C********/
/********Name=CLKSEL_CON32,Offset=0x180********/
#define PCLK_USB_DIV 0x04040020U
/********Name=CLKSEL_CON33,Offset=0x184********/
/********Name=CLKSEL_CON34,Offset=0x188********/
#define HCLK_VI_DIV 0x04040022U
#define PCLK_VI_DIV 0x04080022U
/********Name=CLKSEL_CON35,Offset=0x18C********/
#define CLK_ISP_DIV     0x05000023U
#define CLK_CIF_OUT_DIV 0x06080023U
/********Name=CLKSEL_CON36,Offset=0x190********/
#define CLK_CAM0_OUT_DIV 0x06000024U
#define CLK_CAM1_OUT_DIV 0x06080024U
/********Name=CLKSEL_CON37,Offset=0x194********/
#define HCLK_VO_DIV 0x04080025U
#define PCLK_VO_DIV 0x040C0025U
/********Name=CLKSEL_CON38,Offset=0x198********/
#define ACLK_VOP_PRE_DIV 0x05000026U
/********Name=CLKSEL_CON39,Offset=0x19C********/
#define DCLK0_VOP_DIV 0x08000027U
/********Name=CLKSEL_CON40,Offset=0x1A0********/
#define DCLK1_VOP_DIV 0x08000028U
/********Name=CLKSEL_CON41,Offset=0x1A4********/
#define DCLK2_VOP_DIV 0x08000029U
/********Name=CLKSEL_CON42,Offset=0x1A8********/
#define ACLK_VPU_PRE_DIV 0x0500002AU
#define HCLK_VPU_PRE_DIV 0x0408002AU
/********Name=CLKSEL_CON43,Offset=0x1AC********/
#define HCLK_RGA_PRE_DIV 0x0408002BU
#define PCLK_RGA_PRE_DIV 0x040C002BU
/********Name=CLKSEL_CON44,Offset=0x1B0********/
#define ACLK_RKVENC_PRE_DIV 0x0500002CU
#define HCLK_RKVENC_PRE_DIV 0x0408002CU
/********Name=CLKSEL_CON45,Offset=0x1B4********/
#define CLK_RKVENC_CORE_DIV 0x0500002DU
/********Name=CLKSEL_CON47,Offset=0x1BC********/
#define ACLK_RKVDEC_PRE_DIV 0x0500002FU
#define HCLK_RKVDEC_PRE_DIV 0x0408002FU
/********Name=CLKSEL_CON48,Offset=0x1C0********/
#define CLK_RKVDEC_CA_DIV 0x05000030U
/********Name=CLKSEL_CON49,Offset=0x1C4********/
#define CLK_RKVDEC_HEVC_CA_DIV 0x05000031U
#define CLK_RKVDEC_CORE_DIV    0x05080031U
/********Name=CLKSEL_CON50,Offset=0x1C8********/
/********Name=CLKSEL_CON51,Offset=0x1CC********/
#define CLK_TSADC_TSEN_DIV 0x03000033U
#define CLK_TSADC_DIV      0x07080033U
/********Name=CLKSEL_CON52,Offset=0x1D0********/
#define CLK_UART1_SRC_DIV 0x07000034U
/********Name=CLKSEL_CON53,Offset=0x1D4********/
#define CLK_UART1_FRAC_DIV 0x20000035U
/********Name=CLKSEL_CON54,Offset=0x1D8********/
#define CLK_UART2_SRC_DIV 0x07000036U
/********Name=CLKSEL_CON55,Offset=0x1DC********/
#define CLK_UART2_FRAC_DIV 0x20000037U
/********Name=CLKSEL_CON56,Offset=0x1E0********/
#define CLK_UART3_SRC_DIV 0x07000038U
/********Name=CLKSEL_CON57,Offset=0x1E4********/
#define CLK_UART3_FRAC_DIV 0x20000039U
/********Name=CLKSEL_CON58,Offset=0x1E8********/
#define CLK_UART4_SRC_DIV 0x0700003AU
/********Name=CLKSEL_CON59,Offset=0x1EC********/
#define CLK_UART4_FRAC_DIV 0x2000003BU
/********Name=CLKSEL_CON60,Offset=0x1F0********/
#define CLK_UART5_SRC_DIV 0x0700003CU
/********Name=CLKSEL_CON61,Offset=0x1F4********/
#define CLK_UART5_FRAC_DIV 0x2000003DU
/********Name=CLKSEL_CON62,Offset=0x1F8********/
#define CLK_UART6_SRC_DIV 0x0700003EU
/********Name=CLKSEL_CON63,Offset=0x1FC********/
#define CLK_UART6_FRAC_DIV 0x2000003FU
/********Name=CLKSEL_CON64,Offset=0x200********/
#define CLK_UART7_SRC_DIV 0x07000040U
/********Name=CLKSEL_CON65,Offset=0x204********/
#define CLK_UART7_FRAC_DIV 0x20000041U
/********Name=CLKSEL_CON66,Offset=0x208********/
#define CLK_UART8_SRC_DIV 0x07000042U
/********Name=CLKSEL_CON67,Offset=0x20C********/
#define CLK_UART8_FRAC_DIV 0x20000043U
/********Name=CLKSEL_CON68,Offset=0x210********/
#define CLK_UART9_SRC_DIV 0x07000044U
/********Name=CLKSEL_CON69,Offset=0x214********/
#define CLK_UART9_FRAC_DIV 0x20000045U
/********Name=CLKSEL_CON70,Offset=0x218********/
#define CLK_CAN0_DIV 0x05000046U
#define CLK_CAN1_DIV 0x05080046U
/********Name=CLKSEL_CON71,Offset=0x21C********/
#define CLK_CAN2_DIV 0x05000047U
/********Name=CLKSEL_CON72,Offset=0x220********/
/********Name=CLKSEL_CON73,Offset=0x224********/
/********Name=CLKSEL_CON74,Offset=0x228********/
#define CLK_TESTOUT_DIV 0x0800004AU
/********Name=CLKSEL_CON75,Offset=0x22C********/
#define CLK_GPLL_DIV_400M_DIV 0x0500004BU
#define CLK_GPLL_DIV_300M_DIV 0x0508004BU
/********Name=CLKSEL_CON76,Offset=0x230********/
#define CLK_GPLL_DIV_200M_DIV 0x0500004CU
#define CLK_GPLL_DIV_150M_DIV 0x0508004CU
/********Name=CLKSEL_CON77,Offset=0x234********/
#define CLK_GPLL_DIV_100M_DIV 0x0500004DU
#define CLK_GPLL_DIV_75M_DIV  0x0508004DU
/********Name=CLKSEL_CON78,Offset=0x238********/
#define CLK_GPLL_DIV_20M_DIV  0x0600004EU
#define CLK_CPLL_DIV_500M_DIV 0x0508004EU
/********Name=CLKSEL_CON79,Offset=0x23C********/
#define CLK_CPLL_DIV_333M_DIV 0x0500004FU
#define CLK_CPLL_DIV_250M_DIV 0x0508004FU
/********Name=CLKSEL_CON80,Offset=0x240********/
#define CLK_CPLL_DIV_125M_DIV 0x05000050U
#define CLK_CPLL_DIV_62P5_DIV 0x05080050U
/********Name=CLKSEL_CON81,Offset=0x244********/
#define CLK_CPLL_DIV_50M_DIV 0x05000051U
#define CLK_CPLL_DIV_25M_DIV 0x06080051U
/********Name=CLKSEL_CON82,Offset=0x248********/
#define CLK_CPLL_DIV_100M_DIV 0x05000052U
#define CLK_OSC0_DIV_750K_DIV 0x06080052U
/********Name=CLKSEL_CON83,Offset=0x24C********/
#define CLK_I2S3_2CH_RX_SRC_DIV 0x07000053U
/********Name=CLKSEL_CON84,Offset=0x250********/
#define CLK_I2S3_2CH_RX_FRAC_DIV 0x20000054U

/********Name=CLKSEL_CON00,Offset=0x100********/
#define CLK_CORE_I_SEL                        0x01060000U
#define CLK_CORE_I_SEL_CLK_GPLL_MUX           0U
#define CLK_CORE_NDFT_SEL                     0x01070000U
#define CLK_CORE_NDFT_SEL_CLK_APLL_CORE       0U
#define CLK_CORE_NDFT_MUX_SEL                 0x010F0000U
#define CLK_CORE_NDFT_MUX_SEL_CORE_PVTPLL_OUT 0U
/********Name=CLKSEL_CON01,Offset=0x104********/
/********Name=CLKSEL_CON02,Offset=0x108********/
#define SCLK_CORE_SRC_SEL               0x02080002U
#define SCLK_CORE_SRC_SEL_CLK_NPLL_MUX  0U
#define SCLK_CORE_PRE_SEL               0x010F0002U
#define SCLK_CORE_PRE_SEL_CLK_NPLL_CORE 0U
/********Name=CLKSEL_CON03,Offset=0x10C********/
/********Name=CLKSEL_CON04,Offset=0x110********/
/********Name=CLKSEL_CON05,Offset=0x114********/
#define ACLK_CORE_NIU2BUS_SEL                   0x020E0005U
#define ACLK_CORE_NIU2BUS_SEL_XIN_OSC0_FUNC_MUX 0U
/********Name=CLKSEL_CON06,Offset=0x118********/
#define CLK_GPU_PRE_SEL                    0x02060006U
#define CLK_GPU_PRE_SEL_CLK_NPLL_MUX       0U
#define CLK_GPU_PRE_MUX_SEL                0x010B0006U
#define CLK_GPU_PRE_MUX_SEL_GPU_PVTPLL_OUT 0U
/********Name=CLKSEL_CON07,Offset=0x11C********/
#define CLK_NPU_SRC_SEL                    0x01060007U
#define CLK_NPU_SRC_SEL_CLK_GPLL_MUX       0U
#define CLK_NPU_NP5_SEL                    0x01070007U
#define CLK_NPU_NP5_SEL_CLK_GPLL_MUX       0U
#define CLK_NPU_PRE_NDFT_SEL               0x01080007U
#define CLK_NPU_PRE_NDFT_SEL_CLK_NPU_NP5   0U
#define CLK_NPU_PRE_MUX_SEL                0x010F0007U
#define CLK_NPU_PRE_MUX_SEL_NPU_PVTPLL_OUT 0U
/********Name=CLKSEL_CON08,Offset=0x120********/
/********Name=CLKSEL_CON09,Offset=0x124********/
#define CLK_DDRPHY1X_SRC_SEL              0x02060009U
#define CLK_DDRPHY1X_SRC_SEL_CLK_CPLL_MUX 0U
#define CLK_DDRPHY1X_SEL                  0x010F0009U
#define CLK_DDRPHY1X_SEL_CLK_DPLL_DDR     0U
/********Name=CLKSEL_CON10,Offset=0x128********/
#define ACLK_PERIMID_SEL                       0x0204000AU
#define ACLK_PERIMID_SEL_XIN_OSC0_FUNC_MUX     0U
#define HCLK_PERIMID_SEL                       0x0206000AU
#define HCLK_PERIMID_SEL_XIN_OSC0_FUNC_MUX     0U
#define ACLK_GIC_AUDIO_SEL                     0x0208000AU
#define ACLK_GIC_AUDIO_SEL_XIN_OSC0_FUNC_MUX   0U
#define HCLK_GIC_AUDIO_SEL                     0x020A000AU
#define HCLK_GIC_AUDIO_SEL_XIN_OSC0_FUNC_MUX   0U
#define DCLK_SDMMC_BUFFER_SEL                  0x020C000AU
#define DCLK_SDMMC_BUFFER_SEL_CLK_CPLL_DIV_50M 0U
/********Name=CLKSEL_CON11,Offset=0x12C********/
#define CLK_I2S0_8CH_TX_SRC_SEL              0x0208000BU
#define CLK_I2S0_8CH_TX_SRC_SEL_CLK_NPLL_MUX 0U
#define MCLK_I2S0_8CH_TX_SEL                 0x020A000BU
#define MCLK_I2S0_8CH_TX_SEL_XIN_OSC0_HALF   0U
#define I2S0_MCLKOUT_TX_SEL                  0x010F000BU
#define I2S0_MCLKOUT_TX_SEL_XIN_OSC0_HALF    0U
/********Name=CLKSEL_CON12,Offset=0x130********/
/********Name=CLKSEL_CON13,Offset=0x134********/
#define CLK_I2S0_8CH_RX_SRC_SEL              0x0208000DU
#define CLK_I2S0_8CH_RX_SRC_SEL_CLK_NPLL_MUX 0U
#define MCLK_I2S0_8CH_RX_SEL                 0x020A000DU
#define MCLK_I2S0_8CH_RX_SEL_XIN_OSC0_HALF   0U
#define I2S0_MCLKOUT_RX_SEL                  0x010F000DU
#define I2S0_MCLKOUT_RX_SEL_XIN_OSC0_HALF    0U
/********Name=CLKSEL_CON14,Offset=0x138********/
/********Name=CLKSEL_CON15,Offset=0x13C********/
#define CLK_I2S1_8CH_TX_SRC_SEL              0x0208000FU
#define CLK_I2S1_8CH_TX_SRC_SEL_CLK_NPLL_MUX 0U
#define MCLK_I2S1_8CH_TX_SEL                 0x020A000FU
#define MCLK_I2S1_8CH_TX_SEL_XIN_OSC0_HALF   0U
#define I2S1_MCLKOUT_TX_SEL                  0x010F000FU
#define I2S1_MCLKOUT_TX_SEL_XIN_OSC0_HALF    0U
/********Name=CLKSEL_CON16,Offset=0x140********/
/********Name=CLKSEL_CON17,Offset=0x144********/
#define CLK_I2S1_8CH_RX_SRC_SEL              0x02080011U
#define CLK_I2S1_8CH_RX_SRC_SEL_CLK_NPLL_MUX 0U
#define MCLK_I2S1_8CH_RX_SEL                 0x020A0011U
#define MCLK_I2S1_8CH_RX_SEL_XIN_OSC0_HALF   0U
#define I2S1_MCLKOUT_RX_SEL                  0x010F0011U
#define I2S1_MCLKOUT_RX_SEL_XIN_OSC0_HALF    0U
/********Name=CLKSEL_CON18,Offset=0x148********/
/********Name=CLKSEL_CON19,Offset=0x14C********/
#define CLK_I2S2_2CH_SRC_SEL              0x02080013U
#define CLK_I2S2_2CH_SRC_SEL_CLK_NPLL_MUX 0U
#define MCLK_I2S2_2CH_SEL                 0x020A0013U
#define MCLK_I2S2_2CH_SEL_XIN_OSC0_HALF   0U
#define I2S2_MCLKOUT_SEL                  0x010F0013U
#define I2S2_MCLKOUT_SEL_XIN_OSC0_HALF    0U
/********Name=CLKSEL_CON20,Offset=0x150********/
/********Name=CLKSEL_CON21,Offset=0x154********/
#define CLK_I2S3_2CH_TX_SRC_SEL              0x02080015U
#define CLK_I2S3_2CH_TX_SRC_SEL_CLK_NPLL_MUX 0U
#define MCLK_I2S3_2CH_TX_SEL                 0x020A0015U
#define MCLK_I2S3_2CH_TX_SEL_XIN_OSC0_HALF   0U
#define I2S3_MCLKOUT_TX_SEL                  0x010F0015U
#define I2S3_MCLKOUT_TX_SEL_XIN_OSC0_HALF    0U
/********Name=CLKSEL_CON22,Offset=0x158********/
/********Name=CLKSEL_CON23,Offset=0x15C********/
#define MCLK_PDM_SEL                           0x02080017U
#define MCLK_PDM_SEL_CLK_GPLL_DIV_100M         0U
#define CLK_ACDCDIG_I2C_SEL                    0x020A0017U
#define CLK_ACDCDIG_I2C_SEL_CLK_CPLL_DIV_100M  0U
#define MCLK_SPDIF_8CH_SRC_SEL                 0x010E0017U
#define MCLK_SPDIF_8CH_SRC_SEL_CLK_GPLL_MUX    0U
#define MCLK_SPDIF_8CH_SEL                     0x010F0017U
#define MCLK_SPDIF_8CH_SEL_MCLK_SPDIF_8CH_FRAC 0U
/********Name=CLKSEL_CON24,Offset=0x160********/
/********Name=CLKSEL_CON25,Offset=0x164********/
#define SCLK_AUDPWM_SRC_SEL              0x010E0019U
#define SCLK_AUDPWM_SRC_SEL_CLK_CPLL_MUX 0U
#define SCLK_AUDPWM_SEL                  0x010F0019U
#define SCLK_AUDPWM_SEL_SCLK_AUDPWM_FRAC 0U
/********Name=CLKSEL_CON26,Offset=0x168********/
/********Name=CLKSEL_CON27,Offset=0x16C********/
#define ACLK_SECURE_FLASH_SEL                    0x0200001BU
#define ACLK_SECURE_FLASH_SEL_XIN_OSC0_FUNC_MUX  0U
#define HCLK_SECURE_FLASH_SEL                    0x0202001BU
#define HCLK_SECURE_FLASH_SEL_XIN_OSC0_FUNC_MUX  0U
#define CLK_CRYPTO_NS_CORE_SEL                   0x0204001BU
#define CLK_CRYPTO_NS_CORE_SEL_CLK_GPLL_DIV_100M 0U
#define CLK_CRYPTO_NS_PKA_SEL                    0x0206001BU
#define CLK_CRYPTO_NS_PKA_SEL_CLK_GPLL_DIV_100M  0U
/********Name=CLKSEL_CON28,Offset=0x170********/
#define NCLK_NANDC_SEL                   0x0200001CU
#define NCLK_NANDC_SEL_XIN_OSC0_FUNC_MUX 0U
#define SCLK_SFC_SEL                     0x0304001CU
#define SCLK_SFC_SEL_CLK_GPLL_DIV_150M   0U
#define BCLK_EMMC_SEL                    0x0208001CU
#define BCLK_EMMC_SEL_CLK_CPLL_DIV_125M  0U
#define CCLK_EMMC_SEL                    0x030C001CU
#define CCLK_EMMC_SEL_CLK_OSC0_DIV_375K  0U
/********Name=CLKSEL_CON29,Offset=0x174********/
#define ACLK_PIPE_SEL                        0x0200001DU
#define ACLK_PIPE_SEL_XIN_OSC0_FUNC_MUX      0U
#define CLK_USB3OTG0_SUSPEND_SEL             0x0108001DU
#define CLK_USB3OTG0_SUSPEND_SEL_CLK_RTC_32K 0U
#define CLK_USB3OTG1_SUSPEND_SEL             0x0109001DU
#define CLK_USB3OTG1_SUSPEND_SEL_CLK_RTC_32K 0U
#define CLK_XPCS_EEE_SEL                     0x010D001DU
#define CLK_XPCS_EEE_SEL_CLK_CPLL_DIV_125M   0U
/********Name=CLKSEL_CON30,Offset=0x178********/
#define ACLK_PHP_SEL                     0x0200001EU
#define ACLK_PHP_SEL_XIN_OSC0_FUNC_MUX   0U
#define HCLK_PHP_SEL                     0x0202001EU
#define HCLK_PHP_SEL_XIN_OSC0_FUNC_MUX   0U
#define CLK_SDMMC0_SEL                   0x0308001EU
#define CLK_SDMMC0_SEL_CLK_OSC0_DIV_750K 0U
#define CLK_SDMMC1_SEL                   0x030C001EU
#define CLK_SDMMC1_SEL_CLK_OSC0_DIV_750K 0U
/********Name=CLKSEL_CON31,Offset=0x17C********/
#define RMII0_EXTCLK_SEL                        0x0102001FU
#define RMII0_EXTCLK_SEL_IO                     0U
#define RMII0_CLK_SEL                           0x0103001FU
#define RMII0_CLK_SEL_25M                       0U
#define RGMII0_CLK_SEL                          0x0204001FU
#define RGMII0_CLK_SEL_25M                      0U
#define CLK_MAC0_2TOP_SEL                       0x0208001FU
#define CLK_MAC0_2TOP_SEL_CLK_PPLL_MUX          0U
#define CLK_GMAC0_PTP_REF_SEL                   0x020C001FU
#define CLK_GMAC0_PTP_REF_SEL_XIN_OSC0_FUNC_MUX 0U
#define CLK_MAC0_OUT_SEL                        0x020E001FU
#define CLK_MAC0_OUT_SEL_XIN_OSC0_FUNC_MUX      0U
/********Name=CLKSEL_CON32,Offset=0x180********/
#define ACLK_USB_SEL                     0x02000020U
#define ACLK_USB_SEL_XIN_OSC0_FUNC_MUX   0U
#define HCLK_USB_SEL                     0x02020020U
#define HCLK_USB_SEL_XIN_OSC0_FUNC_MUX   0U
#define CLK_SDMMC2_SEL                   0x03080020U
#define CLK_SDMMC2_SEL_CLK_OSC0_DIV_750K 0U
/********Name=CLKSEL_CON33,Offset=0x184********/
#define RMII1_EXTCLK_SEL                        0x01020021U
#define RMII1_EXTCLK_SEL_IO                     0U
#define RMII1_CLK_SEL                           0x01030021U
#define RMII1_CLK_SEL_25M                       0U
#define RGMII1_CLK_SEL                          0x02040021U
#define RGMII1_CLK_SEL_25M                      0U
#define CLK_MAC1_2TOP_SEL                       0x02080021U
#define CLK_MAC1_2TOP_SEL_CLK_PPLL_MUX          0U
#define CLK_GMAC1_PTP_REF_SEL                   0x020C0021U
#define CLK_GMAC1_PTP_REF_SEL_XIN_OSC0_FUNC_MUX 0U
#define CLK_MAC1_OUT_SEL                        0x020E0021U
#define CLK_MAC1_OUT_SEL_XIN_OSC0_FUNC_MUX      0U
/********Name=CLKSEL_CON34,Offset=0x188********/
#define ACLK_VI_SEL                       0x02000022U
#define ACLK_VI_SEL_XIN_OSC0_FUNC_MUX     0U
#define DCLK_VICAP1_SEL                   0x020E0022U
#define DCLK_VICAP1_SEL_CLK_GPLL_DIV_200M 0U
/********Name=CLKSEL_CON35,Offset=0x18C********/
#define CLK_ISP_SEL                       0x02060023U
#define CLK_ISP_SEL_CLK_HPLL_MUX          0U
#define CLK_CIF_OUT_SEL                   0x020E0023U
#define CLK_CIF_OUT_SEL_XIN_OSC0_FUNC_MUX 0U
/********Name=CLKSEL_CON36,Offset=0x190********/
#define CLK_CAM0_OUT_SEL                   0x02060024U
#define CLK_CAM0_OUT_SEL_XIN_OSC0_FUNC_MUX 0U
#define CLK_CAM1_OUT_SEL                   0x020E0024U
#define CLK_CAM1_OUT_SEL_XIN_OSC0_FUNC_MUX 0U
/********Name=CLKSEL_CON37,Offset=0x194********/
#define ACLK_VO_SEL                   0x02000025U
#define ACLK_VO_SEL_XIN_OSC0_FUNC_MUX 0U
/********Name=CLKSEL_CON38,Offset=0x198********/
#define ACLK_VOP_PRE_SEL                   0x02060026U
#define ACLK_VOP_PRE_SEL_CLK_VPLL_MUX      0U
#define CLK_EDP_200M_SEL                   0x02080026U
#define CLK_EDP_200M_SEL_CLK_CPLL_DIV_125M 0U
/********Name=CLKSEL_CON39,Offset=0x19C********/
#define DCLK0_VOP_SEL              0x020A0027U
#define DCLK0_VOP_SEL_CLK_CPLL_MUX 0U
/********Name=CLKSEL_CON40,Offset=0x1A0********/
#define DCLK1_VOP_SEL              0x020A0028U
#define DCLK1_VOP_SEL_CLK_CPLL_MUX 0U
/********Name=CLKSEL_CON41,Offset=0x1A4********/
#define DCLK2_VOP_SEL              0x020A0029U
#define DCLK2_VOP_SEL_CLK_CPLL_MUX 0U
/********Name=CLKSEL_CON42,Offset=0x1A8********/
#define ACLK_VPU_PRE_SEL              0x0107002AU
#define ACLK_VPU_PRE_SEL_CLK_CPLL_MUX 0U
/********Name=CLKSEL_CON43,Offset=0x1AC********/
#define ACLK_RGA_PRE_SEL                   0x0200002BU
#define ACLK_RGA_PRE_SEL_XIN_OSC0_FUNC_MUX 0U
#define CLK_RGA_CORE_SEL                   0x0202002BU
#define CLK_RGA_CORE_SEL_CLK_CPLL_DIV_100M 0U
#define CLK_IEP_CORE_SEL                   0x0204002BU
#define CLK_IEP_CORE_SEL_CLK_CPLL_DIV_100M 0U
#define DCLK_EBC_SEL                       0x0206002BU
#define DCLK_EBC_SEL_CLK_GPLL_DIV_200M     0U
/********Name=CLKSEL_CON44,Offset=0x1B0********/
#define ACLK_RKVENC_PRE_SEL              0x0206002CU
#define ACLK_RKVENC_PRE_SEL_CLK_NPLL_MUX 0U
/********Name=CLKSEL_CON45,Offset=0x1B4********/
#define CLK_RKVENC_CORE_SEL              0x020E002DU
#define CLK_RKVENC_CORE_SEL_CLK_VPLL_MUX 0U
/********Name=CLKSEL_CON47,Offset=0x1BC********/
#define ACLK_RKVDEC_PRE_SEL              0x0107002FU
#define ACLK_RKVDEC_PRE_SEL_CLK_CPLL_MUX 0U
/********Name=CLKSEL_CON48,Offset=0x1C0********/
#define CLK_RKVDEC_CA_SEL              0x02060030U
#define CLK_RKVDEC_CA_SEL_CLK_VPLL_MUX 0U
/********Name=CLKSEL_CON49,Offset=0x1C4********/
#define CLK_RKVDEC_HEVC_CA_SEL              0x02060031U
#define CLK_RKVDEC_HEVC_CA_SEL_CLK_VPLL_MUX 0U
#define CLK_RKVDEC_CORE_SEL                 0x020E0031U
#define CLK_RKVDEC_CORE_SEL_CLK_VPLL_MUX    0U
/********Name=CLKSEL_CON50,Offset=0x1C8********/
#define ACLK_BUS_SEL                   0x02000032U
#define ACLK_BUS_SEL_XIN_OSC0_FUNC_MUX 0U
#define PCLK_BUS_SEL                   0x02040032U
#define PCLK_BUS_SEL_XIN_OSC0_FUNC_MUX 0U
/********Name=CLKSEL_CON51,Offset=0x1CC********/
#define CLK_TSADC_TSEN_SEL                   0x02040033U
#define CLK_TSADC_TSEN_SEL_CLK_CPLL_DIV_100M 0U
/********Name=CLKSEL_CON52,Offset=0x1D0********/
#define CLK_UART1_SRC_SEL                0x02080034U
#define CLK_UART1_SRC_SEL_USBPHY480M_MUX 0U
#define SCLK_UART1_SEL                   0x020C0034U
#define SCLK_UART1_SEL_XIN_OSC0_FUNC_MUX 0U
/********Name=CLKSEL_CON53,Offset=0x1D4********/
/********Name=CLKSEL_CON54,Offset=0x1D8********/
#define CLK_UART2_SRC_SEL                0x02080036U
#define CLK_UART2_SRC_SEL_USBPHY480M_MUX 0U
#define SCLK_UART2_SEL                   0x020C0036U
#define SCLK_UART2_SEL_XIN_OSC0_FUNC_MUX 0U
/********Name=CLKSEL_CON55,Offset=0x1DC********/
/********Name=CLKSEL_CON56,Offset=0x1E0********/
#define CLK_UART3_SRC_SEL                0x02080038U
#define CLK_UART3_SRC_SEL_USBPHY480M_MUX 0U
#define SCLK_UART3_SEL                   0x020C0038U
#define SCLK_UART3_SEL_XIN_OSC0_FUNC_MUX 0U
/********Name=CLKSEL_CON57,Offset=0x1E4********/
/********Name=CLKSEL_CON58,Offset=0x1E8********/
#define CLK_UART4_SRC_SEL                0x0208003AU
#define CLK_UART4_SRC_SEL_USBPHY480M_MUX 0U
#define SCLK_UART4_SEL                   0x020C003AU
#define SCLK_UART4_SEL_XIN_OSC0_FUNC_MUX 0U
/********Name=CLKSEL_CON59,Offset=0x1EC********/
/********Name=CLKSEL_CON60,Offset=0x1F0********/
#define CLK_UART5_SRC_SEL                0x0208003CU
#define CLK_UART5_SRC_SEL_USBPHY480M_MUX 0U
#define SCLK_UART5_SEL                   0x020C003CU
#define SCLK_UART5_SEL_XIN_OSC0_FUNC_MUX 0U
/********Name=CLKSEL_CON61,Offset=0x1F4********/
/********Name=CLKSEL_CON62,Offset=0x1F8********/
#define CLK_UART6_SRC_SEL                0x0208003EU
#define CLK_UART6_SRC_SEL_USBPHY480M_MUX 0U
#define SCLK_UART6_SEL                   0x020C003EU
#define SCLK_UART6_SEL_XIN_OSC0_FUNC_MUX 0U
/********Name=CLKSEL_CON63,Offset=0x1FC********/
/********Name=CLKSEL_CON64,Offset=0x200********/
#define CLK_UART7_SRC_SEL                0x02080040U
#define CLK_UART7_SRC_SEL_USBPHY480M_MUX 0U
#define SCLK_UART7_SEL                   0x020C0040U
#define SCLK_UART7_SEL_XIN_OSC0_FUNC_MUX 0U
/********Name=CLKSEL_CON65,Offset=0x204********/
/********Name=CLKSEL_CON66,Offset=0x208********/
#define CLK_UART8_SRC_SEL                0x02080042U
#define CLK_UART8_SRC_SEL_USBPHY480M_MUX 0U
#define SCLK_UART8_SEL                   0x020C0042U
#define SCLK_UART8_SEL_XIN_OSC0_FUNC_MUX 0U
/********Name=CLKSEL_CON67,Offset=0x20C********/
/********Name=CLKSEL_CON68,Offset=0x210********/
#define CLK_UART9_SRC_SEL                0x02080044U
#define CLK_UART9_SRC_SEL_USBPHY480M_MUX 0U
#define SCLK_UART9_SEL                   0x020C0044U
#define SCLK_UART9_SEL_XIN_OSC0_FUNC_MUX 0U
/********Name=CLKSEL_CON69,Offset=0x214********/
/********Name=CLKSEL_CON70,Offset=0x218********/
#define CLK_CAN0_SEL              0x01070046U
#define CLK_CAN0_SEL_CLK_CPLL_MUX 0U
#define CLK_CAN1_SEL              0x010F0046U
#define CLK_CAN1_SEL_CLK_CPLL_MUX 0U
/********Name=CLKSEL_CON71,Offset=0x21C********/
#define CLK_CAN2_SEL                  0x01070047U
#define CLK_CAN2_SEL_CLK_CPLL_MUX     0U
#define CLK_I2C_SEL                   0x02080047U
#define CLK_I2C_SEL_CLK_CPLL_DIV_100M 0U
/********Name=CLKSEL_CON72,Offset=0x220********/
#define CLK_SPI0_SEL                   0x02000048U
#define CLK_SPI0_SEL_CLK_CPLL_DIV_100M 0U
#define CLK_SPI1_SEL                   0x02020048U
#define CLK_SPI1_SEL_CLK_CPLL_DIV_100M 0U
#define CLK_SPI2_SEL                   0x02040048U
#define CLK_SPI2_SEL_CLK_CPLL_DIV_100M 0U
#define CLK_SPI3_SEL                   0x02060048U
#define CLK_SPI3_SEL_CLK_CPLL_DIV_100M 0U
#define CLK_PWM1_SEL                   0x02080048U
#define CLK_PWM1_SEL_CLK_CPLL_DIV_100M 0U
#define CLK_PWM2_SEL                   0x020A0048U
#define CLK_PWM2_SEL_CLK_CPLL_DIV_100M 0U
#define CLK_PWM3_SEL                   0x020C0048U
#define CLK_PWM3_SEL_CLK_CPLL_DIV_100M 0U
#define DBCLK_GPIO_SEL                 0x010E0048U
#define DBCLK_GPIO_SEL_CLK_RTC_32K     0U
/********Name=CLKSEL_CON73,Offset=0x224********/
#define ACLK_TOP_HIGH_SEL                   0x02000049U
#define ACLK_TOP_HIGH_SEL_XIN_OSC0_FUNC_MUX 0U
#define ACLK_TOP_LOW_SEL                    0x02040049U
#define ACLK_TOP_LOW_SEL_XIN_OSC0_FUNC_MUX  0U
#define HCLK_TOP_SEL                        0x02080049U
#define HCLK_TOP_SEL_XIN_OSC0_FUNC_MUX      0U
#define PCLK_TOP_SEL                        0x020C0049U
#define PCLK_TOP_SEL_XIN_OSC0_FUNC_MUX      0U
#define CLK_OTPC_ARB_SEL                    0x010F0049U
#define CLK_OTPC_ARB_SEL_CLK_CPLL_DIV_100M  0U
/********Name=CLKSEL_CON74,Offset=0x228********/
#define CLK_TESTOUT_SEL              0x0508004AU
#define CLK_TESTOUT_SEL_USBPHY480M_I 0U
/********Name=CLKSEL_CON75,Offset=0x22C********/
/********Name=CLKSEL_CON76,Offset=0x230********/
/********Name=CLKSEL_CON77,Offset=0x234********/
/********Name=CLKSEL_CON78,Offset=0x238********/
/********Name=CLKSEL_CON79,Offset=0x23C********/
/********Name=CLKSEL_CON80,Offset=0x240********/
/********Name=CLKSEL_CON81,Offset=0x244********/
/********Name=CLKSEL_CON82,Offset=0x248********/
/********Name=CLKSEL_CON83,Offset=0x24C********/
#define CLK_I2S3_2CH_RX_SRC_SEL              0x02080053U
#define CLK_I2S3_2CH_RX_SRC_SEL_CLK_NPLL_MUX 0U
#define MCLK_I2S3_2CH_RX_SEL                 0x020A0053U
#define MCLK_I2S3_2CH_RX_SEL_XIN_OSC0_HALF   0U
#define I2S3_MCLKOUT_RX_SEL                  0x010F0053U
#define I2S3_MCLKOUT_RX_SEL_XIN_OSC0_HALF    0U
/********Name=CLKSEL_CON84,Offset=0x250********/

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __RK3568_H */
