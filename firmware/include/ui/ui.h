#pragma once

#include <Adafruit_ST7735.h>
#include <stdint.h>

#include "game/game_state.h"

namespace ui {

class UI {
public:
    UI(int8_t tft_cs, int8_t tft_rst, int8_t tft_dc);

    void init();

    void render_screen(const game::GameState& state);

private:
    Adafruit_ST7735 tft;
};

}
