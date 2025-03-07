#include <iostream>
//#include <cstdlib>
#include "Player.h"
#include "Field.h"



int main()
{
    Player p;
    Field fl;
    fl.drawField();
    char move;
    while(move != '0')
    {
        std::cin >> move;
        switch(move)
        {
            case 'w':

            case 's':

            case 'a':

            case 'd':

            default:
            std::cerr << "Wrong input!" << std::endl;
        }
    }
#ifdef linux
    std::cout << "\t\t\tExit program!" << std::endl;
#endif
#ifdef WIN32
    system("pause");
#endif
    return 0;
}
