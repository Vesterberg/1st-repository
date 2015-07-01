#include <iostream>

using namespace std;

//function: IsBoiling, checks if the water is boiling. bool = boolean = true or false = 1 or 0
bool IsBoiling(int temperature)
{
    if (temperature < 100)
    {
        return false;
    }
    return true;
}

//Function: program start
int main()
{
    cout << "Enter water temperature: ";
    int temperature;
    cin >> temperature;

    if (IsBoiling(temperature)) //Checks if it boils
        cout << "Its boiling!";
    else
        cout << "Not boiling yet";

    cin.get();
    return 0;
}
