/*---------------------------------------------------------------------------
 * Copyright (c) 2024 Arm Limited (or its affiliates).
 * All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *---------------------------------------------------------------------------*/

#ifndef STM32H7B3I_EVAL_H_
#define STM32H7B3I_EVAL_H_

#include "GPIO_STM32.h"
#include "Driver_MCI.h"
#include "Driver_USART.h"
#include "Driver_USBD.h"
#include "Driver_USBH.h"

// CMSIS Driver instances of Board peripherals
#define CMSIS_DRIVER_MCI    1 // CMSIS-Driver MCI instance number
#define CMSIS_DRIVER_USART  1 // CMSIS-Driver USART instance number
#define CMSIS_DRIVER_USBD   1 // CMSIS-Driver USB Device instance number

// Retarget stdio to CMSIS UART
#define RETARGET_STDIO_UART 1

// CMSIS Drivers
extern ARM_DRIVER_MCI   ARM_Driver_MCI_(CMSIS_DRIVER_MCI);      // MCI
extern ARM_DRIVER_USART ARM_Driver_USART_(RETARGET_STDIO_UART); // ST-Link
extern ARM_DRIVER_USBD  ARM_Driver_USBD_(CMSIS_DRIVER_USBD);    // USB Device

#ifdef CMSIS_shield_header
#include CMSIS_shield_header
#endif

#endif /* STM32H7B3I_EVAL_H_ */
