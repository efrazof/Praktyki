#include "savetofilewithnameandtext.h"



SaveToFileWithNameAndText::SaveToFileWithNameAndText()
{

}


void SaveToFileWithNameAndText::askUserFileName()
{
    std::cout<<"Please input a name of file: ";
    std::cin>>fileName;
}


void SaveToFileWithNameAndText::checkIfFileExist()
{
    struct stat buf;
    if (stat(fileName.c_str(), &buf) != -1)
    {
        fileExistStatus = true;
    }
    else fileExistStatus = false;
}

void SaveToFileWithNameAndText::ifFileExistAskRenameOrOverwritten()
{
    if (fileExistStatus == true)
    {
        int userChoice;
        std::cout<<"File exist. Select:\n  1- Rename\n  2- Overwritten\n-> ";
        std::cin>>userChoice;
        switch(userChoice)
        {
        case 1:
            break;

        case 2:
            fileExistStatus = false;
            break;

        default:
            std::cout<<"This option do not exist\n";
            break;
        }
    }
}

void SaveToFileWithNameAndText::saveFile(std::string text)
{
    do
    {
        askUserFileName();
        checkIfFileExist();
        ifFileExistAskRenameOrOverwritten();
    }
    while(fileExistStatus == true);

    std::ofstream file(fileName);
        if (file.good())
        {
            file << text;
        }
        else
        std::cout << "load failed";
        file.close();
}

