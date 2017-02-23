#include "fillwithtxtfile.h"

FillWithTxtFile::FillWithTxtFile()
{

}

void FillWithTxtFile::fillBoardWithString(Board &board, std::string stringFromTxtFile)
{
    std::vector<std::vector<bool>> theBoard = board.getTheBoard();

    int positionInString = 0;
    for (int row=1; row<board.getTheBoard().size()-1; row++)
    {
        for (int column=1; column<board.getTheBoard()[0].size()-1; column++)
        {
            if(stringFromTxtFile[positionInString] != '\n')
            {
                stringFromTxtFile[positionInString] == '1' ? theBoard[row][column] = true : theBoard[row][column] = false;
                positionInString++;
            }
            else positionInString+=2;
        }
    }
    board.setStateOfBoard(theBoard);
}
