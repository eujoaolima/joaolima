char dado;

void setup() {
   Serial.begin(9600);
   Serial.println("Digite um número");

}

void loop() {
  if (Serial.available() )
  {
    dado = Serial.read();
    Serial.print("Você digitou o número: ");
    Serial.println(dado);
    Serial.print("Em hexadecimal: "); 
    Serial.println(dado, HEX);
    Serial.print("Em número binário: ");
    Serial.println(dado, BIN);
  }

}
