/**
 * @file medium.h
 * @author Ehsan Shaghaei (ehsan2754@gmail.com)
 * @brief header for Medium (uploader) routines.
 * @version 0.1
 * @date 2023-01-26
 * 
 * @copyright Copyright (c) 2023 @Ehsan2754
 * 
 */

#ifndef _MEDIUM_H__
#define _MEDIUM_H__


#include <bootloaderConfig.h>
#include <utils.h>
#include<stdint.h>
/******************************************************/
/*                Build Parameters                    */
/******************************************************/
// @brief platform depenceies
#if defined MEDIUM_PLATFORM_STM32F3
#include <stm32f3xx_hal.h>
#else
#error "Invalid build parapmeter(s): <STM32XX> "
#endif // MEDIUM_PLATFORM_STM32F3



/**
 * @brief The Struct for the firmware evaluation.
 * @param firmware_size size of the firmware binary
 * @param firmware_checksum the checksum of the firmware
 * @param firmware_data the data of the firmware binary
 */
typedef struct {
    uint8_t* data;
    uint32_t size;
    uint32_t version;
    uint16_t crc;
    } firmware_t;


/**
 * @brief The struct for the host boot parameters
 * @param boot_port pointer to the port of boot pin on STM host
 * @param boot_pin pint of the boot pin on STM host
 * @param hurat UART handle to the STM host bootloader interface
 */
typedef struct {
    GPIO_TypeDef* boot_port; 
    uint16_t boot_pin;
    uint16_t boot_timeout;
    UART_HandleTypeDef* huart;
} boot_params_t;

extern boot_params_t boot_params;

/**
 * @brief Checks the current frimware configuration
 * 
 * @param params 
 * @return 0 if successful and -1 if failure
 */
uint_fast8_t bootloader_check(boot_params_t* params);
/**
 * @brief Updates the frimware on the host
 * 
 * @param params bootloader parameters
 * @param new_firmware new frimware parameters
 * @return 0 if successful and -1 if failure
 */
uint_fast8_t update_firmware(boot_params_t* params, firmware_t* new_firmware);




#endif // _MEDIUM_H__