#ifndef ENEMY_H
#define ENEMY_H

class Enemy
{
    int health;
    int damage;

public:
    int x;
    int y;
    Enemy();
    void move();
    int get_health();
};

#endif