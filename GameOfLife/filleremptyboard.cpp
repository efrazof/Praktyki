#include "filleremptyboard.h"

FillerEmptyBoard::FillerEmptyBoard()
{

}
void FillerEmptyBoard::fillBoard(Board & board){
    std::vector<std::vector<bool>> deadBoard=board.getTheBoard();
    deadBoard.resize(board.getNumberOfRow(), std::vector<bool>(board.getNumberOfCollumn()));
    board.setStateOfBoard(deadBoard);
}
