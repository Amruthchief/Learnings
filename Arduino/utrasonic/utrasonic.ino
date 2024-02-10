// Include the Servo library 
#include <Servo.h> 

//Ultra-sonic Sensor pin declaration
int echoPin = 10;
int trigPin = 9;

long duration;
int distance;


// Declare the Servo pin 
int servoPin = 3; 
Servo Servo1; 

void setup() {
  //Ultra-sonic Sensor pin initialization
  pinMode(echoPin,INPUT);
  pinMode(trigPin,OUTPUT);
  Serial.begin(9600); // Starts the serial communication
  Servo1.attach(servoPin);

}

void loop() {
//Ultra-sonic Sensor 

// put your main code here, to run repeatedly:
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor
//Serial.print("Distance: ");
Serial.println(distance);



// Make servo go to 0 degrees 
delay(1000);
  
   if(distance <20 && distance >=0 )
    { Servo1.write(90); 
      exit;
    }    
  else
    {
      Servo1.write(180); 
      exit;
    } 
 /*  // Make servo go to 90 degrees 
   Servo1.write(90); 
   delay(1000); 
   // Make servo go to 180 degrees 
   Servo1.write(180); 
   delay(1000); 
*/


}
