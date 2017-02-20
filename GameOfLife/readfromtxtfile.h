#ifndef READFROMTXTFILE_H
#define READFROMTXTFILE_H
#include <fstream>
#include <string>
#include <iostream>
#include <stdio.h>
#include <sstream>

class ReadFromTxtFile
{
public:
    ReadFromTxtFile();
    std::string readTxtFileByName(std::string);
private:
    std::string readBoard;
};

#endif // READFROMTXTFILE_H
