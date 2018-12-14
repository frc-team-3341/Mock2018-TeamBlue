/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <Commands/Subsystem.h>
#include "ctre/Phoenix.h"
#include "AHRS.h"
#include "../RobotMap.h"

class DriveTrain : public frc::Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	TalonSRX* left;
	TalonSRX* right;
	AHRS* gyro;

public:
	double getEncoderLeft();
	double getEncoderRight();
	void turn(double ticks);
	void setLeft(double speed);
	void setRight(double speed);
	double getAngle();
	void resetEncoders();
	DriveTrain();
	~DriveTrain(); //this is an optional deconstructor
	void InitDefaultCommand() override;
	void tankDrive(double leftVal, double rightVal);
};
