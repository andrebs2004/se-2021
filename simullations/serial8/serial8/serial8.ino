String msg[] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

void setup() {
  Serial.begin(9600);
}

void loop() {
  String val = Serial.readString();
  if(val == "sortear_mes")
  {
    int num = random(12);
    Serial.println(msg[num]);
  }
}
