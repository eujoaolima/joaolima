int led1 = 6; // azul
int led2 = 7; // verde
int led3 = 8; // vermelho
char dado;
int R;
int G;
int B;
void setup() {
   Serial.begin(9600);
   Serial.println("Digite 'L'/'G','B'/'T' ou 'Q'/'I'");
   pinMode(led1, OUTPUT);
   pinMode(led2, OUTPUT);
   pinMode(led3, OUTPUT);
  
   
}

void loop() {  
  R = random (0, 255);
  G = random (0, 255);
  B = random (0, 255);
  if (Serial.available() )
  {
    dado = Serial.read();
    switch(dado){
    
      case 'L': 
        Serial.println("Led LG Ligado!");
        digitalWrite(led1, R);
        delay(50);

      
      break;
      
         case 'G': 
            Serial.println("Led LG Desligado!");
            digitalWrite(led1, LOW);
            delay(50);

      break;
            case 'B': 
              Serial.println("Led BT Ligado!");
              digitalWrite(led2, G);
              delay(50);
             
      
      break;
      
            case 'T': 
              Serial.println("Led BT Desligado!");
              digitalWrite(led2, LOW);
              delay(50);

      break;
           case 'Q': 
              Serial.println("Led QI Ligado!");
              digitalWrite(led3, B);
              delay(50);
      
      break;
      
              case 'I': 
                Serial.println("Led QI Desligado!");
                digitalWrite(led3, LOW);
                delay(50);

      break;

  break;
    }
  }

}
