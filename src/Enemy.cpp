#include "Enemy.h"
#include <random>
#include <ctime>
Enemy::Enemy()
{
    srand(time(NULL));
    health = 100;
    x = rand() % 18;
    y = rand() % 18;
}

void Enemy::move()
{
    int move = rand() % 4;
    switch (move)
    {
    case 0:
        if (x < 18)
        {
            x++;
            break;
        }
        else
        {
            break;
        }
    case 1:
        if (x > 1)
        {
            x--;
            break;
        }
        else
        {
            break;
        }
    case 2:
        if (y < 28)
        {
            y++;
            break;
        }
        else
        {
            break;
        }
    case 3:
        if (y > 1)
        {
            y--;
            break;
        }
        else
        {
            break;
        }
    default:
        break;
    }
}

int Enemy::get_health()
{
    return health;
}