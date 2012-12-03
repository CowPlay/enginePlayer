################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/generic/video/OpenGL/COpenGLDriver.cpp \
../src/generic/video/OpenGL/COpenGLTexture.cpp \
../src/generic/video/OpenGL/SharedOpenGLExtensionHandler.cpp 

OBJS += \
./src/generic/video/OpenGL/COpenGLDriver.o \
./src/generic/video/OpenGL/COpenGLTexture.o \
./src/generic/video/OpenGL/SharedOpenGLExtensionHandler.o 

CPP_DEPS += \
./src/generic/video/OpenGL/COpenGLDriver.d \
./src/generic/video/OpenGL/COpenGLTexture.d \
./src/generic/video/OpenGL/SharedOpenGLExtensionHandler.d 


# Each subdirectory must supply rules for building sources it contributes
src/generic/video/OpenGL/%.o: ../src/generic/video/OpenGL/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/developer08/workspace/enginePlayer/../engineSDK/include/" -I"/home/developer08/workspace/enginePlayer/include" -I"/home/developer08/workspace/enginePlayer/src" -I"/home/developer08/workspace/enginePlayer/vendors" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


