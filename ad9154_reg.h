#ifndef __AD9154_REG_H
#define __AD9154_REG_H

#define AD9154_SPI_INTFCONFA                    0x000
/* default: 0x00, access: R/W */
#define AD9154_SOFTRESET_SET(x)                 (((x) & 0x1) << 0)
#define AD9154_SOFTRESET_GET(x)                 (((x) >> 0) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_LSBFIRST_SET(x)                  (((x) & 0x1) << 1)
#define AD9154_LSBFIRST_GET(x)                  (((x) >> 1) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_ADDRINC_SET(x)                   (((x) & 0x1) << 2)
#define AD9154_ADDRINC_GET(x)                   (((x) >> 2) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_SDOACTIVE_SET(x)                 (((x) & 0x1) << 3)
#define AD9154_SDOACTIVE_GET(x)                 (((x) >> 3) & 0x1)
/* default: 0x00, access: R */
#define AD9154_SDOACTIVE_M_GET(x)               (((x) >> 4) & 0x1)
/* default: 0x00, access: R */
#define AD9154_ADDRINC_M_GET(x)                 (((x) >> 5) & 0x1)
/* default: 0x00, access: R */
#define AD9154_LSBFIRST_M_GET(x)                (((x) >> 6) & 0x1)
/* default: 0x00, access: R */
#define AD9154_SOFTRESET_M_GET(x)               (((x) >> 7) & 0x1)

#define AD9154_CHIPTYPE                         0x003

#define AD9154_PRODIDL                          0x004

#define AD9154_PRODIDH                          0x005

#define AD9154_CHIPGRADE                        0x006
/* default: 0x02, access: R */
#define AD9154_DEV_REVISION_GET(x)              (((x) >> 0) & 0xf)
/* default: 0x00, access: R */
#define AD9154_PROD_GRADE_GET(x)                (((x) >> 4) & 0xf)

#define AD9154_SPI_PAGEINDX                     0x008

#define AD9154_PWRCNTRL0                        0x011
/* default: 0x01, access: R/W */
#define AD9154_PD_DAC3_SET(x)                   (((x) & 0x1) << 3)
#define AD9154_PD_DAC3_GET(x)                   (((x) >> 3) & 0x1)
/* default: 0x01, access: R/W */
#define AD9154_PD_DAC2_SET(x)                   (((x) & 0x1) << 4)
#define AD9154_PD_DAC2_GET(x)                   (((x) >> 4) & 0x1)
/* default: 0x01, access: R/W */
#define AD9154_PD_DAC1_SET(x)                   (((x) & 0x1) << 5)
#define AD9154_PD_DAC1_GET(x)                   (((x) >> 5) & 0x1)
/* default: 0x01, access: R/W */
#define AD9154_PD_DAC0_SET(x)                   (((x) & 0x1) << 6)
#define AD9154_PD_DAC0_GET(x)                   (((x) >> 6) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_PD_BG_SET(x)                     (((x) & 0x1) << 7)
#define AD9154_PD_BG_GET(x)                     (((x) >> 7) & 0x1)

#define AD9154_TXENMASK1                        0x012
/* default: 0x00, access: R/W */
#define AD9154_DACA_MASK_SET(x)                 (((x) & 0x1) << 6)
#define AD9154_DACA_MASK_GET(x)                 (((x) >> 6) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_DACB_MASK_SET(x)                 (((x) & 0x1) << 7)
#define AD9154_DACB_MASK_GET(x)                 (((x) >> 7) & 0x1)

#define AD9154_PWRCNTRL3                        0x013
/* default: 0x00, access: R/W */
#define AD9154_SPI_TXEN_SET(x)                  (((x) & 0x1) << 0)
#define AD9154_SPI_TXEN_GET(x)                  (((x) >> 0) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_ENA_SPI_TXEN_SET(x)              (((x) & 0x1) << 1)
#define AD9154_ENA_SPI_TXEN_GET(x)              (((x) >> 1) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_SPI_PA_CTRL_SET(x)               (((x) & 0x1) << 2)
#define AD9154_SPI_PA_CTRL_GET(x)               (((x) >> 2) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_ENA_PA_CTRL_FROM_SPI_SET(x)      (((x) & 0x1) << 3)
#define AD9154_ENA_PA_CTRL_FROM_SPI_GET(x)      (((x) >> 3) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_ENA_PA_CTRL_FROM_BLSM_SET(x)     (((x) & 0x1) << 4)
#define AD9154_ENA_PA_CTRL_FROM_BLSM_GET(x)     (((x) >> 4) & 0x1)
/* default: 0x01, access: R/W */
#define AD9154_ENA_PA_CTRL_FROM_TXENSM_SET(x)   (((x) & 0x1) << 5)
#define AD9154_ENA_PA_CTRL_FROM_TXENSM_GET(x)   (((x) >> 5) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_ENA_PA_CTRL_FROM_PARROT_ERR_SET(x) (((x) & 0x1) << 6)
#define AD9154_ENA_PA_CTRL_FROM_PARROT_ERR_GET(x) (((x) >> 6) & 0x1)

#define AD9154_GROUP_DLY                        0x014
/* default: 0x08, access: R/W */
#define AD9154_COARSE_GROUP_DELAY_SET(x)        (((x) & 0xf) << 0)
#define AD9154_COARSE_GROUP_DELAY_GET(x)        (((x) >> 0) & 0xf)
/* default: 0x08, access: R/W */
#define AD9154_GROUP_DELAY_RESERVED_SET(x)      (((x) & 0xf) << 4)
#define AD9154_GROUP_DELAY_RESERVED_GET(x)      (((x) >> 4) & 0xf)

#define AD9154_IRQEN_STATUSMODE0                0x01f
/* default: 0x00, access: R/W */
#define AD9154_IRQEN_SMODE_LANEFIFOERR_SET(x)   (((x) & 0x1) << 1)
#define AD9154_IRQEN_SMODE_LANEFIFOERR_GET(x)   (((x) >> 1) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_IRQEN_SMODE_SERPLLLOCK_SET(x)    (((x) & 0x1) << 2)
#define AD9154_IRQEN_SMODE_SERPLLLOCK_GET(x)    (((x) >> 2) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_IRQEN_SMODE_SERPLLLOST_SET(x)    (((x) & 0x1) << 3)
#define AD9154_IRQEN_SMODE_SERPLLLOST_GET(x)    (((x) >> 3) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_IRQEN_SMODE_DACPLLLOCK_SET(x)    (((x) & 0x1) << 4)
#define AD9154_IRQEN_SMODE_DACPLLLOCK_GET(x)    (((x) >> 4) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_IRQEN_SMODE_DACPLLLOST_SET(x)    (((x) & 0x1) << 5)
#define AD9154_IRQEN_SMODE_DACPLLLOST_GET(x)    (((x) >> 5) & 0x1)

#define AD9154_IRQEN_STATUSMODE1                0x020
/* default: 0x00, access: R/W */
#define AD9154_IRQEN_SMODE_PRBS0_SET(x)         (((x) & 0x1) << 0)
#define AD9154_IRQEN_SMODE_PRBS0_GET(x)         (((x) >> 0) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_IRQEN_SMODE_PRBS1_SET(x)         (((x) & 0x1) << 1)
#define AD9154_IRQEN_SMODE_PRBS1_GET(x)         (((x) >> 1) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_IRQEN_SMODE_PRBS2_SET(x)         (((x) & 0x1) << 2)
#define AD9154_IRQEN_SMODE_PRBS2_GET(x)         (((x) >> 2) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_IRQEN_SMODE_PRBS3_SET(x)         (((x) & 0x1) << 3)
#define AD9154_IRQEN_SMODE_PRBS3_GET(x)         (((x) >> 3) & 0x1)

#define AD9154_IRQEN_STATUSMODE2                0x021
/* default: 0x00, access: R/W */
#define AD9154_IRQEN_SMODE_SYNC_TRIP0_SET(x)    (((x) & 0x1) << 0)
#define AD9154_IRQEN_SMODE_SYNC_TRIP0_GET(x)    (((x) >> 0) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_IRQEN_SMODE_SYNC_WLIM0_SET(x)    (((x) & 0x1) << 1)
#define AD9154_IRQEN_SMODE_SYNC_WLIM0_GET(x)    (((x) >> 1) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_IRQEN_SMODE_SYNC_ROTATE0_SET(x)  (((x) & 0x1) << 2)
#define AD9154_IRQEN_SMODE_SYNC_ROTATE0_GET(x)  (((x) >> 2) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_IRQEN_SMODE_SYNC_LOCK0_SET(x)    (((x) & 0x1) << 3)
#define AD9154_IRQEN_SMODE_SYNC_LOCK0_GET(x)    (((x) >> 3) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_IRQEN_SMODE_NCO_ALIGN0_SET(x)    (((x) & 0x1) << 4)
#define AD9154_IRQEN_SMODE_NCO_ALIGN0_GET(x)    (((x) >> 4) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_IRQEN_SMODE_BLNKDONE0_SET(x)     (((x) & 0x1) << 5)
#define AD9154_IRQEN_SMODE_BLNKDONE0_GET(x)     (((x) >> 5) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_IRQEN_SMODE_PDPERR0_SET(x)       (((x) & 0x1) << 7)
#define AD9154_IRQEN_SMODE_PDPERR0_GET(x)       (((x) >> 7) & 0x1)

