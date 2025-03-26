#pragma once

#include "inputs/button.h"

namespace inputs {

class Input {
public:
    Input(
        uint8_t down_pin,
        uint8_t up_pin,
        uint8_t right_pin,
        uint8_t left_pin,
        uint8_t a_pin,
        uint8_t b_pin,
        uint8_t pause_pin);

    void init();

    bool down_pressed();
    bool up_pressed();
    bool right_pressed();
    bool left_pressed();
    bool a_pressed();
    bool b_pressed();
    bool pause_pressed();

private:
    Button down;
    Button up;
    Button left;
    Button right;
    Button a;
    Button b;
    Button pause;
};

}
