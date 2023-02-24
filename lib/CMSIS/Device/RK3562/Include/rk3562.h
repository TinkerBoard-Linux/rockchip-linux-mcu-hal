/* SPDX-License-Identifier: BSD-3-Clause */
/*
 * Copyright (c) 2022 Rockchip Electronics Co., Ltd.
 */

#ifndef __RK3562_H
#define __RK3562_H
#ifdef __cplusplus
  extern "C" {
#endif
/****************************************************************************************/
/*                                                                                      */
/*                               Module Structure Section                               */
/*                                                                                      */
/****************************************************************************************/
#ifndef __ASSEMBLY__
/* GPIO1_IOC Register Structure Define */
struct GPIO1_IOC_REG {
    __IO uint32_t GPIO1A_IOMUX_SEL_L;                 /* Address Offset: 0x0000 */
    __IO uint32_t GPIO1A_IOMUX_SEL_H;                 /* Address Offset: 0x0004 */
    __IO uint32_t GPIO1B_IOMUX_SEL_L;                 /* Address Offset: 0x0008 */
    __IO uint32_t GPIO1B_IOMUX_SEL_H;                 /* Address Offset: 0x000C */
    __IO uint32_t GPIO1C_IOMUX_SEL_L;                 /* Address Offset: 0x0010 */
    __IO uint32_t GPIO1C_IOMUX_SEL_H;                 /* Address Offset: 0x0014 */
    __IO uint32_t GPIO1D_IOMUX_SEL_L;                 /* Address Offset: 0x0018 */
    __IO uint32_t GPIO1D_IOMUX_SEL_H;                 /* Address Offset: 0x001C */
         uint32_t RESERVED0020[24];                   /* Address Offset: 0x0020 */
    __IO uint32_t GPIO1A_P;                           /* Address Offset: 0x0080 */
    __IO uint32_t GPIO1B_P;                           /* Address Offset: 0x0084 */
    __IO uint32_t GPIO1C_P;                           /* Address Offset: 0x0088 */
    __IO uint32_t GPIO1D_P;                           /* Address Offset: 0x008C */
         uint32_t RESERVED0090[12];                   /* Address Offset: 0x0090 */
    __IO uint32_t GPIO1A_IE;                          /* Address Offset: 0x00C0 */
    __IO uint32_t GPIO1B_IE;                          /* Address Offset: 0x00C4 */
    __IO uint32_t GPIO1C_IE;                          /* Address Offset: 0x00C8 */
    __IO uint32_t GPIO1D_IE;                          /* Address Offset: 0x00CC */
         uint32_t RESERVED00D0[12];                   /* Address Offset: 0x00D0 */
    __IO uint32_t GPIO1A_OD;                          /* Address Offset: 0x0100 */
    __IO uint32_t GPIO1B_OD;                          /* Address Offset: 0x0104 */
    __IO uint32_t GPIO1C_OD;                          /* Address Offset: 0x0108 */
    __IO uint32_t GPIO1D_OD;                          /* Address Offset: 0x010C */
         uint32_t RESERVED0110[12];                   /* Address Offset: 0x0110 */
    __IO uint32_t GPIO1A_SUS;                         /* Address Offset: 0x0140 */
    __IO uint32_t GPIO1B_SUS;                         /* Address Offset: 0x0144 */
    __IO uint32_t GPIO1C_SUS;                         /* Address Offset: 0x0148 */
    __IO uint32_t GPIO1D_SUS;                         /* Address Offset: 0x014C */
         uint32_t RESERVED0150[12];                   /* Address Offset: 0x0150 */
    __IO uint32_t GPIO1A_SL;                          /* Address Offset: 0x0180 */
    __IO uint32_t GPIO1B_SL;                          /* Address Offset: 0x0184 */
    __IO uint32_t GPIO1C_SL;                          /* Address Offset: 0x0188 */
    __IO uint32_t GPIO1D_SL;                          /* Address Offset: 0x018C */
         uint32_t RESERVED0190[28];                   /* Address Offset: 0x0190 */
    __IO uint32_t GPIO1A_DS0;                         /* Address Offset: 0x0200 */
    __IO uint32_t GPIO1A_DS1;                         /* Address Offset: 0x0204 */
    __IO uint32_t GPIO1A_DS2;                         /* Address Offset: 0x0208 */
    __IO uint32_t GPIO1A_DS3;                         /* Address Offset: 0x020C */
    __IO uint32_t GPIO1B_DS0;                         /* Address Offset: 0x0210 */
    __IO uint32_t GPIO1B_DS1;                         /* Address Offset: 0x0214 */
    __IO uint32_t GPIO1B_DS2;                         /* Address Offset: 0x0218 */
    __IO uint32_t GPIO1B_DS3;                         /* Address Offset: 0x021C */
    __IO uint32_t GPIO1C_DS0;                         /* Address Offset: 0x0220 */
    __IO uint32_t GPIO1C_DS1;                         /* Address Offset: 0x0224 */
    __IO uint32_t GPIO1C_DS2;                         /* Address Offset: 0x0228 */
    __IO uint32_t GPIO1C_DS3;                         /* Address Offset: 0x022C */
    __IO uint32_t GPIO1D_DS0;                         /* Address Offset: 0x0230 */
    __IO uint32_t GPIO1D_DS1;                         /* Address Offset: 0x0234 */
    __IO uint32_t GPIO1D_DS2;                         /* Address Offset: 0x0238 */
    __IO uint32_t GPIO1D_DS3;                         /* Address Offset: 0x023C */
};
/* GPIO2_IOC Register Structure Define */
struct GPIO2_IOC_REG {
         uint32_t RESERVED0000[8];                    /* Address Offset: 0x0000 */
    __IO uint32_t GPIO2A_IOMUX_SEL_L;                 /* Address Offset: 0x0020 */
         uint32_t RESERVED0024[27];                   /* Address Offset: 0x0024 */
    __IO uint32_t GPIO2A_P;                           /* Address Offset: 0x0090 */
         uint32_t RESERVED0094[15];                   /* Address Offset: 0x0094 */
    __IO uint32_t GPIO2A_IE;                          /* Address Offset: 0x00D0 */
         uint32_t RESERVED00D4[15];                   /* Address Offset: 0x00D4 */
    __IO uint32_t GPIO2A_OD;                          /* Address Offset: 0x0110 */
         uint32_t RESERVED0114[15];                   /* Address Offset: 0x0114 */
    __IO uint32_t GPIO2A_SUS;                         /* Address Offset: 0x0150 */
         uint32_t RESERVED0154[15];                   /* Address Offset: 0x0154 */
    __IO uint32_t GPIO2A_SL;                          /* Address Offset: 0x0190 */
         uint32_t RESERVED0194[43];                   /* Address Offset: 0x0194 */
    __IO uint32_t GPIO2A_DS0;                         /* Address Offset: 0x0240 */
         uint32_t RESERVED0244[47];                   /* Address Offset: 0x0244 */
    __IO uint32_t IO_VSEL0;                           /* Address Offset: 0x0300 */
         uint32_t RESERVED0304[63];                   /* Address Offset: 0x0304 */
    __IO uint32_t MAC1_IO_CON0;                       /* Address Offset: 0x0400 */
    __IO uint32_t MAC1_IO_CON1;                       /* Address Offset: 0x0404 */
         uint32_t RESERVED0408[62];                   /* Address Offset: 0x0408 */
    __IO uint32_t SDCARD0_IO_CON;                     /* Address Offset: 0x0500 */
    __IO uint32_t JTAG_M1_CON;                        /* Address Offset: 0x0504 */
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
    __IO uint32_t GPIO3D_IOMUX_SEL_H;                 /* Address Offset: 0x005C */
         uint32_t RESERVED0060[16];                   /* Address Offset: 0x0060 */
    __IO uint32_t GPIO3A_P;                           /* Address Offset: 0x00A0 */
    __IO uint32_t GPIO3B_P;                           /* Address Offset: 0x00A4 */
    __IO uint32_t GPIO3C_P;                           /* Address Offset: 0x00A8 */
    __IO uint32_t GPIO3D_P;                           /* Address Offset: 0x00AC */
         uint32_t RESERVED00B0[12];                   /* Address Offset: 0x00B0 */
    __IO uint32_t GPIO3A_IE;                          /* Address Offset: 0x00E0 */
    __IO uint32_t GPIO3B_IE;                          /* Address Offset: 0x00E4 */
    __IO uint32_t GPIO3C_IE;                          /* Address Offset: 0x00E8 */
    __IO uint32_t GPIO3D_IE;                          /* Address Offset: 0x00EC */
         uint32_t RESERVED00F0[12];                   /* Address Offset: 0x00F0 */
    __IO uint32_t GPIO3A_OD;                          /* Address Offset: 0x0120 */
    __IO uint32_t GPIO3B_OD;                          /* Address Offset: 0x0124 */
    __IO uint32_t GPIO3C_OD;                          /* Address Offset: 0x0128 */
    __IO uint32_t GPIO3D_OD;                          /* Address Offset: 0x012C */
         uint32_t RESERVED0130[12];                   /* Address Offset: 0x0130 */
    __IO uint32_t GPIO3A_SUS;                         /* Address Offset: 0x0160 */
    __IO uint32_t GPIO3B_SUS;                         /* Address Offset: 0x0164 */
    __IO uint32_t GPIO3C_SUS;                         /* Address Offset: 0x0168 */
    __IO uint32_t GPIO3D_SUS;                         /* Address Offset: 0x016C */
         uint32_t RESERVED0170[12];                   /* Address Offset: 0x0170 */
    __IO uint32_t GPIO3A_SL;                          /* Address Offset: 0x01A0 */
    __IO uint32_t GPIO3B_SL;                          /* Address Offset: 0x01A4 */
    __IO uint32_t GPIO3C_SL;                          /* Address Offset: 0x01A8 */
    __IO uint32_t GPIO3D_SL;                          /* Address Offset: 0x01AC */
         uint32_t RESERVED01B0[52];                   /* Address Offset: 0x01B0 */
    __IO uint32_t GPIO3A_DS0;                         /* Address Offset: 0x0280 */
    __IO uint32_t GPIO3A_DS1;                         /* Address Offset: 0x0284 */
    __IO uint32_t GPIO3A_DS2;                         /* Address Offset: 0x0288 */
    __IO uint32_t GPIO3A_DS3;                         /* Address Offset: 0x028C */
    __IO uint32_t GPIO3B_DS0;                         /* Address Offset: 0x0290 */
    __IO uint32_t GPIO3B_DS1;                         /* Address Offset: 0x0294 */
    __IO uint32_t GPIO3B_DS2;                         /* Address Offset: 0x0298 */
    __IO uint32_t GPIO3B_DS3;                         /* Address Offset: 0x029C */
    __IO uint32_t GPIO3C_DS0;                         /* Address Offset: 0x02A0 */
    __IO uint32_t GPIO3C_DS1;                         /* Address Offset: 0x02A4 */
    __IO uint32_t GPIO3C_DS2;                         /* Address Offset: 0x02A8 */
    __IO uint32_t GPIO3C_DS3;                         /* Address Offset: 0x02AC */
    __IO uint32_t GPIO3D_DS0;                         /* Address Offset: 0x02B0 */
    __IO uint32_t GPIO3D_DS1;                         /* Address Offset: 0x02B4 */
    __IO uint32_t GPIO3D_DS2;                         /* Address Offset: 0x02B8 */
    __IO uint32_t GPIO3D_DS3;                         /* Address Offset: 0x02BC */
};
/* GPIO4_IOC Register Structure Define */
struct GPIO4_IOC_REG {
         uint32_t RESERVED0000[24];                   /* Address Offset: 0x0000 */
    __IO uint32_t GPIO4A_IOMUX_SEL_L;                 /* Address Offset: 0x0060 */
    __IO uint32_t GPIO4A_IOMUX_SEL_H;                 /* Address Offset: 0x0064 */
    __IO uint32_t GPIO4B_IOMUX_SEL_L;                 /* Address Offset: 0x0068 */
    __IO uint32_t GPIO4B_IOMUX_SEL_H;                 /* Address Offset: 0x006C */
         uint32_t RESERVED0070[16];                   /* Address Offset: 0x0070 */
    __IO uint32_t GPIO4A_P;                           /* Address Offset: 0x00B0 */
    __IO uint32_t GPIO4B_P;                           /* Address Offset: 0x00B4 */
         uint32_t RESERVED00B8[14];                   /* Address Offset: 0x00B8 */
    __IO uint32_t GPIO4A_IE;                          /* Address Offset: 0x00F0 */
    __IO uint32_t GPIO4B_IE;                          /* Address Offset: 0x00F4 */
         uint32_t RESERVED00F8[14];                   /* Address Offset: 0x00F8 */
    __IO uint32_t GPIO4A_OD;                          /* Address Offset: 0x0130 */
    __IO uint32_t GPIO4B_OD;                          /* Address Offset: 0x0134 */
         uint32_t RESERVED0138[14];                   /* Address Offset: 0x0138 */
    __IO uint32_t GPIO4A_SUS;                         /* Address Offset: 0x0170 */
    __IO uint32_t GPIO4B_SUS;                         /* Address Offset: 0x0174 */
         uint32_t RESERVED0178[14];                   /* Address Offset: 0x0178 */
    __IO uint32_t GPIO4A_SL;                          /* Address Offset: 0x01B0 */
    __IO uint32_t GPIO4B_SL;                          /* Address Offset: 0x01B4 */
         uint32_t RESERVED01B8[66];                   /* Address Offset: 0x01B8 */
    __IO uint32_t GPIO4A_DS0;                         /* Address Offset: 0x02C0 */
    __IO uint32_t GPIO4A_DS1;                         /* Address Offset: 0x02C4 */
    __IO uint32_t GPIO4A_DS2;                         /* Address Offset: 0x02C8 */
    __IO uint32_t GPIO4A_DS3;                         /* Address Offset: 0x02CC */
    __IO uint32_t GPIO4B_DS0;                         /* Address Offset: 0x02D0 */
    __IO uint32_t GPIO4B_DS1;                         /* Address Offset: 0x02D4 */
    __IO uint32_t GPIO4B_DS2;                         /* Address Offset: 0x02D8 */
    __IO uint32_t GPIO4B_DS3;                         /* Address Offset: 0x02DC */
         uint32_t RESERVED02E0[8];                    /* Address Offset: 0x02E0 */
    __IO uint32_t IO_VSEL1;                           /* Address Offset: 0x0300 */
         uint32_t RESERVED0304[63];                   /* Address Offset: 0x0304 */
    __IO uint32_t MAC0_IO_CON0;                       /* Address Offset: 0x0400 */
    __IO uint32_t MAC0_IO_CON1;                       /* Address Offset: 0x0404 */
         uint32_t RESERVED0408[62];                   /* Address Offset: 0x0408 */
    __IO uint32_t VO_IO_CON;                          /* Address Offset: 0x0500 */
         uint32_t RESERVED0504[35];                   /* Address Offset: 0x0504 */
    __IO uint32_t SARADC1_CON;                        /* Address Offset: 0x0590 */
};
/* GPIO0_IOC Register Structure Define */
struct GPIO0_IOC_REG {
    __IO uint32_t GPIO0A_IOMUX_SEL_L;                 /* Address Offset: 0x0000 */
    __IO uint32_t GPIO0A_IOMUX_SEL_H;                 /* Address Offset: 0x0004 */
    __IO uint32_t GPIO0B_IOMUX_SEL_L;                 /* Address Offset: 0x0008 */
    __IO uint32_t GPIO0B_IOMUX_SEL_H;                 /* Address Offset: 0x000C */
    __IO uint32_t GPIO0C_IOMUX_SEL_L;                 /* Address Offset: 0x0010 */
    __IO uint32_t GPIO0C_IOMUX_SEL_H;                 /* Address Offset: 0x0014 */
    __IO uint32_t GPIO0D_IOMUX_SEL_L;                 /* Address Offset: 0x0018 */
         uint32_t RESERVED001C;                       /* Address Offset: 0x001C */
    __IO uint32_t GPIO0A_P;                           /* Address Offset: 0x0020 */
    __IO uint32_t GPIO0B_P;                           /* Address Offset: 0x0024 */
    __IO uint32_t GPIO0C_P;                           /* Address Offset: 0x0028 */
    __IO uint32_t GPIO0D_P;                           /* Address Offset: 0x002C */
    __IO uint32_t GPIO0A_IE;                          /* Address Offset: 0x0030 */
    __IO uint32_t GPIO0B_IE;                          /* Address Offset: 0x0034 */
    __IO uint32_t GPIO0C_IE;                          /* Address Offset: 0x0038 */
    __IO uint32_t GPIO0D_IE;                          /* Address Offset: 0x003C */
    __IO uint32_t GPIO0A_OD;                          /* Address Offset: 0x0040 */
    __IO uint32_t GPIO0B_OD;                          /* Address Offset: 0x0044 */
    __IO uint32_t GPIO0C_OD;                          /* Address Offset: 0x0048 */
    __IO uint32_t GPIO0D_OD;                          /* Address Offset: 0x004C */
    __IO uint32_t GPIO0A_SUS;                         /* Address Offset: 0x0050 */
    __IO uint32_t GPIO0B_SUS;                         /* Address Offset: 0x0054 */
    __IO uint32_t GPIO0C_SUS;                         /* Address Offset: 0x0058 */
    __IO uint32_t GPIO0D_SUS;                         /* Address Offset: 0x005C */
    __IO uint32_t GPIO0A_SL;                          /* Address Offset: 0x0060 */
    __IO uint32_t GPIO0B_SL;                          /* Address Offset: 0x0064 */
    __IO uint32_t GPIO0C_SL;                          /* Address Offset: 0x0068 */
    __IO uint32_t GPIO0D_SL;                          /* Address Offset: 0x006C */
    __IO uint32_t GPIO0A_DS0;                         /* Address Offset: 0x0070 */
    __IO uint32_t GPIO0A_DS1;                         /* Address Offset: 0x0074 */
    __IO uint32_t GPIO0A_DS2;                         /* Address Offset: 0x0078 */
    __IO uint32_t GPIO0A_DS3;                         /* Address Offset: 0x007C */
    __IO uint32_t GPIO0B_DS0;                         /* Address Offset: 0x0080 */
    __IO uint32_t GPIO0B_DS1;                         /* Address Offset: 0x0084 */
    __IO uint32_t GPIO0B_DS2;                         /* Address Offset: 0x0088 */
    __IO uint32_t GPIO0B_DS3;                         /* Address Offset: 0x008C */
    __IO uint32_t GPIO0C_DS0;                         /* Address Offset: 0x0090 */
    __IO uint32_t GPIO0C_DS1;                         /* Address Offset: 0x0094 */
    __IO uint32_t GPIO0C_DS2;                         /* Address Offset: 0x0098 */
    __IO uint32_t GPIO0C_DS3;                         /* Address Offset: 0x009C */
    __IO uint32_t GPIO0D_DS0;                         /* Address Offset: 0x00A0 */
         uint32_t RESERVED00A4[23];                   /* Address Offset: 0x00A4 */
    __IO uint32_t JTAG_M0_CON;                        /* Address Offset: 0x0100 */
    __IO uint32_t UART_IO_CON;                        /* Address Offset: 0x0104 */
         uint32_t RESERVED0108[16];                   /* Address Offset: 0x0108 */
    __IO uint32_t IO_VSEL2;                           /* Address Offset: 0x0148 */
    __IO uint32_t XIN_CON;                            /* Address Offset: 0x014C */
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
    __I  uint32_t VERSION;                            /* Address Offset: 0x0048 */
    __IO uint32_t TIMEOUT;                            /* Address Offset: 0x004C */
    __IO uint32_t BYPASS;                             /* Address Offset: 0x0050 */
         uint32_t RESERVED0054[235];                  /* Address Offset: 0x0054 */
    __O  uint32_t TXDR;                               /* Address Offset: 0x0400 */
         uint32_t RESERVED0404[255];                  /* Address Offset: 0x0404 */
    __I  uint32_t RXDR;                               /* Address Offset: 0x0800 */
};
/* PWM Register Structure Define */
struct PWM_CHANNEL {
    __I  uint32_t CNT;
    __IO uint32_t PERIOD_HPR;
    __IO uint32_t DUTY_LPR;
    __IO uint32_t CTRL;
};
struct PWM_CAPTURE_CNT {
    __IO uint32_t CAPTURE_CNT_EN;
    __IO uint32_t POS_CNT;
    __IO uint32_t NEG_CNT;
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
    __IO uint32_t OFFSET[4];                          /* Address Offset: 0x00E0 */
         uint32_t RESERVED00F0[4];                    /* Address Offset: 0x00F0 */
    __IO uint32_t IR_TRANS_CTRL;                      /* Address Offset: 0x0100 */
    __IO uint32_t IR_TRANS_PRE;                       /* Address Offset: 0x0104 */
    __IO uint32_t IR_TRANS_SPRE;                      /* Address Offset: 0x0108 */
    __IO uint32_t IR_TRANS_LD;                        /* Address Offset: 0x010C */
    __IO uint32_t IR_TRANS_HD;                        /* Address Offset: 0x0110 */
    __IO uint32_t IR_TRANS_BURST_FRAME;               /* Address Offset: 0x0114 */
    __IO uint32_t IR_TRANS_DATA_VALUE;                /* Address Offset: 0x0118 */
         uint32_t RESERVED011C;                       /* Address Offset: 0x011C */
         struct PWM_CAPTURE_CNT CAPTURE_CNT[4];       /* Address Offset: 0x0120 */
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
/* SARADC Register Structure Define */
struct SARADC_REG {
    __IO uint32_t CONV_CON;                           /* Address Offset: 0x0000 */
    __IO uint32_t T_PD_SOC;                           /* Address Offset: 0x0004 */
    __IO uint32_t T_AS_SOC;                           /* Address Offset: 0x0008 */
    __IO uint32_t T_DAS_SOC;                          /* Address Offset: 0x000C */
    __IO uint32_t T_SEL_SOC;                          /* Address Offset: 0x0010 */
    __IO uint32_t HIGH_COMP[16];                      /* Address Offset: 0x0014 */
    __IO uint32_t LOW_COMP[16];                       /* Address Offset: 0x0054 */
    __IO uint32_t DEBOUNCE;                           /* Address Offset: 0x0094 */
    __IO uint32_t HT_INT_EN;                          /* Address Offset: 0x0098 */
    __IO uint32_t LT_INT_EN;                          /* Address Offset: 0x009C */
         uint32_t RESERVED00A0[24];                   /* Address Offset: 0x00A0 */
    __IO uint32_t MT_INT_EN;                          /* Address Offset: 0x0100 */
    __IO uint32_t END_INT_EN;                         /* Address Offset: 0x0104 */
    __IO uint32_t ST_CON;                             /* Address Offset: 0x0108 */
    __I  uint32_t STATUS;                             /* Address Offset: 0x010C */
    __IO uint32_t END_INT_ST;                         /* Address Offset: 0x0110 */
    __IO uint32_t HT_INT_ST;                          /* Address Offset: 0x0114 */
    __IO uint32_t LT_INT_ST;                          /* Address Offset: 0x0118 */
    __IO uint32_t MT_INT_ST;                          /* Address Offset: 0x011C */
    __I  uint32_t DATA[16];                           /* Address Offset: 0x0120 */
    __IO uint32_t AUTO_CH_EN;                         /* Address Offset: 0x0160 */
};
/* DCACHE Register Structure Define */
struct DCACHE_REG {
    __IO uint32_t CACHE_CTRL;                         /* Address Offset: 0x0000 */
    __IO uint32_t CACHE_MAINTAIN[2];                  /* Address Offset: 0x0004 */
    __IO uint32_t STB_TIMEOUT_CTRL;                   /* Address Offset: 0x000C */
    __IO uint32_t RAM_DEBUG;                          /* Address Offset: 0x0010 */
         uint32_t RESERVED0014[3];                    /* Address Offset: 0x0014 */
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
/* ICACHE Register Structure Define */
struct ICACHE_REG {
    __IO uint32_t CACHE_CTRL;                         /* Address Offset: 0x0000 */
    __IO uint32_t CACHE_MAINTAIN[2];                  /* Address Offset: 0x0004 */
    __IO uint32_t STB_TIMEOUT_CTRL;                   /* Address Offset: 0x000C */
    __IO uint32_t RAM_DEBUG;                          /* Address Offset: 0x0010 */
         uint32_t RESERVED0014[3];                    /* Address Offset: 0x0014 */
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
};
/* INTMUX Register Structure Define */
struct INTMUX_REG {
    __IO uint32_t INT_ENABLE_GROUP[32];               /* Address Offset: 0x0000 */
    __I  uint32_t INT_FLAG_GROUP[32];                 /* Address Offset: 0x0080 */
};
#endif /*  __ASSEMBLY__  */
/****************************************************************************************/
/*                                                                                      */
/*                                Module Address Section                                */
/*                                                                                      */
/****************************************************************************************/
/* Memory Base */
#define GPIO1_IOC_BASE                 0xFF060000U /* GPIO1_IOC base address */
#define GPIO2_IOC_BASE                 0xFF060000U /* GPIO2_IOC base address */
#define GPIO3_IOC_BASE                 0xFF070000U /* GPIO3_IOC base address */
#define GPIO4_IOC_BASE                 0xFF070000U /* GPIO4_IOC base address */
#define GPIO0_IOC_BASE                 0xFF080000U /* GPIO0_IOC base address */
#define UART0_BASE                     0xFF210000U /* UART0 base address */
#define SPI0_BASE                      0xFF220000U /* SPI0 base address */
#define PWM0_BASE                      0xFF230000U /* PWM0 base address */
#define GPIO0_BASE                     0xFF260000U /* GPIO0 base address */
#define GPIO1_BASE                     0xFF620000U /* GPIO1 base address */
#define GPIO2_BASE                     0xFF630000U /* GPIO2 base address */
#define SPI1_BASE                      0xFF640000U /* SPI1 base address */
#define SPI2_BASE                      0xFF650000U /* SPI2 base address */
#define UART1_BASE                     0xFF670000U /* UART1 base address */
#define UART2_BASE                     0xFF680000U /* UART2 base address */
#define UART3_BASE                     0xFF690000U /* UART3 base address */
#define UART4_BASE                     0xFF6A0000U /* UART4 base address */
#define UART5_BASE                     0xFF6B0000U /* UART5 base address */
#define UART6_BASE                     0xFF6C0000U /* UART6 base address */
#define UART7_BASE                     0xFF6D0000U /* UART7 base address */
#define UART8_BASE                     0xFF6E0000U /* UART8 base address */
#define UART9_BASE                     0xFF6F0000U /* UART9 base address */
#define PWM1_BASE                      0xFF700000U /* PWM1 base address */
#define PWM2_BASE                      0xFF710000U /* PWM2 base address */
#define PWM3_BASE                      0xFF720000U /* PWM3 base address */
#define SARADC0_BASE                   0xFF730000U /* SARADC0 base address */
#define DCACHE_BASE                    0xFF9F0000U /* DCACHE base address */
#define ICACHE_BASE                    0xFF9F0000U /* ICACHE base address */
#define TIMER0_BASE                    0xFFA50000U /* TIMER0 base address */
#define TIMER1_BASE                    0xFFA50020U /* TIMER1 base address */
#define TIMER2_BASE                    0xFFA50040U /* TIMER2 base address */
#define TIMER3_BASE                    0xFFA50060U /* TIMER3 base address */
#define TIMER4_BASE                    0xFFA50080U /* TIMER4 base address */
#define TIMER5_BASE                    0xFFA500A0U /* TIMER5 base address */
#define SARADC1_BASE                   0xFFAA0000U /* SARADC1 base address */
#define GPIO3_BASE                     0xFFAC0000U /* GPIO3 base address */
#define GPIO4_BASE                     0xFFAD0000U /* GPIO4 base address */
#define MBOX0_BASE                     0xFFAE0000U /* MBOX0 base address */
#define INTMUX_BASE                    0xFFAF0000U /* INTMUX base address */
/****************************************************************************************/
/*                                                                                      */
/*                               Module Variable Section                                */
/*                                                                                      */
/****************************************************************************************/
/* Module Variable Define */

#define GPIO1_IOC           ((struct GPIO1_IOC_REG *) GPIO1_IOC_BASE)
#define GPIO2_IOC           ((struct GPIO2_IOC_REG *) GPIO2_IOC_BASE)
#define GPIO3_IOC           ((struct GPIO3_IOC_REG *) GPIO3_IOC_BASE)
#define GPIO4_IOC           ((struct GPIO4_IOC_REG *) GPIO4_IOC_BASE)
#define GPIO0_IOC           ((struct GPIO0_IOC_REG *) GPIO0_IOC_BASE)
#define UART0               ((struct UART_REG *) UART0_BASE)
#define SPI0                ((struct SPI_REG *) SPI0_BASE)
#define PWM0                ((struct PWM_REG *) PWM0_BASE)
#define GPIO0               ((struct GPIO_REG *) GPIO0_BASE)
#define GPIO1               ((struct GPIO_REG *) GPIO1_BASE)
#define GPIO2               ((struct GPIO_REG *) GPIO2_BASE)
#define SPI1                ((struct SPI_REG *) SPI1_BASE)
#define SPI2                ((struct SPI_REG *) SPI2_BASE)
#define UART1               ((struct UART_REG *) UART1_BASE)
#define UART2               ((struct UART_REG *) UART2_BASE)
#define UART3               ((struct UART_REG *) UART3_BASE)
#define UART4               ((struct UART_REG *) UART4_BASE)
#define UART5               ((struct UART_REG *) UART5_BASE)
#define UART6               ((struct UART_REG *) UART6_BASE)
#define UART7               ((struct UART_REG *) UART7_BASE)
#define UART8               ((struct UART_REG *) UART8_BASE)
#define UART9               ((struct UART_REG *) UART9_BASE)
#define PWM1                ((struct PWM_REG *) PWM1_BASE)
#define PWM2                ((struct PWM_REG *) PWM2_BASE)
#define PWM3                ((struct PWM_REG *) PWM3_BASE)
#define SARADC0             ((struct SARADC_REG *) SARADC0_BASE)
#define DCACHE              ((struct DCACHE_REG *) DCACHE_BASE)
#define ICACHE              ((struct ICACHE_REG *) ICACHE_BASE)
#define TIMER0              ((struct TIMER_REG *) TIMER0_BASE)
#define TIMER1              ((struct TIMER_REG *) TIMER1_BASE)
#define TIMER2              ((struct TIMER_REG *) TIMER2_BASE)
#define TIMER3              ((struct TIMER_REG *) TIMER3_BASE)
#define TIMER4              ((struct TIMER_REG *) TIMER4_BASE)
#define TIMER5              ((struct TIMER_REG *) TIMER5_BASE)
#define SARADC1             ((struct SARADC_REG *) SARADC1_BASE)
#define GPIO3               ((struct GPIO_REG *) GPIO3_BASE)
#define GPIO4               ((struct GPIO_REG *) GPIO4_BASE)
#define MBOX0               ((struct MBOX_REG *) MBOX0_BASE)
#define INTMUX              ((struct INTMUX_REG *) INTMUX_BASE)

#define IS_GPIO1_IOC_INSTANCE(instance) ((instance) == GPIO1_IOC)
#define IS_GPIO2_IOC_INSTANCE(instance) ((instance) == GPIO2_IOC)
#define IS_GPIO3_IOC_INSTANCE(instance) ((instance) == GPIO3_IOC)
#define IS_GPIO4_IOC_INSTANCE(instance) ((instance) == GPIO4_IOC)
#define IS_GPIO0_IOC_INSTANCE(instance) ((instance) == GPIO0_IOC)
#define IS_DCACHE_INSTANCE(instance) ((instance) == DCACHE)
#define IS_ICACHE_INSTANCE(instance) ((instance) == ICACHE)
#define IS_INTMUX_INSTANCE(instance) ((instance) == INTMUX)
#define IS_UART_INSTANCE(instance) (((instance) == UART0) || ((instance) == UART1) || ((instance) == UART2) || ((instance) == UART3) || ((instance) == UART4) || ((instance) == UART5) || ((instance) == UART6) || ((instance) == UART7) || ((instance) == UART8) || ((instance) == UART9))
#define IS_SPI_INSTANCE(instance) (((instance) == SPI0) || ((instance) == SPI1) || ((instance) == SPI2))
#define IS_PWM_INSTANCE(instance) (((instance) == PWM0) || ((instance) == PWM1) || ((instance) == PWM2) || ((instance) == PWM3))
#define IS_GPIO_INSTANCE(instance) (((instance) == GPIO0) || ((instance) == GPIO1) || ((instance) == GPIO2) || ((instance) == GPIO3) || ((instance) == GPIO4))
#define IS_SARADC_INSTANCE(instance) (((instance) == SARADC0) || ((instance) == SARADC1))
#define IS_TIMER_INSTANCE(instance) (((instance) == TIMER0) || ((instance) == TIMER1) || ((instance) == TIMER2) || ((instance) == TIMER3) || ((instance) == TIMER4) || ((instance) == TIMER5))
#define IS_MBOX_INSTANCE(instance) ((instance) == MBOX0)
/****************************************************************************************/
/*                                                                                      */
/*                               Register Bitmap Section                                */
/*                                                                                      */
/****************************************************************************************/
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
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A5_SEL_SHIFT     (4U)
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A5_SEL_MASK      (0x7U << GPIO1_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A5_SEL_SHIFT)     /* 0x00000070 */
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A6_SEL_SHIFT     (8U)
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A6_SEL_MASK      (0x7U << GPIO1_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A6_SEL_SHIFT)     /* 0x00000700 */
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A7_SEL_SHIFT     (12U)
#define GPIO1_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A7_SEL_MASK      (0x7U << GPIO1_IOC_GPIO1A_IOMUX_SEL_H_GPIO1A7_SEL_SHIFT)     /* 0x00007000 */
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
/* GPIO1B_IOMUX_SEL_H */
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_H_OFFSET                (0xCU)
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B4_SEL_SHIFT     (0U)
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B4_SEL_MASK      (0x7U << GPIO1_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B4_SEL_SHIFT)     /* 0x00000007 */
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B5_SEL_SHIFT     (4U)
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B5_SEL_MASK      (0x7U << GPIO1_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B5_SEL_SHIFT)     /* 0x00000070 */
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B6_SEL_SHIFT     (8U)
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B6_SEL_MASK      (0x7U << GPIO1_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B6_SEL_SHIFT)     /* 0x00000700 */
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B7_SEL_SHIFT     (12U)
#define GPIO1_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B7_SEL_MASK      (0x7U << GPIO1_IOC_GPIO1B_IOMUX_SEL_H_GPIO1B7_SEL_SHIFT)     /* 0x00007000 */
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
/* GPIO1D_IOMUX_SEL_H */
#define GPIO1_IOC_GPIO1D_IOMUX_SEL_H_OFFSET                (0x1CU)
#define GPIO1_IOC_GPIO1D_IOMUX_SEL_H_GPIO1D4_SEL_SHIFT     (0U)
#define GPIO1_IOC_GPIO1D_IOMUX_SEL_H_GPIO1D4_SEL_MASK      (0x7U << GPIO1_IOC_GPIO1D_IOMUX_SEL_H_GPIO1D4_SEL_SHIFT)     /* 0x00000007 */
#define GPIO1_IOC_GPIO1D_IOMUX_SEL_H_GPIO1D5_SEL_SHIFT     (4U)
#define GPIO1_IOC_GPIO1D_IOMUX_SEL_H_GPIO1D5_SEL_MASK      (0x7U << GPIO1_IOC_GPIO1D_IOMUX_SEL_H_GPIO1D5_SEL_SHIFT)     /* 0x00000070 */
#define GPIO1_IOC_GPIO1D_IOMUX_SEL_H_GPIO1D6_SEL_SHIFT     (8U)
#define GPIO1_IOC_GPIO1D_IOMUX_SEL_H_GPIO1D6_SEL_MASK      (0x7U << GPIO1_IOC_GPIO1D_IOMUX_SEL_H_GPIO1D6_SEL_SHIFT)     /* 0x00000700 */
#define GPIO1_IOC_GPIO1D_IOMUX_SEL_H_GPIO1D7_SEL_SHIFT     (12U)
#define GPIO1_IOC_GPIO1D_IOMUX_SEL_H_GPIO1D7_SEL_MASK      (0x7U << GPIO1_IOC_GPIO1D_IOMUX_SEL_H_GPIO1D7_SEL_SHIFT)     /* 0x00007000 */
/* GPIO1A_P */
#define GPIO1_IOC_GPIO1A_P_OFFSET                          (0x80U)
#define GPIO1_IOC_GPIO1A_P_GPIO1A0_P_SHIFT                 (0U)
#define GPIO1_IOC_GPIO1A_P_GPIO1A0_P_MASK                  (0x3U << GPIO1_IOC_GPIO1A_P_GPIO1A0_P_SHIFT)                 /* 0x00000003 */
#define GPIO1_IOC_GPIO1A_P_GPIO1A1_P_SHIFT                 (2U)
#define GPIO1_IOC_GPIO1A_P_GPIO1A1_P_MASK                  (0x3U << GPIO1_IOC_GPIO1A_P_GPIO1A1_P_SHIFT)                 /* 0x0000000C */
#define GPIO1_IOC_GPIO1A_P_GPIO1A2_P_SHIFT                 (4U)
#define GPIO1_IOC_GPIO1A_P_GPIO1A2_P_MASK                  (0x3U << GPIO1_IOC_GPIO1A_P_GPIO1A2_P_SHIFT)                 /* 0x00000030 */
#define GPIO1_IOC_GPIO1A_P_GPIO1A3_P_SHIFT                 (6U)
#define GPIO1_IOC_GPIO1A_P_GPIO1A3_P_MASK                  (0x3U << GPIO1_IOC_GPIO1A_P_GPIO1A3_P_SHIFT)                 /* 0x000000C0 */
#define GPIO1_IOC_GPIO1A_P_GPIO1A4_P_SHIFT                 (8U)
#define GPIO1_IOC_GPIO1A_P_GPIO1A4_P_MASK                  (0x3U << GPIO1_IOC_GPIO1A_P_GPIO1A4_P_SHIFT)                 /* 0x00000300 */
#define GPIO1_IOC_GPIO1A_P_GPIO1A5_P_SHIFT                 (10U)
#define GPIO1_IOC_GPIO1A_P_GPIO1A5_P_MASK                  (0x3U << GPIO1_IOC_GPIO1A_P_GPIO1A5_P_SHIFT)                 /* 0x00000C00 */
#define GPIO1_IOC_GPIO1A_P_GPIO1A6_P_SHIFT                 (12U)
#define GPIO1_IOC_GPIO1A_P_GPIO1A6_P_MASK                  (0x3U << GPIO1_IOC_GPIO1A_P_GPIO1A6_P_SHIFT)                 /* 0x00003000 */
#define GPIO1_IOC_GPIO1A_P_GPIO1A7_P_SHIFT                 (14U)
#define GPIO1_IOC_GPIO1A_P_GPIO1A7_P_MASK                  (0x3U << GPIO1_IOC_GPIO1A_P_GPIO1A7_P_SHIFT)                 /* 0x0000C000 */
/* GPIO1B_P */
#define GPIO1_IOC_GPIO1B_P_OFFSET                          (0x84U)
#define GPIO1_IOC_GPIO1B_P_GPIO1B0_P_SHIFT                 (0U)
#define GPIO1_IOC_GPIO1B_P_GPIO1B0_P_MASK                  (0x3U << GPIO1_IOC_GPIO1B_P_GPIO1B0_P_SHIFT)                 /* 0x00000003 */
#define GPIO1_IOC_GPIO1B_P_GPIO1B1_P_SHIFT                 (2U)
#define GPIO1_IOC_GPIO1B_P_GPIO1B1_P_MASK                  (0x3U << GPIO1_IOC_GPIO1B_P_GPIO1B1_P_SHIFT)                 /* 0x0000000C */
#define GPIO1_IOC_GPIO1B_P_GPIO1B2_P_SHIFT                 (4U)
#define GPIO1_IOC_GPIO1B_P_GPIO1B2_P_MASK                  (0x3U << GPIO1_IOC_GPIO1B_P_GPIO1B2_P_SHIFT)                 /* 0x00000030 */
#define GPIO1_IOC_GPIO1B_P_GPIO1B3_P_SHIFT                 (6U)
#define GPIO1_IOC_GPIO1B_P_GPIO1B3_P_MASK                  (0x3U << GPIO1_IOC_GPIO1B_P_GPIO1B3_P_SHIFT)                 /* 0x000000C0 */
#define GPIO1_IOC_GPIO1B_P_GPIO1B4_P_SHIFT                 (8U)
#define GPIO1_IOC_GPIO1B_P_GPIO1B4_P_MASK                  (0x3U << GPIO1_IOC_GPIO1B_P_GPIO1B4_P_SHIFT)                 /* 0x00000300 */
#define GPIO1_IOC_GPIO1B_P_GPIO1B5_P_SHIFT                 (10U)
#define GPIO1_IOC_GPIO1B_P_GPIO1B5_P_MASK                  (0x3U << GPIO1_IOC_GPIO1B_P_GPIO1B5_P_SHIFT)                 /* 0x00000C00 */
#define GPIO1_IOC_GPIO1B_P_GPIO1B6_P_SHIFT                 (12U)
#define GPIO1_IOC_GPIO1B_P_GPIO1B6_P_MASK                  (0x3U << GPIO1_IOC_GPIO1B_P_GPIO1B6_P_SHIFT)                 /* 0x00003000 */
#define GPIO1_IOC_GPIO1B_P_GPIO1B7_P_SHIFT                 (14U)
#define GPIO1_IOC_GPIO1B_P_GPIO1B7_P_MASK                  (0x3U << GPIO1_IOC_GPIO1B_P_GPIO1B7_P_SHIFT)                 /* 0x0000C000 */
/* GPIO1C_P */
#define GPIO1_IOC_GPIO1C_P_OFFSET                          (0x88U)
#define GPIO1_IOC_GPIO1C_P_GPIO1C0_P_SHIFT                 (0U)
#define GPIO1_IOC_GPIO1C_P_GPIO1C0_P_MASK                  (0x3U << GPIO1_IOC_GPIO1C_P_GPIO1C0_P_SHIFT)                 /* 0x00000003 */
#define GPIO1_IOC_GPIO1C_P_GPIO1C1_P_SHIFT                 (2U)
#define GPIO1_IOC_GPIO1C_P_GPIO1C1_P_MASK                  (0x3U << GPIO1_IOC_GPIO1C_P_GPIO1C1_P_SHIFT)                 /* 0x0000000C */
#define GPIO1_IOC_GPIO1C_P_GPIO1C2_P_SHIFT                 (4U)
#define GPIO1_IOC_GPIO1C_P_GPIO1C2_P_MASK                  (0x3U << GPIO1_IOC_GPIO1C_P_GPIO1C2_P_SHIFT)                 /* 0x00000030 */
#define GPIO1_IOC_GPIO1C_P_GPIO1C3_P_SHIFT                 (6U)
#define GPIO1_IOC_GPIO1C_P_GPIO1C3_P_MASK                  (0x3U << GPIO1_IOC_GPIO1C_P_GPIO1C3_P_SHIFT)                 /* 0x000000C0 */
#define GPIO1_IOC_GPIO1C_P_GPIO1C4_P_SHIFT                 (8U)
#define GPIO1_IOC_GPIO1C_P_GPIO1C4_P_MASK                  (0x3U << GPIO1_IOC_GPIO1C_P_GPIO1C4_P_SHIFT)                 /* 0x00000300 */
#define GPIO1_IOC_GPIO1C_P_GPIO1C5_P_SHIFT                 (10U)
#define GPIO1_IOC_GPIO1C_P_GPIO1C5_P_MASK                  (0x3U << GPIO1_IOC_GPIO1C_P_GPIO1C5_P_SHIFT)                 /* 0x00000C00 */
#define GPIO1_IOC_GPIO1C_P_GPIO1C6_P_SHIFT                 (12U)
#define GPIO1_IOC_GPIO1C_P_GPIO1C6_P_MASK                  (0x3U << GPIO1_IOC_GPIO1C_P_GPIO1C6_P_SHIFT)                 /* 0x00003000 */
#define GPIO1_IOC_GPIO1C_P_GPIO1C7_P_SHIFT                 (14U)
#define GPIO1_IOC_GPIO1C_P_GPIO1C7_P_MASK                  (0x3U << GPIO1_IOC_GPIO1C_P_GPIO1C7_P_SHIFT)                 /* 0x0000C000 */
/* GPIO1D_P */
#define GPIO1_IOC_GPIO1D_P_OFFSET                          (0x8CU)
#define GPIO1_IOC_GPIO1D_P_GPIO1D0_P_SHIFT                 (0U)
#define GPIO1_IOC_GPIO1D_P_GPIO1D0_P_MASK                  (0x3U << GPIO1_IOC_GPIO1D_P_GPIO1D0_P_SHIFT)                 /* 0x00000003 */
#define GPIO1_IOC_GPIO1D_P_GPIO1D1_P_SHIFT                 (2U)
#define GPIO1_IOC_GPIO1D_P_GPIO1D1_P_MASK                  (0x3U << GPIO1_IOC_GPIO1D_P_GPIO1D1_P_SHIFT)                 /* 0x0000000C */
#define GPIO1_IOC_GPIO1D_P_GPIO1D2_P_SHIFT                 (4U)
#define GPIO1_IOC_GPIO1D_P_GPIO1D2_P_MASK                  (0x3U << GPIO1_IOC_GPIO1D_P_GPIO1D2_P_SHIFT)                 /* 0x00000030 */
#define GPIO1_IOC_GPIO1D_P_GPIO1D3_P_SHIFT                 (6U)
#define GPIO1_IOC_GPIO1D_P_GPIO1D3_P_MASK                  (0x3U << GPIO1_IOC_GPIO1D_P_GPIO1D3_P_SHIFT)                 /* 0x000000C0 */
#define GPIO1_IOC_GPIO1D_P_GPIO1D4_P_SHIFT                 (8U)
#define GPIO1_IOC_GPIO1D_P_GPIO1D4_P_MASK                  (0x3U << GPIO1_IOC_GPIO1D_P_GPIO1D4_P_SHIFT)                 /* 0x00000300 */
#define GPIO1_IOC_GPIO1D_P_GPIO1D5_P_SHIFT                 (10U)
#define GPIO1_IOC_GPIO1D_P_GPIO1D5_P_MASK                  (0x3U << GPIO1_IOC_GPIO1D_P_GPIO1D5_P_SHIFT)                 /* 0x00000C00 */
#define GPIO1_IOC_GPIO1D_P_GPIO1D6_P_SHIFT                 (12U)
#define GPIO1_IOC_GPIO1D_P_GPIO1D6_P_MASK                  (0x3U << GPIO1_IOC_GPIO1D_P_GPIO1D6_P_SHIFT)                 /* 0x00003000 */
#define GPIO1_IOC_GPIO1D_P_GPIO1D7_P_SHIFT                 (14U)
#define GPIO1_IOC_GPIO1D_P_GPIO1D7_P_MASK                  (0x3U << GPIO1_IOC_GPIO1D_P_GPIO1D7_P_SHIFT)                 /* 0x0000C000 */
/* GPIO1A_IE */
#define GPIO1_IOC_GPIO1A_IE_OFFSET                         (0xC0U)
#define GPIO1_IOC_GPIO1A_IE_GPIO1A0_IE_SHIFT               (0U)
#define GPIO1_IOC_GPIO1A_IE_GPIO1A0_IE_MASK                (0x3U << GPIO1_IOC_GPIO1A_IE_GPIO1A0_IE_SHIFT)               /* 0x00000003 */
#define GPIO1_IOC_GPIO1A_IE_GPIO1A1_IE_SHIFT               (2U)
#define GPIO1_IOC_GPIO1A_IE_GPIO1A1_IE_MASK                (0x3U << GPIO1_IOC_GPIO1A_IE_GPIO1A1_IE_SHIFT)               /* 0x0000000C */
#define GPIO1_IOC_GPIO1A_IE_GPIO1A2_IE_SHIFT               (4U)
#define GPIO1_IOC_GPIO1A_IE_GPIO1A2_IE_MASK                (0x3U << GPIO1_IOC_GPIO1A_IE_GPIO1A2_IE_SHIFT)               /* 0x00000030 */
#define GPIO1_IOC_GPIO1A_IE_GPIO1A3_IE_SHIFT               (6U)
#define GPIO1_IOC_GPIO1A_IE_GPIO1A3_IE_MASK                (0x3U << GPIO1_IOC_GPIO1A_IE_GPIO1A3_IE_SHIFT)               /* 0x000000C0 */
#define GPIO1_IOC_GPIO1A_IE_GPIO1A4_IE_SHIFT               (8U)
#define GPIO1_IOC_GPIO1A_IE_GPIO1A4_IE_MASK                (0x3U << GPIO1_IOC_GPIO1A_IE_GPIO1A4_IE_SHIFT)               /* 0x00000300 */
#define GPIO1_IOC_GPIO1A_IE_GPIO1A5_IE_SHIFT               (10U)
#define GPIO1_IOC_GPIO1A_IE_GPIO1A5_IE_MASK                (0x3U << GPIO1_IOC_GPIO1A_IE_GPIO1A5_IE_SHIFT)               /* 0x00000C00 */
#define GPIO1_IOC_GPIO1A_IE_GPIO1A6_IE_SHIFT               (12U)
#define GPIO1_IOC_GPIO1A_IE_GPIO1A6_IE_MASK                (0x3U << GPIO1_IOC_GPIO1A_IE_GPIO1A6_IE_SHIFT)               /* 0x00003000 */
#define GPIO1_IOC_GPIO1A_IE_GPIO1A7_IE_SHIFT               (14U)
#define GPIO1_IOC_GPIO1A_IE_GPIO1A7_IE_MASK                (0x3U << GPIO1_IOC_GPIO1A_IE_GPIO1A7_IE_SHIFT)               /* 0x0000C000 */
/* GPIO1B_IE */
#define GPIO1_IOC_GPIO1B_IE_OFFSET                         (0xC4U)
#define GPIO1_IOC_GPIO1B_IE_GPIO1B0_IE_SHIFT               (0U)
#define GPIO1_IOC_GPIO1B_IE_GPIO1B0_IE_MASK                (0x3U << GPIO1_IOC_GPIO1B_IE_GPIO1B0_IE_SHIFT)               /* 0x00000003 */
#define GPIO1_IOC_GPIO1B_IE_GPIO1B1_IE_SHIFT               (2U)
#define GPIO1_IOC_GPIO1B_IE_GPIO1B1_IE_MASK                (0x3U << GPIO1_IOC_GPIO1B_IE_GPIO1B1_IE_SHIFT)               /* 0x0000000C */
#define GPIO1_IOC_GPIO1B_IE_GPIO1B2_IE_SHIFT               (4U)
#define GPIO1_IOC_GPIO1B_IE_GPIO1B2_IE_MASK                (0x3U << GPIO1_IOC_GPIO1B_IE_GPIO1B2_IE_SHIFT)               /* 0x00000030 */
#define GPIO1_IOC_GPIO1B_IE_GPIO1B3_IE_SHIFT               (6U)
#define GPIO1_IOC_GPIO1B_IE_GPIO1B3_IE_MASK                (0x3U << GPIO1_IOC_GPIO1B_IE_GPIO1B3_IE_SHIFT)               /* 0x000000C0 */
#define GPIO1_IOC_GPIO1B_IE_GPIO1B4_IE_SHIFT               (8U)
#define GPIO1_IOC_GPIO1B_IE_GPIO1B4_IE_MASK                (0x3U << GPIO1_IOC_GPIO1B_IE_GPIO1B4_IE_SHIFT)               /* 0x00000300 */
#define GPIO1_IOC_GPIO1B_IE_GPIO1B5_IE_SHIFT               (10U)
#define GPIO1_IOC_GPIO1B_IE_GPIO1B5_IE_MASK                (0x3U << GPIO1_IOC_GPIO1B_IE_GPIO1B5_IE_SHIFT)               /* 0x00000C00 */
#define GPIO1_IOC_GPIO1B_IE_GPIO1B6_IE_SHIFT               (12U)
#define GPIO1_IOC_GPIO1B_IE_GPIO1B6_IE_MASK                (0x3U << GPIO1_IOC_GPIO1B_IE_GPIO1B6_IE_SHIFT)               /* 0x00003000 */
#define GPIO1_IOC_GPIO1B_IE_GPIO1B7_IE_SHIFT               (14U)
#define GPIO1_IOC_GPIO1B_IE_GPIO1B7_IE_MASK                (0x3U << GPIO1_IOC_GPIO1B_IE_GPIO1B7_IE_SHIFT)               /* 0x0000C000 */
/* GPIO1C_IE */
#define GPIO1_IOC_GPIO1C_IE_OFFSET                         (0xC8U)
#define GPIO1_IOC_GPIO1C_IE_GPIO1C0_IE_SHIFT               (0U)
#define GPIO1_IOC_GPIO1C_IE_GPIO1C0_IE_MASK                (0x3U << GPIO1_IOC_GPIO1C_IE_GPIO1C0_IE_SHIFT)               /* 0x00000003 */
#define GPIO1_IOC_GPIO1C_IE_GPIO1C1_IE_SHIFT               (2U)
#define GPIO1_IOC_GPIO1C_IE_GPIO1C1_IE_MASK                (0x3U << GPIO1_IOC_GPIO1C_IE_GPIO1C1_IE_SHIFT)               /* 0x0000000C */
#define GPIO1_IOC_GPIO1C_IE_GPIO1C2_IE_SHIFT               (4U)
#define GPIO1_IOC_GPIO1C_IE_GPIO1C2_IE_MASK                (0x3U << GPIO1_IOC_GPIO1C_IE_GPIO1C2_IE_SHIFT)               /* 0x00000030 */
#define GPIO1_IOC_GPIO1C_IE_GPIO1C3_IE_SHIFT               (6U)
#define GPIO1_IOC_GPIO1C_IE_GPIO1C3_IE_MASK                (0x3U << GPIO1_IOC_GPIO1C_IE_GPIO1C3_IE_SHIFT)               /* 0x000000C0 */
#define GPIO1_IOC_GPIO1C_IE_GPIO1C4_IE_SHIFT               (8U)
#define GPIO1_IOC_GPIO1C_IE_GPIO1C4_IE_MASK                (0x3U << GPIO1_IOC_GPIO1C_IE_GPIO1C4_IE_SHIFT)               /* 0x00000300 */
#define GPIO1_IOC_GPIO1C_IE_GPIO1C5_IE_SHIFT               (10U)
#define GPIO1_IOC_GPIO1C_IE_GPIO1C5_IE_MASK                (0x3U << GPIO1_IOC_GPIO1C_IE_GPIO1C5_IE_SHIFT)               /* 0x00000C00 */
#define GPIO1_IOC_GPIO1C_IE_GPIO1C6_IE_SHIFT               (12U)
#define GPIO1_IOC_GPIO1C_IE_GPIO1C6_IE_MASK                (0x3U << GPIO1_IOC_GPIO1C_IE_GPIO1C6_IE_SHIFT)               /* 0x00003000 */
#define GPIO1_IOC_GPIO1C_IE_GPIO1C7_IE_SHIFT               (14U)
#define GPIO1_IOC_GPIO1C_IE_GPIO1C7_IE_MASK                (0x3U << GPIO1_IOC_GPIO1C_IE_GPIO1C7_IE_SHIFT)               /* 0x0000C000 */
/* GPIO1D_IE */
#define GPIO1_IOC_GPIO1D_IE_OFFSET                         (0xCCU)
#define GPIO1_IOC_GPIO1D_IE_GPIO1D0_IE_SHIFT               (0U)
#define GPIO1_IOC_GPIO1D_IE_GPIO1D0_IE_MASK                (0x3U << GPIO1_IOC_GPIO1D_IE_GPIO1D0_IE_SHIFT)               /* 0x00000003 */
#define GPIO1_IOC_GPIO1D_IE_GPIO1D1_IE_SHIFT               (2U)
#define GPIO1_IOC_GPIO1D_IE_GPIO1D1_IE_MASK                (0x3U << GPIO1_IOC_GPIO1D_IE_GPIO1D1_IE_SHIFT)               /* 0x0000000C */
#define GPIO1_IOC_GPIO1D_IE_GPIO1D2_IE_SHIFT               (4U)
#define GPIO1_IOC_GPIO1D_IE_GPIO1D2_IE_MASK                (0x3U << GPIO1_IOC_GPIO1D_IE_GPIO1D2_IE_SHIFT)               /* 0x00000030 */
#define GPIO1_IOC_GPIO1D_IE_GPIO1D3_IE_SHIFT               (6U)
#define GPIO1_IOC_GPIO1D_IE_GPIO1D3_IE_MASK                (0x3U << GPIO1_IOC_GPIO1D_IE_GPIO1D3_IE_SHIFT)               /* 0x000000C0 */
#define GPIO1_IOC_GPIO1D_IE_GPIO1D4_IE_SHIFT               (8U)
#define GPIO1_IOC_GPIO1D_IE_GPIO1D4_IE_MASK                (0x3U << GPIO1_IOC_GPIO1D_IE_GPIO1D4_IE_SHIFT)               /* 0x00000300 */
#define GPIO1_IOC_GPIO1D_IE_GPIO1D5_IE_SHIFT               (10U)
#define GPIO1_IOC_GPIO1D_IE_GPIO1D5_IE_MASK                (0x3U << GPIO1_IOC_GPIO1D_IE_GPIO1D5_IE_SHIFT)               /* 0x00000C00 */
#define GPIO1_IOC_GPIO1D_IE_GPIO1D6_IE_SHIFT               (12U)
#define GPIO1_IOC_GPIO1D_IE_GPIO1D6_IE_MASK                (0x3U << GPIO1_IOC_GPIO1D_IE_GPIO1D6_IE_SHIFT)               /* 0x00003000 */
#define GPIO1_IOC_GPIO1D_IE_GPIO1D7_IE_SHIFT               (14U)
#define GPIO1_IOC_GPIO1D_IE_GPIO1D7_IE_MASK                (0x3U << GPIO1_IOC_GPIO1D_IE_GPIO1D7_IE_SHIFT)               /* 0x0000C000 */
/* GPIO1A_OD */
#define GPIO1_IOC_GPIO1A_OD_OFFSET                         (0x100U)
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
#define GPIO1_IOC_GPIO1A_OD_GPIO1A5_OD_SHIFT               (5U)
#define GPIO1_IOC_GPIO1A_OD_GPIO1A5_OD_MASK                (0x1U << GPIO1_IOC_GPIO1A_OD_GPIO1A5_OD_SHIFT)               /* 0x00000020 */
#define GPIO1_IOC_GPIO1A_OD_GPIO1A6_OD_SHIFT               (6U)
#define GPIO1_IOC_GPIO1A_OD_GPIO1A6_OD_MASK                (0x1U << GPIO1_IOC_GPIO1A_OD_GPIO1A6_OD_SHIFT)               /* 0x00000040 */
#define GPIO1_IOC_GPIO1A_OD_GPIO1A7_OD_SHIFT               (7U)
#define GPIO1_IOC_GPIO1A_OD_GPIO1A7_OD_MASK                (0x1U << GPIO1_IOC_GPIO1A_OD_GPIO1A7_OD_SHIFT)               /* 0x00000080 */
/* GPIO1B_OD */
#define GPIO1_IOC_GPIO1B_OD_OFFSET                         (0x104U)
#define GPIO1_IOC_GPIO1B_OD_GPIO1B0_OD_SHIFT               (0U)
#define GPIO1_IOC_GPIO1B_OD_GPIO1B0_OD_MASK                (0x1U << GPIO1_IOC_GPIO1B_OD_GPIO1B0_OD_SHIFT)               /* 0x00000001 */
#define GPIO1_IOC_GPIO1B_OD_GPIO1B1_OD_SHIFT               (1U)
#define GPIO1_IOC_GPIO1B_OD_GPIO1B1_OD_MASK                (0x1U << GPIO1_IOC_GPIO1B_OD_GPIO1B1_OD_SHIFT)               /* 0x00000002 */
#define GPIO1_IOC_GPIO1B_OD_GPIO1B2_OD_SHIFT               (2U)
#define GPIO1_IOC_GPIO1B_OD_GPIO1B2_OD_MASK                (0x1U << GPIO1_IOC_GPIO1B_OD_GPIO1B2_OD_SHIFT)               /* 0x00000004 */
#define GPIO1_IOC_GPIO1B_OD_GPIO1B3_OD_SHIFT               (3U)
#define GPIO1_IOC_GPIO1B_OD_GPIO1B3_OD_MASK                (0x1U << GPIO1_IOC_GPIO1B_OD_GPIO1B3_OD_SHIFT)               /* 0x00000008 */
#define GPIO1_IOC_GPIO1B_OD_GPIO1B4_OD_SHIFT               (4U)
#define GPIO1_IOC_GPIO1B_OD_GPIO1B4_OD_MASK                (0x1U << GPIO1_IOC_GPIO1B_OD_GPIO1B4_OD_SHIFT)               /* 0x00000010 */
#define GPIO1_IOC_GPIO1B_OD_GPIO1B5_OD_SHIFT               (5U)
#define GPIO1_IOC_GPIO1B_OD_GPIO1B5_OD_MASK                (0x1U << GPIO1_IOC_GPIO1B_OD_GPIO1B5_OD_SHIFT)               /* 0x00000020 */
#define GPIO1_IOC_GPIO1B_OD_GPIO1B6_OD_SHIFT               (6U)
#define GPIO1_IOC_GPIO1B_OD_GPIO1B6_OD_MASK                (0x1U << GPIO1_IOC_GPIO1B_OD_GPIO1B6_OD_SHIFT)               /* 0x00000040 */
#define GPIO1_IOC_GPIO1B_OD_GPIO1B7_OD_SHIFT               (7U)
#define GPIO1_IOC_GPIO1B_OD_GPIO1B7_OD_MASK                (0x1U << GPIO1_IOC_GPIO1B_OD_GPIO1B7_OD_SHIFT)               /* 0x00000080 */
/* GPIO1C_OD */
#define GPIO1_IOC_GPIO1C_OD_OFFSET                         (0x108U)
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
#define GPIO1_IOC_GPIO1D_OD_OFFSET                         (0x10CU)
#define GPIO1_IOC_GPIO1D_OD_GPIO1D0_OD_SHIFT               (0U)
#define GPIO1_IOC_GPIO1D_OD_GPIO1D0_OD_MASK                (0x1U << GPIO1_IOC_GPIO1D_OD_GPIO1D0_OD_SHIFT)               /* 0x00000001 */
#define GPIO1_IOC_GPIO1D_OD_GPIO1D1_OD_SHIFT               (1U)
#define GPIO1_IOC_GPIO1D_OD_GPIO1D1_OD_MASK                (0x1U << GPIO1_IOC_GPIO1D_OD_GPIO1D1_OD_SHIFT)               /* 0x00000002 */
#define GPIO1_IOC_GPIO1D_OD_GPIO1D2_OD_SHIFT               (2U)
#define GPIO1_IOC_GPIO1D_OD_GPIO1D2_OD_MASK                (0x1U << GPIO1_IOC_GPIO1D_OD_GPIO1D2_OD_SHIFT)               /* 0x00000004 */
#define GPIO1_IOC_GPIO1D_OD_GPIO1D3_OD_SHIFT               (3U)
#define GPIO1_IOC_GPIO1D_OD_GPIO1D3_OD_MASK                (0x1U << GPIO1_IOC_GPIO1D_OD_GPIO1D3_OD_SHIFT)               /* 0x00000008 */
#define GPIO1_IOC_GPIO1D_OD_GPIO1D4_OD_SHIFT               (4U)
#define GPIO1_IOC_GPIO1D_OD_GPIO1D4_OD_MASK                (0x1U << GPIO1_IOC_GPIO1D_OD_GPIO1D4_OD_SHIFT)               /* 0x00000010 */
#define GPIO1_IOC_GPIO1D_OD_GPIO1D5_OD_SHIFT               (5U)
#define GPIO1_IOC_GPIO1D_OD_GPIO1D5_OD_MASK                (0x1U << GPIO1_IOC_GPIO1D_OD_GPIO1D5_OD_SHIFT)               /* 0x00000020 */
#define GPIO1_IOC_GPIO1D_OD_GPIO1D6_OD_SHIFT               (6U)
#define GPIO1_IOC_GPIO1D_OD_GPIO1D6_OD_MASK                (0x1U << GPIO1_IOC_GPIO1D_OD_GPIO1D6_OD_SHIFT)               /* 0x00000040 */
#define GPIO1_IOC_GPIO1D_OD_GPIO1D7_OD_SHIFT               (7U)
#define GPIO1_IOC_GPIO1D_OD_GPIO1D7_OD_MASK                (0x1U << GPIO1_IOC_GPIO1D_OD_GPIO1D7_OD_SHIFT)               /* 0x00000080 */
/* GPIO1A_SUS */
#define GPIO1_IOC_GPIO1A_SUS_OFFSET                        (0x140U)
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
#define GPIO1_IOC_GPIO1A_SUS_GPIO1A5_SUS_SHIFT             (5U)
#define GPIO1_IOC_GPIO1A_SUS_GPIO1A5_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1A_SUS_GPIO1A5_SUS_SHIFT)             /* 0x00000020 */
#define GPIO1_IOC_GPIO1A_SUS_GPIO1A6_SUS_SHIFT             (6U)
#define GPIO1_IOC_GPIO1A_SUS_GPIO1A6_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1A_SUS_GPIO1A6_SUS_SHIFT)             /* 0x00000040 */
#define GPIO1_IOC_GPIO1A_SUS_GPIO1A7_SUS_SHIFT             (7U)
#define GPIO1_IOC_GPIO1A_SUS_GPIO1A7_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1A_SUS_GPIO1A7_SUS_SHIFT)             /* 0x00000080 */
/* GPIO1B_SUS */
#define GPIO1_IOC_GPIO1B_SUS_OFFSET                        (0x144U)
#define GPIO1_IOC_GPIO1B_SUS_GPIO1B0_SUS_SHIFT             (0U)
#define GPIO1_IOC_GPIO1B_SUS_GPIO1B0_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1B_SUS_GPIO1B0_SUS_SHIFT)             /* 0x00000001 */
#define GPIO1_IOC_GPIO1B_SUS_GPIO1B1_SUS_SHIFT             (1U)
#define GPIO1_IOC_GPIO1B_SUS_GPIO1B1_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1B_SUS_GPIO1B1_SUS_SHIFT)             /* 0x00000002 */
#define GPIO1_IOC_GPIO1B_SUS_GPIO1B2_SUS_SHIFT             (2U)
#define GPIO1_IOC_GPIO1B_SUS_GPIO1B2_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1B_SUS_GPIO1B2_SUS_SHIFT)             /* 0x00000004 */
#define GPIO1_IOC_GPIO1B_SUS_GPIO1B3_SUS_SHIFT             (3U)
#define GPIO1_IOC_GPIO1B_SUS_GPIO1B3_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1B_SUS_GPIO1B3_SUS_SHIFT)             /* 0x00000008 */
#define GPIO1_IOC_GPIO1B_SUS_GPIO1B4_SUS_SHIFT             (4U)
#define GPIO1_IOC_GPIO1B_SUS_GPIO1B4_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1B_SUS_GPIO1B4_SUS_SHIFT)             /* 0x00000010 */
#define GPIO1_IOC_GPIO1B_SUS_GPIO1B5_SUS_SHIFT             (5U)
#define GPIO1_IOC_GPIO1B_SUS_GPIO1B5_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1B_SUS_GPIO1B5_SUS_SHIFT)             /* 0x00000020 */
#define GPIO1_IOC_GPIO1B_SUS_GPIO1B6_SUS_SHIFT             (6U)
#define GPIO1_IOC_GPIO1B_SUS_GPIO1B6_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1B_SUS_GPIO1B6_SUS_SHIFT)             /* 0x00000040 */
#define GPIO1_IOC_GPIO1B_SUS_GPIO1B7_SUS_SHIFT             (7U)
#define GPIO1_IOC_GPIO1B_SUS_GPIO1B7_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1B_SUS_GPIO1B7_SUS_SHIFT)             /* 0x00000080 */
/* GPIO1C_SUS */
#define GPIO1_IOC_GPIO1C_SUS_OFFSET                        (0x148U)
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
#define GPIO1_IOC_GPIO1D_SUS_OFFSET                        (0x14CU)
#define GPIO1_IOC_GPIO1D_SUS_GPIO1D0_SUS_SHIFT             (0U)
#define GPIO1_IOC_GPIO1D_SUS_GPIO1D0_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1D_SUS_GPIO1D0_SUS_SHIFT)             /* 0x00000001 */
#define GPIO1_IOC_GPIO1D_SUS_GPIO1D1_SUS_SHIFT             (1U)
#define GPIO1_IOC_GPIO1D_SUS_GPIO1D1_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1D_SUS_GPIO1D1_SUS_SHIFT)             /* 0x00000002 */
#define GPIO1_IOC_GPIO1D_SUS_GPIO1D2_SUS_SHIFT             (2U)
#define GPIO1_IOC_GPIO1D_SUS_GPIO1D2_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1D_SUS_GPIO1D2_SUS_SHIFT)             /* 0x00000004 */
#define GPIO1_IOC_GPIO1D_SUS_GPIO1D3_SUS_SHIFT             (3U)
#define GPIO1_IOC_GPIO1D_SUS_GPIO1D3_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1D_SUS_GPIO1D3_SUS_SHIFT)             /* 0x00000008 */
#define GPIO1_IOC_GPIO1D_SUS_GPIO1D4_SUS_SHIFT             (4U)
#define GPIO1_IOC_GPIO1D_SUS_GPIO1D4_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1D_SUS_GPIO1D4_SUS_SHIFT)             /* 0x00000010 */
#define GPIO1_IOC_GPIO1D_SUS_GPIO1D5_SUS_SHIFT             (5U)
#define GPIO1_IOC_GPIO1D_SUS_GPIO1D5_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1D_SUS_GPIO1D5_SUS_SHIFT)             /* 0x00000020 */
#define GPIO1_IOC_GPIO1D_SUS_GPIO1D6_SUS_SHIFT             (6U)
#define GPIO1_IOC_GPIO1D_SUS_GPIO1D6_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1D_SUS_GPIO1D6_SUS_SHIFT)             /* 0x00000040 */
#define GPIO1_IOC_GPIO1D_SUS_GPIO1D7_SUS_SHIFT             (7U)
#define GPIO1_IOC_GPIO1D_SUS_GPIO1D7_SUS_MASK              (0x1U << GPIO1_IOC_GPIO1D_SUS_GPIO1D7_SUS_SHIFT)             /* 0x00000080 */
/* GPIO1A_SL */
#define GPIO1_IOC_GPIO1A_SL_OFFSET                         (0x180U)
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
#define GPIO1_IOC_GPIO1A_SL_GPIO1A5_SL_SHIFT               (10U)
#define GPIO1_IOC_GPIO1A_SL_GPIO1A5_SL_MASK                (0x3U << GPIO1_IOC_GPIO1A_SL_GPIO1A5_SL_SHIFT)               /* 0x00000C00 */
#define GPIO1_IOC_GPIO1A_SL_GPIO1A6_SL_SHIFT               (12U)
#define GPIO1_IOC_GPIO1A_SL_GPIO1A6_SL_MASK                (0x3U << GPIO1_IOC_GPIO1A_SL_GPIO1A6_SL_SHIFT)               /* 0x00003000 */
#define GPIO1_IOC_GPIO1A_SL_GPIO1A7_SL_SHIFT               (14U)
#define GPIO1_IOC_GPIO1A_SL_GPIO1A7_SL_MASK                (0x3U << GPIO1_IOC_GPIO1A_SL_GPIO1A7_SL_SHIFT)               /* 0x0000C000 */
/* GPIO1B_SL */
#define GPIO1_IOC_GPIO1B_SL_OFFSET                         (0x184U)
#define GPIO1_IOC_GPIO1B_SL_GPIO1B0_SL_SHIFT               (0U)
#define GPIO1_IOC_GPIO1B_SL_GPIO1B0_SL_MASK                (0x3U << GPIO1_IOC_GPIO1B_SL_GPIO1B0_SL_SHIFT)               /* 0x00000003 */
#define GPIO1_IOC_GPIO1B_SL_GPIO1B1_SL_SHIFT               (2U)
#define GPIO1_IOC_GPIO1B_SL_GPIO1B1_SL_MASK                (0x3U << GPIO1_IOC_GPIO1B_SL_GPIO1B1_SL_SHIFT)               /* 0x0000000C */
#define GPIO1_IOC_GPIO1B_SL_GPIO1B2_SL_SHIFT               (4U)
#define GPIO1_IOC_GPIO1B_SL_GPIO1B2_SL_MASK                (0x3U << GPIO1_IOC_GPIO1B_SL_GPIO1B2_SL_SHIFT)               /* 0x00000030 */
#define GPIO1_IOC_GPIO1B_SL_GPIO1B3_SL_SHIFT               (6U)
#define GPIO1_IOC_GPIO1B_SL_GPIO1B3_SL_MASK                (0x3U << GPIO1_IOC_GPIO1B_SL_GPIO1B3_SL_SHIFT)               /* 0x000000C0 */
#define GPIO1_IOC_GPIO1B_SL_GPIO1B4_SL_SHIFT               (8U)
#define GPIO1_IOC_GPIO1B_SL_GPIO1B4_SL_MASK                (0x3U << GPIO1_IOC_GPIO1B_SL_GPIO1B4_SL_SHIFT)               /* 0x00000300 */
#define GPIO1_IOC_GPIO1B_SL_GPIO1B5_SL_SHIFT               (10U)
#define GPIO1_IOC_GPIO1B_SL_GPIO1B5_SL_MASK                (0x3U << GPIO1_IOC_GPIO1B_SL_GPIO1B5_SL_SHIFT)               /* 0x00000C00 */
#define GPIO1_IOC_GPIO1B_SL_GPIO1B6_SL_SHIFT               (12U)
#define GPIO1_IOC_GPIO1B_SL_GPIO1B6_SL_MASK                (0x3U << GPIO1_IOC_GPIO1B_SL_GPIO1B6_SL_SHIFT)               /* 0x00003000 */
#define GPIO1_IOC_GPIO1B_SL_GPIO1B7_SL_SHIFT               (14U)
#define GPIO1_IOC_GPIO1B_SL_GPIO1B7_SL_MASK                (0x3U << GPIO1_IOC_GPIO1B_SL_GPIO1B7_SL_SHIFT)               /* 0x0000C000 */
/* GPIO1C_SL */
#define GPIO1_IOC_GPIO1C_SL_OFFSET                         (0x188U)
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
#define GPIO1_IOC_GPIO1D_SL_OFFSET                         (0x18CU)
#define GPIO1_IOC_GPIO1D_SL_GPIO1D0_SL_SHIFT               (0U)
#define GPIO1_IOC_GPIO1D_SL_GPIO1D0_SL_MASK                (0x3U << GPIO1_IOC_GPIO1D_SL_GPIO1D0_SL_SHIFT)               /* 0x00000003 */
#define GPIO1_IOC_GPIO1D_SL_GPIO1D1_SL_SHIFT               (2U)
#define GPIO1_IOC_GPIO1D_SL_GPIO1D1_SL_MASK                (0x3U << GPIO1_IOC_GPIO1D_SL_GPIO1D1_SL_SHIFT)               /* 0x0000000C */
#define GPIO1_IOC_GPIO1D_SL_GPIO1D2_SL_SHIFT               (4U)
#define GPIO1_IOC_GPIO1D_SL_GPIO1D2_SL_MASK                (0x3U << GPIO1_IOC_GPIO1D_SL_GPIO1D2_SL_SHIFT)               /* 0x00000030 */
#define GPIO1_IOC_GPIO1D_SL_GPIO1D3_SL_SHIFT               (6U)
#define GPIO1_IOC_GPIO1D_SL_GPIO1D3_SL_MASK                (0x3U << GPIO1_IOC_GPIO1D_SL_GPIO1D3_SL_SHIFT)               /* 0x000000C0 */
#define GPIO1_IOC_GPIO1D_SL_GPIO1D4_SL_SHIFT               (8U)
#define GPIO1_IOC_GPIO1D_SL_GPIO1D4_SL_MASK                (0x3U << GPIO1_IOC_GPIO1D_SL_GPIO1D4_SL_SHIFT)               /* 0x00000300 */
#define GPIO1_IOC_GPIO1D_SL_GPIO1D5_SL_SHIFT               (10U)
#define GPIO1_IOC_GPIO1D_SL_GPIO1D5_SL_MASK                (0x3U << GPIO1_IOC_GPIO1D_SL_GPIO1D5_SL_SHIFT)               /* 0x00000C00 */
#define GPIO1_IOC_GPIO1D_SL_GPIO1D6_SL_SHIFT               (12U)
#define GPIO1_IOC_GPIO1D_SL_GPIO1D6_SL_MASK                (0x3U << GPIO1_IOC_GPIO1D_SL_GPIO1D6_SL_SHIFT)               /* 0x00003000 */
#define GPIO1_IOC_GPIO1D_SL_GPIO1D7_SL_SHIFT               (14U)
#define GPIO1_IOC_GPIO1D_SL_GPIO1D7_SL_MASK                (0x3U << GPIO1_IOC_GPIO1D_SL_GPIO1D7_SL_SHIFT)               /* 0x0000C000 */
/* GPIO1A_DS0 */
#define GPIO1_IOC_GPIO1A_DS0_OFFSET                        (0x200U)
#define GPIO1_IOC_GPIO1A_DS0_GPIO1A0_DS_SHIFT              (0U)
#define GPIO1_IOC_GPIO1A_DS0_GPIO1A0_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1A_DS0_GPIO1A0_DS_SHIFT)             /* 0x0000003F */
#define GPIO1_IOC_GPIO1A_DS0_GPIO1A1_DS_SHIFT              (8U)
#define GPIO1_IOC_GPIO1A_DS0_GPIO1A1_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1A_DS0_GPIO1A1_DS_SHIFT)             /* 0x00003F00 */
/* GPIO1A_DS1 */
#define GPIO1_IOC_GPIO1A_DS1_OFFSET                        (0x204U)
#define GPIO1_IOC_GPIO1A_DS1_GPIO1A2_DS_SHIFT              (0U)
#define GPIO1_IOC_GPIO1A_DS1_GPIO1A2_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1A_DS1_GPIO1A2_DS_SHIFT)             /* 0x0000003F */
#define GPIO1_IOC_GPIO1A_DS1_GPIO1A3_DS_SHIFT              (8U)
#define GPIO1_IOC_GPIO1A_DS1_GPIO1A3_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1A_DS1_GPIO1A3_DS_SHIFT)             /* 0x00003F00 */
/* GPIO1A_DS2 */
#define GPIO1_IOC_GPIO1A_DS2_OFFSET                        (0x208U)
#define GPIO1_IOC_GPIO1A_DS2_GPIO1A4_DS_SHIFT              (0U)
#define GPIO1_IOC_GPIO1A_DS2_GPIO1A4_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1A_DS2_GPIO1A4_DS_SHIFT)             /* 0x0000003F */
#define GPIO1_IOC_GPIO1A_DS2_GPIO1A5_DS_SHIFT              (8U)
#define GPIO1_IOC_GPIO1A_DS2_GPIO1A5_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1A_DS2_GPIO1A5_DS_SHIFT)             /* 0x00003F00 */
/* GPIO1A_DS3 */
#define GPIO1_IOC_GPIO1A_DS3_OFFSET                        (0x20CU)
#define GPIO1_IOC_GPIO1A_DS3_GPIO1A6_DS_SHIFT              (0U)
#define GPIO1_IOC_GPIO1A_DS3_GPIO1A6_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1A_DS3_GPIO1A6_DS_SHIFT)             /* 0x0000003F */
#define GPIO1_IOC_GPIO1A_DS3_GPIO1A7_DS_SHIFT              (8U)
#define GPIO1_IOC_GPIO1A_DS3_GPIO1A7_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1A_DS3_GPIO1A7_DS_SHIFT)             /* 0x00003F00 */
/* GPIO1B_DS0 */
#define GPIO1_IOC_GPIO1B_DS0_OFFSET                        (0x210U)
#define GPIO1_IOC_GPIO1B_DS0_GPIO1B0_DS_SHIFT              (0U)
#define GPIO1_IOC_GPIO1B_DS0_GPIO1B0_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1B_DS0_GPIO1B0_DS_SHIFT)             /* 0x0000003F */
#define GPIO1_IOC_GPIO1B_DS0_GPIO1B1_DS_SHIFT              (8U)
#define GPIO1_IOC_GPIO1B_DS0_GPIO1B1_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1B_DS0_GPIO1B1_DS_SHIFT)             /* 0x00003F00 */
/* GPIO1B_DS1 */
#define GPIO1_IOC_GPIO1B_DS1_OFFSET                        (0x214U)
#define GPIO1_IOC_GPIO1B_DS1_GPIO1B2_DS_SHIFT              (0U)
#define GPIO1_IOC_GPIO1B_DS1_GPIO1B2_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1B_DS1_GPIO1B2_DS_SHIFT)             /* 0x0000003F */
#define GPIO1_IOC_GPIO1B_DS1_GPIO1B3_DS_SHIFT              (8U)
#define GPIO1_IOC_GPIO1B_DS1_GPIO1B3_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1B_DS1_GPIO1B3_DS_SHIFT)             /* 0x00003F00 */
/* GPIO1B_DS2 */
#define GPIO1_IOC_GPIO1B_DS2_OFFSET                        (0x218U)
#define GPIO1_IOC_GPIO1B_DS2_GPIO1B4_DS_SHIFT              (0U)
#define GPIO1_IOC_GPIO1B_DS2_GPIO1B4_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1B_DS2_GPIO1B4_DS_SHIFT)             /* 0x0000003F */
#define GPIO1_IOC_GPIO1B_DS2_GPIO1B5_DS_SHIFT              (8U)
#define GPIO1_IOC_GPIO1B_DS2_GPIO1B5_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1B_DS2_GPIO1B5_DS_SHIFT)             /* 0x00003F00 */
/* GPIO1B_DS3 */
#define GPIO1_IOC_GPIO1B_DS3_OFFSET                        (0x21CU)
#define GPIO1_IOC_GPIO1B_DS3_GPIO1B6_DS_SHIFT              (0U)
#define GPIO1_IOC_GPIO1B_DS3_GPIO1B6_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1B_DS3_GPIO1B6_DS_SHIFT)             /* 0x0000003F */
#define GPIO1_IOC_GPIO1B_DS3_GPIO1B7_DS_SHIFT              (8U)
#define GPIO1_IOC_GPIO1B_DS3_GPIO1B7_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1B_DS3_GPIO1B7_DS_SHIFT)             /* 0x00003F00 */
/* GPIO1C_DS0 */
#define GPIO1_IOC_GPIO1C_DS0_OFFSET                        (0x220U)
#define GPIO1_IOC_GPIO1C_DS0_GPIO1C0_DS_SHIFT              (0U)
#define GPIO1_IOC_GPIO1C_DS0_GPIO1C0_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1C_DS0_GPIO1C0_DS_SHIFT)             /* 0x0000003F */
#define GPIO1_IOC_GPIO1C_DS0_GPIO1C1_DS_SHIFT              (8U)
#define GPIO1_IOC_GPIO1C_DS0_GPIO1C1_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1C_DS0_GPIO1C1_DS_SHIFT)             /* 0x00003F00 */
/* GPIO1C_DS1 */
#define GPIO1_IOC_GPIO1C_DS1_OFFSET                        (0x224U)
#define GPIO1_IOC_GPIO1C_DS1_GPIO1C2_DS_SHIFT              (0U)
#define GPIO1_IOC_GPIO1C_DS1_GPIO1C2_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1C_DS1_GPIO1C2_DS_SHIFT)             /* 0x0000003F */
#define GPIO1_IOC_GPIO1C_DS1_GPIO1C3_DS_SHIFT              (8U)
#define GPIO1_IOC_GPIO1C_DS1_GPIO1C3_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1C_DS1_GPIO1C3_DS_SHIFT)             /* 0x00003F00 */
/* GPIO1C_DS2 */
#define GPIO1_IOC_GPIO1C_DS2_OFFSET                        (0x228U)
#define GPIO1_IOC_GPIO1C_DS2_GPIO1C4_DS_SHIFT              (0U)
#define GPIO1_IOC_GPIO1C_DS2_GPIO1C4_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1C_DS2_GPIO1C4_DS_SHIFT)             /* 0x0000003F */
#define GPIO1_IOC_GPIO1C_DS2_GPIO1C5_DS_SHIFT              (8U)
#define GPIO1_IOC_GPIO1C_DS2_GPIO1C5_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1C_DS2_GPIO1C5_DS_SHIFT)             /* 0x00003F00 */
/* GPIO1C_DS3 */
#define GPIO1_IOC_GPIO1C_DS3_OFFSET                        (0x22CU)
#define GPIO1_IOC_GPIO1C_DS3_GPIO1C6_DS_SHIFT              (0U)
#define GPIO1_IOC_GPIO1C_DS3_GPIO1C6_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1C_DS3_GPIO1C6_DS_SHIFT)             /* 0x0000003F */
#define GPIO1_IOC_GPIO1C_DS3_GPIO1C7_DS_SHIFT              (8U)
#define GPIO1_IOC_GPIO1C_DS3_GPIO1C7_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1C_DS3_GPIO1C7_DS_SHIFT)             /* 0x00003F00 */
/* GPIO1D_DS0 */
#define GPIO1_IOC_GPIO1D_DS0_OFFSET                        (0x230U)
#define GPIO1_IOC_GPIO1D_DS0_GPIO1D0_DS_SHIFT              (0U)
#define GPIO1_IOC_GPIO1D_DS0_GPIO1D0_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1D_DS0_GPIO1D0_DS_SHIFT)             /* 0x0000003F */
#define GPIO1_IOC_GPIO1D_DS0_GPIO1D1_DS_SHIFT              (8U)
#define GPIO1_IOC_GPIO1D_DS0_GPIO1D1_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1D_DS0_GPIO1D1_DS_SHIFT)             /* 0x00003F00 */
/* GPIO1D_DS1 */
#define GPIO1_IOC_GPIO1D_DS1_OFFSET                        (0x234U)
#define GPIO1_IOC_GPIO1D_DS1_GPIO1D2_DS_SHIFT              (0U)
#define GPIO1_IOC_GPIO1D_DS1_GPIO1D2_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1D_DS1_GPIO1D2_DS_SHIFT)             /* 0x0000003F */
#define GPIO1_IOC_GPIO1D_DS1_GPIO1D3_DS_SHIFT              (8U)
#define GPIO1_IOC_GPIO1D_DS1_GPIO1D3_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1D_DS1_GPIO1D3_DS_SHIFT)             /* 0x00003F00 */
/* GPIO1D_DS2 */
#define GPIO1_IOC_GPIO1D_DS2_OFFSET                        (0x238U)
#define GPIO1_IOC_GPIO1D_DS2_GPIO1D4_DS_SHIFT              (0U)
#define GPIO1_IOC_GPIO1D_DS2_GPIO1D4_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1D_DS2_GPIO1D4_DS_SHIFT)             /* 0x0000003F */
#define GPIO1_IOC_GPIO1D_DS2_GPIO1D5_DS_SHIFT              (8U)
#define GPIO1_IOC_GPIO1D_DS2_GPIO1D5_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1D_DS2_GPIO1D5_DS_SHIFT)             /* 0x00003F00 */
/* GPIO1D_DS3 */
#define GPIO1_IOC_GPIO1D_DS3_OFFSET                        (0x23CU)
#define GPIO1_IOC_GPIO1D_DS3_GPIO1D6_DS_SHIFT              (0U)
#define GPIO1_IOC_GPIO1D_DS3_GPIO1D6_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1D_DS3_GPIO1D6_DS_SHIFT)             /* 0x0000003F */
#define GPIO1_IOC_GPIO1D_DS3_GPIO1D7_DS_SHIFT              (8U)
#define GPIO1_IOC_GPIO1D_DS3_GPIO1D7_DS_MASK               (0x3FU << GPIO1_IOC_GPIO1D_DS3_GPIO1D7_DS_SHIFT)             /* 0x00003F00 */
/***************************************GPIO2_IOC****************************************/
/* GPIO2A_IOMUX_SEL_L */
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_L_OFFSET                (0x20U)
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A0_SEL_SHIFT     (0U)
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A0_SEL_MASK      (0x7U << GPIO2_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A0_SEL_SHIFT)     /* 0x00000007 */
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A1_SEL_SHIFT     (4U)
#define GPIO2_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A1_SEL_MASK      (0x7U << GPIO2_IOC_GPIO2A_IOMUX_SEL_L_GPIO2A1_SEL_SHIFT)     /* 0x00000070 */
/* GPIO2A_P */
#define GPIO2_IOC_GPIO2A_P_OFFSET                          (0x90U)
#define GPIO2_IOC_GPIO2A_P_GPIO2A0_P_SHIFT                 (0U)
#define GPIO2_IOC_GPIO2A_P_GPIO2A0_P_MASK                  (0x3U << GPIO2_IOC_GPIO2A_P_GPIO2A0_P_SHIFT)                 /* 0x00000003 */
#define GPIO2_IOC_GPIO2A_P_GPIO2A1_P_SHIFT                 (2U)
#define GPIO2_IOC_GPIO2A_P_GPIO2A1_P_MASK                  (0x3U << GPIO2_IOC_GPIO2A_P_GPIO2A1_P_SHIFT)                 /* 0x0000000C */
/* GPIO2A_IE */
#define GPIO2_IOC_GPIO2A_IE_OFFSET                         (0xD0U)
#define GPIO2_IOC_GPIO2A_IE_GPIO2A0_IE_SHIFT               (0U)
#define GPIO2_IOC_GPIO2A_IE_GPIO2A0_IE_MASK                (0x3U << GPIO2_IOC_GPIO2A_IE_GPIO2A0_IE_SHIFT)               /* 0x00000003 */
#define GPIO2_IOC_GPIO2A_IE_GPIO2A1_IE_SHIFT               (2U)
#define GPIO2_IOC_GPIO2A_IE_GPIO2A1_IE_MASK                (0x3U << GPIO2_IOC_GPIO2A_IE_GPIO2A1_IE_SHIFT)               /* 0x0000000C */
/* GPIO2A_OD */
#define GPIO2_IOC_GPIO2A_OD_OFFSET                         (0x110U)
#define GPIO2_IOC_GPIO2A_OD_GPIO2A0_OD_SHIFT               (0U)
#define GPIO2_IOC_GPIO2A_OD_GPIO2A0_OD_MASK                (0x1U << GPIO2_IOC_GPIO2A_OD_GPIO2A0_OD_SHIFT)               /* 0x00000001 */
#define GPIO2_IOC_GPIO2A_OD_GPIO2A1_OD_SHIFT               (1U)
#define GPIO2_IOC_GPIO2A_OD_GPIO2A1_OD_MASK                (0x1U << GPIO2_IOC_GPIO2A_OD_GPIO2A1_OD_SHIFT)               /* 0x00000002 */
/* GPIO2A_SUS */
#define GPIO2_IOC_GPIO2A_SUS_OFFSET                        (0x150U)
#define GPIO2_IOC_GPIO2A_SUS_GPIO2A0_SUS_SHIFT             (0U)
#define GPIO2_IOC_GPIO2A_SUS_GPIO2A0_SUS_MASK              (0x1U << GPIO2_IOC_GPIO2A_SUS_GPIO2A0_SUS_SHIFT)             /* 0x00000001 */
#define GPIO2_IOC_GPIO2A_SUS_GPIO2A1_SUS_SHIFT             (1U)
#define GPIO2_IOC_GPIO2A_SUS_GPIO2A1_SUS_MASK              (0x1U << GPIO2_IOC_GPIO2A_SUS_GPIO2A1_SUS_SHIFT)             /* 0x00000002 */
/* GPIO2A_SL */
#define GPIO2_IOC_GPIO2A_SL_OFFSET                         (0x190U)
#define GPIO2_IOC_GPIO2A_SL_GPIO2A0_SL_SHIFT               (0U)
#define GPIO2_IOC_GPIO2A_SL_GPIO2A0_SL_MASK                (0x3U << GPIO2_IOC_GPIO2A_SL_GPIO2A0_SL_SHIFT)               /* 0x00000003 */
#define GPIO2_IOC_GPIO2A_SL_GPIO2A1_SL_SHIFT               (2U)
#define GPIO2_IOC_GPIO2A_SL_GPIO2A1_SL_MASK                (0x3U << GPIO2_IOC_GPIO2A_SL_GPIO2A1_SL_SHIFT)               /* 0x0000000C */
/* GPIO2A_DS0 */
#define GPIO2_IOC_GPIO2A_DS0_OFFSET                        (0x240U)
#define GPIO2_IOC_GPIO2A_DS0_GPIO2A0_DS_SHIFT              (0U)
#define GPIO2_IOC_GPIO2A_DS0_GPIO2A0_DS_MASK               (0x3FU << GPIO2_IOC_GPIO2A_DS0_GPIO2A0_DS_SHIFT)             /* 0x0000003F */
#define GPIO2_IOC_GPIO2A_DS0_GPIO2A1_DS_SHIFT              (8U)
#define GPIO2_IOC_GPIO2A_DS0_GPIO2A1_DS_MASK               (0x3FU << GPIO2_IOC_GPIO2A_DS0_GPIO2A1_DS_SHIFT)             /* 0x00003F00 */
/* IO_VSEL0 */
#define GPIO2_IOC_IO_VSEL0_OFFSET                          (0x300U)
#define GPIO2_IOC_IO_VSEL0_POC_VCCIO234_SEL_SHIFT          (0U)
#define GPIO2_IOC_IO_VSEL0_POC_VCCIO234_SEL_MASK           (0x1U << GPIO2_IOC_IO_VSEL0_POC_VCCIO234_SEL_SHIFT)          /* 0x00000001 */
#define GPIO2_IOC_IO_VSEL0_POC_VCCIO2_SEL18_SHIFT          (1U)
#define GPIO2_IOC_IO_VSEL0_POC_VCCIO2_SEL18_MASK           (0x1U << GPIO2_IOC_IO_VSEL0_POC_VCCIO2_SEL18_SHIFT)          /* 0x00000002 */
#define GPIO2_IOC_IO_VSEL0_POC_VCCIO3_SEL18_SHIFT          (2U)
#define GPIO2_IOC_IO_VSEL0_POC_VCCIO3_SEL18_MASK           (0x1U << GPIO2_IOC_IO_VSEL0_POC_VCCIO3_SEL18_SHIFT)          /* 0x00000004 */
#define GPIO2_IOC_IO_VSEL0_POC_VCCIO4_SEL18_SHIFT          (3U)
#define GPIO2_IOC_IO_VSEL0_POC_VCCIO4_SEL18_MASK           (0x1U << GPIO2_IOC_IO_VSEL0_POC_VCCIO4_SEL18_SHIFT)          /* 0x00000008 */
#define GPIO2_IOC_IO_VSEL0_POC_VCCIO2_SEL33_SHIFT          (4U)
#define GPIO2_IOC_IO_VSEL0_POC_VCCIO2_SEL33_MASK           (0x1U << GPIO2_IOC_IO_VSEL0_POC_VCCIO2_SEL33_SHIFT)          /* 0x00000010 */
#define GPIO2_IOC_IO_VSEL0_POC_VCCIO3_SEL33_SHIFT          (5U)
#define GPIO2_IOC_IO_VSEL0_POC_VCCIO3_SEL33_MASK           (0x1U << GPIO2_IOC_IO_VSEL0_POC_VCCIO3_SEL33_SHIFT)          /* 0x00000020 */
#define GPIO2_IOC_IO_VSEL0_POC_VCCIO4_SEL33_SHIFT          (6U)
#define GPIO2_IOC_IO_VSEL0_POC_VCCIO4_SEL33_MASK           (0x1U << GPIO2_IOC_IO_VSEL0_POC_VCCIO4_SEL33_SHIFT)          /* 0x00000040 */
#define GPIO2_IOC_IO_VSEL0_POC_VCCIO2_IDDQ_SHIFT           (7U)
#define GPIO2_IOC_IO_VSEL0_POC_VCCIO2_IDDQ_MASK            (0x1U << GPIO2_IOC_IO_VSEL0_POC_VCCIO2_IDDQ_SHIFT)           /* 0x00000080 */
#define GPIO2_IOC_IO_VSEL0_POC_VCCIO3_IDDQ_SHIFT           (8U)
#define GPIO2_IOC_IO_VSEL0_POC_VCCIO3_IDDQ_MASK            (0x1U << GPIO2_IOC_IO_VSEL0_POC_VCCIO3_IDDQ_SHIFT)           /* 0x00000100 */
#define GPIO2_IOC_IO_VSEL0_POC_VCCIO4_IDDQ_SHIFT           (9U)
#define GPIO2_IOC_IO_VSEL0_POC_VCCIO4_IDDQ_MASK            (0x1U << GPIO2_IOC_IO_VSEL0_POC_VCCIO4_IDDQ_SHIFT)           /* 0x00000200 */
#define GPIO2_IOC_IO_VSEL0_POC_VCCIO2_VD_SHIFT             (12U)
#define GPIO2_IOC_IO_VSEL0_POC_VCCIO2_VD_MASK              (0x1U << GPIO2_IOC_IO_VSEL0_POC_VCCIO2_VD_SHIFT)             /* 0x00001000 */
#define GPIO2_IOC_IO_VSEL0_POC_VCCIO3_VD_SHIFT             (13U)
#define GPIO2_IOC_IO_VSEL0_POC_VCCIO3_VD_MASK              (0x1U << GPIO2_IOC_IO_VSEL0_POC_VCCIO3_VD_SHIFT)             /* 0x00002000 */
#define GPIO2_IOC_IO_VSEL0_POC_VCCIO4_VD_SHIFT             (14U)
#define GPIO2_IOC_IO_VSEL0_POC_VCCIO4_VD_MASK              (0x1U << GPIO2_IOC_IO_VSEL0_POC_VCCIO4_VD_SHIFT)             /* 0x00004000 */
/* MAC1_IO_CON0 */
#define GPIO2_IOC_MAC1_IO_CON0_OFFSET                      (0x400U)
#define GPIO2_IOC_MAC1_IO_CON0_GMAC1_CLK_TX_DL_CFG_SHIFT   (0U)
#define GPIO2_IOC_MAC1_IO_CON0_GMAC1_CLK_TX_DL_CFG_MASK    (0xFFU << GPIO2_IOC_MAC1_IO_CON0_GMAC1_CLK_TX_DL_CFG_SHIFT)  /* 0x000000FF */
#define GPIO2_IOC_MAC1_IO_CON0_GMAC1_CLK_RX_DL_CFG_SHIFT   (8U)
#define GPIO2_IOC_MAC1_IO_CON0_GMAC1_CLK_RX_DL_CFG_MASK    (0xFFU << GPIO2_IOC_MAC1_IO_CON0_GMAC1_CLK_RX_DL_CFG_SHIFT)  /* 0x0000FF00 */
/* MAC1_IO_CON1 */
#define GPIO2_IOC_MAC1_IO_CON1_OFFSET                      (0x404U)
#define GPIO2_IOC_MAC1_IO_CON1_GMAC1_TXCLK_DLY_ENA_SHIFT   (0U)
#define GPIO2_IOC_MAC1_IO_CON1_GMAC1_TXCLK_DLY_ENA_MASK    (0x1U << GPIO2_IOC_MAC1_IO_CON1_GMAC1_TXCLK_DLY_ENA_SHIFT)   /* 0x00000001 */
#define GPIO2_IOC_MAC1_IO_CON1_GMAC1_RXCLK_DLY_ENA_SHIFT   (1U)
#define GPIO2_IOC_MAC1_IO_CON1_GMAC1_RXCLK_DLY_ENA_MASK    (0x1U << GPIO2_IOC_MAC1_IO_CON1_GMAC1_RXCLK_DLY_ENA_SHIFT)   /* 0x00000002 */
/* SDCARD0_IO_CON */
#define GPIO2_IOC_SDCARD0_IO_CON_OFFSET                    (0x500U)
#define GPIO2_IOC_SDCARD0_IO_CON_SDCARD_DECTN_DLY_SHIFT    (0U)
#define GPIO2_IOC_SDCARD0_IO_CON_SDCARD_DECTN_DLY_MASK     (0xFFFFFFFFU << GPIO2_IOC_SDCARD0_IO_CON_SDCARD_DECTN_DLY_SHIFT) /* 0xFFFFFFFF */
/* JTAG_M1_CON */
#define GPIO2_IOC_JTAG_M1_CON_OFFSET                       (0x504U)
#define GPIO2_IOC_JTAG_M1_CON_FORCE_JTAG_SHIFT             (0U)
#define GPIO2_IOC_JTAG_M1_CON_FORCE_JTAG_MASK              (0x1U << GPIO2_IOC_JTAG_M1_CON_FORCE_JTAG_SHIFT)             /* 0x00000001 */
#define GPIO2_IOC_JTAG_M1_CON_JTAG_SEL_M1_SHIFT            (1U)
#define GPIO2_IOC_JTAG_M1_CON_JTAG_SEL_M1_MASK             (0x3U << GPIO2_IOC_JTAG_M1_CON_JTAG_SEL_M1_SHIFT)            /* 0x00000006 */
/***************************************GPIO3_IOC****************************************/
/* GPIO3A_IOMUX_SEL_L */
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_L_OFFSET                (0x40U)
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A0_SEL_SHIFT     (0U)
#define GPIO3_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A0_SEL_MASK      (0x7U << GPIO3_IOC_GPIO3A_IOMUX_SEL_L_GPIO3A0_SEL_SHIFT)     /* 0x00000007 */
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
/* GPIO3D_IOMUX_SEL_H */
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_H_OFFSET                (0x5CU)
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_H_GPIO3D4_SEL_SHIFT     (0U)
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_H_GPIO3D4_SEL_MASK      (0x7U << GPIO3_IOC_GPIO3D_IOMUX_SEL_H_GPIO3D4_SEL_SHIFT)     /* 0x00000007 */
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_H_GPIO3D5_SEL_SHIFT     (4U)
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_H_GPIO3D5_SEL_MASK      (0x7U << GPIO3_IOC_GPIO3D_IOMUX_SEL_H_GPIO3D5_SEL_SHIFT)     /* 0x00000070 */
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_H_GPIO3D6_SEL_SHIFT     (8U)
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_H_GPIO3D6_SEL_MASK      (0x7U << GPIO3_IOC_GPIO3D_IOMUX_SEL_H_GPIO3D6_SEL_SHIFT)     /* 0x00000700 */
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_H_GPIO3D7_SEL_SHIFT     (12U)
#define GPIO3_IOC_GPIO3D_IOMUX_SEL_H_GPIO3D7_SEL_MASK      (0x7U << GPIO3_IOC_GPIO3D_IOMUX_SEL_H_GPIO3D7_SEL_SHIFT)     /* 0x00007000 */
/* GPIO3A_P */
#define GPIO3_IOC_GPIO3A_P_OFFSET                          (0xA0U)
#define GPIO3_IOC_GPIO3A_P_GPIO3A0_P_SHIFT                 (0U)
#define GPIO3_IOC_GPIO3A_P_GPIO3A0_P_MASK                  (0x3U << GPIO3_IOC_GPIO3A_P_GPIO3A0_P_SHIFT)                 /* 0x00000003 */
#define GPIO3_IOC_GPIO3A_P_GPIO3A1_P_SHIFT                 (2U)
#define GPIO3_IOC_GPIO3A_P_GPIO3A1_P_MASK                  (0x3U << GPIO3_IOC_GPIO3A_P_GPIO3A1_P_SHIFT)                 /* 0x0000000C */
#define GPIO3_IOC_GPIO3A_P_GPIO3A2_P_SHIFT                 (4U)
#define GPIO3_IOC_GPIO3A_P_GPIO3A2_P_MASK                  (0x3U << GPIO3_IOC_GPIO3A_P_GPIO3A2_P_SHIFT)                 /* 0x00000030 */
#define GPIO3_IOC_GPIO3A_P_GPIO3A3_P_SHIFT                 (6U)
#define GPIO3_IOC_GPIO3A_P_GPIO3A3_P_MASK                  (0x3U << GPIO3_IOC_GPIO3A_P_GPIO3A3_P_SHIFT)                 /* 0x000000C0 */
#define GPIO3_IOC_GPIO3A_P_GPIO3A4_P_SHIFT                 (8U)
#define GPIO3_IOC_GPIO3A_P_GPIO3A4_P_MASK                  (0x3U << GPIO3_IOC_GPIO3A_P_GPIO3A4_P_SHIFT)                 /* 0x00000300 */
#define GPIO3_IOC_GPIO3A_P_GPIO3A5_P_SHIFT                 (10U)
#define GPIO3_IOC_GPIO3A_P_GPIO3A5_P_MASK                  (0x3U << GPIO3_IOC_GPIO3A_P_GPIO3A5_P_SHIFT)                 /* 0x00000C00 */
#define GPIO3_IOC_GPIO3A_P_GPIO3A6_P_SHIFT                 (12U)
#define GPIO3_IOC_GPIO3A_P_GPIO3A6_P_MASK                  (0x3U << GPIO3_IOC_GPIO3A_P_GPIO3A6_P_SHIFT)                 /* 0x00003000 */
#define GPIO3_IOC_GPIO3A_P_GPIO3A7_P_SHIFT                 (14U)
#define GPIO3_IOC_GPIO3A_P_GPIO3A7_P_MASK                  (0x3U << GPIO3_IOC_GPIO3A_P_GPIO3A7_P_SHIFT)                 /* 0x0000C000 */
/* GPIO3B_P */
#define GPIO3_IOC_GPIO3B_P_OFFSET                          (0xA4U)
#define GPIO3_IOC_GPIO3B_P_GPIO3B0_P_SHIFT                 (0U)
#define GPIO3_IOC_GPIO3B_P_GPIO3B0_P_MASK                  (0x3U << GPIO3_IOC_GPIO3B_P_GPIO3B0_P_SHIFT)                 /* 0x00000003 */
#define GPIO3_IOC_GPIO3B_P_GPIO3B1_P_SHIFT                 (2U)
#define GPIO3_IOC_GPIO3B_P_GPIO3B1_P_MASK                  (0x3U << GPIO3_IOC_GPIO3B_P_GPIO3B1_P_SHIFT)                 /* 0x0000000C */
#define GPIO3_IOC_GPIO3B_P_GPIO3B2_P_SHIFT                 (4U)
#define GPIO3_IOC_GPIO3B_P_GPIO3B2_P_MASK                  (0x3U << GPIO3_IOC_GPIO3B_P_GPIO3B2_P_SHIFT)                 /* 0x00000030 */
#define GPIO3_IOC_GPIO3B_P_GPIO3B3_P_SHIFT                 (6U)
#define GPIO3_IOC_GPIO3B_P_GPIO3B3_P_MASK                  (0x3U << GPIO3_IOC_GPIO3B_P_GPIO3B3_P_SHIFT)                 /* 0x000000C0 */
#define GPIO3_IOC_GPIO3B_P_GPIO3B4_P_SHIFT                 (8U)
#define GPIO3_IOC_GPIO3B_P_GPIO3B4_P_MASK                  (0x3U << GPIO3_IOC_GPIO3B_P_GPIO3B4_P_SHIFT)                 /* 0x00000300 */
#define GPIO3_IOC_GPIO3B_P_GPIO3B5_P_SHIFT                 (10U)
#define GPIO3_IOC_GPIO3B_P_GPIO3B5_P_MASK                  (0x3U << GPIO3_IOC_GPIO3B_P_GPIO3B5_P_SHIFT)                 /* 0x00000C00 */
#define GPIO3_IOC_GPIO3B_P_GPIO3B6_P_SHIFT                 (12U)
#define GPIO3_IOC_GPIO3B_P_GPIO3B6_P_MASK                  (0x3U << GPIO3_IOC_GPIO3B_P_GPIO3B6_P_SHIFT)                 /* 0x00003000 */
#define GPIO3_IOC_GPIO3B_P_GPIO3B7_P_SHIFT                 (14U)
#define GPIO3_IOC_GPIO3B_P_GPIO3B7_P_MASK                  (0x3U << GPIO3_IOC_GPIO3B_P_GPIO3B7_P_SHIFT)                 /* 0x0000C000 */
/* GPIO3C_P */
#define GPIO3_IOC_GPIO3C_P_OFFSET                          (0xA8U)
#define GPIO3_IOC_GPIO3C_P_GPIO3C0_P_SHIFT                 (0U)
#define GPIO3_IOC_GPIO3C_P_GPIO3C0_P_MASK                  (0x3U << GPIO3_IOC_GPIO3C_P_GPIO3C0_P_SHIFT)                 /* 0x00000003 */
#define GPIO3_IOC_GPIO3C_P_GPIO3C1_P_SHIFT                 (2U)
#define GPIO3_IOC_GPIO3C_P_GPIO3C1_P_MASK                  (0x3U << GPIO3_IOC_GPIO3C_P_GPIO3C1_P_SHIFT)                 /* 0x0000000C */
#define GPIO3_IOC_GPIO3C_P_GPIO3C2_P_SHIFT                 (4U)
#define GPIO3_IOC_GPIO3C_P_GPIO3C2_P_MASK                  (0x3U << GPIO3_IOC_GPIO3C_P_GPIO3C2_P_SHIFT)                 /* 0x00000030 */
#define GPIO3_IOC_GPIO3C_P_GPIO3C3_P_SHIFT                 (6U)
#define GPIO3_IOC_GPIO3C_P_GPIO3C3_P_MASK                  (0x3U << GPIO3_IOC_GPIO3C_P_GPIO3C3_P_SHIFT)                 /* 0x000000C0 */
#define GPIO3_IOC_GPIO3C_P_GPIO3C4_P_SHIFT                 (8U)
#define GPIO3_IOC_GPIO3C_P_GPIO3C4_P_MASK                  (0x3U << GPIO3_IOC_GPIO3C_P_GPIO3C4_P_SHIFT)                 /* 0x00000300 */
#define GPIO3_IOC_GPIO3C_P_GPIO3C5_P_SHIFT                 (10U)
#define GPIO3_IOC_GPIO3C_P_GPIO3C5_P_MASK                  (0x3U << GPIO3_IOC_GPIO3C_P_GPIO3C5_P_SHIFT)                 /* 0x00000C00 */
#define GPIO3_IOC_GPIO3C_P_GPIO3C6_P_SHIFT                 (12U)
#define GPIO3_IOC_GPIO3C_P_GPIO3C6_P_MASK                  (0x3U << GPIO3_IOC_GPIO3C_P_GPIO3C6_P_SHIFT)                 /* 0x00003000 */
#define GPIO3_IOC_GPIO3C_P_GPIO3C7_P_SHIFT                 (14U)
#define GPIO3_IOC_GPIO3C_P_GPIO3C7_P_MASK                  (0x3U << GPIO3_IOC_GPIO3C_P_GPIO3C7_P_SHIFT)                 /* 0x0000C000 */
/* GPIO3D_P */
#define GPIO3_IOC_GPIO3D_P_OFFSET                          (0xACU)
#define GPIO3_IOC_GPIO3D_P_GPIO3D0_P_SHIFT                 (0U)
#define GPIO3_IOC_GPIO3D_P_GPIO3D0_P_MASK                  (0x3U << GPIO3_IOC_GPIO3D_P_GPIO3D0_P_SHIFT)                 /* 0x00000003 */
#define GPIO3_IOC_GPIO3D_P_GPIO3D1_P_SHIFT                 (2U)
#define GPIO3_IOC_GPIO3D_P_GPIO3D1_P_MASK                  (0x3U << GPIO3_IOC_GPIO3D_P_GPIO3D1_P_SHIFT)                 /* 0x0000000C */
#define GPIO3_IOC_GPIO3D_P_GPIO3D2_P_SHIFT                 (4U)
#define GPIO3_IOC_GPIO3D_P_GPIO3D2_P_MASK                  (0x3U << GPIO3_IOC_GPIO3D_P_GPIO3D2_P_SHIFT)                 /* 0x00000030 */
#define GPIO3_IOC_GPIO3D_P_GPIO3D3_P_SHIFT                 (6U)
#define GPIO3_IOC_GPIO3D_P_GPIO3D3_P_MASK                  (0x3U << GPIO3_IOC_GPIO3D_P_GPIO3D3_P_SHIFT)                 /* 0x000000C0 */
#define GPIO3_IOC_GPIO3D_P_GPIO3D4_P_SHIFT                 (8U)
#define GPIO3_IOC_GPIO3D_P_GPIO3D4_P_MASK                  (0x3U << GPIO3_IOC_GPIO3D_P_GPIO3D4_P_SHIFT)                 /* 0x00000300 */
#define GPIO3_IOC_GPIO3D_P_GPIO3D5_P_SHIFT                 (10U)
#define GPIO3_IOC_GPIO3D_P_GPIO3D5_P_MASK                  (0x3U << GPIO3_IOC_GPIO3D_P_GPIO3D5_P_SHIFT)                 /* 0x00000C00 */
#define GPIO3_IOC_GPIO3D_P_GPIO3D6_P_SHIFT                 (12U)
#define GPIO3_IOC_GPIO3D_P_GPIO3D6_P_MASK                  (0x3U << GPIO3_IOC_GPIO3D_P_GPIO3D6_P_SHIFT)                 /* 0x00003000 */
#define GPIO3_IOC_GPIO3D_P_GPIO3D7_P_SHIFT                 (14U)
#define GPIO3_IOC_GPIO3D_P_GPIO3D7_P_MASK                  (0x3U << GPIO3_IOC_GPIO3D_P_GPIO3D7_P_SHIFT)                 /* 0x0000C000 */
/* GPIO3A_IE */
#define GPIO3_IOC_GPIO3A_IE_OFFSET                         (0xE0U)
#define GPIO3_IOC_GPIO3A_IE_GPIO3A0_IE_SHIFT               (0U)
#define GPIO3_IOC_GPIO3A_IE_GPIO3A0_IE_MASK                (0x3U << GPIO3_IOC_GPIO3A_IE_GPIO3A0_IE_SHIFT)               /* 0x00000003 */
#define GPIO3_IOC_GPIO3A_IE_GPIO3A1_IE_SHIFT               (2U)
#define GPIO3_IOC_GPIO3A_IE_GPIO3A1_IE_MASK                (0x3U << GPIO3_IOC_GPIO3A_IE_GPIO3A1_IE_SHIFT)               /* 0x0000000C */
#define GPIO3_IOC_GPIO3A_IE_GPIO3A2_IE_SHIFT               (4U)
#define GPIO3_IOC_GPIO3A_IE_GPIO3A2_IE_MASK                (0x3U << GPIO3_IOC_GPIO3A_IE_GPIO3A2_IE_SHIFT)               /* 0x00000030 */
#define GPIO3_IOC_GPIO3A_IE_GPIO3A3_IE_SHIFT               (6U)
#define GPIO3_IOC_GPIO3A_IE_GPIO3A3_IE_MASK                (0x3U << GPIO3_IOC_GPIO3A_IE_GPIO3A3_IE_SHIFT)               /* 0x000000C0 */
#define GPIO3_IOC_GPIO3A_IE_GPIO3A4_IE_SHIFT               (8U)
#define GPIO3_IOC_GPIO3A_IE_GPIO3A4_IE_MASK                (0x3U << GPIO3_IOC_GPIO3A_IE_GPIO3A4_IE_SHIFT)               /* 0x00000300 */
#define GPIO3_IOC_GPIO3A_IE_GPIO3A5_IE_SHIFT               (10U)
#define GPIO3_IOC_GPIO3A_IE_GPIO3A5_IE_MASK                (0x3U << GPIO3_IOC_GPIO3A_IE_GPIO3A5_IE_SHIFT)               /* 0x00000C00 */
#define GPIO3_IOC_GPIO3A_IE_GPIO3A6_IE_SHIFT               (12U)
#define GPIO3_IOC_GPIO3A_IE_GPIO3A6_IE_MASK                (0x3U << GPIO3_IOC_GPIO3A_IE_GPIO3A6_IE_SHIFT)               /* 0x00003000 */
#define GPIO3_IOC_GPIO3A_IE_GPIO3A7_IE_SHIFT               (14U)
#define GPIO3_IOC_GPIO3A_IE_GPIO3A7_IE_MASK                (0x3U << GPIO3_IOC_GPIO3A_IE_GPIO3A7_IE_SHIFT)               /* 0x0000C000 */
/* GPIO3B_IE */
#define GPIO3_IOC_GPIO3B_IE_OFFSET                         (0xE4U)
#define GPIO3_IOC_GPIO3B_IE_GPIO3B0_IE_SHIFT               (0U)
#define GPIO3_IOC_GPIO3B_IE_GPIO3B0_IE_MASK                (0x3U << GPIO3_IOC_GPIO3B_IE_GPIO3B0_IE_SHIFT)               /* 0x00000003 */
#define GPIO3_IOC_GPIO3B_IE_GPIO3B1_IE_SHIFT               (2U)
#define GPIO3_IOC_GPIO3B_IE_GPIO3B1_IE_MASK                (0x3U << GPIO3_IOC_GPIO3B_IE_GPIO3B1_IE_SHIFT)               /* 0x0000000C */
#define GPIO3_IOC_GPIO3B_IE_GPIO3B2_IE_SHIFT               (4U)
#define GPIO3_IOC_GPIO3B_IE_GPIO3B2_IE_MASK                (0x3U << GPIO3_IOC_GPIO3B_IE_GPIO3B2_IE_SHIFT)               /* 0x00000030 */
#define GPIO3_IOC_GPIO3B_IE_GPIO3B3_IE_SHIFT               (6U)
#define GPIO3_IOC_GPIO3B_IE_GPIO3B3_IE_MASK                (0x3U << GPIO3_IOC_GPIO3B_IE_GPIO3B3_IE_SHIFT)               /* 0x000000C0 */
#define GPIO3_IOC_GPIO3B_IE_GPIO3B4_IE_SHIFT               (8U)
#define GPIO3_IOC_GPIO3B_IE_GPIO3B4_IE_MASK                (0x3U << GPIO3_IOC_GPIO3B_IE_GPIO3B4_IE_SHIFT)               /* 0x00000300 */
#define GPIO3_IOC_GPIO3B_IE_GPIO3B5_IE_SHIFT               (10U)
#define GPIO3_IOC_GPIO3B_IE_GPIO3B5_IE_MASK                (0x3U << GPIO3_IOC_GPIO3B_IE_GPIO3B5_IE_SHIFT)               /* 0x00000C00 */
#define GPIO3_IOC_GPIO3B_IE_GPIO3B6_IE_SHIFT               (12U)
#define GPIO3_IOC_GPIO3B_IE_GPIO3B6_IE_MASK                (0x3U << GPIO3_IOC_GPIO3B_IE_GPIO3B6_IE_SHIFT)               /* 0x00003000 */
#define GPIO3_IOC_GPIO3B_IE_GPIO3B7_IE_SHIFT               (14U)
#define GPIO3_IOC_GPIO3B_IE_GPIO3B7_IE_MASK                (0x3U << GPIO3_IOC_GPIO3B_IE_GPIO3B7_IE_SHIFT)               /* 0x0000C000 */
/* GPIO3C_IE */
#define GPIO3_IOC_GPIO3C_IE_OFFSET                         (0xE8U)
#define GPIO3_IOC_GPIO3C_IE_GPIO3C0_IE_SHIFT               (0U)
#define GPIO3_IOC_GPIO3C_IE_GPIO3C0_IE_MASK                (0x3U << GPIO3_IOC_GPIO3C_IE_GPIO3C0_IE_SHIFT)               /* 0x00000003 */
#define GPIO3_IOC_GPIO3C_IE_GPIO3C1_IE_SHIFT               (2U)
#define GPIO3_IOC_GPIO3C_IE_GPIO3C1_IE_MASK                (0x3U << GPIO3_IOC_GPIO3C_IE_GPIO3C1_IE_SHIFT)               /* 0x0000000C */
#define GPIO3_IOC_GPIO3C_IE_GPIO3C2_IE_SHIFT               (4U)
#define GPIO3_IOC_GPIO3C_IE_GPIO3C2_IE_MASK                (0x3U << GPIO3_IOC_GPIO3C_IE_GPIO3C2_IE_SHIFT)               /* 0x00000030 */
#define GPIO3_IOC_GPIO3C_IE_GPIO3C3_IE_SHIFT               (6U)
#define GPIO3_IOC_GPIO3C_IE_GPIO3C3_IE_MASK                (0x3U << GPIO3_IOC_GPIO3C_IE_GPIO3C3_IE_SHIFT)               /* 0x000000C0 */
#define GPIO3_IOC_GPIO3C_IE_GPIO3C4_IE_SHIFT               (8U)
#define GPIO3_IOC_GPIO3C_IE_GPIO3C4_IE_MASK                (0x3U << GPIO3_IOC_GPIO3C_IE_GPIO3C4_IE_SHIFT)               /* 0x00000300 */
#define GPIO3_IOC_GPIO3C_IE_GPIO3C5_IE_SHIFT               (10U)
#define GPIO3_IOC_GPIO3C_IE_GPIO3C5_IE_MASK                (0x3U << GPIO3_IOC_GPIO3C_IE_GPIO3C5_IE_SHIFT)               /* 0x00000C00 */
#define GPIO3_IOC_GPIO3C_IE_GPIO3C6_IE_SHIFT               (12U)
#define GPIO3_IOC_GPIO3C_IE_GPIO3C6_IE_MASK                (0x3U << GPIO3_IOC_GPIO3C_IE_GPIO3C6_IE_SHIFT)               /* 0x00003000 */
#define GPIO3_IOC_GPIO3C_IE_GPIO3C7_IE_SHIFT               (14U)
#define GPIO3_IOC_GPIO3C_IE_GPIO3C7_IE_MASK                (0x3U << GPIO3_IOC_GPIO3C_IE_GPIO3C7_IE_SHIFT)               /* 0x0000C000 */
/* GPIO3D_IE */
#define GPIO3_IOC_GPIO3D_IE_OFFSET                         (0xECU)
#define GPIO3_IOC_GPIO3D_IE_GPIO3D0_IE_SHIFT               (0U)
#define GPIO3_IOC_GPIO3D_IE_GPIO3D0_IE_MASK                (0x3U << GPIO3_IOC_GPIO3D_IE_GPIO3D0_IE_SHIFT)               /* 0x00000003 */
#define GPIO3_IOC_GPIO3D_IE_GPIO3D1_IE_SHIFT               (2U)
#define GPIO3_IOC_GPIO3D_IE_GPIO3D1_IE_MASK                (0x3U << GPIO3_IOC_GPIO3D_IE_GPIO3D1_IE_SHIFT)               /* 0x0000000C */
#define GPIO3_IOC_GPIO3D_IE_GPIO3D2_IE_SHIFT               (4U)
#define GPIO3_IOC_GPIO3D_IE_GPIO3D2_IE_MASK                (0x3U << GPIO3_IOC_GPIO3D_IE_GPIO3D2_IE_SHIFT)               /* 0x00000030 */
#define GPIO3_IOC_GPIO3D_IE_GPIO3D3_IE_SHIFT               (6U)
#define GPIO3_IOC_GPIO3D_IE_GPIO3D3_IE_MASK                (0x3U << GPIO3_IOC_GPIO3D_IE_GPIO3D3_IE_SHIFT)               /* 0x000000C0 */
#define GPIO3_IOC_GPIO3D_IE_GPIO3D4_IE_SHIFT               (8U)
#define GPIO3_IOC_GPIO3D_IE_GPIO3D4_IE_MASK                (0x3U << GPIO3_IOC_GPIO3D_IE_GPIO3D4_IE_SHIFT)               /* 0x00000300 */
#define GPIO3_IOC_GPIO3D_IE_GPIO3D5_IE_SHIFT               (10U)
#define GPIO3_IOC_GPIO3D_IE_GPIO3D5_IE_MASK                (0x3U << GPIO3_IOC_GPIO3D_IE_GPIO3D5_IE_SHIFT)               /* 0x00000C00 */
#define GPIO3_IOC_GPIO3D_IE_GPIO3D6_IE_SHIFT               (12U)
#define GPIO3_IOC_GPIO3D_IE_GPIO3D6_IE_MASK                (0x3U << GPIO3_IOC_GPIO3D_IE_GPIO3D6_IE_SHIFT)               /* 0x00003000 */
#define GPIO3_IOC_GPIO3D_IE_GPIO3D7_IE_SHIFT               (14U)
#define GPIO3_IOC_GPIO3D_IE_GPIO3D7_IE_MASK                (0x3U << GPIO3_IOC_GPIO3D_IE_GPIO3D7_IE_SHIFT)               /* 0x0000C000 */
/* GPIO3A_OD */
#define GPIO3_IOC_GPIO3A_OD_OFFSET                         (0x120U)
#define GPIO3_IOC_GPIO3A_OD_GPIO3A0_OD_SHIFT               (0U)
#define GPIO3_IOC_GPIO3A_OD_GPIO3A0_OD_MASK                (0x1U << GPIO3_IOC_GPIO3A_OD_GPIO3A0_OD_SHIFT)               /* 0x00000001 */
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
/* GPIO3B_OD */
#define GPIO3_IOC_GPIO3B_OD_OFFSET                         (0x124U)
#define GPIO3_IOC_GPIO3B_OD_GPIO3B0_OD_SHIFT               (0U)
#define GPIO3_IOC_GPIO3B_OD_GPIO3B0_OD_MASK                (0x1U << GPIO3_IOC_GPIO3B_OD_GPIO3B0_OD_SHIFT)               /* 0x00000001 */
#define GPIO3_IOC_GPIO3B_OD_GPIO3B1_OD_SHIFT               (1U)
#define GPIO3_IOC_GPIO3B_OD_GPIO3B1_OD_MASK                (0x1U << GPIO3_IOC_GPIO3B_OD_GPIO3B1_OD_SHIFT)               /* 0x00000002 */
#define GPIO3_IOC_GPIO3B_OD_GPIO3B2_OD_SHIFT               (2U)
#define GPIO3_IOC_GPIO3B_OD_GPIO3B2_OD_MASK                (0x1U << GPIO3_IOC_GPIO3B_OD_GPIO3B2_OD_SHIFT)               /* 0x00000004 */
#define GPIO3_IOC_GPIO3B_OD_GPIO3B3_OD_SHIFT               (3U)
#define GPIO3_IOC_GPIO3B_OD_GPIO3B3_OD_MASK                (0x1U << GPIO3_IOC_GPIO3B_OD_GPIO3B3_OD_SHIFT)               /* 0x00000008 */
#define GPIO3_IOC_GPIO3B_OD_GPIO3B4_OD_SHIFT               (4U)
#define GPIO3_IOC_GPIO3B_OD_GPIO3B4_OD_MASK                (0x1U << GPIO3_IOC_GPIO3B_OD_GPIO3B4_OD_SHIFT)               /* 0x00000010 */
#define GPIO3_IOC_GPIO3B_OD_GPIO3B5_OD_SHIFT               (5U)
#define GPIO3_IOC_GPIO3B_OD_GPIO3B5_OD_MASK                (0x1U << GPIO3_IOC_GPIO3B_OD_GPIO3B5_OD_SHIFT)               /* 0x00000020 */
#define GPIO3_IOC_GPIO3B_OD_GPIO3B6_OD_SHIFT               (6U)
#define GPIO3_IOC_GPIO3B_OD_GPIO3B6_OD_MASK                (0x1U << GPIO3_IOC_GPIO3B_OD_GPIO3B6_OD_SHIFT)               /* 0x00000040 */
#define GPIO3_IOC_GPIO3B_OD_GPIO3B7_OD_SHIFT               (7U)
#define GPIO3_IOC_GPIO3B_OD_GPIO3B7_OD_MASK                (0x1U << GPIO3_IOC_GPIO3B_OD_GPIO3B7_OD_SHIFT)               /* 0x00000080 */
/* GPIO3C_OD */
#define GPIO3_IOC_GPIO3C_OD_OFFSET                         (0x128U)
#define GPIO3_IOC_GPIO3C_OD_GPIO3C0_OD_SHIFT               (0U)
#define GPIO3_IOC_GPIO3C_OD_GPIO3C0_OD_MASK                (0x1U << GPIO3_IOC_GPIO3C_OD_GPIO3C0_OD_SHIFT)               /* 0x00000001 */
#define GPIO3_IOC_GPIO3C_OD_GPIO3C1_OD_SHIFT               (1U)
#define GPIO3_IOC_GPIO3C_OD_GPIO3C1_OD_MASK                (0x1U << GPIO3_IOC_GPIO3C_OD_GPIO3C1_OD_SHIFT)               /* 0x00000002 */
#define GPIO3_IOC_GPIO3C_OD_GPIO3C2_OD_SHIFT               (2U)
#define GPIO3_IOC_GPIO3C_OD_GPIO3C2_OD_MASK                (0x1U << GPIO3_IOC_GPIO3C_OD_GPIO3C2_OD_SHIFT)               /* 0x00000004 */
#define GPIO3_IOC_GPIO3C_OD_GPIO3C3_OD_SHIFT               (3U)
#define GPIO3_IOC_GPIO3C_OD_GPIO3C3_OD_MASK                (0x1U << GPIO3_IOC_GPIO3C_OD_GPIO3C3_OD_SHIFT)               /* 0x00000008 */
#define GPIO3_IOC_GPIO3C_OD_GPIO3C4_OD_SHIFT               (4U)
#define GPIO3_IOC_GPIO3C_OD_GPIO3C4_OD_MASK                (0x1U << GPIO3_IOC_GPIO3C_OD_GPIO3C4_OD_SHIFT)               /* 0x00000010 */
#define GPIO3_IOC_GPIO3C_OD_GPIO3C5_OD_SHIFT               (5U)
#define GPIO3_IOC_GPIO3C_OD_GPIO3C5_OD_MASK                (0x1U << GPIO3_IOC_GPIO3C_OD_GPIO3C5_OD_SHIFT)               /* 0x00000020 */
#define GPIO3_IOC_GPIO3C_OD_GPIO3C6_OD_SHIFT               (6U)
#define GPIO3_IOC_GPIO3C_OD_GPIO3C6_OD_MASK                (0x1U << GPIO3_IOC_GPIO3C_OD_GPIO3C6_OD_SHIFT)               /* 0x00000040 */
#define GPIO3_IOC_GPIO3C_OD_GPIO3C7_OD_SHIFT               (7U)
#define GPIO3_IOC_GPIO3C_OD_GPIO3C7_OD_MASK                (0x1U << GPIO3_IOC_GPIO3C_OD_GPIO3C7_OD_SHIFT)               /* 0x00000080 */
/* GPIO3D_OD */
#define GPIO3_IOC_GPIO3D_OD_OFFSET                         (0x12CU)
#define GPIO3_IOC_GPIO3D_OD_GPIO3D0_OD_SHIFT               (0U)
#define GPIO3_IOC_GPIO3D_OD_GPIO3D0_OD_MASK                (0x1U << GPIO3_IOC_GPIO3D_OD_GPIO3D0_OD_SHIFT)               /* 0x00000001 */
#define GPIO3_IOC_GPIO3D_OD_GPIO3D1_OD_SHIFT               (1U)
#define GPIO3_IOC_GPIO3D_OD_GPIO3D1_OD_MASK                (0x1U << GPIO3_IOC_GPIO3D_OD_GPIO3D1_OD_SHIFT)               /* 0x00000002 */
#define GPIO3_IOC_GPIO3D_OD_GPIO3D2_OD_SHIFT               (2U)
#define GPIO3_IOC_GPIO3D_OD_GPIO3D2_OD_MASK                (0x1U << GPIO3_IOC_GPIO3D_OD_GPIO3D2_OD_SHIFT)               /* 0x00000004 */
#define GPIO3_IOC_GPIO3D_OD_GPIO3D3_OD_SHIFT               (3U)
#define GPIO3_IOC_GPIO3D_OD_GPIO3D3_OD_MASK                (0x1U << GPIO3_IOC_GPIO3D_OD_GPIO3D3_OD_SHIFT)               /* 0x00000008 */
#define GPIO3_IOC_GPIO3D_OD_GPIO3D4_OD_SHIFT               (4U)
#define GPIO3_IOC_GPIO3D_OD_GPIO3D4_OD_MASK                (0x1U << GPIO3_IOC_GPIO3D_OD_GPIO3D4_OD_SHIFT)               /* 0x00000010 */
#define GPIO3_IOC_GPIO3D_OD_GPIO3D5_OD_SHIFT               (5U)
#define GPIO3_IOC_GPIO3D_OD_GPIO3D5_OD_MASK                (0x1U << GPIO3_IOC_GPIO3D_OD_GPIO3D5_OD_SHIFT)               /* 0x00000020 */
#define GPIO3_IOC_GPIO3D_OD_GPIO3D6_OD_SHIFT               (6U)
#define GPIO3_IOC_GPIO3D_OD_GPIO3D6_OD_MASK                (0x1U << GPIO3_IOC_GPIO3D_OD_GPIO3D6_OD_SHIFT)               /* 0x00000040 */
#define GPIO3_IOC_GPIO3D_OD_GPIO3D7_OD_SHIFT               (7U)
#define GPIO3_IOC_GPIO3D_OD_GPIO3D7_OD_MASK                (0x1U << GPIO3_IOC_GPIO3D_OD_GPIO3D7_OD_SHIFT)               /* 0x00000080 */
/* GPIO3A_SUS */
#define GPIO3_IOC_GPIO3A_SUS_OFFSET                        (0x160U)
#define GPIO3_IOC_GPIO3A_SUS_GPIO3A0_SUS_SHIFT             (0U)
#define GPIO3_IOC_GPIO3A_SUS_GPIO3A0_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3A_SUS_GPIO3A0_SUS_SHIFT)             /* 0x00000001 */
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
/* GPIO3B_SUS */
#define GPIO3_IOC_GPIO3B_SUS_OFFSET                        (0x164U)
#define GPIO3_IOC_GPIO3B_SUS_GPIO3B0_SUS_SHIFT             (0U)
#define GPIO3_IOC_GPIO3B_SUS_GPIO3B0_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3B_SUS_GPIO3B0_SUS_SHIFT)             /* 0x00000001 */
#define GPIO3_IOC_GPIO3B_SUS_GPIO3B1_SUS_SHIFT             (1U)
#define GPIO3_IOC_GPIO3B_SUS_GPIO3B1_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3B_SUS_GPIO3B1_SUS_SHIFT)             /* 0x00000002 */
#define GPIO3_IOC_GPIO3B_SUS_GPIO3B2_SUS_SHIFT             (2U)
#define GPIO3_IOC_GPIO3B_SUS_GPIO3B2_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3B_SUS_GPIO3B2_SUS_SHIFT)             /* 0x00000004 */
#define GPIO3_IOC_GPIO3B_SUS_GPIO3B3_SUS_SHIFT             (3U)
#define GPIO3_IOC_GPIO3B_SUS_GPIO3B3_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3B_SUS_GPIO3B3_SUS_SHIFT)             /* 0x00000008 */
#define GPIO3_IOC_GPIO3B_SUS_GPIO3B4_SUS_SHIFT             (4U)
#define GPIO3_IOC_GPIO3B_SUS_GPIO3B4_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3B_SUS_GPIO3B4_SUS_SHIFT)             /* 0x00000010 */
#define GPIO3_IOC_GPIO3B_SUS_GPIO3B5_SUS_SHIFT             (5U)
#define GPIO3_IOC_GPIO3B_SUS_GPIO3B5_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3B_SUS_GPIO3B5_SUS_SHIFT)             /* 0x00000020 */
#define GPIO3_IOC_GPIO3B_SUS_GPIO3B6_SUS_SHIFT             (6U)
#define GPIO3_IOC_GPIO3B_SUS_GPIO3B6_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3B_SUS_GPIO3B6_SUS_SHIFT)             /* 0x00000040 */
#define GPIO3_IOC_GPIO3B_SUS_GPIO3B7_SUS_SHIFT             (7U)
#define GPIO3_IOC_GPIO3B_SUS_GPIO3B7_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3B_SUS_GPIO3B7_SUS_SHIFT)             /* 0x00000080 */
/* GPIO3C_SUS */
#define GPIO3_IOC_GPIO3C_SUS_OFFSET                        (0x168U)
#define GPIO3_IOC_GPIO3C_SUS_GPIO3C0_SUS_SHIFT             (0U)
#define GPIO3_IOC_GPIO3C_SUS_GPIO3C0_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3C_SUS_GPIO3C0_SUS_SHIFT)             /* 0x00000001 */
#define GPIO3_IOC_GPIO3C_SUS_GPIO3C1_SUS_SHIFT             (1U)
#define GPIO3_IOC_GPIO3C_SUS_GPIO3C1_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3C_SUS_GPIO3C1_SUS_SHIFT)             /* 0x00000002 */
#define GPIO3_IOC_GPIO3C_SUS_GPIO3C2_SUS_SHIFT             (2U)
#define GPIO3_IOC_GPIO3C_SUS_GPIO3C2_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3C_SUS_GPIO3C2_SUS_SHIFT)             /* 0x00000004 */
#define GPIO3_IOC_GPIO3C_SUS_GPIO3C3_SUS_SHIFT             (3U)
#define GPIO3_IOC_GPIO3C_SUS_GPIO3C3_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3C_SUS_GPIO3C3_SUS_SHIFT)             /* 0x00000008 */
#define GPIO3_IOC_GPIO3C_SUS_GPIO3C4_SUS_SHIFT             (4U)
#define GPIO3_IOC_GPIO3C_SUS_GPIO3C4_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3C_SUS_GPIO3C4_SUS_SHIFT)             /* 0x00000010 */
#define GPIO3_IOC_GPIO3C_SUS_GPIO3C5_SUS_SHIFT             (5U)
#define GPIO3_IOC_GPIO3C_SUS_GPIO3C5_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3C_SUS_GPIO3C5_SUS_SHIFT)             /* 0x00000020 */
#define GPIO3_IOC_GPIO3C_SUS_GPIO3C6_SUS_SHIFT             (6U)
#define GPIO3_IOC_GPIO3C_SUS_GPIO3C6_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3C_SUS_GPIO3C6_SUS_SHIFT)             /* 0x00000040 */
#define GPIO3_IOC_GPIO3C_SUS_GPIO3C7_SUS_SHIFT             (7U)
#define GPIO3_IOC_GPIO3C_SUS_GPIO3C7_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3C_SUS_GPIO3C7_SUS_SHIFT)             /* 0x00000080 */
/* GPIO3D_SUS */
#define GPIO3_IOC_GPIO3D_SUS_OFFSET                        (0x16CU)
#define GPIO3_IOC_GPIO3D_SUS_GPIO3D0_SUS_SHIFT             (0U)
#define GPIO3_IOC_GPIO3D_SUS_GPIO3D0_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3D_SUS_GPIO3D0_SUS_SHIFT)             /* 0x00000001 */
#define GPIO3_IOC_GPIO3D_SUS_GPIO3D1_SUS_SHIFT             (1U)
#define GPIO3_IOC_GPIO3D_SUS_GPIO3D1_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3D_SUS_GPIO3D1_SUS_SHIFT)             /* 0x00000002 */
#define GPIO3_IOC_GPIO3D_SUS_GPIO3D2_SUS_SHIFT             (2U)
#define GPIO3_IOC_GPIO3D_SUS_GPIO3D2_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3D_SUS_GPIO3D2_SUS_SHIFT)             /* 0x00000004 */
#define GPIO3_IOC_GPIO3D_SUS_GPIO3D3_SUS_SHIFT             (3U)
#define GPIO3_IOC_GPIO3D_SUS_GPIO3D3_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3D_SUS_GPIO3D3_SUS_SHIFT)             /* 0x00000008 */
#define GPIO3_IOC_GPIO3D_SUS_GPIO3D4_SUS_SHIFT             (4U)
#define GPIO3_IOC_GPIO3D_SUS_GPIO3D4_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3D_SUS_GPIO3D4_SUS_SHIFT)             /* 0x00000010 */
#define GPIO3_IOC_GPIO3D_SUS_GPIO3D5_SUS_SHIFT             (5U)
#define GPIO3_IOC_GPIO3D_SUS_GPIO3D5_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3D_SUS_GPIO3D5_SUS_SHIFT)             /* 0x00000020 */
#define GPIO3_IOC_GPIO3D_SUS_GPIO3D6_SUS_SHIFT             (6U)
#define GPIO3_IOC_GPIO3D_SUS_GPIO3D6_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3D_SUS_GPIO3D6_SUS_SHIFT)             /* 0x00000040 */
#define GPIO3_IOC_GPIO3D_SUS_GPIO3D7_SUS_SHIFT             (7U)
#define GPIO3_IOC_GPIO3D_SUS_GPIO3D7_SUS_MASK              (0x1U << GPIO3_IOC_GPIO3D_SUS_GPIO3D7_SUS_SHIFT)             /* 0x00000080 */
/* GPIO3A_SL */
#define GPIO3_IOC_GPIO3A_SL_OFFSET                         (0x1A0U)
#define GPIO3_IOC_GPIO3A_SL_GPIO3A0_SL_SHIFT               (0U)
#define GPIO3_IOC_GPIO3A_SL_GPIO3A0_SL_MASK                (0x3U << GPIO3_IOC_GPIO3A_SL_GPIO3A0_SL_SHIFT)               /* 0x00000003 */
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
/* GPIO3B_SL */
#define GPIO3_IOC_GPIO3B_SL_OFFSET                         (0x1A4U)
#define GPIO3_IOC_GPIO3B_SL_GPIO3B0_SL_SHIFT               (0U)
#define GPIO3_IOC_GPIO3B_SL_GPIO3B0_SL_MASK                (0x3U << GPIO3_IOC_GPIO3B_SL_GPIO3B0_SL_SHIFT)               /* 0x00000003 */
#define GPIO3_IOC_GPIO3B_SL_GPIO3B1_SL_SHIFT               (2U)
#define GPIO3_IOC_GPIO3B_SL_GPIO3B1_SL_MASK                (0x3U << GPIO3_IOC_GPIO3B_SL_GPIO3B1_SL_SHIFT)               /* 0x0000000C */
#define GPIO3_IOC_GPIO3B_SL_GPIO3B2_SL_SHIFT               (4U)
#define GPIO3_IOC_GPIO3B_SL_GPIO3B2_SL_MASK                (0x3U << GPIO3_IOC_GPIO3B_SL_GPIO3B2_SL_SHIFT)               /* 0x00000030 */
#define GPIO3_IOC_GPIO3B_SL_GPIO3B3_SL_SHIFT               (6U)
#define GPIO3_IOC_GPIO3B_SL_GPIO3B3_SL_MASK                (0x3U << GPIO3_IOC_GPIO3B_SL_GPIO3B3_SL_SHIFT)               /* 0x000000C0 */
#define GPIO3_IOC_GPIO3B_SL_GPIO3B4_SL_SHIFT               (8U)
#define GPIO3_IOC_GPIO3B_SL_GPIO3B4_SL_MASK                (0x3U << GPIO3_IOC_GPIO3B_SL_GPIO3B4_SL_SHIFT)               /* 0x00000300 */
#define GPIO3_IOC_GPIO3B_SL_GPIO3B5_SL_SHIFT               (10U)
#define GPIO3_IOC_GPIO3B_SL_GPIO3B5_SL_MASK                (0x3U << GPIO3_IOC_GPIO3B_SL_GPIO3B5_SL_SHIFT)               /* 0x00000C00 */
#define GPIO3_IOC_GPIO3B_SL_GPIO3B6_SL_SHIFT               (12U)
#define GPIO3_IOC_GPIO3B_SL_GPIO3B6_SL_MASK                (0x3U << GPIO3_IOC_GPIO3B_SL_GPIO3B6_SL_SHIFT)               /* 0x00003000 */
#define GPIO3_IOC_GPIO3B_SL_GPIO3B7_SL_SHIFT               (14U)
#define GPIO3_IOC_GPIO3B_SL_GPIO3B7_SL_MASK                (0x3U << GPIO3_IOC_GPIO3B_SL_GPIO3B7_SL_SHIFT)               /* 0x0000C000 */
/* GPIO3C_SL */
#define GPIO3_IOC_GPIO3C_SL_OFFSET                         (0x1A8U)
#define GPIO3_IOC_GPIO3C_SL_GPIO3C0_SL_SHIFT               (0U)
#define GPIO3_IOC_GPIO3C_SL_GPIO3C0_SL_MASK                (0x3U << GPIO3_IOC_GPIO3C_SL_GPIO3C0_SL_SHIFT)               /* 0x00000003 */
#define GPIO3_IOC_GPIO3C_SL_GPIO3C1_SL_SHIFT               (2U)
#define GPIO3_IOC_GPIO3C_SL_GPIO3C1_SL_MASK                (0x3U << GPIO3_IOC_GPIO3C_SL_GPIO3C1_SL_SHIFT)               /* 0x0000000C */
#define GPIO3_IOC_GPIO3C_SL_GPIO3C2_SL_SHIFT               (4U)
#define GPIO3_IOC_GPIO3C_SL_GPIO3C2_SL_MASK                (0x3U << GPIO3_IOC_GPIO3C_SL_GPIO3C2_SL_SHIFT)               /* 0x00000030 */
#define GPIO3_IOC_GPIO3C_SL_GPIO3C3_SL_SHIFT               (6U)
#define GPIO3_IOC_GPIO3C_SL_GPIO3C3_SL_MASK                (0x3U << GPIO3_IOC_GPIO3C_SL_GPIO3C3_SL_SHIFT)               /* 0x000000C0 */
#define GPIO3_IOC_GPIO3C_SL_GPIO3C4_SL_SHIFT               (8U)
#define GPIO3_IOC_GPIO3C_SL_GPIO3C4_SL_MASK                (0x3U << GPIO3_IOC_GPIO3C_SL_GPIO3C4_SL_SHIFT)               /* 0x00000300 */
#define GPIO3_IOC_GPIO3C_SL_GPIO3C5_SL_SHIFT               (10U)
#define GPIO3_IOC_GPIO3C_SL_GPIO3C5_SL_MASK                (0x3U << GPIO3_IOC_GPIO3C_SL_GPIO3C5_SL_SHIFT)               /* 0x00000C00 */
#define GPIO3_IOC_GPIO3C_SL_GPIO3C6_SL_SHIFT               (12U)
#define GPIO3_IOC_GPIO3C_SL_GPIO3C6_SL_MASK                (0x3U << GPIO3_IOC_GPIO3C_SL_GPIO3C6_SL_SHIFT)               /* 0x00003000 */
#define GPIO3_IOC_GPIO3C_SL_GPIO3C7_SL_SHIFT               (14U)
#define GPIO3_IOC_GPIO3C_SL_GPIO3C7_SL_MASK                (0x3U << GPIO3_IOC_GPIO3C_SL_GPIO3C7_SL_SHIFT)               /* 0x0000C000 */
/* GPIO3D_SL */
#define GPIO3_IOC_GPIO3D_SL_OFFSET                         (0x1ACU)
#define GPIO3_IOC_GPIO3D_SL_GPIO3D0_SL_SHIFT               (0U)
#define GPIO3_IOC_GPIO3D_SL_GPIO3D0_SL_MASK                (0x3U << GPIO3_IOC_GPIO3D_SL_GPIO3D0_SL_SHIFT)               /* 0x00000003 */
#define GPIO3_IOC_GPIO3D_SL_GPIO3D1_SL_SHIFT               (2U)
#define GPIO3_IOC_GPIO3D_SL_GPIO3D1_SL_MASK                (0x3U << GPIO3_IOC_GPIO3D_SL_GPIO3D1_SL_SHIFT)               /* 0x0000000C */
#define GPIO3_IOC_GPIO3D_SL_GPIO3D2_SL_SHIFT               (4U)
#define GPIO3_IOC_GPIO3D_SL_GPIO3D2_SL_MASK                (0x3U << GPIO3_IOC_GPIO3D_SL_GPIO3D2_SL_SHIFT)               /* 0x00000030 */
#define GPIO3_IOC_GPIO3D_SL_GPIO3D3_SL_SHIFT               (6U)
#define GPIO3_IOC_GPIO3D_SL_GPIO3D3_SL_MASK                (0x3U << GPIO3_IOC_GPIO3D_SL_GPIO3D3_SL_SHIFT)               /* 0x000000C0 */
#define GPIO3_IOC_GPIO3D_SL_GPIO3D4_SL_SHIFT               (8U)
#define GPIO3_IOC_GPIO3D_SL_GPIO3D4_SL_MASK                (0x3U << GPIO3_IOC_GPIO3D_SL_GPIO3D4_SL_SHIFT)               /* 0x00000300 */
#define GPIO3_IOC_GPIO3D_SL_GPIO3D5_SL_SHIFT               (10U)
#define GPIO3_IOC_GPIO3D_SL_GPIO3D5_SL_MASK                (0x3U << GPIO3_IOC_GPIO3D_SL_GPIO3D5_SL_SHIFT)               /* 0x00000C00 */
#define GPIO3_IOC_GPIO3D_SL_GPIO3D6_SL_SHIFT               (12U)
#define GPIO3_IOC_GPIO3D_SL_GPIO3D6_SL_MASK                (0x3U << GPIO3_IOC_GPIO3D_SL_GPIO3D6_SL_SHIFT)               /* 0x00003000 */
#define GPIO3_IOC_GPIO3D_SL_GPIO3D7_SL_SHIFT               (14U)
#define GPIO3_IOC_GPIO3D_SL_GPIO3D7_SL_MASK                (0x3U << GPIO3_IOC_GPIO3D_SL_GPIO3D7_SL_SHIFT)               /* 0x0000C000 */
/* GPIO3A_DS0 */
#define GPIO3_IOC_GPIO3A_DS0_OFFSET                        (0x280U)
#define GPIO3_IOC_GPIO3A_DS0_GPIO3A0_DS_SHIFT              (0U)
#define GPIO3_IOC_GPIO3A_DS0_GPIO3A0_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3A_DS0_GPIO3A0_DS_SHIFT)             /* 0x0000003F */
#define GPIO3_IOC_GPIO3A_DS0_GPIO3A1_DS_SHIFT              (8U)
#define GPIO3_IOC_GPIO3A_DS0_GPIO3A1_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3A_DS0_GPIO3A1_DS_SHIFT)             /* 0x00003F00 */
/* GPIO3A_DS1 */
#define GPIO3_IOC_GPIO3A_DS1_OFFSET                        (0x284U)
#define GPIO3_IOC_GPIO3A_DS1_GPIO3A2_DS_SHIFT              (0U)
#define GPIO3_IOC_GPIO3A_DS1_GPIO3A2_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3A_DS1_GPIO3A2_DS_SHIFT)             /* 0x0000003F */
#define GPIO3_IOC_GPIO3A_DS1_GPIO3A3_DS_SHIFT              (8U)
#define GPIO3_IOC_GPIO3A_DS1_GPIO3A3_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3A_DS1_GPIO3A3_DS_SHIFT)             /* 0x00003F00 */
/* GPIO3A_DS2 */
#define GPIO3_IOC_GPIO3A_DS2_OFFSET                        (0x288U)
#define GPIO3_IOC_GPIO3A_DS2_GPIO3A4_DS_SHIFT              (0U)
#define GPIO3_IOC_GPIO3A_DS2_GPIO3A4_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3A_DS2_GPIO3A4_DS_SHIFT)             /* 0x0000003F */
#define GPIO3_IOC_GPIO3A_DS2_GPIO3A5_DS_SHIFT              (8U)
#define GPIO3_IOC_GPIO3A_DS2_GPIO3A5_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3A_DS2_GPIO3A5_DS_SHIFT)             /* 0x00003F00 */
/* GPIO3A_DS3 */
#define GPIO3_IOC_GPIO3A_DS3_OFFSET                        (0x28CU)
#define GPIO3_IOC_GPIO3A_DS3_GPIO3A6_DS_SHIFT              (0U)
#define GPIO3_IOC_GPIO3A_DS3_GPIO3A6_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3A_DS3_GPIO3A6_DS_SHIFT)             /* 0x0000003F */
#define GPIO3_IOC_GPIO3A_DS3_GPIO3A7_DS_SHIFT              (8U)
#define GPIO3_IOC_GPIO3A_DS3_GPIO3A7_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3A_DS3_GPIO3A7_DS_SHIFT)             /* 0x00003F00 */
/* GPIO3B_DS0 */
#define GPIO3_IOC_GPIO3B_DS0_OFFSET                        (0x290U)
#define GPIO3_IOC_GPIO3B_DS0_GPIO3B0_DS_SHIFT              (0U)
#define GPIO3_IOC_GPIO3B_DS0_GPIO3B0_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3B_DS0_GPIO3B0_DS_SHIFT)             /* 0x0000003F */
#define GPIO3_IOC_GPIO3B_DS0_GPIO3B1_DS_SHIFT              (8U)
#define GPIO3_IOC_GPIO3B_DS0_GPIO3B1_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3B_DS0_GPIO3B1_DS_SHIFT)             /* 0x00003F00 */
/* GPIO3B_DS1 */
#define GPIO3_IOC_GPIO3B_DS1_OFFSET                        (0x294U)
#define GPIO3_IOC_GPIO3B_DS1_GPIO3B2_DS_SHIFT              (0U)
#define GPIO3_IOC_GPIO3B_DS1_GPIO3B2_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3B_DS1_GPIO3B2_DS_SHIFT)             /* 0x0000003F */
#define GPIO3_IOC_GPIO3B_DS1_GPIO3B3_DS_SHIFT              (8U)
#define GPIO3_IOC_GPIO3B_DS1_GPIO3B3_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3B_DS1_GPIO3B3_DS_SHIFT)             /* 0x00003F00 */
/* GPIO3B_DS2 */
#define GPIO3_IOC_GPIO3B_DS2_OFFSET                        (0x298U)
#define GPIO3_IOC_GPIO3B_DS2_GPIO3B4_DS_SHIFT              (0U)
#define GPIO3_IOC_GPIO3B_DS2_GPIO3B4_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3B_DS2_GPIO3B4_DS_SHIFT)             /* 0x0000003F */
#define GPIO3_IOC_GPIO3B_DS2_GPIO3B5_DS_SHIFT              (8U)
#define GPIO3_IOC_GPIO3B_DS2_GPIO3B5_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3B_DS2_GPIO3B5_DS_SHIFT)             /* 0x00003F00 */
/* GPIO3B_DS3 */
#define GPIO3_IOC_GPIO3B_DS3_OFFSET                        (0x29CU)
#define GPIO3_IOC_GPIO3B_DS3_GPIO3B6_DS_SHIFT              (0U)
#define GPIO3_IOC_GPIO3B_DS3_GPIO3B6_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3B_DS3_GPIO3B6_DS_SHIFT)             /* 0x0000003F */
#define GPIO3_IOC_GPIO3B_DS3_GPIO3B7_DS_SHIFT              (8U)
#define GPIO3_IOC_GPIO3B_DS3_GPIO3B7_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3B_DS3_GPIO3B7_DS_SHIFT)             /* 0x00003F00 */
/* GPIO3C_DS0 */
#define GPIO3_IOC_GPIO3C_DS0_OFFSET                        (0x2A0U)
#define GPIO3_IOC_GPIO3C_DS0_GPIO3C0_DS_SHIFT              (0U)
#define GPIO3_IOC_GPIO3C_DS0_GPIO3C0_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3C_DS0_GPIO3C0_DS_SHIFT)             /* 0x0000003F */
#define GPIO3_IOC_GPIO3C_DS0_GPIO3C1_DS_SHIFT              (8U)
#define GPIO3_IOC_GPIO3C_DS0_GPIO3C1_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3C_DS0_GPIO3C1_DS_SHIFT)             /* 0x00003F00 */
/* GPIO3C_DS1 */
#define GPIO3_IOC_GPIO3C_DS1_OFFSET                        (0x2A4U)
#define GPIO3_IOC_GPIO3C_DS1_GPIO3C2_DS_SHIFT              (0U)
#define GPIO3_IOC_GPIO3C_DS1_GPIO3C2_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3C_DS1_GPIO3C2_DS_SHIFT)             /* 0x0000003F */
#define GPIO3_IOC_GPIO3C_DS1_GPIO3C3_DS_SHIFT              (8U)
#define GPIO3_IOC_GPIO3C_DS1_GPIO3C3_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3C_DS1_GPIO3C3_DS_SHIFT)             /* 0x00003F00 */
/* GPIO3C_DS2 */
#define GPIO3_IOC_GPIO3C_DS2_OFFSET                        (0x2A8U)
#define GPIO3_IOC_GPIO3C_DS2_GPIO3C4_DS_SHIFT              (0U)
#define GPIO3_IOC_GPIO3C_DS2_GPIO3C4_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3C_DS2_GPIO3C4_DS_SHIFT)             /* 0x0000003F */
#define GPIO3_IOC_GPIO3C_DS2_GPIO3C5_DS_SHIFT              (8U)
#define GPIO3_IOC_GPIO3C_DS2_GPIO3C5_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3C_DS2_GPIO3C5_DS_SHIFT)             /* 0x00003F00 */
/* GPIO3C_DS3 */
#define GPIO3_IOC_GPIO3C_DS3_OFFSET                        (0x2ACU)
#define GPIO3_IOC_GPIO3C_DS3_GPIO3C6_DS_SHIFT              (0U)
#define GPIO3_IOC_GPIO3C_DS3_GPIO3C6_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3C_DS3_GPIO3C6_DS_SHIFT)             /* 0x0000003F */
#define GPIO3_IOC_GPIO3C_DS3_GPIO3C7_DS_SHIFT              (8U)
#define GPIO3_IOC_GPIO3C_DS3_GPIO3C7_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3C_DS3_GPIO3C7_DS_SHIFT)             /* 0x00003F00 */
/* GPIO3D_DS0 */
#define GPIO3_IOC_GPIO3D_DS0_OFFSET                        (0x2B0U)
#define GPIO3_IOC_GPIO3D_DS0_GPIO3D0_DS_SHIFT              (0U)
#define GPIO3_IOC_GPIO3D_DS0_GPIO3D0_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3D_DS0_GPIO3D0_DS_SHIFT)             /* 0x0000003F */
#define GPIO3_IOC_GPIO3D_DS0_GPIO3D1_DS_SHIFT              (8U)
#define GPIO3_IOC_GPIO3D_DS0_GPIO3D1_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3D_DS0_GPIO3D1_DS_SHIFT)             /* 0x00003F00 */
/* GPIO3D_DS1 */
#define GPIO3_IOC_GPIO3D_DS1_OFFSET                        (0x2B4U)
#define GPIO3_IOC_GPIO3D_DS1_GPIO3D2_DS_SHIFT              (0U)
#define GPIO3_IOC_GPIO3D_DS1_GPIO3D2_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3D_DS1_GPIO3D2_DS_SHIFT)             /* 0x0000003F */
#define GPIO3_IOC_GPIO3D_DS1_GPIO3D3_DS_SHIFT              (8U)
#define GPIO3_IOC_GPIO3D_DS1_GPIO3D3_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3D_DS1_GPIO3D3_DS_SHIFT)             /* 0x00003F00 */
/* GPIO3D_DS2 */
#define GPIO3_IOC_GPIO3D_DS2_OFFSET                        (0x2B8U)
#define GPIO3_IOC_GPIO3D_DS2_GPIO3D4_DS_SHIFT              (0U)
#define GPIO3_IOC_GPIO3D_DS2_GPIO3D4_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3D_DS2_GPIO3D4_DS_SHIFT)             /* 0x0000003F */
#define GPIO3_IOC_GPIO3D_DS2_GPIO3D5_DS_SHIFT              (8U)
#define GPIO3_IOC_GPIO3D_DS2_GPIO3D5_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3D_DS2_GPIO3D5_DS_SHIFT)             /* 0x00003F00 */
/* GPIO3D_DS3 */
#define GPIO3_IOC_GPIO3D_DS3_OFFSET                        (0x2BCU)
#define GPIO3_IOC_GPIO3D_DS3_GPIO3D6_DS_SHIFT              (0U)
#define GPIO3_IOC_GPIO3D_DS3_GPIO3D6_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3D_DS3_GPIO3D6_DS_SHIFT)             /* 0x0000003F */
#define GPIO3_IOC_GPIO3D_DS3_GPIO3D7_DS_SHIFT              (8U)
#define GPIO3_IOC_GPIO3D_DS3_GPIO3D7_DS_MASK               (0x3FU << GPIO3_IOC_GPIO3D_DS3_GPIO3D7_DS_SHIFT)             /* 0x00003F00 */
/***************************************GPIO4_IOC****************************************/
/* GPIO4A_IOMUX_SEL_L */
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_L_OFFSET                (0x60U)
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A0_SEL_SHIFT     (0U)
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A0_SEL_MASK      (0x7U << GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A0_SEL_SHIFT)     /* 0x00000007 */
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A1_SEL_SHIFT     (4U)
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A1_SEL_MASK      (0x7U << GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A1_SEL_SHIFT)     /* 0x00000070 */
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A2_SEL_SHIFT     (8U)
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A2_SEL_MASK      (0x7U << GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A2_SEL_SHIFT)     /* 0x00000700 */
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A3_SEL_SHIFT     (12U)
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A3_SEL_MASK      (0x7U << GPIO4_IOC_GPIO4A_IOMUX_SEL_L_GPIO4A3_SEL_SHIFT)     /* 0x00007000 */
/* GPIO4A_IOMUX_SEL_H */
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_H_OFFSET                (0x64U)
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A4_SEL_SHIFT     (0U)
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A4_SEL_MASK      (0x7U << GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A4_SEL_SHIFT)     /* 0x00000007 */
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A5_SEL_SHIFT     (4U)
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A5_SEL_MASK      (0x7U << GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A5_SEL_SHIFT)     /* 0x00000070 */
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A6_SEL_SHIFT     (8U)
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A6_SEL_MASK      (0x7U << GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A6_SEL_SHIFT)     /* 0x00000700 */
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A7_SEL_SHIFT     (12U)
#define GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A7_SEL_MASK      (0x7U << GPIO4_IOC_GPIO4A_IOMUX_SEL_H_GPIO4A7_SEL_SHIFT)     /* 0x00007000 */
/* GPIO4B_IOMUX_SEL_L */
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_L_OFFSET                (0x68U)
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B0_SEL_SHIFT     (0U)
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B0_SEL_MASK      (0x7U << GPIO4_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B0_SEL_SHIFT)     /* 0x00000007 */
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B1_SEL_SHIFT     (4U)
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B1_SEL_MASK      (0x7U << GPIO4_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B1_SEL_SHIFT)     /* 0x00000070 */
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B2_SEL_SHIFT     (8U)
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B2_SEL_MASK      (0x7U << GPIO4_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B2_SEL_SHIFT)     /* 0x00000700 */
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B3_SEL_SHIFT     (12U)
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B3_SEL_MASK      (0x7U << GPIO4_IOC_GPIO4B_IOMUX_SEL_L_GPIO4B3_SEL_SHIFT)     /* 0x00007000 */
/* GPIO4B_IOMUX_SEL_H */
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_H_OFFSET                (0x6CU)
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_H_GPIO4B4_SEL_SHIFT     (0U)
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_H_GPIO4B4_SEL_MASK      (0x7U << GPIO4_IOC_GPIO4B_IOMUX_SEL_H_GPIO4B4_SEL_SHIFT)     /* 0x00000007 */
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_H_GPIO4B5_SEL_SHIFT     (4U)
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_H_GPIO4B5_SEL_MASK      (0x7U << GPIO4_IOC_GPIO4B_IOMUX_SEL_H_GPIO4B5_SEL_SHIFT)     /* 0x00000070 */
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_H_GPIO4B6_SEL_SHIFT     (8U)
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_H_GPIO4B6_SEL_MASK      (0x7U << GPIO4_IOC_GPIO4B_IOMUX_SEL_H_GPIO4B6_SEL_SHIFT)     /* 0x00000700 */
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_H_GPIO4B7_SEL_SHIFT     (12U)
#define GPIO4_IOC_GPIO4B_IOMUX_SEL_H_GPIO4B7_SEL_MASK      (0x7U << GPIO4_IOC_GPIO4B_IOMUX_SEL_H_GPIO4B7_SEL_SHIFT)     /* 0x00007000 */
/* GPIO4A_P */
#define GPIO4_IOC_GPIO4A_P_OFFSET                          (0xB0U)
#define GPIO4_IOC_GPIO4A_P_GPIO4A0_P_SHIFT                 (0U)
#define GPIO4_IOC_GPIO4A_P_GPIO4A0_P_MASK                  (0x3U << GPIO4_IOC_GPIO4A_P_GPIO4A0_P_SHIFT)                 /* 0x00000003 */
#define GPIO4_IOC_GPIO4A_P_GPIO4A1_P_SHIFT                 (2U)
#define GPIO4_IOC_GPIO4A_P_GPIO4A1_P_MASK                  (0x3U << GPIO4_IOC_GPIO4A_P_GPIO4A1_P_SHIFT)                 /* 0x0000000C */
#define GPIO4_IOC_GPIO4A_P_GPIO4A2_P_SHIFT                 (4U)
#define GPIO4_IOC_GPIO4A_P_GPIO4A2_P_MASK                  (0x3U << GPIO4_IOC_GPIO4A_P_GPIO4A2_P_SHIFT)                 /* 0x00000030 */
#define GPIO4_IOC_GPIO4A_P_GPIO4A3_P_SHIFT                 (6U)
#define GPIO4_IOC_GPIO4A_P_GPIO4A3_P_MASK                  (0x3U << GPIO4_IOC_GPIO4A_P_GPIO4A3_P_SHIFT)                 /* 0x000000C0 */
#define GPIO4_IOC_GPIO4A_P_GPIO4A4_P_SHIFT                 (8U)
#define GPIO4_IOC_GPIO4A_P_GPIO4A4_P_MASK                  (0x3U << GPIO4_IOC_GPIO4A_P_GPIO4A4_P_SHIFT)                 /* 0x00000300 */
#define GPIO4_IOC_GPIO4A_P_GPIO4A5_P_SHIFT                 (10U)
#define GPIO4_IOC_GPIO4A_P_GPIO4A5_P_MASK                  (0x3U << GPIO4_IOC_GPIO4A_P_GPIO4A5_P_SHIFT)                 /* 0x00000C00 */
#define GPIO4_IOC_GPIO4A_P_GPIO4A6_P_SHIFT                 (12U)
#define GPIO4_IOC_GPIO4A_P_GPIO4A6_P_MASK                  (0x3U << GPIO4_IOC_GPIO4A_P_GPIO4A6_P_SHIFT)                 /* 0x00003000 */
#define GPIO4_IOC_GPIO4A_P_GPIO4A7_P_SHIFT                 (14U)
#define GPIO4_IOC_GPIO4A_P_GPIO4A7_P_MASK                  (0x3U << GPIO4_IOC_GPIO4A_P_GPIO4A7_P_SHIFT)                 /* 0x0000C000 */
/* GPIO4B_P */
#define GPIO4_IOC_GPIO4B_P_OFFSET                          (0xB4U)
#define GPIO4_IOC_GPIO4B_P_GPIO4B0_P_SHIFT                 (0U)
#define GPIO4_IOC_GPIO4B_P_GPIO4B0_P_MASK                  (0x3U << GPIO4_IOC_GPIO4B_P_GPIO4B0_P_SHIFT)                 /* 0x00000003 */
#define GPIO4_IOC_GPIO4B_P_GPIO4B1_P_SHIFT                 (2U)
#define GPIO4_IOC_GPIO4B_P_GPIO4B1_P_MASK                  (0x3U << GPIO4_IOC_GPIO4B_P_GPIO4B1_P_SHIFT)                 /* 0x0000000C */
#define GPIO4_IOC_GPIO4B_P_GPIO4B2_P_SHIFT                 (4U)
#define GPIO4_IOC_GPIO4B_P_GPIO4B2_P_MASK                  (0x3U << GPIO4_IOC_GPIO4B_P_GPIO4B2_P_SHIFT)                 /* 0x00000030 */
#define GPIO4_IOC_GPIO4B_P_GPIO4B3_P_SHIFT                 (6U)
#define GPIO4_IOC_GPIO4B_P_GPIO4B3_P_MASK                  (0x3U << GPIO4_IOC_GPIO4B_P_GPIO4B3_P_SHIFT)                 /* 0x000000C0 */
#define GPIO4_IOC_GPIO4B_P_GPIO4B4_P_SHIFT                 (8U)
#define GPIO4_IOC_GPIO4B_P_GPIO4B4_P_MASK                  (0x3U << GPIO4_IOC_GPIO4B_P_GPIO4B4_P_SHIFT)                 /* 0x00000300 */
#define GPIO4_IOC_GPIO4B_P_GPIO4B5_P_SHIFT                 (10U)
#define GPIO4_IOC_GPIO4B_P_GPIO4B5_P_MASK                  (0x3U << GPIO4_IOC_GPIO4B_P_GPIO4B5_P_SHIFT)                 /* 0x00000C00 */
#define GPIO4_IOC_GPIO4B_P_GPIO4B6_P_SHIFT                 (12U)
#define GPIO4_IOC_GPIO4B_P_GPIO4B6_P_MASK                  (0x3U << GPIO4_IOC_GPIO4B_P_GPIO4B6_P_SHIFT)                 /* 0x00003000 */
#define GPIO4_IOC_GPIO4B_P_GPIO4B7_P_SHIFT                 (14U)
#define GPIO4_IOC_GPIO4B_P_GPIO4B7_P_MASK                  (0x3U << GPIO4_IOC_GPIO4B_P_GPIO4B7_P_SHIFT)                 /* 0x0000C000 */
/* GPIO4A_IE */
#define GPIO4_IOC_GPIO4A_IE_OFFSET                         (0xF0U)
#define GPIO4_IOC_GPIO4A_IE_GPIO4A0_IE_SHIFT               (0U)
#define GPIO4_IOC_GPIO4A_IE_GPIO4A0_IE_MASK                (0x3U << GPIO4_IOC_GPIO4A_IE_GPIO4A0_IE_SHIFT)               /* 0x00000003 */
#define GPIO4_IOC_GPIO4A_IE_GPIO4A1_IE_SHIFT               (2U)
#define GPIO4_IOC_GPIO4A_IE_GPIO4A1_IE_MASK                (0x3U << GPIO4_IOC_GPIO4A_IE_GPIO4A1_IE_SHIFT)               /* 0x0000000C */
#define GPIO4_IOC_GPIO4A_IE_GPIO4A2_IE_SHIFT               (4U)
#define GPIO4_IOC_GPIO4A_IE_GPIO4A2_IE_MASK                (0x3U << GPIO4_IOC_GPIO4A_IE_GPIO4A2_IE_SHIFT)               /* 0x00000030 */
#define GPIO4_IOC_GPIO4A_IE_GPIO4A3_IE_SHIFT               (6U)
#define GPIO4_IOC_GPIO4A_IE_GPIO4A3_IE_MASK                (0x3U << GPIO4_IOC_GPIO4A_IE_GPIO4A3_IE_SHIFT)               /* 0x000000C0 */
#define GPIO4_IOC_GPIO4A_IE_GPIO4A4_IE_SHIFT               (8U)
#define GPIO4_IOC_GPIO4A_IE_GPIO4A4_IE_MASK                (0x3U << GPIO4_IOC_GPIO4A_IE_GPIO4A4_IE_SHIFT)               /* 0x00000300 */
#define GPIO4_IOC_GPIO4A_IE_GPIO4A5_IE_SHIFT               (10U)
#define GPIO4_IOC_GPIO4A_IE_GPIO4A5_IE_MASK                (0x3U << GPIO4_IOC_GPIO4A_IE_GPIO4A5_IE_SHIFT)               /* 0x00000C00 */
#define GPIO4_IOC_GPIO4A_IE_GPIO4A6_IE_SHIFT               (12U)
#define GPIO4_IOC_GPIO4A_IE_GPIO4A6_IE_MASK                (0x3U << GPIO4_IOC_GPIO4A_IE_GPIO4A6_IE_SHIFT)               /* 0x00003000 */
#define GPIO4_IOC_GPIO4A_IE_GPIO4A7_IE_SHIFT               (14U)
#define GPIO4_IOC_GPIO4A_IE_GPIO4A7_IE_MASK                (0x3U << GPIO4_IOC_GPIO4A_IE_GPIO4A7_IE_SHIFT)               /* 0x0000C000 */
/* GPIO4B_IE */
#define GPIO4_IOC_GPIO4B_IE_OFFSET                         (0xF4U)
#define GPIO4_IOC_GPIO4B_IE_GPIO4B0_IE_SHIFT               (0U)
#define GPIO4_IOC_GPIO4B_IE_GPIO4B0_IE_MASK                (0x3U << GPIO4_IOC_GPIO4B_IE_GPIO4B0_IE_SHIFT)               /* 0x00000003 */
#define GPIO4_IOC_GPIO4B_IE_GPIO4B1_IE_SHIFT               (2U)
#define GPIO4_IOC_GPIO4B_IE_GPIO4B1_IE_MASK                (0x3U << GPIO4_IOC_GPIO4B_IE_GPIO4B1_IE_SHIFT)               /* 0x0000000C */
#define GPIO4_IOC_GPIO4B_IE_GPIO4B2_IE_SHIFT               (4U)
#define GPIO4_IOC_GPIO4B_IE_GPIO4B2_IE_MASK                (0x3U << GPIO4_IOC_GPIO4B_IE_GPIO4B2_IE_SHIFT)               /* 0x00000030 */
#define GPIO4_IOC_GPIO4B_IE_GPIO4B3_IE_SHIFT               (6U)
#define GPIO4_IOC_GPIO4B_IE_GPIO4B3_IE_MASK                (0x3U << GPIO4_IOC_GPIO4B_IE_GPIO4B3_IE_SHIFT)               /* 0x000000C0 */
#define GPIO4_IOC_GPIO4B_IE_GPIO4B4_IE_SHIFT               (8U)
#define GPIO4_IOC_GPIO4B_IE_GPIO4B4_IE_MASK                (0x3U << GPIO4_IOC_GPIO4B_IE_GPIO4B4_IE_SHIFT)               /* 0x00000300 */
#define GPIO4_IOC_GPIO4B_IE_GPIO4B5_IE_SHIFT               (10U)
#define GPIO4_IOC_GPIO4B_IE_GPIO4B5_IE_MASK                (0x3U << GPIO4_IOC_GPIO4B_IE_GPIO4B5_IE_SHIFT)               /* 0x00000C00 */
#define GPIO4_IOC_GPIO4B_IE_GPIO4B6_IE_SHIFT               (12U)
#define GPIO4_IOC_GPIO4B_IE_GPIO4B6_IE_MASK                (0x3U << GPIO4_IOC_GPIO4B_IE_GPIO4B6_IE_SHIFT)               /* 0x00003000 */
#define GPIO4_IOC_GPIO4B_IE_GPIO4B7_IE_SHIFT               (14U)
#define GPIO4_IOC_GPIO4B_IE_GPIO4B7_IE_MASK                (0x3U << GPIO4_IOC_GPIO4B_IE_GPIO4B7_IE_SHIFT)               /* 0x0000C000 */
/* GPIO4A_OD */
#define GPIO4_IOC_GPIO4A_OD_OFFSET                         (0x130U)
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
#define GPIO4_IOC_GPIO4B_OD_OFFSET                         (0x134U)
#define GPIO4_IOC_GPIO4B_OD_GPIO4B0_OD_SHIFT               (0U)
#define GPIO4_IOC_GPIO4B_OD_GPIO4B0_OD_MASK                (0x1U << GPIO4_IOC_GPIO4B_OD_GPIO4B0_OD_SHIFT)               /* 0x00000001 */
#define GPIO4_IOC_GPIO4B_OD_GPIO4B1_OD_SHIFT               (1U)
#define GPIO4_IOC_GPIO4B_OD_GPIO4B1_OD_MASK                (0x1U << GPIO4_IOC_GPIO4B_OD_GPIO4B1_OD_SHIFT)               /* 0x00000002 */
#define GPIO4_IOC_GPIO4B_OD_GPIO4B2_OD_SHIFT               (2U)
#define GPIO4_IOC_GPIO4B_OD_GPIO4B2_OD_MASK                (0x1U << GPIO4_IOC_GPIO4B_OD_GPIO4B2_OD_SHIFT)               /* 0x00000004 */
#define GPIO4_IOC_GPIO4B_OD_GPIO4B3_OD_SHIFT               (3U)
#define GPIO4_IOC_GPIO4B_OD_GPIO4B3_OD_MASK                (0x1U << GPIO4_IOC_GPIO4B_OD_GPIO4B3_OD_SHIFT)               /* 0x00000008 */
#define GPIO4_IOC_GPIO4B_OD_GPIO4B4_OD_SHIFT               (4U)
#define GPIO4_IOC_GPIO4B_OD_GPIO4B4_OD_MASK                (0x1U << GPIO4_IOC_GPIO4B_OD_GPIO4B4_OD_SHIFT)               /* 0x00000010 */
#define GPIO4_IOC_GPIO4B_OD_GPIO4B5_OD_SHIFT               (5U)
#define GPIO4_IOC_GPIO4B_OD_GPIO4B5_OD_MASK                (0x1U << GPIO4_IOC_GPIO4B_OD_GPIO4B5_OD_SHIFT)               /* 0x00000020 */
#define GPIO4_IOC_GPIO4B_OD_GPIO4B6_OD_SHIFT               (6U)
#define GPIO4_IOC_GPIO4B_OD_GPIO4B6_OD_MASK                (0x1U << GPIO4_IOC_GPIO4B_OD_GPIO4B6_OD_SHIFT)               /* 0x00000040 */
#define GPIO4_IOC_GPIO4B_OD_GPIO4B7_OD_SHIFT               (7U)
#define GPIO4_IOC_GPIO4B_OD_GPIO4B7_OD_MASK                (0x1U << GPIO4_IOC_GPIO4B_OD_GPIO4B7_OD_SHIFT)               /* 0x00000080 */
/* GPIO4A_SUS */
#define GPIO4_IOC_GPIO4A_SUS_OFFSET                        (0x170U)
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
#define GPIO4_IOC_GPIO4B_SUS_OFFSET                        (0x174U)
#define GPIO4_IOC_GPIO4B_SUS_GPIO4B0_SUS_SHIFT             (0U)
#define GPIO4_IOC_GPIO4B_SUS_GPIO4B0_SUS_MASK              (0x1U << GPIO4_IOC_GPIO4B_SUS_GPIO4B0_SUS_SHIFT)             /* 0x00000001 */
#define GPIO4_IOC_GPIO4B_SUS_GPIO4B1_SUS_SHIFT             (1U)
#define GPIO4_IOC_GPIO4B_SUS_GPIO4B1_SUS_MASK              (0x1U << GPIO4_IOC_GPIO4B_SUS_GPIO4B1_SUS_SHIFT)             /* 0x00000002 */
#define GPIO4_IOC_GPIO4B_SUS_GPIO4B2_SUS_SHIFT             (2U)
#define GPIO4_IOC_GPIO4B_SUS_GPIO4B2_SUS_MASK              (0x1U << GPIO4_IOC_GPIO4B_SUS_GPIO4B2_SUS_SHIFT)             /* 0x00000004 */
#define GPIO4_IOC_GPIO4B_SUS_GPIO4B3_SUS_SHIFT             (3U)
#define GPIO4_IOC_GPIO4B_SUS_GPIO4B3_SUS_MASK              (0x1U << GPIO4_IOC_GPIO4B_SUS_GPIO4B3_SUS_SHIFT)             /* 0x00000008 */
#define GPIO4_IOC_GPIO4B_SUS_GPIO4B4_SUS_SHIFT             (4U)
#define GPIO4_IOC_GPIO4B_SUS_GPIO4B4_SUS_MASK              (0x1U << GPIO4_IOC_GPIO4B_SUS_GPIO4B4_SUS_SHIFT)             /* 0x00000010 */
#define GPIO4_IOC_GPIO4B_SUS_GPIO4B5_SUS_SHIFT             (5U)
#define GPIO4_IOC_GPIO4B_SUS_GPIO4B5_SUS_MASK              (0x1U << GPIO4_IOC_GPIO4B_SUS_GPIO4B5_SUS_SHIFT)             /* 0x00000020 */
#define GPIO4_IOC_GPIO4B_SUS_GPIO4B6_SUS_SHIFT             (6U)
#define GPIO4_IOC_GPIO4B_SUS_GPIO4B6_SUS_MASK              (0x1U << GPIO4_IOC_GPIO4B_SUS_GPIO4B6_SUS_SHIFT)             /* 0x00000040 */
#define GPIO4_IOC_GPIO4B_SUS_GPIO4B7_SUS_SHIFT             (7U)
#define GPIO4_IOC_GPIO4B_SUS_GPIO4B7_SUS_MASK              (0x1U << GPIO4_IOC_GPIO4B_SUS_GPIO4B7_SUS_SHIFT)             /* 0x00000080 */
/* GPIO4A_SL */
#define GPIO4_IOC_GPIO4A_SL_OFFSET                         (0x1B0U)
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
#define GPIO4_IOC_GPIO4B_SL_OFFSET                         (0x1B4U)
#define GPIO4_IOC_GPIO4B_SL_GPIO4B0_SL_SHIFT               (0U)
#define GPIO4_IOC_GPIO4B_SL_GPIO4B0_SL_MASK                (0x3U << GPIO4_IOC_GPIO4B_SL_GPIO4B0_SL_SHIFT)               /* 0x00000003 */
#define GPIO4_IOC_GPIO4B_SL_GPIO4B1_SL_SHIFT               (2U)
#define GPIO4_IOC_GPIO4B_SL_GPIO4B1_SL_MASK                (0x3U << GPIO4_IOC_GPIO4B_SL_GPIO4B1_SL_SHIFT)               /* 0x0000000C */
#define GPIO4_IOC_GPIO4B_SL_GPIO4B2_SL_SHIFT               (4U)
#define GPIO4_IOC_GPIO4B_SL_GPIO4B2_SL_MASK                (0x3U << GPIO4_IOC_GPIO4B_SL_GPIO4B2_SL_SHIFT)               /* 0x00000030 */
#define GPIO4_IOC_GPIO4B_SL_GPIO4B3_SL_SHIFT               (6U)
#define GPIO4_IOC_GPIO4B_SL_GPIO4B3_SL_MASK                (0x3U << GPIO4_IOC_GPIO4B_SL_GPIO4B3_SL_SHIFT)               /* 0x000000C0 */
#define GPIO4_IOC_GPIO4B_SL_GPIO4B4_SL_SHIFT               (8U)
#define GPIO4_IOC_GPIO4B_SL_GPIO4B4_SL_MASK                (0x3U << GPIO4_IOC_GPIO4B_SL_GPIO4B4_SL_SHIFT)               /* 0x00000300 */
#define GPIO4_IOC_GPIO4B_SL_GPIO4B5_SL_SHIFT               (10U)
#define GPIO4_IOC_GPIO4B_SL_GPIO4B5_SL_MASK                (0x3U << GPIO4_IOC_GPIO4B_SL_GPIO4B5_SL_SHIFT)               /* 0x00000C00 */
#define GPIO4_IOC_GPIO4B_SL_GPIO4B6_SL_SHIFT               (12U)
#define GPIO4_IOC_GPIO4B_SL_GPIO4B6_SL_MASK                (0x3U << GPIO4_IOC_GPIO4B_SL_GPIO4B6_SL_SHIFT)               /* 0x00003000 */
#define GPIO4_IOC_GPIO4B_SL_GPIO4B7_SL_SHIFT               (14U)
#define GPIO4_IOC_GPIO4B_SL_GPIO4B7_SL_MASK                (0x3U << GPIO4_IOC_GPIO4B_SL_GPIO4B7_SL_SHIFT)               /* 0x0000C000 */
/* GPIO4A_DS0 */
#define GPIO4_IOC_GPIO4A_DS0_OFFSET                        (0x2C0U)
#define GPIO4_IOC_GPIO4A_DS0_GPIO4A0_DS_SHIFT              (0U)
#define GPIO4_IOC_GPIO4A_DS0_GPIO4A0_DS_MASK               (0x3FU << GPIO4_IOC_GPIO4A_DS0_GPIO4A0_DS_SHIFT)             /* 0x0000003F */
#define GPIO4_IOC_GPIO4A_DS0_GPIO4A1_DS_SHIFT              (8U)
#define GPIO4_IOC_GPIO4A_DS0_GPIO4A1_DS_MASK               (0x3FU << GPIO4_IOC_GPIO4A_DS0_GPIO4A1_DS_SHIFT)             /* 0x00003F00 */
/* GPIO4A_DS1 */
#define GPIO4_IOC_GPIO4A_DS1_OFFSET                        (0x2C4U)
#define GPIO4_IOC_GPIO4A_DS1_GPIO4A2_DS_SHIFT              (0U)
#define GPIO4_IOC_GPIO4A_DS1_GPIO4A2_DS_MASK               (0x3FU << GPIO4_IOC_GPIO4A_DS1_GPIO4A2_DS_SHIFT)             /* 0x0000003F */
#define GPIO4_IOC_GPIO4A_DS1_GPIO4A3_DS_SHIFT              (8U)
#define GPIO4_IOC_GPIO4A_DS1_GPIO4A3_DS_MASK               (0x3FU << GPIO4_IOC_GPIO4A_DS1_GPIO4A3_DS_SHIFT)             /* 0x00003F00 */
/* GPIO4A_DS2 */
#define GPIO4_IOC_GPIO4A_DS2_OFFSET                        (0x2C8U)
#define GPIO4_IOC_GPIO4A_DS2_GPIO4A4_DS_SHIFT              (0U)
#define GPIO4_IOC_GPIO4A_DS2_GPIO4A4_DS_MASK               (0x3FU << GPIO4_IOC_GPIO4A_DS2_GPIO4A4_DS_SHIFT)             /* 0x0000003F */
#define GPIO4_IOC_GPIO4A_DS2_GPIO4A5_DS_SHIFT              (8U)
#define GPIO4_IOC_GPIO4A_DS2_GPIO4A5_DS_MASK               (0x3FU << GPIO4_IOC_GPIO4A_DS2_GPIO4A5_DS_SHIFT)             /* 0x00003F00 */
/* GPIO4A_DS3 */
#define GPIO4_IOC_GPIO4A_DS3_OFFSET                        (0x2CCU)
#define GPIO4_IOC_GPIO4A_DS3_GPIO4A6_DS_SHIFT              (0U)
#define GPIO4_IOC_GPIO4A_DS3_GPIO4A6_DS_MASK               (0x3FU << GPIO4_IOC_GPIO4A_DS3_GPIO4A6_DS_SHIFT)             /* 0x0000003F */
#define GPIO4_IOC_GPIO4A_DS3_GPIO4A7_DS_SHIFT              (8U)
#define GPIO4_IOC_GPIO4A_DS3_GPIO4A7_DS_MASK               (0x3FU << GPIO4_IOC_GPIO4A_DS3_GPIO4A7_DS_SHIFT)             /* 0x00003F00 */
/* GPIO4B_DS0 */
#define GPIO4_IOC_GPIO4B_DS0_OFFSET                        (0x2D0U)
#define GPIO4_IOC_GPIO4B_DS0_GPIO4B0_DS_SHIFT              (0U)
#define GPIO4_IOC_GPIO4B_DS0_GPIO4B0_DS_MASK               (0x3FU << GPIO4_IOC_GPIO4B_DS0_GPIO4B0_DS_SHIFT)             /* 0x0000003F */
#define GPIO4_IOC_GPIO4B_DS0_GPIO4B1_DS_SHIFT              (8U)
#define GPIO4_IOC_GPIO4B_DS0_GPIO4B1_DS_MASK               (0x3FU << GPIO4_IOC_GPIO4B_DS0_GPIO4B1_DS_SHIFT)             /* 0x00003F00 */
/* GPIO4B_DS1 */
#define GPIO4_IOC_GPIO4B_DS1_OFFSET                        (0x2D4U)
#define GPIO4_IOC_GPIO4B_DS1_GPIO4B2_DS_SHIFT              (0U)
#define GPIO4_IOC_GPIO4B_DS1_GPIO4B2_DS_MASK               (0x3FU << GPIO4_IOC_GPIO4B_DS1_GPIO4B2_DS_SHIFT)             /* 0x0000003F */
#define GPIO4_IOC_GPIO4B_DS1_GPIO4B3_DS_SHIFT              (8U)
#define GPIO4_IOC_GPIO4B_DS1_GPIO4B3_DS_MASK               (0x3FU << GPIO4_IOC_GPIO4B_DS1_GPIO4B3_DS_SHIFT)             /* 0x00003F00 */
/* GPIO4B_DS2 */
#define GPIO4_IOC_GPIO4B_DS2_OFFSET                        (0x2D8U)
#define GPIO4_IOC_GPIO4B_DS2_GPIO4B4_DS_SHIFT              (0U)
#define GPIO4_IOC_GPIO4B_DS2_GPIO4B4_DS_MASK               (0x3FU << GPIO4_IOC_GPIO4B_DS2_GPIO4B4_DS_SHIFT)             /* 0x0000003F */
#define GPIO4_IOC_GPIO4B_DS2_GPIO4B5_DS_SHIFT              (8U)
#define GPIO4_IOC_GPIO4B_DS2_GPIO4B5_DS_MASK               (0x3FU << GPIO4_IOC_GPIO4B_DS2_GPIO4B5_DS_SHIFT)             /* 0x00003F00 */
/* GPIO4B_DS3 */
#define GPIO4_IOC_GPIO4B_DS3_OFFSET                        (0x2DCU)
#define GPIO4_IOC_GPIO4B_DS3_GPIO4B6_DS_SHIFT              (0U)
#define GPIO4_IOC_GPIO4B_DS3_GPIO4B6_DS_MASK               (0x3FU << GPIO4_IOC_GPIO4B_DS3_GPIO4B6_DS_SHIFT)             /* 0x0000003F */
#define GPIO4_IOC_GPIO4B_DS3_GPIO4B7_DS_SHIFT              (8U)
#define GPIO4_IOC_GPIO4B_DS3_GPIO4B7_DS_MASK               (0x3FU << GPIO4_IOC_GPIO4B_DS3_GPIO4B7_DS_SHIFT)             /* 0x00003F00 */
/* IO_VSEL1 */
#define GPIO4_IOC_IO_VSEL1_OFFSET                          (0x300U)
#define GPIO4_IOC_IO_VSEL1_POC_VCCIO156_SEL_SHIFT          (0U)
#define GPIO4_IOC_IO_VSEL1_POC_VCCIO156_SEL_MASK           (0x1U << GPIO4_IOC_IO_VSEL1_POC_VCCIO156_SEL_SHIFT)          /* 0x00000001 */
#define GPIO4_IOC_IO_VSEL1_POC_VCCIO1_SEL18_SHIFT          (1U)
#define GPIO4_IOC_IO_VSEL1_POC_VCCIO1_SEL18_MASK           (0x1U << GPIO4_IOC_IO_VSEL1_POC_VCCIO1_SEL18_SHIFT)          /* 0x00000002 */
#define GPIO4_IOC_IO_VSEL1_POC_VCCIO5_SEL18_SHIFT          (2U)
#define GPIO4_IOC_IO_VSEL1_POC_VCCIO5_SEL18_MASK           (0x1U << GPIO4_IOC_IO_VSEL1_POC_VCCIO5_SEL18_SHIFT)          /* 0x00000004 */
#define GPIO4_IOC_IO_VSEL1_POC_VCCIO6_SEL18_SHIFT          (3U)
#define GPIO4_IOC_IO_VSEL1_POC_VCCIO6_SEL18_MASK           (0x1U << GPIO4_IOC_IO_VSEL1_POC_VCCIO6_SEL18_SHIFT)          /* 0x00000008 */
#define GPIO4_IOC_IO_VSEL1_POC_VCCIO1_SEL33_SHIFT          (4U)
#define GPIO4_IOC_IO_VSEL1_POC_VCCIO1_SEL33_MASK           (0x1U << GPIO4_IOC_IO_VSEL1_POC_VCCIO1_SEL33_SHIFT)          /* 0x00000010 */
#define GPIO4_IOC_IO_VSEL1_POC_VCCIO5_SEL33_SHIFT          (5U)
#define GPIO4_IOC_IO_VSEL1_POC_VCCIO5_SEL33_MASK           (0x1U << GPIO4_IOC_IO_VSEL1_POC_VCCIO5_SEL33_SHIFT)          /* 0x00000020 */
#define GPIO4_IOC_IO_VSEL1_POC_VCCIO6_SEL33_SHIFT          (6U)
#define GPIO4_IOC_IO_VSEL1_POC_VCCIO6_SEL33_MASK           (0x1U << GPIO4_IOC_IO_VSEL1_POC_VCCIO6_SEL33_SHIFT)          /* 0x00000040 */
#define GPIO4_IOC_IO_VSEL1_POC_VCCIO1_IDDQ_SHIFT           (7U)
#define GPIO4_IOC_IO_VSEL1_POC_VCCIO1_IDDQ_MASK            (0x1U << GPIO4_IOC_IO_VSEL1_POC_VCCIO1_IDDQ_SHIFT)           /* 0x00000080 */
#define GPIO4_IOC_IO_VSEL1_POC_VCCIO5_IDDQ_SHIFT           (8U)
#define GPIO4_IOC_IO_VSEL1_POC_VCCIO5_IDDQ_MASK            (0x1U << GPIO4_IOC_IO_VSEL1_POC_VCCIO5_IDDQ_SHIFT)           /* 0x00000100 */
#define GPIO4_IOC_IO_VSEL1_POC_VCCIO6_IDDQ_SHIFT           (9U)
#define GPIO4_IOC_IO_VSEL1_POC_VCCIO6_IDDQ_MASK            (0x1U << GPIO4_IOC_IO_VSEL1_POC_VCCIO6_IDDQ_SHIFT)           /* 0x00000200 */
#define GPIO4_IOC_IO_VSEL1_POC_VCCIO1_VD_SHIFT             (12U)
#define GPIO4_IOC_IO_VSEL1_POC_VCCIO1_VD_MASK              (0x1U << GPIO4_IOC_IO_VSEL1_POC_VCCIO1_VD_SHIFT)             /* 0x00001000 */
#define GPIO4_IOC_IO_VSEL1_POC_VCCIO5_VD_SHIFT             (13U)
#define GPIO4_IOC_IO_VSEL1_POC_VCCIO5_VD_MASK              (0x1U << GPIO4_IOC_IO_VSEL1_POC_VCCIO5_VD_SHIFT)             /* 0x00002000 */
#define GPIO4_IOC_IO_VSEL1_POC_VCCIO6_VD_SHIFT             (14U)
#define GPIO4_IOC_IO_VSEL1_POC_VCCIO6_VD_MASK              (0x1U << GPIO4_IOC_IO_VSEL1_POC_VCCIO6_VD_SHIFT)             /* 0x00004000 */
/* MAC0_IO_CON0 */
#define GPIO4_IOC_MAC0_IO_CON0_OFFSET                      (0x400U)
#define GPIO4_IOC_MAC0_IO_CON0_GMAC0_CLK_TX_DL_CFG_SHIFT   (0U)
#define GPIO4_IOC_MAC0_IO_CON0_GMAC0_CLK_TX_DL_CFG_MASK    (0xFFU << GPIO4_IOC_MAC0_IO_CON0_GMAC0_CLK_TX_DL_CFG_SHIFT)  /* 0x000000FF */
#define GPIO4_IOC_MAC0_IO_CON0_GMAC0_CLK_RX_DL_CFG_SHIFT   (8U)
#define GPIO4_IOC_MAC0_IO_CON0_GMAC0_CLK_RX_DL_CFG_MASK    (0xFFU << GPIO4_IOC_MAC0_IO_CON0_GMAC0_CLK_RX_DL_CFG_SHIFT)  /* 0x0000FF00 */
/* MAC0_IO_CON1 */
#define GPIO4_IOC_MAC0_IO_CON1_OFFSET                      (0x404U)
#define GPIO4_IOC_MAC0_IO_CON1_GMAC0_TXCLK_DLY_ENA_SHIFT   (0U)
#define GPIO4_IOC_MAC0_IO_CON1_GMAC0_TXCLK_DLY_ENA_MASK    (0x1U << GPIO4_IOC_MAC0_IO_CON1_GMAC0_TXCLK_DLY_ENA_SHIFT)   /* 0x00000001 */
#define GPIO4_IOC_MAC0_IO_CON1_GMAC0_RXCLK_DLY_ENA_SHIFT   (1U)
#define GPIO4_IOC_MAC0_IO_CON1_GMAC0_RXCLK_DLY_ENA_MASK    (0x1U << GPIO4_IOC_MAC0_IO_CON1_GMAC0_RXCLK_DLY_ENA_SHIFT)   /* 0x00000002 */
/* VO_IO_CON */
#define GPIO4_IOC_VO_IO_CON_OFFSET                         (0x500U)
#define GPIO4_IOC_VO_IO_CON_RGB_DCLK_INV_SEL_SHIFT         (3U)
#define GPIO4_IOC_VO_IO_CON_RGB_DCLK_INV_SEL_MASK          (0x1U << GPIO4_IOC_VO_IO_CON_RGB_DCLK_INV_SEL_SHIFT)         /* 0x00000008 */
#define GPIO4_IOC_VO_IO_CON_RGB_BYPASS_SHIFT               (6U)
#define GPIO4_IOC_VO_IO_CON_RGB_BYPASS_MASK                (0x1U << GPIO4_IOC_VO_IO_CON_RGB_BYPASS_SHIFT)               /* 0x00000040 */
#define GPIO4_IOC_VO_IO_CON_RGB_DCLK_DELAY_NUM_SHIFT       (8U)
#define GPIO4_IOC_VO_IO_CON_RGB_DCLK_DELAY_NUM_MASK        (0xFFU << GPIO4_IOC_VO_IO_CON_RGB_DCLK_DELAY_NUM_SHIFT)      /* 0x0000FF00 */
/* SARADC1_CON */
#define GPIO4_IOC_SARADC1_CON_OFFSET                       (0x590U)
#define GPIO4_IOC_SARADC1_CON_SARADC_ANA_REG_SHIFT         (0U)
#define GPIO4_IOC_SARADC1_CON_SARADC_ANA_REG_MASK          (0xFFFFU << GPIO4_IOC_SARADC1_CON_SARADC_ANA_REG_SHIFT)      /* 0x0000FFFF */
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
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A7_SEL_SHIFT     (12U)
#define GPIO0_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A7_SEL_MASK      (0x7U << GPIO0_IOC_GPIO0A_IOMUX_SEL_H_GPIO0A7_SEL_SHIFT)     /* 0x00007000 */
/* GPIO0B_IOMUX_SEL_L */
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_L_OFFSET                (0x8U)
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B0_SEL_SHIFT     (0U)
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B0_SEL_MASK      (0x7U << GPIO0_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B0_SEL_SHIFT)     /* 0x00000007 */
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B1_SEL_SHIFT     (4U)
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B1_SEL_MASK      (0x7U << GPIO0_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B1_SEL_SHIFT)     /* 0x00000070 */
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B2_SEL_SHIFT     (8U)
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B2_SEL_MASK      (0x7U << GPIO0_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B2_SEL_SHIFT)     /* 0x00000700 */
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B3_SEL_SHIFT     (12U)
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B3_SEL_MASK      (0x7U << GPIO0_IOC_GPIO0B_IOMUX_SEL_L_GPIO0B3_SEL_SHIFT)     /* 0x00007000 */
/* GPIO0B_IOMUX_SEL_H */
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_H_OFFSET                (0xCU)
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B4_SEL_SHIFT     (0U)
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B4_SEL_MASK      (0x7U << GPIO0_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B4_SEL_SHIFT)     /* 0x00000007 */
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B5_SEL_SHIFT     (4U)
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B5_SEL_MASK      (0x7U << GPIO0_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B5_SEL_SHIFT)     /* 0x00000070 */
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B6_SEL_SHIFT     (8U)
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B6_SEL_MASK      (0x7U << GPIO0_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B6_SEL_SHIFT)     /* 0x00000700 */
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B7_SEL_SHIFT     (12U)
#define GPIO0_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B7_SEL_MASK      (0x7U << GPIO0_IOC_GPIO0B_IOMUX_SEL_H_GPIO0B7_SEL_SHIFT)     /* 0x00007000 */
/* GPIO0C_IOMUX_SEL_L */
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_L_OFFSET                (0x10U)
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C0_SEL_SHIFT     (0U)
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C0_SEL_MASK      (0x7U << GPIO0_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C0_SEL_SHIFT)     /* 0x00000007 */
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C1_SEL_SHIFT     (4U)
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C1_SEL_MASK      (0x7U << GPIO0_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C1_SEL_SHIFT)     /* 0x00000070 */
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C2_SEL_SHIFT     (8U)
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C2_SEL_MASK      (0x7U << GPIO0_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C2_SEL_SHIFT)     /* 0x00000700 */
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C3_SEL_SHIFT     (12U)
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C3_SEL_MASK      (0x7U << GPIO0_IOC_GPIO0C_IOMUX_SEL_L_GPIO0C3_SEL_SHIFT)     /* 0x00007000 */
/* GPIO0C_IOMUX_SEL_H */
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_H_OFFSET                (0x14U)
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C4_SEL_SHIFT     (0U)
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C4_SEL_MASK      (0x7U << GPIO0_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C4_SEL_SHIFT)     /* 0x00000007 */
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C5_SEL_SHIFT     (4U)
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C5_SEL_MASK      (0x7U << GPIO0_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C5_SEL_SHIFT)     /* 0x00000070 */
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C6_SEL_SHIFT     (8U)
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C6_SEL_MASK      (0x7U << GPIO0_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C6_SEL_SHIFT)     /* 0x00000700 */
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C7_SEL_SHIFT     (12U)
#define GPIO0_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C7_SEL_MASK      (0x7U << GPIO0_IOC_GPIO0C_IOMUX_SEL_H_GPIO0C7_SEL_SHIFT)     /* 0x00007000 */
/* GPIO0D_IOMUX_SEL_L */
#define GPIO0_IOC_GPIO0D_IOMUX_SEL_L_OFFSET                (0x18U)
#define GPIO0_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D0_SEL_SHIFT     (0U)
#define GPIO0_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D0_SEL_MASK      (0x7U << GPIO0_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D0_SEL_SHIFT)     /* 0x00000007 */
#define GPIO0_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D1_SEL_SHIFT     (4U)
#define GPIO0_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D1_SEL_MASK      (0x7U << GPIO0_IOC_GPIO0D_IOMUX_SEL_L_GPIO0D1_SEL_SHIFT)     /* 0x00000070 */
/* GPIO0A_P */
#define GPIO0_IOC_GPIO0A_P_OFFSET                          (0x20U)
#define GPIO0_IOC_GPIO0A_P_GPIO0A0_P_SHIFT                 (0U)
#define GPIO0_IOC_GPIO0A_P_GPIO0A0_P_MASK                  (0x3U << GPIO0_IOC_GPIO0A_P_GPIO0A0_P_SHIFT)                 /* 0x00000003 */
#define GPIO0_IOC_GPIO0A_P_GPIO0A1_P_SHIFT                 (2U)
#define GPIO0_IOC_GPIO0A_P_GPIO0A1_P_MASK                  (0x3U << GPIO0_IOC_GPIO0A_P_GPIO0A1_P_SHIFT)                 /* 0x0000000C */
#define GPIO0_IOC_GPIO0A_P_GPIO0A2_P_SHIFT                 (4U)
#define GPIO0_IOC_GPIO0A_P_GPIO0A2_P_MASK                  (0x3U << GPIO0_IOC_GPIO0A_P_GPIO0A2_P_SHIFT)                 /* 0x00000030 */
#define GPIO0_IOC_GPIO0A_P_GPIO0A3_P_SHIFT                 (6U)
#define GPIO0_IOC_GPIO0A_P_GPIO0A3_P_MASK                  (0x3U << GPIO0_IOC_GPIO0A_P_GPIO0A3_P_SHIFT)                 /* 0x000000C0 */
#define GPIO0_IOC_GPIO0A_P_GPIO0A4_P_SHIFT                 (8U)
#define GPIO0_IOC_GPIO0A_P_GPIO0A4_P_MASK                  (0x3U << GPIO0_IOC_GPIO0A_P_GPIO0A4_P_SHIFT)                 /* 0x00000300 */
#define GPIO0_IOC_GPIO0A_P_GPIO0A5_P_SHIFT                 (10U)
#define GPIO0_IOC_GPIO0A_P_GPIO0A5_P_MASK                  (0x3U << GPIO0_IOC_GPIO0A_P_GPIO0A5_P_SHIFT)                 /* 0x00000C00 */
#define GPIO0_IOC_GPIO0A_P_GPIO0A6_P_SHIFT                 (12U)
#define GPIO0_IOC_GPIO0A_P_GPIO0A6_P_MASK                  (0x3U << GPIO0_IOC_GPIO0A_P_GPIO0A6_P_SHIFT)                 /* 0x00003000 */
#define GPIO0_IOC_GPIO0A_P_GPIO0A7_P_SHIFT                 (14U)
#define GPIO0_IOC_GPIO0A_P_GPIO0A7_P_MASK                  (0x3U << GPIO0_IOC_GPIO0A_P_GPIO0A7_P_SHIFT)                 /* 0x0000C000 */
/* GPIO0B_P */
#define GPIO0_IOC_GPIO0B_P_OFFSET                          (0x24U)
#define GPIO0_IOC_GPIO0B_P_GPIO0B0_P_SHIFT                 (0U)
#define GPIO0_IOC_GPIO0B_P_GPIO0B0_P_MASK                  (0x3U << GPIO0_IOC_GPIO0B_P_GPIO0B0_P_SHIFT)                 /* 0x00000003 */
#define GPIO0_IOC_GPIO0B_P_GPIO0B1_P_SHIFT                 (2U)
#define GPIO0_IOC_GPIO0B_P_GPIO0B1_P_MASK                  (0x3U << GPIO0_IOC_GPIO0B_P_GPIO0B1_P_SHIFT)                 /* 0x0000000C */
#define GPIO0_IOC_GPIO0B_P_GPIO0B2_P_SHIFT                 (4U)
#define GPIO0_IOC_GPIO0B_P_GPIO0B2_P_MASK                  (0x3U << GPIO0_IOC_GPIO0B_P_GPIO0B2_P_SHIFT)                 /* 0x00000030 */
#define GPIO0_IOC_GPIO0B_P_GPIO0B3_P_SHIFT                 (6U)
#define GPIO0_IOC_GPIO0B_P_GPIO0B3_P_MASK                  (0x3U << GPIO0_IOC_GPIO0B_P_GPIO0B3_P_SHIFT)                 /* 0x000000C0 */
#define GPIO0_IOC_GPIO0B_P_GPIO0B4_P_SHIFT                 (8U)
#define GPIO0_IOC_GPIO0B_P_GPIO0B4_P_MASK                  (0x3U << GPIO0_IOC_GPIO0B_P_GPIO0B4_P_SHIFT)                 /* 0x00000300 */
#define GPIO0_IOC_GPIO0B_P_GPIO0B5_P_SHIFT                 (10U)
#define GPIO0_IOC_GPIO0B_P_GPIO0B5_P_MASK                  (0x3U << GPIO0_IOC_GPIO0B_P_GPIO0B5_P_SHIFT)                 /* 0x00000C00 */
#define GPIO0_IOC_GPIO0B_P_GPIO0B6_P_SHIFT                 (12U)
#define GPIO0_IOC_GPIO0B_P_GPIO0B6_P_MASK                  (0x3U << GPIO0_IOC_GPIO0B_P_GPIO0B6_P_SHIFT)                 /* 0x00003000 */
#define GPIO0_IOC_GPIO0B_P_GPIO0B7_P_SHIFT                 (14U)
#define GPIO0_IOC_GPIO0B_P_GPIO0B7_P_MASK                  (0x3U << GPIO0_IOC_GPIO0B_P_GPIO0B7_P_SHIFT)                 /* 0x0000C000 */
/* GPIO0C_P */
#define GPIO0_IOC_GPIO0C_P_OFFSET                          (0x28U)
#define GPIO0_IOC_GPIO0C_P_GPIO0C0_P_SHIFT                 (0U)
#define GPIO0_IOC_GPIO0C_P_GPIO0C0_P_MASK                  (0x3U << GPIO0_IOC_GPIO0C_P_GPIO0C0_P_SHIFT)                 /* 0x00000003 */
#define GPIO0_IOC_GPIO0C_P_GPIO0C1_P_SHIFT                 (2U)
#define GPIO0_IOC_GPIO0C_P_GPIO0C1_P_MASK                  (0x3U << GPIO0_IOC_GPIO0C_P_GPIO0C1_P_SHIFT)                 /* 0x0000000C */
#define GPIO0_IOC_GPIO0C_P_GPIO0C2_P_SHIFT                 (4U)
#define GPIO0_IOC_GPIO0C_P_GPIO0C2_P_MASK                  (0x3U << GPIO0_IOC_GPIO0C_P_GPIO0C2_P_SHIFT)                 /* 0x00000030 */
#define GPIO0_IOC_GPIO0C_P_GPIO0C3_P_SHIFT                 (6U)
#define GPIO0_IOC_GPIO0C_P_GPIO0C3_P_MASK                  (0x3U << GPIO0_IOC_GPIO0C_P_GPIO0C3_P_SHIFT)                 /* 0x000000C0 */
#define GPIO0_IOC_GPIO0C_P_GPIO0C4_P_SHIFT                 (8U)
#define GPIO0_IOC_GPIO0C_P_GPIO0C4_P_MASK                  (0x3U << GPIO0_IOC_GPIO0C_P_GPIO0C4_P_SHIFT)                 /* 0x00000300 */
#define GPIO0_IOC_GPIO0C_P_GPIO0C5_P_SHIFT                 (10U)
#define GPIO0_IOC_GPIO0C_P_GPIO0C5_P_MASK                  (0x3U << GPIO0_IOC_GPIO0C_P_GPIO0C5_P_SHIFT)                 /* 0x00000C00 */
#define GPIO0_IOC_GPIO0C_P_GPIO0C6_P_SHIFT                 (12U)
#define GPIO0_IOC_GPIO0C_P_GPIO0C6_P_MASK                  (0x3U << GPIO0_IOC_GPIO0C_P_GPIO0C6_P_SHIFT)                 /* 0x00003000 */
#define GPIO0_IOC_GPIO0C_P_GPIO0C7_P_SHIFT                 (14U)
#define GPIO0_IOC_GPIO0C_P_GPIO0C7_P_MASK                  (0x3U << GPIO0_IOC_GPIO0C_P_GPIO0C7_P_SHIFT)                 /* 0x0000C000 */
/* GPIO0D_P */
#define GPIO0_IOC_GPIO0D_P_OFFSET                          (0x2CU)
#define GPIO0_IOC_GPIO0D_P_GPIO0D0_P_SHIFT                 (0U)
#define GPIO0_IOC_GPIO0D_P_GPIO0D0_P_MASK                  (0x3U << GPIO0_IOC_GPIO0D_P_GPIO0D0_P_SHIFT)                 /* 0x00000003 */
#define GPIO0_IOC_GPIO0D_P_GPIO0D1_P_SHIFT                 (2U)
#define GPIO0_IOC_GPIO0D_P_GPIO0D1_P_MASK                  (0x3U << GPIO0_IOC_GPIO0D_P_GPIO0D1_P_SHIFT)                 /* 0x0000000C */
/* GPIO0A_IE */
#define GPIO0_IOC_GPIO0A_IE_OFFSET                         (0x30U)
#define GPIO0_IOC_GPIO0A_IE_GPIO0A0_IE_SHIFT               (0U)
#define GPIO0_IOC_GPIO0A_IE_GPIO0A0_IE_MASK                (0x3U << GPIO0_IOC_GPIO0A_IE_GPIO0A0_IE_SHIFT)               /* 0x00000003 */
#define GPIO0_IOC_GPIO0A_IE_GPIO0A1_IE_SHIFT               (2U)
#define GPIO0_IOC_GPIO0A_IE_GPIO0A1_IE_MASK                (0x3U << GPIO0_IOC_GPIO0A_IE_GPIO0A1_IE_SHIFT)               /* 0x0000000C */
#define GPIO0_IOC_GPIO0A_IE_GPIO0A2_IE_SHIFT               (4U)
#define GPIO0_IOC_GPIO0A_IE_GPIO0A2_IE_MASK                (0x3U << GPIO0_IOC_GPIO0A_IE_GPIO0A2_IE_SHIFT)               /* 0x00000030 */
#define GPIO0_IOC_GPIO0A_IE_GPIO0A3_IE_SHIFT               (6U)
#define GPIO0_IOC_GPIO0A_IE_GPIO0A3_IE_MASK                (0x3U << GPIO0_IOC_GPIO0A_IE_GPIO0A3_IE_SHIFT)               /* 0x000000C0 */
#define GPIO0_IOC_GPIO0A_IE_GPIO0A4_IE_SHIFT               (8U)
#define GPIO0_IOC_GPIO0A_IE_GPIO0A4_IE_MASK                (0x3U << GPIO0_IOC_GPIO0A_IE_GPIO0A4_IE_SHIFT)               /* 0x00000300 */
#define GPIO0_IOC_GPIO0A_IE_GPIO0A5_IE_SHIFT               (10U)
#define GPIO0_IOC_GPIO0A_IE_GPIO0A5_IE_MASK                (0x3U << GPIO0_IOC_GPIO0A_IE_GPIO0A5_IE_SHIFT)               /* 0x00000C00 */
#define GPIO0_IOC_GPIO0A_IE_GPIO0A6_IE_SHIFT               (12U)
#define GPIO0_IOC_GPIO0A_IE_GPIO0A6_IE_MASK                (0x3U << GPIO0_IOC_GPIO0A_IE_GPIO0A6_IE_SHIFT)               /* 0x00003000 */
#define GPIO0_IOC_GPIO0A_IE_GPIO0A7_IE_SHIFT               (14U)
#define GPIO0_IOC_GPIO0A_IE_GPIO0A7_IE_MASK                (0x3U << GPIO0_IOC_GPIO0A_IE_GPIO0A7_IE_SHIFT)               /* 0x0000C000 */
/* GPIO0B_IE */
#define GPIO0_IOC_GPIO0B_IE_OFFSET                         (0x34U)
#define GPIO0_IOC_GPIO0B_IE_GPIO0B0_IE_SHIFT               (0U)
#define GPIO0_IOC_GPIO0B_IE_GPIO0B0_IE_MASK                (0x3U << GPIO0_IOC_GPIO0B_IE_GPIO0B0_IE_SHIFT)               /* 0x00000003 */
#define GPIO0_IOC_GPIO0B_IE_GPIO0B1_IE_SHIFT               (2U)
#define GPIO0_IOC_GPIO0B_IE_GPIO0B1_IE_MASK                (0x3U << GPIO0_IOC_GPIO0B_IE_GPIO0B1_IE_SHIFT)               /* 0x0000000C */
#define GPIO0_IOC_GPIO0B_IE_GPIO0B2_IE_SHIFT               (4U)
#define GPIO0_IOC_GPIO0B_IE_GPIO0B2_IE_MASK                (0x3U << GPIO0_IOC_GPIO0B_IE_GPIO0B2_IE_SHIFT)               /* 0x00000030 */
#define GPIO0_IOC_GPIO0B_IE_GPIO0B3_IE_SHIFT               (6U)
#define GPIO0_IOC_GPIO0B_IE_GPIO0B3_IE_MASK                (0x3U << GPIO0_IOC_GPIO0B_IE_GPIO0B3_IE_SHIFT)               /* 0x000000C0 */
#define GPIO0_IOC_GPIO0B_IE_GPIO0B4_IE_SHIFT               (8U)
#define GPIO0_IOC_GPIO0B_IE_GPIO0B4_IE_MASK                (0x3U << GPIO0_IOC_GPIO0B_IE_GPIO0B4_IE_SHIFT)               /* 0x00000300 */
#define GPIO0_IOC_GPIO0B_IE_GPIO0B5_IE_SHIFT               (10U)
#define GPIO0_IOC_GPIO0B_IE_GPIO0B5_IE_MASK                (0x3U << GPIO0_IOC_GPIO0B_IE_GPIO0B5_IE_SHIFT)               /* 0x00000C00 */
#define GPIO0_IOC_GPIO0B_IE_GPIO0B6_IE_SHIFT               (12U)
#define GPIO0_IOC_GPIO0B_IE_GPIO0B6_IE_MASK                (0x3U << GPIO0_IOC_GPIO0B_IE_GPIO0B6_IE_SHIFT)               /* 0x00003000 */
#define GPIO0_IOC_GPIO0B_IE_GPIO0B7_IE_SHIFT               (14U)
#define GPIO0_IOC_GPIO0B_IE_GPIO0B7_IE_MASK                (0x3U << GPIO0_IOC_GPIO0B_IE_GPIO0B7_IE_SHIFT)               /* 0x0000C000 */
/* GPIO0C_IE */
#define GPIO0_IOC_GPIO0C_IE_OFFSET                         (0x38U)
#define GPIO0_IOC_GPIO0C_IE_GPIO0C0_IE_SHIFT               (0U)
#define GPIO0_IOC_GPIO0C_IE_GPIO0C0_IE_MASK                (0x3U << GPIO0_IOC_GPIO0C_IE_GPIO0C0_IE_SHIFT)               /* 0x00000003 */
#define GPIO0_IOC_GPIO0C_IE_GPIO0C1_IE_SHIFT               (2U)
#define GPIO0_IOC_GPIO0C_IE_GPIO0C1_IE_MASK                (0x3U << GPIO0_IOC_GPIO0C_IE_GPIO0C1_IE_SHIFT)               /* 0x0000000C */
#define GPIO0_IOC_GPIO0C_IE_GPIO0C2_IE_SHIFT               (4U)
#define GPIO0_IOC_GPIO0C_IE_GPIO0C2_IE_MASK                (0x3U << GPIO0_IOC_GPIO0C_IE_GPIO0C2_IE_SHIFT)               /* 0x00000030 */
#define GPIO0_IOC_GPIO0C_IE_GPIO0C3_IE_SHIFT               (6U)
#define GPIO0_IOC_GPIO0C_IE_GPIO0C3_IE_MASK                (0x3U << GPIO0_IOC_GPIO0C_IE_GPIO0C3_IE_SHIFT)               /* 0x000000C0 */
#define GPIO0_IOC_GPIO0C_IE_GPIO0C4_IE_SHIFT               (8U)
#define GPIO0_IOC_GPIO0C_IE_GPIO0C4_IE_MASK                (0x3U << GPIO0_IOC_GPIO0C_IE_GPIO0C4_IE_SHIFT)               /* 0x00000300 */
#define GPIO0_IOC_GPIO0C_IE_GPIO0C5_IE_SHIFT               (10U)
#define GPIO0_IOC_GPIO0C_IE_GPIO0C5_IE_MASK                (0x3U << GPIO0_IOC_GPIO0C_IE_GPIO0C5_IE_SHIFT)               /* 0x00000C00 */
#define GPIO0_IOC_GPIO0C_IE_GPIO0C6_IE_SHIFT               (12U)
#define GPIO0_IOC_GPIO0C_IE_GPIO0C6_IE_MASK                (0x3U << GPIO0_IOC_GPIO0C_IE_GPIO0C6_IE_SHIFT)               /* 0x00003000 */
#define GPIO0_IOC_GPIO0C_IE_GPIO0C7_IE_SHIFT               (14U)
#define GPIO0_IOC_GPIO0C_IE_GPIO0C7_IE_MASK                (0x3U << GPIO0_IOC_GPIO0C_IE_GPIO0C7_IE_SHIFT)               /* 0x0000C000 */
/* GPIO0D_IE */
#define GPIO0_IOC_GPIO0D_IE_OFFSET                         (0x3CU)
#define GPIO0_IOC_GPIO0D_IE_GPIO0D0_IE_SHIFT               (0U)
#define GPIO0_IOC_GPIO0D_IE_GPIO0D0_IE_MASK                (0x3U << GPIO0_IOC_GPIO0D_IE_GPIO0D0_IE_SHIFT)               /* 0x00000003 */
#define GPIO0_IOC_GPIO0D_IE_GPIO0D1_IE_SHIFT               (2U)
#define GPIO0_IOC_GPIO0D_IE_GPIO0D1_IE_MASK                (0x3U << GPIO0_IOC_GPIO0D_IE_GPIO0D1_IE_SHIFT)               /* 0x0000000C */
/* GPIO0A_OD */
#define GPIO0_IOC_GPIO0A_OD_OFFSET                         (0x40U)
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
#define GPIO0_IOC_GPIO0A_OD_GPIO0A7_OD_SHIFT               (7U)
#define GPIO0_IOC_GPIO0A_OD_GPIO0A7_OD_MASK                (0x1U << GPIO0_IOC_GPIO0A_OD_GPIO0A7_OD_SHIFT)               /* 0x00000080 */
/* GPIO0B_OD */
#define GPIO0_IOC_GPIO0B_OD_OFFSET                         (0x44U)
#define GPIO0_IOC_GPIO0B_OD_GPIO0B0_OD_SHIFT               (0U)
#define GPIO0_IOC_GPIO0B_OD_GPIO0B0_OD_MASK                (0x1U << GPIO0_IOC_GPIO0B_OD_GPIO0B0_OD_SHIFT)               /* 0x00000001 */
#define GPIO0_IOC_GPIO0B_OD_GPIO0B1_OD_SHIFT               (1U)
#define GPIO0_IOC_GPIO0B_OD_GPIO0B1_OD_MASK                (0x1U << GPIO0_IOC_GPIO0B_OD_GPIO0B1_OD_SHIFT)               /* 0x00000002 */
#define GPIO0_IOC_GPIO0B_OD_GPIO0B2_OD_SHIFT               (2U)
#define GPIO0_IOC_GPIO0B_OD_GPIO0B2_OD_MASK                (0x1U << GPIO0_IOC_GPIO0B_OD_GPIO0B2_OD_SHIFT)               /* 0x00000004 */
#define GPIO0_IOC_GPIO0B_OD_GPIO0B3_OD_SHIFT               (3U)
#define GPIO0_IOC_GPIO0B_OD_GPIO0B3_OD_MASK                (0x1U << GPIO0_IOC_GPIO0B_OD_GPIO0B3_OD_SHIFT)               /* 0x00000008 */
#define GPIO0_IOC_GPIO0B_OD_GPIO0B4_OD_SHIFT               (4U)
#define GPIO0_IOC_GPIO0B_OD_GPIO0B4_OD_MASK                (0x1U << GPIO0_IOC_GPIO0B_OD_GPIO0B4_OD_SHIFT)               /* 0x00000010 */
#define GPIO0_IOC_GPIO0B_OD_GPIO0B5_OD_SHIFT               (5U)
#define GPIO0_IOC_GPIO0B_OD_GPIO0B5_OD_MASK                (0x1U << GPIO0_IOC_GPIO0B_OD_GPIO0B5_OD_SHIFT)               /* 0x00000020 */
#define GPIO0_IOC_GPIO0B_OD_GPIO0B6_OD_SHIFT               (6U)
#define GPIO0_IOC_GPIO0B_OD_GPIO0B6_OD_MASK                (0x1U << GPIO0_IOC_GPIO0B_OD_GPIO0B6_OD_SHIFT)               /* 0x00000040 */
#define GPIO0_IOC_GPIO0B_OD_GPIO0B7_OD_SHIFT               (7U)
#define GPIO0_IOC_GPIO0B_OD_GPIO0B7_OD_MASK                (0x1U << GPIO0_IOC_GPIO0B_OD_GPIO0B7_OD_SHIFT)               /* 0x00000080 */
/* GPIO0C_OD */
#define GPIO0_IOC_GPIO0C_OD_OFFSET                         (0x48U)
#define GPIO0_IOC_GPIO0C_OD_GPIO0C0_OD_SHIFT               (0U)
#define GPIO0_IOC_GPIO0C_OD_GPIO0C0_OD_MASK                (0x1U << GPIO0_IOC_GPIO0C_OD_GPIO0C0_OD_SHIFT)               /* 0x00000001 */
#define GPIO0_IOC_GPIO0C_OD_GPIO0C1_OD_SHIFT               (1U)
#define GPIO0_IOC_GPIO0C_OD_GPIO0C1_OD_MASK                (0x1U << GPIO0_IOC_GPIO0C_OD_GPIO0C1_OD_SHIFT)               /* 0x00000002 */
#define GPIO0_IOC_GPIO0C_OD_GPIO0C2_OD_SHIFT               (2U)
#define GPIO0_IOC_GPIO0C_OD_GPIO0C2_OD_MASK                (0x1U << GPIO0_IOC_GPIO0C_OD_GPIO0C2_OD_SHIFT)               /* 0x00000004 */
#define GPIO0_IOC_GPIO0C_OD_GPIO0C3_OD_SHIFT               (3U)
#define GPIO0_IOC_GPIO0C_OD_GPIO0C3_OD_MASK                (0x1U << GPIO0_IOC_GPIO0C_OD_GPIO0C3_OD_SHIFT)               /* 0x00000008 */
#define GPIO0_IOC_GPIO0C_OD_GPIO0C4_OD_SHIFT               (4U)
#define GPIO0_IOC_GPIO0C_OD_GPIO0C4_OD_MASK                (0x1U << GPIO0_IOC_GPIO0C_OD_GPIO0C4_OD_SHIFT)               /* 0x00000010 */
#define GPIO0_IOC_GPIO0C_OD_GPIO0C5_OD_SHIFT               (5U)
#define GPIO0_IOC_GPIO0C_OD_GPIO0C5_OD_MASK                (0x1U << GPIO0_IOC_GPIO0C_OD_GPIO0C5_OD_SHIFT)               /* 0x00000020 */
#define GPIO0_IOC_GPIO0C_OD_GPIO0C6_OD_SHIFT               (6U)
#define GPIO0_IOC_GPIO0C_OD_GPIO0C6_OD_MASK                (0x1U << GPIO0_IOC_GPIO0C_OD_GPIO0C6_OD_SHIFT)               /* 0x00000040 */
#define GPIO0_IOC_GPIO0C_OD_GPIO0C7_OD_SHIFT               (7U)
#define GPIO0_IOC_GPIO0C_OD_GPIO0C7_OD_MASK                (0x1U << GPIO0_IOC_GPIO0C_OD_GPIO0C7_OD_SHIFT)               /* 0x00000080 */
/* GPIO0D_OD */
#define GPIO0_IOC_GPIO0D_OD_OFFSET                         (0x4CU)
#define GPIO0_IOC_GPIO0D_OD_GPIO0D0_OD_SHIFT               (0U)
#define GPIO0_IOC_GPIO0D_OD_GPIO0D0_OD_MASK                (0x1U << GPIO0_IOC_GPIO0D_OD_GPIO0D0_OD_SHIFT)               /* 0x00000001 */
#define GPIO0_IOC_GPIO0D_OD_GPIO0D1_OD_SHIFT               (1U)
#define GPIO0_IOC_GPIO0D_OD_GPIO0D1_OD_MASK                (0x1U << GPIO0_IOC_GPIO0D_OD_GPIO0D1_OD_SHIFT)               /* 0x00000002 */
/* GPIO0A_SUS */
#define GPIO0_IOC_GPIO0A_SUS_OFFSET                        (0x50U)
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
#define GPIO0_IOC_GPIO0A_SUS_GPIO0A7_SUS_SHIFT             (7U)
#define GPIO0_IOC_GPIO0A_SUS_GPIO0A7_SUS_MASK              (0x1U << GPIO0_IOC_GPIO0A_SUS_GPIO0A7_SUS_SHIFT)             /* 0x00000080 */
/* GPIO0B_SUS */
#define GPIO0_IOC_GPIO0B_SUS_OFFSET                        (0x54U)
#define GPIO0_IOC_GPIO0B_SUS_GPIO0B0_SUS_SHIFT             (0U)
#define GPIO0_IOC_GPIO0B_SUS_GPIO0B0_SUS_MASK              (0x1U << GPIO0_IOC_GPIO0B_SUS_GPIO0B0_SUS_SHIFT)             /* 0x00000001 */
#define GPIO0_IOC_GPIO0B_SUS_GPIO0B1_SUS_SHIFT             (1U)
#define GPIO0_IOC_GPIO0B_SUS_GPIO0B1_SUS_MASK              (0x1U << GPIO0_IOC_GPIO0B_SUS_GPIO0B1_SUS_SHIFT)             /* 0x00000002 */
#define GPIO0_IOC_GPIO0B_SUS_GPIO0B2_SUS_SHIFT             (2U)
#define GPIO0_IOC_GPIO0B_SUS_GPIO0B2_SUS_MASK              (0x1U << GPIO0_IOC_GPIO0B_SUS_GPIO0B2_SUS_SHIFT)             /* 0x00000004 */
#define GPIO0_IOC_GPIO0B_SUS_GPIO0B3_SUS_SHIFT             (3U)
#define GPIO0_IOC_GPIO0B_SUS_GPIO0B3_SUS_MASK              (0x1U << GPIO0_IOC_GPIO0B_SUS_GPIO0B3_SUS_SHIFT)             /* 0x00000008 */
#define GPIO0_IOC_GPIO0B_SUS_GPIO0B4_SUS_SHIFT             (4U)
#define GPIO0_IOC_GPIO0B_SUS_GPIO0B4_SUS_MASK              (0x1U << GPIO0_IOC_GPIO0B_SUS_GPIO0B4_SUS_SHIFT)             /* 0x00000010 */
#define GPIO0_IOC_GPIO0B_SUS_GPIO0B5_SUS_SHIFT             (5U)
#define GPIO0_IOC_GPIO0B_SUS_GPIO0B5_SUS_MASK              (0x1U << GPIO0_IOC_GPIO0B_SUS_GPIO0B5_SUS_SHIFT)             /* 0x00000020 */
#define GPIO0_IOC_GPIO0B_SUS_GPIO0B6_SUS_SHIFT             (6U)
#define GPIO0_IOC_GPIO0B_SUS_GPIO0B6_SUS_MASK              (0x1U << GPIO0_IOC_GPIO0B_SUS_GPIO0B6_SUS_SHIFT)             /* 0x00000040 */
#define GPIO0_IOC_GPIO0B_SUS_GPIO0B7_SUS_SHIFT             (7U)
#define GPIO0_IOC_GPIO0B_SUS_GPIO0B7_SUS_MASK              (0x1U << GPIO0_IOC_GPIO0B_SUS_GPIO0B7_SUS_SHIFT)             /* 0x00000080 */
/* GPIO0C_SUS */
#define GPIO0_IOC_GPIO0C_SUS_OFFSET                        (0x58U)
#define GPIO0_IOC_GPIO0C_SUS_GPIO0C0_SUS_SHIFT             (0U)
#define GPIO0_IOC_GPIO0C_SUS_GPIO0C0_SUS_MASK              (0x1U << GPIO0_IOC_GPIO0C_SUS_GPIO0C0_SUS_SHIFT)             /* 0x00000001 */
#define GPIO0_IOC_GPIO0C_SUS_GPIO0C1_SUS_SHIFT             (1U)
#define GPIO0_IOC_GPIO0C_SUS_GPIO0C1_SUS_MASK              (0x1U << GPIO0_IOC_GPIO0C_SUS_GPIO0C1_SUS_SHIFT)             /* 0x00000002 */
#define GPIO0_IOC_GPIO0C_SUS_GPIO0C2_SUS_SHIFT             (2U)
#define GPIO0_IOC_GPIO0C_SUS_GPIO0C2_SUS_MASK              (0x1U << GPIO0_IOC_GPIO0C_SUS_GPIO0C2_SUS_SHIFT)             /* 0x00000004 */
#define GPIO0_IOC_GPIO0C_SUS_GPIO0C3_SUS_SHIFT             (3U)
#define GPIO0_IOC_GPIO0C_SUS_GPIO0C3_SUS_MASK              (0x1U << GPIO0_IOC_GPIO0C_SUS_GPIO0C3_SUS_SHIFT)             /* 0x00000008 */
#define GPIO0_IOC_GPIO0C_SUS_GPIO0C4_SUS_SHIFT             (4U)
#define GPIO0_IOC_GPIO0C_SUS_GPIO0C4_SUS_MASK              (0x1U << GPIO0_IOC_GPIO0C_SUS_GPIO0C4_SUS_SHIFT)             /* 0x00000010 */
#define GPIO0_IOC_GPIO0C_SUS_GPIO0C5_SUS_SHIFT             (5U)
#define GPIO0_IOC_GPIO0C_SUS_GPIO0C5_SUS_MASK              (0x1U << GPIO0_IOC_GPIO0C_SUS_GPIO0C5_SUS_SHIFT)             /* 0x00000020 */
#define GPIO0_IOC_GPIO0C_SUS_GPIO0C6_SUS_SHIFT             (6U)
#define GPIO0_IOC_GPIO0C_SUS_GPIO0C6_SUS_MASK              (0x1U << GPIO0_IOC_GPIO0C_SUS_GPIO0C6_SUS_SHIFT)             /* 0x00000040 */
#define GPIO0_IOC_GPIO0C_SUS_GPIO0C7_SUS_SHIFT             (7U)
#define GPIO0_IOC_GPIO0C_SUS_GPIO0C7_SUS_MASK              (0x1U << GPIO0_IOC_GPIO0C_SUS_GPIO0C7_SUS_SHIFT)             /* 0x00000080 */
/* GPIO0D_SUS */
#define GPIO0_IOC_GPIO0D_SUS_OFFSET                        (0x5CU)
#define GPIO0_IOC_GPIO0D_SUS_GPIO0D0_SUS_SHIFT             (0U)
#define GPIO0_IOC_GPIO0D_SUS_GPIO0D0_SUS_MASK              (0x1U << GPIO0_IOC_GPIO0D_SUS_GPIO0D0_SUS_SHIFT)             /* 0x00000001 */
#define GPIO0_IOC_GPIO0D_SUS_GPIO0D1_SUS_SHIFT             (1U)
#define GPIO0_IOC_GPIO0D_SUS_GPIO0D1_SUS_MASK              (0x1U << GPIO0_IOC_GPIO0D_SUS_GPIO0D1_SUS_SHIFT)             /* 0x00000002 */
/* GPIO0A_SL */
#define GPIO0_IOC_GPIO0A_SL_OFFSET                         (0x60U)
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
#define GPIO0_IOC_GPIO0A_SL_GPIO0A7_SL_SHIFT               (14U)
#define GPIO0_IOC_GPIO0A_SL_GPIO0A7_SL_MASK                (0x3U << GPIO0_IOC_GPIO0A_SL_GPIO0A7_SL_SHIFT)               /* 0x0000C000 */
/* GPIO0B_SL */
#define GPIO0_IOC_GPIO0B_SL_OFFSET                         (0x64U)
#define GPIO0_IOC_GPIO0B_SL_GPIO0B0_SL_SHIFT               (0U)
#define GPIO0_IOC_GPIO0B_SL_GPIO0B0_SL_MASK                (0x3U << GPIO0_IOC_GPIO0B_SL_GPIO0B0_SL_SHIFT)               /* 0x00000003 */
#define GPIO0_IOC_GPIO0B_SL_GPIO0B1_SL_SHIFT               (2U)
#define GPIO0_IOC_GPIO0B_SL_GPIO0B1_SL_MASK                (0x3U << GPIO0_IOC_GPIO0B_SL_GPIO0B1_SL_SHIFT)               /* 0x0000000C */
#define GPIO0_IOC_GPIO0B_SL_GPIO0B2_SL_SHIFT               (4U)
#define GPIO0_IOC_GPIO0B_SL_GPIO0B2_SL_MASK                (0x3U << GPIO0_IOC_GPIO0B_SL_GPIO0B2_SL_SHIFT)               /* 0x00000030 */
#define GPIO0_IOC_GPIO0B_SL_GPIO0B3_SL_SHIFT               (6U)
#define GPIO0_IOC_GPIO0B_SL_GPIO0B3_SL_MASK                (0x3U << GPIO0_IOC_GPIO0B_SL_GPIO0B3_SL_SHIFT)               /* 0x000000C0 */
#define GPIO0_IOC_GPIO0B_SL_GPIO0B4_SL_SHIFT               (8U)
#define GPIO0_IOC_GPIO0B_SL_GPIO0B4_SL_MASK                (0x3U << GPIO0_IOC_GPIO0B_SL_GPIO0B4_SL_SHIFT)               /* 0x00000300 */
#define GPIO0_IOC_GPIO0B_SL_GPIO0B5_SL_SHIFT               (10U)
#define GPIO0_IOC_GPIO0B_SL_GPIO0B5_SL_MASK                (0x3U << GPIO0_IOC_GPIO0B_SL_GPIO0B5_SL_SHIFT)               /* 0x00000C00 */
#define GPIO0_IOC_GPIO0B_SL_GPIO0B6_SL_SHIFT               (12U)
#define GPIO0_IOC_GPIO0B_SL_GPIO0B6_SL_MASK                (0x3U << GPIO0_IOC_GPIO0B_SL_GPIO0B6_SL_SHIFT)               /* 0x00003000 */
#define GPIO0_IOC_GPIO0B_SL_GPIO0B7_SL_SHIFT               (14U)
#define GPIO0_IOC_GPIO0B_SL_GPIO0B7_SL_MASK                (0x3U << GPIO0_IOC_GPIO0B_SL_GPIO0B7_SL_SHIFT)               /* 0x0000C000 */
/* GPIO0C_SL */
#define GPIO0_IOC_GPIO0C_SL_OFFSET                         (0x68U)
#define GPIO0_IOC_GPIO0C_SL_GPIO0C0_SL_SHIFT               (0U)
#define GPIO0_IOC_GPIO0C_SL_GPIO0C0_SL_MASK                (0x3U << GPIO0_IOC_GPIO0C_SL_GPIO0C0_SL_SHIFT)               /* 0x00000003 */
#define GPIO0_IOC_GPIO0C_SL_GPIO0C1_SL_SHIFT               (2U)
#define GPIO0_IOC_GPIO0C_SL_GPIO0C1_SL_MASK                (0x3U << GPIO0_IOC_GPIO0C_SL_GPIO0C1_SL_SHIFT)               /* 0x0000000C */
#define GPIO0_IOC_GPIO0C_SL_GPIO0C2_SL_SHIFT               (4U)
#define GPIO0_IOC_GPIO0C_SL_GPIO0C2_SL_MASK                (0x3U << GPIO0_IOC_GPIO0C_SL_GPIO0C2_SL_SHIFT)               /* 0x00000030 */
#define GPIO0_IOC_GPIO0C_SL_GPIO0C3_SL_SHIFT               (6U)
#define GPIO0_IOC_GPIO0C_SL_GPIO0C3_SL_MASK                (0x3U << GPIO0_IOC_GPIO0C_SL_GPIO0C3_SL_SHIFT)               /* 0x000000C0 */
#define GPIO0_IOC_GPIO0C_SL_GPIO0C4_SL_SHIFT               (8U)
#define GPIO0_IOC_GPIO0C_SL_GPIO0C4_SL_MASK                (0x3U << GPIO0_IOC_GPIO0C_SL_GPIO0C4_SL_SHIFT)               /* 0x00000300 */
#define GPIO0_IOC_GPIO0C_SL_GPIO0C5_SL_SHIFT               (10U)
#define GPIO0_IOC_GPIO0C_SL_GPIO0C5_SL_MASK                (0x3U << GPIO0_IOC_GPIO0C_SL_GPIO0C5_SL_SHIFT)               /* 0x00000C00 */
#define GPIO0_IOC_GPIO0C_SL_GPIO0C6_SL_SHIFT               (12U)
#define GPIO0_IOC_GPIO0C_SL_GPIO0C6_SL_MASK                (0x3U << GPIO0_IOC_GPIO0C_SL_GPIO0C6_SL_SHIFT)               /* 0x00003000 */
#define GPIO0_IOC_GPIO0C_SL_GPIO0C7_SL_SHIFT               (14U)
#define GPIO0_IOC_GPIO0C_SL_GPIO0C7_SL_MASK                (0x3U << GPIO0_IOC_GPIO0C_SL_GPIO0C7_SL_SHIFT)               /* 0x0000C000 */
/* GPIO0D_SL */
#define GPIO0_IOC_GPIO0D_SL_OFFSET                         (0x6CU)
#define GPIO0_IOC_GPIO0D_SL_GPIO0D0_SL_SHIFT               (0U)
#define GPIO0_IOC_GPIO0D_SL_GPIO0D0_SL_MASK                (0x3U << GPIO0_IOC_GPIO0D_SL_GPIO0D0_SL_SHIFT)               /* 0x00000003 */
#define GPIO0_IOC_GPIO0D_SL_GPIO0D1_SL_SHIFT               (2U)
#define GPIO0_IOC_GPIO0D_SL_GPIO0D1_SL_MASK                (0x3U << GPIO0_IOC_GPIO0D_SL_GPIO0D1_SL_SHIFT)               /* 0x0000000C */
/* GPIO0A_DS0 */
#define GPIO0_IOC_GPIO0A_DS0_OFFSET                        (0x70U)
#define GPIO0_IOC_GPIO0A_DS0_GPIO0A0_DS_SHIFT              (0U)
#define GPIO0_IOC_GPIO0A_DS0_GPIO0A0_DS_MASK               (0x3FU << GPIO0_IOC_GPIO0A_DS0_GPIO0A0_DS_SHIFT)             /* 0x0000003F */
#define GPIO0_IOC_GPIO0A_DS0_GPIO0A1_DS_SHIFT              (8U)
#define GPIO0_IOC_GPIO0A_DS0_GPIO0A1_DS_MASK               (0x3FU << GPIO0_IOC_GPIO0A_DS0_GPIO0A1_DS_SHIFT)             /* 0x00003F00 */
/* GPIO0A_DS1 */
#define GPIO0_IOC_GPIO0A_DS1_OFFSET                        (0x74U)
#define GPIO0_IOC_GPIO0A_DS1_GPIO0A2_DS_SHIFT              (0U)
#define GPIO0_IOC_GPIO0A_DS1_GPIO0A2_DS_MASK               (0x3FU << GPIO0_IOC_GPIO0A_DS1_GPIO0A2_DS_SHIFT)             /* 0x0000003F */
#define GPIO0_IOC_GPIO0A_DS1_GPIO0A3_DS_SHIFT              (8U)
#define GPIO0_IOC_GPIO0A_DS1_GPIO0A3_DS_MASK               (0x3FU << GPIO0_IOC_GPIO0A_DS1_GPIO0A3_DS_SHIFT)             /* 0x00003F00 */
/* GPIO0A_DS2 */
#define GPIO0_IOC_GPIO0A_DS2_OFFSET                        (0x78U)
#define GPIO0_IOC_GPIO0A_DS2_GPIO0A4_DS_SHIFT              (0U)
#define GPIO0_IOC_GPIO0A_DS2_GPIO0A4_DS_MASK               (0x3FU << GPIO0_IOC_GPIO0A_DS2_GPIO0A4_DS_SHIFT)             /* 0x0000003F */
#define GPIO0_IOC_GPIO0A_DS2_GPIO0A5_DS_SHIFT              (8U)
#define GPIO0_IOC_GPIO0A_DS2_GPIO0A5_DS_MASK               (0x3FU << GPIO0_IOC_GPIO0A_DS2_GPIO0A5_DS_SHIFT)             /* 0x00003F00 */
/* GPIO0A_DS3 */
#define GPIO0_IOC_GPIO0A_DS3_OFFSET                        (0x7CU)
#define GPIO0_IOC_GPIO0A_DS3_GPIO0A6_DS_SHIFT              (0U)
#define GPIO0_IOC_GPIO0A_DS3_GPIO0A6_DS_MASK               (0x3FU << GPIO0_IOC_GPIO0A_DS3_GPIO0A6_DS_SHIFT)             /* 0x0000003F */
#define GPIO0_IOC_GPIO0A_DS3_GPIO0A7_DS_SHIFT              (8U)
#define GPIO0_IOC_GPIO0A_DS3_GPIO0A7_DS_MASK               (0x3FU << GPIO0_IOC_GPIO0A_DS3_GPIO0A7_DS_SHIFT)             /* 0x00003F00 */
/* GPIO0B_DS0 */
#define GPIO0_IOC_GPIO0B_DS0_OFFSET                        (0x80U)
#define GPIO0_IOC_GPIO0B_DS0_GPIO0B0_DS_SHIFT              (0U)
#define GPIO0_IOC_GPIO0B_DS0_GPIO0B0_DS_MASK               (0x3FU << GPIO0_IOC_GPIO0B_DS0_GPIO0B0_DS_SHIFT)             /* 0x0000003F */
#define GPIO0_IOC_GPIO0B_DS0_GPIO0B1_DS_SHIFT              (8U)
#define GPIO0_IOC_GPIO0B_DS0_GPIO0B1_DS_MASK               (0x3FU << GPIO0_IOC_GPIO0B_DS0_GPIO0B1_DS_SHIFT)             /* 0x00003F00 */
/* GPIO0B_DS1 */
#define GPIO0_IOC_GPIO0B_DS1_OFFSET                        (0x84U)
#define GPIO0_IOC_GPIO0B_DS1_GPIO0B2_DS_SHIFT              (0U)
#define GPIO0_IOC_GPIO0B_DS1_GPIO0B2_DS_MASK               (0x3FU << GPIO0_IOC_GPIO0B_DS1_GPIO0B2_DS_SHIFT)             /* 0x0000003F */
#define GPIO0_IOC_GPIO0B_DS1_GPIO0B3_DS_SHIFT              (8U)
#define GPIO0_IOC_GPIO0B_DS1_GPIO0B3_DS_MASK               (0x3FU << GPIO0_IOC_GPIO0B_DS1_GPIO0B3_DS_SHIFT)             /* 0x00003F00 */
/* GPIO0B_DS2 */
#define GPIO0_IOC_GPIO0B_DS2_OFFSET                        (0x88U)
#define GPIO0_IOC_GPIO0B_DS2_GPIO0B4_DS_SHIFT              (0U)
#define GPIO0_IOC_GPIO0B_DS2_GPIO0B4_DS_MASK               (0x3FU << GPIO0_IOC_GPIO0B_DS2_GPIO0B4_DS_SHIFT)             /* 0x0000003F */
#define GPIO0_IOC_GPIO0B_DS2_GPIO0B5_DS_SHIFT              (8U)
#define GPIO0_IOC_GPIO0B_DS2_GPIO0B5_DS_MASK               (0x3FU << GPIO0_IOC_GPIO0B_DS2_GPIO0B5_DS_SHIFT)             /* 0x00003F00 */
/* GPIO0B_DS3 */
#define GPIO0_IOC_GPIO0B_DS3_OFFSET                        (0x8CU)
#define GPIO0_IOC_GPIO0B_DS3_GPIO0B6_DS_SHIFT              (0U)
#define GPIO0_IOC_GPIO0B_DS3_GPIO0B6_DS_MASK               (0x3FU << GPIO0_IOC_GPIO0B_DS3_GPIO0B6_DS_SHIFT)             /* 0x0000003F */
#define GPIO0_IOC_GPIO0B_DS3_GPIO0B7_DS_SHIFT              (8U)
#define GPIO0_IOC_GPIO0B_DS3_GPIO0B7_DS_MASK               (0x3FU << GPIO0_IOC_GPIO0B_DS3_GPIO0B7_DS_SHIFT)             /* 0x00003F00 */
/* GPIO0C_DS0 */
#define GPIO0_IOC_GPIO0C_DS0_OFFSET                        (0x90U)
#define GPIO0_IOC_GPIO0C_DS0_GPIO0C0_DS_SHIFT              (0U)
#define GPIO0_IOC_GPIO0C_DS0_GPIO0C0_DS_MASK               (0x3FU << GPIO0_IOC_GPIO0C_DS0_GPIO0C0_DS_SHIFT)             /* 0x0000003F */
#define GPIO0_IOC_GPIO0C_DS0_GPIO0C1_DS_SHIFT              (8U)
#define GPIO0_IOC_GPIO0C_DS0_GPIO0C1_DS_MASK               (0x3FU << GPIO0_IOC_GPIO0C_DS0_GPIO0C1_DS_SHIFT)             /* 0x00003F00 */
/* GPIO0C_DS1 */
#define GPIO0_IOC_GPIO0C_DS1_OFFSET                        (0x94U)
#define GPIO0_IOC_GPIO0C_DS1_GPIO0C2_DS_SHIFT              (0U)
#define GPIO0_IOC_GPIO0C_DS1_GPIO0C2_DS_MASK               (0x3FU << GPIO0_IOC_GPIO0C_DS1_GPIO0C2_DS_SHIFT)             /* 0x0000003F */
#define GPIO0_IOC_GPIO0C_DS1_GPIO0C3_DS_SHIFT              (8U)
#define GPIO0_IOC_GPIO0C_DS1_GPIO0C3_DS_MASK               (0x3FU << GPIO0_IOC_GPIO0C_DS1_GPIO0C3_DS_SHIFT)             /* 0x00003F00 */
/* GPIO0C_DS2 */
#define GPIO0_IOC_GPIO0C_DS2_OFFSET                        (0x98U)
#define GPIO0_IOC_GPIO0C_DS2_GPIO0C4_DS_SHIFT              (0U)
#define GPIO0_IOC_GPIO0C_DS2_GPIO0C4_DS_MASK               (0x3FU << GPIO0_IOC_GPIO0C_DS2_GPIO0C4_DS_SHIFT)             /* 0x0000003F */
#define GPIO0_IOC_GPIO0C_DS2_GPIO0C5_DS_SHIFT              (8U)
#define GPIO0_IOC_GPIO0C_DS2_GPIO0C5_DS_MASK               (0x3FU << GPIO0_IOC_GPIO0C_DS2_GPIO0C5_DS_SHIFT)             /* 0x00003F00 */
/* GPIO0C_DS3 */
#define GPIO0_IOC_GPIO0C_DS3_OFFSET                        (0x9CU)
#define GPIO0_IOC_GPIO0C_DS3_GPIO0C6_DS_SHIFT              (0U)
#define GPIO0_IOC_GPIO0C_DS3_GPIO0C6_DS_MASK               (0x3FU << GPIO0_IOC_GPIO0C_DS3_GPIO0C6_DS_SHIFT)             /* 0x0000003F */
#define GPIO0_IOC_GPIO0C_DS3_GPIO0C7_DS_SHIFT              (8U)
#define GPIO0_IOC_GPIO0C_DS3_GPIO0C7_DS_MASK               (0x3FU << GPIO0_IOC_GPIO0C_DS3_GPIO0C7_DS_SHIFT)             /* 0x00003F00 */
/* GPIO0D_DS0 */
#define GPIO0_IOC_GPIO0D_DS0_OFFSET                        (0xA0U)
#define GPIO0_IOC_GPIO0D_DS0_GPIO0D0_DS_SHIFT              (0U)
#define GPIO0_IOC_GPIO0D_DS0_GPIO0D0_DS_MASK               (0x3FU << GPIO0_IOC_GPIO0D_DS0_GPIO0D0_DS_SHIFT)             /* 0x0000003F */
#define GPIO0_IOC_GPIO0D_DS0_GPIO0D1_DS_SHIFT              (8U)
#define GPIO0_IOC_GPIO0D_DS0_GPIO0D1_DS_MASK               (0x3FU << GPIO0_IOC_GPIO0D_DS0_GPIO0D1_DS_SHIFT)             /* 0x00003F00 */
/* JTAG_M0_CON */
#define GPIO0_IOC_JTAG_M0_CON_OFFSET                       (0x100U)
#define GPIO0_IOC_JTAG_M0_CON_FORCE_JTAG_UART_SHIFT        (0U)
#define GPIO0_IOC_JTAG_M0_CON_FORCE_JTAG_UART_MASK         (0x1U << GPIO0_IOC_JTAG_M0_CON_FORCE_JTAG_UART_SHIFT)        /* 0x00000001 */
#define GPIO0_IOC_JTAG_M0_CON_JTAG_SEL_M0_SHIFT            (1U)
#define GPIO0_IOC_JTAG_M0_CON_JTAG_SEL_M0_MASK             (0x3U << GPIO0_IOC_JTAG_M0_CON_JTAG_SEL_M0_SHIFT)            /* 0x00000006 */
/* UART_IO_CON */
#define GPIO0_IOC_UART_IO_CON_OFFSET                       (0x104U)
#define GPIO0_IOC_UART_IO_CON_UART0RX_LOW_DLY_SHIFT        (0U)
#define GPIO0_IOC_UART_IO_CON_UART0RX_LOW_DLY_MASK         (0xFFFFFFFFU << GPIO0_IOC_UART_IO_CON_UART0RX_LOW_DLY_SHIFT) /* 0xFFFFFFFF */
/* IO_VSEL2 */
#define GPIO0_IOC_IO_VSEL2_OFFSET                          (0x148U)
#define GPIO0_IOC_IO_VSEL2_POC_PMUIO1_SEL_SHIFT            (0U)
#define GPIO0_IOC_IO_VSEL2_POC_PMUIO1_SEL_MASK             (0x1U << GPIO0_IOC_IO_VSEL2_POC_PMUIO1_SEL_SHIFT)            /* 0x00000001 */
#define GPIO0_IOC_IO_VSEL2_POC_PMUIO1_SEL18_SHIFT          (1U)
#define GPIO0_IOC_IO_VSEL2_POC_PMUIO1_SEL18_MASK           (0x1U << GPIO0_IOC_IO_VSEL2_POC_PMUIO1_SEL18_SHIFT)          /* 0x00000002 */
#define GPIO0_IOC_IO_VSEL2_POC_PMUIO1_SEL33_SHIFT          (2U)
#define GPIO0_IOC_IO_VSEL2_POC_PMUIO1_SEL33_MASK           (0x1U << GPIO0_IOC_IO_VSEL2_POC_PMUIO1_SEL33_SHIFT)          /* 0x00000004 */
#define GPIO0_IOC_IO_VSEL2_POC_PMUIO1_IDDQ_SHIFT           (3U)
#define GPIO0_IOC_IO_VSEL2_POC_PMUIO1_IDDQ_MASK            (0x1U << GPIO0_IOC_IO_VSEL2_POC_PMUIO1_IDDQ_SHIFT)           /* 0x00000008 */
#define GPIO0_IOC_IO_VSEL2_POC_PMUIO0_IDDQ_SHIFT           (4U)
#define GPIO0_IOC_IO_VSEL2_POC_PMUIO0_IDDQ_MASK            (0x1U << GPIO0_IOC_IO_VSEL2_POC_PMUIO0_IDDQ_SHIFT)           /* 0x00000010 */
#define GPIO0_IOC_IO_VSEL2_POC_PMUIO1_VD_SHIFT             (12U)
#define GPIO0_IOC_IO_VSEL2_POC_PMUIO1_VD_MASK              (0x1U << GPIO0_IOC_IO_VSEL2_POC_PMUIO1_VD_SHIFT)             /* 0x00001000 */
/* XIN_CON */
#define GPIO0_IOC_XIN_CON_OFFSET                           (0x14CU)
#define GPIO0_IOC_XIN_CON_OSC_DS_SHIFT                     (0U)
#define GPIO0_IOC_XIN_CON_OSC_DS_MASK                      (0x7U << GPIO0_IOC_XIN_CON_OSC_DS_SHIFT)                     /* 0x00000007 */
#define GPIO0_IOC_XIN_CON_RESERVED_SHIFT                   (3U)
#define GPIO0_IOC_XIN_CON_RESERVED_MASK                    (0x1U << GPIO0_IOC_XIN_CON_RESERVED_SHIFT)                   /* 0x00000008 */
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
#define UART_LCR_STICK_PARITY_SHIFT                        (5U)
#define UART_LCR_STICK_PARITY_MASK                         (0x1U << UART_LCR_STICK_PARITY_SHIFT)                        /* 0x00000020 */
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
#define UART_LSR_PARITY_ERROR_SHIFT                        (2U)
#define UART_LSR_PARITY_ERROR_MASK                         (0x1U << UART_LSR_PARITY_ERROR_SHIFT)                        /* 0x00000004 */
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
#define UART_CPR                                           (0x43FF2U)
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
#define UART_UCV                                           (0x3430322AU)
#define UART_UCV_VER_SHIFT                                 (0U)
#define UART_UCV_VER_MASK                                  (0xFFFFFFFFU << UART_UCV_VER_SHIFT)                          /* 0xFFFFFFFF */
/* CTR */
#define UART_CTR_OFFSET                                    (0xFCU)
#define UART_CTR                                           (0x44570110U)
#define UART_CTR_PERIPHERAL_ID_SHIFT                       (0U)
#define UART_CTR_PERIPHERAL_ID_MASK                        (0xFFFFFFFFU << UART_CTR_PERIPHERAL_ID_SHIFT)                /* 0xFFFFFFFF */
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
#define SPI_CTRLR0_SM_SHIFT                                (22U)
#define SPI_CTRLR0_SM_MASK                                 (0x1U << SPI_CTRLR0_SM_SHIFT)                                /* 0x00400000 */
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
/* VERSION */
#define SPI_VERSION_OFFSET                                 (0x48U)
#define SPI_VERSION                                        (0x110002U)
#define SPI_VERSION_VERSION_SHIFT                          (0U)
#define SPI_VERSION_VERSION_MASK                           (0xFFFFFFFFU << SPI_VERSION_VERSION_SHIFT)                   /* 0xFFFFFFFF */
/* TIMEOUT */
#define SPI_TIMEOUT_OFFSET                                 (0x4CU)
#define SPI_TIMEOUT_DTSR_SHIFT                             (18U)
#define SPI_TIMEOUT_DTSR_MASK                              (0x1U << SPI_TIMEOUT_DTSR_SHIFT)                             /* 0x00040000 */
#define SPI_TIMEOUT_TSB_SHIFT                              (0U)
#define SPI_TIMEOUT_TSB_MASK                               (0x1U << SPI_TIMEOUT_TSB_SHIFT)                              /* 0x00000001 */
#define SPI_TIMEOUT_TOE_SHIFT                              (16U)
#define SPI_TIMEOUT_TOE_MASK                               (0x1U << SPI_TIMEOUT_TOE_SHIFT)                              /* 0x00010000 */
#define SPI_TIMEOUT_TOV_SHIFT                              (0U)
#define SPI_TIMEOUT_TOV_MASK                               (0xFFFFU << SPI_TIMEOUT_TOV_SHIFT)                           /* 0x0000FFFF */
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
/* PWM0_CAPTURE_CNT_EN */
#define PWM_PWM0_CAPTURE_CNT_EN_OFFSET                     (0x120U)
#define PWM_PWM0_CAPTURE_CNT_EN_POS_CAPTURE_EN_SHIFT       (0U)
#define PWM_PWM0_CAPTURE_CNT_EN_POS_CAPTURE_EN_MASK        (0x1U << PWM_PWM0_CAPTURE_CNT_EN_POS_CAPTURE_EN_SHIFT)       /* 0x00000001 */
#define PWM_PWM0_CAPTURE_CNT_EN_NEG_CAPTURE_EN_SHIFT       (1U)
#define PWM_PWM0_CAPTURE_CNT_EN_NEG_CAPTURE_EN_MASK        (0x1U << PWM_PWM0_CAPTURE_CNT_EN_NEG_CAPTURE_EN_SHIFT)       /* 0x00000002 */
/* PWM1_CAPTURE_CNT_EN */
#define PWM_PWM1_CAPTURE_CNT_EN_OFFSET                     (0x124U)
#define PWM_PWM1_CAPTURE_CNT_EN_POS_CAPTURE_EN_SHIFT       (0U)
#define PWM_PWM1_CAPTURE_CNT_EN_POS_CAPTURE_EN_MASK        (0x1U << PWM_PWM1_CAPTURE_CNT_EN_POS_CAPTURE_EN_SHIFT)       /* 0x00000001 */
#define PWM_PWM1_CAPTURE_CNT_EN_NEG_CAPTURE_EN_SHIFT       (1U)
#define PWM_PWM1_CAPTURE_CNT_EN_NEG_CAPTURE_EN_MASK        (0x1U << PWM_PWM1_CAPTURE_CNT_EN_NEG_CAPTURE_EN_SHIFT)       /* 0x00000002 */
/* PWM2_CAPTURE_CNT_EN */
#define PWM_PWM2_CAPTURE_CNT_EN_OFFSET                     (0x128U)
#define PWM_PWM2_CAPTURE_CNT_EN_POS_CAPTURE_EN_SHIFT       (0U)
#define PWM_PWM2_CAPTURE_CNT_EN_POS_CAPTURE_EN_MASK        (0x1U << PWM_PWM2_CAPTURE_CNT_EN_POS_CAPTURE_EN_SHIFT)       /* 0x00000001 */
#define PWM_PWM2_CAPTURE_CNT_EN_NEG_CAPTURE_EN_SHIFT       (1U)
#define PWM_PWM2_CAPTURE_CNT_EN_NEG_CAPTURE_EN_MASK        (0x1U << PWM_PWM2_CAPTURE_CNT_EN_NEG_CAPTURE_EN_SHIFT)       /* 0x00000002 */
/* PWM3_CAPTURE_CNT_EN */
#define PWM_PWM3_CAPTURE_CNT_EN_OFFSET                     (0x12CU)
#define PWM_PWM3_CAPTURE_CNT_EN_POS_CAPTURE_EN_SHIFT       (0U)
#define PWM_PWM3_CAPTURE_CNT_EN_POS_CAPTURE_EN_MASK        (0x1U << PWM_PWM3_CAPTURE_CNT_EN_POS_CAPTURE_EN_SHIFT)       /* 0x00000001 */
#define PWM_PWM3_CAPTURE_CNT_EN_NEG_CAPTURE_EN_SHIFT       (1U)
#define PWM_PWM3_CAPTURE_CNT_EN_NEG_CAPTURE_EN_MASK        (0x1U << PWM_PWM3_CAPTURE_CNT_EN_NEG_CAPTURE_EN_SHIFT)       /* 0x00000002 */
/* PWM0_POS_CNT */
#define PWM_PWM0_POS_CNT_OFFSET                            (0x130U)
#define PWM_PWM0_POS_CNT_POS_CNT_SHIFT                     (0U)
#define PWM_PWM0_POS_CNT_POS_CNT_MASK                      (0xFFFFFFFFU << PWM_PWM0_POS_CNT_POS_CNT_SHIFT)              /* 0xFFFFFFFF */
/* PWM1_POS_CNT */
#define PWM_PWM1_POS_CNT_OFFSET                            (0x134U)
#define PWM_PWM1_POS_CNT_POS_CNT_SHIFT                     (0U)
#define PWM_PWM1_POS_CNT_POS_CNT_MASK                      (0xFFFFFFFFU << PWM_PWM1_POS_CNT_POS_CNT_SHIFT)              /* 0xFFFFFFFF */
/* PWM2_POS_CNT */
#define PWM_PWM2_POS_CNT_OFFSET                            (0x138U)
#define PWM_PWM2_POS_CNT_POS_CNT_SHIFT                     (0U)
#define PWM_PWM2_POS_CNT_POS_CNT_MASK                      (0xFFFFFFFFU << PWM_PWM2_POS_CNT_POS_CNT_SHIFT)              /* 0xFFFFFFFF */
/* PWM3_POS_CNT */
#define PWM_PWM3_POS_CNT_OFFSET                            (0x13CU)
#define PWM_PWM3_POS_CNT_POS_CNT_SHIFT                     (0U)
#define PWM_PWM3_POS_CNT_POS_CNT_MASK                      (0xFFFFFFFFU << PWM_PWM3_POS_CNT_POS_CNT_SHIFT)              /* 0xFFFFFFFF */
/* PWM0_NEG_CNT */
#define PWM_PWM0_NEG_CNT_OFFSET                            (0x140U)
#define PWM_PWM0_NEG_CNT_NEG_CNT_SHIFT                     (0U)
#define PWM_PWM0_NEG_CNT_NEG_CNT_MASK                      (0xFFFFFFFFU << PWM_PWM0_NEG_CNT_NEG_CNT_SHIFT)              /* 0xFFFFFFFF */
/* PWM1_NEG_CNT */
#define PWM_PWM1_NEG_CNT_OFFSET                            (0x144U)
#define PWM_PWM1_NEG_CNT_NEG_CNT_SHIFT                     (0U)
#define PWM_PWM1_NEG_CNT_NEG_CNT_MASK                      (0xFFFFFFFFU << PWM_PWM1_NEG_CNT_NEG_CNT_SHIFT)              /* 0xFFFFFFFF */
/* PWM2_NEG_CNT */
#define PWM_PWM2_NEG_CNT_OFFSET                            (0x148U)
#define PWM_PWM2_NEG_CNT_NEG_CNT_SHIFT                     (0U)
#define PWM_PWM2_NEG_CNT_NEG_CNT_MASK                      (0xFFFFFFFFU << PWM_PWM2_NEG_CNT_NEG_CNT_SHIFT)              /* 0xFFFFFFFF */
/* PWM3_NEG_CNT */
#define PWM_PWM3_NEG_CNT_OFFSET                            (0x14CU)
#define PWM_PWM3_NEG_CNT_NEG_CNT_SHIFT                     (0U)
#define PWM_PWM3_NEG_CNT_NEG_CNT_MASK                      (0xFFFFFFFFU << PWM_PWM3_NEG_CNT_NEG_CNT_SHIFT)              /* 0xFFFFFFFF */
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
/* HIGH_COMP2 */
#define SARADC_HIGH_COMP2_OFFSET                           (0x1CU)
#define SARADC_HIGH_COMP2_HIGH_COMP2_SHIFT                 (0U)
#define SARADC_HIGH_COMP2_HIGH_COMP2_MASK                  (0xFFFU << SARADC_HIGH_COMP2_HIGH_COMP2_SHIFT)               /* 0x00000FFF */
/* HIGH_COMP3 */
#define SARADC_HIGH_COMP3_OFFSET                           (0x20U)
#define SARADC_HIGH_COMP3_HIGH_COMP3_SHIFT                 (0U)
#define SARADC_HIGH_COMP3_HIGH_COMP3_MASK                  (0xFFFU << SARADC_HIGH_COMP3_HIGH_COMP3_SHIFT)               /* 0x00000FFF */
/* HIGH_COMP4 */
#define SARADC_HIGH_COMP4_OFFSET                           (0x24U)
#define SARADC_HIGH_COMP4_HIGH_COMP4_SHIFT                 (0U)
#define SARADC_HIGH_COMP4_HIGH_COMP4_MASK                  (0xFFFU << SARADC_HIGH_COMP4_HIGH_COMP4_SHIFT)               /* 0x00000FFF */
/* HIGH_COMP5 */
#define SARADC_HIGH_COMP5_OFFSET                           (0x28U)
#define SARADC_HIGH_COMP5_HIGH_COMP5_SHIFT                 (0U)
#define SARADC_HIGH_COMP5_HIGH_COMP5_MASK                  (0xFFFU << SARADC_HIGH_COMP5_HIGH_COMP5_SHIFT)               /* 0x00000FFF */
/* HIGH_COMP6 */
#define SARADC_HIGH_COMP6_OFFSET                           (0x2CU)
#define SARADC_HIGH_COMP6_HIGH_COMP6_SHIFT                 (0U)
#define SARADC_HIGH_COMP6_HIGH_COMP6_MASK                  (0xFFFU << SARADC_HIGH_COMP6_HIGH_COMP6_SHIFT)               /* 0x00000FFF */
/* HIGH_COMP7 */
#define SARADC_HIGH_COMP7_OFFSET                           (0x30U)
#define SARADC_HIGH_COMP7_HIGH_COMP7_SHIFT                 (0U)
#define SARADC_HIGH_COMP7_HIGH_COMP7_MASK                  (0xFFFU << SARADC_HIGH_COMP7_HIGH_COMP7_SHIFT)               /* 0x00000FFF */
/* HIGH_COMP8 */
#define SARADC_HIGH_COMP8_OFFSET                           (0x34U)
#define SARADC_HIGH_COMP8_HIGH_COMP8_SHIFT                 (0U)
#define SARADC_HIGH_COMP8_HIGH_COMP8_MASK                  (0xFFFU << SARADC_HIGH_COMP8_HIGH_COMP8_SHIFT)               /* 0x00000FFF */
/* HIGH_COMP9 */
#define SARADC_HIGH_COMP9_OFFSET                           (0x38U)
#define SARADC_HIGH_COMP9_HIGH_COMP9_SHIFT                 (0U)
#define SARADC_HIGH_COMP9_HIGH_COMP9_MASK                  (0xFFFU << SARADC_HIGH_COMP9_HIGH_COMP9_SHIFT)               /* 0x00000FFF */
/* HIGH_COMP10 */
#define SARADC_HIGH_COMP10_OFFSET                          (0x3CU)
#define SARADC_HIGH_COMP10_HIGH_COMP10_SHIFT               (0U)
#define SARADC_HIGH_COMP10_HIGH_COMP10_MASK                (0xFFFU << SARADC_HIGH_COMP10_HIGH_COMP10_SHIFT)             /* 0x00000FFF */
/* HIGH_COMP11 */
#define SARADC_HIGH_COMP11_OFFSET                          (0x40U)
#define SARADC_HIGH_COMP11_HIGH_COMP11_SHIFT               (0U)
#define SARADC_HIGH_COMP11_HIGH_COMP11_MASK                (0xFFFU << SARADC_HIGH_COMP11_HIGH_COMP11_SHIFT)             /* 0x00000FFF */
/* HIGH_COMP12 */
#define SARADC_HIGH_COMP12_OFFSET                          (0x44U)
#define SARADC_HIGH_COMP12_HIGH_COMP12_SHIFT               (0U)
#define SARADC_HIGH_COMP12_HIGH_COMP12_MASK                (0xFFFU << SARADC_HIGH_COMP12_HIGH_COMP12_SHIFT)             /* 0x00000FFF */
/* HIGH_COMP13 */
#define SARADC_HIGH_COMP13_OFFSET                          (0x48U)
#define SARADC_HIGH_COMP13_HIGH_COMP13_SHIFT               (0U)
#define SARADC_HIGH_COMP13_HIGH_COMP13_MASK                (0xFFFU << SARADC_HIGH_COMP13_HIGH_COMP13_SHIFT)             /* 0x00000FFF */
/* HIGH_COMP14 */
#define SARADC_HIGH_COMP14_OFFSET                          (0x4CU)
#define SARADC_HIGH_COMP14_HIGH_COMP14_SHIFT               (0U)
#define SARADC_HIGH_COMP14_HIGH_COMP14_MASK                (0xFFFU << SARADC_HIGH_COMP14_HIGH_COMP14_SHIFT)             /* 0x00000FFF */
/* HIGH_COMP15 */
#define SARADC_HIGH_COMP15_OFFSET                          (0x50U)
#define SARADC_HIGH_COMP15_HIGH_COMP15_SHIFT               (0U)
#define SARADC_HIGH_COMP15_HIGH_COMP15_MASK                (0xFFFU << SARADC_HIGH_COMP15_HIGH_COMP15_SHIFT)             /* 0x00000FFF */
/* LOW_COMP0 */
#define SARADC_LOW_COMP0_OFFSET                            (0x54U)
#define SARADC_LOW_COMP0_LOW_COMP0_SHIFT                   (0U)
#define SARADC_LOW_COMP0_LOW_COMP0_MASK                    (0xFFFU << SARADC_LOW_COMP0_LOW_COMP0_SHIFT)                 /* 0x00000FFF */
/* LOW_COMP1 */
#define SARADC_LOW_COMP1_OFFSET                            (0x58U)
#define SARADC_LOW_COMP1_LOW_COMP1_SHIFT                   (0U)
#define SARADC_LOW_COMP1_LOW_COMP1_MASK                    (0xFFFU << SARADC_LOW_COMP1_LOW_COMP1_SHIFT)                 /* 0x00000FFF */
/* LOW_COMP2 */
#define SARADC_LOW_COMP2_OFFSET                            (0x5CU)
#define SARADC_LOW_COMP2_LOW_COMP2_SHIFT                   (0U)
#define SARADC_LOW_COMP2_LOW_COMP2_MASK                    (0xFFFU << SARADC_LOW_COMP2_LOW_COMP2_SHIFT)                 /* 0x00000FFF */
/* LOW_COMP3 */
#define SARADC_LOW_COMP3_OFFSET                            (0x60U)
#define SARADC_LOW_COMP3_LOW_COMP3_SHIFT                   (0U)
#define SARADC_LOW_COMP3_LOW_COMP3_MASK                    (0xFFFU << SARADC_LOW_COMP3_LOW_COMP3_SHIFT)                 /* 0x00000FFF */
/* LOW_COMP4 */
#define SARADC_LOW_COMP4_OFFSET                            (0x64U)
#define SARADC_LOW_COMP4_LOW_COMP4_SHIFT                   (0U)
#define SARADC_LOW_COMP4_LOW_COMP4_MASK                    (0xFFFU << SARADC_LOW_COMP4_LOW_COMP4_SHIFT)                 /* 0x00000FFF */
/* LOW_COMP5 */
#define SARADC_LOW_COMP5_OFFSET                            (0x68U)
#define SARADC_LOW_COMP5_LOW_COMP5_SHIFT                   (0U)
#define SARADC_LOW_COMP5_LOW_COMP5_MASK                    (0xFFFU << SARADC_LOW_COMP5_LOW_COMP5_SHIFT)                 /* 0x00000FFF */
/* LOW_COMP6 */
#define SARADC_LOW_COMP6_OFFSET                            (0x6CU)
#define SARADC_LOW_COMP6_LOW_COMP6_SHIFT                   (0U)
#define SARADC_LOW_COMP6_LOW_COMP6_MASK                    (0xFFFU << SARADC_LOW_COMP6_LOW_COMP6_SHIFT)                 /* 0x00000FFF */
/* LOW_COMP7 */
#define SARADC_LOW_COMP7_OFFSET                            (0x70U)
#define SARADC_LOW_COMP7_LOW_COMP7_SHIFT                   (0U)
#define SARADC_LOW_COMP7_LOW_COMP7_MASK                    (0xFFFU << SARADC_LOW_COMP7_LOW_COMP7_SHIFT)                 /* 0x00000FFF */
/* LOW_COMP8 */
#define SARADC_LOW_COMP8_OFFSET                            (0x74U)
#define SARADC_LOW_COMP8_LOW_COMP8_SHIFT                   (0U)
#define SARADC_LOW_COMP8_LOW_COMP8_MASK                    (0xFFFU << SARADC_LOW_COMP8_LOW_COMP8_SHIFT)                 /* 0x00000FFF */
/* LOW_COMP9 */
#define SARADC_LOW_COMP9_OFFSET                            (0x78U)
#define SARADC_LOW_COMP9_LOW_COMP9_SHIFT                   (0U)
#define SARADC_LOW_COMP9_LOW_COMP9_MASK                    (0xFFFU << SARADC_LOW_COMP9_LOW_COMP9_SHIFT)                 /* 0x00000FFF */
/* LOW_COMP10 */
#define SARADC_LOW_COMP10_OFFSET                           (0x7CU)
#define SARADC_LOW_COMP10_LOW_COMP10_SHIFT                 (0U)
#define SARADC_LOW_COMP10_LOW_COMP10_MASK                  (0x1U << SARADC_LOW_COMP10_LOW_COMP10_SHIFT)                 /* 0x00000001 */
/* LOW_COMP11 */
#define SARADC_LOW_COMP11_OFFSET                           (0x80U)
#define SARADC_LOW_COMP11_LOW_COMP11_SHIFT                 (0U)
#define SARADC_LOW_COMP11_LOW_COMP11_MASK                  (0xFFFU << SARADC_LOW_COMP11_LOW_COMP11_SHIFT)               /* 0x00000FFF */
/* LOW_COMP12 */
#define SARADC_LOW_COMP12_OFFSET                           (0x84U)
#define SARADC_LOW_COMP12_LOW_COMP12_SHIFT                 (0U)
#define SARADC_LOW_COMP12_LOW_COMP12_MASK                  (0xFFFU << SARADC_LOW_COMP12_LOW_COMP12_SHIFT)               /* 0x00000FFF */
/* LOW_COMP13 */
#define SARADC_LOW_COMP13_OFFSET                           (0x88U)
#define SARADC_LOW_COMP13_LOW_COMP13_SHIFT                 (0U)
#define SARADC_LOW_COMP13_LOW_COMP13_MASK                  (0x1U << SARADC_LOW_COMP13_LOW_COMP13_SHIFT)                 /* 0x00000001 */
/* LOW_COMP14 */
#define SARADC_LOW_COMP14_OFFSET                           (0x8CU)
#define SARADC_LOW_COMP14_LOW_COMP14_SHIFT                 (0U)
#define SARADC_LOW_COMP14_LOW_COMP14_MASK                  (0xFFFU << SARADC_LOW_COMP14_LOW_COMP14_SHIFT)               /* 0x00000FFF */
/* LOW_COMP15 */
#define SARADC_LOW_COMP15_OFFSET                           (0x90U)
#define SARADC_LOW_COMP15_LOW_COMP15_SHIFT                 (0U)
#define SARADC_LOW_COMP15_LOW_COMP15_MASK                  (0xFFFU << SARADC_LOW_COMP15_LOW_COMP15_SHIFT)               /* 0x00000FFF */
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
#define SARADC_HT_INT_EN_HT_INT_EN2_SHIFT                  (2U)
#define SARADC_HT_INT_EN_HT_INT_EN2_MASK                   (0x1U << SARADC_HT_INT_EN_HT_INT_EN2_SHIFT)                  /* 0x00000004 */
#define SARADC_HT_INT_EN_HT_INT_EN3_SHIFT                  (3U)
#define SARADC_HT_INT_EN_HT_INT_EN3_MASK                   (0x1U << SARADC_HT_INT_EN_HT_INT_EN3_SHIFT)                  /* 0x00000008 */
#define SARADC_HT_INT_EN_HT_INT_EN4_SHIFT                  (4U)
#define SARADC_HT_INT_EN_HT_INT_EN4_MASK                   (0x1U << SARADC_HT_INT_EN_HT_INT_EN4_SHIFT)                  /* 0x00000010 */
#define SARADC_HT_INT_EN_HT_INT_EN5_SHIFT                  (5U)
#define SARADC_HT_INT_EN_HT_INT_EN5_MASK                   (0x1U << SARADC_HT_INT_EN_HT_INT_EN5_SHIFT)                  /* 0x00000020 */
#define SARADC_HT_INT_EN_HT_INT_EN6_SHIFT                  (6U)
#define SARADC_HT_INT_EN_HT_INT_EN6_MASK                   (0x1U << SARADC_HT_INT_EN_HT_INT_EN6_SHIFT)                  /* 0x00000040 */
#define SARADC_HT_INT_EN_HT_INT_EN7_SHIFT                  (7U)
#define SARADC_HT_INT_EN_HT_INT_EN7_MASK                   (0x1U << SARADC_HT_INT_EN_HT_INT_EN7_SHIFT)                  /* 0x00000080 */
#define SARADC_HT_INT_EN_HT_INT_EN8_SHIFT                  (8U)
#define SARADC_HT_INT_EN_HT_INT_EN8_MASK                   (0x1U << SARADC_HT_INT_EN_HT_INT_EN8_SHIFT)                  /* 0x00000100 */
#define SARADC_HT_INT_EN_HT_INT_EN9_SHIFT                  (9U)
#define SARADC_HT_INT_EN_HT_INT_EN9_MASK                   (0x1U << SARADC_HT_INT_EN_HT_INT_EN9_SHIFT)                  /* 0x00000200 */
#define SARADC_HT_INT_EN_HT_INT_EN10_SHIFT                 (10U)
#define SARADC_HT_INT_EN_HT_INT_EN10_MASK                  (0x1U << SARADC_HT_INT_EN_HT_INT_EN10_SHIFT)                 /* 0x00000400 */
#define SARADC_HT_INT_EN_HT_INT_EN11_SHIFT                 (11U)
#define SARADC_HT_INT_EN_HT_INT_EN11_MASK                  (0x1U << SARADC_HT_INT_EN_HT_INT_EN11_SHIFT)                 /* 0x00000800 */
#define SARADC_HT_INT_EN_HT_INT_EN12_SHIFT                 (12U)
#define SARADC_HT_INT_EN_HT_INT_EN12_MASK                  (0x1U << SARADC_HT_INT_EN_HT_INT_EN12_SHIFT)                 /* 0x00001000 */
#define SARADC_HT_INT_EN_HT_INT_EN13_SHIFT                 (13U)
#define SARADC_HT_INT_EN_HT_INT_EN13_MASK                  (0x1U << SARADC_HT_INT_EN_HT_INT_EN13_SHIFT)                 /* 0x00002000 */
#define SARADC_HT_INT_EN_HT_INT_EN14_SHIFT                 (14U)
#define SARADC_HT_INT_EN_HT_INT_EN14_MASK                  (0x1U << SARADC_HT_INT_EN_HT_INT_EN14_SHIFT)                 /* 0x00004000 */
#define SARADC_HT_INT_EN_HT_INT_EN15_SHIFT                 (15U)
#define SARADC_HT_INT_EN_HT_INT_EN15_MASK                  (0x1U << SARADC_HT_INT_EN_HT_INT_EN15_SHIFT)                 /* 0x00008000 */
/* LT_INT_EN */
#define SARADC_LT_INT_EN_OFFSET                            (0x9CU)
#define SARADC_LT_INT_EN_LT_INT_EN0_SHIFT                  (0U)
#define SARADC_LT_INT_EN_LT_INT_EN0_MASK                   (0x1U << SARADC_LT_INT_EN_LT_INT_EN0_SHIFT)                  /* 0x00000001 */
#define SARADC_LT_INT_EN_LT_INT_EN1_SHIFT                  (1U)
#define SARADC_LT_INT_EN_LT_INT_EN1_MASK                   (0x1U << SARADC_LT_INT_EN_LT_INT_EN1_SHIFT)                  /* 0x00000002 */
#define SARADC_LT_INT_EN_LT_INT_EN2_SHIFT                  (2U)
#define SARADC_LT_INT_EN_LT_INT_EN2_MASK                   (0x1U << SARADC_LT_INT_EN_LT_INT_EN2_SHIFT)                  /* 0x00000004 */
#define SARADC_LT_INT_EN_LT_INT_EN3_SHIFT                  (3U)
#define SARADC_LT_INT_EN_LT_INT_EN3_MASK                   (0x1U << SARADC_LT_INT_EN_LT_INT_EN3_SHIFT)                  /* 0x00000008 */
#define SARADC_LT_INT_EN_LT_INT_EN4_SHIFT                  (4U)
#define SARADC_LT_INT_EN_LT_INT_EN4_MASK                   (0x1U << SARADC_LT_INT_EN_LT_INT_EN4_SHIFT)                  /* 0x00000010 */
#define SARADC_LT_INT_EN_LT_INT_EN5_SHIFT                  (5U)
#define SARADC_LT_INT_EN_LT_INT_EN5_MASK                   (0x1U << SARADC_LT_INT_EN_LT_INT_EN5_SHIFT)                  /* 0x00000020 */
#define SARADC_LT_INT_EN_LT_INT_EN6_SHIFT                  (6U)
#define SARADC_LT_INT_EN_LT_INT_EN6_MASK                   (0x1U << SARADC_LT_INT_EN_LT_INT_EN6_SHIFT)                  /* 0x00000040 */
#define SARADC_LT_INT_EN_LT_INT_EN7_SHIFT                  (7U)
#define SARADC_LT_INT_EN_LT_INT_EN7_MASK                   (0x1U << SARADC_LT_INT_EN_LT_INT_EN7_SHIFT)                  /* 0x00000080 */
#define SARADC_LT_INT_EN_LT_INT_EN8_SHIFT                  (8U)
#define SARADC_LT_INT_EN_LT_INT_EN8_MASK                   (0x1U << SARADC_LT_INT_EN_LT_INT_EN8_SHIFT)                  /* 0x00000100 */
#define SARADC_LT_INT_EN_LT_INT_EN9_SHIFT                  (9U)
#define SARADC_LT_INT_EN_LT_INT_EN9_MASK                   (0x1U << SARADC_LT_INT_EN_LT_INT_EN9_SHIFT)                  /* 0x00000200 */
#define SARADC_LT_INT_EN_LT_INT_EN10_SHIFT                 (10U)
#define SARADC_LT_INT_EN_LT_INT_EN10_MASK                  (0x1U << SARADC_LT_INT_EN_LT_INT_EN10_SHIFT)                 /* 0x00000400 */
#define SARADC_LT_INT_EN_LT_INT_EN11_SHIFT                 (11U)
#define SARADC_LT_INT_EN_LT_INT_EN11_MASK                  (0x1U << SARADC_LT_INT_EN_LT_INT_EN11_SHIFT)                 /* 0x00000800 */
#define SARADC_LT_INT_EN_LT_INT_EN12_SHIFT                 (12U)
#define SARADC_LT_INT_EN_LT_INT_EN12_MASK                  (0x1U << SARADC_LT_INT_EN_LT_INT_EN12_SHIFT)                 /* 0x00001000 */
#define SARADC_LT_INT_EN_LT_INT_EN13_SHIFT                 (13U)
#define SARADC_LT_INT_EN_LT_INT_EN13_MASK                  (0x1U << SARADC_LT_INT_EN_LT_INT_EN13_SHIFT)                 /* 0x00002000 */
#define SARADC_LT_INT_EN_LT_INT_EN14_SHIFT                 (14U)
#define SARADC_LT_INT_EN_LT_INT_EN14_MASK                  (0x1U << SARADC_LT_INT_EN_LT_INT_EN14_SHIFT)                 /* 0x00004000 */
#define SARADC_LT_INT_EN_LT_INT_EN15_SHIFT                 (15U)
#define SARADC_LT_INT_EN_LT_INT_EN15_MASK                  (0x1U << SARADC_LT_INT_EN_LT_INT_EN15_SHIFT)                 /* 0x00008000 */
/* MT_INT_EN */
#define SARADC_MT_INT_EN_OFFSET                            (0x100U)
#define SARADC_MT_INT_EN_MT_INT_EN0_SHIFT                  (0U)
#define SARADC_MT_INT_EN_MT_INT_EN0_MASK                   (0x1U << SARADC_MT_INT_EN_MT_INT_EN0_SHIFT)                  /* 0x00000001 */
#define SARADC_MT_INT_EN_MT_INT_EN1_SHIFT                  (1U)
#define SARADC_MT_INT_EN_MT_INT_EN1_MASK                   (0x1U << SARADC_MT_INT_EN_MT_INT_EN1_SHIFT)                  /* 0x00000002 */
#define SARADC_MT_INT_EN_MT_INT_EN2_SHIFT                  (2U)
#define SARADC_MT_INT_EN_MT_INT_EN2_MASK                   (0x1U << SARADC_MT_INT_EN_MT_INT_EN2_SHIFT)                  /* 0x00000004 */
#define SARADC_MT_INT_EN_MT_INT_EN3_SHIFT                  (3U)
#define SARADC_MT_INT_EN_MT_INT_EN3_MASK                   (0x1U << SARADC_MT_INT_EN_MT_INT_EN3_SHIFT)                  /* 0x00000008 */
#define SARADC_MT_INT_EN_MT_INT_EN4_SHIFT                  (4U)
#define SARADC_MT_INT_EN_MT_INT_EN4_MASK                   (0x1U << SARADC_MT_INT_EN_MT_INT_EN4_SHIFT)                  /* 0x00000010 */
#define SARADC_MT_INT_EN_MT_INT_EN5_SHIFT                  (5U)
#define SARADC_MT_INT_EN_MT_INT_EN5_MASK                   (0x1U << SARADC_MT_INT_EN_MT_INT_EN5_SHIFT)                  /* 0x00000020 */
#define SARADC_MT_INT_EN_MT_INT_EN6_SHIFT                  (6U)
#define SARADC_MT_INT_EN_MT_INT_EN6_MASK                   (0x1U << SARADC_MT_INT_EN_MT_INT_EN6_SHIFT)                  /* 0x00000040 */
#define SARADC_MT_INT_EN_MT_INT_EN7_SHIFT                  (7U)
#define SARADC_MT_INT_EN_MT_INT_EN7_MASK                   (0x1U << SARADC_MT_INT_EN_MT_INT_EN7_SHIFT)                  /* 0x00000080 */
#define SARADC_MT_INT_EN_MT_INT_EN8_SHIFT                  (8U)
#define SARADC_MT_INT_EN_MT_INT_EN8_MASK                   (0x1U << SARADC_MT_INT_EN_MT_INT_EN8_SHIFT)                  /* 0x00000100 */
#define SARADC_MT_INT_EN_MT_INT_EN9_SHIFT                  (9U)
#define SARADC_MT_INT_EN_MT_INT_EN9_MASK                   (0x1U << SARADC_MT_INT_EN_MT_INT_EN9_SHIFT)                  /* 0x00000200 */
#define SARADC_MT_INT_EN_MT_INT_EN10_SHIFT                 (10U)
#define SARADC_MT_INT_EN_MT_INT_EN10_MASK                  (0x1U << SARADC_MT_INT_EN_MT_INT_EN10_SHIFT)                 /* 0x00000400 */
#define SARADC_MT_INT_EN_MT_INT_EN11_SHIFT                 (11U)
#define SARADC_MT_INT_EN_MT_INT_EN11_MASK                  (0x1U << SARADC_MT_INT_EN_MT_INT_EN11_SHIFT)                 /* 0x00000800 */
#define SARADC_MT_INT_EN_MT_INT_EN12_SHIFT                 (12U)
#define SARADC_MT_INT_EN_MT_INT_EN12_MASK                  (0x1U << SARADC_MT_INT_EN_MT_INT_EN12_SHIFT)                 /* 0x00001000 */
#define SARADC_MT_INT_EN_MT_INT_EN13_SHIFT                 (13U)
#define SARADC_MT_INT_EN_MT_INT_EN13_MASK                  (0x1U << SARADC_MT_INT_EN_MT_INT_EN13_SHIFT)                 /* 0x00002000 */
#define SARADC_MT_INT_EN_MT_INT_EN14_SHIFT                 (14U)
#define SARADC_MT_INT_EN_MT_INT_EN14_MASK                  (0x1U << SARADC_MT_INT_EN_MT_INT_EN14_SHIFT)                 /* 0x00004000 */
#define SARADC_MT_INT_EN_MT_INT_EN15_SHIFT                 (15U)
#define SARADC_MT_INT_EN_MT_INT_EN15_MASK                  (0x1U << SARADC_MT_INT_EN_MT_INT_EN15_SHIFT)                 /* 0x00008000 */
/* END_INT_EN */
#define SARADC_END_INT_EN_OFFSET                           (0x104U)
#define SARADC_END_INT_EN_END_INT_EN_SHIFT                 (0U)
#define SARADC_END_INT_EN_END_INT_EN_MASK                  (0x1U << SARADC_END_INT_EN_END_INT_EN_SHIFT)                 /* 0x00000001 */
/* ST_CON */
#define SARADC_ST_CON_OFFSET                               (0x108U)
#define SARADC_ST_CON_CCTRL_SHIFT                          (0U)
#define SARADC_ST_CON_CCTRL_MASK                           (0x7U << SARADC_ST_CON_CCTRL_SHIFT)                          /* 0x00000007 */
#define SARADC_ST_CON_ICTRL_SHIFT                          (3U)
#define SARADC_ST_CON_ICTRL_MASK                           (0x7U << SARADC_ST_CON_ICTRL_SHIFT)                          /* 0x00000038 */
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
#define SARADC_HT_INT_ST_HT_INT_ST2_SHIFT                  (2U)
#define SARADC_HT_INT_ST_HT_INT_ST2_MASK                   (0x1U << SARADC_HT_INT_ST_HT_INT_ST2_SHIFT)                  /* 0x00000004 */
#define SARADC_HT_INT_ST_HT_INT_ST3_SHIFT                  (3U)
#define SARADC_HT_INT_ST_HT_INT_ST3_MASK                   (0x1U << SARADC_HT_INT_ST_HT_INT_ST3_SHIFT)                  /* 0x00000008 */
#define SARADC_HT_INT_ST_HT_INT_ST4_SHIFT                  (4U)
#define SARADC_HT_INT_ST_HT_INT_ST4_MASK                   (0x1U << SARADC_HT_INT_ST_HT_INT_ST4_SHIFT)                  /* 0x00000010 */
#define SARADC_HT_INT_ST_HT_INT_ST5_SHIFT                  (5U)
#define SARADC_HT_INT_ST_HT_INT_ST5_MASK                   (0x1U << SARADC_HT_INT_ST_HT_INT_ST5_SHIFT)                  /* 0x00000020 */
#define SARADC_HT_INT_ST_HT_INT_ST6_SHIFT                  (6U)
#define SARADC_HT_INT_ST_HT_INT_ST6_MASK                   (0x1U << SARADC_HT_INT_ST_HT_INT_ST6_SHIFT)                  /* 0x00000040 */
#define SARADC_HT_INT_ST_HT_INT_ST7_SHIFT                  (7U)
#define SARADC_HT_INT_ST_HT_INT_ST7_MASK                   (0x1U << SARADC_HT_INT_ST_HT_INT_ST7_SHIFT)                  /* 0x00000080 */
#define SARADC_HT_INT_ST_HT_INT_ST8_SHIFT                  (8U)
#define SARADC_HT_INT_ST_HT_INT_ST8_MASK                   (0x1U << SARADC_HT_INT_ST_HT_INT_ST8_SHIFT)                  /* 0x00000100 */
#define SARADC_HT_INT_ST_HT_INT_ST9_SHIFT                  (9U)
#define SARADC_HT_INT_ST_HT_INT_ST9_MASK                   (0x1U << SARADC_HT_INT_ST_HT_INT_ST9_SHIFT)                  /* 0x00000200 */
#define SARADC_HT_INT_ST_HT_INT_ST10_SHIFT                 (10U)
#define SARADC_HT_INT_ST_HT_INT_ST10_MASK                  (0x1U << SARADC_HT_INT_ST_HT_INT_ST10_SHIFT)                 /* 0x00000400 */
#define SARADC_HT_INT_ST_HT_INT_ST11_SHIFT                 (11U)
#define SARADC_HT_INT_ST_HT_INT_ST11_MASK                  (0x1U << SARADC_HT_INT_ST_HT_INT_ST11_SHIFT)                 /* 0x00000800 */
#define SARADC_HT_INT_ST_HT_INT_ST12_SHIFT                 (12U)
#define SARADC_HT_INT_ST_HT_INT_ST12_MASK                  (0x1U << SARADC_HT_INT_ST_HT_INT_ST12_SHIFT)                 /* 0x00001000 */
#define SARADC_HT_INT_ST_HT_INT_ST13_SHIFT                 (13U)
#define SARADC_HT_INT_ST_HT_INT_ST13_MASK                  (0x1U << SARADC_HT_INT_ST_HT_INT_ST13_SHIFT)                 /* 0x00002000 */
#define SARADC_HT_INT_ST_HT_INT_ST14_SHIFT                 (14U)
#define SARADC_HT_INT_ST_HT_INT_ST14_MASK                  (0x1U << SARADC_HT_INT_ST_HT_INT_ST14_SHIFT)                 /* 0x00004000 */
#define SARADC_HT_INT_ST_HT_INT_ST15_SHIFT                 (15U)
#define SARADC_HT_INT_ST_HT_INT_ST15_MASK                  (0x1U << SARADC_HT_INT_ST_HT_INT_ST15_SHIFT)                 /* 0x00008000 */
/* LT_INT_ST */
#define SARADC_LT_INT_ST_OFFSET                            (0x118U)
#define SARADC_LT_INT_ST_LT_INT_ST0_SHIFT                  (0U)
#define SARADC_LT_INT_ST_LT_INT_ST0_MASK                   (0x1U << SARADC_LT_INT_ST_LT_INT_ST0_SHIFT)                  /* 0x00000001 */
#define SARADC_LT_INT_ST_LT_INT_ST1_SHIFT                  (1U)
#define SARADC_LT_INT_ST_LT_INT_ST1_MASK                   (0x1U << SARADC_LT_INT_ST_LT_INT_ST1_SHIFT)                  /* 0x00000002 */
#define SARADC_LT_INT_ST_LT_INT_ST2_SHIFT                  (2U)
#define SARADC_LT_INT_ST_LT_INT_ST2_MASK                   (0x1U << SARADC_LT_INT_ST_LT_INT_ST2_SHIFT)                  /* 0x00000004 */
#define SARADC_LT_INT_ST_LT_INT_ST3_SHIFT                  (3U)
#define SARADC_LT_INT_ST_LT_INT_ST3_MASK                   (0x1U << SARADC_LT_INT_ST_LT_INT_ST3_SHIFT)                  /* 0x00000008 */
#define SARADC_LT_INT_ST_LT_INT_ST4_SHIFT                  (4U)
#define SARADC_LT_INT_ST_LT_INT_ST4_MASK                   (0x1U << SARADC_LT_INT_ST_LT_INT_ST4_SHIFT)                  /* 0x00000010 */
#define SARADC_LT_INT_ST_LT_INT_ST5_SHIFT                  (5U)
#define SARADC_LT_INT_ST_LT_INT_ST5_MASK                   (0x1U << SARADC_LT_INT_ST_LT_INT_ST5_SHIFT)                  /* 0x00000020 */
#define SARADC_LT_INT_ST_LT_INT_ST6_SHIFT                  (6U)
#define SARADC_LT_INT_ST_LT_INT_ST6_MASK                   (0x1U << SARADC_LT_INT_ST_LT_INT_ST6_SHIFT)                  /* 0x00000040 */
#define SARADC_LT_INT_ST_LT_INT_ST7_SHIFT                  (7U)
#define SARADC_LT_INT_ST_LT_INT_ST7_MASK                   (0x1U << SARADC_LT_INT_ST_LT_INT_ST7_SHIFT)                  /* 0x00000080 */
#define SARADC_LT_INT_ST_LT_INT_ST8_SHIFT                  (8U)
#define SARADC_LT_INT_ST_LT_INT_ST8_MASK                   (0x1U << SARADC_LT_INT_ST_LT_INT_ST8_SHIFT)                  /* 0x00000100 */
#define SARADC_LT_INT_ST_LT_INT_ST9_SHIFT                  (9U)
#define SARADC_LT_INT_ST_LT_INT_ST9_MASK                   (0x1U << SARADC_LT_INT_ST_LT_INT_ST9_SHIFT)                  /* 0x00000200 */
#define SARADC_LT_INT_ST_LT_INT_ST10_SHIFT                 (10U)
#define SARADC_LT_INT_ST_LT_INT_ST10_MASK                  (0x1U << SARADC_LT_INT_ST_LT_INT_ST10_SHIFT)                 /* 0x00000400 */
#define SARADC_LT_INT_ST_LT_INT_ST11_SHIFT                 (11U)
#define SARADC_LT_INT_ST_LT_INT_ST11_MASK                  (0x1U << SARADC_LT_INT_ST_LT_INT_ST11_SHIFT)                 /* 0x00000800 */
#define SARADC_LT_INT_ST_LT_INT_ST12_SHIFT                 (12U)
#define SARADC_LT_INT_ST_LT_INT_ST12_MASK                  (0x1U << SARADC_LT_INT_ST_LT_INT_ST12_SHIFT)                 /* 0x00001000 */
#define SARADC_LT_INT_ST_LT_INT_ST13_SHIFT                 (13U)
#define SARADC_LT_INT_ST_LT_INT_ST13_MASK                  (0x1U << SARADC_LT_INT_ST_LT_INT_ST13_SHIFT)                 /* 0x00002000 */
#define SARADC_LT_INT_ST_LT_INT_ST14_SHIFT                 (14U)
#define SARADC_LT_INT_ST_LT_INT_ST14_MASK                  (0x1U << SARADC_LT_INT_ST_LT_INT_ST14_SHIFT)                 /* 0x00004000 */
#define SARADC_LT_INT_ST_LT_INT_ST15_SHIFT                 (15U)
#define SARADC_LT_INT_ST_LT_INT_ST15_MASK                  (0x1U << SARADC_LT_INT_ST_LT_INT_ST15_SHIFT)                 /* 0x00008000 */
/* MT_INT_ST */
#define SARADC_MT_INT_ST_OFFSET                            (0x11CU)
#define SARADC_MT_INT_ST_MT_INT_ST0_SHIFT                  (0U)
#define SARADC_MT_INT_ST_MT_INT_ST0_MASK                   (0x1U << SARADC_MT_INT_ST_MT_INT_ST0_SHIFT)                  /* 0x00000001 */
#define SARADC_MT_INT_ST_MT_INT_ST1_SHIFT                  (1U)
#define SARADC_MT_INT_ST_MT_INT_ST1_MASK                   (0x1U << SARADC_MT_INT_ST_MT_INT_ST1_SHIFT)                  /* 0x00000002 */
#define SARADC_MT_INT_ST_MT_INT_ST2_SHIFT                  (2U)
#define SARADC_MT_INT_ST_MT_INT_ST2_MASK                   (0x1U << SARADC_MT_INT_ST_MT_INT_ST2_SHIFT)                  /* 0x00000004 */
#define SARADC_MT_INT_ST_MT_INT_ST3_SHIFT                  (3U)
#define SARADC_MT_INT_ST_MT_INT_ST3_MASK                   (0x1U << SARADC_MT_INT_ST_MT_INT_ST3_SHIFT)                  /* 0x00000008 */
#define SARADC_MT_INT_ST_MT_INT_ST4_SHIFT                  (4U)
#define SARADC_MT_INT_ST_MT_INT_ST4_MASK                   (0x1U << SARADC_MT_INT_ST_MT_INT_ST4_SHIFT)                  /* 0x00000010 */
#define SARADC_MT_INT_ST_MT_INT_ST5_SHIFT                  (5U)
#define SARADC_MT_INT_ST_MT_INT_ST5_MASK                   (0x1U << SARADC_MT_INT_ST_MT_INT_ST5_SHIFT)                  /* 0x00000020 */
#define SARADC_MT_INT_ST_MT_INT_ST6_SHIFT                  (6U)
#define SARADC_MT_INT_ST_MT_INT_ST6_MASK                   (0x1U << SARADC_MT_INT_ST_MT_INT_ST6_SHIFT)                  /* 0x00000040 */
#define SARADC_MT_INT_ST_MT_INT_ST7_SHIFT                  (7U)
#define SARADC_MT_INT_ST_MT_INT_ST7_MASK                   (0x1U << SARADC_MT_INT_ST_MT_INT_ST7_SHIFT)                  /* 0x00000080 */
#define SARADC_MT_INT_ST_MT_INT_ST8_SHIFT                  (8U)
#define SARADC_MT_INT_ST_MT_INT_ST8_MASK                   (0x1U << SARADC_MT_INT_ST_MT_INT_ST8_SHIFT)                  /* 0x00000100 */
#define SARADC_MT_INT_ST_MT_INT_ST9_SHIFT                  (9U)
#define SARADC_MT_INT_ST_MT_INT_ST9_MASK                   (0x1U << SARADC_MT_INT_ST_MT_INT_ST9_SHIFT)                  /* 0x00000200 */
#define SARADC_MT_INT_ST_MT_INT_ST10_SHIFT                 (10U)
#define SARADC_MT_INT_ST_MT_INT_ST10_MASK                  (0x1U << SARADC_MT_INT_ST_MT_INT_ST10_SHIFT)                 /* 0x00000400 */
#define SARADC_MT_INT_ST_MT_INT_ST11_SHIFT                 (11U)
#define SARADC_MT_INT_ST_MT_INT_ST11_MASK                  (0x1U << SARADC_MT_INT_ST_MT_INT_ST11_SHIFT)                 /* 0x00000800 */
#define SARADC_MT_INT_ST_MT_INT_ST12_SHIFT                 (12U)
#define SARADC_MT_INT_ST_MT_INT_ST12_MASK                  (0x1U << SARADC_MT_INT_ST_MT_INT_ST12_SHIFT)                 /* 0x00001000 */
#define SARADC_MT_INT_ST_MT_INT_ST13_SHIFT                 (13U)
#define SARADC_MT_INT_ST_MT_INT_ST13_MASK                  (0x1U << SARADC_MT_INT_ST_MT_INT_ST13_SHIFT)                 /* 0x00002000 */
#define SARADC_MT_INT_ST_MT_INT_ST14_SHIFT                 (14U)
#define SARADC_MT_INT_ST_MT_INT_ST14_MASK                  (0x1U << SARADC_MT_INT_ST_MT_INT_ST14_SHIFT)                 /* 0x00004000 */
#define SARADC_MT_INT_ST_MT_INT_ST15_SHIFT                 (15U)
#define SARADC_MT_INT_ST_MT_INT_ST15_MASK                  (0x1U << SARADC_MT_INT_ST_MT_INT_ST15_SHIFT)                 /* 0x00008000 */
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
/* DATA2 */
#define SARADC_DATA2_OFFSET                                (0x128U)
#define SARADC_DATA2                                       (0x0U)
#define SARADC_DATA2_DATA2_SHIFT                           (0U)
#define SARADC_DATA2_DATA2_MASK                            (0xFFFU << SARADC_DATA2_DATA2_SHIFT)                         /* 0x00000FFF */
/* DATA3 */
#define SARADC_DATA3_OFFSET                                (0x12CU)
#define SARADC_DATA3                                       (0x0U)
#define SARADC_DATA3_DATA3_SHIFT                           (0U)
#define SARADC_DATA3_DATA3_MASK                            (0xFFFU << SARADC_DATA3_DATA3_SHIFT)                         /* 0x00000FFF */
/* DATA4 */
#define SARADC_DATA4_OFFSET                                (0x130U)
#define SARADC_DATA4                                       (0x0U)
#define SARADC_DATA4_DATA4_SHIFT                           (0U)
#define SARADC_DATA4_DATA4_MASK                            (0xFFFU << SARADC_DATA4_DATA4_SHIFT)                         /* 0x00000FFF */
/* DATA5 */
#define SARADC_DATA5_OFFSET                                (0x134U)
#define SARADC_DATA5                                       (0x0U)
#define SARADC_DATA5_DATA5_SHIFT                           (0U)
#define SARADC_DATA5_DATA5_MASK                            (0xFFFU << SARADC_DATA5_DATA5_SHIFT)                         /* 0x00000FFF */
/* DATA6 */
#define SARADC_DATA6_OFFSET                                (0x138U)
#define SARADC_DATA6                                       (0x0U)
#define SARADC_DATA6_DATA6_SHIFT                           (0U)
#define SARADC_DATA6_DATA6_MASK                            (0xFFFU << SARADC_DATA6_DATA6_SHIFT)                         /* 0x00000FFF */
/* DATA7 */
#define SARADC_DATA7_OFFSET                                (0x13CU)
#define SARADC_DATA7                                       (0x0U)
#define SARADC_DATA7_DATA7_SHIFT                           (0U)
#define SARADC_DATA7_DATA7_MASK                            (0xFFFU << SARADC_DATA7_DATA7_SHIFT)                         /* 0x00000FFF */
/* DATA8 */
#define SARADC_DATA8_OFFSET                                (0x140U)
#define SARADC_DATA8                                       (0x0U)
#define SARADC_DATA8_DATA8_SHIFT                           (0U)
#define SARADC_DATA8_DATA8_MASK                            (0xFFFU << SARADC_DATA8_DATA8_SHIFT)                         /* 0x00000FFF */
/* DATA9 */
#define SARADC_DATA9_OFFSET                                (0x144U)
#define SARADC_DATA9                                       (0x0U)
#define SARADC_DATA9_DATA9_SHIFT                           (0U)
#define SARADC_DATA9_DATA9_MASK                            (0xFFFU << SARADC_DATA9_DATA9_SHIFT)                         /* 0x00000FFF */
/* DATA10 */
#define SARADC_DATA10_OFFSET                               (0x148U)
#define SARADC_DATA10                                      (0x0U)
#define SARADC_DATA10_DATA10_SHIFT                         (0U)
#define SARADC_DATA10_DATA10_MASK                          (0xFFFU << SARADC_DATA10_DATA10_SHIFT)                       /* 0x00000FFF */
/* DATA11 */
#define SARADC_DATA11_OFFSET                               (0x14CU)
#define SARADC_DATA11                                      (0x0U)
#define SARADC_DATA11_DATA11_SHIFT                         (0U)
#define SARADC_DATA11_DATA11_MASK                          (0xFFFU << SARADC_DATA11_DATA11_SHIFT)                       /* 0x00000FFF */
/* DATA12 */
#define SARADC_DATA12_OFFSET                               (0x150U)
#define SARADC_DATA12                                      (0x0U)
#define SARADC_DATA12_DATA12_SHIFT                         (0U)
#define SARADC_DATA12_DATA12_MASK                          (0xFFFU << SARADC_DATA12_DATA12_SHIFT)                       /* 0x00000FFF */
/* DATA13 */
#define SARADC_DATA13_OFFSET                               (0x154U)
#define SARADC_DATA13                                      (0x0U)
#define SARADC_DATA13_DATA13_SHIFT                         (0U)
#define SARADC_DATA13_DATA13_MASK                          (0xFFFU << SARADC_DATA13_DATA13_SHIFT)                       /* 0x00000FFF */
/* DATA14 */
#define SARADC_DATA14_OFFSET                               (0x158U)
#define SARADC_DATA14                                      (0x0U)
#define SARADC_DATA14_DATA14_SHIFT                         (0U)
#define SARADC_DATA14_DATA14_MASK                          (0xFFFU << SARADC_DATA14_DATA14_SHIFT)                       /* 0x00000FFF */
/* DATA15 */
#define SARADC_DATA15_OFFSET                               (0x15CU)
#define SARADC_DATA15                                      (0x0U)
#define SARADC_DATA15_DATA15_SHIFT                         (0U)
#define SARADC_DATA15_DATA15_MASK                          (0xFFFU << SARADC_DATA15_DATA15_SHIFT)                       /* 0x00000FFF */
/* AUTO_CH_EN */
#define SARADC_AUTO_CH_EN_OFFSET                           (0x160U)
#define SARADC_AUTO_CH_EN_AUTO_CH0_EN_SHIFT                (0U)
#define SARADC_AUTO_CH_EN_AUTO_CH0_EN_MASK                 (0x1U << SARADC_AUTO_CH_EN_AUTO_CH0_EN_SHIFT)                /* 0x00000001 */
#define SARADC_AUTO_CH_EN_AUTO_CH1_EN_SHIFT                (1U)
#define SARADC_AUTO_CH_EN_AUTO_CH1_EN_MASK                 (0x1U << SARADC_AUTO_CH_EN_AUTO_CH1_EN_SHIFT)                /* 0x00000002 */
#define SARADC_AUTO_CH_EN_AUTO_CH2_EN_SHIFT                (2U)
#define SARADC_AUTO_CH_EN_AUTO_CH2_EN_MASK                 (0x1U << SARADC_AUTO_CH_EN_AUTO_CH2_EN_SHIFT)                /* 0x00000004 */
#define SARADC_AUTO_CH_EN_AUTO_CH3_EN_SHIFT                (3U)
#define SARADC_AUTO_CH_EN_AUTO_CH3_EN_MASK                 (0x1U << SARADC_AUTO_CH_EN_AUTO_CH3_EN_SHIFT)                /* 0x00000008 */
#define SARADC_AUTO_CH_EN_AUTO_CH4_EN_SHIFT                (4U)
#define SARADC_AUTO_CH_EN_AUTO_CH4_EN_MASK                 (0x1U << SARADC_AUTO_CH_EN_AUTO_CH4_EN_SHIFT)                /* 0x00000010 */
#define SARADC_AUTO_CH_EN_AUTO_CH5_EN_SHIFT                (5U)
#define SARADC_AUTO_CH_EN_AUTO_CH5_EN_MASK                 (0x1U << SARADC_AUTO_CH_EN_AUTO_CH5_EN_SHIFT)                /* 0x00000020 */
#define SARADC_AUTO_CH_EN_AUTO_CH6_EN_SHIFT                (6U)
#define SARADC_AUTO_CH_EN_AUTO_CH6_EN_MASK                 (0x1U << SARADC_AUTO_CH_EN_AUTO_CH6_EN_SHIFT)                /* 0x00000040 */
#define SARADC_AUTO_CH_EN_AUTO_CH7_EN_SHIFT                (7U)
#define SARADC_AUTO_CH_EN_AUTO_CH7_EN_MASK                 (0x1U << SARADC_AUTO_CH_EN_AUTO_CH7_EN_SHIFT)                /* 0x00000080 */
#define SARADC_AUTO_CH_EN_AUTO_CH8_EN_SHIFT                (8U)
#define SARADC_AUTO_CH_EN_AUTO_CH8_EN_MASK                 (0x1U << SARADC_AUTO_CH_EN_AUTO_CH8_EN_SHIFT)                /* 0x00000100 */
#define SARADC_AUTO_CH_EN_AUTO_CH9_EN_SHIFT                (9U)
#define SARADC_AUTO_CH_EN_AUTO_CH9_EN_MASK                 (0x1U << SARADC_AUTO_CH_EN_AUTO_CH9_EN_SHIFT)                /* 0x00000200 */
#define SARADC_AUTO_CH_EN_AUTO_CH10_EN_SHIFT               (10U)
#define SARADC_AUTO_CH_EN_AUTO_CH10_EN_MASK                (0x1U << SARADC_AUTO_CH_EN_AUTO_CH10_EN_SHIFT)               /* 0x00000400 */
#define SARADC_AUTO_CH_EN_AUTO_CH11_EN_SHIFT               (11U)
#define SARADC_AUTO_CH_EN_AUTO_CH11_EN_MASK                (0x1U << SARADC_AUTO_CH_EN_AUTO_CH11_EN_SHIFT)               /* 0x00000800 */
#define SARADC_AUTO_CH_EN_AUTO_CH12_EN_SHIFT               (12U)
#define SARADC_AUTO_CH_EN_AUTO_CH12_EN_MASK                (0x1U << SARADC_AUTO_CH_EN_AUTO_CH12_EN_SHIFT)               /* 0x00001000 */
#define SARADC_AUTO_CH_EN_AUTO_CH13_EN_SHIFT               (13U)
#define SARADC_AUTO_CH_EN_AUTO_CH13_EN_MASK                (0x1U << SARADC_AUTO_CH_EN_AUTO_CH13_EN_SHIFT)               /* 0x00002000 */
#define SARADC_AUTO_CH_EN_AUTO_CH14_EN_SHIFT               (14U)
#define SARADC_AUTO_CH_EN_AUTO_CH14_EN_MASK                (0x1U << SARADC_AUTO_CH_EN_AUTO_CH14_EN_SHIFT)               /* 0x00004000 */
#define SARADC_AUTO_CH_EN_AUTO_CH15_EN_SHIFT               (15U)
#define SARADC_AUTO_CH_EN_AUTO_CH15_EN_MASK                (0x1U << SARADC_AUTO_CH_EN_AUTO_CH15_EN_SHIFT)               /* 0x00008000 */
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
#define DCACHE_CACHE_CTRL_STB_ENTRY_THRESH_SHIFT           (8U)
#define DCACHE_CACHE_CTRL_STB_ENTRY_THRESH_MASK            (0x7U << DCACHE_CACHE_CTRL_STB_ENTRY_THRESH_SHIFT)           /* 0x00000700 */
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
#define DCACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_MASK         (0x7FFFFFFU << DCACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_SHIFT)  /* 0x07FFFFFF */
/* STB_TIMEOUT_CTRL */
#define DCACHE_STB_TIMEOUT_CTRL_OFFSET                     (0xCU)
#define DCACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_SHIFT    (0U)
#define DCACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_MASK     (0xFFFFFFFFU << DCACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_SHIFT) /* 0xFFFFFFFF */
/* RAM_DEBUG */
#define DCACHE_RAM_DEBUG_OFFSET                            (0x10U)
#define DCACHE_RAM_DEBUG_RAM_DEBUG_EN_SHIFT                (0U)
#define DCACHE_RAM_DEBUG_RAM_DEBUG_EN_MASK                 (0x1U << DCACHE_RAM_DEBUG_RAM_DEBUG_EN_SHIFT)                /* 0x00000001 */
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
#define DCACHE_PMU_SRAM_RD_HIT_CNT_PMU_RAM_RD_HIT_CNT_SHIFT (0U)
#define DCACHE_PMU_SRAM_RD_HIT_CNT_PMU_RAM_RD_HIT_CNT_MASK (0xFFFFFFFFU << DCACHE_PMU_SRAM_RD_HIT_CNT_PMU_RAM_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
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
#define DCACHE_PMU_WR_LAT_CNT_PMU_WR_LAT_CNT_SHIFT         (0U)
#define DCACHE_PMU_WR_LAT_CNT_PMU_WR_LAT_CNT_MASK          (0xFFFFFFFFU << DCACHE_PMU_WR_LAT_CNT_PMU_WR_LAT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* REVISION */
#define DCACHE_REVISION_OFFSET                             (0xF0U)
#define DCACHE_REVISION                                    (0x100U)
#define DCACHE_REVISION_REVISION_SHIFT                     (0U)
#define DCACHE_REVISION_REVISION_MASK                      (0xFFFFFFFFU << DCACHE_REVISION_REVISION_SHIFT)              /* 0xFFFFFFFF */
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
#define ICACHE_CACHE_CTRL_STB_ENTRY_THRESH_SHIFT           (8U)
#define ICACHE_CACHE_CTRL_STB_ENTRY_THRESH_MASK            (0x7U << ICACHE_CACHE_CTRL_STB_ENTRY_THRESH_SHIFT)           /* 0x00000700 */
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
#define ICACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_MASK         (0x7FFFFFFU << ICACHE_CACHE_MAINTAIN1_CACHE_M_OFFSET_SHIFT)  /* 0x07FFFFFF */
/* STB_TIMEOUT_CTRL */
#define ICACHE_STB_TIMEOUT_CTRL_OFFSET                     (0xCU)
#define ICACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_SHIFT    (0U)
#define ICACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_MASK     (0xFFFFFFFFU << ICACHE_STB_TIMEOUT_CTRL_STB_TIMEOUT_VALUE_SHIFT) /* 0xFFFFFFFF */
/* RAM_DEBUG */
#define ICACHE_RAM_DEBUG_OFFSET                            (0x10U)
#define ICACHE_RAM_DEBUG_RAM_DEBUG_EN_SHIFT                (0U)
#define ICACHE_RAM_DEBUG_RAM_DEBUG_EN_MASK                 (0x1U << ICACHE_RAM_DEBUG_RAM_DEBUG_EN_SHIFT)                /* 0x00000001 */
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
#define ICACHE_PMU_SRAM_RD_HIT_CNT_PMU_RAM_RD_HIT_CNT_SHIFT (0U)
#define ICACHE_PMU_SRAM_RD_HIT_CNT_PMU_RAM_RD_HIT_CNT_MASK (0xFFFFFFFFU << ICACHE_PMU_SRAM_RD_HIT_CNT_PMU_RAM_RD_HIT_CNT_SHIFT) /* 0xFFFFFFFF */
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
#define ICACHE_PMU_WR_LAT_CNT_PMU_WR_LAT_CNT_SHIFT         (0U)
#define ICACHE_PMU_WR_LAT_CNT_PMU_WR_LAT_CNT_MASK          (0xFFFFFFFFU << ICACHE_PMU_WR_LAT_CNT_PMU_WR_LAT_CNT_SHIFT)  /* 0xFFFFFFFF */
/* REVISION */
#define ICACHE_REVISION_OFFSET                             (0xF0U)
#define ICACHE_REVISION                                    (0x100U)
#define ICACHE_REVISION_REVISION_SHIFT                     (0U)
#define ICACHE_REVISION_REVISION_MASK                      (0xFFFFFFFFU << ICACHE_REVISION_REVISION_SHIFT)              /* 0xFFFFFFFF */
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
/*****************************************INTMUX*****************************************/
/* INT_ENABLE_GROUP0 */
#define INTMUX_INT_ENABLE_GROUP0_OFFSET                    (0x0U)
#define INTMUX_INT_ENABLE_GROUP0_ENABLE_SHIFT              (0U)
#define INTMUX_INT_ENABLE_GROUP0_ENABLE_MASK               (0xFFU << INTMUX_INT_ENABLE_GROUP0_ENABLE_SHIFT)             /* 0x000000FF */
/* INT_ENABLE_GROUP1 */
#define INTMUX_INT_ENABLE_GROUP1_OFFSET                    (0x4U)
#define INTMUX_INT_ENABLE_GROUP1_ENABLE_SHIFT              (0U)
#define INTMUX_INT_ENABLE_GROUP1_ENABLE_MASK               (0xFFU << INTMUX_INT_ENABLE_GROUP1_ENABLE_SHIFT)             /* 0x000000FF */
/* INT_ENABLE_GROUP2 */
#define INTMUX_INT_ENABLE_GROUP2_OFFSET                    (0x8U)
#define INTMUX_INT_ENABLE_GROUP2_ENABLE_SHIFT              (0U)
#define INTMUX_INT_ENABLE_GROUP2_ENABLE_MASK               (0xFFU << INTMUX_INT_ENABLE_GROUP2_ENABLE_SHIFT)             /* 0x000000FF */
/* INT_ENABLE_GROUP3 */
#define INTMUX_INT_ENABLE_GROUP3_OFFSET                    (0xCU)
#define INTMUX_INT_ENABLE_GROUP3_ENABLE_SHIFT              (0U)
#define INTMUX_INT_ENABLE_GROUP3_ENABLE_MASK               (0xFFU << INTMUX_INT_ENABLE_GROUP3_ENABLE_SHIFT)             /* 0x000000FF */
/* INT_ENABLE_GROUP4 */
#define INTMUX_INT_ENABLE_GROUP4_OFFSET                    (0x10U)
#define INTMUX_INT_ENABLE_GROUP4_ENABLE_SHIFT              (0U)
#define INTMUX_INT_ENABLE_GROUP4_ENABLE_MASK               (0xFFU << INTMUX_INT_ENABLE_GROUP4_ENABLE_SHIFT)             /* 0x000000FF */
/* INT_ENABLE_GROUP5 */
#define INTMUX_INT_ENABLE_GROUP5_OFFSET                    (0x14U)
#define INTMUX_INT_ENABLE_GROUP5_ENABLE_SHIFT              (0U)
#define INTMUX_INT_ENABLE_GROUP5_ENABLE_MASK               (0xFFU << INTMUX_INT_ENABLE_GROUP5_ENABLE_SHIFT)             /* 0x000000FF */
/* INT_ENABLE_GROUP6 */
#define INTMUX_INT_ENABLE_GROUP6_OFFSET                    (0x18U)
#define INTMUX_INT_ENABLE_GROUP6_ENABLE_SHIFT              (0U)
#define INTMUX_INT_ENABLE_GROUP6_ENABLE_MASK               (0xFFU << INTMUX_INT_ENABLE_GROUP6_ENABLE_SHIFT)             /* 0x000000FF */
/* INT_ENABLE_GROUP7 */
#define INTMUX_INT_ENABLE_GROUP7_OFFSET                    (0x1CU)
#define INTMUX_INT_ENABLE_GROUP7_ENABLE_SHIFT              (0U)
#define INTMUX_INT_ENABLE_GROUP7_ENABLE_MASK               (0xFFU << INTMUX_INT_ENABLE_GROUP7_ENABLE_SHIFT)             /* 0x000000FF */
/* INT_ENABLE_GROUP8 */
#define INTMUX_INT_ENABLE_GROUP8_OFFSET                    (0x20U)
#define INTMUX_INT_ENABLE_GROUP8_ENABLE_SHIFT              (0U)
#define INTMUX_INT_ENABLE_GROUP8_ENABLE_MASK               (0xFFU << INTMUX_INT_ENABLE_GROUP8_ENABLE_SHIFT)             /* 0x000000FF */
/* INT_ENABLE_GROUP9 */
#define INTMUX_INT_ENABLE_GROUP9_OFFSET                    (0x24U)
#define INTMUX_INT_ENABLE_GROUP9_ENABLE_SHIFT              (0U)
#define INTMUX_INT_ENABLE_GROUP9_ENABLE_MASK               (0xFFU << INTMUX_INT_ENABLE_GROUP9_ENABLE_SHIFT)             /* 0x000000FF */
/* INT_ENABLE_GROUP10 */
#define INTMUX_INT_ENABLE_GROUP10_OFFSET                   (0x28U)
#define INTMUX_INT_ENABLE_GROUP10_ENABLE_SHIFT             (0U)
#define INTMUX_INT_ENABLE_GROUP10_ENABLE_MASK              (0xFFU << INTMUX_INT_ENABLE_GROUP10_ENABLE_SHIFT)            /* 0x000000FF */
/* INT_ENABLE_GROUP11 */
#define INTMUX_INT_ENABLE_GROUP11_OFFSET                   (0x2CU)
#define INTMUX_INT_ENABLE_GROUP11_ENABLE_SHIFT             (0U)
#define INTMUX_INT_ENABLE_GROUP11_ENABLE_MASK              (0xFFU << INTMUX_INT_ENABLE_GROUP11_ENABLE_SHIFT)            /* 0x000000FF */
/* INT_ENABLE_GROUP12 */
#define INTMUX_INT_ENABLE_GROUP12_OFFSET                   (0x30U)
#define INTMUX_INT_ENABLE_GROUP12_ENABLE_SHIFT             (0U)
#define INTMUX_INT_ENABLE_GROUP12_ENABLE_MASK              (0xFFU << INTMUX_INT_ENABLE_GROUP12_ENABLE_SHIFT)            /* 0x000000FF */
/* INT_ENABLE_GROUP13 */
#define INTMUX_INT_ENABLE_GROUP13_OFFSET                   (0x34U)
#define INTMUX_INT_ENABLE_GROUP13_ENABLE_SHIFT             (0U)
#define INTMUX_INT_ENABLE_GROUP13_ENABLE_MASK              (0xFFU << INTMUX_INT_ENABLE_GROUP13_ENABLE_SHIFT)            /* 0x000000FF */
/* INT_ENABLE_GROUP14 */
#define INTMUX_INT_ENABLE_GROUP14_OFFSET                   (0x38U)
#define INTMUX_INT_ENABLE_GROUP14_ENABLE_SHIFT             (0U)
#define INTMUX_INT_ENABLE_GROUP14_ENABLE_MASK              (0xFFU << INTMUX_INT_ENABLE_GROUP14_ENABLE_SHIFT)            /* 0x000000FF */
/* INT_ENABLE_GROUP15 */
#define INTMUX_INT_ENABLE_GROUP15_OFFSET                   (0x3CU)
#define INTMUX_INT_ENABLE_GROUP15_ENABLE_SHIFT             (0U)
#define INTMUX_INT_ENABLE_GROUP15_ENABLE_MASK              (0xFFU << INTMUX_INT_ENABLE_GROUP15_ENABLE_SHIFT)            /* 0x000000FF */
/* INT_ENABLE_GROUP16 */
#define INTMUX_INT_ENABLE_GROUP16_OFFSET                   (0x40U)
#define INTMUX_INT_ENABLE_GROUP16_ENABLE_SHIFT             (0U)
#define INTMUX_INT_ENABLE_GROUP16_ENABLE_MASK              (0xFFU << INTMUX_INT_ENABLE_GROUP16_ENABLE_SHIFT)            /* 0x000000FF */
/* INT_ENABLE_GROUP17 */
#define INTMUX_INT_ENABLE_GROUP17_OFFSET                   (0x44U)
#define INTMUX_INT_ENABLE_GROUP17_ENABLE_SHIFT             (0U)
#define INTMUX_INT_ENABLE_GROUP17_ENABLE_MASK              (0xFFU << INTMUX_INT_ENABLE_GROUP17_ENABLE_SHIFT)            /* 0x000000FF */
/* INT_ENABLE_GROUP18 */
#define INTMUX_INT_ENABLE_GROUP18_OFFSET                   (0x48U)
#define INTMUX_INT_ENABLE_GROUP18_ENABLE_SHIFT             (0U)
#define INTMUX_INT_ENABLE_GROUP18_ENABLE_MASK              (0xFFU << INTMUX_INT_ENABLE_GROUP18_ENABLE_SHIFT)            /* 0x000000FF */
/* INT_ENABLE_GROUP19 */
#define INTMUX_INT_ENABLE_GROUP19_OFFSET                   (0x4CU)
#define INTMUX_INT_ENABLE_GROUP19_ENABLE_SHIFT             (0U)
#define INTMUX_INT_ENABLE_GROUP19_ENABLE_MASK              (0xFFU << INTMUX_INT_ENABLE_GROUP19_ENABLE_SHIFT)            /* 0x000000FF */
/* INT_ENABLE_GROUP20 */
#define INTMUX_INT_ENABLE_GROUP20_OFFSET                   (0x50U)
#define INTMUX_INT_ENABLE_GROUP20_ENABLE_SHIFT             (0U)
#define INTMUX_INT_ENABLE_GROUP20_ENABLE_MASK              (0xFFU << INTMUX_INT_ENABLE_GROUP20_ENABLE_SHIFT)            /* 0x000000FF */
/* INT_ENABLE_GROUP21 */
#define INTMUX_INT_ENABLE_GROUP21_OFFSET                   (0x54U)
/* INT_ENABLE_GROUP22 */
#define INTMUX_INT_ENABLE_GROUP22_OFFSET                   (0x58U)
#define INTMUX_INT_ENABLE_GROUP22_ENABLE_SHIFT             (0U)
#define INTMUX_INT_ENABLE_GROUP22_ENABLE_MASK              (0xFFU << INTMUX_INT_ENABLE_GROUP22_ENABLE_SHIFT)            /* 0x000000FF */
/* INT_ENABLE_GROUP23 */
#define INTMUX_INT_ENABLE_GROUP23_OFFSET                   (0x5CU)
#define INTMUX_INT_ENABLE_GROUP23_ENABLE_SHIFT             (0U)
#define INTMUX_INT_ENABLE_GROUP23_ENABLE_MASK              (0xFFU << INTMUX_INT_ENABLE_GROUP23_ENABLE_SHIFT)            /* 0x000000FF */
/* INT_ENABLE_GROUP24 */
#define INTMUX_INT_ENABLE_GROUP24_OFFSET                   (0x60U)
#define INTMUX_INT_ENABLE_GROUP24_ENABLE_SHIFT             (0U)
#define INTMUX_INT_ENABLE_GROUP24_ENABLE_MASK              (0xFFU << INTMUX_INT_ENABLE_GROUP24_ENABLE_SHIFT)            /* 0x000000FF */
/* INT_ENABLE_GROUP25 */
#define INTMUX_INT_ENABLE_GROUP25_OFFSET                   (0x64U)
#define INTMUX_INT_ENABLE_GROUP25_ENABLE_SHIFT             (0U)
#define INTMUX_INT_ENABLE_GROUP25_ENABLE_MASK              (0xFFU << INTMUX_INT_ENABLE_GROUP25_ENABLE_SHIFT)            /* 0x000000FF */
/* INT_ENABLE_GROUP26 */
#define INTMUX_INT_ENABLE_GROUP26_OFFSET                   (0x68U)
#define INTMUX_INT_ENABLE_GROUP26_ENABLE_SHIFT             (0U)
#define INTMUX_INT_ENABLE_GROUP26_ENABLE_MASK              (0xFFU << INTMUX_INT_ENABLE_GROUP26_ENABLE_SHIFT)            /* 0x000000FF */
/* INT_ENABLE_GROUP27 */
#define INTMUX_INT_ENABLE_GROUP27_OFFSET                   (0x6CU)
#define INTMUX_INT_ENABLE_GROUP27_ENABLE_SHIFT             (0U)
#define INTMUX_INT_ENABLE_GROUP27_ENABLE_MASK              (0xFFU << INTMUX_INT_ENABLE_GROUP27_ENABLE_SHIFT)            /* 0x000000FF */
/* INT_ENABLE_GROUP28 */
#define INTMUX_INT_ENABLE_GROUP28_OFFSET                   (0x70U)
#define INTMUX_INT_ENABLE_GROUP28_ENABLE_SHIFT             (0U)
#define INTMUX_INT_ENABLE_GROUP28_ENABLE_MASK              (0xFFU << INTMUX_INT_ENABLE_GROUP28_ENABLE_SHIFT)            /* 0x000000FF */
/* INT_ENABLE_GROUP29 */
#define INTMUX_INT_ENABLE_GROUP29_OFFSET                   (0x74U)
#define INTMUX_INT_ENABLE_GROUP29_ENABLE_SHIFT             (0U)
#define INTMUX_INT_ENABLE_GROUP29_ENABLE_MASK              (0xFFU << INTMUX_INT_ENABLE_GROUP29_ENABLE_SHIFT)            /* 0x000000FF */
/* INT_ENABLE_GROUP30 */
#define INTMUX_INT_ENABLE_GROUP30_OFFSET                   (0x78U)
#define INTMUX_INT_ENABLE_GROUP30_ENABLE_SHIFT             (0U)
#define INTMUX_INT_ENABLE_GROUP30_ENABLE_MASK              (0xFFU << INTMUX_INT_ENABLE_GROUP30_ENABLE_SHIFT)            /* 0x000000FF */
/* INT_ENABLE_GROUP31 */
#define INTMUX_INT_ENABLE_GROUP31_OFFSET                   (0x7CU)
#define INTMUX_INT_ENABLE_GROUP31_ENABLE_SHIFT             (0U)
#define INTMUX_INT_ENABLE_GROUP31_ENABLE_MASK              (0xFFU << INTMUX_INT_ENABLE_GROUP31_ENABLE_SHIFT)            /* 0x000000FF */
/* INT_FLAG_GROUP0 */
#define INTMUX_INT_FLAG_GROUP0_OFFSET                      (0x80U)
#define INTMUX_INT_FLAG_GROUP0                             (0x0U)
#define INTMUX_INT_FLAG_GROUP0_FLAG_SHIFT                  (0U)
#define INTMUX_INT_FLAG_GROUP0_FLAG_MASK                   (0xFFU << INTMUX_INT_FLAG_GROUP0_FLAG_SHIFT)                 /* 0x000000FF */
/* INT_FLAG_GROUP1 */
#define INTMUX_INT_FLAG_GROUP1_OFFSET                      (0x84U)
#define INTMUX_INT_FLAG_GROUP1                             (0x0U)
#define INTMUX_INT_FLAG_GROUP1_FLAG_SHIFT                  (0U)
#define INTMUX_INT_FLAG_GROUP1_FLAG_MASK                   (0xFFU << INTMUX_INT_FLAG_GROUP1_FLAG_SHIFT)                 /* 0x000000FF */
/* INT_FLAG_GROUP2 */
#define INTMUX_INT_FLAG_GROUP2_OFFSET                      (0x88U)
#define INTMUX_INT_FLAG_GROUP2                             (0x0U)
#define INTMUX_INT_FLAG_GROUP2_FLAG_SHIFT                  (0U)
#define INTMUX_INT_FLAG_GROUP2_FLAG_MASK                   (0xFFU << INTMUX_INT_FLAG_GROUP2_FLAG_SHIFT)                 /* 0x000000FF */
/* INT_FLAG_GROUP3 */
#define INTMUX_INT_FLAG_GROUP3_OFFSET                      (0x8CU)
#define INTMUX_INT_FLAG_GROUP3                             (0x0U)
#define INTMUX_INT_FLAG_GROUP3_FLAG_SHIFT                  (0U)
#define INTMUX_INT_FLAG_GROUP3_FLAG_MASK                   (0xFFU << INTMUX_INT_FLAG_GROUP3_FLAG_SHIFT)                 /* 0x000000FF */
/* INT_FLAG_GROUP4 */
#define INTMUX_INT_FLAG_GROUP4_OFFSET                      (0x90U)
#define INTMUX_INT_FLAG_GROUP4                             (0x0U)
#define INTMUX_INT_FLAG_GROUP4_FLAG_SHIFT                  (0U)
#define INTMUX_INT_FLAG_GROUP4_FLAG_MASK                   (0xFFU << INTMUX_INT_FLAG_GROUP4_FLAG_SHIFT)                 /* 0x000000FF */
/* INT_FLAG_GROUP5 */
#define INTMUX_INT_FLAG_GROUP5_OFFSET                      (0x94U)
#define INTMUX_INT_FLAG_GROUP5                             (0x0U)
#define INTMUX_INT_FLAG_GROUP5_FLAG_SHIFT                  (0U)
#define INTMUX_INT_FLAG_GROUP5_FLAG_MASK                   (0xFFU << INTMUX_INT_FLAG_GROUP5_FLAG_SHIFT)                 /* 0x000000FF */
/* INT_FLAG_GROUP6 */
#define INTMUX_INT_FLAG_GROUP6_OFFSET                      (0x98U)
#define INTMUX_INT_FLAG_GROUP6                             (0x0U)
#define INTMUX_INT_FLAG_GROUP6_FLAG_SHIFT                  (0U)
#define INTMUX_INT_FLAG_GROUP6_FLAG_MASK                   (0xFFU << INTMUX_INT_FLAG_GROUP6_FLAG_SHIFT)                 /* 0x000000FF */
/* INT_FLAG_GROUP7 */
#define INTMUX_INT_FLAG_GROUP7_OFFSET                      (0x9CU)
#define INTMUX_INT_FLAG_GROUP7                             (0x0U)
#define INTMUX_INT_FLAG_GROUP7_FLAG_SHIFT                  (0U)
#define INTMUX_INT_FLAG_GROUP7_FLAG_MASK                   (0xFFU << INTMUX_INT_FLAG_GROUP7_FLAG_SHIFT)                 /* 0x000000FF */
/* INT_FLAG_GROUP8 */
#define INTMUX_INT_FLAG_GROUP8_OFFSET                      (0xA0U)
#define INTMUX_INT_FLAG_GROUP8                             (0x0U)
#define INTMUX_INT_FLAG_GROUP8_FLAG_SHIFT                  (0U)
#define INTMUX_INT_FLAG_GROUP8_FLAG_MASK                   (0xFFU << INTMUX_INT_FLAG_GROUP8_FLAG_SHIFT)                 /* 0x000000FF */
/* INT_FLAG_GROUP9 */
#define INTMUX_INT_FLAG_GROUP9_OFFSET                      (0xA4U)
#define INTMUX_INT_FLAG_GROUP9                             (0x0U)
#define INTMUX_INT_FLAG_GROUP9_FLAG_SHIFT                  (0U)
#define INTMUX_INT_FLAG_GROUP9_FLAG_MASK                   (0xFFU << INTMUX_INT_FLAG_GROUP9_FLAG_SHIFT)                 /* 0x000000FF */
/* INT_FLAG_GROUP10 */
#define INTMUX_INT_FLAG_GROUP10_OFFSET                     (0xA8U)
#define INTMUX_INT_FLAG_GROUP10                            (0x0U)
#define INTMUX_INT_FLAG_GROUP10_FLAG_SHIFT                 (0U)
#define INTMUX_INT_FLAG_GROUP10_FLAG_MASK                  (0xFFU << INTMUX_INT_FLAG_GROUP10_FLAG_SHIFT)                /* 0x000000FF */
/* INT_FLAG_GROUP11 */
#define INTMUX_INT_FLAG_GROUP11_OFFSET                     (0xACU)
#define INTMUX_INT_FLAG_GROUP11                            (0x0U)
#define INTMUX_INT_FLAG_GROUP11_FLAG_SHIFT                 (0U)
#define INTMUX_INT_FLAG_GROUP11_FLAG_MASK                  (0xFFU << INTMUX_INT_FLAG_GROUP11_FLAG_SHIFT)                /* 0x000000FF */
/* INT_FLAG_GROUP12 */
#define INTMUX_INT_FLAG_GROUP12_OFFSET                     (0xB0U)
#define INTMUX_INT_FLAG_GROUP12                            (0x0U)
#define INTMUX_INT_FLAG_GROUP12_FLAG_SHIFT                 (0U)
#define INTMUX_INT_FLAG_GROUP12_FLAG_MASK                  (0xFFU << INTMUX_INT_FLAG_GROUP12_FLAG_SHIFT)                /* 0x000000FF */
/* INT_FLAG_GROUP13 */
#define INTMUX_INT_FLAG_GROUP13_OFFSET                     (0xB4U)
#define INTMUX_INT_FLAG_GROUP13                            (0x0U)
#define INTMUX_INT_FLAG_GROUP13_FLAG_SHIFT                 (0U)
#define INTMUX_INT_FLAG_GROUP13_FLAG_MASK                  (0xFFU << INTMUX_INT_FLAG_GROUP13_FLAG_SHIFT)                /* 0x000000FF */
/* INT_FLAG_GROUP14 */
#define INTMUX_INT_FLAG_GROUP14_OFFSET                     (0xB8U)
#define INTMUX_INT_FLAG_GROUP14                            (0x0U)
#define INTMUX_INT_FLAG_GROUP14_FLAG_SHIFT                 (0U)
#define INTMUX_INT_FLAG_GROUP14_FLAG_MASK                  (0xFFU << INTMUX_INT_FLAG_GROUP14_FLAG_SHIFT)                /* 0x000000FF */
/* INT_FLAG_GROUP15 */
#define INTMUX_INT_FLAG_GROUP15_OFFSET                     (0xBCU)
#define INTMUX_INT_FLAG_GROUP15                            (0x0U)
#define INTMUX_INT_FLAG_GROUP15_FLAG_SHIFT                 (0U)
#define INTMUX_INT_FLAG_GROUP15_FLAG_MASK                  (0xFFU << INTMUX_INT_FLAG_GROUP15_FLAG_SHIFT)                /* 0x000000FF */
/* INT_FLAG_GROUP16 */
#define INTMUX_INT_FLAG_GROUP16_OFFSET                     (0xC0U)
#define INTMUX_INT_FLAG_GROUP16_FLAG_SHIFT                 (0U)
#define INTMUX_INT_FLAG_GROUP16_FLAG_MASK                  (0xFFU << INTMUX_INT_FLAG_GROUP16_FLAG_SHIFT)                /* 0x000000FF */
/* INT_FLAG_GROUP17 */
#define INTMUX_INT_FLAG_GROUP17_OFFSET                     (0xC4U)
#define INTMUX_INT_FLAG_GROUP17_FLAG_SHIFT                 (0U)
#define INTMUX_INT_FLAG_GROUP17_FLAG_MASK                  (0xFFU << INTMUX_INT_FLAG_GROUP17_FLAG_SHIFT)                /* 0x000000FF */
/* INT_FLAG_GROUP18 */
#define INTMUX_INT_FLAG_GROUP18_OFFSET                     (0xC8U)
#define INTMUX_INT_FLAG_GROUP18_FLAG_SHIFT                 (0U)
#define INTMUX_INT_FLAG_GROUP18_FLAG_MASK                  (0xFFU << INTMUX_INT_FLAG_GROUP18_FLAG_SHIFT)                /* 0x000000FF */
/* INT_FLAG_GROUP19 */
#define INTMUX_INT_FLAG_GROUP19_OFFSET                     (0xCCU)
#define INTMUX_INT_FLAG_GROUP19_FLAG_SHIFT                 (0U)
#define INTMUX_INT_FLAG_GROUP19_FLAG_MASK                  (0xFFU << INTMUX_INT_FLAG_GROUP19_FLAG_SHIFT)                /* 0x000000FF */
/* INT_FLAG_GROUP20 */
#define INTMUX_INT_FLAG_GROUP20_OFFSET                     (0xD0U)
#define INTMUX_INT_FLAG_GROUP20_FLAG_SHIFT                 (0U)
#define INTMUX_INT_FLAG_GROUP20_FLAG_MASK                  (0xFFU << INTMUX_INT_FLAG_GROUP20_FLAG_SHIFT)                /* 0x000000FF */
/* INT_FLAG_GROUP21 */
#define INTMUX_INT_FLAG_GROUP21_OFFSET                     (0xD4U)
#define INTMUX_INT_FLAG_GROUP21_FLAG_SHIFT                 (0U)
#define INTMUX_INT_FLAG_GROUP21_FLAG_MASK                  (0xFFU << INTMUX_INT_FLAG_GROUP21_FLAG_SHIFT)                /* 0x000000FF */
/* INT_FLAG_GROUP22 */
#define INTMUX_INT_FLAG_GROUP22_OFFSET                     (0xD8U)
#define INTMUX_INT_FLAG_GROUP22_FLAG_SHIFT                 (0U)
#define INTMUX_INT_FLAG_GROUP22_FLAG_MASK                  (0xFFU << INTMUX_INT_FLAG_GROUP22_FLAG_SHIFT)                /* 0x000000FF */
/* INT_FLAG_GROUP23 */
#define INTMUX_INT_FLAG_GROUP23_OFFSET                     (0xDCU)
#define INTMUX_INT_FLAG_GROUP23_FLAG_SHIFT                 (0U)
#define INTMUX_INT_FLAG_GROUP23_FLAG_MASK                  (0xFFU << INTMUX_INT_FLAG_GROUP23_FLAG_SHIFT)                /* 0x000000FF */
/* INT_FLAG_GROUP24 */
#define INTMUX_INT_FLAG_GROUP24_OFFSET                     (0xE0U)
#define INTMUX_INT_FLAG_GROUP24_FLAG_SHIFT                 (0U)
#define INTMUX_INT_FLAG_GROUP24_FLAG_MASK                  (0xFFU << INTMUX_INT_FLAG_GROUP24_FLAG_SHIFT)                /* 0x000000FF */
/* INT_FLAG_GROUP25 */
#define INTMUX_INT_FLAG_GROUP25_OFFSET                     (0xE4U)
#define INTMUX_INT_FLAG_GROUP25_FLAG_SHIFT                 (0U)
#define INTMUX_INT_FLAG_GROUP25_FLAG_MASK                  (0xFFU << INTMUX_INT_FLAG_GROUP25_FLAG_SHIFT)                /* 0x000000FF */
/* INT_FLAG_GROUP26 */
#define INTMUX_INT_FLAG_GROUP26_OFFSET                     (0xE8U)
#define INTMUX_INT_FLAG_GROUP26_FLAG_SHIFT                 (0U)
#define INTMUX_INT_FLAG_GROUP26_FLAG_MASK                  (0xFFU << INTMUX_INT_FLAG_GROUP26_FLAG_SHIFT)                /* 0x000000FF */
/* INT_FLAG_GROUP27 */
#define INTMUX_INT_FLAG_GROUP27_OFFSET                     (0xECU)
#define INTMUX_INT_FLAG_GROUP27_FLAG_SHIFT                 (0U)
#define INTMUX_INT_FLAG_GROUP27_FLAG_MASK                  (0xFFU << INTMUX_INT_FLAG_GROUP27_FLAG_SHIFT)                /* 0x000000FF */
/* INT_FLAG_GROUP28 */
#define INTMUX_INT_FLAG_GROUP28_OFFSET                     (0xF0U)
#define INTMUX_INT_FLAG_GROUP28_FLAG_SHIFT                 (0U)
#define INTMUX_INT_FLAG_GROUP28_FLAG_MASK                  (0xFFU << INTMUX_INT_FLAG_GROUP28_FLAG_SHIFT)                /* 0x000000FF */
/* INT_FLAG_GROUP29 */
#define INTMUX_INT_FLAG_GROUP29_OFFSET                     (0xF4U)
#define INTMUX_INT_FLAG_GROUP29_FLAG_SHIFT                 (0U)
#define INTMUX_INT_FLAG_GROUP29_FLAG_MASK                  (0xFFU << INTMUX_INT_FLAG_GROUP29_FLAG_SHIFT)                /* 0x000000FF */
/* INT_FLAG_GROUP30 */
#define INTMUX_INT_FLAG_GROUP30_OFFSET                     (0xF8U)
#define INTMUX_INT_FLAG_GROUP30_FLAG_SHIFT                 (0U)
#define INTMUX_INT_FLAG_GROUP30_FLAG_MASK                  (0xFFU << INTMUX_INT_FLAG_GROUP30_FLAG_SHIFT)                /* 0x000000FF */
/* INT_FLAG_GROUP31 */
#define INTMUX_INT_FLAG_GROUP31_OFFSET                     (0xFCU)
#define INTMUX_INT_FLAG_GROUP31_FLAG_SHIFT                 (0U)
#define INTMUX_INT_FLAG_GROUP31_FLAG_MASK                  (0xFFU << INTMUX_INT_FLAG_GROUP31_FLAG_SHIFT)                /* 0x000000FF */
#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* __RK3562_H */
