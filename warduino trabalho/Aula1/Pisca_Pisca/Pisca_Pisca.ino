//Exercicio1: Fazer um programa para o led no pino 12 piscar 3 vezes (500ms) na sequencia ficar ligado por 2 seg.

void setup() {
  pinMode(12, OUTPUT);
}

void loop() {
  digitalWrite(12, HIGH);                    
  delay(500);
  digitalWrite(12, LOW);
  delay(500);
  
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(12, LOW);
  delay(500);

  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(12, LOW);
  delay(500);
  
  digitalWrite(12, HIGH);
  delay(2000);
  digitalWrite(12, LOW);
  delay(500); 
}

  
