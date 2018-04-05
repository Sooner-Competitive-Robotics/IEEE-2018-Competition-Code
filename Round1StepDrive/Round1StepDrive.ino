#include <RobotLib.h>
#include <IEEErobot2018.h>

bool turnDone = false;

void setup()
{
  robotSetup();
}

void loop()
{

	// put your main code here, to run repeatedly:
	
	drivetrain.setRPM(DRIVE_RPM);
	Serial.println(drivetrain.convertInchesToSteps(18.5));
	drivetrain.step(drivetrain.convertInchesToSteps(18.5), drivetrain.convertInchesToSteps(18.5));
	commandTransition();
	
	/////////////////////////////////
	//
	drivetrain.setRPM(TURN_RPM);
	while (!turnDone)
	{
		updateGyro();
		turnDone = drivetrain.stepToAngle(90, yaw);
		Serial.print("YAW: ");
		Serial.println(yaw);
		Serial.print("YAW OFFSET: ");
		Serial.println(yawOffset);
	}
	Serial.println("Done");
	turnDone = false;
	resetGyro();
	/*
	drivetrain.setRPM(TURN_RPM);
	//turn 90
	drivetrain.step(drivetrain.convertInchesToSteps(-NINETY_DEG), drivetrain.convertInchesToSteps(NINETY_DEG));
	commandTransition();
	*/
	//
	/////////////////////////////////
	
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(24), drivetrain.convertInchesToSteps(24));	
	commandTransition();
  
	/////////////////////////////////
	//
	drivetrain.setRPM(TURN_RPM);
	while (!turnDone)
	{
		updateGyro();
		turnDone = drivetrain.stepToAngle(-135, yaw);
		Serial.print("YAW: ");
		Serial.println(yaw);
		Serial.print("YAW OFFSET: ");
		Serial.println(yawOffset);
	}
	turnDone = false;
	resetGyro();
	
	/*
	drivetrain.setRPM(TURN_RPM);
	//turn -135
	drivetrain.step(drivetrain.convertInchesToSteps(ONE_THIRTY_FIVE_DEG), drivetrain.convertInchesToSteps(-ONE_THIRTY_FIVE_DEG));
	delay(PICK_DELAY);
	*/
	//
	/////////////////////////////////
  drivetrain.setRPM(DRIVE_RPM);
  drivetrain.step(drivetrain.convertInchesToSteps(4), drivetrain.convertInchesToSteps(4));
  delay(PICK_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(17), drivetrain.convertInchesToSteps(17));
	delay(PICK_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(34), drivetrain.convertInchesToSteps(34));	 
	delay(PICK_DELAY);

	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(17 - 4), drivetrain.convertInchesToSteps(17 - 4));	  
	commandTransition();

	/////////////////////////////////
	//
	drivetrain.setRPM(TURN_RPM);
	while (!turnDone)
	{
		updateGyro();
		turnDone = drivetrain.stepToAngle(-135, yaw);
		Serial.print("YAW: ");
		Serial.println(yaw);
		Serial.print("YAW OFFSET: ");
		Serial.println(yawOffset);
	}
	turnDone = false;
	resetGyro();
	/*
	drivetrain.setRPM(TURN_RPM);
	//turn -135
	drivetrain.step(drivetrain.convertInchesToSteps(ONE_THIRTY_FIVE_DEG), drivetrain.convertInchesToSteps(-ONE_THIRTY_FIVE_DEG)); 
	commandTransition();
	*/
	//
	/////////////////////////////////

  drivetrain.setRPM(DRIVE_RPM);
  drivetrain.step(drivetrain.convertInchesToSteps(4), drivetrain.convertInchesToSteps(4));    
  delay(PICK_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(24 - 4), drivetrain.convertInchesToSteps(24 - 4));	  
	commandTransition();
	
	/////////////////////////////////
	//
	drivetrain.setRPM(TURN_RPM);
	while (!turnDone)
	{
		updateGyro();
		turnDone = drivetrain.stepToAngle(-90, yaw);
		Serial.print("YAW: ");
		Serial.println(yaw);
		Serial.print("YAW OFFSET: ");
		Serial.println(yawOffset);
	}
	Serial.println("Done");
	turnDone = false;
	resetGyro();
	/*
	drivetrain.setRPM(TURN_RPM);
	//turn 90
	drivetrain.step(drivetrain.convertInchesToSteps(NINETY_DEG), drivetrain.convertInchesToSteps(-NINETY_DEG));
	commandTransition();
	*/
	//
	/////////////////////////////////

  drivetrain.setRPM(DRIVE_RPM);
  drivetrain.step(drivetrain.convertInchesToSteps(4), drivetrain.convertInchesToSteps(4));    
  delay(PICK_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(12), drivetrain.convertInchesToSteps(12));	  
	delay(PICK_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(24), drivetrain.convertInchesToSteps(24));	  
	delay(PICK_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(12 - 4), drivetrain.convertInchesToSteps(12 - 4));	
	commandTransition();
   
	/////////////////////////////////
	//
	pitchOffset = 0;
	yaw = 0;
	drivetrain.setRPM(TURN_RPM);
	while (!turnDone)
	{
		updateGyro();
		turnDone = drivetrain.stepToAngle(-90, yaw);
		Serial.print("YAW: ");
		Serial.println(yaw);
		Serial.print("YAW OFFSET: ");
		Serial.println(yawOffset);
	}
	Serial.println("Done");
	turnDone = false;
	resetGyro();
	
	/*
	drivetrain.setRPM(TURN_RPM);
	//turn 90
	drivetrain.step(drivetrain.convertInchesToSteps(NINETY_DEG), drivetrain.convertInchesToSteps(-NINETY_DEG));
	commandTransition();
	*/
	//
	/////////////////////////////////

  drivetrain.setRPM(DRIVE_RPM);
  drivetrain.step(drivetrain.convertInchesToSteps(4), drivetrain.convertInchesToSteps(4));
  delay(PICK_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(24 - 4), drivetrain.convertInchesToSteps(24 - 4));
	commandTransition();
  
	/////////////////////////////////
	//
	drivetrain.setRPM(TURN_RPM);
	while (!turnDone)
	{
		updateGyro();
		turnDone = drivetrain.stepToAngle(-135, yaw);
		Serial.print("YAW: ");
		Serial.println(yaw);
		Serial.print("YAW OFFSET: ");
		Serial.println(yawOffset);
	}
	turnDone = false;
	resetGyro();
	/*
	drivetrain.setRPM(TURN_RPM);
	//turn -135
	drivetrain.step(drivetrain.convertInchesToSteps(ONE_THIRTY_FIVE_DEG), drivetrain.convertInchesToSteps(-ONE_THIRTY_FIVE_DEG)); 
	commandTransition();
	*/
	//
	/////////////////////////////////

  drivetrain.setRPM(DRIVE_RPM);
  drivetrain.step(drivetrain.convertInchesToSteps(4), drivetrain.convertInchesToSteps(4));  
  delay(PICK_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(17), drivetrain.convertInchesToSteps(17));	
	delay(PICK_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(34), drivetrain.convertInchesToSteps(34));	
	delay(PICK_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(17), drivetrain.convertInchesToSteps(17));	
	delay(PICK_DELAY);
  
	//Do a 180 and start drop off portion
	/////////////////////////////////
	//
	drivetrain.setRPM(TURN_RPM);
	while (!turnDone)
	{
		updateGyro();
		turnDone = drivetrain.stepToAngle(180, yaw);
		Serial.print("YAW: ");
		Serial.println(yaw);
		Serial.print("YAW OFFSET: ");
		Serial.println(yawOffset);
	}
	turnDone = false;
	resetGyro();
	/*
	drivetrain.setRPM(TURN_RPM);
	//turn 180
	drivetrain.step(drivetrain.convertInchesToSteps(ONE_EIGHTY), drivetrain.convertInchesToSteps(ONE_EIGHTY)); 
	commandTransition();
	*/
	//
	/////////////////////////////////
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(-19), drivetrain.convertInchesToSteps(-19));	
	commandTransition();  
  
	/////////////////////////////////
	//
	drivetrain.setRPM(TURN_RPM);
	while (!turnDone)
	{
		updateGyro();
		turnDone = drivetrain.stepToAngle(-135, yaw);
		Serial.print("YAW: ");
		Serial.println(yaw);
		Serial.print("YAW OFFSET: ");
		Serial.println(yawOffset);
	}
	turnDone = false;
	resetGyro();
	/*
	drivetrain.setRPM(TURN_RPM);
	//turn -135
	drivetrain.step(drivetrain.convertInchesToSteps(ONE_THIRTY_FIVE_DEG), drivetrain.convertInchesToSteps(-ONE_THIRTY_FIVE_DEG)); 
	commandTransition();
	*/
	//
	/////////////////////////////////   
	
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(-36), drivetrain.convertInchesToSteps(-36));	
	commandTransition();
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(-42), drivetrain.convertInchesToSteps(-42));	
	commandTransition();  
  
	/////////////////////////////////
	//
	drivetrain.setRPM(TURN_RPM);
	while (!turnDone)
	{
		updateGyro();
		turnDone = drivetrain.stepToAngle(-135, yaw);
		Serial.print("YAW: ");
		Serial.println(yaw);
		Serial.print("YAW OFFSET: ");
		Serial.println(yawOffset);
	}
	turnDone = false;
	resetGyro();
	/*
	drivetrain.setRPM(TURN_RPM);
	//turn -135
	drivetrain.step(drivetrain.convertInchesToSteps(ONE_THIRTY_FIVE_DEG), drivetrain.convertInchesToSteps(-ONE_THIRTY_FIVE_DEG)); 
	commandTransition();
	*/
	//
	///////////////////////////////// 
	  
	drivetrain.setRPM(DRIVE_RPM);  
	drivetrain.step(drivetrain.convertInchesToSteps(-108), drivetrain.convertInchesToSteps(-108));
	commandTransition();  

	/////////////////////////////////
	//
	drivetrain.setRPM(TURN_RPM);
	while (!turnDone)
	{
		updateGyro();
		turnDone = drivetrain.stepToAngle(-135, yaw);
		Serial.print("YAW: ");
		Serial.println(yaw);
		Serial.print("YAW OFFSET: ");
		Serial.println(yawOffset);
	}
	turnDone = false;
	resetGyro();
	/*
	drivetrain.setRPM(TURN_RPM);
	//turn -135
	drivetrain.step(drivetrain.convertInchesToSteps(ONE_THIRTY_FIVE_DEG), drivetrain.convertInchesToSteps(-ONE_THIRTY_FIVE_DEG)); 
	commandTransition();
	*/
	//
	/////////////////////////////////
  
	drivetrain.setRPM(DRIVE_RPM);
