#include "mock_savetofile.h"

std::string Mock_savetofile::checkFilename()
{
    FilenameReader read;
    std::string filename="board.txt";
    read.getFileName()=filename;
    return filename;
}

Mock_savetofile::Mock_savetofile(std::vector<std::vector<bool>> boolBoard)
{

SaveToFileWithNameAndText saveToFile;
if (checkFilename()=="board.txt"){
saveToFile.saveFile(boolBoard);}

}
