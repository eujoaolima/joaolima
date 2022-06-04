int addcount;
int button;
int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;

void setup() {
  pinMode(50,INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  button = digitalRead(50);
  if (button == 0)
    {
      addcount++;
    }
    Serial.println("contagem: ");
    Serial.println(addcount, DEC);
    delay(100);
    if (addcount == 50)
    {
      digitalWrite(led1, HIGH);
    }
    if (addcount == 100)
    {
      digitalWrite(led2, HIGH);
    }
    if (addcount == 150)
    {
      digitalWrite(led3, HIGH);
    }if (addcount == 200)
    {
      digitalWrite(led4, HIGH);
    }
    if (addcount == 300)
    {
      digitalWrite(led4, LOW);
      delay(150);
      digitalWrite(led3, LOW);
      delay(150);
      digitalWrite(led2, LOW);
      delay(150);
      digitalWrite(led1, LOW);
      delay(150);
      
    }
}
