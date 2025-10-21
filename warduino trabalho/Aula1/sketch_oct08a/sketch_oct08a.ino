void setup() {
  //Essa linha configura o pino 13 como saida
  pinMode(13, OUTPUT);
}


void loop() {
  //coloca o pino 13 em nivel alto
 digitalWrite(13, HIGH);
 //aguarda 1 segundo
 delay(100);
 //deslga o led no nivel 13
 digitalWrite(13, LOW);
 //aguarda 1 seg
 delay(100);
}
