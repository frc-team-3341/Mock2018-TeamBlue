/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "DriveTrain.h"
#include "../RobotMap.h"

#include "../Commands/TankDrive.h"

DriveTrain::DriveTrain() : Subsystem("DriveTrain"),
left(new TalonSRX(LEFT_MOTOR)),
right(new TalonSRX(RIGHT_MOTOR)) {
	left->SetInverted(true);	
	left->ConfigSelectedFeedbackSensor(FeedbackDevice::CTRE_MagEncoder_Relative, 0, 10);
	right->ConfigSelectedFeedbackSensor(FeedbackDevice::CTRE_MagEncoder_Relative, 0, 10);
}

DriveTrain::~DriveTrain() {
	
}

void DriveTrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new TankDrive());
}

void DriveTrain::tankDrive(double leftVal, double rightVal){
	left->Set(ControlMode::PercentOutput, leftVal);
	right->Set(ControlMode::PercentOutput, rightVal);

}

double DriveTrain::getEncoderLeft() {
	return left->GetSensorCollection().GetQuadraturePosition();

}

double DriveTrain::getEncoderRight(){
	return right->GetSensorCollection().GetQuadraturePosition();
}

void DriveTrain::setLeft(double speed){
	left->Set(ControlMode::PercentOutput, speed);
}

void DriveTrain::setRight(double speed){
	right->Set(ControlMode::PercentOutput, speed);
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
