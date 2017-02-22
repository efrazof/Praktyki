#include "Game.h"

Board board;

Game::Game()
{
board.setNumberOfRow(20);
board.setNumberOfCollumn(50);
filler.fillBoard(board);
startInfiniteLoop();
}

void Game::startInfiniteLoop()
{
    while(1)
        {
        newPressed.checkStatusOfButtonPressed();
        do
        {
            comand.cleanFunction();
            if (newPressed.getSaveToFileStatus() == true)
            {
                saveToFile.saveFile(converter.getBoardConvertToString());
                newPressed.setSaveToFileStatus(false);
            }
            converter.convertBoolBoardToString((board.getTheBoard()));
            display.displayGameBoardOnTheCommandLine(converter.getBoardConvertToString());
            board = generator.generateNextBoard(board);
            newPressed.checkStatusOfButtonPressed();
            comand.sleepFunction(newPressed.getStatusOfLoop(),newPressed.getHowManySec());
        }
        while (newPressed.getStatusOfLoop() == true);
        comand.systemPause();
        }
    comand.cleanFunction();
}
