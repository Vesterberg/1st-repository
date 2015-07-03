#include <iostream>
#include <vector>
using namespace std;


int main()
{
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
    cin.get();
    return 0;
}
