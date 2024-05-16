/*
 * STD_TYPE.h
 *
 *  Created on: Mar 10, 2024
 *      Author: Mohamed Mabrouk
 */

#ifndef STD_TYPE_H_
#define STD_TYPE_H_

typedef signed char int8_t;
typedef unsigned char uint8_t;

typedef signed int int16_t;
typedef unsigned int uint16_t;

typedef signed long int32_t;
typedef unsigned long uint32_t;

typedef enum
{
	FALSE = 0,
	TRUE = 1
} BOOL_t;

typedef enum
{
	NULL_PTR = 0,
	OK,
	NOK
} ERROR_t;

#endif /* STD_TYPE_H_ */
