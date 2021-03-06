// RobotBuilder Version: 3.1
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

#include "commands/PulleyOut.h"

PulleyOut::PulleyOut(Shooter* m_shooter)
:m_shooter(m_shooter){

    // Use AddRequirements() here to declare subsystem dependencies
    // eg. AddRequirements(m_Subsystem);
    SetName("PulleyOut");
    AddRequirements(m_shooter);
}

// Called just before this Command runs the first time
void PulleyOut::Initialize() {
    m_shooter->PullOut();
}

// Called repeatedly when this Command is scheduled to run
void PulleyOut::Execute() {
}

// Make this return true when this Command no longer needs to run execute()
bool PulleyOut::IsFinished() {
    return false;
}

// Called once after isFinished returns true
void PulleyOut::End(bool interrupted) {
    m_shooter->PulleyStop();
    wpi::outs() << "Pulley Stop Called from Pulley Out.\n";
}

bool PulleyOut::RunsWhenDisabled() const {
    return false;
}