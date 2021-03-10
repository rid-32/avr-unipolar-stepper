#include "main.hpp"

ustpr::UniStepper motor(&STEPPER_PORT, STEPPER_PIN0, STEPPER_PIN1, STEPPER_PIN2,
                        STEPPER_PIN3);

int main() {
  while (true) {
    motor.step();

    _delay_ms(50);
  }
}
