/*
 * Copyright (c) 2016 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <device.h>
#include <i2c.h>
#include <gpio.h>
#include <kernel.h>
#include <sensor.h>
#include <misc/util.h>
#include <misc/__assert.h>

#include "hdc1080.h"

static int hdc1080_sample_fetch(struct device *dev, enum sensor_channel chan)
{
	struct hdc1080_data *drv_data = dev->driver_data;
	u8_t buf[4];

	__ASSERT_NO_MSG(chan == SENSOR_CHAN_ALL);

	buf[0] = HDC1080_REG_TEMP;
	if (i2c_write(drv_data->i2c, buf, 1, HDC1080_I2C_ADDRESS) < 0) {
		SYS_LOG_DBG("Failed to write address pointer");
		return -EIO;
	}

//	k_sem_take(&drv_data->data_sem, K_FOREVER);
    k_sleep(10);

	if (i2c_read(drv_data->i2c, buf, 4, HDC1080_I2C_ADDRESS) < 0) {
		SYS_LOG_DBG("Failed to read sample data");
		return -EIO;
	}

	drv_data->t_sample = (buf[0] << 8) + buf[1];
	drv_data->rh_sample = (buf[2] << 8) + buf[3];

	return 0;
}


static int hdc1080_channel_get(struct device *dev,
			       enum sensor_channel chan,
			       struct sensor_value *val)
{
	struct hdc1080_data *drv_data = dev->driver_data;
	u64_t tmp;

	/*
	 * See datasheet "Temperature Register" and "Humidity
	 * Register" sections for more details on processing
	 * sample data.
	 */
	if (chan == SENSOR_CHAN_AMBIENT_TEMP) {
		/* val = -40 + 165 * sample / 2^16 */
		tmp = 165 * (u64_t)drv_data->t_sample;
		val->val1 = (s32_t)(tmp >> 16) - 40;
		val->val2 = (1000000 * (tmp & 0xFFFF)) >> 16;
	} else if (chan == SENSOR_CHAN_HUMIDITY) {
		/* val = 100 * sample / 2^16 */
		u32_t tmp2;
		tmp2 = 100 * (u32_t)drv_data->rh_sample;
		val->val1 = tmp2 >> 16;
		/* x * 1000000 / 65536 == x * 15625 / 1024 */
		val->val2 = (15625 * (tmp2 & 0xFFFF)) >> 10;
	} else {
		return -ENOTSUP;
	}

	return 0;
}

static const struct sensor_driver_api hdc1080_driver_api = {
	.sample_fetch = hdc1080_sample_fetch,
	.channel_get = hdc1080_channel_get,
};

static u16_t read16(struct device *dev, u8_t a, u8_t d)
{
	u8_t buf[2];
	if (i2c_burst_read(dev, a, d, (u8_t *)buf, 2) < 0) {
		SYS_LOG_ERR("Error reading register.");
	}
	return (buf[0] << 8 | buf[1]);
}

static int hdc1080_init(struct device *dev)
{
	struct hdc1080_data *drv_data = dev->driver_data;

	drv_data->i2c = device_get_binding(CONFIG_HDC1080_I2C_MASTER_DEV_NAME);

	if (drv_data->i2c == NULL) {
		SYS_LOG_DBG("Failed to get pointer to %s device!",
			    CONFIG_HDC1080_I2C_MASTER_DEV_NAME);
		return -EINVAL;
	}

	if (read16(drv_data->i2c, HDC1080_I2C_ADDRESS, HDC1000_MANUFID)
	    != 0x5449) {
		SYS_LOG_ERR("Failed to get correct manufacturer ID");
		return -EINVAL;
	}
	if (read16(drv_data->i2c, HDC1080_I2C_ADDRESS, HDC1000_DEVICEID)
	    != 0x1000) {
		SYS_LOG_ERR("Failed to get correct device ID");
		return -EINVAL;
	}

//	k_sem_init(&drv_data->data_sem, 0, UINT_MAX);

	return 0;
}

static struct hdc1080_data hdc1080_data;

DEVICE_AND_API_INIT(hdc1080, CONFIG_HDC1080_NAME, hdc1080_init, &hdc1080_data,
		    NULL, POST_KERNEL, CONFIG_SENSOR_INIT_PRIORITY,
		    &hdc1080_driver_api);
