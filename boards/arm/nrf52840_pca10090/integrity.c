/*
 * Copyright (c) 2018 Nordic Semiconductor ASA.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr.h>

/* The following asserts ensure compile-time consistency between the macros
 * used in board.c and the ones defined in Kconfig.
 */

BUILD_ASSERT_MSG(IS_ENABLED(CONFIG_BOARD_PCA10090_INTERFACE0_MCU) ||
		 IS_ENABLED(CONFIG_BOARD_PCA10090_INTERFACE0_ARDUINO),
		 "Invalid MCU interface 0 routing");
BUILD_ASSERT_MSG(IS_ENABLED(CONFIG_BOARD_PCA10090_INTERFACE1_MCU) ||
		 IS_ENABLED(CONFIG_BOARD_PCA10090_INTERFACE1_TRACE),
		 "Invalid MCU interface 1 routing");
BUILD_ASSERT_MSG(IS_ENABLED(CONFIG_BOARD_PCA10090_INTERFACE2_MCU) ||
		 IS_ENABLED(CONFIG_BOARD_PCA10090_INTERFACE2_COEX),
		 "Invalid MCU interface 2 routing");
BUILD_ASSERT_MSG(IS_ENABLED(CONFIG_BOARD_PCA10090_UART0_VCOM) ||
		 IS_ENABLED(CONFIG_BOARD_PCA10090_UART0_ARDUINO),
		 "Invalid nRF9160 UART0 routing");
BUILD_ASSERT_MSG(IS_ENABLED(CONFIG_BOARD_PCA10090_UART1_VCOM) ||
		 IS_ENABLED(CONFIG_BOARD_PCA10090_UART1_ARDUINO),
		 "Invalid nRF9160 UART1 routing");
BUILD_ASSERT_MSG(IS_ENABLED(CONFIG_BOARD_PCA10090_LED0_PHY) ||
		 IS_ENABLED(CONFIG_BOARD_PCA10090_LED0_ARDUINO),
		 "Invalid LED 1 routing");
BUILD_ASSERT_MSG(IS_ENABLED(CONFIG_BOARD_PCA10090_LED1_PHY) ||
		 IS_ENABLED(CONFIG_BOARD_PCA10090_LED1_ARDUINO),
		 "Invalid LED 2 routing");
BUILD_ASSERT_MSG(IS_ENABLED(CONFIG_BOARD_PCA10090_LED2_PHY) ||
		 IS_ENABLED(CONFIG_BOARD_PCA10090_LED2_ARDUINO),
		 "Invalid LED 3 routing");
BUILD_ASSERT_MSG(IS_ENABLED(CONFIG_BOARD_PCA10090_LED3_PHY) ||
		 IS_ENABLED(CONFIG_BOARD_PCA10090_LED3_ARDUINO),
		 "Invalid LED 4 routing");
BUILD_ASSERT_MSG(IS_ENABLED(CONFIG_BOARD_PCA10090_BUTTON0_PHY) ||
		 IS_ENABLED(CONFIG_BOARD_PCA10090_BUTTON0_ARDUINO),
		 "Invalid button 1 routing");
BUILD_ASSERT_MSG(IS_ENABLED(CONFIG_BOARD_PCA10090_BUTTON1_PHY) ||
		 IS_ENABLED(CONFIG_BOARD_PCA10090_BUTTON1_ARDUINO),
		 "Invalid button 2 routing");
BUILD_ASSERT_MSG(IS_ENABLED(CONFIG_BOARD_PCA10090_SWITCH0_PHY) ||
		 IS_ENABLED(CONFIG_BOARD_PCA10090_SWITCH0_ARDUINO),
		 "Invalid switch 1 routing");
BUILD_ASSERT_MSG(IS_ENABLED(CONFIG_BOARD_PCA10090_SWITCH1_PHY) ||
		 IS_ENABLED(CONFIG_BOARD_PCA10090_SWITCH1_ARDUINO),
		 "Invalid switch 2 routing");
