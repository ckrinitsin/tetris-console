#pragma once

#include <stdint.h>

namespace inputs {

class Button {
public:
    Button(uint8_t pin);

    void init();

    bool is_pressed();

private:
    uint8_t pin;
};

}
