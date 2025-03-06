#include <iostream>
#include <cstdlib>
#include "Player.h"
#include "Field.h"

int main()
{
    Field fl;
    fl.drawField();

#ifdef linux
    std::cout << "\t\t\tExit program!" << std::endl;
#endif
#ifdef WIN32
    system("pause");
#endif
    return 0;
}
