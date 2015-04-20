#include <Servo.h>

 
Servo ango1;
Servo ango2;
Servo ango3;
Servo ango4;
Servo piede1;
Servo piede2;
Servo piede3;
Servo piede4;


int ang=40;
int ang_piede=20;
int x=0;
int y=0;
int time=150;

void setup (){
  Serial.begin(57600);
  ango1.attach(2);  // Set left servo to digital pin 10
  ango2.attach(3);  // Set right servo to digital pin 9
  ango3.attach(4);
  ango4.attach(5);
  piede1.attach(6);
  piede2.attach(7);
  piede3.attach(8);
  piede4.attach(9);  
}
  
  
void loop(){
  ango1.write(ang);  
  delay(ang_piede);
  ango2.write(ang);
  delay(time);
  ango3.write(ang);
  delay(ang_piede);
  ango4.write(ang);
  delay(time);
  ango1.write(0);
  ango2.write(0);
  delay(time);
  ango3.write(0);
  ango4.write(0);
  delay(time);
}
