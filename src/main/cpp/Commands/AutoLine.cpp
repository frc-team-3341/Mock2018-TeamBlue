/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "AutoLine.h"

AutoLine::AutoLine() {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void AutoLine::Initialize() {}

// Called repeatedly when this Command is scheduled to run
void AutoLine::Execute() {
  Robot::drive->tankDrive(0.75, 0.75);
  if(Robot::drive->getEncoderLeft()>distance){
    Robot::drive->setLeft(0);
  }
  if(Robot::drive->getEncoderRight()>distance){
    Robot::drive->setRight(0);
  }
}

// Make this return true when this Command no longer needs to run execute()
bool AutoLine::IsFinished() 
{
  if(Robot::drive->getEncoderLeft() > distance && Robot::drive->getEncoderRight() > distance){
    return true;
  }
   return false; 
}

// Called once after isFinished returns true
void AutoLine::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoLine::Interrupted() {}
