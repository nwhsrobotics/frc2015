#include "SwitchDriveMode.h"
#include "Subsystems/Drivetrain.h"

SwitchDriveMode::SwitchDriveMode()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires (drivetrain);
}

// Called just before this Command runs the first time
void SwitchDriveMode::Initialize()
{
	// Switch the driver's perspective when this command is called
	drivetrain->switch_drive_mode();
}

// Called repeatedly when this Command is scheduled to run
void SwitchDriveMode::Execute(){}

// Make this return true when this Command no longer needs to run execute()
bool SwitchDriveMode::IsFinished()
{
	// end once the button is pressed once
	return true;
}

// Called once after isFinished returns true
void SwitchDriveMode::End(){}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SwitchDriveMode::Interrupted(){}
