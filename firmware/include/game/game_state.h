#pragma once

#include <array>
#include <stdint.h>

#include "game/blocks.h"
#include "inputs/input.h"

namespace game {

constexpr uint8_t NUM_ROWS { 20 };
constexpr uint8_t NUM_COLS { 10 };

class GameState {
public:
    GameState();

    void update(const inputs::Input& input);

    uint32_t get_score();
    uint8_t get_level();

    Block get_next_block();

    Block get_block(uint8_t row, uint8_t col);

private:
    void move_down();
    void move_right();
    void move_left();

    void rotate_right();
    void rotate_left();

    std::array<Block, NUM_ROWS * NUM_COLS> grid;
};

}
