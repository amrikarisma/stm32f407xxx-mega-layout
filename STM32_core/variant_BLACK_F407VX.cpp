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
#if defined(ARDUINO_BLACK_F407VE) || defined(ARDUINO_BLACK_F407VG)

#include "pins_arduino.h"

// Digital PinName array
// This array allows to wrap Arduino pin number(Dx or x)
// to STM32 PinName (PX_n)
const PinName digitalPin[] = {
  PC_9,   PC_8,   // D0, D1
  PD_7,   PB_6,   // D2, D3
  PB_12,  PB_13,  // D4, D5
  PB_14,  PB_15,  // D6, D7
  PD_8,   PD_9,   // D8, D9
  PD_10,  PD_11,  // D10, D11
  PA_8,   PB_3,   // D12, D13
  PB_10,  PB_11,  // D14, D15
  PC_12,  PC_11,  // D16, D17
  PD_4,   PD_3,   // D18, D19
  PD_0,   PD_1,   // D20, D21
  PA_10,  PA_9,   // D22, D23
  PA_15,  PD_5,   // D24, D25
  PC_7,   PD_6,   // D26, D27
  PC_6,   PC_10,  // D28, D29
  PD_14,  PD_15,  // D30, D31
  PD_12,  PD_13,  // D32, D33
  PE_5,   PE_15,  // D34, D35
  PE_4,   PE_14,  // D36, D37
  PE_3,   PE_13,  // D38, D39
  PE_2,   PE_12,  // D40, D41
  PE_10,  PB_7,   // D42, D43
  PB_3,   PE_11,  // D44, D45
  PE_0,   PE_9,   // D46, D47
  PE_6,   PE_8,   // D48, D49
  PE_7,   PB_8,   // D50, D51
  PC_13,  PB_9,   // D52, D53
  PA_0,   PA_1,   // A0, A1
  PA_2,   PA_3,   // A2, A3
  PA_4,   PA_5,   // A4, A5
  PA_6,   PA_7,   // A6, A7
  PB_0,   PB_1,   // A8, A9
  PC_0,   PC_1,   // A10, A11
  PC_2,   PC_3,   // A12, A13
  PC_4,   PC_5,   // A14, A15
  PA_11,  PA_12,  // D70, D71
  PE_1,   PB_4,   // D72, D73
  PB_5,           // D74
};

// Analog (Ax) pin number array
const uint32_t analogInputPin[] = {
  54, // A0
  55, // A1
  56, // A2
  57, // A3
  58, // A4
  59, // A5
  60, // A6
  61, // A7
  62, // A8
  63, // A9
  64, // A10
  65, // A11
  66, // A12
  67, // A13
  68, // A14
  69  // A15

};

// ----------------------------------------------------------------------------

#ifdef __cplusplus
extern "C" {
#endif

/**
  * @brief  System Clock Configuration
  * @param  None
  * @retval None
  */
WEAK void SystemClock_Config(void)
{

  RCC_OscInitTypeDef RCC_OscInitStruct = {};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {};

  /**Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();

  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

  /**Initializes the CPU, AHB and APB busses clocks
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = 8;
  RCC_OscInitStruct.PLL.PLLN = 336;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 7;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
    Error_Handler();
  }

  /**Initializes the CPU, AHB and APB busses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK
                                | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_5) != HAL_OK) {
    Error_Handler();
  }

  /* Ensure CCM RAM clock is enabled */
  __HAL_RCC_CCMDATARAMEN_CLK_ENABLE();

}

#ifdef __cplusplus
}
#endif

#endif /* ARDUINO_BLACK_F407VE || ARDUINO_BLACK_F407VG */
