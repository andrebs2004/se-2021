int i;

void setup() {
  for(i = 1; i <= 3; i++){
    pinMode(i,OUTPUT);
    if(i == 3){
      pinMode(11,OUTPUT);
      pinMode(12,OUTPUT);
    }
  }
}

void loop() {
  acendeTudo();
}

void acendeTudo(){
  digitalWrite(1,HIGH);
  digitalWrite(12,HIGH);
  delay(5000);
  digitalWrite(1,LOW);
  digitalWrite(12,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(11,HIGH);
  delay(5000);
  digitalWrite(3,LOW);
  digitalWrite(11,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(11,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  digitalWrite(11,LOW);
}
