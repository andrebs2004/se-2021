//DEFINE AS ENTRADAS - BOTÕES
#define PUSH_BUTTON1 2  
#define PUSH_BUTTON2 3  
#define PUSH_BUTTON3 4  
#define PUSH_BUTTON4 5
//DEFINE AS SAÍDAS - SOUND
#define MUS1 8   

 

void setup() 
{
  pinMode(PUSH_BUTTON1,INPUT_PULLUP);
  pinMode(PUSH_BUTTON2,INPUT_PULLUP);
  pinMode(PUSH_BUTTON3,INPUT_PULLUP);
  pinMode(PUSH_BUTTON4,INPUT_PULLUP);
 
  pinMode(MUS1,OUTPUT);
}

 

void loop() 
{
  if(digitalRead(PUSH_BUTTON1) == LOW)
  {
    tone(MUS1,261);
  }
  else
  {
    delay(100);
  noTone(MUS1);
  }

  if(digitalRead(PUSH_BUTTON2) == LOW)
  {
    tone(MUS1,293);
  }
  else
  {
    delay(100);
  noTone(MUS1);
  }

  if(digitalRead(PUSH_BUTTON3) == LOW)
  {
    tone(MUS1,329);
  }
  else
  {
    delay(100);
  noTone(MUS1);
  }

  if(digitalRead(PUSH_BUTTON4) == LOW)
  {
    tone(MUS1,349);
  }
  else
  {
    delay(100);
  noTone(MUS1);
  }
}