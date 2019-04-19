################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Carre.cpp \
../src/Cercle.cpp \
../src/Figure.cpp \
../src/Polygone.cpp \
../src/Rectangle.cpp \
../src/TP1.cpp \
../src/TriangleEquilateral.cpp 

OBJS += \
./src/Carre.o \
./src/Cercle.o \
./src/Figure.o \
./src/Polygone.o \
./src/Rectangle.o \
./src/TP1.o \
./src/TriangleEquilateral.o 

CPP_DEPS += \
./src/Carre.d \
./src/Cercle.d \
./src/Figure.d \
./src/Polygone.d \
./src/Rectangle.d \
./src/TP1.d \
./src/TriangleEquilateral.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


