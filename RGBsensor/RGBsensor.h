#ifndef RGBsensor_H
#define RGBsensor_H

#include <Arduino.h>
#include "Adafruit_TCS34725.h"

class RGBsensor {
  private: 
    float Rval;
    float Gval;
    float Bval;
    byte pin;
  public:
    RGBsensor () {} //do not use
    RGBsensor (
      float Rval, float Gval, float Bval, byte pin
    );
    void RGBsensinit(byte pin); //initiliases system
    void getVals(float Rval, float Gval, float Bval); //return colour in RGB values
    void getCol(); //return colour as string
};

#endif