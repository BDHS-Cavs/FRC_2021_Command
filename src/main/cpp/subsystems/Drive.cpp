// RobotBuilder Version: 3.1
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "subsystems/Drive.h"
#include <frc/smartdashboard/SmartDashboard.h>

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

Drive::Drive(){
    SetName("Drive");
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    SetSubsystem("Drive");

 AddChild("leftRear", &m_leftRear);
 m_leftRear.SetInverted(false);

 AddChild("rightRear", &m_rightRear);
 m_rightRear.SetInverted(false);

 AddChild("leftFront", &m_leftFront);
 m_leftFront.SetInverted(false);

 AddChild("rightFront", &m_rightFront);
 m_rightFront.SetInverted(false);

 AddChild("Mecanum Drive", &m_mecanumDrive);
 m_mecanumDrive.SetSafetyEnabled(true);
m_mecanumDrive.SetExpiration(0.1);
m_mecanumDrive.SetMaxOutput(1.0);


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}

void Drive::Periodic() {
    // Put code here to be run every loop

}

void Drive::SimulationPeriodic() {
    // This method will be called once per scheduler run when in simulation

}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CMDPIDGETTERS

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CMDPIDGETTERS


// Put methods for controlling this subsystem
// here. Call these from Commands.
