/* Copyright (c) 2011-2018, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef GC5035_OTP_H
#define GC5035_OTP_H

#define SENSOR_OTP_CONTROL_REGISTER				 0x0A00
#define SENSOR_OTP_ERROR_FLAG_REGISTER			 0x6f
#define SENSOR_OTP_PAGE_SELECT_REGISTER			 0xfe
#define SENSOR_OTP_BANK_SELECT_REGISTER			 0x0200
#define SENSOR_OTP_PAGE_START_REGISTER			 0x0200
#define SENSOR_OTP_PAGE_END_REGISTER	    	 0x02ff
#define SENSOR_OTP_TOTAL_PAGE_COUNT				 0x0040
#define SENSOR_OTP_PAGE_SIZE					 0x0040
#define SENSOR_OTP_MODULE_ID_OFFSET				 0x0080
//#define SENSOR_OTP_MODULE_ID_SIZE				 0x0010
#define SENSOR_OTP_SENSOR_ID_OFFSET				 0x0090
//#define SENSOR_OTP_SENSOR_ID_SIZE				 0x0010
#define SENSOR_OTP_SENSOR_MODULE_FW_OFFSET		 0x0010
#define SENSOR_MACRO_OTP_SENSOR_MODULE_FW_OFFSET 0x000E
#define SENSOR_FRONT_OTP_SENSOR_MODULE_FW_OFFSET 0x000E
/*============== Load setfile =====================*/
#if 0
static struct cam_sensor_i2c_reg_array load_sensor_otp_setfile_reg[] = {
	/* Apply Global Settings */

	{0xfc, 0x01},
	{0xf4, 0x40},
	{0xf5, 0xe9},
	{0xf6, 0x14},
	{0xf8, 0x49},
	{0xf9, 0x82},
	{0xfa, 0x00},
	{0xfc, 0x81},
	{0xfe, 0x00},
	{0x36, 0x01},
	{0xd3, 0x87},
	{0x36, 0x00},
	{0x33, 0x00},
	{0xfe, 0x03},
	{0x01, 0xe7},
	{0xf7, 0x01},
	{0xfc, 0x8f},
	{0xfc, 0x8f},
	{0xfc, 0x8e},
	{0xfe, 0x00},
	{0xee, 0x30},
	{0x87, 0x18},
	{0xfe, 0x01},
	{0x8c, 0x90},
	{0xfe, 0x00},
	{0x11, 0x02},
	{0x17, 0x80},
	{0x19, 0x05},
	{0xfe, 0x02},
	{0x30, 0x03},
	{0x31, 0x03},
	{0xfe, 0x00},
	{0xd9, 0xc0},
	{0x1b, 0x20},
	{0x21, 0x48},
	{0x28, 0x22},
	{0x29, 0x58},
	{0x44, 0x20},
	{0x4b, 0x10},
	{0x4e, 0x1a},
	{0x50, 0x11},
	{0x52, 0x33},
	{0x53, 0x44},
	{0x55, 0x10},
	{0x5b, 0x11},
	{0xc5, 0x02},
	{0x8c, 0x1a},
	{0xfe, 0x02},
	{0x33, 0x05},
	{0x32, 0x38},
	{0xfe, 0x00},
	{0x16, 0x0c},
	{0x1a, 0x1a},
	{0x20, 0x10},
	{0x46, 0x83},
	{0x4a, 0x04},
	{0x54, 0x02},
	{0x62, 0x00},
	{0x72, 0x8f},
	{0x73, 0x89},
	{0x7a, 0x05},
	{0x7c, 0x80},
	{0x7d, 0xcc},
	{0x90, 0x00},
	{0xce, 0x18},
	{0xd2, 0x40},
	{0xe6, 0xe0},
	{0xfe, 0x02},
	{0x12, 0x01},
	{0x13, 0x01},
	{0x14, 0x01},
	{0x15, 0x02},
	{0x22, 0x7c},
	{0xfe, 0x00},
	{0xfc, 0x88},
	{0xfe, 0x10},
	{0xfe, 0x00},
	{0xfc, 0x8e},
	{0xfe, 0x00},
	{0xfe, 0x00},
	{0xfe, 0x00},
	{0xfc, 0x88},
	{0xfe, 0x10},
	{0xfe, 0x00},
	{0xfc, 0x8e},
	{0xfe, 0x00},
	{0xb0, 0x6e},
	{0xb1, 0x01},
	{0xb2, 0x00},
	{0xb3, 0x00},
	{0xb4, 0x00},
	{0xb6, 0x00},
	{0xfe, 0x01},
	{0x53, 0x00},
	{0x89, 0x03},
	{0x60, 0x40},

	/* Streaming off */
	{0xfe, 0x00},
	{0x3e, 0x00},

