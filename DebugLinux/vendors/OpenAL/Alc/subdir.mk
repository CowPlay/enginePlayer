################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../vendors/OpenAL/Alc/ALc.c \
../vendors/OpenAL/Alc/ALu.c \
../vendors/OpenAL/Alc/alcConfig.c \
../vendors/OpenAL/Alc/alcEcho.c \
../vendors/OpenAL/Alc/alcModulator.c \
../vendors/OpenAL/Alc/alcReverb.c \
../vendors/OpenAL/Alc/alcRing.c \
../vendors/OpenAL/Alc/alcThread.c \
../vendors/OpenAL/Alc/alsa.c \
../vendors/OpenAL/Alc/bs2b.c 

OBJS += \
./vendors/OpenAL/Alc/ALc.o \
./vendors/OpenAL/Alc/ALu.o \
./vendors/OpenAL/Alc/alcConfig.o \
./vendors/OpenAL/Alc/alcEcho.o \
./vendors/OpenAL/Alc/alcModulator.o \
./vendors/OpenAL/Alc/alcReverb.o \
./vendors/OpenAL/Alc/alcRing.o \
./vendors/OpenAL/Alc/alcThread.o \
./vendors/OpenAL/Alc/alsa.o \
./vendors/OpenAL/Alc/bs2b.o 

C_DEPS += \
./vendors/OpenAL/Alc/ALc.d \
./vendors/OpenAL/Alc/ALu.d \
./vendors/OpenAL/Alc/alcConfig.d \
./vendors/OpenAL/Alc/alcEcho.d \
./vendors/OpenAL/Alc/alcModulator.d \
./vendors/OpenAL/Alc/alcReverb.d \
./vendors/OpenAL/Alc/alcRing.d \
./vendors/OpenAL/Alc/alcThread.d \
./vendors/OpenAL/Alc/alsa.d \
./vendors/OpenAL/Alc/bs2b.d 


# Each subdirectory must supply rules for building sources it contributes
vendors/OpenAL/Alc/%.o: ../vendors/OpenAL/Alc/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -I"/home/developer08/workspace/enginePlayer/../engineSDK/include/" -I"/home/developer08/workspace/enginePlayer/include" -I"/home/developer08/workspace/enginePlayer/src" -I"/home/developer08/workspace/enginePlayer/vendors" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


