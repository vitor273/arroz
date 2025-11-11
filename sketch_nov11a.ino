/*int valpot = 0;

int led =7;
void setup() 
{
Serial.begin(9600);
pinMode(led, OUTPUT);  
}

void loop() 
{
valpot = analogRead(A0);
Serial.println(valpot);

digitalWrite(led,HIGH);
delay(valpot);
digitalWrite(led,LOW);
delay(valpot);
}*/



/*
int valpot = 0;
float tensao = 0;
void setup() 
{
Serial.begin(9600);  
}

void loop() 
{
valpot = analogRead(A0);
tensao = valpot * 0.00488758553;
Serial.print(tensao, 3);
delay(100);
}*/
int ldr = 0;
  int led1 = 7;
  int led2 = 8;
void setup() 
{
Serial.begin(9600);
pinMode(led1, HIGH);
pinMode(led2, HIGH);
}

void loop() 
{
ldr = analogRead(A0);
Serial.println(ldr);
if(ldr > 800)
{
digitalWrite(led1, HIGH);
digitalWrite(led2, LOW);
}
if else(ldr < 300)
{
digitalWrite(led2, HIGH);
digitalWrite(led1, LOW);
}
else
{
digitalWrite(led2, LOW);
digitalWrite(led1, LOW);
}
}
