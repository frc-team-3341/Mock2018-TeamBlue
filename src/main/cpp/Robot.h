/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include "WPILib.h"
#include <Commands/Command.h>
#include <SmartDashboard/SendableChooser.h>
#include <TimedRobot.h>

#include "OI.h"

#include "Subsystems/DriveTrain.h"

class Robot : public frc::TimedRobot {
public:
	//step 9: creating a static instance of the subsystem
	//subsystems have to be pointers (pointers are "*")
	//this static instance is just an object of the drivetrain
	static DriveTrain* drive;
	//convention---oi is at the bottom
	static OI* oi;

	void RobotInit() override;
	void DisabledInit() override;
	void DisabledPeriodic() override;
	void AutonomousInit() override;
	void AutonomousPeriodic() override;
	void TeleopInit() override;
	void TeleopPeriodic() override;
	void TestPeriodic() override;

private:
	// Have it null by default so that if testing teleop it
	// doesn't have undefined behavior and potentially crash.
	frc::Command* m_autonomousCommand = nullptr;
	frc::SendableChooser<frc::Command*> m_chooser;
};
