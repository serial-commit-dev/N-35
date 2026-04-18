//phase-1 Take-Off
#include <Servo.h>

Servo LE;
Servo RE;

const int motorPin = 5;
const int left_elevon = 6;
const int right_elevon = 9;

int LE_angle = 0;
int RE_angle = 0;

unsigned long = previous_millis = 0; //Estimated time for to ground-roll
const long interval = 12000;

unsigned long previous_takeOff_millis = 0; //
const long interval = 12000;

void setup(){
  Serial.begin(9600);
  
  pinMode(motorPin,OUTPUT);
  LE.attach(left_elevon);
  RE.attach(right_elevon);

  LE.write(LE_angle);
  RE.write(RE_angle);
  
}

void loop(){
  digitalWrite(motorPin, true);

  current_millis = millis();
  if(current_millis - previous_millis >= interval){
    previous_millis = current_millis;

     digitalWrite(motorPin, true);
  }

  
}


/////////////////////////////////////////////////////////////Sharp-Manuvering/////////////////////////////////////////////////////////////////
void Up(){
  LE.write(50);
  RE.write(50);
}

void down(){
  LE.write(130);
  Re.write(130);
}

///////////////////////////////////////////////////////Soft-maneuvering////////////////////////////////////////////////////////
void soft_up(){
  LE.write(60); 
  RE.write(60);
}

void soft_down(){
  LE.write(120);
  RE.write(120);
}
