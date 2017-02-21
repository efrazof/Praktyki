#include "systemcomand.h"

SystemComand::SystemComand()
{

}

void SystemComand::sleepFunction(bool loopStatus, float howManySec)
{
    if (loopStatus == true)
    {
         Sleep(howManySec*1000);
    }
}

void SystemComand::cleanFunction()
{
    system("cls");
}

void SystemComand::systemPause()
{
    system("pause");
}
