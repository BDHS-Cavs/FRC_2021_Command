// RobotBuilder Version: 3.1
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

#include "RobotContainer.h"
#include <frc2/command/ParallelRaceGroup.h>
#include <frc2/command/RunCommand.h>
#include <frc/smartdashboard/SmartDashboard.h>

RobotContainer* RobotContainer::m_robotContainer = NULL;

RobotContainer::RobotContainer() : m_autonomousCommand(){
    frc::SmartDashboard::PutData(&m_drive);
    frc::SmartDashboard::PutData(&m_shooter);
    frc::SmartDashboard::PutData(&m_winch);

    // SmartDashboard Buttons
    frc::SmartDashboard::PutData("PulleyIn", new PulleyIn( &m_shooter ));
    frc::SmartDashboard::PutData("PulleyOut", new PulleyOut( &m_shooter ));
    frc::SmartDashboard::PutData("ShootIn", new ShootIn( &m_shooter ));
    frc::SmartDashboard::PutData("ShootOut", new ShootOut( &m_shooter ));
    frc::SmartDashboard::PutData("WinchIncrementDown", new WinchIncrementDown( &m_winch ));
    frc::SmartDashboard::PutData("WinchIncrementUp", new WinchIncrementUp( &m_winch ));
    frc::SmartDashboard::PutData("WinchDown", new WinchDown( &m_winch ));
    frc::SmartDashboard::PutData("WinchUp", new WinchUp( &m_winch ));
    frc::SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());

    ConfigureButtonBindings();

    // Set up default drive command
    m_drive.SetDefaultCommand(frc2::RunCommand(
        [this] {
            m_drive.Motivate(
                m_joystick.GetY(),
                m_joystick.GetX(),
                m_joystick.GetTwist());
      },
      {&m_drive}));

    m_chooser.SetDefaultOption("Autonomous Command", new AutonomousCommand());

    frc::SmartDashboard::PutData("Auto Mode", &m_chooser);
}

RobotContainer* RobotContainer::GetInstance() {
    if (m_robotContainer == NULL) {
        m_robotContainer = new RobotContainer();
    }
    return(m_robotContainer);
}

void RobotContainer::ConfigureButtonBindings() {
frc2::JoystickButton m_controllerButton8{&m_controller, (int)frc::XboxController::Button::kBack};
frc2::JoystickButton m_controllerButton7{&m_controller, (int)frc::XboxController::Button::kStart};
frc2::JoystickButton m_controllerButton6{&m_controller, (int)frc::XboxController::Button::kBumperRight};
frc2::JoystickButton m_controllerButton5{&m_controller, (int)frc::XboxController::Button::kBumperLeft};
frc2::JoystickButton m_controllerButton4{&m_controller, (int)frc::XboxController::Button::kA};
frc2::JoystickButton m_controllerButton3{&m_controller, (int)frc::XboxController::Button::kY};
frc2::JoystickButton m_controllerButton2{&m_controller, (int)frc::XboxController::Button::kB};
frc2::JoystickButton m_controllerButton1{&m_controller, (int)frc::XboxController::Button::kX};

m_controllerButton8.WhenHeld(PulleyIn(&m_shooter), true);
m_controllerButton7.WhenHeld(PulleyOut(&m_shooter), true);
m_controllerButton6.WhenHeld(ShootIn(&m_shooter), true);
m_controllerButton5.WhenHeld(ShootOut(&m_shooter), true);
m_controllerButton4.WhenHeld(WinchIncrementDown(&m_winch), true);
m_controllerButton3.WhenHeld(WinchIncrementUp(&m_winch), true);
m_controllerButton2.WhenHeld(WinchDown(&m_winch), true);
m_controllerButton1.WhenHeld(WinchUp(&m_winch), true);
m_joystick.SetTwistChannel(2);
}

frc::Joystick* RobotContainer::getJoystick() {
   return &m_joystick;
}
frc::XboxController* RobotContainer::getController() {
   return &m_controller;
}

frc2::Command* RobotContainer::GetAutonomousCommand() {
  // The selected command will be run in autonomous
  return m_chooser.GetSelected();
}