#define AD9154_IRQEN_STATUSMODE3                0x022
/* default: 0x00, access: R/W */
#define AD9154_IRQEN_SMODE_SYNC_TRIP1_SET(x)    (((x) & 0x1) << 0)
#define AD9154_IRQEN_SMODE_SYNC_TRIP1_GET(x)    (((x) >> 0) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_IRQEN_SMODE_SYNC_WLIM1_SET(x)    (((x) & 0x1) << 1)
#define AD9154_IRQEN_SMODE_SYNC_WLIM1_GET(x)    (((x) >> 1) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_IRQEN_SMODE_SYNC_ROTATE1_SET(x)  (((x) & 0x1) << 2)
#define AD9154_IRQEN_SMODE_SYNC_ROTATE1_GET(x)  (((x) >> 2) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_IRQEN_SMODE_SYNC_LOCK1_SET(x)    (((x) & 0x1) << 3)
#define AD9154_IRQEN_SMODE_SYNC_LOCK1_GET(x)    (((x) >> 3) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_IRQEN_SMODE_NCO_ALIGN1_SET(x)    (((x) & 0x1) << 4)
#define AD9154_IRQEN_SMODE_NCO_ALIGN1_GET(x)    (((x) >> 4) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_IRQEN_SMODE_BLNKDONE1_SET(x)     (((x) & 0x1) << 5)
#define AD9154_IRQEN_SMODE_BLNKDONE1_GET(x)     (((x) >> 5) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_IRQEN_SMODE_PDPERR1_SET(x)       (((x) & 0x1) << 7)
#define AD9154_IRQEN_SMODE_PDPERR1_GET(x)       (((x) >> 7) & 0x1)

#define AD9154_IRQ_STATUS0                      0x023
/* default: 0x00, access: R */
#define AD9154_LANEFIFOERR_GET(x)               (((x) >> 1) & 0x1)
/* default: 0x00, access: R */
#define AD9154_SERPLLLOCK_GET(x)                (((x) >> 2) & 0x1)
/* default: 0x00, access: R */
#define AD9154_SERPLLLOST_GET(x)                (((x) >> 3) & 0x1)
/* default: 0x00, access: R */
#define AD9154_DACPLLLOCK_GET(x)                (((x) >> 4) & 0x1)
/* default: 0x00, access: R */
#define AD9154_DACPLLLOST_GET(x)                (((x) >> 5) & 0x1)

#define AD9154_IRQ_STATUS1                      0x024
/* default: 0x00, access: R */
#define AD9154_PRBS0_GET(x)                     (((x) >> 0) & 0x1)
/* default: 0x00, access: R */
#define AD9154_PRBS1_GET(x)                     (((x) >> 1) & 0x1)
/* default: 0x00, access: R */
#define AD9154_PRBS2_GET(x)                     (((x) >> 2) & 0x1)
/* default: 0x00, access: R */
#define AD9154_PRBS3_GET(x)                     (((x) >> 3) & 0x1)

#define AD9154_IRQ_STATUS2                      0x025
/* default: 0x00, access: R */
#define AD9154_SYNC_TRIP0_GET(x)                (((x) >> 0) & 0x1)
/* default: 0x00, access: R */
#define AD9154_SYNC_WLIM0_GET(x)                (((x) >> 1) & 0x1)
/* default: 0x00, access: R */
#define AD9154_SYNC_ROTATE0_GET(x)              (((x) >> 2) & 0x1)
/* default: 0x00, access: R */
#define AD9154_SYNC_LOCK0_GET(x)                (((x) >> 3) & 0x1)
/* default: 0x00, access: R */
#define AD9154_NCO_ALIGN0_GET(x)                (((x) >> 4) & 0x1)
/* default: 0x00, access: R */
#define AD9154_BLNKDONE0_GET(x)                 (((x) >> 5) & 0x1)
/* default: 0x00, access: R */
#define AD9154_PDPERR0_GET(x)                   (((x) >> 7) & 0x1)

#define AD9154_IRQ_STATUS3                      0x026
/* default: 0x00, access: R */
#define AD9154_SYNC_TRIP1_GET(x)                (((x) >> 0) & 0x1)
/* default: 0x00, access: R */
#define AD9154_SYNC_WLIM1_GET(x)                (((x) >> 1) & 0x1)
/* default: 0x00, access: R */
#define AD9154_SYNC_ROTATE1_GET(x)              (((x) >> 2) & 0x1)
/* default: 0x00, access: R */
#define AD9154_SYNC_LOCK1_GET(x)                (((x) >> 3) & 0x1)
/* default: 0x00, access: R */
#define AD9154_NCO_ALIGN1_GET(x)                (((x) >> 4) & 0x1)
/* default: 0x00, access: R */
#define AD9154_BLNKDONE1_GET(x)                 (((x) >> 5) & 0x1)
/* default: 0x00, access: R */
#define AD9154_PDPERR1_GET(x)                   (((x) >> 7) & 0x1)

#define AD9154_JESD_CHECKS                      0x030
/* default: 0x00, access: R */
#define AD9154_ERR_INTSUPP_GET(x)               (((x) >> 0) & 0x1)
/* default: 0x00, access: R */
#define AD9154_ERR_SUBCLASS_GET(x)              (((x) >> 1) & 0x1)
/* default: 0x00, access: R */
#define AD9154_ERR_KUNSUPP_GET(x)               (((x) >> 2) & 0x1)
/* default: 0x00, access: R */
#define AD9154_ERR_JESDBAD_GET(x)               (((x) >> 3) & 0x1)
/* default: 0x00, access: R */
#define AD9154_ERR_WINLIMIT_GET(x)              (((x) >> 4) & 0x1)
/* default: 0x00, access: R */
#define AD9154_ERR_DLYOVER_GET(x)               (((x) >> 5) & 0x1)

#define AD9154_SYNC_ERRWINDOW                   0x034

#define AD9154_SYNC_LASTERR_L                   0x038

#define AD9154_SYNC_LASTERR_H                   0x039
/* default: 0x00, access: R */
#define AD9154_LASTERROR_H_GET(x)               (((x) >> 0) & 0x1)
/* default: 0x00, access: R */
#define AD9154_LASTOVER_GET(x)                  (((x) >> 6) & 0x1)
/* default: 0x00, access: R */
#define AD9154_LASTUNDER_GET(x)                 (((x) >> 7) & 0x1)

#define AD9154_SYNC_CONTROL                     0x03a
/* default: 0x00, access: R/W */
#define AD9154_SYNCMODE_SET(x)                  (((x) & 0xf) << 0)
#define AD9154_SYNCMODE_GET(x)                  (((x) >> 0) & 0xf)
/* default: 0x00, access: R/W */
#define AD9154_SYNCCLRLAST_SET(x)               (((x) & 0x1) << 4)
#define AD9154_SYNCCLRLAST_GET(x)               (((x) >> 4) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_SYNCCLRSTKY_SET(x)               (((x) & 0x1) << 5)
#define AD9154_SYNCCLRSTKY_GET(x)               (((x) >> 5) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_SYNCARM_SET(x)                   (((x) & 0x1) << 6)
#define AD9154_SYNCARM_GET(x)                   (((x) >> 6) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_SYNCENABLE_SET(x)                (((x) & 0x1) << 7)
#define AD9154_SYNCENABLE_GET(x)                (((x) >> 7) & 0x1)

#define AD9154_SYNC_STATUS                      0x03b
/* default: 0x00, access: R */
#define AD9154_SYNC_TRIP_GET(x)                 (((x) >> 0) & 0x1)
/* default: 0x00, access: R */
#define AD9154_SYNC_WLIM_GET(x)                 (((x) >> 1) & 0x1)
/* default: 0x00, access: R */
#define AD9154_SYNC_ROTATE_GET(x)               (((x) >> 2) & 0x1)
/* default: 0x00, access: R */
#define AD9154_SYNC_LOCK_GET(x)                 (((x) >> 3) & 0x1)
/* default: 0x00, access: R */
#define AD9154_SYNC_BUSY_GET(x)                 (((x) >> 7) & 0x1)

#define AD9154_SYNC_CURRERR_L                   0x03c

#define AD9154_SYNC_CURRERR_H                   0x03d
/* default: 0x00, access: R */
#define AD9154_CURRERROR_H_GET(x)               (((x) >> 0) & 0x1)
/* default: 0x00, access: R */
#define AD9154_CURROVER_GET(x)                  (((x) >> 6) & 0x1)
/* default: 0x00, access: R */
#define AD9154_CURRUNDER_GET(x)                 (((x) >> 7) & 0x1)

#define AD9154_DACGAIN0_I                       0x040

#define AD9154_DACGAIN1_I                       0x041

#define AD9154_DACGAIN0_Q                       0x042

#define AD9154_DACGAIN1_Q                       0x043

#define AD9154_GROUPDELAY_COMP_I                0x044

#define AD9154_GROUPDELAY_COMP_Q                0x045

#define AD9154_GROUPDELAY_COMP_BYP              0x046
/* default: 0x01, access: R/W */
#define AD9154_GROUPCOMP_BYPQ_SET(x)            (((x) & 0x1) << 0)
#define AD9154_GROUPCOMP_BYPQ_GET(x)            (((x) >> 0) & 0x1)
/* default: 0x01, access: R/W */
#define AD9154_GROUPCOMP_BYPI_SET(x)            (((x) & 0x1) << 1)
#define AD9154_GROUPCOMP_BYPI_GET(x)            (((x) >> 1) & 0x1)

#define AD9154_MIX_MODE                         0x047

#define AD9154_NCOALIGN_MODE                    0x050
/* default: 0x00, access: R/W */
#define AD9154_NCO_ALIGN_MODE_SET(x)            (((x) & 0x3) << 0)
#define AD9154_NCO_ALIGN_MODE_GET(x)            (((x) >> 0) & 0x3)
/* default: 0x00, access: R */
#define AD9154_NCO_ALIGN_FAIL_GET(x)            (((x) >> 3) & 0x1)
/* default: 0x00, access: R */
#define AD9154_NCO_ALIGN_PASS_GET(x)            (((x) >> 4) & 0x1)
/* default: 0x00, access: R */
#define AD9154_NCO_ALIGN_MTCH_GET(x)            (((x) >> 5) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_NCO_ALIGN_ARM_SET(x)             (((x) & 0x1) << 7)
#define AD9154_NCO_ALIGN_ARM_GET(x)             (((x) >> 7) & 0x1)

