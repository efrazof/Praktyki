#ifndef CONVERTERBOOLBOARDTOSTRING_H
#define CONVERTERBOOLBOARDTOSTRING_H
#include <vector>
#include <iostream>

class Converter
{
public:

      std::string convertBoolBoardToString (std::vector<std::vector<bool>> theBoard);
      std::string getBoardConvertToString();

private:

      char deadCell='.', liveCell='x';
      std::string boardConvertToString;
};

#endif // CONVERTERBOOLBOARDTOSTRING_H
