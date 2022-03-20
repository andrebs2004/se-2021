int i;

void setup() {
  for(i = 1; i <=10; i++){
    pinMode(i,OUTPUT);
  }
}

void loop() {
  LD_leds();
  LD_leds2();
}

void LD_leds()
{
  for(i = 1; i <= 10; i++){
    digitalWrite(i,HIGH);
    delay(500);
    digitalWrite(i,LOW);  
  }
}

void LD_leds2()
{
   for(i = 10; i >= 1; i--){
    digitalWrite(i,HIGH);
    delay(500);
    digitalWrite(i,LOW);  
  }
}