#define AD9154_NCOKEY_ILSB                      0x051

#define AD9154_NCOKEY_IMSB                      0x052

#define AD9154_NCOKEY_QLSB                      0x053

#define AD9154_NCOKEY_QMSB                      0x054

#define AD9154_PDP_THRES0                       0x060

#define AD9154_PDP_THRES1                       0x061

#define AD9154_PDP_AVG_TIME                     0x062
/* default: 0x00, access: R/W */
#define AD9154_PDP_AVG_TIME__SET(x)             (((x) & 0xf) << 0)
#define AD9154_PDP_AVG_TIME__GET(x)             (((x) >> 0) & 0xf)
/* default: 0x00, access: R/W */
#define AD9154_PA_BUS_SWAP_SET(x)               (((x) & 0x1) << 6)
#define AD9154_PA_BUS_SWAP_GET(x)               (((x) >> 6) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_PDP_ENABLE_SET(x)                (((x) & 0x1) << 7)
#define AD9154_PDP_ENABLE_GET(x)                (((x) >> 7) & 0x1)

#define AD9154_PDP_POWER0                       0x063

#define AD9154_PDP_POWER1                       0x064

#define AD9154_CLKCFG0                          0x080
/* default: 0x00, access: R/W */
#define AD9154_REF_CLKDIV_EN_SET(x)             (((x) & 0x1) << 0)
#define AD9154_REF_CLKDIV_EN_GET(x)             (((x) >> 0) & 0x1)
/* default: 0x01, access: R/W */
#define AD9154_RF_SYNC_EN_SET(x)                (((x) & 0x1) << 1)
#define AD9154_RF_SYNC_EN_GET(x)                (((x) >> 1) & 0x1)
/* default: 0x01, access: R/W */
#define AD9154_DUTY_EN_SET(x)                   (((x) & 0x1) << 2)
#define AD9154_DUTY_EN_GET(x)                   (((x) >> 2) & 0x1)
/* default: 0x01, access: R/W */
#define AD9154_PD_CLK_REC_SET(x)                (((x) & 0x1) << 3)
#define AD9154_PD_CLK_REC_GET(x)                (((x) >> 3) & 0x1)
/* default: 0x01, access: R/W */
#define AD9154_PD_SERDES_PCLK_SET(x)            (((x) & 0x1) << 4)
#define AD9154_PD_SERDES_PCLK_GET(x)            (((x) >> 4) & 0x1)
/* default: 0x01, access: R/W */
#define AD9154_PD_CLK_DIG_SET(x)                (((x) & 0x1) << 5)
#define AD9154_PD_CLK_DIG_GET(x)                (((x) >> 5) & 0x1)
/* default: 0x01, access: R/W */
#define AD9154_PD_CLK23_SET(x)                  (((x) & 0x1) << 6)
#define AD9154_PD_CLK23_GET(x)                  (((x) >> 6) & 0x1)
/* default: 0x01, access: R/W */
#define AD9154_PD_CLK01_SET(x)                  (((x) & 0x1) << 7)
#define AD9154_PD_CLK01_GET(x)                  (((x) >> 7) & 0x1)

#define AD9154_SYSREF_ACTRL0                    0x081
/* default: 0x00, access: R/W */
#define AD9154_HYS_CNTRL1_SET(x)                (((x) & 0x3) << 0)
#define AD9154_HYS_CNTRL1_GET(x)                (((x) >> 0) & 0x3)
/* default: 0x00, access: R/W */
#define AD9154_SYSREF_RISE_SET(x)               (((x) & 0x1) << 2)
#define AD9154_SYSREF_RISE_GET(x)               (((x) >> 2) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_HYS_ON_SET(x)                    (((x) & 0x1) << 3)
#define AD9154_HYS_ON_GET(x)                    (((x) >> 3) & 0x1)
/* default: 0x01, access: R/W */
#define AD9154_PD_SYSREF_BUFFER_SET(x)          (((x) & 0x1) << 4)
#define AD9154_PD_SYSREF_BUFFER_GET(x)          (((x) >> 4) & 0x1)

#define AD9154_SYSREF_ACTRL1                    0x082

#define AD9154_DACPLLCNTRL                      0x083
/* default: 0x00, access: R/W */
#define AD9154_ENABLE_DACPLL_SET(x)             (((x) & 0x1) << 4)
#define AD9154_ENABLE_DACPLL_GET(x)             (((x) >> 4) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_RECAL_DACPLL_SET(x)              (((x) & 0x1) << 7)
#define AD9154_RECAL_DACPLL_GET(x)              (((x) >> 7) & 0x1)

#define AD9154_DACPLLSTATUS                     0x084
/* default: 0x00, access: R */
#define AD9154_DACPLL_LOCK_GET(x)               (((x) >> 1) & 0x1)
/* default: 0x00, access: R */
#define AD9154_VCO_CAL_PROGRESS_GET(x)          (((x) >> 3) & 0x1)
/* default: 0x00, access: R */
#define AD9154_CP_CAL_VALID_GET(x)              (((x) >> 4) & 0x1)
/* default: 0x00, access: R */
#define AD9154_CP_OVERRANGE_L_GET(x)            (((x) >> 5) & 0x1)
/* default: 0x00, access: R */
#define AD9154_CP_OVERRANGE_H_GET(x)            (((x) >> 6) & 0x3)

#define AD9154_DACINTEGERWORD0                  0x085

#define AD9154_DACLOOPFILT1                     0x087
/* default: 0x08, access: R/W */
#define AD9154_LF_C1_WORD_SET(x)                (((x) & 0xf) << 0)
#define AD9154_LF_C1_WORD_GET(x)                (((x) >> 0) & 0xf)
/* default: 0x08, access: R/W */
#define AD9154_LF_C2_WORD_SET(x)                (((x) & 0xf) << 4)
#define AD9154_LF_C2_WORD_GET(x)                (((x) >> 4) & 0xf)

#define AD9154_DACLOOPFILT2                     0x088
/* default: 0x08, access: R/W */
#define AD9154_LF_C3_WORD_SET(x)                (((x) & 0xf) << 0)
#define AD9154_LF_C3_WORD_GET(x)                (((x) >> 0) & 0xf)
/* default: 0x08, access: R/W */
#define AD9154_LF_R1_WORD_SET(x)                (((x) & 0xf) << 4)
#define AD9154_LF_R1_WORD_GET(x)                (((x) >> 4) & 0xf)

#define AD9154_DACLOOPFILT3                     0x089
/* default: 0x08, access: R/W */
#define AD9154_LF_R3_WORD_SET(x)                (((x) & 0xf) << 0)
#define AD9154_LF_R3_WORD_GET(x)                (((x) >> 0) & 0xf)
/* default: 0x00, access: R/W */
#define AD9154_LF_BYPASS_C1_SET(x)              (((x) & 0x1) << 4)
#define AD9154_LF_BYPASS_C1_GET(x)              (((x) >> 4) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_LF_BYPASS_C2_SET(x)              (((x) & 0x1) << 5)
#define AD9154_LF_BYPASS_C2_GET(x)              (((x) >> 5) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_LF_BYPASS_R1_SET(x)              (((x) & 0x1) << 6)
#define AD9154_LF_BYPASS_R1_GET(x)              (((x) >> 6) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_LF_BYPASS_R3_SET(x)              (((x) & 0x1) << 7)
#define AD9154_LF_BYPASS_R3_GET(x)              (((x) >> 7) & 0x1)

#define AD9154_DACCPCNTRL                       0x08a
/* default: 0x20, access: R/W */
#define AD9154_CP_CURRENT_SET(x)                (((x) & 0x3f) << 0)
#define AD9154_CP_CURRENT_GET(x)                (((x) >> 0) & 0x3f)
/* default: 0x00, access: R/W */
#define AD9154_VT_FORCE_SET(x)                  (((x) & 0x1) << 6)
#define AD9154_VT_FORCE_GET(x)                  (((x) >> 6) & 0x1)

#define AD9154_DACLOGENCNTRL                    0x08b
/* default: 0x00, access: R/W */
#define AD9154_LODIVMODE_SET(x)                 (((x) & 0x3) << 0)
#define AD9154_LODIVMODE_GET(x)                 (((x) >> 0) & 0x3)
/* default: 0x00, access: R/W */
#define AD9154_LO_POWER_MODE_SET(x)             (((x) & 0x3) << 4)
#define AD9154_LO_POWER_MODE_GET(x)             (((x) >> 4) & 0x3)

#define AD9154_DACLDOCNTRL1                     0x08c
/* default: 0x00, access: R/W */
#define AD9154_REFDIVMODE_SET(x)                (((x) & 0x7) << 0)
#define AD9154_REFDIVMODE_GET(x)                (((x) >> 0) & 0x7)
/* default: 0x00, access: R/W */
#define AD9154_LDO_BYPASS_FLT_SET(x)            (((x) & 0x1) << 6)
#define AD9154_LDO_BYPASS_FLT_GET(x)            (((x) >> 6) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_LDO_REF_SEL_SET(x)               (((x) & 0x1) << 7)
#define AD9154_LDO_REF_SEL_GET(x)               (((x) >> 7) & 0x1)

