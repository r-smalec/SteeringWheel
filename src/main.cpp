#include <Arduino.h>
#include "IO.h"
// #include "Mouse.h"
// #include "Keyboard.h"

#define DEBUG

IO io;

int foo(void) {
  return 0;
}

void setup() {

  #ifdef DEBUG
    Serial.begin(9600);
  #endif
  
  io.setupIO();

  #ifdef DEBUG
    //if(io.getPBoxConn())
      Serial.println("PBOX connected!");
  #endif

  //io._buttons[SW_1].onPush = foo;
}

void loop() {
  io.switchSectionGPIO();

  Serial.print(digitalRead(SECTION0_EN));
  Serial.print(digitalRead(SECTION1_EN));
  Serial.print(digitalRead(SECTION2_EN));
  Serial.println(digitalRead(SECTION3_EN));

  Serial.print(digitalRead(SECTION0_IN));
  Serial.print(digitalRead(SECTION1_IN));
  Serial.print(digitalRead(SECTION2_IN));
  Serial.println(digitalRead(SECTION3_IN));

  Serial.print(analogRead(P_LEFT));
  Serial.println(analogRead(P_RIGHT));

  Serial.println(analogRead(S_WHEEL));

  delay(900);
  io.enLed(ON);
  delay(100);
  io.enLed(OFF);

}
