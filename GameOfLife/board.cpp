#include "board.h"

int Board::getNumberOfCollumn() const
{
    return numberOfCollumn;
}

void Board::setNumberOfCollumn(int value)
{
    numberOfCollumn = value;
}

int Board::getNumberOfRow() const
{
    return numberOfRow;
}

void Board::setNumberOfRow(int value)
{
    numberOfRow = value;
}

Board::Board()
{
    this->theBoard.resize(numberOfRow, std::vector<bool>(numberOfCollumn));
}

Board::Board(int newNumberOfRows, int newNumberColumns)
{
    setNumberOfCollumn(newNumberColumns);
    setNumberOfRow(newNumberOfRows);
    this->theBoard.resize(newNumberOfRows, std::vector<bool>(newNumberColumns));
}