#define AD9154_DACLDOCNTRL2                     0x08d
/* default: 0x03, access: R/W */
#define AD9154_LDO_VDROP_SET(x)                 (((x) & 0x3) << 0)
#define AD9154_LDO_VDROP_GET(x)                 (((x) >> 0) & 0x3)
/* default: 0x02, access: R/W */
#define AD9154_LDO_SEL_SET(x)                   (((x) & 0x7) << 2)
#define AD9154_LDO_SEL_GET(x)                   (((x) >> 2) & 0x7)
/* default: 0x01, access: R/W */
#define AD9154_LDO_INRUSH_SET(x)                (((x) & 0x3) << 5)
#define AD9154_LDO_INRUSH_GET(x)                (((x) >> 5) & 0x3)
/* default: 0x00, access: R/W */
#define AD9154_LDO_BYPASS_SET(x)                (((x) & 0x1) << 7)
#define AD9154_LDO_BYPASS_GET(x)                (((x) >> 7) & 0x1)

#define AD9154_DATA_FORMAT                      0x110
/* default: 0x00, access: R/W */
#define AD9154_BINARY_FORMAT_SET(x)             (((x) & 0x1) << 7)
#define AD9154_BINARY_FORMAT_GET(x)             (((x) >> 7) & 0x1)

#define AD9154_DATAPATH_CTRL                    0x111
/* default: 0x00, access: R/W */
#define AD9154_I_TO_Q_SET(x)                    (((x) & 0x1) << 0)
#define AD9154_I_TO_Q_GET(x)                    (((x) >> 0) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_SEL_SIDEBAND_SET(x)              (((x) & 0x1) << 1)
#define AD9154_SEL_SIDEBAND_GET(x)              (((x) >> 1) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_MODULATION_TYPE_SET(x)           (((x) & 0x3) << 2)
#define AD9154_MODULATION_TYPE_GET(x)           (((x) >> 2) & 0x3)
/* default: 0x00, access: R/W */
#define AD9154_PHASE_ADJ_ENABLE_SET(x)          (((x) & 0x1) << 4)
#define AD9154_PHASE_ADJ_ENABLE_GET(x)          (((x) >> 4) & 0x1)
/* default: 0x01, access: R/W */
#define AD9154_DIG_GAIN_ENABLE_SET(x)           (((x) & 0x1) << 5)
#define AD9154_DIG_GAIN_ENABLE_GET(x)           (((x) >> 5) & 0x1)
/* default: 0x01, access: R/W */
#define AD9154_INVSINC_ENABLE_SET(x)            (((x) & 0x1) << 7)
#define AD9154_INVSINC_ENABLE_GET(x)            (((x) >> 7) & 0x1)

#define AD9154_INTERP_MODE                      0x112

#define AD9154_NCO_FTW_UPDATE                   0x113
/* default: 0x00, access: R/W */
#define AD9154_FTW_UPDATE_REQ_SET(x)            (((x) & 0x1) << 0)
#define AD9154_FTW_UPDATE_REQ_GET(x)            (((x) >> 0) & 0x1)
/* default: 0x00, access: R */
#define AD9154_FTW_UPDATE_ACK_GET(x)            (((x) >> 1) & 0x1)

#define AD9154_FTW0                             0x114

#define AD9154_FTW1                             0x115

#define AD9154_FTW2                             0x116

#define AD9154_FTW3                             0x117

#define AD9154_FTW4                             0x118

#define AD9154_FTW5                             0x119

#define AD9154_NCO_PHASE_OFFSET0                0x11a

#define AD9154_NCO_PHASE_OFFSET1                0x11b

#define AD9154_PHASE_ADJ0                       0x11c

#define AD9154_PHASE_ADJ1                       0x11d

#define AD9154_TXEN_SM_0                        0x11f
/* default: 0x01, access: R/W */
#define AD9154_TXEN_SM_EN_SET(x)                (((x) & 0x1) << 0)
#define AD9154_TXEN_SM_EN_GET(x)                (((x) >> 0) & 0x1)
/* default: 0x01, access: R/W */
#define AD9154_GP_PA_CTRL_SET(x)                (((x) & 0x1) << 1)
#define AD9154_GP_PA_CTRL_GET(x)                (((x) >> 1) & 0x1)
/* default: 0x01, access: R/W */
#define AD9154_GP_PA_ON_INVERT_SET(x)           (((x) & 0x0) << 2)
#define AD9154_GP_PA_ON_INVERT_GET(x)           (((x) >> 2) & 0x0)
/* default: 0x00, access: R/W */
#define AD9154_RISE_COUNTERS_SET(x)             (((x) & 0x3) << 4)
#define AD9154_RISE_COUNTERS_GET(x)             (((x) >> 4) & 0x3)
/* default: 0x02, access: R/W */
#define AD9154_FALL_COUNTERS_SET(x)             (((x) & 0x3) << 6)
#define AD9154_FALL_COUNTERS_GET(x)             (((x) >> 6) & 0x3)

#define AD9154_TXEN_RISE_COUNT_0                0x121

#define AD9154_TXEN_RISE_COUNT_1                0x122

#define AD9154_TXEN_FALL_COUNT_0                0x123

#define AD9154_TXEN_FALL_COUNT_1                0x124

#define AD9154_DEVICE_CONFIG_REG_0              0x12d

#define AD9154_DIE_TEMP_CTRL0                   0x12f
/* default: 0x00, access: R/W */
#define AD9154_AUXADC_ENABLE_SET(x)             (((x) & 0x1) << 0)
#define AD9154_AUXADC_ENABLE_GET(x)             (((x) >> 0) & 0x1)
/* default: 0x10, access: R/W */
#define AD9154_AUXADC_RESERVED_SET(x)           (((x) & 0x7f) << 1)
#define AD9154_AUXADC_RESERVED_GET(x)           (((x) >> 1) & 0x7f)

#define AD9154_DIE_TEMP0                        0x132

#define AD9154_DIE_TEMP1                        0x133

#define AD9154_DIE_TEMP_UPDATE                  0x134

#define AD9154_DC_OFFSET_CTRL                   0x135

#define AD9154_IPATH_DC_OFFSET_1PART0           0x136

#define AD9154_IPATH_DC_OFFSET_1PART1           0x137

#define AD9154_QPATH_DC_OFFSET_1PART0           0x138

#define AD9154_QPATH_DC_OFFSET_1PART1           0x139

#define AD9154_IPATH_DC_OFFSET_2PART            0x13a

#define AD9154_QPATH_DC_OFFSET_2PART            0x13b

#define AD9154_IDAC_DIG_GAIN0                   0x13c

#define AD9154_IDAC_DIG_GAIN1                   0x13d

#define AD9154_QDAC_DIG_GAIN0                   0x13e

#define AD9154_QDAC_DIG_GAIN1                   0x13f

#define AD9154_GAIN_RAMP_UP_STEP0               0x140

#define AD9154_GAIN_RAMP_UP_STEP1               0x141

#define AD9154_GAIN_RAMP_DOWN_STEP0             0x142

#define AD9154_GAIN_RAMP_DOWN_STEP1             0x143

#define AD9154_DEVICE_CONFIG_REG_1              0x146

#define AD9154_BSM_STAT                         0x147
/* default: 0x00, access: R */
#define AD9154_SOFTBLANKRB_GET(x)               (((x) >> 6) & 0x3)

#define AD9154_PRBS                             0x14b
/* default: 0x00, access: R/W */
#define AD9154_PRBS_EN_SET(x)                   (((x) & 0x1) << 0)
#define AD9154_PRBS_EN_GET(x)                   (((x) >> 0) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_PRBS_RESET_SET(x)                (((x) & 0x1) << 1)
#define AD9154_PRBS_RESET_GET(x)                (((x) >> 1) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_PRBS_MODE_SET(x)                 (((x) & 0x1) << 2)
#define AD9154_PRBS_MODE_GET(x)                 (((x) >> 2) & 0x1)
/* default: 0x00, access: R */
#define AD9154_PRBS_GOOD_I_GET(x)               (((x) >> 6) & 0x1)
/* default: 0x00, access: R */
#define AD9154_PRBS_GOOD_Q_GET(x)               (((x) >> 7) & 0x1)

#define AD9154_PRBS_ERROR_I                     0x14c

#define AD9154_PRBS_ERROR_Q                     0x14d

#define AD9154_DACPLLT0                         0x1b0
/* default: 0x01, access: R/W */
#define AD9154_LOGEN_PD_SET(x)                  (((x) & 0x1) << 1)
#define AD9154_LOGEN_PD_GET(x)                  (((x) >> 1) & 0x1)
/* default: 0x01, access: R/W */
#define AD9154_LDO_PD_SET(x)                    (((x) & 0x1) << 3)
#define AD9154_LDO_PD_GET(x)                    (((x) >> 3) & 0x1)
/* default: 0x01, access: R/W */
#define AD9154_SYNTH_PD_SET(x)                  (((x) & 0x1) << 4)
#define AD9154_SYNTH_PD_GET(x)                  (((x) >> 4) & 0x1)
/* default: 0x01, access: R/W */
#define AD9154_VCO_PD_ALC_SET(x)                (((x) & 0x1) << 5)
#define AD9154_VCO_PD_ALC_GET(x)                (((x) >> 5) & 0x1)
/* default: 0x01, access: R/W */
#define AD9154_VCO_PD_PTAT_SET(x)               (((x) & 0x1) << 6)
#define AD9154_VCO_PD_PTAT_GET(x)               (((x) >> 6) & 0x1)
/* default: 0x01, access: R/W */
#define AD9154_VCO_PD_IN_SET(x)                 (((x) & 0x1) << 7)
#define AD9154_VCO_PD_IN_GET(x)                 (((x) >> 7) & 0x1)

#define AD9154_DACPLLT1                         0x1b1
/* default: 0x00, access: R/W */
#define AD9154_PFD_EDGE_SET(x)                  (((x) & 0x1) << 1)
#define AD9154_PFD_EDGE_GET(x)                  (((x) >> 1) & 0x1)
/* default: 0x01, access: R/W */
#define AD9154_PFD_DELAY_SET(x)                 (((x) & 0x3) << 2)
#define AD9154_PFD_DELAY_GET(x)                 (((x) >> 2) & 0x3)

