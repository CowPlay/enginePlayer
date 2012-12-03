################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/generic/audio/OpenAL/CAudioDriverOpenAL.cpp \
../src/generic/audio/OpenAL/CSoundListener.cpp \
../src/generic/audio/OpenAL/CSoundNode.cpp \
../src/generic/audio/OpenAL/StaticOpenALExtension.cpp 

OBJS += \
./src/generic/audio/OpenAL/CAudioDriverOpenAL.o \
./src/generic/audio/OpenAL/CSoundListener.o \
./src/generic/audio/OpenAL/CSoundNode.o \
./src/generic/audio/OpenAL/StaticOpenALExtension.o 

CPP_DEPS += \
./src/generic/audio/OpenAL/CAudioDriverOpenAL.d \
./src/generic/audio/OpenAL/CSoundListener.d \
./src/generic/audio/OpenAL/CSoundNode.d \
./src/generic/audio/OpenAL/StaticOpenALExtension.d 


# Each subdirectory must supply rules for building sources it contributes
src/generic/audio/OpenAL/%.o: ../src/generic/audio/OpenAL/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/developer08/workspace/enginePlayer/../engineSDK/include/" -I"/home/developer08/workspace/enginePlayer/include" -I"/home/developer08/workspace/enginePlayer/src" -I"/home/developer08/workspace/enginePlayer/vendors" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


