################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include vendors/alut/src/subdir.mk
-include vendors/OpenAL/src/subdir.mk
-include vendors/OpenAL/Alc/subdir.mk
-include src/osx/utils/subdir.mk
-include src/osx/io/subdir.mk
-include src/osx/events/subdir.mk
-include src/osx/subdir.mk
-include src/linux/subdir.mk
-include src/generic/video/OpenGL/material/renderer/subdir.mk
-include src/generic/video/OpenGL/subdir.mk
-include src/generic/video/Null/subdir.mk
-include src/generic/threads/posix/subdir.mk
-include src/generic/io/subdir.mk
-include src/generic/audio/OpenAL/subdir.mk
-include src/generic/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: enginePlayer

# Tool invocations
enginePlayer: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: GCC C++ Linker'
	g++ -L"/home/developer08/workspace/enginePlayer/../engineSDK/DebugLinux/" -o "enginePlayer" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(OBJS)$(C++_DEPS)$(C_DEPS)$(CC_DEPS)$(CPP_DEPS)$(EXECUTABLES)$(CXX_DEPS)$(C_UPPER_DEPS) enginePlayer
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
