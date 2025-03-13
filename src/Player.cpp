#include "Player.h"
#include <iostream>

Player::Player()
{
    m_x = 1;
    m_y = 1;
    sh_x = 0;
    sh_y = 0;
    m_health = 100;
}

int Player::get_health()
{
    return m_health;
}

void Player::damage()
{
    m_health -= 10;
}
