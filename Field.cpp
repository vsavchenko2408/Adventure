#include "Field.h"
#include "Player.h"
#include <iostream>
Field::Field()
{
    for(int i=0;i<COL;i++)
    {
        for(int j =0;j<ROW;j++)
        {

            if((i==0 || i == COL-1) || (j==0 || j == ROW -1))
            {
            field[i][j] = '#';
            }
            else
            field[i][j] = ' ';

        }
    }
}
void Field::draw(Player &p)
{

    for(int i=0;i<COL;++i)
    {
        for(int j =0;j<ROW;++j)
        {
            if(p.get_x() == i && p.get_y() == j)
            {std::cout << "P";}
            else
            std::cout << field[i][j];
        }
        std::cout << "\n";
    }
}
