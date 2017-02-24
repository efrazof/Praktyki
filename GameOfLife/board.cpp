#include "board.h"

Board::Board()
{

}

int Board::getNumberOfColumns() const
{
    return numberOfColumns;
}

int Board::getNumberOfRows() const
{
    return numberOfRows;
}

Board::Board(int newNumberOfRows, int newNumberColumns)
{
    numberOfColumns = newNumberColumns;
    numberOfRows = newNumberOfRows;
    this->theBoard.resize(numberOfRows, std::vector<bool>(numberOfColumns));
}

Board::Board(SizeofBoard sizeFromString)
{
    this->theBoard.resize(sizeFromString.getHeight(),std::vector<bool>(sizeFromString.getWidth()));
    numberOfColumns = sizeFromString.getWidth();
    numberOfRows = sizeFromString.getHeight();
}
