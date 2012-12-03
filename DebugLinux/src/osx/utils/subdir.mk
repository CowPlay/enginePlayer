################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/osx/utils/ByteSwap.cpp \
../src/osx/utils/ITimer.cpp 

OBJS += \
./src/osx/utils/ByteSwap.o \
./src/osx/utils/ITimer.o 

CPP_DEPS += \
./src/osx/utils/ByteSwap.d \
./src/osx/utils/ITimer.d 


# Each subdirectory must supply rules for building sources it contributes
src/osx/utils/%.o: ../src/osx/utils/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/developer08/workspace/enginePlayer/../engineSDK/include/" -I"/home/developer08/workspace/enginePlayer/include" -I"/home/developer08/workspace/enginePlayer/src" -I"/home/developer08/workspace/enginePlayer/vendors" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


