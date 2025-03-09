#ifndef PLAYER_H
#define PLAYER_H

class Player
{

    unsigned int m_health;

public:
    int x, y;
    Player();
    int get_health();
    void damage();
};

#endif
