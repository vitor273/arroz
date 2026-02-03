#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

// LEDs
int leds[4] = {10, 11, 12, 13};

// Controle de menu
int menuIndex = 0;
bool emControle = false;

// Leitura dos botões
int lerBotao() {
  int leitura = analogRead(A0);

  if (leitura < 60) return 1; // RIGHT
  if (leitura < 200) return 2; // UP
  if (leitura < 400) return 3; // DOWN
  if (leitura < 600) return 4; // LEFT
  if (leitura < 800) return 5; // SELECT

  return 0; // nenhum
}

void setup() {
  lcd.begin(16, 2);
  lcd.print("Leitura Botao");
  delay(1000);
  lcd.clear();

  for (int i = 0; i < 4; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  int botao = lerBotao();

  if (!emControle) {
    lcd.setCursor(0, 0);
    lcd.print("==== Menu ====");

    lcd.setCursor(0, 1);
    lcd.print("LED ");
    lcd.print(menuIndex + 1);
    lcd.print(" ");

    if (botao == 3) {
      menuIndex++;
      if (menuIndex > 3) menuIndex = 0;
      delay(300);
    }

    if (botao == 2) {
      menuIndex--;
      if (menuIndex < 0) menuIndex = 3;
      delay(300);
    }

    if (botao == 5) { 
      emControle = true;
      lcd.clear();
      delay(300);
    }

  } else {
    lcd.setCursor(0, 0);
    lcd.print("Controle LED ");
    lcd.print(menuIndex + 1);

    if (botao == 1) {
      digitalWrite(leds[menuIndex], HIGH);
      lcd.setCursor(0, 1);
      lcd.print("LED ligado ");
      delay(300);
    }

    if (botao == 4) {
      digitalWrite(leds[menuIndex], LOW);
      lcd.setCursor(0, 1);
      lcd.print("LED desligado ");
      delay(300);
    }

    if (botao == 5) {
      emControle = false;
      lcd.clear();
      delay(300);
    }
  }
}