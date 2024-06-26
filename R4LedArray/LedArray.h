#ifndef LedArray_H
#define LedArray_H

#include <Arduino.h> // Include the Arduino library

class LEDArray{
  private:
    
  public:    
    char string[];
    LEDArray() {};
    void init();
    void print(char string);
};

#endif