void setup()
{
	Serial.begin(9600);
	pinMode(3,OUTPUT);
}

void loop()
{
	String val = Serial.readString();
	if(val == "acender"){
		digitalWrite(3,HIGH);
	}
	if(val == "apagar"){
		digitalWrite(3,LOW);
	}
}