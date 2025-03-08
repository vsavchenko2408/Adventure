#ifndef PLAYER_H
#define PLAYER_H

class Player
{
    int m_x, m_y;
    unsigned int m_health;
    char symbol = 'P';

public:
    Player();
    int getX();
    int getY();
    void move(char mv);
};

#endif
