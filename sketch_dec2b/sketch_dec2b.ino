int buzzer = 10;
void setup() {
  // put your setup code here, to run once:
pinMode(buzzer,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
tone(buzzer, 4000, 100);
delay(100);
}
