//int led1 = 3; - Variável (leitura e escrita)

#define led1 3 //Constante (somente leitura)

void setup() {
  // configurações do Arduino
  pinMode(led1,OUTPUT); // Define a porta 3 como saída
}

void loop() {
  // rotinas de programação
  digitalWrite(led1,HIGH); // 

}
