#ifndef IO_H
#define IO_H
#include "definitions.h"
#include "types.h"
#include <limits.h>

class IO {

    public:
    IO();
    void setupIO(void);
    void enLed(enable en);
    void enPBox(enable en);
    bool getPBoxConn(void);
    void switchSectionGPIO(void);
    buttons _buttons[buttons_names::buttonsCount];
    analog_dev getPositions(void);
    analog_dev getZeroPositions(void);
    int s_wheel(void);
    int p_left(void);
    int p_right(void);

    private:
    analog_dev _zeroPositions;
    analog_dev _positions;
    static const int _secNo = 4;
    enable _sectionEn[_secNo];
    enable _sectionIn[_secNo];
    int measureAvg(int pin, int repeats, int delay_ms);
    void decodeGPIO(void);
};

#endif