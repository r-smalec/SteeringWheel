#ifndef IO_H
#define IO_H

#include "types.h"
#include <limits.h>

class IO {

    public:
    IO();
    ~IO() {};
    void setupIO(void);
    void enLed(enable en);
    void enPBox(enable en);
    bool getPBoxConn(void);
    void switchSectionGPIO(void);

    private:
    analog_dev _zeroPositions;
    analog_dev _positions;
    static const int _secNo = 4;
    enable _sectionEn[_secNo];
    enable _sectionIn[_secNo];
    buttons _buttons[buttons_names::buttonsCount];
    int measureAvg(int pin, int repeats, int delay_ms);
    analog_dev getPositions(void);
    void decodeGPIO(void);
};

#endif