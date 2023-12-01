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

/* pa0_gpio */
#define PA0_GPIO \
	SAM_PINMUX(a, 0, gpio, gpio)

/* pa0a_pwm_pwmh0 */
#define PA0A_PWM_PWMH0 \
	SAM_PINMUX(a, 0, a, periph)

/* pa0b_tc0_tioa0 */
#define PA0B_TC0_TIOA0 \
	SAM_PINMUX(a, 0, b, periph)

/* pa0x_supc_wkup0 */
#define PA0X_SUPC_WKUP0 \
	SAM_PINMUX(a, 0, wkup0, wakeup)

/* pa1_gpio */
#define PA1_GPIO \
	SAM_PINMUX(a, 1, gpio, gpio)

/* pa1a_pwm_pwmh1 */
#define PA1A_PWM_PWMH1 \
	SAM_PINMUX(a, 1, a, periph)

/* pa1b_tc0_tiob0 */
#define PA1B_TC0_TIOB0 \
	SAM_PINMUX(a, 1, b, periph)

/* pa1x_supc_wkup1 */
#define PA1X_SUPC_WKUP1 \
	SAM_PINMUX(a, 1, wkup1, wakeup)

/* pa2_gpio */
#define PA2_GPIO \
	SAM_PINMUX(a, 2, gpio, gpio)

/* pa2a_pwm_pwmh2 */
#define PA2A_PWM_PWMH2 \
	SAM_PINMUX(a, 2, a, periph)

/* pa2b_usart0_sck */
#define PA2B_USART0_SCK \
	SAM_PINMUX(a, 2, b, periph)

/* pa2c_dacc_datrg */
#define PA2C_DACC_DATRG \
	SAM_PINMUX(a, 2, c, periph)

/* pa2x_supc_wkup2 */
#define PA2X_SUPC_WKUP2 \
	SAM_PINMUX(a, 2, wkup2, wakeup)

/* pa3_gpio */
#define PA3_GPIO \
	SAM_PINMUX(a, 3, gpio, gpio)

/* pa3a_twi0_twd */
#define PA3A_TWI0_TWD \
	SAM_PINMUX(a, 3, a, periph)

/* pa3b_spi_npcs3 */
#define PA3B_SPI_NPCS3 \
	SAM_PINMUX(a, 3, b, periph)

/* pa4_gpio */
#define PA4_GPIO \
	SAM_PINMUX(a, 4, gpio, gpio)

/* pa4a_twi0_twck */
#define PA4A_TWI0_TWCK \
	SAM_PINMUX(a, 4, a, periph)

/* pa4b_tc0_tclk0 */
#define PA4B_TC0_TCLK0 \
	SAM_PINMUX(a, 4, b, periph)

/* pa4x_supc_wkup3 */
#define PA4X_SUPC_WKUP3 \
	SAM_PINMUX(a, 4, wkup3, wakeup)

/* pa5_gpio */
#define PA5_GPIO \
	SAM_PINMUX(a, 5, gpio, gpio)

/* pa5a_usart0_rxd */
#define PA5A_USART0_RXD \
	SAM_PINMUX(a, 5, a, periph)

/* pa5b_spi_npcs3 */
#define PA5B_SPI_NPCS3 \
	SAM_PINMUX(a, 5, b, periph)

/* pa5x_supc_wkup4 */
#define PA5X_SUPC_WKUP4 \
	SAM_PINMUX(a, 5, wkup4, wakeup)

/* pa6_gpio */
#define PA6_GPIO \
	SAM_PINMUX(a, 6, gpio, gpio)

/* pa6a_usart0_txd */
#define PA6A_USART0_TXD \
	SAM_PINMUX(a, 6, a, periph)

/* pa6b_pmc_pck0 */
#define PA6B_PMC_PCK0 \
	SAM_PINMUX(a, 6, b, periph)

/* pa7_gpio */
#define PA7_GPIO \
	SAM_PINMUX(a, 7, gpio, gpio)

/* pa7a_usart0_rts */
#define PA7A_USART0_RTS \
	SAM_PINMUX(a, 7, a, periph)

/* pa7b_pwm_pwmh3 */
#define PA7B_PWM_PWMH3 \
	SAM_PINMUX(a, 7, b, periph)

/* pa7s_supc_xin32 */
#define PA7S_SUPC_XIN32 \
	SAM_PINMUX(a, 7, s, system)

