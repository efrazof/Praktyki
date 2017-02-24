#include "Tester_Catch.h"
#include "mock_savetofile.h"
#include <iostream>
#include <fstream>


TEST_CASE( "check if text is properly written ", "[test savetofilewithnameandtext]" ){

    std::vector<std::vector<bool>> boolBoard={{0,0,0,0},
                                              {0,1,1,0},
                                              {0,0,1,0},
                                              {0,0,0,0}};

    Mock_savetofile saveToFile(boolBoard);
    std::fstream file;
    bool checkIfFileOpen;
    file.open("testFilenameMockReader.txt");

    if(file.is_open())
    {
        checkIfFileOpen=true;
    }
    else
    {
        checkIfFileOpen=false;
    }
    file.close();
    CHECK(checkIfFileOpen==true);

    remove("testFilenameMockReader.txt");
}


