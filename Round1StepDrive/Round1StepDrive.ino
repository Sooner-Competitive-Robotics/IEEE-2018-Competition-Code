#include <RobotLib.h>
#include <IEEErobot2018.h>

void setup()
{
  robotSetup();
}

void loop()
{
  // put your main code here, to run repeatedly:
  stepDrive.step(stepDrive.convertInchesToSteps(18), stepDrive.convertInchesToSteps(18));
  //turn 90
  //stepDrive.step();
  stepDrive.step(stepDrive.convertInchesToSteps(24), stepDrive.convertInchesToSteps(24));
  sitStillPickUp();
  coinCount++;
  //turn -135
  //stepDrive.step();
  
  stepDrive.step(stepDrive.convertInchesToSteps(17), stepDrive.convertInchesToSteps(17));
  sitStillPickUp();  
  
  stepDrive.step(stepDrive.convertInchesToSteps(34), stepDrive.convertInchesToSteps(34));
  sitStillPickUp(); 

  stepDrive.step(stepDrive.convertInchesToSteps(17), stepDrive.convertInchesToSteps(17));
  sitStillPickUp();  
  
  //turn -135
  //stepDrive.step(); 

  stepDrive.step(stepDrive.convertInchesToSteps(24), stepDrive.convertInchesToSteps(24));
  sitStillPickUp();  
  
  //turn -90
  //stepDrive.step();

  stepDrive.step(stepDrive.convertInchesToSteps(12), stepDrive.convertInchesToSteps(12));
  sitStillPickUp();  

  stepDrive.step(stepDrive.convertInchesToSteps(24), stepDrive.convertInchesToSteps(24));
  sitStillPickUp();  
  
  stepDrive.step(stepDrive.convertInchesToSteps(12), stepDrive.convertInchesToSteps(12));
  sitStillPickUp();
  
  //turn -90
  //stepDrive.step();

  stepDrive.step(stepDrive.convertInchesToSteps(24), stepDrive.convertInchesToSteps(24));
  sitStillPickUp();  

  //turn -135
  //stepDrive.step();

  stepDrive.step(stepDrive.convertInchesToSteps(17), stepDrive.convertInchesToSteps(17));
  sitStillPickUp();

  stepDrive.step(stepDrive.convertInchesToSteps(34), stepDrive.convertInchesToSteps(34));
  sitStillPickUp();

  stepDrive.step(stepDrive.convertInchesToSteps(17), stepDrive.convertInchesToSteps(17));
  sitStillPickUp();

  //reach cyan/blue square
  stepDrive.step(stepDrive.convertInchesToSteps(25.5), stepDrive.convertInchesToSteps(25.5));

  //TODO: implement dropoffsequence
}
