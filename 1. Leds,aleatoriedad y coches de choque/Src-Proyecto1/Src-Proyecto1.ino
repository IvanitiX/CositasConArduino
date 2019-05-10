/*
  Proyecto 1. Encendido de LEDs aleatorio
  Iván V.R // IvanitiX
*/

// set pin numbers:
int led1Pin = 4;            // the number of the LED1 pin
int led2Pin = 5;            // the number of the LED2 pin
int led3Pin = 6;

void setup() {
  // initialize the LED pin as an output:
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(led3Pin, OUTPUT);
}

void loop() {
  int aleatorio = random(0,7);

  switch(aleatorio){
  case 0: 
  digitalWrite(led1Pin, LOW);   // turn the LED1 on
  digitalWrite(led2Pin, LOW);    // turn the LED2 off
  digitalWrite(led3Pin, LOW) ;
  delay(50);   
  break;

  case 1:
  digitalWrite(led1Pin, HIGH);   // turn the LED1 on
  digitalWrite(led2Pin, LOW);    // turn the LED2 off
  digitalWrite(led3Pin, LOW) ;
  delay(50);                   // wait for a second
  break;

  case 2:
  digitalWrite(led1Pin, LOW);    // turn the LED1 off
  digitalWrite(led2Pin, HIGH);   // turn the LED2 on
  digitalWrite(led3Pin, LOW);
  delay(50);                   // wait for a second
  break;

  case 3:
  digitalWrite(led1Pin, LOW);    // turn the LED1 off
  digitalWrite(led2Pin, LOW);   // turn the LED2 on
  digitalWrite(led3Pin, HIGH);
  delay(50);                   // wait for a second
  break;

  case 4:
   digitalWrite(led1Pin, HIGH);    // turn the LED1 off
  digitalWrite(led2Pin, HIGH);   // turn the LED2 on
  digitalWrite(led3Pin, LOW);
  delay(50);                   // wait for a second
  break;

  case 5:
    digitalWrite(led1Pin, HIGH);    // turn the LED1 off
  digitalWrite(led2Pin, LOW);   // turn the LED2 on
  digitalWrite(led3Pin, HIGH);
  delay(50);                   // wait for a second
  break;

  case 6:
    digitalWrite(led1Pin, LOW);    // turn the LED1 off
  digitalWrite(led2Pin, HIGH);   // turn the LED2 on
  digitalWrite(led3Pin, HIGH);
  delay(50);                   // wait for a second
  break;

  case 7:
    digitalWrite(led1Pin, HIGH);    // turn the LED1 off
  digitalWrite(led2Pin, HIGH);   // turn the LED2 on
  digitalWrite(led3Pin, HIGH);
  delay(50);                   // wait for a second
  break;
  }
}
