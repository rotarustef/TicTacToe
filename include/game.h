#pragma once

#include <iostream>
#include "entity.h"
//#include "../include/color.h"

constexpr auto LINE = " ---";
constexpr auto MAX_MAP = 10;

class Game
{
public:
    Game();
    void initGame(Entity player);
    void writeMap(char map[MAX_MAP][MAX_MAP]);
    void clearMap(char map[MAX_MAP][MAX_MAP]);
    void displayMap(char map[MAX_MAP][MAX_MAP]);
    ~Game();

private:
    unsigned int size = 0;
};
