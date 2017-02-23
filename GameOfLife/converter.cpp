#include "converter.h"


std::string Converter::convertBoolBoardToString (std::vector<std::vector<bool>> theBoard)
{
    boardConvertToString.clear();
    for(std::size_t numberOfRow=1; numberOfRow<theBoard.size()-1; numberOfRow++)
    {
        for(std::size_t numberOfColumn=1; numberOfColumn<theBoard[numberOfRow].size()-1; numberOfColumn++)
        {
            if(theBoard[numberOfRow][numberOfColumn]== 0)
            {

                boardConvertToString+=deadCell;
            }
            else
            {
                boardConvertToString+=liveCell;
            }
        }
        boardConvertToString+="\n";
    }
    return boardConvertToString;
}

std::string Converter::getBoardConvertToString()
{
    return boardConvertToString;
}
