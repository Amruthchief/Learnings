// Include the Servo library 
#include <Servo.h> 

//Ultra-sonic Sensor pin declaration
int echoPin = 10;
int trigPin = 9;

long duration;
int distance;
int count;
int sum_vals;

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
while(1){
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
if(distance>100)
    continue;
sum_vals += distance;

if (count >= 5){
  count = 0;
  sum_vals /= 5;
  Serial.println(sum_vals);
  if(sum_vals <20 && sum_vals >=0 )
    { Servo1.write(90); 
//      exit;
    }    
  else
    {
      Servo1.write(180); 
//      exit;
    }
    } 
  sum_vals = 0;

count++;


// Make servo go to 0 degrees 
delay(100);
  
   
 /*  // Make servo go to 90 degrees 
   Servo1.write(90); 
   delay(1000); 
   // Make servo go to 180 degrees 
   Servo1.write(180); 
   delay(1000); 
*/
}

}
