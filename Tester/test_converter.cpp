#include "Tester_Catch.h"
#include "../GameOfLife/converter.h"
#include <vector>


TEST_CASE("Check if the positions in vector give proper symbols", "[Converter]")
{
    std::vector<std::vector<bool>> testTheBoard {{0,0,0,0},
                                                 {0,1,1,0},
                                                 {0,0,1,0},
                                                 {0,0,0,0}};

    std::string testString  = {'x','x','\n','.','x','\n'};


Converter *converter=new Converter;
unsigned sizeOfString = converter->convertBoolBoardToString(testTheBoard).size();

for(unsigned positionInString = 0 ; positionInString< sizeOfString ;positionInString++)
{
    CHECK(converter->convertBoolBoardToString(testTheBoard)[positionInString] == testString[positionInString]);
}
    delete converter;
}

TEST_CASE("Check if conversion testTheBoard gives proper size of the string", "[Converter]")
{
    std::vector<std::vector<bool>> testTheBoard {{0,0,0,0},
                                                 {0,1,1,0},
                                                 {0,0,1,0},
                                                 {0,0,0,0}};

    Converter *converter=new Converter;
    CHECK(converter->convertBoolBoardToString(testTheBoard).size()== 6);

    delete converter;
}
