/*
 * RCC_Conf.h
 *
 *  Created on: Mar 10, 2024
 *      Author: Mohamed Mabrouk
 */

#ifndef RCC_RCC_CONF_H_
#define RCC_RCC_CONF_H_

/*
 *****************************
 choose clock type:
 1-RCC_u8HSE_CRYSTAL
 2-RCC_u8HSE_RC
 3-RCC_u8HSI
 4-RCC_u8PLL
 *****************************
 */

#define RCC_u8CLK_TYPE RCC_u8HSI

#if RCC_u8CLK_TYPE == RCC_u8PLL
/*
 *****************************
 choose clock type:
 1-RCC_u8PLL_HSI_DIV_2
 2-RCC_u8PLL_HSE_DIV_2
 3-RCC_u8PLL_HSE

 *****************************
 */

#define RCC_u8PLL_INPUT RCC_u8PLL_HSI_DIV_2
#endif

#endif /* RCC_RCC_CONF_H_ */
