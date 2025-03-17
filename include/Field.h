#ifndef FIELD_H
#define FIELD_H
#include <vector>
#include "../include/Player.h"
#include "../include/Enemy.h"
class Field
{

    std::vector<std::vector<char>> field;
    const int COL = 30;
    const int ROW = 20;

public:
    Field();
    void drawField(Player &p, Enemy &e1, Enemy &e2, Enemy &e3);
    void move(char mv, Player &p);
};

#endif
