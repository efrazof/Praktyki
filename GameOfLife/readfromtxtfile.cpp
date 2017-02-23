#include "readfromtxtfile.h"

void ReadFromTxtFile::setReadBoard(std::string nameOfFile)
{
    std::ifstream file(nameOfFile);
    std::stringstream buffer;
    buffer << file.rdbuf();
    readBoard = buffer.str();
}

SizeofBoard *ReadFromTxtFile::getSizeofBoard() const
{
    return sizeofBoard;
}

void ReadFromTxtFile::setSizeofBoard(SizeofBoard *value)
{
    sizeofBoard = value;
}

std::string ReadFromTxtFile::getReadBoard() const
{
    return readBoard;
}

ReadFromTxtFile::ReadFromTxtFile(std::__cxx11::string nameOfFile)
{
    setReadBoard(nameOfFile);
    sizeofBoard = new SizeofBoard(readBoard);
}
