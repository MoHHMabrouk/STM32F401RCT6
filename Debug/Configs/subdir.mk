################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Configs/GPIO_Conf.c 

OBJS += \
./Configs/GPIO_Conf.o 

C_DEPS += \
./Configs/GPIO_Conf.d 


# Each subdirectory must supply rules for building sources it contributes
Configs/%.o Configs/%.su Configs/%.cyclo: ../Configs/%.c Configs/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F401RCTx -c -I../Inc -I"D:/STM32F401RCT6/STM32F401RCT6/LIB" -I"D:/STM32F401RCT6/STM32F401RCT6/MCAL/RCC" -I"D:/STM32F401RCT6/STM32F401RCT6/MCAL/GPIO" -I"D:/STM32F401RCT6/STM32F401RCT6/Configs" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Configs

clean-Configs:
	-$(RM) ./Configs/GPIO_Conf.cyclo ./Configs/GPIO_Conf.d ./Configs/GPIO_Conf.o ./Configs/GPIO_Conf.su

.PHONY: clean-Configs

