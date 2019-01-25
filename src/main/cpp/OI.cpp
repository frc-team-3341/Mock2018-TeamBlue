/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"
#include <Commands/BucketMove.h>

#include <WPILib.h>
#include "ctre/Phoenix.h"

OI::OI() : leftStick(new Joystick(0)), rightStick(new Joystick(1)), servoButton(new JoystickButton(leftStick, 1)) {
  // Process operator interface input here.
  servoButton->WhenPressed(new BucketMove(0.5)); // opens bucket
	servoButton->WhenReleased(new BucketMove(0)); // closes bucket
}

Joystick* OI::getLeftStick()
{
  return leftStick;
}

Joystick* OI::getRightStick()
{
  return rightStick;
}