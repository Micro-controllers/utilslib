#include <Arduino.h>
#include "serialprint.h"

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Potentiometer reading between 0 - 1023
  serialPrintf("potval = %d\n", 123);
}