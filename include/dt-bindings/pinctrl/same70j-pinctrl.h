/*
 * Autogenerated file
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <dt-bindings/pinctrl/atmel_sam_pinctrl.h>

/*
 * WARNING: this variant has package exception.
 *
 *   Read datasheet topics related to I/O Multiplexing and Considerations or
 *   Peripheral Signal Multiplexing on I/O Lines for more information.
 */

/* pa3_gpio */
#define PA3_GPIO \
	SAM_PINMUX(a, 3, gpio, gpio)

/* pa3a_twi0_twd */
#define PA3A_TWI0_TWD \
	SAM_PINMUX(a, 3, a, periph)

/* pa3b_lon_col1 */
#define PA3B_LON_COL1 \
	SAM_PINMUX(a, 3, b, periph)

/* pa3c_pmc_pck2 */
#define PA3C_PMC_PCK2 \
	SAM_PINMUX(a, 3, c, periph)

/* pa3x_pio_piodc0 */
#define PA3X_PIO_PIODC0 \
	SAM_PINMUX(a, 3, x, extra)

/* pa4_gpio */
#define PA4_GPIO \
	SAM_PINMUX(a, 4, gpio, gpio)

/* pa4a_twi0_twck */
#define PA4A_TWI0_TWCK \
	SAM_PINMUX(a, 4, a, periph)

/* pa4b_tc0_tclk0 */
#define PA4B_TC0_TCLK0 \
	SAM_PINMUX(a, 4, b, periph)

/* pa4c_uart1_txd */
#define PA4C_UART1_TXD \
	SAM_PINMUX(a, 4, c, periph)

/* pa4x_pio_piodc1 */
#define PA4X_PIO_PIODC1 \
	SAM_PINMUX(a, 4, x, extra)

/* pa4x_supc_wkup3 */
#define PA4X_SUPC_WKUP3 \
	SAM_PINMUX(a, 4, x, extra)

/* pa5_gpio */
#define PA5_GPIO \
	SAM_PINMUX(a, 5, gpio, gpio)

/* pa5a_pwmc1_pwml3 */
#define PA5A_PWMC1_PWML3 \
	SAM_PINMUX(a, 5, a, periph)

/* pa5b_isi_d4 */
#define PA5B_ISI_D4 \
	SAM_PINMUX(a, 5, b, periph)

/* pa5c_uart1_rxd */
#define PA5C_UART1_RXD \
	SAM_PINMUX(a, 5, c, periph)

/* pa5x_pio_piodc2 */
#define PA5X_PIO_PIODC2 \
	SAM_PINMUX(a, 5, x, extra)

/* pa5x_supc_wkup4 */
#define PA5X_SUPC_WKUP4 \
	SAM_PINMUX(a, 5, x, extra)

/* pa6_gpio */
#define PA6_GPIO \
	SAM_PINMUX(a, 6, gpio, gpio)

/* pa6b_pmc_pck0 */
#define PA6B_PMC_PCK0 \
	SAM_PINMUX(a, 6, b, periph)

/* pa6c_uart1_txd */
#define PA6C_UART1_TXD \
	SAM_PINMUX(a, 6, c, periph)

/* pa7_gpio */
#define PA7_GPIO \
	SAM_PINMUX(a, 7, gpio, gpio)

/* pa7b_pwmc0_pwmh3 */
#define PA7B_PWMC0_PWMH3 \
	SAM_PINMUX(a, 7, b, periph)

/* pa7s_supc_xin32 */
#define PA7S_SUPC_XIN32 \
	SAM_PINMUX(a, 7, s, system)

/* pa8_gpio */
#define PA8_GPIO \
	SAM_PINMUX(a, 8, gpio, gpio)

/* pa8a_pwmc1_pwmh3 */
#define PA8A_PWMC1_PWMH3 \
	SAM_PINMUX(a, 8, a, periph)

/* pa8b_afe0_adtrg */
#define PA8B_AFE0_ADTRG \
	SAM_PINMUX(a, 8, b, periph)

/* pa8s_supc_xout32 */
#define PA8S_SUPC_XOUT32 \
	SAM_PINMUX(a, 8, s, system)

