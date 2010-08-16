/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _LINUX_SPI_CPCAP_H
#define _LINUX_SPI_CPCAP_H

#include <linux/ioctl.h>

#define CPCAP_DEV_NAME "cpcap"
#define CPCAP_NUM_REG_CPCAP (CPCAP_REG_END - CPCAP_REG_START + 1)

#define CPCAP_IRQ_INT1_INDEX 0
#define CPCAP_IRQ_INT2_INDEX 16
#define CPCAP_IRQ_INT3_INDEX 32
#define CPCAP_IRQ_INT4_INDEX 48
#define CPCAP_IRQ_INT5_INDEX 64

#define CPCAP_WHISPER_MODE_PU 0x00000001
#define CPCAP_WHISPER_ENABLE_UART 0x00000002
#define CPCAP_WHISPER_ACCY_MASK 0xF8000000
#define CPCAP_WHISPER_ACCY_SHFT 27
#define CPCAP_WHISPER_ID_SIZE 16

enum cpcap_regulator_id {
 CPCAP_SW2,
 CPCAP_SW4,
 CPCAP_SW5,
 CPCAP_VCAM,
 CPCAP_VCSI,
 CPCAP_VDAC,
 CPCAP_VDIG,
 CPCAP_VFUSE,
 CPCAP_VHVIO,
 CPCAP_VSDIO,
 CPCAP_VPLL,
 CPCAP_VRF1,
 CPCAP_VRF2,
 CPCAP_VRFREF,
 CPCAP_VWLAN1,
 CPCAP_VWLAN2,
 CPCAP_VSIM,
 CPCAP_VSIMCARD,
 CPCAP_VVIB,
 CPCAP_VUSB,
 CPCAP_VAUDIO,
 CPCAP_NUM_REGULATORS
};

enum cpcap_reg {
 CPCAP_REG_START,

 CPCAP_REG_INT1 = CPCAP_REG_START,
 CPCAP_REG_INT2,
 CPCAP_REG_INT3,
 CPCAP_REG_INT4,
 CPCAP_REG_INTM1,
 CPCAP_REG_INTM2,
 CPCAP_REG_INTM3,
 CPCAP_REG_INTM4,
 CPCAP_REG_INTS1,
 CPCAP_REG_INTS2,
 CPCAP_REG_INTS3,
 CPCAP_REG_INTS4,
 CPCAP_REG_ASSIGN1,
 CPCAP_REG_ASSIGN2,
 CPCAP_REG_ASSIGN3,
 CPCAP_REG_ASSIGN4,
 CPCAP_REG_ASSIGN5,
 CPCAP_REG_ASSIGN6,
 CPCAP_REG_VERSC1,
 CPCAP_REG_VERSC2,

 CPCAP_REG_MI1,
 CPCAP_REG_MIM1,
 CPCAP_REG_MI2,
 CPCAP_REG_MIM2,
 CPCAP_REG_UCC1,
 CPCAP_REG_UCC2,
 CPCAP_REG_PC1,
 CPCAP_REG_PC2,
 CPCAP_REG_BPEOL,
 CPCAP_REG_PGC,
 CPCAP_REG_MT1,
 CPCAP_REG_MT2,
 CPCAP_REG_MT3,
 CPCAP_REG_PF,

 CPCAP_REG_SCC,
 CPCAP_REG_SW1,
 CPCAP_REG_SW2,
 CPCAP_REG_UCTM,
 CPCAP_REG_TOD1,
 CPCAP_REG_TOD2,
 CPCAP_REG_TODA1,
 CPCAP_REG_TODA2,
 CPCAP_REG_DAY,
 CPCAP_REG_DAYA,
 CPCAP_REG_VAL1,
 CPCAP_REG_VAL2,

 CPCAP_REG_SDVSPLL,
 CPCAP_REG_SI2CC1,
 CPCAP_REG_Si2CC2,
 CPCAP_REG_S1C1,
 CPCAP_REG_S1C2,
 CPCAP_REG_S2C1,
 CPCAP_REG_S2C2,
 CPCAP_REG_S3C,
 CPCAP_REG_S4C1,
 CPCAP_REG_S4C2,
 CPCAP_REG_S5C,
 CPCAP_REG_S6C,
 CPCAP_REG_VCAMC,
 CPCAP_REG_VCSIC,
 CPCAP_REG_VDACC,
 CPCAP_REG_VDIGC,
 CPCAP_REG_VFUSEC,
 CPCAP_REG_VHVIOC,
 CPCAP_REG_VSDIOC,
 CPCAP_REG_VPLLC,
 CPCAP_REG_VRF1C,
 CPCAP_REG_VRF2C,
 CPCAP_REG_VRFREFC,
 CPCAP_REG_VWLAN1C,
 CPCAP_REG_VWLAN2C,
 CPCAP_REG_VSIMC,
 CPCAP_REG_VVIBC,
 CPCAP_REG_VUSBC,
 CPCAP_REG_VUSBINT1C,
 CPCAP_REG_VUSBINT2C,
 CPCAP_REG_URT,
 CPCAP_REG_URM1,
 CPCAP_REG_URM2,

