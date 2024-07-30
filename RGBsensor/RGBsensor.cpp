#include "RGBsensor.h"

RGBsensor::RGBsensor (float Rval, float Gval, float Bval, byte pin) {
  //input data
  this->Rval = Rval;
  this->Gval = Gval;
  this->Bval = Bval;
  this->pin = pin;
}


void RGBsensor::RGBsensinit(byte pin) {
  pinMode(pin, INPUT);
  Adafruit_TCS34725.setIntegrationTime();
}

void RGBsensor::getVals(float Rval, float Gval, float Bval) {
  Adafruit_TCS34725.getRGB();
}

void RGBsensor::getCol(float Rval, float Gval, float Bval) {
  switch (getVals()) {
    case (Bval > Rval && Bval > Gval) 
      {

      }
    case (Gval > Rval && Gval > Bval)
      {

      }
    case (Rval > Gval && Rval > Bval) 
      {

      }
  }
}







