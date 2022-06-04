int botao;
int botao2;
int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;
int botaoON1;
int botaoON2;

void setup() {
pinMode(50, INPUT);
pinMode(52, INPUT);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);

}

void loop() 
{
  botao = digitalRead(52);
  botao2 = digitalRead(50);

  if (botao == 0)
  {
    botaoON1 = 1;
    botaoON2 = 0;
  }
    if (botao2 == 0)
    {
      botaoON1 = 0;
      botaoON2 = 1;
    }
      if (botaoON1 == 1) up();
      if (botaoON2 == 1) down();
    }
