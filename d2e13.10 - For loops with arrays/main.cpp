#include <iostream>
using namespace std;

//BROKEN
int main()
{
    //Creates array:
    int temperature[5];

    // Assigns array's elements
    temperature[0] = 17;
    temperature[1] = -65;
    temperature[2] = -20;
    temperature[3] = 9;
    temperature[4] = 42;

    //sum the elements of the array and print it out in the terminal
    int sum = 0;
    for(int i = 0; i < 5; i++) //adds 1 to I per loop
    {
        sum = sum + temperature[i];
    }
    cout << "Average temperature is: "<<sum/5;
    cin.get();
    return 0;
}
