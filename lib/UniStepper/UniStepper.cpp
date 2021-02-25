#include "UniStepper.hpp"

using namespace ustpr;

UniStepper::UniStepper(volatile uint8_t *port, uint8_t pin0, uint8_t pin1,
                       uint8_t pin2, uint8_t pin3) {
  this->port = port;
  this->pin0 = pin0;
  this->pin1 = pin1;
  this->pin2 = pin2;
  this->pin3 = pin3;

  /* setup DDR */
  *(port - 1) = (1 << pin0 | 1 << pin1 | 1 << pin2 | 1 << pin3);
  /* clear PORT */
  *port &= ~(1 << pin0 | 1 << pin1 | 1 << pin2 | 1 << pin3);
}
