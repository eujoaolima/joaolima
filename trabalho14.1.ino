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

#include <LiquidCrystal.h>

LiquidCrystal lcd(RS, EN, D4, D5, D6, D7);

int LM35 = A0;
float temp;
float temperatura;

void setup() {
 Serial.begin(9600);
 pinMode(RW, OUTPUT);
  digitalWrite(RW, LOW);
  lcd.begin(8, 2);
}

void loop() {

  temperatura = map(LM35, 0, 1023, 13 ,302);
  temp = (float(analogRead(LM35))*5/1023)*10;

  Serial.print("Temperatura em ºC: ");
  Serial.println(temp);
  lcd.setCursor(0, 0);
  lcd.print(temp);
  lcd.print(" C");
  lcd.display();
  delay(500);
  lcd.noDisplay();
  delay(500);
}
