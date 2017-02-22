#ifndef FILLWITHTXTFILE_H
#define FILLWITHTXTFILE_H
#include <string>
#include "board.h"


class FillWithTxtFile
{
public:
    FillWithTxtFile();
    void fillBoardWithString( Board &board, std::string);
};

#endif // FILLWITHTXTFILE_H
