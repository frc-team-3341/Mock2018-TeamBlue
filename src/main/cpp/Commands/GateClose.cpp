/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "GateClose.h"
#include <iostream>

GateClose::GateClose() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	//Requires(Robot::gate);
}

// Called just before this Command runs the first time
void GateClose::Initialize() {
	Robot::gate->closeGate();
}

// Called repeatedly when this Command is scheduled to run
void GateClose::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool GateClose::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void GateClose::End() {
	std::cout << "drop ball success" << std::endl;

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void GateClose::Interrupted() {

}
