#include "Enemy.h"
#include <random>

Enemy::Enemy()
{
    srand(time_t(nullptr));
    x = rand() % 18;
    y = rand() % 18;
}