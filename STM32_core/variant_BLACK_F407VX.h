/*
 *******************************************************************************
 * Copyright (c) 2017-2021, STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */
#pragma once

/*----------------------------------------------------------------------------
 *        STM32 pins number
 *----------------------------------------------------------------------------*/
#define PC9                      0 // D22
#define PC8                      1 // D23
#define PD7                      2 // D2
#define PB6                      3 // D3
#define PB12                     4 // D4
#define PB13                     5 // D5
#define PB14                      6 // D6
#define PB15                      7 // D7
#define PD8                     8 // D8
#define PD9                     9 // D9
#define PD10                     10 // D10
#define PD11                     11 // D11
#define PA8                      12 // D12
#define PB3                      13 // D13
#define PB10                      14 // D16
#define PB11                      15 // D17
#define PC12                     16 // SPI3 MOSI for SD
#define PC11                     17 // SPI3 MISO for SD
#define PD4                      18 // D18
#define PD3                      19 // D19
#define PD0                      20 // CAN RX
#define PD1                      21 // CAN TX
#define PA10                     22 // D0
#define PA9                      23 // D1
#define PA15                     24 // D24
#define PD5                     25 // D14
#define PC7                      26 // D26
#define PD6                     27 // D15
#define PC6                      28 // D28
#define PC10                     29 // SPI3 CLK for SD
#define PD14                     30 // D30
#define PD15                     31 // D31
#define PD12                     32 // D32
#define PD13                     33 // D33
#define PE5                      34 // D34
#define PE15                     35 // D35
#define PE4                      36 // D36
#define PE14                     37 // D37
#define PE3                      38 // D38
#define PE13                     39 // D39
#define PE2                      40 // D40
#define PE12                     41 // D41
#define PE10                     42 // D42
#define PB7                      43 // D43
#define PE0                      44 // SPI1 CLK
#define PE11                     45 // D45
#define PD2                      46 // D46 // SD CS
#define PE9                      47 // D47
#define PE6                      48 // D48
#define PE8                      49 // D49
#define PE7                      50 // D50
#define PB8                      51 // D51
#define PC13                     52 // D52
#define PB9                      53 // D53
#define PA0                      PIN_A0
#define PA1                      PIN_A1
#define PA2                      PIN_A2
#define PA3                      PIN_A3
#define PA4                      PIN_A4
#define PA5                      PIN_A5
#define PA6                      PIN_A6
#define PA7                      PIN_A7
#define PB0                      PIN_A8
#define PB1                      PIN_A9
#define PC0                      PIN_A10
#define PC1                      PIN_A11
#define PC2                      PIN_A12
#define PC3                      PIN_A13
#define PC4                      PIN_A14
#define PC5                      PIN_A15
#define PA11                     70 // USB_DP
#define PA12                     71 // USB_DM
#define PE1                      72 // SPI-Flash CS
#define PB4                      73 // SPI1 MOSI
#define PB5                      74 // SPI1 MISO

// Alternate pins number
#define PA0_ALT1                (PA0  | ALT1)
#define PA0_ALT2                (PA0  | ALT2)
#define PA1_ALT1                (PA1  | ALT1)
#define PA1_ALT2                (PA1  | ALT2)
#define PA2_ALT1                (PA2  | ALT1)
#define PA2_ALT2                (PA2  | ALT2)
#define PA3_ALT1                (PA3  | ALT1)
#define PA3_ALT2                (PA3  | ALT2)
#define PA4_ALT1                (PA4  | ALT1)
#define PA5_ALT1                (PA5  | ALT1)
#define PA6_ALT1                (PA6  | ALT1)
#define PA7_ALT1                (PA7  | ALT1)
#define PA7_ALT2                (PA7  | ALT2)
#define PA7_ALT3                (PA7  | ALT3)
#define PA15_ALT1               (PA15 | ALT1)
#define PB0_ALT1                (PB0  | ALT1)
#define PB0_ALT2                (PB0  | ALT2)
#define PB1_ALT1                (PB1  | ALT1)
#define PB1_ALT2                (PB1  | ALT2)
#define PB3_ALT1                (PB3  | ALT1)
#define PB4_ALT1                (PB4  | ALT1)
#define PB5_ALT1                (PB5  | ALT1)
#define PB8_ALT1                (PB8  | ALT1)
#define PB9_ALT1                (PB9  | ALT1)
#define PB14_ALT1               (PB14 | ALT1)
#define PB14_ALT2               (PB14 | ALT2)
#define PB15_ALT1               (PB15 | ALT1)
#define PB15_ALT2               (PB15 | ALT2)
#define PC0_ALT1                (PC0  | ALT1)
#define PC0_ALT2                (PC0  | ALT2)
#define PC1_ALT1                (PC1  | ALT1)
#define PC1_ALT2                (PC1  | ALT2)
#define PC2_ALT1                (PC2  | ALT1)
#define PC2_ALT2                (PC2  | ALT2)
#define PC3_ALT1                (PC3  | ALT1)
#define PC3_ALT2                (PC3  | ALT2)
#define PC4_ALT1                (PC4  | ALT1)
#define PC5_ALT1                (PC5  | ALT1)
#define PC6_ALT1                (PC6  | ALT1)
#define PC7_ALT1                (PC7  | ALT1)
#define PC8_ALT1                (PC8  | ALT1)
#define PC9_ALT1                (PC9  | ALT1)
#define PC10_ALT1               (PC10 | ALT1)
#define PC11_ALT1               (PC11 | ALT1)

