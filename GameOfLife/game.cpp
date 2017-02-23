#include "Game.h"

Board board(20,50);

Game::Game()
{
counterOfIterations = 0;
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
            command.cleanCommandPromptFunction();
            if (newPressed.getSaveToFileStatus() == true)
            {
                saveToFile.saveFile(board.getTheBoard());
                newPressed.setSaveToFileStatus(false);
            }
            converter.convertBoolBoardToString((board.getTheBoard()));
            display.displayGameBoardOnTheCommandLine(converter.getBoardConvertToString());
            display.displayCounterOnTheCommandLine(counterOfIterations);
            counterOfIterations++;
            board = generator.generateNextBoard(board);
            newPressed.checkStatusOfButtonPressed();
            command.setLoopStatus(newPressed.getStatusOfLoop());
            command.waitAsLongAsDeclaredToGenerateTheNextBoard(newPressed.getHowManySecondToGenerateNextBoard());
        }
        while (newPressed.getStatusOfLoop() == true);
        command.systemPause();
        }
    command.cleanCommandPromptFunction();
}
