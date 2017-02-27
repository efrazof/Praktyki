#ifndef CHECKBUTTONPRESSED_H
#define CHECKBUTTONPRESSED_H

#include <windows.h>
#include <iostream>
#include <conio.h>

class CheckButtonPressed
{
private:
    bool loopStatus;
    bool saveToFileStatus;
    float howManySecondToGenerateNextBoard;
public:
    CheckButtonPressed();
    void checkStatusOfButtonPressed();
    bool getStatusOfLoop();
    float getHowManySecondToGenerateNextBoard();
    bool getSaveToFileStatus();
    void setSaveToFileStatus(bool value);
};

#endif
