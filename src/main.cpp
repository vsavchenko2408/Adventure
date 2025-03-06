#include <iostream>
#include <cstdlib>
#include "Player.h"
#include "Field.h"

int main()
{
    Field fl;
    fl.drawField();
    std::cout << "Exit program!" << std::endl;

#ifdef WIN32
    system("pause");
#endif
    return 0;
}
