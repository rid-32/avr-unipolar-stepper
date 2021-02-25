#define F_CPU 12000000L

#ifndef __AVR_ATmega32__
#define __AVR_ATmega32__
#endif

#include <UniStepper.hpp>
#include <avr/io.h>
#include <stdint.h>
#include <util/delay.h>

#define STEPPER_PORT PORTA
#define STEPPER_PIN0 0
#define STEPPER_PIN1 1
#define STEPPER_PIN2 2
#define STEPPER_PIN3 3
