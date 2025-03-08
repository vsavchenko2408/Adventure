#include "Player.h"
#include <iostream>

Player::Player()
{
    m_x = m_y = 1;
    m_health = 100;
}
int Player::getX()
{
    return m_x;
}
int Player::getY()
{
    return m_y;
}

void Player::move(char mv)
{
    switch (mv)
    {
    case 'w':
        m_x--;
        break;
    case 's':
        m_x++;
        break;
    case 'a':
        m_y--;
        break;
    case 'd':
        m_y++;
        break;
    default:
        std::cerr << "Wrong input!" << std::endl;
    }
}