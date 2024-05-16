/*
 * RCC_Prog.c
 *
 *  Created on: Mar 10, 2024
 *      Author: Mohamed Mabrouk
 */

#include "STD_TYPE.h"
#include "BIT_MATH.h"
#include "STM32F4_MEM_MAP.h"
#include "RCC_Interface.h"
#include "RCC_Conf.h"

void RCC_voidSysClkEn(void)
{
#if RCC_u8CLK_TYPE == RCC_u8HSE_CRYSTAL
	RCC->RCC_CR = 0x00000080;
#elif RCC_u8CLK_TYPE == RCC_u8HSE_RC
	RCC->RCC_CR = 0x00050080;
#elif RCC_u8CLK_TYPE == RCC_u8HSI
	RCC->RCC_CR = 0x00000081;
	//RCC->RCC_CFGR = 0x00000000;
#elif RCC_u8CLK_TYPE == RCC_u8PLL
#if RCC_u8PLL_INPUT == RCC_u8PLL_HSI_DIV_2
#elif RCC_u8PLL_INPUT == RCC_u8PLL_HSE_DIV_2
#elif RCC_u8PLL_INPUT == RCC_u8PLL_HSE
#endif
	RCC->RCC_CR = 0x00010080;
#else
#error("You choosed wrong Clock Type")
#endif
}

ERROR_t RCC_enPrephiralEnClk(PeripheralBusId_t copy_enPeripheralBusId)
{
	busId_t local_enBusID = copy_enPeripheralBusId / 100;
	PeripheralBusId_t local_enPeripheralID = copy_enPeripheralBusId % 100;
	ERROR_t local_enErrorState = OK;

	if (local_enPeripheralID <= 31)
	{
		switch (local_enBusID)
		{
		case BUS_AHB1:
			SET_BIT(RCC->RCC_AHB1ENR, local_enPeripheralID);
			break;

		case BUS_AHB2:
			SET_BIT(RCC->RCC_AHB2ENR, local_enPeripheralID);
			break;

		case BUS_APB1:
			SET_BIT(RCC->RCC_APB1ENR, local_enPeripheralID);
			break;

		case BUS_APB2:
			SET_BIT(RCC->RCC_APB2ENR, local_enPeripheralID);
			break;

		default:
			break;
		}
	}
	else
	{
		local_enErrorState = NOK;
	}
	return local_enErrorState;
}

ERROR_t RCC_enPrephiralDsClk(PeripheralBusId_t copy_enPeripheralBusId)
{
	busId_t local_enBusID = copy_enPeripheralBusId / 100;
	PeripheralBusId_t local_enPeripheralID = copy_enPeripheralBusId % 100;
	ERROR_t local_enErrorState = OK;

	if (local_enPeripheralID <= 31)
	{
		switch (local_enBusID)
		{
		case BUS_AHB1:
			CLR_BIT(RCC->RCC_AHB1ENR, local_enPeripheralID);
			break;

		case BUS_AHB2:
			CLR_BIT(RCC->RCC_AHB2ENR, local_enPeripheralID);
			break;

		case BUS_APB1:
			CLR_BIT(RCC->RCC_APB1ENR, local_enPeripheralID);
			break;

		case BUS_APB2:
			CLR_BIT(RCC->RCC_APB2ENR, local_enPeripheralID);
			break;

		default:
			break;
		}
	}
	else
	{
		local_enErrorState = NOK;
	}
	return local_enErrorState;
}
