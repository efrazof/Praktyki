#ifndef GAME_H
#define GAME_H
#include "board.h"
#include "fillerwithrandomvalues.h"
#include "converter.h"
#include "displaygameboardonthecommandline.h"
#include "generator.h"
#include "checkbuttonpressed.h"
#include "systemcommand.h"
#include "savetofilewithnameandtext.h"
#include "readfromtxtfile.h"
#include <conio.h>
#include "fillwithtxtfile.h"



class Game
{
public:
    Game();
    
    void setBoard(const Board &value);

    void readingFromfileTxt();

private:
    CheckButtonPressed newPressed;
    FillerWithRandomValues filler;
    DisplayGameBoardOnTheCommandLine display;
    Converter converter;
    Generator generator;
    SystemCommand command;
    SaveToFileWithNameAndText saveToFile;
    void startInfiniteLoop();
    std::string fileNameToLoad;
    int counterOfIterations;
};

#endif
