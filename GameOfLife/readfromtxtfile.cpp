#include "readfromtxtfile.h"

ReadFromTxtFile::ReadFromTxtFile()
{

}

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

ReadFromTxtFile::ReadFromTxtFile(std::__cxx11::string nameOfFile)
{
    setReadBoard(nameOfFile);
    sizeofBoard = new SizeofBoard(readBoard);
}

std::string ReadFromTxtFile::readTxtFileByName(std::string nameOfFile)
{
    std::ifstream file(nameOfFile);
    std::stringstream buffer;
    std::stringstream& r_buffer = buffer;
    std::vector<bool> row;
    std::string to;

    if(file.good())
    {
        if(checkIfGivenTextCreatesRectangle(r_buffer))
        {
            buffer << file.rdbuf();
            std::cout<<buffer.str()<<std::endl;
        }
    }
    else std::cout<<"Reading file fail"<<std::endl;
    return readBoard;
}
bool ReadFromTxtFile::checkIfGivenTextCreatesRectangle(std::stringstream& p_buffer)
{
    int lineLenght;
    int nextLineLenht;
    int counter = 0;

    std::string line;

    getline(p_buffer,line);
    lineLenght = line.size();

    do
    {
        getline(p_buffer,line);
        nextLineLenht = line.size();
        if(lineLenght != nextLineLenht)
        {
            std::cout<<"Error: Line Error in line -  "+std::to_string(counter)<<std::endl;
            isFileRectangle = false;
        }
        counter++;
    }
    while(p_buffer.str().size() == 0);
    return isFileRectangle;
}
