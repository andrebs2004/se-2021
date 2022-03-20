int i;

void setup() {
  for(i = 1; i <=10; i++){
    pinMode(i,OUTPUT);
  }
}

void loop() {
  liga_leds();
  apaga_leds();
}

void liga_leds()
{
  for(i = 1; i <= 10; i++){
    digitalWrite(i,HIGH);
    delay(1000);  
  }
}

void apaga_leds()
{
  for(i = 10; i > 0; i--){
    digitalWrite(i,LOW);
	delay(1000);
  }  
}