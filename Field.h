#ifndef FIELD_H
#define FIELD_H
#include "Player.h"
class Field // класс мапа
{
    const static int ROW = 20;
    const static int COL = 20;
    char field[ROW][COL];

public:
    Field();              // конструктор
    void draw(Player &p); // метод для малювання поля
};

#endif // FIELD_H
