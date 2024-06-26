#include "LedArray.h"
#include <Arduino_LED_Matrix.h>

ArduinoLEDMatrix matrix;

void LEDArray::LedArray() {
  init();
}

void LEDArray::init() {
  matrix.textFont(Font_5x7);
  matrix.textScrollSpeed(100);
  matrix.stroke(0xFF, 0, 0);
  matrix.beginText(0, 1, 0xFF, 0, 0);
}

// void LEDArray::print(char Str){
//   this->Str = string;
//   matrix.print(string);
//   matrix.endText(SCROLL_LEFT);
// }

/*
  size_t Print::print(const char str[])
  {
    return write(str);
  }
*/

size_t LEDArray::print(){
  
}

char LEDArray::string(){
  return "hello";
}