#include <iostream>

using namespace std;

//for means "do something with each of these things".
//while means "keep doing this until something is no longer true".

int main()
{
    int i = 0;
    while(i < 5) // While loops are identical to for-loops
    {
        cout << i << endl; // prints the value of i
        i++; // adds 1 to the value of i
    }

    for(int i = 0; i<5;i++) // adds 1 to the value of i
    {
        cout << i << endl; // prints the value of i
    }

    cout << "Hello world!" << endl;
    cin.get();
    return 0;
}
