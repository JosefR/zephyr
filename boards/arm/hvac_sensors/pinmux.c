/*
 * Copyright (c) 2018 Josef Raschen
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <kernel.h>
#include <device.h>
#include <init.h>
#include <pinmux.h>
#include <sys_io.h>
#include "pinmux/pinmux.h"

#include <pinmux/stm32/pinmux_stm32.h>

/* pin assignments for HVAC Sensors board */
static const struct pin_config pinconf[] = {
#ifdef CONFIG_UART_1
	{STM32_PIN_PA9, STM32F0_PINMUX_FUNC_PA9_USART1_TX},
	{STM32_PIN_PA10, STM32F0_PINMUX_FUNC_PA10_USART1_RX},
#endif	/* CONFIG_UART_1 */
#ifdef CONFIG_I2C_2
	{STM32_PIN_PB10, STM32F0_PINMUX_FUNC_PB10_I2C2_SCL},
	{STM32_PIN_PB11, STM32F0_PINMUX_FUNC_PB11_I2C2_SDA},
#endif /* CONFIG_I2C_2 */
#ifdef CONFIG_CAN_1
    {STM32_PIN_PB8, STM32F0_PINMUX_FUNC_PB8_CAN_RX},
    {STM32_PIN_PB9, STM32F0_PINMUX_FUNC_PB9_CAN_TX}
#else
#error CAN1 not defined
#endif /* CONFIG_CAN_1 */
};

static int pinmux_stm32_init(struct device *port)
{
	ARG_UNUSED(port);

	stm32_setup_pins(pinconf, ARRAY_SIZE(pinconf));

	return 0;
}

SYS_INIT(pinmux_stm32_init, PRE_KERNEL_1,
	 CONFIG_PINMUX_STM32_DEVICE_INITIALIZATION_PRIORITY);
