void setup() {
  Serial.begin(9600);
  for(int i = 2; i <= 7; i++){
    pinMode(i, OUTPUT);
  }
}

void loop() {
  String val = Serial.readString();
  if(val == "jogar"){
    int num = random(6);
    if(num == 0){
	  apagaLeds();
      digitalWrite(2, HIGH);
    }
    if(num == 1){
	  apagaLeds();
      for(int i = 2; i <= 3; i++){
	  	digitalWrite(i, HIGH);
	  }	
    }
    if(num == 2){
      apagaLeds();
      for(int i = 2; i <= 4; i++){
	  	digitalWrite(i, HIGH);
	  }	
    }
    if(num == 3){
      apagaLeds();
      for(int i = 2; i <= 5; i++){
	  	digitalWrite(i, HIGH);
	  }	
    }
    if(num == 4){
      apagaLeds();
      for(int i = 2; i <= 6; i++){
	  	digitalWrite(i, HIGH);
	  }	
    }
    if(num == 5){
      apagaLeds();
      for(int i = 2; i <= 7; i++){
	  	digitalWrite(i, HIGH);
	  }	
    }
  }
}

void apagaLeds(){
	for(int i = 2; i <= 7; i++){
    		digitalWrite(i, LOW);
  	}
}

