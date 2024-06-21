/*
  Purpose: Basic example using LED matrix as a UI
  Notes: 
    1. Must install ArduinoGraphics from the Library Manager https://github.com/arduino-libraries/ArduinoGraphics
	2. Arduino_LED_Matrix is installed by board manager with R4 package
	2. Use https://ledmatrix-editor.arduino.cc/ to draw shapes
    2. requires Arduino Uno Wifi R4
    3. Documentation here (including scrolling text) https://docs.arduino.cc/tutorials/uno-r4-wifi/led-matrix/
  Author: Ben Jones 20/6/24
  Contact: benjmain.jones21@det.nsw.edu.au
*/
#include <ArduinoGraphics.h>
#include <Arduino_LED_Matrix.h>

#include "LedArray.h"


const uint32_t animation2[][8] = {
	{
		0x0,
		0x0,
		0x0,
		66
	},
	{
		0x0,
		0x1f81f80,
		0x0,
		66
	},
	{
		0x3f,
		0xc3fc3fc3,
		0xfc000000,
		66
	},
	{
		0x7fe7f,
		0xe7fe7fe7,
		0xfe7fe000,
		66
	},
	{
		0xffffffff,
		0xffffffff,
		0xffffffff,
		66
	},
	{
		0xffffffff,
		0xfe07e07f,
		0xffffffff,
		66
	},
	{
		0xffffffc0,
		0x3c03c03c,
		0x3ffffff,
		66
	},
	{
		0xfff80180,
		0x18018018,
		0x1801fff,
		66
	}
};

ArduinoLEDMatrix matrix;

void setup() {
  Serial.begin(9600);
  matrix.begin();
  matrix.textFont(Font_5x7);
  matrix.textScrollSpeed(100);
  matrix.stroke(0xFF, 0, 0);
  matrix.beginText(0, 1, 0xFF, 0, 0);
  matrix.print("v0.0.8");
  matrix.endText(SCROLL_LEFT);
}

void loop() {
  for (int i = 0; i <= 7; i++) {
    matrix.loadFrame(animation2[i]);
    delay(50);
  }
}