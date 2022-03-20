int i;

void setup() {
  for(i = 1; i <= 3; i++){
    pinMode(i,OUTPUT);
  }
}

void loop() {
  acende();
}

void acende(){
  digitalWrite(1,HIGH);
  delay(5000);
  digitalWrite(1,LOW);
  digitalWrite(3,HIGH);
  delay(5000);
  digitalWrite(3,LOW);
  digitalWrite(2,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
}