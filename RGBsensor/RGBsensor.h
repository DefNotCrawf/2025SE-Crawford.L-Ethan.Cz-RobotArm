#ifndef RGBsensor_H
#define RGBsensor_H

#include <Arduino.h>
#include "Adafruit_TCS34725.h"

class RGBsensor {
  private: 
    //place stuff
  public:
    RGBsens () {}; //do not use
    RGBsensor (
      //place variables here
    );
    void RGBsensinit();
    void getRGB();
};

#endif