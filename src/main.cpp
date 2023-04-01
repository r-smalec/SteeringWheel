#include <Arduino.h>
#include "definitions.h"
#include "types.h"
#include "IO.h"
// #include "Mouse.h"
// #include "Keyboard.h"

#define DEBUG

IO io;

void setup() {

  #ifdef DEBUG
    Serial.begin(9600);
  #endif

  #ifdef DEBUG
    if(io.getPBoxConn())
      Serial.println("PBOX connected!");
  #endif
}

void loop() {

}
