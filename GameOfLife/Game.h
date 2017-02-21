#ifndef GAME_H
#define GAME_H
#include "board.h"
#include "fillerwithrandomvalues.h"
#include "converter.h"
#include "displaygameboardonthecommandline.h"
#include "generator.h"
#include "checkbuttonpressed.h"
#include "systemcomand.h"
#include "savetofilewithnameandtext.h"

#include <conio.h>

class Game
{
public:
    Game();
    
private:
    Board board;
    CheckButtonPressed newPressed;
    FillerWithRandomValues filler;
    DisplayGameBoardOnTheCommandLine display;
    Converter converter;
    Generator generator;
    SystemComand comand;
    SaveToFileWithNameAndText saveToFile;
    void startInfiniteLoop();
};

#endif
