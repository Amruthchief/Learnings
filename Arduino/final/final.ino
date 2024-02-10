 const int motorA1  = 5;  // Pin  2 of L293
  const int motorA2  = 6;  // Pin  7 of L293
  const int motorB1  = 10; // Pin 10 of L293
  const int motorB2  = 9;  // Pin 14 of L293
 const int BTState = 2;
 const int enable1 = 11;
 const int enable2 = 12;
 int i=0;
  int j=0;
  int state;
  int vSpeed=200; 
void setup() {
   pinMode(motorA1, OUTPUT);
    pinMode(motorA2, OUTPUT);
    pinMode(motorB1, OUTPUT);
    pinMode(motorB2, OUTPUT);
    pinMode(enable1, OUTPUT);
     pinMode(enable2, OUTPUT);
      pinMode(BTState, INPUT);
      digitalWrite(enable1 , HIGH);
    digitalWrite(enable2 , HIGH);    
    // Initialize serial communication at 9600 bits per second:
    Serial.begin(9600);
}
void loop() {
  
   if(digitalRead(BTState)==LOW) { state='S'; }
  //Save income data to variable 'state'
    if(Serial.available() > 0){     
      state = Serial.read();   
    }
    //Change speed if state is equal from 0 to 4. Values must be from 0 to 255 (PWM)
    if (state == '0'){
      vSpeed=0;}
    else if (state == '1'){
      vSpeed=75;}
    else if (state == '2'){
      vSpeed=95;}
    else if (state == '3'){
      vSpeed=115;}
    else if (state == '4'){
      vSpeed=135;}
    else if (state == '5'){
      vSpeed=155;}
       else if (state == '6'){
      vSpeed=175;}
       else if (state == '7'){
      vSpeed=195;}
       else if (state == '8'){
      vSpeed=215;}
       else if (state == '9'){
      vSpeed=235;}
       else if (state == 'q'){
      vSpeed=255;}
      
     
  /***********************Forward****************************/
  //If state is equal with letter 'F', car will go forward!
    if (state == 'L') {
        analogWrite(motorA1, vSpeed); analogWrite(motorA2, 0);
        analogWrite(motorB1, vSpeed);      analogWrite(motorB2, 0); 
    }
     /***********************Backward****************************/
    //If state is equal with letter 'B', car will go backward
    else if (state == 'R') {
      analogWrite(motorA1, 0);   analogWrite(motorA2, vSpeed); 
        analogWrite(motorB1, 0);   analogWrite(motorB2,vSpeed); 
    }
    /***************************Left*****************************/
  //If state is equal with letter 'L', wheels will turn left
    else if (state == 'F') {
      analogWrite(motorA1 , 0);   analogWrite(motorA2, vSpeed); 
        analogWrite(motorB1, vSpeed); analogWrite(motorB2, 0); 
    }
  /***************************Right*****************************/
  //If state is equal with letter 'R', wheels will turn right
    else if (state == 'B') {
      analogWrite(motorA1, vSpeed);   analogWrite(motorA2, 0); 
        analogWrite(motorB1, 0);   analogWrite(motorB2,vSpeed);     
    }
    /************************Stop*****************************/
  //If state is equal with letter 'S', stop the car
    else if (state == 'S'){
        analogWrite(motorA1, 0);  analogWrite(motorA2, 0); 
        analogWrite(motorB1, 0);  analogWrite(motorB2, 0);
    }
  /***************************Forword Right*****************************/
  //If state is equal with letter 'I', wheels will turn right
    else if (state == 'I') {
      analogWrite(motorA1, 0);   analogWrite(motorA2, 0); 
        analogWrite(motorB1, 0);   analogWrite(motorB2,vSpeed);
    }
  /***************************Forword Left*****************************/
  //If state is equal with letter 'G', wheels will turn left
    else if (state == 'G') {
      analogWrite(motorA1 , 0);   analogWrite(motorA2, vSpeed); 
        analogWrite(motorB1, 0); analogWrite(motorB2, 0); 
    }
  /***************************Back Right*****************************/
  //If state is equal with letter 'J', wheels will turn right
    else if (state == 'J') {
      analogWrite(motorA1, 0);   analogWrite(motorA2, 0); 
        analogWrite(motorB1, vSpeed);   analogWrite(motorB2,0);
    }
   /***************************Forword Left*****************************/
  //If state is equal with letter 'H', wheels will turn left
    else if (state == 'H') {
      analogWrite(motorA1 , vSpeed);   analogWrite(motorA2, 0); 
        analogWrite(motorB1, 0); analogWrite(motorB2, 0); 
    }
    
 }
