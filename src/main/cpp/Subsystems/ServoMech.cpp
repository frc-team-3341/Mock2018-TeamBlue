/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/
#include <Subsystems/ServoMech.h>
#include "WPILib.h"
#include "RobotMap.h"
#include <Commands/BucketMove.h>

ServoMech::ServoMech() : Subsystem("Servo"), purpleServo(new Servo(1)){
  
}

void ServoMech::InitDefaultCommand() {

	// Set the default command for a subsystem here.
}

void ServoMech::move(double angle){
	purpleServo->Set(angle);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.