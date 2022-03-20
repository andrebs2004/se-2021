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
  acende1();
  acende2();
  acende3();
}

void acende1(){
  digitalWrite(1,HIGH);
  digitalWrite(12,HIGH);
  delay(5000);
  for(i = 1; i <= 4; i++){
    digitalWrite(12,HIGH);
    delay(250);
    digitalWrite(12,LOW);
    delay(250); 
  }
  digitalWrite(1,LOW);
}

void acende2(){
  digitalWrite(3,HIGH);
  digitalWrite(11,HIGH);
  delay(5000);
  digitalWrite(3,LOW);
  digitalWrite(11,LOW);
}

void acende3(){
  digitalWrite(2,HIGH);
  digitalWrite(11,HIGH);
  delay(1000);
  digitalWrite(2,LOW);
  digitalWrite(11,LOW);
}
