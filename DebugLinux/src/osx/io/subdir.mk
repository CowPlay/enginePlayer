################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/osx/io/SharedFileSystem.cpp 

OBJS += \
./src/osx/io/SharedFileSystem.o 

CPP_DEPS += \
./src/osx/io/SharedFileSystem.d 


# Each subdirectory must supply rules for building sources it contributes
src/osx/io/%.o: ../src/osx/io/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/developer08/workspace/enginePlayer/../engineSDK/include/" -I"/home/developer08/workspace/enginePlayer/include" -I"/home/developer08/workspace/enginePlayer/src" -I"/home/developer08/workspace/enginePlayer/vendors" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

