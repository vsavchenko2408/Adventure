#ifndef FIELD_H
#define FIELD_H
#include <vector>
class Field
{
    std::vector<std::vector<char>> field;

public:
    Field();
    void drawField();
};

#endif