	/* Apply Mode Settings */
	{0xfc, 0x01},
	{0xf4, 0x40},
	{0xf5, 0xe9},
	{0xf6, 0x14},
	{0xf8, 0x49},
	{0xf9, 0x82},
	{0xfa, 0x00},
	{0xfc, 0x81},
	{0xfe, 0x00},
	{0x36, 0x01},
	{0xd3, 0x87},
	{0x36, 0x00},
	{0x33, 0x00},
	{0xfe, 0x03},
	{0x01, 0xe7},
	{0xf7, 0x01},
	{0xfc, 0x8f},
	{0xfc, 0x8f},
	{0xfc, 0x8e},
	{0xfe, 0x00},
	{0xee, 0x30},
	{0x87, 0x18},
	{0xfe, 0x01},
	{0x8c, 0x90},
	{0xfe, 0x00},
	{0x05, 0x02},
	{0x06, 0xd8},
	{0x9d, 0x14},
	{0x09, 0x00},
	{0x0a, 0x04},
	{0x0b, 0x00},
	{0x0c, 0x03},
	{0x0d, 0x07},
	{0x0e, 0xa8},
	{0x0f, 0x0a},
	{0x10, 0x30},
	{0x91, 0x80},
	{0x92, 0x28},
	{0x93, 0x20},
	{0x95, 0xa0},
	{0x96, 0xe0},
	{0xd5, 0xfc},
	{0x97, 0x28},
	{0x1f, 0x11},
	{0xd0, 0xb2},
	{0xfc, 0x88},
	{0xfe, 0x10},
	{0xfe, 0x00},
	{0xfc, 0x8e},
	{0xfe, 0x00},
	{0xfe, 0x00},
	{0xfe, 0x00},
	{0xfc, 0x88},
	{0xfe, 0x10},
	{0xfe, 0x00},
	{0xfc, 0x8e},
	{0xfe, 0x00},
	{0x41, 0x07},
	{0x42, 0xd4},
	{0x03, 0x07},
	{0x04, 0x08},
	{0xfe, 0x01},
	{0x42, 0x21},
	{0x49, 0x03},
	{0x4a, 0xff},
	{0x4b, 0xc0},
	{0x55, 0x00},
	{0x41, 0x28},
	{0x4c, 0x00},
	{0x4d, 0x00},
	{0x4e, 0x3c},
	{0x44, 0x08},
	{0x48, 0x02},
	{0x91, 0x00},
	{0x92, 0x0e},
	{0x93, 0x00},
	{0x94, 0x10},
	{0x95, 0x07},
	{0x96, 0x8c},
	{0x97, 0x0a},
	{0x98, 0x10},
	{0xfe, 0x03},
	{0x02, 0x57},
	{0x03, 0xb7},
	{0x15, 0x14},
	{0x18, 0x0f},
	{0x21, 0x22},
	{0x22, 0x06},
	{0x23, 0x48},
	{0x24, 0x12},
	{0x25, 0x28},
	{0x26, 0x08},
	{0x29, 0x06},
	{0x2a, 0x58},
	{0x2b, 0x08},
	{0xfe, 0x01},
	{0x8c, 0x10},

	/* Streaming on */
	{0xfe, 0x00},
	{0x3e, 0x91},
};
#else
static struct cam_sensor_i2c_reg_array load_sensor_otp_setfile_reg[] = {
	/* Apply System Settings */

	{0xfc, 0x01},
	{0xf4, 0x40},
	{0xf5, 0xe9},
	{0xf6, 0x14},
	{0xf8, 0x49},
	{0xf9, 0x82},
	{0xfa, 0x00},
	{0xfc, 0x81},
	{0xfe, 0x00},
	{0x36, 0x01},
	{0xd3, 0x87},
	{0x36, 0x00},
	{0x33, 0x00},
	{0xfe, 0x03},
	{0x01, 0xe7},
	{0xf7, 0x01},
	{0xfc, 0x8f},
	{0xfc, 0x8f},
	{0xfc, 0x8e},
	{0xfe, 0x00},
	{0xee, 0x30},
	{0x87, 0x18},
	{0xfe, 0x01},
	{0x8c, 0x90},
	{0xfe, 0x00},
};
#endif

static struct cam_sensor_i2c_reg_array init_write_sensor_otp_reg[] = {
	{0xfa, 0x10},
	{0xfe, 0x02},
	{0x67, 0xc3},
	{0x59, 0x3f},
	{0x61, 0x02},
	{0x62, 0x00},
	{0x63, 0x30},
	{0x64, 0x00},
	{0x65, 0x05},
	{0x55, 0xb0},
	{0x56, 0xb0},
	{0x57, 0xc8},
	{0x58, 0x88},
	{0x5b, 0x83},
	{0x5c, 0x33},
	{0x66, 0x13},
};

static struct cam_sensor_i2c_reg_array finish_write_sensor_otp_reg[] = {

};

static struct cam_sensor_i2c_reg_array init_read_sensor_otp_reg[] = {
	{0xfa, 0x10},
	{0xf5, 0xe9},
	{0xfe, 0x02},
	{0x67, 0xc0},
	{0x59, 0x3f},
	{0x55, 0x80},
	{0x65, 0x80},
	{0x66, 0x03},
};

static struct cam_sensor_i2c_reg_array finish_read_sensor_otp_reg[] = {

};

#endif /* GC5035_OTP_H */
