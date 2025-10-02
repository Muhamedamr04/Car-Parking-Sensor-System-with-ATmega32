################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../GPIO_messi.c \
../app.c \
../buzzer.c \
../icu_m.c \
../lcd_m.c \
../led.c \
../ultrasonic.c 

OBJS += \
./GPIO_messi.o \
./app.o \
./buzzer.o \
./icu_m.o \
./lcd_m.o \
./led.o \
./ultrasonic.o 

C_DEPS += \
./GPIO_messi.d \
./app.d \
./buzzer.d \
./icu_m.d \
./lcd_m.d \
./led.d \
./ultrasonic.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=16000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