 CPCAP_REG_VAUDIOC,
 CPCAP_REG_CC,
 CPCAP_REG_CDI,
 CPCAP_REG_SDAC,
 CPCAP_REG_SDACDI,
 CPCAP_REG_TXI,
 CPCAP_REG_TXMP,
 CPCAP_REG_RXOA,
 CPCAP_REG_RXVC,
 CPCAP_REG_RXCOA,
 CPCAP_REG_RXSDOA,
 CPCAP_REG_RXEPOA,
 CPCAP_REG_RXLL,
 CPCAP_REG_A2LA,
 CPCAP_REG_MIPIS1,
 CPCAP_REG_MIPIS2,
 CPCAP_REG_MIPIS3,
 CPCAP_REG_LVAB,

 CPCAP_REG_CCC1,
 CPCAP_REG_CRM,
 CPCAP_REG_CCCC2,
 CPCAP_REG_CCS1,
 CPCAP_REG_CCS2,
 CPCAP_REG_CCA1,
 CPCAP_REG_CCA2,
 CPCAP_REG_CCM,
 CPCAP_REG_CCO,
 CPCAP_REG_CCI,

 CPCAP_REG_ADCC1,
 CPCAP_REG_ADCC2,
 CPCAP_REG_ADCD0,
 CPCAP_REG_ADCD1,
 CPCAP_REG_ADCD2,
 CPCAP_REG_ADCD3,
 CPCAP_REG_ADCD4,
 CPCAP_REG_ADCD5,
 CPCAP_REG_ADCD6,
 CPCAP_REG_ADCD7,
 CPCAP_REG_ADCAL1,
 CPCAP_REG_ADCAL2,

 CPCAP_REG_USBC1,
 CPCAP_REG_USBC2,
 CPCAP_REG_USBC3,
 CPCAP_REG_UVIDL,
 CPCAP_REG_UVIDH,
 CPCAP_REG_UPIDL,
 CPCAP_REG_UPIDH,
 CPCAP_REG_UFC1,
 CPCAP_REG_UFC2,
 CPCAP_REG_UFC3,
 CPCAP_REG_UIC1,
 CPCAP_REG_UIC2,
 CPCAP_REG_UIC3,
 CPCAP_REG_USBOTG1,
 CPCAP_REG_USBOTG2,
 CPCAP_REG_USBOTG3,
 CPCAP_REG_UIER1,
 CPCAP_REG_UIER2,
 CPCAP_REG_UIER3,
 CPCAP_REG_UIEF1,
 CPCAP_REG_UIEF2,
 CPCAP_REG_UIEF3,
 CPCAP_REG_UIS,
 CPCAP_REG_UIL,
 CPCAP_REG_USBD,
 CPCAP_REG_SCR1,
 CPCAP_REG_SCR2,
 CPCAP_REG_SCR3,
 CPCAP_REG_VMC,
 CPCAP_REG_OWDC,
 CPCAP_REG_GPIO0,
 CPCAP_REG_GPIO1,
 CPCAP_REG_GPIO2,
 CPCAP_REG_GPIO3,
 CPCAP_REG_GPIO4,
 CPCAP_REG_GPIO5,
 CPCAP_REG_GPIO6,

 CPCAP_REG_MDLC,
 CPCAP_REG_KLC,
 CPCAP_REG_ADLC,
 CPCAP_REG_REDC,
 CPCAP_REG_GREENC,
 CPCAP_REG_BLUEC,
 CPCAP_REG_CFC,
 CPCAP_REG_ABC,
 CPCAP_REG_BLEDC,
 CPCAP_REG_CLEDC,

