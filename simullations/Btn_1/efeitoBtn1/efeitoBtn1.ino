//DEFINE AS ENTRADAS - BOTÕES
#define PUSH_BUTTON 2  //BOTÃO APERTA E SOLTA
#define ONOFF_BUTTON 5   //BOTÃO INTERRUPTOR
//DEFINE AS SAÍDAS - LEDS
#define LED1 8   //LED 1
#define LED2 12 //LED 2

 

void setup() 
{
  //definir pinos como ENTRADA, 
  //Obs.: INPUT_PULLUP --> HABILITA O RESISTOR DE "PUCHAR" PARA CIMA
  pinMode(PUSH_BUTTON,INPUT_PULLUP);
  pinMode(ONOFF_BUTTON,INPUT_PULLUP);
  //definir pinos como SAÍDA
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
}

 

void loop() 
{
  if(digitalRead(PUSH_BUTTON) == LOW)
  {
    digitalWrite(LED1, HIGH);
  }
  else
  {
    digitalWrite(LED1, LOW);
  }

 

  if(digitalRead(ONOFF_BUTTON) == LOW)
  {
    digitalWrite(LED2, HIGH);
  }
  else
  {
    digitalWrite(LED2, LOW);
  }
}