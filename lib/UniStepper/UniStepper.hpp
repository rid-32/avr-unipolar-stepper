#include <stdint.h>

namespace ustpr {
const uint8_t STEPS[] = {0b1, 0b11, 0b10, 0b110, 0b100, 0b1100, 0b1000, 0b1001};

const uint8_t MAX_STEPS = 8;

class UniStepper {
public:
  UniStepper(volatile uint8_t *, uint8_t, uint8_t, uint8_t, uint8_t);
  void step();

private:
  volatile uint8_t *port;
  uint8_t pin0, pin1, pin2, pin3, current_step;
};
} // namespace ustpr
