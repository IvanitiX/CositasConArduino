/*
  Proyecto 1. Encendido de LEDs aleatorio
  Autor: Iván V.R // IvanitiX
*/

// Asignar pines:
int led1Pin = 4;            // El numero del pin del LED1
int led2Pin = 5;            // El numero del pin del LED2
int led3Pin = 6;			// El numero del pin del LED2

void setup() {

  // Inicializa los pin de los LED como salida:

  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(led3Pin, OUTPUT);

} //Final setup

void loop() {

  int aleatorio = random(0,7);

  switch(aleatorio){

  case 0: //Los tres LED apagados

  	digitalWrite(led1Pin, LOW);   
  	digitalWrite(led2Pin, LOW);
  	digitalWrite(led3Pin, LOW);
  	delay(50);   
  	break;

  case 1: //El LED1 encendido y el resto apagados

  	digitalWrite(led1Pin, HIGH);
  	digitalWrite(led2Pin, LOW);
  	digitalWrite(led3Pin, LOW);
  	delay(50);
  	break;

  case 2: //El LED2 encendido y el resto apagados

  	digitalWrite(led1Pin, LOW);
  	digitalWrite(led2Pin, HIGH);
  	digitalWrite(led3Pin, LOW);
  	delay(50);
  	break;

  case 3: //El LED3 encendido y el resto apagados

  	digitalWrite(led1Pin, LOW);
  	digitalWrite(led2Pin, LOW);
  	digitalWrite(led3Pin, HIGH);
  	delay(50);
  	break;

  case 4: //Los LED1 y LED2 encendidos y el otro apagado

  	digitalWrite(led1Pin, HIGH);
  	digitalWrite(led2Pin, HIGH);
  	digitalWrite(led3Pin, LOW);
  	delay(50);
  	break;

  case 5: //Los LED1 y LED3 encendidos y el otro apagado 

digitalWrite(led1Pin, HIGH);
digitalWrite(led2Pin, LOW);
digitalWrite(led3Pin, HIGH);
delay(50);
break;

  case 6: //Los LED2 y LED3 encendidos y el otro apagado

  	digitalWrite(led1Pin, LOW);
  	digitalWrite(led2Pin, HIGH);
  	digitalWrite(led3Pin, HIGH);
  	delay(50);
  	break;

  case 7: //Los tres LED encendidos

  	digitalWrite(led1Pin, HIGH);
  	digitalWrite(led2Pin, HIGH);
  	digitalWrite(led3Pin, HIGH);
  	delay(50);
  	break;

  } //Final switch

} //Final loop
