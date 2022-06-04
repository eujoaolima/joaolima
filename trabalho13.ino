#define RS 32
#define RW 48
#define EN 36
#define D4 42
#define D5 34
#define D6 40
#define D7 38

#include <LiquidCrystal.h>

LiquidCrystal lcd(RS, EN, D4, D5, D6, D7);

void setup() {
  pinMode(RW, OUTPUT);
  digitalWrite(RW, LOW);
  lcd.begin(8, 2);
}

void loop() {
  int HH;
  int MM;
  int SS;
  int DD;
  int mm;
  int AA;
  char bsaida[10];
  lcd.clear();
  sprintf(bsaida, "%02D:%02D:%02D", HH, MM, SS);
  lcd.setCursor(0, 1);
  sprintf(bsaida, "%02D/%02D:/02D", DD, mm, AA);
  lcd.setCursor(1, 1);
  delay(50);

  for (int posicao = 0; posicao < 3; posicao++)
  {
    lcd.scrollDisplayLeft();
    delay(300);
  }

  for (int posicao = 0; posicao < 6; posicao++)
  {
    lcd.scrollDisplayRight();
    delay(300);
  }
}
