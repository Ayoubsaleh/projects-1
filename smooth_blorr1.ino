#include<Servo.h>
Servo M1 ; 
Servo M2;

void setup (){

M1.attach(7);
M2.attach(8);

M1.write(150);
M2.write(70); 
  
}


void loop (){}
