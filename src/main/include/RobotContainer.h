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

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include <frc/smartdashboard/SendableChooser.h>
#include <frc2/command/Command.h>

#include "subsystems/Winch.h"
#include "subsystems/Shooter.h"
#include "subsystems/Drive.h"


#include "subsystems/Drive.h"
#include "subsystems/Shooter.h"
#include "subsystems/Winch.h"

#include "commands/AutonomousCommand.h"
#include "commands/Move.h"
#include "commands/PulleyIn.h"
#include "commands/PulleyOut.h"
#include "commands/ShootIn.h"
#include "commands/ShootOut.h"
#include "commands/WinchDown.h"
#include "commands/WinchIncrementDown.h"
#include "commands/WinchIncrementUp.h"
#include "commands/WinchUp.h"
#include <frc/Joystick.h>
#include <frc/XboxController.h>
#include <frc2/command/button/JoystickButton.h>

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

class RobotContainer {

public:

    frc2::Command* GetAutonomousCommand();
    static RobotContainer* GetInstance();

    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES
// The robot's subsystems
Winch m_winch;
Shooter m_shooter;
Drive m_drive;


frc::Joystick* getJoystick();
frc::XboxController* getController();

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES

private:

    RobotContainer();

    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
// Joysticks
frc::Joystick m_joystick{0};
frc::XboxController m_controller{1};

frc::SendableChooser<frc2::Command*> m_chooser;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

AutonomousCommand m_autonomousCommand;
    static RobotContainer* m_robotContainer;

    void ConfigureButtonBindings();
};