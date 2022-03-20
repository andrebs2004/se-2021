#define PUSH_BUTTON1 5
String P1, P2;

void setup() {
  pinMode(PUSH_BUTTON1,INPUT_PULLUP);
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop(){
	defineJogador();
	jogar();
}

void piscaLed(){
	for(int i = 0; i <= 5; i++){
		digitalWrite(6, HIGH);
		delay(500);
		digitalWrite(6, LOW);
		delay(500);
	}
}

void defineJogador(){
	P1 = Serial.readString();
	if(P1 == "par"){
		P2 = "impar";
	}
	if(P1 == "impar"){
		P2 = "par";
	}
}

void jogar(){
	if(digitalRead(PUSH_BUTTON1) == LOW){
		int num = random(2);
		if(num == 0){
			if(P1 == "par"){
				Serial.println(P1);
				Serial.println("O jogador nº1 ganhou!!!");
				piscaLed();
				P1 = "";
				P2 = "";
			}
			if(P2 == "par"){
				Serial.println(P2);
				Serial.println("O jogador nº2 ganhou!!!");
				piscaLed();
				P1 = "";
				P2 = "";
			}
		}
		if(num == 1){
			if(P1 == "impar"){
				Serial.println(P1);
				Serial.println("O jogador nº1 ganhou!!!");
				piscaLed();
				P1 = "";
				P2 = "";
			}
			if(P2 == "impar"){
				Serial.println(P2);
				Serial.println("O jogador nº2 ganhou!!!");
				piscaLed();
				P1 = "";
				P2 = "";
			}
		}
	}
}