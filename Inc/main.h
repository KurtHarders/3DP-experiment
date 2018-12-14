/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * Copyright (c) 2018 STMicroelectronics International N.V. 
  * All rights reserved.
  *
  * Redistribution and use in source and binary forms, with or without 
  * modification, are permitted, provided that the following conditions are met:
  *
  * 1. Redistribution of source code must retain the above copyright notice, 
  *    this list of conditions and the following disclaimer.
  * 2. Redistributions in binary form must reproduce the above copyright notice,
  *    this list of conditions and the following disclaimer in the documentation
  *    and/or other materials provided with the distribution.
  * 3. Neither the name of STMicroelectronics nor the names of other 
  *    contributors to this software may be used to endorse or promote products 
  *    derived from this software without specific written permission.
  * 4. This software, including modifications and/or derivative works of this 
  *    software, must execute solely and exclusively on microcontroller or
  *    microprocessor devices manufactured by or for STMicroelectronics.
  * 5. Redistribution and use of this software other than as permitted under 
  *    this license is void and will automatically terminate your rights under 
  *    this license. 
  *
  * THIS SOFTWARE IS PROVIDED BY STMICROELECTRONICS AND CONTRIBUTORS "AS IS" 
  * AND ANY EXPRESS, IMPLIED OR STATUTORY WARRANTIES, INCLUDING, BUT NOT 
  * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A 
  * PARTICULAR PURPOSE AND NON-INFRINGEMENT OF THIRD PARTY INTELLECTUAL PROPERTY
  * RIGHTS ARE DISCLAIMED TO THE FULLEST EXTENT PERMITTED BY LAW. IN NO EVENT 
  * SHALL STMICROELECTRONICS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
  * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
  * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, 
  * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF 
  * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING 
  * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
  * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H__