//<<<<<<< HEAD
	drivetrain.step(drivetrain.convertInchesToSteps(-36), drivetrain.convertInchesToSteps(-36));	
//=======
	drivetrain.step(drivetrain.convertInchesToSteps(-42), drivetrain.convertInchesToSteps(-42));	
//>>>>>>> c7a7fedcb5b1daeb8fad86bcd9e7eda4d7512eaf
	commandTransition();
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(-42), drivetrain.convertInchesToSteps(-42));	
	commandTransition();
  
	/////////////////////////////////
	//
	drivetrain.setRPM(TURN_RPM);
	while (!turnDone)
	{
		updateGyro();
		turnDone = drivetrain.stepToAngle(-90, yaw);
		Serial.print("YAW: ");
		Serial.println(yaw);
		Serial.print("YAW OFFSET: ");
		Serial.println(yawOffset);
	}
	Serial.println("Done");
	turnDone = false;
	resetGyro();
	/*
	drivetrain.setRPM(TURN_RPM);
	//turn 90
	drivetrain.step(drivetrain.convertInchesToSteps(NINETY_DEG), drivetrain.convertInchesToSteps(-NINETY_DEG));
	commandTransition();
	*/
	//
	/////////////////////////////////
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(-40), drivetrain.convertInchesToSteps(-40));	
	commandTransition();
	
	while (true){}
	
	delay(2000);
}
