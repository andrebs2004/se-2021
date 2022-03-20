int contar = 0;

void setup() {
  Serial.begin(9600);

}

void loop() {
  Serial.println(contar);
  contar++;
  delay(1000);
}