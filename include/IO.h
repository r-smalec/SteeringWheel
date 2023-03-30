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

    private:
    analog_dev _zeroPositions; // TODO single declaration
    analog_dev _positions;
    int measureAvg(int pin, int repeats, int delay_ms);
    analog_dev getPositions(void);
};

#endif