 CPCAP_REG_OW1C,
 CPCAP_REG_OW1D,
 CPCAP_REG_OW1I,
 CPCAP_REG_OW1IE,
 CPCAP_REG_OW1,
 CPCAP_REG_OW2C,
 CPCAP_REG_OW2D,
 CPCAP_REG_OW2I,
 CPCAP_REG_OW2IE,
 CPCAP_REG_OW2,
 CPCAP_REG_OW3C,
 CPCAP_REG_OW3D,
 CPCAP_REG_OW3I,
 CPCAP_REG_OW3IE,
 CPCAP_REG_OW3,
 CPCAP_REG_GCAIC,
 CPCAP_REG_GCAIM,
 CPCAP_REG_LGDIR,
 CPCAP_REG_LGPU,
 CPCAP_REG_LGPIN,
 CPCAP_REG_LGMASK,
 CPCAP_REG_LDEB,
 CPCAP_REG_LGDET,
 CPCAP_REG_LMISC,
 CPCAP_REG_LMACE,

 CPCAP_REG_END = CPCAP_REG_LMACE,

 CPCAP_REG_MAX
 = CPCAP_REG_END,

 CPCAP_REG_SIZE = CPCAP_REG_MAX + 1,
 CPCAP_REG_UNUSED = CPCAP_REG_MAX + 2,
};

enum {
 CPCAP_IOCTL_NUM_TEST__START,
 CPCAP_IOCTL_NUM_TEST_READ_REG,
 CPCAP_IOCTL_NUM_TEST_WRITE_REG,
 CPCAP_IOCTL_NUM_TEST__END,

 CPCAP_IOCTL_NUM_ADC__START,
 CPCAP_IOCTL_NUM_ADC_PHASE,
 CPCAP_IOCTL_NUM_ADC__END,

 CPCAP_IOCTL_NUM_BATT__START,
 CPCAP_IOCTL_NUM_BATT_DISPLAY_UPDATE,
 CPCAP_IOCTL_NUM_BATT_ATOD_ASYNC,
 CPCAP_IOCTL_NUM_BATT_ATOD_SYNC,
 CPCAP_IOCTL_NUM_BATT_ATOD_READ,
 CPCAP_IOCTL_NUM_BATT__END,

 CPCAP_IOCTL_NUM_UC__START,
 CPCAP_IOCTL_NUM_UC_MACRO_START,
 CPCAP_IOCTL_NUM_UC_MACRO_STOP,
 CPCAP_IOCTL_NUM_UC_GET_VENDOR,
 CPCAP_IOCTL_NUM_UC_SET_TURBO_MODE,
 CPCAP_IOCTL_NUM_UC__END,

 CPCAP_IOCTL_NUM_ACCY__START,
 CPCAP_IOCTL_NUM_ACCY_WHISPER,
 CPCAP_IOCTL_NUM_ACCY__END,
};

enum cpcap_irqs {
 CPCAP_IRQ__START,
 CPCAP_IRQ_HSCLK = CPCAP_IRQ_INT1_INDEX,
 CPCAP_IRQ_PRIMAC,
 CPCAP_IRQ_SECMAC,
 CPCAP_IRQ_LOWBPL,
 CPCAP_IRQ_SEC2PRI,
 CPCAP_IRQ_LOWBPH,
 CPCAP_IRQ_EOL,
 CPCAP_IRQ_TS,
 CPCAP_IRQ_ADCDONE,
 CPCAP_IRQ_HS,
 CPCAP_IRQ_MB2,
 CPCAP_IRQ_VBUSOV,
 CPCAP_IRQ_RVRS_CHRG,
 CPCAP_IRQ_CHRG_DET,
 CPCAP_IRQ_IDFLOAT,
 CPCAP_IRQ_IDGND,

 CPCAP_IRQ_SE1 = CPCAP_IRQ_INT2_INDEX,
 CPCAP_IRQ_SESSEND,
 CPCAP_IRQ_SESSVLD,
 CPCAP_IRQ_VBUSVLD,
 CPCAP_IRQ_CHRG_CURR1,
 CPCAP_IRQ_CHRG_CURR2,
 CPCAP_IRQ_RVRS_MODE,
 CPCAP_IRQ_ON,
 CPCAP_IRQ_ON2,
 CPCAP_IRQ_CLK,
 CPCAP_IRQ_1HZ,
 CPCAP_IRQ_PTT,
 CPCAP_IRQ_SE0CONN,
 CPCAP_IRQ_CHRG_SE1B,
 CPCAP_IRQ_UART_ECHO_OVERRUN,
 CPCAP_IRQ_EXTMEMHD,

