#include "readfromtxtfile.h"

ReadFromTxtFile::ReadFromTxtFile()
{

}

std::string ReadFromTxtFile::readTxtFileByName(std::string nameOfFile)
{
    std::ifstream file(nameOfFile);
    std::stringstream buffer;
    buffer << file.rdbuf();
    readBoard = buffer.str();
    return readBoard;
}
