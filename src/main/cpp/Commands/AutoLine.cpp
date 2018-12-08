/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "AutoLine.h"

#include <iostream>
using namespace std;

AutoLine::AutoLine(double dist) {
  // Use Requires() here to declare subsystem dependencies
  // eg. Requires(Robot::chassis.get());
  std::cout << "ENCODERS" << Robot::drive->getEncoderLeft() << std::endl;
}

// Called just before this Command runs the first time
void AutoLine::Initialize() {

  //set encoder values to zero
  Robot::drive->resetEncoders();
  std::cout << "ENCODERS" << Robot::drive->getEncoderLeft() << std::endl;
}

// Called repeatedly when this Command is scheduled to run
void AutoLine::Execute() {

/*
  cout<< Robot::drive->getEncoderLeft() <<endl;
  
  if(Robot::drive->getEncoderLeft()>currentLeft){
    Robot::drive->setLeft(0);
  }
  else{
    Robot::drive->tankDrive(0.50, 0.50);
  }

  if(Robot::drive->getEncoderRight()>currentRight){
    Robot::drive->setRight(0);
  }
  else{
    Robot::drive->tankDrive(0.50, 0.50);
  }
  */
}

// Make this return true when this Command no longer needs to run execute()
bool AutoLine::IsFinished() {

  return false;
/*
  if(Robot::drive->getEncoderLeft() > currentLeft && Robot::drive->getEncoderRight() > currentRight){
    return true;
  }
   return false;
*/
  
}

// Called once after isFinished returns true
void AutoLine::End() {}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AutoLine::Interrupted() {}
