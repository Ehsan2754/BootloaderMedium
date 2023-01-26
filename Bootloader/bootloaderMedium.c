/**
 * @file BootloaderMedium.c
 * @author Ehsan Shaghaei (Ehsan2754@gmail.com)
 * @brief  the source code for the BootloaderMedium.
 * @version 0.1
 * @date 2023-01-26
 * 
 * @copyright Copyright (c) 2023 @Ehsan2754
 * 
 */
#include "bootloaderMedium.h"

#define SHINYALLOCATOR_ERROR -1
#define SHINYALLOCATOR_OK 0


#ifndef BOOT_ASSERT
#define BOOT_ASSERT(x) assert(x)
#endif

