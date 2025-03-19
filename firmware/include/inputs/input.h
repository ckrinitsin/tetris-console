#pragma once

#include "inputs/button.h"

namespace inputs {

class Input {
public:
    Input(/* pins */);

    void init();

    bool down_pressed();
    bool up_pressed();
    bool right_pressed();
    bool left_pressed();
    bool a_pressed();
    bool b_pressed();

private:
};

}
