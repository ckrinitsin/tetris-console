#include "inputs/input.h"

namespace inputs {

Input::Input(
    uint8_t down_pin,
    uint8_t up_pin,
    uint8_t right_pin,
    uint8_t left_pin,
    uint8_t a_pin,
    uint8_t b_pin,
    uint8_t pause_pin)
    : down { down_pin }
    , up { up_pin }
    , right { right_pin }
    , left { left_pin }
    , a { a_pin }
    , b { b_pin }
    , pause { pause_pin }
{
}

void Input::init()
{
    down.init();
    up.init();
    left.init();
    right.init();
    a.init();
    b.init();
    pause.init();
}

bool Input::down_pressed()
{
    return down.is_pressed();
}

bool Input::up_pressed()
{
    return up.is_pressed();
}

bool Input::left_pressed()
{
    return left.is_pressed();
}

bool Input::right_pressed()
{
    return right.is_pressed();
}

bool Input::a_pressed()
{
    return a.is_pressed();
}

bool Input::b_pressed()
{
    return b.is_pressed();
}

bool Input::pause_pressed()
{
    return pause.is_pressed();
}

}
