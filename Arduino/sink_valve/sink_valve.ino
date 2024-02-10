//Ultra-sonic Sensor pin declaration
int echo = 8;
int triger = 9;

//Servo initialization
#include <Servo.h>                         //Servo library
Servo myservo; 
/*
//LCD initialization
#include <LiquidCrystal.h>                 //LCD library
LiquidCrystal lcd(2, 3, 4, 5, 6, 7); 

//Push button pin declaration
int displayButton =5 ;
int set = 4;
int top = 3;
int bottom = 2;
 
//IR Sensor pin declaration 
int IR = 12;
*/
//Variable declaration
int top_x, bottom_y;   //Top & Bottom height
float t,b;             //Distance in cm

//Initial initialization fuction run only once
void setup()
{
  //Ultra-sonic Sensor pin initialization
  pinMode(echo,INPUT);
  pinMode(triger,OUTPUT);

/*  //IR Sensor pin initialization
  pinMode(IR,INPUT);
  */
  //Servo pin initialization
  myservo.attach(10);
   
 /* //LCD initialization
     lcd.begin(16, 2);
     lcd.noDisplay();     
   */
 }

//Main function run infinitely
void loop()
{
  //Variable declaration
  long a;
  int val,m;
  int j=0,k=0;
  
  //Detect Set pin if pressed
  if( analogRead(set) > 100 )
 {
   k=1;
   j=1;
    //hold till top & bottom height are set
  while( k == 1 || j==1 )
  {
  //Detect Top pin if pressed  
  if( analogRead(top) > 100 && k == 1)
  {
    a=0;
    
    //measure top height
  digitalWrite(triger,LOW);
  delayMicroseconds(2);
  digitalWrite(triger,HIGH);
  delayMicroseconds(10000);
  digitalWrite(triger,LOW);
 
  while(digitalRead(echo) == 0)
  {};
  
  while(digitalRead(echo) == 1)
  {
    a++;
  }
 //set top height
 top_x=a;
  k=0;
  }  
 //Detect Bottom pin if pressed
   if( analogRead(bottom) > 100 && j == 1)
  {
    a=0;
    //measure bottom height
  digitalWrite(triger,LOW);
  delayMicroseconds(2);
  digitalWrite(triger,HIGH);
  delayMicroseconds(10000);
  digitalWrite(triger,LOW);
 
  while(digitalRead(echo) == 0)
  {};
  
  while(digitalRead(echo) == 1)
  {
    a++;
  }
 //set bottom height
 bottom_y=a;
  j=0;
  }
  }
  //convert height to centimeters
  t=top_x*360/20000;
  b=bottom_y*360/20000;
  
  //Display set Dimensions
  lcd.begin(16, 2);
  lcd.display();
  //Print a message to the LCD.
  lcd.setCursor(0,0); //col,row
  lcd.print("Top ht = ");
  lcd.setCursor(10,0);
  lcd.print(t);
  lcd.setCursor(0,1);
  lcd.print("Bottom ht = ");
  lcd.setCursor(13,1);
  lcd.print(b);
  delay(2000);
  lcd.noDisplay();
  // Turn off the display

 }
  //Detect Display pin if pressed
  else if( analogRead(displayButton) > 100 )
  {
  //Display set dimensions
  lcd.begin(16, 2);
  lcd.display();
  // Print a message to the LCD.
  lcd.setCursor(0,0); //col,row
  lcd.print("Top ht = ");
  lcd.setCursor(10,0);
  lcd.print(t);
  lcd.setCursor(0,1);
  lcd.print("Bottom ht = ");
  lcd.setCursor(13,1);
  lcd.print(b);
  delay(3000);
  lcd.noDisplay();
  // Turn off the display:
}
    
 else
{ //read IR Sensor, so as to detect container when kept 
  if(digitalRead(IR) == 0)
  {
    //when no container kept tap off(servo = 180 degree)
    myservo.write(180);
  }
  else
    {
  //when filling measure height of subtance being filled 
    a=0;
  digitalWrite(triger,LOW);
  delayMicroseconds(2);
  digitalWrite(triger,HIGH);
  delayMicroseconds(10000);
  digitalWrite(triger,LOW);
 
  while(digitalRead(echo) == 0)
  {};
  
  while(digitalRead(echo) == 1)
  {    a++;  }
 
//check whether the height of the substance is within the set limits
  if( a >= bottom_y || a<= top_x )
  { //when the height of the substance is not within the set limits i.e. container fully filled keep tap off(servo = 180 degree)
    myservo.write(180);
    }
else
{ //when the height of the substance is within the set limits- keep tap on(servo = 90 degree)
  myservo.write(90); 
 }

}
}
}
