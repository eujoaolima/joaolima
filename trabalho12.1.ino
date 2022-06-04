int Sala1 = 45;
int Sala2 = 46;
int Sala3 = 22;
int Garagem = 23;
int Hall = 24;
int Cozinha = 26;
int Banheiro1 = 25;
int Banheiro2 = 31;
int Quarto1 = 29;
int Quarto2 = 30;
int SalaTV = 27;
int Closet = 28;
int BotaoTeste;
int Botao;
int Botao2;
int Botao3;
int Botao4;
int Botao5;
int Botao6;
int Botao7;
int Botao8;
int Botao9;
int Botao10;
int Botao11;
int Botao12;
// int Botao13;


void setup()
{
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
  pinMode(49, INPUT_PULLUP);
  pinMode(44 , INPUT_PULLUP);
  pinMode(43 , INPUT_PULLUP);
  pinMode(42 , INPUT_PULLUP);
  pinMode(41 , INPUT_PULLUP);
  pinMode(39 , INPUT_PULLUP);
  pinMode(38, INPUT_PULLUP);
  pinMode(40 , INPUT_PULLUP);
  pinMode(36 , INPUT_PULLUP);
  pinMode(34, INPUT_PULLUP);
  pinMode(32 , INPUT_PULLUP);
  pinMode(37 , INPUT_PULLUP);
  pinMode(35 , INPUT_PULLUP);
  // pinMode(33 , INPUT_PULLUP);
  Serial.begin(9600);
}

void loop()
{
  BotaoTeste = digitalRead(49); // Lavabo
  Botao = digitalRead(44); // Banheiro2
  Botao2 = digitalRead(43);  // Closet
  Botao3 = digitalRead(42);  // Cozinha
  Botao4 = digitalRead(41);  // Q2
  Botao5 = digitalRead(39);  // Garagem
  Botao6 = digitalRead(38);  // Hall
  Botao7 = digitalRead(40);  // S1
  Botao8 = digitalRead(36);  // Q1
  Botao9 = digitalRead(34);  // SalaTV
  Botao10 = digitalRead(32);  // S2
  Botao11 = digitalRead(37);  //S3
  Botao12 = digitalRead(35); // -----
  //Botao13 = digitalRead(33); // -----


  if (Botao8 == 0)
  {
    Serial.println("Banheiro1 Ligado!");
    digitalWrite(Banheiro1, HIGH);
    delay(5);
  }
  else
  {
    Serial.println("Banheiro1 Desligado!");
    digitalWrite(Banheiro1, LOW);
    delay(5);
  }
  if (Botao12 == 0)
  {
    Serial.println("Banheiro2 Ligado!");
    digitalWrite(Banheiro2, HIGH);
    delay(5);
  }
  else
  {
    Serial.println("Banheiro2 Desligado!");
    digitalWrite(Banheiro2, LOW);
    delay(5);
  }

  if (Botao11 == 0)
  {
    Serial.println("Closet Ligado!");
    digitalWrite(Closet, HIGH);
    delay(5);
  }
  else
  {
    Serial.println("Closet Desligado!");
    digitalWrite(Closet, LOW);
    delay(5);
  }
  if (Botao6 == 0)
  {
    Serial.println("Cozinha Ligado!");
    digitalWrite(Cozinha, HIGH);
    delay(5);
  }
  else
  {
    Serial.println("Cozinha Desligado!");
    digitalWrite(Cozinha, LOW);
    delay(5);
  }
  if (Botao4 == 0)
  {
    Serial.println("Garagem ligado!");
    digitalWrite(Garagem, HIGH);
    delay(5);
  }
  else
  {
    Serial.println("Garagem Desligado!");
    digitalWrite(Garagem, LOW);
    delay(5);
  }
  if (Botao7 == 0)
  {
    Serial.println("Hall Ligado!");
    digitalWrite(Hall, HIGH);
    delay(5);
  }
  else
  {
    Serial.println("Hall Desligado!");
    digitalWrite(Hall, LOW);
    delay(5);
  }
  if (Botao == 0)
  {
    Serial.println("Quarto2 Ligado!");
    digitalWrite(Quarto2, HIGH);
    delay(5);
  }
  else
  {
    Serial.println("Quarto1 Desligado!");
    digitalWrite(Quarto2, LOW);
    delay(5);
  }
  if (Botao9 == 0)
  {
    Serial.println("Quarto1 Ligado!");
    digitalWrite(Quarto1, HIGH);
    delay(5);
  }
  else
  {
    Serial.println("Quarto1 Desligado!");
    digitalWrite(Quarto1, LOW);
    delay(5);
  }
  if (Botao10 == 0)
  {
    Serial.println("Sala 1 Ligado!");
    digitalWrite(Sala1, HIGH);
    delay(5);
  }
  else
  {
    Serial.println("Sala 1 Desligado!");
    digitalWrite(Sala1, LOW);
    delay(5);
  }
  if (Botao2 == 0)
  {
    Serial.println("Sala 2 Ligado!");
    digitalWrite(Sala2, HIGH);
    delay(5);
  }
  else
  {
    Serial.println("Sala 2 Desligado!");
    digitalWrite(Sala2, LOW);
    delay(5);
  }
  if (Botao5 == 0)
  {
    Serial.println("Sala 3 Ligado!");
    digitalWrite(Sala3, HIGH);
    delay(5);
  }
  else
  {
    Serial.println("Sala3 Desligado!");
    digitalWrite(Sala3, LOW);
    delay(5);
  }

  if (Botao3 == 0)
  {
    Serial.println("SalaTV Ligado!");
    digitalWrite(SalaTV, HIGH);
    delay(5);
  }
  else
  {
    Serial.println("SalaTV Desligado!");
    digitalWrite(SalaTV, LOW);
    delay(5);
  }
}
