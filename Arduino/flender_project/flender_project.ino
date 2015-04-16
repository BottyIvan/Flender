#include <Servo.h>

Servo servoLeftFront;          // Define left servo
Servo servoRightFront;         // Define right servo
Servo servoLeftRear;         // Define right servo
Servo servoRightRear;         // Define right servo

int ang = 15;
int time = 500;

void setup() { 
  servoLeftFront.attach(2);  // Set left servo to digital pin 10
  servoRightFront.attach(3);  // Set right servo to digital pin 9
  servoLeftRear.attach(5);
  servoRightRear.attach(6);
} 
void loop() {   
 // Loop through motion tests
  Kinping();
  delay(time);
  ReverseFlash();
  delay(time); 
  Senpai();
  delay(time);
  Senin();
  delay(time);

}
void Senpai() {
  servoLeftFront.write(ang);
  servoRightFront.write(ang);
  
  servoLeftRear.write(ang);
  servoRightRear.write(ang);
}
void Senin(){
  servoLeftFront.write(0);
  servoRightFront.write(0);
  servoLeftRear.write(0);
  servoRightRear.write(0);
}
void ReverseFlash(){
  servoLeftFront.write(ang);
  servoRightFront.write(ang);
  servoLeftRear.write(ang);
  servoRightRear.write(ang);
}
void Kinping(){
  servoLeftFront.write(0);
  servoRightFront.write(0);
  servoLeftRear.write(0);
  servoRightRear.write(0);
}
