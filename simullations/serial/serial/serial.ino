void setup() {
  Serial.begin(9600);
}

void loop() {
  String val = "Arduino ";
  int val2 = 20;
  Serial.println(val + val2);
  delay(1000);
}
