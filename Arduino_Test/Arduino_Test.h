
#pragma once

#include <iostream>

class ArduinoTest {
public:
  void begin(unsigned long);
  void end();
  size_t write(const unsigned char*, size_t);
};

extern ArduinoTest Serial;
