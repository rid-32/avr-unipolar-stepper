#include "Led.hpp"

using namespace led;

Led::Led(volatile uint8_t *port, uint8_t pin) {
  this->port = port;
  this->pin = pin;

  /* set DDRx register */
  *(port - 1) |= 1 << pin;
  /* set PORTx register */
  *port &= ~(1 << pin);
}

void Led::toggle() { *port ^= 1 << pin; }
