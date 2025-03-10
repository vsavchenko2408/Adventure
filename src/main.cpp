#include <iostream>
// #include <cstdlib>
#include "Player.h"
#include "Field.h"
#include "Enemy.h"
int main()
{
    Player p;
    Enemy e;
    Field fl;
    // fl.drawField(p);

    char move;
    while (move != '0')
    {
#ifdef WIN32
        system("cls");
#endif
#ifdef linux
        system("clear");
#endif
        fl.drawField(p, e);
        std::cout << "Your health: " << p.get_health() << std::endl;
        std::cout << "Put the direction: " << std::endl;
        std::cin >> move;
        e.move();
        fl.move(move, p);
        // fl.drawField(p, e);
    }

#ifdef linux
    std::cout << "\t\t\tExit program!" << std::endl;
#endif
#ifdef WIN32
    system("pause");
#endif
    return 0;
}
