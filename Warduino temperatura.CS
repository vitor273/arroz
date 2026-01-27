int sensortemperatura = A0;
float leituratemp = 0;
float temperaturacelso = 0;
int led = 12;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led, OUTPUT);
}

void loop() {
 leituratemp = analogRead(sensortemperatura);
 temperaturacelso = (leituratemp * 0.0048828125) / 0.01;
 Serial.print("Temperatura lindia🙄😏🤣::");
 Serial.println(temperaturacelso);
 Serial.println("C-");
 delay(1000);

if(temperaturacelso >= 30.00)
{
digitalWrite(led, HIGH);
}
else
{
  digitalWrite(led, LOW);
}
}
