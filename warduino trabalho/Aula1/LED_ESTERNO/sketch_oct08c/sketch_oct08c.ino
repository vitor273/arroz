//Este programa pisca um led externo no pino 12, utilizando variaveis int
int led = 13;
int t = 500;
void setup() {
 pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(t);
  digitalWrite(led, LOW);
  delay(t);

}
