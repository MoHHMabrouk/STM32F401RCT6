/*
 * STM32F4_MEM_MAP.h
 *
 *  Created on: Mar 10, 2024
 *      Author: Mohamed Mabrouk
 */

#ifndef MEM_MAP_H_
#define MEM_MAP_H_

/***************** RCC *****************/

#define RCC_u32BASE_ADDRESS 0x40023800

typedef struct {
	uint32_t RCC_CR;
	uint32_t RCC_PLLCFGR;
	uint32_t RCC_CFGR;
	uint32_t RCC_CIR;
	uint32_t RCC_AHB1RSTR;
	uint32_t RCC_AHB2RSTR;
	uint32_t RESERVED1;
	uint32_t RESERVED2;
	uint32_t RCC_APB1RSTR;
	uint32_t RCC_APB2RSTR;
	uint32_t RESERVED3;
	uint32_t RESERVED4;
	uint32_t RCC_AHB1ENR;
	uint32_t RCC_AHB2ENR;
	uint32_t RESERVED5;
	uint32_t RESERVED6;
	uint32_t RCC_APB1ENR;
	uint32_t RCC_APB2ENR;
	uint32_t RESERVED7;
	uint32_t RESERVED8;
	uint32_t RCC_AHB1LPENR;
	uint32_t RCC_AHB2LPENR;
	uint32_t RESERVED9;
	uint32_t RESERVED10;
	uint32_t RCC_APB1LPENR;
	uint32_t RCC_APB2LPENR;
	uint32_t RESERVED11;
	uint32_t RESERVED12;
	uint32_t RCC_BDCR;
	uint32_t RCC_CSR;
	uint32_t RESERVED13;
	uint32_t RESERVED14;
	uint32_t RCC_SSCGR;
	uint32_t RCC_PLLI2SCFGR;
	uint32_t RESERVED15;
	uint32_t RCC_DCKCFGR;
} RCC_REG_t;

#define RCC ((volatile RCC_REG_t*)RCC_u32BASE_ADDRESS)

/***************** RCC_CR *****************/

#define RCC_HSION 0
#define RCC_HSIRDY 1
#define RCC_HSITRIM0 3
#define RCC_HSITRIM1 4
#define RCC_HSITRIM2 5
#define RCC_HSITRIM3 6
#define RCC_HSITRIM4 7
#define RCC_HSICAL0 8
#define RCC_HSICAL1 9
#define RCC_HSICAL2 10
#define RCC_HSICAL3 11
#define RCC_HSICAL4 12
#define RCC_HSICAL5 13
#define RCC_HSICAL6 14
#define RCC_HSICAL7 15
#define RCC_HSEON 16
#define RCC_HSERDY 17
#define RCC_HSEBYP 18
#define RCC_CSSON 19
#define RCC_PLLON 24
#define RCC_PLLRDY 25
#define CC_PLLI2SON 26
#define RCC_PLLI2SRDY 27

/***************** GPIO *****************/

#define GPIOA_u32BASE_ADDRESS 0x40020000
#define GPIOB_u32BASE_ADDRESS 0x40020400
#define GPIOC_u32BASE_ADDRESS 0x40020800



typedef struct {
	uint32_t GPIO_MODER;
	uint32_t GPIO_OTYPER;
	uint32_t GPIO_OSPEEDR;
	uint32_t GPIO_PUPDR;
	uint32_t GPIO_IDR;
	uint32_t GPIO_ODR;
	uint32_t GPIO_BSRR;
	uint32_t GPIO_LCKR;
	uint32_t GPIO_AFRL;
	uint32_t GPIO_AFRH;
} GPIO_REG_t;

#define GPIOA ((volatile GPIO_REG_t*)GPIOA_u32BASE_ADDRESS)
#define GPIOB ((volatile GPIO_REG_t*)GPIOB_u32BASE_ADDRESS)
#define GPIOC ((volatile GPIO_REG_t*)GPIOC_u32BASE_ADDRESS)

#endif /* MEM_MAP_H_ */
