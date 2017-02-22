#include "board.h"

Board::Board()
{

}

Board::Board(int numberOfRows, int numberOfColumns)
{
    this->theBoard.resize(numberOfColumns, std::vector<bool>(numberOfRows));
}

Board::Board(SizeofBoard sizeFromString)
{
    this->theBoard.resize(sizeFromString.getHeight(),std::vector<bool>(sizeFromString.getWidth()));
}
