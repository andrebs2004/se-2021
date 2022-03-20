#define PUSH_BUTTON1 3
String P1, P2;

void setup() {
  pinMode(PUSH_BUTTON1,INPUT_PULLUP);
  Serial.begin(9600);
}

void loop(){
	String leitura = Serial.readString();
	if(leitura == "jogar"){
		int num = random(3);
		if(num == 0){
			P1 = "pedra";
			P2 = "papel";
		}
		if(num == 1){
			P1 = "papel";
			P2 = "tesoura";
		}
		if(num == 2){
			P1 = "tesoura";
			P2 = "pedra";
		}
	}
	if(digitalRead(PUSH_BUTTON1) == LOW){
		if(P1 == "pedra" && P2 == "tesoura"){
			Serial.println("O Jogador 1 venceu");
		}
		if(P1 == "tesoura" && P2 == "pedra"){
			Serial.println("O Jogador 2 venceu");
		}
		if(P1 == "papel" && P2 == "pedra"){
			Serial.println("O Jogador 1 venceu");
		}
		if(P1 == "pedra" && P2 == "papel"){
			Serial.println("O Jogador 2 venceu");
		}
		if(P1 == "tesoura" && P2 == "papel"){
			Serial.println("O Jogador 1 venceu");
		}
		if(P1 == "papel" && P2 == "tesoura"){
			Serial.println("O Jogador 2 venceu");
		}
	}
}

