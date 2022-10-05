#include "mantarSensor.h"
MantarSensor mantarSensor(A1,11,8,6);
void setup() {
  Serial.begin(9600);
  mantarSensor.setup();
}

void loop() {
 Serial.println(mantarSensor.temp());
 mantarSensor.attach();
}
