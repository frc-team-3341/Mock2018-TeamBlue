/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "Subsystems/DriveTrain.h"
#include "Commands/TankDrive.h"

DriveTrain::DriveTrain() : Subsystem("ExampleSubsystem"), left(new TalonSRX(2)), right(new TalonSRX(3)) {}

void DriveTrain::InitDefaultCommand() {
  // Set the default command for a subsystem here.
  // SetDefaultCommand(new MySpecialCommand());
 SetDefaultCommand(new TankDrive());
 //SetDefaultCommand(new ArcadeDrive());

}

void DriveTrain::tankDrive(double leftPower, double rightPower)
{
  left->Set(ControlMode::PercentOutput, -leftPower);
  right->Set(ControlMode::PercentOutput, rightPower);
}

RobotDrive* DriveTrain::getChassis()
{
  return chassis;
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