 CPCAP_IRQ_WARM = CPCAP_IRQ_INT3_INDEX,
 CPCAP_IRQ_SYSRSTR,
 CPCAP_IRQ_SOFTRST,
 CPCAP_IRQ_DIEPWRDWN,
 CPCAP_IRQ_DIETEMPH,
 CPCAP_IRQ_PC,
 CPCAP_IRQ_OFLOWSW,
 CPCAP_IRQ_TODA,
 CPCAP_IRQ_OPT_SEL_DTCH,
 CPCAP_IRQ_OPT_SEL_STATE,
 CPCAP_IRQ_ONEWIRE1,
 CPCAP_IRQ_ONEWIRE2,
 CPCAP_IRQ_ONEWIRE3,
 CPCAP_IRQ_UCRESET,
 CPCAP_IRQ_PWRGOOD,
 CPCAP_IRQ_USBDPLLCLK,

 CPCAP_IRQ_DPI = CPCAP_IRQ_INT4_INDEX,
 CPCAP_IRQ_DMI,
 CPCAP_IRQ_UCBUSY,
 CPCAP_IRQ_GCAI_CURR1,
 CPCAP_IRQ_GCAI_CURR2,
 CPCAP_IRQ_SB_MAX_RETRANSMIT_ERR,
 CPCAP_IRQ_BATTDETB,
 CPCAP_IRQ_PRIHALT,
 CPCAP_IRQ_SECHALT,
 CPCAP_IRQ_CC_CAL,

 CPCAP_IRQ_UC_PRIROMR = CPCAP_IRQ_INT5_INDEX,
 CPCAP_IRQ_UC_PRIRAMW,
 CPCAP_IRQ_UC_PRIRAMR,
 CPCAP_IRQ_UC_USEROFF,
 CPCAP_IRQ_UC_PRIMACRO_4,
 CPCAP_IRQ_UC_PRIMACRO_5,
 CPCAP_IRQ_UC_PRIMACRO_6,
 CPCAP_IRQ_UC_PRIMACRO_7,
 CPCAP_IRQ_UC_PRIMACRO_8,
 CPCAP_IRQ_UC_PRIMACRO_9,
 CPCAP_IRQ_UC_PRIMACRO_10,
 CPCAP_IRQ_UC_PRIMACRO_11,
 CPCAP_IRQ_UC_PRIMACRO_12,
 CPCAP_IRQ_UC_PRIMACRO_13,
 CPCAP_IRQ_UC_PRIMACRO_14,
 CPCAP_IRQ_UC_PRIMACRO_15,
 CPCAP_IRQ__NUM
};

enum cpcap_adc_bank0 {
 CPCAP_ADC_AD0_BATTDETB,
 CPCAP_ADC_BATTP,
 CPCAP_ADC_VBUS,
 CPCAP_ADC_AD3,
 CPCAP_ADC_BPLUS_AD4,
 CPCAP_ADC_CHG_ISENSE,
 CPCAP_ADC_BATTI_ADC,
 CPCAP_ADC_USB_ID,

 CPCAP_ADC_BANK0_NUM,
};

enum cpcap_adc_bank1 {
 CPCAP_ADC_AD8,
 CPCAP_ADC_AD9,
 CPCAP_ADC_LICELL,
 CPCAP_ADC_HV_BATTP,
 CPCAP_ADC_TSX1_AD12,
 CPCAP_ADC_TSX2_AD13,
 CPCAP_ADC_TSY1_AD14,
 CPCAP_ADC_TSY2_AD15,

 CPCAP_ADC_BANK1_NUM,
};

enum cpcap_adc_format {
 CPCAP_ADC_FORMAT_RAW,
 CPCAP_ADC_FORMAT_PHASED,
 CPCAP_ADC_FORMAT_CONVERTED,
};

enum cpcap_adc_timing {
 CPCAP_ADC_TIMING_IMM,
 CPCAP_ADC_TIMING_IN,
 CPCAP_ADC_TIMING_OUT,
};

enum cpcap_adc_type {
 CPCAP_ADC_TYPE_BANK_0,
 CPCAP_ADC_TYPE_BANK_1,
 CPCAP_ADC_TYPE_BATT_PI,
};

enum cpcap_macro {
 CPCAP_MACRO_ROMR,
 CPCAP_MACRO_RAMW,
 CPCAP_MACRO_RAMR,
 CPCAP_MACRO_USEROFF,
 CPCAP_MACRO_4,
 CPCAP_MACRO_5,
 CPCAP_MACRO_6,
 CPCAP_MACRO_7,
 CPCAP_MACRO_8,
 CPCAP_MACRO_9,
 CPCAP_MACRO_10,
 CPCAP_MACRO_11,
 CPCAP_MACRO_12,
 CPCAP_MACRO_13,
 CPCAP_MACRO_14,
 CPCAP_MACRO_15,

 CPCAP_MACRO__END,
};

