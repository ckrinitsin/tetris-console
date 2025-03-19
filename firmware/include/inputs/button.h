#pragma once

#include <cstdint>

namespace inputs {

class Button {
public:
    Button(uint8_t pin);

    bool is_pressed();

private:
};

}
