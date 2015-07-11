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
    cout << "[A]verage temperature of 5 temperatures you pick out\n";
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

//Creates array:
    int temperature[5];

    // Assigns array's elements
    temperature[0] = 0;
    temperature[1] = 0;
    temperature[2] = 0;
    temperature[3] = 0;
    temperature[4] = 0;

    //sum the elements of the array and print it out in the terminal
    int sum = 0;
    for(int i = 0; i < 5; i++) //adds 1 to I per loop
    {
        cout << "Input temperature nr " << i << ": ";
        cin >> temperature[i];
        sum = sum + temperature[i];
    }
    cout << "Average temperature is: "<<sum/5;
