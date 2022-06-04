int buttom = 52;
int buttomState;
int buttomLastState = LOW;
int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;
int ledState = HIGH;
unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;

void setup() {
pinMode(buttom, INPUT);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
digitalWrite(led1, ledState);
digitalWrite(led2, ledState);
digitalWrite(led3, ledState);
digitalWrite(led4, ledState);
}

void loop() {
   int reading = digitalRead(buttom);

   if (reading != buttomLastState)
   {
    lastDebounceTime = millis();
   }
   if ((millis() - lastDebounceTime) > debounceDelay)
   {
   
   if (reading != buttomState)
   {
      buttomState = reading;
   

    if (buttomState == HIGH);
    {
      ledState = !ledState;
      }
    }
  }
  digitalWrite(led1, ledState);
  delay(50);
  digitalWrite(led2, ledState);
  delay(50);
  digitalWrite(led3, ledState);
  delay(50);
  digitalWrite(led4, ledState);
  delay(50);             

  buttomLastState = reading;
 }
   






   
