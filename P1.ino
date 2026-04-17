//conside the servo double horn arm's left end as 0 degree right as 180 and middle as 90
//90 degree lets the elevons relax
//180 degree is full stretch for the anterior elevon to fold to (DOWN)
//0 degree is full strecth for the posterior elevon to fold to elevate to (UP)

#include <Servo.h>


Servo LE; //left_elevon
Servo RE; //right_elevon

const int motorPin = 5;
const int left_elevon = 4;
const int right_elevon = 7;

int LE_angle = 0;
int RE_angle = 0;

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
  while(digitalWrite(motorPin, true)){ //Initializes Motor (Sucks air in from both the Inlets)
    //After x time
    soft_Up();
    //after the jet rises
    Up();
    //after x time
    soft_down();
    //after 5 seconds
    soft_down(); //the jet is now travelling horizontally without the nose pointing upward

    //turning Triangle
    soft_right()
    //After 20 seconds
    soft_left();
    //After 20 seconds
    soft_left();
    //after another 20 seconds is over, by that time, the jet would've drawn a triangle
  }


  
  
}


// Directions
void Up(){
  LE.write(0);
  RE.write(180);
}

void down(){
  LE.write(180);
  Re.write(180);
}

void right(){
  LE.write(90);
  RE.write(0);
}

void left(){
  LE.write(0);
  RE.write(90);
}


//Soft-Turning-Directions
void soft_Up(){
  LE.write(45);
  RE.write(45);
}

void soft_down(){
  LE.write();
  Re.write();
}

void soft_right(){
  LE.write(45);
  RE.write();
}

void soft_left(){
  LE.write();
  RE.write(45);
}
