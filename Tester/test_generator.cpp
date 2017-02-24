#include "Tester_Catch.h"
#include "../GameOfLife/generator.h"

#include <iostream>
TEST_CASE( "check board generator", "[test generator]" ){

    Board board1(4,4);
    Board board2(4,4);

    std::vector<std::vector <bool>> inputData = {{0,0,0,0},
                                                 {0,1,1,0},
                                                 {0,0,1,0},
                                                 {0,0,0,0}};

    std::vector<std::vector <bool>> outputData = {{0,0,0,0},
                                                  {0,1,1,0},
                                                  {0,1,1,0},
                                                  {0,0,0,0}};
    board1.setStateOfBoard(inputData);
    board2.setStateOfBoard(outputData);
    Generator generator;
    board1 = generator.generateNextBoard(board1);

    CHECK(board1.getTheBoard() == board2.getTheBoard());

    std::vector<std::vector <bool>> inputData2 = {{0,0,0,0},
                                                  {0,1,1,0},
                                                  {0,1,1,0},
                                                  {0,0,0,0}};

    std::vector<std::vector <bool>> outputData2 = {{0,0,0,0},
                                                   {0,1,1,0},
                                                   {0,1,1,0},
                                                   {0,0,0,0}};
    board1.setStateOfBoard(inputData2);
    board2.setStateOfBoard(outputData2);
    CHECK(board1.getTheBoard() == board2.getTheBoard());

}
