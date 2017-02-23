#include "filenamereader.h"


std::string FilenameReader::getFileName() const
{
    return fileName;
}

FilenameReader::FilenameReader()
{

}

void FilenameReader::askUserAboutFileName()
{
    std::cout<<"Please input a name of file: ";
    std::cin>>fileName;
}
