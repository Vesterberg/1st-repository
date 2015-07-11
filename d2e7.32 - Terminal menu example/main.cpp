#include <iostream>

using namespace std;


int main()
{
    while (true)
    {
    //Write menu:
    cout << "Pick:\n";
    cout << "[P]lay\n";
    cout << "[H]ighscore\n";
    cout << "[Q]uit\n";

    char menuSelection; //Enables users to pick an option
    cin >> menuSelection;
    if (menuSelection == '1' || menuSelection == '1')
    {
        cout << "Welcome to the game\n";
        //Add gamecode
    }
    else if (menuSelection == 'H' || menuSelection == 'h')
    {
        cout << "Welcome to the highscore list\n";
        //Add highscorelist code
    }
    else if (menuSelection == 'Q' || menuSelection == 'q')
    {
        break;
        //breaks loop
    }
    else
    {
        cout << "Invalid option\n";
    }
}

}
