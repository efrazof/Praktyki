#include "mock_savetofile.h"

Mock_savetofile::Mock_savetofile(std::vector<std::vector<bool>> boolBoard)
{
    std::ofstream file("testFilenameMockReader.txt");
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
