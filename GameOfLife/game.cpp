#include "Game.h"


Game::Game()
{
        int yourChoice;
        do{

           std::cout << "What you want to do:\n";
           std::cout << "1. Load board form file txt\n";
           std::cout << "2. Load board form file image\n";
           std::cout << "3. Generating random board\n";
           std::cout << "0. Exit\n";
           std::cin >> yourChoice;
           switch( yourChoice )  {
           case 2:
               //Load board from txt method
               break;
           case 1:
               //load board from image method
               break;
           case 3:
               filler.fillBoard(board);
               startInfiniteLoop();
               break;
           case 0:
               std::cout <<"Goodbye.\n";
               exit(1);
               break;
           }
        }while (yourChoice != 0);
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
