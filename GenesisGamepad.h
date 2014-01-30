/*
 * GenesisGamepad.h
 *
 * Copyright (c) 2014 Ucodia, Lionel Ringenbach
 *
 * Project URL: https://github.com/Ucodia/ArduinoGenesis
 *
 */

#ifndef GenesisGamepad_h
#define GenesisGamepad_h

class GenesisGamepad
{
  public:
    bool upButton;
    bool downButton;
    bool leftButton;
    bool rightButton;
    bool aButton;
    bool bButton;
    bool cButton;
    bool startButton;
    void init();
    void update();
};

#endif
