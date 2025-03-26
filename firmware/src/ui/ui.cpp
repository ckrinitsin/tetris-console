#include "ui/ui.h"
#include "game/game_state.h"

namespace ui {

UI::UI(int8_t tft_cs, int8_t tft_rst, int8_t tft_dc)
    : tft { tft_cs, tft_rst, tft_dc }
{
}

void UI::init()
{
    tft.initR(INITR_BLACKTAB);
}

void UI::render_screen(const game::GameState& state)
{
    // TODO
}

}
