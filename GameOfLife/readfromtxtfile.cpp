#include "readfromtxtfile.h"

ReadFromTxtFile::ReadFromTxtFile()
{

}

std::string ReadFromTxtFile::readTxtFileByName(std::string nameOfFile)
{
    std::ifstream file(nameOfFile);
    std::ifstream& r_file = file;
    std::stringstream buffer;
    std::stringstream& r_buffer = buffer;
    if(file.good())
    {
        buffer << file.rdbuf();
        if(checkIfGivenTextCreatesRectangle(r_buffer))
        {
            readBoard = buffer.str();
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
