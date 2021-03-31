// RobotBuilder Version: 3.1
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

#pragma once

#include <frc2/command/SubsystemBase.h>
#include <frc/Spark.h>
#include <frc/drive/MecanumDrive.h>

class Drive: public frc2::SubsystemBase {
private:
frc::Spark m_leftRear{0};
frc::Spark m_rightRear{1};
frc::Spark m_leftFront{2};
frc::Spark m_rightFront{3};
frc::MecanumDrive m_mecanumDrive{m_leftRear, m_rightRear, m_leftFront, m_rightFront};

public:
Drive();
    void Periodic() override;
    void SimulationPeriodic() override;
    void Motivate(double xSpeed, double ySpeed, double zRotation);
};