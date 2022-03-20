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
  delay(250);
  acende1();
  delay(750);
  limpaLeds();
  delay(250);
  acende2();
  delay(750);
  limpaLeds();
  delay(250);
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

void limpaLeds(){
	for(i = 3; i <= 10; i++){
		digitalWrite(i,LOW);
	} 
}