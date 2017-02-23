#include "Tester_Catch.h"
#include "../GameOfLife/savetofilewithnameandtext.h"
#include <iostream>
#include <fstream>


TEST_CASE( "check if text is properly written ", "[test savetofilewithnameandtext]" ){

    std::string txt;
    txt="010111\n100111\n111001\n";

    SaveToFileWithNameAndText saveToFile;
    saveToFile.saveFile(txt);

    std::fstream file;
    bool checkIfFileOpen;

    if (file.open(saveToFile.getFileName()), std::ios::in){
        checkIfFileOpen=true;
    }else{
        checkIfFileOpen=false;}

    CHECK(checkIfFileOpen==true);
}


