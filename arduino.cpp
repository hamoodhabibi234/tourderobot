// QMC5883LCompass - Version: Latest 

/*

*/
#include <Arduino.h>
#include <QMC5883LCompass.h>
#include <Wire.h>
#include <VL53L0X.h>

VL53L0X sensor;
QMC5883LCompass compass;
void setup() {
  int robotforwards[] = {5,6,7,8};
  int robotback[] = {5,6};
  int robotleft[] = {5,6,7};
  int robotright[] = {5,6,8};
  int button = 9;
  pinMode(robotforwards, OUTPUT);
  pinMode(robotback, OUTPUT);
  pinMode(robotleft, OUTPUT);
  pinMode(robotright, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  compass.init();
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

  
}

void loop() {
while(button == HIGH);
  delay(1);
while(sensor.readRangeSingleMillimeters != 1750);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
if(gate1row < startrow);
  while(sensor.readRangeSingleMillimeters [!= 500*gate1row]-250);
  

  
}
