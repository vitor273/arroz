#include <TM1637Display.h>
#define DIO 3
#define CLK 2
TM1637Display display(CLK, DIO);
void setup() {
 display.setBrightness(7);

}

void loop() {
  display.showNumberDec(67);
  delay(100);

}
