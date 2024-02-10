const int motorA1  = 5;  // Pin  2 of L293
  const int motorA2  = 6;  // Pin  7 of L293
  const int motorB1  = 10; // Pin 10 of L293
  const int motorB2  = 9;  // Pin 14 of L293
 const int BTState = 2;
// char state = ' ';
 int i=0;
  int j=0;
 int state;
  int vSpeed=200;
  
void setup() {
  // put your setup code here, to run once:
    pinMode(motorA1, OUTPUT);
    pinMode(motorA2, OUTPUT);
    pinMode(motorB1, OUTPUT);
    pinMode(motorB2, OUTPUT);
      pinMode(BTState, INPUT);    
   // Initialize serial communication at 9600 bits per second:
    Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
  
  if(digitalRead(BTState)==LOW) { state='S'; }

 //Save income data to variable 'state'
    if(Serial.available() > 0)
    {    
      state = Serial.read();  
    }
   switch(state)
   {
    case 0:
    vSpeed  = 75;
    break;
    case 1:
    vSpeed = 95;
    break;
    case 2:
    vSpeed = 115;
    break;
    case 3:
    vSpeed = 135;
    break;
    case 4:
    vSpeed = 155;
    break;
    case 5:
    vSpeed = 175;
    break;
    case 6:
    vSpeed = 195;
    break;
    case 7:
    vSpeed = 215;
    break;
    case 8:
    vSpeed = 235;
    break;
    case 9:
    vSpeed = 255;
    break;
   }

  switch(state)
   {
     /***********************Forward****************************/
      //If state is equal with letter 'F', car will go forward!
    case 'F':
    {
      analogWrite(motorA1, vSpeed); analogWrite(motorA2, 0);
      analogWrite(motorB1, vSpeed); analogWrite(motorB2, 0);
      break;
    }
    /***********************Backward****************************/
    //If state is equal with letter 'B', car will go backward
    case 'B':
    {
       analogWrite(motorA1, 0);   analogWrite(motorA2, vSpeed);
       analogWrite(motorB1, 0);   analogWrite(motorB2,vSpeed);
       break;
    }
      /***************************Left*****************************/
      //If state is equal with letter 'L', wheels will turn left
    case 'L':
    {
      analogWrite(motorA1 , 0);     analogWrite(motorA2, vSpeed);
      analogWrite(motorB1, vSpeed); analogWrite(motorB2, 0);
      break;
    }
     /***************************Right*****************************/
      //If state is equal with letter 'R', wheels will turn right
    case 'R':
    {
      analogWrite(motorA1, vSpeed);   analogWrite(motorA2, 0);
      analogWrite(motorB1, 0);        analogWrite(motorB2,vSpeed);              
     break;
    }
   
  
    /************************Stop*****************************/
  //If state is equal with letter 'S', stop the car
     case 'S':
     {
        analogWrite(motorA1, 0);  analogWrite(motorA2, 0); 
        analogWrite(motorB1, 0);  analogWrite(motorB2, 0);
    }
  /***************************Forword Right*****************************/
  //If state is equal with letter 'I', wheels will turn right
   case 'I': {
      analogWrite(motorA1, 0);   analogWrite(motorA2, 0); 
        analogWrite(motorB1, 0);   analogWrite(motorB2,vSpeed);
    }

  /***************************Forword Left*****************************/
  //If state is equal with letter 'G', wheels will turn left
   case 'G': 
   {
      analogWrite(motorA1 , 0);   analogWrite(motorA2, vSpeed); 
        analogWrite(motorB1, 0); analogWrite(motorB2, 0); 
    }

  /***************************Back Right*****************************/
  //If state is equal with letter 'J', wheels will turn right
    case 'J':
    {
      analogWrite(motorA1, 0);   analogWrite(motorA2, 0); 
        analogWrite(motorB1, vSpeed);   analogWrite(motorB2,0);
    }

   /***************************Forword Left*****************************/
  //If state is equal with letter 'H', wheels will turn left
    case 'H': 
    {
      analogWrite(motorA1 , vSpeed);   analogWrite(motorA2, 0); 
        analogWrite(motorB1, 0); analogWrite(motorB2, 0); 
   }

   }
}
