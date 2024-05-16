################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/RCC/RCC_Prog.c 

OBJS += \
./Drivers/RCC/RCC_Prog.o 

C_DEPS += \
./Drivers/RCC/RCC_Prog.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/RCC/%.o Drivers/RCC/%.su Drivers/RCC/%.cyclo: ../Drivers/RCC/%.c Drivers/RCC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F401RCTx -c -I../Inc -I"D:/STM32F401RCT6/STM32F401RCT6/LIB" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-RCC

clean-Drivers-2f-RCC:
	-$(RM) ./Drivers/RCC/RCC_Prog.cyclo ./Drivers/RCC/RCC_Prog.d ./Drivers/RCC/RCC_Prog.o ./Drivers/RCC/RCC_Prog.su

.PHONY: clean-Drivers-2f-RCC

