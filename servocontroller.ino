#include <Servo.h>

Servo body, shoulder, elbow, gripper;

void setup()
{
  body.attach(11);  // attaches to servo
  shoulder.attach(10);  // attaches to servo
  elbow.attach(9);  // attaches to servo
  gripper.attach(6);  // attaches to servo  
}

void loop() 
{ 
  delay(20);                           // waits for the servo
  int bodyA = analogRead(A0);
  int shoulderA = analogRead(A1);
  int elbowA = analogRead(A2);
  int gripperA = analogRead(A3);

  body.write(map(bodyA, 0, 1023, 15, 165));
  shoulder.write(map(shoulderA, 0, 1023, 15, 165));
  elbow.write(map(elbowA, 0, 1023, 15, 165));
  gripper.write(map(gripperA, 0, 1023, 15, 165));
 } 
