#include <iostream>
#include <cstdlib>
#include "Player.h"
#include "Field.h"


int main()
{
    Player p;
    Field f;
    char movech;
    do
    {
                system("export TERM=xterm && clear");
              f.draw(p);

        std::cout << "Введіть напрямок: " << std::endl;
        std::cout << "Щоб вийти введіть 0!" << std::endl;
        std::cin >> movech;
        p.move(movech);

    }while(movech != '0');
    return 0;
}
