#include "MeOrion.h"
//Display conectado nas portas 2 (SCK) e 8 (DIN) do Arduino
MeLEDMatrix ledMx(8, 2);
void setup()
{
  Serial.begin(9600);
  //Regula o brilho do display
  ledMx.setBrightness(2);
  ledMx.setColorIndex(1);
}
//Texto mostrado na tela
char *texto = "Hexa 2022!";
char *text1 = " Oi ";
char *text2 = " :)";


void loop()
{
  const unsigned char bitmap[] = {0, 01, 0x00,
                                  0x01, 0x00, 0x01,
                                  0x01, 0x01, 0x01,
                                  0x01, 0x00, 0x01,
                                  0x01, 0x01, 0x01, 0x01
                                 };




  for (int i = 0; i <= 15; i++)
  {
    for (int j = -7; j <= 0; j++)
    {
      ledMx.clearScreen();
      const unsigned char bitmap[] = {0x01};
      ledMx.drawBitmap(i, j, 1, bitmap);
      delay(40);
    }
  }
  //Relogio - Use o primeiro parametro como hora, o segundo como minutos e
  //o terceiro para ativar (1) ou desativar (0) o ponto central
  //ledMx.showClock(13, 50, 1);
  //delay(2000);

  //  Mostra o texto no display
  for (int i = 16 ; i >= -75; i--)
  {
    ledMx.drawStr(i, 7, texto);
    delay(80);
  }
  for (int i = -75 ; i <= 16; i++)
  {
    ledMx.drawStr(i, 7, texto);
    delay(80);
  }

  //for (int i = 0 ; i <= 16; i++)
  //{
   // ledMx.drawStr(-5, i, text1);
   // delay(90);
 // }
  delay(500);

  //for (int i = 9 ; i >= -5; i--)
  //{
   // ledMx.drawStr(-5, i, text2);
   // delay(90);
 // }

  //  Mostra números no display
 // ledMx.showNum(97.90);
 // delay(2000);
}