/* pa9_gpio */
#define PA9_GPIO \
	SAM_PINMUX(a, 9, gpio, gpio)

/* pa9a_uart0_rxd */
#define PA9A_UART0_RXD \
	SAM_PINMUX(a, 9, a, periph)

/* pa9b_isi_d3 */
#define PA9B_ISI_D3 \
	SAM_PINMUX(a, 9, b, periph)

/* pa9c_pwmc0_pwmfi0 */
#define PA9C_PWMC0_PWMFI0 \
	SAM_PINMUX(a, 9, c, periph)

/* pa9x_pio_piodc3 */
#define PA9X_PIO_PIODC3 \
	SAM_PINMUX(a, 9, x, extra)

/* pa9x_supc_wkup6 */
#define PA9X_SUPC_WKUP6 \
	SAM_PINMUX(a, 9, x, extra)

/* pa10_gpio */
#define PA10_GPIO \
	SAM_PINMUX(a, 10, gpio, gpio)

/* pa10a_uart0_txd */
#define PA10A_UART0_TXD \
	SAM_PINMUX(a, 10, a, periph)

/* pa10b_pwmc0_pwmextrg0 */
#define PA10B_PWMC0_PWMEXTRG0 \
	SAM_PINMUX(a, 10, b, periph)

/* pa10c_ssc_rd */
#define PA10C_SSC_RD \
	SAM_PINMUX(a, 10, c, periph)

/* pa10x_pio_piodc4 */
#define PA10X_PIO_PIODC4 \
	SAM_PINMUX(a, 10, x, extra)

/* pa11_gpio */
#define PA11_GPIO \
	SAM_PINMUX(a, 11, gpio, gpio)

/* pa11a_qspi_qcs */
#define PA11A_QSPI_QCS \
	SAM_PINMUX(a, 11, a, periph)

/* pa11b_pwmc0_pwmh0 */
#define PA11B_PWMC0_PWMH0 \
	SAM_PINMUX(a, 11, b, periph)

/* pa11c_pwmc1_pwml0 */
#define PA11C_PWMC1_PWML0 \
	SAM_PINMUX(a, 11, c, periph)

/* pa11x_pio_piodc5 */
#define PA11X_PIO_PIODC5 \
	SAM_PINMUX(a, 11, x, extra)

/* pa11x_supc_wkup7 */
#define PA11X_SUPC_WKUP7 \
	SAM_PINMUX(a, 11, x, extra)

/* pa12_gpio */
#define PA12_GPIO \
	SAM_PINMUX(a, 12, gpio, gpio)

/* pa12a_qspi_qio1 */
#define PA12A_QSPI_QIO1 \
	SAM_PINMUX(a, 12, a, periph)

/* pa12b_pwmc0_pwmh1 */
#define PA12B_PWMC0_PWMH1 \
	SAM_PINMUX(a, 12, b, periph)

/* pa12c_pwmc1_pwmh0 */
#define PA12C_PWMC1_PWMH0 \
	SAM_PINMUX(a, 12, c, periph)

/* pa12x_pio_piodc6 */
#define PA12X_PIO_PIODC6 \
	SAM_PINMUX(a, 12, x, extra)

/* pa13_gpio */
#define PA13_GPIO \
	SAM_PINMUX(a, 13, gpio, gpio)

/* pa13a_qspi_qio0 */
#define PA13A_QSPI_QIO0 \
	SAM_PINMUX(a, 13, a, periph)

/* pa13b_pwmc0_pwmh2 */
#define PA13B_PWMC0_PWMH2 \
	SAM_PINMUX(a, 13, b, periph)

/* pa13c_pwmc1_pwml1 */
#define PA13C_PWMC1_PWML1 \
	SAM_PINMUX(a, 13, c, periph)

/* pa13x_pio_piodc7 */
#define PA13X_PIO_PIODC7 \
	SAM_PINMUX(a, 13, x, extra)

/* pa14_gpio */
#define PA14_GPIO \
	SAM_PINMUX(a, 14, gpio, gpio)

