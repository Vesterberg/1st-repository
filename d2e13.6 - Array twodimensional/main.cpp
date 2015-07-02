#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world, Invisible arrays away!" << endl;
    int gameBoard[6][4];
    gameBoard[0][0] = 1;
    gameBoard[0][1] = 1;
    gameBoard[0][2] = 1;
    gameBoard[0][3] = 0;
    gameBoard[1][0] = 0;
    gameBoard[1][1] = 0;
    //Alternatively
    int gameBoard2[4][6] =  {{1,0,0,1,0,0},
                            {1,0,0,1,0,0},
                            {1,0,0,0,0,0},
                            {0,0,1,1,1,1}};
    cin.get();
    return 0;
}
