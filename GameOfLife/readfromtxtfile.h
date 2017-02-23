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


    ReadFromTxtFile(std::string);


    std::string readTxtFileByName(std::string);
    bool checkIfGivenTextCreatesRectangle(std::stringstream&);


    SizeofBoard *getSizeofBoard() const;
    void setSizeofBoard(SizeofBoard *value);

    std::string getReadBoard() const;

private:

    std::string readBoard;
    bool isFileRectangle = true;
    void setReadBoard(std::string);
    SizeofBoard * sizeofBoard;
};

#endif // READFROMTXTFILE_H
