/*
 * RCC_Interface.h
 *
 *  Created on: Mar 10, 2024
 *      Author: Mohamed Mabrouk
 */

#ifndef RCC_RCC_INTERFACE_H_
#define RCC_RCC_INTERFACE_H_
#include "STD_TYPE.h"
typedef enum {
	/*****AHB1********/
	AHB1_GPIOAEN = 100,
	AHB1_GPIOBEN = 101,
	AHB1_GPIOCEN = 102,
	AHB1_GPIODEN = 103,
	AHB1_GPIOEEN = 104,
	AHB1_GPIOHEN = 107,
	AHB1_CRCEN = 112,
	AHB1_DMA1EN = 121,
	AHB1_DMA2EN = 122,
	/*****AHB2********/
	AHB2_OTGFS = 207,
	/*****APB1********/
	APB1_TIM2EN = 300,
	APB1_TIM3EN = 301,
	APB1_TIM4EN = 302,
	APB1_TIM5EN = 303,
	APB1_WWDGENEN = 311,
	APB1_SPI2EN = 314,
	APB1_SPI3EN = 315,
	APB1_USART2EN = 317,
	APB1_I2C1EN = 321,
	APB1_I2C2EN = 322,
	APB1_I2C3EN = 323,
	APB1_PWREN = 328,
	/*****APB2********/
	APB2_TIM1EN = 400,
	APB2_USART1EN = 404,
	APB2_USART6EN = 404,
	APB2_ADC1EN = 408,
	APB2_SDIO = 411,
	APB2_SPI1EN = 412,
	APB2_SPI4EN = 413,
	APB2_SYSCFGEN = 414,
	APB2_TIM9EN = 416,
	APB2_TIM10EN = 417,
	APB2_TIM11EN = 417
} PeripheralBusId_t;

typedef enum {
	BUS_AHB1 = 1, BUS_AHB2, BUS_APB1, BUS_APB2
} busId_t;

void RCC_voidSysClkEn(void);

ERROR_t RCC_enPrephiralEnClk(PeripheralBusId_t copy_enPeripheralBusId);
ERROR_t RCC_enPrephiralDsClk(PeripheralBusId_t copy_enPeripheralBusId);
#endif /* RCC_RCC_INTERFACE_H_ */
