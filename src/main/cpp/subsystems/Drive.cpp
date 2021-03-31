// RobotBuilder Version: 3.1
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

#include "subsystems/Drive.h"
#include <frc/smartdashboard/SmartDashboard.h>

Drive::Drive(){
    SetName("Drive");
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
}

void Drive::Periodic() {
    // Put code here to be run every loop
}

void Drive::SimulationPeriodic() {
    // This method will be called once per scheduler run when in simulation
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void Drive::Motivate(double xSpeed, double ySpeed, double zRotation){
    // This SHOULD NOT HAVE TO BE DONE!!
    // Every document and API says we should feed the DriveCartesian function as follows:
    //
    // m_robotDrive.DriveCartesian(ySpeed, xSpeed, zRotation, gyroAngle);
    //
    // but our bot does not respond that way.  We have done the following:
    // "flipped" the X so it's inputs are inverted
    // "flipped" the Y so it's inputs are inverted
    // added a dead zone to the Z so it is less touchy

    double flippedY = (ySpeed * -1.0);
    double flippedX = (xSpeed * -1.0);
    double z;
    double deadZone = 0.25;

    if (fabs(zRotation) < deadZone)
    {
        z = 0.0;
    }
    else
    {
        z = zRotation;
    };

    m_mecanumDrive.DriveCartesian(flippedX, flippedY, z);
}