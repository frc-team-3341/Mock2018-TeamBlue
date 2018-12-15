/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Turn.h"


Turn::Turn(double m_angle) {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  angle = m_angle;
  Requires(Robot::drive);
}

// Called just before this Command runs the first time
void Turn::Initialize() {
  Robot::drive->resetGyro();
}

// Called repeatedly when this Command is scheduled to run
void Turn::Execute() 
{
  Robot::drive->turn(angle);
}

// Make this return true when this Command no longer needs to run execute()
bool Turn::IsFinished() { return true; }

// Called once after isFinished returns true
void Turn::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Turn::Interrupted() {}
