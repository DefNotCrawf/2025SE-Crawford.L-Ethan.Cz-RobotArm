#ifndef RGBsensor_H
#define RGBsensor_H

#include <Arduino.h>
#include "Adafruit_TCS34725.h"

class RGBsensor {
  private: 
    float Rval;
    float Gval;
    float Bval;
    bool state;
    byte pin;
  public:
    RGBsensor () {} //do not use
    RGBsensor (
      //place variables here
      float Rval,
      float Gval,
      float Bval,
      byte state,
      byte pin
    );
    void RGBsensinit(byte pin);
    void getRGB();
};

#endif