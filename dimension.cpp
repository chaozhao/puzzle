#include "dimension.h"

Dimension::Dimension(unsigned rowValue, unsigned colValue)
{
    row = rowValue;
    col = colValue;
}

Dimension::Dimension(unsigned values)
{
    row = col = values;
}

unsigned Dimension::getRow()
{
    return row;
}

unsigned Dimension::getCol()
{
    return col;
}
