#ifndef FILENAMEREADER_H
#define FILENAMEREADER_H

#include <iostream>

class FilenameReader
{
private:
    std::string fileName;
public:
    FilenameReader();
    void askUserAboutFileName();
    std::string getFileName() const;
};

#endif // FILENAMEREADER_H
