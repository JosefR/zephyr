/*
 * Copyright (c) 2016 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _SENSOR_HDC1080
#define _SENSOR_HDC1080

#include <kernel.h>

#define HDC1080_I2C_ADDRESS	0x40

#define HDC1080_REG_TEMP	0x0
#define HDC1080_REG_HUMIDITY	0x1
#define HDC1080_REG_MANUFID	0xFE
#define HDC1080_REG_DEVICEID	0xFF

#define HDC1080_MANUFID		0x5449
#define HDC1080_DEVICEID	0x1050

struct hdc1080_data {
	struct device *i2c;
	u16_t t_sample;
	u16_t rh_sample;
    struct k_timer read_timer;
};

#endif
