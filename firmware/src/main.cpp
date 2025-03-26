#include <Arduino.h>

#include "game/game_state.h"
#include "inputs/input.h"
#include "ui/ui.h"

game::GameState state {};
ui::UI screen { 0, 0, 0 }; // TODO: add correct pins
inputs::Input input { 0, 0, 0, 0, 0, 0, 0 }; // TODO: add correct pins

void setup()
{
    input.init();
    screen.init();
}

void loop()
{
    delay(1);
    state.update(input);
    screen.render_screen(state);
}
