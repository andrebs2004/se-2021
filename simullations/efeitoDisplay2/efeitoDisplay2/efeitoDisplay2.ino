int i;

void setup() {
  for(i = 3; i <= 10; i++){
    pinMode(i,OUTPUT);
  }
}

void loop() {
  acende3();
  delay(750);
  limpaLeds();
  delay(250);
  acende4();
  delay(750);
  limpaLeds();
  delay(250);
  acende5();
  delay(750);
  limpaLeds();
  delay(250);
  acende6();
  delay(750);
  limpaLeds();
  delay(250);
  acende7();
  delay(750);
  limpaLeds();
  delay(250);
  acende8();
  delay(750);
  limpaLeds();
  delay(250);
  acende9();
  delay(750);
  limpaLeds();
  delay(250);
}

void limpaLeds(){
  for(i = 3; i <= 10; i++){
    digitalWrite(i,LOW);  
  }
}

void acende3(){
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(4,HIGH);  
}

void acende4(){
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
}

void acende5(){
  digitalWrite(10,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);  
}

void acende6(){
  digitalWrite(10,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);  
  digitalWrite(4,HIGH);
}

void acende7(){
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH); 
}

void acende8(){
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH); 
}

void acende9(){
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);  
}
