#include "systemcommand.h"

bool SystemCommand::getLoopStatus() const
{
    return loopStatus;
}

void SystemCommand::setLoopStatus(bool value)
{
    loopStatus = value;
}

SystemCommand::SystemCommand()
{

}

void SystemCommand::waitAsLongAsDeclaredToGenerateTheNextBoard(float howManySecondToGenerateNextBoard)
{
    if (loopStatus)
    {
         Sleep(howManySecondToGenerateNextBoard*1000);
    }
}

void SystemCommand::cleanCommandPromptFunction()
{
    system("cls");
}

void SystemCommand::systemPause()
{
    system("pause");
}
