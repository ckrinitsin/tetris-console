#include "inputs/button.h"

namespace inputs {

Button::Button(uint8_t pin)
    : pin { pin }
{
}

void Button::init() {}

bool Button::is_pressed()
{
    // TODO
    return false;
}

}
