int i;

void setup() {
  for(i = 1; i <=10; i++){
    pinMode(i,OUTPUT);
  }
}

void loop() {
  liga_par();
  apagaLeds();
  liga_impar();
  apagaLeds();
}

void liga_par()
{
  for(i = 1; i <= 10; i++){
    if(i%2 == 0){
      digitalWrite(i,HIGH);
    }
  }
}

void apagaLeds()
{
  for(i = 1; i <= 10; i++){
      digitalWrite(i,LOW);
  }
  delay(1000);
}

void liga_impar()
{
  for(i = 10; i >= 1; i--){
    if(i%2 != 0){
      digitalWrite(i,HIGH);
    }
  }  
}