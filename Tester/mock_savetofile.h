#ifndef MOCK_SAVETOFILE_H
#define MOCK_SAVETOFILE_H

#include "..\GameOfLife\savetofilewithnameandtext.h"
#include <vector>

class Mock_savetofile: public SaveToFileWithNameAndText
{
public:
    Mock_savetofile(std::vector<std::vector<bool> > boolBoard);

};

#endif // MOCK_SAVETOFILE_H
