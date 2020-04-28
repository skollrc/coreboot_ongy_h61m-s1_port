/*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License as
* published by the Free Software Foundation; version 2 of
* the License.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*/

#include <device/azalia_device.h>

const u32 cim_verb_data[] = {
	0x10ec0662,	/* Codec Vendor / Device ID: Realtek*/
	0x10ec0000,	/* Subsystem ID*/
	12,		/* Number of 4 dword sets*/
	AZALIA_SUBVENDOR(2, 0x10ec0000),
	AZALIA_PIN_CFG(2, 0x12, 0x40130000),
	AZALIA_PIN_CFG(2, 0x14, 0x01014010),
	AZALIA_PIN_CFG(2, 0x15, 0x411111f0),
	AZALIA_PIN_CFG(2, 0x16, 0x411111f0),
	AZALIA_PIN_CFG(2, 0x18, 0x01a19040),
	AZALIA_PIN_CFG(2, 0x19, 0x02a19050),
	AZALIA_PIN_CFG(2, 0x1a, 0x0181304f),
	AZALIA_PIN_CFG(2, 0x1b, 0x02214020),
	AZALIA_PIN_CFG(2, 0x1c, 0x411111f0),
	AZALIA_PIN_CFG(2, 0x1d, 0x4044c601),
	AZALIA_PIN_CFG(2, 0x1e, 0x01441130),

	0x80862805,	/* Codec Vendor / Device ID: Intel*/
	0x80860101,	/* Subsystem ID*/
	4,		/* Number of 4 dword sets*/
	AZALIA_SUBVENDOR(3, 0x80860101),
	AZALIA_PIN_CFG(3, 0x05, 0x18560010),
	AZALIA_PIN_CFG(3, 0x06, 0x18560020),
	AZALIA_PIN_CFG(3, 0x07, 0x18560030),
};

const u32 pc_beep_verbs[0] = {};

AZALIA_ARRAY_SIZES;
