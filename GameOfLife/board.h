#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include "sizeofboard.h"

class Board
{
private:
    std::vector<std::vector<bool>> theBoard;
    int numberOfCollumns, numberOfRows;

public:
    std::vector<std::vector<bool>> getTheBoard() {return theBoard;}
    void setStateOfBoard(std::vector<std::vector<bool>> newTheBoard) {
        theBoard = newTheBoard; }
    void setStateOfCellInTheBoard(int positionInRow, int positionInColumn, bool newStateOfCell) {
        theBoard[positionInRow][positionInColumn] = newStateOfCell; }

    Board(int numberOfRows, int numberOfColumns);
    Board(SizeofBoard);
    int getNumberOfCollumns() const;
    int getNumberOfRows() const;

};

#endif // BOARD_H
