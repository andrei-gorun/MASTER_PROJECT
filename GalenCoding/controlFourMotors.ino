String command; 

int speed = 100;

int FRSpeed = 3;
int FRDirection1 = 4;
int FRDirection2 = 5;

int FLSpeed = 11;
int FLDirection1 = 12;
int FLDirection2 = 13;

int BLSpeed = 10;
int BLDirection1 = 9;
int BLDirection2 = 8;

int BRSpeed = 6;
int BRDirection1 = 2;
int BRDirection2 = 7;

void setup() {
Serial.begin(9600);

pinMode(FRSpeed, OUTPUT);           //Front Right
pinMode(FRDirection1, OUTPUT);
pinMode(FRDirection2, OUTPUT);

pinMode(FLSpeed, OUTPUT);           //Front Left 
pinMode(FLDirection1, OUTPUT);
pinMode(FLDirection2, OUTPUT);

analogWrite(BLSpeed, OUTPUT);       //Back Left
digitalWrite(BLDirection1, OUTPUT);
digitalWrite(BLDirection2, OUTPUT);

analogWrite(BRSpeed, OUTPUT);       //Back Right
digitalWrite(BRDirection1, OUTPUT);
digitalWrite(BRDirection2, OUTPUT);

}

void loop() {

  moveForward(speed);
  delay(1000);
  stop(speed);
  delay(1000);
  moveRight(speed * 1.5);
  delay(1000);
  stop(1000);
  delay(1000);
  moveBackward(speed);
  delay(1000);
  stop(speed);
  delay(1000);
  moveLeft(speed * 1.5);
  delay(1000);
  stop(speed);
  delay(1000);

  // moveAntiClockwise(speed);
  // delay(1000);
  // stop(speed);
  // delay(1000);
  // moveClockwise(speed);
  // delay(1000);
  // stop(1000);
  // delay(1000);



  // if(Serial.available())
  // {
  //   command = Serial.readStringUntil('\n');
  //   command.trim();

  //   if(command.equals("forward"))
  //   {
  //     moveForward(speed);
  //   }
  //   else if(command.equals("backward"))
  //   {
  //     moveBackward(speed);
  //   }
  //   else if(command.equals("left"))
  //   {
  //     moveLeft(speed);
  //   }
  //   else if(command.equals("right"))
  //   {
  //     moveRight(speed);
  //   }
  //   else if(command.equals("stop"))
  //   {
  //     stop(speed);
  //   }
  //   else if (command.equals("anticlockwise"))
  //   {
  //     moveAntiClockwise(speed);
  //   }
  //   else if(command.equals("clockwise"))
  //   {
  //     moveClockwise(speed);
  //   }
  //   else if (command.equals("forwardLeft"))
  //   {
  //     moveForwardLeft(speed);
  //   }
  //   else if (command.equals("forwardRight"))
  //   {
  //     moveForwardRight(speed);
  //   }
  //   else if (command.equals("backwardLeft"))
  //   {
  //     moveBackwardLeft(speed);
  //   }
  //   else if (command.equals("backwardRight"))
  //   {
  //     moveBackwardRight(speed);
  //   }
  // }
}

void stop(int x){

  analogWrite(FRSpeed, x);
  analogWrite(FLSpeed, x);   
  analogWrite(BLSpeed, x);
  analogWrite(BRSpeed, x);        

  digitalWrite(FRDirection1, LOW);    //Front Right
  digitalWrite(FRDirection2, LOW);

        
  digitalWrite(FLDirection1, LOW);   //Front Left
  digitalWrite(FLDirection2, LOW);

  digitalWrite(BLDirection1, LOW);   //Back Left
  digitalWrite(BLDirection2, LOW);

  digitalWrite(BRDirection1, LOW);    //Back Right
  digitalWrite(BRDirection2, LOW);

}

void moveForward(int x){

  analogWrite(FRSpeed, x);
  analogWrite(FLSpeed, x);   
  analogWrite(BLSpeed, x);
  analogWrite(BRSpeed, x);        

  digitalWrite(FRDirection1, LOW);    //Front Right
  digitalWrite(FRDirection2, HIGH);

        
  digitalWrite(FLDirection1, HIGH);   //Front Left
  digitalWrite(FLDirection2, LOW);

  digitalWrite(BLDirection1, HIGH);   //Back Left
  digitalWrite(BLDirection2, LOW);

  digitalWrite(BRDirection1, LOW);    //Back Right
  digitalWrite(BRDirection2, HIGH);

}

void moveBackward(int x){

  analogWrite(FRSpeed, x);
  analogWrite(FLSpeed, x);   
  analogWrite(BLSpeed, x);
  analogWrite(BRSpeed, x);        

  digitalWrite(FRDirection1, HIGH);    //Front Right
  digitalWrite(FRDirection2, LOW);

        
  digitalWrite(FLDirection1, LOW);   //Front Left
  digitalWrite(FLDirection2, HIGH);

  digitalWrite(BLDirection1, LOW);   //Back Left
  digitalWrite(BLDirection2, HIGH);

  digitalWrite(BRDirection1, HIGH);    //Back Right
  digitalWrite(BRDirection2, LOW);

}

