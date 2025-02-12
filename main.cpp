#include <iostream>
#include <cstdlib>
#include "Player.h"
#include "Field.h"
// хочу ще зробити плавне крокування по полю до координат
// для цього треба метод draw() переробити
// і хочу ще додати прегради і прописати обхід цих преград
int main()
{
    Player p;
    Field f;
    int x;
    int y;
    do
    {
        system("export TERM=xterm && clear");
        f.draw(p);

        std::cout << "Введіть координати: " << std::endl;
        std::cout << "Щоб вийти введіть 0!" << std::endl;
        std::cin >> x;
        std::cin >> y;
        p.move(x, y);

    } while (x != 0);
    return 0;
}
