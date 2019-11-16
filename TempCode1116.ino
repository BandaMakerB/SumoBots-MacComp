#include <DC_Motor.h>
DC_Motor motor2(7,8,1);

const int trigPin = 9; 
const int echoPin = 10;
const int calibrationTime = 10;

float duration, distance; 

void setup() 
{
  
 //pinMode(trigPin, OUTPUT); 
 //pinMode(echoPin, INPUT); 
 Serial.begin(9600); 

 Serial.print("calibrating sensor ");
}

void loop() 
{

  digitalWrite(trigPin, LOW); 
 delayMicroseconds(2); 
 digitalWrite(trigPin, HIGH); 
 delayMicroseconds(10); 
 digitalWrite(trigPin, LOW);

 duration = pulseIn(echoPin, HIGH);

 distance = (duration*.0343)/2;

 Serial.print("Distance: ");  
 Serial.println(distance); 
 delay(50); 
 
  motor2.set_speed(1000);
  motor2.forward_with_set_speed();
  //delay(5000);
  motor2.motor_speed_zero();
  //delay(2000);
  motor2.set_speed(1000);
  motor2.reverse_with_set_speed();
  //delay(5000);
  motor2.motor_speed_zero();
 // delay(2000);
}
  // function tripwire
  // function objectDetecter
  // function lineDetector
  // function whenDetected
  // function directionDetecter
