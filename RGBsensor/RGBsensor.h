#ifndef RGBsensor_H
#define RGBsensor_H

#include <Arduino.h>
#include "Adafruit_TCS34725.h"

class RGBsensor {
  private: 
    //place stuff
    byte state;
  public:
    RGBsensor () {} //do not use
    RGBsensor (
      //place variables here
      byte state
    );
    void RGBsensinit();
    void getRGB();
};

#endif