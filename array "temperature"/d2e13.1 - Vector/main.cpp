#include <iostream>
#include <vector>
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
    int sum = temperature[0]+temperature[1]+temperature[2]+temperature[3]+temperature[4];
    cout << "Average temperature is: "<<sum/5;
    cin.get()
    return 0;
}
