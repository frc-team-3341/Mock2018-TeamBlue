/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <Commands/CommandGroup.h>
#include "AutoLine.h"
#include "Turn.h"
#include "WPILib.h"
#include "GateOpen.h"

class AllPaths : public frc::CommandGroup {
 public:
  AllPaths(int pathNum);
};