/* pa14a_qspi_qsck */
#define PA14A_QSPI_QSCK \
	SAM_PINMUX(a, 14, a, periph)

/* pa14b_pwmc0_pwmh3 */
#define PA14B_PWMC0_PWMH3 \
	SAM_PINMUX(a, 14, b, periph)

/* pa14c_pwmc1_pwmh1 */
#define PA14C_PWMC1_PWMH1 \
	SAM_PINMUX(a, 14, c, periph)

/* pa14x_pio_pioden1 */
#define PA14X_PIO_PIODEN1 \
	SAM_PINMUX(a, 14, x, extra)

/* pa14x_supc_wkup8 */
#define PA14X_SUPC_WKUP8 \
	SAM_PINMUX(a, 14, x, extra)

/* pa21_gpio */
#define PA21_GPIO \
	SAM_PINMUX(a, 21, gpio, gpio)

/* pa21a_usart1_rxd */
#define PA21A_USART1_RXD \
	SAM_PINMUX(a, 21, a, periph)

/* pa21b_pmc_pck1 */
#define PA21B_PMC_PCK1 \
	SAM_PINMUX(a, 21, b, periph)

/* pa21c_pwmc1_pwmfi0 */
#define PA21C_PWMC1_PWMFI0 \
	SAM_PINMUX(a, 21, c, periph)

/* pa21x_afe1_ad1 */
#define PA21X_AFE1_AD1 \
	SAM_PINMUX(a, 21, x, extra)

/* pa21x_pio_piodcen2 */
#define PA21X_PIO_PIODCEN2 \
	SAM_PINMUX(a, 21, x, extra)

/* pa22_gpio */
#define PA22_GPIO \
	SAM_PINMUX(a, 22, gpio, gpio)

/* pa22a_ssc_rk */
#define PA22A_SSC_RK \
	SAM_PINMUX(a, 22, a, periph)

/* pa22b_pwmc0_pwmextrg1 */
#define PA22B_PWMC0_PWMEXTRG1 \
	SAM_PINMUX(a, 22, b, periph)

/* pa22x_pio_piodcclk */
#define PA22X_PIO_PIODCCLK \
	SAM_PINMUX(a, 22, x, extra)

/* pa24_gpio */
#define PA24_GPIO \
	SAM_PINMUX(a, 24, gpio, gpio)

/* pa24a_usart1_rts */
#define PA24A_USART1_RTS \
	SAM_PINMUX(a, 24, a, periph)

/* pa24b_pwmc0_pwmh1 */
#define PA24B_PWMC0_PWMH1 \
	SAM_PINMUX(a, 24, b, periph)

/* pa24d_isi_pck */
#define PA24D_ISI_PCK \
	SAM_PINMUX(a, 24, d, periph)

/* pa27_gpio */
#define PA27_GPIO \
	SAM_PINMUX(a, 27, gpio, gpio)

/* pa27a_usart1_dtr */
#define PA27A_USART1_DTR \
	SAM_PINMUX(a, 27, a, periph)

/* pa27b_tc0_tiob2 */
#define PA27B_TC0_TIOB2 \
	SAM_PINMUX(a, 27, b, periph)

/* pa27c_hsmci_mcda3 */
#define PA27C_HSMCI_MCDA3 \
	SAM_PINMUX(a, 27, c, periph)

/* pa27d_isi_d7 */
#define PA27D_ISI_D7 \
	SAM_PINMUX(a, 27, d, periph)

/* pa30_gpio */
#define PA30_GPIO \
	SAM_PINMUX(a, 30, gpio, gpio)

/* pa30a_pwmc0_pwml2 */
#define PA30A_PWMC0_PWML2 \
	SAM_PINMUX(a, 30, a, periph)

/* pa30b_pwmc1_pwmextrg0 */
#define PA30B_PWMC1_PWMEXTRG0 \
	SAM_PINMUX(a, 30, b, periph)

/* pa30c_hsmci_mcda0 */
#define PA30C_HSMCI_MCDA0 \
	SAM_PINMUX(a, 30, c, periph)

