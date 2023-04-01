#ifndef DEFINITIONS_H
#define DEFINITIONS_H

#define VIBR_BIG 2      // Enable big vibration motor
#define VIBR_LITTLE 3   // Enable little vibration motor
#define SECTION0_EN 10  // Enable 1_sw, 2_sw, 8_sw, R_paddle
#define SECTION1_EN 14  // Enable 3_sw, 4_sw, D_arrow, L_paddle
#define SECTION2_EN 15  // Enable 7_sw, U_arrow, R_arrow, L_arrow
#define SECTION3_EN 16  // Enable 9_sw, 10_sw, 11_sw, 12_sw
#define SECTION0_IN 4   // Read 1_sw, 3_sw, 10_sw, U_arrow
#define SECTION1_IN 5   // Read 2_sw, 11_sw, L_arrow, D_arrow
#define SECTION2_IN 6   // Read 4_sw, 7_sw, 8_sw, 12_sw
#define SECTION3_IN 7   // Read 9_sw, R_arrow, R_paddle, L_paddle
#define PBOX_WHEEL_EN 9 // Enable peddalbox and steering wheel analog read
#define PBOX_CONN 8     // Check if peddalbox is connected
#define P_RIGHT A2      // Right peddal position read
#define P_LEFT A0       // Left pedal position read
#define S_WHEEL A1      // Steering wheel position read
#define WHEEL_LED A3          // LED on steering wheel

#endif