#include "Field.h"
#include "Player.h"
#include <iostream>

Field::Field()
{
    for (size_t i = 0; i < 20; ++i)
    {
        for (size_t j = 0; j < 20; ++j)
        {
            if ((i == 0 && i == 19) || (j == 0 && j == 19))
            {
                field[i][j] = '#';
            }
            else
            {
                field[i][j] = ' ';
            }
        }
    }
}

void Field::drawField()
{
    for (size_t i = 0; i < 20; ++i)
    {
        for (size_t j = 0; j < 20; ++j)
        {
            std::cout << field[i][j];
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}