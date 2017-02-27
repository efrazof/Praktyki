#include "Tester_Catch.h"

#include "..\GameOfLife\fillerwithrandomvalues.h"
#include "..\GameOfLife\filler.h"


TEST_CASE( "Check if top border of frame is filled with zero", "[FillerWithRandomValues]" ) {

FillerWithRandomValues fillerWithRandomValues;
Board board(20,20);
fillerWithRandomValues.fillBoard(board);

for(unsigned  positionColumn =0; positionColumn < board.getNumberOfColumns(); positionColumn++)
{
    CHECK(board.getTheBoard()[0][positionColumn] == 0);
}
}

TEST_CASE( "Check if left border of frame is filled with zero", "[FillerWithRandomValues]" ) {

FillerWithRandomValues fillerWithRandomValues;
Board board(20,20);
fillerWithRandomValues.fillBoard(board);

for(unsigned positionLine = 0 ; positionLine < board.getNumberOfRows() ; positionLine++)
{
    CHECK(board.getTheBoard()[positionLine][0] == 0);
}
}

TEST_CASE( "Check if bottom border of frame is filled with zero", "[FillerWithRandomValues]" ) {

FillerWithRandomValues fillerWithRandomValues;
Board board(10,20);
fillerWithRandomValues.fillBoard(board);

for(unsigned positionColumn =0; positionColumn < board.getNumberOfColumns(); positionColumn++)
{
    CHECK(board.getTheBoard()[board.getNumberOfRows()-1][positionColumn] == 0);
}
}


TEST_CASE( "Check if right border of frame is filled with zero", "[FillerWithRandomValues]" ) {

FillerWithRandomValues fillerWithRandomValues;
Board board(10,20);
fillerWithRandomValues.fillBoard(board);

for(unsigned positionLine = 0 ; positionLine < board.getNumberOfRows(); positionLine++)
    {
    CHECK(board.getTheBoard()[positionLine][board.getNumberOfColumns()-1] == 0);
    }
}


TEST_CASE( "Check if values in the board are no higher than 1", "[FillerWithRandomValues]" ) {

FillerWithRandomValues fillerWithRandomValues;
Board board(20,10);
fillerWithRandomValues.fillBoard(board);

for(unsigned positionLine = 1 ; positionLine < board.getNumberOfRows() ; positionLine++)
{
    for(unsigned positionColumn = 1; positionColumn < board.getNumberOfColumns();positionColumn++)
    {
        CHECK(board.getTheBoard()[positionLine][positionColumn] <= 1);
    }
}
}
