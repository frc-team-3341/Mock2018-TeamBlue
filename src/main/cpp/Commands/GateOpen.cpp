/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/
#include <iostream>
#include "GateOpen.h"

GateOpen::GateOpen() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	//Requires(Robot::gate);
		std::cout << " constructor worked---------------------------------------------------------------" << std::endl;

}

// Called just before this Command runs the first time
void GateOpen::Initialize() {
	Robot::gate->openGate();
	std::cout << "drop ball initialize------------------------------------------------------------------" << std::endl;
}

// Called repeatedly when this Command is scheduled to run
void GateOpen::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool GateOpen::IsFinished() {
	
	std::cout << "drop ball is finished------------------------------------------------------------------" << std::endl;

	return true;

}

// Called once after isFinished returns true
void GateOpen::End() 
{
	std::cout << "drop ball success" << std::endl;
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void GateOpen::Interrupted() {

}
