#ifndef PLAYER_H
#define PLAYER_H

class Player
{

    unsigned int m_health;

public:
    int m_x, m_y;
    int sh_x, sh_y;
    Player();
    int get_health();
    void damage();
    char shoot();
    bool death();
};

#endif
