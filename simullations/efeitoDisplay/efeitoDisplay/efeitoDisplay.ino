int i;

void setup() {
  for(i = 3; i <= 10; i++){
    pinMode(i,OUTPUT);
  }
}

void loop() {
  acende0();
  acende1();
  acende2();
}

void acende0(){
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(5,HIGH);
  delay(500);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
  digitalWrite(5,LOW);
}

void acende1(){
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  delay(500);
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
}

void acende2(){
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
  delay(500);
  digitalWrite(10,LOW);
  digitalWrite(9,LOW);
  digitalWrite(4,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
}
