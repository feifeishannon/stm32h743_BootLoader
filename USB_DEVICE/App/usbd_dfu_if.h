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
#define FLASH_BASE_ADDR     0x08000000
#define SECTOR_SIZE         0x20000   // 128k

#define BANK1 0
#define BANK2 1

//BANK1
#define ADDR_FLASH_SECTOR_0  (FLASH_BASE_ADDR + (0 * SECTOR_SIZE))
#define ADDR_FLASH_SECTOR_1  (FLASH_BASE_ADDR + (1 * SECTOR_SIZE))
#define ADDR_FLASH_SECTOR_2  (FLASH_BASE_ADDR + (2 * SECTOR_SIZE))
#define ADDR_FLASH_SECTOR_3  (FLASH_BASE_ADDR + (3 * SECTOR_SIZE))
#define ADDR_FLASH_SECTOR_4  (FLASH_BASE_ADDR + (4 * SECTOR_SIZE))
#define ADDR_FLASH_SECTOR_5  (FLASH_BASE_ADDR + (5 * SECTOR_SIZE))
#define ADDR_FLASH_SECTOR_6  (FLASH_BASE_ADDR + (6 * SECTOR_SIZE))
#define ADDR_FLASH_SECTOR_7  (FLASH_BASE_ADDR + (7 * SECTOR_SIZE))
//BANK2
#define ADDR_FLASH_SECTOR_8  (FLASH_BASE_ADDR + (8 * SECTOR_SIZE))
#define ADDR_FLASH_SECTOR_9  (FLASH_BASE_ADDR + (9 * SECTOR_SIZE))
#define ADDR_FLASH_SECTOR_10 (FLASH_BASE_ADDR + (10 * SECTOR_SIZE))
#define ADDR_FLASH_SECTOR_11 (FLASH_BASE_ADDR + (11 * SECTOR_SIZE))
#define ADDR_FLASH_SECTOR_12 (FLASH_BASE_ADDR + (12 * SECTOR_SIZE))
#define ADDR_FLASH_SECTOR_13 (FLASH_BASE_ADDR + (13 * SECTOR_SIZE))
#define ADDR_FLASH_SECTOR_14 (FLASH_BASE_ADDR + (14 * SECTOR_SIZE))
#define ADDR_FLASH_SECTOR_15 (FLASH_BASE_ADDR + (15 * SECTOR_SIZE))

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

typedef struct {
    uint32_t flashSector;  // ÉÈÇø±àºÅ
    uint32_t flashBank;   // ËùÊôbankÇø
} SectorInfo;


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

