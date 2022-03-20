void setup()
{
	Serial.begin(9600);
}

void loop()
{
	String val = Serial.readString();
	if(val == "teste"){
		Serial.println("OK");
	}
}