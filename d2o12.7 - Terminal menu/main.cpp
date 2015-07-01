#include <iostream>
#include "temperature.h"

using namespace std;




int main()
{
    while (true)
    {
    //Write menu:
    cout << "Pick:\n";
    cout << "[B]oiling water check\n";
    cout << "[I]nteger celcius to Fahrenheit converter\n";
    cout << "[D]ecimal celcius to Fahrenheit converter\n";
    cout << "[Q]uit\n";

    char menuSelection; //Enables users to pick an option
    cin >> menuSelection;
    if (menuSelection == 'B' || menuSelection == 'b')
    {
        cout << "What is the waters temperature?" << endl;
        int temperature;
        cin >> temperature;
        if (IsBoiling(temperature)) //Checks if it boils
        {
            cout << "Its boiling!\n";
        }
        else
        {
            cout << "Not boiling yet\n";
        }
    }
    else if (menuSelection == 'I' || menuSelection == 'i')
    {
        //Overlay 1 test, integer celcius to farenheit converter
        int fahrenheitI = CelciusToFahrenheit(100);
        cout << fahrenheitI << "\n";
    }
    else if (menuSelection == 'D' || menuSelection == 'd')
    {
        //Overlay 2 test
        float fahrenheitF = CelciusToFahrenheit(97.3f);
        cout << fahrenheitF << "\n";
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