/* pa8_gpio */
#define PA8_GPIO \
	SAM_PINMUX(a, 8, gpio, gpio)

/* pa8a_usart0_cts */
#define PA8A_USART0_CTS \
	SAM_PINMUX(a, 8, a, periph)

/* pa8b_adc_adtrg */
#define PA8B_ADC_ADTRG \
	SAM_PINMUX(a, 8, b, periph)

/* pa8s_supc_xout32 */
#define PA8S_SUPC_XOUT32 \
	SAM_PINMUX(a, 8, s, system)

/* pa8x_supc_wkup5 */
#define PA8X_SUPC_WKUP5 \
	SAM_PINMUX(a, 8, wkup5, wakeup)

/* pa9_gpio */
#define PA9_GPIO \
	SAM_PINMUX(a, 9, gpio, gpio)

/* pa9a_uart0_rxd */
#define PA9A_UART0_RXD \
	SAM_PINMUX(a, 9, a, periph)

/* pa9b_spi_npcs1 */
#define PA9B_SPI_NPCS1 \
	SAM_PINMUX(a, 9, b, periph)

/* pa9c_pwm_pwmfi0 */
#define PA9C_PWM_PWMFI0 \
	SAM_PINMUX(a, 9, c, periph)

/* pa9x_supc_wkup6 */
#define PA9X_SUPC_WKUP6 \
	SAM_PINMUX(a, 9, wkup6, wakeup)

/* pa10_gpio */
#define PA10_GPIO \
	SAM_PINMUX(a, 10, gpio, gpio)

/* pa10a_uart0_txd */
#define PA10A_UART0_TXD \
	SAM_PINMUX(a, 10, a, periph)

/* pa10b_spi_npcs2 */
#define PA10B_SPI_NPCS2 \
	SAM_PINMUX(a, 10, b, periph)

/* pa10c_pwm_pwmfi1 */
#define PA10C_PWM_PWMFI1 \
	SAM_PINMUX(a, 10, c, periph)

/* pa11_gpio */
#define PA11_GPIO \
	SAM_PINMUX(a, 11, gpio, gpio)

/* pa11a_spi_npcs0 */
#define PA11A_SPI_NPCS0 \
	SAM_PINMUX(a, 11, a, periph)

/* pa11b_pwm_pwmh0 */
#define PA11B_PWM_PWMH0 \
	SAM_PINMUX(a, 11, b, periph)

/* pa11x_supc_wkup7 */
#define PA11X_SUPC_WKUP7 \
	SAM_PINMUX(a, 11, wkup7, wakeup)

/* pa12_gpio */
#define PA12_GPIO \
	SAM_PINMUX(a, 12, gpio, gpio)

/* pa12a_spi_miso */
#define PA12A_SPI_MISO \
	SAM_PINMUX(a, 12, a, periph)

/* pa12b_pwm_pwmh1 */
#define PA12B_PWM_PWMH1 \
	SAM_PINMUX(a, 12, b, periph)

/* pa13_gpio */
#define PA13_GPIO \
	SAM_PINMUX(a, 13, gpio, gpio)

/* pa13a_spi_mosi */
#define PA13A_SPI_MOSI \
	SAM_PINMUX(a, 13, a, periph)

/* pa13b_pwm_pwmh2 */
#define PA13B_PWM_PWMH2 \
	SAM_PINMUX(a, 13, b, periph)

/* pa14_gpio */
#define PA14_GPIO \
	SAM_PINMUX(a, 14, gpio, gpio)

/* pa14a_spi_spck */
#define PA14A_SPI_SPCK \
	SAM_PINMUX(a, 14, a, periph)

/* pa14b_pwm_pwmh3 */
#define PA14B_PWM_PWMH3 \
	SAM_PINMUX(a, 14, b, periph)

/* pa14x_supc_wkup8 */
#define PA14X_SUPC_WKUP8 \
	SAM_PINMUX(a, 14, wkup8, wakeup)

/* pa15_gpio */
#define PA15_GPIO \
	SAM_PINMUX(a, 15, gpio, gpio)

/* pa15a_ssc_tf */
#define PA15A_SSC_TF \
	SAM_PINMUX(a, 15, a, periph)

/* pa15b_tc0_tioa1 */
#define PA15B_TC0_TIOA1 \
	SAM_PINMUX(a, 15, b, periph)

