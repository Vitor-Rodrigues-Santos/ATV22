//Declarando as variáveis de cada LED
int portLed1 = 10;
int portLed2 = 11;
int portLed3 = 12;

//Define cada LED como OUTPUT
void setup()
{
  pinMode(portLed1, OUTPUT);
  pinMode (portLed2, OUTPUT);
  pinMode (portLed3, OUTPUT);
}

//Deixa o código repetir em loop
void loop()
{
  digitalWrite(portLed1, HIGH); //Liga o LED
  delay(1000); //Espera de 1 segundo
  digitalWrite(portLed1, LOW); //Apaga o LED
  delay(1000); //Espera de 1 segundo
  
  digitalWrite(portLed2, HIGH); //Liga o LED
  delay(500); //Espera de 0,5 segundos
  digitalWrite(portLed2, LOW); //Apaga o LED
  delay(500); //Espera de 0,5 segundos
  
  digitalWrite(portLed3, HIGH); //Liga o LED
  delay(1000); //Espera de 1 segundo
  digitalWrite(portLed3, LOW); //Apaga o LED
  delay(1000); //Espera de 1 segundo
}