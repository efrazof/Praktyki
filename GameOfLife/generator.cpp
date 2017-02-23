#include "generator.h"

Generator::Generator()
{

}

Board Generator::generateNextBoard(Board oldBoard)
{
    Board newBoard(oldBoard.getNumberOfRows(),oldBoard.getNumberOfCollumns());
    IteratorOverCells iterator;
    iterator.iterateOverAllCells(newBoard, oldBoard);
    return newBoard;
}
