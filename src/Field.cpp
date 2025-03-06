#include "Field.h"
#include "Player.h"
#include <iostream>

Field::Field()
{
    field.resize(20, std::vector<char>(30, ' '));
    for (size_t i = 0; i < 20; ++i)
    {
        for (size_t j = 0; j < 30; ++j)
        {
            if (i == 0 || i == 19 || j == 0 || j == 29)
            {
                field[i][j] = '#';
            }
        }
    }
}

void Field::drawField()
{
    for (size_t i = 0; i < 20; ++i)
    {
        for (size_t j = 0; j < 30; ++j)
        {
            std::cout << field[i][j];
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}