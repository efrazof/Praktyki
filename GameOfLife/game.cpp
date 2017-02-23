#include "Game.h"

Board board(20,50);

void Game::readingFromfileTxt()
{
    ReadFromTxtFile reader(fileNameToLoad);
    Board BoardFromFile(*reader.getSizeofBoard());
    FillWithTxtFile fillerWithTxtFile;
    fillerWithTxtFile.fillBoardWithString(BoardFromFile,fileNameToLoad);
    setBoard(BoardFromFile);
}

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
               std::cout<<"Type file name to load: ";
               std::cin>>fileNameToLoad;
               readingFromfileTxt();
               startInfiniteLoop();
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

void Game::setBoard(const Board &value)
{
    board = value;
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
            display.displayCounterOnTheCommandLine(counterOfIteration);
            counterOfIteration++;
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
