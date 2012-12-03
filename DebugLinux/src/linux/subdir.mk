################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/linux/CEnginePlayerLinux.cpp 

OBJS += \
./src/linux/CEnginePlayerLinux.o 

CPP_DEPS += \
./src/linux/CEnginePlayerLinux.d 


# Each subdirectory must supply rules for building sources it contributes
src/linux/%.o: ../src/linux/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/developer08/workspace/enginePlayer/../engineSDK/include/" -I"/home/developer08/workspace/enginePlayer/include" -I"/home/developer08/workspace/enginePlayer/src" -I"/home/developer08/workspace/enginePlayer/vendors" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


