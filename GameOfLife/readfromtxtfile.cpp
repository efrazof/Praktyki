#include "readfromtxtfile.h"

ReadFromTxtFile::ReadFromTxtFile()
{

}

std::string ReadFromTxtFile::readTxtFileByName(std::string nameOfFile)
{
    std::string txt;
    std::stringstream buffer;
    std::ifstream file (nameOfFile, std::ios::in | std::ios::out);
    do
    {
        getline(file,txt);

    }
    while (!file.eof());

    buffer << file.rdbuf();
    readBoard = buffer.str();//str holds the content of the file

    return readBoard;
}
