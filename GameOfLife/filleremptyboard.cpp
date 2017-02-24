#include "filleremptyboard.h"

FillerEmptyBoard::FillerEmptyBoard()
{

}
void FillerEmptyBoard::fillBoard(Board & board){
    std::vector<std::vector<bool>> deadBoard=board.getTheBoard();
    board.setStateOfBoard(deadBoard);
}