#define NUM_DIGITAL_PINS        75
#define NUM_ANALOG_INPUTS       16

// On-board LED pin number

#ifndef LED_BUILTIN
  #define LED_BUILTIN           PB7
#endif

// Below SPI and I2C definitions already done in the core
// Could be redefined here if differs from the default one
// SPI Definitions
#ifndef PIN_SPI_SS
  #define PIN_SPI_SS            PE1 // W25Q16 (on board flash)
#endif
#ifndef PIN_SPI_SS1
  #define PIN_SPI_SS1           PE1 // W25Q16 (on board flash)
#endif
#ifndef PIN_SPI_MOSI
  #define PIN_SPI_MOSI          PB5 // W25Q16 (on board flash)
#endif
#ifndef PIN_SPI_MISO
  #define PIN_SPI_MISO          PB4 // W25Q16 (on board flash)
#endif
#ifndef PIN_SPI_SCK
  #define PIN_SPI_SCK           PB3 // W25Q16 (on board flash)
#endif

// I2C Definitions
#ifndef PIN_WIRE_SDA
  #define PIN_WIRE_SDA          PB9
#endif
#ifndef PIN_WIRE_SCL
  #define PIN_WIRE_SCL          PB8
#endif

// Timer Definitions
// Use TIM6/TIM7 when possible as servo and tone don't need GPIO output pin
#ifndef TIMER_TONE
  #define TIMER_TONE            TIM6
#endif
#ifndef TIMER_SERVO
  #define TIMER_SERVO           TIM7
#endif

// UART Definitions
// Define here Serial instance number to map on Serial generic name
#ifndef SERIAL_UART_INSTANCE
  #define SERIAL_UART_INSTANCE  1
#endif

// Default pin used for 'Serial' instance
// Mandatory for Firmata
#ifndef PIN_SERIAL_RX
  #define PIN_SERIAL_RX         PA10
#endif
#ifndef PIN_SERIAL_TX
  #define PIN_SERIAL_TX         PA9
#endif

/* Extra HAL modules */
#if !defined(HAL_DAC_MODULE_DISABLED)
  #define HAL_DAC_MODULE_ENABLED
#endif
#if !defined(HAL_SD_MODULE_DISABLED)
  #define HAL_SD_MODULE_ENABLED
#endif

// This indicates that there is an external and fixed 1.5k pullup
// on the D+ line. This define is only needed on boards that have
// internal pullups *and* an external pullup. Note that it would have
// been better to omit the pullup and exclusively use the internal
// pullups instead.
#define USBD_FIXED_PULLUP

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
  // These serial port names are intended to allow libraries and architecture-neutral
  // sketches to automatically default to the correct port name for a particular type
  // of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
  // the first hardware serial port whose RX/TX pins are not dedicated to another use.
  //
  // SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
  //
  // SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
  //
  // SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
  //
  // SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
  //
  // SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
  //                            pins are NOT connected to anything by default.
  #ifndef SERIAL_PORT_MONITOR
    #define SERIAL_PORT_MONITOR   Serial
  #endif
  #ifndef SERIAL_PORT_HARDWARE
    #define SERIAL_PORT_HARDWARE  Serial1
  #endif
#endif
