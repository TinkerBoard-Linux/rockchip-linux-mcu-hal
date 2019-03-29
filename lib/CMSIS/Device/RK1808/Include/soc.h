/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2019 Rockchip Electronic Co.,Ltd
 */

#ifndef __SOC_H
#define __SOC_H
#ifdef __cplusplus
  extern "C" {
#endif
/****************************************************************************************/
/*                                                                                      */
/*                               Module Structure Section                               */
/*                                                                                      */
/****************************************************************************************/
/* BUS_GRF Register Structure Define */
struct BUS_GRF_REG {
    __IO uint32_t GPIO1A_IOMUX_L;                     /* Address Offset: 0x0000 */
    __IO uint32_t GPIO1A_IOMUX_H;                     /* Address Offset: 0x0004 */
    __IO uint32_t GPIO1B_IOMUX_L;                     /* Address Offset: 0x0008 */
    __IO uint32_t GPIO1B_IOMUX_H;                     /* Address Offset: 0x000C */
         uint32_t RESERVED0[4];                       /* Address Offset: 0x0010 */
    __IO uint32_t GPIO2A_IOMUX_L;                     /* Address Offset: 0x0020 */
    __IO uint32_t GPIO2A_IOMUX_H;                     /* Address Offset: 0x0024 */
    __IO uint32_t GPIO2B_IOMUX_L;                     /* Address Offset: 0x0028 */
    __IO uint32_t GPIO2B_IOMUX_H;                     /* Address Offset: 0x002C */
    __IO uint32_t GPIO2C_IOMUX_L;                     /* Address Offset: 0x0030 */
    __IO uint32_t GPIO2C_IOMUX_H;                     /* Address Offset: 0x0034 */
    __IO uint32_t GPIO2D_IOMUX_L;                     /* Address Offset: 0x0038 */
         uint32_t RESERVED1;                          /* Address Offset: 0x003C */
    __IO uint32_t GPIO3A_IOMUX_L;                     /* Address Offset: 0x0040 */
    __IO uint32_t GPIO3A_IOMUX_H;                     /* Address Offset: 0x0044 */
    __IO uint32_t GPIO3B_IOMUX_L;                     /* Address Offset: 0x0048 */
    __IO uint32_t GPIO3B_IOMUX_H;                     /* Address Offset: 0x004C */
    __IO uint32_t GPIO3C_IOMUX_L;                     /* Address Offset: 0x0050 */
    __IO uint32_t GPIO3C_IOMUX_H;                     /* Address Offset: 0x0054 */
    __IO uint32_t GPIO3D_IOMUX_L;                     /* Address Offset: 0x0058 */
         uint32_t RESERVED2;                          /* Address Offset: 0x005C */
    __IO uint32_t GPIO4A_IOMUX_L;                     /* Address Offset: 0x0060 */
    __IO uint32_t GPIO4A_IOMUX_H;                     /* Address Offset: 0x0064 */
    __IO uint32_t GPIO4B_IOMUX_L;                     /* Address Offset: 0x0068 */
    __IO uint32_t GPIO4B_IOMUX_H;                     /* Address Offset: 0x006C */
    __IO uint32_t GPIO4C_IOMUX_L;                     /* Address Offset: 0x0070 */
    __IO uint32_t GPIO4C_IOMUX_H;                     /* Address Offset: 0x0074 */
         uint32_t RESERVED3[2];                       /* Address Offset: 0x0078 */
    __IO uint32_t GPIO1A_P;                           /* Address Offset: 0x0080 */
    __IO uint32_t GPIO1B_P;                           /* Address Offset: 0x0084 */
         uint32_t RESERVED4[2];                       /* Address Offset: 0x0088 */
    __IO uint32_t GPIO2A_P;                           /* Address Offset: 0x0090 */
    __IO uint32_t GPIO2B_P;                           /* Address Offset: 0x0094 */
    __IO uint32_t GPIO2C_P;                           /* Address Offset: 0x0098 */
    __IO uint32_t GPIO2D_P;                           /* Address Offset: 0x009C */
    __IO uint32_t GPIO3A_P;                           /* Address Offset: 0x00A0 */
    __IO uint32_t GPIO3B_P;                           /* Address Offset: 0x00A4 */
    __IO uint32_t GPIO3C_P;                           /* Address Offset: 0x00A8 */
    __IO uint32_t GPIO3D_P;                           /* Address Offset: 0x00AC */
    __IO uint32_t GPIO4A_P;                           /* Address Offset: 0x00B0 */
    __IO uint32_t GPIO4B_P;                           /* Address Offset: 0x00B4 */
    __IO uint32_t GPIO4C_P;                           /* Address Offset: 0x00B8 */
         uint32_t RESERVED5;                          /* Address Offset: 0x00BC */
    __IO uint32_t GPIO1A_SR;                          /* Address Offset: 0x00C0 */
    __IO uint32_t GPIO1B_SR;                          /* Address Offset: 0x00C4 */
         uint32_t RESERVED6[2];                       /* Address Offset: 0x00C8 */
    __IO uint32_t GPIO2A_SR;                          /* Address Offset: 0x00D0 */
    __IO uint32_t GPIO2B_SR;                          /* Address Offset: 0x00D4 */
    __IO uint32_t GPIO2C_SR;                          /* Address Offset: 0x00D8 */
    __IO uint32_t GPIO2D_SR;                          /* Address Offset: 0x00DC */
    __IO uint32_t GPIO3A_SR;                          /* Address Offset: 0x00E0 */
    __IO uint32_t GPIO3B_SR;                          /* Address Offset: 0x00E4 */
    __IO uint32_t GPIO3C_SR;                          /* Address Offset: 0x00E8 */
    __IO uint32_t GPIO3D_SR;                          /* Address Offset: 0x00EC */
    __IO uint32_t GPIO4A_SR;                          /* Address Offset: 0x00F0 */
    __IO uint32_t GPIO4B_SR;                          /* Address Offset: 0x00F4 */
    __IO uint32_t GPIO4C_SR;                          /* Address Offset: 0x00F8 */
         uint32_t RESERVED7;                          /* Address Offset: 0x00FC */
    __IO uint32_t GPIO1A_SMT;                         /* Address Offset: 0x0100 */
    __IO uint32_t GPIO1B_SMT;                         /* Address Offset: 0x0104 */
    __IO uint32_t GPIO1C_SMT;                         /* Address Offset: 0x0108 */
    __IO uint32_t GPIO1D_SMT;                         /* Address Offset: 0x010C */
    __IO uint32_t GPIO2A_SMT;                         /* Address Offset: 0x0110 */
    __IO uint32_t GPIO2B_SMT;                         /* Address Offset: 0x0114 */
    __IO uint32_t GPIO2C_SMT;                         /* Address Offset: 0x0118 */
    __IO uint32_t GPIO2D_SMT;                         /* Address Offset: 0x011C */
    __IO uint32_t GPIO3A_SMT;                         /* Address Offset: 0x0120 */
    __IO uint32_t GPIO3B_SMT;                         /* Address Offset: 0x0124 */
    __IO uint32_t GPIO3C_SMT;                         /* Address Offset: 0x0128 */
    __IO uint32_t GPIO3D_SMT;                         /* Address Offset: 0x012C */
    __IO uint32_t GPIO4A_SMT;                         /* Address Offset: 0x0130 */
    __IO uint32_t GPIO4B_SMT;                         /* Address Offset: 0x0134 */
    __IO uint32_t GPIO4C_SMT;                         /* Address Offset: 0x0138 */
         uint32_t RESERVED8;                          /* Address Offset: 0x013C */
    __IO uint32_t GPIO1A_E;                           /* Address Offset: 0x0140 */
    __IO uint32_t GPIO1B_E;                           /* Address Offset: 0x0144 */
         uint32_t RESERVED9[2];                       /* Address Offset: 0x0148 */
    __IO uint32_t GPIO2A_E;                           /* Address Offset: 0x0150 */
    __IO uint32_t GPIO2B_E;                           /* Address Offset: 0x0154 */
    __IO uint32_t GPIO2C_E;                           /* Address Offset: 0x0158 */
    __IO uint32_t GPIO2D_E;                           /* Address Offset: 0x015C */
    __IO uint32_t GPIO3A_E;                           /* Address Offset: 0x0160 */
    __IO uint32_t GPIO3B_E;                           /* Address Offset: 0x0164 */
    __IO uint32_t GPIO3C_E;                           /* Address Offset: 0x0168 */
    __IO uint32_t GPIO3D_E;                           /* Address Offset: 0x016C */
    __IO uint32_t GPIO4A_E;                           /* Address Offset: 0x0170 */
    __IO uint32_t GPIO4B_E;                           /* Address Offset: 0x0174 */
    __IO uint32_t GPIO4C_E;                           /* Address Offset: 0x0178 */
         uint32_t RESERVED10[5];                      /* Address Offset: 0x017C */
    __IO uint32_t IOFUNC_CON0;                        /* Address Offset: 0x0190 */
         uint32_t RESERVED11[155];                    /* Address Offset: 0x0194 */
    __IO uint32_t SOC_CON[6];                         /* Address Offset: 0x0400 */
         uint32_t RESERVED12[6];                      /* Address Offset: 0x0418 */
    __IO uint32_t VI_CON[2];                          /* Address Offset: 0x0430 */
    __IO uint32_t VI_STATUS;                          /* Address Offset: 0x0438 */
         uint32_t RESERVED13;                         /* Address Offset: 0x043C */
    __IO uint32_t VO_CON[2];                          /* Address Offset: 0x0440 */
         uint32_t RESERVED14[14];                     /* Address Offset: 0x0448 */
    __IO uint32_t SOC_STATUS0;                        /* Address Offset: 0x0480 */
         uint32_t RESERVED15[31];                     /* Address Offset: 0x0484 */
    __IO uint32_t CPU_CON[3];                         /* Address Offset: 0x0500 */
         uint32_t RESERVED16[5];                      /* Address Offset: 0x050C */
    __IO uint32_t CPU_STATUS[2];                      /* Address Offset: 0x0520 */
         uint32_t RESERVED17[2];                      /* Address Offset: 0x0528 */
    __IO uint32_t SOC_NOC_CON[3];                     /* Address Offset: 0x0530 */
         uint32_t RESERVED18[49];                     /* Address Offset: 0x053C */
    __IO uint32_t RAM_CON[5];                         /* Address Offset: 0x0600 */
         uint32_t RESERVED19[91];                     /* Address Offset: 0x0614 */
    __IO uint32_t NPUPVTM_CON[2];                     /* Address Offset: 0x0780 */
    __IO uint32_t NPUPVTM_STATUS[2];                  /* Address Offset: 0x0788 */
         uint32_t RESERVED20[28];                     /* Address Offset: 0x0790 */
    __I  uint32_t CHIP_ID;                            /* Address Offset: 0x0800 */
         uint32_t RESERVED21[63];                     /* Address Offset: 0x0804 */
    __IO uint32_t MAC_CON[2];                         /* Address Offset: 0x0900 */
};
/* USB2PHY_GRF Register Structure Define */
struct USB2PHY_GRF_REG {
    __IO uint32_t REG[24];                            /* Address Offset: 0x0000 */
         uint32_t RESERVED0[40];                      /* Address Offset: 0x0060 */
    __IO uint32_t CON[4];                             /* Address Offset: 0x0100 */
    __IO uint32_t INT_MASK;                           /* Address Offset: 0x0110 */
    __IO uint32_t INT_STATUS;                         /* Address Offset: 0x0114 */
    __IO uint32_t INT_STATUS_CLR;                     /* Address Offset: 0x0118 */
         uint32_t RESERVED1;                          /* Address Offset: 0x011C */
    __IO uint32_t STATUS;                             /* Address Offset: 0x0120 */
         uint32_t RESERVED2[3];                       /* Address Offset: 0x0124 */
    __IO uint32_t LS_CON;                             /* Address Offset: 0x0130 */
    __IO uint32_t DIS_CON;                            /* Address Offset: 0x0134 */
    __IO uint32_t BVALID_CON;                         /* Address Offset: 0x0138 */
    __IO uint32_t ID_CON;                             /* Address Offset: 0x013C */
    __IO uint32_t CON4;                               /* Address Offset: 0x0140 */
};
/* USB3PHY_GRF Register Structure Define */
struct USB3PHY_GRF_REG {
    __IO uint32_t PIPE_CON[5];                        /* Address Offset: 0x0000 */
         uint32_t RESERVED0[7];                       /* Address Offset: 0x0014 */
    __IO uint32_t PIPE_STATUS[2];                     /* Address Offset: 0x0030 */
};
/* PMU_GRF Register Structure Define */
struct PMU_GRF_REG {
    __IO uint32_t GPIO0A_IOMUX;                       /* Address Offset: 0x0000 */
    __IO uint32_t GPIO0B_IOMUX;                       /* Address Offset: 0x0004 */
    __IO uint32_t GPIO0C_IOMUX;                       /* Address Offset: 0x0008 */
         uint32_t RESERVED0;                          /* Address Offset: 0x000C */
    __IO uint32_t GPIO0A_P;                           /* Address Offset: 0x0010 */
    __IO uint32_t GPIO0B_P;                           /* Address Offset: 0x0014 */
    __IO uint32_t GPIO0C_P;                           /* Address Offset: 0x0018 */
         uint32_t RESERVED1;                          /* Address Offset: 0x001C */
    __IO uint32_t GPIO0A_E;                           /* Address Offset: 0x0020 */
    __IO uint32_t GPIO0B_E;                           /* Address Offset: 0x0024 */
    __IO uint32_t GPIO0C_E;                           /* Address Offset: 0x0028 */
         uint32_t RESERVED2;                          /* Address Offset: 0x002C */
    __IO uint32_t GPIO0A_SR;                          /* Address Offset: 0x0030 */
    __IO uint32_t GPIO0B_SR;                          /* Address Offset: 0x0034 */
    __IO uint32_t GPIO0C_SR;                          /* Address Offset: 0x0038 */
         uint32_t RESERVED3;                          /* Address Offset: 0x003C */
    __IO uint32_t GPIO0A_SMT;                         /* Address Offset: 0x0040 */
    __IO uint32_t GPIO0B_SMT;                         /* Address Offset: 0x0044 */
    __IO uint32_t GPIO0C_SMT;                         /* Address Offset: 0x0048 */
         uint32_t RESERVED4[45];                      /* Address Offset: 0x004C */
    __IO uint32_t SOC_CON[5];                         /* Address Offset: 0x0100 */
         uint32_t RESERVED5[3];                       /* Address Offset: 0x0114 */
    __IO uint32_t SOC_STATUS;                         /* Address Offset: 0x0120 */
         uint32_t RESERVED6[7];                       /* Address Offset: 0x0124 */
    __IO uint32_t IO_VSEL[2];                         /* Address Offset: 0x0140 */
    __IO uint32_t IO_VSEL_STATUS;                     /* Address Offset: 0x0148 */
         uint32_t RESERVED7[13];                      /* Address Offset: 0x014C */
    __IO uint32_t PVTM_CON[2];                        /* Address Offset: 0x0180 */
         uint32_t RESERVED8[2];                       /* Address Offset: 0x0188 */
    __IO uint32_t PVTM_STATUS[2];                     /* Address Offset: 0x0190 */
         uint32_t RESERVED9[26];                      /* Address Offset: 0x0198 */
    __IO uint32_t OS_REG[12];                         /* Address Offset: 0x0200 */
    __IO uint32_t RESET_FUNCTION_STATUS;              /* Address Offset: 0x0230 */
    __IO uint32_t RESET_FUNCTION_CLR;                 /* Address Offset: 0x0234 */
         uint32_t RESERVED10[82];                     /* Address Offset: 0x0238 */
    __IO uint32_t SIG_DETECT_CON;                     /* Address Offset: 0x0380 */
         uint32_t RESERVED11[3];                      /* Address Offset: 0x0384 */
    __IO uint32_t SIG_DETECT_STATUS;                  /* Address Offset: 0x0390 */
         uint32_t RESERVED12[3];                      /* Address Offset: 0x0394 */
    __O  uint32_t SIG_DETECT_STATUS_CLEAR;            /* Address Offset: 0x03A0 */
         uint32_t RESERVED13[3];                      /* Address Offset: 0x03A4 */
    __IO uint32_t SDMMC_DET_COUNTER;                  /* Address Offset: 0x03B0 */
};
/* DDR_GRF Register Structure Define */
struct DDR_GRF_REG {
    __IO uint32_t CON[2];                             /* Address Offset: 0x0000 */
    __IO uint32_t SPLIT_CON;                          /* Address Offset: 0x0008 */
         uint32_t RESERVED0[5];                       /* Address Offset: 0x000C */
    __IO uint32_t LP_CON;                             /* Address Offset: 0x0020 */
         uint32_t RESERVED1[55];                      /* Address Offset: 0x0024 */
    __IO uint32_t STATUS[10];                         /* Address Offset: 0x0100 */
};
/* USB_GRF Register Structure Define */
struct USB_GRF_REG {
    __IO uint32_t PCIE_CON0;                          /* Address Offset: 0x0000 */
         uint32_t RESERVED0[3];                       /* Address Offset: 0x0004 */
    __I  uint32_t PCIE_STATUS0;                       /* Address Offset: 0x0010 */
         uint32_t RESERVED1[263];                     /* Address Offset: 0x0014 */
    __IO uint32_t USB3OTG_CON[2];                     /* Address Offset: 0x0430 */
         uint32_t RESERVED2[6];                       /* Address Offset: 0x0438 */
    __IO uint32_t USB3OTG_STATUS[3];                  /* Address Offset: 0x0450 */
         uint32_t RESERVED3[169];                     /* Address Offset: 0x045C */
    __IO uint32_t HOST0_CON[2];                       /* Address Offset: 0x0700 */
         uint32_t RESERVED4[98];                      /* Address Offset: 0x0708 */
    __IO uint32_t HOST0_STATUS;                       /* Address Offset: 0x0890 */
};
/* GRF Register Structure Define */
struct GRF_REG {
    __IO uint32_t CPU_PEFF_CON[9];                    /* Address Offset: 0x0000 */
    __IO uint32_t GIC_BASE_CON;                       /* Address Offset: 0x0024 */
         uint32_t RESERVED0[2];                       /* Address Offset: 0x0028 */
    __IO uint32_t CPU_PERF_RD_MAX_LATENCY_NUM;        /* Address Offset: 0x0030 */
    __I  uint32_t CPU_PERF_RD_LATENCY_SAMP_NUM;       /* Address Offset: 0x0034 */
    __I  uint32_t CPU_PERF_RD_LATENCY_ACC_NUM;        /* Address Offset: 0x0038 */
    __I  uint32_t CPU_PERF_RD_AXI_TOTAL_BYTE;         /* Address Offset: 0x003C */
    __I  uint32_t CPU_PERF_WR_AXI_TOTAL_BYTE;         /* Address Offset: 0x0040 */
    __I  uint32_t CPU_PERF_WORKING_CNT;               /* Address Offset: 0x0044 */
    __I  uint32_t CPU_PERF_INT_STATUS;                /* Address Offset: 0x0048 */
         uint32_t RESERVED1[13];                      /* Address Offset: 0x004C */
    __IO uint32_t COREPVTM_CON[2];                    /* Address Offset: 0x0080 */
    __IO uint32_t COREPVTM_STATUS[2];                 /* Address Offset: 0x0088 */
};
/* SGRF Register Structure Define */
struct SGRF_REG {
         uint32_t RESERVED0[2];                       /* Address Offset: 0x0000 */
    __IO uint32_t SOC_CON[7];                         /* Address Offset: 0x0008 */
         uint32_t RESERVED1[23];                      /* Address Offset: 0x0024 */
    __IO uint32_t DMAC_CON[10];                       /* Address Offset: 0x0080 */
         uint32_t RESERVED2[6];                       /* Address Offset: 0x00A8 */
    __IO uint32_t DDR_BANKHASH_CTRL;                  /* Address Offset: 0x00C0 */
    __IO uint32_t DDR_BANK_MASK[3];                   /* Address Offset: 0x00C4 */
};
/* PMU_SGRF Register Structure Define */
struct PMU_SGRF_REG {
    __IO uint32_t SOC_CON[2];                         /* Address Offset: 0x0000 */
         uint32_t RESERVED0[94];                      /* Address Offset: 0x0008 */
    __IO uint32_t FAST_BOOT_ADDR;                     /* Address Offset: 0x0180 */
};
/* MSCH Register Structure Define */
struct MSCH_REG {
    __I  uint32_t ID_COREID;                          /* Address Offset: 0x0000 */
    __I  uint32_t ID_REVISIONID;                      /* Address Offset: 0x0004 */
    __IO uint32_t DEVICECONF;                         /* Address Offset: 0x0008 */
    __IO uint32_t DEVICESIZE;                         /* Address Offset: 0x000C */
    __IO uint32_t DDRTIMINGA0;                        /* Address Offset: 0x0010 */
    __IO uint32_t DDRTIMINGB0;                        /* Address Offset: 0x0014 */
    __IO uint32_t DDRTIMINGC0;                        /* Address Offset: 0x0018 */
    __IO uint32_t DEVTODEV0;                          /* Address Offset: 0x001C */
         uint32_t RESERVED0[60];                      /* Address Offset: 0x0020 */
    __IO uint32_t DDRMODE;                            /* Address Offset: 0x0110 */
    __IO uint32_t DDR4TIMING;                         /* Address Offset: 0x0114 */
         uint32_t RESERVED1[954];                     /* Address Offset: 0x0118 */
    __IO uint32_t AGINGX0;                            /* Address Offset: 0x1000 */
         uint32_t RESERVED2[15];                      /* Address Offset: 0x1004 */
    __IO uint32_t AGING[3];                           /* Address Offset: 0x1040 */
};
/* CRU Register Structure Define */
struct CRU_REG {
    __IO uint32_t APLL_CON[5];                        /* Address Offset: 0x0000 */
         uint32_t RESERVED0[3];                       /* Address Offset: 0x0014 */
    __IO uint32_t DPLL_CON[5];                        /* Address Offset: 0x0020 */
         uint32_t RESERVED1[3];                       /* Address Offset: 0x0034 */
    __IO uint32_t CPLL_CON[5];                        /* Address Offset: 0x0040 */
         uint32_t RESERVED2[3];                       /* Address Offset: 0x0054 */
    __IO uint32_t GPLL_CON[5];                        /* Address Offset: 0x0060 */
         uint32_t RESERVED3[3];                       /* Address Offset: 0x0074 */
    __IO uint32_t NPLL_CON[5];                        /* Address Offset: 0x0080 */
         uint32_t RESERVED4[3];                       /* Address Offset: 0x0094 */
    __IO uint32_t MODE;                               /* Address Offset: 0x00A0 */
    __IO uint32_t MISC;                               /* Address Offset: 0x00A4 */
    __IO uint32_t MISC1;                              /* Address Offset: 0x00A8 */
         uint32_t RESERVED5;                          /* Address Offset: 0x00AC */
    __IO uint32_t GLB_CNT_TH;                         /* Address Offset: 0x00B0 */
    __IO uint32_t GLB_RST_ST;                         /* Address Offset: 0x00B4 */
    __IO uint32_t GLB_SRST_FST;                       /* Address Offset: 0x00B8 */
    __IO uint32_t GLB_SRST_SND;                       /* Address Offset: 0x00BC */
    __IO uint32_t GLB_RST_CON;                        /* Address Offset: 0x00C0 */
         uint32_t RESERVED6[7];                       /* Address Offset: 0x00C4 */
    __IO uint32_t HWFFC_CON0;                         /* Address Offset: 0x00E0 */
         uint32_t RESERVED7;                          /* Address Offset: 0x00E4 */
    __IO uint32_t HWFFC_TH;                           /* Address Offset: 0x00E8 */
    __IO uint32_t HWFFC_INTST;                        /* Address Offset: 0x00EC */
    __I  uint32_t APLL_CON0_S;                        /* Address Offset: 0x00F0 */
    __I  uint32_t APLL_CON1_S;                        /* Address Offset: 0x00F4 */
    __I  uint32_t CLKSEL_CON0_S;                      /* Address Offset: 0x00F8 */
         uint32_t RESERVED8;                          /* Address Offset: 0x00FC */
    __IO uint32_t CLKSEL_CON[73];                     /* Address Offset: 0x0100 */
         uint32_t RESERVED9[3];                       /* Address Offset: 0x0224 */
    __IO uint32_t CLKGATE_CON[20];                    /* Address Offset: 0x0230 */
    __O  uint32_t SSGTBL0_3;                          /* Address Offset: 0x0280 */
    __O  uint32_t SSGTBL4_7;                          /* Address Offset: 0x0284 */
    __O  uint32_t SSGTBL8_11;                         /* Address Offset: 0x0288 */
    __O  uint32_t SSGTBL12_15;                        /* Address Offset: 0x028C */
    __O  uint32_t SSGTBL16_19;                        /* Address Offset: 0x0290 */
    __O  uint32_t SSGTBL20_23;                        /* Address Offset: 0x0294 */
    __O  uint32_t SSGTBL24_27;                        /* Address Offset: 0x0298 */
    __O  uint32_t SSGTBL28_31;                        /* Address Offset: 0x029C */
    __O  uint32_t SSGTBL32_35;                        /* Address Offset: 0x02A0 */
    __O  uint32_t SSGTBL36_39;                        /* Address Offset: 0x02A4 */
    __O  uint32_t SSGTBL40_43;                        /* Address Offset: 0x02A8 */
    __O  uint32_t SSGTBL44_47;                        /* Address Offset: 0x02AC */
    __O  uint32_t SSGTBL48_51;                        /* Address Offset: 0x02B0 */
    __O  uint32_t SSGTBL52_55;                        /* Address Offset: 0x02B4 */
    __O  uint32_t SSGTBL56_59;                        /* Address Offset: 0x02B8 */
    __O  uint32_t SSGTBL60_63;                        /* Address Offset: 0x02BC */
    __O  uint32_t SSGTBL64_67;                        /* Address Offset: 0x02C0 */
    __O  uint32_t SSGTBL68_71;                        /* Address Offset: 0x02C4 */
    __O  uint32_t SSGTBL72_75;                        /* Address Offset: 0x02C8 */
    __O  uint32_t SSGTBL76_79;                        /* Address Offset: 0x02CC */
    __O  uint32_t SSGTBL80_83;                        /* Address Offset: 0x02D0 */
    __O  uint32_t SSGTBL84_87;                        /* Address Offset: 0x02D4 */
    __O  uint32_t SSGTBL88_91;                        /* Address Offset: 0x02D8 */
    __O  uint32_t SSGTBL92_95;                        /* Address Offset: 0x02DC */
    __O  uint32_t SSGTBL96_99;                        /* Address Offset: 0x02E0 */
    __O  uint32_t SSGTBL100_103;                      /* Address Offset: 0x02E4 */
    __O  uint32_t SSGTBL104_107;                      /* Address Offset: 0x02E8 */
    __O  uint32_t SSGTBL108_111;                      /* Address Offset: 0x02EC */
    __O  uint32_t SSGTBL112_115;                      /* Address Offset: 0x02F0 */
    __O  uint32_t SSGTBL116_119;                      /* Address Offset: 0x02F4 */
    __O  uint32_t SSGTBL120_123;                      /* Address Offset: 0x02F8 */
    __O  uint32_t SSGTBL124_127;                      /* Address Offset: 0x02FC */
    __IO uint32_t SOFTRST_CON[16];                    /* Address Offset: 0x0300 */
         uint32_t RESERVED10[16];                     /* Address Offset: 0x0340 */
    __IO uint32_t SDMMC_CON[2];                       /* Address Offset: 0x0380 */
    __IO uint32_t SDIO_CON[2];                        /* Address Offset: 0x0388 */
    __IO uint32_t EMMC_CON[2];                        /* Address Offset: 0x0390 */
         uint32_t RESERVED11[26];                     /* Address Offset: 0x0398 */
    __IO uint32_t AUTOCS_CON[10];                     /* Address Offset: 0x0400 */
         uint32_t RESERVED12[3830];                   /* Address Offset: 0x0428 */
    __IO uint32_t PMUPLL_CON[5];                      /* Address Offset: 0x4000 */
         uint32_t RESERVED13[3];                      /* Address Offset: 0x4014 */
    __IO uint32_t PMU_MODE;                           /* Address Offset: 0x4020 */
         uint32_t RESERVED14[7];                      /* Address Offset: 0x4024 */
    __IO uint32_t PMU_CLKSEL_CON[8];                  /* Address Offset: 0x4040 */
         uint32_t RESERVED15[8];                      /* Address Offset: 0x4060 */
    __IO uint32_t PMU_CLKGATE_CON[2];                 /* Address Offset: 0x4080 */
         uint32_t RESERVED16[14];                     /* Address Offset: 0x4088 */
    __IO uint32_t PMU_AUTOCS_CON[2];                  /* Address Offset: 0x40C0 */
};
/* EFUSE_NS Register Structure Define */
struct EFUSE_NS_REG {
    __IO uint32_t MOD;                                /* Address Offset: 0x0000 */
    __IO uint32_t RD_MASK;                            /* Address Offset: 0x0004 */
    __IO uint32_t PG_MASK;                            /* Address Offset: 0x0008 */
         uint32_t RESERVED0[2];                       /* Address Offset: 0x000C */
    __IO uint32_t INT_CON;                            /* Address Offset: 0x0014 */
    __O  uint32_t INT_STATUS;                         /* Address Offset: 0x0018 */
    __IO uint32_t USER_CTRL;                          /* Address Offset: 0x001C */
    __I  uint32_t DOUT;                               /* Address Offset: 0x0020 */
    __IO uint32_t AUTO_CTRL;                          /* Address Offset: 0x0024 */
    __IO uint32_t T_CSB_P;                            /* Address Offset: 0x0028 */
    __IO uint32_t T_PGENB_P;                          /* Address Offset: 0x002C */
    __IO uint32_t T_LOAD_P;                           /* Address Offset: 0x0030 */
    __IO uint32_t T_ADDR_P;                           /* Address Offset: 0x0034 */
    __IO uint32_t T_STROBE_P;                         /* Address Offset: 0x0038 */
    __IO uint32_t T_CSB_R;                            /* Address Offset: 0x003C */
    __IO uint32_t T_PGENB_R;                          /* Address Offset: 0x0040 */
    __IO uint32_t T_LOAD_R;                           /* Address Offset: 0x0044 */
    __IO uint32_t T_ADDR_R;                           /* Address Offset: 0x0048 */
    __IO uint32_t T_STROBE_R;                         /* Address Offset: 0x004C */
    __IO uint32_t REVISION;                           /* Address Offset: 0x0050 */
};
/* EFUSE_S Register Structure Define */
struct EFUSE_S_REG {
    __IO uint32_t MOD;                                /* Address Offset: 0x0000 */
    __IO uint32_t RD_MASK;                            /* Address Offset: 0x0004 */
    __IO uint32_t PG_MASK;                            /* Address Offset: 0x0008 */
         uint32_t RESERVED0[2];                       /* Address Offset: 0x000C */
    __IO uint32_t INT_CON;                            /* Address Offset: 0x0014 */
    __O  uint32_t INT_STATUS;                         /* Address Offset: 0x0018 */
    __IO uint32_t USER_CTRL;                          /* Address Offset: 0x001C */
    __I  uint32_t DOUT;                               /* Address Offset: 0x0020 */
    __IO uint32_t AUTO_CTRL;                          /* Address Offset: 0x0024 */
    __IO uint32_t T_CSB_P;                            /* Address Offset: 0x0028 */
    __IO uint32_t T_PGENB_P;                          /* Address Offset: 0x002C */
    __IO uint32_t T_LOAD_P;                           /* Address Offset: 0x0030 */
    __IO uint32_t T_ADDR_P;                           /* Address Offset: 0x0034 */
    __IO uint32_t T_STROBE_P;                         /* Address Offset: 0x0038 */
    __IO uint32_t T_CSB_R;                            /* Address Offset: 0x003C */
    __IO uint32_t T_PGENB_R;                          /* Address Offset: 0x0040 */
    __IO uint32_t T_LOAD_R;                           /* Address Offset: 0x0044 */
    __IO uint32_t T_ADDR_R;                           /* Address Offset: 0x0048 */
    __IO uint32_t T_STROBE_R;                         /* Address Offset: 0x004C */
    __IO uint32_t REVISION;                           /* Address Offset: 0x0050 */
};
/* DCF Register Structure Define */
struct DCF_REG {
    __IO uint32_t DCF_CTRL;                           /* Address Offset: 0x0000 */
    __IO uint32_t DCF_STATUS;                         /* Address Offset: 0x0004 */
    __IO uint32_t DCF_ADDR;                           /* Address Offset: 0x0008 */
    __O  uint32_t DCF_ISR;                            /* Address Offset: 0x000C */
         uint32_t RESERVED0;                          /* Address Offset: 0x0010 */
    __IO uint32_t DCF_TIMEOUT_CYC;                    /* Address Offset: 0x0014 */
         uint32_t RESERVED1[2];                       /* Address Offset: 0x0018 */
    __IO uint32_t DCF_CURR_R[2];                      /* Address Offset: 0x0020 */
    __I  uint32_t DCF_CMD_COUNTER;                    /* Address Offset: 0x0028 */
         uint32_t RESERVED2;                          /* Address Offset: 0x002C */
    __IO uint32_t DCF_LAST_ADDR[4];                   /* Address Offset: 0x0030 */
};
/* VAD Register Structure Define */
struct VAD_REG {
    __IO uint32_t CONTROL;                            /* Address Offset: 0x0000 */
    __IO uint32_t VS_ADDR;                            /* Address Offset: 0x0004 */
    __IO uint32_t ACODEC_BASE_ADDR;                   /* Address Offset: 0x0008 */
    __IO uint32_t OD_ADDR[8];                         /* Address Offset: 0x000C */
    __IO uint32_t D_DATA[8];                          /* Address Offset: 0x002C */
    __IO uint32_t TIMEOUT;                            /* Address Offset: 0x004C */
    __IO uint32_t RAM_START_ADDR;                     /* Address Offset: 0x0050 */
    __IO uint32_t RAM_END_ADDR;                       /* Address Offset: 0x0054 */
    __IO uint32_t RAM_CUR_ADDR;                       /* Address Offset: 0x0058 */
    __IO uint32_t DET_CON[6];                         /* Address Offset: 0x005C */
    __IO uint32_t INT;                                /* Address Offset: 0x0074 */
    __IO uint32_t AUX_CONTROL;                        /* Address Offset: 0x0078 */
    __I  uint32_t SAMPLE_CNT;                         /* Address Offset: 0x007C */
         uint32_t RESERVED0[32];                      /* Address Offset: 0x0080 */
    __IO uint32_t NOISE_DATA;                         /* Address Offset: 0x0100 */
};
/* DFICTRL Register Structure Define */
struct DFICTRL_REG {
    __IO uint32_t START;                              /* Address Offset: 0x0000 */
    __IO uint32_t ADDR;                               /* Address Offset: 0x0004 */
    __IO uint32_t CMD;                                /* Address Offset: 0x0008 */
         uint32_t RESERVED0[5];                       /* Address Offset: 0x000C */
    __IO uint32_t STAT;                               /* Address Offset: 0x0020 */
         uint32_t RESERVED1[7];                       /* Address Offset: 0x0024 */
    __IO uint32_t DAT[8];                             /* Address Offset: 0x0040 */
    __IO uint32_t TIM0;                               /* Address Offset: 0x0060 */
};
/* RGA Register Structure Define */
struct RGA_REG {
    __IO uint32_t SYS_CTRL;                           /* Address Offset: 0x0000 */
    __IO uint32_t CMD_CTRL;                           /* Address Offset: 0x0004 */
    __IO uint32_t CMD_BASE;                           /* Address Offset: 0x0008 */
    __I  uint32_t STATUS1;                            /* Address Offset: 0x000C */
    __IO uint32_t INT;                                /* Address Offset: 0x0010 */
    __IO uint32_t MMU_CTRL0;                          /* Address Offset: 0x0014 */
    __IO uint32_t MMU_CMD_BASE;                       /* Address Offset: 0x0018 */
    __I  uint32_t STATUS2;                            /* Address Offset: 0x001C */
    __IO uint32_t WORK_CNT;                           /* Address Offset: 0x0020 */
         uint32_t RESERVED0;                          /* Address Offset: 0x0024 */
    __IO uint32_t VERSION_INFO;                       /* Address Offset: 0x0028 */
         uint32_t RESERVED1[5];                       /* Address Offset: 0x002C */
    __IO uint32_t PERF_LATENCY_CTRL[2];               /* Address Offset: 0x0040 */
    __I  uint32_t PERF_RD_MAX_LATENCY_NUM0;           /* Address Offset: 0x0048 */
    __I  uint32_t PERF_RD_LATENCY_SAMP_NUM;           /* Address Offset: 0x004C */
    __I  uint32_t PERF_RD_LATENCY_ACC_SUM;            /* Address Offset: 0x0050 */
    __IO uint32_t PERF_RD_AXI_TOTAL_BYTE;             /* Address Offset: 0x0054 */
    __IO uint32_t PERF_WR_AXI_TOTAL_BYTE;             /* Address Offset: 0x0058 */
    __IO uint32_t PERF_WORKING_CNT;                   /* Address Offset: 0x005C */
         uint32_t RESERVED2[40];                      /* Address Offset: 0x0060 */
    __IO uint32_t MODE_CTRL;                          /* Address Offset: 0x0100 */
    __IO uint32_t SRC_INFO;                           /* Address Offset: 0x0104 */
    __IO uint32_t SRC_BASE[4];                        /* Address Offset: 0x0108 */
    __IO uint32_t SRC_VIR_INFO;                       /* Address Offset: 0x0118 */
    __IO uint32_t SRC_ACT_INFO;                       /* Address Offset: 0x011C */
    __IO uint32_t SRC_X_FACTOR;                       /* Address Offset: 0x0120 */
    __IO uint32_t SRC_Y_FACTOR;                       /* Address Offset: 0x0124 */
    __IO uint32_t SRC_BG_COLOR;                       /* Address Offset: 0x0128 */
    __IO uint32_t SRC_FG_COLOR;                       /* Address Offset: 0x012C */
    __IO uint32_t SRC_TR_COLOR0;                      /* Address Offset: 0x0130 */
    __IO uint32_t CP_GR_A;                            /* Address Offset: 0x0130 */
    __IO uint32_t SRC_TR_COLOR1;                      /* Address Offset: 0x0134 */
    __IO uint32_t CP_GR_B;                            /* Address Offset: 0x0134 */
    __IO uint32_t DST_INFO;                           /* Address Offset: 0x0138 */
    __IO uint32_t DST_BASE[3];                        /* Address Offset: 0x013C */
    __IO uint32_t DST_VIR_INFO;                       /* Address Offset: 0x0148 */
    __IO uint32_t DST_ACT_INFO;                       /* Address Offset: 0x014C */
    __IO uint32_t ALPHA_CTRL[2];                      /* Address Offset: 0x0150 */
    __IO uint32_t FADING_CTRL;                        /* Address Offset: 0x0158 */
    __IO uint32_t PAT_CON;                            /* Address Offset: 0x015C */
    __IO uint32_t ROP_CON0;                           /* Address Offset: 0x0160 */
    __IO uint32_t CP_GR_G;                            /* Address Offset: 0x0160 */
    __IO uint32_t ROP_CON1;                           /* Address Offset: 0x0164 */
    __IO uint32_t CP_GR_R;                            /* Address Offset: 0x0164 */
    __IO uint32_t MASK_BASE;                          /* Address Offset: 0x0168 */
    __IO uint32_t MMU_CTRL1;                          /* Address Offset: 0x016C */
    __IO uint32_t MMU_SRC_BASE;                       /* Address Offset: 0x0170 */
    __IO uint32_t MMU_SRC1_BASE;                      /* Address Offset: 0x0174 */
    __IO uint32_t MMU_DST_BASE;                       /* Address Offset: 0x0178 */
    __IO uint32_t MMU_ELS_BASE;                       /* Address Offset: 0x017C */
};
/****************************************************************************************/
/*                                                                                      */
/*                                Module Address Section                                */
/*                                                                                      */
/****************************************************************************************/
/* Memory Base */
#define BUS_GRF_BASE        0xFE000000U /* BUS_GRF base address */
#define USB2PHY_GRF_BASE    0xFE010000U /* USB2PHY_GRF base address */
#define USB3PHY_GRF_BASE    0xFE018000U /* USB3PHY_GRF base address */
#define PMU_GRF_BASE        0xFE020000U /* PMU_GRF base address */
#define DDR_GRF_BASE        0xFE030000U /* DDR_GRF base address */
#define USB_GRF_BASE        0xFE040000U /* USB_GRF base address */
#define GRF_BASE            0xFE050000U /* GRF base address */
#define SGRF_BASE           0xFE400000U /* SGRF base address */
#define PMU_SGRF_BASE       0xFE410000U /* PMU_SGRF base address */
#define MSCH_BASE           0xFE800000U /* MSCH base address */
#define CRU_BASE            0xFF350000U /* CRU base address */
#define EFUSE_NS_BASE       0xFF3B0000U /* EFUSE_NS base address */
#define EFUSE_S_BASE        0xFF3B8000U /* EFUSE_S base address */
#define DCF_BASE            0xFF640000U /* DCF base address */
#define VAD_BASE            0xFF810000U /* VAD base address */
#define DFICTRL_BASE        0xFF9B8000U /* DFICTRL base address */
#define RGA_BASE            0xFFAF0000U /* RGA base address */
/****************************************************************************************/
/*                                                                                      */
/*                               Module Variable Section                                */
/*                                                                                      */
/****************************************************************************************/
/* Module Variable Define */

#define BUS_GRF             ((struct BUS_GRF_REG *) BUS_GRF_BASE)
#define USB2PHY_GRF         ((struct USB2PHY_GRF_REG *) USB2PHY_GRF_BASE)
#define USB3PHY_GRF         ((struct USB3PHY_GRF_REG *) USB3PHY_GRF_BASE)
#define PMU_GRF             ((struct PMU_GRF_REG *) PMU_GRF_BASE)
#define DDR_GRF             ((struct DDR_GRF_REG *) DDR_GRF_BASE)
#define USB_GRF             ((struct USB_GRF_REG *) USB_GRF_BASE)
#define GRF                 ((struct GRF_REG *) GRF_BASE)
#define SGRF                ((struct SGRF_REG *) SGRF_BASE)
#define PMU_SGRF            ((struct PMU_SGRF_REG *) PMU_SGRF_BASE)
#define MSCH                ((struct MSCH_REG *) MSCH_BASE)
#define CRU                 ((struct CRU_REG *) CRU_BASE)
#define EFUSE_NS            ((struct EFUSE_NS_REG *) EFUSE_NS_BASE)
#define EFUSE_S             ((struct EFUSE_S_REG *) EFUSE_S_BASE)
#define DCF                 ((struct DCF_REG *) DCF_BASE)
#define VAD                 ((struct VAD_REG *) VAD_BASE)
#define DFICTRL             ((struct DFICTRL_REG *) DFICTRL_BASE)
#define RGA                 ((struct RGA_REG *) RGA_BASE)

#define IS_BUS_GRF_INSTANCE(instance) ((instance) == BUS_GRF)
#define IS_USB2PHY_GRF_INSTANCE(instance) ((instance) == USB2PHY_GRF)
#define IS_USB3PHY_GRF_INSTANCE(instance) ((instance) == USB3PHY_GRF)
#define IS_PMU_GRF_INSTANCE(instance) ((instance) == PMU_GRF)
#define IS_DDR_GRF_INSTANCE(instance) ((instance) == DDR_GRF)
#define IS_USB_GRF_INSTANCE(instance) ((instance) == USB_GRF)
#define IS_GRF_INSTANCE(instance) ((instance) == GRF)
#define IS_SGRF_INSTANCE(instance) ((instance) == SGRF)
#define IS_PMU_SGRF_INSTANCE(instance) ((instance) == PMU_SGRF)
#define IS_MSCH_INSTANCE(instance) ((instance) == MSCH)
#define IS_CRU_INSTANCE(instance) ((instance) == CRU)
#define IS_EFUSE_NS_INSTANCE(instance) ((instance) == EFUSE_NS)
#define IS_EFUSE_S_INSTANCE(instance) ((instance) == EFUSE_S)
#define IS_DCF_INSTANCE(instance) ((instance) == DCF)
#define IS_VAD_INSTANCE(instance) ((instance) == VAD)
#define IS_DFICTRL_INSTANCE(instance) ((instance) == DFICTRL)
#define IS_RGA_INSTANCE(instance) ((instance) == RGA)
/****************************************************************************************/
/*                                                                                      */
/*                               Register Bitmap Section                                */
/*                                                                                      */
/****************************************************************************************/
/****************************************BUS_GRF*****************************************/
/* GPIO1A_IOMUX_L */
#define BUS_GRF_GPIO1A_IOMUX_L_GPIO1A0_SEL_SHIFT           (0U)
#define BUS_GRF_GPIO1A_IOMUX_L_GPIO1A0_SEL_MASK            (0xFU << BUS_GRF_GPIO1A_IOMUX_L_GPIO1A0_SEL_SHIFT)           /* 0x0000000F */
#define BUS_GRF_GPIO1A_IOMUX_L_GPIO1A1_SEL_SHIFT           (4U)
#define BUS_GRF_GPIO1A_IOMUX_L_GPIO1A1_SEL_MASK            (0xFU << BUS_GRF_GPIO1A_IOMUX_L_GPIO1A1_SEL_SHIFT)           /* 0x000000F0 */
#define BUS_GRF_GPIO1A_IOMUX_L_GPIO1A2_SEL_SHIFT           (8U)
#define BUS_GRF_GPIO1A_IOMUX_L_GPIO1A2_SEL_MASK            (0xFU << BUS_GRF_GPIO1A_IOMUX_L_GPIO1A2_SEL_SHIFT)           /* 0x00000F00 */
#define BUS_GRF_GPIO1A_IOMUX_L_GPIO1A3_SEL_SHIFT           (12U)
#define BUS_GRF_GPIO1A_IOMUX_L_GPIO1A3_SEL_MASK            (0xFU << BUS_GRF_GPIO1A_IOMUX_L_GPIO1A3_SEL_SHIFT)           /* 0x0000F000 */
/* GPIO1A_IOMUX_H */
#define BUS_GRF_GPIO1A_IOMUX_H_GPIO1A4_SEL_SHIFT           (0U)
#define BUS_GRF_GPIO1A_IOMUX_H_GPIO1A4_SEL_MASK            (0xFU << BUS_GRF_GPIO1A_IOMUX_H_GPIO1A4_SEL_SHIFT)           /* 0x0000000F */
#define BUS_GRF_GPIO1A_IOMUX_H_GPIO1A5_SEL_SHIFT           (4U)
#define BUS_GRF_GPIO1A_IOMUX_H_GPIO1A5_SEL_MASK            (0xFU << BUS_GRF_GPIO1A_IOMUX_H_GPIO1A5_SEL_SHIFT)           /* 0x000000F0 */
#define BUS_GRF_GPIO1A_IOMUX_H_GPIO1A6_SEL_SHIFT           (8U)
#define BUS_GRF_GPIO1A_IOMUX_H_GPIO1A6_SEL_MASK            (0xFU << BUS_GRF_GPIO1A_IOMUX_H_GPIO1A6_SEL_SHIFT)           /* 0x00000F00 */
#define BUS_GRF_GPIO1A_IOMUX_H_GPIO1A7_SEL_SHIFT           (12U)
#define BUS_GRF_GPIO1A_IOMUX_H_GPIO1A7_SEL_MASK            (0xFU << BUS_GRF_GPIO1A_IOMUX_H_GPIO1A7_SEL_SHIFT)           /* 0x0000F000 */
/* GPIO1B_IOMUX_L */
#define BUS_GRF_GPIO1B_IOMUX_L_GPIO1B0_SEL_SHIFT           (0U)
#define BUS_GRF_GPIO1B_IOMUX_L_GPIO1B0_SEL_MASK            (0xFU << BUS_GRF_GPIO1B_IOMUX_L_GPIO1B0_SEL_SHIFT)           /* 0x0000000F */
#define BUS_GRF_GPIO1B_IOMUX_L_GPIO1B1_SEL_SHIFT           (4U)
#define BUS_GRF_GPIO1B_IOMUX_L_GPIO1B1_SEL_MASK            (0xFU << BUS_GRF_GPIO1B_IOMUX_L_GPIO1B1_SEL_SHIFT)           /* 0x000000F0 */
#define BUS_GRF_GPIO1B_IOMUX_L_GPIO1B2_SEL_SHIFT           (8U)
#define BUS_GRF_GPIO1B_IOMUX_L_GPIO1B2_SEL_MASK            (0xFU << BUS_GRF_GPIO1B_IOMUX_L_GPIO1B2_SEL_SHIFT)           /* 0x00000F00 */
#define BUS_GRF_GPIO1B_IOMUX_L_GPIO1B3_SEL_SHIFT           (12U)
#define BUS_GRF_GPIO1B_IOMUX_L_GPIO1B3_SEL_MASK            (0xFU << BUS_GRF_GPIO1B_IOMUX_L_GPIO1B3_SEL_SHIFT)           /* 0x0000F000 */
/* GPIO1B_IOMUX_H */
#define BUS_GRF_GPIO1B_IOMUX_H_GPIO1B4_SEL_SHIFT           (0U)
#define BUS_GRF_GPIO1B_IOMUX_H_GPIO1B4_SEL_MASK            (0xFU << BUS_GRF_GPIO1B_IOMUX_H_GPIO1B4_SEL_SHIFT)           /* 0x0000000F */
#define BUS_GRF_GPIO1B_IOMUX_H_GPIO1B5_SEL_SHIFT           (4U)
#define BUS_GRF_GPIO1B_IOMUX_H_GPIO1B5_SEL_MASK            (0xFU << BUS_GRF_GPIO1B_IOMUX_H_GPIO1B5_SEL_SHIFT)           /* 0x000000F0 */
#define BUS_GRF_GPIO1B_IOMUX_H_GPIO1B6_SEL_SHIFT           (8U)
#define BUS_GRF_GPIO1B_IOMUX_H_GPIO1B6_SEL_MASK            (0xFU << BUS_GRF_GPIO1B_IOMUX_H_GPIO1B6_SEL_SHIFT)           /* 0x00000F00 */
#define BUS_GRF_GPIO1B_IOMUX_H_GPIO1B7_SEL_SHIFT           (12U)
#define BUS_GRF_GPIO1B_IOMUX_H_GPIO1B7_SEL_MASK            (0xFU << BUS_GRF_GPIO1B_IOMUX_H_GPIO1B7_SEL_SHIFT)           /* 0x0000F000 */
/* GPIO2A_IOMUX_L */
#define BUS_GRF_GPIO2A_IOMUX_L_GPIO2A0_SEL_SHIFT           (0U)
#define BUS_GRF_GPIO2A_IOMUX_L_GPIO2A0_SEL_MASK            (0xFU << BUS_GRF_GPIO2A_IOMUX_L_GPIO2A0_SEL_SHIFT)           /* 0x0000000F */
#define BUS_GRF_GPIO2A_IOMUX_L_GPIO2A1_SEL_SHIFT           (4U)
#define BUS_GRF_GPIO2A_IOMUX_L_GPIO2A1_SEL_MASK            (0xFU << BUS_GRF_GPIO2A_IOMUX_L_GPIO2A1_SEL_SHIFT)           /* 0x000000F0 */
#define BUS_GRF_GPIO2A_IOMUX_L_GPIO2A2_SEL_SHIFT           (8U)
#define BUS_GRF_GPIO2A_IOMUX_L_GPIO2A2_SEL_MASK            (0xFU << BUS_GRF_GPIO2A_IOMUX_L_GPIO2A2_SEL_SHIFT)           /* 0x00000F00 */
#define BUS_GRF_GPIO2A_IOMUX_L_GPIO2A3_SEL_SHIFT           (12U)
#define BUS_GRF_GPIO2A_IOMUX_L_GPIO2A3_SEL_MASK            (0xFU << BUS_GRF_GPIO2A_IOMUX_L_GPIO2A3_SEL_SHIFT)           /* 0x0000F000 */
/* GPIO2A_IOMUX_H */
#define BUS_GRF_GPIO2A_IOMUX_H_GPIO2A4_SEL_SHIFT           (0U)
#define BUS_GRF_GPIO2A_IOMUX_H_GPIO2A4_SEL_MASK            (0xFU << BUS_GRF_GPIO2A_IOMUX_H_GPIO2A4_SEL_SHIFT)           /* 0x0000000F */
#define BUS_GRF_GPIO2A_IOMUX_H_GPIO2A5_SEL_SHIFT           (4U)
#define BUS_GRF_GPIO2A_IOMUX_H_GPIO2A5_SEL_MASK            (0xFU << BUS_GRF_GPIO2A_IOMUX_H_GPIO2A5_SEL_SHIFT)           /* 0x000000F0 */
#define BUS_GRF_GPIO2A_IOMUX_H_GPIO2A6_SEL_SHIFT           (8U)
#define BUS_GRF_GPIO2A_IOMUX_H_GPIO2A6_SEL_MASK            (0xFU << BUS_GRF_GPIO2A_IOMUX_H_GPIO2A6_SEL_SHIFT)           /* 0x00000F00 */
#define BUS_GRF_GPIO2A_IOMUX_H_GPIO2A7_SEL_SHIFT           (12U)
#define BUS_GRF_GPIO2A_IOMUX_H_GPIO2A7_SEL_MASK            (0xFU << BUS_GRF_GPIO2A_IOMUX_H_GPIO2A7_SEL_SHIFT)           /* 0x0000F000 */
/* GPIO2B_IOMUX_L */
#define BUS_GRF_GPIO2B_IOMUX_L_GPIO2B0_SEL_SHIFT           (0U)
#define BUS_GRF_GPIO2B_IOMUX_L_GPIO2B0_SEL_MASK            (0xFU << BUS_GRF_GPIO2B_IOMUX_L_GPIO2B0_SEL_SHIFT)           /* 0x0000000F */
#define BUS_GRF_GPIO2B_IOMUX_L_GPIO2B1_SEL_SHIFT           (4U)
#define BUS_GRF_GPIO2B_IOMUX_L_GPIO2B1_SEL_MASK            (0xFU << BUS_GRF_GPIO2B_IOMUX_L_GPIO2B1_SEL_SHIFT)           /* 0x000000F0 */
#define BUS_GRF_GPIO2B_IOMUX_L_GPIO2B2_SEL_SHIFT           (8U)
#define BUS_GRF_GPIO2B_IOMUX_L_GPIO2B2_SEL_MASK            (0xFU << BUS_GRF_GPIO2B_IOMUX_L_GPIO2B2_SEL_SHIFT)           /* 0x00000F00 */
#define BUS_GRF_GPIO2B_IOMUX_L_GPIO2B3_SEL_SHIFT           (12U)
#define BUS_GRF_GPIO2B_IOMUX_L_GPIO2B3_SEL_MASK            (0xFU << BUS_GRF_GPIO2B_IOMUX_L_GPIO2B3_SEL_SHIFT)           /* 0x0000F000 */
/* GPIO2B_IOMUX_H */
#define BUS_GRF_GPIO2B_IOMUX_H_GPIO2B4_SEL_SHIFT           (0U)
#define BUS_GRF_GPIO2B_IOMUX_H_GPIO2B4_SEL_MASK            (0xFU << BUS_GRF_GPIO2B_IOMUX_H_GPIO2B4_SEL_SHIFT)           /* 0x0000000F */
#define BUS_GRF_GPIO2B_IOMUX_H_GPIO2B5_SEL_SHIFT           (4U)
#define BUS_GRF_GPIO2B_IOMUX_H_GPIO2B5_SEL_MASK            (0xFU << BUS_GRF_GPIO2B_IOMUX_H_GPIO2B5_SEL_SHIFT)           /* 0x000000F0 */
#define BUS_GRF_GPIO2B_IOMUX_H_GPIO2B6_SEL_SHIFT           (8U)
#define BUS_GRF_GPIO2B_IOMUX_H_GPIO2B6_SEL_MASK            (0xFU << BUS_GRF_GPIO2B_IOMUX_H_GPIO2B6_SEL_SHIFT)           /* 0x00000F00 */
#define BUS_GRF_GPIO2B_IOMUX_H_GPIO2B7_SEL_SHIFT           (12U)
#define BUS_GRF_GPIO2B_IOMUX_H_GPIO2B7_SEL_MASK            (0xFU << BUS_GRF_GPIO2B_IOMUX_H_GPIO2B7_SEL_SHIFT)           /* 0x0000F000 */
/* GPIO2C_IOMUX_L */
#define BUS_GRF_GPIO2C_IOMUX_L_GPIO2C0_SEL_SHIFT           (0U)
#define BUS_GRF_GPIO2C_IOMUX_L_GPIO2C0_SEL_MASK            (0xFU << BUS_GRF_GPIO2C_IOMUX_L_GPIO2C0_SEL_SHIFT)           /* 0x0000000F */
#define BUS_GRF_GPIO2C_IOMUX_L_GPIO2C1_SEL_SHIFT           (4U)
#define BUS_GRF_GPIO2C_IOMUX_L_GPIO2C1_SEL_MASK            (0xFU << BUS_GRF_GPIO2C_IOMUX_L_GPIO2C1_SEL_SHIFT)           /* 0x000000F0 */
#define BUS_GRF_GPIO2C_IOMUX_L_GPIO2C2_SEL_SHIFT           (8U)
#define BUS_GRF_GPIO2C_IOMUX_L_GPIO2C2_SEL_MASK            (0xFU << BUS_GRF_GPIO2C_IOMUX_L_GPIO2C2_SEL_SHIFT)           /* 0x00000F00 */
#define BUS_GRF_GPIO2C_IOMUX_L_GPIO2C3_SEL_SHIFT           (12U)
#define BUS_GRF_GPIO2C_IOMUX_L_GPIO2C3_SEL_MASK            (0xFU << BUS_GRF_GPIO2C_IOMUX_L_GPIO2C3_SEL_SHIFT)           /* 0x0000F000 */
/* GPIO2C_IOMUX_H */
#define BUS_GRF_GPIO2C_IOMUX_H_GPIO2C4_SEL_SHIFT           (0U)
#define BUS_GRF_GPIO2C_IOMUX_H_GPIO2C4_SEL_MASK            (0xFU << BUS_GRF_GPIO2C_IOMUX_H_GPIO2C4_SEL_SHIFT)           /* 0x0000000F */
#define BUS_GRF_GPIO2C_IOMUX_H_GPIO2C5_SEL_SHIFT           (4U)
#define BUS_GRF_GPIO2C_IOMUX_H_GPIO2C5_SEL_MASK            (0xFU << BUS_GRF_GPIO2C_IOMUX_H_GPIO2C5_SEL_SHIFT)           /* 0x000000F0 */
#define BUS_GRF_GPIO2C_IOMUX_H_GPIO2C6_SEL_SHIFT           (8U)
#define BUS_GRF_GPIO2C_IOMUX_H_GPIO2C6_SEL_MASK            (0xFU << BUS_GRF_GPIO2C_IOMUX_H_GPIO2C6_SEL_SHIFT)           /* 0x00000F00 */
#define BUS_GRF_GPIO2C_IOMUX_H_GPIO2C7_SEL_SHIFT           (12U)
#define BUS_GRF_GPIO2C_IOMUX_H_GPIO2C7_SEL_MASK            (0xFU << BUS_GRF_GPIO2C_IOMUX_H_GPIO2C7_SEL_SHIFT)           /* 0x0000F000 */
/* GPIO2D_IOMUX_L */
#define BUS_GRF_GPIO2D_IOMUX_L_GPIO2D0_SEL_SHIFT           (0U)
#define BUS_GRF_GPIO2D_IOMUX_L_GPIO2D0_SEL_MASK            (0xFU << BUS_GRF_GPIO2D_IOMUX_L_GPIO2D0_SEL_SHIFT)           /* 0x0000000F */
#define BUS_GRF_GPIO2D_IOMUX_L_GPIO2D1_SEL_SHIFT           (4U)
#define BUS_GRF_GPIO2D_IOMUX_L_GPIO2D1_SEL_MASK            (0xFU << BUS_GRF_GPIO2D_IOMUX_L_GPIO2D1_SEL_SHIFT)           /* 0x000000F0 */
/* GPIO3A_IOMUX_L */
#define BUS_GRF_GPIO3A_IOMUX_L_GPIO3A0_SEL_SHIFT           (0U)
#define BUS_GRF_GPIO3A_IOMUX_L_GPIO3A0_SEL_MASK            (0xFU << BUS_GRF_GPIO3A_IOMUX_L_GPIO3A0_SEL_SHIFT)           /* 0x0000000F */
#define BUS_GRF_GPIO3A_IOMUX_L_GPIO3A1_SEL_SHIFT           (4U)
#define BUS_GRF_GPIO3A_IOMUX_L_GPIO3A1_SEL_MASK            (0xFU << BUS_GRF_GPIO3A_IOMUX_L_GPIO3A1_SEL_SHIFT)           /* 0x000000F0 */
#define BUS_GRF_GPIO3A_IOMUX_L_GPIO3A2_SEL_SHIFT           (8U)
#define BUS_GRF_GPIO3A_IOMUX_L_GPIO3A2_SEL_MASK            (0xFU << BUS_GRF_GPIO3A_IOMUX_L_GPIO3A2_SEL_SHIFT)           /* 0x00000F00 */
#define BUS_GRF_GPIO3A_IOMUX_L_GPIO3A3_SEL_SHIFT           (12U)
#define BUS_GRF_GPIO3A_IOMUX_L_GPIO3A3_SEL_MASK            (0xFU << BUS_GRF_GPIO3A_IOMUX_L_GPIO3A3_SEL_SHIFT)           /* 0x0000F000 */
/* GPIO3A_IOMUX_H */
#define BUS_GRF_GPIO3A_IOMUX_H_GPIO3A4_SEL_SHIFT           (0U)
#define BUS_GRF_GPIO3A_IOMUX_H_GPIO3A4_SEL_MASK            (0xFU << BUS_GRF_GPIO3A_IOMUX_H_GPIO3A4_SEL_SHIFT)           /* 0x0000000F */
#define BUS_GRF_GPIO3A_IOMUX_H_GPIO3A5_SEL_SHIFT           (4U)
#define BUS_GRF_GPIO3A_IOMUX_H_GPIO3A5_SEL_MASK            (0xFU << BUS_GRF_GPIO3A_IOMUX_H_GPIO3A5_SEL_SHIFT)           /* 0x000000F0 */
#define BUS_GRF_GPIO3A_IOMUX_H_GPIO3A6_SEL_SHIFT           (8U)
#define BUS_GRF_GPIO3A_IOMUX_H_GPIO3A6_SEL_MASK            (0xFU << BUS_GRF_GPIO3A_IOMUX_H_GPIO3A6_SEL_SHIFT)           /* 0x00000F00 */
#define BUS_GRF_GPIO3A_IOMUX_H_GPIO3A7_SEL_SHIFT           (12U)
#define BUS_GRF_GPIO3A_IOMUX_H_GPIO3A7_SEL_MASK            (0xFU << BUS_GRF_GPIO3A_IOMUX_H_GPIO3A7_SEL_SHIFT)           /* 0x0000F000 */
/* GPIO3B_IOMUX_L */
#define BUS_GRF_GPIO3B_IOMUX_L_GPIO3B0_SEL_SHIFT           (0U)
#define BUS_GRF_GPIO3B_IOMUX_L_GPIO3B0_SEL_MASK            (0xFU << BUS_GRF_GPIO3B_IOMUX_L_GPIO3B0_SEL_SHIFT)           /* 0x0000000F */
#define BUS_GRF_GPIO3B_IOMUX_L_GPIO3B1_SEL_SHIFT           (4U)
#define BUS_GRF_GPIO3B_IOMUX_L_GPIO3B1_SEL_MASK            (0xFU << BUS_GRF_GPIO3B_IOMUX_L_GPIO3B1_SEL_SHIFT)           /* 0x000000F0 */
#define BUS_GRF_GPIO3B_IOMUX_L_GPIO3B2_SEL_SHIFT           (8U)
#define BUS_GRF_GPIO3B_IOMUX_L_GPIO3B2_SEL_MASK            (0xFU << BUS_GRF_GPIO3B_IOMUX_L_GPIO3B2_SEL_SHIFT)           /* 0x00000F00 */
#define BUS_GRF_GPIO3B_IOMUX_L_GPIO3B3_SEL_SHIFT           (12U)
#define BUS_GRF_GPIO3B_IOMUX_L_GPIO3B3_SEL_MASK            (0xFU << BUS_GRF_GPIO3B_IOMUX_L_GPIO3B3_SEL_SHIFT)           /* 0x0000F000 */
/* GPIO3B_IOMUX_H */
#define BUS_GRF_GPIO3B_IOMUX_H_GPIO3B4_SEL_SHIFT           (0U)
#define BUS_GRF_GPIO3B_IOMUX_H_GPIO3B4_SEL_MASK            (0xFU << BUS_GRF_GPIO3B_IOMUX_H_GPIO3B4_SEL_SHIFT)           /* 0x0000000F */
#define BUS_GRF_GPIO3B_IOMUX_H_GPIO3B5_SEL_SHIFT           (4U)
#define BUS_GRF_GPIO3B_IOMUX_H_GPIO3B5_SEL_MASK            (0xFU << BUS_GRF_GPIO3B_IOMUX_H_GPIO3B5_SEL_SHIFT)           /* 0x000000F0 */
#define BUS_GRF_GPIO3B_IOMUX_H_GPIO3B6_SEL_SHIFT           (8U)
#define BUS_GRF_GPIO3B_IOMUX_H_GPIO3B6_SEL_MASK            (0xFU << BUS_GRF_GPIO3B_IOMUX_H_GPIO3B6_SEL_SHIFT)           /* 0x00000F00 */
#define BUS_GRF_GPIO3B_IOMUX_H_GPIO3B7_SEL_SHIFT           (12U)
#define BUS_GRF_GPIO3B_IOMUX_H_GPIO3B7_SEL_MASK            (0xFU << BUS_GRF_GPIO3B_IOMUX_H_GPIO3B7_SEL_SHIFT)           /* 0x0000F000 */
/* GPIO3C_IOMUX_L */
#define BUS_GRF_GPIO3C_IOMUX_L_GPIO3C0_SEL_SHIFT           (0U)
#define BUS_GRF_GPIO3C_IOMUX_L_GPIO3C0_SEL_MASK            (0xFU << BUS_GRF_GPIO3C_IOMUX_L_GPIO3C0_SEL_SHIFT)           /* 0x0000000F */
#define BUS_GRF_GPIO3C_IOMUX_L_GPIO3C1_SEL_SHIFT           (4U)
#define BUS_GRF_GPIO3C_IOMUX_L_GPIO3C1_SEL_MASK            (0xFU << BUS_GRF_GPIO3C_IOMUX_L_GPIO3C1_SEL_SHIFT)           /* 0x000000F0 */
#define BUS_GRF_GPIO3C_IOMUX_L_GPIO3C2_SEL_SHIFT           (8U)
#define BUS_GRF_GPIO3C_IOMUX_L_GPIO3C2_SEL_MASK            (0xFU << BUS_GRF_GPIO3C_IOMUX_L_GPIO3C2_SEL_SHIFT)           /* 0x00000F00 */
#define BUS_GRF_GPIO3C_IOMUX_L_GPIO3C3_SEL_SHIFT           (12U)
#define BUS_GRF_GPIO3C_IOMUX_L_GPIO3C3_SEL_MASK            (0xFU << BUS_GRF_GPIO3C_IOMUX_L_GPIO3C3_SEL_SHIFT)           /* 0x0000F000 */
/* GPIO3C_IOMUX_H */
#define BUS_GRF_GPIO3C_IOMUX_H_GPIO3C4_SEL_SHIFT           (0U)
#define BUS_GRF_GPIO3C_IOMUX_H_GPIO3C4_SEL_MASK            (0xFU << BUS_GRF_GPIO3C_IOMUX_H_GPIO3C4_SEL_SHIFT)           /* 0x0000000F */
#define BUS_GRF_GPIO3C_IOMUX_H_GPIO3C5_SEL_SHIFT           (4U)
#define BUS_GRF_GPIO3C_IOMUX_H_GPIO3C5_SEL_MASK            (0xFU << BUS_GRF_GPIO3C_IOMUX_H_GPIO3C5_SEL_SHIFT)           /* 0x000000F0 */
#define BUS_GRF_GPIO3C_IOMUX_H_GPIO3C6_SEL_SHIFT           (8U)
#define BUS_GRF_GPIO3C_IOMUX_H_GPIO3C6_SEL_MASK            (0xFU << BUS_GRF_GPIO3C_IOMUX_H_GPIO3C6_SEL_SHIFT)           /* 0x00000F00 */
#define BUS_GRF_GPIO3C_IOMUX_H_GPIO3C7_SEL_SHIFT           (12U)
#define BUS_GRF_GPIO3C_IOMUX_H_GPIO3C7_SEL_MASK            (0xFU << BUS_GRF_GPIO3C_IOMUX_H_GPIO3C7_SEL_SHIFT)           /* 0x0000F000 */
/* GPIO3D_IOMUX_L */
#define BUS_GRF_GPIO3D_IOMUX_L_GPIO3D0_SEL_SHIFT           (0U)
#define BUS_GRF_GPIO3D_IOMUX_L_GPIO3D0_SEL_MASK            (0xFU << BUS_GRF_GPIO3D_IOMUX_L_GPIO3D0_SEL_SHIFT)           /* 0x0000000F */
#define BUS_GRF_GPIO3D_IOMUX_L_GPIO3D1_SEL_SHIFT           (4U)
#define BUS_GRF_GPIO3D_IOMUX_L_GPIO3D1_SEL_MASK            (0xFU << BUS_GRF_GPIO3D_IOMUX_L_GPIO3D1_SEL_SHIFT)           /* 0x000000F0 */
#define BUS_GRF_GPIO3D_IOMUX_L_GPIO3D2_SEL_SHIFT           (8U)
#define BUS_GRF_GPIO3D_IOMUX_L_GPIO3D2_SEL_MASK            (0xFU << BUS_GRF_GPIO3D_IOMUX_L_GPIO3D2_SEL_SHIFT)           /* 0x00000F00 */
#define BUS_GRF_GPIO3D_IOMUX_L_GPIO3D3_SEL_SHIFT           (12U)
#define BUS_GRF_GPIO3D_IOMUX_L_GPIO3D3_SEL_MASK            (0xFU << BUS_GRF_GPIO3D_IOMUX_L_GPIO3D3_SEL_SHIFT)           /* 0x0000F000 */
/* GPIO4A_IOMUX_L */
#define BUS_GRF_GPIO4A_IOMUX_L_GPIO4A0_SEL_SHIFT           (0U)
#define BUS_GRF_GPIO4A_IOMUX_L_GPIO4A0_SEL_MASK            (0xFU << BUS_GRF_GPIO4A_IOMUX_L_GPIO4A0_SEL_SHIFT)           /* 0x0000000F */
#define BUS_GRF_GPIO4A_IOMUX_L_GPIO4A1_SEL_SHIFT           (4U)
#define BUS_GRF_GPIO4A_IOMUX_L_GPIO4A1_SEL_MASK            (0xFU << BUS_GRF_GPIO4A_IOMUX_L_GPIO4A1_SEL_SHIFT)           /* 0x000000F0 */
#define BUS_GRF_GPIO4A_IOMUX_L_GPIO4A2_SEL_SHIFT           (8U)
#define BUS_GRF_GPIO4A_IOMUX_L_GPIO4A2_SEL_MASK            (0xFU << BUS_GRF_GPIO4A_IOMUX_L_GPIO4A2_SEL_SHIFT)           /* 0x00000F00 */
#define BUS_GRF_GPIO4A_IOMUX_L_GPIO4A3_SEL_SHIFT           (12U)
#define BUS_GRF_GPIO4A_IOMUX_L_GPIO4A3_SEL_MASK            (0xFU << BUS_GRF_GPIO4A_IOMUX_L_GPIO4A3_SEL_SHIFT)           /* 0x0000F000 */
/* GPIO4A_IOMUX_H */
#define BUS_GRF_GPIO4A_IOMUX_H_GPIO4A4_SEL_SHIFT           (0U)
#define BUS_GRF_GPIO4A_IOMUX_H_GPIO4A4_SEL_MASK            (0xFU << BUS_GRF_GPIO4A_IOMUX_H_GPIO4A4_SEL_SHIFT)           /* 0x0000000F */
#define BUS_GRF_GPIO4A_IOMUX_H_GPIO4A5_SEL_SHIFT           (4U)
#define BUS_GRF_GPIO4A_IOMUX_H_GPIO4A5_SEL_MASK            (0xFU << BUS_GRF_GPIO4A_IOMUX_H_GPIO4A5_SEL_SHIFT)           /* 0x000000F0 */
#define BUS_GRF_GPIO4A_IOMUX_H_GPIO4A6_SEL_SHIFT           (8U)
#define BUS_GRF_GPIO4A_IOMUX_H_GPIO4A6_SEL_MASK            (0xFU << BUS_GRF_GPIO4A_IOMUX_H_GPIO4A6_SEL_SHIFT)           /* 0x00000F00 */
#define BUS_GRF_GPIO4A_IOMUX_H_GPIO4A7_SEL_SHIFT           (12U)
#define BUS_GRF_GPIO4A_IOMUX_H_GPIO4A7_SEL_MASK            (0xFU << BUS_GRF_GPIO4A_IOMUX_H_GPIO4A7_SEL_SHIFT)           /* 0x0000F000 */
/* GPIO4B_IOMUX_L */
#define BUS_GRF_GPIO4B_IOMUX_L_GPIO4B0_SEL_SHIFT           (0U)
#define BUS_GRF_GPIO4B_IOMUX_L_GPIO4B0_SEL_MASK            (0xFU << BUS_GRF_GPIO4B_IOMUX_L_GPIO4B0_SEL_SHIFT)           /* 0x0000000F */
#define BUS_GRF_GPIO4B_IOMUX_L_GPIO4B1_SEL_SHIFT           (4U)
#define BUS_GRF_GPIO4B_IOMUX_L_GPIO4B1_SEL_MASK            (0xFU << BUS_GRF_GPIO4B_IOMUX_L_GPIO4B1_SEL_SHIFT)           /* 0x000000F0 */
#define BUS_GRF_GPIO4B_IOMUX_L_GPIO4B2_SEL_SHIFT           (8U)
#define BUS_GRF_GPIO4B_IOMUX_L_GPIO4B2_SEL_MASK            (0xFU << BUS_GRF_GPIO4B_IOMUX_L_GPIO4B2_SEL_SHIFT)           /* 0x00000F00 */
#define BUS_GRF_GPIO4B_IOMUX_L_GPIO4B3_SEL_SHIFT           (12U)
#define BUS_GRF_GPIO4B_IOMUX_L_GPIO4B3_SEL_MASK            (0xFU << BUS_GRF_GPIO4B_IOMUX_L_GPIO4B3_SEL_SHIFT)           /* 0x0000F000 */
/* GPIO4B_IOMUX_H */
#define BUS_GRF_GPIO4B_IOMUX_H_GPIO4B4_SEL_SHIFT           (0U)
#define BUS_GRF_GPIO4B_IOMUX_H_GPIO4B4_SEL_MASK            (0xFU << BUS_GRF_GPIO4B_IOMUX_H_GPIO4B4_SEL_SHIFT)           /* 0x0000000F */
#define BUS_GRF_GPIO4B_IOMUX_H_GPIO4B5_SEL_SHIFT           (4U)
#define BUS_GRF_GPIO4B_IOMUX_H_GPIO4B5_SEL_MASK            (0xFU << BUS_GRF_GPIO4B_IOMUX_H_GPIO4B5_SEL_SHIFT)           /* 0x000000F0 */
#define BUS_GRF_GPIO4B_IOMUX_H_GPIO4B6_SEL_SHIFT           (8U)
#define BUS_GRF_GPIO4B_IOMUX_H_GPIO4B6_SEL_MASK            (0xFU << BUS_GRF_GPIO4B_IOMUX_H_GPIO4B6_SEL_SHIFT)           /* 0x00000F00 */
#define BUS_GRF_GPIO4B_IOMUX_H_GPIO4B7_SEL_SHIFT           (12U)
#define BUS_GRF_GPIO4B_IOMUX_H_GPIO4B7_SEL_MASK            (0xFU << BUS_GRF_GPIO4B_IOMUX_H_GPIO4B7_SEL_SHIFT)           /* 0x0000F000 */
/* GPIO4C_IOMUX_L */
#define BUS_GRF_GPIO4C_IOMUX_L_GPIO4C0_SEL_SHIFT           (0U)
#define BUS_GRF_GPIO4C_IOMUX_L_GPIO4C0_SEL_MASK            (0xFU << BUS_GRF_GPIO4C_IOMUX_L_GPIO4C0_SEL_SHIFT)           /* 0x0000000F */
#define BUS_GRF_GPIO4C_IOMUX_L_GPIO4C1_SEL_SHIFT           (4U)
#define BUS_GRF_GPIO4C_IOMUX_L_GPIO4C1_SEL_MASK            (0xFU << BUS_GRF_GPIO4C_IOMUX_L_GPIO4C1_SEL_SHIFT)           /* 0x000000F0 */
#define BUS_GRF_GPIO4C_IOMUX_L_GPIO4C2_SEL_SHIFT           (8U)
#define BUS_GRF_GPIO4C_IOMUX_L_GPIO4C2_SEL_MASK            (0xFU << BUS_GRF_GPIO4C_IOMUX_L_GPIO4C2_SEL_SHIFT)           /* 0x00000F00 */
#define BUS_GRF_GPIO4C_IOMUX_L_GPIO4C3_SEL_SHIFT           (12U)
#define BUS_GRF_GPIO4C_IOMUX_L_GPIO4C3_SEL_MASK            (0xFU << BUS_GRF_GPIO4C_IOMUX_L_GPIO4C3_SEL_SHIFT)           /* 0x0000F000 */
/* GPIO4C_IOMUX_H */
#define BUS_GRF_GPIO4C_IOMUX_H_GPIO4C4_SEL_SHIFT           (0U)
#define BUS_GRF_GPIO4C_IOMUX_H_GPIO4C4_SEL_MASK            (0xFU << BUS_GRF_GPIO4C_IOMUX_H_GPIO4C4_SEL_SHIFT)           /* 0x0000000F */
/* GPIO1A_P */
#define BUS_GRF_GPIO1A_P_GPIO1A0_P_SHIFT                   (0U)
#define BUS_GRF_GPIO1A_P_GPIO1A0_P_MASK                    (0x3U << BUS_GRF_GPIO1A_P_GPIO1A0_P_SHIFT)                   /* 0x00000003 */
#define BUS_GRF_GPIO1A_P_GPIO1A1_P_SHIFT                   (2U)
#define BUS_GRF_GPIO1A_P_GPIO1A1_P_MASK                    (0x3U << BUS_GRF_GPIO1A_P_GPIO1A1_P_SHIFT)                   /* 0x0000000C */
#define BUS_GRF_GPIO1A_P_GPIO1A2_P_SHIFT                   (4U)
#define BUS_GRF_GPIO1A_P_GPIO1A2_P_MASK                    (0x3U << BUS_GRF_GPIO1A_P_GPIO1A2_P_SHIFT)                   /* 0x00000030 */
#define BUS_GRF_GPIO1A_P_GPIO1A3_P_SHIFT                   (6U)
#define BUS_GRF_GPIO1A_P_GPIO1A3_P_MASK                    (0x3U << BUS_GRF_GPIO1A_P_GPIO1A3_P_SHIFT)                   /* 0x000000C0 */
#define BUS_GRF_GPIO1A_P_GPIO1A4_P_SHIFT                   (8U)
#define BUS_GRF_GPIO1A_P_GPIO1A4_P_MASK                    (0x3U << BUS_GRF_GPIO1A_P_GPIO1A4_P_SHIFT)                   /* 0x00000300 */
#define BUS_GRF_GPIO1A_P_GPIO1A5_P_SHIFT                   (10U)
#define BUS_GRF_GPIO1A_P_GPIO1A5_P_MASK                    (0x3U << BUS_GRF_GPIO1A_P_GPIO1A5_P_SHIFT)                   /* 0x00000C00 */
#define BUS_GRF_GPIO1A_P_GPIO1A6_P_SHIFT                   (12U)
#define BUS_GRF_GPIO1A_P_GPIO1A6_P_MASK                    (0x3U << BUS_GRF_GPIO1A_P_GPIO1A6_P_SHIFT)                   /* 0x00003000 */
#define BUS_GRF_GPIO1A_P_GPIO1A7_P_SHIFT                   (14U)
#define BUS_GRF_GPIO1A_P_GPIO1A7_P_MASK                    (0x3U << BUS_GRF_GPIO1A_P_GPIO1A7_P_SHIFT)                   /* 0x0000C000 */
/* GPIO1B_P */
#define BUS_GRF_GPIO1B_P_GPIO1B0_P_SHIFT                   (0U)
#define BUS_GRF_GPIO1B_P_GPIO1B0_P_MASK                    (0x3U << BUS_GRF_GPIO1B_P_GPIO1B0_P_SHIFT)                   /* 0x00000003 */
#define BUS_GRF_GPIO1B_P_GPIO1B1_P_SHIFT                   (2U)
#define BUS_GRF_GPIO1B_P_GPIO1B1_P_MASK                    (0x3U << BUS_GRF_GPIO1B_P_GPIO1B1_P_SHIFT)                   /* 0x0000000C */
#define BUS_GRF_GPIO1B_P_GPIO1B2_P_SHIFT                   (4U)
#define BUS_GRF_GPIO1B_P_GPIO1B2_P_MASK                    (0x3U << BUS_GRF_GPIO1B_P_GPIO1B2_P_SHIFT)                   /* 0x00000030 */
#define BUS_GRF_GPIO1B_P_GPIO1B3_P_SHIFT                   (6U)
#define BUS_GRF_GPIO1B_P_GPIO1B3_P_MASK                    (0x3U << BUS_GRF_GPIO1B_P_GPIO1B3_P_SHIFT)                   /* 0x000000C0 */
#define BUS_GRF_GPIO1B_P_GPIO1B4_P_SHIFT                   (8U)
#define BUS_GRF_GPIO1B_P_GPIO1B4_P_MASK                    (0x3U << BUS_GRF_GPIO1B_P_GPIO1B4_P_SHIFT)                   /* 0x00000300 */
#define BUS_GRF_GPIO1B_P_GPIO1B5_P_SHIFT                   (10U)
#define BUS_GRF_GPIO1B_P_GPIO1B5_P_MASK                    (0x3U << BUS_GRF_GPIO1B_P_GPIO1B5_P_SHIFT)                   /* 0x00000C00 */
#define BUS_GRF_GPIO1B_P_GPIO1B6_P_SHIFT                   (12U)
#define BUS_GRF_GPIO1B_P_GPIO1B6_P_MASK                    (0x3U << BUS_GRF_GPIO1B_P_GPIO1B6_P_SHIFT)                   /* 0x00003000 */
#define BUS_GRF_GPIO1B_P_GPIO1B7_P_SHIFT                   (14U)
#define BUS_GRF_GPIO1B_P_GPIO1B7_P_MASK                    (0x3U << BUS_GRF_GPIO1B_P_GPIO1B7_P_SHIFT)                   /* 0x0000C000 */
/* GPIO2A_P */
#define BUS_GRF_GPIO2A_P_GPIO2A0_P_SHIFT                   (0U)
#define BUS_GRF_GPIO2A_P_GPIO2A0_P_MASK                    (0x3U << BUS_GRF_GPIO2A_P_GPIO2A0_P_SHIFT)                   /* 0x00000003 */
#define BUS_GRF_GPIO2A_P_GPIO2A1_P_SHIFT                   (2U)
#define BUS_GRF_GPIO2A_P_GPIO2A1_P_MASK                    (0x3U << BUS_GRF_GPIO2A_P_GPIO2A1_P_SHIFT)                   /* 0x0000000C */
#define BUS_GRF_GPIO2A_P_GPIO2A2_P_SHIFT                   (4U)
#define BUS_GRF_GPIO2A_P_GPIO2A2_P_MASK                    (0x3U << BUS_GRF_GPIO2A_P_GPIO2A2_P_SHIFT)                   /* 0x00000030 */
#define BUS_GRF_GPIO2A_P_GPIO2A3_P_SHIFT                   (6U)
#define BUS_GRF_GPIO2A_P_GPIO2A3_P_MASK                    (0x3U << BUS_GRF_GPIO2A_P_GPIO2A3_P_SHIFT)                   /* 0x000000C0 */
#define BUS_GRF_GPIO2A_P_GPIO2A4_P_SHIFT                   (8U)
#define BUS_GRF_GPIO2A_P_GPIO2A4_P_MASK                    (0x3U << BUS_GRF_GPIO2A_P_GPIO2A4_P_SHIFT)                   /* 0x00000300 */
#define BUS_GRF_GPIO2A_P_GPIO2A5_P_SHIFT                   (10U)
#define BUS_GRF_GPIO2A_P_GPIO2A5_P_MASK                    (0x3U << BUS_GRF_GPIO2A_P_GPIO2A5_P_SHIFT)                   /* 0x00000C00 */
#define BUS_GRF_GPIO2A_P_GPIO2A6_P_SHIFT                   (12U)
#define BUS_GRF_GPIO2A_P_GPIO2A6_P_MASK                    (0x3U << BUS_GRF_GPIO2A_P_GPIO2A6_P_SHIFT)                   /* 0x00003000 */
#define BUS_GRF_GPIO2A_P_GPIO2A7_P_SHIFT                   (14U)
#define BUS_GRF_GPIO2A_P_GPIO2A7_P_MASK                    (0x3U << BUS_GRF_GPIO2A_P_GPIO2A7_P_SHIFT)                   /* 0x0000C000 */
/* GPIO2B_P */
#define BUS_GRF_GPIO2B_P_GPIO2B0_P_SHIFT                   (0U)
#define BUS_GRF_GPIO2B_P_GPIO2B0_P_MASK                    (0x3U << BUS_GRF_GPIO2B_P_GPIO2B0_P_SHIFT)                   /* 0x00000003 */
#define BUS_GRF_GPIO2B_P_GPIO2B1_P_SHIFT                   (2U)
#define BUS_GRF_GPIO2B_P_GPIO2B1_P_MASK                    (0x3U << BUS_GRF_GPIO2B_P_GPIO2B1_P_SHIFT)                   /* 0x0000000C */
#define BUS_GRF_GPIO2B_P_GPIO2B2_P_SHIFT                   (4U)
#define BUS_GRF_GPIO2B_P_GPIO2B2_P_MASK                    (0x3U << BUS_GRF_GPIO2B_P_GPIO2B2_P_SHIFT)                   /* 0x00000030 */
#define BUS_GRF_GPIO2B_P_GPIO2B3_P_SHIFT                   (6U)
#define BUS_GRF_GPIO2B_P_GPIO2B3_P_MASK                    (0x3U << BUS_GRF_GPIO2B_P_GPIO2B3_P_SHIFT)                   /* 0x000000C0 */
#define BUS_GRF_GPIO2B_P_GPIO2B4_P_SHIFT                   (8U)
#define BUS_GRF_GPIO2B_P_GPIO2B4_P_MASK                    (0x3U << BUS_GRF_GPIO2B_P_GPIO2B4_P_SHIFT)                   /* 0x00000300 */
#define BUS_GRF_GPIO2B_P_GPIO2B5_P_SHIFT                   (10U)
#define BUS_GRF_GPIO2B_P_GPIO2B5_P_MASK                    (0x3U << BUS_GRF_GPIO2B_P_GPIO2B5_P_SHIFT)                   /* 0x00000C00 */
#define BUS_GRF_GPIO2B_P_GPIO2B6_P_SHIFT                   (12U)
#define BUS_GRF_GPIO2B_P_GPIO2B6_P_MASK                    (0x3U << BUS_GRF_GPIO2B_P_GPIO2B6_P_SHIFT)                   /* 0x00003000 */
#define BUS_GRF_GPIO2B_P_GPIO2B7_P_SHIFT                   (14U)
#define BUS_GRF_GPIO2B_P_GPIO2B7_P_MASK                    (0x3U << BUS_GRF_GPIO2B_P_GPIO2B7_P_SHIFT)                   /* 0x0000C000 */
/* GPIO2C_P */
#define BUS_GRF_GPIO2C_P_GPIO2C0_P_SHIFT                   (0U)
#define BUS_GRF_GPIO2C_P_GPIO2C0_P_MASK                    (0x3U << BUS_GRF_GPIO2C_P_GPIO2C0_P_SHIFT)                   /* 0x00000003 */
#define BUS_GRF_GPIO2C_P_GPIO2C1_P_SHIFT                   (2U)
#define BUS_GRF_GPIO2C_P_GPIO2C1_P_MASK                    (0x3U << BUS_GRF_GPIO2C_P_GPIO2C1_P_SHIFT)                   /* 0x0000000C */
#define BUS_GRF_GPIO2C_P_GPIO2C2_P_SHIFT                   (4U)
#define BUS_GRF_GPIO2C_P_GPIO2C2_P_MASK                    (0x3U << BUS_GRF_GPIO2C_P_GPIO2C2_P_SHIFT)                   /* 0x00000030 */
#define BUS_GRF_GPIO2C_P_GPIO2C3_P_SHIFT                   (6U)
#define BUS_GRF_GPIO2C_P_GPIO2C3_P_MASK                    (0x3U << BUS_GRF_GPIO2C_P_GPIO2C3_P_SHIFT)                   /* 0x000000C0 */
#define BUS_GRF_GPIO2C_P_GPIO2C4_P_SHIFT                   (8U)
#define BUS_GRF_GPIO2C_P_GPIO2C4_P_MASK                    (0x3U << BUS_GRF_GPIO2C_P_GPIO2C4_P_SHIFT)                   /* 0x00000300 */
#define BUS_GRF_GPIO2C_P_GPIO2C5_P_SHIFT                   (10U)
#define BUS_GRF_GPIO2C_P_GPIO2C5_P_MASK                    (0x3U << BUS_GRF_GPIO2C_P_GPIO2C5_P_SHIFT)                   /* 0x00000C00 */
#define BUS_GRF_GPIO2C_P_GPIO2C6_P_SHIFT                   (12U)
#define BUS_GRF_GPIO2C_P_GPIO2C6_P_MASK                    (0x3U << BUS_GRF_GPIO2C_P_GPIO2C6_P_SHIFT)                   /* 0x00003000 */
#define BUS_GRF_GPIO2C_P_GPIO2C7_P_SHIFT                   (14U)
#define BUS_GRF_GPIO2C_P_GPIO2C7_P_MASK                    (0x3U << BUS_GRF_GPIO2C_P_GPIO2C7_P_SHIFT)                   /* 0x0000C000 */
/* GPIO2D_P */
#define BUS_GRF_GPIO2D_P_GPIO2D0_P_SHIFT                   (0U)
#define BUS_GRF_GPIO2D_P_GPIO2D0_P_MASK                    (0x3U << BUS_GRF_GPIO2D_P_GPIO2D0_P_SHIFT)                   /* 0x00000003 */
#define BUS_GRF_GPIO2D_P_GPIO2D1_P_SHIFT                   (2U)
#define BUS_GRF_GPIO2D_P_GPIO2D1_P_MASK                    (0x3U << BUS_GRF_GPIO2D_P_GPIO2D1_P_SHIFT)                   /* 0x0000000C */
#define BUS_GRF_GPIO2D_P_GPIO2D2_P_SHIFT                   (4U)
#define BUS_GRF_GPIO2D_P_GPIO2D2_P_MASK                    (0x3U << BUS_GRF_GPIO2D_P_GPIO2D2_P_SHIFT)                   /* 0x00000030 */
#define BUS_GRF_GPIO2D_P_GPIO2D3_P_SHIFT                   (6U)
#define BUS_GRF_GPIO2D_P_GPIO2D3_P_MASK                    (0x3U << BUS_GRF_GPIO2D_P_GPIO2D3_P_SHIFT)                   /* 0x000000C0 */
#define BUS_GRF_GPIO2D_P_GPIO2D4_P_SHIFT                   (8U)
#define BUS_GRF_GPIO2D_P_GPIO2D4_P_MASK                    (0x3U << BUS_GRF_GPIO2D_P_GPIO2D4_P_SHIFT)                   /* 0x00000300 */
#define BUS_GRF_GPIO2D_P_GPIO2D5_P_SHIFT                   (10U)
#define BUS_GRF_GPIO2D_P_GPIO2D5_P_MASK                    (0x3U << BUS_GRF_GPIO2D_P_GPIO2D5_P_SHIFT)                   /* 0x00000C00 */
#define BUS_GRF_GPIO2D_P_GPIO2D6_P_SHIFT                   (12U)
#define BUS_GRF_GPIO2D_P_GPIO2D6_P_MASK                    (0x3U << BUS_GRF_GPIO2D_P_GPIO2D6_P_SHIFT)                   /* 0x00003000 */
#define BUS_GRF_GPIO2D_P_GPIO2D7_P_SHIFT                   (14U)
#define BUS_GRF_GPIO2D_P_GPIO2D7_P_MASK                    (0x3U << BUS_GRF_GPIO2D_P_GPIO2D7_P_SHIFT)                   /* 0x0000C000 */
/* GPIO3A_P */
#define BUS_GRF_GPIO3A_P_GPIO3A0_P_SHIFT                   (0U)
#define BUS_GRF_GPIO3A_P_GPIO3A0_P_MASK                    (0x3U << BUS_GRF_GPIO3A_P_GPIO3A0_P_SHIFT)                   /* 0x00000003 */
#define BUS_GRF_GPIO3A_P_GPIO3A1_P_SHIFT                   (2U)
#define BUS_GRF_GPIO3A_P_GPIO3A1_P_MASK                    (0x3U << BUS_GRF_GPIO3A_P_GPIO3A1_P_SHIFT)                   /* 0x0000000C */
#define BUS_GRF_GPIO3A_P_GPIO3A2_P_SHIFT                   (4U)
#define BUS_GRF_GPIO3A_P_GPIO3A2_P_MASK                    (0x3U << BUS_GRF_GPIO3A_P_GPIO3A2_P_SHIFT)                   /* 0x00000030 */
#define BUS_GRF_GPIO3A_P_GPIO3A3_P_SHIFT                   (6U)
#define BUS_GRF_GPIO3A_P_GPIO3A3_P_MASK                    (0x3U << BUS_GRF_GPIO3A_P_GPIO3A3_P_SHIFT)                   /* 0x000000C0 */
#define BUS_GRF_GPIO3A_P_GPIO3A4_P_SHIFT                   (8U)
#define BUS_GRF_GPIO3A_P_GPIO3A4_P_MASK                    (0x3U << BUS_GRF_GPIO3A_P_GPIO3A4_P_SHIFT)                   /* 0x00000300 */
#define BUS_GRF_GPIO3A_P_GPIO3A5_P_SHIFT                   (10U)
#define BUS_GRF_GPIO3A_P_GPIO3A5_P_MASK                    (0x3U << BUS_GRF_GPIO3A_P_GPIO3A5_P_SHIFT)                   /* 0x00000C00 */
#define BUS_GRF_GPIO3A_P_GPIO3A6_P_SHIFT                   (12U)
#define BUS_GRF_GPIO3A_P_GPIO3A6_P_MASK                    (0x3U << BUS_GRF_GPIO3A_P_GPIO3A6_P_SHIFT)                   /* 0x00003000 */
#define BUS_GRF_GPIO3A_P_GPIO3A7_P_SHIFT                   (14U)
#define BUS_GRF_GPIO3A_P_GPIO3A7_P_MASK                    (0x3U << BUS_GRF_GPIO3A_P_GPIO3A7_P_SHIFT)                   /* 0x0000C000 */
/* GPIO3B_P */
#define BUS_GRF_GPIO3B_P_GPIO3B0_P_SHIFT                   (0U)
#define BUS_GRF_GPIO3B_P_GPIO3B0_P_MASK                    (0x3U << BUS_GRF_GPIO3B_P_GPIO3B0_P_SHIFT)                   /* 0x00000003 */
#define BUS_GRF_GPIO3B_P_GPIO3B1_P_SHIFT                   (2U)
#define BUS_GRF_GPIO3B_P_GPIO3B1_P_MASK                    (0x3U << BUS_GRF_GPIO3B_P_GPIO3B1_P_SHIFT)                   /* 0x0000000C */
#define BUS_GRF_GPIO3B_P_GPIO3B2_P_SHIFT                   (4U)
#define BUS_GRF_GPIO3B_P_GPIO3B2_P_MASK                    (0x3U << BUS_GRF_GPIO3B_P_GPIO3B2_P_SHIFT)                   /* 0x00000030 */
#define BUS_GRF_GPIO3B_P_GPIO3B3_P_SHIFT                   (6U)
#define BUS_GRF_GPIO3B_P_GPIO3B3_P_MASK                    (0x3U << BUS_GRF_GPIO3B_P_GPIO3B3_P_SHIFT)                   /* 0x000000C0 */
#define BUS_GRF_GPIO3B_P_GPIO3B4_P_SHIFT                   (8U)
#define BUS_GRF_GPIO3B_P_GPIO3B4_P_MASK                    (0x3U << BUS_GRF_GPIO3B_P_GPIO3B4_P_SHIFT)                   /* 0x00000300 */
#define BUS_GRF_GPIO3B_P_GPIO3B5_P_SHIFT                   (10U)
#define BUS_GRF_GPIO3B_P_GPIO3B5_P_MASK                    (0x3U << BUS_GRF_GPIO3B_P_GPIO3B5_P_SHIFT)                   /* 0x00000C00 */
#define BUS_GRF_GPIO3B_P_GPIO3B6_P_SHIFT                   (12U)
#define BUS_GRF_GPIO3B_P_GPIO3B6_P_MASK                    (0x3U << BUS_GRF_GPIO3B_P_GPIO3B6_P_SHIFT)                   /* 0x00003000 */
#define BUS_GRF_GPIO3B_P_GPIO3B7_P_SHIFT                   (14U)
#define BUS_GRF_GPIO3B_P_GPIO3B7_P_MASK                    (0x3U << BUS_GRF_GPIO3B_P_GPIO3B7_P_SHIFT)                   /* 0x0000C000 */
/* GPIO3C_P */
#define BUS_GRF_GPIO3C_P_GPIO3C0_P_SHIFT                   (0U)
#define BUS_GRF_GPIO3C_P_GPIO3C0_P_MASK                    (0x3U << BUS_GRF_GPIO3C_P_GPIO3C0_P_SHIFT)                   /* 0x00000003 */
#define BUS_GRF_GPIO3C_P_GPIO3C1_P_SHIFT                   (2U)
#define BUS_GRF_GPIO3C_P_GPIO3C1_P_MASK                    (0x3U << BUS_GRF_GPIO3C_P_GPIO3C1_P_SHIFT)                   /* 0x0000000C */
#define BUS_GRF_GPIO3C_P_GPIO3C2_P_SHIFT                   (4U)
#define BUS_GRF_GPIO3C_P_GPIO3C2_P_MASK                    (0x3U << BUS_GRF_GPIO3C_P_GPIO3C2_P_SHIFT)                   /* 0x00000030 */
#define BUS_GRF_GPIO3C_P_GPIO3C3_P_SHIFT                   (6U)
#define BUS_GRF_GPIO3C_P_GPIO3C3_P_MASK                    (0x3U << BUS_GRF_GPIO3C_P_GPIO3C3_P_SHIFT)                   /* 0x000000C0 */
#define BUS_GRF_GPIO3C_P_GPIO3C4_P_SHIFT                   (8U)
#define BUS_GRF_GPIO3C_P_GPIO3C4_P_MASK                    (0x3U << BUS_GRF_GPIO3C_P_GPIO3C4_P_SHIFT)                   /* 0x00000300 */
#define BUS_GRF_GPIO3C_P_GPIO3C5_P_SHIFT                   (10U)
#define BUS_GRF_GPIO3C_P_GPIO3C5_P_MASK                    (0x3U << BUS_GRF_GPIO3C_P_GPIO3C5_P_SHIFT)                   /* 0x00000C00 */
#define BUS_GRF_GPIO3C_P_GPIO3C6_P_SHIFT                   (12U)
#define BUS_GRF_GPIO3C_P_GPIO3C6_P_MASK                    (0x3U << BUS_GRF_GPIO3C_P_GPIO3C6_P_SHIFT)                   /* 0x00003000 */
#define BUS_GRF_GPIO3C_P_GPIO3C7_P_SHIFT                   (14U)
#define BUS_GRF_GPIO3C_P_GPIO3C7_P_MASK                    (0x3U << BUS_GRF_GPIO3C_P_GPIO3C7_P_SHIFT)                   /* 0x0000C000 */
/* GPIO3D_P */
#define BUS_GRF_GPIO3D_P_GPIO3D0_P_SHIFT                   (0U)
#define BUS_GRF_GPIO3D_P_GPIO3D0_P_MASK                    (0x3U << BUS_GRF_GPIO3D_P_GPIO3D0_P_SHIFT)                   /* 0x00000003 */
#define BUS_GRF_GPIO3D_P_GPIO3D1_P_SHIFT                   (2U)
#define BUS_GRF_GPIO3D_P_GPIO3D1_P_MASK                    (0x3U << BUS_GRF_GPIO3D_P_GPIO3D1_P_SHIFT)                   /* 0x0000000C */
#define BUS_GRF_GPIO3D_P_GPIO3D2_P_SHIFT                   (4U)
#define BUS_GRF_GPIO3D_P_GPIO3D2_P_MASK                    (0x3U << BUS_GRF_GPIO3D_P_GPIO3D2_P_SHIFT)                   /* 0x00000030 */
#define BUS_GRF_GPIO3D_P_GPIO3D3_P_SHIFT                   (6U)
#define BUS_GRF_GPIO3D_P_GPIO3D3_P_MASK                    (0x3U << BUS_GRF_GPIO3D_P_GPIO3D3_P_SHIFT)                   /* 0x000000C0 */
#define BUS_GRF_GPIO3D_P_GPIO3D4_P_SHIFT                   (8U)
#define BUS_GRF_GPIO3D_P_GPIO3D4_P_MASK                    (0x3U << BUS_GRF_GPIO3D_P_GPIO3D4_P_SHIFT)                   /* 0x00000300 */
#define BUS_GRF_GPIO3D_P_GPIO3D5_P_SHIFT                   (10U)
#define BUS_GRF_GPIO3D_P_GPIO3D5_P_MASK                    (0x3U << BUS_GRF_GPIO3D_P_GPIO3D5_P_SHIFT)                   /* 0x00000C00 */
#define BUS_GRF_GPIO3D_P_GPIO3D6_P_SHIFT                   (12U)
#define BUS_GRF_GPIO3D_P_GPIO3D6_P_MASK                    (0x3U << BUS_GRF_GPIO3D_P_GPIO3D6_P_SHIFT)                   /* 0x00003000 */
#define BUS_GRF_GPIO3D_P_GPIO3D7_P_SHIFT                   (14U)
#define BUS_GRF_GPIO3D_P_GPIO3D7_P_MASK                    (0x3U << BUS_GRF_GPIO3D_P_GPIO3D7_P_SHIFT)                   /* 0x0000C000 */
/* GPIO4A_P */
#define BUS_GRF_GPIO4A_P_GPIO4A0_P_SHIFT                   (0U)
#define BUS_GRF_GPIO4A_P_GPIO4A0_P_MASK                    (0x3U << BUS_GRF_GPIO4A_P_GPIO4A0_P_SHIFT)                   /* 0x00000003 */
#define BUS_GRF_GPIO4A_P_GPIO4A1_P_SHIFT                   (2U)
#define BUS_GRF_GPIO4A_P_GPIO4A1_P_MASK                    (0x3U << BUS_GRF_GPIO4A_P_GPIO4A1_P_SHIFT)                   /* 0x0000000C */
#define BUS_GRF_GPIO4A_P_GPIO4A2_P_SHIFT                   (4U)
#define BUS_GRF_GPIO4A_P_GPIO4A2_P_MASK                    (0x3U << BUS_GRF_GPIO4A_P_GPIO4A2_P_SHIFT)                   /* 0x00000030 */
#define BUS_GRF_GPIO4A_P_GPIO4A3_P_SHIFT                   (6U)
#define BUS_GRF_GPIO4A_P_GPIO4A3_P_MASK                    (0x3U << BUS_GRF_GPIO4A_P_GPIO4A3_P_SHIFT)                   /* 0x000000C0 */
#define BUS_GRF_GPIO4A_P_GPIO4A4_P_SHIFT                   (8U)
#define BUS_GRF_GPIO4A_P_GPIO4A4_P_MASK                    (0x3U << BUS_GRF_GPIO4A_P_GPIO4A4_P_SHIFT)                   /* 0x00000300 */
#define BUS_GRF_GPIO4A_P_GPIO4A5_P_SHIFT                   (10U)
#define BUS_GRF_GPIO4A_P_GPIO4A5_P_MASK                    (0x3U << BUS_GRF_GPIO4A_P_GPIO4A5_P_SHIFT)                   /* 0x00000C00 */
#define BUS_GRF_GPIO4A_P_GPIO4A6_P_SHIFT                   (12U)
#define BUS_GRF_GPIO4A_P_GPIO4A6_P_MASK                    (0x3U << BUS_GRF_GPIO4A_P_GPIO4A6_P_SHIFT)                   /* 0x00003000 */
#define BUS_GRF_GPIO4A_P_GPIO4A7_P_SHIFT                   (14U)
#define BUS_GRF_GPIO4A_P_GPIO4A7_P_MASK                    (0x3U << BUS_GRF_GPIO4A_P_GPIO4A7_P_SHIFT)                   /* 0x0000C000 */
/* GPIO4B_P */
#define BUS_GRF_GPIO4B_P_GPIO4B0_P_SHIFT                   (0U)
#define BUS_GRF_GPIO4B_P_GPIO4B0_P_MASK                    (0x3U << BUS_GRF_GPIO4B_P_GPIO4B0_P_SHIFT)                   /* 0x00000003 */
#define BUS_GRF_GPIO4B_P_GPIO4B1_P_SHIFT                   (2U)
#define BUS_GRF_GPIO4B_P_GPIO4B1_P_MASK                    (0x3U << BUS_GRF_GPIO4B_P_GPIO4B1_P_SHIFT)                   /* 0x0000000C */
#define BUS_GRF_GPIO4B_P_GPIO4B2_P_SHIFT                   (4U)
#define BUS_GRF_GPIO4B_P_GPIO4B2_P_MASK                    (0x3U << BUS_GRF_GPIO4B_P_GPIO4B2_P_SHIFT)                   /* 0x00000030 */
#define BUS_GRF_GPIO4B_P_GPIO4B3_P_SHIFT                   (6U)
#define BUS_GRF_GPIO4B_P_GPIO4B3_P_MASK                    (0x3U << BUS_GRF_GPIO4B_P_GPIO4B3_P_SHIFT)                   /* 0x000000C0 */
#define BUS_GRF_GPIO4B_P_GPIO4B4_P_SHIFT                   (8U)
#define BUS_GRF_GPIO4B_P_GPIO4B4_P_MASK                    (0x3U << BUS_GRF_GPIO4B_P_GPIO4B4_P_SHIFT)                   /* 0x00000300 */
#define BUS_GRF_GPIO4B_P_GPIO4B5_P_SHIFT                   (10U)
#define BUS_GRF_GPIO4B_P_GPIO4B5_P_MASK                    (0x3U << BUS_GRF_GPIO4B_P_GPIO4B5_P_SHIFT)                   /* 0x00000C00 */
#define BUS_GRF_GPIO4B_P_GPIO4B6_P_SHIFT                   (12U)
#define BUS_GRF_GPIO4B_P_GPIO4B6_P_MASK                    (0x3U << BUS_GRF_GPIO4B_P_GPIO4B6_P_SHIFT)                   /* 0x00003000 */
#define BUS_GRF_GPIO4B_P_GPIO4B7_P_SHIFT                   (14U)
#define BUS_GRF_GPIO4B_P_GPIO4B7_P_MASK                    (0x3U << BUS_GRF_GPIO4B_P_GPIO4B7_P_SHIFT)                   /* 0x0000C000 */
/* GPIO4C_P */
#define BUS_GRF_GPIO4C_P_GPIO4C0_P_SHIFT                   (0U)
#define BUS_GRF_GPIO4C_P_GPIO4C0_P_MASK                    (0x3U << BUS_GRF_GPIO4C_P_GPIO4C0_P_SHIFT)                   /* 0x00000003 */
#define BUS_GRF_GPIO4C_P_GPIO4C1_P_SHIFT                   (2U)
#define BUS_GRF_GPIO4C_P_GPIO4C1_P_MASK                    (0x3U << BUS_GRF_GPIO4C_P_GPIO4C1_P_SHIFT)                   /* 0x0000000C */
#define BUS_GRF_GPIO4C_P_GPIO4C2_P_SHIFT                   (4U)
#define BUS_GRF_GPIO4C_P_GPIO4C2_P_MASK                    (0x3U << BUS_GRF_GPIO4C_P_GPIO4C2_P_SHIFT)                   /* 0x00000030 */
#define BUS_GRF_GPIO4C_P_GPIO4C3_P_SHIFT                   (6U)
#define BUS_GRF_GPIO4C_P_GPIO4C3_P_MASK                    (0x3U << BUS_GRF_GPIO4C_P_GPIO4C3_P_SHIFT)                   /* 0x000000C0 */
#define BUS_GRF_GPIO4C_P_GPIO4C4_P_SHIFT                   (8U)
#define BUS_GRF_GPIO4C_P_GPIO4C4_P_MASK                    (0x3U << BUS_GRF_GPIO4C_P_GPIO4C4_P_SHIFT)                   /* 0x00000300 */
#define BUS_GRF_GPIO4C_P_GPIO4C5_P_SHIFT                   (10U)
#define BUS_GRF_GPIO4C_P_GPIO4C5_P_MASK                    (0x3U << BUS_GRF_GPIO4C_P_GPIO4C5_P_SHIFT)                   /* 0x00000C00 */
#define BUS_GRF_GPIO4C_P_GPIO4C6_P_SHIFT                   (12U)
#define BUS_GRF_GPIO4C_P_GPIO4C6_P_MASK                    (0x3U << BUS_GRF_GPIO4C_P_GPIO4C6_P_SHIFT)                   /* 0x00003000 */
#define BUS_GRF_GPIO4C_P_GPIO4C7_P_SHIFT                   (14U)
#define BUS_GRF_GPIO4C_P_GPIO4C7_P_MASK                    (0x3U << BUS_GRF_GPIO4C_P_GPIO4C7_P_SHIFT)                   /* 0x0000C000 */
/* GPIO1A_SR */
#define BUS_GRF_GPIO1A_SR_GPIO1A0_SR_SHIFT                 (0U)
#define BUS_GRF_GPIO1A_SR_GPIO1A0_SR_MASK                  (0x1U << BUS_GRF_GPIO1A_SR_GPIO1A0_SR_SHIFT)                 /* 0x00000001 */
#define BUS_GRF_GPIO1A_SR_GPIO1A1_SR_SHIFT                 (1U)
#define BUS_GRF_GPIO1A_SR_GPIO1A1_SR_MASK                  (0x1U << BUS_GRF_GPIO1A_SR_GPIO1A1_SR_SHIFT)                 /* 0x00000002 */
#define BUS_GRF_GPIO1A_SR_GPIO1A2_SR_SHIFT                 (2U)
#define BUS_GRF_GPIO1A_SR_GPIO1A2_SR_MASK                  (0x1U << BUS_GRF_GPIO1A_SR_GPIO1A2_SR_SHIFT)                 /* 0x00000004 */
#define BUS_GRF_GPIO1A_SR_GPIO1A3_SR_SHIFT                 (3U)
#define BUS_GRF_GPIO1A_SR_GPIO1A3_SR_MASK                  (0x1U << BUS_GRF_GPIO1A_SR_GPIO1A3_SR_SHIFT)                 /* 0x00000008 */
#define BUS_GRF_GPIO1A_SR_GPIO1A4_SR_SHIFT                 (4U)
#define BUS_GRF_GPIO1A_SR_GPIO1A4_SR_MASK                  (0x1U << BUS_GRF_GPIO1A_SR_GPIO1A4_SR_SHIFT)                 /* 0x00000010 */
#define BUS_GRF_GPIO1A_SR_GPIO1A5_SR_SHIFT                 (5U)
#define BUS_GRF_GPIO1A_SR_GPIO1A5_SR_MASK                  (0x1U << BUS_GRF_GPIO1A_SR_GPIO1A5_SR_SHIFT)                 /* 0x00000020 */
#define BUS_GRF_GPIO1A_SR_GPIO1A6_SR_SHIFT                 (6U)
#define BUS_GRF_GPIO1A_SR_GPIO1A6_SR_MASK                  (0x1U << BUS_GRF_GPIO1A_SR_GPIO1A6_SR_SHIFT)                 /* 0x00000040 */
#define BUS_GRF_GPIO1A_SR_GPIO1A7_SR_SHIFT                 (7U)
#define BUS_GRF_GPIO1A_SR_GPIO1A7_SR_MASK                  (0x1U << BUS_GRF_GPIO1A_SR_GPIO1A7_SR_SHIFT)                 /* 0x00000080 */
/* GPIO1B_SR */
#define BUS_GRF_GPIO1B_SR_GPIO1B0_SR_SHIFT                 (0U)
#define BUS_GRF_GPIO1B_SR_GPIO1B0_SR_MASK                  (0x1U << BUS_GRF_GPIO1B_SR_GPIO1B0_SR_SHIFT)                 /* 0x00000001 */
#define BUS_GRF_GPIO1B_SR_GPIO1B1_SR_SHIFT                 (1U)
#define BUS_GRF_GPIO1B_SR_GPIO1B1_SR_MASK                  (0x1U << BUS_GRF_GPIO1B_SR_GPIO1B1_SR_SHIFT)                 /* 0x00000002 */
#define BUS_GRF_GPIO1B_SR_GPIO1B2_SR_SHIFT                 (2U)
#define BUS_GRF_GPIO1B_SR_GPIO1B2_SR_MASK                  (0x1U << BUS_GRF_GPIO1B_SR_GPIO1B2_SR_SHIFT)                 /* 0x00000004 */
#define BUS_GRF_GPIO1B_SR_GPIO1B3_SR_SHIFT                 (3U)
#define BUS_GRF_GPIO1B_SR_GPIO1B3_SR_MASK                  (0x1U << BUS_GRF_GPIO1B_SR_GPIO1B3_SR_SHIFT)                 /* 0x00000008 */
#define BUS_GRF_GPIO1B_SR_GPIO1B4_SR_SHIFT                 (4U)
#define BUS_GRF_GPIO1B_SR_GPIO1B4_SR_MASK                  (0x1U << BUS_GRF_GPIO1B_SR_GPIO1B4_SR_SHIFT)                 /* 0x00000010 */
#define BUS_GRF_GPIO1B_SR_GPIO1B5_SR_SHIFT                 (5U)
#define BUS_GRF_GPIO1B_SR_GPIO1B5_SR_MASK                  (0x1U << BUS_GRF_GPIO1B_SR_GPIO1B5_SR_SHIFT)                 /* 0x00000020 */
#define BUS_GRF_GPIO1B_SR_GPIO1B6_SR_SHIFT                 (6U)
#define BUS_GRF_GPIO1B_SR_GPIO1B6_SR_MASK                  (0x1U << BUS_GRF_GPIO1B_SR_GPIO1B6_SR_SHIFT)                 /* 0x00000040 */
#define BUS_GRF_GPIO1B_SR_GPIO1B7_SR_SHIFT                 (7U)
#define BUS_GRF_GPIO1B_SR_GPIO1B7_SR_MASK                  (0x1U << BUS_GRF_GPIO1B_SR_GPIO1B7_SR_SHIFT)                 /* 0x00000080 */
/* GPIO2A_SR */
#define BUS_GRF_GPIO2A_SR_GPIO2A0_SR_SHIFT                 (0U)
#define BUS_GRF_GPIO2A_SR_GPIO2A0_SR_MASK                  (0x1U << BUS_GRF_GPIO2A_SR_GPIO2A0_SR_SHIFT)                 /* 0x00000001 */
#define BUS_GRF_GPIO2A_SR_GPIO2A1_SR_SHIFT                 (1U)
#define BUS_GRF_GPIO2A_SR_GPIO2A1_SR_MASK                  (0x1U << BUS_GRF_GPIO2A_SR_GPIO2A1_SR_SHIFT)                 /* 0x00000002 */
#define BUS_GRF_GPIO2A_SR_GPIO2A2_SR_SHIFT                 (2U)
#define BUS_GRF_GPIO2A_SR_GPIO2A2_SR_MASK                  (0x1U << BUS_GRF_GPIO2A_SR_GPIO2A2_SR_SHIFT)                 /* 0x00000004 */
#define BUS_GRF_GPIO2A_SR_GPIO2A3_SR_SHIFT                 (3U)
#define BUS_GRF_GPIO2A_SR_GPIO2A3_SR_MASK                  (0x1U << BUS_GRF_GPIO2A_SR_GPIO2A3_SR_SHIFT)                 /* 0x00000008 */
#define BUS_GRF_GPIO2A_SR_GPIO2A4_SR_SHIFT                 (4U)
#define BUS_GRF_GPIO2A_SR_GPIO2A4_SR_MASK                  (0x1U << BUS_GRF_GPIO2A_SR_GPIO2A4_SR_SHIFT)                 /* 0x00000010 */
#define BUS_GRF_GPIO2A_SR_GPIO2A5_SR_SHIFT                 (5U)
#define BUS_GRF_GPIO2A_SR_GPIO2A5_SR_MASK                  (0x1U << BUS_GRF_GPIO2A_SR_GPIO2A5_SR_SHIFT)                 /* 0x00000020 */
#define BUS_GRF_GPIO2A_SR_GPIO2A6_SR_SHIFT                 (6U)
#define BUS_GRF_GPIO2A_SR_GPIO2A6_SR_MASK                  (0x1U << BUS_GRF_GPIO2A_SR_GPIO2A6_SR_SHIFT)                 /* 0x00000040 */
#define BUS_GRF_GPIO2A_SR_GPIO2A7_SR_SHIFT                 (7U)
#define BUS_GRF_GPIO2A_SR_GPIO2A7_SR_MASK                  (0x1U << BUS_GRF_GPIO2A_SR_GPIO2A7_SR_SHIFT)                 /* 0x00000080 */
/* GPIO2B_SR */
#define BUS_GRF_GPIO2B_SR_GPIO2B0_SR_SHIFT                 (0U)
#define BUS_GRF_GPIO2B_SR_GPIO2B0_SR_MASK                  (0x1U << BUS_GRF_GPIO2B_SR_GPIO2B0_SR_SHIFT)                 /* 0x00000001 */
#define BUS_GRF_GPIO2B_SR_GPIO2B1_SR_SHIFT                 (1U)
#define BUS_GRF_GPIO2B_SR_GPIO2B1_SR_MASK                  (0x1U << BUS_GRF_GPIO2B_SR_GPIO2B1_SR_SHIFT)                 /* 0x00000002 */
#define BUS_GRF_GPIO2B_SR_GPIO2B2_SR_SHIFT                 (2U)
#define BUS_GRF_GPIO2B_SR_GPIO2B2_SR_MASK                  (0x1U << BUS_GRF_GPIO2B_SR_GPIO2B2_SR_SHIFT)                 /* 0x00000004 */
#define BUS_GRF_GPIO2B_SR_GPIO2B3_SR_SHIFT                 (3U)
#define BUS_GRF_GPIO2B_SR_GPIO2B3_SR_MASK                  (0x1U << BUS_GRF_GPIO2B_SR_GPIO2B3_SR_SHIFT)                 /* 0x00000008 */
#define BUS_GRF_GPIO2B_SR_GPIO2B4_SR_SHIFT                 (4U)
#define BUS_GRF_GPIO2B_SR_GPIO2B4_SR_MASK                  (0x1U << BUS_GRF_GPIO2B_SR_GPIO2B4_SR_SHIFT)                 /* 0x00000010 */
#define BUS_GRF_GPIO2B_SR_GPIO2B5_SR_SHIFT                 (5U)
#define BUS_GRF_GPIO2B_SR_GPIO2B5_SR_MASK                  (0x1U << BUS_GRF_GPIO2B_SR_GPIO2B5_SR_SHIFT)                 /* 0x00000020 */
#define BUS_GRF_GPIO2B_SR_GPIO2B6_SR_SHIFT                 (6U)
#define BUS_GRF_GPIO2B_SR_GPIO2B6_SR_MASK                  (0x1U << BUS_GRF_GPIO2B_SR_GPIO2B6_SR_SHIFT)                 /* 0x00000040 */
#define BUS_GRF_GPIO2B_SR_GPIO2B7_SR_SHIFT                 (7U)
#define BUS_GRF_GPIO2B_SR_GPIO2B7_SR_MASK                  (0x1U << BUS_GRF_GPIO2B_SR_GPIO2B7_SR_SHIFT)                 /* 0x00000080 */
/* GPIO2C_SR */
#define BUS_GRF_GPIO2C_SR_GPIO2C0_SR_SHIFT                 (0U)
#define BUS_GRF_GPIO2C_SR_GPIO2C0_SR_MASK                  (0x1U << BUS_GRF_GPIO2C_SR_GPIO2C0_SR_SHIFT)                 /* 0x00000001 */
#define BUS_GRF_GPIO2C_SR_GPIO2C1_SR_SHIFT                 (1U)
#define BUS_GRF_GPIO2C_SR_GPIO2C1_SR_MASK                  (0x1U << BUS_GRF_GPIO2C_SR_GPIO2C1_SR_SHIFT)                 /* 0x00000002 */
#define BUS_GRF_GPIO2C_SR_GPIO2C2_SR_SHIFT                 (2U)
#define BUS_GRF_GPIO2C_SR_GPIO2C2_SR_MASK                  (0x1U << BUS_GRF_GPIO2C_SR_GPIO2C2_SR_SHIFT)                 /* 0x00000004 */
#define BUS_GRF_GPIO2C_SR_GPIO2C3_SR_SHIFT                 (3U)
#define BUS_GRF_GPIO2C_SR_GPIO2C3_SR_MASK                  (0x1U << BUS_GRF_GPIO2C_SR_GPIO2C3_SR_SHIFT)                 /* 0x00000008 */
#define BUS_GRF_GPIO2C_SR_GPIO2C4_SR_SHIFT                 (4U)
#define BUS_GRF_GPIO2C_SR_GPIO2C4_SR_MASK                  (0x1U << BUS_GRF_GPIO2C_SR_GPIO2C4_SR_SHIFT)                 /* 0x00000010 */
#define BUS_GRF_GPIO2C_SR_GPIO2C5_SR_SHIFT                 (5U)
#define BUS_GRF_GPIO2C_SR_GPIO2C5_SR_MASK                  (0x1U << BUS_GRF_GPIO2C_SR_GPIO2C5_SR_SHIFT)                 /* 0x00000020 */
#define BUS_GRF_GPIO2C_SR_GPIO2C6_SR_SHIFT                 (6U)
#define BUS_GRF_GPIO2C_SR_GPIO2C6_SR_MASK                  (0x1U << BUS_GRF_GPIO2C_SR_GPIO2C6_SR_SHIFT)                 /* 0x00000040 */
#define BUS_GRF_GPIO2C_SR_GPIO2C7_SR_SHIFT                 (7U)
#define BUS_GRF_GPIO2C_SR_GPIO2C7_SR_MASK                  (0x1U << BUS_GRF_GPIO2C_SR_GPIO2C7_SR_SHIFT)                 /* 0x00000080 */
/* GPIO2D_SR */
#define BUS_GRF_GPIO2D_SR_GPIO2D0_SR_SHIFT                 (0U)
#define BUS_GRF_GPIO2D_SR_GPIO2D0_SR_MASK                  (0x1U << BUS_GRF_GPIO2D_SR_GPIO2D0_SR_SHIFT)                 /* 0x00000001 */
#define BUS_GRF_GPIO2D_SR_GPIO2D1_SR_SHIFT                 (1U)
#define BUS_GRF_GPIO2D_SR_GPIO2D1_SR_MASK                  (0x1U << BUS_GRF_GPIO2D_SR_GPIO2D1_SR_SHIFT)                 /* 0x00000002 */
#define BUS_GRF_GPIO2D_SR_GPIO2D2_SR_SHIFT                 (2U)
#define BUS_GRF_GPIO2D_SR_GPIO2D2_SR_MASK                  (0x1U << BUS_GRF_GPIO2D_SR_GPIO2D2_SR_SHIFT)                 /* 0x00000004 */
#define BUS_GRF_GPIO2D_SR_GPIO2D3_SR_SHIFT                 (3U)
#define BUS_GRF_GPIO2D_SR_GPIO2D3_SR_MASK                  (0x1U << BUS_GRF_GPIO2D_SR_GPIO2D3_SR_SHIFT)                 /* 0x00000008 */
#define BUS_GRF_GPIO2D_SR_GPIO2D4_SR_SHIFT                 (4U)
#define BUS_GRF_GPIO2D_SR_GPIO2D4_SR_MASK                  (0x1U << BUS_GRF_GPIO2D_SR_GPIO2D4_SR_SHIFT)                 /* 0x00000010 */
#define BUS_GRF_GPIO2D_SR_GPIO2D5_SR_SHIFT                 (5U)
#define BUS_GRF_GPIO2D_SR_GPIO2D5_SR_MASK                  (0x1U << BUS_GRF_GPIO2D_SR_GPIO2D5_SR_SHIFT)                 /* 0x00000020 */
#define BUS_GRF_GPIO2D_SR_GPIO2D6_SR_SHIFT                 (6U)
#define BUS_GRF_GPIO2D_SR_GPIO2D6_SR_MASK                  (0x1U << BUS_GRF_GPIO2D_SR_GPIO2D6_SR_SHIFT)                 /* 0x00000040 */
#define BUS_GRF_GPIO2D_SR_GPIO2D7_SR_SHIFT                 (7U)
#define BUS_GRF_GPIO2D_SR_GPIO2D7_SR_MASK                  (0x1U << BUS_GRF_GPIO2D_SR_GPIO2D7_SR_SHIFT)                 /* 0x00000080 */
/* GPIO3A_SR */
#define BUS_GRF_GPIO3A_SR_GPIO3A0_SR_SHIFT                 (0U)
#define BUS_GRF_GPIO3A_SR_GPIO3A0_SR_MASK                  (0x1U << BUS_GRF_GPIO3A_SR_GPIO3A0_SR_SHIFT)                 /* 0x00000001 */
#define BUS_GRF_GPIO3A_SR_GPIO3A1_SR_SHIFT                 (1U)
#define BUS_GRF_GPIO3A_SR_GPIO3A1_SR_MASK                  (0x1U << BUS_GRF_GPIO3A_SR_GPIO3A1_SR_SHIFT)                 /* 0x00000002 */
#define BUS_GRF_GPIO3A_SR_GPIO3A2_SR_SHIFT                 (2U)
#define BUS_GRF_GPIO3A_SR_GPIO3A2_SR_MASK                  (0x1U << BUS_GRF_GPIO3A_SR_GPIO3A2_SR_SHIFT)                 /* 0x00000004 */
#define BUS_GRF_GPIO3A_SR_GPIO3A3_SR_SHIFT                 (3U)
#define BUS_GRF_GPIO3A_SR_GPIO3A3_SR_MASK                  (0x1U << BUS_GRF_GPIO3A_SR_GPIO3A3_SR_SHIFT)                 /* 0x00000008 */
#define BUS_GRF_GPIO3A_SR_GPIO3A4_SR_SHIFT                 (4U)
#define BUS_GRF_GPIO3A_SR_GPIO3A4_SR_MASK                  (0x1U << BUS_GRF_GPIO3A_SR_GPIO3A4_SR_SHIFT)                 /* 0x00000010 */
#define BUS_GRF_GPIO3A_SR_GPIO3A5_SR_SHIFT                 (5U)
#define BUS_GRF_GPIO3A_SR_GPIO3A5_SR_MASK                  (0x1U << BUS_GRF_GPIO3A_SR_GPIO3A5_SR_SHIFT)                 /* 0x00000020 */
#define BUS_GRF_GPIO3A_SR_GPIO3A6_SR_SHIFT                 (6U)
#define BUS_GRF_GPIO3A_SR_GPIO3A6_SR_MASK                  (0x1U << BUS_GRF_GPIO3A_SR_GPIO3A6_SR_SHIFT)                 /* 0x00000040 */
#define BUS_GRF_GPIO3A_SR_GPIO3A7_SR_SHIFT                 (7U)
#define BUS_GRF_GPIO3A_SR_GPIO3A7_SR_MASK                  (0x1U << BUS_GRF_GPIO3A_SR_GPIO3A7_SR_SHIFT)                 /* 0x00000080 */
/* GPIO3B_SR */
#define BUS_GRF_GPIO3B_SR_GPIO3B0_SR_SHIFT                 (0U)
#define BUS_GRF_GPIO3B_SR_GPIO3B0_SR_MASK                  (0x1U << BUS_GRF_GPIO3B_SR_GPIO3B0_SR_SHIFT)                 /* 0x00000001 */
#define BUS_GRF_GPIO3B_SR_GPIO3B1_SR_SHIFT                 (1U)
#define BUS_GRF_GPIO3B_SR_GPIO3B1_SR_MASK                  (0x1U << BUS_GRF_GPIO3B_SR_GPIO3B1_SR_SHIFT)                 /* 0x00000002 */
#define BUS_GRF_GPIO3B_SR_GPIO3B2_SR_SHIFT                 (2U)
#define BUS_GRF_GPIO3B_SR_GPIO3B2_SR_MASK                  (0x1U << BUS_GRF_GPIO3B_SR_GPIO3B2_SR_SHIFT)                 /* 0x00000004 */
#define BUS_GRF_GPIO3B_SR_GPIO3B3_SR_SHIFT                 (3U)
#define BUS_GRF_GPIO3B_SR_GPIO3B3_SR_MASK                  (0x1U << BUS_GRF_GPIO3B_SR_GPIO3B3_SR_SHIFT)                 /* 0x00000008 */
#define BUS_GRF_GPIO3B_SR_GPIO3B4_SR_SHIFT                 (4U)
#define BUS_GRF_GPIO3B_SR_GPIO3B4_SR_MASK                  (0x1U << BUS_GRF_GPIO3B_SR_GPIO3B4_SR_SHIFT)                 /* 0x00000010 */
#define BUS_GRF_GPIO3B_SR_GPIO3B5_SR_SHIFT                 (5U)
#define BUS_GRF_GPIO3B_SR_GPIO3B5_SR_MASK                  (0x1U << BUS_GRF_GPIO3B_SR_GPIO3B5_SR_SHIFT)                 /* 0x00000020 */
#define BUS_GRF_GPIO3B_SR_GPIO3B6_SR_SHIFT                 (6U)
#define BUS_GRF_GPIO3B_SR_GPIO3B6_SR_MASK                  (0x1U << BUS_GRF_GPIO3B_SR_GPIO3B6_SR_SHIFT)                 /* 0x00000040 */
#define BUS_GRF_GPIO3B_SR_GPIO3B7_SR_SHIFT                 (7U)
#define BUS_GRF_GPIO3B_SR_GPIO3B7_SR_MASK                  (0x1U << BUS_GRF_GPIO3B_SR_GPIO3B7_SR_SHIFT)                 /* 0x00000080 */
/* GPIO3C_SR */
#define BUS_GRF_GPIO3C_SR_GPIO3C0_SR_SHIFT                 (0U)
#define BUS_GRF_GPIO3C_SR_GPIO3C0_SR_MASK                  (0x1U << BUS_GRF_GPIO3C_SR_GPIO3C0_SR_SHIFT)                 /* 0x00000001 */
#define BUS_GRF_GPIO3C_SR_GPIO3C1_SR_SHIFT                 (1U)
#define BUS_GRF_GPIO3C_SR_GPIO3C1_SR_MASK                  (0x1U << BUS_GRF_GPIO3C_SR_GPIO3C1_SR_SHIFT)                 /* 0x00000002 */
#define BUS_GRF_GPIO3C_SR_GPIO3C2_SR_SHIFT                 (2U)
#define BUS_GRF_GPIO3C_SR_GPIO3C2_SR_MASK                  (0x1U << BUS_GRF_GPIO3C_SR_GPIO3C2_SR_SHIFT)                 /* 0x00000004 */
#define BUS_GRF_GPIO3C_SR_GPIO3C3_SR_SHIFT                 (3U)
#define BUS_GRF_GPIO3C_SR_GPIO3C3_SR_MASK                  (0x1U << BUS_GRF_GPIO3C_SR_GPIO3C3_SR_SHIFT)                 /* 0x00000008 */
#define BUS_GRF_GPIO3C_SR_GPIO3C4_SR_SHIFT                 (4U)
#define BUS_GRF_GPIO3C_SR_GPIO3C4_SR_MASK                  (0x1U << BUS_GRF_GPIO3C_SR_GPIO3C4_SR_SHIFT)                 /* 0x00000010 */
#define BUS_GRF_GPIO3C_SR_GPIO3C5_SR_SHIFT                 (5U)
#define BUS_GRF_GPIO3C_SR_GPIO3C5_SR_MASK                  (0x1U << BUS_GRF_GPIO3C_SR_GPIO3C5_SR_SHIFT)                 /* 0x00000020 */
#define BUS_GRF_GPIO3C_SR_GPIO3C6_SR_SHIFT                 (6U)
#define BUS_GRF_GPIO3C_SR_GPIO3C6_SR_MASK                  (0x1U << BUS_GRF_GPIO3C_SR_GPIO3C6_SR_SHIFT)                 /* 0x00000040 */
#define BUS_GRF_GPIO3C_SR_GPIO3C7_SR_SHIFT                 (7U)
#define BUS_GRF_GPIO3C_SR_GPIO3C7_SR_MASK                  (0x1U << BUS_GRF_GPIO3C_SR_GPIO3C7_SR_SHIFT)                 /* 0x00000080 */
/* GPIO3D_SR */
#define BUS_GRF_GPIO3D_SR_GPIO3D0_SR_SHIFT                 (0U)
#define BUS_GRF_GPIO3D_SR_GPIO3D0_SR_MASK                  (0x1U << BUS_GRF_GPIO3D_SR_GPIO3D0_SR_SHIFT)                 /* 0x00000001 */
#define BUS_GRF_GPIO3D_SR_GPIO3D1_SR_SHIFT                 (1U)
#define BUS_GRF_GPIO3D_SR_GPIO3D1_SR_MASK                  (0x1U << BUS_GRF_GPIO3D_SR_GPIO3D1_SR_SHIFT)                 /* 0x00000002 */
#define BUS_GRF_GPIO3D_SR_GPIO3D2_SR_SHIFT                 (2U)
#define BUS_GRF_GPIO3D_SR_GPIO3D2_SR_MASK                  (0x1U << BUS_GRF_GPIO3D_SR_GPIO3D2_SR_SHIFT)                 /* 0x00000004 */
#define BUS_GRF_GPIO3D_SR_GPIO3D3_SR_SHIFT                 (3U)
#define BUS_GRF_GPIO3D_SR_GPIO3D3_SR_MASK                  (0x1U << BUS_GRF_GPIO3D_SR_GPIO3D3_SR_SHIFT)                 /* 0x00000008 */
#define BUS_GRF_GPIO3D_SR_GPIO3D4_SR_SHIFT                 (4U)
#define BUS_GRF_GPIO3D_SR_GPIO3D4_SR_MASK                  (0x1U << BUS_GRF_GPIO3D_SR_GPIO3D4_SR_SHIFT)                 /* 0x00000010 */
#define BUS_GRF_GPIO3D_SR_GPIO3D5_SR_SHIFT                 (5U)
#define BUS_GRF_GPIO3D_SR_GPIO3D5_SR_MASK                  (0x1U << BUS_GRF_GPIO3D_SR_GPIO3D5_SR_SHIFT)                 /* 0x00000020 */
#define BUS_GRF_GPIO3D_SR_GPIO3D6_SR_SHIFT                 (6U)
#define BUS_GRF_GPIO3D_SR_GPIO3D6_SR_MASK                  (0x1U << BUS_GRF_GPIO3D_SR_GPIO3D6_SR_SHIFT)                 /* 0x00000040 */
#define BUS_GRF_GPIO3D_SR_GPIO3D7_SR_SHIFT                 (7U)
#define BUS_GRF_GPIO3D_SR_GPIO3D7_SR_MASK                  (0x1U << BUS_GRF_GPIO3D_SR_GPIO3D7_SR_SHIFT)                 /* 0x00000080 */
/* GPIO4A_SR */
#define BUS_GRF_GPIO4A_SR_GPIO4A0_SR_SHIFT                 (0U)
#define BUS_GRF_GPIO4A_SR_GPIO4A0_SR_MASK                  (0x1U << BUS_GRF_GPIO4A_SR_GPIO4A0_SR_SHIFT)                 /* 0x00000001 */
#define BUS_GRF_GPIO4A_SR_GPIO4A1_SR_SHIFT                 (1U)
#define BUS_GRF_GPIO4A_SR_GPIO4A1_SR_MASK                  (0x1U << BUS_GRF_GPIO4A_SR_GPIO4A1_SR_SHIFT)                 /* 0x00000002 */
#define BUS_GRF_GPIO4A_SR_GPIO4A2_SR_SHIFT                 (2U)
#define BUS_GRF_GPIO4A_SR_GPIO4A2_SR_MASK                  (0x1U << BUS_GRF_GPIO4A_SR_GPIO4A2_SR_SHIFT)                 /* 0x00000004 */
#define BUS_GRF_GPIO4A_SR_GPIO4A3_SR_SHIFT                 (3U)
#define BUS_GRF_GPIO4A_SR_GPIO4A3_SR_MASK                  (0x1U << BUS_GRF_GPIO4A_SR_GPIO4A3_SR_SHIFT)                 /* 0x00000008 */
#define BUS_GRF_GPIO4A_SR_GPIO4A4_SR_SHIFT                 (4U)
#define BUS_GRF_GPIO4A_SR_GPIO4A4_SR_MASK                  (0x1U << BUS_GRF_GPIO4A_SR_GPIO4A4_SR_SHIFT)                 /* 0x00000010 */
#define BUS_GRF_GPIO4A_SR_GPIO4A5_SR_SHIFT                 (5U)
#define BUS_GRF_GPIO4A_SR_GPIO4A5_SR_MASK                  (0x1U << BUS_GRF_GPIO4A_SR_GPIO4A5_SR_SHIFT)                 /* 0x00000020 */
#define BUS_GRF_GPIO4A_SR_GPIO4A6_SR_SHIFT                 (6U)
#define BUS_GRF_GPIO4A_SR_GPIO4A6_SR_MASK                  (0x1U << BUS_GRF_GPIO4A_SR_GPIO4A6_SR_SHIFT)                 /* 0x00000040 */
#define BUS_GRF_GPIO4A_SR_GPIO4A7_SR_SHIFT                 (7U)
#define BUS_GRF_GPIO4A_SR_GPIO4A7_SR_MASK                  (0x1U << BUS_GRF_GPIO4A_SR_GPIO4A7_SR_SHIFT)                 /* 0x00000080 */
/* GPIO4B_SR */
#define BUS_GRF_GPIO4B_SR_GPIO4B0_SR_SHIFT                 (0U)
#define BUS_GRF_GPIO4B_SR_GPIO4B0_SR_MASK                  (0x1U << BUS_GRF_GPIO4B_SR_GPIO4B0_SR_SHIFT)                 /* 0x00000001 */
#define BUS_GRF_GPIO4B_SR_GPIO4B1_SR_SHIFT                 (1U)
#define BUS_GRF_GPIO4B_SR_GPIO4B1_SR_MASK                  (0x1U << BUS_GRF_GPIO4B_SR_GPIO4B1_SR_SHIFT)                 /* 0x00000002 */
#define BUS_GRF_GPIO4B_SR_GPIO4B2_SR_SHIFT                 (2U)
#define BUS_GRF_GPIO4B_SR_GPIO4B2_SR_MASK                  (0x1U << BUS_GRF_GPIO4B_SR_GPIO4B2_SR_SHIFT)                 /* 0x00000004 */
#define BUS_GRF_GPIO4B_SR_GPIO4B3_SR_SHIFT                 (3U)
#define BUS_GRF_GPIO4B_SR_GPIO4B3_SR_MASK                  (0x1U << BUS_GRF_GPIO4B_SR_GPIO4B3_SR_SHIFT)                 /* 0x00000008 */
#define BUS_GRF_GPIO4B_SR_GPIO4B4_SR_SHIFT                 (4U)
#define BUS_GRF_GPIO4B_SR_GPIO4B4_SR_MASK                  (0x1U << BUS_GRF_GPIO4B_SR_GPIO4B4_SR_SHIFT)                 /* 0x00000010 */
#define BUS_GRF_GPIO4B_SR_GPIO4B5_SR_SHIFT                 (5U)
#define BUS_GRF_GPIO4B_SR_GPIO4B5_SR_MASK                  (0x1U << BUS_GRF_GPIO4B_SR_GPIO4B5_SR_SHIFT)                 /* 0x00000020 */
#define BUS_GRF_GPIO4B_SR_GPIO4B6_SR_SHIFT                 (6U)
#define BUS_GRF_GPIO4B_SR_GPIO4B6_SR_MASK                  (0x1U << BUS_GRF_GPIO4B_SR_GPIO4B6_SR_SHIFT)                 /* 0x00000040 */
#define BUS_GRF_GPIO4B_SR_GPIO4B7_SR_SHIFT                 (7U)
#define BUS_GRF_GPIO4B_SR_GPIO4B7_SR_MASK                  (0x1U << BUS_GRF_GPIO4B_SR_GPIO4B7_SR_SHIFT)                 /* 0x00000080 */
/* GPIO4C_SR */
#define BUS_GRF_GPIO4C_SR_GPIO4C0_SR_SHIFT                 (0U)
#define BUS_GRF_GPIO4C_SR_GPIO4C0_SR_MASK                  (0x1U << BUS_GRF_GPIO4C_SR_GPIO4C0_SR_SHIFT)                 /* 0x00000001 */
#define BUS_GRF_GPIO4C_SR_GPIO4C1_SR_SHIFT                 (1U)
#define BUS_GRF_GPIO4C_SR_GPIO4C1_SR_MASK                  (0x1U << BUS_GRF_GPIO4C_SR_GPIO4C1_SR_SHIFT)                 /* 0x00000002 */
#define BUS_GRF_GPIO4C_SR_GPIO4C2_SR_SHIFT                 (2U)
#define BUS_GRF_GPIO4C_SR_GPIO4C2_SR_MASK                  (0x1U << BUS_GRF_GPIO4C_SR_GPIO4C2_SR_SHIFT)                 /* 0x00000004 */
#define BUS_GRF_GPIO4C_SR_GPIO4C3_SR_SHIFT                 (3U)
#define BUS_GRF_GPIO4C_SR_GPIO4C3_SR_MASK                  (0x1U << BUS_GRF_GPIO4C_SR_GPIO4C3_SR_SHIFT)                 /* 0x00000008 */
#define BUS_GRF_GPIO4C_SR_GPIO4C4_SR_SHIFT                 (4U)
#define BUS_GRF_GPIO4C_SR_GPIO4C4_SR_MASK                  (0x1U << BUS_GRF_GPIO4C_SR_GPIO4C4_SR_SHIFT)                 /* 0x00000010 */
#define BUS_GRF_GPIO4C_SR_GPIO4C5_SR_SHIFT                 (5U)
#define BUS_GRF_GPIO4C_SR_GPIO4C5_SR_MASK                  (0x1U << BUS_GRF_GPIO4C_SR_GPIO4C5_SR_SHIFT)                 /* 0x00000020 */
#define BUS_GRF_GPIO4C_SR_GPIO4C6_SR_SHIFT                 (6U)
#define BUS_GRF_GPIO4C_SR_GPIO4C6_SR_MASK                  (0x1U << BUS_GRF_GPIO4C_SR_GPIO4C6_SR_SHIFT)                 /* 0x00000040 */
#define BUS_GRF_GPIO4C_SR_GPIO4C7_SR_SHIFT                 (7U)
#define BUS_GRF_GPIO4C_SR_GPIO4C7_SR_MASK                  (0x1U << BUS_GRF_GPIO4C_SR_GPIO4C7_SR_SHIFT)                 /* 0x00000080 */
/* GPIO1A_SMT */
#define BUS_GRF_GPIO1A_SMT_GPIO1A0_SMT_SHIFT               (0U)
#define BUS_GRF_GPIO1A_SMT_GPIO1A0_SMT_MASK                (0x1U << BUS_GRF_GPIO1A_SMT_GPIO1A0_SMT_SHIFT)               /* 0x00000001 */
#define BUS_GRF_GPIO1A_SMT_GPIO1A1_SMT_SHIFT               (1U)
#define BUS_GRF_GPIO1A_SMT_GPIO1A1_SMT_MASK                (0x1U << BUS_GRF_GPIO1A_SMT_GPIO1A1_SMT_SHIFT)               /* 0x00000002 */
#define BUS_GRF_GPIO1A_SMT_GPIO1A2_SMT_SHIFT               (2U)
#define BUS_GRF_GPIO1A_SMT_GPIO1A2_SMT_MASK                (0x1U << BUS_GRF_GPIO1A_SMT_GPIO1A2_SMT_SHIFT)               /* 0x00000004 */
#define BUS_GRF_GPIO1A_SMT_GPIO1A3_SMT_SHIFT               (3U)
#define BUS_GRF_GPIO1A_SMT_GPIO1A3_SMT_MASK                (0x1U << BUS_GRF_GPIO1A_SMT_GPIO1A3_SMT_SHIFT)               /* 0x00000008 */
#define BUS_GRF_GPIO1A_SMT_GPIO1A4_SMT_SHIFT               (4U)
#define BUS_GRF_GPIO1A_SMT_GPIO1A4_SMT_MASK                (0x1U << BUS_GRF_GPIO1A_SMT_GPIO1A4_SMT_SHIFT)               /* 0x00000010 */
#define BUS_GRF_GPIO1A_SMT_GPIO1A5_SMT_SHIFT               (5U)
#define BUS_GRF_GPIO1A_SMT_GPIO1A5_SMT_MASK                (0x1U << BUS_GRF_GPIO1A_SMT_GPIO1A5_SMT_SHIFT)               /* 0x00000020 */
#define BUS_GRF_GPIO1A_SMT_GPIO1A6_SMT_SHIFT               (6U)
#define BUS_GRF_GPIO1A_SMT_GPIO1A6_SMT_MASK                (0x1U << BUS_GRF_GPIO1A_SMT_GPIO1A6_SMT_SHIFT)               /* 0x00000040 */
#define BUS_GRF_GPIO1A_SMT_GPIO1A7_SMT_SHIFT               (7U)
#define BUS_GRF_GPIO1A_SMT_GPIO1A7_SMT_MASK                (0x1U << BUS_GRF_GPIO1A_SMT_GPIO1A7_SMT_SHIFT)               /* 0x00000080 */
/* GPIO1B_SMT */
#define BUS_GRF_GPIO1B_SMT_GPIO1B0_SMT_SHIFT               (0U)
#define BUS_GRF_GPIO1B_SMT_GPIO1B0_SMT_MASK                (0x1U << BUS_GRF_GPIO1B_SMT_GPIO1B0_SMT_SHIFT)               /* 0x00000001 */
#define BUS_GRF_GPIO1B_SMT_GPIO1B1_SMT_SHIFT               (1U)
#define BUS_GRF_GPIO1B_SMT_GPIO1B1_SMT_MASK                (0x1U << BUS_GRF_GPIO1B_SMT_GPIO1B1_SMT_SHIFT)               /* 0x00000002 */
#define BUS_GRF_GPIO1B_SMT_GPIO1B2_SMT_SHIFT               (2U)
#define BUS_GRF_GPIO1B_SMT_GPIO1B2_SMT_MASK                (0x1U << BUS_GRF_GPIO1B_SMT_GPIO1B2_SMT_SHIFT)               /* 0x00000004 */
#define BUS_GRF_GPIO1B_SMT_GPIO1B3_SMT_SHIFT               (3U)
#define BUS_GRF_GPIO1B_SMT_GPIO1B3_SMT_MASK                (0x1U << BUS_GRF_GPIO1B_SMT_GPIO1B3_SMT_SHIFT)               /* 0x00000008 */
#define BUS_GRF_GPIO1B_SMT_GPIO1B4_SMT_SHIFT               (4U)
#define BUS_GRF_GPIO1B_SMT_GPIO1B4_SMT_MASK                (0x1U << BUS_GRF_GPIO1B_SMT_GPIO1B4_SMT_SHIFT)               /* 0x00000010 */
#define BUS_GRF_GPIO1B_SMT_GPIO1B5_SMT_SHIFT               (5U)
#define BUS_GRF_GPIO1B_SMT_GPIO1B5_SMT_MASK                (0x1U << BUS_GRF_GPIO1B_SMT_GPIO1B5_SMT_SHIFT)               /* 0x00000020 */
#define BUS_GRF_GPIO1B_SMT_GPIO1B6_SMT_SHIFT               (6U)
#define BUS_GRF_GPIO1B_SMT_GPIO1B6_SMT_MASK                (0x1U << BUS_GRF_GPIO1B_SMT_GPIO1B6_SMT_SHIFT)               /* 0x00000040 */
#define BUS_GRF_GPIO1B_SMT_GPIO1B7_SMT_SHIFT               (7U)
#define BUS_GRF_GPIO1B_SMT_GPIO1B7_SMT_MASK                (0x1U << BUS_GRF_GPIO1B_SMT_GPIO1B7_SMT_SHIFT)               /* 0x00000080 */
/* GPIO1C_SMT */
#define BUS_GRF_GPIO1C_SMT_GPIO1C0_SMT_SHIFT               (0U)
#define BUS_GRF_GPIO1C_SMT_GPIO1C0_SMT_MASK                (0x1U << BUS_GRF_GPIO1C_SMT_GPIO1C0_SMT_SHIFT)               /* 0x00000001 */
#define BUS_GRF_GPIO1C_SMT_GPIO1C1_SMT_SHIFT               (1U)
#define BUS_GRF_GPIO1C_SMT_GPIO1C1_SMT_MASK                (0x1U << BUS_GRF_GPIO1C_SMT_GPIO1C1_SMT_SHIFT)               /* 0x00000002 */
#define BUS_GRF_GPIO1C_SMT_GPIO1C2_SMT_SHIFT               (2U)
#define BUS_GRF_GPIO1C_SMT_GPIO1C2_SMT_MASK                (0x1U << BUS_GRF_GPIO1C_SMT_GPIO1C2_SMT_SHIFT)               /* 0x00000004 */
#define BUS_GRF_GPIO1C_SMT_GPIO1C3_SMT_SHIFT               (3U)
#define BUS_GRF_GPIO1C_SMT_GPIO1C3_SMT_MASK                (0x1U << BUS_GRF_GPIO1C_SMT_GPIO1C3_SMT_SHIFT)               /* 0x00000008 */
#define BUS_GRF_GPIO1C_SMT_GPIO1C4_SMT_SHIFT               (4U)
#define BUS_GRF_GPIO1C_SMT_GPIO1C4_SMT_MASK                (0x1U << BUS_GRF_GPIO1C_SMT_GPIO1C4_SMT_SHIFT)               /* 0x00000010 */
#define BUS_GRF_GPIO1C_SMT_GPIO1C5_SMT_SHIFT               (5U)
#define BUS_GRF_GPIO1C_SMT_GPIO1C5_SMT_MASK                (0x1U << BUS_GRF_GPIO1C_SMT_GPIO1C5_SMT_SHIFT)               /* 0x00000020 */
#define BUS_GRF_GPIO1C_SMT_GPIO1C6_SMT_SHIFT               (6U)
#define BUS_GRF_GPIO1C_SMT_GPIO1C6_SMT_MASK                (0x1U << BUS_GRF_GPIO1C_SMT_GPIO1C6_SMT_SHIFT)               /* 0x00000040 */
#define BUS_GRF_GPIO1C_SMT_GPIO1C7_SMT_SHIFT               (7U)
#define BUS_GRF_GPIO1C_SMT_GPIO1C7_SMT_MASK                (0x1U << BUS_GRF_GPIO1C_SMT_GPIO1C7_SMT_SHIFT)               /* 0x00000080 */
/* GPIO1D_SMT */
#define BUS_GRF_GPIO1D_SMT_GPIO1D0_SMT_SHIFT               (0U)
#define BUS_GRF_GPIO1D_SMT_GPIO1D0_SMT_MASK                (0x1U << BUS_GRF_GPIO1D_SMT_GPIO1D0_SMT_SHIFT)               /* 0x00000001 */
#define BUS_GRF_GPIO1D_SMT_GPIO1D1_SMT_SHIFT               (1U)
#define BUS_GRF_GPIO1D_SMT_GPIO1D1_SMT_MASK                (0x1U << BUS_GRF_GPIO1D_SMT_GPIO1D1_SMT_SHIFT)               /* 0x00000002 */
#define BUS_GRF_GPIO1D_SMT_GPIO1D2_SMT_SHIFT               (2U)
#define BUS_GRF_GPIO1D_SMT_GPIO1D2_SMT_MASK                (0x1U << BUS_GRF_GPIO1D_SMT_GPIO1D2_SMT_SHIFT)               /* 0x00000004 */
#define BUS_GRF_GPIO1D_SMT_GPIO1D3_SMT_SHIFT               (3U)
#define BUS_GRF_GPIO1D_SMT_GPIO1D3_SMT_MASK                (0x1U << BUS_GRF_GPIO1D_SMT_GPIO1D3_SMT_SHIFT)               /* 0x00000008 */
#define BUS_GRF_GPIO1D_SMT_GPIO1D4_SMT_SHIFT               (4U)
#define BUS_GRF_GPIO1D_SMT_GPIO1D4_SMT_MASK                (0x1U << BUS_GRF_GPIO1D_SMT_GPIO1D4_SMT_SHIFT)               /* 0x00000010 */
#define BUS_GRF_GPIO1D_SMT_GPIO1D5_SMT_SHIFT               (5U)
#define BUS_GRF_GPIO1D_SMT_GPIO1D5_SMT_MASK                (0x1U << BUS_GRF_GPIO1D_SMT_GPIO1D5_SMT_SHIFT)               /* 0x00000020 */
#define BUS_GRF_GPIO1D_SMT_GPIO1D6_SMT_SHIFT               (6U)
#define BUS_GRF_GPIO1D_SMT_GPIO1D6_SMT_MASK                (0x1U << BUS_GRF_GPIO1D_SMT_GPIO1D6_SMT_SHIFT)               /* 0x00000040 */
#define BUS_GRF_GPIO1D_SMT_GPIO1D7_SMT_SHIFT               (7U)
#define BUS_GRF_GPIO1D_SMT_GPIO1D7_SMT_MASK                (0x1U << BUS_GRF_GPIO1D_SMT_GPIO1D7_SMT_SHIFT)               /* 0x00000080 */
/* GPIO2A_SMT */
#define BUS_GRF_GPIO2A_SMT_GPIO2A0_SMT_SHIFT               (0U)
#define BUS_GRF_GPIO2A_SMT_GPIO2A0_SMT_MASK                (0x1U << BUS_GRF_GPIO2A_SMT_GPIO2A0_SMT_SHIFT)               /* 0x00000001 */
#define BUS_GRF_GPIO2A_SMT_GPIO2A1_SMT_SHIFT               (1U)
#define BUS_GRF_GPIO2A_SMT_GPIO2A1_SMT_MASK                (0x1U << BUS_GRF_GPIO2A_SMT_GPIO2A1_SMT_SHIFT)               /* 0x00000002 */
#define BUS_GRF_GPIO2A_SMT_GPIO2A2_SMT_SHIFT               (2U)
#define BUS_GRF_GPIO2A_SMT_GPIO2A2_SMT_MASK                (0x1U << BUS_GRF_GPIO2A_SMT_GPIO2A2_SMT_SHIFT)               /* 0x00000004 */
#define BUS_GRF_GPIO2A_SMT_GPIO2A3_SMT_SHIFT               (3U)
#define BUS_GRF_GPIO2A_SMT_GPIO2A3_SMT_MASK                (0x1U << BUS_GRF_GPIO2A_SMT_GPIO2A3_SMT_SHIFT)               /* 0x00000008 */
#define BUS_GRF_GPIO2A_SMT_GPIO2A4_SMT_SHIFT               (4U)
#define BUS_GRF_GPIO2A_SMT_GPIO2A4_SMT_MASK                (0x1U << BUS_GRF_GPIO2A_SMT_GPIO2A4_SMT_SHIFT)               /* 0x00000010 */
#define BUS_GRF_GPIO2A_SMT_GPIO2A5_SMT_SHIFT               (5U)
#define BUS_GRF_GPIO2A_SMT_GPIO2A5_SMT_MASK                (0x1U << BUS_GRF_GPIO2A_SMT_GPIO2A5_SMT_SHIFT)               /* 0x00000020 */
#define BUS_GRF_GPIO2A_SMT_GPIO2A6_SMT_SHIFT               (6U)
#define BUS_GRF_GPIO2A_SMT_GPIO2A6_SMT_MASK                (0x1U << BUS_GRF_GPIO2A_SMT_GPIO2A6_SMT_SHIFT)               /* 0x00000040 */
#define BUS_GRF_GPIO2A_SMT_GPIO2A7_SMT_SHIFT               (7U)
#define BUS_GRF_GPIO2A_SMT_GPIO2A7_SMT_MASK                (0x1U << BUS_GRF_GPIO2A_SMT_GPIO2A7_SMT_SHIFT)               /* 0x00000080 */
/* GPIO2B_SMT */
#define BUS_GRF_GPIO2B_SMT_GPIO2B0_SMT_SHIFT               (0U)
#define BUS_GRF_GPIO2B_SMT_GPIO2B0_SMT_MASK                (0x1U << BUS_GRF_GPIO2B_SMT_GPIO2B0_SMT_SHIFT)               /* 0x00000001 */
#define BUS_GRF_GPIO2B_SMT_GPIO2B1_SMT_SHIFT               (1U)
#define BUS_GRF_GPIO2B_SMT_GPIO2B1_SMT_MASK                (0x1U << BUS_GRF_GPIO2B_SMT_GPIO2B1_SMT_SHIFT)               /* 0x00000002 */
#define BUS_GRF_GPIO2B_SMT_GPIO2B2_SMT_SHIFT               (2U)
#define BUS_GRF_GPIO2B_SMT_GPIO2B2_SMT_MASK                (0x1U << BUS_GRF_GPIO2B_SMT_GPIO2B2_SMT_SHIFT)               /* 0x00000004 */
#define BUS_GRF_GPIO2B_SMT_GPIO2B3_SMT_SHIFT               (3U)
#define BUS_GRF_GPIO2B_SMT_GPIO2B3_SMT_MASK                (0x1U << BUS_GRF_GPIO2B_SMT_GPIO2B3_SMT_SHIFT)               /* 0x00000008 */
#define BUS_GRF_GPIO2B_SMT_GPIO2B4_SMT_SHIFT               (4U)
#define BUS_GRF_GPIO2B_SMT_GPIO2B4_SMT_MASK                (0x1U << BUS_GRF_GPIO2B_SMT_GPIO2B4_SMT_SHIFT)               /* 0x00000010 */
#define BUS_GRF_GPIO2B_SMT_GPIO2B5_SMT_SHIFT               (5U)
#define BUS_GRF_GPIO2B_SMT_GPIO2B5_SMT_MASK                (0x1U << BUS_GRF_GPIO2B_SMT_GPIO2B5_SMT_SHIFT)               /* 0x00000020 */
#define BUS_GRF_GPIO2B_SMT_GPIO2B6_SMT_SHIFT               (6U)
#define BUS_GRF_GPIO2B_SMT_GPIO2B6_SMT_MASK                (0x1U << BUS_GRF_GPIO2B_SMT_GPIO2B6_SMT_SHIFT)               /* 0x00000040 */
#define BUS_GRF_GPIO2B_SMT_GPIO2B7_SMT_SHIFT               (7U)
#define BUS_GRF_GPIO2B_SMT_GPIO2B7_SMT_MASK                (0x1U << BUS_GRF_GPIO2B_SMT_GPIO2B7_SMT_SHIFT)               /* 0x00000080 */
/* GPIO2C_SMT */
#define BUS_GRF_GPIO2C_SMT_GPIO2C0_SMT_SHIFT               (0U)
#define BUS_GRF_GPIO2C_SMT_GPIO2C0_SMT_MASK                (0x1U << BUS_GRF_GPIO2C_SMT_GPIO2C0_SMT_SHIFT)               /* 0x00000001 */
#define BUS_GRF_GPIO2C_SMT_GPIO2C1_SMT_SHIFT               (1U)
#define BUS_GRF_GPIO2C_SMT_GPIO2C1_SMT_MASK                (0x1U << BUS_GRF_GPIO2C_SMT_GPIO2C1_SMT_SHIFT)               /* 0x00000002 */
#define BUS_GRF_GPIO2C_SMT_GPIO2C2_SMT_SHIFT               (2U)
#define BUS_GRF_GPIO2C_SMT_GPIO2C2_SMT_MASK                (0x1U << BUS_GRF_GPIO2C_SMT_GPIO2C2_SMT_SHIFT)               /* 0x00000004 */
#define BUS_GRF_GPIO2C_SMT_GPIO2C3_SMT_SHIFT               (3U)
#define BUS_GRF_GPIO2C_SMT_GPIO2C3_SMT_MASK                (0x1U << BUS_GRF_GPIO2C_SMT_GPIO2C3_SMT_SHIFT)               /* 0x00000008 */
#define BUS_GRF_GPIO2C_SMT_GPIO2C4_SMT_SHIFT               (4U)
#define BUS_GRF_GPIO2C_SMT_GPIO2C4_SMT_MASK                (0x1U << BUS_GRF_GPIO2C_SMT_GPIO2C4_SMT_SHIFT)               /* 0x00000010 */
#define BUS_GRF_GPIO2C_SMT_GPIO2C5_SMT_SHIFT               (5U)
#define BUS_GRF_GPIO2C_SMT_GPIO2C5_SMT_MASK                (0x1U << BUS_GRF_GPIO2C_SMT_GPIO2C5_SMT_SHIFT)               /* 0x00000020 */
#define BUS_GRF_GPIO2C_SMT_GPIO2C6_SMT_SHIFT               (6U)
#define BUS_GRF_GPIO2C_SMT_GPIO2C6_SMT_MASK                (0x1U << BUS_GRF_GPIO2C_SMT_GPIO2C6_SMT_SHIFT)               /* 0x00000040 */
#define BUS_GRF_GPIO2C_SMT_GPIO2C7_SMT_SHIFT               (7U)
#define BUS_GRF_GPIO2C_SMT_GPIO2C7_SMT_MASK                (0x1U << BUS_GRF_GPIO2C_SMT_GPIO2C7_SMT_SHIFT)               /* 0x00000080 */
/* GPIO2D_SMT */
#define BUS_GRF_GPIO2D_SMT_GPIO2D0_SMT_SHIFT               (0U)
#define BUS_GRF_GPIO2D_SMT_GPIO2D0_SMT_MASK                (0x1U << BUS_GRF_GPIO2D_SMT_GPIO2D0_SMT_SHIFT)               /* 0x00000001 */
#define BUS_GRF_GPIO2D_SMT_GPIO2D1_SMT_SHIFT               (1U)
#define BUS_GRF_GPIO2D_SMT_GPIO2D1_SMT_MASK                (0x1U << BUS_GRF_GPIO2D_SMT_GPIO2D1_SMT_SHIFT)               /* 0x00000002 */
#define BUS_GRF_GPIO2D_SMT_GPIO2D2_SMT_SHIFT               (2U)
#define BUS_GRF_GPIO2D_SMT_GPIO2D2_SMT_MASK                (0x1U << BUS_GRF_GPIO2D_SMT_GPIO2D2_SMT_SHIFT)               /* 0x00000004 */
#define BUS_GRF_GPIO2D_SMT_GPIO2D3_SMT_SHIFT               (3U)
#define BUS_GRF_GPIO2D_SMT_GPIO2D3_SMT_MASK                (0x1U << BUS_GRF_GPIO2D_SMT_GPIO2D3_SMT_SHIFT)               /* 0x00000008 */
#define BUS_GRF_GPIO2D_SMT_GPIO2D4_SMT_SHIFT               (4U)
#define BUS_GRF_GPIO2D_SMT_GPIO2D4_SMT_MASK                (0x1U << BUS_GRF_GPIO2D_SMT_GPIO2D4_SMT_SHIFT)               /* 0x00000010 */
#define BUS_GRF_GPIO2D_SMT_GPIO2D5_SMT_SHIFT               (5U)
#define BUS_GRF_GPIO2D_SMT_GPIO2D5_SMT_MASK                (0x1U << BUS_GRF_GPIO2D_SMT_GPIO2D5_SMT_SHIFT)               /* 0x00000020 */
#define BUS_GRF_GPIO2D_SMT_GPIO2D6_SMT_SHIFT               (6U)
#define BUS_GRF_GPIO2D_SMT_GPIO2D6_SMT_MASK                (0x1U << BUS_GRF_GPIO2D_SMT_GPIO2D6_SMT_SHIFT)               /* 0x00000040 */
#define BUS_GRF_GPIO2D_SMT_GPIO2D7_SMT_SHIFT               (7U)
#define BUS_GRF_GPIO2D_SMT_GPIO2D7_SMT_MASK                (0x1U << BUS_GRF_GPIO2D_SMT_GPIO2D7_SMT_SHIFT)               /* 0x00000080 */
/* GPIO3A_SMT */
#define BUS_GRF_GPIO3A_SMT_GPIO3A0_SMT_SHIFT               (0U)
#define BUS_GRF_GPIO3A_SMT_GPIO3A0_SMT_MASK                (0x1U << BUS_GRF_GPIO3A_SMT_GPIO3A0_SMT_SHIFT)               /* 0x00000001 */
#define BUS_GRF_GPIO3A_SMT_GPIO3A1_SMT_SHIFT               (1U)
#define BUS_GRF_GPIO3A_SMT_GPIO3A1_SMT_MASK                (0x1U << BUS_GRF_GPIO3A_SMT_GPIO3A1_SMT_SHIFT)               /* 0x00000002 */
#define BUS_GRF_GPIO3A_SMT_GPIO3A2_SMT_SHIFT               (2U)
#define BUS_GRF_GPIO3A_SMT_GPIO3A2_SMT_MASK                (0x1U << BUS_GRF_GPIO3A_SMT_GPIO3A2_SMT_SHIFT)               /* 0x00000004 */
#define BUS_GRF_GPIO3A_SMT_GPIO3A3_SMT_SHIFT               (3U)
#define BUS_GRF_GPIO3A_SMT_GPIO3A3_SMT_MASK                (0x1U << BUS_GRF_GPIO3A_SMT_GPIO3A3_SMT_SHIFT)               /* 0x00000008 */
#define BUS_GRF_GPIO3A_SMT_GPIO3A4_SMT_SHIFT               (4U)
#define BUS_GRF_GPIO3A_SMT_GPIO3A4_SMT_MASK                (0x1U << BUS_GRF_GPIO3A_SMT_GPIO3A4_SMT_SHIFT)               /* 0x00000010 */
#define BUS_GRF_GPIO3A_SMT_GPIO3A5_SMT_SHIFT               (5U)
#define BUS_GRF_GPIO3A_SMT_GPIO3A5_SMT_MASK                (0x1U << BUS_GRF_GPIO3A_SMT_GPIO3A5_SMT_SHIFT)               /* 0x00000020 */
#define BUS_GRF_GPIO3A_SMT_GPIO3A6_SMT_SHIFT               (6U)
#define BUS_GRF_GPIO3A_SMT_GPIO3A6_SMT_MASK                (0x1U << BUS_GRF_GPIO3A_SMT_GPIO3A6_SMT_SHIFT)               /* 0x00000040 */
#define BUS_GRF_GPIO3A_SMT_GPIO3A7_SMT_SHIFT               (7U)
#define BUS_GRF_GPIO3A_SMT_GPIO3A7_SMT_MASK                (0x1U << BUS_GRF_GPIO3A_SMT_GPIO3A7_SMT_SHIFT)               /* 0x00000080 */
/* GPIO3B_SMT */
#define BUS_GRF_GPIO3B_SMT_GPIO3B0_SMT_SHIFT               (0U)
#define BUS_GRF_GPIO3B_SMT_GPIO3B0_SMT_MASK                (0x1U << BUS_GRF_GPIO3B_SMT_GPIO3B0_SMT_SHIFT)               /* 0x00000001 */
#define BUS_GRF_GPIO3B_SMT_GPIO3B1_SMT_SHIFT               (1U)
#define BUS_GRF_GPIO3B_SMT_GPIO3B1_SMT_MASK                (0x1U << BUS_GRF_GPIO3B_SMT_GPIO3B1_SMT_SHIFT)               /* 0x00000002 */
#define BUS_GRF_GPIO3B_SMT_GPIO3B2_SMT_SHIFT               (2U)
#define BUS_GRF_GPIO3B_SMT_GPIO3B2_SMT_MASK                (0x1U << BUS_GRF_GPIO3B_SMT_GPIO3B2_SMT_SHIFT)               /* 0x00000004 */
#define BUS_GRF_GPIO3B_SMT_GPIO3B3_SMT_SHIFT               (3U)
#define BUS_GRF_GPIO3B_SMT_GPIO3B3_SMT_MASK                (0x1U << BUS_GRF_GPIO3B_SMT_GPIO3B3_SMT_SHIFT)               /* 0x00000008 */
#define BUS_GRF_GPIO3B_SMT_GPIO3B4_SMT_SHIFT               (4U)
#define BUS_GRF_GPIO3B_SMT_GPIO3B4_SMT_MASK                (0x1U << BUS_GRF_GPIO3B_SMT_GPIO3B4_SMT_SHIFT)               /* 0x00000010 */
#define BUS_GRF_GPIO3B_SMT_GPIO3B5_SMT_SHIFT               (5U)
#define BUS_GRF_GPIO3B_SMT_GPIO3B5_SMT_MASK                (0x1U << BUS_GRF_GPIO3B_SMT_GPIO3B5_SMT_SHIFT)               /* 0x00000020 */
#define BUS_GRF_GPIO3B_SMT_GPIO3B6_SMT_SHIFT               (6U)
#define BUS_GRF_GPIO3B_SMT_GPIO3B6_SMT_MASK                (0x1U << BUS_GRF_GPIO3B_SMT_GPIO3B6_SMT_SHIFT)               /* 0x00000040 */
#define BUS_GRF_GPIO3B_SMT_GPIO3B7_SMT_SHIFT               (7U)
#define BUS_GRF_GPIO3B_SMT_GPIO3B7_SMT_MASK                (0x1U << BUS_GRF_GPIO3B_SMT_GPIO3B7_SMT_SHIFT)               /* 0x00000080 */
/* GPIO3C_SMT */
#define BUS_GRF_GPIO3C_SMT_GPIO3C0_SMT_SHIFT               (0U)
#define BUS_GRF_GPIO3C_SMT_GPIO3C0_SMT_MASK                (0x1U << BUS_GRF_GPIO3C_SMT_GPIO3C0_SMT_SHIFT)               /* 0x00000001 */
#define BUS_GRF_GPIO3C_SMT_GPIO3C1_SMT_SHIFT               (1U)
#define BUS_GRF_GPIO3C_SMT_GPIO3C1_SMT_MASK                (0x1U << BUS_GRF_GPIO3C_SMT_GPIO3C1_SMT_SHIFT)               /* 0x00000002 */
#define BUS_GRF_GPIO3C_SMT_GPIO3C2_SMT_SHIFT               (2U)
#define BUS_GRF_GPIO3C_SMT_GPIO3C2_SMT_MASK                (0x1U << BUS_GRF_GPIO3C_SMT_GPIO3C2_SMT_SHIFT)               /* 0x00000004 */
#define BUS_GRF_GPIO3C_SMT_GPIO3C3_SMT_SHIFT               (3U)
#define BUS_GRF_GPIO3C_SMT_GPIO3C3_SMT_MASK                (0x1U << BUS_GRF_GPIO3C_SMT_GPIO3C3_SMT_SHIFT)               /* 0x00000008 */
#define BUS_GRF_GPIO3C_SMT_GPIO3C4_SMT_SHIFT               (4U)
#define BUS_GRF_GPIO3C_SMT_GPIO3C4_SMT_MASK                (0x1U << BUS_GRF_GPIO3C_SMT_GPIO3C4_SMT_SHIFT)               /* 0x00000010 */
#define BUS_GRF_GPIO3C_SMT_GPIO3C5_SMT_SHIFT               (5U)
#define BUS_GRF_GPIO3C_SMT_GPIO3C5_SMT_MASK                (0x1U << BUS_GRF_GPIO3C_SMT_GPIO3C5_SMT_SHIFT)               /* 0x00000020 */
#define BUS_GRF_GPIO3C_SMT_GPIO3C6_SMT_SHIFT               (6U)
#define BUS_GRF_GPIO3C_SMT_GPIO3C6_SMT_MASK                (0x1U << BUS_GRF_GPIO3C_SMT_GPIO3C6_SMT_SHIFT)               /* 0x00000040 */
#define BUS_GRF_GPIO3C_SMT_GPIO3C7_SMT_SHIFT               (7U)
#define BUS_GRF_GPIO3C_SMT_GPIO3C7_SMT_MASK                (0x1U << BUS_GRF_GPIO3C_SMT_GPIO3C7_SMT_SHIFT)               /* 0x00000080 */
/* GPIO3D_SMT */
#define BUS_GRF_GPIO3D_SMT_GPIO3D0_SMT_SHIFT               (0U)
#define BUS_GRF_GPIO3D_SMT_GPIO3D0_SMT_MASK                (0x1U << BUS_GRF_GPIO3D_SMT_GPIO3D0_SMT_SHIFT)               /* 0x00000001 */
#define BUS_GRF_GPIO3D_SMT_GPIO3D1_SMT_SHIFT               (1U)
#define BUS_GRF_GPIO3D_SMT_GPIO3D1_SMT_MASK                (0x1U << BUS_GRF_GPIO3D_SMT_GPIO3D1_SMT_SHIFT)               /* 0x00000002 */
#define BUS_GRF_GPIO3D_SMT_GPIO3D2_SMT_SHIFT               (2U)
#define BUS_GRF_GPIO3D_SMT_GPIO3D2_SMT_MASK                (0x1U << BUS_GRF_GPIO3D_SMT_GPIO3D2_SMT_SHIFT)               /* 0x00000004 */
#define BUS_GRF_GPIO3D_SMT_GPIO3D3_SMT_SHIFT               (3U)
#define BUS_GRF_GPIO3D_SMT_GPIO3D3_SMT_MASK                (0x1U << BUS_GRF_GPIO3D_SMT_GPIO3D3_SMT_SHIFT)               /* 0x00000008 */
#define BUS_GRF_GPIO3D_SMT_GPIO3D4_SMT_SHIFT               (4U)
#define BUS_GRF_GPIO3D_SMT_GPIO3D4_SMT_MASK                (0x1U << BUS_GRF_GPIO3D_SMT_GPIO3D4_SMT_SHIFT)               /* 0x00000010 */
#define BUS_GRF_GPIO3D_SMT_GPIO3D5_SMT_SHIFT               (5U)
#define BUS_GRF_GPIO3D_SMT_GPIO3D5_SMT_MASK                (0x1U << BUS_GRF_GPIO3D_SMT_GPIO3D5_SMT_SHIFT)               /* 0x00000020 */
#define BUS_GRF_GPIO3D_SMT_GPIO3D6_SMT_SHIFT               (6U)
#define BUS_GRF_GPIO3D_SMT_GPIO3D6_SMT_MASK                (0x1U << BUS_GRF_GPIO3D_SMT_GPIO3D6_SMT_SHIFT)               /* 0x00000040 */
#define BUS_GRF_GPIO3D_SMT_GPIO3D7_SMT_SHIFT               (7U)
#define BUS_GRF_GPIO3D_SMT_GPIO3D7_SMT_MASK                (0x1U << BUS_GRF_GPIO3D_SMT_GPIO3D7_SMT_SHIFT)               /* 0x00000080 */
/* GPIO4A_SMT */
#define BUS_GRF_GPIO4A_SMT_GPIO4A0_SMT_SHIFT               (0U)
#define BUS_GRF_GPIO4A_SMT_GPIO4A0_SMT_MASK                (0x1U << BUS_GRF_GPIO4A_SMT_GPIO4A0_SMT_SHIFT)               /* 0x00000001 */
#define BUS_GRF_GPIO4A_SMT_GPIO4A1_SMT_SHIFT               (1U)
#define BUS_GRF_GPIO4A_SMT_GPIO4A1_SMT_MASK                (0x1U << BUS_GRF_GPIO4A_SMT_GPIO4A1_SMT_SHIFT)               /* 0x00000002 */
#define BUS_GRF_GPIO4A_SMT_GPIO4A2_SMT_SHIFT               (2U)
#define BUS_GRF_GPIO4A_SMT_GPIO4A2_SMT_MASK                (0x1U << BUS_GRF_GPIO4A_SMT_GPIO4A2_SMT_SHIFT)               /* 0x00000004 */
#define BUS_GRF_GPIO4A_SMT_GPIO4A3_SMT_SHIFT               (3U)
#define BUS_GRF_GPIO4A_SMT_GPIO4A3_SMT_MASK                (0x1U << BUS_GRF_GPIO4A_SMT_GPIO4A3_SMT_SHIFT)               /* 0x00000008 */
#define BUS_GRF_GPIO4A_SMT_GPIO4A4_SMT_SHIFT               (4U)
#define BUS_GRF_GPIO4A_SMT_GPIO4A4_SMT_MASK                (0x1U << BUS_GRF_GPIO4A_SMT_GPIO4A4_SMT_SHIFT)               /* 0x00000010 */
#define BUS_GRF_GPIO4A_SMT_GPIO4A5_SMT_SHIFT               (5U)
#define BUS_GRF_GPIO4A_SMT_GPIO4A5_SMT_MASK                (0x1U << BUS_GRF_GPIO4A_SMT_GPIO4A5_SMT_SHIFT)               /* 0x00000020 */
#define BUS_GRF_GPIO4A_SMT_GPIO4A6_SMT_SHIFT               (6U)
#define BUS_GRF_GPIO4A_SMT_GPIO4A6_SMT_MASK                (0x1U << BUS_GRF_GPIO4A_SMT_GPIO4A6_SMT_SHIFT)               /* 0x00000040 */
#define BUS_GRF_GPIO4A_SMT_GPIO4A7_SMT_SHIFT               (7U)
#define BUS_GRF_GPIO4A_SMT_GPIO4A7_SMT_MASK                (0x1U << BUS_GRF_GPIO4A_SMT_GPIO4A7_SMT_SHIFT)               /* 0x00000080 */
/* GPIO4B_SMT */
#define BUS_GRF_GPIO4B_SMT_GPIO4B0_SMT_SHIFT               (0U)
#define BUS_GRF_GPIO4B_SMT_GPIO4B0_SMT_MASK                (0x1U << BUS_GRF_GPIO4B_SMT_GPIO4B0_SMT_SHIFT)               /* 0x00000001 */
#define BUS_GRF_GPIO4B_SMT_GPIO4B1_SMT_SHIFT               (1U)
#define BUS_GRF_GPIO4B_SMT_GPIO4B1_SMT_MASK                (0x1U << BUS_GRF_GPIO4B_SMT_GPIO4B1_SMT_SHIFT)               /* 0x00000002 */
#define BUS_GRF_GPIO4B_SMT_GPIO4B2_SMT_SHIFT               (2U)
#define BUS_GRF_GPIO4B_SMT_GPIO4B2_SMT_MASK                (0x1U << BUS_GRF_GPIO4B_SMT_GPIO4B2_SMT_SHIFT)               /* 0x00000004 */
#define BUS_GRF_GPIO4B_SMT_GPIO4B3_SMT_SHIFT               (3U)
#define BUS_GRF_GPIO4B_SMT_GPIO4B3_SMT_MASK                (0x1U << BUS_GRF_GPIO4B_SMT_GPIO4B3_SMT_SHIFT)               /* 0x00000008 */
#define BUS_GRF_GPIO4B_SMT_GPIO4B4_SMT_SHIFT               (4U)
#define BUS_GRF_GPIO4B_SMT_GPIO4B4_SMT_MASK                (0x1U << BUS_GRF_GPIO4B_SMT_GPIO4B4_SMT_SHIFT)               /* 0x00000010 */
#define BUS_GRF_GPIO4B_SMT_GPIO4B5_SMT_SHIFT               (5U)
#define BUS_GRF_GPIO4B_SMT_GPIO4B5_SMT_MASK                (0x1U << BUS_GRF_GPIO4B_SMT_GPIO4B5_SMT_SHIFT)               /* 0x00000020 */
#define BUS_GRF_GPIO4B_SMT_GPIO4B6_SMT_SHIFT               (6U)
#define BUS_GRF_GPIO4B_SMT_GPIO4B6_SMT_MASK                (0x1U << BUS_GRF_GPIO4B_SMT_GPIO4B6_SMT_SHIFT)               /* 0x00000040 */
#define BUS_GRF_GPIO4B_SMT_GPIO4B7_SMT_SHIFT               (7U)
#define BUS_GRF_GPIO4B_SMT_GPIO4B7_SMT_MASK                (0x1U << BUS_GRF_GPIO4B_SMT_GPIO4B7_SMT_SHIFT)               /* 0x00000080 */
/* GPIO4C_SMT */
#define BUS_GRF_GPIO4C_SMT_GPIO4C0_SMT_SHIFT               (0U)
#define BUS_GRF_GPIO4C_SMT_GPIO4C0_SMT_MASK                (0x1U << BUS_GRF_GPIO4C_SMT_GPIO4C0_SMT_SHIFT)               /* 0x00000001 */
#define BUS_GRF_GPIO4C_SMT_GPIO4C1_SMT_SHIFT               (1U)
#define BUS_GRF_GPIO4C_SMT_GPIO4C1_SMT_MASK                (0x1U << BUS_GRF_GPIO4C_SMT_GPIO4C1_SMT_SHIFT)               /* 0x00000002 */
#define BUS_GRF_GPIO4C_SMT_GPIO4C2_SMT_SHIFT               (2U)
#define BUS_GRF_GPIO4C_SMT_GPIO4C2_SMT_MASK                (0x1U << BUS_GRF_GPIO4C_SMT_GPIO4C2_SMT_SHIFT)               /* 0x00000004 */
#define BUS_GRF_GPIO4C_SMT_GPIO4C3_SMT_SHIFT               (3U)
#define BUS_GRF_GPIO4C_SMT_GPIO4C3_SMT_MASK                (0x1U << BUS_GRF_GPIO4C_SMT_GPIO4C3_SMT_SHIFT)               /* 0x00000008 */
#define BUS_GRF_GPIO4C_SMT_GPIO4C4_SMT_SHIFT               (4U)
#define BUS_GRF_GPIO4C_SMT_GPIO4C4_SMT_MASK                (0x1U << BUS_GRF_GPIO4C_SMT_GPIO4C4_SMT_SHIFT)               /* 0x00000010 */
#define BUS_GRF_GPIO4C_SMT_GPIO4C5_SMT_SHIFT               (5U)
#define BUS_GRF_GPIO4C_SMT_GPIO4C5_SMT_MASK                (0x1U << BUS_GRF_GPIO4C_SMT_GPIO4C5_SMT_SHIFT)               /* 0x00000020 */
#define BUS_GRF_GPIO4C_SMT_GPIO4C6_SMT_SHIFT               (6U)
#define BUS_GRF_GPIO4C_SMT_GPIO4C6_SMT_MASK                (0x1U << BUS_GRF_GPIO4C_SMT_GPIO4C6_SMT_SHIFT)               /* 0x00000040 */
#define BUS_GRF_GPIO4C_SMT_GPIO4C7_SMT_SHIFT               (7U)
#define BUS_GRF_GPIO4C_SMT_GPIO4C7_SMT_MASK                (0x1U << BUS_GRF_GPIO4C_SMT_GPIO4C7_SMT_SHIFT)               /* 0x00000080 */
/* GPIO1A_E */
#define BUS_GRF_GPIO1A_E_GPIO1A0_E_SHIFT                   (0U)
#define BUS_GRF_GPIO1A_E_GPIO1A0_E_MASK                    (0x3U << BUS_GRF_GPIO1A_E_GPIO1A0_E_SHIFT)                   /* 0x00000003 */
#define BUS_GRF_GPIO1A_E_GPIO1A1_E_SHIFT                   (2U)
#define BUS_GRF_GPIO1A_E_GPIO1A1_E_MASK                    (0x3U << BUS_GRF_GPIO1A_E_GPIO1A1_E_SHIFT)                   /* 0x0000000C */
#define BUS_GRF_GPIO1A_E_GPIO1A2_E_SHIFT                   (4U)
#define BUS_GRF_GPIO1A_E_GPIO1A2_E_MASK                    (0x3U << BUS_GRF_GPIO1A_E_GPIO1A2_E_SHIFT)                   /* 0x00000030 */
#define BUS_GRF_GPIO1A_E_GPIO1A3_E_SHIFT                   (6U)
#define BUS_GRF_GPIO1A_E_GPIO1A3_E_MASK                    (0x3U << BUS_GRF_GPIO1A_E_GPIO1A3_E_SHIFT)                   /* 0x000000C0 */
#define BUS_GRF_GPIO1A_E_GPIO1A4_E_SHIFT                   (8U)
#define BUS_GRF_GPIO1A_E_GPIO1A4_E_MASK                    (0x3U << BUS_GRF_GPIO1A_E_GPIO1A4_E_SHIFT)                   /* 0x00000300 */
#define BUS_GRF_GPIO1A_E_GPIO1A5_E_SHIFT                   (10U)
#define BUS_GRF_GPIO1A_E_GPIO1A5_E_MASK                    (0x3U << BUS_GRF_GPIO1A_E_GPIO1A5_E_SHIFT)                   /* 0x00000C00 */
#define BUS_GRF_GPIO1A_E_GPIO1A6_E_SHIFT                   (12U)
#define BUS_GRF_GPIO1A_E_GPIO1A6_E_MASK                    (0x3U << BUS_GRF_GPIO1A_E_GPIO1A6_E_SHIFT)                   /* 0x00003000 */
#define BUS_GRF_GPIO1A_E_GPIO1A7_E_SHIFT                   (14U)
#define BUS_GRF_GPIO1A_E_GPIO1A7_E_MASK                    (0x3U << BUS_GRF_GPIO1A_E_GPIO1A7_E_SHIFT)                   /* 0x0000C000 */
/* GPIO1B_E */
#define BUS_GRF_GPIO1B_E_GPIO1B0_E_SHIFT                   (0U)
#define BUS_GRF_GPIO1B_E_GPIO1B0_E_MASK                    (0x3U << BUS_GRF_GPIO1B_E_GPIO1B0_E_SHIFT)                   /* 0x00000003 */
#define BUS_GRF_GPIO1B_E_GPIO1B1_E_SHIFT                   (2U)
#define BUS_GRF_GPIO1B_E_GPIO1B1_E_MASK                    (0x3U << BUS_GRF_GPIO1B_E_GPIO1B1_E_SHIFT)                   /* 0x0000000C */
#define BUS_GRF_GPIO1B_E_GPIO1B2_E_SHIFT                   (4U)
#define BUS_GRF_GPIO1B_E_GPIO1B2_E_MASK                    (0x3U << BUS_GRF_GPIO1B_E_GPIO1B2_E_SHIFT)                   /* 0x00000030 */
#define BUS_GRF_GPIO1B_E_GPIO1B3_E_SHIFT                   (6U)
#define BUS_GRF_GPIO1B_E_GPIO1B3_E_MASK                    (0x3U << BUS_GRF_GPIO1B_E_GPIO1B3_E_SHIFT)                   /* 0x000000C0 */
#define BUS_GRF_GPIO1B_E_GPIO1B4_E_SHIFT                   (8U)
#define BUS_GRF_GPIO1B_E_GPIO1B4_E_MASK                    (0x3U << BUS_GRF_GPIO1B_E_GPIO1B4_E_SHIFT)                   /* 0x00000300 */
#define BUS_GRF_GPIO1B_E_GPIO1B5_E_SHIFT                   (10U)
#define BUS_GRF_GPIO1B_E_GPIO1B5_E_MASK                    (0x3U << BUS_GRF_GPIO1B_E_GPIO1B5_E_SHIFT)                   /* 0x00000C00 */
#define BUS_GRF_GPIO1B_E_GPIO1B6_E_SHIFT                   (12U)
#define BUS_GRF_GPIO1B_E_GPIO1B6_E_MASK                    (0x3U << BUS_GRF_GPIO1B_E_GPIO1B6_E_SHIFT)                   /* 0x00003000 */
#define BUS_GRF_GPIO1B_E_GPIO1B7_E_SHIFT                   (14U)
#define BUS_GRF_GPIO1B_E_GPIO1B7_E_MASK                    (0x3U << BUS_GRF_GPIO1B_E_GPIO1B7_E_SHIFT)                   /* 0x0000C000 */
/* GPIO2A_E */
#define BUS_GRF_GPIO2A_E_GPIO2A0_E_SHIFT                   (0U)
#define BUS_GRF_GPIO2A_E_GPIO2A0_E_MASK                    (0x3U << BUS_GRF_GPIO2A_E_GPIO2A0_E_SHIFT)                   /* 0x00000003 */
#define BUS_GRF_GPIO2A_E_GPIO2A1_E_SHIFT                   (2U)
#define BUS_GRF_GPIO2A_E_GPIO2A1_E_MASK                    (0x3U << BUS_GRF_GPIO2A_E_GPIO2A1_E_SHIFT)                   /* 0x0000000C */
#define BUS_GRF_GPIO2A_E_GPIO2A2_E_SHIFT                   (4U)
#define BUS_GRF_GPIO2A_E_GPIO2A2_E_MASK                    (0x3U << BUS_GRF_GPIO2A_E_GPIO2A2_E_SHIFT)                   /* 0x00000030 */
#define BUS_GRF_GPIO2A_E_GPIO2A3_E_SHIFT                   (6U)
#define BUS_GRF_GPIO2A_E_GPIO2A3_E_MASK                    (0x3U << BUS_GRF_GPIO2A_E_GPIO2A3_E_SHIFT)                   /* 0x000000C0 */
#define BUS_GRF_GPIO2A_E_GPIO2A4_E_SHIFT                   (8U)
#define BUS_GRF_GPIO2A_E_GPIO2A4_E_MASK                    (0x3U << BUS_GRF_GPIO2A_E_GPIO2A4_E_SHIFT)                   /* 0x00000300 */
#define BUS_GRF_GPIO2A_E_GPIO2A5_E_SHIFT                   (10U)
#define BUS_GRF_GPIO2A_E_GPIO2A5_E_MASK                    (0x3U << BUS_GRF_GPIO2A_E_GPIO2A5_E_SHIFT)                   /* 0x00000C00 */
#define BUS_GRF_GPIO2A_E_GPIO2A6_E_SHIFT                   (12U)
#define BUS_GRF_GPIO2A_E_GPIO2A6_E_MASK                    (0x3U << BUS_GRF_GPIO2A_E_GPIO2A6_E_SHIFT)                   /* 0x00003000 */
#define BUS_GRF_GPIO2A_E_GPIO2A7_E_SHIFT                   (14U)
#define BUS_GRF_GPIO2A_E_GPIO2A7_E_MASK                    (0x3U << BUS_GRF_GPIO2A_E_GPIO2A7_E_SHIFT)                   /* 0x0000C000 */
/* GPIO2B_E */
#define BUS_GRF_GPIO2B_E_GPIO2B0_E_SHIFT                   (0U)
#define BUS_GRF_GPIO2B_E_GPIO2B0_E_MASK                    (0x3U << BUS_GRF_GPIO2B_E_GPIO2B0_E_SHIFT)                   /* 0x00000003 */
#define BUS_GRF_GPIO2B_E_GPIO2B1_E_SHIFT                   (2U)
#define BUS_GRF_GPIO2B_E_GPIO2B1_E_MASK                    (0x3U << BUS_GRF_GPIO2B_E_GPIO2B1_E_SHIFT)                   /* 0x0000000C */
#define BUS_GRF_GPIO2B_E_GPIO2B2_E_SHIFT                   (4U)
#define BUS_GRF_GPIO2B_E_GPIO2B2_E_MASK                    (0x3U << BUS_GRF_GPIO2B_E_GPIO2B2_E_SHIFT)                   /* 0x00000030 */
#define BUS_GRF_GPIO2B_E_GPIO2B3_E_SHIFT                   (6U)
#define BUS_GRF_GPIO2B_E_GPIO2B3_E_MASK                    (0x3U << BUS_GRF_GPIO2B_E_GPIO2B3_E_SHIFT)                   /* 0x000000C0 */
#define BUS_GRF_GPIO2B_E_GPIO2B4_E_SHIFT                   (8U)
#define BUS_GRF_GPIO2B_E_GPIO2B4_E_MASK                    (0x3U << BUS_GRF_GPIO2B_E_GPIO2B4_E_SHIFT)                   /* 0x00000300 */
#define BUS_GRF_GPIO2B_E_GPIO2B5_E_SHIFT                   (10U)
#define BUS_GRF_GPIO2B_E_GPIO2B5_E_MASK                    (0x3U << BUS_GRF_GPIO2B_E_GPIO2B5_E_SHIFT)                   /* 0x00000C00 */
#define BUS_GRF_GPIO2B_E_GPIO2B6_E_SHIFT                   (12U)
#define BUS_GRF_GPIO2B_E_GPIO2B6_E_MASK                    (0x3U << BUS_GRF_GPIO2B_E_GPIO2B6_E_SHIFT)                   /* 0x00003000 */
#define BUS_GRF_GPIO2B_E_GPIO2B7_E_SHIFT                   (14U)
#define BUS_GRF_GPIO2B_E_GPIO2B7_E_MASK                    (0x3U << BUS_GRF_GPIO2B_E_GPIO2B7_E_SHIFT)                   /* 0x0000C000 */
/* GPIO2C_E */
#define BUS_GRF_GPIO2C_E_GPIO2C0_E_SHIFT                   (0U)
#define BUS_GRF_GPIO2C_E_GPIO2C0_E_MASK                    (0x3U << BUS_GRF_GPIO2C_E_GPIO2C0_E_SHIFT)                   /* 0x00000003 */
#define BUS_GRF_GPIO2C_E_GPIO2C1_E_SHIFT                   (2U)
#define BUS_GRF_GPIO2C_E_GPIO2C1_E_MASK                    (0x3U << BUS_GRF_GPIO2C_E_GPIO2C1_E_SHIFT)                   /* 0x0000000C */
#define BUS_GRF_GPIO2C_E_GPIO2C2_E_SHIFT                   (4U)
#define BUS_GRF_GPIO2C_E_GPIO2C2_E_MASK                    (0x3U << BUS_GRF_GPIO2C_E_GPIO2C2_E_SHIFT)                   /* 0x00000030 */
#define BUS_GRF_GPIO2C_E_GPIO2C3_E_SHIFT                   (6U)
#define BUS_GRF_GPIO2C_E_GPIO2C3_E_MASK                    (0x3U << BUS_GRF_GPIO2C_E_GPIO2C3_E_SHIFT)                   /* 0x000000C0 */
#define BUS_GRF_GPIO2C_E_GPIO2C4_E_SHIFT                   (8U)
#define BUS_GRF_GPIO2C_E_GPIO2C4_E_MASK                    (0x3U << BUS_GRF_GPIO2C_E_GPIO2C4_E_SHIFT)                   /* 0x00000300 */
#define BUS_GRF_GPIO2C_E_GPIO2C5_E_SHIFT                   (10U)
#define BUS_GRF_GPIO2C_E_GPIO2C5_E_MASK                    (0x3U << BUS_GRF_GPIO2C_E_GPIO2C5_E_SHIFT)                   /* 0x00000C00 */
#define BUS_GRF_GPIO2C_E_GPIO2C6_E_SHIFT                   (12U)
#define BUS_GRF_GPIO2C_E_GPIO2C6_E_MASK                    (0x3U << BUS_GRF_GPIO2C_E_GPIO2C6_E_SHIFT)                   /* 0x00003000 */
#define BUS_GRF_GPIO2C_E_GPIO2C7_E_SHIFT                   (14U)
#define BUS_GRF_GPIO2C_E_GPIO2C7_E_MASK                    (0x3U << BUS_GRF_GPIO2C_E_GPIO2C7_E_SHIFT)                   /* 0x0000C000 */
/* GPIO2D_E */
#define BUS_GRF_GPIO2D_E_GPIO2D0_E_SHIFT                   (0U)
#define BUS_GRF_GPIO2D_E_GPIO2D0_E_MASK                    (0x3U << BUS_GRF_GPIO2D_E_GPIO2D0_E_SHIFT)                   /* 0x00000003 */
#define BUS_GRF_GPIO2D_E_GPIO2D1_E_SHIFT                   (2U)
#define BUS_GRF_GPIO2D_E_GPIO2D1_E_MASK                    (0x3U << BUS_GRF_GPIO2D_E_GPIO2D1_E_SHIFT)                   /* 0x0000000C */
#define BUS_GRF_GPIO2D_E_GPIO2D2_E_SHIFT                   (4U)
#define BUS_GRF_GPIO2D_E_GPIO2D2_E_MASK                    (0x3U << BUS_GRF_GPIO2D_E_GPIO2D2_E_SHIFT)                   /* 0x00000030 */
#define BUS_GRF_GPIO2D_E_GPIO2D3_E_SHIFT                   (6U)
#define BUS_GRF_GPIO2D_E_GPIO2D3_E_MASK                    (0x3U << BUS_GRF_GPIO2D_E_GPIO2D3_E_SHIFT)                   /* 0x000000C0 */
#define BUS_GRF_GPIO2D_E_GPIO2D4_E_SHIFT                   (8U)
#define BUS_GRF_GPIO2D_E_GPIO2D4_E_MASK                    (0x3U << BUS_GRF_GPIO2D_E_GPIO2D4_E_SHIFT)                   /* 0x00000300 */
#define BUS_GRF_GPIO2D_E_GPIO2D5_E_SHIFT                   (10U)
#define BUS_GRF_GPIO2D_E_GPIO2D5_E_MASK                    (0x3U << BUS_GRF_GPIO2D_E_GPIO2D5_E_SHIFT)                   /* 0x00000C00 */
#define BUS_GRF_GPIO2D_E_GPIO2D6_E_SHIFT                   (12U)
#define BUS_GRF_GPIO2D_E_GPIO2D6_E_MASK                    (0x3U << BUS_GRF_GPIO2D_E_GPIO2D6_E_SHIFT)                   /* 0x00003000 */
#define BUS_GRF_GPIO2D_E_GPIO2D7_E_SHIFT                   (14U)
#define BUS_GRF_GPIO2D_E_GPIO2D7_E_MASK                    (0x3U << BUS_GRF_GPIO2D_E_GPIO2D7_E_SHIFT)                   /* 0x0000C000 */
/* GPIO3A_E */
#define BUS_GRF_GPIO3A_E_GPIO3A0_E_SHIFT                   (0U)
#define BUS_GRF_GPIO3A_E_GPIO3A0_E_MASK                    (0x3U << BUS_GRF_GPIO3A_E_GPIO3A0_E_SHIFT)                   /* 0x00000003 */
#define BUS_GRF_GPIO3A_E_GPIO3A1_E_SHIFT                   (2U)
#define BUS_GRF_GPIO3A_E_GPIO3A1_E_MASK                    (0x3U << BUS_GRF_GPIO3A_E_GPIO3A1_E_SHIFT)                   /* 0x0000000C */
#define BUS_GRF_GPIO3A_E_GPIO3A2_E_SHIFT                   (4U)
#define BUS_GRF_GPIO3A_E_GPIO3A2_E_MASK                    (0x3U << BUS_GRF_GPIO3A_E_GPIO3A2_E_SHIFT)                   /* 0x00000030 */
#define BUS_GRF_GPIO3A_E_GPIO3A3_E_SHIFT                   (6U)
#define BUS_GRF_GPIO3A_E_GPIO3A3_E_MASK                    (0x3U << BUS_GRF_GPIO3A_E_GPIO3A3_E_SHIFT)                   /* 0x000000C0 */
#define BUS_GRF_GPIO3A_E_GPIO3A4_E_SHIFT                   (8U)
#define BUS_GRF_GPIO3A_E_GPIO3A4_E_MASK                    (0x3U << BUS_GRF_GPIO3A_E_GPIO3A4_E_SHIFT)                   /* 0x00000300 */
#define BUS_GRF_GPIO3A_E_GPIO3A5_E_SHIFT                   (10U)
#define BUS_GRF_GPIO3A_E_GPIO3A5_E_MASK                    (0x3U << BUS_GRF_GPIO3A_E_GPIO3A5_E_SHIFT)                   /* 0x00000C00 */
#define BUS_GRF_GPIO3A_E_GPIO3A6_E_SHIFT                   (12U)
#define BUS_GRF_GPIO3A_E_GPIO3A6_E_MASK                    (0x3U << BUS_GRF_GPIO3A_E_GPIO3A6_E_SHIFT)                   /* 0x00003000 */
#define BUS_GRF_GPIO3A_E_GPIO3A7_E_SHIFT                   (14U)
#define BUS_GRF_GPIO3A_E_GPIO3A7_E_MASK                    (0x3U << BUS_GRF_GPIO3A_E_GPIO3A7_E_SHIFT)                   /* 0x0000C000 */
/* GPIO3B_E */
#define BUS_GRF_GPIO3B_E_GPIO3B0_E_SHIFT                   (0U)
#define BUS_GRF_GPIO3B_E_GPIO3B0_E_MASK                    (0x3U << BUS_GRF_GPIO3B_E_GPIO3B0_E_SHIFT)                   /* 0x00000003 */
#define BUS_GRF_GPIO3B_E_GPIO3B1_E_SHIFT                   (2U)
#define BUS_GRF_GPIO3B_E_GPIO3B1_E_MASK                    (0x3U << BUS_GRF_GPIO3B_E_GPIO3B1_E_SHIFT)                   /* 0x0000000C */
#define BUS_GRF_GPIO3B_E_GPIO3B2_E_SHIFT                   (4U)
#define BUS_GRF_GPIO3B_E_GPIO3B2_E_MASK                    (0x3U << BUS_GRF_GPIO3B_E_GPIO3B2_E_SHIFT)                   /* 0x00000030 */
#define BUS_GRF_GPIO3B_E_GPIO3B3_E_SHIFT                   (6U)
#define BUS_GRF_GPIO3B_E_GPIO3B3_E_MASK                    (0x3U << BUS_GRF_GPIO3B_E_GPIO3B3_E_SHIFT)                   /* 0x000000C0 */
#define BUS_GRF_GPIO3B_E_GPIO3B4_E_SHIFT                   (8U)
#define BUS_GRF_GPIO3B_E_GPIO3B4_E_MASK                    (0x3U << BUS_GRF_GPIO3B_E_GPIO3B4_E_SHIFT)                   /* 0x00000300 */
#define BUS_GRF_GPIO3B_E_GPIO3B5_E_SHIFT                   (10U)
#define BUS_GRF_GPIO3B_E_GPIO3B5_E_MASK                    (0x3U << BUS_GRF_GPIO3B_E_GPIO3B5_E_SHIFT)                   /* 0x00000C00 */
#define BUS_GRF_GPIO3B_E_GPIO3B6_E_SHIFT                   (12U)
#define BUS_GRF_GPIO3B_E_GPIO3B6_E_MASK                    (0x3U << BUS_GRF_GPIO3B_E_GPIO3B6_E_SHIFT)                   /* 0x00003000 */
#define BUS_GRF_GPIO3B_E_GPIO3B7_E_SHIFT                   (14U)
#define BUS_GRF_GPIO3B_E_GPIO3B7_E_MASK                    (0x3U << BUS_GRF_GPIO3B_E_GPIO3B7_E_SHIFT)                   /* 0x0000C000 */
/* GPIO3C_E */
#define BUS_GRF_GPIO3C_E_GPIO3C0_E_SHIFT                   (0U)
#define BUS_GRF_GPIO3C_E_GPIO3C0_E_MASK                    (0x3U << BUS_GRF_GPIO3C_E_GPIO3C0_E_SHIFT)                   /* 0x00000003 */
#define BUS_GRF_GPIO3C_E_GPIO3C1_E_SHIFT                   (2U)
#define BUS_GRF_GPIO3C_E_GPIO3C1_E_MASK                    (0x3U << BUS_GRF_GPIO3C_E_GPIO3C1_E_SHIFT)                   /* 0x0000000C */
#define BUS_GRF_GPIO3C_E_GPIO3C2_E_SHIFT                   (4U)
#define BUS_GRF_GPIO3C_E_GPIO3C2_E_MASK                    (0x3U << BUS_GRF_GPIO3C_E_GPIO3C2_E_SHIFT)                   /* 0x00000030 */
#define BUS_GRF_GPIO3C_E_GPIO3C3_E_SHIFT                   (6U)
#define BUS_GRF_GPIO3C_E_GPIO3C3_E_MASK                    (0x3U << BUS_GRF_GPIO3C_E_GPIO3C3_E_SHIFT)                   /* 0x000000C0 */
#define BUS_GRF_GPIO3C_E_GPIO3C4_E_SHIFT                   (8U)
#define BUS_GRF_GPIO3C_E_GPIO3C4_E_MASK                    (0x3U << BUS_GRF_GPIO3C_E_GPIO3C4_E_SHIFT)                   /* 0x00000300 */
#define BUS_GRF_GPIO3C_E_GPIO3C5_E_SHIFT                   (10U)
#define BUS_GRF_GPIO3C_E_GPIO3C5_E_MASK                    (0x3U << BUS_GRF_GPIO3C_E_GPIO3C5_E_SHIFT)                   /* 0x00000C00 */
#define BUS_GRF_GPIO3C_E_GPIO3C6_E_SHIFT                   (12U)
#define BUS_GRF_GPIO3C_E_GPIO3C6_E_MASK                    (0x3U << BUS_GRF_GPIO3C_E_GPIO3C6_E_SHIFT)                   /* 0x00003000 */
#define BUS_GRF_GPIO3C_E_GPIO3C7_E_SHIFT                   (14U)
#define BUS_GRF_GPIO3C_E_GPIO3C7_E_MASK                    (0x3U << BUS_GRF_GPIO3C_E_GPIO3C7_E_SHIFT)                   /* 0x0000C000 */
/* GPIO3D_E */
#define BUS_GRF_GPIO3D_E_GPIO3D0_E_SHIFT                   (0U)
#define BUS_GRF_GPIO3D_E_GPIO3D0_E_MASK                    (0x3U << BUS_GRF_GPIO3D_E_GPIO3D0_E_SHIFT)                   /* 0x00000003 */
#define BUS_GRF_GPIO3D_E_GPIO3D1_E_SHIFT                   (2U)
#define BUS_GRF_GPIO3D_E_GPIO3D1_E_MASK                    (0x3U << BUS_GRF_GPIO3D_E_GPIO3D1_E_SHIFT)                   /* 0x0000000C */
#define BUS_GRF_GPIO3D_E_GPIO3D2_E_SHIFT                   (4U)
#define BUS_GRF_GPIO3D_E_GPIO3D2_E_MASK                    (0x3U << BUS_GRF_GPIO3D_E_GPIO3D2_E_SHIFT)                   /* 0x00000030 */
#define BUS_GRF_GPIO3D_E_GPIO3D3_E_SHIFT                   (6U)
#define BUS_GRF_GPIO3D_E_GPIO3D3_E_MASK                    (0x3U << BUS_GRF_GPIO3D_E_GPIO3D3_E_SHIFT)                   /* 0x000000C0 */
#define BUS_GRF_GPIO3D_E_GPIO3D4_E_SHIFT                   (8U)
#define BUS_GRF_GPIO3D_E_GPIO3D4_E_MASK                    (0x3U << BUS_GRF_GPIO3D_E_GPIO3D4_E_SHIFT)                   /* 0x00000300 */
#define BUS_GRF_GPIO3D_E_GPIO3D5_E_SHIFT                   (10U)
#define BUS_GRF_GPIO3D_E_GPIO3D5_E_MASK                    (0x3U << BUS_GRF_GPIO3D_E_GPIO3D5_E_SHIFT)                   /* 0x00000C00 */
#define BUS_GRF_GPIO3D_E_GPIO3D6_E_SHIFT                   (12U)
#define BUS_GRF_GPIO3D_E_GPIO3D6_E_MASK                    (0x3U << BUS_GRF_GPIO3D_E_GPIO3D6_E_SHIFT)                   /* 0x00003000 */
#define BUS_GRF_GPIO3D_E_GPIO3D7_E_SHIFT                   (14U)
#define BUS_GRF_GPIO3D_E_GPIO3D7_E_MASK                    (0x3U << BUS_GRF_GPIO3D_E_GPIO3D7_E_SHIFT)                   /* 0x0000C000 */
/* GPIO4A_E */
#define BUS_GRF_GPIO4A_E_GPIO4A0_E_SHIFT                   (0U)
#define BUS_GRF_GPIO4A_E_GPIO4A0_E_MASK                    (0x3U << BUS_GRF_GPIO4A_E_GPIO4A0_E_SHIFT)                   /* 0x00000003 */
#define BUS_GRF_GPIO4A_E_GPIO4A1_E_SHIFT                   (2U)
#define BUS_GRF_GPIO4A_E_GPIO4A1_E_MASK                    (0x3U << BUS_GRF_GPIO4A_E_GPIO4A1_E_SHIFT)                   /* 0x0000000C */
#define BUS_GRF_GPIO4A_E_GPIO4A2_E_SHIFT                   (4U)
#define BUS_GRF_GPIO4A_E_GPIO4A2_E_MASK                    (0x3U << BUS_GRF_GPIO4A_E_GPIO4A2_E_SHIFT)                   /* 0x00000030 */
#define BUS_GRF_GPIO4A_E_GPIO4A3_E_SHIFT                   (6U)
#define BUS_GRF_GPIO4A_E_GPIO4A3_E_MASK                    (0x3U << BUS_GRF_GPIO4A_E_GPIO4A3_E_SHIFT)                   /* 0x000000C0 */
#define BUS_GRF_GPIO4A_E_GPIO4A4_E_SHIFT                   (8U)
#define BUS_GRF_GPIO4A_E_GPIO4A4_E_MASK                    (0x3U << BUS_GRF_GPIO4A_E_GPIO4A4_E_SHIFT)                   /* 0x00000300 */
#define BUS_GRF_GPIO4A_E_GPIO4A5_E_SHIFT                   (10U)
#define BUS_GRF_GPIO4A_E_GPIO4A5_E_MASK                    (0x3U << BUS_GRF_GPIO4A_E_GPIO4A5_E_SHIFT)                   /* 0x00000C00 */
#define BUS_GRF_GPIO4A_E_GPIO4A6_E_SHIFT                   (12U)
#define BUS_GRF_GPIO4A_E_GPIO4A6_E_MASK                    (0x3U << BUS_GRF_GPIO4A_E_GPIO4A6_E_SHIFT)                   /* 0x00003000 */
#define BUS_GRF_GPIO4A_E_GPIO4A7_E_SHIFT                   (14U)
#define BUS_GRF_GPIO4A_E_GPIO4A7_E_MASK                    (0x3U << BUS_GRF_GPIO4A_E_GPIO4A7_E_SHIFT)                   /* 0x0000C000 */
/* GPIO4B_E */
#define BUS_GRF_GPIO4B_E_GPIO4B0_E_SHIFT                   (0U)
#define BUS_GRF_GPIO4B_E_GPIO4B0_E_MASK                    (0x3U << BUS_GRF_GPIO4B_E_GPIO4B0_E_SHIFT)                   /* 0x00000003 */
#define BUS_GRF_GPIO4B_E_GPIO4B1_E_SHIFT                   (2U)
#define BUS_GRF_GPIO4B_E_GPIO4B1_E_MASK                    (0x3U << BUS_GRF_GPIO4B_E_GPIO4B1_E_SHIFT)                   /* 0x0000000C */
#define BUS_GRF_GPIO4B_E_GPIO4B2_E_SHIFT                   (4U)
#define BUS_GRF_GPIO4B_E_GPIO4B2_E_MASK                    (0x3U << BUS_GRF_GPIO4B_E_GPIO4B2_E_SHIFT)                   /* 0x00000030 */
#define BUS_GRF_GPIO4B_E_GPIO4B3_E_SHIFT                   (6U)
#define BUS_GRF_GPIO4B_E_GPIO4B3_E_MASK                    (0x3U << BUS_GRF_GPIO4B_E_GPIO4B3_E_SHIFT)                   /* 0x000000C0 */
#define BUS_GRF_GPIO4B_E_GPIO4B4_E_SHIFT                   (8U)
#define BUS_GRF_GPIO4B_E_GPIO4B4_E_MASK                    (0x3U << BUS_GRF_GPIO4B_E_GPIO4B4_E_SHIFT)                   /* 0x00000300 */
#define BUS_GRF_GPIO4B_E_GPIO4B5_E_SHIFT                   (10U)
#define BUS_GRF_GPIO4B_E_GPIO4B5_E_MASK                    (0x3U << BUS_GRF_GPIO4B_E_GPIO4B5_E_SHIFT)                   /* 0x00000C00 */
#define BUS_GRF_GPIO4B_E_GPIO4B6_E_SHIFT                   (12U)
#define BUS_GRF_GPIO4B_E_GPIO4B6_E_MASK                    (0x3U << BUS_GRF_GPIO4B_E_GPIO4B6_E_SHIFT)                   /* 0x00003000 */
#define BUS_GRF_GPIO4B_E_GPIO4B7_E_SHIFT                   (14U)
#define BUS_GRF_GPIO4B_E_GPIO4B7_E_MASK                    (0x3U << BUS_GRF_GPIO4B_E_GPIO4B7_E_SHIFT)                   /* 0x0000C000 */
/* GPIO4C_E */
#define BUS_GRF_GPIO4C_E_GPIO4C0_E_SHIFT                   (0U)
#define BUS_GRF_GPIO4C_E_GPIO4C0_E_MASK                    (0x3U << BUS_GRF_GPIO4C_E_GPIO4C0_E_SHIFT)                   /* 0x00000003 */
#define BUS_GRF_GPIO4C_E_GPIO4C1_E_SHIFT                   (2U)
#define BUS_GRF_GPIO4C_E_GPIO4C1_E_MASK                    (0x3U << BUS_GRF_GPIO4C_E_GPIO4C1_E_SHIFT)                   /* 0x0000000C */
#define BUS_GRF_GPIO4C_E_GPIO4C2_E_SHIFT                   (4U)
#define BUS_GRF_GPIO4C_E_GPIO4C2_E_MASK                    (0x3U << BUS_GRF_GPIO4C_E_GPIO4C2_E_SHIFT)                   /* 0x00000030 */
#define BUS_GRF_GPIO4C_E_GPIO4C3_E_SHIFT                   (6U)
#define BUS_GRF_GPIO4C_E_GPIO4C3_E_MASK                    (0x3U << BUS_GRF_GPIO4C_E_GPIO4C3_E_SHIFT)                   /* 0x000000C0 */
#define BUS_GRF_GPIO4C_E_GPIO4C4_E_SHIFT                   (8U)
#define BUS_GRF_GPIO4C_E_GPIO4C4_E_MASK                    (0x3U << BUS_GRF_GPIO4C_E_GPIO4C4_E_SHIFT)                   /* 0x00000300 */
#define BUS_GRF_GPIO4C_E_GPIO4C5_E_SHIFT                   (10U)
#define BUS_GRF_GPIO4C_E_GPIO4C5_E_MASK                    (0x3U << BUS_GRF_GPIO4C_E_GPIO4C5_E_SHIFT)                   /* 0x00000C00 */
#define BUS_GRF_GPIO4C_E_GPIO4C6_E_SHIFT                   (12U)
#define BUS_GRF_GPIO4C_E_GPIO4C6_E_MASK                    (0x3U << BUS_GRF_GPIO4C_E_GPIO4C6_E_SHIFT)                   /* 0x00003000 */
#define BUS_GRF_GPIO4C_E_GPIO4C7_E_SHIFT                   (14U)
#define BUS_GRF_GPIO4C_E_GPIO4C7_E_MASK                    (0x3U << BUS_GRF_GPIO4C_E_GPIO4C7_E_SHIFT)                   /* 0x0000C000 */
/* IOFUNC_CON0 */
#define BUS_GRF_IOFUNC_CON0_I2S0_TX_LRCK_SEL_SHIFT         (0U)
#define BUS_GRF_IOFUNC_CON0_I2S0_TX_LRCK_SEL_MASK          (0x3U << BUS_GRF_IOFUNC_CON0_I2S0_TX_LRCK_SEL_SHIFT)         /* 0x00000003 */
#define BUS_GRF_IOFUNC_CON0_I2S0_MCLK_SEL_SHIFT            (2U)
#define BUS_GRF_IOFUNC_CON0_I2S0_MCLK_SEL_MASK             (0x1U << BUS_GRF_IOFUNC_CON0_I2S0_MCLK_SEL_SHIFT)            /* 0x00000004 */
#define BUS_GRF_IOFUNC_CON0_I2C2_SEL_SHIFT                 (3U)
#define BUS_GRF_IOFUNC_CON0_I2C2_SEL_MASK                  (0x1U << BUS_GRF_IOFUNC_CON0_I2C2_SEL_SHIFT)                 /* 0x00000008 */
#define BUS_GRF_IOFUNC_CON0_SPI2_SEL_SHIFT                 (4U)
#define BUS_GRF_IOFUNC_CON0_SPI2_SEL_MASK                  (0x1U << BUS_GRF_IOFUNC_CON0_SPI2_SEL_SHIFT)                 /* 0x00000010 */
#define BUS_GRF_IOFUNC_CON0_SPI1_SEL_SHIFT                 (5U)
#define BUS_GRF_IOFUNC_CON0_SPI1_SEL_MASK                  (0x1U << BUS_GRF_IOFUNC_CON0_SPI1_SEL_SHIFT)                 /* 0x00000020 */
#define BUS_GRF_IOFUNC_CON0_PCIEPHY_DEBUG_SEL_SHIFT        (6U)
#define BUS_GRF_IOFUNC_CON0_PCIEPHY_DEBUG_SEL_MASK         (0x3U << BUS_GRF_IOFUNC_CON0_PCIEPHY_DEBUG_SEL_SHIFT)        /* 0x000000C0 */
#define BUS_GRF_IOFUNC_CON0_I2S1_2CH_LRCK_SEL_SHIFT        (9U)
#define BUS_GRF_IOFUNC_CON0_I2S1_2CH_LRCK_SEL_MASK         (0x1U << BUS_GRF_IOFUNC_CON0_I2S1_2CH_LRCK_SEL_SHIFT)        /* 0x00000200 */
#define BUS_GRF_IOFUNC_CON0_UART1_SEL_SHIFT                (13U)
#define BUS_GRF_IOFUNC_CON0_UART1_SEL_MASK                 (0x1U << BUS_GRF_IOFUNC_CON0_UART1_SEL_SHIFT)                /* 0x00002000 */
#define BUS_GRF_IOFUNC_CON0_UART2_SEL_SHIFT                (14U)
#define BUS_GRF_IOFUNC_CON0_UART2_SEL_MASK                 (0x3U << BUS_GRF_IOFUNC_CON0_UART2_SEL_SHIFT)                /* 0x0000C000 */
/* SOC_CON0 */
#define BUS_GRF_SOC_CON0_TSADC_TESTBIT_SHIFT               (0U)
#define BUS_GRF_SOC_CON0_TSADC_TESTBIT_MASK                (0xFFFFU << BUS_GRF_SOC_CON0_TSADC_TESTBIT_SHIFT)            /* 0x0000FFFF */
/* SOC_CON1 */
#define BUS_GRF_SOC_CON1_TSADC_CHSEL_SHIFT                 (0U)
#define BUS_GRF_SOC_CON1_TSADC_CHSEL_MASK                  (0x3U << BUS_GRF_SOC_CON1_TSADC_CHSEL_SHIFT)                 /* 0x00000003 */
#define BUS_GRF_SOC_CON1_TSADC_TSEN_PD_0_SHIFT             (2U)
#define BUS_GRF_SOC_CON1_TSADC_TSEN_PD_0_MASK              (0x1U << BUS_GRF_SOC_CON1_TSADC_TSEN_PD_0_SHIFT)             /* 0x00000004 */
#define BUS_GRF_SOC_CON1_TSADC_DIG_BYPASS_SHIFT            (3U)
#define BUS_GRF_SOC_CON1_TSADC_DIG_BYPASS_MASK             (0x1U << BUS_GRF_SOC_CON1_TSADC_DIG_BYPASS_SHIFT)            /* 0x00000008 */
#define BUS_GRF_SOC_CON1_TSADC_CLK_SEL_SHIFT               (4U)
#define BUS_GRF_SOC_CON1_TSADC_CLK_SEL_MASK                (0x1U << BUS_GRF_SOC_CON1_TSADC_CLK_SEL_SHIFT)               /* 0x00000010 */
#define BUS_GRF_SOC_CON1_UART6_CTS_INV_SHIFT               (8U)
#define BUS_GRF_SOC_CON1_UART6_CTS_INV_MASK                (0x1U << BUS_GRF_SOC_CON1_UART6_CTS_INV_SHIFT)               /* 0x00000100 */
#define BUS_GRF_SOC_CON1_UART6_RTS_INV_SHIFT               (9U)
#define BUS_GRF_SOC_CON1_UART6_RTS_INV_MASK                (0x1U << BUS_GRF_SOC_CON1_UART6_RTS_INV_SHIFT)               /* 0x00000200 */
#define BUS_GRF_SOC_CON1_UART7_CTS_INV_SHIFT               (10U)
#define BUS_GRF_SOC_CON1_UART7_CTS_INV_MASK                (0x1U << BUS_GRF_SOC_CON1_UART7_CTS_INV_SHIFT)               /* 0x00000400 */
#define BUS_GRF_SOC_CON1_UART7_RTS_INV_SHIFT               (11U)
#define BUS_GRF_SOC_CON1_UART7_RTS_INV_MASK                (0x1U << BUS_GRF_SOC_CON1_UART7_RTS_INV_SHIFT)               /* 0x00000800 */
/* SOC_CON2 */
#define BUS_GRF_SOC_CON2_UART1_CTS_INV_SHIFT               (2U)
#define BUS_GRF_SOC_CON2_UART1_CTS_INV_MASK                (0x1U << BUS_GRF_SOC_CON2_UART1_CTS_INV_SHIFT)               /* 0x00000004 */
#define BUS_GRF_SOC_CON2_UART1_RTS_INV_SHIFT               (3U)
#define BUS_GRF_SOC_CON2_UART1_RTS_INV_MASK                (0x1U << BUS_GRF_SOC_CON2_UART1_RTS_INV_SHIFT)               /* 0x00000008 */
#define BUS_GRF_SOC_CON2_UART2_CTS_INV_SHIFT               (4U)
#define BUS_GRF_SOC_CON2_UART2_CTS_INV_MASK                (0x1U << BUS_GRF_SOC_CON2_UART2_CTS_INV_SHIFT)               /* 0x00000010 */
#define BUS_GRF_SOC_CON2_UART2_RTS_INV_SHIFT               (5U)
#define BUS_GRF_SOC_CON2_UART2_RTS_INV_MASK                (0x1U << BUS_GRF_SOC_CON2_UART2_RTS_INV_SHIFT)               /* 0x00000020 */
#define BUS_GRF_SOC_CON2_UART3_CTS_INV_SHIFT               (6U)
#define BUS_GRF_SOC_CON2_UART3_CTS_INV_MASK                (0x1U << BUS_GRF_SOC_CON2_UART3_CTS_INV_SHIFT)               /* 0x00000040 */
#define BUS_GRF_SOC_CON2_UART3_RTS_INV_SHIFT               (7U)
#define BUS_GRF_SOC_CON2_UART3_RTS_INV_MASK                (0x1U << BUS_GRF_SOC_CON2_UART3_RTS_INV_SHIFT)               /* 0x00000080 */
#define BUS_GRF_SOC_CON2_UART4_CTS_INV_SHIFT               (8U)
#define BUS_GRF_SOC_CON2_UART4_CTS_INV_MASK                (0x1U << BUS_GRF_SOC_CON2_UART4_CTS_INV_SHIFT)               /* 0x00000100 */
#define BUS_GRF_SOC_CON2_UART4_RTS_INV_SHIFT               (9U)
#define BUS_GRF_SOC_CON2_UART4_RTS_INV_MASK                (0x1U << BUS_GRF_SOC_CON2_UART4_RTS_INV_SHIFT)               /* 0x00000200 */
#define BUS_GRF_SOC_CON2_UART5_CTS_INV_SHIFT               (10U)
#define BUS_GRF_SOC_CON2_UART5_CTS_INV_MASK                (0x1U << BUS_GRF_SOC_CON2_UART5_CTS_INV_SHIFT)               /* 0x00000400 */
#define BUS_GRF_SOC_CON2_UART5_RTS_INV_SHIFT               (11U)
#define BUS_GRF_SOC_CON2_UART5_RTS_INV_MASK                (0x1U << BUS_GRF_SOC_CON2_UART5_RTS_INV_SHIFT)               /* 0x00000800 */
#define BUS_GRF_SOC_CON2_WDTNS_GLB_RESET_EN_SHIFT          (12U)
#define BUS_GRF_SOC_CON2_WDTNS_GLB_RESET_EN_MASK           (0x1U << BUS_GRF_SOC_CON2_WDTNS_GLB_RESET_EN_SHIFT)          /* 0x00001000 */
#define BUS_GRF_SOC_CON2_SYSTEM_MEM_CS_CLK_GATE_EN_SHIFT   (13U)
#define BUS_GRF_SOC_CON2_SYSTEM_MEM_CS_CLK_GATE_EN_MASK    (0x1U << BUS_GRF_SOC_CON2_SYSTEM_MEM_CS_CLK_GATE_EN_SHIFT)   /* 0x00002000 */
#define BUS_GRF_SOC_CON2_NPU_DISABLE_RAMCLK_GATE_SHIFT     (14U)
#define BUS_GRF_SOC_CON2_NPU_DISABLE_RAMCLK_GATE_MASK      (0x1U << BUS_GRF_SOC_CON2_NPU_DISABLE_RAMCLK_GATE_SHIFT)     /* 0x00004000 */
#define BUS_GRF_SOC_CON2_SYSTEM_MEM_INTL_SHIFT             (15U)
#define BUS_GRF_SOC_CON2_SYSTEM_MEM_INTL_MASK              (0x1U << BUS_GRF_SOC_CON2_SYSTEM_MEM_INTL_SHIFT)             /* 0x00008000 */
/* SOC_CON3 */
#define BUS_GRF_SOC_CON3_SARADC_ANA_REG_SHIFT              (0U)
#define BUS_GRF_SOC_CON3_SARADC_ANA_REG_MASK               (0xFFFFU << BUS_GRF_SOC_CON3_SARADC_ANA_REG_SHIFT)           /* 0x0000FFFF */
/* SOC_CON4 */
#define BUS_GRF_SOC_CON4_PMU_PWR_IDLE_REQ_SHIFT            (14U)
#define BUS_GRF_SOC_CON4_PMU_PWR_IDLE_REQ_MASK             (0x1U << BUS_GRF_SOC_CON4_PMU_PWR_IDLE_REQ_SHIFT)            /* 0x00004000 */
#define BUS_GRF_SOC_CON4_GIC_PWR_IDLE_REQ_SHIFT            (15U)
#define BUS_GRF_SOC_CON4_GIC_PWR_IDLE_REQ_MASK             (0x1U << BUS_GRF_SOC_CON4_GIC_PWR_IDLE_REQ_SHIFT)            /* 0x00008000 */
/* SOC_CON5 */
#define BUS_GRF_SOC_CON5_SDCARD_DECTN_DLY_SHIFT            (0U)
#define BUS_GRF_SOC_CON5_SDCARD_DECTN_DLY_MASK             (0xFFFFFFFFU << BUS_GRF_SOC_CON5_SDCARD_DECTN_DLY_SHIFT)     /* 0xFFFFFFFF */
/* VI_CON0 */
#define BUS_GRF_VI_CON0_CSIPHY_FORCERXMODE_0_SHIFT         (0U)
#define BUS_GRF_VI_CON0_CSIPHY_FORCERXMODE_0_MASK          (0x1U << BUS_GRF_VI_CON0_CSIPHY_FORCERXMODE_0_SHIFT)         /* 0x00000001 */
#define BUS_GRF_VI_CON0_CSIPHY_FORCERXMODE_1_SHIFT         (1U)
#define BUS_GRF_VI_CON0_CSIPHY_FORCERXMODE_1_MASK          (0x1U << BUS_GRF_VI_CON0_CSIPHY_FORCERXMODE_1_SHIFT)         /* 0x00000002 */
#define BUS_GRF_VI_CON0_CSIPHY_FORCERXMODE_2_SHIFT         (2U)
#define BUS_GRF_VI_CON0_CSIPHY_FORCERXMODE_2_MASK          (0x1U << BUS_GRF_VI_CON0_CSIPHY_FORCERXMODE_2_SHIFT)         /* 0x00000004 */
#define BUS_GRF_VI_CON0_CSIPHY_FORCERXMODE_3_SHIFT         (3U)
#define BUS_GRF_VI_CON0_CSIPHY_FORCERXMODE_3_MASK          (0x1U << BUS_GRF_VI_CON0_CSIPHY_FORCERXMODE_3_SHIFT)         /* 0x00000008 */
#define BUS_GRF_VI_CON0_CSIPHY_DATALANE_EN_0_SHIFT         (4U)
#define BUS_GRF_VI_CON0_CSIPHY_DATALANE_EN_0_MASK          (0x1U << BUS_GRF_VI_CON0_CSIPHY_DATALANE_EN_0_SHIFT)         /* 0x00000010 */
#define BUS_GRF_VI_CON0_CSIPHY_DATALANE_EN_1_SHIFT         (5U)
#define BUS_GRF_VI_CON0_CSIPHY_DATALANE_EN_1_MASK          (0x1U << BUS_GRF_VI_CON0_CSIPHY_DATALANE_EN_1_SHIFT)         /* 0x00000020 */
#define BUS_GRF_VI_CON0_CSIPHY_DATALANE_EN_2_SHIFT         (6U)
#define BUS_GRF_VI_CON0_CSIPHY_DATALANE_EN_2_MASK          (0x1U << BUS_GRF_VI_CON0_CSIPHY_DATALANE_EN_2_SHIFT)         /* 0x00000040 */
#define BUS_GRF_VI_CON0_CSIPHY_DATALANE_EN_3_SHIFT         (7U)
#define BUS_GRF_VI_CON0_CSIPHY_DATALANE_EN_3_MASK          (0x1U << BUS_GRF_VI_CON0_CSIPHY_DATALANE_EN_3_SHIFT)         /* 0x00000080 */
#define BUS_GRF_VI_CON0_CSIPHY_CLKLANE_EN_SHIFT            (8U)
#define BUS_GRF_VI_CON0_CSIPHY_CLKLANE_EN_MASK             (0x1U << BUS_GRF_VI_CON0_CSIPHY_CLKLANE_EN_SHIFT)            /* 0x00000100 */
#define BUS_GRF_VI_CON0_CSIPHY_CLKINV_SELECTION_SHIFT      (9U)
#define BUS_GRF_VI_CON0_CSIPHY_CLKINV_SELECTION_MASK       (0x1U << BUS_GRF_VI_CON0_CSIPHY_CLKINV_SELECTION_SHIFT)      /* 0x00000200 */
#define BUS_GRF_VI_CON0_DVP_CLK_INV_SEL_SHIFT              (12U)
#define BUS_GRF_VI_CON0_DVP_CLK_INV_SEL_MASK               (0x1U << BUS_GRF_VI_CON0_DVP_CLK_INV_SEL_SHIFT)              /* 0x00001000 */
#define BUS_GRF_VI_CON0_ISP_CIF_IF_DATAWIDTH_SHIFT         (13U)
#define BUS_GRF_VI_CON0_ISP_CIF_IF_DATAWIDTH_MASK          (0x3U << BUS_GRF_VI_CON0_ISP_CIF_IF_DATAWIDTH_SHIFT)         /* 0x00006000 */
/* VI_CON1 */
#define BUS_GRF_VI_CON1_CSIPHY_CLKLANE_NUM_SHIFT           (0U)
#define BUS_GRF_VI_CON1_CSIPHY_CLKLANE_NUM_MASK            (0x7FU << BUS_GRF_VI_CON1_CSIPHY_CLKLANE_NUM_SHIFT)          /* 0x0000007F */
#define BUS_GRF_VI_CON1_CIF_CLK_DELAY_EN_SHIFT             (8U)
#define BUS_GRF_VI_CON1_CIF_CLK_DELAY_EN_MASK              (0x1U << BUS_GRF_VI_CON1_CIF_CLK_DELAY_EN_SHIFT)             /* 0x00000100 */
#define BUS_GRF_VI_CON1_CIF_DATAPATH_SHIFT                 (9U)
#define BUS_GRF_VI_CON1_CIF_DATAPATH_MASK                  (0x1U << BUS_GRF_VI_CON1_CIF_DATAPATH_SHIFT)                 /* 0x00000200 */
#define BUS_GRF_VI_CON1_ISP_MAINPRESS_SHIFT                (10U)
#define BUS_GRF_VI_CON1_ISP_MAINPRESS_MASK                 (0x3U << BUS_GRF_VI_CON1_ISP_MAINPRESS_SHIFT)                /* 0x00000C00 */
#define BUS_GRF_VI_CON1_DVP_MAINPRESS_SHIFT                (13U)
#define BUS_GRF_VI_CON1_DVP_MAINPRESS_MASK                 (0x3U << BUS_GRF_VI_CON1_DVP_MAINPRESS_SHIFT)                /* 0x00006000 */
/* VI_STATUS */
#define BUS_GRF_VI_STATUS_CSIPHY_ULPSACTIVENOT_0_SHIFT     (0U)
#define BUS_GRF_VI_STATUS_CSIPHY_ULPSACTIVENOT_0_MASK      (0x1U << BUS_GRF_VI_STATUS_CSIPHY_ULPSACTIVENOT_0_SHIFT)     /* 0x00000001 */
#define BUS_GRF_VI_STATUS_CSIPHY_ULPSACTIVENOT_1_SHIFT     (1U)
#define BUS_GRF_VI_STATUS_CSIPHY_ULPSACTIVENOT_1_MASK      (0x1U << BUS_GRF_VI_STATUS_CSIPHY_ULPSACTIVENOT_1_SHIFT)     /* 0x00000002 */
#define BUS_GRF_VI_STATUS_CSIPHY_ULPSACTIVENOT_2_SHIFT     (2U)
#define BUS_GRF_VI_STATUS_CSIPHY_ULPSACTIVENOT_2_MASK      (0x1U << BUS_GRF_VI_STATUS_CSIPHY_ULPSACTIVENOT_2_SHIFT)     /* 0x00000004 */
#define BUS_GRF_VI_STATUS_CSIPHY_ULPSACTIVENOT_3_SHIFT     (3U)
#define BUS_GRF_VI_STATUS_CSIPHY_ULPSACTIVENOT_3_MASK      (0x1U << BUS_GRF_VI_STATUS_CSIPHY_ULPSACTIVENOT_3_SHIFT)     /* 0x00000008 */
#define BUS_GRF_VI_STATUS_CSIPHY_DIRECTION_SHIFT           (4U)
#define BUS_GRF_VI_STATUS_CSIPHY_DIRECTION_MASK            (0x1U << BUS_GRF_VI_STATUS_CSIPHY_DIRECTION_SHIFT)           /* 0x00000010 */
#define BUS_GRF_VI_STATUS_CSIPHY_RXSKEWCALHS_0_SHIFT       (5U)
#define BUS_GRF_VI_STATUS_CSIPHY_RXSKEWCALHS_0_MASK        (0x1U << BUS_GRF_VI_STATUS_CSIPHY_RXSKEWCALHS_0_SHIFT)       /* 0x00000020 */
#define BUS_GRF_VI_STATUS_CSIPHY_RXSKEWCALHS_1_SHIFT       (6U)
#define BUS_GRF_VI_STATUS_CSIPHY_RXSKEWCALHS_1_MASK        (0x1U << BUS_GRF_VI_STATUS_CSIPHY_RXSKEWCALHS_1_SHIFT)       /* 0x00000040 */
#define BUS_GRF_VI_STATUS_CSIPHY_RXSKEWCALHS_2_SHIFT       (7U)
#define BUS_GRF_VI_STATUS_CSIPHY_RXSKEWCALHS_2_MASK        (0x1U << BUS_GRF_VI_STATUS_CSIPHY_RXSKEWCALHS_2_SHIFT)       /* 0x00000080 */
#define BUS_GRF_VI_STATUS_CSIPHY_RXSKEWCALHS_3_SHIFT       (8U)
#define BUS_GRF_VI_STATUS_CSIPHY_RXSKEWCALHS_3_MASK        (0x1U << BUS_GRF_VI_STATUS_CSIPHY_RXSKEWCALHS_3_SHIFT)       /* 0x00000100 */
#define BUS_GRF_VI_STATUS_CSIPHY_ERRCONTENTIONLP0_0_SHIFT  (9U)
#define BUS_GRF_VI_STATUS_CSIPHY_ERRCONTENTIONLP0_0_MASK   (0x1U << BUS_GRF_VI_STATUS_CSIPHY_ERRCONTENTIONLP0_0_SHIFT)  /* 0x00000200 */
#define BUS_GRF_VI_STATUS_CSIPHY_ERRCONTENTIONLP1_0_SHIFT  (10U)
#define BUS_GRF_VI_STATUS_CSIPHY_ERRCONTENTIONLP1_0_MASK   (0x1U << BUS_GRF_VI_STATUS_CSIPHY_ERRCONTENTIONLP1_0_SHIFT)  /* 0x00000400 */
/* VO_CON0 */
#define BUS_GRF_VO_CON0_VOPRAW_DMA_FINISH_ENABLE_SHIFT     (0U)
#define BUS_GRF_VO_CON0_VOPRAW_DMA_FINISH_ENABLE_MASK      (0x1U << BUS_GRF_VO_CON0_VOPRAW_DMA_FINISH_ENABLE_SHIFT)     /* 0x00000001 */
#define BUS_GRF_VO_CON0_VOPLITE_DMA_FINISH_ENABLE_SHIFT    (1U)
#define BUS_GRF_VO_CON0_VOPLITE_DMA_FINISH_ENABLE_MASK     (0x1U << BUS_GRF_VO_CON0_VOPLITE_DMA_FINISH_ENABLE_SHIFT)    /* 0x00000002 */
#define BUS_GRF_VO_CON0_DSIHOST_DPISHUTDN_SHIFT            (2U)
#define BUS_GRF_VO_CON0_DSIHOST_DPISHUTDN_MASK             (0x1U << BUS_GRF_VO_CON0_DSIHOST_DPISHUTDN_SHIFT)            /* 0x00000004 */
#define BUS_GRF_VO_CON0_DSIHOST_DPICOLORM_SHIFT            (3U)
#define BUS_GRF_VO_CON0_DSIHOST_DPICOLORM_MASK             (0x1U << BUS_GRF_VO_CON0_DSIHOST_DPICOLORM_SHIFT)            /* 0x00000008 */
#define BUS_GRF_VO_CON0_DSIHOST_DPIUPDATECFG_SHIFT         (7U)
#define BUS_GRF_VO_CON0_DSIHOST_DPIUPDATECFG_MASK          (0x1U << BUS_GRF_VO_CON0_DSIHOST_DPIUPDATECFG_SHIFT)         /* 0x00000080 */
#define BUS_GRF_VO_CON0_DSIPHY_SELECTION_SHIFT             (8U)
#define BUS_GRF_VO_CON0_DSIPHY_SELECTION_MASK              (0x1U << BUS_GRF_VO_CON0_DSIPHY_SELECTION_SHIFT)             /* 0x00000100 */
#define BUS_GRF_VO_CON0_DCF_VOP_STANDBY_SEL_SHIFT          (10U)
#define BUS_GRF_VO_CON0_DCF_VOP_STANDBY_SEL_MASK           (0x3U << BUS_GRF_VO_CON0_DCF_VOP_STANDBY_SEL_SHIFT)          /* 0x00000C00 */
#define BUS_GRF_VO_CON0_VOPRAW_PRESS_SHIFT                 (12U)
#define BUS_GRF_VO_CON0_VOPRAW_PRESS_MASK                  (0x3U << BUS_GRF_VO_CON0_VOPRAW_PRESS_SHIFT)                 /* 0x00003000 */
#define BUS_GRF_VO_CON0_VOPLITE_PRESS_SHIFT                (14U)
#define BUS_GRF_VO_CON0_VOPLITE_PRESS_MASK                 (0x3U << BUS_GRF_VO_CON0_VOPLITE_PRESS_SHIFT)                /* 0x0000C000 */
/* VO_CON1 */
#define BUS_GRF_VO_CON1_RGB_BYPASS_SHIFT                   (3U)
#define BUS_GRF_VO_CON1_RGB_BYPASS_MASK                    (0x1U << BUS_GRF_VO_CON1_RGB_BYPASS_SHIFT)                   /* 0x00000008 */
#define BUS_GRF_VO_CON1_LCDC_DCLK_INV_SEL_SHIFT            (4U)
#define BUS_GRF_VO_CON1_LCDC_DCLK_INV_SEL_MASK             (0x1U << BUS_GRF_VO_CON1_LCDC_DCLK_INV_SEL_SHIFT)            /* 0x00000010 */
#define BUS_GRF_VO_CON1_DSIPHY_LANE0_TURNDISABLE_SHIFT     (5U)
#define BUS_GRF_VO_CON1_DSIPHY_LANE0_TURNDISABLE_MASK      (0x1U << BUS_GRF_VO_CON1_DSIPHY_LANE0_TURNDISABLE_SHIFT)     /* 0x00000020 */
#define BUS_GRF_VO_CON1_DSIPHY_FORCERXMODE_SHIFT           (6U)
#define BUS_GRF_VO_CON1_DSIPHY_FORCERXMODE_MASK            (0x1U << BUS_GRF_VO_CON1_DSIPHY_FORCERXMODE_SHIFT)           /* 0x00000040 */
#define BUS_GRF_VO_CON1_DSIPHY_LANE0_FRCTXSTPM_SHIFT       (7U)
#define BUS_GRF_VO_CON1_DSIPHY_LANE0_FRCTXSTPM_MASK        (0x1U << BUS_GRF_VO_CON1_DSIPHY_LANE0_FRCTXSTPM_SHIFT)       /* 0x00000080 */
#define BUS_GRF_VO_CON1_DSIPHY_LANE1_FRCTXSTPM_SHIFT       (8U)
#define BUS_GRF_VO_CON1_DSIPHY_LANE1_FRCTXSTPM_MASK        (0x1U << BUS_GRF_VO_CON1_DSIPHY_LANE1_FRCTXSTPM_SHIFT)       /* 0x00000100 */
#define BUS_GRF_VO_CON1_DSIPHY_LANE2_FRCTXSTPM_SHIFT       (9U)
#define BUS_GRF_VO_CON1_DSIPHY_LANE2_FRCTXSTPM_MASK        (0x1U << BUS_GRF_VO_CON1_DSIPHY_LANE2_FRCTXSTPM_SHIFT)       /* 0x00000200 */
#define BUS_GRF_VO_CON1_DSIPHY_LANE3_FRCTXSTPM_SHIFT       (10U)
#define BUS_GRF_VO_CON1_DSIPHY_LANE3_FRCTXSTPM_MASK        (0x1U << BUS_GRF_VO_CON1_DSIPHY_LANE3_FRCTXSTPM_SHIFT)       /* 0x00000400 */
#define BUS_GRF_VO_CON1_DSIPHY_TXSKEWCALHS_CK_SHIFT        (11U)
#define BUS_GRF_VO_CON1_DSIPHY_TXSKEWCALHS_CK_MASK         (0x1U << BUS_GRF_VO_CON1_DSIPHY_TXSKEWCALHS_CK_SHIFT)        /* 0x00000800 */
#define BUS_GRF_VO_CON1_DSIPHY_TXSKEWCALHS_0_SHIFT         (12U)
#define BUS_GRF_VO_CON1_DSIPHY_TXSKEWCALHS_0_MASK          (0x1U << BUS_GRF_VO_CON1_DSIPHY_TXSKEWCALHS_0_SHIFT)         /* 0x00001000 */
#define BUS_GRF_VO_CON1_DSIPHY_TXSKEWCALHS_1_SHIFT         (13U)
#define BUS_GRF_VO_CON1_DSIPHY_TXSKEWCALHS_1_MASK          (0x1U << BUS_GRF_VO_CON1_DSIPHY_TXSKEWCALHS_1_SHIFT)         /* 0x00002000 */
#define BUS_GRF_VO_CON1_DSIPHY_TXSKEWCALHS_2_SHIFT         (14U)
#define BUS_GRF_VO_CON1_DSIPHY_TXSKEWCALHS_2_MASK          (0x1U << BUS_GRF_VO_CON1_DSIPHY_TXSKEWCALHS_2_SHIFT)         /* 0x00004000 */
#define BUS_GRF_VO_CON1_DSIPHY_TXSKEWCALHS_3_SHIFT         (15U)
#define BUS_GRF_VO_CON1_DSIPHY_TXSKEWCALHS_3_MASK          (0x1U << BUS_GRF_VO_CON1_DSIPHY_TXSKEWCALHS_3_SHIFT)         /* 0x00008000 */
/* SOC_STATUS0 */
#define BUS_GRF_SOC_STATUS0_APLL_LOCK_SHIFT                (0U)
#define BUS_GRF_SOC_STATUS0_APLL_LOCK_MASK                 (0x1U << BUS_GRF_SOC_STATUS0_APLL_LOCK_SHIFT)                /* 0x00000001 */
#define BUS_GRF_SOC_STATUS0_DPLL_LOCK_SHIFT                (1U)
#define BUS_GRF_SOC_STATUS0_DPLL_LOCK_MASK                 (0x1U << BUS_GRF_SOC_STATUS0_DPLL_LOCK_SHIFT)                /* 0x00000002 */
#define BUS_GRF_SOC_STATUS0_CPLL_LOCK_SHIFT                (2U)
#define BUS_GRF_SOC_STATUS0_CPLL_LOCK_MASK                 (0x1U << BUS_GRF_SOC_STATUS0_CPLL_LOCK_SHIFT)                /* 0x00000004 */
#define BUS_GRF_SOC_STATUS0_GPLL_LOCK_SHIFT                (3U)
#define BUS_GRF_SOC_STATUS0_GPLL_LOCK_MASK                 (0x1U << BUS_GRF_SOC_STATUS0_GPLL_LOCK_SHIFT)                /* 0x00000008 */
#define BUS_GRF_SOC_STATUS0_PPLL_LOCK_SHIFT                (4U)
#define BUS_GRF_SOC_STATUS0_PPLL_LOCK_MASK                 (0x1U << BUS_GRF_SOC_STATUS0_PPLL_LOCK_SHIFT)                /* 0x00000010 */
#define BUS_GRF_SOC_STATUS0_NPLL_LOCK_SHIFT                (5U)
#define BUS_GRF_SOC_STATUS0_NPLL_LOCK_MASK                 (0x1U << BUS_GRF_SOC_STATUS0_NPLL_LOCK_SHIFT)                /* 0x00000020 */
#define BUS_GRF_SOC_STATUS0_DDR_CMD_PLL_LOCK_SHIFT         (6U)
#define BUS_GRF_SOC_STATUS0_DDR_CMD_PLL_LOCK_MASK          (0x1U << BUS_GRF_SOC_STATUS0_DDR_CMD_PLL_LOCK_SHIFT)         /* 0x00000040 */
#define BUS_GRF_SOC_STATUS0_TIMER_EN_STATUS0_SHIFT         (11U)
#define BUS_GRF_SOC_STATUS0_TIMER_EN_STATUS0_MASK          (0x1U << BUS_GRF_SOC_STATUS0_TIMER_EN_STATUS0_SHIFT)         /* 0x00000800 */
#define BUS_GRF_SOC_STATUS0_TIMER_EN_STATUS1_SHIFT         (12U)
#define BUS_GRF_SOC_STATUS0_TIMER_EN_STATUS1_MASK          (0x1U << BUS_GRF_SOC_STATUS0_TIMER_EN_STATUS1_SHIFT)         /* 0x00001000 */
#define BUS_GRF_SOC_STATUS0_TIMER_EN_STATUS2_SHIFT         (13U)
#define BUS_GRF_SOC_STATUS0_TIMER_EN_STATUS2_MASK          (0x1U << BUS_GRF_SOC_STATUS0_TIMER_EN_STATUS2_SHIFT)         /* 0x00002000 */
#define BUS_GRF_SOC_STATUS0_TIMER_EN_STATUS3_SHIFT         (14U)
#define BUS_GRF_SOC_STATUS0_TIMER_EN_STATUS3_MASK          (0x1U << BUS_GRF_SOC_STATUS0_TIMER_EN_STATUS3_SHIFT)         /* 0x00004000 */
#define BUS_GRF_SOC_STATUS0_TIMER_EN_STATUS4_SHIFT         (15U)
#define BUS_GRF_SOC_STATUS0_TIMER_EN_STATUS4_MASK          (0x1U << BUS_GRF_SOC_STATUS0_TIMER_EN_STATUS4_SHIFT)         /* 0x00008000 */
#define BUS_GRF_SOC_STATUS0_TIMER_EN_STATUS5_SHIFT         (16U)
#define BUS_GRF_SOC_STATUS0_TIMER_EN_STATUS5_MASK          (0x1U << BUS_GRF_SOC_STATUS0_TIMER_EN_STATUS5_SHIFT)         /* 0x00010000 */
#define BUS_GRF_SOC_STATUS0_VOPRAW_DMA_FINISH_SHIFT        (17U)
#define BUS_GRF_SOC_STATUS0_VOPRAW_DMA_FINISH_MASK         (0x1U << BUS_GRF_SOC_STATUS0_VOPRAW_DMA_FINISH_SHIFT)        /* 0x00020000 */
#define BUS_GRF_SOC_STATUS0_VOPLITE_DMA_FINISH_SHIFT       (18U)
#define BUS_GRF_SOC_STATUS0_VOPLITE_DMA_FINISH_MASK        (0x1U << BUS_GRF_SOC_STATUS0_VOPLITE_DMA_FINISH_SHIFT)       /* 0x00040000 */
#define BUS_GRF_SOC_STATUS0_PMU_PWR_IDLE_SHIFT             (19U)
#define BUS_GRF_SOC_STATUS0_PMU_PWR_IDLE_MASK              (0x1U << BUS_GRF_SOC_STATUS0_PMU_PWR_IDLE_SHIFT)             /* 0x00080000 */
#define BUS_GRF_SOC_STATUS0_PMU_PWR_IDLE_ACK_SHIFT         (20U)
#define BUS_GRF_SOC_STATUS0_PMU_PWR_IDLE_ACK_MASK          (0x1U << BUS_GRF_SOC_STATUS0_PMU_PWR_IDLE_ACK_SHIFT)         /* 0x00100000 */
#define BUS_GRF_SOC_STATUS0_GIC_PWR_IDLE_SHIFT             (21U)
#define BUS_GRF_SOC_STATUS0_GIC_PWR_IDLE_MASK              (0x1U << BUS_GRF_SOC_STATUS0_GIC_PWR_IDLE_SHIFT)             /* 0x00200000 */
#define BUS_GRF_SOC_STATUS0_GIC_PWR_IDLE_STATUS_SHIFT      (22U)
#define BUS_GRF_SOC_STATUS0_GIC_PWR_IDLE_STATUS_MASK       (0x1U << BUS_GRF_SOC_STATUS0_GIC_PWR_IDLE_STATUS_SHIFT)      /* 0x00400000 */
#define BUS_GRF_SOC_STATUS0_GPIO1B6_DATAIN_SHIFT           (23U)
#define BUS_GRF_SOC_STATUS0_GPIO1B6_DATAIN_MASK            (0x1U << BUS_GRF_SOC_STATUS0_GPIO1B6_DATAIN_SHIFT)           /* 0x00800000 */
#define BUS_GRF_SOC_STATUS0_NPU_DEBUG_SHIFT                (24U)
#define BUS_GRF_SOC_STATUS0_NPU_DEBUG_MASK                 (0xFFU << BUS_GRF_SOC_STATUS0_NPU_DEBUG_SHIFT)               /* 0xFF000000 */
/* CPU_CON0 */
#define BUS_GRF_CPU_CON0_L1RSTDISABLE_SHIFT                (0U)
#define BUS_GRF_CPU_CON0_L1RSTDISABLE_MASK                 (0x3U << BUS_GRF_CPU_CON0_L1RSTDISABLE_SHIFT)                /* 0x00000003 */
#define BUS_GRF_CPU_CON0_L2RSTDISABLE_SHIFT                (4U)
#define BUS_GRF_CPU_CON0_L2RSTDISABLE_MASK                 (0x1U << BUS_GRF_CPU_CON0_L2RSTDISABLE_SHIFT)                /* 0x00000010 */
#define BUS_GRF_CPU_CON0_CFGEND_SHIFT                      (8U)
#define BUS_GRF_CPU_CON0_CFGEND_MASK                       (0x3U << BUS_GRF_CPU_CON0_CFGEND_SHIFT)                      /* 0x00000300 */
#define BUS_GRF_CPU_CON0_CFGTE_SHIFT                       (12U)
#define BUS_GRF_CPU_CON0_CFGTE_MASK                        (0x3U << BUS_GRF_CPU_CON0_CFGTE_SHIFT)                       /* 0x00003000 */
/* CPU_CON1 */
#define BUS_GRF_CPU_CON1_CLREXMONREQ_SHIFT                 (0U)
#define BUS_GRF_CPU_CON1_CLREXMONREQ_MASK                  (0x1U << BUS_GRF_CPU_CON1_CLREXMONREQ_SHIFT)                 /* 0x00000001 */
#define BUS_GRF_CPU_CON1_CFGSDISABLE_SHIFT                 (1U)
#define BUS_GRF_CPU_CON1_CFGSDISABLE_MASK                  (0x1U << BUS_GRF_CPU_CON1_CFGSDISABLE_SHIFT)                 /* 0x00000002 */
#define BUS_GRF_CPU_CON1_DBGROMADDRV_SHIFT                 (2U)
#define BUS_GRF_CPU_CON1_DBGROMADDRV_MASK                  (0x1U << BUS_GRF_CPU_CON1_DBGROMADDRV_SHIFT)                 /* 0x00000004 */
#define BUS_GRF_CPU_CON1_EVENTI_SHIFT                      (4U)
#define BUS_GRF_CPU_CON1_EVENTI_MASK                       (0x1U << BUS_GRF_CPU_CON1_EVENTI_SHIFT)                      /* 0x00000010 */
#define BUS_GRF_CPU_CON1_EVENTO_CLEAR_SHIFT                (5U)
#define BUS_GRF_CPU_CON1_EVENTO_CLEAR_MASK                 (0x1U << BUS_GRF_CPU_CON1_EVENTO_CLEAR_SHIFT)                /* 0x00000020 */
#define BUS_GRF_CPU_CON1_CPU_EMA_DETECT_EN_SHIFT           (6U)
#define BUS_GRF_CPU_CON1_CPU_EMA_DETECT_EN_MASK            (0x1U << BUS_GRF_CPU_CON1_CPU_EMA_DETECT_EN_SHIFT)           /* 0x00000040 */
#define BUS_GRF_CPU_CON1_FORCE_JTAG_SHIFT                  (7U)
#define BUS_GRF_CPU_CON1_FORCE_JTAG_MASK                   (0x1U << BUS_GRF_CPU_CON1_FORCE_JTAG_SHIFT)                  /* 0x00000080 */
#define BUS_GRF_CPU_CON1_GIC500_CPU_ACTIVE_0_SHIFT         (8U)
#define BUS_GRF_CPU_CON1_GIC500_CPU_ACTIVE_0_MASK          (0x3U << BUS_GRF_CPU_CON1_GIC500_CPU_ACTIVE_0_SHIFT)         /* 0x00000300 */
#define BUS_GRF_CPU_CON1_GIC500_AXIM_ERR_ACK_SHIFT         (10U)
#define BUS_GRF_CPU_CON1_GIC500_AXIM_ERR_ACK_MASK          (0x1U << BUS_GRF_CPU_CON1_GIC500_AXIM_ERR_ACK_SHIFT)         /* 0x00000400 */
#define BUS_GRF_CPU_CON1_AWUSER_MODE_SHIFT                 (11U)
#define BUS_GRF_CPU_CON1_AWUSER_MODE_MASK                  (0x1U << BUS_GRF_CPU_CON1_AWUSER_MODE_SHIFT)                 /* 0x00000800 */
/* CPU_CON2 */
#define BUS_GRF_CPU_CON2_CA35_MA_SAWL_SHIFT                (0U)
#define BUS_GRF_CPU_CON2_CA35_MA_SAWL_MASK                 (0x1U << BUS_GRF_CPU_CON2_CA35_MA_SAWL_SHIFT)                /* 0x00000001 */
#define BUS_GRF_CPU_CON2_CA35_MA_WL_SHIFT                  (1U)
#define BUS_GRF_CPU_CON2_CA35_MA_WL_MASK                   (0x1U << BUS_GRF_CPU_CON2_CA35_MA_WL_SHIFT)                  /* 0x00000002 */
#define BUS_GRF_CPU_CON2_CA35_MA_WRAS_SHIFT                (2U)
#define BUS_GRF_CPU_CON2_CA35_MA_WRAS_MASK                 (0x1U << BUS_GRF_CPU_CON2_CA35_MA_WRAS_SHIFT)                /* 0x00000004 */
#define BUS_GRF_CPU_CON2_CA35_MA_WRASD_SHIFT               (3U)
#define BUS_GRF_CPU_CON2_CA35_MA_WRASD_MASK                (0x1U << BUS_GRF_CPU_CON2_CA35_MA_WRASD_SHIFT)               /* 0x00000008 */
#define BUS_GRF_CPU_CON2_CA35_L2D_MA_SAWL_SHIFT            (4U)
#define BUS_GRF_CPU_CON2_CA35_L2D_MA_SAWL_MASK             (0x1U << BUS_GRF_CPU_CON2_CA35_L2D_MA_SAWL_SHIFT)            /* 0x00000010 */
#define BUS_GRF_CPU_CON2_CA35_L2D_MA_WL_SHIFT              (5U)
#define BUS_GRF_CPU_CON2_CA35_L2D_MA_WL_MASK               (0x1U << BUS_GRF_CPU_CON2_CA35_L2D_MA_WL_SHIFT)              /* 0x00000020 */
#define BUS_GRF_CPU_CON2_CA35_L2D_MA_WRAS_SHIFT            (6U)
#define BUS_GRF_CPU_CON2_CA35_L2D_MA_WRAS_MASK             (0x1U << BUS_GRF_CPU_CON2_CA35_L2D_MA_WRAS_SHIFT)            /* 0x00000040 */
#define BUS_GRF_CPU_CON2_CA35_L2D_MA_WRASD_SHIFT           (7U)
#define BUS_GRF_CPU_CON2_CA35_L2D_MA_WRASD_MASK            (0x1U << BUS_GRF_CPU_CON2_CA35_L2D_MA_WRASD_SHIFT)           /* 0x00000080 */
/* CPU_STATUS0 */
#define BUS_GRF_CPU_STATUS0_SMPNAMP_SHIFT                  (0U)
#define BUS_GRF_CPU_STATUS0_SMPNAMP_MASK                   (0x3U << BUS_GRF_CPU_STATUS0_SMPNAMP_SHIFT)                  /* 0x00000003 */
#define BUS_GRF_CPU_STATUS0_GIC500_ECC_FATAL_SHIFT         (4U)
#define BUS_GRF_CPU_STATUS0_GIC500_ECC_FATAL_MASK          (0x1U << BUS_GRF_CPU_STATUS0_GIC500_ECC_FATAL_SHIFT)         /* 0x00000010 */
#define BUS_GRF_CPU_STATUS0_GIC500_AXIM_ERR_SHIFT          (5U)
#define BUS_GRF_CPU_STATUS0_GIC500_AXIM_ERR_MASK           (0x1U << BUS_GRF_CPU_STATUS0_GIC500_AXIM_ERR_SHIFT)          /* 0x00000020 */
#define BUS_GRF_CPU_STATUS0_EVENTO_RISING_EDGE_SHIFT       (12U)
#define BUS_GRF_CPU_STATUS0_EVENTO_RISING_EDGE_MASK        (0x1U << BUS_GRF_CPU_STATUS0_EVENTO_RISING_EDGE_SHIFT)       /* 0x00001000 */
#define BUS_GRF_CPU_STATUS0_JTAGTOP_SHIFT                  (13U)
#define BUS_GRF_CPU_STATUS0_JTAGTOP_MASK                   (0x1U << BUS_GRF_CPU_STATUS0_JTAGTOP_SHIFT)                  /* 0x00002000 */
#define BUS_GRF_CPU_STATUS0_JTAGNSW_SHIFT                  (14U)
#define BUS_GRF_CPU_STATUS0_JTAGNSW_MASK                   (0x1U << BUS_GRF_CPU_STATUS0_JTAGNSW_SHIFT)                  /* 0x00004000 */
#define BUS_GRF_CPU_STATUS0_CLREXMONACK_SHIFT              (15U)
#define BUS_GRF_CPU_STATUS0_CLREXMONACK_MASK               (0x1U << BUS_GRF_CPU_STATUS0_CLREXMONACK_SHIFT)              /* 0x00008000 */
#define BUS_GRF_CPU_STATUS0_L2FLUSHDONE_SHIFT              (16U)
#define BUS_GRF_CPU_STATUS0_L2FLUSHDONE_MASK               (0x1U << BUS_GRF_CPU_STATUS0_L2FLUSHDONE_SHIFT)              /* 0x00010000 */
/* CPU_STATUS1 */
#define BUS_GRF_CPU_STATUS1_STANDBYWFE_SHIFT               (0U)
#define BUS_GRF_CPU_STATUS1_STANDBYWFE_MASK                (0x3U << BUS_GRF_CPU_STATUS1_STANDBYWFE_SHIFT)               /* 0x00000003 */
#define BUS_GRF_CPU_STATUS1_STANDBYWFI_SHIFT               (4U)
#define BUS_GRF_CPU_STATUS1_STANDBYWFI_MASK                (0x3U << BUS_GRF_CPU_STATUS1_STANDBYWFI_SHIFT)               /* 0x00000030 */
#define BUS_GRF_CPU_STATUS1_STANDBYWFIL2_SHIFT             (12U)
#define BUS_GRF_CPU_STATUS1_STANDBYWFIL2_MASK              (0x1U << BUS_GRF_CPU_STATUS1_STANDBYWFIL2_SHIFT)             /* 0x00001000 */
/* SOC_NOC_CON0 */
#define BUS_GRF_SOC_NOC_CON0_AUDIO_FWD_BUS_BUS_STALL_SHIFT (0U)
#define BUS_GRF_SOC_NOC_CON0_AUDIO_FWD_BUS_BUS_STALL_MASK  (0x1U << BUS_GRF_SOC_NOC_CON0_AUDIO_FWD_BUS_BUS_STALL_SHIFT) /* 0x00000001 */
#define BUS_GRF_SOC_NOC_CON0_BUS_FWD_AUDIO_AUDIO_STALL_SHIFT (1U)
#define BUS_GRF_SOC_NOC_CON0_BUS_FWD_AUDIO_AUDIO_STALL_MASK (0x1U << BUS_GRF_SOC_NOC_CON0_BUS_FWD_AUDIO_AUDIO_STALL_SHIFT) /* 0x00000002 */
#define BUS_GRF_SOC_NOC_CON0_BUS_FWD_BUS_MST_DM_STALL_SHIFT (2U)
#define BUS_GRF_SOC_NOC_CON0_BUS_FWD_BUS_MST_DM_STALL_MASK (0x1U << BUS_GRF_SOC_NOC_CON0_BUS_FWD_BUS_MST_DM_STALL_SHIFT) /* 0x00000004 */
#define BUS_GRF_SOC_NOC_CON0_BUS_FWD_DDRC_DDRC_APB_TPWRSTALL_SHIFT (3U)
#define BUS_GRF_SOC_NOC_CON0_BUS_FWD_DDRC_DDRC_APB_TPWRSTALL_MASK (0x1U << BUS_GRF_SOC_NOC_CON0_BUS_FWD_DDRC_DDRC_APB_TPWRSTALL_SHIFT) /* 0x00000008 */
#define BUS_GRF_SOC_NOC_CON0_BUS_FWD_GIC_GIC_STALL_SHIFT   (4U)
#define BUS_GRF_SOC_NOC_CON0_BUS_FWD_GIC_GIC_STALL_MASK    (0x1U << BUS_GRF_SOC_NOC_CON0_BUS_FWD_GIC_GIC_STALL_SHIFT)   /* 0x00000010 */
#define BUS_GRF_SOC_NOC_CON0_BUS_FWD_SYSTEM_MEM_SYSTEM_MEM_STALL_SHIFT (5U)
#define BUS_GRF_SOC_NOC_CON0_BUS_FWD_SYSTEM_MEM_SYSTEM_MEM_STALL_MASK (0x1U << BUS_GRF_SOC_NOC_CON0_BUS_FWD_SYSTEM_MEM_SYSTEM_MEM_STALL_SHIFT) /* 0x00000020 */
#define BUS_GRF_SOC_NOC_CON0_BUS_FWD_NPU_NPU_STALL_SHIFT   (6U)
#define BUS_GRF_SOC_NOC_CON0_BUS_FWD_NPU_NPU_STALL_MASK    (0x1U << BUS_GRF_SOC_NOC_CON0_BUS_FWD_NPU_NPU_STALL_SHIFT)   /* 0x00000040 */
#define BUS_GRF_SOC_NOC_CON0_BUS_FWD_PMU_PM_STALL_SHIFT    (7U)
#define BUS_GRF_SOC_NOC_CON0_BUS_FWD_PMU_PM_STALL_MASK     (0x1U << BUS_GRF_SOC_NOC_CON0_BUS_FWD_PMU_PM_STALL_SHIFT)    /* 0x00000080 */
#define BUS_GRF_SOC_NOC_CON0_BUS_FWD_SRVMSCH_SWITCH10PWRSTALL_SHIFT (8U)
#define BUS_GRF_SOC_NOC_CON0_BUS_FWD_SRVMSCH_SWITCH10PWRSTALL_MASK (0x1U << BUS_GRF_SOC_NOC_CON0_BUS_FWD_SRVMSCH_SWITCH10PWRSTALL_SHIFT) /* 0x00000100 */
#define BUS_GRF_SOC_NOC_CON0_BUS_MST_FWD_BUS_SWITCH21PWRSTALL_SHIFT (9U)
#define BUS_GRF_SOC_NOC_CON0_BUS_MST_FWD_BUS_SWITCH21PWRSTALL_MASK (0x1U << BUS_GRF_SOC_NOC_CON0_BUS_MST_FWD_BUS_SWITCH21PWRSTALL_SHIFT) /* 0x00000200 */
#define BUS_GRF_SOC_NOC_CON0_BUS_REQ_MSCH_MSCH_STALL_SHIFT (10U)
#define BUS_GRF_SOC_NOC_CON0_BUS_REQ_MSCH_MSCH_STALL_MASK  (0x1U << BUS_GRF_SOC_NOC_CON0_BUS_REQ_MSCH_MSCH_STALL_SHIFT) /* 0x00000400 */
#define BUS_GRF_SOC_NOC_CON0_CPU_FWD_BUS_SWITCH18PWRSTALL_SHIFT (11U)
#define BUS_GRF_SOC_NOC_CON0_CPU_FWD_BUS_SWITCH18PWRSTALL_MASK (0x1U << BUS_GRF_SOC_NOC_CON0_CPU_FWD_BUS_SWITCH18PWRSTALL_SHIFT) /* 0x00000800 */
#define BUS_GRF_SOC_NOC_CON0_CPU_FWD_GIC_GIC_STALL_SHIFT   (12U)
#define BUS_GRF_SOC_NOC_CON0_CPU_FWD_GIC_GIC_STALL_MASK    (0x1U << BUS_GRF_SOC_NOC_CON0_CPU_FWD_GIC_GIC_STALL_SHIFT)   /* 0x00001000 */
#define BUS_GRF_SOC_NOC_CON0_CPU_REQ_MSCH_MSCH_STALL_SHIFT (13U)
#define BUS_GRF_SOC_NOC_CON0_CPU_REQ_MSCH_MSCH_STALL_MASK  (0x1U << BUS_GRF_SOC_NOC_CON0_CPU_REQ_MSCH_MSCH_STALL_SHIFT) /* 0x00002000 */
#define BUS_GRF_SOC_NOC_CON0_GIC_FWD_BUS_BUS_STALL_SHIFT   (14U)
#define BUS_GRF_SOC_NOC_CON0_GIC_FWD_BUS_BUS_STALL_MASK    (0x1U << BUS_GRF_SOC_NOC_CON0_GIC_FWD_BUS_BUS_STALL_SHIFT)   /* 0x00004000 */
#define BUS_GRF_SOC_NOC_CON0_SYSTEM_MEM_FWD_SYSTEM_MEM0_SYSTEM_MEM_S0_TPWRSTALL_SHIFT (15U)
#define BUS_GRF_SOC_NOC_CON0_SYSTEM_MEM_FWD_SYSTEM_MEM0_SYSTEM_MEM_S0_TPWRSTALL_MASK (0x1U << BUS_GRF_SOC_NOC_CON0_SYSTEM_MEM_FWD_SYSTEM_MEM0_SYSTEM_MEM_S0_TPWRSTALL_SHIFT) /* 0x00008000 */
/* SOC_NOC_CON1 */
#define BUS_GRF_SOC_NOC_CON1_NPU_FWD_SYSTEM_MEM_SYSTEM_MEM_STALL_SHIFT (3U)
#define BUS_GRF_SOC_NOC_CON1_NPU_FWD_SYSTEM_MEM_SYSTEM_MEM_STALL_MASK (0x1U << BUS_GRF_SOC_NOC_CON1_NPU_FWD_SYSTEM_MEM_SYSTEM_MEM_STALL_SHIFT) /* 0x00000008 */
#define BUS_GRF_SOC_NOC_CON1_NPU_REQ_MSCH_STALL_SHIFT      (4U)
#define BUS_GRF_SOC_NOC_CON1_NPU_REQ_MSCH_STALL_MASK       (0x1U << BUS_GRF_SOC_NOC_CON1_NPU_REQ_MSCH_STALL_SHIFT)      /* 0x00000010 */
#define BUS_GRF_SOC_NOC_CON1_BUS_FWD_PCIE_STALL_SHIFT      (5U)
#define BUS_GRF_SOC_NOC_CON1_BUS_FWD_PCIE_STALL_MASK       (0x1U << BUS_GRF_SOC_NOC_CON1_BUS_FWD_PCIE_STALL_SHIFT)      /* 0x00000020 */
#define BUS_GRF_SOC_NOC_CON1_BUS_FWD_PHP_STALL_SHIFT       (6U)
#define BUS_GRF_SOC_NOC_CON1_BUS_FWD_PHP_STALL_MASK        (0x1U << BUS_GRF_SOC_NOC_CON1_BUS_FWD_PHP_STALL_SHIFT)       /* 0x00000040 */
#define BUS_GRF_SOC_NOC_CON1_BUS_FWD_VIO_STALL_SHIFT       (7U)
#define BUS_GRF_SOC_NOC_CON1_BUS_FWD_VIO_STALL_MASK        (0x1U << BUS_GRF_SOC_NOC_CON1_BUS_FWD_VIO_STALL_SHIFT)       /* 0x00000080 */
#define BUS_GRF_SOC_NOC_CON1_GMAC_FWD_PHP_MID_STALL_SHIFT  (9U)
#define BUS_GRF_SOC_NOC_CON1_GMAC_FWD_PHP_MID_STALL_MASK   (0x1U << BUS_GRF_SOC_NOC_CON1_GMAC_FWD_PHP_MID_STALL_SHIFT)  /* 0x00000200 */
#define BUS_GRF_SOC_NOC_CON1_MMC_FWD_PHP_MID_STALL_SHIFT   (10U)
#define BUS_GRF_SOC_NOC_CON1_MMC_FWD_PHP_MID_STALL_MASK    (0x1U << BUS_GRF_SOC_NOC_CON1_MMC_FWD_PHP_MID_STALL_SHIFT)   /* 0x00000400 */
#define BUS_GRF_SOC_NOC_CON1_PCIE_FWD_BUS_STALL_SHIFT      (11U)
#define BUS_GRF_SOC_NOC_CON1_PCIE_FWD_BUS_STALL_MASK       (0x1U << BUS_GRF_SOC_NOC_CON1_PCIE_FWD_BUS_STALL_SHIFT)      /* 0x00000800 */
#define BUS_GRF_SOC_NOC_CON1_PHP_FWD_BUS_STALL_SHIFT       (12U)
#define BUS_GRF_SOC_NOC_CON1_PHP_FWD_BUS_STALL_MASK        (0x1U << BUS_GRF_SOC_NOC_CON1_PHP_FWD_BUS_STALL_SHIFT)       /* 0x00001000 */
#define BUS_GRF_SOC_NOC_CON1_PHP_MID_FWD_GMAC_STALL_SHIFT  (13U)
#define BUS_GRF_SOC_NOC_CON1_PHP_MID_FWD_GMAC_STALL_MASK   (0x1U << BUS_GRF_SOC_NOC_CON1_PHP_MID_FWD_GMAC_STALL_SHIFT)  /* 0x00002000 */
#define BUS_GRF_SOC_NOC_CON1_PHP_MID_FWD_MMCSTALL_SHIFT    (14U)
#define BUS_GRF_SOC_NOC_CON1_PHP_MID_FWD_MMCSTALL_MASK     (0x1U << BUS_GRF_SOC_NOC_CON1_PHP_MID_FWD_MMCSTALL_SHIFT)    /* 0x00004000 */
#define BUS_GRF_SOC_NOC_CON1_VIO_FWD_BUS_STALL_SHIFT       (15U)
#define BUS_GRF_SOC_NOC_CON1_VIO_FWD_BUS_STALL_MASK        (0x1U << BUS_GRF_SOC_NOC_CON1_VIO_FWD_BUS_STALL_SHIFT)       /* 0x00008000 */
/* SOC_NOC_CON2 */
#define BUS_GRF_SOC_NOC_CON2_VPU_FWD_BUS_BUS_STALL_SHIFT   (0U)
#define BUS_GRF_SOC_NOC_CON2_VPU_FWD_BUS_BUS_STALL_MASK    (0x1U << BUS_GRF_SOC_NOC_CON2_VPU_FWD_BUS_BUS_STALL_SHIFT)   /* 0x00000001 */
#define BUS_GRF_SOC_NOC_CON2_PCIE_FWD_PCIE_USB_STALL_SHIFT (1U)
#define BUS_GRF_SOC_NOC_CON2_PCIE_FWD_PCIE_USB_STALL_MASK  (0x1U << BUS_GRF_SOC_NOC_CON2_PCIE_FWD_PCIE_USB_STALL_SHIFT) /* 0x00000002 */
#define BUS_GRF_SOC_NOC_CON2_PCIE_USB_FWD_PCIE_STALL_SHIFT (2U)
#define BUS_GRF_SOC_NOC_CON2_PCIE_USB_FWD_PCIE_STALL_MASK  (0x1U << BUS_GRF_SOC_NOC_CON2_PCIE_USB_FWD_PCIE_STALL_SHIFT) /* 0x00000004 */
#define BUS_GRF_SOC_NOC_CON2_BUS_FWD_VPU_STALL_SHIFT       (3U)
#define BUS_GRF_SOC_NOC_CON2_BUS_FWD_VPU_STALL_MASK        (0x1U << BUS_GRF_SOC_NOC_CON2_BUS_FWD_VPU_STALL_SHIFT)       /* 0x00000008 */
#define BUS_GRF_SOC_NOC_CON2_MSCH_SPLIT_SIZE_SHIFT         (14U)
#define BUS_GRF_SOC_NOC_CON2_MSCH_SPLIT_SIZE_MASK          (0x3U << BUS_GRF_SOC_NOC_CON2_MSCH_SPLIT_SIZE_SHIFT)         /* 0x0000C000 */
/* RAM_CON0 */
#define BUS_GRF_RAM_CON0_SYSTEM_MEM_EMAS_SHIFT             (0U)
#define BUS_GRF_RAM_CON0_SYSTEM_MEM_EMAS_MASK              (0x3U << BUS_GRF_RAM_CON0_SYSTEM_MEM_EMAS_SHIFT)             /* 0x00000003 */
#define BUS_GRF_RAM_CON0_SYSTEM_MEM_EMA_SHIFT              (2U)
#define BUS_GRF_RAM_CON0_SYSTEM_MEM_EMA_MASK               (0x3U << BUS_GRF_RAM_CON0_SYSTEM_MEM_EMA_SHIFT)              /* 0x0000000C */
#define BUS_GRF_RAM_CON0_SYSTEM_MEM_EMAW_SHIFT             (4U)
#define BUS_GRF_RAM_CON0_SYSTEM_MEM_EMAW_MASK              (0x7U << BUS_GRF_RAM_CON0_SYSTEM_MEM_EMAW_SHIFT)             /* 0x00000070 */
#define BUS_GRF_RAM_CON0_NPU_MA_SAWL_SHIFT                 (8U)
#define BUS_GRF_RAM_CON0_NPU_MA_SAWL_MASK                  (0x1U << BUS_GRF_RAM_CON0_NPU_MA_SAWL_SHIFT)                 /* 0x00000100 */
#define BUS_GRF_RAM_CON0_NPU_MA_WL_SHIFT                   (9U)
#define BUS_GRF_RAM_CON0_NPU_MA_WL_MASK                    (0x1U << BUS_GRF_RAM_CON0_NPU_MA_WL_SHIFT)                   /* 0x00000200 */
#define BUS_GRF_RAM_CON0_NPU_MA_WRAS_SHIFT                 (10U)
#define BUS_GRF_RAM_CON0_NPU_MA_WRAS_MASK                  (0x1U << BUS_GRF_RAM_CON0_NPU_MA_WRAS_SHIFT)                 /* 0x00000400 */
#define BUS_GRF_RAM_CON0_NPU_MA_WRASD_SHIFT                (11U)
#define BUS_GRF_RAM_CON0_NPU_MA_WRASD_MASK                 (0x1U << BUS_GRF_RAM_CON0_NPU_MA_WRASD_SHIFT)                /* 0x00000800 */
#define BUS_GRF_RAM_CON0_NPU_MA_TPA_SHIFT                  (12U)
#define BUS_GRF_RAM_CON0_NPU_MA_TPA_MASK                   (0x1U << BUS_GRF_RAM_CON0_NPU_MA_TPA_SHIFT)                  /* 0x00001000 */
#define BUS_GRF_RAM_CON0_NPU_MA_TPB_SHIFT                  (13U)
#define BUS_GRF_RAM_CON0_NPU_MA_TPB_MASK                   (0x1U << BUS_GRF_RAM_CON0_NPU_MA_TPB_SHIFT)                  /* 0x00002000 */
/* RAM_CON1 */
#define BUS_GRF_RAM_CON1_VIO_DP_EMAA_SHIFT                 (0U)
#define BUS_GRF_RAM_CON1_VIO_DP_EMAA_MASK                  (0x7U << BUS_GRF_RAM_CON1_VIO_DP_EMAA_SHIFT)                 /* 0x00000007 */
#define BUS_GRF_RAM_CON1_VIO_DP_EMAB_SHIFT                 (4U)
#define BUS_GRF_RAM_CON1_VIO_DP_EMAB_MASK                  (0x7U << BUS_GRF_RAM_CON1_VIO_DP_EMAB_SHIFT)                 /* 0x00000070 */
#define BUS_GRF_RAM_CON1_VIO_DP_EMASA_SHIFT                (7U)
#define BUS_GRF_RAM_CON1_VIO_DP_EMASA_MASK                 (0x1U << BUS_GRF_RAM_CON1_VIO_DP_EMASA_SHIFT)                /* 0x00000080 */
#define BUS_GRF_RAM_CON1_VIO_SP_EMAA_SHIFT                 (8U)
#define BUS_GRF_RAM_CON1_VIO_SP_EMAA_MASK                  (0x7U << BUS_GRF_RAM_CON1_VIO_SP_EMAA_SHIFT)                 /* 0x00000700 */
#define BUS_GRF_RAM_CON1_VIO_SP_EMAS_SHIFT                 (11U)
#define BUS_GRF_RAM_CON1_VIO_SP_EMAS_MASK                  (0x1U << BUS_GRF_RAM_CON1_VIO_SP_EMAS_SHIFT)                 /* 0x00000800 */
#define BUS_GRF_RAM_CON1_VIO_SP_EMAW_SHIFT                 (12U)
#define BUS_GRF_RAM_CON1_VIO_SP_EMAW_MASK                  (0x3U << BUS_GRF_RAM_CON1_VIO_SP_EMAW_SHIFT)                 /* 0x00003000 */
/* RAM_CON2 */
#define BUS_GRF_RAM_CON2_GMAC_EMASA_SHIFT                  (0U)
#define BUS_GRF_RAM_CON2_GMAC_EMASA_MASK                   (0x1U << BUS_GRF_RAM_CON2_GMAC_EMASA_SHIFT)                  /* 0x00000001 */
#define BUS_GRF_RAM_CON2_GMAC_EMAA_0_SHIFT                 (1U)
#define BUS_GRF_RAM_CON2_GMAC_EMAA_0_MASK                  (0x1U << BUS_GRF_RAM_CON2_GMAC_EMAA_0_SHIFT)                 /* 0x00000002 */
#define BUS_GRF_RAM_CON2_GMAC_EMAA_1_SHIFT                 (2U)
#define BUS_GRF_RAM_CON2_GMAC_EMAA_1_MASK                  (0x1U << BUS_GRF_RAM_CON2_GMAC_EMAA_1_SHIFT)                 /* 0x00000004 */
#define BUS_GRF_RAM_CON2_GMAC_EMAB_0_SHIFT                 (3U)
#define BUS_GRF_RAM_CON2_GMAC_EMAB_0_MASK                  (0x1U << BUS_GRF_RAM_CON2_GMAC_EMAB_0_SHIFT)                 /* 0x00000008 */
#define BUS_GRF_RAM_CON2_GMAC_EMAB_1_SHIFT                 (4U)
#define BUS_GRF_RAM_CON2_GMAC_EMAB_1_MASK                  (0x1U << BUS_GRF_RAM_CON2_GMAC_EMAB_1_SHIFT)                 /* 0x00000010 */
#define BUS_GRF_RAM_CON2_GMAC_EMAB_2_SHIFT                 (5U)
#define BUS_GRF_RAM_CON2_GMAC_EMAB_2_MASK                  (0x1U << BUS_GRF_RAM_CON2_GMAC_EMAB_2_SHIFT)                 /* 0x00000020 */
#define BUS_GRF_RAM_CON2_GIC500_MA_SAWL_SHIFT              (6U)
#define BUS_GRF_RAM_CON2_GIC500_MA_SAWL_MASK               (0x1U << BUS_GRF_RAM_CON2_GIC500_MA_SAWL_SHIFT)              /* 0x00000040 */
#define BUS_GRF_RAM_CON2_GIC500_MA_WL_SHIFT                (7U)
#define BUS_GRF_RAM_CON2_GIC500_MA_WL_MASK                 (0x1U << BUS_GRF_RAM_CON2_GIC500_MA_WL_SHIFT)                /* 0x00000080 */
#define BUS_GRF_RAM_CON2_GIC500_MA_WRAS_SHIFT              (8U)
#define BUS_GRF_RAM_CON2_GIC500_MA_WRAS_MASK               (0x1U << BUS_GRF_RAM_CON2_GIC500_MA_WRAS_SHIFT)              /* 0x00000100 */
#define BUS_GRF_RAM_CON2_GIC500_MA_WRASD_SHIFT             (9U)
#define BUS_GRF_RAM_CON2_GIC500_MA_WRASD_MASK              (0x1U << BUS_GRF_RAM_CON2_GIC500_MA_WRASD_SHIFT)             /* 0x00000200 */
#define BUS_GRF_RAM_CON2_BUS_EMAS_SHIFT                    (10U)
#define BUS_GRF_RAM_CON2_BUS_EMAS_MASK                     (0x1U << BUS_GRF_RAM_CON2_BUS_EMAS_SHIFT)                    /* 0x00000400 */
#define BUS_GRF_RAM_CON2_BUS_EMA_SHIFT                     (11U)
#define BUS_GRF_RAM_CON2_BUS_EMA_MASK                      (0x7U << BUS_GRF_RAM_CON2_BUS_EMA_SHIFT)                     /* 0x00003800 */
#define BUS_GRF_RAM_CON2_BUS_EMAW_SHIFT                    (14U)
#define BUS_GRF_RAM_CON2_BUS_EMAW_MASK                     (0x3U << BUS_GRF_RAM_CON2_BUS_EMAW_SHIFT)                    /* 0x0000C000 */
/* RAM_CON3 */
#define BUS_GRF_RAM_CON3_BUS_EMAA_SHIFT                    (0U)
#define BUS_GRF_RAM_CON3_BUS_EMAA_MASK                     (0x7U << BUS_GRF_RAM_CON3_BUS_EMAA_SHIFT)                    /* 0x00000007 */
#define BUS_GRF_RAM_CON3_BUS_EMASA_SHIFT                   (3U)
#define BUS_GRF_RAM_CON3_BUS_EMASA_MASK                    (0x1U << BUS_GRF_RAM_CON3_BUS_EMASA_SHIFT)                   /* 0x00000008 */
#define BUS_GRF_RAM_CON3_BUS_EMAB_SHIFT                    (4U)
#define BUS_GRF_RAM_CON3_BUS_EMAB_MASK                     (0x7U << BUS_GRF_RAM_CON3_BUS_EMAB_SHIFT)                    /* 0x00000070 */
#define BUS_GRF_RAM_CON3_AUDIO_MA_SAWL_SHIFT               (8U)
#define BUS_GRF_RAM_CON3_AUDIO_MA_SAWL_MASK                (0x1U << BUS_GRF_RAM_CON3_AUDIO_MA_SAWL_SHIFT)               /* 0x00000100 */
#define BUS_GRF_RAM_CON3_AUDIO_MA_WL_SHIFT                 (9U)
#define BUS_GRF_RAM_CON3_AUDIO_MA_WL_MASK                  (0x1U << BUS_GRF_RAM_CON3_AUDIO_MA_WL_SHIFT)                 /* 0x00000200 */
#define BUS_GRF_RAM_CON3_AUDIO_MA_WRAS_SHIFT               (10U)
#define BUS_GRF_RAM_CON3_AUDIO_MA_WRAS_MASK                (0x1U << BUS_GRF_RAM_CON3_AUDIO_MA_WRAS_SHIFT)               /* 0x00000400 */
#define BUS_GRF_RAM_CON3_AUDIO_MA_WRASD_SHIFT              (11U)
#define BUS_GRF_RAM_CON3_AUDIO_MA_WRASD_MASK               (0x1U << BUS_GRF_RAM_CON3_AUDIO_MA_WRASD_SHIFT)              /* 0x00000800 */
/* RAM_CON4 */
#define BUS_GRF_RAM_CON4_VPU_EMA_SHIFT                     (0U)
#define BUS_GRF_RAM_CON4_VPU_EMA_MASK                      (0x7U << BUS_GRF_RAM_CON4_VPU_EMA_SHIFT)                     /* 0x00000007 */
#define BUS_GRF_RAM_CON4_VPU_EMAA_SHIFT                    (3U)
#define BUS_GRF_RAM_CON4_VPU_EMAA_MASK                     (0x7U << BUS_GRF_RAM_CON4_VPU_EMAA_SHIFT)                    /* 0x00000038 */
#define BUS_GRF_RAM_CON4_VPU_EMAB_SHIFT                    (6U)
#define BUS_GRF_RAM_CON4_VPU_EMAB_MASK                     (0x7U << BUS_GRF_RAM_CON4_VPU_EMAB_SHIFT)                    /* 0x000001C0 */
#define BUS_GRF_RAM_CON4_VPU_EMASA_SHIFT                   (9U)
#define BUS_GRF_RAM_CON4_VPU_EMASA_MASK                    (0x1U << BUS_GRF_RAM_CON4_VPU_EMASA_SHIFT)                   /* 0x00000200 */
#define BUS_GRF_RAM_CON4_VPU_EMAS_SHIFT                    (10U)
#define BUS_GRF_RAM_CON4_VPU_EMAS_MASK                     (0x1U << BUS_GRF_RAM_CON4_VPU_EMAS_SHIFT)                    /* 0x00000400 */
#define BUS_GRF_RAM_CON4_VPU_EMAW_SHIFT                    (11U)
#define BUS_GRF_RAM_CON4_VPU_EMAW_MASK                     (0x7U << BUS_GRF_RAM_CON4_VPU_EMAW_SHIFT)                    /* 0x00003800 */
#define BUS_GRF_RAM_CON4_VPU_EMA_ROM_SHIFT                 (13U)
#define BUS_GRF_RAM_CON4_VPU_EMA_ROM_MASK                  (0x7U << BUS_GRF_RAM_CON4_VPU_EMA_ROM_SHIFT)                 /* 0x0000E000 */
/* NPUPVTM_CON0 */
#define BUS_GRF_NPUPVTM_CON0_NPUPVTM_START_SHIFT           (0U)
#define BUS_GRF_NPUPVTM_CON0_NPUPVTM_START_MASK            (0x1U << BUS_GRF_NPUPVTM_CON0_NPUPVTM_START_SHIFT)           /* 0x00000001 */
#define BUS_GRF_NPUPVTM_CON0_NPUPVTM_OSC_EN_SHIFT          (1U)
#define BUS_GRF_NPUPVTM_CON0_NPUPVTM_OSC_EN_MASK           (0x1U << BUS_GRF_NPUPVTM_CON0_NPUPVTM_OSC_EN_SHIFT)          /* 0x00000002 */
#define BUS_GRF_NPUPVTM_CON0_NPUPVTM_OSC_SEL_SHIFT         (2U)
#define BUS_GRF_NPUPVTM_CON0_NPUPVTM_OSC_SEL_MASK          (0x7U << BUS_GRF_NPUPVTM_CON0_NPUPVTM_OSC_SEL_SHIFT)         /* 0x0000001C */
/* NPUPVTM_CON1 */
#define BUS_GRF_NPUPVTM_CON1_NPUPVTM_CAL_CNT_SHIFT         (0U)
#define BUS_GRF_NPUPVTM_CON1_NPUPVTM_CAL_CNT_MASK          (0xFFFFFFFFU << BUS_GRF_NPUPVTM_CON1_NPUPVTM_CAL_CNT_SHIFT)  /* 0xFFFFFFFF */
/* NPUPVTM_STATUS0 */
#define BUS_GRF_NPUPVTM_STATUS0_NPUPVTM_FREQ_DONE_SHIFT    (0U)
#define BUS_GRF_NPUPVTM_STATUS0_NPUPVTM_FREQ_DONE_MASK     (0x1U << BUS_GRF_NPUPVTM_STATUS0_NPUPVTM_FREQ_DONE_SHIFT)    /* 0x00000001 */
/* NPUPVTM_STATUS1 */
#define BUS_GRF_NPUPVTM_STATUS1_NPUPVTM_FREQ_CNT_SHIFT     (0U)
#define BUS_GRF_NPUPVTM_STATUS1_NPUPVTM_FREQ_CNT_MASK      (0xFFFFFFFFU << BUS_GRF_NPUPVTM_STATUS1_NPUPVTM_FREQ_CNT_SHIFT) /* 0xFFFFFFFF */
/* CHIP_ID */
#define BUS_GRF_CHIP_ID_CHIP_ID_SHIFT                      (0U)
#define BUS_GRF_CHIP_ID_CHIP_ID_MASK                       (0xFFFFFFFFU << BUS_GRF_CHIP_ID_CHIP_ID_SHIFT)               /* 0xFFFFFFFF */
/* MAC_CON0 */
#define BUS_GRF_MAC_CON0_GMAC2IO_CLK_TX_DL_CFG_SHIFT       (0U)
#define BUS_GRF_MAC_CON0_GMAC2IO_CLK_TX_DL_CFG_MASK        (0xFFU << BUS_GRF_MAC_CON0_GMAC2IO_CLK_TX_DL_CFG_SHIFT)      /* 0x000000FF */
#define BUS_GRF_MAC_CON0_GMAC2IO_CLK_RX_DL_CFG_SHIFT       (8U)
#define BUS_GRF_MAC_CON0_GMAC2IO_CLK_RX_DL_CFG_MASK        (0xFFU << BUS_GRF_MAC_CON0_GMAC2IO_CLK_RX_DL_CFG_SHIFT)      /* 0x0000FF00 */
/* MAC_CON1 */
#define BUS_GRF_MAC_CON1_GMAC2IO_TXCLK_DLY_ENA_SHIFT       (0U)
#define BUS_GRF_MAC_CON1_GMAC2IO_TXCLK_DLY_ENA_MASK        (0x1U << BUS_GRF_MAC_CON1_GMAC2IO_TXCLK_DLY_ENA_SHIFT)       /* 0x00000001 */
#define BUS_GRF_MAC_CON1_GMAC2IO_RXCLK_DLY_ENA_SHIFT       (1U)
#define BUS_GRF_MAC_CON1_GMAC2IO_RXCLK_DLY_ENA_MASK        (0x1U << BUS_GRF_MAC_CON1_GMAC2IO_RXCLK_DLY_ENA_SHIFT)       /* 0x00000002 */
#define BUS_GRF_MAC_CON1_GMAC2IO_MAC_SPEED_SHIFT           (2U)
#define BUS_GRF_MAC_CON1_GMAC2IO_MAC_SPEED_MASK            (0x1U << BUS_GRF_MAC_CON1_GMAC2IO_MAC_SPEED_SHIFT)           /* 0x00000004 */
#define BUS_GRF_MAC_CON1_GMAC2IO_FLOWCTRL_SHIFT            (3U)
#define BUS_GRF_MAC_CON1_GMAC2IO_FLOWCTRL_MASK             (0x1U << BUS_GRF_MAC_CON1_GMAC2IO_FLOWCTRL_SHIFT)            /* 0x00000008 */
#define BUS_GRF_MAC_CON1_GMAC2IO_PHY_INTF_SEL_SHIFT        (4U)
#define BUS_GRF_MAC_CON1_GMAC2IO_PHY_INTF_SEL_MASK         (0x7U << BUS_GRF_MAC_CON1_GMAC2IO_PHY_INTF_SEL_SHIFT)        /* 0x00000070 */
/**************************************USB2PHY_GRF***************************************/
/* REG0 */
#define USB2PHY_GRF_REG0_USBPHY_REG0_SHIFT                 (0U)
#define USB2PHY_GRF_REG0_USBPHY_REG0_MASK                  (0xFFFFU << USB2PHY_GRF_REG0_USBPHY_REG0_SHIFT)              /* 0x0000FFFF */
/* REG1 */
#define USB2PHY_GRF_REG1_USBPHY_REG1_SHIFT                 (0U)
#define USB2PHY_GRF_REG1_USBPHY_REG1_MASK                  (0xFFFFU << USB2PHY_GRF_REG1_USBPHY_REG1_SHIFT)              /* 0x0000FFFF */
/* REG2 */
#define USB2PHY_GRF_REG2_USBPHY_REG2_SHIFT                 (0U)
#define USB2PHY_GRF_REG2_USBPHY_REG2_MASK                  (0xFFFFU << USB2PHY_GRF_REG2_USBPHY_REG2_SHIFT)              /* 0x0000FFFF */
/* REG3 */
#define USB2PHY_GRF_REG3_USBPHY_REG3_SHIFT                 (0U)
#define USB2PHY_GRF_REG3_USBPHY_REG3_MASK                  (0xFFFFU << USB2PHY_GRF_REG3_USBPHY_REG3_SHIFT)              /* 0x0000FFFF */
/* REG4 */
#define USB2PHY_GRF_REG4_USBPHY_REG4_SHIFT                 (0U)
#define USB2PHY_GRF_REG4_USBPHY_REG4_MASK                  (0xFFFFU << USB2PHY_GRF_REG4_USBPHY_REG4_SHIFT)              /* 0x0000FFFF */
/* REG5 */
#define USB2PHY_GRF_REG5_USBPHY_REG5_SHIFT                 (0U)
#define USB2PHY_GRF_REG5_USBPHY_REG5_MASK                  (0xFFFFU << USB2PHY_GRF_REG5_USBPHY_REG5_SHIFT)              /* 0x0000FFFF */
/* REG6 */
#define USB2PHY_GRF_REG6_USBPHY_REG6_SHIFT                 (0U)
#define USB2PHY_GRF_REG6_USBPHY_REG6_MASK                  (0xFFFFU << USB2PHY_GRF_REG6_USBPHY_REG6_SHIFT)              /* 0x0000FFFF */
/* REG7 */
#define USB2PHY_GRF_REG7_USBPHY_REG7_SHIFT                 (0U)
#define USB2PHY_GRF_REG7_USBPHY_REG7_MASK                  (0xFFFFU << USB2PHY_GRF_REG7_USBPHY_REG7_SHIFT)              /* 0x0000FFFF */
/* REG8 */
#define USB2PHY_GRF_REG8_USBPHY_REG8_SHIFT                 (0U)
#define USB2PHY_GRF_REG8_USBPHY_REG8_MASK                  (0xFFFFU << USB2PHY_GRF_REG8_USBPHY_REG8_SHIFT)              /* 0x0000FFFF */
/* REG9 */
#define USB2PHY_GRF_REG9_USBPHY_REG9_SHIFT                 (0U)
#define USB2PHY_GRF_REG9_USBPHY_REG9_MASK                  (0xFFFFU << USB2PHY_GRF_REG9_USBPHY_REG9_SHIFT)              /* 0x0000FFFF */
/* REG10 */
#define USB2PHY_GRF_REG10_USBPHY_REG10_SHIFT               (0U)
#define USB2PHY_GRF_REG10_USBPHY_REG10_MASK                (0xFFFFU << USB2PHY_GRF_REG10_USBPHY_REG10_SHIFT)            /* 0x0000FFFF */
/* REG11 */
#define USB2PHY_GRF_REG11_USBPHY_REG11_SHIFT               (0U)
#define USB2PHY_GRF_REG11_USBPHY_REG11_MASK                (0xFFFFU << USB2PHY_GRF_REG11_USBPHY_REG11_SHIFT)            /* 0x0000FFFF */
/* REG12 */
#define USB2PHY_GRF_REG12_USBPHY_REG12_SHIFT               (0U)
#define USB2PHY_GRF_REG12_USBPHY_REG12_MASK                (0xFFFFU << USB2PHY_GRF_REG12_USBPHY_REG12_SHIFT)            /* 0x0000FFFF */
/* REG13 */
#define USB2PHY_GRF_REG13_USBPHY_REG13_SHIFT               (0U)
#define USB2PHY_GRF_REG13_USBPHY_REG13_MASK                (0xFFFFU << USB2PHY_GRF_REG13_USBPHY_REG13_SHIFT)            /* 0x0000FFFF */
/* REG14 */
#define USB2PHY_GRF_REG14_USBPHY_REG14_SHIFT               (0U)
#define USB2PHY_GRF_REG14_USBPHY_REG14_MASK                (0xFFFFU << USB2PHY_GRF_REG14_USBPHY_REG14_SHIFT)            /* 0x0000FFFF */
/* REG15 */
#define USB2PHY_GRF_REG15_USBPHY_REG15_SHIFT               (0U)
#define USB2PHY_GRF_REG15_USBPHY_REG15_MASK                (0xFFFFU << USB2PHY_GRF_REG15_USBPHY_REG15_SHIFT)            /* 0x0000FFFF */
/* REG16 */
#define USB2PHY_GRF_REG16_USBPHY_REG16_SHIFT               (0U)
#define USB2PHY_GRF_REG16_USBPHY_REG16_MASK                (0xFFFFU << USB2PHY_GRF_REG16_USBPHY_REG16_SHIFT)            /* 0x0000FFFF */
/* REG17 */
#define USB2PHY_GRF_REG17_USBPHY_REG17_SHIFT               (0U)
#define USB2PHY_GRF_REG17_USBPHY_REG17_MASK                (0xFFFFU << USB2PHY_GRF_REG17_USBPHY_REG17_SHIFT)            /* 0x0000FFFF */
/* REG18 */
#define USB2PHY_GRF_REG18_USBPHY_REG18_SHIFT               (0U)
#define USB2PHY_GRF_REG18_USBPHY_REG18_MASK                (0xFFFFU << USB2PHY_GRF_REG18_USBPHY_REG18_SHIFT)            /* 0x0000FFFF */
/* REG19 */
#define USB2PHY_GRF_REG19_USBPHY_REG19_SHIFT               (0U)
#define USB2PHY_GRF_REG19_USBPHY_REG19_MASK                (0xFFFFU << USB2PHY_GRF_REG19_USBPHY_REG19_SHIFT)            /* 0x0000FFFF */
/* REG20 */
#define USB2PHY_GRF_REG20_USBPHY_REG20_SHIFT               (0U)
#define USB2PHY_GRF_REG20_USBPHY_REG20_MASK                (0xFFFFU << USB2PHY_GRF_REG20_USBPHY_REG20_SHIFT)            /* 0x0000FFFF */
/* REG21 */
#define USB2PHY_GRF_REG21_USBPHY_REG21_SHIFT               (0U)
#define USB2PHY_GRF_REG21_USBPHY_REG21_MASK                (0xFFFFU << USB2PHY_GRF_REG21_USBPHY_REG21_SHIFT)            /* 0x0000FFFF */
/* REG22 */
#define USB2PHY_GRF_REG22_USBPHY_REG22_SHIFT               (0U)
#define USB2PHY_GRF_REG22_USBPHY_REG22_MASK                (0xFFFFU << USB2PHY_GRF_REG22_USBPHY_REG22_SHIFT)            /* 0x0000FFFF */
/* REG23 */
#define USB2PHY_GRF_REG23_USBPHY_REG23_SHIFT               (0U)
#define USB2PHY_GRF_REG23_USBPHY_REG23_MASK                (0xFFFFU << USB2PHY_GRF_REG23_USBPHY_REG23_SHIFT)            /* 0x0000FFFF */
/* CON0 */
#define USB2PHY_GRF_CON0_USBOTG_UTMI_SEL_SHIFT             (0U)
#define USB2PHY_GRF_CON0_USBOTG_UTMI_SEL_MASK              (0x1U << USB2PHY_GRF_CON0_USBOTG_UTMI_SEL_SHIFT)             /* 0x00000001 */
#define USB2PHY_GRF_CON0_USBOTG_UTMI_SUSPEND_N_SHIFT       (1U)
#define USB2PHY_GRF_CON0_USBOTG_UTMI_SUSPEND_N_MASK        (0x1U << USB2PHY_GRF_CON0_USBOTG_UTMI_SUSPEND_N_SHIFT)       /* 0x00000002 */
#define USB2PHY_GRF_CON0_USBOTG_UTMI_OPMODE_SHIFT          (2U)
#define USB2PHY_GRF_CON0_USBOTG_UTMI_OPMODE_MASK           (0x3U << USB2PHY_GRF_CON0_USBOTG_UTMI_OPMODE_SHIFT)          /* 0x0000000C */
#define USB2PHY_GRF_CON0_USBOTG_UTMI_XCVRSELECT_SHIFT      (4U)
#define USB2PHY_GRF_CON0_USBOTG_UTMI_XCVRSELECT_MASK       (0x3U << USB2PHY_GRF_CON0_USBOTG_UTMI_XCVRSELECT_SHIFT)      /* 0x00000030 */
#define USB2PHY_GRF_CON0_USBOTG_UTMI_TERMSELECT_SHIFT      (6U)
#define USB2PHY_GRF_CON0_USBOTG_UTMI_TERMSELECT_MASK       (0x1U << USB2PHY_GRF_CON0_USBOTG_UTMI_TERMSELECT_SHIFT)      /* 0x00000040 */
#define USB2PHY_GRF_CON0_USBOTG_UTMI_DPPULLDOWN_SHIFT      (7U)
#define USB2PHY_GRF_CON0_USBOTG_UTMI_DPPULLDOWN_MASK       (0x1U << USB2PHY_GRF_CON0_USBOTG_UTMI_DPPULLDOWN_SHIFT)      /* 0x00000080 */
#define USB2PHY_GRF_CON0_USBOTG_UTMI_DMPULLDOWN_SHIFT      (8U)
#define USB2PHY_GRF_CON0_USBOTG_UTMI_DMPULLDOWN_MASK       (0x1U << USB2PHY_GRF_CON0_USBOTG_UTMI_DMPULLDOWN_SHIFT)      /* 0x00000100 */
#define USB2PHY_GRF_CON0_USBOTG_UTMI_IDDIG_SEL_SHIFT       (9U)
#define USB2PHY_GRF_CON0_USBOTG_UTMI_IDDIG_SEL_MASK        (0x1U << USB2PHY_GRF_CON0_USBOTG_UTMI_IDDIG_SEL_SHIFT)       /* 0x00000200 */
#define USB2PHY_GRF_CON0_USBOTG_UTMI_IDDIG_SHIFT           (10U)
#define USB2PHY_GRF_CON0_USBOTG_UTMI_IDDIG_MASK            (0x1U << USB2PHY_GRF_CON0_USBOTG_UTMI_IDDIG_SHIFT)           /* 0x00000400 */
#define USB2PHY_GRF_CON0_USBOTG_UTMI_IDPULLUP_SHIFT        (11U)
#define USB2PHY_GRF_CON0_USBOTG_UTMI_IDPULLUP_MASK         (0x1U << USB2PHY_GRF_CON0_USBOTG_UTMI_IDPULLUP_SHIFT)        /* 0x00000800 */
#define USB2PHY_GRF_CON0_USBOTG_UTMI_CHRGVBUS_SHIFT        (12U)
#define USB2PHY_GRF_CON0_USBOTG_UTMI_CHRGVBUS_MASK         (0x1U << USB2PHY_GRF_CON0_USBOTG_UTMI_CHRGVBUS_SHIFT)        /* 0x00001000 */
#define USB2PHY_GRF_CON0_USBOTG_UTMI_DISCHRGVBUS_SHIFT     (13U)
#define USB2PHY_GRF_CON0_USBOTG_UTMI_DISCHRGVBUS_MASK      (0x1U << USB2PHY_GRF_CON0_USBOTG_UTMI_DISCHRGVBUS_SHIFT)     /* 0x00002000 */
/* CON1 */
#define USB2PHY_GRF_CON1_USBHOST_UTMI_SEL_SHIFT            (0U)
#define USB2PHY_GRF_CON1_USBHOST_UTMI_SEL_MASK             (0x1U << USB2PHY_GRF_CON1_USBHOST_UTMI_SEL_SHIFT)            /* 0x00000001 */
#define USB2PHY_GRF_CON1_USBHOST_UTMI_SUSPEND_N_SHIFT      (1U)
#define USB2PHY_GRF_CON1_USBHOST_UTMI_SUSPEND_N_MASK       (0x1U << USB2PHY_GRF_CON1_USBHOST_UTMI_SUSPEND_N_SHIFT)      /* 0x00000002 */
#define USB2PHY_GRF_CON1_USBHOST_UTMI_OPMODE_SHIFT         (2U)
#define USB2PHY_GRF_CON1_USBHOST_UTMI_OPMODE_MASK          (0x3U << USB2PHY_GRF_CON1_USBHOST_UTMI_OPMODE_SHIFT)         /* 0x0000000C */
#define USB2PHY_GRF_CON1_USBHOST_UTMI_XCVRSELECT_SHIFT     (4U)
#define USB2PHY_GRF_CON1_USBHOST_UTMI_XCVRSELECT_MASK      (0x3U << USB2PHY_GRF_CON1_USBHOST_UTMI_XCVRSELECT_SHIFT)     /* 0x00000030 */
#define USB2PHY_GRF_CON1_USBHOST_UTMI_TERMSELECT_SHIFT     (6U)
#define USB2PHY_GRF_CON1_USBHOST_UTMI_TERMSELECT_MASK      (0x1U << USB2PHY_GRF_CON1_USBHOST_UTMI_TERMSELECT_SHIFT)     /* 0x00000040 */
#define USB2PHY_GRF_CON1_USBHOST_UTMI_DPPULLDOWN_SHIFT     (7U)
#define USB2PHY_GRF_CON1_USBHOST_UTMI_DPPULLDOWN_MASK      (0x1U << USB2PHY_GRF_CON1_USBHOST_UTMI_DPPULLDOWN_SHIFT)     /* 0x00000080 */
#define USB2PHY_GRF_CON1_USBHOST_UTMI_DMPULLDOWN_SHIFT     (8U)
#define USB2PHY_GRF_CON1_USBHOST_UTMI_DMPULLDOWN_MASK      (0x1U << USB2PHY_GRF_CON1_USBHOST_UTMI_DMPULLDOWN_SHIFT)     /* 0x00000100 */
/* CON2 */
#define USB2PHY_GRF_CON2_USBOTG_DISABLE_0_SHIFT            (0U)
#define USB2PHY_GRF_CON2_USBOTG_DISABLE_0_MASK             (0x1U << USB2PHY_GRF_CON2_USBOTG_DISABLE_0_SHIFT)            /* 0x00000001 */
#define USB2PHY_GRF_CON2_USBOTG_DISABLE_1_SHIFT            (1U)
#define USB2PHY_GRF_CON2_USBOTG_DISABLE_1_MASK             (0x1U << USB2PHY_GRF_CON2_USBOTG_DISABLE_1_SHIFT)            /* 0x00000002 */
#define USB2PHY_GRF_CON2_BYPASSDMEN_USBOTG_SHIFT           (2U)
#define USB2PHY_GRF_CON2_BYPASSDMEN_USBOTG_MASK            (0x1U << USB2PHY_GRF_CON2_BYPASSDMEN_USBOTG_SHIFT)           /* 0x00000004 */
#define USB2PHY_GRF_CON2_BYPASSSEL_USBOTG_SHIFT            (3U)
#define USB2PHY_GRF_CON2_BYPASSSEL_USBOTG_MASK             (0x1U << USB2PHY_GRF_CON2_BYPASSSEL_USBOTG_SHIFT)            /* 0x00000008 */
#define USB2PHY_GRF_CON2_USBPHY_COMMONONN_SHIFT            (4U)
#define USB2PHY_GRF_CON2_USBPHY_COMMONONN_MASK             (0x1U << USB2PHY_GRF_CON2_USBPHY_COMMONONN_SHIFT)            /* 0x00000010 */
#define USB2PHY_GRF_CON2_IDP_SINK_EN_USBOTG_SHIFT          (7U)
#define USB2PHY_GRF_CON2_IDP_SINK_EN_USBOTG_MASK           (0x1U << USB2PHY_GRF_CON2_IDP_SINK_EN_USBOTG_SHIFT)          /* 0x00000080 */
#define USB2PHY_GRF_CON2_IDM_SINK_EN_USBOTG_SHIFT          (8U)
#define USB2PHY_GRF_CON2_IDM_SINK_EN_USBOTG_MASK           (0x1U << USB2PHY_GRF_CON2_IDM_SINK_EN_USBOTG_SHIFT)          /* 0x00000100 */
#define USB2PHY_GRF_CON2_IDP_SRC_EN_USBOTG_SHIFT           (9U)
#define USB2PHY_GRF_CON2_IDP_SRC_EN_USBOTG_MASK            (0x1U << USB2PHY_GRF_CON2_IDP_SRC_EN_USBOTG_SHIFT)           /* 0x00000200 */
#define USB2PHY_GRF_CON2_RDM_PDWN_EN_USBOTG_SHIFT          (10U)
#define USB2PHY_GRF_CON2_RDM_PDWN_EN_USBOTG_MASK           (0x1U << USB2PHY_GRF_CON2_RDM_PDWN_EN_USBOTG_SHIFT)          /* 0x00000400 */
#define USB2PHY_GRF_CON2_VDP_SRC_EN_USBOTG_SHIFT           (11U)
#define USB2PHY_GRF_CON2_VDP_SRC_EN_USBOTG_MASK            (0x1U << USB2PHY_GRF_CON2_VDP_SRC_EN_USBOTG_SHIFT)           /* 0x00000800 */
#define USB2PHY_GRF_CON2_VDM_SRC_EN_USBOTG_SHIFT           (12U)
#define USB2PHY_GRF_CON2_VDM_SRC_EN_USBOTG_MASK            (0x1U << USB2PHY_GRF_CON2_VDM_SRC_EN_USBOTG_SHIFT)           /* 0x00001000 */
/* CON3 */
#define USB2PHY_GRF_CON3_USBHOST_UTMI_DRVVBUS_SHIFT        (0U)
#define USB2PHY_GRF_CON3_USBHOST_UTMI_DRVVBUS_MASK         (0x1U << USB2PHY_GRF_CON3_USBHOST_UTMI_DRVVBUS_SHIFT)        /* 0x00000001 */
#define USB2PHY_GRF_CON3_USBHOST_UTMI_CHRGVBUS_SHIFT       (1U)
#define USB2PHY_GRF_CON3_USBHOST_UTMI_CHRGVBUS_MASK        (0x1U << USB2PHY_GRF_CON3_USBHOST_UTMI_CHRGVBUS_SHIFT)       /* 0x00000002 */
#define USB2PHY_GRF_CON3_USBHOST_UTMI_DISCHRGVBUS_SHIFT    (2U)
#define USB2PHY_GRF_CON3_USBHOST_UTMI_DISCHRGVBUS_MASK     (0x1U << USB2PHY_GRF_CON3_USBHOST_UTMI_DISCHRGVBUS_SHIFT)    /* 0x00000004 */
#define USB2PHY_GRF_CON3_USBHOST_UTMI_DPPULLDOWN_SHIFT     (3U)
#define USB2PHY_GRF_CON3_USBHOST_UTMI_DPPULLDOWN_MASK      (0x1U << USB2PHY_GRF_CON3_USBHOST_UTMI_DPPULLDOWN_SHIFT)     /* 0x00000008 */
#define USB2PHY_GRF_CON3_USBHOST_UTMI_DMPULLDOWN_SHIFT     (4U)
#define USB2PHY_GRF_CON3_USBHOST_UTMI_DMPULLDOWN_MASK      (0x1U << USB2PHY_GRF_CON3_USBHOST_UTMI_DMPULLDOWN_SHIFT)     /* 0x00000010 */
#define USB2PHY_GRF_CON3_USBHOST_UTMI_IDPULLUP_SHIFT       (5U)
#define USB2PHY_GRF_CON3_USBHOST_UTMI_IDPULLUP_MASK        (0x1U << USB2PHY_GRF_CON3_USBHOST_UTMI_IDPULLUP_SHIFT)       /* 0x00000020 */
#define USB2PHY_GRF_CON3_USBOTG_UTMI_FS_XVER_OWN_SHIFT     (6U)
#define USB2PHY_GRF_CON3_USBOTG_UTMI_FS_XVER_OWN_MASK      (0x1U << USB2PHY_GRF_CON3_USBOTG_UTMI_FS_XVER_OWN_SHIFT)     /* 0x00000040 */
#define USB2PHY_GRF_CON3_USBOTG_UTMI_FS_OE_SHIFT           (7U)
#define USB2PHY_GRF_CON3_USBOTG_UTMI_FS_OE_MASK            (0x1U << USB2PHY_GRF_CON3_USBOTG_UTMI_FS_OE_SHIFT)           /* 0x00000080 */
#define USB2PHY_GRF_CON3_USBOTG_UTMI_FS_DATA_SHIFT         (8U)
#define USB2PHY_GRF_CON3_USBOTG_UTMI_FS_DATA_MASK          (0x1U << USB2PHY_GRF_CON3_USBOTG_UTMI_FS_DATA_SHIFT)         /* 0x00000100 */
#define USB2PHY_GRF_CON3_USBOTG_UTMI_FS_SE0_SHIFT          (9U)
#define USB2PHY_GRF_CON3_USBOTG_UTMI_FS_SE0_MASK           (0x1U << USB2PHY_GRF_CON3_USBOTG_UTMI_FS_SE0_SHIFT)          /* 0x00000200 */
#define USB2PHY_GRF_CON3_USBOTG_UTMI_DRVVBUS_SEL_SHIFT     (10U)
#define USB2PHY_GRF_CON3_USBOTG_UTMI_DRVVBUS_SEL_MASK      (0x1U << USB2PHY_GRF_CON3_USBOTG_UTMI_DRVVBUS_SEL_SHIFT)     /* 0x00000400 */
#define USB2PHY_GRF_CON3_USBOTG_UTMI_DRVVBUS_SHIFT         (11U)
#define USB2PHY_GRF_CON3_USBOTG_UTMI_DRVVBUS_MASK          (0x1U << USB2PHY_GRF_CON3_USBOTG_UTMI_DRVVBUS_SHIFT)         /* 0x00000800 */
#define USB2PHY_GRF_CON3_USBOTG_UTMI_CHRGVBUS_SHIFT        (13U)
#define USB2PHY_GRF_CON3_USBOTG_UTMI_CHRGVBUS_MASK         (0x1U << USB2PHY_GRF_CON3_USBOTG_UTMI_CHRGVBUS_SHIFT)        /* 0x00002000 */
#define USB2PHY_GRF_CON3_USBPHY_HOSTPORT_WAKEUP_IRQ_EN_SHIFT (15U)
#define USB2PHY_GRF_CON3_USBPHY_HOSTPORT_WAKEUP_IRQ_EN_MASK (0x1U << USB2PHY_GRF_CON3_USBPHY_HOSTPORT_WAKEUP_IRQ_EN_SHIFT) /* 0x00008000 */
/* INT_MASK */
#define USB2PHY_GRF_INT_MASK_OTG0_LINESTATE_IRQ_EN_SHIFT   (0U)
#define USB2PHY_GRF_INT_MASK_OTG0_LINESTATE_IRQ_EN_MASK    (0x1U << USB2PHY_GRF_INT_MASK_OTG0_LINESTATE_IRQ_EN_SHIFT)   /* 0x00000001 */
#define USB2PHY_GRF_INT_MASK_HOST0_LINESTATE_IRQ_EN_SHIFT  (1U)
#define USB2PHY_GRF_INT_MASK_HOST0_LINESTATE_IRQ_EN_MASK   (0x1U << USB2PHY_GRF_INT_MASK_HOST0_LINESTATE_IRQ_EN_SHIFT)  /* 0x00000002 */
#define USB2PHY_GRF_INT_MASK_OTG0_BVALID_IRQ_EN_SHIFT      (2U)
#define USB2PHY_GRF_INT_MASK_OTG0_BVALID_IRQ_EN_MASK       (0x3U << USB2PHY_GRF_INT_MASK_OTG0_BVALID_IRQ_EN_SHIFT)      /* 0x0000000C */
#define USB2PHY_GRF_INT_MASK_OTG0_ID_IRQ_EN_SHIFT          (4U)
#define USB2PHY_GRF_INT_MASK_OTG0_ID_IRQ_EN_MASK           (0x3U << USB2PHY_GRF_INT_MASK_OTG0_ID_IRQ_EN_SHIFT)          /* 0x00000030 */
#define USB2PHY_GRF_INT_MASK_OTG0_DISCONNECT_IRQ_EN_SHIFT  (6U)
#define USB2PHY_GRF_INT_MASK_OTG0_DISCONNECT_IRQ_EN_MASK   (0x3U << USB2PHY_GRF_INT_MASK_OTG0_DISCONNECT_IRQ_EN_SHIFT)  /* 0x000000C0 */
#define USB2PHY_GRF_INT_MASK_HOST0_DISCONNECT_IRQ_EN_SHIFT (8U)
#define USB2PHY_GRF_INT_MASK_HOST0_DISCONNECT_IRQ_EN_MASK  (0x3U << USB2PHY_GRF_INT_MASK_HOST0_DISCONNECT_IRQ_EN_SHIFT) /* 0x00000300 */
/* INT_STATUS */
#define USB2PHY_GRF_INT_STATUS_OTG0_LINESTATE_IRQ_SHIFT    (0U)
#define USB2PHY_GRF_INT_STATUS_OTG0_LINESTATE_IRQ_MASK     (0x1U << USB2PHY_GRF_INT_STATUS_OTG0_LINESTATE_IRQ_SHIFT)    /* 0x00000001 */
#define USB2PHY_GRF_INT_STATUS_HOST0_LINESTATE_IRQ_SHIFT   (1U)
#define USB2PHY_GRF_INT_STATUS_HOST0_LINESTATE_IRQ_MASK    (0x1U << USB2PHY_GRF_INT_STATUS_HOST0_LINESTATE_IRQ_SHIFT)   /* 0x00000002 */
#define USB2PHY_GRF_INT_STATUS_OTG0_BVALID_IRQ_SHIFT       (2U)
#define USB2PHY_GRF_INT_STATUS_OTG0_BVALID_IRQ_MASK        (0x3U << USB2PHY_GRF_INT_STATUS_OTG0_BVALID_IRQ_SHIFT)       /* 0x0000000C */
#define USB2PHY_GRF_INT_STATUS_OTG0_ID_IRQ_SHIFT           (4U)
#define USB2PHY_GRF_INT_STATUS_OTG0_ID_IRQ_MASK            (0x3U << USB2PHY_GRF_INT_STATUS_OTG0_ID_IRQ_SHIFT)           /* 0x00000030 */
#define USB2PHY_GRF_INT_STATUS_OTG0_DISCONNECT_IRQ_SHIFT   (6U)
#define USB2PHY_GRF_INT_STATUS_OTG0_DISCONNECT_IRQ_MASK    (0x3U << USB2PHY_GRF_INT_STATUS_OTG0_DISCONNECT_IRQ_SHIFT)   /* 0x000000C0 */
#define USB2PHY_GRF_INT_STATUS_HOST0_DISCONNECT_IRQ_SHIFT  (8U)
#define USB2PHY_GRF_INT_STATUS_HOST0_DISCONNECT_IRQ_MASK   (0x3U << USB2PHY_GRF_INT_STATUS_HOST0_DISCONNECT_IRQ_SHIFT)  /* 0x00000300 */
/* INT_STATUS_CLR */
#define USB2PHY_GRF_INT_STATUS_CLR_OTG0_LINESTATE_IRQ_CLR_SHIFT (0U)
#define USB2PHY_GRF_INT_STATUS_CLR_OTG0_LINESTATE_IRQ_CLR_MASK (0x1U << USB2PHY_GRF_INT_STATUS_CLR_OTG0_LINESTATE_IRQ_CLR_SHIFT) /* 0x00000001 */
#define USB2PHY_GRF_INT_STATUS_CLR_HOST0_LINESTATE_IRQ_CLR_SHIFT (1U)
#define USB2PHY_GRF_INT_STATUS_CLR_HOST0_LINESTATE_IRQ_CLR_MASK (0x1U << USB2PHY_GRF_INT_STATUS_CLR_HOST0_LINESTATE_IRQ_CLR_SHIFT) /* 0x00000002 */
#define USB2PHY_GRF_INT_STATUS_CLR_OTG0_BVALID_IRQ_CLR_SHIFT (2U)
#define USB2PHY_GRF_INT_STATUS_CLR_OTG0_BVALID_IRQ_CLR_MASK (0x3U << USB2PHY_GRF_INT_STATUS_CLR_OTG0_BVALID_IRQ_CLR_SHIFT) /* 0x0000000C */
#define USB2PHY_GRF_INT_STATUS_CLR_OTG0_ID_IRQ_CLR_SHIFT   (4U)
#define USB2PHY_GRF_INT_STATUS_CLR_OTG0_ID_IRQ_CLR_MASK    (0x3U << USB2PHY_GRF_INT_STATUS_CLR_OTG0_ID_IRQ_CLR_SHIFT)   /* 0x00000030 */
#define USB2PHY_GRF_INT_STATUS_CLR_OTG0_DISCONNECT_IRQ_CLR_SHIFT (6U)
#define USB2PHY_GRF_INT_STATUS_CLR_OTG0_DISCONNECT_IRQ_CLR_MASK (0x3U << USB2PHY_GRF_INT_STATUS_CLR_OTG0_DISCONNECT_IRQ_CLR_SHIFT) /* 0x000000C0 */
#define USB2PHY_GRF_INT_STATUS_CLR_HOST0_DISCONNECT_IRQ_CLR_SHIFT (8U)
#define USB2PHY_GRF_INT_STATUS_CLR_HOST0_DISCONNECT_IRQ_CLR_MASK (0x3U << USB2PHY_GRF_INT_STATUS_CLR_HOST0_DISCONNECT_IRQ_CLR_SHIFT) /* 0x00000300 */
/* STATUS */
#define USB2PHY_GRF_STATUS_USBOTG_UTMI_VPI_SHIFT           (0U)
#define USB2PHY_GRF_STATUS_USBOTG_UTMI_VPI_MASK            (0x1U << USB2PHY_GRF_STATUS_USBOTG_UTMI_VPI_SHIFT)           /* 0x00000001 */
#define USB2PHY_GRF_STATUS_USBOTG_UTMI_VMI_SHIFT           (1U)
#define USB2PHY_GRF_STATUS_USBOTG_UTMI_VMI_MASK            (0x1U << USB2PHY_GRF_STATUS_USBOTG_UTMI_VMI_SHIFT)           /* 0x00000002 */
#define USB2PHY_GRF_STATUS_USBOTG_UTMI_VBUSVALID_SHIFT     (2U)
#define USB2PHY_GRF_STATUS_USBOTG_UTMI_VBUSVALID_MASK      (0x1U << USB2PHY_GRF_STATUS_USBOTG_UTMI_VBUSVALID_SHIFT)     /* 0x00000004 */
#define USB2PHY_GRF_STATUS_USBOTG_UTMI_SESSEND_SHIFT       (3U)
#define USB2PHY_GRF_STATUS_USBOTG_UTMI_SESSEND_MASK        (0x1U << USB2PHY_GRF_STATUS_USBOTG_UTMI_SESSEND_SHIFT)       /* 0x00000008 */
#define USB2PHY_GRF_STATUS_USBOTG_UTMI_LINESTATE_SHIFT     (4U)
#define USB2PHY_GRF_STATUS_USBOTG_UTMI_LINESTATE_MASK      (0x3U << USB2PHY_GRF_STATUS_USBOTG_UTMI_LINESTATE_SHIFT)     /* 0x00000030 */
#define USB2PHY_GRF_STATUS_USBOTG_UTMI_IDDIG_SHIFT         (6U)
#define USB2PHY_GRF_STATUS_USBOTG_UTMI_IDDIG_MASK          (0x1U << USB2PHY_GRF_STATUS_USBOTG_UTMI_IDDIG_SHIFT)         /* 0x00000040 */
#define USB2PHY_GRF_STATUS_USBOTG_UTMI_HOSTDISCONNECT_SHIFT (7U)
#define USB2PHY_GRF_STATUS_USBOTG_UTMI_HOSTDISCONNECT_MASK (0x1U << USB2PHY_GRF_STATUS_USBOTG_UTMI_HOSTDISCONNECT_SHIFT) /* 0x00000080 */
#define USB2PHY_GRF_STATUS_USBOTG_UTMI_FS_XVER_OWN_SHIFT   (8U)
#define USB2PHY_GRF_STATUS_USBOTG_UTMI_FS_XVER_OWN_MASK    (0x1U << USB2PHY_GRF_STATUS_USBOTG_UTMI_FS_XVER_OWN_SHIFT)   /* 0x00000100 */
#define USB2PHY_GRF_STATUS_USBOTG_UTMI_BVALID_SHIFT        (9U)
#define USB2PHY_GRF_STATUS_USBOTG_UTMI_BVALID_MASK         (0x1U << USB2PHY_GRF_STATUS_USBOTG_UTMI_BVALID_SHIFT)        /* 0x00000200 */
#define USB2PHY_GRF_STATUS_USBOTG_UTMI_AVALID_SHIFT        (10U)
#define USB2PHY_GRF_STATUS_USBOTG_UTMI_AVALID_MASK         (0x1U << USB2PHY_GRF_STATUS_USBOTG_UTMI_AVALID_SHIFT)        /* 0x00000400 */
#define USB2PHY_GRF_STATUS_USBOTG_PHY_LS_FS_RCV_SHIFT      (11U)
#define USB2PHY_GRF_STATUS_USBOTG_PHY_LS_FS_RCV_MASK       (0x1U << USB2PHY_GRF_STATUS_USBOTG_PHY_LS_FS_RCV_SHIFT)      /* 0x00000800 */
#define USB2PHY_GRF_STATUS_USBHOST_UTMI_VPI_SHIFT          (12U)
#define USB2PHY_GRF_STATUS_USBHOST_UTMI_VPI_MASK           (0x1U << USB2PHY_GRF_STATUS_USBHOST_UTMI_VPI_SHIFT)          /* 0x00001000 */
#define USB2PHY_GRF_STATUS_USBHOST_UTMI_VMI_SHIFT          (13U)
#define USB2PHY_GRF_STATUS_USBHOST_UTMI_VMI_MASK           (0x1U << USB2PHY_GRF_STATUS_USBHOST_UTMI_VMI_SHIFT)          /* 0x00002000 */
#define USB2PHY_GRF_STATUS_USBHOST_UTMI_VBUSVALID_SHIFT    (14U)
#define USB2PHY_GRF_STATUS_USBHOST_UTMI_VBUSVALID_MASK     (0x1U << USB2PHY_GRF_STATUS_USBHOST_UTMI_VBUSVALID_SHIFT)    /* 0x00004000 */
#define USB2PHY_GRF_STATUS_USBHOST_UTMI_SESSEND_SHIFT      (15U)
#define USB2PHY_GRF_STATUS_USBHOST_UTMI_SESSEND_MASK       (0x1U << USB2PHY_GRF_STATUS_USBHOST_UTMI_SESSEND_SHIFT)      /* 0x00008000 */
#define USB2PHY_GRF_STATUS_USBHOST_UTMI_LINESTATE_SHIFT    (16U)
#define USB2PHY_GRF_STATUS_USBHOST_UTMI_LINESTATE_MASK     (0x3U << USB2PHY_GRF_STATUS_USBHOST_UTMI_LINESTATE_SHIFT)    /* 0x00030000 */
#define USB2PHY_GRF_STATUS_USBHOST_UTMI_IDDIG_O_SHIFT      (18U)
#define USB2PHY_GRF_STATUS_USBHOST_UTMI_IDDIG_O_MASK       (0x1U << USB2PHY_GRF_STATUS_USBHOST_UTMI_IDDIG_O_SHIFT)      /* 0x00040000 */
#define USB2PHY_GRF_STATUS_USBHOST_UTMI_HOSTDISCONNECT_SHIFT (19U)
#define USB2PHY_GRF_STATUS_USBHOST_UTMI_HOSTDISCONNECT_MASK (0x1U << USB2PHY_GRF_STATUS_USBHOST_UTMI_HOSTDISCONNECT_SHIFT) /* 0x00080000 */
#define USB2PHY_GRF_STATUS_USBHOST_UTMI_BVALID_SHIFT       (20U)
#define USB2PHY_GRF_STATUS_USBHOST_UTMI_BVALID_MASK        (0x1U << USB2PHY_GRF_STATUS_USBHOST_UTMI_BVALID_SHIFT)       /* 0x00100000 */
#define USB2PHY_GRF_STATUS_USBHOST_UTMI_AVALID_SHIFT       (21U)
#define USB2PHY_GRF_STATUS_USBHOST_UTMI_AVALID_MASK        (0x1U << USB2PHY_GRF_STATUS_USBHOST_UTMI_AVALID_SHIFT)       /* 0x00200000 */
#define USB2PHY_GRF_STATUS_USBHOST_PHY_LS_FS_RCV_SHIFT     (22U)
#define USB2PHY_GRF_STATUS_USBHOST_PHY_LS_FS_RCV_MASK      (0x1U << USB2PHY_GRF_STATUS_USBHOST_PHY_LS_FS_RCV_SHIFT)     /* 0x00400000 */
#define USB2PHY_GRF_STATUS_USBPHY_DCP_DETECTED_SHIFT       (23U)
#define USB2PHY_GRF_STATUS_USBPHY_DCP_DETECTED_MASK        (0x1U << USB2PHY_GRF_STATUS_USBPHY_DCP_DETECTED_SHIFT)       /* 0x00800000 */
#define USB2PHY_GRF_STATUS_USBPHY_CP_DETECTED_SHIFT        (24U)
#define USB2PHY_GRF_STATUS_USBPHY_CP_DETECTED_MASK         (0x1U << USB2PHY_GRF_STATUS_USBPHY_CP_DETECTED_SHIFT)        /* 0x01000000 */
#define USB2PHY_GRF_STATUS_USBPHY_DP_DETECTED_SHIFT        (25U)
#define USB2PHY_GRF_STATUS_USBPHY_DP_DETECTED_MASK         (0x1U << USB2PHY_GRF_STATUS_USBPHY_DP_DETECTED_SHIFT)        /* 0x02000000 */
/* LS_CON */
#define USB2PHY_GRF_LS_CON_LINESTATE_FILTER_CON_SHIFT      (0U)
#define USB2PHY_GRF_LS_CON_LINESTATE_FILTER_CON_MASK       (0xFFFFFU << USB2PHY_GRF_LS_CON_LINESTATE_FILTER_CON_SHIFT)  /* 0x000FFFFF */
/* DIS_CON */
#define USB2PHY_GRF_DIS_CON_DISCONNECT_FILTER_CON_SHIFT    (0U)
#define USB2PHY_GRF_DIS_CON_DISCONNECT_FILTER_CON_MASK     (0xFFFFFU << USB2PHY_GRF_DIS_CON_DISCONNECT_FILTER_CON_SHIFT) /* 0x000FFFFF */
/* BVALID_CON */
#define USB2PHY_GRF_BVALID_CON_BVALID_FILTER_CON_SHIFT     (0U)
#define USB2PHY_GRF_BVALID_CON_BVALID_FILTER_CON_MASK      (0xFFFFFU << USB2PHY_GRF_BVALID_CON_BVALID_FILTER_CON_SHIFT) /* 0x000FFFFF */
/* ID_CON */
#define USB2PHY_GRF_ID_CON_ID_FILTER_CON_SHIFT             (0U)
#define USB2PHY_GRF_ID_CON_ID_FILTER_CON_MASK              (0xFFFFFFFU << USB2PHY_GRF_ID_CON_ID_FILTER_CON_SHIFT)       /* 0x0FFFFFFF */
/* CON4 */
#define USB2PHY_GRF_CON4_USBOTG_UTMI_SUSPEND_SEL0_SHIFT    (4U)
#define USB2PHY_GRF_CON4_USBOTG_UTMI_SUSPEND_SEL0_MASK     (0x1U << USB2PHY_GRF_CON4_USBOTG_UTMI_SUSPEND_SEL0_SHIFT)    /* 0x00000010 */
#define USB2PHY_GRF_CON4_USBOTG_UTMI_SUSPEND_SEL1_SHIFT    (5U)
#define USB2PHY_GRF_CON4_USBOTG_UTMI_SUSPEND_SEL1_MASK     (0x1U << USB2PHY_GRF_CON4_USBOTG_UTMI_SUSPEND_SEL1_SHIFT)    /* 0x00000020 */
#define USB2PHY_GRF_CON4_USBOTG_UTMI_SUSPEND_N_SHIFT       (6U)
#define USB2PHY_GRF_CON4_USBOTG_UTMI_SUSPEND_N_MASK        (0x1U << USB2PHY_GRF_CON4_USBOTG_UTMI_SUSPEND_N_SHIFT)       /* 0x00000040 */
/**************************************USB3PHY_GRF***************************************/
/* PIPE_CON0 */
#define USB3PHY_GRF_PIPE_CON0_SEL_PIPE_DATABUSWIDTH_SHIFT  (0U)
#define USB3PHY_GRF_PIPE_CON0_SEL_PIPE_DATABUSWIDTH_MASK   (0x1U << USB3PHY_GRF_PIPE_CON0_SEL_PIPE_DATABUSWIDTH_SHIFT)  /* 0x00000001 */
#define USB3PHY_GRF_PIPE_CON0_SEL_PIPE_PHYMODE_SHIFT       (1U)
#define USB3PHY_GRF_PIPE_CON0_SEL_PIPE_PHYMODE_MASK        (0x1U << USB3PHY_GRF_PIPE_CON0_SEL_PIPE_PHYMODE_SHIFT)       /* 0x00000002 */
#define USB3PHY_GRF_PIPE_CON0_SEL_PIPE_RATE_SHIFT          (2U)
#define USB3PHY_GRF_PIPE_CON0_SEL_PIPE_RATE_MASK           (0x1U << USB3PHY_GRF_PIPE_CON0_SEL_PIPE_RATE_SHIFT)          /* 0x00000004 */
#define USB3PHY_GRF_PIPE_CON0_SEL_PIPE_MAC_PCLKREQ_N_SHIFT (3U)
#define USB3PHY_GRF_PIPE_CON0_SEL_PIPE_MAC_PCLKREQ_N_MASK  (0x1U << USB3PHY_GRF_PIPE_CON0_SEL_PIPE_MAC_PCLKREQ_N_SHIFT) /* 0x00000008 */
#define USB3PHY_GRF_PIPE_CON0_SEL_PIPE_L0_POWERDOWN_SHIFT  (6U)
#define USB3PHY_GRF_PIPE_CON0_SEL_PIPE_L0_POWERDOWN_MASK   (0x1U << USB3PHY_GRF_PIPE_CON0_SEL_PIPE_L0_POWERDOWN_SHIFT)  /* 0x00000040 */
#define USB3PHY_GRF_PIPE_CON0_SEL_PIPE_L0_RXTERMINATION_SHIFT (7U)
#define USB3PHY_GRF_PIPE_CON0_SEL_PIPE_L0_RXTERMINATION_MASK (0x1U << USB3PHY_GRF_PIPE_CON0_SEL_PIPE_L0_RXTERMINATION_SHIFT) /* 0x00000080 */
#define USB3PHY_GRF_PIPE_CON0_SEL_PIPE_L0_TXDECTRX_LOOPBACK_SHIFT (8U)
#define USB3PHY_GRF_PIPE_CON0_SEL_PIPE_L0_TXDECTRX_LOOPBACK_MASK (0x1U << USB3PHY_GRF_PIPE_CON0_SEL_PIPE_L0_TXDECTRX_LOOPBACK_SHIFT) /* 0x00000100 */
#define USB3PHY_GRF_PIPE_CON0_SEL_PIPE_L0_TXELECIDLE_SHIFT (9U)
#define USB3PHY_GRF_PIPE_CON0_SEL_PIPE_L0_TXELECIDLE_MASK  (0x1U << USB3PHY_GRF_PIPE_CON0_SEL_PIPE_L0_TXELECIDLE_SHIFT) /* 0x00000200 */
#define USB3PHY_GRF_PIPE_CON0_SEL_PIPE_L0_TXONESZEROS_SHIFT (10U)
#define USB3PHY_GRF_PIPE_CON0_SEL_PIPE_L0_TXONESZEROS_MASK (0x1U << USB3PHY_GRF_PIPE_CON0_SEL_PIPE_L0_TXONESZEROS_SHIFT) /* 0x00000400 */
#define USB3PHY_GRF_PIPE_CON0_SEL_PIPE_L1_POWERDOWN_SHIFT  (11U)
#define USB3PHY_GRF_PIPE_CON0_SEL_PIPE_L1_POWERDOWN_MASK   (0x1U << USB3PHY_GRF_PIPE_CON0_SEL_PIPE_L1_POWERDOWN_SHIFT)  /* 0x00000800 */
#define USB3PHY_GRF_PIPE_CON0_SEL_PIPE_L1_RXTERMINATION_SHIFT (12U)
#define USB3PHY_GRF_PIPE_CON0_SEL_PIPE_L1_RXTERMINATION_MASK (0x1U << USB3PHY_GRF_PIPE_CON0_SEL_PIPE_L1_RXTERMINATION_SHIFT) /* 0x00001000 */
#define USB3PHY_GRF_PIPE_CON0_SEL_PIPE_L1_TXDECTRX_LOOPBACK_SHIFT (13U)
#define USB3PHY_GRF_PIPE_CON0_SEL_PIPE_L1_TXDECTRX_LOOPBACK_MASK (0x1U << USB3PHY_GRF_PIPE_CON0_SEL_PIPE_L1_TXDECTRX_LOOPBACK_SHIFT) /* 0x00002000 */
#define USB3PHY_GRF_PIPE_CON0_SEL_PIPE_L1_TXELECIDLE_SHIFT (14U)
#define USB3PHY_GRF_PIPE_CON0_SEL_PIPE_L1_TXELECIDLE_MASK  (0x1U << USB3PHY_GRF_PIPE_CON0_SEL_PIPE_L1_TXELECIDLE_SHIFT) /* 0x00004000 */
#define USB3PHY_GRF_PIPE_CON0_SEL_PIPE_L1_TXONESZEROS_SHIFT (15U)
#define USB3PHY_GRF_PIPE_CON0_SEL_PIPE_L1_TXONESZEROS_MASK (0x1U << USB3PHY_GRF_PIPE_CON0_SEL_PIPE_L1_TXONESZEROS_SHIFT) /* 0x00008000 */
/* PIPE_CON1 */
#define USB3PHY_GRF_PIPE_CON1_PIPE_DATABUSWIDTH_SHIFT      (0U)
#define USB3PHY_GRF_PIPE_CON1_PIPE_DATABUSWIDTH_MASK       (0x3U << USB3PHY_GRF_PIPE_CON1_PIPE_DATABUSWIDTH_SHIFT)      /* 0x00000003 */
#define USB3PHY_GRF_PIPE_CON1_PIPE_PHYMODE_SHIFT           (2U)
#define USB3PHY_GRF_PIPE_CON1_PIPE_PHYMODE_MASK            (0x3U << USB3PHY_GRF_PIPE_CON1_PIPE_PHYMODE_SHIFT)           /* 0x0000000C */
#define USB3PHY_GRF_PIPE_CON1_PIPE_RATE_SHIFT              (4U)
#define USB3PHY_GRF_PIPE_CON1_PIPE_RATE_MASK               (0x3U << USB3PHY_GRF_PIPE_CON1_PIPE_RATE_SHIFT)              /* 0x00000030 */
#define USB3PHY_GRF_PIPE_CON1_PIPE_MAC_PCLKREQ_N_SHIFT     (6U)
#define USB3PHY_GRF_PIPE_CON1_PIPE_MAC_PCLKREQ_N_MASK      (0x3U << USB3PHY_GRF_PIPE_CON1_PIPE_MAC_PCLKREQ_N_SHIFT)     /* 0x000000C0 */
#define USB3PHY_GRF_PIPE_CON1_SEL_PIPE_RXELECIDLE_DISABLE_L0_SHIFT (8U)
#define USB3PHY_GRF_PIPE_CON1_SEL_PIPE_RXELECIDLE_DISABLE_L0_MASK (0x1U << USB3PHY_GRF_PIPE_CON1_SEL_PIPE_RXELECIDLE_DISABLE_L0_SHIFT) /* 0x00000100 */
#define USB3PHY_GRF_PIPE_CON1_SEL_PIPE_TXCOMMONMODE_DISABLE_L0_SHIFT (9U)
#define USB3PHY_GRF_PIPE_CON1_SEL_PIPE_TXCOMMONMODE_DISABLE_L0_MASK (0x1U << USB3PHY_GRF_PIPE_CON1_SEL_PIPE_TXCOMMONMODE_DISABLE_L0_SHIFT) /* 0x00000200 */
#define USB3PHY_GRF_PIPE_CON1_SEL_PIPE_RXELECIDLE_DISABLE_L1_SHIFT (10U)
#define USB3PHY_GRF_PIPE_CON1_SEL_PIPE_RXELECIDLE_DISABLE_L1_MASK (0x1U << USB3PHY_GRF_PIPE_CON1_SEL_PIPE_RXELECIDLE_DISABLE_L1_SHIFT) /* 0x00000400 */
#define USB3PHY_GRF_PIPE_CON1_SEL_PIPE_TXCOMMONMODE_DISABLE_L1_SHIFT (11U)
#define USB3PHY_GRF_PIPE_CON1_SEL_PIPE_TXCOMMONMODE_DISABLE_L1_MASK (0x1U << USB3PHY_GRF_PIPE_CON1_SEL_PIPE_TXCOMMONMODE_DISABLE_L1_SHIFT) /* 0x00000800 */
#define USB3PHY_GRF_PIPE_CON1_SEL_PIPE_TXCOMPLIANCE_L0_SHIFT (12U)
#define USB3PHY_GRF_PIPE_CON1_SEL_PIPE_TXCOMPLIANCE_L0_MASK (0x1U << USB3PHY_GRF_PIPE_CON1_SEL_PIPE_TXCOMPLIANCE_L0_SHIFT) /* 0x00001000 */
#define USB3PHY_GRF_PIPE_CON1_SEL_PIPE_TXCOMPLIANCE_L1_SHIFT (13U)
#define USB3PHY_GRF_PIPE_CON1_SEL_PIPE_TXCOMPLIANCE_L1_MASK (0x1U << USB3PHY_GRF_PIPE_CON1_SEL_PIPE_TXCOMPLIANCE_L1_SHIFT) /* 0x00002000 */
#define USB3PHY_GRF_PIPE_CON1_PIPE_TXCOMPLIANCE_L0_SHIFT   (14U)
#define USB3PHY_GRF_PIPE_CON1_PIPE_TXCOMPLIANCE_L0_MASK    (0x1U << USB3PHY_GRF_PIPE_CON1_PIPE_TXCOMPLIANCE_L0_SHIFT)   /* 0x00004000 */
#define USB3PHY_GRF_PIPE_CON1_PIPE_TXCOMPLIANCE_L1_SHIFT   (15U)
#define USB3PHY_GRF_PIPE_CON1_PIPE_TXCOMPLIANCE_L1_MASK    (0x1U << USB3PHY_GRF_PIPE_CON1_PIPE_TXCOMPLIANCE_L1_SHIFT)   /* 0x00008000 */
/* PIPE_CON2 */
#define USB3PHY_GRF_PIPE_CON2_PIPE_L0_POWERDOWN_SHIFT      (0U)
#define USB3PHY_GRF_PIPE_CON2_PIPE_L0_POWERDOWN_MASK       (0x3U << USB3PHY_GRF_PIPE_CON2_PIPE_L0_POWERDOWN_SHIFT)      /* 0x00000003 */
#define USB3PHY_GRF_PIPE_CON2_PIPE_L0_RXTERMINATION_SHIFT  (2U)
#define USB3PHY_GRF_PIPE_CON2_PIPE_L0_RXTERMINATION_MASK   (0x1U << USB3PHY_GRF_PIPE_CON2_PIPE_L0_RXTERMINATION_SHIFT)  /* 0x00000004 */
#define USB3PHY_GRF_PIPE_CON2_PIPE_L0_TXDECTRX_LOOPBACK_SHIFT (3U)
#define USB3PHY_GRF_PIPE_CON2_PIPE_L0_TXDECTRX_LOOPBACK_MASK (0x1U << USB3PHY_GRF_PIPE_CON2_PIPE_L0_TXDECTRX_LOOPBACK_SHIFT) /* 0x00000008 */
#define USB3PHY_GRF_PIPE_CON2_PIPE_L0_TXELECIDLE_SHIFT     (4U)
#define USB3PHY_GRF_PIPE_CON2_PIPE_L0_TXELECIDLE_MASK      (0x1U << USB3PHY_GRF_PIPE_CON2_PIPE_L0_TXELECIDLE_SHIFT)     /* 0x00000010 */
#define USB3PHY_GRF_PIPE_CON2_PIPE_L0_TXONESZEROS_SHIFT    (5U)
#define USB3PHY_GRF_PIPE_CON2_PIPE_L0_TXONESZEROS_MASK     (0x1U << USB3PHY_GRF_PIPE_CON2_PIPE_L0_TXONESZEROS_SHIFT)    /* 0x00000020 */
#define USB3PHY_GRF_PIPE_CON2_PIPE_RXELECIDLE_DISABLE_L0_SHIFT (6U)
#define USB3PHY_GRF_PIPE_CON2_PIPE_RXELECIDLE_DISABLE_L0_MASK (0x1U << USB3PHY_GRF_PIPE_CON2_PIPE_RXELECIDLE_DISABLE_L0_SHIFT) /* 0x00000040 */
#define USB3PHY_GRF_PIPE_CON2_PIPE_TXCOMMONMODE_DISABLE_L0_SHIFT (7U)
#define USB3PHY_GRF_PIPE_CON2_PIPE_TXCOMMONMODE_DISABLE_L0_MASK (0x1U << USB3PHY_GRF_PIPE_CON2_PIPE_TXCOMMONMODE_DISABLE_L0_SHIFT) /* 0x00000080 */
#define USB3PHY_GRF_PIPE_CON2_PIPE_L1_POWERDOWN_SHIFT      (8U)
#define USB3PHY_GRF_PIPE_CON2_PIPE_L1_POWERDOWN_MASK       (0x3U << USB3PHY_GRF_PIPE_CON2_PIPE_L1_POWERDOWN_SHIFT)      /* 0x00000300 */
#define USB3PHY_GRF_PIPE_CON2_PIPE_L1_RXTERMINATION_SHIFT  (10U)
#define USB3PHY_GRF_PIPE_CON2_PIPE_L1_RXTERMINATION_MASK   (0x1U << USB3PHY_GRF_PIPE_CON2_PIPE_L1_RXTERMINATION_SHIFT)  /* 0x00000400 */
#define USB3PHY_GRF_PIPE_CON2_PIPE_L1_TXDECTRX_LOOPBACK_SHIFT (11U)
#define USB3PHY_GRF_PIPE_CON2_PIPE_L1_TXDECTRX_LOOPBACK_MASK (0x1U << USB3PHY_GRF_PIPE_CON2_PIPE_L1_TXDECTRX_LOOPBACK_SHIFT) /* 0x00000800 */
#define USB3PHY_GRF_PIPE_CON2_PIPE_L1_TXELECIDLE_SHIFT     (12U)
#define USB3PHY_GRF_PIPE_CON2_PIPE_L1_TXELECIDLE_MASK      (0x1U << USB3PHY_GRF_PIPE_CON2_PIPE_L1_TXELECIDLE_SHIFT)     /* 0x00001000 */
#define USB3PHY_GRF_PIPE_CON2_PIPE_L1_TXONESZEROS_SHIFT    (13U)
#define USB3PHY_GRF_PIPE_CON2_PIPE_L1_TXONESZEROS_MASK     (0x1U << USB3PHY_GRF_PIPE_CON2_PIPE_L1_TXONESZEROS_SHIFT)    /* 0x00002000 */
#define USB3PHY_GRF_PIPE_CON2_PIPE_RXELECIDLE_DISABLE_L1_SHIFT (14U)
#define USB3PHY_GRF_PIPE_CON2_PIPE_RXELECIDLE_DISABLE_L1_MASK (0x1U << USB3PHY_GRF_PIPE_CON2_PIPE_RXELECIDLE_DISABLE_L1_SHIFT) /* 0x00004000 */
#define USB3PHY_GRF_PIPE_CON2_PIPE_TXCOMMONMODE_DISABLE_L1_SHIFT (15U)
#define USB3PHY_GRF_PIPE_CON2_PIPE_TXCOMMONMODE_DISABLE_L1_MASK (0x1U << USB3PHY_GRF_PIPE_CON2_PIPE_TXCOMMONMODE_DISABLE_L1_SHIFT) /* 0x00008000 */
/* PIPE_CON3 */
#define USB3PHY_GRF_PIPE_CON3_PIPE_TXSWING_L0_SHIFT        (1U)
#define USB3PHY_GRF_PIPE_CON3_PIPE_TXSWING_L0_MASK         (0x1U << USB3PHY_GRF_PIPE_CON3_PIPE_TXSWING_L0_SHIFT)        /* 0x00000002 */
#define USB3PHY_GRF_PIPE_CON3_PIPE_TXDEEMPH_L0_SHIFT       (2U)
#define USB3PHY_GRF_PIPE_CON3_PIPE_TXDEEMPH_L0_MASK        (0x3U << USB3PHY_GRF_PIPE_CON3_PIPE_TXDEEMPH_L0_SHIFT)       /* 0x0000000C */
#define USB3PHY_GRF_PIPE_CON3_PIPE_TXMARGIN_L0_SHIFT       (4U)
#define USB3PHY_GRF_PIPE_CON3_PIPE_TXMARGIN_L0_MASK        (0x7U << USB3PHY_GRF_PIPE_CON3_PIPE_TXMARGIN_L0_SHIFT)       /* 0x00000070 */
#define USB3PHY_GRF_PIPE_CON3_PIPE_TXSWING_L1_SHIFT        (7U)
#define USB3PHY_GRF_PIPE_CON3_PIPE_TXSWING_L1_MASK         (0x1U << USB3PHY_GRF_PIPE_CON3_PIPE_TXSWING_L1_SHIFT)        /* 0x00000080 */
#define USB3PHY_GRF_PIPE_CON3_PIPE_TXDEEMPH_L1_SHIFT       (8U)
#define USB3PHY_GRF_PIPE_CON3_PIPE_TXDEEMPH_L1_MASK        (0x3U << USB3PHY_GRF_PIPE_CON3_PIPE_TXDEEMPH_L1_SHIFT)       /* 0x00000300 */
#define USB3PHY_GRF_PIPE_CON3_PIPE_TXMARGIN_L1_SHIFT       (10U)
#define USB3PHY_GRF_PIPE_CON3_PIPE_TXMARGIN_L1_MASK        (0x7U << USB3PHY_GRF_PIPE_CON3_PIPE_TXMARGIN_L1_SHIFT)       /* 0x00001C00 */
/* PIPE_CON4 */
#define USB3PHY_GRF_PIPE_CON4_SEL_PIPE_TXSWING_L0_SHIFT    (0U)
#define USB3PHY_GRF_PIPE_CON4_SEL_PIPE_TXSWING_L0_MASK     (0x1U << USB3PHY_GRF_PIPE_CON4_SEL_PIPE_TXSWING_L0_SHIFT)    /* 0x00000001 */
#define USB3PHY_GRF_PIPE_CON4_SEL_PIPE_TXDEEMPH_L0_SHIFT   (1U)
#define USB3PHY_GRF_PIPE_CON4_SEL_PIPE_TXDEEMPH_L0_MASK    (0x1U << USB3PHY_GRF_PIPE_CON4_SEL_PIPE_TXDEEMPH_L0_SHIFT)   /* 0x00000002 */
#define USB3PHY_GRF_PIPE_CON4_SEL_PIPE_TXMARGIN_L0_SHIFT   (2U)
#define USB3PHY_GRF_PIPE_CON4_SEL_PIPE_TXMARGIN_L0_MASK    (0x1U << USB3PHY_GRF_PIPE_CON4_SEL_PIPE_TXMARGIN_L0_SHIFT)   /* 0x00000004 */
#define USB3PHY_GRF_PIPE_CON4_SEL_PIPE_TXSWING_L1_SHIFT    (3U)
#define USB3PHY_GRF_PIPE_CON4_SEL_PIPE_TXSWING_L1_MASK     (0x1U << USB3PHY_GRF_PIPE_CON4_SEL_PIPE_TXSWING_L1_SHIFT)    /* 0x00000008 */
#define USB3PHY_GRF_PIPE_CON4_SEL_PIPE_TXDEEMPH_L1_SHIFT   (4U)
#define USB3PHY_GRF_PIPE_CON4_SEL_PIPE_TXDEEMPH_L1_MASK    (0x1U << USB3PHY_GRF_PIPE_CON4_SEL_PIPE_TXDEEMPH_L1_SHIFT)   /* 0x00000010 */
#define USB3PHY_GRF_PIPE_CON4_SEL_PIPE_TXMARGIN_L1_SHIFT   (5U)
#define USB3PHY_GRF_PIPE_CON4_SEL_PIPE_TXMARGIN_L1_MASK    (0x1U << USB3PHY_GRF_PIPE_CON4_SEL_PIPE_TXMARGIN_L1_SHIFT)   /* 0x00000020 */
/* PIPE_STATUS0 */
#define USB3PHY_GRF_PIPE_STATUS0_PCIE_PHY_OBS_SHIFT        (0U)
#define USB3PHY_GRF_PIPE_STATUS0_PCIE_PHY_OBS_MASK         (0xFFFFU << USB3PHY_GRF_PIPE_STATUS0_PCIE_PHY_OBS_SHIFT)     /* 0x0000FFFF */
/* PIPE_STATUS1 */
#define USB3PHY_GRF_PIPE_STATUS1_PIPE_RXSTATUS_O_L1_SHIFT  (0U)
#define USB3PHY_GRF_PIPE_STATUS1_PIPE_RXSTATUS_O_L1_MASK   (0x7U << USB3PHY_GRF_PIPE_STATUS1_PIPE_RXSTATUS_O_L1_SHIFT)  /* 0x00000007 */
#define USB3PHY_GRF_PIPE_STATUS1_PIPE_RXSTATUS_O_L0_SHIFT  (3U)
#define USB3PHY_GRF_PIPE_STATUS1_PIPE_RXSTATUS_O_L0_MASK   (0x7U << USB3PHY_GRF_PIPE_STATUS1_PIPE_RXSTATUS_O_L0_SHIFT)  /* 0x00000038 */
#define USB3PHY_GRF_PIPE_STATUS1_PIPE_PHYSTATUS_O_L1_SHIFT (6U)
#define USB3PHY_GRF_PIPE_STATUS1_PIPE_PHYSTATUS_O_L1_MASK  (0x1U << USB3PHY_GRF_PIPE_STATUS1_PIPE_PHYSTATUS_O_L1_SHIFT) /* 0x00000040 */
#define USB3PHY_GRF_PIPE_STATUS1_PIPE_PHYSTATUS_O_L0_SHIFT (7U)
#define USB3PHY_GRF_PIPE_STATUS1_PIPE_PHYSTATUS_O_L0_MASK  (0x1U << USB3PHY_GRF_PIPE_STATUS1_PIPE_PHYSTATUS_O_L0_SHIFT) /* 0x00000080 */
#define USB3PHY_GRF_PIPE_STATUS1_PIPE_RXELECIDLE_O_L1_SHIFT (8U)
#define USB3PHY_GRF_PIPE_STATUS1_PIPE_RXELECIDLE_O_L1_MASK (0x1U << USB3PHY_GRF_PIPE_STATUS1_PIPE_RXELECIDLE_O_L1_SHIFT) /* 0x00000100 */
#define USB3PHY_GRF_PIPE_STATUS1_PIPE_RXELECIDLE_O_L0_SHIFT (9U)
#define USB3PHY_GRF_PIPE_STATUS1_PIPE_RXELECIDLE_O_L0_MASK (0x1U << USB3PHY_GRF_PIPE_STATUS1_PIPE_RXELECIDLE_O_L0_SHIFT) /* 0x00000200 */
#define USB3PHY_GRF_PIPE_STATUS1_PIPE_POWER_PRESETN_SHIFT  (10U)
#define USB3PHY_GRF_PIPE_STATUS1_PIPE_POWER_PRESETN_MASK   (0x1U << USB3PHY_GRF_PIPE_STATUS1_PIPE_POWER_PRESETN_SHIFT)  /* 0x00000400 */
#define USB3PHY_GRF_PIPE_STATUS1_PIPE_CLKREQ_N_SHIFT       (11U)
#define USB3PHY_GRF_PIPE_STATUS1_PIPE_CLKREQ_N_MASK        (0x1U << USB3PHY_GRF_PIPE_STATUS1_PIPE_CLKREQ_N_SHIFT)       /* 0x00000800 */
#define USB3PHY_GRF_PIPE_STATUS1_RX_CDR_LOCK_L1_SHIFT      (12U)
#define USB3PHY_GRF_PIPE_STATUS1_RX_CDR_LOCK_L1_MASK       (0x1U << USB3PHY_GRF_PIPE_STATUS1_RX_CDR_LOCK_L1_SHIFT)      /* 0x00001000 */
#define USB3PHY_GRF_PIPE_STATUS1_RX_CDR_LOCK_L0_SHIFT      (13U)
#define USB3PHY_GRF_PIPE_STATUS1_RX_CDR_LOCK_L0_MASK       (0x1U << USB3PHY_GRF_PIPE_STATUS1_RX_CDR_LOCK_L0_SHIFT)      /* 0x00002000 */
#define USB3PHY_GRF_PIPE_STATUS1_TX_PLL_LOCK_SHIFT         (14U)
#define USB3PHY_GRF_PIPE_STATUS1_TX_PLL_LOCK_MASK          (0x1U << USB3PHY_GRF_PIPE_STATUS1_TX_PLL_LOCK_SHIFT)         /* 0x00004000 */
/****************************************PMU_GRF*****************************************/
/* GPIO0A_IOMUX */
#define PMU_GRF_GPIO0A_IOMUX_GPIO0A0_SEL_SHIFT             (0U)
#define PMU_GRF_GPIO0A_IOMUX_GPIO0A0_SEL_MASK              (0x3U << PMU_GRF_GPIO0A_IOMUX_GPIO0A0_SEL_SHIFT)             /* 0x00000003 */
#define PMU_GRF_GPIO0A_IOMUX_GPIO0A1_SEL_SHIFT             (2U)
#define PMU_GRF_GPIO0A_IOMUX_GPIO0A1_SEL_MASK              (0x3U << PMU_GRF_GPIO0A_IOMUX_GPIO0A1_SEL_SHIFT)             /* 0x0000000C */
#define PMU_GRF_GPIO0A_IOMUX_GPIO0A2_SEL_SHIFT             (4U)
#define PMU_GRF_GPIO0A_IOMUX_GPIO0A2_SEL_MASK              (0x3U << PMU_GRF_GPIO0A_IOMUX_GPIO0A2_SEL_SHIFT)             /* 0x00000030 */
#define PMU_GRF_GPIO0A_IOMUX_GPIO0A3_SEL_SHIFT             (6U)
#define PMU_GRF_GPIO0A_IOMUX_GPIO0A3_SEL_MASK              (0x3U << PMU_GRF_GPIO0A_IOMUX_GPIO0A3_SEL_SHIFT)             /* 0x000000C0 */
#define PMU_GRF_GPIO0A_IOMUX_GPIO0A4_SEL_SHIFT             (8U)
#define PMU_GRF_GPIO0A_IOMUX_GPIO0A4_SEL_MASK              (0x3U << PMU_GRF_GPIO0A_IOMUX_GPIO0A4_SEL_SHIFT)             /* 0x00000300 */
#define PMU_GRF_GPIO0A_IOMUX_GPIO0A5_SEL_SHIFT             (10U)
#define PMU_GRF_GPIO0A_IOMUX_GPIO0A5_SEL_MASK              (0x3U << PMU_GRF_GPIO0A_IOMUX_GPIO0A5_SEL_SHIFT)             /* 0x00000C00 */
#define PMU_GRF_GPIO0A_IOMUX_GPIO0A6_SEL_SHIFT             (12U)
#define PMU_GRF_GPIO0A_IOMUX_GPIO0A6_SEL_MASK              (0x3U << PMU_GRF_GPIO0A_IOMUX_GPIO0A6_SEL_SHIFT)             /* 0x00003000 */
#define PMU_GRF_GPIO0A_IOMUX_GPIO0A7_SEL_SHIFT             (14U)
#define PMU_GRF_GPIO0A_IOMUX_GPIO0A7_SEL_MASK              (0x3U << PMU_GRF_GPIO0A_IOMUX_GPIO0A7_SEL_SHIFT)             /* 0x0000C000 */
/* GPIO0B_IOMUX */
#define PMU_GRF_GPIO0B_IOMUX_GPIO0B0_SEL_SHIFT             (0U)
#define PMU_GRF_GPIO0B_IOMUX_GPIO0B0_SEL_MASK              (0x3U << PMU_GRF_GPIO0B_IOMUX_GPIO0B0_SEL_SHIFT)             /* 0x00000003 */
#define PMU_GRF_GPIO0B_IOMUX_GPIO0B1_SEL_SHIFT             (2U)
#define PMU_GRF_GPIO0B_IOMUX_GPIO0B1_SEL_MASK              (0x3U << PMU_GRF_GPIO0B_IOMUX_GPIO0B1_SEL_SHIFT)             /* 0x0000000C */
#define PMU_GRF_GPIO0B_IOMUX_GPIO0B2_SEL_SHIFT             (4U)
#define PMU_GRF_GPIO0B_IOMUX_GPIO0B2_SEL_MASK              (0x3U << PMU_GRF_GPIO0B_IOMUX_GPIO0B2_SEL_SHIFT)             /* 0x00000030 */
#define PMU_GRF_GPIO0B_IOMUX_GPIO0B3_SEL_SHIFT             (6U)
#define PMU_GRF_GPIO0B_IOMUX_GPIO0B3_SEL_MASK              (0x3U << PMU_GRF_GPIO0B_IOMUX_GPIO0B3_SEL_SHIFT)             /* 0x000000C0 */
#define PMU_GRF_GPIO0B_IOMUX_GPIO0B4_SEL_SHIFT             (8U)
#define PMU_GRF_GPIO0B_IOMUX_GPIO0B4_SEL_MASK              (0x3U << PMU_GRF_GPIO0B_IOMUX_GPIO0B4_SEL_SHIFT)             /* 0x00000300 */
#define PMU_GRF_GPIO0B_IOMUX_GPIO0B5_SEL_SHIFT             (10U)
#define PMU_GRF_GPIO0B_IOMUX_GPIO0B5_SEL_MASK              (0x3U << PMU_GRF_GPIO0B_IOMUX_GPIO0B5_SEL_SHIFT)             /* 0x00000C00 */
#define PMU_GRF_GPIO0B_IOMUX_GPIO0B6_SEL_SHIFT             (12U)
#define PMU_GRF_GPIO0B_IOMUX_GPIO0B6_SEL_MASK              (0x3U << PMU_GRF_GPIO0B_IOMUX_GPIO0B6_SEL_SHIFT)             /* 0x00003000 */
#define PMU_GRF_GPIO0B_IOMUX_GPIO0B7_SEL_SHIFT             (14U)
#define PMU_GRF_GPIO0B_IOMUX_GPIO0B7_SEL_MASK              (0x3U << PMU_GRF_GPIO0B_IOMUX_GPIO0B7_SEL_SHIFT)             /* 0x0000C000 */
/* GPIO0C_IOMUX */
#define PMU_GRF_GPIO0C_IOMUX_GPIO0C0_SEL_SHIFT             (0U)
#define PMU_GRF_GPIO0C_IOMUX_GPIO0C0_SEL_MASK              (0x3U << PMU_GRF_GPIO0C_IOMUX_GPIO0C0_SEL_SHIFT)             /* 0x00000003 */
#define PMU_GRF_GPIO0C_IOMUX_GPIO0C1_SEL_SHIFT             (2U)
#define PMU_GRF_GPIO0C_IOMUX_GPIO0C1_SEL_MASK              (0x3U << PMU_GRF_GPIO0C_IOMUX_GPIO0C1_SEL_SHIFT)             /* 0x0000000C */
#define PMU_GRF_GPIO0C_IOMUX_GPIO0C2_SEL_SHIFT             (4U)
#define PMU_GRF_GPIO0C_IOMUX_GPIO0C2_SEL_MASK              (0x3U << PMU_GRF_GPIO0C_IOMUX_GPIO0C2_SEL_SHIFT)             /* 0x00000030 */
#define PMU_GRF_GPIO0C_IOMUX_GPIO0C3_SEL_SHIFT             (6U)
#define PMU_GRF_GPIO0C_IOMUX_GPIO0C3_SEL_MASK              (0x3U << PMU_GRF_GPIO0C_IOMUX_GPIO0C3_SEL_SHIFT)             /* 0x000000C0 */
#define PMU_GRF_GPIO0C_IOMUX_GPIO0C4_SEL_SHIFT             (8U)
#define PMU_GRF_GPIO0C_IOMUX_GPIO0C4_SEL_MASK              (0x3U << PMU_GRF_GPIO0C_IOMUX_GPIO0C4_SEL_SHIFT)             /* 0x00000300 */
#define PMU_GRF_GPIO0C_IOMUX_GPIO0C5_SEL_SHIFT             (10U)
#define PMU_GRF_GPIO0C_IOMUX_GPIO0C5_SEL_MASK              (0x3U << PMU_GRF_GPIO0C_IOMUX_GPIO0C5_SEL_SHIFT)             /* 0x00000C00 */
#define PMU_GRF_GPIO0C_IOMUX_GPIO0C6_SEL_SHIFT             (12U)
#define PMU_GRF_GPIO0C_IOMUX_GPIO0C6_SEL_MASK              (0x3U << PMU_GRF_GPIO0C_IOMUX_GPIO0C6_SEL_SHIFT)             /* 0x00003000 */
#define PMU_GRF_GPIO0C_IOMUX_GPIO0C7_SEL_SHIFT             (14U)
#define PMU_GRF_GPIO0C_IOMUX_GPIO0C7_SEL_MASK              (0x3U << PMU_GRF_GPIO0C_IOMUX_GPIO0C7_SEL_SHIFT)             /* 0x0000C000 */
/* GPIO0A_P */
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
/* GPIO0A_E */
#define PMU_GRF_GPIO0A_E_GPIO0A0_E_SHIFT                   (0U)
#define PMU_GRF_GPIO0A_E_GPIO0A0_E_MASK                    (0x3U << PMU_GRF_GPIO0A_E_GPIO0A0_E_SHIFT)                   /* 0x00000003 */
#define PMU_GRF_GPIO0A_E_GPIO0A1_E_SHIFT                   (2U)
#define PMU_GRF_GPIO0A_E_GPIO0A1_E_MASK                    (0x3U << PMU_GRF_GPIO0A_E_GPIO0A1_E_SHIFT)                   /* 0x0000000C */
#define PMU_GRF_GPIO0A_E_GPIO0A2_E_SHIFT                   (4U)
#define PMU_GRF_GPIO0A_E_GPIO0A2_E_MASK                    (0x3U << PMU_GRF_GPIO0A_E_GPIO0A2_E_SHIFT)                   /* 0x00000030 */
#define PMU_GRF_GPIO0A_E_GPIO0A3_E_SHIFT                   (6U)
#define PMU_GRF_GPIO0A_E_GPIO0A3_E_MASK                    (0x3U << PMU_GRF_GPIO0A_E_GPIO0A3_E_SHIFT)                   /* 0x000000C0 */
#define PMU_GRF_GPIO0A_E_GPIO0A4_E_SHIFT                   (8U)
#define PMU_GRF_GPIO0A_E_GPIO0A4_E_MASK                    (0x3U << PMU_GRF_GPIO0A_E_GPIO0A4_E_SHIFT)                   /* 0x00000300 */
#define PMU_GRF_GPIO0A_E_GPIO0A5_E_SHIFT                   (10U)
#define PMU_GRF_GPIO0A_E_GPIO0A5_E_MASK                    (0x3U << PMU_GRF_GPIO0A_E_GPIO0A5_E_SHIFT)                   /* 0x00000C00 */
#define PMU_GRF_GPIO0A_E_GPIO0A6_E_SHIFT                   (12U)
#define PMU_GRF_GPIO0A_E_GPIO0A6_E_MASK                    (0x3U << PMU_GRF_GPIO0A_E_GPIO0A6_E_SHIFT)                   /* 0x00003000 */
#define PMU_GRF_GPIO0A_E_GPIO0A7_E_SHIFT                   (14U)
#define PMU_GRF_GPIO0A_E_GPIO0A7_E_MASK                    (0x3U << PMU_GRF_GPIO0A_E_GPIO0A7_E_SHIFT)                   /* 0x0000C000 */
/* GPIO0B_E */
#define PMU_GRF_GPIO0B_E_GPIO0B0_E_SHIFT                   (0U)
#define PMU_GRF_GPIO0B_E_GPIO0B0_E_MASK                    (0x3U << PMU_GRF_GPIO0B_E_GPIO0B0_E_SHIFT)                   /* 0x00000003 */
#define PMU_GRF_GPIO0B_E_GPIO0B1_E_SHIFT                   (2U)
#define PMU_GRF_GPIO0B_E_GPIO0B1_E_MASK                    (0x3U << PMU_GRF_GPIO0B_E_GPIO0B1_E_SHIFT)                   /* 0x0000000C */
#define PMU_GRF_GPIO0B_E_GPIO0B2_E_SHIFT                   (4U)
#define PMU_GRF_GPIO0B_E_GPIO0B2_E_MASK                    (0x3U << PMU_GRF_GPIO0B_E_GPIO0B2_E_SHIFT)                   /* 0x00000030 */
#define PMU_GRF_GPIO0B_E_GPIO0B3_E_SHIFT                   (6U)
#define PMU_GRF_GPIO0B_E_GPIO0B3_E_MASK                    (0x3U << PMU_GRF_GPIO0B_E_GPIO0B3_E_SHIFT)                   /* 0x000000C0 */
#define PMU_GRF_GPIO0B_E_GPIO0B4_E_SHIFT                   (8U)
#define PMU_GRF_GPIO0B_E_GPIO0B4_E_MASK                    (0x3U << PMU_GRF_GPIO0B_E_GPIO0B4_E_SHIFT)                   /* 0x00000300 */
#define PMU_GRF_GPIO0B_E_GPIO0B5_E_SHIFT                   (10U)
#define PMU_GRF_GPIO0B_E_GPIO0B5_E_MASK                    (0x3U << PMU_GRF_GPIO0B_E_GPIO0B5_E_SHIFT)                   /* 0x00000C00 */
#define PMU_GRF_GPIO0B_E_GPIO0B6_E_SHIFT                   (12U)
#define PMU_GRF_GPIO0B_E_GPIO0B6_E_MASK                    (0x3U << PMU_GRF_GPIO0B_E_GPIO0B6_E_SHIFT)                   /* 0x00003000 */
#define PMU_GRF_GPIO0B_E_GPIO0B7_E_SHIFT                   (14U)
#define PMU_GRF_GPIO0B_E_GPIO0B7_E_MASK                    (0x3U << PMU_GRF_GPIO0B_E_GPIO0B7_E_SHIFT)                   /* 0x0000C000 */
/* GPIO0C_E */
#define PMU_GRF_GPIO0C_E_GPIO0C0_E_SHIFT                   (0U)
#define PMU_GRF_GPIO0C_E_GPIO0C0_E_MASK                    (0x3U << PMU_GRF_GPIO0C_E_GPIO0C0_E_SHIFT)                   /* 0x00000003 */
#define PMU_GRF_GPIO0C_E_GPIO0C1_E_SHIFT                   (2U)
#define PMU_GRF_GPIO0C_E_GPIO0C1_E_MASK                    (0x3U << PMU_GRF_GPIO0C_E_GPIO0C1_E_SHIFT)                   /* 0x0000000C */
#define PMU_GRF_GPIO0C_E_GPIO0C2_E_SHIFT                   (4U)
#define PMU_GRF_GPIO0C_E_GPIO0C2_E_MASK                    (0x3U << PMU_GRF_GPIO0C_E_GPIO0C2_E_SHIFT)                   /* 0x00000030 */
#define PMU_GRF_GPIO0C_E_GPIO0C3_E_SHIFT                   (6U)
#define PMU_GRF_GPIO0C_E_GPIO0C3_E_MASK                    (0x3U << PMU_GRF_GPIO0C_E_GPIO0C3_E_SHIFT)                   /* 0x000000C0 */
#define PMU_GRF_GPIO0C_E_GPIO0C4_E_SHIFT                   (8U)
#define PMU_GRF_GPIO0C_E_GPIO0C4_E_MASK                    (0x3U << PMU_GRF_GPIO0C_E_GPIO0C4_E_SHIFT)                   /* 0x00000300 */
#define PMU_GRF_GPIO0C_E_GPIO0C5_E_SHIFT                   (10U)
#define PMU_GRF_GPIO0C_E_GPIO0C5_E_MASK                    (0x3U << PMU_GRF_GPIO0C_E_GPIO0C5_E_SHIFT)                   /* 0x00000C00 */
#define PMU_GRF_GPIO0C_E_GPIO0C6_E_SHIFT                   (12U)
#define PMU_GRF_GPIO0C_E_GPIO0C6_E_MASK                    (0x3U << PMU_GRF_GPIO0C_E_GPIO0C6_E_SHIFT)                   /* 0x00003000 */
#define PMU_GRF_GPIO0C_E_GPIO0C7_E_SHIFT                   (14U)
#define PMU_GRF_GPIO0C_E_GPIO0C7_E_MASK                    (0x3U << PMU_GRF_GPIO0C_E_GPIO0C7_E_SHIFT)                   /* 0x0000C000 */
/* GPIO0A_SR */
#define PMU_GRF_GPIO0A_SR_GPIO0A0_SR_SHIFT                 (0U)
#define PMU_GRF_GPIO0A_SR_GPIO0A0_SR_MASK                  (0x1U << PMU_GRF_GPIO0A_SR_GPIO0A0_SR_SHIFT)                 /* 0x00000001 */
#define PMU_GRF_GPIO0A_SR_GPIO0A1_SR_SHIFT                 (1U)
#define PMU_GRF_GPIO0A_SR_GPIO0A1_SR_MASK                  (0x1U << PMU_GRF_GPIO0A_SR_GPIO0A1_SR_SHIFT)                 /* 0x00000002 */
#define PMU_GRF_GPIO0A_SR_GPIO0A2_SR_SHIFT                 (2U)
#define PMU_GRF_GPIO0A_SR_GPIO0A2_SR_MASK                  (0x1U << PMU_GRF_GPIO0A_SR_GPIO0A2_SR_SHIFT)                 /* 0x00000004 */
#define PMU_GRF_GPIO0A_SR_GPIO0A3_SR_SHIFT                 (3U)
#define PMU_GRF_GPIO0A_SR_GPIO0A3_SR_MASK                  (0x1U << PMU_GRF_GPIO0A_SR_GPIO0A3_SR_SHIFT)                 /* 0x00000008 */
#define PMU_GRF_GPIO0A_SR_GPIO0A4_SR_SHIFT                 (4U)
#define PMU_GRF_GPIO0A_SR_GPIO0A4_SR_MASK                  (0x1U << PMU_GRF_GPIO0A_SR_GPIO0A4_SR_SHIFT)                 /* 0x00000010 */
#define PMU_GRF_GPIO0A_SR_GPIO0A5_SR_SHIFT                 (5U)
#define PMU_GRF_GPIO0A_SR_GPIO0A5_SR_MASK                  (0x1U << PMU_GRF_GPIO0A_SR_GPIO0A5_SR_SHIFT)                 /* 0x00000020 */
#define PMU_GRF_GPIO0A_SR_GPIO0A6_SR_SHIFT                 (6U)
#define PMU_GRF_GPIO0A_SR_GPIO0A6_SR_MASK                  (0x1U << PMU_GRF_GPIO0A_SR_GPIO0A6_SR_SHIFT)                 /* 0x00000040 */
#define PMU_GRF_GPIO0A_SR_GPIO0A7_SR_SHIFT                 (7U)
#define PMU_GRF_GPIO0A_SR_GPIO0A7_SR_MASK                  (0x1U << PMU_GRF_GPIO0A_SR_GPIO0A7_SR_SHIFT)                 /* 0x00000080 */
/* GPIO0B_SR */
#define PMU_GRF_GPIO0B_SR_GPIO0B0_SR_SHIFT                 (0U)
#define PMU_GRF_GPIO0B_SR_GPIO0B0_SR_MASK                  (0x1U << PMU_GRF_GPIO0B_SR_GPIO0B0_SR_SHIFT)                 /* 0x00000001 */
#define PMU_GRF_GPIO0B_SR_GPIO0B1_SR_SHIFT                 (1U)
#define PMU_GRF_GPIO0B_SR_GPIO0B1_SR_MASK                  (0x1U << PMU_GRF_GPIO0B_SR_GPIO0B1_SR_SHIFT)                 /* 0x00000002 */
#define PMU_GRF_GPIO0B_SR_GPIO0B2_SR_SHIFT                 (2U)
#define PMU_GRF_GPIO0B_SR_GPIO0B2_SR_MASK                  (0x1U << PMU_GRF_GPIO0B_SR_GPIO0B2_SR_SHIFT)                 /* 0x00000004 */
#define PMU_GRF_GPIO0B_SR_GPIO0B3_SR_SHIFT                 (3U)
#define PMU_GRF_GPIO0B_SR_GPIO0B3_SR_MASK                  (0x1U << PMU_GRF_GPIO0B_SR_GPIO0B3_SR_SHIFT)                 /* 0x00000008 */
#define PMU_GRF_GPIO0B_SR_GPIO0B4_SR_SHIFT                 (4U)
#define PMU_GRF_GPIO0B_SR_GPIO0B4_SR_MASK                  (0x1U << PMU_GRF_GPIO0B_SR_GPIO0B4_SR_SHIFT)                 /* 0x00000010 */
#define PMU_GRF_GPIO0B_SR_GPIO0B5_SR_SHIFT                 (5U)
#define PMU_GRF_GPIO0B_SR_GPIO0B5_SR_MASK                  (0x1U << PMU_GRF_GPIO0B_SR_GPIO0B5_SR_SHIFT)                 /* 0x00000020 */
#define PMU_GRF_GPIO0B_SR_GPIO0B6_SR_SHIFT                 (6U)
#define PMU_GRF_GPIO0B_SR_GPIO0B6_SR_MASK                  (0x1U << PMU_GRF_GPIO0B_SR_GPIO0B6_SR_SHIFT)                 /* 0x00000040 */
#define PMU_GRF_GPIO0B_SR_GPIO0B7_SR_SHIFT                 (7U)
#define PMU_GRF_GPIO0B_SR_GPIO0B7_SR_MASK                  (0x1U << PMU_GRF_GPIO0B_SR_GPIO0B7_SR_SHIFT)                 /* 0x00000080 */
/* GPIO0C_SR */
#define PMU_GRF_GPIO0C_SR_GPIO0C0_SR_SHIFT                 (0U)
#define PMU_GRF_GPIO0C_SR_GPIO0C0_SR_MASK                  (0x1U << PMU_GRF_GPIO0C_SR_GPIO0C0_SR_SHIFT)                 /* 0x00000001 */
#define PMU_GRF_GPIO0C_SR_GPIO0C1_SR_SHIFT                 (1U)
#define PMU_GRF_GPIO0C_SR_GPIO0C1_SR_MASK                  (0x1U << PMU_GRF_GPIO0C_SR_GPIO0C1_SR_SHIFT)                 /* 0x00000002 */
#define PMU_GRF_GPIO0C_SR_GPIO0C2_SR_SHIFT                 (2U)
#define PMU_GRF_GPIO0C_SR_GPIO0C2_SR_MASK                  (0x1U << PMU_GRF_GPIO0C_SR_GPIO0C2_SR_SHIFT)                 /* 0x00000004 */
#define PMU_GRF_GPIO0C_SR_GPIO0C3_SR_SHIFT                 (3U)
#define PMU_GRF_GPIO0C_SR_GPIO0C3_SR_MASK                  (0x1U << PMU_GRF_GPIO0C_SR_GPIO0C3_SR_SHIFT)                 /* 0x00000008 */
#define PMU_GRF_GPIO0C_SR_GPIO0C4_SR_SHIFT                 (4U)
#define PMU_GRF_GPIO0C_SR_GPIO0C4_SR_MASK                  (0x1U << PMU_GRF_GPIO0C_SR_GPIO0C4_SR_SHIFT)                 /* 0x00000010 */
#define PMU_GRF_GPIO0C_SR_GPIO0C5_SR_SHIFT                 (5U)
#define PMU_GRF_GPIO0C_SR_GPIO0C5_SR_MASK                  (0x1U << PMU_GRF_GPIO0C_SR_GPIO0C5_SR_SHIFT)                 /* 0x00000020 */
#define PMU_GRF_GPIO0C_SR_GPIO0C6_SR_SHIFT                 (6U)
#define PMU_GRF_GPIO0C_SR_GPIO0C6_SR_MASK                  (0x1U << PMU_GRF_GPIO0C_SR_GPIO0C6_SR_SHIFT)                 /* 0x00000040 */
#define PMU_GRF_GPIO0C_SR_GPIO0C7_SR_SHIFT                 (7U)
#define PMU_GRF_GPIO0C_SR_GPIO0C7_SR_MASK                  (0x1U << PMU_GRF_GPIO0C_SR_GPIO0C7_SR_SHIFT)                 /* 0x00000080 */
/* GPIO0A_SMT */
#define PMU_GRF_GPIO0A_SMT_GPIO0A0_SMT_SHIFT               (0U)
#define PMU_GRF_GPIO0A_SMT_GPIO0A0_SMT_MASK                (0x1U << PMU_GRF_GPIO0A_SMT_GPIO0A0_SMT_SHIFT)               /* 0x00000001 */
#define PMU_GRF_GPIO0A_SMT_GPIO0A1_SMT_SHIFT               (1U)
#define PMU_GRF_GPIO0A_SMT_GPIO0A1_SMT_MASK                (0x1U << PMU_GRF_GPIO0A_SMT_GPIO0A1_SMT_SHIFT)               /* 0x00000002 */
#define PMU_GRF_GPIO0A_SMT_GPIO0A2_SMT_SHIFT               (2U)
#define PMU_GRF_GPIO0A_SMT_GPIO0A2_SMT_MASK                (0x1U << PMU_GRF_GPIO0A_SMT_GPIO0A2_SMT_SHIFT)               /* 0x00000004 */
#define PMU_GRF_GPIO0A_SMT_GPIO0A3_SMT_SHIFT               (3U)
#define PMU_GRF_GPIO0A_SMT_GPIO0A3_SMT_MASK                (0x1U << PMU_GRF_GPIO0A_SMT_GPIO0A3_SMT_SHIFT)               /* 0x00000008 */
#define PMU_GRF_GPIO0A_SMT_GPIO0A4_SMT_SHIFT               (4U)
#define PMU_GRF_GPIO0A_SMT_GPIO0A4_SMT_MASK                (0x1U << PMU_GRF_GPIO0A_SMT_GPIO0A4_SMT_SHIFT)               /* 0x00000010 */
#define PMU_GRF_GPIO0A_SMT_GPIO0A5_SMT_SHIFT               (5U)
#define PMU_GRF_GPIO0A_SMT_GPIO0A5_SMT_MASK                (0x1U << PMU_GRF_GPIO0A_SMT_GPIO0A5_SMT_SHIFT)               /* 0x00000020 */
#define PMU_GRF_GPIO0A_SMT_GPIO0A6_SMT_SHIFT               (6U)
#define PMU_GRF_GPIO0A_SMT_GPIO0A6_SMT_MASK                (0x1U << PMU_GRF_GPIO0A_SMT_GPIO0A6_SMT_SHIFT)               /* 0x00000040 */
#define PMU_GRF_GPIO0A_SMT_GPIO0A7_SMT_SHIFT               (7U)
#define PMU_GRF_GPIO0A_SMT_GPIO0A7_SMT_MASK                (0x1U << PMU_GRF_GPIO0A_SMT_GPIO0A7_SMT_SHIFT)               /* 0x00000080 */
/* GPIO0B_SMT */
#define PMU_GRF_GPIO0B_SMT_GPIO0B0_SMT_SHIFT               (0U)
#define PMU_GRF_GPIO0B_SMT_GPIO0B0_SMT_MASK                (0x1U << PMU_GRF_GPIO0B_SMT_GPIO0B0_SMT_SHIFT)               /* 0x00000001 */
#define PMU_GRF_GPIO0B_SMT_GPIO0B1_SMT_SHIFT               (1U)
#define PMU_GRF_GPIO0B_SMT_GPIO0B1_SMT_MASK                (0x1U << PMU_GRF_GPIO0B_SMT_GPIO0B1_SMT_SHIFT)               /* 0x00000002 */
#define PMU_GRF_GPIO0B_SMT_GPIO0B2_SMT_SHIFT               (2U)
#define PMU_GRF_GPIO0B_SMT_GPIO0B2_SMT_MASK                (0x1U << PMU_GRF_GPIO0B_SMT_GPIO0B2_SMT_SHIFT)               /* 0x00000004 */
#define PMU_GRF_GPIO0B_SMT_GPIO0B3_SMT_SHIFT               (3U)
#define PMU_GRF_GPIO0B_SMT_GPIO0B3_SMT_MASK                (0x1U << PMU_GRF_GPIO0B_SMT_GPIO0B3_SMT_SHIFT)               /* 0x00000008 */
#define PMU_GRF_GPIO0B_SMT_GPIO0B4_SMT_SHIFT               (4U)
#define PMU_GRF_GPIO0B_SMT_GPIO0B4_SMT_MASK                (0x1U << PMU_GRF_GPIO0B_SMT_GPIO0B4_SMT_SHIFT)               /* 0x00000010 */
#define PMU_GRF_GPIO0B_SMT_GPIO0B5_SMT_SHIFT               (5U)
#define PMU_GRF_GPIO0B_SMT_GPIO0B5_SMT_MASK                (0x1U << PMU_GRF_GPIO0B_SMT_GPIO0B5_SMT_SHIFT)               /* 0x00000020 */
#define PMU_GRF_GPIO0B_SMT_GPIO0B6_SMT_SHIFT               (6U)
#define PMU_GRF_GPIO0B_SMT_GPIO0B6_SMT_MASK                (0x1U << PMU_GRF_GPIO0B_SMT_GPIO0B6_SMT_SHIFT)               /* 0x00000040 */
#define PMU_GRF_GPIO0B_SMT_GPIO0B7_SMT_SHIFT               (7U)
#define PMU_GRF_GPIO0B_SMT_GPIO0B7_SMT_MASK                (0x1U << PMU_GRF_GPIO0B_SMT_GPIO0B7_SMT_SHIFT)               /* 0x00000080 */
/* GPIO0C_SMT */
#define PMU_GRF_GPIO0C_SMT_GPIO0C0_SMT_SHIFT               (0U)
#define PMU_GRF_GPIO0C_SMT_GPIO0C0_SMT_MASK                (0x1U << PMU_GRF_GPIO0C_SMT_GPIO0C0_SMT_SHIFT)               /* 0x00000001 */
#define PMU_GRF_GPIO0C_SMT_GPIO0C1_SMT_SHIFT               (1U)
#define PMU_GRF_GPIO0C_SMT_GPIO0C1_SMT_MASK                (0x1U << PMU_GRF_GPIO0C_SMT_GPIO0C1_SMT_SHIFT)               /* 0x00000002 */
#define PMU_GRF_GPIO0C_SMT_GPIO0C2_SMT_SHIFT               (2U)
#define PMU_GRF_GPIO0C_SMT_GPIO0C2_SMT_MASK                (0x1U << PMU_GRF_GPIO0C_SMT_GPIO0C2_SMT_SHIFT)               /* 0x00000004 */
#define PMU_GRF_GPIO0C_SMT_GPIO0C3_SMT_SHIFT               (3U)
#define PMU_GRF_GPIO0C_SMT_GPIO0C3_SMT_MASK                (0x1U << PMU_GRF_GPIO0C_SMT_GPIO0C3_SMT_SHIFT)               /* 0x00000008 */
#define PMU_GRF_GPIO0C_SMT_GPIO0C4_SMT_SHIFT               (4U)
#define PMU_GRF_GPIO0C_SMT_GPIO0C4_SMT_MASK                (0x1U << PMU_GRF_GPIO0C_SMT_GPIO0C4_SMT_SHIFT)               /* 0x00000010 */
#define PMU_GRF_GPIO0C_SMT_GPIO0C5_SMT_SHIFT               (5U)
#define PMU_GRF_GPIO0C_SMT_GPIO0C5_SMT_MASK                (0x1U << PMU_GRF_GPIO0C_SMT_GPIO0C5_SMT_SHIFT)               /* 0x00000020 */
#define PMU_GRF_GPIO0C_SMT_GPIO0C6_SMT_SHIFT               (6U)
#define PMU_GRF_GPIO0C_SMT_GPIO0C6_SMT_MASK                (0x1U << PMU_GRF_GPIO0C_SMT_GPIO0C6_SMT_SHIFT)               /* 0x00000040 */
#define PMU_GRF_GPIO0C_SMT_GPIO0C7_SMT_SHIFT               (7U)
#define PMU_GRF_GPIO0C_SMT_GPIO0C7_SMT_MASK                (0x1U << PMU_GRF_GPIO0C_SMT_GPIO0C7_SMT_SHIFT)               /* 0x00000080 */
/* SOC_CON0 */
#define PMU_GRF_SOC_CON0_CON_32K_IOE_SHIFT                 (0U)
#define PMU_GRF_SOC_CON0_CON_32K_IOE_MASK                  (0x1U << PMU_GRF_SOC_CON0_CON_32K_IOE_SHIFT)                 /* 0x00000001 */
#define PMU_GRF_SOC_CON0_OSC_GM_SEL_SHIFT                  (1U)
#define PMU_GRF_SOC_CON0_OSC_GM_SEL_MASK                   (0xFU << PMU_GRF_SOC_CON0_OSC_GM_SEL_SHIFT)                  /* 0x0000001E */
#define PMU_GRF_SOC_CON0_UART0_RTS_SEL_SHIFT               (5U)
#define PMU_GRF_SOC_CON0_UART0_RTS_SEL_MASK                (0x1U << PMU_GRF_SOC_CON0_UART0_RTS_SEL_SHIFT)               /* 0x00000020 */
#define PMU_GRF_SOC_CON0_UART0_CTS_SEL_SHIFT               (6U)
#define PMU_GRF_SOC_CON0_UART0_CTS_SEL_MASK                (0x1U << PMU_GRF_SOC_CON0_UART0_CTS_SEL_SHIFT)               /* 0x00000040 */
#define PMU_GRF_SOC_CON0_GRF_CON_PMIC_SLEEP_SEL_SHIFT      (7U)
#define PMU_GRF_SOC_CON0_GRF_CON_PMIC_SLEEP_SEL_MASK       (0x1U << PMU_GRF_SOC_CON0_GRF_CON_PMIC_SLEEP_SEL_SHIFT)      /* 0x00000080 */
#define PMU_GRF_SOC_CON0_GRF_CON_PCIE_RSTN_SEL_SHIFT       (8U)
#define PMU_GRF_SOC_CON0_GRF_CON_PCIE_RSTN_SEL_MASK        (0x1U << PMU_GRF_SOC_CON0_GRF_CON_PCIE_RSTN_SEL_SHIFT)       /* 0x00000100 */
#define PMU_GRF_SOC_CON0_GRF_PCI_WAKE_SEL_SHIFT            (9U)
#define PMU_GRF_SOC_CON0_GRF_PCI_WAKE_SEL_MASK             (0x1U << PMU_GRF_SOC_CON0_GRF_PCI_WAKE_SEL_SHIFT)            /* 0x00000200 */
#define PMU_GRF_SOC_CON0_GRF_CON_PCIE_REQN_SEL_SHIFT       (10U)
#define PMU_GRF_SOC_CON0_GRF_CON_PCIE_REQN_SEL_MASK        (0x1U << PMU_GRF_SOC_CON0_GRF_CON_PCIE_REQN_SEL_SHIFT)       /* 0x00000400 */
#define PMU_GRF_SOC_CON0_DDRPHY_BUFFEREN_SEL_SHIFT         (12U)
#define PMU_GRF_SOC_CON0_DDRPHY_BUFFEREN_SEL_MASK          (0x1U << PMU_GRF_SOC_CON0_DDRPHY_BUFFEREN_SEL_SHIFT)         /* 0x00001000 */
#define PMU_GRF_SOC_CON0_DDRPHY_BUFFEREN_CORE_SHIFT        (13U)
#define PMU_GRF_SOC_CON0_DDRPHY_BUFFEREN_CORE_MASK         (0x1U << PMU_GRF_SOC_CON0_DDRPHY_BUFFEREN_CORE_SHIFT)        /* 0x00002000 */
/* SOC_CON1 */
#define PMU_GRF_SOC_CON1_RESETN_HOLD_SHIFT                 (0U)
#define PMU_GRF_SOC_CON1_RESETN_HOLD_MASK                  (0x7FFFU << PMU_GRF_SOC_CON1_RESETN_HOLD_SHIFT)              /* 0x00007FFF */
#define PMU_GRF_SOC_CON1_HOLD_THE_DDRFAILSAFE_SHIFT        (15U)
#define PMU_GRF_SOC_CON1_HOLD_THE_DDRFAILSAFE_MASK         (0x1U << PMU_GRF_SOC_CON1_HOLD_THE_DDRFAILSAFE_SHIFT)        /* 0x00008000 */
/* SOC_CON2 */
#define PMU_GRF_SOC_CON2_NPOR_OUT2CHIP_PULSE_WIDTH_SHIFT   (0U)
#define PMU_GRF_SOC_CON2_NPOR_OUT2CHIP_PULSE_WIDTH_MASK    (0x1FFFU << PMU_GRF_SOC_CON2_NPOR_OUT2CHIP_PULSE_WIDTH_SHIFT) /* 0x00001FFF */
/* SOC_CON3 */
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
/* SOC_CON4 */
#define PMU_GRF_SOC_CON4_PMU_SRAM_MA_SAWL_SHIFT            (0U)
#define PMU_GRF_SOC_CON4_PMU_SRAM_MA_SAWL_MASK             (0x3U << PMU_GRF_SOC_CON4_PMU_SRAM_MA_SAWL_SHIFT)            /* 0x00000003 */
#define PMU_GRF_SOC_CON4_PMU_SRAM_MA_WL_SHIFT              (2U)
#define PMU_GRF_SOC_CON4_PMU_SRAM_MA_WL_MASK               (0x3U << PMU_GRF_SOC_CON4_PMU_SRAM_MA_WL_SHIFT)              /* 0x0000000C */
#define PMU_GRF_SOC_CON4_PMU_SRAM_MA_WRAS_SHIFT            (4U)
#define PMU_GRF_SOC_CON4_PMU_SRAM_MA_WRAS_MASK             (0x3U << PMU_GRF_SOC_CON4_PMU_SRAM_MA_WRAS_SHIFT)            /* 0x00000030 */
#define PMU_GRF_SOC_CON4_PMU_SRAM_MA_WRASD_SHIFT           (6U)
#define PMU_GRF_SOC_CON4_PMU_SRAM_MA_WRASD_MASK            (0x1U << PMU_GRF_SOC_CON4_PMU_SRAM_MA_WRASD_SHIFT)           /* 0x00000040 */
/* SOC_STATUS */
#define PMU_GRF_SOC_STATUS_GRF_PMUVCCIO2_VOLTAGE_SHIFT     (0U)
#define PMU_GRF_SOC_STATUS_GRF_PMUVCCIO2_VOLTAGE_MASK      (0x1U << PMU_GRF_SOC_STATUS_GRF_PMUVCCIO2_VOLTAGE_SHIFT)     /* 0x00000001 */
/* IO_VSEL0 */
#define PMU_GRF_IO_VSEL0_GRF_VCCIO0_VSEL_SHIFT             (0U)
#define PMU_GRF_IO_VSEL0_GRF_VCCIO0_VSEL_MASK              (0x1U << PMU_GRF_IO_VSEL0_GRF_VCCIO0_VSEL_SHIFT)             /* 0x00000001 */
#define PMU_GRF_IO_VSEL0_GRF_VCCIO1_VSEL_SHIFT             (1U)
#define PMU_GRF_IO_VSEL0_GRF_VCCIO1_VSEL_MASK              (0x1U << PMU_GRF_IO_VSEL0_GRF_VCCIO1_VSEL_SHIFT)             /* 0x00000002 */
#define PMU_GRF_IO_VSEL0_GRF_VCCIO2_VSEL_SHIFT             (2U)
#define PMU_GRF_IO_VSEL0_GRF_VCCIO2_VSEL_MASK              (0x1U << PMU_GRF_IO_VSEL0_GRF_VCCIO2_VSEL_SHIFT)             /* 0x00000004 */
#define PMU_GRF_IO_VSEL0_GRF_VCCIO3_VSEL_SHIFT             (3U)
#define PMU_GRF_IO_VSEL0_GRF_VCCIO3_VSEL_MASK              (0x1U << PMU_GRF_IO_VSEL0_GRF_VCCIO3_VSEL_SHIFT)             /* 0x00000008 */
#define PMU_GRF_IO_VSEL0_GRF_VCCIO4_VSEL_SHIFT             (4U)
#define PMU_GRF_IO_VSEL0_GRF_VCCIO4_VSEL_MASK              (0x1U << PMU_GRF_IO_VSEL0_GRF_VCCIO4_VSEL_SHIFT)             /* 0x00000010 */
#define PMU_GRF_IO_VSEL0_GRF_VCCIO5_VSEL_SHIFT             (5U)
#define PMU_GRF_IO_VSEL0_GRF_VCCIO5_VSEL_MASK              (0x1U << PMU_GRF_IO_VSEL0_GRF_VCCIO5_VSEL_SHIFT)             /* 0x00000020 */
#define PMU_GRF_IO_VSEL0_GRF_VCCIO6_VSEL_SHIFT             (6U)
#define PMU_GRF_IO_VSEL0_GRF_VCCIO6_VSEL_MASK              (0x1U << PMU_GRF_IO_VSEL0_GRF_VCCIO6_VSEL_SHIFT)             /* 0x00000040 */
#define PMU_GRF_IO_VSEL0_GRF_VCCIO7_VSEL_SHIFT             (7U)
#define PMU_GRF_IO_VSEL0_GRF_VCCIO7_VSEL_MASK              (0x1U << PMU_GRF_IO_VSEL0_GRF_VCCIO7_VSEL_SHIFT)             /* 0x00000080 */
#define PMU_GRF_IO_VSEL0_GRF_VCCIO0_VSEL_SRC_SHIFT         (8U)
#define PMU_GRF_IO_VSEL0_GRF_VCCIO0_VSEL_SRC_MASK          (0x1U << PMU_GRF_IO_VSEL0_GRF_VCCIO0_VSEL_SRC_SHIFT)         /* 0x00000100 */
/* IO_VSEL1 */
#define PMU_GRF_IO_VSEL1_GRF_VCCIO0_VSEL_AUTO_SHIFT        (0U)
#define PMU_GRF_IO_VSEL1_GRF_VCCIO0_VSEL_AUTO_MASK         (0x1U << PMU_GRF_IO_VSEL1_GRF_VCCIO0_VSEL_AUTO_SHIFT)        /* 0x00000001 */
#define PMU_GRF_IO_VSEL1_GRF_VCCIO1_VSEL_AUTO_SHIFT        (1U)
#define PMU_GRF_IO_VSEL1_GRF_VCCIO1_VSEL_AUTO_MASK         (0x1U << PMU_GRF_IO_VSEL1_GRF_VCCIO1_VSEL_AUTO_SHIFT)        /* 0x00000002 */
#define PMU_GRF_IO_VSEL1_GRF_VCCIO2_VSEL_AUTO_SHIFT        (2U)
#define PMU_GRF_IO_VSEL1_GRF_VCCIO2_VSEL_AUTO_MASK         (0x1U << PMU_GRF_IO_VSEL1_GRF_VCCIO2_VSEL_AUTO_SHIFT)        /* 0x00000004 */
#define PMU_GRF_IO_VSEL1_GRF_VCCIO3_VSEL_AUTO_SHIFT        (3U)
#define PMU_GRF_IO_VSEL1_GRF_VCCIO3_VSEL_AUTO_MASK         (0x1U << PMU_GRF_IO_VSEL1_GRF_VCCIO3_VSEL_AUTO_SHIFT)        /* 0x00000008 */
#define PMU_GRF_IO_VSEL1_GRF_VCCIO4_VSEL_AUTO_SHIFT        (4U)
#define PMU_GRF_IO_VSEL1_GRF_VCCIO4_VSEL_AUTO_MASK         (0x1U << PMU_GRF_IO_VSEL1_GRF_VCCIO4_VSEL_AUTO_SHIFT)        /* 0x00000010 */
#define PMU_GRF_IO_VSEL1_GRF_VCCIO5_VSEL_AUTO_SHIFT        (5U)
#define PMU_GRF_IO_VSEL1_GRF_VCCIO5_VSEL_AUTO_MASK         (0x1U << PMU_GRF_IO_VSEL1_GRF_VCCIO5_VSEL_AUTO_SHIFT)        /* 0x00000020 */
#define PMU_GRF_IO_VSEL1_GRF_VCCIO6_VSEL_AUTO_SHIFT        (6U)
#define PMU_GRF_IO_VSEL1_GRF_VCCIO6_VSEL_AUTO_MASK         (0x1U << PMU_GRF_IO_VSEL1_GRF_VCCIO6_VSEL_AUTO_SHIFT)        /* 0x00000040 */
#define PMU_GRF_IO_VSEL1_GRF_VCCIO7_VSEL_AUTO_SHIFT        (7U)
#define PMU_GRF_IO_VSEL1_GRF_VCCIO7_VSEL_AUTO_MASK         (0x1U << PMU_GRF_IO_VSEL1_GRF_VCCIO7_VSEL_AUTO_SHIFT)        /* 0x00000080 */
/* IO_VSEL_STATUS */
#define PMU_GRF_IO_VSEL_STATUS_GRF_VCCIO0_VOLTAGE_SHIFT    (0U)
#define PMU_GRF_IO_VSEL_STATUS_GRF_VCCIO0_VOLTAGE_MASK     (0x1U << PMU_GRF_IO_VSEL_STATUS_GRF_VCCIO0_VOLTAGE_SHIFT)    /* 0x00000001 */
#define PMU_GRF_IO_VSEL_STATUS_GRF_VCCIO1_VOLTAGE_SHIFT    (1U)
#define PMU_GRF_IO_VSEL_STATUS_GRF_VCCIO1_VOLTAGE_MASK     (0x1U << PMU_GRF_IO_VSEL_STATUS_GRF_VCCIO1_VOLTAGE_SHIFT)    /* 0x00000002 */
#define PMU_GRF_IO_VSEL_STATUS_GRF_VCCIO2_VOLTAGE0_SHIFT   (2U)
#define PMU_GRF_IO_VSEL_STATUS_GRF_VCCIO2_VOLTAGE0_MASK    (0x1U << PMU_GRF_IO_VSEL_STATUS_GRF_VCCIO2_VOLTAGE0_SHIFT)   /* 0x00000004 */
#define PMU_GRF_IO_VSEL_STATUS_GRF_VCCIO3_VOLTAGE_SHIFT    (3U)
#define PMU_GRF_IO_VSEL_STATUS_GRF_VCCIO3_VOLTAGE_MASK     (0x1U << PMU_GRF_IO_VSEL_STATUS_GRF_VCCIO3_VOLTAGE_SHIFT)    /* 0x00000008 */
#define PMU_GRF_IO_VSEL_STATUS_GRF_VCCIO4_VOLTAGE_SHIFT    (4U)
#define PMU_GRF_IO_VSEL_STATUS_GRF_VCCIO4_VOLTAGE_MASK     (0x1U << PMU_GRF_IO_VSEL_STATUS_GRF_VCCIO4_VOLTAGE_SHIFT)    /* 0x00000010 */
#define PMU_GRF_IO_VSEL_STATUS_GRF_VCCIO5_VOLTAGE_SHIFT    (5U)
#define PMU_GRF_IO_VSEL_STATUS_GRF_VCCIO5_VOLTAGE_MASK     (0x1U << PMU_GRF_IO_VSEL_STATUS_GRF_VCCIO5_VOLTAGE_SHIFT)    /* 0x00000020 */
#define PMU_GRF_IO_VSEL_STATUS_GRF_VCCIO6_VOLTAGE_SHIFT    (6U)
#define PMU_GRF_IO_VSEL_STATUS_GRF_VCCIO6_VOLTAGE_MASK     (0x1U << PMU_GRF_IO_VSEL_STATUS_GRF_VCCIO6_VOLTAGE_SHIFT)    /* 0x00000040 */
#define PMU_GRF_IO_VSEL_STATUS_GRF_VCCIO7_VOLTAGE_SHIFT    (7U)
#define PMU_GRF_IO_VSEL_STATUS_GRF_VCCIO7_VOLTAGE_MASK     (0x1U << PMU_GRF_IO_VSEL_STATUS_GRF_VCCIO7_VOLTAGE_SHIFT)    /* 0x00000080 */
#define PMU_GRF_IO_VSEL_STATUS_GRF_VCCIO2_VOLTAGE1_SHIFT   (8U)
#define PMU_GRF_IO_VSEL_STATUS_GRF_VCCIO2_VOLTAGE1_MASK    (0x1U << PMU_GRF_IO_VSEL_STATUS_GRF_VCCIO2_VOLTAGE1_SHIFT)   /* 0x00000100 */
/* PVTM_CON0 */
#define PMU_GRF_PVTM_CON0_PVTM_PMU_START_SHIFT             (0U)
#define PMU_GRF_PVTM_CON0_PVTM_PMU_START_MASK              (0x1U << PMU_GRF_PVTM_CON0_PVTM_PMU_START_SHIFT)             /* 0x00000001 */
#define PMU_GRF_PVTM_CON0_PVTM_PMU_OSC_EN_SHIFT            (1U)
#define PMU_GRF_PVTM_CON0_PVTM_PMU_OSC_EN_MASK             (0x1U << PMU_GRF_PVTM_CON0_PVTM_PMU_OSC_EN_SHIFT)            /* 0x00000002 */
#define PMU_GRF_PVTM_CON0_PVTM_CLKOUT_DIV_SHIFT            (2U)
#define PMU_GRF_PVTM_CON0_PVTM_CLKOUT_DIV_MASK             (0x3FU << PMU_GRF_PVTM_CON0_PVTM_CLKOUT_DIV_SHIFT)           /* 0x000000FC */
/* PVTM_CON1 */
#define PMU_GRF_PVTM_CON1_PVTM_PMU_CAL_CNT_SHIFT           (0U)
#define PMU_GRF_PVTM_CON1_PVTM_PMU_CAL_CNT_MASK            (0xFFFFFFFFU << PMU_GRF_PVTM_CON1_PVTM_PMU_CAL_CNT_SHIFT)    /* 0xFFFFFFFF */
/* PVTM_STATUS0 */
#define PMU_GRF_PVTM_STATUS0_PVTM_PMU_FREQ_DONE_SHIFT      (0U)
#define PMU_GRF_PVTM_STATUS0_PVTM_PMU_FREQ_DONE_MASK       (0x1U << PMU_GRF_PVTM_STATUS0_PVTM_PMU_FREQ_DONE_SHIFT)      /* 0x00000001 */
/* PVTM_STATUS1 */
#define PMU_GRF_PVTM_STATUS1_PVTM_PMU_FREQ_CNT_SHIFT       (0U)
#define PMU_GRF_PVTM_STATUS1_PVTM_PMU_FREQ_CNT_MASK        (0xFFFFFFFFU << PMU_GRF_PVTM_STATUS1_PVTM_PMU_FREQ_CNT_SHIFT) /* 0xFFFFFFFF */
/* OS_REG0 */
#define PMU_GRF_OS_REG0_PMU_OS_REG0_SHIFT                  (0U)
#define PMU_GRF_OS_REG0_PMU_OS_REG0_MASK                   (0xFFFFFFFFU << PMU_GRF_OS_REG0_PMU_OS_REG0_SHIFT)           /* 0xFFFFFFFF */
/* OS_REG1 */
#define PMU_GRF_OS_REG1_PMU_OS_REG1_SHIFT                  (0U)
#define PMU_GRF_OS_REG1_PMU_OS_REG1_MASK                   (0xFFFFFFFFU << PMU_GRF_OS_REG1_PMU_OS_REG1_SHIFT)           /* 0xFFFFFFFF */
/* OS_REG2 */
#define PMU_GRF_OS_REG2_PMU_OS_REG2_SHIFT                  (0U)
#define PMU_GRF_OS_REG2_PMU_OS_REG2_MASK                   (0xFFFFFFFFU << PMU_GRF_OS_REG2_PMU_OS_REG2_SHIFT)           /* 0xFFFFFFFF */
/* OS_REG3 */
#define PMU_GRF_OS_REG3_PMU_OS_REG3_SHIFT                  (0U)
#define PMU_GRF_OS_REG3_PMU_OS_REG3_MASK                   (0xFFFFFFFFU << PMU_GRF_OS_REG3_PMU_OS_REG3_SHIFT)           /* 0xFFFFFFFF */
/* OS_REG4 */
#define PMU_GRF_OS_REG4_PMU_OS_REG4_SHIFT                  (0U)
#define PMU_GRF_OS_REG4_PMU_OS_REG4_MASK                   (0xFFFFFFFFU << PMU_GRF_OS_REG4_PMU_OS_REG4_SHIFT)           /* 0xFFFFFFFF */
/* OS_REG5 */
#define PMU_GRF_OS_REG5_PMU_OS_REG5_SHIFT                  (0U)
#define PMU_GRF_OS_REG5_PMU_OS_REG5_MASK                   (0xFFFFFFFFU << PMU_GRF_OS_REG5_PMU_OS_REG5_SHIFT)           /* 0xFFFFFFFF */
/* OS_REG6 */
#define PMU_GRF_OS_REG6_PMU_OS_REG6_SHIFT                  (0U)
#define PMU_GRF_OS_REG6_PMU_OS_REG6_MASK                   (0xFFFFFFFFU << PMU_GRF_OS_REG6_PMU_OS_REG6_SHIFT)           /* 0xFFFFFFFF */
/* OS_REG7 */
#define PMU_GRF_OS_REG7_PMU_OS_REG7_SHIFT                  (0U)
#define PMU_GRF_OS_REG7_PMU_OS_REG7_MASK                   (0xFFFFFFFFU << PMU_GRF_OS_REG7_PMU_OS_REG7_SHIFT)           /* 0xFFFFFFFF */
/* OS_REG8 */
#define PMU_GRF_OS_REG8_PMU_OS_REG8_SHIFT                  (0U)
#define PMU_GRF_OS_REG8_PMU_OS_REG8_MASK                   (0xFFFFFFFFU << PMU_GRF_OS_REG8_PMU_OS_REG8_SHIFT)           /* 0xFFFFFFFF */
/* OS_REG9 */
#define PMU_GRF_OS_REG9_PMU_OS_REG9_SHIFT                  (0U)
#define PMU_GRF_OS_REG9_PMU_OS_REG9_MASK                   (0xFFFFFFFFU << PMU_GRF_OS_REG9_PMU_OS_REG9_SHIFT)           /* 0xFFFFFFFF */
/* OS_REG10 */
#define PMU_GRF_OS_REG10_PMU_OS_REG10_SHIFT                (0U)
#define PMU_GRF_OS_REG10_PMU_OS_REG10_MASK                 (0xFFFFFFFFU << PMU_GRF_OS_REG10_PMU_OS_REG10_SHIFT)         /* 0xFFFFFFFF */
/* OS_REG11 */
#define PMU_GRF_OS_REG11_PMU_OS_REG11_SHIFT                (0U)
#define PMU_GRF_OS_REG11_PMU_OS_REG11_MASK                 (0xFFFFFFFFU << PMU_GRF_OS_REG11_PMU_OS_REG11_SHIFT)         /* 0xFFFFFFFF */
/* RESET_FUNCTION_STATUS */
#define PMU_GRF_RESET_FUNCTION_STATUS_FIRST_RESET_SRC_SHIFT (0U)
#define PMU_GRF_RESET_FUNCTION_STATUS_FIRST_RESET_SRC_MASK (0x1U << PMU_GRF_RESET_FUNCTION_STATUS_FIRST_RESET_SRC_SHIFT) /* 0x00000001 */
#define PMU_GRF_RESET_FUNCTION_STATUS_WDT_RESET_SRC_SHIFT  (1U)
#define PMU_GRF_RESET_FUNCTION_STATUS_WDT_RESET_SRC_MASK   (0x1U << PMU_GRF_RESET_FUNCTION_STATUS_WDT_RESET_SRC_SHIFT)  /* 0x00000002 */
#define PMU_GRF_RESET_FUNCTION_STATUS_TSADC_SHUT_RESET_SRC_SHIFT (2U)
#define PMU_GRF_RESET_FUNCTION_STATUS_TSADC_SHUT_RESET_SRC_MASK (0x1U << PMU_GRF_RESET_FUNCTION_STATUS_TSADC_SHUT_RESET_SRC_SHIFT) /* 0x00000004 */
#define PMU_GRF_RESET_FUNCTION_STATUS_DDR_FAIL_SAFE_SRC_SHIFT (3U)
#define PMU_GRF_RESET_FUNCTION_STATUS_DDR_FAIL_SAFE_SRC_MASK (0x1U << PMU_GRF_RESET_FUNCTION_STATUS_DDR_FAIL_SAFE_SRC_SHIFT) /* 0x00000008 */
/* RESET_FUNCTION_CLR */
#define PMU_GRF_RESET_FUNCTION_CLR_FIRST_RESET_SRC_CLR_SHIFT (0U)
#define PMU_GRF_RESET_FUNCTION_CLR_FIRST_RESET_SRC_CLR_MASK (0x1U << PMU_GRF_RESET_FUNCTION_CLR_FIRST_RESET_SRC_CLR_SHIFT) /* 0x00000001 */
#define PMU_GRF_RESET_FUNCTION_CLR_WDT_RESET_SRC_CLR_SHIFT (1U)
#define PMU_GRF_RESET_FUNCTION_CLR_WDT_RESET_SRC_CLR_MASK  (0x1U << PMU_GRF_RESET_FUNCTION_CLR_WDT_RESET_SRC_CLR_SHIFT) /* 0x00000002 */
#define PMU_GRF_RESET_FUNCTION_CLR_TSADC_SHUT_RESET_SRC_CLR_SHIFT (2U)
#define PMU_GRF_RESET_FUNCTION_CLR_TSADC_SHUT_RESET_SRC_CLR_MASK (0x1U << PMU_GRF_RESET_FUNCTION_CLR_TSADC_SHUT_RESET_SRC_CLR_SHIFT) /* 0x00000004 */
#define PMU_GRF_RESET_FUNCTION_CLR_DDR_FAIL_SAFE_SRC_CLR_SHIFT (3U)
#define PMU_GRF_RESET_FUNCTION_CLR_DDR_FAIL_SAFE_SRC_CLR_MASK (0x1U << PMU_GRF_RESET_FUNCTION_CLR_DDR_FAIL_SAFE_SRC_CLR_SHIFT) /* 0x00000008 */
/* SIG_DETECT_CON */
#define PMU_GRF_SIG_DETECT_CON_SDMMC_DETECTN_POS_IRQ_MSK_SHIFT (0U)
#define PMU_GRF_SIG_DETECT_CON_SDMMC_DETECTN_POS_IRQ_MSK_MASK (0x1U << PMU_GRF_SIG_DETECT_CON_SDMMC_DETECTN_POS_IRQ_MSK_SHIFT) /* 0x00000001 */
#define PMU_GRF_SIG_DETECT_CON_SDMMC_DETECTN_NEG_IRQ_MSK_SHIFT (1U)
#define PMU_GRF_SIG_DETECT_CON_SDMMC_DETECTN_NEG_IRQ_MSK_MASK (0x1U << PMU_GRF_SIG_DETECT_CON_SDMMC_DETECTN_NEG_IRQ_MSK_SHIFT) /* 0x00000002 */
/* SIG_DETECT_STATUS */
#define PMU_GRF_SIG_DETECT_STATUS_SDMMC_DETECTN_POS_IRQ_SHIFT (0U)
#define PMU_GRF_SIG_DETECT_STATUS_SDMMC_DETECTN_POS_IRQ_MASK (0x1U << PMU_GRF_SIG_DETECT_STATUS_SDMMC_DETECTN_POS_IRQ_SHIFT) /* 0x00000001 */
#define PMU_GRF_SIG_DETECT_STATUS_SDMMC_DETECTN_NEG_IRQ_SHIFT (1U)
#define PMU_GRF_SIG_DETECT_STATUS_SDMMC_DETECTN_NEG_IRQ_MASK (0x1U << PMU_GRF_SIG_DETECT_STATUS_SDMMC_DETECTN_NEG_IRQ_SHIFT) /* 0x00000002 */
/* SIG_DETECT_STATUS_CLEAR */
#define PMU_GRF_SIG_DETECT_STATUS_CLEAR_SDMMC_DETECTN_POS_IRQ_CLR_SHIFT (0U)
#define PMU_GRF_SIG_DETECT_STATUS_CLEAR_SDMMC_DETECTN_POS_IRQ_CLR_MASK (0x1U << PMU_GRF_SIG_DETECT_STATUS_CLEAR_SDMMC_DETECTN_POS_IRQ_CLR_SHIFT) /* 0x00000001 */
#define PMU_GRF_SIG_DETECT_STATUS_CLEAR_SDMMC_DETECTN_NEG_IRQ_CLR_SHIFT (1U)
#define PMU_GRF_SIG_DETECT_STATUS_CLEAR_SDMMC_DETECTN_NEG_IRQ_CLR_MASK (0x1U << PMU_GRF_SIG_DETECT_STATUS_CLEAR_SDMMC_DETECTN_NEG_IRQ_CLR_SHIFT) /* 0x00000002 */
/* SDMMC_DET_COUNTER */
#define PMU_GRF_SDMMC_DET_COUNTER_SDMMC_DETECTN_COUNT_SHIFT (0U)
#define PMU_GRF_SDMMC_DET_COUNTER_SDMMC_DETECTN_COUNT_MASK (0xFFFFFU << PMU_GRF_SDMMC_DET_COUNTER_SDMMC_DETECTN_COUNT_SHIFT) /* 0x000FFFFF */
/****************************************DDR_GRF*****************************************/
/* CON0 */
#define DDR_GRF_CON0_UPCTL_SLVERR_ENABLE_SHIFT             (0U)
#define DDR_GRF_CON0_UPCTL_SLVERR_ENABLE_MASK              (0x1U << DDR_GRF_CON0_UPCTL_SLVERR_ENABLE_SHIFT)             /* 0x00000001 */
#define DDR_GRF_CON0_DFI_INIT_START_SEL_SHIFT              (1U)
#define DDR_GRF_CON0_DFI_INIT_START_SEL_MASK               (0x1U << DDR_GRF_CON0_DFI_INIT_START_SEL_SHIFT)              /* 0x00000002 */
#define DDR_GRF_CON0_DFI_INIT_START_SHIFT                  (2U)
#define DDR_GRF_CON0_DFI_INIT_START_MASK                   (0x1U << DDR_GRF_CON0_DFI_INIT_START_SHIFT)                  /* 0x00000004 */
#define DDR_GRF_CON0_CSYSREQ_ACLK_SHIFT                    (3U)
#define DDR_GRF_CON0_CSYSREQ_ACLK_MASK                     (0x1U << DDR_GRF_CON0_CSYSREQ_ACLK_SHIFT)                    /* 0x00000008 */
#define DDR_GRF_CON0_CSYSREQ_UPCTL_PMU_SHIFT               (4U)
#define DDR_GRF_CON0_CSYSREQ_UPCTL_PMU_MASK                (0x1U << DDR_GRF_CON0_CSYSREQ_UPCTL_PMU_SHIFT)               /* 0x00000010 */
#define DDR_GRF_CON0_CSYSREQ_UPCTL_DDRSTDBY_SHIFT          (5U)
#define DDR_GRF_CON0_CSYSREQ_UPCTL_DDRSTDBY_MASK           (0x1U << DDR_GRF_CON0_CSYSREQ_UPCTL_DDRSTDBY_SHIFT)          /* 0x00000020 */
#define DDR_GRF_CON0_PA_RMASK_SHIFT                        (8U)
#define DDR_GRF_CON0_PA_RMASK_MASK                         (0x3U << DDR_GRF_CON0_PA_RMASK_SHIFT)                        /* 0x00000300 */
#define DDR_GRF_CON0_PA_WMASK_SHIFT                        (10U)
#define DDR_GRF_CON0_PA_WMASK_MASK                         (0x1U << DDR_GRF_CON0_PA_WMASK_SHIFT)                        /* 0x00000400 */
#define DDR_GRF_CON0_ARURGENT_SHIFT                        (11U)
#define DDR_GRF_CON0_ARURGENT_MASK                         (0x1U << DDR_GRF_CON0_ARURGENT_SHIFT)                        /* 0x00000800 */
#define DDR_GRF_CON0_ARPOISON_SHIFT                        (12U)
#define DDR_GRF_CON0_ARPOISON_MASK                         (0x1U << DDR_GRF_CON0_ARPOISON_SHIFT)                        /* 0x00001000 */
#define DDR_GRF_CON0_AWURGENT_SHIFT                        (13U)
#define DDR_GRF_CON0_AWURGENT_MASK                         (0x1U << DDR_GRF_CON0_AWURGENT_SHIFT)                        /* 0x00002000 */
#define DDR_GRF_CON0_AWPOISON_SHIFT                        (14U)
#define DDR_GRF_CON0_AWPOISON_MASK                         (0x1U << DDR_GRF_CON0_AWPOISON_SHIFT)                        /* 0x00004000 */
/* CON1 */
#define DDR_GRF_CON1_UPCTL_AXI_CG_EN_SHIFT                 (0U)
#define DDR_GRF_CON1_UPCTL_AXI_CG_EN_MASK                  (0x1U << DDR_GRF_CON1_UPCTL_AXI_CG_EN_SHIFT)                 /* 0x00000001 */
#define DDR_GRF_CON1_UPCTL_APB_CG_EN_SHIFT                 (1U)
#define DDR_GRF_CON1_UPCTL_APB_CG_EN_MASK                  (0x1U << DDR_GRF_CON1_UPCTL_APB_CG_EN_SHIFT)                 /* 0x00000002 */
#define DDR_GRF_CON1_UPCTL_CORE_CG_EN_SHIFT                (2U)
#define DDR_GRF_CON1_UPCTL_CORE_CG_EN_MASK                 (0x1U << DDR_GRF_CON1_UPCTL_CORE_CG_EN_SHIFT)                /* 0x00000004 */
#define DDR_GRF_CON1_SELFREF_TYPE2_EN_SHIFT                (3U)
#define DDR_GRF_CON1_SELFREF_TYPE2_EN_MASK                 (0x1U << DDR_GRF_CON1_SELFREF_TYPE2_EN_SHIFT)                /* 0x00000008 */
#define DDR_GRF_CON1_UPCTL_SYSCREQ_CG_EN_SHIFT             (4U)
#define DDR_GRF_CON1_UPCTL_SYSCREQ_CG_EN_MASK              (0x1U << DDR_GRF_CON1_UPCTL_SYSCREQ_CG_EN_SHIFT)             /* 0x00000010 */
#define DDR_GRF_CON1_CON_UPCTL2_PDSRLP_CG_EN_SHIFT         (5U)
#define DDR_GRF_CON1_CON_UPCTL2_PDSRLP_CG_EN_MASK          (0x1U << DDR_GRF_CON1_CON_UPCTL2_PDSRLP_CG_EN_SHIFT)         /* 0x00000020 */
#define DDR_GRF_CON1_AUTO_SR_DLY_SHIFT                     (8U)
#define DDR_GRF_CON1_AUTO_SR_DLY_MASK                      (0xFU << DDR_GRF_CON1_AUTO_SR_DLY_SHIFT)                     /* 0x00000F00 */
#define DDR_GRF_CON1_CON_PLLPD_DQCMD_SHIFT                 (12U)
#define DDR_GRF_CON1_CON_PLLPD_DQCMD_MASK                  (0x1U << DDR_GRF_CON1_CON_PLLPD_DQCMD_SHIFT)                 /* 0x00001000 */
#define DDR_GRF_CON1_CON_CLKOUTEN_DQCMD_SHIFT              (13U)
#define DDR_GRF_CON1_CON_CLKOUTEN_DQCMD_MASK               (0x1U << DDR_GRF_CON1_CON_CLKOUTEN_DQCMD_SHIFT)              /* 0x00002000 */
#define DDR_GRF_CON1_CON_PLLPD_DQCMD_SEL_SHIFT             (14U)
#define DDR_GRF_CON1_CON_PLLPD_DQCMD_SEL_MASK              (0x1U << DDR_GRF_CON1_CON_PLLPD_DQCMD_SEL_SHIFT)             /* 0x00004000 */
#define DDR_GRF_CON1_CON_CLKOUTEN_DQCMD_SEL_SHIFT          (15U)
#define DDR_GRF_CON1_CON_CLKOUTEN_DQCMD_SEL_MASK           (0x1U << DDR_GRF_CON1_CON_CLKOUTEN_DQCMD_SEL_SHIFT)          /* 0x00008000 */
/* SPLIT_CON */
#define DDR_GRF_SPLIT_CON_SPADDR_SHIFT                     (0U)
#define DDR_GRF_SPLIT_CON_SPADDR_MASK                      (0xFFU << DDR_GRF_SPLIT_CON_SPADDR_SHIFT)                    /* 0x000000FF */
#define DDR_GRF_SPLIT_CON_BYPASS_SHIFT                     (8U)
#define DDR_GRF_SPLIT_CON_BYPASS_MASK                      (0x1U << DDR_GRF_SPLIT_CON_BYPASS_SHIFT)                     /* 0x00000100 */
#define DDR_GRF_SPLIT_CON_SPMODE_SHIFT                     (9U)
#define DDR_GRF_SPLIT_CON_SPMODE_MASK                      (0x3U << DDR_GRF_SPLIT_CON_SPMODE_SHIFT)                     /* 0x00000600 */
/* LP_CON */
#define DDR_GRF_LP_CON_DDR23_MODE_SHIFT                    (0U)
#define DDR_GRF_LP_CON_DDR23_MODE_MASK                     (0x1U << DDR_GRF_LP_CON_DDR23_MODE_SHIFT)                    /* 0x00000001 */
#define DDR_GRF_LP_CON_DDR4_MODE_SHIFT                     (1U)
#define DDR_GRF_LP_CON_DDR4_MODE_MASK                      (0x1U << DDR_GRF_LP_CON_DDR4_MODE_SHIFT)                     /* 0x00000002 */
#define DDR_GRF_LP_CON_LP23_MODE_SHIFT                     (2U)
#define DDR_GRF_LP_CON_LP23_MODE_MASK                      (0x1U << DDR_GRF_LP_CON_LP23_MODE_SHIFT)                     /* 0x00000004 */
#define DDR_GRF_LP_CON_LPCKDIS_INI_SHIFT                   (8U)
#define DDR_GRF_LP_CON_LPCKDIS_INI_MASK                    (0x1U << DDR_GRF_LP_CON_LPCKDIS_INI_SHIFT)                   /* 0x00000100 */
#define DDR_GRF_LP_CON_LPCKDIS_EN_SHIFT                    (9U)
#define DDR_GRF_LP_CON_LPCKDIS_EN_MASK                     (0x1U << DDR_GRF_LP_CON_LPCKDIS_EN_SHIFT)                    /* 0x00000200 */
#define DDR_GRF_LP_CON_PD_CTL_EN_SHIFT                     (12U)
#define DDR_GRF_LP_CON_PD_CTL_EN_MASK                      (0x1U << DDR_GRF_LP_CON_PD_CTL_EN_SHIFT)                     /* 0x00001000 */
#define DDR_GRF_LP_CON_SR_CTL_EN_SHIFT                     (13U)
#define DDR_GRF_LP_CON_SR_CTL_EN_MASK                      (0x1U << DDR_GRF_LP_CON_SR_CTL_EN_SHIFT)                     /* 0x00002000 */
/* STATUS0 */
#define DDR_GRF_STATUS0_MRR_DATA0_SHIFT                    (0U)
#define DDR_GRF_STATUS0_MRR_DATA0_MASK                     (0xFFFFFFFFU << DDR_GRF_STATUS0_MRR_DATA0_SHIFT)             /* 0xFFFFFFFF */
/* STATUS1 */
#define DDR_GRF_STATUS1_MRR_DATA0_SHIFT                    (0U)
#define DDR_GRF_STATUS1_MRR_DATA0_MASK                     (0xFFFFFFFFU << DDR_GRF_STATUS1_MRR_DATA0_SHIFT)             /* 0xFFFFFFFF */
/* STATUS2 */
#define DDR_GRF_STATUS2_MRR_DATA0_SHIFT                    (0U)
#define DDR_GRF_STATUS2_MRR_DATA0_MASK                     (0xFFFFFFFFU << DDR_GRF_STATUS2_MRR_DATA0_SHIFT)             /* 0xFFFFFFFF */
/* STATUS3 */
#define DDR_GRF_STATUS3_MRR_DATA0_SHIFT                    (0U)
#define DDR_GRF_STATUS3_MRR_DATA0_MASK                     (0xFFFFFFFFU << DDR_GRF_STATUS3_MRR_DATA0_SHIFT)             /* 0xFFFFFFFF */
/* STATUS4 */
#define DDR_GRF_STATUS4_MRR_DATA1_SHIFT                    (0U)
#define DDR_GRF_STATUS4_MRR_DATA1_MASK                     (0xFFFFFFFFU << DDR_GRF_STATUS4_MRR_DATA1_SHIFT)             /* 0xFFFFFFFF */
/* STATUS5 */
#define DDR_GRF_STATUS5_MRR_DATA1_SHIFT                    (0U)
#define DDR_GRF_STATUS5_MRR_DATA1_MASK                     (0xFFFFFFFFU << DDR_GRF_STATUS5_MRR_DATA1_SHIFT)             /* 0xFFFFFFFF */
/* STATUS6 */
#define DDR_GRF_STATUS6_MRR_DATA1_SHIFT                    (0U)
#define DDR_GRF_STATUS6_MRR_DATA1_MASK                     (0xFFFFFFFFU << DDR_GRF_STATUS6_MRR_DATA1_SHIFT)             /* 0xFFFFFFFF */
/* STATUS7 */
#define DDR_GRF_STATUS7_MRR_DATA1_SHIFT                    (0U)
#define DDR_GRF_STATUS7_MRR_DATA1_MASK                     (0xFFFFFFFFU << DDR_GRF_STATUS7_MRR_DATA1_SHIFT)             /* 0xFFFFFFFF */
/* STATUS8 */
#define DDR_GRF_STATUS8_CSYSREQ_DDRC_SHIFT                 (0U)
#define DDR_GRF_STATUS8_CSYSREQ_DDRC_MASK                  (0x1U << DDR_GRF_STATUS8_CSYSREQ_DDRC_SHIFT)                 /* 0x00000001 */
#define DDR_GRF_STATUS8_CSYSACK_DDRC_SHIFT                 (1U)
#define DDR_GRF_STATUS8_CSYSACK_DDRC_MASK                  (0x1U << DDR_GRF_STATUS8_CSYSACK_DDRC_SHIFT)                 /* 0x00000002 */
#define DDR_GRF_STATUS8_CACTIVE_DDRC_SHIFT                 (2U)
#define DDR_GRF_STATUS8_CACTIVE_DDRC_MASK                  (0x1U << DDR_GRF_STATUS8_CACTIVE_DDRC_SHIFT)                 /* 0x00000004 */
#define DDR_GRF_STATUS8_CON_CSYSREQ_ACLK_SHIFT             (3U)
#define DDR_GRF_STATUS8_CON_CSYSREQ_ACLK_MASK              (0x1U << DDR_GRF_STATUS8_CON_CSYSREQ_ACLK_SHIFT)             /* 0x00000008 */
#define DDR_GRF_STATUS8_CSYSACLK_ACLK_SHIFT                (4U)
#define DDR_GRF_STATUS8_CSYSACLK_ACLK_MASK                 (0x1U << DDR_GRF_STATUS8_CSYSACLK_ACLK_SHIFT)                /* 0x00000010 */
#define DDR_GRF_STATUS8_CACTIVE_ACLK_SHIFT                 (5U)
#define DDR_GRF_STATUS8_CACTIVE_ACLK_MASK                  (0x1U << DDR_GRF_STATUS8_CACTIVE_ACLK_SHIFT)                 /* 0x00000020 */
#define DDR_GRF_STATUS8_DDRC_REG_SELFREF_TYPE_SHIFT        (6U)
#define DDR_GRF_STATUS8_DDRC_REG_SELFREF_TYPE_MASK         (0x3U << DDR_GRF_STATUS8_DDRC_REG_SELFREF_TYPE_SHIFT)        /* 0x000000C0 */
#define DDR_GRF_STATUS8_DFI_SCRAMBLE_KEY_READY_SHIFT       (8U)
#define DDR_GRF_STATUS8_DFI_SCRAMBLE_KEY_READY_MASK        (0x1U << DDR_GRF_STATUS8_DFI_SCRAMBLE_KEY_READY_SHIFT)       /* 0x00000100 */
#define DDR_GRF_STATUS8_DFI_SCRAMBLE_WRITE_OF_SHIFT        (9U)
#define DDR_GRF_STATUS8_DFI_SCRAMBLE_WRITE_OF_MASK         (0x1U << DDR_GRF_STATUS8_DFI_SCRAMBLE_WRITE_OF_SHIFT)        /* 0x00000200 */
#define DDR_GRF_STATUS8_DFI_SCRAMBLE_READ_OF_SHIFT         (10U)
#define DDR_GRF_STATUS8_DFI_SCRAMBLE_READ_OF_MASK          (0x1U << DDR_GRF_STATUS8_DFI_SCRAMBLE_READ_OF_SHIFT)         /* 0x00000400 */
#define DDR_GRF_STATUS8_PERI_PORT_PROBE_MAINTRACEALARM_SHIFT (11U)
#define DDR_GRF_STATUS8_PERI_PORT_PROBE_MAINTRACEALARM_MASK (0x1U << DDR_GRF_STATUS8_PERI_PORT_PROBE_MAINTRACEALARM_SHIFT) /* 0x00000800 */
#define DDR_GRF_STATUS8_PERI_PORT_PROBE_MAINSTATALARM_SHIFT (12U)
#define DDR_GRF_STATUS8_PERI_PORT_PROBE_MAINSTATALARM_MASK (0x1U << DDR_GRF_STATUS8_PERI_PORT_PROBE_MAINSTATALARM_SHIFT) /* 0x00001000 */
#define DDR_GRF_STATUS8_MMIP_PORT_PROBE_MAINTRACEALARM_SHIFT (13U)
#define DDR_GRF_STATUS8_MMIP_PORT_PROBE_MAINTRACEALARM_MASK (0x1U << DDR_GRF_STATUS8_MMIP_PORT_PROBE_MAINTRACEALARM_SHIFT) /* 0x00002000 */
#define DDR_GRF_STATUS8_MMIP_PORT_PROBE_MAINSTATALARM_SHIFT (14U)
#define DDR_GRF_STATUS8_MMIP_PORT_PROBE_MAINSTATALARM_MASK (0x1U << DDR_GRF_STATUS8_MMIP_PORT_PROBE_MAINSTATALARM_SHIFT) /* 0x00004000 */
#define DDR_GRF_STATUS8_GPU_PORT_PROBE_MAINTRACEALARM_SHIFT (15U)
#define DDR_GRF_STATUS8_GPU_PORT_PROBE_MAINTRACEALARM_MASK (0x1U << DDR_GRF_STATUS8_GPU_PORT_PROBE_MAINTRACEALARM_SHIFT) /* 0x00008000 */
#define DDR_GRF_STATUS8_GPU_PORT_PROBE_MAINSTATALARM_SHIFT (16U)
#define DDR_GRF_STATUS8_GPU_PORT_PROBE_MAINSTATALARM_MASK  (0x1U << DDR_GRF_STATUS8_GPU_PORT_PROBE_MAINSTATALARM_SHIFT) /* 0x00010000 */
#define DDR_GRF_STATUS8_CPU_PORT_PROBE_MAINTRACEALARM_SHIFT (17U)
#define DDR_GRF_STATUS8_CPU_PORT_PROBE_MAINTRACEALARM_MASK (0x1U << DDR_GRF_STATUS8_CPU_PORT_PROBE_MAINTRACEALARM_SHIFT) /* 0x00020000 */
#define DDR_GRF_STATUS8_CPU_PORT_PROBE_MAINSTATALARM_SHIFT (18U)
#define DDR_GRF_STATUS8_CPU_PORT_PROBE_MAINSTATALARM_MASK  (0x1U << DDR_GRF_STATUS8_CPU_PORT_PROBE_MAINSTATALARM_SHIFT) /* 0x00040000 */
/* STATUS9 */
#define DDR_GRF_STATUS9_LPR_CREDIT_CNT_SHIFT               (0U)
#define DDR_GRF_STATUS9_LPR_CREDIT_CNT_MASK                (0x7FU << DDR_GRF_STATUS9_LPR_CREDIT_CNT_SHIFT)              /* 0x0000007F */
#define DDR_GRF_STATUS9_HPR_CREDIT_CNT_SHIFT               (8U)
#define DDR_GRF_STATUS9_HPR_CREDIT_CNT_MASK                (0x7FU << DDR_GRF_STATUS9_HPR_CREDIT_CNT_SHIFT)              /* 0x00007F00 */
#define DDR_GRF_STATUS9_WR_CREDIT_CNT_SHIFT                (16U)
#define DDR_GRF_STATUS9_WR_CREDIT_CNT_MASK                 (0x7FU << DDR_GRF_STATUS9_WR_CREDIT_CNT_SHIFT)               /* 0x007F0000 */
#define DDR_GRF_STATUS9_HIF_REFRESH_REQ_BANK_SHIFT         (24U)
#define DDR_GRF_STATUS9_HIF_REFRESH_REQ_BANK_MASK          (0x3FU << DDR_GRF_STATUS9_HIF_REFRESH_REQ_BANK_SHIFT)        /* 0x3F000000 */
#define DDR_GRF_STATUS9_DFI_LP_CK_DISABLE_SHIFT            (31U)
#define DDR_GRF_STATUS9_DFI_LP_CK_DISABLE_MASK             (0x1U << DDR_GRF_STATUS9_DFI_LP_CK_DISABLE_SHIFT)            /* 0x80000000 */
/****************************************USB_GRF*****************************************/
/* PCIE_CON0 */
#define USB_GRF_PCIE_CON0_PCIE_PWR_IDLE_REQ_SHIFT          (1U)
#define USB_GRF_PCIE_CON0_PCIE_PWR_IDLE_REQ_MASK           (0x1U << USB_GRF_PCIE_CON0_PCIE_PWR_IDLE_REQ_SHIFT)          /* 0x00000002 */
#define USB_GRF_PCIE_CON0_PCIE_LINK_RST_GRT_SHIFT          (2U)
#define USB_GRF_PCIE_CON0_PCIE_LINK_RST_GRT_MASK           (0x1U << USB_GRF_PCIE_CON0_PCIE_LINK_RST_GRT_SHIFT)          /* 0x00000004 */
/* PCIE_STATUS0 */
#define USB_GRF_PCIE_STATUS0_PCIE_PWR_IDLE_ACK_SHIFT       (0U)
#define USB_GRF_PCIE_STATUS0_PCIE_PWR_IDLE_ACK_MASK        (0x1U << USB_GRF_PCIE_STATUS0_PCIE_PWR_IDLE_ACK_SHIFT)       /* 0x00000001 */
#define USB_GRF_PCIE_STATUS0_PCIE_PWR_IDLE_SHIFT           (1U)
#define USB_GRF_PCIE_STATUS0_PCIE_PWR_IDLE_MASK            (0x1U << USB_GRF_PCIE_STATUS0_PCIE_PWR_IDLE_SHIFT)           /* 0x00000002 */
/* USB3OTG_CON0 */
#define USB_GRF_USB3OTG_CON0_USB3OTG_BUS_FILTER_BYPASS_SHIFT (0U)
#define USB_GRF_USB3OTG_CON0_USB3OTG_BUS_FILTER_BYPASS_MASK (0xFU << USB_GRF_USB3OTG_CON0_USB3OTG_BUS_FILTER_BYPASS_SHIFT) /* 0x0000000F */
#define USB_GRF_USB3OTG_CON0_USB3OTG_HUB_PORT_OVERCURRENT_SHIFT (4U)
#define USB_GRF_USB3OTG_CON0_USB3OTG_HUB_PORT_OVERCURRENT_MASK (0x3U << USB_GRF_USB3OTG_CON0_USB3OTG_HUB_PORT_OVERCURRENT_SHIFT) /* 0x00000030 */
#define USB_GRF_USB3OTG_CON0_USB3OTG_HUB_PORT_PERM_ATTACH_SHIFT (6U)
#define USB_GRF_USB3OTG_CON0_USB3OTG_HUB_PORT_PERM_ATTACH_MASK (0x3U << USB_GRF_USB3OTG_CON0_USB3OTG_HUB_PORT_PERM_ATTACH_SHIFT) /* 0x000000C0 */
#define USB_GRF_USB3OTG_CON0_USB3OTG_FLADJ_30MHZ_REG_SHIFT (8U)
#define USB_GRF_USB3OTG_CON0_USB3OTG_FLADJ_30MHZ_REG_MASK  (0x3FU << USB_GRF_USB3OTG_CON0_USB3OTG_FLADJ_30MHZ_REG_SHIFT) /* 0x00003F00 */
#define USB_GRF_USB3OTG_CON0_USB3OTG_HOST_PORT_POWER_CONTROL_PRESENT_SHIFT (14U)
#define USB_GRF_USB3OTG_CON0_USB3OTG_HOST_PORT_POWER_CONTROL_PRESENT_MASK (0x1U << USB_GRF_USB3OTG_CON0_USB3OTG_HOST_PORT_POWER_CONTROL_PRESENT_SHIFT) /* 0x00004000 */
#define USB_GRF_USB3OTG_CON0_USB3OTG_HOST_U2_PORT_DISABLE_SHIFT (15U)
#define USB_GRF_USB3OTG_CON0_USB3OTG_HOST_U2_PORT_DISABLE_MASK (0x1U << USB_GRF_USB3OTG_CON0_USB3OTG_HOST_U2_PORT_DISABLE_SHIFT) /* 0x00008000 */
/* USB3OTG_CON1 */
#define USB_GRF_USB3OTG_CON1_USB3OTG_HOST_U3_PORT_DISABLE_SHIFT (0U)
#define USB_GRF_USB3OTG_CON1_USB3OTG_HOST_U3_PORT_DISABLE_MASK (0x1U << USB_GRF_USB3OTG_CON1_USB3OTG_HOST_U3_PORT_DISABLE_SHIFT) /* 0x00000001 */
#define USB_GRF_USB3OTG_CON1_USB3OTG_PME_EN_SHIFT          (1U)
#define USB_GRF_USB3OTG_CON1_USB3OTG_PME_EN_MASK           (0x1U << USB_GRF_USB3OTG_CON1_USB3OTG_PME_EN_SHIFT)          /* 0x00000002 */
#define USB_GRF_USB3OTG_CON1_USB3OTG_HOST_LEGACY_SMI_PCI_CMD_SHIFT (4U)
#define USB_GRF_USB3OTG_CON1_USB3OTG_HOST_LEGACY_SMI_PCI_CMD_MASK (0x1U << USB_GRF_USB3OTG_CON1_USB3OTG_HOST_LEGACY_SMI_PCI_CMD_SHIFT) /* 0x00000010 */
#define USB_GRF_USB3OTG_CON1_USB3OTG_HOST_LEGACY_SMI_BAR_SHIFT (5U)
#define USB_GRF_USB3OTG_CON1_USB3OTG_HOST_LEGACY_SMI_BAR_MASK (0x1U << USB_GRF_USB3OTG_CON1_USB3OTG_HOST_LEGACY_SMI_BAR_SHIFT) /* 0x00000020 */
#define USB_GRF_USB3OTG_CON1_USB3OTG_HOST_NUM_U2_PORT_SHIFT (8U)
#define USB_GRF_USB3OTG_CON1_USB3OTG_HOST_NUM_U2_PORT_MASK (0xFU << USB_GRF_USB3OTG_CON1_USB3OTG_HOST_NUM_U2_PORT_SHIFT) /* 0x00000F00 */
#define USB_GRF_USB3OTG_CON1_USB3OTG_HOST_NUM_U3_PORT_SHIFT (12U)
#define USB_GRF_USB3OTG_CON1_USB3OTG_HOST_NUM_U3_PORT_MASK (0xFU << USB_GRF_USB3OTG_CON1_USB3OTG_HOST_NUM_U3_PORT_SHIFT) /* 0x0000F000 */
/* USB3OTG_STATUS0 */
#define USB_GRF_USB3OTG_STATUS0_USB3OTG_LOGIC_ANALYZER_TRACE_SHIFT (0U)
#define USB_GRF_USB3OTG_STATUS0_USB3OTG_LOGIC_ANALYZER_TRACE_MASK (0xFFFFFFFFU << USB_GRF_USB3OTG_STATUS0_USB3OTG_LOGIC_ANALYZER_TRACE_SHIFT) /* 0xFFFFFFFF */
/* USB3OTG_STATUS1 */
#define USB_GRF_USB3OTG_STATUS1_USB3OTG_LOGIC_ANALYZER_TRACE_SHIFT (0U)
#define USB_GRF_USB3OTG_STATUS1_USB3OTG_LOGIC_ANALYZER_TRACE_MASK (0xFFFFFFFFU << USB_GRF_USB3OTG_STATUS1_USB3OTG_LOGIC_ANALYZER_TRACE_SHIFT) /* 0xFFFFFFFF */
/* USB3OTG_STATUS2 */
#define USB_GRF_USB3OTG_STATUS2_USB3OTG_HOST_CURRENT_BELT_SHIFT (0U)
#define USB_GRF_USB3OTG_STATUS2_USB3OTG_HOST_CURRENT_BELT_MASK (0xFFFU << USB_GRF_USB3OTG_STATUS2_USB3OTG_HOST_CURRENT_BELT_SHIFT) /* 0x00000FFF */
/* HOST0_CON0 */
#define USB_GRF_HOST0_CON0_HOST0_FLADJ_VAL_SHIFT           (0U)
#define USB_GRF_HOST0_CON0_HOST0_FLADJ_VAL_MASK            (0x3FU << USB_GRF_HOST0_CON0_HOST0_FLADJ_VAL_SHIFT)          /* 0x0000003F */
#define USB_GRF_HOST0_CON0_HOST0_FLADJ_VAL_COMMON_SHIFT    (6U)
#define USB_GRF_HOST0_CON0_HOST0_FLADJ_VAL_COMMON_MASK     (0x3FU << USB_GRF_HOST0_CON0_HOST0_FLADJ_VAL_COMMON_SHIFT)   /* 0x00000FC0 */
/* HOST0_CON1 */
#define USB_GRF_HOST0_CON1_HOST0_APP_START_CLK_SHIFT       (0U)
#define USB_GRF_HOST0_CON1_HOST0_APP_START_CLK_MASK        (0x1U << USB_GRF_HOST0_CON1_HOST0_APP_START_CLK_SHIFT)       /* 0x00000001 */
#define USB_GRF_HOST0_CON1_HOST0_HUBSETUP_MIN_SHIFT        (1U)
#define USB_GRF_HOST0_CON1_HOST0_HUBSETUP_MIN_MASK         (0x1U << USB_GRF_HOST0_CON1_HOST0_HUBSETUP_MIN_SHIFT)        /* 0x00000002 */
#define USB_GRF_HOST0_CON1_HOST0_INCR16_EN_SHIFT           (2U)
#define USB_GRF_HOST0_CON1_HOST0_INCR16_EN_MASK            (0x1U << USB_GRF_HOST0_CON1_HOST0_INCR16_EN_SHIFT)           /* 0x00000004 */
#define USB_GRF_HOST0_CON1_HOST0_INCR4_EN_SHIFT            (3U)
#define USB_GRF_HOST0_CON1_HOST0_INCR4_EN_MASK             (0x1U << USB_GRF_HOST0_CON1_HOST0_INCR4_EN_SHIFT)            /* 0x00000008 */
#define USB_GRF_HOST0_CON1_HOST0_INCR8_EN_SHIFT            (4U)
#define USB_GRF_HOST0_CON1_HOST0_INCR8_EN_MASK             (0x1U << USB_GRF_HOST0_CON1_HOST0_INCR8_EN_SHIFT)            /* 0x00000010 */
#define USB_GRF_HOST0_CON1_HOST0_INCRX_EN_SHIFT            (5U)
#define USB_GRF_HOST0_CON1_HOST0_INCRX_EN_MASK             (0x1U << USB_GRF_HOST0_CON1_HOST0_INCRX_EN_SHIFT)            /* 0x00000020 */
#define USB_GRF_HOST0_CON1_HOST0_SIM_MODE_SHIFT            (6U)
#define USB_GRF_HOST0_CON1_HOST0_SIM_MODE_MASK             (0x1U << USB_GRF_HOST0_CON1_HOST0_SIM_MODE_SHIFT)            /* 0x00000040 */
#define USB_GRF_HOST0_CON1_HOST0_WORD_IF_SHIFT             (7U)
#define USB_GRF_HOST0_CON1_HOST0_WORD_IF_MASK              (0x1U << USB_GRF_HOST0_CON1_HOST0_WORD_IF_SHIFT)             /* 0x00000080 */
#define USB_GRF_HOST0_CON1_HOST0_AUTOPPD_ON_OVERCUR_EN_SHIFT (8U)
#define USB_GRF_HOST0_CON1_HOST0_AUTOPPD_ON_OVERCUR_EN_MASK (0x1U << USB_GRF_HOST0_CON1_HOST0_AUTOPPD_ON_OVERCUR_EN_SHIFT) /* 0x00000100 */
#define USB_GRF_HOST0_CON1_HOST0_APP_PRT_OVRCUR_SHIFT      (9U)
#define USB_GRF_HOST0_CON1_HOST0_APP_PRT_OVRCUR_MASK       (0x1U << USB_GRF_HOST0_CON1_HOST0_APP_PRT_OVRCUR_SHIFT)      /* 0x00000200 */
#define USB_GRF_HOST0_CON1_HOST0_OHCI_CLKCKTRST_SHIFT      (10U)
#define USB_GRF_HOST0_CON1_HOST0_OHCI_CLKCKTRST_MASK       (0x1U << USB_GRF_HOST0_CON1_HOST0_OHCI_CLKCKTRST_SHIFT)      /* 0x00000400 */
#define USB_GRF_HOST0_CON1_HOST0_OHCI_CNTSEL_SHIFT         (11U)
#define USB_GRF_HOST0_CON1_HOST0_OHCI_CNTSEL_MASK          (0x1U << USB_GRF_HOST0_CON1_HOST0_OHCI_CNTSEL_SHIFT)         /* 0x00000800 */
#define USB_GRF_HOST0_CON1_HOST0_OHCI_SUSP_LGCY_SHIFT      (12U)
#define USB_GRF_HOST0_CON1_HOST0_OHCI_SUSP_LGCY_MASK       (0x1U << USB_GRF_HOST0_CON1_HOST0_OHCI_SUSP_LGCY_SHIFT)      /* 0x00001000 */
#define USB_GRF_HOST0_CON1_HOST0_ARB_PAUSE_SHIFT           (13U)
#define USB_GRF_HOST0_CON1_HOST0_ARB_PAUSE_MASK            (0x1U << USB_GRF_HOST0_CON1_HOST0_ARB_PAUSE_SHIFT)           /* 0x00002000 */
/* HOST0_STATUS */
#define USB_GRF_HOST0_STATUS_HOST0_EHCI_XFER_CNT_SHIFT     (0U)
#define USB_GRF_HOST0_STATUS_HOST0_EHCI_XFER_CNT_MASK      (0x7FFU << USB_GRF_HOST0_STATUS_HOST0_EHCI_XFER_CNT_SHIFT)   /* 0x000007FF */
#define USB_GRF_HOST0_STATUS_HOST0_EHCI_USBSTS_SHIFT       (11U)
#define USB_GRF_HOST0_STATUS_HOST0_EHCI_USBSTS_MASK        (0x3FU << USB_GRF_HOST0_STATUS_HOST0_EHCI_USBSTS_SHIFT)      /* 0x0001F800 */
#define USB_GRF_HOST0_STATUS_HOST0_EHCI_LPSMC_STATE_SHIFT  (17U)
#define USB_GRF_HOST0_STATUS_HOST0_EHCI_LPSMC_STATE_MASK   (0xFU << USB_GRF_HOST0_STATUS_HOST0_EHCI_LPSMC_STATE_SHIFT)  /* 0x001E0000 */
#define USB_GRF_HOST0_STATUS_HOST0_OHCI_RMTWKP_SHIFT       (21U)
#define USB_GRF_HOST0_STATUS_HOST0_OHCI_RMTWKP_MASK        (0x1U << USB_GRF_HOST0_STATUS_HOST0_OHCI_RMTWKP_SHIFT)       /* 0x00200000 */
#define USB_GRF_HOST0_STATUS_HOST0_OHCI_BUFACC_SHIFT       (22U)
#define USB_GRF_HOST0_STATUS_HOST0_OHCI_BUFACC_MASK        (0x1U << USB_GRF_HOST0_STATUS_HOST0_OHCI_BUFACC_SHIFT)       /* 0x00400000 */
#define USB_GRF_HOST0_STATUS_HOST0_OHCI_GLOBALSUSPEND_SHIFT (23U)
#define USB_GRF_HOST0_STATUS_HOST0_OHCI_GLOBALSUSPEND_MASK (0x1U << USB_GRF_HOST0_STATUS_HOST0_OHCI_GLOBALSUSPEND_SHIFT) /* 0x00800000 */
#define USB_GRF_HOST0_STATUS_HOST0_OHCI_DRWE_SHIFT         (24U)
#define USB_GRF_HOST0_STATUS_HOST0_OHCI_DRWE_MASK          (0x1U << USB_GRF_HOST0_STATUS_HOST0_OHCI_DRWE_SHIFT)         /* 0x01000000 */
#define USB_GRF_HOST0_STATUS_HOST0_OHCI_RWE_SHIFT          (25U)
#define USB_GRF_HOST0_STATUS_HOST0_OHCI_RWE_MASK           (0x1U << USB_GRF_HOST0_STATUS_HOST0_OHCI_RWE_SHIFT)          /* 0x02000000 */
#define USB_GRF_HOST0_STATUS_HOST0_OHCI_CCS_SHIFT          (26U)
#define USB_GRF_HOST0_STATUS_HOST0_OHCI_CCS_MASK           (0x1U << USB_GRF_HOST0_STATUS_HOST0_OHCI_CCS_SHIFT)          /* 0x04000000 */
#define USB_GRF_HOST0_STATUS_HOST0_EHCI_XFER_PRDC_SHIFT    (27U)
#define USB_GRF_HOST0_STATUS_HOST0_EHCI_XFER_PRDC_MASK     (0x1U << USB_GRF_HOST0_STATUS_HOST0_EHCI_XFER_PRDC_SHIFT)    /* 0x08000000 */
#define USB_GRF_HOST0_STATUS_HOST0_EHCI_BUFACC_SHIFT       (28U)
#define USB_GRF_HOST0_STATUS_HOST0_EHCI_BUFACC_MASK        (0x1U << USB_GRF_HOST0_STATUS_HOST0_EHCI_BUFACC_SHIFT)       /* 0x10000000 */
#define USB_GRF_HOST0_STATUS_HOST0_EHCI_PME_STATUS_SHIFT   (29U)
#define USB_GRF_HOST0_STATUS_HOST0_EHCI_PME_STATUS_MASK    (0x1U << USB_GRF_HOST0_STATUS_HOST0_EHCI_PME_STATUS_SHIFT)   /* 0x20000000 */
#define USB_GRF_HOST0_STATUS_HOST0_EHCI_POWER_STATE_ACK_SHIFT (30U)
#define USB_GRF_HOST0_STATUS_HOST0_EHCI_POWER_STATE_ACK_MASK (0x1U << USB_GRF_HOST0_STATUS_HOST0_EHCI_POWER_STATE_ACK_SHIFT) /* 0x40000000 */
/******************************************GRF*******************************************/
/* CPU_PEFF_CON0 */
#define GRF_CPU_PEFF_CON0_CPU_SW_AXI_PERF_WORK_SHIFT       (0U)
#define GRF_CPU_PEFF_CON0_CPU_SW_AXI_PERF_WORK_MASK        (0x1U << GRF_CPU_PEFF_CON0_CPU_SW_AXI_PERF_WORK_SHIFT)       /* 0x00000001 */
#define GRF_CPU_PEFF_CON0_CPU_SW_AXI_PERF_CLR_SHIFT        (1U)
#define GRF_CPU_PEFF_CON0_CPU_SW_AXI_PERF_CLR_MASK         (0x1U << GRF_CPU_PEFF_CON0_CPU_SW_AXI_PERF_CLR_SHIFT)        /* 0x00000002 */
#define GRF_CPU_PEFF_CON0_CPU_SW_AXI_CNT_TYPE_SHIFT        (2U)
#define GRF_CPU_PEFF_CON0_CPU_SW_AXI_CNT_TYPE_MASK         (0x1U << GRF_CPU_PEFF_CON0_CPU_SW_AXI_CNT_TYPE_SHIFT)        /* 0x00000004 */
#define GRF_CPU_PEFF_CON0_CPU_SW_AXI_CNT_TYPE_WRAP_SHIFT   (3U)
#define GRF_CPU_PEFF_CON0_CPU_SW_AXI_CNT_TYPE_WRAP_MASK    (0x1U << GRF_CPU_PEFF_CON0_CPU_SW_AXI_CNT_TYPE_WRAP_SHIFT)   /* 0x00000008 */
#define GRF_CPU_PEFF_CON0_CPU_SW_AR_CNT_ID_TYPE_SHIFT      (4U)
#define GRF_CPU_PEFF_CON0_CPU_SW_AR_CNT_ID_TYPE_MASK       (0x1U << GRF_CPU_PEFF_CON0_CPU_SW_AR_CNT_ID_TYPE_SHIFT)      /* 0x00000010 */
#define GRF_CPU_PEFF_CON0_CPU_SW_AW_CNT_ID_TYPE_SHIFT      (5U)
#define GRF_CPU_PEFF_CON0_CPU_SW_AW_CNT_ID_TYPE_MASK       (0x1U << GRF_CPU_PEFF_CON0_CPU_SW_AW_CNT_ID_TYPE_SHIFT)      /* 0x00000020 */
#define GRF_CPU_PEFF_CON0_CPU_SW_DDR_ALIGN_TYPE_SHIFT      (6U)
#define GRF_CPU_PEFF_CON0_CPU_SW_DDR_ALIGN_TYPE_MASK       (0x3U << GRF_CPU_PEFF_CON0_CPU_SW_DDR_ALIGN_TYPE_SHIFT)      /* 0x000000C0 */
#define GRF_CPU_PEFF_CON0_CPU_SW_RD_LATENCY_ID_SHIFT       (8U)
#define GRF_CPU_PEFF_CON0_CPU_SW_RD_LATENCY_ID_MASK        (0x3FU << GRF_CPU_PEFF_CON0_CPU_SW_RD_LATENCY_ID_SHIFT)      /* 0x00003F00 */
#define GRF_CPU_PEFF_CON0_CPU_SW_RD_LATENCY_ID_RANGE_E_SHIFT (15U)
#define GRF_CPU_PEFF_CON0_CPU_SW_RD_LATENCY_ID_RANGE_E_MASK (0x1U << GRF_CPU_PEFF_CON0_CPU_SW_RD_LATENCY_ID_RANGE_E_SHIFT) /* 0x00008000 */
/* CPU_PEFF_CON1 */
#define GRF_CPU_PEFF_CON1_CPU_SW_RD_LATENCY_THR_SHIFT      (0U)
#define GRF_CPU_PEFF_CON1_CPU_SW_RD_LATENCY_THR_MASK       (0xFFFU << GRF_CPU_PEFF_CON1_CPU_SW_RD_LATENCY_THR_SHIFT)    /* 0x00000FFF */
/* CPU_PEFF_CON2 */
#define GRF_CPU_PEFF_CON2_CPU_SW_AR_COUNT_ID_SHIFT         (0U)
#define GRF_CPU_PEFF_CON2_CPU_SW_AR_COUNT_ID_MASK          (0x3FU << GRF_CPU_PEFF_CON2_CPU_SW_AR_COUNT_ID_SHIFT)        /* 0x0000003F */
#define GRF_CPU_PEFF_CON2_CPU_SW_AW_COUNT_ID_SHIFT         (8U)
#define GRF_CPU_PEFF_CON2_CPU_SW_AW_COUNT_ID_MASK          (0x1FU << GRF_CPU_PEFF_CON2_CPU_SW_AW_COUNT_ID_SHIFT)        /* 0x00001F00 */
#define GRF_CPU_PEFF_CON2_CPU_SW_AXI_PERF_INT_E_SHIFT      (14U)
#define GRF_CPU_PEFF_CON2_CPU_SW_AXI_PERF_INT_E_MASK       (0x1U << GRF_CPU_PEFF_CON2_CPU_SW_AXI_PERF_INT_E_SHIFT)      /* 0x00004000 */
#define GRF_CPU_PEFF_CON2_CPU_SW_AXI_PERF_INT_CLR_SHIFT    (15U)
#define GRF_CPU_PEFF_CON2_CPU_SW_AXI_PERF_INT_CLR_MASK     (0x1U << GRF_CPU_PEFF_CON2_CPU_SW_AXI_PERF_INT_CLR_SHIFT)    /* 0x00008000 */
/* CPU_PEFF_CON3 */
#define GRF_CPU_PEFF_CON3_CPU_SW_AR_MON_ID_MSK_SHIFT       (0U)
#define GRF_CPU_PEFF_CON3_CPU_SW_AR_MON_ID_MSK_MASK        (0x1U << GRF_CPU_PEFF_CON3_CPU_SW_AR_MON_ID_MSK_SHIFT)       /* 0x00000001 */
#define GRF_CPU_PEFF_CON3_CPU_SW_AR_MON_ID_TYPE_SHIFT      (1U)
#define GRF_CPU_PEFF_CON3_CPU_SW_AR_MON_ID_TYPE_MASK       (0x1U << GRF_CPU_PEFF_CON3_CPU_SW_AR_MON_ID_TYPE_SHIFT)      /* 0x00000002 */
#define GRF_CPU_PEFF_CON3_CPU_SW_AR_MON_ID_BMSK_SHIFT      (4U)
#define GRF_CPU_PEFF_CON3_CPU_SW_AR_MON_ID_BMSK_MASK       (0x3FU << GRF_CPU_PEFF_CON3_CPU_SW_AR_MON_ID_BMSK_SHIFT)     /* 0x000003F0 */
#define GRF_CPU_PEFF_CON3_CPU_SW_AR_MON_ID_SHIFT           (10U)
#define GRF_CPU_PEFF_CON3_CPU_SW_AR_MON_ID_MASK            (0x3FU << GRF_CPU_PEFF_CON3_CPU_SW_AR_MON_ID_SHIFT)          /* 0x0000FC00 */
/* CPU_PEFF_CON4 */
#define GRF_CPU_PEFF_CON4_CPU_SW_AW_MON_ID_MSK_SHIFT       (0U)
#define GRF_CPU_PEFF_CON4_CPU_SW_AW_MON_ID_MSK_MASK        (0x1U << GRF_CPU_PEFF_CON4_CPU_SW_AW_MON_ID_MSK_SHIFT)       /* 0x00000001 */
#define GRF_CPU_PEFF_CON4_CPU_SW_AW_MON_ID_TYPE_SHIFT      (1U)
#define GRF_CPU_PEFF_CON4_CPU_SW_AW_MON_ID_TYPE_MASK       (0x1U << GRF_CPU_PEFF_CON4_CPU_SW_AW_MON_ID_TYPE_SHIFT)      /* 0x00000002 */
#define GRF_CPU_PEFF_CON4_CPU_SW_AW_MON_ID_BMSK_SHIFT      (2U)
#define GRF_CPU_PEFF_CON4_CPU_SW_AW_MON_ID_BMSK_MASK       (0x1FU << GRF_CPU_PEFF_CON4_CPU_SW_AW_MON_ID_BMSK_SHIFT)     /* 0x0000007C */
#define GRF_CPU_PEFF_CON4_CPU_SW_AW_MON_ID_SHIFT           (7U)
#define GRF_CPU_PEFF_CON4_CPU_SW_AW_MON_ID_MASK            (0x1FU << GRF_CPU_PEFF_CON4_CPU_SW_AW_MON_ID_SHIFT)          /* 0x00000F80 */
/* CPU_PEFF_CON5 */
#define GRF_CPU_PEFF_CON5_CPU_SW_ARADDR_MON_ST_SHIFT       (0U)
#define GRF_CPU_PEFF_CON5_CPU_SW_ARADDR_MON_ST_MASK        (0xFFFFFFFFU << GRF_CPU_PEFF_CON5_CPU_SW_ARADDR_MON_ST_SHIFT) /* 0xFFFFFFFF */
/* CPU_PEFF_CON6 */
#define GRF_CPU_PEFF_CON6_CPU_SW_ARADDR_MON_END_SHIFT      (0U)
#define GRF_CPU_PEFF_CON6_CPU_SW_ARADDR_MON_END_MASK       (0xFFFFFFFFU << GRF_CPU_PEFF_CON6_CPU_SW_ARADDR_MON_END_SHIFT) /* 0xFFFFFFFF */
/* CPU_PEFF_CON7 */
#define GRF_CPU_PEFF_CON7_CPU_SW_AWADDR_MON_ST_SHIFT       (0U)
#define GRF_CPU_PEFF_CON7_CPU_SW_AWADDR_MON_ST_MASK        (0xFFFFFFFFU << GRF_CPU_PEFF_CON7_CPU_SW_AWADDR_MON_ST_SHIFT) /* 0xFFFFFFFF */
/* CPU_PEFF_CON8 */
#define GRF_CPU_PEFF_CON8_CPU_SW_AWADDR_MON_END_SHIFT      (0U)
#define GRF_CPU_PEFF_CON8_CPU_SW_AWADDR_MON_END_MASK       (0xFFFFFFFFU << GRF_CPU_PEFF_CON8_CPU_SW_AWADDR_MON_END_SHIFT) /* 0xFFFFFFFF */
/* GIC_BASE_CON */
#define GRF_GIC_BASE_CON_GIC_BASE_ADDR_SHIFT               (0U)
#define GRF_GIC_BASE_CON_GIC_BASE_ADDR_MASK                (0xFFFFU << GRF_GIC_BASE_CON_GIC_BASE_ADDR_SHIFT)            /* 0x0000FFFF */
/* CPU_PERF_RD_MAX_LATENCY_NUM */
#define GRF_CPU_PERF_RD_MAX_LATENCY_NUM_RD_MAX_LATENCY_R_SHIFT (0U)
#define GRF_CPU_PERF_RD_MAX_LATENCY_NUM_RD_MAX_LATENCY_R_MASK (0x1FFFU << GRF_CPU_PERF_RD_MAX_LATENCY_NUM_RD_MAX_LATENCY_R_SHIFT) /* 0x00001FFF */
/* CPU_PERF_RD_LATENCY_SAMP_NUM */
#define GRF_CPU_PERF_RD_LATENCY_SAMP_NUM_RD_LATENCY_SAMP_R_SHIFT (0U)
#define GRF_CPU_PERF_RD_LATENCY_SAMP_NUM_RD_LATENCY_SAMP_R_MASK (0x7FFFFFFU << GRF_CPU_PERF_RD_LATENCY_SAMP_NUM_RD_LATENCY_SAMP_R_SHIFT) /* 0x07FFFFFF */
/* CPU_PERF_RD_LATENCY_ACC_NUM */
#define GRF_CPU_PERF_RD_LATENCY_ACC_NUM_RD_LATENCY_ACC_CNT_R_SHIFT (0U)
#define GRF_CPU_PERF_RD_LATENCY_ACC_NUM_RD_LATENCY_ACC_CNT_R_MASK (0xFFFFFFFFU << GRF_CPU_PERF_RD_LATENCY_ACC_NUM_RD_LATENCY_ACC_CNT_R_SHIFT) /* 0xFFFFFFFF */
/* CPU_PERF_RD_AXI_TOTAL_BYTE */
#define GRF_CPU_PERF_RD_AXI_TOTAL_BYTE_RD_AXI_TOTAL_BYTE_SHIFT (0U)
#define GRF_CPU_PERF_RD_AXI_TOTAL_BYTE_RD_AXI_TOTAL_BYTE_MASK (0xFFFFFFFFU << GRF_CPU_PERF_RD_AXI_TOTAL_BYTE_RD_AXI_TOTAL_BYTE_SHIFT) /* 0xFFFFFFFF */
/* CPU_PERF_WR_AXI_TOTAL_BYTE */
#define GRF_CPU_PERF_WR_AXI_TOTAL_BYTE_WR_AXI_TOTAL_BYTE_SHIFT (0U)
#define GRF_CPU_PERF_WR_AXI_TOTAL_BYTE_WR_AXI_TOTAL_BYTE_MASK (0xFFFFFFFFU << GRF_CPU_PERF_WR_AXI_TOTAL_BYTE_WR_AXI_TOTAL_BYTE_SHIFT) /* 0xFFFFFFFF */
/* CPU_PERF_WORKING_CNT */
#define GRF_CPU_PERF_WORKING_CNT_WORKING_CNT_R_SHIFT       (0U)
#define GRF_CPU_PERF_WORKING_CNT_WORKING_CNT_R_MASK        (0xFFFFFFFFU << GRF_CPU_PERF_WORKING_CNT_WORKING_CNT_R_SHIFT) /* 0xFFFFFFFF */
/* CPU_PERF_INT_STATUS */
#define GRF_CPU_PERF_INT_STATUS_A35_AR_MON_AXI_HIT_FLAG_SHIFT (0U)
#define GRF_CPU_PERF_INT_STATUS_A35_AR_MON_AXI_HIT_FLAG_MASK (0x1U << GRF_CPU_PERF_INT_STATUS_A35_AR_MON_AXI_HIT_FLAG_SHIFT) /* 0x00000001 */
#define GRF_CPU_PERF_INT_STATUS_A35_AR_MON_AXI_ID_STATUS_SHIFT (8U)
#define GRF_CPU_PERF_INT_STATUS_A35_AR_MON_AXI_ID_STATUS_MASK (0x7FU << GRF_CPU_PERF_INT_STATUS_A35_AR_MON_AXI_ID_STATUS_SHIFT) /* 0x00007F00 */
#define GRF_CPU_PERF_INT_STATUS_A35_AW_MON_AXI_HIT_FLAG_SHIFT (16U)
#define GRF_CPU_PERF_INT_STATUS_A35_AW_MON_AXI_HIT_FLAG_MASK (0x1U << GRF_CPU_PERF_INT_STATUS_A35_AW_MON_AXI_HIT_FLAG_SHIFT) /* 0x00010000 */
#define GRF_CPU_PERF_INT_STATUS_A35_AW_MON_AXI_ID_STATUS_SHIFT (24U)
#define GRF_CPU_PERF_INT_STATUS_A35_AW_MON_AXI_ID_STATUS_MASK (0x7FU << GRF_CPU_PERF_INT_STATUS_A35_AW_MON_AXI_ID_STATUS_SHIFT) /* 0x7F000000 */
/* COREPVTM_CON0 */
#define GRF_COREPVTM_CON0_COREPVTM_START_SHIFT             (0U)
#define GRF_COREPVTM_CON0_COREPVTM_START_MASK              (0x1U << GRF_COREPVTM_CON0_COREPVTM_START_SHIFT)             /* 0x00000001 */
#define GRF_COREPVTM_CON0_COREPVTM_OSC_EN_SHIFT            (1U)
#define GRF_COREPVTM_CON0_COREPVTM_OSC_EN_MASK             (0x1U << GRF_COREPVTM_CON0_COREPVTM_OSC_EN_SHIFT)            /* 0x00000002 */
#define GRF_COREPVTM_CON0_COREPVTM_OSC_SEL_SHIFT           (2U)
#define GRF_COREPVTM_CON0_COREPVTM_OSC_SEL_MASK            (0x7U << GRF_COREPVTM_CON0_COREPVTM_OSC_SEL_SHIFT)           /* 0x0000001C */
/* COREPVTM_CON1 */
#define GRF_COREPVTM_CON1_COREPVTM_CAL_CNT_SHIFT           (0U)
#define GRF_COREPVTM_CON1_COREPVTM_CAL_CNT_MASK            (0xFFFFFFFFU << GRF_COREPVTM_CON1_COREPVTM_CAL_CNT_SHIFT)    /* 0xFFFFFFFF */
/* COREPVTM_STATUS0 */
#define GRF_COREPVTM_STATUS0_COREPVTM_FREQ_DONE_SHIFT      (0U)
#define GRF_COREPVTM_STATUS0_COREPVTM_FREQ_DONE_MASK       (0x1U << GRF_COREPVTM_STATUS0_COREPVTM_FREQ_DONE_SHIFT)      /* 0x00000001 */
/* COREPVTM_STATUS1 */
#define GRF_COREPVTM_STATUS1_COREPVTM_FREQ_CNT_SHIFT       (0U)
#define GRF_COREPVTM_STATUS1_COREPVTM_FREQ_CNT_MASK        (0xFFFFFFFFU << GRF_COREPVTM_STATUS1_COREPVTM_FREQ_CNT_SHIFT) /* 0xFFFFFFFF */
/******************************************SGRF******************************************/
/* SOC_CON2 */
#define SGRF_SOC_CON2_ACLK_DMAC_EN_SHIFT                   (0U)
#define SGRF_SOC_CON2_ACLK_DMAC_EN_MASK                    (0x1U << SGRF_SOC_CON2_ACLK_DMAC_EN_SHIFT)                   /* 0x00000001 */
#define SGRF_SOC_CON2_PCLK_STIMER0_EN_SHIFT                (1U)
#define SGRF_SOC_CON2_PCLK_STIMER0_EN_MASK                 (0x1U << SGRF_SOC_CON2_PCLK_STIMER0_EN_SHIFT)                /* 0x00000002 */
#define SGRF_SOC_CON2_PCLK_WDT_S_EN_SHIFT                  (2U)
#define SGRF_SOC_CON2_PCLK_WDT_S_EN_MASK                   (0x1U << SGRF_SOC_CON2_PCLK_WDT_S_EN_SHIFT)                  /* 0x00000004 */
#define SGRF_SOC_CON2_ARESETN_DMAC_REQ_SHIFT               (3U)
#define SGRF_SOC_CON2_ARESETN_DMAC_REQ_MASK                (0x1U << SGRF_SOC_CON2_ARESETN_DMAC_REQ_SHIFT)               /* 0x00000008 */
#define SGRF_SOC_CON2_PRESETN_STIMER0_REQ_SHIFT            (4U)
#define SGRF_SOC_CON2_PRESETN_STIMER0_REQ_MASK             (0x1U << SGRF_SOC_CON2_PRESETN_STIMER0_REQ_SHIFT)            /* 0x00000010 */
#define SGRF_SOC_CON2_RESETN_STIMER0_SRC_SHIFT             (5U)
#define SGRF_SOC_CON2_RESETN_STIMER0_SRC_MASK              (0x1U << SGRF_SOC_CON2_RESETN_STIMER0_SRC_SHIFT)             /* 0x00000020 */
#define SGRF_SOC_CON2_RESETN_STIMER1_SRC_SHIFT             (6U)
#define SGRF_SOC_CON2_RESETN_STIMER1_SRC_MASK              (0x1U << SGRF_SOC_CON2_RESETN_STIMER1_SRC_SHIFT)             /* 0x00000040 */
#define SGRF_SOC_CON2_PRESETN_WDT_S_SRC_SHIFT              (7U)
#define SGRF_SOC_CON2_PRESETN_WDT_S_SRC_MASK               (0x1U << SGRF_SOC_CON2_PRESETN_WDT_S_SRC_SHIFT)              /* 0x00000080 */
#define SGRF_SOC_CON2_PRESETN_EFUSES_SRC_SHIFT             (8U)
#define SGRF_SOC_CON2_PRESETN_EFUSES_SRC_MASK              (0x1U << SGRF_SOC_CON2_PRESETN_EFUSES_SRC_SHIFT)             /* 0x00000100 */
#define SGRF_SOC_CON2_RESETN_EFUSES_SRC_SHIFT              (9U)
#define SGRF_SOC_CON2_RESETN_EFUSES_SRC_MASK               (0x1U << SGRF_SOC_CON2_RESETN_EFUSES_SRC_SHIFT)              /* 0x00000200 */
#define SGRF_SOC_CON2_SGRF_CLK_STIMER0_EN_SHIFT            (10U)
#define SGRF_SOC_CON2_SGRF_CLK_STIMER0_EN_MASK             (0x1U << SGRF_SOC_CON2_SGRF_CLK_STIMER0_EN_SHIFT)            /* 0x00000400 */
#define SGRF_SOC_CON2_SGRF_CLK_STIMER1_EN_SHIFT            (11U)
#define SGRF_SOC_CON2_SGRF_CLK_STIMER1_EN_MASK             (0x1U << SGRF_SOC_CON2_SGRF_CLK_STIMER1_EN_SHIFT)            /* 0x00000800 */
#define SGRF_SOC_CON2_EFUSE_SECURITY_SELECTION_SHIFT       (12U)
#define SGRF_SOC_CON2_EFUSE_SECURITY_SELECTION_MASK        (0x1U << SGRF_SOC_CON2_EFUSE_SECURITY_SELECTION_SHIFT)       /* 0x00001000 */
#define SGRF_SOC_CON2_PCLK_EFUSES_EN_SHIFT                 (13U)
#define SGRF_SOC_CON2_PCLK_EFUSES_EN_MASK                  (0x1U << SGRF_SOC_CON2_PCLK_EFUSES_EN_SHIFT)                 /* 0x00002000 */
#define SGRF_SOC_CON2_WDTS_GLB_RESET_EN_SHIFT              (14U)
#define SGRF_SOC_CON2_WDTS_GLB_RESET_EN_MASK               (0x1U << SGRF_SOC_CON2_WDTS_GLB_RESET_EN_SHIFT)              /* 0x00004000 */
#define SGRF_SOC_CON2_MSCH_AXI_BYPASS_ALL_SHIFT            (15U)
#define SGRF_SOC_CON2_MSCH_AXI_BYPASS_ALL_MASK             (0x1U << SGRF_SOC_CON2_MSCH_AXI_BYPASS_ALL_SHIFT)            /* 0x00008000 */
/* SOC_CON3 */
#define SGRF_SOC_CON3_CRYPTOM_ARPROT_SECURE_CTRL_SHIFT     (0U)
#define SGRF_SOC_CON3_CRYPTOM_ARPROT_SECURE_CTRL_MASK      (0x1U << SGRF_SOC_CON3_CRYPTOM_ARPROT_SECURE_CTRL_SHIFT)     /* 0x00000001 */
#define SGRF_SOC_CON3_CRYPTOM_AWPROT_SECURE_CTRL_SHIFT     (1U)
#define SGRF_SOC_CON3_CRYPTOM_AWPROT_SECURE_CTRL_MASK      (0x1U << SGRF_SOC_CON3_CRYPTOM_AWPROT_SECURE_CTRL_SHIFT)     /* 0x00000002 */
#define SGRF_SOC_CON3_DCFM_ARPROT_SECURE_CTRL_SHIFT        (2U)
#define SGRF_SOC_CON3_DCFM_ARPROT_SECURE_CTRL_MASK         (0x1U << SGRF_SOC_CON3_DCFM_ARPROT_SECURE_CTRL_SHIFT)        /* 0x00000004 */
#define SGRF_SOC_CON3_DCFM_AWPROT_SECURE_CTRL_SHIFT        (3U)
#define SGRF_SOC_CON3_DCFM_AWPROT_SECURE_CTRL_MASK         (0x1U << SGRF_SOC_CON3_DCFM_AWPROT_SECURE_CTRL_SHIFT)        /* 0x00000008 */
#define SGRF_SOC_CON3_PCIEM_ARPROT_SECURE_CTRL_SHIFT       (4U)
#define SGRF_SOC_CON3_PCIEM_ARPROT_SECURE_CTRL_MASK        (0x1U << SGRF_SOC_CON3_PCIEM_ARPROT_SECURE_CTRL_SHIFT)       /* 0x00000010 */
#define SGRF_SOC_CON3_PCIEM_AWPROT_SECURE_CTRL_SHIFT       (5U)
#define SGRF_SOC_CON3_PCIEM_AWPROT_SECURE_CTRL_MASK        (0x1U << SGRF_SOC_CON3_PCIEM_AWPROT_SECURE_CTRL_SHIFT)       /* 0x00000020 */
#define SGRF_SOC_CON3_USB3M_ARPROT_SECURE_CTRL_SHIFT       (6U)
#define SGRF_SOC_CON3_USB3M_ARPROT_SECURE_CTRL_MASK        (0x1U << SGRF_SOC_CON3_USB3M_ARPROT_SECURE_CTRL_SHIFT)       /* 0x00000040 */
#define SGRF_SOC_CON3_USB3M_AWPROT_SECURE_CTRL_SHIFT       (7U)
#define SGRF_SOC_CON3_USB3M_AWPROT_SECURE_CTRL_MASK        (0x1U << SGRF_SOC_CON3_USB3M_AWPROT_SECURE_CTRL_SHIFT)       /* 0x00000080 */
/* SOC_CON4 */
#define SGRF_SOC_CON4_PCIE_CTRL_SECURITY_CTRL_SHIFT        (0U)
#define SGRF_SOC_CON4_PCIE_CTRL_SECURITY_CTRL_MASK         (0x1U << SGRF_SOC_CON4_PCIE_CTRL_SECURITY_CTRL_SHIFT)        /* 0x00000001 */
#define SGRF_SOC_CON4_USB3_SECURITY_CTRL_SHIFT             (1U)
#define SGRF_SOC_CON4_USB3_SECURITY_CTRL_MASK              (0x1U << SGRF_SOC_CON4_USB3_SECURITY_CTRL_SHIFT)             /* 0x00000002 */
#define SGRF_SOC_CON4_GRF_SECURITY_CTRL_SHIFT              (2U)
#define SGRF_SOC_CON4_GRF_SECURITY_CTRL_MASK               (0x1U << SGRF_SOC_CON4_GRF_SECURITY_CTRL_SHIFT)              /* 0x00000004 */
#define SGRF_SOC_CON4_NOC_SRV_SECURITY_CTRL_SHIFT          (3U)
#define SGRF_SOC_CON4_NOC_SRV_SECURITY_CTRL_MASK           (0x1U << SGRF_SOC_CON4_NOC_SRV_SECURITY_CTRL_SHIFT)          /* 0x00000008 */
#define SGRF_SOC_CON4_DEBUG_SECURITY_CTRL_SHIFT            (4U)
#define SGRF_SOC_CON4_DEBUG_SECURITY_CTRL_MASK             (0x1U << SGRF_SOC_CON4_DEBUG_SECURITY_CTRL_SHIFT)            /* 0x00000010 */
#define SGRF_SOC_CON4_GIC_SECURITY_CTRL_SHIFT              (5U)
#define SGRF_SOC_CON4_GIC_SECURITY_CTRL_MASK               (0x1U << SGRF_SOC_CON4_GIC_SECURITY_CTRL_SHIFT)              /* 0x00000020 */
#define SGRF_SOC_CON4_DDR_PHY_SECURITY_CTRL_SHIFT          (6U)
#define SGRF_SOC_CON4_DDR_PHY_SECURITY_CTRL_MASK           (0x1U << SGRF_SOC_CON4_DDR_PHY_SECURITY_CTRL_SHIFT)          /* 0x00000040 */
#define SGRF_SOC_CON4_CRU_SECURITY_CTRL_SHIFT              (7U)
#define SGRF_SOC_CON4_CRU_SECURITY_CTRL_MASK               (0x1U << SGRF_SOC_CON4_CRU_SECURITY_CTRL_SHIFT)              /* 0x00000080 */
#define SGRF_SOC_CON4_CSI_PHY_SECURITY_CTRL_SHIFT          (8U)
#define SGRF_SOC_CON4_CSI_PHY_SECURITY_CTRL_MASK           (0x1U << SGRF_SOC_CON4_CSI_PHY_SECURITY_CTRL_SHIFT)          /* 0x00000100 */
#define SGRF_SOC_CON4_DSI_PHY_SECURITY_CTRL_SHIFT          (9U)
#define SGRF_SOC_CON4_DSI_PHY_SECURITY_CTRL_MASK           (0x1U << SGRF_SOC_CON4_DSI_PHY_SECURITY_CTRL_SHIFT)          /* 0x00000200 */
#define SGRF_SOC_CON4_DFICTRL_SECURITY_CTRL_SHIFT          (10U)
#define SGRF_SOC_CON4_DFICTRL_SECURITY_CTRL_MASK           (0x1U << SGRF_SOC_CON4_DFICTRL_SECURITY_CTRL_SHIFT)          /* 0x00000400 */
#define SGRF_SOC_CON4_USB3_PHY_SECURITY_CTRL_SHIFT         (11U)
#define SGRF_SOC_CON4_USB3_PHY_SECURITY_CTRL_MASK          (0x1U << SGRF_SOC_CON4_USB3_PHY_SECURITY_CTRL_SHIFT)         /* 0x00000800 */
#define SGRF_SOC_CON4_TSADC_SECURITY_CTRL_SHIFT            (12U)
#define SGRF_SOC_CON4_TSADC_SECURITY_CTRL_MASK             (0x1U << SGRF_SOC_CON4_TSADC_SECURITY_CTRL_SHIFT)            /* 0x00001000 */
#define SGRF_SOC_CON4_NSEFUSE_SECURITY_CTRL_SHIFT          (13U)
#define SGRF_SOC_CON4_NSEFUSE_SECURITY_CTRL_MASK           (0x1U << SGRF_SOC_CON4_NSEFUSE_SECURITY_CTRL_SHIFT)          /* 0x00002000 */
#define SGRF_SOC_CON4_SARADC_SECURITY_CTRL_SHIFT           (14U)
#define SGRF_SOC_CON4_SARADC_SECURITY_CTRL_MASK            (0x1U << SGRF_SOC_CON4_SARADC_SECURITY_CTRL_SHIFT)           /* 0x00004000 */
#define SGRF_SOC_CON4_I2C0_SECURITY_CTRL_SHIFT             (15U)
#define SGRF_SOC_CON4_I2C0_SECURITY_CTRL_MASK              (0x1U << SGRF_SOC_CON4_I2C0_SECURITY_CTRL_SHIFT)             /* 0x00008000 */
/* SOC_CON5 */
#define SGRF_SOC_CON5_I2C1_SECURITY_CTRL_SHIFT             (0U)
#define SGRF_SOC_CON5_I2C1_SECURITY_CTRL_MASK              (0x1U << SGRF_SOC_CON5_I2C1_SECURITY_CTRL_SHIFT)             /* 0x00000001 */
#define SGRF_SOC_CON5_I2C2_SECURITY_CTRL_SHIFT             (1U)
#define SGRF_SOC_CON5_I2C2_SECURITY_CTRL_MASK              (0x1U << SGRF_SOC_CON5_I2C2_SECURITY_CTRL_SHIFT)             /* 0x00000002 */
#define SGRF_SOC_CON5_I2C3_SECURITY_CTRL_SHIFT             (2U)
#define SGRF_SOC_CON5_I2C3_SECURITY_CTRL_MASK              (0x1U << SGRF_SOC_CON5_I2C3_SECURITY_CTRL_SHIFT)             /* 0x00000004 */
#define SGRF_SOC_CON5_I2C4_SECURITY_CTRL_SHIFT             (3U)
#define SGRF_SOC_CON5_I2C4_SECURITY_CTRL_MASK              (0x1U << SGRF_SOC_CON5_I2C4_SECURITY_CTRL_SHIFT)             /* 0x00000008 */
#define SGRF_SOC_CON5_I2C5_SECURITY_CTRL_SHIFT             (4U)
#define SGRF_SOC_CON5_I2C5_SECURITY_CTRL_MASK              (0x1U << SGRF_SOC_CON5_I2C5_SECURITY_CTRL_SHIFT)             /* 0x00000010 */
#define SGRF_SOC_CON5_SPI0_SECURITY_CTRL_SHIFT             (5U)
#define SGRF_SOC_CON5_SPI0_SECURITY_CTRL_MASK              (0x1U << SGRF_SOC_CON5_SPI0_SECURITY_CTRL_SHIFT)             /* 0x00000020 */
#define SGRF_SOC_CON5_SPI1_SECURITY_CTRL_SHIFT             (6U)
#define SGRF_SOC_CON5_SPI1_SECURITY_CTRL_MASK              (0x1U << SGRF_SOC_CON5_SPI1_SECURITY_CTRL_SHIFT)             /* 0x00000040 */
#define SGRF_SOC_CON5_SPI2_SECURITY_CTRL_SHIFT             (7U)
#define SGRF_SOC_CON5_SPI2_SECURITY_CTRL_MASK              (0x1U << SGRF_SOC_CON5_SPI2_SECURITY_CTRL_SHIFT)             /* 0x00000080 */
#define SGRF_SOC_CON5_UART0_SECURITY_CTRL_SHIFT            (8U)
#define SGRF_SOC_CON5_UART0_SECURITY_CTRL_MASK             (0x1U << SGRF_SOC_CON5_UART0_SECURITY_CTRL_SHIFT)            /* 0x00000100 */
#define SGRF_SOC_CON5_UART1_SECURITY_CTRL_SHIFT            (9U)
#define SGRF_SOC_CON5_UART1_SECURITY_CTRL_MASK             (0x1U << SGRF_SOC_CON5_UART1_SECURITY_CTRL_SHIFT)            /* 0x00000200 */
#define SGRF_SOC_CON5_UART2_SECURITY_CTRL_SHIFT            (10U)
#define SGRF_SOC_CON5_UART2_SECURITY_CTRL_MASK             (0x1U << SGRF_SOC_CON5_UART2_SECURITY_CTRL_SHIFT)            /* 0x00000400 */
#define SGRF_SOC_CON5_UART3_SECURITY_CTRL_SHIFT            (11U)
#define SGRF_SOC_CON5_UART3_SECURITY_CTRL_MASK             (0x1U << SGRF_SOC_CON5_UART3_SECURITY_CTRL_SHIFT)            /* 0x00000800 */
#define SGRF_SOC_CON5_UART4_SECURITY_CTRL_SHIFT            (12U)
#define SGRF_SOC_CON5_UART4_SECURITY_CTRL_MASK             (0x1U << SGRF_SOC_CON5_UART4_SECURITY_CTRL_SHIFT)            /* 0x00001000 */
#define SGRF_SOC_CON5_UART5_SECURITY_CTRL_SHIFT            (13U)
#define SGRF_SOC_CON5_UART5_SECURITY_CTRL_MASK             (0x1U << SGRF_SOC_CON5_UART5_SECURITY_CTRL_SHIFT)            /* 0x00002000 */
#define SGRF_SOC_CON5_UART6_SECURITY_CTRL_SHIFT            (14U)
#define SGRF_SOC_CON5_UART6_SECURITY_CTRL_MASK             (0x1U << SGRF_SOC_CON5_UART6_SECURITY_CTRL_SHIFT)            /* 0x00004000 */
#define SGRF_SOC_CON5_UART7_SECURITY_CTRL_SHIFT            (15U)
#define SGRF_SOC_CON5_UART7_SECURITY_CTRL_MASK             (0x1U << SGRF_SOC_CON5_UART7_SECURITY_CTRL_SHIFT)            /* 0x00008000 */
/* SOC_CON6 */
#define SGRF_SOC_CON6_CRYPTO_SECURITY_CTRL_SHIFT           (0U)
#define SGRF_SOC_CON6_CRYPTO_SECURITY_CTRL_MASK            (0x1U << SGRF_SOC_CON6_CRYPTO_SECURITY_CTRL_SHIFT)           /* 0x00000001 */
#define SGRF_SOC_CON6_DCF_SECURITY_CTRL_SHIFT              (1U)
#define SGRF_SOC_CON6_DCF_SECURITY_CTRL_MASK               (0x1U << SGRF_SOC_CON6_DCF_SECURITY_CTRL_SHIFT)              /* 0x00000002 */
#define SGRF_SOC_CON6_GPIO1_SECURITY_CTRL_SHIFT            (2U)
#define SGRF_SOC_CON6_GPIO1_SECURITY_CTRL_MASK             (0x1U << SGRF_SOC_CON6_GPIO1_SECURITY_CTRL_SHIFT)            /* 0x00000004 */
#define SGRF_SOC_CON6_GPIO2_SECURITY_CTRL_SHIFT            (3U)
#define SGRF_SOC_CON6_GPIO2_SECURITY_CTRL_MASK             (0x1U << SGRF_SOC_CON6_GPIO2_SECURITY_CTRL_SHIFT)            /* 0x00000008 */
#define SGRF_SOC_CON6_GPIO3_SECURITY_CTRL_SHIFT            (4U)
#define SGRF_SOC_CON6_GPIO3_SECURITY_CTRL_MASK             (0x1U << SGRF_SOC_CON6_GPIO3_SECURITY_CTRL_SHIFT)            /* 0x00000010 */
#define SGRF_SOC_CON6_NSTIMER_SECURITY_CTRL_SHIFT          (5U)
#define SGRF_SOC_CON6_NSTIMER_SECURITY_CTRL_MASK           (0x1U << SGRF_SOC_CON6_NSTIMER_SECURITY_CTRL_SHIFT)          /* 0x00000020 */
#define SGRF_SOC_CON6_PWM0_SECURITY_CTRL_SHIFT             (6U)
#define SGRF_SOC_CON6_PWM0_SECURITY_CTRL_MASK              (0x1U << SGRF_SOC_CON6_PWM0_SECURITY_CTRL_SHIFT)             /* 0x00000040 */
#define SGRF_SOC_CON6_PWM1_SECURITY_CTRL_SHIFT             (7U)
#define SGRF_SOC_CON6_PWM1_SECURITY_CTRL_MASK              (0x1U << SGRF_SOC_CON6_PWM1_SECURITY_CTRL_SHIFT)             /* 0x00000080 */
#define SGRF_SOC_CON6_PWM2_SECURITY_CTRL_SHIFT             (8U)
#define SGRF_SOC_CON6_PWM2_SECURITY_CTRL_MASK              (0x1U << SGRF_SOC_CON6_PWM2_SECURITY_CTRL_SHIFT)             /* 0x00000100 */
#define SGRF_SOC_CON6_NSWDT_SECURITY_CTRL_SHIFT            (9U)
#define SGRF_SOC_CON6_NSWDT_SECURITY_CTRL_MASK             (0x1U << SGRF_SOC_CON6_NSWDT_SECURITY_CTRL_SHIFT)            /* 0x00000200 */
#define SGRF_SOC_CON6_I2S0_SECURITY_CTRL_SHIFT             (10U)
#define SGRF_SOC_CON6_I2S0_SECURITY_CTRL_MASK              (0x1U << SGRF_SOC_CON6_I2S0_SECURITY_CTRL_SHIFT)             /* 0x00000400 */
#define SGRF_SOC_CON6_I2S1_SECURITY_CTRL_SHIFT             (11U)
#define SGRF_SOC_CON6_I2S1_SECURITY_CTRL_MASK              (0x1U << SGRF_SOC_CON6_I2S1_SECURITY_CTRL_SHIFT)             /* 0x00000800 */
#define SGRF_SOC_CON6_PDM_SECURITY_CTRL_SHIFT              (12U)
#define SGRF_SOC_CON6_PDM_SECURITY_CTRL_MASK               (0x1U << SGRF_SOC_CON6_PDM_SECURITY_CTRL_SHIFT)              /* 0x00001000 */
#define SGRF_SOC_CON6_VAD_SECURITY_CTRL_SHIFT              (13U)
#define SGRF_SOC_CON6_VAD_SECURITY_CTRL_MASK               (0x1U << SGRF_SOC_CON6_VAD_SECURITY_CTRL_SHIFT)              /* 0x00002000 */
#define SGRF_SOC_CON6_DDR_STDBY_SECURITY_CTRL_SHIFT        (14U)
#define SGRF_SOC_CON6_DDR_STDBY_SECURITY_CTRL_MASK         (0x1U << SGRF_SOC_CON6_DDR_STDBY_SECURITY_CTRL_SHIFT)        /* 0x00004000 */
#define SGRF_SOC_CON6_DDR_MON_SECURITY_CTRL_SHIFT          (15U)
#define SGRF_SOC_CON6_DDR_MON_SECURITY_CTRL_MASK           (0x1U << SGRF_SOC_CON6_DDR_MON_SECURITY_CTRL_SHIFT)          /* 0x00008000 */
/* SOC_CON7 */
#define SGRF_SOC_CON7_UPCTL_SECURITY_CTRL_SHIFT            (0U)
#define SGRF_SOC_CON7_UPCTL_SECURITY_CTRL_MASK             (0x1U << SGRF_SOC_CON7_UPCTL_SECURITY_CTRL_SHIFT)            /* 0x00000001 */
#define SGRF_SOC_CON7_CIF_SECURITY_CTRL_SHIFT              (1U)
#define SGRF_SOC_CON7_CIF_SECURITY_CTRL_MASK               (0x1U << SGRF_SOC_CON7_CIF_SECURITY_CTRL_SHIFT)              /* 0x00000002 */
#define SGRF_SOC_CON7_RGA_SECURITY_CTRL_SHIFT              (2U)
#define SGRF_SOC_CON7_RGA_SECURITY_CTRL_MASK               (0x1U << SGRF_SOC_CON7_RGA_SECURITY_CTRL_SHIFT)              /* 0x00000004 */
#define SGRF_SOC_CON7_VOP_LITE_SECURITY_CTRL_SHIFT         (3U)
#define SGRF_SOC_CON7_VOP_LITE_SECURITY_CTRL_MASK          (0x1U << SGRF_SOC_CON7_VOP_LITE_SECURITY_CTRL_SHIFT)         /* 0x00000008 */
#define SGRF_SOC_CON7_CSI_RX_SECURITY_CTRL_SHIFT           (4U)
#define SGRF_SOC_CON7_CSI_RX_SECURITY_CTRL_MASK            (0x1U << SGRF_SOC_CON7_CSI_RX_SECURITY_CTRL_SHIFT)           /* 0x00000010 */
#define SGRF_SOC_CON7_CSI_TX_SECURITY_CTRL_SHIFT           (5U)
#define SGRF_SOC_CON7_CSI_TX_SECURITY_CTRL_MASK            (0x1U << SGRF_SOC_CON7_CSI_TX_SECURITY_CTRL_SHIFT)           /* 0x00000020 */
#define SGRF_SOC_CON7_DSI_SECURITY_CTRL_SHIFT              (6U)
#define SGRF_SOC_CON7_DSI_SECURITY_CTRL_MASK               (0x1U << SGRF_SOC_CON7_DSI_SECURITY_CTRL_SHIFT)              /* 0x00000040 */
#define SGRF_SOC_CON7_VOP_RAW_SECURITY_CTRL_SHIFT          (7U)
#define SGRF_SOC_CON7_VOP_RAW_SECURITY_CTRL_MASK           (0x1U << SGRF_SOC_CON7_VOP_RAW_SECURITY_CTRL_SHIFT)          /* 0x00000080 */
#define SGRF_SOC_CON7_DLNN_SECURITY_CTRL_SHIFT             (8U)
#define SGRF_SOC_CON7_DLNN_SECURITY_CTRL_MASK              (0x1U << SGRF_SOC_CON7_DLNN_SECURITY_CTRL_SHIFT)             /* 0x00000100 */
#define SGRF_SOC_CON7_SFC_SECURITY_CTRL_SHIFT              (9U)
#define SGRF_SOC_CON7_SFC_SECURITY_CTRL_MASK               (0x1U << SGRF_SOC_CON7_SFC_SECURITY_CTRL_SHIFT)              /* 0x00000200 */
#define SGRF_SOC_CON7_SDIO_SECURITY_CTRL_SHIFT             (10U)
#define SGRF_SOC_CON7_SDIO_SECURITY_CTRL_MASK              (0x1U << SGRF_SOC_CON7_SDIO_SECURITY_CTRL_SHIFT)             /* 0x00000400 */
#define SGRF_SOC_CON7_SDMMC_SECURITY_CTRL_SHIFT            (11U)
#define SGRF_SOC_CON7_SDMMC_SECURITY_CTRL_MASK             (0x1U << SGRF_SOC_CON7_SDMMC_SECURITY_CTRL_SHIFT)            /* 0x00000800 */
#define SGRF_SOC_CON7_EMMC_SECURITY_CTRL_SHIFT             (12U)
#define SGRF_SOC_CON7_EMMC_SECURITY_CTRL_MASK              (0x1U << SGRF_SOC_CON7_EMMC_SECURITY_CTRL_SHIFT)             /* 0x00001000 */
#define SGRF_SOC_CON7_USB2_HOST_SECURITY_CTRL_SHIFT        (13U)
#define SGRF_SOC_CON7_USB2_HOST_SECURITY_CTRL_MASK         (0x1U << SGRF_SOC_CON7_USB2_HOST_SECURITY_CTRL_SHIFT)        /* 0x00002000 */
#define SGRF_SOC_CON7_GMAC_SECURITY_CTRL_SHIFT             (14U)
#define SGRF_SOC_CON7_GMAC_SECURITY_CTRL_MASK              (0x1U << SGRF_SOC_CON7_GMAC_SECURITY_CTRL_SHIFT)             /* 0x00004000 */
#define SGRF_SOC_CON7_VPU_SECURITY_CTRL_SHIFT              (15U)
#define SGRF_SOC_CON7_VPU_SECURITY_CTRL_MASK               (0x1U << SGRF_SOC_CON7_VPU_SECURITY_CTRL_SHIFT)              /* 0x00008000 */
/* SOC_CON8 */
#define SGRF_SOC_CON8_ISP_SECURITY_CTRL_SHIFT              (0U)
#define SGRF_SOC_CON8_ISP_SECURITY_CTRL_MASK               (0x1U << SGRF_SOC_CON8_ISP_SECURITY_CTRL_SHIFT)              /* 0x00000001 */
#define SGRF_SOC_CON8_GPIO_SECURITY_CTRL_SHIFT             (1U)
#define SGRF_SOC_CON8_GPIO_SECURITY_CTRL_MASK              (0x1U << SGRF_SOC_CON8_GPIO_SECURITY_CTRL_SHIFT)             /* 0x00000002 */
#define SGRF_SOC_CON8_DMA_NS_SECURITY_CTRL_SHIFT           (2U)
#define SGRF_SOC_CON8_DMA_NS_SECURITY_CTRL_MASK            (0x1U << SGRF_SOC_CON8_DMA_NS_SECURITY_CTRL_SHIFT)           /* 0x00000004 */
#define SGRF_SOC_CON8_PMU_SECURITY_CTRL_SHIFT              (3U)
#define SGRF_SOC_CON8_PMU_SECURITY_CTRL_MASK               (0x1U << SGRF_SOC_CON8_PMU_SECURITY_CTRL_SHIFT)              /* 0x00000008 */
#define SGRF_SOC_CON8_SPINLOCK_SECURITY_CTRL_SHIFT         (4U)
#define SGRF_SOC_CON8_SPINLOCK_SECURITY_CTRL_MASK          (0x1U << SGRF_SOC_CON8_SPINLOCK_SECURITY_CTRL_SHIFT)         /* 0x00000010 */
/* DMAC_CON0 */
#define SGRF_DMAC_CON0_DMA_IRQ_BOOT_NONSEC_SHIFT           (0U)
#define SGRF_DMAC_CON0_DMA_IRQ_BOOT_NONSEC_MASK            (0xFFFFU << SGRF_DMAC_CON0_DMA_IRQ_BOOT_NONSEC_SHIFT)        /* 0x0000FFFF */
/* DMAC_CON1 */
#define SGRF_DMAC_CON1_DMA_PERI_CH_NONSEC_15_0_SHIFT       (0U)
#define SGRF_DMAC_CON1_DMA_PERI_CH_NONSEC_15_0_MASK        (0xFFFFU << SGRF_DMAC_CON1_DMA_PERI_CH_NONSEC_15_0_SHIFT)    /* 0x0000FFFF */
/* DMAC_CON2 */
#define SGRF_DMAC_CON2_DMA_PERI_CH_NONSEC_31_16_SHIFT      (0U)
#define SGRF_DMAC_CON2_DMA_PERI_CH_NONSEC_31_16_MASK       (0xFU << SGRF_DMAC_CON2_DMA_PERI_CH_NONSEC_31_16_SHIFT)      /* 0x0000000F */
/* DMAC_CON3 */
#define SGRF_DMAC_CON3_DMA_MANAGER_BOOT_NONSEC_SHIFT       (0U)
#define SGRF_DMAC_CON3_DMA_MANAGER_BOOT_NONSEC_MASK        (0x1U << SGRF_DMAC_CON3_DMA_MANAGER_BOOT_NONSEC_SHIFT)       /* 0x00000001 */
/* DMAC_CON4 */
#define SGRF_DMAC_CON4_GRF_TYPE_UART_0_TX_SHIFT            (0U)
#define SGRF_DMAC_CON4_GRF_TYPE_UART_0_TX_MASK             (0x3U << SGRF_DMAC_CON4_GRF_TYPE_UART_0_TX_SHIFT)            /* 0x00000003 */
#define SGRF_DMAC_CON4_GRF_TYPE_UART_0_RX_SHIFT            (2U)
#define SGRF_DMAC_CON4_GRF_TYPE_UART_0_RX_MASK             (0x3U << SGRF_DMAC_CON4_GRF_TYPE_UART_0_RX_SHIFT)            /* 0x0000000C */
#define SGRF_DMAC_CON4_GRF_TYPE_UART_1_TX_SHIFT            (4U)
#define SGRF_DMAC_CON4_GRF_TYPE_UART_1_TX_MASK             (0x3U << SGRF_DMAC_CON4_GRF_TYPE_UART_1_TX_SHIFT)            /* 0x00000030 */
#define SGRF_DMAC_CON4_GRF_TYPE_UART_1_RX_SHIFT            (6U)
#define SGRF_DMAC_CON4_GRF_TYPE_UART_1_RX_MASK             (0x3U << SGRF_DMAC_CON4_GRF_TYPE_UART_1_RX_SHIFT)            /* 0x000000C0 */
#define SGRF_DMAC_CON4_GRF_TYPE_UART_2_TX_SHIFT            (8U)
#define SGRF_DMAC_CON4_GRF_TYPE_UART_2_TX_MASK             (0x3U << SGRF_DMAC_CON4_GRF_TYPE_UART_2_TX_SHIFT)            /* 0x00000300 */
#define SGRF_DMAC_CON4_GRF_TYPE_UART_2_RX_SHIFT            (10U)
#define SGRF_DMAC_CON4_GRF_TYPE_UART_2_RX_MASK             (0x3U << SGRF_DMAC_CON4_GRF_TYPE_UART_2_RX_SHIFT)            /* 0x00000C00 */
#define SGRF_DMAC_CON4_GRF_TYPE_UART_3_TX_SHIFT            (12U)
#define SGRF_DMAC_CON4_GRF_TYPE_UART_3_TX_MASK             (0x3U << SGRF_DMAC_CON4_GRF_TYPE_UART_3_TX_SHIFT)            /* 0x00003000 */
#define SGRF_DMAC_CON4_GRF_TYPE_UART_3_RX_SHIFT            (14U)
#define SGRF_DMAC_CON4_GRF_TYPE_UART_3_RX_MASK             (0x3U << SGRF_DMAC_CON4_GRF_TYPE_UART_3_RX_SHIFT)            /* 0x0000C000 */
/* DMAC_CON5 */
#define SGRF_DMAC_CON5_GRF_TYPE_UART_4_TX_SHIFT            (0U)
#define SGRF_DMAC_CON5_GRF_TYPE_UART_4_TX_MASK             (0x3U << SGRF_DMAC_CON5_GRF_TYPE_UART_4_TX_SHIFT)            /* 0x00000003 */
#define SGRF_DMAC_CON5_GRF_TYPE_UART_4_RX_SHIFT            (2U)
#define SGRF_DMAC_CON5_GRF_TYPE_UART_4_RX_MASK             (0x3U << SGRF_DMAC_CON5_GRF_TYPE_UART_4_RX_SHIFT)            /* 0x0000000C */
#define SGRF_DMAC_CON5_GRF_TYPE_SPI_0_TX_SHIFT             (4U)
#define SGRF_DMAC_CON5_GRF_TYPE_SPI_0_TX_MASK              (0x3U << SGRF_DMAC_CON5_GRF_TYPE_SPI_0_TX_SHIFT)             /* 0x00000030 */
#define SGRF_DMAC_CON5_GRF_TYPE_SPI_0_RX_SHIFT             (6U)
#define SGRF_DMAC_CON5_GRF_TYPE_SPI_0_RX_MASK              (0x3U << SGRF_DMAC_CON5_GRF_TYPE_SPI_0_RX_SHIFT)             /* 0x000000C0 */
#define SGRF_DMAC_CON5_GRF_TYPE_SPI_1_TX_SHIFT             (8U)
#define SGRF_DMAC_CON5_GRF_TYPE_SPI_1_TX_MASK              (0x3U << SGRF_DMAC_CON5_GRF_TYPE_SPI_1_TX_SHIFT)             /* 0x00000300 */
#define SGRF_DMAC_CON5_GRF_TYPE_SPI_1_RX_SHIFT             (10U)
#define SGRF_DMAC_CON5_GRF_TYPE_SPI_1_RX_MASK              (0x3U << SGRF_DMAC_CON5_GRF_TYPE_SPI_1_RX_SHIFT)             /* 0x00000C00 */
#define SGRF_DMAC_CON5_GRF_TYPE_SPI_2_TX_SHIFT             (12U)
#define SGRF_DMAC_CON5_GRF_TYPE_SPI_2_TX_MASK              (0x3U << SGRF_DMAC_CON5_GRF_TYPE_SPI_2_TX_SHIFT)             /* 0x00003000 */
#define SGRF_DMAC_CON5_GRF_TYPE_SPI_2_RX_SHIFT             (14U)
#define SGRF_DMAC_CON5_GRF_TYPE_SPI_2_RX_MASK              (0x3U << SGRF_DMAC_CON5_GRF_TYPE_SPI_2_RX_SHIFT)             /* 0x0000C000 */
/* DMAC_CON6 */
#define SGRF_DMAC_CON6_GRF_TYPE_I2S0_8CH_TX_SHIFT          (0U)
#define SGRF_DMAC_CON6_GRF_TYPE_I2S0_8CH_TX_MASK           (0x3U << SGRF_DMAC_CON6_GRF_TYPE_I2S0_8CH_TX_SHIFT)          /* 0x00000003 */
#define SGRF_DMAC_CON6_GRF_TYPE_I2S0_8CH_RX_SHIFT          (2U)
#define SGRF_DMAC_CON6_GRF_TYPE_I2S0_8CH_RX_MASK           (0x3U << SGRF_DMAC_CON6_GRF_TYPE_I2S0_8CH_RX_SHIFT)          /* 0x0000000C */
#define SGRF_DMAC_CON6_GRF_TYPE_I2S1_2CH_TX_SHIFT          (4U)
#define SGRF_DMAC_CON6_GRF_TYPE_I2S1_2CH_TX_MASK           (0x3U << SGRF_DMAC_CON6_GRF_TYPE_I2S1_2CH_TX_SHIFT)          /* 0x00000030 */
#define SGRF_DMAC_CON6_GRF_TYPE_I2S1_2CH_RX_SHIFT          (6U)
#define SGRF_DMAC_CON6_GRF_TYPE_I2S1_2CH_RX_MASK           (0x3U << SGRF_DMAC_CON6_GRF_TYPE_I2S1_2CH_RX_SHIFT)          /* 0x000000C0 */
#define SGRF_DMAC_CON6_GRF_TYPE_PWM_0_TX_SHIFT             (10U)
#define SGRF_DMAC_CON6_GRF_TYPE_PWM_0_TX_MASK              (0x3U << SGRF_DMAC_CON6_GRF_TYPE_PWM_0_TX_SHIFT)             /* 0x00000C00 */
#define SGRF_DMAC_CON6_GRF_TYPE_PWM_1_TX_SHIFT             (12U)
#define SGRF_DMAC_CON6_GRF_TYPE_PWM_1_TX_MASK              (0x3U << SGRF_DMAC_CON6_GRF_TYPE_PWM_1_TX_SHIFT)             /* 0x00003000 */
#define SGRF_DMAC_CON6_GRF_TYPE_PWM_2_TX_SHIFT             (14U)
#define SGRF_DMAC_CON6_GRF_TYPE_PWM_2_TX_MASK              (0x3U << SGRF_DMAC_CON6_GRF_TYPE_PWM_2_TX_SHIFT)             /* 0x0000C000 */
/* DMAC_CON7 */
#define SGRF_DMAC_CON7_GRF_TYPE_PDM_RX_SHIFT               (0U)
#define SGRF_DMAC_CON7_GRF_TYPE_PDM_RX_MASK                (0x3U << SGRF_DMAC_CON7_GRF_TYPE_PDM_RX_SHIFT)               /* 0x00000003 */
#define SGRF_DMAC_CON7_GRF_TYPE_UART_5_TX_SHIFT            (2U)
#define SGRF_DMAC_CON7_GRF_TYPE_UART_5_TX_MASK             (0x3U << SGRF_DMAC_CON7_GRF_TYPE_UART_5_TX_SHIFT)            /* 0x0000000C */
#define SGRF_DMAC_CON7_GRF_TYPE_UART_5_RX_SHIFT            (4U)
#define SGRF_DMAC_CON7_GRF_TYPE_UART_5_RX_MASK             (0x3U << SGRF_DMAC_CON7_GRF_TYPE_UART_5_RX_SHIFT)            /* 0x00000030 */
#define SGRF_DMAC_CON7_GRF_TYPE_UART_6_TX_SHIFT            (6U)
#define SGRF_DMAC_CON7_GRF_TYPE_UART_6_TX_MASK             (0x3U << SGRF_DMAC_CON7_GRF_TYPE_UART_6_TX_SHIFT)            /* 0x000000C0 */
#define SGRF_DMAC_CON7_GRF_TYPE_UART_6_RX_SHIFT            (8U)
#define SGRF_DMAC_CON7_GRF_TYPE_UART_6_RX_MASK             (0x3U << SGRF_DMAC_CON7_GRF_TYPE_UART_6_RX_SHIFT)            /* 0x00000300 */
#define SGRF_DMAC_CON7_GRF_TYPE_UART_7_TX_SHIFT            (10U)
#define SGRF_DMAC_CON7_GRF_TYPE_UART_7_TX_MASK             (0x3U << SGRF_DMAC_CON7_GRF_TYPE_UART_7_TX_SHIFT)            /* 0x00000C00 */
#define SGRF_DMAC_CON7_GRF_TYPE_UART_7_RX_SHIFT            (12U)
#define SGRF_DMAC_CON7_GRF_TYPE_UART_7_RX_MASK             (0x3U << SGRF_DMAC_CON7_GRF_TYPE_UART_7_RX_SHIFT)            /* 0x00003000 */
/* DMAC_CON8 */
#define SGRF_DMAC_CON8_GRF_DMA_REQ_MODIFY_DIS_SHIFT        (0U)
#define SGRF_DMAC_CON8_GRF_DMA_REQ_MODIFY_DIS_MASK         (0xFFFFU << SGRF_DMAC_CON8_GRF_DMA_REQ_MODIFY_DIS_SHIFT)     /* 0x0000FFFF */
/* DMAC_CON9 */
#define SGRF_DMAC_CON9_GRF_DMA_REQ_MODIFY_DIS_SHIFT        (0U)
#define SGRF_DMAC_CON9_GRF_DMA_REQ_MODIFY_DIS_MASK         (0xFFFFU << SGRF_DMAC_CON9_GRF_DMA_REQ_MODIFY_DIS_SHIFT)     /* 0x0000FFFF */
/* DDR_BANKHASH_CTRL */
#define SGRF_DDR_BANKHASH_CTRL_HASH_EN_SHIFT               (0U)
#define SGRF_DDR_BANKHASH_CTRL_HASH_EN_MASK                (0x1U << SGRF_DDR_BANKHASH_CTRL_HASH_EN_SHIFT)               /* 0x00000001 */
#define SGRF_DDR_BANKHASH_CTRL_MANICURE_MASK_SHIFT         (1U)
#define SGRF_DDR_BANKHASH_CTRL_MANICURE_MASK_MASK          (0x7U << SGRF_DDR_BANKHASH_CTRL_MANICURE_MASK_SHIFT)         /* 0x0000000E */
#define SGRF_DDR_BANKHASH_CTRL_BANK_OFFSET_SHIFT           (4U)
#define SGRF_DDR_BANKHASH_CTRL_BANK_OFFSET_MASK            (0x7U << SGRF_DDR_BANKHASH_CTRL_BANK_OFFSET_SHIFT)           /* 0x00000070 */
/* DDR_BANK_MASK0 */
#define SGRF_DDR_BANK_MASK0_DDR_BANK_MASK0_SHIFT           (0U)
#define SGRF_DDR_BANK_MASK0_DDR_BANK_MASK0_MASK            (0xFFFFFFFFU << SGRF_DDR_BANK_MASK0_DDR_BANK_MASK0_SHIFT)    /* 0xFFFFFFFF */
/* DDR_BANK_MASK1 */
#define SGRF_DDR_BANK_MASK1_DDR_BANK_MASK1_SHIFT           (0U)
#define SGRF_DDR_BANK_MASK1_DDR_BANK_MASK1_MASK            (0xFFFFFFFFU << SGRF_DDR_BANK_MASK1_DDR_BANK_MASK1_SHIFT)    /* 0xFFFFFFFF */
/* DDR_BANK_MASK2 */
#define SGRF_DDR_BANK_MASK2_DDR_BANK_MASK2_SHIFT           (0U)
#define SGRF_DDR_BANK_MASK2_DDR_BANK_MASK2_MASK            (0xFFFFFFFFU << SGRF_DDR_BANK_MASK2_DDR_BANK_MASK2_SHIFT)    /* 0xFFFFFFFF */
/****************************************PMU_SGRF****************************************/
/* SOC_CON0 */
#define PMU_SGRF_SOC_CON0_DBGEN_SHIFT                      (0U)
#define PMU_SGRF_SOC_CON0_DBGEN_MASK                       (0x1U << PMU_SGRF_SOC_CON0_DBGEN_SHIFT)                      /* 0x00000001 */
#define PMU_SGRF_SOC_CON0_SPIDEN_SHIFT                     (1U)
#define PMU_SGRF_SOC_CON0_SPIDEN_MASK                      (0x1U << PMU_SGRF_SOC_CON0_SPIDEN_SHIFT)                     /* 0x00000002 */
#define PMU_SGRF_SOC_CON0_NIDEN_SHIFT                      (2U)
#define PMU_SGRF_SOC_CON0_NIDEN_MASK                       (0x1U << PMU_SGRF_SOC_CON0_NIDEN_SHIFT)                      /* 0x00000004 */
#define PMU_SGRF_SOC_CON0_SPNIDEN_SHIFT                    (3U)
#define PMU_SGRF_SOC_CON0_SPNIDEN_MASK                     (0x1U << PMU_SGRF_SOC_CON0_SPNIDEN_SHIFT)                    /* 0x00000008 */
#define PMU_SGRF_SOC_CON0_DAPDEVICEEN_SHIFT                (4U)
#define PMU_SGRF_SOC_CON0_DAPDEVICEEN_MASK                 (0x1U << PMU_SGRF_SOC_CON0_DAPDEVICEEN_SHIFT)                /* 0x00000010 */
#define PMU_SGRF_SOC_CON0_AA64NAA32_SHIFT                  (5U)
#define PMU_SGRF_SOC_CON0_AA64NAA32_MASK                   (0x1U << PMU_SGRF_SOC_CON0_AA64NAA32_SHIFT)                  /* 0x00000020 */
#define PMU_SGRF_SOC_CON0_DDR_DFI_SCRAMBLE_MODE_SHIFT      (6U)
#define PMU_SGRF_SOC_CON0_DDR_DFI_SCRAMBLE_MODE_MASK       (0x1U << PMU_SGRF_SOC_CON0_DDR_DFI_SCRAMBLE_MODE_SHIFT)      /* 0x00000040 */
#define PMU_SGRF_SOC_CON0_CRYPTODISABLE_SHIFT              (7U)
#define PMU_SGRF_SOC_CON0_CRYPTODISABLE_MASK               (0x1U << PMU_SGRF_SOC_CON0_CRYPTODISABLE_SHIFT)              /* 0x00000080 */
#define PMU_SGRF_SOC_CON0_DDR_DFI_SCRAMBLE_EN_SHIFT        (8U)
#define PMU_SGRF_SOC_CON0_DDR_DFI_SCRAMBLE_EN_MASK         (0x1U << PMU_SGRF_SOC_CON0_DDR_DFI_SCRAMBLE_EN_SHIFT)        /* 0x00000100 */
#define PMU_SGRF_SOC_CON0_DDR_DFI_SCRAMBLE_LOAD_SHIFT      (9U)
#define PMU_SGRF_SOC_CON0_DDR_DFI_SCRAMBLE_LOAD_MASK       (0x1U << PMU_SGRF_SOC_CON0_DDR_DFI_SCRAMBLE_LOAD_SHIFT)      /* 0x00000200 */
#define PMU_SGRF_SOC_CON0_RESETOUT_FIRST_RESET_DIS_SHIFT   (10U)
#define PMU_SGRF_SOC_CON0_RESETOUT_FIRST_RESET_DIS_MASK    (0x1U << PMU_SGRF_SOC_CON0_RESETOUT_FIRST_RESET_DIS_SHIFT)   /* 0x00000400 */
#define PMU_SGRF_SOC_CON0_RESETOUT_TSADC_SHUT_DIS_SHIFT    (11U)
#define PMU_SGRF_SOC_CON0_RESETOUT_TSADC_SHUT_DIS_MASK     (0x1U << PMU_SGRF_SOC_CON0_RESETOUT_TSADC_SHUT_DIS_SHIFT)    /* 0x00000800 */
#define PMU_SGRF_SOC_CON0_RESETOUT_WDT_DISABLE_SHIFT       (12U)
#define PMU_SGRF_SOC_CON0_RESETOUT_WDT_DISABLE_MASK        (0x1U << PMU_SGRF_SOC_CON0_RESETOUT_WDT_DISABLE_SHIFT)       /* 0x00001000 */
#define PMU_SGRF_SOC_CON0_DBG_LOCK_SHIFT                   (15U)
#define PMU_SGRF_SOC_CON0_DBG_LOCK_MASK                    (0x1U << PMU_SGRF_SOC_CON0_DBG_LOCK_SHIFT)                   /* 0x00008000 */
/* SOC_CON1 */
#define PMU_SGRF_SOC_CON1_IMEM0_TZMA_R0SIZE_SHIFT          (0U)
#define PMU_SGRF_SOC_CON1_IMEM0_TZMA_R0SIZE_MASK           (0x3FFU << PMU_SGRF_SOC_CON1_IMEM0_TZMA_R0SIZE_SHIFT)        /* 0x000003FF */
#define PMU_SGRF_SOC_CON1_REMAP_SHIFT                      (10U)
#define PMU_SGRF_SOC_CON1_REMAP_MASK                       (0x3U << PMU_SGRF_SOC_CON1_REMAP_SHIFT)                      /* 0x00000C00 */
#define PMU_SGRF_SOC_CON1_SPIM_NON_DBG_SHIFT               (12U)
#define PMU_SGRF_SOC_CON1_SPIM_NON_DBG_MASK                (0x1U << PMU_SGRF_SOC_CON1_SPIM_NON_DBG_SHIFT)               /* 0x00001000 */
#define PMU_SGRF_SOC_CON1_SGRF_EFUSE_GPIO_EN_SHIFT         (13U)
#define PMU_SGRF_SOC_CON1_SGRF_EFUSE_GPIO_EN_MASK          (0x1U << PMU_SGRF_SOC_CON1_SGRF_EFUSE_GPIO_EN_SHIFT)         /* 0x00002000 */
#define PMU_SGRF_SOC_CON1_REMAP_LOCK_SHIFT                 (15U)
#define PMU_SGRF_SOC_CON1_REMAP_LOCK_MASK                  (0x1U << PMU_SGRF_SOC_CON1_REMAP_LOCK_SHIFT)                 /* 0x00008000 */
/* FAST_BOOT_ADDR */
#define PMU_SGRF_FAST_BOOT_ADDR_FAST_BOOT_ADDR_SHIFT       (0U)
#define PMU_SGRF_FAST_BOOT_ADDR_FAST_BOOT_ADDR_MASK        (0xFFFFFFFFU << PMU_SGRF_FAST_BOOT_ADDR_FAST_BOOT_ADDR_SHIFT) /* 0xFFFFFFFF */
/******************************************MSCH******************************************/
/* ID_COREID */
#define MSCH_ID_COREID_CORETYPEID_SHIFT                    (0U)
#define MSCH_ID_COREID_CORETYPEID_MASK                     (0xFFU << MSCH_ID_COREID_CORETYPEID_SHIFT)                   /* 0x000000FF */
#define MSCH_ID_COREID_CORECHECKSUM_SHIFT                  (8U)
#define MSCH_ID_COREID_CORECHECKSUM_MASK                   (0xFFFFFFU << MSCH_ID_COREID_CORECHECKSUM_SHIFT)             /* 0xFFFFFF00 */
/* ID_REVISIONID */
#define MSCH_ID_REVISIONID_REVISIONID_SHIFT                (0U)
#define MSCH_ID_REVISIONID_REVISIONID_MASK                 (0xFFFFFFFFU << MSCH_ID_REVISIONID_REVISIONID_SHIFT)         /* 0xFFFFFFFF */
/* DEVICECONF */
#define MSCH_DEVICECONF_RANK0_SHIFT                        (0U)
#define MSCH_DEVICECONF_RANK0_MASK                         (0x3FU << MSCH_DEVICECONF_RANK0_SHIFT)                       /* 0x0000003F */
#define MSCH_DEVICECONF_RANK1_SHIFT                        (8U)
#define MSCH_DEVICECONF_RANK1_MASK                         (0x3FU << MSCH_DEVICECONF_RANK1_SHIFT)                       /* 0x00003F00 */
/* DEVICESIZE */
#define MSCH_DEVICESIZE_RANK0_SHIFT                        (0U)
#define MSCH_DEVICESIZE_RANK0_MASK                         (0x7FU << MSCH_DEVICESIZE_RANK0_SHIFT)                       /* 0x0000007F */
#define MSCH_DEVICESIZE_RANK1_SHIFT                        (8U)
#define MSCH_DEVICESIZE_RANK1_MASK                         (0x7FU << MSCH_DEVICESIZE_RANK1_SHIFT)                       /* 0x00007F00 */
/* DDRTIMINGA0 */
#define MSCH_DDRTIMINGA0_ACTTOACT_SHIFT                    (0U)
#define MSCH_DDRTIMINGA0_ACTTOACT_MASK                     (0x3FU << MSCH_DDRTIMINGA0_ACTTOACT_SHIFT)                   /* 0x0000003F */
#define MSCH_DDRTIMINGA0_RDTOMISS_SHIFT                    (8U)
#define MSCH_DDRTIMINGA0_RDTOMISS_MASK                     (0x3FU << MSCH_DDRTIMINGA0_RDTOMISS_SHIFT)                   /* 0x00003F00 */
#define MSCH_DDRTIMINGA0_WRTOMISS_SHIFT                    (16U)
#define MSCH_DDRTIMINGA0_WRTOMISS_MASK                     (0x3FU << MSCH_DDRTIMINGA0_WRTOMISS_SHIFT)                   /* 0x003F0000 */
#define MSCH_DDRTIMINGA0_READLATENCY_SHIFT                 (24U)
#define MSCH_DDRTIMINGA0_READLATENCY_MASK                  (0xFFU << MSCH_DDRTIMINGA0_READLATENCY_SHIFT)                /* 0xFF000000 */
/* DDRTIMINGB0 */
#define MSCH_DDRTIMINGB0_RDTOWR_SHIFT                      (0U)
#define MSCH_DDRTIMINGB0_RDTOWR_MASK                       (0x1FU << MSCH_DDRTIMINGB0_RDTOWR_SHIFT)                     /* 0x0000001F */
#define MSCH_DDRTIMINGB0_WRTORD_SHIFT                      (8U)
#define MSCH_DDRTIMINGB0_WRTORD_MASK                       (0x1FU << MSCH_DDRTIMINGB0_WRTORD_SHIFT)                     /* 0x00001F00 */
#define MSCH_DDRTIMINGB0_RRD_SHIFT                         (16U)
#define MSCH_DDRTIMINGB0_RRD_MASK                          (0xFU << MSCH_DDRTIMINGB0_RRD_SHIFT)                         /* 0x000F0000 */
#define MSCH_DDRTIMINGB0_FAW_SHIFT                         (24U)
#define MSCH_DDRTIMINGB0_FAW_MASK                          (0x3FU << MSCH_DDRTIMINGB0_FAW_SHIFT)                        /* 0x3F000000 */
/* DDRTIMINGC0 */
#define MSCH_DDRTIMINGC0_BURSTPENALTY_SHIFT                (0U)
#define MSCH_DDRTIMINGC0_BURSTPENALTY_MASK                 (0xFU << MSCH_DDRTIMINGC0_BURSTPENALTY_SHIFT)                /* 0x0000000F */
#define MSCH_DDRTIMINGC0_WRTOMWR_SHIFT                     (8U)
#define MSCH_DDRTIMINGC0_WRTOMWR_MASK                      (0x3FU << MSCH_DDRTIMINGC0_WRTOMWR_SHIFT)                    /* 0x00003F00 */
/* DEVTODEV0 */
#define MSCH_DEVTODEV0_BUSRDTORD_SHIFT                     (0U)
#define MSCH_DEVTODEV0_BUSRDTORD_MASK                      (0x7U << MSCH_DEVTODEV0_BUSRDTORD_SHIFT)                     /* 0x00000007 */
#define MSCH_DEVTODEV0_BUSRDTOWR_SHIFT                     (4U)
#define MSCH_DEVTODEV0_BUSRDTOWR_MASK                      (0xFU << MSCH_DEVTODEV0_BUSRDTOWR_SHIFT)                     /* 0x000000F0 */
#define MSCH_DEVTODEV0_BUSWRTORD_SHIFT                     (8U)
#define MSCH_DEVTODEV0_BUSWRTORD_MASK                      (0xFU << MSCH_DEVTODEV0_BUSWRTORD_SHIFT)                     /* 0x00000F00 */
#define MSCH_DEVTODEV0_BUSWRTOWR_SHIFT                     (12U)
#define MSCH_DEVTODEV0_BUSWRTOWR_MASK                      (0x7U << MSCH_DEVTODEV0_BUSWRTOWR_SHIFT)                     /* 0x00007000 */
/* DDRMODE */
#define MSCH_DDRMODE_AUTOPRECHARGE_SHIFT                   (0U)
#define MSCH_DDRMODE_AUTOPRECHARGE_MASK                    (0x1U << MSCH_DDRMODE_AUTOPRECHARGE_SHIFT)                   /* 0x00000001 */
#define MSCH_DDRMODE_BYPASSFILTERING_SHIFT                 (1U)
#define MSCH_DDRMODE_BYPASSFILTERING_MASK                  (0x1U << MSCH_DDRMODE_BYPASSFILTERING_SHIFT)                 /* 0x00000002 */
#define MSCH_DDRMODE_FAWBANK_SHIFT                         (2U)
#define MSCH_DDRMODE_FAWBANK_MASK                          (0x1U << MSCH_DDRMODE_FAWBANK_SHIFT)                         /* 0x00000004 */
#define MSCH_DDRMODE_BURSTSIZE_SHIFT                       (3U)
#define MSCH_DDRMODE_BURSTSIZE_MASK                        (0x3U << MSCH_DDRMODE_BURSTSIZE_SHIFT)                       /* 0x00000018 */
#define MSCH_DDRMODE_MWRSIZE_SHIFT                         (5U)
#define MSCH_DDRMODE_MWRSIZE_MASK                          (0x3U << MSCH_DDRMODE_MWRSIZE_SHIFT)                         /* 0x00000060 */
#define MSCH_DDRMODE_FORCEORDER_SHIFT                      (8U)
#define MSCH_DDRMODE_FORCEORDER_MASK                       (0xFFU << MSCH_DDRMODE_FORCEORDER_SHIFT)                     /* 0x0000FF00 */
#define MSCH_DDRMODE_FORCEORDERSTATE_SHIFT                 (16U)
#define MSCH_DDRMODE_FORCEORDERSTATE_MASK                  (0xFFU << MSCH_DDRMODE_FORCEORDERSTATE_SHIFT)                /* 0x00FF0000 */
/* DDR4TIMING */
#define MSCH_DDR4TIMING_CCDL_SHIFT                         (0U)
#define MSCH_DDR4TIMING_CCDL_MASK                          (0x7U << MSCH_DDR4TIMING_CCDL_SHIFT)                         /* 0x00000007 */
#define MSCH_DDR4TIMING_WRTORDL_SHIFT                      (3U)
#define MSCH_DDR4TIMING_WRTORDL_MASK                       (0x1FU << MSCH_DDR4TIMING_WRTORDL_SHIFT)                     /* 0x000000F8 */
#define MSCH_DDR4TIMING_RRDL_SHIFT                         (8U)
#define MSCH_DDR4TIMING_RRDL_MASK                          (0xFU << MSCH_DDR4TIMING_RRDL_SHIFT)                         /* 0x00000F00 */
/* AGINGX0 */
#define MSCH_AGINGX0_AGINGX0_SHIFT                         (0U)
#define MSCH_AGINGX0_AGINGX0_MASK                          (0x7U << MSCH_AGINGX0_AGINGX0_SHIFT)                         /* 0x00000007 */
/* AGING0 */
#define MSCH_AGING0_AGING0_SHIFT                           (0U)
#define MSCH_AGING0_AGING0_MASK                            (0xFFU << MSCH_AGING0_AGING0_SHIFT)                          /* 0x000000FF */
/* AGING1 */
#define MSCH_AGING1_AGING1_SHIFT                           (0U)
#define MSCH_AGING1_AGING1_MASK                            (0xFFU << MSCH_AGING1_AGING1_SHIFT)                          /* 0x000000FF */
/* AGING2 */
#define MSCH_AGING2_AGING2_SHIFT                           (0U)
#define MSCH_AGING2_AGING2_MASK                            (0xFFU << MSCH_AGING2_AGING2_SHIFT)                          /* 0x000000FF */
/******************************************CRU*******************************************/
/* APLL_CON0 */
#define CRU_APLL_CON0_FBDIV_SHIFT                          (0U)
#define CRU_APLL_CON0_FBDIV_MASK                           (0xFFFU << CRU_APLL_CON0_FBDIV_SHIFT)                        /* 0x00000FFF */
#define CRU_APLL_CON0_POSTDIV1_SHIFT                       (12U)
#define CRU_APLL_CON0_POSTDIV1_MASK                        (0x7U << CRU_APLL_CON0_POSTDIV1_SHIFT)                       /* 0x00007000 */
#define CRU_APLL_CON0_BYPASS_SHIFT                         (15U)
#define CRU_APLL_CON0_BYPASS_MASK                          (0x1U << CRU_APLL_CON0_BYPASS_SHIFT)                         /* 0x00008000 */
/* APLL_CON1 */
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
#define CRU_APLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT             (0U)
#define CRU_APLL_CON4_SSMOD_SEL_EXT_WAVE_MASK              (0x1U << CRU_APLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT)             /* 0x00000001 */
#define CRU_APLL_CON4_SSMOD_EXT_MAXADDR_SHIFT              (8U)
#define CRU_APLL_CON4_SSMOD_EXT_MAXADDR_MASK               (0xFFU << CRU_APLL_CON4_SSMOD_EXT_MAXADDR_SHIFT)             /* 0x0000FF00 */
/* DPLL_CON0 */
#define CRU_DPLL_CON0_FBDIV_SHIFT                          (0U)
#define CRU_DPLL_CON0_FBDIV_MASK                           (0xFFFU << CRU_DPLL_CON0_FBDIV_SHIFT)                        /* 0x00000FFF */
#define CRU_DPLL_CON0_POSTDIV1_SHIFT                       (12U)
#define CRU_DPLL_CON0_POSTDIV1_MASK                        (0x7U << CRU_DPLL_CON0_POSTDIV1_SHIFT)                       /* 0x00007000 */
#define CRU_DPLL_CON0_BYPASS_SHIFT                         (15U)
#define CRU_DPLL_CON0_BYPASS_MASK                          (0x1U << CRU_DPLL_CON0_BYPASS_SHIFT)                         /* 0x00008000 */
/* DPLL_CON1 */
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
#define CRU_DPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT             (0U)
#define CRU_DPLL_CON4_SSMOD_SEL_EXT_WAVE_MASK              (0x1U << CRU_DPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT)             /* 0x00000001 */
#define CRU_DPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT              (8U)
#define CRU_DPLL_CON4_SSMOD_EXT_MAXADDR_MASK               (0xFFU << CRU_DPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT)             /* 0x0000FF00 */
/* CPLL_CON0 */
#define CRU_CPLL_CON0_FBDIV_SHIFT                          (0U)
#define CRU_CPLL_CON0_FBDIV_MASK                           (0xFFFU << CRU_CPLL_CON0_FBDIV_SHIFT)                        /* 0x00000FFF */
#define CRU_CPLL_CON0_POSTDIV1_SHIFT                       (12U)
#define CRU_CPLL_CON0_POSTDIV1_MASK                        (0x7U << CRU_CPLL_CON0_POSTDIV1_SHIFT)                       /* 0x00007000 */
#define CRU_CPLL_CON0_BYPASS_SHIFT                         (15U)
#define CRU_CPLL_CON0_BYPASS_MASK                          (0x1U << CRU_CPLL_CON0_BYPASS_SHIFT)                         /* 0x00008000 */
/* CPLL_CON1 */
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
#define CRU_CPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT             (0U)
#define CRU_CPLL_CON4_SSMOD_SEL_EXT_WAVE_MASK              (0x1U << CRU_CPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT)             /* 0x00000001 */
#define CRU_CPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT              (8U)
#define CRU_CPLL_CON4_SSMOD_EXT_MAXADDR_MASK               (0xFFU << CRU_CPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT)             /* 0x0000FF00 */
/* GPLL_CON0 */
#define CRU_GPLL_CON0_FBDIV_SHIFT                          (0U)
#define CRU_GPLL_CON0_FBDIV_MASK                           (0xFFFU << CRU_GPLL_CON0_FBDIV_SHIFT)                        /* 0x00000FFF */
#define CRU_GPLL_CON0_POSTDIV1_SHIFT                       (12U)
#define CRU_GPLL_CON0_POSTDIV1_MASK                        (0x7U << CRU_GPLL_CON0_POSTDIV1_SHIFT)                       /* 0x00007000 */
#define CRU_GPLL_CON0_BYPASS_SHIFT                         (15U)
#define CRU_GPLL_CON0_BYPASS_MASK                          (0x1U << CRU_GPLL_CON0_BYPASS_SHIFT)                         /* 0x00008000 */
/* GPLL_CON1 */
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
#define CRU_GPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT             (0U)
#define CRU_GPLL_CON4_SSMOD_SEL_EXT_WAVE_MASK              (0x1U << CRU_GPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT)             /* 0x00000001 */
#define CRU_GPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT              (8U)
#define CRU_GPLL_CON4_SSMOD_EXT_MAXADDR_MASK               (0xFFU << CRU_GPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT)             /* 0x0000FF00 */
/* NPLL_CON0 */
#define CRU_NPLL_CON0_FBDIV_SHIFT                          (0U)
#define CRU_NPLL_CON0_FBDIV_MASK                           (0xFFFU << CRU_NPLL_CON0_FBDIV_SHIFT)                        /* 0x00000FFF */
#define CRU_NPLL_CON0_POSTDIV1_SHIFT                       (12U)
#define CRU_NPLL_CON0_POSTDIV1_MASK                        (0x7U << CRU_NPLL_CON0_POSTDIV1_SHIFT)                       /* 0x00007000 */
#define CRU_NPLL_CON0_BYPASS_SHIFT                         (15U)
#define CRU_NPLL_CON0_BYPASS_MASK                          (0x1U << CRU_NPLL_CON0_BYPASS_SHIFT)                         /* 0x00008000 */
/* NPLL_CON1 */
#define CRU_NPLL_CON1_REFDIV_SHIFT                         (0U)
#define CRU_NPLL_CON1_REFDIV_MASK                          (0x3FU << CRU_NPLL_CON1_REFDIV_SHIFT)                        /* 0x0000003F */
#define CRU_NPLL_CON1_POSTDIV2_SHIFT                       (6U)
#define CRU_NPLL_CON1_POSTDIV2_MASK                        (0x7U << CRU_NPLL_CON1_POSTDIV2_SHIFT)                       /* 0x000001C0 */
#define CRU_NPLL_CON1_PLL_LOCK_SHIFT                       (10U)
#define CRU_NPLL_CON1_PLL_LOCK_MASK                        (0x1U << CRU_NPLL_CON1_PLL_LOCK_SHIFT)                       /* 0x00000400 */
#define CRU_NPLL_CON1_DSMPD_SHIFT                          (12U)
#define CRU_NPLL_CON1_DSMPD_MASK                           (0x1U << CRU_NPLL_CON1_DSMPD_SHIFT)                          /* 0x00001000 */
#define CRU_NPLL_CON1_PLLPD0_SHIFT                         (13U)
#define CRU_NPLL_CON1_PLLPD0_MASK                          (0x1U << CRU_NPLL_CON1_PLLPD0_SHIFT)                         /* 0x00002000 */
#define CRU_NPLL_CON1_PLLPD1_SHIFT                         (14U)
#define CRU_NPLL_CON1_PLLPD1_MASK                          (0x1U << CRU_NPLL_CON1_PLLPD1_SHIFT)                         /* 0x00004000 */
#define CRU_NPLL_CON1_PLLPDSEL_SHIFT                       (15U)
#define CRU_NPLL_CON1_PLLPDSEL_MASK                        (0x1U << CRU_NPLL_CON1_PLLPDSEL_SHIFT)                       /* 0x00008000 */
/* NPLL_CON2 */
#define CRU_NPLL_CON2_FRACDIV_SHIFT                        (0U)
#define CRU_NPLL_CON2_FRACDIV_MASK                         (0xFFFFFFU << CRU_NPLL_CON2_FRACDIV_SHIFT)                   /* 0x00FFFFFF */
#define CRU_NPLL_CON2_DACPD_SHIFT                          (24U)
#define CRU_NPLL_CON2_DACPD_MASK                           (0x1U << CRU_NPLL_CON2_DACPD_SHIFT)                          /* 0x01000000 */
#define CRU_NPLL_CON2_FOUTPOSTDIVPD_SHIFT                  (25U)
#define CRU_NPLL_CON2_FOUTPOSTDIVPD_MASK                   (0x1U << CRU_NPLL_CON2_FOUTPOSTDIVPD_SHIFT)                  /* 0x02000000 */
#define CRU_NPLL_CON2_FOUTVCOPD_SHIFT                      (26U)
#define CRU_NPLL_CON2_FOUTVCOPD_MASK                       (0x1U << CRU_NPLL_CON2_FOUTVCOPD_SHIFT)                      /* 0x04000000 */
#define CRU_NPLL_CON2_FOUT4PHASEPD_SHIFT                   (27U)
#define CRU_NPLL_CON2_FOUT4PHASEPD_MASK                    (0x1U << CRU_NPLL_CON2_FOUT4PHASEPD_SHIFT)                   /* 0x08000000 */
/* NPLL_CON3 */
#define CRU_NPLL_CON3_SSMOD_BP_SHIFT                       (0U)
#define CRU_NPLL_CON3_SSMOD_BP_MASK                        (0x1U << CRU_NPLL_CON3_SSMOD_BP_SHIFT)                       /* 0x00000001 */
#define CRU_NPLL_CON3_SSMOD_DISABLE_SSCG_SHIFT             (1U)
#define CRU_NPLL_CON3_SSMOD_DISABLE_SSCG_MASK              (0x1U << CRU_NPLL_CON3_SSMOD_DISABLE_SSCG_SHIFT)             /* 0x00000002 */
#define CRU_NPLL_CON3_SSMOD_RESET_SHIFT                    (2U)
#define CRU_NPLL_CON3_SSMOD_RESET_MASK                     (0x1U << CRU_NPLL_CON3_SSMOD_RESET_SHIFT)                    /* 0x00000004 */
#define CRU_NPLL_CON3_SSMOD_DOWNSPREAD_SHIFT               (3U)
#define CRU_NPLL_CON3_SSMOD_DOWNSPREAD_MASK                (0x1U << CRU_NPLL_CON3_SSMOD_DOWNSPREAD_SHIFT)               /* 0x00000008 */
#define CRU_NPLL_CON3_SSMOD_DIVVAL_SHIFT                   (4U)
#define CRU_NPLL_CON3_SSMOD_DIVVAL_MASK                    (0xFU << CRU_NPLL_CON3_SSMOD_DIVVAL_SHIFT)                   /* 0x000000F0 */
#define CRU_NPLL_CON3_SSMOD_SPREAD_SHIFT                   (8U)
#define CRU_NPLL_CON3_SSMOD_SPREAD_MASK                    (0x1FU << CRU_NPLL_CON3_SSMOD_SPREAD_SHIFT)                  /* 0x00001F00 */
/* NPLL_CON4 */
#define CRU_NPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT             (0U)
#define CRU_NPLL_CON4_SSMOD_SEL_EXT_WAVE_MASK              (0x1U << CRU_NPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT)             /* 0x00000001 */
#define CRU_NPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT              (8U)
#define CRU_NPLL_CON4_SSMOD_EXT_MAXADDR_MASK               (0xFFU << CRU_NPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT)             /* 0x0000FF00 */
/* MODE */
#define CRU_MODE_APLL_WORK_MODE_SHIFT                      (0U)
#define CRU_MODE_APLL_WORK_MODE_MASK                       (0x3U << CRU_MODE_APLL_WORK_MODE_SHIFT)                      /* 0x00000003 */
#define CRU_MODE_DPLL_WORK_MODE_SHIFT                      (2U)
#define CRU_MODE_DPLL_WORK_MODE_MASK                       (0x3U << CRU_MODE_DPLL_WORK_MODE_SHIFT)                      /* 0x0000000C */
#define CRU_MODE_CPLL_WORK_MODE_SHIFT                      (4U)
#define CRU_MODE_CPLL_WORK_MODE_MASK                       (0x3U << CRU_MODE_CPLL_WORK_MODE_SHIFT)                      /* 0x00000030 */
#define CRU_MODE_GPLL_WORK_MODE_SHIFT                      (6U)
#define CRU_MODE_GPLL_WORK_MODE_MASK                       (0x3U << CRU_MODE_GPLL_WORK_MODE_SHIFT)                      /* 0x000000C0 */
#define CRU_MODE_NPLL_WORK_MODE_SHIFT                      (8U)
#define CRU_MODE_NPLL_WORK_MODE_MASK                       (0x3U << CRU_MODE_NPLL_WORK_MODE_SHIFT)                      /* 0x00000300 */
#define CRU_MODE_USBPHY480M_WORK_MODE_SHIFT                (10U)
#define CRU_MODE_USBPHY480M_WORK_MODE_MASK                 (0x3U << CRU_MODE_USBPHY480M_WORK_MODE_SHIFT)                /* 0x00000C00 */
/* MISC */
#define CRU_MISC_WARMRST_EN_SHIFT                          (0U)
#define CRU_MISC_WARMRST_EN_MASK                           (0x1U << CRU_MISC_WARMRST_EN_SHIFT)                          /* 0x00000001 */
#define CRU_MISC_CORE_SRST_WFIEN_SHIFT                     (1U)
#define CRU_MISC_CORE_SRST_WFIEN_MASK                      (0x1U << CRU_MISC_CORE_SRST_WFIEN_SHIFT)                     /* 0x00000002 */
#define CRU_MISC_CORE_WRST_WFIEN_SHIFT                     (2U)
#define CRU_MISC_CORE_WRST_WFIEN_MASK                      (0x1U << CRU_MISC_CORE_WRST_WFIEN_SHIFT)                     /* 0x00000004 */
#define CRU_MISC_COREPO_SRST_WFIEN_SHIFT                   (3U)
#define CRU_MISC_COREPO_SRST_WFIEN_MASK                    (0x1U << CRU_MISC_COREPO_SRST_WFIEN_SHIFT)                   /* 0x00000008 */
#define CRU_MISC_COREPO_WRST_WFIEN_SHIFT                   (4U)
#define CRU_MISC_COREPO_WRST_WFIEN_MASK                    (0x1U << CRU_MISC_COREPO_WRST_WFIEN_SHIFT)                   /* 0x00000010 */
#define CRU_MISC_CORE_HIGH_FREQ_RST_EN_SHIFT               (12U)
#define CRU_MISC_CORE_HIGH_FREQ_RST_EN_MASK                (0x3U << CRU_MISC_CORE_HIGH_FREQ_RST_EN_SHIFT)               /* 0x00003000 */
/* MISC1 */
#define CRU_MISC1_PD_CORE_DWN_CLK_EN_DIS_SHIFT             (0U)
#define CRU_MISC1_PD_CORE_DWN_CLK_EN_DIS_MASK              (0x1U << CRU_MISC1_PD_CORE_DWN_CLK_EN_DIS_SHIFT)             /* 0x00000001 */
#define CRU_MISC1_PD_PCIE_DWN_CLK_EN_DIS_SHIFT             (2U)
#define CRU_MISC1_PD_PCIE_DWN_CLK_EN_DIS_MASK              (0x1U << CRU_MISC1_PD_PCIE_DWN_CLK_EN_DIS_SHIFT)             /* 0x00000004 */
#define CRU_MISC1_PD_VIO_DWN_CLK_EN_DIS_SHIFT              (3U)
#define CRU_MISC1_PD_VIO_DWN_CLK_EN_DIS_MASK               (0x1U << CRU_MISC1_PD_VIO_DWN_CLK_EN_DIS_SHIFT)              /* 0x00000008 */
#define CRU_MISC1_PD_NPU_DWN_CLK_EN_DIS_SHIFT              (4U)
#define CRU_MISC1_PD_NPU_DWN_CLK_EN_DIS_MASK               (0x1U << CRU_MISC1_PD_NPU_DWN_CLK_EN_DIS_SHIFT)              /* 0x00000010 */
#define CRU_MISC1_PD_DDR_DWN_CLK_EN_DIS_SHIFT              (6U)
#define CRU_MISC1_PD_DDR_DWN_CLK_EN_DIS_MASK               (0x1U << CRU_MISC1_PD_DDR_DWN_CLK_EN_DIS_SHIFT)              /* 0x00000040 */
#define CRU_MISC1_PD_VPU_DWN_CLK_EN_DIS_SHIFT              (10U)
#define CRU_MISC1_PD_VPU_DWN_CLK_EN_DIS_MASK               (0x1U << CRU_MISC1_PD_VPU_DWN_CLK_EN_DIS_SHIFT)              /* 0x00000400 */
#define CRU_MISC1_CLK_I2S0_TX_OUT_MCLK_OEN_SHIFT           (12U)
#define CRU_MISC1_CLK_I2S0_TX_OUT_MCLK_OEN_MASK            (0x1U << CRU_MISC1_CLK_I2S0_TX_OUT_MCLK_OEN_SHIFT)           /* 0x00001000 */
#define CRU_MISC1_CLK_I2S0_RX_OUT_MCLK_OEN_SHIFT           (13U)
#define CRU_MISC1_CLK_I2S0_RX_OUT_MCLK_OEN_MASK            (0x1U << CRU_MISC1_CLK_I2S0_RX_OUT_MCLK_OEN_SHIFT)           /* 0x00002000 */
#define CRU_MISC1_CLK_I2S1_OUT_MCLK_OEN_SHIFT              (14U)
#define CRU_MISC1_CLK_I2S1_OUT_MCLK_OEN_MASK               (0x1U << CRU_MISC1_CLK_I2S1_OUT_MCLK_OEN_SHIFT)              /* 0x00004000 */
/* GLB_CNT_TH */
#define CRU_GLB_CNT_TH_GLOBAL_RESET_COUNTER_THRESHOLD_SHIFT (0U)
#define CRU_GLB_CNT_TH_GLOBAL_RESET_COUNTER_THRESHOLD_MASK (0xFFFFU << CRU_GLB_CNT_TH_GLOBAL_RESET_COUNTER_THRESHOLD_SHIFT) /* 0x0000FFFF */
#define CRU_GLB_CNT_TH_PLL_LOCKPERIOD_SHIFT                (16U)
#define CRU_GLB_CNT_TH_PLL_LOCKPERIOD_MASK                 (0xFFFFU << CRU_GLB_CNT_TH_PLL_LOCKPERIOD_SHIFT)             /* 0xFFFF0000 */
/* GLB_RST_ST */
#define CRU_GLB_RST_ST_FST_GLB_RST_ST_SHIFT                (0U)
#define CRU_GLB_RST_ST_FST_GLB_RST_ST_MASK                 (0x1U << CRU_GLB_RST_ST_FST_GLB_RST_ST_SHIFT)                /* 0x00000001 */
#define CRU_GLB_RST_ST_SND_GLB_RST_ST_SHIFT                (1U)
#define CRU_GLB_RST_ST_SND_GLB_RST_ST_MASK                 (0x1U << CRU_GLB_RST_ST_SND_GLB_RST_ST_SHIFT)                /* 0x00000002 */
#define CRU_GLB_RST_ST_FST_GLB_WDT_RST_ST_SHIFT            (2U)
#define CRU_GLB_RST_ST_FST_GLB_WDT_RST_ST_MASK             (0x1U << CRU_GLB_RST_ST_FST_GLB_WDT_RST_ST_SHIFT)            /* 0x00000004 */
#define CRU_GLB_RST_ST_SND_GLB_WDT_RST_ST_SHIFT            (3U)
#define CRU_GLB_RST_ST_SND_GLB_WDT_RST_ST_MASK             (0x1U << CRU_GLB_RST_ST_SND_GLB_WDT_RST_ST_SHIFT)            /* 0x00000008 */
#define CRU_GLB_RST_ST_FST_GLB_TSADC_RST_ST_SHIFT          (4U)
#define CRU_GLB_RST_ST_FST_GLB_TSADC_RST_ST_MASK           (0x1U << CRU_GLB_RST_ST_FST_GLB_TSADC_RST_ST_SHIFT)          /* 0x00000010 */
#define CRU_GLB_RST_ST_SND_GLB_TSADC_RST_ST_SHIFT          (5U)
#define CRU_GLB_RST_ST_SND_GLB_TSADC_RST_ST_MASK           (0x1U << CRU_GLB_RST_ST_SND_GLB_TSADC_RST_ST_SHIFT)          /* 0x00000020 */
#define CRU_GLB_RST_ST_RESETN_CORE0_SRC_ST_SHIFT           (16U)
#define CRU_GLB_RST_ST_RESETN_CORE0_SRC_ST_MASK            (0x1U << CRU_GLB_RST_ST_RESETN_CORE0_SRC_ST_SHIFT)           /* 0x00010000 */
#define CRU_GLB_RST_ST_RESETN_CORE1_SRC_ST_SHIFT           (17U)
#define CRU_GLB_RST_ST_RESETN_CORE1_SRC_ST_MASK            (0x1U << CRU_GLB_RST_ST_RESETN_CORE1_SRC_ST_SHIFT)           /* 0x00020000 */
#define CRU_GLB_RST_ST_RESETN_COREPO0_SRC_ST_SHIFT         (18U)
#define CRU_GLB_RST_ST_RESETN_COREPO0_SRC_ST_MASK          (0x1U << CRU_GLB_RST_ST_RESETN_COREPO0_SRC_ST_SHIFT)         /* 0x00040000 */
#define CRU_GLB_RST_ST_RESETN_COREPO1_SRC_ST_SHIFT         (19U)
#define CRU_GLB_RST_ST_RESETN_COREPO1_SRC_ST_MASK          (0x1U << CRU_GLB_RST_ST_RESETN_COREPO1_SRC_ST_SHIFT)         /* 0x00080000 */
/* GLB_SRST_FST */
#define CRU_GLB_SRST_FST_GLB_SRST_FST_SHIFT                (0U)
#define CRU_GLB_SRST_FST_GLB_SRST_FST_MASK                 (0xFFFFU << CRU_GLB_SRST_FST_GLB_SRST_FST_SHIFT)             /* 0x0000FFFF */
/* GLB_SRST_SND */
#define CRU_GLB_SRST_SND_GLB_SRST_SND_SHIFT                (0U)
#define CRU_GLB_SRST_SND_GLB_SRST_SND_MASK                 (0xFFFFU << CRU_GLB_SRST_SND_GLB_SRST_SND_SHIFT)             /* 0x0000FFFF */
/* GLB_RST_CON */
#define CRU_GLB_RST_CON_TSADC_GLB_SRST_CTRL_SHIFT          (0U)
#define CRU_GLB_RST_CON_TSADC_GLB_SRST_CTRL_MASK           (0x1U << CRU_GLB_RST_CON_TSADC_GLB_SRST_CTRL_SHIFT)          /* 0x00000001 */
#define CRU_GLB_RST_CON_WDT_GLB_SRST_CTRL_SHIFT            (1U)
#define CRU_GLB_RST_CON_WDT_GLB_SRST_CTRL_MASK             (0x1U << CRU_GLB_RST_CON_WDT_GLB_SRST_CTRL_SHIFT)            /* 0x00000002 */
#define CRU_GLB_RST_CON_PMU_SRST_WDT_EN_SHIFT              (4U)
#define CRU_GLB_RST_CON_PMU_SRST_WDT_EN_MASK               (0x1U << CRU_GLB_RST_CON_PMU_SRST_WDT_EN_SHIFT)              /* 0x00000010 */
#define CRU_GLB_RST_CON_TSADC_SHUT_RESET_EXT_EN_SHIFT      (6U)
#define CRU_GLB_RST_CON_TSADC_SHUT_RESET_EXT_EN_MASK       (0x1U << CRU_GLB_RST_CON_TSADC_SHUT_RESET_EXT_EN_SHIFT)      /* 0x00000040 */
#define CRU_GLB_RST_CON_WDT_RESET_EXT_EN_SHIFT             (7U)
#define CRU_GLB_RST_CON_WDT_RESET_EXT_EN_MASK              (0x1U << CRU_GLB_RST_CON_WDT_RESET_EXT_EN_SHIFT)             /* 0x00000080 */
/* HWFFC_CON0 */
#define CRU_HWFFC_CON0_CLK_CORE_DIV_CON_SHIFT              (0U)
#define CRU_HWFFC_CON0_CLK_CORE_DIV_CON_MASK               (0xFU << CRU_HWFFC_CON0_CLK_CORE_DIV_CON_SHIFT)              /* 0x0000000F */
#define CRU_HWFFC_CON0_BACKUPPLL_SEL_SHIFT                 (7U)
#define CRU_HWFFC_CON0_BACKUPPLL_SEL_MASK                  (0x1U << CRU_HWFFC_CON0_BACKUPPLL_SEL_SHIFT)                 /* 0x00000080 */
#define CRU_HWFFC_CON0_HWFFC_REQ_SHIFT                     (8U)
#define CRU_HWFFC_CON0_HWFFC_REQ_MASK                      (0x1U << CRU_HWFFC_CON0_HWFFC_REQ_SHIFT)                     /* 0x00000100 */
#define CRU_HWFFC_CON0_HWFFC_MODE_SHIFT                    (9U)
#define CRU_HWFFC_CON0_HWFFC_MODE_MASK                     (0x1U << CRU_HWFFC_CON0_HWFFC_MODE_SHIFT)                    /* 0x00000200 */
/* HWFFC_TH */
#define CRU_HWFFC_TH_PLL_PD_EXTEND_TH_SHIFT                (0U)
#define CRU_HWFFC_TH_PLL_PD_EXTEND_TH_MASK                 (0xFFU << CRU_HWFFC_TH_PLL_PD_EXTEND_TH_SHIFT)               /* 0x000000FF */
#define CRU_HWFFC_TH_SWITCH_TH_SHIFT                       (8U)
#define CRU_HWFFC_TH_SWITCH_TH_MASK                        (0xFFU << CRU_HWFFC_TH_SWITCH_TH_SHIFT)                      /* 0x0000FF00 */
/* HWFFC_INTST */
#define CRU_HWFFC_INTST_HWFFC_DONE_SHIFT                   (0U)
#define CRU_HWFFC_INTST_HWFFC_DONE_MASK                    (0x1U << CRU_HWFFC_INTST_HWFFC_DONE_SHIFT)                   /* 0x00000001 */
/* APLL_CON0_S */
#define CRU_APLL_CON0_S_FBDIV_SHIFT                        (0U)
#define CRU_APLL_CON0_S_FBDIV_MASK                         (0xFFFU << CRU_APLL_CON0_S_FBDIV_SHIFT)                      /* 0x00000FFF */
#define CRU_APLL_CON0_S_POSTDIV1_SHIFT                     (12U)
#define CRU_APLL_CON0_S_POSTDIV1_MASK                      (0x7U << CRU_APLL_CON0_S_POSTDIV1_SHIFT)                     /* 0x00007000 */
#define CRU_APLL_CON0_S_BYPASS_SHIFT                       (15U)
#define CRU_APLL_CON0_S_BYPASS_MASK                        (0x1U << CRU_APLL_CON0_S_BYPASS_SHIFT)                       /* 0x00008000 */
/* APLL_CON1_S */
#define CRU_APLL_CON1_S_REFDIV_SHIFT                       (0U)
#define CRU_APLL_CON1_S_REFDIV_MASK                        (0x3FU << CRU_APLL_CON1_S_REFDIV_SHIFT)                      /* 0x0000003F */
#define CRU_APLL_CON1_S_POSTDIV2_SHIFT                     (6U)
#define CRU_APLL_CON1_S_POSTDIV2_MASK                      (0x7U << CRU_APLL_CON1_S_POSTDIV2_SHIFT)                     /* 0x000001C0 */
#define CRU_APLL_CON1_S_PLL_LOCK_SHIFT                     (10U)
#define CRU_APLL_CON1_S_PLL_LOCK_MASK                      (0x1U << CRU_APLL_CON1_S_PLL_LOCK_SHIFT)                     /* 0x00000400 */
#define CRU_APLL_CON1_S_DSMPD_SHIFT                        (12U)
#define CRU_APLL_CON1_S_DSMPD_MASK                         (0x1U << CRU_APLL_CON1_S_DSMPD_SHIFT)                        /* 0x00001000 */
#define CRU_APLL_CON1_S_PLLPD0_SHIFT                       (13U)
#define CRU_APLL_CON1_S_PLLPD0_MASK                        (0x1U << CRU_APLL_CON1_S_PLLPD0_SHIFT)                       /* 0x00002000 */
#define CRU_APLL_CON1_S_PLLPD1_SHIFT                       (14U)
#define CRU_APLL_CON1_S_PLLPD1_MASK                        (0x1U << CRU_APLL_CON1_S_PLLPD1_SHIFT)                       /* 0x00004000 */
#define CRU_APLL_CON1_S_PLLPDSEL_SHIFT                     (15U)
#define CRU_APLL_CON1_S_PLLPDSEL_MASK                      (0x1U << CRU_APLL_CON1_S_PLLPDSEL_SHIFT)                     /* 0x00008000 */
/* CLKSEL_CON0_S */
#define CRU_CLKSEL_CON0_S_CLK_CORE_DIV_CON_SHIFT           (0U)
#define CRU_CLKSEL_CON0_S_CLK_CORE_DIV_CON_MASK            (0xFU << CRU_CLKSEL_CON0_S_CLK_CORE_DIV_CON_SHIFT)           /* 0x0000000F */
#define CRU_CLKSEL_CON0_S_CORE_CLK_PLL_SEL_SHIFT           (6U)
#define CRU_CLKSEL_CON0_S_CORE_CLK_PLL_SEL_MASK            (0x3U << CRU_CLKSEL_CON0_S_CORE_CLK_PLL_SEL_SHIFT)           /* 0x000000C0 */
#define CRU_CLKSEL_CON0_S_CORE_DBG_DIV_CON_SHIFT           (8U)
#define CRU_CLKSEL_CON0_S_CORE_DBG_DIV_CON_MASK            (0xFU << CRU_CLKSEL_CON0_S_CORE_DBG_DIV_CON_SHIFT)           /* 0x00000F00 */
#define CRU_CLKSEL_CON0_S_ACLK_CORE_DIV_CON_SHIFT          (12U)
#define CRU_CLKSEL_CON0_S_ACLK_CORE_DIV_CON_MASK           (0x7U << CRU_CLKSEL_CON0_S_ACLK_CORE_DIV_CON_SHIFT)          /* 0x00007000 */
/* CLKSEL_CON0 */
#define CRU_CLKSEL_CON0_CLK_CORE_DIV_CON_SHIFT             (0U)
#define CRU_CLKSEL_CON0_CLK_CORE_DIV_CON_MASK              (0xFU << CRU_CLKSEL_CON0_CLK_CORE_DIV_CON_SHIFT)             /* 0x0000000F */
#define CRU_CLKSEL_CON0_CORE_CLK_PLL_SEL_SHIFT             (6U)
#define CRU_CLKSEL_CON0_CORE_CLK_PLL_SEL_MASK              (0x3U << CRU_CLKSEL_CON0_CORE_CLK_PLL_SEL_SHIFT)             /* 0x000000C0 */
#define CRU_CLKSEL_CON0_CORE_DBG_DIV_CON_SHIFT             (8U)
#define CRU_CLKSEL_CON0_CORE_DBG_DIV_CON_MASK              (0xFU << CRU_CLKSEL_CON0_CORE_DBG_DIV_CON_SHIFT)             /* 0x00000F00 */
#define CRU_CLKSEL_CON0_ACLK_CORE_DIV_CON_SHIFT            (12U)
#define CRU_CLKSEL_CON0_ACLK_CORE_DIV_CON_MASK             (0x7U << CRU_CLKSEL_CON0_ACLK_CORE_DIV_CON_SHIFT)            /* 0x00007000 */
/* CLKSEL_CON1 */
#define CRU_CLKSEL_CON1_CLK_NPU_DIV_CON_SHIFT              (0U)
#define CRU_CLKSEL_CON1_CLK_NPU_DIV_CON_MASK               (0xFU << CRU_CLKSEL_CON1_CLK_NPU_DIV_CON_SHIFT)              /* 0x0000000F */
#define CRU_CLKSEL_CON1_CLK_NPU_NP5_DIV_CON_SHIFT          (4U)
#define CRU_CLKSEL_CON1_CLK_NPU_NP5_DIV_CON_MASK           (0xFU << CRU_CLKSEL_CON1_CLK_NPU_NP5_DIV_CON_SHIFT)          /* 0x000000F0 */
#define CRU_CLKSEL_CON1_NPU_PLL_CLK_SEL_SHIFT              (8U)
#define CRU_CLKSEL_CON1_NPU_PLL_CLK_SEL_MASK               (0x3U << CRU_CLKSEL_CON1_NPU_PLL_CLK_SEL_SHIFT)              /* 0x00000300 */
#define CRU_CLKSEL_CON1_NPU_NP5_PLL_CLK_SEL_SHIFT          (10U)
#define CRU_CLKSEL_CON1_NPU_NP5_PLL_CLK_SEL_MASK           (0x3U << CRU_CLKSEL_CON1_NPU_NP5_PLL_CLK_SEL_SHIFT)          /* 0x00000C00 */
#define CRU_CLKSEL_CON1_NPU_SRC_CLK_SEL_SHIFT              (15U)
#define CRU_CLKSEL_CON1_NPU_SRC_CLK_SEL_MASK               (0x1U << CRU_CLKSEL_CON1_NPU_SRC_CLK_SEL_SHIFT)              /* 0x00008000 */
/* CLKSEL_CON2 */
#define CRU_CLKSEL_CON2_ACLK_NPU_DIV_CON_SHIFT             (0U)
#define CRU_CLKSEL_CON2_ACLK_NPU_DIV_CON_MASK              (0xFU << CRU_CLKSEL_CON2_ACLK_NPU_DIV_CON_SHIFT)             /* 0x0000000F */
#define CRU_CLKSEL_CON2_ACLK_NPU2MEM_DIV_CON_SHIFT         (4U)
#define CRU_CLKSEL_CON2_ACLK_NPU2MEM_DIV_CON_MASK          (0xFU << CRU_CLKSEL_CON2_ACLK_NPU2MEM_DIV_CON_SHIFT)         /* 0x000000F0 */
#define CRU_CLKSEL_CON2_HCLK_NPU_DIV_CON_SHIFT             (8U)
#define CRU_CLKSEL_CON2_HCLK_NPU_DIV_CON_MASK              (0xFU << CRU_CLKSEL_CON2_HCLK_NPU_DIV_CON_SHIFT)             /* 0x00000F00 */
#define CRU_CLKSEL_CON2_NPU_ACLK_PLL_SEL_SHIFT             (14U)
#define CRU_CLKSEL_CON2_NPU_ACLK_PLL_SEL_MASK              (0x1U << CRU_CLKSEL_CON2_NPU_ACLK_PLL_SEL_SHIFT)             /* 0x00004000 */
#define CRU_CLKSEL_CON2_NPU_HCLK_PLL_SEL_SHIFT             (15U)
#define CRU_CLKSEL_CON2_NPU_HCLK_PLL_SEL_MASK              (0x1U << CRU_CLKSEL_CON2_NPU_HCLK_PLL_SEL_SHIFT)             /* 0x00008000 */
/* CLKSEL_CON3 */
#define CRU_CLKSEL_CON3_DDRPHY1X_DIV_CON_SHIFT             (0U)
#define CRU_CLKSEL_CON3_DDRPHY1X_DIV_CON_MASK              (0x1FU << CRU_CLKSEL_CON3_DDRPHY1X_DIV_CON_SHIFT)            /* 0x0000001F */
#define CRU_CLKSEL_CON3_DDRPHY1X_PLL_CLK_SEL_SHIFT         (7U)
#define CRU_CLKSEL_CON3_DDRPHY1X_PLL_CLK_SEL_MASK          (0x1U << CRU_CLKSEL_CON3_DDRPHY1X_PLL_CLK_SEL_SHIFT)         /* 0x00000080 */
#define CRU_CLKSEL_CON3_PCLK_DDR_DIV_CON_SHIFT             (8U)
#define CRU_CLKSEL_CON3_PCLK_DDR_DIV_CON_MASK              (0x1FU << CRU_CLKSEL_CON3_PCLK_DDR_DIV_CON_SHIFT)            /* 0x00001F00 */
/* CLKSEL_CON4 */
#define CRU_CLKSEL_CON4_HSCLK_VIO_DIV_CON_SHIFT            (0U)
#define CRU_CLKSEL_CON4_HSCLK_VIO_DIV_CON_MASK             (0x1FU << CRU_CLKSEL_CON4_HSCLK_VIO_DIV_CON_SHIFT)           /* 0x0000001F */
#define CRU_CLKSEL_CON4_HSCLK_VIO_PLL_SEL_SHIFT            (7U)
#define CRU_CLKSEL_CON4_HSCLK_VIO_PLL_SEL_MASK             (0x1U << CRU_CLKSEL_CON4_HSCLK_VIO_PLL_SEL_SHIFT)            /* 0x00000080 */
#define CRU_CLKSEL_CON4_LSCLK_VIO_DIV_CON_SHIFT            (8U)
#define CRU_CLKSEL_CON4_LSCLK_VIO_DIV_CON_MASK             (0xFU << CRU_CLKSEL_CON4_LSCLK_VIO_DIV_CON_SHIFT)            /* 0x00000F00 */
/* CLKSEL_CON5 */
#define CRU_CLKSEL_CON5_DCLK_VOPRAW_DIV_CON_SHIFT          (0U)
#define CRU_CLKSEL_CON5_DCLK_VOPRAW_DIV_CON_MASK           (0xFFU << CRU_CLKSEL_CON5_DCLK_VOPRAW_DIV_CON_SHIFT)         /* 0x000000FF */
#define CRU_CLKSEL_CON5_DCLK_VOPRAW_PLL_SEL_SHIFT          (10U)
#define CRU_CLKSEL_CON5_DCLK_VOPRAW_PLL_SEL_MASK           (0x3U << CRU_CLKSEL_CON5_DCLK_VOPRAW_PLL_SEL_SHIFT)          /* 0x00000C00 */
#define CRU_CLKSEL_CON5_DCLK_VOPRAW_SEL_SHIFT              (14U)
#define CRU_CLKSEL_CON5_DCLK_VOPRAW_SEL_MASK               (0x3U << CRU_CLKSEL_CON5_DCLK_VOPRAW_SEL_SHIFT)              /* 0x0000C000 */
/* CLKSEL_CON6 */
#define CRU_CLKSEL_CON6_DCLK_VOPRAW_FRAC_DIV_CON_SHIFT     (0U)
#define CRU_CLKSEL_CON6_DCLK_VOPRAW_FRAC_DIV_CON_MASK      (0xFFFFFFFFU << CRU_CLKSEL_CON6_DCLK_VOPRAW_FRAC_DIV_CON_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON7 */
#define CRU_CLKSEL_CON7_DCLK_VOPLITE_DIV_CON_SHIFT         (0U)
#define CRU_CLKSEL_CON7_DCLK_VOPLITE_DIV_CON_MASK          (0xFFU << CRU_CLKSEL_CON7_DCLK_VOPLITE_DIV_CON_SHIFT)        /* 0x000000FF */
#define CRU_CLKSEL_CON7_DCLK_VOPLITE_PLL_SEL_SHIFT         (10U)
#define CRU_CLKSEL_CON7_DCLK_VOPLITE_PLL_SEL_MASK          (0x3U << CRU_CLKSEL_CON7_DCLK_VOPLITE_PLL_SEL_SHIFT)         /* 0x00000C00 */
#define CRU_CLKSEL_CON7_DCLK_VOPLITE_SEL_SHIFT             (14U)
#define CRU_CLKSEL_CON7_DCLK_VOPLITE_SEL_MASK              (0x3U << CRU_CLKSEL_CON7_DCLK_VOPLITE_SEL_SHIFT)             /* 0x0000C000 */
/* CLKSEL_CON8 */
#define CRU_CLKSEL_CON8_DCLK_VOPLITE_FRAC_DIV_CON_SHIFT    (0U)
#define CRU_CLKSEL_CON8_DCLK_VOPLITE_FRAC_DIV_CON_MASK     (0xFFFFFFFFU << CRU_CLKSEL_CON8_DCLK_VOPLITE_FRAC_DIV_CON_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON9 */
#define CRU_CLKSEL_CON9_CLK_TXESC_DIV_CON_SHIFT            (0U)
#define CRU_CLKSEL_CON9_CLK_TXESC_DIV_CON_MASK             (0xFFFU << CRU_CLKSEL_CON9_CLK_TXESC_DIV_CON_SHIFT)          /* 0x00000FFF */
/* CLKSEL_CON10 */
#define CRU_CLKSEL_CON10_CLK_RGA_CORE_DIV_CON_SHIFT        (0U)
#define CRU_CLKSEL_CON10_CLK_RGA_CORE_DIV_CON_MASK         (0x1FU << CRU_CLKSEL_CON10_CLK_RGA_CORE_DIV_CON_SHIFT)       /* 0x0000001F */
#define CRU_CLKSEL_CON10_CLK_RGA_CORE_PLL_SEL_SHIFT        (6U)
#define CRU_CLKSEL_CON10_CLK_RGA_CORE_PLL_SEL_MASK         (0x3U << CRU_CLKSEL_CON10_CLK_RGA_CORE_PLL_SEL_SHIFT)        /* 0x000000C0 */
#define CRU_CLKSEL_CON10_CLK_ISP_DIV_CON_SHIFT             (8U)
#define CRU_CLKSEL_CON10_CLK_ISP_DIV_CON_MASK              (0x1FU << CRU_CLKSEL_CON10_CLK_ISP_DIV_CON_SHIFT)            /* 0x00001F00 */
#define CRU_CLKSEL_CON10_CLK_ISP_PLL_SEL_SHIFT             (14U)
#define CRU_CLKSEL_CON10_CLK_ISP_PLL_SEL_MASK              (0x3U << CRU_CLKSEL_CON10_CLK_ISP_PLL_SEL_SHIFT)             /* 0x0000C000 */
/* CLKSEL_CON11 */
#define CRU_CLKSEL_CON11_CLK_CIF_OUT_DIV_CON_SHIFT         (0U)
#define CRU_CLKSEL_CON11_CLK_CIF_OUT_DIV_CON_MASK          (0x3FU << CRU_CLKSEL_CON11_CLK_CIF_OUT_DIV_CON_SHIFT)        /* 0x0000003F */
#define CRU_CLKSEL_CON11_CLK_CIF_OUT_PLL_SEL_SHIFT         (6U)
#define CRU_CLKSEL_CON11_CLK_CIF_OUT_PLL_SEL_MASK          (0x3U << CRU_CLKSEL_CON11_CLK_CIF_OUT_PLL_SEL_SHIFT)         /* 0x000000C0 */
#define CRU_CLKSEL_CON11_DCLK_CIF_DIV_CON_SHIFT            (8U)
#define CRU_CLKSEL_CON11_DCLK_CIF_DIV_CON_MASK             (0x1FU << CRU_CLKSEL_CON11_DCLK_CIF_DIV_CON_SHIFT)           /* 0x00001F00 */
#define CRU_CLKSEL_CON11_DCLK_CIF_PLL_SEL_SHIFT            (14U)
#define CRU_CLKSEL_CON11_DCLK_CIF_PLL_SEL_MASK             (0x3U << CRU_CLKSEL_CON11_DCLK_CIF_PLL_SEL_SHIFT)            /* 0x0000C000 */
/* CLKSEL_CON12 */
#define CRU_CLKSEL_CON12_HSCLK_PCIE_DIV_CON_SHIFT          (0U)
#define CRU_CLKSEL_CON12_HSCLK_PCIE_DIV_CON_MASK           (0x1FU << CRU_CLKSEL_CON12_HSCLK_PCIE_DIV_CON_SHIFT)         /* 0x0000001F */
#define CRU_CLKSEL_CON12_LSCLK_PCIE_DIV_CON_SHIFT          (8U)
#define CRU_CLKSEL_CON12_LSCLK_PCIE_DIV_CON_MASK           (0x1FU << CRU_CLKSEL_CON12_LSCLK_PCIE_DIV_CON_SHIFT)         /* 0x00001F00 */
#define CRU_CLKSEL_CON12_PDCLK_PCIE_PLL_SEL_SHIFT          (15U)
#define CRU_CLKSEL_CON12_PDCLK_PCIE_PLL_SEL_MASK           (0x1U << CRU_CLKSEL_CON12_PDCLK_PCIE_PLL_SEL_SHIFT)          /* 0x00008000 */
/* CLKSEL_CON13 */
#define CRU_CLKSEL_CON13_CLK_USB3_OTG_SUSPEND_DIV_CON_SHIFT (0U)
#define CRU_CLKSEL_CON13_CLK_USB3_OTG_SUSPEND_DIV_CON_MASK (0x3FFU << CRU_CLKSEL_CON13_CLK_USB3_OTG_SUSPEND_DIV_CON_SHIFT) /* 0x000003FF */
#define CRU_CLKSEL_CON13_USB3_OTG_SUSPEND_SRC_SEL_SHIFT    (12U)
#define CRU_CLKSEL_CON13_USB3_OTG_SUSPEND_SRC_SEL_MASK     (0x1U << CRU_CLKSEL_CON13_USB3_OTG_SUSPEND_SRC_SEL_SHIFT)    /* 0x00001000 */
/* CLKSEL_CON14 */
#define CRU_CLKSEL_CON14_CLK_PCIE_AUX_DIV_CON_SHIFT        (0U)
#define CRU_CLKSEL_CON14_CLK_PCIE_AUX_DIV_CON_MASK         (0x7FU << CRU_CLKSEL_CON14_CLK_PCIE_AUX_DIV_CON_SHIFT)       /* 0x0000007F */
#define CRU_CLKSEL_CON14_CLK_PCIE_AUX_PLL_SEL_SHIFT        (8U)
#define CRU_CLKSEL_CON14_CLK_PCIE_AUX_PLL_SEL_MASK         (0x3U << CRU_CLKSEL_CON14_CLK_PCIE_AUX_PLL_SEL_SHIFT)        /* 0x00000300 */
#define CRU_CLKSEL_CON14_CLK_PCIE_AUX_SRC_SEL_SHIFT        (12U)
#define CRU_CLKSEL_CON14_CLK_PCIE_AUX_SRC_SEL_MASK         (0x1U << CRU_CLKSEL_CON14_CLK_PCIE_AUX_SRC_SEL_SHIFT)        /* 0x00001000 */
/* CLKSEL_CON15 */
#define CRU_CLKSEL_CON15_ACLK_PCIE_DIV_CON_SHIFT           (0U)
#define CRU_CLKSEL_CON15_ACLK_PCIE_DIV_CON_MASK            (0xFU << CRU_CLKSEL_CON15_ACLK_PCIE_DIV_CON_SHIFT)           /* 0x0000000F */
#define CRU_CLKSEL_CON15_PCLK_PCIE_DIV_CON_SHIFT           (4U)
#define CRU_CLKSEL_CON15_PCLK_PCIE_DIV_CON_MASK            (0xFU << CRU_CLKSEL_CON15_PCLK_PCIE_DIV_CON_SHIFT)           /* 0x000000F0 */
#define CRU_CLKSEL_CON15_ACLK_PCIE_PLL_SEL_SHIFT           (8U)
#define CRU_CLKSEL_CON15_ACLK_PCIE_PLL_SEL_MASK            (0x1U << CRU_CLKSEL_CON15_ACLK_PCIE_PLL_SEL_SHIFT)           /* 0x00000100 */
#define CRU_CLKSEL_CON15_GIC_PLL_CLK_SEL_SHIFT             (11U)
#define CRU_CLKSEL_CON15_GIC_PLL_CLK_SEL_MASK              (0x1U << CRU_CLKSEL_CON15_GIC_PLL_CLK_SEL_SHIFT)             /* 0x00000800 */
#define CRU_CLKSEL_CON15_ACLK_GIC_DIV_CON_SHIFT            (12U)
#define CRU_CLKSEL_CON15_ACLK_GIC_DIV_CON_MASK             (0xFU << CRU_CLKSEL_CON15_ACLK_GIC_DIV_CON_SHIFT)            /* 0x0000F000 */
/* CLKSEL_CON16 */
#define CRU_CLKSEL_CON16_ACLK_VPU_DIV_CON_SHIFT            (0U)
#define CRU_CLKSEL_CON16_ACLK_VPU_DIV_CON_MASK             (0x1FU << CRU_CLKSEL_CON16_ACLK_VPU_DIV_CON_SHIFT)           /* 0x0000001F */
#define CRU_CLKSEL_CON16_ACLK_VPU_PLL_CLK_SEL_SHIFT        (7U)
#define CRU_CLKSEL_CON16_ACLK_VPU_PLL_CLK_SEL_MASK         (0x1U << CRU_CLKSEL_CON16_ACLK_VPU_PLL_CLK_SEL_SHIFT)        /* 0x00000080 */
#define CRU_CLKSEL_CON16_PCLK_VPU_DIV_CON_SHIFT            (8U)
#define CRU_CLKSEL_CON16_PCLK_VPU_DIV_CON_MASK             (0xFU << CRU_CLKSEL_CON16_PCLK_VPU_DIV_CON_SHIFT)            /* 0x00000F00 */
/* CLKSEL_CON17 */
#define CRU_CLKSEL_CON17_ACLK_IMEM_DIV_CON_SHIFT           (0U)
#define CRU_CLKSEL_CON17_ACLK_IMEM_DIV_CON_MASK            (0x1FU << CRU_CLKSEL_CON17_ACLK_IMEM_DIV_CON_SHIFT)          /* 0x0000001F */
#define CRU_CLKSEL_CON17_ACLK_IMEM_PLL_CLK_SEL_SHIFT       (7U)
#define CRU_CLKSEL_CON17_ACLK_IMEM_PLL_CLK_SEL_MASK        (0x1U << CRU_CLKSEL_CON17_ACLK_IMEM_PLL_CLK_SEL_SHIFT)       /* 0x00000080 */
#define CRU_CLKSEL_CON17_HSCLK_IMEM_DIV_CON_SHIFT          (8U)
#define CRU_CLKSEL_CON17_HSCLK_IMEM_DIV_CON_MASK           (0x1FU << CRU_CLKSEL_CON17_HSCLK_IMEM_DIV_CON_SHIFT)         /* 0x00001F00 */
#define CRU_CLKSEL_CON17_HSCLK_IMEM_PLL_CLK_SEL_SHIFT      (15U)
#define CRU_CLKSEL_CON17_HSCLK_IMEM_PLL_CLK_SEL_MASK       (0x1U << CRU_CLKSEL_CON17_HSCLK_IMEM_PLL_CLK_SEL_SHIFT)      /* 0x00008000 */
/* CLKSEL_CON18 */
#define CRU_CLKSEL_CON18_MSCLK_CORE_NIU_DIV_CON_SHIFT      (0U)
#define CRU_CLKSEL_CON18_MSCLK_CORE_NIU_DIV_CON_MASK       (0x1FU << CRU_CLKSEL_CON18_MSCLK_CORE_NIU_DIV_CON_SHIFT)     /* 0x0000001F */
#define CRU_CLKSEL_CON18_CLK_GMAC_OUT_DIV_CON_SHIFT        (8U)
#define CRU_CLKSEL_CON18_CLK_GMAC_OUT_DIV_CON_MASK         (0x1FU << CRU_CLKSEL_CON18_CLK_GMAC_OUT_DIV_CON_SHIFT)       /* 0x00001F00 */
#define CRU_CLKSEL_CON18_CLK_GMAC_OUT_PLL_SEL_SHIFT        (14U)
#define CRU_CLKSEL_CON18_CLK_GMAC_OUT_PLL_SEL_MASK         (0x3U << CRU_CLKSEL_CON18_CLK_GMAC_OUT_PLL_SEL_SHIFT)        /* 0x0000C000 */
/* CLKSEL_CON19 */
#define CRU_CLKSEL_CON19_MSCLK_PERI_DIV_CON_SHIFT          (0U)
#define CRU_CLKSEL_CON19_MSCLK_PERI_DIV_CON_MASK           (0x1FU << CRU_CLKSEL_CON19_MSCLK_PERI_DIV_CON_SHIFT)         /* 0x0000001F */
#define CRU_CLKSEL_CON19_LSCLK_PERI_DIV_CON_SHIFT          (8U)
#define CRU_CLKSEL_CON19_LSCLK_PERI_DIV_CON_MASK           (0x1FU << CRU_CLKSEL_CON19_LSCLK_PERI_DIV_CON_SHIFT)         /* 0x00001F00 */
#define CRU_CLKSEL_CON19_PD_PERI_PLL_SEL_SHIFT             (15U)
#define CRU_CLKSEL_CON19_PD_PERI_PLL_SEL_MASK              (0x1U << CRU_CLKSEL_CON19_PD_PERI_PLL_SEL_SHIFT)             /* 0x00008000 */
/* CLKSEL_CON20 */
#define CRU_CLKSEL_CON20_CLK_SDMMC_DIV_CON_SHIFT           (0U)
#define CRU_CLKSEL_CON20_CLK_SDMMC_DIV_CON_MASK            (0xFFU << CRU_CLKSEL_CON20_CLK_SDMMC_DIV_CON_SHIFT)          /* 0x000000FF */
#define CRU_CLKSEL_CON20_CLK_SDMMC_PLL_SEL_SHIFT           (14U)
#define CRU_CLKSEL_CON20_CLK_SDMMC_PLL_SEL_MASK            (0x3U << CRU_CLKSEL_CON20_CLK_SDMMC_PLL_SEL_SHIFT)           /* 0x0000C000 */
/* CLKSEL_CON21 */
#define CRU_CLKSEL_CON21_CLK_SDMMC_DIV50_DIV_CON_SHIFT     (0U)
#define CRU_CLKSEL_CON21_CLK_SDMMC_DIV50_DIV_CON_MASK      (0xFFU << CRU_CLKSEL_CON21_CLK_SDMMC_DIV50_DIV_CON_SHIFT)    /* 0x000000FF */
#define CRU_CLKSEL_CON21_CLK_SDMMC_SEL_SHIFT               (15U)
#define CRU_CLKSEL_CON21_CLK_SDMMC_SEL_MASK                (0x1U << CRU_CLKSEL_CON21_CLK_SDMMC_SEL_SHIFT)               /* 0x00008000 */
/* CLKSEL_CON22 */
#define CRU_CLKSEL_CON22_CLK_SDIO_DIV_CON_SHIFT            (0U)
#define CRU_CLKSEL_CON22_CLK_SDIO_DIV_CON_MASK             (0xFFU << CRU_CLKSEL_CON22_CLK_SDIO_DIV_CON_SHIFT)           /* 0x000000FF */
#define CRU_CLKSEL_CON22_CLK_SDIO_PLL_SEL_SHIFT            (14U)
#define CRU_CLKSEL_CON22_CLK_SDIO_PLL_SEL_MASK             (0x3U << CRU_CLKSEL_CON22_CLK_SDIO_PLL_SEL_SHIFT)            /* 0x0000C000 */
/* CLKSEL_CON23 */
#define CRU_CLKSEL_CON23_CLK_SDIO_DIV50_DIV_CON_SHIFT      (0U)
#define CRU_CLKSEL_CON23_CLK_SDIO_DIV50_DIV_CON_MASK       (0xFFU << CRU_CLKSEL_CON23_CLK_SDIO_DIV50_DIV_CON_SHIFT)     /* 0x000000FF */
#define CRU_CLKSEL_CON23_CLK_SDIO_SEL_SHIFT                (15U)
#define CRU_CLKSEL_CON23_CLK_SDIO_SEL_MASK                 (0x1U << CRU_CLKSEL_CON23_CLK_SDIO_SEL_SHIFT)                /* 0x00008000 */
/* CLKSEL_CON24 */
#define CRU_CLKSEL_CON24_CLK_EMMC_DIV_CON_SHIFT            (0U)
#define CRU_CLKSEL_CON24_CLK_EMMC_DIV_CON_MASK             (0xFFU << CRU_CLKSEL_CON24_CLK_EMMC_DIV_CON_SHIFT)           /* 0x000000FF */
#define CRU_CLKSEL_CON24_CLK_EMMC_PLL_SEL_SHIFT            (14U)
#define CRU_CLKSEL_CON24_CLK_EMMC_PLL_SEL_MASK             (0x3U << CRU_CLKSEL_CON24_CLK_EMMC_PLL_SEL_SHIFT)            /* 0x0000C000 */
/* CLKSEL_CON25 */
#define CRU_CLKSEL_CON25_CLK_EMMC_DIV50_DIV_CON_SHIFT      (0U)
#define CRU_CLKSEL_CON25_CLK_EMMC_DIV50_DIV_CON_MASK       (0xFFU << CRU_CLKSEL_CON25_CLK_EMMC_DIV50_DIV_CON_SHIFT)     /* 0x000000FF */
#define CRU_CLKSEL_CON25_CLK_EMMC_SEL_SHIFT                (15U)
#define CRU_CLKSEL_CON25_CLK_EMMC_SEL_MASK                 (0x1U << CRU_CLKSEL_CON25_CLK_EMMC_SEL_SHIFT)                /* 0x00008000 */
/* CLKSEL_CON26 */
#define CRU_CLKSEL_CON26_CLK_SFC_DIV_CON_SHIFT             (0U)
#define CRU_CLKSEL_CON26_CLK_SFC_DIV_CON_MASK              (0x7FU << CRU_CLKSEL_CON26_CLK_SFC_DIV_CON_SHIFT)            /* 0x0000007F */
#define CRU_CLKSEL_CON26_CLK_SFC_PLL_SEL_SHIFT             (7U)
#define CRU_CLKSEL_CON26_CLK_SFC_PLL_SEL_MASK              (0x1U << CRU_CLKSEL_CON26_CLK_SFC_PLL_SEL_SHIFT)             /* 0x00000080 */
#define CRU_CLKSEL_CON26_CLK_GMAC_DIV_CON_SHIFT            (8U)
#define CRU_CLKSEL_CON26_CLK_GMAC_DIV_CON_MASK             (0x1FU << CRU_CLKSEL_CON26_CLK_GMAC_DIV_CON_SHIFT)           /* 0x00001F00 */
#define CRU_CLKSEL_CON26_CLK_GMAC_PLL_SEL_SHIFT            (14U)
#define CRU_CLKSEL_CON26_CLK_GMAC_PLL_SEL_MASK             (0x3U << CRU_CLKSEL_CON26_CLK_GMAC_PLL_SEL_SHIFT)            /* 0x0000C000 */
/* CLKSEL_CON27 */
#define CRU_CLKSEL_CON27_RMII_EXTCLKSRC_SEL_SHIFT          (0U)
#define CRU_CLKSEL_CON27_RMII_EXTCLKSRC_SEL_MASK           (0x1U << CRU_CLKSEL_CON27_RMII_EXTCLKSRC_SEL_SHIFT)          /* 0x00000001 */
#define CRU_CLKSEL_CON27_RMII_CLK_SEL_SHIFT                (1U)
#define CRU_CLKSEL_CON27_RMII_CLK_SEL_MASK                 (0x1U << CRU_CLKSEL_CON27_RMII_CLK_SEL_SHIFT)                /* 0x00000002 */
#define CRU_CLKSEL_CON27_GMAC_CLK_SEL_SHIFT                (2U)
#define CRU_CLKSEL_CON27_GMAC_CLK_SEL_MASK                 (0x3U << CRU_CLKSEL_CON27_GMAC_CLK_SEL_SHIFT)                /* 0x0000000C */
#define CRU_CLKSEL_CON27_RMII_MODE_SHIFT                   (4U)
#define CRU_CLKSEL_CON27_RMII_MODE_MASK                    (0x1U << CRU_CLKSEL_CON27_RMII_MODE_SHIFT)                   /* 0x00000010 */
#define CRU_CLKSEL_CON27_HSCLK_BUS_DIV_CON_SHIFT           (8U)
#define CRU_CLKSEL_CON27_HSCLK_BUS_DIV_CON_MASK            (0x1FU << CRU_CLKSEL_CON27_HSCLK_BUS_DIV_CON_SHIFT)          /* 0x00001F00 */
#define CRU_CLKSEL_CON27_PDBUS_CLK_PLL_SEL_SHIFT           (15U)
#define CRU_CLKSEL_CON27_PDBUS_CLK_PLL_SEL_MASK            (0x1U << CRU_CLKSEL_CON27_PDBUS_CLK_PLL_SEL_SHIFT)           /* 0x00008000 */
/* CLKSEL_CON28 */
#define CRU_CLKSEL_CON28_MSCLK_BUS_DIV_CON_SHIFT           (0U)
#define CRU_CLKSEL_CON28_MSCLK_BUS_DIV_CON_MASK            (0x1FU << CRU_CLKSEL_CON28_MSCLK_BUS_DIV_CON_SHIFT)          /* 0x0000001F */
#define CRU_CLKSEL_CON28_LSCLK_BUS_DIV_CON_SHIFT           (8U)
#define CRU_CLKSEL_CON28_LSCLK_BUS_DIV_CON_MASK            (0x1FU << CRU_CLKSEL_CON28_LSCLK_BUS_DIV_CON_SHIFT)          /* 0x00001F00 */
/* CLKSEL_CON29 */
#define CRU_CLKSEL_CON29_CLK_CRYPTO_DIV_CON_SHIFT          (0U)
#define CRU_CLKSEL_CON29_CLK_CRYPTO_DIV_CON_MASK           (0x1FU << CRU_CLKSEL_CON29_CLK_CRYPTO_DIV_CON_SHIFT)         /* 0x0000001F */
#define CRU_CLKSEL_CON29_CLK_CRYPTO_PLL_SEL_SHIFT          (7U)
#define CRU_CLKSEL_CON29_CLK_CRYPTO_PLL_SEL_MASK           (0x1U << CRU_CLKSEL_CON29_CLK_CRYPTO_PLL_SEL_SHIFT)          /* 0x00000080 */
#define CRU_CLKSEL_CON29_CLK_CRYPTO_APK_DIV_CON_SHIFT      (8U)
#define CRU_CLKSEL_CON29_CLK_CRYPTO_APK_DIV_CON_MASK       (0x1FU << CRU_CLKSEL_CON29_CLK_CRYPTO_APK_DIV_CON_SHIFT)     /* 0x00001F00 */
#define CRU_CLKSEL_CON29_CLK_CRYPTO_APK_SEL_SHIFT          (15U)
#define CRU_CLKSEL_CON29_CLK_CRYPTO_APK_SEL_MASK           (0x1U << CRU_CLKSEL_CON29_CLK_CRYPTO_APK_SEL_SHIFT)          /* 0x00008000 */
/* CLKSEL_CON30 */
#define CRU_CLKSEL_CON30_CLK_PDM_DIV_CON_SHIFT             (0U)
#define CRU_CLKSEL_CON30_CLK_PDM_DIV_CON_MASK              (0x7FU << CRU_CLKSEL_CON30_CLK_PDM_DIV_CON_SHIFT)            /* 0x0000007F */
#define CRU_CLKSEL_CON30_CLK_PDM_PLL_SEL_SHIFT             (8U)
#define CRU_CLKSEL_CON30_CLK_PDM_PLL_SEL_MASK              (0x3U << CRU_CLKSEL_CON30_CLK_PDM_PLL_SEL_SHIFT)             /* 0x00000300 */
#define CRU_CLKSEL_CON30_CLK_PDM_SEL_SHIFT                 (15U)
#define CRU_CLKSEL_CON30_CLK_PDM_SEL_MASK                  (0x1U << CRU_CLKSEL_CON30_CLK_PDM_SEL_SHIFT)                 /* 0x00008000 */
/* CLKSEL_CON31 */
#define CRU_CLKSEL_CON31_CLK_PDM_FRAC_DIV_CON_SHIFT        (0U)
#define CRU_CLKSEL_CON31_CLK_PDM_FRAC_DIV_CON_MASK         (0xFFFFFFFFU << CRU_CLKSEL_CON31_CLK_PDM_FRAC_DIV_CON_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON32 */
#define CRU_CLKSEL_CON32_CLK_I2S0_TX_DIV_CON_SHIFT         (0U)
#define CRU_CLKSEL_CON32_CLK_I2S0_TX_DIV_CON_MASK          (0x7FU << CRU_CLKSEL_CON32_CLK_I2S0_TX_DIV_CON_SHIFT)        /* 0x0000007F */
#define CRU_CLKSEL_CON32_CLK_I2S0_TX_PLL_SEL_SHIFT         (8U)
#define CRU_CLKSEL_CON32_CLK_I2S0_TX_PLL_SEL_MASK          (0x3U << CRU_CLKSEL_CON32_CLK_I2S0_TX_PLL_SEL_SHIFT)         /* 0x00000300 */
#define CRU_CLKSEL_CON32_CLK_I2S0_TX_SEL_SHIFT             (10U)
#define CRU_CLKSEL_CON32_CLK_I2S0_TX_SEL_MASK              (0x3U << CRU_CLKSEL_CON32_CLK_I2S0_TX_SEL_SHIFT)             /* 0x00000C00 */
#define CRU_CLKSEL_CON32_CLK_I2S0_TX_RX_CLK_SEL_SHIFT      (12U)
#define CRU_CLKSEL_CON32_CLK_I2S0_TX_RX_CLK_SEL_MASK       (0x1U << CRU_CLKSEL_CON32_CLK_I2S0_TX_RX_CLK_SEL_SHIFT)      /* 0x00001000 */
#define CRU_CLKSEL_CON32_CLK_I2S0_TX_OUT_MCLK_SEL_SHIFT    (14U)
#define CRU_CLKSEL_CON32_CLK_I2S0_TX_OUT_MCLK_SEL_MASK     (0x3U << CRU_CLKSEL_CON32_CLK_I2S0_TX_OUT_MCLK_SEL_SHIFT)    /* 0x0000C000 */
/* CLKSEL_CON33 */
#define CRU_CLKSEL_CON33_CLK_I2S0_TX_FRAC_DIV_CON_SHIFT    (0U)
#define CRU_CLKSEL_CON33_CLK_I2S0_TX_FRAC_DIV_CON_MASK     (0xFFFFFFFFU << CRU_CLKSEL_CON33_CLK_I2S0_TX_FRAC_DIV_CON_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON34 */
#define CRU_CLKSEL_CON34_CLK_I2S0_RX_DIV_CON_SHIFT         (0U)
#define CRU_CLKSEL_CON34_CLK_I2S0_RX_DIV_CON_MASK          (0x7FU << CRU_CLKSEL_CON34_CLK_I2S0_RX_DIV_CON_SHIFT)        /* 0x0000007F */
#define CRU_CLKSEL_CON34_CLK_I2S0_RX_PLL_SEL_SHIFT         (8U)
#define CRU_CLKSEL_CON34_CLK_I2S0_RX_PLL_SEL_MASK          (0x3U << CRU_CLKSEL_CON34_CLK_I2S0_RX_PLL_SEL_SHIFT)         /* 0x00000300 */
#define CRU_CLKSEL_CON34_CLK_I2S0_RX_SEL_SHIFT             (10U)
#define CRU_CLKSEL_CON34_CLK_I2S0_RX_SEL_MASK              (0x3U << CRU_CLKSEL_CON34_CLK_I2S0_RX_SEL_SHIFT)             /* 0x00000C00 */
#define CRU_CLKSEL_CON34_CLK_I2S0_RX_TX_CLK_SEL_SHIFT      (12U)
#define CRU_CLKSEL_CON34_CLK_I2S0_RX_TX_CLK_SEL_MASK       (0x1U << CRU_CLKSEL_CON34_CLK_I2S0_RX_TX_CLK_SEL_SHIFT)      /* 0x00001000 */
#define CRU_CLKSEL_CON34_CLK_I2S0_RX_OUT_MCLK_SEL_SHIFT    (14U)
#define CRU_CLKSEL_CON34_CLK_I2S0_RX_OUT_MCLK_SEL_MASK     (0x3U << CRU_CLKSEL_CON34_CLK_I2S0_RX_OUT_MCLK_SEL_SHIFT)    /* 0x0000C000 */
/* CLKSEL_CON35 */
#define CRU_CLKSEL_CON35_CLK_I2S0_RX_FRAC_DIV_CON_SHIFT    (0U)
#define CRU_CLKSEL_CON35_CLK_I2S0_RX_FRAC_DIV_CON_MASK     (0xFFFFFFFFU << CRU_CLKSEL_CON35_CLK_I2S0_RX_FRAC_DIV_CON_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON36 */
#define CRU_CLKSEL_CON36_CLK_I2S1_DIV_CON_SHIFT            (0U)
#define CRU_CLKSEL_CON36_CLK_I2S1_DIV_CON_MASK             (0x7FU << CRU_CLKSEL_CON36_CLK_I2S1_DIV_CON_SHIFT)           /* 0x0000007F */
#define CRU_CLKSEL_CON36_CLK_I2S1_PLL_SEL_SHIFT            (8U)
#define CRU_CLKSEL_CON36_CLK_I2S1_PLL_SEL_MASK             (0x3U << CRU_CLKSEL_CON36_CLK_I2S1_PLL_SEL_SHIFT)            /* 0x00000300 */
#define CRU_CLKSEL_CON36_CLK_I2S1_SEL_SHIFT                (10U)
#define CRU_CLKSEL_CON36_CLK_I2S1_SEL_MASK                 (0x3U << CRU_CLKSEL_CON36_CLK_I2S1_SEL_SHIFT)                /* 0x00000C00 */
#define CRU_CLKSEL_CON36_CLK_I2S1_OUT_MCLK_SEL_SHIFT       (15U)
#define CRU_CLKSEL_CON36_CLK_I2S1_OUT_MCLK_SEL_MASK        (0x1U << CRU_CLKSEL_CON36_CLK_I2S1_OUT_MCLK_SEL_SHIFT)       /* 0x00008000 */
/* CLKSEL_CON37 */
#define CRU_CLKSEL_CON37_CLK_I2S1_FRAC_DIV_CON_SHIFT       (0U)
#define CRU_CLKSEL_CON37_CLK_I2S1_FRAC_DIV_CON_MASK        (0xFFFFFFFFU << CRU_CLKSEL_CON37_CLK_I2S1_FRAC_DIV_CON_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON38 */
#define CRU_CLKSEL_CON38_CLK_UART1_DIV_CON_SHIFT           (0U)
#define CRU_CLKSEL_CON38_CLK_UART1_DIV_CON_MASK            (0x7FU << CRU_CLKSEL_CON38_CLK_UART1_DIV_CON_SHIFT)          /* 0x0000007F */
#define CRU_CLKSEL_CON38_CLK_UART1_PLL_SEL_SHIFT           (14U)
#define CRU_CLKSEL_CON38_CLK_UART1_PLL_SEL_MASK            (0x3U << CRU_CLKSEL_CON38_CLK_UART1_PLL_SEL_SHIFT)           /* 0x0000C000 */
/* CLKSEL_CON39 */
#define CRU_CLKSEL_CON39_CLK_UART1_DIVNP5_DIV_CON_SHIFT    (0U)
#define CRU_CLKSEL_CON39_CLK_UART1_DIVNP5_DIV_CON_MASK     (0x7FU << CRU_CLKSEL_CON39_CLK_UART1_DIVNP5_DIV_CON_SHIFT)   /* 0x0000007F */
#define CRU_CLKSEL_CON39_CLK_UART1_SEL_SHIFT               (14U)
#define CRU_CLKSEL_CON39_CLK_UART1_SEL_MASK                (0x3U << CRU_CLKSEL_CON39_CLK_UART1_SEL_SHIFT)               /* 0x0000C000 */
/* CLKSEL_CON40 */
#define CRU_CLKSEL_CON40_CLK_UART1_FRAC_DIV_CON_SHIFT      (0U)
#define CRU_CLKSEL_CON40_CLK_UART1_FRAC_DIV_CON_MASK       (0xFFFFFFFFU << CRU_CLKSEL_CON40_CLK_UART1_FRAC_DIV_CON_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON41 */
#define CRU_CLKSEL_CON41_CLK_UART2_DIV_CON_SHIFT           (0U)
#define CRU_CLKSEL_CON41_CLK_UART2_DIV_CON_MASK            (0x7FU << CRU_CLKSEL_CON41_CLK_UART2_DIV_CON_SHIFT)          /* 0x0000007F */
#define CRU_CLKSEL_CON41_CLK_UART2_PLL_SEL_SHIFT           (14U)
#define CRU_CLKSEL_CON41_CLK_UART2_PLL_SEL_MASK            (0x3U << CRU_CLKSEL_CON41_CLK_UART2_PLL_SEL_SHIFT)           /* 0x0000C000 */
/* CLKSEL_CON42 */
#define CRU_CLKSEL_CON42_CLK_UART2_DIVNP5_DIV_CON_SHIFT    (0U)
#define CRU_CLKSEL_CON42_CLK_UART2_DIVNP5_DIV_CON_MASK     (0x7FU << CRU_CLKSEL_CON42_CLK_UART2_DIVNP5_DIV_CON_SHIFT)   /* 0x0000007F */
#define CRU_CLKSEL_CON42_CLK_UART2_SEL_SHIFT               (14U)
#define CRU_CLKSEL_CON42_CLK_UART2_SEL_MASK                (0x3U << CRU_CLKSEL_CON42_CLK_UART2_SEL_SHIFT)               /* 0x0000C000 */
/* CLKSEL_CON43 */
#define CRU_CLKSEL_CON43_CLK_UART2_FRAC_DIV_CON_SHIFT      (0U)
#define CRU_CLKSEL_CON43_CLK_UART2_FRAC_DIV_CON_MASK       (0xFFFFFFFFU << CRU_CLKSEL_CON43_CLK_UART2_FRAC_DIV_CON_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON44 */
#define CRU_CLKSEL_CON44_CLK_UART3_DIV_CON_SHIFT           (0U)
#define CRU_CLKSEL_CON44_CLK_UART3_DIV_CON_MASK            (0x7FU << CRU_CLKSEL_CON44_CLK_UART3_DIV_CON_SHIFT)          /* 0x0000007F */
#define CRU_CLKSEL_CON44_CLK_UART3_PLL_SEL_SHIFT           (14U)
#define CRU_CLKSEL_CON44_CLK_UART3_PLL_SEL_MASK            (0x3U << CRU_CLKSEL_CON44_CLK_UART3_PLL_SEL_SHIFT)           /* 0x0000C000 */
/* CLKSEL_CON45 */
#define CRU_CLKSEL_CON45_CLK_UART3_DIVNP5_DIV_CON_SHIFT    (0U)
#define CRU_CLKSEL_CON45_CLK_UART3_DIVNP5_DIV_CON_MASK     (0x7FU << CRU_CLKSEL_CON45_CLK_UART3_DIVNP5_DIV_CON_SHIFT)   /* 0x0000007F */
#define CRU_CLKSEL_CON45_CLK_UART3_SEL_SHIFT               (14U)
#define CRU_CLKSEL_CON45_CLK_UART3_SEL_MASK                (0x3U << CRU_CLKSEL_CON45_CLK_UART3_SEL_SHIFT)               /* 0x0000C000 */
/* CLKSEL_CON46 */
#define CRU_CLKSEL_CON46_CLK_UART3_FRAC_DIV_CON_SHIFT      (0U)
#define CRU_CLKSEL_CON46_CLK_UART3_FRAC_DIV_CON_MASK       (0xFFFFFFFFU << CRU_CLKSEL_CON46_CLK_UART3_FRAC_DIV_CON_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON47 */
#define CRU_CLKSEL_CON47_CLK_UART4_DIV_CON_SHIFT           (0U)
#define CRU_CLKSEL_CON47_CLK_UART4_DIV_CON_MASK            (0x7FU << CRU_CLKSEL_CON47_CLK_UART4_DIV_CON_SHIFT)          /* 0x0000007F */
#define CRU_CLKSEL_CON47_CLK_UART4_PLL_SEL_SHIFT           (14U)
#define CRU_CLKSEL_CON47_CLK_UART4_PLL_SEL_MASK            (0x3U << CRU_CLKSEL_CON47_CLK_UART4_PLL_SEL_SHIFT)           /* 0x0000C000 */
/* CLKSEL_CON48 */
#define CRU_CLKSEL_CON48_CLK_UART4_DIVNP5_DIV_CON_SHIFT    (0U)
#define CRU_CLKSEL_CON48_CLK_UART4_DIVNP5_DIV_CON_MASK     (0x7FU << CRU_CLKSEL_CON48_CLK_UART4_DIVNP5_DIV_CON_SHIFT)   /* 0x0000007F */
#define CRU_CLKSEL_CON48_CLK_UART4_SEL_SHIFT               (14U)
#define CRU_CLKSEL_CON48_CLK_UART4_SEL_MASK                (0x3U << CRU_CLKSEL_CON48_CLK_UART4_SEL_SHIFT)               /* 0x0000C000 */
/* CLKSEL_CON49 */
#define CRU_CLKSEL_CON49_CLK_UART4_FRAC_DIV_CON_SHIFT      (0U)
#define CRU_CLKSEL_CON49_CLK_UART4_FRAC_DIV_CON_MASK       (0xFFFFFFFFU << CRU_CLKSEL_CON49_CLK_UART4_FRAC_DIV_CON_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON50 */
#define CRU_CLKSEL_CON50_CLK_UART5_DIV_CON_SHIFT           (0U)
#define CRU_CLKSEL_CON50_CLK_UART5_DIV_CON_MASK            (0x7FU << CRU_CLKSEL_CON50_CLK_UART5_DIV_CON_SHIFT)          /* 0x0000007F */
#define CRU_CLKSEL_CON50_CLK_UART5_PLL_SEL_SHIFT           (14U)
#define CRU_CLKSEL_CON50_CLK_UART5_PLL_SEL_MASK            (0x3U << CRU_CLKSEL_CON50_CLK_UART5_PLL_SEL_SHIFT)           /* 0x0000C000 */
/* CLKSEL_CON51 */
#define CRU_CLKSEL_CON51_CLK_UART5_DIVNP5_DIV_CON_SHIFT    (0U)
#define CRU_CLKSEL_CON51_CLK_UART5_DIVNP5_DIV_CON_MASK     (0x7FU << CRU_CLKSEL_CON51_CLK_UART5_DIVNP5_DIV_CON_SHIFT)   /* 0x0000007F */
#define CRU_CLKSEL_CON51_CLK_UART5_SEL_SHIFT               (14U)
#define CRU_CLKSEL_CON51_CLK_UART5_SEL_MASK                (0x3U << CRU_CLKSEL_CON51_CLK_UART5_SEL_SHIFT)               /* 0x0000C000 */
/* CLKSEL_CON52 */
#define CRU_CLKSEL_CON52_CLK_UART5_FRAC_DIV_CON_SHIFT      (0U)
#define CRU_CLKSEL_CON52_CLK_UART5_FRAC_DIV_CON_MASK       (0xFFFFFFFFU << CRU_CLKSEL_CON52_CLK_UART5_FRAC_DIV_CON_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON53 */
#define CRU_CLKSEL_CON53_CLK_UART6_DIV_CON_SHIFT           (0U)
#define CRU_CLKSEL_CON53_CLK_UART6_DIV_CON_MASK            (0x7FU << CRU_CLKSEL_CON53_CLK_UART6_DIV_CON_SHIFT)          /* 0x0000007F */
#define CRU_CLKSEL_CON53_CLK_UART6_PLL_SEL_SHIFT           (14U)
#define CRU_CLKSEL_CON53_CLK_UART6_PLL_SEL_MASK            (0x3U << CRU_CLKSEL_CON53_CLK_UART6_PLL_SEL_SHIFT)           /* 0x0000C000 */
/* CLKSEL_CON54 */
#define CRU_CLKSEL_CON54_CLK_UART6_DIVNP5_DIV_CON_SHIFT    (0U)
#define CRU_CLKSEL_CON54_CLK_UART6_DIVNP5_DIV_CON_MASK     (0x7FU << CRU_CLKSEL_CON54_CLK_UART6_DIVNP5_DIV_CON_SHIFT)   /* 0x0000007F */
#define CRU_CLKSEL_CON54_CLK_UART6_SEL_SHIFT               (14U)
#define CRU_CLKSEL_CON54_CLK_UART6_SEL_MASK                (0x3U << CRU_CLKSEL_CON54_CLK_UART6_SEL_SHIFT)               /* 0x0000C000 */
/* CLKSEL_CON55 */
#define CRU_CLKSEL_CON55_CLK_UART6_FRAC_DIV_CON_SHIFT      (0U)
#define CRU_CLKSEL_CON55_CLK_UART6_FRAC_DIV_CON_MASK       (0xFFFFFFFFU << CRU_CLKSEL_CON55_CLK_UART6_FRAC_DIV_CON_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON56 */
#define CRU_CLKSEL_CON56_CLK_UART7_DIV_CON_SHIFT           (0U)
#define CRU_CLKSEL_CON56_CLK_UART7_DIV_CON_MASK            (0x7FU << CRU_CLKSEL_CON56_CLK_UART7_DIV_CON_SHIFT)          /* 0x0000007F */
#define CRU_CLKSEL_CON56_CLK_UART7_PLL_SEL_SHIFT           (14U)
#define CRU_CLKSEL_CON56_CLK_UART7_PLL_SEL_MASK            (0x3U << CRU_CLKSEL_CON56_CLK_UART7_PLL_SEL_SHIFT)           /* 0x0000C000 */
/* CLKSEL_CON57 */
#define CRU_CLKSEL_CON57_CLK_UART7_DIVNP5_DIV_CON_SHIFT    (0U)
#define CRU_CLKSEL_CON57_CLK_UART7_DIVNP5_DIV_CON_MASK     (0x7FU << CRU_CLKSEL_CON57_CLK_UART7_DIVNP5_DIV_CON_SHIFT)   /* 0x0000007F */
#define CRU_CLKSEL_CON57_CLK_UART7_SEL_SHIFT               (14U)
#define CRU_CLKSEL_CON57_CLK_UART7_SEL_MASK                (0x3U << CRU_CLKSEL_CON57_CLK_UART7_SEL_SHIFT)               /* 0x0000C000 */
/* CLKSEL_CON58 */
#define CRU_CLKSEL_CON58_CLK_UART7_FRAC_DIV_CON_SHIFT      (0U)
#define CRU_CLKSEL_CON58_CLK_UART7_FRAC_DIV_CON_MASK       (0xFFFFFFFFU << CRU_CLKSEL_CON58_CLK_UART7_FRAC_DIV_CON_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON59 */
#define CRU_CLKSEL_CON59_CLK_I2C1_DIV_CON_SHIFT            (0U)
#define CRU_CLKSEL_CON59_CLK_I2C1_DIV_CON_MASK             (0x7FU << CRU_CLKSEL_CON59_CLK_I2C1_DIV_CON_SHIFT)           /* 0x0000007F */
#define CRU_CLKSEL_CON59_CLK_I2C1_PLL_SEL_SHIFT            (7U)
#define CRU_CLKSEL_CON59_CLK_I2C1_PLL_SEL_MASK             (0x1U << CRU_CLKSEL_CON59_CLK_I2C1_PLL_SEL_SHIFT)            /* 0x00000080 */
#define CRU_CLKSEL_CON59_CLK_I2C2_DIV_CON_SHIFT            (8U)
#define CRU_CLKSEL_CON59_CLK_I2C2_DIV_CON_MASK             (0x7FU << CRU_CLKSEL_CON59_CLK_I2C2_DIV_CON_SHIFT)           /* 0x00007F00 */
#define CRU_CLKSEL_CON59_CLK_I2C2_PLL_SEL_SHIFT            (15U)
#define CRU_CLKSEL_CON59_CLK_I2C2_PLL_SEL_MASK             (0x1U << CRU_CLKSEL_CON59_CLK_I2C2_PLL_SEL_SHIFT)            /* 0x00008000 */
/* CLKSEL_CON60 */
#define CRU_CLKSEL_CON60_CLK_I2C3_DIV_CON_SHIFT            (0U)
#define CRU_CLKSEL_CON60_CLK_I2C3_DIV_CON_MASK             (0x7FU << CRU_CLKSEL_CON60_CLK_I2C3_DIV_CON_SHIFT)           /* 0x0000007F */
#define CRU_CLKSEL_CON60_CLK_I2C3_PLL_SEL_SHIFT            (7U)
#define CRU_CLKSEL_CON60_CLK_I2C3_PLL_SEL_MASK             (0x1U << CRU_CLKSEL_CON60_CLK_I2C3_PLL_SEL_SHIFT)            /* 0x00000080 */
#define CRU_CLKSEL_CON60_CLK_SPI0_DIV_CON_SHIFT            (8U)
#define CRU_CLKSEL_CON60_CLK_SPI0_DIV_CON_MASK             (0x7FU << CRU_CLKSEL_CON60_CLK_SPI0_DIV_CON_SHIFT)           /* 0x00007F00 */
#define CRU_CLKSEL_CON60_CLK_SPI0_PLL_SEL_SHIFT            (15U)
#define CRU_CLKSEL_CON60_CLK_SPI0_PLL_SEL_MASK             (0x1U << CRU_CLKSEL_CON60_CLK_SPI0_PLL_SEL_SHIFT)            /* 0x00008000 */
/* CLKSEL_CON61 */
#define CRU_CLKSEL_CON61_CLK_SPI1_DIV_CON_SHIFT            (0U)
#define CRU_CLKSEL_CON61_CLK_SPI1_DIV_CON_MASK             (0x7FU << CRU_CLKSEL_CON61_CLK_SPI1_DIV_CON_SHIFT)           /* 0x0000007F */
#define CRU_CLKSEL_CON61_CLK_SPI1_PLL_SEL_SHIFT            (7U)
#define CRU_CLKSEL_CON61_CLK_SPI1_PLL_SEL_MASK             (0x1U << CRU_CLKSEL_CON61_CLK_SPI1_PLL_SEL_SHIFT)            /* 0x00000080 */
#define CRU_CLKSEL_CON61_CLK_SPI2_DIV_CON_SHIFT            (8U)
#define CRU_CLKSEL_CON61_CLK_SPI2_DIV_CON_MASK             (0x7FU << CRU_CLKSEL_CON61_CLK_SPI2_DIV_CON_SHIFT)           /* 0x00007F00 */
#define CRU_CLKSEL_CON61_CLK_SPI2_PLL_SEL_SHIFT            (15U)
#define CRU_CLKSEL_CON61_CLK_SPI2_PLL_SEL_MASK             (0x1U << CRU_CLKSEL_CON61_CLK_SPI2_PLL_SEL_SHIFT)            /* 0x00008000 */
/* CLKSEL_CON62 */
#define CRU_CLKSEL_CON62_CLK_TSADC_DIV_CON_SHIFT           (0U)
#define CRU_CLKSEL_CON62_CLK_TSADC_DIV_CON_MASK            (0x7FFU << CRU_CLKSEL_CON62_CLK_TSADC_DIV_CON_SHIFT)         /* 0x000007FF */
/* CLKSEL_CON63 */
#define CRU_CLKSEL_CON63_CLK_SARADC_DIV_CON_SHIFT          (0U)
#define CRU_CLKSEL_CON63_CLK_SARADC_DIV_CON_MASK           (0x7FFU << CRU_CLKSEL_CON63_CLK_SARADC_DIV_CON_SHIFT)        /* 0x000007FF */
/* CLKSEL_CON64 */
#define CRU_CLKSEL_CON64_CLK_EFUSE_S_DIV_CON_SHIFT         (0U)
#define CRU_CLKSEL_CON64_CLK_EFUSE_S_DIV_CON_MASK          (0x3FU << CRU_CLKSEL_CON64_CLK_EFUSE_S_DIV_CON_SHIFT)        /* 0x0000003F */
#define CRU_CLKSEL_CON64_CLK_EFUSE_S_PLL_CLK_SEL_SHIFT     (6U)
#define CRU_CLKSEL_CON64_CLK_EFUSE_S_PLL_CLK_SEL_MASK      (0x3U << CRU_CLKSEL_CON64_CLK_EFUSE_S_PLL_CLK_SEL_SHIFT)     /* 0x000000C0 */
#define CRU_CLKSEL_CON64_CLK_EFUSE_NS_DIV_CON_SHIFT        (8U)
#define CRU_CLKSEL_CON64_CLK_EFUSE_NS_DIV_CON_MASK         (0x3FU << CRU_CLKSEL_CON64_CLK_EFUSE_NS_DIV_CON_SHIFT)       /* 0x00003F00 */
#define CRU_CLKSEL_CON64_CLK_EFUSE_NS_PLL_CLK_SEL_SHIFT    (14U)
#define CRU_CLKSEL_CON64_CLK_EFUSE_NS_PLL_CLK_SEL_MASK     (0x3U << CRU_CLKSEL_CON64_CLK_EFUSE_NS_PLL_CLK_SEL_SHIFT)    /* 0x0000C000 */
/* CLKSEL_CON65 */
#define CRU_CLKSEL_CON65_DBCLK_GPIO1_DIV_CON_SHIFT         (0U)
#define CRU_CLKSEL_CON65_DBCLK_GPIO1_DIV_CON_MASK          (0x7FFU << CRU_CLKSEL_CON65_DBCLK_GPIO1_DIV_CON_SHIFT)       /* 0x000007FF */
#define CRU_CLKSEL_CON65_DBCLK_GPIO1_PLL_SEL_SHIFT         (15U)
#define CRU_CLKSEL_CON65_DBCLK_GPIO1_PLL_SEL_MASK          (0x1U << CRU_CLKSEL_CON65_DBCLK_GPIO1_PLL_SEL_SHIFT)         /* 0x00008000 */
/* CLKSEL_CON66 */
#define CRU_CLKSEL_CON66_DBCLK_GPIO2_DIV_CON_SHIFT         (0U)
#define CRU_CLKSEL_CON66_DBCLK_GPIO2_DIV_CON_MASK          (0x7FFU << CRU_CLKSEL_CON66_DBCLK_GPIO2_DIV_CON_SHIFT)       /* 0x000007FF */
#define CRU_CLKSEL_CON66_DBCLK_GPIO2_PLL_SEL_SHIFT         (15U)
#define CRU_CLKSEL_CON66_DBCLK_GPIO2_PLL_SEL_MASK          (0x1U << CRU_CLKSEL_CON66_DBCLK_GPIO2_PLL_SEL_SHIFT)         /* 0x00008000 */
/* CLKSEL_CON67 */
#define CRU_CLKSEL_CON67_DBCLK_GPIO3_DIV_CON_SHIFT         (0U)
#define CRU_CLKSEL_CON67_DBCLK_GPIO3_DIV_CON_MASK          (0x7FFU << CRU_CLKSEL_CON67_DBCLK_GPIO3_DIV_CON_SHIFT)       /* 0x000007FF */
#define CRU_CLKSEL_CON67_DBCLK_GPIO3_PLL_SEL_SHIFT         (15U)
#define CRU_CLKSEL_CON67_DBCLK_GPIO3_PLL_SEL_MASK          (0x1U << CRU_CLKSEL_CON67_DBCLK_GPIO3_PLL_SEL_SHIFT)         /* 0x00008000 */
/* CLKSEL_CON68 */
#define CRU_CLKSEL_CON68_DBCLK_GPIO4_DIV_CON_SHIFT         (0U)
#define CRU_CLKSEL_CON68_DBCLK_GPIO4_DIV_CON_MASK          (0x7FFU << CRU_CLKSEL_CON68_DBCLK_GPIO4_DIV_CON_SHIFT)       /* 0x000007FF */
#define CRU_CLKSEL_CON68_DBCLK_GPIO4_PLL_SEL_SHIFT         (15U)
#define CRU_CLKSEL_CON68_DBCLK_GPIO4_PLL_SEL_MASK          (0x1U << CRU_CLKSEL_CON68_DBCLK_GPIO4_PLL_SEL_SHIFT)         /* 0x00008000 */
/* CLKSEL_CON69 */
#define CRU_CLKSEL_CON69_CLK_PWM0_DIV_CON_SHIFT            (0U)
#define CRU_CLKSEL_CON69_CLK_PWM0_DIV_CON_MASK             (0x7FU << CRU_CLKSEL_CON69_CLK_PWM0_DIV_CON_SHIFT)           /* 0x0000007F */
#define CRU_CLKSEL_CON69_CLK_PWM0_PLL_SEL_SHIFT            (7U)
#define CRU_CLKSEL_CON69_CLK_PWM0_PLL_SEL_MASK             (0x1U << CRU_CLKSEL_CON69_CLK_PWM0_PLL_SEL_SHIFT)            /* 0x00000080 */
#define CRU_CLKSEL_CON69_CLK_PWM1_DIV_CON_SHIFT            (8U)
#define CRU_CLKSEL_CON69_CLK_PWM1_DIV_CON_MASK             (0x7FU << CRU_CLKSEL_CON69_CLK_PWM1_DIV_CON_SHIFT)           /* 0x00007F00 */
#define CRU_CLKSEL_CON69_CLK_PWM1_PLL_SEL_SHIFT            (15U)
#define CRU_CLKSEL_CON69_CLK_PWM1_PLL_SEL_MASK             (0x1U << CRU_CLKSEL_CON69_CLK_PWM1_PLL_SEL_SHIFT)            /* 0x00008000 */
/* CLKSEL_CON70 */
#define CRU_CLKSEL_CON70_CLK_PWM2_DIV_CON_SHIFT            (0U)
#define CRU_CLKSEL_CON70_CLK_PWM2_DIV_CON_MASK             (0x7FU << CRU_CLKSEL_CON70_CLK_PWM2_DIV_CON_SHIFT)           /* 0x0000007F */
#define CRU_CLKSEL_CON70_CLK_PWM2_PLL_SEL_SHIFT            (7U)
#define CRU_CLKSEL_CON70_CLK_PWM2_PLL_SEL_MASK             (0x1U << CRU_CLKSEL_CON70_CLK_PWM2_PLL_SEL_SHIFT)            /* 0x00000080 */
/* CLKSEL_CON71 */
#define CRU_CLKSEL_CON71_CLK_I2C4_DIV_CON_SHIFT            (0U)
#define CRU_CLKSEL_CON71_CLK_I2C4_DIV_CON_MASK             (0x7FU << CRU_CLKSEL_CON71_CLK_I2C4_DIV_CON_SHIFT)           /* 0x0000007F */
#define CRU_CLKSEL_CON71_CLK_I2C4_PLL_SEL_SHIFT            (7U)
#define CRU_CLKSEL_CON71_CLK_I2C4_PLL_SEL_MASK             (0x1U << CRU_CLKSEL_CON71_CLK_I2C4_PLL_SEL_SHIFT)            /* 0x00000080 */
#define CRU_CLKSEL_CON71_CLK_I2C5_DIV_CON_SHIFT            (8U)
#define CRU_CLKSEL_CON71_CLK_I2C5_DIV_CON_MASK             (0x7FU << CRU_CLKSEL_CON71_CLK_I2C5_DIV_CON_SHIFT)           /* 0x00007F00 */
#define CRU_CLKSEL_CON71_CLK_I2C5_PLL_SEL_SHIFT            (15U)
#define CRU_CLKSEL_CON71_CLK_I2C5_PLL_SEL_MASK             (0x1U << CRU_CLKSEL_CON71_CLK_I2C5_PLL_SEL_SHIFT)            /* 0x00008000 */
/* CLKSEL_CON72 */
#define CRU_CLKSEL_CON72_TESTCLK_SEL_SHIFT                 (0U)
#define CRU_CLKSEL_CON72_TESTCLK_SEL_MASK                  (0x1FU << CRU_CLKSEL_CON72_TESTCLK_SEL_SHIFT)                /* 0x0000001F */
#define CRU_CLKSEL_CON72_TEST_DIV_CON_SHIFT                (8U)
#define CRU_CLKSEL_CON72_TEST_DIV_CON_MASK                 (0x1FU << CRU_CLKSEL_CON72_TEST_DIV_CON_SHIFT)               /* 0x00001F00 */
/* CLKGATE_CON0 */
#define CRU_CLKGATE_CON0_CORE_PLL_CLK_EN_SHIFT             (0U)
#define CRU_CLKGATE_CON0_CORE_PLL_CLK_EN_MASK              (0x1U << CRU_CLKGATE_CON0_CORE_PLL_CLK_EN_SHIFT)             /* 0x00000001 */
#define CRU_CLKGATE_CON0_MSCLK_CORE_NIU_CLK_EN_SHIFT       (1U)
#define CRU_CLKGATE_CON0_MSCLK_CORE_NIU_CLK_EN_MASK        (0x1U << CRU_CLKGATE_CON0_MSCLK_CORE_NIU_CLK_EN_SHIFT)       /* 0x00000002 */
#define CRU_CLKGATE_CON0_ACLK_CORE_EN_SHIFT                (2U)
#define CRU_CLKGATE_CON0_ACLK_CORE_EN_MASK                 (0x1U << CRU_CLKGATE_CON0_ACLK_CORE_EN_SHIFT)                /* 0x00000004 */
#define CRU_CLKGATE_CON0_PCLK_CORE_EN_SHIFT                (3U)
#define CRU_CLKGATE_CON0_PCLK_CORE_EN_MASK                 (0x1U << CRU_CLKGATE_CON0_PCLK_CORE_EN_SHIFT)                /* 0x00000008 */
#define CRU_CLKGATE_CON0_CLK_JTAG_EN_SHIFT                 (4U)
#define CRU_CLKGATE_CON0_CLK_JTAG_EN_MASK                  (0x1U << CRU_CLKGATE_CON0_CLK_JTAG_EN_SHIFT)                 /* 0x00000010 */
#define CRU_CLKGATE_CON0_CLK_PVTM_CORE_EN_SHIFT            (5U)
#define CRU_CLKGATE_CON0_CLK_PVTM_CORE_EN_MASK             (0x1U << CRU_CLKGATE_CON0_CLK_PVTM_CORE_EN_SHIFT)            /* 0x00000020 */
#define CRU_CLKGATE_CON0_ACLK_CORE_NIU_EN_SHIFT            (6U)
#define CRU_CLKGATE_CON0_ACLK_CORE_NIU_EN_MASK             (0x1U << CRU_CLKGATE_CON0_ACLK_CORE_NIU_EN_SHIFT)            /* 0x00000040 */
#define CRU_CLKGATE_CON0_PCLK_DBG_NIU_EN_SHIFT             (7U)
#define CRU_CLKGATE_CON0_PCLK_DBG_NIU_EN_MASK              (0x1U << CRU_CLKGATE_CON0_PCLK_DBG_NIU_EN_SHIFT)             /* 0x00000080 */
#define CRU_CLKGATE_CON0_PCLK_DBG_DAPLITE_EN_SHIFT         (8U)
#define CRU_CLKGATE_CON0_PCLK_DBG_DAPLITE_EN_MASK          (0x1U << CRU_CLKGATE_CON0_PCLK_DBG_DAPLITE_EN_SHIFT)         /* 0x00000100 */
#define CRU_CLKGATE_CON0_ACLK_ADB400_GIC2CORE_EN_SHIFT     (9U)
#define CRU_CLKGATE_CON0_ACLK_ADB400_GIC2CORE_EN_MASK      (0x1U << CRU_CLKGATE_CON0_ACLK_ADB400_GIC2CORE_EN_SHIFT)     /* 0x00000200 */
#define CRU_CLKGATE_CON0_ACLK_ADB400_CORE2GIC_EN_SHIFT     (10U)
#define CRU_CLKGATE_CON0_ACLK_ADB400_CORE2GIC_EN_MASK      (0x1U << CRU_CLKGATE_CON0_ACLK_ADB400_CORE2GIC_EN_SHIFT)     /* 0x00000400 */
#define CRU_CLKGATE_CON0_ACLK_CORE_PRF_EN_SHIFT            (11U)
#define CRU_CLKGATE_CON0_ACLK_CORE_PRF_EN_MASK             (0x1U << CRU_CLKGATE_CON0_ACLK_CORE_PRF_EN_SHIFT)            /* 0x00000800 */
#define CRU_CLKGATE_CON0_PCLK_CORE_GRF_EN_SHIFT            (12U)
#define CRU_CLKGATE_CON0_PCLK_CORE_GRF_EN_MASK             (0x1U << CRU_CLKGATE_CON0_PCLK_CORE_GRF_EN_SHIFT)            /* 0x00001000 */
#define CRU_CLKGATE_CON0_CLK_PVTM_NPU_EN_SHIFT             (15U)
#define CRU_CLKGATE_CON0_CLK_PVTM_NPU_EN_MASK              (0x1U << CRU_CLKGATE_CON0_CLK_PVTM_NPU_EN_SHIFT)             /* 0x00008000 */
/* CLKGATE_CON1 */
#define CRU_CLKGATE_CON1_GIC_PLL_CLK_EN_SHIFT              (0U)
#define CRU_CLKGATE_CON1_GIC_PLL_CLK_EN_MASK               (0x1U << CRU_CLKGATE_CON1_GIC_PLL_CLK_EN_SHIFT)              /* 0x00000001 */
#define CRU_CLKGATE_CON1_ACLK_GIC_NIU_EN_SHIFT             (1U)
#define CRU_CLKGATE_CON1_ACLK_GIC_NIU_EN_MASK              (0x1U << CRU_CLKGATE_CON1_ACLK_GIC_NIU_EN_SHIFT)             /* 0x00000002 */
#define CRU_CLKGATE_CON1_ACLK_GIC500_EN_SHIFT              (2U)
#define CRU_CLKGATE_CON1_ACLK_GIC500_EN_MASK               (0x1U << CRU_CLKGATE_CON1_ACLK_GIC500_EN_SHIFT)              /* 0x00000004 */
#define CRU_CLKGATE_CON1_ACLK_ADB400_CORE2GIC_EN_SHIFT     (3U)
#define CRU_CLKGATE_CON1_ACLK_ADB400_CORE2GIC_EN_MASK      (0x1U << CRU_CLKGATE_CON1_ACLK_ADB400_CORE2GIC_EN_SHIFT)     /* 0x00000008 */
#define CRU_CLKGATE_CON1_ACLK_ADB400_GIC2CORE_EN_SHIFT     (4U)
#define CRU_CLKGATE_CON1_ACLK_ADB400_GIC2CORE_EN_MASK      (0x1U << CRU_CLKGATE_CON1_ACLK_ADB400_GIC2CORE_EN_SHIFT)     /* 0x00000010 */
#define CRU_CLKGATE_CON1_ACLK_SPINLOCK_EN_SHIFT            (5U)
#define CRU_CLKGATE_CON1_ACLK_SPINLOCK_EN_MASK             (0x1U << CRU_CLKGATE_CON1_ACLK_SPINLOCK_EN_SHIFT)            /* 0x00000020 */
#define CRU_CLKGATE_CON1_NPU_PLL_CLK_EN_SHIFT              (6U)
#define CRU_CLKGATE_CON1_NPU_PLL_CLK_EN_MASK               (0x1U << CRU_CLKGATE_CON1_NPU_PLL_CLK_EN_SHIFT)              /* 0x00000040 */
#define CRU_CLKGATE_CON1_NPU_NP5_PLL_CLK_EN_SHIFT          (7U)
#define CRU_CLKGATE_CON1_NPU_NP5_PLL_CLK_EN_MASK           (0x1U << CRU_CLKGATE_CON1_NPU_NP5_PLL_CLK_EN_SHIFT)          /* 0x00000080 */
#define CRU_CLKGATE_CON1_NPU_PLL_ACLK_EN_SHIFT             (8U)
#define CRU_CLKGATE_CON1_NPU_PLL_ACLK_EN_MASK              (0x1U << CRU_CLKGATE_CON1_NPU_PLL_ACLK_EN_SHIFT)             /* 0x00000100 */
#define CRU_CLKGATE_CON1_NPU_PLL_HCLK_EN_SHIFT             (9U)
#define CRU_CLKGATE_CON1_NPU_PLL_HCLK_EN_MASK              (0x1U << CRU_CLKGATE_CON1_NPU_PLL_HCLK_EN_SHIFT)             /* 0x00000200 */
#define CRU_CLKGATE_CON1_CLK_NPU_CORE_EN_SHIFT             (10U)
#define CRU_CLKGATE_CON1_CLK_NPU_CORE_EN_MASK              (0x1U << CRU_CLKGATE_CON1_CLK_NPU_CORE_EN_SHIFT)             /* 0x00000400 */
#define CRU_CLKGATE_CON1_ACLK_NPU_EN_SHIFT                 (11U)
#define CRU_CLKGATE_CON1_ACLK_NPU_EN_MASK                  (0x1U << CRU_CLKGATE_CON1_ACLK_NPU_EN_SHIFT)                 /* 0x00000800 */
#define CRU_CLKGATE_CON1_HCLK_NPU_EN_SHIFT                 (12U)
#define CRU_CLKGATE_CON1_HCLK_NPU_EN_MASK                  (0x1U << CRU_CLKGATE_CON1_HCLK_NPU_EN_SHIFT)                 /* 0x00001000 */
#define CRU_CLKGATE_CON1_ACLK_NPU_NIU_EN_SHIFT             (13U)
#define CRU_CLKGATE_CON1_ACLK_NPU_NIU_EN_MASK              (0x1U << CRU_CLKGATE_CON1_ACLK_NPU_NIU_EN_SHIFT)             /* 0x00002000 */
#define CRU_CLKGATE_CON1_HCLK_NPU_NIU_EN_SHIFT             (14U)
#define CRU_CLKGATE_CON1_HCLK_NPU_NIU_EN_MASK              (0x1U << CRU_CLKGATE_CON1_HCLK_NPU_NIU_EN_SHIFT)             /* 0x00004000 */
#define CRU_CLKGATE_CON1_ACLK_NPU2MEM_EN_SHIFT             (15U)
#define CRU_CLKGATE_CON1_ACLK_NPU2MEM_EN_MASK              (0x1U << CRU_CLKGATE_CON1_ACLK_NPU2MEM_EN_SHIFT)             /* 0x00008000 */
/* CLKGATE_CON2 */
#define CRU_CLKGATE_CON2_CLK_DDRMON24_EN_SHIFT             (0U)
#define CRU_CLKGATE_CON2_CLK_DDRMON24_EN_MASK              (0x1U << CRU_CLKGATE_CON2_CLK_DDRMON24_EN_SHIFT)             /* 0x00000001 */
#define CRU_CLKGATE_CON2_PCLK_DDR_PLL_CLK_EN_SHIFT         (1U)
#define CRU_CLKGATE_CON2_PCLK_DDR_PLL_CLK_EN_MASK          (0x1U << CRU_CLKGATE_CON2_PCLK_DDR_PLL_CLK_EN_SHIFT)         /* 0x00000002 */
#define CRU_CLKGATE_CON2_PCLK_DDRDFI_CTL_EN_SHIFT          (2U)
#define CRU_CLKGATE_CON2_PCLK_DDRDFI_CTL_EN_MASK           (0x1U << CRU_CLKGATE_CON2_PCLK_DDRDFI_CTL_EN_SHIFT)          /* 0x00000004 */
#define CRU_CLKGATE_CON2_CLK_DDRDFI_CTL_EN_SHIFT           (3U)
#define CRU_CLKGATE_CON2_CLK_DDRDFI_CTL_EN_MASK            (0x1U << CRU_CLKGATE_CON2_CLK_DDRDFI_CTL_EN_SHIFT)           /* 0x00000008 */
#define CRU_CLKGATE_CON2_ACLK_DDR_UPCTL_EN_SHIFT           (5U)
#define CRU_CLKGATE_CON2_ACLK_DDR_UPCTL_EN_MASK            (0x1U << CRU_CLKGATE_CON2_ACLK_DDR_UPCTL_EN_SHIFT)           /* 0x00000020 */
#define CRU_CLKGATE_CON2_CLK_DDR_UPCTL_EN_SHIFT            (6U)
#define CRU_CLKGATE_CON2_CLK_DDR_UPCTL_EN_MASK             (0x1U << CRU_CLKGATE_CON2_CLK_DDR_UPCTL_EN_SHIFT)            /* 0x00000040 */
#define CRU_CLKGATE_CON2_PCLK_DDR_UPCTL_EN_SHIFT           (7U)
#define CRU_CLKGATE_CON2_PCLK_DDR_UPCTL_EN_MASK            (0x1U << CRU_CLKGATE_CON2_PCLK_DDR_UPCTL_EN_SHIFT)           /* 0x00000080 */
#define CRU_CLKGATE_CON2_CLK_DDR_MSCH_EN_SHIFT             (8U)
#define CRU_CLKGATE_CON2_CLK_DDR_MSCH_EN_MASK              (0x1U << CRU_CLKGATE_CON2_CLK_DDR_MSCH_EN_SHIFT)             /* 0x00000100 */
#define CRU_CLKGATE_CON2_PCLK_DDR_MSCH_EN_SHIFT            (9U)
#define CRU_CLKGATE_CON2_PCLK_DDR_MSCH_EN_MASK             (0x1U << CRU_CLKGATE_CON2_PCLK_DDR_MSCH_EN_SHIFT)            /* 0x00000200 */
#define CRU_CLKGATE_CON2_PCLK_DDR_MON_EN_SHIFT             (10U)
#define CRU_CLKGATE_CON2_PCLK_DDR_MON_EN_MASK              (0x1U << CRU_CLKGATE_CON2_PCLK_DDR_MON_EN_SHIFT)             /* 0x00000400 */
#define CRU_CLKGATE_CON2_CLK_DDRC_MON_EN_SHIFT             (11U)
#define CRU_CLKGATE_CON2_CLK_DDRC_MON_EN_MASK              (0x1U << CRU_CLKGATE_CON2_CLK_DDRC_MON_EN_SHIFT)             /* 0x00000800 */
#define CRU_CLKGATE_CON2_PCLK_DDRSTDBY_EN_SHIFT            (12U)
#define CRU_CLKGATE_CON2_PCLK_DDRSTDBY_EN_MASK             (0x1U << CRU_CLKGATE_CON2_PCLK_DDRSTDBY_EN_SHIFT)            /* 0x00001000 */
#define CRU_CLKGATE_CON2_CLK_DDRSTDBY_EN_SHIFT             (13U)
#define CRU_CLKGATE_CON2_CLK_DDRSTDBY_EN_MASK              (0x1U << CRU_CLKGATE_CON2_CLK_DDRSTDBY_EN_SHIFT)             /* 0x00002000 */
#define CRU_CLKGATE_CON2_PCLK_DDRGRF_EN_SHIFT              (14U)
#define CRU_CLKGATE_CON2_PCLK_DDRGRF_EN_MASK               (0x1U << CRU_CLKGATE_CON2_PCLK_DDRGRF_EN_SHIFT)              /* 0x00004000 */
#define CRU_CLKGATE_CON2_ACLK_AXI_SPLIT_EN_SHIFT           (15U)
#define CRU_CLKGATE_CON2_ACLK_AXI_SPLIT_EN_MASK            (0x1U << CRU_CLKGATE_CON2_ACLK_AXI_SPLIT_EN_SHIFT)           /* 0x00008000 */
/* CLKGATE_CON3 */
#define CRU_CLKGATE_CON3_HSCLK_VIO_PLL_CLK_EN_SHIFT        (0U)
#define CRU_CLKGATE_CON3_HSCLK_VIO_PLL_CLK_EN_MASK         (0x1U << CRU_CLKGATE_CON3_HSCLK_VIO_PLL_CLK_EN_SHIFT)        /* 0x00000001 */
#define CRU_CLKGATE_CON3_DCLKVOPRAW_PLL_CLK_EN_SHIFT       (1U)
#define CRU_CLKGATE_CON3_DCLKVOPRAW_PLL_CLK_EN_MASK        (0x1U << CRU_CLKGATE_CON3_DCLKVOPRAW_PLL_CLK_EN_SHIFT)       /* 0x00000002 */
#define CRU_CLKGATE_CON3_DCLKVOPRAW_FRACDIV_CLK_EN_SHIFT   (2U)
#define CRU_CLKGATE_CON3_DCLKVOPRAW_FRACDIV_CLK_EN_MASK    (0x1U << CRU_CLKGATE_CON3_DCLKVOPRAW_FRACDIV_CLK_EN_SHIFT)   /* 0x00000004 */
#define CRU_CLKGATE_CON3_DCLKVOPRAW_CLK_EN_SHIFT           (3U)
#define CRU_CLKGATE_CON3_DCLKVOPRAW_CLK_EN_MASK            (0x1U << CRU_CLKGATE_CON3_DCLKVOPRAW_CLK_EN_SHIFT)           /* 0x00000008 */
#define CRU_CLKGATE_CON3_DCLKVOPLITE_PLL_CLK_EN_SHIFT      (4U)
#define CRU_CLKGATE_CON3_DCLKVOPLITE_PLL_CLK_EN_MASK       (0x1U << CRU_CLKGATE_CON3_DCLKVOPLITE_PLL_CLK_EN_SHIFT)      /* 0x00000010 */
#define CRU_CLKGATE_CON3_DCLKVOPLITE_FRACDIV_CLK_EN_SHIFT  (5U)
#define CRU_CLKGATE_CON3_DCLKVOPLITE_FRACDIV_CLK_EN_MASK   (0x1U << CRU_CLKGATE_CON3_DCLKVOPLITE_FRACDIV_CLK_EN_SHIFT)  /* 0x00000020 */
#define CRU_CLKGATE_CON3_DCLKVOPLITE_CLK_EN_SHIFT          (6U)
#define CRU_CLKGATE_CON3_DCLKVOPLITE_CLK_EN_MASK           (0x1U << CRU_CLKGATE_CON3_DCLKVOPLITE_CLK_EN_SHIFT)          /* 0x00000040 */
#define CRU_CLKGATE_CON3_CLK_TXESC_PLL_EN_SHIFT            (7U)
#define CRU_CLKGATE_CON3_CLK_TXESC_PLL_EN_MASK             (0x1U << CRU_CLKGATE_CON3_CLK_TXESC_PLL_EN_SHIFT)            /* 0x00000080 */
#define CRU_CLKGATE_CON3_CLK_RGA_PLL_CLK_EN_SHIFT          (8U)
#define CRU_CLKGATE_CON3_CLK_RGA_PLL_CLK_EN_MASK           (0x1U << CRU_CLKGATE_CON3_CLK_RGA_PLL_CLK_EN_SHIFT)          /* 0x00000100 */
#define CRU_CLKGATE_CON3_CLK_CIFOUT_PLL_CLK_EN_SHIFT       (9U)
#define CRU_CLKGATE_CON3_CLK_CIFOUT_PLL_CLK_EN_MASK        (0x1U << CRU_CLKGATE_CON3_CLK_CIFOUT_PLL_CLK_EN_SHIFT)       /* 0x00000200 */
#define CRU_CLKGATE_CON3_CLK_ISP_PLL_CLK_EN_SHIFT          (10U)
#define CRU_CLKGATE_CON3_CLK_ISP_PLL_CLK_EN_MASK           (0x1U << CRU_CLKGATE_CON3_CLK_ISP_PLL_CLK_EN_SHIFT)          /* 0x00000400 */
#define CRU_CLKGATE_CON3_DCLK_CIF_PLL_CLK_EN_SHIFT         (11U)
#define CRU_CLKGATE_CON3_DCLK_CIF_PLL_CLK_EN_MASK          (0x1U << CRU_CLKGATE_CON3_DCLK_CIF_PLL_CLK_EN_SHIFT)         /* 0x00000800 */
#define CRU_CLKGATE_CON3_LSCLK_VIO_SRC_EN_SHIFT            (12U)
#define CRU_CLKGATE_CON3_LSCLK_VIO_SRC_EN_MASK             (0x1U << CRU_CLKGATE_CON3_LSCLK_VIO_SRC_EN_SHIFT)            /* 0x00001000 */
#define CRU_CLKGATE_CON3_PCLKIN_CIF_EN_SHIFT               (13U)
#define CRU_CLKGATE_CON3_PCLKIN_CIF_EN_MASK                (0x1U << CRU_CLKGATE_CON3_PCLKIN_CIF_EN_SHIFT)               /* 0x00002000 */
/* CLKGATE_CON4 */
#define CRU_CLKGATE_CON4_HSCLK_VIO_NIU_EN_SHIFT            (0U)
#define CRU_CLKGATE_CON4_HSCLK_VIO_NIU_EN_MASK             (0x1U << CRU_CLKGATE_CON4_HSCLK_VIO_NIU_EN_SHIFT)            /* 0x00000001 */
#define CRU_CLKGATE_CON4_LSCLK_VIO_NIU_EN_SHIFT            (1U)
#define CRU_CLKGATE_CON4_LSCLK_VIO_NIU_EN_MASK             (0x1U << CRU_CLKGATE_CON4_LSCLK_VIO_NIU_EN_SHIFT)            /* 0x00000002 */
#define CRU_CLKGATE_CON4_ACLK_VOPRAW_EN_SHIFT              (2U)
#define CRU_CLKGATE_CON4_ACLK_VOPRAW_EN_MASK               (0x1U << CRU_CLKGATE_CON4_ACLK_VOPRAW_EN_SHIFT)              /* 0x00000004 */
#define CRU_CLKGATE_CON4_HCLK_VOPRAW_EN_SHIFT              (3U)
#define CRU_CLKGATE_CON4_HCLK_VOPRAW_EN_MASK               (0x1U << CRU_CLKGATE_CON4_HCLK_VOPRAW_EN_SHIFT)              /* 0x00000008 */
#define CRU_CLKGATE_CON4_ACLK_VOPLITE_EN_SHIFT             (4U)
#define CRU_CLKGATE_CON4_ACLK_VOPLITE_EN_MASK              (0x1U << CRU_CLKGATE_CON4_ACLK_VOPLITE_EN_SHIFT)             /* 0x00000010 */
#define CRU_CLKGATE_CON4_HCLK_VOPLITE_EN_SHIFT             (5U)
#define CRU_CLKGATE_CON4_HCLK_VOPLITE_EN_MASK              (0x1U << CRU_CLKGATE_CON4_HCLK_VOPLITE_EN_SHIFT)             /* 0x00000020 */
#define CRU_CLKGATE_CON4_PCLK_MIPI_DSI_EN_SHIFT            (6U)
#define CRU_CLKGATE_CON4_PCLK_MIPI_DSI_EN_MASK             (0x1U << CRU_CLKGATE_CON4_PCLK_MIPI_DSI_EN_SHIFT)            /* 0x00000040 */
#define CRU_CLKGATE_CON4_PCLK_CSITX_EN_SHIFT               (7U)
#define CRU_CLKGATE_CON4_PCLK_CSITX_EN_MASK                (0x1U << CRU_CLKGATE_CON4_PCLK_CSITX_EN_SHIFT)               /* 0x00000080 */
#define CRU_CLKGATE_CON4_ACLK_RGA_EN_SHIFT                 (8U)
#define CRU_CLKGATE_CON4_ACLK_RGA_EN_MASK                  (0x1U << CRU_CLKGATE_CON4_ACLK_RGA_EN_SHIFT)                 /* 0x00000100 */
#define CRU_CLKGATE_CON4_HCLK_RGA_EN_SHIFT                 (9U)
#define CRU_CLKGATE_CON4_HCLK_RGA_EN_MASK                  (0x1U << CRU_CLKGATE_CON4_HCLK_RGA_EN_SHIFT)                 /* 0x00000200 */
#define CRU_CLKGATE_CON4_ACLK_CIF_EN_SHIFT                 (10U)
#define CRU_CLKGATE_CON4_ACLK_CIF_EN_MASK                  (0x1U << CRU_CLKGATE_CON4_ACLK_CIF_EN_SHIFT)                 /* 0x00000400 */
#define CRU_CLKGATE_CON4_HCLK_CIF_EN_SHIFT                 (11U)
#define CRU_CLKGATE_CON4_HCLK_CIF_EN_MASK                  (0x1U << CRU_CLKGATE_CON4_HCLK_CIF_EN_SHIFT)                 /* 0x00000800 */
#define CRU_CLKGATE_CON4_PCLK_CSI2X_EN_SHIFT               (12U)
#define CRU_CLKGATE_CON4_PCLK_CSI2X_EN_MASK                (0x1U << CRU_CLKGATE_CON4_PCLK_CSI2X_EN_SHIFT)               /* 0x00001000 */
#define CRU_CLKGATE_CON4_ACLK_ISP_EN_SHIFT                 (13U)
#define CRU_CLKGATE_CON4_ACLK_ISP_EN_MASK                  (0x1U << CRU_CLKGATE_CON4_ACLK_ISP_EN_SHIFT)                 /* 0x00002000 */
#define CRU_CLKGATE_CON4_HCLK_ISP_EN_SHIFT                 (14U)
#define CRU_CLKGATE_CON4_HCLK_ISP_EN_MASK                  (0x1U << CRU_CLKGATE_CON4_HCLK_ISP_EN_SHIFT)                 /* 0x00004000 */
/* CLKGATE_CON5 */
#define CRU_CLKGATE_CON5_PDCLK_PCIE_PLL_CLK_EN_SHIFT       (0U)
#define CRU_CLKGATE_CON5_PDCLK_PCIE_PLL_CLK_EN_MASK        (0x1U << CRU_CLKGATE_CON5_PDCLK_PCIE_PLL_CLK_EN_SHIFT)       /* 0x00000001 */
#define CRU_CLKGATE_CON5_CLK_USB3OTG_REF_CLK_EN_SHIFT      (1U)
#define CRU_CLKGATE_CON5_CLK_USB3OTG_REF_CLK_EN_MASK       (0x1U << CRU_CLKGATE_CON5_CLK_USB3OTG_REF_CLK_EN_SHIFT)      /* 0x00000002 */
#define CRU_CLKGATE_CON5_CLK_USB3OTG_SUSPEND_CLK_EN_SHIFT  (2U)
#define CRU_CLKGATE_CON5_CLK_USB3OTG_SUSPEND_CLK_EN_MASK   (0x1U << CRU_CLKGATE_CON5_CLK_USB3OTG_SUSPEND_CLK_EN_SHIFT)  /* 0x00000004 */
#define CRU_CLKGATE_CON5_CLK_PCIE_AUX_PLL_CLK_EN_SHIFT     (3U)
#define CRU_CLKGATE_CON5_CLK_PCIE_AUX_PLL_CLK_EN_MASK      (0x1U << CRU_CLKGATE_CON5_CLK_PCIE_AUX_PLL_CLK_EN_SHIFT)     /* 0x00000008 */
#define CRU_CLKGATE_CON5_CLK_PCIE_AUX_SRC_CLK_EN_SHIFT     (4U)
#define CRU_CLKGATE_CON5_CLK_PCIE_AUX_SRC_CLK_EN_MASK      (0x1U << CRU_CLKGATE_CON5_CLK_PCIE_AUX_SRC_CLK_EN_SHIFT)     /* 0x00000010 */
#define CRU_CLKGATE_CON5_ACLK_PCIE_PLL_CLK_EN_SHIFT        (5U)
#define CRU_CLKGATE_CON5_ACLK_PCIE_PLL_CLK_EN_MASK         (0x1U << CRU_CLKGATE_CON5_ACLK_PCIE_PLL_CLK_EN_SHIFT)        /* 0x00000020 */
#define CRU_CLKGATE_CON5_PCLK_PCIE_SRC_CLK_EN_SHIFT        (6U)
#define CRU_CLKGATE_CON5_PCLK_PCIE_SRC_CLK_EN_MASK         (0x1U << CRU_CLKGATE_CON5_PCLK_PCIE_SRC_CLK_EN_SHIFT)        /* 0x00000040 */
/* CLKGATE_CON6 */
#define CRU_CLKGATE_CON6_HSCLK_PCIE_NIU_EN_SHIFT           (0U)
#define CRU_CLKGATE_CON6_HSCLK_PCIE_NIU_EN_MASK            (0x1U << CRU_CLKGATE_CON6_HSCLK_PCIE_NIU_EN_SHIFT)           /* 0x00000001 */
#define CRU_CLKGATE_CON6_LSCLK_PCIE_NIU_EN_SHIFT           (1U)
#define CRU_CLKGATE_CON6_LSCLK_PCIE_NIU_EN_MASK            (0x1U << CRU_CLKGATE_CON6_LSCLK_PCIE_NIU_EN_SHIFT)           /* 0x00000002 */
#define CRU_CLKGATE_CON6_ACLK_PCIE_MST_EN_SHIFT            (2U)
#define CRU_CLKGATE_CON6_ACLK_PCIE_MST_EN_MASK             (0x1U << CRU_CLKGATE_CON6_ACLK_PCIE_MST_EN_SHIFT)            /* 0x00000004 */
#define CRU_CLKGATE_CON6_ACLK_PCIE_SLV_EN_SHIFT            (3U)
#define CRU_CLKGATE_CON6_ACLK_PCIE_SLV_EN_MASK             (0x1U << CRU_CLKGATE_CON6_ACLK_PCIE_SLV_EN_SHIFT)            /* 0x00000008 */
#define CRU_CLKGATE_CON6_ACLK_PCIE_DBI_EN_SHIFT            (4U)
#define CRU_CLKGATE_CON6_ACLK_PCIE_DBI_EN_MASK             (0x1U << CRU_CLKGATE_CON6_ACLK_PCIE_DBI_EN_SHIFT)            /* 0x00000010 */
#define CRU_CLKGATE_CON6_PCLK_PCIE_GRF_EN_SHIFT            (5U)
#define CRU_CLKGATE_CON6_PCLK_PCIE_GRF_EN_MASK             (0x1U << CRU_CLKGATE_CON6_PCLK_PCIE_GRF_EN_SHIFT)            /* 0x00000020 */
#define CRU_CLKGATE_CON6_ACLK_USB3OTG_EN_SHIFT             (6U)
#define CRU_CLKGATE_CON6_ACLK_USB3OTG_EN_MASK              (0x1U << CRU_CLKGATE_CON6_ACLK_USB3OTG_EN_SHIFT)             /* 0x00000040 */
#define CRU_CLKGATE_CON6_HCLK_USB2HOST_EN_SHIFT            (7U)
#define CRU_CLKGATE_CON6_HCLK_USB2HOST_EN_MASK             (0x1U << CRU_CLKGATE_CON6_HCLK_USB2HOST_EN_SHIFT)            /* 0x00000080 */
#define CRU_CLKGATE_CON6_HCLK_USB2HOST_ARB_EN_SHIFT        (8U)
#define CRU_CLKGATE_CON6_HCLK_USB2HOST_ARB_EN_MASK         (0x1U << CRU_CLKGATE_CON6_HCLK_USB2HOST_ARB_EN_SHIFT)        /* 0x00000100 */
#define CRU_CLKGATE_CON6_PCLK_PCIE_EN_SHIFT                (9U)
#define CRU_CLKGATE_CON6_PCLK_PCIE_EN_MASK                 (0x1U << CRU_CLKGATE_CON6_PCLK_PCIE_EN_SHIFT)                /* 0x00000200 */
#define CRU_CLKGATE_CON6_ACLK_PCIE_NIU_EN_SHIFT            (10U)
#define CRU_CLKGATE_CON6_ACLK_PCIE_NIU_EN_MASK             (0x1U << CRU_CLKGATE_CON6_ACLK_PCIE_NIU_EN_SHIFT)            /* 0x00000400 */
#define CRU_CLKGATE_CON6_PCLK_PCIE_NIU_EN_SHIFT            (11U)
#define CRU_CLKGATE_CON6_PCLK_PCIE_NIU_EN_MASK             (0x1U << CRU_CLKGATE_CON6_PCLK_PCIE_NIU_EN_SHIFT)            /* 0x00000800 */
/* CLKGATE_CON7 */
#define CRU_CLKGATE_CON7_IMEM_PLL_CLK_EN_SHIFT             (0U)
#define CRU_CLKGATE_CON7_IMEM_PLL_CLK_EN_MASK              (0x1U << CRU_CLKGATE_CON7_IMEM_PLL_CLK_EN_SHIFT)             /* 0x00000001 */
#define CRU_CLKGATE_CON7_IMEM0_SRC_CLK_EN_SHIFT            (1U)
#define CRU_CLKGATE_CON7_IMEM0_SRC_CLK_EN_MASK             (0x1U << CRU_CLKGATE_CON7_IMEM0_SRC_CLK_EN_SHIFT)            /* 0x00000002 */
#define CRU_CLKGATE_CON7_IMEM1_SRC_CLK_EN_SHIFT            (2U)
#define CRU_CLKGATE_CON7_IMEM1_SRC_CLK_EN_MASK             (0x1U << CRU_CLKGATE_CON7_IMEM1_SRC_CLK_EN_SHIFT)            /* 0x00000004 */
#define CRU_CLKGATE_CON7_IMEM2_SRC_CLK_EN_SHIFT            (3U)
#define CRU_CLKGATE_CON7_IMEM2_SRC_CLK_EN_MASK             (0x1U << CRU_CLKGATE_CON7_IMEM2_SRC_CLK_EN_SHIFT)            /* 0x00000008 */
#define CRU_CLKGATE_CON7_IMEM3_SRC_CLK_EN_SHIFT            (4U)
#define CRU_CLKGATE_CON7_IMEM3_SRC_CLK_EN_MASK             (0x1U << CRU_CLKGATE_CON7_IMEM3_SRC_CLK_EN_SHIFT)            /* 0x00000010 */
#define CRU_CLKGATE_CON7_IMEM_HSCLK_PLL_CLK_EN_SHIFT       (5U)
#define CRU_CLKGATE_CON7_IMEM_HSCLK_PLL_CLK_EN_MASK        (0x1U << CRU_CLKGATE_CON7_IMEM_HSCLK_PLL_CLK_EN_SHIFT)       /* 0x00000020 */
#define CRU_CLKGATE_CON7_ACLK_IMEM0_EN_SHIFT               (6U)
#define CRU_CLKGATE_CON7_ACLK_IMEM0_EN_MASK                (0x1U << CRU_CLKGATE_CON7_ACLK_IMEM0_EN_SHIFT)               /* 0x00000040 */
#define CRU_CLKGATE_CON7_ACLK_IMEM1_EN_SHIFT               (7U)
#define CRU_CLKGATE_CON7_ACLK_IMEM1_EN_MASK                (0x1U << CRU_CLKGATE_CON7_ACLK_IMEM1_EN_SHIFT)               /* 0x00000080 */
#define CRU_CLKGATE_CON7_ACLK_IMEM2_EN_SHIFT               (8U)
#define CRU_CLKGATE_CON7_ACLK_IMEM2_EN_MASK                (0x1U << CRU_CLKGATE_CON7_ACLK_IMEM2_EN_SHIFT)               /* 0x00000100 */
#define CRU_CLKGATE_CON7_ACLK_IMEM3_EN_SHIFT               (9U)
#define CRU_CLKGATE_CON7_ACLK_IMEM3_EN_MASK                (0x1U << CRU_CLKGATE_CON7_ACLK_IMEM3_EN_SHIFT)               /* 0x00000200 */
#define CRU_CLKGATE_CON7_ACLK_IMEM0_NIU_EN_SHIFT           (10U)
#define CRU_CLKGATE_CON7_ACLK_IMEM0_NIU_EN_MASK            (0x1U << CRU_CLKGATE_CON7_ACLK_IMEM0_NIU_EN_SHIFT)           /* 0x00000400 */
#define CRU_CLKGATE_CON7_ACLK_IMEM1_NIU_EN_SHIFT           (11U)
#define CRU_CLKGATE_CON7_ACLK_IMEM1_NIU_EN_MASK            (0x1U << CRU_CLKGATE_CON7_ACLK_IMEM1_NIU_EN_SHIFT)           /* 0x00000800 */
#define CRU_CLKGATE_CON7_ACLK_IMEM2_NIU_EN_SHIFT           (12U)
#define CRU_CLKGATE_CON7_ACLK_IMEM2_NIU_EN_MASK            (0x1U << CRU_CLKGATE_CON7_ACLK_IMEM2_NIU_EN_SHIFT)           /* 0x00001000 */
#define CRU_CLKGATE_CON7_ACLK_IMEM3_NIU_EN_SHIFT           (13U)
#define CRU_CLKGATE_CON7_ACLK_IMEM3_NIU_EN_MASK            (0x1U << CRU_CLKGATE_CON7_ACLK_IMEM3_NIU_EN_SHIFT)           /* 0x00002000 */
/* CLKGATE_CON8 */
#define CRU_CLKGATE_CON8_PD_PERI_PLL_CLK_EN_SHIFT          (0U)
#define CRU_CLKGATE_CON8_PD_PERI_PLL_CLK_EN_MASK           (0x1U << CRU_CLKGATE_CON8_PD_PERI_PLL_CLK_EN_SHIFT)          /* 0x00000001 */
#define CRU_CLKGATE_CON8_MSCLK_PERI_CLK_EN_SHIFT           (1U)
#define CRU_CLKGATE_CON8_MSCLK_PERI_CLK_EN_MASK            (0x1U << CRU_CLKGATE_CON8_MSCLK_PERI_CLK_EN_SHIFT)           /* 0x00000002 */
#define CRU_CLKGATE_CON8_LSCLK_PERI_CLK_EN_SHIFT           (2U)
#define CRU_CLKGATE_CON8_LSCLK_PERI_CLK_EN_MASK            (0x1U << CRU_CLKGATE_CON8_LSCLK_PERI_CLK_EN_SHIFT)           /* 0x00000004 */
#define CRU_CLKGATE_CON8_MSCLK_PERI_NIU_EN_SHIFT           (3U)
#define CRU_CLKGATE_CON8_MSCLK_PERI_NIU_EN_MASK            (0x1U << CRU_CLKGATE_CON8_MSCLK_PERI_NIU_EN_SHIFT)           /* 0x00000008 */
#define CRU_CLKGATE_CON8_LSCLK_PERI_NIU_EN_SHIFT           (4U)
#define CRU_CLKGATE_CON8_LSCLK_PERI_NIU_EN_MASK            (0x1U << CRU_CLKGATE_CON8_LSCLK_PERI_NIU_EN_SHIFT)           /* 0x00000010 */
#define CRU_CLKGATE_CON8_DDRPHY_DPLL_CLK_EN_SHIFT          (5U)
#define CRU_CLKGATE_CON8_DDRPHY_DPLL_CLK_EN_MASK           (0x1U << CRU_CLKGATE_CON8_DDRPHY_DPLL_CLK_EN_SHIFT)          /* 0x00000020 */
#define CRU_CLKGATE_CON8_DDRPHY_GPLL_CLK_EN_SHIFT          (6U)
#define CRU_CLKGATE_CON8_DDRPHY_GPLL_CLK_EN_MASK           (0x1U << CRU_CLKGATE_CON8_DDRPHY_GPLL_CLK_EN_SHIFT)          /* 0x00000040 */
#define CRU_CLKGATE_CON8_DDRPHY1X_CLK_EN_SHIFT             (7U)
#define CRU_CLKGATE_CON8_DDRPHY1X_CLK_EN_MASK              (0x1U << CRU_CLKGATE_CON8_DDRPHY1X_CLK_EN_SHIFT)             /* 0x00000080 */
#define CRU_CLKGATE_CON8_ACLK_VPU_PLL_CLK_EN_SHIFT         (8U)
#define CRU_CLKGATE_CON8_ACLK_VPU_PLL_CLK_EN_MASK          (0x1U << CRU_CLKGATE_CON8_ACLK_VPU_PLL_CLK_EN_SHIFT)         /* 0x00000100 */
#define CRU_CLKGATE_CON8_HCLK_VPU_SRC_EN_SHIFT             (9U)
#define CRU_CLKGATE_CON8_HCLK_VPU_SRC_EN_MASK              (0x1U << CRU_CLKGATE_CON8_HCLK_VPU_SRC_EN_SHIFT)             /* 0x00000200 */
#define CRU_CLKGATE_CON8_ACLK_NPU_NIU_EN_SHIFT             (10U)
#define CRU_CLKGATE_CON8_ACLK_NPU_NIU_EN_MASK              (0x1U << CRU_CLKGATE_CON8_ACLK_NPU_NIU_EN_SHIFT)             /* 0x00000400 */
#define CRU_CLKGATE_CON8_HCLK_VPU_NIU_EN_SHIFT             (11U)
#define CRU_CLKGATE_CON8_HCLK_VPU_NIU_EN_MASK              (0x1U << CRU_CLKGATE_CON8_HCLK_VPU_NIU_EN_SHIFT)             /* 0x00000800 */
#define CRU_CLKGATE_CON8_ACLK_VPU_EN_SHIFT                 (12U)
#define CRU_CLKGATE_CON8_ACLK_VPU_EN_MASK                  (0x1U << CRU_CLKGATE_CON8_ACLK_VPU_EN_SHIFT)                 /* 0x00001000 */
#define CRU_CLKGATE_CON8_HCLK_VPU_EN_SHIFT                 (13U)
#define CRU_CLKGATE_CON8_HCLK_VPU_EN_MASK                  (0x1U << CRU_CLKGATE_CON8_HCLK_VPU_EN_SHIFT)                 /* 0x00002000 */
/* CLKGATE_CON9 */
#define CRU_CLKGATE_CON9_HCLK_MMC_SFC_CLK_EN_SHIFT         (0U)
#define CRU_CLKGATE_CON9_HCLK_MMC_SFC_CLK_EN_MASK          (0x1U << CRU_CLKGATE_CON9_HCLK_MMC_SFC_CLK_EN_SHIFT)         /* 0x00000001 */
#define CRU_CLKGATE_CON9_CLK_SDIO_PLL_CLK_EN_SHIFT         (1U)
#define CRU_CLKGATE_CON9_CLK_SDIO_PLL_CLK_EN_MASK          (0x1U << CRU_CLKGATE_CON9_CLK_SDIO_PLL_CLK_EN_SHIFT)         /* 0x00000002 */
#define CRU_CLKGATE_CON9_CLK_SDIO_DIV50_CLK_EN_SHIFT       (2U)
#define CRU_CLKGATE_CON9_CLK_SDIO_DIV50_CLK_EN_MASK        (0x1U << CRU_CLKGATE_CON9_CLK_SDIO_DIV50_CLK_EN_SHIFT)       /* 0x00000004 */
#define CRU_CLKGATE_CON9_CLK_SDIO_CLK_EN_SHIFT             (3U)
#define CRU_CLKGATE_CON9_CLK_SDIO_CLK_EN_MASK              (0x1U << CRU_CLKGATE_CON9_CLK_SDIO_CLK_EN_SHIFT)             /* 0x00000008 */
#define CRU_CLKGATE_CON9_CLK_EMMC_PLL_CLK_EN_SHIFT         (4U)
#define CRU_CLKGATE_CON9_CLK_EMMC_PLL_CLK_EN_MASK          (0x1U << CRU_CLKGATE_CON9_CLK_EMMC_PLL_CLK_EN_SHIFT)         /* 0x00000010 */
#define CRU_CLKGATE_CON9_CLK_EMMC_DIV50_CLK_EN_SHIFT       (5U)
#define CRU_CLKGATE_CON9_CLK_EMMC_DIV50_CLK_EN_MASK        (0x1U << CRU_CLKGATE_CON9_CLK_EMMC_DIV50_CLK_EN_SHIFT)       /* 0x00000020 */
#define CRU_CLKGATE_CON9_CLK_EMMC_CLK_EN_SHIFT             (6U)
#define CRU_CLKGATE_CON9_CLK_EMMC_CLK_EN_MASK              (0x1U << CRU_CLKGATE_CON9_CLK_EMMC_CLK_EN_SHIFT)             /* 0x00000040 */
#define CRU_CLKGATE_CON9_CLK_SDMMC_PLL_CLK_EN_SHIFT        (7U)
#define CRU_CLKGATE_CON9_CLK_SDMMC_PLL_CLK_EN_MASK         (0x1U << CRU_CLKGATE_CON9_CLK_SDMMC_PLL_CLK_EN_SHIFT)        /* 0x00000080 */
#define CRU_CLKGATE_CON9_CLK_SDMMC_DIV50_CLK_EN_SHIFT      (8U)
#define CRU_CLKGATE_CON9_CLK_SDMMC_DIV50_CLK_EN_MASK       (0x1U << CRU_CLKGATE_CON9_CLK_SDMMC_DIV50_CLK_EN_SHIFT)      /* 0x00000100 */
#define CRU_CLKGATE_CON9_CLK_SDMMC_CLK_EN_SHIFT            (9U)
#define CRU_CLKGATE_CON9_CLK_SDMMC_CLK_EN_MASK             (0x1U << CRU_CLKGATE_CON9_CLK_SDMMC_CLK_EN_SHIFT)            /* 0x00000200 */
#define CRU_CLKGATE_CON9_CLK_SFC_PLL_CLK_EN_SHIFT          (10U)
#define CRU_CLKGATE_CON9_CLK_SFC_PLL_CLK_EN_MASK           (0x1U << CRU_CLKGATE_CON9_CLK_SFC_PLL_CLK_EN_SHIFT)          /* 0x00000400 */
#define CRU_CLKGATE_CON9_HCLK_MMC_SFC_NIU_EN_SHIFT         (11U)
#define CRU_CLKGATE_CON9_HCLK_MMC_SFC_NIU_EN_MASK          (0x1U << CRU_CLKGATE_CON9_HCLK_MMC_SFC_NIU_EN_SHIFT)         /* 0x00000800 */
#define CRU_CLKGATE_CON9_HCLK_EMMC_CLK_EN_SHIFT            (12U)
#define CRU_CLKGATE_CON9_HCLK_EMMC_CLK_EN_MASK             (0x1U << CRU_CLKGATE_CON9_HCLK_EMMC_CLK_EN_SHIFT)            /* 0x00001000 */
#define CRU_CLKGATE_CON9_HCLK_SFC_CLK_EN_SHIFT             (13U)
#define CRU_CLKGATE_CON9_HCLK_SFC_CLK_EN_MASK              (0x1U << CRU_CLKGATE_CON9_HCLK_SFC_CLK_EN_SHIFT)             /* 0x00002000 */
/* CLKGATE_CON10 */
#define CRU_CLKGATE_CON10_ACLK_SD_GMAC_CLK_EN_SHIFT        (0U)
#define CRU_CLKGATE_CON10_ACLK_SD_GMAC_CLK_EN_MASK         (0x1U << CRU_CLKGATE_CON10_ACLK_SD_GMAC_CLK_EN_SHIFT)        /* 0x00000001 */
#define CRU_CLKGATE_CON10_HCLK_SD_GMAC_CLK_EN_SHIFT        (1U)
#define CRU_CLKGATE_CON10_HCLK_SD_GMAC_CLK_EN_MASK         (0x1U << CRU_CLKGATE_CON10_HCLK_SD_GMAC_CLK_EN_SHIFT)        /* 0x00000002 */
#define CRU_CLKGATE_CON10_PCLK_SD_GMAC_CLK_EN_SHIFT        (2U)
#define CRU_CLKGATE_CON10_PCLK_SD_GMAC_CLK_EN_MASK         (0x1U << CRU_CLKGATE_CON10_PCLK_SD_GMAC_CLK_EN_SHIFT)        /* 0x00000004 */
#define CRU_CLKGATE_CON10_CLK_GMAC_PLL_CLK_EN_SHIFT        (3U)
#define CRU_CLKGATE_CON10_CLK_GMAC_PLL_CLK_EN_MASK         (0x1U << CRU_CLKGATE_CON10_CLK_GMAC_PLL_CLK_EN_SHIFT)        /* 0x00000008 */
#define CRU_CLKGATE_CON10_CLK_MAC_REF_EN_SHIFT             (4U)
#define CRU_CLKGATE_CON10_CLK_MAC_REF_EN_MASK              (0x1U << CRU_CLKGATE_CON10_CLK_MAC_REF_EN_SHIFT)             /* 0x00000010 */
#define CRU_CLKGATE_CON10_CLK_MAC_REFOUT_EN_SHIFT          (5U)
#define CRU_CLKGATE_CON10_CLK_MAC_REFOUT_EN_MASK           (0x1U << CRU_CLKGATE_CON10_CLK_MAC_REFOUT_EN_SHIFT)          /* 0x00000020 */
#define CRU_CLKGATE_CON10_CLK_MAC_RX_EN_SHIFT              (6U)
#define CRU_CLKGATE_CON10_CLK_MAC_RX_EN_MASK               (0x1U << CRU_CLKGATE_CON10_CLK_MAC_RX_EN_SHIFT)              /* 0x00000040 */
#define CRU_CLKGATE_CON10_CLK_MAC_TX_EN_SHIFT              (7U)
#define CRU_CLKGATE_CON10_CLK_MAC_TX_EN_MASK               (0x1U << CRU_CLKGATE_CON10_CLK_MAC_TX_EN_SHIFT)              /* 0x00000080 */
#define CRU_CLKGATE_CON10_ACLK_GMAC_NIU_EN_SHIFT           (8U)
#define CRU_CLKGATE_CON10_ACLK_GMAC_NIU_EN_MASK            (0x1U << CRU_CLKGATE_CON10_ACLK_GMAC_NIU_EN_SHIFT)           /* 0x00000100 */
#define CRU_CLKGATE_CON10_HCLK_GMAC_NIU_EN_SHIFT           (9U)
#define CRU_CLKGATE_CON10_HCLK_GMAC_NIU_EN_MASK            (0x1U << CRU_CLKGATE_CON10_HCLK_GMAC_NIU_EN_SHIFT)           /* 0x00000200 */
#define CRU_CLKGATE_CON10_PCLK_GMAC_NIU_EN_SHIFT           (10U)
#define CRU_CLKGATE_CON10_PCLK_GMAC_NIU_EN_MASK            (0x1U << CRU_CLKGATE_CON10_PCLK_GMAC_NIU_EN_SHIFT)           /* 0x00000400 */
#define CRU_CLKGATE_CON10_ACLK_GMAC_EN_SHIFT               (11U)
#define CRU_CLKGATE_CON10_ACLK_GMAC_EN_MASK                (0x1U << CRU_CLKGATE_CON10_ACLK_GMAC_EN_SHIFT)               /* 0x00000800 */
#define CRU_CLKGATE_CON10_PCLK_GMAC_EN_SHIFT               (12U)
#define CRU_CLKGATE_CON10_PCLK_GMAC_EN_MASK                (0x1U << CRU_CLKGATE_CON10_PCLK_GMAC_EN_SHIFT)               /* 0x00001000 */
#define CRU_CLKGATE_CON10_HCLK_SDIO_CLK_EN_SHIFT           (13U)
#define CRU_CLKGATE_CON10_HCLK_SDIO_CLK_EN_MASK            (0x1U << CRU_CLKGATE_CON10_HCLK_SDIO_CLK_EN_SHIFT)           /* 0x00002000 */
#define CRU_CLKGATE_CON10_HCLK_SDMMC_CLK_EN_SHIFT          (14U)
#define CRU_CLKGATE_CON10_HCLK_SDMMC_CLK_EN_MASK           (0x1U << CRU_CLKGATE_CON10_HCLK_SDMMC_CLK_EN_SHIFT)          /* 0x00004000 */
#define CRU_CLKGATE_CON10_CLK_GMAC_OUT_PLL_CLK_EN_SHIFT    (15U)
#define CRU_CLKGATE_CON10_CLK_GMAC_OUT_PLL_CLK_EN_MASK     (0x1U << CRU_CLKGATE_CON10_CLK_GMAC_OUT_PLL_CLK_EN_SHIFT)    /* 0x00008000 */
/* CLKGATE_CON11 */
#define CRU_CLKGATE_CON11_PD_BUS_PLL_CLK_EN_SHIFT          (0U)
#define CRU_CLKGATE_CON11_PD_BUS_PLL_CLK_EN_MASK           (0x1U << CRU_CLKGATE_CON11_PD_BUS_PLL_CLK_EN_SHIFT)          /* 0x00000001 */
#define CRU_CLKGATE_CON11_HSCLK_BUS_CLK_EN_SHIFT           (1U)
#define CRU_CLKGATE_CON11_HSCLK_BUS_CLK_EN_MASK            (0x1U << CRU_CLKGATE_CON11_HSCLK_BUS_CLK_EN_SHIFT)           /* 0x00000002 */
#define CRU_CLKGATE_CON11_MSCLK_BUS_CLK_EN_SHIFT           (2U)
#define CRU_CLKGATE_CON11_MSCLK_BUS_CLK_EN_MASK            (0x1U << CRU_CLKGATE_CON11_MSCLK_BUS_CLK_EN_SHIFT)           /* 0x00000004 */
#define CRU_CLKGATE_CON11_LSCLK_BUS_CLK_EN_SHIFT           (3U)
#define CRU_CLKGATE_CON11_LSCLK_BUS_CLK_EN_MASK            (0x1U << CRU_CLKGATE_CON11_LSCLK_BUS_CLK_EN_SHIFT)           /* 0x00000008 */
#define CRU_CLKGATE_CON11_PCLK_TOP_CLK_EN_SHIFT            (4U)
#define CRU_CLKGATE_CON11_PCLK_TOP_CLK_EN_MASK             (0x1U << CRU_CLKGATE_CON11_PCLK_TOP_CLK_EN_SHIFT)            /* 0x00000010 */
#define CRU_CLKGATE_CON11_CLK_CRYPTO_PLL_CLK_EN_SHIFT      (5U)
#define CRU_CLKGATE_CON11_CLK_CRYPTO_PLL_CLK_EN_MASK       (0x1U << CRU_CLKGATE_CON11_CLK_CRYPTO_PLL_CLK_EN_SHIFT)      /* 0x00000020 */
#define CRU_CLKGATE_CON11_CLK_CRYPTO_APK_PLL_CLK_EN_SHIFT  (6U)
#define CRU_CLKGATE_CON11_CLK_CRYPTO_APK_PLL_CLK_EN_MASK   (0x1U << CRU_CLKGATE_CON11_CLK_CRYPTO_APK_PLL_CLK_EN_SHIFT)  /* 0x00000040 */
#define CRU_CLKGATE_CON11_CLK_UART1_PLL_CLK_EN_SHIFT       (8U)
#define CRU_CLKGATE_CON11_CLK_UART1_PLL_CLK_EN_MASK        (0x1U << CRU_CLKGATE_CON11_CLK_UART1_PLL_CLK_EN_SHIFT)       /* 0x00000100 */
#define CRU_CLKGATE_CON11_CLK_UART1_DIVNP5_CLK_EN_SHIFT    (9U)
#define CRU_CLKGATE_CON11_CLK_UART1_DIVNP5_CLK_EN_MASK     (0x1U << CRU_CLKGATE_CON11_CLK_UART1_DIVNP5_CLK_EN_SHIFT)    /* 0x00000200 */
#define CRU_CLKGATE_CON11_CLK_UART1_FRAC_SRC_CLK_EN_SHIFT  (10U)
#define CRU_CLKGATE_CON11_CLK_UART1_FRAC_SRC_CLK_EN_MASK   (0x1U << CRU_CLKGATE_CON11_CLK_UART1_FRAC_SRC_CLK_EN_SHIFT)  /* 0x00000400 */
#define CRU_CLKGATE_CON11_CLK_UART1_CLK_EN_SHIFT           (11U)
#define CRU_CLKGATE_CON11_CLK_UART1_CLK_EN_MASK            (0x1U << CRU_CLKGATE_CON11_CLK_UART1_CLK_EN_SHIFT)           /* 0x00000800 */
#define CRU_CLKGATE_CON11_CLK_UART2_PLL_CLK_EN_SHIFT       (12U)
#define CRU_CLKGATE_CON11_CLK_UART2_PLL_CLK_EN_MASK        (0x1U << CRU_CLKGATE_CON11_CLK_UART2_PLL_CLK_EN_SHIFT)       /* 0x00001000 */
#define CRU_CLKGATE_CON11_CLK_UART2_DIVNP5_CLK_EN_SHIFT    (13U)
#define CRU_CLKGATE_CON11_CLK_UART2_DIVNP5_CLK_EN_MASK     (0x1U << CRU_CLKGATE_CON11_CLK_UART2_DIVNP5_CLK_EN_SHIFT)    /* 0x00002000 */
#define CRU_CLKGATE_CON11_CLK_UART2_FRAC_SRC_CLK_EN_SHIFT  (14U)
#define CRU_CLKGATE_CON11_CLK_UART2_FRAC_SRC_CLK_EN_MASK   (0x1U << CRU_CLKGATE_CON11_CLK_UART2_FRAC_SRC_CLK_EN_SHIFT)  /* 0x00004000 */
#define CRU_CLKGATE_CON11_CLK_UAR2_CLK_EN_SHIFT            (15U)
#define CRU_CLKGATE_CON11_CLK_UAR2_CLK_EN_MASK             (0x1U << CRU_CLKGATE_CON11_CLK_UAR2_CLK_EN_SHIFT)            /* 0x00008000 */
/* CLKGATE_CON12 */
#define CRU_CLKGATE_CON12_CLK_UART3_PLL_CLK_EN_SHIFT       (0U)
#define CRU_CLKGATE_CON12_CLK_UART3_PLL_CLK_EN_MASK        (0x1U << CRU_CLKGATE_CON12_CLK_UART3_PLL_CLK_EN_SHIFT)       /* 0x00000001 */
#define CRU_CLKGATE_CON12_CLK_UART3_DIVNP5_CLK_EN_SHIFT    (1U)
#define CRU_CLKGATE_CON12_CLK_UART3_DIVNP5_CLK_EN_MASK     (0x1U << CRU_CLKGATE_CON12_CLK_UART3_DIVNP5_CLK_EN_SHIFT)    /* 0x00000002 */
#define CRU_CLKGATE_CON12_CLK_UART3_FRAC_SRC_CLK_EN_SHIFT  (2U)
#define CRU_CLKGATE_CON12_CLK_UART3_FRAC_SRC_CLK_EN_MASK   (0x1U << CRU_CLKGATE_CON12_CLK_UART3_FRAC_SRC_CLK_EN_SHIFT)  /* 0x00000004 */
#define CRU_CLKGATE_CON12_CLK_UART3_CLK_EN_SHIFT           (3U)
#define CRU_CLKGATE_CON12_CLK_UART3_CLK_EN_MASK            (0x1U << CRU_CLKGATE_CON12_CLK_UART3_CLK_EN_SHIFT)           /* 0x00000008 */
#define CRU_CLKGATE_CON12_CLK_UART4_PLL_CLK_EN_SHIFT       (4U)
#define CRU_CLKGATE_CON12_CLK_UART4_PLL_CLK_EN_MASK        (0x1U << CRU_CLKGATE_CON12_CLK_UART4_PLL_CLK_EN_SHIFT)       /* 0x00000010 */
#define CRU_CLKGATE_CON12_CLK_UART4_DIVNP5_CLK_EN_SHIFT    (5U)
#define CRU_CLKGATE_CON12_CLK_UART4_DIVNP5_CLK_EN_MASK     (0x1U << CRU_CLKGATE_CON12_CLK_UART4_DIVNP5_CLK_EN_SHIFT)    /* 0x00000020 */
#define CRU_CLKGATE_CON12_CLK_UART4_FRAC_SRC_CLK_EN_SHIFT  (6U)
#define CRU_CLKGATE_CON12_CLK_UART4_FRAC_SRC_CLK_EN_MASK   (0x1U << CRU_CLKGATE_CON12_CLK_UART4_FRAC_SRC_CLK_EN_SHIFT)  /* 0x00000040 */
#define CRU_CLKGATE_CON12_CLK_UART4_CLK_EN_SHIFT           (7U)
#define CRU_CLKGATE_CON12_CLK_UART4_CLK_EN_MASK            (0x1U << CRU_CLKGATE_CON12_CLK_UART4_CLK_EN_SHIFT)           /* 0x00000080 */
#define CRU_CLKGATE_CON12_CLK_UART5_PLL_CLK_EN_SHIFT       (8U)
#define CRU_CLKGATE_CON12_CLK_UART5_PLL_CLK_EN_MASK        (0x1U << CRU_CLKGATE_CON12_CLK_UART5_PLL_CLK_EN_SHIFT)       /* 0x00000100 */
#define CRU_CLKGATE_CON12_CLK_UART5_DIVNP5_CLK_EN_SHIFT    (9U)
#define CRU_CLKGATE_CON12_CLK_UART5_DIVNP5_CLK_EN_MASK     (0x1U << CRU_CLKGATE_CON12_CLK_UART5_DIVNP5_CLK_EN_SHIFT)    /* 0x00000200 */
#define CRU_CLKGATE_CON12_CLK_UART5_FRAC_SRC_CLK_EN_SHIFT  (10U)
#define CRU_CLKGATE_CON12_CLK_UART5_FRAC_SRC_CLK_EN_MASK   (0x1U << CRU_CLKGATE_CON12_CLK_UART5_FRAC_SRC_CLK_EN_SHIFT)  /* 0x00000400 */
#define CRU_CLKGATE_CON12_CLK_UART5_CLK_EN_SHIFT           (11U)
#define CRU_CLKGATE_CON12_CLK_UART5_CLK_EN_MASK            (0x1U << CRU_CLKGATE_CON12_CLK_UART5_CLK_EN_SHIFT)           /* 0x00000800 */
#define CRU_CLKGATE_CON12_CLK_UART6_PLL_CLK_EN_SHIFT       (12U)
#define CRU_CLKGATE_CON12_CLK_UART6_PLL_CLK_EN_MASK        (0x1U << CRU_CLKGATE_CON12_CLK_UART6_PLL_CLK_EN_SHIFT)       /* 0x00001000 */
#define CRU_CLKGATE_CON12_CLK_UART6_DIVNP5_CLK_EN_SHIFT    (13U)
#define CRU_CLKGATE_CON12_CLK_UART6_DIVNP5_CLK_EN_MASK     (0x1U << CRU_CLKGATE_CON12_CLK_UART6_DIVNP5_CLK_EN_SHIFT)    /* 0x00002000 */
#define CRU_CLKGATE_CON12_CLK_UART6_FRAC_SRC_CLK_EN_SHIFT  (14U)
#define CRU_CLKGATE_CON12_CLK_UART6_FRAC_SRC_CLK_EN_MASK   (0x1U << CRU_CLKGATE_CON12_CLK_UART6_FRAC_SRC_CLK_EN_SHIFT)  /* 0x00004000 */
#define CRU_CLKGATE_CON12_CLK_UART6_CLK_EN_SHIFT           (15U)
#define CRU_CLKGATE_CON12_CLK_UART6_CLK_EN_MASK            (0x1U << CRU_CLKGATE_CON12_CLK_UART6_CLK_EN_SHIFT)           /* 0x00008000 */
/* CLKGATE_CON13 */
#define CRU_CLKGATE_CON13_CLK_UART7_PLL_CLK_EN_SHIFT       (0U)
#define CRU_CLKGATE_CON13_CLK_UART7_PLL_CLK_EN_MASK        (0x1U << CRU_CLKGATE_CON13_CLK_UART7_PLL_CLK_EN_SHIFT)       /* 0x00000001 */
#define CRU_CLKGATE_CON13_CLK_UART7_DIVNP5_CLK_EN_SHIFT    (1U)
#define CRU_CLKGATE_CON13_CLK_UART7_DIVNP5_CLK_EN_MASK     (0x1U << CRU_CLKGATE_CON13_CLK_UART7_DIVNP5_CLK_EN_SHIFT)    /* 0x00000002 */
#define CRU_CLKGATE_CON13_CLK_UART7_FRAC_SRC_CLK_EN_SHIFT  (2U)
#define CRU_CLKGATE_CON13_CLK_UART7_FRAC_SRC_CLK_EN_MASK   (0x1U << CRU_CLKGATE_CON13_CLK_UART7_FRAC_SRC_CLK_EN_SHIFT)  /* 0x00000004 */
#define CRU_CLKGATE_CON13_CLK_UART7_CLK_EN_SHIFT           (3U)
#define CRU_CLKGATE_CON13_CLK_UART7_CLK_EN_MASK            (0x1U << CRU_CLKGATE_CON13_CLK_UART7_CLK_EN_SHIFT)           /* 0x00000008 */
#define CRU_CLKGATE_CON13_CLK_I2C1_PLL_CLK_EN_SHIFT        (4U)
#define CRU_CLKGATE_CON13_CLK_I2C1_PLL_CLK_EN_MASK         (0x1U << CRU_CLKGATE_CON13_CLK_I2C1_PLL_CLK_EN_SHIFT)        /* 0x00000010 */
#define CRU_CLKGATE_CON13_CLK_I2C2_PLL_CLK_EN_SHIFT        (5U)
#define CRU_CLKGATE_CON13_CLK_I2C2_PLL_CLK_EN_MASK         (0x1U << CRU_CLKGATE_CON13_CLK_I2C2_PLL_CLK_EN_SHIFT)        /* 0x00000020 */
#define CRU_CLKGATE_CON13_CLK_I2C3_PLL_CLK_EN_SHIFT        (6U)
#define CRU_CLKGATE_CON13_CLK_I2C3_PLL_CLK_EN_MASK         (0x1U << CRU_CLKGATE_CON13_CLK_I2C3_PLL_CLK_EN_SHIFT)        /* 0x00000040 */
#define CRU_CLKGATE_CON13_CLK_SPI0_PLL_CLK_EN_SHIFT        (7U)
#define CRU_CLKGATE_CON13_CLK_SPI0_PLL_CLK_EN_MASK         (0x1U << CRU_CLKGATE_CON13_CLK_SPI0_PLL_CLK_EN_SHIFT)        /* 0x00000080 */
#define CRU_CLKGATE_CON13_CLK_SPI1_PLL_CLK_EN_SHIFT        (8U)
#define CRU_CLKGATE_CON13_CLK_SPI1_PLL_CLK_EN_MASK         (0x1U << CRU_CLKGATE_CON13_CLK_SPI1_PLL_CLK_EN_SHIFT)        /* 0x00000100 */
#define CRU_CLKGATE_CON13_CLK_SPI2_PLL_CLK_EN_SHIFT        (9U)
#define CRU_CLKGATE_CON13_CLK_SPI2_PLL_CLK_EN_MASK         (0x1U << CRU_CLKGATE_CON13_CLK_SPI2_PLL_CLK_EN_SHIFT)        /* 0x00000200 */
#define CRU_CLKGATE_CON13_CLK_PWM0_PLL_CLK_EN_SHIFT        (10U)
#define CRU_CLKGATE_CON13_CLK_PWM0_PLL_CLK_EN_MASK         (0x1U << CRU_CLKGATE_CON13_CLK_PWM0_PLL_CLK_EN_SHIFT)        /* 0x00000400 */
#define CRU_CLKGATE_CON13_CLK_PWM1_PLL_CLK_EN_SHIFT        (11U)
#define CRU_CLKGATE_CON13_CLK_PWM1_PLL_CLK_EN_MASK         (0x1U << CRU_CLKGATE_CON13_CLK_PWM1_PLL_CLK_EN_SHIFT)        /* 0x00000800 */
#define CRU_CLKGATE_CON13_CLK_PWM2_PLL_CLK_EN_SHIFT        (12U)
#define CRU_CLKGATE_CON13_CLK_PWM2_PLL_CLK_EN_MASK         (0x1U << CRU_CLKGATE_CON13_CLK_PWM2_PLL_CLK_EN_SHIFT)        /* 0x00001000 */
#define CRU_CLKGATE_CON13_CLK_TSADC_PLL_CLK_EN_SHIFT       (13U)
#define CRU_CLKGATE_CON13_CLK_TSADC_PLL_CLK_EN_MASK        (0x1U << CRU_CLKGATE_CON13_CLK_TSADC_PLL_CLK_EN_SHIFT)       /* 0x00002000 */
#define CRU_CLKGATE_CON13_CLK_SARADC_PLL_CLK_EN_SHIFT      (14U)
#define CRU_CLKGATE_CON13_CLK_SARADC_PLL_CLK_EN_MASK       (0x1U << CRU_CLKGATE_CON13_CLK_SARADC_PLL_CLK_EN_SHIFT)      /* 0x00004000 */
/* CLKGATE_CON14 */
#define CRU_CLKGATE_CON14_CLK_EFUSE_S_PLL_CLK_EN_SHIFT     (0U)
#define CRU_CLKGATE_CON14_CLK_EFUSE_S_PLL_CLK_EN_MASK      (0x1U << CRU_CLKGATE_CON14_CLK_EFUSE_S_PLL_CLK_EN_SHIFT)     /* 0x00000001 */
#define CRU_CLKGATE_CON14_CLK_EFUSE_NS_PLL_CLK_EN_SHIFT    (1U)
#define CRU_CLKGATE_CON14_CLK_EFUSE_NS_PLL_CLK_EN_MASK     (0x1U << CRU_CLKGATE_CON14_CLK_EFUSE_NS_PLL_CLK_EN_SHIFT)    /* 0x00000002 */
#define CRU_CLKGATE_CON14_DBCLK_GPIO1_PLL_CLK_EN_SHIFT     (2U)
#define CRU_CLKGATE_CON14_DBCLK_GPIO1_PLL_CLK_EN_MASK      (0x1U << CRU_CLKGATE_CON14_DBCLK_GPIO1_PLL_CLK_EN_SHIFT)     /* 0x00000004 */
#define CRU_CLKGATE_CON14_DBCLK_GPIO2_PLL_CLK_EN_SHIFT     (3U)
#define CRU_CLKGATE_CON14_DBCLK_GPIO2_PLL_CLK_EN_MASK      (0x1U << CRU_CLKGATE_CON14_DBCLK_GPIO2_PLL_CLK_EN_SHIFT)     /* 0x00000008 */
#define CRU_CLKGATE_CON14_DBCLK_GPIO3_PLL_CLK_EN_SHIFT     (4U)
#define CRU_CLKGATE_CON14_DBCLK_GPIO3_PLL_CLK_EN_MASK      (0x1U << CRU_CLKGATE_CON14_DBCLK_GPIO3_PLL_CLK_EN_SHIFT)     /* 0x00000010 */
#define CRU_CLKGATE_CON14_DBCLK_GPIO4_PLL_CLK_EN_SHIFT     (5U)
#define CRU_CLKGATE_CON14_DBCLK_GPIO4_PLL_CLK_EN_MASK      (0x1U << CRU_CLKGATE_CON14_DBCLK_GPIO4_PLL_CLK_EN_SHIFT)     /* 0x00000020 */
#define CRU_CLKGATE_CON14_CLK_I2C4_PLL_CLK_EN_SHIFT        (6U)
#define CRU_CLKGATE_CON14_CLK_I2C4_PLL_CLK_EN_MASK         (0x1U << CRU_CLKGATE_CON14_CLK_I2C4_PLL_CLK_EN_SHIFT)        /* 0x00000040 */
#define CRU_CLKGATE_CON14_CLK_I2C5_PLL_CLK_EN_SHIFT        (7U)
#define CRU_CLKGATE_CON14_CLK_I2C5_PLL_CLK_EN_MASK         (0x1U << CRU_CLKGATE_CON14_CLK_I2C5_PLL_CLK_EN_SHIFT)        /* 0x00000080 */
#define CRU_CLKGATE_CON14_CLK_TIMER0_CLK_EN_SHIFT          (8U)
#define CRU_CLKGATE_CON14_CLK_TIMER0_CLK_EN_MASK           (0x1U << CRU_CLKGATE_CON14_CLK_TIMER0_CLK_EN_SHIFT)          /* 0x00000100 */
#define CRU_CLKGATE_CON14_CLK_TIMER1_CLK_EN_SHIFT          (9U)
#define CRU_CLKGATE_CON14_CLK_TIMER1_CLK_EN_MASK           (0x1U << CRU_CLKGATE_CON14_CLK_TIMER1_CLK_EN_SHIFT)          /* 0x00000200 */
#define CRU_CLKGATE_CON14_CLK_TIMER2_CLK_EN_SHIFT          (10U)
#define CRU_CLKGATE_CON14_CLK_TIMER2_CLK_EN_MASK           (0x1U << CRU_CLKGATE_CON14_CLK_TIMER2_CLK_EN_SHIFT)          /* 0x00000400 */
#define CRU_CLKGATE_CON14_CLK_TIMER3_CLK_EN_SHIFT          (11U)
#define CRU_CLKGATE_CON14_CLK_TIMER3_CLK_EN_MASK           (0x1U << CRU_CLKGATE_CON14_CLK_TIMER3_CLK_EN_SHIFT)          /* 0x00000800 */
#define CRU_CLKGATE_CON14_CLK_TIMER4_CLK_EN_SHIFT          (12U)
#define CRU_CLKGATE_CON14_CLK_TIMER4_CLK_EN_MASK           (0x1U << CRU_CLKGATE_CON14_CLK_TIMER4_CLK_EN_SHIFT)          /* 0x00001000 */
#define CRU_CLKGATE_CON14_CLK_TIMER5_CLK_EN_SHIFT          (13U)
#define CRU_CLKGATE_CON14_CLK_TIMER5_CLK_EN_MASK           (0x1U << CRU_CLKGATE_CON14_CLK_TIMER5_CLK_EN_SHIFT)          /* 0x00002000 */
/* CLKGATE_CON15 */
#define CRU_CLKGATE_CON15_HSCLK_BUS_NIU_CLK_EN_SHIFT       (0U)
#define CRU_CLKGATE_CON15_HSCLK_BUS_NIU_CLK_EN_MASK        (0x1U << CRU_CLKGATE_CON15_HSCLK_BUS_NIU_CLK_EN_SHIFT)       /* 0x00000001 */
#define CRU_CLKGATE_CON15_MSCLK_BUS_NIU_CLK_EN_SHIFT       (1U)
#define CRU_CLKGATE_CON15_MSCLK_BUS_NIU_CLK_EN_MASK        (0x1U << CRU_CLKGATE_CON15_MSCLK_BUS_NIU_CLK_EN_SHIFT)       /* 0x00000002 */
#define CRU_CLKGATE_CON15_MSCLK_BUS_SUB_NIU_CLK_EN_SHIFT   (2U)
#define CRU_CLKGATE_CON15_MSCLK_BUS_SUB_NIU_CLK_EN_MASK    (0x1U << CRU_CLKGATE_CON15_MSCLK_BUS_SUB_NIU_CLK_EN_SHIFT)   /* 0x00000004 */
#define CRU_CLKGATE_CON15_LSCLK_BUS_NIU_EN_SHIFT           (3U)
#define CRU_CLKGATE_CON15_LSCLK_BUS_NIU_EN_MASK            (0x1U << CRU_CLKGATE_CON15_LSCLK_BUS_NIU_EN_SHIFT)           /* 0x00000008 */
#define CRU_CLKGATE_CON15_HCLK_ROM_CLK_EN_SHIFT            (4U)
#define CRU_CLKGATE_CON15_HCLK_ROM_CLK_EN_MASK             (0x1U << CRU_CLKGATE_CON15_HCLK_ROM_CLK_EN_SHIFT)            /* 0x00000010 */
#define CRU_CLKGATE_CON15_ACLK_CRYPTO_EN_SHIFT             (5U)
#define CRU_CLKGATE_CON15_ACLK_CRYPTO_EN_MASK              (0x1U << CRU_CLKGATE_CON15_ACLK_CRYPTO_EN_SHIFT)             /* 0x00000020 */
#define CRU_CLKGATE_CON15_HCLK_CRYPTO_EN_SHIFT             (6U)
#define CRU_CLKGATE_CON15_HCLK_CRYPTO_EN_MASK              (0x1U << CRU_CLKGATE_CON15_HCLK_CRYPTO_EN_SHIFT)             /* 0x00000040 */
#define CRU_CLKGATE_CON15_ACLK_DCF_CLK_EN_SHIFT            (7U)
#define CRU_CLKGATE_CON15_ACLK_DCF_CLK_EN_MASK             (0x1U << CRU_CLKGATE_CON15_ACLK_DCF_CLK_EN_SHIFT)            /* 0x00000080 */
#define CRU_CLKGATE_CON15_PCLK_DCF_CLK_EN_SHIFT            (8U)
#define CRU_CLKGATE_CON15_PCLK_DCF_CLK_EN_MASK             (0x1U << CRU_CLKGATE_CON15_PCLK_DCF_CLK_EN_SHIFT)            /* 0x00000100 */
#define CRU_CLKGATE_CON15_PCLK_UART1_CLK_EN_SHIFT          (9U)
#define CRU_CLKGATE_CON15_PCLK_UART1_CLK_EN_MASK           (0x1U << CRU_CLKGATE_CON15_PCLK_UART1_CLK_EN_SHIFT)          /* 0x00000200 */
#define CRU_CLKGATE_CON15_PCLK_UART2_CLK_EN_SHIFT          (10U)
#define CRU_CLKGATE_CON15_PCLK_UART2_CLK_EN_MASK           (0x1U << CRU_CLKGATE_CON15_PCLK_UART2_CLK_EN_SHIFT)          /* 0x00000400 */
#define CRU_CLKGATE_CON15_PCLK_UART3_CLK_EN_SHIFT          (11U)
#define CRU_CLKGATE_CON15_PCLK_UART3_CLK_EN_MASK           (0x1U << CRU_CLKGATE_CON15_PCLK_UART3_CLK_EN_SHIFT)          /* 0x00000800 */
#define CRU_CLKGATE_CON15_PCLK_UART4_CLK_EN_SHIFT          (12U)
#define CRU_CLKGATE_CON15_PCLK_UART4_CLK_EN_MASK           (0x1U << CRU_CLKGATE_CON15_PCLK_UART4_CLK_EN_SHIFT)          /* 0x00001000 */
#define CRU_CLKGATE_CON15_PCLK_UART5_CLK_EN_SHIFT          (13U)
#define CRU_CLKGATE_CON15_PCLK_UART5_CLK_EN_MASK           (0x1U << CRU_CLKGATE_CON15_PCLK_UART5_CLK_EN_SHIFT)          /* 0x00002000 */
#define CRU_CLKGATE_CON15_PCLK_UART6_CLK_EN_SHIFT          (14U)
#define CRU_CLKGATE_CON15_PCLK_UART6_CLK_EN_MASK           (0x1U << CRU_CLKGATE_CON15_PCLK_UART6_CLK_EN_SHIFT)          /* 0x00004000 */
#define CRU_CLKGATE_CON15_PCLK_UART7_CLK_EN_SHIFT          (15U)
#define CRU_CLKGATE_CON15_PCLK_UART7_CLK_EN_MASK           (0x1U << CRU_CLKGATE_CON15_PCLK_UART7_CLK_EN_SHIFT)          /* 0x00008000 */
/* CLKGATE_CON16 */
#define CRU_CLKGATE_CON16_PCLK_I2C1_CLK_EN_SHIFT           (0U)
#define CRU_CLKGATE_CON16_PCLK_I2C1_CLK_EN_MASK            (0x1U << CRU_CLKGATE_CON16_PCLK_I2C1_CLK_EN_SHIFT)           /* 0x00000001 */
#define CRU_CLKGATE_CON16_PCLK_I2C2_CLK_EN_SHIFT           (1U)
#define CRU_CLKGATE_CON16_PCLK_I2C2_CLK_EN_MASK            (0x1U << CRU_CLKGATE_CON16_PCLK_I2C2_CLK_EN_SHIFT)           /* 0x00000002 */
#define CRU_CLKGATE_CON16_PCLK_I2C3_CLK_EN_SHIFT           (2U)
#define CRU_CLKGATE_CON16_PCLK_I2C3_CLK_EN_MASK            (0x1U << CRU_CLKGATE_CON16_PCLK_I2C3_CLK_EN_SHIFT)           /* 0x00000004 */
#define CRU_CLKGATE_CON16_PCLK_SPI0_EN_SHIFT               (3U)
#define CRU_CLKGATE_CON16_PCLK_SPI0_EN_MASK                (0x1U << CRU_CLKGATE_CON16_PCLK_SPI0_EN_SHIFT)               /* 0x00000008 */
#define CRU_CLKGATE_CON16_PCLK_SPI1_EN_SHIFT               (4U)
#define CRU_CLKGATE_CON16_PCLK_SPI1_EN_MASK                (0x1U << CRU_CLKGATE_CON16_PCLK_SPI1_EN_SHIFT)               /* 0x00000010 */
#define CRU_CLKGATE_CON16_PCLK_SPI2_EN_SHIFT               (5U)
#define CRU_CLKGATE_CON16_PCLK_SPI2_EN_MASK                (0x1U << CRU_CLKGATE_CON16_PCLK_SPI2_EN_SHIFT)               /* 0x00000020 */
#define CRU_CLKGATE_CON16_PCLK_PWM0_CLK_EN_SHIFT           (6U)
#define CRU_CLKGATE_CON16_PCLK_PWM0_CLK_EN_MASK            (0x1U << CRU_CLKGATE_CON16_PCLK_PWM0_CLK_EN_SHIFT)           /* 0x00000040 */
#define CRU_CLKGATE_CON16_PCLK_PWM1_CLK_EN_SHIFT           (7U)
#define CRU_CLKGATE_CON16_PCLK_PWM1_CLK_EN_MASK            (0x1U << CRU_CLKGATE_CON16_PCLK_PWM1_CLK_EN_SHIFT)           /* 0x00000080 */
#define CRU_CLKGATE_CON16_PCLK_PWM2_CLK_EN_SHIFT           (8U)
#define CRU_CLKGATE_CON16_PCLK_PWM2_CLK_EN_MASK            (0x1U << CRU_CLKGATE_CON16_PCLK_PWM2_CLK_EN_SHIFT)           /* 0x00000100 */
#define CRU_CLKGATE_CON16_PCLK_TSADC_EN_SHIFT              (9U)
#define CRU_CLKGATE_CON16_PCLK_TSADC_EN_MASK               (0x1U << CRU_CLKGATE_CON16_PCLK_TSADC_EN_SHIFT)              /* 0x00000200 */
#define CRU_CLKGATE_CON16_PCLK_SARADC_EN_SHIFT             (10U)
#define CRU_CLKGATE_CON16_PCLK_SARADC_EN_MASK              (0x1U << CRU_CLKGATE_CON16_PCLK_SARADC_EN_SHIFT)             /* 0x00000400 */
#define CRU_CLKGATE_CON16_PCLK_EFUSE_NS_CLK_EN_SHIFT       (11U)
#define CRU_CLKGATE_CON16_PCLK_EFUSE_NS_CLK_EN_MASK        (0x1U << CRU_CLKGATE_CON16_PCLK_EFUSE_NS_CLK_EN_SHIFT)       /* 0x00000800 */
#define CRU_CLKGATE_CON16_PCLK_GPIO1_CLK_EN_SHIFT          (12U)
#define CRU_CLKGATE_CON16_PCLK_GPIO1_CLK_EN_MASK           (0x1U << CRU_CLKGATE_CON16_PCLK_GPIO1_CLK_EN_SHIFT)          /* 0x00001000 */
#define CRU_CLKGATE_CON16_PCLK_GPIO2_CLK_EN_SHIFT          (13U)
#define CRU_CLKGATE_CON16_PCLK_GPIO2_CLK_EN_MASK           (0x1U << CRU_CLKGATE_CON16_PCLK_GPIO2_CLK_EN_SHIFT)          /* 0x00002000 */
#define CRU_CLKGATE_CON16_PCLK_GPIO3_CLK_EN_SHIFT          (14U)
#define CRU_CLKGATE_CON16_PCLK_GPIO3_CLK_EN_MASK           (0x1U << CRU_CLKGATE_CON16_PCLK_GPIO3_CLK_EN_SHIFT)          /* 0x00004000 */
#define CRU_CLKGATE_CON16_PCLK_GPIO4_CLK_EN_SHIFT          (15U)
#define CRU_CLKGATE_CON16_PCLK_GPIO4_CLK_EN_MASK           (0x1U << CRU_CLKGATE_CON16_PCLK_GPIO4_CLK_EN_SHIFT)          /* 0x00008000 */
/* CLKGATE_CON17 */
#define CRU_CLKGATE_CON17_PCLK_TIMER0_EN_SHIFT             (0U)
#define CRU_CLKGATE_CON17_PCLK_TIMER0_EN_MASK              (0x1U << CRU_CLKGATE_CON17_PCLK_TIMER0_EN_SHIFT)             /* 0x00000001 */
#define CRU_CLKGATE_CON17_PCLK_WDT_NS_CLK_EN_SHIFT         (1U)
#define CRU_CLKGATE_CON17_PCLK_WDT_NS_CLK_EN_MASK          (0x1U << CRU_CLKGATE_CON17_PCLK_WDT_NS_CLK_EN_SHIFT)         /* 0x00000002 */
#define CRU_CLKGATE_CON17_PCLK_BUS_GRF_CLK_EN_SHIFT        (2U)
#define CRU_CLKGATE_CON17_PCLK_BUS_GRF_CLK_EN_MASK         (0x1U << CRU_CLKGATE_CON17_PCLK_BUS_GRF_CLK_EN_SHIFT)        /* 0x00000004 */
#define CRU_CLKGATE_CON17_PCLK_BUS_SGRF_CLK_EN_SHIFT       (3U)
#define CRU_CLKGATE_CON17_PCLK_BUS_SGRF_CLK_EN_MASK        (0x1U << CRU_CLKGATE_CON17_PCLK_BUS_SGRF_CLK_EN_SHIFT)       /* 0x00000008 */
#define CRU_CLKGATE_CON17_PCLK_I2C4_CLK_EN_SHIFT           (4U)
#define CRU_CLKGATE_CON17_PCLK_I2C4_CLK_EN_MASK            (0x1U << CRU_CLKGATE_CON17_PCLK_I2C4_CLK_EN_SHIFT)           /* 0x00000010 */
#define CRU_CLKGATE_CON17_PCLK_I2C5_CLK_EN_SHIFT           (5U)
#define CRU_CLKGATE_CON17_PCLK_I2C5_CLK_EN_MASK            (0x1U << CRU_CLKGATE_CON17_PCLK_I2C5_CLK_EN_SHIFT)           /* 0x00000020 */
#define CRU_CLKGATE_CON17_HCLK_PD_AUDIO_CLK_EN_SHIFT       (8U)
#define CRU_CLKGATE_CON17_HCLK_PD_AUDIO_CLK_EN_MASK        (0x1U << CRU_CLKGATE_CON17_HCLK_PD_AUDIO_CLK_EN_SHIFT)       /* 0x00000100 */
#define CRU_CLKGATE_CON17_CLK_PDM_PLL_CLK_EN_SHIFT         (9U)
#define CRU_CLKGATE_CON17_CLK_PDM_PLL_CLK_EN_MASK          (0x1U << CRU_CLKGATE_CON17_CLK_PDM_PLL_CLK_EN_SHIFT)         /* 0x00000200 */
#define CRU_CLKGATE_CON17_CLK_PDM_FRAC_SRC_CLK_EN_SHIFT    (10U)
#define CRU_CLKGATE_CON17_CLK_PDM_FRAC_SRC_CLK_EN_MASK     (0x1U << CRU_CLKGATE_CON17_CLK_PDM_FRAC_SRC_CLK_EN_SHIFT)    /* 0x00000400 */
#define CRU_CLKGATE_CON17_CLK_PDM_CLK_EN_SHIFT             (11U)
#define CRU_CLKGATE_CON17_CLK_PDM_CLK_EN_MASK              (0x1U << CRU_CLKGATE_CON17_CLK_PDM_CLK_EN_SHIFT)             /* 0x00000800 */
#define CRU_CLKGATE_CON17_CLK_I2S0_TX_PLL_CLK_EN_SHIFT     (12U)
#define CRU_CLKGATE_CON17_CLK_I2S0_TX_PLL_CLK_EN_MASK      (0x1U << CRU_CLKGATE_CON17_CLK_I2S0_TX_PLL_CLK_EN_SHIFT)     /* 0x00001000 */
#define CRU_CLKGATE_CON17_CLK_I2S0_TX_FRAC_SRC_CLK_EN_SHIFT (13U)
#define CRU_CLKGATE_CON17_CLK_I2S0_TX_FRAC_SRC_CLK_EN_MASK (0x1U << CRU_CLKGATE_CON17_CLK_I2S0_TX_FRAC_SRC_CLK_EN_SHIFT) /* 0x00002000 */
#define CRU_CLKGATE_CON17_CLK_I2S0_TX_CLK_EN_SHIFT         (14U)
#define CRU_CLKGATE_CON17_CLK_I2S0_TX_CLK_EN_MASK          (0x1U << CRU_CLKGATE_CON17_CLK_I2S0_TX_CLK_EN_SHIFT)         /* 0x00004000 */
#define CRU_CLKGATE_CON17_CLK_I2S0_TX_OUT_MCLK_EN_SHIFT    (15U)
#define CRU_CLKGATE_CON17_CLK_I2S0_TX_OUT_MCLK_EN_MASK     (0x1U << CRU_CLKGATE_CON17_CLK_I2S0_TX_OUT_MCLK_EN_SHIFT)    /* 0x00008000 */
/* CLKGATE_CON18 */
#define CRU_CLKGATE_CON18_CLK_I2S0_RX_PLL_CLK_EN_SHIFT     (0U)
#define CRU_CLKGATE_CON18_CLK_I2S0_RX_PLL_CLK_EN_MASK      (0x1U << CRU_CLKGATE_CON18_CLK_I2S0_RX_PLL_CLK_EN_SHIFT)     /* 0x00000001 */
#define CRU_CLKGATE_CON18_CLK_I2S0_RX_FRAC_SRC_CLK_EN_SHIFT (1U)
#define CRU_CLKGATE_CON18_CLK_I2S0_RX_FRAC_SRC_CLK_EN_MASK (0x1U << CRU_CLKGATE_CON18_CLK_I2S0_RX_FRAC_SRC_CLK_EN_SHIFT) /* 0x00000002 */
#define CRU_CLKGATE_CON18_CLK_I2S0_RX_CLK_EN_SHIFT         (2U)
#define CRU_CLKGATE_CON18_CLK_I2S0_RX_CLK_EN_MASK          (0x1U << CRU_CLKGATE_CON18_CLK_I2S0_RX_CLK_EN_SHIFT)         /* 0x00000004 */
#define CRU_CLKGATE_CON18_CLK_I2S0_RX_OUT_MCLK_EN_SHIFT    (3U)
#define CRU_CLKGATE_CON18_CLK_I2S0_RX_OUT_MCLK_EN_MASK     (0x1U << CRU_CLKGATE_CON18_CLK_I2S0_RX_OUT_MCLK_EN_SHIFT)    /* 0x00000008 */
#define CRU_CLKGATE_CON18_CLK_I2S1_PLL_CLK_EN_SHIFT        (4U)
#define CRU_CLKGATE_CON18_CLK_I2S1_PLL_CLK_EN_MASK         (0x1U << CRU_CLKGATE_CON18_CLK_I2S1_PLL_CLK_EN_SHIFT)        /* 0x00000010 */
#define CRU_CLKGATE_CON18_CLK_I2S1_FRAC_SRC_CLK_EN_SHIFT   (5U)
#define CRU_CLKGATE_CON18_CLK_I2S1_FRAC_SRC_CLK_EN_MASK    (0x1U << CRU_CLKGATE_CON18_CLK_I2S1_FRAC_SRC_CLK_EN_SHIFT)   /* 0x00000020 */
#define CRU_CLKGATE_CON18_CLK_I2S1_CLK_EN_SHIFT            (6U)
#define CRU_CLKGATE_CON18_CLK_I2S1_CLK_EN_MASK             (0x1U << CRU_CLKGATE_CON18_CLK_I2S1_CLK_EN_SHIFT)            /* 0x00000040 */
#define CRU_CLKGATE_CON18_CLK_I2S1_OUT_MCLK_EN_SHIFT       (7U)
#define CRU_CLKGATE_CON18_CLK_I2S1_OUT_MCLK_EN_MASK        (0x1U << CRU_CLKGATE_CON18_CLK_I2S1_OUT_MCLK_EN_SHIFT)       /* 0x00000080 */
#define CRU_CLKGATE_CON18_HCLK_AUDIO_NIU_EN_SHIFT          (11U)
#define CRU_CLKGATE_CON18_HCLK_AUDIO_NIU_EN_MASK           (0x1U << CRU_CLKGATE_CON18_HCLK_AUDIO_NIU_EN_SHIFT)          /* 0x00000800 */
#define CRU_CLKGATE_CON18_HCLK_VAD_EN_SHIFT                (12U)
#define CRU_CLKGATE_CON18_HCLK_VAD_EN_MASK                 (0x1U << CRU_CLKGATE_CON18_HCLK_VAD_EN_SHIFT)                /* 0x00001000 */
#define CRU_CLKGATE_CON18_HCLK_PDM_EN_SHIFT                (13U)
#define CRU_CLKGATE_CON18_HCLK_PDM_EN_MASK                 (0x1U << CRU_CLKGATE_CON18_HCLK_PDM_EN_SHIFT)                /* 0x00002000 */
#define CRU_CLKGATE_CON18_HCLK_I2S0_EN_SHIFT               (14U)
#define CRU_CLKGATE_CON18_HCLK_I2S0_EN_MASK                (0x1U << CRU_CLKGATE_CON18_HCLK_I2S0_EN_SHIFT)               /* 0x00004000 */
#define CRU_CLKGATE_CON18_HCLK_I2S1_EN_SHIFT               (15U)
#define CRU_CLKGATE_CON18_HCLK_I2S1_EN_MASK                (0x1U << CRU_CLKGATE_CON18_HCLK_I2S1_EN_SHIFT)               /* 0x00008000 */
/* CLKGATE_CON19 */
#define CRU_CLKGATE_CON19_PCLK_TOP_NIU_CLK_EN_SHIFT        (0U)
#define CRU_CLKGATE_CON19_PCLK_TOP_NIU_CLK_EN_MASK         (0x1U << CRU_CLKGATE_CON19_PCLK_TOP_NIU_CLK_EN_SHIFT)        /* 0x00000001 */
#define CRU_CLKGATE_CON19_PCLK_TOP_CRU_CLK_EN_SHIFT        (1U)
#define CRU_CLKGATE_CON19_PCLK_TOP_CRU_CLK_EN_MASK         (0x1U << CRU_CLKGATE_CON19_PCLK_TOP_CRU_CLK_EN_SHIFT)        /* 0x00000002 */
#define CRU_CLKGATE_CON19_PCLK_DDRPHY_CLK_EN_SHIFT         (2U)
#define CRU_CLKGATE_CON19_PCLK_DDRPHY_CLK_EN_MASK          (0x1U << CRU_CLKGATE_CON19_PCLK_DDRPHY_CLK_EN_SHIFT)         /* 0x00000004 */
#define CRU_CLKGATE_CON19_PCLK_MIPIDSIPHY_CLK_EN_SHIFT     (3U)
#define CRU_CLKGATE_CON19_PCLK_MIPIDSIPHY_CLK_EN_MASK      (0x1U << CRU_CLKGATE_CON19_PCLK_MIPIDSIPHY_CLK_EN_SHIFT)     /* 0x00000008 */
#define CRU_CLKGATE_CON19_PCLK_MIPICSIPHY_CLK_EN_SHIFT     (4U)
#define CRU_CLKGATE_CON19_PCLK_MIPICSIPHY_CLK_EN_MASK      (0x1U << CRU_CLKGATE_CON19_PCLK_MIPICSIPHY_CLK_EN_SHIFT)     /* 0x00000010 */
#define CRU_CLKGATE_CON19_PCLK_USB3PHY_PIPE_EN_SHIFT       (6U)
#define CRU_CLKGATE_CON19_PCLK_USB3PHY_PIPE_EN_MASK        (0x1U << CRU_CLKGATE_CON19_PCLK_USB3PHY_PIPE_EN_SHIFT)       /* 0x00000040 */
#define CRU_CLKGATE_CON19_PCLK_USB3_GRF_EN_SHIFT           (7U)
#define CRU_CLKGATE_CON19_PCLK_USB3_GRF_EN_MASK            (0x1U << CRU_CLKGATE_CON19_PCLK_USB3_GRF_EN_SHIFT)           /* 0x00000080 */
#define CRU_CLKGATE_CON19_PCLK_USB_GRF_EN_SHIFT            (8U)
#define CRU_CLKGATE_CON19_PCLK_USB_GRF_EN_MASK             (0x1U << CRU_CLKGATE_CON19_PCLK_USB_GRF_EN_SHIFT)            /* 0x00000100 */
#define CRU_CLKGATE_CON19_TESTCLK_CLK_EN_SHIFT             (15U)
#define CRU_CLKGATE_CON19_TESTCLK_CLK_EN_MASK              (0x1U << CRU_CLKGATE_CON19_TESTCLK_CLK_EN_SHIFT)             /* 0x00008000 */
/* SSGTBL0_3 */
#define CRU_SSGTBL0_3_SSGTBL0_3_SHIFT                      (0U)
#define CRU_SSGTBL0_3_SSGTBL0_3_MASK                       (0xFFFFFFFFU << CRU_SSGTBL0_3_SSGTBL0_3_SHIFT)               /* 0xFFFFFFFF */
/* SSGTBL4_7 */
#define CRU_SSGTBL4_7_SSGTBL4_7_SHIFT                      (0U)
#define CRU_SSGTBL4_7_SSGTBL4_7_MASK                       (0xFFFFFFFFU << CRU_SSGTBL4_7_SSGTBL4_7_SHIFT)               /* 0xFFFFFFFF */
/* SSGTBL8_11 */
#define CRU_SSGTBL8_11_SSGTBL8_11_SHIFT                    (0U)
#define CRU_SSGTBL8_11_SSGTBL8_11_MASK                     (0xFFFFFFFFU << CRU_SSGTBL8_11_SSGTBL8_11_SHIFT)             /* 0xFFFFFFFF */
/* SSGTBL12_15 */
#define CRU_SSGTBL12_15_SSGTBL12_15_SHIFT                  (0U)
#define CRU_SSGTBL12_15_SSGTBL12_15_MASK                   (0xFFFFFFFFU << CRU_SSGTBL12_15_SSGTBL12_15_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL16_19 */
#define CRU_SSGTBL16_19_SSGTBL16_19_SHIFT                  (0U)
#define CRU_SSGTBL16_19_SSGTBL16_19_MASK                   (0xFFFFFFFFU << CRU_SSGTBL16_19_SSGTBL16_19_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL20_23 */
#define CRU_SSGTBL20_23_SSGTBL20_23_SHIFT                  (0U)
#define CRU_SSGTBL20_23_SSGTBL20_23_MASK                   (0xFFFFFFFFU << CRU_SSGTBL20_23_SSGTBL20_23_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL24_27 */
#define CRU_SSGTBL24_27_SSGTBL24_27_SHIFT                  (0U)
#define CRU_SSGTBL24_27_SSGTBL24_27_MASK                   (0xFFFFFFFFU << CRU_SSGTBL24_27_SSGTBL24_27_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL28_31 */
#define CRU_SSGTBL28_31_SSGTBL28_31_SHIFT                  (0U)
#define CRU_SSGTBL28_31_SSGTBL28_31_MASK                   (0xFFFFFFFFU << CRU_SSGTBL28_31_SSGTBL28_31_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL32_35 */
#define CRU_SSGTBL32_35_SSGTBL32_35_SHIFT                  (0U)
#define CRU_SSGTBL32_35_SSGTBL32_35_MASK                   (0xFFFFFFFFU << CRU_SSGTBL32_35_SSGTBL32_35_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL36_39 */
#define CRU_SSGTBL36_39_SSGTBL36_39_SHIFT                  (0U)
#define CRU_SSGTBL36_39_SSGTBL36_39_MASK                   (0xFFFFFFFFU << CRU_SSGTBL36_39_SSGTBL36_39_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL40_43 */
#define CRU_SSGTBL40_43_SSGTBL40_43_SHIFT                  (0U)
#define CRU_SSGTBL40_43_SSGTBL40_43_MASK                   (0xFFFFFFFFU << CRU_SSGTBL40_43_SSGTBL40_43_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL44_47 */
#define CRU_SSGTBL44_47_SSGTBL44_47_SHIFT                  (0U)
#define CRU_SSGTBL44_47_SSGTBL44_47_MASK                   (0xFFFFFFFFU << CRU_SSGTBL44_47_SSGTBL44_47_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL48_51 */
#define CRU_SSGTBL48_51_SSGTBL48_51_SHIFT                  (0U)
#define CRU_SSGTBL48_51_SSGTBL48_51_MASK                   (0xFFFFFFFFU << CRU_SSGTBL48_51_SSGTBL48_51_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL52_55 */
#define CRU_SSGTBL52_55_SSGTBL52_55_SHIFT                  (0U)
#define CRU_SSGTBL52_55_SSGTBL52_55_MASK                   (0xFFFFFFFFU << CRU_SSGTBL52_55_SSGTBL52_55_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL56_59 */
#define CRU_SSGTBL56_59_SSGTBL56_59_SHIFT                  (0U)
#define CRU_SSGTBL56_59_SSGTBL56_59_MASK                   (0xFFFFFFFFU << CRU_SSGTBL56_59_SSGTBL56_59_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL60_63 */
#define CRU_SSGTBL60_63_SSGTBL60_63_SHIFT                  (0U)
#define CRU_SSGTBL60_63_SSGTBL60_63_MASK                   (0xFFFFFFFFU << CRU_SSGTBL60_63_SSGTBL60_63_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL64_67 */
#define CRU_SSGTBL64_67_SSGTBL64_67_SHIFT                  (0U)
#define CRU_SSGTBL64_67_SSGTBL64_67_MASK                   (0xFFFFFFFFU << CRU_SSGTBL64_67_SSGTBL64_67_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL68_71 */
#define CRU_SSGTBL68_71_SSGTBL68_71_SHIFT                  (0U)
#define CRU_SSGTBL68_71_SSGTBL68_71_MASK                   (0xFFFFFFFFU << CRU_SSGTBL68_71_SSGTBL68_71_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL72_75 */
#define CRU_SSGTBL72_75_SSGTBL72_75_SHIFT                  (0U)
#define CRU_SSGTBL72_75_SSGTBL72_75_MASK                   (0xFFFFFFFFU << CRU_SSGTBL72_75_SSGTBL72_75_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL76_79 */
#define CRU_SSGTBL76_79_SSGTBL76_79_SHIFT                  (0U)
#define CRU_SSGTBL76_79_SSGTBL76_79_MASK                   (0xFFFFFFFFU << CRU_SSGTBL76_79_SSGTBL76_79_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL80_83 */
#define CRU_SSGTBL80_83_SSGTBL80_83_SHIFT                  (0U)
#define CRU_SSGTBL80_83_SSGTBL80_83_MASK                   (0xFFFFFFFFU << CRU_SSGTBL80_83_SSGTBL80_83_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL84_87 */
#define CRU_SSGTBL84_87_SSGTBL84_87_SHIFT                  (0U)
#define CRU_SSGTBL84_87_SSGTBL84_87_MASK                   (0xFFFFFFFFU << CRU_SSGTBL84_87_SSGTBL84_87_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL88_91 */
#define CRU_SSGTBL88_91_SSGTBL88_91_SHIFT                  (0U)
#define CRU_SSGTBL88_91_SSGTBL88_91_MASK                   (0xFFFFFFFFU << CRU_SSGTBL88_91_SSGTBL88_91_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL92_95 */
#define CRU_SSGTBL92_95_SSGTBL92_95_SHIFT                  (0U)
#define CRU_SSGTBL92_95_SSGTBL92_95_MASK                   (0xFFFFFFFFU << CRU_SSGTBL92_95_SSGTBL92_95_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL96_99 */
#define CRU_SSGTBL96_99_SSGTBL96_99_SHIFT                  (0U)
#define CRU_SSGTBL96_99_SSGTBL96_99_MASK                   (0xFFFFFFFFU << CRU_SSGTBL96_99_SSGTBL96_99_SHIFT)           /* 0xFFFFFFFF */
/* SSGTBL100_103 */
#define CRU_SSGTBL100_103_SSGTBL100_103_SHIFT              (0U)
#define CRU_SSGTBL100_103_SSGTBL100_103_MASK               (0xFFFFFFFFU << CRU_SSGTBL100_103_SSGTBL100_103_SHIFT)       /* 0xFFFFFFFF */
/* SSGTBL104_107 */
#define CRU_SSGTBL104_107_SSGTBL104_107_SHIFT              (0U)
#define CRU_SSGTBL104_107_SSGTBL104_107_MASK               (0xFFFFFFFFU << CRU_SSGTBL104_107_SSGTBL104_107_SHIFT)       /* 0xFFFFFFFF */
/* SSGTBL108_111 */
#define CRU_SSGTBL108_111_SSGTBL108_111_SHIFT              (0U)
#define CRU_SSGTBL108_111_SSGTBL108_111_MASK               (0xFFFFFFFFU << CRU_SSGTBL108_111_SSGTBL108_111_SHIFT)       /* 0xFFFFFFFF */
/* SSGTBL112_115 */
#define CRU_SSGTBL112_115_SSGTBL112_115_SHIFT              (0U)
#define CRU_SSGTBL112_115_SSGTBL112_115_MASK               (0xFFFFFFFFU << CRU_SSGTBL112_115_SSGTBL112_115_SHIFT)       /* 0xFFFFFFFF */
/* SSGTBL116_119 */
#define CRU_SSGTBL116_119_SSGTBL116_119_SHIFT              (0U)
#define CRU_SSGTBL116_119_SSGTBL116_119_MASK               (0xFFFFFFFFU << CRU_SSGTBL116_119_SSGTBL116_119_SHIFT)       /* 0xFFFFFFFF */
/* SSGTBL120_123 */
#define CRU_SSGTBL120_123_SSGTBL120_123_SHIFT              (0U)
#define CRU_SSGTBL120_123_SSGTBL120_123_MASK               (0xFFFFFFFFU << CRU_SSGTBL120_123_SSGTBL120_123_SHIFT)       /* 0xFFFFFFFF */
/* SSGTBL124_127 */
#define CRU_SSGTBL124_127_SSGTBL124_127_SHIFT              (0U)
#define CRU_SSGTBL124_127_SSGTBL124_127_MASK               (0xFFFFFFFFU << CRU_SSGTBL124_127_SSGTBL124_127_SHIFT)       /* 0xFFFFFFFF */
/* SOFTRST_CON0 */
#define CRU_SOFTRST_CON0_COREPO0_SRSTN_REQ_SHIFT           (0U)
#define CRU_SOFTRST_CON0_COREPO0_SRSTN_REQ_MASK            (0x1U << CRU_SOFTRST_CON0_COREPO0_SRSTN_REQ_SHIFT)           /* 0x00000001 */
#define CRU_SOFTRST_CON0_COREPO1_SRSTN_REQ_SHIFT           (1U)
#define CRU_SOFTRST_CON0_COREPO1_SRSTN_REQ_MASK            (0x1U << CRU_SOFTRST_CON0_COREPO1_SRSTN_REQ_SHIFT)           /* 0x00000002 */
#define CRU_SOFTRST_CON0_CORE0_SRSTN_REQ_SHIFT             (2U)
#define CRU_SOFTRST_CON0_CORE0_SRSTN_REQ_MASK              (0x1U << CRU_SOFTRST_CON0_CORE0_SRSTN_REQ_SHIFT)             /* 0x00000004 */
#define CRU_SOFTRST_CON0_CORE1_SRSTN_REQ_SHIFT             (3U)
#define CRU_SOFTRST_CON0_CORE1_SRSTN_REQ_MASK              (0x1U << CRU_SOFTRST_CON0_CORE1_SRSTN_REQ_SHIFT)             /* 0x00000008 */
#define CRU_SOFTRST_CON0_CORE0_DBG_SRSTN_REQ_SHIFT         (4U)
#define CRU_SOFTRST_CON0_CORE0_DBG_SRSTN_REQ_MASK          (0x1U << CRU_SOFTRST_CON0_CORE0_DBG_SRSTN_REQ_SHIFT)         /* 0x00000010 */
#define CRU_SOFTRST_CON0_CORE1_DBG_SRSTN_REQ_SHIFT         (5U)
#define CRU_SOFTRST_CON0_CORE1_DBG_SRSTN_REQ_MASK          (0x1U << CRU_SOFTRST_CON0_CORE1_DBG_SRSTN_REQ_SHIFT)         /* 0x00000020 */
#define CRU_SOFTRST_CON0_TOPDBG_SRSTN_REQ_SHIFT            (6U)
#define CRU_SOFTRST_CON0_TOPDBG_SRSTN_REQ_MASK             (0x1U << CRU_SOFTRST_CON0_TOPDBG_SRSTN_REQ_SHIFT)            /* 0x00000040 */
#define CRU_SOFTRST_CON0_CORE_NOC_SRSTN_REQ_SHIFT          (7U)
#define CRU_SOFTRST_CON0_CORE_NOC_SRSTN_REQ_MASK           (0x1U << CRU_SOFTRST_CON0_CORE_NOC_SRSTN_REQ_SHIFT)          /* 0x00000080 */
#define CRU_SOFTRST_CON0_STRC_SYS_ASRSTN_REQ_SHIFT         (8U)
#define CRU_SOFTRST_CON0_STRC_SYS_ASRSTN_REQ_MASK          (0x1U << CRU_SOFTRST_CON0_STRC_SYS_ASRSTN_REQ_SHIFT)         /* 0x00000100 */
#define CRU_SOFTRST_CON0_L2_SRSTN_REQ_SHIFT                (9U)
#define CRU_SOFTRST_CON0_L2_SRSTN_REQ_MASK                 (0x1U << CRU_SOFTRST_CON0_L2_SRSTN_REQ_SHIFT)                /* 0x00000200 */
#define CRU_SOFTRST_CON0_DAP_SRSTN_REQ_SHIFT               (10U)
#define CRU_SOFTRST_CON0_DAP_SRSTN_REQ_MASK                (0x1U << CRU_SOFTRST_CON0_DAP_SRSTN_REQ_SHIFT)               /* 0x00000400 */
#define CRU_SOFTRST_CON0_CORE_MSNIU_SRSTN_REQ_SHIFT        (11U)
#define CRU_SOFTRST_CON0_CORE_MSNIU_SRSTN_REQ_MASK         (0x1U << CRU_SOFTRST_CON0_CORE_MSNIU_SRSTN_REQ_SHIFT)        /* 0x00000800 */
#define CRU_SOFTRST_CON0_PDCORE_ADB400_GIC2CORE_ASRSTN_REQ_SHIFT (12U)
#define CRU_SOFTRST_CON0_PDCORE_ADB400_GIC2CORE_ASRSTN_REQ_MASK (0x1U << CRU_SOFTRST_CON0_PDCORE_ADB400_GIC2CORE_ASRSTN_REQ_SHIFT) /* 0x00001000 */
#define CRU_SOFTRST_CON0_PDCORE_ADB400_CORE2GIC_ASRSTN_REQ_SHIFT (13U)
#define CRU_SOFTRST_CON0_PDCORE_ADB400_CORE2GIC_ASRSTN_REQ_MASK (0x1U << CRU_SOFTRST_CON0_PDCORE_ADB400_CORE2GIC_ASRSTN_REQ_SHIFT) /* 0x00002000 */
#define CRU_SOFTRST_CON0_CORE_PRF_ASRSTN_REQ_SHIFT         (14U)
#define CRU_SOFTRST_CON0_CORE_PRF_ASRSTN_REQ_MASK          (0x1U << CRU_SOFTRST_CON0_CORE_PRF_ASRSTN_REQ_SHIFT)         /* 0x00004000 */
#define CRU_SOFTRST_CON0_CORE_GRF_PSRSTN_REQ_SHIFT         (15U)
#define CRU_SOFTRST_CON0_CORE_GRF_PSRSTN_REQ_MASK          (0x1U << CRU_SOFTRST_CON0_CORE_GRF_PSRSTN_REQ_SHIFT)         /* 0x00008000 */
/* SOFTRST_CON1 */
#define CRU_SOFTRST_CON1_DDRPHY_SRSTN_REQ_SHIFT            (0U)
#define CRU_SOFTRST_CON1_DDRPHY_SRSTN_REQ_MASK             (0x1U << CRU_SOFTRST_CON1_DDRPHY_SRSTN_REQ_SHIFT)            /* 0x00000001 */
#define CRU_SOFTRST_CON1_DDRPHY_PSRSTN_REQ_SHIFT           (2U)
#define CRU_SOFTRST_CON1_DDRPHY_PSRSTN_REQ_MASK            (0x1U << CRU_SOFTRST_CON1_DDRPHY_PSRSTN_REQ_SHIFT)           /* 0x00000004 */
#define CRU_SOFTRST_CON1_UPCTL2_SRSTN_REQ_SHIFT            (4U)
#define CRU_SOFTRST_CON1_UPCTL2_SRSTN_REQ_MASK             (0x1U << CRU_SOFTRST_CON1_UPCTL2_SRSTN_REQ_SHIFT)            /* 0x00000010 */
#define CRU_SOFTRST_CON1_UPCTL2_ASRSTN_REQ_SHIFT           (5U)
#define CRU_SOFTRST_CON1_UPCTL2_ASRSTN_REQ_MASK            (0x1U << CRU_SOFTRST_CON1_UPCTL2_ASRSTN_REQ_SHIFT)           /* 0x00000020 */
#define CRU_SOFTRST_CON1_UPCTL2_PRSTN_REQ_SHIFT            (6U)
#define CRU_SOFTRST_CON1_UPCTL2_PRSTN_REQ_MASK             (0x1U << CRU_SOFTRST_CON1_UPCTL2_PRSTN_REQ_SHIFT)            /* 0x00000040 */
#define CRU_SOFTRST_CON1_MSCH_SRSTN_REQ_SHIFT              (7U)
#define CRU_SOFTRST_CON1_MSCH_SRSTN_REQ_MASK               (0x1U << CRU_SOFTRST_CON1_MSCH_SRSTN_REQ_SHIFT)              /* 0x00000080 */
#define CRU_SOFTRST_CON1_MSCH_PSRSTN_REQ_SHIFT             (8U)
#define CRU_SOFTRST_CON1_MSCH_PSRSTN_REQ_MASK              (0x1U << CRU_SOFTRST_CON1_MSCH_PSRSTN_REQ_SHIFT)             /* 0x00000100 */
#define CRU_SOFTRST_CON1_DDRMON_PSRSTN_REQ_SHIFT           (9U)
#define CRU_SOFTRST_CON1_DDRMON_PSRSTN_REQ_MASK            (0x1U << CRU_SOFTRST_CON1_DDRMON_PSRSTN_REQ_SHIFT)           /* 0x00000200 */
#define CRU_SOFTRST_CON1_DDRSTDBY_PSRSTN_REQ_SHIFT         (10U)
#define CRU_SOFTRST_CON1_DDRSTDBY_PSRSTN_REQ_MASK          (0x1U << CRU_SOFTRST_CON1_DDRSTDBY_PSRSTN_REQ_SHIFT)         /* 0x00000400 */
#define CRU_SOFTRST_CON1_DDRSTDBY_SRSTN_REQ_SHIFT          (11U)
#define CRU_SOFTRST_CON1_DDRSTDBY_SRSTN_REQ_MASK           (0x1U << CRU_SOFTRST_CON1_DDRSTDBY_SRSTN_REQ_SHIFT)          /* 0x00000800 */
#define CRU_SOFTRST_CON1_DDRGRF_PSRSTN_REQ_SHIFT           (12U)
#define CRU_SOFTRST_CON1_DDRGRF_PSRSTN_REQ_MASK            (0x1U << CRU_SOFTRST_CON1_DDRGRF_PSRSTN_REQ_SHIFT)           /* 0x00001000 */
#define CRU_SOFTRST_CON1_AXI_SPLIT_ASRSTN_REQ_SHIFT        (13U)
#define CRU_SOFTRST_CON1_AXI_SPLIT_ASRSTN_REQ_MASK         (0x1U << CRU_SOFTRST_CON1_AXI_SPLIT_ASRSTN_REQ_SHIFT)        /* 0x00002000 */
#define CRU_SOFTRST_CON1_DDRDFI_CTL_SRSTN_REQ_SHIFT        (14U)
#define CRU_SOFTRST_CON1_DDRDFI_CTL_SRSTN_REQ_MASK         (0x1U << CRU_SOFTRST_CON1_DDRDFI_CTL_SRSTN_REQ_SHIFT)        /* 0x00004000 */
#define CRU_SOFTRST_CON1_DDRDFI_CTL_PSRSTN_REQ_SHIFT       (15U)
#define CRU_SOFTRST_CON1_DDRDFI_CTL_PSRSTN_REQ_MASK        (0x1U << CRU_SOFTRST_CON1_DDRDFI_CTL_PSRSTN_REQ_SHIFT)       /* 0x00008000 */
/* SOFTRST_CON2 */
#define CRU_SOFTRST_CON2_GIC500_NIU_ASRSTN_REQ_SHIFT       (0U)
#define CRU_SOFTRST_CON2_GIC500_NIU_ASRSTN_REQ_MASK        (0x1U << CRU_SOFTRST_CON2_GIC500_NIU_ASRSTN_REQ_SHIFT)       /* 0x00000001 */
#define CRU_SOFTRST_CON2_GIC500_ASRSTN_REQ_SHIFT           (1U)
#define CRU_SOFTRST_CON2_GIC500_ASRSTN_REQ_MASK            (0x1U << CRU_SOFTRST_CON2_GIC500_ASRSTN_REQ_SHIFT)           /* 0x00000002 */
#define CRU_SOFTRST_CON2_PDGIC_ADB400_CORE2GIC_ASRSTN_REQ_SHIFT (2U)
#define CRU_SOFTRST_CON2_PDGIC_ADB400_CORE2GIC_ASRSTN_REQ_MASK (0x1U << CRU_SOFTRST_CON2_PDGIC_ADB400_CORE2GIC_ASRSTN_REQ_SHIFT) /* 0x00000004 */
#define CRU_SOFTRST_CON2_PDGIC_ADB400_GIC2CORE_ASRSTN_REQ_SHIFT (3U)
#define CRU_SOFTRST_CON2_PDGIC_ADB400_GIC2CORE_ASRSTN_REQ_MASK (0x1U << CRU_SOFTRST_CON2_PDGIC_ADB400_GIC2CORE_ASRSTN_REQ_SHIFT) /* 0x00000008 */
#define CRU_SOFTRST_CON2_NPU_CORE_SRSTN_REQ_SHIFT          (4U)
#define CRU_SOFTRST_CON2_NPU_CORE_SRSTN_REQ_MASK           (0x1U << CRU_SOFTRST_CON2_NPU_CORE_SRSTN_REQ_SHIFT)          /* 0x00000010 */
#define CRU_SOFTRST_CON2_NPU_ASRSTN_REQ_SHIFT              (5U)
#define CRU_SOFTRST_CON2_NPU_ASRSTN_REQ_MASK               (0x1U << CRU_SOFTRST_CON2_NPU_ASRSTN_REQ_SHIFT)              /* 0x00000020 */
#define CRU_SOFTRST_CON2_NPU_HSRSTN_REQ_SHIFT              (6U)
#define CRU_SOFTRST_CON2_NPU_HSRSTN_REQ_MASK               (0x1U << CRU_SOFTRST_CON2_NPU_HSRSTN_REQ_SHIFT)              /* 0x00000040 */
#define CRU_SOFTRST_CON2_NPU_NIU_ASRSTN_REQ_SHIFT          (7U)
#define CRU_SOFTRST_CON2_NPU_NIU_ASRSTN_REQ_MASK           (0x1U << CRU_SOFTRST_CON2_NPU_NIU_ASRSTN_REQ_SHIFT)          /* 0x00000080 */
#define CRU_SOFTRST_CON2_NPU_NIU_HSRSTN_REQ_SHIFT          (8U)
#define CRU_SOFTRST_CON2_NPU_NIU_HSRSTN_REQ_MASK           (0x1U << CRU_SOFTRST_CON2_NPU_NIU_HSRSTN_REQ_SHIFT)          /* 0x00000100 */
#define CRU_SOFTRST_CON2_NPU2MEM_ASRSTN_REQ_SHIFT          (9U)
#define CRU_SOFTRST_CON2_NPU2MEM_ASRSTN_REQ_MASK           (0x1U << CRU_SOFTRST_CON2_NPU2MEM_ASRSTN_REQ_SHIFT)          /* 0x00000200 */
#define CRU_SOFTRST_CON2_NPU_PVTM_SRSTN_REQ_SHIFT          (10U)
#define CRU_SOFTRST_CON2_NPU_PVTM_SRSTN_REQ_MASK           (0x1U << CRU_SOFTRST_CON2_NPU_PVTM_SRSTN_REQ_SHIFT)          /* 0x00000400 */
#define CRU_SOFTRST_CON2_CORE_PVTM_SRSTN_REQ_SHIFT         (11U)
#define CRU_SOFTRST_CON2_CORE_PVTM_SRSTN_REQ_MASK          (0x1U << CRU_SOFTRST_CON2_CORE_PVTM_SRSTN_REQ_SHIFT)         /* 0x00000800 */
#define CRU_SOFTRST_CON2_PDGIC_SPINLOCK_ASRSTN_REQ_SHIFT   (15U)
#define CRU_SOFTRST_CON2_PDGIC_SPINLOCK_ASRSTN_REQ_MASK    (0x1U << CRU_SOFTRST_CON2_PDGIC_SPINLOCK_ASRSTN_REQ_SHIFT)   /* 0x00008000 */
/* SOFTRST_CON3 */
#define CRU_SOFTRST_CON3_PCIE_NIU_HSSRSTN_REQ_SHIFT        (0U)
#define CRU_SOFTRST_CON3_PCIE_NIU_HSSRSTN_REQ_MASK         (0x1U << CRU_SOFTRST_CON3_PCIE_NIU_HSSRSTN_REQ_SHIFT)        /* 0x00000001 */
#define CRU_SOFTRST_CON3_PCIE_NIU_LSSRSTN_REQ_SHIFT        (1U)
#define CRU_SOFTRST_CON3_PCIE_NIU_LSSRSTN_REQ_MASK         (0x1U << CRU_SOFTRST_CON3_PCIE_NIU_LSSRSTN_REQ_SHIFT)        /* 0x00000002 */
#define CRU_SOFTRST_CON3_PCIEGRF_PSRSTN_REQ_SHIFT          (2U)
#define CRU_SOFTRST_CON3_PCIEGRF_PSRSTN_REQ_MASK           (0x1U << CRU_SOFTRST_CON3_PCIEGRF_PSRSTN_REQ_SHIFT)          /* 0x00000004 */
#define CRU_SOFTRST_CON3_PCIECTL_PSRSTN_REQ_SHIFT          (3U)
#define CRU_SOFTRST_CON3_PCIECTL_PSRSTN_REQ_MASK           (0x1U << CRU_SOFTRST_CON3_PCIECTL_PSRSTN_REQ_SHIFT)          /* 0x00000008 */
#define CRU_SOFTRST_CON3_PCIECTL_POWERUP_SRSTN_REQ_SHIFT   (4U)
#define CRU_SOFTRST_CON3_PCIECTL_POWERUP_SRSTN_REQ_MASK    (0x1U << CRU_SOFTRST_CON3_PCIECTL_POWERUP_SRSTN_REQ_SHIFT)   /* 0x00000010 */
#define CRU_SOFTRST_CON3_PCIECTL_MST_ASRSTN_REQ_SHIFT      (5U)
#define CRU_SOFTRST_CON3_PCIECTL_MST_ASRSTN_REQ_MASK       (0x1U << CRU_SOFTRST_CON3_PCIECTL_MST_ASRSTN_REQ_SHIFT)      /* 0x00000020 */
#define CRU_SOFTRST_CON3_PCIECTL_SLV_ASRSTN_REQ_SHIFT      (6U)
#define CRU_SOFTRST_CON3_PCIECTL_SLV_ASRSTN_REQ_MASK       (0x1U << CRU_SOFTRST_CON3_PCIECTL_SLV_ASRSTN_REQ_SHIFT)      /* 0x00000040 */
#define CRU_SOFTRST_CON3_PCIECTL_DBI_ASRSTN_REQ_SHIFT      (7U)
#define CRU_SOFTRST_CON3_PCIECTL_DBI_ASRSTN_REQ_MASK       (0x1U << CRU_SOFTRST_CON3_PCIECTL_DBI_ASRSTN_REQ_SHIFT)      /* 0x00000080 */
#define CRU_SOFTRST_CON3_PCIECTL_BUTTON_SRSTN_REQ_SHIFT    (8U)
#define CRU_SOFTRST_CON3_PCIECTL_BUTTON_SRSTN_REQ_MASK     (0x1U << CRU_SOFTRST_CON3_PCIECTL_BUTTON_SRSTN_REQ_SHIFT)    /* 0x00000100 */
#define CRU_SOFTRST_CON3_PCIECTL_PE_SRSTN_REQ_SHIFT        (9U)
#define CRU_SOFTRST_CON3_PCIECTL_PE_SRSTN_REQ_MASK         (0x1U << CRU_SOFTRST_CON3_PCIECTL_PE_SRSTN_REQ_SHIFT)        /* 0x00000200 */
#define CRU_SOFTRST_CON3_PCIECTL_CORE_SRSTN_REQ_SHIFT      (10U)
#define CRU_SOFTRST_CON3_PCIECTL_CORE_SRSTN_REQ_MASK       (0x1U << CRU_SOFTRST_CON3_PCIECTL_CORE_SRSTN_REQ_SHIFT)      /* 0x00000400 */
#define CRU_SOFTRST_CON3_PCIECTL_NSTICKY_SRSTN_REQ_SHIFT   (11U)
#define CRU_SOFTRST_CON3_PCIECTL_NSTICKY_SRSTN_REQ_MASK    (0x1U << CRU_SOFTRST_CON3_PCIECTL_NSTICKY_SRSTN_REQ_SHIFT)   /* 0x00000800 */
#define CRU_SOFTRST_CON3_PCIECTL_STICKY_SRSTN_REQ_SHIFT    (12U)
#define CRU_SOFTRST_CON3_PCIECTL_STICKY_SRSTN_REQ_MASK     (0x1U << CRU_SOFTRST_CON3_PCIECTL_STICKY_SRSTN_REQ_SHIFT)    /* 0x00001000 */
#define CRU_SOFTRST_CON3_PCIECTL_PWR_SRSTN_REQ_SHIFT       (13U)
#define CRU_SOFTRST_CON3_PCIECTL_PWR_SRSTN_REQ_MASK        (0x1U << CRU_SOFTRST_CON3_PCIECTL_PWR_SRSTN_REQ_SHIFT)       /* 0x00002000 */
#define CRU_SOFTRST_CON3_PCIE_NIU_ASRSTN_REQ_SHIFT         (14U)
#define CRU_SOFTRST_CON3_PCIE_NIU_ASRSTN_REQ_MASK          (0x1U << CRU_SOFTRST_CON3_PCIE_NIU_ASRSTN_REQ_SHIFT)         /* 0x00004000 */
#define CRU_SOFTRST_CON3_PCIE_NIU_PSRSTN_REQ_SHIFT         (15U)
#define CRU_SOFTRST_CON3_PCIE_NIU_PSRSTN_REQ_MASK          (0x1U << CRU_SOFTRST_CON3_PCIE_NIU_PSRSTN_REQ_SHIFT)         /* 0x00008000 */
/* SOFTRST_CON4 */
#define CRU_SOFTRST_CON4_PCIEPHY_POR_SRSTN_REQ_SHIFT       (0U)
#define CRU_SOFTRST_CON4_PCIEPHY_POR_SRSTN_REQ_MASK        (0x1U << CRU_SOFTRST_CON4_PCIEPHY_POR_SRSTN_REQ_SHIFT)       /* 0x00000001 */
#define CRU_SOFTRST_CON4_PCIEPHY_PSRSTN_REQ_SHIFT          (1U)
#define CRU_SOFTRST_CON4_PCIEPHY_PSRSTN_REQ_MASK           (0x1U << CRU_SOFTRST_CON4_PCIEPHY_PSRSTN_REQ_SHIFT)          /* 0x00000002 */
#define CRU_SOFTRST_CON4_PCIEPHY_PIPE_SRSTN_REQ_SHIFT      (2U)
#define CRU_SOFTRST_CON4_PCIEPHY_PIPE_SRSTN_REQ_MASK       (0x1U << CRU_SOFTRST_CON4_PCIEPHY_PIPE_SRSTN_REQ_SHIFT)      /* 0x00000004 */
#define CRU_SOFTRST_CON4_USBPHY_POR_SRSTN_REQ_SHIFT        (3U)
#define CRU_SOFTRST_CON4_USBPHY_POR_SRSTN_REQ_MASK         (0x1U << CRU_SOFTRST_CON4_USBPHY_POR_SRSTN_REQ_SHIFT)        /* 0x00000008 */
#define CRU_SOFTRST_CON4_USBPHY_OTG_PORT_SRSTN_REQ_SHIFT   (4U)
#define CRU_SOFTRST_CON4_USBPHY_OTG_PORT_SRSTN_REQ_MASK    (0x1U << CRU_SOFTRST_CON4_USBPHY_OTG_PORT_SRSTN_REQ_SHIFT)   /* 0x00000010 */
#define CRU_SOFTRST_CON4_USBPHY_HOST_PORT_SRSTN_REQ_SHIFT  (5U)
#define CRU_SOFTRST_CON4_USBPHY_HOST_PORT_SRSTN_REQ_MASK   (0x1U << CRU_SOFTRST_CON4_USBPHY_HOST_PORT_SRSTN_REQ_SHIFT)  /* 0x00000020 */
#define CRU_SOFTRST_CON4_USB3PHY_GRF_PSRSTN_REQ_SHIFT      (6U)
#define CRU_SOFTRST_CON4_USB3PHY_GRF_PSRSTN_REQ_MASK       (0x1U << CRU_SOFTRST_CON4_USB3PHY_GRF_PSRSTN_REQ_SHIFT)      /* 0x00000040 */
#define CRU_SOFTRST_CON4_USB2PHY_GRF_PSRSTN_REQ_SHIFT      (7U)
#define CRU_SOFTRST_CON4_USB2PHY_GRF_PSRSTN_REQ_MASK       (0x1U << CRU_SOFTRST_CON4_USB2PHY_GRF_PSRSTN_REQ_SHIFT)      /* 0x00000080 */
#define CRU_SOFTRST_CON4_USB3_OTG_ASRSTN_REQ_SHIFT         (8U)
#define CRU_SOFTRST_CON4_USB3_OTG_ASRSTN_REQ_MASK          (0x1U << CRU_SOFTRST_CON4_USB3_OTG_ASRSTN_REQ_SHIFT)         /* 0x00000100 */
#define CRU_SOFTRST_CON4_USB2HOST_HSRSTN_REQ_SHIFT         (9U)
#define CRU_SOFTRST_CON4_USB2HOST_HSRSTN_REQ_MASK          (0x1U << CRU_SOFTRST_CON4_USB2HOST_HSRSTN_REQ_SHIFT)         /* 0x00000200 */
#define CRU_SOFTRST_CON4_USB2HOST_ARB_HSRSTN_REQ_SHIFT     (10U)
#define CRU_SOFTRST_CON4_USB2HOST_ARB_HSRSTN_REQ_MASK      (0x1U << CRU_SOFTRST_CON4_USB2HOST_ARB_HSRSTN_REQ_SHIFT)     /* 0x00000400 */
#define CRU_SOFTRST_CON4_USB2HOST_UTMI_SRSTN_REQ_SHIFT     (11U)
#define CRU_SOFTRST_CON4_USB2HOST_UTMI_SRSTN_REQ_MASK      (0x1U << CRU_SOFTRST_CON4_USB2HOST_UTMI_SRSTN_REQ_SHIFT)     /* 0x00000800 */
/* SOFTRST_CON5 */
#define CRU_SOFTRST_CON5_IMEM0_ASRSTN_REQ_SHIFT            (0U)
#define CRU_SOFTRST_CON5_IMEM0_ASRSTN_REQ_MASK             (0x1U << CRU_SOFTRST_CON5_IMEM0_ASRSTN_REQ_SHIFT)            /* 0x00000001 */
#define CRU_SOFTRST_CON5_IMEM1_ASRSTN_REQ_SHIFT            (1U)
#define CRU_SOFTRST_CON5_IMEM1_ASRSTN_REQ_MASK             (0x1U << CRU_SOFTRST_CON5_IMEM1_ASRSTN_REQ_SHIFT)            /* 0x00000002 */
#define CRU_SOFTRST_CON5_IMEM2_ASRSTN_REQ_SHIFT            (2U)
#define CRU_SOFTRST_CON5_IMEM2_ASRSTN_REQ_MASK             (0x1U << CRU_SOFTRST_CON5_IMEM2_ASRSTN_REQ_SHIFT)            /* 0x00000004 */
#define CRU_SOFTRST_CON5_IMEM3_ASRSTN_REQ_SHIFT            (3U)
#define CRU_SOFTRST_CON5_IMEM3_ASRSTN_REQ_MASK             (0x1U << CRU_SOFTRST_CON5_IMEM3_ASRSTN_REQ_SHIFT)            /* 0x00000008 */
#define CRU_SOFTRST_CON5_IMEM0_NIU_ASRSTN_REQ_SHIFT        (4U)
#define CRU_SOFTRST_CON5_IMEM0_NIU_ASRSTN_REQ_MASK         (0x1U << CRU_SOFTRST_CON5_IMEM0_NIU_ASRSTN_REQ_SHIFT)        /* 0x00000010 */
#define CRU_SOFTRST_CON5_IMEM1_NIU_ASRSTN_REQ_SHIFT        (5U)
#define CRU_SOFTRST_CON5_IMEM1_NIU_ASRSTN_REQ_MASK         (0x1U << CRU_SOFTRST_CON5_IMEM1_NIU_ASRSTN_REQ_SHIFT)        /* 0x00000020 */
#define CRU_SOFTRST_CON5_IMEM2_NIU_ASRSTN_REQ_SHIFT        (6U)
#define CRU_SOFTRST_CON5_IMEM2_NIU_ASRSTN_REQ_MASK         (0x1U << CRU_SOFTRST_CON5_IMEM2_NIU_ASRSTN_REQ_SHIFT)        /* 0x00000040 */
#define CRU_SOFTRST_CON5_IMEM3_NIU_ASRSTN_REQ_SHIFT        (7U)
#define CRU_SOFTRST_CON5_IMEM3_NIU_ASRSTN_REQ_MASK         (0x1U << CRU_SOFTRST_CON5_IMEM3_NIU_ASRSTN_REQ_SHIFT)        /* 0x00000080 */
#define CRU_SOFTRST_CON5_IMEM_NIU_HSSRSTN_REQ_SHIFT        (8U)
#define CRU_SOFTRST_CON5_IMEM_NIU_HSSRSTN_REQ_MASK         (0x1U << CRU_SOFTRST_CON5_IMEM_NIU_HSSRSTN_REQ_SHIFT)        /* 0x00000100 */
#define CRU_SOFTRST_CON5_VPU_NIU_ASRSTN_REQ_SHIFT          (12U)
#define CRU_SOFTRST_CON5_VPU_NIU_ASRSTN_REQ_MASK           (0x1U << CRU_SOFTRST_CON5_VPU_NIU_ASRSTN_REQ_SHIFT)          /* 0x00001000 */
#define CRU_SOFTRST_CON5_VPU_NIU_HSRSTN_REQ_SHIFT          (13U)
#define CRU_SOFTRST_CON5_VPU_NIU_HSRSTN_REQ_MASK           (0x1U << CRU_SOFTRST_CON5_VPU_NIU_HSRSTN_REQ_SHIFT)          /* 0x00002000 */
#define CRU_SOFTRST_CON5_VPU_ASRSTN_REQ_SHIFT              (14U)
#define CRU_SOFTRST_CON5_VPU_ASRSTN_REQ_MASK               (0x1U << CRU_SOFTRST_CON5_VPU_ASRSTN_REQ_SHIFT)              /* 0x00004000 */
#define CRU_SOFTRST_CON5_VPU_HSRSTN_REQ_SHIFT              (15U)
#define CRU_SOFTRST_CON5_VPU_HSRSTN_REQ_MASK               (0x1U << CRU_SOFTRST_CON5_VPU_HSRSTN_REQ_SHIFT)              /* 0x00008000 */
/* SOFTRST_CON6 */
#define CRU_SOFTRST_CON6_VIO_NIU_HSSRSTN_REQ_SHIFT         (0U)
#define CRU_SOFTRST_CON6_VIO_NIU_HSSRSTN_REQ_MASK          (0x1U << CRU_SOFTRST_CON6_VIO_NIU_HSSRSTN_REQ_SHIFT)         /* 0x00000001 */
#define CRU_SOFTRST_CON6_VIO_NIU_LSSRSTN_REQ_SHIFT         (1U)
#define CRU_SOFTRST_CON6_VIO_NIU_LSSRSTN_REQ_MASK          (0x1U << CRU_SOFTRST_CON6_VIO_NIU_LSSRSTN_REQ_SHIFT)         /* 0x00000002 */
#define CRU_SOFTRST_CON6_VOPB_ASRSTN_REQ_SHIFT             (2U)
#define CRU_SOFTRST_CON6_VOPB_ASRSTN_REQ_MASK              (0x1U << CRU_SOFTRST_CON6_VOPB_ASRSTN_REQ_SHIFT)             /* 0x00000004 */
#define CRU_SOFTRST_CON6_VOPB_HSRSTN_REQ_SHIFT             (3U)
#define CRU_SOFTRST_CON6_VOPB_HSRSTN_REQ_MASK              (0x1U << CRU_SOFTRST_CON6_VOPB_HSRSTN_REQ_SHIFT)             /* 0x00000008 */
#define CRU_SOFTRST_CON6_VOPB_DRSTN_REQ_SHIFT              (4U)
#define CRU_SOFTRST_CON6_VOPB_DRSTN_REQ_MASK               (0x1U << CRU_SOFTRST_CON6_VOPB_DRSTN_REQ_SHIFT)              /* 0x00000010 */
#define CRU_SOFTRST_CON6_VOPL_ASRSTN_REQ_SHIFT             (5U)
#define CRU_SOFTRST_CON6_VOPL_ASRSTN_REQ_MASK              (0x1U << CRU_SOFTRST_CON6_VOPL_ASRSTN_REQ_SHIFT)             /* 0x00000020 */
#define CRU_SOFTRST_CON6_VOPL_HSRSTN_REQ_SHIFT             (6U)
#define CRU_SOFTRST_CON6_VOPL_HSRSTN_REQ_MASK              (0x1U << CRU_SOFTRST_CON6_VOPL_HSRSTN_REQ_SHIFT)             /* 0x00000040 */
#define CRU_SOFTRST_CON6_VOPL_DRSTN_REQ_SHIFT              (7U)
#define CRU_SOFTRST_CON6_VOPL_DRSTN_REQ_MASK               (0x1U << CRU_SOFTRST_CON6_VOPL_DRSTN_REQ_SHIFT)              /* 0x00000080 */
#define CRU_SOFTRST_CON6_MIPIDSI_HOST_PSRSTN_REQ_SHIFT     (8U)
#define CRU_SOFTRST_CON6_MIPIDSI_HOST_PSRSTN_REQ_MASK      (0x1U << CRU_SOFTRST_CON6_MIPIDSI_HOST_PSRSTN_REQ_SHIFT)     /* 0x00000100 */
#define CRU_SOFTRST_CON6_CSITX_PSRSTN_REQ_SHIFT            (9U)
#define CRU_SOFTRST_CON6_CSITX_PSRSTN_REQ_MASK             (0x1U << CRU_SOFTRST_CON6_CSITX_PSRSTN_REQ_SHIFT)            /* 0x00000200 */
#define CRU_SOFTRST_CON6_CSITX_TXBYTEHS_SRSTN_REQ_SHIFT    (10U)
#define CRU_SOFTRST_CON6_CSITX_TXBYTEHS_SRSTN_REQ_MASK     (0x1U << CRU_SOFTRST_CON6_CSITX_TXBYTEHS_SRSTN_REQ_SHIFT)    /* 0x00000400 */
#define CRU_SOFTRST_CON6_CSITX_TXESC_SRSTN_REQ_SHIFT       (11U)
#define CRU_SOFTRST_CON6_CSITX_TXESC_SRSTN_REQ_MASK        (0x1U << CRU_SOFTRST_CON6_CSITX_TXESC_SRSTN_REQ_SHIFT)       /* 0x00000800 */
#define CRU_SOFTRST_CON6_CSITX_CAM_SRSTN_REQ_SHIFT         (12U)
#define CRU_SOFTRST_CON6_CSITX_CAM_SRSTN_REQ_MASK          (0x1U << CRU_SOFTRST_CON6_CSITX_CAM_SRSTN_REQ_SHIFT)         /* 0x00001000 */
#define CRU_SOFTRST_CON6_CSITX_ISRSTN_REQ_SHIFT            (13U)
#define CRU_SOFTRST_CON6_CSITX_ISRSTN_REQ_MASK             (0x1U << CRU_SOFTRST_CON6_CSITX_ISRSTN_REQ_SHIFT)            /* 0x00002000 */
/* SOFTRST_CON7 */
#define CRU_SOFTRST_CON7_RGA_ASRSTN_REQ_SHIFT              (0U)
#define CRU_SOFTRST_CON7_RGA_ASRSTN_REQ_MASK               (0x1U << CRU_SOFTRST_CON7_RGA_ASRSTN_REQ_SHIFT)              /* 0x00000001 */
#define CRU_SOFTRST_CON7_RGA_HSRSTN_REQ_SHIFT              (1U)
#define CRU_SOFTRST_CON7_RGA_HSRSTN_REQ_MASK               (0x1U << CRU_SOFTRST_CON7_RGA_HSRSTN_REQ_SHIFT)              /* 0x00000002 */
#define CRU_SOFTRST_CON7_RGA_SRSTN_REQ_SHIFT               (2U)
#define CRU_SOFTRST_CON7_RGA_SRSTN_REQ_MASK                (0x1U << CRU_SOFTRST_CON7_RGA_SRSTN_REQ_SHIFT)               /* 0x00000004 */
#define CRU_SOFTRST_CON7_CSIRX_PSRSTN_REQ_SHIFT            (3U)
#define CRU_SOFTRST_CON7_CSIRX_PSRSTN_REQ_MASK             (0x1U << CRU_SOFTRST_CON7_CSIRX_PSRSTN_REQ_SHIFT)            /* 0x00000008 */
#define CRU_SOFTRST_CON7_CIF_ASRSTN_REQ_SHIFT              (4U)
#define CRU_SOFTRST_CON7_CIF_ASRSTN_REQ_MASK               (0x1U << CRU_SOFTRST_CON7_CIF_ASRSTN_REQ_SHIFT)              /* 0x00000010 */
#define CRU_SOFTRST_CON7_CIF_HSRSTN_REQ_SHIFT              (5U)
#define CRU_SOFTRST_CON7_CIF_HSRSTN_REQ_MASK               (0x1U << CRU_SOFTRST_CON7_CIF_HSRSTN_REQ_SHIFT)              /* 0x00000020 */
#define CRU_SOFTRST_CON7_CIF_ISRSTN_REQ_SHIFT              (6U)
#define CRU_SOFTRST_CON7_CIF_ISRSTN_REQ_MASK               (0x1U << CRU_SOFTRST_CON7_CIF_ISRSTN_REQ_SHIFT)              /* 0x00000040 */
#define CRU_SOFTRST_CON7_CIF_PCLKIN_SRSTN_REQ_SHIFT        (7U)
#define CRU_SOFTRST_CON7_CIF_PCLKIN_SRSTN_REQ_MASK         (0x1U << CRU_SOFTRST_CON7_CIF_PCLKIN_SRSTN_REQ_SHIFT)        /* 0x00000080 */
#define CRU_SOFTRST_CON7_CIF_DSRSTN_REQ_SHIFT              (8U)
#define CRU_SOFTRST_CON7_CIF_DSRSTN_REQ_MASK               (0x1U << CRU_SOFTRST_CON7_CIF_DSRSTN_REQ_SHIFT)              /* 0x00000100 */
#define CRU_SOFTRST_CON7_ISP_HSRSTN_REQ_SHIFT              (9U)
#define CRU_SOFTRST_CON7_ISP_HSRSTN_REQ_MASK               (0x1U << CRU_SOFTRST_CON7_ISP_HSRSTN_REQ_SHIFT)              /* 0x00000200 */
#define CRU_SOFTRST_CON7_ISP_SRSTN_REQ_SHIFT               (10U)
#define CRU_SOFTRST_CON7_ISP_SRSTN_REQ_MASK                (0x1U << CRU_SOFTRST_CON7_ISP_SRSTN_REQ_SHIFT)               /* 0x00000400 */
#define CRU_SOFTRST_CON7_MIPICSIPHY_PSRSTN_REQ_SHIFT       (12U)
#define CRU_SOFTRST_CON7_MIPICSIPHY_PSRSTN_REQ_MASK        (0x1U << CRU_SOFTRST_CON7_MIPICSIPHY_PSRSTN_REQ_SHIFT)       /* 0x00001000 */
#define CRU_SOFTRST_CON7_MIPIDSIPHY_PSRSTN_REQ_SHIFT       (13U)
#define CRU_SOFTRST_CON7_MIPIDSIPHY_PSRSTN_REQ_MASK        (0x1U << CRU_SOFTRST_CON7_MIPIDSIPHY_PSRSTN_REQ_SHIFT)       /* 0x00002000 */
/* SOFTRST_CON8 */
#define CRU_SOFTRST_CON8_PDPERI_NIU_MSSRSTN_REQ_SHIFT      (0U)
#define CRU_SOFTRST_CON8_PDPERI_NIU_MSSRSTN_REQ_MASK       (0x1U << CRU_SOFTRST_CON8_PDPERI_NIU_MSSRSTN_REQ_SHIFT)      /* 0x00000001 */
#define CRU_SOFTRST_CON8_PDPERI_NIU_LSSRSTN_REQ_SHIFT      (1U)
#define CRU_SOFTRST_CON8_PDPERI_NIU_LSSRSTN_REQ_MASK       (0x1U << CRU_SOFTRST_CON8_PDPERI_NIU_LSSRSTN_REQ_SHIFT)      /* 0x00000002 */
#define CRU_SOFTRST_CON8_PD_MMC_SFC_NIU_HSRSTN_REQ_SHIFT   (4U)
#define CRU_SOFTRST_CON8_PD_MMC_SFC_NIU_HSRSTN_REQ_MASK    (0x1U << CRU_SOFTRST_CON8_PD_MMC_SFC_NIU_HSRSTN_REQ_SHIFT)   /* 0x00000010 */
#define CRU_SOFTRST_CON8_SDMMC_HSRSTN_REQ_SHIFT            (5U)
#define CRU_SOFTRST_CON8_SDMMC_HSRSTN_REQ_MASK             (0x1U << CRU_SOFTRST_CON8_SDMMC_HSRSTN_REQ_SHIFT)            /* 0x00000020 */
#define CRU_SOFTRST_CON8_SDIO_HSRSTN_REQ_SHIFT             (6U)
#define CRU_SOFTRST_CON8_SDIO_HSRSTN_REQ_MASK              (0x1U << CRU_SOFTRST_CON8_SDIO_HSRSTN_REQ_SHIFT)             /* 0x00000040 */
#define CRU_SOFTRST_CON8_EMMC_HSRSTN_REQ_SHIFT             (7U)
#define CRU_SOFTRST_CON8_EMMC_HSRSTN_REQ_MASK              (0x1U << CRU_SOFTRST_CON8_EMMC_HSRSTN_REQ_SHIFT)             /* 0x00000080 */
#define CRU_SOFTRST_CON8_SFC_HSRSTN_REQ_SHIFT              (8U)
#define CRU_SOFTRST_CON8_SFC_HSRSTN_REQ_MASK               (0x1U << CRU_SOFTRST_CON8_SFC_HSRSTN_REQ_SHIFT)              /* 0x00000100 */
#define CRU_SOFTRST_CON8_SFC_SRSTN_REQ_SHIFT               (9U)
#define CRU_SOFTRST_CON8_SFC_SRSTN_REQ_MASK                (0x1U << CRU_SOFTRST_CON8_SFC_SRSTN_REQ_SHIFT)               /* 0x00000200 */
#define CRU_SOFTRST_CON8_PD_SD_GMAC_NIU_ASRSTN_REQ_SHIFT   (12U)
#define CRU_SOFTRST_CON8_PD_SD_GMAC_NIU_ASRSTN_REQ_MASK    (0x1U << CRU_SOFTRST_CON8_PD_SD_GMAC_NIU_ASRSTN_REQ_SHIFT)   /* 0x00001000 */
#define CRU_SOFTRST_CON8_PD_SD_GMAC_NIU_HSRSTN_REQ_SHIFT   (13U)
#define CRU_SOFTRST_CON8_PD_SD_GMAC_NIU_HSRSTN_REQ_MASK    (0x1U << CRU_SOFTRST_CON8_PD_SD_GMAC_NIU_HSRSTN_REQ_SHIFT)   /* 0x00002000 */
#define CRU_SOFTRST_CON8_PD_SD_GMAC_NIU_PSRSTN_REQ_SHIFT   (14U)
#define CRU_SOFTRST_CON8_PD_SD_GMAC_NIU_PSRSTN_REQ_MASK    (0x1U << CRU_SOFTRST_CON8_PD_SD_GMAC_NIU_PSRSTN_REQ_SHIFT)   /* 0x00004000 */
#define CRU_SOFTRST_CON8_GMAC_ASRSTN_REQ_SHIFT             (15U)
#define CRU_SOFTRST_CON8_GMAC_ASRSTN_REQ_MASK              (0x1U << CRU_SOFTRST_CON8_GMAC_ASRSTN_REQ_SHIFT)             /* 0x00008000 */
/* SOFTRST_CON9 */
#define CRU_SOFTRST_CON9_PMU_NIU_PSRSTN_REQ_SHIFT          (0U)
#define CRU_SOFTRST_CON9_PMU_NIU_PSRSTN_REQ_MASK           (0x1U << CRU_SOFTRST_CON9_PMU_NIU_PSRSTN_REQ_SHIFT)          /* 0x00000001 */
#define CRU_SOFTRST_CON9_PMU_GRF_PSRSTN_REQ_SHIFT          (2U)
#define CRU_SOFTRST_CON9_PMU_GRF_PSRSTN_REQ_MASK           (0x1U << CRU_SOFTRST_CON9_PMU_GRF_PSRSTN_REQ_SHIFT)          /* 0x00000004 */
#define CRU_SOFTRST_CON9_PMU_PMU_SRSTN_REQ_SHIFT           (3U)
#define CRU_SOFTRST_CON9_PMU_PMU_SRSTN_REQ_MASK            (0x1U << CRU_SOFTRST_CON9_PMU_PMU_SRSTN_REQ_SHIFT)           /* 0x00000008 */
#define CRU_SOFTRST_CON9_PMU_MEM_PSRSTN_REQ_SHIFT          (4U)
#define CRU_SOFTRST_CON9_PMU_MEM_PSRSTN_REQ_MASK           (0x1U << CRU_SOFTRST_CON9_PMU_MEM_PSRSTN_REQ_SHIFT)          /* 0x00000010 */
#define CRU_SOFTRST_CON9_PMU_GPIO0_PSRSTN_REQ_SHIFT        (5U)
#define CRU_SOFTRST_CON9_PMU_GPIO0_PSRSTN_REQ_MASK         (0x1U << CRU_SOFTRST_CON9_PMU_GPIO0_PSRSTN_REQ_SHIFT)        /* 0x00000020 */
#define CRU_SOFTRST_CON9_PMU_UART0_PSRSTN_REQ_SHIFT        (6U)
#define CRU_SOFTRST_CON9_PMU_UART0_PSRSTN_REQ_MASK         (0x1U << CRU_SOFTRST_CON9_PMU_UART0_PSRSTN_REQ_SHIFT)        /* 0x00000040 */
#define CRU_SOFTRST_CON9_PMU_PVTM_SRSTN_REQ_SHIFT          (8U)
#define CRU_SOFTRST_CON9_PMU_PVTM_SRSTN_REQ_MASK           (0x1U << CRU_SOFTRST_CON9_PMU_PVTM_SRSTN_REQ_SHIFT)          /* 0x00000100 */
#define CRU_SOFTRST_CON9_PMU_UART0_SRSTN_REQ_SHIFT         (9U)
#define CRU_SOFTRST_CON9_PMU_UART0_SRSTN_REQ_MASK          (0x1U << CRU_SOFTRST_CON9_PMU_UART0_SRSTN_REQ_SHIFT)         /* 0x00000200 */
#define CRU_SOFTRST_CON9_PMU_DDR_FAIL_SAVE_SRSTN_REQ_SHIFT (11U)
#define CRU_SOFTRST_CON9_PMU_DDR_FAIL_SAVE_SRSTN_REQ_MASK  (0x1U << CRU_SOFTRST_CON9_PMU_DDR_FAIL_SAVE_SRSTN_REQ_SHIFT) /* 0x00000800 */
#define CRU_SOFTRST_CON9_PMU_I2C0_PSRSTN_REQ_SHIFT         (12U)
#define CRU_SOFTRST_CON9_PMU_I2C0_PSRSTN_REQ_MASK          (0x1U << CRU_SOFTRST_CON9_PMU_I2C0_PSRSTN_REQ_SHIFT)         /* 0x00001000 */
#define CRU_SOFTRST_CON9_PMU_I2C0_SRSTN_REQ_SHIFT          (13U)
#define CRU_SOFTRST_CON9_PMU_I2C0_SRSTN_REQ_MASK           (0x1U << CRU_SOFTRST_CON9_PMU_I2C0_SRSTN_REQ_SHIFT)          /* 0x00002000 */
#define CRU_SOFTRST_CON9_PMU_GPIO0_DBSRSTN_REQ_SHIFT       (14U)
#define CRU_SOFTRST_CON9_PMU_GPIO0_DBSRSTN_REQ_MASK        (0x1U << CRU_SOFTRST_CON9_PMU_GPIO0_DBSRSTN_REQ_SHIFT)       /* 0x00004000 */
/* SOFTRST_CON10 */
#define CRU_SOFTRST_CON10_PD_AUDIO_NIU_HSRSTN_REQ_SHIFT    (0U)
#define CRU_SOFTRST_CON10_PD_AUDIO_NIU_HSRSTN_REQ_MASK     (0x1U << CRU_SOFTRST_CON10_PD_AUDIO_NIU_HSRSTN_REQ_SHIFT)    /* 0x00000001 */
#define CRU_SOFTRST_CON10_VAD_HSRSTN_REQ_SHIFT             (1U)
#define CRU_SOFTRST_CON10_VAD_HSRSTN_REQ_MASK              (0x1U << CRU_SOFTRST_CON10_VAD_HSRSTN_REQ_SHIFT)             /* 0x00000002 */
#define CRU_SOFTRST_CON10_PDM_HSRSTN_REQ_SHIFT             (2U)
#define CRU_SOFTRST_CON10_PDM_HSRSTN_REQ_MASK              (0x1U << CRU_SOFTRST_CON10_PDM_HSRSTN_REQ_SHIFT)             /* 0x00000004 */
#define CRU_SOFTRST_CON10_PDM_SRSTN_REQ_SHIFT              (3U)
#define CRU_SOFTRST_CON10_PDM_SRSTN_REQ_MASK               (0x1U << CRU_SOFTRST_CON10_PDM_SRSTN_REQ_SHIFT)              /* 0x00000008 */
#define CRU_SOFTRST_CON10_I2S0_HSRSTN_REQ_SHIFT            (4U)
#define CRU_SOFTRST_CON10_I2S0_HSRSTN_REQ_MASK             (0x1U << CRU_SOFTRST_CON10_I2S0_HSRSTN_REQ_SHIFT)            /* 0x00000010 */
#define CRU_SOFTRST_CON10_I2S0_TX_SRSTN_REQ_SHIFT          (5U)
#define CRU_SOFTRST_CON10_I2S0_TX_SRSTN_REQ_MASK           (0x1U << CRU_SOFTRST_CON10_I2S0_TX_SRSTN_REQ_SHIFT)          /* 0x00000020 */
#define CRU_SOFTRST_CON10_I2S1_HSRSTN_REQ_SHIFT            (6U)
#define CRU_SOFTRST_CON10_I2S1_HSRSTN_REQ_MASK             (0x1U << CRU_SOFTRST_CON10_I2S1_HSRSTN_REQ_SHIFT)            /* 0x00000040 */
#define CRU_SOFTRST_CON10_I2S1_SRSTN_REQ_SHIFT             (7U)
#define CRU_SOFTRST_CON10_I2S1_SRSTN_REQ_MASK              (0x1U << CRU_SOFTRST_CON10_I2S1_SRSTN_REQ_SHIFT)             /* 0x00000080 */
#define CRU_SOFTRST_CON10_I2S0_RX_SRSTN_REQ_SHIFT          (8U)
#define CRU_SOFTRST_CON10_I2S0_RX_SRSTN_REQ_MASK           (0x1U << CRU_SOFTRST_CON10_I2S0_RX_SRSTN_REQ_SHIFT)          /* 0x00000100 */
/* SOFTRST_CON11 */
#define CRU_SOFTRST_CON11_BUS_NIU_MSSRSTN_REQ_SHIFT        (0U)
#define CRU_SOFTRST_CON11_BUS_NIU_MSSRSTN_REQ_MASK         (0x1U << CRU_SOFTRST_CON11_BUS_NIU_MSSRSTN_REQ_SHIFT)        /* 0x00000001 */
#define CRU_SOFTRST_CON11_BUS_NIU_LSSRSTN_REQ_SHIFT        (1U)
#define CRU_SOFTRST_CON11_BUS_NIU_LSSRSTN_REQ_MASK         (0x1U << CRU_SOFTRST_CON11_BUS_NIU_LSSRSTN_REQ_SHIFT)        /* 0x00000002 */
#define CRU_SOFTRST_CON11_TOP_NIU_PSRSTN_REQ_SHIFT         (2U)
#define CRU_SOFTRST_CON11_TOP_NIU_PSRSTN_REQ_MASK          (0x1U << CRU_SOFTRST_CON11_TOP_NIU_PSRSTN_REQ_SHIFT)         /* 0x00000004 */
#define CRU_SOFTRST_CON11_ROM_HSRSTN_REQ_SHIFT             (3U)
#define CRU_SOFTRST_CON11_ROM_HSRSTN_REQ_MASK              (0x1U << CRU_SOFTRST_CON11_ROM_HSRSTN_REQ_SHIFT)             /* 0x00000008 */
#define CRU_SOFTRST_CON11_CRYPTO_ASRSTN_REQ_SHIFT          (4U)
#define CRU_SOFTRST_CON11_CRYPTO_ASRSTN_REQ_MASK           (0x1U << CRU_SOFTRST_CON11_CRYPTO_ASRSTN_REQ_SHIFT)          /* 0x00000010 */
#define CRU_SOFTRST_CON11_CRYPTO_HSRSTN_REQ_SHIFT          (5U)
#define CRU_SOFTRST_CON11_CRYPTO_HSRSTN_REQ_MASK           (0x1U << CRU_SOFTRST_CON11_CRYPTO_HSRSTN_REQ_SHIFT)          /* 0x00000020 */
#define CRU_SOFTRST_CON11_CRYPTO_CORE_SRSTN_REQ_SHIFT      (6U)
#define CRU_SOFTRST_CON11_CRYPTO_CORE_SRSTN_REQ_MASK       (0x1U << CRU_SOFTRST_CON11_CRYPTO_CORE_SRSTN_REQ_SHIFT)      /* 0x00000040 */
#define CRU_SOFTRST_CON11_CRYPTO_APK_SRSTN_REQ_SHIFT       (7U)
#define CRU_SOFTRST_CON11_CRYPTO_APK_SRSTN_REQ_MASK        (0x1U << CRU_SOFTRST_CON11_CRYPTO_APK_SRSTN_REQ_SHIFT)       /* 0x00000080 */
#define CRU_SOFTRST_CON11_DCF_ASRSTN_REQ_SHIFT             (8U)
#define CRU_SOFTRST_CON11_DCF_ASRSTN_REQ_MASK              (0x1U << CRU_SOFTRST_CON11_DCF_ASRSTN_REQ_SHIFT)             /* 0x00000100 */
#define CRU_SOFTRST_CON11_DCF_PSRSTN_REQ_SHIFT             (9U)
#define CRU_SOFTRST_CON11_DCF_PSRSTN_REQ_MASK              (0x1U << CRU_SOFTRST_CON11_DCF_PSRSTN_REQ_SHIFT)             /* 0x00000200 */
#define CRU_SOFTRST_CON11_UART1_PSRSTN_REQ_SHIFT           (10U)
#define CRU_SOFTRST_CON11_UART1_PSRSTN_REQ_MASK            (0x1U << CRU_SOFTRST_CON11_UART1_PSRSTN_REQ_SHIFT)           /* 0x00000400 */
#define CRU_SOFTRST_CON11_UART1_SRSTN_REQ_SHIFT            (11U)
#define CRU_SOFTRST_CON11_UART1_SRSTN_REQ_MASK             (0x1U << CRU_SOFTRST_CON11_UART1_SRSTN_REQ_SHIFT)            /* 0x00000800 */
#define CRU_SOFTRST_CON11_UART2_PSRSTN_REQ_SHIFT           (12U)
#define CRU_SOFTRST_CON11_UART2_PSRSTN_REQ_MASK            (0x1U << CRU_SOFTRST_CON11_UART2_PSRSTN_REQ_SHIFT)           /* 0x00001000 */
#define CRU_SOFTRST_CON11_UART2_SRSTN_REQ_SHIFT            (13U)
#define CRU_SOFTRST_CON11_UART2_SRSTN_REQ_MASK             (0x1U << CRU_SOFTRST_CON11_UART2_SRSTN_REQ_SHIFT)            /* 0x00002000 */
#define CRU_SOFTRST_CON11_UART3_PSRSTN_REQ_SHIFT           (14U)
#define CRU_SOFTRST_CON11_UART3_PSRSTN_REQ_MASK            (0x1U << CRU_SOFTRST_CON11_UART3_PSRSTN_REQ_SHIFT)           /* 0x00004000 */
#define CRU_SOFTRST_CON11_UART3_SRSTN_REQ_SHIFT            (15U)
#define CRU_SOFTRST_CON11_UART3_SRSTN_REQ_MASK             (0x1U << CRU_SOFTRST_CON11_UART3_SRSTN_REQ_SHIFT)            /* 0x00008000 */
/* SOFTRST_CON12 */
#define CRU_SOFTRST_CON12_UART4_PSRSTN_REQ_SHIFT           (0U)
#define CRU_SOFTRST_CON12_UART4_PSRSTN_REQ_MASK            (0x1U << CRU_SOFTRST_CON12_UART4_PSRSTN_REQ_SHIFT)           /* 0x00000001 */
#define CRU_SOFTRST_CON12_UART4_SRSTN_REQ_SHIFT            (1U)
#define CRU_SOFTRST_CON12_UART4_SRSTN_REQ_MASK             (0x1U << CRU_SOFTRST_CON12_UART4_SRSTN_REQ_SHIFT)            /* 0x00000002 */
#define CRU_SOFTRST_CON12_UART5_PSRSTN_REQ_SHIFT           (2U)
#define CRU_SOFTRST_CON12_UART5_PSRSTN_REQ_MASK            (0x1U << CRU_SOFTRST_CON12_UART5_PSRSTN_REQ_SHIFT)           /* 0x00000004 */
#define CRU_SOFTRST_CON12_UART5_SRSTN_REQ_SHIFT            (3U)
#define CRU_SOFTRST_CON12_UART5_SRSTN_REQ_MASK             (0x1U << CRU_SOFTRST_CON12_UART5_SRSTN_REQ_SHIFT)            /* 0x00000008 */
#define CRU_SOFTRST_CON12_UART6_PSRSTN_REQ_SHIFT           (4U)
#define CRU_SOFTRST_CON12_UART6_PSRSTN_REQ_MASK            (0x1U << CRU_SOFTRST_CON12_UART6_PSRSTN_REQ_SHIFT)           /* 0x00000010 */
#define CRU_SOFTRST_CON12_UART6_SRSTN_REQ_SHIFT            (5U)
#define CRU_SOFTRST_CON12_UART6_SRSTN_REQ_MASK             (0x1U << CRU_SOFTRST_CON12_UART6_SRSTN_REQ_SHIFT)            /* 0x00000020 */
#define CRU_SOFTRST_CON12_UART7_PSRSTN_REQ_SHIFT           (6U)
#define CRU_SOFTRST_CON12_UART7_PSRSTN_REQ_MASK            (0x1U << CRU_SOFTRST_CON12_UART7_PSRSTN_REQ_SHIFT)           /* 0x00000040 */
#define CRU_SOFTRST_CON12_UART7_SRSTN_REQ_SHIFT            (7U)
#define CRU_SOFTRST_CON12_UART7_SRSTN_REQ_MASK             (0x1U << CRU_SOFTRST_CON12_UART7_SRSTN_REQ_SHIFT)            /* 0x00000080 */
#define CRU_SOFTRST_CON12_I2C1_PSRSTN_REQ_SHIFT            (8U)
#define CRU_SOFTRST_CON12_I2C1_PSRSTN_REQ_MASK             (0x1U << CRU_SOFTRST_CON12_I2C1_PSRSTN_REQ_SHIFT)            /* 0x00000100 */
#define CRU_SOFTRST_CON12_I2C1_SRSTN_REQ_SHIFT             (9U)
#define CRU_SOFTRST_CON12_I2C1_SRSTN_REQ_MASK              (0x1U << CRU_SOFTRST_CON12_I2C1_SRSTN_REQ_SHIFT)             /* 0x00000200 */
#define CRU_SOFTRST_CON12_I2C2_PSRSTN_REQ_SHIFT            (10U)
#define CRU_SOFTRST_CON12_I2C2_PSRSTN_REQ_MASK             (0x1U << CRU_SOFTRST_CON12_I2C2_PSRSTN_REQ_SHIFT)            /* 0x00000400 */
#define CRU_SOFTRST_CON12_I2C2_SRSTN_REQ_SHIFT             (11U)
#define CRU_SOFTRST_CON12_I2C2_SRSTN_REQ_MASK              (0x1U << CRU_SOFTRST_CON12_I2C2_SRSTN_REQ_SHIFT)             /* 0x00000800 */
#define CRU_SOFTRST_CON12_I2C3_PSRSTN_REQ_SHIFT            (12U)
#define CRU_SOFTRST_CON12_I2C3_PSRSTN_REQ_MASK             (0x1U << CRU_SOFTRST_CON12_I2C3_PSRSTN_REQ_SHIFT)            /* 0x00001000 */
#define CRU_SOFTRST_CON12_I2C3_SRSTN_REQ_SHIFT             (13U)
#define CRU_SOFTRST_CON12_I2C3_SRSTN_REQ_MASK              (0x1U << CRU_SOFTRST_CON12_I2C3_SRSTN_REQ_SHIFT)             /* 0x00002000 */
#define CRU_SOFTRST_CON12_PWM0_PSRSTN_REQ_SHIFT            (14U)
#define CRU_SOFTRST_CON12_PWM0_PSRSTN_REQ_MASK             (0x1U << CRU_SOFTRST_CON12_PWM0_PSRSTN_REQ_SHIFT)            /* 0x00004000 */
#define CRU_SOFTRST_CON12_PWM0_SRSTN_REQ_SHIFT             (15U)
#define CRU_SOFTRST_CON12_PWM0_SRSTN_REQ_MASK              (0x1U << CRU_SOFTRST_CON12_PWM0_SRSTN_REQ_SHIFT)             /* 0x00008000 */
/* SOFTRST_CON13 */
#define CRU_SOFTRST_CON13_PWM1_PSRSTN_REQ_SHIFT            (0U)
#define CRU_SOFTRST_CON13_PWM1_PSRSTN_REQ_MASK             (0x1U << CRU_SOFTRST_CON13_PWM1_PSRSTN_REQ_SHIFT)            /* 0x00000001 */
#define CRU_SOFTRST_CON13_PWM1_SRSTN_REQ_SHIFT             (1U)
#define CRU_SOFTRST_CON13_PWM1_SRSTN_REQ_MASK              (0x1U << CRU_SOFTRST_CON13_PWM1_SRSTN_REQ_SHIFT)             /* 0x00000002 */
#define CRU_SOFTRST_CON13_PWM2_PSRSTN_REQ_SHIFT            (2U)
#define CRU_SOFTRST_CON13_PWM2_PSRSTN_REQ_MASK             (0x1U << CRU_SOFTRST_CON13_PWM2_PSRSTN_REQ_SHIFT)            /* 0x00000004 */
#define CRU_SOFTRST_CON13_PWM2_SRSTN_REQ_SHIFT             (3U)
#define CRU_SOFTRST_CON13_PWM2_SRSTN_REQ_MASK              (0x1U << CRU_SOFTRST_CON13_PWM2_SRSTN_REQ_SHIFT)             /* 0x00000008 */
#define CRU_SOFTRST_CON13_SPI0_PSRSTN_REQ_SHIFT            (4U)
#define CRU_SOFTRST_CON13_SPI0_PSRSTN_REQ_MASK             (0x1U << CRU_SOFTRST_CON13_SPI0_PSRSTN_REQ_SHIFT)            /* 0x00000010 */
#define CRU_SOFTRST_CON13_SPI0_SRSTN_REQ_SHIFT             (5U)
#define CRU_SOFTRST_CON13_SPI0_SRSTN_REQ_MASK              (0x1U << CRU_SOFTRST_CON13_SPI0_SRSTN_REQ_SHIFT)             /* 0x00000020 */
#define CRU_SOFTRST_CON13_SPI1_PSRSTN_REQ_SHIFT            (6U)
#define CRU_SOFTRST_CON13_SPI1_PSRSTN_REQ_MASK             (0x1U << CRU_SOFTRST_CON13_SPI1_PSRSTN_REQ_SHIFT)            /* 0x00000040 */
#define CRU_SOFTRST_CON13_SPI1_SRSTN_REQ_SHIFT             (7U)
#define CRU_SOFTRST_CON13_SPI1_SRSTN_REQ_MASK              (0x1U << CRU_SOFTRST_CON13_SPI1_SRSTN_REQ_SHIFT)             /* 0x00000080 */
#define CRU_SOFTRST_CON13_SPI2_PSRSTN_REQ_SHIFT            (8U)
#define CRU_SOFTRST_CON13_SPI2_PSRSTN_REQ_MASK             (0x1U << CRU_SOFTRST_CON13_SPI2_PSRSTN_REQ_SHIFT)            /* 0x00000100 */
#define CRU_SOFTRST_CON13_SPI2_SRSTN_REQ_SHIFT             (9U)
#define CRU_SOFTRST_CON13_SPI2_SRSTN_REQ_MASK              (0x1U << CRU_SOFTRST_CON13_SPI2_SRSTN_REQ_SHIFT)             /* 0x00000200 */
#define CRU_SOFTRST_CON13_BUS_GRF_PSRSTN_REQ_SHIFT         (11U)
#define CRU_SOFTRST_CON13_BUS_GRF_PSRSTN_REQ_MASK          (0x1U << CRU_SOFTRST_CON13_BUS_GRF_PSRSTN_REQ_SHIFT)         /* 0x00000800 */
#define CRU_SOFTRST_CON13_TIMER_PSRSTN_REQ_SHIFT           (12U)
#define CRU_SOFTRST_CON13_TIMER_PSRSTN_REQ_MASK            (0x1U << CRU_SOFTRST_CON13_TIMER_PSRSTN_REQ_SHIFT)           /* 0x00001000 */
#define CRU_SOFTRST_CON13_TIMER0_SRSTN_REQ_SHIFT           (13U)
#define CRU_SOFTRST_CON13_TIMER0_SRSTN_REQ_MASK            (0x1U << CRU_SOFTRST_CON13_TIMER0_SRSTN_REQ_SHIFT)           /* 0x00002000 */
#define CRU_SOFTRST_CON13_TIMER1_SRSTN_REQ_SHIFT           (14U)
#define CRU_SOFTRST_CON13_TIMER1_SRSTN_REQ_MASK            (0x1U << CRU_SOFTRST_CON13_TIMER1_SRSTN_REQ_SHIFT)           /* 0x00004000 */
#define CRU_SOFTRST_CON13_TIMER2_SRSTN_REQ_SHIFT           (15U)
#define CRU_SOFTRST_CON13_TIMER2_SRSTN_REQ_MASK            (0x1U << CRU_SOFTRST_CON13_TIMER2_SRSTN_REQ_SHIFT)           /* 0x00008000 */
/* SOFTRST_CON14 */
#define CRU_SOFTRST_CON14_TIMER3_SRSTN_REQ_SHIFT           (0U)
#define CRU_SOFTRST_CON14_TIMER3_SRSTN_REQ_MASK            (0x1U << CRU_SOFTRST_CON14_TIMER3_SRSTN_REQ_SHIFT)           /* 0x00000001 */
#define CRU_SOFTRST_CON14_TIMER4_SRSTN_REQ_SHIFT           (1U)
#define CRU_SOFTRST_CON14_TIMER4_SRSTN_REQ_MASK            (0x1U << CRU_SOFTRST_CON14_TIMER4_SRSTN_REQ_SHIFT)           /* 0x00000002 */
#define CRU_SOFTRST_CON14_TIMER5_SRSTN_REQ_SHIFT           (2U)
#define CRU_SOFTRST_CON14_TIMER5_SRSTN_REQ_MASK            (0x1U << CRU_SOFTRST_CON14_TIMER5_SRSTN_REQ_SHIFT)           /* 0x00000004 */
#define CRU_SOFTRST_CON14_WDT_NS_PSRSTN_REQ_SHIFT          (3U)
#define CRU_SOFTRST_CON14_WDT_NS_PSRSTN_REQ_MASK           (0x1U << CRU_SOFTRST_CON14_WDT_NS_PSRSTN_REQ_SHIFT)          /* 0x00000008 */
#define CRU_SOFTRST_CON14_EFUSE_NS_PSRSTN_REQ_SHIFT        (4U)
#define CRU_SOFTRST_CON14_EFUSE_NS_PSRSTN_REQ_MASK         (0x1U << CRU_SOFTRST_CON14_EFUSE_NS_PSRSTN_REQ_SHIFT)        /* 0x00000010 */
#define CRU_SOFTRST_CON14_EFUSE_NS_SRSTN_REQ_SHIFT         (5U)
#define CRU_SOFTRST_CON14_EFUSE_NS_SRSTN_REQ_MASK          (0x1U << CRU_SOFTRST_CON14_EFUSE_NS_SRSTN_REQ_SHIFT)         /* 0x00000020 */
#define CRU_SOFTRST_CON14_GPIO1_PSRSTN_REQ_SHIFT           (6U)
#define CRU_SOFTRST_CON14_GPIO1_PSRSTN_REQ_MASK            (0x1U << CRU_SOFTRST_CON14_GPIO1_PSRSTN_REQ_SHIFT)           /* 0x00000040 */
#define CRU_SOFTRST_CON14_GPIO1_DBSRSTN_REQ_SHIFT          (7U)
#define CRU_SOFTRST_CON14_GPIO1_DBSRSTN_REQ_MASK           (0x1U << CRU_SOFTRST_CON14_GPIO1_DBSRSTN_REQ_SHIFT)          /* 0x00000080 */
#define CRU_SOFTRST_CON14_GPIO2_PSRSTN_REQ_SHIFT           (8U)
#define CRU_SOFTRST_CON14_GPIO2_PSRSTN_REQ_MASK            (0x1U << CRU_SOFTRST_CON14_GPIO2_PSRSTN_REQ_SHIFT)           /* 0x00000100 */
#define CRU_SOFTRST_CON14_GPIO2_DBSRSTN_REQ_SHIFT          (9U)
#define CRU_SOFTRST_CON14_GPIO2_DBSRSTN_REQ_MASK           (0x1U << CRU_SOFTRST_CON14_GPIO2_DBSRSTN_REQ_SHIFT)          /* 0x00000200 */
#define CRU_SOFTRST_CON14_GPIO3_PSRSTN_REQ_SHIFT           (10U)
#define CRU_SOFTRST_CON14_GPIO3_PSRSTN_REQ_MASK            (0x1U << CRU_SOFTRST_CON14_GPIO3_PSRSTN_REQ_SHIFT)           /* 0x00000400 */
#define CRU_SOFTRST_CON14_GPIO3_DBSRSTN_REQ_SHIFT          (11U)
#define CRU_SOFTRST_CON14_GPIO3_DBSRSTN_REQ_MASK           (0x1U << CRU_SOFTRST_CON14_GPIO3_DBSRSTN_REQ_SHIFT)          /* 0x00000800 */
#define CRU_SOFTRST_CON14_GPIO4_PSRSTN_REQ_SHIFT           (12U)
#define CRU_SOFTRST_CON14_GPIO4_PSRSTN_REQ_MASK            (0x1U << CRU_SOFTRST_CON14_GPIO4_PSRSTN_REQ_SHIFT)           /* 0x00001000 */
#define CRU_SOFTRST_CON14_GPIO4_DBSRSTN_REQ_SHIFT          (13U)
#define CRU_SOFTRST_CON14_GPIO4_DBSRSTN_REQ_MASK           (0x1U << CRU_SOFTRST_CON14_GPIO4_DBSRSTN_REQ_SHIFT)          /* 0x00002000 */
#define CRU_SOFTRST_CON14_BUS_SUB_NIU_MSSRSTN_REQ_SHIFT    (14U)
#define CRU_SOFTRST_CON14_BUS_SUB_NIU_MSSRSTN_REQ_MASK     (0x1U << CRU_SOFTRST_CON14_BUS_SUB_NIU_MSSRSTN_REQ_SHIFT)    /* 0x00004000 */
/* SOFTRST_CON15 */
#define CRU_SOFTRST_CON15_I2C4_PSRSTN_REQ_SHIFT            (0U)
#define CRU_SOFTRST_CON15_I2C4_PSRSTN_REQ_MASK             (0x1U << CRU_SOFTRST_CON15_I2C4_PSRSTN_REQ_SHIFT)            /* 0x00000001 */
#define CRU_SOFTRST_CON15_I2C4_SRSTN_REQ_SHIFT             (1U)
#define CRU_SOFTRST_CON15_I2C4_SRSTN_REQ_MASK              (0x1U << CRU_SOFTRST_CON15_I2C4_SRSTN_REQ_SHIFT)             /* 0x00000002 */
#define CRU_SOFTRST_CON15_I2C5_PSRSTN_REQ_SHIFT            (2U)
#define CRU_SOFTRST_CON15_I2C5_PSRSTN_REQ_MASK             (0x1U << CRU_SOFTRST_CON15_I2C5_PSRSTN_REQ_SHIFT)            /* 0x00000004 */
#define CRU_SOFTRST_CON15_I2C5_SRSTN_REQ_SHIFT             (3U)
#define CRU_SOFTRST_CON15_I2C5_SRSTN_REQ_MASK              (0x1U << CRU_SOFTRST_CON15_I2C5_SRSTN_REQ_SHIFT)             /* 0x00000008 */
#define CRU_SOFTRST_CON15_SARADC_PSRSTN_REQ_SHIFT          (13U)
#define CRU_SOFTRST_CON15_SARADC_PSRSTN_REQ_MASK           (0x1U << CRU_SOFTRST_CON15_SARADC_PSRSTN_REQ_SHIFT)          /* 0x00002000 */
#define CRU_SOFTRST_CON15_TSADC_PSRSTN_REQ_SHIFT           (14U)
#define CRU_SOFTRST_CON15_TSADC_PSRSTN_REQ_MASK            (0x1U << CRU_SOFTRST_CON15_TSADC_PSRSTN_REQ_SHIFT)           /* 0x00004000 */
#define CRU_SOFTRST_CON15_TSADC_SRSTN_REQ_SHIFT            (15U)
#define CRU_SOFTRST_CON15_TSADC_SRSTN_REQ_MASK             (0x1U << CRU_SOFTRST_CON15_TSADC_SRSTN_REQ_SHIFT)            /* 0x00008000 */
/* SDMMC_CON0 */
#define CRU_SDMMC_CON0_INIT_STATE_SHIFT                    (0U)
#define CRU_SDMMC_CON0_INIT_STATE_MASK                     (0x1U << CRU_SDMMC_CON0_INIT_STATE_SHIFT)                    /* 0x00000001 */
#define CRU_SDMMC_CON0_DRV_DEGREE_SHIFT                    (1U)
#define CRU_SDMMC_CON0_DRV_DEGREE_MASK                     (0x3U << CRU_SDMMC_CON0_DRV_DEGREE_SHIFT)                    /* 0x00000006 */
#define CRU_SDMMC_CON0_DRV_DELAYNUM_SHIFT                  (3U)
#define CRU_SDMMC_CON0_DRV_DELAYNUM_MASK                   (0xFFU << CRU_SDMMC_CON0_DRV_DELAYNUM_SHIFT)                 /* 0x000007F8 */
#define CRU_SDMMC_CON0_DRV_SEL_SHIFT                       (11U)
#define CRU_SDMMC_CON0_DRV_SEL_MASK                        (0x1U << CRU_SDMMC_CON0_DRV_SEL_SHIFT)                       /* 0x00000800 */
/* SDMMC_CON1 */
#define CRU_SDMMC_CON1_SAMPLE_DEGREE_SHIFT                 (1U)
#define CRU_SDMMC_CON1_SAMPLE_DEGREE_MASK                  (0x3U << CRU_SDMMC_CON1_SAMPLE_DEGREE_SHIFT)                 /* 0x00000006 */
#define CRU_SDMMC_CON1_SAMPLE_DELAYNUM_SHIFT               (3U)
#define CRU_SDMMC_CON1_SAMPLE_DELAYNUM_MASK                (0xFFU << CRU_SDMMC_CON1_SAMPLE_DELAYNUM_SHIFT)              /* 0x000007F8 */
#define CRU_SDMMC_CON1_SAMPLE_SEL_SHIFT                    (11U)
#define CRU_SDMMC_CON1_SAMPLE_SEL_MASK                     (0x1U << CRU_SDMMC_CON1_SAMPLE_SEL_SHIFT)                    /* 0x00000800 */
/* SDIO_CON0 */
#define CRU_SDIO_CON0_INIT_STATE_SHIFT                     (0U)
#define CRU_SDIO_CON0_INIT_STATE_MASK                      (0x1U << CRU_SDIO_CON0_INIT_STATE_SHIFT)                     /* 0x00000001 */
#define CRU_SDIO_CON0_DRV_DEGREE_SHIFT                     (1U)
#define CRU_SDIO_CON0_DRV_DEGREE_MASK                      (0x3U << CRU_SDIO_CON0_DRV_DEGREE_SHIFT)                     /* 0x00000006 */
#define CRU_SDIO_CON0_DRV_DELAYNUM_SHIFT                   (3U)
#define CRU_SDIO_CON0_DRV_DELAYNUM_MASK                    (0xFFU << CRU_SDIO_CON0_DRV_DELAYNUM_SHIFT)                  /* 0x000007F8 */
#define CRU_SDIO_CON0_DRV_SEL_SHIFT                        (11U)
#define CRU_SDIO_CON0_DRV_SEL_MASK                         (0x1U << CRU_SDIO_CON0_DRV_SEL_SHIFT)                        /* 0x00000800 */
/* SDIO_CON1 */
#define CRU_SDIO_CON1_SAMPLE_DEGREE_SHIFT                  (1U)
#define CRU_SDIO_CON1_SAMPLE_DEGREE_MASK                   (0x3U << CRU_SDIO_CON1_SAMPLE_DEGREE_SHIFT)                  /* 0x00000006 */
#define CRU_SDIO_CON1_SAMPLE_DELAYNUM_SHIFT                (3U)
#define CRU_SDIO_CON1_SAMPLE_DELAYNUM_MASK                 (0xFFU << CRU_SDIO_CON1_SAMPLE_DELAYNUM_SHIFT)               /* 0x000007F8 */
#define CRU_SDIO_CON1_SAMPLE_SEL_SHIFT                     (11U)
#define CRU_SDIO_CON1_SAMPLE_SEL_MASK                      (0x1U << CRU_SDIO_CON1_SAMPLE_SEL_SHIFT)                     /* 0x00000800 */
/* EMMC_CON0 */
#define CRU_EMMC_CON0_INIT_STATE_SHIFT                     (0U)
#define CRU_EMMC_CON0_INIT_STATE_MASK                      (0x1U << CRU_EMMC_CON0_INIT_STATE_SHIFT)                     /* 0x00000001 */
#define CRU_EMMC_CON0_DRV_DEGREE_SHIFT                     (1U)
#define CRU_EMMC_CON0_DRV_DEGREE_MASK                      (0x3U << CRU_EMMC_CON0_DRV_DEGREE_SHIFT)                     /* 0x00000006 */
#define CRU_EMMC_CON0_DRV_DELAYNUM_SHIFT                   (3U)
#define CRU_EMMC_CON0_DRV_DELAYNUM_MASK                    (0xFFU << CRU_EMMC_CON0_DRV_DELAYNUM_SHIFT)                  /* 0x000007F8 */
#define CRU_EMMC_CON0_DRV_SEL_SHIFT                        (11U)
#define CRU_EMMC_CON0_DRV_SEL_MASK                         (0x1U << CRU_EMMC_CON0_DRV_SEL_SHIFT)                        /* 0x00000800 */
/* EMMC_CON1 */
#define CRU_EMMC_CON1_SAMPLE_DEGREE_SHIFT                  (1U)
#define CRU_EMMC_CON1_SAMPLE_DEGREE_MASK                   (0x3U << CRU_EMMC_CON1_SAMPLE_DEGREE_SHIFT)                  /* 0x00000006 */
#define CRU_EMMC_CON1_SAMPLE_DELAYNUM_SHIFT                (3U)
#define CRU_EMMC_CON1_SAMPLE_DELAYNUM_MASK                 (0xFFU << CRU_EMMC_CON1_SAMPLE_DELAYNUM_SHIFT)               /* 0x000007F8 */
#define CRU_EMMC_CON1_SAMPLE_SEL_SHIFT                     (11U)
#define CRU_EMMC_CON1_SAMPLE_SEL_MASK                      (0x1U << CRU_EMMC_CON1_SAMPLE_SEL_SHIFT)                     /* 0x00000800 */
/* AUTOCS_CON0 */
#define CRU_AUTOCS_CON0_PDCORE_IDLE_TH_SHIFT               (0U)
#define CRU_AUTOCS_CON0_PDCORE_IDLE_TH_MASK                (0xFFFFU << CRU_AUTOCS_CON0_PDCORE_IDLE_TH_SHIFT)            /* 0x0000FFFF */
#define CRU_AUTOCS_CON0_PDCORE_WAIT_TH_SHIFT               (16U)
#define CRU_AUTOCS_CON0_PDCORE_WAIT_TH_MASK                (0xFFFFU << CRU_AUTOCS_CON0_PDCORE_WAIT_TH_SHIFT)            /* 0xFFFF0000 */
/* AUTOCS_CON1 */
#define CRU_AUTOCS_CON1_PDCORE_SWITCH_EN_SHIFT             (0U)
#define CRU_AUTOCS_CON1_PDCORE_SWITCH_EN_MASK              (0x1U << CRU_AUTOCS_CON1_PDCORE_SWITCH_EN_SHIFT)             /* 0x00000001 */
#define CRU_AUTOCS_CON1_PDCORE_WFIWFE_EN_SHIFT             (1U)
#define CRU_AUTOCS_CON1_PDCORE_WFIWFE_EN_MASK              (0x1U << CRU_AUTOCS_CON1_PDCORE_WFIWFE_EN_SHIFT)             /* 0x00000002 */
#define CRU_AUTOCS_CON1_PDCORE_WFI_EN_SHIFT                (2U)
#define CRU_AUTOCS_CON1_PDCORE_WFI_EN_MASK                 (0x1U << CRU_AUTOCS_CON1_PDCORE_WFI_EN_SHIFT)                /* 0x00000004 */
#define CRU_AUTOCS_CON1_PDCORE_WFIL2_EN_SHIFT              (3U)
#define CRU_AUTOCS_CON1_PDCORE_WFIL2_EN_MASK               (0x1U << CRU_AUTOCS_CON1_PDCORE_WFIL2_EN_SHIFT)              /* 0x00000008 */
#define CRU_AUTOCS_CON1_PDCORE_FIQIRQ_EN_SHIFT             (4U)
#define CRU_AUTOCS_CON1_PDCORE_FIQIRQ_EN_MASK              (0x1U << CRU_AUTOCS_CON1_PDCORE_FIQIRQ_EN_SHIFT)             /* 0x00000010 */
#define CRU_AUTOCS_CON1_PDCORE_VFIQIRQ_EN_SHIFT            (5U)
#define CRU_AUTOCS_CON1_PDCORE_VFIQIRQ_EN_MASK             (0x1U << CRU_AUTOCS_CON1_PDCORE_VFIQIRQ_EN_SHIFT)            /* 0x00000020 */
#define CRU_AUTOCS_CON1_PDCORE_NIU_ACTIVE_EN_SHIFT         (6U)
#define CRU_AUTOCS_CON1_PDCORE_NIU_ACTIVE_EN_MASK          (0x1U << CRU_AUTOCS_CON1_PDCORE_NIU_ACTIVE_EN_SHIFT)         /* 0x00000040 */
#define CRU_AUTOCS_CON1_PDCORE_CLKSEL_OUT_SHIFT            (12U)
#define CRU_AUTOCS_CON1_PDCORE_CLKSEL_OUT_MASK             (0x3U << CRU_AUTOCS_CON1_PDCORE_CLKSEL_OUT_SHIFT)            /* 0x00003000 */
#define CRU_AUTOCS_CON1_PDCORE_CLKSEL_SHIFT                (14U)
#define CRU_AUTOCS_CON1_PDCORE_CLKSEL_MASK                 (0x3U << CRU_AUTOCS_CON1_PDCORE_CLKSEL_SHIFT)                /* 0x0000C000 */
/* AUTOCS_CON2 */
#define CRU_AUTOCS_CON2_PDBUS_IDLE_TH_SHIFT                (0U)
#define CRU_AUTOCS_CON2_PDBUS_IDLE_TH_MASK                 (0xFFFFU << CRU_AUTOCS_CON2_PDBUS_IDLE_TH_SHIFT)             /* 0x0000FFFF */
#define CRU_AUTOCS_CON2_PDBUS_WAIT_TH_SHIFT                (16U)
#define CRU_AUTOCS_CON2_PDBUS_WAIT_TH_MASK                 (0xFFFFU << CRU_AUTOCS_CON2_PDBUS_WAIT_TH_SHIFT)             /* 0xFFFF0000 */
/* AUTOCS_CON3 */
#define CRU_AUTOCS_CON3_PDBUS_SWITCH_EN_SHIFT              (0U)
#define CRU_AUTOCS_CON3_PDBUS_SWITCH_EN_MASK               (0x1U << CRU_AUTOCS_CON3_PDBUS_SWITCH_EN_SHIFT)              /* 0x00000001 */
#define CRU_AUTOCS_CON3_PDBUS_HSCLK_EN_SHIFT               (1U)
#define CRU_AUTOCS_CON3_PDBUS_HSCLK_EN_MASK                (0x1U << CRU_AUTOCS_CON3_PDBUS_HSCLK_EN_SHIFT)               /* 0x00000002 */
#define CRU_AUTOCS_CON3_PDBUS_MSCLK_EN_SHIFT               (2U)
#define CRU_AUTOCS_CON3_PDBUS_MSCLK_EN_MASK                (0x1U << CRU_AUTOCS_CON3_PDBUS_MSCLK_EN_SHIFT)               /* 0x00000004 */
#define CRU_AUTOCS_CON3_PDBUS_LSCLK_EN_SHIFT               (3U)
#define CRU_AUTOCS_CON3_PDBUS_LSCLK_EN_MASK                (0x1U << CRU_AUTOCS_CON3_PDBUS_LSCLK_EN_SHIFT)               /* 0x00000008 */
#define CRU_AUTOCS_CON3_PDBUS_MASTER_EN_SHIFT              (4U)
#define CRU_AUTOCS_CON3_PDBUS_MASTER_EN_MASK               (0x1U << CRU_AUTOCS_CON3_PDBUS_MASTER_EN_SHIFT)              /* 0x00000010 */
#define CRU_AUTOCS_CON3_PDBUS_SLAVE_EN_SHIFT               (5U)
#define CRU_AUTOCS_CON3_PDBUS_SLAVE_EN_MASK                (0x1U << CRU_AUTOCS_CON3_PDBUS_SLAVE_EN_SHIFT)               /* 0x00000020 */
#define CRU_AUTOCS_CON3_PDBUS_DCF_M_EN_SHIFT               (6U)
#define CRU_AUTOCS_CON3_PDBUS_DCF_M_EN_MASK                (0x1U << CRU_AUTOCS_CON3_PDBUS_DCF_M_EN_SHIFT)               /* 0x00000040 */
#define CRU_AUTOCS_CON3_PDBUS_DMAC_M_EN_SHIFT              (7U)
#define CRU_AUTOCS_CON3_PDBUS_DMAC_M_EN_MASK               (0x1U << CRU_AUTOCS_CON3_PDBUS_DMAC_M_EN_SHIFT)              /* 0x00000080 */
#define CRU_AUTOCS_CON3_PDBUS_CRYPTO_M_EN_SHIFT            (8U)
#define CRU_AUTOCS_CON3_PDBUS_CRYPTO_M_EN_MASK             (0x1U << CRU_AUTOCS_CON3_PDBUS_CRYPTO_M_EN_SHIFT)            /* 0x00000100 */
#define CRU_AUTOCS_CON3_PDBUS_CLKSEL_OUT_SHIFT             (12U)
#define CRU_AUTOCS_CON3_PDBUS_CLKSEL_OUT_MASK              (0x3U << CRU_AUTOCS_CON3_PDBUS_CLKSEL_OUT_SHIFT)             /* 0x00003000 */
#define CRU_AUTOCS_CON3_PDBUS_CLKSEL_SHIFT                 (14U)
#define CRU_AUTOCS_CON3_PDBUS_CLKSEL_MASK                  (0x3U << CRU_AUTOCS_CON3_PDBUS_CLKSEL_SHIFT)                 /* 0x0000C000 */
/* AUTOCS_CON4 */
#define CRU_AUTOCS_CON4_PDPERI_IDLE_TH_SHIFT               (0U)
#define CRU_AUTOCS_CON4_PDPERI_IDLE_TH_MASK                (0xFFFFU << CRU_AUTOCS_CON4_PDPERI_IDLE_TH_SHIFT)            /* 0x0000FFFF */
#define CRU_AUTOCS_CON4_PDPERI_WAIT_TH_SHIFT               (16U)
#define CRU_AUTOCS_CON4_PDPERI_WAIT_TH_MASK                (0xFFFFU << CRU_AUTOCS_CON4_PDPERI_WAIT_TH_SHIFT)            /* 0xFFFF0000 */
/* AUTOCS_CON5 */
#define CRU_AUTOCS_CON5_PDPERI_SWITCH_EN_SHIFT             (0U)
#define CRU_AUTOCS_CON5_PDPERI_SWITCH_EN_MASK              (0x1U << CRU_AUTOCS_CON5_PDPERI_SWITCH_EN_SHIFT)             /* 0x00000001 */
#define CRU_AUTOCS_CON5_PDPERI_ACLK_EN_SHIFT               (1U)
#define CRU_AUTOCS_CON5_PDPERI_ACLK_EN_MASK                (0x1U << CRU_AUTOCS_CON5_PDPERI_ACLK_EN_SHIFT)               /* 0x00000002 */
#define CRU_AUTOCS_CON5_PDPERI_HCLK_EN_SHIFT               (2U)
#define CRU_AUTOCS_CON5_PDPERI_HCLK_EN_MASK                (0x1U << CRU_AUTOCS_CON5_PDPERI_HCLK_EN_SHIFT)               /* 0x00000004 */
#define CRU_AUTOCS_CON5_PDPERI_CLKSEL_OUT_SHIFT            (12U)
#define CRU_AUTOCS_CON5_PDPERI_CLKSEL_OUT_MASK             (0x3U << CRU_AUTOCS_CON5_PDPERI_CLKSEL_OUT_SHIFT)            /* 0x00003000 */
#define CRU_AUTOCS_CON5_PDPERI_CLKSEL_SHIFT                (14U)
#define CRU_AUTOCS_CON5_PDPERI_CLKSEL_MASK                 (0x3U << CRU_AUTOCS_CON5_PDPERI_CLKSEL_SHIFT)                /* 0x0000C000 */
/* AUTOCS_CON6 */
#define CRU_AUTOCS_CON6_PDDDR_IDLE_TH_SHIFT                (0U)
#define CRU_AUTOCS_CON6_PDDDR_IDLE_TH_MASK                 (0xFFFFU << CRU_AUTOCS_CON6_PDDDR_IDLE_TH_SHIFT)             /* 0x0000FFFF */
#define CRU_AUTOCS_CON6_PDDDR_WAIT_TH_SHIFT                (16U)
#define CRU_AUTOCS_CON6_PDDDR_WAIT_TH_MASK                 (0xFFFFU << CRU_AUTOCS_CON6_PDDDR_WAIT_TH_SHIFT)             /* 0xFFFF0000 */
/* AUTOCS_CON7 */
#define CRU_AUTOCS_CON7_PDDDR_SWITCH_EN_SHIFT              (0U)
#define CRU_AUTOCS_CON7_PDDDR_SWITCH_EN_MASK               (0x1U << CRU_AUTOCS_CON7_PDDDR_SWITCH_EN_SHIFT)              /* 0x00000001 */
#define CRU_AUTOCS_CON7_PDDDR_CLKSEL_OUT_SHIFT             (12U)
#define CRU_AUTOCS_CON7_PDDDR_CLKSEL_OUT_MASK              (0x3U << CRU_AUTOCS_CON7_PDDDR_CLKSEL_OUT_SHIFT)             /* 0x00003000 */
#define CRU_AUTOCS_CON7_PDDDR_CLKSEL_SHIFT                 (14U)
#define CRU_AUTOCS_CON7_PDDDR_CLKSEL_MASK                  (0x3U << CRU_AUTOCS_CON7_PDDDR_CLKSEL_SHIFT)                 /* 0x0000C000 */
/* AUTOCS_CON8 */
#define CRU_AUTOCS_CON8_PDIMEM_IDLE_TH_SHIFT               (0U)
#define CRU_AUTOCS_CON8_PDIMEM_IDLE_TH_MASK                (0xFFFFU << CRU_AUTOCS_CON8_PDIMEM_IDLE_TH_SHIFT)            /* 0x0000FFFF */
#define CRU_AUTOCS_CON8_PDIMEM_WAIT_TH_SHIFT               (16U)
#define CRU_AUTOCS_CON8_PDIMEM_WAIT_TH_MASK                (0xFFFFU << CRU_AUTOCS_CON8_PDIMEM_WAIT_TH_SHIFT)            /* 0xFFFF0000 */
/* AUTOCS_CON9 */
#define CRU_AUTOCS_CON9_PDIMEM_SWITCH_EN_SHIFT             (0U)
#define CRU_AUTOCS_CON9_PDIMEM_SWITCH_EN_MASK              (0x1U << CRU_AUTOCS_CON9_PDIMEM_SWITCH_EN_SHIFT)             /* 0x00000001 */
#define CRU_AUTOCS_CON9_PDIMEM_CLKSEL_OUT_SHIFT            (12U)
#define CRU_AUTOCS_CON9_PDIMEM_CLKSEL_OUT_MASK             (0x3U << CRU_AUTOCS_CON9_PDIMEM_CLKSEL_OUT_SHIFT)            /* 0x00003000 */
#define CRU_AUTOCS_CON9_PDIMEM_CLKSEL_SHIFT                (14U)
#define CRU_AUTOCS_CON9_PDIMEM_CLKSEL_MASK                 (0x3U << CRU_AUTOCS_CON9_PDIMEM_CLKSEL_SHIFT)                /* 0x0000C000 */
/* PMUPLL_CON0 */
#define CRU_PMUPLL_CON0_FBDIV_SHIFT                        (0U)
#define CRU_PMUPLL_CON0_FBDIV_MASK                         (0xFFFU << CRU_PMUPLL_CON0_FBDIV_SHIFT)                      /* 0x00000FFF */
#define CRU_PMUPLL_CON0_POSTDIV1_SHIFT                     (12U)
#define CRU_PMUPLL_CON0_POSTDIV1_MASK                      (0x7U << CRU_PMUPLL_CON0_POSTDIV1_SHIFT)                     /* 0x00007000 */
#define CRU_PMUPLL_CON0_BYPASS_SHIFT                       (15U)
#define CRU_PMUPLL_CON0_BYPASS_MASK                        (0x1U << CRU_PMUPLL_CON0_BYPASS_SHIFT)                       /* 0x00008000 */
/* PMUPLL_CON1 */
#define CRU_PMUPLL_CON1_REFDIV_SHIFT                       (0U)
#define CRU_PMUPLL_CON1_REFDIV_MASK                        (0x3FU << CRU_PMUPLL_CON1_REFDIV_SHIFT)                      /* 0x0000003F */
#define CRU_PMUPLL_CON1_POSTDIV2_SHIFT                     (6U)
#define CRU_PMUPLL_CON1_POSTDIV2_MASK                      (0x7U << CRU_PMUPLL_CON1_POSTDIV2_SHIFT)                     /* 0x000001C0 */
#define CRU_PMUPLL_CON1_PLL_LOCK_SHIFT                     (10U)
#define CRU_PMUPLL_CON1_PLL_LOCK_MASK                      (0x1U << CRU_PMUPLL_CON1_PLL_LOCK_SHIFT)                     /* 0x00000400 */
#define CRU_PMUPLL_CON1_DSMPD_SHIFT                        (12U)
#define CRU_PMUPLL_CON1_DSMPD_MASK                         (0x1U << CRU_PMUPLL_CON1_DSMPD_SHIFT)                        /* 0x00001000 */
#define CRU_PMUPLL_CON1_PLLPD0_SHIFT                       (13U)
#define CRU_PMUPLL_CON1_PLLPD0_MASK                        (0x1U << CRU_PMUPLL_CON1_PLLPD0_SHIFT)                       /* 0x00002000 */
#define CRU_PMUPLL_CON1_PLLPD1_SHIFT                       (14U)
#define CRU_PMUPLL_CON1_PLLPD1_MASK                        (0x1U << CRU_PMUPLL_CON1_PLLPD1_SHIFT)                       /* 0x00004000 */
#define CRU_PMUPLL_CON1_PLLPDSEL_SHIFT                     (15U)
#define CRU_PMUPLL_CON1_PLLPDSEL_MASK                      (0x1U << CRU_PMUPLL_CON1_PLLPDSEL_SHIFT)                     /* 0x00008000 */
/* PMUPLL_CON2 */
#define CRU_PMUPLL_CON2_FRACDIV_SHIFT                      (0U)
#define CRU_PMUPLL_CON2_FRACDIV_MASK                       (0xFFFFFFU << CRU_PMUPLL_CON2_FRACDIV_SHIFT)                 /* 0x00FFFFFF */
#define CRU_PMUPLL_CON2_DACPD_SHIFT                        (24U)
#define CRU_PMUPLL_CON2_DACPD_MASK                         (0x1U << CRU_PMUPLL_CON2_DACPD_SHIFT)                        /* 0x01000000 */
#define CRU_PMUPLL_CON2_FOUTPOSTDIVPD_SHIFT                (25U)
#define CRU_PMUPLL_CON2_FOUTPOSTDIVPD_MASK                 (0x1U << CRU_PMUPLL_CON2_FOUTPOSTDIVPD_SHIFT)                /* 0x02000000 */
#define CRU_PMUPLL_CON2_FOUTVCOPD_SHIFT                    (26U)
#define CRU_PMUPLL_CON2_FOUTVCOPD_MASK                     (0x1U << CRU_PMUPLL_CON2_FOUTVCOPD_SHIFT)                    /* 0x04000000 */
#define CRU_PMUPLL_CON2_FOUT4PHASEPD_SHIFT                 (27U)
#define CRU_PMUPLL_CON2_FOUT4PHASEPD_MASK                  (0x1U << CRU_PMUPLL_CON2_FOUT4PHASEPD_SHIFT)                 /* 0x08000000 */
/* PMUPLL_CON3 */
#define CRU_PMUPLL_CON3_SSMOD_BP_SHIFT                     (0U)
#define CRU_PMUPLL_CON3_SSMOD_BP_MASK                      (0x1U << CRU_PMUPLL_CON3_SSMOD_BP_SHIFT)                     /* 0x00000001 */
#define CRU_PMUPLL_CON3_SSMOD_DISABLE_SSCG_SHIFT           (1U)
#define CRU_PMUPLL_CON3_SSMOD_DISABLE_SSCG_MASK            (0x1U << CRU_PMUPLL_CON3_SSMOD_DISABLE_SSCG_SHIFT)           /* 0x00000002 */
#define CRU_PMUPLL_CON3_SSMOD_RESET_SHIFT                  (2U)
#define CRU_PMUPLL_CON3_SSMOD_RESET_MASK                   (0x1U << CRU_PMUPLL_CON3_SSMOD_RESET_SHIFT)                  /* 0x00000004 */
#define CRU_PMUPLL_CON3_SSMOD_DOWNSPREAD_SHIFT             (3U)
#define CRU_PMUPLL_CON3_SSMOD_DOWNSPREAD_MASK              (0x1U << CRU_PMUPLL_CON3_SSMOD_DOWNSPREAD_SHIFT)             /* 0x00000008 */
#define CRU_PMUPLL_CON3_SSMOD_DIVVAL_SHIFT                 (4U)
#define CRU_PMUPLL_CON3_SSMOD_DIVVAL_MASK                  (0xFU << CRU_PMUPLL_CON3_SSMOD_DIVVAL_SHIFT)                 /* 0x000000F0 */
#define CRU_PMUPLL_CON3_SSMOD_SPREAD_SHIFT                 (8U)
#define CRU_PMUPLL_CON3_SSMOD_SPREAD_MASK                  (0x1FU << CRU_PMUPLL_CON3_SSMOD_SPREAD_SHIFT)                /* 0x00001F00 */
/* PMUPLL_CON4 */
#define CRU_PMUPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT           (0U)
#define CRU_PMUPLL_CON4_SSMOD_SEL_EXT_WAVE_MASK            (0x1U << CRU_PMUPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT)           /* 0x00000001 */
#define CRU_PMUPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT            (8U)
#define CRU_PMUPLL_CON4_SSMOD_EXT_MAXADDR_MASK             (0xFFU << CRU_PMUPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT)           /* 0x0000FF00 */
/* PMU_MODE */
#define CRU_PMU_MODE_PMUPLL_WORK_MODE_SHIFT                (0U)
#define CRU_PMU_MODE_PMUPLL_WORK_MODE_MASK                 (0x3U << CRU_PMU_MODE_PMUPLL_WORK_MODE_SHIFT)                /* 0x00000003 */
/* PMU_CLKSEL_CON0 */
#define CRU_PMU_CLKSEL_CON0_PCLK_PDPMU_DIV_CON_SHIFT       (0U)
#define CRU_PMU_CLKSEL_CON0_PCLK_PDPMU_DIV_CON_MASK        (0x1FU << CRU_PMU_CLKSEL_CON0_PCLK_PDPMU_DIV_CON_SHIFT)      /* 0x0000001F */
#define CRU_PMU_CLKSEL_CON0_XIN_OSC0_FUNC_DIV_CON_SHIFT    (8U)
#define CRU_PMU_CLKSEL_CON0_XIN_OSC0_FUNC_DIV_CON_MASK     (0x1FU << CRU_PMU_CLKSEL_CON0_XIN_OSC0_FUNC_DIV_CON_SHIFT)   /* 0x00001F00 */
#define CRU_PMU_CLKSEL_CON0_CLK_RTC32K_CLK_SEL_SHIFT       (14U)
#define CRU_PMU_CLKSEL_CON0_CLK_RTC32K_CLK_SEL_MASK        (0x3U << CRU_PMU_CLKSEL_CON0_CLK_RTC32K_CLK_SEL_SHIFT)       /* 0x0000C000 */
/* PMU_CLKSEL_CON1 */
#define CRU_PMU_CLKSEL_CON1_CLK_DIV32P768KHZ_DIV_CON_SHIFT (0U)
#define CRU_PMU_CLKSEL_CON1_CLK_DIV32P768KHZ_DIV_CON_MASK  (0xFFFFFFFFU << CRU_PMU_CLKSEL_CON1_CLK_DIV32P768KHZ_DIV_CON_SHIFT) /* 0xFFFFFFFF */
/* PMU_CLKSEL_CON2 */
#define CRU_PMU_CLKSEL_CON2_CLK_REF24M_DIV_CON_SHIFT       (0U)
#define CRU_PMU_CLKSEL_CON2_CLK_REF24M_DIV_CON_MASK        (0x3FU << CRU_PMU_CLKSEL_CON2_CLK_REF24M_DIV_CON_SHIFT)      /* 0x0000003F */
#define CRU_PMU_CLKSEL_CON2_USBPHY_REF_SEL_SHIFT           (6U)
#define CRU_PMU_CLKSEL_CON2_USBPHY_REF_SEL_MASK            (0x1U << CRU_PMU_CLKSEL_CON2_USBPHY_REF_SEL_SHIFT)           /* 0x00000040 */
#define CRU_PMU_CLKSEL_CON2_MIPIDSIPHY_REF_SEL_SHIFT       (7U)
#define CRU_PMU_CLKSEL_CON2_MIPIDSIPHY_REF_SEL_MASK        (0x1U << CRU_PMU_CLKSEL_CON2_MIPIDSIPHY_REF_SEL_SHIFT)       /* 0x00000080 */
#define CRU_PMU_CLKSEL_CON2_CLK_WIFI_DIV_CON_SHIFT         (8U)
#define CRU_PMU_CLKSEL_CON2_CLK_WIFI_DIV_CON_MASK          (0x3FU << CRU_PMU_CLKSEL_CON2_CLK_WIFI_DIV_CON_SHIFT)        /* 0x00003F00 */
#define CRU_PMU_CLKSEL_CON2_CLK_WIFI_SEL_SHIFT             (15U)
#define CRU_PMU_CLKSEL_CON2_CLK_WIFI_SEL_MASK              (0x1U << CRU_PMU_CLKSEL_CON2_CLK_WIFI_SEL_SHIFT)             /* 0x00008000 */
/* PMU_CLKSEL_CON3 */
#define CRU_PMU_CLKSEL_CON3_CLK_UART0_DIV_CON_SHIFT        (0U)
#define CRU_PMU_CLKSEL_CON3_CLK_UART0_DIV_CON_MASK         (0x7FU << CRU_PMU_CLKSEL_CON3_CLK_UART0_DIV_CON_SHIFT)       /* 0x0000007F */
#define CRU_PMU_CLKSEL_CON3_CLK_UART0_PLL_SEL_SHIFT        (14U)
#define CRU_PMU_CLKSEL_CON3_CLK_UART0_PLL_SEL_MASK         (0x3U << CRU_PMU_CLKSEL_CON3_CLK_UART0_PLL_SEL_SHIFT)        /* 0x0000C000 */
/* PMU_CLKSEL_CON4 */
#define CRU_PMU_CLKSEL_CON4_CLK_UART0_DIVNP5_DIV_CON_SHIFT (0U)
#define CRU_PMU_CLKSEL_CON4_CLK_UART0_DIVNP5_DIV_CON_MASK  (0x7FU << CRU_PMU_CLKSEL_CON4_CLK_UART0_DIVNP5_DIV_CON_SHIFT) /* 0x0000007F */
#define CRU_PMU_CLKSEL_CON4_CLK_UART0_SEL_SHIFT            (14U)
#define CRU_PMU_CLKSEL_CON4_CLK_UART0_SEL_MASK             (0x3U << CRU_PMU_CLKSEL_CON4_CLK_UART0_SEL_SHIFT)            /* 0x0000C000 */
/* PMU_CLKSEL_CON5 */
#define CRU_PMU_CLKSEL_CON5_CLK_UART0_FRAC_DIV_CON_SHIFT   (0U)
#define CRU_PMU_CLKSEL_CON5_CLK_UART0_FRAC_DIV_CON_MASK    (0xFFFFFFFFU << CRU_PMU_CLKSEL_CON5_CLK_UART0_FRAC_DIV_CON_SHIFT) /* 0xFFFFFFFF */
/* PMU_CLKSEL_CON6 */
#define CRU_PMU_CLKSEL_CON6_DBCLK_GPIO0_DIV_CON_SHIFT      (0U)
#define CRU_PMU_CLKSEL_CON6_DBCLK_GPIO0_DIV_CON_MASK       (0x7FFU << CRU_PMU_CLKSEL_CON6_DBCLK_GPIO0_DIV_CON_SHIFT)    /* 0x000007FF */
#define CRU_PMU_CLKSEL_CON6_DBCLK_GPIO0_PLL_SEL_SHIFT      (15U)
#define CRU_PMU_CLKSEL_CON6_DBCLK_GPIO0_PLL_SEL_MASK       (0x1U << CRU_PMU_CLKSEL_CON6_DBCLK_GPIO0_PLL_SEL_SHIFT)      /* 0x00008000 */
/* PMU_CLKSEL_CON7 */
#define CRU_PMU_CLKSEL_CON7_CLK_PCIEPHY_REF_DIV_CON_SHIFT  (0U)
#define CRU_PMU_CLKSEL_CON7_CLK_PCIEPHY_REF_DIV_CON_MASK   (0x3U << CRU_PMU_CLKSEL_CON7_CLK_PCIEPHY_REF_DIV_CON_SHIFT)  /* 0x00000003 */
#define CRU_PMU_CLKSEL_CON7_CLK_PCIEPHY_REF_CLK_SEL_SHIFT  (4U)
#define CRU_PMU_CLKSEL_CON7_CLK_PCIEPHY_REF_CLK_SEL_MASK   (0x1U << CRU_PMU_CLKSEL_CON7_CLK_PCIEPHY_REF_CLK_SEL_SHIFT)  /* 0x00000010 */
#define CRU_PMU_CLKSEL_CON7_CLK_I2C0_DIV_CON_SHIFT         (8U)
#define CRU_PMU_CLKSEL_CON7_CLK_I2C0_DIV_CON_MASK          (0x7FU << CRU_PMU_CLKSEL_CON7_CLK_I2C0_DIV_CON_SHIFT)        /* 0x00007F00 */
#define CRU_PMU_CLKSEL_CON7_CLK_I2C0_PLL_SEL_SHIFT         (15U)
#define CRU_PMU_CLKSEL_CON7_CLK_I2C0_PLL_SEL_MASK          (0x1U << CRU_PMU_CLKSEL_CON7_CLK_I2C0_PLL_SEL_SHIFT)         /* 0x00008000 */
/* PMU_CLKGATE_CON0 */
#define CRU_PMU_CLKGATE_CON0_PCLK_PDPMU_PLL_CLK_EN_SHIFT   (0U)
#define CRU_PMU_CLKGATE_CON0_PCLK_PDPMU_PLL_CLK_EN_MASK    (0x1U << CRU_PMU_CLKGATE_CON0_PCLK_PDPMU_PLL_CLK_EN_SHIFT)   /* 0x00000001 */
#define CRU_PMU_CLKGATE_CON0_PCLK_PMU_NIU_CLK_EN_SHIFT     (1U)
#define CRU_PMU_CLKGATE_CON0_PCLK_PMU_NIU_CLK_EN_MASK      (0x1U << CRU_PMU_CLKGATE_CON0_PCLK_PMU_NIU_CLK_EN_SHIFT)     /* 0x00000002 */
#define CRU_PMU_CLKGATE_CON0_PCLK_PMU_SGRF_CLK_EN_SHIFT    (2U)
#define CRU_PMU_CLKGATE_CON0_PCLK_PMU_SGRF_CLK_EN_MASK     (0x1U << CRU_PMU_CLKGATE_CON0_PCLK_PMU_SGRF_CLK_EN_SHIFT)    /* 0x00000004 */
#define CRU_PMU_CLKGATE_CON0_PCLK_PMU_GRF_CLK_EN_SHIFT     (3U)
#define CRU_PMU_CLKGATE_CON0_PCLK_PMU_GRF_CLK_EN_MASK      (0x1U << CRU_PMU_CLKGATE_CON0_PCLK_PMU_GRF_CLK_EN_SHIFT)     /* 0x00000008 */
#define CRU_PMU_CLKGATE_CON0_PCLK_PMU_PMU_CLK_EN_SHIFT     (4U)
#define CRU_PMU_CLKGATE_CON0_PCLK_PMU_PMU_CLK_EN_MASK      (0x1U << CRU_PMU_CLKGATE_CON0_PCLK_PMU_PMU_CLK_EN_SHIFT)     /* 0x00000010 */
#define CRU_PMU_CLKGATE_CON0_PCLK_PMU_MEM_CLK_EN_SHIFT     (5U)
#define CRU_PMU_CLKGATE_CON0_PCLK_PMU_MEM_CLK_EN_MASK      (0x1U << CRU_PMU_CLKGATE_CON0_PCLK_PMU_MEM_CLK_EN_SHIFT)     /* 0x00000020 */
#define CRU_PMU_CLKGATE_CON0_PCLK_PMU_GPIO0_CLK_EN_SHIFT   (6U)
#define CRU_PMU_CLKGATE_CON0_PCLK_PMU_GPIO0_CLK_EN_MASK    (0x1U << CRU_PMU_CLKGATE_CON0_PCLK_PMU_GPIO0_CLK_EN_SHIFT)   /* 0x00000040 */
#define CRU_PMU_CLKGATE_CON0_PCLK_PMU_UART0_CLK_EN_SHIFT   (7U)
#define CRU_PMU_CLKGATE_CON0_PCLK_PMU_UART0_CLK_EN_MASK    (0x1U << CRU_PMU_CLKGATE_CON0_PCLK_PMU_UART0_CLK_EN_SHIFT)   /* 0x00000080 */
#define CRU_PMU_CLKGATE_CON0_PCLK_PMU_CRU_CLK_EN_SHIFT     (8U)
#define CRU_PMU_CLKGATE_CON0_PCLK_PMU_CRU_CLK_EN_MASK      (0x1U << CRU_PMU_CLKGATE_CON0_PCLK_PMU_CRU_CLK_EN_SHIFT)     /* 0x00000100 */
#define CRU_PMU_CLKGATE_CON0_PCLK_PMU_I2C0_CLK_EN_SHIFT    (9U)
#define CRU_PMU_CLKGATE_CON0_PCLK_PMU_I2C0_CLK_EN_MASK     (0x1U << CRU_PMU_CLKGATE_CON0_PCLK_PMU_I2C0_CLK_EN_SHIFT)    /* 0x00000200 */
#define CRU_PMU_CLKGATE_CON0_XIN_OSC0_FUNC_DIV_SRC_CLK_EN_SHIFT (12U)
#define CRU_PMU_CLKGATE_CON0_XIN_OSC0_FUNC_DIV_SRC_CLK_EN_MASK (0x1U << CRU_PMU_CLKGATE_CON0_XIN_OSC0_FUNC_DIV_SRC_CLK_EN_SHIFT) /* 0x00001000 */
#define CRU_PMU_CLKGATE_CON0_CLK_DIV32P768KHZ_SRC_CLK_EN_SHIFT (13U)
#define CRU_PMU_CLKGATE_CON0_CLK_DIV32P768KHZ_SRC_CLK_EN_MASK (0x1U << CRU_PMU_CLKGATE_CON0_CLK_DIV32P768KHZ_SRC_CLK_EN_SHIFT) /* 0x00002000 */
#define CRU_PMU_CLKGATE_CON0_CLK_WIFI_PLL_CLK_EN_SHIFT     (14U)
#define CRU_PMU_CLKGATE_CON0_CLK_WIFI_PLL_CLK_EN_MASK      (0x1U << CRU_PMU_CLKGATE_CON0_CLK_WIFI_PLL_CLK_EN_SHIFT)     /* 0x00004000 */
#define CRU_PMU_CLKGATE_CON0_CLK_WIFI_CLK_EN_SHIFT         (15U)
#define CRU_PMU_CLKGATE_CON0_CLK_WIFI_CLK_EN_MASK          (0x1U << CRU_PMU_CLKGATE_CON0_CLK_WIFI_CLK_EN_SHIFT)         /* 0x00008000 */
/* PMU_CLKGATE_CON1 */
#define CRU_PMU_CLKGATE_CON1_CLK_UART0_PMU_PLL_CLK_EN_SHIFT (0U)
#define CRU_PMU_CLKGATE_CON1_CLK_UART0_PMU_PLL_CLK_EN_MASK (0x1U << CRU_PMU_CLKGATE_CON1_CLK_UART0_PMU_PLL_CLK_EN_SHIFT) /* 0x00000001 */
#define CRU_PMU_CLKGATE_CON1_CLK_UART0_PMU_DIVNP5_CLK_EN_SHIFT (1U)
#define CRU_PMU_CLKGATE_CON1_CLK_UART0_PMU_DIVNP5_CLK_EN_MASK (0x1U << CRU_PMU_CLKGATE_CON1_CLK_UART0_PMU_DIVNP5_CLK_EN_SHIFT) /* 0x00000002 */
#define CRU_PMU_CLKGATE_CON1_CLK_UART0_PMU_FRAC_CLK_EN_SHIFT (2U)
#define CRU_PMU_CLKGATE_CON1_CLK_UART0_PMU_FRAC_CLK_EN_MASK (0x1U << CRU_PMU_CLKGATE_CON1_CLK_UART0_PMU_FRAC_CLK_EN_SHIFT) /* 0x00000004 */
#define CRU_PMU_CLKGATE_CON1_CLK_UART0_PMU_CLK_EN_SHIFT    (3U)
#define CRU_PMU_CLKGATE_CON1_CLK_UART0_PMU_CLK_EN_MASK     (0x1U << CRU_PMU_CLKGATE_CON1_CLK_UART0_PMU_CLK_EN_SHIFT)    /* 0x00000008 */
#define CRU_PMU_CLKGATE_CON1_CLK_PVTM_PMU_CLK_EN_SHIFT     (4U)
#define CRU_PMU_CLKGATE_CON1_CLK_PVTM_PMU_CLK_EN_MASK      (0x1U << CRU_PMU_CLKGATE_CON1_CLK_PVTM_PMU_CLK_EN_SHIFT)     /* 0x00000010 */
#define CRU_PMU_CLKGATE_CON1_CLK_I2C0_PMU_PLL_CLK_EN_SHIFT (5U)
#define CRU_PMU_CLKGATE_CON1_CLK_I2C0_PMU_PLL_CLK_EN_MASK  (0x1U << CRU_PMU_CLKGATE_CON1_CLK_I2C0_PMU_PLL_CLK_EN_SHIFT) /* 0x00000020 */
#define CRU_PMU_CLKGATE_CON1_DBCLK_GPIO0_PMU_PLL_CLK_EN_SHIFT (6U)
#define CRU_PMU_CLKGATE_CON1_DBCLK_GPIO0_PMU_PLL_CLK_EN_MASK (0x1U << CRU_PMU_CLKGATE_CON1_DBCLK_GPIO0_PMU_PLL_CLK_EN_SHIFT) /* 0x00000040 */
#define CRU_PMU_CLKGATE_CON1_CLK_REF24M_PLL_CLK_EN_SHIFT   (8U)
#define CRU_PMU_CLKGATE_CON1_CLK_REF24M_PLL_CLK_EN_MASK    (0x1U << CRU_PMU_CLKGATE_CON1_CLK_REF24M_PLL_CLK_EN_SHIFT)   /* 0x00000100 */
#define CRU_PMU_CLKGATE_CON1_USBPHY_REF_CLK_EN_SHIFT       (9U)
#define CRU_PMU_CLKGATE_CON1_USBPHY_REF_CLK_EN_MASK        (0x1U << CRU_PMU_CLKGATE_CON1_USBPHY_REF_CLK_EN_SHIFT)       /* 0x00000200 */
#define CRU_PMU_CLKGATE_CON1_MIPIDSIPHY_REF_CCLK_EN_SHIFT  (10U)
#define CRU_PMU_CLKGATE_CON1_MIPIDSIPHY_REF_CCLK_EN_MASK   (0x1U << CRU_PMU_CLKGATE_CON1_MIPIDSIPHY_REF_CCLK_EN_SHIFT)  /* 0x00000400 */
#define CRU_PMU_CLKGATE_CON1_CLK_PCIEPHY_REF_DIV_CON_SHIFT (11U)
#define CRU_PMU_CLKGATE_CON1_CLK_PCIEPHY_REF_DIV_CON_MASK  (0x1U << CRU_PMU_CLKGATE_CON1_CLK_PCIEPHY_REF_DIV_CON_SHIFT) /* 0x00000800 */
#define CRU_PMU_CLKGATE_CON1_CLK_PCIEPHY_REF_CLK_EN_SHIFT  (12U)
#define CRU_PMU_CLKGATE_CON1_CLK_PCIEPHY_REF_CLK_EN_MASK   (0x1U << CRU_PMU_CLKGATE_CON1_CLK_PCIEPHY_REF_CLK_EN_SHIFT)  /* 0x00001000 */
/* PMU_AUTOCS_CON0 */
#define CRU_PMU_AUTOCS_CON0_PDPMU_IDLE_TH_SHIFT            (0U)
#define CRU_PMU_AUTOCS_CON0_PDPMU_IDLE_TH_MASK             (0xFFFFU << CRU_PMU_AUTOCS_CON0_PDPMU_IDLE_TH_SHIFT)         /* 0x0000FFFF */
#define CRU_PMU_AUTOCS_CON0_PDPMU_WAIT_TH_SHIFT            (16U)
#define CRU_PMU_AUTOCS_CON0_PDPMU_WAIT_TH_MASK             (0xFFFFU << CRU_PMU_AUTOCS_CON0_PDPMU_WAIT_TH_SHIFT)         /* 0xFFFF0000 */
/* PMU_AUTOCS_CON1 */
#define CRU_PMU_AUTOCS_CON1_PDPMU_SWITCH_EN_SHIFT          (0U)
#define CRU_PMU_AUTOCS_CON1_PDPMU_SWITCH_EN_MASK           (0x1U << CRU_PMU_AUTOCS_CON1_PDPMU_SWITCH_EN_SHIFT)          /* 0x00000001 */
#define CRU_PMU_AUTOCS_CON1_PDPMU_CLKSEL_OUT_SHIFT         (12U)
#define CRU_PMU_AUTOCS_CON1_PDPMU_CLKSEL_OUT_MASK          (0x3U << CRU_PMU_AUTOCS_CON1_PDPMU_CLKSEL_OUT_SHIFT)         /* 0x00003000 */
#define CRU_PMU_AUTOCS_CON1_PDPMU_CLKSEL_SHIFT             (14U)
#define CRU_PMU_AUTOCS_CON1_PDPMU_CLKSEL_MASK              (0x3U << CRU_PMU_AUTOCS_CON1_PDPMU_CLKSEL_SHIFT)             /* 0x0000C000 */
/****************************************EFUSE_NS****************************************/
/* MOD */
#define EFUSE_NS_MOD_WORK_MOD_SHIFT                        (0U)
#define EFUSE_NS_MOD_WORK_MOD_MASK                         (0x1U << EFUSE_NS_MOD_WORK_MOD_SHIFT)                        /* 0x00000001 */
#define EFUSE_NS_MOD_CSB_POL_SHIFT                         (1U)
#define EFUSE_NS_MOD_CSB_POL_MASK                          (0x1U << EFUSE_NS_MOD_CSB_POL_SHIFT)                         /* 0x00000002 */
#define EFUSE_NS_MOD_PGENB_POL_SHIFT                       (2U)
#define EFUSE_NS_MOD_PGENB_POL_MASK                        (0x1U << EFUSE_NS_MOD_PGENB_POL_SHIFT)                       /* 0x00000004 */
#define EFUSE_NS_MOD_LOAD_POL_SHIFT                        (3U)
#define EFUSE_NS_MOD_LOAD_POL_MASK                         (0x1U << EFUSE_NS_MOD_LOAD_POL_SHIFT)                        /* 0x00000008 */
#define EFUSE_NS_MOD_STROBE_POL_SHIFT                      (4U)
#define EFUSE_NS_MOD_STROBE_POL_MASK                       (0x1U << EFUSE_NS_MOD_STROBE_POL_SHIFT)                      /* 0x00000010 */
#define EFUSE_NS_MOD_PG_EN_USER_SHIFT                      (5U)
#define EFUSE_NS_MOD_PG_EN_USER_MASK                       (0x1U << EFUSE_NS_MOD_PG_EN_USER_SHIFT)                      /* 0x00000020 */
#define EFUSE_NS_MOD_RD_ENB_USER_SHIFT                     (6U)
#define EFUSE_NS_MOD_RD_ENB_USER_MASK                      (0x1U << EFUSE_NS_MOD_RD_ENB_USER_SHIFT)                     /* 0x00000040 */
/* RD_MASK */
#define EFUSE_NS_RD_MASK_RD_MASK_SHIFT                     (0U)
#define EFUSE_NS_RD_MASK_RD_MASK_MASK                      (0xFFFFFFFFU << EFUSE_NS_RD_MASK_RD_MASK_SHIFT)              /* 0xFFFFFFFF */
/* PG_MASK */
#define EFUSE_NS_PG_MASK_PG_MASK_SHIFT                     (0U)
#define EFUSE_NS_PG_MASK_PG_MASK_MASK                      (0xFFFFFFFFU << EFUSE_NS_PG_MASK_PG_MASK_SHIFT)              /* 0xFFFFFFFF */
/* INT_CON */
#define EFUSE_NS_INT_CON_FINISH_INT_EN_SHIFT               (0U)
#define EFUSE_NS_INT_CON_FINISH_INT_EN_MASK                (0x1U << EFUSE_NS_INT_CON_FINISH_INT_EN_SHIFT)               /* 0x00000001 */
#define EFUSE_NS_INT_CON_AUTO_RD_MASK_INT_EN_SHIFT         (7U)
#define EFUSE_NS_INT_CON_AUTO_RD_MASK_INT_EN_MASK          (0x1U << EFUSE_NS_INT_CON_AUTO_RD_MASK_INT_EN_SHIFT)         /* 0x00000080 */
#define EFUSE_NS_INT_CON_AUTO_PG_MASK_INT_EN_SHIFT         (8U)
#define EFUSE_NS_INT_CON_AUTO_PG_MASK_INT_EN_MASK          (0x1U << EFUSE_NS_INT_CON_AUTO_PG_MASK_INT_EN_SHIFT)         /* 0x00000100 */
#define EFUSE_NS_INT_CON_USER_RD_MASK_INT_EN_SHIFT         (11U)
#define EFUSE_NS_INT_CON_USER_RD_MASK_INT_EN_MASK          (0x1U << EFUSE_NS_INT_CON_USER_RD_MASK_INT_EN_SHIFT)         /* 0x00000800 */
#define EFUSE_NS_INT_CON_USER_PG_MASK_INT_EN_SHIFT         (12U)
#define EFUSE_NS_INT_CON_USER_PG_MASK_INT_EN_MASK          (0x1U << EFUSE_NS_INT_CON_USER_PG_MASK_INT_EN_SHIFT)         /* 0x00001000 */
/* INT_STATUS */
#define EFUSE_NS_INT_STATUS_FINISH_INT_SHIFT               (0U)
#define EFUSE_NS_INT_STATUS_FINISH_INT_MASK                (0x1U << EFUSE_NS_INT_STATUS_FINISH_INT_SHIFT)               /* 0x00000001 */
#define EFUSE_NS_INT_STATUS_AUTO_RD_MASK_INT_SHIFT         (7U)
#define EFUSE_NS_INT_STATUS_AUTO_RD_MASK_INT_MASK          (0x1U << EFUSE_NS_INT_STATUS_AUTO_RD_MASK_INT_SHIFT)         /* 0x00000080 */
#define EFUSE_NS_INT_STATUS_AUTO_PG_MASK_INT_SHIFT         (8U)
#define EFUSE_NS_INT_STATUS_AUTO_PG_MASK_INT_MASK          (0x1U << EFUSE_NS_INT_STATUS_AUTO_PG_MASK_INT_SHIFT)         /* 0x00000100 */
#define EFUSE_NS_INT_STATUS_USER_RD_MASK_INT_SHIFT         (11U)
#define EFUSE_NS_INT_STATUS_USER_RD_MASK_INT_MASK          (0x1U << EFUSE_NS_INT_STATUS_USER_RD_MASK_INT_SHIFT)         /* 0x00000800 */
#define EFUSE_NS_INT_STATUS_USER_PG_MASK_INT_SHIFT         (12U)
#define EFUSE_NS_INT_STATUS_USER_PG_MASK_INT_MASK          (0x1U << EFUSE_NS_INT_STATUS_USER_PG_MASK_INT_SHIFT)         /* 0x00001000 */
/* USER_CTRL */
#define EFUSE_NS_USER_CTRL_CSB_USER_SHIFT                  (0U)
#define EFUSE_NS_USER_CTRL_CSB_USER_MASK                   (0x1U << EFUSE_NS_USER_CTRL_CSB_USER_SHIFT)                  /* 0x00000001 */
#define EFUSE_NS_USER_CTRL_STROBE_USER_SHIFT               (1U)
#define EFUSE_NS_USER_CTRL_STROBE_USER_MASK                (0x1U << EFUSE_NS_USER_CTRL_STROBE_USER_SHIFT)               /* 0x00000002 */
#define EFUSE_NS_USER_CTRL_LOAD_USER_SHIFT                 (2U)
#define EFUSE_NS_USER_CTRL_LOAD_USER_MASK                  (0x1U << EFUSE_NS_USER_CTRL_LOAD_USER_SHIFT)                 /* 0x00000004 */
#define EFUSE_NS_USER_CTRL_PGENB_USER_SHIFT                (3U)
#define EFUSE_NS_USER_CTRL_PGENB_USER_MASK                 (0x1U << EFUSE_NS_USER_CTRL_PGENB_USER_SHIFT)                /* 0x00000008 */
#define EFUSE_NS_USER_CTRL_MR1_SHIFT                       (4U)
#define EFUSE_NS_USER_CTRL_MR1_MASK                        (0x1U << EFUSE_NS_USER_CTRL_MR1_SHIFT)                       /* 0x00000010 */
#define EFUSE_NS_USER_CTRL_MR0_SHIFT                       (5U)
#define EFUSE_NS_USER_CTRL_MR0_MASK                        (0x1U << EFUSE_NS_USER_CTRL_MR0_SHIFT)                       /* 0x00000020 */
#define EFUSE_NS_USER_CTRL_ADDR_USER_SHIFT                 (16U)
#define EFUSE_NS_USER_CTRL_ADDR_USER_MASK                  (0x3FFU << EFUSE_NS_USER_CTRL_ADDR_USER_SHIFT)               /* 0x03FF0000 */
/* DOUT */
#define EFUSE_NS_DOUT_DOUT_SHIFT                           (0U)
#define EFUSE_NS_DOUT_DOUT_MASK                            (0xFFFFFFFFU << EFUSE_NS_DOUT_DOUT_SHIFT)                    /* 0xFFFFFFFF */
/* AUTO_CTRL */
#define EFUSE_NS_AUTO_CTRL_ENB_SHIFT                       (0U)
#define EFUSE_NS_AUTO_CTRL_ENB_MASK                        (0x1U << EFUSE_NS_AUTO_CTRL_ENB_SHIFT)                       /* 0x00000001 */
#define EFUSE_NS_AUTO_CTRL_PG_R_SHIFT                      (1U)
#define EFUSE_NS_AUTO_CTRL_PG_R_MASK                       (0x1U << EFUSE_NS_AUTO_CTRL_PG_R_SHIFT)                      /* 0x00000002 */
#define EFUSE_NS_AUTO_CTRL_ADDR_AUTO_SHIFT                 (16U)
#define EFUSE_NS_AUTO_CTRL_ADDR_AUTO_MASK                  (0x3FFU << EFUSE_NS_AUTO_CTRL_ADDR_AUTO_SHIFT)               /* 0x03FF0000 */
/* T_CSB_P */
#define EFUSE_NS_T_CSB_P_T_CSB_P_L_SHIFT                   (0U)
#define EFUSE_NS_T_CSB_P_T_CSB_P_L_MASK                    (0x7FFU << EFUSE_NS_T_CSB_P_T_CSB_P_L_SHIFT)                 /* 0x000007FF */
#define EFUSE_NS_T_CSB_P_T_CSB_P_S_SHIFT                   (16U)
#define EFUSE_NS_T_CSB_P_T_CSB_P_S_MASK                    (0xFU << EFUSE_NS_T_CSB_P_T_CSB_P_S_SHIFT)                   /* 0x000F0000 */
/* T_PGENB_P */
#define EFUSE_NS_T_PGENB_P_T_PGENB_P_L_SHIFT               (0U)
#define EFUSE_NS_T_PGENB_P_T_PGENB_P_L_MASK                (0x7FFU << EFUSE_NS_T_PGENB_P_T_PGENB_P_L_SHIFT)             /* 0x000007FF */
#define EFUSE_NS_T_PGENB_P_T_PGENB_P_S_SHIFT               (16U)
#define EFUSE_NS_T_PGENB_P_T_PGENB_P_S_MASK                (0xFU << EFUSE_NS_T_PGENB_P_T_PGENB_P_S_SHIFT)               /* 0x000F0000 */
/* T_LOAD_P */
#define EFUSE_NS_T_LOAD_P_T_LOAD_P_L_SHIFT                 (0U)
#define EFUSE_NS_T_LOAD_P_T_LOAD_P_L_MASK                  (0x7FFU << EFUSE_NS_T_LOAD_P_T_LOAD_P_L_SHIFT)               /* 0x000007FF */
#define EFUSE_NS_T_LOAD_P_T_LOAD_P_S_SHIFT                 (16U)
#define EFUSE_NS_T_LOAD_P_T_LOAD_P_S_MASK                  (0xFU << EFUSE_NS_T_LOAD_P_T_LOAD_P_S_SHIFT)                 /* 0x000F0000 */
/* T_ADDR_P */
#define EFUSE_NS_T_ADDR_P_T_ADDR_P_L_SHIFT                 (0U)
#define EFUSE_NS_T_ADDR_P_T_ADDR_P_L_MASK                  (0x7FFU << EFUSE_NS_T_ADDR_P_T_ADDR_P_L_SHIFT)               /* 0x000007FF */
#define EFUSE_NS_T_ADDR_P_T_ADDR_P_S_SHIFT                 (16U)
#define EFUSE_NS_T_ADDR_P_T_ADDR_P_S_MASK                  (0xFU << EFUSE_NS_T_ADDR_P_T_ADDR_P_S_SHIFT)                 /* 0x000F0000 */
/* T_STROBE_P */
#define EFUSE_NS_T_STROBE_P_T_STROBE_P_L_SHIFT             (0U)
#define EFUSE_NS_T_STROBE_P_T_STROBE_P_L_MASK              (0x7FFU << EFUSE_NS_T_STROBE_P_T_STROBE_P_L_SHIFT)           /* 0x000007FF */
#define EFUSE_NS_T_STROBE_P_T_STROBE_P_S_SHIFT             (16U)
#define EFUSE_NS_T_STROBE_P_T_STROBE_P_S_MASK              (0xFFU << EFUSE_NS_T_STROBE_P_T_STROBE_P_S_SHIFT)            /* 0x00FF0000 */
/* T_CSB_R */
#define EFUSE_NS_T_CSB_R_T_CSB_R_L_SHIFT                   (0U)
#define EFUSE_NS_T_CSB_R_T_CSB_R_L_MASK                    (0x3FFU << EFUSE_NS_T_CSB_R_T_CSB_R_L_SHIFT)                 /* 0x000003FF */
#define EFUSE_NS_T_CSB_R_T_CSB_R_S_SHIFT                   (16U)
#define EFUSE_NS_T_CSB_R_T_CSB_R_S_MASK                    (0xFU << EFUSE_NS_T_CSB_R_T_CSB_R_S_SHIFT)                   /* 0x000F0000 */
/* T_PGENB_R */
#define EFUSE_NS_T_PGENB_R_T_PGENB_R_L_SHIFT               (0U)
#define EFUSE_NS_T_PGENB_R_T_PGENB_R_L_MASK                (0x3FFU << EFUSE_NS_T_PGENB_R_T_PGENB_R_L_SHIFT)             /* 0x000003FF */
#define EFUSE_NS_T_PGENB_R_T_PGENB_R_S_SHIFT               (16U)
#define EFUSE_NS_T_PGENB_R_T_PGENB_R_S_MASK                (0xFU << EFUSE_NS_T_PGENB_R_T_PGENB_R_S_SHIFT)               /* 0x000F0000 */
/* T_LOAD_R */
#define EFUSE_NS_T_LOAD_R_T_LOAD_R_L_SHIFT                 (0U)
#define EFUSE_NS_T_LOAD_R_T_LOAD_R_L_MASK                  (0x3FFU << EFUSE_NS_T_LOAD_R_T_LOAD_R_L_SHIFT)               /* 0x000003FF */
#define EFUSE_NS_T_LOAD_R_T_LOAD_R_S_SHIFT                 (16U)
#define EFUSE_NS_T_LOAD_R_T_LOAD_R_S_MASK                  (0xFU << EFUSE_NS_T_LOAD_R_T_LOAD_R_S_SHIFT)                 /* 0x000F0000 */
/* T_ADDR_R */
#define EFUSE_NS_T_ADDR_R_T_ADDR_R_L_SHIFT                 (0U)
#define EFUSE_NS_T_ADDR_R_T_ADDR_R_L_MASK                  (0x3FFU << EFUSE_NS_T_ADDR_R_T_ADDR_R_L_SHIFT)               /* 0x000003FF */
#define EFUSE_NS_T_ADDR_R_T_ADDR_R_S_SHIFT                 (16U)
#define EFUSE_NS_T_ADDR_R_T_ADDR_R_S_MASK                  (0xFU << EFUSE_NS_T_ADDR_R_T_ADDR_R_S_SHIFT)                 /* 0x000F0000 */
/* T_STROBE_R */
#define EFUSE_NS_T_STROBE_R_T_STROBE_R_L_SHIFT             (0U)
#define EFUSE_NS_T_STROBE_R_T_STROBE_R_L_MASK              (0x3FFU << EFUSE_NS_T_STROBE_R_T_STROBE_R_L_SHIFT)           /* 0x000003FF */
#define EFUSE_NS_T_STROBE_R_T_STROBE_R_S_SHIFT             (16U)
#define EFUSE_NS_T_STROBE_R_T_STROBE_R_S_MASK              (0xFU << EFUSE_NS_T_STROBE_R_T_STROBE_R_S_SHIFT)             /* 0x000F0000 */
/* REVISION */
#define EFUSE_NS_REVISION_REVISION_SHIFT                   (0U)
#define EFUSE_NS_REVISION_REVISION_MASK                    (0xFFU << EFUSE_NS_REVISION_REVISION_SHIFT)                  /* 0x000000FF */
/****************************************EFUSE_S*****************************************/
/* MOD */
#define EFUSE_S_MOD_WORK_MOD_SHIFT                         (0U)
#define EFUSE_S_MOD_WORK_MOD_MASK                          (0x1U << EFUSE_S_MOD_WORK_MOD_SHIFT)                         /* 0x00000001 */
#define EFUSE_S_MOD_CSB_POL_SHIFT                          (1U)
#define EFUSE_S_MOD_CSB_POL_MASK                           (0x1U << EFUSE_S_MOD_CSB_POL_SHIFT)                          /* 0x00000002 */
#define EFUSE_S_MOD_PGENB_POL_SHIFT                        (2U)
#define EFUSE_S_MOD_PGENB_POL_MASK                         (0x1U << EFUSE_S_MOD_PGENB_POL_SHIFT)                        /* 0x00000004 */
#define EFUSE_S_MOD_LOAD_POL_SHIFT                         (3U)
#define EFUSE_S_MOD_LOAD_POL_MASK                          (0x1U << EFUSE_S_MOD_LOAD_POL_SHIFT)                         /* 0x00000008 */
#define EFUSE_S_MOD_STROBE_POL_SHIFT                       (4U)
#define EFUSE_S_MOD_STROBE_POL_MASK                        (0x1U << EFUSE_S_MOD_STROBE_POL_SHIFT)                       /* 0x00000010 */
#define EFUSE_S_MOD_PG_EN_USER_SHIFT                       (5U)
#define EFUSE_S_MOD_PG_EN_USER_MASK                        (0x1U << EFUSE_S_MOD_PG_EN_USER_SHIFT)                       /* 0x00000020 */
#define EFUSE_S_MOD_RD_ENB_USER_SHIFT                      (6U)
#define EFUSE_S_MOD_RD_ENB_USER_MASK                       (0x1U << EFUSE_S_MOD_RD_ENB_USER_SHIFT)                      /* 0x00000040 */
/* RD_MASK */
#define EFUSE_S_RD_MASK_RD_MASK_SHIFT                      (0U)
#define EFUSE_S_RD_MASK_RD_MASK_MASK                       (0xFFFFFFFFU << EFUSE_S_RD_MASK_RD_MASK_SHIFT)               /* 0xFFFFFFFF */
/* PG_MASK */
#define EFUSE_S_PG_MASK_PG_MASK_SHIFT                      (0U)
#define EFUSE_S_PG_MASK_PG_MASK_MASK                       (0xFFFFFFFFU << EFUSE_S_PG_MASK_PG_MASK_SHIFT)               /* 0xFFFFFFFF */
/* INT_CON */
#define EFUSE_S_INT_CON_FINISH_INT_EN_SHIFT                (0U)
#define EFUSE_S_INT_CON_FINISH_INT_EN_MASK                 (0x1U << EFUSE_S_INT_CON_FINISH_INT_EN_SHIFT)                /* 0x00000001 */
#define EFUSE_S_INT_CON_AUTO_RD_MASK_INT_EN_SHIFT          (7U)
#define EFUSE_S_INT_CON_AUTO_RD_MASK_INT_EN_MASK           (0x1U << EFUSE_S_INT_CON_AUTO_RD_MASK_INT_EN_SHIFT)          /* 0x00000080 */
#define EFUSE_S_INT_CON_AUTO_PG_MASK_INT_EN_SHIFT          (8U)
#define EFUSE_S_INT_CON_AUTO_PG_MASK_INT_EN_MASK           (0x1U << EFUSE_S_INT_CON_AUTO_PG_MASK_INT_EN_SHIFT)          /* 0x00000100 */
#define EFUSE_S_INT_CON_USER_RD_MASK_INT_EN_SHIFT          (11U)
#define EFUSE_S_INT_CON_USER_RD_MASK_INT_EN_MASK           (0x1U << EFUSE_S_INT_CON_USER_RD_MASK_INT_EN_SHIFT)          /* 0x00000800 */
#define EFUSE_S_INT_CON_USER_PG_MASK_INT_EN_SHIFT          (12U)
#define EFUSE_S_INT_CON_USER_PG_MASK_INT_EN_MASK           (0x1U << EFUSE_S_INT_CON_USER_PG_MASK_INT_EN_SHIFT)          /* 0x00001000 */
/* INT_STATUS */
#define EFUSE_S_INT_STATUS_FINISH_INT_SHIFT                (0U)
#define EFUSE_S_INT_STATUS_FINISH_INT_MASK                 (0x1U << EFUSE_S_INT_STATUS_FINISH_INT_SHIFT)                /* 0x00000001 */
#define EFUSE_S_INT_STATUS_AUTO_RD_MASK_INT_SHIFT          (7U)
#define EFUSE_S_INT_STATUS_AUTO_RD_MASK_INT_MASK           (0x1U << EFUSE_S_INT_STATUS_AUTO_RD_MASK_INT_SHIFT)          /* 0x00000080 */
#define EFUSE_S_INT_STATUS_AUTO_PG_MASK_INT_SHIFT          (8U)
#define EFUSE_S_INT_STATUS_AUTO_PG_MASK_INT_MASK           (0x1U << EFUSE_S_INT_STATUS_AUTO_PG_MASK_INT_SHIFT)          /* 0x00000100 */
#define EFUSE_S_INT_STATUS_USER_RD_MASK_INT_SHIFT          (11U)
#define EFUSE_S_INT_STATUS_USER_RD_MASK_INT_MASK           (0x1U << EFUSE_S_INT_STATUS_USER_RD_MASK_INT_SHIFT)          /* 0x00000800 */
#define EFUSE_S_INT_STATUS_USER_PG_MASK_INT_SHIFT          (12U)
#define EFUSE_S_INT_STATUS_USER_PG_MASK_INT_MASK           (0x1U << EFUSE_S_INT_STATUS_USER_PG_MASK_INT_SHIFT)          /* 0x00001000 */
/* USER_CTRL */
#define EFUSE_S_USER_CTRL_CSB_USER_SHIFT                   (0U)
#define EFUSE_S_USER_CTRL_CSB_USER_MASK                    (0x1U << EFUSE_S_USER_CTRL_CSB_USER_SHIFT)                   /* 0x00000001 */
#define EFUSE_S_USER_CTRL_STROBE_USER_SHIFT                (1U)
#define EFUSE_S_USER_CTRL_STROBE_USER_MASK                 (0x1U << EFUSE_S_USER_CTRL_STROBE_USER_SHIFT)                /* 0x00000002 */
#define EFUSE_S_USER_CTRL_LOAD_USER_SHIFT                  (2U)
#define EFUSE_S_USER_CTRL_LOAD_USER_MASK                   (0x1U << EFUSE_S_USER_CTRL_LOAD_USER_SHIFT)                  /* 0x00000004 */
#define EFUSE_S_USER_CTRL_PGENB_USER_SHIFT                 (3U)
#define EFUSE_S_USER_CTRL_PGENB_USER_MASK                  (0x1U << EFUSE_S_USER_CTRL_PGENB_USER_SHIFT)                 /* 0x00000008 */
#define EFUSE_S_USER_CTRL_MR1_SHIFT                        (4U)
#define EFUSE_S_USER_CTRL_MR1_MASK                         (0x1U << EFUSE_S_USER_CTRL_MR1_SHIFT)                        /* 0x00000010 */
#define EFUSE_S_USER_CTRL_MR0_SHIFT                        (5U)
#define EFUSE_S_USER_CTRL_MR0_MASK                         (0x1U << EFUSE_S_USER_CTRL_MR0_SHIFT)                        /* 0x00000020 */
#define EFUSE_S_USER_CTRL_ADDR_USER_SHIFT                  (16U)
#define EFUSE_S_USER_CTRL_ADDR_USER_MASK                   (0x3FFU << EFUSE_S_USER_CTRL_ADDR_USER_SHIFT)                /* 0x03FF0000 */
/* DOUT */
#define EFUSE_S_DOUT_DOUT_SHIFT                            (0U)
#define EFUSE_S_DOUT_DOUT_MASK                             (0xFFFFFFFFU << EFUSE_S_DOUT_DOUT_SHIFT)                     /* 0xFFFFFFFF */
/* AUTO_CTRL */
#define EFUSE_S_AUTO_CTRL_ENB_SHIFT                        (0U)
#define EFUSE_S_AUTO_CTRL_ENB_MASK                         (0x1U << EFUSE_S_AUTO_CTRL_ENB_SHIFT)                        /* 0x00000001 */
#define EFUSE_S_AUTO_CTRL_PG_R_SHIFT                       (1U)
#define EFUSE_S_AUTO_CTRL_PG_R_MASK                        (0x1U << EFUSE_S_AUTO_CTRL_PG_R_SHIFT)                       /* 0x00000002 */
#define EFUSE_S_AUTO_CTRL_ADDR_AUTO_SHIFT                  (16U)
#define EFUSE_S_AUTO_CTRL_ADDR_AUTO_MASK                   (0x3FFU << EFUSE_S_AUTO_CTRL_ADDR_AUTO_SHIFT)                /* 0x03FF0000 */
/* T_CSB_P */
#define EFUSE_S_T_CSB_P_T_CSB_P_L_SHIFT                    (0U)
#define EFUSE_S_T_CSB_P_T_CSB_P_L_MASK                     (0x7FFU << EFUSE_S_T_CSB_P_T_CSB_P_L_SHIFT)                  /* 0x000007FF */
#define EFUSE_S_T_CSB_P_T_CSB_P_S_SHIFT                    (16U)
#define EFUSE_S_T_CSB_P_T_CSB_P_S_MASK                     (0xFU << EFUSE_S_T_CSB_P_T_CSB_P_S_SHIFT)                    /* 0x000F0000 */
/* T_PGENB_P */
#define EFUSE_S_T_PGENB_P_T_PGENB_P_L_SHIFT                (0U)
#define EFUSE_S_T_PGENB_P_T_PGENB_P_L_MASK                 (0x7FFU << EFUSE_S_T_PGENB_P_T_PGENB_P_L_SHIFT)              /* 0x000007FF */
#define EFUSE_S_T_PGENB_P_T_PGENB_P_S_SHIFT                (16U)
#define EFUSE_S_T_PGENB_P_T_PGENB_P_S_MASK                 (0xFU << EFUSE_S_T_PGENB_P_T_PGENB_P_S_SHIFT)                /* 0x000F0000 */
/* T_LOAD_P */
#define EFUSE_S_T_LOAD_P_T_LOAD_P_L_SHIFT                  (0U)
#define EFUSE_S_T_LOAD_P_T_LOAD_P_L_MASK                   (0x7FFU << EFUSE_S_T_LOAD_P_T_LOAD_P_L_SHIFT)                /* 0x000007FF */
#define EFUSE_S_T_LOAD_P_T_LOAD_P_S_SHIFT                  (16U)
#define EFUSE_S_T_LOAD_P_T_LOAD_P_S_MASK                   (0xFU << EFUSE_S_T_LOAD_P_T_LOAD_P_S_SHIFT)                  /* 0x000F0000 */
/* T_ADDR_P */
#define EFUSE_S_T_ADDR_P_T_ADDR_P_L_SHIFT                  (0U)
#define EFUSE_S_T_ADDR_P_T_ADDR_P_L_MASK                   (0x7FFU << EFUSE_S_T_ADDR_P_T_ADDR_P_L_SHIFT)                /* 0x000007FF */
#define EFUSE_S_T_ADDR_P_T_ADDR_P_S_SHIFT                  (16U)
#define EFUSE_S_T_ADDR_P_T_ADDR_P_S_MASK                   (0xFU << EFUSE_S_T_ADDR_P_T_ADDR_P_S_SHIFT)                  /* 0x000F0000 */
/* T_STROBE_P */
#define EFUSE_S_T_STROBE_P_T_STROBE_P_L_SHIFT              (0U)
#define EFUSE_S_T_STROBE_P_T_STROBE_P_L_MASK               (0x7FFU << EFUSE_S_T_STROBE_P_T_STROBE_P_L_SHIFT)            /* 0x000007FF */
#define EFUSE_S_T_STROBE_P_T_STROBE_P_S_SHIFT              (16U)
#define EFUSE_S_T_STROBE_P_T_STROBE_P_S_MASK               (0xFFU << EFUSE_S_T_STROBE_P_T_STROBE_P_S_SHIFT)             /* 0x00FF0000 */
/* T_CSB_R */
#define EFUSE_S_T_CSB_R_T_CSB_R_L_SHIFT                    (0U)
#define EFUSE_S_T_CSB_R_T_CSB_R_L_MASK                     (0x3FFU << EFUSE_S_T_CSB_R_T_CSB_R_L_SHIFT)                  /* 0x000003FF */
#define EFUSE_S_T_CSB_R_T_CSB_R_S_SHIFT                    (16U)
#define EFUSE_S_T_CSB_R_T_CSB_R_S_MASK                     (0xFU << EFUSE_S_T_CSB_R_T_CSB_R_S_SHIFT)                    /* 0x000F0000 */
/* T_PGENB_R */
#define EFUSE_S_T_PGENB_R_T_PGENB_R_L_SHIFT                (0U)
#define EFUSE_S_T_PGENB_R_T_PGENB_R_L_MASK                 (0x3FFU << EFUSE_S_T_PGENB_R_T_PGENB_R_L_SHIFT)              /* 0x000003FF */
#define EFUSE_S_T_PGENB_R_T_PGENB_R_S_SHIFT                (16U)
#define EFUSE_S_T_PGENB_R_T_PGENB_R_S_MASK                 (0xFU << EFUSE_S_T_PGENB_R_T_PGENB_R_S_SHIFT)                /* 0x000F0000 */
/* T_LOAD_R */
#define EFUSE_S_T_LOAD_R_T_LOAD_R_L_SHIFT                  (0U)
#define EFUSE_S_T_LOAD_R_T_LOAD_R_L_MASK                   (0x3FFU << EFUSE_S_T_LOAD_R_T_LOAD_R_L_SHIFT)                /* 0x000003FF */
#define EFUSE_S_T_LOAD_R_T_LOAD_R_S_SHIFT                  (16U)
#define EFUSE_S_T_LOAD_R_T_LOAD_R_S_MASK                   (0xFU << EFUSE_S_T_LOAD_R_T_LOAD_R_S_SHIFT)                  /* 0x000F0000 */
/* T_ADDR_R */
#define EFUSE_S_T_ADDR_R_T_ADDR_R_L_SHIFT                  (0U)
#define EFUSE_S_T_ADDR_R_T_ADDR_R_L_MASK                   (0x3FFU << EFUSE_S_T_ADDR_R_T_ADDR_R_L_SHIFT)                /* 0x000003FF */
#define EFUSE_S_T_ADDR_R_T_ADDR_R_S_SHIFT                  (16U)
#define EFUSE_S_T_ADDR_R_T_ADDR_R_S_MASK                   (0xFU << EFUSE_S_T_ADDR_R_T_ADDR_R_S_SHIFT)                  /* 0x000F0000 */
/* T_STROBE_R */
#define EFUSE_S_T_STROBE_R_T_STROBE_R_L_SHIFT              (0U)
#define EFUSE_S_T_STROBE_R_T_STROBE_R_L_MASK               (0x3FFU << EFUSE_S_T_STROBE_R_T_STROBE_R_L_SHIFT)            /* 0x000003FF */
#define EFUSE_S_T_STROBE_R_T_STROBE_R_S_SHIFT              (16U)
#define EFUSE_S_T_STROBE_R_T_STROBE_R_S_MASK               (0xFU << EFUSE_S_T_STROBE_R_T_STROBE_R_S_SHIFT)              /* 0x000F0000 */
/* REVISION */
#define EFUSE_S_REVISION_REVISION_SHIFT                    (0U)
#define EFUSE_S_REVISION_REVISION_MASK                     (0xFFU << EFUSE_S_REVISION_REVISION_SHIFT)                   /* 0x000000FF */
/******************************************DCF*******************************************/
/* DCF_CTRL */
#define DCF_DCF_CTRL_START_SHIFT                           (0U)
#define DCF_DCF_CTRL_START_MASK                            (0x1U << DCF_DCF_CTRL_START_SHIFT)                           /* 0x00000001 */
#define DCF_DCF_CTRL_TIMEOUT_EN_SHIFT                      (1U)
#define DCF_DCF_CTRL_TIMEOUT_EN_MASK                       (0x1U << DCF_DCF_CTRL_TIMEOUT_EN_SHIFT)                      /* 0x00000002 */
#define DCF_DCF_CTRL_VOP_HW_EN_SHIFT                       (2U)
#define DCF_DCF_CTRL_VOP_HW_EN_MASK                        (0x1U << DCF_DCF_CTRL_VOP_HW_EN_SHIFT)                       /* 0x00000004 */
/* DCF_STATUS */
#define DCF_DCF_STATUS_DCF_IDLE_ST_SHIFT                   (0U)
#define DCF_DCF_STATUS_DCF_IDLE_ST_MASK                    (0x1U << DCF_DCF_STATUS_DCF_IDLE_ST_SHIFT)                   /* 0x00000001 */
#define DCF_DCF_STATUS_DCF_LEVEL_TRIGGER_ST_SHIFT          (1U)
#define DCF_DCF_STATUS_DCF_LEVEL_TRIGGER_ST_MASK           (0x1U << DCF_DCF_STATUS_DCF_LEVEL_TRIGGER_ST_SHIFT)          /* 0x00000002 */
#define DCF_DCF_STATUS_DCF_EDGE_TRIGGER_ST_SHIFT           (2U)
#define DCF_DCF_STATUS_DCF_EDGE_TRIGGER_ST_MASK            (0x1U << DCF_DCF_STATUS_DCF_EDGE_TRIGGER_ST_SHIFT)           /* 0x00000004 */
#define DCF_DCF_STATUS_DCF_TIMEOUT_ST_SHIFT                (3U)
#define DCF_DCF_STATUS_DCF_TIMEOUT_ST_MASK                 (0x1U << DCF_DCF_STATUS_DCF_TIMEOUT_ST_SHIFT)                /* 0x00000008 */
#define DCF_DCF_STATUS_INSTR_ERROR_ST_SHIFT                (4U)
#define DCF_DCF_STATUS_INSTR_ERROR_ST_MASK                 (0x1U << DCF_DCF_STATUS_INSTR_ERROR_ST_SHIFT)                /* 0x00000010 */
#define DCF_DCF_STATUS_DMA_ERROR_ST_SHIFT                  (5U)
#define DCF_DCF_STATUS_DMA_ERROR_ST_MASK                   (0x1U << DCF_DCF_STATUS_DMA_ERROR_ST_SHIFT)                  /* 0x00000020 */
#define DCF_DCF_STATUS_INSTR_DONE_ST_SHIFT                 (6U)
#define DCF_DCF_STATUS_INSTR_DONE_ST_MASK                  (0x1U << DCF_DCF_STATUS_INSTR_DONE_ST_SHIFT)                 /* 0x00000040 */
#define DCF_DCF_STATUS_DMA_DONE_ST_SHIFT                   (7U)
#define DCF_DCF_STATUS_DMA_DONE_ST_MASK                    (0x1U << DCF_DCF_STATUS_DMA_DONE_ST_SHIFT)                   /* 0x00000080 */
/* DCF_ADDR */
#define DCF_DCF_ADDR_ADDR_SHIFT                            (0U)
#define DCF_DCF_ADDR_ADDR_MASK                             (0xFFFFFFFFU << DCF_DCF_ADDR_ADDR_SHIFT)                     /* 0xFFFFFFFF */
/* DCF_ISR */
#define DCF_DCF_ISR_DCF_DONE_SHIFT                         (0U)
#define DCF_DCF_ISR_DCF_DONE_MASK                          (0x1U << DCF_DCF_ISR_DCF_DONE_SHIFT)                         /* 0x00000001 */
#define DCF_DCF_ISR_DCF_ERROR_SHIFT                        (1U)
#define DCF_DCF_ISR_DCF_ERROR_MASK                         (0x1U << DCF_DCF_ISR_DCF_ERROR_SHIFT)                        /* 0x00000002 */
/* DCF_TIMEOUT_CYC */
#define DCF_DCF_TIMEOUT_CYC_TIMEOUT_SHIFT                  (0U)
#define DCF_DCF_TIMEOUT_CYC_TIMEOUT_MASK                   (0xFFFFFFFFU << DCF_DCF_TIMEOUT_CYC_TIMEOUT_SHIFT)           /* 0xFFFFFFFF */
/* DCF_CURR_R0 */
#define DCF_DCF_CURR_R0_CURR_R0_SHIFT                      (0U)
#define DCF_DCF_CURR_R0_CURR_R0_MASK                       (0xFFFFFFFFU << DCF_DCF_CURR_R0_CURR_R0_SHIFT)               /* 0xFFFFFFFF */
/* DCF_CURR_R1 */
#define DCF_DCF_CURR_R1_CURR_R1_SHIFT                      (0U)
#define DCF_DCF_CURR_R1_CURR_R1_MASK                       (0xFFFFFFFFU << DCF_DCF_CURR_R1_CURR_R1_SHIFT)               /* 0xFFFFFFFF */
/* DCF_CMD_COUNTER */
#define DCF_DCF_CMD_COUNTER_CMD_COUNTER_SHIFT              (0U)
#define DCF_DCF_CMD_COUNTER_CMD_COUNTER_MASK               (0xFFFFFFFFU << DCF_DCF_CMD_COUNTER_CMD_COUNTER_SHIFT)       /* 0xFFFFFFFF */
/* DCF_LAST_ADDR1 */
#define DCF_DCF_LAST_ADDR1_LAST_ADDR1_SHIFT                (0U)
#define DCF_DCF_LAST_ADDR1_LAST_ADDR1_MASK                 (0xFFFFFFFFU << DCF_DCF_LAST_ADDR1_LAST_ADDR1_SHIFT)         /* 0xFFFFFFFF */
/* DCF_LAST_ADDR2 */
#define DCF_DCF_LAST_ADDR2_LAST_ADDR2_SHIFT                (0U)
#define DCF_DCF_LAST_ADDR2_LAST_ADDR2_MASK                 (0xFFFFFFFFU << DCF_DCF_LAST_ADDR2_LAST_ADDR2_SHIFT)         /* 0xFFFFFFFF */
/* DCF_LAST_ADDR3 */
#define DCF_DCF_LAST_ADDR3_LAST_ADDR3_SHIFT                (0U)
#define DCF_DCF_LAST_ADDR3_LAST_ADDR3_MASK                 (0xFFFFFFFFU << DCF_DCF_LAST_ADDR3_LAST_ADDR3_SHIFT)         /* 0xFFFFFFFF */
/* DCF_LAST_ADDR4 */
#define DCF_DCF_LAST_ADDR4_LAST_ADDR4_SHIFT                (0U)
#define DCF_DCF_LAST_ADDR4_LAST_ADDR4_MASK                 (0xFFFFFFFFU << DCF_DCF_LAST_ADDR4_LAST_ADDR4_SHIFT)         /* 0xFFFFFFFF */
/******************************************VAD*******************************************/
/* CONTROL */
#define VAD_CONTROL_VAD_EN_SHIFT                           (0U)
#define VAD_CONTROL_VAD_EN_MASK                            (0x1U << VAD_CONTROL_VAD_EN_SHIFT)                           /* 0x00000001 */
#define VAD_CONTROL_SOURCE_SELECT_SHIFT                    (1U)
#define VAD_CONTROL_SOURCE_SELECT_MASK                     (0x7U << VAD_CONTROL_SOURCE_SELECT_SHIFT)                    /* 0x0000000E */
#define VAD_CONTROL_SOURCE_BURST_SHIFT                     (4U)
#define VAD_CONTROL_SOURCE_BURST_MASK                      (0x7U << VAD_CONTROL_SOURCE_BURST_SHIFT)                     /* 0x00000070 */
#define VAD_CONTROL_SOURCE_BURST_NUM_SHIFT                 (7U)
#define VAD_CONTROL_SOURCE_BURST_NUM_MASK                  (0x7U << VAD_CONTROL_SOURCE_BURST_NUM_SHIFT)                 /* 0x00000380 */
#define VAD_CONTROL_INCR_LENGTH_SHIFT                      (10U)
#define VAD_CONTROL_INCR_LENGTH_MASK                       (0xFU << VAD_CONTROL_INCR_LENGTH_SHIFT)                      /* 0x00003C00 */
#define VAD_CONTROL_SOURCE_FIXADDR_EN_SHIFT                (14U)
#define VAD_CONTROL_SOURCE_FIXADDR_EN_MASK                 (0x1U << VAD_CONTROL_SOURCE_FIXADDR_EN_SHIFT)                /* 0x00004000 */
#define VAD_CONTROL_ACODEC_CFG_REG_NUM_SHIFT               (15U)
#define VAD_CONTROL_ACODEC_CFG_REG_NUM_MASK                (0x1FU << VAD_CONTROL_ACODEC_CFG_REG_NUM_SHIFT)              /* 0x000F8000 */
#define VAD_CONTROL_VAD_MODE_SHIFT                         (20U)
#define VAD_CONTROL_VAD_MODE_MASK                          (0x3U << VAD_CONTROL_VAD_MODE_SHIFT)                         /* 0x00300000 */
#define VAD_CONTROL_CONFIG_AFTER_DET_EN_SHIFT              (22U)
#define VAD_CONTROL_CONFIG_AFTER_DET_EN_MASK               (0x1U << VAD_CONTROL_CONFIG_AFTER_DET_EN_SHIFT)              /* 0x00400000 */
#define VAD_CONTROL_VOICE_CHANNEL_NUM_SHIFT                (23U)
#define VAD_CONTROL_VOICE_CHANNEL_NUM_MASK                 (0x7U << VAD_CONTROL_VOICE_CHANNEL_NUM_SHIFT)                /* 0x03800000 */
#define VAD_CONTROL_VOICE_CHANNEL_BITWIDTH_SHIFT           (26U)
#define VAD_CONTROL_VOICE_CHANNEL_BITWIDTH_MASK            (0x1U << VAD_CONTROL_VOICE_CHANNEL_BITWIDTH_SHIFT)           /* 0x04000000 */
#define VAD_CONTROL_VOICE_24BIT_ALIGN_MODE_SHIFT           (27U)
#define VAD_CONTROL_VOICE_24BIT_ALIGN_MODE_MASK            (0x1U << VAD_CONTROL_VOICE_24BIT_ALIGN_MODE_SHIFT)           /* 0x08000000 */
#define VAD_CONTROL_VOICE_24BIT_SAT_SHIFT                  (28U)
#define VAD_CONTROL_VOICE_24BIT_SAT_MASK                   (0x1U << VAD_CONTROL_VOICE_24BIT_SAT_SHIFT)                  /* 0x10000000 */
#define VAD_CONTROL_VAD_DET_CHANNEL_SHIFT                  (29U)
#define VAD_CONTROL_VAD_DET_CHANNEL_MASK                   (0x7U << VAD_CONTROL_VAD_DET_CHANNEL_SHIFT)                  /* 0xE0000000 */
/* VS_ADDR */
#define VAD_VS_ADDR_VS_ADDR_SHIFT                          (0U)
#define VAD_VS_ADDR_VS_ADDR_MASK                           (0xFFFFFFFFU << VAD_VS_ADDR_VS_ADDR_SHIFT)                   /* 0xFFFFFFFF */
/* ACODEC_BASE_ADDR */
#define VAD_ACODEC_BASE_ADDR_ACODEC_BASE_ADDR_SHIFT        (0U)
#define VAD_ACODEC_BASE_ADDR_ACODEC_BASE_ADDR_MASK         (0xFFFFFFFFU << VAD_ACODEC_BASE_ADDR_ACODEC_BASE_ADDR_SHIFT) /* 0xFFFFFFFF */
/* OD_ADDR0 */
#define VAD_OD_ADDR0_OFFSET_ACODEC_ADDR_0_SHIFT            (0U)
#define VAD_OD_ADDR0_OFFSET_ACODEC_ADDR_0_MASK             (0xFFU << VAD_OD_ADDR0_OFFSET_ACODEC_ADDR_0_SHIFT)           /* 0x000000FF */
#define VAD_OD_ADDR0_OFFSET_ACODEC_ADDR_1_SHIFT            (8U)
#define VAD_OD_ADDR0_OFFSET_ACODEC_ADDR_1_MASK             (0xFFU << VAD_OD_ADDR0_OFFSET_ACODEC_ADDR_1_SHIFT)           /* 0x0000FF00 */
#define VAD_OD_ADDR0_OFFSET_ACODEC_ADDR_2_SHIFT            (16U)
#define VAD_OD_ADDR0_OFFSET_ACODEC_ADDR_2_MASK             (0xFFU << VAD_OD_ADDR0_OFFSET_ACODEC_ADDR_2_SHIFT)           /* 0x00FF0000 */
#define VAD_OD_ADDR0_OFFSET_ACODEC_ADDR_3_SHIFT            (24U)
#define VAD_OD_ADDR0_OFFSET_ACODEC_ADDR_3_MASK             (0xFFU << VAD_OD_ADDR0_OFFSET_ACODEC_ADDR_3_SHIFT)           /* 0xFF000000 */
/* OD_ADDR1 */
#define VAD_OD_ADDR1_OFFSET_ACODEC_ADDR_4_SHIFT            (0U)
#define VAD_OD_ADDR1_OFFSET_ACODEC_ADDR_4_MASK             (0xFFU << VAD_OD_ADDR1_OFFSET_ACODEC_ADDR_4_SHIFT)           /* 0x000000FF */
#define VAD_OD_ADDR1_OFFSET_ACODEC_ADDR_5_SHIFT            (8U)
#define VAD_OD_ADDR1_OFFSET_ACODEC_ADDR_5_MASK             (0xFFU << VAD_OD_ADDR1_OFFSET_ACODEC_ADDR_5_SHIFT)           /* 0x0000FF00 */
#define VAD_OD_ADDR1_OFFSET_ACODEC_ADDR_6_SHIFT            (16U)
#define VAD_OD_ADDR1_OFFSET_ACODEC_ADDR_6_MASK             (0xFFU << VAD_OD_ADDR1_OFFSET_ACODEC_ADDR_6_SHIFT)           /* 0x00FF0000 */
#define VAD_OD_ADDR1_OFFSET_ACODEC_ADDR_7_SHIFT            (24U)
#define VAD_OD_ADDR1_OFFSET_ACODEC_ADDR_7_MASK             (0xFFU << VAD_OD_ADDR1_OFFSET_ACODEC_ADDR_7_SHIFT)           /* 0xFF000000 */
/* OD_ADDR2 */
#define VAD_OD_ADDR2_OFFSET_ACODEC_ADDR_8_SHIFT            (0U)
#define VAD_OD_ADDR2_OFFSET_ACODEC_ADDR_8_MASK             (0xFFU << VAD_OD_ADDR2_OFFSET_ACODEC_ADDR_8_SHIFT)           /* 0x000000FF */
#define VAD_OD_ADDR2_OFFSET_ACODEC_ADDR_9_SHIFT            (8U)
#define VAD_OD_ADDR2_OFFSET_ACODEC_ADDR_9_MASK             (0xFFU << VAD_OD_ADDR2_OFFSET_ACODEC_ADDR_9_SHIFT)           /* 0x0000FF00 */
#define VAD_OD_ADDR2_OFFSET_ACODEC_ADDR_10_SHIFT           (16U)
#define VAD_OD_ADDR2_OFFSET_ACODEC_ADDR_10_MASK            (0xFFU << VAD_OD_ADDR2_OFFSET_ACODEC_ADDR_10_SHIFT)          /* 0x00FF0000 */
#define VAD_OD_ADDR2_OFFSET_ACODEC_ADDR_11_SHIFT           (24U)
#define VAD_OD_ADDR2_OFFSET_ACODEC_ADDR_11_MASK            (0xFFU << VAD_OD_ADDR2_OFFSET_ACODEC_ADDR_11_SHIFT)          /* 0xFF000000 */
/* OD_ADDR3 */
#define VAD_OD_ADDR3_OFFSET_ACODEC_ADDR_12_SHIFT           (0U)
#define VAD_OD_ADDR3_OFFSET_ACODEC_ADDR_12_MASK            (0xFFU << VAD_OD_ADDR3_OFFSET_ACODEC_ADDR_12_SHIFT)          /* 0x000000FF */
#define VAD_OD_ADDR3_OFFSET_ACODEC_ADDR_13_SHIFT           (8U)
#define VAD_OD_ADDR3_OFFSET_ACODEC_ADDR_13_MASK            (0xFFU << VAD_OD_ADDR3_OFFSET_ACODEC_ADDR_13_SHIFT)          /* 0x0000FF00 */
#define VAD_OD_ADDR3_OFFSET_ACODEC_ADDR_14_SHIFT           (16U)
#define VAD_OD_ADDR3_OFFSET_ACODEC_ADDR_14_MASK            (0xFFU << VAD_OD_ADDR3_OFFSET_ACODEC_ADDR_14_SHIFT)          /* 0x00FF0000 */
#define VAD_OD_ADDR3_OFFSET_ACODEC_ADDR_15_SHIFT           (24U)
#define VAD_OD_ADDR3_OFFSET_ACODEC_ADDR_15_MASK            (0xFFU << VAD_OD_ADDR3_OFFSET_ACODEC_ADDR_15_SHIFT)          /* 0xFF000000 */
/* OD_ADDR4 */
#define VAD_OD_ADDR4_OFFSET_ACODEC_ADDR_16_SHIFT           (0U)
#define VAD_OD_ADDR4_OFFSET_ACODEC_ADDR_16_MASK            (0xFFU << VAD_OD_ADDR4_OFFSET_ACODEC_ADDR_16_SHIFT)          /* 0x000000FF */
#define VAD_OD_ADDR4_OFFSET_ACODEC_ADDR_17_SHIFT           (8U)
#define VAD_OD_ADDR4_OFFSET_ACODEC_ADDR_17_MASK            (0xFFU << VAD_OD_ADDR4_OFFSET_ACODEC_ADDR_17_SHIFT)          /* 0x0000FF00 */
#define VAD_OD_ADDR4_OFFSET_ACODEC_ADDR_18_SHIFT           (16U)
#define VAD_OD_ADDR4_OFFSET_ACODEC_ADDR_18_MASK            (0xFFU << VAD_OD_ADDR4_OFFSET_ACODEC_ADDR_18_SHIFT)          /* 0x00FF0000 */
#define VAD_OD_ADDR4_OFFSET_ACODEC_ADDR_19_SHIFT           (24U)
#define VAD_OD_ADDR4_OFFSET_ACODEC_ADDR_19_MASK            (0xFFU << VAD_OD_ADDR4_OFFSET_ACODEC_ADDR_19_SHIFT)          /* 0xFF000000 */
/* OD_ADDR5 */
#define VAD_OD_ADDR5_OFFSET_ACODEC_ADDR_20_SHIFT           (0U)
#define VAD_OD_ADDR5_OFFSET_ACODEC_ADDR_20_MASK            (0xFFU << VAD_OD_ADDR5_OFFSET_ACODEC_ADDR_20_SHIFT)          /* 0x000000FF */
#define VAD_OD_ADDR5_OFFSET_ACODEC_ADDR_21_SHIFT           (8U)
#define VAD_OD_ADDR5_OFFSET_ACODEC_ADDR_21_MASK            (0xFFU << VAD_OD_ADDR5_OFFSET_ACODEC_ADDR_21_SHIFT)          /* 0x0000FF00 */
#define VAD_OD_ADDR5_OFFSET_ACODEC_ADDR_22_SHIFT           (16U)
#define VAD_OD_ADDR5_OFFSET_ACODEC_ADDR_22_MASK            (0xFFU << VAD_OD_ADDR5_OFFSET_ACODEC_ADDR_22_SHIFT)          /* 0x00FF0000 */
#define VAD_OD_ADDR5_OFFSET_ACODEC_ADDR_23_SHIFT           (24U)
#define VAD_OD_ADDR5_OFFSET_ACODEC_ADDR_23_MASK            (0xFFU << VAD_OD_ADDR5_OFFSET_ACODEC_ADDR_23_SHIFT)          /* 0xFF000000 */
/* OD_ADDR6 */
#define VAD_OD_ADDR6_OFFSET_ACODEC_ADDR_24_SHIFT           (0U)
#define VAD_OD_ADDR6_OFFSET_ACODEC_ADDR_24_MASK            (0xFFU << VAD_OD_ADDR6_OFFSET_ACODEC_ADDR_24_SHIFT)          /* 0x000000FF */
#define VAD_OD_ADDR6_OFFSET_ACODEC_ADDR_25_SHIFT           (8U)
#define VAD_OD_ADDR6_OFFSET_ACODEC_ADDR_25_MASK            (0xFFU << VAD_OD_ADDR6_OFFSET_ACODEC_ADDR_25_SHIFT)          /* 0x0000FF00 */
#define VAD_OD_ADDR6_OFFSET_ACODEC_ADDR_26_SHIFT           (16U)
#define VAD_OD_ADDR6_OFFSET_ACODEC_ADDR_26_MASK            (0xFFU << VAD_OD_ADDR6_OFFSET_ACODEC_ADDR_26_SHIFT)          /* 0x00FF0000 */
#define VAD_OD_ADDR6_OFFSET_ACODEC_ADDR_27_SHIFT           (24U)
#define VAD_OD_ADDR6_OFFSET_ACODEC_ADDR_27_MASK            (0xFFU << VAD_OD_ADDR6_OFFSET_ACODEC_ADDR_27_SHIFT)          /* 0xFF000000 */
/* OD_ADDR7 */
#define VAD_OD_ADDR7_OFFSET_ACODEC_ADDR_28_SHIFT           (0U)
#define VAD_OD_ADDR7_OFFSET_ACODEC_ADDR_28_MASK            (0xFFU << VAD_OD_ADDR7_OFFSET_ACODEC_ADDR_28_SHIFT)          /* 0x000000FF */
#define VAD_OD_ADDR7_OFFSET_ACODEC_ADDR_29_SHIFT           (8U)
#define VAD_OD_ADDR7_OFFSET_ACODEC_ADDR_29_MASK            (0xFFU << VAD_OD_ADDR7_OFFSET_ACODEC_ADDR_29_SHIFT)          /* 0x0000FF00 */
#define VAD_OD_ADDR7_OFFSET_ACODEC_ADDR_30_SHIFT           (16U)
#define VAD_OD_ADDR7_OFFSET_ACODEC_ADDR_30_MASK            (0xFFU << VAD_OD_ADDR7_OFFSET_ACODEC_ADDR_30_SHIFT)          /* 0x00FF0000 */
#define VAD_OD_ADDR7_OFFSET_ACODEC_ADDR_31_SHIFT           (24U)
#define VAD_OD_ADDR7_OFFSET_ACODEC_ADDR_31_MASK            (0xFFU << VAD_OD_ADDR7_OFFSET_ACODEC_ADDR_31_SHIFT)          /* 0xFF000000 */
/* D_DATA0 */
#define VAD_D_DATA0_ACODEC_DATA_0_SHIFT                    (0U)
#define VAD_D_DATA0_ACODEC_DATA_0_MASK                     (0xFFU << VAD_D_DATA0_ACODEC_DATA_0_SHIFT)                   /* 0x000000FF */
#define VAD_D_DATA0_ACODEC_DATA_1_SHIFT                    (8U)
#define VAD_D_DATA0_ACODEC_DATA_1_MASK                     (0xFFU << VAD_D_DATA0_ACODEC_DATA_1_SHIFT)                   /* 0x0000FF00 */
#define VAD_D_DATA0_ACODEC_DATA_2_SHIFT                    (16U)
#define VAD_D_DATA0_ACODEC_DATA_2_MASK                     (0xFFU << VAD_D_DATA0_ACODEC_DATA_2_SHIFT)                   /* 0x00FF0000 */
#define VAD_D_DATA0_ACODEC_DATA_3_SHIFT                    (24U)
#define VAD_D_DATA0_ACODEC_DATA_3_MASK                     (0xFFU << VAD_D_DATA0_ACODEC_DATA_3_SHIFT)                   /* 0xFF000000 */
/* D_DATA1 */
#define VAD_D_DATA1_ACODEC_DATA_4_SHIFT                    (0U)
#define VAD_D_DATA1_ACODEC_DATA_4_MASK                     (0xFFU << VAD_D_DATA1_ACODEC_DATA_4_SHIFT)                   /* 0x000000FF */
#define VAD_D_DATA1_ACODEC_DATA_5_SHIFT                    (8U)
#define VAD_D_DATA1_ACODEC_DATA_5_MASK                     (0xFFU << VAD_D_DATA1_ACODEC_DATA_5_SHIFT)                   /* 0x0000FF00 */
#define VAD_D_DATA1_ACODEC_DATA_6_SHIFT                    (16U)
#define VAD_D_DATA1_ACODEC_DATA_6_MASK                     (0xFFU << VAD_D_DATA1_ACODEC_DATA_6_SHIFT)                   /* 0x00FF0000 */
#define VAD_D_DATA1_ACODEC_DATA_7_SHIFT                    (24U)
#define VAD_D_DATA1_ACODEC_DATA_7_MASK                     (0xFFU << VAD_D_DATA1_ACODEC_DATA_7_SHIFT)                   /* 0xFF000000 */
/* D_DATA2 */
#define VAD_D_DATA2_ACODEC_DATA_8_SHIFT                    (0U)
#define VAD_D_DATA2_ACODEC_DATA_8_MASK                     (0xFFU << VAD_D_DATA2_ACODEC_DATA_8_SHIFT)                   /* 0x000000FF */
#define VAD_D_DATA2_ACODEC_DATA_9_SHIFT                    (8U)
#define VAD_D_DATA2_ACODEC_DATA_9_MASK                     (0xFFU << VAD_D_DATA2_ACODEC_DATA_9_SHIFT)                   /* 0x0000FF00 */
#define VAD_D_DATA2_ACODEC_DATA_10_SHIFT                   (16U)
#define VAD_D_DATA2_ACODEC_DATA_10_MASK                    (0xFFU << VAD_D_DATA2_ACODEC_DATA_10_SHIFT)                  /* 0x00FF0000 */
#define VAD_D_DATA2_ACODEC_DATA_11_SHIFT                   (24U)
#define VAD_D_DATA2_ACODEC_DATA_11_MASK                    (0xFFU << VAD_D_DATA2_ACODEC_DATA_11_SHIFT)                  /* 0xFF000000 */
/* D_DATA3 */
#define VAD_D_DATA3_ACODEC_DATA_12_SHIFT                   (0U)
#define VAD_D_DATA3_ACODEC_DATA_12_MASK                    (0xFFU << VAD_D_DATA3_ACODEC_DATA_12_SHIFT)                  /* 0x000000FF */
#define VAD_D_DATA3_ACODEC_DATA_13_SHIFT                   (8U)
#define VAD_D_DATA3_ACODEC_DATA_13_MASK                    (0xFFU << VAD_D_DATA3_ACODEC_DATA_13_SHIFT)                  /* 0x0000FF00 */
#define VAD_D_DATA3_ACODEC_DATA_14_SHIFT                   (16U)
#define VAD_D_DATA3_ACODEC_DATA_14_MASK                    (0xFFU << VAD_D_DATA3_ACODEC_DATA_14_SHIFT)                  /* 0x00FF0000 */
#define VAD_D_DATA3_ACODEC_DATA_15_SHIFT                   (24U)
#define VAD_D_DATA3_ACODEC_DATA_15_MASK                    (0xFFU << VAD_D_DATA3_ACODEC_DATA_15_SHIFT)                  /* 0xFF000000 */
/* D_DATA4 */
#define VAD_D_DATA4_ACODEC_DATA_16_SHIFT                   (0U)
#define VAD_D_DATA4_ACODEC_DATA_16_MASK                    (0xFFU << VAD_D_DATA4_ACODEC_DATA_16_SHIFT)                  /* 0x000000FF */
#define VAD_D_DATA4_ACODEC_DATA_17_SHIFT                   (8U)
#define VAD_D_DATA4_ACODEC_DATA_17_MASK                    (0xFFU << VAD_D_DATA4_ACODEC_DATA_17_SHIFT)                  /* 0x0000FF00 */
#define VAD_D_DATA4_ACODEC_DATA_18_SHIFT                   (16U)
#define VAD_D_DATA4_ACODEC_DATA_18_MASK                    (0xFFU << VAD_D_DATA4_ACODEC_DATA_18_SHIFT)                  /* 0x00FF0000 */
#define VAD_D_DATA4_ACODEC_DATA_19_SHIFT                   (24U)
#define VAD_D_DATA4_ACODEC_DATA_19_MASK                    (0xFFU << VAD_D_DATA4_ACODEC_DATA_19_SHIFT)                  /* 0xFF000000 */
/* D_DATA5 */
#define VAD_D_DATA5_ACODEC_DATA_20_SHIFT                   (0U)
#define VAD_D_DATA5_ACODEC_DATA_20_MASK                    (0xFFU << VAD_D_DATA5_ACODEC_DATA_20_SHIFT)                  /* 0x000000FF */
#define VAD_D_DATA5_ACODEC_DATA_21_SHIFT                   (8U)
#define VAD_D_DATA5_ACODEC_DATA_21_MASK                    (0xFFU << VAD_D_DATA5_ACODEC_DATA_21_SHIFT)                  /* 0x0000FF00 */
#define VAD_D_DATA5_ACODEC_DATA_22_SHIFT                   (16U)
#define VAD_D_DATA5_ACODEC_DATA_22_MASK                    (0xFFU << VAD_D_DATA5_ACODEC_DATA_22_SHIFT)                  /* 0x00FF0000 */
#define VAD_D_DATA5_ACODEC_DATA_23_SHIFT                   (24U)
#define VAD_D_DATA5_ACODEC_DATA_23_MASK                    (0xFFU << VAD_D_DATA5_ACODEC_DATA_23_SHIFT)                  /* 0xFF000000 */
/* D_DATA6 */
#define VAD_D_DATA6_ACODEC_DATA_24_SHIFT                   (0U)
#define VAD_D_DATA6_ACODEC_DATA_24_MASK                    (0xFFU << VAD_D_DATA6_ACODEC_DATA_24_SHIFT)                  /* 0x000000FF */
#define VAD_D_DATA6_ACODEC_DATA_25_SHIFT                   (8U)
#define VAD_D_DATA6_ACODEC_DATA_25_MASK                    (0xFFU << VAD_D_DATA6_ACODEC_DATA_25_SHIFT)                  /* 0x0000FF00 */
#define VAD_D_DATA6_ACODEC_DATA_26_SHIFT                   (16U)
#define VAD_D_DATA6_ACODEC_DATA_26_MASK                    (0xFFU << VAD_D_DATA6_ACODEC_DATA_26_SHIFT)                  /* 0x00FF0000 */
#define VAD_D_DATA6_ACODEC_DATA_27_SHIFT                   (24U)
#define VAD_D_DATA6_ACODEC_DATA_27_MASK                    (0xFFU << VAD_D_DATA6_ACODEC_DATA_27_SHIFT)                  /* 0xFF000000 */
/* D_DATA7 */
#define VAD_D_DATA7_ACODEC_DATA_28_SHIFT                   (0U)
#define VAD_D_DATA7_ACODEC_DATA_28_MASK                    (0xFFU << VAD_D_DATA7_ACODEC_DATA_28_SHIFT)                  /* 0x000000FF */
#define VAD_D_DATA7_ACODEC_DATA_29_SHIFT                   (8U)
#define VAD_D_DATA7_ACODEC_DATA_29_MASK                    (0xFFU << VAD_D_DATA7_ACODEC_DATA_29_SHIFT)                  /* 0x0000FF00 */
#define VAD_D_DATA7_ACODEC_DATA_30_SHIFT                   (16U)
#define VAD_D_DATA7_ACODEC_DATA_30_MASK                    (0xFFU << VAD_D_DATA7_ACODEC_DATA_30_SHIFT)                  /* 0x00FF0000 */
#define VAD_D_DATA7_ACODEC_DATA_31_SHIFT                   (24U)
#define VAD_D_DATA7_ACODEC_DATA_31_MASK                    (0xFFU << VAD_D_DATA7_ACODEC_DATA_31_SHIFT)                  /* 0xFF000000 */
/* TIMEOUT */
#define VAD_TIMEOUT_IDLE_TIMEOUT_THD_SHIFT                 (0U)
#define VAD_TIMEOUT_IDLE_TIMEOUT_THD_MASK                  (0xFFFFFU << VAD_TIMEOUT_IDLE_TIMEOUT_THD_SHIFT)             /* 0x000FFFFF */
#define VAD_TIMEOUT_WORK_TIMEOUT_THD_SHIFT                 (20U)
#define VAD_TIMEOUT_WORK_TIMEOUT_THD_MASK                  (0x3FFU << VAD_TIMEOUT_WORK_TIMEOUT_THD_SHIFT)               /* 0x3FF00000 */
#define VAD_TIMEOUT_IDLE_TIMEOUT_EN_SHIFT                  (30U)
#define VAD_TIMEOUT_IDLE_TIMEOUT_EN_MASK                   (0x1U << VAD_TIMEOUT_IDLE_TIMEOUT_EN_SHIFT)                  /* 0x40000000 */
#define VAD_TIMEOUT_WORK_TIMEOUT_EN_SHIFT                  (31U)
#define VAD_TIMEOUT_WORK_TIMEOUT_EN_MASK                   (0x1U << VAD_TIMEOUT_WORK_TIMEOUT_EN_SHIFT)                  /* 0x80000000 */
/* RAM_START_ADDR */
#define VAD_RAM_START_ADDR_RAM_BEGIN_ADDR_SHIFT            (0U)
#define VAD_RAM_START_ADDR_RAM_BEGIN_ADDR_MASK             (0xFFFFFFFFU << VAD_RAM_START_ADDR_RAM_BEGIN_ADDR_SHIFT)     /* 0xFFFFFFFF */
/* RAM_END_ADDR */
#define VAD_RAM_END_ADDR_RAM_END_ADDR_SHIFT                (0U)
#define VAD_RAM_END_ADDR_RAM_END_ADDR_MASK                 (0xFFFFFFFFU << VAD_RAM_END_ADDR_RAM_END_ADDR_SHIFT)         /* 0xFFFFFFFF */
/* RAM_CUR_ADDR */
#define VAD_RAM_CUR_ADDR_RAM_CUR_ADDR_SHIFT                (0U)
#define VAD_RAM_CUR_ADDR_RAM_CUR_ADDR_MASK                 (0xFFFFFFFFU << VAD_RAM_CUR_ADDR_RAM_CUR_ADDR_SHIFT)         /* 0xFFFFFFFF */
/* DET_CON0 */
#define VAD_DET_CON0_GAIN_SHIFT                            (0U)
#define VAD_DET_CON0_GAIN_MASK                             (0xFFFU << VAD_DET_CON0_GAIN_SHIFT)                          /* 0x00000FFF */
#define VAD_DET_CON0_NOISE_LEVEL_SHIFT                     (12U)
#define VAD_DET_CON0_NOISE_LEVEL_MASK                      (0x7U << VAD_DET_CON0_NOISE_LEVEL_SHIFT)                     /* 0x00007000 */
#define VAD_DET_CON0_VAD_CON_THD_SHIFT                     (16U)
#define VAD_DET_CON0_VAD_CON_THD_MASK                      (0xFFU << VAD_DET_CON0_VAD_CON_THD_SHIFT)                    /* 0x00FF0000 */
#define VAD_DET_CON0_DIS_VAD_CON_THD_SHIFT                 (24U)
#define VAD_DET_CON0_DIS_VAD_CON_THD_MASK                  (0xFU << VAD_DET_CON0_DIS_VAD_CON_THD_SHIFT)                 /* 0x0F000000 */
#define VAD_DET_CON0_VAD_THD_MODE_SHIFT                    (28U)
#define VAD_DET_CON0_VAD_THD_MODE_MASK                     (0x3U << VAD_DET_CON0_VAD_THD_MODE_SHIFT)                    /* 0x30000000 */
/* DET_CON1 */
#define VAD_DET_CON1_SOUND_THD_SHIFT                       (0U)
#define VAD_DET_CON1_SOUND_THD_MASK                        (0xFFFFU << VAD_DET_CON1_SOUND_THD_SHIFT)                    /* 0x0000FFFF */
#define VAD_DET_CON1_NOISE_SAMPLE_NUM_SHIFT                (16U)
#define VAD_DET_CON1_NOISE_SAMPLE_NUM_MASK                 (0x3FFU << VAD_DET_CON1_NOISE_SAMPLE_NUM_SHIFT)              /* 0x03FF0000 */
#define VAD_DET_CON1_CLEAN_IIR_EN_SHIFT                    (26U)
#define VAD_DET_CON1_CLEAN_IIR_EN_MASK                     (0x1U << VAD_DET_CON1_CLEAN_IIR_EN_SHIFT)                    /* 0x04000000 */
#define VAD_DET_CON1_FORCE_NOISE_CLK_EN_SHIFT              (28U)
#define VAD_DET_CON1_FORCE_NOISE_CLK_EN_MASK               (0x1U << VAD_DET_CON1_FORCE_NOISE_CLK_EN_SHIFT)              /* 0x10000000 */
#define VAD_DET_CON1_CLEAN_NOISE_AT_BEGIN_SHIFT            (29U)
#define VAD_DET_CON1_CLEAN_NOISE_AT_BEGIN_MASK             (0x1U << VAD_DET_CON1_CLEAN_NOISE_AT_BEGIN_SHIFT)            /* 0x20000000 */
#define VAD_DET_CON1_MIN_NOISE_FIND_MODE_SHIFT             (30U)
#define VAD_DET_CON1_MIN_NOISE_FIND_MODE_MASK              (0x1U << VAD_DET_CON1_MIN_NOISE_FIND_MODE_SHIFT)             /* 0x40000000 */
/* DET_CON2 */
#define VAD_DET_CON2_NOISE_FRM_NUM_SHIFT                   (0U)
#define VAD_DET_CON2_NOISE_FRM_NUM_MASK                    (0x7FU << VAD_DET_CON2_NOISE_FRM_NUM_SHIFT)                  /* 0x0000007F */
#define VAD_DET_CON2_NOISE_ALPHA_SHIFT                     (8U)
#define VAD_DET_CON2_NOISE_ALPHA_MASK                      (0xFFU << VAD_DET_CON2_NOISE_ALPHA_SHIFT)                    /* 0x0000FF00 */
#define VAD_DET_CON2_IIR_ANUM_0_SHIFT                      (16U)
#define VAD_DET_CON2_IIR_ANUM_0_MASK                       (0xFFFFU << VAD_DET_CON2_IIR_ANUM_0_SHIFT)                   /* 0xFFFF0000 */
/* DET_CON3 */
#define VAD_DET_CON3_IIR_ANUM_1_SHIFT                      (0U)
#define VAD_DET_CON3_IIR_ANUM_1_MASK                       (0xFFFFU << VAD_DET_CON3_IIR_ANUM_1_SHIFT)                   /* 0x0000FFFF */
#define VAD_DET_CON3_IIR_ANUM_2_SHIFT                      (16U)
#define VAD_DET_CON3_IIR_ANUM_2_MASK                       (0xFFFFU << VAD_DET_CON3_IIR_ANUM_2_SHIFT)                   /* 0xFFFF0000 */
/* DET_CON4 */
#define VAD_DET_CON4_IIR_ADEN_1_SHIFT                      (0U)
#define VAD_DET_CON4_IIR_ADEN_1_MASK                       (0xFFFFU << VAD_DET_CON4_IIR_ADEN_1_SHIFT)                   /* 0x0000FFFF */
#define VAD_DET_CON4_IIR_ADEN_2_SHIFT                      (16U)
#define VAD_DET_CON4_IIR_ADEN_2_MASK                       (0xFFFFU << VAD_DET_CON4_IIR_ADEN_2_SHIFT)                   /* 0xFFFF0000 */
/* DET_CON5 */
#define VAD_DET_CON5_NOISE_ABS_SHIFT                       (0U)
#define VAD_DET_CON5_NOISE_ABS_MASK                        (0xFFFFU << VAD_DET_CON5_NOISE_ABS_SHIFT)                    /* 0x0000FFFF */
#define VAD_DET_CON5_IIR_RESULT_SHIFT                      (16U)
#define VAD_DET_CON5_IIR_RESULT_MASK                       (0xFFFFU << VAD_DET_CON5_IIR_RESULT_SHIFT)                   /* 0xFFFF0000 */
/* INT */
#define VAD_INT_VAD_DET_INT_EN_SHIFT                       (0U)
#define VAD_INT_VAD_DET_INT_EN_MASK                        (0x1U << VAD_INT_VAD_DET_INT_EN_SHIFT)                       /* 0x00000001 */
#define VAD_INT_ERROR_INT_EN_SHIFT                         (1U)
#define VAD_INT_ERROR_INT_EN_MASK                          (0x1U << VAD_INT_ERROR_INT_EN_SHIFT)                         /* 0x00000002 */
#define VAD_INT_IDLE_TIMEOUT_INT_EN_SHIFT                  (2U)
#define VAD_INT_IDLE_TIMEOUT_INT_EN_MASK                   (0x1U << VAD_INT_IDLE_TIMEOUT_INT_EN_SHIFT)                  /* 0x00000004 */
#define VAD_INT_WORK_TIMEOUT_INT_EN_SHIFT                  (3U)
#define VAD_INT_WORK_TIMEOUT_INT_EN_MASK                   (0x1U << VAD_INT_WORK_TIMEOUT_INT_EN_SHIFT)                  /* 0x00000008 */
#define VAD_INT_VAD_DET_INT_SHIFT                          (4U)
#define VAD_INT_VAD_DET_INT_MASK                           (0x1U << VAD_INT_VAD_DET_INT_SHIFT)                          /* 0x00000010 */
#define VAD_INT_ERROR_INT_SHIFT                            (5U)
#define VAD_INT_ERROR_INT_MASK                             (0x1U << VAD_INT_ERROR_INT_SHIFT)                            /* 0x00000020 */
#define VAD_INT_IDLE_TIMEOUT_INT_SHIFT                     (6U)
#define VAD_INT_IDLE_TIMEOUT_INT_MASK                      (0x1U << VAD_INT_IDLE_TIMEOUT_INT_SHIFT)                     /* 0x00000040 */
#define VAD_INT_WORK_TIMEOUT_INT_SHIFT                     (7U)
#define VAD_INT_WORK_TIMEOUT_INT_MASK                      (0x1U << VAD_INT_WORK_TIMEOUT_INT_SHIFT)                     /* 0x00000080 */
#define VAD_INT_RAMP_LOOP_FLAG_SHIFT                       (8U)
#define VAD_INT_RAMP_LOOP_FLAG_MASK                        (0x1U << VAD_INT_RAMP_LOOP_FLAG_SHIFT)                       /* 0x00000100 */
#define VAD_INT_VAD_IDLE_SHIFT                             (9U)
#define VAD_INT_VAD_IDLE_MASK                              (0x1U << VAD_INT_VAD_IDLE_SHIFT)                             /* 0x00000200 */
/* AUX_CONTROL */
#define VAD_AUX_CONTROL_BUS_WRITE_EN_SHIFT                 (0U)
#define VAD_AUX_CONTROL_BUS_WRITE_EN_MASK                  (0x1U << VAD_AUX_CONTROL_BUS_WRITE_EN_SHIFT)                 /* 0x00000001 */
#define VAD_AUX_CONTROL_DIS_RAM_ITF_SHIFT                  (1U)
#define VAD_AUX_CONTROL_DIS_RAM_ITF_MASK                   (0x1U << VAD_AUX_CONTROL_DIS_RAM_ITF_SHIFT)                  /* 0x00000002 */
#define VAD_AUX_CONTROL_WRITE_DATA_TRIG_INT_EN_SHIFT       (2U)
#define VAD_AUX_CONTROL_WRITE_DATA_TRIG_INT_EN_MASK        (0x1U << VAD_AUX_CONTROL_WRITE_DATA_TRIG_INT_EN_SHIFT)       /* 0x00000004 */
#define VAD_AUX_CONTROL_WRITE_DATA_KBYTE_THD_SHIFT         (4U)
#define VAD_AUX_CONTROL_WRITE_DATA_KBYTE_THD_MASK          (0xFFU << VAD_AUX_CONTROL_WRITE_DATA_KBYTE_THD_SHIFT)        /* 0x00000FF0 */
#define VAD_AUX_CONTROL_INT_TRIG_VALID_THD_SHIFT           (16U)
#define VAD_AUX_CONTROL_INT_TRIG_VALID_THD_MASK            (0xFFFU << VAD_AUX_CONTROL_INT_TRIG_VALID_THD_SHIFT)         /* 0x0FFF0000 */
#define VAD_AUX_CONTROL_INT_TRIG_VALID_EN_SHIFT            (28U)
#define VAD_AUX_CONTROL_INT_TRIG_VALID_EN_MASK             (0x1U << VAD_AUX_CONTROL_INT_TRIG_VALID_EN_SHIFT)            /* 0x10000000 */
#define VAD_AUX_CONTROL_SAMPLE_CNT_EN_SHIFT                (29U)
#define VAD_AUX_CONTROL_SAMPLE_CNT_EN_MASK                 (0x1U << VAD_AUX_CONTROL_SAMPLE_CNT_EN_SHIFT)                /* 0x20000000 */
/* SAMPLE_CNT */
#define VAD_SAMPLE_CNT_SAMPLE_CNT_SHIFT                    (0U)
#define VAD_SAMPLE_CNT_SAMPLE_CNT_MASK                     (0xFFFFFFFFU << VAD_SAMPLE_CNT_SAMPLE_CNT_SHIFT)             /* 0xFFFFFFFF */
/* NOISE_DATA */
#define VAD_NOISE_DATA_NOISE_DATA_SHIFT                    (0U)
#define VAD_NOISE_DATA_NOISE_DATA_MASK                     (0xFFFFU << VAD_NOISE_DATA_NOISE_DATA_SHIFT)                 /* 0x0000FFFF */
/****************************************DFICTRL*****************************************/
/* START */
#define DFICTRL_START_START_SHIFT                          (0U)
#define DFICTRL_START_START_MASK                           (0x1U << DFICTRL_START_START_SHIFT)                          /* 0x00000001 */
#define DFICTRL_START_DFI_SEL_SHIFT                        (1U)
#define DFICTRL_START_DFI_SEL_MASK                         (0x1U << DFICTRL_START_DFI_SEL_SHIFT)                        /* 0x00000002 */
#define DFICTRL_START_IS_DDR4_SHIFT                        (2U)
#define DFICTRL_START_IS_DDR4_MASK                         (0x1U << DFICTRL_START_IS_DDR4_SHIFT)                        /* 0x00000004 */
/* ADDR */
#define DFICTRL_ADDR_DFI_ADDR_SHIFT                        (0U)
#define DFICTRL_ADDR_DFI_ADDR_MASK                         (0xFFFFFU << DFICTRL_ADDR_DFI_ADDR_SHIFT)                    /* 0x000FFFFF */
#define DFICTRL_ADDR_DFI_BANK_SHIFT                        (20U)
#define DFICTRL_ADDR_DFI_BANK_MASK                         (0x7U << DFICTRL_ADDR_DFI_BANK_SHIFT)                        /* 0x00700000 */
#define DFICTRL_ADDR_DFI_WEN_N_A14_SHIFT                   (23U)
#define DFICTRL_ADDR_DFI_WEN_N_A14_MASK                    (0x1U << DFICTRL_ADDR_DFI_WEN_N_A14_SHIFT)                   /* 0x00800000 */
#define DFICTRL_ADDR_DFI_BG_SHIFT                          (24U)
#define DFICTRL_ADDR_DFI_BG_MASK                           (0x3U << DFICTRL_ADDR_DFI_BG_SHIFT)                          /* 0x03000000 */
#define DFICTRL_ADDR_DFI_CAS_N_A15_SHIFT                   (26U)
#define DFICTRL_ADDR_DFI_CAS_N_A15_MASK                    (0x1U << DFICTRL_ADDR_DFI_CAS_N_A15_SHIFT)                   /* 0x04000000 */
#define DFICTRL_ADDR_DFI_RAS_N_A16_SHIFT                   (27U)
#define DFICTRL_ADDR_DFI_RAS_N_A16_MASK                    (0x1U << DFICTRL_ADDR_DFI_RAS_N_A16_SHIFT)                   /* 0x08000000 */
#define DFICTRL_ADDR_DFI_LP_WAKEUP_SHIFT                   (28U)
#define DFICTRL_ADDR_DFI_LP_WAKEUP_MASK                    (0xFU << DFICTRL_ADDR_DFI_LP_WAKEUP_SHIFT)                   /* 0xF0000000 */
/* CMD */
#define DFICTRL_CMD_DFI_CS_N_SHIFT                         (0U)
#define DFICTRL_CMD_DFI_CS_N_MASK                          (0xFU << DFICTRL_CMD_DFI_CS_N_SHIFT)                         /* 0x0000000F */
#define DFICTRL_CMD_DFI_CAS_N_SHIFT                        (4U)
#define DFICTRL_CMD_DFI_CAS_N_MASK                         (0x3U << DFICTRL_CMD_DFI_CAS_N_SHIFT)                        /* 0x00000030 */
#define DFICTRL_CMD_DFI_RAS_N_SHIFT                        (6U)
#define DFICTRL_CMD_DFI_RAS_N_MASK                         (0x3U << DFICTRL_CMD_DFI_RAS_N_SHIFT)                        /* 0x000000C0 */
#define DFICTRL_CMD_DFI_WE_N_SHIFT                         (8U)
#define DFICTRL_CMD_DFI_WE_N_MASK                          (0x3U << DFICTRL_CMD_DFI_WE_N_SHIFT)                         /* 0x00000300 */
#define DFICTRL_CMD_DFI_ACT_N_SHIFT                        (10U)
#define DFICTRL_CMD_DFI_ACT_N_MASK                         (0x3U << DFICTRL_CMD_DFI_ACT_N_SHIFT)                        /* 0x00000C00 */
#define DFICTRL_CMD_DFI_CKE_SHIFT                          (16U)
#define DFICTRL_CMD_DFI_CKE_MASK                           (0x1U << DFICTRL_CMD_DFI_CKE_SHIFT)                          /* 0x00010000 */
#define DFICTRL_CMD_DFI_RESET_N_SHIFT                      (17U)
#define DFICTRL_CMD_DFI_RESET_N_MASK                       (0x1U << DFICTRL_CMD_DFI_RESET_N_SHIFT)                      /* 0x00020000 */
#define DFICTRL_CMD_DFI_DRAM_CLK_DIS_SHIFT                 (18U)
#define DFICTRL_CMD_DFI_DRAM_CLK_DIS_MASK                  (0x1U << DFICTRL_CMD_DFI_DRAM_CLK_DIS_SHIFT)                 /* 0x00040000 */
#define DFICTRL_CMD_DFI_LP_CK_DIS_SHIFT                    (19U)
#define DFICTRL_CMD_DFI_LP_CK_DIS_MASK                     (0x1U << DFICTRL_CMD_DFI_LP_CK_DIS_SHIFT)                    /* 0x00080000 */
#define DFICTRL_CMD_DFI_INIT_START_SHIFT                   (20U)
#define DFICTRL_CMD_DFI_INIT_START_MASK                    (0x1U << DFICTRL_CMD_DFI_INIT_START_SHIFT)                   /* 0x00100000 */
#define DFICTRL_CMD_DFI_LP_REQ_SHIFT                       (21U)
#define DFICTRL_CMD_DFI_LP_REQ_MASK                        (0x1U << DFICTRL_CMD_DFI_LP_REQ_SHIFT)                       /* 0x00200000 */
#define DFICTRL_CMD_WR_EN_SHIFT                            (30U)
#define DFICTRL_CMD_WR_EN_MASK                             (0x1U << DFICTRL_CMD_WR_EN_SHIFT)                            /* 0x40000000 */
#define DFICTRL_CMD_RD_EN_SHIFT                            (31U)
#define DFICTRL_CMD_RD_EN_MASK                             (0x1U << DFICTRL_CMD_RD_EN_SHIFT)                            /* 0x80000000 */
/* STAT */
#define DFICTRL_STAT_DFI_INIT_COMPLETE_SHIFT               (0U)
#define DFICTRL_STAT_DFI_INIT_COMPLETE_MASK                (0x1U << DFICTRL_STAT_DFI_INIT_COMPLETE_SHIFT)               /* 0x00000001 */
#define DFICTRL_STAT_DFI_INIT_START_SHIFT                  (1U)
#define DFICTRL_STAT_DFI_INIT_START_MASK                   (0x1U << DFICTRL_STAT_DFI_INIT_START_SHIFT)                  /* 0x00000002 */
#define DFICTRL_STAT_DFI_LP_ACK_SHIFT                      (2U)
#define DFICTRL_STAT_DFI_LP_ACK_MASK                       (0x1U << DFICTRL_STAT_DFI_LP_ACK_SHIFT)                      /* 0x00000004 */
#define DFICTRL_STAT_DFI_LP_REQ_SHIFT                      (3U)
#define DFICTRL_STAT_DFI_LP_REQ_MASK                       (0x1U << DFICTRL_STAT_DFI_LP_REQ_SHIFT)                      /* 0x00000008 */
#define DFICTRL_STAT_DFI_SEL_SHIFT                         (4U)
#define DFICTRL_STAT_DFI_SEL_MASK                          (0x1U << DFICTRL_STAT_DFI_SEL_SHIFT)                         /* 0x00000010 */
/* DAT0 */
#define DFICTRL_DAT0_DAT0_SHIFT                            (0U)
#define DFICTRL_DAT0_DAT0_MASK                             (0xFFFFFFFFU << DFICTRL_DAT0_DAT0_SHIFT)                     /* 0xFFFFFFFF */
/* DAT1 */
#define DFICTRL_DAT1_DAT1_SHIFT                            (0U)
#define DFICTRL_DAT1_DAT1_MASK                             (0xFFFFFFFFU << DFICTRL_DAT1_DAT1_SHIFT)                     /* 0xFFFFFFFF */
/* DAT2 */
#define DFICTRL_DAT2_DAT2_SHIFT                            (0U)
#define DFICTRL_DAT2_DAT2_MASK                             (0xFFFFFFFFU << DFICTRL_DAT2_DAT2_SHIFT)                     /* 0xFFFFFFFF */
/* DAT3 */
#define DFICTRL_DAT3_DAT3_SHIFT                            (0U)
#define DFICTRL_DAT3_DAT3_MASK                             (0xFFFFFFFFU << DFICTRL_DAT3_DAT3_SHIFT)                     /* 0xFFFFFFFF */
/* DAT4 */
#define DFICTRL_DAT4_DAT4_SHIFT                            (0U)
#define DFICTRL_DAT4_DAT4_MASK                             (0xFFFFFFFFU << DFICTRL_DAT4_DAT4_SHIFT)                     /* 0xFFFFFFFF */
/* DAT5 */
#define DFICTRL_DAT5_DAT5_SHIFT                            (0U)
#define DFICTRL_DAT5_DAT5_MASK                             (0xFFFFFFFFU << DFICTRL_DAT5_DAT5_SHIFT)                     /* 0xFFFFFFFF */
/* DAT6 */
#define DFICTRL_DAT6_DAT6_SHIFT                            (0U)
#define DFICTRL_DAT6_DAT6_MASK                             (0xFFFFFFFFU << DFICTRL_DAT6_DAT6_SHIFT)                     /* 0xFFFFFFFF */
/* DAT7 */
#define DFICTRL_DAT7_DAT7_SHIFT                            (0U)
#define DFICTRL_DAT7_DAT7_MASK                             (0xFFFFFFFFU << DFICTRL_DAT7_DAT7_SHIFT)                     /* 0xFFFFFFFF */
/* TIM0 */
#define DFICTRL_TIM0_TPHY_WRLAT_SHIFT                      (0U)
#define DFICTRL_TIM0_TPHY_WRLAT_MASK                       (0xFU << DFICTRL_TIM0_TPHY_WRLAT_SHIFT)                      /* 0x0000000F */
#define DFICTRL_TIM0_TRDDATA_EN_SHIFT                      (4U)
#define DFICTRL_TIM0_TRDDATA_EN_MASK                       (0xFU << DFICTRL_TIM0_TRDDATA_EN_SHIFT)                      /* 0x000000F0 */
/******************************************RGA*******************************************/
/* SYS_CTRL */
#define RGA_SYS_CTRL_SW_CMD_OP_ST_P_SHIFT                  (0U)
#define RGA_SYS_CTRL_SW_CMD_OP_ST_P_MASK                   (0x1U << RGA_SYS_CTRL_SW_CMD_OP_ST_P_SHIFT)                  /* 0x00000001 */
#define RGA_SYS_CTRL_SW_CMD_MODE_SHIFT                     (1U)
#define RGA_SYS_CTRL_SW_CMD_MODE_MASK                      (0x1U << RGA_SYS_CTRL_SW_CMD_MODE_SHIFT)                     /* 0x00000002 */
#define RGA_SYS_CTRL_SW_AUTO_CKG_SHIFT                     (2U)
#define RGA_SYS_CTRL_SW_AUTO_CKG_MASK                      (0x1U << RGA_SYS_CTRL_SW_AUTO_CKG_SHIFT)                     /* 0x00000004 */
#define RGA_SYS_CTRL_SW_ACLK_SRESET_P_SHIFT                (3U)
#define RGA_SYS_CTRL_SW_ACLK_SRESET_P_MASK                 (0x1U << RGA_SYS_CTRL_SW_ACLK_SRESET_P_SHIFT)                /* 0x00000008 */
#define RGA_SYS_CTRL_SW_CCLK_SRESET_P_SHIFT                (4U)
#define RGA_SYS_CTRL_SW_CCLK_SRESET_P_MASK                 (0x1U << RGA_SYS_CTRL_SW_CCLK_SRESET_P_SHIFT)                /* 0x00000010 */
#define RGA_SYS_CTRL_SW_AUTO_RST_SHIFT                     (5U)
#define RGA_SYS_CTRL_SW_AUTO_RST_MASK                      (0x1U << RGA_SYS_CTRL_SW_AUTO_RST_SHIFT)                     /* 0x00000020 */
#define RGA_SYS_CTRL_SW_RST_PROTECT_E_SHIFT                (6U)
#define RGA_SYS_CTRL_SW_RST_PROTECT_E_MASK                 (0x1U << RGA_SYS_CTRL_SW_RST_PROTECT_E_SHIFT)                /* 0x00000040 */
#define RGA_SYS_CTRL_SW_RST_HANDSAVE_P_SHIFT               (7U)
#define RGA_SYS_CTRL_SW_RST_HANDSAVE_P_MASK                (0x1U << RGA_SYS_CTRL_SW_RST_HANDSAVE_P_SHIFT)               /* 0x00000080 */
/* CMD_CTRL */
#define RGA_CMD_CTRL_SW_CMD_LINE_ST_P_SHIFT                (0U)
#define RGA_CMD_CTRL_SW_CMD_LINE_ST_P_MASK                 (0x1U << RGA_CMD_CTRL_SW_CMD_LINE_ST_P_SHIFT)                /* 0x00000001 */
#define RGA_CMD_CTRL_SW_CMD_INCR_VALID_P_SHIFT             (1U)
#define RGA_CMD_CTRL_SW_CMD_INCR_VALID_P_MASK              (0x1U << RGA_CMD_CTRL_SW_CMD_INCR_VALID_P_SHIFT)             /* 0x00000002 */
#define RGA_CMD_CTRL_SW_CMD_STOP_SHIFT                     (2U)
#define RGA_CMD_CTRL_SW_CMD_STOP_MASK                      (0x1U << RGA_CMD_CTRL_SW_CMD_STOP_SHIFT)                     /* 0x00000004 */
#define RGA_CMD_CTRL_SW_CMD_INCR_NUM_SHIFT                 (3U)
#define RGA_CMD_CTRL_SW_CMD_INCR_NUM_MASK                  (0x3FFU << RGA_CMD_CTRL_SW_CMD_INCR_NUM_SHIFT)               /* 0x00001FF8 */
/* CMD_BASE */
#define RGA_CMD_BASE_SW_CMD_BASE_SHIFT                     (0U)
#define RGA_CMD_BASE_SW_CMD_BASE_MASK                      (0xFFFFFFFFU << RGA_CMD_BASE_SW_CMD_BASE_SHIFT)              /* 0xFFFFFFFF */
/* STATUS1 */
#define RGA_STATUS1_SW_RGA_STA_SHIFT                       (0U)
#define RGA_STATUS1_SW_RGA_STA_MASK                        (0x1U << RGA_STATUS1_SW_RGA_STA_SHIFT)                       /* 0x00000001 */
#define RGA_STATUS1_RESERVED_SHIFT                         (1U)
#define RGA_STATUS1_RESERVED_MASK                          (0x7FU << RGA_STATUS1_RESERVED_SHIFT)                        /* 0x000000FE */
#define RGA_STATUS1_SW_CMD_CUR_NUM_SHIFT                   (8U)
#define RGA_STATUS1_SW_CMD_CUR_NUM_MASK                    (0xFFFU << RGA_STATUS1_SW_CMD_CUR_NUM_SHIFT)                 /* 0x000FFF00 */
#define RGA_STATUS1_SW_CMD_TOTAL_NUM_SHIFT                 (20U)
#define RGA_STATUS1_SW_CMD_TOTAL_NUM_MASK                  (0xFFFU << RGA_STATUS1_SW_CMD_TOTAL_NUM_SHIFT)               /* 0xFFF00000 */
/* INT */
#define RGA_INT_SW_INTR_ERR_SHIFT                          (0U)
#define RGA_INT_SW_INTR_ERR_MASK                           (0x1U << RGA_INT_SW_INTR_ERR_SHIFT)                          /* 0x00000001 */
#define RGA_INT_SW_INTR_MMU_SHIFT                          (1U)
#define RGA_INT_SW_INTR_MMU_MASK                           (0x1U << RGA_INT_SW_INTR_MMU_SHIFT)                          /* 0x00000002 */
#define RGA_INT_SW_INTR_AF_SHIFT                           (2U)
#define RGA_INT_SW_INTR_AF_MASK                            (0x1U << RGA_INT_SW_INTR_AF_SHIFT)                           /* 0x00000004 */
#define RGA_INT_SW_INTR_CF_SHIFT                           (3U)
#define RGA_INT_SW_INTR_CF_MASK                            (0x1U << RGA_INT_SW_INTR_CF_SHIFT)                           /* 0x00000008 */
#define RGA_INT_SW_INTR_ERR_CLR_SHIFT                      (4U)
#define RGA_INT_SW_INTR_ERR_CLR_MASK                       (0x1U << RGA_INT_SW_INTR_ERR_CLR_SHIFT)                      /* 0x00000010 */
#define RGA_INT_SW_INTR_MMU_CLR_SHIFT                      (5U)
#define RGA_INT_SW_INTR_MMU_CLR_MASK                       (0x1U << RGA_INT_SW_INTR_MMU_CLR_SHIFT)                      /* 0x00000020 */
#define RGA_INT_SW_INTR_AF_CLR_SHIFT                       (6U)
#define RGA_INT_SW_INTR_AF_CLR_MASK                        (0x1U << RGA_INT_SW_INTR_AF_CLR_SHIFT)                       /* 0x00000040 */
#define RGA_INT_SW_INTR_CF_CLR_SHIFT                       (7U)
#define RGA_INT_SW_INTR_CF_CLR_MASK                        (0x1U << RGA_INT_SW_INTR_CF_CLR_SHIFT)                       /* 0x00000080 */
#define RGA_INT_SW_INTR_ERR_E_SHIFT                        (8U)
#define RGA_INT_SW_INTR_ERR_E_MASK                         (0x1U << RGA_INT_SW_INTR_ERR_E_SHIFT)                        /* 0x00000100 */
#define RGA_INT_SW_INTR_MMU_E_SHIFT                        (9U)
#define RGA_INT_SW_INTR_MMU_E_MASK                         (0x1U << RGA_INT_SW_INTR_MMU_E_SHIFT)                        /* 0x00000200 */
#define RGA_INT_SW_INTR_AF_E_SHIFT                         (10U)
#define RGA_INT_SW_INTR_AF_E_MASK                          (0x1U << RGA_INT_SW_INTR_AF_E_SHIFT)                         /* 0x00000400 */
/* MMU_CTRL0 */
#define RGA_MMU_CTRL0_SW_MMU_PAGE_SIZE_SHIFT               (0U)
#define RGA_MMU_CTRL0_SW_MMU_PAGE_SIZE_MASK                (0x1U << RGA_MMU_CTRL0_SW_MMU_PAGE_SIZE_SHIFT)               /* 0x00000001 */
#define RGA_MMU_CTRL0_SW_CMD_MMU_EN_SHIFT                  (1U)
#define RGA_MMU_CTRL0_SW_CMD_MMU_EN_MASK                   (0x1U << RGA_MMU_CTRL0_SW_CMD_MMU_EN_SHIFT)                  /* 0x00000002 */
#define RGA_MMU_CTRL0_SW_CMD_MMU_FLUSH_SHIFT               (2U)
#define RGA_MMU_CTRL0_SW_CMD_MMU_FLUSH_MASK                (0x1U << RGA_MMU_CTRL0_SW_CMD_MMU_FLUSH_SHIFT)               /* 0x00000004 */
#define RGA_MMU_CTRL0_SW_SRC_CH_PRIORITY_SHIFT             (3U)
#define RGA_MMU_CTRL0_SW_SRC_CH_PRIORITY_MASK              (0x3U << RGA_MMU_CTRL0_SW_SRC_CH_PRIORITY_SHIFT)             /* 0x00000018 */
#define RGA_MMU_CTRL0_SW_SRC1_CH_PRIORITY_SHIFT            (5U)
#define RGA_MMU_CTRL0_SW_SRC1_CH_PRIORITY_MASK             (0x3U << RGA_MMU_CTRL0_SW_SRC1_CH_PRIORITY_SHIFT)            /* 0x00000060 */
#define RGA_MMU_CTRL0_SW_DST_CH_PRIORITY_SHIFT             (7U)
#define RGA_MMU_CTRL0_SW_DST_CH_PRIORITY_MASK              (0x3U << RGA_MMU_CTRL0_SW_DST_CH_PRIORITY_SHIFT)             /* 0x00000180 */
#define RGA_MMU_CTRL0_SW_ELS_CH_PRIORITY_SHIFT             (9U)
#define RGA_MMU_CTRL0_SW_ELS_CH_PRIORITY_MASK              (0x3U << RGA_MMU_CTRL0_SW_ELS_CH_PRIORITY_SHIFT)             /* 0x00000600 */
#define RGA_MMU_CTRL0_RESERVED_SHIFT                       (11U)
#define RGA_MMU_CTRL0_RESERVED_MASK                        (0x1FFFFFU << RGA_MMU_CTRL0_RESERVED_SHIFT)                  /* 0xFFFFF800 */
/* MMU_CMD_BASE */
#define RGA_MMU_CMD_BASE_SW_MMU_CMD_BASE_SHIFT             (0U)
#define RGA_MMU_CMD_BASE_SW_MMU_CMD_BASE_MASK              (0xFFFFFFFU << RGA_MMU_CMD_BASE_SW_MMU_CMD_BASE_SHIFT)       /* 0x0FFFFFFF */
/* STATUS2 */
#define RGA_STATUS2_RPP_ERROR_SHIFT                        (0U)
#define RGA_STATUS2_RPP_ERROR_MASK                         (0x1U << RGA_STATUS2_RPP_ERROR_SHIFT)                        /* 0x00000001 */
#define RGA_STATUS2_BUS_ERROR_SHIFT                        (1U)
#define RGA_STATUS2_BUS_ERROR_MASK                         (0x1U << RGA_STATUS2_BUS_ERROR_SHIFT)                        /* 0x00000002 */
#define RGA_STATUS2_SRCRPP_OUTBUF_RREADY_SHIFT             (2U)
#define RGA_STATUS2_SRCRPP_OUTBUF_RREADY_MASK              (0xFU << RGA_STATUS2_SRCRPP_OUTBUF_RREADY_SHIFT)             /* 0x0000003C */
#define RGA_STATUS2_DSTRPP_OUTBUF_RREADY_SHIFT             (6U)
#define RGA_STATUS2_DSTRPP_OUTBUF_RREADY_MASK              (0x1FU << RGA_STATUS2_DSTRPP_OUTBUF_RREADY_SHIFT)            /* 0x000007C0 */
#define RGA_STATUS2_RPP_MKRAM_RREADY_SHIFT                 (11U)
#define RGA_STATUS2_RPP_MKRAM_RREADY_MASK                  (0x3U << RGA_STATUS2_RPP_MKRAM_RREADY_SHIFT)                 /* 0x00001800 */
#define RGA_STATUS2_RESERVED_SHIFT                         (13U)
#define RGA_STATUS2_RESERVED_MASK                          (0x7FFFFU << RGA_STATUS2_RESERVED_SHIFT)                     /* 0xFFFFE000 */
/* WORK_CNT */
#define RGA_WORK_CNT_SW_WORK_CNT_SHIFT                     (0U)
#define RGA_WORK_CNT_SW_WORK_CNT_MASK                      (0x7FFFFFFU << RGA_WORK_CNT_SW_WORK_CNT_SHIFT)               /* 0x07FFFFFF */
#define RGA_WORK_CNT_RESERVED_SHIFT                        (27U)
#define RGA_WORK_CNT_RESERVED_MASK                         (0x1FU << RGA_WORK_CNT_RESERVED_SHIFT)                       /* 0xF8000000 */
/* VERSION_INFO */
#define RGA_VERSION_INFO_SVNBUILD_SHIFT                    (0U)
#define RGA_VERSION_INFO_SVNBUILD_MASK                     (0xFFFFFU << RGA_VERSION_INFO_SVNBUILD_SHIFT)                /* 0x000FFFFF */
#define RGA_VERSION_INFO_MINOR_SHIFT                       (20U)
#define RGA_VERSION_INFO_MINOR_MASK                        (0xFU << RGA_VERSION_INFO_MINOR_SHIFT)                       /* 0x00F00000 */
#define RGA_VERSION_INFO_MAJOR_SHIFT                       (24U)
#define RGA_VERSION_INFO_MAJOR_MASK                        (0xFFU << RGA_VERSION_INFO_MAJOR_SHIFT)                      /* 0xFF000000 */
/* PERF_LATENCY_CTRL0 */
#define RGA_PERF_LATENCY_CTRL0_SW_AXI_PERF_WORK_E_SHIFT    (0U)
#define RGA_PERF_LATENCY_CTRL0_SW_AXI_PERF_WORK_E_MASK     (0x1U << RGA_PERF_LATENCY_CTRL0_SW_AXI_PERF_WORK_E_SHIFT)    /* 0x00000001 */
#define RGA_PERF_LATENCY_CTRL0_SW_AXI_PERF_CLR_E_SHIFT     (1U)
#define RGA_PERF_LATENCY_CTRL0_SW_AXI_PERF_CLR_E_MASK      (0x1U << RGA_PERF_LATENCY_CTRL0_SW_AXI_PERF_CLR_E_SHIFT)     /* 0x00000002 */
#define RGA_PERF_LATENCY_CTRL0_SW_AXI_PERF_FRM_TYPE_SHIFT  (2U)
#define RGA_PERF_LATENCY_CTRL0_SW_AXI_PERF_FRM_TYPE_MASK   (0x1U << RGA_PERF_LATENCY_CTRL0_SW_AXI_PERF_FRM_TYPE_SHIFT)  /* 0x00000004 */
#define RGA_PERF_LATENCY_CTRL0_SW_AXI_CNT_TYPE_SHIFT       (3U)
#define RGA_PERF_LATENCY_CTRL0_SW_AXI_CNT_TYPE_MASK        (0x1U << RGA_PERF_LATENCY_CTRL0_SW_AXI_CNT_TYPE_SHIFT)       /* 0x00000008 */
#define RGA_PERF_LATENCY_CTRL0_SW_RD_LATENCY_ID_SHIFT      (4U)
#define RGA_PERF_LATENCY_CTRL0_SW_RD_LATENCY_ID_MASK       (0xFU << RGA_PERF_LATENCY_CTRL0_SW_RD_LATENCY_ID_SHIFT)      /* 0x000000F0 */
#define RGA_PERF_LATENCY_CTRL0_SW_RD_LATENCY_THR_SHIFT     (8U)
#define RGA_PERF_LATENCY_CTRL0_SW_RD_LATENCY_THR_MASK      (0xFFFU << RGA_PERF_LATENCY_CTRL0_SW_RD_LATENCY_THR_SHIFT)   /* 0x000FFF00 */
/* PERF_LATENCY_CTRL1 */
#define RGA_PERF_LATENCY_CTRL1_SW_ADDR_ALIGN_TYPE_SHIFT    (0U)
#define RGA_PERF_LATENCY_CTRL1_SW_ADDR_ALIGN_TYPE_MASK     (0x3U << RGA_PERF_LATENCY_CTRL1_SW_ADDR_ALIGN_TYPE_SHIFT)    /* 0x00000003 */
#define RGA_PERF_LATENCY_CTRL1_SW_AR_CNT_ID_TYPE_SHIFT     (2U)
#define RGA_PERF_LATENCY_CTRL1_SW_AR_CNT_ID_TYPE_MASK      (0x1U << RGA_PERF_LATENCY_CTRL1_SW_AR_CNT_ID_TYPE_SHIFT)     /* 0x00000004 */
#define RGA_PERF_LATENCY_CTRL1_SW_AW_CNT_ID_TYPE_SHIFT     (3U)
#define RGA_PERF_LATENCY_CTRL1_SW_AW_CNT_ID_TYPE_MASK      (0x1U << RGA_PERF_LATENCY_CTRL1_SW_AW_CNT_ID_TYPE_SHIFT)     /* 0x00000008 */
#define RGA_PERF_LATENCY_CTRL1_SW_AR_COUNT_ID_SHIFT        (4U)
#define RGA_PERF_LATENCY_CTRL1_SW_AR_COUNT_ID_MASK         (0xFU << RGA_PERF_LATENCY_CTRL1_SW_AR_COUNT_ID_SHIFT)        /* 0x000000F0 */
#define RGA_PERF_LATENCY_CTRL1_SW_AW_COUNT_ID_SHIFT        (8U)
#define RGA_PERF_LATENCY_CTRL1_SW_AW_COUNT_ID_MASK         (0xFU << RGA_PERF_LATENCY_CTRL1_SW_AW_COUNT_ID_SHIFT)        /* 0x00000F00 */
/* PERF_RD_MAX_LATENCY_NUM0 */
#define RGA_PERF_RD_MAX_LATENCY_NUM0_RD_MAX_LATENCY_NUM_CH0_SHIFT (0U)
#define RGA_PERF_RD_MAX_LATENCY_NUM0_RD_MAX_LATENCY_NUM_CH0_MASK (0xFFFFU << RGA_PERF_RD_MAX_LATENCY_NUM0_RD_MAX_LATENCY_NUM_CH0_SHIFT) /* 0x0000FFFF */
/* PERF_RD_LATENCY_SAMP_NUM */
#define RGA_PERF_RD_LATENCY_SAMP_NUM_RD_LATENCY_THR_NUM_CH0_SHIFT (0U)
#define RGA_PERF_RD_LATENCY_SAMP_NUM_RD_LATENCY_THR_NUM_CH0_MASK (0xFFFFFFFFU << RGA_PERF_RD_LATENCY_SAMP_NUM_RD_LATENCY_THR_NUM_CH0_SHIFT) /* 0xFFFFFFFF */
/* PERF_RD_LATENCY_ACC_SUM */
#define RGA_PERF_RD_LATENCY_ACC_SUM_RD_LATENCY_ACC_SUM_SHIFT (0U)
#define RGA_PERF_RD_LATENCY_ACC_SUM_RD_LATENCY_ACC_SUM_MASK (0xFFFFFFFFU << RGA_PERF_RD_LATENCY_ACC_SUM_RD_LATENCY_ACC_SUM_SHIFT) /* 0xFFFFFFFF */
/* PERF_RD_AXI_TOTAL_BYTE */
#define RGA_PERF_RD_AXI_TOTAL_BYTE_PERF_RD_AXI_TOTAL_BYTE_SHIFT (0U)
#define RGA_PERF_RD_AXI_TOTAL_BYTE_PERF_RD_AXI_TOTAL_BYTE_MASK (0xFFFFFFFFU << RGA_PERF_RD_AXI_TOTAL_BYTE_PERF_RD_AXI_TOTAL_BYTE_SHIFT) /* 0xFFFFFFFF */
/* PERF_WR_AXI_TOTAL_BYTE */
#define RGA_PERF_WR_AXI_TOTAL_BYTE_PERF_WR_AXI_TOTAL_BYTE_SHIFT (0U)
#define RGA_PERF_WR_AXI_TOTAL_BYTE_PERF_WR_AXI_TOTAL_BYTE_MASK (0xFFFFFFFFU << RGA_PERF_WR_AXI_TOTAL_BYTE_PERF_WR_AXI_TOTAL_BYTE_SHIFT) /* 0xFFFFFFFF */
/* PERF_WORKING_CNT */
#define RGA_PERF_WORKING_CNT_PERF_WORKING_CNT_SHIFT        (0U)
#define RGA_PERF_WORKING_CNT_PERF_WORKING_CNT_MASK         (0xFFFFFFFFU << RGA_PERF_WORKING_CNT_PERF_WORKING_CNT_SHIFT) /* 0xFFFFFFFF */
/* MODE_CTRL */
#define RGA_MODE_CTRL_SW_RENDER_MODE_SHIFT                 (0U)
#define RGA_MODE_CTRL_SW_RENDER_MODE_MASK                  (0x7U << RGA_MODE_CTRL_SW_RENDER_MODE_SHIFT)                 /* 0x00000007 */
#define RGA_MODE_CTRL_SW_BB_MODE_SHIFT                     (3U)
#define RGA_MODE_CTRL_SW_BB_MODE_MASK                      (0x1U << RGA_MODE_CTRL_SW_BB_MODE_SHIFT)                     /* 0x00000008 */
#define RGA_MODE_CTRL_SW_CF_ROP4_PAT_SHIFT                 (4U)
#define RGA_MODE_CTRL_SW_CF_ROP4_PAT_MASK                  (0x1U << RGA_MODE_CTRL_SW_CF_ROP4_PAT_SHIFT)                 /* 0x00000010 */
#define RGA_MODE_CTRL_SW_ALPHA_ZERO_KEY_SHIFT              (5U)
#define RGA_MODE_CTRL_SW_ALPHA_ZERO_KEY_MASK               (0x1U << RGA_MODE_CTRL_SW_ALPHA_ZERO_KEY_SHIFT)              /* 0x00000020 */
#define RGA_MODE_CTRL_SW_GRADIENT_SAT_SHIFT                (6U)
#define RGA_MODE_CTRL_SW_GRADIENT_SAT_MASK                 (0x1U << RGA_MODE_CTRL_SW_GRADIENT_SAT_SHIFT)                /* 0x00000040 */
#define RGA_MODE_CTRL_SW_INTR_CF_E_SHIFT                   (7U)
#define RGA_MODE_CTRL_SW_INTR_CF_E_MASK                    (0x1U << RGA_MODE_CTRL_SW_INTR_CF_E_SHIFT)                   /* 0x00000080 */
#define RGA_MODE_CTRL_RESERVED_SHIFT                       (8U)
#define RGA_MODE_CTRL_RESERVED_MASK                        (0xFFFFFFU << RGA_MODE_CTRL_RESERVED_SHIFT)                  /* 0xFFFFFF00 */
/* SRC_INFO */
#define RGA_SRC_INFO_SW_SRC_FMT_SHIFT                      (0U)
#define RGA_SRC_INFO_SW_SRC_FMT_MASK                       (0xFU << RGA_SRC_INFO_SW_SRC_FMT_SHIFT)                      /* 0x0000000F */
#define RGA_SRC_INFO_SW_SRC_RBSWAP_SHIFT                   (4U)
#define RGA_SRC_INFO_SW_SRC_RBSWAP_MASK                    (0x1U << RGA_SRC_INFO_SW_SRC_RBSWAP_SHIFT)                   /* 0x00000010 */
#define RGA_SRC_INFO_SW_SRC_ALPHA_SWAP_SHIFT               (5U)
#define RGA_SRC_INFO_SW_SRC_ALPHA_SWAP_MASK                (0x1U << RGA_SRC_INFO_SW_SRC_ALPHA_SWAP_SHIFT)               /* 0x00000020 */
#define RGA_SRC_INFO_SW_SRC_UVSWAP_SHIFT                   (6U)
#define RGA_SRC_INFO_SW_SRC_UVSWAP_MASK                    (0x1U << RGA_SRC_INFO_SW_SRC_UVSWAP_SHIFT)                   /* 0x00000040 */
#define RGA_SRC_INFO_SW_CP_ENDIAN_SHIFT                    (7U)
#define RGA_SRC_INFO_SW_CP_ENDIAN_MASK                     (0x1U << RGA_SRC_INFO_SW_CP_ENDIAN_SHIFT)                    /* 0x00000080 */
#define RGA_SRC_INFO_SW_SRC_CSC_MODE_SHIFT                 (8U)
#define RGA_SRC_INFO_SW_SRC_CSC_MODE_MASK                  (0x3U << RGA_SRC_INFO_SW_SRC_CSC_MODE_SHIFT)                 /* 0x00000300 */
#define RGA_SRC_INFO_SW_SRC_ROT_MODE_SHIFT                 (10U)
#define RGA_SRC_INFO_SW_SRC_ROT_MODE_MASK                  (0x3U << RGA_SRC_INFO_SW_SRC_ROT_MODE_SHIFT)                 /* 0x00000C00 */
#define RGA_SRC_INFO_SW_SRC_MIR_MODE_SHIFT                 (12U)
#define RGA_SRC_INFO_SW_SRC_MIR_MODE_MASK                  (0x3U << RGA_SRC_INFO_SW_SRC_MIR_MODE_SHIFT)                 /* 0x00003000 */
#define RGA_SRC_INFO_SW_SRC_HSCL_MODE_SHIFT                (14U)
#define RGA_SRC_INFO_SW_SRC_HSCL_MODE_MASK                 (0x3U << RGA_SRC_INFO_SW_SRC_HSCL_MODE_SHIFT)                /* 0x0000C000 */
#define RGA_SRC_INFO_SW_SRC_VSCL_MODE_SHIFT                (16U)
#define RGA_SRC_INFO_SW_SRC_VSCL_MODE_MASK                 (0x3U << RGA_SRC_INFO_SW_SRC_VSCL_MODE_SHIFT)                /* 0x00030000 */
#define RGA_SRC_INFO_SW_SRC_TRANS_MODE_SHIFT               (18U)
#define RGA_SRC_INFO_SW_SRC_TRANS_MODE_MASK                (0x1U << RGA_SRC_INFO_SW_SRC_TRANS_MODE_SHIFT)               /* 0x00040000 */
#define RGA_SRC_INFO_SW_SRC_TRANS_E_SHIFT                  (19U)
#define RGA_SRC_INFO_SW_SRC_TRANS_E_MASK                   (0xFU << RGA_SRC_INFO_SW_SRC_TRANS_E_SHIFT)                  /* 0x00780000 */
#define RGA_SRC_INFO_SW_SRC_DITHER_UP_SHIFT                (23U)
#define RGA_SRC_INFO_SW_SRC_DITHER_UP_MASK                 (0x1U << RGA_SRC_INFO_SW_SRC_DITHER_UP_SHIFT)                /* 0x00800000 */
#define RGA_SRC_INFO_SW_BIC_COE_SEL_SHIFT                  (24U)
#define RGA_SRC_INFO_SW_BIC_COE_SEL_MASK                   (0x3U << RGA_SRC_INFO_SW_BIC_COE_SEL_SHIFT)                  /* 0x03000000 */
#define RGA_SRC_INFO_SW_VSP_MODE_SHIFT                     (26U)
#define RGA_SRC_INFO_SW_VSP_MODE_MASK                      (0x1U << RGA_SRC_INFO_SW_VSP_MODE_SHIFT)                     /* 0x04000000 */
#define RGA_SRC_INFO_SW_SRC_YUV10_E_SHIFT                  (27U)
#define RGA_SRC_INFO_SW_SRC_YUV10_E_MASK                   (0x1U << RGA_SRC_INFO_SW_SRC_YUV10_E_SHIFT)                  /* 0x08000000 */
#define RGA_SRC_INFO_SW_SRC_YUV10_ROUND_E_SHIFT            (28U)
#define RGA_SRC_INFO_SW_SRC_YUV10_ROUND_E_MASK             (0x1U << RGA_SRC_INFO_SW_SRC_YUV10_ROUND_E_SHIFT)            /* 0x10000000 */
/* SRC_BASE0 */
#define RGA_SRC_BASE0_SW_SRC_BASE0_SHIFT                   (0U)
#define RGA_SRC_BASE0_SW_SRC_BASE0_MASK                    (0xFFFFFFFFU << RGA_SRC_BASE0_SW_SRC_BASE0_SHIFT)            /* 0xFFFFFFFF */
/* SRC_BASE1 */
#define RGA_SRC_BASE1_SW_SRC_BASE1_SHIFT                   (0U)
#define RGA_SRC_BASE1_SW_SRC_BASE1_MASK                    (0xFFFFFFFFU << RGA_SRC_BASE1_SW_SRC_BASE1_SHIFT)            /* 0xFFFFFFFF */
/* SRC_BASE2 */
#define RGA_SRC_BASE2_SW_SRC_BASE2_SHIFT                   (0U)
#define RGA_SRC_BASE2_SW_SRC_BASE2_MASK                    (0x1U << RGA_SRC_BASE2_SW_SRC_BASE2_SHIFT)                   /* 0x00000001 */
/* SRC_BASE3 */
#define RGA_SRC_BASE3_SW_SRC_BASE3_SHIFT                   (0U)
#define RGA_SRC_BASE3_SW_SRC_BASE3_MASK                    (0x1U << RGA_SRC_BASE3_SW_SRC_BASE3_SHIFT)                   /* 0x00000001 */
/* SRC_VIR_INFO */
#define RGA_SRC_VIR_INFO_SW_SRC_VIR_STRIDE_SHIFT           (0U)
#define RGA_SRC_VIR_INFO_SW_SRC_VIR_STRIDE_MASK            (0x7FFFU << RGA_SRC_VIR_INFO_SW_SRC_VIR_STRIDE_SHIFT)        /* 0x00007FFF */
#define RGA_SRC_VIR_INFO_RESERVED_SHIFT                    (15U)
#define RGA_SRC_VIR_INFO_RESERVED_MASK                     (0x1U << RGA_SRC_VIR_INFO_RESERVED_SHIFT)                    /* 0x00008000 */
#define RGA_SRC_VIR_INFO_SW_MASK_VIR_STRIDE_SHIFT          (16U)
#define RGA_SRC_VIR_INFO_SW_MASK_VIR_STRIDE_MASK           (0x3FFU << RGA_SRC_VIR_INFO_SW_MASK_VIR_STRIDE_SHIFT)        /* 0x03FF0000 */
#define RGA_SRC_VIR_INFO_FIELD0000_SHIFT                   (26U)
#define RGA_SRC_VIR_INFO_FIELD0000_MASK                    (0x3FU << RGA_SRC_VIR_INFO_FIELD0000_SHIFT)                  /* 0xFC000000 */
/* SRC_ACT_INFO */
#define RGA_SRC_ACT_INFO_SW_SRC_ACT_WIDTH_SHIFT            (0U)
#define RGA_SRC_ACT_INFO_SW_SRC_ACT_WIDTH_MASK             (0x1FFFU << RGA_SRC_ACT_INFO_SW_SRC_ACT_WIDTH_SHIFT)         /* 0x00001FFF */
#define RGA_SRC_ACT_INFO_RESERVED1_SHIFT                   (13U)
#define RGA_SRC_ACT_INFO_RESERVED1_MASK                    (0x7U << RGA_SRC_ACT_INFO_RESERVED1_SHIFT)                   /* 0x0000E000 */
#define RGA_SRC_ACT_INFO_SW_SRC_ACT_HEIGHT_SHIFT           (16U)
#define RGA_SRC_ACT_INFO_SW_SRC_ACT_HEIGHT_MASK            (0x1FFFU << RGA_SRC_ACT_INFO_SW_SRC_ACT_HEIGHT_SHIFT)        /* 0x1FFF0000 */
#define RGA_SRC_ACT_INFO_RESERVED2_SHIFT                   (29U)
#define RGA_SRC_ACT_INFO_RESERVED2_MASK                    (0x7U << RGA_SRC_ACT_INFO_RESERVED2_SHIFT)                   /* 0xE0000000 */
/* SRC_X_FACTOR */
#define RGA_SRC_X_FACTOR_SW_SRC_HSD_FACTOR_SHIFT           (0U)
#define RGA_SRC_X_FACTOR_SW_SRC_HSD_FACTOR_MASK            (0xFFFFU << RGA_SRC_X_FACTOR_SW_SRC_HSD_FACTOR_SHIFT)        /* 0x0000FFFF */
#define RGA_SRC_X_FACTOR_SW_SRC_HSP_FACTOR_SHIFT           (16U)
#define RGA_SRC_X_FACTOR_SW_SRC_HSP_FACTOR_MASK            (0xFFFFU << RGA_SRC_X_FACTOR_SW_SRC_HSP_FACTOR_SHIFT)        /* 0xFFFF0000 */
/* SRC_Y_FACTOR */
#define RGA_SRC_Y_FACTOR_SW_SRC_VSD_FACTOR_SHIFT           (0U)
#define RGA_SRC_Y_FACTOR_SW_SRC_VSD_FACTOR_MASK            (0xFFFFU << RGA_SRC_Y_FACTOR_SW_SRC_VSD_FACTOR_SHIFT)        /* 0x0000FFFF */
#define RGA_SRC_Y_FACTOR_SW_SRC_VSP_FACTOR_SHIFT           (16U)
#define RGA_SRC_Y_FACTOR_SW_SRC_VSP_FACTOR_MASK            (0xFFFFU << RGA_SRC_Y_FACTOR_SW_SRC_VSP_FACTOR_SHIFT)        /* 0xFFFF0000 */
/* SRC_BG_COLOR */
#define RGA_SRC_BG_COLOR_SW_SRC_BG_COLOR_SHIFT             (0U)
#define RGA_SRC_BG_COLOR_SW_SRC_BG_COLOR_MASK              (0xFFFFFFFFU << RGA_SRC_BG_COLOR_SW_SRC_BG_COLOR_SHIFT)      /* 0xFFFFFFFF */
/* SRC_FG_COLOR */
#define RGA_SRC_FG_COLOR_SW_SRC_FG_COLOR_SHIFT             (0U)
#define RGA_SRC_FG_COLOR_SW_SRC_FG_COLOR_MASK              (0xFFFFFFFFU << RGA_SRC_FG_COLOR_SW_SRC_FG_COLOR_SHIFT)      /* 0xFFFFFFFF */
/* SRC_TR_COLOR0 */
#define RGA_SRC_TR_COLOR0_SW_SRC_TRANS_RMIN_SHIFT          (0U)
#define RGA_SRC_TR_COLOR0_SW_SRC_TRANS_RMIN_MASK           (0xFFU << RGA_SRC_TR_COLOR0_SW_SRC_TRANS_RMIN_SHIFT)         /* 0x000000FF */
#define RGA_SRC_TR_COLOR0_SW_SRC_TRANS_GMIN_SHIFT          (8U)
#define RGA_SRC_TR_COLOR0_SW_SRC_TRANS_GMIN_MASK           (0xFFU << RGA_SRC_TR_COLOR0_SW_SRC_TRANS_GMIN_SHIFT)         /* 0x0000FF00 */
#define RGA_SRC_TR_COLOR0_SW_SRC_TRANS_BMIN_SHIFT          (16U)
#define RGA_SRC_TR_COLOR0_SW_SRC_TRANS_BMIN_MASK           (0xFFU << RGA_SRC_TR_COLOR0_SW_SRC_TRANS_BMIN_SHIFT)         /* 0x00FF0000 */
#define RGA_SRC_TR_COLOR0_SW_SRC_TRANS_AMIN_SHIFT          (24U)
#define RGA_SRC_TR_COLOR0_SW_SRC_TRANS_AMIN_MASK           (0xFFU << RGA_SRC_TR_COLOR0_SW_SRC_TRANS_AMIN_SHIFT)         /* 0xFF000000 */
/* CP_GR_A */
#define RGA_CP_GR_A_SW_GRADIENT_X_A_SHIFT                  (0U)
#define RGA_CP_GR_A_SW_GRADIENT_X_A_MASK                   (0xFFFFU << RGA_CP_GR_A_SW_GRADIENT_X_A_SHIFT)               /* 0x0000FFFF */
#define RGA_CP_GR_A_SW_GRADIENT_Y_A_SHIFT                  (16U)
#define RGA_CP_GR_A_SW_GRADIENT_Y_A_MASK                   (0xFFFFU << RGA_CP_GR_A_SW_GRADIENT_Y_A_SHIFT)               /* 0xFFFF0000 */
/* SRC_TR_COLOR1 */
#define RGA_SRC_TR_COLOR1_SW_SRC_TRANS_RMAX_SHIFT          (0U)
#define RGA_SRC_TR_COLOR1_SW_SRC_TRANS_RMAX_MASK           (0xFFU << RGA_SRC_TR_COLOR1_SW_SRC_TRANS_RMAX_SHIFT)         /* 0x000000FF */
#define RGA_SRC_TR_COLOR1_SW_SRC_TRANS_GMAX_SHIFT          (8U)
#define RGA_SRC_TR_COLOR1_SW_SRC_TRANS_GMAX_MASK           (0xFFU << RGA_SRC_TR_COLOR1_SW_SRC_TRANS_GMAX_SHIFT)         /* 0x0000FF00 */
#define RGA_SRC_TR_COLOR1_SW_SRC_TRANS_BMAX_SHIFT          (16U)
#define RGA_SRC_TR_COLOR1_SW_SRC_TRANS_BMAX_MASK           (0xFFU << RGA_SRC_TR_COLOR1_SW_SRC_TRANS_BMAX_SHIFT)         /* 0x00FF0000 */
#define RGA_SRC_TR_COLOR1_SW_SRC_TRANS_AMAX_SHIFT          (24U)
#define RGA_SRC_TR_COLOR1_SW_SRC_TRANS_AMAX_MASK           (0xFFU << RGA_SRC_TR_COLOR1_SW_SRC_TRANS_AMAX_SHIFT)         /* 0xFF000000 */
/* CP_GR_B */
#define RGA_CP_GR_B_SW_GRADIENT_X_B_SHIFT                  (0U)
#define RGA_CP_GR_B_SW_GRADIENT_X_B_MASK                   (0xFFFFU << RGA_CP_GR_B_SW_GRADIENT_X_B_SHIFT)               /* 0x0000FFFF */
#define RGA_CP_GR_B_SW_GRADIENT_Y_B_SHIFT                  (16U)
#define RGA_CP_GR_B_SW_GRADIENT_Y_B_MASK                   (0xFFFFU << RGA_CP_GR_B_SW_GRADIENT_Y_B_SHIFT)               /* 0xFFFF0000 */
/* DST_INFO */
#define RGA_DST_INFO_SW_DST_FMT_SHIFT                      (0U)
#define RGA_DST_INFO_SW_DST_FMT_MASK                       (0xFU << RGA_DST_INFO_SW_DST_FMT_SHIFT)                      /* 0x0000000F */
#define RGA_DST_INFO_SW_DST_RBSWAP_SHIFT                   (4U)
#define RGA_DST_INFO_SW_DST_RBSWAP_MASK                    (0x1U << RGA_DST_INFO_SW_DST_RBSWAP_SHIFT)                   /* 0x00000010 */
#define RGA_DST_INFO_SW_DST_ALPHA_SWAP_SHIFT               (5U)
#define RGA_DST_INFO_SW_DST_ALPHA_SWAP_MASK                (0x1U << RGA_DST_INFO_SW_DST_ALPHA_SWAP_SHIFT)               /* 0x00000020 */
#define RGA_DST_INFO_SW_DST_UVSWAP_SHIFT                   (6U)
#define RGA_DST_INFO_SW_DST_UVSWAP_MASK                    (0x1U << RGA_DST_INFO_SW_DST_UVSWAP_SHIFT)                   /* 0x00000040 */
#define RGA_DST_INFO_SW_SRC1_FMT_SHIFT                     (7U)
#define RGA_DST_INFO_SW_SRC1_FMT_MASK                      (0x7U << RGA_DST_INFO_SW_SRC1_FMT_SHIFT)                     /* 0x00000380 */
#define RGA_DST_INFO_SW_SRC1_RBSWAP_SHIFT                  (10U)
#define RGA_DST_INFO_SW_SRC1_RBSWAP_MASK                   (0x1U << RGA_DST_INFO_SW_SRC1_RBSWAP_SHIFT)                  /* 0x00000400 */
#define RGA_DST_INFO_SW_SRC1_ALPHA_SWAP_SHIFT              (11U)
#define RGA_DST_INFO_SW_SRC1_ALPHA_SWAP_MASK               (0x1U << RGA_DST_INFO_SW_SRC1_ALPHA_SWAP_SHIFT)              /* 0x00000800 */
#define RGA_DST_INFO_SW_SRC1_DITHER_UP_SHIFT               (12U)
#define RGA_DST_INFO_SW_SRC1_DITHER_UP_MASK                (0x1U << RGA_DST_INFO_SW_SRC1_DITHER_UP_SHIFT)               /* 0x00001000 */
#define RGA_DST_INFO_SW_DITHER_DOWN_SHIFT                  (13U)
#define RGA_DST_INFO_SW_DITHER_DOWN_MASK                   (0x1U << RGA_DST_INFO_SW_DITHER_DOWN_SHIFT)                  /* 0x00002000 */
#define RGA_DST_INFO_SW_DITHER_MODE_SHIFT                  (14U)
#define RGA_DST_INFO_SW_DITHER_MODE_MASK                   (0x3U << RGA_DST_INFO_SW_DITHER_MODE_SHIFT)                  /* 0x0000C000 */
#define RGA_DST_INFO_SW_DST_CSC_MODE_SHIFT                 (16U)
#define RGA_DST_INFO_SW_DST_CSC_MODE_MASK                  (0x3U << RGA_DST_INFO_SW_DST_CSC_MODE_SHIFT)                 /* 0x00030000 */
#define RGA_DST_INFO_SW_DST_CSC_CLIP_SHIFT                 (18U)
#define RGA_DST_INFO_SW_DST_CSC_CLIP_MASK                  (0x1U << RGA_DST_INFO_SW_DST_CSC_CLIP_SHIFT)                 /* 0x00040000 */
#define RGA_DST_INFO_SW_SRC1_CSC_MODE_SHIFT                (19U)
#define RGA_DST_INFO_SW_SRC1_CSC_MODE_MASK                 (0x3U << RGA_DST_INFO_SW_SRC1_CSC_MODE_SHIFT)                /* 0x00180000 */
#define RGA_DST_INFO_SW_SRC1_CSC_CLIP_SHIFT                (21U)
#define RGA_DST_INFO_SW_SRC1_CSC_CLIP_MASK                 (0x1U << RGA_DST_INFO_SW_SRC1_CSC_CLIP_SHIFT)                /* 0x00200000 */
/* DST_BASE0 */
#define RGA_DST_BASE0_SW_DST_BASE0_SHIFT                   (0U)
#define RGA_DST_BASE0_SW_DST_BASE0_MASK                    (0xFFFFFFFFU << RGA_DST_BASE0_SW_DST_BASE0_SHIFT)            /* 0xFFFFFFFF */
/* DST_BASE1 */
#define RGA_DST_BASE1_SW_DST_BASE1_SHIFT                   (0U)
#define RGA_DST_BASE1_SW_DST_BASE1_MASK                    (0xFFFFFFFFU << RGA_DST_BASE1_SW_DST_BASE1_SHIFT)            /* 0xFFFFFFFF */
/* DST_BASE2 */
#define RGA_DST_BASE2_SW_DST_BASE2_SHIFT                   (0U)
#define RGA_DST_BASE2_SW_DST_BASE2_MASK                    (0xFFFFFFFFU << RGA_DST_BASE2_SW_DST_BASE2_SHIFT)            /* 0xFFFFFFFF */
/* DST_VIR_INFO */
#define RGA_DST_VIR_INFO_SW_DST_VIR_STRIDE_SHIFT           (0U)
#define RGA_DST_VIR_INFO_SW_DST_VIR_STRIDE_MASK            (0xFFFU << RGA_DST_VIR_INFO_SW_DST_VIR_STRIDE_SHIFT)         /* 0x00000FFF */
#define RGA_DST_VIR_INFO_RESERVED1_SHIFT                   (12U)
#define RGA_DST_VIR_INFO_RESERVED1_MASK                    (0xFU << RGA_DST_VIR_INFO_RESERVED1_SHIFT)                   /* 0x0000F000 */
#define RGA_DST_VIR_INFO_SW_SRC1_VIR_STRIDE_SHIFT          (16U)
#define RGA_DST_VIR_INFO_SW_SRC1_VIR_STRIDE_MASK           (0xFFFU << RGA_DST_VIR_INFO_SW_SRC1_VIR_STRIDE_SHIFT)        /* 0x0FFF0000 */
#define RGA_DST_VIR_INFO_RESERVED2_SHIFT                   (28U)
#define RGA_DST_VIR_INFO_RESERVED2_MASK                    (0xFU << RGA_DST_VIR_INFO_RESERVED2_SHIFT)                   /* 0xF0000000 */
/* DST_ACT_INFO */
#define RGA_DST_ACT_INFO_SW_DST_ACT_WIDTH_SHIFT            (0U)
#define RGA_DST_ACT_INFO_SW_DST_ACT_WIDTH_MASK             (0xFFFU << RGA_DST_ACT_INFO_SW_DST_ACT_WIDTH_SHIFT)          /* 0x00000FFF */
#define RGA_DST_ACT_INFO_RESERVED1_SHIFT                   (12U)
#define RGA_DST_ACT_INFO_RESERVED1_MASK                    (0xFU << RGA_DST_ACT_INFO_RESERVED1_SHIFT)                   /* 0x0000F000 */
#define RGA_DST_ACT_INFO_SW_DST_ACT_HEIGHT_SHIFT           (16U)
#define RGA_DST_ACT_INFO_SW_DST_ACT_HEIGHT_MASK            (0xFFFU << RGA_DST_ACT_INFO_SW_DST_ACT_HEIGHT_SHIFT)         /* 0x0FFF0000 */
#define RGA_DST_ACT_INFO_RESERVED2_SHIFT                   (28U)
#define RGA_DST_ACT_INFO_RESERVED2_MASK                    (0xFU << RGA_DST_ACT_INFO_RESERVED2_SHIFT)                   /* 0xF0000000 */
/* ALPHA_CTRL0 */
#define RGA_ALPHA_CTRL0_SW_ALPHA_ROP_E_SHIFT               (0U)
#define RGA_ALPHA_CTRL0_SW_ALPHA_ROP_E_MASK                (0x1U << RGA_ALPHA_CTRL0_SW_ALPHA_ROP_E_SHIFT)               /* 0x00000001 */
#define RGA_ALPHA_CTRL0_SW_ALPHA_ROP_SEL_SHIFT             (1U)
#define RGA_ALPHA_CTRL0_SW_ALPHA_ROP_SEL_MASK              (0x1U << RGA_ALPHA_CTRL0_SW_ALPHA_ROP_SEL_SHIFT)             /* 0x00000002 */
#define RGA_ALPHA_CTRL0_SW_ROP_MODE_SHIFT                  (2U)
#define RGA_ALPHA_CTRL0_SW_ROP_MODE_MASK                   (0x3U << RGA_ALPHA_CTRL0_SW_ROP_MODE_SHIFT)                  /* 0x0000000C */
#define RGA_ALPHA_CTRL0_SW_SRC_GLOBAL_ALPHA_SHIFT          (4U)
#define RGA_ALPHA_CTRL0_SW_SRC_GLOBAL_ALPHA_MASK           (0xFFU << RGA_ALPHA_CTRL0_SW_SRC_GLOBAL_ALPHA_SHIFT)         /* 0x00000FF0 */
#define RGA_ALPHA_CTRL0_SW_DST_GLOBAL_ALPHA_SHIFT          (12U)
#define RGA_ALPHA_CTRL0_SW_DST_GLOBAL_ALPHA_MASK           (0xFFU << RGA_ALPHA_CTRL0_SW_DST_GLOBAL_ALPHA_SHIFT)         /* 0x000FF000 */
#define RGA_ALPHA_CTRL0_SW_MASK_ENDIAN_SHIFT               (20U)
#define RGA_ALPHA_CTRL0_SW_MASK_ENDIAN_MASK                (0x1U << RGA_ALPHA_CTRL0_SW_MASK_ENDIAN_SHIFT)               /* 0x00100000 */
#define RGA_ALPHA_CTRL0_RESERVED_SHIFT                     (21U)
#define RGA_ALPHA_CTRL0_RESERVED_MASK                      (0x7FFU << RGA_ALPHA_CTRL0_RESERVED_SHIFT)                   /* 0xFFE00000 */
/* ALPHA_CTRL1 */
#define RGA_ALPHA_CTRL1_SW_DST_COLOR_M0_SHIFT              (0U)
#define RGA_ALPHA_CTRL1_SW_DST_COLOR_M0_MASK               (0x1U << RGA_ALPHA_CTRL1_SW_DST_COLOR_M0_SHIFT)              /* 0x00000001 */
#define RGA_ALPHA_CTRL1_SW_SRC_COLOR_M0_SHIFT              (1U)
#define RGA_ALPHA_CTRL1_SW_SRC_COLOR_M0_MASK               (0x1U << RGA_ALPHA_CTRL1_SW_SRC_COLOR_M0_SHIFT)              /* 0x00000002 */
#define RGA_ALPHA_CTRL1_SW_DST_FACTOR_M0_SHIFT             (2U)
#define RGA_ALPHA_CTRL1_SW_DST_FACTOR_M0_MASK              (0x7U << RGA_ALPHA_CTRL1_SW_DST_FACTOR_M0_SHIFT)             /* 0x0000001C */
#define RGA_ALPHA_CTRL1_SW_SRC_FACTOR_M0_SHIFT             (5U)
#define RGA_ALPHA_CTRL1_SW_SRC_FACTOR_M0_MASK              (0x7U << RGA_ALPHA_CTRL1_SW_SRC_FACTOR_M0_SHIFT)             /* 0x000000E0 */
#define RGA_ALPHA_CTRL1_SW_DST_ALPHA_CAL_M0_SHIFT          (8U)
#define RGA_ALPHA_CTRL1_SW_DST_ALPHA_CAL_M0_MASK           (0x1U << RGA_ALPHA_CTRL1_SW_DST_ALPHA_CAL_M0_SHIFT)          /* 0x00000100 */
#define RGA_ALPHA_CTRL1_SW_SRC_ALPHA_CAL_M0_SHIFT          (9U)
#define RGA_ALPHA_CTRL1_SW_SRC_ALPHA_CAL_M0_MASK           (0x1U << RGA_ALPHA_CTRL1_SW_SRC_ALPHA_CAL_M0_SHIFT)          /* 0x00000200 */
#define RGA_ALPHA_CTRL1_SW_DST_BLEND_M0_SHIFT              (10U)
#define RGA_ALPHA_CTRL1_SW_DST_BLEND_M0_MASK               (0x3U << RGA_ALPHA_CTRL1_SW_DST_BLEND_M0_SHIFT)              /* 0x00000C00 */
#define RGA_ALPHA_CTRL1_SW_SRC_BLEND_M0_SHIFT              (12U)
#define RGA_ALPHA_CTRL1_SW_SRC_BLEND_M0_MASK               (0x3U << RGA_ALPHA_CTRL1_SW_SRC_BLEND_M0_SHIFT)              /* 0x00003000 */
#define RGA_ALPHA_CTRL1_SW_DST_ALPHA_M0_SHIFT              (14U)
#define RGA_ALPHA_CTRL1_SW_DST_ALPHA_M0_MASK               (0x1U << RGA_ALPHA_CTRL1_SW_DST_ALPHA_M0_SHIFT)              /* 0x00004000 */
#define RGA_ALPHA_CTRL1_SW_SRC_ALPHA_M0_SHIFT              (15U)
#define RGA_ALPHA_CTRL1_SW_SRC_ALPHA_M0_MASK               (0x1U << RGA_ALPHA_CTRL1_SW_SRC_ALPHA_M0_SHIFT)              /* 0x00008000 */
#define RGA_ALPHA_CTRL1_SW_DST_FACTOR_M1_SHIFT             (16U)
#define RGA_ALPHA_CTRL1_SW_DST_FACTOR_M1_MASK              (0x7U << RGA_ALPHA_CTRL1_SW_DST_FACTOR_M1_SHIFT)             /* 0x00070000 */
#define RGA_ALPHA_CTRL1_W_SRC_FACTOR_M1_SHIFT              (19U)
#define RGA_ALPHA_CTRL1_W_SRC_FACTOR_M1_MASK               (0x7U << RGA_ALPHA_CTRL1_W_SRC_FACTOR_M1_SHIFT)              /* 0x00380000 */
#define RGA_ALPHA_CTRL1_SW_DST_ALPHA_CAL_M1_SHIFT          (22U)
#define RGA_ALPHA_CTRL1_SW_DST_ALPHA_CAL_M1_MASK           (0x1U << RGA_ALPHA_CTRL1_SW_DST_ALPHA_CAL_M1_SHIFT)          /* 0x00400000 */
#define RGA_ALPHA_CTRL1_SW_SRC_ALPHA_CAL_M1_SHIFT          (23U)
#define RGA_ALPHA_CTRL1_SW_SRC_ALPHA_CAL_M1_MASK           (0x1U << RGA_ALPHA_CTRL1_SW_SRC_ALPHA_CAL_M1_SHIFT)          /* 0x00800000 */
#define RGA_ALPHA_CTRL1_SW_DST_BLEND_M1_SHIFT              (24U)
#define RGA_ALPHA_CTRL1_SW_DST_BLEND_M1_MASK               (0x3U << RGA_ALPHA_CTRL1_SW_DST_BLEND_M1_SHIFT)              /* 0x03000000 */
#define RGA_ALPHA_CTRL1_SW_SRC_BLEND_M1_SHIFT              (26U)
#define RGA_ALPHA_CTRL1_SW_SRC_BLEND_M1_MASK               (0x3U << RGA_ALPHA_CTRL1_SW_SRC_BLEND_M1_SHIFT)              /* 0x0C000000 */
#define RGA_ALPHA_CTRL1_SW_DST_ALPHA_M1_SHIFT              (28U)
#define RGA_ALPHA_CTRL1_SW_DST_ALPHA_M1_MASK               (0x1U << RGA_ALPHA_CTRL1_SW_DST_ALPHA_M1_SHIFT)              /* 0x10000000 */
#define RGA_ALPHA_CTRL1_SW_SRC_ALPHA_M1_SHIFT              (29U)
#define RGA_ALPHA_CTRL1_SW_SRC_ALPHA_M1_MASK               (0x1U << RGA_ALPHA_CTRL1_SW_SRC_ALPHA_M1_SHIFT)              /* 0x20000000 */
#define RGA_ALPHA_CTRL1_RESERVED_SHIFT                     (30U)
#define RGA_ALPHA_CTRL1_RESERVED_MASK                      (0x3U << RGA_ALPHA_CTRL1_RESERVED_SHIFT)                     /* 0xC0000000 */
/* FADING_CTRL */
#define RGA_FADING_CTRL_SW_FADING_OFFSET_R_SHIFT           (0U)
#define RGA_FADING_CTRL_SW_FADING_OFFSET_R_MASK            (0xFFU << RGA_FADING_CTRL_SW_FADING_OFFSET_R_SHIFT)          /* 0x000000FF */
#define RGA_FADING_CTRL_SW_FADING_OFFSET_G_SHIFT           (8U)
#define RGA_FADING_CTRL_SW_FADING_OFFSET_G_MASK            (0xFFU << RGA_FADING_CTRL_SW_FADING_OFFSET_G_SHIFT)          /* 0x0000FF00 */
#define RGA_FADING_CTRL_SW_FADING_OFFSET_B_SHIFT           (16U)
#define RGA_FADING_CTRL_SW_FADING_OFFSET_B_MASK            (0xFFU << RGA_FADING_CTRL_SW_FADING_OFFSET_B_SHIFT)          /* 0x00FF0000 */
#define RGA_FADING_CTRL_SW_FADING_EN_SHIFT                 (24U)
#define RGA_FADING_CTRL_SW_FADING_EN_MASK                  (0x1U << RGA_FADING_CTRL_SW_FADING_EN_SHIFT)                 /* 0x01000000 */
#define RGA_FADING_CTRL_RESERVED_SHIFT                     (25U)
#define RGA_FADING_CTRL_RESERVED_MASK                      (0x7FU << RGA_FADING_CTRL_RESERVED_SHIFT)                    /* 0xFE000000 */
/* PAT_CON */
#define RGA_PAT_CON_SW_PAT_WIDTH_SHIFT                     (0U)
#define RGA_PAT_CON_SW_PAT_WIDTH_MASK                      (0xFFU << RGA_PAT_CON_SW_PAT_WIDTH_SHIFT)                    /* 0x000000FF */
#define RGA_PAT_CON_SW_PAT_HEIGHT_SHIFT                    (8U)
#define RGA_PAT_CON_SW_PAT_HEIGHT_MASK                     (0xFFU << RGA_PAT_CON_SW_PAT_HEIGHT_SHIFT)                   /* 0x0000FF00 */
#define RGA_PAT_CON_SW_PAT_OFFSET_X_SHIFT                  (16U)
#define RGA_PAT_CON_SW_PAT_OFFSET_X_MASK                   (0xFFU << RGA_PAT_CON_SW_PAT_OFFSET_X_SHIFT)                 /* 0x00FF0000 */
#define RGA_PAT_CON_SW_PAT_OFFSET_Y_SHIFT                  (24U)
#define RGA_PAT_CON_SW_PAT_OFFSET_Y_MASK                   (0xFFU << RGA_PAT_CON_SW_PAT_OFFSET_Y_SHIFT)                 /* 0xFF000000 */
/* ROP_CON0 */
#define RGA_ROP_CON0_SW_ROP3_CODE0_SHIFT                   (0U)
#define RGA_ROP_CON0_SW_ROP3_CODE0_MASK                    (0x1FFFFFFU << RGA_ROP_CON0_SW_ROP3_CODE0_SHIFT)             /* 0x01FFFFFF */
#define RGA_ROP_CON0_RESERVED_SHIFT                        (25U)
#define RGA_ROP_CON0_RESERVED_MASK                         (0x7FU << RGA_ROP_CON0_RESERVED_SHIFT)                       /* 0xFE000000 */
/* CP_GR_G */
#define RGA_CP_GR_G_SW_GRADIENT_X_G_SHIFT                  (0U)
#define RGA_CP_GR_G_SW_GRADIENT_X_G_MASK                   (0xFFFFU << RGA_CP_GR_G_SW_GRADIENT_X_G_SHIFT)               /* 0x0000FFFF */
#define RGA_CP_GR_G_SW_GRADIENT_Y_G_SHIFT                  (16U)
#define RGA_CP_GR_G_SW_GRADIENT_Y_G_MASK                   (0xFFFFU << RGA_CP_GR_G_SW_GRADIENT_Y_G_SHIFT)               /* 0xFFFF0000 */
/* ROP_CON1 */
#define RGA_ROP_CON1_SW_ROP3_CODE1_SHIFT                   (0U)
#define RGA_ROP_CON1_SW_ROP3_CODE1_MASK                    (0x1FFFFFFU << RGA_ROP_CON1_SW_ROP3_CODE1_SHIFT)             /* 0x01FFFFFF */
#define RGA_ROP_CON1_RESERVED_SHIFT                        (25U)
#define RGA_ROP_CON1_RESERVED_MASK                         (0x7FU << RGA_ROP_CON1_RESERVED_SHIFT)                       /* 0xFE000000 */
/* CP_GR_R */
#define RGA_CP_GR_R_SW_GRADIENT_X_R_SHIFT                  (0U)
#define RGA_CP_GR_R_SW_GRADIENT_X_R_MASK                   (0xFFFFU << RGA_CP_GR_R_SW_GRADIENT_X_R_SHIFT)               /* 0x0000FFFF */
#define RGA_CP_GR_R_SW_GRADIENT_Y_R_SHIFT                  (16U)
#define RGA_CP_GR_R_SW_GRADIENT_Y_R_MASK                   (0xFFFFU << RGA_CP_GR_R_SW_GRADIENT_Y_R_SHIFT)               /* 0xFFFF0000 */
/* MASK_BASE */
#define RGA_MASK_BASE_SW_MASK_BASE_SHIFT                   (0U)
#define RGA_MASK_BASE_SW_MASK_BASE_MASK                    (0xFFFFFFFFU << RGA_MASK_BASE_SW_MASK_BASE_SHIFT)            /* 0xFFFFFFFF */
/* MMU_CTRL1 */
#define RGA_MMU_CTRL1_SW_SRC_MMU_EN_SHIFT                  (0U)
#define RGA_MMU_CTRL1_SW_SRC_MMU_EN_MASK                   (0x1U << RGA_MMU_CTRL1_SW_SRC_MMU_EN_SHIFT)                  /* 0x00000001 */
#define RGA_MMU_CTRL1_SW_SRC_MMU_FLUSH_SHIFT               (1U)
#define RGA_MMU_CTRL1_SW_SRC_MMU_FLUSH_MASK                (0x1U << RGA_MMU_CTRL1_SW_SRC_MMU_FLUSH_SHIFT)               /* 0x00000002 */
#define RGA_MMU_CTRL1_SW_SRC_MMU_PREFETCH_EN_SHIFT         (2U)
#define RGA_MMU_CTRL1_SW_SRC_MMU_PREFETCH_EN_MASK          (0x1U << RGA_MMU_CTRL1_SW_SRC_MMU_PREFETCH_EN_SHIFT)         /* 0x00000004 */
#define RGA_MMU_CTRL1_SW_SRC_MMU_PREFETCH_DIR_SHIFT        (3U)
#define RGA_MMU_CTRL1_SW_SRC_MMU_PREFETCH_DIR_MASK         (0x1U << RGA_MMU_CTRL1_SW_SRC_MMU_PREFETCH_DIR_SHIFT)        /* 0x00000008 */
#define RGA_MMU_CTRL1_SW_SRC1_MMU_EN_SHIFT                 (4U)
#define RGA_MMU_CTRL1_SW_SRC1_MMU_EN_MASK                  (0x1U << RGA_MMU_CTRL1_SW_SRC1_MMU_EN_SHIFT)                 /* 0x00000010 */
#define RGA_MMU_CTRL1_SW_SRC1_MMU_FLUSH_SHIFT              (5U)
#define RGA_MMU_CTRL1_SW_SRC1_MMU_FLUSH_MASK               (0x1U << RGA_MMU_CTRL1_SW_SRC1_MMU_FLUSH_SHIFT)              /* 0x00000020 */
#define RGA_MMU_CTRL1_SW_SRC1_MMU_PREFETCH_EN_SHIFT        (6U)
#define RGA_MMU_CTRL1_SW_SRC1_MMU_PREFETCH_EN_MASK         (0x1U << RGA_MMU_CTRL1_SW_SRC1_MMU_PREFETCH_EN_SHIFT)        /* 0x00000040 */
#define RGA_MMU_CTRL1_SW_SRC1_MMU_PREFETCH_DIR_SHIFT       (7U)
#define RGA_MMU_CTRL1_SW_SRC1_MMU_PREFETCH_DIR_MASK        (0x1U << RGA_MMU_CTRL1_SW_SRC1_MMU_PREFETCH_DIR_SHIFT)       /* 0x00000080 */
#define RGA_MMU_CTRL1_SW_DST_MMU_EN_SHIFT                  (8U)
#define RGA_MMU_CTRL1_SW_DST_MMU_EN_MASK                   (0x1U << RGA_MMU_CTRL1_SW_DST_MMU_EN_SHIFT)                  /* 0x00000100 */
#define RGA_MMU_CTRL1_SW_DST_MMU_FLUSH_SHIFT               (9U)
#define RGA_MMU_CTRL1_SW_DST_MMU_FLUSH_MASK                (0x1U << RGA_MMU_CTRL1_SW_DST_MMU_FLUSH_SHIFT)               /* 0x00000200 */
#define RGA_MMU_CTRL1_SW_DST_MMU_PREFETCH_EN_SHIFT         (10U)
#define RGA_MMU_CTRL1_SW_DST_MMU_PREFETCH_EN_MASK          (0x1U << RGA_MMU_CTRL1_SW_DST_MMU_PREFETCH_EN_SHIFT)         /* 0x00000400 */
#define RGA_MMU_CTRL1_SW_DST_MMU_PREFETCH_DIR_SHIFT        (11U)
#define RGA_MMU_CTRL1_SW_DST_MMU_PREFETCH_DIR_MASK         (0x1U << RGA_MMU_CTRL1_SW_DST_MMU_PREFETCH_DIR_SHIFT)        /* 0x00000800 */
#define RGA_MMU_CTRL1_SW_ELS_MMU_EN_SHIFT                  (12U)
#define RGA_MMU_CTRL1_SW_ELS_MMU_EN_MASK                   (0x1U << RGA_MMU_CTRL1_SW_ELS_MMU_EN_SHIFT)                  /* 0x00001000 */
#define RGA_MMU_CTRL1_SW_ELS_MMU_FLUSH_SHIFT               (13U)
#define RGA_MMU_CTRL1_SW_ELS_MMU_FLUSH_MASK                (0x1U << RGA_MMU_CTRL1_SW_ELS_MMU_FLUSH_SHIFT)               /* 0x00002000 */
#define RGA_MMU_CTRL1_RESERVED_SHIFT                       (14U)
#define RGA_MMU_CTRL1_RESERVED_MASK                        (0x3FFFFU << RGA_MMU_CTRL1_RESERVED_SHIFT)                   /* 0xFFFFC000 */
/* MMU_SRC_BASE */
#define RGA_MMU_SRC_BASE_SW_MMU_SRC_BASE_SHIFT             (0U)
#define RGA_MMU_SRC_BASE_SW_MMU_SRC_BASE_MASK              (0xFFFFFFFU << RGA_MMU_SRC_BASE_SW_MMU_SRC_BASE_SHIFT)       /* 0x0FFFFFFF */
/* MMU_SRC1_BASE */
#define RGA_MMU_SRC1_BASE_SW_MMU_SRC1_BASE_SHIFT           (0U)
#define RGA_MMU_SRC1_BASE_SW_MMU_SRC1_BASE_MASK            (0xFFFFFFFU << RGA_MMU_SRC1_BASE_SW_MMU_SRC1_BASE_SHIFT)     /* 0x0FFFFFFF */
/* MMU_DST_BASE */
#define RGA_MMU_DST_BASE_SW_MMU_DST_BASE_SHIFT             (0U)
#define RGA_MMU_DST_BASE_SW_MMU_DST_BASE_MASK              (0xFFFFFFFU << RGA_MMU_DST_BASE_SW_MMU_DST_BASE_SHIFT)       /* 0x0FFFFFFF */
/* MMU_ELS_BASE */
#define RGA_MMU_ELS_BASE_SW_MMU_ELS_BASE_SHIFT             (0U)
#define RGA_MMU_ELS_BASE_SW_MMU_ELS_BASE_MASK              (0xFFFFFFFU << RGA_MMU_ELS_BASE_SW_MMU_ELS_BASE_SHIFT)       /* 0x0FFFFFFF */
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __SOC_H */
