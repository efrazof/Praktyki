#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include "sizeofboard.h"

class Board
{
private:
    std::vector<std::vector<bool>> theBoard;
    int numberOfColumns, numberOfRows;

public:
    std::vector<std::vector<bool>> getTheBoard() {return theBoard;}
    void setStateOfBoard(std::vector<std::vector<bool>> newTheBoard) {
        theBoard = newTheBoard; }
    void setStateOfCellInTheBoard(int positionInRow, int positionInColumn, bool newStateOfCell) {
        theBoard[positionInRow][positionInColumn] = newStateOfCell; }

    Board(int numberOfRows, int numberOfColumns);
<<<<<<< HEAD
    Board(SizeofBoard);
    int getNumberOfCollumns() const;
=======
    int getNumberOfColumns() const;
>>>>>>> cc2823e44aac53b6385277850cb5dc8db8dbd9a0
    int getNumberOfRows() const;

};

#endif // BOARD_H
