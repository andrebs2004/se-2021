int value = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  value++;
  Serial.println(value);
  Serial.println(value, DEC);
  Serial.println(value, HEX);
  Serial.println(value, OCT);
  Serial.println(value, BIN);
  delay(1000);
}