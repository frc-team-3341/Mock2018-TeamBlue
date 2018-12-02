/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"

#include <WPILib.h>
#include "Commands/AutoLine.h"

OI::OI() :
leftStick(new Joystick(0)),
rightStick(new Joystick(1)),
leftTrigger(new JoystickButton(leftStick,1))
{
	// Process operator interface input here.
	leftTrigger->WhenPressed(new AutoLine());
}

Joystick* OI::getLeftStick(){
	return leftStick;
}

Joystick* OI::getRightStick(){
	return rightStick;
}