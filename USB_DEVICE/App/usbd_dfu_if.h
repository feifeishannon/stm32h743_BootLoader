/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : usbd_dfu_if.h
  * @brief          : Header for usbd_dfu_if.c file.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __USBD_DFU_IF_H__
#define __USBD_DFU_IF_H__

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "usbd_dfu.h"

/* USER CODE BEGIN INCLUDE */
/*Defineflashaddress*/
//BLANK1
#define ADDR_FLASH_SECTOR_0 0x08000000
#define ADDR_FLASH_SECTOR_1 0x08004000
#define ADDR_FLASH_SECTOR_2 0x08008000
#define ADDR_FLASH_SECTOR_3 0x0800C000
#define ADDR_FLASH_SECTOR_4 0x08010000
#define ADDR_FLASH_SECTOR_5 0x08020000
#define ADDR_FLASH_SECTOR_6 0x08040000
#define ADDR_FLASH_SECTOR_7 0x08060000
#define ADDR_FLASH_SECTOR_8 0x08080000
#define ADDR_FLASH_SECTOR_9 0x080A0000
#define ADDR_FLASH_SECTOR_10 0x080C0000
#define ADDR_FLASH_SECTOR_11 0x080E0000
//BLANK2
#define ADDR_FLASH_SECTOR_12 0x08100000
#define ADDR_FLASH_SECTOR_13 0x08104000
#define ADDR_FLASH_SECTOR_14 0x08108000
#define ADDR_FLASH_SECTOR_15 0x0810C000
#define ADDR_FLASH_SECTOR_16 0x08110000
#define ADDR_FLASH_SECTOR_17 0x08120000
#define ADDR_FLASH_SECTOR_18 0x08140000
#define ADDR_FLASH_SECTOR_19 0x08160000
#define ADDR_FLASH_SECTOR_20 0x08180000
#define ADDR_FLASH_SECTOR_21 0x081A0000
#define ADDR_FLASH_SECTOR_22 0x081C0000
#define ADDR_FLASH_SECTOR_23 0x081E0000
/*Flashopratetimefromdatasheetpage128*/
#define FLASH_SECTOR_16KB_WRITE_ERASE_TIME 500
//500usbframe,means500ms
#define FLASH_SECTOR_64KB_WRITE_ERASE_TIME 1100
#define FLASH_SECTOR_128KB_WRITE_ERASE_TIME 2000
/* USER CODE END INCLUDE */

/** @addtogroup STM32_USB_DEVICE_LIBRARY
  * @brief For Usb device.
  * @{
  */

/** @defgroup USBD_MEDIA USBD_MEDIA
  * @brief Header file for the usbd_dfu_if.c file.
  * @{
  */

/** @defgroup USBD_MEDIA_Exported_Defines USBD_MEDIA_Exported_Defines
  * @brief Defines.
  * @{
  */

/* USER CODE BEGIN EXPORTED_DEFINES */

/* USER CODE END EXPORTED_DEFINES */

/**
  * @}
  */

/** @defgroup USBD_MEDIA_Exported_Types USBD_MEDIA_Exported_Types
  * @brief Types.
  * @{
  */

/* USER CODE BEGIN EXPORTED_TYPES */

/* USER CODE END EXPORTED_TYPES */

/**
  * @}
  */

/** @defgroup USBD_MEDIA_Exported_Macros USBD_MEDIA_Exported_Macros
  * @brief Aliases.
  * @{
  */

/* USER CODE BEGIN EXPORTED_MACRO */

/* USER CODE END EXPORTED_MACRO */

/**
  * @}
  */

/** @defgroup USBD_MEDIA_Exported_Variables USBD_MEDIA_Exported_Variables
  * @brief Public variables.
  * @{
  */

/** MEDIA Interface callback. */
extern USBD_DFU_MediaTypeDef USBD_DFU_fops_FS;

/* USER CODE BEGIN EXPORTED_VARIABLES */

/* USER CODE END EXPORTED_VARIABLES */

/**
  * @}
  */

/** @defgroup USBD_MEDIA_Exported_FunctionsPrototype USBD_MEDIA_Exported_FunctionsPrototype
  * @brief Public functions declaration.
  * @{
  */

/* USER CODE BEGIN EXPORTED_FUNCTIONS */

/* USER CODE END EXPORTED_FUNCTIONS */

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* __USBD_DFU_IF_H__ */

