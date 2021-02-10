#include <Arduino.h>

int val = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(PB12,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //val = digitalRead(PB_12);
  if (digitalRead(PB12))
  {
      digitalWrite(LED_BUILTIN, HIGH);
  } else {
      digitalWrite(LED_BUILTIN, LOW);
  }
  
/*  delay(200);
  digitalWrite(LED_BUILTIN, LOW);
  delay(200);
  digitalWrite(LED_BUILTIN, HIGH);
*/
}