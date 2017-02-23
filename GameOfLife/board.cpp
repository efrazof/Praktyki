#include "board.h"

int Board::getNumberOfCollumns() const
{
    return numberOfCollumns;
}

int Board::getNumberOfRows() const
{
    return numberOfRows;
}

Board::Board(int newNumberOfRows, int newNumberColumns)
{
    numberOfCollumns = newNumberColumns;
    numberOfRows = newNumberOfRows;
    this->theBoard.resize(numberOfRows, std::vector<bool>(numberOfCollumns));
}

Board::Board(SizeofBoard sizeFromString)
{
    this->theBoard.resize(sizeFromString.getHeight(),std::vector<bool>(sizeFromString.getWidth()));
    numberOfCollumns = sizeFromString.getWidth();
    numberOfRows = sizeFromString.getHeight();
}
