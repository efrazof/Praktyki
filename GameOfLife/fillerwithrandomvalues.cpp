#include "fillerwithrandomvalues.h"

FillerWithRandomValues::FillerWithRandomValues()
{

}
void FillerWithRandomValues::fillBoard( Board & board){
    srand ( time(NULL) );
    std::vector<std::vector<bool>> theBoard = board.getTheBoard();
    for (int row=1; row<board.getNumberOfRows()-1; row++){
        for (int column=1; column<board.getNumberOfCollumns()-1; column++)
        {
            theBoard[row][column] = rand() % 2;
        }
    }
    board.setStateOfBoard(theBoard);
}
