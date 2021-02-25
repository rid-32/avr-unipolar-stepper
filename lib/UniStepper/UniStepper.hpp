#include <stdint.h>

namespace ustpr {
class UniStepper {
public:
  UniStepper(volatile uint8_t *, uint8_t, uint8_t, uint8_t, uint8_t);
  void step();

private:
  volatile uint8_t *port;
  uint8_t pin0, pin1, pin2, pin3;
};
} // namespace ustpr
