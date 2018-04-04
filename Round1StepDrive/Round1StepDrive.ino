#include <RobotLib.h>
#include <IEEErobot2018.h>

void setup()
{
  robotSetup();
}

void loop()
{

	// put your main code here, to run repeatedly:
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(18*DIST_RATIO), drivetrain.convertInchesToSteps(18*DIST_RATIO));
	commandTransition();

	/////////////////////////////////
	while (drivetrain.stepToAngle(90, yaw))
	{
		
	}
	resetGyro();
	/////////////////////////////////
	
	drivetrain.setRPM(TURN_RPM);
	//turn 90
	drivetrain.step(drivetrain.convertInchesToSteps(-NINETY_DEG), drivetrain.convertInchesToSteps(NINETY_DEG));
	commandTransition();

	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(24*DIST_RATIO), drivetrain.convertInchesToSteps(24*DIST_RATIO));	
	commandTransition();
  
	drivetrain.setRPM(TURN_RPM);
	//turn -135
	drivetrain.step(drivetrain.convertInchesToSteps(ONE_THIRTY_FIVE_DEG), drivetrain.convertInchesToSteps(-ONE_THIRTY_FIVE_DEG));
	delay(PICK_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(17*DIST_RATIO), drivetrain.convertInchesToSteps(17*DIST_RATIO));
	delay(PICK_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(34*DIST_RATIO), drivetrain.convertInchesToSteps(34*DIST_RATIO));	 
	delay(PICK_DELAY);

	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(17*DIST_RATIO), drivetrain.convertInchesToSteps(17*DIST_RATIO));	  
	delay(PICK_DELAY);

	drivetrain.setRPM(TURN_RPM);
	//turn -135
	drivetrain.step(drivetrain.convertInchesToSteps(ONE_THIRTY_FIVE_DEG), drivetrain.convertInchesToSteps(-ONE_THIRTY_FIVE_DEG)); 
	commandTransition();

	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(24*DIST_RATIO), drivetrain.convertInchesToSteps(24*DIST_RATIO));	  
	delay(PICK_DELAY);
  
	drivetrain.setRPM(TURN_RPM);
	//turn -90
	drivetrain.step(drivetrain.convertInchesToSteps(NINETY_DEG), drivetrain.convertInchesToSteps(-NINETY_DEG));
	commandTransition();
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(12*DIST_RATIO), drivetrain.convertInchesToSteps(12*DIST_RATIO));	  
	delay(PICK_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(24*DIST_RATIO), drivetrain.convertInchesToSteps(24*DIST_RATIO));	  
	delay(PICK_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(12*DIST_RATIO), drivetrain.convertInchesToSteps(12*DIST_RATIO));	
	delay(PICK_DELAY);
   
	drivetrain.setRPM(TURN_RPM);
	//turn -90
	drivetrain.step(drivetrain.convertInchesToSteps(NINETY_DEG), drivetrain.convertInchesToSteps(-NINETY_DEG));
	commandTransition();
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(24*DIST_RATIO), drivetrain.convertInchesToSteps(24*DIST_RATIO));
	delay(PICK_DELAY);
  
	drivetrain.setRPM(TURN_RPM);
	//turn -135
	drivetrain.step(drivetrain.convertInchesToSteps(ONE_THIRTY_FIVE_DEG), drivetrain.convertInchesToSteps(-ONE_THIRTY_FIVE_DEG));
	commandTransition();
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(17*DIST_RATIO), drivetrain.convertInchesToSteps(17*DIST_RATIO));	
	delay(PICK_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(34*DIST_RATIO), drivetrain.convertInchesToSteps(34*DIST_RATIO));	
	delay(PICK_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(17*DIST_RATIO), drivetrain.convertInchesToSteps(17*DIST_RATIO));	
	delay(PICK_DELAY);
  
	//Do a 180 and start drop off portion
	drivetrain.setRPM(TURN_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(NINETY_DEG), drivetrain.convertInchesToSteps(-NINETY_DEG));
	drivetrain.step(drivetrain.convertInchesToSteps(NINETY_DEG), drivetrain.convertInchesToSteps(-NINETY_DEG));
	commandTransition();
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(-19*DIST_RATIO), drivetrain.convertInchesToSteps(-19*DIST_RATIO));	
	commandTransition();  
  
	drivetrain.setRPM(TURN_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(-ONE_THIRTY_FIVE_DEG), drivetrain.convertInchesToSteps(ONE_THIRTY_FIVE_DEG));
	commandTransition();    
	
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(-36*DIST_RATIO), drivetrain.convertInchesToSteps(-40*DIST_RATIO));	
	commandTransition();
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(-40*DIST_RATIO), drivetrain.convertInchesToSteps(-40*DIST_RATIO));	
	commandTransition();
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(-2*DIST_RATIO), drivetrain.convertInchesToSteps(-2*DIST_RATIO));
	commandTransition();   
  
	drivetrain.setRPM(TURN_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(-ONE_THIRTY_FIVE_DEG), drivetrain.convertInchesToSteps(ONE_THIRTY_FIVE_DEG));
	commandTransition();  
	  
	drivetrain.setRPM(DRIVE_RPM);  
	drivetrain.step(drivetrain.convertInchesToSteps(-108*DIST_RATIO), drivetrain.convertInchesToSteps(-108*DIST_RATIO));
	commandTransition();  

	drivetrain.setRPM(TURN_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(ONE_THIRTY_FIVE_DEG), drivetrain.convertInchesToSteps(-ONE_THIRTY_FIVE_DEG));
	commandTransition();
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(-36*DIST_RATIO), drivetrain.convertInchesToSteps(-42*DIST_RATIO));	
	commandTransition();
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(-42*DIST_RATIO), drivetrain.convertInchesToSteps(-42*DIST_RATIO));	
	commandTransition();
  
	drivetrain.setRPM(TURN_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(NINETY_DEG), drivetrain.convertInchesToSteps(-NINETY_DEG));
	commandTransition();
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(-40*DIST_RATIO), drivetrain.convertInchesToSteps(-40*DIST_RATIO));	
	commandTransition();
  
	//TODO: implement dropoffsequence
	while (true){}
}
