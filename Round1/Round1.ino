#include <RobotLib.h>
#include <IEEErobot2018.h>

void setup()
{
	robotSetup();
}

void loop()
{
	//Drive toward the line
	Serial.print("Stage 1");
	while (!driveComplete)                   				//18" from middle of white square to edge of 4x4' square
	{
		updateGyro();
		driveComplete = drivetrain.drive(15, 0, yaw, resetDrive);
		resetDrive = false;
	}
	commandTransition();
	
	//Find the line
	Serial.print("Stage 2");
	while (lineFollower.getDensity() < 3)
	{
		Serial.println(lineFollower.getDensity());
		updateGyro();
		drivetrain.driveIndefinitely(.3, 0, yaw, resetDrive);
		resetDrive = false;
	}
	commandTransition();
	
	//Turn to face the first coin, and to get on the line
	Serial.print("Stage 3");
	while (!driveComplete)
	{
		updateGyro();
		Serial.println(yaw);
		driveComplete = drivetrain.drive(0, 90, yaw, resetDrive, 1000); //This should take no longer than 1 second
		resetDrive = false;
	}
	commandTransition();
	
	//Follow the line until we find a corner (where the coin is) OR the actual coin
	while(lineFollower.getDensity() < 3 || intake.coinDetected())
	{
		drivetrain.pathFollower(lineFollower.getDensity(), lineFollower.getRaw());
		
		if(lineFollower.getDensity() < 3)
		{
			distanceToCoin = IR_ARRAY_TO_INTAKE;
			break;
		}
		else if(intake.coinDetected())
		{
			distanceToCoin = METAL_DETECTOR_TO_INTAKE;
			break;
		}
	}
	commandTransition();
	
	//Drive the correct distance to pick up the coin
	while (!driveComplete)
	{
		updateGyro();
		driveComplete = drivetrain.drive(distanceToCoin, 90, yaw, resetDrive);
		resetDrive = false;
	}
	commandTransition();
	
	//Pick up the first coin
	sitStillPickup();
	commandTransition();
	
	//Drive the correct distance to get back on the line
	while (!driveComplete)
	{
		updateGyro();
		driveComplete = drivetrain.drive(-IR_ARRAY_TO_INTAKE, 90, yaw, resetDrive);
		resetDrive = false;
	}
	commandTransition();
	
	//Turn to be on the diagonal line
	while (!driveComplete)
	{
		updateGyro();
		Serial.println(yaw);
		 //This should take no longer than 1.5 seconds
		driveComplete = drivetrain.drive(0, -45, yaw, resetDrive, 1500);
		resetDrive = false;
	}
	commandTransition();
	
	//Scoot forward to be only on the diagonal
	while (!driveComplete)
	{
		updateGyro();
		Serial.println(yaw);
		 //This should take no longer than 1.5 seconds
		driveComplete = drivetrain.drive(0, -45, yaw, resetDrive, 1500);
		resetDrive = false;
	}
	commandTransition();
}