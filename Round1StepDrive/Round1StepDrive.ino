#include <RobotLib.h>
#include <IEEErobot2018.h>

void setup()
{
  robotSetup();
}

void loop()
{
  // put your main code here, to run repeatedly:
  drivetrain.step(drivetrain.convertInchesToSteps(18*DIST_RATIO), drivetrain.convertInchesToSteps(18*DIST_RATIO));
  delay(MOVE_DELAY);

  drivetrain.setRPM(20);
  //turn 90
  drivetrain.step(drivetrain.convertInchesToSteps(NINETY_DEG), drivetrain.convertInchesToSteps(-NINETY_DEG));
  delay(MOVE_DELAY);

  drivetrain.setRPM(30);
  drivetrain.step(drivetrain.convertInchesToSteps(24*DIST_RATIO), drivetrain.convertInchesToSteps(24*DIST_RATIO));
  //sitStillPickUp();
  delay(MOVE_DELAY);

  drivetrain.setRPM(20);
  //turn -135
  drivetrain.step(drivetrain.convertInchesToSteps(-ONE_THIRTY_FIVE_DEG), drivetrain.convertInchesToSteps(ONE_THIRTY_FIVE_DEG));
  delay(MOVE_DELAY);

  drivetrain.setRPM(30);
  drivetrain.step(drivetrain.convertInchesToSteps(17*DIST_RATIO), drivetrain.convertInchesToSteps(17*DIST_RATIO));
  //sitStillPickUp(); 
  delay(MOVE_DELAY);
  
  drivetrain.step(drivetrain.convertInchesToSteps(34*DIST_RATIO), drivetrain.convertInchesToSteps(34*DIST_RATIO));
  //sitStillPickUp(); 
  delay(MOVE_DELAY);

  drivetrain.step(drivetrain.convertInchesToSteps(17*DIST_RATIO), drivetrain.convertInchesToSteps(17*DIST_RATIO));
  //sitStillPickUp();  
  delay(MOVE_DELAY);

  drivetrain.setRPM(20);
  //turn -135
  drivetrain.step(drivetrain.convertInchesToSteps(-ONE_THIRTY_FIVE_DEG), drivetrain.convertInchesToSteps(ONE_THIRTY_FIVE_DEG)); 
  delay(MOVE_DELAY);

  while(true){}; 
  drivetrain.step(drivetrain.convertInchesToSteps(24*DIST_RATIO), drivetrain.convertInchesToSteps(24*DIST_RATIO));
  //sitStillPickUp();  
  
  //turn -90
  drivetrain.step(drivetrain.convertInchesToSteps(-NINETY_DEG), drivetrain.convertInchesToSteps(NINETY_DEG));

  drivetrain.step(drivetrain.convertInchesToSteps(12*DIST_RATIO), drivetrain.convertInchesToSteps(12*DIST_RATIO));
  //sitStillPickUp();  

  drivetrain.step(drivetrain.convertInchesToSteps(24*DIST_RATIO), drivetrain.convertInchesToSteps(24*DIST_RATIO));
  //sitStillPickUp();  
  
  drivetrain.step(drivetrain.convertInchesToSteps(12*DIST_RATIO), drivetrain.convertInchesToSteps(12*DIST_RATIO));
  //sitStillPickUp();
  
  //turn -90
  drivetrain.step(drivetrain.convertInchesToSteps(-NINETY_DEG), drivetrain.convertInchesToSteps(NINETY_DEG));

  drivetrain.step(drivetrain.convertInchesToSteps(24*DIST_RATIO), drivetrain.convertInchesToSteps(24*DIST_RATIO));
  //sitStillPickUp();  

  //turn -135
  drivetrain.step(drivetrain.convertInchesToSteps(-ONE_THIRTY_FIVE_DEG), drivetrain.convertInchesToSteps(ONE_THIRTY_FIVE_DEG));

  drivetrain.step(drivetrain.convertInchesToSteps(17*DIST_RATIO), drivetrain.convertInchesToSteps(17*DIST_RATIO));
  //sitStillPickUp();

  drivetrain.step(drivetrain.convertInchesToSteps(34*DIST_RATIO), drivetrain.convertInchesToSteps(34*DIST_RATIO));
  //sitStillPickUp();

  drivetrain.step(drivetrain.convertInchesToSteps(17*DIST_RATIO), drivetrain.convertInchesToSteps(17*DIST_RATIO));
  //sitStillPickUp();

  //reach cyan/blue square
  //drivetrain.step(stepDrive.convertInchesToSteps(25.5), stepDrive.convertInchesToSteps(25.5));
  
  //TODO: implement dropoffsequence
}
