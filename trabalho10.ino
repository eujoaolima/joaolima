int led1 = 6;
int led2 = 7;
int led3 = 8;
int shine = 0;

void setup() {
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);


}

void loop() {
  for (shine =0; shine <= 255; shine += 5)
  {
    analogWrite(led1, shine);
    delay(50);
  }
    for (shine = 128; shine <= 255; shine += 5)
    {
      analogWrite(led2, shine);
      delay(10);
}
for (shine = 255; shine >= 0; shine -= 5)
    {
      analogWrite(led3, shine);
      delay(50);
}

}
