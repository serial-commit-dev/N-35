#include <Servo.h>

Servo LE; //left_effector
Servo RE; //right_effector

const int motorPin = 5;
const int left_effector = 4;
const int right_effector = 7;
int LE_angle = 0;
int RE_angle = 0;

void setup(){
  Serial.begin(9600);

  pinMode(motorPin,OUTPUT);
  LE.attach(left_effector);
  RE.attach(right_effector);

  LE.write(LE_angle);
  RE.write(RE_angle);
  
}

void loop(){
  digitalWrite(motorPin, true); //Initializes Motor (Sucks air in from both the Inlets)
  //After x time
  UP();
  
}


// Directions
void Up(){
  LE.write();
  RE.write();
}

void down(){
  LE.write();
  Re.write();
}

void right(){
  LE.write();
  RE.write();
}

void left(){
  LE.write();
  RE.write();
}


//Soft-Turning-Directions
void Up(){
  LE.write();
  RE.write();
}

void down(){
  LE.write();
  Re.write();
}

void right(){
  LE.write();
  RE.write();
}

void left(){
  LE.write();
  RE.write();
}
