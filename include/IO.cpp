#include <Arduino.h>
#include "IO.h"
#include "definitions.h"

IO::IO() {
    this->setupIO();
    this->enLed(enable::OFF);
    this->enPBox(enable::ON);
    this->_zeroPositions.s_wheel = measureAvg(S_WHEEL, 10, 10);

    if(this->getPBoxConn()) {
        this->_zeroPositions.p_left = measureAvg(P_RIGHT, 10, 10);
        this->_zeroPositions.p_right = measureAvg(P_LEFT, 10, 10);
    }
    else {
        this->_zeroPositions.p_left = 0;
        this->_zeroPositions.p_right = 0;
    }
    this->enLed(enable::ON);
}

IO::~IO() {}

void IO::setupIO(void) {

    pinMode(PBOX_WHEEL_EN, OUTPUT);
    pinMode(PBOX_CONN, INPUT);
    pinMode(P_RIGHT, INPUT);
    pinMode(P_LEFT, INPUT);
    pinMode(S_WHEEL, INPUT);
    pinMode(WHEEL_LED, OUTPUT);
    pinMode(SECTION1_IN, INPUT);
    pinMode(SECTION2_IN, INPUT);
    pinMode(SECTION3_IN, INPUT);
    pinMode(SECTION4_IN, INPUT);
    pinMode(SECTION1_EN, OUTPUT);
    pinMode(SECTION2_EN, OUTPUT);
    pinMode(SECTION3_EN, OUTPUT);
    pinMode(SECTION4_EN, OUTPUT);
    pinMode(VIBR_BIG, OUTPUT);
    pinMode(VIBR_LITTLE, OUTPUT);
}

void IO::enLed(enable en) {
    digitalWrite(WHEEL_LED, en);
}

void IO::enPBox(enable en) {
    digitalWrite(PBOX_WHEEL_EN, en);
}

bool IO::getPBoxConn(void) {
    return digitalRead(PBOX_CONN);
}

int IO::measureAvg(int pin, int repeats = 3, int delay_ms = 5) {
    int avg = 0;
    int measure;
    int i;
    for(i = 0; i < repeats; i++) {
        delay(delay_ms);
        measure = analogRead(pin);
        if(avg > INT_MAX - measure)
            avg += measure;
        else
            break;
    }
    return avg / (i + 1);
}

analog_dev IO::getPositions(void) {
    
    _positions.s_wheel = measureAvg(S_WHEEL);
    _positions.p_left = measureAvg(P_LEFT);
    _positions.p_right = measureAvg(P_RIGHT);

    return _positions;
}