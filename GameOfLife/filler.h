#ifndef FILLER_H
#define FILLER_H
#include <vector>
#include "board.h"


class Filler
{
public:
Filler();
virtual void fillBoard(Board & board)=0;

};

#endif // FILLER_H
