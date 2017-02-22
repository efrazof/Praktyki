#include "fillerwithrandomvalues.h"

FillerWithRandomValues::FillerWithRandomValues()
{

}
void FillerWithRandomValues::fillBoard( Board & board){
    srand ( time(NULL) );
    std::vector<std::vector<bool>> theBoard = board.getTheBoard();
    theBoard.resize(board.getNumberOfRow(), std::vector<bool>(board.getNumberOfCollumn()));
    for (int row=1; row<board.getNumberOfRow()-1; row++){
        for (int column=1; column<board.getNumberOfCollumn()-1; column++)
        {
            theBoard[row][column] = rand() % 2;
        }
    }
    board.setStateOfBoard(theBoard);
}
