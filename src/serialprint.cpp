#include <Arduino.h>

void serialPrintf(const char * fmt, ...) {
  char buf[80];
  va_list args;
  va_start(args, fmt);
  vsnprintf(buf, sizeof(buf), fmt, args );
  va_end(args);
  Serial.print(buf);
}
