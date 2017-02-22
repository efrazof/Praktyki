#include "Tester_Catch.h"

#include "../GameOfLife/fillwithtxtfile.h"
#include "../GameOfLife/sizeofboard.h"


TEST_CASE( "Check if filer fill first row with 1", "[FillerWithRandomValues]" ) {

std::string test = "1111\n0000\n1111\n0000";
SizeofBoard size(test);
std::cout<<std::to_string(size.getHeight())<<std::endl;
std::cout<<std::to_string(size.getWidth())<<std::endl;
Board testBoard(size);
FillWithTxtFile filler;
//filler.fillBoardWithString(testBoard,test);


for(unsigned positionColumn = 1; positionColumn < testBoard.getTheBoard()[0].size()-1;positionColumn++)
{
    CHECK(testBoard.getTheBoard()[1][positionColumn] == 1);
}
}