/* pa30d_i2sc0_do */
#define PA30D_I2SC0_DO \
	SAM_PINMUX(a, 30, d, periph)

/* pa30x_supc_wkup11 */
#define PA30X_SUPC_WKUP11 \
	SAM_PINMUX(a, 30, x, extra)

/* pb0_gpio */
#define PB0_GPIO \
	SAM_PINMUX(b, 0, gpio, gpio)

/* pb0a_pwmc0_pwmh0 */
#define PB0A_PWMC0_PWMH0 \
	SAM_PINMUX(b, 0, a, periph)

/* pb0c_usart0_rxd */
#define PB0C_USART0_RXD \
	SAM_PINMUX(b, 0, c, periph)

/* pb0d_ssc_tf */
#define PB0D_SSC_TF \
	SAM_PINMUX(b, 0, d, periph)

/* pb0x_afe0_ad10 */
#define PB0X_AFE0_AD10 \
	SAM_PINMUX(b, 0, x, extra)

/* pb0x_rtc_out0 */
#define PB0X_RTC_OUT0 \
	SAM_PINMUX(b, 0, x, extra)

/* pb1_gpio */
#define PB1_GPIO \
	SAM_PINMUX(b, 1, gpio, gpio)

/* pb1a_pwmc0_pwmh1 */
#define PB1A_PWMC0_PWMH1 \
	SAM_PINMUX(b, 1, a, periph)

/* pb1b_gmac_gtsucomp */
#define PB1B_GMAC_GTSUCOMP \
	SAM_PINMUX(b, 1, b, periph)

/* pb1c_usart0_txd */
#define PB1C_USART0_TXD \
	SAM_PINMUX(b, 1, c, periph)

/* pb1d_ssc_tk */
#define PB1D_SSC_TK \
	SAM_PINMUX(b, 1, d, periph)

/* pb1x_afe1_ad0 */
#define PB1X_AFE1_AD0 \
	SAM_PINMUX(b, 1, x, extra)

/* pb1x_rtc_out1 */
#define PB1X_RTC_OUT1 \
	SAM_PINMUX(b, 1, x, extra)

/* pb2_gpio */
#define PB2_GPIO \
	SAM_PINMUX(b, 2, gpio, gpio)

/* pb2a_can0_tx */
#define PB2A_CAN0_TX \
	SAM_PINMUX(b, 2, a, periph)

/* pb2c_usart0_cts */
#define PB2C_USART0_CTS \
	SAM_PINMUX(b, 2, c, periph)

/* pb2d_spi0_npcs0 */
#define PB2D_SPI0_NPCS0 \
	SAM_PINMUX(b, 2, d, periph)

/* pb2x_afe0_ad5 */
#define PB2X_AFE0_AD5 \
	SAM_PINMUX(b, 2, x, extra)

/* pb3_gpio */
#define PB3_GPIO \
	SAM_PINMUX(b, 3, gpio, gpio)

/* pb3a_can0_rx */
#define PB3A_CAN0_RX \
	SAM_PINMUX(b, 3, a, periph)

/* pb3b_pmc_pck2 */
#define PB3B_PMC_PCK2 \
	SAM_PINMUX(b, 3, b, periph)

/* pb3c_usart0_rts */
#define PB3C_USART0_RTS \
	SAM_PINMUX(b, 3, c, periph)

/* pb3d_isi_d2 */
#define PB3D_ISI_D2 \
	SAM_PINMUX(b, 3, d, periph)

/* pb3x_afe0_ad2 */
#define PB3X_AFE0_AD2 \
	SAM_PINMUX(b, 3, x, extra)

/* pb3x_supc_wkup12 */
#define PB3X_SUPC_WKUP12 \
	SAM_PINMUX(b, 3, x, extra)

/* pb4_gpio */
#define PB4_GPIO \
	SAM_PINMUX(b, 4, gpio, gpio)

/* pb4a_twi1_twd */
#define PB4A_TWI1_TWD \
	SAM_PINMUX(b, 4, a, periph)

/* pb4b_pwmc0_pwmh2 */
#define PB4B_PWMC0_PWMH2 \
	SAM_PINMUX(b, 4, b, periph)

