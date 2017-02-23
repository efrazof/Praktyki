#include "fillwithtxtfile.h"

FillWithTxtFile::FillWithTxtFile()
{

}

void FillWithTxtFile::fillBoardWithString(Board &board, std::string stringFromTxtFile)
{
    std::vector<std::vector<bool>> theBoard= board.getTheBoard();
    int counter = 0;
    for (int row=1; row<board.getTheBoard().size()-1; row++){
        for (int column=1; column<board.getTheBoard()[0].size()-1; column++)
        {
            theBoard[row][column] = stringFromTxtFile[counter];
            counter++;
        }
    }
    board.setStateOfBoard(theBoard);
}
