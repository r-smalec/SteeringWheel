#ifndef TYPES_H
#define TYPES_H

typedef enum {
  ON,
  OFF
} enable;

typedef struct {
  int p_left;
  int p_right;
  int s_wheel;
} analog_dev;

typedef enum{
  SW_1,
  SW_2,
  SW_3,
  SW_4,
  SW_7,
  SW_8,
  SW_9,
  SW_10,
  SW_11,
  SW_12,
  R_arrow,
  L_arrow,
  U_arrow,
  D_arrow,
  R_paddle,
  L_paddle,
  buttonsCount
} buttons_names;

class buttons {
    public:
    enable state;
    enable prevState;
    //onPush(void);
    //onRelease(void);
    private:

};

#endif