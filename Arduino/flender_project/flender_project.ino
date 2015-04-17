#include <Servo.h>

Servo servoLeftFront;          // Define left servo
Servo servoRightFront;         // Define right servo
Servo servoLeftRear;         // Define right servo
Servo servoRightRear;         // Define right servo
Servo servoTurn1;
Servo servoTurn2;

int ang_turn = 90;
int rev_ang_turn = 180;
int ang = 25;
int time = 100;
int x=0;

void setup() {
  Serial.begin(57600);
  servoLeftFront.attach(2);  // Set left servo to digital pin 10
  servoRightFront.attach(3);  // Set right servo to digital pin 9
  servoLeftRear.attach(4);
  servoRightRear.attach(5);
  servoTurn1.attach(6);
  servoTurn2.attach(7);
}

void loop() {
  // Loop through motion tests
  for (; x < 10; x++) {
      Serial.print(x);
      Kinping();
      delay(time);
      ReverseFlash();
      delay(time);
      Senpai();
      delay(time);
      Senin();
      delay(time);
      
  }
  Turn();
  delay(1000);;
  ReverseTurn();
  delay(time);
  x=0;
  for (; x < 50; x++) {
      Serial.print(x);
      Kinping();
      delay(time);
      ReverseFlash();
      delay(time);
      Senpai();
      delay(time);
      Senin();
      delay(time);
      
  }
    Turn();
  delay(1000);;
  ReverseTurn();
  delay(time);
}

void Turn() {
  servoTurn1.write(0);
  servoTurn2.write(0);
}

void ReverseTurn() {
  servoTurn1.write(ang_turn);
  servoTurn2.write(ang_turn);
}

void Senpai() {
  servoLeftFront.write(ang);
  servoRightFront.write(ang);
  servoLeftRear.write(ang);
  servoRightRear.write(ang);
}

void Senin() {
  servoLeftFront.write(0);
  servoRightFront.write(0);
  servoLeftRear.write(0);
  servoRightRear.write(0);
}

void ReverseFlash() {
  servoLeftFront.write(ang);
  servoRightFront.write(ang);
  servoLeftRear.write(ang);
  servoRightRear.write(ang);
}
void Kinping() {
  servoLeftFront.write(0);
  servoRightFront.write(0);
  servoLeftRear.write(0);
  servoRightRear.write(0);
}
