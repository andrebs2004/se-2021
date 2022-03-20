int i;

void setup() {
  for(i = 1; i <=10; i++){
    pinMode(i,OUTPUT);
  }
}

void loop() {
  for(i = 1; i <= 10; i++){
    digitalWrite(i,HIGH);
    delay(1000);  
  }
  for(i = 1; i <= 10; i++){
    digitalWrite(i,LOW);
  }
  delay(1000);
}