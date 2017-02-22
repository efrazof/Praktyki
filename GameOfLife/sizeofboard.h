#ifndef SIZEOFBOARD_H
#define SIZEOFBOARD_H
#include <string>
#include <iostream>
#include <sstream>

const int frame = 2;

class SizeofBoard
{
public:
    SizeofBoard();
    SizeofBoard(std::string&);
    void countTheSizeOfBoard(std::string);

    int getHeight() const;
    void setHeight(int value);
    int getWidth() const;
    void setWidth(int value);

private:
    int height;
    int width;

};

#endif // SIZEOFBOARD_H
