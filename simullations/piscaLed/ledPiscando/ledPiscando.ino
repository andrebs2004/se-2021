#define led1 3

void setup() {
  pinMode(led1,OUTPUT); //configura o pino 3 como saída
}

void loop() {
  digitalWrite(led1,HIGH); //acende o LED
  delay(1000);
  digitalWrite(led1,LOW); //apaga o LED
  delay(1000);
}