#define AD9154_DACPLLT2                         0x1b2
/* default: 0x00, access: R/W */
#define AD9154_EXT_ALC_WORD_SET(x)              (((x) & 0x7f) << 0)
#define AD9154_EXT_ALC_WORD_GET(x)              (((x) >> 0) & 0x7f)
/* default: 0x00, access: R/W */
#define AD9154_EXT_ALC_WORD_EN_SET(x)           (((x) & 0x1) << 7)
#define AD9154_EXT_ALC_WORD_EN_GET(x)           (((x) >> 7) & 0x1)

#define AD9154_DACPLLT3                         0x1b3
/* default: 0x00, access: W */
#define AD9154_EXT_BAND1_SET(x)                 (((x) & 0xff) << 0)

#define AD9154_DACPLLT4                         0x1b4
/* default: 0x00, access: R/W */
#define AD9154_EXT_BAND2_SET(x)                 (((x) & 0x1) << 0)
#define AD9154_EXT_BAND2_GET(x)                 (((x) >> 0) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_EXT_BAND_EN_SET(x)               (((x) & 0x1) << 1)
#define AD9154_EXT_BAND_EN_GET(x)               (((x) >> 1) & 0x1)
/* default: 0x0f, access: R/W */
#define AD9154_VCO_CAL_OFFSET_SET(x)            (((x) & 0xf) << 3)
#define AD9154_VCO_CAL_OFFSET_GET(x)            (((x) >> 3) & 0xf)
/* default: 0x00, access: R/W */
#define AD9154_BYP_LOAD_DELAY_SET(x)            (((x) & 0x1) << 7)
#define AD9154_BYP_LOAD_DELAY_GET(x)            (((x) >> 7) & 0x1)

#define AD9154_DACPLLT5                         0x1b5

#define AD9154_DACPLLT6                         0x1b6

#define AD9154_DACPLLT7                         0x1b7

#define AD9154_DACPLLT8                         0x1b8

#define AD9154_DACPLLT9                         0x1b9

#define AD9154_DACPLLTA                         0x1ba

#define AD9154_DACPLLTB                         0x1bb
/* default: 0x04, access: R/W */
#define AD9154_VCO_BIAS_REF_SET(x)              (((x) & 0x7) << 0)
#define AD9154_VCO_BIAS_REF_GET(x)              (((x) >> 0) & 0x7)
/* default: 0x01, access: R/W */
#define AD9154_VCO_BIAS_TCF_SET(x)              (((x) & 0x3) << 3)
#define AD9154_VCO_BIAS_TCF_GET(x)              (((x) >> 3) & 0x3)

#define AD9154_DACPLLTC                         0x1bc

#define AD9154_DACPLLTD                         0x1bd

#define AD9154_DACPLLTE                         0x1be

#define AD9154_DACPLLTF                         0x1bf

#define AD9154_DACPLLT10                        0x1c0

#define AD9154_DACPLLT11                        0x1c1

#define AD9154_DACPLLT15                        0x1c2

#define AD9154_DACPLLT16                        0x1c3

#define AD9154_DACPLLT17                        0x1c4

#define AD9154_DACPLLT18                        0x1c5

#define AD9154_MASTER_PD                        0x200

#define AD9154_PHY_PD                           0x201

#define AD9154_GENERIC_PD                       0x203
/* default: 0x00, access: R/W */
#define AD9154_PD_SYNCOUT1B_SET(x)              (((x) & 0x1) << 0)
#define AD9154_PD_SYNCOUT1B_GET(x)              (((x) >> 0) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_PD_SYNCOUT0B_SET(x)              (((x) & 0x1) << 1)
#define AD9154_PD_SYNCOUT0B_GET(x)              (((x) >> 1) & 0x1)

#define AD9154_CDR_RESET                        0x206

#define AD9154_CDR_OPERATING_MODE_REG_0         0x230
/* default: 0x00, access: R/W */
#define AD9154_CDR_OVERSAMP_SET(x)              (((x) & 0x1) << 1)
#define AD9154_CDR_OVERSAMP_GET(x)              (((x) >> 1) & 0x1)
/* default: 0x02, access: R/W */
#define AD9154_CDR_RESERVED_SET(x)              (((x) & 0x7) << 2)
#define AD9154_CDR_RESERVED_GET(x)              (((x) >> 2) & 0x7)
/* default: 0x01, access: R/W */
#define AD9154_ENHALFRATE_SET(x)                (((x) & 0x1) << 5)
#define AD9154_ENHALFRATE_GET(x)                (((x) >> 5) & 0x1)

#define AD9154_EQ_BIAS_REG                      0x268
/* default: 0x22, access: R/W */
#define AD9154_EQ_BIAS_RESERVED_SET(x)          (((x) & 0x3f) << 0)
#define AD9154_EQ_BIAS_RESERVED_GET(x)          (((x) >> 0) & 0x3f)
/* default: 0x01, access: R/W */
#define AD9154_EQ_POWER_MODE_SET(x)             (((x) & 0x3) << 6)
#define AD9154_EQ_POWER_MODE_GET(x)             (((x) >> 6) & 0x3)

#define AD9154_SERDESPLL_ENABLE_CNTRL           0x280
/* default: 0x00, access: R/W */
#define AD9154_ENABLE_SERDESPLL_SET(x)          (((x) & 0x1) << 0)
#define AD9154_ENABLE_SERDESPLL_GET(x)          (((x) >> 0) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_RECAL_SERDESPLL_SET(x)           (((x) & 0x1) << 2)
#define AD9154_RECAL_SERDESPLL_GET(x)           (((x) >> 2) & 0x1)

#define AD9154_PLL_STATUS                       0x281
/* default: 0x00, access: R */
#define AD9154_SERDES_PLL_LOCK_RB_GET(x)        (((x) >> 0) & 0x1)
/* default: 0x00, access: R */
#define AD9154_SERDES_CURRENTS_READY_RB_GET(x)  (((x) >> 1) & 0x1)
/* default: 0x00, access: R */
#define AD9154_SERDES_VCO_CAL_IN_PROGRESS_RB_GET(x) (((x) >> 2) & 0x1)
/* default: 0x00, access: R */
#define AD9154_SERDES_PLL_CAL_VALID_RB_GET(x)   (((x) >> 3) & 0x1)
/* default: 0x00, access: R */
#define AD9154_SERDES_PLL_OVERRANGE_L_RB_GET(x) (((x) >> 4) & 0x1)
/* default: 0x00, access: R */
#define AD9154_SERDES_PLL_OVERRANGE_H_RB_GET(x) (((x) >> 5) & 0x1)

#define AD9154_LDO_FILTER_1                     0x284

#define AD9154_LDO_FILTER_2                     0x285

#define AD9154_LDO_FILTER_3                     0x286

#define AD9154_CP_CURRENT_SPI                   0x287
/* default: 0x3f, access: R/W */
#define AD9154_SPI_CP_CURRENT_SET(x)            (((x) & 0x3f) << 0)
#define AD9154_SPI_CP_CURRENT_GET(x)            (((x) >> 0) & 0x3f)
/* default: 0x01, access: R/W */
#define AD9154_SPI_SERDES_LOGEN_POWER_MODE_SET(x) (((x) & 0x1) << 6)
#define AD9154_SPI_SERDES_LOGEN_POWER_MODE_GET(x) (((x) >> 6) & 0x1)

#define AD9154_REF_CLK_DIVIDER_LDO              0x289
/* default: 0x00, access: R/W */
#define AD9154_SPI_CDR_OVERSAMP_SET(x)          (((x) & 0x3) << 0)
#define AD9154_SPI_CDR_OVERSAMP_GET(x)          (((x) >> 0) & 0x3)
/* default: 0x01, access: R/W */
#define AD9154_SPI_LDO_BYPASS_FILT_SET(x)       (((x) & 0x1) << 2)
#define AD9154_SPI_LDO_BYPASS_FILT_GET(x)       (((x) >> 2) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_SPI_LDO_REF_SEL_SET(x)           (((x) & 0x1) << 3)
#define AD9154_SPI_LDO_REF_SEL_GET(x)           (((x) >> 3) & 0x1)

#define AD9154_VCO_LDO                          0x28a

#define AD9154_PLL_RD_REG                       0x28b
/* default: 0x01, access: R/W */
#define AD9154_SPI_SERDES_LOGEN_PD_CORE_SET(x)  (((x) & 0x3) << 0)
#define AD9154_SPI_SERDES_LOGEN_PD_CORE_GET(x)  (((x) >> 0) & 0x3)
/* default: 0x01, access: R/W */
#define AD9154_SPI_SERDES_LDO_PD_SET(x)         (((x) & 0x1) << 2)
#define AD9154_SPI_SERDES_LDO_PD_GET(x)         (((x) >> 2) & 0x1)
/* default: 0x01, access: R/W */
#define AD9154_SPI_SYN_PD_SET(x)                (((x) & 0x1) << 3)
#define AD9154_SPI_SYN_PD_GET(x)                (((x) >> 3) & 0x1)
/* default: 0x01, access: R/W */
#define AD9154_SPI_VCO_PD_ALC_SET(x)            (((x) & 0x1) << 4)
#define AD9154_SPI_VCO_PD_ALC_GET(x)            (((x) >> 4) & 0x1)
/* default: 0x01, access: R/W */
#define AD9154_SPI_VCO_PD_PTAT_SET(x)           (((x) & 0x1) << 5)
#define AD9154_SPI_VCO_PD_PTAT_GET(x)           (((x) >> 5) & 0x1)
/* default: 0x01, access: R/W */
#define AD9154_SPI_VCO_PD_SET(x)                (((x) & 0x1) << 6)
#define AD9154_SPI_VCO_PD_GET(x)                (((x) >> 6) & 0x1)

