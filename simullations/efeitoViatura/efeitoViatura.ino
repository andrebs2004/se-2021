int i;

void setup() {
  for(i = 1; i <=10; i++){
    pinMode(i,OUTPUT);
  }
}

void loop() {
  conjunto_um();
  conjunto_dois();
}

void conjunto_um()
{
  for(int cont = 0; cont <= 3; cont++){
    liga_um();
    delay(100);
    apaga_leds();
    delay(100);
  }
}

void conjunto_dois()
{
  for(int cont1 = 0; cont1 <= 3; cont1++){
    liga_dois();
    delay(100);
    apaga_leds();
    delay(100);
  }
}

void liga_um()
{
  for(int contador = 0; contador <= 2; contador++){
    for(i = 1; i <= 5; i++){
       digitalWrite(i,HIGH);  
    }
  }
}

void apaga_leds()
{
  for(int contador = 0; contador <= 2; contador++){
    for(i = 1; i <= 10; i++){
       digitalWrite(i,LOW); 
    }
  }
}

void liga_dois()
{
  for(int contador = 0; contador <= 2; contador++){
    for(i = 6; i <= 10; i++){
       digitalWrite(i,HIGH);
    }
  }
}