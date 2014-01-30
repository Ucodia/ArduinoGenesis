/*
 * GenesisGamepad.cpp
 *
 * Copyright (c) 2014 Ucodia, Lionel Ringenbach
 *
 * Project URL: https://github.com/Ucodia/ArduinoGenesis
 *
 */

#include "Arduino.h"
#include "GenesisGamepad.h"

// Button pins
#define UP_UP_PIN 2
#define DOWN_DOWN_PIN 3
#define GND_LEFT_PIN 4
#define GND_RIGHT_PIN 5
#define A_B_PIN 6
#define START_C_PIN 7

// Select switch pin
#define SELECT_PIN 8

void GenesisGamepad::init()
{
  // Initialize button pins as input
  pinMode(UP_UP_PIN, INPUT);
  pinMode(DOWN_DOWN_PIN, INPUT);
  pinMode(GND_LEFT_PIN, INPUT);
  pinMode(GND_RIGHT_PIN, INPUT);
  pinMode(A_B_PIN, INPUT);
  pinMode(START_C_PIN, INPUT);

  // Initialize select switch as output
  pinMode(SELECT_PIN, OUTPUT);
}

void GenesisGamepad::update()
{
  // Set select switch to low
  digitalWrite(SELECT_PIN, LOW);
  
  // Read inputs with select switch on low
  upButton = digitalRead(UP_UP_PIN) == LOW;
  downButton = digitalRead(DOWN_DOWN_PIN) == LOW;
  aButton = digitalRead(A_B_PIN) == LOW;
  startButton = digitalRead(START_C_PIN) == LOW;
  
  // Set select switch to high
  digitalWrite(SELECT_PIN, HIGH);
  
  // Read inputs with select switch on high
  leftButton = digitalRead(GND_LEFT_PIN) == LOW;
  rightButton = digitalRead(GND_RIGHT_PIN) == LOW;
  bButton = digitalRead(A_B_PIN) == LOW;
  cButton = digitalRead(START_C_PIN) == LOW;
}
