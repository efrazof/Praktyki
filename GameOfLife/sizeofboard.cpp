#include "sizeofboard.h"

SizeofBoard::SizeofBoard()
{

}

SizeofBoard::SizeofBoard(std::__cxx11::string &stringWithBoard)
{
    countTheSizeOfBoard(stringWithBoard);
}

void SizeofBoard::countTheSizeOfBoard(std::string buffer)
{
    int counterOfColumns = 0;
    std::string to;
    std::stringstream s_buffer;
    s_buffer<<buffer;
    while(std::getline(s_buffer,to,'\n'))
    {
        counterOfColumns++;
        std::cout<<"tak wyglada to: "<<to<<std::endl;
        to.clear();
    }
    setWidth(to.size()+frame);
    setHeight(counterOfColumns+frame);
}

int SizeofBoard::getHeight() const
{
    return height;
}

void SizeofBoard::setHeight(int value)
{
    height = value;
}

int SizeofBoard::getWidth() const
{
    return width;
}

void SizeofBoard::setWidth(int value)
{
    width = value;
}