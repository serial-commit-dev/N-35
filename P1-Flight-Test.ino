#include <Servo.h>

Servo LE;
Servo RE;

const int motor_pin = 5;
const int left_elevon = 6;
const int rigth_elevon = 9;

int leftElevon_State = 90;
int rightElevon_State = 90;

void setup() {
  Serial.begin(9600);

  pinMode(motor_pin,OUTPUT);
  LE.attach(left_elevon);
  RE.attach(right_elevon);

  LE.write(leftElevon_State);
  RE.write(rightElevon_State);
}

unsigned long previous_millis = 0;
const long interval = 5583;

const long pitch_up_interval = 7483;         //1.9s for picthing up
const long neutral_interval = 8383;    // 900ms neutral
const long kill_motor = 9653;       //1.27s   
const long pitch_down_interval = 14013;     //4.36s     
  


void loop() {
  current_millis = millis();
  
  //Ground-Roll
  if (current_millis >= interval){
    previous_millis = current_millis;

    digitalWrite(motor_pin, true);

    pitchUP_millis = millis();
    if(current_millis - pitchUP_millis >= pitch_up_interval){
      prvious_millis = pitchUP_millis;
      pitch_up() //Reaches upto 20.1m/s
    }
    
    
    stayNeutral_millis = millis();
    if(current_millis - stayNeutral_millis >= neutral_interval){
      previous_millis = stayNeutral_millis;
      neutral_position() //to let the jet feel air
    }
    

    motor_kill_millis = millis();
    if(stayNeutral_millis - motor_kill_millis  >= kill_motor){
      digitalWrite(motor_pin, false); //The jet should reach its peak velocity by, here (24.7m/s)
      
      
      pitch_down() 
    }
  }

  

}




///////////////////////////////////Used for ascending and descending//////////////////////////////////////////////////
void pitch_up(){
  LE.write(98);// +8 degree climb
  RE.write(98);
}

void pitch_down();
  LE.write(82);// -8 degree descend
  RE.write(82);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void neutral_position(){
  LE.write(90);
  RE.write(90);
}
