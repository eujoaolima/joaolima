char dado;
int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;


void setup() {
   Serial.begin(9600);
   Serial.println("Digite 'L' ou 'D'");
   pinMode(led1, OUTPUT);
   pinMode(led2, OUTPUT);
   pinMode(led3, OUTPUT);
   pinMode(led4, OUTPUT);
   
}

void loop() {
  if (Serial.available() )
  {
    dado = Serial.read();
    switch(dado){
    
      case 'L': 
        Serial.println("Led Ligado!");
        digitalWrite(led1, HIGH);
        delay(50);
        digitalWrite(led2, HIGH);
        delay(50);
        digitalWrite(led3, HIGH);
        delay(50);
        digitalWrite(led4, HIGH);
      
      break;
      
      case 'D': 
        Serial.println("Led Desligado!");
         digitalWrite(led4, LOW);
         delay(50);
         digitalWrite(led3, LOW);
         delay(50);
         digitalWrite(led2, LOW);
         delay(50);
         digitalWrite(led1, LOW);
         delay(50);

      break;

  break;
    }
  }

}
