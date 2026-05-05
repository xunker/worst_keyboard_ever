// based on of https://github.com/numToStr/qmk_firmware/blob/picopad/keyboards/picopad/config.h
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25 // Specify a optional status led by GPIO number which blinks when entering the bootloader

// #define WS2812_PIO_USE_PIO1 // Force the usage of PIO1 peripheral, by default the WS2812 implementation uses the PIO0 peripheral

/*
 * LED Indicators
 * https://docs.qmk.fm/features/led_indicators
 */
#define LED_CAPS_LOCK_PIN	GP22   // Pin 29
#define LED_SCROLL_LOCK_PIN GP26 // Pin 31, ADC0
#define LED_NUM_LOCK_PIN GP27    // Pin 32, ADC1
#define LED_PIN_ON_STATE 0       // LEDs on PCB are active-low