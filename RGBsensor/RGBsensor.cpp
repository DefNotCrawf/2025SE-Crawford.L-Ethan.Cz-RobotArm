#include "RGBsensor.h"

RGBsensor::RGBsensor (float Rval, float Gval, float Bval, byte state, byte pin) {
  //input data
  this->Rval = Rval;
  this->Gval = Gval;
  this->Bval = Bval;
  this->state = state;
  this ->pin = pin;
}


void RGBsensor::RGBsensinit(byte state) {
  //add stuff
  pinMode(pin, INPUT);
  if(defaultState == 1) {
      state = 1;
      digitalWrite(pin, state);
    }
    else {
      state = 0;
      digitalWrite(pin, state);
    }
}

void RGBsensor::getRGB(float Rval, float Gval, float Bval) {
  //add stuff
  print(Adafruit_TCS34725.getRGB())
}