#define __MAIN_H__

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"
#include "stm32f4xx.h"
#include "stm32f4xx_ll_system.h"
#include "stm32f4xx_ll_gpio.h"
#include "stm32f4xx_ll_exti.h"
#include "stm32f4xx_ll_bus.h"
#include "stm32f4xx_ll_cortex.h"
#include "stm32f4xx_ll_rcc.h"
#include "stm32f4xx_ll_utils.h"
#include "stm32f4xx_ll_pwr.h"
#include "stm32f4xx_ll_dma.h"

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define E3_DIR_Pin LL_GPIO_PIN_2
#define E3_DIR_GPIO_Port GPIOE
#define E3_RESET_Pin LL_GPIO_PIN_3
#define E3_RESET_GPIO_Port GPIOE
#define E2_RESET_Pin LL_GPIO_PIN_4
#define E2_RESET_GPIO_Port GPIOE
#define E2_PWM_Pin LL_GPIO_PIN_5
#define E2_PWM_GPIO_Port GPIOE
#define E2_DIR_Pin LL_GPIO_PIN_6
#define E2_DIR_GPIO_Port GPIOE
#define E1_DIR_Pin LL_GPIO_PIN_13
#define E1_DIR_GPIO_Port GPIOC
#define E1_RESET_Pin LL_GPIO_PIN_14
#define E1_RESET_GPIO_Port GPIOC
#define Z_RESET_Pin LL_GPIO_PIN_15
#define Z_RESET_GPIO_Port GPIOC
#define Z_DIR_Pin LL_GPIO_PIN_0
#define Z_DIR_GPIO_Port GPIOC
#define IR_ON_Pin LL_GPIO_PIN_1
#define IR_ON_GPIO_Port GPIOC
#define BED_TERM_1_Pin LL_GPIO_PIN_2
#define BED_TERM_1_GPIO_Port GPIOC
#define BED_TERM_2_Pin LL_GPIO_PIN_3
#define BED_TERM_2_GPIO_Port GPIOC
#define E1_TERM_Pin LL_GPIO_PIN_0
#define E1_TERM_GPIO_Port GPIOA
#define E2_TERM_Pin LL_GPIO_PIN_1
#define E2_TERM_GPIO_Port GPIOA
#define E3_TERM_Pin LL_GPIO_PIN_2
#define E3_TERM_GPIO_Port GPIOA
#define BED_TERM_3_Pin LL_GPIO_PIN_3
#define BED_TERM_3_GPIO_Port GPIOA
#define SPI1_CS_Pin LL_GPIO_PIN_4
#define SPI1_CS_GPIO_Port GPIOA
#define E1_FAN_Pin LL_GPIO_PIN_4
#define E1_FAN_GPIO_Port GPIOC
#define E2_FAN_Pin LL_GPIO_PIN_5
#define E2_FAN_GPIO_Port GPIOC
#define E2_HEAT_PWM_Pin LL_GPIO_PIN_0
#define E2_HEAT_PWM_GPIO_Port GPIOB
#define E3_HEAT_PWM_Pin LL_GPIO_PIN_1
#define E3_HEAT_PWM_GPIO_Port GPIOB
#define USER_KEY_Pin LL_GPIO_PIN_7
#define USER_KEY_GPIO_Port GPIOE
#define E3_FAN_Pin LL_GPIO_PIN_8
#define E3_FAN_GPIO_Port GPIOE
#define Y_DIR_Pin LL_GPIO_PIN_9
#define Y_DIR_GPIO_Port GPIOE
#define Y_RESET_Pin LL_GPIO_PIN_10
#define Y_RESET_GPIO_Port GPIOE
#define WIFI_RESET_Pin LL_GPIO_PIN_11
#define WIFI_RESET_GPIO_Port GPIOE
#define WIFI_BOOT_Pin LL_GPIO_PIN_12
#define WIFI_BOOT_GPIO_Port GPIOE
#define X_RESET_Pin LL_GPIO_PIN_13
#define X_RESET_GPIO_Port GPIOE
#define X_PWM_Pin LL_GPIO_PIN_14
#define X_PWM_GPIO_Port GPIOE
#define X_DIR_Pin LL_GPIO_PIN_15
#define X_DIR_GPIO_Port GPIOE
#define Y_PWM_Pin LL_GPIO_PIN_10
#define Y_PWM_GPIO_Port GPIOB
#define USER_SPI2_NSS_Pin LL_GPIO_PIN_12
#define USER_SPI2_NSS_GPIO_Port GPIOB
#define USER_SPI2_SCK_Pin LL_GPIO_PIN_13
#define USER_SPI2_SCK_GPIO_Port GPIOB
#define USER_SPI2_MISO_Pin LL_GPIO_PIN_14
#define USER_SPI2_MISO_GPIO_Port GPIOB
#define USER_SPI2_MOSI_Pin LL_GPIO_PIN_15
#define USER_SPI2_MOSI_GPIO_Port GPIOB
#define X_STOP_Pin LL_GPIO_PIN_8
#define X_STOP_GPIO_Port GPIOD
#define Y_STOP_Pin LL_GPIO_PIN_9
#define Y_STOP_GPIO_Port GPIOD
#define Z_STOP_Pin LL_GPIO_PIN_10
#define Z_STOP_GPIO_Port GPIOD
#define U_STOP_Pin LL_GPIO_PIN_11
#define U_STOP_GPIO_Port GPIOD
#define E1_PWM_Pin LL_GPIO_PIN_12
#define E1_PWM_GPIO_Port GPIOD
#define BED_HEAT_2_Pin LL_GPIO_PIN_13
#define BED_HEAT_2_GPIO_Port GPIOD
#define BED_HEAT_1_Pin LL_GPIO_PIN_14
#define BED_HEAT_1_GPIO_Port GPIOD
#define BED_HEAT_3_Pin LL_GPIO_PIN_15
#define BED_HEAT_3_GPIO_Port GPIOD
#define Z_PWM_Pin LL_GPIO_PIN_6
#define Z_PWM_GPIO_Port GPIOC
#define E1_HEAT_PWM_Pin LL_GPIO_PIN_7
#define E1_HEAT_PWM_GPIO_Port GPIOC
#define V_STOP_Pin LL_GPIO_PIN_8
#define V_STOP_GPIO_Port GPIOA
#define SWDIO_Pin LL_GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLOCK_Pin LL_GPIO_PIN_14
#define SWCLOCK_GPIO_Port GPIOA
#define SD_CARD_DETECT_Pin LL_GPIO_PIN_15
#define SD_CARD_DETECT_GPIO_Port GPIOA
#define W_STOP_Pin LL_GPIO_PIN_0
#define W_STOP_GPIO_Port GPIOD
#define IR_OUT_Pin LL_GPIO_PIN_1
#define IR_OUT_GPIO_Port GPIOD
#define USER_3_Pin LL_GPIO_PIN_7
#define USER_3_GPIO_Port GPIOD
#define SWO_Pin LL_GPIO_PIN_3
#define SWO_GPIO_Port GPIOB
#define USER_4_Pin LL_GPIO_PIN_4
#define USER_4_GPIO_Port GPIOB
#define WIFI_WAKEUP_Pin LL_GPIO_PIN_5
#define WIFI_WAKEUP_GPIO_Port GPIOB
#define E3_PWM_Pin LL_GPIO_PIN_8
#define E3_PWM_GPIO_Port GPIOB
#define SERVO_0_Pin LL_GPIO_PIN_9
#define SERVO_0_GPIO_Port GPIOB
#define USER_2_Pin LL_GPIO_PIN_0
#define USER_2_GPIO_Port GPIOE
#define ALL_FLAG_Pin LL_GPIO_PIN_1
#define ALL_FLAG_GPIO_Port GPIOE

/* ########################## Assert Selection ############################## */
/**
  * @brief Uncomment the line below to expanse the "assert_param" macro in the 
  *        HAL drivers code
  */
/* #define USE_FULL_ASSERT    1U */

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
 extern "C" {
#endif
void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)
#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H__ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
