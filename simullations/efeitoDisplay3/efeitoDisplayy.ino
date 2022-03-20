int i;

void setup() {
  for(i = 3; i <= 10; i++){
    pinMode(i,OUTPUT);
  }
}

void loop() {
  acende0();
  delay(750);
  limpaLeds();
  acende1();
  delay(750);
  limpaLeds();
  acende2();
  delay(750);
  limpaLeds();
  acende3();
  delay(750);
  limpaLeds();
  acende4();
  delay(750);
  limpaLeds();
  acende5();
  delay(750);
  limpaLeds();
  acende6();
  delay(750);
  limpaLeds();
  acende7();
  delay(750);
  limpaLeds();
  acende8();
  delay(750);
  limpaLeds();
  acende9();
  delay(750);
  limpaLeds();
  acendeA();
  delay(750);
  limpaLeds();
  acendeB();
  delay(750);
  limpaLeds();
  acendeC();
  delay(750);
  limpaLeds();
  acendeD();
  delay(750);
  limpaLeds();
  acendeE();
  delay(750);
  limpaLeds();
  acendeF();
  delay(750);
  limpaLeds();
}

void limpaLeds(){
  for(i = 3; i <= 10; i++){
    digitalWrite(i,LOW);  
  }
}

void acende0(){
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
}

void acende1(){
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
}

void acende2(){
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
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

void acendeA(){
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);  
  digitalWrite(4,HIGH);
}

void acendeB(){
  digitalWrite(4,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);  
}

void acendeC(){
  digitalWrite(10,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
}

void acendeD(){
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(4,HIGH);  
}

void acendeE(){
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);  
  digitalWrite(4,HIGH);
}

void acendeF(){
  digitalWrite(10,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);  
  digitalWrite(4,HIGH);
}
