/*
 * Copyright (c) 2017 Google LLC.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _ATMEL_SAMD_SOC_PINMAP_H_
#define _ATMEL_SAMD_SOC_PINMAP_H_

/* SERCOM in UART mode */

/* SERCOM0 on RX=PA11, TX=PA10 */
#define PIN_UART_SAM0_SERCOM0_RX {0, 11, PORT_PMUX_PMUXE_C_Val}
#define PIN_UART_SAM0_SERCOM0_TX {0, 10, PORT_PMUX_PMUXE_C_Val}

/* SERCOM1 on RX=PA19, TX=PA18 */
#define PIN_UART_SAM0_SERCOM1_RX {0, 19, PORT_PMUX_PMUXE_C_Val}
#define PIN_UART_SAM0_SERCOM1_TX {0, 18, PORT_PMUX_PMUXE_C_Val}

/* SERCOM2 on RX=PA15, TX=PA14 */
#define PIN_UART_SAM0_SERCOM2_RX {0, 15, PORT_PMUX_PMUXE_C_Val}
#define PIN_UART_SAM0_SERCOM2_TX {0, 14, PORT_PMUX_PMUXE_C_Val}

/* SERCOM3 on RX=PA21, TX=PA20 */
#define PIN_UART_SAM0_SERCOM3_RX {0, 21, PORT_PMUX_PMUXE_D_Val}
#define PIN_UART_SAM0_SERCOM3_TX {0, 20, PORT_PMUX_PMUXE_D_Val}

/* SERCOM4 on RX=PB11, TX=PB10 */
#define PIN_UART_SAM0_SERCOM4_RX {0, 21, PORT_PMUX_PMUXE_C_Val}
#define PIN_UART_SAM0_SERCOM4_TX {0, 20, PORT_PMUX_PMUXE_C_Val}

/* SERCOM5 on RX=PB23, TX=PB22 */
#define PIN_UART_SAM0_SERCOM5_RX {1, 23, PORT_PMUX_PMUXE_D_Val}
#define PIN_UART_SAM0_SERCOM5_TX {1, 22, PORT_PMUX_PMUXE_D_Val}

/* SPI SERCOM0 on MISO=PA08 MOSI=PA10 SCK=PA11 */
#define PIN_SPI_SAM0_SERCOM0_MISO {0, 8, PORT_PMUX_PMUXE_C_Val}
#define PIN_SPI_SAM0_SERCOM0_MOSI {0, 10, PORT_PMUX_PMUXE_C_Val}
#define PIN_SPI_SAM0_SERCOM0_SCK {0, 11, PORT_PMUX_PMUXE_C_Val}

/* SPI SERCOM1 on MISO=PA16 MOSI=PA18 SCK=PA19 */
#define PIN_SPI_SAM0_SERCOM1_MISO {0, 16, PORT_PMUX_PMUXE_C_Val}
#define PIN_SPI_SAM0_SERCOM1_MOSI {0, 18, PORT_PMUX_PMUXE_C_Val}
#define PIN_SPI_SAM0_SERCOM1_SCK {0, 19, PORT_PMUX_PMUXE_C_Val}

/* SPI SERCOM2 on MISO=PA12 MOSI=PA14 SCK=PA15 */
#define PIN_SPI_SAM0_SERCOM2_MISO {0, 12, PORT_PMUX_PMUXE_C_Val}
#define PIN_SPI_SAM0_SERCOM2_MOSI {0, 14, PORT_PMUX_PMUXE_C_Val}
#define PIN_SPI_SAM0_SERCOM2_SCK {0, 15, PORT_PMUX_PMUXE_C_Val}

/* SPI SERCOM3 on MISO=PA22 MOSI=PA20 SCK=PA21 */
#define PIN_SPI_SAM0_SERCOM3_MISO {0, 22, PORT_PMUX_PMUXE_D_Val}
#define PIN_SPI_SAM0_SERCOM3_MOSI {0, 20, PORT_PMUX_PMUXE_D_Val}
#define PIN_SPI_SAM0_SERCOM3_SCK {0, 21, PORT_PMUX_PMUXE_C_Val}

/* SPI SERCOM4 on MISO=PB12, MOSI=PB10, SCK=PB11 */
#define PIN_SPI_SAM0_SERCOM4_MISO {1, 12, PORT_PMUX_PMUXE_C_Val}
#define PIN_SPI_SAM0_SERCOM4_MOSI {1, 10, PORT_PMUX_PMUXE_D_Val}
#define PIN_SPI_SAM0_SERCOM4_SCK {1, 11, PORT_PMUX_PMUXE_D_Val}

/* SPI SERCOM5 on MISO=PB16 MOSI=PB22 SCK=PB23 */
#define PIN_SPI_SAM0_SERCOM5_MISO {1, 16, PORT_PMUX_PMUXE_C_Val}
#define PIN_SPI_SAM0_SERCOM5_MOSI {1, 22, PORT_PMUX_PMUXE_D_Val}
#define PIN_SPI_SAM0_SERCOM5_SCK {1, 23, PORT_PMUX_PMUXE_D_Val}

#endif /* _ATMEL_SAMD_SOC_PINMAP_H_ */
