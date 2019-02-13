// This source file should contain various autonomous routine functions and grouped
// together to run one of multiple autonomous routine sequences based on some selection
//

#include "main.h"
#include "portdef.h"			// Cortex port defintions
#include "intake.h"
#include "shooter.h"
#include "chassis.h"
#include "manipulator.h"
#include "lift.h"
#include "auto.h"
#include "main.h"



char *song = "TakeOnMe:d=4,o=4,b=160:8f#5,8f#5,8f#5,8d5,8p,8b,8p,8e5,8p,8e5,8p,8e5,8g#5,8g#5,8a5,8b5,8a5,8a5,8a5,8e5,8p,8d5,8p,8f#5,8p,8f#5,8p,8f#5,8e5,8e5,8f#5,8e5,8f#5,8f#5,8f#5,8d5,8p,8b,8p,8e5,8p,8e5,8p,8e5,8g#5,8g#5,8a5,8b5,8a5,8a5,8a5,8e5,8p,8d5,8p,8f#5,8p,8f#5,8p,8f#5,8e5,8e5";

void compAutoRedRight(){

  // All the veraious autonomous commands for the Competition, Red Sqaure
  // Right position go here.  THen this function is called in auto.c the autonomous()
  // function based on some selector input.
  ////driveForDistancePID(30, 60);     // for 10 meter = 394" at speed 60
   speakerInit();
   driveForDistancePID(3,50);
   delay(500);
   pivotTurn(0, 55, 80);
   delay(500);
   driveForDistancePID(31,50);            // turn at seed 30 for 90 degree angle right turn
   liftMove(90);
   delay(700);
   liftMove(0);
   driveForDistancePID(8, 50);
   delay(500);        // After turn drive a bit more forward(distance, speed)
   driveForDistancePID(25, -50);
   delay(500);
   pivotTurn(1, 55, 65);
   delay(500);
   driveForDistancePID(46, 55);
   delay(500);
   pivotTurn(0, 55, 80);
   delay(500);
   driveForDistancePID(16,50);
   delay(500);
   liftMove(90);
   delay(650);
   liftMove(0);
   driveForDistancePID(8, 55);
   delay(500);
   liftMove(-190);
   delay(500);
   liftMove(0);
   driveForDistancePID(20, -55);
   delay(500);
   pivotTurn(1,50,1080);
   //liftMove(-90);
   //delay(1000);
   //liftMove(0);
   delay(50);
   speakerPlayRtttl("d=4,o=5,b=100:16e6,16e6,32p,8e6,16c6,8e6,8g6,8p,8g,8p,"
   "8c6,16p,8g,16p,8e,16p,8a,8b,16a#,8a,16g.,16e6,16g6,8a6,16f6,8g6,8e6,16c6,16d6,8b,16p,"
   "8c6,16p,8g,16p,8e,16p,8a,8b,16a#,8a,16g.,16e6,16g6,8a6,16f6,8g6,8e6,16c6,16d6,8b,16p,"
   "8p,16g6,16f#6,16f6,16d#6,16p,16e6,16p,16g#,16a,16c6,16p,16a,16c6,16d6,"
   "8p,16g6,16f#6,16f6,16d#6,16p,16e6,16p,16c7,16p,16c7,16c7,8p.,"
   "8p,16g6,16f#6,16f6,16d#6,16p,16e6,16p,16g#,16a,16c6,16p,16a,16c6,16d6");
   delay(50);

}

void testAutoDrive(){
  // lets drive forward for a set speed using PID and will drive forever
  // unless asked to stop.....
  driveRobot(80);       // dirve robot forward at speed '80'
  delay(2000);         // drive for 200mSec (2Sec)
}
