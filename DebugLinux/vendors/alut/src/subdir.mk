################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../vendors/alut/src/alutBufferData.c \
../vendors/alut/src/alutCodec.c \
../vendors/alut/src/alutError.c \
../vendors/alut/src/alutInit.c \
../vendors/alut/src/alutInputStream.c \
../vendors/alut/src/alutLoader.c \
../vendors/alut/src/alutOutputStream.c \
../vendors/alut/src/alutUtil.c \
../vendors/alut/src/alutVersion.c \
../vendors/alut/src/alutWaveform.c 

OBJS += \
./vendors/alut/src/alutBufferData.o \
./vendors/alut/src/alutCodec.o \
./vendors/alut/src/alutError.o \
./vendors/alut/src/alutInit.o \
./vendors/alut/src/alutInputStream.o \
./vendors/alut/src/alutLoader.o \
./vendors/alut/src/alutOutputStream.o \
./vendors/alut/src/alutUtil.o \
./vendors/alut/src/alutVersion.o \
./vendors/alut/src/alutWaveform.o 

C_DEPS += \
./vendors/alut/src/alutBufferData.d \
./vendors/alut/src/alutCodec.d \
./vendors/alut/src/alutError.d \
./vendors/alut/src/alutInit.d \
./vendors/alut/src/alutInputStream.d \
./vendors/alut/src/alutLoader.d \
./vendors/alut/src/alutOutputStream.d \
./vendors/alut/src/alutUtil.d \
./vendors/alut/src/alutVersion.d \
./vendors/alut/src/alutWaveform.d 


# Each subdirectory must supply rules for building sources it contributes
vendors/alut/src/%.o: ../vendors/alut/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -I"/home/developer08/workspace/enginePlayer/../engineSDK/include/" -I"/home/developer08/workspace/enginePlayer/include" -I"/home/developer08/workspace/enginePlayer/src" -I"/home/developer08/workspace/enginePlayer/vendors" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


