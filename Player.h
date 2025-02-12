#ifndef PLAYER_H
#define PLAYER_H

class Player
{
    unsigned short x;
    unsigned short y;

public:
    Player();
    void move(int a, int b);
    unsigned short get_x();
    unsigned short get_y();
};

#endif // PLAYER_H
