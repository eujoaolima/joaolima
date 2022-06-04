int led1 = 6;
int led2 = 7;
int led3 = 8;
int R;
int G;
int B;

void setup() {
 pinMode(led1, OUTPUT);
 pinMode(led2, OUTPUT);
 pinMode(led3, OUTPUT);
}

void loop() {
  R = random (0, 255);
  G = random (0, 255);
  B = random (0, 255);
analogWrite(led1, R);
analogWrite(led2, G);
analogWrite(led3, B);
delay(50);
}
