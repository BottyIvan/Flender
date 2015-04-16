#include <Servo.h>

Servo servoLeftFront;          // Define left servo
Servo servoRightFront;         // Define right servo
Servo servoLeftRear;         // Define right servo
Servo servoRightRear;         // Define right servo

int ang = 25;

void setup() { 
  servoLeftFront.attach(2);  // Set left servo to digital pin 10
  servoRightFront.attach(3);  // Set right servo to digital pin 9
  servoLeftRear.attach(5);
  servoRightRear.attach(6);
} 
void loop() {            // Loop through motion tests
  turnFront();
  backRear();
  delay(225);
  turnRear();
  backRear();
  delay(225);
}
void turnFront() {
  servoLeftFront.write(ang);
  servoRightFront.write(ang);
}
void turnRear(){
  servoRightFront.write(ang);
  servoRightRear.write(ang);
}
void backFront() {
  servoLeftFront.write(0);
  servoRightFront.write(0);
}
void backRear(){
  servoRightFront.write(0);
  servoRightRear.write(0);
}