enum cpcap_vendor {
 CPCAP_VENDOR_ST,
 CPCAP_VENDOR_TI,
};

enum cpcap_revision {
 CPCAP_REVISION_1_0 = 0x08,
 CPCAP_REVISION_1_1 = 0x09,
 CPCAP_REVISION_2_0 = 0x10,
 CPCAP_REVISION_2_1 = 0x11,
};

enum cpcap_batt_usb_model {
 CPCAP_BATT_USB_MODEL_NONE,
 CPCAP_BATT_USB_MODEL_USB,
 CPCAP_BATT_USB_MODEL_FACTORY,
};

struct cpcap_spi_init_data {
 enum cpcap_reg reg;
 unsigned short data;
};

struct cpcap_adc_ato {
 unsigned short ato_in;
 unsigned short atox_in;
 unsigned short adc_ps_factor_in;
 unsigned short atox_ps_factor_in;
 unsigned short ato_out;
 unsigned short atox_out;
 unsigned short adc_ps_factor_out;
 unsigned short atox_ps_factor_out;
};

struct cpcap_batt_data {
 int status;
 int health;
 int present;
 int capacity;
 int batt_volt;
 int batt_temp;
};

struct cpcap_batt_ac_data {
 int online;
};

struct cpcap_batt_usb_data {
 int online;
 int current_now;
 enum cpcap_batt_usb_model model;
};

struct cpcap_device;

struct cpcap_adc_us_request {
 enum cpcap_adc_format format;
 enum cpcap_adc_timing timing;
 enum cpcap_adc_type type;
 int status;
 int result[CPCAP_ADC_BANK0_NUM];
};

struct cpcap_adc_phase {
 signed char offset_batti;
 unsigned char slope_batti;
 signed char offset_chrgi;
 unsigned char slope_chrgi;
 signed char offset_battp;
 unsigned char slope_battp;
 signed char offset_bp;
 unsigned char slope_bp;
 signed char offset_battt;
 unsigned char slope_battt;
 signed char offset_chrgv;
 unsigned char slope_chrgv;
};

struct cpcap_regacc {
 unsigned short reg;
 unsigned short value;
 unsigned short mask;
};

struct cpcap_whisper_request {
 unsigned int cmd;
 char dock_id[CPCAP_WHISPER_ID_SIZE];
};

#define CPCAP_IOCTL_TEST_READ_REG   _IOWR(0, CPCAP_IOCTL_NUM_TEST_READ_REG, struct cpcap_regacc*)

#define CPCAP_IOCTL_TEST_WRITE_REG   _IOWR(0, CPCAP_IOCTL_NUM_TEST_WRITE_REG, struct cpcap_regacc*)

#define CPCAP_IOCTL_ADC_PHASE   _IOWR(0, CPCAP_IOCTL_NUM_ADC_PHASE, struct cpcap_adc_phase*)

#define CPCAP_IOCTL_BATT_DISPLAY_UPDATE   _IOW(0, CPCAP_IOCTL_NUM_BATT_DISPLAY_UPDATE, struct cpcap_batt_data*)

#define CPCAP_IOCTL_BATT_ATOD_ASYNC   _IOW(0, CPCAP_IOCTL_NUM_BATT_ATOD_ASYNC, struct cpcap_adc_us_request*)

#define CPCAP_IOCTL_BATT_ATOD_SYNC   _IOWR(0, CPCAP_IOCTL_NUM_BATT_ATOD_SYNC, struct cpcap_adc_us_request*)

#define CPCAP_IOCTL_BATT_ATOD_READ   _IOWR(0, CPCAP_IOCTL_NUM_BATT_ATOD_READ, struct cpcap_adc_us_request*)

#define CPCAP_IOCTL_UC_MACRO_START   _IOWR(0, CPCAP_IOCTL_NUM_UC_MACRO_START, enum cpcap_macro)

#define CPCAP_IOCTL_UC_MACRO_STOP   _IOWR(0, CPCAP_IOCTL_NUM_UC_MACRO_STOP, enum cpcap_macro)

#define CPCAP_IOCTL_UC_GET_VENDOR   _IOWR(0, CPCAP_IOCTL_NUM_UC_GET_VENDOR, enum cpcap_vendor)

#define CPCAP_IOCTL_UC_SET_TURBO_MODE   _IOW(0, CPCAP_IOCTL_NUM_UC_SET_TURBO_MODE, unsigned short)

#define CPCAP_IOCTL_ACCY_WHISPER   _IOW(0, CPCAP_IOCTL_NUM_ACCY_WHISPER, struct cpcap_whisper_request*)

#endif

