#include <Arduino.h>

#include "inputs/input.h"

game::GameState state {};
ui::UI ui { /* pins */ };
inputs::Input input { /* pins */ };

void setup()
{
    state.init();
    input.init();
    ui.init();
}

void loop()
{
    delay(1);

    if (input.down_pressed()) {
        // TODO
    }

    // update game state
    // render game state

    // every second
    // automatically move down
    // update game state
    // render game state
}
