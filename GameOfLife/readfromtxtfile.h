#ifndef READFROMTXTFILE_H
#define READFROMTXTFILE_H
#include <iosfwd>
#include <string>
#include <sstream>
#include <fstream>


class ReadFromTxtFile
{
public:
    ReadFromTxtFile();

    std::string readTxtFileByName(std::string);

private:
    std::string readBoard;
};

#endif // READFROMTXTFILE_H
