int i;

void setup() {
  for(i = 1; i <=10; i++){
    pinMode(i,OUTPUT);
  }
}

void loop() {
  LD_leds();
}

void LD_leds()
{
  for(i = 1; i <= 10; i++){
    digitalWrite(i,HIGH);
    delay(500);
    digitalWrite(i,LOW);  
  }
}