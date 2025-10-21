//multivibrador
int a = 8;
int b =4;
int s= 200;
void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
}
void loop() {
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  delay(s);
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  delay(s);
}
