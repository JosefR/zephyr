/*
 * Copyright (c) 2016 Open-RnD Sp. z o.o.
 * Copyright (c) 2016 BayLibre, SAS
 * Copyright (c) 2018 Centaur Analytics, Inc
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_DRIVERS_PINMUX_STM32_PINMUX_STM32L4X_H_
#define ZEPHYR_DRIVERS_PINMUX_STM32_PINMUX_STM32L4X_H_

/**
 * @file Header for STM32L4X pin multiplexing helper
 */

/* Port A */
#define STM32L4X_PINMUX_FUNC_PA0_PWM2_CH1   \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_NOPULL)
#define STM32L4X_PINMUX_FUNC_PA0_UART4_TX   \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)
#define STM32L4X_PINMUX_FUNC_PA1_UART4_RX  \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUPDR_NO_PULL)
#define STM32L4X_PINMUX_FUNC_PA2_USART2_TX  \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32L4X_PINMUX_FUNC_PA3_USART2_RX  \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUPDR_NO_PULL)
#define STM32L4X_PINMUX_FUNC_PA4_SPI1_NSS   \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)
#define STM32L4X_PINMUX_FUNC_PA5_SPI1_SCK   \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)
#define STM32L4X_PINMUX_FUNC_PA6_SPI1_MISO  \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)
#define STM32L4X_PINMUX_FUNC_PA7_SPI1_MOSI  \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)
#define STM32L4X_PINMUX_FUNC_PA9_USART1_TX  \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32L4X_PINMUX_FUNC_PA10_USART1_RX \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUPDR_NO_PULL)
#define STM32L4X_PINMUX_FUNC_PA10_OTG_FS_ID \
	(STM32_PINMUX_ALT_FUNC_10 | STM32_PUSHPULL_PULLUP)
#define STM32L4X_PINMUX_FUNC_PA11_OTG_FS_DM \
	(STM32_PINMUX_ALT_FUNC_10 | STM32_PUSHPULL_NOPULL)
#define STM32L4X_PINMUX_FUNC_PA12_OTG_FS_DP \
	(STM32_PINMUX_ALT_FUNC_10 | STM32_PUSHPULL_NOPULL)
#define STM32L4X_PINMUX_FUNC_PA15_PWM2_CH1  \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_NOPULL)
#define STM32L4X_PINMUX_FUNC_PA15_USART2_RX \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUPDR_NO_PULL)
#define STM32L4X_PINMUX_FUNC_PA11_CAN_RX \
	(STM32_PINMUX_ALT_FUNC_9 | STM32_PUSHPULL_NOPULL)
#define STM32L4X_PINMUX_FUNC_PA12_CAN_TX \
	(STM32_PINMUX_ALT_FUNC_9 | STM32_PUSHPULL_NOPULL)

/* Port B */
#define STM32L4X_PINMUX_FUNC_PB3_SPI1_SCK   \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)
#define STM32L4X_PINMUX_FUNC_PB3_SPI3_SCK   \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_PUSHPULL_NOPULL)
#define STM32L4X_PINMUX_FUNC_PB4_SPI1_MISO  \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)
#define STM32L4X_PINMUX_FUNC_PB4_SPI3_MISO  \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_PUSHPULL_NOPULL)
#define STM32L4X_PINMUX_FUNC_PB5_SPI1_MOSI  \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)
#define STM32L4X_PINMUX_FUNC_PB5_SPI3_MOSI  \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_PUSHPULL_NOPULL)
#define STM32L4X_PINMUX_FUNC_PB6_I2C1_SCL   \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PB6_USART1_TX  \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32L4X_PINMUX_FUNC_PB7_I2C1_SDA   \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PB7_USART1_RX  \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUPDR_NO_PULL)
#define STM32L4X_PINMUX_FUNC_PB8_I2C1_SCL   \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PB9_I2C1_SDA   \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PB10_I2C2_SCL  \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PB10_USART3_TX \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32L4X_PINMUX_FUNC_PB11_I2C2_SDA  \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PB11_USART3_RX \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUPDR_NO_PULL)
#define STM32L4X_PINMUX_FUNC_PB13_I2C2_SCL  \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PB14_PWM15_CH1   \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)
#define STM32L4X_PINMUX_FUNC_PB14_I2C2_SDA  \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)

/* Port C */
#define STM32L4X_PINMUX_FUNC_PC0_I2C3_SCL   \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PC1_I2C3_SDA   \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PC4_USART3_TX  \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32L4X_PINMUX_FUNC_PC5_USART3_RX  \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUPDR_NO_PULL)
#define STM32L4X_PINMUX_FUNC_PC6_USART6_TX  \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)
#define STM32L4X_PINMUX_FUNC_PC7_USART6_RX  \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUPDR_NO_PULL)
#define STM32L4X_PINMUX_FUNC_PC10_SPI3_SCK  \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_PUSHPULL_NOPULL)
#define STM32L4X_PINMUX_FUNC_PC10_USART3_TX \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32L4X_PINMUX_FUNC_PC10_UART4_TX \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)
#define STM32L4X_PINMUX_FUNC_PC11_SPI3_MISO \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_PUSHPULL_NOPULL)
#define STM32L4X_PINMUX_FUNC_PC11_USART3_RX \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUPDR_NO_PULL)
#define STM32L4X_PINMUX_FUNC_PC11_UART4_RX \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUPDR_NO_PULL)
#define STM32L4X_PINMUX_FUNC_PC12_SPI3_MOSI \
	(STM32_PINMUX_ALT_FUNC_6 | STM32_PUSHPULL_NOPULL)

/* Port D */
#define STM32L4X_PINMUX_FUNC_PD5_USART2_TX  \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32L4X_PINMUX_FUNC_PD6_USART2_RX  \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUPDR_NO_PULL)
#define STM32L4X_PINMUX_FUNC_PD8_USART3_TX  \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32L4X_PINMUX_FUNC_PD9_USART3_RX  \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUPDR_NO_PULL)
#define STM32L4X_PINMUX_FUNC_PD12_I2C4_SCL  \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PD13_I2C4_SDA  \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)

/* Port E */
#define STM32L4X_PINMUX_FUNC_PE9_PWM1_CH1  \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_NOPULL)
#define STM32L4X_PINMUX_FUNC_PE11_PWM1_CH2  \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_NOPULL)
#define STM32L4X_PINMUX_FUNC_PE13_PWM1_CH3  \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_NOPULL)

/* Port F */
#define STM32L4X_PINMUX_FUNC_PF1_I2C3_SCL   \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PF0_I2C3_SDA   \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)

/* Port G */
#define STM32L4X_PINMUX_FUNC_PG7_I2C3_SCL   \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PG7_LPUART1_TX   \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)
#define STM32L4X_PINMUX_FUNC_PG8_LPUART1_RX   \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUPDR_NO_PULL)
#define STM32L4X_PINMUX_FUNC_PG8_I2C3_SDA   \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PG9_USART1_TX  \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32L4X_PINMUX_FUNC_PG10_USART1_RX \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUPDR_NO_PULL)
#define STM32L4X_PINMUX_FUNC_PG14_I2C1_SCL  \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32L4X_PINMUX_FUNC_PG13_I2C1_SDA  \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)

#endif /* ZEPHYR_DRIVERS_PINMUX_STM32_PINMUX_STM32L4X_H_ */
