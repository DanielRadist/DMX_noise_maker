#include "dmx.h"

void setup() {
  DMX::Initialize(output);
  //for wash
  DMX::Write(1, 127);         // pan
  DMX::Write(2, 127);         // tilt
  DMX::Write(4, 255);         // dim
  DMX::Write(6, 127);         // red
}

void loop()
{
  delay(1000);
  DMX::start_code = 0x01;     // noise start code
  DMX::Write(7, 255);         // green
  delay(1000);
  DMX::Write(7, 0);           // green
  DMX::start_code = 0x00;     // correct start code
}
