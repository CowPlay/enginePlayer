################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/generic/video/OpenGL/material/renderer/COpenGLMaterialRenderer.cpp \
../src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererDetailMap.cpp \
../src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererLightMap.cpp \
../src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererOneTextureBlend.cpp \
../src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererReflection2Layer.cpp \
../src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererSolid.cpp \
../src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererSolid2Layer.cpp \
../src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererSphereMap.cpp \
../src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererTransparentAddColor.cpp \
../src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererTransparentAlphaChannel.cpp \
../src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererTransparentAlphaChannelRef.cpp \
../src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererTransparentReflection2Layer.cpp \
../src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererTransparentVertexAlpha.cpp 

OBJS += \
./src/generic/video/OpenGL/material/renderer/COpenGLMaterialRenderer.o \
./src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererDetailMap.o \
./src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererLightMap.o \
./src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererOneTextureBlend.o \
./src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererReflection2Layer.o \
./src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererSolid.o \
./src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererSolid2Layer.o \
./src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererSphereMap.o \
./src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererTransparentAddColor.o \
./src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererTransparentAlphaChannel.o \
./src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererTransparentAlphaChannelRef.o \
./src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererTransparentReflection2Layer.o \
./src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererTransparentVertexAlpha.o 

CPP_DEPS += \
./src/generic/video/OpenGL/material/renderer/COpenGLMaterialRenderer.d \
./src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererDetailMap.d \
./src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererLightMap.d \
./src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererOneTextureBlend.d \
./src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererReflection2Layer.d \
./src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererSolid.d \
./src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererSolid2Layer.d \
./src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererSphereMap.d \
./src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererTransparentAddColor.d \
./src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererTransparentAlphaChannel.d \
./src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererTransparentAlphaChannelRef.d \
./src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererTransparentReflection2Layer.d \
./src/generic/video/OpenGL/material/renderer/COpenGLMaterialRendererTransparentVertexAlpha.d 


# Each subdirectory must supply rules for building sources it contributes
src/generic/video/OpenGL/material/renderer/%.o: ../src/generic/video/OpenGL/material/renderer/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/home/developer08/workspace/enginePlayer/../engineSDK/include/" -I"/home/developer08/workspace/enginePlayer/include" -I"/home/developer08/workspace/enginePlayer/src" -I"/home/developer08/workspace/enginePlayer/vendors" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


