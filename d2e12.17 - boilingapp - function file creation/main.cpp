#include <iostream>
#include "temperature.h"
using namespace std;

int main()
{
    //Overlay 1 test
    int fahrenheitI = CelciusToFahrenheit(100);
    cout << fahrenheitI << endl;

    //Overlay 2 test
    float fahrenheitF = CelciusToFahrenheit(97.3f);
    cout << fahrenheitF << endl;

    int temperature;
    cin >> temperature;
    if (IsBoiling(temperature)) //Checks if it boils
        cout << "Its boiling!";
    else
        cout << "Not boiling yet";
    return 0;
}