#define AD9154_ALC_VARACTOR                     0x290
/* default: 0x03, access: R/W */
#define AD9154_SPI_VCO_VARACTOR_SET(x)          (((x) & 0xf) << 0)
#define AD9154_SPI_VCO_VARACTOR_GET(x)          (((x) >> 0) & 0xf)
/* default: 0x08, access: R/W */
#define AD9154_SPI_INIT_ALC_VALUE_SET(x)        (((x) & 0xf) << 4)
#define AD9154_SPI_INIT_ALC_VALUE_GET(x)        (((x) >> 4) & 0xf)

#define AD9154_VCO_OUTPUT                       0x291
/* default: 0x09, access: R/W */
#define AD9154_SPI_VCO_OUTPUT_LEVEL_SET(x)      (((x) & 0xf) << 0)
#define AD9154_SPI_VCO_OUTPUT_LEVEL_GET(x)      (((x) >> 0) & 0xf)
/* default: 0x04, access: R/W */
#define AD9154_SPI_VCO_OUTPUT_RESERVED_SET(x)   (((x) & 0xf) << 4)
#define AD9154_SPI_VCO_OUTPUT_RESERVED_GET(x)   (((x) >> 4) & 0xf)

#define AD9154_CP_CONFIG                        0x294
/* default: 0x00, access: R/W */
#define AD9154_SPI_CP_TEST_SET(x)               (((x) & 0x3) << 0)
#define AD9154_SPI_CP_TEST_GET(x)               (((x) >> 0) & 0x3)
/* default: 0x00, access: R/W */
#define AD9154_SPI_CP_CAL_EN_SET(x)             (((x) & 0x1) << 2)
#define AD9154_SPI_CP_CAL_EN_GET(x)             (((x) >> 2) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_SPI_CP_FORCE_CALBITS_SET(x)      (((x) & 0x1) << 3)
#define AD9154_SPI_CP_FORCE_CALBITS_GET(x)      (((x) >> 3) & 0x1)
/* default: 0x01, access: R/W */
#define AD9154_SPI_CP_OFFSET_OFF_SET(x)         (((x) & 0x1) << 4)
#define AD9154_SPI_CP_OFFSET_OFF_GET(x)         (((x) >> 4) & 0x1)
/* default: 0x01, access: R/W */
#define AD9154_SPI_CP_ENABLE_MACHINE_SET(x)     (((x) & 0x1) << 5)
#define AD9154_SPI_CP_ENABLE_MACHINE_GET(x)     (((x) >> 5) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_SPI_CP_DITHER_MODE_SET(x)        (((x) & 0x1) << 6)
#define AD9154_SPI_CP_DITHER_MODE_GET(x)        (((x) >> 6) & 0x1)
/* default: 0x01, access: R/W */
#define AD9154_SPI_CP_HALF_VCO_CAL_CLK_SET(x)   (((x) & 0x1) << 7)
#define AD9154_SPI_CP_HALF_VCO_CAL_CLK_GET(x)   (((x) >> 7) & 0x1)

#define AD9154_VCO_BIAS_1                       0x296
/* default: 0x04, access: R/W */
#define AD9154_SPI_VCO_BIAS_REF_SET(x)          (((x) & 0x7) << 0)
#define AD9154_SPI_VCO_BIAS_REF_GET(x)          (((x) >> 0) & 0x7)
/* default: 0x01, access: R/W */
#define AD9154_SPI_VCO_BIAS_TCF_SET(x)          (((x) & 0x3) << 3)
#define AD9154_SPI_VCO_BIAS_TCF_GET(x)          (((x) >> 3) & 0x3)

#define AD9154_VCO_BIAS_2                       0x297
/* default: 0x00, access: R/W */
#define AD9154_SPI_PRESCALE_BIAS_SET(x)         (((x) & 0x3) << 0)
#define AD9154_SPI_PRESCALE_BIAS_GET(x)         (((x) >> 0) & 0x3)
/* default: 0x00, access: R/W */
#define AD9154_SPI_LAST_ALC_EN_SET(x)           (((x) & 0x1) << 2)
#define AD9154_SPI_LAST_ALC_EN_GET(x)           (((x) >> 2) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_SPI_PRESCALE_BYPASS_R_SET(x)     (((x) & 0x1) << 3)
#define AD9154_SPI_PRESCALE_BYPASS_R_GET(x)     (((x) >> 3) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_SPI_VCO_COMP_BYPASS_BIASR_SET(x) (((x) & 0x1) << 4)
#define AD9154_SPI_VCO_COMP_BYPASS_BIASR_GET(x) (((x) >> 4) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_SPI_VCO_BYPASS_DAC_R_SET(x)      (((x) & 0x1) << 5)
#define AD9154_SPI_VCO_BYPASS_DAC_R_GET(x)      (((x) >> 5) & 0x1)

#define AD9154_VCO_PD_OVERRIDES                 0x299
/* default: 0x00, access: R/W */
#define AD9154_SPI_VCO_PD_OVERRIDE_VCO_BUF_SET(x) (((x) & 0x1) << 0)
#define AD9154_SPI_VCO_PD_OVERRIDE_VCO_BUF_GET(x) (((x) >> 0) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_SPI_VCO_PD_OVERRIDE_CAL_TCF_SET(x) (((x) & 0x1) << 1)
#define AD9154_SPI_VCO_PD_OVERRIDE_CAL_TCF_GET(x) (((x) >> 1) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_SPI_VCO_PD_OVERRIDE_VAR_REF_TCF_SET(x) (((x) & 0x1) << 2)
#define AD9154_SPI_VCO_PD_OVERRIDE_VAR_REF_TCF_GET(x) (((x) >> 2) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_SPI_VCO_PD_OVERRIDE_VAR_REF_SET(x) (((x) & 0x1) << 3)
#define AD9154_SPI_VCO_PD_OVERRIDE_VAR_REF_GET(x) (((x) >> 3) & 0x1)

#define AD9154_VCO_CAL                          0x29a
/* default: 0x02, access: R/W */
#define AD9154_SPI_FB_CLOCK_ADV_SET(x)          (((x) & 0x3) << 0)
#define AD9154_SPI_FB_CLOCK_ADV_GET(x)          (((x) >> 0) & 0x3)
/* default: 0x03, access: R/W */
#define AD9154_SPI_VCO_CAL_COUNT_SET(x)         (((x) & 0x3) << 2)
#define AD9154_SPI_VCO_CAL_COUNT_GET(x)         (((x) >> 2) & 0x3)
/* default: 0x07, access: R/W */
#define AD9154_SPI_VCO_CAL_ALC_WAIT_SET(x)      (((x) & 0x7) << 4)
#define AD9154_SPI_VCO_CAL_ALC_WAIT_GET(x)      (((x) >> 4) & 0x7)
/* default: 0x01, access: R/W */
#define AD9154_SPI_VCO_CAL_EN_SET(x)            (((x) & 0x1) << 7)
#define AD9154_SPI_VCO_CAL_EN_GET(x)            (((x) >> 7) & 0x1)

#define AD9154_CP_LEVEL_DETECT                  0x29c
/* default: 0x07, access: R/W */
#define AD9154_SPI_CP_LEVEL_THRESHOLD_HIGH_SET(x) (((x) & 0x7) << 0)
#define AD9154_SPI_CP_LEVEL_THRESHOLD_HIGH_GET(x) (((x) >> 0) & 0x7)
/* default: 0x02, access: R/W */
#define AD9154_SPI_CP_LEVEL_THRESHOLD_LOW_SET(x) (((x) & 0x7) << 3)
#define AD9154_SPI_CP_LEVEL_THRESHOLD_LOW_GET(x) (((x) >> 3) & 0x7)
/* default: 0x00, access: R/W */
#define AD9154_SPI_CP_LEVEL_DET_PD_SET(x)       (((x) & 0x1) << 6)
#define AD9154_SPI_CP_LEVEL_DET_PD_GET(x)       (((x) >> 6) & 0x1)

#define AD9154_VCO_VARACTOR_CTRL_0              0x29f
/* default: 0x03, access: R/W */
#define AD9154_SPI_VCO_VARACTOR_OFFSET_SET(x)   (((x) & 0xf) << 0)
#define AD9154_SPI_VCO_VARACTOR_OFFSET_GET(x)   (((x) >> 0) & 0xf)
/* default: 0x03, access: R/W */
#define AD9154_SPI_VCO_VARACTOR_REF_TCF_SET(x)  (((x) & 0x7) << 4)
#define AD9154_SPI_VCO_VARACTOR_REF_TCF_GET(x)  (((x) >> 4) & 0x7)

#define AD9154_VCO_VARACTOR_CTRL_1              0x2a0
/* default: 0x08, access: R/W */
#define AD9154_SPI_VCO_VARACTOR_REF_SET(x)      (((x) & 0xf) << 0)
#define AD9154_SPI_VCO_VARACTOR_REF_GET(x)      (((x) >> 0) & 0xf)

#define AD9154_TERM_BLK1_CTRLREG0               0x2a7

#define AD9154_TERM_BLK2_CTRLREG0               0x2ae

#define AD9154_GENERAL_JRX_CTRL_0               0x300
/* default: 0x00, access: R/W */
#define AD9154_LINK_EN_SET(x)                   (((x) & 0x3) << 0)
#define AD9154_LINK_EN_GET(x)                   (((x) >> 0) & 0x3)
/* default: 0x00, access: R/W */
#define AD9154_LINK_PAGE_SET(x)                 (((x) & 0x1) << 2)
#define AD9154_LINK_PAGE_GET(x)                 (((x) >> 2) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_LINK_MODE_SET(x)                 (((x) & 0x1) << 3)
#define AD9154_LINK_MODE_GET(x)                 (((x) >> 3) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_CHECKSUM_MODE_SET(x)             (((x) & 0x1) << 6)
#define AD9154_CHECKSUM_MODE_GET(x)             (((x) >> 6) & 0x1)

