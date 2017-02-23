#include "savetofilewithnameandtext.h"



SaveToFileWithNameAndText::SaveToFileWithNameAndText()
{

}


void SaveToFileWithNameAndText::checkIfFileExist()
{
    struct stat buf;
    if (stat(filenameReader.getFileName().c_str(), &buf) != -1)
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

void SaveToFileWithNameAndText::saveFile(std::vector<std::vector<bool>> boolBoard)
{
    do
    {
        filenameReader.askUserAboutFileName();
        checkIfFileExist();
        ifFileExistAskRenameOrOverwritten();
    }
    while(fileExistStatus == true);

    std::ofstream file(filenameReader.getFileName());
        if (file.good())
        {
            for( int i = 1; i<boolBoard.size()-1;i++)
            {
                for( int q = 1; q<boolBoard[i].size()-1;q++)
                {
                      file << boolBoard[i][q];
                }
                file << '\n';
            }
        }
        else
        std::cout << "load failed";
        file.close();
}

