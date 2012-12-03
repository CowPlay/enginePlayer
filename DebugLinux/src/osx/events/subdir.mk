################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/osx/events/CUserEventHandlerOSX.cpp 

OBJS += \
./src/osx/events/CUserEventHandlerOSX.o 

CPP_DEPS += \
./src/osx/events/CUserEventHandlerOSX.d 


# Each subdirectory must supply rules for building sources it contributes
src/osx/events/%.o: ../src/osx/events/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/developer08/workspace/enginePlayer/../engineSDK/include/" -I"/home/developer08/workspace/enginePlayer/include" -I"/home/developer08/workspace/enginePlayer/src" -I"/home/developer08/workspace/enginePlayer/vendors" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


