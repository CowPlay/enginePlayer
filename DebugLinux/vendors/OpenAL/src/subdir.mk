################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../vendors/OpenAL/src/alAuxEffectSlot.c \
../vendors/OpenAL/src/alBuffer.c \
../vendors/OpenAL/src/alDatabuffer.c \
../vendors/OpenAL/src/alEffect.c \
../vendors/OpenAL/src/alError.c \
../vendors/OpenAL/src/alExtension.c \
../vendors/OpenAL/src/alFilter.c \
../vendors/OpenAL/src/alListener.c \
../vendors/OpenAL/src/alSource.c \
../vendors/OpenAL/src/alState.c \
../vendors/OpenAL/src/alThunk.c \
../vendors/OpenAL/src/mixer.c \
../vendors/OpenAL/src/null.c \
../vendors/OpenAL/src/openal-info.c \
../vendors/OpenAL/src/panning.c 

OBJS += \
./vendors/OpenAL/src/alAuxEffectSlot.o \
./vendors/OpenAL/src/alBuffer.o \
./vendors/OpenAL/src/alDatabuffer.o \
./vendors/OpenAL/src/alEffect.o \
./vendors/OpenAL/src/alError.o \
./vendors/OpenAL/src/alExtension.o \
./vendors/OpenAL/src/alFilter.o \
./vendors/OpenAL/src/alListener.o \
./vendors/OpenAL/src/alSource.o \
./vendors/OpenAL/src/alState.o \
./vendors/OpenAL/src/alThunk.o \
./vendors/OpenAL/src/mixer.o \
./vendors/OpenAL/src/null.o \
./vendors/OpenAL/src/openal-info.o \
./vendors/OpenAL/src/panning.o 

C_DEPS += \
./vendors/OpenAL/src/alAuxEffectSlot.d \
./vendors/OpenAL/src/alBuffer.d \
./vendors/OpenAL/src/alDatabuffer.d \
./vendors/OpenAL/src/alEffect.d \
./vendors/OpenAL/src/alError.d \
./vendors/OpenAL/src/alExtension.d \
./vendors/OpenAL/src/alFilter.d \
./vendors/OpenAL/src/alListener.d \
./vendors/OpenAL/src/alSource.d \
./vendors/OpenAL/src/alState.d \
./vendors/OpenAL/src/alThunk.d \
./vendors/OpenAL/src/mixer.d \
./vendors/OpenAL/src/null.d \
./vendors/OpenAL/src/openal-info.d \
./vendors/OpenAL/src/panning.d 


# Each subdirectory must supply rules for building sources it contributes
vendors/OpenAL/src/%.o: ../vendors/OpenAL/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -I"/home/developer08/workspace/enginePlayer/../engineSDK/include/" -I"/home/developer08/workspace/enginePlayer/include" -I"/home/developer08/workspace/enginePlayer/src" -I"/home/developer08/workspace/enginePlayer/vendors" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


