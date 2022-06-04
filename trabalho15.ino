#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

byte Pc1[] = {
  B00000,
  B10000,
  B00000,
  B00000,
  B00000,
  B10000,
  B00000,
  B00000
};

byte Pc2[] = {
  B10000,
  B01000,
  B10000,
  B00000,
  B10000,
  B01000,
  B10000,
  B00000
};

byte Pc3[] = {
  B11000,
  B00100,
  B01000,
  B10000,
  B01000,
  B00100,
  B11000,
  B00000
};
byte Pc4[] = {
  B11100,
  B00010,
  B00100,
  B01000,
  B00100,
  B00010,
  B11100,
  B00000
};

byte Pc5[] = {
  B01110,
  B10001,
  B00010,
  B00100,
  B00010,
  B10001,
  B01110,
  B00000
};
byte Pc6[] = {
  B00111,
  B01000,
  B10001,
  B10010,
  B10001,
  B01000,
  B00111,
  B00000
};
byte Pc7[] = {
  B00011,
  B00100,
  B01000,
  B01001,
  B01000,
  B00100,
  B00011,
  B00000
};
byte Pc8[] = {
  B00001,
  B00010,
  B00100,
  B00100,
  B00100,
  B00010,
  B00001,
  B00000
};
byte Pc9[] = {
  B00000,
  B00001,
  B00010,
  B00010,
  B00010,
  B00001,
  B00000,
  B00000
};
byte Pc10[] = {
  B00000,
  B00000,
  B00001,
  B00001,
  B00001,
  B00000,
  B00000,
  B00000
};
byte Pc11[] = {
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000,
  B00000
};

byte comida[] = {
  B00000,
  B00000,
  B00000,
  B00100,
  B00000,
  B00000,
  B00000,
  B00000
};

void setup() {
  lcd.begin();
  lcd.setBacklight(HIGH);
  lcd.createChar(1, Pc1);
  lcd.clear();
  lcd.createChar(2, Pc2);
  lcd.clear();
  lcd.createChar(3, Pc3);
  lcd.clear();
  lcd.createChar(4, Pc4);
  lcd.clear();
  lcd.createChar(5, Pc5);
  lcd.clear();
  lcd.createChar(6, Pc6);
  lcd.clear();
  lcd.createChar(7, Pc7);
  lcd.clear();
  lcd.createChar(8, Pc8);
  lcd.clear();
  lcd.createChar(9, Pc9);
  lcd.clear();
  lcd.createChar(10, Pc10);
  lcd.clear();
  lcd.createChar(11, Pc11);
  lcd.clear();
  lcd.createChar(12, comida);


}

