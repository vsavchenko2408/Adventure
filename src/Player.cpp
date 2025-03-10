#include "Player.h"
#include <iostream>

Player::Player()
{
    x = 1;
    y = 1;
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