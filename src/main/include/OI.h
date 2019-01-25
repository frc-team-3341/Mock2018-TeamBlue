/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once
#include "Joystick.h"
#include "ctre/Phoenix.h"
#include "WPILib.h"

class OI {

 private:
  Joystick* leftStick;
  Joystick* rightStick;
  Button* servoButton;

 public:
  OI();
  Joystick* getLeftStick();
  Joystick* getRightStick();
  Button * getServo();
};
