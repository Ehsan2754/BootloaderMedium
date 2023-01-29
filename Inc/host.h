/**
 * @file host.h
 * @author Ehsan Shaghaei (ehsan2754@gmail.com)
 * @brief  the header for the host bootloader routines.
 * @version 0.1
 * @date 2023-01-26
 * 
 * @copyright Copyright (c) 2023 @Ehsan2754
 * 
 */

#ifndef _HOST_H__
#define _HOST_H__

void OpenBootloader_Init(void);
void OpenBootloader_DeInit(void);
void OpenBootloader_ProtocolDetection(void);


#endif // _HOST_H__