#define AD9154_GENERAL_JRX_CTRL_1               0x301

#define AD9154_DYN_LINK_LATENCY_0               0x302

#define AD9154_DYN_LINK_LATENCY_1               0x303

#define AD9154_LMFC_DELAY_0                     0x304

#define AD9154_LMFC_DELAY_1                     0x305

#define AD9154_LMFC_VAR_0                       0x306

#define AD9154_LMFC_VAR_1                       0x307

#define AD9154_XBAR_LN_0_1                      0x308
/* default: 0x00, access: R/W */
#define AD9154_LOGICAL_LANE0_SRC_SET(x)         (((x) & 0x7) << 0)
#define AD9154_LOGICAL_LANE0_SRC_GET(x)         (((x) >> 0) & 0x7)
/* default: 0x01, access: R/W */
#define AD9154_LOGICAL_LANE1_SRC_SET(x)         (((x) & 0x7) << 3)
#define AD9154_LOGICAL_LANE1_SRC_GET(x)         (((x) >> 3) & 0x7)

#define AD9154_XBAR_LN_2_3                      0x309
/* default: 0x02, access: R/W */
#define AD9154_LOGICAL_LANE2_SRC_SET(x)         (((x) & 0x7) << 0)
#define AD9154_LOGICAL_LANE2_SRC_GET(x)         (((x) >> 0) & 0x7)
/* default: 0x03, access: R/W */
#define AD9154_LOGICAL_LANE3_SRC_SET(x)         (((x) & 0x7) << 3)
#define AD9154_LOGICAL_LANE3_SRC_GET(x)         (((x) >> 3) & 0x7)

#define AD9154_XBAR_LN_4_5                      0x30a
/* default: 0x04, access: R/W */
#define AD9154_LOGICAL_LANE4_SRC_SET(x)         (((x) & 0x7) << 0)
#define AD9154_LOGICAL_LANE4_SRC_GET(x)         (((x) >> 0) & 0x7)
/* default: 0x05, access: R/W */
#define AD9154_LOGICAL_LANE5_SRC_SET(x)         (((x) & 0x7) << 3)
#define AD9154_LOGICAL_LANE5_SRC_GET(x)         (((x) >> 3) & 0x7)

#define AD9154_XBAR_LN_6_7                      0x30b
/* default: 0x06, access: R/W */
#define AD9154_LOGICAL_LANE6_SRC_SET(x)         (((x) & 0x7) << 0)
#define AD9154_LOGICAL_LANE6_SRC_GET(x)         (((x) >> 0) & 0x7)
/* default: 0x07, access: R/W */
#define AD9154_LOGICAL_LANE7_SRC_SET(x)         (((x) & 0x7) << 3)
#define AD9154_LOGICAL_LANE7_SRC_GET(x)         (((x) >> 3) & 0x7)

#define AD9154_FIFO_STATUS_REG_0                0x30c

#define AD9154_FIFO_STATUS_REG_1                0x30d

#define AD9154_SYNCB_GEN_1                      0x312
/* default: 0x00, access: R/W */
#define AD9154_SYNCB_ERR_DUR_SET(x)             (((x) & 0x7) << 4)
#define AD9154_SYNCB_ERR_DUR_GET(x)             (((x) >> 4) & 0x7)

#define AD9154_SERDES_SPI_REG                   0x314

#define AD9154_PHY_PRBS_TEST_EN                 0x315

#define AD9154_PHY_PRBS_TEST_CTRL               0x316
/* default: 0x00, access: R/W */
#define AD9154_PHY_TEST_RESET_SET(x)            (((x) & 0x1) << 0)
#define AD9154_PHY_TEST_RESET_GET(x)            (((x) >> 0) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_PHY_TEST_START_SET(x)            (((x) & 0x1) << 1)
#define AD9154_PHY_TEST_START_GET(x)            (((x) >> 1) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_PHY_PRBS_PAT_SEL_SET(x)          (((x) & 0x3) << 2)
#define AD9154_PHY_PRBS_PAT_SEL_GET(x)          (((x) >> 2) & 0x3)
/* default: 0x00, access: R/W */
#define AD9154_PHY_SRC_ERR_CNT_SET(x)           (((x) & 0x7) << 4)
#define AD9154_PHY_SRC_ERR_CNT_GET(x)           (((x) >> 4) & 0x7)

#define AD9154_PHY_PRBS_TEST_THRESHOLD_LOBITS   0x317

#define AD9154_PHY_PRBS_TEST_THRESHOLD_MIDBITS  0x318

#define AD9154_PHY_PRBS_TEST_THRESHOLD_HIBITS   0x319

#define AD9154_PHY_PRBS_TEST_ERRCNT_LOBITS      0x31a

#define AD9154_PHY_PRBS_TEST_ERRCNT_MIDBITS     0x31b

#define AD9154_PHY_PRBS_TEST_ERRCNT_HIBITS      0x31c

#define AD9154_PHY_PRBS_TEST_STATUS             0x31d

#define AD9154_SHORT_TPL_TEST_0                 0x32c
/* default: 0x00, access: R/W */
#define AD9154_SHORT_TPL_TEST_EN_SET(x)         (((x) & 0x1) << 0)
#define AD9154_SHORT_TPL_TEST_EN_GET(x)         (((x) >> 0) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_SHORT_TPL_TEST_RESET_SET(x)      (((x) & 0x1) << 1)
#define AD9154_SHORT_TPL_TEST_RESET_GET(x)      (((x) >> 1) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_SHORT_TPL_DAC_SEL_SET(x)         (((x) & 0x3) << 2)
#define AD9154_SHORT_TPL_DAC_SEL_GET(x)         (((x) >> 2) & 0x3)
/* default: 0x00, access: R/W */
#define AD9154_SHORT_TPL_SP_SEL_SET(x)          (((x) & 0x3) << 4)
#define AD9154_SHORT_TPL_SP_SEL_GET(x)          (((x) >> 4) & 0x3)

#define AD9154_SHORT_TPL_TEST_1                 0x32d

#define AD9154_SHORT_TPL_TEST_2                 0x32e

#define AD9154_SHORT_TPL_TEST_3                 0x32f

#define AD9154_DEVICE_CONFIG_REG_2              0x333

#define AD9154_JESD_BIT_INVERSE_CTRL            0x334

#define AD9154_DID_REG                          0x400

#define AD9154_BID_REG                          0x401
/* default: 0x00, access: R */
#define AD9154_BID_RD_GET(x)                    (((x) >> 0) & 0xf)
/* default: 0x00, access: R */
#define AD9154_ADJCNT_RD_GET(x)                 (((x) >> 4) & 0xf)

#define AD9154_LID0_REG                         0x402
/* default: 0x00, access: R */
#define AD9154_LID0_RD_GET(x)                   (((x) >> 0) & 0x1f)
/* default: 0x00, access: R */
#define AD9154_PHADJ_RD_GET(x)                  (((x) >> 5) & 0x1)
/* default: 0x00, access: R */
#define AD9154_ADJDIR_RD_GET(x)                 (((x) >> 6) & 0x1)

#define AD9154_SCR_L_REG                        0x403
/* default: 0x00, access: R */
#define AD9154_L_1_RD_GET(x)                    (((x) >> 0) & 0x1f)
/* default: 0x00, access: R */
#define AD9154_SCR_RD_GET(x)                    (((x) >> 7) & 0x1)

#define AD9154_F_REG                            0x404

#define AD9154_K_REG                            0x405

#define AD9154_M_REG                            0x406

#define AD9154_CS_N_REG                         0x407
/* default: 0x00, access: R */
#define AD9154_N_1_RD_GET(x)                    (((x) >> 0) & 0x1f)
/* default: 0x00, access: R */
#define AD9154_CS_RD_GET(x)                     (((x) >> 6) & 0x3)

#define AD9154_NP_REG                           0x408
/* default: 0x00, access: R */
#define AD9154_NP_1_RD_GET(x)                   (((x) >> 0) & 0x1f)
/* default: 0x00, access: R */
#define AD9154_SUBCLASSV_RD_GET(x)              (((x) >> 5) & 0x7)

#define AD9154_S_REG                            0x409
/* default: 0x00, access: R */
#define AD9154_S_1_RD_GET(x)                    (((x) >> 0) & 0x1f)
/* default: 0x00, access: R */
#define AD9154_JESDV_RD_GET(x)                  (((x) >> 5) & 0x7)

#define AD9154_HD_CF_REG                        0x40a
/* default: 0x00, access: R */
#define AD9154_CF_RD_GET(x)                     (((x) >> 0) & 0x1f)
/* default: 0x00, access: R */
#define AD9154_HD_RD_GET(x)                     (((x) >> 7) & 0x1)

#define AD9154_RES1_REG                         0x40b

#define AD9154_RES2_REG                         0x40c

#define AD9154_CHECKSUM0_REG                    0x40d

#define AD9154_COMPSUM0_REG                     0x40e

#define AD9154_LID1_REG                         0x412

#define AD9154_CHECKSUM1_REG                    0x415

#define AD9154_COMPSUM1_REG                     0x416

#define AD9154_LID2_REG                         0x41a

#define AD9154_CHECKSUM2_REG                    0x41d

#define AD9154_COMPSUM2_REG                     0x41e

#define AD9154_LID3_REG                         0x422

#define AD9154_CHECKSUM3_REG                    0x425

#define AD9154_COMPSUM3_REG                     0x426

#define AD9154_LID4_REG                         0x42a

#define AD9154_CHECKSUM4_REG                    0x42d

#define AD9154_COMPSUM4_REG                     0x42e

#define AD9154_LID5_REG                         0x432

