/*
 * GPIO_Interface.h
 *
 *  Created on: Mar 10, 2024
 *      Author: Mohamed Mabrouk
 */

#ifndef GPIO_INTERFACE_H_
#define GPIO_INTERFACE_H_

//Remeber to remove this
#include "STD_TYPE.h"

/*
 typedef enum {
 GPIO_OUTPUT_PP = 0b1000,
 GPIO_OUTPUT_PP_PU = 0b1001,
 GPIO_OUTPUT_PP_PD = 0b1010,
 GPIO_OUTPUT_OD = 0b1100,
 GPIO_OUTPUT_OD_PU = 0b1101,
 GPIO_OUTPUT_OD_PD = 0b1110,
 GPIO_AF_PP = 0b10000,
 GPIO_AF_PP_PU = 0b10001,
 GPIO_AF_PP_PD = 0b10010,
 GPIO_AF_OD = 0b10100,
 GPIO_AF_OD_PU = 0b10101,
 GPIO_AF_OD_PD = 0b10110,
 GPIO_INPUT_FLOATING = 0b0,
 GPIO_INPUT_PU = 0b1,
 GPIO_INPUT_PD = 0b10,
 GPIO_IN_OUT_ANALOG = 0b11
 } GPIO_PIN_MODE_t;
 */

// Mode : input - General Output - Alternative Function - Analog Function
// OTYPER : Output push pull - Output open drain
// OSPEEDER : Low speed - Meduim speed - High speed - Very high speed
// PUPDR : No pull-up - pull down
typedef enum {
	MODER_INPUT = 0x0, MODER_OUTPUT, MODER_ALTERNATIVE_FUNC, MODER_ANALOG_FUNC,
} MODER_t;

typedef enum {
	OTYPER_OUTPUT_PUSH_PULL = 0x0, OTYPER_OUTPUT_OPEN_DRAIN
} OTYPER_t;

typedef enum {
	OSPEEDER_LOW_SPEED = 0x0,
	OSPEEDER_MEDUIM_SPEED,
	OSPEEDER_HIGH_SPEED,
	OSPEEDER_VERY_HIGH_SPEED
} OSPEEDR_t;

typedef enum {
	PUPDR_NO_PULL_UP_PULL_DOWN = 0x0, PUPDR_PULL_UP, PUPDR_PULL_DOWN
} PUPDR_t;

typedef struct {
	MODER_t MODER;
	OTYPER_t OTYPER;
	OSPEEDR_t OSPEEDER;
	PUPDR_t PUPDR;
} GPIO_PIN_MODE_t;

typedef enum {
	PINA0,
	PINA1,
	PINA2,
	PINA3,
	PINA4,
	PINA5,
	PINA6,
	PINA7,
	PINA8,
	PINA9,
	PINA10,
	PINA11,
	PINA12,
	PINA13,
	PINA14,
	PINA15,
	PINB0,
	PINB1,
	PINB2,
	PINB3,
	PINB4,
	PINB5,
	PINB6,
	PINB7,
	PINB8,
	PINB9,
	PINB10,
	PINB11,
	PINB12,
	PINB13,
	PINB14,
	PINB15,
	PINC0,
	PINC1,
	PINC2,
	PINC3,
	PINC4,
	PINC5,
	PINC6,
	PINC7,
	PINC8,
	PINC9,
	PINC10,
	PINC11,
	PINC12,
	PINC13,
	PINC14,
	PINC15,
	PIN_TOTAL
} GPIO_PINS_t;

typedef enum {
	PORTA, PORTB, PORTC
} GPIO_Port_t;

typedef enum {
	LOW = 0, HIGH
} GPIO_PIN_OUT_t;

typedef enum {
	GPIO_LOW_SPEED = 0, GPIO_MID_SPEED, GPIO_HIGH_SPEED, GPIO_VHIGH_SPEED
} GPIO_SPEED_t;

void GPIO_voidInit(void);

ERROR_t GPIO_enPinConfig(GPIO_PINS_t copy_enPinNum,
		GPIO_PIN_MODE_t copy_enPinMode);

ERROR_t GPIO_enPinSet(GPIO_PINS_t copy_enPinNum, GPIO_PIN_OUT_t copy_enPinOut);

ERROR_t GPIO_enPinSetSpeed(GPIO_PINS_t copy_enPinNum, GPIO_SPEED_t copy_enSpeed);

#endif /* GPIO_INTERFACE_H_ */
