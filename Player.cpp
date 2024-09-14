#include "Player.h"
#include <iostream>
Player::Player()
{
    x =10;
    y =10;
}
void Player::move(char mv)
{
    switch(mv)
    {
    case 'w':
        if(x>1)
        {
        --x;
        }
        break;
    case 's':
        if(x<18)
        {
        ++x;
        }
        break;
    case 'a':
        if(y>1)
        {
        --y;
        }
        break;
    case 'd':
        if(y<18)
        {
        ++y;
        }
        break;
    default:
        std::cerr << "Помилковий ввід!" << std::endl;
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
