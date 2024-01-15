#include <Arduino.h>
#include "IO.h"
// #include "Mouse.h"
// #include "Keyboard.h"

#define DEBUG

IO io;

void setup() {

  #ifdef DEBUG
    Serial.begin(9600);
    delay(2000);
  #endif

  io.getZeroPositions();
  
  #ifdef DEBUG
    if(io.getPBoxConn())
      Serial.println("PBOX connected!");
  #endif

  //io._buttons[SW_1].onPush = foo;
}

void loop() {
  analog_dev an;
  io.switchSectionGPIO();
  an = io.getPositions();
  #ifdef DEBUG
    Serial.print("Sections en ");
    Serial.print(digitalRead(SECTION0_EN));
    Serial.print(digitalRead(SECTION1_EN));
    Serial.print(digitalRead(SECTION2_EN));
    Serial.println(digitalRead(SECTION3_EN));

    Serial.print("Sections in ");
    Serial.print(digitalRead(SECTION0_IN));
    Serial.print(digitalRead(SECTION1_IN));
    Serial.print(digitalRead(SECTION2_IN));
    Serial.println(digitalRead(SECTION3_IN));
    
    Serial.println("S wheel / pedals l/r");
    Serial.print(io.s_wheel());
    Serial.print(" ");
    Serial.print(io.p_left());
    Serial.print(" ");
    Serial.println(io.p_right());
  #endif

  delay(900);
  io.enLed(ON);
  delay(100);
  io.enLed(OFF);

}