/* pb4d_usart1_txd */
#define PB4D_USART1_TXD \
	SAM_PINMUX(b, 4, d, periph)

/* pb4s_jtag_tdi */
#define PB4S_JTAG_TDI \
	SAM_PINMUX(b, 4, s, system)

/* pb5_gpio */
#define PB5_GPIO \
	SAM_PINMUX(b, 5, gpio, gpio)

/* pb5a_twi1_twck */
#define PB5A_TWI1_TWCK \
	SAM_PINMUX(b, 5, a, periph)

/* pb5b_pwmc0_pwml0 */
#define PB5B_PWMC0_PWML0 \
	SAM_PINMUX(b, 5, b, periph)

/* pb5d_ssc_td */
#define PB5D_SSC_TD \
	SAM_PINMUX(b, 5, d, periph)

/* pb5x_supc_wkup13 */
#define PB5X_SUPC_WKUP13 \
	SAM_PINMUX(b, 5, x, extra)

/* pb5s_jtag_tdo */
#define PB5S_JTAG_TDO \
	SAM_PINMUX(b, 5, s, system)

/* pb5s_swd_traceswo */
#define PB5S_SWD_TRACESWO \
	SAM_PINMUX(b, 5, s, system)

/* pb6_gpio */
#define PB6_GPIO \
	SAM_PINMUX(b, 6, gpio, gpio)

/* pb6s_jtag_tms */
#define PB6S_JTAG_TMS \
	SAM_PINMUX(b, 6, s, system)

/* pb6s_swd_swdio */
#define PB6S_SWD_SWDIO \
	SAM_PINMUX(b, 6, s, system)

/* pb7_gpio */
#define PB7_GPIO \
	SAM_PINMUX(b, 7, gpio, gpio)

/* pb7s_jtag_tck */
#define PB7S_JTAG_TCK \
	SAM_PINMUX(b, 7, s, system)

/* pb7s_swd_swclk */
#define PB7S_SWD_SWCLK \
	SAM_PINMUX(b, 7, s, system)

/* pb8_gpio */
#define PB8_GPIO \
	SAM_PINMUX(b, 8, gpio, gpio)

/* pb8s_supc_xout */
#define PB8S_SUPC_XOUT \
	SAM_PINMUX(b, 8, s, system)

/* pb9_gpio */
#define PB9_GPIO \
	SAM_PINMUX(b, 9, gpio, gpio)

/* pb9s_supc_xin */
#define PB9S_SUPC_XIN \
	SAM_PINMUX(b, 9, s, system)

/* pb12_gpio */
#define PB12_GPIO \
	SAM_PINMUX(b, 12, gpio, gpio)

/* pb12a_pwmc0_pwml1 */
#define PB12A_PWMC0_PWML1 \
	SAM_PINMUX(b, 12, a, periph)

/* pb12b_gmac_gtsucomp */
#define PB12B_GMAC_GTSUCOMP \
	SAM_PINMUX(b, 12, b, periph)

/* pb12d_pcm_pck0 */
#define PB12D_PCM_PCK0 \
	SAM_PINMUX(b, 12, d, periph)

/* pb12s_flash_erase */
#define PB12S_FLASH_ERASE \
	SAM_PINMUX(b, 12, s, system)

/* pd0_gpio */
#define PD0_GPIO \
	SAM_PINMUX(d, 0, gpio, gpio)

/* pd0a_gmac_gtxck */
#define PD0A_GMAC_GTXCK \
	SAM_PINMUX(d, 0, a, periph)

/* pd0b_pwmc1_pwml0 */
#define PD0B_PWMC1_PWML0 \
	SAM_PINMUX(d, 0, b, periph)

/* pd0c_spi1_npcs1 */
#define PD0C_SPI1_NPCS1 \
	SAM_PINMUX(d, 0, c, periph)

/* pd0d_usart0_dcd */
#define PD0D_USART0_DCD \
	SAM_PINMUX(d, 0, d, periph)

