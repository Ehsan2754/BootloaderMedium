/**
 * @file utils.h
 * @author Ehsan Shaghaei (ehsan2754@gmail.com)
 * @brief  the utility code.
 * @version 0.1
 * @date 2023-01-26
 * 
 * @copyright Copyright (c) 2023 @Ehsan2754
 * 
 */


#ifndef _UTILS_H__
#define _UTILS_H__


/**
 * @brief Status Codes
 * 
 */
#define BLM_ERROR -1
#define BLM_OK 0


#ifndef BLM_ASSERT
#define BLM_ASSERT(x) assert(x)
#endif // BLM_ASSERT

#endif // _UTILS_H__