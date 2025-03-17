#include "../include/Field.h"
#include "../include/Player.h"
#include "../include/Enemy.h"
#include <iostream>

Field::Field()
{
    field.resize(ROW, std::vector<char>(COL, ' '));
    for (size_t i = 0; i < ROW; ++i)
    {
        for (size_t j = 0; j < COL; ++j)
        {
            if (i == 0 || i == ROW - 1 || j == 0 || j == COL - 1)
            {
                field[i][j] = '#';
            }
        }
    }
}

void Field::drawField(Player &p, Enemy &e1, Enemy &e2, Enemy &e3)
{
    if ((p.m_x == e1.x && p.m_y == e1.y) || (p.m_x == e2.x && p.m_y == e2.y) || (p.m_x == e3.x && p.m_y == e3.y))
    {
        p.damage();
    }
    for (size_t i = 0; i < ROW; ++i)
    {
        for (size_t j = 0; j < COL; ++j)
        {
            if (p.m_x == i && p.m_y == j)
            {
                std::cout << 'P';
            }
            else if ((e1.x == i && e1.y == j) || (e2.x == i && e2.y == j) || (e3.x == i && e3.y == j))
            {
                std::cout << 'E';
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
        if (p.m_x > 1)
        {
            p.m_x--;
            break;
        }
        else
        {
            break;
        }
    case 's':
        if (p.m_x < 18)
        {
            p.m_x++;
            break;
        }
        else
        {
            break;
        }
    case 'a':
        if (p.m_y > 1)
        {
            p.m_y--;
            break;
        }
        else
        {
            break;
        }
    case 'd':
        if (p.m_y < 28)
        {
            p.m_y++;
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