#ifndef IO_H
#define IO_H

#include "types.h"
#include <limits.h>

class IO {

public:
    IO();
    ~IO();
    void setupIO(void);
    void enLed(enable en);
    void enPBox(enable en);
    bool getPBoxConn(void);
    void switchSectionGPIO(void);

    private:
    analog_dev _zeroPositions;
    analog_dev _positions;
    int measureAvg(int pin, int repeats, int delay_ms);
    analog_dev getPositions(void);
    int sec[] = {0, 0, 0, 0};
};

#endif