/* pd0x_dacc_dac1 */
#define PD0X_DACC_DAC1 \
	SAM_PINMUX(d, 0, x, extra)

/* pd1_gpio */
#define PD1_GPIO \
	SAM_PINMUX(d, 1, gpio, gpio)

/* pd1a_gmac_gtxen */
#define PD1A_GMAC_GTXEN \
	SAM_PINMUX(d, 1, a, periph)

/* pd1b_pwmc1_pwmh0 */
#define PD1B_PWMC1_PWMH0 \
	SAM_PINMUX(d, 1, b, periph)

/* pd1c_spi1_npcs2 */
#define PD1C_SPI1_NPCS2 \
	SAM_PINMUX(d, 1, c, periph)

/* pd1d_usart0_dtr */
#define PD1D_USART0_DTR \
	SAM_PINMUX(d, 1, d, periph)

/* pd2_gpio */
#define PD2_GPIO \
	SAM_PINMUX(d, 2, gpio, gpio)

/* pd2a_gmac_gtx0 */
#define PD2A_GMAC_GTX0 \
	SAM_PINMUX(d, 2, a, periph)

/* pd2b_pwmc1_pwml1 */
#define PD2B_PWMC1_PWML1 \
	SAM_PINMUX(d, 2, b, periph)

/* pd2c_spi1_npcs3 */
#define PD2C_SPI1_NPCS3 \
	SAM_PINMUX(d, 2, c, periph)

/* pd2d_usart0_dsr */
#define PD2D_USART0_DSR \
	SAM_PINMUX(d, 2, d, periph)

/* pd3_gpio */
#define PD3_GPIO \
	SAM_PINMUX(d, 3, gpio, gpio)

/* pd3a_gmac_gtx1 */
#define PD3A_GMAC_GTX1 \
	SAM_PINMUX(d, 3, a, periph)

/* pd3b_pwmc1_pwmh1 */
#define PD3B_PWMC1_PWMH1 \
	SAM_PINMUX(d, 3, b, periph)

/* pd3c_uart4_txd */
#define PD3C_UART4_TXD \
	SAM_PINMUX(d, 3, c, periph)

/* pd3d_usart0_ri */
#define PD3D_USART0_RI \
	SAM_PINMUX(d, 3, d, periph)

/* pd4_gpio */
#define PD4_GPIO \
	SAM_PINMUX(d, 4, gpio, gpio)

/* pd4a_gmac_grxdv */
#define PD4A_GMAC_GRXDV \
	SAM_PINMUX(d, 4, a, periph)

/* pd4b_pwmc1_pwml2 */
#define PD4B_PWMC1_PWML2 \
	SAM_PINMUX(d, 4, b, periph)

/* pd4c_trace_d0 */
#define PD4C_TRACE_D0 \
	SAM_PINMUX(d, 4, c, periph)

/* pd4d_usart2_dcd */
#define PD4D_USART2_DCD \
	SAM_PINMUX(d, 4, d, periph)

/* pd5_gpio */
#define PD5_GPIO \
	SAM_PINMUX(d, 5, gpio, gpio)

/* pd5a_gmac_grx0 */
#define PD5A_GMAC_GRX0 \
	SAM_PINMUX(d, 5, a, periph)

/* pd5b_pwmc1_pwmh2 */
#define PD5B_PWMC1_PWMH2 \
	SAM_PINMUX(d, 5, b, periph)

/* pd5c_trace_d1 */
#define PD5C_TRACE_D1 \
	SAM_PINMUX(d, 5, c, periph)

/* pd5d_usart2_dtr */
#define PD5D_USART2_DTR \
	SAM_PINMUX(d, 5, d, periph)

/* pd6_gpio */
#define PD6_GPIO \
	SAM_PINMUX(d, 6, gpio, gpio)

/* pd6a_gmac_grx1 */
#define PD6A_GMAC_GRX1 \
	SAM_PINMUX(d, 6, a, periph)

/* pd6b_pwmc1_pwml3 */
#define PD6B_PWMC1_PWML3 \
	SAM_PINMUX(d, 6, b, periph)

