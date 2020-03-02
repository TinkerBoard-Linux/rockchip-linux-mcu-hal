/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2020 Fuzhou Rockchip Electronics Co., Ltd
 */

#ifndef __RV1126_H
#define __RV1126_H
#ifdef __cplusplus
  extern "C" {
#endif
/****************************************************************************************/
/*                                                                                      */
/*                               Module Structure Section                               */
/*                                                                                      */
/****************************************************************************************/
#ifndef __ASSEMBLY__
/* GRF Register Structure Define */
struct GRF_REG {
    __IO uint32_t SOC_CON0;                           /* Address Offset: 0x0000 */
    __IO uint32_t SOC_CON1;                           /* Address Offset: 0x0004 */
         uint32_t RESERVED0008;                       /* Address Offset: 0x0008 */
    __IO uint32_t SOC_CON2;                           /* Address Offset: 0x0009 */
         uint32_t RESERVED000D;                       /* Address Offset: 0x000D */
    __I  uint32_t SOC_STATUS0;                        /* Address Offset: 0x0010 */
    __I  uint32_t SOC_STATUS1;                        /* Address Offset: 0x0014 */
         uint32_t RESERVED0018[2];                    /* Address Offset: 0x0018 */
    __IO uint32_t CPU_CON0;                           /* Address Offset: 0x0020 */
    __IO uint32_t CPU_CON1;                           /* Address Offset: 0x0024 */
         uint32_t RESERVED0028[2];                    /* Address Offset: 0x0028 */
    __IO uint32_t CPU_STATUS0;                        /* Address Offset: 0x0030 */
         uint32_t RESERVED0034[3];                    /* Address Offset: 0x0034 */
    __IO uint32_t INTCONNET_CON0;                     /* Address Offset: 0x0040 */
    __IO uint32_t INTCONNET_CON1;                     /* Address Offset: 0x0044 */
    __IO uint32_t INTCONNET_CON2;                     /* Address Offset: 0x0048 */
    __IO uint32_t INTCONNET_CON3;                     /* Address Offset: 0x004C */
    __IO uint32_t USBHOST_CON0;                       /* Address Offset: 0x0050 */
    __IO uint32_t USBHOST_CON1;                       /* Address Offset: 0x0054 */
    __IO uint32_t USBHOST_STATUS0;                    /* Address Offset: 0x0058 */
    __IO uint32_t USBOTG_CON0;                        /* Address Offset: 0x005C */
    __IO uint32_t USBOTG_CON1;                        /* Address Offset: 0x0060 */
    __I  uint32_t USBOTG_STATUS0;                     /* Address Offset: 0x0064 */
    __I  uint32_t USBOTG_STATUS1;                     /* Address Offset: 0x0068 */
    __I  uint32_t USBOTG_STATUS2;                     /* Address Offset: 0x006C */
    __IO uint32_t MAC_CON0;                           /* Address Offset: 0x0070 */
    __IO uint32_t MAC_CON1;                           /* Address Offset: 0x0074 */
    __IO uint32_t MAC_CON2;                           /* Address Offset: 0x0078 */
         uint32_t RESERVED007C[2];                    /* Address Offset: 0x007C */
    __I  uint32_t MAC_STATUS0;                        /* Address Offset: 0x0084 */
    __I  uint32_t MAC_STATUS1;                        /* Address Offset: 0x0088 */
    __I  uint32_t MAC_STATUS2;                        /* Address Offset: 0x008C */
    __IO uint32_t MEM_CON0;                           /* Address Offset: 0x0090 */
    __IO uint32_t MEM_CON1;                           /* Address Offset: 0x0094 */
    __IO uint32_t MEM_CON2;                           /* Address Offset: 0x0098 */
    __IO uint32_t MEM_CON3;                           /* Address Offset: 0x009C */
         uint32_t RESERVED00A0[24];                   /* Address Offset: 0x00A0 */
    __IO uint32_t TSADC_CON;                          /* Address Offset: 0x0100 */
         uint32_t RESERVED0104[3];                    /* Address Offset: 0x0104 */
    __I  uint32_t CHIP_ID;                            /* Address Offset: 0x0110 */
         uint32_t RESERVED0114[16315];                /* Address Offset: 0x0114 */
    __IO uint32_t GPIO0C_IOMUX_H;                     /* Address Offset: 0x10000 */
    __IO uint32_t GPIO0D_IOMUX_L;                     /* Address Offset: 0x10004 */
    __IO uint32_t GPIO0D_IOMUX_H;                     /* Address Offset: 0x10008 */
         uint32_t RESERVED1000C;                      /* Address Offset: 0x1000C */
    __IO uint32_t GPIO1A_IOMUX_L;                     /* Address Offset: 0x10010 */
    __IO uint32_t GPIO1A_IOMUX_H;                     /* Address Offset: 0x10014 */
    __IO uint32_t GPIO1B_IOMUX_L;                     /* Address Offset: 0x10018 */
    __IO uint32_t GPIO1B_IOMUX_H;                     /* Address Offset: 0x1001C */
    __IO uint32_t GPIO1C_IOMUX_L;                     /* Address Offset: 0x10020 */
    __IO uint32_t GPIO1C_IOMUX_H;                     /* Address Offset: 0x10024 */
    __IO uint32_t GPIO1D_IOMUX_L;                     /* Address Offset: 0x10028 */
    __IO uint32_t GPIO1D_IOMUX_H;                     /* Address Offset: 0x1002C */
    __IO uint32_t GPIO2A_IOMUX_L;                     /* Address Offset: 0x10030 */
    __IO uint32_t GPIO2A_IOMUX_H;                     /* Address Offset: 0x10034 */
    __IO uint32_t GPIO2B_IOMUX_L;                     /* Address Offset: 0x10038 */
    __IO uint32_t GPIO2B_IOMUX_H;                     /* Address Offset: 0x1003C */
    __IO uint32_t GPIO2C_IOMUX_L;                     /* Address Offset: 0x10040 */
    __IO uint32_t GPIO2C_IOMUX_H;                     /* Address Offset: 0x10044 */
    __IO uint32_t GPIO2D_IOMUX_L;                     /* Address Offset: 0x10048 */
    __IO uint32_t GPIO2D_IOMUX_H;                     /* Address Offset: 0x1004C */
    __IO uint32_t GPIO3A_IOMUX_L;                     /* Address Offset: 0x10050 */
    __IO uint32_t GPIO3A_IOMUX_H;                     /* Address Offset: 0x10054 */
    __IO uint32_t GPIO3B_IOMUX_L;                     /* Address Offset: 0x10058 */
    __IO uint32_t GPIO3B_IOMUX_H;                     /* Address Offset: 0x1005C */
    __IO uint32_t GPIO3C_IOMUX_L;                     /* Address Offset: 0x10060 */
    __IO uint32_t GPIO3C_IOMUX_H;                     /* Address Offset: 0x10064 */
    __IO uint32_t GPIO3D_IOMUX_L;                     /* Address Offset: 0x10068 */
    __IO uint32_t GPIO3D_IOMUX_H;                     /* Address Offset: 0x1006C */
    __IO uint32_t GPIO4A_IOMUX_L;                     /* Address Offset: 0x10070 */
         uint32_t RESERVED10074[3];                   /* Address Offset: 0x10074 */
    __IO uint32_t GPIO0C_DS_H;                        /* Address Offset: 0x10080 */
    __IO uint32_t GPIO0D_DS_L;                        /* Address Offset: 0x10084 */
    __IO uint32_t GPIO0D_DS_H;                        /* Address Offset: 0x10088 */
         uint32_t RESERVED1008C;                      /* Address Offset: 0x1008C */
    __IO uint32_t GPIO1A_DS_L;                        /* Address Offset: 0x10090 */
    __IO uint32_t GPIO1A_DS_H;                        /* Address Offset: 0x10094 */
    __IO uint32_t GPIO1B_DS_L;                        /* Address Offset: 0x10098 */
    __IO uint32_t GPIO1B_DS_H;                        /* Address Offset: 0x1009C */
    __IO uint32_t GPIO1C_DS_L;                        /* Address Offset: 0x100A0 */
    __IO uint32_t GPIO1C_DS_H;                        /* Address Offset: 0x100A4 */
    __IO uint32_t GPIO1D_DS_L;                        /* Address Offset: 0x100A8 */
    __IO uint32_t GPIO1D_DS_H;                        /* Address Offset: 0x100AC */
    __IO uint32_t GPIO2A_DS_L;                        /* Address Offset: 0x100B0 */
    __IO uint32_t GPIO2A_DS_H;                        /* Address Offset: 0x100B4 */
    __IO uint32_t GPIO2B_DS_L;                        /* Address Offset: 0x100B8 */
    __IO uint32_t GPIO2B_DS_H;                        /* Address Offset: 0x100BC */
    __IO uint32_t GPIO2C_DS_L;                        /* Address Offset: 0x100C0 */
    __IO uint32_t GPIO2C_DS_H;                        /* Address Offset: 0x100C4 */
    __IO uint32_t GPIO2D_DS_L;                        /* Address Offset: 0x100C8 */
    __IO uint32_t GPIO2D_DS_H;                        /* Address Offset: 0x100CC */
    __IO uint32_t GPIO3A_DS_L;                        /* Address Offset: 0x100D0 */
    __IO uint32_t GPIO3A_DS_H;                        /* Address Offset: 0x100D4 */
    __IO uint32_t GPIO3B_DS_L;                        /* Address Offset: 0x100D8 */
    __IO uint32_t GPIO3B_DS_H;                        /* Address Offset: 0x100DC */
    __IO uint32_t GPIO3C_DS_L;                        /* Address Offset: 0x100E0 */
    __IO uint32_t GPIO3C_DS_H;                        /* Address Offset: 0x100E4 */
    __IO uint32_t GPIO3D_DS_L;                        /* Address Offset: 0x100E8 */
    __IO uint32_t GPIO3D_DS_H;                        /* Address Offset: 0x100EC */
    __IO uint32_t GPIO4A_DS_L;                        /* Address Offset: 0x100F0 */
         uint32_t RESERVED100F4[3];                   /* Address Offset: 0x100F4 */
    __IO uint32_t GPIO0C_P_H;                         /* Address Offset: 0x10100 */
    __IO uint32_t GPIO0D_P;                           /* Address Offset: 0x10104 */
    __IO uint32_t GPIO1A_P;                           /* Address Offset: 0x10108 */
    __IO uint32_t GPIO1B_P;                           /* Address Offset: 0x1010C */
    __IO uint32_t GPIO1C_P;                           /* Address Offset: 0x10110 */
    __IO uint32_t GPIO1D_P;                           /* Address Offset: 0x10114 */
    __IO uint32_t GPIO2A_P;                           /* Address Offset: 0x10118 */
    __IO uint32_t GPIO2B_P;                           /* Address Offset: 0x1011C */
    __IO uint32_t GPIO2C_P;                           /* Address Offset: 0x10120 */
    __IO uint32_t GPIO2D_P;                           /* Address Offset: 0x10124 */
    __IO uint32_t GPIO3A_P;                           /* Address Offset: 0x10128 */
    __IO uint32_t GPIO3B_P;                           /* Address Offset: 0x1012C */
    __IO uint32_t GPIO3C_P;                           /* Address Offset: 0x10130 */
    __IO uint32_t GPIO3D_P;                           /* Address Offset: 0x10134 */
    __IO uint32_t GPIO4A_P;                           /* Address Offset: 0x10138 */
         uint32_t RESERVED1013C;                      /* Address Offset: 0x1013C */
    __IO uint32_t GPIO0C_IE_H;                        /* Address Offset: 0x10140 */
    __IO uint32_t GPIO0D_IE;                          /* Address Offset: 0x10144 */
    __IO uint32_t GPIO1A_IE;                          /* Address Offset: 0x10148 */
    __IO uint32_t GPIO1B_IE;                          /* Address Offset: 0x1014C */
    __IO uint32_t GPIO1C_IE;                          /* Address Offset: 0x10150 */
    __IO uint32_t GPIO1D_IE;                          /* Address Offset: 0x10154 */
    __IO uint32_t GPIO2A_IE;                          /* Address Offset: 0x10158 */
    __IO uint32_t GPIO2B_IE;                          /* Address Offset: 0x1015C */
    __IO uint32_t GPIO2C_IE;                          /* Address Offset: 0x10160 */
    __IO uint32_t GPIO2D_IE;                          /* Address Offset: 0x10164 */
    __IO uint32_t GPIO3A_IE;                          /* Address Offset: 0x10168 */
    __IO uint32_t GPIO3B_IE;                          /* Address Offset: 0x1016C */
    __IO uint32_t GPIO3C_IE;                          /* Address Offset: 0x10170 */
    __IO uint32_t GPIO3D_IE;                          /* Address Offset: 0x10174 */
    __IO uint32_t GPIO4A_IE;                          /* Address Offset: 0x10178 */
         uint32_t RESERVED1017C;                      /* Address Offset: 0x1017C */
    __IO uint32_t GPIO0C_SMT_H;                       /* Address Offset: 0x10180 */
    __IO uint32_t GPIO0D_SMT;                         /* Address Offset: 0x10184 */
    __IO uint32_t GPIO1A_SMT;                         /* Address Offset: 0x10188 */
    __IO uint32_t GPIO1B_SMT;                         /* Address Offset: 0x1018C */
    __IO uint32_t GPIO1C_SMT;                         /* Address Offset: 0x10190 */
    __IO uint32_t GPIO1D_SMT;                         /* Address Offset: 0x10194 */
    __IO uint32_t GPIO2A_SMT;                         /* Address Offset: 0x10198 */
    __IO uint32_t GPIO2B_SMT;                         /* Address Offset: 0x1019C */
    __IO uint32_t GPIO2C_SMT;                         /* Address Offset: 0x101A0 */
    __IO uint32_t GPIO2D_SMT;                         /* Address Offset: 0x101A4 */
    __IO uint32_t GPIO3A_SMT;                         /* Address Offset: 0x101A8 */
    __IO uint32_t GPIO3B_SMT;                         /* Address Offset: 0x101AC */
    __IO uint32_t GPIO3C_SMT;                         /* Address Offset: 0x101B0 */
    __IO uint32_t GPIO3D_SMT;                         /* Address Offset: 0x101B4 */
    __IO uint32_t GPIO4A_SMT;                         /* Address Offset: 0x101B8 */
         uint32_t RESERVED101BC[17];                  /* Address Offset: 0x101BC */
    __IO uint32_t CSIPHY0_CON;                        /* Address Offset: 0x10200 */
         uint32_t RESERVED10204;                      /* Address Offset: 0x10204 */
    __IO uint32_t CSIPHY0_STATUS;                     /* Address Offset: 0x10208 */
         uint32_t RESERVED1020C;                      /* Address Offset: 0x1020C */
    __IO uint32_t CSIPHY1_CON;                        /* Address Offset: 0x10210 */
         uint32_t RESERVED10214;                      /* Address Offset: 0x10214 */
    __IO uint32_t CSIPHY1_STATUS;                     /* Address Offset: 0x10218 */
         uint32_t RESERVED1021C;                      /* Address Offset: 0x1021C */
    __IO uint32_t DSIPHY_CON;                         /* Address Offset: 0x10220 */
         uint32_t RESERVED10224[3];                   /* Address Offset: 0x10224 */
    __IO uint32_t USBPHY_CON0;                        /* Address Offset: 0x10230 */
    __IO uint32_t USBPHY_CON1;                        /* Address Offset: 0x10234 */
    __IO uint32_t USBPHY_CON2;                        /* Address Offset: 0x10238 */
         uint32_t RESERVED1023C[3];                   /* Address Offset: 0x1023C */
    __IO uint32_t USBPHY_STATUS;                      /* Address Offset: 0x10248 */
         uint32_t RESERVED1024C;                      /* Address Offset: 0x1024C */
    __IO uint32_t CIFIO_CON;                          /* Address Offset: 0x10250 */
    __IO uint32_t SDDETFLT_CON;                       /* Address Offset: 0x10254 */
    __IO uint32_t UART2RX_LOW_CON;                    /* Address Offset: 0x10258 */
         uint32_t RESERVED1025C;                      /* Address Offset: 0x1025C */
    __IO uint32_t IOFUNC_CON0;                        /* Address Offset: 0x10260 */
    __IO uint32_t IOFUNC_CON1;                        /* Address Offset: 0x10264 */
    __IO uint32_t IOFUNC_CON2;                        /* Address Offset: 0x10268 */
    __IO uint32_t IOFUNC_CON3;                        /* Address Offset: 0x1026C */
    __IO uint32_t USBPHY0_CFG_CON;                    /* Address Offset: 0x10270 */
    __IO uint32_t USBPHY0_CFG_ADDRIN;                 /* Address Offset: 0x10274 */
    __IO uint32_t USBPHY0_CFG_ADDROUT;                /* Address Offset: 0x10278 */
    __IO uint32_t USBPHY0_CFG_DLY_CON;                /* Address Offset: 0x1027C */
    __IO uint32_t USBPHY1_CFG_CON;                    /* Address Offset: 0x10280 */
    __IO uint32_t USBPHY1_CFG_ADDRIN;                 /* Address Offset: 0x10284 */
    __IO uint32_t USBPHY1_CFG_ADDROUT;                /* Address Offset: 0x10288 */
    __IO uint32_t USBPHY1_CFG_DLY_CON;                /* Address Offset: 0x1028C */
         uint32_t RESERVED10290[28];                  /* Address Offset: 0x10290 */
    __IO uint32_t USB_SIG_DETECT_CON;                 /* Address Offset: 0x10300 */
    __IO uint32_t USB_SIG_DETECT_STATUS;              /* Address Offset: 0x10304 */
    __IO uint32_t USB_SIG_DETECT_CLR;                 /* Address Offset: 0x10308 */
         uint32_t RESERVED1030C;                      /* Address Offset: 0x1030C */
    __IO uint32_t USB_LINESTATE_CON;                  /* Address Offset: 0x10310 */
    __IO uint32_t USB_DISCONNECT_CON;                 /* Address Offset: 0x10314 */
    __IO uint32_t USB_BVALID_CON;                     /* Address Offset: 0x10318 */
    __IO uint32_t USB_ID_CON;                         /* Address Offset: 0x1031C */
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
    __O  uint32_t WAKEUP_EDGE_ST;                     /* Address Offset: 0x001C */
    __IO uint32_t SCU_STABLE_CNT;                     /* Address Offset: 0x0020 */
    __IO uint32_t PMIC_STABLE_CNT;                    /* Address Offset: 0x0024 */
    __IO uint32_t OSC_STABLE_CNT;                     /* Address Offset: 0x0028 */
    __IO uint32_t WAKEUP_RSTCLR_CNT;                  /* Address Offset: 0x002C */
    __IO uint32_t PLL_LOCK_CNT;                       /* Address Offset: 0x0030 */
         uint32_t RESERVED0034;                       /* Address Offset: 0x0034 */
    __IO uint32_t SCU_PWRUP_CNT;                      /* Address Offset: 0x0038 */
    __IO uint32_t SCU_PWRDN_CNT;                      /* Address Offset: 0x003C */
    __IO uint32_t SCU_VOLUP_CNT;                      /* Address Offset: 0x0040 */
    __IO uint32_t SCU_VOLDN_CNT;                      /* Address Offset: 0x0044 */
    __IO uint32_t WAKEUP_TIMEOUT_CNT;                 /* Address Offset: 0x0048 */
    __IO uint32_t PWM_SWITCH_CNT;                     /* Address Offset: 0x004C */
         uint32_t RESERVED0050[12];                   /* Address Offset: 0x0050 */
    __IO uint32_t SCU_PWR_CON;                        /* Address Offset: 0x0080 */
    __IO uint32_t SCU_PWR_SFTCON;                     /* Address Offset: 0x0084 */
    __IO uint32_t SCU_AUTO_CON;                       /* Address Offset: 0x0088 */
    __I  uint32_t SCU_PWR_STATE;                      /* Address Offset: 0x008C */
    __IO uint32_t CPU_AUTO_PWR_CON;                   /* Address Offset: 0x0090 */
    __IO uint32_t CPU_PWR_SFTCON;                     /* Address Offset: 0x0094 */
         uint32_t RESERVED0098;                       /* Address Offset: 0x0098 */
    __I  uint32_t CLUSTER_PWR_ST;                     /* Address Offset: 0x009C */
    __IO uint32_t CLUSTER_IDLE_CON;                   /* Address Offset: 0x00A0 */
    __IO uint32_t CLUSTER_IDLE_SFTCON;                /* Address Offset: 0x00A4 */
         uint32_t RESERVED00A8[2];                    /* Address Offset: 0x00A8 */
    __IO uint32_t BUS_IDLE_CON[2];                    /* Address Offset: 0x00B0 */
         uint32_t RESERVED00B8[2];                    /* Address Offset: 0x00B8 */
    __IO uint32_t BUS_IDLE_SFTCON[2];                 /* Address Offset: 0x00C0 */
         uint32_t RESERVED00C8[2];                    /* Address Offset: 0x00C8 */
    __I  uint32_t BUS_IDLE_ACK;                       /* Address Offset: 0x00D0 */
         uint32_t RESERVED00D4;                       /* Address Offset: 0x00D4 */
    __I  uint32_t BUS_IDLE_ST;                        /* Address Offset: 0x00D8 */
         uint32_t RESERVED00DC;                       /* Address Offset: 0x00DC */
    __IO uint32_t NOC_AUTO_CON[2];                    /* Address Offset: 0x00E0 */
         uint32_t RESERVED00E8[2];                    /* Address Offset: 0x00E8 */
    __IO uint32_t DDR_PWR_CON;                        /* Address Offset: 0x00F0 */
    __IO uint32_t DDR_PWR_SFTCON;                     /* Address Offset: 0x00F4 */
    __I  uint32_t DDR_PWR_STATE;                      /* Address Offset: 0x00F8 */
    __I  uint32_t DDR_PWR_ST;                         /* Address Offset: 0x00FC */
    __IO uint32_t PWR_GATE_CON;                       /* Address Offset: 0x0100 */
    __I  uint32_t PWR_GATE_STATE;                     /* Address Offset: 0x0104 */
    __I  uint32_t PWR_DWN_ST;                         /* Address Offset: 0x0108 */
         uint32_t RESERVED010C;                       /* Address Offset: 0x010C */
    __IO uint32_t PWR_GATE_SFTCON;                    /* Address Offset: 0x0110 */
         uint32_t RESERVED0114;                       /* Address Offset: 0x0114 */
    __IO uint32_t VOL_GATE_SFTCON;                    /* Address Offset: 0x0118 */
         uint32_t RESERVED011C;                       /* Address Offset: 0x011C */
    __IO uint32_t CRU_PWR_CON;                        /* Address Offset: 0x0120 */
    __IO uint32_t CRU_PWR_SFTCON;                     /* Address Offset: 0x0124 */
    __I  uint32_t CRU_PWR_STATE;                      /* Address Offset: 0x0128 */
         uint32_t RESERVED012C;                       /* Address Offset: 0x012C */
    __IO uint32_t PLLPD_CON;                          /* Address Offset: 0x0130 */
    __IO uint32_t PLLPD_SFTCON;                       /* Address Offset: 0x0134 */
         uint32_t RESERVED0138[6];                    /* Address Offset: 0x0138 */
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
};
/* SPI Register Structure Define */
struct SPI_REG {
    __IO uint32_t CTRLR[2];                           /* Address Offset: 0x0000 */
    __IO uint32_t ENR;                                /* Address Offset: 0x0008 */
    __IO uint32_t SER;                                /* Address Offset: 0x000C */
    __IO uint32_t BAUDR;                              /* Address Offset: 0x0010 */
    __IO uint32_t TXFTLR;                             /* Address Offset: 0x0014 */
    __IO uint32_t RXFTLR;                             /* Address Offset: 0x0018 */
    __I  uint32_t TXFLR;                              /* Address Offset: 0x001C */
    __I  uint32_t RXFLR;                              /* Address Offset: 0x0020 */
    __I  uint32_t SR;                                 /* Address Offset: 0x0024 */
    __IO uint32_t IPR;                                /* Address Offset: 0x0028 */
    __IO uint32_t IMR;                                /* Address Offset: 0x002C */
    __IO uint32_t ISR;                                /* Address Offset: 0x0030 */
    __IO uint32_t RISR;                               /* Address Offset: 0x0034 */
    __O  uint32_t ICR;                                /* Address Offset: 0x0038 */
    __IO uint32_t DMACR;                              /* Address Offset: 0x003C */
    __IO uint32_t DMATDLR;                            /* Address Offset: 0x0040 */
    __IO uint32_t DMARDLR;                            /* Address Offset: 0x0044 */
         uint32_t RESERVED0048;                       /* Address Offset: 0x0048 */
    __IO uint32_t TIMEOUT;                            /* Address Offset: 0x004C */
    __IO uint32_t BYPASS;                             /* Address Offset: 0x0050 */
         uint32_t RESERVED0054[235];                  /* Address Offset: 0x0054 */
    __O  uint32_t TXDR;                               /* Address Offset: 0x0400 */
         uint32_t RESERVED0404[255];                  /* Address Offset: 0x0404 */
    __I  uint32_t RXDR;                               /* Address Offset: 0x0800 */
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
};
/* PMUCRU Register Structure Define */
struct PMUCRU_REG {
    __IO uint32_t MODE_CON00;                         /* Address Offset: 0x0000 */
         uint32_t RESERVED0004[3];                    /* Address Offset: 0x0004 */
    __IO uint32_t GPLL_CON[7];                        /* Address Offset: 0x0010 */
         uint32_t RESERVED002C;                       /* Address Offset: 0x002C */
    __IO uint32_t GPLL_OFFSETCAL_STATUS;              /* Address Offset: 0x0030 */
         uint32_t RESERVED0034[51];                   /* Address Offset: 0x0034 */
    __IO uint32_t CLKSEL_CON[12];                     /* Address Offset: 0x0100 */
         uint32_t RESERVED0138[18];                   /* Address Offset: 0x0138 */
    __IO uint32_t CLKGATE_CON[3];                     /* Address Offset: 0x0180 */
         uint32_t RESERVED018C[29];                   /* Address Offset: 0x018C */
    __IO uint32_t SOFTRST_CON[2];                     /* Address Offset: 0x0200 */
         uint32_t RESERVED0208[14];                   /* Address Offset: 0x0208 */
    __IO uint32_t AUTOCS_PMU_PCLK_CON[2];             /* Address Offset: 0x0240 */
};
/* CRU Register Structure Define */
struct CRU_REG {
    __IO uint32_t APLL_CON[7];                        /* Address Offset: 0x0000 */
         uint32_t RESERVED001C;                       /* Address Offset: 0x001C */
    __IO uint32_t DPLL_CON[7];                        /* Address Offset: 0x0020 */
         uint32_t RESERVED003C;                       /* Address Offset: 0x003C */
    __IO uint32_t CPLL_CON[7];                        /* Address Offset: 0x0040 */
         uint32_t RESERVED005C;                       /* Address Offset: 0x005C */
    __IO uint32_t HPLL_CON[7];                        /* Address Offset: 0x0060 */
         uint32_t RESERVED007C;                       /* Address Offset: 0x007C */
    __IO uint32_t APLL_OFFSETCAL_STATUS;              /* Address Offset: 0x0080 */
    __IO uint32_t DPLL_OFFSETCAL_STATUS;              /* Address Offset: 0x0084 */
    __IO uint32_t CPLL_OFFSETCAL_STATUS;              /* Address Offset: 0x0088 */
    __IO uint32_t HPLL_OFFSETCAL_STATUS;              /* Address Offset: 0x008C */
    __IO uint32_t MODE_CON01;                         /* Address Offset: 0x0090 */
         uint32_t RESERVED0094[27];                   /* Address Offset: 0x0094 */
    __IO uint32_t CRU_CLKSEL_CON[75];                 /* Address Offset: 0x0100 */
         uint32_t RESERVED0238[18];                   /* Address Offset: 0x0238 */
    __IO uint32_t CRU_CLKGATE_CON[24];                /* Address Offset: 0x0280 */
         uint32_t RESERVED02E4[7];                    /* Address Offset: 0x02E4 */
    __IO uint32_t CRU_SOFTRST_CON[15];                /* Address Offset: 0x0300 */
         uint32_t RESERVED033C[17];                   /* Address Offset: 0x033C */
    __IO uint32_t SSCGTBL_CON0;                       /* Address Offset: 0x0380 */
    __IO uint32_t SSCGTBL_CON1;                       /* Address Offset: 0x0384 */
    __IO uint32_t SSCGTBL_CON2;                       /* Address Offset: 0x0388 */
    __IO uint32_t SSCGTBL_CON3;                       /* Address Offset: 0x038C */
    __IO uint32_t SSCGTBL_CON4;                       /* Address Offset: 0x0390 */
    __IO uint32_t SSCGTBL_CON5;                       /* Address Offset: 0x0394 */
    __IO uint32_t SSCGTBL_CON6;                       /* Address Offset: 0x0398 */
    __IO uint32_t SSCGTBL_CON7;                       /* Address Offset: 0x039C */
    __IO uint32_t SSCGTBL_CON8;                       /* Address Offset: 0x03A0 */
    __IO uint32_t SSCGTBL_CON9;                       /* Address Offset: 0x03A4 */
    __IO uint32_t SSCGTBL_CON10;                      /* Address Offset: 0x03A8 */
    __IO uint32_t SSCGTBL_CON11;                      /* Address Offset: 0x03AC */
    __IO uint32_t SSCGTBL_CON12;                      /* Address Offset: 0x03B0 */
    __IO uint32_t SSCGTBL_CON13;                      /* Address Offset: 0x03B4 */
    __IO uint32_t SSCGTBL_CON14;                      /* Address Offset: 0x03B8 */
    __IO uint32_t SSCGTBL_CON15;                      /* Address Offset: 0x03BC */
    __IO uint32_t SSCGTBL_CON16;                      /* Address Offset: 0x03C0 */
    __IO uint32_t SSCGTBL_CON17;                      /* Address Offset: 0x03C4 */
    __IO uint32_t SSCGTBL_CON18;                      /* Address Offset: 0x03C8 */
    __IO uint32_t SSCGTBL_CON19;                      /* Address Offset: 0x03CC */
    __IO uint32_t SSCGTBL_CON20;                      /* Address Offset: 0x03D0 */
    __IO uint32_t SSCGTBL_CON21;                      /* Address Offset: 0x03D4 */
    __IO uint32_t SSCGTBL_CON22;                      /* Address Offset: 0x03D8 */
    __IO uint32_t SSCGTBL_CON23;                      /* Address Offset: 0x03DC */
    __IO uint32_t SSCGTBL_CON24;                      /* Address Offset: 0x03E0 */
    __IO uint32_t SSCGTBL_CON25;                      /* Address Offset: 0x03E4 */
    __IO uint32_t SSCGTBL_CON26;                      /* Address Offset: 0x03E8 */
    __IO uint32_t SSCGTBL_CON27;                      /* Address Offset: 0x03EC */
    __IO uint32_t SSCGTBL_CON28;                      /* Address Offset: 0x03F0 */
    __IO uint32_t SSCGTBL_CON29;                      /* Address Offset: 0x03F4 */
    __IO uint32_t SSCGTBL_CON30;                      /* Address Offset: 0x03F8 */
    __IO uint32_t SSCGTBL_CON31;                      /* Address Offset: 0x03FC */
    __IO uint32_t GLB_CNT_TH;                         /* Address Offset: 0x0400 */
    __IO uint32_t GLB_RST_ST;                         /* Address Offset: 0x0404 */
    __IO uint32_t GLB_SRST_FST_VALUE;                 /* Address Offset: 0x0408 */
    __IO uint32_t GLB_SRST_SND_VALUE;                 /* Address Offset: 0x040C */
    __IO uint32_t GLB_RST_CON;                        /* Address Offset: 0x0410 */
         uint32_t RESERVED0414[11];                   /* Address Offset: 0x0414 */
    __IO uint32_t SDMMC_CON[2];                       /* Address Offset: 0x0440 */
    __IO uint32_t SDIO_CON[2];                        /* Address Offset: 0x0448 */
    __IO uint32_t EMMC_CON[2];                        /* Address Offset: 0x0450 */
         uint32_t RESERVED0458[2];                    /* Address Offset: 0x0458 */
    __IO uint32_t GMAC_CON;                           /* Address Offset: 0x0460 */
    __IO uint32_t MISC_CON[2];                        /* Address Offset: 0x0464 */
         uint32_t RESERVED046C[45];                   /* Address Offset: 0x046C */
    __IO uint32_t AUTOCS_VDEC_HEVCCACLK_CON[22];      /* Address Offset: 0x0520 */
};
/* MBOX Register Structure Define */
struct MBOX_CMD_DAT {
    __IO uint32_t CMD;
    __IO uint32_t DATA;
};
struct MBOX_REG {
    __IO uint32_t A2B_INTEN;                          /* Address Offset: 0x0000 */
    __IO uint32_t A2B_STATUS;                         /* Address Offset: 0x0004 */
    struct MBOX_CMD_DAT A2B[4];                       /* Address Offset: 0x0008 */
    __IO uint32_t B2A_INTEN;                          /* Address Offset: 0x0028 */
    __IO uint32_t B2A_STATUS;                         /* Address Offset: 0x002C */
    struct MBOX_CMD_DAT B2A[4];                       /* Address Offset: 0x0030 */
         uint32_t RESERVED0050[44];                   /* Address Offset: 0x0050 */
    __IO uint32_t ATOMIC_LOCK[32];                    /* Address Offset: 0x0100 */
};
#endif /*  __ASSEMBLY__  */
/****************************************************************************************/
/*                                                                                      */
/*                                Module Address Section                                */
/*                                                                                      */
/****************************************************************************************/
/* Memory Base */
#define GRF_BASE            0xFE000000U /* GRF base address */
#define PMU_BASE            0xFF3E0000U /* PMU base address */
#define I2C0_BASE           0xFF3F0000U /* I2C0 base address */
#define I2C2_BASE           0xFF400000U /* I2C2 base address */
#define SPI0_BASE           0xFF450000U /* SPI0 base address */
#define GPIO0_BASE          0xFF460000U /* GPIO0 base address */
#define PMUCRU_BASE         0xFF480000U /* PMUCRU base address */
#define CRU_BASE            0xFF490000U /* CRU base address */
#define I2C1_BASE           0xFF510000U /* I2C1 base address */
#define I2C3_BASE           0xFF520000U /* I2C3 base address */
#define I2C4_BASE           0xFF530000U /* I2C4 base address */
#define I2C5_BASE           0xFF540000U /* I2C5 base address */
#define SPI1_BASE           0xFF580000U /* SPI1 base address */
#define GPIO1_BASE          0xFF620000U /* GPIO1 base address */
#define GPIO2_BASE          0xFF630000U /* GPIO2 base address */
#define GPIO3_BASE          0xFF640000U /* GPIO3 base address */
#define GPIO4_BASE          0xFF650000U /* GPIO4 base address */
#define MBOX_BASE           0xFF6A0000U /* MBOX base address */
/****************************************************************************************/
/*                                                                                      */
/*                               Module Variable Section                                */
/*                                                                                      */
/****************************************************************************************/
/* Module Variable Define */

#define GRF                 ((struct GRF_REG *) GRF_BASE)
#define PMU                 ((struct PMU_REG *) PMU_BASE)
#define I2C0                ((struct I2C_REG *) I2C0_BASE)
#define I2C2                ((struct I2C_REG *) I2C2_BASE)
#define SPI0                ((struct SPI_REG *) SPI0_BASE)
#define GPIO0               ((struct GPIO_REG *) GPIO0_BASE)
#define PMUCRU              ((struct PMUCRU_REG *) PMUCRU_BASE)
#define CRU                 ((struct CRU_REG *) CRU_BASE)
#define I2C1                ((struct I2C_REG *) I2C1_BASE)
#define I2C3                ((struct I2C_REG *) I2C3_BASE)
#define I2C4                ((struct I2C_REG *) I2C4_BASE)
#define I2C5                ((struct I2C_REG *) I2C5_BASE)
#define SPI1                ((struct SPI_REG *) SPI1_BASE)
#define GPIO1               ((struct GPIO_REG *) GPIO1_BASE)
#define GPIO2               ((struct GPIO_REG *) GPIO2_BASE)
#define GPIO3               ((struct GPIO_REG *) GPIO3_BASE)
#define GPIO4               ((struct GPIO_REG *) GPIO4_BASE)
#define MBOX                ((struct MBOX_REG *) MBOX_BASE)

#define IS_GRF_INSTANCE(instance) ((instance) == GRF)
#define IS_PMU_INSTANCE(instance) ((instance) == PMU)
#define IS_PMUCRU_INSTANCE(instance) ((instance) == PMUCRU)
#define IS_CRU_INSTANCE(instance) ((instance) == CRU)
#define IS_MBOX_INSTANCE(instance) ((instance) == MBOX)
#define IS_I2C_INSTANCE(instance) (((instance) == I2C0) || ((instance) == I2C2) || ((instance) == I2C1) || ((instance) == I2C3) || ((instance) == I2C4) || ((instance) == I2C5))
#define IS_SPI_INSTANCE(instance) (((instance) == SPI0) || ((instance) == SPI1))
#define IS_GPIO_INSTANCE(instance) (((instance) == GPIO0) || ((instance) == GPIO1) || ((instance) == GPIO2) || ((instance) == GPIO3) || ((instance) == GPIO4))
/****************************************************************************************/
/*                                                                                      */
/*                               Register Bitmap Section                                */
/*                                                                                      */
/****************************************************************************************/
/******************************************GRF*******************************************/
/* SOC_CON0 */
#define GRF_SOC_CON0_OFFSET                                (0x0U)
#define GRF_SOC_CON0_WDTNS_GLB_RESET_EN_SHIFT              (0U)
#define GRF_SOC_CON0_WDTNS_GLB_RESET_EN_MASK               (0x1U << GRF_SOC_CON0_WDTNS_GLB_RESET_EN_SHIFT)              /* 0x00000001 */
#define GRF_SOC_CON0_NPU_DISABLE_RAM_CLOCKGATING_SHIFT     (1U)
#define GRF_SOC_CON0_NPU_DISABLE_RAM_CLOCKGATING_MASK      (0x1U << GRF_SOC_CON0_NPU_DISABLE_RAM_CLOCKGATING_SHIFT)     /* 0x00000002 */
#define GRF_SOC_CON0_USBPHY_HOSTPORT_WAKEUP_IRQ_EN_SHIFT   (2U)
#define GRF_SOC_CON0_USBPHY_HOSTPORT_WAKEUP_IRQ_EN_MASK    (0x1U << GRF_SOC_CON0_USBPHY_HOSTPORT_WAKEUP_IRQ_EN_SHIFT)   /* 0x00000004 */
#define GRF_SOC_CON0_MCU_SOFT_IRQ_SHIFT                    (3U)
#define GRF_SOC_CON0_MCU_SOFT_IRQ_MASK                     (0x1U << GRF_SOC_CON0_MCU_SOFT_IRQ_SHIFT)                    /* 0x00000008 */
#define GRF_SOC_CON0_NPU_CSYSREQ_SHIFT                     (4U)
#define GRF_SOC_CON0_NPU_CSYSREQ_MASK                      (0x1U << GRF_SOC_CON0_NPU_CSYSREQ_SHIFT)                     /* 0x00000010 */
#define GRF_SOC_CON0_NPU_CSYSREQ_SEL_SHIFT                 (5U)
#define GRF_SOC_CON0_NPU_CSYSREQ_SEL_MASK                  (0x1U << GRF_SOC_CON0_NPU_CSYSREQ_SEL_SHIFT)                 /* 0x00000020 */
#define GRF_SOC_CON0_CLK_APLL_LS_SEL_SHIFT                 (8U)
#define GRF_SOC_CON0_CLK_APLL_LS_SEL_MASK                  (0x1U << GRF_SOC_CON0_CLK_APLL_LS_SEL_SHIFT)                 /* 0x00000100 */
#define GRF_SOC_CON0_CLK_DPLL_LS_SEL_SHIFT                 (9U)
#define GRF_SOC_CON0_CLK_DPLL_LS_SEL_MASK                  (0x1U << GRF_SOC_CON0_CLK_DPLL_LS_SEL_SHIFT)                 /* 0x00000200 */
#define GRF_SOC_CON0_CLK_CPLL_LS_SEL_SHIFT                 (10U)
#define GRF_SOC_CON0_CLK_CPLL_LS_SEL_MASK                  (0x1U << GRF_SOC_CON0_CLK_CPLL_LS_SEL_SHIFT)                 /* 0x00000400 */
#define GRF_SOC_CON0_CLK_HPLL_LS_SEL_SHIFT                 (11U)
#define GRF_SOC_CON0_CLK_HPLL_LS_SEL_MASK                  (0x1U << GRF_SOC_CON0_CLK_HPLL_LS_SEL_SHIFT)                 /* 0x00000800 */
/* SOC_CON1 */
#define GRF_SOC_CON1_OFFSET                                (0x4U)
#define GRF_SOC_CON1_UART0_RTS_INV_SHIFT                   (0U)
#define GRF_SOC_CON1_UART0_RTS_INV_MASK                    (0x1U << GRF_SOC_CON1_UART0_RTS_INV_SHIFT)                   /* 0x00000001 */
#define GRF_SOC_CON1_UART0_CTS_INV_SHIFT                   (1U)
#define GRF_SOC_CON1_UART0_CTS_INV_MASK                    (0x1U << GRF_SOC_CON1_UART0_CTS_INV_SHIFT)                   /* 0x00000002 */
#define GRF_SOC_CON1_UART2_RTS_INV_SHIFT                   (4U)
#define GRF_SOC_CON1_UART2_RTS_INV_MASK                    (0x1U << GRF_SOC_CON1_UART2_RTS_INV_SHIFT)                   /* 0x00000010 */
#define GRF_SOC_CON1_UART2_CTS_INV_SHIFT                   (5U)
#define GRF_SOC_CON1_UART2_CTS_INV_MASK                    (0x1U << GRF_SOC_CON1_UART2_CTS_INV_SHIFT)                   /* 0x00000020 */
#define GRF_SOC_CON1_UART3_RTS_INV_SHIFT                   (6U)
#define GRF_SOC_CON1_UART3_RTS_INV_MASK                    (0x1U << GRF_SOC_CON1_UART3_RTS_INV_SHIFT)                   /* 0x00000040 */
#define GRF_SOC_CON1_UART3_CTS_INV_SHIFT                   (7U)
#define GRF_SOC_CON1_UART3_CTS_INV_MASK                    (0x1U << GRF_SOC_CON1_UART3_CTS_INV_SHIFT)                   /* 0x00000080 */
#define GRF_SOC_CON1_UART4_RTS_INV_SHIFT                   (8U)
#define GRF_SOC_CON1_UART4_RTS_INV_MASK                    (0x1U << GRF_SOC_CON1_UART4_RTS_INV_SHIFT)                   /* 0x00000100 */
#define GRF_SOC_CON1_UART4_CTS_INV_SHIFT                   (9U)
#define GRF_SOC_CON1_UART4_CTS_INV_MASK                    (0x1U << GRF_SOC_CON1_UART4_CTS_INV_SHIFT)                   /* 0x00000200 */
#define GRF_SOC_CON1_UART5_RTS_INV_SHIFT                   (10U)
#define GRF_SOC_CON1_UART5_RTS_INV_MASK                    (0x1U << GRF_SOC_CON1_UART5_RTS_INV_SHIFT)                   /* 0x00000400 */
#define GRF_SOC_CON1_UART5_CTS_INV_SHIFT                   (11U)
#define GRF_SOC_CON1_UART5_CTS_INV_MASK                    (0x1U << GRF_SOC_CON1_UART5_CTS_INV_SHIFT)                   /* 0x00000800 */
/* SOC_CON2 */
#define GRF_SOC_CON2_OFFSET                                (0x9U)
#define GRF_SOC_CON2_VOP_PRESS_SHIFT                       (0U)
#define GRF_SOC_CON2_VOP_PRESS_MASK                        (0x3U << GRF_SOC_CON2_VOP_PRESS_SHIFT)                       /* 0x00000003 */
#define GRF_SOC_CON2_VOP_FLOW_SWITCH_SHIFT                 (2U)
#define GRF_SOC_CON2_VOP_FLOW_SWITCH_MASK                  (0x1U << GRF_SOC_CON2_VOP_FLOW_SWITCH_SHIFT)                 /* 0x00000004 */
#define GRF_SOC_CON2_DSI0_DPICOLORM_SHIFT                  (3U)
#define GRF_SOC_CON2_DSI0_DPICOLORM_MASK                   (0x1U << GRF_SOC_CON2_DSI0_DPICOLORM_SHIFT)                  /* 0x00000008 */
#define GRF_SOC_CON2_DSI0_DPISHUTDN_SHIFT                  (4U)
#define GRF_SOC_CON2_DSI0_DPISHUTDN_MASK                   (0x1U << GRF_SOC_CON2_DSI0_DPISHUTDN_SHIFT)                  /* 0x00000010 */
#define GRF_SOC_CON2_DSI0_DPIUPDATECFG_SHIFT               (5U)
#define GRF_SOC_CON2_DSI0_DPIUPDATECFG_MASK                (0x1U << GRF_SOC_CON2_DSI0_DPIUPDATECFG_SHIFT)               /* 0x00000020 */
#define GRF_SOC_CON2_VDEC_FUSE_VP9_SHIFT                   (7U)
#define GRF_SOC_CON2_VDEC_FUSE_VP9_MASK                    (0x1U << GRF_SOC_CON2_VDEC_FUSE_VP9_SHIFT)                   /* 0x00000080 */
#define GRF_SOC_CON2_VOPM_DMA_FINISH_EN_SHIFT              (12U)
#define GRF_SOC_CON2_VOPM_DMA_FINISH_EN_MASK               (0x1U << GRF_SOC_CON2_VOPM_DMA_FINISH_EN_SHIFT)              /* 0x00001000 */
#define GRF_SOC_CON2_ACDCDIG_I2S_ACTIVE_SHIFT              (13U)
#define GRF_SOC_CON2_ACDCDIG_I2S_ACTIVE_MASK               (0x1U << GRF_SOC_CON2_ACDCDIG_I2S_ACTIVE_SHIFT)              /* 0x00002000 */
#define GRF_SOC_CON2_ACDCDIG_I2C_TRANS_REQ_SHIFT           (14U)
#define GRF_SOC_CON2_ACDCDIG_I2C_TRANS_REQ_MASK            (0x1U << GRF_SOC_CON2_ACDCDIG_I2C_TRANS_REQ_SHIFT)           /* 0x00004000 */
#define GRF_SOC_CON2_MCU_SEL_SHIFT                         (15U)
#define GRF_SOC_CON2_MCU_SEL_MASK                          (0x1U << GRF_SOC_CON2_MCU_SEL_SHIFT)                         /* 0x00008000 */
/* SOC_STATUS0 */
#define GRF_SOC_STATUS0_OFFSET                             (0x10U)
#define GRF_SOC_STATUS0                                    (0x0U)
#define GRF_SOC_STATUS0_APLL_LOCK_SHIFT                    (0U)
#define GRF_SOC_STATUS0_APLL_LOCK_MASK                     (0x1U << GRF_SOC_STATUS0_APLL_LOCK_SHIFT)                    /* 0x00000001 */
#define GRF_SOC_STATUS0_DPLL_LOCK_SHIFT                    (1U)
#define GRF_SOC_STATUS0_DPLL_LOCK_MASK                     (0x1U << GRF_SOC_STATUS0_DPLL_LOCK_SHIFT)                    /* 0x00000002 */
#define GRF_SOC_STATUS0_CPLL_LOCK_SHIFT                    (2U)
#define GRF_SOC_STATUS0_CPLL_LOCK_MASK                     (0x1U << GRF_SOC_STATUS0_CPLL_LOCK_SHIFT)                    /* 0x00000004 */
#define GRF_SOC_STATUS0_GPLL_LOCK_SHIFT                    (3U)
#define GRF_SOC_STATUS0_GPLL_LOCK_MASK                     (0x1U << GRF_SOC_STATUS0_GPLL_LOCK_SHIFT)                    /* 0x00000008 */
#define GRF_SOC_STATUS0_HPLL_LOCK_SHIFT                    (4U)
#define GRF_SOC_STATUS0_HPLL_LOCK_MASK                     (0x1U << GRF_SOC_STATUS0_HPLL_LOCK_SHIFT)                    /* 0x00000010 */
#define GRF_SOC_STATUS0_DDRPHY_PLLLOCK_SHIFT               (6U)
#define GRF_SOC_STATUS0_DDRPHY_PLLLOCK_MASK                (0x1U << GRF_SOC_STATUS0_DDRPHY_PLLLOCK_SHIFT)               /* 0x00000040 */
#define GRF_SOC_STATUS0_MCU_RST_N_OUT_SHIFT                (7U)
#define GRF_SOC_STATUS0_MCU_RST_N_OUT_MASK                 (0x1U << GRF_SOC_STATUS0_MCU_RST_N_OUT_SHIFT)                /* 0x00000080 */
#define GRF_SOC_STATUS0_SCRAMBLE_SHIFT_READY_SHIFT         (8U)
#define GRF_SOC_STATUS0_SCRAMBLE_SHIFT_READY_MASK          (0x1U << GRF_SOC_STATUS0_SCRAMBLE_SHIFT_READY_SHIFT)         /* 0x00000100 */
#define GRF_SOC_STATUS0_IEP_CORE_IDLE_SHIFT                (10U)
#define GRF_SOC_STATUS0_IEP_CORE_IDLE_MASK                 (0x1U << GRF_SOC_STATUS0_IEP_CORE_IDLE_SHIFT)                /* 0x00000400 */
#define GRF_SOC_STATUS0_TIMER0_EN_STATUS_SHIFT             (11U)
#define GRF_SOC_STATUS0_TIMER0_EN_STATUS_MASK              (0x1U << GRF_SOC_STATUS0_TIMER0_EN_STATUS_SHIFT)             /* 0x00000800 */
#define GRF_SOC_STATUS0_TIMER1_EN_STATUS_SHIFT             (12U)
#define GRF_SOC_STATUS0_TIMER1_EN_STATUS_MASK              (0x1U << GRF_SOC_STATUS0_TIMER1_EN_STATUS_SHIFT)             /* 0x00001000 */
#define GRF_SOC_STATUS0_TIMER2_EN_STATUS_SHIFT             (13U)
#define GRF_SOC_STATUS0_TIMER2_EN_STATUS_MASK              (0x1U << GRF_SOC_STATUS0_TIMER2_EN_STATUS_SHIFT)             /* 0x00002000 */
#define GRF_SOC_STATUS0_TIMER3_EN_STATUS_SHIFT             (14U)
#define GRF_SOC_STATUS0_TIMER3_EN_STATUS_MASK              (0x1U << GRF_SOC_STATUS0_TIMER3_EN_STATUS_SHIFT)             /* 0x00004000 */
#define GRF_SOC_STATUS0_TIMER4_EN_STATUS_SHIFT             (15U)
#define GRF_SOC_STATUS0_TIMER4_EN_STATUS_MASK              (0x1U << GRF_SOC_STATUS0_TIMER4_EN_STATUS_SHIFT)             /* 0x00008000 */
#define GRF_SOC_STATUS0_TIMER5_EN_STATUS_SHIFT             (16U)
#define GRF_SOC_STATUS0_TIMER5_EN_STATUS_MASK              (0x1U << GRF_SOC_STATUS0_TIMER5_EN_STATUS_SHIFT)             /* 0x00010000 */
#define GRF_SOC_STATUS0_VOPM_DMA_FINISH_SHIFT              (17U)
#define GRF_SOC_STATUS0_VOPM_DMA_FINISH_MASK               (0x1U << GRF_SOC_STATUS0_VOPM_DMA_FINISH_SHIFT)              /* 0x00020000 */
#define GRF_SOC_STATUS0_ACDCDIG_I2C_TRANS_ACK_SHIFT        (18U)
#define GRF_SOC_STATUS0_ACDCDIG_I2C_TRANS_ACK_MASK         (0x1U << GRF_SOC_STATUS0_ACDCDIG_I2C_TRANS_ACK_SHIFT)        /* 0x00040000 */
#define GRF_SOC_STATUS0_PMU_PWR_IDLE_SHIFT                 (19U)
#define GRF_SOC_STATUS0_PMU_PWR_IDLE_MASK                  (0x1U << GRF_SOC_STATUS0_PMU_PWR_IDLE_SHIFT)                 /* 0x00080000 */
#define GRF_SOC_STATUS0_PMU_PWR_IDLEACK_SHIFT              (20U)
#define GRF_SOC_STATUS0_PMU_PWR_IDLEACK_MASK               (0x1U << GRF_SOC_STATUS0_PMU_PWR_IDLEACK_SHIFT)              /* 0x00100000 */
#define GRF_SOC_STATUS0_NANDC_MASTER_IDLE_SHIFT            (21U)
#define GRF_SOC_STATUS0_NANDC_MASTER_IDLE_MASK             (0x1U << GRF_SOC_STATUS0_NANDC_MASTER_IDLE_SHIFT)            /* 0x00200000 */
#define GRF_SOC_STATUS0_NPU_DEBUG_OUT_SHIFT                (24U)
#define GRF_SOC_STATUS0_NPU_DEBUG_OUT_MASK                 (0xFFU << GRF_SOC_STATUS0_NPU_DEBUG_OUT_SHIFT)               /* 0xFF000000 */
/* SOC_STATUS1 */
#define GRF_SOC_STATUS1_OFFSET                             (0x14U)
#define GRF_SOC_STATUS1                                    (0x0U)
#define GRF_SOC_STATUS1_PMU_GLOBAL_INT_DISABLE_SHIFT       (0U)
#define GRF_SOC_STATUS1_PMU_GLOBAL_INT_DISABLE_MASK        (0x1U << GRF_SOC_STATUS1_PMU_GLOBAL_INT_DISABLE_SHIFT)       /* 0x00000001 */
#define GRF_SOC_STATUS1_PMU_GLOBAL_INT_DISABLE0_SHIFT      (1U)
#define GRF_SOC_STATUS1_PMU_GLOBAL_INT_DISABLE0_MASK       (0x1U << GRF_SOC_STATUS1_PMU_GLOBAL_INT_DISABLE0_SHIFT)      /* 0x00000002 */
#define GRF_SOC_STATUS1_PMU_GLOBAL_INT_DISABLE1_SHIFT      (2U)
#define GRF_SOC_STATUS1_PMU_GLOBAL_INT_DISABLE1_MASK       (0x1U << GRF_SOC_STATUS1_PMU_GLOBAL_INT_DISABLE1_SHIFT)      /* 0x00000004 */
#define GRF_SOC_STATUS1_PMU_GLOBAL_INT_DISABLE2_SHIFT      (3U)
#define GRF_SOC_STATUS1_PMU_GLOBAL_INT_DISABLE2_MASK       (0x1U << GRF_SOC_STATUS1_PMU_GLOBAL_INT_DISABLE2_SHIFT)      /* 0x00000008 */
#define GRF_SOC_STATUS1_PMU_GLOBAL_INT_DISABLE3_SHIFT      (4U)
#define GRF_SOC_STATUS1_PMU_GLOBAL_INT_DISABLE3_MASK       (0x1U << GRF_SOC_STATUS1_PMU_GLOBAL_INT_DISABLE3_SHIFT)      /* 0x00000010 */
/* CPU_CON0 */
#define GRF_CPU_CON0_OFFSET                                (0x20U)
#define GRF_CPU_CON0_VINITHI_SHIFT                         (0U)
#define GRF_CPU_CON0_VINITHI_MASK                          (0xFU << GRF_CPU_CON0_VINITHI_SHIFT)                         /* 0x0000000F */
#define GRF_CPU_CON0_L1RSTDISABLE_SHIFT                    (4U)
#define GRF_CPU_CON0_L1RSTDISABLE_MASK                     (0xFU << GRF_CPU_CON0_L1RSTDISABLE_SHIFT)                    /* 0x000000F0 */
#define GRF_CPU_CON0_L2RSTDISABLE_SHIFT                    (8U)
#define GRF_CPU_CON0_L2RSTDISABLE_MASK                     (0x1U << GRF_CPU_CON0_L2RSTDISABLE_SHIFT)                    /* 0x00000100 */
#define GRF_CPU_CON0_EVENTI_SHIFT                          (9U)
#define GRF_CPU_CON0_EVENTI_MASK                           (0x1U << GRF_CPU_CON0_EVENTI_SHIFT)                          /* 0x00000200 */
#define GRF_CPU_CON0_DBGROMADDRV_SHIFT                     (10U)
#define GRF_CPU_CON0_DBGROMADDRV_MASK                      (0x1U << GRF_CPU_CON0_DBGROMADDRV_SHIFT)                     /* 0x00000400 */
#define GRF_CPU_CON0_DBGSELFADDRV_SHIFT                    (11U)
#define GRF_CPU_CON0_DBGSELFADDRV_MASK                     (0x1U << GRF_CPU_CON0_DBGSELFADDRV_SHIFT)                    /* 0x00000800 */
#define GRF_CPU_CON0_EVENTO_CLEAR_SHIFT                    (12U)
#define GRF_CPU_CON0_EVENTO_CLEAR_MASK                     (0x1U << GRF_CPU_CON0_EVENTO_CLEAR_SHIFT)                    /* 0x00001000 */
#define GRF_CPU_CON0_CPU_EMA_DETECT_EN_SHIFT               (13U)
#define GRF_CPU_CON0_CPU_EMA_DETECT_EN_MASK                (0x1U << GRF_CPU_CON0_CPU_EMA_DETECT_EN_SHIFT)               /* 0x00002000 */
/* CPU_CON1 */
#define GRF_CPU_CON1_OFFSET                                (0x24U)
#define GRF_CPU_CON1_CFGEND_SHIFT                          (0U)
#define GRF_CPU_CON1_CFGEND_MASK                           (0xFU << GRF_CPU_CON1_CFGEND_SHIFT)                          /* 0x0000000F */
#define GRF_CPU_CON1_CFGTE_SHIFT                           (4U)
#define GRF_CPU_CON1_CFGTE_MASK                            (0xFU << GRF_CPU_CON1_CFGTE_SHIFT)                           /* 0x000000F0 */
/* CPU_STATUS0 */
#define GRF_CPU_STATUS0_OFFSET                             (0x30U)
#define GRF_CPU_STATUS0_STANDBYWFE_SHIFT                   (0U)
#define GRF_CPU_STATUS0_STANDBYWFE_MASK                    (0xFU << GRF_CPU_STATUS0_STANDBYWFE_SHIFT)                   /* 0x0000000F */
#define GRF_CPU_STATUS0_STANDBYWFI_SHIFT                   (4U)
#define GRF_CPU_STATUS0_STANDBYWFI_MASK                    (0xFU << GRF_CPU_STATUS0_STANDBYWFI_SHIFT)                   /* 0x000000F0 */
#define GRF_CPU_STATUS0_SMPNAMP_SHIFT                      (8U)
#define GRF_CPU_STATUS0_SMPNAMP_MASK                       (0xFU << GRF_CPU_STATUS0_SMPNAMP_SHIFT)                      /* 0x00000F00 */
#define GRF_CPU_STATUS0_STANDBYWFIL2_SHIFT                 (12U)
#define GRF_CPU_STATUS0_STANDBYWFIL2_MASK                  (0x1U << GRF_CPU_STATUS0_STANDBYWFIL2_SHIFT)                 /* 0x00001000 */
#define GRF_CPU_STATUS0_EVENTO_RISING_EDGE_SHIFT           (13U)
#define GRF_CPU_STATUS0_EVENTO_RISING_EDGE_MASK            (0x1U << GRF_CPU_STATUS0_EVENTO_RISING_EDGE_SHIFT)           /* 0x00002000 */
#define GRF_CPU_STATUS0_JTAGTOP_SHIFT                      (14U)
#define GRF_CPU_STATUS0_JTAGTOP_MASK                       (0x1U << GRF_CPU_STATUS0_JTAGTOP_SHIFT)                      /* 0x00004000 */
#define GRF_CPU_STATUS0_JTAGNSW_SHIFT                      (15U)
#define GRF_CPU_STATUS0_JTAGNSW_MASK                       (0x1U << GRF_CPU_STATUS0_JTAGNSW_SHIFT)                      /* 0x00008000 */
/* INTCONNET_CON0 */
#define GRF_INTCONNET_CON0_OFFSET                          (0x40U)
#define GRF_INTCONNET_CON0_SPLIT_SHIFT                     (0U)
#define GRF_INTCONNET_CON0_SPLIT_MASK                      (0x3U << GRF_INTCONNET_CON0_SPLIT_SHIFT)                     /* 0x00000003 */
#define GRF_INTCONNET_CON0_PRESS_VDEC_SHIFT                (4U)
#define GRF_INTCONNET_CON0_PRESS_VDEC_MASK                 (0x3U << GRF_INTCONNET_CON0_PRESS_VDEC_SHIFT)                /* 0x00000030 */
/* INTCONNET_CON1 */
#define GRF_INTCONNET_CON1_OFFSET                          (0x44U)
#define GRF_INTCONNET_CON1_CPU_TO_DDR_STALL_SHIFT          (0U)
#define GRF_INTCONNET_CON1_CPU_TO_DDR_STALL_MASK           (0x1U << GRF_INTCONNET_CON1_CPU_TO_DDR_STALL_SHIFT)          /* 0x00000001 */
#define GRF_INTCONNET_CON1_CPU_TO_BUS_STALL_SHIFT          (1U)
#define GRF_INTCONNET_CON1_CPU_TO_BUS_STALL_MASK           (0x1U << GRF_INTCONNET_CON1_CPU_TO_BUS_STALL_SHIFT)          /* 0x00000002 */
#define GRF_INTCONNET_CON1_VO_TO_BUS_STALL_SHIFT           (2U)
#define GRF_INTCONNET_CON1_VO_TO_BUS_STALL_MASK            (0x1U << GRF_INTCONNET_CON1_VO_TO_BUS_STALL_SHIFT)           /* 0x00000004 */
#define GRF_INTCONNET_CON1_ISPP_TO_BUS_STALL_SHIFT         (3U)
#define GRF_INTCONNET_CON1_ISPP_TO_BUS_STALL_MASK          (0x1U << GRF_INTCONNET_CON1_ISPP_TO_BUS_STALL_SHIFT)         /* 0x00000008 */
#define GRF_INTCONNET_CON1_VDPU_TO_BUS_STALL_SHIFT         (4U)
#define GRF_INTCONNET_CON1_VDPU_TO_BUS_STALL_MASK          (0x1U << GRF_INTCONNET_CON1_VDPU_TO_BUS_STALL_SHIFT)         /* 0x00000010 */
#define GRF_INTCONNET_CON1_VEPU_TO_BUS_STALL_SHIFT         (5U)
#define GRF_INTCONNET_CON1_VEPU_TO_BUS_STALL_MASK          (0x1U << GRF_INTCONNET_CON1_VEPU_TO_BUS_STALL_SHIFT)         /* 0x00000020 */
#define GRF_INTCONNET_CON1_NVM_TO_PHPMID_STALL_SHIFT       (6U)
#define GRF_INTCONNET_CON1_NVM_TO_PHPMID_STALL_MASK        (0x1U << GRF_INTCONNET_CON1_NVM_TO_PHPMID_STALL_SHIFT)       /* 0x00000040 */
#define GRF_INTCONNET_CON1_GMAC_TO_PHPMID_STALL_SHIFT      (7U)
#define GRF_INTCONNET_CON1_GMAC_TO_PHPMID_STALL_MASK       (0x1U << GRF_INTCONNET_CON1_GMAC_TO_PHPMID_STALL_SHIFT)      /* 0x00000080 */
#define GRF_INTCONNET_CON1_USB_TO_PHPMID_STALL_SHIFT       (8U)
#define GRF_INTCONNET_CON1_USB_TO_PHPMID_STALL_MASK        (0x1U << GRF_INTCONNET_CON1_USB_TO_PHPMID_STALL_SHIFT)       /* 0x00000100 */
#define GRF_INTCONNET_CON1_PHPMID_TO_GMAC_STALL_SHIFT      (9U)
#define GRF_INTCONNET_CON1_PHPMID_TO_GMAC_STALL_MASK       (0x1U << GRF_INTCONNET_CON1_PHPMID_TO_GMAC_STALL_SHIFT)      /* 0x00000200 */
#define GRF_INTCONNET_CON1_PHPMID_TO_NVM_STALL_SHIFT       (10U)
#define GRF_INTCONNET_CON1_PHPMID_TO_NVM_STALL_MASK        (0x1U << GRF_INTCONNET_CON1_PHPMID_TO_NVM_STALL_SHIFT)       /* 0x00000400 */
#define GRF_INTCONNET_CON1_PHPMID_TO_USB_STALL_SHIFT       (11U)
#define GRF_INTCONNET_CON1_PHPMID_TO_USB_STALL_MASK        (0x1U << GRF_INTCONNET_CON1_PHPMID_TO_USB_STALL_SHIFT)       /* 0x00000800 */
#define GRF_INTCONNET_CON1_PHPMID_TO_BUS_STALL_SHIFT       (12U)
#define GRF_INTCONNET_CON1_PHPMID_TO_BUS_STALL_MASK        (0x1U << GRF_INTCONNET_CON1_PHPMID_TO_BUS_STALL_SHIFT)       /* 0x00001000 */
#define GRF_INTCONNET_CON1_MCU_TO_BUSHOLD_STALL_SHIFT      (13U)
#define GRF_INTCONNET_CON1_MCU_TO_BUSHOLD_STALL_MASK       (0x1U << GRF_INTCONNET_CON1_MCU_TO_BUSHOLD_STALL_SHIFT)      /* 0x00002000 */
#define GRF_INTCONNET_CON1_BUS_TO_DDR_STALL_SHIFT          (14U)
#define GRF_INTCONNET_CON1_BUS_TO_DDR_STALL_MASK           (0x1U << GRF_INTCONNET_CON1_BUS_TO_DDR_STALL_SHIFT)          /* 0x00004000 */
#define GRF_INTCONNET_CON1_VI_BUS_TO_DDR_STALL_SHIFT       (15U)
#define GRF_INTCONNET_CON1_VI_BUS_TO_DDR_STALL_MASK        (0x1U << GRF_INTCONNET_CON1_VI_BUS_TO_DDR_STALL_SHIFT)       /* 0x00008000 */
/* INTCONNET_CON2 */
#define GRF_INTCONNET_CON2_OFFSET                          (0x48U)
#define GRF_INTCONNET_CON2_VO_BUS_TO_DDR_STALL_SHIFT       (0U)
#define GRF_INTCONNET_CON2_VO_BUS_TO_DDR_STALL_MASK        (0x1U << GRF_INTCONNET_CON2_VO_BUS_TO_DDR_STALL_SHIFT)       /* 0x00000001 */
#define GRF_INTCONNET_CON2_BUS_TO_MSCHREG_STALL_SHIFT      (1U)
#define GRF_INTCONNET_CON2_BUS_TO_MSCHREG_STALL_MASK       (0x1U << GRF_INTCONNET_CON2_BUS_TO_MSCHREG_STALL_SHIFT)      /* 0x00000002 */
#define GRF_INTCONNET_CON2_BUS_TO_AUDIO_STALL_SHIFT        (2U)
#define GRF_INTCONNET_CON2_BUS_TO_AUDIO_STALL_MASK         (0x1U << GRF_INTCONNET_CON2_BUS_TO_AUDIO_STALL_SHIFT)        /* 0x00000004 */
#define GRF_INTCONNET_CON2_BUS_TO_DDRC_STALL_SHIFT         (3U)
#define GRF_INTCONNET_CON2_BUS_TO_DDRC_STALL_MASK          (0x1U << GRF_INTCONNET_CON2_BUS_TO_DDRC_STALL_SHIFT)         /* 0x00000008 */
#define GRF_INTCONNET_CON2_BUS_TO_PMU_STALL_SHIFT          (4U)
#define GRF_INTCONNET_CON2_BUS_TO_PMU_STALL_MASK           (0x1U << GRF_INTCONNET_CON2_BUS_TO_PMU_STALL_SHIFT)          /* 0x00000010 */
#define GRF_INTCONNET_CON2_BUSMST_TO_HOLD_STALL_SHIFT      (5U)
#define GRF_INTCONNET_CON2_BUSMST_TO_HOLD_STALL_MASK       (0x1U << GRF_INTCONNET_CON2_BUSMST_TO_HOLD_STALL_SHIFT)      /* 0x00000020 */
#define GRF_INTCONNET_CON2_HOLD_TO_BUS_STALL_SHIFT         (6U)
#define GRF_INTCONNET_CON2_HOLD_TO_BUS_STALL_MASK          (0x1U << GRF_INTCONNET_CON2_HOLD_TO_BUS_STALL_SHIFT)         /* 0x00000040 */
#define GRF_INTCONNET_CON2_BUS_TO_NPU_STALL_SHIFT          (7U)
#define GRF_INTCONNET_CON2_BUS_TO_NPU_STALL_MASK           (0x1U << GRF_INTCONNET_CON2_BUS_TO_NPU_STALL_SHIFT)          /* 0x00000080 */
#define GRF_INTCONNET_CON2_BUS_TO_PHPMID_STALL_SHIFT       (8U)
#define GRF_INTCONNET_CON2_BUS_TO_PHPMID_STALL_MASK        (0x1U << GRF_INTCONNET_CON2_BUS_TO_PHPMID_STALL_SHIFT)       /* 0x00000100 */
#define GRF_INTCONNET_CON2_VI_TO_BUS_STALL_SHIFT           (9U)
#define GRF_INTCONNET_CON2_VI_TO_BUS_STALL_MASK            (0x1U << GRF_INTCONNET_CON2_VI_TO_BUS_STALL_SHIFT)           /* 0x00000200 */
#define GRF_INTCONNET_CON2_BUS_TO_TOP_STALL_SHIFT          (10U)
#define GRF_INTCONNET_CON2_BUS_TO_TOP_STALL_MASK           (0x1U << GRF_INTCONNET_CON2_BUS_TO_TOP_STALL_SHIFT)          /* 0x00000400 */
#define GRF_INTCONNET_CON2_NPU_TO_BUS_STALL_SHIFT          (11U)
#define GRF_INTCONNET_CON2_NPU_TO_BUS_STALL_MASK           (0x1U << GRF_INTCONNET_CON2_NPU_TO_BUS_STALL_SHIFT)          /* 0x00000800 */
#define GRF_INTCONNET_CON2_BUS_TO_ISPP_STALL_SHIFT         (12U)
#define GRF_INTCONNET_CON2_BUS_TO_ISPP_STALL_MASK          (0x1U << GRF_INTCONNET_CON2_BUS_TO_ISPP_STALL_SHIFT)         /* 0x00001000 */
#define GRF_INTCONNET_CON2_BUS_TO_VDPU_STALL_SHIFT         (13U)
#define GRF_INTCONNET_CON2_BUS_TO_VDPU_STALL_MASK          (0x1U << GRF_INTCONNET_CON2_BUS_TO_VDPU_STALL_SHIFT)         /* 0x00002000 */
#define GRF_INTCONNET_CON2_BUS_TO_VEPU_STALL_SHIFT         (14U)
#define GRF_INTCONNET_CON2_BUS_TO_VEPU_STALL_MASK          (0x1U << GRF_INTCONNET_CON2_BUS_TO_VEPU_STALL_SHIFT)         /* 0x00004000 */
#define GRF_INTCONNET_CON2_BUS_TO_VI_STALL_SHIFT           (15U)
#define GRF_INTCONNET_CON2_BUS_TO_VI_STALL_MASK            (0x1U << GRF_INTCONNET_CON2_BUS_TO_VI_STALL_SHIFT)           /* 0x00008000 */
/* INTCONNET_CON3 */
#define GRF_INTCONNET_CON3_OFFSET                          (0x4CU)
#define GRF_INTCONNET_CON3_BUS_TO_VO_STALL_SHIFT           (0U)
#define GRF_INTCONNET_CON3_BUS_TO_VO_STALL_MASK            (0x1U << GRF_INTCONNET_CON3_BUS_TO_VO_STALL_SHIFT)           /* 0x00000001 */
#define GRF_INTCONNET_CON3_CRYPTO_TO_BUS_STALL_SHIFT       (1U)
#define GRF_INTCONNET_CON3_CRYPTO_TO_BUS_STALL_MASK        (0x1U << GRF_INTCONNET_CON3_CRYPTO_TO_BUS_STALL_SHIFT)       /* 0x00000002 */
#define GRF_INTCONNET_CON3_BUS_TO_CRYPTO_STALL_SHIFT       (2U)
#define GRF_INTCONNET_CON3_BUS_TO_CRYPTO_STALL_MASK        (0x1U << GRF_INTCONNET_CON3_BUS_TO_CRYPTO_STALL_SHIFT)       /* 0x00000004 */
#define GRF_INTCONNET_CON3_PHPMID_TO_SDCARD_STALL_SHIFT    (3U)
#define GRF_INTCONNET_CON3_PHPMID_TO_SDCARD_STALL_MASK     (0x1U << GRF_INTCONNET_CON3_PHPMID_TO_SDCARD_STALL_SHIFT)    /* 0x00000008 */
#define GRF_INTCONNET_CON3_PHPMID_TO_SDIO_STALL_SHIFT      (4U)
#define GRF_INTCONNET_CON3_PHPMID_TO_SDIO_STALL_MASK       (0x1U << GRF_INTCONNET_CON3_PHPMID_TO_SDIO_STALL_SHIFT)      /* 0x00000010 */
#define GRF_INTCONNET_CON3_SDCARD_TO_PHPMID_STALL_SHIFT    (5U)
#define GRF_INTCONNET_CON3_SDCARD_TO_PHPMID_STALL_MASK     (0x1U << GRF_INTCONNET_CON3_SDCARD_TO_PHPMID_STALL_SHIFT)    /* 0x00000020 */
#define GRF_INTCONNET_CON3_SDIO_TO_PHPMID_STALL_SHIFT      (6U)
#define GRF_INTCONNET_CON3_SDIO_TO_PHPMID_STALL_MASK       (0x1U << GRF_INTCONNET_CON3_SDIO_TO_PHPMID_STALL_SHIFT)      /* 0x00000040 */
#define GRF_INTCONNET_CON3_BUS_TO_CPU_STALL_SHIFT          (7U)
#define GRF_INTCONNET_CON3_BUS_TO_CPU_STALL_MASK           (0x1U << GRF_INTCONNET_CON3_BUS_TO_CPU_STALL_SHIFT)          /* 0x00000080 */
/* USBHOST_CON0 */
#define GRF_USBHOST_CON0_OFFSET                            (0x50U)
#define GRF_USBHOST_CON0_USBHOST_FLADJ_VAL_SHIFT           (0U)
#define GRF_USBHOST_CON0_USBHOST_FLADJ_VAL_MASK            (0x3FU << GRF_USBHOST_CON0_USBHOST_FLADJ_VAL_SHIFT)          /* 0x0000003F */
#define GRF_USBHOST_CON0_USBHOST_FLASJ_VAL_COMMON_SHIFT    (6U)
#define GRF_USBHOST_CON0_USBHOST_FLASJ_VAL_COMMON_MASK     (0x3FU << GRF_USBHOST_CON0_USBHOST_FLASJ_VAL_COMMON_SHIFT)   /* 0x00000FC0 */
/* USBHOST_CON1 */
#define GRF_USBHOST_CON1_OFFSET                            (0x54U)
#define GRF_USBHOST_CON1_USBHOST_APP_START_CLK_SHIFT       (0U)
#define GRF_USBHOST_CON1_USBHOST_APP_START_CLK_MASK        (0x1U << GRF_USBHOST_CON1_USBHOST_APP_START_CLK_SHIFT)       /* 0x00000001 */
#define GRF_USBHOST_CON1_USBHOST_HUBSETUP_MIN_SHIFT        (1U)
#define GRF_USBHOST_CON1_USBHOST_HUBSETUP_MIN_MASK         (0x1U << GRF_USBHOST_CON1_USBHOST_HUBSETUP_MIN_SHIFT)        /* 0x00000002 */
#define GRF_USBHOST_CON1_USBHOST_INCR16_EN_SHIFT           (2U)
#define GRF_USBHOST_CON1_USBHOST_INCR16_EN_MASK            (0x1U << GRF_USBHOST_CON1_USBHOST_INCR16_EN_SHIFT)           /* 0x00000004 */
#define GRF_USBHOST_CON1_USBHOST_INCR4_EN_SHIFT            (3U)
#define GRF_USBHOST_CON1_USBHOST_INCR4_EN_MASK             (0x1U << GRF_USBHOST_CON1_USBHOST_INCR4_EN_SHIFT)            /* 0x00000008 */
#define GRF_USBHOST_CON1_USBHOST_INCR8_EN_SHIFT            (4U)
#define GRF_USBHOST_CON1_USBHOST_INCR8_EN_MASK             (0x1U << GRF_USBHOST_CON1_USBHOST_INCR8_EN_SHIFT)            /* 0x00000010 */
#define GRF_USBHOST_CON1_USBHOST_INCRX_EN_SHIFT            (5U)
#define GRF_USBHOST_CON1_USBHOST_INCRX_EN_MASK             (0x1U << GRF_USBHOST_CON1_USBHOST_INCRX_EN_SHIFT)            /* 0x00000020 */
#define GRF_USBHOST_CON1_USBHOST_SIM_MODE_SHIFT            (6U)
#define GRF_USBHOST_CON1_USBHOST_SIM_MODE_MASK             (0x1U << GRF_USBHOST_CON1_USBHOST_SIM_MODE_SHIFT)            /* 0x00000040 */
#define GRF_USBHOST_CON1_USBHOST_WORD_IF_SHIFT             (7U)
#define GRF_USBHOST_CON1_USBHOST_WORD_IF_MASK              (0x1U << GRF_USBHOST_CON1_USBHOST_WORD_IF_SHIFT)             /* 0x00000080 */
#define GRF_USBHOST_CON1_USBHOST_AUTOPD_ON_OVERCUR_EN_SHIFT (8U)
#define GRF_USBHOST_CON1_USBHOST_AUTOPD_ON_OVERCUR_EN_MASK (0x1U << GRF_USBHOST_CON1_USBHOST_AUTOPD_ON_OVERCUR_EN_SHIFT) /* 0x00000100 */
#define GRF_USBHOST_CON1_USBHOST_APP_PRT_OVRCUR_SHIFT      (9U)
#define GRF_USBHOST_CON1_USBHOST_APP_PRT_OVRCUR_MASK       (0x1U << GRF_USBHOST_CON1_USBHOST_APP_PRT_OVRCUR_SHIFT)      /* 0x00000200 */
#define GRF_USBHOST_CON1_USBHOST_OHCI_CLKCKTRST_SHIFT      (10U)
#define GRF_USBHOST_CON1_USBHOST_OHCI_CLKCKTRST_MASK       (0x1U << GRF_USBHOST_CON1_USBHOST_OHCI_CLKCKTRST_SHIFT)      /* 0x00000400 */
#define GRF_USBHOST_CON1_USBHOST_OHCI_CNTSEL_SHIFT         (11U)
#define GRF_USBHOST_CON1_USBHOST_OHCI_CNTSEL_MASK          (0x1U << GRF_USBHOST_CON1_USBHOST_OHCI_CNTSEL_SHIFT)         /* 0x00000800 */
#define GRF_USBHOST_CON1_USBHOST_OHCI_SUSP_LGCY_SHIFT      (12U)
#define GRF_USBHOST_CON1_USBHOST_OHCI_SUSP_LGCY_MASK       (0x1U << GRF_USBHOST_CON1_USBHOST_OHCI_SUSP_LGCY_SHIFT)      /* 0x00001000 */
#define GRF_USBHOST_CON1_USBHOST_ARB_PAUSE_SHIFT           (13U)
#define GRF_USBHOST_CON1_USBHOST_ARB_PAUSE_MASK            (0x1U << GRF_USBHOST_CON1_USBHOST_ARB_PAUSE_SHIFT)           /* 0x00002000 */
/* USBHOST_STATUS0 */
#define GRF_USBHOST_STATUS0_OFFSET                         (0x58U)
#define GRF_USBHOST_STATUS0_USBHOST_EHCI_XFER_CNT_SHIFT    (0U)
#define GRF_USBHOST_STATUS0_USBHOST_EHCI_XFER_CNT_MASK     (0x7FFU << GRF_USBHOST_STATUS0_USBHOST_EHCI_XFER_CNT_SHIFT)  /* 0x000007FF */
#define GRF_USBHOST_STATUS0_USBHOST_EHCI_USBSTS_SHIFT      (11U)
#define GRF_USBHOST_STATUS0_USBHOST_EHCI_USBSTS_MASK       (0x3FU << GRF_USBHOST_STATUS0_USBHOST_EHCI_USBSTS_SHIFT)     /* 0x0001F800 */
#define GRF_USBHOST_STATUS0_USBHOST_EHCI_LPSMC_STATE_SHIFT (17U)
#define GRF_USBHOST_STATUS0_USBHOST_EHCI_LPSMC_STATE_MASK  (0xFU << GRF_USBHOST_STATUS0_USBHOST_EHCI_LPSMC_STATE_SHIFT) /* 0x001E0000 */
#define GRF_USBHOST_STATUS0_USBHOST_OHCI_RMTWKP_SHIFT      (21U)
#define GRF_USBHOST_STATUS0_USBHOST_OHCI_RMTWKP_MASK       (0x1U << GRF_USBHOST_STATUS0_USBHOST_OHCI_RMTWKP_SHIFT)      /* 0x00200000 */
#define GRF_USBHOST_STATUS0_USBHOST_OHCI_BUFACC_SHIFT      (22U)
#define GRF_USBHOST_STATUS0_USBHOST_OHCI_BUFACC_MASK       (0x1U << GRF_USBHOST_STATUS0_USBHOST_OHCI_BUFACC_SHIFT)      /* 0x00400000 */
#define GRF_USBHOST_STATUS0_USBHOST_OHCI_GLOBALSUSPEND_SHIFT (23U)
#define GRF_USBHOST_STATUS0_USBHOST_OHCI_GLOBALSUSPEND_MASK (0x1U << GRF_USBHOST_STATUS0_USBHOST_OHCI_GLOBALSUSPEND_SHIFT) /* 0x00800000 */
#define GRF_USBHOST_STATUS0_USBHOST_OHCI_DRWE_SHIFT        (24U)
#define GRF_USBHOST_STATUS0_USBHOST_OHCI_DRWE_MASK         (0x1U << GRF_USBHOST_STATUS0_USBHOST_OHCI_DRWE_SHIFT)        /* 0x01000000 */
#define GRF_USBHOST_STATUS0_USBHOST_OHCI_RWE_SHIFT         (25U)
#define GRF_USBHOST_STATUS0_USBHOST_OHCI_RWE_MASK          (0x1U << GRF_USBHOST_STATUS0_USBHOST_OHCI_RWE_SHIFT)         /* 0x02000000 */
#define GRF_USBHOST_STATUS0_USBHOST_OHCI_CCS_SHIFT         (26U)
#define GRF_USBHOST_STATUS0_USBHOST_OHCI_CCS_MASK          (0x1U << GRF_USBHOST_STATUS0_USBHOST_OHCI_CCS_SHIFT)         /* 0x04000000 */
#define GRF_USBHOST_STATUS0_USBHOST_EHCI_XFER_PRDC_SHIFT   (27U)
#define GRF_USBHOST_STATUS0_USBHOST_EHCI_XFER_PRDC_MASK    (0x1U << GRF_USBHOST_STATUS0_USBHOST_EHCI_XFER_PRDC_SHIFT)   /* 0x08000000 */
#define GRF_USBHOST_STATUS0_USBHOST_EHCI_BUFACC_SHIFT      (28U)
#define GRF_USBHOST_STATUS0_USBHOST_EHCI_BUFACC_MASK       (0x1U << GRF_USBHOST_STATUS0_USBHOST_EHCI_BUFACC_SHIFT)      /* 0x10000000 */
#define GRF_USBHOST_STATUS0_USBHOST_EHCI_PME_STATUS_SHIFT  (29U)
#define GRF_USBHOST_STATUS0_USBHOST_EHCI_PME_STATUS_MASK   (0x1U << GRF_USBHOST_STATUS0_USBHOST_EHCI_PME_STATUS_SHIFT)  /* 0x20000000 */
#define GRF_USBHOST_STATUS0_USBHOST_EHCI_POWER_STATE_ACK_SHIFT (30U)
#define GRF_USBHOST_STATUS0_USBHOST_EHCI_POWER_STATE_ACK_MASK (0x1U << GRF_USBHOST_STATUS0_USBHOST_EHCI_POWER_STATE_ACK_SHIFT) /* 0x40000000 */
/* USBOTG_CON0 */
#define GRF_USBOTG_CON0_OFFSET                             (0x5CU)
#define GRF_USBOTG_CON0_USBOTG_BUS_FILTER_BYPASS_SHIFT     (0U)
#define GRF_USBOTG_CON0_USBOTG_BUS_FILTER_BYPASS_MASK      (0xFU << GRF_USBOTG_CON0_USBOTG_BUS_FILTER_BYPASS_SHIFT)     /* 0x0000000F */
#define GRF_USBOTG_CON0_USBOTG_HUB_PORT_OVERCURRENT_SHIFT  (4U)
#define GRF_USBOTG_CON0_USBOTG_HUB_PORT_OVERCURRENT_MASK   (0x1U << GRF_USBOTG_CON0_USBOTG_HUB_PORT_OVERCURRENT_SHIFT)  /* 0x00000010 */
#define GRF_USBOTG_CON0_USBOTG_HUB_PORT_PERM_ATTACH_SHIFT  (6U)
#define GRF_USBOTG_CON0_USBOTG_HUB_PORT_PERM_ATTACH_MASK   (0x1U << GRF_USBOTG_CON0_USBOTG_HUB_PORT_PERM_ATTACH_SHIFT)  /* 0x00000040 */
#define GRF_USBOTG_CON0_USBOTG_FLADJ_30MHZ_REG_SHIFT       (8U)
#define GRF_USBOTG_CON0_USBOTG_FLADJ_30MHZ_REG_MASK        (0x3FU << GRF_USBOTG_CON0_USBOTG_FLADJ_30MHZ_REG_SHIFT)      /* 0x00003F00 */
#define GRF_USBOTG_CON0_USBOTG_HOST_PORT_POWER_CONTROL_PRESENT_SHIFT (14U)
#define GRF_USBOTG_CON0_USBOTG_HOST_PORT_POWER_CONTROL_PRESENT_MASK (0x1U << GRF_USBOTG_CON0_USBOTG_HOST_PORT_POWER_CONTROL_PRESENT_SHIFT) /* 0x00004000 */
#define GRF_USBOTG_CON0_USBOTG_HOST_U2_PORT_DISABLE_SHIFT  (15U)
#define GRF_USBOTG_CON0_USBOTG_HOST_U2_PORT_DISABLE_MASK   (0x1U << GRF_USBOTG_CON0_USBOTG_HOST_U2_PORT_DISABLE_SHIFT)  /* 0x00008000 */
/* USBOTG_CON1 */
#define GRF_USBOTG_CON1_OFFSET                             (0x60U)
#define GRF_USBOTG_CON1_USBOTG_PME_EN_SHIFT                (1U)
#define GRF_USBOTG_CON1_USBOTG_PME_EN_MASK                 (0x1U << GRF_USBOTG_CON1_USBOTG_PME_EN_SHIFT)                /* 0x00000002 */
#define GRF_USBOTG_CON1_USBOTG_HOST_LEGACY_SMI_PCI_CMD_SHIFT (4U)
#define GRF_USBOTG_CON1_USBOTG_HOST_LEGACY_SMI_PCI_CMD_MASK (0x1U << GRF_USBOTG_CON1_USBOTG_HOST_LEGACY_SMI_PCI_CMD_SHIFT) /* 0x00000010 */
#define GRF_USBOTG_CON1_USBOTG_HOST_LEGACY_SMI_BAR_SHIFT   (5U)
#define GRF_USBOTG_CON1_USBOTG_HOST_LEGACY_SMI_BAR_MASK    (0x1U << GRF_USBOTG_CON1_USBOTG_HOST_LEGACY_SMI_BAR_SHIFT)   /* 0x00000020 */
#define GRF_USBOTG_CON1_USBOTG_HOST_NUM_U2_PORT_SHIFT      (8U)
#define GRF_USBOTG_CON1_USBOTG_HOST_NUM_U2_PORT_MASK       (0xFU << GRF_USBOTG_CON1_USBOTG_HOST_NUM_U2_PORT_SHIFT)      /* 0x00000F00 */
/* USBOTG_STATUS0 */
#define GRF_USBOTG_STATUS0_OFFSET                          (0x64U)
#define GRF_USBOTG_STATUS0                                 (0x0U)
#define GRF_USBOTG_STATUS0_USBOTG_LOGIC_ANALYZER_TRACE_31_0_SHIFT (0U)
#define GRF_USBOTG_STATUS0_USBOTG_LOGIC_ANALYZER_TRACE_31_0_MASK (0xFFFFFFFFU << GRF_USBOTG_STATUS0_USBOTG_LOGIC_ANALYZER_TRACE_31_0_SHIFT) /* 0xFFFFFFFF */
/* USBOTG_STATUS1 */
#define GRF_USBOTG_STATUS1_OFFSET                          (0x68U)
#define GRF_USBOTG_STATUS1                                 (0x0U)
#define GRF_USBOTG_STATUS1_USBOTG_LOGIC_ANALYZER_TRACE_63_32_SHIFT (0U)
#define GRF_USBOTG_STATUS1_USBOTG_LOGIC_ANALYZER_TRACE_63_32_MASK (0xFFFFFFFFU << GRF_USBOTG_STATUS1_USBOTG_LOGIC_ANALYZER_TRACE_63_32_SHIFT) /* 0xFFFFFFFF */
/* USBOTG_STATUS2 */
#define GRF_USBOTG_STATUS2_OFFSET                          (0x6CU)
#define GRF_USBOTG_STATUS2                                 (0x0U)
#define GRF_USBOTG_STATUS2_USBOTG_HOST_CURRENT_BELT_SHIFT  (0U)
#define GRF_USBOTG_STATUS2_USBOTG_HOST_CURRENT_BELT_MASK   (0xFFFFFFFU << GRF_USBOTG_STATUS2_USBOTG_HOST_CURRENT_BELT_SHIFT) /* 0x0FFFFFFF */
/* MAC_CON0 */
#define GRF_MAC_CON0_OFFSET                                (0x70U)
#define GRF_MAC_CON0_MAC_TXCLK_DLY_ENA_SHIFT               (0U)
#define GRF_MAC_CON0_MAC_TXCLK_DLY_ENA_MASK                (0x1U << GRF_MAC_CON0_MAC_TXCLK_DLY_ENA_SHIFT)               /* 0x00000001 */
#define GRF_MAC_CON0_MAC_RXCLK_DLY_ENA_SHIFT               (1U)
#define GRF_MAC_CON0_MAC_RXCLK_DLY_ENA_MASK                (0x1U << GRF_MAC_CON0_MAC_RXCLK_DLY_ENA_SHIFT)               /* 0x00000002 */
#define GRF_MAC_CON0_MAC_SBD_FLOWCTRL_SHIFT                (2U)
#define GRF_MAC_CON0_MAC_SBD_FLOWCTRL_MASK                 (0x1U << GRF_MAC_CON0_MAC_SBD_FLOWCTRL_SHIFT)                /* 0x00000004 */
#define GRF_MAC_CON0_MAC_PTP_AUX_TS_TRIG_SHIFT             (3U)
#define GRF_MAC_CON0_MAC_PTP_AUX_TS_TRIG_MASK              (0x1U << GRF_MAC_CON0_MAC_PTP_AUX_TS_TRIG_SHIFT)             /* 0x00000008 */
#define GRF_MAC_CON0_MAC_PHY_INTF_SEL_SHIFT                (4U)
#define GRF_MAC_CON0_MAC_PHY_INTF_SEL_MASK                 (0x7U << GRF_MAC_CON0_MAC_PHY_INTF_SEL_SHIFT)                /* 0x00000070 */
/* MAC_CON1 */
#define GRF_MAC_CON1_OFFSET                                (0x74U)
#define GRF_MAC_CON1_MAC_M0_CLK_TX_DL_CFG_SHIFT            (0U)
#define GRF_MAC_CON1_MAC_M0_CLK_TX_DL_CFG_MASK             (0xFFU << GRF_MAC_CON1_MAC_M0_CLK_TX_DL_CFG_SHIFT)           /* 0x000000FF */
#define GRF_MAC_CON1_MAC_M0_CLK_RX_DL_CFG_SHIFT            (8U)
#define GRF_MAC_CON1_MAC_M0_CLK_RX_DL_CFG_MASK             (0xFFU << GRF_MAC_CON1_MAC_M0_CLK_RX_DL_CFG_SHIFT)           /* 0x0000FF00 */
/* MAC_CON2 */
#define GRF_MAC_CON2_OFFSET                                (0x78U)
#define GRF_MAC_CON2_MAC_M1_CLK_TX_DL_CFG_SHIFT            (0U)
#define GRF_MAC_CON2_MAC_M1_CLK_TX_DL_CFG_MASK             (0xFFU << GRF_MAC_CON2_MAC_M1_CLK_TX_DL_CFG_SHIFT)           /* 0x000000FF */
#define GRF_MAC_CON2_MAC_M1_CLK_RX_DL_CFG_SHIFT            (8U)
#define GRF_MAC_CON2_MAC_M1_CLK_RX_DL_CFG_MASK             (0xFFU << GRF_MAC_CON2_MAC_M1_CLK_RX_DL_CFG_SHIFT)           /* 0x0000FF00 */
/* MAC_STATUS0 */
#define GRF_MAC_STATUS0_OFFSET                             (0x84U)
#define GRF_MAC_STATUS0                                    (0x0U)
#define GRF_MAC_STATUS0_MAC_MAC_SPEED_SHIFT                (0U)
#define GRF_MAC_STATUS0_MAC_MAC_SPEED_MASK                 (0x3U << GRF_MAC_STATUS0_MAC_MAC_SPEED_SHIFT)                /* 0x00000003 */
#define GRF_MAC_STATUS0_MAC_PTP_PPS_SHIFT                  (2U)
#define GRF_MAC_STATUS0_MAC_PTP_PPS_MASK                   (0x1U << GRF_MAC_STATUS0_MAC_PTP_PPS_SHIFT)                  /* 0x00000004 */
#define GRF_MAC_STATUS0_GMAC_SBD_TX_CLK_GATING_CTRL_SHIFT  (3U)
#define GRF_MAC_STATUS0_GMAC_SBD_TX_CLK_GATING_CTRL_MASK   (0x1U << GRF_MAC_STATUS0_GMAC_SBD_TX_CLK_GATING_CTRL_SHIFT)  /* 0x00000008 */
/* MAC_STATUS1 */
#define GRF_MAC_STATUS1_OFFSET                             (0x88U)
#define GRF_MAC_STATUS1                                    (0x0U)
#define GRF_MAC_STATUS1_GMAC_PTP_TIMESTAMP_31_0_SHIFT      (0U)
#define GRF_MAC_STATUS1_GMAC_PTP_TIMESTAMP_31_0_MASK       (0xFFFFFFFFU << GRF_MAC_STATUS1_GMAC_PTP_TIMESTAMP_31_0_SHIFT) /* 0xFFFFFFFF */
/* MAC_STATUS2 */
#define GRF_MAC_STATUS2_OFFSET                             (0x8CU)
#define GRF_MAC_STATUS2                                    (0x0U)
#define GRF_MAC_STATUS2_GMAC_PTP_TIMESTAMP_63_32_SHIFT     (0U)
#define GRF_MAC_STATUS2_GMAC_PTP_TIMESTAMP_63_32_MASK      (0xFFFFFFFFU << GRF_MAC_STATUS2_GMAC_PTP_TIMESTAMP_63_32_SHIFT) /* 0xFFFFFFFF */
/* MEM_CON0 */
#define GRF_MEM_CON0_OFFSET                                (0x90U)
#define GRF_MEM_CON0_CORE_MEM_SPCFG_SHIFT                  (0U)
#define GRF_MEM_CON0_CORE_MEM_SPCFG_MASK                   (0x7FU << GRF_MEM_CON0_CORE_MEM_SPCFG_SHIFT)                 /* 0x0000007F */
#define GRF_MEM_CON0_MEM_ROMCFG_SHIFT                      (8U)
#define GRF_MEM_CON0_MEM_ROMCFG_MASK                       (0x3FU << GRF_MEM_CON0_MEM_ROMCFG_SHIFT)                     /* 0x00003F00 */
/* MEM_CON1 */
#define GRF_MEM_CON1_OFFSET                                (0x94U)
#define GRF_MEM_CON1_MEM_SPRFCFG_SHIFT                     (0U)
#define GRF_MEM_CON1_MEM_SPRFCFG_MASK                      (0xFFU << GRF_MEM_CON1_MEM_SPRFCFG_SHIFT)                    /* 0x000000FF */
#define GRF_MEM_CON1_MEM_HSSPRFCFG_SHIFT                   (8U)
#define GRF_MEM_CON1_MEM_HSSPRFCFG_MASK                    (0xFFU << GRF_MEM_CON1_MEM_HSSPRFCFG_SHIFT)                  /* 0x0000FF00 */
/* MEM_CON2 */
#define GRF_MEM_CON2_OFFSET                                (0x98U)
#define GRF_MEM_CON2_MEM_DPRFCFG_SHIFT                     (0U)
#define GRF_MEM_CON2_MEM_DPRFCFG_MASK                      (0x3FFU << GRF_MEM_CON2_MEM_DPRFCFG_SHIFT)                   /* 0x000003FF */
/* MEM_CON3 */
#define GRF_MEM_CON3_OFFSET                                (0x9CU)
#define GRF_MEM_CON3_MEM_SPRACFG_SHIFT                     (0U)
#define GRF_MEM_CON3_MEM_SPRACFG_MASK                      (0x3FFFU << GRF_MEM_CON3_MEM_SPRACFG_SHIFT)                  /* 0x00003FFF */
/* TSADC_CON */
#define GRF_TSADC_CON_OFFSET                               (0x100U)
#define GRF_TSADC_CON_CPU_PVT_TRIM_SHIFT                   (0U)
#define GRF_TSADC_CON_CPU_PVT_TRIM_MASK                    (0xFU << GRF_TSADC_CON_CPU_PVT_TRIM_SHIFT)                   /* 0x0000000F */
#define GRF_TSADC_CON_NPU_PVT_TRIM_SHIFT                   (4U)
#define GRF_TSADC_CON_NPU_PVT_TRIM_MASK                    (0xFU << GRF_TSADC_CON_NPU_PVT_TRIM_SHIFT)                   /* 0x000000F0 */
#define GRF_TSADC_CON_CPU_PVT_TDC_MODE_SHIFT               (8U)
#define GRF_TSADC_CON_CPU_PVT_TDC_MODE_MASK                (0x1U << GRF_TSADC_CON_CPU_PVT_TDC_MODE_SHIFT)               /* 0x00000100 */
#define GRF_TSADC_CON_NPU_PVT_TDC_MODE_SHIFT               (9U)
#define GRF_TSADC_CON_NPU_PVT_TDC_MODE_MASK                (0x1U << GRF_TSADC_CON_NPU_PVT_TDC_MODE_SHIFT)               /* 0x00000200 */
#define GRF_TSADC_CON_CPUPVT_SHUT_2CRU_ENA_SHIFT           (10U)
#define GRF_TSADC_CON_CPUPVT_SHUT_2CRU_ENA_MASK            (0x1U << GRF_TSADC_CON_CPUPVT_SHUT_2CRU_ENA_SHIFT)           /* 0x00000400 */
#define GRF_TSADC_CON_NPUPVT_SHUT_2CRU_ENA_SHIFT           (11U)
#define GRF_TSADC_CON_NPUPVT_SHUT_2CRU_ENA_MASK            (0x1U << GRF_TSADC_CON_NPUPVT_SHUT_2CRU_ENA_SHIFT)           /* 0x00000800 */
#define GRF_TSADC_CON_CPU_PVT_SHUT_2GPIO_ENA_SHIFT         (12U)
#define GRF_TSADC_CON_CPU_PVT_SHUT_2GPIO_ENA_MASK          (0x1U << GRF_TSADC_CON_CPU_PVT_SHUT_2GPIO_ENA_SHIFT)         /* 0x00001000 */
#define GRF_TSADC_CON_NPU_PVT_SHUT_2GPIO_ENA_SHIFT         (13U)
#define GRF_TSADC_CON_NPU_PVT_SHUT_2GPIO_ENA_MASK          (0x1U << GRF_TSADC_CON_NPU_PVT_SHUT_2GPIO_ENA_SHIFT)         /* 0x00002000 */
#define GRF_TSADC_CON_PVT_SHUT_2GPIO_SEL_SHIFT             (14U)
#define GRF_TSADC_CON_PVT_SHUT_2GPIO_SEL_MASK              (0x1U << GRF_TSADC_CON_PVT_SHUT_2GPIO_SEL_SHIFT)             /* 0x00004000 */
/* CHIP_ID */
#define GRF_CHIP_ID_OFFSET                                 (0x110U)
#define GRF_CHIP_ID                                        (0x1109U)
#define GRF_CHIP_ID_CHIPID_SHIFT                           (0U)
#define GRF_CHIP_ID_CHIPID_MASK                            (0xFFFFFFFFU << GRF_CHIP_ID_CHIPID_SHIFT)                    /* 0xFFFFFFFF */
/* GPIO0C_IOMUX_H */
#define GRF_GPIO0C_IOMUX_H_OFFSET                          (0x10000U)
#define GRF_GPIO0C_IOMUX_H_GPIO0C4_SEL_SHIFT               (0U)
#define GRF_GPIO0C_IOMUX_H_GPIO0C4_SEL_MASK                (0x7U << GRF_GPIO0C_IOMUX_H_GPIO0C4_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO0C_IOMUX_H_GPIO0C5_SEL_SHIFT               (4U)
#define GRF_GPIO0C_IOMUX_H_GPIO0C5_SEL_MASK                (0x7U << GRF_GPIO0C_IOMUX_H_GPIO0C5_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO0C_IOMUX_H_GPIO0C6_SEL_SHIFT               (8U)
#define GRF_GPIO0C_IOMUX_H_GPIO0C6_SEL_MASK                (0x7U << GRF_GPIO0C_IOMUX_H_GPIO0C6_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO0C_IOMUX_H_GPIO0C7_SEL_SHIFT               (12U)
#define GRF_GPIO0C_IOMUX_H_GPIO0C7_SEL_MASK                (0x7U << GRF_GPIO0C_IOMUX_H_GPIO0C7_SEL_SHIFT)               /* 0x00007000 */
/* GPIO0D_IOMUX_L */
#define GRF_GPIO0D_IOMUX_L_OFFSET                          (0x10004U)
#define GRF_GPIO0D_IOMUX_L_GPIO0D0_SEL_SHIFT               (0U)
#define GRF_GPIO0D_IOMUX_L_GPIO0D0_SEL_MASK                (0x7U << GRF_GPIO0D_IOMUX_L_GPIO0D0_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO0D_IOMUX_L_GPIO0D1_SEL_SHIFT               (4U)
#define GRF_GPIO0D_IOMUX_L_GPIO0D1_SEL_MASK                (0x7U << GRF_GPIO0D_IOMUX_L_GPIO0D1_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO0D_IOMUX_L_GPIO0D2_SEL_SHIFT               (8U)
#define GRF_GPIO0D_IOMUX_L_GPIO0D2_SEL_MASK                (0x7U << GRF_GPIO0D_IOMUX_L_GPIO0D2_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO0D_IOMUX_L_GPIO0D3_SEL_SHIFT               (12U)
#define GRF_GPIO0D_IOMUX_L_GPIO0D3_SEL_MASK                (0x7U << GRF_GPIO0D_IOMUX_L_GPIO0D3_SEL_SHIFT)               /* 0x00007000 */
/* GPIO0D_IOMUX_H */
#define GRF_GPIO0D_IOMUX_H_OFFSET                          (0x10008U)
#define GRF_GPIO0D_IOMUX_H_GPIO0D4_SEL_SHIFT               (0U)
#define GRF_GPIO0D_IOMUX_H_GPIO0D4_SEL_MASK                (0x7U << GRF_GPIO0D_IOMUX_H_GPIO0D4_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO0D_IOMUX_H_GPIO0D5_SEL_SHIFT               (4U)
#define GRF_GPIO0D_IOMUX_H_GPIO0D5_SEL_MASK                (0x7U << GRF_GPIO0D_IOMUX_H_GPIO0D5_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO0D_IOMUX_H_GPIO0D6_SEL_SHIFT               (8U)
#define GRF_GPIO0D_IOMUX_H_GPIO0D6_SEL_MASK                (0x7U << GRF_GPIO0D_IOMUX_H_GPIO0D6_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO0D_IOMUX_H_GPIO0D7_SEL_SHIFT               (12U)
#define GRF_GPIO0D_IOMUX_H_GPIO0D7_SEL_MASK                (0x7U << GRF_GPIO0D_IOMUX_H_GPIO0D7_SEL_SHIFT)               /* 0x00007000 */
/* GPIO1A_IOMUX_L */
#define GRF_GPIO1A_IOMUX_L_OFFSET                          (0x10010U)
#define GRF_GPIO1A_IOMUX_L_GPIO1A0_SEL_SHIFT               (0U)
#define GRF_GPIO1A_IOMUX_L_GPIO1A0_SEL_MASK                (0x7U << GRF_GPIO1A_IOMUX_L_GPIO1A0_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO1A_IOMUX_L_GPIO1A1_SEL_SHIFT               (4U)
#define GRF_GPIO1A_IOMUX_L_GPIO1A1_SEL_MASK                (0x7U << GRF_GPIO1A_IOMUX_L_GPIO1A1_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO1A_IOMUX_L_GPIO1A2_SEL_SHIFT               (8U)
#define GRF_GPIO1A_IOMUX_L_GPIO1A2_SEL_MASK                (0x7U << GRF_GPIO1A_IOMUX_L_GPIO1A2_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO1A_IOMUX_L_GPIO1A3_SEL_SHIFT               (12U)
#define GRF_GPIO1A_IOMUX_L_GPIO1A3_SEL_MASK                (0x7U << GRF_GPIO1A_IOMUX_L_GPIO1A3_SEL_SHIFT)               /* 0x00007000 */
/* GPIO1A_IOMUX_H */
#define GRF_GPIO1A_IOMUX_H_OFFSET                          (0x10014U)
#define GRF_GPIO1A_IOMUX_H_GPIO1A4_SEL_SHIFT               (0U)
#define GRF_GPIO1A_IOMUX_H_GPIO1A4_SEL_MASK                (0x7U << GRF_GPIO1A_IOMUX_H_GPIO1A4_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO1A_IOMUX_H_GPIO1A5_SEL_SHIFT               (4U)
#define GRF_GPIO1A_IOMUX_H_GPIO1A5_SEL_MASK                (0x7U << GRF_GPIO1A_IOMUX_H_GPIO1A5_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO1A_IOMUX_H_GPIO1A6_SEL_SHIFT               (8U)
#define GRF_GPIO1A_IOMUX_H_GPIO1A6_SEL_MASK                (0x7U << GRF_GPIO1A_IOMUX_H_GPIO1A6_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO1A_IOMUX_H_GPIO1A7_SEL_SHIFT               (12U)
#define GRF_GPIO1A_IOMUX_H_GPIO1A7_SEL_MASK                (0x7U << GRF_GPIO1A_IOMUX_H_GPIO1A7_SEL_SHIFT)               /* 0x00007000 */
/* GPIO1B_IOMUX_L */
#define GRF_GPIO1B_IOMUX_L_OFFSET                          (0x10018U)
#define GRF_GPIO1B_IOMUX_L_GPIO1B0_SEL_SHIFT               (0U)
#define GRF_GPIO1B_IOMUX_L_GPIO1B0_SEL_MASK                (0x7U << GRF_GPIO1B_IOMUX_L_GPIO1B0_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO1B_IOMUX_L_GPIO1B1_SEL_SHIFT               (4U)
#define GRF_GPIO1B_IOMUX_L_GPIO1B1_SEL_MASK                (0x7U << GRF_GPIO1B_IOMUX_L_GPIO1B1_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO1B_IOMUX_L_GPIO1B2_SEL_SHIFT               (8U)
#define GRF_GPIO1B_IOMUX_L_GPIO1B2_SEL_MASK                (0x7U << GRF_GPIO1B_IOMUX_L_GPIO1B2_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO1B_IOMUX_L_GPIO1B3_SEL_SHIFT               (12U)
#define GRF_GPIO1B_IOMUX_L_GPIO1B3_SEL_MASK                (0x7U << GRF_GPIO1B_IOMUX_L_GPIO1B3_SEL_SHIFT)               /* 0x00007000 */
/* GPIO1B_IOMUX_H */
#define GRF_GPIO1B_IOMUX_H_OFFSET                          (0x1001CU)
#define GRF_GPIO1B_IOMUX_H_GPIO1B4_SEL_SHIFT               (0U)
#define GRF_GPIO1B_IOMUX_H_GPIO1B4_SEL_MASK                (0x7U << GRF_GPIO1B_IOMUX_H_GPIO1B4_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO1B_IOMUX_H_GPIO1B5_SEL_SHIFT               (4U)
#define GRF_GPIO1B_IOMUX_H_GPIO1B5_SEL_MASK                (0x7U << GRF_GPIO1B_IOMUX_H_GPIO1B5_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO1B_IOMUX_H_GPIO1B6_SEL_SHIFT               (8U)
#define GRF_GPIO1B_IOMUX_H_GPIO1B6_SEL_MASK                (0x7U << GRF_GPIO1B_IOMUX_H_GPIO1B6_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO1B_IOMUX_H_GPIO1B7_SEL_SHIFT               (12U)
#define GRF_GPIO1B_IOMUX_H_GPIO1B7_SEL_MASK                (0x7U << GRF_GPIO1B_IOMUX_H_GPIO1B7_SEL_SHIFT)               /* 0x00007000 */
/* GPIO1C_IOMUX_L */
#define GRF_GPIO1C_IOMUX_L_OFFSET                          (0x10020U)
#define GRF_GPIO1C_IOMUX_L_GPIO1C0_SEL_SHIFT               (0U)
#define GRF_GPIO1C_IOMUX_L_GPIO1C0_SEL_MASK                (0x7U << GRF_GPIO1C_IOMUX_L_GPIO1C0_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO1C_IOMUX_L_GPIO1C1_SEL_SHIFT               (4U)
#define GRF_GPIO1C_IOMUX_L_GPIO1C1_SEL_MASK                (0x7U << GRF_GPIO1C_IOMUX_L_GPIO1C1_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO1C_IOMUX_L_GPIO1C2_SEL_SHIFT               (8U)
#define GRF_GPIO1C_IOMUX_L_GPIO1C2_SEL_MASK                (0x7U << GRF_GPIO1C_IOMUX_L_GPIO1C2_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO1C_IOMUX_L_GPIO1C3_SEL_SHIFT               (12U)
#define GRF_GPIO1C_IOMUX_L_GPIO1C3_SEL_MASK                (0x7U << GRF_GPIO1C_IOMUX_L_GPIO1C3_SEL_SHIFT)               /* 0x00007000 */
/* GPIO1C_IOMUX_H */
#define GRF_GPIO1C_IOMUX_H_OFFSET                          (0x10024U)
#define GRF_GPIO1C_IOMUX_H_GPIO1C4_SEL_SHIFT               (0U)
#define GRF_GPIO1C_IOMUX_H_GPIO1C4_SEL_MASK                (0x7U << GRF_GPIO1C_IOMUX_H_GPIO1C4_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO1C_IOMUX_H_GPIO1C5_SEL_SHIFT               (4U)
#define GRF_GPIO1C_IOMUX_H_GPIO1C5_SEL_MASK                (0x7U << GRF_GPIO1C_IOMUX_H_GPIO1C5_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO1C_IOMUX_H_GPIO1C6_SEL_SHIFT               (8U)
#define GRF_GPIO1C_IOMUX_H_GPIO1C6_SEL_MASK                (0x7U << GRF_GPIO1C_IOMUX_H_GPIO1C6_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO1C_IOMUX_H_GPIO1C7_SEL_SHIFT               (12U)
#define GRF_GPIO1C_IOMUX_H_GPIO1C7_SEL_MASK                (0x7U << GRF_GPIO1C_IOMUX_H_GPIO1C7_SEL_SHIFT)               /* 0x00007000 */
/* GPIO1D_IOMUX_L */
#define GRF_GPIO1D_IOMUX_L_OFFSET                          (0x10028U)
#define GRF_GPIO1D_IOMUX_L_GPIO1D0_SEL_SHIFT               (0U)
#define GRF_GPIO1D_IOMUX_L_GPIO1D0_SEL_MASK                (0x7U << GRF_GPIO1D_IOMUX_L_GPIO1D0_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO1D_IOMUX_L_GPIO1D1_SEL_SHIFT               (4U)
#define GRF_GPIO1D_IOMUX_L_GPIO1D1_SEL_MASK                (0x7U << GRF_GPIO1D_IOMUX_L_GPIO1D1_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO1D_IOMUX_L_GPIO1D2_SEL_SHIFT               (8U)
#define GRF_GPIO1D_IOMUX_L_GPIO1D2_SEL_MASK                (0x7U << GRF_GPIO1D_IOMUX_L_GPIO1D2_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO1D_IOMUX_L_GPIO1D3_SEL_SHIFT               (12U)
#define GRF_GPIO1D_IOMUX_L_GPIO1D3_SEL_MASK                (0x7U << GRF_GPIO1D_IOMUX_L_GPIO1D3_SEL_SHIFT)               /* 0x00007000 */
/* GPIO1D_IOMUX_H */
#define GRF_GPIO1D_IOMUX_H_OFFSET                          (0x1002CU)
#define GRF_GPIO1D_IOMUX_H_GPIO1D4_SEL_SHIFT               (0U)
#define GRF_GPIO1D_IOMUX_H_GPIO1D4_SEL_MASK                (0x7U << GRF_GPIO1D_IOMUX_H_GPIO1D4_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO1D_IOMUX_H_GPIO1D5_SEL_SHIFT               (4U)
#define GRF_GPIO1D_IOMUX_H_GPIO1D5_SEL_MASK                (0x7U << GRF_GPIO1D_IOMUX_H_GPIO1D5_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO1D_IOMUX_H_GPIO1D6_SEL_SHIFT               (8U)
#define GRF_GPIO1D_IOMUX_H_GPIO1D6_SEL_MASK                (0x7U << GRF_GPIO1D_IOMUX_H_GPIO1D6_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO1D_IOMUX_H_GPIO1D7_SEL_SHIFT               (12U)
#define GRF_GPIO1D_IOMUX_H_GPIO1D7_SEL_MASK                (0x7U << GRF_GPIO1D_IOMUX_H_GPIO1D7_SEL_SHIFT)               /* 0x00007000 */
/* GPIO2A_IOMUX_L */
#define GRF_GPIO2A_IOMUX_L_OFFSET                          (0x10030U)
#define GRF_GPIO2A_IOMUX_L_GPIO2A0_SEL_SHIFT               (0U)
#define GRF_GPIO2A_IOMUX_L_GPIO2A0_SEL_MASK                (0x7U << GRF_GPIO2A_IOMUX_L_GPIO2A0_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO2A_IOMUX_L_GPIO2A1_SEL_SHIFT               (4U)
#define GRF_GPIO2A_IOMUX_L_GPIO2A1_SEL_MASK                (0x7U << GRF_GPIO2A_IOMUX_L_GPIO2A1_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO2A_IOMUX_L_GPIO2A2_SEL_SHIFT               (8U)
#define GRF_GPIO2A_IOMUX_L_GPIO2A2_SEL_MASK                (0x7U << GRF_GPIO2A_IOMUX_L_GPIO2A2_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO2A_IOMUX_L_GPIO2A3_SEL_SHIFT               (12U)
#define GRF_GPIO2A_IOMUX_L_GPIO2A3_SEL_MASK                (0x7U << GRF_GPIO2A_IOMUX_L_GPIO2A3_SEL_SHIFT)               /* 0x00007000 */
/* GPIO2A_IOMUX_H */
#define GRF_GPIO2A_IOMUX_H_OFFSET                          (0x10034U)
#define GRF_GPIO2A_IOMUX_H_GPIO2A4_SEL_SHIFT               (0U)
#define GRF_GPIO2A_IOMUX_H_GPIO2A4_SEL_MASK                (0x7U << GRF_GPIO2A_IOMUX_H_GPIO2A4_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO2A_IOMUX_H_GPIO2A5_SEL_SHIFT               (4U)
#define GRF_GPIO2A_IOMUX_H_GPIO2A5_SEL_MASK                (0x7U << GRF_GPIO2A_IOMUX_H_GPIO2A5_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO2A_IOMUX_H_GPIO2A6_SEL_SHIFT               (8U)
#define GRF_GPIO2A_IOMUX_H_GPIO2A6_SEL_MASK                (0x7U << GRF_GPIO2A_IOMUX_H_GPIO2A6_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO2A_IOMUX_H_GPIO2A7_SEL_SHIFT               (12U)
#define GRF_GPIO2A_IOMUX_H_GPIO2A7_SEL_MASK                (0x7U << GRF_GPIO2A_IOMUX_H_GPIO2A7_SEL_SHIFT)               /* 0x00007000 */
/* GPIO2B_IOMUX_L */
#define GRF_GPIO2B_IOMUX_L_OFFSET                          (0x10038U)
#define GRF_GPIO2B_IOMUX_L_GPIO2B0_SEL_SHIFT               (0U)
#define GRF_GPIO2B_IOMUX_L_GPIO2B0_SEL_MASK                (0x7U << GRF_GPIO2B_IOMUX_L_GPIO2B0_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO2B_IOMUX_L_GPIO2B1_SEL_SHIFT               (4U)
#define GRF_GPIO2B_IOMUX_L_GPIO2B1_SEL_MASK                (0x7U << GRF_GPIO2B_IOMUX_L_GPIO2B1_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO2B_IOMUX_L_GPIO2B2_SEL_SHIFT               (8U)
#define GRF_GPIO2B_IOMUX_L_GPIO2B2_SEL_MASK                (0x7U << GRF_GPIO2B_IOMUX_L_GPIO2B2_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO2B_IOMUX_L_GPIO2B3_SEL_SHIFT               (12U)
#define GRF_GPIO2B_IOMUX_L_GPIO2B3_SEL_MASK                (0x7U << GRF_GPIO2B_IOMUX_L_GPIO2B3_SEL_SHIFT)               /* 0x00007000 */
/* GPIO2B_IOMUX_H */
#define GRF_GPIO2B_IOMUX_H_OFFSET                          (0x1003CU)
#define GRF_GPIO2B_IOMUX_H_GPIO2B4_SEL_SHIFT               (0U)
#define GRF_GPIO2B_IOMUX_H_GPIO2B4_SEL_MASK                (0x7U << GRF_GPIO2B_IOMUX_H_GPIO2B4_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO2B_IOMUX_H_GPIO2B5_SEL_SHIFT               (4U)
#define GRF_GPIO2B_IOMUX_H_GPIO2B5_SEL_MASK                (0x7U << GRF_GPIO2B_IOMUX_H_GPIO2B5_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO2B_IOMUX_H_GPIO2B6_SEL_SHIFT               (8U)
#define GRF_GPIO2B_IOMUX_H_GPIO2B6_SEL_MASK                (0x7U << GRF_GPIO2B_IOMUX_H_GPIO2B6_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO2B_IOMUX_H_GPIO2B7_SEL_SHIFT               (12U)
#define GRF_GPIO2B_IOMUX_H_GPIO2B7_SEL_MASK                (0x7U << GRF_GPIO2B_IOMUX_H_GPIO2B7_SEL_SHIFT)               /* 0x00007000 */
/* GPIO2C_IOMUX_L */
#define GRF_GPIO2C_IOMUX_L_OFFSET                          (0x10040U)
#define GRF_GPIO2C_IOMUX_L_GPIO2C0_SEL_SHIFT               (0U)
#define GRF_GPIO2C_IOMUX_L_GPIO2C0_SEL_MASK                (0x7U << GRF_GPIO2C_IOMUX_L_GPIO2C0_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO2C_IOMUX_L_GPIO2C1_SEL_SHIFT               (4U)
#define GRF_GPIO2C_IOMUX_L_GPIO2C1_SEL_MASK                (0x7U << GRF_GPIO2C_IOMUX_L_GPIO2C1_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO2C_IOMUX_L_GPIO2C2_SEL_SHIFT               (8U)
#define GRF_GPIO2C_IOMUX_L_GPIO2C2_SEL_MASK                (0x7U << GRF_GPIO2C_IOMUX_L_GPIO2C2_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO2C_IOMUX_L_GPIO2C3_SEL_SHIFT               (12U)
#define GRF_GPIO2C_IOMUX_L_GPIO2C3_SEL_MASK                (0x7U << GRF_GPIO2C_IOMUX_L_GPIO2C3_SEL_SHIFT)               /* 0x00007000 */
/* GPIO2C_IOMUX_H */
#define GRF_GPIO2C_IOMUX_H_OFFSET                          (0x10044U)
#define GRF_GPIO2C_IOMUX_H_GPIO2C4_SEL_SHIFT               (0U)
#define GRF_GPIO2C_IOMUX_H_GPIO2C4_SEL_MASK                (0x7U << GRF_GPIO2C_IOMUX_H_GPIO2C4_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO2C_IOMUX_H_GPIO2C5_SEL_SHIFT               (4U)
#define GRF_GPIO2C_IOMUX_H_GPIO2C5_SEL_MASK                (0x7U << GRF_GPIO2C_IOMUX_H_GPIO2C5_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO2C_IOMUX_H_GPIO2C6_SEL_SHIFT               (8U)
#define GRF_GPIO2C_IOMUX_H_GPIO2C6_SEL_MASK                (0x7U << GRF_GPIO2C_IOMUX_H_GPIO2C6_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO2C_IOMUX_H_GPIO2C7_SEL_SHIFT               (12U)
#define GRF_GPIO2C_IOMUX_H_GPIO2C7_SEL_MASK                (0x7U << GRF_GPIO2C_IOMUX_H_GPIO2C7_SEL_SHIFT)               /* 0x00007000 */
/* GPIO2D_IOMUX_L */
#define GRF_GPIO2D_IOMUX_L_OFFSET                          (0x10048U)
#define GRF_GPIO2D_IOMUX_L_GPIO2D0_SEL_SHIFT               (0U)
#define GRF_GPIO2D_IOMUX_L_GPIO2D0_SEL_MASK                (0x7U << GRF_GPIO2D_IOMUX_L_GPIO2D0_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO2D_IOMUX_L_GPIO2D1_SEL_SHIFT               (4U)
#define GRF_GPIO2D_IOMUX_L_GPIO2D1_SEL_MASK                (0x7U << GRF_GPIO2D_IOMUX_L_GPIO2D1_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO2D_IOMUX_L_GPIO2D2_SEL_SHIFT               (8U)
#define GRF_GPIO2D_IOMUX_L_GPIO2D2_SEL_MASK                (0x7U << GRF_GPIO2D_IOMUX_L_GPIO2D2_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO2D_IOMUX_L_GPIO2D3_SEL_SHIFT               (12U)
#define GRF_GPIO2D_IOMUX_L_GPIO2D3_SEL_MASK                (0x7U << GRF_GPIO2D_IOMUX_L_GPIO2D3_SEL_SHIFT)               /* 0x00007000 */
/* GPIO2D_IOMUX_H */
#define GRF_GPIO2D_IOMUX_H_OFFSET                          (0x1004CU)
#define GRF_GPIO2D_IOMUX_H_GPIO2D4_SEL_SHIFT               (0U)
#define GRF_GPIO2D_IOMUX_H_GPIO2D4_SEL_MASK                (0x7U << GRF_GPIO2D_IOMUX_H_GPIO2D4_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO2D_IOMUX_H_GPIO2D5_SEL_SHIFT               (4U)
#define GRF_GPIO2D_IOMUX_H_GPIO2D5_SEL_MASK                (0x7U << GRF_GPIO2D_IOMUX_H_GPIO2D5_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO2D_IOMUX_H_GPIO2D6_SEL_SHIFT               (8U)
#define GRF_GPIO2D_IOMUX_H_GPIO2D6_SEL_MASK                (0x7U << GRF_GPIO2D_IOMUX_H_GPIO2D6_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO2D_IOMUX_H_GPIO2D7_SEL_SHIFT               (12U)
#define GRF_GPIO2D_IOMUX_H_GPIO2D7_SEL_MASK                (0x7U << GRF_GPIO2D_IOMUX_H_GPIO2D7_SEL_SHIFT)               /* 0x00007000 */
/* GPIO3A_IOMUX_L */
#define GRF_GPIO3A_IOMUX_L_OFFSET                          (0x10050U)
#define GRF_GPIO3A_IOMUX_L_GPIO3A0_SEL_SHIFT               (0U)
#define GRF_GPIO3A_IOMUX_L_GPIO3A0_SEL_MASK                (0x7U << GRF_GPIO3A_IOMUX_L_GPIO3A0_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO3A_IOMUX_L_GPIO3A1_SEL_SHIFT               (4U)
#define GRF_GPIO3A_IOMUX_L_GPIO3A1_SEL_MASK                (0x7U << GRF_GPIO3A_IOMUX_L_GPIO3A1_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO3A_IOMUX_L_GPIO3A2_SEL_SHIFT               (8U)
#define GRF_GPIO3A_IOMUX_L_GPIO3A2_SEL_MASK                (0x7U << GRF_GPIO3A_IOMUX_L_GPIO3A2_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO3A_IOMUX_L_GPIO3A3_SEL_SHIFT               (12U)
#define GRF_GPIO3A_IOMUX_L_GPIO3A3_SEL_MASK                (0x7U << GRF_GPIO3A_IOMUX_L_GPIO3A3_SEL_SHIFT)               /* 0x00007000 */
/* GPIO3A_IOMUX_H */
#define GRF_GPIO3A_IOMUX_H_OFFSET                          (0x10054U)
#define GRF_GPIO3A_IOMUX_H_GPIO3A4_SEL_SHIFT               (0U)
#define GRF_GPIO3A_IOMUX_H_GPIO3A4_SEL_MASK                (0x7U << GRF_GPIO3A_IOMUX_H_GPIO3A4_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO3A_IOMUX_H_GPIO3A5_SEL_SHIFT               (4U)
#define GRF_GPIO3A_IOMUX_H_GPIO3A5_SEL_MASK                (0x7U << GRF_GPIO3A_IOMUX_H_GPIO3A5_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO3A_IOMUX_H_GPIO3A6_SEL_SHIFT               (8U)
#define GRF_GPIO3A_IOMUX_H_GPIO3A6_SEL_MASK                (0x7U << GRF_GPIO3A_IOMUX_H_GPIO3A6_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO3A_IOMUX_H_GPIO3A7_SEL_SHIFT               (12U)
#define GRF_GPIO3A_IOMUX_H_GPIO3A7_SEL_MASK                (0x7U << GRF_GPIO3A_IOMUX_H_GPIO3A7_SEL_SHIFT)               /* 0x00007000 */
/* GPIO3B_IOMUX_L */
#define GRF_GPIO3B_IOMUX_L_OFFSET                          (0x10058U)
#define GRF_GPIO3B_IOMUX_L_GPIO3B0_SEL_SHIFT               (0U)
#define GRF_GPIO3B_IOMUX_L_GPIO3B0_SEL_MASK                (0x7U << GRF_GPIO3B_IOMUX_L_GPIO3B0_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO3B_IOMUX_L_GPIO3B1_SEL_SHIFT               (4U)
#define GRF_GPIO3B_IOMUX_L_GPIO3B1_SEL_MASK                (0x7U << GRF_GPIO3B_IOMUX_L_GPIO3B1_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO3B_IOMUX_L_GPIO3B2_SEL_SHIFT               (8U)
#define GRF_GPIO3B_IOMUX_L_GPIO3B2_SEL_MASK                (0x7U << GRF_GPIO3B_IOMUX_L_GPIO3B2_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO3B_IOMUX_L_GPIO3B3_SEL_SHIFT               (12U)
#define GRF_GPIO3B_IOMUX_L_GPIO3B3_SEL_MASK                (0x7U << GRF_GPIO3B_IOMUX_L_GPIO3B3_SEL_SHIFT)               /* 0x00007000 */
/* GPIO3B_IOMUX_H */
#define GRF_GPIO3B_IOMUX_H_OFFSET                          (0x1005CU)
#define GRF_GPIO3B_IOMUX_H_GPIO3B4_SEL_SHIFT               (0U)
#define GRF_GPIO3B_IOMUX_H_GPIO3B4_SEL_MASK                (0x7U << GRF_GPIO3B_IOMUX_H_GPIO3B4_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO3B_IOMUX_H_GPIO3B5_SEL_SHIFT               (4U)
#define GRF_GPIO3B_IOMUX_H_GPIO3B5_SEL_MASK                (0x7U << GRF_GPIO3B_IOMUX_H_GPIO3B5_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO3B_IOMUX_H_GPIO3B6_SEL_SHIFT               (8U)
#define GRF_GPIO3B_IOMUX_H_GPIO3B6_SEL_MASK                (0x7U << GRF_GPIO3B_IOMUX_H_GPIO3B6_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO3B_IOMUX_H_GPIO3B7_SEL_SHIFT               (12U)
#define GRF_GPIO3B_IOMUX_H_GPIO3B7_SEL_MASK                (0x7U << GRF_GPIO3B_IOMUX_H_GPIO3B7_SEL_SHIFT)               /* 0x00007000 */
/* GPIO3C_IOMUX_L */
#define GRF_GPIO3C_IOMUX_L_OFFSET                          (0x10060U)
#define GRF_GPIO3C_IOMUX_L_GPIO3C0_SEL_SHIFT               (0U)
#define GRF_GPIO3C_IOMUX_L_GPIO3C0_SEL_MASK                (0x7U << GRF_GPIO3C_IOMUX_L_GPIO3C0_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO3C_IOMUX_L_GPIO3C1_SEL_SHIFT               (4U)
#define GRF_GPIO3C_IOMUX_L_GPIO3C1_SEL_MASK                (0x7U << GRF_GPIO3C_IOMUX_L_GPIO3C1_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO3C_IOMUX_L_GPIO3C2_SEL_SHIFT               (8U)
#define GRF_GPIO3C_IOMUX_L_GPIO3C2_SEL_MASK                (0x7U << GRF_GPIO3C_IOMUX_L_GPIO3C2_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO3C_IOMUX_L_GPIO3C3_SEL_SHIFT               (12U)
#define GRF_GPIO3C_IOMUX_L_GPIO3C3_SEL_MASK                (0x7U << GRF_GPIO3C_IOMUX_L_GPIO3C3_SEL_SHIFT)               /* 0x00007000 */
/* GPIO3C_IOMUX_H */
#define GRF_GPIO3C_IOMUX_H_OFFSET                          (0x10064U)
#define GRF_GPIO3C_IOMUX_H_GPIO3C4_SEL_SHIFT               (0U)
#define GRF_GPIO3C_IOMUX_H_GPIO3C4_SEL_MASK                (0x7U << GRF_GPIO3C_IOMUX_H_GPIO3C4_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO3C_IOMUX_H_GPIO3C5_SEL_SHIFT               (4U)
#define GRF_GPIO3C_IOMUX_H_GPIO3C5_SEL_MASK                (0x7U << GRF_GPIO3C_IOMUX_H_GPIO3C5_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO3C_IOMUX_H_GPIO3C6_SEL_SHIFT               (8U)
#define GRF_GPIO3C_IOMUX_H_GPIO3C6_SEL_MASK                (0x7U << GRF_GPIO3C_IOMUX_H_GPIO3C6_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO3C_IOMUX_H_GPIO3C7_SEL_SHIFT               (12U)
#define GRF_GPIO3C_IOMUX_H_GPIO3C7_SEL_MASK                (0x7U << GRF_GPIO3C_IOMUX_H_GPIO3C7_SEL_SHIFT)               /* 0x00007000 */
/* GPIO3D_IOMUX_L */
#define GRF_GPIO3D_IOMUX_L_OFFSET                          (0x10068U)
#define GRF_GPIO3D_IOMUX_L_GPIO3D0_SEL_SHIFT               (0U)
#define GRF_GPIO3D_IOMUX_L_GPIO3D0_SEL_MASK                (0x7U << GRF_GPIO3D_IOMUX_L_GPIO3D0_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO3D_IOMUX_L_GPIO3D1_SEL_SHIFT               (4U)
#define GRF_GPIO3D_IOMUX_L_GPIO3D1_SEL_MASK                (0x7U << GRF_GPIO3D_IOMUX_L_GPIO3D1_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO3D_IOMUX_L_GPIO3D2_SEL_SHIFT               (8U)
#define GRF_GPIO3D_IOMUX_L_GPIO3D2_SEL_MASK                (0x7U << GRF_GPIO3D_IOMUX_L_GPIO3D2_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO3D_IOMUX_L_GPIO3D3_SEL_SHIFT               (12U)
#define GRF_GPIO3D_IOMUX_L_GPIO3D3_SEL_MASK                (0x7U << GRF_GPIO3D_IOMUX_L_GPIO3D3_SEL_SHIFT)               /* 0x00007000 */
/* GPIO3D_IOMUX_H */
#define GRF_GPIO3D_IOMUX_H_OFFSET                          (0x1006CU)
#define GRF_GPIO3D_IOMUX_H_GPIO3D4_SEL_SHIFT               (0U)
#define GRF_GPIO3D_IOMUX_H_GPIO3D4_SEL_MASK                (0x7U << GRF_GPIO3D_IOMUX_H_GPIO3D4_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO3D_IOMUX_H_GPIO3D5_SEL_SHIFT               (4U)
#define GRF_GPIO3D_IOMUX_H_GPIO3D5_SEL_MASK                (0x7U << GRF_GPIO3D_IOMUX_H_GPIO3D5_SEL_SHIFT)               /* 0x00000070 */
#define GRF_GPIO3D_IOMUX_H_GPIO3D6_SEL_SHIFT               (8U)
#define GRF_GPIO3D_IOMUX_H_GPIO3D6_SEL_MASK                (0x7U << GRF_GPIO3D_IOMUX_H_GPIO3D6_SEL_SHIFT)               /* 0x00000700 */
#define GRF_GPIO3D_IOMUX_H_GPIO3D7_SEL_SHIFT               (12U)
#define GRF_GPIO3D_IOMUX_H_GPIO3D7_SEL_MASK                (0x7U << GRF_GPIO3D_IOMUX_H_GPIO3D7_SEL_SHIFT)               /* 0x00007000 */
/* GPIO4A_IOMUX_L */
#define GRF_GPIO4A_IOMUX_L_OFFSET                          (0x10070U)
#define GRF_GPIO4A_IOMUX_L_GPIO4A0_SEL_SHIFT               (0U)
#define GRF_GPIO4A_IOMUX_L_GPIO4A0_SEL_MASK                (0x7U << GRF_GPIO4A_IOMUX_L_GPIO4A0_SEL_SHIFT)               /* 0x00000007 */
#define GRF_GPIO4A_IOMUX_L_GPIO4A1_SEL_SHIFT               (4U)
#define GRF_GPIO4A_IOMUX_L_GPIO4A1_SEL_MASK                (0x7U << GRF_GPIO4A_IOMUX_L_GPIO4A1_SEL_SHIFT)               /* 0x00000070 */
/* GPIO0C_DS_H */
#define GRF_GPIO0C_DS_H_OFFSET                             (0x10080U)
#define GRF_GPIO0C_DS_H_GPIO0C4_DS_SHIFT                   (0U)
#define GRF_GPIO0C_DS_H_GPIO0C4_DS_MASK                    (0xFU << GRF_GPIO0C_DS_H_GPIO0C4_DS_SHIFT)                   /* 0x0000000F */
#define GRF_GPIO0C_DS_H_GPIO0C5_DS_SHIFT                   (4U)
#define GRF_GPIO0C_DS_H_GPIO0C5_DS_MASK                    (0xFU << GRF_GPIO0C_DS_H_GPIO0C5_DS_SHIFT)                   /* 0x000000F0 */
#define GRF_GPIO0C_DS_H_GPIO0C6_DS_SHIFT                   (8U)
#define GRF_GPIO0C_DS_H_GPIO0C6_DS_MASK                    (0xFU << GRF_GPIO0C_DS_H_GPIO0C6_DS_SHIFT)                   /* 0x00000F00 */
#define GRF_GPIO0C_DS_H_GPIO0C7_DS_SHIFT                   (12U)
#define GRF_GPIO0C_DS_H_GPIO0C7_DS_MASK                    (0xFU << GRF_GPIO0C_DS_H_GPIO0C7_DS_SHIFT)                   /* 0x0000F000 */
/* GPIO0D_DS_L */
#define GRF_GPIO0D_DS_L_OFFSET                             (0x10084U)
#define GRF_GPIO0D_DS_L_GPIO0D0_DS_SHIFT                   (0U)
#define GRF_GPIO0D_DS_L_GPIO0D0_DS_MASK                    (0xFU << GRF_GPIO0D_DS_L_GPIO0D0_DS_SHIFT)                   /* 0x0000000F */
#define GRF_GPIO0D_DS_L_GPIO0D1_DS_SHIFT                   (4U)
#define GRF_GPIO0D_DS_L_GPIO0D1_DS_MASK                    (0xFU << GRF_GPIO0D_DS_L_GPIO0D1_DS_SHIFT)                   /* 0x000000F0 */
#define GRF_GPIO0D_DS_L_GPIO0D2_DS_SHIFT                   (8U)
#define GRF_GPIO0D_DS_L_GPIO0D2_DS_MASK                    (0xFU << GRF_GPIO0D_DS_L_GPIO0D2_DS_SHIFT)                   /* 0x00000F00 */
#define GRF_GPIO0D_DS_L_GPIO0D3_DS_SHIFT                   (12U)
#define GRF_GPIO0D_DS_L_GPIO0D3_DS_MASK                    (0xFU << GRF_GPIO0D_DS_L_GPIO0D3_DS_SHIFT)                   /* 0x0000F000 */
/* GPIO0D_DS_H */
#define GRF_GPIO0D_DS_H_OFFSET                             (0x10088U)
#define GRF_GPIO0D_DS_H_GPIO0D4_DS_SHIFT                   (0U)
#define GRF_GPIO0D_DS_H_GPIO0D4_DS_MASK                    (0xFU << GRF_GPIO0D_DS_H_GPIO0D4_DS_SHIFT)                   /* 0x0000000F */
#define GRF_GPIO0D_DS_H_GPIO0D5_DS_SHIFT                   (4U)
#define GRF_GPIO0D_DS_H_GPIO0D5_DS_MASK                    (0xFU << GRF_GPIO0D_DS_H_GPIO0D5_DS_SHIFT)                   /* 0x000000F0 */
#define GRF_GPIO0D_DS_H_GPIO0D6_DS_SHIFT                   (8U)
#define GRF_GPIO0D_DS_H_GPIO0D6_DS_MASK                    (0xFU << GRF_GPIO0D_DS_H_GPIO0D6_DS_SHIFT)                   /* 0x00000F00 */
#define GRF_GPIO0D_DS_H_GPIO0D7_DS_SHIFT                   (12U)
#define GRF_GPIO0D_DS_H_GPIO0D7_DS_MASK                    (0xFU << GRF_GPIO0D_DS_H_GPIO0D7_DS_SHIFT)                   /* 0x0000F000 */
/* GPIO1A_DS_L */
#define GRF_GPIO1A_DS_L_OFFSET                             (0x10090U)
#define GRF_GPIO1A_DS_L_GPIO1A0_DS_SHIFT                   (0U)
#define GRF_GPIO1A_DS_L_GPIO1A0_DS_MASK                    (0xFU << GRF_GPIO1A_DS_L_GPIO1A0_DS_SHIFT)                   /* 0x0000000F */
#define GRF_GPIO1A_DS_L_GPIO1A1_DS_SHIFT                   (4U)
#define GRF_GPIO1A_DS_L_GPIO1A1_DS_MASK                    (0xFU << GRF_GPIO1A_DS_L_GPIO1A1_DS_SHIFT)                   /* 0x000000F0 */
#define GRF_GPIO1A_DS_L_GPIO1A2_DS_SHIFT                   (8U)
#define GRF_GPIO1A_DS_L_GPIO1A2_DS_MASK                    (0xFU << GRF_GPIO1A_DS_L_GPIO1A2_DS_SHIFT)                   /* 0x00000F00 */
#define GRF_GPIO1A_DS_L_GPIO1A3_DS_SHIFT                   (12U)
#define GRF_GPIO1A_DS_L_GPIO1A3_DS_MASK                    (0xFU << GRF_GPIO1A_DS_L_GPIO1A3_DS_SHIFT)                   /* 0x0000F000 */
/* GPIO1A_DS_H */
#define GRF_GPIO1A_DS_H_OFFSET                             (0x10094U)
#define GRF_GPIO1A_DS_H_GPIO1A4_DS_SHIFT                   (0U)
#define GRF_GPIO1A_DS_H_GPIO1A4_DS_MASK                    (0xFU << GRF_GPIO1A_DS_H_GPIO1A4_DS_SHIFT)                   /* 0x0000000F */
#define GRF_GPIO1A_DS_H_GPIO1A5_DS_SHIFT                   (4U)
#define GRF_GPIO1A_DS_H_GPIO1A5_DS_MASK                    (0xFU << GRF_GPIO1A_DS_H_GPIO1A5_DS_SHIFT)                   /* 0x000000F0 */
#define GRF_GPIO1A_DS_H_GPIO1A6_DS_SHIFT                   (8U)
#define GRF_GPIO1A_DS_H_GPIO1A6_DS_MASK                    (0xFU << GRF_GPIO1A_DS_H_GPIO1A6_DS_SHIFT)                   /* 0x00000F00 */
#define GRF_GPIO1A_DS_H_GPIO1A7_DS_SHIFT                   (12U)
#define GRF_GPIO1A_DS_H_GPIO1A7_DS_MASK                    (0xFU << GRF_GPIO1A_DS_H_GPIO1A7_DS_SHIFT)                   /* 0x0000F000 */
/* GPIO1B_DS_L */
#define GRF_GPIO1B_DS_L_OFFSET                             (0x10098U)
#define GRF_GPIO1B_DS_L_GPIO1B0_DS_SHIFT                   (0U)
#define GRF_GPIO1B_DS_L_GPIO1B0_DS_MASK                    (0xFU << GRF_GPIO1B_DS_L_GPIO1B0_DS_SHIFT)                   /* 0x0000000F */
#define GRF_GPIO1B_DS_L_GPIO1B1_DS_SHIFT                   (4U)
#define GRF_GPIO1B_DS_L_GPIO1B1_DS_MASK                    (0xFU << GRF_GPIO1B_DS_L_GPIO1B1_DS_SHIFT)                   /* 0x000000F0 */
#define GRF_GPIO1B_DS_L_GPIO1B2_DS_SHIFT                   (8U)
#define GRF_GPIO1B_DS_L_GPIO1B2_DS_MASK                    (0xFU << GRF_GPIO1B_DS_L_GPIO1B2_DS_SHIFT)                   /* 0x00000F00 */
#define GRF_GPIO1B_DS_L_GPIO1B3_DS_SHIFT                   (12U)
#define GRF_GPIO1B_DS_L_GPIO1B3_DS_MASK                    (0xFU << GRF_GPIO1B_DS_L_GPIO1B3_DS_SHIFT)                   /* 0x0000F000 */
/* GPIO1B_DS_H */
#define GRF_GPIO1B_DS_H_OFFSET                             (0x1009CU)
#define GRF_GPIO1B_DS_H_GPIO1B4_DS_SHIFT                   (0U)
#define GRF_GPIO1B_DS_H_GPIO1B4_DS_MASK                    (0xFU << GRF_GPIO1B_DS_H_GPIO1B4_DS_SHIFT)                   /* 0x0000000F */
#define GRF_GPIO1B_DS_H_GPIO1B5_DS_SHIFT                   (4U)
#define GRF_GPIO1B_DS_H_GPIO1B5_DS_MASK                    (0xFU << GRF_GPIO1B_DS_H_GPIO1B5_DS_SHIFT)                   /* 0x000000F0 */
#define GRF_GPIO1B_DS_H_GPIO1B6_DS_SHIFT                   (8U)
#define GRF_GPIO1B_DS_H_GPIO1B6_DS_MASK                    (0xFU << GRF_GPIO1B_DS_H_GPIO1B6_DS_SHIFT)                   /* 0x00000F00 */
#define GRF_GPIO1B_DS_H_GPIO1B7_DS_SHIFT                   (12U)
#define GRF_GPIO1B_DS_H_GPIO1B7_DS_MASK                    (0xFU << GRF_GPIO1B_DS_H_GPIO1B7_DS_SHIFT)                   /* 0x0000F000 */
/* GPIO1C_DS_L */
#define GRF_GPIO1C_DS_L_OFFSET                             (0x100A0U)
#define GRF_GPIO1C_DS_L_GPIO1C0_DS_SHIFT                   (0U)
#define GRF_GPIO1C_DS_L_GPIO1C0_DS_MASK                    (0xFU << GRF_GPIO1C_DS_L_GPIO1C0_DS_SHIFT)                   /* 0x0000000F */
#define GRF_GPIO1C_DS_L_GPIO1C1_DS_SHIFT                   (4U)
#define GRF_GPIO1C_DS_L_GPIO1C1_DS_MASK                    (0xFU << GRF_GPIO1C_DS_L_GPIO1C1_DS_SHIFT)                   /* 0x000000F0 */
#define GRF_GPIO1C_DS_L_GPIO1C2_DS_SHIFT                   (8U)
#define GRF_GPIO1C_DS_L_GPIO1C2_DS_MASK                    (0xFU << GRF_GPIO1C_DS_L_GPIO1C2_DS_SHIFT)                   /* 0x00000F00 */
#define GRF_GPIO1C_DS_L_GPIO1C3_DS_SHIFT                   (12U)
#define GRF_GPIO1C_DS_L_GPIO1C3_DS_MASK                    (0xFU << GRF_GPIO1C_DS_L_GPIO1C3_DS_SHIFT)                   /* 0x0000F000 */
/* GPIO1C_DS_H */
#define GRF_GPIO1C_DS_H_OFFSET                             (0x100A4U)
#define GRF_GPIO1C_DS_H_GPIO1C4_DS_SHIFT                   (0U)
#define GRF_GPIO1C_DS_H_GPIO1C4_DS_MASK                    (0xFU << GRF_GPIO1C_DS_H_GPIO1C4_DS_SHIFT)                   /* 0x0000000F */
#define GRF_GPIO1C_DS_H_GPIO1C5_DS_SHIFT                   (4U)
#define GRF_GPIO1C_DS_H_GPIO1C5_DS_MASK                    (0xFU << GRF_GPIO1C_DS_H_GPIO1C5_DS_SHIFT)                   /* 0x000000F0 */
#define GRF_GPIO1C_DS_H_GPIO1C6_DS_SHIFT                   (8U)
#define GRF_GPIO1C_DS_H_GPIO1C6_DS_MASK                    (0xFU << GRF_GPIO1C_DS_H_GPIO1C6_DS_SHIFT)                   /* 0x00000F00 */
#define GRF_GPIO1C_DS_H_GPIO1C7_DS_SHIFT                   (12U)
#define GRF_GPIO1C_DS_H_GPIO1C7_DS_MASK                    (0xFU << GRF_GPIO1C_DS_H_GPIO1C7_DS_SHIFT)                   /* 0x0000F000 */
/* GPIO1D_DS_L */
#define GRF_GPIO1D_DS_L_OFFSET                             (0x100A8U)
#define GRF_GPIO1D_DS_L_GPIO1D0_DS_SHIFT                   (0U)
#define GRF_GPIO1D_DS_L_GPIO1D0_DS_MASK                    (0xFU << GRF_GPIO1D_DS_L_GPIO1D0_DS_SHIFT)                   /* 0x0000000F */
#define GRF_GPIO1D_DS_L_GPIO1D1_DS_SHIFT                   (4U)
#define GRF_GPIO1D_DS_L_GPIO1D1_DS_MASK                    (0xFU << GRF_GPIO1D_DS_L_GPIO1D1_DS_SHIFT)                   /* 0x000000F0 */
#define GRF_GPIO1D_DS_L_GPIO1D2_DS_SHIFT                   (8U)
#define GRF_GPIO1D_DS_L_GPIO1D2_DS_MASK                    (0xFU << GRF_GPIO1D_DS_L_GPIO1D2_DS_SHIFT)                   /* 0x00000F00 */
#define GRF_GPIO1D_DS_L_GPIO1D3_DS_SHIFT                   (12U)
#define GRF_GPIO1D_DS_L_GPIO1D3_DS_MASK                    (0xFU << GRF_GPIO1D_DS_L_GPIO1D3_DS_SHIFT)                   /* 0x0000F000 */
/* GPIO1D_DS_H */
#define GRF_GPIO1D_DS_H_OFFSET                             (0x100ACU)
#define GRF_GPIO1D_DS_H_GPIO1D4_DS_SHIFT                   (0U)
#define GRF_GPIO1D_DS_H_GPIO1D4_DS_MASK                    (0xFU << GRF_GPIO1D_DS_H_GPIO1D4_DS_SHIFT)                   /* 0x0000000F */
#define GRF_GPIO1D_DS_H_GPIO1D5_DS_SHIFT                   (4U)
#define GRF_GPIO1D_DS_H_GPIO1D5_DS_MASK                    (0xFU << GRF_GPIO1D_DS_H_GPIO1D5_DS_SHIFT)                   /* 0x000000F0 */
#define GRF_GPIO1D_DS_H_GPIO1D6_DS_SHIFT                   (8U)
#define GRF_GPIO1D_DS_H_GPIO1D6_DS_MASK                    (0xFU << GRF_GPIO1D_DS_H_GPIO1D6_DS_SHIFT)                   /* 0x00000F00 */
#define GRF_GPIO1D_DS_H_GPIO1D7_DS_SHIFT                   (12U)
#define GRF_GPIO1D_DS_H_GPIO1D7_DS_MASK                    (0xFU << GRF_GPIO1D_DS_H_GPIO1D7_DS_SHIFT)                   /* 0x0000F000 */
/* GPIO2A_DS_L */
#define GRF_GPIO2A_DS_L_OFFSET                             (0x100B0U)
#define GRF_GPIO2A_DS_L_GPIO2A0_DS_SHIFT                   (0U)
#define GRF_GPIO2A_DS_L_GPIO2A0_DS_MASK                    (0xFU << GRF_GPIO2A_DS_L_GPIO2A0_DS_SHIFT)                   /* 0x0000000F */
#define GRF_GPIO2A_DS_L_GPIO2A1_DS_SHIFT                   (4U)
#define GRF_GPIO2A_DS_L_GPIO2A1_DS_MASK                    (0xFU << GRF_GPIO2A_DS_L_GPIO2A1_DS_SHIFT)                   /* 0x000000F0 */
#define GRF_GPIO2A_DS_L_GPIO2A2_DS_SHIFT                   (8U)
#define GRF_GPIO2A_DS_L_GPIO2A2_DS_MASK                    (0xFU << GRF_GPIO2A_DS_L_GPIO2A2_DS_SHIFT)                   /* 0x00000F00 */
#define GRF_GPIO2A_DS_L_GPIO2A3_DS_SHIFT                   (12U)
#define GRF_GPIO2A_DS_L_GPIO2A3_DS_MASK                    (0xFU << GRF_GPIO2A_DS_L_GPIO2A3_DS_SHIFT)                   /* 0x0000F000 */
/* GPIO2A_DS_H */
#define GRF_GPIO2A_DS_H_OFFSET                             (0x100B4U)
#define GRF_GPIO2A_DS_H_GPIO2A4_DS_SHIFT                   (0U)
#define GRF_GPIO2A_DS_H_GPIO2A4_DS_MASK                    (0xFU << GRF_GPIO2A_DS_H_GPIO2A4_DS_SHIFT)                   /* 0x0000000F */
#define GRF_GPIO2A_DS_H_GPIO2A5_DS_SHIFT                   (4U)
#define GRF_GPIO2A_DS_H_GPIO2A5_DS_MASK                    (0xFU << GRF_GPIO2A_DS_H_GPIO2A5_DS_SHIFT)                   /* 0x000000F0 */
#define GRF_GPIO2A_DS_H_GPIO2A6_DS_SHIFT                   (8U)
#define GRF_GPIO2A_DS_H_GPIO2A6_DS_MASK                    (0xFU << GRF_GPIO2A_DS_H_GPIO2A6_DS_SHIFT)                   /* 0x00000F00 */
#define GRF_GPIO2A_DS_H_GPIO2A7_DS_SHIFT                   (12U)
#define GRF_GPIO2A_DS_H_GPIO2A7_DS_MASK                    (0xFU << GRF_GPIO2A_DS_H_GPIO2A7_DS_SHIFT)                   /* 0x0000F000 */
/* GPIO2B_DS_L */
#define GRF_GPIO2B_DS_L_OFFSET                             (0x100B8U)
#define GRF_GPIO2B_DS_L_GPIO2B0_DS_SHIFT                   (0U)
#define GRF_GPIO2B_DS_L_GPIO2B0_DS_MASK                    (0xFU << GRF_GPIO2B_DS_L_GPIO2B0_DS_SHIFT)                   /* 0x0000000F */
#define GRF_GPIO2B_DS_L_GPIO2B1_DS_SHIFT                   (4U)
#define GRF_GPIO2B_DS_L_GPIO2B1_DS_MASK                    (0xFU << GRF_GPIO2B_DS_L_GPIO2B1_DS_SHIFT)                   /* 0x000000F0 */
#define GRF_GPIO2B_DS_L_GPIO2B2_DS_SHIFT                   (8U)
#define GRF_GPIO2B_DS_L_GPIO2B2_DS_MASK                    (0xFU << GRF_GPIO2B_DS_L_GPIO2B2_DS_SHIFT)                   /* 0x00000F00 */
#define GRF_GPIO2B_DS_L_GPIO2B3_DS_SHIFT                   (12U)
#define GRF_GPIO2B_DS_L_GPIO2B3_DS_MASK                    (0xFU << GRF_GPIO2B_DS_L_GPIO2B3_DS_SHIFT)                   /* 0x0000F000 */
/* GPIO2B_DS_H */
#define GRF_GPIO2B_DS_H_OFFSET                             (0x100BCU)
#define GRF_GPIO2B_DS_H_GPIO2B4_DS_SHIFT                   (0U)
#define GRF_GPIO2B_DS_H_GPIO2B4_DS_MASK                    (0xFU << GRF_GPIO2B_DS_H_GPIO2B4_DS_SHIFT)                   /* 0x0000000F */
#define GRF_GPIO2B_DS_H_GPIO2B5_DS_SHIFT                   (4U)
#define GRF_GPIO2B_DS_H_GPIO2B5_DS_MASK                    (0xFU << GRF_GPIO2B_DS_H_GPIO2B5_DS_SHIFT)                   /* 0x000000F0 */
#define GRF_GPIO2B_DS_H_GPIO2B6_DS_SHIFT                   (8U)
#define GRF_GPIO2B_DS_H_GPIO2B6_DS_MASK                    (0xFU << GRF_GPIO2B_DS_H_GPIO2B6_DS_SHIFT)                   /* 0x00000F00 */
#define GRF_GPIO2B_DS_H_GPIO2B7_DS_SHIFT                   (12U)
#define GRF_GPIO2B_DS_H_GPIO2B7_DS_MASK                    (0xFU << GRF_GPIO2B_DS_H_GPIO2B7_DS_SHIFT)                   /* 0x0000F000 */
/* GPIO2C_DS_L */
#define GRF_GPIO2C_DS_L_OFFSET                             (0x100C0U)
#define GRF_GPIO2C_DS_L_GPIO2C0_DS_SHIFT                   (0U)
#define GRF_GPIO2C_DS_L_GPIO2C0_DS_MASK                    (0xFU << GRF_GPIO2C_DS_L_GPIO2C0_DS_SHIFT)                   /* 0x0000000F */
#define GRF_GPIO2C_DS_L_GPIO2C1_DS_SHIFT                   (4U)
#define GRF_GPIO2C_DS_L_GPIO2C1_DS_MASK                    (0xFU << GRF_GPIO2C_DS_L_GPIO2C1_DS_SHIFT)                   /* 0x000000F0 */
#define GRF_GPIO2C_DS_L_GPIO2C2_DS_SHIFT                   (8U)
#define GRF_GPIO2C_DS_L_GPIO2C2_DS_MASK                    (0xFU << GRF_GPIO2C_DS_L_GPIO2C2_DS_SHIFT)                   /* 0x00000F00 */
#define GRF_GPIO2C_DS_L_GPIO2C3_DS_SHIFT                   (12U)
#define GRF_GPIO2C_DS_L_GPIO2C3_DS_MASK                    (0xFU << GRF_GPIO2C_DS_L_GPIO2C3_DS_SHIFT)                   /* 0x0000F000 */
/* GPIO2C_DS_H */
#define GRF_GPIO2C_DS_H_OFFSET                             (0x100C4U)
#define GRF_GPIO2C_DS_H_GPIO2C4_DS_SHIFT                   (0U)
#define GRF_GPIO2C_DS_H_GPIO2C4_DS_MASK                    (0xFU << GRF_GPIO2C_DS_H_GPIO2C4_DS_SHIFT)                   /* 0x0000000F */
#define GRF_GPIO2C_DS_H_GPIO2C5_DS_SHIFT                   (4U)
#define GRF_GPIO2C_DS_H_GPIO2C5_DS_MASK                    (0xFU << GRF_GPIO2C_DS_H_GPIO2C5_DS_SHIFT)                   /* 0x000000F0 */
#define GRF_GPIO2C_DS_H_GPIO2C6_DS_SHIFT                   (8U)
#define GRF_GPIO2C_DS_H_GPIO2C6_DS_MASK                    (0xFU << GRF_GPIO2C_DS_H_GPIO2C6_DS_SHIFT)                   /* 0x00000F00 */
#define GRF_GPIO2C_DS_H_GPIO2C7_DS_SHIFT                   (12U)
#define GRF_GPIO2C_DS_H_GPIO2C7_DS_MASK                    (0xFU << GRF_GPIO2C_DS_H_GPIO2C7_DS_SHIFT)                   /* 0x0000F000 */
/* GPIO2D_DS_L */
#define GRF_GPIO2D_DS_L_OFFSET                             (0x100C8U)
#define GRF_GPIO2D_DS_L_GPIO2D0_DS_SHIFT                   (0U)
#define GRF_GPIO2D_DS_L_GPIO2D0_DS_MASK                    (0xFU << GRF_GPIO2D_DS_L_GPIO2D0_DS_SHIFT)                   /* 0x0000000F */
#define GRF_GPIO2D_DS_L_GPIO2D1_DS_SHIFT                   (4U)
#define GRF_GPIO2D_DS_L_GPIO2D1_DS_MASK                    (0xFU << GRF_GPIO2D_DS_L_GPIO2D1_DS_SHIFT)                   /* 0x000000F0 */
#define GRF_GPIO2D_DS_L_GPIO2D2_DS_SHIFT                   (8U)
#define GRF_GPIO2D_DS_L_GPIO2D2_DS_MASK                    (0xFU << GRF_GPIO2D_DS_L_GPIO2D2_DS_SHIFT)                   /* 0x00000F00 */
#define GRF_GPIO2D_DS_L_GPIO2D3_DS_SHIFT                   (12U)
#define GRF_GPIO2D_DS_L_GPIO2D3_DS_MASK                    (0xFU << GRF_GPIO2D_DS_L_GPIO2D3_DS_SHIFT)                   /* 0x0000F000 */
/* GPIO2D_DS_H */
#define GRF_GPIO2D_DS_H_OFFSET                             (0x100CCU)
#define GRF_GPIO2D_DS_H_GPIO2D4_DS_SHIFT                   (0U)
#define GRF_GPIO2D_DS_H_GPIO2D4_DS_MASK                    (0xFU << GRF_GPIO2D_DS_H_GPIO2D4_DS_SHIFT)                   /* 0x0000000F */
#define GRF_GPIO2D_DS_H_GPIO2D5_DS_SHIFT                   (4U)
#define GRF_GPIO2D_DS_H_GPIO2D5_DS_MASK                    (0xFU << GRF_GPIO2D_DS_H_GPIO2D5_DS_SHIFT)                   /* 0x000000F0 */
#define GRF_GPIO2D_DS_H_GPIO2D6_DS_SHIFT                   (8U)
#define GRF_GPIO2D_DS_H_GPIO2D6_DS_MASK                    (0xFU << GRF_GPIO2D_DS_H_GPIO2D6_DS_SHIFT)                   /* 0x00000F00 */
#define GRF_GPIO2D_DS_H_GPIO2D7_DS_SHIFT                   (12U)
#define GRF_GPIO2D_DS_H_GPIO2D7_DS_MASK                    (0xFU << GRF_GPIO2D_DS_H_GPIO2D7_DS_SHIFT)                   /* 0x0000F000 */
/* GPIO3A_DS_L */
#define GRF_GPIO3A_DS_L_OFFSET                             (0x100D0U)
#define GRF_GPIO3A_DS_L_GPIO3A0_DS_SHIFT                   (0U)
#define GRF_GPIO3A_DS_L_GPIO3A0_DS_MASK                    (0xFU << GRF_GPIO3A_DS_L_GPIO3A0_DS_SHIFT)                   /* 0x0000000F */
#define GRF_GPIO3A_DS_L_GPIO3A1_DS_SHIFT                   (4U)
#define GRF_GPIO3A_DS_L_GPIO3A1_DS_MASK                    (0xFU << GRF_GPIO3A_DS_L_GPIO3A1_DS_SHIFT)                   /* 0x000000F0 */
#define GRF_GPIO3A_DS_L_GPIO3A2_DS_SHIFT                   (8U)
#define GRF_GPIO3A_DS_L_GPIO3A2_DS_MASK                    (0xFU << GRF_GPIO3A_DS_L_GPIO3A2_DS_SHIFT)                   /* 0x00000F00 */
#define GRF_GPIO3A_DS_L_GPIO3A3_DS_SHIFT                   (12U)
#define GRF_GPIO3A_DS_L_GPIO3A3_DS_MASK                    (0xFU << GRF_GPIO3A_DS_L_GPIO3A3_DS_SHIFT)                   /* 0x0000F000 */
/* GPIO3A_DS_H */
#define GRF_GPIO3A_DS_H_OFFSET                             (0x100D4U)
#define GRF_GPIO3A_DS_H_GPIO3A4_DS_SHIFT                   (0U)
#define GRF_GPIO3A_DS_H_GPIO3A4_DS_MASK                    (0xFU << GRF_GPIO3A_DS_H_GPIO3A4_DS_SHIFT)                   /* 0x0000000F */
#define GRF_GPIO3A_DS_H_GPIO3A5_DS_SHIFT                   (4U)
#define GRF_GPIO3A_DS_H_GPIO3A5_DS_MASK                    (0xFU << GRF_GPIO3A_DS_H_GPIO3A5_DS_SHIFT)                   /* 0x000000F0 */
#define GRF_GPIO3A_DS_H_GPIO3A6_DS_SHIFT                   (8U)
#define GRF_GPIO3A_DS_H_GPIO3A6_DS_MASK                    (0xFU << GRF_GPIO3A_DS_H_GPIO3A6_DS_SHIFT)                   /* 0x00000F00 */
#define GRF_GPIO3A_DS_H_GPIO3A7_DS_SHIFT                   (12U)
#define GRF_GPIO3A_DS_H_GPIO3A7_DS_MASK                    (0xFU << GRF_GPIO3A_DS_H_GPIO3A7_DS_SHIFT)                   /* 0x0000F000 */
/* GPIO3B_DS_L */
#define GRF_GPIO3B_DS_L_OFFSET                             (0x100D8U)
#define GRF_GPIO3B_DS_L_GPIO3B0_DS_SHIFT                   (0U)
#define GRF_GPIO3B_DS_L_GPIO3B0_DS_MASK                    (0xFU << GRF_GPIO3B_DS_L_GPIO3B0_DS_SHIFT)                   /* 0x0000000F */
#define GRF_GPIO3B_DS_L_GPIO3B1_DS_SHIFT                   (4U)
#define GRF_GPIO3B_DS_L_GPIO3B1_DS_MASK                    (0xFU << GRF_GPIO3B_DS_L_GPIO3B1_DS_SHIFT)                   /* 0x000000F0 */
#define GRF_GPIO3B_DS_L_GPIO3B2_DS_SHIFT                   (8U)
#define GRF_GPIO3B_DS_L_GPIO3B2_DS_MASK                    (0xFU << GRF_GPIO3B_DS_L_GPIO3B2_DS_SHIFT)                   /* 0x00000F00 */
#define GRF_GPIO3B_DS_L_GPIO3B3_DS_SHIFT                   (12U)
#define GRF_GPIO3B_DS_L_GPIO3B3_DS_MASK                    (0xFU << GRF_GPIO3B_DS_L_GPIO3B3_DS_SHIFT)                   /* 0x0000F000 */
/* GPIO3B_DS_H */
#define GRF_GPIO3B_DS_H_OFFSET                             (0x100DCU)
#define GRF_GPIO3B_DS_H_GPIO3B4_DS_SHIFT                   (0U)
#define GRF_GPIO3B_DS_H_GPIO3B4_DS_MASK                    (0xFU << GRF_GPIO3B_DS_H_GPIO3B4_DS_SHIFT)                   /* 0x0000000F */
#define GRF_GPIO3B_DS_H_GPIO3B5_DS_SHIFT                   (4U)
#define GRF_GPIO3B_DS_H_GPIO3B5_DS_MASK                    (0xFU << GRF_GPIO3B_DS_H_GPIO3B5_DS_SHIFT)                   /* 0x000000F0 */
#define GRF_GPIO3B_DS_H_GPIO3B6_DS_SHIFT                   (8U)
#define GRF_GPIO3B_DS_H_GPIO3B6_DS_MASK                    (0xFU << GRF_GPIO3B_DS_H_GPIO3B6_DS_SHIFT)                   /* 0x00000F00 */
#define GRF_GPIO3B_DS_H_GPIO3B7_DS_SHIFT                   (12U)
#define GRF_GPIO3B_DS_H_GPIO3B7_DS_MASK                    (0xFU << GRF_GPIO3B_DS_H_GPIO3B7_DS_SHIFT)                   /* 0x0000F000 */
/* GPIO3C_DS_L */
#define GRF_GPIO3C_DS_L_OFFSET                             (0x100E0U)
#define GRF_GPIO3C_DS_L_GPIO3C0_DS_SHIFT                   (0U)
#define GRF_GPIO3C_DS_L_GPIO3C0_DS_MASK                    (0xFU << GRF_GPIO3C_DS_L_GPIO3C0_DS_SHIFT)                   /* 0x0000000F */
#define GRF_GPIO3C_DS_L_GPIO3C1_DS_SHIFT                   (4U)
#define GRF_GPIO3C_DS_L_GPIO3C1_DS_MASK                    (0xFU << GRF_GPIO3C_DS_L_GPIO3C1_DS_SHIFT)                   /* 0x000000F0 */
#define GRF_GPIO3C_DS_L_GPIO3C2_DS_SHIFT                   (8U)
#define GRF_GPIO3C_DS_L_GPIO3C2_DS_MASK                    (0xFU << GRF_GPIO3C_DS_L_GPIO3C2_DS_SHIFT)                   /* 0x00000F00 */
#define GRF_GPIO3C_DS_L_GPIO3C3_DS_SHIFT                   (12U)
#define GRF_GPIO3C_DS_L_GPIO3C3_DS_MASK                    (0xFU << GRF_GPIO3C_DS_L_GPIO3C3_DS_SHIFT)                   /* 0x0000F000 */
/* GPIO3C_DS_H */
#define GRF_GPIO3C_DS_H_OFFSET                             (0x100E4U)
#define GRF_GPIO3C_DS_H_GPIO3C4_DS_SHIFT                   (0U)
#define GRF_GPIO3C_DS_H_GPIO3C4_DS_MASK                    (0xFU << GRF_GPIO3C_DS_H_GPIO3C4_DS_SHIFT)                   /* 0x0000000F */
#define GRF_GPIO3C_DS_H_GPIO3C5_DS_SHIFT                   (4U)
#define GRF_GPIO3C_DS_H_GPIO3C5_DS_MASK                    (0xFU << GRF_GPIO3C_DS_H_GPIO3C5_DS_SHIFT)                   /* 0x000000F0 */
#define GRF_GPIO3C_DS_H_GPIO3C6_DS_SHIFT                   (8U)
#define GRF_GPIO3C_DS_H_GPIO3C6_DS_MASK                    (0xFU << GRF_GPIO3C_DS_H_GPIO3C6_DS_SHIFT)                   /* 0x00000F00 */
#define GRF_GPIO3C_DS_H_GPIO3C7_DS_SHIFT                   (12U)
#define GRF_GPIO3C_DS_H_GPIO3C7_DS_MASK                    (0xFU << GRF_GPIO3C_DS_H_GPIO3C7_DS_SHIFT)                   /* 0x0000F000 */
/* GPIO3D_DS_L */
#define GRF_GPIO3D_DS_L_OFFSET                             (0x100E8U)
#define GRF_GPIO3D_DS_L_GPIO3D0_DS_SHIFT                   (0U)
#define GRF_GPIO3D_DS_L_GPIO3D0_DS_MASK                    (0xFU << GRF_GPIO3D_DS_L_GPIO3D0_DS_SHIFT)                   /* 0x0000000F */
#define GRF_GPIO3D_DS_L_GPIO3D1_DS_SHIFT                   (4U)
#define GRF_GPIO3D_DS_L_GPIO3D1_DS_MASK                    (0xFU << GRF_GPIO3D_DS_L_GPIO3D1_DS_SHIFT)                   /* 0x000000F0 */
#define GRF_GPIO3D_DS_L_GPIO3D2_DS_SHIFT                   (8U)
#define GRF_GPIO3D_DS_L_GPIO3D2_DS_MASK                    (0xFU << GRF_GPIO3D_DS_L_GPIO3D2_DS_SHIFT)                   /* 0x00000F00 */
#define GRF_GPIO3D_DS_L_GPIO3D3_DS_SHIFT                   (12U)
#define GRF_GPIO3D_DS_L_GPIO3D3_DS_MASK                    (0xFU << GRF_GPIO3D_DS_L_GPIO3D3_DS_SHIFT)                   /* 0x0000F000 */
/* GPIO3D_DS_H */
#define GRF_GPIO3D_DS_H_OFFSET                             (0x100ECU)
#define GRF_GPIO3D_DS_H_GPIO3D4_DS_SHIFT                   (0U)
#define GRF_GPIO3D_DS_H_GPIO3D4_DS_MASK                    (0xFU << GRF_GPIO3D_DS_H_GPIO3D4_DS_SHIFT)                   /* 0x0000000F */
#define GRF_GPIO3D_DS_H_GPIO3D5_DS_SHIFT                   (4U)
#define GRF_GPIO3D_DS_H_GPIO3D5_DS_MASK                    (0xFU << GRF_GPIO3D_DS_H_GPIO3D5_DS_SHIFT)                   /* 0x000000F0 */
#define GRF_GPIO3D_DS_H_GPIO3D6_DS_SHIFT                   (8U)
#define GRF_GPIO3D_DS_H_GPIO3D6_DS_MASK                    (0xFU << GRF_GPIO3D_DS_H_GPIO3D6_DS_SHIFT)                   /* 0x00000F00 */
#define GRF_GPIO3D_DS_H_GPIO3D7_DS_SHIFT                   (12U)
#define GRF_GPIO3D_DS_H_GPIO3D7_DS_MASK                    (0xFU << GRF_GPIO3D_DS_H_GPIO3D7_DS_SHIFT)                   /* 0x0000F000 */
/* GPIO4A_DS_L */
#define GRF_GPIO4A_DS_L_OFFSET                             (0x100F0U)
#define GRF_GPIO4A_DS_L_GPIO4A0_DS_SHIFT                   (0U)
#define GRF_GPIO4A_DS_L_GPIO4A0_DS_MASK                    (0xFU << GRF_GPIO4A_DS_L_GPIO4A0_DS_SHIFT)                   /* 0x0000000F */
#define GRF_GPIO4A_DS_L_GPIO4A1_DS_SHIFT                   (4U)
#define GRF_GPIO4A_DS_L_GPIO4A1_DS_MASK                    (0xFU << GRF_GPIO4A_DS_L_GPIO4A1_DS_SHIFT)                   /* 0x000000F0 */
/* GPIO0C_P_H */
#define GRF_GPIO0C_P_H_OFFSET                              (0x10100U)
#define GRF_GPIO0C_P_H_GPIO0C4_P_SHIFT                     (8U)
#define GRF_GPIO0C_P_H_GPIO0C4_P_MASK                      (0x3U << GRF_GPIO0C_P_H_GPIO0C4_P_SHIFT)                     /* 0x00000300 */
#define GRF_GPIO0C_P_H_GPIO0C5_P_SHIFT                     (10U)
#define GRF_GPIO0C_P_H_GPIO0C5_P_MASK                      (0x3U << GRF_GPIO0C_P_H_GPIO0C5_P_SHIFT)                     /* 0x00000C00 */
#define GRF_GPIO0C_P_H_GPIO0C6_P_SHIFT                     (12U)
#define GRF_GPIO0C_P_H_GPIO0C6_P_MASK                      (0x3U << GRF_GPIO0C_P_H_GPIO0C6_P_SHIFT)                     /* 0x00003000 */
#define GRF_GPIO0C_P_H_GPIO0C7_P_SHIFT                     (14U)
#define GRF_GPIO0C_P_H_GPIO0C7_P_MASK                      (0x3U << GRF_GPIO0C_P_H_GPIO0C7_P_SHIFT)                     /* 0x0000C000 */
/* GPIO0D_P */
#define GRF_GPIO0D_P_OFFSET                                (0x10104U)
#define GRF_GPIO0D_P_GPIO0D0_P_SHIFT                       (0U)
#define GRF_GPIO0D_P_GPIO0D0_P_MASK                        (0x3U << GRF_GPIO0D_P_GPIO0D0_P_SHIFT)                       /* 0x00000003 */
#define GRF_GPIO0D_P_GPIO0D1_P_SHIFT                       (2U)
#define GRF_GPIO0D_P_GPIO0D1_P_MASK                        (0x3U << GRF_GPIO0D_P_GPIO0D1_P_SHIFT)                       /* 0x0000000C */
#define GRF_GPIO0D_P_GPIO0D2_P_SHIFT                       (4U)
#define GRF_GPIO0D_P_GPIO0D2_P_MASK                        (0x3U << GRF_GPIO0D_P_GPIO0D2_P_SHIFT)                       /* 0x00000030 */
#define GRF_GPIO0D_P_GPIO0D3_P_SHIFT                       (6U)
#define GRF_GPIO0D_P_GPIO0D3_P_MASK                        (0x3U << GRF_GPIO0D_P_GPIO0D3_P_SHIFT)                       /* 0x000000C0 */
#define GRF_GPIO0D_P_GPIO0D4_P_SHIFT                       (8U)
#define GRF_GPIO0D_P_GPIO0D4_P_MASK                        (0x3U << GRF_GPIO0D_P_GPIO0D4_P_SHIFT)                       /* 0x00000300 */
#define GRF_GPIO0D_P_GPIO0D5_P_SHIFT                       (10U)
#define GRF_GPIO0D_P_GPIO0D5_P_MASK                        (0x3U << GRF_GPIO0D_P_GPIO0D5_P_SHIFT)                       /* 0x00000C00 */
#define GRF_GPIO0D_P_GPIO0D6_P_SHIFT                       (12U)
#define GRF_GPIO0D_P_GPIO0D6_P_MASK                        (0x3U << GRF_GPIO0D_P_GPIO0D6_P_SHIFT)                       /* 0x00003000 */
#define GRF_GPIO0D_P_GPIO0D7_P_SHIFT                       (14U)
#define GRF_GPIO0D_P_GPIO0D7_P_MASK                        (0x3U << GRF_GPIO0D_P_GPIO0D7_P_SHIFT)                       /* 0x0000C000 */
/* GPIO1A_P */
#define GRF_GPIO1A_P_OFFSET                                (0x10108U)
#define GRF_GPIO1A_P_GPIO1A0_P_SHIFT                       (0U)
#define GRF_GPIO1A_P_GPIO1A0_P_MASK                        (0x3U << GRF_GPIO1A_P_GPIO1A0_P_SHIFT)                       /* 0x00000003 */
#define GRF_GPIO1A_P_GPIO1A1_P_SHIFT                       (2U)
#define GRF_GPIO1A_P_GPIO1A1_P_MASK                        (0x3U << GRF_GPIO1A_P_GPIO1A1_P_SHIFT)                       /* 0x0000000C */
#define GRF_GPIO1A_P_GPIO1A2_P_SHIFT                       (4U)
#define GRF_GPIO1A_P_GPIO1A2_P_MASK                        (0x3U << GRF_GPIO1A_P_GPIO1A2_P_SHIFT)                       /* 0x00000030 */
#define GRF_GPIO1A_P_GPIO1A3_P_SHIFT                       (6U)
#define GRF_GPIO1A_P_GPIO1A3_P_MASK                        (0x3U << GRF_GPIO1A_P_GPIO1A3_P_SHIFT)                       /* 0x000000C0 */
#define GRF_GPIO1A_P_GPIO1A4_P_SHIFT                       (8U)
#define GRF_GPIO1A_P_GPIO1A4_P_MASK                        (0x3U << GRF_GPIO1A_P_GPIO1A4_P_SHIFT)                       /* 0x00000300 */
#define GRF_GPIO1A_P_GPIO1A5_P_SHIFT                       (10U)
#define GRF_GPIO1A_P_GPIO1A5_P_MASK                        (0x3U << GRF_GPIO1A_P_GPIO1A5_P_SHIFT)                       /* 0x00000C00 */
#define GRF_GPIO1A_P_GPIO1A6_P_SHIFT                       (12U)
#define GRF_GPIO1A_P_GPIO1A6_P_MASK                        (0x3U << GRF_GPIO1A_P_GPIO1A6_P_SHIFT)                       /* 0x00003000 */
#define GRF_GPIO1A_P_GPIO1A7_P_SHIFT                       (14U)
#define GRF_GPIO1A_P_GPIO1A7_P_MASK                        (0x3U << GRF_GPIO1A_P_GPIO1A7_P_SHIFT)                       /* 0x0000C000 */
/* GPIO1B_P */
#define GRF_GPIO1B_P_OFFSET                                (0x1010CU)
#define GRF_GPIO1B_P_GPIO1B0_P_SHIFT                       (0U)
#define GRF_GPIO1B_P_GPIO1B0_P_MASK                        (0x3U << GRF_GPIO1B_P_GPIO1B0_P_SHIFT)                       /* 0x00000003 */
#define GRF_GPIO1B_P_GPIO1B1_P_SHIFT                       (2U)
#define GRF_GPIO1B_P_GPIO1B1_P_MASK                        (0x3U << GRF_GPIO1B_P_GPIO1B1_P_SHIFT)                       /* 0x0000000C */
#define GRF_GPIO1B_P_GPIO1B2_P_SHIFT                       (4U)
#define GRF_GPIO1B_P_GPIO1B2_P_MASK                        (0x3U << GRF_GPIO1B_P_GPIO1B2_P_SHIFT)                       /* 0x00000030 */
#define GRF_GPIO1B_P_GPIO1B3_P_SHIFT                       (6U)
#define GRF_GPIO1B_P_GPIO1B3_P_MASK                        (0x3U << GRF_GPIO1B_P_GPIO1B3_P_SHIFT)                       /* 0x000000C0 */
#define GRF_GPIO1B_P_GPIO1B4_P_SHIFT                       (8U)
#define GRF_GPIO1B_P_GPIO1B4_P_MASK                        (0x3U << GRF_GPIO1B_P_GPIO1B4_P_SHIFT)                       /* 0x00000300 */
#define GRF_GPIO1B_P_GPIO1B5_P_SHIFT                       (10U)
#define GRF_GPIO1B_P_GPIO1B5_P_MASK                        (0x3U << GRF_GPIO1B_P_GPIO1B5_P_SHIFT)                       /* 0x00000C00 */
#define GRF_GPIO1B_P_GPIO1B6_P_SHIFT                       (12U)
#define GRF_GPIO1B_P_GPIO1B6_P_MASK                        (0x3U << GRF_GPIO1B_P_GPIO1B6_P_SHIFT)                       /* 0x00003000 */
#define GRF_GPIO1B_P_GPIO1B7_P_SHIFT                       (14U)
#define GRF_GPIO1B_P_GPIO1B7_P_MASK                        (0x3U << GRF_GPIO1B_P_GPIO1B7_P_SHIFT)                       /* 0x0000C000 */
/* GPIO1C_P */
#define GRF_GPIO1C_P_OFFSET                                (0x10110U)
#define GRF_GPIO1C_P_GPIO1C0_P_SHIFT                       (0U)
#define GRF_GPIO1C_P_GPIO1C0_P_MASK                        (0x3U << GRF_GPIO1C_P_GPIO1C0_P_SHIFT)                       /* 0x00000003 */
#define GRF_GPIO1C_P_GPIO1C1_P_SHIFT                       (2U)
#define GRF_GPIO1C_P_GPIO1C1_P_MASK                        (0x3U << GRF_GPIO1C_P_GPIO1C1_P_SHIFT)                       /* 0x0000000C */
#define GRF_GPIO1C_P_GPIO1C2_P_SHIFT                       (4U)
#define GRF_GPIO1C_P_GPIO1C2_P_MASK                        (0x3U << GRF_GPIO1C_P_GPIO1C2_P_SHIFT)                       /* 0x00000030 */
#define GRF_GPIO1C_P_GPIO1C3_P_SHIFT                       (6U)
#define GRF_GPIO1C_P_GPIO1C3_P_MASK                        (0x3U << GRF_GPIO1C_P_GPIO1C3_P_SHIFT)                       /* 0x000000C0 */
#define GRF_GPIO1C_P_GPIO1C4_P_SHIFT                       (8U)
#define GRF_GPIO1C_P_GPIO1C4_P_MASK                        (0x3U << GRF_GPIO1C_P_GPIO1C4_P_SHIFT)                       /* 0x00000300 */
#define GRF_GPIO1C_P_GPIO1C5_P_SHIFT                       (10U)
#define GRF_GPIO1C_P_GPIO1C5_P_MASK                        (0x3U << GRF_GPIO1C_P_GPIO1C5_P_SHIFT)                       /* 0x00000C00 */
#define GRF_GPIO1C_P_GPIO1C6_P_SHIFT                       (12U)
#define GRF_GPIO1C_P_GPIO1C6_P_MASK                        (0x3U << GRF_GPIO1C_P_GPIO1C6_P_SHIFT)                       /* 0x00003000 */
#define GRF_GPIO1C_P_GPIO1C7_P_SHIFT                       (14U)
#define GRF_GPIO1C_P_GPIO1C7_P_MASK                        (0x3U << GRF_GPIO1C_P_GPIO1C7_P_SHIFT)                       /* 0x0000C000 */
/* GPIO1D_P */
#define GRF_GPIO1D_P_OFFSET                                (0x10114U)
#define GRF_GPIO1D_P_GPIO1D0_P_SHIFT                       (0U)
#define GRF_GPIO1D_P_GPIO1D0_P_MASK                        (0x3U << GRF_GPIO1D_P_GPIO1D0_P_SHIFT)                       /* 0x00000003 */
#define GRF_GPIO1D_P_GPIO1D1_P_SHIFT                       (2U)
#define GRF_GPIO1D_P_GPIO1D1_P_MASK                        (0x3U << GRF_GPIO1D_P_GPIO1D1_P_SHIFT)                       /* 0x0000000C */
#define GRF_GPIO1D_P_GPIO1D2_P_SHIFT                       (4U)
#define GRF_GPIO1D_P_GPIO1D2_P_MASK                        (0x3U << GRF_GPIO1D_P_GPIO1D2_P_SHIFT)                       /* 0x00000030 */
#define GRF_GPIO1D_P_GPIO1D3_P_SHIFT                       (6U)
#define GRF_GPIO1D_P_GPIO1D3_P_MASK                        (0x3U << GRF_GPIO1D_P_GPIO1D3_P_SHIFT)                       /* 0x000000C0 */
#define GRF_GPIO1D_P_GPIO1D4_P_SHIFT                       (8U)
#define GRF_GPIO1D_P_GPIO1D4_P_MASK                        (0x3U << GRF_GPIO1D_P_GPIO1D4_P_SHIFT)                       /* 0x00000300 */
#define GRF_GPIO1D_P_GPIO1D5_P_SHIFT                       (10U)
#define GRF_GPIO1D_P_GPIO1D5_P_MASK                        (0x3U << GRF_GPIO1D_P_GPIO1D5_P_SHIFT)                       /* 0x00000C00 */
#define GRF_GPIO1D_P_GPIO1D6_P_SHIFT                       (12U)
#define GRF_GPIO1D_P_GPIO1D6_P_MASK                        (0x3U << GRF_GPIO1D_P_GPIO1D6_P_SHIFT)                       /* 0x00003000 */
#define GRF_GPIO1D_P_GPIO1D7_P_SHIFT                       (14U)
#define GRF_GPIO1D_P_GPIO1D7_P_MASK                        (0x3U << GRF_GPIO1D_P_GPIO1D7_P_SHIFT)                       /* 0x0000C000 */
/* GPIO2A_P */
#define GRF_GPIO2A_P_OFFSET                                (0x10118U)
#define GRF_GPIO2A_P_GPIO2A0_P_SHIFT                       (0U)
#define GRF_GPIO2A_P_GPIO2A0_P_MASK                        (0x3U << GRF_GPIO2A_P_GPIO2A0_P_SHIFT)                       /* 0x00000003 */
#define GRF_GPIO2A_P_GPIO2A1_P_SHIFT                       (2U)
#define GRF_GPIO2A_P_GPIO2A1_P_MASK                        (0x3U << GRF_GPIO2A_P_GPIO2A1_P_SHIFT)                       /* 0x0000000C */
#define GRF_GPIO2A_P_GPIO2A2_P_SHIFT                       (4U)
#define GRF_GPIO2A_P_GPIO2A2_P_MASK                        (0x3U << GRF_GPIO2A_P_GPIO2A2_P_SHIFT)                       /* 0x00000030 */
#define GRF_GPIO2A_P_GPIO2A3_P_SHIFT                       (6U)
#define GRF_GPIO2A_P_GPIO2A3_P_MASK                        (0x3U << GRF_GPIO2A_P_GPIO2A3_P_SHIFT)                       /* 0x000000C0 */
#define GRF_GPIO2A_P_GPIO2A4_P_SHIFT                       (8U)
#define GRF_GPIO2A_P_GPIO2A4_P_MASK                        (0x3U << GRF_GPIO2A_P_GPIO2A4_P_SHIFT)                       /* 0x00000300 */
#define GRF_GPIO2A_P_GPIO2A5_P_SHIFT                       (10U)
#define GRF_GPIO2A_P_GPIO2A5_P_MASK                        (0x3U << GRF_GPIO2A_P_GPIO2A5_P_SHIFT)                       /* 0x00000C00 */
#define GRF_GPIO2A_P_GPIO2A6_P_SHIFT                       (12U)
#define GRF_GPIO2A_P_GPIO2A6_P_MASK                        (0x3U << GRF_GPIO2A_P_GPIO2A6_P_SHIFT)                       /* 0x00003000 */
#define GRF_GPIO2A_P_GPIO2A7_P_SHIFT                       (14U)
#define GRF_GPIO2A_P_GPIO2A7_P_MASK                        (0x3U << GRF_GPIO2A_P_GPIO2A7_P_SHIFT)                       /* 0x0000C000 */
/* GPIO2B_P */
#define GRF_GPIO2B_P_OFFSET                                (0x1011CU)
#define GRF_GPIO2B_P_GPIO2B0_P_SHIFT                       (0U)
#define GRF_GPIO2B_P_GPIO2B0_P_MASK                        (0x3U << GRF_GPIO2B_P_GPIO2B0_P_SHIFT)                       /* 0x00000003 */
#define GRF_GPIO2B_P_GPIO2B1_P_SHIFT                       (2U)
#define GRF_GPIO2B_P_GPIO2B1_P_MASK                        (0x3U << GRF_GPIO2B_P_GPIO2B1_P_SHIFT)                       /* 0x0000000C */
#define GRF_GPIO2B_P_GPIO2B2_P_SHIFT                       (4U)
#define GRF_GPIO2B_P_GPIO2B2_P_MASK                        (0x3U << GRF_GPIO2B_P_GPIO2B2_P_SHIFT)                       /* 0x00000030 */
#define GRF_GPIO2B_P_GPIO2B3_P_SHIFT                       (6U)
#define GRF_GPIO2B_P_GPIO2B3_P_MASK                        (0x3U << GRF_GPIO2B_P_GPIO2B3_P_SHIFT)                       /* 0x000000C0 */
#define GRF_GPIO2B_P_GPIO2B4_P_SHIFT                       (8U)
#define GRF_GPIO2B_P_GPIO2B4_P_MASK                        (0x3U << GRF_GPIO2B_P_GPIO2B4_P_SHIFT)                       /* 0x00000300 */
#define GRF_GPIO2B_P_GPIO2B5_P_SHIFT                       (10U)
#define GRF_GPIO2B_P_GPIO2B5_P_MASK                        (0x3U << GRF_GPIO2B_P_GPIO2B5_P_SHIFT)                       /* 0x00000C00 */
#define GRF_GPIO2B_P_GPIO2B6_P_SHIFT                       (12U)
#define GRF_GPIO2B_P_GPIO2B6_P_MASK                        (0x3U << GRF_GPIO2B_P_GPIO2B6_P_SHIFT)                       /* 0x00003000 */
#define GRF_GPIO2B_P_GPIO2B7_P_SHIFT                       (14U)
#define GRF_GPIO2B_P_GPIO2B7_P_MASK                        (0x3U << GRF_GPIO2B_P_GPIO2B7_P_SHIFT)                       /* 0x0000C000 */
/* GPIO2C_P */
#define GRF_GPIO2C_P_OFFSET                                (0x10120U)
#define GRF_GPIO2C_P_GPIO2C0_P_SHIFT                       (0U)
#define GRF_GPIO2C_P_GPIO2C0_P_MASK                        (0x3U << GRF_GPIO2C_P_GPIO2C0_P_SHIFT)                       /* 0x00000003 */
#define GRF_GPIO2C_P_GPIO2C1_P_SHIFT                       (2U)
#define GRF_GPIO2C_P_GPIO2C1_P_MASK                        (0x3U << GRF_GPIO2C_P_GPIO2C1_P_SHIFT)                       /* 0x0000000C */
#define GRF_GPIO2C_P_GPIO2C2_P_SHIFT                       (4U)
#define GRF_GPIO2C_P_GPIO2C2_P_MASK                        (0x3U << GRF_GPIO2C_P_GPIO2C2_P_SHIFT)                       /* 0x00000030 */
#define GRF_GPIO2C_P_GPIO2C3_P_SHIFT                       (6U)
#define GRF_GPIO2C_P_GPIO2C3_P_MASK                        (0x3U << GRF_GPIO2C_P_GPIO2C3_P_SHIFT)                       /* 0x000000C0 */
#define GRF_GPIO2C_P_GPIO2C4_P_SHIFT                       (8U)
#define GRF_GPIO2C_P_GPIO2C4_P_MASK                        (0x3U << GRF_GPIO2C_P_GPIO2C4_P_SHIFT)                       /* 0x00000300 */
#define GRF_GPIO2C_P_GPIO2C5_P_SHIFT                       (10U)
#define GRF_GPIO2C_P_GPIO2C5_P_MASK                        (0x3U << GRF_GPIO2C_P_GPIO2C5_P_SHIFT)                       /* 0x00000C00 */
#define GRF_GPIO2C_P_GPIO2C6_P_SHIFT                       (12U)
#define GRF_GPIO2C_P_GPIO2C6_P_MASK                        (0x3U << GRF_GPIO2C_P_GPIO2C6_P_SHIFT)                       /* 0x00003000 */
#define GRF_GPIO2C_P_GPIO2C7_P_SHIFT                       (14U)
#define GRF_GPIO2C_P_GPIO2C7_P_MASK                        (0x3U << GRF_GPIO2C_P_GPIO2C7_P_SHIFT)                       /* 0x0000C000 */
/* GPIO2D_P */
#define GRF_GPIO2D_P_OFFSET                                (0x10124U)
#define GRF_GPIO2D_P_GPIO2D0_P_SHIFT                       (0U)
#define GRF_GPIO2D_P_GPIO2D0_P_MASK                        (0x3U << GRF_GPIO2D_P_GPIO2D0_P_SHIFT)                       /* 0x00000003 */
#define GRF_GPIO2D_P_GPIO2D1_P_SHIFT                       (2U)
#define GRF_GPIO2D_P_GPIO2D1_P_MASK                        (0x3U << GRF_GPIO2D_P_GPIO2D1_P_SHIFT)                       /* 0x0000000C */
#define GRF_GPIO2D_P_GPIO2D2_P_SHIFT                       (4U)
#define GRF_GPIO2D_P_GPIO2D2_P_MASK                        (0x3U << GRF_GPIO2D_P_GPIO2D2_P_SHIFT)                       /* 0x00000030 */
#define GRF_GPIO2D_P_GPIO2D3_P_SHIFT                       (6U)
#define GRF_GPIO2D_P_GPIO2D3_P_MASK                        (0x3U << GRF_GPIO2D_P_GPIO2D3_P_SHIFT)                       /* 0x000000C0 */
#define GRF_GPIO2D_P_GPIO2D4_P_SHIFT                       (8U)
#define GRF_GPIO2D_P_GPIO2D4_P_MASK                        (0x3U << GRF_GPIO2D_P_GPIO2D4_P_SHIFT)                       /* 0x00000300 */
#define GRF_GPIO2D_P_GPIO2D5_P_SHIFT                       (10U)
#define GRF_GPIO2D_P_GPIO2D5_P_MASK                        (0x3U << GRF_GPIO2D_P_GPIO2D5_P_SHIFT)                       /* 0x00000C00 */
#define GRF_GPIO2D_P_GPIO2D6_P_SHIFT                       (12U)
#define GRF_GPIO2D_P_GPIO2D6_P_MASK                        (0x3U << GRF_GPIO2D_P_GPIO2D6_P_SHIFT)                       /* 0x00003000 */
#define GRF_GPIO2D_P_GPIO2D7_P_SHIFT                       (14U)
#define GRF_GPIO2D_P_GPIO2D7_P_MASK                        (0x3U << GRF_GPIO2D_P_GPIO2D7_P_SHIFT)                       /* 0x0000C000 */
/* GPIO3A_P */
#define GRF_GPIO3A_P_OFFSET                                (0x10128U)
#define GRF_GPIO3A_P_GPIO3A0_P_SHIFT                       (0U)
#define GRF_GPIO3A_P_GPIO3A0_P_MASK                        (0x3U << GRF_GPIO3A_P_GPIO3A0_P_SHIFT)                       /* 0x00000003 */
#define GRF_GPIO3A_P_GPIO3A1_P_SHIFT                       (2U)
#define GRF_GPIO3A_P_GPIO3A1_P_MASK                        (0x3U << GRF_GPIO3A_P_GPIO3A1_P_SHIFT)                       /* 0x0000000C */
#define GRF_GPIO3A_P_GPIO3A2_P_SHIFT                       (4U)
#define GRF_GPIO3A_P_GPIO3A2_P_MASK                        (0x3U << GRF_GPIO3A_P_GPIO3A2_P_SHIFT)                       /* 0x00000030 */
#define GRF_GPIO3A_P_GPIO3A3_P_SHIFT                       (6U)
#define GRF_GPIO3A_P_GPIO3A3_P_MASK                        (0x3U << GRF_GPIO3A_P_GPIO3A3_P_SHIFT)                       /* 0x000000C0 */
#define GRF_GPIO3A_P_GPIO3A4_P_SHIFT                       (8U)
#define GRF_GPIO3A_P_GPIO3A4_P_MASK                        (0x3U << GRF_GPIO3A_P_GPIO3A4_P_SHIFT)                       /* 0x00000300 */
#define GRF_GPIO3A_P_GPIO3A5_P_SHIFT                       (10U)
#define GRF_GPIO3A_P_GPIO3A5_P_MASK                        (0x3U << GRF_GPIO3A_P_GPIO3A5_P_SHIFT)                       /* 0x00000C00 */
#define GRF_GPIO3A_P_GPIO3A6_P_SHIFT                       (12U)
#define GRF_GPIO3A_P_GPIO3A6_P_MASK                        (0x3U << GRF_GPIO3A_P_GPIO3A6_P_SHIFT)                       /* 0x00003000 */
#define GRF_GPIO3A_P_GPIO3A7_P_SHIFT                       (14U)
#define GRF_GPIO3A_P_GPIO3A7_P_MASK                        (0x3U << GRF_GPIO3A_P_GPIO3A7_P_SHIFT)                       /* 0x0000C000 */
/* GPIO3B_P */
#define GRF_GPIO3B_P_OFFSET                                (0x1012CU)
#define GRF_GPIO3B_P_GPIO3B0_P_SHIFT                       (0U)
#define GRF_GPIO3B_P_GPIO3B0_P_MASK                        (0x3U << GRF_GPIO3B_P_GPIO3B0_P_SHIFT)                       /* 0x00000003 */
#define GRF_GPIO3B_P_GPIO3B1_P_SHIFT                       (2U)
#define GRF_GPIO3B_P_GPIO3B1_P_MASK                        (0x3U << GRF_GPIO3B_P_GPIO3B1_P_SHIFT)                       /* 0x0000000C */
#define GRF_GPIO3B_P_GPIO3B2_P_SHIFT                       (4U)
#define GRF_GPIO3B_P_GPIO3B2_P_MASK                        (0x3U << GRF_GPIO3B_P_GPIO3B2_P_SHIFT)                       /* 0x00000030 */
#define GRF_GPIO3B_P_GPIO3B3_P_SHIFT                       (6U)
#define GRF_GPIO3B_P_GPIO3B3_P_MASK                        (0x3U << GRF_GPIO3B_P_GPIO3B3_P_SHIFT)                       /* 0x000000C0 */
#define GRF_GPIO3B_P_GPIO3B4_P_SHIFT                       (8U)
#define GRF_GPIO3B_P_GPIO3B4_P_MASK                        (0x3U << GRF_GPIO3B_P_GPIO3B4_P_SHIFT)                       /* 0x00000300 */
#define GRF_GPIO3B_P_GPIO3B5_P_SHIFT                       (10U)
#define GRF_GPIO3B_P_GPIO3B5_P_MASK                        (0x3U << GRF_GPIO3B_P_GPIO3B5_P_SHIFT)                       /* 0x00000C00 */
#define GRF_GPIO3B_P_GPIO3B6_P_SHIFT                       (12U)
#define GRF_GPIO3B_P_GPIO3B6_P_MASK                        (0x3U << GRF_GPIO3B_P_GPIO3B6_P_SHIFT)                       /* 0x00003000 */
#define GRF_GPIO3B_P_GPIO3B7_P_SHIFT                       (14U)
#define GRF_GPIO3B_P_GPIO3B7_P_MASK                        (0x3U << GRF_GPIO3B_P_GPIO3B7_P_SHIFT)                       /* 0x0000C000 */
/* GPIO3C_P */
#define GRF_GPIO3C_P_OFFSET                                (0x10130U)
#define GRF_GPIO3C_P_GPIO3C0_P_SHIFT                       (0U)
#define GRF_GPIO3C_P_GPIO3C0_P_MASK                        (0x3U << GRF_GPIO3C_P_GPIO3C0_P_SHIFT)                       /* 0x00000003 */
#define GRF_GPIO3C_P_GPIO3C1_P_SHIFT                       (2U)
#define GRF_GPIO3C_P_GPIO3C1_P_MASK                        (0x3U << GRF_GPIO3C_P_GPIO3C1_P_SHIFT)                       /* 0x0000000C */
#define GRF_GPIO3C_P_GPIO3C2_P_SHIFT                       (4U)
#define GRF_GPIO3C_P_GPIO3C2_P_MASK                        (0x3U << GRF_GPIO3C_P_GPIO3C2_P_SHIFT)                       /* 0x00000030 */
#define GRF_GPIO3C_P_GPIO3C3_P_SHIFT                       (6U)
#define GRF_GPIO3C_P_GPIO3C3_P_MASK                        (0x3U << GRF_GPIO3C_P_GPIO3C3_P_SHIFT)                       /* 0x000000C0 */
#define GRF_GPIO3C_P_GPIO3C4_P_SHIFT                       (8U)
#define GRF_GPIO3C_P_GPIO3C4_P_MASK                        (0x3U << GRF_GPIO3C_P_GPIO3C4_P_SHIFT)                       /* 0x00000300 */
#define GRF_GPIO3C_P_GPIO3C5_P_SHIFT                       (10U)
#define GRF_GPIO3C_P_GPIO3C5_P_MASK                        (0x3U << GRF_GPIO3C_P_GPIO3C5_P_SHIFT)                       /* 0x00000C00 */
#define GRF_GPIO3C_P_GPIO3C6_P_SHIFT                       (12U)
#define GRF_GPIO3C_P_GPIO3C6_P_MASK                        (0x3U << GRF_GPIO3C_P_GPIO3C6_P_SHIFT)                       /* 0x00003000 */
#define GRF_GPIO3C_P_GPIO3C7_P_SHIFT                       (14U)
#define GRF_GPIO3C_P_GPIO3C7_P_MASK                        (0x3U << GRF_GPIO3C_P_GPIO3C7_P_SHIFT)                       /* 0x0000C000 */
/* GPIO3D_P */
#define GRF_GPIO3D_P_OFFSET                                (0x10134U)
#define GRF_GPIO3D_P_GPIO3D0_P_SHIFT                       (0U)
#define GRF_GPIO3D_P_GPIO3D0_P_MASK                        (0x3U << GRF_GPIO3D_P_GPIO3D0_P_SHIFT)                       /* 0x00000003 */
#define GRF_GPIO3D_P_GPIO3D1_P_SHIFT                       (2U)
#define GRF_GPIO3D_P_GPIO3D1_P_MASK                        (0x3U << GRF_GPIO3D_P_GPIO3D1_P_SHIFT)                       /* 0x0000000C */
#define GRF_GPIO3D_P_GPIO3D2_P_SHIFT                       (4U)
#define GRF_GPIO3D_P_GPIO3D2_P_MASK                        (0x3U << GRF_GPIO3D_P_GPIO3D2_P_SHIFT)                       /* 0x00000030 */
#define GRF_GPIO3D_P_GPIO3D3_P_SHIFT                       (6U)
#define GRF_GPIO3D_P_GPIO3D3_P_MASK                        (0x3U << GRF_GPIO3D_P_GPIO3D3_P_SHIFT)                       /* 0x000000C0 */
#define GRF_GPIO3D_P_GPIO3D4_P_SHIFT                       (8U)
#define GRF_GPIO3D_P_GPIO3D4_P_MASK                        (0x3U << GRF_GPIO3D_P_GPIO3D4_P_SHIFT)                       /* 0x00000300 */
#define GRF_GPIO3D_P_GPIO3D5_P_SHIFT                       (10U)
#define GRF_GPIO3D_P_GPIO3D5_P_MASK                        (0x3U << GRF_GPIO3D_P_GPIO3D5_P_SHIFT)                       /* 0x00000C00 */
#define GRF_GPIO3D_P_GPIO3D6_P_SHIFT                       (12U)
#define GRF_GPIO3D_P_GPIO3D6_P_MASK                        (0x3U << GRF_GPIO3D_P_GPIO3D6_P_SHIFT)                       /* 0x00003000 */
#define GRF_GPIO3D_P_GPIO3D7_P_SHIFT                       (14U)
#define GRF_GPIO3D_P_GPIO3D7_P_MASK                        (0x3U << GRF_GPIO3D_P_GPIO3D7_P_SHIFT)                       /* 0x0000C000 */
/* GPIO4A_P */
#define GRF_GPIO4A_P_OFFSET                                (0x10138U)
#define GRF_GPIO4A_P_GPIO4A0_P_SHIFT                       (0U)
#define GRF_GPIO4A_P_GPIO4A0_P_MASK                        (0x3U << GRF_GPIO4A_P_GPIO4A0_P_SHIFT)                       /* 0x00000003 */
#define GRF_GPIO4A_P_GPIO4A1_P_SHIFT                       (2U)
#define GRF_GPIO4A_P_GPIO4A1_P_MASK                        (0x3U << GRF_GPIO4A_P_GPIO4A1_P_SHIFT)                       /* 0x0000000C */
/* GPIO0C_IE_H */
#define GRF_GPIO0C_IE_H_OFFSET                             (0x10140U)
#define GRF_GPIO0C_IE_H_GPIO0C4_IE_SHIFT                   (4U)
#define GRF_GPIO0C_IE_H_GPIO0C4_IE_MASK                    (0x1U << GRF_GPIO0C_IE_H_GPIO0C4_IE_SHIFT)                   /* 0x00000010 */
#define GRF_GPIO0C_IE_H_GPIO0C5_IE_SHIFT                   (5U)
#define GRF_GPIO0C_IE_H_GPIO0C5_IE_MASK                    (0x1U << GRF_GPIO0C_IE_H_GPIO0C5_IE_SHIFT)                   /* 0x00000020 */
#define GRF_GPIO0C_IE_H_GPIO0C6_IE_SHIFT                   (6U)
#define GRF_GPIO0C_IE_H_GPIO0C6_IE_MASK                    (0x1U << GRF_GPIO0C_IE_H_GPIO0C6_IE_SHIFT)                   /* 0x00000040 */
#define GRF_GPIO0C_IE_H_GPIO0C7_IE_SHIFT                   (7U)
#define GRF_GPIO0C_IE_H_GPIO0C7_IE_MASK                    (0x1U << GRF_GPIO0C_IE_H_GPIO0C7_IE_SHIFT)                   /* 0x00000080 */
/* GPIO0D_IE */
#define GRF_GPIO0D_IE_OFFSET                               (0x10144U)
#define GRF_GPIO0D_IE_GPIO0D0_IE_SHIFT                     (0U)
#define GRF_GPIO0D_IE_GPIO0D0_IE_MASK                      (0x1U << GRF_GPIO0D_IE_GPIO0D0_IE_SHIFT)                     /* 0x00000001 */
#define GRF_GPIO0D_IE_GPIO0D1_IE_SHIFT                     (1U)
#define GRF_GPIO0D_IE_GPIO0D1_IE_MASK                      (0x1U << GRF_GPIO0D_IE_GPIO0D1_IE_SHIFT)                     /* 0x00000002 */
#define GRF_GPIO0D_IE_GPIO0D2_IE_SHIFT                     (2U)
#define GRF_GPIO0D_IE_GPIO0D2_IE_MASK                      (0x1U << GRF_GPIO0D_IE_GPIO0D2_IE_SHIFT)                     /* 0x00000004 */
#define GRF_GPIO0D_IE_GPIO0D3_IE_SHIFT                     (3U)
#define GRF_GPIO0D_IE_GPIO0D3_IE_MASK                      (0x1U << GRF_GPIO0D_IE_GPIO0D3_IE_SHIFT)                     /* 0x00000008 */
#define GRF_GPIO0D_IE_GPIO0D4_IE_SHIFT                     (4U)
#define GRF_GPIO0D_IE_GPIO0D4_IE_MASK                      (0x1U << GRF_GPIO0D_IE_GPIO0D4_IE_SHIFT)                     /* 0x00000010 */
#define GRF_GPIO0D_IE_GPIO0D5_IE_SHIFT                     (5U)
#define GRF_GPIO0D_IE_GPIO0D5_IE_MASK                      (0x1U << GRF_GPIO0D_IE_GPIO0D5_IE_SHIFT)                     /* 0x00000020 */
#define GRF_GPIO0D_IE_GPIO0D6_IE_SHIFT                     (6U)
#define GRF_GPIO0D_IE_GPIO0D6_IE_MASK                      (0x1U << GRF_GPIO0D_IE_GPIO0D6_IE_SHIFT)                     /* 0x00000040 */
#define GRF_GPIO0D_IE_GPIO0D7_IE_SHIFT                     (7U)
#define GRF_GPIO0D_IE_GPIO0D7_IE_MASK                      (0x1U << GRF_GPIO0D_IE_GPIO0D7_IE_SHIFT)                     /* 0x00000080 */
/* GPIO1A_IE */
#define GRF_GPIO1A_IE_OFFSET                               (0x10148U)
#define GRF_GPIO1A_IE_GPIO1A0_IE_SHIFT                     (0U)
#define GRF_GPIO1A_IE_GPIO1A0_IE_MASK                      (0x1U << GRF_GPIO1A_IE_GPIO1A0_IE_SHIFT)                     /* 0x00000001 */
#define GRF_GPIO1A_IE_GPIO1A1_IE_SHIFT                     (1U)
#define GRF_GPIO1A_IE_GPIO1A1_IE_MASK                      (0x1U << GRF_GPIO1A_IE_GPIO1A1_IE_SHIFT)                     /* 0x00000002 */
#define GRF_GPIO1A_IE_GPIO1A2_IE_SHIFT                     (2U)
#define GRF_GPIO1A_IE_GPIO1A2_IE_MASK                      (0x1U << GRF_GPIO1A_IE_GPIO1A2_IE_SHIFT)                     /* 0x00000004 */
#define GRF_GPIO1A_IE_GPIO1A3_IE_SHIFT                     (3U)
#define GRF_GPIO1A_IE_GPIO1A3_IE_MASK                      (0x1U << GRF_GPIO1A_IE_GPIO1A3_IE_SHIFT)                     /* 0x00000008 */
#define GRF_GPIO1A_IE_GPIO1A4_IE_SHIFT                     (4U)
#define GRF_GPIO1A_IE_GPIO1A4_IE_MASK                      (0x1U << GRF_GPIO1A_IE_GPIO1A4_IE_SHIFT)                     /* 0x00000010 */
#define GRF_GPIO1A_IE_GPIO1A5_IE_SHIFT                     (5U)
#define GRF_GPIO1A_IE_GPIO1A5_IE_MASK                      (0x1U << GRF_GPIO1A_IE_GPIO1A5_IE_SHIFT)                     /* 0x00000020 */
#define GRF_GPIO1A_IE_GPIO1A6_IE_SHIFT                     (6U)
#define GRF_GPIO1A_IE_GPIO1A6_IE_MASK                      (0x1U << GRF_GPIO1A_IE_GPIO1A6_IE_SHIFT)                     /* 0x00000040 */
#define GRF_GPIO1A_IE_GPIO1A7_IE_SHIFT                     (7U)
#define GRF_GPIO1A_IE_GPIO1A7_IE_MASK                      (0x1U << GRF_GPIO1A_IE_GPIO1A7_IE_SHIFT)                     /* 0x00000080 */
/* GPIO1B_IE */
#define GRF_GPIO1B_IE_OFFSET                               (0x1014CU)
#define GRF_GPIO1B_IE_GPIO1B0_IE_SHIFT                     (0U)
#define GRF_GPIO1B_IE_GPIO1B0_IE_MASK                      (0x1U << GRF_GPIO1B_IE_GPIO1B0_IE_SHIFT)                     /* 0x00000001 */
#define GRF_GPIO1B_IE_GPIO1B1_IE_SHIFT                     (1U)
#define GRF_GPIO1B_IE_GPIO1B1_IE_MASK                      (0x1U << GRF_GPIO1B_IE_GPIO1B1_IE_SHIFT)                     /* 0x00000002 */
#define GRF_GPIO1B_IE_GPIO1B2_IE_SHIFT                     (2U)
#define GRF_GPIO1B_IE_GPIO1B2_IE_MASK                      (0x1U << GRF_GPIO1B_IE_GPIO1B2_IE_SHIFT)                     /* 0x00000004 */
#define GRF_GPIO1B_IE_GPIO1B3_IE_SHIFT                     (3U)
#define GRF_GPIO1B_IE_GPIO1B3_IE_MASK                      (0x1U << GRF_GPIO1B_IE_GPIO1B3_IE_SHIFT)                     /* 0x00000008 */
#define GRF_GPIO1B_IE_GPIO1B4_IE_SHIFT                     (4U)
#define GRF_GPIO1B_IE_GPIO1B4_IE_MASK                      (0x1U << GRF_GPIO1B_IE_GPIO1B4_IE_SHIFT)                     /* 0x00000010 */
#define GRF_GPIO1B_IE_GPIO1B5_IE_SHIFT                     (5U)
#define GRF_GPIO1B_IE_GPIO1B5_IE_MASK                      (0x1U << GRF_GPIO1B_IE_GPIO1B5_IE_SHIFT)                     /* 0x00000020 */
#define GRF_GPIO1B_IE_GPIO1B6_IE_SHIFT                     (6U)
#define GRF_GPIO1B_IE_GPIO1B6_IE_MASK                      (0x1U << GRF_GPIO1B_IE_GPIO1B6_IE_SHIFT)                     /* 0x00000040 */
#define GRF_GPIO1B_IE_GPIO1B7_IE_SHIFT                     (7U)
#define GRF_GPIO1B_IE_GPIO1B7_IE_MASK                      (0x1U << GRF_GPIO1B_IE_GPIO1B7_IE_SHIFT)                     /* 0x00000080 */
/* GPIO1C_IE */
#define GRF_GPIO1C_IE_OFFSET                               (0x10150U)
#define GRF_GPIO1C_IE_GPIO1C0_IE_SHIFT                     (0U)
#define GRF_GPIO1C_IE_GPIO1C0_IE_MASK                      (0x1U << GRF_GPIO1C_IE_GPIO1C0_IE_SHIFT)                     /* 0x00000001 */
#define GRF_GPIO1C_IE_GPIO1C1_IE_SHIFT                     (1U)
#define GRF_GPIO1C_IE_GPIO1C1_IE_MASK                      (0x1U << GRF_GPIO1C_IE_GPIO1C1_IE_SHIFT)                     /* 0x00000002 */
#define GRF_GPIO1C_IE_GPIO1C2_IE_SHIFT                     (2U)
#define GRF_GPIO1C_IE_GPIO1C2_IE_MASK                      (0x1U << GRF_GPIO1C_IE_GPIO1C2_IE_SHIFT)                     /* 0x00000004 */
#define GRF_GPIO1C_IE_GPIO1C3_IE_SHIFT                     (3U)
#define GRF_GPIO1C_IE_GPIO1C3_IE_MASK                      (0x1U << GRF_GPIO1C_IE_GPIO1C3_IE_SHIFT)                     /* 0x00000008 */
#define GRF_GPIO1C_IE_GPIO1C4_IE_SHIFT                     (4U)
#define GRF_GPIO1C_IE_GPIO1C4_IE_MASK                      (0x1U << GRF_GPIO1C_IE_GPIO1C4_IE_SHIFT)                     /* 0x00000010 */
#define GRF_GPIO1C_IE_GPIO1C5_IE_SHIFT                     (5U)
#define GRF_GPIO1C_IE_GPIO1C5_IE_MASK                      (0x1U << GRF_GPIO1C_IE_GPIO1C5_IE_SHIFT)                     /* 0x00000020 */
#define GRF_GPIO1C_IE_GPIO1C6_IE_SHIFT                     (6U)
#define GRF_GPIO1C_IE_GPIO1C6_IE_MASK                      (0x1U << GRF_GPIO1C_IE_GPIO1C6_IE_SHIFT)                     /* 0x00000040 */
#define GRF_GPIO1C_IE_GPIO1C7_IE_SHIFT                     (7U)
#define GRF_GPIO1C_IE_GPIO1C7_IE_MASK                      (0x1U << GRF_GPIO1C_IE_GPIO1C7_IE_SHIFT)                     /* 0x00000080 */
/* GPIO1D_IE */
#define GRF_GPIO1D_IE_OFFSET                               (0x10154U)
#define GRF_GPIO1D_IE_GPIO1D0_IE_SHIFT                     (0U)
#define GRF_GPIO1D_IE_GPIO1D0_IE_MASK                      (0x1U << GRF_GPIO1D_IE_GPIO1D0_IE_SHIFT)                     /* 0x00000001 */
#define GRF_GPIO1D_IE_GPIO1D1_IE_SHIFT                     (1U)
#define GRF_GPIO1D_IE_GPIO1D1_IE_MASK                      (0x1U << GRF_GPIO1D_IE_GPIO1D1_IE_SHIFT)                     /* 0x00000002 */
#define GRF_GPIO1D_IE_GPIO1D2_IE_SHIFT                     (2U)
#define GRF_GPIO1D_IE_GPIO1D2_IE_MASK                      (0x1U << GRF_GPIO1D_IE_GPIO1D2_IE_SHIFT)                     /* 0x00000004 */
#define GRF_GPIO1D_IE_GPIO1D3_IE_SHIFT                     (3U)
#define GRF_GPIO1D_IE_GPIO1D3_IE_MASK                      (0x1U << GRF_GPIO1D_IE_GPIO1D3_IE_SHIFT)                     /* 0x00000008 */
#define GRF_GPIO1D_IE_GPIO1D4_IE_SHIFT                     (4U)
#define GRF_GPIO1D_IE_GPIO1D4_IE_MASK                      (0x1U << GRF_GPIO1D_IE_GPIO1D4_IE_SHIFT)                     /* 0x00000010 */
#define GRF_GPIO1D_IE_GPIO1D5_IE_SHIFT                     (5U)
#define GRF_GPIO1D_IE_GPIO1D5_IE_MASK                      (0x1U << GRF_GPIO1D_IE_GPIO1D5_IE_SHIFT)                     /* 0x00000020 */
#define GRF_GPIO1D_IE_GPIO1D6_IE_SHIFT                     (6U)
#define GRF_GPIO1D_IE_GPIO1D6_IE_MASK                      (0x1U << GRF_GPIO1D_IE_GPIO1D6_IE_SHIFT)                     /* 0x00000040 */
#define GRF_GPIO1D_IE_GPIO1D7_IE_SHIFT                     (7U)
#define GRF_GPIO1D_IE_GPIO1D7_IE_MASK                      (0x1U << GRF_GPIO1D_IE_GPIO1D7_IE_SHIFT)                     /* 0x00000080 */
/* GPIO2A_IE */
#define GRF_GPIO2A_IE_OFFSET                               (0x10158U)
#define GRF_GPIO2A_IE_GPIO2A0_IE_SHIFT                     (0U)
#define GRF_GPIO2A_IE_GPIO2A0_IE_MASK                      (0x1U << GRF_GPIO2A_IE_GPIO2A0_IE_SHIFT)                     /* 0x00000001 */
#define GRF_GPIO2A_IE_GPIO2A1_IE_SHIFT                     (1U)
#define GRF_GPIO2A_IE_GPIO2A1_IE_MASK                      (0x1U << GRF_GPIO2A_IE_GPIO2A1_IE_SHIFT)                     /* 0x00000002 */
#define GRF_GPIO2A_IE_GPIO2A2_IE_SHIFT                     (2U)
#define GRF_GPIO2A_IE_GPIO2A2_IE_MASK                      (0x1U << GRF_GPIO2A_IE_GPIO2A2_IE_SHIFT)                     /* 0x00000004 */
#define GRF_GPIO2A_IE_GPIO2A3_IE_SHIFT                     (3U)
#define GRF_GPIO2A_IE_GPIO2A3_IE_MASK                      (0x1U << GRF_GPIO2A_IE_GPIO2A3_IE_SHIFT)                     /* 0x00000008 */
#define GRF_GPIO2A_IE_GPIO2A4_IE_SHIFT                     (4U)
#define GRF_GPIO2A_IE_GPIO2A4_IE_MASK                      (0x1U << GRF_GPIO2A_IE_GPIO2A4_IE_SHIFT)                     /* 0x00000010 */
#define GRF_GPIO2A_IE_GPIO2A5_IE_SHIFT                     (5U)
#define GRF_GPIO2A_IE_GPIO2A5_IE_MASK                      (0x1U << GRF_GPIO2A_IE_GPIO2A5_IE_SHIFT)                     /* 0x00000020 */
#define GRF_GPIO2A_IE_GPIO2A6_IE_SHIFT                     (6U)
#define GRF_GPIO2A_IE_GPIO2A6_IE_MASK                      (0x1U << GRF_GPIO2A_IE_GPIO2A6_IE_SHIFT)                     /* 0x00000040 */
#define GRF_GPIO2A_IE_GPIO2A7_IE_SHIFT                     (7U)
#define GRF_GPIO2A_IE_GPIO2A7_IE_MASK                      (0x1U << GRF_GPIO2A_IE_GPIO2A7_IE_SHIFT)                     /* 0x00000080 */
/* GPIO2B_IE */
#define GRF_GPIO2B_IE_OFFSET                               (0x1015CU)
#define GRF_GPIO2B_IE_GPIO2B0_IE_SHIFT                     (0U)
#define GRF_GPIO2B_IE_GPIO2B0_IE_MASK                      (0x1U << GRF_GPIO2B_IE_GPIO2B0_IE_SHIFT)                     /* 0x00000001 */
#define GRF_GPIO2B_IE_GPIO2B1_IE_SHIFT                     (1U)
#define GRF_GPIO2B_IE_GPIO2B1_IE_MASK                      (0x1U << GRF_GPIO2B_IE_GPIO2B1_IE_SHIFT)                     /* 0x00000002 */
#define GRF_GPIO2B_IE_GPIO2B2_IE_SHIFT                     (2U)
#define GRF_GPIO2B_IE_GPIO2B2_IE_MASK                      (0x1U << GRF_GPIO2B_IE_GPIO2B2_IE_SHIFT)                     /* 0x00000004 */
#define GRF_GPIO2B_IE_GPIO2B3_IE_SHIFT                     (3U)
#define GRF_GPIO2B_IE_GPIO2B3_IE_MASK                      (0x1U << GRF_GPIO2B_IE_GPIO2B3_IE_SHIFT)                     /* 0x00000008 */
#define GRF_GPIO2B_IE_GPIO2B4_IE_SHIFT                     (4U)
#define GRF_GPIO2B_IE_GPIO2B4_IE_MASK                      (0x1U << GRF_GPIO2B_IE_GPIO2B4_IE_SHIFT)                     /* 0x00000010 */
#define GRF_GPIO2B_IE_GPIO2B5_IE_SHIFT                     (5U)
#define GRF_GPIO2B_IE_GPIO2B5_IE_MASK                      (0x1U << GRF_GPIO2B_IE_GPIO2B5_IE_SHIFT)                     /* 0x00000020 */
#define GRF_GPIO2B_IE_GPIO2B6_IE_SHIFT                     (6U)
#define GRF_GPIO2B_IE_GPIO2B6_IE_MASK                      (0x1U << GRF_GPIO2B_IE_GPIO2B6_IE_SHIFT)                     /* 0x00000040 */
#define GRF_GPIO2B_IE_GPIO2B7_IE_SHIFT                     (7U)
#define GRF_GPIO2B_IE_GPIO2B7_IE_MASK                      (0x1U << GRF_GPIO2B_IE_GPIO2B7_IE_SHIFT)                     /* 0x00000080 */
/* GPIO2C_IE */
#define GRF_GPIO2C_IE_OFFSET                               (0x10160U)
#define GRF_GPIO2C_IE_GPIO2C0_IE_SHIFT                     (0U)
#define GRF_GPIO2C_IE_GPIO2C0_IE_MASK                      (0x1U << GRF_GPIO2C_IE_GPIO2C0_IE_SHIFT)                     /* 0x00000001 */
#define GRF_GPIO2C_IE_GPIO2C1_IE_SHIFT                     (1U)
#define GRF_GPIO2C_IE_GPIO2C1_IE_MASK                      (0x1U << GRF_GPIO2C_IE_GPIO2C1_IE_SHIFT)                     /* 0x00000002 */
#define GRF_GPIO2C_IE_GPIO2C2_IE_SHIFT                     (2U)
#define GRF_GPIO2C_IE_GPIO2C2_IE_MASK                      (0x1U << GRF_GPIO2C_IE_GPIO2C2_IE_SHIFT)                     /* 0x00000004 */
#define GRF_GPIO2C_IE_GPIO2C3_IE_SHIFT                     (3U)
#define GRF_GPIO2C_IE_GPIO2C3_IE_MASK                      (0x1U << GRF_GPIO2C_IE_GPIO2C3_IE_SHIFT)                     /* 0x00000008 */
#define GRF_GPIO2C_IE_GPIO2C4_IE_SHIFT                     (4U)
#define GRF_GPIO2C_IE_GPIO2C4_IE_MASK                      (0x1U << GRF_GPIO2C_IE_GPIO2C4_IE_SHIFT)                     /* 0x00000010 */
#define GRF_GPIO2C_IE_GPIO2C5_IE_SHIFT                     (5U)
#define GRF_GPIO2C_IE_GPIO2C5_IE_MASK                      (0x1U << GRF_GPIO2C_IE_GPIO2C5_IE_SHIFT)                     /* 0x00000020 */
#define GRF_GPIO2C_IE_GPIO2C6_IE_SHIFT                     (6U)
#define GRF_GPIO2C_IE_GPIO2C6_IE_MASK                      (0x1U << GRF_GPIO2C_IE_GPIO2C6_IE_SHIFT)                     /* 0x00000040 */
#define GRF_GPIO2C_IE_GPIO2C7_IE_SHIFT                     (7U)
#define GRF_GPIO2C_IE_GPIO2C7_IE_MASK                      (0x1U << GRF_GPIO2C_IE_GPIO2C7_IE_SHIFT)                     /* 0x00000080 */
/* GPIO2D_IE */
#define GRF_GPIO2D_IE_OFFSET                               (0x10164U)
#define GRF_GPIO2D_IE_GPIO2D0_IE_SHIFT                     (0U)
#define GRF_GPIO2D_IE_GPIO2D0_IE_MASK                      (0x1U << GRF_GPIO2D_IE_GPIO2D0_IE_SHIFT)                     /* 0x00000001 */
#define GRF_GPIO2D_IE_GPIO2D1_IE_SHIFT                     (1U)
#define GRF_GPIO2D_IE_GPIO2D1_IE_MASK                      (0x1U << GRF_GPIO2D_IE_GPIO2D1_IE_SHIFT)                     /* 0x00000002 */
#define GRF_GPIO2D_IE_GPIO2D2_IE_SHIFT                     (2U)
#define GRF_GPIO2D_IE_GPIO2D2_IE_MASK                      (0x1U << GRF_GPIO2D_IE_GPIO2D2_IE_SHIFT)                     /* 0x00000004 */
#define GRF_GPIO2D_IE_GPIO2D3_IE_SHIFT                     (3U)
#define GRF_GPIO2D_IE_GPIO2D3_IE_MASK                      (0x1U << GRF_GPIO2D_IE_GPIO2D3_IE_SHIFT)                     /* 0x00000008 */
#define GRF_GPIO2D_IE_GPIO2D4_IE_SHIFT                     (4U)
#define GRF_GPIO2D_IE_GPIO2D4_IE_MASK                      (0x1U << GRF_GPIO2D_IE_GPIO2D4_IE_SHIFT)                     /* 0x00000010 */
#define GRF_GPIO2D_IE_GPIO2D5_IE_SHIFT                     (5U)
#define GRF_GPIO2D_IE_GPIO2D5_IE_MASK                      (0x1U << GRF_GPIO2D_IE_GPIO2D5_IE_SHIFT)                     /* 0x00000020 */
#define GRF_GPIO2D_IE_GPIO2D6_IE_SHIFT                     (6U)
#define GRF_GPIO2D_IE_GPIO2D6_IE_MASK                      (0x1U << GRF_GPIO2D_IE_GPIO2D6_IE_SHIFT)                     /* 0x00000040 */
#define GRF_GPIO2D_IE_GPIO2D7_IE_SHIFT                     (7U)
#define GRF_GPIO2D_IE_GPIO2D7_IE_MASK                      (0x1U << GRF_GPIO2D_IE_GPIO2D7_IE_SHIFT)                     /* 0x00000080 */
/* GPIO3A_IE */
#define GRF_GPIO3A_IE_OFFSET                               (0x10168U)
#define GRF_GPIO3A_IE_GPIO3A0_IE_SHIFT                     (0U)
#define GRF_GPIO3A_IE_GPIO3A0_IE_MASK                      (0x1U << GRF_GPIO3A_IE_GPIO3A0_IE_SHIFT)                     /* 0x00000001 */
#define GRF_GPIO3A_IE_GPIO3A1_IE_SHIFT                     (1U)
#define GRF_GPIO3A_IE_GPIO3A1_IE_MASK                      (0x1U << GRF_GPIO3A_IE_GPIO3A1_IE_SHIFT)                     /* 0x00000002 */
#define GRF_GPIO3A_IE_GPIO3A2_IE_SHIFT                     (2U)
#define GRF_GPIO3A_IE_GPIO3A2_IE_MASK                      (0x1U << GRF_GPIO3A_IE_GPIO3A2_IE_SHIFT)                     /* 0x00000004 */
#define GRF_GPIO3A_IE_GPIO3A3_IE_SHIFT                     (3U)
#define GRF_GPIO3A_IE_GPIO3A3_IE_MASK                      (0x1U << GRF_GPIO3A_IE_GPIO3A3_IE_SHIFT)                     /* 0x00000008 */
#define GRF_GPIO3A_IE_GPIO3A4_IE_SHIFT                     (4U)
#define GRF_GPIO3A_IE_GPIO3A4_IE_MASK                      (0x1U << GRF_GPIO3A_IE_GPIO3A4_IE_SHIFT)                     /* 0x00000010 */
#define GRF_GPIO3A_IE_GPIO3A5_IE_SHIFT                     (5U)
#define GRF_GPIO3A_IE_GPIO3A5_IE_MASK                      (0x1U << GRF_GPIO3A_IE_GPIO3A5_IE_SHIFT)                     /* 0x00000020 */
#define GRF_GPIO3A_IE_GPIO3A6_IE_SHIFT                     (6U)
#define GRF_GPIO3A_IE_GPIO3A6_IE_MASK                      (0x1U << GRF_GPIO3A_IE_GPIO3A6_IE_SHIFT)                     /* 0x00000040 */
#define GRF_GPIO3A_IE_GPIO3A7_IE_SHIFT                     (7U)
#define GRF_GPIO3A_IE_GPIO3A7_IE_MASK                      (0x1U << GRF_GPIO3A_IE_GPIO3A7_IE_SHIFT)                     /* 0x00000080 */
/* GPIO3B_IE */
#define GRF_GPIO3B_IE_OFFSET                               (0x1016CU)
#define GRF_GPIO3B_IE_GPIO3B0_IE_SHIFT                     (0U)
#define GRF_GPIO3B_IE_GPIO3B0_IE_MASK                      (0x1U << GRF_GPIO3B_IE_GPIO3B0_IE_SHIFT)                     /* 0x00000001 */
#define GRF_GPIO3B_IE_GPIO3B1_IE_SHIFT                     (1U)
#define GRF_GPIO3B_IE_GPIO3B1_IE_MASK                      (0x1U << GRF_GPIO3B_IE_GPIO3B1_IE_SHIFT)                     /* 0x00000002 */
#define GRF_GPIO3B_IE_GPIO3B2_IE_SHIFT                     (2U)
#define GRF_GPIO3B_IE_GPIO3B2_IE_MASK                      (0x1U << GRF_GPIO3B_IE_GPIO3B2_IE_SHIFT)                     /* 0x00000004 */
#define GRF_GPIO3B_IE_GPIO3B3_IE_SHIFT                     (3U)
#define GRF_GPIO3B_IE_GPIO3B3_IE_MASK                      (0x1U << GRF_GPIO3B_IE_GPIO3B3_IE_SHIFT)                     /* 0x00000008 */
#define GRF_GPIO3B_IE_GPIO3B4_IE_SHIFT                     (4U)
#define GRF_GPIO3B_IE_GPIO3B4_IE_MASK                      (0x1U << GRF_GPIO3B_IE_GPIO3B4_IE_SHIFT)                     /* 0x00000010 */
#define GRF_GPIO3B_IE_GPIO3B5_IE_SHIFT                     (5U)
#define GRF_GPIO3B_IE_GPIO3B5_IE_MASK                      (0x1U << GRF_GPIO3B_IE_GPIO3B5_IE_SHIFT)                     /* 0x00000020 */
#define GRF_GPIO3B_IE_GPIO3B6_IE_SHIFT                     (6U)
#define GRF_GPIO3B_IE_GPIO3B6_IE_MASK                      (0x1U << GRF_GPIO3B_IE_GPIO3B6_IE_SHIFT)                     /* 0x00000040 */
#define GRF_GPIO3B_IE_GPIO3B7_IE_SHIFT                     (7U)
#define GRF_GPIO3B_IE_GPIO3B7_IE_MASK                      (0x1U << GRF_GPIO3B_IE_GPIO3B7_IE_SHIFT)                     /* 0x00000080 */
/* GPIO3C_IE */
#define GRF_GPIO3C_IE_OFFSET                               (0x10170U)
#define GRF_GPIO3C_IE_GPIO3C0_IE_SHIFT                     (0U)
#define GRF_GPIO3C_IE_GPIO3C0_IE_MASK                      (0x1U << GRF_GPIO3C_IE_GPIO3C0_IE_SHIFT)                     /* 0x00000001 */
#define GRF_GPIO3C_IE_GPIO3C1_IE_SHIFT                     (1U)
#define GRF_GPIO3C_IE_GPIO3C1_IE_MASK                      (0x1U << GRF_GPIO3C_IE_GPIO3C1_IE_SHIFT)                     /* 0x00000002 */
#define GRF_GPIO3C_IE_GPIO3C2_IE_SHIFT                     (2U)
#define GRF_GPIO3C_IE_GPIO3C2_IE_MASK                      (0x1U << GRF_GPIO3C_IE_GPIO3C2_IE_SHIFT)                     /* 0x00000004 */
#define GRF_GPIO3C_IE_GPIO3C3_IE_SHIFT                     (3U)
#define GRF_GPIO3C_IE_GPIO3C3_IE_MASK                      (0x1U << GRF_GPIO3C_IE_GPIO3C3_IE_SHIFT)                     /* 0x00000008 */
#define GRF_GPIO3C_IE_GPIO3C4_IE_SHIFT                     (4U)
#define GRF_GPIO3C_IE_GPIO3C4_IE_MASK                      (0x1U << GRF_GPIO3C_IE_GPIO3C4_IE_SHIFT)                     /* 0x00000010 */
#define GRF_GPIO3C_IE_GPIO3C5_IE_SHIFT                     (5U)
#define GRF_GPIO3C_IE_GPIO3C5_IE_MASK                      (0x1U << GRF_GPIO3C_IE_GPIO3C5_IE_SHIFT)                     /* 0x00000020 */
#define GRF_GPIO3C_IE_GPIO3C6_IE_SHIFT                     (6U)
#define GRF_GPIO3C_IE_GPIO3C6_IE_MASK                      (0x1U << GRF_GPIO3C_IE_GPIO3C6_IE_SHIFT)                     /* 0x00000040 */
#define GRF_GPIO3C_IE_GPIO3C7_IE_SHIFT                     (7U)
#define GRF_GPIO3C_IE_GPIO3C7_IE_MASK                      (0x1U << GRF_GPIO3C_IE_GPIO3C7_IE_SHIFT)                     /* 0x00000080 */
/* GPIO3D_IE */
#define GRF_GPIO3D_IE_OFFSET                               (0x10174U)
#define GRF_GPIO3D_IE_GPIO3D0_IE_SHIFT                     (0U)
#define GRF_GPIO3D_IE_GPIO3D0_IE_MASK                      (0x1U << GRF_GPIO3D_IE_GPIO3D0_IE_SHIFT)                     /* 0x00000001 */
#define GRF_GPIO3D_IE_GPIO3D1_IE_SHIFT                     (1U)
#define GRF_GPIO3D_IE_GPIO3D1_IE_MASK                      (0x1U << GRF_GPIO3D_IE_GPIO3D1_IE_SHIFT)                     /* 0x00000002 */
#define GRF_GPIO3D_IE_GPIO3D2_IE_SHIFT                     (2U)
#define GRF_GPIO3D_IE_GPIO3D2_IE_MASK                      (0x1U << GRF_GPIO3D_IE_GPIO3D2_IE_SHIFT)                     /* 0x00000004 */
#define GRF_GPIO3D_IE_GPIO3D3_IE_SHIFT                     (3U)
#define GRF_GPIO3D_IE_GPIO3D3_IE_MASK                      (0x1U << GRF_GPIO3D_IE_GPIO3D3_IE_SHIFT)                     /* 0x00000008 */
#define GRF_GPIO3D_IE_GPIO3D4_IE_SHIFT                     (4U)
#define GRF_GPIO3D_IE_GPIO3D4_IE_MASK                      (0x1U << GRF_GPIO3D_IE_GPIO3D4_IE_SHIFT)                     /* 0x00000010 */
#define GRF_GPIO3D_IE_GPIO3D5_IE_SHIFT                     (5U)
#define GRF_GPIO3D_IE_GPIO3D5_IE_MASK                      (0x1U << GRF_GPIO3D_IE_GPIO3D5_IE_SHIFT)                     /* 0x00000020 */
#define GRF_GPIO3D_IE_GPIO3D6_IE_SHIFT                     (6U)
#define GRF_GPIO3D_IE_GPIO3D6_IE_MASK                      (0x1U << GRF_GPIO3D_IE_GPIO3D6_IE_SHIFT)                     /* 0x00000040 */
#define GRF_GPIO3D_IE_GPIO3D7_IE_SHIFT                     (7U)
#define GRF_GPIO3D_IE_GPIO3D7_IE_MASK                      (0x1U << GRF_GPIO3D_IE_GPIO3D7_IE_SHIFT)                     /* 0x00000080 */
/* GPIO4A_IE */
#define GRF_GPIO4A_IE_OFFSET                               (0x10178U)
#define GRF_GPIO4A_IE_GPIO4A0_IE_SHIFT                     (0U)
#define GRF_GPIO4A_IE_GPIO4A0_IE_MASK                      (0x1U << GRF_GPIO4A_IE_GPIO4A0_IE_SHIFT)                     /* 0x00000001 */
#define GRF_GPIO4A_IE_GPIO4A1_IE_SHIFT                     (1U)
#define GRF_GPIO4A_IE_GPIO4A1_IE_MASK                      (0x1U << GRF_GPIO4A_IE_GPIO4A1_IE_SHIFT)                     /* 0x00000002 */
/* GPIO0C_SMT_H */
#define GRF_GPIO0C_SMT_H_OFFSET                            (0x10180U)
#define GRF_GPIO0C_SMT_H_GPIO0C4_SMT_SHIFT                 (4U)
#define GRF_GPIO0C_SMT_H_GPIO0C4_SMT_MASK                  (0x1U << GRF_GPIO0C_SMT_H_GPIO0C4_SMT_SHIFT)                 /* 0x00000010 */
#define GRF_GPIO0C_SMT_H_GPIO0C5_SMT_SHIFT                 (5U)
#define GRF_GPIO0C_SMT_H_GPIO0C5_SMT_MASK                  (0x1U << GRF_GPIO0C_SMT_H_GPIO0C5_SMT_SHIFT)                 /* 0x00000020 */
#define GRF_GPIO0C_SMT_H_GPIO0C6_SMT_SHIFT                 (6U)
#define GRF_GPIO0C_SMT_H_GPIO0C6_SMT_MASK                  (0x1U << GRF_GPIO0C_SMT_H_GPIO0C6_SMT_SHIFT)                 /* 0x00000040 */
#define GRF_GPIO0C_SMT_H_GPIO0C7_SMT_SHIFT                 (7U)
#define GRF_GPIO0C_SMT_H_GPIO0C7_SMT_MASK                  (0x1U << GRF_GPIO0C_SMT_H_GPIO0C7_SMT_SHIFT)                 /* 0x00000080 */
/* GPIO0D_SMT */
#define GRF_GPIO0D_SMT_OFFSET                              (0x10184U)
#define GRF_GPIO0D_SMT_GPIO0D0_SMT_SHIFT                   (0U)
#define GRF_GPIO0D_SMT_GPIO0D0_SMT_MASK                    (0x1U << GRF_GPIO0D_SMT_GPIO0D0_SMT_SHIFT)                   /* 0x00000001 */
#define GRF_GPIO0D_SMT_GPIO0D1_SMT_SHIFT                   (1U)
#define GRF_GPIO0D_SMT_GPIO0D1_SMT_MASK                    (0x1U << GRF_GPIO0D_SMT_GPIO0D1_SMT_SHIFT)                   /* 0x00000002 */
#define GRF_GPIO0D_SMT_GPIO0D2_SMT_SHIFT                   (2U)
#define GRF_GPIO0D_SMT_GPIO0D2_SMT_MASK                    (0x1U << GRF_GPIO0D_SMT_GPIO0D2_SMT_SHIFT)                   /* 0x00000004 */
#define GRF_GPIO0D_SMT_GPIO0D3_SMT_SHIFT                   (3U)
#define GRF_GPIO0D_SMT_GPIO0D3_SMT_MASK                    (0x1U << GRF_GPIO0D_SMT_GPIO0D3_SMT_SHIFT)                   /* 0x00000008 */
#define GRF_GPIO0D_SMT_GPIO0D4_SMT_SHIFT                   (4U)
#define GRF_GPIO0D_SMT_GPIO0D4_SMT_MASK                    (0x1U << GRF_GPIO0D_SMT_GPIO0D4_SMT_SHIFT)                   /* 0x00000010 */
#define GRF_GPIO0D_SMT_GPIO0D5_SMT_SHIFT                   (5U)
#define GRF_GPIO0D_SMT_GPIO0D5_SMT_MASK                    (0x1U << GRF_GPIO0D_SMT_GPIO0D5_SMT_SHIFT)                   /* 0x00000020 */
#define GRF_GPIO0D_SMT_GPIO0D6_SMT_SHIFT                   (6U)
#define GRF_GPIO0D_SMT_GPIO0D6_SMT_MASK                    (0x1U << GRF_GPIO0D_SMT_GPIO0D6_SMT_SHIFT)                   /* 0x00000040 */
#define GRF_GPIO0D_SMT_GPIO0D7_SMT_SHIFT                   (7U)
#define GRF_GPIO0D_SMT_GPIO0D7_SMT_MASK                    (0x1U << GRF_GPIO0D_SMT_GPIO0D7_SMT_SHIFT)                   /* 0x00000080 */
/* GPIO1A_SMT */
#define GRF_GPIO1A_SMT_OFFSET                              (0x10188U)
#define GRF_GPIO1A_SMT_GPIO1A0_SMT_SHIFT                   (0U)
#define GRF_GPIO1A_SMT_GPIO1A0_SMT_MASK                    (0x1U << GRF_GPIO1A_SMT_GPIO1A0_SMT_SHIFT)                   /* 0x00000001 */
#define GRF_GPIO1A_SMT_GPIO1A1_SMT_SHIFT                   (1U)
#define GRF_GPIO1A_SMT_GPIO1A1_SMT_MASK                    (0x1U << GRF_GPIO1A_SMT_GPIO1A1_SMT_SHIFT)                   /* 0x00000002 */
#define GRF_GPIO1A_SMT_GPIO1A2_SMT_SHIFT                   (2U)
#define GRF_GPIO1A_SMT_GPIO1A2_SMT_MASK                    (0x1U << GRF_GPIO1A_SMT_GPIO1A2_SMT_SHIFT)                   /* 0x00000004 */
#define GRF_GPIO1A_SMT_GPIO1A3_SMT_SHIFT                   (3U)
#define GRF_GPIO1A_SMT_GPIO1A3_SMT_MASK                    (0x1U << GRF_GPIO1A_SMT_GPIO1A3_SMT_SHIFT)                   /* 0x00000008 */
#define GRF_GPIO1A_SMT_GPIO1A4_SMT_SHIFT                   (4U)
#define GRF_GPIO1A_SMT_GPIO1A4_SMT_MASK                    (0x1U << GRF_GPIO1A_SMT_GPIO1A4_SMT_SHIFT)                   /* 0x00000010 */
#define GRF_GPIO1A_SMT_GPIO1A5_SMT_SHIFT                   (5U)
#define GRF_GPIO1A_SMT_GPIO1A5_SMT_MASK                    (0x1U << GRF_GPIO1A_SMT_GPIO1A5_SMT_SHIFT)                   /* 0x00000020 */
#define GRF_GPIO1A_SMT_GPIO1A6_SMT_SHIFT                   (6U)
#define GRF_GPIO1A_SMT_GPIO1A6_SMT_MASK                    (0x1U << GRF_GPIO1A_SMT_GPIO1A6_SMT_SHIFT)                   /* 0x00000040 */
#define GRF_GPIO1A_SMT_GPIO1A7_SMT_SHIFT                   (7U)
#define GRF_GPIO1A_SMT_GPIO1A7_SMT_MASK                    (0x1U << GRF_GPIO1A_SMT_GPIO1A7_SMT_SHIFT)                   /* 0x00000080 */
/* GPIO1B_SMT */
#define GRF_GPIO1B_SMT_OFFSET                              (0x1018CU)
#define GRF_GPIO1B_SMT_GPIO1B0_SMT_SHIFT                   (0U)
#define GRF_GPIO1B_SMT_GPIO1B0_SMT_MASK                    (0x1U << GRF_GPIO1B_SMT_GPIO1B0_SMT_SHIFT)                   /* 0x00000001 */
#define GRF_GPIO1B_SMT_GPIO1B1_SMT_SHIFT                   (1U)
#define GRF_GPIO1B_SMT_GPIO1B1_SMT_MASK                    (0x1U << GRF_GPIO1B_SMT_GPIO1B1_SMT_SHIFT)                   /* 0x00000002 */
#define GRF_GPIO1B_SMT_GPIO1B2_SMT_SHIFT                   (2U)
#define GRF_GPIO1B_SMT_GPIO1B2_SMT_MASK                    (0x1U << GRF_GPIO1B_SMT_GPIO1B2_SMT_SHIFT)                   /* 0x00000004 */
#define GRF_GPIO1B_SMT_GPIO1B3_SMT_SHIFT                   (3U)
#define GRF_GPIO1B_SMT_GPIO1B3_SMT_MASK                    (0x1U << GRF_GPIO1B_SMT_GPIO1B3_SMT_SHIFT)                   /* 0x00000008 */
#define GRF_GPIO1B_SMT_GPIO1B4_SMT_SHIFT                   (4U)
#define GRF_GPIO1B_SMT_GPIO1B4_SMT_MASK                    (0x1U << GRF_GPIO1B_SMT_GPIO1B4_SMT_SHIFT)                   /* 0x00000010 */
#define GRF_GPIO1B_SMT_GPIO1B5_SMT_SHIFT                   (5U)
#define GRF_GPIO1B_SMT_GPIO1B5_SMT_MASK                    (0x1U << GRF_GPIO1B_SMT_GPIO1B5_SMT_SHIFT)                   /* 0x00000020 */
#define GRF_GPIO1B_SMT_GPIO1B6_SMT_SHIFT                   (6U)
#define GRF_GPIO1B_SMT_GPIO1B6_SMT_MASK                    (0x1U << GRF_GPIO1B_SMT_GPIO1B6_SMT_SHIFT)                   /* 0x00000040 */
#define GRF_GPIO1B_SMT_GPIO1B7_SMT_SHIFT                   (7U)
#define GRF_GPIO1B_SMT_GPIO1B7_SMT_MASK                    (0x1U << GRF_GPIO1B_SMT_GPIO1B7_SMT_SHIFT)                   /* 0x00000080 */
/* GPIO1C_SMT */
#define GRF_GPIO1C_SMT_OFFSET                              (0x10190U)
#define GRF_GPIO1C_SMT_GPIO1C0_SMT_SHIFT                   (0U)
#define GRF_GPIO1C_SMT_GPIO1C0_SMT_MASK                    (0x1U << GRF_GPIO1C_SMT_GPIO1C0_SMT_SHIFT)                   /* 0x00000001 */
#define GRF_GPIO1C_SMT_GPIO1C1_SMT_SHIFT                   (1U)
#define GRF_GPIO1C_SMT_GPIO1C1_SMT_MASK                    (0x1U << GRF_GPIO1C_SMT_GPIO1C1_SMT_SHIFT)                   /* 0x00000002 */
#define GRF_GPIO1C_SMT_GPIO1C2_SMT_SHIFT                   (2U)
#define GRF_GPIO1C_SMT_GPIO1C2_SMT_MASK                    (0x1U << GRF_GPIO1C_SMT_GPIO1C2_SMT_SHIFT)                   /* 0x00000004 */
#define GRF_GPIO1C_SMT_GPIO1C3_SMT_SHIFT                   (3U)
#define GRF_GPIO1C_SMT_GPIO1C3_SMT_MASK                    (0x1U << GRF_GPIO1C_SMT_GPIO1C3_SMT_SHIFT)                   /* 0x00000008 */
#define GRF_GPIO1C_SMT_GPIO1C4_SMT_SHIFT                   (4U)
#define GRF_GPIO1C_SMT_GPIO1C4_SMT_MASK                    (0x1U << GRF_GPIO1C_SMT_GPIO1C4_SMT_SHIFT)                   /* 0x00000010 */
#define GRF_GPIO1C_SMT_GPIO1C5_SMT_SHIFT                   (5U)
#define GRF_GPIO1C_SMT_GPIO1C5_SMT_MASK                    (0x1U << GRF_GPIO1C_SMT_GPIO1C5_SMT_SHIFT)                   /* 0x00000020 */
#define GRF_GPIO1C_SMT_GPIO1C6_SMT_SHIFT                   (6U)
#define GRF_GPIO1C_SMT_GPIO1C6_SMT_MASK                    (0x1U << GRF_GPIO1C_SMT_GPIO1C6_SMT_SHIFT)                   /* 0x00000040 */
#define GRF_GPIO1C_SMT_GPIO1C7_SMT_SHIFT                   (7U)
#define GRF_GPIO1C_SMT_GPIO1C7_SMT_MASK                    (0x1U << GRF_GPIO1C_SMT_GPIO1C7_SMT_SHIFT)                   /* 0x00000080 */
/* GPIO1D_SMT */
#define GRF_GPIO1D_SMT_OFFSET                              (0x10194U)
#define GRF_GPIO1D_SMT_GPIO1D0_SMT_SHIFT                   (0U)
#define GRF_GPIO1D_SMT_GPIO1D0_SMT_MASK                    (0x1U << GRF_GPIO1D_SMT_GPIO1D0_SMT_SHIFT)                   /* 0x00000001 */
#define GRF_GPIO1D_SMT_GPIO1D1_SMT_SHIFT                   (1U)
#define GRF_GPIO1D_SMT_GPIO1D1_SMT_MASK                    (0x1U << GRF_GPIO1D_SMT_GPIO1D1_SMT_SHIFT)                   /* 0x00000002 */
#define GRF_GPIO1D_SMT_GPIO1D2_SMT_SHIFT                   (2U)
#define GRF_GPIO1D_SMT_GPIO1D2_SMT_MASK                    (0x1U << GRF_GPIO1D_SMT_GPIO1D2_SMT_SHIFT)                   /* 0x00000004 */
#define GRF_GPIO1D_SMT_GPIO1D3_SMT_SHIFT                   (3U)
#define GRF_GPIO1D_SMT_GPIO1D3_SMT_MASK                    (0x1U << GRF_GPIO1D_SMT_GPIO1D3_SMT_SHIFT)                   /* 0x00000008 */
#define GRF_GPIO1D_SMT_GPIO1D4_SMT_SHIFT                   (4U)
#define GRF_GPIO1D_SMT_GPIO1D4_SMT_MASK                    (0x1U << GRF_GPIO1D_SMT_GPIO1D4_SMT_SHIFT)                   /* 0x00000010 */
#define GRF_GPIO1D_SMT_GPIO1D5_SMT_SHIFT                   (5U)
#define GRF_GPIO1D_SMT_GPIO1D5_SMT_MASK                    (0x1U << GRF_GPIO1D_SMT_GPIO1D5_SMT_SHIFT)                   /* 0x00000020 */
#define GRF_GPIO1D_SMT_GPIO1D6_SMT_SHIFT                   (6U)
#define GRF_GPIO1D_SMT_GPIO1D6_SMT_MASK                    (0x1U << GRF_GPIO1D_SMT_GPIO1D6_SMT_SHIFT)                   /* 0x00000040 */
#define GRF_GPIO1D_SMT_GPIO1D7_SMT_SHIFT                   (7U)
#define GRF_GPIO1D_SMT_GPIO1D7_SMT_MASK                    (0x1U << GRF_GPIO1D_SMT_GPIO1D7_SMT_SHIFT)                   /* 0x00000080 */
/* GPIO2A_SMT */
#define GRF_GPIO2A_SMT_OFFSET                              (0x10198U)
#define GRF_GPIO2A_SMT_GPIO2A0_SMT_SHIFT                   (0U)
#define GRF_GPIO2A_SMT_GPIO2A0_SMT_MASK                    (0x1U << GRF_GPIO2A_SMT_GPIO2A0_SMT_SHIFT)                   /* 0x00000001 */
#define GRF_GPIO2A_SMT_GPIO2A1_SMT_SHIFT                   (1U)
#define GRF_GPIO2A_SMT_GPIO2A1_SMT_MASK                    (0x1U << GRF_GPIO2A_SMT_GPIO2A1_SMT_SHIFT)                   /* 0x00000002 */
#define GRF_GPIO2A_SMT_GPIO2A2_SMT_SHIFT                   (2U)
#define GRF_GPIO2A_SMT_GPIO2A2_SMT_MASK                    (0x1U << GRF_GPIO2A_SMT_GPIO2A2_SMT_SHIFT)                   /* 0x00000004 */
#define GRF_GPIO2A_SMT_GPIO2A3_SMT_SHIFT                   (3U)
#define GRF_GPIO2A_SMT_GPIO2A3_SMT_MASK                    (0x1U << GRF_GPIO2A_SMT_GPIO2A3_SMT_SHIFT)                   /* 0x00000008 */
#define GRF_GPIO2A_SMT_GPIO2A4_SMT_SHIFT                   (4U)
#define GRF_GPIO2A_SMT_GPIO2A4_SMT_MASK                    (0x1U << GRF_GPIO2A_SMT_GPIO2A4_SMT_SHIFT)                   /* 0x00000010 */
#define GRF_GPIO2A_SMT_GPIO2A5_SMT_SHIFT                   (5U)
#define GRF_GPIO2A_SMT_GPIO2A5_SMT_MASK                    (0x1U << GRF_GPIO2A_SMT_GPIO2A5_SMT_SHIFT)                   /* 0x00000020 */
#define GRF_GPIO2A_SMT_GPIO2A6_SMT_SHIFT                   (6U)
#define GRF_GPIO2A_SMT_GPIO2A6_SMT_MASK                    (0x1U << GRF_GPIO2A_SMT_GPIO2A6_SMT_SHIFT)                   /* 0x00000040 */
#define GRF_GPIO2A_SMT_GPIO2A7_SMT_SHIFT                   (7U)
#define GRF_GPIO2A_SMT_GPIO2A7_SMT_MASK                    (0x1U << GRF_GPIO2A_SMT_GPIO2A7_SMT_SHIFT)                   /* 0x00000080 */
/* GPIO2B_SMT */
#define GRF_GPIO2B_SMT_OFFSET                              (0x1019CU)
#define GRF_GPIO2B_SMT_GPIO2B0_SMT_SHIFT                   (0U)
#define GRF_GPIO2B_SMT_GPIO2B0_SMT_MASK                    (0x1U << GRF_GPIO2B_SMT_GPIO2B0_SMT_SHIFT)                   /* 0x00000001 */
#define GRF_GPIO2B_SMT_GPIO2B1_SMT_SHIFT                   (1U)
#define GRF_GPIO2B_SMT_GPIO2B1_SMT_MASK                    (0x1U << GRF_GPIO2B_SMT_GPIO2B1_SMT_SHIFT)                   /* 0x00000002 */
#define GRF_GPIO2B_SMT_GPIO2B2_SMT_SHIFT                   (2U)
#define GRF_GPIO2B_SMT_GPIO2B2_SMT_MASK                    (0x1U << GRF_GPIO2B_SMT_GPIO2B2_SMT_SHIFT)                   /* 0x00000004 */
#define GRF_GPIO2B_SMT_GPIO2B3_SMT_SHIFT                   (3U)
#define GRF_GPIO2B_SMT_GPIO2B3_SMT_MASK                    (0x1U << GRF_GPIO2B_SMT_GPIO2B3_SMT_SHIFT)                   /* 0x00000008 */
#define GRF_GPIO2B_SMT_GPIO2B4_SMT_SHIFT                   (4U)
#define GRF_GPIO2B_SMT_GPIO2B4_SMT_MASK                    (0x1U << GRF_GPIO2B_SMT_GPIO2B4_SMT_SHIFT)                   /* 0x00000010 */
#define GRF_GPIO2B_SMT_GPIO2B5_SMT_SHIFT                   (5U)
#define GRF_GPIO2B_SMT_GPIO2B5_SMT_MASK                    (0x1U << GRF_GPIO2B_SMT_GPIO2B5_SMT_SHIFT)                   /* 0x00000020 */
#define GRF_GPIO2B_SMT_GPIO2B6_SMT_SHIFT                   (6U)
#define GRF_GPIO2B_SMT_GPIO2B6_SMT_MASK                    (0x1U << GRF_GPIO2B_SMT_GPIO2B6_SMT_SHIFT)                   /* 0x00000040 */
#define GRF_GPIO2B_SMT_GPIO2B7_SMT_SHIFT                   (7U)
#define GRF_GPIO2B_SMT_GPIO2B7_SMT_MASK                    (0x1U << GRF_GPIO2B_SMT_GPIO2B7_SMT_SHIFT)                   /* 0x00000080 */
/* GPIO2C_SMT */
#define GRF_GPIO2C_SMT_OFFSET                              (0x101A0U)
#define GRF_GPIO2C_SMT_GPIO2C0_SMT_SHIFT                   (0U)
#define GRF_GPIO2C_SMT_GPIO2C0_SMT_MASK                    (0x1U << GRF_GPIO2C_SMT_GPIO2C0_SMT_SHIFT)                   /* 0x00000001 */
#define GRF_GPIO2C_SMT_GPIO2C1_SMT_SHIFT                   (1U)
#define GRF_GPIO2C_SMT_GPIO2C1_SMT_MASK                    (0x1U << GRF_GPIO2C_SMT_GPIO2C1_SMT_SHIFT)                   /* 0x00000002 */
#define GRF_GPIO2C_SMT_GPIO2C2_SMT_SHIFT                   (2U)
#define GRF_GPIO2C_SMT_GPIO2C2_SMT_MASK                    (0x1U << GRF_GPIO2C_SMT_GPIO2C2_SMT_SHIFT)                   /* 0x00000004 */
#define GRF_GPIO2C_SMT_GPIO2C3_SMT_SHIFT                   (3U)
#define GRF_GPIO2C_SMT_GPIO2C3_SMT_MASK                    (0x1U << GRF_GPIO2C_SMT_GPIO2C3_SMT_SHIFT)                   /* 0x00000008 */
#define GRF_GPIO2C_SMT_GPIO2C4_SMT_SHIFT                   (4U)
#define GRF_GPIO2C_SMT_GPIO2C4_SMT_MASK                    (0x1U << GRF_GPIO2C_SMT_GPIO2C4_SMT_SHIFT)                   /* 0x00000010 */
#define GRF_GPIO2C_SMT_GPIO2C5_SMT_SHIFT                   (5U)
#define GRF_GPIO2C_SMT_GPIO2C5_SMT_MASK                    (0x1U << GRF_GPIO2C_SMT_GPIO2C5_SMT_SHIFT)                   /* 0x00000020 */
#define GRF_GPIO2C_SMT_GPIO2C6_SMT_SHIFT                   (6U)
#define GRF_GPIO2C_SMT_GPIO2C6_SMT_MASK                    (0x1U << GRF_GPIO2C_SMT_GPIO2C6_SMT_SHIFT)                   /* 0x00000040 */
#define GRF_GPIO2C_SMT_GPIO2C7_SMT_SHIFT                   (7U)
#define GRF_GPIO2C_SMT_GPIO2C7_SMT_MASK                    (0x1U << GRF_GPIO2C_SMT_GPIO2C7_SMT_SHIFT)                   /* 0x00000080 */
/* GPIO2D_SMT */
#define GRF_GPIO2D_SMT_OFFSET                              (0x101A4U)
#define GRF_GPIO2D_SMT_GPIO2D0_SMT_SHIFT                   (0U)
#define GRF_GPIO2D_SMT_GPIO2D0_SMT_MASK                    (0x1U << GRF_GPIO2D_SMT_GPIO2D0_SMT_SHIFT)                   /* 0x00000001 */
#define GRF_GPIO2D_SMT_GPIO2D1_SMT_SHIFT                   (1U)
#define GRF_GPIO2D_SMT_GPIO2D1_SMT_MASK                    (0x1U << GRF_GPIO2D_SMT_GPIO2D1_SMT_SHIFT)                   /* 0x00000002 */
#define GRF_GPIO2D_SMT_GPIO2D2_SMT_SHIFT                   (2U)
#define GRF_GPIO2D_SMT_GPIO2D2_SMT_MASK                    (0x1U << GRF_GPIO2D_SMT_GPIO2D2_SMT_SHIFT)                   /* 0x00000004 */
#define GRF_GPIO2D_SMT_GPIO2D3_SMT_SHIFT                   (3U)
#define GRF_GPIO2D_SMT_GPIO2D3_SMT_MASK                    (0x1U << GRF_GPIO2D_SMT_GPIO2D3_SMT_SHIFT)                   /* 0x00000008 */
#define GRF_GPIO2D_SMT_GPIO2D4_SMT_SHIFT                   (4U)
#define GRF_GPIO2D_SMT_GPIO2D4_SMT_MASK                    (0x1U << GRF_GPIO2D_SMT_GPIO2D4_SMT_SHIFT)                   /* 0x00000010 */
#define GRF_GPIO2D_SMT_GPIO2D5_SMT_SHIFT                   (5U)
#define GRF_GPIO2D_SMT_GPIO2D5_SMT_MASK                    (0x1U << GRF_GPIO2D_SMT_GPIO2D5_SMT_SHIFT)                   /* 0x00000020 */
#define GRF_GPIO2D_SMT_GPIO2D6_SMT_SHIFT                   (6U)
#define GRF_GPIO2D_SMT_GPIO2D6_SMT_MASK                    (0x1U << GRF_GPIO2D_SMT_GPIO2D6_SMT_SHIFT)                   /* 0x00000040 */
#define GRF_GPIO2D_SMT_GPIO2D7_SMT_SHIFT                   (7U)
#define GRF_GPIO2D_SMT_GPIO2D7_SMT_MASK                    (0x1U << GRF_GPIO2D_SMT_GPIO2D7_SMT_SHIFT)                   /* 0x00000080 */
/* GPIO3A_SMT */
#define GRF_GPIO3A_SMT_OFFSET                              (0x101A8U)
#define GRF_GPIO3A_SMT_GPIO3A0_SMT_SHIFT                   (0U)
#define GRF_GPIO3A_SMT_GPIO3A0_SMT_MASK                    (0x1U << GRF_GPIO3A_SMT_GPIO3A0_SMT_SHIFT)                   /* 0x00000001 */
#define GRF_GPIO3A_SMT_GPIO3A1_SMT_SHIFT                   (1U)
#define GRF_GPIO3A_SMT_GPIO3A1_SMT_MASK                    (0x1U << GRF_GPIO3A_SMT_GPIO3A1_SMT_SHIFT)                   /* 0x00000002 */
#define GRF_GPIO3A_SMT_GPIO3A2_SMT_SHIFT                   (2U)
#define GRF_GPIO3A_SMT_GPIO3A2_SMT_MASK                    (0x1U << GRF_GPIO3A_SMT_GPIO3A2_SMT_SHIFT)                   /* 0x00000004 */
#define GRF_GPIO3A_SMT_GPIO3A3_SMT_SHIFT                   (3U)
#define GRF_GPIO3A_SMT_GPIO3A3_SMT_MASK                    (0x1U << GRF_GPIO3A_SMT_GPIO3A3_SMT_SHIFT)                   /* 0x00000008 */
#define GRF_GPIO3A_SMT_GPIO3A4_SMT_SHIFT                   (4U)
#define GRF_GPIO3A_SMT_GPIO3A4_SMT_MASK                    (0x1U << GRF_GPIO3A_SMT_GPIO3A4_SMT_SHIFT)                   /* 0x00000010 */
#define GRF_GPIO3A_SMT_GPIO3A5_SMT_SHIFT                   (5U)
#define GRF_GPIO3A_SMT_GPIO3A5_SMT_MASK                    (0x1U << GRF_GPIO3A_SMT_GPIO3A5_SMT_SHIFT)                   /* 0x00000020 */
#define GRF_GPIO3A_SMT_GPIO3A6_SMT_SHIFT                   (6U)
#define GRF_GPIO3A_SMT_GPIO3A6_SMT_MASK                    (0x1U << GRF_GPIO3A_SMT_GPIO3A6_SMT_SHIFT)                   /* 0x00000040 */
#define GRF_GPIO3A_SMT_GPIO3A7_SMT_SHIFT                   (7U)
#define GRF_GPIO3A_SMT_GPIO3A7_SMT_MASK                    (0x1U << GRF_GPIO3A_SMT_GPIO3A7_SMT_SHIFT)                   /* 0x00000080 */
/* GPIO3B_SMT */
#define GRF_GPIO3B_SMT_OFFSET                              (0x101ACU)
#define GRF_GPIO3B_SMT_GPIO3B0_SMT_SHIFT                   (0U)
#define GRF_GPIO3B_SMT_GPIO3B0_SMT_MASK                    (0x1U << GRF_GPIO3B_SMT_GPIO3B0_SMT_SHIFT)                   /* 0x00000001 */
#define GRF_GPIO3B_SMT_GPIO3B1_SMT_SHIFT                   (1U)
#define GRF_GPIO3B_SMT_GPIO3B1_SMT_MASK                    (0x1U << GRF_GPIO3B_SMT_GPIO3B1_SMT_SHIFT)                   /* 0x00000002 */
#define GRF_GPIO3B_SMT_GPIO3B2_SMT_SHIFT                   (2U)
#define GRF_GPIO3B_SMT_GPIO3B2_SMT_MASK                    (0x1U << GRF_GPIO3B_SMT_GPIO3B2_SMT_SHIFT)                   /* 0x00000004 */
#define GRF_GPIO3B_SMT_GPIO3B3_SMT_SHIFT                   (3U)
#define GRF_GPIO3B_SMT_GPIO3B3_SMT_MASK                    (0x1U << GRF_GPIO3B_SMT_GPIO3B3_SMT_SHIFT)                   /* 0x00000008 */
#define GRF_GPIO3B_SMT_GPIO3B4_SMT_SHIFT                   (4U)
#define GRF_GPIO3B_SMT_GPIO3B4_SMT_MASK                    (0x1U << GRF_GPIO3B_SMT_GPIO3B4_SMT_SHIFT)                   /* 0x00000010 */
#define GRF_GPIO3B_SMT_GPIO3B5_SMT_SHIFT                   (5U)
#define GRF_GPIO3B_SMT_GPIO3B5_SMT_MASK                    (0x1U << GRF_GPIO3B_SMT_GPIO3B5_SMT_SHIFT)                   /* 0x00000020 */
#define GRF_GPIO3B_SMT_GPIO3B6_SMT_SHIFT                   (6U)
#define GRF_GPIO3B_SMT_GPIO3B6_SMT_MASK                    (0x1U << GRF_GPIO3B_SMT_GPIO3B6_SMT_SHIFT)                   /* 0x00000040 */
#define GRF_GPIO3B_SMT_GPIO3B7_SMT_SHIFT                   (7U)
#define GRF_GPIO3B_SMT_GPIO3B7_SMT_MASK                    (0x1U << GRF_GPIO3B_SMT_GPIO3B7_SMT_SHIFT)                   /* 0x00000080 */
/* GPIO3C_SMT */
#define GRF_GPIO3C_SMT_OFFSET                              (0x101B0U)
#define GRF_GPIO3C_SMT_GPIO3C0_SMT_SHIFT                   (0U)
#define GRF_GPIO3C_SMT_GPIO3C0_SMT_MASK                    (0x1U << GRF_GPIO3C_SMT_GPIO3C0_SMT_SHIFT)                   /* 0x00000001 */
#define GRF_GPIO3C_SMT_GPIO3C1_SMT_SHIFT                   (1U)
#define GRF_GPIO3C_SMT_GPIO3C1_SMT_MASK                    (0x1U << GRF_GPIO3C_SMT_GPIO3C1_SMT_SHIFT)                   /* 0x00000002 */
#define GRF_GPIO3C_SMT_GPIO3C2_SMT_SHIFT                   (2U)
#define GRF_GPIO3C_SMT_GPIO3C2_SMT_MASK                    (0x1U << GRF_GPIO3C_SMT_GPIO3C2_SMT_SHIFT)                   /* 0x00000004 */
#define GRF_GPIO3C_SMT_GPIO3C3_SMT_SHIFT                   (3U)
#define GRF_GPIO3C_SMT_GPIO3C3_SMT_MASK                    (0x1U << GRF_GPIO3C_SMT_GPIO3C3_SMT_SHIFT)                   /* 0x00000008 */
#define GRF_GPIO3C_SMT_GPIO3C4_SMT_SHIFT                   (4U)
#define GRF_GPIO3C_SMT_GPIO3C4_SMT_MASK                    (0x1U << GRF_GPIO3C_SMT_GPIO3C4_SMT_SHIFT)                   /* 0x00000010 */
#define GRF_GPIO3C_SMT_GPIO3C5_SMT_SHIFT                   (5U)
#define GRF_GPIO3C_SMT_GPIO3C5_SMT_MASK                    (0x1U << GRF_GPIO3C_SMT_GPIO3C5_SMT_SHIFT)                   /* 0x00000020 */
#define GRF_GPIO3C_SMT_GPIO3C6_SMT_SHIFT                   (6U)
#define GRF_GPIO3C_SMT_GPIO3C6_SMT_MASK                    (0x1U << GRF_GPIO3C_SMT_GPIO3C6_SMT_SHIFT)                   /* 0x00000040 */
#define GRF_GPIO3C_SMT_GPIO3C7_SMT_SHIFT                   (7U)
#define GRF_GPIO3C_SMT_GPIO3C7_SMT_MASK                    (0x1U << GRF_GPIO3C_SMT_GPIO3C7_SMT_SHIFT)                   /* 0x00000080 */
/* GPIO3D_SMT */
#define GRF_GPIO3D_SMT_OFFSET                              (0x101B4U)
#define GRF_GPIO3D_SMT_GPIO3D0_SMT_SHIFT                   (0U)
#define GRF_GPIO3D_SMT_GPIO3D0_SMT_MASK                    (0x1U << GRF_GPIO3D_SMT_GPIO3D0_SMT_SHIFT)                   /* 0x00000001 */
#define GRF_GPIO3D_SMT_GPIO3D1_SMT_SHIFT                   (1U)
#define GRF_GPIO3D_SMT_GPIO3D1_SMT_MASK                    (0x1U << GRF_GPIO3D_SMT_GPIO3D1_SMT_SHIFT)                   /* 0x00000002 */
#define GRF_GPIO3D_SMT_GPIO3D2_SMT_SHIFT                   (2U)
#define GRF_GPIO3D_SMT_GPIO3D2_SMT_MASK                    (0x1U << GRF_GPIO3D_SMT_GPIO3D2_SMT_SHIFT)                   /* 0x00000004 */
#define GRF_GPIO3D_SMT_GPIO3D3_SMT_SHIFT                   (3U)
#define GRF_GPIO3D_SMT_GPIO3D3_SMT_MASK                    (0x1U << GRF_GPIO3D_SMT_GPIO3D3_SMT_SHIFT)                   /* 0x00000008 */
#define GRF_GPIO3D_SMT_GPIO3D4_SMT_SHIFT                   (4U)
#define GRF_GPIO3D_SMT_GPIO3D4_SMT_MASK                    (0x1U << GRF_GPIO3D_SMT_GPIO3D4_SMT_SHIFT)                   /* 0x00000010 */
#define GRF_GPIO3D_SMT_GPIO3D5_SMT_SHIFT                   (5U)
#define GRF_GPIO3D_SMT_GPIO3D5_SMT_MASK                    (0x1U << GRF_GPIO3D_SMT_GPIO3D5_SMT_SHIFT)                   /* 0x00000020 */
#define GRF_GPIO3D_SMT_GPIO3D6_SMT_SHIFT                   (6U)
#define GRF_GPIO3D_SMT_GPIO3D6_SMT_MASK                    (0x1U << GRF_GPIO3D_SMT_GPIO3D6_SMT_SHIFT)                   /* 0x00000040 */
#define GRF_GPIO3D_SMT_GPIO3D7_SMT_SHIFT                   (7U)
#define GRF_GPIO3D_SMT_GPIO3D7_SMT_MASK                    (0x1U << GRF_GPIO3D_SMT_GPIO3D7_SMT_SHIFT)                   /* 0x00000080 */
/* GPIO4A_SMT */
#define GRF_GPIO4A_SMT_OFFSET                              (0x101B8U)
#define GRF_GPIO4A_SMT_GPIO4A0_SMT_SHIFT                   (0U)
#define GRF_GPIO4A_SMT_GPIO4A0_SMT_MASK                    (0x1U << GRF_GPIO4A_SMT_GPIO4A0_SMT_SHIFT)                   /* 0x00000001 */
#define GRF_GPIO4A_SMT_GPIO4A1_SMT_SHIFT                   (1U)
#define GRF_GPIO4A_SMT_GPIO4A1_SMT_MASK                    (0x1U << GRF_GPIO4A_SMT_GPIO4A1_SMT_SHIFT)                   /* 0x00000002 */
/* CSIPHY0_CON */
#define GRF_CSIPHY0_CON_OFFSET                             (0x10200U)
#define GRF_CSIPHY0_CON_CSIPHY0_FORCERXMODE_0_SHIFT        (0U)
#define GRF_CSIPHY0_CON_CSIPHY0_FORCERXMODE_0_MASK         (0x1U << GRF_CSIPHY0_CON_CSIPHY0_FORCERXMODE_0_SHIFT)        /* 0x00000001 */
#define GRF_CSIPHY0_CON_CSIPHY0_FORCERXMODE_1_SHIFT        (1U)
#define GRF_CSIPHY0_CON_CSIPHY0_FORCERXMODE_1_MASK         (0x1U << GRF_CSIPHY0_CON_CSIPHY0_FORCERXMODE_1_SHIFT)        /* 0x00000002 */
#define GRF_CSIPHY0_CON_CSIPHY0_FORCERXMODE_2_SHIFT        (2U)
#define GRF_CSIPHY0_CON_CSIPHY0_FORCERXMODE_2_MASK         (0x1U << GRF_CSIPHY0_CON_CSIPHY0_FORCERXMODE_2_SHIFT)        /* 0x00000004 */
#define GRF_CSIPHY0_CON_CSIPHY0_FORCERXMODE_3_SHIFT        (3U)
#define GRF_CSIPHY0_CON_CSIPHY0_FORCERXMODE_3_MASK         (0x1U << GRF_CSIPHY0_CON_CSIPHY0_FORCERXMODE_3_SHIFT)        /* 0x00000008 */
#define GRF_CSIPHY0_CON_CSIPHY0_ENABLE_DAT_0_SHIFT         (4U)
#define GRF_CSIPHY0_CON_CSIPHY0_ENABLE_DAT_0_MASK          (0x1U << GRF_CSIPHY0_CON_CSIPHY0_ENABLE_DAT_0_SHIFT)         /* 0x00000010 */
#define GRF_CSIPHY0_CON_CSIPHY0_ENABLE_DAT_1_SHIFT         (5U)
#define GRF_CSIPHY0_CON_CSIPHY0_ENABLE_DAT_1_MASK          (0x1U << GRF_CSIPHY0_CON_CSIPHY0_ENABLE_DAT_1_SHIFT)         /* 0x00000020 */
#define GRF_CSIPHY0_CON_CSIPHY0_ENABLE_DAT_2_SHIFT         (6U)
#define GRF_CSIPHY0_CON_CSIPHY0_ENABLE_DAT_2_MASK          (0x1U << GRF_CSIPHY0_CON_CSIPHY0_ENABLE_DAT_2_SHIFT)         /* 0x00000040 */
#define GRF_CSIPHY0_CON_CSIPHY0_ENABLE_DAT_3_SHIFT         (7U)
#define GRF_CSIPHY0_CON_CSIPHY0_ENABLE_DAT_3_MASK          (0x1U << GRF_CSIPHY0_CON_CSIPHY0_ENABLE_DAT_3_SHIFT)         /* 0x00000080 */
#define GRF_CSIPHY0_CON_CSIPHY0_CLKLANE_EN_SHIFT           (8U)
#define GRF_CSIPHY0_CON_CSIPHY0_CLKLANE_EN_MASK            (0x1U << GRF_CSIPHY0_CON_CSIPHY0_CLKLANE_EN_SHIFT)           /* 0x00000100 */
#define GRF_CSIPHY0_CON_CSIPHY0_CLK_INV_SHIFT              (9U)
#define GRF_CSIPHY0_CON_CSIPHY0_CLK_INV_MASK               (0x1U << GRF_CSIPHY0_CON_CSIPHY0_CLK_INV_SHIFT)              /* 0x00000200 */
/* CSIPHY0_STATUS */
#define GRF_CSIPHY0_STATUS_OFFSET                          (0x10208U)
#define GRF_CSIPHY0_STATUS_CSIPHY0_ULPSACTIVENOT_0_SHIFT   (0U)
#define GRF_CSIPHY0_STATUS_CSIPHY0_ULPSACTIVENOT_0_MASK    (0x1U << GRF_CSIPHY0_STATUS_CSIPHY0_ULPSACTIVENOT_0_SHIFT)   /* 0x00000001 */
#define GRF_CSIPHY0_STATUS_CSIPHY0_ULPSACTIVENOT_1_SHIFT   (1U)
#define GRF_CSIPHY0_STATUS_CSIPHY0_ULPSACTIVENOT_1_MASK    (0x1U << GRF_CSIPHY0_STATUS_CSIPHY0_ULPSACTIVENOT_1_SHIFT)   /* 0x00000002 */
#define GRF_CSIPHY0_STATUS_CSIPHY0_ULPSACTIVENOT_2_SHIFT   (2U)
#define GRF_CSIPHY0_STATUS_CSIPHY0_ULPSACTIVENOT_2_MASK    (0x1U << GRF_CSIPHY0_STATUS_CSIPHY0_ULPSACTIVENOT_2_SHIFT)   /* 0x00000004 */
#define GRF_CSIPHY0_STATUS_CSIPHY0_ULPSACTIVENOT_3_SHIFT   (3U)
#define GRF_CSIPHY0_STATUS_CSIPHY0_ULPSACTIVENOT_3_MASK    (0x1U << GRF_CSIPHY0_STATUS_CSIPHY0_ULPSACTIVENOT_3_SHIFT)   /* 0x00000008 */
#define GRF_CSIPHY0_STATUS_CSIPHY0_DIRECTION_SHIFT         (4U)
#define GRF_CSIPHY0_STATUS_CSIPHY0_DIRECTION_MASK          (0x1U << GRF_CSIPHY0_STATUS_CSIPHY0_DIRECTION_SHIFT)         /* 0x00000010 */
#define GRF_CSIPHY0_STATUS_CSIPHY0_PIN_RXSKEWCALHS_0_SHIFT (5U)
#define GRF_CSIPHY0_STATUS_CSIPHY0_PIN_RXSKEWCALHS_0_MASK  (0x1U << GRF_CSIPHY0_STATUS_CSIPHY0_PIN_RXSKEWCALHS_0_SHIFT) /* 0x00000020 */
#define GRF_CSIPHY0_STATUS_CSIPHY0_PIN_RXSKEWCALHS_1_SHIFT (6U)
#define GRF_CSIPHY0_STATUS_CSIPHY0_PIN_RXSKEWCALHS_1_MASK  (0x1U << GRF_CSIPHY0_STATUS_CSIPHY0_PIN_RXSKEWCALHS_1_SHIFT) /* 0x00000040 */
#define GRF_CSIPHY0_STATUS_CSIPHY0_PIN_RXSKEWCALHS_2_SHIFT (7U)
#define GRF_CSIPHY0_STATUS_CSIPHY0_PIN_RXSKEWCALHS_2_MASK  (0x1U << GRF_CSIPHY0_STATUS_CSIPHY0_PIN_RXSKEWCALHS_2_SHIFT) /* 0x00000080 */
#define GRF_CSIPHY0_STATUS_CSIPHY0_PIN_RXSKEWCALHS_3_SHIFT (8U)
#define GRF_CSIPHY0_STATUS_CSIPHY0_PIN_RXSKEWCALHS_3_MASK  (0x1U << GRF_CSIPHY0_STATUS_CSIPHY0_PIN_RXSKEWCALHS_3_SHIFT) /* 0x00000100 */
#define GRF_CSIPHY0_STATUS_CSIPHY0_PIN_ERRCONTENTIONLP0_0_SHIFT (9U)
#define GRF_CSIPHY0_STATUS_CSIPHY0_PIN_ERRCONTENTIONLP0_0_MASK (0x1U << GRF_CSIPHY0_STATUS_CSIPHY0_PIN_ERRCONTENTIONLP0_0_SHIFT) /* 0x00000200 */
#define GRF_CSIPHY0_STATUS_CSIPHY0_PIN_ERRCONTENTIONLP1_0_SHIFT (10U)
#define GRF_CSIPHY0_STATUS_CSIPHY0_PIN_ERRCONTENTIONLP1_0_MASK (0x1U << GRF_CSIPHY0_STATUS_CSIPHY0_PIN_ERRCONTENTIONLP1_0_SHIFT) /* 0x00000400 */
/* CSIPHY1_CON */
#define GRF_CSIPHY1_CON_OFFSET                             (0x10210U)
#define GRF_CSIPHY1_CON_CSIPHY1_FORCERXMODE_0_SHIFT        (0U)
#define GRF_CSIPHY1_CON_CSIPHY1_FORCERXMODE_0_MASK         (0x1U << GRF_CSIPHY1_CON_CSIPHY1_FORCERXMODE_0_SHIFT)        /* 0x00000001 */
#define GRF_CSIPHY1_CON_CSIPHY1_FORCERXMODE_1_SHIFT        (1U)
#define GRF_CSIPHY1_CON_CSIPHY1_FORCERXMODE_1_MASK         (0x1U << GRF_CSIPHY1_CON_CSIPHY1_FORCERXMODE_1_SHIFT)        /* 0x00000002 */
#define GRF_CSIPHY1_CON_CSIPHY1_FORCERXMODE_2_SHIFT        (2U)
#define GRF_CSIPHY1_CON_CSIPHY1_FORCERXMODE_2_MASK         (0x1U << GRF_CSIPHY1_CON_CSIPHY1_FORCERXMODE_2_SHIFT)        /* 0x00000004 */
#define GRF_CSIPHY1_CON_CSIPHY1_FORCERXMODE_3_SHIFT        (3U)
#define GRF_CSIPHY1_CON_CSIPHY1_FORCERXMODE_3_MASK         (0x1U << GRF_CSIPHY1_CON_CSIPHY1_FORCERXMODE_3_SHIFT)        /* 0x00000008 */
#define GRF_CSIPHY1_CON_CSIPHY1_ENABLE_DAT_0_SHIFT         (4U)
#define GRF_CSIPHY1_CON_CSIPHY1_ENABLE_DAT_0_MASK          (0x1U << GRF_CSIPHY1_CON_CSIPHY1_ENABLE_DAT_0_SHIFT)         /* 0x00000010 */
#define GRF_CSIPHY1_CON_CSIPHY1_ENABLE_DAT_1_SHIFT         (5U)
#define GRF_CSIPHY1_CON_CSIPHY1_ENABLE_DAT_1_MASK          (0x1U << GRF_CSIPHY1_CON_CSIPHY1_ENABLE_DAT_1_SHIFT)         /* 0x00000020 */
#define GRF_CSIPHY1_CON_CSIPHY1_ENABLE_DAT_2_SHIFT         (6U)
#define GRF_CSIPHY1_CON_CSIPHY1_ENABLE_DAT_2_MASK          (0x1U << GRF_CSIPHY1_CON_CSIPHY1_ENABLE_DAT_2_SHIFT)         /* 0x00000040 */
#define GRF_CSIPHY1_CON_CSIPHY1_ENABLE_DAT_3_SHIFT         (7U)
#define GRF_CSIPHY1_CON_CSIPHY1_ENABLE_DAT_3_MASK          (0x1U << GRF_CSIPHY1_CON_CSIPHY1_ENABLE_DAT_3_SHIFT)         /* 0x00000080 */
#define GRF_CSIPHY1_CON_CSIPHY_CLKLANE_EN_SHIFT            (8U)
#define GRF_CSIPHY1_CON_CSIPHY_CLKLANE_EN_MASK             (0x1U << GRF_CSIPHY1_CON_CSIPHY_CLKLANE_EN_SHIFT)            /* 0x00000100 */
#define GRF_CSIPHY1_CON_CSIPHY_CLK_INV_SHIFT               (9U)
#define GRF_CSIPHY1_CON_CSIPHY_CLK_INV_MASK                (0x1U << GRF_CSIPHY1_CON_CSIPHY_CLK_INV_SHIFT)               /* 0x00000200 */
/* CSIPHY1_STATUS */
#define GRF_CSIPHY1_STATUS_OFFSET                          (0x10218U)
#define GRF_CSIPHY1_STATUS_CSIPHY1_ULPSACTIVENOT_0_SHIFT   (0U)
#define GRF_CSIPHY1_STATUS_CSIPHY1_ULPSACTIVENOT_0_MASK    (0x1U << GRF_CSIPHY1_STATUS_CSIPHY1_ULPSACTIVENOT_0_SHIFT)   /* 0x00000001 */
#define GRF_CSIPHY1_STATUS_CSIPHY1_ULPSACTIVENOT_1_SHIFT   (1U)
#define GRF_CSIPHY1_STATUS_CSIPHY1_ULPSACTIVENOT_1_MASK    (0x1U << GRF_CSIPHY1_STATUS_CSIPHY1_ULPSACTIVENOT_1_SHIFT)   /* 0x00000002 */
#define GRF_CSIPHY1_STATUS_CSIPHY1_ULPSACTIVENOT_2_SHIFT   (2U)
#define GRF_CSIPHY1_STATUS_CSIPHY1_ULPSACTIVENOT_2_MASK    (0x1U << GRF_CSIPHY1_STATUS_CSIPHY1_ULPSACTIVENOT_2_SHIFT)   /* 0x00000004 */
#define GRF_CSIPHY1_STATUS_CSIPHY1_ULPSACTIVENOT_3_SHIFT   (3U)
#define GRF_CSIPHY1_STATUS_CSIPHY1_ULPSACTIVENOT_3_MASK    (0x1U << GRF_CSIPHY1_STATUS_CSIPHY1_ULPSACTIVENOT_3_SHIFT)   /* 0x00000008 */
#define GRF_CSIPHY1_STATUS_CSIPHY1_DIRECTION_SHIFT         (4U)
#define GRF_CSIPHY1_STATUS_CSIPHY1_DIRECTION_MASK          (0x1U << GRF_CSIPHY1_STATUS_CSIPHY1_DIRECTION_SHIFT)         /* 0x00000010 */
#define GRF_CSIPHY1_STATUS_CSIPHY1_PIN_RXSKEWCALHS_0_SHIFT (5U)
#define GRF_CSIPHY1_STATUS_CSIPHY1_PIN_RXSKEWCALHS_0_MASK  (0x1U << GRF_CSIPHY1_STATUS_CSIPHY1_PIN_RXSKEWCALHS_0_SHIFT) /* 0x00000020 */
#define GRF_CSIPHY1_STATUS_CSIPHY1_PIN_RXSKEWCALHS_1_SHIFT (6U)
#define GRF_CSIPHY1_STATUS_CSIPHY1_PIN_RXSKEWCALHS_1_MASK  (0x1U << GRF_CSIPHY1_STATUS_CSIPHY1_PIN_RXSKEWCALHS_1_SHIFT) /* 0x00000040 */
#define GRF_CSIPHY1_STATUS_CSIPHY1_PIN_RXSKEWCALHS_2_SHIFT (7U)
#define GRF_CSIPHY1_STATUS_CSIPHY1_PIN_RXSKEWCALHS_2_MASK  (0x1U << GRF_CSIPHY1_STATUS_CSIPHY1_PIN_RXSKEWCALHS_2_SHIFT) /* 0x00000080 */
#define GRF_CSIPHY1_STATUS_CSIPHY1_PIN_RXSKEWCALHS_3_SHIFT (8U)
#define GRF_CSIPHY1_STATUS_CSIPHY1_PIN_RXSKEWCALHS_3_MASK  (0x1U << GRF_CSIPHY1_STATUS_CSIPHY1_PIN_RXSKEWCALHS_3_SHIFT) /* 0x00000100 */
#define GRF_CSIPHY1_STATUS_CSIPHY1_PIN_ERRCONTENTIONLP0_0_SHIFT (9U)
#define GRF_CSIPHY1_STATUS_CSIPHY1_PIN_ERRCONTENTIONLP0_0_MASK (0x1U << GRF_CSIPHY1_STATUS_CSIPHY1_PIN_ERRCONTENTIONLP0_0_SHIFT) /* 0x00000200 */
#define GRF_CSIPHY1_STATUS_CSIPHY1_PIN_ERRCONTENTIONLP1_0_SHIFT (10U)
#define GRF_CSIPHY1_STATUS_CSIPHY1_PIN_ERRCONTENTIONLP1_0_MASK (0x1U << GRF_CSIPHY1_STATUS_CSIPHY1_PIN_ERRCONTENTIONLP1_0_SHIFT) /* 0x00000400 */
/* DSIPHY_CON */
#define GRF_DSIPHY_CON_OFFSET                              (0x10220U)
#define GRF_DSIPHY_CON_DSIPHY_FORCERXMODE_SHIFT            (0U)
#define GRF_DSIPHY_CON_DSIPHY_FORCERXMODE_MASK             (0x1U << GRF_DSIPHY_CON_DSIPHY_FORCERXMODE_SHIFT)            /* 0x00000001 */
#define GRF_DSIPHY_CON_DSIPHY_LVDS_MODE_SHIFT              (1U)
#define GRF_DSIPHY_CON_DSIPHY_LVDS_MODE_MASK               (0x1U << GRF_DSIPHY_CON_DSIPHY_LVDS_MODE_SHIFT)              /* 0x00000002 */
#define GRF_DSIPHY_CON_DSIPHY_LANE0_TURNDISABLE_SHIFT      (2U)
#define GRF_DSIPHY_CON_DSIPHY_LANE0_TURNDISABLE_MASK       (0x1U << GRF_DSIPHY_CON_DSIPHY_LANE0_TURNDISABLE_SHIFT)      /* 0x00000004 */
#define GRF_DSIPHY_CON_DSIPHY_LANE0_FRCTXSTPM_SHIFT        (4U)
#define GRF_DSIPHY_CON_DSIPHY_LANE0_FRCTXSTPM_MASK         (0x1U << GRF_DSIPHY_CON_DSIPHY_LANE0_FRCTXSTPM_SHIFT)        /* 0x00000010 */
#define GRF_DSIPHY_CON_DSIPHY_LANE1_FRCTXSTPM_SHIFT        (5U)
#define GRF_DSIPHY_CON_DSIPHY_LANE1_FRCTXSTPM_MASK         (0x1U << GRF_DSIPHY_CON_DSIPHY_LANE1_FRCTXSTPM_SHIFT)        /* 0x00000020 */
#define GRF_DSIPHY_CON_DSIPHY_LANE2_FRCTXSTPM_SHIFT        (6U)
#define GRF_DSIPHY_CON_DSIPHY_LANE2_FRCTXSTPM_MASK         (0x1U << GRF_DSIPHY_CON_DSIPHY_LANE2_FRCTXSTPM_SHIFT)        /* 0x00000040 */
#define GRF_DSIPHY_CON_DSIPHY_LANE3_FRCTXSTPM_SHIFT        (7U)
#define GRF_DSIPHY_CON_DSIPHY_LANE3_FRCTXSTPM_MASK         (0x1U << GRF_DSIPHY_CON_DSIPHY_LANE3_FRCTXSTPM_SHIFT)        /* 0x00000080 */
#define GRF_DSIPHY_CON_DSIPHY_TXSKEWCALHS_CK_SHIFT         (11U)
#define GRF_DSIPHY_CON_DSIPHY_TXSKEWCALHS_CK_MASK          (0x1U << GRF_DSIPHY_CON_DSIPHY_TXSKEWCALHS_CK_SHIFT)         /* 0x00000800 */
#define GRF_DSIPHY_CON_DSIPHY_TXSKEWCALHS_0_SHIFT          (12U)
#define GRF_DSIPHY_CON_DSIPHY_TXSKEWCALHS_0_MASK           (0x1U << GRF_DSIPHY_CON_DSIPHY_TXSKEWCALHS_0_SHIFT)          /* 0x00001000 */
#define GRF_DSIPHY_CON_DSIPHY_TXSKEWCALHS_1_SHIFT          (13U)
#define GRF_DSIPHY_CON_DSIPHY_TXSKEWCALHS_1_MASK           (0x1U << GRF_DSIPHY_CON_DSIPHY_TXSKEWCALHS_1_SHIFT)          /* 0x00002000 */
#define GRF_DSIPHY_CON_DSIPHY_TXSKEWCALHS_2_SHIFT          (14U)
#define GRF_DSIPHY_CON_DSIPHY_TXSKEWCALHS_2_MASK           (0x1U << GRF_DSIPHY_CON_DSIPHY_TXSKEWCALHS_2_SHIFT)          /* 0x00004000 */
#define GRF_DSIPHY_CON_DSIPHY_TXSKEWCALHS_3_SHIFT          (15U)
#define GRF_DSIPHY_CON_DSIPHY_TXSKEWCALHS_3_MASK           (0x1U << GRF_DSIPHY_CON_DSIPHY_TXSKEWCALHS_3_SHIFT)          /* 0x00008000 */
/* USBPHY_CON0 */
#define GRF_USBPHY_CON0_OFFSET                             (0x10230U)
#define GRF_USBPHY_CON0_OTGPHY_INPUT_SEL_SHIFT             (0U)
#define GRF_USBPHY_CON0_OTGPHY_INPUT_SEL_MASK              (0x1U << GRF_USBPHY_CON0_OTGPHY_INPUT_SEL_SHIFT)             /* 0x00000001 */
#define GRF_USBPHY_CON0_USBOTG_SUSPEND_N_SHIFT             (1U)
#define GRF_USBPHY_CON0_USBOTG_SUSPEND_N_MASK              (0x1U << GRF_USBPHY_CON0_USBOTG_SUSPEND_N_SHIFT)             /* 0x00000002 */
#define GRF_USBPHY_CON0_USBOTG_OPMODE_SHIFT                (2U)
#define GRF_USBPHY_CON0_USBOTG_OPMODE_MASK                 (0x3U << GRF_USBPHY_CON0_USBOTG_OPMODE_SHIFT)                /* 0x0000000C */
#define GRF_USBPHY_CON0_USBOTG_XCVRSELECT_SHIFT            (4U)
#define GRF_USBPHY_CON0_USBOTG_XCVRSELECT_MASK             (0x3U << GRF_USBPHY_CON0_USBOTG_XCVRSELECT_SHIFT)            /* 0x00000030 */
#define GRF_USBPHY_CON0_USBOTG_TERMSELECT_SHIFT            (6U)
#define GRF_USBPHY_CON0_USBOTG_TERMSELECT_MASK             (0x1U << GRF_USBPHY_CON0_USBOTG_TERMSELECT_SHIFT)            /* 0x00000040 */
#define GRF_USBPHY_CON0_USBOTG_DPPILLDOWN_SHIFT            (7U)
#define GRF_USBPHY_CON0_USBOTG_DPPILLDOWN_MASK             (0x1U << GRF_USBPHY_CON0_USBOTG_DPPILLDOWN_SHIFT)            /* 0x00000080 */
#define GRF_USBPHY_CON0_USBOTG_DMPULLDOWN_SHIFT            (8U)
#define GRF_USBPHY_CON0_USBOTG_DMPULLDOWN_MASK             (0x1U << GRF_USBPHY_CON0_USBOTG_DMPULLDOWN_SHIFT)            /* 0x00000100 */
#define GRF_USBPHY_CON0_USBOTG_UTMI_IDDIG_SEL_SHIFT        (9U)
#define GRF_USBPHY_CON0_USBOTG_UTMI_IDDIG_SEL_MASK         (0x1U << GRF_USBPHY_CON0_USBOTG_UTMI_IDDIG_SEL_SHIFT)        /* 0x00000200 */
#define GRF_USBPHY_CON0_USBOTG_UTMI_IDDIG_SHIFT            (10U)
#define GRF_USBPHY_CON0_USBOTG_UTMI_IDDIG_MASK             (0x1U << GRF_USBPHY_CON0_USBOTG_UTMI_IDDIG_SHIFT)            /* 0x00000400 */
#define GRF_USBPHY_CON0_USBOTG_IDPULUP_SHIFT               (11U)
#define GRF_USBPHY_CON0_USBOTG_IDPULUP_MASK                (0x1U << GRF_USBPHY_CON0_USBOTG_IDPULUP_SHIFT)               /* 0x00000800 */
#define GRF_USBPHY_CON0_USBOTG_CHRGVBUS_SHIFT              (12U)
#define GRF_USBPHY_CON0_USBOTG_CHRGVBUS_MASK               (0x1U << GRF_USBPHY_CON0_USBOTG_CHRGVBUS_SHIFT)              /* 0x00001000 */
#define GRF_USBPHY_CON0_USBOTG_DISCHRGVBUS_SHIFT           (13U)
#define GRF_USBPHY_CON0_USBOTG_DISCHRGVBUS_MASK            (0x1U << GRF_USBPHY_CON0_USBOTG_DISCHRGVBUS_SHIFT)           /* 0x00002000 */
#define GRF_USBPHY_CON0_USBOTG_PLL_EN_SHIFT                (14U)
#define GRF_USBPHY_CON0_USBOTG_PLL_EN_MASK                 (0x1U << GRF_USBPHY_CON0_USBOTG_PLL_EN_SHIFT)                /* 0x00004000 */
#define GRF_USBPHY_CON0_USBOTG_DATA_BUS16_8_SHIFT          (15U)
#define GRF_USBPHY_CON0_USBOTG_DATA_BUS16_8_MASK           (0x1U << GRF_USBPHY_CON0_USBOTG_DATA_BUS16_8_SHIFT)          /* 0x00008000 */
/* USBPHY_CON1 */
#define GRF_USBPHY_CON1_OFFSET                             (0x10234U)
#define GRF_USBPHY_CON1_USBOTG_SUSPEND_N_SEL_SHIFT         (0U)
#define GRF_USBPHY_CON1_USBOTG_SUSPEND_N_SEL_MASK          (0x3U << GRF_USBPHY_CON1_USBOTG_SUSPEND_N_SEL_SHIFT)         /* 0x00000003 */
#define GRF_USBPHY_CON1_USBOTG_SUSPEND_N_1_SHIFT           (2U)
#define GRF_USBPHY_CON1_USBOTG_SUSPEND_N_1_MASK            (0x1U << GRF_USBPHY_CON1_USBOTG_SUSPEND_N_1_SHIFT)           /* 0x00000004 */
#define GRF_USBPHY_CON1_USBOTG_FS_XVER_OWN_SHIFT           (6U)
#define GRF_USBPHY_CON1_USBOTG_FS_XVER_OWN_MASK            (0x1U << GRF_USBPHY_CON1_USBOTG_FS_XVER_OWN_SHIFT)           /* 0x00000040 */
#define GRF_USBPHY_CON1_USBOTG_FS_OE_SHIFT                 (7U)
#define GRF_USBPHY_CON1_USBOTG_FS_OE_MASK                  (0x1U << GRF_USBPHY_CON1_USBOTG_FS_OE_SHIFT)                 /* 0x00000080 */
#define GRF_USBPHY_CON1_USBOTG_FS_DATA_SHIFT               (8U)
#define GRF_USBPHY_CON1_USBOTG_FS_DATA_MASK                (0x1U << GRF_USBPHY_CON1_USBOTG_FS_DATA_SHIFT)               /* 0x00000100 */
#define GRF_USBPHY_CON1_USBOTG_FS_SE0_SHIFT                (9U)
#define GRF_USBPHY_CON1_USBOTG_FS_SE0_MASK                 (0x1U << GRF_USBPHY_CON1_USBOTG_FS_SE0_SHIFT)                /* 0x00000200 */
#define GRF_USBPHY_CON1_USBOTG_SUSPENDM_SHIFT              (10U)
#define GRF_USBPHY_CON1_USBOTG_SUSPENDM_MASK               (0x1U << GRF_USBPHY_CON1_USBOTG_SUSPENDM_SHIFT)              /* 0x00000400 */
#define GRF_USBPHY_CON1_USBOTG_TXBITSTUFF_ENABLE_SHIFT     (11U)
#define GRF_USBPHY_CON1_USBOTG_TXBITSTUFF_ENABLE_MASK      (0x1U << GRF_USBPHY_CON1_USBOTG_TXBITSTUFF_ENABLE_SHIFT)     /* 0x00000800 */
#define GRF_USBPHY_CON1_USBOTG_SUSPENDM_BYPS_SHIFT         (12U)
#define GRF_USBPHY_CON1_USBOTG_SUSPENDM_BYPS_MASK          (0x1U << GRF_USBPHY_CON1_USBOTG_SUSPENDM_BYPS_SHIFT)         /* 0x00001000 */
#define GRF_USBPHY_CON1_USBHOST_SUSPENDM_BYPS_SHIFT        (13U)
#define GRF_USBPHY_CON1_USBHOST_SUSPENDM_BYPS_MASK         (0x1U << GRF_USBPHY_CON1_USBHOST_SUSPENDM_BYPS_SHIFT)        /* 0x00002000 */
#define GRF_USBPHY_CON1_USBOTG_CHG_EN_SHIFT                (14U)
#define GRF_USBPHY_CON1_USBOTG_CHG_EN_MASK                 (0x1U << GRF_USBPHY_CON1_USBOTG_CHG_EN_SHIFT)                /* 0x00004000 */
#define GRF_USBPHY_CON1_USBOTG_CHG_RST_SHIFT               (15U)
#define GRF_USBPHY_CON1_USBOTG_CHG_RST_MASK                (0x1U << GRF_USBPHY_CON1_USBOTG_CHG_RST_SHIFT)               /* 0x00008000 */
/* USBPHY_CON2 */
#define GRF_USBPHY_CON2_OFFSET                             (0x10238U)
#define GRF_USBPHY_CON2_HOSTPHY_INPUT_SEL_SHIFT            (0U)
#define GRF_USBPHY_CON2_HOSTPHY_INPUT_SEL_MASK             (0x1U << GRF_USBPHY_CON2_HOSTPHY_INPUT_SEL_SHIFT)            /* 0x00000001 */
#define GRF_USBPHY_CON2_USBHOST_SUSPEND_N_SHIFT            (1U)
#define GRF_USBPHY_CON2_USBHOST_SUSPEND_N_MASK             (0x1U << GRF_USBPHY_CON2_USBHOST_SUSPEND_N_SHIFT)            /* 0x00000002 */
#define GRF_USBPHY_CON2_USBHOST_OPMODE_SHIFT               (2U)
#define GRF_USBPHY_CON2_USBHOST_OPMODE_MASK                (0x3U << GRF_USBPHY_CON2_USBHOST_OPMODE_SHIFT)               /* 0x0000000C */
#define GRF_USBPHY_CON2_USBHOST_XCVRSELECT_SHIFT           (4U)
#define GRF_USBPHY_CON2_USBHOST_XCVRSELECT_MASK            (0x3U << GRF_USBPHY_CON2_USBHOST_XCVRSELECT_SHIFT)           /* 0x00000030 */
#define GRF_USBPHY_CON2_USBHOST_TERMSELECT_SHIFT           (6U)
#define GRF_USBPHY_CON2_USBHOST_TERMSELECT_MASK            (0x1U << GRF_USBPHY_CON2_USBHOST_TERMSELECT_SHIFT)           /* 0x00000040 */
#define GRF_USBPHY_CON2_USBHOST_CHG_EN_SHIFT               (7U)
#define GRF_USBPHY_CON2_USBHOST_CHG_EN_MASK                (0x1U << GRF_USBPHY_CON2_USBHOST_CHG_EN_SHIFT)               /* 0x00000080 */
#define GRF_USBPHY_CON2_USBHOST_CHG_RST_SHIFT              (8U)
#define GRF_USBPHY_CON2_USBHOST_CHG_RST_MASK               (0x1U << GRF_USBPHY_CON2_USBHOST_CHG_RST_SHIFT)              /* 0x00000100 */
#define GRF_USBPHY_CON2_USBHOST_PLL_EN_SHIFT               (9U)
#define GRF_USBPHY_CON2_USBHOST_PLL_EN_MASK                (0x1U << GRF_USBPHY_CON2_USBHOST_PLL_EN_SHIFT)               /* 0x00000200 */
#define GRF_USBPHY_CON2_USBHOST_DATA_BUS16_8_SHIFT         (10U)
#define GRF_USBPHY_CON2_USBHOST_DATA_BUS16_8_MASK          (0x1U << GRF_USBPHY_CON2_USBHOST_DATA_BUS16_8_SHIFT)         /* 0x00000400 */
#define GRF_USBPHY_CON2_USBHOST_OTG_SUSPENDM_SHIFT         (11U)
#define GRF_USBPHY_CON2_USBHOST_OTG_SUSPENDM_MASK          (0x1U << GRF_USBPHY_CON2_USBHOST_OTG_SUSPENDM_SHIFT)         /* 0x00000800 */
#define GRF_USBPHY_CON2_USBHOST_TXBITSTUFF_ENABLE_SHIFT    (12U)
#define GRF_USBPHY_CON2_USBHOST_TXBITSTUFF_ENABLE_MASK     (0x1U << GRF_USBPHY_CON2_USBHOST_TXBITSTUFF_ENABLE_SHIFT)    /* 0x00001000 */
#define GRF_USBPHY_CON2_USBHOST_CHRGVBUS_SHIFT             (13U)
#define GRF_USBPHY_CON2_USBHOST_CHRGVBUS_MASK              (0x1U << GRF_USBPHY_CON2_USBHOST_CHRGVBUS_SHIFT)             /* 0x00002000 */
#define GRF_USBPHY_CON2_USBHOST_DISCHRGVBUS_SHIFT          (14U)
#define GRF_USBPHY_CON2_USBHOST_DISCHRGVBUS_MASK           (0x1U << GRF_USBPHY_CON2_USBHOST_DISCHRGVBUS_SHIFT)          /* 0x00004000 */
#define GRF_USBPHY_CON2_USBHOST_ID_PULL_UP_SHIFT           (15U)
#define GRF_USBPHY_CON2_USBHOST_ID_PULL_UP_MASK            (0x1U << GRF_USBPHY_CON2_USBHOST_ID_PULL_UP_SHIFT)           /* 0x00008000 */
/* USBPHY_STATUS */
#define GRF_USBPHY_STATUS_OFFSET                           (0x10248U)
#define GRF_USBPHY_STATUS_USBOTG_VPI_SHIFT                 (0U)
#define GRF_USBPHY_STATUS_USBOTG_VPI_MASK                  (0x1U << GRF_USBPHY_STATUS_USBOTG_VPI_SHIFT)                 /* 0x00000001 */
#define GRF_USBPHY_STATUS_USBOTG_VMI_SHIFT                 (1U)
#define GRF_USBPHY_STATUS_USBOTG_VMI_MASK                  (0x1U << GRF_USBPHY_STATUS_USBOTG_VMI_SHIFT)                 /* 0x00000002 */
#define GRF_USBPHY_STATUS_USBOTG_VBUSVALID_SHIFT           (2U)
#define GRF_USBPHY_STATUS_USBOTG_VBUSVALID_MASK            (0x1U << GRF_USBPHY_STATUS_USBOTG_VBUSVALID_SHIFT)           /* 0x00000004 */
#define GRF_USBPHY_STATUS_USBOTG_SESSEND_SHIFT             (3U)
#define GRF_USBPHY_STATUS_USBOTG_SESSEND_MASK              (0x1U << GRF_USBPHY_STATUS_USBOTG_SESSEND_SHIFT)             /* 0x00000008 */
#define GRF_USBPHY_STATUS_USBOTG_LINESTATE_SHIFT           (4U)
#define GRF_USBPHY_STATUS_USBOTG_LINESTATE_MASK            (0x3U << GRF_USBPHY_STATUS_USBOTG_LINESTATE_SHIFT)           /* 0x00000030 */
#define GRF_USBPHY_STATUS_USBOTG_UTMI_IDDIG_SHIFT          (6U)
#define GRF_USBPHY_STATUS_USBOTG_UTMI_IDDIG_MASK           (0x1U << GRF_USBPHY_STATUS_USBOTG_UTMI_IDDIG_SHIFT)          /* 0x00000040 */
#define GRF_USBPHY_STATUS_USBOTG_HOSTDISCONNECT_SHIFT      (7U)
#define GRF_USBPHY_STATUS_USBOTG_HOSTDISCONNECT_MASK       (0x1U << GRF_USBPHY_STATUS_USBOTG_HOSTDISCONNECT_SHIFT)      /* 0x00000080 */
#define GRF_USBPHY_STATUS_USBOTG_FS_XVER_OWN_SHIFT         (8U)
#define GRF_USBPHY_STATUS_USBOTG_FS_XVER_OWN_MASK          (0x1U << GRF_USBPHY_STATUS_USBOTG_FS_XVER_OWN_SHIFT)         /* 0x00000100 */
#define GRF_USBPHY_STATUS_USBOTG_BVALID_SHIFT              (9U)
#define GRF_USBPHY_STATUS_USBOTG_BVALID_MASK               (0x1U << GRF_USBPHY_STATUS_USBOTG_BVALID_SHIFT)              /* 0x00000200 */
#define GRF_USBPHY_STATUS_USBOTG_AVALID_SHIFT              (10U)
#define GRF_USBPHY_STATUS_USBOTG_AVALID_MASK               (0x1U << GRF_USBPHY_STATUS_USBOTG_AVALID_SHIFT)              /* 0x00000400 */
#define GRF_USBPHY_STATUS_USBOTG_PHY_LS_FS_RCV_SHIFT       (11U)
#define GRF_USBPHY_STATUS_USBOTG_PHY_LS_FS_RCV_MASK        (0x1U << GRF_USBPHY_STATUS_USBOTG_PHY_LS_FS_RCV_SHIFT)       /* 0x00000800 */
#define GRF_USBPHY_STATUS_USBOTG_CHG_VALID_SHIFT           (12U)
#define GRF_USBPHY_STATUS_USBOTG_CHG_VALID_MASK            (0x1U << GRF_USBPHY_STATUS_USBOTG_CHG_VALID_SHIFT)           /* 0x00001000 */
#define GRF_USBPHY_STATUS_USBOTG_PHY_CONNECT_SHIFT         (13U)
#define GRF_USBPHY_STATUS_USBOTG_PHY_CONNECT_MASK          (0x1U << GRF_USBPHY_STATUS_USBOTG_PHY_CONNECT_SHIFT)         /* 0x00002000 */
#define GRF_USBPHY_STATUS_USBHOST_VPI_SHIFT                (16U)
#define GRF_USBPHY_STATUS_USBHOST_VPI_MASK                 (0x1U << GRF_USBPHY_STATUS_USBHOST_VPI_SHIFT)                /* 0x00010000 */
#define GRF_USBPHY_STATUS_USBHOST_VMI_SHIFT                (17U)
#define GRF_USBPHY_STATUS_USBHOST_VMI_MASK                 (0x1U << GRF_USBPHY_STATUS_USBHOST_VMI_SHIFT)                /* 0x00020000 */
#define GRF_USBPHY_STATUS_USBHOST_VBUSVALID_SHIFT          (18U)
#define GRF_USBPHY_STATUS_USBHOST_VBUSVALID_MASK           (0x1U << GRF_USBPHY_STATUS_USBHOST_VBUSVALID_SHIFT)          /* 0x00040000 */
#define GRF_USBPHY_STATUS_USBHOST_SESSEND_SHIFT            (19U)
#define GRF_USBPHY_STATUS_USBHOST_SESSEND_MASK             (0x1U << GRF_USBPHY_STATUS_USBHOST_SESSEND_SHIFT)            /* 0x00080000 */
#define GRF_USBPHY_STATUS_USBHOST_LINESTATE_SHIFT          (20U)
#define GRF_USBPHY_STATUS_USBHOST_LINESTATE_MASK           (0x3U << GRF_USBPHY_STATUS_USBHOST_LINESTATE_SHIFT)          /* 0x00300000 */
#define GRF_USBPHY_STATUS_USBHOST_UTMI_IDDIG_SHIFT         (22U)
#define GRF_USBPHY_STATUS_USBHOST_UTMI_IDDIG_MASK          (0x1U << GRF_USBPHY_STATUS_USBHOST_UTMI_IDDIG_SHIFT)         /* 0x00400000 */
#define GRF_USBPHY_STATUS_USBHOST_HOSTDISCONNECT_SHIFT     (23U)
#define GRF_USBPHY_STATUS_USBHOST_HOSTDISCONNECT_MASK      (0x1U << GRF_USBPHY_STATUS_USBHOST_HOSTDISCONNECT_SHIFT)     /* 0x00800000 */
#define GRF_USBPHY_STATUS_USBHOST_BVALID_SHIFT             (25U)
#define GRF_USBPHY_STATUS_USBHOST_BVALID_MASK              (0x1U << GRF_USBPHY_STATUS_USBHOST_BVALID_SHIFT)             /* 0x02000000 */
#define GRF_USBPHY_STATUS_USBHOST_AVALID_SHIFT             (26U)
#define GRF_USBPHY_STATUS_USBHOST_AVALID_MASK              (0x1U << GRF_USBPHY_STATUS_USBHOST_AVALID_SHIFT)             /* 0x04000000 */
#define GRF_USBPHY_STATUS_USBHOST_PHY_LS_FS_RCV_SHIFT      (27U)
#define GRF_USBPHY_STATUS_USBHOST_PHY_LS_FS_RCV_MASK       (0x1U << GRF_USBPHY_STATUS_USBHOST_PHY_LS_FS_RCV_SHIFT)      /* 0x08000000 */
#define GRF_USBPHY_STATUS_USBHOST_CHG_VALID_SHIFT          (28U)
#define GRF_USBPHY_STATUS_USBHOST_CHG_VALID_MASK           (0x1U << GRF_USBPHY_STATUS_USBHOST_CHG_VALID_SHIFT)          /* 0x10000000 */
#define GRF_USBPHY_STATUS_USBHOST_PHY_CONNECT_SHIFT        (29U)
#define GRF_USBPHY_STATUS_USBHOST_PHY_CONNECT_MASK         (0x1U << GRF_USBPHY_STATUS_USBHOST_PHY_CONNECT_SHIFT)        /* 0x20000000 */
/* CIFIO_CON */
#define GRF_CIFIO_CON_OFFSET                               (0x10250U)
#define GRF_CIFIO_CON_CIF_CLK_DELAY_NUM_SHIFT              (0U)
#define GRF_CIFIO_CON_CIF_CLK_DELAY_NUM_MASK               (0xFFU << GRF_CIFIO_CON_CIF_CLK_DELAY_NUM_SHIFT)             /* 0x000000FF */
#define GRF_CIFIO_CON_CIF_DATAPATH_SHIFT                   (8U)
#define GRF_CIFIO_CON_CIF_DATAPATH_MASK                    (0x1U << GRF_CIFIO_CON_CIF_DATAPATH_SHIFT)                   /* 0x00000100 */
#define GRF_CIFIO_CON_CIF_CLK_DELAY_EN_SHIFT               (9U)
#define GRF_CIFIO_CON_CIF_CLK_DELAY_EN_MASK                (0x1U << GRF_CIFIO_CON_CIF_CLK_DELAY_EN_SHIFT)               /* 0x00000200 */
#define GRF_CIFIO_CON_CIF_CLK_INV_SEL_SHIFT                (10U)
#define GRF_CIFIO_CON_CIF_CLK_INV_SEL_MASK                 (0x1U << GRF_CIFIO_CON_CIF_CLK_INV_SEL_SHIFT)                /* 0x00000400 */
/* SDDETFLT_CON */
#define GRF_SDDETFLT_CON_OFFSET                            (0x10254U)
#define GRF_SDDETFLT_CON_SDCARD_DECTN_THRES_SHIFT          (0U)
#define GRF_SDDETFLT_CON_SDCARD_DECTN_THRES_MASK           (0xFFFFFFFFU << GRF_SDDETFLT_CON_SDCARD_DECTN_THRES_SHIFT)   /* 0xFFFFFFFF */
/* UART2RX_LOW_CON */
#define GRF_UART2RX_LOW_CON_OFFSET                         (0x10258U)
#define GRF_UART2RX_LOW_CON_UART2RX_LOW_THRES_SHIFT        (0U)
#define GRF_UART2RX_LOW_CON_UART2RX_LOW_THRES_MASK         (0xFFFFFFFFU << GRF_UART2RX_LOW_CON_UART2RX_LOW_THRES_SHIFT) /* 0xFFFFFFFF */
/* IOFUNC_CON0 */
#define GRF_IOFUNC_CON0_OFFSET                             (0x10260U)
#define GRF_IOFUNC_CON0_I2S0_IOMUX_SEL_SHIFT               (0U)
#define GRF_IOFUNC_CON0_I2S0_IOMUX_SEL_MASK                (0x1U << GRF_IOFUNC_CON0_I2S0_IOMUX_SEL_SHIFT)               /* 0x00000001 */
#define GRF_IOFUNC_CON0_I2S1_IOMUX_SEL_SHIFT               (2U)
#define GRF_IOFUNC_CON0_I2S1_IOMUX_SEL_MASK                (0x3U << GRF_IOFUNC_CON0_I2S1_IOMUX_SEL_SHIFT)               /* 0x0000000C */
#define GRF_IOFUNC_CON0_I2S2_IOMUX_SEL_SHIFT               (4U)
#define GRF_IOFUNC_CON0_I2S2_IOMUX_SEL_MASK                (0x1U << GRF_IOFUNC_CON0_I2S2_IOMUX_SEL_SHIFT)               /* 0x00000010 */
#define GRF_IOFUNC_CON0_I2S0_MCLK_SEL_SHIFT                (9U)
#define GRF_IOFUNC_CON0_I2S0_MCLK_SEL_MASK                 (0x1U << GRF_IOFUNC_CON0_I2S0_MCLK_SEL_SHIFT)                /* 0x00000200 */
#define GRF_IOFUNC_CON0_I2S1_LRCK_SEL_SHIFT                (10U)
#define GRF_IOFUNC_CON0_I2S1_LRCK_SEL_MASK                 (0x1U << GRF_IOFUNC_CON0_I2S1_LRCK_SEL_SHIFT)                /* 0x00000400 */
#define GRF_IOFUNC_CON0_I2S2_LRCK_SEL_SHIFT                (11U)
#define GRF_IOFUNC_CON0_I2S2_LRCK_SEL_MASK                 (0x1U << GRF_IOFUNC_CON0_I2S2_LRCK_SEL_SHIFT)                /* 0x00000800 */
#define GRF_IOFUNC_CON0_PDM_IOMUX_SEL_SHIFT                (12U)
#define GRF_IOFUNC_CON0_PDM_IOMUX_SEL_MASK                 (0x1U << GRF_IOFUNC_CON0_PDM_IOMUX_SEL_SHIFT)                /* 0x00001000 */
#define GRF_IOFUNC_CON0_I2S0_SDI1_OEN_SHIFT                (13U)
#define GRF_IOFUNC_CON0_I2S0_SDI1_OEN_MASK                 (0x1U << GRF_IOFUNC_CON0_I2S0_SDI1_OEN_SHIFT)                /* 0x00002000 */
#define GRF_IOFUNC_CON0_I2S0_SDI2_OEN_SHIFT                (14U)
#define GRF_IOFUNC_CON0_I2S0_SDI2_OEN_MASK                 (0x1U << GRF_IOFUNC_CON0_I2S0_SDI2_OEN_SHIFT)                /* 0x00004000 */
#define GRF_IOFUNC_CON0_I2S0_SDI3_OEN_SHIFT                (15U)
#define GRF_IOFUNC_CON0_I2S0_SDI3_OEN_MASK                 (0x1U << GRF_IOFUNC_CON0_I2S0_SDI3_OEN_SHIFT)                /* 0x00008000 */
/* IOFUNC_CON1 */
#define GRF_IOFUNC_CON1_OFFSET                             (0x10264U)
#define GRF_IOFUNC_CON1_CIF_IOMUX_SEL_SHIFT                (0U)
#define GRF_IOFUNC_CON1_CIF_IOMUX_SEL_MASK                 (0x1U << GRF_IOFUNC_CON1_CIF_IOMUX_SEL_SHIFT)                /* 0x00000001 */
#define GRF_IOFUNC_CON1_I2C1_IOMUX_SEL_SHIFT               (2U)
#define GRF_IOFUNC_CON1_I2C1_IOMUX_SEL_MASK                (0x1U << GRF_IOFUNC_CON1_I2C1_IOMUX_SEL_SHIFT)               /* 0x00000004 */
#define GRF_IOFUNC_CON1_I2C3_IOMUX_SEL_SHIFT               (4U)
#define GRF_IOFUNC_CON1_I2C3_IOMUX_SEL_MASK                (0x3U << GRF_IOFUNC_CON1_I2C3_IOMUX_SEL_SHIFT)               /* 0x00000030 */
#define GRF_IOFUNC_CON1_I2C4_IOMUX_SEL_SHIFT               (6U)
#define GRF_IOFUNC_CON1_I2C4_IOMUX_SEL_MASK                (0x1U << GRF_IOFUNC_CON1_I2C4_IOMUX_SEL_SHIFT)               /* 0x00000040 */
#define GRF_IOFUNC_CON1_I2C5_IOMUX_SEL_SHIFT               (8U)
#define GRF_IOFUNC_CON1_I2C5_IOMUX_SEL_MASK                (0x3U << GRF_IOFUNC_CON1_I2C5_IOMUX_SEL_SHIFT)               /* 0x00000300 */
#define GRF_IOFUNC_CON1_SPI1_IOMUX_SEL_SHIFT               (10U)
#define GRF_IOFUNC_CON1_SPI1_IOMUX_SEL_MASK                (0x3U << GRF_IOFUNC_CON1_SPI1_IOMUX_SEL_SHIFT)               /* 0x00000C00 */
#define GRF_IOFUNC_CON1_GMAC_IOMUX_SEL_SHIFT               (12U)
#define GRF_IOFUNC_CON1_GMAC_IOMUX_SEL_MASK                (0x1U << GRF_IOFUNC_CON1_GMAC_IOMUX_SEL_SHIFT)               /* 0x00001000 */
#define GRF_IOFUNC_CON1_CAN_IOMUX_SEL_SHIFT                (13U)
#define GRF_IOFUNC_CON1_CAN_IOMUX_SEL_MASK                 (0x1U << GRF_IOFUNC_CON1_CAN_IOMUX_SEL_SHIFT)                /* 0x00002000 */
#define GRF_IOFUNC_CON1_JTAG_IOMUX_SEL_SHIFT               (15U)
#define GRF_IOFUNC_CON1_JTAG_IOMUX_SEL_MASK                (0x1U << GRF_IOFUNC_CON1_JTAG_IOMUX_SEL_SHIFT)               /* 0x00008000 */
/* IOFUNC_CON2 */
#define GRF_IOFUNC_CON2_OFFSET                             (0x10268U)
#define GRF_IOFUNC_CON2_PWM8_IOMUX_SEL_SHIFT               (0U)
#define GRF_IOFUNC_CON2_PWM8_IOMUX_SEL_MASK                (0x1U << GRF_IOFUNC_CON2_PWM8_IOMUX_SEL_SHIFT)               /* 0x00000001 */
#define GRF_IOFUNC_CON2_PWM9_IOMUX_SEL_SHIFT               (2U)
#define GRF_IOFUNC_CON2_PWM9_IOMUX_SEL_MASK                (0x1U << GRF_IOFUNC_CON2_PWM9_IOMUX_SEL_SHIFT)               /* 0x00000004 */
#define GRF_IOFUNC_CON2_PWM10_IOMUX_SEL_SHIFT              (4U)
#define GRF_IOFUNC_CON2_PWM10_IOMUX_SEL_MASK               (0x1U << GRF_IOFUNC_CON2_PWM10_IOMUX_SEL_SHIFT)              /* 0x00000010 */
#define GRF_IOFUNC_CON2_PWM11_IOMUX_SEL_SHIFT              (6U)
#define GRF_IOFUNC_CON2_PWM11_IOMUX_SEL_MASK               (0x1U << GRF_IOFUNC_CON2_PWM11_IOMUX_SEL_SHIFT)              /* 0x00000040 */
#define GRF_IOFUNC_CON2_UART2_IOMUX_SEL_SHIFT              (8U)
#define GRF_IOFUNC_CON2_UART2_IOMUX_SEL_MASK               (0x1U << GRF_IOFUNC_CON2_UART2_IOMUX_SEL_SHIFT)              /* 0x00000100 */
#define GRF_IOFUNC_CON2_UART3_IOMUX_SEL_SHIFT              (10U)
#define GRF_IOFUNC_CON2_UART3_IOMUX_SEL_MASK               (0x3U << GRF_IOFUNC_CON2_UART3_IOMUX_SEL_SHIFT)              /* 0x00000C00 */
#define GRF_IOFUNC_CON2_UART4_IOMUX_SEL_SHIFT              (12U)
#define GRF_IOFUNC_CON2_UART4_IOMUX_SEL_MASK               (0x3U << GRF_IOFUNC_CON2_UART4_IOMUX_SEL_SHIFT)              /* 0x00003000 */
#define GRF_IOFUNC_CON2_UART5_IOMUX_SEL_SHIFT              (14U)
#define GRF_IOFUNC_CON2_UART5_IOMUX_SEL_MASK               (0x3U << GRF_IOFUNC_CON2_UART5_IOMUX_SEL_SHIFT)              /* 0x0000C000 */
/* IOFUNC_CON3 */
#define GRF_IOFUNC_CON3_OFFSET                             (0x1026CU)
#define GRF_IOFUNC_CON3_LCDC_BYPASS_SHIFT                  (0U)
#define GRF_IOFUNC_CON3_LCDC_BYPASS_MASK                   (0x1U << GRF_IOFUNC_CON3_LCDC_BYPASS_SHIFT)                  /* 0x00000001 */
#define GRF_IOFUNC_CON3_LCDC_DCLK_INV_SEL_SHIFT            (2U)
#define GRF_IOFUNC_CON3_LCDC_DCLK_INV_SEL_MASK             (0x1U << GRF_IOFUNC_CON3_LCDC_DCLK_INV_SEL_SHIFT)            /* 0x00000004 */
#define GRF_IOFUNC_CON3_FORCE_JTAG_SHIFT                   (4U)
#define GRF_IOFUNC_CON3_FORCE_JTAG_MASK                    (0x1U << GRF_IOFUNC_CON3_FORCE_JTAG_SHIFT)                   /* 0x00000010 */
#define GRF_IOFUNC_CON3_FORCE_JTAG_M1_SHIFT                (5U)
#define GRF_IOFUNC_CON3_FORCE_JTAG_M1_MASK                 (0x1U << GRF_IOFUNC_CON3_FORCE_JTAG_M1_SHIFT)                /* 0x00000020 */
#define GRF_IOFUNC_CON3_CIF_CSIPHY_SEL_SHIFT               (9U)
#define GRF_IOFUNC_CON3_CIF_CSIPHY_SEL_MASK                (0x1U << GRF_IOFUNC_CON3_CIF_CSIPHY_SEL_SHIFT)               /* 0x00000200 */
#define GRF_IOFUNC_CON3_ISP_CSIPHY_SEL_SHIFT               (10U)
#define GRF_IOFUNC_CON3_ISP_CSIPHY_SEL_MASK                (0x1U << GRF_IOFUNC_CON3_ISP_CSIPHY_SEL_SHIFT)               /* 0x00000400 */
#define GRF_IOFUNC_CON3_CIFLITE_CSIPHY_SEL_SHIFT           (11U)
#define GRF_IOFUNC_CON3_CIFLITE_CSIPHY_SEL_MASK            (0x1U << GRF_IOFUNC_CON3_CIFLITE_CSIPHY_SEL_SHIFT)           /* 0x00000800 */
/* USBPHY0_CFG_CON */
#define GRF_USBPHY0_CFG_CON_OFFSET                         (0x10270U)
#define GRF_USBPHY0_CFG_CON_CFG_WREN_SHIFT                 (0U)
#define GRF_USBPHY0_CFG_CON_CFG_WREN_MASK                  (0x1U << GRF_USBPHY0_CFG_CON_CFG_WREN_SHIFT)                 /* 0x00000001 */
#define GRF_USBPHY0_CFG_CON_CFG_RDEN_SHIFT                 (1U)
#define GRF_USBPHY0_CFG_CON_CFG_RDEN_MASK                  (0x1U << GRF_USBPHY0_CFG_CON_CFG_RDEN_SHIFT)                 /* 0x00000002 */
#define GRF_USBPHY0_CFG_CON_SEL_APB_SHIFT                  (2U)
#define GRF_USBPHY0_CFG_CON_SEL_APB_MASK                   (0x1U << GRF_USBPHY0_CFG_CON_SEL_APB_SHIFT)                  /* 0x00000004 */
/* USBPHY0_CFG_ADDRIN */
#define GRF_USBPHY0_CFG_ADDRIN_OFFSET                      (0x10274U)
#define GRF_USBPHY0_CFG_ADDRIN_CFG_ADDR_SHIFT              (0U)
#define GRF_USBPHY0_CFG_ADDRIN_CFG_ADDR_MASK               (0xFFFFU << GRF_USBPHY0_CFG_ADDRIN_CFG_ADDR_SHIFT)           /* 0x0000FFFF */
/* USBPHY0_CFG_ADDROUT */
#define GRF_USBPHY0_CFG_ADDROUT_OFFSET                     (0x10278U)
#define GRF_USBPHY0_CFG_ADDROUT_CFG_ADDR_SHIFT             (0U)
#define GRF_USBPHY0_CFG_ADDROUT_CFG_ADDR_MASK              (0xFFFFU << GRF_USBPHY0_CFG_ADDROUT_CFG_ADDR_SHIFT)          /* 0x0000FFFF */
/* USBPHY0_CFG_DLY_CON */
#define GRF_USBPHY0_CFG_DLY_CON_OFFSET                     (0x1027CU)
#define GRF_USBPHY0_CFG_DLY_CON_RDEN_CNT_SHIFT             (0U)
#define GRF_USBPHY0_CFG_DLY_CON_RDEN_CNT_MASK              (0xFU << GRF_USBPHY0_CFG_DLY_CON_RDEN_CNT_SHIFT)             /* 0x0000000F */
#define GRF_USBPHY0_CFG_DLY_CON_PRDY_CNT_SHIFT             (4U)
#define GRF_USBPHY0_CFG_DLY_CON_PRDY_CNT_MASK              (0xFU << GRF_USBPHY0_CFG_DLY_CON_PRDY_CNT_SHIFT)             /* 0x000000F0 */
/* USBPHY1_CFG_CON */
#define GRF_USBPHY1_CFG_CON_OFFSET                         (0x10280U)
#define GRF_USBPHY1_CFG_CON_CFG_WREN_SHIFT                 (0U)
#define GRF_USBPHY1_CFG_CON_CFG_WREN_MASK                  (0x1U << GRF_USBPHY1_CFG_CON_CFG_WREN_SHIFT)                 /* 0x00000001 */
#define GRF_USBPHY1_CFG_CON_CFG_RDEN_SHIFT                 (1U)
#define GRF_USBPHY1_CFG_CON_CFG_RDEN_MASK                  (0x1U << GRF_USBPHY1_CFG_CON_CFG_RDEN_SHIFT)                 /* 0x00000002 */
#define GRF_USBPHY1_CFG_CON_SEL_APB_SHIFT                  (2U)
#define GRF_USBPHY1_CFG_CON_SEL_APB_MASK                   (0x1U << GRF_USBPHY1_CFG_CON_SEL_APB_SHIFT)                  /* 0x00000004 */
/* USBPHY1_CFG_ADDRIN */
#define GRF_USBPHY1_CFG_ADDRIN_OFFSET                      (0x10284U)
#define GRF_USBPHY1_CFG_ADDRIN_CFG_ADDR_SHIFT              (0U)
#define GRF_USBPHY1_CFG_ADDRIN_CFG_ADDR_MASK               (0xFFFFU << GRF_USBPHY1_CFG_ADDRIN_CFG_ADDR_SHIFT)           /* 0x0000FFFF */
/* USBPHY1_CFG_ADDROUT */
#define GRF_USBPHY1_CFG_ADDROUT_OFFSET                     (0x10288U)
#define GRF_USBPHY1_CFG_ADDROUT_CFG_ADDR_SHIFT             (0U)
#define GRF_USBPHY1_CFG_ADDROUT_CFG_ADDR_MASK              (0xFFFFU << GRF_USBPHY1_CFG_ADDROUT_CFG_ADDR_SHIFT)          /* 0x0000FFFF */
/* USBPHY1_CFG_DLY_CON */
#define GRF_USBPHY1_CFG_DLY_CON_OFFSET                     (0x1028CU)
#define GRF_USBPHY1_CFG_DLY_CON_RDEN_CNT_SHIFT             (0U)
#define GRF_USBPHY1_CFG_DLY_CON_RDEN_CNT_MASK              (0xFU << GRF_USBPHY1_CFG_DLY_CON_RDEN_CNT_SHIFT)             /* 0x0000000F */
#define GRF_USBPHY1_CFG_DLY_CON_PRDY_CNT_SHIFT             (4U)
#define GRF_USBPHY1_CFG_DLY_CON_PRDY_CNT_MASK              (0xFU << GRF_USBPHY1_CFG_DLY_CON_PRDY_CNT_SHIFT)             /* 0x000000F0 */
/* USB_SIG_DETECT_CON */
#define GRF_USB_SIG_DETECT_CON_OFFSET                      (0x10300U)
#define GRF_USB_SIG_DETECT_CON_OTG_LINESTATE_IRQ_EN_SHIFT  (0U)
#define GRF_USB_SIG_DETECT_CON_OTG_LINESTATE_IRQ_EN_MASK   (0x1U << GRF_USB_SIG_DETECT_CON_OTG_LINESTATE_IRQ_EN_SHIFT)  /* 0x00000001 */
#define GRF_USB_SIG_DETECT_CON_HOST_LINESTATE_IRQ_EN_SHIFT (1U)
#define GRF_USB_SIG_DETECT_CON_HOST_LINESTATE_IRQ_EN_MASK  (0x1U << GRF_USB_SIG_DETECT_CON_HOST_LINESTATE_IRQ_EN_SHIFT) /* 0x00000002 */
#define GRF_USB_SIG_DETECT_CON_OTG_BVALID_RISE_IRQ_EN_SHIFT (2U)
#define GRF_USB_SIG_DETECT_CON_OTG_BVALID_RISE_IRQ_EN_MASK (0x1U << GRF_USB_SIG_DETECT_CON_OTG_BVALID_RISE_IRQ_EN_SHIFT) /* 0x00000004 */
#define GRF_USB_SIG_DETECT_CON_OTG_BVALID_FALL_IRQ_EN_SHIFT (3U)
#define GRF_USB_SIG_DETECT_CON_OTG_BVALID_FALL_IRQ_EN_MASK (0x1U << GRF_USB_SIG_DETECT_CON_OTG_BVALID_FALL_IRQ_EN_SHIFT) /* 0x00000008 */
#define GRF_USB_SIG_DETECT_CON_OTG_ID_RISE_IRQ_EN_SHIFT    (4U)
#define GRF_USB_SIG_DETECT_CON_OTG_ID_RISE_IRQ_EN_MASK     (0x1U << GRF_USB_SIG_DETECT_CON_OTG_ID_RISE_IRQ_EN_SHIFT)    /* 0x00000010 */
#define GRF_USB_SIG_DETECT_CON_OTG_ID_FALL_IRQ_EN_SHIFT    (5U)
#define GRF_USB_SIG_DETECT_CON_OTG_ID_FALL_IRQ_EN_MASK     (0x1U << GRF_USB_SIG_DETECT_CON_OTG_ID_FALL_IRQ_EN_SHIFT)    /* 0x00000020 */
#define GRF_USB_SIG_DETECT_CON_OTG_DISCONNECT_RISE_IRQ_EN_SHIFT (6U)
#define GRF_USB_SIG_DETECT_CON_OTG_DISCONNECT_RISE_IRQ_EN_MASK (0x1U << GRF_USB_SIG_DETECT_CON_OTG_DISCONNECT_RISE_IRQ_EN_SHIFT) /* 0x00000040 */
#define GRF_USB_SIG_DETECT_CON_OTG_DISCONNECT_FALL_IRQ_EN_SHIFT (7U)
#define GRF_USB_SIG_DETECT_CON_OTG_DISCONNECT_FALL_IRQ_EN_MASK (0x1U << GRF_USB_SIG_DETECT_CON_OTG_DISCONNECT_FALL_IRQ_EN_SHIFT) /* 0x00000080 */
#define GRF_USB_SIG_DETECT_CON_HOST_DISCONNECT_RISE_IRQ_EN_SHIFT (8U)
#define GRF_USB_SIG_DETECT_CON_HOST_DISCONNECT_RISE_IRQ_EN_MASK (0x1U << GRF_USB_SIG_DETECT_CON_HOST_DISCONNECT_RISE_IRQ_EN_SHIFT) /* 0x00000100 */
#define GRF_USB_SIG_DETECT_CON_HOST_DISCONNECT_FALL_IRQ_EN_SHIFT (9U)
#define GRF_USB_SIG_DETECT_CON_HOST_DISCONNECT_FALL_IRQ_EN_MASK (0x1U << GRF_USB_SIG_DETECT_CON_HOST_DISCONNECT_FALL_IRQ_EN_SHIFT) /* 0x00000200 */
/* USB_SIG_DETECT_STATUS */
#define GRF_USB_SIG_DETECT_STATUS_OFFSET                   (0x10304U)
#define GRF_USB_SIG_DETECT_STATUS_OTG_LINESTATE_IRQ_SHIFT  (0U)
#define GRF_USB_SIG_DETECT_STATUS_OTG_LINESTATE_IRQ_MASK   (0x1U << GRF_USB_SIG_DETECT_STATUS_OTG_LINESTATE_IRQ_SHIFT)  /* 0x00000001 */
#define GRF_USB_SIG_DETECT_STATUS_HOST_LINESTATE_IRQ_SHIFT (1U)
#define GRF_USB_SIG_DETECT_STATUS_HOST_LINESTATE_IRQ_MASK  (0x1U << GRF_USB_SIG_DETECT_STATUS_HOST_LINESTATE_IRQ_SHIFT) /* 0x00000002 */
#define GRF_USB_SIG_DETECT_STATUS_OTG_BVALID_RISE_IRQ_SHIFT (2U)
#define GRF_USB_SIG_DETECT_STATUS_OTG_BVALID_RISE_IRQ_MASK (0x1U << GRF_USB_SIG_DETECT_STATUS_OTG_BVALID_RISE_IRQ_SHIFT) /* 0x00000004 */
#define GRF_USB_SIG_DETECT_STATUS_OTG_BVALID_FALL_IRQ_SHIFT (3U)
#define GRF_USB_SIG_DETECT_STATUS_OTG_BVALID_FALL_IRQ_MASK (0x1U << GRF_USB_SIG_DETECT_STATUS_OTG_BVALID_FALL_IRQ_SHIFT) /* 0x00000008 */
#define GRF_USB_SIG_DETECT_STATUS_OTG_ID_RISE_IRQ_SHIFT    (4U)
#define GRF_USB_SIG_DETECT_STATUS_OTG_ID_RISE_IRQ_MASK     (0x1U << GRF_USB_SIG_DETECT_STATUS_OTG_ID_RISE_IRQ_SHIFT)    /* 0x00000010 */
#define GRF_USB_SIG_DETECT_STATUS_OTG_ID_FALL_IRQ_SHIFT    (5U)
#define GRF_USB_SIG_DETECT_STATUS_OTG_ID_FALL_IRQ_MASK     (0x1U << GRF_USB_SIG_DETECT_STATUS_OTG_ID_FALL_IRQ_SHIFT)    /* 0x00000020 */
#define GRF_USB_SIG_DETECT_STATUS_OTG_DISCONNECT_RISE_IRQ_SHIFT (6U)
#define GRF_USB_SIG_DETECT_STATUS_OTG_DISCONNECT_RISE_IRQ_MASK (0x1U << GRF_USB_SIG_DETECT_STATUS_OTG_DISCONNECT_RISE_IRQ_SHIFT) /* 0x00000040 */
#define GRF_USB_SIG_DETECT_STATUS_OTG_DISCONNECT_FALL_IRQ_SHIFT (7U)
#define GRF_USB_SIG_DETECT_STATUS_OTG_DISCONNECT_FALL_IRQ_MASK (0x1U << GRF_USB_SIG_DETECT_STATUS_OTG_DISCONNECT_FALL_IRQ_SHIFT) /* 0x00000080 */
#define GRF_USB_SIG_DETECT_STATUS_HOST_DISCONNECT_RISE_IRQ_SHIFT (8U)
#define GRF_USB_SIG_DETECT_STATUS_HOST_DISCONNECT_RISE_IRQ_MASK (0x1U << GRF_USB_SIG_DETECT_STATUS_HOST_DISCONNECT_RISE_IRQ_SHIFT) /* 0x00000100 */
#define GRF_USB_SIG_DETECT_STATUS_HOST_DISCONNECT_FALL_IRQ_SHIFT (9U)
#define GRF_USB_SIG_DETECT_STATUS_HOST_DISCONNECT_FALL_IRQ_MASK (0x1U << GRF_USB_SIG_DETECT_STATUS_HOST_DISCONNECT_FALL_IRQ_SHIFT) /* 0x00000200 */
/* USB_SIG_DETECT_CLR */
#define GRF_USB_SIG_DETECT_CLR_OFFSET                      (0x10308U)
#define GRF_USB_SIG_DETECT_CLR_OTG_LINESTATE_IRQ_CLR_SHIFT (0U)
#define GRF_USB_SIG_DETECT_CLR_OTG_LINESTATE_IRQ_CLR_MASK  (0x1U << GRF_USB_SIG_DETECT_CLR_OTG_LINESTATE_IRQ_CLR_SHIFT) /* 0x00000001 */
#define GRF_USB_SIG_DETECT_CLR_HOST_LINESTATE_IRQ_CLR_SHIFT (1U)
#define GRF_USB_SIG_DETECT_CLR_HOST_LINESTATE_IRQ_CLR_MASK (0x1U << GRF_USB_SIG_DETECT_CLR_HOST_LINESTATE_IRQ_CLR_SHIFT) /* 0x00000002 */
#define GRF_USB_SIG_DETECT_CLR_OTG_BVALID_RISE_IRQ_CLR_SHIFT (2U)
#define GRF_USB_SIG_DETECT_CLR_OTG_BVALID_RISE_IRQ_CLR_MASK (0x1U << GRF_USB_SIG_DETECT_CLR_OTG_BVALID_RISE_IRQ_CLR_SHIFT) /* 0x00000004 */
#define GRF_USB_SIG_DETECT_CLR_OTG_BVALID_FALL_IRQ_CLR_SHIFT (3U)
#define GRF_USB_SIG_DETECT_CLR_OTG_BVALID_FALL_IRQ_CLR_MASK (0x1U << GRF_USB_SIG_DETECT_CLR_OTG_BVALID_FALL_IRQ_CLR_SHIFT) /* 0x00000008 */
#define GRF_USB_SIG_DETECT_CLR_OTG_ID_RISE_IRQ_CLR_SHIFT   (4U)
#define GRF_USB_SIG_DETECT_CLR_OTG_ID_RISE_IRQ_CLR_MASK    (0x1U << GRF_USB_SIG_DETECT_CLR_OTG_ID_RISE_IRQ_CLR_SHIFT)   /* 0x00000010 */
#define GRF_USB_SIG_DETECT_CLR_OTG_ID_FALL_IRQ_CLR_SHIFT   (5U)
#define GRF_USB_SIG_DETECT_CLR_OTG_ID_FALL_IRQ_CLR_MASK    (0x1U << GRF_USB_SIG_DETECT_CLR_OTG_ID_FALL_IRQ_CLR_SHIFT)   /* 0x00000020 */
#define GRF_USB_SIG_DETECT_CLR_OTG_DISCONNECT_RISE_IRQ_CLR_SHIFT (6U)
#define GRF_USB_SIG_DETECT_CLR_OTG_DISCONNECT_RISE_IRQ_CLR_MASK (0x1U << GRF_USB_SIG_DETECT_CLR_OTG_DISCONNECT_RISE_IRQ_CLR_SHIFT) /* 0x00000040 */
#define GRF_USB_SIG_DETECT_CLR_OTG_DISCONNECT_FALL_IRQ_CLR_SHIFT (7U)
#define GRF_USB_SIG_DETECT_CLR_OTG_DISCONNECT_FALL_IRQ_CLR_MASK (0x1U << GRF_USB_SIG_DETECT_CLR_OTG_DISCONNECT_FALL_IRQ_CLR_SHIFT) /* 0x00000080 */
#define GRF_USB_SIG_DETECT_CLR_HOST_DISCONNECT_RISE_IRQ_CLR_SHIFT (8U)
#define GRF_USB_SIG_DETECT_CLR_HOST_DISCONNECT_RISE_IRQ_CLR_MASK (0x1U << GRF_USB_SIG_DETECT_CLR_HOST_DISCONNECT_RISE_IRQ_CLR_SHIFT) /* 0x00000100 */
#define GRF_USB_SIG_DETECT_CLR_HOST_DISCONNECT_FALL_IRQ_CLR_SHIFT (9U)
#define GRF_USB_SIG_DETECT_CLR_HOST_DISCONNECT_FALL_IRQ_CLR_MASK (0x1U << GRF_USB_SIG_DETECT_CLR_HOST_DISCONNECT_FALL_IRQ_CLR_SHIFT) /* 0x00000200 */
/* USB_LINESTATE_CON */
#define GRF_USB_LINESTATE_CON_OFFSET                       (0x10310U)
#define GRF_USB_LINESTATE_CON_LINESTATE_DETECT_CON_SHIFT   (0U)
#define GRF_USB_LINESTATE_CON_LINESTATE_DETECT_CON_MASK    (0xFFFFFU << GRF_USB_LINESTATE_CON_LINESTATE_DETECT_CON_SHIFT) /* 0x000FFFFF */
/* USB_DISCONNECT_CON */
#define GRF_USB_DISCONNECT_CON_OFFSET                      (0x10314U)
#define GRF_USB_DISCONNECT_CON_DISCONNECT_DETECT_CON_SHIFT (0U)
#define GRF_USB_DISCONNECT_CON_DISCONNECT_DETECT_CON_MASK  (0xFFFFFU << GRF_USB_DISCONNECT_CON_DISCONNECT_DETECT_CON_SHIFT) /* 0x000FFFFF */
/* USB_BVALID_CON */
#define GRF_USB_BVALID_CON_OFFSET                          (0x10318U)
#define GRF_USB_BVALID_CON_GRF_BVALID_DETECT_CON_SHIFT     (0U)
#define GRF_USB_BVALID_CON_GRF_BVALID_DETECT_CON_MASK      (0xFFFFFU << GRF_USB_BVALID_CON_GRF_BVALID_DETECT_CON_SHIFT) /* 0x000FFFFF */
/* USB_ID_CON */
#define GRF_USB_ID_CON_OFFSET                              (0x1031CU)
#define GRF_USB_ID_CON_GRF_ID_DETECT_CON_SHIFT             (0U)
#define GRF_USB_ID_CON_GRF_ID_DETECT_CON_MASK              (0xFFFFFFFU << GRF_USB_ID_CON_GRF_ID_DETECT_CON_SHIFT)       /* 0x0FFFFFFF */
/******************************************PMU*******************************************/
/* VERSION */
#define PMU_VERSION_OFFSET                                 (0x0U)
#define PMU_VERSION                                        (0x0U)
#define PMU_VERSION_VERSION_SHIFT                          (0U)
#define PMU_VERSION_VERSION_MASK                           (0xFFFFFFFFU << PMU_VERSION_VERSION_SHIFT)                   /* 0xFFFFFFFF */
/* PWR_CON */
#define PMU_PWR_CON_OFFSET                                 (0x4U)
#define PMU_PWR_CON_POWERMODE_EN_SHIFT                     (0U)
#define PMU_PWR_CON_POWERMODE_EN_MASK                      (0x1U << PMU_PWR_CON_POWERMODE_EN_SHIFT)                     /* 0x00000001 */
#define PMU_PWR_CON_SCU_BYPASS_SHIFT                       (1U)
#define PMU_PWR_CON_SCU_BYPASS_MASK                        (0x1U << PMU_PWR_CON_SCU_BYPASS_SHIFT)                       /* 0x00000002 */
#define PMU_PWR_CON_BUS_BYPASS_SHIFT                       (4U)
#define PMU_PWR_CON_BUS_BYPASS_MASK                        (0x1U << PMU_PWR_CON_BUS_BYPASS_SHIFT)                       /* 0x00000010 */
#define PMU_PWR_CON_DDR_BYPASS_SHIFT                       (5U)
#define PMU_PWR_CON_DDR_BYPASS_MASK                        (0x1U << PMU_PWR_CON_DDR_BYPASS_SHIFT)                       /* 0x00000020 */
#define PMU_PWR_CON_PWRDN_BYPASS_SHIFT                     (6U)
#define PMU_PWR_CON_PWRDN_BYPASS_MASK                      (0x1U << PMU_PWR_CON_PWRDN_BYPASS_SHIFT)                     /* 0x00000040 */
#define PMU_PWR_CON_CRU_BYPASS_SHIFT                       (7U)
#define PMU_PWR_CON_CRU_BYPASS_MASK                        (0x1U << PMU_PWR_CON_CRU_BYPASS_SHIFT)                       /* 0x00000080 */
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
#define PMU_WAKEUP_INT_CON_WAKEUP_SDMMC_EN_SHIFT           (5U)
#define PMU_WAKEUP_INT_CON_WAKEUP_SDMMC_EN_MASK            (0x1U << PMU_WAKEUP_INT_CON_WAKEUP_SDMMC_EN_SHIFT)           /* 0x00000020 */
#define PMU_WAKEUP_INT_CON_WAKEUP_SDIO_EN_SHIFT            (6U)
#define PMU_WAKEUP_INT_CON_WAKEUP_SDIO_EN_MASK             (0x1U << PMU_WAKEUP_INT_CON_WAKEUP_SDIO_EN_SHIFT)            /* 0x00000040 */
#define PMU_WAKEUP_INT_CON_WAKEUP_USB_EN_SHIFT             (7U)
#define PMU_WAKEUP_INT_CON_WAKEUP_USB_EN_MASK              (0x1U << PMU_WAKEUP_INT_CON_WAKEUP_USB_EN_SHIFT)             /* 0x00000080 */
#define PMU_WAKEUP_INT_CON_WAKEUP_UART1_EN_SHIFT           (8U)
#define PMU_WAKEUP_INT_CON_WAKEUP_UART1_EN_MASK            (0x1U << PMU_WAKEUP_INT_CON_WAKEUP_UART1_EN_SHIFT)           /* 0x00000100 */
#define PMU_WAKEUP_INT_CON_WAKEUP_SYS_INT_EN_SHIFT         (9U)
#define PMU_WAKEUP_INT_CON_WAKEUP_SYS_INT_EN_MASK          (0x1U << PMU_WAKEUP_INT_CON_WAKEUP_SYS_INT_EN_SHIFT)         /* 0x00000200 */
#define PMU_WAKEUP_INT_CON_WAKEUP_TIMEROUT_EN_SHIFT        (10U)
#define PMU_WAKEUP_INT_CON_WAKEUP_TIMEROUT_EN_MASK         (0x1U << PMU_WAKEUP_INT_CON_WAKEUP_TIMEROUT_EN_SHIFT)        /* 0x00000400 */
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
#define PMU_WAKEUP_INT_ST_WAKEUP_SDMMC_INT_ST_SHIFT        (5U)
#define PMU_WAKEUP_INT_ST_WAKEUP_SDMMC_INT_ST_MASK         (0x1U << PMU_WAKEUP_INT_ST_WAKEUP_SDMMC_INT_ST_SHIFT)        /* 0x00000020 */
#define PMU_WAKEUP_INT_ST_WAKEUP_SDIO_INT_ST_SHIFT         (6U)
#define PMU_WAKEUP_INT_ST_WAKEUP_SDIO_INT_ST_MASK          (0x1U << PMU_WAKEUP_INT_ST_WAKEUP_SDIO_INT_ST_SHIFT)         /* 0x00000040 */
#define PMU_WAKEUP_INT_ST_WAKEUP_USB_INT_ST_SHIFT          (7U)
#define PMU_WAKEUP_INT_ST_WAKEUP_USB_INT_ST_MASK           (0x1U << PMU_WAKEUP_INT_ST_WAKEUP_USB_INT_ST_SHIFT)          /* 0x00000080 */
#define PMU_WAKEUP_INT_ST_WAKEUP_UART1_INT_ST_SHIFT        (8U)
#define PMU_WAKEUP_INT_ST_WAKEUP_UART1_INT_ST_MASK         (0x1U << PMU_WAKEUP_INT_ST_WAKEUP_UART1_INT_ST_SHIFT)        /* 0x00000100 */
#define PMU_WAKEUP_INT_ST_WAKEUP_SYS_INT_ST_SHIFT          (9U)
#define PMU_WAKEUP_INT_ST_WAKEUP_SYS_INT_ST_MASK           (0x1U << PMU_WAKEUP_INT_ST_WAKEUP_SYS_INT_ST_SHIFT)          /* 0x00000200 */
#define PMU_WAKEUP_INT_ST_WAKEUP_TIMEROUT_INT_ST_SHIFT     (10U)
#define PMU_WAKEUP_INT_ST_WAKEUP_TIMEROUT_INT_ST_MASK      (0x1U << PMU_WAKEUP_INT_ST_WAKEUP_TIMEROUT_INT_ST_SHIFT)     /* 0x00000400 */
/* WAKEUP_EDGE_CON */
#define PMU_WAKEUP_EDGE_CON_OFFSET                         (0x18U)
#define PMU_WAKEUP_EDGE_CON_EDGE_WAKEUP_EN_SHIFT           (0U)
#define PMU_WAKEUP_EDGE_CON_EDGE_WAKEUP_EN_MASK            (0xFFFFFU << PMU_WAKEUP_EDGE_CON_EDGE_WAKEUP_EN_SHIFT)       /* 0x000FFFFF */
/* WAKEUP_EDGE_ST */
#define PMU_WAKEUP_EDGE_ST_OFFSET                          (0x1CU)
#define PMU_WAKEUP_EDGE_ST_EDGE_STATUS_SHIFT               (0U)
#define PMU_WAKEUP_EDGE_ST_EDGE_STATUS_MASK                (0xFFFFFU << PMU_WAKEUP_EDGE_ST_EDGE_STATUS_SHIFT)           /* 0x000FFFFF */
/* SCU_STABLE_CNT */
#define PMU_SCU_STABLE_CNT_OFFSET                          (0x20U)
#define PMU_SCU_STABLE_CNT_STABLE_CNT_SHIFT                (0U)
#define PMU_SCU_STABLE_CNT_STABLE_CNT_MASK                 (0xFFFFFU << PMU_SCU_STABLE_CNT_STABLE_CNT_SHIFT)            /* 0x000FFFFF */
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
/* SCU_PWRUP_CNT */
#define PMU_SCU_PWRUP_CNT_OFFSET                           (0x38U)
#define PMU_SCU_PWRUP_CNT_STABLE_CNT_SHIFT                 (0U)
#define PMU_SCU_PWRUP_CNT_STABLE_CNT_MASK                  (0xFFFFFU << PMU_SCU_PWRUP_CNT_STABLE_CNT_SHIFT)             /* 0x000FFFFF */
/* SCU_PWRDN_CNT */
#define PMU_SCU_PWRDN_CNT_OFFSET                           (0x3CU)
#define PMU_SCU_PWRDN_CNT_STABLE_CNT_SHIFT                 (0U)
#define PMU_SCU_PWRDN_CNT_STABLE_CNT_MASK                  (0xFFFFFU << PMU_SCU_PWRDN_CNT_STABLE_CNT_SHIFT)             /* 0x000FFFFF */
/* SCU_VOLUP_CNT */
#define PMU_SCU_VOLUP_CNT_OFFSET                           (0x40U)
#define PMU_SCU_VOLUP_CNT_STABLE_CNT_SHIFT                 (0U)
#define PMU_SCU_VOLUP_CNT_STABLE_CNT_MASK                  (0xFFFFFU << PMU_SCU_VOLUP_CNT_STABLE_CNT_SHIFT)             /* 0x000FFFFF */
/* SCU_VOLDN_CNT */
#define PMU_SCU_VOLDN_CNT_OFFSET                           (0x44U)
#define PMU_SCU_VOLDN_CNT_STABLE_CNT_SHIFT                 (0U)
#define PMU_SCU_VOLDN_CNT_STABLE_CNT_MASK                  (0xFFFFFU << PMU_SCU_VOLDN_CNT_STABLE_CNT_SHIFT)             /* 0x000FFFFF */
/* WAKEUP_TIMEOUT_CNT */
#define PMU_WAKEUP_TIMEOUT_CNT_OFFSET                      (0x48U)
#define PMU_WAKEUP_TIMEOUT_CNT_WAKEUP_TIMEOUT_CNT_SHIFT    (0U)
#define PMU_WAKEUP_TIMEOUT_CNT_WAKEUP_TIMEOUT_CNT_MASK     (0xFFFFFFFFU << PMU_WAKEUP_TIMEOUT_CNT_WAKEUP_TIMEOUT_CNT_SHIFT) /* 0xFFFFFFFF */
/* PWM_SWITCH_CNT */
#define PMU_PWM_SWITCH_CNT_OFFSET                          (0x4CU)
#define PMU_PWM_SWITCH_CNT_STABLE_CNT_SHIFT                (0U)
#define PMU_PWM_SWITCH_CNT_STABLE_CNT_MASK                 (0xFFFFFFFFU << PMU_PWM_SWITCH_CNT_STABLE_CNT_SHIFT)         /* 0xFFFFFFFF */
/* SCU_PWR_CON */
#define PMU_SCU_PWR_CON_OFFSET                             (0x80U)
#define PMU_SCU_PWR_CON_SCU_PWRDN_ENA_SHIFT                (2U)
#define PMU_SCU_PWR_CON_SCU_PWRDN_ENA_MASK                 (0x1U << PMU_SCU_PWR_CON_SCU_PWRDN_ENA_SHIFT)                /* 0x00000004 */
#define PMU_SCU_PWR_CON_SCU_PWROFF_ENA_SHIFT               (3U)
#define PMU_SCU_PWR_CON_SCU_PWROFF_ENA_MASK                (0x1U << PMU_SCU_PWR_CON_SCU_PWROFF_ENA_SHIFT)               /* 0x00000008 */
#define PMU_SCU_PWR_CON_CLUSTER_CPU_PWRDN_ENA_SHIFT        (5U)
#define PMU_SCU_PWR_CON_CLUSTER_CPU_PWRDN_ENA_MASK         (0x1U << PMU_SCU_PWR_CON_CLUSTER_CPU_PWRDN_ENA_SHIFT)        /* 0x00000020 */
#define PMU_SCU_PWR_CON_SCU_VOL_GATE_ENA_SHIFT             (6U)
#define PMU_SCU_PWR_CON_SCU_VOL_GATE_ENA_MASK              (0x1U << PMU_SCU_PWR_CON_SCU_VOL_GATE_ENA_SHIFT)             /* 0x00000040 */
#define PMU_SCU_PWR_CON_CLUSTER_CLK_SRC_GATE_ENA_SHIFT     (7U)
#define PMU_SCU_PWR_CON_CLUSTER_CLK_SRC_GATE_ENA_MASK      (0x1U << PMU_SCU_PWR_CON_CLUSTER_CLK_SRC_GATE_ENA_SHIFT)     /* 0x00000080 */
/* SCU_PWR_SFTCON */
#define PMU_SCU_PWR_SFTCON_OFFSET                          (0x84U)
#define PMU_SCU_PWR_SFTCON_SCU_PWRDN_ENA_SHIFT             (2U)
#define PMU_SCU_PWR_SFTCON_SCU_PWRDN_ENA_MASK              (0x1U << PMU_SCU_PWR_SFTCON_SCU_PWRDN_ENA_SHIFT)             /* 0x00000004 */
#define PMU_SCU_PWR_SFTCON_SCU_PWROFF_ENA_SHIFT            (3U)
#define PMU_SCU_PWR_SFTCON_SCU_PWROFF_ENA_MASK             (0x1U << PMU_SCU_PWR_SFTCON_SCU_PWROFF_ENA_SHIFT)            /* 0x00000008 */
/* SCU_AUTO_CON */
#define PMU_SCU_AUTO_CON_OFFSET                            (0x88U)
#define PMU_SCU_AUTO_CON_SCU_LP_ENA_SHIFT                  (0U)
#define PMU_SCU_AUTO_CON_SCU_LP_ENA_MASK                   (0x1U << PMU_SCU_AUTO_CON_SCU_LP_ENA_SHIFT)                  /* 0x00000001 */
#define PMU_SCU_AUTO_CON_SCU_INT_WAKEUP_CLUSTER_ENA_SHIFT  (1U)
#define PMU_SCU_AUTO_CON_SCU_INT_WAKEUP_CLUSTER_ENA_MASK   (0x1U << PMU_SCU_AUTO_CON_SCU_INT_WAKEUP_CLUSTER_ENA_SHIFT)  /* 0x00000002 */
#define PMU_SCU_AUTO_CON_SCU_INT_MASK_ENA_SHIFT            (2U)
#define PMU_SCU_AUTO_CON_SCU_INT_MASK_ENA_MASK             (0x1U << PMU_SCU_AUTO_CON_SCU_INT_MASK_ENA_SHIFT)            /* 0x00000004 */
#define PMU_SCU_AUTO_CON_SCU_SFT_WAKEUP_CLUSTER_ENA_SHIFT  (3U)
#define PMU_SCU_AUTO_CON_SCU_SFT_WAKEUP_CLUSTER_ENA_MASK   (0x1U << PMU_SCU_AUTO_CON_SCU_SFT_WAKEUP_CLUSTER_ENA_SHIFT)  /* 0x00000008 */
/* SCU_PWR_STATE */
#define PMU_SCU_PWR_STATE_OFFSET                           (0x8CU)
#define PMU_SCU_PWR_STATE                                  (0x0U)
#define PMU_SCU_PWR_STATE_SCU_POWER_STATE_SHIFT            (0U)
#define PMU_SCU_PWR_STATE_SCU_POWER_STATE_MASK             (0xFU << PMU_SCU_PWR_STATE_SCU_POWER_STATE_SHIFT)            /* 0x0000000F */
/* CPU_AUTO_PWR_CON */
#define PMU_CPU_AUTO_PWR_CON_OFFSET                        (0x90U)
#define PMU_CPU_AUTO_PWR_CON_CPU0_AUTO_PWRDN_ENA_SHIFT     (0U)
#define PMU_CPU_AUTO_PWR_CON_CPU0_AUTO_PWRDN_ENA_MASK      (0x1U << PMU_CPU_AUTO_PWR_CON_CPU0_AUTO_PWRDN_ENA_SHIFT)     /* 0x00000001 */
#define PMU_CPU_AUTO_PWR_CON_CPU0_INT_WAKEUP_ENA_SHIFT     (1U)
#define PMU_CPU_AUTO_PWR_CON_CPU0_INT_WAKEUP_ENA_MASK      (0x1U << PMU_CPU_AUTO_PWR_CON_CPU0_INT_WAKEUP_ENA_SHIFT)     /* 0x00000002 */
#define PMU_CPU_AUTO_PWR_CON_CPU0_INT_MASK_ENA_SHIFT       (2U)
#define PMU_CPU_AUTO_PWR_CON_CPU0_INT_MASK_ENA_MASK        (0x1U << PMU_CPU_AUTO_PWR_CON_CPU0_INT_MASK_ENA_SHIFT)       /* 0x00000004 */
#define PMU_CPU_AUTO_PWR_CON_CPU0_SFT_WAKEUP_CLUSTER_ENA_SHIFT (3U)
#define PMU_CPU_AUTO_PWR_CON_CPU0_SFT_WAKEUP_CLUSTER_ENA_MASK (0x1U << PMU_CPU_AUTO_PWR_CON_CPU0_SFT_WAKEUP_CLUSTER_ENA_SHIFT) /* 0x00000008 */
#define PMU_CPU_AUTO_PWR_CON_CPU1_AUTO_PWRDN_ENA_SHIFT     (4U)
#define PMU_CPU_AUTO_PWR_CON_CPU1_AUTO_PWRDN_ENA_MASK      (0x1U << PMU_CPU_AUTO_PWR_CON_CPU1_AUTO_PWRDN_ENA_SHIFT)     /* 0x00000010 */
#define PMU_CPU_AUTO_PWR_CON_CPU1_INT_WAKEUP_ENA_SHIFT     (5U)
#define PMU_CPU_AUTO_PWR_CON_CPU1_INT_WAKEUP_ENA_MASK      (0x1U << PMU_CPU_AUTO_PWR_CON_CPU1_INT_WAKEUP_ENA_SHIFT)     /* 0x00000020 */
#define PMU_CPU_AUTO_PWR_CON_CPU1_INT_MASK_ENA_SHIFT       (6U)
#define PMU_CPU_AUTO_PWR_CON_CPU1_INT_MASK_ENA_MASK        (0x1U << PMU_CPU_AUTO_PWR_CON_CPU1_INT_MASK_ENA_SHIFT)       /* 0x00000040 */
#define PMU_CPU_AUTO_PWR_CON_CPU1_SFT_WAKEUP_CLUSTER_ENA_SHIFT (7U)
#define PMU_CPU_AUTO_PWR_CON_CPU1_SFT_WAKEUP_CLUSTER_ENA_MASK (0x1U << PMU_CPU_AUTO_PWR_CON_CPU1_SFT_WAKEUP_CLUSTER_ENA_SHIFT) /* 0x00000080 */
#define PMU_CPU_AUTO_PWR_CON_CPU2_AUTO_PWRDN_ENA_SHIFT     (8U)
#define PMU_CPU_AUTO_PWR_CON_CPU2_AUTO_PWRDN_ENA_MASK      (0x1U << PMU_CPU_AUTO_PWR_CON_CPU2_AUTO_PWRDN_ENA_SHIFT)     /* 0x00000100 */
#define PMU_CPU_AUTO_PWR_CON_CPU2_INT_WAKEUP_ENA_SHIFT     (9U)
#define PMU_CPU_AUTO_PWR_CON_CPU2_INT_WAKEUP_ENA_MASK      (0x1U << PMU_CPU_AUTO_PWR_CON_CPU2_INT_WAKEUP_ENA_SHIFT)     /* 0x00000200 */
#define PMU_CPU_AUTO_PWR_CON_CPU2_INT_MASK_ENA_SHIFT       (10U)
#define PMU_CPU_AUTO_PWR_CON_CPU2_INT_MASK_ENA_MASK        (0x1U << PMU_CPU_AUTO_PWR_CON_CPU2_INT_MASK_ENA_SHIFT)       /* 0x00000400 */
#define PMU_CPU_AUTO_PWR_CON_CPU2_SFT_WAKEUP_CLUSTER_ENA_SHIFT (11U)
#define PMU_CPU_AUTO_PWR_CON_CPU2_SFT_WAKEUP_CLUSTER_ENA_MASK (0x1U << PMU_CPU_AUTO_PWR_CON_CPU2_SFT_WAKEUP_CLUSTER_ENA_SHIFT) /* 0x00000800 */
#define PMU_CPU_AUTO_PWR_CON_CPU3_AUTO_PWRDN_ENA_SHIFT     (12U)
#define PMU_CPU_AUTO_PWR_CON_CPU3_AUTO_PWRDN_ENA_MASK      (0x1U << PMU_CPU_AUTO_PWR_CON_CPU3_AUTO_PWRDN_ENA_SHIFT)     /* 0x00001000 */
#define PMU_CPU_AUTO_PWR_CON_CPU3_INT_WAKEUP_ENA_SHIFT     (13U)
#define PMU_CPU_AUTO_PWR_CON_CPU3_INT_WAKEUP_ENA_MASK      (0x1U << PMU_CPU_AUTO_PWR_CON_CPU3_INT_WAKEUP_ENA_SHIFT)     /* 0x00002000 */
#define PMU_CPU_AUTO_PWR_CON_CPU3_INT_MASK_ENA_SHIFT       (14U)
#define PMU_CPU_AUTO_PWR_CON_CPU3_INT_MASK_ENA_MASK        (0x1U << PMU_CPU_AUTO_PWR_CON_CPU3_INT_MASK_ENA_SHIFT)       /* 0x00004000 */
#define PMU_CPU_AUTO_PWR_CON_CPU3_SFT_WAKEUP_CLUSTER_ENA_SHIFT (15U)
#define PMU_CPU_AUTO_PWR_CON_CPU3_SFT_WAKEUP_CLUSTER_ENA_MASK (0x1U << PMU_CPU_AUTO_PWR_CON_CPU3_SFT_WAKEUP_CLUSTER_ENA_SHIFT) /* 0x00008000 */
/* CPU_PWR_SFTCON */
#define PMU_CPU_PWR_SFTCON_OFFSET                          (0x94U)
#define PMU_CPU_PWR_SFTCON_CPU0_SFT_PWRDN_ENA_SHIFT        (0U)
#define PMU_CPU_PWR_SFTCON_CPU0_SFT_PWRDN_ENA_MASK         (0x1U << PMU_CPU_PWR_SFTCON_CPU0_SFT_PWRDN_ENA_SHIFT)        /* 0x00000001 */
#define PMU_CPU_PWR_SFTCON_CPU1_SFT_PWRDN_ENA_SHIFT        (1U)
#define PMU_CPU_PWR_SFTCON_CPU1_SFT_PWRDN_ENA_MASK         (0x1U << PMU_CPU_PWR_SFTCON_CPU1_SFT_PWRDN_ENA_SHIFT)        /* 0x00000002 */
#define PMU_CPU_PWR_SFTCON_CPU2_SFT_PWRDN_ENA_SHIFT        (2U)
#define PMU_CPU_PWR_SFTCON_CPU2_SFT_PWRDN_ENA_MASK         (0x1U << PMU_CPU_PWR_SFTCON_CPU2_SFT_PWRDN_ENA_SHIFT)        /* 0x00000004 */
#define PMU_CPU_PWR_SFTCON_CPU3_SFT_PWRDN_ENA_SHIFT        (3U)
#define PMU_CPU_PWR_SFTCON_CPU3_SFT_PWRDN_ENA_MASK         (0x1U << PMU_CPU_PWR_SFTCON_CPU3_SFT_PWRDN_ENA_SHIFT)        /* 0x00000008 */
/* CLUSTER_PWR_ST */
#define PMU_CLUSTER_PWR_ST_OFFSET                          (0x9CU)
#define PMU_CLUSTER_PWR_ST                                 (0x0U)
#define PMU_CLUSTER_PWR_ST_STANDBYWFIL2_SHIFT              (1U)
#define PMU_CLUSTER_PWR_ST_STANDBYWFIL2_MASK               (0x1U << PMU_CLUSTER_PWR_ST_STANDBYWFIL2_SHIFT)              /* 0x00000002 */
#define PMU_CLUSTER_PWR_ST_SCU_DWN_STATE_SHIFT             (2U)
#define PMU_CLUSTER_PWR_ST_SCU_DWN_STATE_MASK              (0x1U << PMU_CLUSTER_PWR_ST_SCU_DWN_STATE_SHIFT)             /* 0x00000004 */
#define PMU_CLUSTER_PWR_ST_CPU0_DWN_STATE_SHIFT            (4U)
#define PMU_CLUSTER_PWR_ST_CPU0_DWN_STATE_MASK             (0x1U << PMU_CLUSTER_PWR_ST_CPU0_DWN_STATE_SHIFT)            /* 0x00000010 */
#define PMU_CLUSTER_PWR_ST_CPU1_DWN_STATE_SHIFT            (5U)
#define PMU_CLUSTER_PWR_ST_CPU1_DWN_STATE_MASK             (0x1U << PMU_CLUSTER_PWR_ST_CPU1_DWN_STATE_SHIFT)            /* 0x00000020 */
#define PMU_CLUSTER_PWR_ST_CPU2_DWN_STATE_SHIFT            (6U)
#define PMU_CLUSTER_PWR_ST_CPU2_DWN_STATE_MASK             (0x1U << PMU_CLUSTER_PWR_ST_CPU2_DWN_STATE_SHIFT)            /* 0x00000040 */
#define PMU_CLUSTER_PWR_ST_CPU3_DWN_STATE_SHIFT            (7U)
#define PMU_CLUSTER_PWR_ST_CPU3_DWN_STATE_MASK             (0x1U << PMU_CLUSTER_PWR_ST_CPU3_DWN_STATE_SHIFT)            /* 0x00000080 */
#define PMU_CLUSTER_PWR_ST_CPU0_STANDBYWFI_SHIFT           (8U)
#define PMU_CLUSTER_PWR_ST_CPU0_STANDBYWFI_MASK            (0x1U << PMU_CLUSTER_PWR_ST_CPU0_STANDBYWFI_SHIFT)           /* 0x00000100 */
#define PMU_CLUSTER_PWR_ST_CPU1_STANDBYWFI_SHIFT           (9U)
#define PMU_CLUSTER_PWR_ST_CPU1_STANDBYWFI_MASK            (0x1U << PMU_CLUSTER_PWR_ST_CPU1_STANDBYWFI_SHIFT)           /* 0x00000200 */
#define PMU_CLUSTER_PWR_ST_CPU2_STANDBYWFI_SHIFT           (10U)
#define PMU_CLUSTER_PWR_ST_CPU2_STANDBYWFI_MASK            (0x1U << PMU_CLUSTER_PWR_ST_CPU2_STANDBYWFI_SHIFT)           /* 0x00000400 */
#define PMU_CLUSTER_PWR_ST_CPU3_STANDBYWFI_SHIFT           (11U)
#define PMU_CLUSTER_PWR_ST_CPU3_STANDBYWFI_MASK            (0x1U << PMU_CLUSTER_PWR_ST_CPU3_STANDBYWFI_SHIFT)           /* 0x00000800 */
/* CLUSTER_IDLE_CON */
#define PMU_CLUSTER_IDLE_CON_OFFSET                        (0xA0U)
#define PMU_CLUSTER_IDLE_CON_IDLE_REQ_CPU_SHIFT            (4U)
#define PMU_CLUSTER_IDLE_CON_IDLE_REQ_CPU_MASK             (0x1U << PMU_CLUSTER_IDLE_CON_IDLE_REQ_CPU_SHIFT)            /* 0x00000010 */
/* CLUSTER_IDLE_SFTCON */
#define PMU_CLUSTER_IDLE_SFTCON_OFFSET                     (0xA4U)
#define PMU_CLUSTER_IDLE_SFTCON_IDLE_REQ_CPU_SHIFT         (4U)
#define PMU_CLUSTER_IDLE_SFTCON_IDLE_REQ_CPU_MASK          (0x1U << PMU_CLUSTER_IDLE_SFTCON_IDLE_REQ_CPU_SHIFT)         /* 0x00000010 */
/* BUS_IDLE_CON0 */
#define PMU_BUS_IDLE_CON0_OFFSET                           (0xB0U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_MSCH_SHIFT              (0U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_MSCH_MASK               (0x1U << PMU_BUS_IDLE_CON0_IDLE_REQ_MSCH_SHIFT)              /* 0x00000001 */
#define PMU_BUS_IDLE_CON0_IDLE_REQ_BUSHOLD_SHIFT           (1U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_BUSHOLD_MASK            (0x1U << PMU_BUS_IDLE_CON0_IDLE_REQ_BUSHOLD_SHIFT)           /* 0x00000002 */
#define PMU_BUS_IDLE_CON0_IDLE_REQ_BUSNOC1_SHIFT           (2U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_BUSNOC1_MASK            (0x1U << PMU_BUS_IDLE_CON0_IDLE_REQ_BUSNOC1_SHIFT)           /* 0x00000004 */
#define PMU_BUS_IDLE_CON0_IDLE_REQ_BUSNOC2_SHIFT           (3U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_BUSNOC2_MASK            (0x1U << PMU_BUS_IDLE_CON0_IDLE_REQ_BUSNOC2_SHIFT)           /* 0x00000008 */
#define PMU_BUS_IDLE_CON0_IDLE_REQ_BUSNOC3_SHIFT           (4U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_BUSNOC3_MASK            (0x1U << PMU_BUS_IDLE_CON0_IDLE_REQ_BUSNOC3_SHIFT)           /* 0x00000010 */
#define PMU_BUS_IDLE_CON0_IDLE_REQ_AUDIO_SHIFT             (5U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_AUDIO_MASK              (0x1U << PMU_BUS_IDLE_CON0_IDLE_REQ_AUDIO_SHIFT)             /* 0x00000020 */
#define PMU_BUS_IDLE_CON0_IDLE_REQ_VI_SHIFT                (6U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_VI_MASK                 (0x1U << PMU_BUS_IDLE_CON0_IDLE_REQ_VI_SHIFT)                /* 0x00000040 */
#define PMU_BUS_IDLE_CON0_IDLE_REQ_VO_SHIFT                (7U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_VO_MASK                 (0x1U << PMU_BUS_IDLE_CON0_IDLE_REQ_VO_SHIFT)                /* 0x00000080 */
#define PMU_BUS_IDLE_CON0_IDLE_REQ_ISPP_SHIFT              (8U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_ISPP_MASK               (0x1U << PMU_BUS_IDLE_CON0_IDLE_REQ_ISPP_SHIFT)              /* 0x00000100 */
#define PMU_BUS_IDLE_CON0_IDLE_REQ_VEPU_SHIFT              (9U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_VEPU_MASK               (0x1U << PMU_BUS_IDLE_CON0_IDLE_REQ_VEPU_SHIFT)              /* 0x00000200 */
#define PMU_BUS_IDLE_CON0_IDLE_REQ_VDPU_SHIFT              (10U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_VDPU_MASK               (0x1U << PMU_BUS_IDLE_CON0_IDLE_REQ_VDPU_SHIFT)              /* 0x00000400 */
#define PMU_BUS_IDLE_CON0_IDLE_REQ_NVM_SHIFT               (11U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_NVM_MASK                (0x1U << PMU_BUS_IDLE_CON0_IDLE_REQ_NVM_SHIFT)               /* 0x00000800 */
#define PMU_BUS_IDLE_CON0_IDLE_REQ_SDCARD_SHIFT            (12U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_SDCARD_MASK             (0x1U << PMU_BUS_IDLE_CON0_IDLE_REQ_SDCARD_SHIFT)            /* 0x00001000 */
#define PMU_BUS_IDLE_CON0_IDLE_REQ_SDIO_SHIFT              (13U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_SDIO_MASK               (0x1U << PMU_BUS_IDLE_CON0_IDLE_REQ_SDIO_SHIFT)              /* 0x00002000 */
#define PMU_BUS_IDLE_CON0_IDLE_REQ_GMAC_SHIFT              (14U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_GMAC_MASK               (0x1U << PMU_BUS_IDLE_CON0_IDLE_REQ_GMAC_SHIFT)              /* 0x00004000 */
#define PMU_BUS_IDLE_CON0_IDLE_REQ_USB_SHIFT               (15U)
#define PMU_BUS_IDLE_CON0_IDLE_REQ_USB_MASK                (0x1U << PMU_BUS_IDLE_CON0_IDLE_REQ_USB_SHIFT)               /* 0x00008000 */
/* BUS_IDLE_CON1 */
#define PMU_BUS_IDLE_CON1_OFFSET                           (0xB4U)
#define PMU_BUS_IDLE_CON1_IDLE_REQ_PHP_SHIFT               (0U)
#define PMU_BUS_IDLE_CON1_IDLE_REQ_PHP_MASK                (0x1U << PMU_BUS_IDLE_CON1_IDLE_REQ_PHP_SHIFT)               /* 0x00000001 */
#define PMU_BUS_IDLE_CON1_IDLE_REQ_PMU_SHIFT               (1U)
#define PMU_BUS_IDLE_CON1_IDLE_REQ_PMU_MASK                (0x1U << PMU_BUS_IDLE_CON1_IDLE_REQ_PMU_SHIFT)               /* 0x00000002 */
#define PMU_BUS_IDLE_CON1_IDLE_REQ_NPU_SHIFT               (2U)
#define PMU_BUS_IDLE_CON1_IDLE_REQ_NPU_MASK                (0x1U << PMU_BUS_IDLE_CON1_IDLE_REQ_NPU_SHIFT)               /* 0x00000004 */
#define PMU_BUS_IDLE_CON1_IDLE_REQ_TOPAPB_SHIFT            (3U)
#define PMU_BUS_IDLE_CON1_IDLE_REQ_TOPAPB_MASK             (0x1U << PMU_BUS_IDLE_CON1_IDLE_REQ_TOPAPB_SHIFT)            /* 0x00000008 */
#define PMU_BUS_IDLE_CON1_IDLE_REQ_CRYPT_SHIFT             (4U)
#define PMU_BUS_IDLE_CON1_IDLE_REQ_CRYPT_MASK              (0x1U << PMU_BUS_IDLE_CON1_IDLE_REQ_CRYPT_SHIFT)             /* 0x00000010 */
/* BUS_IDLE_SFTCON0 */
#define PMU_BUS_IDLE_SFTCON0_OFFSET                        (0xC0U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_MSCH_SHIFT           (0U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_MSCH_MASK            (0x1U << PMU_BUS_IDLE_SFTCON0_IDLE_REQ_MSCH_SHIFT)           /* 0x00000001 */
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_BUSHOLD_SHIFT        (1U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_BUSHOLD_MASK         (0x1U << PMU_BUS_IDLE_SFTCON0_IDLE_REQ_BUSHOLD_SHIFT)        /* 0x00000002 */
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_BUSNOC1_SHIFT        (2U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_BUSNOC1_MASK         (0x1U << PMU_BUS_IDLE_SFTCON0_IDLE_REQ_BUSNOC1_SHIFT)        /* 0x00000004 */
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_BUSNOC2_SHIFT        (3U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_BUSNOC2_MASK         (0x1U << PMU_BUS_IDLE_SFTCON0_IDLE_REQ_BUSNOC2_SHIFT)        /* 0x00000008 */
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_BUSNOC3_SHIFT        (4U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_BUSNOC3_MASK         (0x1U << PMU_BUS_IDLE_SFTCON0_IDLE_REQ_BUSNOC3_SHIFT)        /* 0x00000010 */
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_AUDIO_SHIFT          (5U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_AUDIO_MASK           (0x1U << PMU_BUS_IDLE_SFTCON0_IDLE_REQ_AUDIO_SHIFT)          /* 0x00000020 */
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_VI_SHIFT             (6U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_VI_MASK              (0x1U << PMU_BUS_IDLE_SFTCON0_IDLE_REQ_VI_SHIFT)             /* 0x00000040 */
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_VO_SHIFT             (7U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_VO_MASK              (0x1U << PMU_BUS_IDLE_SFTCON0_IDLE_REQ_VO_SHIFT)             /* 0x00000080 */
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_ISPP_SHIFT           (8U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_ISPP_MASK            (0x1U << PMU_BUS_IDLE_SFTCON0_IDLE_REQ_ISPP_SHIFT)           /* 0x00000100 */
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_VEPU_SHIFT           (9U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_VEPU_MASK            (0x1U << PMU_BUS_IDLE_SFTCON0_IDLE_REQ_VEPU_SHIFT)           /* 0x00000200 */
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_VDPU_SHIFT           (10U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_VDPU_MASK            (0x1U << PMU_BUS_IDLE_SFTCON0_IDLE_REQ_VDPU_SHIFT)           /* 0x00000400 */
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_NVM_SHIFT            (11U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_NVM_MASK             (0x1U << PMU_BUS_IDLE_SFTCON0_IDLE_REQ_NVM_SHIFT)            /* 0x00000800 */
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_SDCARD_SHIFT         (12U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_SDCARD_MASK          (0x1U << PMU_BUS_IDLE_SFTCON0_IDLE_REQ_SDCARD_SHIFT)         /* 0x00001000 */
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_SDIO_SHIFT           (13U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_SDIO_MASK            (0x1U << PMU_BUS_IDLE_SFTCON0_IDLE_REQ_SDIO_SHIFT)           /* 0x00002000 */
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_GMAC_SHIFT           (14U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_GMAC_MASK            (0x1U << PMU_BUS_IDLE_SFTCON0_IDLE_REQ_GMAC_SHIFT)           /* 0x00004000 */
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_USB_SHIFT            (15U)
#define PMU_BUS_IDLE_SFTCON0_IDLE_REQ_USB_MASK             (0x1U << PMU_BUS_IDLE_SFTCON0_IDLE_REQ_USB_SHIFT)            /* 0x00008000 */
/* BUS_IDLE_SFTCON1 */
#define PMU_BUS_IDLE_SFTCON1_OFFSET                        (0xC4U)
#define PMU_BUS_IDLE_SFTCON1_IDLE_REQ_PHP_SHIFT            (0U)
#define PMU_BUS_IDLE_SFTCON1_IDLE_REQ_PHP_MASK             (0x1U << PMU_BUS_IDLE_SFTCON1_IDLE_REQ_PHP_SHIFT)            /* 0x00000001 */
#define PMU_BUS_IDLE_SFTCON1_IDLE_REQ_PMU_SHIFT            (1U)
#define PMU_BUS_IDLE_SFTCON1_IDLE_REQ_PMU_MASK             (0x1U << PMU_BUS_IDLE_SFTCON1_IDLE_REQ_PMU_SHIFT)            /* 0x00000002 */
#define PMU_BUS_IDLE_SFTCON1_IDLE_REQ_NPU_SHIFT            (2U)
#define PMU_BUS_IDLE_SFTCON1_IDLE_REQ_NPU_MASK             (0x1U << PMU_BUS_IDLE_SFTCON1_IDLE_REQ_NPU_SHIFT)            /* 0x00000004 */
#define PMU_BUS_IDLE_SFTCON1_IDLE_REQ_TOPAPB_SHIFT         (3U)
#define PMU_BUS_IDLE_SFTCON1_IDLE_REQ_TOPAPB_MASK          (0x1U << PMU_BUS_IDLE_SFTCON1_IDLE_REQ_TOPAPB_SHIFT)         /* 0x00000008 */
#define PMU_BUS_IDLE_SFTCON1_IDLE_REQ_CRYPT_SHIFT          (4U)
#define PMU_BUS_IDLE_SFTCON1_IDLE_REQ_CRYPT_MASK           (0x1U << PMU_BUS_IDLE_SFTCON1_IDLE_REQ_CRYPT_SHIFT)          /* 0x00000010 */
/* BUS_IDLE_ACK */
#define PMU_BUS_IDLE_ACK_OFFSET                            (0xD0U)
#define PMU_BUS_IDLE_ACK                                   (0x0U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_MSCH_SHIFT               (0U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_MSCH_MASK                (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_MSCH_SHIFT)               /* 0x00000001 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_BUSHOLD_SHIFT            (1U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_BUSHOLD_MASK             (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_BUSHOLD_SHIFT)            /* 0x00000002 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_BUSNOC1_SHIFT            (2U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_BUSNOC1_MASK             (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_BUSNOC1_SHIFT)            /* 0x00000004 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_BUSNOC2_SHIFT            (3U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_BUSNOC2_MASK             (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_BUSNOC2_SHIFT)            /* 0x00000008 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_BUSNOC3_SHIFT            (4U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_BUSNOC3_MASK             (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_BUSNOC3_SHIFT)            /* 0x00000010 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_AUDIO_SHIFT              (5U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_AUDIO_MASK               (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_AUDIO_SHIFT)              /* 0x00000020 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_VI_SHIFT                 (6U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_VI_MASK                  (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_VI_SHIFT)                 /* 0x00000040 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_VO_SHIFT                 (7U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_VO_MASK                  (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_VO_SHIFT)                 /* 0x00000080 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_ISPP_SHIFT               (8U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_ISPP_MASK                (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_ISPP_SHIFT)               /* 0x00000100 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_VEPU_SHIFT               (9U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_VEPU_MASK                (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_VEPU_SHIFT)               /* 0x00000200 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_VDPU_SHIFT               (10U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_VDPU_MASK                (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_VDPU_SHIFT)               /* 0x00000400 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_NVM_SHIFT                (11U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_NVM_MASK                 (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_NVM_SHIFT)                /* 0x00000800 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_SDCARD_SHIFT             (12U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_SDCARD_MASK              (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_SDCARD_SHIFT)             /* 0x00001000 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_SDIO_SHIFT               (13U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_SDIO_MASK                (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_SDIO_SHIFT)               /* 0x00002000 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_GMAC_SHIFT               (14U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_GMAC_MASK                (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_GMAC_SHIFT)               /* 0x00004000 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_USB_SHIFT                (15U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_USB_MASK                 (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_USB_SHIFT)                /* 0x00008000 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_PHP_SHIFT                (16U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_PHP_MASK                 (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_PHP_SHIFT)                /* 0x00010000 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_PMU_SHIFT                (17U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_PMU_MASK                 (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_PMU_SHIFT)                /* 0x00020000 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_NPU_SHIFT                (18U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_NPU_MASK                 (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_NPU_SHIFT)                /* 0x00040000 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_TOPAPB_SHIFT             (19U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_TOPAPB_MASK              (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_TOPAPB_SHIFT)             /* 0x00080000 */
#define PMU_BUS_IDLE_ACK_IDLE_ACK_CRYPT_SHIFT              (20U)
#define PMU_BUS_IDLE_ACK_IDLE_ACK_CRYPT_MASK               (0x1U << PMU_BUS_IDLE_ACK_IDLE_ACK_CRYPT_SHIFT)              /* 0x00100000 */
/* BUS_IDLE_ST */
#define PMU_BUS_IDLE_ST_OFFSET                             (0xD8U)
#define PMU_BUS_IDLE_ST                                    (0x0U)
#define PMU_BUS_IDLE_ST_IDLE_MSCH_SHIFT                    (0U)
#define PMU_BUS_IDLE_ST_IDLE_MSCH_MASK                     (0x1U << PMU_BUS_IDLE_ST_IDLE_MSCH_SHIFT)                    /* 0x00000001 */
#define PMU_BUS_IDLE_ST_IDLE_BUSHOLD_SHIFT                 (1U)
#define PMU_BUS_IDLE_ST_IDLE_BUSHOLD_MASK                  (0x1U << PMU_BUS_IDLE_ST_IDLE_BUSHOLD_SHIFT)                 /* 0x00000002 */
#define PMU_BUS_IDLE_ST_IDLE_BUSNOC1_SHIFT                 (2U)
#define PMU_BUS_IDLE_ST_IDLE_BUSNOC1_MASK                  (0x1U << PMU_BUS_IDLE_ST_IDLE_BUSNOC1_SHIFT)                 /* 0x00000004 */
#define PMU_BUS_IDLE_ST_IDLE_BUSNOC2_SHIFT                 (3U)
#define PMU_BUS_IDLE_ST_IDLE_BUSNOC2_MASK                  (0x1U << PMU_BUS_IDLE_ST_IDLE_BUSNOC2_SHIFT)                 /* 0x00000008 */
#define PMU_BUS_IDLE_ST_IDLE_BUSNOC3_SHIFT                 (4U)
#define PMU_BUS_IDLE_ST_IDLE_BUSNOC3_MASK                  (0x1U << PMU_BUS_IDLE_ST_IDLE_BUSNOC3_SHIFT)                 /* 0x00000010 */
#define PMU_BUS_IDLE_ST_IDLE_AUDIO_SHIFT                   (5U)
#define PMU_BUS_IDLE_ST_IDLE_AUDIO_MASK                    (0x1U << PMU_BUS_IDLE_ST_IDLE_AUDIO_SHIFT)                   /* 0x00000020 */
#define PMU_BUS_IDLE_ST_IDLE_VI_SHIFT                      (6U)
#define PMU_BUS_IDLE_ST_IDLE_VI_MASK                       (0x1U << PMU_BUS_IDLE_ST_IDLE_VI_SHIFT)                      /* 0x00000040 */
#define PMU_BUS_IDLE_ST_IDLE_VO_SHIFT                      (7U)
#define PMU_BUS_IDLE_ST_IDLE_VO_MASK                       (0x1U << PMU_BUS_IDLE_ST_IDLE_VO_SHIFT)                      /* 0x00000080 */
#define PMU_BUS_IDLE_ST_IDLE_ISPP_SHIFT                    (8U)
#define PMU_BUS_IDLE_ST_IDLE_ISPP_MASK                     (0x1U << PMU_BUS_IDLE_ST_IDLE_ISPP_SHIFT)                    /* 0x00000100 */
#define PMU_BUS_IDLE_ST_IDLE_VEPU_SHIFT                    (9U)
#define PMU_BUS_IDLE_ST_IDLE_VEPU_MASK                     (0x1U << PMU_BUS_IDLE_ST_IDLE_VEPU_SHIFT)                    /* 0x00000200 */
#define PMU_BUS_IDLE_ST_IDLE_VDPU_SHIFT                    (10U)
#define PMU_BUS_IDLE_ST_IDLE_VDPU_MASK                     (0x1U << PMU_BUS_IDLE_ST_IDLE_VDPU_SHIFT)                    /* 0x00000400 */
#define PMU_BUS_IDLE_ST_IDLE_NVM_SHIFT                     (11U)
#define PMU_BUS_IDLE_ST_IDLE_NVM_MASK                      (0x1U << PMU_BUS_IDLE_ST_IDLE_NVM_SHIFT)                     /* 0x00000800 */
#define PMU_BUS_IDLE_ST_IDLE_SDCARD_SHIFT                  (12U)
#define PMU_BUS_IDLE_ST_IDLE_SDCARD_MASK                   (0x1U << PMU_BUS_IDLE_ST_IDLE_SDCARD_SHIFT)                  /* 0x00001000 */
#define PMU_BUS_IDLE_ST_IDLE_SDIO_SHIFT                    (13U)
#define PMU_BUS_IDLE_ST_IDLE_SDIO_MASK                     (0x1U << PMU_BUS_IDLE_ST_IDLE_SDIO_SHIFT)                    /* 0x00002000 */
#define PMU_BUS_IDLE_ST_IDLE_GMAC_SHIFT                    (14U)
#define PMU_BUS_IDLE_ST_IDLE_GMAC_MASK                     (0x1U << PMU_BUS_IDLE_ST_IDLE_GMAC_SHIFT)                    /* 0x00004000 */
#define PMU_BUS_IDLE_ST_IDLE_USB_SHIFT                     (15U)
#define PMU_BUS_IDLE_ST_IDLE_USB_MASK                      (0x1U << PMU_BUS_IDLE_ST_IDLE_USB_SHIFT)                     /* 0x00008000 */
#define PMU_BUS_IDLE_ST_IDLE_PHP_SHIFT                     (16U)
#define PMU_BUS_IDLE_ST_IDLE_PHP_MASK                      (0x1U << PMU_BUS_IDLE_ST_IDLE_PHP_SHIFT)                     /* 0x00010000 */
#define PMU_BUS_IDLE_ST_IDLE_PMU_SHIFT                     (17U)
#define PMU_BUS_IDLE_ST_IDLE_PMU_MASK                      (0x1U << PMU_BUS_IDLE_ST_IDLE_PMU_SHIFT)                     /* 0x00020000 */
#define PMU_BUS_IDLE_ST_IDLE_NPU_SHIFT                     (18U)
#define PMU_BUS_IDLE_ST_IDLE_NPU_MASK                      (0x1U << PMU_BUS_IDLE_ST_IDLE_NPU_SHIFT)                     /* 0x00040000 */
#define PMU_BUS_IDLE_ST_IDLE_TOPAPB_SHIFT                  (19U)
#define PMU_BUS_IDLE_ST_IDLE_TOPAPB_MASK                   (0x1U << PMU_BUS_IDLE_ST_IDLE_TOPAPB_SHIFT)                  /* 0x00080000 */
#define PMU_BUS_IDLE_ST_IDLE_CRYPT_SHIFT                   (20U)
#define PMU_BUS_IDLE_ST_IDLE_CRYPT_MASK                    (0x1U << PMU_BUS_IDLE_ST_IDLE_CRYPT_SHIFT)                   /* 0x00100000 */
/* NOC_AUTO_CON0 */
#define PMU_NOC_AUTO_CON0_OFFSET                           (0xE0U)
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_MSCH_SHIFT             (0U)
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_MSCH_MASK              (0x1U << PMU_NOC_AUTO_CON0_AUTO_IDLE_MSCH_SHIFT)             /* 0x00000001 */
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_BUS_SHIFT              (1U)
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_BUS_MASK               (0xFU << PMU_NOC_AUTO_CON0_AUTO_IDLE_BUS_SHIFT)              /* 0x0000001E */
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_AUDIO_SHIFT            (5U)
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_AUDIO_MASK             (0x1U << PMU_NOC_AUTO_CON0_AUTO_IDLE_AUDIO_SHIFT)            /* 0x00000020 */
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_VI_SHIFT               (6U)
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_VI_MASK                (0x1U << PMU_NOC_AUTO_CON0_AUTO_IDLE_VI_SHIFT)               /* 0x00000040 */
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_VO_SHIFT               (7U)
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_VO_MASK                (0x1U << PMU_NOC_AUTO_CON0_AUTO_IDLE_VO_SHIFT)               /* 0x00000080 */
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_ISPP_SHIFT             (8U)
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_ISPP_MASK              (0x1U << PMU_NOC_AUTO_CON0_AUTO_IDLE_ISPP_SHIFT)             /* 0x00000100 */
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_VEPU_SHIFT             (9U)
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_VEPU_MASK              (0x1U << PMU_NOC_AUTO_CON0_AUTO_IDLE_VEPU_SHIFT)             /* 0x00000200 */
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_VDPU_SHIFT             (10U)
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_VDPU_MASK              (0x1U << PMU_NOC_AUTO_CON0_AUTO_IDLE_VDPU_SHIFT)             /* 0x00000400 */
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_NVM_SHIFT              (11U)
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_NVM_MASK               (0x1U << PMU_NOC_AUTO_CON0_AUTO_IDLE_NVM_SHIFT)              /* 0x00000800 */
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_SDCARD_SHIFT           (12U)
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_SDCARD_MASK            (0x1U << PMU_NOC_AUTO_CON0_AUTO_IDLE_SDCARD_SHIFT)           /* 0x00001000 */
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_SDIO_SHIFT             (13U)
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_SDIO_MASK              (0x1U << PMU_NOC_AUTO_CON0_AUTO_IDLE_SDIO_SHIFT)             /* 0x00002000 */
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_GMAC_SHIFT             (14U)
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_GMAC_MASK              (0x1U << PMU_NOC_AUTO_CON0_AUTO_IDLE_GMAC_SHIFT)             /* 0x00004000 */
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_USB_SHIFT              (15U)
#define PMU_NOC_AUTO_CON0_AUTO_IDLE_USB_MASK               (0x1U << PMU_NOC_AUTO_CON0_AUTO_IDLE_USB_SHIFT)              /* 0x00008000 */
/* NOC_AUTO_CON1 */
#define PMU_NOC_AUTO_CON1_OFFSET                           (0xE4U)
#define PMU_NOC_AUTO_CON1_AUTO_IDLE_PHP_SHIFT              (0U)
#define PMU_NOC_AUTO_CON1_AUTO_IDLE_PHP_MASK               (0x1U << PMU_NOC_AUTO_CON1_AUTO_IDLE_PHP_SHIFT)              /* 0x00000001 */
#define PMU_NOC_AUTO_CON1_AUTO_IDLE_PMU_SHIFT              (1U)
#define PMU_NOC_AUTO_CON1_AUTO_IDLE_PMU_MASK               (0x1U << PMU_NOC_AUTO_CON1_AUTO_IDLE_PMU_SHIFT)              /* 0x00000002 */
#define PMU_NOC_AUTO_CON1_AUTO_IDLE_NPU_SHIFT              (2U)
#define PMU_NOC_AUTO_CON1_AUTO_IDLE_NPU_MASK               (0x1U << PMU_NOC_AUTO_CON1_AUTO_IDLE_NPU_SHIFT)              /* 0x00000004 */
#define PMU_NOC_AUTO_CON1_AUTO_IDLE_TOPAPB_SHIFT           (3U)
#define PMU_NOC_AUTO_CON1_AUTO_IDLE_TOPAPB_MASK            (0x1U << PMU_NOC_AUTO_CON1_AUTO_IDLE_TOPAPB_SHIFT)           /* 0x00000008 */
#define PMU_NOC_AUTO_CON1_AUTO_IDLE_CRYPT_SHIFT            (4U)
#define PMU_NOC_AUTO_CON1_AUTO_IDLE_CRYPT_MASK             (0x1U << PMU_NOC_AUTO_CON1_AUTO_IDLE_CRYPT_SHIFT)            /* 0x00000010 */
#define PMU_NOC_AUTO_CON1_AUTO_IDLE_CPU_SHIFT              (5U)
#define PMU_NOC_AUTO_CON1_AUTO_IDLE_CPU_MASK               (0x1U << PMU_NOC_AUTO_CON1_AUTO_IDLE_CPU_SHIFT)              /* 0x00000020 */
/* DDR_PWR_CON */
#define PMU_DDR_PWR_CON_OFFSET                             (0xF0U)
#define PMU_DDR_PWR_CON_DDR_SREF_ENA_SHIFT                 (0U)
#define PMU_DDR_PWR_CON_DDR_SREF_ENA_MASK                  (0x1U << PMU_DDR_PWR_CON_DDR_SREF_ENA_SHIFT)                 /* 0x00000001 */
#define PMU_DDR_PWR_CON_DDRIO_RET_ENA_SHIFT                (1U)
#define PMU_DDR_PWR_CON_DDRIO_RET_ENA_MASK                 (0x1U << PMU_DDR_PWR_CON_DDRIO_RET_ENA_SHIFT)                /* 0x00000002 */
#define PMU_DDR_PWR_CON_DDRIO_RET_EXIT_ENA_SHIFT           (2U)
#define PMU_DDR_PWR_CON_DDRIO_RET_EXIT_ENA_MASK            (0x1U << PMU_DDR_PWR_CON_DDRIO_RET_EXIT_ENA_SHIFT)           /* 0x00000004 */
#define PMU_DDR_PWR_CON_DDRPHY_AUTO_GATING_ENA_SHIFT       (4U)
#define PMU_DDR_PWR_CON_DDRPHY_AUTO_GATING_ENA_MASK        (0x1U << PMU_DDR_PWR_CON_DDRPHY_AUTO_GATING_ENA_SHIFT)       /* 0x00000010 */
/* DDR_PWR_SFTCON */
#define PMU_DDR_PWR_SFTCON_OFFSET                          (0xF4U)
#define PMU_DDR_PWR_SFTCON_SW_DDR_SREF_REQ_SHIFT           (0U)
#define PMU_DDR_PWR_SFTCON_SW_DDR_SREF_REQ_MASK            (0x1U << PMU_DDR_PWR_SFTCON_SW_DDR_SREF_REQ_SHIFT)           /* 0x00000001 */
#define PMU_DDR_PWR_SFTCON_SW_DDRIO_RET_REQ_SHIFT          (1U)
#define PMU_DDR_PWR_SFTCON_SW_DDRIO_RET_REQ_MASK           (0x1U << PMU_DDR_PWR_SFTCON_SW_DDRIO_RET_REQ_SHIFT)          /* 0x00000002 */
#define PMU_DDR_PWR_SFTCON_SW_DDRIO_RET_EXIT_SHIFT         (2U)
#define PMU_DDR_PWR_SFTCON_SW_DDRIO_RET_EXIT_MASK          (0x1U << PMU_DDR_PWR_SFTCON_SW_DDRIO_RET_EXIT_SHIFT)         /* 0x00000004 */
#define PMU_DDR_PWR_SFTCON_DDRCTL_ACTIVE_WAIT_SHIFT        (3U)
#define PMU_DDR_PWR_SFTCON_DDRCTL_ACTIVE_WAIT_MASK         (0x1U << PMU_DDR_PWR_SFTCON_DDRCTL_ACTIVE_WAIT_SHIFT)        /* 0x00000008 */
/* DDR_PWR_STATE */
#define PMU_DDR_PWR_STATE_OFFSET                           (0xF8U)
#define PMU_DDR_PWR_STATE                                  (0x0U)
#define PMU_DDR_PWR_STATE_DDR_POWER_STATE_SHIFT            (0U)
#define PMU_DDR_PWR_STATE_DDR_POWER_STATE_MASK             (0x7U << PMU_DDR_PWR_STATE_DDR_POWER_STATE_SHIFT)            /* 0x00000007 */
/* DDR_PWR_ST */
#define PMU_DDR_PWR_ST_OFFSET                              (0xFCU)
#define PMU_DDR_PWR_ST                                     (0x0U)
#define PMU_DDR_PWR_ST_DDRCTL_C_SYSACK_SHIFT               (0U)
#define PMU_DDR_PWR_ST_DDRCTL_C_SYSACK_MASK                (0x1U << PMU_DDR_PWR_ST_DDRCTL_C_SYSACK_SHIFT)               /* 0x00000001 */
#define PMU_DDR_PWR_ST_DDRCTL_C_ACTIVE_SHIFT               (1U)
#define PMU_DDR_PWR_ST_DDRCTL_C_ACTIVE_MASK                (0x1U << PMU_DDR_PWR_ST_DDRCTL_C_ACTIVE_SHIFT)               /* 0x00000002 */
#define PMU_DDR_PWR_ST_DDRIO_RET_SHIFT                     (2U)
#define PMU_DDR_PWR_ST_DDRIO_RET_MASK                      (0x1U << PMU_DDR_PWR_ST_DDRIO_RET_SHIFT)                     /* 0x00000004 */
/* PWR_GATE_CON */
#define PMU_PWR_GATE_CON_OFFSET                            (0x100U)
#define PMU_PWR_GATE_CON_PD_NPU_DWN_ENA_SHIFT              (0U)
#define PMU_PWR_GATE_CON_PD_NPU_DWN_ENA_MASK               (0x1U << PMU_PWR_GATE_CON_PD_NPU_DWN_ENA_SHIFT)              /* 0x00000001 */
#define PMU_PWR_GATE_CON_PD_ISPP_DWN_ENA_SHIFT             (1U)
#define PMU_PWR_GATE_CON_PD_ISPP_DWN_ENA_MASK              (0x1U << PMU_PWR_GATE_CON_PD_ISPP_DWN_ENA_SHIFT)             /* 0x00000002 */
#define PMU_PWR_GATE_CON_PD_VEPU_DWN_ENA_SHIFT             (2U)
#define PMU_PWR_GATE_CON_PD_VEPU_DWN_ENA_MASK              (0x1U << PMU_PWR_GATE_CON_PD_VEPU_DWN_ENA_SHIFT)             /* 0x00000004 */
#define PMU_PWR_GATE_CON_PD_VDPU_DWN_ENA_SHIFT             (3U)
#define PMU_PWR_GATE_CON_PD_VDPU_DWN_ENA_MASK              (0x1U << PMU_PWR_GATE_CON_PD_VDPU_DWN_ENA_SHIFT)             /* 0x00000008 */
#define PMU_PWR_GATE_CON_PD_VI_DWN_ENA_SHIFT               (4U)
#define PMU_PWR_GATE_CON_PD_VI_DWN_ENA_MASK                (0x1U << PMU_PWR_GATE_CON_PD_VI_DWN_ENA_SHIFT)               /* 0x00000010 */
#define PMU_PWR_GATE_CON_PD_VO_DWN_ENA_SHIFT               (5U)
#define PMU_PWR_GATE_CON_PD_VO_DWN_ENA_MASK                (0x1U << PMU_PWR_GATE_CON_PD_VO_DWN_ENA_SHIFT)               /* 0x00000020 */
#define PMU_PWR_GATE_CON_PD_DDR_DWN_ENA_SHIFT              (6U)
#define PMU_PWR_GATE_CON_PD_DDR_DWN_ENA_MASK               (0x1U << PMU_PWR_GATE_CON_PD_DDR_DWN_ENA_SHIFT)              /* 0x00000040 */
#define PMU_PWR_GATE_CON_PD_NVM_DWN_ENA_SHIFT              (7U)
#define PMU_PWR_GATE_CON_PD_NVM_DWN_ENA_MASK               (0x1U << PMU_PWR_GATE_CON_PD_NVM_DWN_ENA_SHIFT)              /* 0x00000080 */
#define PMU_PWR_GATE_CON_PD_SDIO_DWN_ENA_SHIFT             (8U)
#define PMU_PWR_GATE_CON_PD_SDIO_DWN_ENA_MASK              (0x1U << PMU_PWR_GATE_CON_PD_SDIO_DWN_ENA_SHIFT)             /* 0x00000100 */
#define PMU_PWR_GATE_CON_PD_USB_DWN_ENA_SHIFT              (9U)
#define PMU_PWR_GATE_CON_PD_USB_DWN_ENA_MASK               (0x1U << PMU_PWR_GATE_CON_PD_USB_DWN_ENA_SHIFT)              /* 0x00000200 */
#define PMU_PWR_GATE_CON_PD_CRYPT_DWN_ENA_SHIFT            (10U)
#define PMU_PWR_GATE_CON_PD_CRYPT_DWN_ENA_MASK             (0x1U << PMU_PWR_GATE_CON_PD_CRYPT_DWN_ENA_SHIFT)            /* 0x00000400 */
/* PWR_GATE_STATE */
#define PMU_PWR_GATE_STATE_OFFSET                          (0x104U)
#define PMU_PWR_GATE_STATE                                 (0x0U)
#define PMU_PWR_GATE_STATE_POWER_GATE_STATE_SHIFT          (0U)
#define PMU_PWR_GATE_STATE_POWER_GATE_STATE_MASK           (0x7U << PMU_PWR_GATE_STATE_POWER_GATE_STATE_SHIFT)          /* 0x00000007 */
/* PWR_DWN_ST */
#define PMU_PWR_DWN_ST_OFFSET                              (0x108U)
#define PMU_PWR_DWN_ST                                     (0x0U)
#define PMU_PWR_DWN_ST_PD_NPU_DWN_STAT_SHIFT               (0U)
#define PMU_PWR_DWN_ST_PD_NPU_DWN_STAT_MASK                (0x1U << PMU_PWR_DWN_ST_PD_NPU_DWN_STAT_SHIFT)               /* 0x00000001 */
#define PMU_PWR_DWN_ST_PD_ISPP_DWN_STAT_SHIFT              (1U)
#define PMU_PWR_DWN_ST_PD_ISPP_DWN_STAT_MASK               (0x1U << PMU_PWR_DWN_ST_PD_ISPP_DWN_STAT_SHIFT)              /* 0x00000002 */
#define PMU_PWR_DWN_ST_PD_VEPU_DWN_STAT_SHIFT              (2U)
#define PMU_PWR_DWN_ST_PD_VEPU_DWN_STAT_MASK               (0x1U << PMU_PWR_DWN_ST_PD_VEPU_DWN_STAT_SHIFT)              /* 0x00000004 */
#define PMU_PWR_DWN_ST_PD_VDPU_DWN_STAT_SHIFT              (3U)
#define PMU_PWR_DWN_ST_PD_VDPU_DWN_STAT_MASK               (0x1U << PMU_PWR_DWN_ST_PD_VDPU_DWN_STAT_SHIFT)              /* 0x00000008 */
#define PMU_PWR_DWN_ST_PD_VI_DWN_STAT_SHIFT                (4U)
#define PMU_PWR_DWN_ST_PD_VI_DWN_STAT_MASK                 (0x1U << PMU_PWR_DWN_ST_PD_VI_DWN_STAT_SHIFT)                /* 0x00000010 */
#define PMU_PWR_DWN_ST_PD_VO_DWN_STAT_SHIFT                (5U)
#define PMU_PWR_DWN_ST_PD_VO_DWN_STAT_MASK                 (0x1U << PMU_PWR_DWN_ST_PD_VO_DWN_STAT_SHIFT)                /* 0x00000020 */
#define PMU_PWR_DWN_ST_PD_DDR_DWN_STAT_SHIFT               (6U)
#define PMU_PWR_DWN_ST_PD_DDR_DWN_STAT_MASK                (0x1U << PMU_PWR_DWN_ST_PD_DDR_DWN_STAT_SHIFT)               /* 0x00000040 */
#define PMU_PWR_DWN_ST_PD_NVM_DWN_STAT_SHIFT               (7U)
#define PMU_PWR_DWN_ST_PD_NVM_DWN_STAT_MASK                (0x1U << PMU_PWR_DWN_ST_PD_NVM_DWN_STAT_SHIFT)               /* 0x00000080 */
#define PMU_PWR_DWN_ST_PD_SDIO_DWN_STAT_SHIFT              (8U)
#define PMU_PWR_DWN_ST_PD_SDIO_DWN_STAT_MASK               (0x1U << PMU_PWR_DWN_ST_PD_SDIO_DWN_STAT_SHIFT)              /* 0x00000100 */
#define PMU_PWR_DWN_ST_PD_USB_DWN_STAT_SHIFT               (9U)
#define PMU_PWR_DWN_ST_PD_USB_DWN_STAT_MASK                (0x1U << PMU_PWR_DWN_ST_PD_USB_DWN_STAT_SHIFT)               /* 0x00000200 */
#define PMU_PWR_DWN_ST_PD_CRYPT_DWN_STAT_SHIFT             (10U)
#define PMU_PWR_DWN_ST_PD_CRYPT_DWN_STAT_MASK              (0x1U << PMU_PWR_DWN_ST_PD_CRYPT_DWN_STAT_SHIFT)             /* 0x00000400 */
/* PWR_GATE_SFTCON */
#define PMU_PWR_GATE_SFTCON_OFFSET                         (0x110U)
#define PMU_PWR_GATE_SFTCON_PD_NPU_DWN_ENA_SHIFT           (0U)
#define PMU_PWR_GATE_SFTCON_PD_NPU_DWN_ENA_MASK            (0x1U << PMU_PWR_GATE_SFTCON_PD_NPU_DWN_ENA_SHIFT)           /* 0x00000001 */
#define PMU_PWR_GATE_SFTCON_PD_ISPP_DWN_ENA_SHIFT          (1U)
#define PMU_PWR_GATE_SFTCON_PD_ISPP_DWN_ENA_MASK           (0x1U << PMU_PWR_GATE_SFTCON_PD_ISPP_DWN_ENA_SHIFT)          /* 0x00000002 */
#define PMU_PWR_GATE_SFTCON_PD_VEPU_DWN_ENA_SHIFT          (2U)
#define PMU_PWR_GATE_SFTCON_PD_VEPU_DWN_ENA_MASK           (0x1U << PMU_PWR_GATE_SFTCON_PD_VEPU_DWN_ENA_SHIFT)          /* 0x00000004 */
#define PMU_PWR_GATE_SFTCON_PD_VDPU_DWN_ENA_SHIFT          (3U)
#define PMU_PWR_GATE_SFTCON_PD_VDPU_DWN_ENA_MASK           (0x1U << PMU_PWR_GATE_SFTCON_PD_VDPU_DWN_ENA_SHIFT)          /* 0x00000008 */
#define PMU_PWR_GATE_SFTCON_PD_VI_DWN_ENA_SHIFT            (4U)
#define PMU_PWR_GATE_SFTCON_PD_VI_DWN_ENA_MASK             (0x1U << PMU_PWR_GATE_SFTCON_PD_VI_DWN_ENA_SHIFT)            /* 0x00000010 */
#define PMU_PWR_GATE_SFTCON_PD_VO_DWN_ENA_SHIFT            (5U)
#define PMU_PWR_GATE_SFTCON_PD_VO_DWN_ENA_MASK             (0x1U << PMU_PWR_GATE_SFTCON_PD_VO_DWN_ENA_SHIFT)            /* 0x00000020 */
#define PMU_PWR_GATE_SFTCON_PD_DDR_DWN_ENA_SHIFT           (6U)
#define PMU_PWR_GATE_SFTCON_PD_DDR_DWN_ENA_MASK            (0x1U << PMU_PWR_GATE_SFTCON_PD_DDR_DWN_ENA_SHIFT)           /* 0x00000040 */
#define PMU_PWR_GATE_SFTCON_PD_NVM_DWN_ENA_SHIFT           (7U)
#define PMU_PWR_GATE_SFTCON_PD_NVM_DWN_ENA_MASK            (0x1U << PMU_PWR_GATE_SFTCON_PD_NVM_DWN_ENA_SHIFT)           /* 0x00000080 */
#define PMU_PWR_GATE_SFTCON_PD_SDIO_DWN_ENA_SHIFT          (8U)
#define PMU_PWR_GATE_SFTCON_PD_SDIO_DWN_ENA_MASK           (0x1U << PMU_PWR_GATE_SFTCON_PD_SDIO_DWN_ENA_SHIFT)          /* 0x00000100 */
#define PMU_PWR_GATE_SFTCON_PD_USB_DWN_ENA_SHIFT           (9U)
#define PMU_PWR_GATE_SFTCON_PD_USB_DWN_ENA_MASK            (0x1U << PMU_PWR_GATE_SFTCON_PD_USB_DWN_ENA_SHIFT)           /* 0x00000200 */
#define PMU_PWR_GATE_SFTCON_PD_CRYPT_DWN_ENA_SHIFT         (10U)
#define PMU_PWR_GATE_SFTCON_PD_CRYPT_DWN_ENA_MASK          (0x1U << PMU_PWR_GATE_SFTCON_PD_CRYPT_DWN_ENA_SHIFT)         /* 0x00000400 */
/* VOL_GATE_SFTCON */
#define PMU_VOL_GATE_SFTCON_OFFSET                         (0x118U)
#define PMU_VOL_GATE_SFTCON_VD_NPU_ENA_SHIFT               (0U)
#define PMU_VOL_GATE_SFTCON_VD_NPU_ENA_MASK                (0x1U << PMU_VOL_GATE_SFTCON_VD_NPU_ENA_SHIFT)               /* 0x00000001 */
#define PMU_VOL_GATE_SFTCON_VD_VEPU_ENA_SHIFT              (2U)
#define PMU_VOL_GATE_SFTCON_VD_VEPU_ENA_MASK               (0x1U << PMU_VOL_GATE_SFTCON_VD_VEPU_ENA_SHIFT)              /* 0x00000004 */
/* CRU_PWR_CON */
#define PMU_CRU_PWR_CON_OFFSET                             (0x120U)
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
#define PMU_CRU_PWR_CON_PD_AUDIO_CLK_SRC_GATE_ENA_SHIFT    (11U)
#define PMU_CRU_PWR_CON_PD_AUDIO_CLK_SRC_GATE_ENA_MASK     (0x1U << PMU_CRU_PWR_CON_PD_AUDIO_CLK_SRC_GATE_ENA_SHIFT)    /* 0x00000800 */
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
/* CRU_PWR_STATE */
#define PMU_CRU_PWR_STATE_OFFSET                           (0x128U)
#define PMU_CRU_PWR_STATE                                  (0x0U)
#define PMU_CRU_PWR_STATE_CRU_POWER_STATE_SHIFT            (0U)
#define PMU_CRU_PWR_STATE_CRU_POWER_STATE_MASK             (0xFU << PMU_CRU_PWR_STATE_CRU_POWER_STATE_SHIFT)            /* 0x0000000F */
/* PLLPD_CON */
#define PMU_PLLPD_CON_OFFSET                               (0x130U)
#define PMU_PLLPD_CON_APLL_PD_ENA_SHIFT                    (0U)
#define PMU_PLLPD_CON_APLL_PD_ENA_MASK                     (0x1U << PMU_PLLPD_CON_APLL_PD_ENA_SHIFT)                    /* 0x00000001 */
#define PMU_PLLPD_CON_DPLL_PD_ENA_SHIFT                    (1U)
#define PMU_PLLPD_CON_DPLL_PD_ENA_MASK                     (0x1U << PMU_PLLPD_CON_DPLL_PD_ENA_SHIFT)                    /* 0x00000002 */
#define PMU_PLLPD_CON_CPLL_PD_ENA_SHIFT                    (2U)
#define PMU_PLLPD_CON_CPLL_PD_ENA_MASK                     (0x1U << PMU_PLLPD_CON_CPLL_PD_ENA_SHIFT)                    /* 0x00000004 */
#define PMU_PLLPD_CON_HPLL_PD_ENA_SHIFT                    (3U)
#define PMU_PLLPD_CON_HPLL_PD_ENA_MASK                     (0x1U << PMU_PLLPD_CON_HPLL_PD_ENA_SHIFT)                    /* 0x00000008 */
#define PMU_PLLPD_CON_GPLL_PD_ENA_SHIFT                    (4U)
#define PMU_PLLPD_CON_GPLL_PD_ENA_MASK                     (0x1U << PMU_PLLPD_CON_GPLL_PD_ENA_SHIFT)                    /* 0x00000010 */
/* PLLPD_SFTCON */
#define PMU_PLLPD_SFTCON_OFFSET                            (0x134U)
#define PMU_PLLPD_SFTCON_APLL_PD_ENA_SHIFT                 (0U)
#define PMU_PLLPD_SFTCON_APLL_PD_ENA_MASK                  (0x1U << PMU_PLLPD_SFTCON_APLL_PD_ENA_SHIFT)                 /* 0x00000001 */
#define PMU_PLLPD_SFTCON_DPLL_PD_ENA_SHIFT                 (1U)
#define PMU_PLLPD_SFTCON_DPLL_PD_ENA_MASK                  (0x1U << PMU_PLLPD_SFTCON_DPLL_PD_ENA_SHIFT)                 /* 0x00000002 */
#define PMU_PLLPD_SFTCON_CPLL_PD_ENA_SHIFT                 (2U)
#define PMU_PLLPD_SFTCON_CPLL_PD_ENA_MASK                  (0x1U << PMU_PLLPD_SFTCON_CPLL_PD_ENA_SHIFT)                 /* 0x00000004 */
#define PMU_PLLPD_SFTCON_HPLL_PD_ENA_SHIFT                 (3U)
#define PMU_PLLPD_SFTCON_HPLL_PD_ENA_MASK                  (0x1U << PMU_PLLPD_SFTCON_HPLL_PD_ENA_SHIFT)                 /* 0x00000008 */
#define PMU_PLLPD_SFTCON_GPLL_PD_ENA_SHIFT                 (4U)
#define PMU_PLLPD_SFTCON_GPLL_PD_ENA_MASK                  (0x1U << PMU_PLLPD_SFTCON_GPLL_PD_ENA_SHIFT)                 /* 0x00000010 */
/* INFO_TX_CON */
#define PMU_INFO_TX_CON_OFFSET                             (0x150U)
#define PMU_INFO_TX_CON_INFO_TX_EN_SHIFT                   (0U)
#define PMU_INFO_TX_CON_INFO_TX_EN_MASK                    (0x1U << PMU_INFO_TX_CON_INFO_TX_EN_SHIFT)                   /* 0x00000001 */
#define PMU_INFO_TX_CON_INFO_TX_CON_SHIFT                  (4U)
#define PMU_INFO_TX_CON_INFO_TX_CON_MASK                   (0x7U << PMU_INFO_TX_CON_INFO_TX_CON_SHIFT)                  /* 0x00000070 */
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
#define I2C_CON_DATA_UPD_ST_MASK                           (0x7U << I2C_CON_DATA_UPD_ST_SHIFT)                          /* 0x00000700 */
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
/******************************************SPI*******************************************/
/* CTRLR0 */
#define SPI_CTRLR0_OFFSET                                  (0x0U)
#define SPI_CTRLR0_DFS_SHIFT                               (0U)
#define SPI_CTRLR0_DFS_MASK                                (0x3U << SPI_CTRLR0_DFS_SHIFT)                               /* 0x00000003 */
#define SPI_CTRLR0_CFS_SHIFT                               (2U)
#define SPI_CTRLR0_CFS_MASK                                (0xFU << SPI_CTRLR0_CFS_SHIFT)                               /* 0x0000003C */
#define SPI_CTRLR0_SCPH_SHIFT                              (6U)
#define SPI_CTRLR0_SCPH_MASK                               (0x1U << SPI_CTRLR0_SCPH_SHIFT)                              /* 0x00000040 */
#define SPI_CTRLR0_SCPOL_SHIFT                             (7U)
#define SPI_CTRLR0_SCPOL_MASK                              (0x1U << SPI_CTRLR0_SCPOL_SHIFT)                             /* 0x00000080 */
#define SPI_CTRLR0_CSM_SHIFT                               (8U)
#define SPI_CTRLR0_CSM_MASK                                (0x3U << SPI_CTRLR0_CSM_SHIFT)                               /* 0x00000300 */
#define SPI_CTRLR0_SSD_SHIFT                               (10U)
#define SPI_CTRLR0_SSD_MASK                                (0x1U << SPI_CTRLR0_SSD_SHIFT)                               /* 0x00000400 */
#define SPI_CTRLR0_EM_SHIFT                                (11U)
#define SPI_CTRLR0_EM_MASK                                 (0x1U << SPI_CTRLR0_EM_SHIFT)                                /* 0x00000800 */
#define SPI_CTRLR0_FBM_SHIFT                               (12U)
#define SPI_CTRLR0_FBM_MASK                                (0x1U << SPI_CTRLR0_FBM_SHIFT)                               /* 0x00001000 */
#define SPI_CTRLR0_BHT_SHIFT                               (13U)
#define SPI_CTRLR0_BHT_MASK                                (0x1U << SPI_CTRLR0_BHT_SHIFT)                               /* 0x00002000 */
#define SPI_CTRLR0_RSD_SHIFT                               (14U)
#define SPI_CTRLR0_RSD_MASK                                (0x3U << SPI_CTRLR0_RSD_SHIFT)                               /* 0x0000C000 */
#define SPI_CTRLR0_FRF_SHIFT                               (16U)
#define SPI_CTRLR0_FRF_MASK                                (0x3U << SPI_CTRLR0_FRF_SHIFT)                               /* 0x00030000 */
#define SPI_CTRLR0_XFM_SHIFT                               (18U)
#define SPI_CTRLR0_XFM_MASK                                (0x3U << SPI_CTRLR0_XFM_SHIFT)                               /* 0x000C0000 */
#define SPI_CTRLR0_OPM_SHIFT                               (20U)
#define SPI_CTRLR0_OPM_MASK                                (0x1U << SPI_CTRLR0_OPM_SHIFT)                               /* 0x00100000 */
#define SPI_CTRLR0_MTM_SHIFT                               (21U)
#define SPI_CTRLR0_MTM_MASK                                (0x1U << SPI_CTRLR0_MTM_SHIFT)                               /* 0x00200000 */
#define SPI_CTRLR0_SOI_SHIFT                               (23U)
#define SPI_CTRLR0_SOI_MASK                                (0x3U << SPI_CTRLR0_SOI_SHIFT)                               /* 0x01800000 */
#define SPI_CTRLR0_LBK_SHIFT                               (25U)
#define SPI_CTRLR0_LBK_MASK                                (0x1U << SPI_CTRLR0_LBK_SHIFT)                               /* 0x02000000 */
/* CTRLR1 */
#define SPI_CTRLR1_OFFSET                                  (0x4U)
#define SPI_CTRLR1_NDM_SHIFT                               (0U)
#define SPI_CTRLR1_NDM_MASK                                (0xFFFFFFFFU << SPI_CTRLR1_NDM_SHIFT)                        /* 0xFFFFFFFF */
/* ENR */
#define SPI_ENR_OFFSET                                     (0x8U)
#define SPI_ENR_ENR_SHIFT                                  (0U)
#define SPI_ENR_ENR_MASK                                   (0x1U << SPI_ENR_ENR_SHIFT)                                  /* 0x00000001 */
/* SER */
#define SPI_SER_OFFSET                                     (0xCU)
#define SPI_SER_SER_SHIFT                                  (0U)
#define SPI_SER_SER_MASK                                   (0x3U << SPI_SER_SER_SHIFT)                                  /* 0x00000003 */
/* BAUDR */
#define SPI_BAUDR_OFFSET                                   (0x10U)
#define SPI_BAUDR_BAUDR_SHIFT                              (0U)
#define SPI_BAUDR_BAUDR_MASK                               (0xFFFFU << SPI_BAUDR_BAUDR_SHIFT)                           /* 0x0000FFFF */
/* TXFTLR */
#define SPI_TXFTLR_OFFSET                                  (0x14U)
#define SPI_TXFTLR_XFTLR_SHIFT                             (0U)
#define SPI_TXFTLR_XFTLR_MASK                              (0x3FU << SPI_TXFTLR_XFTLR_SHIFT)                            /* 0x0000003F */
/* RXFTLR */
#define SPI_RXFTLR_OFFSET                                  (0x18U)
#define SPI_RXFTLR_RXFTLR_SHIFT                            (0U)
#define SPI_RXFTLR_RXFTLR_MASK                             (0x3FU << SPI_RXFTLR_RXFTLR_SHIFT)                           /* 0x0000003F */
/* TXFLR */
#define SPI_TXFLR_OFFSET                                   (0x1CU)
#define SPI_TXFLR                                          (0x0U)
#define SPI_TXFLR_TXFLR_SHIFT                              (0U)
#define SPI_TXFLR_TXFLR_MASK                               (0x7FU << SPI_TXFLR_TXFLR_SHIFT)                             /* 0x0000007F */
/* RXFLR */
#define SPI_RXFLR_OFFSET                                   (0x20U)
#define SPI_RXFLR                                          (0x0U)
#define SPI_RXFLR_RXFLR_SHIFT                              (0U)
#define SPI_RXFLR_RXFLR_MASK                               (0x7FU << SPI_RXFLR_RXFLR_SHIFT)                             /* 0x0000007F */
/* SR */
#define SPI_SR_OFFSET                                      (0x24U)
#define SPI_SR                                             (0x4CU)
#define SPI_SR_BSF_SHIFT                                   (0U)
#define SPI_SR_BSF_MASK                                    (0x1U << SPI_SR_BSF_SHIFT)                                   /* 0x00000001 */
#define SPI_SR_TFF_SHIFT                                   (1U)
#define SPI_SR_TFF_MASK                                    (0x1U << SPI_SR_TFF_SHIFT)                                   /* 0x00000002 */
#define SPI_SR_TFE_SHIFT                                   (2U)
#define SPI_SR_TFE_MASK                                    (0x1U << SPI_SR_TFE_SHIFT)                                   /* 0x00000004 */
#define SPI_SR_RFE_SHIFT                                   (3U)
#define SPI_SR_RFE_MASK                                    (0x1U << SPI_SR_RFE_SHIFT)                                   /* 0x00000008 */
#define SPI_SR_RFF_SHIFT                                   (4U)
#define SPI_SR_RFF_MASK                                    (0x1U << SPI_SR_RFF_SHIFT)                                   /* 0x00000010 */
#define SPI_SR_STB_SHIFT                                   (5U)
#define SPI_SR_STB_MASK                                    (0x1U << SPI_SR_STB_SHIFT)                                   /* 0x00000020 */
#define SPI_SR_SSI_SHIFT                                   (6U)
#define SPI_SR_SSI_MASK                                    (0x1U << SPI_SR_SSI_SHIFT)                                   /* 0x00000040 */
/* IPR */
#define SPI_IPR_OFFSET                                     (0x28U)
#define SPI_IPR_IPR_SHIFT                                  (0U)
#define SPI_IPR_IPR_MASK                                   (0x1U << SPI_IPR_IPR_SHIFT)                                  /* 0x00000001 */
/* IMR */
#define SPI_IMR_OFFSET                                     (0x2CU)
#define SPI_IMR_TFEIM_SHIFT                                (0U)
#define SPI_IMR_TFEIM_MASK                                 (0x1U << SPI_IMR_TFEIM_SHIFT)                                /* 0x00000001 */
#define SPI_IMR_TFOIM_SHIFT                                (1U)
#define SPI_IMR_TFOIM_MASK                                 (0x1U << SPI_IMR_TFOIM_SHIFT)                                /* 0x00000002 */
#define SPI_IMR_RFUIM_SHIFT                                (2U)
#define SPI_IMR_RFUIM_MASK                                 (0x1U << SPI_IMR_RFUIM_SHIFT)                                /* 0x00000004 */
#define SPI_IMR_RFOIM_SHIFT                                (3U)
#define SPI_IMR_RFOIM_MASK                                 (0x1U << SPI_IMR_RFOIM_SHIFT)                                /* 0x00000008 */
#define SPI_IMR_RFFIM_SHIFT                                (4U)
#define SPI_IMR_RFFIM_MASK                                 (0x1U << SPI_IMR_RFFIM_SHIFT)                                /* 0x00000010 */
#define SPI_IMR_TOIM_SHIFT                                 (5U)
#define SPI_IMR_TOIM_MASK                                  (0x1U << SPI_IMR_TOIM_SHIFT)                                 /* 0x00000020 */
#define SPI_IMR_SSPIM_SHIFT                                (6U)
#define SPI_IMR_SSPIM_MASK                                 (0x1U << SPI_IMR_SSPIM_SHIFT)                                /* 0x00000040 */
#define SPI_IMR_TXFIM_SHIFT                                (7U)
#define SPI_IMR_TXFIM_MASK                                 (0x1U << SPI_IMR_TXFIM_SHIFT)                                /* 0x00000080 */
/* ISR */
#define SPI_ISR_OFFSET                                     (0x30U)
#define SPI_ISR_TFEIS_SHIFT                                (0U)
#define SPI_ISR_TFEIS_MASK                                 (0x1U << SPI_ISR_TFEIS_SHIFT)                                /* 0x00000001 */
#define SPI_ISR_TFOIS_SHIFT                                (1U)
#define SPI_ISR_TFOIS_MASK                                 (0x1U << SPI_ISR_TFOIS_SHIFT)                                /* 0x00000002 */
#define SPI_ISR_RFUIS_SHIFT                                (2U)
#define SPI_ISR_RFUIS_MASK                                 (0x1U << SPI_ISR_RFUIS_SHIFT)                                /* 0x00000004 */
#define SPI_ISR_RFOIS_SHIFT                                (3U)
#define SPI_ISR_RFOIS_MASK                                 (0x1U << SPI_ISR_RFOIS_SHIFT)                                /* 0x00000008 */
#define SPI_ISR_RFFIS_SHIFT                                (4U)
#define SPI_ISR_RFFIS_MASK                                 (0x1U << SPI_ISR_RFFIS_SHIFT)                                /* 0x00000010 */
#define SPI_ISR_TOIS_SHIFT                                 (5U)
#define SPI_ISR_TOIS_MASK                                  (0x1U << SPI_ISR_TOIS_SHIFT)                                 /* 0x00000020 */
#define SPI_ISR_SSPIS_SHIFT                                (6U)
#define SPI_ISR_SSPIS_MASK                                 (0x1U << SPI_ISR_SSPIS_SHIFT)                                /* 0x00000040 */
#define SPI_ISR_TXFIS_SHIFT                                (7U)
#define SPI_ISR_TXFIS_MASK                                 (0x1U << SPI_ISR_TXFIS_SHIFT)                                /* 0x00000080 */
/* RISR */
#define SPI_RISR_OFFSET                                    (0x34U)
#define SPI_RISR_TFERIS_SHIFT                              (0U)
#define SPI_RISR_TFERIS_MASK                               (0x1U << SPI_RISR_TFERIS_SHIFT)                              /* 0x00000001 */
#define SPI_RISR_TFORIS_SHIFT                              (1U)
#define SPI_RISR_TFORIS_MASK                               (0x1U << SPI_RISR_TFORIS_SHIFT)                              /* 0x00000002 */
#define SPI_RISR_RFURIS_SHIFT                              (2U)
#define SPI_RISR_RFURIS_MASK                               (0x1U << SPI_RISR_RFURIS_SHIFT)                              /* 0x00000004 */
#define SPI_RISR_RFORIS_SHIFT                              (3U)
#define SPI_RISR_RFORIS_MASK                               (0x1U << SPI_RISR_RFORIS_SHIFT)                              /* 0x00000008 */
#define SPI_RISR_RFFRIS_SHIFT                              (4U)
#define SPI_RISR_RFFRIS_MASK                               (0x1U << SPI_RISR_RFFRIS_SHIFT)                              /* 0x00000010 */
#define SPI_RISR_TORIS_SHIFT                               (5U)
#define SPI_RISR_TORIS_MASK                                (0x1U << SPI_RISR_TORIS_SHIFT)                               /* 0x00000020 */
#define SPI_RISR_SSPRIS_SHIFT                              (6U)
#define SPI_RISR_SSPRIS_MASK                               (0x1U << SPI_RISR_SSPRIS_SHIFT)                              /* 0x00000040 */
#define SPI_RISR_TXFRIS_SHIFT                              (7U)
#define SPI_RISR_TXFRIS_MASK                               (0x1U << SPI_RISR_TXFRIS_SHIFT)                              /* 0x00000080 */
/* ICR */
#define SPI_ICR_OFFSET                                     (0x38U)
#define SPI_ICR_CCI_SHIFT                                  (0U)
#define SPI_ICR_CCI_MASK                                   (0x1U << SPI_ICR_CCI_SHIFT)                                  /* 0x00000001 */
#define SPI_ICR_CRFUI_SHIFT                                (1U)
#define SPI_ICR_CRFUI_MASK                                 (0x1U << SPI_ICR_CRFUI_SHIFT)                                /* 0x00000002 */
#define SPI_ICR_CRFOI_SHIFT                                (2U)
#define SPI_ICR_CRFOI_MASK                                 (0x1U << SPI_ICR_CRFOI_SHIFT)                                /* 0x00000004 */
#define SPI_ICR_CTFOI_SHIFT                                (3U)
#define SPI_ICR_CTFOI_MASK                                 (0x1U << SPI_ICR_CTFOI_SHIFT)                                /* 0x00000008 */
#define SPI_ICR_CTOI_SHIFT                                 (4U)
#define SPI_ICR_CTOI_MASK                                  (0x1U << SPI_ICR_CTOI_SHIFT)                                 /* 0x00000010 */
#define SPI_ICR_CSSPI_SHIFT                                (5U)
#define SPI_ICR_CSSPI_MASK                                 (0x1U << SPI_ICR_CSSPI_SHIFT)                                /* 0x00000020 */
#define SPI_ICR_CTXFI_SHIFT                                (6U)
#define SPI_ICR_CTXFI_MASK                                 (0x1U << SPI_ICR_CTXFI_SHIFT)                                /* 0x00000040 */
/* DMACR */
#define SPI_DMACR_OFFSET                                   (0x3CU)
#define SPI_DMACR_RDE_SHIFT                                (0U)
#define SPI_DMACR_RDE_MASK                                 (0x1U << SPI_DMACR_RDE_SHIFT)                                /* 0x00000001 */
#define SPI_DMACR_TDE_SHIFT                                (1U)
#define SPI_DMACR_TDE_MASK                                 (0x1U << SPI_DMACR_TDE_SHIFT)                                /* 0x00000002 */
/* DMATDLR */
#define SPI_DMATDLR_OFFSET                                 (0x40U)
#define SPI_DMATDLR_TDL_SHIFT                              (0U)
#define SPI_DMATDLR_TDL_MASK                               (0x3FU << SPI_DMATDLR_TDL_SHIFT)                             /* 0x0000003F */
/* DMARDLR */
#define SPI_DMARDLR_OFFSET                                 (0x44U)
#define SPI_DMARDLR_RDL_SHIFT                              (0U)
#define SPI_DMARDLR_RDL_MASK                               (0x3FU << SPI_DMARDLR_RDL_SHIFT)                             /* 0x0000003F */
/* TIMEOUT */
#define SPI_TIMEOUT_OFFSET                                 (0x4CU)
#define SPI_TIMEOUT_TOV_SHIFT                              (0U)
#define SPI_TIMEOUT_TOV_MASK                               (0xFFFFU << SPI_TIMEOUT_TOV_SHIFT)                           /* 0x0000FFFF */
#define SPI_TIMEOUT_TOE_SHIFT                              (16U)
#define SPI_TIMEOUT_TOE_MASK                               (0x1U << SPI_TIMEOUT_TOE_SHIFT)                              /* 0x00010000 */
/* BYPASS */
#define SPI_BYPASS_OFFSET                                  (0x50U)
#define SPI_BYPASS_BYEN_SHIFT                              (0U)
#define SPI_BYPASS_BYEN_MASK                               (0x1U << SPI_BYPASS_BYEN_SHIFT)                              /* 0x00000001 */
#define SPI_BYPASS_FBM_SHIFT                               (1U)
#define SPI_BYPASS_FBM_MASK                                (0x1U << SPI_BYPASS_FBM_SHIFT)                               /* 0x00000002 */
#define SPI_BYPASS_END_SHIFT                               (2U)
#define SPI_BYPASS_END_MASK                                (0x1U << SPI_BYPASS_END_SHIFT)                               /* 0x00000004 */
#define SPI_BYPASS_RXCP_SHIFT                              (3U)
#define SPI_BYPASS_RXCP_MASK                               (0x1U << SPI_BYPASS_RXCP_SHIFT)                              /* 0x00000008 */
#define SPI_BYPASS_TXCP_SHIFT                              (4U)
#define SPI_BYPASS_TXCP_MASK                               (0x1U << SPI_BYPASS_TXCP_SHIFT)                              /* 0x00000010 */
/* TXDR */
#define SPI_TXDR_OFFSET                                    (0x400U)
#define SPI_TXDR_TXDR_SHIFT                                (0U)
#define SPI_TXDR_TXDR_MASK                                 (0xFFFFU << SPI_TXDR_TXDR_SHIFT)                             /* 0x0000FFFF */
/* RXDR */
#define SPI_RXDR_OFFSET                                    (0x800U)
#define SPI_RXDR                                           (0x0U)
#define SPI_RXDR_RXDR_SHIFT                                (0U)
#define SPI_RXDR_RXDR_MASK                                 (0xFFFFU << SPI_RXDR_RXDR_SHIFT)                             /* 0x0000FFFF */
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
#define GPIO_VER_ID                                        (0x1000C2BU)
#define GPIO_VER_ID_VER_ID_SHIFT                           (0U)
#define GPIO_VER_ID_VER_ID_MASK                            (0xFFFFFFFFU << GPIO_VER_ID_VER_ID_SHIFT)                    /* 0xFFFFFFFF */
/*****************************************PMUCRU*****************************************/
/* MODE_CON00 */
#define PMUCRU_MODE_CON00_OFFSET                           (0x0U)
#define PMUCRU_MODE_CON00_CLK_GPLL_MODE_SHIFT              (0U)
#define PMUCRU_MODE_CON00_CLK_GPLL_MODE_MASK               (0x3U << PMUCRU_MODE_CON00_CLK_GPLL_MODE_SHIFT)              /* 0x00000003 */
/* GPLL_CON0 */
#define PMUCRU_GPLL_CON0_OFFSET                            (0x10U)
#define PMUCRU_GPLL_CON0_FBDIV_SHIFT                       (0U)
#define PMUCRU_GPLL_CON0_FBDIV_MASK                        (0xFFFU << PMUCRU_GPLL_CON0_FBDIV_SHIFT)                     /* 0x00000FFF */
#define PMUCRU_GPLL_CON0_POSTDIV1_SHIFT                    (12U)
#define PMUCRU_GPLL_CON0_POSTDIV1_MASK                     (0x7U << PMUCRU_GPLL_CON0_POSTDIV1_SHIFT)                    /* 0x00007000 */
#define PMUCRU_GPLL_CON0_BYPASS_SHIFT                      (15U)
#define PMUCRU_GPLL_CON0_BYPASS_MASK                       (0x1U << PMUCRU_GPLL_CON0_BYPASS_SHIFT)                      /* 0x00008000 */
/* GPLL_CON1 */
#define PMUCRU_GPLL_CON1_OFFSET                            (0x14U)
#define PMUCRU_GPLL_CON1_REFDIV_SHIFT                      (0U)
#define PMUCRU_GPLL_CON1_REFDIV_MASK                       (0x3FU << PMUCRU_GPLL_CON1_REFDIV_SHIFT)                     /* 0x0000003F */
#define PMUCRU_GPLL_CON1_POSTDIV2_SHIFT                    (6U)
#define PMUCRU_GPLL_CON1_POSTDIV2_MASK                     (0x7U << PMUCRU_GPLL_CON1_POSTDIV2_SHIFT)                    /* 0x000001C0 */
#define PMUCRU_GPLL_CON1_PLL_LOCK_SHIFT                    (10U)
#define PMUCRU_GPLL_CON1_PLL_LOCK_MASK                     (0x1U << PMUCRU_GPLL_CON1_PLL_LOCK_SHIFT)                    /* 0x00000400 */
#define PMUCRU_GPLL_CON1_DSMPD_SHIFT                       (12U)
#define PMUCRU_GPLL_CON1_DSMPD_MASK                        (0x1U << PMUCRU_GPLL_CON1_DSMPD_SHIFT)                       /* 0x00001000 */
#define PMUCRU_GPLL_CON1_PLLPD0_SHIFT                      (13U)
#define PMUCRU_GPLL_CON1_PLLPD0_MASK                       (0x1U << PMUCRU_GPLL_CON1_PLLPD0_SHIFT)                      /* 0x00002000 */
#define PMUCRU_GPLL_CON1_PLLPD1_SHIFT                      (14U)
#define PMUCRU_GPLL_CON1_PLLPD1_MASK                       (0x1U << PMUCRU_GPLL_CON1_PLLPD1_SHIFT)                      /* 0x00004000 */
#define PMUCRU_GPLL_CON1_PLLPDSEL_SHIFT                    (15U)
#define PMUCRU_GPLL_CON1_PLLPDSEL_MASK                     (0x1U << PMUCRU_GPLL_CON1_PLLPDSEL_SHIFT)                    /* 0x00008000 */
/* GPLL_CON2 */
#define PMUCRU_GPLL_CON2_OFFSET                            (0x18U)
#define PMUCRU_GPLL_CON2_FRACDIV_SHIFT                     (0U)
#define PMUCRU_GPLL_CON2_FRACDIV_MASK                      (0xFFFFFFU << PMUCRU_GPLL_CON2_FRACDIV_SHIFT)                /* 0x00FFFFFF */
#define PMUCRU_GPLL_CON2_DACPD_SHIFT                       (24U)
#define PMUCRU_GPLL_CON2_DACPD_MASK                        (0x1U << PMUCRU_GPLL_CON2_DACPD_SHIFT)                       /* 0x01000000 */
#define PMUCRU_GPLL_CON2_FOUTPOSTDIVPD_SHIFT               (25U)
#define PMUCRU_GPLL_CON2_FOUTPOSTDIVPD_MASK                (0x1U << PMUCRU_GPLL_CON2_FOUTPOSTDIVPD_SHIFT)               /* 0x02000000 */
#define PMUCRU_GPLL_CON2_FOUTVCOPD_SHIFT                   (26U)
#define PMUCRU_GPLL_CON2_FOUTVCOPD_MASK                    (0x1U << PMUCRU_GPLL_CON2_FOUTVCOPD_SHIFT)                   /* 0x04000000 */
#define PMUCRU_GPLL_CON2_FOUT4PHASEPD_SHIFT                (27U)
#define PMUCRU_GPLL_CON2_FOUT4PHASEPD_MASK                 (0x1U << PMUCRU_GPLL_CON2_FOUT4PHASEPD_SHIFT)                /* 0x08000000 */
/* GPLL_CON3 */
#define PMUCRU_GPLL_CON3_OFFSET                            (0x1CU)
#define PMUCRU_GPLL_CON3_SSMOD_BP_SHIFT                    (0U)
#define PMUCRU_GPLL_CON3_SSMOD_BP_MASK                     (0x1U << PMUCRU_GPLL_CON3_SSMOD_BP_SHIFT)                    /* 0x00000001 */
#define PMUCRU_GPLL_CON3_SSMOD_DISABLE_SSCG_SHIFT          (1U)
#define PMUCRU_GPLL_CON3_SSMOD_DISABLE_SSCG_MASK           (0x1U << PMUCRU_GPLL_CON3_SSMOD_DISABLE_SSCG_SHIFT)          /* 0x00000002 */
#define PMUCRU_GPLL_CON3_SSMOD_RESET_SHIFT                 (2U)
#define PMUCRU_GPLL_CON3_SSMOD_RESET_MASK                  (0x1U << PMUCRU_GPLL_CON3_SSMOD_RESET_SHIFT)                 /* 0x00000004 */
#define PMUCRU_GPLL_CON3_SSMOD_DOWNSPREAD_SHIFT            (3U)
#define PMUCRU_GPLL_CON3_SSMOD_DOWNSPREAD_MASK             (0x1U << PMUCRU_GPLL_CON3_SSMOD_DOWNSPREAD_SHIFT)            /* 0x00000008 */
#define PMUCRU_GPLL_CON3_SSMOD_DIVVAL_SHIFT                (4U)
#define PMUCRU_GPLL_CON3_SSMOD_DIVVAL_MASK                 (0xFU << PMUCRU_GPLL_CON3_SSMOD_DIVVAL_SHIFT)                /* 0x000000F0 */
#define PMUCRU_GPLL_CON3_SSMOD_SPREAD_SHIFT                (8U)
#define PMUCRU_GPLL_CON3_SSMOD_SPREAD_MASK                 (0x1FU << PMUCRU_GPLL_CON3_SSMOD_SPREAD_SHIFT)               /* 0x00001F00 */
/* GPLL_CON4 */
#define PMUCRU_GPLL_CON4_OFFSET                            (0x20U)
#define PMUCRU_GPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT          (0U)
#define PMUCRU_GPLL_CON4_SSMOD_SEL_EXT_WAVE_MASK           (0x1U << PMUCRU_GPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT)          /* 0x00000001 */
#define PMUCRU_GPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT           (8U)
#define PMUCRU_GPLL_CON4_SSMOD_EXT_MAXADDR_MASK            (0xFFU << PMUCRU_GPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT)          /* 0x0000FF00 */
/* GPLL_CON5 */
#define PMUCRU_GPLL_CON5_OFFSET                            (0x24U)
#define PMUCRU_GPLL_CON5_FOUT2XPD_SHIFT                    (0U)
#define PMUCRU_GPLL_CON5_FOUT2XPD_MASK                     (0x1U << PMUCRU_GPLL_CON5_FOUT2XPD_SHIFT)                    /* 0x00000001 */
#define PMUCRU_GPLL_CON5_OFFSETCAL_BYP_SHIFT               (1U)
#define PMUCRU_GPLL_CON5_OFFSETCAL_BYP_MASK                (0x1U << PMUCRU_GPLL_CON5_OFFSETCAL_BYP_SHIFT)               /* 0x00000002 */
#define PMUCRU_GPLL_CON5_OFFSETCAL_EN_SHIFT                (2U)
#define PMUCRU_GPLL_CON5_OFFSETCAL_EN_MASK                 (0x1U << PMUCRU_GPLL_CON5_OFFSETCAL_EN_SHIFT)                /* 0x00000004 */
#define PMUCRU_GPLL_CON5_OFFSETCAL_FAST_SHIFT              (3U)
#define PMUCRU_GPLL_CON5_OFFSETCAL_FAST_MASK               (0x1U << PMUCRU_GPLL_CON5_OFFSETCAL_FAST_SHIFT)              /* 0x00000008 */
#define PMUCRU_GPLL_CON5_OFFSETCAL_IN_SHIFT                (4U)
#define PMUCRU_GPLL_CON5_OFFSETCAL_IN_MASK                 (0xFFFU << PMUCRU_GPLL_CON5_OFFSETCAL_IN_SHIFT)              /* 0x0000FFF0 */
/* GPLL_CON6 */
#define PMUCRU_GPLL_CON6_OFFSET                            (0x28U)
#define PMUCRU_GPLL_CON6_OFFSETCAL_CNT_SHIFT               (0U)
#define PMUCRU_GPLL_CON6_OFFSETCAL_CNT_MASK                (0x7U << PMUCRU_GPLL_CON6_OFFSETCAL_CNT_SHIFT)               /* 0x00000007 */
/* GPLL_OFFSETCAL_STATUS */
#define PMUCRU_GPLL_OFFSETCAL_STATUS_OFFSET                (0x30U)
#define PMUCRU_GPLL_OFFSETCAL_STATUS_OFFSETCAL_OUT_SHIFT   (0U)
#define PMUCRU_GPLL_OFFSETCAL_STATUS_OFFSETCAL_OUT_MASK    (0xFFFU << PMUCRU_GPLL_OFFSETCAL_STATUS_OFFSETCAL_OUT_SHIFT) /* 0x00000FFF */
#define PMUCRU_GPLL_OFFSETCAL_STATUS_OFFSETCAL_LOCK_SHIFT  (16U)
#define PMUCRU_GPLL_OFFSETCAL_STATUS_OFFSETCAL_LOCK_MASK   (0x1U << PMUCRU_GPLL_OFFSETCAL_STATUS_OFFSETCAL_LOCK_SHIFT)  /* 0x00010000 */
/* CLKSEL_CON00 */
#define PMUCRU_CLKSEL_CON00_OFFSET                         (0x100U)
#define PMUCRU_CLKSEL_CON00_XIN_OSC0_DIV_DIV_SHIFT         (0U)
#define PMUCRU_CLKSEL_CON00_XIN_OSC0_DIV_DIV_MASK          (0x1FU << PMUCRU_CLKSEL_CON00_XIN_OSC0_DIV_DIV_SHIFT)        /* 0x0000001F */
#define PMUCRU_CLKSEL_CON00_CLK_DEEPSLOW_SEL_SHIFT         (7U)
#define PMUCRU_CLKSEL_CON00_CLK_DEEPSLOW_SEL_MASK          (0x3U << PMUCRU_CLKSEL_CON00_CLK_DEEPSLOW_SEL_SHIFT)         /* 0x00000180 */
/* CLKSEL_CON01 */
#define PMUCRU_CLKSEL_CON01_OFFSET                         (0x104U)
#define PMUCRU_CLKSEL_CON01_PCLK_PDPMU_PRE_DIV_SHIFT       (0U)
#define PMUCRU_CLKSEL_CON01_PCLK_PDPMU_PRE_DIV_MASK        (0x1FU << PMUCRU_CLKSEL_CON01_PCLK_PDPMU_PRE_DIV_SHIFT)      /* 0x0000001F */
/* CLKSEL_CON02 */
#define PMUCRU_CLKSEL_CON02_OFFSET                         (0x108U)
#define PMUCRU_CLKSEL_CON02_CLK_I2C0_DIV_SHIFT             (0U)
#define PMUCRU_CLKSEL_CON02_CLK_I2C0_DIV_MASK              (0x7FU << PMUCRU_CLKSEL_CON02_CLK_I2C0_DIV_SHIFT)            /* 0x0000007F */
/* CLKSEL_CON03 */
#define PMUCRU_CLKSEL_CON03_OFFSET                         (0x10CU)
#define PMUCRU_CLKSEL_CON03_CLK_I2C2_DIV_SHIFT             (0U)
#define PMUCRU_CLKSEL_CON03_CLK_I2C2_DIV_MASK              (0x7FU << PMUCRU_CLKSEL_CON03_CLK_I2C2_DIV_SHIFT)            /* 0x0000007F */
/* CLKSEL_CON04 */
#define PMUCRU_CLKSEL_CON04_OFFSET                         (0x110U)
#define PMUCRU_CLKSEL_CON04_SCLK_UART1_DIV_DIV_SHIFT       (0U)
#define PMUCRU_CLKSEL_CON04_SCLK_UART1_DIV_DIV_MASK        (0x7FU << PMUCRU_CLKSEL_CON04_SCLK_UART1_DIV_DIV_SHIFT)      /* 0x0000007F */
#define PMUCRU_CLKSEL_CON04_SCLK_UART1_DIV_SEL_SHIFT       (8U)
#define PMUCRU_CLKSEL_CON04_SCLK_UART1_DIV_SEL_MASK        (0x3U << PMUCRU_CLKSEL_CON04_SCLK_UART1_DIV_SEL_SHIFT)       /* 0x00000300 */
#define PMUCRU_CLKSEL_CON04_SCLK_UART1_SEL_SHIFT           (10U)
#define PMUCRU_CLKSEL_CON04_SCLK_UART1_SEL_MASK            (0x3U << PMUCRU_CLKSEL_CON04_SCLK_UART1_SEL_SHIFT)           /* 0x00000C00 */
/* CLKSEL_CON05 */
#define PMUCRU_CLKSEL_CON05_OFFSET                         (0x114U)
#define PMUCRU_CLKSEL_CON05_SCLK_UART1_FRACDIV_DIV_SHIFT   (0U)
#define PMUCRU_CLKSEL_CON05_SCLK_UART1_FRACDIV_DIV_MASK    (0xFFFFFFFFU << PMUCRU_CLKSEL_CON05_SCLK_UART1_FRACDIV_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON06 */
#define PMUCRU_CLKSEL_CON06_OFFSET                         (0x118U)
#define PMUCRU_CLKSEL_CON06_CLK_PWM0_DIV_SHIFT             (0U)
#define PMUCRU_CLKSEL_CON06_CLK_PWM0_DIV_MASK              (0x7FU << PMUCRU_CLKSEL_CON06_CLK_PWM0_DIV_SHIFT)            /* 0x0000007F */
#define PMUCRU_CLKSEL_CON06_CLK_PWM0_SEL_SHIFT             (7U)
#define PMUCRU_CLKSEL_CON06_CLK_PWM0_SEL_MASK              (0x1U << PMUCRU_CLKSEL_CON06_CLK_PWM0_SEL_SHIFT)             /* 0x00000080 */
#define PMUCRU_CLKSEL_CON06_CLK_PWM1_DIV_SHIFT             (8U)
#define PMUCRU_CLKSEL_CON06_CLK_PWM1_DIV_MASK              (0x7FU << PMUCRU_CLKSEL_CON06_CLK_PWM1_DIV_SHIFT)            /* 0x00007F00 */
#define PMUCRU_CLKSEL_CON06_CLK_PWM1_SEL_SHIFT             (15U)
#define PMUCRU_CLKSEL_CON06_CLK_PWM1_SEL_MASK              (0x1U << PMUCRU_CLKSEL_CON06_CLK_PWM1_SEL_SHIFT)             /* 0x00008000 */
/* CLKSEL_CON07 */
#define PMUCRU_CLKSEL_CON07_OFFSET                         (0x11CU)
#define PMUCRU_CLKSEL_CON07_CLK_REF24M_DIV_SHIFT           (0U)
#define PMUCRU_CLKSEL_CON07_CLK_REF24M_DIV_MASK            (0x3FU << PMUCRU_CLKSEL_CON07_CLK_REF24M_DIV_SHIFT)          /* 0x0000003F */
#define PMUCRU_CLKSEL_CON07_CLK_USBPHY_OTG_REF_SEL_SHIFT   (6U)
#define PMUCRU_CLKSEL_CON07_CLK_USBPHY_OTG_REF_SEL_MASK    (0x1U << PMUCRU_CLKSEL_CON07_CLK_USBPHY_OTG_REF_SEL_SHIFT)   /* 0x00000040 */
#define PMUCRU_CLKSEL_CON07_CLK_USBPHY_HOST_REF_SEL_SHIFT  (7U)
#define PMUCRU_CLKSEL_CON07_CLK_USBPHY_HOST_REF_SEL_MASK   (0x1U << PMUCRU_CLKSEL_CON07_CLK_USBPHY_HOST_REF_SEL_SHIFT)  /* 0x00000080 */
#define PMUCRU_CLKSEL_CON07_CLK_REF12M_DIV_SHIFT           (8U)
#define PMUCRU_CLKSEL_CON07_CLK_REF12M_DIV_MASK            (0x7FU << PMUCRU_CLKSEL_CON07_CLK_REF12M_DIV_SHIFT)          /* 0x00007F00 */
#define PMUCRU_CLKSEL_CON07_CLK_MIPIDSIPHY_REF_SEL_SHIFT   (15U)
#define PMUCRU_CLKSEL_CON07_CLK_MIPIDSIPHY_REF_SEL_MASK    (0x1U << PMUCRU_CLKSEL_CON07_CLK_MIPIDSIPHY_REF_SEL_SHIFT)   /* 0x00008000 */
/* CLKSEL_CON08 */
#define PMUCRU_CLKSEL_CON08_OFFSET                         (0x120U)
#define PMUCRU_CLKSEL_CON08_DBCLK_GPIO0_SEL_SHIFT          (15U)
#define PMUCRU_CLKSEL_CON08_DBCLK_GPIO0_SEL_MASK           (0x1U << PMUCRU_CLKSEL_CON08_DBCLK_GPIO0_SEL_SHIFT)          /* 0x00008000 */
/* CLKSEL_CON09 */
#define PMUCRU_CLKSEL_CON09_OFFSET                         (0x124U)
#define PMUCRU_CLKSEL_CON09_CLK_SPI0_DIV_SHIFT             (0U)
#define PMUCRU_CLKSEL_CON09_CLK_SPI0_DIV_MASK              (0x7FU << PMUCRU_CLKSEL_CON09_CLK_SPI0_DIV_SHIFT)            /* 0x0000007F */
#define PMUCRU_CLKSEL_CON09_CLK_SPI0_SEL_SHIFT             (7U)
#define PMUCRU_CLKSEL_CON09_CLK_SPI0_SEL_MASK              (0x1U << PMUCRU_CLKSEL_CON09_CLK_SPI0_SEL_SHIFT)             /* 0x00000080 */
/* CLKSEL_CON12 */
#define PMUCRU_CLKSEL_CON12_OFFSET                         (0x130U)
#define PMUCRU_CLKSEL_CON12_CLK_WIFI_DIV_DIV_SHIFT         (0U)
#define PMUCRU_CLKSEL_CON12_CLK_WIFI_DIV_DIV_MASK          (0x3FU << PMUCRU_CLKSEL_CON12_CLK_WIFI_DIV_DIV_SHIFT)        /* 0x0000003F */
#define PMUCRU_CLKSEL_CON12_CLK_WIFI_SEL_SHIFT             (8U)
#define PMUCRU_CLKSEL_CON12_CLK_WIFI_SEL_MASK              (0x1U << PMUCRU_CLKSEL_CON12_CLK_WIFI_SEL_SHIFT)             /* 0x00000100 */
/* CLKSEL_CON13 */
#define PMUCRU_CLKSEL_CON13_OFFSET                         (0x134U)
#define PMUCRU_CLKSEL_CON13_CLK_OSC0_DIV32K_DIV_SHIFT      (0U)
#define PMUCRU_CLKSEL_CON13_CLK_OSC0_DIV32K_DIV_MASK       (0xFFFFFFFFU << PMUCRU_CLKSEL_CON13_CLK_OSC0_DIV32K_DIV_SHIFT) /* 0xFFFFFFFF */
/* GATE_CON00 */
#define PMUCRU_GATE_CON00_OFFSET                           (0x180U)
#define PMUCRU_GATE_CON00_PCLK_PDPMU_EN_SHIFT              (0U)
#define PMUCRU_GATE_CON00_PCLK_PDPMU_EN_MASK               (0x1U << PMUCRU_GATE_CON00_PCLK_PDPMU_EN_SHIFT)              /* 0x00000001 */
#define PMUCRU_GATE_CON00_PCLK_PMU_EN_SHIFT                (1U)
#define PMUCRU_GATE_CON00_PCLK_PMU_EN_MASK                 (0x1U << PMUCRU_GATE_CON00_PCLK_PMU_EN_SHIFT)                /* 0x00000002 */
#define PMUCRU_GATE_CON00_PCLK_PDPMU_NIU_EN_SHIFT          (2U)
#define PMUCRU_GATE_CON00_PCLK_PDPMU_NIU_EN_MASK           (0x1U << PMUCRU_GATE_CON00_PCLK_PDPMU_NIU_EN_SHIFT)          /* 0x00000004 */
#define PMUCRU_GATE_CON00_PCLK_PMUSGRF_EN_SHIFT            (4U)
#define PMUCRU_GATE_CON00_PCLK_PMUSGRF_EN_MASK             (0x1U << PMUCRU_GATE_CON00_PCLK_PMUSGRF_EN_SHIFT)            /* 0x00000010 */
#define PMUCRU_GATE_CON00_PCLK_I2C0_EN_SHIFT               (5U)
#define PMUCRU_GATE_CON00_PCLK_I2C0_EN_MASK                (0x1U << PMUCRU_GATE_CON00_PCLK_I2C0_EN_SHIFT)               /* 0x00000020 */
#define PMUCRU_GATE_CON00_CLK_I2C0_EN_SHIFT                (6U)
#define PMUCRU_GATE_CON00_CLK_I2C0_EN_MASK                 (0x1U << PMUCRU_GATE_CON00_CLK_I2C0_EN_SHIFT)                /* 0x00000040 */
#define PMUCRU_GATE_CON00_PCLK_SCRKEYGEN_EN_SHIFT          (7U)
#define PMUCRU_GATE_CON00_PCLK_SCRKEYGEN_EN_MASK           (0x1U << PMUCRU_GATE_CON00_PCLK_SCRKEYGEN_EN_SHIFT)          /* 0x00000080 */
#define PMUCRU_GATE_CON00_PCLK_I2C2_EN_SHIFT               (9U)
#define PMUCRU_GATE_CON00_PCLK_I2C2_EN_MASK                (0x1U << PMUCRU_GATE_CON00_PCLK_I2C2_EN_SHIFT)               /* 0x00000200 */
#define PMUCRU_GATE_CON00_CLK_I2C2_EN_SHIFT                (10U)
#define PMUCRU_GATE_CON00_CLK_I2C2_EN_MASK                 (0x1U << PMUCRU_GATE_CON00_CLK_I2C2_EN_SHIFT)                /* 0x00000400 */
#define PMUCRU_GATE_CON00_PCLK_UART1_EN_SHIFT              (11U)
#define PMUCRU_GATE_CON00_PCLK_UART1_EN_MASK               (0x1U << PMUCRU_GATE_CON00_PCLK_UART1_EN_SHIFT)              /* 0x00000800 */
#define PMUCRU_GATE_CON00_SCLK_UART1_DIV_EN_SHIFT          (12U)
#define PMUCRU_GATE_CON00_SCLK_UART1_DIV_EN_MASK           (0x1U << PMUCRU_GATE_CON00_SCLK_UART1_DIV_EN_SHIFT)          /* 0x00001000 */
#define PMUCRU_GATE_CON00_SCLK_UART1_FRACDIV_EN_SHIFT      (13U)
#define PMUCRU_GATE_CON00_SCLK_UART1_FRACDIV_EN_MASK       (0x1U << PMUCRU_GATE_CON00_SCLK_UART1_FRACDIV_EN_SHIFT)      /* 0x00002000 */
#define PMUCRU_GATE_CON00_SCLK_UART1_EN_SHIFT              (14U)
#define PMUCRU_GATE_CON00_SCLK_UART1_EN_MASK               (0x1U << PMUCRU_GATE_CON00_SCLK_UART1_EN_SHIFT)              /* 0x00004000 */
#define PMUCRU_GATE_CON00_CLK_PMU_EN_SHIFT                 (15U)
#define PMUCRU_GATE_CON00_CLK_PMU_EN_MASK                  (0x1U << PMUCRU_GATE_CON00_CLK_PMU_EN_SHIFT)                 /* 0x00008000 */
/* GATE_CON01 */
#define PMUCRU_GATE_CON01_OFFSET                           (0x184U)
#define PMUCRU_GATE_CON01_PCLK_PWM0_EN_SHIFT               (0U)
#define PMUCRU_GATE_CON01_PCLK_PWM0_EN_MASK                (0x1U << PMUCRU_GATE_CON01_PCLK_PWM0_EN_SHIFT)               /* 0x00000001 */
#define PMUCRU_GATE_CON01_CLK_PWM0_EN_SHIFT                (1U)
#define PMUCRU_GATE_CON01_CLK_PWM0_EN_MASK                 (0x1U << PMUCRU_GATE_CON01_CLK_PWM0_EN_SHIFT)                /* 0x00000002 */
#define PMUCRU_GATE_CON01_CLK_CAPTURE_PWM0_EN_SHIFT        (2U)
#define PMUCRU_GATE_CON01_CLK_CAPTURE_PWM0_EN_MASK         (0x1U << PMUCRU_GATE_CON01_CLK_CAPTURE_PWM0_EN_SHIFT)        /* 0x00000004 */
#define PMUCRU_GATE_CON01_PCLK_PWM1_EN_SHIFT               (3U)
#define PMUCRU_GATE_CON01_PCLK_PWM1_EN_MASK                (0x1U << PMUCRU_GATE_CON01_PCLK_PWM1_EN_SHIFT)               /* 0x00000008 */
#define PMUCRU_GATE_CON01_CLK_PWM1_EN_SHIFT                (4U)
#define PMUCRU_GATE_CON01_CLK_PWM1_EN_MASK                 (0x1U << PMUCRU_GATE_CON01_CLK_PWM1_EN_SHIFT)                /* 0x00000010 */
#define PMUCRU_GATE_CON01_CLK_CAPTURE_PWM1_EN_SHIFT        (5U)
#define PMUCRU_GATE_CON01_CLK_CAPTURE_PWM1_EN_MASK         (0x1U << PMUCRU_GATE_CON01_CLK_CAPTURE_PWM1_EN_SHIFT)        /* 0x00000020 */
#define PMUCRU_GATE_CON01_XIN_OSC0_OTGPHY_REF_EN_SHIFT     (6U)
#define PMUCRU_GATE_CON01_XIN_OSC0_OTGPHY_REF_EN_MASK      (0x1U << PMUCRU_GATE_CON01_XIN_OSC0_OTGPHY_REF_EN_SHIFT)     /* 0x00000040 */
#define PMUCRU_GATE_CON01_XIN_OSC0_HOSTPHY_REF_EN_SHIFT    (7U)
#define PMUCRU_GATE_CON01_XIN_OSC0_HOSTPHY_REF_EN_MASK     (0x1U << PMUCRU_GATE_CON01_XIN_OSC0_HOSTPHY_REF_EN_SHIFT)    /* 0x00000080 */
#define PMUCRU_GATE_CON01_XIN_OSC0_DSIPHY_REF_EN_SHIFT     (8U)
#define PMUCRU_GATE_CON01_XIN_OSC0_DSIPHY_REF_EN_MASK      (0x1U << PMUCRU_GATE_CON01_XIN_OSC0_DSIPHY_REF_EN_SHIFT)     /* 0x00000100 */
#define PMUCRU_GATE_CON01_PCLK_GPIO0_EN_SHIFT              (9U)
#define PMUCRU_GATE_CON01_PCLK_GPIO0_EN_MASK               (0x1U << PMUCRU_GATE_CON01_PCLK_GPIO0_EN_SHIFT)              /* 0x00000200 */
#define PMUCRU_GATE_CON01_DBCLK_GPIO0_EN_SHIFT             (10U)
#define PMUCRU_GATE_CON01_DBCLK_GPIO0_EN_MASK              (0x1U << PMUCRU_GATE_CON01_DBCLK_GPIO0_EN_SHIFT)             /* 0x00000400 */
#define PMUCRU_GATE_CON01_PCLK_SPI0_EN_SHIFT               (11U)
#define PMUCRU_GATE_CON01_PCLK_SPI0_EN_MASK                (0x1U << PMUCRU_GATE_CON01_PCLK_SPI0_EN_SHIFT)               /* 0x00000800 */
#define PMUCRU_GATE_CON01_CLK_SPI0_EN_SHIFT                (12U)
#define PMUCRU_GATE_CON01_CLK_SPI0_EN_MASK                 (0x1U << PMUCRU_GATE_CON01_CLK_SPI0_EN_SHIFT)                /* 0x00001000 */
#define PMUCRU_GATE_CON01_PCLK_PMUGRF_EN_SHIFT             (13U)
#define PMUCRU_GATE_CON01_PCLK_PMUGRF_EN_MASK              (0x1U << PMUCRU_GATE_CON01_PCLK_PMUGRF_EN_SHIFT)             /* 0x00002000 */
#define PMUCRU_GATE_CON01_CLK_REF24M_EN_SHIFT              (14U)
#define PMUCRU_GATE_CON01_CLK_REF24M_EN_MASK               (0x1U << PMUCRU_GATE_CON01_CLK_REF24M_EN_SHIFT)              /* 0x00004000 */
#define PMUCRU_GATE_CON01_CLK_REF12M_EN_SHIFT              (15U)
#define PMUCRU_GATE_CON01_CLK_REF12M_EN_MASK               (0x1U << PMUCRU_GATE_CON01_CLK_REF12M_EN_SHIFT)              /* 0x00008000 */
/* GATE_CON02 */
#define PMUCRU_GATE_CON02_OFFSET                           (0x188U)
#define PMUCRU_GATE_CON02_PCLK_CHIPVEROTP_EN_SHIFT         (0U)
#define PMUCRU_GATE_CON02_PCLK_CHIPVEROTP_EN_MASK          (0x1U << PMUCRU_GATE_CON02_PCLK_CHIPVEROTP_EN_SHIFT)         /* 0x00000001 */
#define PMUCRU_GATE_CON02_PCLK_PMUCRU_EN_SHIFT             (4U)
#define PMUCRU_GATE_CON02_PCLK_PMUCRU_EN_MASK              (0x1U << PMUCRU_GATE_CON02_PCLK_PMUCRU_EN_SHIFT)             /* 0x00000010 */
#define PMUCRU_GATE_CON02_CLK_PMUPVTM_EN_SHIFT             (5U)
#define PMUCRU_GATE_CON02_CLK_PMUPVTM_EN_MASK              (0x1U << PMUCRU_GATE_CON02_CLK_PMUPVTM_EN_SHIFT)             /* 0x00000020 */
#define PMUCRU_GATE_CON02_PCLK_PMUPVTM_EN_SHIFT            (6U)
#define PMUCRU_GATE_CON02_PCLK_PMUPVTM_EN_MASK             (0x1U << PMUCRU_GATE_CON02_PCLK_PMUPVTM_EN_SHIFT)            /* 0x00000040 */
#define PMUCRU_GATE_CON02_CLK_CORE_PMUPVTM_EN_SHIFT        (7U)
#define PMUCRU_GATE_CON02_CLK_CORE_PMUPVTM_EN_MASK         (0x1U << PMUCRU_GATE_CON02_CLK_CORE_PMUPVTM_EN_SHIFT)        /* 0x00000080 */
#define PMUCRU_GATE_CON02_XIN_OSC0_DIV_EN_SHIFT            (8U)
#define PMUCRU_GATE_CON02_XIN_OSC0_DIV_EN_MASK             (0x1U << PMUCRU_GATE_CON02_XIN_OSC0_DIV_EN_SHIFT)            /* 0x00000100 */
#define PMUCRU_GATE_CON02_CLK_OSC0_DIV32K_EN_SHIFT         (9U)
#define PMUCRU_GATE_CON02_CLK_OSC0_DIV32K_EN_MASK          (0x1U << PMUCRU_GATE_CON02_CLK_OSC0_DIV32K_EN_SHIFT)         /* 0x00000200 */
#define PMUCRU_GATE_CON02_CLK_WIFI_DIV_EN_SHIFT            (10U)
#define PMUCRU_GATE_CON02_CLK_WIFI_DIV_EN_MASK             (0x1U << PMUCRU_GATE_CON02_CLK_WIFI_DIV_EN_SHIFT)            /* 0x00000400 */
#define PMUCRU_GATE_CON02_CLK_WIFI_OSC0_EN_SHIFT           (11U)
#define PMUCRU_GATE_CON02_CLK_WIFI_OSC0_EN_MASK            (0x1U << PMUCRU_GATE_CON02_CLK_WIFI_OSC0_EN_SHIFT)           /* 0x00000800 */
/* SOFTRST_CON00 */
#define PMUCRU_SOFTRST_CON00_OFFSET                        (0x200U)
#define PMUCRU_SOFTRST_CON00_PRESETN_PDPMU_NIU_SHIFT       (0U)
#define PMUCRU_SOFTRST_CON00_PRESETN_PDPMU_NIU_MASK        (0x1U << PMUCRU_SOFTRST_CON00_PRESETN_PDPMU_NIU_SHIFT)       /* 0x00000001 */
#define PMUCRU_SOFTRST_CON00_PRESETN_PMUSGRF_SHIFT         (1U)
#define PMUCRU_SOFTRST_CON00_PRESETN_PMUSGRF_MASK          (0x1U << PMUCRU_SOFTRST_CON00_PRESETN_PMUSGRF_SHIFT)         /* 0x00000002 */
#define PMUCRU_SOFTRST_CON00_PRESETN_PMUSGRF_REMAP_SHIFT   (2U)
#define PMUCRU_SOFTRST_CON00_PRESETN_PMUSGRF_REMAP_MASK    (0x1U << PMUCRU_SOFTRST_CON00_PRESETN_PMUSGRF_REMAP_SHIFT)   /* 0x00000004 */
#define PMUCRU_SOFTRST_CON00_PRESETN_I2C0_SHIFT            (3U)
#define PMUCRU_SOFTRST_CON00_PRESETN_I2C0_MASK             (0x1U << PMUCRU_SOFTRST_CON00_PRESETN_I2C0_SHIFT)            /* 0x00000008 */
#define PMUCRU_SOFTRST_CON00_RESETN_I2C0_SHIFT             (4U)
#define PMUCRU_SOFTRST_CON00_RESETN_I2C0_MASK              (0x1U << PMUCRU_SOFTRST_CON00_RESETN_I2C0_SHIFT)             /* 0x00000010 */
#define PMUCRU_SOFTRST_CON00_PRESETN_I2C2_SHIFT            (7U)
#define PMUCRU_SOFTRST_CON00_PRESETN_I2C2_MASK             (0x1U << PMUCRU_SOFTRST_CON00_PRESETN_I2C2_SHIFT)            /* 0x00000080 */
#define PMUCRU_SOFTRST_CON00_RESETN_I2C2_SHIFT             (8U)
#define PMUCRU_SOFTRST_CON00_RESETN_I2C2_MASK              (0x1U << PMUCRU_SOFTRST_CON00_RESETN_I2C2_SHIFT)             /* 0x00000100 */
#define PMUCRU_SOFTRST_CON00_PRESETN_UART1_SHIFT           (9U)
#define PMUCRU_SOFTRST_CON00_PRESETN_UART1_MASK            (0x1U << PMUCRU_SOFTRST_CON00_PRESETN_UART1_SHIFT)           /* 0x00000200 */
#define PMUCRU_SOFTRST_CON00_SRESETN_UART1_SHIFT           (10U)
#define PMUCRU_SOFTRST_CON00_SRESETN_UART1_MASK            (0x1U << PMUCRU_SOFTRST_CON00_SRESETN_UART1_SHIFT)           /* 0x00000400 */
#define PMUCRU_SOFTRST_CON00_PRESETN_PWM0_SHIFT            (11U)
#define PMUCRU_SOFTRST_CON00_PRESETN_PWM0_MASK             (0x1U << PMUCRU_SOFTRST_CON00_PRESETN_PWM0_SHIFT)            /* 0x00000800 */
#define PMUCRU_SOFTRST_CON00_RESETN_PWM0_SHIFT             (12U)
#define PMUCRU_SOFTRST_CON00_RESETN_PWM0_MASK              (0x1U << PMUCRU_SOFTRST_CON00_RESETN_PWM0_SHIFT)             /* 0x00001000 */
#define PMUCRU_SOFTRST_CON00_PRESETN_PWM1_SHIFT            (13U)
#define PMUCRU_SOFTRST_CON00_PRESETN_PWM1_MASK             (0x1U << PMUCRU_SOFTRST_CON00_PRESETN_PWM1_SHIFT)            /* 0x00002000 */
#define PMUCRU_SOFTRST_CON00_RESETN_PWM1_SHIFT             (14U)
#define PMUCRU_SOFTRST_CON00_RESETN_PWM1_MASK              (0x1U << PMUCRU_SOFTRST_CON00_RESETN_PWM1_SHIFT)             /* 0x00004000 */
#define PMUCRU_SOFTRST_CON00_RESETN_DDR_FAIL_SAFE_SHIFT    (15U)
#define PMUCRU_SOFTRST_CON00_RESETN_DDR_FAIL_SAFE_MASK     (0x1U << PMUCRU_SOFTRST_CON00_RESETN_DDR_FAIL_SAFE_SHIFT)    /* 0x00008000 */
/* SOFTRST_CON01 */
#define PMUCRU_SOFTRST_CON01_OFFSET                        (0x204U)
#define PMUCRU_SOFTRST_CON01_PRESETN_GPIO0_SHIFT           (1U)
#define PMUCRU_SOFTRST_CON01_PRESETN_GPIO0_MASK            (0x1U << PMUCRU_SOFTRST_CON01_PRESETN_GPIO0_SHIFT)           /* 0x00000002 */
#define PMUCRU_SOFTRST_CON01_DBRESETN_GPIO0_SHIFT          (2U)
#define PMUCRU_SOFTRST_CON01_DBRESETN_GPIO0_MASK           (0x1U << PMUCRU_SOFTRST_CON01_DBRESETN_GPIO0_SHIFT)          /* 0x00000004 */
#define PMUCRU_SOFTRST_CON01_PRESETN_SPI0_SHIFT            (3U)
#define PMUCRU_SOFTRST_CON01_PRESETN_SPI0_MASK             (0x1U << PMUCRU_SOFTRST_CON01_PRESETN_SPI0_SHIFT)            /* 0x00000008 */
#define PMUCRU_SOFTRST_CON01_RESETN_SPI0_SHIFT             (4U)
#define PMUCRU_SOFTRST_CON01_RESETN_SPI0_MASK              (0x1U << PMUCRU_SOFTRST_CON01_RESETN_SPI0_SHIFT)             /* 0x00000010 */
#define PMUCRU_SOFTRST_CON01_PRESETN_PMUGRF_SHIFT          (5U)
#define PMUCRU_SOFTRST_CON01_PRESETN_PMUGRF_MASK           (0x1U << PMUCRU_SOFTRST_CON01_PRESETN_PMUGRF_SHIFT)          /* 0x00000020 */
#define PMUCRU_SOFTRST_CON01_PRESETN_CHIPVEROTP_SHIFT      (6U)
#define PMUCRU_SOFTRST_CON01_PRESETN_CHIPVEROTP_MASK       (0x1U << PMUCRU_SOFTRST_CON01_PRESETN_CHIPVEROTP_SHIFT)      /* 0x00000040 */
#define PMUCRU_SOFTRST_CON01_RESETN_PMUPVTM_SHIFT          (8U)
#define PMUCRU_SOFTRST_CON01_RESETN_PMUPVTM_MASK           (0x1U << PMUCRU_SOFTRST_CON01_RESETN_PMUPVTM_SHIFT)          /* 0x00000100 */
#define PMUCRU_SOFTRST_CON01_PRESETN_PMUPVTM_SHIFT         (9U)
#define PMUCRU_SOFTRST_CON01_PRESETN_PMUPVTM_MASK          (0x1U << PMUCRU_SOFTRST_CON01_PRESETN_PMUPVTM_SHIFT)         /* 0x00000200 */
#define PMUCRU_SOFTRST_CON01_PRESETN_PMUCRU_SHIFT          (14U)
#define PMUCRU_SOFTRST_CON01_PRESETN_PMUCRU_MASK           (0x1U << PMUCRU_SOFTRST_CON01_PRESETN_PMUCRU_SHIFT)          /* 0x00004000 */
/* AUTOCS_PMU_PCLK_CON0 */
#define PMUCRU_AUTOCS_PMU_PCLK_CON0_OFFSET                 (0x240U)
#define PMUCRU_AUTOCS_PMU_PCLK_CON0_IDLE_TH_SHIFT          (0U)
#define PMUCRU_AUTOCS_PMU_PCLK_CON0_IDLE_TH_MASK           (0xFFFFU << PMUCRU_AUTOCS_PMU_PCLK_CON0_IDLE_TH_SHIFT)       /* 0x0000FFFF */
#define PMUCRU_AUTOCS_PMU_PCLK_CON0_WAIT_TH_SHIFT          (16U)
#define PMUCRU_AUTOCS_PMU_PCLK_CON0_WAIT_TH_MASK           (0xFFFFU << PMUCRU_AUTOCS_PMU_PCLK_CON0_WAIT_TH_SHIFT)       /* 0xFFFF0000 */
/* AUTOCS_PMU_PCLK_CON1 */
#define PMUCRU_AUTOCS_PMU_PCLK_CON1_OFFSET                 (0x244U)
#define PMUCRU_AUTOCS_PMU_PCLK_CON1_AUTOCS_EN_SHIFT        (12U)
#define PMUCRU_AUTOCS_PMU_PCLK_CON1_AUTOCS_EN_MASK         (0x1U << PMUCRU_AUTOCS_PMU_PCLK_CON1_AUTOCS_EN_SHIFT)        /* 0x00001000 */
#define PMUCRU_AUTOCS_PMU_PCLK_CON1_SWITCH_EN_SHIFT        (13U)
#define PMUCRU_AUTOCS_PMU_PCLK_CON1_SWITCH_EN_MASK         (0x1U << PMUCRU_AUTOCS_PMU_PCLK_CON1_SWITCH_EN_SHIFT)        /* 0x00002000 */
#define PMUCRU_AUTOCS_PMU_PCLK_CON1_CLKSEL_CFG_SHIFT       (14U)
#define PMUCRU_AUTOCS_PMU_PCLK_CON1_CLKSEL_CFG_MASK        (0x3U << PMUCRU_AUTOCS_PMU_PCLK_CON1_CLKSEL_CFG_SHIFT)       /* 0x0000C000 */
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
/* APLL_CON5 */
#define CRU_APLL_CON5_OFFSET                               (0x14U)
#define CRU_APLL_CON5_FOUT2XPD_SHIFT                       (0U)
#define CRU_APLL_CON5_FOUT2XPD_MASK                        (0x1U << CRU_APLL_CON5_FOUT2XPD_SHIFT)                       /* 0x00000001 */
#define CRU_APLL_CON5_OFFSETCAL_BYP_SHIFT                  (1U)
#define CRU_APLL_CON5_OFFSETCAL_BYP_MASK                   (0x1U << CRU_APLL_CON5_OFFSETCAL_BYP_SHIFT)                  /* 0x00000002 */
#define CRU_APLL_CON5_OFFSETCAL_EN_SHIFT                   (2U)
#define CRU_APLL_CON5_OFFSETCAL_EN_MASK                    (0x1U << CRU_APLL_CON5_OFFSETCAL_EN_SHIFT)                   /* 0x00000004 */
#define CRU_APLL_CON5_OFFSETCAL_FAST_SHIFT                 (3U)
#define CRU_APLL_CON5_OFFSETCAL_FAST_MASK                  (0x1U << CRU_APLL_CON5_OFFSETCAL_FAST_SHIFT)                 /* 0x00000008 */
#define CRU_APLL_CON5_OFFSETCAL_IN_SHIFT                   (4U)
#define CRU_APLL_CON5_OFFSETCAL_IN_MASK                    (0xFFFU << CRU_APLL_CON5_OFFSETCAL_IN_SHIFT)                 /* 0x0000FFF0 */
/* APLL_CON6 */
#define CRU_APLL_CON6_OFFSET                               (0x18U)
#define CRU_APLL_CON6_OFFSETCAL_CNT_SHIFT                  (0U)
#define CRU_APLL_CON6_OFFSETCAL_CNT_MASK                   (0x7U << CRU_APLL_CON6_OFFSETCAL_CNT_SHIFT)                  /* 0x00000007 */
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
/* DPLL_CON5 */
#define CRU_DPLL_CON5_OFFSET                               (0x34U)
#define CRU_DPLL_CON5_FOUT2XPD_SHIFT                       (0U)
#define CRU_DPLL_CON5_FOUT2XPD_MASK                        (0x1U << CRU_DPLL_CON5_FOUT2XPD_SHIFT)                       /* 0x00000001 */
#define CRU_DPLL_CON5_OFFSETCAL_BYP_SHIFT                  (1U)
#define CRU_DPLL_CON5_OFFSETCAL_BYP_MASK                   (0x1U << CRU_DPLL_CON5_OFFSETCAL_BYP_SHIFT)                  /* 0x00000002 */
#define CRU_DPLL_CON5_OFFSETCAL_EN_SHIFT                   (2U)
#define CRU_DPLL_CON5_OFFSETCAL_EN_MASK                    (0x1U << CRU_DPLL_CON5_OFFSETCAL_EN_SHIFT)                   /* 0x00000004 */
#define CRU_DPLL_CON5_OFFSETCAL_FAST_SHIFT                 (3U)
#define CRU_DPLL_CON5_OFFSETCAL_FAST_MASK                  (0x1U << CRU_DPLL_CON5_OFFSETCAL_FAST_SHIFT)                 /* 0x00000008 */
#define CRU_DPLL_CON5_OFFSETCAL_IN_SHIFT                   (4U)
#define CRU_DPLL_CON5_OFFSETCAL_IN_MASK                    (0xFFFU << CRU_DPLL_CON5_OFFSETCAL_IN_SHIFT)                 /* 0x0000FFF0 */
/* DPLL_CON6 */
#define CRU_DPLL_CON6_OFFSET                               (0x38U)
#define CRU_DPLL_CON6_OFFSETCAL_CNT_SHIFT                  (0U)
#define CRU_DPLL_CON6_OFFSETCAL_CNT_MASK                   (0x7U << CRU_DPLL_CON6_OFFSETCAL_CNT_SHIFT)                  /* 0x00000007 */
/* CPLL_CON0 */
#define CRU_CPLL_CON0_OFFSET                               (0x40U)
#define CRU_CPLL_CON0_FBDIV_SHIFT                          (0U)
#define CRU_CPLL_CON0_FBDIV_MASK                           (0xFFFU << CRU_CPLL_CON0_FBDIV_SHIFT)                        /* 0x00000FFF */
#define CRU_CPLL_CON0_POSTDIV1_SHIFT                       (12U)
#define CRU_CPLL_CON0_POSTDIV1_MASK                        (0x7U << CRU_CPLL_CON0_POSTDIV1_SHIFT)                       /* 0x00007000 */
#define CRU_CPLL_CON0_BYPASS_SHIFT                         (15U)
#define CRU_CPLL_CON0_BYPASS_MASK                          (0x1U << CRU_CPLL_CON0_BYPASS_SHIFT)                         /* 0x00008000 */
/* CPLL_CON1 */
#define CRU_CPLL_CON1_OFFSET                               (0x44U)
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
#define CRU_CPLL_CON2_OFFSET                               (0x48U)
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
#define CRU_CPLL_CON3_OFFSET                               (0x4CU)
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
#define CRU_CPLL_CON4_OFFSET                               (0x50U)
#define CRU_CPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT             (0U)
#define CRU_CPLL_CON4_SSMOD_SEL_EXT_WAVE_MASK              (0x1U << CRU_CPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT)             /* 0x00000001 */
#define CRU_CPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT              (8U)
#define CRU_CPLL_CON4_SSMOD_EXT_MAXADDR_MASK               (0xFFU << CRU_CPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT)             /* 0x0000FF00 */
/* CPLL_CON5 */
#define CRU_CPLL_CON5_OFFSET                               (0x54U)
#define CRU_CPLL_CON5_FOUT2XPD_SHIFT                       (0U)
#define CRU_CPLL_CON5_FOUT2XPD_MASK                        (0x1U << CRU_CPLL_CON5_FOUT2XPD_SHIFT)                       /* 0x00000001 */
#define CRU_CPLL_CON5_OFFSETCAL_BYP_SHIFT                  (1U)
#define CRU_CPLL_CON5_OFFSETCAL_BYP_MASK                   (0x1U << CRU_CPLL_CON5_OFFSETCAL_BYP_SHIFT)                  /* 0x00000002 */
#define CRU_CPLL_CON5_OFFSETCAL_EN_SHIFT                   (2U)
#define CRU_CPLL_CON5_OFFSETCAL_EN_MASK                    (0x1U << CRU_CPLL_CON5_OFFSETCAL_EN_SHIFT)                   /* 0x00000004 */
#define CRU_CPLL_CON5_OFFSETCAL_FAST_SHIFT                 (3U)
#define CRU_CPLL_CON5_OFFSETCAL_FAST_MASK                  (0x1U << CRU_CPLL_CON5_OFFSETCAL_FAST_SHIFT)                 /* 0x00000008 */
#define CRU_CPLL_CON5_OFFSETCAL_IN_SHIFT                   (4U)
#define CRU_CPLL_CON5_OFFSETCAL_IN_MASK                    (0xFFFU << CRU_CPLL_CON5_OFFSETCAL_IN_SHIFT)                 /* 0x0000FFF0 */
/* CPLL_CON6 */
#define CRU_CPLL_CON6_OFFSET                               (0x58U)
#define CRU_CPLL_CON6_OFFSETCAL_CNT_SHIFT                  (0U)
#define CRU_CPLL_CON6_OFFSETCAL_CNT_MASK                   (0x7U << CRU_CPLL_CON6_OFFSETCAL_CNT_SHIFT)                  /* 0x00000007 */
/* HPLL_CON0 */
#define CRU_HPLL_CON0_OFFSET                               (0x60U)
#define CRU_HPLL_CON0_FBDIV_SHIFT                          (0U)
#define CRU_HPLL_CON0_FBDIV_MASK                           (0xFFFU << CRU_HPLL_CON0_FBDIV_SHIFT)                        /* 0x00000FFF */
#define CRU_HPLL_CON0_POSTDIV1_SHIFT                       (12U)
#define CRU_HPLL_CON0_POSTDIV1_MASK                        (0x7U << CRU_HPLL_CON0_POSTDIV1_SHIFT)                       /* 0x00007000 */
#define CRU_HPLL_CON0_BYPASS_SHIFT                         (15U)
#define CRU_HPLL_CON0_BYPASS_MASK                          (0x1U << CRU_HPLL_CON0_BYPASS_SHIFT)                         /* 0x00008000 */
/* HPLL_CON1 */
#define CRU_HPLL_CON1_OFFSET                               (0x64U)
#define CRU_HPLL_CON1_REFDIV_SHIFT                         (0U)
#define CRU_HPLL_CON1_REFDIV_MASK                          (0x3FU << CRU_HPLL_CON1_REFDIV_SHIFT)                        /* 0x0000003F */
#define CRU_HPLL_CON1_POSTDIV2_SHIFT                       (6U)
#define CRU_HPLL_CON1_POSTDIV2_MASK                        (0x7U << CRU_HPLL_CON1_POSTDIV2_SHIFT)                       /* 0x000001C0 */
#define CRU_HPLL_CON1_PLL_LOCK_SHIFT                       (10U)
#define CRU_HPLL_CON1_PLL_LOCK_MASK                        (0x1U << CRU_HPLL_CON1_PLL_LOCK_SHIFT)                       /* 0x00000400 */
#define CRU_HPLL_CON1_DSMPD_SHIFT                          (12U)
#define CRU_HPLL_CON1_DSMPD_MASK                           (0x1U << CRU_HPLL_CON1_DSMPD_SHIFT)                          /* 0x00001000 */
#define CRU_HPLL_CON1_PLLPD0_SHIFT                         (13U)
#define CRU_HPLL_CON1_PLLPD0_MASK                          (0x1U << CRU_HPLL_CON1_PLLPD0_SHIFT)                         /* 0x00002000 */
#define CRU_HPLL_CON1_PLLPD1_SHIFT                         (14U)
#define CRU_HPLL_CON1_PLLPD1_MASK                          (0x1U << CRU_HPLL_CON1_PLLPD1_SHIFT)                         /* 0x00004000 */
#define CRU_HPLL_CON1_PLLPDSEL_SHIFT                       (15U)
#define CRU_HPLL_CON1_PLLPDSEL_MASK                        (0x1U << CRU_HPLL_CON1_PLLPDSEL_SHIFT)                       /* 0x00008000 */
/* HPLL_CON2 */
#define CRU_HPLL_CON2_OFFSET                               (0x68U)
#define CRU_HPLL_CON2_FRACDIV_SHIFT                        (0U)
#define CRU_HPLL_CON2_FRACDIV_MASK                         (0xFFFFFFU << CRU_HPLL_CON2_FRACDIV_SHIFT)                   /* 0x00FFFFFF */
#define CRU_HPLL_CON2_DACPD_SHIFT                          (24U)
#define CRU_HPLL_CON2_DACPD_MASK                           (0x1U << CRU_HPLL_CON2_DACPD_SHIFT)                          /* 0x01000000 */
#define CRU_HPLL_CON2_FOUTPOSTDIVPD_SHIFT                  (25U)
#define CRU_HPLL_CON2_FOUTPOSTDIVPD_MASK                   (0x1U << CRU_HPLL_CON2_FOUTPOSTDIVPD_SHIFT)                  /* 0x02000000 */
#define CRU_HPLL_CON2_FOUTVCOPD_SHIFT                      (26U)
#define CRU_HPLL_CON2_FOUTVCOPD_MASK                       (0x1U << CRU_HPLL_CON2_FOUTVCOPD_SHIFT)                      /* 0x04000000 */
#define CRU_HPLL_CON2_FOUT4PHASEPD_SHIFT                   (27U)
#define CRU_HPLL_CON2_FOUT4PHASEPD_MASK                    (0x1U << CRU_HPLL_CON2_FOUT4PHASEPD_SHIFT)                   /* 0x08000000 */
/* HPLL_CON3 */
#define CRU_HPLL_CON3_OFFSET                               (0x6CU)
#define CRU_HPLL_CON3_SSMOD_BP_SHIFT                       (0U)
#define CRU_HPLL_CON3_SSMOD_BP_MASK                        (0x1U << CRU_HPLL_CON3_SSMOD_BP_SHIFT)                       /* 0x00000001 */
#define CRU_HPLL_CON3_SSMOD_DISABLE_SSCG_SHIFT             (1U)
#define CRU_HPLL_CON3_SSMOD_DISABLE_SSCG_MASK              (0x1U << CRU_HPLL_CON3_SSMOD_DISABLE_SSCG_SHIFT)             /* 0x00000002 */
#define CRU_HPLL_CON3_SSMOD_RESET_SHIFT                    (2U)
#define CRU_HPLL_CON3_SSMOD_RESET_MASK                     (0x1U << CRU_HPLL_CON3_SSMOD_RESET_SHIFT)                    /* 0x00000004 */
#define CRU_HPLL_CON3_SSMOD_DOWNSPREAD_SHIFT               (3U)
#define CRU_HPLL_CON3_SSMOD_DOWNSPREAD_MASK                (0x1U << CRU_HPLL_CON3_SSMOD_DOWNSPREAD_SHIFT)               /* 0x00000008 */
#define CRU_HPLL_CON3_SSMOD_DIVVAL_SHIFT                   (4U)
#define CRU_HPLL_CON3_SSMOD_DIVVAL_MASK                    (0xFU << CRU_HPLL_CON3_SSMOD_DIVVAL_SHIFT)                   /* 0x000000F0 */
#define CRU_HPLL_CON3_SSMOD_SPREAD_SHIFT                   (8U)
#define CRU_HPLL_CON3_SSMOD_SPREAD_MASK                    (0x1FU << CRU_HPLL_CON3_SSMOD_SPREAD_SHIFT)                  /* 0x00001F00 */
/* HPLL_CON4 */
#define CRU_HPLL_CON4_OFFSET                               (0x70U)
#define CRU_HPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT             (0U)
#define CRU_HPLL_CON4_SSMOD_SEL_EXT_WAVE_MASK              (0x1U << CRU_HPLL_CON4_SSMOD_SEL_EXT_WAVE_SHIFT)             /* 0x00000001 */
#define CRU_HPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT              (8U)
#define CRU_HPLL_CON4_SSMOD_EXT_MAXADDR_MASK               (0xFFU << CRU_HPLL_CON4_SSMOD_EXT_MAXADDR_SHIFT)             /* 0x0000FF00 */
/* HPLL_CON5 */
#define CRU_HPLL_CON5_OFFSET                               (0x74U)
#define CRU_HPLL_CON5_FOUT2XPD_SHIFT                       (0U)
#define CRU_HPLL_CON5_FOUT2XPD_MASK                        (0x1U << CRU_HPLL_CON5_FOUT2XPD_SHIFT)                       /* 0x00000001 */
#define CRU_HPLL_CON5_OFFSETCAL_BYP_SHIFT                  (1U)
#define CRU_HPLL_CON5_OFFSETCAL_BYP_MASK                   (0x1U << CRU_HPLL_CON5_OFFSETCAL_BYP_SHIFT)                  /* 0x00000002 */
#define CRU_HPLL_CON5_OFFSETCAL_EN_SHIFT                   (2U)
#define CRU_HPLL_CON5_OFFSETCAL_EN_MASK                    (0x1U << CRU_HPLL_CON5_OFFSETCAL_EN_SHIFT)                   /* 0x00000004 */
#define CRU_HPLL_CON5_OFFSETCAL_FAST_SHIFT                 (3U)
#define CRU_HPLL_CON5_OFFSETCAL_FAST_MASK                  (0x1U << CRU_HPLL_CON5_OFFSETCAL_FAST_SHIFT)                 /* 0x00000008 */
#define CRU_HPLL_CON5_OFFSETCAL_IN_SHIFT                   (4U)
#define CRU_HPLL_CON5_OFFSETCAL_IN_MASK                    (0xFFFU << CRU_HPLL_CON5_OFFSETCAL_IN_SHIFT)                 /* 0x0000FFF0 */
/* HPLL_CON6 */
#define CRU_HPLL_CON6_OFFSET                               (0x78U)
#define CRU_HPLL_CON6_OFFSETCAL_CNT_SHIFT                  (0U)
#define CRU_HPLL_CON6_OFFSETCAL_CNT_MASK                   (0x7U << CRU_HPLL_CON6_OFFSETCAL_CNT_SHIFT)                  /* 0x00000007 */
/* APLL_OFFSETCAL_STATUS */
#define CRU_APLL_OFFSETCAL_STATUS_OFFSET                   (0x80U)
#define CRU_APLL_OFFSETCAL_STATUS_OFFSETCAL_OUT_SHIFT      (0U)
#define CRU_APLL_OFFSETCAL_STATUS_OFFSETCAL_OUT_MASK       (0xFFFU << CRU_APLL_OFFSETCAL_STATUS_OFFSETCAL_OUT_SHIFT)    /* 0x00000FFF */
#define CRU_APLL_OFFSETCAL_STATUS_OFFSETCAL_LOCK_SHIFT     (16U)
#define CRU_APLL_OFFSETCAL_STATUS_OFFSETCAL_LOCK_MASK      (0x1U << CRU_APLL_OFFSETCAL_STATUS_OFFSETCAL_LOCK_SHIFT)     /* 0x00010000 */
/* DPLL_OFFSETCAL_STATUS */
#define CRU_DPLL_OFFSETCAL_STATUS_OFFSET                   (0x84U)
#define CRU_DPLL_OFFSETCAL_STATUS_OFFSETCAL_OUT_SHIFT      (0U)
#define CRU_DPLL_OFFSETCAL_STATUS_OFFSETCAL_OUT_MASK       (0xFFFU << CRU_DPLL_OFFSETCAL_STATUS_OFFSETCAL_OUT_SHIFT)    /* 0x00000FFF */
#define CRU_DPLL_OFFSETCAL_STATUS_OFFSETCAL_LOCK_SHIFT     (16U)
#define CRU_DPLL_OFFSETCAL_STATUS_OFFSETCAL_LOCK_MASK      (0x1U << CRU_DPLL_OFFSETCAL_STATUS_OFFSETCAL_LOCK_SHIFT)     /* 0x00010000 */
/* CPLL_OFFSETCAL_STATUS */
#define CRU_CPLL_OFFSETCAL_STATUS_OFFSET                   (0x88U)
#define CRU_CPLL_OFFSETCAL_STATUS_OFFSETCAL_OUT_SHIFT      (0U)
#define CRU_CPLL_OFFSETCAL_STATUS_OFFSETCAL_OUT_MASK       (0xFFFU << CRU_CPLL_OFFSETCAL_STATUS_OFFSETCAL_OUT_SHIFT)    /* 0x00000FFF */
#define CRU_CPLL_OFFSETCAL_STATUS_OFFSETCAL_LOCK_SHIFT     (16U)
#define CRU_CPLL_OFFSETCAL_STATUS_OFFSETCAL_LOCK_MASK      (0x1U << CRU_CPLL_OFFSETCAL_STATUS_OFFSETCAL_LOCK_SHIFT)     /* 0x00010000 */
/* HPLL_OFFSETCAL_STATUS */
#define CRU_HPLL_OFFSETCAL_STATUS_OFFSET                   (0x8CU)
#define CRU_HPLL_OFFSETCAL_STATUS_OFFSETCAL_OUT_SHIFT      (0U)
#define CRU_HPLL_OFFSETCAL_STATUS_OFFSETCAL_OUT_MASK       (0xFFFU << CRU_HPLL_OFFSETCAL_STATUS_OFFSETCAL_OUT_SHIFT)    /* 0x00000FFF */
#define CRU_HPLL_OFFSETCAL_STATUS_OFFSETCAL_LOCK_SHIFT     (16U)
#define CRU_HPLL_OFFSETCAL_STATUS_OFFSETCAL_LOCK_MASK      (0x1U << CRU_HPLL_OFFSETCAL_STATUS_OFFSETCAL_LOCK_SHIFT)     /* 0x00010000 */
/* MODE_CON01 */
#define CRU_MODE_CON01_OFFSET                              (0x90U)
#define CRU_MODE_CON01_CLK_APLL_MODE_SHIFT                 (0U)
#define CRU_MODE_CON01_CLK_APLL_MODE_MASK                  (0x3U << CRU_MODE_CON01_CLK_APLL_MODE_SHIFT)                 /* 0x00000003 */
#define CRU_MODE_CON01_CLK_DPLL_MODE_SHIFT                 (2U)
#define CRU_MODE_CON01_CLK_DPLL_MODE_MASK                  (0x3U << CRU_MODE_CON01_CLK_DPLL_MODE_SHIFT)                 /* 0x0000000C */
#define CRU_MODE_CON01_CLK_CPLL_MODE_SHIFT                 (4U)
#define CRU_MODE_CON01_CLK_CPLL_MODE_MASK                  (0x3U << CRU_MODE_CON01_CLK_CPLL_MODE_SHIFT)                 /* 0x00000030 */
#define CRU_MODE_CON01_CLK_HPLL_MODE_SHIFT                 (6U)
#define CRU_MODE_CON01_CLK_HPLL_MODE_MASK                  (0x3U << CRU_MODE_CON01_CLK_HPLL_MODE_SHIFT)                 /* 0x000000C0 */
#define CRU_MODE_CON01_USBPHY_CLK480M_MUXPLL_MODE_SHIFT    (10U)
#define CRU_MODE_CON01_USBPHY_CLK480M_MUXPLL_MODE_MASK     (0x3U << CRU_MODE_CON01_USBPHY_CLK480M_MUXPLL_MODE_SHIFT)    /* 0x00000C00 */
/* CLKSEL_CON00 */
#define CRU_CLKSEL_CON00_OFFSET                            (0x100U)
#define CRU_CLKSEL_CON00_CLK_CORE_PRE_DIV_SHIFT            (0U)
#define CRU_CLKSEL_CON00_CLK_CORE_PRE_DIV_MASK             (0x1FU << CRU_CLKSEL_CON00_CLK_CORE_PRE_DIV_SHIFT)           /* 0x0000001F */
#define CRU_CLKSEL_CON00_CLK_CORE_PRE_SEL_SHIFT            (6U)
#define CRU_CLKSEL_CON00_CLK_CORE_PRE_SEL_MASK             (0x3U << CRU_CLKSEL_CON00_CLK_CORE_PRE_SEL_SHIFT)            /* 0x000000C0 */
#define CRU_CLKSEL_CON00_HCLK_PDCORE_NIU_DIV_SHIFT         (8U)
#define CRU_CLKSEL_CON00_HCLK_PDCORE_NIU_DIV_MASK          (0x1FU << CRU_CLKSEL_CON00_HCLK_PDCORE_NIU_DIV_SHIFT)        /* 0x00001F00 */
/* CLKSEL_CON01 */
#define CRU_CLKSEL_CON01_OFFSET                            (0x104U)
#define CRU_CLKSEL_CON01_PCLK_DBG_PRE_DIV_SHIFT            (0U)
#define CRU_CLKSEL_CON01_PCLK_DBG_PRE_DIV_MASK             (0x7U << CRU_CLKSEL_CON01_PCLK_DBG_PRE_DIV_SHIFT)            /* 0x00000007 */
#define CRU_CLKSEL_CON01_ACLK_CORE_PRE_DIV_SHIFT           (4U)
#define CRU_CLKSEL_CON01_ACLK_CORE_PRE_DIV_MASK            (0xFU << CRU_CLKSEL_CON01_ACLK_CORE_PRE_DIV_SHIFT)           /* 0x000000F0 */
/* CLKSEL_CON02 */
#define CRU_CLKSEL_CON02_OFFSET                            (0x108U)
#define CRU_CLKSEL_CON02_ACLK_PDBUS_PRE_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON02_ACLK_PDBUS_PRE_DIV_MASK           (0x1FU << CRU_CLKSEL_CON02_ACLK_PDBUS_PRE_DIV_SHIFT)         /* 0x0000001F */
#define CRU_CLKSEL_CON02_ACLK_PDBUS_PRE_SEL_SHIFT          (6U)
#define CRU_CLKSEL_CON02_ACLK_PDBUS_PRE_SEL_MASK           (0x3U << CRU_CLKSEL_CON02_ACLK_PDBUS_PRE_SEL_SHIFT)          /* 0x000000C0 */
#define CRU_CLKSEL_CON02_HCLK_PDBUS_PRE_DIV_SHIFT          (8U)
#define CRU_CLKSEL_CON02_HCLK_PDBUS_PRE_DIV_MASK           (0x1FU << CRU_CLKSEL_CON02_HCLK_PDBUS_PRE_DIV_SHIFT)         /* 0x00001F00 */
#define CRU_CLKSEL_CON02_HCLK_PDBUS_PRE_SEL_SHIFT          (15U)
#define CRU_CLKSEL_CON02_HCLK_PDBUS_PRE_SEL_MASK           (0x1U << CRU_CLKSEL_CON02_HCLK_PDBUS_PRE_SEL_SHIFT)          /* 0x00008000 */
/* CLKSEL_CON03 */
#define CRU_CLKSEL_CON03_OFFSET                            (0x10CU)
#define CRU_CLKSEL_CON03_PCLK_PDBUS_PRE_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON03_PCLK_PDBUS_PRE_DIV_MASK           (0x1FU << CRU_CLKSEL_CON03_PCLK_PDBUS_PRE_DIV_SHIFT)         /* 0x0000001F */
#define CRU_CLKSEL_CON03_PCLK_PDBUS_PRE_SEL_SHIFT          (7U)
#define CRU_CLKSEL_CON03_PCLK_PDBUS_PRE_SEL_MASK           (0x1U << CRU_CLKSEL_CON03_PCLK_PDBUS_PRE_SEL_SHIFT)          /* 0x00000080 */
#define CRU_CLKSEL_CON03_CLK_SCR1_DIV_SHIFT                (8U)
#define CRU_CLKSEL_CON03_CLK_SCR1_DIV_MASK                 (0x1FU << CRU_CLKSEL_CON03_CLK_SCR1_DIV_SHIFT)               /* 0x00001F00 */
#define CRU_CLKSEL_CON03_CLK_SCR1_SEL_SHIFT                (15U)
#define CRU_CLKSEL_CON03_CLK_SCR1_SEL_MASK                 (0x1U << CRU_CLKSEL_CON03_CLK_SCR1_SEL_SHIFT)                /* 0x00008000 */
/* CLKSEL_CON04 */
#define CRU_CLKSEL_CON04_OFFSET                            (0x110U)
#define CRU_CLKSEL_CON04_ACLK_PDCRYPT_DIV_SHIFT            (0U)
#define CRU_CLKSEL_CON04_ACLK_PDCRYPT_DIV_MASK             (0x1FU << CRU_CLKSEL_CON04_ACLK_PDCRYPT_DIV_SHIFT)           /* 0x0000001F */
#define CRU_CLKSEL_CON04_ACLK_PDCRYPT_SEL_SHIFT            (7U)
#define CRU_CLKSEL_CON04_ACLK_PDCRYPT_SEL_MASK             (0x1U << CRU_CLKSEL_CON04_ACLK_PDCRYPT_SEL_SHIFT)            /* 0x00000080 */
#define CRU_CLKSEL_CON04_HCLK_PDCRYPT_DIV_SHIFT            (8U)
#define CRU_CLKSEL_CON04_HCLK_PDCRYPT_DIV_MASK             (0x1FU << CRU_CLKSEL_CON04_HCLK_PDCRYPT_DIV_SHIFT)           /* 0x00001F00 */
/* CLKSEL_CON05 */
#define CRU_CLKSEL_CON05_OFFSET                            (0x114U)
#define CRU_CLKSEL_CON05_CLK_I2C1_DIV_SHIFT                (0U)
#define CRU_CLKSEL_CON05_CLK_I2C1_DIV_MASK                 (0x7FU << CRU_CLKSEL_CON05_CLK_I2C1_DIV_SHIFT)               /* 0x0000007F */
#define CRU_CLKSEL_CON05_CLK_I2C3_DIV_SHIFT                (8U)
#define CRU_CLKSEL_CON05_CLK_I2C3_DIV_MASK                 (0x7FU << CRU_CLKSEL_CON05_CLK_I2C3_DIV_SHIFT)               /* 0x00007F00 */
/* CLKSEL_CON06 */
#define CRU_CLKSEL_CON06_OFFSET                            (0x118U)
#define CRU_CLKSEL_CON06_CLK_I2C4_DIV_SHIFT                (0U)
#define CRU_CLKSEL_CON06_CLK_I2C4_DIV_MASK                 (0x7FU << CRU_CLKSEL_CON06_CLK_I2C4_DIV_SHIFT)               /* 0x0000007F */
#define CRU_CLKSEL_CON06_CLK_I2C5_DIV_SHIFT                (8U)
#define CRU_CLKSEL_CON06_CLK_I2C5_DIV_MASK                 (0x7FU << CRU_CLKSEL_CON06_CLK_I2C5_DIV_SHIFT)               /* 0x00007F00 */
/* CLKSEL_CON07 */
#define CRU_CLKSEL_CON07_OFFSET                            (0x11CU)
#define CRU_CLKSEL_CON07_CLK_CRYPTO_CORE_DIV_SHIFT         (0U)
#define CRU_CLKSEL_CON07_CLK_CRYPTO_CORE_DIV_MASK          (0x1FU << CRU_CLKSEL_CON07_CLK_CRYPTO_CORE_DIV_SHIFT)        /* 0x0000001F */
#define CRU_CLKSEL_CON07_CLK_CRYPTO_CORE_SEL_SHIFT         (7U)
#define CRU_CLKSEL_CON07_CLK_CRYPTO_CORE_SEL_MASK          (0x1U << CRU_CLKSEL_CON07_CLK_CRYPTO_CORE_SEL_SHIFT)         /* 0x00000080 */
#define CRU_CLKSEL_CON07_CLK_CRYPTO_PKA_DIV_SHIFT          (8U)
#define CRU_CLKSEL_CON07_CLK_CRYPTO_PKA_DIV_MASK           (0x1FU << CRU_CLKSEL_CON07_CLK_CRYPTO_PKA_DIV_SHIFT)         /* 0x00001F00 */
#define CRU_CLKSEL_CON07_CLK_CRYPTO_PKA_SEL_SHIFT          (15U)
#define CRU_CLKSEL_CON07_CLK_CRYPTO_PKA_SEL_MASK           (0x1U << CRU_CLKSEL_CON07_CLK_CRYPTO_PKA_SEL_SHIFT)          /* 0x00008000 */
/* CLKSEL_CON08 */
#define CRU_CLKSEL_CON08_OFFSET                            (0x120U)
#define CRU_CLKSEL_CON08_CLK_SPI1_DIV_SHIFT                (0U)
#define CRU_CLKSEL_CON08_CLK_SPI1_DIV_MASK                 (0x7FU << CRU_CLKSEL_CON08_CLK_SPI1_DIV_SHIFT)               /* 0x0000007F */
#define CRU_CLKSEL_CON08_CLK_SPI1_SEL_SHIFT                (7U)
#define CRU_CLKSEL_CON08_CLK_SPI1_SEL_MASK                 (0x1U << CRU_CLKSEL_CON08_CLK_SPI1_SEL_SHIFT)                /* 0x00000080 */
/* CLKSEL_CON09 */
#define CRU_CLKSEL_CON09_OFFSET                            (0x124U)
#define CRU_CLKSEL_CON09_CLK_PWM2_DIV_SHIFT                (8U)
#define CRU_CLKSEL_CON09_CLK_PWM2_DIV_MASK                 (0x7FU << CRU_CLKSEL_CON09_CLK_PWM2_DIV_SHIFT)               /* 0x00007F00 */
#define CRU_CLKSEL_CON09_CLK_PWM2_SEL_SHIFT                (15U)
#define CRU_CLKSEL_CON09_CLK_PWM2_SEL_MASK                 (0x1U << CRU_CLKSEL_CON09_CLK_PWM2_SEL_SHIFT)                /* 0x00008000 */
/* CLKSEL_CON10 */
#define CRU_CLKSEL_CON10_OFFSET                            (0x128U)
#define CRU_CLKSEL_CON10_SCLK_UART0_DIV_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON10_SCLK_UART0_DIV_DIV_MASK           (0x7FU << CRU_CLKSEL_CON10_SCLK_UART0_DIV_DIV_SHIFT)         /* 0x0000007F */
#define CRU_CLKSEL_CON10_SCLK_UART0_DIV_SEL_SHIFT          (8U)
#define CRU_CLKSEL_CON10_SCLK_UART0_DIV_SEL_MASK           (0x3U << CRU_CLKSEL_CON10_SCLK_UART0_DIV_SEL_SHIFT)          /* 0x00000300 */
#define CRU_CLKSEL_CON10_SCLK_UART0_SEL_SHIFT              (10U)
#define CRU_CLKSEL_CON10_SCLK_UART0_SEL_MASK               (0x3U << CRU_CLKSEL_CON10_SCLK_UART0_SEL_SHIFT)              /* 0x00000C00 */
/* CLKSEL_CON11 */
#define CRU_CLKSEL_CON11_OFFSET                            (0x12CU)
#define CRU_CLKSEL_CON11_SCLK_UART0_FRAC_DIV_SHIFT         (0U)
#define CRU_CLKSEL_CON11_SCLK_UART0_FRAC_DIV_MASK          (0xFFFFFFFFU << CRU_CLKSEL_CON11_SCLK_UART0_FRAC_DIV_SHIFT)  /* 0xFFFFFFFF */
/* CLKSEL_CON12 */
#define CRU_CLKSEL_CON12_OFFSET                            (0x130U)
#define CRU_CLKSEL_CON12_SCLK_UART2_DIV_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON12_SCLK_UART2_DIV_DIV_MASK           (0x7FU << CRU_CLKSEL_CON12_SCLK_UART2_DIV_DIV_SHIFT)         /* 0x0000007F */
#define CRU_CLKSEL_CON12_SCLK_UART2_DIV_SEL_SHIFT          (8U)
#define CRU_CLKSEL_CON12_SCLK_UART2_DIV_SEL_MASK           (0x3U << CRU_CLKSEL_CON12_SCLK_UART2_DIV_SEL_SHIFT)          /* 0x00000300 */
#define CRU_CLKSEL_CON12_SCLK_UART2_SEL_SHIFT              (10U)
#define CRU_CLKSEL_CON12_SCLK_UART2_SEL_MASK               (0x3U << CRU_CLKSEL_CON12_SCLK_UART2_SEL_SHIFT)              /* 0x00000C00 */
/* CLKSEL_CON13 */
#define CRU_CLKSEL_CON13_OFFSET                            (0x134U)
#define CRU_CLKSEL_CON13_SCLK_UART2_FRAC_DIV_SHIFT         (0U)
#define CRU_CLKSEL_CON13_SCLK_UART2_FRAC_DIV_MASK          (0xFFFFFFFFU << CRU_CLKSEL_CON13_SCLK_UART2_FRAC_DIV_SHIFT)  /* 0xFFFFFFFF */
/* CLKSEL_CON14 */
#define CRU_CLKSEL_CON14_OFFSET                            (0x138U)
#define CRU_CLKSEL_CON14_SCLK_UART3_DIV_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON14_SCLK_UART3_DIV_DIV_MASK           (0x7FU << CRU_CLKSEL_CON14_SCLK_UART3_DIV_DIV_SHIFT)         /* 0x0000007F */
#define CRU_CLKSEL_CON14_SCLK_UART3_DIV_SEL_SHIFT          (8U)
#define CRU_CLKSEL_CON14_SCLK_UART3_DIV_SEL_MASK           (0x3U << CRU_CLKSEL_CON14_SCLK_UART3_DIV_SEL_SHIFT)          /* 0x00000300 */
#define CRU_CLKSEL_CON14_SCLK_UART3_SEL_SHIFT              (10U)
#define CRU_CLKSEL_CON14_SCLK_UART3_SEL_MASK               (0x3U << CRU_CLKSEL_CON14_SCLK_UART3_SEL_SHIFT)              /* 0x00000C00 */
/* CLKSEL_CON15 */
#define CRU_CLKSEL_CON15_OFFSET                            (0x13CU)
#define CRU_CLKSEL_CON15_SCLK_UART3_FRAC_DIV_SHIFT         (0U)
#define CRU_CLKSEL_CON15_SCLK_UART3_FRAC_DIV_MASK          (0xFFFFFFFFU << CRU_CLKSEL_CON15_SCLK_UART3_FRAC_DIV_SHIFT)  /* 0xFFFFFFFF */
/* CLKSEL_CON16 */
#define CRU_CLKSEL_CON16_OFFSET                            (0x140U)
#define CRU_CLKSEL_CON16_SCLK_UART4_DIV_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON16_SCLK_UART4_DIV_DIV_MASK           (0x7FU << CRU_CLKSEL_CON16_SCLK_UART4_DIV_DIV_SHIFT)         /* 0x0000007F */
#define CRU_CLKSEL_CON16_SCLK_UART4_DIV_SEL_SHIFT          (8U)
#define CRU_CLKSEL_CON16_SCLK_UART4_DIV_SEL_MASK           (0x3U << CRU_CLKSEL_CON16_SCLK_UART4_DIV_SEL_SHIFT)          /* 0x00000300 */
#define CRU_CLKSEL_CON16_SCLK_UART4_SEL_SHIFT              (10U)
#define CRU_CLKSEL_CON16_SCLK_UART4_SEL_MASK               (0x3U << CRU_CLKSEL_CON16_SCLK_UART4_SEL_SHIFT)              /* 0x00000C00 */
/* CLKSEL_CON17 */
#define CRU_CLKSEL_CON17_OFFSET                            (0x144U)
#define CRU_CLKSEL_CON17_SCLK_UART4_FRAC_DIV_SHIFT         (0U)
#define CRU_CLKSEL_CON17_SCLK_UART4_FRAC_DIV_MASK          (0xFFFFFFFFU << CRU_CLKSEL_CON17_SCLK_UART4_FRAC_DIV_SHIFT)  /* 0xFFFFFFFF */
/* CLKSEL_CON18 */
#define CRU_CLKSEL_CON18_OFFSET                            (0x148U)
#define CRU_CLKSEL_CON18_SCLK_UART5_DIV_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON18_SCLK_UART5_DIV_DIV_MASK           (0x7FU << CRU_CLKSEL_CON18_SCLK_UART5_DIV_DIV_SHIFT)         /* 0x0000007F */
#define CRU_CLKSEL_CON18_SCLK_UART5_DIV_SEL_SHIFT          (8U)
#define CRU_CLKSEL_CON18_SCLK_UART5_DIV_SEL_MASK           (0x3U << CRU_CLKSEL_CON18_SCLK_UART5_DIV_SEL_SHIFT)          /* 0x00000300 */
#define CRU_CLKSEL_CON18_SCLK_UART5_SEL_SHIFT              (10U)
#define CRU_CLKSEL_CON18_SCLK_UART5_SEL_MASK               (0x3U << CRU_CLKSEL_CON18_SCLK_UART5_SEL_SHIFT)              /* 0x00000C00 */
/* CLKSEL_CON19 */
#define CRU_CLKSEL_CON19_OFFSET                            (0x14CU)
#define CRU_CLKSEL_CON19_SCLK_UART5_FRAC_DIV_SHIFT         (0U)
#define CRU_CLKSEL_CON19_SCLK_UART5_FRAC_DIV_MASK          (0xFFFFFFFFU << CRU_CLKSEL_CON19_SCLK_UART5_FRAC_DIV_SHIFT)  /* 0xFFFFFFFF */
/* CLKSEL_CON20 */
#define CRU_CLKSEL_CON20_OFFSET                            (0x150U)
#define CRU_CLKSEL_CON20_CLK_SARADC_NDFT_DIV_SHIFT         (0U)
#define CRU_CLKSEL_CON20_CLK_SARADC_NDFT_DIV_MASK          (0x7FFU << CRU_CLKSEL_CON20_CLK_SARADC_NDFT_DIV_SHIFT)       /* 0x000007FF */
/* CLKSEL_CON21 */
#define CRU_CLKSEL_CON21_OFFSET                            (0x154U)
#define CRU_CLKSEL_CON21_DBCLK_GPIO1_SEL_SHIFT             (15U)
#define CRU_CLKSEL_CON21_DBCLK_GPIO1_SEL_MASK              (0x1U << CRU_CLKSEL_CON21_DBCLK_GPIO1_SEL_SHIFT)             /* 0x00008000 */
/* CLKSEL_CON22 */
#define CRU_CLKSEL_CON22_OFFSET                            (0x158U)
#define CRU_CLKSEL_CON22_DBCLK_GPIO2_SEL_SHIFT             (15U)
#define CRU_CLKSEL_CON22_DBCLK_GPIO2_SEL_MASK              (0x1U << CRU_CLKSEL_CON22_DBCLK_GPIO2_SEL_SHIFT)             /* 0x00008000 */
/* CLKSEL_CON23 */
#define CRU_CLKSEL_CON23_OFFSET                            (0x15CU)
#define CRU_CLKSEL_CON23_DBCLK_GPIO3_SEL_SHIFT             (15U)
#define CRU_CLKSEL_CON23_DBCLK_GPIO3_SEL_MASK              (0x1U << CRU_CLKSEL_CON23_DBCLK_GPIO3_SEL_SHIFT)             /* 0x00008000 */
/* CLKSEL_CON24 */
#define CRU_CLKSEL_CON24_OFFSET                            (0x160U)
#define CRU_CLKSEL_CON24_DBCLK_GPIO4_SEL_SHIFT             (15U)
#define CRU_CLKSEL_CON24_DBCLK_GPIO4_SEL_MASK              (0x1U << CRU_CLKSEL_CON24_DBCLK_GPIO4_SEL_SHIFT)             /* 0x00008000 */
/* CLKSEL_CON25 */
#define CRU_CLKSEL_CON25_OFFSET                            (0x164U)
#define CRU_CLKSEL_CON25_CLK_CAN_DIV_SHIFT                 (0U)
#define CRU_CLKSEL_CON25_CLK_CAN_DIV_MASK                  (0x7FU << CRU_CLKSEL_CON25_CLK_CAN_DIV_SHIFT)                /* 0x0000007F */
#define CRU_CLKSEL_CON25_CLK_CAN_SEL_SHIFT                 (7U)
#define CRU_CLKSEL_CON25_CLK_CAN_SEL_MASK                  (0x1U << CRU_CLKSEL_CON25_CLK_CAN_SEL_SHIFT)                 /* 0x00000080 */
#define CRU_CLKSEL_CON25_DCLK_DECOM_DIV_SHIFT              (8U)
#define CRU_CLKSEL_CON25_DCLK_DECOM_DIV_MASK               (0x7FU << CRU_CLKSEL_CON25_DCLK_DECOM_DIV_SHIFT)             /* 0x00007F00 */
#define CRU_CLKSEL_CON25_DCLK_DECOM_SEL_SHIFT              (15U)
#define CRU_CLKSEL_CON25_DCLK_DECOM_SEL_MASK               (0x1U << CRU_CLKSEL_CON25_DCLK_DECOM_SEL_SHIFT)              /* 0x00008000 */
/* CLKSEL_CON26 */
#define CRU_CLKSEL_CON26_OFFSET                            (0x168U)
#define CRU_CLKSEL_CON26_HCLK_PDAUDIO_DIV_SHIFT            (0U)
#define CRU_CLKSEL_CON26_HCLK_PDAUDIO_DIV_MASK             (0x1FU << CRU_CLKSEL_CON26_HCLK_PDAUDIO_DIV_SHIFT)           /* 0x0000001F */
/* CLKSEL_CON27 */
#define CRU_CLKSEL_CON27_OFFSET                            (0x16CU)
#define CRU_CLKSEL_CON27_MCLK_I2S0_TX_DIV_DIV_SHIFT        (0U)
#define CRU_CLKSEL_CON27_MCLK_I2S0_TX_DIV_DIV_MASK         (0x7FU << CRU_CLKSEL_CON27_MCLK_I2S0_TX_DIV_DIV_SHIFT)       /* 0x0000007F */
#define CRU_CLKSEL_CON27_MCLK_I2S0_TX_DIV_SEL_SHIFT        (7U)
#define CRU_CLKSEL_CON27_MCLK_I2S0_TX_DIV_SEL_MASK         (0x1U << CRU_CLKSEL_CON27_MCLK_I2S0_TX_DIV_SEL_SHIFT)        /* 0x00000080 */
#define CRU_CLKSEL_CON27_MCLK_I2S0_RX_DIV_DIV_SHIFT        (8U)
#define CRU_CLKSEL_CON27_MCLK_I2S0_RX_DIV_DIV_MASK         (0x7FU << CRU_CLKSEL_CON27_MCLK_I2S0_RX_DIV_DIV_SHIFT)       /* 0x00007F00 */
#define CRU_CLKSEL_CON27_MCLK_I2S0_RX_DIV_SEL_SHIFT        (15U)
#define CRU_CLKSEL_CON27_MCLK_I2S0_RX_DIV_SEL_MASK         (0x1U << CRU_CLKSEL_CON27_MCLK_I2S0_RX_DIV_SEL_SHIFT)        /* 0x00008000 */
/* CLKSEL_CON28 */
#define CRU_CLKSEL_CON28_OFFSET                            (0x170U)
#define CRU_CLKSEL_CON28_MCLK_I2S0_TX_FRACDIV_DIV_SHIFT    (0U)
#define CRU_CLKSEL_CON28_MCLK_I2S0_TX_FRACDIV_DIV_MASK     (0xFFFFFFFFU << CRU_CLKSEL_CON28_MCLK_I2S0_TX_FRACDIV_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON29 */
#define CRU_CLKSEL_CON29_OFFSET                            (0x174U)
#define CRU_CLKSEL_CON29_MCLK_I2S0_RX_FRACDIV_DIV_SHIFT    (0U)
#define CRU_CLKSEL_CON29_MCLK_I2S0_RX_FRACDIV_DIV_MASK     (0xFFFFFFFFU << CRU_CLKSEL_CON29_MCLK_I2S0_RX_FRACDIV_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON30 */
#define CRU_CLKSEL_CON30_OFFSET                            (0x178U)
#define CRU_CLKSEL_CON30_MCLK_I2S0_TX_SEL_SHIFT            (0U)
#define CRU_CLKSEL_CON30_MCLK_I2S0_TX_SEL_MASK             (0x3U << CRU_CLKSEL_CON30_MCLK_I2S0_TX_SEL_SHIFT)            /* 0x00000003 */
#define CRU_CLKSEL_CON30_MCLK_I2S0_RX_SEL_SHIFT            (2U)
#define CRU_CLKSEL_CON30_MCLK_I2S0_RX_SEL_MASK             (0x3U << CRU_CLKSEL_CON30_MCLK_I2S0_RX_SEL_SHIFT)            /* 0x0000000C */
#define CRU_CLKSEL_CON30_MCLK_I2S0_TX_OUT2IO_SEL_SHIFT     (6U)
#define CRU_CLKSEL_CON30_MCLK_I2S0_TX_OUT2IO_SEL_MASK      (0x1U << CRU_CLKSEL_CON30_MCLK_I2S0_TX_OUT2IO_SEL_SHIFT)     /* 0x00000040 */
#define CRU_CLKSEL_CON30_MCLK_I2S0_RX_OUT2IO_SEL_SHIFT     (8U)
#define CRU_CLKSEL_CON30_MCLK_I2S0_RX_OUT2IO_SEL_MASK      (0x1U << CRU_CLKSEL_CON30_MCLK_I2S0_RX_OUT2IO_SEL_SHIFT)     /* 0x00000100 */
/* CLKSEL_CON31 */
#define CRU_CLKSEL_CON31_OFFSET                            (0x17CU)
#define CRU_CLKSEL_CON31_MCLK_I2S1_DIV_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON31_MCLK_I2S1_DIV_DIV_MASK            (0x7FU << CRU_CLKSEL_CON31_MCLK_I2S1_DIV_DIV_SHIFT)          /* 0x0000007F */
#define CRU_CLKSEL_CON31_MCLK_I2S1_DIV_SEL_SHIFT           (7U)
#define CRU_CLKSEL_CON31_MCLK_I2S1_DIV_SEL_MASK            (0x1U << CRU_CLKSEL_CON31_MCLK_I2S1_DIV_SEL_SHIFT)           /* 0x00000080 */
#define CRU_CLKSEL_CON31_MCLK_I2S1_SEL_SHIFT               (8U)
#define CRU_CLKSEL_CON31_MCLK_I2S1_SEL_MASK                (0x7U << CRU_CLKSEL_CON31_MCLK_I2S1_SEL_SHIFT)               /* 0x00000700 */
#define CRU_CLKSEL_CON31_MCLK_I2S1_OUT2IO_SEL_SHIFT        (12U)
#define CRU_CLKSEL_CON31_MCLK_I2S1_OUT2IO_SEL_MASK         (0x1U << CRU_CLKSEL_CON31_MCLK_I2S1_OUT2IO_SEL_SHIFT)        /* 0x00001000 */
/* CLKSEL_CON32 */
#define CRU_CLKSEL_CON32_OFFSET                            (0x180U)
#define CRU_CLKSEL_CON32_MCLK_I2S1_FRACDIV_DIV_SHIFT       (0U)
#define CRU_CLKSEL_CON32_MCLK_I2S1_FRACDIV_DIV_MASK        (0xFFFFFFFFU << CRU_CLKSEL_CON32_MCLK_I2S1_FRACDIV_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON33 */
#define CRU_CLKSEL_CON33_OFFSET                            (0x184U)
#define CRU_CLKSEL_CON33_MCLK_I2S2_DIV_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON33_MCLK_I2S2_DIV_DIV_MASK            (0x7FU << CRU_CLKSEL_CON33_MCLK_I2S2_DIV_DIV_SHIFT)          /* 0x0000007F */
#define CRU_CLKSEL_CON33_MCLK_I2S2_DIV_SEL_SHIFT           (7U)
#define CRU_CLKSEL_CON33_MCLK_I2S2_DIV_SEL_MASK            (0x1U << CRU_CLKSEL_CON33_MCLK_I2S2_DIV_SEL_SHIFT)           /* 0x00000080 */
#define CRU_CLKSEL_CON33_MCLK_I2S2_SEL_SHIFT               (8U)
#define CRU_CLKSEL_CON33_MCLK_I2S2_SEL_MASK                (0x3U << CRU_CLKSEL_CON33_MCLK_I2S2_SEL_SHIFT)               /* 0x00000300 */
#define CRU_CLKSEL_CON33_MCLK_I2S2_OUT2IO_SEL_SHIFT        (10U)
#define CRU_CLKSEL_CON33_MCLK_I2S2_OUT2IO_SEL_MASK         (0x1U << CRU_CLKSEL_CON33_MCLK_I2S2_OUT2IO_SEL_SHIFT)        /* 0x00000400 */
/* CLKSEL_CON34 */
#define CRU_CLKSEL_CON34_OFFSET                            (0x188U)
#define CRU_CLKSEL_CON34_MCLK_I2S2CH1_FRACDIV_DIV_SHIFT    (0U)
#define CRU_CLKSEL_CON34_MCLK_I2S2CH1_FRACDIV_DIV_MASK     (0xFFFFFFFFU << CRU_CLKSEL_CON34_MCLK_I2S2CH1_FRACDIV_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON35 */
#define CRU_CLKSEL_CON35_OFFSET                            (0x18CU)
#define CRU_CLKSEL_CON35_MCLK_PDM_DIV_SHIFT                (0U)
#define CRU_CLKSEL_CON35_MCLK_PDM_DIV_MASK                 (0x7FU << CRU_CLKSEL_CON35_MCLK_PDM_DIV_SHIFT)               /* 0x0000007F */
#define CRU_CLKSEL_CON35_MCLK_PDM_SEL_SHIFT                (8U)
#define CRU_CLKSEL_CON35_MCLK_PDM_SEL_MASK                 (0x3U << CRU_CLKSEL_CON35_MCLK_PDM_SEL_SHIFT)                /* 0x00000300 */
/* CLKSEL_CON36 */
#define CRU_CLKSEL_CON36_OFFSET                            (0x190U)
#define CRU_CLKSEL_CON36_SCLK_AUDPWM_DIV_DIV_SHIFT         (0U)
#define CRU_CLKSEL_CON36_SCLK_AUDPWM_DIV_DIV_MASK          (0x7FU << CRU_CLKSEL_CON36_SCLK_AUDPWM_DIV_DIV_SHIFT)        /* 0x0000007F */
#define CRU_CLKSEL_CON36_SCLK_AUDPWM_DIV_SEL_SHIFT         (7U)
#define CRU_CLKSEL_CON36_SCLK_AUDPWM_DIV_SEL_MASK          (0x1U << CRU_CLKSEL_CON36_SCLK_AUDPWM_DIV_SEL_SHIFT)         /* 0x00000080 */
#define CRU_CLKSEL_CON36_SCLK_AUDPWM_SEL_SHIFT             (8U)
#define CRU_CLKSEL_CON36_SCLK_AUDPWM_SEL_MASK              (0x3U << CRU_CLKSEL_CON36_SCLK_AUDPWM_SEL_SHIFT)             /* 0x00000300 */
/* CLKSEL_CON37 */
#define CRU_CLKSEL_CON37_OFFSET                            (0x194U)
#define CRU_CLKSEL_CON37_SCLK_AUDPWM_FRACDIV_DIV_SHIFT     (0U)
#define CRU_CLKSEL_CON37_SCLK_AUDPWM_FRACDIV_DIV_MASK      (0xFFFFFFFFU << CRU_CLKSEL_CON37_SCLK_AUDPWM_FRACDIV_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON38 */
#define CRU_CLKSEL_CON38_OFFSET                            (0x198U)
#define CRU_CLKSEL_CON38_MCLK_I2S1_FRACDIV_V2_DIV_SHIFT    (0U)
#define CRU_CLKSEL_CON38_MCLK_I2S1_FRACDIV_V2_DIV_MASK     (0xFFFFFFFFU << CRU_CLKSEL_CON38_MCLK_I2S1_FRACDIV_V2_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON40 */
#define CRU_CLKSEL_CON40_OFFSET                            (0x1A0U)
#define CRU_CLKSEL_CON40_ACLK_PDVEPU_DIV_SHIFT             (0U)
#define CRU_CLKSEL_CON40_ACLK_PDVEPU_DIV_MASK              (0x1FU << CRU_CLKSEL_CON40_ACLK_PDVEPU_DIV_SHIFT)            /* 0x0000001F */
#define CRU_CLKSEL_CON40_ACLK_PDVEPU_SEL_SHIFT             (6U)
#define CRU_CLKSEL_CON40_ACLK_PDVEPU_SEL_MASK              (0x3U << CRU_CLKSEL_CON40_ACLK_PDVEPU_SEL_SHIFT)             /* 0x000000C0 */
#define CRU_CLKSEL_CON40_CLK_VENC_CORE_DIV_SHIFT           (8U)
#define CRU_CLKSEL_CON40_CLK_VENC_CORE_DIV_MASK            (0x1FU << CRU_CLKSEL_CON40_CLK_VENC_CORE_DIV_SHIFT)          /* 0x00001F00 */
#define CRU_CLKSEL_CON40_CLK_VENC_CORE_SEL_SHIFT           (14U)
#define CRU_CLKSEL_CON40_CLK_VENC_CORE_SEL_MASK            (0x3U << CRU_CLKSEL_CON40_CLK_VENC_CORE_SEL_SHIFT)           /* 0x0000C000 */
/* CLKSEL_CON41 */
#define CRU_CLKSEL_CON41_OFFSET                            (0x1A4U)
#define CRU_CLKSEL_CON41_HCLK_PDVEPU_DIV_SHIFT             (0U)
#define CRU_CLKSEL_CON41_HCLK_PDVEPU_DIV_MASK              (0x1FU << CRU_CLKSEL_CON41_HCLK_PDVEPU_DIV_SHIFT)            /* 0x0000001F */
#define CRU_CLKSEL_CON41_HCLK_PDVDEC_DIV_SHIFT             (8U)
#define CRU_CLKSEL_CON41_HCLK_PDVDEC_DIV_MASK              (0x1FU << CRU_CLKSEL_CON41_HCLK_PDVDEC_DIV_SHIFT)            /* 0x00001F00 */
/* CLKSEL_CON42 */
#define CRU_CLKSEL_CON42_OFFSET                            (0x1A8U)
#define CRU_CLKSEL_CON42_ACLK_PDVDEC_DIV_SHIFT             (0U)
#define CRU_CLKSEL_CON42_ACLK_PDVDEC_DIV_MASK              (0x1FU << CRU_CLKSEL_CON42_ACLK_PDVDEC_DIV_SHIFT)            /* 0x0000001F */
#define CRU_CLKSEL_CON42_ACLK_PDVDEC_SEL_SHIFT             (6U)
#define CRU_CLKSEL_CON42_ACLK_PDVDEC_SEL_MASK              (0x3U << CRU_CLKSEL_CON42_ACLK_PDVDEC_SEL_SHIFT)             /* 0x000000C0 */
#define CRU_CLKSEL_CON42_CLK_VDEC_CORE_DIV_SHIFT           (8U)
#define CRU_CLKSEL_CON42_CLK_VDEC_CORE_DIV_MASK            (0x1FU << CRU_CLKSEL_CON42_CLK_VDEC_CORE_DIV_SHIFT)          /* 0x00001F00 */
#define CRU_CLKSEL_CON42_CLK_VDEC_CORE_SEL_SHIFT           (14U)
#define CRU_CLKSEL_CON42_CLK_VDEC_CORE_SEL_MASK            (0x3U << CRU_CLKSEL_CON42_CLK_VDEC_CORE_SEL_SHIFT)           /* 0x0000C000 */
/* CLKSEL_CON43 */
#define CRU_CLKSEL_CON43_OFFSET                            (0x1ACU)
#define CRU_CLKSEL_CON43_CLK_VDEC_CA_DIV_SHIFT             (0U)
#define CRU_CLKSEL_CON43_CLK_VDEC_CA_DIV_MASK              (0x1FU << CRU_CLKSEL_CON43_CLK_VDEC_CA_DIV_SHIFT)            /* 0x0000001F */
#define CRU_CLKSEL_CON43_CLK_VDEC_CA_SEL_SHIFT             (6U)
#define CRU_CLKSEL_CON43_CLK_VDEC_CA_SEL_MASK              (0x3U << CRU_CLKSEL_CON43_CLK_VDEC_CA_SEL_SHIFT)             /* 0x000000C0 */
#define CRU_CLKSEL_CON43_CLK_VDEC_HEVC_CA_DIV_SHIFT        (8U)
#define CRU_CLKSEL_CON43_CLK_VDEC_HEVC_CA_DIV_MASK         (0x1FU << CRU_CLKSEL_CON43_CLK_VDEC_HEVC_CA_DIV_SHIFT)       /* 0x00001F00 */
#define CRU_CLKSEL_CON43_CLK_VDEC_HEVC_CA_SEL_SHIFT        (14U)
#define CRU_CLKSEL_CON43_CLK_VDEC_HEVC_CA_SEL_MASK         (0x3U << CRU_CLKSEL_CON43_CLK_VDEC_HEVC_CA_SEL_SHIFT)        /* 0x0000C000 */
/* CLKSEL_CON44 */
#define CRU_CLKSEL_CON44_OFFSET                            (0x1B0U)
#define CRU_CLKSEL_CON44_ACLK_PDJPEG_DIV_SHIFT             (0U)
#define CRU_CLKSEL_CON44_ACLK_PDJPEG_DIV_MASK              (0x1FU << CRU_CLKSEL_CON44_ACLK_PDJPEG_DIV_SHIFT)            /* 0x0000001F */
#define CRU_CLKSEL_CON44_ACLK_PDJPEG_SEL_SHIFT             (6U)
#define CRU_CLKSEL_CON44_ACLK_PDJPEG_SEL_MASK              (0x3U << CRU_CLKSEL_CON44_ACLK_PDJPEG_SEL_SHIFT)             /* 0x000000C0 */
#define CRU_CLKSEL_CON44_HCLK_PDJPEG_DIV_SHIFT             (8U)
#define CRU_CLKSEL_CON44_HCLK_PDJPEG_DIV_MASK              (0x1FU << CRU_CLKSEL_CON44_HCLK_PDJPEG_DIV_SHIFT)            /* 0x00001F00 */
/* CLKSEL_CON45 */
#define CRU_CLKSEL_CON45_OFFSET                            (0x1B4U)
#define CRU_CLKSEL_CON45_ACLK_PDVO_DIV_SHIFT               (0U)
#define CRU_CLKSEL_CON45_ACLK_PDVO_DIV_MASK                (0x1FU << CRU_CLKSEL_CON45_ACLK_PDVO_DIV_SHIFT)              /* 0x0000001F */
#define CRU_CLKSEL_CON45_ACLK_PDVO_SEL_SHIFT               (7U)
#define CRU_CLKSEL_CON45_ACLK_PDVO_SEL_MASK                (0x1U << CRU_CLKSEL_CON45_ACLK_PDVO_SEL_SHIFT)               /* 0x00000080 */
#define CRU_CLKSEL_CON45_HCLK_PDVO_DIV_SHIFT               (8U)
#define CRU_CLKSEL_CON45_HCLK_PDVO_DIV_MASK                (0x1FU << CRU_CLKSEL_CON45_HCLK_PDVO_DIV_SHIFT)              /* 0x00001F00 */
/* CLKSEL_CON46 */
#define CRU_CLKSEL_CON46_OFFSET                            (0x1B8U)
#define CRU_CLKSEL_CON46_CLK_RGA_CORE_DIV_SHIFT            (0U)
#define CRU_CLKSEL_CON46_CLK_RGA_CORE_DIV_MASK             (0x1FU << CRU_CLKSEL_CON46_CLK_RGA_CORE_DIV_SHIFT)           /* 0x0000001F */
#define CRU_CLKSEL_CON46_CLK_RGA_CORE_SEL_SHIFT            (7U)
#define CRU_CLKSEL_CON46_CLK_RGA_CORE_SEL_MASK             (0x1U << CRU_CLKSEL_CON46_CLK_RGA_CORE_SEL_SHIFT)            /* 0x00000080 */
#define CRU_CLKSEL_CON46_PCLK_PDVO_DIV_SHIFT               (8U)
#define CRU_CLKSEL_CON46_PCLK_PDVO_DIV_MASK                (0x1FU << CRU_CLKSEL_CON46_PCLK_PDVO_DIV_SHIFT)              /* 0x00001F00 */
/* CLKSEL_CON47 */
#define CRU_CLKSEL_CON47_OFFSET                            (0x1BCU)
#define CRU_CLKSEL_CON47_DCLK_VOP_DIV_DIV_SHIFT            (0U)
#define CRU_CLKSEL_CON47_DCLK_VOP_DIV_DIV_MASK             (0xFFU << CRU_CLKSEL_CON47_DCLK_VOP_DIV_DIV_SHIFT)           /* 0x000000FF */
#define CRU_CLKSEL_CON47_DCLK_VOP_DIV_SEL_SHIFT            (8U)
#define CRU_CLKSEL_CON47_DCLK_VOP_DIV_SEL_MASK             (0x1U << CRU_CLKSEL_CON47_DCLK_VOP_DIV_SEL_SHIFT)            /* 0x00000100 */
#define CRU_CLKSEL_CON47_DCLK_VOP_SEL_SHIFT                (10U)
#define CRU_CLKSEL_CON47_DCLK_VOP_SEL_MASK                 (0x3U << CRU_CLKSEL_CON47_DCLK_VOP_SEL_SHIFT)                /* 0x00000C00 */
/* CLKSEL_CON48 */
#define CRU_CLKSEL_CON48_OFFSET                            (0x1C0U)
#define CRU_CLKSEL_CON48_DCLK_VOP_FRACDIV_DIV_SHIFT        (0U)
#define CRU_CLKSEL_CON48_DCLK_VOP_FRACDIV_DIV_MASK         (0xFFFFFFFFU << CRU_CLKSEL_CON48_DCLK_VOP_FRACDIV_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON49 */
#define CRU_CLKSEL_CON49_OFFSET                            (0x1C4U)
#define CRU_CLKSEL_CON49_ACLK_PDVI_DIV_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON49_ACLK_PDVI_DIV_DIV_MASK            (0x1FU << CRU_CLKSEL_CON49_ACLK_PDVI_DIV_DIV_SHIFT)          /* 0x0000001F */
#define CRU_CLKSEL_CON49_ACLK_PDVI_DIV_SEL_SHIFT           (6U)
#define CRU_CLKSEL_CON49_ACLK_PDVI_DIV_SEL_MASK            (0x3U << CRU_CLKSEL_CON49_ACLK_PDVI_DIV_SEL_SHIFT)           /* 0x000000C0 */
#define CRU_CLKSEL_CON49_HCLK_PDVI_DIV_SHIFT               (8U)
#define CRU_CLKSEL_CON49_HCLK_PDVI_DIV_MASK                (0x1FU << CRU_CLKSEL_CON49_HCLK_PDVI_DIV_SHIFT)              /* 0x00001F00 */
/* CLKSEL_CON50 */
#define CRU_CLKSEL_CON50_OFFSET                            (0x1C8U)
#define CRU_CLKSEL_CON50_CLK_ISP_DIV_DIV_SHIFT             (0U)
#define CRU_CLKSEL_CON50_CLK_ISP_DIV_DIV_MASK              (0x1FU << CRU_CLKSEL_CON50_CLK_ISP_DIV_DIV_SHIFT)            /* 0x0000001F */
#define CRU_CLKSEL_CON50_CLK_ISP_DIV_SEL_SHIFT             (6U)
#define CRU_CLKSEL_CON50_CLK_ISP_DIV_SEL_MASK              (0x3U << CRU_CLKSEL_CON50_CLK_ISP_DIV_SEL_SHIFT)             /* 0x000000C0 */
#define CRU_CLKSEL_CON50_PCLK_PDVI_DIV_SHIFT               (8U)
#define CRU_CLKSEL_CON50_PCLK_PDVI_DIV_MASK                (0x1FU << CRU_CLKSEL_CON50_PCLK_PDVI_DIV_SHIFT)              /* 0x00001F00 */
#define CRU_CLKSEL_CON50_CLK_CIF_OUT2IO_SEL_SHIFT          (14U)
#define CRU_CLKSEL_CON50_CLK_CIF_OUT2IO_SEL_MASK           (0x3U << CRU_CLKSEL_CON50_CLK_CIF_OUT2IO_SEL_SHIFT)          /* 0x0000C000 */
/* CLKSEL_CON51 */
#define CRU_CLKSEL_CON51_OFFSET                            (0x1CCU)
#define CRU_CLKSEL_CON51_DCLK_CIF_DIV_SHIFT                (0U)
#define CRU_CLKSEL_CON51_DCLK_CIF_DIV_MASK                 (0x1FU << CRU_CLKSEL_CON51_DCLK_CIF_DIV_SHIFT)               /* 0x0000001F */
#define CRU_CLKSEL_CON51_DCLK_CIF_SEL_SHIFT                (6U)
#define CRU_CLKSEL_CON51_DCLK_CIF_SEL_MASK                 (0x3U << CRU_CLKSEL_CON51_DCLK_CIF_SEL_SHIFT)                /* 0x000000C0 */
#define CRU_CLKSEL_CON51_CLK_CIF_OUT2IO_DIV_DIV_SHIFT      (8U)
#define CRU_CLKSEL_CON51_CLK_CIF_OUT2IO_DIV_DIV_MASK       (0x3FU << CRU_CLKSEL_CON51_CLK_CIF_OUT2IO_DIV_DIV_SHIFT)     /* 0x00003F00 */
#define CRU_CLKSEL_CON51_CLK_CIF_OUT2IO_DIV_SEL_SHIFT      (15U)
#define CRU_CLKSEL_CON51_CLK_CIF_OUT2IO_DIV_SEL_MASK       (0x1U << CRU_CLKSEL_CON51_CLK_CIF_OUT2IO_DIV_SEL_SHIFT)      /* 0x00008000 */
/* CLKSEL_CON52 */
#define CRU_CLKSEL_CON52_OFFSET                            (0x1D0U)
#define CRU_CLKSEL_CON52_CLK_CIF_OUT2IO_FRACDIV_DIV_SHIFT  (0U)
#define CRU_CLKSEL_CON52_CLK_CIF_OUT2IO_FRACDIV_DIV_MASK   (0xFFFFFFFFU << CRU_CLKSEL_CON52_CLK_CIF_OUT2IO_FRACDIV_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON53 */
#define CRU_CLKSEL_CON53_OFFSET                            (0x1D4U)
#define CRU_CLKSEL_CON53_ACLK_PDPHP_DIV_SHIFT              (0U)
#define CRU_CLKSEL_CON53_ACLK_PDPHP_DIV_MASK               (0x1FU << CRU_CLKSEL_CON53_ACLK_PDPHP_DIV_SHIFT)             /* 0x0000001F */
#define CRU_CLKSEL_CON53_ACLK_PDPHP_SEL_SHIFT              (7U)
#define CRU_CLKSEL_CON53_ACLK_PDPHP_SEL_MASK               (0x1U << CRU_CLKSEL_CON53_ACLK_PDPHP_SEL_SHIFT)              /* 0x00000080 */
#define CRU_CLKSEL_CON53_HCLK_PDPHP_DIV_SHIFT              (8U)
#define CRU_CLKSEL_CON53_HCLK_PDPHP_DIV_MASK               (0x1FU << CRU_CLKSEL_CON53_HCLK_PDPHP_DIV_SHIFT)             /* 0x00001F00 */
/* CLKSEL_CON54 */
#define CRU_CLKSEL_CON54_OFFSET                            (0x1D8U)
#define CRU_CLKSEL_CON54_CLK_IEP_CORE_DIV_SHIFT            (0U)
#define CRU_CLKSEL_CON54_CLK_IEP_CORE_DIV_MASK             (0x1FU << CRU_CLKSEL_CON54_CLK_IEP_CORE_DIV_SHIFT)           /* 0x0000001F */
#define CRU_CLKSEL_CON54_CLK_IEP_CORE_SEL_SHIFT            (7U)
#define CRU_CLKSEL_CON54_CLK_IEP_CORE_SEL_MASK             (0x1U << CRU_CLKSEL_CON54_CLK_IEP_CORE_SEL_SHIFT)            /* 0x00000080 */
#define CRU_CLKSEL_CON54_DCLK_CIFLITE_DIV_SHIFT            (8U)
#define CRU_CLKSEL_CON54_DCLK_CIFLITE_DIV_MASK             (0x1FU << CRU_CLKSEL_CON54_DCLK_CIFLITE_DIV_SHIFT)           /* 0x00001F00 */
#define CRU_CLKSEL_CON54_DCLK_CIFLITE_SEL_SHIFT            (14U)
#define CRU_CLKSEL_CON54_DCLK_CIFLITE_SEL_MASK             (0x3U << CRU_CLKSEL_CON54_DCLK_CIFLITE_SEL_SHIFT)            /* 0x0000C000 */
/* CLKSEL_CON55 */
#define CRU_CLKSEL_CON55_OFFSET                            (0x1DCU)
#define CRU_CLKSEL_CON55_CCLKIN_SDMMC_DIV_SHIFT            (0U)
#define CRU_CLKSEL_CON55_CCLKIN_SDMMC_DIV_MASK             (0xFFU << CRU_CLKSEL_CON55_CCLKIN_SDMMC_DIV_SHIFT)           /* 0x000000FF */
#define CRU_CLKSEL_CON55_CCLKIN_SDMMC_SEL_SHIFT            (14U)
#define CRU_CLKSEL_CON55_CCLKIN_SDMMC_SEL_MASK             (0x3U << CRU_CLKSEL_CON55_CCLKIN_SDMMC_SEL_SHIFT)            /* 0x0000C000 */
/* CLKSEL_CON56 */
#define CRU_CLKSEL_CON56_OFFSET                            (0x1E0U)
#define CRU_CLKSEL_CON56_CCLKIN_SDIO_DIV_SHIFT             (0U)
#define CRU_CLKSEL_CON56_CCLKIN_SDIO_DIV_MASK              (0xFFU << CRU_CLKSEL_CON56_CCLKIN_SDIO_DIV_SHIFT)            /* 0x000000FF */
#define CRU_CLKSEL_CON56_CCLKIN_SDIO_SEL_SHIFT             (14U)
#define CRU_CLKSEL_CON56_CCLKIN_SDIO_SEL_MASK              (0x3U << CRU_CLKSEL_CON56_CCLKIN_SDIO_SEL_SHIFT)             /* 0x0000C000 */
/* CLKSEL_CON57 */
#define CRU_CLKSEL_CON57_OFFSET                            (0x1E4U)
#define CRU_CLKSEL_CON57_CCLKIN_EMMC_DIV_SHIFT             (0U)
#define CRU_CLKSEL_CON57_CCLKIN_EMMC_DIV_MASK              (0xFFU << CRU_CLKSEL_CON57_CCLKIN_EMMC_DIV_SHIFT)            /* 0x000000FF */
#define CRU_CLKSEL_CON57_CCLKIN_EMMC_SEL_SHIFT             (14U)
#define CRU_CLKSEL_CON57_CCLKIN_EMMC_SEL_MASK              (0x3U << CRU_CLKSEL_CON57_CCLKIN_EMMC_SEL_SHIFT)             /* 0x0000C000 */
/* CLKSEL_CON58 */
#define CRU_CLKSEL_CON58_OFFSET                            (0x1E8U)
#define CRU_CLKSEL_CON58_SCLK_SFC_DIV_SHIFT                (0U)
#define CRU_CLKSEL_CON58_SCLK_SFC_DIV_MASK                 (0xFFU << CRU_CLKSEL_CON58_SCLK_SFC_DIV_SHIFT)               /* 0x000000FF */
#define CRU_CLKSEL_CON58_SCLK_SFC_SEL_SHIFT                (15U)
#define CRU_CLKSEL_CON58_SCLK_SFC_SEL_MASK                 (0x1U << CRU_CLKSEL_CON58_SCLK_SFC_SEL_SHIFT)                /* 0x00008000 */
/* CLKSEL_CON59 */
#define CRU_CLKSEL_CON59_OFFSET                            (0x1ECU)
#define CRU_CLKSEL_CON59_NCLK_NANDC_DIV_SHIFT              (0U)
#define CRU_CLKSEL_CON59_NCLK_NANDC_DIV_MASK               (0xFFU << CRU_CLKSEL_CON59_NCLK_NANDC_DIV_SHIFT)             /* 0x000000FF */
#define CRU_CLKSEL_CON59_NCLK_NANDC_SEL_SHIFT              (15U)
#define CRU_CLKSEL_CON59_NCLK_NANDC_SEL_MASK               (0x1U << CRU_CLKSEL_CON59_NCLK_NANDC_SEL_SHIFT)              /* 0x00008000 */
/* CLKSEL_CON61 */
#define CRU_CLKSEL_CON61_OFFSET                            (0x1F4U)
#define CRU_CLKSEL_CON61_CLK_USBHOST_UTMI_OHCI_DIV_SHIFT   (0U)
#define CRU_CLKSEL_CON61_CLK_USBHOST_UTMI_OHCI_DIV_MASK    (0x1FU << CRU_CLKSEL_CON61_CLK_USBHOST_UTMI_OHCI_DIV_SHIFT)  /* 0x0000001F */
#define CRU_CLKSEL_CON61_CLK_USBHOST_UTMI_OHCI_SEL_SHIFT   (7U)
#define CRU_CLKSEL_CON61_CLK_USBHOST_UTMI_OHCI_SEL_MASK    (0x1U << CRU_CLKSEL_CON61_CLK_USBHOST_UTMI_OHCI_SEL_SHIFT)   /* 0x00000080 */
#define CRU_CLKSEL_CON61_CLK_GMAC_ETHERNET_OUT2IO_DIV_SHIFT (8U)
#define CRU_CLKSEL_CON61_CLK_GMAC_ETHERNET_OUT2IO_DIV_MASK (0x1FU << CRU_CLKSEL_CON61_CLK_GMAC_ETHERNET_OUT2IO_DIV_SHIFT) /* 0x00001F00 */
#define CRU_CLKSEL_CON61_CLK_GMAC_ETHERNET_OUT2IO_SEL_SHIFT (15U)
#define CRU_CLKSEL_CON61_CLK_GMAC_ETHERNET_OUT2IO_SEL_MASK (0x1U << CRU_CLKSEL_CON61_CLK_GMAC_ETHERNET_OUT2IO_SEL_SHIFT) /* 0x00008000 */
/* CLKSEL_CON63 */
#define CRU_CLKSEL_CON63_OFFSET                            (0x1FCU)
#define CRU_CLKSEL_CON63_CLK_GMAC_DIVOUT_DIV_SHIFT         (0U)
#define CRU_CLKSEL_CON63_CLK_GMAC_DIVOUT_DIV_MASK          (0x1FU << CRU_CLKSEL_CON63_CLK_GMAC_DIVOUT_DIV_SHIFT)        /* 0x0000001F */
#define CRU_CLKSEL_CON63_CLK_GMAC_DIVOUT_SEL_SHIFT         (7U)
#define CRU_CLKSEL_CON63_CLK_GMAC_DIVOUT_SEL_MASK          (0x1U << CRU_CLKSEL_CON63_CLK_GMAC_DIVOUT_SEL_SHIFT)         /* 0x00000080 */
#define CRU_CLKSEL_CON63_PCLK_PDGMAC_DIV_SHIFT             (8U)
#define CRU_CLKSEL_CON63_PCLK_PDGMAC_DIV_MASK              (0x1FU << CRU_CLKSEL_CON63_PCLK_PDGMAC_DIV_SHIFT)            /* 0x00001F00 */
/* CLKSEL_CON64 */
#define CRU_CLKSEL_CON64_OFFSET                            (0x200U)
#define CRU_CLKSEL_CON64_PCLK_PDDDR_PRE_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON64_PCLK_PDDDR_PRE_DIV_MASK           (0x1FU << CRU_CLKSEL_CON64_PCLK_PDDDR_PRE_DIV_SHIFT)         /* 0x0000001F */
#define CRU_CLKSEL_CON64_CLK_DDRPHY_COM_DIV_SHIFT          (8U)
#define CRU_CLKSEL_CON64_CLK_DDRPHY_COM_DIV_MASK           (0x1FU << CRU_CLKSEL_CON64_CLK_DDRPHY_COM_DIV_SHIFT)         /* 0x00001F00 */
#define CRU_CLKSEL_CON64_CLK_DDRPHY_COM_SEL_SHIFT          (15U)
#define CRU_CLKSEL_CON64_CLK_DDRPHY_COM_SEL_MASK           (0x1U << CRU_CLKSEL_CON64_CLK_DDRPHY_COM_SEL_SHIFT)          /* 0x00008000 */
/* CLKSEL_CON65 */
#define CRU_CLKSEL_CON65_OFFSET                            (0x204U)
#define CRU_CLKSEL_CON65_ACLK_PDNPU_DIV_DIV_SHIFT          (0U)
#define CRU_CLKSEL_CON65_ACLK_PDNPU_DIV_DIV_MASK           (0xFU << CRU_CLKSEL_CON65_ACLK_PDNPU_DIV_DIV_SHIFT)          /* 0x0000000F */
#define CRU_CLKSEL_CON65_ACLK_PDNPU_NP5_DIV_SHIFT          (4U)
#define CRU_CLKSEL_CON65_ACLK_PDNPU_NP5_DIV_MASK           (0xFU << CRU_CLKSEL_CON65_ACLK_PDNPU_NP5_DIV_SHIFT)          /* 0x000000F0 */
#define CRU_CLKSEL_CON65_ACLK_PDNPU_DIV_SEL_SHIFT          (8U)
#define CRU_CLKSEL_CON65_ACLK_PDNPU_DIV_SEL_MASK           (0x3U << CRU_CLKSEL_CON65_ACLK_PDNPU_DIV_SEL_SHIFT)          /* 0x00000300 */
#define CRU_CLKSEL_CON65_ACLK_PDNPU_SEL_SHIFT              (12U)
#define CRU_CLKSEL_CON65_ACLK_PDNPU_SEL_MASK               (0x1U << CRU_CLKSEL_CON65_ACLK_PDNPU_SEL_SHIFT)              /* 0x00001000 */
/* CLKSEL_CON66 */
#define CRU_CLKSEL_CON66_OFFSET                            (0x208U)
#define CRU_CLKSEL_CON66_PCLK_PDNPU_DIV_SHIFT              (0U)
#define CRU_CLKSEL_CON66_PCLK_PDNPU_DIV_MASK               (0x1FU << CRU_CLKSEL_CON66_PCLK_PDNPU_DIV_SHIFT)             /* 0x0000001F */
#define CRU_CLKSEL_CON66_HCLK_PDNPU_DIV_SHIFT              (8U)
#define CRU_CLKSEL_CON66_HCLK_PDNPU_DIV_MASK               (0xFU << CRU_CLKSEL_CON66_HCLK_PDNPU_DIV_SHIFT)              /* 0x00000F00 */
/* CLKSEL_CON67 */
#define CRU_CLKSEL_CON67_OFFSET                            (0x20CU)
#define CRU_CLKSEL_CON67_CLK_NPU_DIV_DIV_SHIFT             (0U)
#define CRU_CLKSEL_CON67_CLK_NPU_DIV_DIV_MASK              (0xFU << CRU_CLKSEL_CON67_CLK_NPU_DIV_DIV_SHIFT)             /* 0x0000000F */
#define CRU_CLKSEL_CON67_CLK_NPU_NP5_DIV_SHIFT             (4U)
#define CRU_CLKSEL_CON67_CLK_NPU_NP5_DIV_MASK              (0xFU << CRU_CLKSEL_CON67_CLK_NPU_NP5_DIV_SHIFT)             /* 0x000000F0 */
#define CRU_CLKSEL_CON67_CLK_NPU_DIV_SEL_SHIFT             (8U)
#define CRU_CLKSEL_CON67_CLK_NPU_DIV_SEL_MASK              (0x3U << CRU_CLKSEL_CON67_CLK_NPU_DIV_SEL_SHIFT)             /* 0x00000300 */
#define CRU_CLKSEL_CON67_CLK_NPU_SEL_SHIFT                 (12U)
#define CRU_CLKSEL_CON67_CLK_NPU_SEL_MASK                  (0x1U << CRU_CLKSEL_CON67_CLK_NPU_SEL_SHIFT)                 /* 0x00001000 */
/* CLKSEL_CON68 */
#define CRU_CLKSEL_CON68_OFFSET                            (0x210U)
#define CRU_CLKSEL_CON68_ACLK_PDISPP_DIV_DIV_SHIFT         (0U)
#define CRU_CLKSEL_CON68_ACLK_PDISPP_DIV_DIV_MASK          (0x1FU << CRU_CLKSEL_CON68_ACLK_PDISPP_DIV_DIV_SHIFT)        /* 0x0000001F */
#define CRU_CLKSEL_CON68_ACLK_PDISPP_DIV_SEL_SHIFT         (6U)
#define CRU_CLKSEL_CON68_ACLK_PDISPP_DIV_SEL_MASK          (0x3U << CRU_CLKSEL_CON68_ACLK_PDISPP_DIV_SEL_SHIFT)         /* 0x000000C0 */
/* CLKSEL_CON69 */
#define CRU_CLKSEL_CON69_OFFSET                            (0x214U)
#define CRU_CLKSEL_CON69_CLK_ISPP_DIV_DIV_SHIFT            (0U)
#define CRU_CLKSEL_CON69_CLK_ISPP_DIV_DIV_MASK             (0x1FU << CRU_CLKSEL_CON69_CLK_ISPP_DIV_DIV_SHIFT)           /* 0x0000001F */
#define CRU_CLKSEL_CON69_CLK_ISPP_DIV_SEL_SHIFT            (6U)
#define CRU_CLKSEL_CON69_CLK_ISPP_DIV_SEL_MASK             (0x3U << CRU_CLKSEL_CON69_CLK_ISPP_DIV_SEL_SHIFT)            /* 0x000000C0 */
#define CRU_CLKSEL_CON69_HCLK_PDISPP_DIV_SHIFT             (8U)
#define CRU_CLKSEL_CON69_HCLK_PDISPP_DIV_MASK              (0x1FU << CRU_CLKSEL_CON69_HCLK_PDISPP_DIV_SHIFT)            /* 0x00001F00 */
/* CLKSEL_CON70 */
#define CRU_CLKSEL_CON70_OFFSET                            (0x218U)
#define CRU_CLKSEL_CON70_CLK_CPU_TSADC_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON70_CLK_CPU_TSADC_DIV_MASK            (0x7FFU << CRU_CLKSEL_CON70_CLK_CPU_TSADC_DIV_SHIFT)         /* 0x000007FF */
/* CLKSEL_CON71 */
#define CRU_CLKSEL_CON71_OFFSET                            (0x21CU)
#define CRU_CLKSEL_CON71_CLK_NPU_TSADC_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON71_CLK_NPU_TSADC_DIV_MASK            (0x7FFU << CRU_CLKSEL_CON71_CLK_NPU_TSADC_DIV_SHIFT)         /* 0x000007FF */
/* CLKSEL_CON72 */
#define CRU_CLKSEL_CON72_OFFSET                            (0x220U)
#define CRU_CLKSEL_CON72_CLK_ACDCDIG_I2C_DIV_SHIFT         (0U)
#define CRU_CLKSEL_CON72_CLK_ACDCDIG_I2C_DIV_MASK          (0x7FU << CRU_CLKSEL_CON72_CLK_ACDCDIG_I2C_DIV_SHIFT)        /* 0x0000007F */
#define CRU_CLKSEL_CON72_CLK_ACDCDIG_I2C_SEL_SHIFT         (8U)
#define CRU_CLKSEL_CON72_CLK_ACDCDIG_I2C_SEL_MASK          (0x1U << CRU_CLKSEL_CON72_CLK_ACDCDIG_I2C_SEL_SHIFT)         /* 0x00000100 */
/* CLKSEL_CON73 */
#define CRU_CLKSEL_CON73_OFFSET                            (0x224U)
#define CRU_CLKSEL_CON73_MIPICSI_CLK_OUT2IO_DIV_DIV_SHIFT  (0U)
#define CRU_CLKSEL_CON73_MIPICSI_CLK_OUT2IO_DIV_DIV_MASK   (0x1FU << CRU_CLKSEL_CON73_MIPICSI_CLK_OUT2IO_DIV_DIV_SHIFT) /* 0x0000001F */
#define CRU_CLKSEL_CON73_MIPICSI_CLK_OUT2IO_DIV_SEL_SHIFT  (8U)
#define CRU_CLKSEL_CON73_MIPICSI_CLK_OUT2IO_DIV_SEL_MASK   (0x1U << CRU_CLKSEL_CON73_MIPICSI_CLK_OUT2IO_DIV_SEL_SHIFT)  /* 0x00000100 */
#define CRU_CLKSEL_CON73_MIPICSI_CLK_OUT2IO_SEL_SHIFT      (10U)
#define CRU_CLKSEL_CON73_MIPICSI_CLK_OUT2IO_SEL_MASK       (0x3U << CRU_CLKSEL_CON73_MIPICSI_CLK_OUT2IO_SEL_SHIFT)      /* 0x00000C00 */
/* CLKSEL_CON74 */
#define CRU_CLKSEL_CON74_OFFSET                            (0x228U)
#define CRU_CLKSEL_CON74_MIPICSI_CLK_OUT2IO_FRACDIV_DIV_SHIFT (0U)
#define CRU_CLKSEL_CON74_MIPICSI_CLK_OUT2IO_FRACDIV_DIV_MASK (0xFFFFFFFFU << CRU_CLKSEL_CON74_MIPICSI_CLK_OUT2IO_FRACDIV_DIV_SHIFT) /* 0xFFFFFFFF */
/* CLKSEL_CON75 */
#define CRU_CLKSEL_CON75_OFFSET                            (0x22CU)
#define CRU_CLKSEL_CON75_CLK_TESTOUT_DIV_SHIFT             (0U)
#define CRU_CLKSEL_CON75_CLK_TESTOUT_DIV_MASK              (0x1FU << CRU_CLKSEL_CON75_CLK_TESTOUT_DIV_SHIFT)            /* 0x0000001F */
#define CRU_CLKSEL_CON75_CLK_TESTOUT_SEL_SHIFT             (8U)
#define CRU_CLKSEL_CON75_CLK_TESTOUT_SEL_MASK              (0x1FU << CRU_CLKSEL_CON75_CLK_TESTOUT_SEL_SHIFT)            /* 0x00001F00 */
/* CLKSEL_CON76 */
#define CRU_CLKSEL_CON76_OFFSET                            (0x230U)
#define CRU_CLKSEL_CON76_ACLK_PDVI_NP5_DIV_SHIFT           (0U)
#define CRU_CLKSEL_CON76_ACLK_PDVI_NP5_DIV_MASK            (0x1FU << CRU_CLKSEL_CON76_ACLK_PDVI_NP5_DIV_SHIFT)          /* 0x0000001F */
#define CRU_CLKSEL_CON76_ACLK_PDVI_SEL_SHIFT               (5U)
#define CRU_CLKSEL_CON76_ACLK_PDVI_SEL_MASK                (0x1U << CRU_CLKSEL_CON76_ACLK_PDVI_SEL_SHIFT)               /* 0x00000020 */
#define CRU_CLKSEL_CON76_CLK_ISP_NP5_DIV_SHIFT             (8U)
#define CRU_CLKSEL_CON76_CLK_ISP_NP5_DIV_MASK              (0x1FU << CRU_CLKSEL_CON76_CLK_ISP_NP5_DIV_SHIFT)            /* 0x00001F00 */
#define CRU_CLKSEL_CON76_CLK_ISP_SEL_SHIFT                 (13U)
#define CRU_CLKSEL_CON76_CLK_ISP_SEL_MASK                  (0x1U << CRU_CLKSEL_CON76_CLK_ISP_SEL_SHIFT)                 /* 0x00002000 */
/* CLKSEL_CON77 */
#define CRU_CLKSEL_CON77_OFFSET                            (0x234U)
#define CRU_CLKSEL_CON77_ACLK_PDISPP_NP5_DIV_SHIFT         (0U)
#define CRU_CLKSEL_CON77_ACLK_PDISPP_NP5_DIV_MASK          (0x1FU << CRU_CLKSEL_CON77_ACLK_PDISPP_NP5_DIV_SHIFT)        /* 0x0000001F */
#define CRU_CLKSEL_CON77_ACLK_PDISPP_SEL_SHIFT             (5U)
#define CRU_CLKSEL_CON77_ACLK_PDISPP_SEL_MASK              (0x1U << CRU_CLKSEL_CON77_ACLK_PDISPP_SEL_SHIFT)             /* 0x00000020 */
#define CRU_CLKSEL_CON77_CLK_ISPP_NP5_DIV_SHIFT            (8U)
#define CRU_CLKSEL_CON77_CLK_ISPP_NP5_DIV_MASK             (0x1FU << CRU_CLKSEL_CON77_CLK_ISPP_NP5_DIV_SHIFT)           /* 0x00001F00 */
#define CRU_CLKSEL_CON77_CLK_ISPP_SEL_SHIFT                (13U)
#define CRU_CLKSEL_CON77_CLK_ISPP_SEL_MASK                 (0x1U << CRU_CLKSEL_CON77_CLK_ISPP_SEL_SHIFT)                /* 0x00002000 */
/* GATE_CON00 */
#define CRU_GATE_CON00_OFFSET                              (0x280U)
#define CRU_GATE_CON00_ACLK_DBG_PRE_EN_SHIFT               (0U)
#define CRU_GATE_CON00_ACLK_DBG_PRE_EN_MASK                (0x1U << CRU_GATE_CON00_ACLK_DBG_PRE_EN_SHIFT)               /* 0x00000001 */
#define CRU_GATE_CON00_CLK_CORE_PRE_EN_SHIFT               (2U)
#define CRU_GATE_CON00_CLK_CORE_PRE_EN_MASK                (0x1U << CRU_GATE_CON00_CLK_CORE_PRE_EN_SHIFT)               /* 0x00000004 */
#define CRU_GATE_CON00_ACLK_CORE_NIU_EN_SHIFT              (3U)
#define CRU_GATE_CON00_ACLK_CORE_NIU_EN_MASK               (0x1U << CRU_GATE_CON00_ACLK_CORE_NIU_EN_SHIFT)              /* 0x00000008 */
#define CRU_GATE_CON00_PCLK_DBG_NIU_EN_SHIFT               (4U)
#define CRU_GATE_CON00_PCLK_DBG_NIU_EN_MASK                (0x1U << CRU_GATE_CON00_PCLK_DBG_NIU_EN_SHIFT)               /* 0x00000010 */
#define CRU_GATE_CON00_PCLK_DBG_DAPLITE_EN_SHIFT           (5U)
#define CRU_GATE_CON00_PCLK_DBG_DAPLITE_EN_MASK            (0x1U << CRU_GATE_CON00_PCLK_DBG_DAPLITE_EN_SHIFT)           /* 0x00000020 */
#define CRU_GATE_CON00_PCLK_CORE_PRE_EN_SHIFT              (6U)
#define CRU_GATE_CON00_PCLK_CORE_PRE_EN_MASK               (0x1U << CRU_GATE_CON00_PCLK_CORE_PRE_EN_SHIFT)              /* 0x00000040 */
#define CRU_GATE_CON00_CLK_CORE_PRE_G_EN_SHIFT             (7U)
#define CRU_GATE_CON00_CLK_CORE_PRE_G_EN_MASK              (0x1U << CRU_GATE_CON00_CLK_CORE_PRE_G_EN_SHIFT)             /* 0x00000080 */
#define CRU_GATE_CON00_HCLK_PDCORE_EN_SHIFT                (8U)
#define CRU_GATE_CON00_HCLK_PDCORE_EN_MASK                 (0x1U << CRU_GATE_CON00_HCLK_PDCORE_EN_SHIFT)                /* 0x00000100 */
#define CRU_GATE_CON00_CLK_CPU_JTAG_EN_SHIFT               (9U)
#define CRU_GATE_CON00_CLK_CPU_JTAG_EN_MASK                (0x1U << CRU_GATE_CON00_CLK_CPU_JTAG_EN_SHIFT)               /* 0x00000200 */
#define CRU_GATE_CON00_PCLK_CPUPVTM_EN_SHIFT               (10U)
#define CRU_GATE_CON00_PCLK_CPUPVTM_EN_MASK                (0x1U << CRU_GATE_CON00_PCLK_CPUPVTM_EN_SHIFT)               /* 0x00000400 */
#define CRU_GATE_CON00_CLK_CPUPVTM_EN_SHIFT                (11U)
#define CRU_GATE_CON00_CLK_CPUPVTM_EN_MASK                 (0x1U << CRU_GATE_CON00_CLK_CPUPVTM_EN_SHIFT)                /* 0x00000800 */
#define CRU_GATE_CON00_CLK_CORE_CPUPVTM_EN_SHIFT           (12U)
#define CRU_GATE_CON00_CLK_CORE_CPUPVTM_EN_MASK            (0x1U << CRU_GATE_CON00_CLK_CORE_CPUPVTM_EN_SHIFT)           /* 0x00001000 */
#define CRU_GATE_CON00_CLK_CORE_PRE_DIV2_EN_SHIFT          (13U)
#define CRU_GATE_CON00_CLK_CORE_PRE_DIV2_EN_MASK           (0x1U << CRU_GATE_CON00_CLK_CORE_PRE_DIV2_EN_SHIFT)          /* 0x00002000 */
#define CRU_GATE_CON00_ACLK_CORE_PRE_SCAN_EN_SHIFT         (14U)
#define CRU_GATE_CON00_ACLK_CORE_PRE_SCAN_EN_MASK          (0x1U << CRU_GATE_CON00_ACLK_CORE_PRE_SCAN_EN_SHIFT)         /* 0x00004000 */
#define CRU_GATE_CON00_PCLK_DBG_PRE_SCAN_EN_SHIFT          (15U)
#define CRU_GATE_CON00_PCLK_DBG_PRE_SCAN_EN_MASK           (0x1U << CRU_GATE_CON00_PCLK_DBG_PRE_SCAN_EN_SHIFT)          /* 0x00008000 */
/* GATE_CON02 */
#define CRU_GATE_CON02_OFFSET                              (0x288U)
#define CRU_GATE_CON02_ACLK_PDBUS_PRE_EN_SHIFT             (0U)
#define CRU_GATE_CON02_ACLK_PDBUS_PRE_EN_MASK              (0x1U << CRU_GATE_CON02_ACLK_PDBUS_PRE_EN_SHIFT)             /* 0x00000001 */
#define CRU_GATE_CON02_HCLK_PDBUS_PRE_EN_SHIFT             (1U)
#define CRU_GATE_CON02_HCLK_PDBUS_PRE_EN_MASK              (0x1U << CRU_GATE_CON02_HCLK_PDBUS_PRE_EN_SHIFT)             /* 0x00000002 */
#define CRU_GATE_CON02_PCLK_PDBUS_PRE_EN_SHIFT             (2U)
#define CRU_GATE_CON02_PCLK_PDBUS_PRE_EN_MASK              (0x1U << CRU_GATE_CON02_PCLK_PDBUS_PRE_EN_SHIFT)             /* 0x00000004 */
#define CRU_GATE_CON02_ACLK_PDBUS_NIU1_EN_SHIFT            (3U)
#define CRU_GATE_CON02_ACLK_PDBUS_NIU1_EN_MASK             (0x1U << CRU_GATE_CON02_ACLK_PDBUS_NIU1_EN_SHIFT)            /* 0x00000008 */
#define CRU_GATE_CON02_HCLK_PDBUS_NIU1_EN_SHIFT            (4U)
#define CRU_GATE_CON02_HCLK_PDBUS_NIU1_EN_MASK             (0x1U << CRU_GATE_CON02_HCLK_PDBUS_NIU1_EN_SHIFT)            /* 0x00000010 */
#define CRU_GATE_CON02_PCLK_PDBUS_NIU1_EN_SHIFT            (5U)
#define CRU_GATE_CON02_PCLK_PDBUS_NIU1_EN_MASK             (0x1U << CRU_GATE_CON02_PCLK_PDBUS_NIU1_EN_SHIFT)            /* 0x00000020 */
#define CRU_GATE_CON02_ACLK_PDBUS_NIU2_EN_SHIFT            (6U)
#define CRU_GATE_CON02_ACLK_PDBUS_NIU2_EN_MASK             (0x1U << CRU_GATE_CON02_ACLK_PDBUS_NIU2_EN_SHIFT)            /* 0x00000040 */
#define CRU_GATE_CON02_HCLK_PDBUS_NIU2_EN_SHIFT            (7U)
#define CRU_GATE_CON02_HCLK_PDBUS_NIU2_EN_MASK             (0x1U << CRU_GATE_CON02_HCLK_PDBUS_NIU2_EN_SHIFT)            /* 0x00000080 */
#define CRU_GATE_CON02_ACLK_PDBUS_NIU3_EN_SHIFT            (8U)
#define CRU_GATE_CON02_ACLK_PDBUS_NIU3_EN_MASK             (0x1U << CRU_GATE_CON02_ACLK_PDBUS_NIU3_EN_SHIFT)            /* 0x00000100 */
#define CRU_GATE_CON02_HCLK_PDBUS_NIU3_EN_SHIFT            (9U)
#define CRU_GATE_CON02_HCLK_PDBUS_NIU3_EN_MASK             (0x1U << CRU_GATE_CON02_HCLK_PDBUS_NIU3_EN_SHIFT)            /* 0x00000200 */
#define CRU_GATE_CON02_ACLK_PDBUS_HOLD_NIU1_EN_SHIFT       (10U)
#define CRU_GATE_CON02_ACLK_PDBUS_HOLD_NIU1_EN_MASK        (0x1U << CRU_GATE_CON02_ACLK_PDBUS_HOLD_NIU1_EN_SHIFT)       /* 0x00000400 */
#define CRU_GATE_CON02_ACLK_PDBUS_EN_SHIFT                 (11U)
#define CRU_GATE_CON02_ACLK_PDBUS_EN_MASK                  (0x1U << CRU_GATE_CON02_ACLK_PDBUS_EN_SHIFT)                 /* 0x00000800 */
#define CRU_GATE_CON02_HCLK_PDBUS_EN_SHIFT                 (12U)
#define CRU_GATE_CON02_HCLK_PDBUS_EN_MASK                  (0x1U << CRU_GATE_CON02_HCLK_PDBUS_EN_SHIFT)                 /* 0x00001000 */
#define CRU_GATE_CON02_PCLK_PDBUS_EN_SHIFT                 (13U)
#define CRU_GATE_CON02_PCLK_PDBUS_EN_MASK                  (0x1U << CRU_GATE_CON02_PCLK_PDBUS_EN_SHIFT)                 /* 0x00002000 */
#define CRU_GATE_CON02_CLK_MCU_NIU_EN_SHIFT                (14U)
#define CRU_GATE_CON02_CLK_MCU_NIU_EN_MASK                 (0x1U << CRU_GATE_CON02_CLK_MCU_NIU_EN_SHIFT)                /* 0x00004000 */
/* GATE_CON03 */
#define CRU_GATE_CON03_OFFSET                              (0x28CU)
#define CRU_GATE_CON03_ACLK_CRYPTO_EN_SHIFT                (2U)
#define CRU_GATE_CON03_ACLK_CRYPTO_EN_MASK                 (0x1U << CRU_GATE_CON03_ACLK_CRYPTO_EN_SHIFT)                /* 0x00000004 */
#define CRU_GATE_CON03_HCLK_CRYPTO_EN_SHIFT                (3U)
#define CRU_GATE_CON03_HCLK_CRYPTO_EN_MASK                 (0x1U << CRU_GATE_CON03_HCLK_CRYPTO_EN_SHIFT)                /* 0x00000008 */
#define CRU_GATE_CON03_CLK_CRYPTO_CORE_EN_SHIFT            (4U)
#define CRU_GATE_CON03_CLK_CRYPTO_CORE_EN_MASK             (0x1U << CRU_GATE_CON03_CLK_CRYPTO_CORE_EN_SHIFT)            /* 0x00000010 */
#define CRU_GATE_CON03_CLK_CRYPTO_PKA_EN_SHIFT             (5U)
#define CRU_GATE_CON03_CLK_CRYPTO_PKA_EN_MASK              (0x1U << CRU_GATE_CON03_CLK_CRYPTO_PKA_EN_SHIFT)             /* 0x00000020 */
#define CRU_GATE_CON03_ACLK_DCF_EN_SHIFT                   (6U)
#define CRU_GATE_CON03_ACLK_DCF_EN_MASK                    (0x1U << CRU_GATE_CON03_ACLK_DCF_EN_SHIFT)                   /* 0x00000040 */
#define CRU_GATE_CON03_PCLK_DCF_EN_SHIFT                   (7U)
#define CRU_GATE_CON03_PCLK_DCF_EN_MASK                    (0x1U << CRU_GATE_CON03_PCLK_DCF_EN_SHIFT)                   /* 0x00000080 */
#define CRU_GATE_CON03_ACLK_SYSTEM_SRAM_EN_SHIFT           (9U)
#define CRU_GATE_CON03_ACLK_SYSTEM_SRAM_EN_MASK            (0x1U << CRU_GATE_CON03_ACLK_SYSTEM_SRAM_EN_SHIFT)           /* 0x00000200 */
#define CRU_GATE_CON03_PCLK_I2C1_EN_SHIFT                  (10U)
#define CRU_GATE_CON03_PCLK_I2C1_EN_MASK                   (0x1U << CRU_GATE_CON03_PCLK_I2C1_EN_SHIFT)                  /* 0x00000400 */
#define CRU_GATE_CON03_CLK_I2C1_EN_SHIFT                   (11U)
#define CRU_GATE_CON03_CLK_I2C1_EN_MASK                    (0x1U << CRU_GATE_CON03_CLK_I2C1_EN_SHIFT)                   /* 0x00000800 */
#define CRU_GATE_CON03_PCLK_I2C3_EN_SHIFT                  (12U)
#define CRU_GATE_CON03_PCLK_I2C3_EN_MASK                   (0x1U << CRU_GATE_CON03_PCLK_I2C3_EN_SHIFT)                  /* 0x00001000 */
#define CRU_GATE_CON03_CLK_I2C3_EN_SHIFT                   (13U)
#define CRU_GATE_CON03_CLK_I2C3_EN_MASK                    (0x1U << CRU_GATE_CON03_CLK_I2C3_EN_SHIFT)                   /* 0x00002000 */
#define CRU_GATE_CON03_PCLK_I2C4_EN_SHIFT                  (14U)
#define CRU_GATE_CON03_PCLK_I2C4_EN_MASK                   (0x1U << CRU_GATE_CON03_PCLK_I2C4_EN_SHIFT)                  /* 0x00004000 */
#define CRU_GATE_CON03_CLK_I2C4_EN_SHIFT                   (15U)
#define CRU_GATE_CON03_CLK_I2C4_EN_MASK                    (0x1U << CRU_GATE_CON03_CLK_I2C4_EN_SHIFT)                   /* 0x00008000 */
/* GATE_CON04 */
#define CRU_GATE_CON04_OFFSET                              (0x290U)
#define CRU_GATE_CON04_PCLK_I2C5_EN_SHIFT                  (0U)
#define CRU_GATE_CON04_PCLK_I2C5_EN_MASK                   (0x1U << CRU_GATE_CON04_PCLK_I2C5_EN_SHIFT)                  /* 0x00000001 */
#define CRU_GATE_CON04_CLK_I2C5_EN_SHIFT                   (1U)
#define CRU_GATE_CON04_CLK_I2C5_EN_MASK                    (0x1U << CRU_GATE_CON04_CLK_I2C5_EN_SHIFT)                   /* 0x00000002 */
#define CRU_GATE_CON04_PCLK_SPI1_EN_SHIFT                  (2U)
#define CRU_GATE_CON04_PCLK_SPI1_EN_MASK                   (0x1U << CRU_GATE_CON04_PCLK_SPI1_EN_SHIFT)                  /* 0x00000004 */
#define CRU_GATE_CON04_CLK_SPI1_EN_SHIFT                   (3U)
#define CRU_GATE_CON04_CLK_SPI1_EN_MASK                    (0x1U << CRU_GATE_CON04_CLK_SPI1_EN_SHIFT)                   /* 0x00000008 */
#define CRU_GATE_CON04_PCLK_PWM2_EN_SHIFT                  (4U)
#define CRU_GATE_CON04_PCLK_PWM2_EN_MASK                   (0x1U << CRU_GATE_CON04_PCLK_PWM2_EN_SHIFT)                  /* 0x00000010 */
#define CRU_GATE_CON04_CLK_PWM2_EN_SHIFT                   (5U)
#define CRU_GATE_CON04_CLK_PWM2_EN_MASK                    (0x1U << CRU_GATE_CON04_CLK_PWM2_EN_SHIFT)                   /* 0x00000020 */
#define CRU_GATE_CON04_CLK_CAPTURE_PWM2_EN_SHIFT           (6U)
#define CRU_GATE_CON04_CLK_CAPTURE_PWM2_EN_MASK            (0x1U << CRU_GATE_CON04_CLK_CAPTURE_PWM2_EN_SHIFT)           /* 0x00000040 */
#define CRU_GATE_CON04_CLK_MCU_EN_SHIFT                    (7U)
#define CRU_GATE_CON04_CLK_MCU_EN_MASK                     (0x1U << CRU_GATE_CON04_CLK_MCU_EN_SHIFT)                    /* 0x00000080 */
#define CRU_GATE_CON04_CLK_MCU_CORE_EN_SHIFT               (8U)
#define CRU_GATE_CON04_CLK_MCU_CORE_EN_MASK                (0x1U << CRU_GATE_CON04_CLK_MCU_CORE_EN_SHIFT)               /* 0x00000100 */
#define CRU_GATE_CON04_CLK_MCU_RTC_EN_SHIFT                (9U)
#define CRU_GATE_CON04_CLK_MCU_RTC_EN_MASK                 (0x1U << CRU_GATE_CON04_CLK_MCU_RTC_EN_SHIFT)                /* 0x00000200 */
#define CRU_GATE_CON04_CLK_MCU_JTAG_EN_SHIFT               (10U)
#define CRU_GATE_CON04_CLK_MCU_JTAG_EN_MASK                (0x1U << CRU_GATE_CON04_CLK_MCU_JTAG_EN_SHIFT)               /* 0x00000400 */
#define CRU_GATE_CON04_ACLK_PDCRYPT_EN_SHIFT               (11U)
#define CRU_GATE_CON04_ACLK_PDCRYPT_EN_MASK                (0x1U << CRU_GATE_CON04_ACLK_PDCRYPT_EN_SHIFT)               /* 0x00000800 */
#define CRU_GATE_CON04_HCLK_PDCRYPT_EN_SHIFT               (12U)
#define CRU_GATE_CON04_HCLK_PDCRYPT_EN_MASK                (0x1U << CRU_GATE_CON04_HCLK_PDCRYPT_EN_SHIFT)               /* 0x00001000 */
#define CRU_GATE_CON04_ACLK_PDCRYPT_NIU_EN_SHIFT           (13U)
#define CRU_GATE_CON04_ACLK_PDCRYPT_NIU_EN_MASK            (0x1U << CRU_GATE_CON04_ACLK_PDCRYPT_NIU_EN_SHIFT)           /* 0x00002000 */
#define CRU_GATE_CON04_HCLK_PDCRYPT_NIU_EN_SHIFT           (14U)
#define CRU_GATE_CON04_HCLK_PDCRYPT_NIU_EN_MASK            (0x1U << CRU_GATE_CON04_HCLK_PDCRYPT_NIU_EN_SHIFT)           /* 0x00004000 */
/* GATE_CON05 */
#define CRU_GATE_CON05_OFFSET                              (0x294U)
#define CRU_GATE_CON05_PCLK_UART0_EN_SHIFT                 (0U)
#define CRU_GATE_CON05_PCLK_UART0_EN_MASK                  (0x1U << CRU_GATE_CON05_PCLK_UART0_EN_SHIFT)                 /* 0x00000001 */
#define CRU_GATE_CON05_SCLK_UART0_DIV_EN_SHIFT             (1U)
#define CRU_GATE_CON05_SCLK_UART0_DIV_EN_MASK              (0x1U << CRU_GATE_CON05_SCLK_UART0_DIV_EN_SHIFT)             /* 0x00000002 */
#define CRU_GATE_CON05_SCLK_UART0_FRAC_EN_SHIFT            (2U)
#define CRU_GATE_CON05_SCLK_UART0_FRAC_EN_MASK             (0x1U << CRU_GATE_CON05_SCLK_UART0_FRAC_EN_SHIFT)            /* 0x00000004 */
#define CRU_GATE_CON05_SCLK_UART0_EN_SHIFT                 (3U)
#define CRU_GATE_CON05_SCLK_UART0_EN_MASK                  (0x1U << CRU_GATE_CON05_SCLK_UART0_EN_SHIFT)                 /* 0x00000008 */
#define CRU_GATE_CON05_PCLK_UART2_EN_SHIFT                 (4U)
#define CRU_GATE_CON05_PCLK_UART2_EN_MASK                  (0x1U << CRU_GATE_CON05_PCLK_UART2_EN_SHIFT)                 /* 0x00000010 */
#define CRU_GATE_CON05_SCLK_UART2_DIV_EN_SHIFT             (5U)
#define CRU_GATE_CON05_SCLK_UART2_DIV_EN_MASK              (0x1U << CRU_GATE_CON05_SCLK_UART2_DIV_EN_SHIFT)             /* 0x00000020 */
#define CRU_GATE_CON05_SCLK_UART2_FRAC_EN_SHIFT            (6U)
#define CRU_GATE_CON05_SCLK_UART2_FRAC_EN_MASK             (0x1U << CRU_GATE_CON05_SCLK_UART2_FRAC_EN_SHIFT)            /* 0x00000040 */
#define CRU_GATE_CON05_SCLK_UART2_EN_SHIFT                 (7U)
#define CRU_GATE_CON05_SCLK_UART2_EN_MASK                  (0x1U << CRU_GATE_CON05_SCLK_UART2_EN_SHIFT)                 /* 0x00000080 */
#define CRU_GATE_CON05_PCLK_UART3_EN_SHIFT                 (8U)
#define CRU_GATE_CON05_PCLK_UART3_EN_MASK                  (0x1U << CRU_GATE_CON05_PCLK_UART3_EN_SHIFT)                 /* 0x00000100 */
#define CRU_GATE_CON05_SCLK_UART3_DIV_EN_SHIFT             (9U)
#define CRU_GATE_CON05_SCLK_UART3_DIV_EN_MASK              (0x1U << CRU_GATE_CON05_SCLK_UART3_DIV_EN_SHIFT)             /* 0x00000200 */
#define CRU_GATE_CON05_SCLK_UART3_FRAC_EN_SHIFT            (10U)
#define CRU_GATE_CON05_SCLK_UART3_FRAC_EN_MASK             (0x1U << CRU_GATE_CON05_SCLK_UART3_FRAC_EN_SHIFT)            /* 0x00000400 */
#define CRU_GATE_CON05_SCLK_UART3_EN_SHIFT                 (11U)
#define CRU_GATE_CON05_SCLK_UART3_EN_MASK                  (0x1U << CRU_GATE_CON05_SCLK_UART3_EN_SHIFT)                 /* 0x00000800 */
#define CRU_GATE_CON05_PCLK_UART4_EN_SHIFT                 (12U)
#define CRU_GATE_CON05_PCLK_UART4_EN_MASK                  (0x1U << CRU_GATE_CON05_PCLK_UART4_EN_SHIFT)                 /* 0x00001000 */
#define CRU_GATE_CON05_SCLK_UART4_DIV_EN_SHIFT             (13U)
#define CRU_GATE_CON05_SCLK_UART4_DIV_EN_MASK              (0x1U << CRU_GATE_CON05_SCLK_UART4_DIV_EN_SHIFT)             /* 0x00002000 */
#define CRU_GATE_CON05_SCLK_UART4_FRAC_EN_SHIFT            (14U)
#define CRU_GATE_CON05_SCLK_UART4_FRAC_EN_MASK             (0x1U << CRU_GATE_CON05_SCLK_UART4_FRAC_EN_SHIFT)            /* 0x00004000 */
#define CRU_GATE_CON05_SCLK_UART4_EN_SHIFT                 (15U)
#define CRU_GATE_CON05_SCLK_UART4_EN_MASK                  (0x1U << CRU_GATE_CON05_SCLK_UART4_EN_SHIFT)                 /* 0x00008000 */
/* GATE_CON06 */
#define CRU_GATE_CON06_OFFSET                              (0x298U)
#define CRU_GATE_CON06_PCLK_UART5_EN_SHIFT                 (0U)
#define CRU_GATE_CON06_PCLK_UART5_EN_MASK                  (0x1U << CRU_GATE_CON06_PCLK_UART5_EN_SHIFT)                 /* 0x00000001 */
#define CRU_GATE_CON06_SCLK_UART5_DIV_EN_SHIFT             (1U)
#define CRU_GATE_CON06_SCLK_UART5_DIV_EN_MASK              (0x1U << CRU_GATE_CON06_SCLK_UART5_DIV_EN_SHIFT)             /* 0x00000002 */
#define CRU_GATE_CON06_SCLK_UART5_FRAC_EN_SHIFT            (2U)
#define CRU_GATE_CON06_SCLK_UART5_FRAC_EN_MASK             (0x1U << CRU_GATE_CON06_SCLK_UART5_FRAC_EN_SHIFT)            /* 0x00000004 */
#define CRU_GATE_CON06_SCLK_UART5_EN_SHIFT                 (3U)
#define CRU_GATE_CON06_SCLK_UART5_EN_MASK                  (0x1U << CRU_GATE_CON06_SCLK_UART5_EN_SHIFT)                 /* 0x00000008 */
#define CRU_GATE_CON06_PCLK_SARADC_EN_SHIFT                (4U)
#define CRU_GATE_CON06_PCLK_SARADC_EN_MASK                 (0x1U << CRU_GATE_CON06_PCLK_SARADC_EN_SHIFT)                /* 0x00000010 */
#define CRU_GATE_CON06_CLK_SARADC_EN_SHIFT                 (5U)
#define CRU_GATE_CON06_CLK_SARADC_EN_MASK                  (0x1U << CRU_GATE_CON06_CLK_SARADC_EN_SHIFT)                 /* 0x00000020 */
#define CRU_GATE_CON06_ACLK_SPINLOCK_EN_SHIFT              (6U)
#define CRU_GATE_CON06_ACLK_SPINLOCK_EN_MASK               (0x1U << CRU_GATE_CON06_ACLK_SPINLOCK_EN_SHIFT)              /* 0x00000040 */
#define CRU_GATE_CON06_PCLK_TIMER_EN_SHIFT                 (7U)
#define CRU_GATE_CON06_PCLK_TIMER_EN_MASK                  (0x1U << CRU_GATE_CON06_PCLK_TIMER_EN_SHIFT)                 /* 0x00000080 */
#define CRU_GATE_CON06_CLK_TIMER0_EN_SHIFT                 (8U)
#define CRU_GATE_CON06_CLK_TIMER0_EN_MASK                  (0x1U << CRU_GATE_CON06_CLK_TIMER0_EN_SHIFT)                 /* 0x00000100 */
#define CRU_GATE_CON06_CLK_TIMER1_EN_SHIFT                 (9U)
#define CRU_GATE_CON06_CLK_TIMER1_EN_MASK                  (0x1U << CRU_GATE_CON06_CLK_TIMER1_EN_SHIFT)                 /* 0x00000200 */
#define CRU_GATE_CON06_CLK_TIMER2_EN_SHIFT                 (10U)
#define CRU_GATE_CON06_CLK_TIMER2_EN_MASK                  (0x1U << CRU_GATE_CON06_CLK_TIMER2_EN_SHIFT)                 /* 0x00000400 */
#define CRU_GATE_CON06_CLK_TIMER3_EN_SHIFT                 (11U)
#define CRU_GATE_CON06_CLK_TIMER3_EN_MASK                  (0x1U << CRU_GATE_CON06_CLK_TIMER3_EN_SHIFT)                 /* 0x00000800 */
#define CRU_GATE_CON06_CLK_TIMER4_EN_SHIFT                 (12U)
#define CRU_GATE_CON06_CLK_TIMER4_EN_MASK                  (0x1U << CRU_GATE_CON06_CLK_TIMER4_EN_SHIFT)                 /* 0x00001000 */
#define CRU_GATE_CON06_CLK_TIMER5_EN_SHIFT                 (13U)
#define CRU_GATE_CON06_CLK_TIMER5_EN_MASK                  (0x1U << CRU_GATE_CON06_CLK_TIMER5_EN_SHIFT)                 /* 0x00002000 */
#define CRU_GATE_CON06_PCLK_WDT_EN_SHIFT                   (14U)
#define CRU_GATE_CON06_PCLK_WDT_EN_MASK                    (0x1U << CRU_GATE_CON06_PCLK_WDT_EN_SHIFT)                   /* 0x00004000 */
#define CRU_GATE_CON06_PCLK_GRF_EN_SHIFT                   (15U)
#define CRU_GATE_CON06_PCLK_GRF_EN_MASK                    (0x1U << CRU_GATE_CON06_PCLK_GRF_EN_SHIFT)                   /* 0x00008000 */
/* GATE_CON07 */
#define CRU_GATE_CON07_OFFSET                              (0x29CU)
#define CRU_GATE_CON07_PCLK_GPIO1_EN_SHIFT                 (0U)
#define CRU_GATE_CON07_PCLK_GPIO1_EN_MASK                  (0x1U << CRU_GATE_CON07_PCLK_GPIO1_EN_SHIFT)                 /* 0x00000001 */
#define CRU_GATE_CON07_DBCLK_GPIO1_EN_SHIFT                (1U)
#define CRU_GATE_CON07_DBCLK_GPIO1_EN_MASK                 (0x1U << CRU_GATE_CON07_DBCLK_GPIO1_EN_SHIFT)                /* 0x00000002 */
#define CRU_GATE_CON07_PCLK_GPIO2_EN_SHIFT                 (2U)
#define CRU_GATE_CON07_PCLK_GPIO2_EN_MASK                  (0x1U << CRU_GATE_CON07_PCLK_GPIO2_EN_SHIFT)                 /* 0x00000004 */
#define CRU_GATE_CON07_DBCLK_GPIO2_EN_SHIFT                (3U)
#define CRU_GATE_CON07_DBCLK_GPIO2_EN_MASK                 (0x1U << CRU_GATE_CON07_DBCLK_GPIO2_EN_SHIFT)                /* 0x00000008 */
#define CRU_GATE_CON07_PCLK_GPIO3_EN_SHIFT                 (4U)
#define CRU_GATE_CON07_PCLK_GPIO3_EN_MASK                  (0x1U << CRU_GATE_CON07_PCLK_GPIO3_EN_SHIFT)                 /* 0x00000010 */
#define CRU_GATE_CON07_DBCLK_GPIO3_EN_SHIFT                (5U)
#define CRU_GATE_CON07_DBCLK_GPIO3_EN_MASK                 (0x1U << CRU_GATE_CON07_DBCLK_GPIO3_EN_SHIFT)                /* 0x00000020 */
#define CRU_GATE_CON07_PCLK_GPIO4_EN_SHIFT                 (6U)
#define CRU_GATE_CON07_PCLK_GPIO4_EN_MASK                  (0x1U << CRU_GATE_CON07_PCLK_GPIO4_EN_SHIFT)                 /* 0x00000040 */
#define CRU_GATE_CON07_DBCLK_GPIO4_EN_SHIFT                (7U)
#define CRU_GATE_CON07_DBCLK_GPIO4_EN_MASK                 (0x1U << CRU_GATE_CON07_DBCLK_GPIO4_EN_SHIFT)                /* 0x00000080 */
#define CRU_GATE_CON07_PCLK_CAN_EN_SHIFT                   (8U)
#define CRU_GATE_CON07_PCLK_CAN_EN_MASK                    (0x1U << CRU_GATE_CON07_PCLK_CAN_EN_SHIFT)                   /* 0x00000100 */
#define CRU_GATE_CON07_CLK_CAN_EN_SHIFT                    (9U)
#define CRU_GATE_CON07_CLK_CAN_EN_MASK                     (0x1U << CRU_GATE_CON07_CLK_CAN_EN_SHIFT)                    /* 0x00000200 */
#define CRU_GATE_CON07_PCLK_MAILBOX_EN_SHIFT               (10U)
#define CRU_GATE_CON07_PCLK_MAILBOX_EN_MASK                (0x1U << CRU_GATE_CON07_PCLK_MAILBOX_EN_SHIFT)               /* 0x00000400 */
#define CRU_GATE_CON07_ACLK_DECOM_EN_SHIFT                 (11U)
#define CRU_GATE_CON07_ACLK_DECOM_EN_MASK                  (0x1U << CRU_GATE_CON07_ACLK_DECOM_EN_SHIFT)                 /* 0x00000800 */
#define CRU_GATE_CON07_PCLK_DECOM_EN_SHIFT                 (12U)
#define CRU_GATE_CON07_PCLK_DECOM_EN_MASK                  (0x1U << CRU_GATE_CON07_PCLK_DECOM_EN_SHIFT)                 /* 0x00001000 */
#define CRU_GATE_CON07_DCLK_DECOM_EN_SHIFT                 (13U)
#define CRU_GATE_CON07_DCLK_DECOM_EN_MASK                  (0x1U << CRU_GATE_CON07_DCLK_DECOM_EN_SHIFT)                 /* 0x00002000 */
#define CRU_GATE_CON07_PCLK_INTMUX_EN_SHIFT                (14U)
#define CRU_GATE_CON07_PCLK_INTMUX_EN_MASK                 (0x1U << CRU_GATE_CON07_PCLK_INTMUX_EN_SHIFT)                /* 0x00004000 */
/* GATE_CON08 */
#define CRU_GATE_CON08_OFFSET                              (0x2A0U)
#define CRU_GATE_CON08_PCLK_SGRF_EN_SHIFT                  (4U)
#define CRU_GATE_CON08_PCLK_SGRF_EN_MASK                   (0x1U << CRU_GATE_CON08_PCLK_SGRF_EN_SHIFT)                  /* 0x00000010 */
/* GATE_CON09 */
#define CRU_GATE_CON09_OFFSET                              (0x2A4U)
#define CRU_GATE_CON09_HCLK_PDAUDIO_EN_SHIFT               (0U)
#define CRU_GATE_CON09_HCLK_PDAUDIO_EN_MASK                (0x1U << CRU_GATE_CON09_HCLK_PDAUDIO_EN_SHIFT)               /* 0x00000001 */
#define CRU_GATE_CON09_HCLK_PDAUDIO_NIU_EN_SHIFT           (2U)
#define CRU_GATE_CON09_HCLK_PDAUDIO_NIU_EN_MASK            (0x1U << CRU_GATE_CON09_HCLK_PDAUDIO_NIU_EN_SHIFT)           /* 0x00000004 */
#define CRU_GATE_CON09_PCLK_PDAUDIO_NIU_EN_SHIFT           (3U)
#define CRU_GATE_CON09_PCLK_PDAUDIO_NIU_EN_MASK            (0x1U << CRU_GATE_CON09_PCLK_PDAUDIO_NIU_EN_SHIFT)           /* 0x00000008 */
#define CRU_GATE_CON09_HCLK_I2S0_EN_SHIFT                  (4U)
#define CRU_GATE_CON09_HCLK_I2S0_EN_MASK                   (0x1U << CRU_GATE_CON09_HCLK_I2S0_EN_SHIFT)                  /* 0x00000010 */
#define CRU_GATE_CON09_MCLK_I2S0_TX_DIV_EN_SHIFT           (5U)
#define CRU_GATE_CON09_MCLK_I2S0_TX_DIV_EN_MASK            (0x1U << CRU_GATE_CON09_MCLK_I2S0_TX_DIV_EN_SHIFT)           /* 0x00000020 */
#define CRU_GATE_CON09_MCLK_I2S0_TX_FRACDIV_EN_SHIFT       (6U)
#define CRU_GATE_CON09_MCLK_I2S0_TX_FRACDIV_EN_MASK        (0x1U << CRU_GATE_CON09_MCLK_I2S0_TX_FRACDIV_EN_SHIFT)       /* 0x00000040 */
#define CRU_GATE_CON09_MCLK_I2S0_RX_DIV_EN_SHIFT           (7U)
#define CRU_GATE_CON09_MCLK_I2S0_RX_DIV_EN_MASK            (0x1U << CRU_GATE_CON09_MCLK_I2S0_RX_DIV_EN_SHIFT)           /* 0x00000080 */
#define CRU_GATE_CON09_MCLK_I2S0_RX_FRACDIV_EN_SHIFT       (8U)
#define CRU_GATE_CON09_MCLK_I2S0_RX_FRACDIV_EN_MASK        (0x1U << CRU_GATE_CON09_MCLK_I2S0_RX_FRACDIV_EN_SHIFT)       /* 0x00000100 */
#define CRU_GATE_CON09_MCLK_I2S0_TX_SRC_EN_SHIFT           (9U)
#define CRU_GATE_CON09_MCLK_I2S0_TX_SRC_EN_MASK            (0x1U << CRU_GATE_CON09_MCLK_I2S0_TX_SRC_EN_SHIFT)           /* 0x00000200 */
#define CRU_GATE_CON09_MCLK_I2S0_RX_SRC_EN_SHIFT           (10U)
#define CRU_GATE_CON09_MCLK_I2S0_RX_SRC_EN_MASK            (0x1U << CRU_GATE_CON09_MCLK_I2S0_RX_SRC_EN_SHIFT)           /* 0x00000400 */
#define CRU_GATE_CON09_MCLK_I2S0_TX_OUT2IO_EN_SHIFT        (13U)
#define CRU_GATE_CON09_MCLK_I2S0_TX_OUT2IO_EN_MASK         (0x1U << CRU_GATE_CON09_MCLK_I2S0_TX_OUT2IO_EN_SHIFT)        /* 0x00002000 */
#define CRU_GATE_CON09_MCLK_I2S0_RX_OUT2IO_EN_SHIFT        (14U)
#define CRU_GATE_CON09_MCLK_I2S0_RX_OUT2IO_EN_MASK         (0x1U << CRU_GATE_CON09_MCLK_I2S0_RX_OUT2IO_EN_SHIFT)        /* 0x00004000 */
#define CRU_GATE_CON09_MCLK_I2S2_FRACDIV_V2_EN_SHIFT       (15U)
#define CRU_GATE_CON09_MCLK_I2S2_FRACDIV_V2_EN_MASK        (0x1U << CRU_GATE_CON09_MCLK_I2S2_FRACDIV_V2_EN_SHIFT)       /* 0x00008000 */
/* GATE_CON10 */
#define CRU_GATE_CON10_OFFSET                              (0x2A8U)
#define CRU_GATE_CON10_HCLK_I2S1_EN_SHIFT                  (0U)
#define CRU_GATE_CON10_HCLK_I2S1_EN_MASK                   (0x1U << CRU_GATE_CON10_HCLK_I2S1_EN_SHIFT)                  /* 0x00000001 */
#define CRU_GATE_CON10_MCLK_I2S1_DIV_EN_SHIFT              (1U)
#define CRU_GATE_CON10_MCLK_I2S1_DIV_EN_MASK               (0x1U << CRU_GATE_CON10_MCLK_I2S1_DIV_EN_SHIFT)              /* 0x00000002 */
#define CRU_GATE_CON10_MCLK_I2S1_FRACDIV_EN_SHIFT          (2U)
#define CRU_GATE_CON10_MCLK_I2S1_FRACDIV_EN_MASK           (0x1U << CRU_GATE_CON10_MCLK_I2S1_FRACDIV_EN_SHIFT)          /* 0x00000004 */
#define CRU_GATE_CON10_MCLK_I2S1_EN_SHIFT                  (3U)
#define CRU_GATE_CON10_MCLK_I2S1_EN_MASK                   (0x1U << CRU_GATE_CON10_MCLK_I2S1_EN_SHIFT)                  /* 0x00000008 */
#define CRU_GATE_CON10_MCLK_I2S1_OUT2IO_EN_SHIFT           (4U)
#define CRU_GATE_CON10_MCLK_I2S1_OUT2IO_EN_MASK            (0x1U << CRU_GATE_CON10_MCLK_I2S1_OUT2IO_EN_SHIFT)           /* 0x00000010 */
#define CRU_GATE_CON10_HCLK_I2S2_EN_SHIFT                  (5U)
#define CRU_GATE_CON10_HCLK_I2S2_EN_MASK                   (0x1U << CRU_GATE_CON10_HCLK_I2S2_EN_SHIFT)                  /* 0x00000020 */
#define CRU_GATE_CON10_MCLK_I2S2_DIV_EN_SHIFT              (6U)
#define CRU_GATE_CON10_MCLK_I2S2_DIV_EN_MASK               (0x1U << CRU_GATE_CON10_MCLK_I2S2_DIV_EN_SHIFT)              /* 0x00000040 */
#define CRU_GATE_CON10_MCLK_I2S2_FRACDIV_EN_SHIFT          (7U)
#define CRU_GATE_CON10_MCLK_I2S2_FRACDIV_EN_MASK           (0x1U << CRU_GATE_CON10_MCLK_I2S2_FRACDIV_EN_SHIFT)          /* 0x00000080 */
#define CRU_GATE_CON10_MCLK_I2S2_EN_SHIFT                  (8U)
#define CRU_GATE_CON10_MCLK_I2S2_EN_MASK                   (0x1U << CRU_GATE_CON10_MCLK_I2S2_EN_SHIFT)                  /* 0x00000100 */
#define CRU_GATE_CON10_MCLK_I2S2_OUT2IO_EN_SHIFT           (9U)
#define CRU_GATE_CON10_MCLK_I2S2_OUT2IO_EN_MASK            (0x1U << CRU_GATE_CON10_MCLK_I2S2_OUT2IO_EN_SHIFT)           /* 0x00000200 */
#define CRU_GATE_CON10_HCLK_PDM_EN_SHIFT                   (10U)
#define CRU_GATE_CON10_HCLK_PDM_EN_MASK                    (0x1U << CRU_GATE_CON10_HCLK_PDM_EN_SHIFT)                   /* 0x00000400 */
#define CRU_GATE_CON10_MCLK_PDM_EN_SHIFT                   (11U)
#define CRU_GATE_CON10_MCLK_PDM_EN_MASK                    (0x1U << CRU_GATE_CON10_MCLK_PDM_EN_SHIFT)                   /* 0x00000800 */
#define CRU_GATE_CON10_HCLK_AUDPWM_EN_SHIFT                (12U)
#define CRU_GATE_CON10_HCLK_AUDPWM_EN_MASK                 (0x1U << CRU_GATE_CON10_HCLK_AUDPWM_EN_SHIFT)                /* 0x00001000 */
#define CRU_GATE_CON10_SCLK_AUDPWM_DIV_EN_SHIFT            (13U)
#define CRU_GATE_CON10_SCLK_AUDPWM_DIV_EN_MASK             (0x1U << CRU_GATE_CON10_SCLK_AUDPWM_DIV_EN_SHIFT)            /* 0x00002000 */
#define CRU_GATE_CON10_SCLK_AUDPWM_FRACDIV_EN_SHIFT        (14U)
#define CRU_GATE_CON10_SCLK_AUDPWM_FRACDIV_EN_MASK         (0x1U << CRU_GATE_CON10_SCLK_AUDPWM_FRACDIV_EN_SHIFT)        /* 0x00004000 */
#define CRU_GATE_CON10_SCLK_AUDPWM_EN_SHIFT                (15U)
#define CRU_GATE_CON10_SCLK_AUDPWM_EN_MASK                 (0x1U << CRU_GATE_CON10_SCLK_AUDPWM_EN_SHIFT)                /* 0x00008000 */
/* GATE_CON11 */
#define CRU_GATE_CON11_OFFSET                              (0x2ACU)
#define CRU_GATE_CON11_PCLK_ACDCDIG_EN_SHIFT               (0U)
#define CRU_GATE_CON11_PCLK_ACDCDIG_EN_MASK                (0x1U << CRU_GATE_CON11_PCLK_ACDCDIG_EN_SHIFT)               /* 0x00000001 */
#define CRU_GATE_CON11_CLK_ACDCDIG_I2C_EN_SHIFT            (1U)
#define CRU_GATE_CON11_CLK_ACDCDIG_I2C_EN_MASK             (0x1U << CRU_GATE_CON11_CLK_ACDCDIG_I2C_EN_SHIFT)            /* 0x00000002 */
#define CRU_GATE_CON11_CLK_ACDCDIG_ADC_EN_SHIFT            (2U)
#define CRU_GATE_CON11_CLK_ACDCDIG_ADC_EN_MASK             (0x1U << CRU_GATE_CON11_CLK_ACDCDIG_ADC_EN_SHIFT)            /* 0x00000004 */
#define CRU_GATE_CON11_CLK_ACDCDIG_DAC_EN_SHIFT            (3U)
#define CRU_GATE_CON11_CLK_ACDCDIG_DAC_EN_MASK             (0x1U << CRU_GATE_CON11_CLK_ACDCDIG_DAC_EN_SHIFT)            /* 0x00000008 */
/* GATE_CON12 */
#define CRU_GATE_CON12_OFFSET                              (0x2B0U)
#define CRU_GATE_CON12_ACLK_PDVEPU_EN_SHIFT                (0U)
#define CRU_GATE_CON12_ACLK_PDVEPU_EN_MASK                 (0x1U << CRU_GATE_CON12_ACLK_PDVEPU_EN_SHIFT)                /* 0x00000001 */
#define CRU_GATE_CON12_CLK_VENC_CORE_EN_SHIFT              (1U)
#define CRU_GATE_CON12_CLK_VENC_CORE_EN_MASK               (0x1U << CRU_GATE_CON12_CLK_VENC_CORE_EN_SHIFT)              /* 0x00000002 */
#define CRU_GATE_CON12_HCLK_PDVEPU_EN_SHIFT                (2U)
#define CRU_GATE_CON12_HCLK_PDVEPU_EN_MASK                 (0x1U << CRU_GATE_CON12_HCLK_PDVEPU_EN_SHIFT)                /* 0x00000004 */
#define CRU_GATE_CON12_ACLK_PDVEPU_NIU_EN_SHIFT            (3U)
#define CRU_GATE_CON12_ACLK_PDVEPU_NIU_EN_MASK             (0x1U << CRU_GATE_CON12_ACLK_PDVEPU_NIU_EN_SHIFT)            /* 0x00000008 */
#define CRU_GATE_CON12_HCLK_PDVEPU_NIU_EN_SHIFT            (4U)
#define CRU_GATE_CON12_HCLK_PDVEPU_NIU_EN_MASK             (0x1U << CRU_GATE_CON12_HCLK_PDVEPU_NIU_EN_SHIFT)            /* 0x00000010 */
#define CRU_GATE_CON12_ACLK_VENC_EN_SHIFT                  (5U)
#define CRU_GATE_CON12_ACLK_VENC_EN_MASK                   (0x1U << CRU_GATE_CON12_ACLK_VENC_EN_SHIFT)                  /* 0x00000020 */
#define CRU_GATE_CON12_HCLK_VENC_EN_SHIFT                  (6U)
#define CRU_GATE_CON12_HCLK_VENC_EN_MASK                   (0x1U << CRU_GATE_CON12_HCLK_VENC_EN_SHIFT)                  /* 0x00000040 */
#define CRU_GATE_CON12_ACLK_IEP_EN_SHIFT                   (7U)
#define CRU_GATE_CON12_ACLK_IEP_EN_MASK                    (0x1U << CRU_GATE_CON12_ACLK_IEP_EN_SHIFT)                   /* 0x00000080 */
#define CRU_GATE_CON12_HCLK_IEP_EN_SHIFT                   (8U)
#define CRU_GATE_CON12_HCLK_IEP_EN_MASK                    (0x1U << CRU_GATE_CON12_HCLK_IEP_EN_SHIFT)                   /* 0x00000100 */
#define CRU_GATE_CON12_CLK_IEP_CORE_EN_SHIFT               (9U)
#define CRU_GATE_CON12_CLK_IEP_CORE_EN_MASK                (0x1U << CRU_GATE_CON12_CLK_IEP_CORE_EN_SHIFT)               /* 0x00000200 */
/* GATE_CON13 */
#define CRU_GATE_CON13_OFFSET                              (0x2B4U)
#define CRU_GATE_CON13_ACLK_PDVDEC_EN_SHIFT                (0U)
#define CRU_GATE_CON13_ACLK_PDVDEC_EN_MASK                 (0x1U << CRU_GATE_CON13_ACLK_PDVDEC_EN_SHIFT)                /* 0x00000001 */
#define CRU_GATE_CON13_CLK_VDEC_CORE_EN_SHIFT              (1U)
#define CRU_GATE_CON13_CLK_VDEC_CORE_EN_MASK               (0x1U << CRU_GATE_CON13_CLK_VDEC_CORE_EN_SHIFT)              /* 0x00000002 */
#define CRU_GATE_CON13_CLK_VDEC_CA_EN_SHIFT                (2U)
#define CRU_GATE_CON13_CLK_VDEC_CA_EN_MASK                 (0x1U << CRU_GATE_CON13_CLK_VDEC_CA_EN_SHIFT)                /* 0x00000004 */
#define CRU_GATE_CON13_CLK_VDEC_HEVC_CA_EN_SHIFT           (3U)
#define CRU_GATE_CON13_CLK_VDEC_HEVC_CA_EN_MASK            (0x1U << CRU_GATE_CON13_CLK_VDEC_HEVC_CA_EN_SHIFT)           /* 0x00000008 */
#define CRU_GATE_CON13_HCLK_PDVDEC_EN_SHIFT                (4U)
#define CRU_GATE_CON13_HCLK_PDVDEC_EN_MASK                 (0x1U << CRU_GATE_CON13_HCLK_PDVDEC_EN_SHIFT)                /* 0x00000010 */
#define CRU_GATE_CON13_ACLK_PDVDEC_NIU_EN_SHIFT            (5U)
#define CRU_GATE_CON13_ACLK_PDVDEC_NIU_EN_MASK             (0x1U << CRU_GATE_CON13_ACLK_PDVDEC_NIU_EN_SHIFT)            /* 0x00000020 */
#define CRU_GATE_CON13_HCLK_PDVDEC_NIU_EN_SHIFT            (6U)
#define CRU_GATE_CON13_HCLK_PDVDEC_NIU_EN_MASK             (0x1U << CRU_GATE_CON13_HCLK_PDVDEC_NIU_EN_SHIFT)            /* 0x00000040 */
#define CRU_GATE_CON13_ACLK_VDEC_EN_SHIFT                  (7U)
#define CRU_GATE_CON13_ACLK_VDEC_EN_MASK                   (0x1U << CRU_GATE_CON13_ACLK_VDEC_EN_SHIFT)                  /* 0x00000080 */
#define CRU_GATE_CON13_HCLK_VDEC_EN_SHIFT                  (8U)
#define CRU_GATE_CON13_HCLK_VDEC_EN_MASK                   (0x1U << CRU_GATE_CON13_HCLK_VDEC_EN_SHIFT)                  /* 0x00000100 */
#define CRU_GATE_CON13_ACLK_PDJPEG_EN_SHIFT                (9U)
#define CRU_GATE_CON13_ACLK_PDJPEG_EN_MASK                 (0x1U << CRU_GATE_CON13_ACLK_PDJPEG_EN_SHIFT)                /* 0x00000200 */
#define CRU_GATE_CON13_HCLK_PDJPEG_EN_SHIFT                (10U)
#define CRU_GATE_CON13_HCLK_PDJPEG_EN_MASK                 (0x1U << CRU_GATE_CON13_HCLK_PDJPEG_EN_SHIFT)                /* 0x00000400 */
#define CRU_GATE_CON13_ACLK_PDJPEG_NIU_EN_SHIFT            (11U)
#define CRU_GATE_CON13_ACLK_PDJPEG_NIU_EN_MASK             (0x1U << CRU_GATE_CON13_ACLK_PDJPEG_NIU_EN_SHIFT)            /* 0x00000800 */
#define CRU_GATE_CON13_HCLK_PDJPEG_NIU_EN_SHIFT            (12U)
#define CRU_GATE_CON13_HCLK_PDJPEG_NIU_EN_MASK             (0x1U << CRU_GATE_CON13_HCLK_PDJPEG_NIU_EN_SHIFT)            /* 0x00001000 */
#define CRU_GATE_CON13_ACLK_JPEG_EN_SHIFT                  (13U)
#define CRU_GATE_CON13_ACLK_JPEG_EN_MASK                   (0x1U << CRU_GATE_CON13_ACLK_JPEG_EN_SHIFT)                  /* 0x00002000 */
#define CRU_GATE_CON13_HCLK_JPEG_EN_SHIFT                  (14U)
#define CRU_GATE_CON13_HCLK_JPEG_EN_MASK                   (0x1U << CRU_GATE_CON13_HCLK_JPEG_EN_SHIFT)                  /* 0x00004000 */
/* GATE_CON14 */
#define CRU_GATE_CON14_OFFSET                              (0x2B8U)
#define CRU_GATE_CON14_ACLK_PDVO_EN_SHIFT                  (0U)
#define CRU_GATE_CON14_ACLK_PDVO_EN_MASK                   (0x1U << CRU_GATE_CON14_ACLK_PDVO_EN_SHIFT)                  /* 0x00000001 */
#define CRU_GATE_CON14_HCLK_PDVO_EN_SHIFT                  (1U)
#define CRU_GATE_CON14_HCLK_PDVO_EN_MASK                   (0x1U << CRU_GATE_CON14_HCLK_PDVO_EN_SHIFT)                  /* 0x00000002 */
#define CRU_GATE_CON14_PCLK_PDVO_EN_SHIFT                  (2U)
#define CRU_GATE_CON14_PCLK_PDVO_EN_MASK                   (0x1U << CRU_GATE_CON14_PCLK_PDVO_EN_SHIFT)                  /* 0x00000004 */
#define CRU_GATE_CON14_ACLK_PDVO_NIU_EN_SHIFT              (3U)
#define CRU_GATE_CON14_ACLK_PDVO_NIU_EN_MASK               (0x1U << CRU_GATE_CON14_ACLK_PDVO_NIU_EN_SHIFT)              /* 0x00000008 */
#define CRU_GATE_CON14_HCLK_PDVO_NIU_EN_SHIFT              (4U)
#define CRU_GATE_CON14_HCLK_PDVO_NIU_EN_MASK               (0x1U << CRU_GATE_CON14_HCLK_PDVO_NIU_EN_SHIFT)              /* 0x00000010 */
#define CRU_GATE_CON14_PCLK_PDVO_NIU_EN_SHIFT              (5U)
#define CRU_GATE_CON14_PCLK_PDVO_NIU_EN_MASK               (0x1U << CRU_GATE_CON14_PCLK_PDVO_NIU_EN_SHIFT)              /* 0x00000020 */
#define CRU_GATE_CON14_ACLK_RGA_EN_SHIFT                   (6U)
#define CRU_GATE_CON14_ACLK_RGA_EN_MASK                    (0x1U << CRU_GATE_CON14_ACLK_RGA_EN_SHIFT)                   /* 0x00000040 */
#define CRU_GATE_CON14_HCLK_RGA_EN_SHIFT                   (7U)
#define CRU_GATE_CON14_HCLK_RGA_EN_MASK                    (0x1U << CRU_GATE_CON14_HCLK_RGA_EN_SHIFT)                   /* 0x00000080 */
#define CRU_GATE_CON14_CLK_RGA_CORE_EN_SHIFT               (8U)
#define CRU_GATE_CON14_CLK_RGA_CORE_EN_MASK                (0x1U << CRU_GATE_CON14_CLK_RGA_CORE_EN_SHIFT)               /* 0x00000100 */
#define CRU_GATE_CON14_ACLK_VOP_EN_SHIFT                   (9U)
#define CRU_GATE_CON14_ACLK_VOP_EN_MASK                    (0x1U << CRU_GATE_CON14_ACLK_VOP_EN_SHIFT)                   /* 0x00000200 */
#define CRU_GATE_CON14_HCLK_VOP_EN_SHIFT                   (10U)
#define CRU_GATE_CON14_HCLK_VOP_EN_MASK                    (0x1U << CRU_GATE_CON14_HCLK_VOP_EN_SHIFT)                   /* 0x00000400 */
#define CRU_GATE_CON14_DCLK_VOP_DIV_EN_SHIFT               (11U)
#define CRU_GATE_CON14_DCLK_VOP_DIV_EN_MASK                (0x1U << CRU_GATE_CON14_DCLK_VOP_DIV_EN_SHIFT)               /* 0x00000800 */
#define CRU_GATE_CON14_DCLK_VOP_FRACDIV_EN_SHIFT           (12U)
#define CRU_GATE_CON14_DCLK_VOP_FRACDIV_EN_MASK            (0x1U << CRU_GATE_CON14_DCLK_VOP_FRACDIV_EN_SHIFT)           /* 0x00001000 */
#define CRU_GATE_CON14_DCLK_VOP_EN_SHIFT                   (13U)
#define CRU_GATE_CON14_DCLK_VOP_EN_MASK                    (0x1U << CRU_GATE_CON14_DCLK_VOP_EN_SHIFT)                   /* 0x00002000 */
#define CRU_GATE_CON14_PCLK_DSIHOST_EN_SHIFT               (14U)
#define CRU_GATE_CON14_PCLK_DSIHOST_EN_MASK                (0x1U << CRU_GATE_CON14_PCLK_DSIHOST_EN_SHIFT)               /* 0x00004000 */
/* GATE_CON15 */
#define CRU_GATE_CON15_OFFSET                              (0x2BCU)
#define CRU_GATE_CON15_ACLK_PDVI_DIV_EN_SHIFT              (0U)
#define CRU_GATE_CON15_ACLK_PDVI_DIV_EN_MASK               (0x1U << CRU_GATE_CON15_ACLK_PDVI_DIV_EN_SHIFT)              /* 0x00000001 */
#define CRU_GATE_CON15_HCLK_PDVI_EN_SHIFT                  (1U)
#define CRU_GATE_CON15_HCLK_PDVI_EN_MASK                   (0x1U << CRU_GATE_CON15_HCLK_PDVI_EN_SHIFT)                  /* 0x00000002 */
#define CRU_GATE_CON15_PCLK_PDVI_EN_SHIFT                  (2U)
#define CRU_GATE_CON15_PCLK_PDVI_EN_MASK                   (0x1U << CRU_GATE_CON15_PCLK_PDVI_EN_SHIFT)                  /* 0x00000004 */
#define CRU_GATE_CON15_ACLK_PDVI_NIU_EN_SHIFT              (3U)
#define CRU_GATE_CON15_ACLK_PDVI_NIU_EN_MASK               (0x1U << CRU_GATE_CON15_ACLK_PDVI_NIU_EN_SHIFT)              /* 0x00000008 */
#define CRU_GATE_CON15_HCLK_PDVI_NIU_EN_SHIFT              (4U)
#define CRU_GATE_CON15_HCLK_PDVI_NIU_EN_MASK               (0x1U << CRU_GATE_CON15_HCLK_PDVI_NIU_EN_SHIFT)              /* 0x00000010 */
#define CRU_GATE_CON15_PCLK_PDVI_NIU_EN_SHIFT              (5U)
#define CRU_GATE_CON15_PCLK_PDVI_NIU_EN_MASK               (0x1U << CRU_GATE_CON15_PCLK_PDVI_NIU_EN_SHIFT)              /* 0x00000020 */
#define CRU_GATE_CON15_ACLK_ISP_EN_SHIFT                   (6U)
#define CRU_GATE_CON15_ACLK_ISP_EN_MASK                    (0x1U << CRU_GATE_CON15_ACLK_ISP_EN_SHIFT)                   /* 0x00000040 */
#define CRU_GATE_CON15_HCLK_ISP_EN_SHIFT                   (7U)
#define CRU_GATE_CON15_HCLK_ISP_EN_MASK                    (0x1U << CRU_GATE_CON15_HCLK_ISP_EN_SHIFT)                   /* 0x00000080 */
#define CRU_GATE_CON15_CLK_ISP_DIV_EN_SHIFT                (8U)
#define CRU_GATE_CON15_CLK_ISP_DIV_EN_MASK                 (0x1U << CRU_GATE_CON15_CLK_ISP_DIV_EN_SHIFT)                /* 0x00000100 */
#define CRU_GATE_CON15_ACLK_CIF_EN_SHIFT                   (9U)
#define CRU_GATE_CON15_ACLK_CIF_EN_MASK                    (0x1U << CRU_GATE_CON15_ACLK_CIF_EN_SHIFT)                   /* 0x00000200 */
#define CRU_GATE_CON15_HCLK_CIF_EN_SHIFT                   (10U)
#define CRU_GATE_CON15_HCLK_CIF_EN_MASK                    (0x1U << CRU_GATE_CON15_HCLK_CIF_EN_SHIFT)                   /* 0x00000400 */
#define CRU_GATE_CON15_DCLK_CIF_EN_SHIFT                   (11U)
#define CRU_GATE_CON15_DCLK_CIF_EN_MASK                    (0x1U << CRU_GATE_CON15_DCLK_CIF_EN_SHIFT)                   /* 0x00000800 */
#define CRU_GATE_CON15_CLK_CIF_OUT2IO_DIV_EN_SHIFT         (12U)
#define CRU_GATE_CON15_CLK_CIF_OUT2IO_DIV_EN_MASK          (0x1U << CRU_GATE_CON15_CLK_CIF_OUT2IO_DIV_EN_SHIFT)         /* 0x00001000 */
#define CRU_GATE_CON15_CLK_CIF_OUT2IO_FRACDIV_EN_SHIFT     (13U)
#define CRU_GATE_CON15_CLK_CIF_OUT2IO_FRACDIV_EN_MASK      (0x1U << CRU_GATE_CON15_CLK_CIF_OUT2IO_FRACDIV_EN_SHIFT)     /* 0x00002000 */
#define CRU_GATE_CON15_CLK_CIF_OUT2IO_EN_SHIFT             (14U)
#define CRU_GATE_CON15_CLK_CIF_OUT2IO_EN_MASK              (0x1U << CRU_GATE_CON15_CLK_CIF_OUT2IO_EN_SHIFT)             /* 0x00004000 */
#define CRU_GATE_CON15_PCLK_CSIHOST_EN_SHIFT               (15U)
#define CRU_GATE_CON15_PCLK_CSIHOST_EN_MASK                (0x1U << CRU_GATE_CON15_PCLK_CSIHOST_EN_SHIFT)               /* 0x00008000 */
/* GATE_CON16 */
#define CRU_GATE_CON16_OFFSET                              (0x2C0U)
#define CRU_GATE_CON16_ACLK_PDISPP_DIV_EN_SHIFT            (0U)
#define CRU_GATE_CON16_ACLK_PDISPP_DIV_EN_MASK             (0x1U << CRU_GATE_CON16_ACLK_PDISPP_DIV_EN_SHIFT)            /* 0x00000001 */
#define CRU_GATE_CON16_HCLK_PDISPP_EN_SHIFT                (1U)
#define CRU_GATE_CON16_HCLK_PDISPP_EN_MASK                 (0x1U << CRU_GATE_CON16_HCLK_PDISPP_EN_SHIFT)                /* 0x00000002 */
#define CRU_GATE_CON16_ACLK_PDISPP_NIU_EN_SHIFT            (2U)
#define CRU_GATE_CON16_ACLK_PDISPP_NIU_EN_MASK             (0x1U << CRU_GATE_CON16_ACLK_PDISPP_NIU_EN_SHIFT)            /* 0x00000004 */
#define CRU_GATE_CON16_HCLK_PDISPP_NIU_EN_SHIFT            (3U)
#define CRU_GATE_CON16_HCLK_PDISPP_NIU_EN_MASK             (0x1U << CRU_GATE_CON16_HCLK_PDISPP_NIU_EN_SHIFT)            /* 0x00000008 */
#define CRU_GATE_CON16_ACLK_ISPP_EN_SHIFT                  (4U)
#define CRU_GATE_CON16_ACLK_ISPP_EN_MASK                   (0x1U << CRU_GATE_CON16_ACLK_ISPP_EN_SHIFT)                  /* 0x00000010 */
#define CRU_GATE_CON16_HCLK_ISPP_EN_SHIFT                  (5U)
#define CRU_GATE_CON16_HCLK_ISPP_EN_MASK                   (0x1U << CRU_GATE_CON16_HCLK_ISPP_EN_SHIFT)                  /* 0x00000020 */
#define CRU_GATE_CON16_CLK_ISPP_DIV_EN_SHIFT               (6U)
#define CRU_GATE_CON16_CLK_ISPP_DIV_EN_MASK                (0x1U << CRU_GATE_CON16_CLK_ISPP_DIV_EN_SHIFT)               /* 0x00000040 */
#define CRU_GATE_CON16_CLK_ISPP_NP5_EN_SHIFT               (7U)
#define CRU_GATE_CON16_CLK_ISPP_NP5_EN_MASK                (0x1U << CRU_GATE_CON16_CLK_ISPP_NP5_EN_SHIFT)               /* 0x00000080 */
#define CRU_GATE_CON16_ACLK_PDISPP_NP5_EN_SHIFT            (8U)
#define CRU_GATE_CON16_ACLK_PDISPP_NP5_EN_MASK             (0x1U << CRU_GATE_CON16_ACLK_PDISPP_NP5_EN_SHIFT)            /* 0x00000100 */
#define CRU_GATE_CON16_ACLK_CIFLITE_EN_SHIFT               (10U)
#define CRU_GATE_CON16_ACLK_CIFLITE_EN_MASK                (0x1U << CRU_GATE_CON16_ACLK_CIFLITE_EN_SHIFT)               /* 0x00000400 */
#define CRU_GATE_CON16_HCLK_CIFLITE_EN_SHIFT               (11U)
#define CRU_GATE_CON16_HCLK_CIFLITE_EN_MASK                (0x1U << CRU_GATE_CON16_HCLK_CIFLITE_EN_SHIFT)               /* 0x00000800 */
#define CRU_GATE_CON16_DCLK_CIFLITE_EN_SHIFT               (12U)
#define CRU_GATE_CON16_DCLK_CIFLITE_EN_MASK                (0x1U << CRU_GATE_CON16_DCLK_CIFLITE_EN_SHIFT)               /* 0x00001000 */
#define CRU_GATE_CON16_ACLK_PDVI_NP5_EN_SHIFT              (13U)
#define CRU_GATE_CON16_ACLK_PDVI_NP5_EN_MASK               (0x1U << CRU_GATE_CON16_ACLK_PDVI_NP5_EN_SHIFT)              /* 0x00002000 */
#define CRU_GATE_CON16_CLK_ISP_NP5_EN_SHIFT                (14U)
#define CRU_GATE_CON16_CLK_ISP_NP5_EN_MASK                 (0x1U << CRU_GATE_CON16_CLK_ISP_NP5_EN_SHIFT)                /* 0x00004000 */
/* GATE_CON17 */
#define CRU_GATE_CON17_OFFSET                              (0x2C4U)
#define CRU_GATE_CON17_ACLK_PDPHP_EN_SHIFT                 (0U)
#define CRU_GATE_CON17_ACLK_PDPHP_EN_MASK                  (0x1U << CRU_GATE_CON17_ACLK_PDPHP_EN_SHIFT)                 /* 0x00000001 */
#define CRU_GATE_CON17_HCLK_PDPHP_EN_SHIFT                 (1U)
#define CRU_GATE_CON17_HCLK_PDPHP_EN_MASK                  (0x1U << CRU_GATE_CON17_HCLK_PDPHP_EN_SHIFT)                 /* 0x00000002 */
#define CRU_GATE_CON17_ACLK_PDPHPMID_EN_SHIFT              (2U)
#define CRU_GATE_CON17_ACLK_PDPHPMID_EN_MASK               (0x1U << CRU_GATE_CON17_ACLK_PDPHPMID_EN_SHIFT)              /* 0x00000004 */
#define CRU_GATE_CON17_HCLK_PDPHPMID_EN_SHIFT              (3U)
#define CRU_GATE_CON17_HCLK_PDPHPMID_EN_MASK               (0x1U << CRU_GATE_CON17_HCLK_PDPHPMID_EN_SHIFT)              /* 0x00000008 */
#define CRU_GATE_CON17_ACLK_PDPHPMID_NIU_EN_SHIFT          (4U)
#define CRU_GATE_CON17_ACLK_PDPHPMID_NIU_EN_MASK           (0x1U << CRU_GATE_CON17_ACLK_PDPHPMID_NIU_EN_SHIFT)          /* 0x00000010 */
#define CRU_GATE_CON17_HCLK_PDPHPMID_NIU_EN_SHIFT          (5U)
#define CRU_GATE_CON17_HCLK_PDPHPMID_NIU_EN_MASK           (0x1U << CRU_GATE_CON17_HCLK_PDPHPMID_NIU_EN_SHIFT)          /* 0x00000020 */
#define CRU_GATE_CON17_HCLK_PDSDCARD_EN_SHIFT              (6U)
#define CRU_GATE_CON17_HCLK_PDSDCARD_EN_MASK               (0x1U << CRU_GATE_CON17_HCLK_PDSDCARD_EN_SHIFT)              /* 0x00000040 */
#define CRU_GATE_CON17_HCLK_PDSDCARD_NIU_EN_SHIFT          (7U)
#define CRU_GATE_CON17_HCLK_PDSDCARD_NIU_EN_MASK           (0x1U << CRU_GATE_CON17_HCLK_PDSDCARD_NIU_EN_SHIFT)          /* 0x00000080 */
#define CRU_GATE_CON17_HCLK_PDSDIO_EN_SHIFT                (8U)
#define CRU_GATE_CON17_HCLK_PDSDIO_EN_MASK                 (0x1U << CRU_GATE_CON17_HCLK_PDSDIO_EN_SHIFT)                /* 0x00000100 */
#define CRU_GATE_CON17_HCLK_PDSDIO_NIU_EN_SHIFT            (9U)
#define CRU_GATE_CON17_HCLK_PDSDIO_NIU_EN_MASK             (0x1U << CRU_GATE_CON17_HCLK_PDSDIO_NIU_EN_SHIFT)            /* 0x00000200 */
/* GATE_CON18 */
#define CRU_GATE_CON18_OFFSET                              (0x2C8U)
#define CRU_GATE_CON18_HCLK_PDNVM_EN_SHIFT                 (1U)
#define CRU_GATE_CON18_HCLK_PDNVM_EN_MASK                  (0x1U << CRU_GATE_CON18_HCLK_PDNVM_EN_SHIFT)                 /* 0x00000002 */
#define CRU_GATE_CON18_HCLK_PDNVM_NIU_EN_SHIFT             (3U)
#define CRU_GATE_CON18_HCLK_PDNVM_NIU_EN_MASK              (0x1U << CRU_GATE_CON18_HCLK_PDNVM_NIU_EN_SHIFT)             /* 0x00000008 */
#define CRU_GATE_CON18_HCLK_SDCARD_EN_SHIFT                (4U)
#define CRU_GATE_CON18_HCLK_SDCARD_EN_MASK                 (0x1U << CRU_GATE_CON18_HCLK_SDCARD_EN_SHIFT)                /* 0x00000010 */
#define CRU_GATE_CON18_CCLKIN_SDMMC_EN_SHIFT               (5U)
#define CRU_GATE_CON18_CCLKIN_SDMMC_EN_MASK                (0x1U << CRU_GATE_CON18_CCLKIN_SDMMC_EN_SHIFT)               /* 0x00000020 */
#define CRU_GATE_CON18_HCLK_SDIO_EN_SHIFT                  (6U)
#define CRU_GATE_CON18_HCLK_SDIO_EN_MASK                   (0x1U << CRU_GATE_CON18_HCLK_SDIO_EN_SHIFT)                  /* 0x00000040 */
#define CRU_GATE_CON18_CCLKIN_SDIO_EN_SHIFT                (7U)
#define CRU_GATE_CON18_CCLKIN_SDIO_EN_MASK                 (0x1U << CRU_GATE_CON18_CCLKIN_SDIO_EN_SHIFT)                /* 0x00000080 */
#define CRU_GATE_CON18_HCLK_EMMC_EN_SHIFT                  (8U)
#define CRU_GATE_CON18_HCLK_EMMC_EN_MASK                   (0x1U << CRU_GATE_CON18_HCLK_EMMC_EN_SHIFT)                  /* 0x00000100 */
#define CRU_GATE_CON18_CCLKIN_EMMC_EN_SHIFT                (9U)
#define CRU_GATE_CON18_CCLKIN_EMMC_EN_MASK                 (0x1U << CRU_GATE_CON18_CCLKIN_EMMC_EN_SHIFT)                /* 0x00000200 */
#define CRU_GATE_CON18_HCLK_SFC_EN_SHIFT                   (10U)
#define CRU_GATE_CON18_HCLK_SFC_EN_MASK                    (0x1U << CRU_GATE_CON18_HCLK_SFC_EN_SHIFT)                   /* 0x00000400 */
#define CRU_GATE_CON18_HCLK_SFCXIP_EN_SHIFT                (11U)
#define CRU_GATE_CON18_HCLK_SFCXIP_EN_MASK                 (0x1U << CRU_GATE_CON18_HCLK_SFCXIP_EN_SHIFT)                /* 0x00000800 */
#define CRU_GATE_CON18_SCLK_SFC_EN_SHIFT                   (12U)
#define CRU_GATE_CON18_SCLK_SFC_EN_MASK                    (0x1U << CRU_GATE_CON18_SCLK_SFC_EN_SHIFT)                   /* 0x00001000 */
#define CRU_GATE_CON18_HCLK_NANDC_EN_SHIFT                 (13U)
#define CRU_GATE_CON18_HCLK_NANDC_EN_MASK                  (0x1U << CRU_GATE_CON18_HCLK_NANDC_EN_SHIFT)                 /* 0x00002000 */
#define CRU_GATE_CON18_NCLK_NANDC_EN_SHIFT                 (14U)
#define CRU_GATE_CON18_NCLK_NANDC_EN_MASK                  (0x1U << CRU_GATE_CON18_NCLK_NANDC_EN_SHIFT)                 /* 0x00004000 */
/* GATE_CON19 */
#define CRU_GATE_CON19_OFFSET                              (0x2CCU)
#define CRU_GATE_CON19_ACLK_PDUSB_EN_SHIFT                 (0U)
#define CRU_GATE_CON19_ACLK_PDUSB_EN_MASK                  (0x1U << CRU_GATE_CON19_ACLK_PDUSB_EN_SHIFT)                 /* 0x00000001 */
#define CRU_GATE_CON19_HCLK_PDUSB_EN_SHIFT                 (1U)
#define CRU_GATE_CON19_HCLK_PDUSB_EN_MASK                  (0x1U << CRU_GATE_CON19_HCLK_PDUSB_EN_SHIFT)                 /* 0x00000002 */
#define CRU_GATE_CON19_ACLK_PDUSB_NIU_EN_SHIFT             (2U)
#define CRU_GATE_CON19_ACLK_PDUSB_NIU_EN_MASK              (0x1U << CRU_GATE_CON19_ACLK_PDUSB_NIU_EN_SHIFT)             /* 0x00000004 */
#define CRU_GATE_CON19_HCLK_PDUSB_NIU_EN_SHIFT             (3U)
#define CRU_GATE_CON19_HCLK_PDUSB_NIU_EN_MASK              (0x1U << CRU_GATE_CON19_HCLK_PDUSB_NIU_EN_SHIFT)             /* 0x00000008 */
#define CRU_GATE_CON19_HCLK_USBHOST_EN_SHIFT               (4U)
#define CRU_GATE_CON19_HCLK_USBHOST_EN_MASK                (0x1U << CRU_GATE_CON19_HCLK_USBHOST_EN_SHIFT)               /* 0x00000010 */
#define CRU_GATE_CON19_HCLK_USBHOST_ARB_EN_SHIFT           (5U)
#define CRU_GATE_CON19_HCLK_USBHOST_ARB_EN_MASK            (0x1U << CRU_GATE_CON19_HCLK_USBHOST_ARB_EN_SHIFT)           /* 0x00000020 */
#define CRU_GATE_CON19_CLK_USBHOST_UTMI_OHCI_EN_SHIFT      (6U)
#define CRU_GATE_CON19_CLK_USBHOST_UTMI_OHCI_EN_MASK       (0x1U << CRU_GATE_CON19_CLK_USBHOST_UTMI_OHCI_EN_SHIFT)      /* 0x00000040 */
#define CRU_GATE_CON19_ACLK_USBOTG_EN_SHIFT                (7U)
#define CRU_GATE_CON19_ACLK_USBOTG_EN_MASK                 (0x1U << CRU_GATE_CON19_ACLK_USBOTG_EN_SHIFT)                /* 0x00000080 */
#define CRU_GATE_CON19_CLK_USBOTG_REF_EN_SHIFT             (8U)
#define CRU_GATE_CON19_CLK_USBOTG_REF_EN_MASK              (0x1U << CRU_GATE_CON19_CLK_USBOTG_REF_EN_SHIFT)             /* 0x00000100 */
#define CRU_GATE_CON19_PCLK_USBPHY_OTG_EN_SHIFT            (12U)
#define CRU_GATE_CON19_PCLK_USBPHY_OTG_EN_MASK             (0x1U << CRU_GATE_CON19_PCLK_USBPHY_OTG_EN_SHIFT)            /* 0x00001000 */
#define CRU_GATE_CON19_PCLK_USBPHY_HOST_EN_SHIFT           (13U)
#define CRU_GATE_CON19_PCLK_USBPHY_HOST_EN_MASK            (0x1U << CRU_GATE_CON19_PCLK_USBPHY_HOST_EN_SHIFT)           /* 0x00002000 */
/* GATE_CON20 */
#define CRU_GATE_CON20_OFFSET                              (0x2D0U)
#define CRU_GATE_CON20_ACLK_PDGMAC_EN_SHIFT                (0U)
#define CRU_GATE_CON20_ACLK_PDGMAC_EN_MASK                 (0x1U << CRU_GATE_CON20_ACLK_PDGMAC_EN_SHIFT)                /* 0x00000001 */
#define CRU_GATE_CON20_PCLK_PDGMAC_EN_SHIFT                (1U)
#define CRU_GATE_CON20_PCLK_PDGMAC_EN_MASK                 (0x1U << CRU_GATE_CON20_PCLK_PDGMAC_EN_SHIFT)                /* 0x00000002 */
#define CRU_GATE_CON20_ACLK_PDGMAC_NIU_EN_SHIFT            (2U)
#define CRU_GATE_CON20_ACLK_PDGMAC_NIU_EN_MASK             (0x1U << CRU_GATE_CON20_ACLK_PDGMAC_NIU_EN_SHIFT)            /* 0x00000004 */
#define CRU_GATE_CON20_PCLK_PDGMAC_NIU_EN_SHIFT            (3U)
#define CRU_GATE_CON20_PCLK_PDGMAC_NIU_EN_MASK             (0x1U << CRU_GATE_CON20_PCLK_PDGMAC_NIU_EN_SHIFT)            /* 0x00000008 */
#define CRU_GATE_CON20_ACLK_GMAC_EN_SHIFT                  (4U)
#define CRU_GATE_CON20_ACLK_GMAC_EN_MASK                   (0x1U << CRU_GATE_CON20_ACLK_GMAC_EN_SHIFT)                  /* 0x00000010 */
#define CRU_GATE_CON20_PCLK_GMAC_EN_SHIFT                  (5U)
#define CRU_GATE_CON20_PCLK_GMAC_EN_MASK                   (0x1U << CRU_GATE_CON20_PCLK_GMAC_EN_SHIFT)                  /* 0x00000020 */
#define CRU_GATE_CON20_CLK_GMAC_DIVOUT_EN_SHIFT            (6U)
#define CRU_GATE_CON20_CLK_GMAC_DIVOUT_EN_MASK             (0x1U << CRU_GATE_CON20_CLK_GMAC_DIVOUT_EN_SHIFT)            /* 0x00000040 */
#define CRU_GATE_CON20_CLK_MAC_REF_EN_SHIFT                (7U)
#define CRU_GATE_CON20_CLK_MAC_REF_EN_MASK                 (0x1U << CRU_GATE_CON20_CLK_MAC_REF_EN_SHIFT)                /* 0x00000080 */
#define CRU_GATE_CON20_CLK_MAC_RX_EN_SHIFT                 (8U)
#define CRU_GATE_CON20_CLK_MAC_RX_EN_MASK                  (0x1U << CRU_GATE_CON20_CLK_MAC_RX_EN_SHIFT)                 /* 0x00000100 */
#define CRU_GATE_CON20_CLK_MAC_TX_EN_SHIFT                 (9U)
#define CRU_GATE_CON20_CLK_MAC_TX_EN_MASK                  (0x1U << CRU_GATE_CON20_CLK_MAC_TX_EN_SHIFT)                 /* 0x00000200 */
#define CRU_GATE_CON20_CLK_MAC_PTPREF_EN_SHIFT             (10U)
#define CRU_GATE_CON20_CLK_MAC_PTPREF_EN_MASK              (0x1U << CRU_GATE_CON20_CLK_MAC_PTPREF_EN_SHIFT)             /* 0x00000400 */
#define CRU_GATE_CON20_CLK_GMAC_ETHERNET_OUT2IO_EN_SHIFT   (11U)
#define CRU_GATE_CON20_CLK_GMAC_ETHERNET_OUT2IO_EN_MASK    (0x1U << CRU_GATE_CON20_CLK_GMAC_ETHERNET_OUT2IO_EN_SHIFT)   /* 0x00000800 */
#define CRU_GATE_CON20_CLK_GMAC_RGMII_M0_EN_SHIFT          (12U)
#define CRU_GATE_CON20_CLK_GMAC_RGMII_M0_EN_MASK           (0x1U << CRU_GATE_CON20_CLK_GMAC_RGMII_M0_EN_SHIFT)          /* 0x00001000 */
#define CRU_GATE_CON20_CLK_GMAC_RGMII_M1_EN_SHIFT          (13U)
#define CRU_GATE_CON20_CLK_GMAC_RGMII_M1_EN_MASK           (0x1U << CRU_GATE_CON20_CLK_GMAC_RGMII_M1_EN_SHIFT)          /* 0x00002000 */
#define CRU_GATE_CON20_CLK_DDR_MON_EN_SHIFT                (15U)
#define CRU_GATE_CON20_CLK_DDR_MON_EN_MASK                 (0x1U << CRU_GATE_CON20_CLK_DDR_MON_EN_SHIFT)                /* 0x00008000 */
/* GATE_CON21 */
#define CRU_GATE_CON21_OFFSET                              (0x2D4U)
#define CRU_GATE_CON21_PCLK_PDDDR_PRE_EN_SHIFT             (0U)
#define CRU_GATE_CON21_PCLK_PDDDR_PRE_EN_MASK              (0x1U << CRU_GATE_CON21_PCLK_PDDDR_PRE_EN_SHIFT)             /* 0x00000001 */
#define CRU_GATE_CON21_PCLK_DDR_DFICTL_EN_SHIFT            (2U)
#define CRU_GATE_CON21_PCLK_DDR_DFICTL_EN_MASK             (0x1U << CRU_GATE_CON21_PCLK_DDR_DFICTL_EN_SHIFT)            /* 0x00000004 */
#define CRU_GATE_CON21_PCLK_DDR_MON_EN_SHIFT               (3U)
#define CRU_GATE_CON21_PCLK_DDR_MON_EN_MASK                (0x1U << CRU_GATE_CON21_PCLK_DDR_MON_EN_SHIFT)               /* 0x00000008 */
#define CRU_GATE_CON21_PCLK_DDR_STANDBY_EN_SHIFT           (4U)
#define CRU_GATE_CON21_PCLK_DDR_STANDBY_EN_MASK            (0x1U << CRU_GATE_CON21_PCLK_DDR_STANDBY_EN_SHIFT)           /* 0x00000010 */
#define CRU_GATE_CON21_PCLK_DDR_GRF_EN_SHIFT               (5U)
#define CRU_GATE_CON21_PCLK_DDR_GRF_EN_MASK                (0x1U << CRU_GATE_CON21_PCLK_DDR_GRF_EN_SHIFT)               /* 0x00000020 */
#define CRU_GATE_CON21_PCLK_DDR_MSCH_EN_SHIFT              (6U)
#define CRU_GATE_CON21_PCLK_DDR_MSCH_EN_MASK               (0x1U << CRU_GATE_CON21_PCLK_DDR_MSCH_EN_SHIFT)              /* 0x00000040 */
#define CRU_GATE_CON21_TMCLK_DDR_MON_EN_SHIFT              (7U)
#define CRU_GATE_CON21_TMCLK_DDR_MON_EN_MASK               (0x1U << CRU_GATE_CON21_TMCLK_DDR_MON_EN_SHIFT)              /* 0x00000080 */
#define CRU_GATE_CON21_CLK_DDRPHY_EN_SHIFT                 (8U)
#define CRU_GATE_CON21_CLK_DDRPHY_EN_MASK                  (0x1U << CRU_GATE_CON21_CLK_DDRPHY_EN_SHIFT)                 /* 0x00000100 */
#define CRU_GATE_CON21_ACLK_DDR_SPLIT_EN_SHIFT             (9U)
#define CRU_GATE_CON21_ACLK_DDR_SPLIT_EN_MASK              (0x1U << CRU_GATE_CON21_ACLK_DDR_SPLIT_EN_SHIFT)             /* 0x00000200 */
#define CRU_GATE_CON21_CLK_DDR_MSCH_EN_SHIFT               (10U)
#define CRU_GATE_CON21_CLK_DDR_MSCH_EN_MASK                (0x1U << CRU_GATE_CON21_CLK_DDR_MSCH_EN_SHIFT)               /* 0x00000400 */
#define CRU_GATE_CON21_CLK_DDR_DFICTL_EN_SHIFT             (13U)
#define CRU_GATE_CON21_CLK_DDR_DFICTL_EN_MASK              (0x1U << CRU_GATE_CON21_CLK_DDR_DFICTL_EN_SHIFT)             /* 0x00002000 */
#define CRU_GATE_CON21_CLK_DDR_STANDBY_EN_SHIFT            (14U)
#define CRU_GATE_CON21_CLK_DDR_STANDBY_EN_MASK             (0x1U << CRU_GATE_CON21_CLK_DDR_STANDBY_EN_SHIFT)            /* 0x00004000 */
#define CRU_GATE_CON21_PCLK_PDDDR_EN_SHIFT                 (15U)
#define CRU_GATE_CON21_PCLK_PDDDR_EN_MASK                  (0x1U << CRU_GATE_CON21_PCLK_PDDDR_EN_SHIFT)                 /* 0x00008000 */
/* GATE_CON22 */
#define CRU_GATE_CON22_OFFSET                              (0x2D8U)
#define CRU_GATE_CON22_ACLK_PDNPU_DIV_EN_SHIFT             (0U)
#define CRU_GATE_CON22_ACLK_PDNPU_DIV_EN_MASK              (0x1U << CRU_GATE_CON22_ACLK_PDNPU_DIV_EN_SHIFT)             /* 0x00000001 */
#define CRU_GATE_CON22_ACLK_PDNPU_NP5_EN_SHIFT             (1U)
#define CRU_GATE_CON22_ACLK_PDNPU_NP5_EN_MASK              (0x1U << CRU_GATE_CON22_ACLK_PDNPU_NP5_EN_SHIFT)             /* 0x00000002 */
#define CRU_GATE_CON22_HCLK_PDNPU_EN_SHIFT                 (2U)
#define CRU_GATE_CON22_HCLK_PDNPU_EN_MASK                  (0x1U << CRU_GATE_CON22_HCLK_PDNPU_EN_SHIFT)                 /* 0x00000004 */
#define CRU_GATE_CON22_PCLK_PDNPU_EN_SHIFT                 (3U)
#define CRU_GATE_CON22_PCLK_PDNPU_EN_MASK                  (0x1U << CRU_GATE_CON22_PCLK_PDNPU_EN_SHIFT)                 /* 0x00000008 */
#define CRU_GATE_CON22_ACLK_PDNPU_NIU_EN_SHIFT             (4U)
#define CRU_GATE_CON22_ACLK_PDNPU_NIU_EN_MASK              (0x1U << CRU_GATE_CON22_ACLK_PDNPU_NIU_EN_SHIFT)             /* 0x00000010 */
#define CRU_GATE_CON22_HCLK_PDNPU_NIU_EN_SHIFT             (5U)
#define CRU_GATE_CON22_HCLK_PDNPU_NIU_EN_MASK              (0x1U << CRU_GATE_CON22_HCLK_PDNPU_NIU_EN_SHIFT)             /* 0x00000020 */
#define CRU_GATE_CON22_PCLK_PDNPU_NIU_EN_SHIFT             (6U)
#define CRU_GATE_CON22_PCLK_PDNPU_NIU_EN_MASK              (0x1U << CRU_GATE_CON22_PCLK_PDNPU_NIU_EN_SHIFT)             /* 0x00000040 */
#define CRU_GATE_CON22_ACLK_NPU_EN_SHIFT                   (7U)
#define CRU_GATE_CON22_ACLK_NPU_EN_MASK                    (0x1U << CRU_GATE_CON22_ACLK_NPU_EN_SHIFT)                   /* 0x00000080 */
#define CRU_GATE_CON22_HCLK_NPU_EN_SHIFT                   (8U)
#define CRU_GATE_CON22_HCLK_NPU_EN_MASK                    (0x1U << CRU_GATE_CON22_HCLK_NPU_EN_SHIFT)                   /* 0x00000100 */
#define CRU_GATE_CON22_CLK_NPU_DIV_EN_SHIFT                (9U)
#define CRU_GATE_CON22_CLK_NPU_DIV_EN_MASK                 (0x1U << CRU_GATE_CON22_CLK_NPU_DIV_EN_SHIFT)                /* 0x00000200 */
#define CRU_GATE_CON22_CLK_NPU_NP5_EN_SHIFT                (10U)
#define CRU_GATE_CON22_CLK_NPU_NP5_EN_MASK                 (0x1U << CRU_GATE_CON22_CLK_NPU_NP5_EN_SHIFT)                /* 0x00000400 */
#define CRU_GATE_CON22_CLK_NPU_DIV2_EN_SHIFT               (11U)
#define CRU_GATE_CON22_CLK_NPU_DIV2_EN_MASK                (0x1U << CRU_GATE_CON22_CLK_NPU_DIV2_EN_SHIFT)               /* 0x00000800 */
#define CRU_GATE_CON22_PCLK_NPUPVTM_EN_SHIFT               (12U)
#define CRU_GATE_CON22_PCLK_NPUPVTM_EN_MASK                (0x1U << CRU_GATE_CON22_PCLK_NPUPVTM_EN_SHIFT)               /* 0x00001000 */
#define CRU_GATE_CON22_CLK_NPUPVTM_EN_SHIFT                (13U)
#define CRU_GATE_CON22_CLK_NPUPVTM_EN_MASK                 (0x1U << CRU_GATE_CON22_CLK_NPUPVTM_EN_SHIFT)                /* 0x00002000 */
#define CRU_GATE_CON22_CLK_CORE_NPUPVTM_EN_SHIFT           (14U)
#define CRU_GATE_CON22_CLK_CORE_NPUPVTM_EN_MASK            (0x1U << CRU_GATE_CON22_CLK_CORE_NPUPVTM_EN_SHIFT)           /* 0x00004000 */
/* GATE_CON23 */
#define CRU_GATE_CON23_OFFSET                              (0x2DCU)
#define CRU_GATE_CON23_PCLK_DDRPHY_EN_SHIFT                (0U)
#define CRU_GATE_CON23_PCLK_DDRPHY_EN_MASK                 (0x1U << CRU_GATE_CON23_PCLK_DDRPHY_EN_SHIFT)                /* 0x00000001 */
#define CRU_GATE_CON23_CLK1X_DDRPHY_EN_SHIFT               (1U)
#define CRU_GATE_CON23_CLK1X_DDRPHY_EN_MASK                (0x1U << CRU_GATE_CON23_CLK1X_DDRPHY_EN_SHIFT)               /* 0x00000002 */
#define CRU_GATE_CON23_PCLK_CSIPHY0_EN_SHIFT               (2U)
#define CRU_GATE_CON23_PCLK_CSIPHY0_EN_MASK                (0x1U << CRU_GATE_CON23_PCLK_CSIPHY0_EN_SHIFT)               /* 0x00000004 */
#define CRU_GATE_CON23_PCLK_CSIPHY1_EN_SHIFT               (3U)
#define CRU_GATE_CON23_PCLK_CSIPHY1_EN_MASK                (0x1U << CRU_GATE_CON23_PCLK_CSIPHY1_EN_SHIFT)               /* 0x00000008 */
#define CRU_GATE_CON23_PCLK_DSIPHY_EN_SHIFT                (4U)
#define CRU_GATE_CON23_PCLK_DSIPHY_EN_MASK                 (0x1U << CRU_GATE_CON23_PCLK_DSIPHY_EN_SHIFT)                /* 0x00000010 */
#define CRU_GATE_CON23_MIPICSI_CLK_OUT2IO_DIV_EN_SHIFT     (5U)
#define CRU_GATE_CON23_MIPICSI_CLK_OUT2IO_DIV_EN_MASK      (0x1U << CRU_GATE_CON23_MIPICSI_CLK_OUT2IO_DIV_EN_SHIFT)     /* 0x00000020 */
#define CRU_GATE_CON23_MIPICSI_CLK_OUT2IO_FRACDIV_EN_SHIFT (6U)
#define CRU_GATE_CON23_MIPICSI_CLK_OUT2IO_FRACDIV_EN_MASK  (0x1U << CRU_GATE_CON23_MIPICSI_CLK_OUT2IO_FRACDIV_EN_SHIFT) /* 0x00000040 */
#define CRU_GATE_CON23_MIPICSI_CLK_OUT2IO_EN_SHIFT         (7U)
#define CRU_GATE_CON23_MIPICSI_CLK_OUT2IO_EN_MASK          (0x1U << CRU_GATE_CON23_MIPICSI_CLK_OUT2IO_EN_SHIFT)         /* 0x00000080 */
#define CRU_GATE_CON23_PCLK_PDTOP_EN_SHIFT                 (8U)
#define CRU_GATE_CON23_PCLK_PDTOP_EN_MASK                  (0x1U << CRU_GATE_CON23_PCLK_PDTOP_EN_SHIFT)                 /* 0x00000100 */
#define CRU_GATE_CON23_PCLK_TOPNIU_EN_SHIFT                (9U)
#define CRU_GATE_CON23_PCLK_TOPNIU_EN_MASK                 (0x1U << CRU_GATE_CON23_PCLK_TOPNIU_EN_SHIFT)                /* 0x00000200 */
#define CRU_GATE_CON23_PCLK_TOPCRU_EN_SHIFT                (10U)
#define CRU_GATE_CON23_PCLK_TOPCRU_EN_MASK                 (0x1U << CRU_GATE_CON23_PCLK_TOPCRU_EN_SHIFT)                /* 0x00000400 */
#define CRU_GATE_CON23_PCLK_TOPGRF_EN_SHIFT                (11U)
#define CRU_GATE_CON23_PCLK_TOPGRF_EN_MASK                 (0x1U << CRU_GATE_CON23_PCLK_TOPGRF_EN_SHIFT)                /* 0x00000800 */
#define CRU_GATE_CON23_PCLK_CPUEMADET_EN_SHIFT             (12U)
#define CRU_GATE_CON23_PCLK_CPUEMADET_EN_MASK              (0x1U << CRU_GATE_CON23_PCLK_CPUEMADET_EN_SHIFT)             /* 0x00001000 */
#define CRU_GATE_CON23_CLK_TESTOUT_EN_SHIFT                (13U)
#define CRU_GATE_CON23_CLK_TESTOUT_EN_MASK                 (0x1U << CRU_GATE_CON23_CLK_TESTOUT_EN_SHIFT)                /* 0x00002000 */
/* GATE_CON24 */
#define CRU_GATE_CON24_OFFSET                              (0x2E0U)
#define CRU_GATE_CON24_PCLK_CPU_TSADC_EN_SHIFT             (0U)
#define CRU_GATE_CON24_PCLK_CPU_TSADC_EN_MASK              (0x1U << CRU_GATE_CON24_PCLK_CPU_TSADC_EN_SHIFT)             /* 0x00000001 */
#define CRU_GATE_CON24_CLK_CPU_TSADC_EN_SHIFT              (1U)
#define CRU_GATE_CON24_CLK_CPU_TSADC_EN_MASK               (0x1U << CRU_GATE_CON24_CLK_CPU_TSADC_EN_SHIFT)              /* 0x00000002 */
#define CRU_GATE_CON24_CLK_CPU_TSADCPHY_EN_SHIFT           (2U)
#define CRU_GATE_CON24_CLK_CPU_TSADCPHY_EN_MASK            (0x1U << CRU_GATE_CON24_CLK_CPU_TSADCPHY_EN_SHIFT)           /* 0x00000004 */
#define CRU_GATE_CON24_PCLK_NPU_TSADC_EN_SHIFT             (3U)
#define CRU_GATE_CON24_PCLK_NPU_TSADC_EN_MASK              (0x1U << CRU_GATE_CON24_PCLK_NPU_TSADC_EN_SHIFT)             /* 0x00000008 */
#define CRU_GATE_CON24_CLK_NPU_TSADC_EN_SHIFT              (4U)
#define CRU_GATE_CON24_CLK_NPU_TSADC_EN_MASK               (0x1U << CRU_GATE_CON24_CLK_NPU_TSADC_EN_SHIFT)              /* 0x00000010 */
#define CRU_GATE_CON24_CLK_NPU_TSADCPHY_EN_SHIFT           (5U)
#define CRU_GATE_CON24_CLK_NPU_TSADCPHY_EN_MASK            (0x1U << CRU_GATE_CON24_CLK_NPU_TSADCPHY_EN_SHIFT)           /* 0x00000020 */
#define CRU_GATE_CON24_CLK_NPU_MCU_NIU_EN_SHIFT            (6U)
#define CRU_GATE_CON24_CLK_NPU_MCU_NIU_EN_MASK             (0x1U << CRU_GATE_CON24_CLK_NPU_MCU_NIU_EN_SHIFT)            /* 0x00000040 */
/* SOFTRST_CON00 */
#define CRU_SOFTRST_CON00_OFFSET                           (0x300U)
#define CRU_SOFTRST_CON00_NCOREPORESET0_SHIFT              (0U)
#define CRU_SOFTRST_CON00_NCOREPORESET0_MASK               (0x1U << CRU_SOFTRST_CON00_NCOREPORESET0_SHIFT)              /* 0x00000001 */
#define CRU_SOFTRST_CON00_NCOREPORESET1_SHIFT              (1U)
#define CRU_SOFTRST_CON00_NCOREPORESET1_MASK               (0x1U << CRU_SOFTRST_CON00_NCOREPORESET1_SHIFT)              /* 0x00000002 */
#define CRU_SOFTRST_CON00_NCOREPORESET2_SHIFT              (2U)
#define CRU_SOFTRST_CON00_NCOREPORESET2_MASK               (0x1U << CRU_SOFTRST_CON00_NCOREPORESET2_SHIFT)              /* 0x00000004 */
#define CRU_SOFTRST_CON00_NCOREPORESET3_SHIFT              (3U)
#define CRU_SOFTRST_CON00_NCOREPORESET3_MASK               (0x1U << CRU_SOFTRST_CON00_NCOREPORESET3_SHIFT)              /* 0x00000008 */
#define CRU_SOFTRST_CON00_NCORESET0_SHIFT                  (4U)
#define CRU_SOFTRST_CON00_NCORESET0_MASK                   (0x1U << CRU_SOFTRST_CON00_NCORESET0_SHIFT)                  /* 0x00000010 */
#define CRU_SOFTRST_CON00_NCORESET1_SHIFT                  (5U)
#define CRU_SOFTRST_CON00_NCORESET1_MASK                   (0x1U << CRU_SOFTRST_CON00_NCORESET1_SHIFT)                  /* 0x00000020 */
#define CRU_SOFTRST_CON00_NCORESET2_SHIFT                  (6U)
#define CRU_SOFTRST_CON00_NCORESET2_MASK                   (0x1U << CRU_SOFTRST_CON00_NCORESET2_SHIFT)                  /* 0x00000040 */
#define CRU_SOFTRST_CON00_NCORESET3_SHIFT                  (7U)
#define CRU_SOFTRST_CON00_NCORESET3_MASK                   (0x1U << CRU_SOFTRST_CON00_NCORESET3_SHIFT)                  /* 0x00000080 */
#define CRU_SOFTRST_CON00_NDBGRESET0_SHIFT                 (8U)
#define CRU_SOFTRST_CON00_NDBGRESET0_MASK                  (0x1U << CRU_SOFTRST_CON00_NDBGRESET0_SHIFT)                 /* 0x00000100 */
#define CRU_SOFTRST_CON00_NDBGRESET1_SHIFT                 (9U)
#define CRU_SOFTRST_CON00_NDBGRESET1_MASK                  (0x1U << CRU_SOFTRST_CON00_NDBGRESET1_SHIFT)                 /* 0x00000200 */
#define CRU_SOFTRST_CON00_NDBGRESET2_SHIFT                 (10U)
#define CRU_SOFTRST_CON00_NDBGRESET2_MASK                  (0x1U << CRU_SOFTRST_CON00_NDBGRESET2_SHIFT)                 /* 0x00000400 */
#define CRU_SOFTRST_CON00_NDBGRESET3_SHIFT                 (11U)
#define CRU_SOFTRST_CON00_NDBGRESET3_MASK                  (0x1U << CRU_SOFTRST_CON00_NDBGRESET3_SHIFT)                 /* 0x00000800 */
#define CRU_SOFTRST_CON00_NL2RESET_SHIFT                   (12U)
#define CRU_SOFTRST_CON00_NL2RESET_MASK                    (0x1U << CRU_SOFTRST_CON00_NL2RESET_SHIFT)                   /* 0x00001000 */
#define CRU_SOFTRST_CON00_ARESETN_CORE_NIU_SHIFT           (13U)
#define CRU_SOFTRST_CON00_ARESETN_CORE_NIU_MASK            (0x1U << CRU_SOFTRST_CON00_ARESETN_CORE_NIU_SHIFT)           /* 0x00002000 */
#define CRU_SOFTRST_CON00_PRESETN_DBG_DAPLITE_SHIFT        (14U)
#define CRU_SOFTRST_CON00_PRESETN_DBG_DAPLITE_MASK         (0x1U << CRU_SOFTRST_CON00_PRESETN_DBG_DAPLITE_SHIFT)        /* 0x00004000 */
#define CRU_SOFTRST_CON00_PRESETN_DAPLITE_SHIFT            (15U)
#define CRU_SOFTRST_CON00_PRESETN_DAPLITE_MASK             (0x1U << CRU_SOFTRST_CON00_PRESETN_DAPLITE_SHIFT)            /* 0x00008000 */
/* SOFTRST_CON01 */
#define CRU_SOFTRST_CON01_OFFSET                           (0x304U)
#define CRU_SOFTRST_CON01_ARESETN_PDBUS_NIU1_SHIFT         (0U)
#define CRU_SOFTRST_CON01_ARESETN_PDBUS_NIU1_MASK          (0x1U << CRU_SOFTRST_CON01_ARESETN_PDBUS_NIU1_SHIFT)         /* 0x00000001 */
#define CRU_SOFTRST_CON01_HRESETN_PDBUS_NIU1_SHIFT         (1U)
#define CRU_SOFTRST_CON01_HRESETN_PDBUS_NIU1_MASK          (0x1U << CRU_SOFTRST_CON01_HRESETN_PDBUS_NIU1_SHIFT)         /* 0x00000002 */
#define CRU_SOFTRST_CON01_PRESETN_PDBUS_NIU1_SHIFT         (2U)
#define CRU_SOFTRST_CON01_PRESETN_PDBUS_NIU1_MASK          (0x1U << CRU_SOFTRST_CON01_PRESETN_PDBUS_NIU1_SHIFT)         /* 0x00000004 */
#define CRU_SOFTRST_CON01_ARESETN_PDBUS_NIU2_SHIFT         (3U)
#define CRU_SOFTRST_CON01_ARESETN_PDBUS_NIU2_MASK          (0x1U << CRU_SOFTRST_CON01_ARESETN_PDBUS_NIU2_SHIFT)         /* 0x00000008 */
#define CRU_SOFTRST_CON01_HRESETN_PDBUS_NIU2_SHIFT         (4U)
#define CRU_SOFTRST_CON01_HRESETN_PDBUS_NIU2_MASK          (0x1U << CRU_SOFTRST_CON01_HRESETN_PDBUS_NIU2_SHIFT)         /* 0x00000010 */
#define CRU_SOFTRST_CON01_ARESETN_PDBUS_NIU3_SHIFT         (5U)
#define CRU_SOFTRST_CON01_ARESETN_PDBUS_NIU3_MASK          (0x1U << CRU_SOFTRST_CON01_ARESETN_PDBUS_NIU3_SHIFT)         /* 0x00000020 */
#define CRU_SOFTRST_CON01_HRESETN_PDBUS_NIU3_SHIFT         (6U)
#define CRU_SOFTRST_CON01_HRESETN_PDBUS_NIU3_MASK          (0x1U << CRU_SOFTRST_CON01_HRESETN_PDBUS_NIU3_SHIFT)         /* 0x00000040 */
#define CRU_SOFTRST_CON01_ARESETN_PDBUS_HOLD_NIU1_SHIFT    (7U)
#define CRU_SOFTRST_CON01_ARESETN_PDBUS_HOLD_NIU1_MASK     (0x1U << CRU_SOFTRST_CON01_ARESETN_PDBUS_HOLD_NIU1_SHIFT)    /* 0x00000080 */
#define CRU_SOFTRST_CON01_PRESETN_DBG_NIU_SHIFT            (8U)
#define CRU_SOFTRST_CON01_PRESETN_DBG_NIU_MASK             (0x1U << CRU_SOFTRST_CON01_PRESETN_DBG_NIU_SHIFT)            /* 0x00000100 */
#define CRU_SOFTRST_CON01_HRESETN_PDCORE_NIU_SHIFT         (9U)
#define CRU_SOFTRST_CON01_HRESETN_PDCORE_NIU_MASK          (0x1U << CRU_SOFTRST_CON01_HRESETN_PDCORE_NIU_SHIFT)         /* 0x00000200 */
#define CRU_SOFTRST_CON01_RESETN_MCU_NIU_SHIFT             (10U)
#define CRU_SOFTRST_CON01_RESETN_MCU_NIU_MASK              (0x1U << CRU_SOFTRST_CON01_RESETN_MCU_NIU_SHIFT)             /* 0x00000400 */
#define CRU_SOFTRST_CON01_ARESETN_DCF_SHIFT                (13U)
#define CRU_SOFTRST_CON01_ARESETN_DCF_MASK                 (0x1U << CRU_SOFTRST_CON01_ARESETN_DCF_SHIFT)                /* 0x00002000 */
#define CRU_SOFTRST_CON01_PRESETN_DCF_SHIFT                (14U)
#define CRU_SOFTRST_CON01_PRESETN_DCF_MASK                 (0x1U << CRU_SOFTRST_CON01_PRESETN_DCF_SHIFT)                /* 0x00004000 */
#define CRU_SOFTRST_CON01_ARESETN_SYSTEM_SRAM_SHIFT        (15U)
#define CRU_SOFTRST_CON01_ARESETN_SYSTEM_SRAM_MASK         (0x1U << CRU_SOFTRST_CON01_ARESETN_SYSTEM_SRAM_SHIFT)        /* 0x00008000 */
/* SOFTRST_CON02 */
#define CRU_SOFTRST_CON02_OFFSET                           (0x308U)
#define CRU_SOFTRST_CON02_PRESETN_I2C1_SHIFT               (0U)
#define CRU_SOFTRST_CON02_PRESETN_I2C1_MASK                (0x1U << CRU_SOFTRST_CON02_PRESETN_I2C1_SHIFT)               /* 0x00000001 */
#define CRU_SOFTRST_CON02_RESETN_I2C1_SHIFT                (1U)
#define CRU_SOFTRST_CON02_RESETN_I2C1_MASK                 (0x1U << CRU_SOFTRST_CON02_RESETN_I2C1_SHIFT)                /* 0x00000002 */
#define CRU_SOFTRST_CON02_PRESETN_I2C3_SHIFT               (2U)
#define CRU_SOFTRST_CON02_PRESETN_I2C3_MASK                (0x1U << CRU_SOFTRST_CON02_PRESETN_I2C3_SHIFT)               /* 0x00000004 */
#define CRU_SOFTRST_CON02_RESETN_I2C3_SHIFT                (3U)
#define CRU_SOFTRST_CON02_RESETN_I2C3_MASK                 (0x1U << CRU_SOFTRST_CON02_RESETN_I2C3_SHIFT)                /* 0x00000008 */
#define CRU_SOFTRST_CON02_PRESETN_I2C4_SHIFT               (4U)
#define CRU_SOFTRST_CON02_PRESETN_I2C4_MASK                (0x1U << CRU_SOFTRST_CON02_PRESETN_I2C4_SHIFT)               /* 0x00000010 */
#define CRU_SOFTRST_CON02_RESETN_I2C4_SHIFT                (5U)
#define CRU_SOFTRST_CON02_RESETN_I2C4_MASK                 (0x1U << CRU_SOFTRST_CON02_RESETN_I2C4_SHIFT)                /* 0x00000020 */
#define CRU_SOFTRST_CON02_PRESETN_I2C5_SHIFT               (6U)
#define CRU_SOFTRST_CON02_PRESETN_I2C5_MASK                (0x1U << CRU_SOFTRST_CON02_PRESETN_I2C5_SHIFT)               /* 0x00000040 */
#define CRU_SOFTRST_CON02_RESETN_I2C5_SHIFT                (7U)
#define CRU_SOFTRST_CON02_RESETN_I2C5_MASK                 (0x1U << CRU_SOFTRST_CON02_RESETN_I2C5_SHIFT)                /* 0x00000080 */
#define CRU_SOFTRST_CON02_PRESETN_SPI1_SHIFT               (8U)
#define CRU_SOFTRST_CON02_PRESETN_SPI1_MASK                (0x1U << CRU_SOFTRST_CON02_PRESETN_SPI1_SHIFT)               /* 0x00000100 */
#define CRU_SOFTRST_CON02_RESETN_SPI1_SHIFT                (9U)
#define CRU_SOFTRST_CON02_RESETN_SPI1_MASK                 (0x1U << CRU_SOFTRST_CON02_RESETN_SPI1_SHIFT)                /* 0x00000200 */
#define CRU_SOFTRST_CON02_RESETN_MCU_CORE_SHIFT            (10U)
#define CRU_SOFTRST_CON02_RESETN_MCU_CORE_MASK             (0x1U << CRU_SOFTRST_CON02_RESETN_MCU_CORE_SHIFT)            /* 0x00000400 */
#define CRU_SOFTRST_CON02_PRESETN_PWM2_SHIFT               (12U)
#define CRU_SOFTRST_CON02_PRESETN_PWM2_MASK                (0x1U << CRU_SOFTRST_CON02_PRESETN_PWM2_SHIFT)               /* 0x00001000 */
#define CRU_SOFTRST_CON02_RESETN_PWM2_SHIFT                (13U)
#define CRU_SOFTRST_CON02_RESETN_PWM2_MASK                 (0x1U << CRU_SOFTRST_CON02_RESETN_PWM2_SHIFT)                /* 0x00002000 */
#define CRU_SOFTRST_CON02_ARESETN_SPINLOCK_SHIFT           (14U)
#define CRU_SOFTRST_CON02_ARESETN_SPINLOCK_MASK            (0x1U << CRU_SOFTRST_CON02_ARESETN_SPINLOCK_SHIFT)           /* 0x00004000 */
/* SOFTRST_CON03 */
#define CRU_SOFTRST_CON03_OFFSET                           (0x30CU)
#define CRU_SOFTRST_CON03_PRESETN_UART0_SHIFT              (0U)
#define CRU_SOFTRST_CON03_PRESETN_UART0_MASK               (0x1U << CRU_SOFTRST_CON03_PRESETN_UART0_SHIFT)              /* 0x00000001 */
#define CRU_SOFTRST_CON03_SRESETN_UART0_SHIFT              (1U)
#define CRU_SOFTRST_CON03_SRESETN_UART0_MASK               (0x1U << CRU_SOFTRST_CON03_SRESETN_UART0_SHIFT)              /* 0x00000002 */
#define CRU_SOFTRST_CON03_PRESETN_UART2_SHIFT              (2U)
#define CRU_SOFTRST_CON03_PRESETN_UART2_MASK               (0x1U << CRU_SOFTRST_CON03_PRESETN_UART2_SHIFT)              /* 0x00000004 */
#define CRU_SOFTRST_CON03_SRESETN_UART2_SHIFT              (3U)
#define CRU_SOFTRST_CON03_SRESETN_UART2_MASK               (0x1U << CRU_SOFTRST_CON03_SRESETN_UART2_SHIFT)              /* 0x00000008 */
#define CRU_SOFTRST_CON03_PRESETN_UART3_SHIFT              (4U)
#define CRU_SOFTRST_CON03_PRESETN_UART3_MASK               (0x1U << CRU_SOFTRST_CON03_PRESETN_UART3_SHIFT)              /* 0x00000010 */
#define CRU_SOFTRST_CON03_SRESETN_UART3_SHIFT              (5U)
#define CRU_SOFTRST_CON03_SRESETN_UART3_MASK               (0x1U << CRU_SOFTRST_CON03_SRESETN_UART3_SHIFT)              /* 0x00000020 */
#define CRU_SOFTRST_CON03_PRESETN_UART4_SHIFT              (6U)
#define CRU_SOFTRST_CON03_PRESETN_UART4_MASK               (0x1U << CRU_SOFTRST_CON03_PRESETN_UART4_SHIFT)              /* 0x00000040 */
#define CRU_SOFTRST_CON03_SRESETN_UART4_SHIFT              (7U)
#define CRU_SOFTRST_CON03_SRESETN_UART4_MASK               (0x1U << CRU_SOFTRST_CON03_SRESETN_UART4_SHIFT)              /* 0x00000080 */
#define CRU_SOFTRST_CON03_PRESETN_UART5_SHIFT              (8U)
#define CRU_SOFTRST_CON03_PRESETN_UART5_MASK               (0x1U << CRU_SOFTRST_CON03_PRESETN_UART5_SHIFT)              /* 0x00000100 */
#define CRU_SOFTRST_CON03_SRESETN_UART5_SHIFT              (9U)
#define CRU_SOFTRST_CON03_SRESETN_UART5_MASK               (0x1U << CRU_SOFTRST_CON03_SRESETN_UART5_SHIFT)              /* 0x00000200 */
#define CRU_SOFTRST_CON03_PRESETN_WDT_SHIFT                (10U)
#define CRU_SOFTRST_CON03_PRESETN_WDT_MASK                 (0x1U << CRU_SOFTRST_CON03_PRESETN_WDT_SHIFT)                /* 0x00000400 */
#define CRU_SOFTRST_CON03_PRESETN_SARADC_SHIFT             (11U)
#define CRU_SOFTRST_CON03_PRESETN_SARADC_MASK              (0x1U << CRU_SOFTRST_CON03_PRESETN_SARADC_SHIFT)             /* 0x00000800 */
#define CRU_SOFTRST_CON03_PRESETN_GRF_SHIFT                (13U)
#define CRU_SOFTRST_CON03_PRESETN_GRF_MASK                 (0x1U << CRU_SOFTRST_CON03_PRESETN_GRF_SHIFT)                /* 0x00002000 */
#define CRU_SOFTRST_CON03_PRESETN_TIMER_SHIFT              (14U)
#define CRU_SOFTRST_CON03_PRESETN_TIMER_MASK               (0x1U << CRU_SOFTRST_CON03_PRESETN_TIMER_SHIFT)              /* 0x00004000 */
#define CRU_SOFTRST_CON03_PRESETN_MAILBOX_SHIFT            (15U)
#define CRU_SOFTRST_CON03_PRESETN_MAILBOX_MASK             (0x1U << CRU_SOFTRST_CON03_PRESETN_MAILBOX_SHIFT)            /* 0x00008000 */
/* SOFTRST_CON04 */
#define CRU_SOFTRST_CON04_OFFSET                           (0x310U)
#define CRU_SOFTRST_CON04_RESETN_TIMER0_SHIFT              (0U)
#define CRU_SOFTRST_CON04_RESETN_TIMER0_MASK               (0x1U << CRU_SOFTRST_CON04_RESETN_TIMER0_SHIFT)              /* 0x00000001 */
#define CRU_SOFTRST_CON04_RESETN_TIMER1_SHIFT              (1U)
#define CRU_SOFTRST_CON04_RESETN_TIMER1_MASK               (0x1U << CRU_SOFTRST_CON04_RESETN_TIMER1_SHIFT)              /* 0x00000002 */
#define CRU_SOFTRST_CON04_RESETN_TIMER2_SHIFT              (2U)
#define CRU_SOFTRST_CON04_RESETN_TIMER2_MASK               (0x1U << CRU_SOFTRST_CON04_RESETN_TIMER2_SHIFT)              /* 0x00000004 */
#define CRU_SOFTRST_CON04_RESETN_TIMER3_SHIFT              (3U)
#define CRU_SOFTRST_CON04_RESETN_TIMER3_MASK               (0x1U << CRU_SOFTRST_CON04_RESETN_TIMER3_SHIFT)              /* 0x00000008 */
#define CRU_SOFTRST_CON04_RESETN_TIMER4_SHIFT              (4U)
#define CRU_SOFTRST_CON04_RESETN_TIMER4_MASK               (0x1U << CRU_SOFTRST_CON04_RESETN_TIMER4_SHIFT)              /* 0x00000010 */
#define CRU_SOFTRST_CON04_RESETN_TIMER5_SHIFT              (5U)
#define CRU_SOFTRST_CON04_RESETN_TIMER5_MASK               (0x1U << CRU_SOFTRST_CON04_RESETN_TIMER5_SHIFT)              /* 0x00000020 */
#define CRU_SOFTRST_CON04_PRESETN_INTMUX_SHIFT             (6U)
#define CRU_SOFTRST_CON04_PRESETN_INTMUX_MASK              (0x1U << CRU_SOFTRST_CON04_PRESETN_INTMUX_SHIFT)             /* 0x00000040 */
#define CRU_SOFTRST_CON04_PRESETN_GPIO1_SHIFT              (8U)
#define CRU_SOFTRST_CON04_PRESETN_GPIO1_MASK               (0x1U << CRU_SOFTRST_CON04_PRESETN_GPIO1_SHIFT)              /* 0x00000100 */
#define CRU_SOFTRST_CON04_DBRESETN_GPIO1_SHIFT             (9U)
#define CRU_SOFTRST_CON04_DBRESETN_GPIO1_MASK              (0x1U << CRU_SOFTRST_CON04_DBRESETN_GPIO1_SHIFT)             /* 0x00000200 */
#define CRU_SOFTRST_CON04_PRESETN_GPIO2_SHIFT              (10U)
#define CRU_SOFTRST_CON04_PRESETN_GPIO2_MASK               (0x1U << CRU_SOFTRST_CON04_PRESETN_GPIO2_SHIFT)              /* 0x00000400 */
#define CRU_SOFTRST_CON04_DBRESETN_GPIO2_SHIFT             (11U)
#define CRU_SOFTRST_CON04_DBRESETN_GPIO2_MASK              (0x1U << CRU_SOFTRST_CON04_DBRESETN_GPIO2_SHIFT)             /* 0x00000800 */
#define CRU_SOFTRST_CON04_PRESETN_GPIO3_SHIFT              (12U)
#define CRU_SOFTRST_CON04_PRESETN_GPIO3_MASK               (0x1U << CRU_SOFTRST_CON04_PRESETN_GPIO3_SHIFT)              /* 0x00001000 */
#define CRU_SOFTRST_CON04_DBRESETN_GPIO3_SHIFT             (13U)
#define CRU_SOFTRST_CON04_DBRESETN_GPIO3_MASK              (0x1U << CRU_SOFTRST_CON04_DBRESETN_GPIO3_SHIFT)             /* 0x00002000 */
#define CRU_SOFTRST_CON04_PRESETN_GPIO4_SHIFT              (14U)
#define CRU_SOFTRST_CON04_PRESETN_GPIO4_MASK               (0x1U << CRU_SOFTRST_CON04_PRESETN_GPIO4_SHIFT)              /* 0x00004000 */
#define CRU_SOFTRST_CON04_DBRESETN_GPIO4_SHIFT             (15U)
#define CRU_SOFTRST_CON04_DBRESETN_GPIO4_MASK              (0x1U << CRU_SOFTRST_CON04_DBRESETN_GPIO4_SHIFT)             /* 0x00008000 */
/* SOFTRST_CON05 */
#define CRU_SOFTRST_CON05_OFFSET                           (0x314U)
#define CRU_SOFTRST_CON05_PRESETN_CAN_SHIFT                (0U)
#define CRU_SOFTRST_CON05_PRESETN_CAN_MASK                 (0x1U << CRU_SOFTRST_CON05_PRESETN_CAN_SHIFT)                /* 0x00000001 */
#define CRU_SOFTRST_CON05_RESETN_CAN_SHIFT                 (1U)
#define CRU_SOFTRST_CON05_RESETN_CAN_MASK                  (0x1U << CRU_SOFTRST_CON05_RESETN_CAN_SHIFT)                 /* 0x00000002 */
#define CRU_SOFTRST_CON05_ARESETN_DECOM_SHIFT              (5U)
#define CRU_SOFTRST_CON05_ARESETN_DECOM_MASK               (0x1U << CRU_SOFTRST_CON05_ARESETN_DECOM_SHIFT)              /* 0x00000020 */
#define CRU_SOFTRST_CON05_PRESETN_DECOM_SHIFT              (6U)
#define CRU_SOFTRST_CON05_PRESETN_DECOM_MASK               (0x1U << CRU_SOFTRST_CON05_PRESETN_DECOM_SHIFT)              /* 0x00000040 */
#define CRU_SOFTRST_CON05_DRESETN_DECOM_SHIFT              (7U)
#define CRU_SOFTRST_CON05_DRESETN_DECOM_MASK               (0x1U << CRU_SOFTRST_CON05_DRESETN_DECOM_SHIFT)              /* 0x00000080 */
#define CRU_SOFTRST_CON05_ARESETN_PDCRYPT_NIU_SHIFT        (8U)
#define CRU_SOFTRST_CON05_ARESETN_PDCRYPT_NIU_MASK         (0x1U << CRU_SOFTRST_CON05_ARESETN_PDCRYPT_NIU_SHIFT)        /* 0x00000100 */
#define CRU_SOFTRST_CON05_HRESETN_PDCRYPT_NIU_SHIFT        (9U)
#define CRU_SOFTRST_CON05_HRESETN_PDCRYPT_NIU_MASK         (0x1U << CRU_SOFTRST_CON05_HRESETN_PDCRYPT_NIU_SHIFT)        /* 0x00000200 */
#define CRU_SOFTRST_CON05_ARESETN_CRYPTO_SHIFT             (10U)
#define CRU_SOFTRST_CON05_ARESETN_CRYPTO_MASK              (0x1U << CRU_SOFTRST_CON05_ARESETN_CRYPTO_SHIFT)             /* 0x00000400 */
#define CRU_SOFTRST_CON05_HRESETN_CRYPTO_SHIFT             (11U)
#define CRU_SOFTRST_CON05_HRESETN_CRYPTO_MASK              (0x1U << CRU_SOFTRST_CON05_HRESETN_CRYPTO_SHIFT)             /* 0x00000800 */
#define CRU_SOFTRST_CON05_RESETN_CRYPTO_CORE_SHIFT         (12U)
#define CRU_SOFTRST_CON05_RESETN_CRYPTO_CORE_MASK          (0x1U << CRU_SOFTRST_CON05_RESETN_CRYPTO_CORE_SHIFT)         /* 0x00001000 */
#define CRU_SOFTRST_CON05_RESETN_CRYPTO_PKA_SHIFT          (13U)
#define CRU_SOFTRST_CON05_RESETN_CRYPTO_PKA_MASK           (0x1U << CRU_SOFTRST_CON05_RESETN_CRYPTO_PKA_SHIFT)          /* 0x00002000 */
#define CRU_SOFTRST_CON05_PRESETN_SGRF_SHIFT               (15U)
#define CRU_SOFTRST_CON05_PRESETN_SGRF_MASK                (0x1U << CRU_SOFTRST_CON05_PRESETN_SGRF_SHIFT)               /* 0x00008000 */
/* SOFTRST_CON06 */
#define CRU_SOFTRST_CON06_OFFSET                           (0x318U)
#define CRU_SOFTRST_CON06_HRESETN_PDAUDIO_NIU_SHIFT        (0U)
#define CRU_SOFTRST_CON06_HRESETN_PDAUDIO_NIU_MASK         (0x1U << CRU_SOFTRST_CON06_HRESETN_PDAUDIO_NIU_SHIFT)        /* 0x00000001 */
#define CRU_SOFTRST_CON06_PRESETN_PDAUDIO_NIU_SHIFT        (1U)
#define CRU_SOFTRST_CON06_PRESETN_PDAUDIO_NIU_MASK         (0x1U << CRU_SOFTRST_CON06_PRESETN_PDAUDIO_NIU_SHIFT)        /* 0x00000002 */
#define CRU_SOFTRST_CON06_HRESETN_I2S0_SHIFT               (2U)
#define CRU_SOFTRST_CON06_HRESETN_I2S0_MASK                (0x1U << CRU_SOFTRST_CON06_HRESETN_I2S0_SHIFT)               /* 0x00000004 */
#define CRU_SOFTRST_CON06_MRESETN_I2S0_TX_SHIFT            (3U)
#define CRU_SOFTRST_CON06_MRESETN_I2S0_TX_MASK             (0x1U << CRU_SOFTRST_CON06_MRESETN_I2S0_TX_SHIFT)            /* 0x00000008 */
#define CRU_SOFTRST_CON06_MRESETN_I2S0_RX_SHIFT            (4U)
#define CRU_SOFTRST_CON06_MRESETN_I2S0_RX_MASK             (0x1U << CRU_SOFTRST_CON06_MRESETN_I2S0_RX_SHIFT)            /* 0x00000010 */
#define CRU_SOFTRST_CON06_HRESETN_I2S1_SHIFT               (5U)
#define CRU_SOFTRST_CON06_HRESETN_I2S1_MASK                (0x1U << CRU_SOFTRST_CON06_HRESETN_I2S1_SHIFT)               /* 0x00000020 */
#define CRU_SOFTRST_CON06_MRESETN_I2S1_SHIFT               (6U)
#define CRU_SOFTRST_CON06_MRESETN_I2S1_MASK                (0x1U << CRU_SOFTRST_CON06_MRESETN_I2S1_SHIFT)               /* 0x00000040 */
#define CRU_SOFTRST_CON06_HRESETN_I2S2_SHIFT               (7U)
#define CRU_SOFTRST_CON06_HRESETN_I2S2_MASK                (0x1U << CRU_SOFTRST_CON06_HRESETN_I2S2_SHIFT)               /* 0x00000080 */
#define CRU_SOFTRST_CON06_MRESETN_I2S2_SHIFT               (8U)
#define CRU_SOFTRST_CON06_MRESETN_I2S2_MASK                (0x1U << CRU_SOFTRST_CON06_MRESETN_I2S2_SHIFT)               /* 0x00000100 */
#define CRU_SOFTRST_CON06_HRESETN_PDM_SHIFT                (9U)
#define CRU_SOFTRST_CON06_HRESETN_PDM_MASK                 (0x1U << CRU_SOFTRST_CON06_HRESETN_PDM_SHIFT)                /* 0x00000200 */
#define CRU_SOFTRST_CON06_MRESETN_PDM_SHIFT                (10U)
#define CRU_SOFTRST_CON06_MRESETN_PDM_MASK                 (0x1U << CRU_SOFTRST_CON06_MRESETN_PDM_SHIFT)                /* 0x00000400 */
#define CRU_SOFTRST_CON06_HRESETN_AUDPWM_SHIFT             (11U)
#define CRU_SOFTRST_CON06_HRESETN_AUDPWM_MASK              (0x1U << CRU_SOFTRST_CON06_HRESETN_AUDPWM_SHIFT)             /* 0x00000800 */
#define CRU_SOFTRST_CON06_SRESETN_AUDPWM_SHIFT             (12U)
#define CRU_SOFTRST_CON06_SRESETN_AUDPWM_MASK              (0x1U << CRU_SOFTRST_CON06_SRESETN_AUDPWM_SHIFT)             /* 0x00001000 */
#define CRU_SOFTRST_CON06_PRESETN_ACDCDIG_SHIFT            (13U)
#define CRU_SOFTRST_CON06_PRESETN_ACDCDIG_MASK             (0x1U << CRU_SOFTRST_CON06_PRESETN_ACDCDIG_SHIFT)            /* 0x00002000 */
#define CRU_SOFTRST_CON06_RESETN_ACDCDIG_SHIFT             (14U)
#define CRU_SOFTRST_CON06_RESETN_ACDCDIG_MASK              (0x1U << CRU_SOFTRST_CON06_RESETN_ACDCDIG_SHIFT)             /* 0x00004000 */
/* SOFTRST_CON07 */
#define CRU_SOFTRST_CON07_OFFSET                           (0x31CU)
#define CRU_SOFTRST_CON07_ARESETN_PDVEPU_NIU_SHIFT         (0U)
#define CRU_SOFTRST_CON07_ARESETN_PDVEPU_NIU_MASK          (0x1U << CRU_SOFTRST_CON07_ARESETN_PDVEPU_NIU_SHIFT)         /* 0x00000001 */
#define CRU_SOFTRST_CON07_HRESETN_PDVEPU_NIU_SHIFT         (1U)
#define CRU_SOFTRST_CON07_HRESETN_PDVEPU_NIU_MASK          (0x1U << CRU_SOFTRST_CON07_HRESETN_PDVEPU_NIU_SHIFT)         /* 0x00000002 */
#define CRU_SOFTRST_CON07_ARESETN_VENC_SHIFT               (2U)
#define CRU_SOFTRST_CON07_ARESETN_VENC_MASK                (0x1U << CRU_SOFTRST_CON07_ARESETN_VENC_SHIFT)               /* 0x00000004 */
#define CRU_SOFTRST_CON07_HRESETN_VENC_SHIFT               (3U)
#define CRU_SOFTRST_CON07_HRESETN_VENC_MASK                (0x1U << CRU_SOFTRST_CON07_HRESETN_VENC_SHIFT)               /* 0x00000008 */
#define CRU_SOFTRST_CON07_RESETN_VENC_CORE_SHIFT           (4U)
#define CRU_SOFTRST_CON07_RESETN_VENC_CORE_MASK            (0x1U << CRU_SOFTRST_CON07_RESETN_VENC_CORE_SHIFT)           /* 0x00000010 */
#define CRU_SOFTRST_CON07_ARESETN_PDVDEC_NIU_SHIFT         (5U)
#define CRU_SOFTRST_CON07_ARESETN_PDVDEC_NIU_MASK          (0x1U << CRU_SOFTRST_CON07_ARESETN_PDVDEC_NIU_SHIFT)         /* 0x00000020 */
#define CRU_SOFTRST_CON07_HRESETN_PDVDEC_NIU_SHIFT         (6U)
#define CRU_SOFTRST_CON07_HRESETN_PDVDEC_NIU_MASK          (0x1U << CRU_SOFTRST_CON07_HRESETN_PDVDEC_NIU_SHIFT)         /* 0x00000040 */
#define CRU_SOFTRST_CON07_ARESETN_VDEC_SHIFT               (7U)
#define CRU_SOFTRST_CON07_ARESETN_VDEC_MASK                (0x1U << CRU_SOFTRST_CON07_ARESETN_VDEC_SHIFT)               /* 0x00000080 */
#define CRU_SOFTRST_CON07_HRESETN_VDEC_SHIFT               (8U)
#define CRU_SOFTRST_CON07_HRESETN_VDEC_MASK                (0x1U << CRU_SOFTRST_CON07_HRESETN_VDEC_SHIFT)               /* 0x00000100 */
#define CRU_SOFTRST_CON07_RESETN_VDEC_CORE_SHIFT           (9U)
#define CRU_SOFTRST_CON07_RESETN_VDEC_CORE_MASK            (0x1U << CRU_SOFTRST_CON07_RESETN_VDEC_CORE_SHIFT)           /* 0x00000200 */
#define CRU_SOFTRST_CON07_RESETN_VDEC_CA_SHIFT             (10U)
#define CRU_SOFTRST_CON07_RESETN_VDEC_CA_MASK              (0x1U << CRU_SOFTRST_CON07_RESETN_VDEC_CA_SHIFT)             /* 0x00000400 */
#define CRU_SOFTRST_CON07_RESETN_VDEC_HEVC_CA_SHIFT        (11U)
#define CRU_SOFTRST_CON07_RESETN_VDEC_HEVC_CA_MASK         (0x1U << CRU_SOFTRST_CON07_RESETN_VDEC_HEVC_CA_SHIFT)        /* 0x00000800 */
#define CRU_SOFTRST_CON07_ARESETN_PDJPEG_NIU_SHIFT         (12U)
#define CRU_SOFTRST_CON07_ARESETN_PDJPEG_NIU_MASK          (0x1U << CRU_SOFTRST_CON07_ARESETN_PDJPEG_NIU_SHIFT)         /* 0x00001000 */
#define CRU_SOFTRST_CON07_HRESETN_PDJPEG_NIU_SHIFT         (13U)
#define CRU_SOFTRST_CON07_HRESETN_PDJPEG_NIU_MASK          (0x1U << CRU_SOFTRST_CON07_HRESETN_PDJPEG_NIU_SHIFT)         /* 0x00002000 */
#define CRU_SOFTRST_CON07_ARESETN_JPEG_SHIFT               (14U)
#define CRU_SOFTRST_CON07_ARESETN_JPEG_MASK                (0x1U << CRU_SOFTRST_CON07_ARESETN_JPEG_SHIFT)               /* 0x00004000 */
#define CRU_SOFTRST_CON07_HRESETN_JPEG_SHIFT               (15U)
#define CRU_SOFTRST_CON07_HRESETN_JPEG_MASK                (0x1U << CRU_SOFTRST_CON07_HRESETN_JPEG_SHIFT)               /* 0x00008000 */
/* SOFTRST_CON08 */
#define CRU_SOFTRST_CON08_OFFSET                           (0x320U)
#define CRU_SOFTRST_CON08_ARESETN_PDVO_NIU_SHIFT           (0U)
#define CRU_SOFTRST_CON08_ARESETN_PDVO_NIU_MASK            (0x1U << CRU_SOFTRST_CON08_ARESETN_PDVO_NIU_SHIFT)           /* 0x00000001 */
#define CRU_SOFTRST_CON08_HRESETN_PDVO_NIU_SHIFT           (1U)
#define CRU_SOFTRST_CON08_HRESETN_PDVO_NIU_MASK            (0x1U << CRU_SOFTRST_CON08_HRESETN_PDVO_NIU_SHIFT)           /* 0x00000002 */
#define CRU_SOFTRST_CON08_PRESETN_PDVO_NIU_SHIFT           (2U)
#define CRU_SOFTRST_CON08_PRESETN_PDVO_NIU_MASK            (0x1U << CRU_SOFTRST_CON08_PRESETN_PDVO_NIU_SHIFT)           /* 0x00000004 */
#define CRU_SOFTRST_CON08_ARESETN_RGA_SHIFT                (3U)
#define CRU_SOFTRST_CON08_ARESETN_RGA_MASK                 (0x1U << CRU_SOFTRST_CON08_ARESETN_RGA_SHIFT)                /* 0x00000008 */
#define CRU_SOFTRST_CON08_HRESETN_RGA_SHIFT                (4U)
#define CRU_SOFTRST_CON08_HRESETN_RGA_MASK                 (0x1U << CRU_SOFTRST_CON08_HRESETN_RGA_SHIFT)                /* 0x00000010 */
#define CRU_SOFTRST_CON08_RESETN_RGA_CORE_SHIFT            (5U)
#define CRU_SOFTRST_CON08_RESETN_RGA_CORE_MASK             (0x1U << CRU_SOFTRST_CON08_RESETN_RGA_CORE_SHIFT)            /* 0x00000020 */
#define CRU_SOFTRST_CON08_ARESETN_VOP_SHIFT                (6U)
#define CRU_SOFTRST_CON08_ARESETN_VOP_MASK                 (0x1U << CRU_SOFTRST_CON08_ARESETN_VOP_SHIFT)                /* 0x00000040 */
#define CRU_SOFTRST_CON08_HRESETN_VOP_SHIFT                (7U)
#define CRU_SOFTRST_CON08_HRESETN_VOP_MASK                 (0x1U << CRU_SOFTRST_CON08_HRESETN_VOP_SHIFT)                /* 0x00000080 */
#define CRU_SOFTRST_CON08_DRESETN_VOP_SHIFT                (8U)
#define CRU_SOFTRST_CON08_DRESETN_VOP_MASK                 (0x1U << CRU_SOFTRST_CON08_DRESETN_VOP_SHIFT)                /* 0x00000100 */
#define CRU_SOFTRST_CON08_RESETN_TXBYTEHS_DSIHOST_SHIFT    (9U)
#define CRU_SOFTRST_CON08_RESETN_TXBYTEHS_DSIHOST_MASK     (0x1U << CRU_SOFTRST_CON08_RESETN_TXBYTEHS_DSIHOST_SHIFT)    /* 0x00000200 */
#define CRU_SOFTRST_CON08_PRESETN_DSIHOST_SHIFT            (10U)
#define CRU_SOFTRST_CON08_PRESETN_DSIHOST_MASK             (0x1U << CRU_SOFTRST_CON08_PRESETN_DSIHOST_SHIFT)            /* 0x00000400 */
#define CRU_SOFTRST_CON08_ARESETN_IEP_SHIFT                (11U)
#define CRU_SOFTRST_CON08_ARESETN_IEP_MASK                 (0x1U << CRU_SOFTRST_CON08_ARESETN_IEP_SHIFT)                /* 0x00000800 */
#define CRU_SOFTRST_CON08_HRESETN_IEP_SHIFT                (12U)
#define CRU_SOFTRST_CON08_HRESETN_IEP_MASK                 (0x1U << CRU_SOFTRST_CON08_HRESETN_IEP_SHIFT)                /* 0x00001000 */
#define CRU_SOFTRST_CON08_RESETN_IEP_CORE_SHIFT            (13U)
#define CRU_SOFTRST_CON08_RESETN_IEP_CORE_MASK             (0x1U << CRU_SOFTRST_CON08_RESETN_IEP_CORE_SHIFT)            /* 0x00002000 */
#define CRU_SOFTRST_CON08_RXPRESETN_ISP_SHIFT              (14U)
#define CRU_SOFTRST_CON08_RXPRESETN_ISP_MASK               (0x1U << CRU_SOFTRST_CON08_RXPRESETN_ISP_SHIFT)              /* 0x00004000 */
/* SOFTRST_CON09 */
#define CRU_SOFTRST_CON09_OFFSET                           (0x324U)
#define CRU_SOFTRST_CON09_ARESETN_PDVI_NIU_SHIFT           (0U)
#define CRU_SOFTRST_CON09_ARESETN_PDVI_NIU_MASK            (0x1U << CRU_SOFTRST_CON09_ARESETN_PDVI_NIU_SHIFT)           /* 0x00000001 */
#define CRU_SOFTRST_CON09_HRESETN_PDVI_NIU_SHIFT           (1U)
#define CRU_SOFTRST_CON09_HRESETN_PDVI_NIU_MASK            (0x1U << CRU_SOFTRST_CON09_HRESETN_PDVI_NIU_SHIFT)           /* 0x00000002 */
#define CRU_SOFTRST_CON09_PRESETN_PDVI_NIU_SHIFT           (2U)
#define CRU_SOFTRST_CON09_PRESETN_PDVI_NIU_MASK            (0x1U << CRU_SOFTRST_CON09_PRESETN_PDVI_NIU_SHIFT)           /* 0x00000004 */
#define CRU_SOFTRST_CON09_RESETN_ISP_SHIFT                 (3U)
#define CRU_SOFTRST_CON09_RESETN_ISP_MASK                  (0x1U << CRU_SOFTRST_CON09_RESETN_ISP_SHIFT)                 /* 0x00000008 */
#define CRU_SOFTRST_CON09_ARESETN_CIF_SHIFT                (4U)
#define CRU_SOFTRST_CON09_ARESETN_CIF_MASK                 (0x1U << CRU_SOFTRST_CON09_ARESETN_CIF_SHIFT)                /* 0x00000010 */
#define CRU_SOFTRST_CON09_HRESETN_CIF_SHIFT                (5U)
#define CRU_SOFTRST_CON09_HRESETN_CIF_MASK                 (0x1U << CRU_SOFTRST_CON09_HRESETN_CIF_SHIFT)                /* 0x00000020 */
#define CRU_SOFTRST_CON09_DRESETN_CIF_SHIFT                (6U)
#define CRU_SOFTRST_CON09_DRESETN_CIF_MASK                 (0x1U << CRU_SOFTRST_CON09_DRESETN_CIF_SHIFT)                /* 0x00000040 */
#define CRU_SOFTRST_CON09_PRESETN_CIF_SHIFT                (7U)
#define CRU_SOFTRST_CON09_PRESETN_CIF_MASK                 (0x1U << CRU_SOFTRST_CON09_PRESETN_CIF_SHIFT)                /* 0x00000080 */
#define CRU_SOFTRST_CON09_IRESETN_CIF_SHIFT                (8U)
#define CRU_SOFTRST_CON09_IRESETN_CIF_MASK                 (0x1U << CRU_SOFTRST_CON09_IRESETN_CIF_SHIFT)                /* 0x00000100 */
#define CRU_SOFTRST_CON09_RXPRESETN_CIF_SHIFT              (9U)
#define CRU_SOFTRST_CON09_RXPRESETN_CIF_MASK               (0x1U << CRU_SOFTRST_CON09_RXPRESETN_CIF_SHIFT)              /* 0x00000200 */
#define CRU_SOFTRST_CON09_ARESETN_PDISPP_NIU_SHIFT         (10U)
#define CRU_SOFTRST_CON09_ARESETN_PDISPP_NIU_MASK          (0x1U << CRU_SOFTRST_CON09_ARESETN_PDISPP_NIU_SHIFT)         /* 0x00000400 */
#define CRU_SOFTRST_CON09_HRESETN_PDISPP_NIU_SHIFT         (11U)
#define CRU_SOFTRST_CON09_HRESETN_PDISPP_NIU_MASK          (0x1U << CRU_SOFTRST_CON09_HRESETN_PDISPP_NIU_SHIFT)         /* 0x00000800 */
#define CRU_SOFTRST_CON09_ARESETN_ISPP_SHIFT               (12U)
#define CRU_SOFTRST_CON09_ARESETN_ISPP_MASK                (0x1U << CRU_SOFTRST_CON09_ARESETN_ISPP_SHIFT)               /* 0x00001000 */
#define CRU_SOFTRST_CON09_HRESETN_ISPP_SHIFT               (13U)
#define CRU_SOFTRST_CON09_HRESETN_ISPP_MASK                (0x1U << CRU_SOFTRST_CON09_HRESETN_ISPP_SHIFT)               /* 0x00002000 */
#define CRU_SOFTRST_CON09_RESETN_ISPP_SHIFT                (14U)
#define CRU_SOFTRST_CON09_RESETN_ISPP_MASK                 (0x1U << CRU_SOFTRST_CON09_RESETN_ISPP_SHIFT)                /* 0x00004000 */
#define CRU_SOFTRST_CON09_PRESETN_CSIHOST_SHIFT            (15U)
#define CRU_SOFTRST_CON09_PRESETN_CSIHOST_MASK             (0x1U << CRU_SOFTRST_CON09_PRESETN_CSIHOST_SHIFT)            /* 0x00008000 */
/* SOFTRST_CON10 */
#define CRU_SOFTRST_CON10_OFFSET                           (0x328U)
#define CRU_SOFTRST_CON10_ARESETN_PDPHPMID_NIU_SHIFT       (0U)
#define CRU_SOFTRST_CON10_ARESETN_PDPHPMID_NIU_MASK        (0x1U << CRU_SOFTRST_CON10_ARESETN_PDPHPMID_NIU_SHIFT)       /* 0x00000001 */
#define CRU_SOFTRST_CON10_HRESETN_PDPHPMID_NIU_SHIFT       (1U)
#define CRU_SOFTRST_CON10_HRESETN_PDPHPMID_NIU_MASK        (0x1U << CRU_SOFTRST_CON10_HRESETN_PDPHPMID_NIU_SHIFT)       /* 0x00000002 */
#define CRU_SOFTRST_CON10_HRESETN_PDNVM_NIU_SHIFT          (3U)
#define CRU_SOFTRST_CON10_HRESETN_PDNVM_NIU_MASK           (0x1U << CRU_SOFTRST_CON10_HRESETN_PDNVM_NIU_SHIFT)          /* 0x00000008 */
#define CRU_SOFTRST_CON10_HRESETN_SDMMC_SHIFT              (4U)
#define CRU_SOFTRST_CON10_HRESETN_SDMMC_MASK               (0x1U << CRU_SOFTRST_CON10_HRESETN_SDMMC_SHIFT)              /* 0x00000010 */
#define CRU_SOFTRST_CON10_HRESETN_SDIO_SHIFT               (5U)
#define CRU_SOFTRST_CON10_HRESETN_SDIO_MASK                (0x1U << CRU_SOFTRST_CON10_HRESETN_SDIO_SHIFT)               /* 0x00000020 */
#define CRU_SOFTRST_CON10_HRESETN_EMMC_SHIFT               (6U)
#define CRU_SOFTRST_CON10_HRESETN_EMMC_MASK                (0x1U << CRU_SOFTRST_CON10_HRESETN_EMMC_SHIFT)               /* 0x00000040 */
#define CRU_SOFTRST_CON10_HRESETN_SFC_SHIFT                (7U)
#define CRU_SOFTRST_CON10_HRESETN_SFC_MASK                 (0x1U << CRU_SOFTRST_CON10_HRESETN_SFC_SHIFT)                /* 0x00000080 */
#define CRU_SOFTRST_CON10_HRESETN_SFCXIP_SHIFT             (8U)
#define CRU_SOFTRST_CON10_HRESETN_SFCXIP_MASK              (0x1U << CRU_SOFTRST_CON10_HRESETN_SFCXIP_SHIFT)             /* 0x00000100 */
#define CRU_SOFTRST_CON10_SRESETN_SFC_SHIFT                (9U)
#define CRU_SOFTRST_CON10_SRESETN_SFC_MASK                 (0x1U << CRU_SOFTRST_CON10_SRESETN_SFC_SHIFT)                /* 0x00000200 */
#define CRU_SOFTRST_CON10_HRESETN_NANDC_SHIFT              (10U)
#define CRU_SOFTRST_CON10_HRESETN_NANDC_MASK               (0x1U << CRU_SOFTRST_CON10_HRESETN_NANDC_SHIFT)              /* 0x00000400 */
#define CRU_SOFTRST_CON10_NRESETN_NANDC_SHIFT              (11U)
#define CRU_SOFTRST_CON10_NRESETN_NANDC_MASK               (0x1U << CRU_SOFTRST_CON10_NRESETN_NANDC_SHIFT)              /* 0x00000800 */
#define CRU_SOFTRST_CON10_HRESETN_PDSDCARD_NIU_SHIFT       (13U)
#define CRU_SOFTRST_CON10_HRESETN_PDSDCARD_NIU_MASK        (0x1U << CRU_SOFTRST_CON10_HRESETN_PDSDCARD_NIU_SHIFT)       /* 0x00002000 */
#define CRU_SOFTRST_CON10_HRESETN_PDSDIO_NIU_SHIFT         (14U)
#define CRU_SOFTRST_CON10_HRESETN_PDSDIO_NIU_MASK          (0x1U << CRU_SOFTRST_CON10_HRESETN_PDSDIO_NIU_SHIFT)         /* 0x00004000 */
/* SOFTRST_CON11 */
#define CRU_SOFTRST_CON11_OFFSET                           (0x32CU)
#define CRU_SOFTRST_CON11_ARESETN_PDUSB_NIU_SHIFT          (0U)
#define CRU_SOFTRST_CON11_ARESETN_PDUSB_NIU_MASK           (0x1U << CRU_SOFTRST_CON11_ARESETN_PDUSB_NIU_SHIFT)          /* 0x00000001 */
#define CRU_SOFTRST_CON11_HRESETN_PDUSB_NIU_SHIFT          (1U)
#define CRU_SOFTRST_CON11_HRESETN_PDUSB_NIU_MASK           (0x1U << CRU_SOFTRST_CON11_HRESETN_PDUSB_NIU_SHIFT)          /* 0x00000002 */
#define CRU_SOFTRST_CON11_HRESETN_USBHOST_SHIFT            (2U)
#define CRU_SOFTRST_CON11_HRESETN_USBHOST_MASK             (0x1U << CRU_SOFTRST_CON11_HRESETN_USBHOST_SHIFT)            /* 0x00000004 */
#define CRU_SOFTRST_CON11_HRESETN_USBHOST_ARB_SHIFT        (3U)
#define CRU_SOFTRST_CON11_HRESETN_USBHOST_ARB_MASK         (0x1U << CRU_SOFTRST_CON11_HRESETN_USBHOST_ARB_SHIFT)        /* 0x00000008 */
#define CRU_SOFTRST_CON11_RESETN_USBHOST_UTMI_SHIFT        (4U)
#define CRU_SOFTRST_CON11_RESETN_USBHOST_UTMI_MASK         (0x1U << CRU_SOFTRST_CON11_RESETN_USBHOST_UTMI_SHIFT)        /* 0x00000010 */
#define CRU_SOFTRST_CON11_ARESETN_USBOTG_SHIFT             (5U)
#define CRU_SOFTRST_CON11_ARESETN_USBOTG_MASK              (0x1U << CRU_SOFTRST_CON11_ARESETN_USBOTG_SHIFT)             /* 0x00000020 */
#define CRU_SOFTRST_CON11_PRESETN_USBPHY_OTG_SHIFT         (6U)
#define CRU_SOFTRST_CON11_PRESETN_USBPHY_OTG_MASK          (0x1U << CRU_SOFTRST_CON11_PRESETN_USBPHY_OTG_SHIFT)         /* 0x00000040 */
#define CRU_SOFTRST_CON11_PRESETN_USBPHY_HOST_SHIFT        (7U)
#define CRU_SOFTRST_CON11_PRESETN_USBPHY_HOST_MASK         (0x1U << CRU_SOFTRST_CON11_PRESETN_USBPHY_HOST_SHIFT)        /* 0x00000080 */
#define CRU_SOFTRST_CON11_RESETN_USBPHYPOR_OTG_SHIFT       (8U)
#define CRU_SOFTRST_CON11_RESETN_USBPHYPOR_OTG_MASK        (0x1U << CRU_SOFTRST_CON11_RESETN_USBPHYPOR_OTG_SHIFT)       /* 0x00000100 */
#define CRU_SOFTRST_CON11_RESETN_USBPHYPOR_HOST_SHIFT      (9U)
#define CRU_SOFTRST_CON11_RESETN_USBPHYPOR_HOST_MASK       (0x1U << CRU_SOFTRST_CON11_RESETN_USBPHYPOR_HOST_SHIFT)      /* 0x00000200 */
#define CRU_SOFTRST_CON11_ARESETN_PDGMAC_NIU_SHIFT         (12U)
#define CRU_SOFTRST_CON11_ARESETN_PDGMAC_NIU_MASK          (0x1U << CRU_SOFTRST_CON11_ARESETN_PDGMAC_NIU_SHIFT)         /* 0x00001000 */
#define CRU_SOFTRST_CON11_PRESETN_PDGMAC_NIU_SHIFT         (13U)
#define CRU_SOFTRST_CON11_PRESETN_PDGMAC_NIU_MASK          (0x1U << CRU_SOFTRST_CON11_PRESETN_PDGMAC_NIU_SHIFT)         /* 0x00002000 */
#define CRU_SOFTRST_CON11_RESETN_MAC_PTPREF_SHIFT          (14U)
#define CRU_SOFTRST_CON11_RESETN_MAC_PTPREF_MASK           (0x1U << CRU_SOFTRST_CON11_RESETN_MAC_PTPREF_SHIFT)          /* 0x00004000 */
/* SOFTRST_CON12 */
#define CRU_SOFTRST_CON12_OFFSET                           (0x330U)
#define CRU_SOFTRST_CON12_PRESETN_DDR_DFICTL_SHIFT         (1U)
#define CRU_SOFTRST_CON12_PRESETN_DDR_DFICTL_MASK          (0x1U << CRU_SOFTRST_CON12_PRESETN_DDR_DFICTL_SHIFT)         /* 0x00000002 */
#define CRU_SOFTRST_CON12_PRESETN_DDR_MON_SHIFT            (2U)
#define CRU_SOFTRST_CON12_PRESETN_DDR_MON_MASK             (0x1U << CRU_SOFTRST_CON12_PRESETN_DDR_MON_SHIFT)            /* 0x00000004 */
#define CRU_SOFTRST_CON12_PRESETN_DDR_STANDBY_SHIFT        (3U)
#define CRU_SOFTRST_CON12_PRESETN_DDR_STANDBY_MASK         (0x1U << CRU_SOFTRST_CON12_PRESETN_DDR_STANDBY_SHIFT)        /* 0x00000008 */
#define CRU_SOFTRST_CON12_PRESETN_DDR_GRF_SHIFT            (4U)
#define CRU_SOFTRST_CON12_PRESETN_DDR_GRF_MASK             (0x1U << CRU_SOFTRST_CON12_PRESETN_DDR_GRF_SHIFT)            /* 0x00000010 */
#define CRU_SOFTRST_CON12_PRESETN_DDR_MSCH_SHIFT           (5U)
#define CRU_SOFTRST_CON12_PRESETN_DDR_MSCH_MASK            (0x1U << CRU_SOFTRST_CON12_PRESETN_DDR_MSCH_SHIFT)           /* 0x00000020 */
#define CRU_SOFTRST_CON12_ARESETN_DDR_SPLIT_SHIFT          (6U)
#define CRU_SOFTRST_CON12_ARESETN_DDR_SPLIT_MASK           (0x1U << CRU_SOFTRST_CON12_ARESETN_DDR_SPLIT_SHIFT)          /* 0x00000040 */
#define CRU_SOFTRST_CON12_RESETN_DDR_MSCH_SHIFT            (7U)
#define CRU_SOFTRST_CON12_RESETN_DDR_MSCH_MASK             (0x1U << CRU_SOFTRST_CON12_RESETN_DDR_MSCH_SHIFT)            /* 0x00000080 */
#define CRU_SOFTRST_CON12_RESETN_DDR_DFICTL_SHIFT          (10U)
#define CRU_SOFTRST_CON12_RESETN_DDR_DFICTL_MASK           (0x1U << CRU_SOFTRST_CON12_RESETN_DDR_DFICTL_SHIFT)          /* 0x00000400 */
#define CRU_SOFTRST_CON12_RESETN_DDR_STANDBY_SHIFT         (11U)
#define CRU_SOFTRST_CON12_RESETN_DDR_STANDBY_MASK          (0x1U << CRU_SOFTRST_CON12_RESETN_DDR_STANDBY_SHIFT)         /* 0x00000800 */
#define CRU_SOFTRST_CON12_RESETN_NPUMCU_NIU_SHIFT          (13U)
#define CRU_SOFTRST_CON12_RESETN_NPUMCU_NIU_MASK           (0x1U << CRU_SOFTRST_CON12_RESETN_NPUMCU_NIU_SHIFT)          /* 0x00002000 */
#define CRU_SOFTRST_CON12_PRESETN_DDRPHY_SHIFT             (14U)
#define CRU_SOFTRST_CON12_PRESETN_DDRPHY_MASK              (0x1U << CRU_SOFTRST_CON12_PRESETN_DDRPHY_SHIFT)             /* 0x00004000 */
#define CRU_SOFTRST_CON12_RESETN_DDRPHY_SHIFT              (15U)
#define CRU_SOFTRST_CON12_RESETN_DDRPHY_MASK               (0x1U << CRU_SOFTRST_CON12_RESETN_DDRPHY_SHIFT)              /* 0x00008000 */
/* SOFTRST_CON13 */
#define CRU_SOFTRST_CON13_OFFSET                           (0x334U)
#define CRU_SOFTRST_CON13_ARESETN_PDNPU_NIU_SHIFT          (0U)
#define CRU_SOFTRST_CON13_ARESETN_PDNPU_NIU_MASK           (0x1U << CRU_SOFTRST_CON13_ARESETN_PDNPU_NIU_SHIFT)          /* 0x00000001 */
#define CRU_SOFTRST_CON13_HRESETN_PDNPU_NIU_SHIFT          (1U)
#define CRU_SOFTRST_CON13_HRESETN_PDNPU_NIU_MASK           (0x1U << CRU_SOFTRST_CON13_HRESETN_PDNPU_NIU_SHIFT)          /* 0x00000002 */
#define CRU_SOFTRST_CON13_PRESETN_PDNPU_NIU_SHIFT          (2U)
#define CRU_SOFTRST_CON13_PRESETN_PDNPU_NIU_MASK           (0x1U << CRU_SOFTRST_CON13_PRESETN_PDNPU_NIU_SHIFT)          /* 0x00000004 */
#define CRU_SOFTRST_CON13_ARESETN_NPU_SHIFT                (3U)
#define CRU_SOFTRST_CON13_ARESETN_NPU_MASK                 (0x1U << CRU_SOFTRST_CON13_ARESETN_NPU_SHIFT)                /* 0x00000008 */
#define CRU_SOFTRST_CON13_HRESETN_NPU_SHIFT                (4U)
#define CRU_SOFTRST_CON13_HRESETN_NPU_MASK                 (0x1U << CRU_SOFTRST_CON13_HRESETN_NPU_SHIFT)                /* 0x00000010 */
#define CRU_SOFTRST_CON13_RESETN_NPU_SHIFT                 (5U)
#define CRU_SOFTRST_CON13_RESETN_NPU_MASK                  (0x1U << CRU_SOFTRST_CON13_RESETN_NPU_SHIFT)                 /* 0x00000020 */
#define CRU_SOFTRST_CON13_PRESETN_NPUPVTM_SHIFT            (6U)
#define CRU_SOFTRST_CON13_PRESETN_NPUPVTM_MASK             (0x1U << CRU_SOFTRST_CON13_PRESETN_NPUPVTM_SHIFT)            /* 0x00000040 */
#define CRU_SOFTRST_CON13_RESETN_NPUPVTM_SHIFT             (7U)
#define CRU_SOFTRST_CON13_RESETN_NPUPVTM_MASK              (0x1U << CRU_SOFTRST_CON13_RESETN_NPUPVTM_SHIFT)             /* 0x00000080 */
#define CRU_SOFTRST_CON13_PRESETN_NPU_TSADC_SHIFT          (8U)
#define CRU_SOFTRST_CON13_PRESETN_NPU_TSADC_MASK           (0x1U << CRU_SOFTRST_CON13_PRESETN_NPU_TSADC_SHIFT)          /* 0x00000100 */
#define CRU_SOFTRST_CON13_RESETN_NPU_TSADC_SHIFT           (9U)
#define CRU_SOFTRST_CON13_RESETN_NPU_TSADC_MASK            (0x1U << CRU_SOFTRST_CON13_RESETN_NPU_TSADC_SHIFT)           /* 0x00000200 */
#define CRU_SOFTRST_CON13_RESETN_NPU_TSADCPHY_SHIFT        (10U)
#define CRU_SOFTRST_CON13_RESETN_NPU_TSADCPHY_MASK         (0x1U << CRU_SOFTRST_CON13_RESETN_NPU_TSADCPHY_SHIFT)        /* 0x00000400 */
#define CRU_SOFTRST_CON13_ARESETN_CIFLITE_SHIFT            (12U)
#define CRU_SOFTRST_CON13_ARESETN_CIFLITE_MASK             (0x1U << CRU_SOFTRST_CON13_ARESETN_CIFLITE_SHIFT)            /* 0x00001000 */
#define CRU_SOFTRST_CON13_HRESETN_CIFLITE_SHIFT            (13U)
#define CRU_SOFTRST_CON13_HRESETN_CIFLITE_MASK             (0x1U << CRU_SOFTRST_CON13_HRESETN_CIFLITE_SHIFT)            /* 0x00002000 */
#define CRU_SOFTRST_CON13_DRESETN_CIFLITE_SHIFT            (14U)
#define CRU_SOFTRST_CON13_DRESETN_CIFLITE_MASK             (0x1U << CRU_SOFTRST_CON13_DRESETN_CIFLITE_SHIFT)            /* 0x00004000 */
#define CRU_SOFTRST_CON13_RXPRESETN_CIFLITE_SHIFT          (15U)
#define CRU_SOFTRST_CON13_RXPRESETN_CIFLITE_MASK           (0x1U << CRU_SOFTRST_CON13_RXPRESETN_CIFLITE_SHIFT)          /* 0x00008000 */
/* SOFTRST_CON14 */
#define CRU_SOFTRST_CON14_OFFSET                           (0x338U)
#define CRU_SOFTRST_CON14_PRESETN_TOPNIU_SHIFT             (0U)
#define CRU_SOFTRST_CON14_PRESETN_TOPNIU_MASK              (0x1U << CRU_SOFTRST_CON14_PRESETN_TOPNIU_SHIFT)             /* 0x00000001 */
#define CRU_SOFTRST_CON14_PRESETN_TOPCRU_SHIFT             (1U)
#define CRU_SOFTRST_CON14_PRESETN_TOPCRU_MASK              (0x1U << CRU_SOFTRST_CON14_PRESETN_TOPCRU_SHIFT)             /* 0x00000002 */
#define CRU_SOFTRST_CON14_PRESETN_TOPGRF_SHIFT             (2U)
#define CRU_SOFTRST_CON14_PRESETN_TOPGRF_MASK              (0x1U << CRU_SOFTRST_CON14_PRESETN_TOPGRF_SHIFT)             /* 0x00000004 */
#define CRU_SOFTRST_CON14_PRESETN_CPUEMADET_SHIFT          (3U)
#define CRU_SOFTRST_CON14_PRESETN_CPUEMADET_MASK           (0x1U << CRU_SOFTRST_CON14_PRESETN_CPUEMADET_SHIFT)          /* 0x00000008 */
#define CRU_SOFTRST_CON14_PRESETN_CSIPHY0_SHIFT            (4U)
#define CRU_SOFTRST_CON14_PRESETN_CSIPHY0_MASK             (0x1U << CRU_SOFTRST_CON14_PRESETN_CSIPHY0_SHIFT)            /* 0x00000010 */
#define CRU_SOFTRST_CON14_PRESETN_CSIPHY1_SHIFT            (5U)
#define CRU_SOFTRST_CON14_PRESETN_CSIPHY1_MASK             (0x1U << CRU_SOFTRST_CON14_PRESETN_CSIPHY1_SHIFT)            /* 0x00000020 */
#define CRU_SOFTRST_CON14_PRESETN_DSIPHY_SHIFT             (6U)
#define CRU_SOFTRST_CON14_PRESETN_DSIPHY_MASK              (0x1U << CRU_SOFTRST_CON14_PRESETN_DSIPHY_SHIFT)             /* 0x00000040 */
#define CRU_SOFTRST_CON14_PRESETN_CPU_TSADC_SHIFT          (8U)
#define CRU_SOFTRST_CON14_PRESETN_CPU_TSADC_MASK           (0x1U << CRU_SOFTRST_CON14_PRESETN_CPU_TSADC_SHIFT)          /* 0x00000100 */
#define CRU_SOFTRST_CON14_RESETN_CPU_TSADC_SHIFT           (9U)
#define CRU_SOFTRST_CON14_RESETN_CPU_TSADC_MASK            (0x1U << CRU_SOFTRST_CON14_RESETN_CPU_TSADC_SHIFT)           /* 0x00000200 */
#define CRU_SOFTRST_CON14_RESETN_CPU_TSADCPHY_SHIFT        (10U)
#define CRU_SOFTRST_CON14_RESETN_CPU_TSADCPHY_MASK         (0x1U << CRU_SOFTRST_CON14_RESETN_CPU_TSADCPHY_SHIFT)        /* 0x00000400 */
#define CRU_SOFTRST_CON14_PRESETN_CPUPVTM_SHIFT            (11U)
#define CRU_SOFTRST_CON14_PRESETN_CPUPVTM_MASK             (0x1U << CRU_SOFTRST_CON14_PRESETN_CPUPVTM_SHIFT)            /* 0x00000800 */
#define CRU_SOFTRST_CON14_RESETN_CPUPVTM_SHIFT             (12U)
#define CRU_SOFTRST_CON14_RESETN_CPUPVTM_MASK              (0x1U << CRU_SOFTRST_CON14_RESETN_CPUPVTM_SHIFT)             /* 0x00001000 */
/* SSCGTBL_CON0 */
#define CRU_SSCGTBL_CON0_OFFSET                            (0x380U)
#define CRU_SSCGTBL_CON0_SSGTBL0_SHIFT                     (0U)
#define CRU_SSCGTBL_CON0_SSGTBL0_MASK                      (0xFFU << CRU_SSCGTBL_CON0_SSGTBL0_SHIFT)                    /* 0x000000FF */
#define CRU_SSCGTBL_CON0_SSGTBL1_SHIFT                     (8U)
#define CRU_SSCGTBL_CON0_SSGTBL1_MASK                      (0xFFU << CRU_SSCGTBL_CON0_SSGTBL1_SHIFT)                    /* 0x0000FF00 */
#define CRU_SSCGTBL_CON0_SSGTBL2_SHIFT                     (16U)
#define CRU_SSCGTBL_CON0_SSGTBL2_MASK                      (0xFFU << CRU_SSCGTBL_CON0_SSGTBL2_SHIFT)                    /* 0x00FF0000 */
#define CRU_SSCGTBL_CON0_SSGTBL3_SHIFT                     (24U)
#define CRU_SSCGTBL_CON0_SSGTBL3_MASK                      (0xFFU << CRU_SSCGTBL_CON0_SSGTBL3_SHIFT)                    /* 0xFF000000 */
/* SSCGTBL_CON1 */
#define CRU_SSCGTBL_CON1_OFFSET                            (0x384U)
#define CRU_SSCGTBL_CON1_SSGTBL4_SHIFT                     (0U)
#define CRU_SSCGTBL_CON1_SSGTBL4_MASK                      (0xFFU << CRU_SSCGTBL_CON1_SSGTBL4_SHIFT)                    /* 0x000000FF */
#define CRU_SSCGTBL_CON1_SSGTBL5_SHIFT                     (8U)
#define CRU_SSCGTBL_CON1_SSGTBL5_MASK                      (0xFFU << CRU_SSCGTBL_CON1_SSGTBL5_SHIFT)                    /* 0x0000FF00 */
#define CRU_SSCGTBL_CON1_SSGTBL6_SHIFT                     (16U)
#define CRU_SSCGTBL_CON1_SSGTBL6_MASK                      (0xFFU << CRU_SSCGTBL_CON1_SSGTBL6_SHIFT)                    /* 0x00FF0000 */
#define CRU_SSCGTBL_CON1_SSGTBL7_SHIFT                     (24U)
#define CRU_SSCGTBL_CON1_SSGTBL7_MASK                      (0xFFU << CRU_SSCGTBL_CON1_SSGTBL7_SHIFT)                    /* 0xFF000000 */
/* SSCGTBL_CON2 */
#define CRU_SSCGTBL_CON2_OFFSET                            (0x388U)
#define CRU_SSCGTBL_CON2_SSGTBL8_SHIFT                     (0U)
#define CRU_SSCGTBL_CON2_SSGTBL8_MASK                      (0xFFU << CRU_SSCGTBL_CON2_SSGTBL8_SHIFT)                    /* 0x000000FF */
#define CRU_SSCGTBL_CON2_SSGTBL9_SHIFT                     (8U)
#define CRU_SSCGTBL_CON2_SSGTBL9_MASK                      (0xFFU << CRU_SSCGTBL_CON2_SSGTBL9_SHIFT)                    /* 0x0000FF00 */
#define CRU_SSCGTBL_CON2_SSGTBL10_SHIFT                    (16U)
#define CRU_SSCGTBL_CON2_SSGTBL10_MASK                     (0xFFU << CRU_SSCGTBL_CON2_SSGTBL10_SHIFT)                   /* 0x00FF0000 */
#define CRU_SSCGTBL_CON2_SSGTBL11_SHIFT                    (24U)
#define CRU_SSCGTBL_CON2_SSGTBL11_MASK                     (0xFFU << CRU_SSCGTBL_CON2_SSGTBL11_SHIFT)                   /* 0xFF000000 */
/* SSCGTBL_CON3 */
#define CRU_SSCGTBL_CON3_OFFSET                            (0x38CU)
#define CRU_SSCGTBL_CON3_SSGTBL12_SHIFT                    (0U)
#define CRU_SSCGTBL_CON3_SSGTBL12_MASK                     (0xFFU << CRU_SSCGTBL_CON3_SSGTBL12_SHIFT)                   /* 0x000000FF */
#define CRU_SSCGTBL_CON3_SSGTBL13_SHIFT                    (8U)
#define CRU_SSCGTBL_CON3_SSGTBL13_MASK                     (0xFFU << CRU_SSCGTBL_CON3_SSGTBL13_SHIFT)                   /* 0x0000FF00 */
#define CRU_SSCGTBL_CON3_SSGTBL14_SHIFT                    (16U)
#define CRU_SSCGTBL_CON3_SSGTBL14_MASK                     (0xFFU << CRU_SSCGTBL_CON3_SSGTBL14_SHIFT)                   /* 0x00FF0000 */
#define CRU_SSCGTBL_CON3_SSGTBL15_SHIFT                    (24U)
#define CRU_SSCGTBL_CON3_SSGTBL15_MASK                     (0xFFU << CRU_SSCGTBL_CON3_SSGTBL15_SHIFT)                   /* 0xFF000000 */
/* SSCGTBL_CON4 */
#define CRU_SSCGTBL_CON4_OFFSET                            (0x390U)
#define CRU_SSCGTBL_CON4_SSGTBL16_SHIFT                    (0U)
#define CRU_SSCGTBL_CON4_SSGTBL16_MASK                     (0xFFU << CRU_SSCGTBL_CON4_SSGTBL16_SHIFT)                   /* 0x000000FF */
#define CRU_SSCGTBL_CON4_SSGTBL17_SHIFT                    (8U)
#define CRU_SSCGTBL_CON4_SSGTBL17_MASK                     (0xFFU << CRU_SSCGTBL_CON4_SSGTBL17_SHIFT)                   /* 0x0000FF00 */
#define CRU_SSCGTBL_CON4_SSGTBL18_SHIFT                    (16U)
#define CRU_SSCGTBL_CON4_SSGTBL18_MASK                     (0xFFU << CRU_SSCGTBL_CON4_SSGTBL18_SHIFT)                   /* 0x00FF0000 */
#define CRU_SSCGTBL_CON4_SSGTBL19_SHIFT                    (24U)
#define CRU_SSCGTBL_CON4_SSGTBL19_MASK                     (0xFFU << CRU_SSCGTBL_CON4_SSGTBL19_SHIFT)                   /* 0xFF000000 */
/* SSCGTBL_CON5 */
#define CRU_SSCGTBL_CON5_OFFSET                            (0x394U)
#define CRU_SSCGTBL_CON5_SSGTBL20_SHIFT                    (0U)
#define CRU_SSCGTBL_CON5_SSGTBL20_MASK                     (0xFFU << CRU_SSCGTBL_CON5_SSGTBL20_SHIFT)                   /* 0x000000FF */
#define CRU_SSCGTBL_CON5_SSGTBL21_SHIFT                    (8U)
#define CRU_SSCGTBL_CON5_SSGTBL21_MASK                     (0xFFU << CRU_SSCGTBL_CON5_SSGTBL21_SHIFT)                   /* 0x0000FF00 */
#define CRU_SSCGTBL_CON5_SSGTBL22_SHIFT                    (16U)
#define CRU_SSCGTBL_CON5_SSGTBL22_MASK                     (0xFFU << CRU_SSCGTBL_CON5_SSGTBL22_SHIFT)                   /* 0x00FF0000 */
#define CRU_SSCGTBL_CON5_SSGTBL23_SHIFT                    (24U)
#define CRU_SSCGTBL_CON5_SSGTBL23_MASK                     (0xFFU << CRU_SSCGTBL_CON5_SSGTBL23_SHIFT)                   /* 0xFF000000 */
/* SSCGTBL_CON6 */
#define CRU_SSCGTBL_CON6_OFFSET                            (0x398U)
#define CRU_SSCGTBL_CON6_SSGTBL24_SHIFT                    (0U)
#define CRU_SSCGTBL_CON6_SSGTBL24_MASK                     (0xFFU << CRU_SSCGTBL_CON6_SSGTBL24_SHIFT)                   /* 0x000000FF */
#define CRU_SSCGTBL_CON6_SSGTBL25_SHIFT                    (8U)
#define CRU_SSCGTBL_CON6_SSGTBL25_MASK                     (0xFFU << CRU_SSCGTBL_CON6_SSGTBL25_SHIFT)                   /* 0x0000FF00 */
#define CRU_SSCGTBL_CON6_SSGTBL26_SHIFT                    (16U)
#define CRU_SSCGTBL_CON6_SSGTBL26_MASK                     (0xFFU << CRU_SSCGTBL_CON6_SSGTBL26_SHIFT)                   /* 0x00FF0000 */
#define CRU_SSCGTBL_CON6_SSGTBL27_SHIFT                    (24U)
#define CRU_SSCGTBL_CON6_SSGTBL27_MASK                     (0xFFU << CRU_SSCGTBL_CON6_SSGTBL27_SHIFT)                   /* 0xFF000000 */
/* SSCGTBL_CON7 */
#define CRU_SSCGTBL_CON7_OFFSET                            (0x39CU)
#define CRU_SSCGTBL_CON7_SSGTBL28_SHIFT                    (0U)
#define CRU_SSCGTBL_CON7_SSGTBL28_MASK                     (0xFFU << CRU_SSCGTBL_CON7_SSGTBL28_SHIFT)                   /* 0x000000FF */
#define CRU_SSCGTBL_CON7_SSGTBL29_SHIFT                    (8U)
#define CRU_SSCGTBL_CON7_SSGTBL29_MASK                     (0xFFU << CRU_SSCGTBL_CON7_SSGTBL29_SHIFT)                   /* 0x0000FF00 */
#define CRU_SSCGTBL_CON7_SSGTBL30_SHIFT                    (16U)
#define CRU_SSCGTBL_CON7_SSGTBL30_MASK                     (0xFFU << CRU_SSCGTBL_CON7_SSGTBL30_SHIFT)                   /* 0x00FF0000 */
#define CRU_SSCGTBL_CON7_SSGTBL31_SHIFT                    (24U)
#define CRU_SSCGTBL_CON7_SSGTBL31_MASK                     (0xFFU << CRU_SSCGTBL_CON7_SSGTBL31_SHIFT)                   /* 0xFF000000 */
/* SSCGTBL_CON8 */
#define CRU_SSCGTBL_CON8_OFFSET                            (0x3A0U)
#define CRU_SSCGTBL_CON8_SSGTBL32_SHIFT                    (0U)
#define CRU_SSCGTBL_CON8_SSGTBL32_MASK                     (0xFFU << CRU_SSCGTBL_CON8_SSGTBL32_SHIFT)                   /* 0x000000FF */
#define CRU_SSCGTBL_CON8_SSGTBL33_SHIFT                    (8U)
#define CRU_SSCGTBL_CON8_SSGTBL33_MASK                     (0xFFU << CRU_SSCGTBL_CON8_SSGTBL33_SHIFT)                   /* 0x0000FF00 */
#define CRU_SSCGTBL_CON8_SSGTBL34_SHIFT                    (16U)
#define CRU_SSCGTBL_CON8_SSGTBL34_MASK                     (0xFFU << CRU_SSCGTBL_CON8_SSGTBL34_SHIFT)                   /* 0x00FF0000 */
#define CRU_SSCGTBL_CON8_SSGTBL35_SHIFT                    (24U)
#define CRU_SSCGTBL_CON8_SSGTBL35_MASK                     (0xFFU << CRU_SSCGTBL_CON8_SSGTBL35_SHIFT)                   /* 0xFF000000 */
/* SSCGTBL_CON9 */
#define CRU_SSCGTBL_CON9_OFFSET                            (0x3A4U)
#define CRU_SSCGTBL_CON9_SSGTBL36_SHIFT                    (0U)
#define CRU_SSCGTBL_CON9_SSGTBL36_MASK                     (0xFFU << CRU_SSCGTBL_CON9_SSGTBL36_SHIFT)                   /* 0x000000FF */
#define CRU_SSCGTBL_CON9_SSGTBL37_SHIFT                    (8U)
#define CRU_SSCGTBL_CON9_SSGTBL37_MASK                     (0xFFU << CRU_SSCGTBL_CON9_SSGTBL37_SHIFT)                   /* 0x0000FF00 */
#define CRU_SSCGTBL_CON9_SSGTBL38_SHIFT                    (16U)
#define CRU_SSCGTBL_CON9_SSGTBL38_MASK                     (0xFFU << CRU_SSCGTBL_CON9_SSGTBL38_SHIFT)                   /* 0x00FF0000 */
#define CRU_SSCGTBL_CON9_SSGTBL39_SHIFT                    (24U)
#define CRU_SSCGTBL_CON9_SSGTBL39_MASK                     (0xFFU << CRU_SSCGTBL_CON9_SSGTBL39_SHIFT)                   /* 0xFF000000 */
/* SSCGTBL_CON10 */
#define CRU_SSCGTBL_CON10_OFFSET                           (0x3A8U)
#define CRU_SSCGTBL_CON10_SSGTBL40_SHIFT                   (0U)
#define CRU_SSCGTBL_CON10_SSGTBL40_MASK                    (0xFFU << CRU_SSCGTBL_CON10_SSGTBL40_SHIFT)                  /* 0x000000FF */
#define CRU_SSCGTBL_CON10_SSGTBL41_SHIFT                   (8U)
#define CRU_SSCGTBL_CON10_SSGTBL41_MASK                    (0xFFU << CRU_SSCGTBL_CON10_SSGTBL41_SHIFT)                  /* 0x0000FF00 */
#define CRU_SSCGTBL_CON10_SSGTBL42_SHIFT                   (16U)
#define CRU_SSCGTBL_CON10_SSGTBL42_MASK                    (0xFFU << CRU_SSCGTBL_CON10_SSGTBL42_SHIFT)                  /* 0x00FF0000 */
#define CRU_SSCGTBL_CON10_SSGTBL43_SHIFT                   (24U)
#define CRU_SSCGTBL_CON10_SSGTBL43_MASK                    (0xFFU << CRU_SSCGTBL_CON10_SSGTBL43_SHIFT)                  /* 0xFF000000 */
/* SSCGTBL_CON11 */
#define CRU_SSCGTBL_CON11_OFFSET                           (0x3ACU)
#define CRU_SSCGTBL_CON11_SSGTBL44_SHIFT                   (0U)
#define CRU_SSCGTBL_CON11_SSGTBL44_MASK                    (0xFFU << CRU_SSCGTBL_CON11_SSGTBL44_SHIFT)                  /* 0x000000FF */
#define CRU_SSCGTBL_CON11_SSGTBL45_SHIFT                   (8U)
#define CRU_SSCGTBL_CON11_SSGTBL45_MASK                    (0xFFU << CRU_SSCGTBL_CON11_SSGTBL45_SHIFT)                  /* 0x0000FF00 */
#define CRU_SSCGTBL_CON11_SSGTBL46_SHIFT                   (16U)
#define CRU_SSCGTBL_CON11_SSGTBL46_MASK                    (0xFFU << CRU_SSCGTBL_CON11_SSGTBL46_SHIFT)                  /* 0x00FF0000 */
#define CRU_SSCGTBL_CON11_SSGTBL47_SHIFT                   (24U)
#define CRU_SSCGTBL_CON11_SSGTBL47_MASK                    (0xFFU << CRU_SSCGTBL_CON11_SSGTBL47_SHIFT)                  /* 0xFF000000 */
/* SSCGTBL_CON12 */
#define CRU_SSCGTBL_CON12_OFFSET                           (0x3B0U)
#define CRU_SSCGTBL_CON12_SSGTBL48_SHIFT                   (0U)
#define CRU_SSCGTBL_CON12_SSGTBL48_MASK                    (0xFFU << CRU_SSCGTBL_CON12_SSGTBL48_SHIFT)                  /* 0x000000FF */
#define CRU_SSCGTBL_CON12_SSGTBL49_SHIFT                   (8U)
#define CRU_SSCGTBL_CON12_SSGTBL49_MASK                    (0xFFU << CRU_SSCGTBL_CON12_SSGTBL49_SHIFT)                  /* 0x0000FF00 */
#define CRU_SSCGTBL_CON12_SSGTBL50_SHIFT                   (16U)
#define CRU_SSCGTBL_CON12_SSGTBL50_MASK                    (0xFFU << CRU_SSCGTBL_CON12_SSGTBL50_SHIFT)                  /* 0x00FF0000 */
#define CRU_SSCGTBL_CON12_SSGTBL51_SHIFT                   (24U)
#define CRU_SSCGTBL_CON12_SSGTBL51_MASK                    (0xFFU << CRU_SSCGTBL_CON12_SSGTBL51_SHIFT)                  /* 0xFF000000 */
/* SSCGTBL_CON13 */
#define CRU_SSCGTBL_CON13_OFFSET                           (0x3B4U)
#define CRU_SSCGTBL_CON13_SSGTBL52_SHIFT                   (0U)
#define CRU_SSCGTBL_CON13_SSGTBL52_MASK                    (0xFFU << CRU_SSCGTBL_CON13_SSGTBL52_SHIFT)                  /* 0x000000FF */
#define CRU_SSCGTBL_CON13_SSGTBL53_SHIFT                   (8U)
#define CRU_SSCGTBL_CON13_SSGTBL53_MASK                    (0xFFU << CRU_SSCGTBL_CON13_SSGTBL53_SHIFT)                  /* 0x0000FF00 */
#define CRU_SSCGTBL_CON13_SSGTBL54_SHIFT                   (16U)
#define CRU_SSCGTBL_CON13_SSGTBL54_MASK                    (0xFFU << CRU_SSCGTBL_CON13_SSGTBL54_SHIFT)                  /* 0x00FF0000 */
#define CRU_SSCGTBL_CON13_SSGTBL55_SHIFT                   (24U)
#define CRU_SSCGTBL_CON13_SSGTBL55_MASK                    (0xFFU << CRU_SSCGTBL_CON13_SSGTBL55_SHIFT)                  /* 0xFF000000 */
/* SSCGTBL_CON14 */
#define CRU_SSCGTBL_CON14_OFFSET                           (0x3B8U)
#define CRU_SSCGTBL_CON14_SSGTBL56_SHIFT                   (0U)
#define CRU_SSCGTBL_CON14_SSGTBL56_MASK                    (0xFFU << CRU_SSCGTBL_CON14_SSGTBL56_SHIFT)                  /* 0x000000FF */
#define CRU_SSCGTBL_CON14_SSGTBL57_SHIFT                   (8U)
#define CRU_SSCGTBL_CON14_SSGTBL57_MASK                    (0xFFU << CRU_SSCGTBL_CON14_SSGTBL57_SHIFT)                  /* 0x0000FF00 */
#define CRU_SSCGTBL_CON14_SSGTBL58_SHIFT                   (16U)
#define CRU_SSCGTBL_CON14_SSGTBL58_MASK                    (0xFFU << CRU_SSCGTBL_CON14_SSGTBL58_SHIFT)                  /* 0x00FF0000 */
#define CRU_SSCGTBL_CON14_SSGTBL59_SHIFT                   (24U)
#define CRU_SSCGTBL_CON14_SSGTBL59_MASK                    (0xFFU << CRU_SSCGTBL_CON14_SSGTBL59_SHIFT)                  /* 0xFF000000 */
/* SSCGTBL_CON15 */
#define CRU_SSCGTBL_CON15_OFFSET                           (0x3BCU)
#define CRU_SSCGTBL_CON15_SSGTBL60_SHIFT                   (0U)
#define CRU_SSCGTBL_CON15_SSGTBL60_MASK                    (0xFFU << CRU_SSCGTBL_CON15_SSGTBL60_SHIFT)                  /* 0x000000FF */
#define CRU_SSCGTBL_CON15_SSGTBL61_SHIFT                   (8U)
#define CRU_SSCGTBL_CON15_SSGTBL61_MASK                    (0xFFU << CRU_SSCGTBL_CON15_SSGTBL61_SHIFT)                  /* 0x0000FF00 */
#define CRU_SSCGTBL_CON15_SSGTBL62_SHIFT                   (16U)
#define CRU_SSCGTBL_CON15_SSGTBL62_MASK                    (0xFFU << CRU_SSCGTBL_CON15_SSGTBL62_SHIFT)                  /* 0x00FF0000 */
#define CRU_SSCGTBL_CON15_SSGTBL63_SHIFT                   (24U)
#define CRU_SSCGTBL_CON15_SSGTBL63_MASK                    (0xFFU << CRU_SSCGTBL_CON15_SSGTBL63_SHIFT)                  /* 0xFF000000 */
/* SSCGTBL_CON16 */
#define CRU_SSCGTBL_CON16_OFFSET                           (0x3C0U)
#define CRU_SSCGTBL_CON16_SSGTBL64_SHIFT                   (0U)
#define CRU_SSCGTBL_CON16_SSGTBL64_MASK                    (0xFFU << CRU_SSCGTBL_CON16_SSGTBL64_SHIFT)                  /* 0x000000FF */
#define CRU_SSCGTBL_CON16_SSGTBL65_SHIFT                   (8U)
#define CRU_SSCGTBL_CON16_SSGTBL65_MASK                    (0xFFU << CRU_SSCGTBL_CON16_SSGTBL65_SHIFT)                  /* 0x0000FF00 */
#define CRU_SSCGTBL_CON16_SSGTBL66_SHIFT                   (16U)
#define CRU_SSCGTBL_CON16_SSGTBL66_MASK                    (0xFFU << CRU_SSCGTBL_CON16_SSGTBL66_SHIFT)                  /* 0x00FF0000 */
#define CRU_SSCGTBL_CON16_SSGTBL67_SHIFT                   (24U)
#define CRU_SSCGTBL_CON16_SSGTBL67_MASK                    (0xFFU << CRU_SSCGTBL_CON16_SSGTBL67_SHIFT)                  /* 0xFF000000 */
/* SSCGTBL_CON17 */
#define CRU_SSCGTBL_CON17_OFFSET                           (0x3C4U)
#define CRU_SSCGTBL_CON17_SSGTBL68_SHIFT                   (0U)
#define CRU_SSCGTBL_CON17_SSGTBL68_MASK                    (0xFFU << CRU_SSCGTBL_CON17_SSGTBL68_SHIFT)                  /* 0x000000FF */
#define CRU_SSCGTBL_CON17_SSGTBL69_SHIFT                   (8U)
#define CRU_SSCGTBL_CON17_SSGTBL69_MASK                    (0xFFU << CRU_SSCGTBL_CON17_SSGTBL69_SHIFT)                  /* 0x0000FF00 */
#define CRU_SSCGTBL_CON17_SSGTBL70_SHIFT                   (16U)
#define CRU_SSCGTBL_CON17_SSGTBL70_MASK                    (0xFFU << CRU_SSCGTBL_CON17_SSGTBL70_SHIFT)                  /* 0x00FF0000 */
#define CRU_SSCGTBL_CON17_SSGTBL71_SHIFT                   (24U)
#define CRU_SSCGTBL_CON17_SSGTBL71_MASK                    (0xFFU << CRU_SSCGTBL_CON17_SSGTBL71_SHIFT)                  /* 0xFF000000 */
/* SSCGTBL_CON18 */
#define CRU_SSCGTBL_CON18_OFFSET                           (0x3C8U)
#define CRU_SSCGTBL_CON18_SSGTBL72_SHIFT                   (0U)
#define CRU_SSCGTBL_CON18_SSGTBL72_MASK                    (0xFFU << CRU_SSCGTBL_CON18_SSGTBL72_SHIFT)                  /* 0x000000FF */
#define CRU_SSCGTBL_CON18_SSGTBL73_SHIFT                   (8U)
#define CRU_SSCGTBL_CON18_SSGTBL73_MASK                    (0xFFU << CRU_SSCGTBL_CON18_SSGTBL73_SHIFT)                  /* 0x0000FF00 */
#define CRU_SSCGTBL_CON18_SSGTBL74_SHIFT                   (16U)
#define CRU_SSCGTBL_CON18_SSGTBL74_MASK                    (0xFFU << CRU_SSCGTBL_CON18_SSGTBL74_SHIFT)                  /* 0x00FF0000 */
#define CRU_SSCGTBL_CON18_SSGTBL75_SHIFT                   (24U)
#define CRU_SSCGTBL_CON18_SSGTBL75_MASK                    (0xFFU << CRU_SSCGTBL_CON18_SSGTBL75_SHIFT)                  /* 0xFF000000 */
/* SSCGTBL_CON19 */
#define CRU_SSCGTBL_CON19_OFFSET                           (0x3CCU)
#define CRU_SSCGTBL_CON19_SSGTBL76_SHIFT                   (0U)
#define CRU_SSCGTBL_CON19_SSGTBL76_MASK                    (0xFFU << CRU_SSCGTBL_CON19_SSGTBL76_SHIFT)                  /* 0x000000FF */
#define CRU_SSCGTBL_CON19_SSGTBL77_SHIFT                   (8U)
#define CRU_SSCGTBL_CON19_SSGTBL77_MASK                    (0xFFU << CRU_SSCGTBL_CON19_SSGTBL77_SHIFT)                  /* 0x0000FF00 */
#define CRU_SSCGTBL_CON19_SSGTBL78_SHIFT                   (16U)
#define CRU_SSCGTBL_CON19_SSGTBL78_MASK                    (0xFFU << CRU_SSCGTBL_CON19_SSGTBL78_SHIFT)                  /* 0x00FF0000 */
#define CRU_SSCGTBL_CON19_SSGTBL79_SHIFT                   (24U)
#define CRU_SSCGTBL_CON19_SSGTBL79_MASK                    (0xFFU << CRU_SSCGTBL_CON19_SSGTBL79_SHIFT)                  /* 0xFF000000 */
/* SSCGTBL_CON20 */
#define CRU_SSCGTBL_CON20_OFFSET                           (0x3D0U)
#define CRU_SSCGTBL_CON20_SSGTBL80_SHIFT                   (0U)
#define CRU_SSCGTBL_CON20_SSGTBL80_MASK                    (0xFFU << CRU_SSCGTBL_CON20_SSGTBL80_SHIFT)                  /* 0x000000FF */
#define CRU_SSCGTBL_CON20_SSGTBL81_SHIFT                   (8U)
#define CRU_SSCGTBL_CON20_SSGTBL81_MASK                    (0xFFU << CRU_SSCGTBL_CON20_SSGTBL81_SHIFT)                  /* 0x0000FF00 */
#define CRU_SSCGTBL_CON20_SSGTBL82_SHIFT                   (16U)
#define CRU_SSCGTBL_CON20_SSGTBL82_MASK                    (0xFFU << CRU_SSCGTBL_CON20_SSGTBL82_SHIFT)                  /* 0x00FF0000 */
#define CRU_SSCGTBL_CON20_SSGTBL83_SHIFT                   (24U)
#define CRU_SSCGTBL_CON20_SSGTBL83_MASK                    (0xFFU << CRU_SSCGTBL_CON20_SSGTBL83_SHIFT)                  /* 0xFF000000 */
/* SSCGTBL_CON21 */
#define CRU_SSCGTBL_CON21_OFFSET                           (0x3D4U)
#define CRU_SSCGTBL_CON21_SSGTBL84_SHIFT                   (0U)
#define CRU_SSCGTBL_CON21_SSGTBL84_MASK                    (0xFFU << CRU_SSCGTBL_CON21_SSGTBL84_SHIFT)                  /* 0x000000FF */
#define CRU_SSCGTBL_CON21_SSGTBL85_SHIFT                   (8U)
#define CRU_SSCGTBL_CON21_SSGTBL85_MASK                    (0xFFU << CRU_SSCGTBL_CON21_SSGTBL85_SHIFT)                  /* 0x0000FF00 */
#define CRU_SSCGTBL_CON21_SSGTBL86_SHIFT                   (16U)
#define CRU_SSCGTBL_CON21_SSGTBL86_MASK                    (0xFFU << CRU_SSCGTBL_CON21_SSGTBL86_SHIFT)                  /* 0x00FF0000 */
#define CRU_SSCGTBL_CON21_SSGTBL87_SHIFT                   (24U)
#define CRU_SSCGTBL_CON21_SSGTBL87_MASK                    (0xFFU << CRU_SSCGTBL_CON21_SSGTBL87_SHIFT)                  /* 0xFF000000 */
/* SSCGTBL_CON22 */
#define CRU_SSCGTBL_CON22_OFFSET                           (0x3D8U)
#define CRU_SSCGTBL_CON22_SSGTBL88_SHIFT                   (0U)
#define CRU_SSCGTBL_CON22_SSGTBL88_MASK                    (0xFFU << CRU_SSCGTBL_CON22_SSGTBL88_SHIFT)                  /* 0x000000FF */
#define CRU_SSCGTBL_CON22_SSGTBL89_SHIFT                   (8U)
#define CRU_SSCGTBL_CON22_SSGTBL89_MASK                    (0xFFU << CRU_SSCGTBL_CON22_SSGTBL89_SHIFT)                  /* 0x0000FF00 */
#define CRU_SSCGTBL_CON22_SSGTBL90_SHIFT                   (16U)
#define CRU_SSCGTBL_CON22_SSGTBL90_MASK                    (0xFFU << CRU_SSCGTBL_CON22_SSGTBL90_SHIFT)                  /* 0x00FF0000 */
#define CRU_SSCGTBL_CON22_SSGTBL91_SHIFT                   (24U)
#define CRU_SSCGTBL_CON22_SSGTBL91_MASK                    (0xFFU << CRU_SSCGTBL_CON22_SSGTBL91_SHIFT)                  /* 0xFF000000 */
/* SSCGTBL_CON23 */
#define CRU_SSCGTBL_CON23_OFFSET                           (0x3DCU)
#define CRU_SSCGTBL_CON23_SSGTBL92_SHIFT                   (0U)
#define CRU_SSCGTBL_CON23_SSGTBL92_MASK                    (0xFFU << CRU_SSCGTBL_CON23_SSGTBL92_SHIFT)                  /* 0x000000FF */
#define CRU_SSCGTBL_CON23_SSGTBL93_SHIFT                   (8U)
#define CRU_SSCGTBL_CON23_SSGTBL93_MASK                    (0xFFU << CRU_SSCGTBL_CON23_SSGTBL93_SHIFT)                  /* 0x0000FF00 */
#define CRU_SSCGTBL_CON23_SSGTBL94_SHIFT                   (16U)
#define CRU_SSCGTBL_CON23_SSGTBL94_MASK                    (0xFFU << CRU_SSCGTBL_CON23_SSGTBL94_SHIFT)                  /* 0x00FF0000 */
#define CRU_SSCGTBL_CON23_SSGTBL95_SHIFT                   (24U)
#define CRU_SSCGTBL_CON23_SSGTBL95_MASK                    (0xFFU << CRU_SSCGTBL_CON23_SSGTBL95_SHIFT)                  /* 0xFF000000 */
/* SSCGTBL_CON24 */
#define CRU_SSCGTBL_CON24_OFFSET                           (0x3E0U)
#define CRU_SSCGTBL_CON24_SSGTBL96_SHIFT                   (0U)
#define CRU_SSCGTBL_CON24_SSGTBL96_MASK                    (0xFFU << CRU_SSCGTBL_CON24_SSGTBL96_SHIFT)                  /* 0x000000FF */
#define CRU_SSCGTBL_CON24_SSGTBL97_SHIFT                   (8U)
#define CRU_SSCGTBL_CON24_SSGTBL97_MASK                    (0xFFU << CRU_SSCGTBL_CON24_SSGTBL97_SHIFT)                  /* 0x0000FF00 */
#define CRU_SSCGTBL_CON24_SSGTBL98_SHIFT                   (16U)
#define CRU_SSCGTBL_CON24_SSGTBL98_MASK                    (0xFFU << CRU_SSCGTBL_CON24_SSGTBL98_SHIFT)                  /* 0x00FF0000 */
#define CRU_SSCGTBL_CON24_SSGTBL99_SHIFT                   (24U)
#define CRU_SSCGTBL_CON24_SSGTBL99_MASK                    (0xFFU << CRU_SSCGTBL_CON24_SSGTBL99_SHIFT)                  /* 0xFF000000 */
/* SSCGTBL_CON25 */
#define CRU_SSCGTBL_CON25_OFFSET                           (0x3E4U)
#define CRU_SSCGTBL_CON25_SSGTBL100_SHIFT                  (0U)
#define CRU_SSCGTBL_CON25_SSGTBL100_MASK                   (0xFFU << CRU_SSCGTBL_CON25_SSGTBL100_SHIFT)                 /* 0x000000FF */
#define CRU_SSCGTBL_CON25_SSGTBL101_SHIFT                  (8U)
#define CRU_SSCGTBL_CON25_SSGTBL101_MASK                   (0xFFU << CRU_SSCGTBL_CON25_SSGTBL101_SHIFT)                 /* 0x0000FF00 */
#define CRU_SSCGTBL_CON25_SSGTBL102_SHIFT                  (16U)
#define CRU_SSCGTBL_CON25_SSGTBL102_MASK                   (0xFFU << CRU_SSCGTBL_CON25_SSGTBL102_SHIFT)                 /* 0x00FF0000 */
#define CRU_SSCGTBL_CON25_SSGTBL103_SHIFT                  (24U)
#define CRU_SSCGTBL_CON25_SSGTBL103_MASK                   (0xFFU << CRU_SSCGTBL_CON25_SSGTBL103_SHIFT)                 /* 0xFF000000 */
/* SSCGTBL_CON26 */
#define CRU_SSCGTBL_CON26_OFFSET                           (0x3E8U)
#define CRU_SSCGTBL_CON26_SSGTBL104_SHIFT                  (0U)
#define CRU_SSCGTBL_CON26_SSGTBL104_MASK                   (0xFFU << CRU_SSCGTBL_CON26_SSGTBL104_SHIFT)                 /* 0x000000FF */
#define CRU_SSCGTBL_CON26_SSGTBL105_SHIFT                  (8U)
#define CRU_SSCGTBL_CON26_SSGTBL105_MASK                   (0xFFU << CRU_SSCGTBL_CON26_SSGTBL105_SHIFT)                 /* 0x0000FF00 */
#define CRU_SSCGTBL_CON26_SSGTBL106_SHIFT                  (16U)
#define CRU_SSCGTBL_CON26_SSGTBL106_MASK                   (0xFFU << CRU_SSCGTBL_CON26_SSGTBL106_SHIFT)                 /* 0x00FF0000 */
#define CRU_SSCGTBL_CON26_SSGTBL107_SHIFT                  (24U)
#define CRU_SSCGTBL_CON26_SSGTBL107_MASK                   (0xFFU << CRU_SSCGTBL_CON26_SSGTBL107_SHIFT)                 /* 0xFF000000 */
/* SSCGTBL_CON27 */
#define CRU_SSCGTBL_CON27_OFFSET                           (0x3ECU)
#define CRU_SSCGTBL_CON27_SSGTBL108_SHIFT                  (0U)
#define CRU_SSCGTBL_CON27_SSGTBL108_MASK                   (0xFFU << CRU_SSCGTBL_CON27_SSGTBL108_SHIFT)                 /* 0x000000FF */
#define CRU_SSCGTBL_CON27_SSGTBL109_SHIFT                  (8U)
#define CRU_SSCGTBL_CON27_SSGTBL109_MASK                   (0xFFU << CRU_SSCGTBL_CON27_SSGTBL109_SHIFT)                 /* 0x0000FF00 */
#define CRU_SSCGTBL_CON27_SSGTBL110_SHIFT                  (16U)
#define CRU_SSCGTBL_CON27_SSGTBL110_MASK                   (0xFFU << CRU_SSCGTBL_CON27_SSGTBL110_SHIFT)                 /* 0x00FF0000 */
#define CRU_SSCGTBL_CON27_SSGTBL111_SHIFT                  (24U)
#define CRU_SSCGTBL_CON27_SSGTBL111_MASK                   (0xFFU << CRU_SSCGTBL_CON27_SSGTBL111_SHIFT)                 /* 0xFF000000 */
/* SSCGTBL_CON28 */
#define CRU_SSCGTBL_CON28_OFFSET                           (0x3F0U)
#define CRU_SSCGTBL_CON28_SSGTBL112_SHIFT                  (0U)
#define CRU_SSCGTBL_CON28_SSGTBL112_MASK                   (0xFFU << CRU_SSCGTBL_CON28_SSGTBL112_SHIFT)                 /* 0x000000FF */
#define CRU_SSCGTBL_CON28_SSGTBL113_SHIFT                  (8U)
#define CRU_SSCGTBL_CON28_SSGTBL113_MASK                   (0xFFU << CRU_SSCGTBL_CON28_SSGTBL113_SHIFT)                 /* 0x0000FF00 */
#define CRU_SSCGTBL_CON28_SSGTBL114_SHIFT                  (16U)
#define CRU_SSCGTBL_CON28_SSGTBL114_MASK                   (0xFFU << CRU_SSCGTBL_CON28_SSGTBL114_SHIFT)                 /* 0x00FF0000 */
#define CRU_SSCGTBL_CON28_SSGTBL115_SHIFT                  (24U)
#define CRU_SSCGTBL_CON28_SSGTBL115_MASK                   (0xFFU << CRU_SSCGTBL_CON28_SSGTBL115_SHIFT)                 /* 0xFF000000 */
/* SSCGTBL_CON29 */
#define CRU_SSCGTBL_CON29_OFFSET                           (0x3F4U)
#define CRU_SSCGTBL_CON29_SSGTBL116_SHIFT                  (0U)
#define CRU_SSCGTBL_CON29_SSGTBL116_MASK                   (0xFFU << CRU_SSCGTBL_CON29_SSGTBL116_SHIFT)                 /* 0x000000FF */
#define CRU_SSCGTBL_CON29_SSGTBL117_SHIFT                  (8U)
#define CRU_SSCGTBL_CON29_SSGTBL117_MASK                   (0xFFU << CRU_SSCGTBL_CON29_SSGTBL117_SHIFT)                 /* 0x0000FF00 */
#define CRU_SSCGTBL_CON29_SSGTBL118_SHIFT                  (16U)
#define CRU_SSCGTBL_CON29_SSGTBL118_MASK                   (0xFFU << CRU_SSCGTBL_CON29_SSGTBL118_SHIFT)                 /* 0x00FF0000 */
#define CRU_SSCGTBL_CON29_SSGTBL119_SHIFT                  (24U)
#define CRU_SSCGTBL_CON29_SSGTBL119_MASK                   (0xFFU << CRU_SSCGTBL_CON29_SSGTBL119_SHIFT)                 /* 0xFF000000 */
/* SSCGTBL_CON30 */
#define CRU_SSCGTBL_CON30_OFFSET                           (0x3F8U)
#define CRU_SSCGTBL_CON30_SSGTBL120_SHIFT                  (0U)
#define CRU_SSCGTBL_CON30_SSGTBL120_MASK                   (0xFFU << CRU_SSCGTBL_CON30_SSGTBL120_SHIFT)                 /* 0x000000FF */
#define CRU_SSCGTBL_CON30_SSGTBL121_SHIFT                  (8U)
#define CRU_SSCGTBL_CON30_SSGTBL121_MASK                   (0xFFU << CRU_SSCGTBL_CON30_SSGTBL121_SHIFT)                 /* 0x0000FF00 */
#define CRU_SSCGTBL_CON30_SSGTBL122_SHIFT                  (16U)
#define CRU_SSCGTBL_CON30_SSGTBL122_MASK                   (0xFFU << CRU_SSCGTBL_CON30_SSGTBL122_SHIFT)                 /* 0x00FF0000 */
#define CRU_SSCGTBL_CON30_SSGTBL123_SHIFT                  (24U)
#define CRU_SSCGTBL_CON30_SSGTBL123_MASK                   (0xFFU << CRU_SSCGTBL_CON30_SSGTBL123_SHIFT)                 /* 0xFF000000 */
/* SSCGTBL_CON31 */
#define CRU_SSCGTBL_CON31_OFFSET                           (0x3FCU)
#define CRU_SSCGTBL_CON31_SSGTBL124_SHIFT                  (0U)
#define CRU_SSCGTBL_CON31_SSGTBL124_MASK                   (0xFFU << CRU_SSCGTBL_CON31_SSGTBL124_SHIFT)                 /* 0x000000FF */
#define CRU_SSCGTBL_CON31_SSGTBL125_SHIFT                  (8U)
#define CRU_SSCGTBL_CON31_SSGTBL125_MASK                   (0xFFU << CRU_SSCGTBL_CON31_SSGTBL125_SHIFT)                 /* 0x0000FF00 */
#define CRU_SSCGTBL_CON31_SSGTBL126_SHIFT                  (16U)
#define CRU_SSCGTBL_CON31_SSGTBL126_MASK                   (0xFFU << CRU_SSCGTBL_CON31_SSGTBL126_SHIFT)                 /* 0x00FF0000 */
#define CRU_SSCGTBL_CON31_SSGTBL127_SHIFT                  (24U)
#define CRU_SSCGTBL_CON31_SSGTBL127_MASK                   (0xFFU << CRU_SSCGTBL_CON31_SSGTBL127_SHIFT)                 /* 0xFF000000 */
/* GLB_CNT_TH */
#define CRU_GLB_CNT_TH_OFFSET                              (0x400U)
#define CRU_GLB_CNT_TH_GLOBAL_RESET_COUNTER_THRESHOLD_SHIFT (0U)
#define CRU_GLB_CNT_TH_GLOBAL_RESET_COUNTER_THRESHOLD_MASK (0xFFFFU << CRU_GLB_CNT_TH_GLOBAL_RESET_COUNTER_THRESHOLD_SHIFT) /* 0x0000FFFF */
/* GLB_RST_ST */
#define CRU_GLB_RST_ST_OFFSET                              (0x404U)
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
#define CRU_GLB_RST_ST_WDT_RST_POS_SHIFT                   (6U)
#define CRU_GLB_RST_ST_WDT_RST_POS_MASK                    (0x1U << CRU_GLB_RST_ST_WDT_RST_POS_SHIFT)                   /* 0x00000040 */
/* GLB_SRST_FST_VALUE */
#define CRU_GLB_SRST_FST_VALUE_OFFSET                      (0x408U)
#define CRU_GLB_SRST_FST_VALUE_GLB_SRST_FST_VALUE_SHIFT    (0U)
#define CRU_GLB_SRST_FST_VALUE_GLB_SRST_FST_VALUE_MASK     (0xFFFFU << CRU_GLB_SRST_FST_VALUE_GLB_SRST_FST_VALUE_SHIFT) /* 0x0000FFFF */
/* GLB_SRST_SND_VALUE */
#define CRU_GLB_SRST_SND_VALUE_OFFSET                      (0x40CU)
#define CRU_GLB_SRST_SND_VALUE_GLB_SRST_SND_VALUE_SHIFT    (0U)
#define CRU_GLB_SRST_SND_VALUE_GLB_SRST_SND_VALUE_MASK     (0xFFFFU << CRU_GLB_SRST_SND_VALUE_GLB_SRST_SND_VALUE_SHIFT) /* 0x0000FFFF */
/* GLB_RST_CON */
#define CRU_GLB_RST_CON_OFFSET                             (0x410U)
#define CRU_GLB_RST_CON_TSADC_GLB_SRST_CTRL_SHIFT          (0U)
#define CRU_GLB_RST_CON_TSADC_GLB_SRST_CTRL_MASK           (0x1U << CRU_GLB_RST_CON_TSADC_GLB_SRST_CTRL_SHIFT)          /* 0x00000001 */
#define CRU_GLB_RST_CON_GLB_SRST_CTRL_SHIFT                (2U)
#define CRU_GLB_RST_CON_GLB_SRST_CTRL_MASK                 (0x1U << CRU_GLB_RST_CON_GLB_SRST_CTRL_SHIFT)                /* 0x00000004 */
#define CRU_GLB_RST_CON_GLB_SRST_DIS_SHIFT                 (3U)
#define CRU_GLB_RST_CON_GLB_SRST_DIS_MASK                  (0x1U << CRU_GLB_RST_CON_GLB_SRST_DIS_SHIFT)                 /* 0x00000008 */
#define CRU_GLB_RST_CON_PMU_SRST_WDT_EN_SHIFT              (4U)
#define CRU_GLB_RST_CON_PMU_SRST_WDT_EN_MASK               (0x1U << CRU_GLB_RST_CON_PMU_SRST_WDT_EN_SHIFT)              /* 0x00000010 */
#define CRU_GLB_RST_CON_CRU_WDT_EN_SHIFT                   (8U)
#define CRU_GLB_RST_CON_CRU_WDT_EN_MASK                    (0x1U << CRU_GLB_RST_CON_CRU_WDT_EN_SHIFT)                   /* 0x00000100 */
#define CRU_GLB_RST_CON_CRU_WDT_CON_SHIFT                  (12U)
#define CRU_GLB_RST_CON_CRU_WDT_CON_MASK                   (0x1U << CRU_GLB_RST_CON_CRU_WDT_CON_SHIFT)                  /* 0x00001000 */
/* SDMMC_CON0 */
#define CRU_SDMMC_CON0_OFFSET                              (0x440U)
#define CRU_SDMMC_CON0_INIT_STATE_SHIFT                    (0U)
#define CRU_SDMMC_CON0_INIT_STATE_MASK                     (0x1U << CRU_SDMMC_CON0_INIT_STATE_SHIFT)                    /* 0x00000001 */
#define CRU_SDMMC_CON0_DRV_DEGREE_SHIFT                    (1U)
#define CRU_SDMMC_CON0_DRV_DEGREE_MASK                     (0x3U << CRU_SDMMC_CON0_DRV_DEGREE_SHIFT)                    /* 0x00000006 */
#define CRU_SDMMC_CON0_DRV_DELAYNUM_SHIFT                  (3U)
#define CRU_SDMMC_CON0_DRV_DELAYNUM_MASK                   (0xFFU << CRU_SDMMC_CON0_DRV_DELAYNUM_SHIFT)                 /* 0x000007F8 */
#define CRU_SDMMC_CON0_DRV_SEL_SHIFT                       (11U)
#define CRU_SDMMC_CON0_DRV_SEL_MASK                        (0x1U << CRU_SDMMC_CON0_DRV_SEL_SHIFT)                       /* 0x00000800 */
/* SDMMC_CON1 */
#define CRU_SDMMC_CON1_OFFSET                              (0x444U)
#define CRU_SDMMC_CON1_SMP_DEGREE_SHIFT                    (1U)
#define CRU_SDMMC_CON1_SMP_DEGREE_MASK                     (0x3U << CRU_SDMMC_CON1_SMP_DEGREE_SHIFT)                    /* 0x00000006 */
#define CRU_SDMMC_CON1_SMP_DELAYNUM_SHIFT                  (3U)
#define CRU_SDMMC_CON1_SMP_DELAYNUM_MASK                   (0xFFU << CRU_SDMMC_CON1_SMP_DELAYNUM_SHIFT)                 /* 0x000007F8 */
#define CRU_SDMMC_CON1_SMP_SEL_SHIFT                       (11U)
#define CRU_SDMMC_CON1_SMP_SEL_MASK                        (0x1U << CRU_SDMMC_CON1_SMP_SEL_SHIFT)                       /* 0x00000800 */
/* SDIO_CON0 */
#define CRU_SDIO_CON0_OFFSET                               (0x448U)
#define CRU_SDIO_CON0_INIT_STATE_SHIFT                     (0U)
#define CRU_SDIO_CON0_INIT_STATE_MASK                      (0x1U << CRU_SDIO_CON0_INIT_STATE_SHIFT)                     /* 0x00000001 */
#define CRU_SDIO_CON0_DRV_DEGREE_SHIFT                     (1U)
#define CRU_SDIO_CON0_DRV_DEGREE_MASK                      (0x3U << CRU_SDIO_CON0_DRV_DEGREE_SHIFT)                     /* 0x00000006 */
#define CRU_SDIO_CON0_DRV_DELAYNUM_SHIFT                   (3U)
#define CRU_SDIO_CON0_DRV_DELAYNUM_MASK                    (0xFFU << CRU_SDIO_CON0_DRV_DELAYNUM_SHIFT)                  /* 0x000007F8 */
#define CRU_SDIO_CON0_DRV_SEL_SHIFT                        (11U)
#define CRU_SDIO_CON0_DRV_SEL_MASK                         (0x1U << CRU_SDIO_CON0_DRV_SEL_SHIFT)                        /* 0x00000800 */
/* SDIO_CON1 */
#define CRU_SDIO_CON1_OFFSET                               (0x44CU)
#define CRU_SDIO_CON1_SMP_DEGREE_SHIFT                     (1U)
#define CRU_SDIO_CON1_SMP_DEGREE_MASK                      (0x3U << CRU_SDIO_CON1_SMP_DEGREE_SHIFT)                     /* 0x00000006 */
#define CRU_SDIO_CON1_SMP_DELAYNUM_SHIFT                   (3U)
#define CRU_SDIO_CON1_SMP_DELAYNUM_MASK                    (0xFFU << CRU_SDIO_CON1_SMP_DELAYNUM_SHIFT)                  /* 0x000007F8 */
#define CRU_SDIO_CON1_SMP_SEL_SHIFT                        (11U)
#define CRU_SDIO_CON1_SMP_SEL_MASK                         (0x1U << CRU_SDIO_CON1_SMP_SEL_SHIFT)                        /* 0x00000800 */
/* EMMC_CON0 */
#define CRU_EMMC_CON0_OFFSET                               (0x450U)
#define CRU_EMMC_CON0_INIT_STATE_SHIFT                     (0U)
#define CRU_EMMC_CON0_INIT_STATE_MASK                      (0x1U << CRU_EMMC_CON0_INIT_STATE_SHIFT)                     /* 0x00000001 */
#define CRU_EMMC_CON0_DRV_DEGREE_SHIFT                     (1U)
#define CRU_EMMC_CON0_DRV_DEGREE_MASK                      (0x3U << CRU_EMMC_CON0_DRV_DEGREE_SHIFT)                     /* 0x00000006 */
#define CRU_EMMC_CON0_DRV_DELAYNUM_SHIFT                   (3U)
#define CRU_EMMC_CON0_DRV_DELAYNUM_MASK                    (0xFFU << CRU_EMMC_CON0_DRV_DELAYNUM_SHIFT)                  /* 0x000007F8 */
#define CRU_EMMC_CON0_DRV_SEL_SHIFT                        (11U)
#define CRU_EMMC_CON0_DRV_SEL_MASK                         (0x1U << CRU_EMMC_CON0_DRV_SEL_SHIFT)                        /* 0x00000800 */
/* EMMC_CON1 */
#define CRU_EMMC_CON1_OFFSET                               (0x454U)
#define CRU_EMMC_CON1_SMP_DEGREE_SHIFT                     (1U)
#define CRU_EMMC_CON1_SMP_DEGREE_MASK                      (0x3U << CRU_EMMC_CON1_SMP_DEGREE_SHIFT)                     /* 0x00000006 */
#define CRU_EMMC_CON1_SMP_DELAYNUM_SHIFT                   (3U)
#define CRU_EMMC_CON1_SMP_DELAYNUM_MASK                    (0xFFU << CRU_EMMC_CON1_SMP_DELAYNUM_SHIFT)                  /* 0x000007F8 */
#define CRU_EMMC_CON1_SMP_SEL_SHIFT                        (11U)
#define CRU_EMMC_CON1_SMP_SEL_MASK                         (0x1U << CRU_EMMC_CON1_SMP_SEL_SHIFT)                        /* 0x00000800 */
/* GMAC_CON */
#define CRU_GMAC_CON_OFFSET                                (0x460U)
#define CRU_GMAC_CON_EXT_SEL_M0_SHIFT                      (0U)
#define CRU_GMAC_CON_EXT_SEL_M0_MASK                       (0x1U << CRU_GMAC_CON_EXT_SEL_M0_SHIFT)                      /* 0x00000001 */
#define CRU_GMAC_CON_RMII_CLK_SEL_SHIFT                    (1U)
#define CRU_GMAC_CON_RMII_CLK_SEL_MASK                     (0x1U << CRU_GMAC_CON_RMII_CLK_SEL_SHIFT)                    /* 0x00000002 */
#define CRU_GMAC_CON_MII_TXCLK_SEL_SHIFT                   (2U)
#define CRU_GMAC_CON_MII_TXCLK_SEL_MASK                    (0x3U << CRU_GMAC_CON_MII_TXCLK_SEL_SHIFT)                   /* 0x0000000C */
#define CRU_GMAC_CON_RMII_MODE_SHIFT                       (4U)
#define CRU_GMAC_CON_RMII_MODE_MASK                        (0x1U << CRU_GMAC_CON_RMII_MODE_SHIFT)                       /* 0x00000010 */
#define CRU_GMAC_CON_EXT_SEL_M1_SHIFT                      (5U)
#define CRU_GMAC_CON_EXT_SEL_M1_MASK                       (0x1U << CRU_GMAC_CON_EXT_SEL_M1_SHIFT)                      /* 0x00000020 */
/* MISC_CON0 */
#define CRU_MISC_CON0_OFFSET                               (0x464U)
#define CRU_MISC_CON0_DIS_PD_CORE_DWN_CLK_EN_SHIFT         (0U)
#define CRU_MISC_CON0_DIS_PD_CORE_DWN_CLK_EN_MASK          (0x1U << CRU_MISC_CON0_DIS_PD_CORE_DWN_CLK_EN_SHIFT)         /* 0x00000001 */
#define CRU_MISC_CON0_DIS_PD_DDR_DWN_CLK_EN_SHIFT          (1U)
#define CRU_MISC_CON0_DIS_PD_DDR_DWN_CLK_EN_MASK           (0x1U << CRU_MISC_CON0_DIS_PD_DDR_DWN_CLK_EN_SHIFT)          /* 0x00000002 */
#define CRU_MISC_CON0_DIS_PD_VI_DWN_CLK_EN_SHIFT           (2U)
#define CRU_MISC_CON0_DIS_PD_VI_DWN_CLK_EN_MASK            (0x1U << CRU_MISC_CON0_DIS_PD_VI_DWN_CLK_EN_SHIFT)           /* 0x00000004 */
#define CRU_MISC_CON0_DIS_PD_VO_DWN_CLK_EN_SHIFT           (3U)
#define CRU_MISC_CON0_DIS_PD_VO_DWN_CLK_EN_MASK            (0x1U << CRU_MISC_CON0_DIS_PD_VO_DWN_CLK_EN_SHIFT)           /* 0x00000008 */
#define CRU_MISC_CON0_DIS_PD_ISPP_DWN_CLK_EN_SHIFT         (4U)
#define CRU_MISC_CON0_DIS_PD_ISPP_DWN_CLK_EN_MASK          (0x1U << CRU_MISC_CON0_DIS_PD_ISPP_DWN_CLK_EN_SHIFT)         /* 0x00000010 */
#define CRU_MISC_CON0_DIS_PD_VEPU_DWN_CLK_EN_SHIFT         (5U)
#define CRU_MISC_CON0_DIS_PD_VEPU_DWN_CLK_EN_MASK          (0x1U << CRU_MISC_CON0_DIS_PD_VEPU_DWN_CLK_EN_SHIFT)         /* 0x00000020 */
#define CRU_MISC_CON0_DIS_PD_VDPU_DWN_CLK_EN_SHIFT         (6U)
#define CRU_MISC_CON0_DIS_PD_VDPU_DWN_CLK_EN_MASK          (0x1U << CRU_MISC_CON0_DIS_PD_VDPU_DWN_CLK_EN_SHIFT)         /* 0x00000040 */
#define CRU_MISC_CON0_DIS_PD_NPU_DWN_CLK_EN_SHIFT          (7U)
#define CRU_MISC_CON0_DIS_PD_NPU_DWN_CLK_EN_MASK           (0x1U << CRU_MISC_CON0_DIS_PD_NPU_DWN_CLK_EN_SHIFT)          /* 0x00000080 */
#define CRU_MISC_CON0_DIS_PD_NVM_DWN_CLK_EN_SHIFT          (9U)
#define CRU_MISC_CON0_DIS_PD_NVM_DWN_CLK_EN_MASK           (0x1U << CRU_MISC_CON0_DIS_PD_NVM_DWN_CLK_EN_SHIFT)          /* 0x00000200 */
#define CRU_MISC_CON0_DIS_PD_USB_DWN_CLK_EN_SHIFT          (10U)
#define CRU_MISC_CON0_DIS_PD_USB_DWN_CLK_EN_MASK           (0x1U << CRU_MISC_CON0_DIS_PD_USB_DWN_CLK_EN_SHIFT)          /* 0x00000400 */
#define CRU_MISC_CON0_DIS_PD_CRYPT_DWN_CLK_EN_SHIFT        (12U)
#define CRU_MISC_CON0_DIS_PD_CRYPT_DWN_CLK_EN_MASK         (0x1U << CRU_MISC_CON0_DIS_PD_CRYPT_DWN_CLK_EN_SHIFT)        /* 0x00001000 */
#define CRU_MISC_CON0_DIS_PD_SDIO_DWN_CLK_EN_SHIFT         (14U)
#define CRU_MISC_CON0_DIS_PD_SDIO_DWN_CLK_EN_MASK          (0x1U << CRU_MISC_CON0_DIS_PD_SDIO_DWN_CLK_EN_SHIFT)         /* 0x00004000 */
/* MISC_CON1 */
#define CRU_MISC_CON1_OFFSET                               (0x468U)
#define CRU_MISC_CON1_CORE_SRST_WFIEN_SHIFT                (8U)
#define CRU_MISC_CON1_CORE_SRST_WFIEN_MASK                 (0x1U << CRU_MISC_CON1_CORE_SRST_WFIEN_SHIFT)                /* 0x00000100 */
#define CRU_MISC_CON1_COREPO_SRST_WFIEN_SHIFT              (9U)
#define CRU_MISC_CON1_COREPO_SRST_WFIEN_MASK               (0x1U << CRU_MISC_CON1_COREPO_SRST_WFIEN_SHIFT)              /* 0x00000200 */
/* AUTOCS_CORE_CLK_CON0 */
#define CRU_AUTOCS_CORE_CLK_CON0_OFFSET                    (0x520U)
#define CRU_AUTOCS_CORE_CLK_CON0_IDLE_TH_SHIFT             (0U)
#define CRU_AUTOCS_CORE_CLK_CON0_IDLE_TH_MASK              (0xFFFFU << CRU_AUTOCS_CORE_CLK_CON0_IDLE_TH_SHIFT)          /* 0x0000FFFF */
#define CRU_AUTOCS_CORE_CLK_CON0_WAIT_TH_SHIFT             (16U)
#define CRU_AUTOCS_CORE_CLK_CON0_WAIT_TH_MASK              (0xFFFFU << CRU_AUTOCS_CORE_CLK_CON0_WAIT_TH_SHIFT)          /* 0xFFFF0000 */
/* AUTOCS_CORE_CLK_CON1 */
#define CRU_AUTOCS_CORE_CLK_CON1_OFFSET                    (0x524U)
#define CRU_AUTOCS_CORE_CLK_CON1_ACTIVE_WFIWFE_EN_SHIFT    (0U)
#define CRU_AUTOCS_CORE_CLK_CON1_ACTIVE_WFIWFE_EN_MASK     (0x1U << CRU_AUTOCS_CORE_CLK_CON1_ACTIVE_WFIWFE_EN_SHIFT)    /* 0x00000001 */
#define CRU_AUTOCS_CORE_CLK_CON1_ACTIVE_WFI_EN_SHIFT       (1U)
#define CRU_AUTOCS_CORE_CLK_CON1_ACTIVE_WFI_EN_MASK        (0x1U << CRU_AUTOCS_CORE_CLK_CON1_ACTIVE_WFI_EN_SHIFT)       /* 0x00000002 */
#define CRU_AUTOCS_CORE_CLK_CON1_ACTIVE_WFIL2_EN_SHIFT     (2U)
#define CRU_AUTOCS_CORE_CLK_CON1_ACTIVE_WFIL2_EN_MASK      (0x1U << CRU_AUTOCS_CORE_CLK_CON1_ACTIVE_WFIL2_EN_SHIFT)     /* 0x00000004 */
#define CRU_AUTOCS_CORE_CLK_CON1_ACTIVE_NOCSLV_EN_SHIFT    (3U)
#define CRU_AUTOCS_CORE_CLK_CON1_ACTIVE_NOCSLV_EN_MASK     (0x1U << CRU_AUTOCS_CORE_CLK_CON1_ACTIVE_NOCSLV_EN_SHIFT)    /* 0x00000008 */
#define CRU_AUTOCS_CORE_CLK_CON1_INACTIVE_WFIWFE_EN_SHIFT  (4U)
#define CRU_AUTOCS_CORE_CLK_CON1_INACTIVE_WFIWFE_EN_MASK   (0x1U << CRU_AUTOCS_CORE_CLK_CON1_INACTIVE_WFIWFE_EN_SHIFT)  /* 0x00000010 */
#define CRU_AUTOCS_CORE_CLK_CON1_INACTIVE_WFI_EN_SHIFT     (5U)
#define CRU_AUTOCS_CORE_CLK_CON1_INACTIVE_WFI_EN_MASK      (0x1U << CRU_AUTOCS_CORE_CLK_CON1_INACTIVE_WFI_EN_SHIFT)     /* 0x00000020 */
#define CRU_AUTOCS_CORE_CLK_CON1_INACTIVE_WFIL2_EN_SHIFT   (6U)
#define CRU_AUTOCS_CORE_CLK_CON1_INACTIVE_WFIL2_EN_MASK    (0x1U << CRU_AUTOCS_CORE_CLK_CON1_INACTIVE_WFIL2_EN_SHIFT)   /* 0x00000040 */
#define CRU_AUTOCS_CORE_CLK_CON1_INACTIVE_NOCSLV_EN_SHIFT  (7U)
#define CRU_AUTOCS_CORE_CLK_CON1_INACTIVE_NOCSLV_EN_MASK   (0x1U << CRU_AUTOCS_CORE_CLK_CON1_INACTIVE_NOCSLV_EN_SHIFT)  /* 0x00000080 */
#define CRU_AUTOCS_CORE_CLK_CON1_ACTIVE_FIQIRQ_EN_SHIFT    (8U)
#define CRU_AUTOCS_CORE_CLK_CON1_ACTIVE_FIQIRQ_EN_MASK     (0x1U << CRU_AUTOCS_CORE_CLK_CON1_ACTIVE_FIQIRQ_EN_SHIFT)    /* 0x00000100 */
#define CRU_AUTOCS_CORE_CLK_CON1_AUTOCS_EN_SHIFT           (12U)
#define CRU_AUTOCS_CORE_CLK_CON1_AUTOCS_EN_MASK            (0x1U << CRU_AUTOCS_CORE_CLK_CON1_AUTOCS_EN_SHIFT)           /* 0x00001000 */
#define CRU_AUTOCS_CORE_CLK_CON1_SWITCH_EN_SHIFT           (13U)
#define CRU_AUTOCS_CORE_CLK_CON1_SWITCH_EN_MASK            (0x1U << CRU_AUTOCS_CORE_CLK_CON1_SWITCH_EN_SHIFT)           /* 0x00002000 */
#define CRU_AUTOCS_CORE_CLK_CON1_CLKSEL_CFG_SHIFT          (14U)
#define CRU_AUTOCS_CORE_CLK_CON1_CLKSEL_CFG_MASK           (0x3U << CRU_AUTOCS_CORE_CLK_CON1_CLKSEL_CFG_SHIFT)          /* 0x0000C000 */
/* AUTOCS_BUS_ACLK_CON0 */
#define CRU_AUTOCS_BUS_ACLK_CON0_OFFSET                    (0x528U)
#define CRU_AUTOCS_BUS_ACLK_CON0_IDLE_TH_SHIFT             (0U)
#define CRU_AUTOCS_BUS_ACLK_CON0_IDLE_TH_MASK              (0xFFFFU << CRU_AUTOCS_BUS_ACLK_CON0_IDLE_TH_SHIFT)          /* 0x0000FFFF */
#define CRU_AUTOCS_BUS_ACLK_CON0_WAIT_TH_SHIFT             (16U)
#define CRU_AUTOCS_BUS_ACLK_CON0_WAIT_TH_MASK              (0xFFFFU << CRU_AUTOCS_BUS_ACLK_CON0_WAIT_TH_SHIFT)          /* 0xFFFF0000 */
/* AUTOCS_BUS_ACLK_CON1 */
#define CRU_AUTOCS_BUS_ACLK_CON1_OFFSET                    (0x52CU)
#define CRU_AUTOCS_BUS_ACLK_CON1_ACTIVE_NOCMST_EN_SHIFT    (0U)
#define CRU_AUTOCS_BUS_ACLK_CON1_ACTIVE_NOCMST_EN_MASK     (0x1U << CRU_AUTOCS_BUS_ACLK_CON1_ACTIVE_NOCMST_EN_SHIFT)    /* 0x00000001 */
#define CRU_AUTOCS_BUS_ACLK_CON1_ACTIVE_DCF_EN_SHIFT       (1U)
#define CRU_AUTOCS_BUS_ACLK_CON1_ACTIVE_DCF_EN_MASK        (0x1U << CRU_AUTOCS_BUS_ACLK_CON1_ACTIVE_DCF_EN_SHIFT)       /* 0x00000002 */
#define CRU_AUTOCS_BUS_ACLK_CON1_ACTIVE_DMA_EN_SHIFT       (2U)
#define CRU_AUTOCS_BUS_ACLK_CON1_ACTIVE_DMA_EN_MASK        (0x1U << CRU_AUTOCS_BUS_ACLK_CON1_ACTIVE_DMA_EN_SHIFT)       /* 0x00000004 */
#define CRU_AUTOCS_BUS_ACLK_CON1_ACTIVE_NOCSLV_EN_SHIFT    (3U)
#define CRU_AUTOCS_BUS_ACLK_CON1_ACTIVE_NOCSLV_EN_MASK     (0x1U << CRU_AUTOCS_BUS_ACLK_CON1_ACTIVE_NOCSLV_EN_SHIFT)    /* 0x00000008 */
#define CRU_AUTOCS_BUS_ACLK_CON1_INACTIVE_NOCMST_EN_SHIFT  (4U)
#define CRU_AUTOCS_BUS_ACLK_CON1_INACTIVE_NOCMST_EN_MASK   (0x1U << CRU_AUTOCS_BUS_ACLK_CON1_INACTIVE_NOCMST_EN_SHIFT)  /* 0x00000010 */
#define CRU_AUTOCS_BUS_ACLK_CON1_INACTIVE_DCF_EN_SHIFT     (5U)
#define CRU_AUTOCS_BUS_ACLK_CON1_INACTIVE_DCF_EN_MASK      (0x1U << CRU_AUTOCS_BUS_ACLK_CON1_INACTIVE_DCF_EN_SHIFT)     /* 0x00000020 */
#define CRU_AUTOCS_BUS_ACLK_CON1_INACTIVE_DMA_EN_SHIFT     (6U)
#define CRU_AUTOCS_BUS_ACLK_CON1_INACTIVE_DMA_EN_MASK      (0x1U << CRU_AUTOCS_BUS_ACLK_CON1_INACTIVE_DMA_EN_SHIFT)     /* 0x00000040 */
#define CRU_AUTOCS_BUS_ACLK_CON1_INACTIVE_NOCSLV_EN_SHIFT  (7U)
#define CRU_AUTOCS_BUS_ACLK_CON1_INACTIVE_NOCSLV_EN_MASK   (0x1U << CRU_AUTOCS_BUS_ACLK_CON1_INACTIVE_NOCSLV_EN_SHIFT)  /* 0x00000080 */
#define CRU_AUTOCS_BUS_ACLK_CON1_AUTOCS_EN_SHIFT           (12U)
#define CRU_AUTOCS_BUS_ACLK_CON1_AUTOCS_EN_MASK            (0x1U << CRU_AUTOCS_BUS_ACLK_CON1_AUTOCS_EN_SHIFT)           /* 0x00001000 */
#define CRU_AUTOCS_BUS_ACLK_CON1_SWITCH_EN_SHIFT           (13U)
#define CRU_AUTOCS_BUS_ACLK_CON1_SWITCH_EN_MASK            (0x1U << CRU_AUTOCS_BUS_ACLK_CON1_SWITCH_EN_SHIFT)           /* 0x00002000 */
#define CRU_AUTOCS_BUS_ACLK_CON1_CLKSEL_CFG_SHIFT          (14U)
#define CRU_AUTOCS_BUS_ACLK_CON1_CLKSEL_CFG_MASK           (0x3U << CRU_AUTOCS_BUS_ACLK_CON1_CLKSEL_CFG_SHIFT)          /* 0x0000C000 */
/* AUTOCS_BUS_HCLK_CON0 */
#define CRU_AUTOCS_BUS_HCLK_CON0_OFFSET                    (0x530U)
#define CRU_AUTOCS_BUS_HCLK_CON0_IDLE_TH_SHIFT             (0U)
#define CRU_AUTOCS_BUS_HCLK_CON0_IDLE_TH_MASK              (0xFFFFU << CRU_AUTOCS_BUS_HCLK_CON0_IDLE_TH_SHIFT)          /* 0x0000FFFF */
#define CRU_AUTOCS_BUS_HCLK_CON0_WAIT_TH_SHIFT             (16U)
#define CRU_AUTOCS_BUS_HCLK_CON0_WAIT_TH_MASK              (0xFFFFU << CRU_AUTOCS_BUS_HCLK_CON0_WAIT_TH_SHIFT)          /* 0xFFFF0000 */
/* AUTOCS_BUS_HCLK_CON1 */
#define CRU_AUTOCS_BUS_HCLK_CON1_OFFSET                    (0x534U)
#define CRU_AUTOCS_BUS_HCLK_CON1_ACTIVE_NOCMST_EN_SHIFT    (0U)
#define CRU_AUTOCS_BUS_HCLK_CON1_ACTIVE_NOCMST_EN_MASK     (0x1U << CRU_AUTOCS_BUS_HCLK_CON1_ACTIVE_NOCMST_EN_SHIFT)    /* 0x00000001 */
#define CRU_AUTOCS_BUS_HCLK_CON1_ACTIVE_DCF_EN_SHIFT       (1U)
#define CRU_AUTOCS_BUS_HCLK_CON1_ACTIVE_DCF_EN_MASK        (0x1U << CRU_AUTOCS_BUS_HCLK_CON1_ACTIVE_DCF_EN_SHIFT)       /* 0x00000002 */
#define CRU_AUTOCS_BUS_HCLK_CON1_ACTIVE_DMA_EN_SHIFT       (2U)
#define CRU_AUTOCS_BUS_HCLK_CON1_ACTIVE_DMA_EN_MASK        (0x1U << CRU_AUTOCS_BUS_HCLK_CON1_ACTIVE_DMA_EN_SHIFT)       /* 0x00000004 */
#define CRU_AUTOCS_BUS_HCLK_CON1_ACTIVE_NOCSLV_EN_SHIFT    (3U)
#define CRU_AUTOCS_BUS_HCLK_CON1_ACTIVE_NOCSLV_EN_MASK     (0x1U << CRU_AUTOCS_BUS_HCLK_CON1_ACTIVE_NOCSLV_EN_SHIFT)    /* 0x00000008 */
#define CRU_AUTOCS_BUS_HCLK_CON1_INACTIVE_NOCMST_EN_SHIFT  (4U)
#define CRU_AUTOCS_BUS_HCLK_CON1_INACTIVE_NOCMST_EN_MASK   (0x1U << CRU_AUTOCS_BUS_HCLK_CON1_INACTIVE_NOCMST_EN_SHIFT)  /* 0x00000010 */
#define CRU_AUTOCS_BUS_HCLK_CON1_INACTIVE_DCF_EN_SHIFT     (5U)
#define CRU_AUTOCS_BUS_HCLK_CON1_INACTIVE_DCF_EN_MASK      (0x1U << CRU_AUTOCS_BUS_HCLK_CON1_INACTIVE_DCF_EN_SHIFT)     /* 0x00000020 */
#define CRU_AUTOCS_BUS_HCLK_CON1_INACTIVE_DMA_EN_SHIFT     (6U)
#define CRU_AUTOCS_BUS_HCLK_CON1_INACTIVE_DMA_EN_MASK      (0x1U << CRU_AUTOCS_BUS_HCLK_CON1_INACTIVE_DMA_EN_SHIFT)     /* 0x00000040 */
#define CRU_AUTOCS_BUS_HCLK_CON1_INACTIVE_NOCSLV_EN_SHIFT  (7U)
#define CRU_AUTOCS_BUS_HCLK_CON1_INACTIVE_NOCSLV_EN_MASK   (0x1U << CRU_AUTOCS_BUS_HCLK_CON1_INACTIVE_NOCSLV_EN_SHIFT)  /* 0x00000080 */
#define CRU_AUTOCS_BUS_HCLK_CON1_AUTOCS_EN_SHIFT           (12U)
#define CRU_AUTOCS_BUS_HCLK_CON1_AUTOCS_EN_MASK            (0x1U << CRU_AUTOCS_BUS_HCLK_CON1_AUTOCS_EN_SHIFT)           /* 0x00001000 */
#define CRU_AUTOCS_BUS_HCLK_CON1_SWITCH_EN_SHIFT           (13U)
#define CRU_AUTOCS_BUS_HCLK_CON1_SWITCH_EN_MASK            (0x1U << CRU_AUTOCS_BUS_HCLK_CON1_SWITCH_EN_SHIFT)           /* 0x00002000 */
#define CRU_AUTOCS_BUS_HCLK_CON1_CLKSEL_CFG_SHIFT          (14U)
#define CRU_AUTOCS_BUS_HCLK_CON1_CLKSEL_CFG_MASK           (0x3U << CRU_AUTOCS_BUS_HCLK_CON1_CLKSEL_CFG_SHIFT)          /* 0x0000C000 */
/* AUTOCS_BUS_PCLK_CON0 */
#define CRU_AUTOCS_BUS_PCLK_CON0_OFFSET                    (0x538U)
#define CRU_AUTOCS_BUS_PCLK_CON0_IDLE_TH_SHIFT             (0U)
#define CRU_AUTOCS_BUS_PCLK_CON0_IDLE_TH_MASK              (0xFFFFU << CRU_AUTOCS_BUS_PCLK_CON0_IDLE_TH_SHIFT)          /* 0x0000FFFF */
#define CRU_AUTOCS_BUS_PCLK_CON0_WAIT_TH_SHIFT             (16U)
#define CRU_AUTOCS_BUS_PCLK_CON0_WAIT_TH_MASK              (0xFFFFU << CRU_AUTOCS_BUS_PCLK_CON0_WAIT_TH_SHIFT)          /* 0xFFFF0000 */
/* AUTOCS_BUS_PCLK_CON1 */
#define CRU_AUTOCS_BUS_PCLK_CON1_OFFSET                    (0x53CU)
#define CRU_AUTOCS_BUS_PCLK_CON1_ACTIVE_NOCMST_EN_SHIFT    (0U)
#define CRU_AUTOCS_BUS_PCLK_CON1_ACTIVE_NOCMST_EN_MASK     (0x1U << CRU_AUTOCS_BUS_PCLK_CON1_ACTIVE_NOCMST_EN_SHIFT)    /* 0x00000001 */
#define CRU_AUTOCS_BUS_PCLK_CON1_ACTIVE_DCF_EN_SHIFT       (1U)
#define CRU_AUTOCS_BUS_PCLK_CON1_ACTIVE_DCF_EN_MASK        (0x1U << CRU_AUTOCS_BUS_PCLK_CON1_ACTIVE_DCF_EN_SHIFT)       /* 0x00000002 */
#define CRU_AUTOCS_BUS_PCLK_CON1_ACTIVE_DMA_EN_SHIFT       (2U)
#define CRU_AUTOCS_BUS_PCLK_CON1_ACTIVE_DMA_EN_MASK        (0x1U << CRU_AUTOCS_BUS_PCLK_CON1_ACTIVE_DMA_EN_SHIFT)       /* 0x00000004 */
#define CRU_AUTOCS_BUS_PCLK_CON1_ACTIVE_NOCSLV_EN_SHIFT    (3U)
#define CRU_AUTOCS_BUS_PCLK_CON1_ACTIVE_NOCSLV_EN_MASK     (0x1U << CRU_AUTOCS_BUS_PCLK_CON1_ACTIVE_NOCSLV_EN_SHIFT)    /* 0x00000008 */
#define CRU_AUTOCS_BUS_PCLK_CON1_INACTIVE_NOCMST_EN_SHIFT  (4U)
#define CRU_AUTOCS_BUS_PCLK_CON1_INACTIVE_NOCMST_EN_MASK   (0x1U << CRU_AUTOCS_BUS_PCLK_CON1_INACTIVE_NOCMST_EN_SHIFT)  /* 0x00000010 */
#define CRU_AUTOCS_BUS_PCLK_CON1_INACTIVE_DCF_EN_SHIFT     (5U)
#define CRU_AUTOCS_BUS_PCLK_CON1_INACTIVE_DCF_EN_MASK      (0x1U << CRU_AUTOCS_BUS_PCLK_CON1_INACTIVE_DCF_EN_SHIFT)     /* 0x00000020 */
#define CRU_AUTOCS_BUS_PCLK_CON1_INACTIVE_DMA_EN_SHIFT     (6U)
#define CRU_AUTOCS_BUS_PCLK_CON1_INACTIVE_DMA_EN_MASK      (0x1U << CRU_AUTOCS_BUS_PCLK_CON1_INACTIVE_DMA_EN_SHIFT)     /* 0x00000040 */
#define CRU_AUTOCS_BUS_PCLK_CON1_INACTIVE_NOCSLV_EN_SHIFT  (7U)
#define CRU_AUTOCS_BUS_PCLK_CON1_INACTIVE_NOCSLV_EN_MASK   (0x1U << CRU_AUTOCS_BUS_PCLK_CON1_INACTIVE_NOCSLV_EN_SHIFT)  /* 0x00000080 */
#define CRU_AUTOCS_BUS_PCLK_CON1_AUTOCS_EN_SHIFT           (12U)
#define CRU_AUTOCS_BUS_PCLK_CON1_AUTOCS_EN_MASK            (0x1U << CRU_AUTOCS_BUS_PCLK_CON1_AUTOCS_EN_SHIFT)           /* 0x00001000 */
#define CRU_AUTOCS_BUS_PCLK_CON1_SWITCH_EN_SHIFT           (13U)
#define CRU_AUTOCS_BUS_PCLK_CON1_SWITCH_EN_MASK            (0x1U << CRU_AUTOCS_BUS_PCLK_CON1_SWITCH_EN_SHIFT)           /* 0x00002000 */
#define CRU_AUTOCS_BUS_PCLK_CON1_CLKSEL_CFG_SHIFT          (14U)
#define CRU_AUTOCS_BUS_PCLK_CON1_CLKSEL_CFG_MASK           (0x3U << CRU_AUTOCS_BUS_PCLK_CON1_CLKSEL_CFG_SHIFT)          /* 0x0000C000 */
/* AUTOCS_DDR_PCLK_CON0 */
#define CRU_AUTOCS_DDR_PCLK_CON0_OFFSET                    (0x540U)
#define CRU_AUTOCS_DDR_PCLK_CON0_IDLE_TH_SHIFT             (0U)
#define CRU_AUTOCS_DDR_PCLK_CON0_IDLE_TH_MASK              (0xFFFFU << CRU_AUTOCS_DDR_PCLK_CON0_IDLE_TH_SHIFT)          /* 0x0000FFFF */
#define CRU_AUTOCS_DDR_PCLK_CON0_WAIT_TH_SHIFT             (16U)
#define CRU_AUTOCS_DDR_PCLK_CON0_WAIT_TH_MASK              (0xFFFFU << CRU_AUTOCS_DDR_PCLK_CON0_WAIT_TH_SHIFT)          /* 0xFFFF0000 */
/* AUTOCS_DDR_PCLK_CON1 */
#define CRU_AUTOCS_DDR_PCLK_CON1_OFFSET                    (0x544U)
#define CRU_AUTOCS_DDR_PCLK_CON1_ACTIVE_NOCMST_EN_SHIFT    (0U)
#define CRU_AUTOCS_DDR_PCLK_CON1_ACTIVE_NOCMST_EN_MASK     (0x1U << CRU_AUTOCS_DDR_PCLK_CON1_ACTIVE_NOCMST_EN_SHIFT)    /* 0x00000001 */
#define CRU_AUTOCS_DDR_PCLK_CON1_INACTIVE_NOCMST_EN_SHIFT  (4U)
#define CRU_AUTOCS_DDR_PCLK_CON1_INACTIVE_NOCMST_EN_MASK   (0x1U << CRU_AUTOCS_DDR_PCLK_CON1_INACTIVE_NOCMST_EN_SHIFT)  /* 0x00000010 */
#define CRU_AUTOCS_DDR_PCLK_CON1_AUTOCS_EN_SHIFT           (12U)
#define CRU_AUTOCS_DDR_PCLK_CON1_AUTOCS_EN_MASK            (0x1U << CRU_AUTOCS_DDR_PCLK_CON1_AUTOCS_EN_SHIFT)           /* 0x00001000 */
#define CRU_AUTOCS_DDR_PCLK_CON1_SWITCH_EN_SHIFT           (13U)
#define CRU_AUTOCS_DDR_PCLK_CON1_SWITCH_EN_MASK            (0x1U << CRU_AUTOCS_DDR_PCLK_CON1_SWITCH_EN_SHIFT)           /* 0x00002000 */
#define CRU_AUTOCS_DDR_PCLK_CON1_CLKSEL_CFG_SHIFT          (14U)
#define CRU_AUTOCS_DDR_PCLK_CON1_CLKSEL_CFG_MASK           (0x3U << CRU_AUTOCS_DDR_PCLK_CON1_CLKSEL_CFG_SHIFT)          /* 0x0000C000 */
/* AUTOCS_PHP_ACLK_CON0 */
#define CRU_AUTOCS_PHP_ACLK_CON0_OFFSET                    (0x548U)
#define CRU_AUTOCS_PHP_ACLK_CON0_IDLE_TH_SHIFT             (0U)
#define CRU_AUTOCS_PHP_ACLK_CON0_IDLE_TH_MASK              (0xFFFFU << CRU_AUTOCS_PHP_ACLK_CON0_IDLE_TH_SHIFT)          /* 0x0000FFFF */
#define CRU_AUTOCS_PHP_ACLK_CON0_WAIT_TH_SHIFT             (16U)
#define CRU_AUTOCS_PHP_ACLK_CON0_WAIT_TH_MASK              (0xFFFFU << CRU_AUTOCS_PHP_ACLK_CON0_WAIT_TH_SHIFT)          /* 0xFFFF0000 */
/* AUTOCS_PHP_ACLK_CON1 */
#define CRU_AUTOCS_PHP_ACLK_CON1_OFFSET                    (0x54CU)
#define CRU_AUTOCS_PHP_ACLK_CON1_ACTIVE_NOC_EN_SHIFT       (0U)
#define CRU_AUTOCS_PHP_ACLK_CON1_ACTIVE_NOC_EN_MASK        (0x1U << CRU_AUTOCS_PHP_ACLK_CON1_ACTIVE_NOC_EN_SHIFT)       /* 0x00000001 */
#define CRU_AUTOCS_PHP_ACLK_CON1_INACTIVE_NOC_EN_SHIFT     (4U)
#define CRU_AUTOCS_PHP_ACLK_CON1_INACTIVE_NOC_EN_MASK      (0x1U << CRU_AUTOCS_PHP_ACLK_CON1_INACTIVE_NOC_EN_SHIFT)     /* 0x00000010 */
#define CRU_AUTOCS_PHP_ACLK_CON1_AUTOCS_EN_SHIFT           (12U)
#define CRU_AUTOCS_PHP_ACLK_CON1_AUTOCS_EN_MASK            (0x1U << CRU_AUTOCS_PHP_ACLK_CON1_AUTOCS_EN_SHIFT)           /* 0x00001000 */
#define CRU_AUTOCS_PHP_ACLK_CON1_SWITCH_EN_SHIFT           (13U)
#define CRU_AUTOCS_PHP_ACLK_CON1_SWITCH_EN_MASK            (0x1U << CRU_AUTOCS_PHP_ACLK_CON1_SWITCH_EN_SHIFT)           /* 0x00002000 */
#define CRU_AUTOCS_PHP_ACLK_CON1_CLKSEL_CFG_SHIFT          (14U)
#define CRU_AUTOCS_PHP_ACLK_CON1_CLKSEL_CFG_MASK           (0x3U << CRU_AUTOCS_PHP_ACLK_CON1_CLKSEL_CFG_SHIFT)          /* 0x0000C000 */
/* AUTOCS_PHP_HCLK_CON0 */
#define CRU_AUTOCS_PHP_HCLK_CON0_OFFSET                    (0x550U)
#define CRU_AUTOCS_PHP_HCLK_CON0_IDLE_TH_SHIFT             (0U)
#define CRU_AUTOCS_PHP_HCLK_CON0_IDLE_TH_MASK              (0xFFFFU << CRU_AUTOCS_PHP_HCLK_CON0_IDLE_TH_SHIFT)          /* 0x0000FFFF */
#define CRU_AUTOCS_PHP_HCLK_CON0_WAIT_TH_SHIFT             (16U)
#define CRU_AUTOCS_PHP_HCLK_CON0_WAIT_TH_MASK              (0xFFFFU << CRU_AUTOCS_PHP_HCLK_CON0_WAIT_TH_SHIFT)          /* 0xFFFF0000 */
/* AUTOCS_PHP_HCLK_CON1 */
#define CRU_AUTOCS_PHP_HCLK_CON1_OFFSET                    (0x554U)
#define CRU_AUTOCS_PHP_HCLK_CON1_ACTIVE_NOC_EN_SHIFT       (0U)
#define CRU_AUTOCS_PHP_HCLK_CON1_ACTIVE_NOC_EN_MASK        (0x1U << CRU_AUTOCS_PHP_HCLK_CON1_ACTIVE_NOC_EN_SHIFT)       /* 0x00000001 */
#define CRU_AUTOCS_PHP_HCLK_CON1_INACTIVE_NOC_EN_SHIFT     (4U)
#define CRU_AUTOCS_PHP_HCLK_CON1_INACTIVE_NOC_EN_MASK      (0x1U << CRU_AUTOCS_PHP_HCLK_CON1_INACTIVE_NOC_EN_SHIFT)     /* 0x00000010 */
#define CRU_AUTOCS_PHP_HCLK_CON1_AUTOCS_EN_SHIFT           (12U)
#define CRU_AUTOCS_PHP_HCLK_CON1_AUTOCS_EN_MASK            (0x1U << CRU_AUTOCS_PHP_HCLK_CON1_AUTOCS_EN_SHIFT)           /* 0x00001000 */
#define CRU_AUTOCS_PHP_HCLK_CON1_SWITCH_EN_SHIFT           (13U)
#define CRU_AUTOCS_PHP_HCLK_CON1_SWITCH_EN_MASK            (0x1U << CRU_AUTOCS_PHP_HCLK_CON1_SWITCH_EN_SHIFT)           /* 0x00002000 */
#define CRU_AUTOCS_PHP_HCLK_CON1_CLKSEL_CFG_SHIFT          (14U)
#define CRU_AUTOCS_PHP_HCLK_CON1_CLKSEL_CFG_MASK           (0x3U << CRU_AUTOCS_PHP_HCLK_CON1_CLKSEL_CFG_SHIFT)          /* 0x0000C000 */
/* AUTOCS_VDEC_ACLK_CON0 */
#define CRU_AUTOCS_VDEC_ACLK_CON0_OFFSET                   (0x568U)
#define CRU_AUTOCS_VDEC_ACLK_CON0_IDLE_TH_SHIFT            (0U)
#define CRU_AUTOCS_VDEC_ACLK_CON0_IDLE_TH_MASK             (0xFFFFU << CRU_AUTOCS_VDEC_ACLK_CON0_IDLE_TH_SHIFT)         /* 0x0000FFFF */
#define CRU_AUTOCS_VDEC_ACLK_CON0_WAIT_TH_SHIFT            (16U)
#define CRU_AUTOCS_VDEC_ACLK_CON0_WAIT_TH_MASK             (0xFFFFU << CRU_AUTOCS_VDEC_ACLK_CON0_WAIT_TH_SHIFT)         /* 0xFFFF0000 */
/* AUTOCS_VDEC_ACLK_CON1 */
#define CRU_AUTOCS_VDEC_ACLK_CON1_OFFSET                   (0x56CU)
#define CRU_AUTOCS_VDEC_ACLK_CON1_ACTIVE_LOWCLKFLAG_EN_SHIFT (0U)
#define CRU_AUTOCS_VDEC_ACLK_CON1_ACTIVE_LOWCLKFLAG_EN_MASK (0x1U << CRU_AUTOCS_VDEC_ACLK_CON1_ACTIVE_LOWCLKFLAG_EN_SHIFT) /* 0x00000001 */
#define CRU_AUTOCS_VDEC_ACLK_CON1_INACTIVE_LOWCLKFLAG_EN_SHIFT (4U)
#define CRU_AUTOCS_VDEC_ACLK_CON1_INACTIVE_LOWCLKFLAG_EN_MASK (0x1U << CRU_AUTOCS_VDEC_ACLK_CON1_INACTIVE_LOWCLKFLAG_EN_SHIFT) /* 0x00000010 */
#define CRU_AUTOCS_VDEC_ACLK_CON1_AUTOCS_EN_SHIFT          (12U)
#define CRU_AUTOCS_VDEC_ACLK_CON1_AUTOCS_EN_MASK           (0x1U << CRU_AUTOCS_VDEC_ACLK_CON1_AUTOCS_EN_SHIFT)          /* 0x00001000 */
#define CRU_AUTOCS_VDEC_ACLK_CON1_SWITCH_EN_SHIFT          (13U)
#define CRU_AUTOCS_VDEC_ACLK_CON1_SWITCH_EN_MASK           (0x1U << CRU_AUTOCS_VDEC_ACLK_CON1_SWITCH_EN_SHIFT)          /* 0x00002000 */
#define CRU_AUTOCS_VDEC_ACLK_CON1_CLKSEL_CFG_SHIFT         (14U)
#define CRU_AUTOCS_VDEC_ACLK_CON1_CLKSEL_CFG_MASK          (0x3U << CRU_AUTOCS_VDEC_ACLK_CON1_CLKSEL_CFG_SHIFT)         /* 0x0000C000 */
/* AUTOCS_VDEC_CACLK_CON0 */
#define CRU_AUTOCS_VDEC_CACLK_CON0_OFFSET                  (0x570U)
#define CRU_AUTOCS_VDEC_CACLK_CON0_IDLE_TH_SHIFT           (0U)
#define CRU_AUTOCS_VDEC_CACLK_CON0_IDLE_TH_MASK            (0xFFFFU << CRU_AUTOCS_VDEC_CACLK_CON0_IDLE_TH_SHIFT)        /* 0x0000FFFF */
#define CRU_AUTOCS_VDEC_CACLK_CON0_WAIT_TH_SHIFT           (16U)
#define CRU_AUTOCS_VDEC_CACLK_CON0_WAIT_TH_MASK            (0xFFFFU << CRU_AUTOCS_VDEC_CACLK_CON0_WAIT_TH_SHIFT)        /* 0xFFFF0000 */
/* AUTOCS_VDEC_CACLK_CON1 */
#define CRU_AUTOCS_VDEC_CACLK_CON1_OFFSET                  (0x574U)
#define CRU_AUTOCS_VDEC_CACLK_CON1_ACTIVE_LOWCLKFLAG_EN_SHIFT (0U)
#define CRU_AUTOCS_VDEC_CACLK_CON1_ACTIVE_LOWCLKFLAG_EN_MASK (0x1U << CRU_AUTOCS_VDEC_CACLK_CON1_ACTIVE_LOWCLKFLAG_EN_SHIFT) /* 0x00000001 */
#define CRU_AUTOCS_VDEC_CACLK_CON1_INACTIVE_LOWCLKFLAG_EN_SHIFT (4U)
#define CRU_AUTOCS_VDEC_CACLK_CON1_INACTIVE_LOWCLKFLAG_EN_MASK (0x1U << CRU_AUTOCS_VDEC_CACLK_CON1_INACTIVE_LOWCLKFLAG_EN_SHIFT) /* 0x00000010 */
#define CRU_AUTOCS_VDEC_CACLK_CON1_AUTOCS_EN_SHIFT         (12U)
#define CRU_AUTOCS_VDEC_CACLK_CON1_AUTOCS_EN_MASK          (0x1U << CRU_AUTOCS_VDEC_CACLK_CON1_AUTOCS_EN_SHIFT)         /* 0x00001000 */
#define CRU_AUTOCS_VDEC_CACLK_CON1_SWITCH_EN_SHIFT         (13U)
#define CRU_AUTOCS_VDEC_CACLK_CON1_SWITCH_EN_MASK          (0x1U << CRU_AUTOCS_VDEC_CACLK_CON1_SWITCH_EN_SHIFT)         /* 0x00002000 */
#define CRU_AUTOCS_VDEC_CACLK_CON1_CLKSEL_CFG_SHIFT        (14U)
#define CRU_AUTOCS_VDEC_CACLK_CON1_CLKSEL_CFG_MASK         (0x3U << CRU_AUTOCS_VDEC_CACLK_CON1_CLKSEL_CFG_SHIFT)        /* 0x0000C000 */
/* AUTOCS_VDEC_CORECLK_CON0 */
#define CRU_AUTOCS_VDEC_CORECLK_CON0_OFFSET                (0x578U)
#define CRU_AUTOCS_VDEC_CORECLK_CON0_IDLE_TH_SHIFT         (0U)
#define CRU_AUTOCS_VDEC_CORECLK_CON0_IDLE_TH_MASK          (0xFFFFU << CRU_AUTOCS_VDEC_CORECLK_CON0_IDLE_TH_SHIFT)      /* 0x0000FFFF */
#define CRU_AUTOCS_VDEC_CORECLK_CON0_WAIT_TH_SHIFT         (16U)
#define CRU_AUTOCS_VDEC_CORECLK_CON0_WAIT_TH_MASK          (0xFFFFU << CRU_AUTOCS_VDEC_CORECLK_CON0_WAIT_TH_SHIFT)      /* 0xFFFF0000 */
/* AUTOCS_VDEC_CORECLK_CON1 */
#define CRU_AUTOCS_VDEC_CORECLK_CON1_OFFSET                (0x57CU)
#define CRU_AUTOCS_VDEC_CORECLK_CON1_ACTIVE_LOWCLKFLAG_EN_SHIFT (0U)
#define CRU_AUTOCS_VDEC_CORECLK_CON1_ACTIVE_LOWCLKFLAG_EN_MASK (0x1U << CRU_AUTOCS_VDEC_CORECLK_CON1_ACTIVE_LOWCLKFLAG_EN_SHIFT) /* 0x00000001 */
#define CRU_AUTOCS_VDEC_CORECLK_CON1_INACTIVE_LOWCLKFLAG_EN_SHIFT (4U)
#define CRU_AUTOCS_VDEC_CORECLK_CON1_INACTIVE_LOWCLKFLAG_EN_MASK (0x1U << CRU_AUTOCS_VDEC_CORECLK_CON1_INACTIVE_LOWCLKFLAG_EN_SHIFT) /* 0x00000010 */
#define CRU_AUTOCS_VDEC_CORECLK_CON1_AUTOCS_EN_SHIFT       (12U)
#define CRU_AUTOCS_VDEC_CORECLK_CON1_AUTOCS_EN_MASK        (0x1U << CRU_AUTOCS_VDEC_CORECLK_CON1_AUTOCS_EN_SHIFT)       /* 0x00001000 */
#define CRU_AUTOCS_VDEC_CORECLK_CON1_SWITCH_EN_SHIFT       (13U)
#define CRU_AUTOCS_VDEC_CORECLK_CON1_SWITCH_EN_MASK        (0x1U << CRU_AUTOCS_VDEC_CORECLK_CON1_SWITCH_EN_SHIFT)       /* 0x00002000 */
#define CRU_AUTOCS_VDEC_CORECLK_CON1_CLKSEL_CFG_SHIFT      (14U)
#define CRU_AUTOCS_VDEC_CORECLK_CON1_CLKSEL_CFG_MASK       (0x3U << CRU_AUTOCS_VDEC_CORECLK_CON1_CLKSEL_CFG_SHIFT)      /* 0x0000C000 */
/* AUTOCS_VDEC_HEVCCACLK_CON0 */
#define CRU_AUTOCS_VDEC_HEVCCACLK_CON0_OFFSET              (0x580U)
#define CRU_AUTOCS_VDEC_HEVCCACLK_CON0_IDLE_TH_SHIFT       (0U)
#define CRU_AUTOCS_VDEC_HEVCCACLK_CON0_IDLE_TH_MASK        (0xFFFFU << CRU_AUTOCS_VDEC_HEVCCACLK_CON0_IDLE_TH_SHIFT)    /* 0x0000FFFF */
#define CRU_AUTOCS_VDEC_HEVCCACLK_CON0_WAIT_TH_SHIFT       (16U)
#define CRU_AUTOCS_VDEC_HEVCCACLK_CON0_WAIT_TH_MASK        (0xFFFFU << CRU_AUTOCS_VDEC_HEVCCACLK_CON0_WAIT_TH_SHIFT)    /* 0xFFFF0000 */
/* AUTOCS_VDEC_HEVCCACLK_CON1 */
#define CRU_AUTOCS_VDEC_HEVCCACLK_CON1_OFFSET              (0x584U)
#define CRU_AUTOCS_VDEC_HEVCCACLK_CON1_ACTIVE_LOWCLKFLAG_EN_SHIFT (0U)
#define CRU_AUTOCS_VDEC_HEVCCACLK_CON1_ACTIVE_LOWCLKFLAG_EN_MASK (0x1U << CRU_AUTOCS_VDEC_HEVCCACLK_CON1_ACTIVE_LOWCLKFLAG_EN_SHIFT) /* 0x00000001 */
#define CRU_AUTOCS_VDEC_HEVCCACLK_CON1_INACTIVE_LOWCLKFLAG_EN_SHIFT (4U)
#define CRU_AUTOCS_VDEC_HEVCCACLK_CON1_INACTIVE_LOWCLKFLAG_EN_MASK (0x1U << CRU_AUTOCS_VDEC_HEVCCACLK_CON1_INACTIVE_LOWCLKFLAG_EN_SHIFT) /* 0x00000010 */
#define CRU_AUTOCS_VDEC_HEVCCACLK_CON1_AUTOCS_EN_SHIFT     (12U)
#define CRU_AUTOCS_VDEC_HEVCCACLK_CON1_AUTOCS_EN_MASK      (0x1U << CRU_AUTOCS_VDEC_HEVCCACLK_CON1_AUTOCS_EN_SHIFT)     /* 0x00001000 */
#define CRU_AUTOCS_VDEC_HEVCCACLK_CON1_SWITCH_EN_SHIFT     (13U)
#define CRU_AUTOCS_VDEC_HEVCCACLK_CON1_SWITCH_EN_MASK      (0x1U << CRU_AUTOCS_VDEC_HEVCCACLK_CON1_SWITCH_EN_SHIFT)     /* 0x00002000 */
#define CRU_AUTOCS_VDEC_HEVCCACLK_CON1_CLKSEL_CFG_SHIFT    (14U)
#define CRU_AUTOCS_VDEC_HEVCCACLK_CON1_CLKSEL_CFG_MASK     (0x3U << CRU_AUTOCS_VDEC_HEVCCACLK_CON1_CLKSEL_CFG_SHIFT)    /* 0x0000C000 */
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
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __RV1126_H */
