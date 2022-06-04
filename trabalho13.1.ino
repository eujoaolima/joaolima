#define RS 32
#define RW 48
#define EN 36
#define D4 42
#define D5 34
#define D6 40
#define D7 38

int HH = 16;
int MM = 35;
int ss = 01;
int DD = 25;
int mm = 04;
int AA = 22;
char bsaida[10];

#include <LiquidCrystal.h>

LiquidCrystal lcd(RS, EN, D4, D5, D6, D7);

void setup() {
  pinMode(RW, OUTPUT);
  digitalWrite(RW, LOW);
  lcd.begin(8, 2);
}

void loop() {

  lcd.clear();
  lcd.setCursor(0, 0);
  if (HH < 10)
  {
    lcd.print("0");
  }
  lcd.print(HH);
  lcd.print(":");
  if (MM < 10)
  {
    lcd.print("0");
  }
    lcd.print(MM);
  lcd.print(":");

  if (ss < 10)
  {
    lcd.print("0");
  }
  lcd.print(ss);
  lcd.setCursor(0, 1);
  if (DD < 10)
  {
    lcd.print("0");
  }
    lcd.print(DD);
  lcd.print("/");
  if (mm < 10)
  {
    lcd.print("0");
  }
    lcd.print(mm);
  lcd.print("/");
  if (AA < 10)
  {
    lcd.print("0");
  }
    lcd.print(AA);
  delay(1000);

  ss++;
  if (ss > 59)
  {
    ss = 0;
    MM++;
  }
  if (MM > 59)
  {
    MM = 0;
    HH++;
  }
  if (HH > 24)
  {
    HH = 0;
    DD++;
  }
  if (DD > 31)
  {
    DD = 1;
    mm++;
  }
  if (mm > 12)
  {
    mm = 1;
    AA++;
  }
  if (AA > 99)
  {
    AA = 0;
  }
}
