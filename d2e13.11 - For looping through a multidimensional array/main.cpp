#include <iostream>

using namespace std;

int main()
{

    cout << "Hello world, array away" << endl;

    const int width = 4;
    const int height = 6;

    //creates a twodimensional array, 6x4 sized
    int gameBoard[width][height] = {{1,0,0,1,0,0},
                                    {1,0,0,1,0,0},
                                    {1,0,0,0,0,0},
                                    {0,0,1,1,1,1}};

    // Outer horizontal scanning for-loop
    for (int i = 0; i < width; i++)
    {
        //Graphics
        cout << "-------------------------" << endl;
        cout << "| ";
        //another inner vertical scanning for-loop
        for (int j = 0; j < height; j++)
        {
            //Displays element in that position in the array
            cout << gameBoard [i][j] << " | ";
        }
        cout << endl;
    }
    cout << "-------------------------";

    cin.get();
    return 0;
}
