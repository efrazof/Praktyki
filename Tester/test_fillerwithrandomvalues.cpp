#include "Tester_Catch.h"

#include "..\GameOfLife\fillerwithrandomvalues.h"
#include "..\GameOfLife\filler.h"


TEST_CASE( "Check if top border of frame is filled with zero", "[FillerWithRandomValues]" ) {

    FillerWithRandomValues fillerWithRandomValues;
    Board board(10,10);
    fillerWithRandomValues.fillBoard(board);

    for(unsigned positionColumn =0; positionColumn < board.getTheBoard()[0].size();positionColumn++)
    {
        CHECK(board.getTheBoard()[0][positionColumn] == 0);
    }
}


TEST_CASE( "Check if left border of frame is filled with zero", "[FillerWithRandomValues]" ) {

    FillerWithRandomValues fillerWithRandomValues;
    Board board(10,10);
    fillerWithRandomValues.fillBoard(board);

    for(unsigned positionLine = 0 ; positionLine < board.getTheBoard().size() ; positionLine++)
    {
        CHECK(board.getTheBoard()[positionLine][0] == 0);
    }
}


TEST_CASE( "Check if bottom border of frame is filled with zero", "[FillerWithRandomValues]" ) {

    FillerWithRandomValues fillerWithRandomValues;
    Board board(10,10);
    fillerWithRandomValues.fillBoard(board);

    for(unsigned positionColumn =0; positionColumn < board.getTheBoard()[0].size();positionColumn++)
    {
        CHECK(board.getTheBoard()[board.getTheBoard().size()-1][positionColumn] == 0);
    }
}


TEST_CASE( "Check if right border of frame is filled with zero", "[FillerWithRandomValues]" ) {

    FillerWithRandomValues fillerWithRandomValues;
    Board board(10,10);
    fillerWithRandomValues.fillBoard(board);

    for(unsigned positionLine = 0 ; positionLine < board.getTheBoard().size() ; positionLine++)
    {
        CHECK(board.getTheBoard()[positionLine][board.getTheBoard().size()-1] == 0);
    }
}


TEST_CASE( "Check if values in the board are no higher than 1", "[FillerWithRandomValues]" ) {

    FillerWithRandomValues fillerWithRandomValues;
    Board board(10,10);
    fillerWithRandomValues.fillBoard(board);

    for(unsigned positionLine = 1 ; positionLine < board.getTheBoard().size()-1 ; positionLine++)
    {
        for(unsigned positionColumn = 1; positionColumn < board.getTheBoard()[positionLine].size()-1;positionColumn++)
        {
            CHECK(board.getTheBoard()[positionLine][positionColumn] <= 1);
        }
    }
}