#define AD9154_CHECKSUM5_REG                    0x435

#define AD9154_COMPSUM5_REG                     0x436

#define AD9154_LID6_REG                         0x43a

#define AD9154_CHECKSUM6_REG                    0x43d

#define AD9154_COMPSUM6_REG                     0x43e

#define AD9154_LID7_REG                         0x442

#define AD9154_CHECKSUM7_REG                    0x445

#define AD9154_COMPSUM7_REG                     0x446

#define AD9154_ILS_DID                          0x450

#define AD9154_ILS_BID                          0x451
/* default: 0x00, access: R/W */
#define AD9154_BID_SET(x)                       (((x) & 0xf) << 0)
#define AD9154_BID_GET(x)                       (((x) >> 0) & 0xf)
/* default: 0x00, access: R/W */
#define AD9154_ADJCNT_SET(x)                    (((x) & 0xf) << 4)
#define AD9154_ADJCNT_GET(x)                    (((x) >> 4) & 0xf)

#define AD9154_ILS_LID0                         0x452
/* default: 0x00, access: R/W */
#define AD9154_LID0_SET(x)                      (((x) & 0x1f) << 0)
#define AD9154_LID0_GET(x)                      (((x) >> 0) & 0x1f)
/* default: 0x00, access: R/W */
#define AD9154_PHADJ_SET(x)                     (((x) & 0x1) << 5)
#define AD9154_PHADJ_GET(x)                     (((x) >> 5) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_ADJDIR_SET(x)                    (((x) & 0x1) << 6)
#define AD9154_ADJDIR_GET(x)                    (((x) >> 6) & 0x1)

#define AD9154_ILS_SCR_L                        0x453
/* default: 0x03, access: R/W */
#define AD9154_L_1_SET(x)                       (((x) & 0x1f) << 0)
#define AD9154_L_1_GET(x)                       (((x) >> 0) & 0x1f)
/* default: 0x01, access: R/W */
#define AD9154_SCR_SET(x)                       (((x) & 0x1) << 7)
#define AD9154_SCR_GET(x)                       (((x) >> 7) & 0x1)

#define AD9154_ILS_F                            0x454

#define AD9154_ILS_K                            0x455

#define AD9154_ILS_M                            0x456

#define AD9154_ILS_CS_N                         0x457
/* default: 0x0f, access: R/W */
#define AD9154_N_1_SET(x)                       (((x) & 0x1f) << 0)
#define AD9154_N_1_GET(x)                       (((x) >> 0) & 0x1f)
/* default: 0x00, access: R/W */
#define AD9154_CS_SET(x)                        (((x) & 0x3) << 6)
#define AD9154_CS_GET(x)                        (((x) >> 6) & 0x3)

#define AD9154_ILS_NP                           0x458
/* default: 0x0f, access: R/W */
#define AD9154_NP_1_SET(x)                      (((x) & 0x1f) << 0)
#define AD9154_NP_1_GET(x)                      (((x) >> 0) & 0x1f)
/* default: 0x01, access: R/W */
#define AD9154_SUBCLASSV_SET(x)                 (((x) & 0x7) << 5)
#define AD9154_SUBCLASSV_GET(x)                 (((x) >> 5) & 0x7)

#define AD9154_ILS_S                            0x459
/* default: 0x00, access: R/W */
#define AD9154_S_1_SET(x)                       (((x) & 0x1f) << 0)
#define AD9154_S_1_GET(x)                       (((x) >> 0) & 0x1f)
/* default: 0x01, access: R/W */
#define AD9154_JESDV_SET(x)                     (((x) & 0x7) << 5)
#define AD9154_JESDV_GET(x)                     (((x) >> 5) & 0x7)

#define AD9154_ILS_HD_CF                        0x45a
/* default: 0x00, access: R/W */
#define AD9154_CF_SET(x)                        (((x) & 0x1f) << 0)
#define AD9154_CF_GET(x)                        (((x) >> 0) & 0x1f)
/* default: 0x01, access: R/W */
#define AD9154_HD_SET(x)                        (((x) & 0x1) << 7)
#define AD9154_HD_GET(x)                        (((x) >> 7) & 0x1)

#define AD9154_ILS_RES1                         0x45b

#define AD9154_ILS_RES2                         0x45c

#define AD9154_ILS_CHECKSUM                     0x45d

#define AD9154_ERRCNTRMON                       0x46b
/* default: 0x00, access: W */
#define AD9154_CNTRSEL_SET(x)                   (((x) & 0x3) << 0)
/* default: 0x00, access: W */
#define AD9154_LANESEL_SET(x)                   (((x) & 0x7) << 4)

#define AD9154_LANEDESKEW                       0x46c

#define AD9154_BADDISPARITY                     0x46d
/* default: 0x00, access: W */
#define AD9154_LANE_ADDR_DIS_SET(x)             (((x) & 0x7) << 0)
/* default: 0x00, access: W */
#define AD9154_RST_ERR_CNTR_DIS_SET(x)          (((x) & 0x1) << 5)
/* default: 0x00, access: W */
#define AD9154_DISABLE_ERR_CNTR_DIS_SET(x)      (((x) & 0x1) << 6)
/* default: 0x00, access: W */
#define AD9154_RST_IRQ_DIS_SET(x)               (((x) & 0x1) << 7)

#define AD9154_NIT_W                            0x46e
/* default: 0x00, access: W */
#define AD9154_LANE_ADDR_NIT_SET(x)             (((x) & 0x7) << 0)
/* default: 0x00, access: W */
#define AD9154_RST_ERR_CNTR_NIT_SET(x)          (((x) & 0x1) << 5)
/* default: 0x00, access: W */
#define AD9154_DISABLE_ERR_CNTR_NIT_SET(x)      (((x) & 0x1) << 6)
/* default: 0x00, access: W */
#define AD9154_RST_IRQ_NIT_SET(x)               (((x) & 0x1) << 7)

#define AD9154_UNEXPECTEDCONTROL_W              0x46f
/* default: 0x00, access: W */
#define AD9154_LANE_ADDR_UCC_SET(x)             (((x) & 0x7) << 0)
/* default: 0x00, access: W */
#define AD9154_RST_ERR_CNTR_UCC_SET(x)          (((x) & 0x1) << 5)
/* default: 0x00, access: W */
#define AD9154_DISABLE_ERR_CNTR_UCC_SET(x)      (((x) & 0x1) << 6)
/* default: 0x00, access: W */
#define AD9154_RST_IRQ_UCC_SET(x)               (((x) & 0x1) << 7)

#define AD9154_CODEGRPSYNCFLG                   0x470

#define AD9154_FRAMESYNCFLG                     0x471

#define AD9154_GOODCHKSUMFLG                    0x472

#define AD9154_INITLANESYNCFLG                  0x473

#define AD9154_CTRLREG1                         0x476

#define AD9154_CTRLREG2                         0x477
/* default: 0x00, access: R/W */
#define AD9154_THRESHOLD_MASK_EN_SET(x)         (((x) & 0x1) << 3)
#define AD9154_THRESHOLD_MASK_EN_GET(x)         (((x) >> 3) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_ILAS_MODE_SET(x)                 (((x) & 0x1) << 7)
#define AD9154_ILAS_MODE_GET(x)                 (((x) >> 7) & 0x1)

#define AD9154_KVAL                             0x478

#define AD9154_IRQVECTOR_MASK                   0x47a
/* default: 0x00, access: W */
#define AD9154_CODEGRPSYNC_MASK_SET(x)          (((x) & 0x1) << 0)
/* default: 0x00, access: W */
#define AD9154_BADCHECKSUM_MASK_SET(x)          (((x) & 0x1) << 2)
/* default: 0x00, access: W */
#define AD9154_INITIALLANESYNC_MASK_SET(x)      (((x) & 0x1) << 3)
/* default: 0x00, access: W */
#define AD9154_UCC_MASK_SET(x)                  (((x) & 0x1) << 5)
/* default: 0x00, access: W */
#define AD9154_NIT_MASK_SET(x)                  (((x) & 0x1) << 6)
/* default: 0x00, access: W */
#define AD9154_BADDIS_MASK_SET(x)               (((x) & 0x1) << 7)

#define AD9154_SYNCASSERTIONMASK                0x47b
/* default: 0x01, access: R/W */
#define AD9154_CMM_ENABLE_SET(x)                (((x) & 0x1) << 3)
#define AD9154_CMM_ENABLE_GET(x)                (((x) >> 3) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_CMM_SET(x)                       (((x) & 0x1) << 4)
#define AD9154_CMM_GET(x)                       (((x) >> 4) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_UCC_S_SET(x)                     (((x) & 0x1) << 5)
#define AD9154_UCC_S_GET(x)                     (((x) >> 5) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_NIT_S_SET(x)                     (((x) & 0x1) << 6)
#define AD9154_NIT_S_GET(x)                     (((x) >> 6) & 0x1)
/* default: 0x00, access: R/W */
#define AD9154_BADDIS_S_SET(x)                  (((x) & 0x1) << 7)
#define AD9154_BADDIS_S_GET(x)                  (((x) >> 7) & 0x1)

#define AD9154_ERRORTHRES                       0x47c

#define AD9154_LANEENABLE                       0x47d

#define AD9154_RAMP_ENA                         0x47e

#define AD9154_DIG_TEST0                        0x520
/* default: 0x00, access: R/W */
#define AD9154_DC_TEST_MODE_SET(x)              (((x) & 0x1) << 1)
#define AD9154_DC_TEST_MODE_GET(x)              (((x) >> 1) & 0x1)

#define AD9154_DC_TEST_VALUEI0                  0x521

#define AD9154_DC_TEST_VALUEI1                  0x522

#define AD9154_DC_TEST_VALUEQ0                  0x523

#define AD9154_DC_TEST_VALUEQ1                  0x524
#endif