/* pd6c_trace_d2 */
#define PD6C_TRACE_D2 \
	SAM_PINMUX(d, 6, c, periph)

/* pd6d_usart2_dsr */
#define PD6D_USART2_DSR \
	SAM_PINMUX(d, 6, d, periph)

/* pd7_gpio */
#define PD7_GPIO \
	SAM_PINMUX(d, 7, gpio, gpio)

/* pd7a_gmac_grxer */
#define PD7A_GMAC_GRXER \
	SAM_PINMUX(d, 7, a, periph)

/* pd7b_pwmc1_pwmh3 */
#define PD7B_PWMC1_PWMH3 \
	SAM_PINMUX(d, 7, b, periph)

/* pd7c_trace_d3 */
#define PD7C_TRACE_D3 \
	SAM_PINMUX(d, 7, c, periph)

/* pd7d_usart2_ri */
#define PD7D_USART2_RI \
	SAM_PINMUX(d, 7, d, periph)

/* pd8_gpio */
#define PD8_GPIO \
	SAM_PINMUX(d, 8, gpio, gpio)

/* pd8a_gmac_gmdc */
#define PD8A_GMAC_GMDC \
	SAM_PINMUX(d, 8, a, periph)

/* pd8b_pwmc0_pwmfi1 */
#define PD8B_PWMC0_PWMFI1 \
	SAM_PINMUX(d, 8, b, periph)

/* pd8d_trace_clk */
#define PD8D_TRACE_CLK \
	SAM_PINMUX(d, 8, d, periph)

/* pd9_gpio */
#define PD9_GPIO \
	SAM_PINMUX(d, 9, gpio, gpio)

/* pd9a_gmac_gmdio */
#define PD9A_GMAC_GMDIO \
	SAM_PINMUX(d, 9, a, periph)

/* pd9b_pwmc0_pwmfi2 */
#define PD9B_PWMC0_PWMFI2 \
	SAM_PINMUX(d, 9, b, periph)

/* pd9c_afe1_adtrg */
#define PD9C_AFE1_ADTRG \
	SAM_PINMUX(d, 9, c, periph)

/* pd10_gpio */
#define PD10_GPIO \
	SAM_PINMUX(d, 10, gpio, gpio)

/* pd10a_gmac_gcrs */
#define PD10A_GMAC_GCRS \
	SAM_PINMUX(d, 10, a, periph)

/* pd10b_pwmc0_pwml0 */
#define PD10B_PWMC0_PWML0 \
	SAM_PINMUX(d, 10, b, periph)

/* pd10c_ssc_td */
#define PD10C_SSC_TD \
	SAM_PINMUX(d, 10, c, periph)

/* pd11_gpio */
#define PD11_GPIO \
	SAM_PINMUX(d, 11, gpio, gpio)

/* pd11a_gmac_grx2 */
#define PD11A_GMAC_GRX2 \
	SAM_PINMUX(d, 11, a, periph)

/* pd11b_pwmc0_pwmh0 */
#define PD11B_PWMC0_PWMH0 \
	SAM_PINMUX(d, 11, b, periph)

/* pd11c_gmac_gtsucomp */
#define PD11C_GMAC_GTSUCOMP \
	SAM_PINMUX(d, 11, c, periph)

/* pd11d_isi_d5 */
#define PD11D_ISI_D5 \
	SAM_PINMUX(d, 11, d, periph)

/* pd12_gpio */
#define PD12_GPIO \
	SAM_PINMUX(d, 12, gpio, gpio)

/* pd12a_gmac_grx3 */
#define PD12A_GMAC_GRX3 \
	SAM_PINMUX(d, 12, a, periph)

/* pd12b_can1_tx */
#define PD12B_CAN1_TX \
	SAM_PINMUX(d, 12, b, periph)

/* pd12c_spi0_npcs2 */
#define PD12C_SPI0_NPCS2 \
	SAM_PINMUX(d, 12, c, periph)

/* pd12d_isi_d6 */
#define PD12D_ISI_D6 \
	SAM_PINMUX(d, 12, d, periph)

/* pd21_gpio */
#define PD21_GPIO \
	SAM_PINMUX(d, 21, gpio, gpio)

