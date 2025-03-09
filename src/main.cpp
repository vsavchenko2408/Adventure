#include <iostream>
// #include <cstdlib>
#include "Player.h"
#include "Field.h"

int main()
{
    Player p;
    Field fl;
    fl.drawField(p);

    char move;
    while (move != '0')
    {
        std::cout << "Put the direction: " << std::endl;
        std::cin >> move;
        fl.move(move, p);
        fl.drawField(p);
    }

#ifdef linux
    std::cout << "\t\t\tExit program!" << std::endl;
#endif
#ifdef WIN32
    system("pause");
#endif
    return 0;
}
