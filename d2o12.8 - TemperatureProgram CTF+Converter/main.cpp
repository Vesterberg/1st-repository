#include <iostream>

using namespace std;

//Celcius to farenheit in one function
void ctf()
{
    //Function, CelciusToFahrenheit, converts its namesake
    // Overlayer 1 - with int
    int CelciusToFahrenheit (int celcius)
    {
        //PEMDAS fits so no parentheses are needed
        int fahrenheit = celcius * 9 / 5 + 32;
        return fahrenheit;
    }

    //Overlayer 2 - with float
    float CelciusToFahrenheit (float celcius)
    {
        //PEMDAS fits so no parentheses are needed
        float fahrenheit = celcius * 9 / 5 + 32;
        return fahrenheit;
    }
}

//Start program
int main()
{
    //Overlayer 1 int test
    int fahrenheitI = CelciusToFahrenheit(100);
    cout << fahrenheitI << endl;
    //Overlayer 2 float test
    float fahrenheitF = CelciusToFahrenheit(97.3f);
    cout << fahrenheitF << endl;

    cin.get();
    return 0;
}
