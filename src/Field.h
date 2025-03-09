#ifndef FIELD_H
#define FIELD_H
#include <vector>
#include "Player.h"
class Field
{
    std::vector<std::vector<char>> field;

public:
    Field();
    void drawField(Player &p);
    void move(char mv, Player &p);
};

#endif
