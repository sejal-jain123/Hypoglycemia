#include <Wire.h>
#include "MAX30105.h"

MAX30105 particleSensor;

void setup() {
  Serial.begin(115200);
  if (!particleSensor.begin(Wire, I2C_SPEED_STANDARD)) {
    Serial.println("MAX30102 not found. Check wiring.");
    while (1);
  }

  particleSensor.setup(); // default: 69 sample avg, 411 sample rate
}

void loop() {
  long irValue = particleSensor.getIR();
  Serial.println(irValue);
  delay(50); // approx 20Hz sampling
}