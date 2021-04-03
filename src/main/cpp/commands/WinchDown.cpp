// RobotBuilder Version: 3.1
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

#include "commands/WinchDown.h"

WinchDown::WinchDown(Winch* m_winch)
:m_winch(m_winch){

    SetName("WinchDown");
    AddRequirements(m_winch);
}

// Called just before this Command runs the first time
void WinchDown::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void WinchDown::Execute() {
   m_winch->Lower();
}

// Make this return true when this Command no longer needs to run execute()
bool WinchDown::IsFinished() {
    return false;
}

// Called once after isFinished returns true
void WinchDown::End(bool interrupted) {
    m_winch->WinchStop();
    wpi::outs() << "Winch Stop called from WinchDown.\n";
}

bool WinchDown::RunsWhenDisabled() const {
    return false;
}
