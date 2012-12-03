################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/osx/!CIrrDeviceMacOSX.cpp \
../src/osx/CEnginePlayerOSX.cpp \
../src/osx/CIrrDeviceMacOSXold.cpp \
../src/osx/irrgamePlayerMac.cpp 

OBJS += \
./src/osx/!CIrrDeviceMacOSX.o \
./src/osx/CEnginePlayerOSX.o \
./src/osx/CIrrDeviceMacOSXold.o \
./src/osx/irrgamePlayerMac.o 

CPP_DEPS += \
./src/osx/!CIrrDeviceMacOSX.d \
./src/osx/CEnginePlayerOSX.d \
./src/osx/CIrrDeviceMacOSXold.d \
./src/osx/irrgamePlayerMac.d 


# Each subdirectory must supply rules for building sources it contributes
src/osx/%.o: ../src/osx/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/developer08/workspace/enginePlayer/../engineSDK/include/" -I"/home/developer08/workspace/enginePlayer/include" -I"/home/developer08/workspace/enginePlayer/src" -I"/home/developer08/workspace/enginePlayer/vendors" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


