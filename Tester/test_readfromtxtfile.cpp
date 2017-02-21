#include "Tester_Catch.h"
#include "../GameOfLife/readfromtxtfile.h"

#include "fstream"

TEST_CASE( "check if reader creates string from txt file", "[test READER]" ){

    std::ofstream file("test.txt");
    file << "RandomTxt";
    file.close();
    ReadFromTxtFile reader;
    REQUIRE(reader.readTxtFileByName("test.txt") == "RandomTxt");
    remove("test.txt");
}

TEST_CASE( "check if reader creates string from txt file with two lines", "[test READER]" ){

    std::ofstream file("test.txt");
    file << "RandomTxt\nsecond line";
    file.close();
    ReadFromTxtFile reader;
    REQUIRE(reader.readTxtFileByName("test.txt") == "RandomTxt\nsecond line");
    remove("test.txt");
}
