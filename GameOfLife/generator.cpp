#include "generator.h"

Generator::Generator()
{

}

Board Generator::generateNextBoard(Board oldBoard)
{
    Board newBoard(oldBoard.getNumberOfRow(),oldBoard.getNumberOfCollumn());
    FillerEmptyBoard empty;
    empty.fillBoard(newBoard);
    IteratorOverCells iterator;
    iterator.iterateOverAllCells(newBoard, oldBoard);
    return newBoard;
}
