int Sala1 = 22;
int Sala2 = 46;
int Sala3 = 45;
int Garagem = 23;
int Hall = 24;
int Cozinha = 26;
int Banheiro1 = 25;
int Banheiro2 = 31;
int Quarto1 = 29;
int Quarto2 = 30;
int SalaTV = 27;
int Closet = 28;
char dado;

void setup() {
  pinMode(Sala1, OUTPUT);
  pinMode(Sala2, OUTPUT);
  pinMode(Sala3, OUTPUT);
  pinMode(SalaTV, OUTPUT);
  pinMode(Garagem, OUTPUT);
  pinMode(Hall, OUTPUT);
  pinMode(Cozinha, OUTPUT);
  pinMode(Banheiro1, OUTPUT);
  pinMode(Banheiro2, OUTPUT);
  pinMode(Quarto1, OUTPUT);
  pinMode(Quarto2, OUTPUT);
  Serial.begin(9600);
  Serial.println("Digite um comando: ");
}

void loop() {
  if (Serial.available() )
  {
    dado = Serial.read();
    switch (dado) {

      case 'A':
        Serial.println("BotaoTeste Ligado!");
        digitalWrite(Banheiro1, HIGH);
        digitalWrite(Banheiro2, HIGH);
        digitalWrite(Closet, HIGH);
        digitalWrite(Cozinha, HIGH);
        digitalWrite(Garagem, HIGH);
        digitalWrite(Hall , HIGH);
        digitalWrite(Quarto1 , HIGH);
        digitalWrite(Quarto2 , HIGH);
        digitalWrite(Sala1 , HIGH);
        digitalWrite(Sala2 , HIGH);
        digitalWrite(Sala3 , HIGH);
        digitalWrite(SalaTV , HIGH);
        delay(50);


        break;

      case 'a':
        Serial.println("BotaoTeste Desligado!");
        digitalWrite(Banheiro1, LOW);
        digitalWrite(Banheiro2, LOW);
        digitalWrite(Closet, LOW);
        digitalWrite(Cozinha, LOW);
        digitalWrite(Garagem, LOW);
        digitalWrite(Hall , LOW);
        digitalWrite(Quarto1 , LOW);
        digitalWrite(Quarto2 , LOW);
        digitalWrite(Sala1 , LOW);
        digitalWrite(Sala2 , LOW);
        digitalWrite(Sala3 , LOW);
        digitalWrite(SalaTV , LOW);
        delay(50);

        break;
      case 'B':
        Serial.println("Banheiro1 Ligado!");
        digitalWrite(Banheiro1, HIGH);
        delay(50);


        break;

      case 'b':
        Serial.println("Banheiro1 Desligado!");
        digitalWrite(Banheiro1, LOW);
        delay(50);

        break;
      case 'C':
        Serial.println("Banheiro2 Ligado!");
        digitalWrite(Banheiro2, HIGH);
        delay(50);

        break;

      case 'c':
        Serial.println("Banheiro2 Desligado!");
        digitalWrite(Banheiro2, LOW);
        delay(50);

        break;
      case 'D':
        Serial.println("Closet Ligado!");
        digitalWrite(Closet, HIGH);
        delay(50);

        break;
      case 'd':
        Serial.println("Closet Desligado!");
        digitalWrite(Closet, LOW);
        delay(50);

        break;
      case 'E':
        Serial.println("Cozinha Ligado!");
        digitalWrite(Cozinha, HIGH);
        delay(50);

        break;
      case 'e':
        Serial.println("Cozinha Desligado!");
        digitalWrite(Cozinha, LOW);
        delay(50);

        break;
      case 'F':
        Serial.println("Garagem ligado!");
        digitalWrite(Garagem, HIGH);
        delay(50);

        break;
      case 'f':
        Serial.println("Garagem Desligado!");
        digitalWrite(Garagem, LOW);
        delay(50);

        break;
      case 'G':
        Serial.println("Hall Ligado!");
        digitalWrite(Hall, HIGH);
        delay(50);

        break;
      case 'g':
        Serial.println("Hall Desligado!");
        digitalWrite(Hall, LOW);
        delay(50);

        break;
      case 'H':
        Serial.println("Quarto1 Ligado!");
        digitalWrite(Quarto1, HIGH);
        delay(50);

        break;
      case 'h':
        Serial.println("Quarto1 Desligado!");
        digitalWrite(Quarto1, LOW);
        delay(50);

        break;
      case 'I':
        Serial.println("Quarto2 Ligado!");
        digitalWrite(Quarto2, HIGH);
        delay(50);

        break;
      case 'i':
        Serial.println("Quarto2 Desligado!");
        digitalWrite(Quarto2, LOW);
        delay(50);

        break;
      case 'J':
        Serial.println("Sala 1 Ligado!");
        digitalWrite(Sala1, HIGH);
        delay(50);

        break;
      case 'j':
        Serial.println("Sala 1 Desligado!");
        digitalWrite(Sala1, LOW);
        delay(50);

        break;
      case 'K':
        Serial.println("Sala 2 Ligado!");
        digitalWrite(Sala2, HIGH);
        delay(50);

        break;
      case 'k':
        Serial.println("Sala 2 Desligado!");
        digitalWrite(Sala2, LOW);
        delay(50);

        break;
      case 'L':
        Serial.println("Sala 3 Ligado!");
        digitalWrite(Sala3, HIGH);
        delay(50);

        break;
      case 'l':
        Serial.println("Sala3 Desligado!");
        digitalWrite(Sala3, LOW);
        delay(50);

        break;
      case 'M':
        Serial.println("SalaTV Ligado!");
        digitalWrite(SalaTV, HIGH);
        delay(50);

        break;
      case 'm':
        Serial.println("SalaTV Desligado!");
        digitalWrite(SalaTV, LOW);
        delay(50);

        break;


        break;
    }
  }

}
