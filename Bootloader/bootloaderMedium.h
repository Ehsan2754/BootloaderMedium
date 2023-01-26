/**
 * @file BootloaderMedium.h
 * @author Ehsan Shaghaei (ehsan2754@gmail.com)
 * @brief header for BootloaderMedium routines.
 * @version 0.1
 * @date 2023-01-26
 * 
 * @copyright Copyright (c) 2023 @Ehsan2754
 * 
 */

#ifndef _BOOTLOADERMEDIUM_H__
#define _BOOTLOADERMEDIUM_H__

#define STM32F3


#include<stdint.h>
/******************************************************/
/*                Build Parameters                    */
/******************************************************/
// @brief platform depenceies
#ifdef STM32F3

#include <stm32f3xx_hal.h>
#include <main.h>
#else
#error "Invalid build parapmeter(s): <STM32FX> "
#endif // STM32F3

/**
 * @brief The Struct for the firmware evaluation.
 * @param firmware_size size of the firmware binary
 * @param firmware_checksum the checksum of the firmware
 * @param firmware_data the data of the firmware binary
 */
typedef struct {
    uint16_t firmware_size;
    uint16_t firmware_checksum;
    uint8_t* firmware_data;
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




#endif // _BOOTLOADERMEDIUM_H__