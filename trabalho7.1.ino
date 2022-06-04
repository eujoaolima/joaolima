#include <Bounce.h>
int resetButton = 3;
int countPin = 6;
int ledG = 8;
int ledY = 2;
int ledR = 4;

#define debounce_time 0
Bounce ResetB = Bounce (resetButton, debounce_time);
Bounce contador = Bounce (countPin, debounce_time);

int count;


void setup()
{
 pinMode(resetButton, INPUT);
  pinMode(countPin, INPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledY, OUTPUT);
 pinMode(ledR, OUTPUT);
 Serial.begin(9600);
 }
  
  void loop()
  {
    if (contador.update())
     {
      if(contador.read() == LOW)
       {
         countPin++;
         Serial.print("Contagem: ");
         Serial.println(countPin);
         delay(100);
       }
     }
   if (ResetB.update()== LOW)
      {
       if (ResetB.read() )
        {
           countPin == 0;
         } 
      if (countPin >= 0 && countPin <11)
        {
          digitalWrite(ledG, HIGH);
         }
          else
            {
              digitalWrite(ledG, LOW);
            }
              if (countPin >=12 && countPin <22)
                {
                   digitalWrite(ledY, HIGH);
                 }
                  else
                     {
                        digitalWrite(ledY, LOW);
                      }
                if (countPin >= 23 && countPin <32)
                  {
                     digitalWrite(ledR, HIGH);
                  }
                    else
                       {
                          digitalWrite(ledR, LOW);
                        }
                    if (countPin >= 33)
                      {
                        countPin = 0;
                      }
              }
  }
