#ifndef SYSTEMCOMAND_H
#define SYSTEMCOMAND_H
#include "checkbuttonpressed.h"

class SystemComand
{
public:
    SystemComand();
    void sleepFunction(bool loopStatus, float howManySec);
    void cleanFunction();
    void systemPause();
};

#endif // SYSTEMCOMAND_H
