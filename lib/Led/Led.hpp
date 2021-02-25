#include <stdint.h>

#ifndef __LED_H__
#define __LED_H__

namespace led {
class Led {
public:
  volatile uint8_t *port;
  uint8_t pin;

  Led(volatile uint8_t *, uint8_t);
  void toggle();
};
} // namespace led

#endif
