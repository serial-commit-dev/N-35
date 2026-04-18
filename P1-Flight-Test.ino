//phase-1 Take-Off
//phase-2 Touch-Down
#include <Servo.h>

Servo LE;
Servo RE;

const int motorPin = 5;
const int left_elevon = 6;
const int right_elevon = 9;

int LE_angle = 0;
int RE_angle = 0;

unsigned long = previous_millis = 0; //Estimated time for to Ground-roll
const long interval = 17000;

const long takeOff_interval = 27000; //Estimated time for soft-take-off
const long Full_takeOff_interval = 42000; //Estimated time for Complete Take-Off!!

const long soft_touchDown_interval = 54000; //Estimated time for soft touch down
const long complete_touchDown_interval = 67000; //Estimated time for Landing

void setup(){
  Serial.begin(9600);
  
  pinMode(motorPin,OUTPUT);
  LE.attach(left_elevon);
  RE.attach(right_elevon);

  LE.write(LE_angle);
  RE.write(RE_angle);
  
}

void loop(){
  ///////////////////////////////////////////!!!Take-Off Phase!!!///////////////////////////////////////////////////////
  digitalWrite(motorPin, true);

  //Ground-Roll for 17s before take-off
  current_millis = millis();//the stopwatch
  
  if(current_millis - interval){
     digitalWrite(motorPin, true);

    //Soft-Take-Off 
    //Duration: 10s
    takeOff_millis = millis();//the stopwatch
    if(previous_millis - takeOff_millis >= takeOff_interval){
      previous_millis = takeOff_millis;
      
      soft_up(); 

      //Complete Take-Off!!
      //Duration: 15s
      Full_takeOff_millis = millis();
      if(previous_millis - Full_takeOff_millis >= Full_takeOff_interval){
        previous_millis = Full_takeOff_millis;

        Up()

           //////////////////////////////////////////////Touch-Down Phase!!///////////////////////////////////////////////////
          soft_touchDown = millis();// the stopwatch
          if(previous_millis - soft_tochDown >= soft_touchDown_interval){
            previous_millis = soft_touchDown;

            soft_down()

              //Complete Touch Down;
              complete_tocuhDown = millis();//the stopwatch
              if(previous_millis - complete_tocuhDown >= complete_touchDown_interval){
                previous_millis = complete_touchDown;

                down()

                       ////////////////////////End Of Flight Test/////////////////////////////
              }
          }
      }
       
      
    }
    
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
