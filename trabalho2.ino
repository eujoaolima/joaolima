int led1 = 0;
int led2 = 1;
int led3 = 2;


void setup() {
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
}

void loop() {
digitalWrite(led1, HIGH);
delay(350);
digitalWrite(led2, HIGH);
digitalWrite(led1, LOW);
delay(350);
digitalWrite(led3, HIGH);
digitalWrite(led2, LOW);
delay(350);
digitalWrite(led3, LOW);
}
