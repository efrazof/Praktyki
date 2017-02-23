#ifndef GENERATOR_H
#define GENERATOR_H
#include "iteratorOverCells.h"
#include "filler.h"
#include "board.h"

class Generator
{
public:
    Generator();
    Board generateNextBoard(Board oldBoard);
};

#endif // GENERATOR_H
