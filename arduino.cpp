/*
*/
#include <Arduino.h>
#include <QMC5883LCompass.h>
#include <Wire.h>
#include <VL53L0X.h>


VL53L0X sensor;
QMC5883LCompass compass;
// constants won't change. They're used here to set pin numbers:
const int AEN = 8;
const int APH = 5;
const int BEN = 7;
const int BPH = 6;
const int button = 9;

// variables will change:
int buttonState = 0;  // variable for reading the pushbutton status
int startrow = 1;
int startcol = 1;
int gate1row = 1;
int gate1col = 1;
int gate2row = 1;
int gate2col = 1;
int gate3row = 1;
int gate3col = 1;
int endrow = 1;
int endcol = 1;

void setup() {
  // initialize the LED pin as an output:
  pinMode(AEN, OUTPUT);
  pinMode(APH, OUTPUT);
  pinMode(BEN, OUTPUT);
  pinMode(BPH, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(button, INPUT);
  compass.init();
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(button);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    while(sensor.readRangeSingleMillimeters() != 1750);{
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
  }
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
  if(gate1row < startrow);{
  while(sensor.readRangeSingleMillimeters() != (500*gate1row)-250);{
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH); 
  }
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
  }
  if(gate1col < startcol);{
    while();{
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(5, HIGH); 
  }
  }
  }
  
}
