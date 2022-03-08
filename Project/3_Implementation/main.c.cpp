#include <Arduino.h>
#line 1 "C:\\Users\\Aindrila Datta\\Downloads\\sketch_mar07a-MOD_2\\sketch_mar07a-MOD_2.ino"
// defines pins numbers
const int trigPin = 9; // pin on the arduinowhere the trigger pin is connected
const int echoPin = 10;// pin on the arduino where the echo pin is connected
const int led1 = 2; // water level indicator 1
const int led2 = 3; // water level indicator 2
const int led3 = 4; // water level indicator 3
const int led4 = 5; // pin connected to the base of NPN transistor through a resistor for switching the pump ON and OFF

// defines variables
long duration; // variable where the the reflection time of the ultrasound is stored
int distance; // variable where the distance of the measured object is stored


#line 14 "C:\\Users\\Aindrila Datta\\Downloads\\sketch_mar07a-MOD_2\\sketch_mar07a-MOD_2.ino"
void setup();
#line 25 "C:\\Users\\Aindrila Datta\\Downloads\\sketch_mar07a-MOD_2\\sketch_mar07a-MOD_2.ino"
void loop();
#line 14 "C:\\Users\\Aindrila Datta\\Downloads\\sketch_mar07a-MOD_2\\sketch_mar07a-MOD_2.ino"
void setup()
{
  pinMode (led1, OUTPUT);// sets as output
    pinMode (led2, OUTPUT);//sets as output
      pinMode (led3, OUTPUT);//sets as aoutput
       pinMode(led4, OUTPUT);//sets as output
         pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
           pinMode(echoPin, INPUT); // Sets the echoPin as an Input
         Serial.begin(9600); // Starts the serial communication
         }
     
     void loop()
 {
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(1000);
     
     // Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
   delayMicroseconds(1000);
     digitalWrite(trigPin, LOW);
     
// Reads the echoPin, returns the sound wave travel time in microseconds
   duration = pulseIn(echoPin, HIGH);
   
// Calculating the distance
distance= duration*0.034/2;

// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
delay (1000);

if ( distance <=15)// when water has gotten to this level or is less than this level
{ 
 digitalWrite (led1, HIGH);// led1 comes ON and remains ON
}
     else // otherwise               
       { 
    digitalWrite(led1, LOW);  //led1 goes OFF and stays OFF
       }
if (distance >=16)// when the level of water has gotten to this level             
 { 
  digitalWrite(led4, HIGH);// switch ON the Tap
 }
 
if ( distance <= 11)// when water has gotten to this level or is less than this level 
{ 
  digitalWrite (led2, HIGH);//switch ON the led2
}
     else// otherwise
       {
  digitalWrite(led2, LOW);//led2 goes OFF and stays OFF
       }
  
 if( distance <= 5 )// when water has gotten to this level or is less than this level
{
  digitalWrite (led3, HIGH);//switch ON the led3
}
      else//otherwise
       {
  digitalWrite (led3, LOW);//led3 goes OFF and stays ON
       }
    
if (distance <= 5)// when the level of water has gotten to this level    
      {
   digitalWrite(led4,LOW);//led4 goes OF and stays OF
      }
 }

