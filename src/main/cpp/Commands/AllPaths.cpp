/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "AllPaths.h"


AllPaths::AllPaths(int pathNum) {
  // Add Commands here:
  // e.g. AddSequential(new Command1());
  //      AddSequential(new Command2());
  // these will run in order.
if (pathNum == 1){
  AddSequential(new AutoLine(20000));
  AddSequential(new Turn(-60));
  AddSequential(new AutoLine(4900));
  AddSequential(new GateOpen());
}
else if (pathNum = 2){
  AddSequential(new AutoLine(20000));
  AddSequential(new Turn(-40));
  AddSequential(new AutoLine(4900));
  AddSequential(new GateOpen());
}
else if (pathNum = 3){
  AddSequential(new AutoLine(20000));
  AddSequential(new Turn(-20));
  AddSequential(new AutoLine(4900));
  AddSequential(new GateOpen());
}
else if (pathNum = 4){
  AddSequential(new AutoLine(24900));
  AddSequential(new GateOpen());
  
}
else if (pathNum = 5){
  AddSequential(new AutoLine(20000));
  AddSequential(new Turn(20));
  AddSequential(new AutoLine(4900));
  AddSequential(new GateOpen());
}
else if (pathNum = 6){
  AddSequential(new AutoLine(20000));
  AddSequential(new Turn(40));
  AddSequential(new AutoLine(4900));
  AddSequential(new GateOpen());
}
else if (pathNum = 7){
  AddSequential(new AutoLine(20000));
  AddSequential(new Turn(60));
  AddSequential(new AutoLine(4900));
  AddSequential(new GateOpen());
}
  
  // To run multiple commands at the same time,
  // use AddParallel()
  // e.g. AddParallel(new Command1());
  //      AddSequential(new Command2());
  // Command1 and Command2 will run in parallel.

  // A command group will require all of the subsystems that each member
  // would require.
  // e.g. if Command1 requires chassis, and Command2 requires arm,
  // a CommandGroup containing them would require both the chassis and the
  // arm.
}
