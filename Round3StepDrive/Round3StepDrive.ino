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
	drivetrain.step(drivetrain.convertInchesToSteps(12*DIST_RATIO), drivetrain.convertInchesToSteps(12*DIST_RATIO));
	delay(MOVE_DELAY);

	drivetrain.setRPM(TURN_RPM);
	//turn 90
	drivetrain.step(drivetrain.convertInchesToSteps(-NINETY_DEG), drivetrain.convertInchesToSteps(NINETY_DEG));
	delay(MOVE_DELAY);

	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(24*DIST_RATIO), drivetrain.convertInchesToSteps(24*DIST_RATIO));
	delay(MOVE_DELAY);
  
	drivetrain.setRPM(TURN_RPM);
	//turn -135
	drivetrain.step(drivetrain.convertInchesToSteps(ONE_THIRTY_FIVE_DEG), drivetrain.convertInchesToSteps(-ONE_THIRTY_FIVE_DEG));
	delay(PICK_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(DIAGONAL_DISTANCE*DIST_RATIO), drivetrain.convertInchesToSteps(DIAGONAL_DISTANCE*DIST_RATIO));
	delay(PICK_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(DIAGONAL_DISTANCE*DIST_RATIO), drivetrain.convertInchesToSteps(DIAGONAL_DISTANCE*DIST_RATIO));
	delay(PICK_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(DIAGONAL_DISTANCE*DIST_RATIO), drivetrain.convertInchesToSteps(DIAGONAL_DISTANCE*DIST_RATIO));
	delay(PICK_DELAY);
  
	//Jump across Gray Square
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(34*DIST_RATIO), drivetrain.convertInchesToSteps(34*DIST_RATIO));	 
	delay(PICK_DELAY);

	drivetrain.setRPM(DRIVE_RPM);	
	drivetrain.step(drivetrain.convertInchesToSteps(DIAGONAL_DISTANCE*DIST_RATIO), drivetrain.convertInchesToSteps(DIAGONAL_DISTANCE*DIST_RATIO));	  
	delay(PICK_DELAY);

	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(DIAGONAL_DISTANCE*DIST_RATIO), drivetrain.convertInchesToSteps(DIAGONAL_DISTANCE*DIST_RATIO));
	delay(PICK_DELAY);
	
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(DIAGONAL_DISTANCE*DIST_RATIO), drivetrain.convertInchesToSteps(DIAGONAL_DISTANCE*DIST_RATIO));
	delay(PICK_DELAY);	
	
	drivetrain.setRPM(TURN_RPM);
	//turn -135
	drivetrain.step(drivetrain.convertInchesToSteps(ONE_THIRTY_FIVE_DEG), drivetrain.convertInchesToSteps(-ONE_THIRTY_FIVE_DEG)); 
	delay(MOVE_DELAY);

	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(30*DIST_RATIO), drivetrain.convertInchesToSteps(30*DIST_RATIO));	  
	delay(PICK_DELAY);
  
	//turn -90
	drivetrain.setRPM(TURN_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(NINETY_DEG), drivetrain.convertInchesToSteps(-NINETY_DEG));
	delay(MOVE_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(6*DIST_RATIO), drivetrain.convertInchesToSteps(6*DIST_RATIO));	  
	delay(PICK_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(6*DIST_RATIO), drivetrain.convertInchesToSteps(6*DIST_RATIO));	  
	delay(PICK_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(6*DIST_RATIO), drivetrain.convertInchesToSteps(6*DIST_RATIO));	  
	delay(PICK_DELAY);
  
	//Jump across the Gray square
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(24*DIST_RATIO), drivetrain.convertInchesToSteps(24*DIST_RATIO));	  
	delay(PICK_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(6*DIST_RATIO), drivetrain.convertInchesToSteps(6*DIST_RATIO));	  
	delay(PICK_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(6*DIST_RATIO), drivetrain.convertInchesToSteps(6*DIST_RATIO));	  
	delay(PICK_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(6*DIST_RATIO), drivetrain.convertInchesToSteps(6*DIST_RATIO));	  
	delay(PICK_DELAY);
   
	//turn -90
	drivetrain.setRPM(TURN_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(NINETY_DEG), drivetrain.convertInchesToSteps(-NINETY_DEG));
	delay(MOVE_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(30*DIST_RATIO), drivetrain.convertInchesToSteps(30*DIST_RATIO));	  
	delay(PICK_DELAY);
  
	//turn -135
	drivetrain.setRPM(TURN_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(ONE_THIRTY_FIVE_DEG), drivetrain.convertInchesToSteps(-ONE_THIRTY_FIVE_DEG));
	delay(MOVE_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(DIAGONAL_DISTANCE*DIST_RATIO), drivetrain.convertInchesToSteps(DIAGONAL_DISTANCE*DIST_RATIO));	
	delay(PICK_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(DIAGONAL_DISTANCE*DIST_RATIO), drivetrain.convertInchesToSteps(DIAGONAL_DISTANCE*DIST_RATIO));	
	delay(PICK_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(DIAGONAL_DISTANCE*DIST_RATIO), drivetrain.convertInchesToSteps(DIAGONAL_DISTANCE*DIST_RATIO));	
	delay(PICK_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(34*DIST_RATIO), drivetrain.convertInchesToSteps(34*DIST_RATIO));	
	delay(PICK_DELAY);
	
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(DIAGONAL_DISTANCE*DIST_RATIO), drivetrain.convertInchesToSteps(DIAGONAL_DISTANCE*DIST_RATIO));	
	delay(PICK_DELAY);
	
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(DIAGONAL_DISTANCE*DIST_RATIO), drivetrain.convertInchesToSteps(DIAGONAL_DISTANCE*DIST_RATIO));	
	delay(PICK_DELAY);
	
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(DIAGONAL_DISTANCE*DIST_RATIO), drivetrain.convertInchesToSteps(DIAGONAL_DISTANCE*DIST_RATIO));	
	delay(PICK_DELAY);
	
	//Do a 180 and start drop off portion
	drivetrain.setRPM(TURN_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(NINETY_DEG), drivetrain.convertInchesToSteps(-NINETY_DEG));
	drivetrain.step(drivetrain.convertInchesToSteps(NINETY_DEG), drivetrain.convertInchesToSteps(-NINETY_DEG));
	delay(MOVE_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(-11*DIST_RATIO), drivetrain.convertInchesToSteps(-11*DIST_RATIO));	
	delay(MOVE_DELAY);  
	
	drivetrain.setRPM(TURN_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(-ONE_THIRTY_FIVE_DEG), drivetrain.convertInchesToSteps(ONE_THIRTY_FIVE_DEG));
	delay(MOVE_DELAY);    
	
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(-36*DIST_RATIO), drivetrain.convertInchesToSteps(-40*DIST_RATIO));	
	delay(MOVE_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(-40*DIST_RATIO), drivetrain.convertInchesToSteps(-40*DIST_RATIO));	
	delay(MOVE_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(-2*DIST_RATIO), drivetrain.convertInchesToSteps(-2*DIST_RATIO));
	delay(MOVE_DELAY);   
  
	drivetrain.setRPM(TURN_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(-ONE_THIRTY_FIVE_DEG), drivetrain.convertInchesToSteps(ONE_THIRTY_FIVE_DEG));
	delay(MOVE_DELAY);  
	  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(-108*DIST_RATIO), drivetrain.convertInchesToSteps(-108*DIST_RATIO));
	delay(MOVE_DELAY);  

	drivetrain.setRPM(TURN_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(ONE_THIRTY_FIVE_DEG), drivetrain.convertInchesToSteps(-ONE_THIRTY_FIVE_DEG));
	delay(MOVE_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(-36*DIST_RATIO), drivetrain.convertInchesToSteps(-42*DIST_RATIO));	
	delay(MOVE_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(-42*DIST_RATIO), drivetrain.convertInchesToSteps(-42*DIST_RATIO));	
	delay(MOVE_DELAY);
  
	drivetrain.setRPM(TURN_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(NINETY_DEG), drivetrain.convertInchesToSteps(-NINETY_DEG));
	delay(MOVE_DELAY);
  
	drivetrain.setRPM(DRIVE_RPM);
	drivetrain.step(drivetrain.convertInchesToSteps(-40*DIST_RATIO), drivetrain.convertInchesToSteps(-40*DIST_RATIO));	
	delay(MOVE_DELAY);
  
	//TODO: implement dropoffsequence
	while (true){}
}