/* pa15c_pwm_pwml3 */
#define PA15C_PWM_PWML3 \
	SAM_PINMUX(a, 15, c, periph)

/* pa15x_pio_piodcen1 */
#define PA15X_PIO_PIODCEN1 \
	SAM_PINMUX(a, 15, x, extra)

/* pa15x_supc_wkup14 */
#define PA15X_SUPC_WKUP14 \
	SAM_PINMUX(a, 15, wkup14, wakeup)

/* pa16_gpio */
#define PA16_GPIO \
	SAM_PINMUX(a, 16, gpio, gpio)

/* pa16a_ssc_tk */
#define PA16A_SSC_TK \
	SAM_PINMUX(a, 16, a, periph)

/* pa16b_tc0_tiob1 */
#define PA16B_TC0_TIOB1 \
	SAM_PINMUX(a, 16, b, periph)

/* pa16c_pwm_pwml2 */
#define PA16C_PWM_PWML2 \
	SAM_PINMUX(a, 16, c, periph)

/* pa16x_pio_piodcen2 */
#define PA16X_PIO_PIODCEN2 \
	SAM_PINMUX(a, 16, x, extra)

/* pa16x_supc_wkup15 */
#define PA16X_SUPC_WKUP15 \
	SAM_PINMUX(a, 16, wkup15, wakeup)

/* pa17_gpio */
#define PA17_GPIO \
	SAM_PINMUX(a, 17, gpio, gpio)

/* pa17a_ssc_td */
#define PA17A_SSC_TD \
	SAM_PINMUX(a, 17, a, periph)

/* pa17b_pmc_pck1 */
#define PA17B_PMC_PCK1 \
	SAM_PINMUX(a, 17, b, periph)

/* pa17c_pwm_pwmh3 */
#define PA17C_PWM_PWMH3 \
	SAM_PINMUX(a, 17, c, periph)

/* pa17x_adc_ad0 */
#define PA17X_ADC_AD0 \
	SAM_PINMUX(a, 17, x, extra)

/* pa18_gpio */
#define PA18_GPIO \
	SAM_PINMUX(a, 18, gpio, gpio)

/* pa18a_ssc_rd */
#define PA18A_SSC_RD \
	SAM_PINMUX(a, 18, a, periph)

/* pa18b_pmc_pck2 */
#define PA18B_PMC_PCK2 \
	SAM_PINMUX(a, 18, b, periph)

/* pa18d_pwm_pwmfi2 */
#define PA18D_PWM_PWMFI2 \
	SAM_PINMUX(a, 18, d, periph)

/* pa18x_adc_ad1 */
#define PA18X_ADC_AD1 \
	SAM_PINMUX(a, 18, x, extra)

/* pa19_gpio */
#define PA19_GPIO \
	SAM_PINMUX(a, 19, gpio, gpio)

/* pa19a_ssc_rk */
#define PA19A_SSC_RK \
	SAM_PINMUX(a, 19, a, periph)

/* pa19b_pwm_pwml0 */
#define PA19B_PWM_PWML0 \
	SAM_PINMUX(a, 19, b, periph)

/* pa19x_adc_ad2 */
#define PA19X_ADC_AD2 \
	SAM_PINMUX(a, 19, x, extra)

/* pa19x_supc_wkup9 */
#define PA19X_SUPC_WKUP9 \
	SAM_PINMUX(a, 19, wkup9, wakeup)

/* pa20_gpio */
#define PA20_GPIO \
	SAM_PINMUX(a, 20, gpio, gpio)

/* pa20a_ssc_rf */
#define PA20A_SSC_RF \
	SAM_PINMUX(a, 20, a, periph)

/* pa20b_pwm_pwml1 */
#define PA20B_PWM_PWML1 \
	SAM_PINMUX(a, 20, b, periph)

/* pa20x_adc_ad3 */
#define PA20X_ADC_AD3 \
	SAM_PINMUX(a, 20, x, extra)

/* pa20x_supc_wkup10 */
#define PA20X_SUPC_WKUP10 \
	SAM_PINMUX(a, 20, wkup10, wakeup)

/* pb0_gpio */
#define PB0_GPIO \
	SAM_PINMUX(b, 0, gpio, gpio)

/* pb0a_pwm_pwmh0 */
#define PB0A_PWM_PWMH0 \
	SAM_PINMUX(b, 0, a, periph)

