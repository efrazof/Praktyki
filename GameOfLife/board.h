#ifndef BOARD_H
#define BOARD_H

#include <vector>

class Board
{
private:
    std::vector<std::vector<bool>> theBoard;
    int numberOfCollumn, numberOfRow;

public:
    std::vector<std::vector<bool>> getTheBoard() {return theBoard;}
    void setStateOfBoard(std::vector<std::vector<bool>> newTheBoard) {
        theBoard = newTheBoard; }
    void setStateOfCellInTheBoard(int positionInRow, int positionInColumn, bool newStateOfCell) {
        theBoard[positionInRow][positionInColumn] = newStateOfCell; }
    Board();
    Board(int newNumberOfRows, int newNumberOfColumns);
    int getNumberOfCollumn() const;
    void setNumberOfCollumn(int value);
    int getNumberOfRow() const;
    void setNumberOfRow(int value);
};

#endif // BOARD_H
