#include "Player.h"
#include <iostream>

Player::Player()
{
    x = 1;
    y = 1;
}
void Player::move(int a, int b)
{

    while (a != x && b != y)
    {

        if (a < x)
        {
            --x;
        }
        if (a > x)
        {
            ++x;
        }
        if (b < y)
        {
            --y;
        }
        if (b > y)
        {
            ++y;
        }
    }
}

unsigned short Player::get_x()
{
    return x;
}
unsigned short Player::get_y()
{
    return y;
}
