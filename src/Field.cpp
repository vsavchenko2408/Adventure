#include "Field.h"
#include "Player.h"
#include "Enemy.h"
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

void Field::drawField(Player &p, Enemy &e)
{
    for (size_t i = 0; i < 20; ++i)
    {
        for (size_t j = 0; j < 30; ++j)
        {
            if (p.x == i && p.y == j)
            {
                std::cout << 'P';
            }
            else if (e.x == i && e.y == j)
            {
                std::cout << 'E';
            }
            else if (p.x == e.x && p.y == e.y)
            {
                p.damage();
            }
            else
            {
                std::cout << field[i][j];
            }
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void Field::move(char mv, Player &p)
{
    switch (mv)
    {
    case 'w':
        if (p.x > 1)
        {
            p.x--;
            break;
        }
        else
        {
            break;
        }
    case 's':
        if (p.x < 18)
        {
            p.x++;
            break;
        }
        else
        {
            break;
        }
    case 'a':
        if (p.y > 1)
        {
            p.y--;
            break;
        }
        else
        {
            break;
        }
    case 'd':
        if (p.y < 28)
        {
            p.y++;
            break;
        }
        else
        {
            break;
        }
    default:
        std::cerr << "Wrong input!" << std::endl;
    }
}