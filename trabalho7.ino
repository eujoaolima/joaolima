int led1 = 8;
int led2 = 2;
int led3 = 4;
int sensor = 6;
int addcount;
void setup() {
 pinMode(led1, OUTPUT);
 pinMode(led2, OUTPUT);
 pinMode(led3, OUTPUT);
 pinMode(sensor, INPUT);
 Serial.begin(9600);
}

void loop() {
  sensor = digitalRead(6);
  if (sensor == 0)
  {
    addcount++;
  }
    Serial.println("contagem: ");
    Serial.println(addcount, DEC);
    delay(25);
    if (addcount >= 0 && addcount <11)
    {
      digitalWrite(led1, HIGH);
    }
  else
    {
      digitalWrite(led1, LOW);
    }
      if (addcount >=12 && addcount <22)
      {
      digitalWrite(led2, HIGH);
      }
      else
    {
      digitalWrite(led2, LOW);
    }
        if (addcount >= 23 && addcount <32)
          {
          digitalWrite(led3, HIGH);
          }
          else
          {
          digitalWrite(led3, LOW);
          }
        if (addcount >= 33)
        {
          addcount = 0;
        }
}
