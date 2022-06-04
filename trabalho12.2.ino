int Sala1 = 22;
int Sala2 = 46;
int Sala3 = 45;
int Garagem = 23;
int Hall = 26; 
int Cozinha = 24;
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
  Serial.begin(9600);
}

void loop()
{
  BotaoTeste = digitalRead(49);
  Botao = digitalRead(44); // S1
  Botao2 = digitalRead(43);  // S2
  Botao3 = digitalRead(42);  // S3
  Botao4 = digitalRead(41);  // Garagem
  Botao5 = digitalRead(39);  // Cozinha
  Botao6 = digitalRead(38);  // Lavabo (B1)
  Botao7 = digitalRead(40);  // Hall
  Botao8 = digitalRead(36);  // Sala TV
  Botao9 = digitalRead(34);  // Suite (Q2)
  Botao10 = digitalRead(32);  // Closet
  Botao11 = digitalRead(37);  // Q1
  Botao12 = digitalRead(35); // B2

  if (Botao == 0) // Está ligando S2
  {
    digitalWrite(Sala1, HIGH);
  }
  else
  {
    digitalWrite(Sala1, LOW);
  }
  if (Botao2 == 0) // Está ligando Hall
  {
    digitalWrite(Sala2, HIGH);
  }
  else
  {
    digitalWrite(Sala2, LOW);
  }
  if (Botao3 == 0) // Está ligando Closet
  {
    digitalWrite(Sala3, HIGH);
  }
  else
  {
    digitalWrite(Sala3, LOW);
  }
  if (Botao4 == 0) // Está ligando Garagem, OK
  {
    digitalWrite(Garagem , HIGH);
  }
  else
  {
    digitalWrite(Garagem, LOW);
  }
  if (Botao5 == 0)
  {
    digitalWrite(Cozinha, HIGH);
  }
  else
  {
    digitalWrite(Cozinha, LOW);
  }
  if (Botao6 == 0)
  {
    digitalWrite(Banheiro1, HIGH);
  }
  else
  {
    digitalWrite(Banheiro1, LOW);
  }
  if (Botao7 == 0)
  {
    digitalWrite(Hall, HIGH);
  }
  else
  {
    digitalWrite(Hall, LOW);
  }
  if (Botao8 == 0)
  {
    digitalWrite(SalaTV, HIGH);
  }
  else
  {
    digitalWrite(SalaTV, LOW);
  }
  if (Botao9 == 0)
  {
    digitalWrite(Quarto1, HIGH);
  }
  else
  {
    digitalWrite(Quarto1, LOW);
  }
  if (Botao10 == 0)
  {
    digitalWrite(Closet, HIGH);
  }
  else
  {
    digitalWrite(Closet, LOW);
  }
  if (Botao11 == 0) // Está ligando B2, OK
  {
    digitalWrite(Quarto2, HIGH);
  }
  else
  {
    digitalWrite(Quarto2, LOW);
  }
  if (Botao12 == 0)
  {
    digitalWrite(Banheiro2, HIGH);
  }
  else
  {
    digitalWrite(Banheiro2, LOW);
  }
}
