int i;

void setup() {
  for(i = 1; i <=10; i++){
    pinMode(i,OUTPUT);
  }
}

void loop() {
  liga_leds();
  apagaLeds();
}

void liga_leds()
{
  for(i = 1; i <= 10; i++){
    if(i%2 == 0){
      digitalWrite(i,HIGH);
      delay(500);
    }
  }
}

void apagaLeds()
{
  for(i = 1; i <= 10; i++){
    if(i%2 == 0){
      digitalWrite(i,LOW);
      delay(500);
    }
  }
}
