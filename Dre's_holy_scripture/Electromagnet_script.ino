
//electromagnet on pin A0
void setup() {
  pinMode(A0,OUTPUT);
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {

electromagnet_control();

}



void electromagnet_control(){

if (Serial.available() > 0){

String msg = Serial.readString();

if (msg == "ON"){

digitalWrite(A0,HIGH);
delay(1);

}
else if(msg == "OFF"){

digitalWrite(A0,LOW);
delay(1);

}
}
}