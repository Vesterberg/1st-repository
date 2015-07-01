#include <iostream>

using namespace std;

// The point of this is to prove the rule that a variable in a function does not "tag along" to the function where it is called on.
// Instead an entirely new variable is created and given the same value as the variable of the function that was called on (the indata from the called on function)


//Function, CelciusToFahrenheit, converts its namesake
static int CelciusToFahrenheit (int c) // Variable c in this function is not the same as variable celcius in the main function, same goes for variable f and fahrenheit
{
    //PEMDAS fits so no parentheses are needed
    int f = c * 9 / 5 + 32;
    return f;
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

