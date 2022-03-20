String msg[] = {"Teste 1", "Teste 2", "Teste 3"};

void setup() {
  Serial.begin(9600);
}

void loop() {
  String val = Serial.readString();
  if(val == "sortear")
  {
    // Sorteio de Números de 0 a 2
    int num = random(3);
    Serial.println(msg[num]);
  }
}