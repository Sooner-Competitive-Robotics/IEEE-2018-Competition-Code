#include <RobotLib.h>
#include <IEEErobot2018.h>

#define pinLeftMot1 
#define pinLeftMot2 
#define pinRightMot1
#define pinRightMot2
#define pinColor1 //should have same pin on i2c chain
#define pinColor2
#define pinGyro1 //should have same pin on i2c chain
#define pinGyro2
#define pinLeftEnc1
#define pinLeftEnc2
#define pinRightEnc1
#define pinRightEnc2
#define pinIntakeEnc1
#define pinIntakeEnc2
#define pinMetDet //make sure it's giving an output
#define pinElecMag //make sure it's giving an output
#define pinLimSwitch 
#define pinIRMatrix1
#define pinIRMatrix2
#define pinIRMatrix3
#define pinIRMatrix4
#define pinIRMatrix5
#define colorServoPin 

void setup() {
  // put your setup code here, to run once:
  //Drivetrain
  Motor leftMot = new Motor();
  Motor rightMot = new Motor();
  Encoder leftEnc = new Encoder();
  Encoder rightEnc = new Encoder();
  Gyro gyro = new Gyro();
  DigitalDevice mDetector = new DigitalDevice();
  IRMatrix matrix = new IRMatrix(pinIRMatrix1, pinIRMatrix2, pinIRMatrix3, pinIRMatrix4, pinIRMatrix5);
  
  //Drivetrain
  leftMot.begin(pinLeftMot1, pinLeftMot2, 1);
  rightMot.begin(pinRightMot1, pinRightMot2, 1);
  leftEnc.begin(pinLeftEnc1, pinLeftEnc2, 1);
  rightEnc.begin(pinRightEnc1, pinRightEnc2 1);
  gyro.begin(pinGyro1, pinGyro2);                                                              //make sure gyro is correct
  mDetector.initialize(pinMetDet);
  matrix.begin(pinIRMatrix1, pinIRMatrix2, pinIRMatrix3, pinIRMatrix4, pinIRMatrix5);
  
  //Drivetrain
  Drivetrain drivetrain;
  drivetrain.begin(leftMot, rightMot, leftEnc, rightEnc, gyro, matrix, mDetector);
  
  Encoder tEncoder;
  
  //Intake
  DigitalDevice lSwitch;
  Electromagnet eMagnet;
  Servo tServo;                                    //remember to instantiate winch servo
  Turntable turntable;
  ColorSensor colorSensor;

  tEncoder.begin(pinIntakeEncoder1, pinIntakeEncoder2);
  eMagnet.initialize(pinElecMag); 

  lSwitch.initialize(pinLimSwitch);
  turntable.begin(tServo);
  
  //Intake
  Intake intake = new Intake(tEncoder, mDetector, lSwitch, eMagnet, turntable, colorSensor, colorServoPin);

  //Colors
  Color blue("blue");
  Color green("green");
  Color red("red");
  Color cyan("cyan");
  Color magenta("magenta");
  Color yellow("yellow");
  Color gray("gray");
  
  int coinCount = 0;
  int distMetalDetectToIntake;
  int distIntakeToIRMatrix;
  Color colorOfSquare;
}

void loop() {
  // put your main code here, to run repeatedly:
  drivetrain.drive(47, 0);
  drivetrain.searchForward();

  drivetrain.turnToAngle(90);
  drivetrain.followLineUntilCoin();                         //need to modify method because robot will drive through gray square where there is no line
  if(intake.coinDetected())
  {
    drivetrain.drive(distMetalDetectToIntake, 0);
    intake.pickUpSequenceA();
    coinCount++;
  }
  drivetrain.drive(distIntakeToMatrix, 0);
  drivetrain.turnToAngle(-135);
  
  while(coinCount != 4)
  {
    drivetrain.followLineUntilCoin();
    if(intake.coinDetected())
    {
      drivetrain.drive(distMetalDetectToIntake, 0);
      intake.pickUpSequenceA();
      coinCount++;
    }  
  }
  drivetrain.drive(distIntakeToMatrix, 0);
  drivetrain.turnToAngle(-135);

  while(coinCount != 6)
  {
    drivetrain.followLineUntilCoin();
    if(intake.coinDetected())
    {
      drivetrain.drive(distMetalDetectToIntake, 0);
      intake.pickUpSequenceA();
      coinCount++;
    }  
  }
  drivetrain.drive(distIntakeToMatrix, 0);
  drivetrain.turnToAngle(-135);

  while(coinCount != 9)
  {
    drivetrain.followLineUntilCoin();
    if(intake.coinDetected())
    {
      drivetrain.drive(distMetalDetectToIntake, 0);
      intake.pickUpSequenceA();
      coinCount++;
    }  
  }
  drivetrain.drive(distIntakeToMatrix, 0);
  drivetrain.turnToAngle(135);

  while(coinCount != 10)
  {
    drivetrain.followLineUntilCoin();
    if(intake.coinDetected())
    {
      drivetrain.drive(distMetalDetectToIntake, 0);
      intake.pickUpSequenceA();
      coinCount++;
    }  
  }
  drivetrain.drive(distIntakeToMatrix, 0);
  drivetrain.turnToAngle(90);

  while(coinCount != 12)
  {
    drivetrain.followLineUntilCoin();
    if(intake.coinDetected())
    {
      drivetrain.drive(distMetalDetectToIntake, 0);
      intake.pickUpSequenceA();
      coinCount++;
    }  
  }

  //drive till reach color and drive to all colors and go back to white square

  drivetrain.drive(1.5, 0);                                 //1.5' is distance from last coin to center of color square
  intake.dropOffSequence(colorSensor.getColor());

  drivetrain.drive(3.5, 90);                                               //3.5' is distance between centers of color squares
  intake.dropOffSequence(colorSensor.getColor());

  for(int i = 0; i < 3; i++)                                             //go finish off the colors on the other 3 sides of the board (don't go back to first color)
  {
    drivetrain.drive(3.5, 90);
    intake.dropOffSequence(colorSensor.getColor());

    drivetrain.drive(3.5, 0);
    intake.dropOffSequence(colorSensor.getColor());
  }

  drivetrain.drive(3.5, 180);                                            //end up back in white square
  
}
