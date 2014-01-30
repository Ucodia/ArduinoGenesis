/*
 * ArduinoGenesisDemo.ino
 *
 * Copyright (c) 2014 Ucodia, Lionel Ringenbach
 *
 * Project URL: https://github.com/Ucodia/ArduinoGenesis
 *
 */

#include "GenesisGamepad.h"

GenesisGamepad gamepad;

void setup()
{
  Serial.begin(9600);
  gamepad.init();
}

void loop()
{
  gamepad.update();
  
  if (gamepad.upButton)
  {
    Serial.println("Up");
  }
  if (gamepad.downButton)
  {
    Serial.println("Down");
  }
  if (gamepad.leftButton)
  {
    Serial.println("Left");
  }
  if (gamepad.rightButton)
  {
    Serial.println("Right");
  }
  if (gamepad.aButton)
  {
    Serial.println("A");
  }
  if (gamepad.bButton)
  {
    Serial.println("B");
  }
  if (gamepad.cButton)
  {
    Serial.println("C");
  }
  if (gamepad.startButton)
  {
    Serial.println("Start");
  }
  
  delay(100);
}
