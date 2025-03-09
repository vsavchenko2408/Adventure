#ifndef FIELD_H
#define FIELD_H
#include <vector>
#include "Player.h"
#include "Enemy.h"
class Field
{
    std::vector<std::vector<char>> field;

public:
    Field();
    void drawField(Player &p, Enemy &e);
    void move(char mv, Player &p);
};

#endif
