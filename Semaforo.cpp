int pinLed1 = 4; /*pinLed = pino do led e o número 4 é a porta onde o fio está conectado*/
int pinLed2 = 2;
int pinLed3 = 3;

void setup()
{
  pinMode(pinLed1, OUTPUT); /*pinMode = modo do pino // Output = O arduino envia dados/ Saída de dados*/
  pinMode(pinLed2, OUTPUT);
  pinMode(pinLed3, OUTPUT);

  Serial.begin (9600); /*9600 = numeração padrão para definir a velocidade// serial.begin = serve para ativar o monitor serial*/
  Serial.println ("Arduino Inicializado");

}

void loop()
{
  Serial.println ("LED Vermelho Ligado");
  digitalWrite(pinLed1, HIGH);

  Serial.println ("LED Amarelho Ligado");
  digitalWrite(pinLed2, HIGH);

  Serial.println ("LED Verde Ligado");
  digitalWrite(pinLed3, HIGH);

  delay(2000); /*2000 equivale a 2segundos*/

  Serial.println ("LED Vermelho Desligado");
  digitalWrite(pinLed1, HIGH);
  Serial.println ("LED Amarelo Desligado");
  digitalWrite(pinLed2, LOW);

  Serial.println ("LED Verde Desligado");
  digitalWrite(pinLed3, LOW);

  delay(2000);

  Serial.println ("LED Vermelho Desligado");
  digitalWrite(pinLed1, LOW);
  Serial.println ("LED Amarelo Ligado");
  digitalWrite(pinLed3, HIGH);
  Serial.println ("LED Verde Desligado");
  digitalWrite(pinLed2, LOW);

  delay(2000);

  Serial.println ("LED Vermelho Desligado");
  digitalWrite(pinLed1, LOW);
  Serial.println ("LED Amarelo Desligado");
  digitalWrite(pinLed3, LOW);
  Serial.println ("LED Verde Ligado");
  digitalWrite(pinLed2, HIGH);

  delay(2000);

}