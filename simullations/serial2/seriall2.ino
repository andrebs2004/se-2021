#define VERMELHO_s 3 //VERMELHO SEMÁFORO
#define AMARELO_s 4 //AMARELO SEMÁFORO
#define VERDE_s 5 //VERDE SEMÁFORO
#define VERMELHO_p 11 //VERMELHO PEDESTRES
#define VERDE_p 12 //VERDE PEDESTRES

void setup()
{
  // Define pinos como saída do semáforo
  pinMode (VERMELHO_s, OUTPUT);
  pinMode(AMARELO_s, OUTPUT);
  pinMode(VERDE_s, OUTPUT);
  // Define pinos como saída da sinaleira pedestres
  pinMode(VERMELHO_p, OUTPUT);
  pinMode(VERDE_p, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  ciclo_vermelho ();
  ciclo_verde (); 
  ciclo_amarelo ();
}

void ciclo_vermelho ()
{
  Serial.println("Entrou no ciclo vermelho"); 
  digitalWrite(VERDE_p, HIGH);  
  digitalWrite(VERMELHO_s, HIGH);  
  digitalWrite (VERMELHO_p, LOW);  
  delay(5000);
  digitalWrite(VERMELHO_s, LOW);
  digitalWrite(VERMELHO_p, HIGH);
}

void ciclo_verde ()
{
  Serial.println("Entrou no ciclo verde");
  digitalWrite(VERDE_p, LOW);  
  digitalWrite(VERDE_s, HIGH);  
  delay(5000);
  digitalWrite(VERDE_s,LOW);
}

void ciclo_amarelo ()
{
  Serial.println("Entrou no ciclo amarelo");  
  digitalWrite(AMARELO_s, HIGH);  
  delay(1000);  
  digitalWrite(AMARELO_s, LOW);

}