int i, n = 6;

void setup() {
  for(i = 1; i <= 10; i++){
    pinMode(i,OUTPUT);
  }
}

void loop() {
  acendeApaga();
}

void acendeApaga(){
  for(i = 5; i >= 1; i--){
    digitalWrite(i,HIGH);
	digitalWrite(n,HIGH);
    delay(500);
    digitalWrite(i,LOW);
	digitalWrite(n,LOW);
	n++;
	if(n > 10){
		n = 6;
	}
  }  
}