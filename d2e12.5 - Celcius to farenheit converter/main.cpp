#include <iostream>

using namespace std;

//Function, CelciusToFahrenheit, converts its namesake
static int CelciusToFahrenheit (int celcius)
{
    //PEMDAS fits so no parentheses are needed
    int fahrenheit = celcius * 9 / 5 + 32;
    return fahrenheit;
}

int main()
{
    cout << "Write the degrees in celcius: ";
    int celcius;
    cin >> celcius;

    int fahrenheit = CelciusToFahrenheit(celcius);
    cout << celcius << " degrees celcius is " << fahrenheit << " degrees fahrenheit.";
    cin.get();
    return 0;
}
