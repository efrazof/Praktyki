#include "checkbuttonpressed.h"

bool CheckButtonPressed::getSaveToFileStatus()
{
    return saveToFileStatus;
}

void CheckButtonPressed::setSaveToFileStatus(bool value)
{
    saveToFileStatus = value;
}

CheckButtonPressed::CheckButtonPressed()
{
    loopStatus = false;
    saveToFileStatus = false;
    howManySecondToGenerateNextBoard = 1;
}

float CheckButtonPressed::getHowManySecondToGenerateNextBoard()
{
    return howManySecondToGenerateNextBoard;
}

void CheckButtonPressed::checkStatusOfButtonPressed()
{
    if(GetAsyncKeyState(VK_ESCAPE))
        {
            exit(0);
        }
    else if(GetAsyncKeyState(VK_SPACE))
    {
        loopStatus = !loopStatus;
        Sleep(100);
    }
    else if(GetAsyncKeyState(VK_ADD))
    {
        howManySecondToGenerateNextBoard*=2;
    }
    else if(GetAsyncKeyState(VK_SUBTRACT))
    {
        howManySecondToGenerateNextBoard/=2;
    }
    else if(GetAsyncKeyState(VK_CONTROL) && GetAsyncKeyState(0x53))
    {
        saveToFileStatus = true;
    }
}


bool CheckButtonPressed::getStatusOfLoop()
{
    return loopStatus;
}