void moveRight(int x){

  analogWrite(FRSpeed, x);
  analogWrite(FLSpeed, x);   
  analogWrite(BLSpeed, x);
  analogWrite(BRSpeed, x);        

  digitalWrite(FRDirection1, LOW);    //Front Right
  digitalWrite(FRDirection2, HIGH);
        
  digitalWrite(FLDirection1, LOW);   //Front Left
  digitalWrite(FLDirection2, HIGH);

  digitalWrite(BLDirection1, HIGH);   //Back Left
  digitalWrite(BLDirection2, LOW);

  digitalWrite(BRDirection1, HIGH);    //Back Right
  digitalWrite(BRDirection2, LOW);

}

void moveLeft(int x){

  analogWrite(FRSpeed, x);
  analogWrite(FLSpeed, x);   
  analogWrite(BLSpeed, x);
  analogWrite(BRSpeed, x);        

  digitalWrite(FRDirection1, HIGH);    //Front Right
  digitalWrite(FRDirection2, LOW);
        
  digitalWrite(FLDirection1, HIGH);   //Front Left
  digitalWrite(FLDirection2, LOW);

  digitalWrite(BLDirection1, LOW);   //Back Left
  digitalWrite(BLDirection2, HIGH);

  digitalWrite(BRDirection1, LOW);    //Back Right
  digitalWrite(BRDirection2, HIGH);

}

void moveClockwise(int x){

  analogWrite(FRSpeed, x);
  analogWrite(FLSpeed, x);   
  analogWrite(BLSpeed, x);
  analogWrite(BRSpeed, x);        

  digitalWrite(FRDirection1, HIGH);    //Front Right
  digitalWrite(FRDirection2, LOW);
        
  digitalWrite(FLDirection1, HIGH);   //Front Left
  digitalWrite(FLDirection2, LOW);

  digitalWrite(BLDirection1, HIGH);   //Back Left
  digitalWrite(BLDirection2, LOW);

  digitalWrite(BRDirection1, HIGH);    //Back Right
  digitalWrite(BRDirection2, LOW);

}

void moveAntiClockwise(int x){

  analogWrite(FRSpeed, x);
  analogWrite(FLSpeed, x);   
  analogWrite(BLSpeed, x);
  analogWrite(BRSpeed, x);        

  digitalWrite(FRDirection1, LOW);    //Front Right
  digitalWrite(FRDirection2, HIGH);
        
  digitalWrite(FLDirection1, LOW);   //Front Left
  digitalWrite(FLDirection2, HIGH);

  digitalWrite(BLDirection1, LOW);   //Back Left
  digitalWrite(BLDirection2, HIGH);

  digitalWrite(BRDirection1, LOW);    //Back Right
  digitalWrite(BRDirection2, HIGH);

}

void moveForwardLeft(int x){

  analogWrite(FRSpeed, x);
  analogWrite(FLSpeed, x);   
  analogWrite(BLSpeed, x);
  analogWrite(BRSpeed, x);        

  digitalWrite(FRDirection1, LOW);    //Front Right
  digitalWrite(FRDirection2, LOW);
        
  digitalWrite(FLDirection1, HIGH);   //Front Left
  digitalWrite(FLDirection2, LOW);

  digitalWrite(BLDirection1, LOW);   //Back Left
  digitalWrite(BLDirection2, LOW);

  digitalWrite(BRDirection1, LOW);    //Back Right
  digitalWrite(BRDirection2, HIGH);

}

void moveForwardRight(int x){

  analogWrite(FRSpeed, x);
  analogWrite(FLSpeed, x);   
  analogWrite(BLSpeed, x);
  analogWrite(BRSpeed, x);        

  digitalWrite(FRDirection1, LOW);    //Front Right
  digitalWrite(FRDirection2, HIGH);
        
  digitalWrite(FLDirection1, LOW);   //Front Left
  digitalWrite(FLDirection2, LOW);

  digitalWrite(BLDirection1, HIGH);   //Back Left
  digitalWrite(BLDirection2, LOW);

  digitalWrite(BRDirection1, LOW);    //Back Right
  digitalWrite(BRDirection2, LOW);

}

void moveBackwardRight(int x){

  analogWrite(FRSpeed, x);
  analogWrite(FLSpeed, x);   
  analogWrite(BLSpeed, x);
  analogWrite(BRSpeed, x);        

  digitalWrite(FRDirection1, LOW);    //Front Right
  digitalWrite(FRDirection2, LOW);
        
  digitalWrite(FLDirection1, LOW);   //Front Left
  digitalWrite(FLDirection2, HIGH);

  digitalWrite(BLDirection1, LOW);   //Back Left
  digitalWrite(BLDirection2, LOW);

  digitalWrite(BRDirection1, HIGH);    //Back Right
  digitalWrite(BRDirection2, LOW);

}

void moveBackwardLeft(int x){

  analogWrite(FRSpeed, x);
  analogWrite(FLSpeed, x);   
  analogWrite(BLSpeed, x);
  analogWrite(BRSpeed, x);        

  digitalWrite(FRDirection1, HIGH);    //Front Right
  digitalWrite(FRDirection2, LOW);
        
  digitalWrite(FLDirection1, LOW);   //Front Left
  digitalWrite(FLDirection2, LOW);

  digitalWrite(BLDirection1, LOW);   //Back Left
  digitalWrite(BLDirection2, HIGH);

  digitalWrite(BRDirection1, LOW);    //Back Right
  digitalWrite(BRDirection2, LOW);

}