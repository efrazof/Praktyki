#ifndef READFROMTXTFILE_H
#define READFROMTXTFILE_H
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <cstring>
#include <cstdio>

class ReadFromTxtFile
{
public:
    ReadFromTxtFile();

    std::string readTxtFileByName(std::string);
    bool checkIfGivenTextCreatesRectangle(std::stringstream&);


private:
    std::string readBoard;
    bool isFileRectangle = true;

};

#endif // READFROMTXTFILE_H