/* pd21a_pwmc0_pwmh1 */
#define PD21A_PWMC0_PWMH1 \
	SAM_PINMUX(d, 21, a, periph)

/* pd21b_spi0_mosi */
#define PD21B_SPI0_MOSI \
	SAM_PINMUX(d, 21, b, periph)

/* pd21c_tc3_tioa11 */
#define PD21C_TC3_TIOA11 \
	SAM_PINMUX(d, 21, c, periph)

/* pd21d_isi_d1 */
#define PD21D_ISI_D1 \
	SAM_PINMUX(d, 21, d, periph)

/* pd22_gpio */
#define PD22_GPIO \
	SAM_PINMUX(d, 22, gpio, gpio)

/* pd22a_pwmc0_pwmh2 */
#define PD22A_PWMC0_PWMH2 \
	SAM_PINMUX(d, 22, a, periph)

/* pd22b_spi0_spck */
#define PD22B_SPI0_SPCK \
	SAM_PINMUX(d, 22, b, periph)

/* pd22c_tc3_tiob11 */
#define PD22C_TC3_TIOB11 \
	SAM_PINMUX(d, 22, c, periph)

/* pd22d_isi_d0 */
#define PD22D_ISI_D0 \
	SAM_PINMUX(d, 22, d, periph)

/* pd24_gpio */
#define PD24_GPIO \
	SAM_PINMUX(d, 24, gpio, gpio)

/* pd24a_pwmc0_pwml0 */
#define PD24A_PWMC0_PWML0 \
	SAM_PINMUX(d, 24, a, periph)

/* pd24b_ssc_rf */
#define PD24B_SSC_RF \
	SAM_PINMUX(d, 24, b, periph)

/* pd24c_tc3_tclk11 */
#define PD24C_TC3_TCLK11 \
	SAM_PINMUX(d, 24, c, periph)

/* pd24d_isi_hsync */
#define PD24D_ISI_HSYNC \
	SAM_PINMUX(d, 24, d, periph)

/* pd25_gpio */
#define PD25_GPIO \
	SAM_PINMUX(d, 25, gpio, gpio)

/* pd25a_pwmc0_pwml1 */
#define PD25A_PWMC0_PWML1 \
	SAM_PINMUX(d, 25, a, periph)

/* pd25b_spi0_npcs1 */
#define PD25B_SPI0_NPCS1 \
	SAM_PINMUX(d, 25, b, periph)

/* pd25c_uart2_rxd */
#define PD25C_UART2_RXD \
	SAM_PINMUX(d, 25, c, periph)

/* pd25d_isi_vsync */
#define PD25D_ISI_VSYNC \
	SAM_PINMUX(d, 25, d, periph)

/* pd26_gpio */
#define PD26_GPIO \
	SAM_PINMUX(d, 26, gpio, gpio)

/* pd26a_pwmc0_pwml2 */
#define PD26A_PWMC0_PWML2 \
	SAM_PINMUX(d, 26, a, periph)

/* pd26b_ssc_td */
#define PD26B_SSC_TD \
	SAM_PINMUX(d, 26, b, periph)

/* pd26c_uart2_txd */
#define PD26C_UART2_TXD \
	SAM_PINMUX(d, 26, c, periph)

/* pd26d_uart1_txd */
#define PD26D_UART1_TXD \
	SAM_PINMUX(d, 26, d, periph)

/* pd31_gpio */
#define PD31_GPIO \
	SAM_PINMUX(d, 31, gpio, gpio)

/* pd31a_qspi_qio3 */
#define PD31A_QSPI_QIO3 \
	SAM_PINMUX(d, 31, a, periph)

/* pd31b_uart3_txd */
#define PD31B_UART3_TXD \
	SAM_PINMUX(d, 31, b, periph)

/* pd31c_pmc_pck2 */
#define PD31C_PMC_PCK2 \
	SAM_PINMUX(d, 31, c, periph)

/* pd31d_isi_d11 */
#define PD31D_ISI_D11 \
	SAM_PINMUX(d, 31, d, periph)
