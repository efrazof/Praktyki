#include "displaygameboardonthecommandline.h"


DisplayGameBoardOnTheCommandLine::DisplayGameBoardOnTheCommandLine()
{
}

void DisplayGameBoardOnTheCommandLine::displayGameBoardOnTheCommandLine(std::string stringConvertedFromBoard)
{
        std::cout<<stringConvertedFromBoard;
        std::cout<<"---------------------------- ";
}

void DisplayGameBoardOnTheCommandLine::displayCounterOnTheCommandLine(int counterOfIterations)
{
        std::cout<<counterOfIterations<<std::endl;
}
