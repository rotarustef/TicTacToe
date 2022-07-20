#include "../include/game.h"


Game::Game()
{
}

void Game::initGame(Entity player) {

    unsigned int pl = 0;
    std::cout << "Enter the number of players(1/2): ";
    std::cin >> pl;

    std::cout << "Enter the number of rows(def.3): ";
    std::cin >> size;

    // limiting the game
    if (size > MAX_MAP || size < 3)
        size = 3;

    if (pl == 1) {
        player.setBotFlag(0);
        player.setInfo();
    }
    else {
        player.setBotFlag(1);
        player.setInfo();
    }
}


void Game::writeMap(char map[MAX_MAP][MAX_MAP]) {

    displayMap(map);

    unsigned int place;
    std::cout << "Where to place? ";
    std::cin >> place;

    unsigned int Y = size - (place / 10);  //1
    unsigned int X = (place % 10) - 1;  //2

    for (unsigned int i = 0; i < size; i++) {
        for (unsigned int j = 0; j < size; j++) {
            if (i == Y && j == X) {
                map[i][j] = 'X';
            }
        }
    }
    displayMap(map);
}



void Game::clearMap(char map[MAX_MAP][MAX_MAP]) {
    for (unsigned int i = 0; i < size; i++) {
        for (unsigned int j = 0; j < size; j++) {
            map[i][j] = ' ';
        }
    }
}



void Game::displayMap(char map[MAX_MAP][MAX_MAP]) {

    std::cout << "\n";
    // resize the nr of rows
    for (unsigned int i = 0; i < size; i++) {
        if (i == 0)
            std::cout << "   ";
        std::cout << LINE;
    }
    std::cout << "\n";

    //print every character per row
    for (unsigned int i = 0; i < size; i++) {
        if ((size - i) == 10)
            std::cout << (size - i) << " ";
        else
            std::cout << (size - i) << "  ";


        for (unsigned int j = 0; j < size; j++)
            std::cout << "| \x1b[32m" << map[i][j] << "\x1b[0m ";
        
        std::cout << "|\n";

        // resize the nr of rows
        for (unsigned int i = 0; i < size; i++) {
            if (i == 0)
                std::cout << "   ";
            std::cout << LINE;
        }
        std::cout << "\n";
    }

    std::cout << "     ";
    for (unsigned int i = 1; i <= size; i++)
        std::cout << i << "   ";
    std::cout << "\n";
}


Game::~Game()
{
}














    /*
    char aa[3][3] = {{"00","01","02"},
                    {"10","11","12"},
                    {"20","21","22"}};

    char bb[3][3] = {{"31","32","33"},
                     {"21","22","23"},
                     {"11","12","13"}};
    


    char map4x4[4][4] = {{'00','01','02','03'},
                        {'10','11','12','13'},
                        {'20','21','22','23'},
                        {'30','31','32','33'}};

    char map4x4[4][4] = {{'41','42','43','44'},
                        {'31','32','33','34'},
                        {'21','22','23','24'},
                        {'11','12','13','14'}};
    */

