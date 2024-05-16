################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/GPIO/GPIO_Conf.c \
../MCAL/GPIO/GPIO_Prog.c 

OBJS += \
./MCAL/GPIO/GPIO_Conf.o \
./MCAL/GPIO/GPIO_Prog.o 

C_DEPS += \
./MCAL/GPIO/GPIO_Conf.d \
./MCAL/GPIO/GPIO_Prog.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/GPIO/%.o MCAL/GPIO/%.su MCAL/GPIO/%.cyclo: ../MCAL/GPIO/%.c MCAL/GPIO/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F401RCTx -c -I../Inc -I"D:/STM32F401RCT6/STM32F401RCT6/LIB" -I"D:/STM32F401RCT6/STM32F401RCT6/MCAL/RCC" -I"D:/STM32F401RCT6/STM32F401RCT6/MCAL/GPIO" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-MCAL-2f-GPIO

clean-MCAL-2f-GPIO:
	-$(RM) ./MCAL/GPIO/GPIO_Conf.cyclo ./MCAL/GPIO/GPIO_Conf.d ./MCAL/GPIO/GPIO_Conf.o ./MCAL/GPIO/GPIO_Conf.su ./MCAL/GPIO/GPIO_Prog.cyclo ./MCAL/GPIO/GPIO_Prog.d ./MCAL/GPIO/GPIO_Prog.o ./MCAL/GPIO/GPIO_Prog.su

.PHONY: clean-MCAL-2f-GPIO

