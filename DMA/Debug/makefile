################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: DMA

dependents:
	-cd /home/utnso/git/TPOP/libreria/Debug && $(MAKE) all

# Tool invocations
DMA: $(OBJS) $(USER_OBJS) /home/utnso/git/TPOP/libreria/Debug/liblibreria.so
	@echo 'Building target: $@'
	@echo 'Invoking: GCC C Linker'
	gcc -L"/home/utnso/git/TPOP/libreria/Debug" -o "DMA" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) DMA
	-@echo ' '

.PHONY: all clean dependents
/home/utnso/git/TPOP/libreria/Debug/liblibreria.so:

-include ../makefile.targets
