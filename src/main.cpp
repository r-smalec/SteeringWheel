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

  #ifdef DEBUG
    //if(io.getPBoxConn())
      Serial.println("PBOX connected!");
  #endif

  //io._buttons[SW_1].onPush = foo;
}

void loop() {

}