/* pb0x_adc_ad4 */
#define PB0X_ADC_AD4 \
	SAM_PINMUX(b, 0, x, extra)

/* pb0x_rtc_out0 */
#define PB0X_RTC_OUT0 \
	SAM_PINMUX(b, 0, x, extra)

/* pb1_gpio */
#define PB1_GPIO \
	SAM_PINMUX(b, 1, gpio, gpio)

/* pb1a_pwm_pwmh1 */
#define PB1A_PWM_PWMH1 \
	SAM_PINMUX(b, 1, a, periph)

/* pb1x_adc_ad5 */
#define PB1X_ADC_AD5 \
	SAM_PINMUX(b, 1, x, extra)

/* pb1x_rtc_out1 */
#define PB1X_RTC_OUT1 \
	SAM_PINMUX(b, 1, x, extra)

/* pb2_gpio */
#define PB2_GPIO \
	SAM_PINMUX(b, 2, gpio, gpio)

/* pb2a_uart1_rxd */
#define PB2A_UART1_RXD \
	SAM_PINMUX(b, 2, a, periph)

/* pb2b_spi_npcs2 */
#define PB2B_SPI_NPCS2 \
	SAM_PINMUX(b, 2, b, periph)

/* pb2x_adc_ad6 */
#define PB2X_ADC_AD6 \
	SAM_PINMUX(b, 2, x, extra)

/* pb2x_supc_wkup12 */
#define PB2X_SUPC_WKUP12 \
	SAM_PINMUX(b, 2, wkup12, wakeup)

/* pb3_gpio */
#define PB3_GPIO \
	SAM_PINMUX(b, 3, gpio, gpio)

/* pb3a_uart1_txd */
#define PB3A_UART1_TXD \
	SAM_PINMUX(b, 3, a, periph)

/* pb3b_pmc_pck2 */
#define PB3B_PMC_PCK2 \
	SAM_PINMUX(b, 3, b, periph)

/* pb3x_adc_ad7 */
#define PB3X_ADC_AD7 \
	SAM_PINMUX(b, 3, x, extra)

/* pb4_gpio */
#define PB4_GPIO \
	SAM_PINMUX(b, 4, gpio, gpio)

/* pb4a_twi1_twd */
#define PB4A_TWI1_TWD \
	SAM_PINMUX(b, 4, a, periph)

/* pb4b_pwm_pwmh2 */
#define PB4B_PWM_PWMH2 \
	SAM_PINMUX(b, 4, b, periph)

/* pb4s_jtag_tdi */
#define PB4S_JTAG_TDI \
	SAM_PINMUX(b, 4, s, system)

/* pb5_gpio */
#define PB5_GPIO \
	SAM_PINMUX(b, 5, gpio, gpio)

/* pb5a_twi1_twck */
#define PB5A_TWI1_TWCK \
	SAM_PINMUX(b, 5, a, periph)

/* pb5b_pwm_pwml0 */
#define PB5B_PWM_PWML0 \
	SAM_PINMUX(b, 5, b, periph)

/* pb5s_jtag_tdo */
#define PB5S_JTAG_TDO \
	SAM_PINMUX(b, 5, s, system)

/* pb5s_swd_traceswo */
#define PB5S_SWD_TRACESWO \
	SAM_PINMUX(b, 5, s, system)

/* pb5x_supc_wkup13 */
#define PB5X_SUPC_WKUP13 \
	SAM_PINMUX(b, 5, wkup13, wakeup)

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

/* pb10_gpio */
#define PB10_GPIO \
	SAM_PINMUX(b, 10, gpio, gpio)

/* pb10s_udp_ddm */
#define PB10S_UDP_DDM \
	SAM_PINMUX(b, 10, s, system)

/* pb11_gpio */
#define PB11_GPIO \
	SAM_PINMUX(b, 11, gpio, gpio)

/* pb11s_udp_ddp */
#define PB11S_UDP_DDP \
	SAM_PINMUX(b, 11, s, system)

/* pb12_gpio */
#define PB12_GPIO \
	SAM_PINMUX(b, 12, gpio, gpio)

/* pb12a_pwm_pwml1 */
#define PB12A_PWM_PWML1 \
	SAM_PINMUX(b, 12, a, periph)

/* pb12s_flash_erase */
#define PB12S_FLASH_ERASE \
	SAM_PINMUX(b, 12, s, system)
