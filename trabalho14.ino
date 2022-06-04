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

int LM35 = A0;
float temp;
float fahrenheit;
float kelvin;
float temperatura;
int clima;
void setup() {
 Serial.begin(9600);
 pinMode(RW, OUTPUT);
  digitalWrite(RW, LOW);
  lcd.begin(8, 2);
}

void loop() {
  //temp = analogRead(LM35);
  temperatura = map(LM35, 0, 1023, 13 ,302);
  temp = (float(analogRead(LM35))*5/1023)*10;
  fahrenheit = (temp *(9/5))+32;
  kelvin = temp + 273;
  clima = analogRead(temp);
  
  Serial.print("Temperatura em ºC: ");
  Serial.println(temp);
  Serial.print("Temperatura em ºF: ");
  Serial.println(fahrenheit);
  delay(1000);
  Serial.print("Temperatura em K: ");
  Serial.println(kelvin);
  delay(1000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(temp);
  lcd.print("C");
  lcd.print(fahrenheit);
  lcd.print("F");
  lcd.setCursor(0, 1);

  if (clima <=35)
  {
    lcd.print("Muito calor");
  }
  if (clima > 34)
  {
    lcd.print("Calor");
  }
  delay(200);

  for (int posicao = 0; posicao < 4; posicao++)
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
