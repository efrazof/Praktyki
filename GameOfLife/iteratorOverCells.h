#ifndef ITERATOR_H
#define ITERATOR_H
#include "board.h"

class IteratorOverCells
{
public:
    IteratorOverCells();
    Board iterateOverAllCells(Board, Board oldBoard);
};

#endif // ITERATOR_H