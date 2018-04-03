#include <RobotLib.h>
#include <IEEErobot2018.h>

void setup()
{
  robotSetup();
}

void loop()
{
  // put your main code here, to run repeatedly:
  /*drivetrain.step(drivetrain.convertInchesToSteps(18*DIST_RATIO), drivetrain.convertInchesToSteps(18*DIST_RATIO));
  //commandTransition();
  delay(MOVE_DELAY);

  drivetrain.setRPM(TURN_RPM);
  //turn 90
  drivetrain.step(drivetrain.convertInchesToSteps(-NINETY_DEG), drivetrain.convertInchesToSteps(NINETY_DEG));
  delay(MOVE_DELAY);

  drivetrain.setRPM(DRIVE_RPM);
  drivetrain.step(drivetrain.convertInchesToSteps(24*DIST_RATIO), drivetrain.convertInchesToSteps(24*DIST_RATIO));
  //sitStillPickUp();
  delay(MOVE_DELAY);
  
  drivetrain.setRPM(TURN_RPM);
  //turn -135
  drivetrain.step(drivetrain.convertInchesToSteps(ONE_THIRTY_FIVE_DEG), drivetrain.convertInchesToSteps(-ONE_THIRTY_FIVE_DEG));
  delay(MOVE_DELAY);

  drivetrain.setRPM(DRIVE_RPM);
  drivetrain.step(drivetrain.convertInchesToSteps(METAL_DETECTOR_TO_INTAKE*DIST_RATIO), drivetrain.convertInchesToSteps(METAL_DETECTOR_TO_INTAKE*DIST_RATIO));
  //sitStillPickUp();
  delay(PICK_DELAY); */
  
  /*
  
  drivetrain.setRPM(DRIVE_RPM);
  drivetrain.step(drivetrain.convertInchesToSteps(17*DIST_RATIO), drivetrain.convertInchesToSteps(17*DIST_RATIO));
  //sitStillPickUp(); 
  delay(PICK_DELAY);
  
  drivetrain.step(drivetrain.convertInchesToSteps(34*DIST_RATIO), drivetrain.convertInchesToSteps(34*DIST_RATIO));
  //sitStillPickUp(); 
  delay(PICK_DELAY);

  drivetrain.step(drivetrain.convertInchesToSteps(17*DIST_RATIO), drivetrain.convertInchesToSteps(17*DIST_RATIO));
  //sitStillPickUp();  
  delay(PICK_DELAY);

  drivetrain.setRPM(TURN_RPM);
  //turn -135
  drivetrain.step(drivetrain.convertInchesToSteps(ONE_THIRTY_FIVE_DEG), drivetrain.convertInchesToSteps(-ONE_THIRTY_FIVE_DEG)); 
  delay(MOVE_DELAY);

  drivetrain.step(drivetrain.convertInchesToSteps(24*DIST_RATIO), drivetrain.convertInchesToSteps(24*DIST_RATIO));
  //sitStillPickUp();  
  delay(PICK_DELAY);
  
  //turn -90
  drivetrain.step(drivetrain.convertInchesToSteps(NINETY_DEG), drivetrain.convertInchesToSteps(-NINETY_DEG));
  delay(MOVE_DELAY);
  
  drivetrain.step(drivetrain.convertInchesToSteps(12*DIST_RATIO), drivetrain.convertInchesToSteps(12*DIST_RATIO));
  //sitStillPickUp();  
  delay(PICK_DELAY);
  
  drivetrain.step(drivetrain.convertInchesToSteps(24*DIST_RATIO), drivetrain.convertInchesToSteps(24*DIST_RATIO));
  //sitStillPickUp();  
  delay(PICK_DELAY);
  
  drivetrain.step(drivetrain.convertInchesToSteps(12*DIST_RATIO), drivetrain.convertInchesToSteps(12*DIST_RATIO));
  //sitStillPickUp();
  delay(PICK_DELAY);
   
  //turn -90
  drivetrain.step(drivetrain.convertInchesToSteps(NINETY_DEG), drivetrain.convertInchesToSteps(-NINETY_DEG));
  delay(MOVE_DELAY);
  
  drivetrain.step(drivetrain.convertInchesToSteps(24*DIST_RATIO), drivetrain.convertInchesToSteps(24*DIST_RATIO));
  //sitStillPickUp();  
  delay(PICK_DELAY);
  
  //turn -135
  drivetrain.step(drivetrain.convertInchesToSteps(ONE_THIRTY_FIVE_DEG), drivetrain.convertInchesToSteps(-ONE_THIRTY_FIVE_DEG));
  delay(MOVE_DELAY);
  
  drivetrain.step(drivetrain.convertInchesToSteps(17*DIST_RATIO), drivetrain.convertInchesToSteps(17*DIST_RATIO));
  //sitStillPickUp();
  delay(PICK_DELAY);
  
  drivetrain.step(drivetrain.convertInchesToSteps(34*DIST_RATIO), drivetrain.convertInchesToSteps(34*DIST_RATIO));
  //sitStillPickUp();
  delay(PICK_DELAY);
  
  drivetrain.step(drivetrain.convertInchesToSteps(17*DIST_RATIO), drivetrain.convertInchesToSteps(17*DIST_RATIO));
  //sitStillPickUp();
  delay(PICK_DELAY);
  */
  //reach cyan/blue square
  
  drivetrain.step(drivetrain.convertInchesToSteps(NINETY_DEG), drivetrain.convertInchesToSteps(-NINETY_DEG));
  drivetrain.step(drivetrain.convertInchesToSteps(NINETY_DEG), drivetrain.convertInchesToSteps(-NINETY_DEG));
  delay(MOVE_DELAY);
  
  drivetrain.step(drivetrain.convertInchesToSteps(-19*DIST_RATIO), drivetrain.convertInchesToSteps(-19*DIST_RATIO));
  //sitStillPickUp();
  delay(MOVE_DELAY);  
  
  drivetrain.step(drivetrain.convertInchesToSteps(-ONE_THIRTY_FIVE_DEG), drivetrain.convertInchesToSteps(ONE_THIRTY_FIVE_DEG));
  delay(MOVE_DELAY);  
  
  drivetrain.step(drivetrain.convertInchesToSteps(-36*DIST_RATIO), drivetrain.convertInchesToSteps(-40*DIST_RATIO));
  //sitStillPickUp();
  delay(MOVE_DELAY);
  
  drivetrain.step(drivetrain.convertInchesToSteps(-40*DIST_RATIO), drivetrain.convertInchesToSteps(-40*DIST_RATIO));
  //sitStillPickUp();
  delay(MOVE_DELAY);
  
  drivetrain.step(drivetrain.convertInchesToSteps(-2*DIST_RATIO), drivetrain.convertInchesToSteps(-2*DIST_RATIO));
  delay(MOVE_DELAY);   
  
  drivetrain.step(drivetrain.convertInchesToSteps(-ONE_THIRTY_FIVE_DEG), drivetrain.convertInchesToSteps(ONE_THIRTY_FIVE_DEG));
  delay(MOVE_DELAY);  
  
  drivetrain.step(drivetrain.convertInchesToSteps(-108*DIST_RATIO), drivetrain.convertInchesToSteps(-108*DIST_RATIO));
  delay(MOVE_DELAY);  

  drivetrain.step(drivetrain.convertInchesToSteps(ONE_THIRTY_FIVE_DEG), drivetrain.convertInchesToSteps(-ONE_THIRTY_FIVE_DEG));
  delay(MOVE_DELAY);
  
  drivetrain.step(drivetrain.convertInchesToSteps(-36*DIST_RATIO), drivetrain.convertInchesToSteps(-42*DIST_RATIO));
  //sitStillPickUp();
  delay(MOVE_DELAY);
  
  drivetrain.step(drivetrain.convertInchesToSteps(-42*DIST_RATIO), drivetrain.convertInchesToSteps(-42*DIST_RATIO));
  //sitStillPickUp();
  delay(MOVE_DELAY);
  
  drivetrain.step(drivetrain.convertInchesToSteps(NINETY_DEG), drivetrain.convertInchesToSteps(-NINETY_DEG));
  delay(MOVE_DELAY);
  
  drivetrain.step(drivetrain.convertInchesToSteps(-40*DIST_RATIO), drivetrain.convertInchesToSteps(-40*DIST_RATIO));
  //sitStillPickUp();
  delay(MOVE_DELAY);
  
  //TODO: implement dropoffsequence
  while (true){}
}
