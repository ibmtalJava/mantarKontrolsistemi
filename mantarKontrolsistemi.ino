#include "mantarSensor.h"
MantarSensor mantarSensor(A1,11,8,6);
void setup() {
  mantarSensor.setup();
}

void loop() {
 digitalWrite(mantarSensor.tempDownPin,HIGH);

}
