#include "Tester_Catch.h"

#include "../GameOfLife/filleremptyboard.h"
#include "../GameOfLife/filler.h"


TEST_CASE( "Check if the board on each position has zero ", "[FillerEmptyBoard]" ) {

    FillerEmptyBoard filleremptyboard;
    Board board(10,10);
    filleremptyboard.fillBoard(board);

    for(unsigned positionLine = 0 ; positionLine < board.getTheBoard().size() ; positionLine++)
    {
        for(unsigned positionColumn =0; positionColumn < board.getTheBoard()[positionLine].size();positionColumn++)
        {
            CHECK(board.getTheBoard()[positionLine][positionColumn] == 0);
        }
    }
}
