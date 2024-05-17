#include "STD_TYPE.h"
#include "STM32F4_MEM_MAP.h"
#include "BIT_MATH.h"

#include "GPIO_Interface.h"
#include "GPIO_Conf.h"
#include "GPIO_Private.h"

void GPIO_voidInit(void) {

	for (GPIO_PINS_t pinNum = PINA0; pinNum < PIN_TOTAL; pinNum++) {
		if (pinNum <= PINB15 || pinNum >= PINC13) {
			GPIO_enPinConfig(pinNum, GPIO_pinStatusArray[pinNum]);
		}
	}
}

ERROR_t GPIO_enPinConfig(GPIO_PINS_t copy_enPinNum,
		GPIO_PIN_MODE_t copy_enPinMode) {
	GPIO_Port_t local_enPort = copy_enPinNum / 16;
	GPIO_PINS_t local_enPin = copy_enPinNum % 16;
	/*uint32_t MODER = (((uint32_t) copy_enPinMode.MODER) & (uint32_t) 0b11);
	 uint32_t OTYPER = (((uint32_t) copy_enPinMode.OTYPER) & (uint32_t) 0b1);
	 uint32_t PUPDR = (((uint32_t) copy_enPinMode.PUPDR) & (uint32_t) 0b11);*/
	//uint8_t IDR = ((copy_enPinMode) & 0x00000011);
	ERROR_t local_enError = OK;

	switch (local_enPort) {
	case PORTA:
		GPIOA->GPIO_MODER |= (copy_enPinMode.MODER << (local_enPin * 2));
		GPIOA->GPIO_OTYPER |= (copy_enPinMode.OTYPER << local_enPin);
		GPIOA->GPIO_PUPDR |= (copy_enPinMode.PUPDR << (local_enPin * 2));
		GPIOA->GPIO_OSPEEDR |= (copy_enPinMode.OSPEEDER << (local_enPin * 2));
		break;

	case PORTB:
		GPIOB->GPIO_MODER |= (copy_enPinMode.MODER << (local_enPin * 2));
		GPIOB->GPIO_OTYPER |= (copy_enPinMode.OTYPER << local_enPin);
		GPIOB->GPIO_PUPDR |= (copy_enPinMode.PUPDR << (local_enPin * 2));
		GPIOB->GPIO_OSPEEDR |= (copy_enPinMode.OSPEEDER << (local_enPin * 2));
		break;

	case PORTC:
		GPIOC->GPIO_MODER |= (copy_enPinMode.MODER << (local_enPin * 2));
		GPIOC->GPIO_OTYPER |= (copy_enPinMode.OTYPER << local_enPin);
		GPIOC->GPIO_PUPDR |= (copy_enPinMode.PUPDR << (local_enPin * 2));
		GPIOC->GPIO_OSPEEDR |= (copy_enPinMode.OSPEEDER << (local_enPin * 2));
		break;

	default:
		break;
	}
	return local_enError;
}

ERROR_t GPIO_enPinSet(GPIO_PINS_t copy_enPinNum, GPIO_PIN_OUT_t copy_enPinOut) {
	GPIO_Port_t local_enPort = copy_enPinNum / 16;
	GPIO_PINS_t local_enPin = copy_enPinNum % 16;
	ERROR_t local_enError = OK;
	if (copy_enPinOut == LOW) {
		switch (local_enPort) {
		case PORTA:
			CLR_BIT(GPIOA->GPIO_ODR, local_enPin);
			break;

		case PORTB:
			CLR_BIT(GPIOB->GPIO_ODR, local_enPin);
			break;

		case PORTC:
			CLR_BIT(GPIOC->GPIO_ODR, local_enPin);
			break;

		default:
			break;
		}
	} else if (copy_enPinOut == HIGH) {
		switch (local_enPort) {
		case PORTA:
			SET_BIT(GPIOA->GPIO_ODR, (local_enPin));
			break;

		case PORTB:
			SET_BIT(GPIOB->GPIO_ODR, (local_enPin));
			break;

		case PORTC:
			SET_BIT(GPIOC->GPIO_ODR, (local_enPin));
			break;

		default:
			break;
		}
	}
	return local_enError;
}

ERROR_t GPIO_enPinSetSpeed(GPIO_PINS_t copy_enPinNum, GPIO_SPEED_t copy_enSpeed) {
	GPIO_Port_t local_enPort = copy_enPinNum / 16;
	GPIO_PINS_t local_enPin = copy_enPinNum % 16;
	ERROR_t local_enError = OK;

	switch (local_enPort) {
	case PORTA:
		GPIOA->GPIO_OSPEEDR |= ((uint32_t) copy_enSpeed << (local_enPin * 2));
		break;
	case PORTB:
		GPIOB->GPIO_OSPEEDR |= ((uint32_t) copy_enSpeed << (local_enPin * 2));
		break;
	case PORTC:
		GPIOC->GPIO_OSPEEDR |= ((uint32_t) copy_enSpeed << (local_enPin * 2));
		break;
	default:
		break;

	}

	return local_enError;
}
