#ifndef READFROMTXTFILE_H
#define READFROMTXTFILE_H
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <cstring>
#include <cstdio>
#include <vector>
#include "sizeofboard.h"

class ReadFromTxtFile
{
public:

    ReadFromTxtFile();

    ReadFromTxtFile(std::string);


    std::string readTxtFileByName(std::string);
    bool checkIfGivenTextCreatesRectangle(std::stringstream&);


private:

    std::string readBoard;
    bool isFileRectangle = true;
    void setReadBoard(std::string);
    SizeofBoard * sizeofBoard;
};

#endif // READFROMTXTFILE_H
