/*
	Copyright 2022 Benjamin Vedder	benjamin@vedder.se

	This file is part of the VESC firmware.

	The VESC firmware is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    The VESC firmware is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#ifndef MAIN_CONF_GENERAL_H_
#define MAIN_CONF_GENERAL_H_

#include "datatypes.h"

// Firmware version
#define FW_VERSION_MAJOR			6
#define FW_VERSION_MINOR			05
// Set to 0 for building a release and iterate during beta test builds
#define FW_TEST_VERSION_NUMBER		0

#if !defined(HW_SOURCE) && !defined(HW_HEADER)
#define HW_HEADER					"hw_xp_t.h"
#define HW_SOURCE					"hw_xp_t.c"

//#define HW_HEADER					"hw_bms_rb.h"
//#define HW_SOURCE					"hw_bms_rb.c"

//#define HW_HEADER					"hw_disp_v1.h"
//#define HW_SOURCE					"hw_disp_v1.c"

//#define HW_HEADER					"hw_devkit_c3.h"
//#define HW_SOURCE					"hw_devkit_c3.c"

//#define HW_HEADER					"hw_lb_if.h"
//#define HW_SOURCE					"hw_lb_if.c"

//#define HW_HEADER					"hw_lb_bms_wifi.h"
//#define HW_SOURCE					"hw_lb_bms_wifi.c"

//#define HW_HEADER					"hw_lb_ant.h"
//#define HW_SOURCE					"hw_lb_ant.c"

//#define HW_HEADER					"hw_lb_hc_v2.h"
//#define HW_SOURCE					"hw_lb_hc_v2.c"
#endif

#if !defined(HW_SOURCE) && !defined(HW_SOURCE_ALT)
#error "No hardware source file set"
#endif

#ifndef HW_HEADER
#error "No hardware header file set"
#endif

#include "main.h"
#include "hw.h"

#ifdef OVR_CONF_DEFAULT
#include OVR_CONF_DEFAULT
#else
#include "conf_default.h"
#endif

#endif /* MAIN_CONF_GENERAL_H_ */
