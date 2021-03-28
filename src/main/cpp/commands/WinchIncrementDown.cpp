// RobotBuilder Version: 3.1
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

#include "commands/WinchIncrementDown.h"

WinchIncrementDown::WinchIncrementDown(Winch* m_winch)
:m_winch(m_winch){

    // Use AddRequirements() here to declare subsystem dependencies
    // eg. AddRequirements(m_Subsystem);
    SetName("WinchIncrementDown");
    AddRequirements(m_winch);
}

// Called just before this Command runs the first time
void WinchIncrementDown::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void WinchIncrementDown::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool WinchIncrementDown::IsFinished() {
    return false;
}

// Called once after isFinished returns true
void WinchIncrementDown::End(bool interrupted) {

}

bool WinchIncrementDown::RunsWhenDisabled() const {
    return false;
}