void loop() {
  lcd.setCursor(0, 1);
  lcd.write(12);
  delay(150);
  lcd.setCursor(1, 1);
  lcd.write(12);
  delay(150);
  lcd.setCursor(2, 1);
  lcd.write(12);
  delay(150);
  lcd.setCursor(3, 1);
  lcd.write(12);
  delay(150);
  lcd.setCursor(4, 1);
  lcd.write(12);
  delay(150);
  lcd.setCursor(5, 1);
  lcd.write(12);
  delay(150);
  lcd.setCursor(6, 1);
  lcd.write(12);
  delay(150);
  lcd.setCursor(7, 1);
  lcd.write(12);
  delay(150);
  lcd.setCursor(8, 1);
  lcd.write(12);
  lcd.setCursor(9, 1);
  lcd.write(12);
  delay(150);
  lcd.setCursor(10, 1);
  lcd.write(12);
  delay(150);
  lcd.setCursor(11, 1);
  lcd.write(12);
  delay(150);
  lcd.setCursor(12, 1);
  lcd.write(12);
  delay(150);
  lcd.setCursor(13, 1);
  lcd.write(12);
  delay(150);
  lcd.setCursor(14, 1);
  lcd.write(12);
  delay(150);
  lcd.setCursor(15, 1);
  lcd.write(12);
  delay(150);
  lcd.setCursor(16, 1);
  lcd.write(12);
  delay(150);
  lcd.setCursor(16, 0);
  lcd.write(12);
  delay(150);
  lcd.setCursor(15, 0);
  lcd.write(12);
  delay(150);
  lcd.setCursor(14, 0);
  lcd.write(12);
  delay(150);
  lcd.setCursor(13, 0);
  lcd.write(12);
  delay(150);
  lcd.setCursor(12, 0);
  lcd.write(12);
  delay(150);
  lcd.setCursor(11, 0);
  lcd.write(12);
  delay(150);
  lcd.setCursor(10, 0);
  lcd.write(12);
  delay(150);
  lcd.setCursor(9, 0);
  lcd.write(12);
  delay(150);
  lcd.setCursor(8, 0);
  lcd.write(12);
  delay(150);
  lcd.setCursor(7, 0);
  lcd.write(12);
  delay(150);
  lcd.setCursor(6, 0);
  lcd.write(12);
  delay(150);
  lcd.setCursor(5, 0);
  lcd.write(12);
  delay(150);
  lcd.setCursor(4, 0);
  lcd.write(12);
  delay(150);
  lcd.setCursor(3, 0);
  lcd.write(12);
  delay(150);
  lcd.setCursor(2, 0);
  lcd.write(12);
  delay(150);
  lcd.setCursor(1, 0);
  lcd.write(12);
  delay(150);
  lcd.setCursor(0, 0);
  lcd.write(12);
  delay(150);


  //Bloco 1
  for (int a = 1; a <= 2; a++)
  {
    lcd.setCursor(0, 1);
    lcd.write(a);
    delay(150);

  }
  for (int b = 2; b <= 3; b++)
  {
    lcd.setCursor(0, 1);
    lcd.write(b);
    delay(150);
  }
  for (int c = 3; c <= 4; c++)
  {
    lcd.setCursor(0, 1);
    lcd.write(c);
    delay(150);
  }
  for (int d = 4; d <= 5; d++)
  {
    lcd.setCursor(0, 1);
    lcd.write(d);
    delay(150);
  }
  for (int e = 5; e <= 6; e++)
  {
    lcd.setCursor(0, 1);
    lcd.write(e);
    delay(150);
  }
  for (int f = 6; f <= 7; f++)
  {
    lcd.setCursor(0, 1);
    lcd.write(f);
    delay(150);
  }
  for (int g = 7; g <= 8; g++)
  {
    lcd.setCursor(0, 1);
    lcd.write(g);
    delay(150);
  }
  for (int h = 8; h <= 9; h++)
  {
    lcd.setCursor(0, 1);
    lcd.write(h);
    delay(150);
  }
  for (int i = 9; i <= 10; i++)
  {
    lcd.setCursor(0, 1);
    lcd.write(i);
    delay(150);
  }
  for (int j = 10; j <= 11; j++)
  {
    lcd.setCursor(0, 1);
    lcd.write(j);
    delay(150);
  }

  //Bloco 2
  for (int a = 1; a <= 2; a++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(a);
    delay(150);

  }
  for (int b = 2; b <= 3; b++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(b);
    delay(150);
  }
  for (int c = 3; c <= 4; c++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(c);
    delay(150);
  }
  for (int d = 4; d <= 5; d++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(d);
    delay(150);
  }
  for (int e = 5; e <= 6; e++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(e);
    delay(150);
  }
  for (int f = 6; f <= 7; f++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(f);
    delay(150);
  }
  for (int g = 7; g <= 8; g++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(g);
    delay(150);
  }
  for (int h = 8; h <= 9; h++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(h);
    delay(150);
  }
  for (int i = 9; i <= 10; i++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(i);
    delay(150);
  }
  for (int j = 10; j <= 11; j++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(j);
    delay(150);
  }
  //Bloco 3
  for (int a = 1; a <= 2; a++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(a);
    delay(150);
  }
  for (int b = 2; b <= 3; b++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(b);
    delay(150);
  }
  for (int c = 3; c <= 4; c++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(c);
    delay(150);
  }
  for (int d = 4; d <= 5; d++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(d);
    delay(150);
  }
  for (int e = 5; e <= 6; e++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(e);
    delay(150);
  }
  for (int f = 6; f <= 7; f++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(f);
    delay(150);
  }
  for (int g = 7; g <= 8; g++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(g);
    delay(150);
  }
  for (int h = 8; h <= 9; h++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(h);
    delay(150);
  }
  for (int i = 9; i <= 10; i++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(i);
    delay(150);
  }
  for (int j = 10; j <= 11; j++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(j);
    delay(150);
  }

  //Bloco 4
  for (int a = 1; a <= 2; a++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(a);
    delay(150);
  }
  for (int b = 2; b <= 3; b++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(b);
    delay(150);
  }
  for (int c = 3; c <= 4; c++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(c);
    delay(150);
  }
  for (int d = 4; d <= 5; d++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(d);
    delay(150);
  }
  for (int e = 5; e <= 6; e++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(e);
    delay(150);
  }
  for (int f = 6; f <= 7; f++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.setCursor(3, 1);
    lcd.write(f);
    delay(150);
  }
  for (int g = 7; g <= 8; g++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.setCursor(3, 1);
    lcd.write(g);
    delay(150);
  }
  for (int h = 8; h <= 9; h++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.setCursor(3, 1);
    lcd.write(h);
    delay(150);
  }
  for (int i = 9; i <= 10; i++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.setCursor(3, 1);
    lcd.write(i);
    delay(150);
  }
  for (int j = 10; j <= 11; j++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.setCursor(3, 1);
    lcd.write(j);
    delay(150);
  }
  //Bloco 5
  for (int a = 1; a <= 2; a++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(a);
    delay(150);

  }
  for (int b = 2; b <= 3; b++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(b);
    delay(150);
  }
  for (int c = 3; c <= 4; c++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(c);
    delay(150);
  }
  for (int d = 4; d <= 5; d++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(d);
    delay(150);
  }
  for (int e = 5; e <= 6; e++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(e);
    delay(150);
  }
  for (int f = 6; f <= 7; f++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(f);
    delay(150);
  }
  for (int g = 7; g <= 8; g++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(g);
    delay(150);
  }
  for (int h = 8; h <= 9; h++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(h);
    delay(150);
  }
  for (int i = 9; i <= 10; i++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(i);
    delay(150);
  }
  for (int j = 10; j <= 11; j++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(j);
    delay(150);
  }

  //Bloco 6
  for (int a = 1; a <= 2; a++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(a);
    delay(150);

  }
  for (int b = 2; b <= 3; b++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(b);
    delay(150);
  }
  for (int c = 3; c <= 4; c++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(c);
    delay(150);
  }
  for (int d = 4; d <= 5; d++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);;
    lcd.write(d);
    delay(150);
    lcd.write(11);
  }
  for (int e = 5; e <= 6; e++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(e);
    delay(150);
    lcd.write(11);
  }
  for (int f = 6; f <= 7; f++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(f);
    delay(150);
    lcd.write(11);
  }
  for (int g = 7; g <= 8; g++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(g);
    delay(150);
    lcd.write(11);
  }
  for (int h = 8; h <= 9; h++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(h);
    delay(150);
    lcd.write(11);
  }
  for (int i = 9; i <= 10; i++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(i);
    delay(150);
    lcd.write(11);
  }
  for (int j = 10; j <= 11; j++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(j);
    delay(150);
    lcd.write(11);
  }
  //Bloco 7
  for (int a = 1; a <= 2; a++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(a);
    delay(150);

  }
  for (int b = 2; b <= 3; b++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(b);
    delay(150);
  }
  for (int c = 3; c <= 4; c++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(c);
    delay(150);
  }
  for (int d = 4; d <= 5; d++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(d);
    delay(150);
  }
  for (int e = 5; e <= 6; e++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(e);
    delay(150);
  }
  for (int f = 6; f <= 7; f++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(f);
    delay(150);
  }
  for (int g = 7; g <= 8; g++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(g);
    delay(150);
  }
  for (int h = 8; h <= 9; h++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(h);
    delay(150);
  }
  for (int i = 9; i <= 10; i++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(i);
    delay(150);
  }
  for (int j = 10; j <= 11; j++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(j);
    delay(150);
  }

  //Bloco 8
  for (int a = 1; a <= 2; a++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(a);
    delay(150);

  }
  for (int b = 2; b <= 3; b++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(b);
    delay(150);
  }
  for (int c = 3; c <= 4; c++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(c);
    delay(150);
  }
  for (int d = 4; d <= 5; d++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(d);
    delay(150);
  }
  for (int e = 5; e <= 6; e++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(e);
    delay(150);
  }
  for (int f = 6; f <= 7; f++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(f);
    delay(150);
  }
  for (int g = 7; g <= 8; g++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(g);
    delay(150);
  }
  for (int h = 8; h <= 9; h++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(h);
    delay(150);
  }
  for (int i = 9; i <= 10; i++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(i);
    delay(150);
  }
  for (int j = 10; j <= 11; j++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(j);
    delay(150);
  }
  //Bloco 9
  for (int a = 1; a <= 2; a++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(a);
    delay(150);

  }
  for (int b = 2; b <= 3; b++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(b);
    delay(150);
  }
  for (int c = 3; c <= 4; c++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(c);
    delay(150);
  }
  for (int d = 4; d <= 5; d++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(d);
    delay(150);
  }
  for (int e = 5; e <= 6; e++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(e);
    delay(150);
  }
  for (int f = 6; f <= 7; f++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(f);
    delay(150);
  }
  for (int g = 7; g <= 8; g++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(g);
    delay(150);
  }
  for (int h = 8; h <= 9; h++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(h);
    delay(150);
  }
  for (int i = 9; i <= 10; i++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(i);
    delay(150);
  }
  for (int j = 10; j <= 11; j++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(j);
    delay(150);
  }

  //Bloco 10
  for (int a = 1; a <= 2; a++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(12);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(11);
    lcd.setCursor(9, 1);
    lcd.write(a);
    delay(150);
  }
  for (int b = 2; b <= 3; b++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(12);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(11);
    lcd.setCursor(9, 1);
    lcd.write(b);
    delay(150);
  }
  for (int c = 3; c <= 4; c++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(12);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(11);
    lcd.setCursor(9, 1);
    lcd.write(c);
    delay(150);
  }
  for (int d = 4; d <= 5; d++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(12);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(11);
    lcd.setCursor(9, 1);
    lcd.write(d);
    delay(150);
  }
  for (int e = 5; e <= 6; e++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(12);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(11);
    lcd.setCursor(9, 1);
    lcd.write(e);
    delay(150);
  }
  for (int f = 6; f <= 7; f++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(12);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(11);
    lcd.setCursor(9, 1);
    lcd.write(f);
    delay(150);
  }
  for (int g = 7; g <= 8; g++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(12);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(11);
    lcd.setCursor(9, 1);
    lcd.write(g);
    delay(150);
  }
  for (int h = 8; h <= 9; h++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(12);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(11);
    lcd.setCursor(9, 1);
    lcd.write(h);
    delay(150);
  }
  for (int i = 9; i <= 10; i++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(12);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(11);
    lcd.setCursor(9, 1);
    lcd.write(i);
    delay(150);
  }
  for (int j = 10; j <= 11; j++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(12);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(11);
    lcd.setCursor(9, 1);
    lcd.write(j);
    delay(150);
  }
  
  //Bloco 11
  for (int a = 1; a <= 2; a++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(12);
    lcd.setCursor(5, 1);
    lcd.write(12);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(11);
    lcd.setCursor(9, 1);
    lcd.write(11);
    lcd.setCursor(10, 1);
    lcd.write(a);
    delay(150);

  }
  for (int b = 2; b <= 3; b++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(12);
    lcd.setCursor(5, 1);
    lcd.write(12);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(11);
    lcd.setCursor(9, 1);
    lcd.write(11);
    lcd.setCursor(10, 1);
    lcd.write(b);
    delay(150);
  }
  for (int c = 3; c <= 4; c++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(12);
    lcd.setCursor(5, 1);
    lcd.write(12);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(11);
    lcd.setCursor(9, 1);
    lcd.write(11);
    lcd.setCursor(10, 1);
    lcd.write(c);
    delay(150);
  }
  for (int d = 4; d <= 5; d++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(12);
    lcd.setCursor(5, 1);
    lcd.write(12);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(11);
    lcd.setCursor(9, 1);
    lcd.write(11);
    lcd.setCursor(10, 1);
    lcd.write(d);
    delay(150);
  }
  for (int e = 5; e <= 6; e++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(12);
    lcd.setCursor(5, 1);
    lcd.write(12);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(11);
    lcd.setCursor(9, 1);
    lcd.write(11);
    lcd.setCursor(10, 1);
    lcd.write(e);
    delay(150);
  }
  for (int f = 6; f <= 7; f++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(12);
    lcd.setCursor(5, 1);
    lcd.write(12);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(11);
    lcd.setCursor(9, 1);
    lcd.write(11);
    lcd.setCursor(10, 1);
    lcd.write(f);
    delay(150);
  }
  for (int g = 7; g <= 8; g++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(12);
    lcd.setCursor(5, 1);
    lcd.write(12);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(11);
    lcd.setCursor(9, 1);
    lcd.write(11);
    lcd.setCursor(10, 1);
    lcd.write(g);
    delay(150);
  }
  for (int h = 8; h <= 9; h++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(12);
    lcd.setCursor(5, 1);
    lcd.write(12);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(11);
    lcd.setCursor(9, 1);
    lcd.write(11);
    lcd.setCursor(10, 1);
    lcd.write(h);
    delay(150);
  }
  for (int i = 9; i <= 10; i++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(12);
    lcd.setCursor(5, 1);
    lcd.write(12);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(11);
    lcd.setCursor(9, 1);
    lcd.write(11);
    lcd.setCursor(10, 1);
    lcd.write(i);
    delay(150);
  }
  for (int j = 10; j <= 11; j++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(12);
    lcd.setCursor(5, 1);
    lcd.write(12);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(11);
    lcd.setCursor(9, 1);
    lcd.write(11);
    lcd.setCursor(10, 1);
    lcd.write(j);
    delay(150);
  }

  //Bloco 12
  for (int a = 1; a <= 2; a++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(a);
    delay(150);

  }
  for (int b = 2; b <= 3; b++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(b);
    delay(150);
  }
  for (int c = 3; c <= 4; c++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(c);
    delay(150);
  }
  for (int d = 4; d <= 5; d++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(d);
    delay(150);
  }
  for (int e = 5; e <= 6; e++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(e);
    delay(150);
  }
  for (int f = 6; f <= 7; f++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(f);
    delay(150);
  }
  for (int g = 7; g <= 8; g++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(g);
    delay(150);
  }
  for (int h = 8; h <= 9; h++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(h);
    delay(150);
  }
  for (int i = 9; i <= 10; i++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(i);
    delay(150);
  }
  for (int j = 10; j <= 11; j++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(j);
    delay(150);
  }
  //Bloco 3
  for (int a = 1; a <= 2; a++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(a);
    delay(150);
  }
  for (int b = 2; b <= 3; b++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(b);
    delay(150);
  }
  for (int c = 3; c <= 4; c++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(c);
    delay(150);
  }
  for (int d = 4; d <= 5; d++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(d);
    delay(150);
  }
  for (int e = 5; e <= 6; e++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(e);
    delay(150);
  }
  for (int f = 6; f <= 7; f++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(f);
    delay(150);
  }
  for (int g = 7; g <= 8; g++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(g);
    delay(150);
  }
  for (int h = 8; h <= 9; h++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(h);
    delay(150);
  }
  for (int i = 9; i <= 10; i++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(i);
    delay(150);
  }
  for (int j = 10; j <= 11; j++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(j);
    delay(150);
  }

  //Bloco 4
  for (int a = 1; a <= 2; a++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(a);
    delay(150);
  }
  for (int b = 2; b <= 3; b++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(b);
    delay(150);
  }
  for (int c = 3; c <= 4; c++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(c);
    delay(150);
  }
  for (int d = 4; d <= 5; d++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(d);
    delay(150);
  }
  for (int e = 5; e <= 6; e++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(e);
    delay(150);
  }
  for (int f = 6; f <= 7; f++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.setCursor(3, 1);
    lcd.write(f);
    delay(150);
  }
  for (int g = 7; g <= 8; g++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.setCursor(3, 1);
    lcd.write(g);
    delay(150);
  }
  for (int h = 8; h <= 9; h++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.setCursor(3, 1);
    lcd.write(h);
    delay(150);
  }
  for (int i = 9; i <= 10; i++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.setCursor(3, 1);
    lcd.write(i);
    delay(150);
  }
  for (int j = 10; j <= 11; j++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.setCursor(3, 1);
    lcd.write(j);
    delay(150);
  }
  //Bloco 5
  for (int a = 1; a <= 2; a++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(a);
    delay(150);

  }
  for (int b = 2; b <= 3; b++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(b);
    delay(150);
  }
  for (int c = 3; c <= 4; c++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(c);
    delay(150);
  }
  for (int d = 4; d <= 5; d++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(d);
    delay(150);
  }
  for (int e = 5; e <= 6; e++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(e);
    delay(150);
  }
  for (int f = 6; f <= 7; f++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(f);
    delay(150);
  }
  for (int g = 7; g <= 8; g++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(g);
    delay(150);
  }
  for (int h = 8; h <= 9; h++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(h);
    delay(150);
  }
  for (int i = 9; i <= 10; i++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(i);
    delay(150);
  }
  for (int j = 10; j <= 11; j++)
  {
    lcd.setCursor(0, 1);
    lcd.write(11);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(j);
    delay(150);
  }

  //Bloco 6
  for (int a = 1; a <= 2; a++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(a);
    delay(150);

  }
  for (int b = 2; b <= 3; b++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(b);
    delay(150);
  }
  for (int c = 3; c <= 4; c++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(c);
    delay(150);
  }
  for (int d = 4; d <= 5; d++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);;
    lcd.write(d);
    delay(150);
    lcd.write(11);
  }
  for (int e = 5; e <= 6; e++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(e);
    delay(150);
    lcd.write(11);
  }
  for (int f = 6; f <= 7; f++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(f);
    delay(150);
    lcd.write(11);
  }
  for (int g = 7; g <= 8; g++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(g);
    delay(150);
    lcd.write(11);
  }
  for (int h = 8; h <= 9; h++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(h);
    delay(150);
    lcd.write(11);
  }
  for (int i = 9; i <= 10; i++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(i);
    delay(150);
    lcd.write(11);
  }
  for (int j = 10; j <= 11; j++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(11);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(j);
    delay(150);
    lcd.write(11);
  }
  //Bloco 7
  for (int a = 1; a <= 2; a++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(a);
    delay(150);

  }
  for (int b = 2; b <= 3; b++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(b);
    delay(150);
  }
  for (int c = 3; c <= 4; c++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(c);
    delay(150);
  }
  for (int d = 4; d <= 5; d++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(d);
    delay(150);
  }
  for (int e = 5; e <= 6; e++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(e);
    delay(150);
  }
  for (int f = 6; f <= 7; f++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(f);
    delay(150);
  }
  for (int g = 7; g <= 8; g++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(g);
    delay(150);
  }
  for (int h = 8; h <= 9; h++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(h);
    delay(150);
  }
  for (int i = 9; i <= 10; i++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(i);
    delay(150);
  }
  for (int j = 10; j <= 11; j++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(11);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(j);
    delay(150);
  }

  //Bloco 8
  for (int a = 1; a <= 2; a++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(a);
    delay(150);

  }
  for (int b = 2; b <= 3; b++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(b);
    delay(150);
  }
  for (int c = 3; c <= 4; c++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(c);
    delay(150);
  }
  for (int d = 4; d <= 5; d++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(d);
    delay(150);
  }
  for (int e = 5; e <= 6; e++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(e);
    delay(150);
  }
  for (int f = 6; f <= 7; f++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(f);
    delay(150);
  }
  for (int g = 7; g <= 8; g++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(g);
    delay(150);
  }
  for (int h = 8; h <= 9; h++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(h);
    delay(150);
  }
  for (int i = 9; i <= 10; i++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(i);
    delay(150);
  }
  for (int j = 10; j <= 11; j++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(11);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(j);
    delay(150);
  }
  //Bloco 9
  for (int a = 1; a <= 2; a++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(a);
    delay(150);

  }
  for (int b = 2; b <= 3; b++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(b);
    delay(150);
  }
  for (int c = 3; c <= 4; c++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(c);
    delay(150);
  }
  for (int d = 4; d <= 5; d++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(d);
    delay(150);
  }
  for (int e = 5; e <= 6; e++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(e);
    delay(150);
  }
  for (int f = 6; f <= 7; f++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(f);
    delay(150);
  }
  for (int g = 7; g <= 8; g++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(g);
    delay(150);
  }
  for (int h = 8; h <= 9; h++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(h);
    delay(150);
  }
  for (int i = 9; i <= 10; i++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(i);
    delay(150);
  }
  for (int j = 10; j <= 11; j++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(11);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(j);
    delay(150);
  }

  //Bloco 10
  for (int a = 1; a <= 2; a++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(12);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(11);
    lcd.setCursor(9, 1);
    lcd.write(a);
    delay(150);
  }
  for (int b = 2; b <= 3; b++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(12);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(11);
    lcd.setCursor(9, 1);
    lcd.write(b);
    delay(150);
  }
  for (int c = 3; c <= 4; c++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(12);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(11);
    lcd.setCursor(9, 1);
    lcd.write(c);
    delay(150);
  }
  for (int d = 4; d <= 5; d++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(12);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(11);
    lcd.setCursor(9, 1);
    lcd.write(d);
    delay(150);
  }
  for (int e = 5; e <= 6; e++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(12);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(11);
    lcd.setCursor(9, 1);
    lcd.write(e);
    delay(150);
  }
  for (int f = 6; f <= 7; f++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(12);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(11);
    lcd.setCursor(9, 1);
    lcd.write(f);
    delay(150);
  }
  for (int g = 7; g <= 8; g++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(12);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(11);
    lcd.setCursor(9, 1);
    lcd.write(g);
    delay(150);
  }
  for (int h = 8; h <= 9; h++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(12);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(11);
    lcd.setCursor(9, 1);
    lcd.write(h);
    delay(150);
  }
  for (int i = 9; i <= 10; i++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(12);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(11);
    lcd.setCursor(9, 1);
    lcd.write(i);
    delay(150);
  }
  for (int j = 10; j <= 11; j++)
  {
    lcd.setCursor(0, 1);
    lcd.write(12);
    lcd.setCursor(1, 1);
    lcd.write(12);
    lcd.setCursor(2, 1);
    lcd.write(12);
    lcd.setCursor(3, 1);
    lcd.write(12);
    lcd.setCursor(4, 1);
    lcd.write(12);
    lcd.setCursor(5, 1);
    lcd.write(11);
    lcd.setCursor(6, 1);
    lcd.write(11);
    lcd.setCursor(7, 1);
    lcd.write(11);
    lcd.setCursor(8, 1);
    lcd.write(11);
    lcd.setCursor(9, 1);
    lcd.write(j);
    delay(150);
  }  

}
