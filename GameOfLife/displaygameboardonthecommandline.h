#ifndef DISPLAYGAMEBOARDONTHECOMMANDLINE_H
#define DISPLAYGAMEBOARDONTHECOMMANDLINE_H
#include <iostream>
#include <string>

class DisplayGameBoardOnTheCommandLine
{
public:
    DisplayGameBoardOnTheCommandLine();
    void displayGameBoardOnTheCommandLine(std::string stringConvertedFromBoard);
    void displayCounterOnTheCommandLine(int counterOfIterations);
};

#endif // DISPLAYGAMEBOARDONTHECOMMANDLINE_H
