#include <iostream>
// #include <cstdlib>
#include "../include/Player.h"
#include "../include/Field.h"
#include "../include/Enemy.h"
void game();
int main()
{
    game();
#ifdef linux
    std::cout << "\t\t\tExit program!" << std::endl;
#endif
#ifdef WIN32
    system("pause");
#endif
    return 0;
}

void game()
{
    Player p;
    Enemy e1;
    Enemy e2;
    Enemy e3;
    Field fl;
    // fl.drawField(p);

    char move;
    while (move != '0' && !p.death())
    {
#ifdef WIN32
        system("cls");
#endif
#ifdef linux
        system("clear");
#endif
        fl.drawField(p, e1, e2, e3);
        std::cout << "Your health: " << p.get_health() << std::endl;
        std::cout << "Enemy 1 health: " << e1.get_health() << std::endl;
        std::cout << "Enemy 2 health: " << e2.get_health() << std::endl;
        std::cout << "Enemy 3 health: " << e3.get_health() << std::endl;
        std::cout << "Put the direction: " << std::endl;
        std::cout << "For exit input 0!" << std::endl;
        std::cin >> move;
        e1.move();
        e2.move();
        e3.move();
        fl.move(move, p);
        // fl.drawField(p, e);
    }
}