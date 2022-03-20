int i;

void setup() {
  for(i = 1; i <=10; i++){
    pinMode(i,OUTPUT);
  }
}

void loop() {
  acendeApaga();
}

void acendeApaga(){
  for(i = 1; i <= 10; i++){
    digitalWrite(i,HIGH);
    delay(250);
    digitalWrite(i,LOW);
  }
}