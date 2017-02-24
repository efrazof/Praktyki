#include "Tester_Catch.h"
#include "../GameOfLife/readfromtxtfile.h"

#include "fstream"

TEST_CASE( "check if reader creates string from txt file", "[test READER]" ){

    std::ofstream file("test.txt");
    file << "RandomTxt";
    file.close();
    ReadFromTxtFile reader("test.txt");
    REQUIRE(reader.getReadBoard() == "RandomTxt");
    remove("test.txt");
}

TEST_CASE( "check if reader creates string from txt file with two lines", "[test READER]" ){

    std::ofstream file("test2.txt");
    file << "RandomTxt\nRandomTxt";
    file.close();
    ReadFromTxtFile reader("test2.txt");
    REQUIRE(reader.getReadBoard() == "RandomTxt\nRandomTxt");
    remove("test.txt");
}
