/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Gate.h"
#include "../RobotMap.h"
#include <iostream>

Gate::Gate() : Subsystem("Gate"), //ExampleSubsystem
gate(new Servo(SERVO_PORT))
{
}

void Gate::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void Gate::openGate(){
	//gate->SetAngle(90); //problem
	//gate->Set(0);
	//std::cout << gate->Get() << std::endl;
}

void Gate::closeGate(){
	//gate->SetAngle(0);
	//gate->Set(0.5);
}
