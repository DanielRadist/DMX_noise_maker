#include "dmx.h"

void setup() {
  DMX::Initialize(output);
  //for wash
  DMX::Write(1, 127);         // pan
  DMX::Write(2, 127);         // tilt
  DMX::Write(4, 255);         // dim
  DMX::Write(6, 127);         // red
  DMX::corrected_channel = 6; // the channel affected by noise (red)
  DMX::correct_value = 127;   // correct channel value (red)
}

void loop()
{
  delay(1000);
  DMX::Write(6, 255);         //red noise
}
