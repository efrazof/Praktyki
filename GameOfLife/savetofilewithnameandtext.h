#ifndef SAVETOFILE_H
#define SAVETOFILE_H
#include <fstream>
#include <iostream>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

class SaveToFileWithNameAndText
{
private:
    std::string fileName;
    bool fileExistStatus;

public:
    SaveToFileWithNameAndText();
    void saveFile(std::string);
    void askUserFileName();
    void checkIfFileExist();
    void ifFileExistAskRenameOrOverwritten();
};

#endif // SAVETOFILE_H
