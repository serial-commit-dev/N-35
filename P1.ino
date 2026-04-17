//conside the servo double horn arm's left end as 0 degree right as 180 and middle as 90
//For UP, the range is 0 - 90
//For Down, the range is 90 - 180

#include <Servo.h>


Servo LE; //left_elevon
Servo RE; //right_elevon

const int motorPin = 5;
const int left_elevon = 6;
const int right_elevon = 9;

int LE_angle = 0;
int RE_angle = 0;

unsigned long = previous_millis = 0; //Estimated time for to take-off
const long intervals = 12000;

unsigned long = previous_millis_DOWN = 0;
const long Intervals_DOWN = 4333;

unsigned long previous_millis_right = 0;
const long interval_right = 20000;


void setup(){
  Serial.begin(9600);

  pinMode(motorPin,OUTPUT);
  LE.attach(left_elevon);
  RE.attach(right_elevon);

  LE.write(LE_angle);
  RE.write(RE_angle);
  
}

void loop(){
  
  digitalWrite(motorPin, true); //Initializes Motor (Sucks air in from both the Inlets)
  
  unsigned long current_millis = millis();  //After x time
  if(current_millis - previous_millis >= intervals){
    previous_millis = current_millis;
      
    soft_Up() //action
    unsigned long previous 
    Up()//after the jet rises
    
  }
    
   //after 4333ms time
  unsigned long current_millis_DOWN = millis();
  if(current_millis_DOWN - previous_millis_DOWN >= Interval_DOWN){
     previous_millis_DOWN = current_millis_DOWN;
      
     soft_down() //the jet is now travelling horizontally without the nose pointing upward
     soft_right();   
  }
     
   
  
    
  current_millis_right = millis();
  if(current_millis_right - previous_millis_right >= interval_right){
     previous_millis_right = current_millis_right;
       
  } 

  soft_left();
    //After 20 seconds
  current_millis_left = millis();
  if(current_millis_left - previous_millis_left >= interval_left){
      previous_millis_left = current_millis_left;
       
  } 
    
  soft_left();
    //after another 20 seconds is over, by that time, the jet would've drawn a triangle
  current_millis_right = millis();
  if(current_millis_final_left - previous_millis_right >= interval_final_left){
     previous_millis_final_left = current_millis_final_left;
       
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

void right(){
  LE.write(50); //UP
  RE.write(130); //DOWN
}

void left(){
  LE.write(130);
  RE.write(50);
}


///////////////////////////////////////////////////////Soft-maneuvering////////////////////////////////////////////////////////
void soft_Up(){
  LE.write(60); 
  RE.write(60);
}

void soft_down(){
  LE.write(120);
  RE.write(120);
}

void soft_right(){
  LE.write(60);
  RE.write(120);
}

void soft_left(){
  LE.write(120);
  RE.write(60);
}
