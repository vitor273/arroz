#include <Ultrasonic.h>
long distancia;
Ultrasonic ultrassom(7,8);
int buzzer = 10;                                        // AfstandsSensor(triggerPin, echoPin);
  // Starter afstandssensoren på ben 13 og 12.

void setup () {
    Serial.begin(9600);  // Opsætter serial kommunikation tilbage til computeren
}

void loop () {
    // Måler afstanden for hver 500ms
    distancia = ultrassom.distanceRead();
   Serial.println(distancia);
   if(distancia < 20)
   {
    tone(buzzer, 4000,100);
   }
    delay(200);
}
